#define myClass_cxx
#include "myClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void myClass::Loop()
{
//   In a ROOT session, you can do:
//      root> .L myClass.C
//      root> myClass t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   
   // Initialize histograms/canvases
   Init_histogram_kinematics();
   
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      
      //Apply global cuts
      if(Cut(jentry) < 0){
         continue;
      }

      // Fill histograms
      Fill_histogram_kinematics();
      // if (Cut(ientry) < 0) continue;
   }

   auto outFile = new TFile("processed.root", "RECREATE");
   //Save histograms/canvases
   
   Save_histogram_kinematics();

   outFile->Close();
}

void myClass::Init_histogram_kinematics(){
   if(saveKinematicsHistograms==0){
      return;
   }
   c_kinematics = new TCanvas("c_kinematics", "c_kinematics", 1920, 1080);
   c_kinematics->Divide(3,2);

   h_pi_momentum = new TH1F("h_pi_momentum", "pi momentum;Momentum [GeV];Entries", 100, 0, 5);
   h_mu_0_momentum = new TH1F("h_mu_0_momentum", "mu 0 momentum;Momentum [GeV];Entries", 100, 0, 5);
   h_mu_1_momentum = new TH1F("h_mu_1_momentum", "mu 1 momentum;Momentum [GeV];Entries", 100, 0, 5);
   h_D_momentum = new TH1F("h_D_momentum", "D momentum;Momentum [GeV];Entries", 100, 0, 5);
   h_D_momentum_cms = new TH1F("h_D_momentum_cms", "D momentum cms;Momentum [GeV];Entries", 100, 0, 5);

   c_kinematics->cd(1);
   h_pi_momentum->Draw();

   c_kinematics->cd(2);
   h_mu_0_momentum->Draw();
   
   c_kinematics->cd(3);
   h_mu_1_momentum->Draw();

   c_kinematics->cd(4);
   h_D_momentum->Draw();
   
   c_kinematics->cd(5);
   h_D_momentum_cms->Draw();

   c_likeliehoods = new TCanvas("c_likeliehoods", "c_likeliehoods", 1920, 940);
   c_likeliehoods->Divide(3,1);

   h_pi_R_Kpi = new TH1F("h_pi_R_Kpi", "pi_R_Kpi;R_Kpi;Entries", 100, 0, 1); 
   h_mu_p_muonID = new TH1F("h_mu_p_muonID", "mu_p_muonID;muonID;Entries", 100, 0, 1);
   h_mu_m_muonID = new TH1F("h_mu_m_muonID", "mu_m_muonID;muonID;Entries", 100, 0, 1);

   c_likeliehoods->cd(1);
   gPad->SetLogy();
   h_pi_R_Kpi->Draw();

   c_likeliehoods->cd(2);
   gPad->SetLogy();
   h_mu_p_muonID->Draw();

   c_likeliehoods->cd(3);
   gPad->SetLogy();
   h_mu_m_muonID->Draw();

   return;
}

void myClass::Fill_histogram_kinematics(){
   if(saveKinematicsHistograms==0){
      return;
   }
   h_pi_momentum->Fill(pi_p_p);
   h_mu_0_momentum->Fill(mu_p_p);
   h_mu_1_momentum->Fill(mu_m_p);
   h_D_momentum->Fill(p);
   h_D_momentum_cms->Fill(CMS_p);

   h_pi_R_Kpi->Fill(pi_p_R_Kpi);
   h_mu_p_muonID->Fill(mu_p_muonID);
   h_mu_m_muonID->Fill(mu_m_muonID);
   return;
}

void myClass::Save_histogram_kinematics(){
   if(saveKinematicsHistograms==0){
      return;
   }
   c_kinematics->Write();
   c_kinematics->SaveAs("c_kinematics.pdf");

   c_likeliehoods->Write();
   c_likeliehoods->SaveAs("c_likeliehoods.pdf");
   return;
}
