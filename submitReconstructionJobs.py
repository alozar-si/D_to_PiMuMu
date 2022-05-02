#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import os
import sys
import time


def submit_job(list_args, log_dir, cmd, demo=0):
    """For submiting jobs to kekcc

    Args:
        list_args (_type_): _description_
        log_dir (str): location for log files
        cmd (str): command to be executed
        demo (int, optional): Run demo only prints the command. Defaults to 0.
    """
    # end of file name for log files
    filename_end = sample + '_' + '_'.join(list_args) + '_' + trackSelection
    arg_str = " ".join(list_args)
            
    # job submission with arguments
    if(demo):
        print(
            f'bsub -q s -oo {log_dir}/out_{filename_end}.log '
            f'-eo {log_dir}/err_{filename_end}.err '
            f'-N "{cmd} {sample} {arg_str} {trackSelection}"'
        )    
    else:
        os.system(
            f'bsub -q s -oo {log_dir}/out_{filename_end}.log '
            f'-eo {log_dir}/err_{filename_end}.err '
            f'-N "{cmd} {sample} {arg_str} {trackSelection}"'
        )
    

    # summary
    print('Submitted job for: ' + ' '.join(list_args))

if __name__ == "__main__":
    luminosity = 1 #1/fb
    demo = 0

    if len(sys.argv) < 3:
        sys.exit('Need two arguments: sample name [charged, mixed, etc.] '
                'and track selection [loose, good, user, MCmatch]')
    elif len(sys.argv) == 4:
        if(sys.argv[3] == '0' or sys.argv[3] == '1'):
            demo = int(sys.argv[3])
        else:
            luminosity == float(sys.argv[3])
    elif len(sys.argv) == 5:
        if(sys.argv[3] == '0' or sys.argv[3] == '1'):
            demo = int(sys.argv[3])
        else:
            sys.exit("Please specify arguments as [sample] [trackSelection] [demo] [luminosity]")
        
        luminosity == float(sys.argv[4])
            
    if "BELLE2_RELEASE_DIR" not in os.environ:
        sys.exit("Please set up basf2! source /cvmfs/belle.cern.ch/tools/b2setup release-04-02-09")

    sample = sys.argv[1]
    trackSelection = sys.argv[2]
    print("Demo:", demo)
    # the job we are submitting
    my_cmd = './ReconstructionJob.sh'
    my_log_dir = f'./ReconstructionLog/{sample}' 
    # create output directory for log files if it doesn't exist
    if not os.path.exists(my_log_dir):
        os.makedirs(my_log_dir)

    # ================================= Submit jobs ! ==============================

    # Total size iz 50/fb
    max_job_numbers = {
        "charged": 2700,
        "mixed": 2550,
        "uubar": 8050,
        "ddbar": 2000,
        "ssbar": 1900,
        "ccbar": 6500,
        "signal": 0,
    }
    
    # Log into file all sumbitions
    log_file = open('submitReconctructionJob.log', 'a')
    time_start=time.strftime("%Y-%m-%d %H:%M:%S:", time.gmtime())
    info_line = time_start + f" submitReconctructionJob started\n\tsample: {sample}\n\ttrack selection: {trackSelection}\n\tluminosity: {luminosity:.2f}\n\tjob:"
    log_file.write(info_line)
    
    max_job_number = int(max_job_numbers[sample] / 50 * luminosity)
    
    print("[INFO] Reconstructing %s, %s, %d files <=> %.2f/fb" %(sample, trackSelection, max_job_number, luminosity))
    
    for job_number in range(1, max_job_number):
        #Submit work
        submit_job([f"{job_number:03d}"], my_log_dir, my_cmd, demo=demo)
        
        # Log
        log_file.write(f"{job_number:03d},")
        
        if(demo):
            break
        time.sleep(0.3)  # else we have problems aborting with Ctrl C
    
    log_file.write("\n")
    log_file.close()