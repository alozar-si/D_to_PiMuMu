#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Author: Andrej Lozar, IJS, 2022-04-17
Used with release-04-02-09
Larger releases do not work and they crash
"""
#######################################################
#
#
# D+ -> pi+ mu+ mu-
#        
#
# #####################################################



######################################################
#
# 1. Importing necessary helper scripts
#
# #####################################################
import os
import sys
import basf2
import modularAnalysis as ma
from variables import variables

######################################################
#
# 2. Handling of command line arguments
#
# #####################################################

jobFileSize = 1
if len(sys.argv) == 5:
    jobFileSize = int(sys.argv[4])
    print("[INFO] Job file size set to %d." %jobFileSize)
elif len(sys.argv) != 4:
    sys.exit('Must provide three input parameters: [sample, e.g. charged, signal], job number, and track selection. JobFileSize is optional.')

sample = sys.argv[1]
jobNo = int(sys.argv[2])
trackSelection = sys.argv[3]

######################################################
#
# 3. Creating main path
#
# #####################################################

main = basf2.create_path()

######################################################
#
# 4. Reading in data files
#
# #####################################################

mc_path = "/ghi/fs01/belle2/bdata/MC/MC13a_cdst/generic/"
filler = "_cdst_eph3_" 

if sample == 'signal':
    ma.inputMdstList('default', ['/group/belle2/tutorial/2019_June/Bu2JpsiK/mdst_Bu2JpsiK_*.root'], path=main)

elif sample in ['charged', 'mixed', 'uubar', 'ddbar', 'ssbar', 'ccbar']:
    file_folder = mc_path + sample + "/"
    input_file_list =  [file_folder + sample + filler + "%d.root" %i for i in range(jobNo*jobFileSize, (jobNo+1)*jobFileSize)]
    print("\nInput file list:\n", input_file_list, "\n")
elif sample == 'proc10':
    """
    TO BE FIXED
    """
    ma.inputMdstList('default', 
                     ['/group/belle2/dataprod/Data/OfficialReco/proc10/e0007/4S/GoodRuns/r*/skim/hlt_hadron/mdst/sub00/*.root',
                      '/group/belle2/dataprod/Data/OfficialReco/proc10/e0008/4S/GoodRuns/r*/skim/hlt_hadron/mdst/sub00/*.root'],
                     path=main)
else:
    sys.exit('[ERROR] The only valid sample names are charged, mixed, uubar, ddbar, ssbar, ccbar. Needs fixing: signal and proc10!')
    
ma.inputMdstList("default", input_file_list, path=main)


######################################################
#
# 5. Analyzing the event shape
#
# #####################################################
"""
To be done
"""

######################################################
#
# X. Add aliases
#
# #####################################################

from variables import variables as vm
# Aliases
vm.addAlias("eID", "electronID")
vm.addAlias("piID", "pionID")
vm.addAlias('R_Kpi', 'pidPairProbabilityExpert(321, 211, ARICH,TOP,CDC)')  # kaon/pion w/o arich
vm.addAlias("muID", "muonID")
vm.addAlias("D_p_cms", "useCMSFrame(p)")

######################################################
#
# 6. Creating and filling final state ParticleLists
#
# #####################################################
from stdCharged import stdMu, stdPi

# basic quality cut strings
trackQuality = 'thetaInCDCAcceptance'
ipCut = 'dr < 0.5 and abs(dz) < 2.0'
muPidCut  = 'muID > 0.9'
piPidCut = 'R_Kpi < 0.9'
userCut = trackQuality + ' and ' + ipCut

# create and fill final state ParticleLists
if trackSelection == 'MCmatch':
    if sample == 'proc11':
        print('You can not select tracks based on MC information when running over real data!')
elif trackSelection == 'loose':
    stdMu('loose', path=main)
    stdPi('loose', path=main)
elif trackSelection == 'good':
    stdMu('good', path=main)
    stdPi('good', path=main)
elif trackSelection == 'higheff':
    stdMu('higheff', path=main)
    stdPi('higheff', path=main)
elif trackSelection == 'user':
    ma.fillParticleList('mu+:user', userCut + ' and ' + muPidCut, path=main)
    ma.fillParticleList('pi+:user', userCut + ' and ' + piPidCut, path=main)
else:
    sys.exit('For the track selection the only valid options so far are MCmatch, loose, good and user!')


######################################################
#
# 7. Reconstructing phi from mumu-pair
#
# #####################################################
phi_mass_window = '0.99 < M < 1.05'
phi_cuts = phi_mass_window #+ ' and ' + jpsipstarwindow

#ma.reconstructDecay('phi:mumu -> mu+:'+trackSelection + ' mu-:'+trackSelection, cut=phi_cuts, path=main)

######################################################
#
# 8. Reconstructing D+ from pi+ mu+ mu+
#
# #####################################################

dmasswindow = '1.70 < M < 2.1' #mass = 1.8696 GeV
number_of_tracks = "nTracks > 2"
D_cms_p = "D_p_cms > 0"
d_cuts = dmasswindow + ' and ' + number_of_tracks + ' and ' + D_cms_p #+ ' and ' + jpsipstarwindow

ma.reconstructDecay('D+:mumu -> mu+:'+trackSelection + ' mu-:'+trackSelection + ' pi+:' + trackSelection, cut=d_cuts, path=main)


######################################################
#
# 9. Fitting the B+ decay vertex
#
# #####################################################
from vertex import vertexKFit, vertexTree
vertexKFit("D+:mumu", 0.000, path=main)
######################################################
#
# 10. Optionally: Constructing veto
#
# #####################################################

######################################################
#
# 11. Performing best candidate selection
#
# #####################################################

######################################################
#
# 12. Performing MC matching (MC truth association)
#
# #####################################################

if(sample != 'proc11'):
    #ma.matchMCTruth("phi:mumu", path=main)
    ma.matchMCTruth("D+:mumu", path=main)

######################################################
#
# 13. Creating list of variables for ntuple
#
# #####################################################
import variables.collections as vc
import variables.utils as vu


std_vars = vc.kinematics

# Variables for final states (electrons, positrons, pions)
fs_vars = vc.pid + std_vars #vc.track + vc.track_hits

cmskinematics = vu.create_aliases(
    vc.kinematics, "useCMSFrame({variable})", "CMS")

if(sample != 'proc11'):
    std_vars += vc.mc_kinematics + vc.mc_truth

d_vars = []

d_vars += std_vars
d_vars += vc.inv_mass
d_vars += cmskinematics
d_vars += ["pValue"]

# Variables for final states (electrons, positrons, pions)
fs_vars = vc.pid + ["R_Kpi"] + std_vars + vc.inv_mass#vc.track + vc.track_hits

d_vars += vu.create_aliases_for_selected(

    fs_vars,

    "D+:mumu -> ^mu+:"+trackSelection+" ^mu-:"+trackSelection + "^pi+:" + trackSelection,

    prefix=["mu_p", "mu_m", "pi_p"],

)

"""phi_vars = []
phi_vars += std_vars
phi_vars += vc.inv_mass

phi_vars += vu.create_aliases_for_selected(

    fs_vars,

    "phi:mumu -> ^mu+:"+trackSelection+" ^mu-:"+trackSelection,

    prefix=["mup", "mum"],

)"""

######################################################
#
# 14. Writing ntuple to output file
#
# #####################################################
outDir = './recodata'
if not os.path.exists(outDir):
    os.makedirs(outDir)

outSubFolder = "/" + sample

if not os.path.exists(outDir + outSubFolder):
    os.makedirs(outDir+outSubFolder)

outFolder = outDir + outSubFolder

filenameEnd = '_'.join([sample,str(jobNo),str(jobFileSize),trackSelection]) + '.root'

outputFileName = outFolder + '/d2pimumu_reco_' + filenameEnd

main.add_module('VariablesToNtuple',
                    particleList='D+:mumu',
                    fileName=outputFileName,
                    treeName='D',
                    variables=d_vars)




######################################################
#
# 15. Printing summary of created lists
#
# #####################################################

ma.summaryOfLists(['D+:mumu'], path=main)

######################################################
#
# 16. Processing main path
#
# #####################################################

basf2.process(main)

######################################################
#
# 17. Printing timing and memory summary
#
# #####################################################

print(basf2.statistics)