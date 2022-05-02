//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon May  2 14:55:12 2022 by ROOT version 6.24/06
// from TChain D/D
// For processing decay D+->pi+ mu+ mu-
//////////////////////////////////////////////////////////

#ifndef myClass_h
#define myClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TString.h>
#include "utility.h"

// Header file for the classes stored in the TTree if any.

class myClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMax__experiment_ = 1;
   static constexpr Int_t kMax__run_ = 1;
   static constexpr Int_t kMax__event_ = 1;
   static constexpr Int_t kMax__candidate_ = 1;
   static constexpr Int_t kMax__ncandidates_ = 1;
   static constexpr Int_t kMax__weight_ = 1;

   // Declaration of leaf types
   Int_t           __experiment__;
   Int_t           __run__;
   Int_t           __event__;
   Int_t           __candidate__;
   Int_t           __ncandidates__;
   Double_t        __weight__;
   Double_t        isSignal;
   Double_t        mcErrors;
   Double_t        mcPDG;
   Double_t        px;
   Double_t        py;
   Double_t        pz;
   Double_t        pt;
   Double_t        p;
   Double_t        E;
   Double_t        mcE;
   Double_t        mcP;
   Double_t        mcPT;
   Double_t        mcPX;
   Double_t        mcPY;
   Double_t        mcPZ;
   Double_t        mcPhi;
   Double_t        M;
   Double_t        ErrM;
   Double_t        SigM;
   Double_t        InvM;
   Double_t        CMS_px;
   Double_t        CMS_py;
   Double_t        CMS_pz;
   Double_t        CMS_pt;
   Double_t        CMS_p;
   Double_t        CMS_E;
   Double_t        pValue;
   Double_t        mu_p_kaonID;
   Double_t        mu_p_pionID;
   Double_t        mu_p_protonID;
   Double_t        mu_p_muonID;
   Double_t        mu_p_electronID;
   Double_t        mu_p_deuteronID;
   Double_t        mu_p_R_Kpi;
   Double_t        mu_p_isSignal;
   Double_t        mu_p_mcErrors;
   Double_t        mu_p_mcPDG;
   Double_t        mu_p_px;
   Double_t        mu_p_py;
   Double_t        mu_p_pz;
   Double_t        mu_p_pt;
   Double_t        mu_p_p;
   Double_t        mu_p_E;
   Double_t        mu_p_mcE;
   Double_t        mu_p_mcP;
   Double_t        mu_p_mcPT;
   Double_t        mu_p_mcPX;
   Double_t        mu_p_mcPY;
   Double_t        mu_p_mcPZ;
   Double_t        mu_p_mcPhi;
   Double_t        mu_p_M;
   Double_t        mu_p_ErrM;
   Double_t        mu_p_SigM;
   Double_t        mu_p_InvM;
   Double_t        mu_m_kaonID;
   Double_t        mu_m_pionID;
   Double_t        mu_m_protonID;
   Double_t        mu_m_muonID;
   Double_t        mu_m_electronID;
   Double_t        mu_m_deuteronID;
   Double_t        mu_m_R_Kpi;
   Double_t        mu_m_isSignal;
   Double_t        mu_m_mcErrors;
   Double_t        mu_m_mcPDG;
   Double_t        mu_m_px;
   Double_t        mu_m_py;
   Double_t        mu_m_pz;
   Double_t        mu_m_pt;
   Double_t        mu_m_p;
   Double_t        mu_m_E;
   Double_t        mu_m_mcE;
   Double_t        mu_m_mcP;
   Double_t        mu_m_mcPT;
   Double_t        mu_m_mcPX;
   Double_t        mu_m_mcPY;
   Double_t        mu_m_mcPZ;
   Double_t        mu_m_mcPhi;
   Double_t        mu_m_M;
   Double_t        mu_m_ErrM;
   Double_t        mu_m_SigM;
   Double_t        mu_m_InvM;
   Double_t        pi_p_kaonID;
   Double_t        pi_p_pionID;
   Double_t        pi_p_protonID;
   Double_t        pi_p_muonID;
   Double_t        pi_p_electronID;
   Double_t        pi_p_deuteronID;
   Double_t        pi_p_R_Kpi;
   Double_t        pi_p_isSignal;
   Double_t        pi_p_mcErrors;
   Double_t        pi_p_mcPDG;
   Double_t        pi_p_px;
   Double_t        pi_p_py;
   Double_t        pi_p_pz;
   Double_t        pi_p_pt;
   Double_t        pi_p_p;
   Double_t        pi_p_E;
   Double_t        pi_p_mcE;
   Double_t        pi_p_mcP;
   Double_t        pi_p_mcPT;
   Double_t        pi_p_mcPX;
   Double_t        pi_p_mcPY;
   Double_t        pi_p_mcPZ;
   Double_t        pi_p_mcPhi;
   Double_t        pi_p_M;
   Double_t        pi_p_ErrM;
   Double_t        pi_p_SigM;
   Double_t        pi_p_InvM;
   
   // List of branches
   TBranch        *b___experiment__;   //!
   TBranch        *b___run__;   //!
   TBranch        *b___event__;   //!
   TBranch        *b___candidate__;   //!
   TBranch        *b___ncandidates__;   //!
   TBranch        *b___weight__;   //!
   TBranch        *b_isSignal;   //!
   TBranch        *b_mcErrors;   //!
   TBranch        *b_mcPDG;   //!
   TBranch        *b_px;   //!
   TBranch        *b_py;   //!
   TBranch        *b_pz;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_p;   //!
   TBranch        *b_E;   //!
   TBranch        *b_mcE;   //!
   TBranch        *b_mcP;   //!
   TBranch        *b_mcPT;   //!
   TBranch        *b_mcPX;   //!
   TBranch        *b_mcPY;   //!
   TBranch        *b_mcPZ;   //!
   TBranch        *b_mcPhi;   //!
   TBranch        *b_M;   //!
   TBranch        *b_ErrM;   //!
   TBranch        *b_SigM;   //!
   TBranch        *b_InvM;   //!
   TBranch        *b_CMS_px;   //!
   TBranch        *b_CMS_py;   //!
   TBranch        *b_CMS_pz;   //!
   TBranch        *b_CMS_pt;   //!
   TBranch        *b_CMS_p;   //!
   TBranch        *b_CMS_E;   //!
   TBranch        *b_pValue;   //!
   TBranch        *b_mu_p_kaonID;   //!
   TBranch        *b_mu_p_pionID;   //!
   TBranch        *b_mu_p_protonID;   //!
   TBranch        *b_mu_p_muonID;   //!
   TBranch        *b_mu_p_electronID;   //!
   TBranch        *b_mu_p_deuteronID;   //!
   TBranch        *b_mu_p_R_Kpi;   //!
   TBranch        *b_mu_p_isSignal;   //!
   TBranch        *b_mu_p_mcErrors;   //!
   TBranch        *b_mu_p_mcPDG;   //!
   TBranch        *b_mu_p_px;   //!
   TBranch        *b_mu_p_py;   //!
   TBranch        *b_mu_p_pz;   //!
   TBranch        *b_mu_p_pt;   //!
   TBranch        *b_mu_p_p;   //!
   TBranch        *b_mu_p_E;   //!
   TBranch        *b_mu_p_mcE;   //!
   TBranch        *b_mu_p_mcP;   //!
   TBranch        *b_mu_p_mcPT;   //!
   TBranch        *b_mu_p_mcPX;   //!
   TBranch        *b_mu_p_mcPY;   //!
   TBranch        *b_mu_p_mcPZ;   //!
   TBranch        *b_mu_p_mcPhi;   //!
   TBranch        *b_mu_p_M;   //!
   TBranch        *b_mu_p_ErrM;   //!
   TBranch        *b_mu_p_SigM;   //!
   TBranch        *b_mu_p_InvM;   //!
   TBranch        *b_mu_m_kaonID;   //!
   TBranch        *b_mu_m_pionID;   //!
   TBranch        *b_mu_m_protonID;   //!
   TBranch        *b_mu_m_muonID;   //!
   TBranch        *b_mu_m_electronID;   //!
   TBranch        *b_mu_m_deuteronID;   //!
   TBranch        *b_mu_m_R_Kpi;   //!
   TBranch        *b_mu_m_isSignal;   //!
   TBranch        *b_mu_m_mcErrors;   //!
   TBranch        *b_mu_m_mcPDG;   //!
   TBranch        *b_mu_m_px;   //!
   TBranch        *b_mu_m_py;   //!
   TBranch        *b_mu_m_pz;   //!
   TBranch        *b_mu_m_pt;   //!
   TBranch        *b_mu_m_p;   //!
   TBranch        *b_mu_m_E;   //!
   TBranch        *b_mu_m_mcE;   //!
   TBranch        *b_mu_m_mcP;   //!
   TBranch        *b_mu_m_mcPT;   //!
   TBranch        *b_mu_m_mcPX;   //!
   TBranch        *b_mu_m_mcPY;   //!
   TBranch        *b_mu_m_mcPZ;   //!
   TBranch        *b_mu_m_mcPhi;   //!
   TBranch        *b_mu_m_M;   //!
   TBranch        *b_mu_m_ErrM;   //!
   TBranch        *b_mu_m_SigM;   //!
   TBranch        *b_mu_m_InvM;   //!
   TBranch        *b_pi_p_kaonID;   //!
   TBranch        *b_pi_p_pionID;   //!
   TBranch        *b_pi_p_protonID;   //!
   TBranch        *b_pi_p_muonID;   //!
   TBranch        *b_pi_p_electronID;   //!
   TBranch        *b_pi_p_deuteronID;   //!
   TBranch        *b_pi_p_R_Kpi;   //!
   TBranch        *b_pi_p_isSignal;   //!
   TBranch        *b_pi_p_mcErrors;   //!
   TBranch        *b_pi_p_mcPDG;   //!
   TBranch        *b_pi_p_px;   //!
   TBranch        *b_pi_p_py;   //!
   TBranch        *b_pi_p_pz;   //!
   TBranch        *b_pi_p_pt;   //!
   TBranch        *b_pi_p_p;   //!
   TBranch        *b_pi_p_E;   //!
   TBranch        *b_pi_p_mcE;   //!
   TBranch        *b_pi_p_mcP;   //!
   TBranch        *b_pi_p_mcPT;   //!
   TBranch        *b_pi_p_mcPX;   //!
   TBranch        *b_pi_p_mcPY;   //!
   TBranch        *b_pi_p_mcPZ;   //!
   TBranch        *b_pi_p_mcPhi;   //!
   TBranch        *b_pi_p_M;   //!
   TBranch        *b_pi_p_ErrM;   //!
   TBranch        *b_pi_p_SigM;   //!
   TBranch        *b_pi_p_InvM;   //!
   
   Double_t       q_sq;

   int            mc_data;
   int            data_size;

   // Input data options
   TString        recoData_folder = "./recoData/";
   int            n_data_folders;
   TString        recoData_paths[10];

   /* --- SAVE OPTIONS --- */
   // Save basic kinematics for tracks
   int            saveKinematicsHistograms         = 1;
   // save ntuples for invm, detPhot, isSignal, p 
   int            saveOutNTuples                   = 0; //tbd
   // save XY, R distribution of track hits w/o ECL cluster
   int            save_trackHits_no_ecl            = 0; //tbd
   // Save TH1 detected photons?
   int            save_number_of_detPhot_per_track = 0; //tbd
   // Save TH2(track_arich_detPhot, expPhotons)
   int            save_exp_det_photons             = 0; //tbd
   // Save distance between track hits
   int            save_distance_between_trackHits  = 0;  //tbd

   int saveOptions[6] = {
      saveKinematicsHistograms,
      saveOutNTuples,
      save_trackHits_no_ecl,
      save_number_of_detPhot_per_track,
      save_exp_det_photons,
      save_distance_between_trackHits
   };

   TString saveOptionsNames[6] = {
      "saveKinematicsHistograms",
      "saveOutNTuples",
      "save_trackHits_no_ecl",
      "save_number_of_detPhot_per_track",
      "save_exp_det_photons",
      "save_distance_between_trackHits"
   };

   // Canvases
   TCanvas*       c_kinematics;
   TCanvas*       c_likeliehoods;
   // Histograms
   TH1F*          h_D_momentum;
   TH1F*          h_D_momentum_cms;
   TH1F*          h_pi_momentum;
   TH1F*          h_mu_0_momentum;
   TH1F*          h_mu_1_momentum;
   TH1F*          h_pi_R_Kpi;
   TH1F*          h_mu_p_muonID;
   TH1F*          h_mu_m_muonID;

   myClass(int _mc_data, int _quick, int proc, TTree *tree=0);
   virtual ~myClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     print_options();
   virtual void     Show(Long64_t entry = -1);

   virtual void     Init_histogram_kinematics();
   virtual void     Fill_histogram_kinematics();
   virtual void     Save_histogram_kinematics();
};

#endif

#ifdef myClass_cxx
myClass::myClass(int _mc_data, int _quick, int proc, TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   mc_data =   _mc_data;
   data_size =     _quick;
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("D",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("D","D");
      /*chain->Add("recodata/charged/d2pimumu_reco_charged_1_1_user.root/D");
      chain->Add("recodata/charged/d2pimumu_reco_charged_2_1_user.root/D");*/
      TString mc_samples[] = {"uubar", "ccbar", "ddbar", "charged", "mixed"};
      if(mc_data){
         n_data_folders = 6;     

         recoData_paths[0] = recoData_folder + "uubar/";
         recoData_paths[1] = recoData_folder + "ccbar/";
         recoData_paths[2] = recoData_folder + "ssbar/";
         recoData_paths[3] = recoData_folder + "ddbar/";
         recoData_paths[4] = recoData_folder + "charged/";      
         recoData_paths[5] = recoData_folder + "mixed/";

      }else{
         n_data_folders = 1;
         recoData_paths[0] = recoData_folder + "proc11/";
      }
      
      for (int i = 0; i < n_data_folders; i++)
      {  
         TString list_root_files[1000];
         int n_files = ut::list_files(recoData_paths[i], list_root_files);
         
         std::cout << Form("[INFO] Loading %d files from %s\n", n_files, recoData_paths[i].Data());

         for (int j = 0; j < n_files; j++)
         {
            //std::cout << list_root_files[j] << std::endl;
            chain->Add(recoData_paths[i] + list_root_files[j] + "/D");
         }
         
      }
      
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

myClass::~myClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t myClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t myClass::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void myClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("__experiment__", &__experiment__, &b___experiment__);
   fChain->SetBranchAddress("__run__", &__run__, &b___run__);
   fChain->SetBranchAddress("__event__", &__event__, &b___event__);
   fChain->SetBranchAddress("__candidate__", &__candidate__, &b___candidate__);
   fChain->SetBranchAddress("__ncandidates__", &__ncandidates__, &b___ncandidates__);
   fChain->SetBranchAddress("__weight__", &__weight__, &b___weight__);
   fChain->SetBranchAddress("isSignal", &isSignal, &b_isSignal);
   fChain->SetBranchAddress("mcErrors", &mcErrors, &b_mcErrors);
   fChain->SetBranchAddress("mcPDG", &mcPDG, &b_mcPDG);
   fChain->SetBranchAddress("px", &px, &b_px);
   fChain->SetBranchAddress("py", &py, &b_py);
   fChain->SetBranchAddress("pz", &pz, &b_pz);
   fChain->SetBranchAddress("pt", &pt, &b_pt);
   fChain->SetBranchAddress("p", &p, &b_p);
   fChain->SetBranchAddress("E", &E, &b_E);
   fChain->SetBranchAddress("mcE", &mcE, &b_mcE);
   fChain->SetBranchAddress("mcP", &mcP, &b_mcP);
   fChain->SetBranchAddress("mcPT", &mcPT, &b_mcPT);
   fChain->SetBranchAddress("mcPX", &mcPX, &b_mcPX);
   fChain->SetBranchAddress("mcPY", &mcPY, &b_mcPY);
   fChain->SetBranchAddress("mcPZ", &mcPZ, &b_mcPZ);
   fChain->SetBranchAddress("mcPhi", &mcPhi, &b_mcPhi);
//    fChain->SetBranchAddress("isSignal", &isSignal, &b_isSignal);
//    fChain->SetBranchAddress("mcErrors", &mcErrors, &b_mcErrors);
//    fChain->SetBranchAddress("mcPDG", &mcPDG, &b_mcPDG);
   fChain->SetBranchAddress("M", &M, &b_M);
   fChain->SetBranchAddress("ErrM", &ErrM, &b_ErrM);
   fChain->SetBranchAddress("SigM", &SigM, &b_SigM);
   fChain->SetBranchAddress("InvM", &InvM, &b_InvM);
   fChain->SetBranchAddress("CMS_px", &CMS_px, &b_CMS_px);
   fChain->SetBranchAddress("CMS_py", &CMS_py, &b_CMS_py);
   fChain->SetBranchAddress("CMS_pz", &CMS_pz, &b_CMS_pz);
   fChain->SetBranchAddress("CMS_pt", &CMS_pt, &b_CMS_pt);
   fChain->SetBranchAddress("CMS_p", &CMS_p, &b_CMS_p);
   fChain->SetBranchAddress("CMS_E", &CMS_E, &b_CMS_E);
   fChain->SetBranchAddress("pValue", &pValue, &b_pValue);
   fChain->SetBranchAddress("mu_p_kaonID", &mu_p_kaonID, &b_mu_p_kaonID);
   fChain->SetBranchAddress("mu_p_pionID", &mu_p_pionID, &b_mu_p_pionID);
   fChain->SetBranchAddress("mu_p_protonID", &mu_p_protonID, &b_mu_p_protonID);
   fChain->SetBranchAddress("mu_p_muonID", &mu_p_muonID, &b_mu_p_muonID);
   fChain->SetBranchAddress("mu_p_electronID", &mu_p_electronID, &b_mu_p_electronID);
   fChain->SetBranchAddress("mu_p_deuteronID", &mu_p_deuteronID, &b_mu_p_deuteronID);
   fChain->SetBranchAddress("mu_p_R_Kpi", &mu_p_R_Kpi, &b_mu_p_R_Kpi);
   fChain->SetBranchAddress("mu_p_isSignal", &mu_p_isSignal, &b_mu_p_isSignal);
   fChain->SetBranchAddress("mu_p_mcErrors", &mu_p_mcErrors, &b_mu_p_mcErrors);
   fChain->SetBranchAddress("mu_p_mcPDG", &mu_p_mcPDG, &b_mu_p_mcPDG);
   fChain->SetBranchAddress("mu_p_px", &mu_p_px, &b_mu_p_px);
   fChain->SetBranchAddress("mu_p_py", &mu_p_py, &b_mu_p_py);
   fChain->SetBranchAddress("mu_p_pz", &mu_p_pz, &b_mu_p_pz);
   fChain->SetBranchAddress("mu_p_pt", &mu_p_pt, &b_mu_p_pt);
   fChain->SetBranchAddress("mu_p_p", &mu_p_p, &b_mu_p_p);
   fChain->SetBranchAddress("mu_p_E", &mu_p_E, &b_mu_p_E);
   fChain->SetBranchAddress("mu_p_mcE", &mu_p_mcE, &b_mu_p_mcE);
   fChain->SetBranchAddress("mu_p_mcP", &mu_p_mcP, &b_mu_p_mcP);
   fChain->SetBranchAddress("mu_p_mcPT", &mu_p_mcPT, &b_mu_p_mcPT);
   fChain->SetBranchAddress("mu_p_mcPX", &mu_p_mcPX, &b_mu_p_mcPX);
   fChain->SetBranchAddress("mu_p_mcPY", &mu_p_mcPY, &b_mu_p_mcPY);
   fChain->SetBranchAddress("mu_p_mcPZ", &mu_p_mcPZ, &b_mu_p_mcPZ);
   fChain->SetBranchAddress("mu_p_mcPhi", &mu_p_mcPhi, &b_mu_p_mcPhi);
//    fChain->SetBranchAddress("mu_p_isSignal", &mu_p_isSignal, &b_mu_p_isSignal);
//    fChain->SetBranchAddress("mu_p_mcErrors", &mu_p_mcErrors, &b_mu_p_mcErrors);
//    fChain->SetBranchAddress("mu_p_mcPDG", &mu_p_mcPDG, &b_mu_p_mcPDG);
   fChain->SetBranchAddress("mu_p_M", &mu_p_M, &b_mu_p_M);
   fChain->SetBranchAddress("mu_p_ErrM", &mu_p_ErrM, &b_mu_p_ErrM);
   fChain->SetBranchAddress("mu_p_SigM", &mu_p_SigM, &b_mu_p_SigM);
   fChain->SetBranchAddress("mu_p_InvM", &mu_p_InvM, &b_mu_p_InvM);
   fChain->SetBranchAddress("mu_m_kaonID", &mu_m_kaonID, &b_mu_m_kaonID);
   fChain->SetBranchAddress("mu_m_pionID", &mu_m_pionID, &b_mu_m_pionID);
   fChain->SetBranchAddress("mu_m_protonID", &mu_m_protonID, &b_mu_m_protonID);
   fChain->SetBranchAddress("mu_m_muonID", &mu_m_muonID, &b_mu_m_muonID);
   fChain->SetBranchAddress("mu_m_electronID", &mu_m_electronID, &b_mu_m_electronID);
   fChain->SetBranchAddress("mu_m_deuteronID", &mu_m_deuteronID, &b_mu_m_deuteronID);
   fChain->SetBranchAddress("mu_m_R_Kpi", &mu_m_R_Kpi, &b_mu_m_R_Kpi);
   fChain->SetBranchAddress("mu_m_isSignal", &mu_m_isSignal, &b_mu_m_isSignal);
   fChain->SetBranchAddress("mu_m_mcErrors", &mu_m_mcErrors, &b_mu_m_mcErrors);
   fChain->SetBranchAddress("mu_m_mcPDG", &mu_m_mcPDG, &b_mu_m_mcPDG);
   fChain->SetBranchAddress("mu_m_px", &mu_m_px, &b_mu_m_px);
   fChain->SetBranchAddress("mu_m_py", &mu_m_py, &b_mu_m_py);
   fChain->SetBranchAddress("mu_m_pz", &mu_m_pz, &b_mu_m_pz);
   fChain->SetBranchAddress("mu_m_pt", &mu_m_pt, &b_mu_m_pt);
   fChain->SetBranchAddress("mu_m_p", &mu_m_p, &b_mu_m_p);
   fChain->SetBranchAddress("mu_m_E", &mu_m_E, &b_mu_m_E);
   fChain->SetBranchAddress("mu_m_mcE", &mu_m_mcE, &b_mu_m_mcE);
   fChain->SetBranchAddress("mu_m_mcP", &mu_m_mcP, &b_mu_m_mcP);
   fChain->SetBranchAddress("mu_m_mcPT", &mu_m_mcPT, &b_mu_m_mcPT);
   fChain->SetBranchAddress("mu_m_mcPX", &mu_m_mcPX, &b_mu_m_mcPX);
   fChain->SetBranchAddress("mu_m_mcPY", &mu_m_mcPY, &b_mu_m_mcPY);
   fChain->SetBranchAddress("mu_m_mcPZ", &mu_m_mcPZ, &b_mu_m_mcPZ);
   fChain->SetBranchAddress("mu_m_mcPhi", &mu_m_mcPhi, &b_mu_m_mcPhi);
//    fChain->SetBranchAddress("mu_m_isSignal", &mu_m_isSignal, &b_mu_m_isSignal);
//    fChain->SetBranchAddress("mu_m_mcErrors", &mu_m_mcErrors, &b_mu_m_mcErrors);
//    fChain->SetBranchAddress("mu_m_mcPDG", &mu_m_mcPDG, &b_mu_m_mcPDG);
   fChain->SetBranchAddress("mu_m_M", &mu_m_M, &b_mu_m_M);
   fChain->SetBranchAddress("mu_m_ErrM", &mu_m_ErrM, &b_mu_m_ErrM);
   fChain->SetBranchAddress("mu_m_SigM", &mu_m_SigM, &b_mu_m_SigM);
   fChain->SetBranchAddress("mu_m_InvM", &mu_m_InvM, &b_mu_m_InvM);
   fChain->SetBranchAddress("pi_p_kaonID", &pi_p_kaonID, &b_pi_p_kaonID);
   fChain->SetBranchAddress("pi_p_pionID", &pi_p_pionID, &b_pi_p_pionID);
   fChain->SetBranchAddress("pi_p_protonID", &pi_p_protonID, &b_pi_p_protonID);
   fChain->SetBranchAddress("pi_p_muonID", &pi_p_muonID, &b_pi_p_muonID);
   fChain->SetBranchAddress("pi_p_electronID", &pi_p_electronID, &b_pi_p_electronID);
   fChain->SetBranchAddress("pi_p_deuteronID", &pi_p_deuteronID, &b_pi_p_deuteronID);
   fChain->SetBranchAddress("pi_p_R_Kpi", &pi_p_R_Kpi, &b_pi_p_R_Kpi);
   fChain->SetBranchAddress("pi_p_isSignal", &pi_p_isSignal, &b_pi_p_isSignal);
   fChain->SetBranchAddress("pi_p_mcErrors", &pi_p_mcErrors, &b_pi_p_mcErrors);
   fChain->SetBranchAddress("pi_p_mcPDG", &pi_p_mcPDG, &b_pi_p_mcPDG);
   fChain->SetBranchAddress("pi_p_px", &pi_p_px, &b_pi_p_px);
   fChain->SetBranchAddress("pi_p_py", &pi_p_py, &b_pi_p_py);
   fChain->SetBranchAddress("pi_p_pz", &pi_p_pz, &b_pi_p_pz);
   fChain->SetBranchAddress("pi_p_pt", &pi_p_pt, &b_pi_p_pt);
   fChain->SetBranchAddress("pi_p_p", &pi_p_p, &b_pi_p_p);
   fChain->SetBranchAddress("pi_p_E", &pi_p_E, &b_pi_p_E);
   fChain->SetBranchAddress("pi_p_mcE", &pi_p_mcE, &b_pi_p_mcE);
   fChain->SetBranchAddress("pi_p_mcP", &pi_p_mcP, &b_pi_p_mcP);
   fChain->SetBranchAddress("pi_p_mcPT", &pi_p_mcPT, &b_pi_p_mcPT);
   fChain->SetBranchAddress("pi_p_mcPX", &pi_p_mcPX, &b_pi_p_mcPX);
   fChain->SetBranchAddress("pi_p_mcPY", &pi_p_mcPY, &b_pi_p_mcPY);
   fChain->SetBranchAddress("pi_p_mcPZ", &pi_p_mcPZ, &b_pi_p_mcPZ);
   fChain->SetBranchAddress("pi_p_mcPhi", &pi_p_mcPhi, &b_pi_p_mcPhi);
//    fChain->SetBranchAddress("pi_p_isSignal", &pi_p_isSignal, &b_pi_p_isSignal);
//    fChain->SetBranchAddress("pi_p_mcErrors", &pi_p_mcErrors, &b_pi_p_mcErrors);
//    fChain->SetBranchAddress("pi_p_mcPDG", &pi_p_mcPDG, &b_pi_p_mcPDG);
   fChain->SetBranchAddress("pi_p_M", &pi_p_M, &b_pi_p_M);
   fChain->SetBranchAddress("pi_p_ErrM", &pi_p_ErrM, &b_pi_p_ErrM);
   fChain->SetBranchAddress("pi_p_SigM", &pi_p_SigM, &b_pi_p_SigM);
   fChain->SetBranchAddress("pi_p_InvM", &pi_p_InvM, &b_pi_p_InvM);
   Notify();
}



Bool_t myClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void myClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

Int_t myClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.

   /* GLOBAL CUTS */
   if(CMS_p < 2.5){
      return -1;
   }

   return 1;
}

void myClass::print_options(){
   std::cout << "-------------\nOPTIONS:\n";
   int n = (sizeof(saveOptions)/sizeof(*saveOptions));
   for(int i=0; i<n; i++){
      if(saveOptions[i]){
         std::cout << " - "<< saveOptionsNames[i] << "\n";
      }
   }
}

#endif // #ifdef myClass_cxx
