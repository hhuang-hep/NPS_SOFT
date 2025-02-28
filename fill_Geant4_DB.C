#include "TMath.h"
#include "/group/nps/hhuang/software/NPS_SOFT/TDVCSDB.h"
#include "TSystem.h"
 
void fill_Geant4_DB(){
     gSystem->Load("/group/nps/hhuang/software/NPS_SOFT/libDVCS.so");

     TDVCSDB *db=new TDVCSDB("dvcs","clrlpc",3306,"munoz","");
     
     // Tables to change
     char const *T_Eb = "BEAM_param_Energy";
     char const *T_momHMS = "SIMU_param_HMSmomentum";
     char const *T_angHMS = "SIMU_param_HMSangle";
    //  char const *T_calDist = "CALO_geom_Dist";
    //  char const *T_calYaw = "CALO_geom_Yaw";
     
     // General comment
    //  char const * comment="Elastic calibration setting number 1.0";
     char const * comment="KinC_x50_2";
     
     // Initialize of parameters
    //  Double_t *Eb = new Double_t[1];
     Double_t *momHMS = new Double_t[1];
    //  Double_t *angHMS =new Double_t[1];
    //  Double_t *calDist = new Double_t[1];
    //  Double_t *calYaw_0 = new Double_t[1];
    //  Double_t *calYaw_1 = new Double_t[1];
    //  Double_t *calYaw_2 = new Double_t[1];
     
    // Set parameters in terms of run number (kinematics)
    // Run number: 100-102 (3-pass) ++++++++++++++++++++++++++++++++++
     /*Eb[0] = {6.397}; // Beam energy
     momHMS[0] = {2.778}; // Proton monemtum: HMS [GeV]
     angHMS[0] = {34.612*TMath::DegToRad()}; // HMS central angle [degree to rad]
     calDist[0] = {850}; // Calorimeter distance (front) [cm] (100-102: 800; 109-111: 850) 
     calYaw_0[0] = {(22.00+0.5)*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
     //calYaw_0 is 22 deg. for 100-102; 22.5 deg. for 109-111
     calYaw_1[0] = {20.57*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
     calYaw_2[0] = {19.14*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
     */

    // Run number: 103-105 (5-pass) ++++++++++++++++++++++++++++++++++  
    // Eb[0] = {10.558}; // Beam energy
    // momHMS[0] = {4.036}; // Proton monemtum: HMS [GeV]
    // angHMS[0] = {30.145*TMath::DegToRad()}; // HMS central angle [degree to rad]
    // calDist[0] = {950}; // Calorimeter distance (front) [cm]
    // calYaw_0[0] = {(16.89+1.5)*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
    // calYaw_1[0] = {15.74*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
    // calYaw_2[0] = {14.60*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]

    // calYaw_0[0] = {16.965*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
    // calYaw_1[0] = {15.759*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
    // calYaw_2[0] = {14.673*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
  

    // Run number: 106-108 (4-pass) ++++++++++++++++++++++++++++++++++
    /*Eb[0] = {8.483}; // Beam energy
    momHMS[0] = {3.310}; // Proton monemtum: HMS [GeV]
    angHMS[0] = {32.906*TMath::DegToRad()}; // HMS central angle [degree to rad]
    calDist[0] = {900}; // Calorimeter distance (front) [cm]
    calYaw_0[0] = {(18.39+1.5)*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
    calYaw_1[0] = {16.99*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
    calYaw_2[0] = {15.60*TMath::DegToRad()}; // SHMS (calorimeter) angel [degree to rad]
    */

    // Add new database
    // db->AddEntry_d(T_Eb, 124, 126, Eb, comment);
    // db->AddEntry_d(T_momHMS, 124, 126, momHMS, comment);
    // db->AddEntry_d(T_angHMS, 124, 126, angHMS, comment);
    // db->AddEntry_d(T_calDist, 124, 126, calDist, comment);
    // db->AddEntry_d(T_calYaw, 124, 124, calYaw_0, comment);
    // db->AddEntry_d(T_calYaw, 125, 125, calYaw_1, comment);
    // db->AddEntry_d(T_calYaw, 126, 126, calYaw_2, comment);

    // Production run 1572
    // Eb[0] = {10.558}; // Beam energy
    momHMS[0] = {6.667}; // Electron monemtum: HMS [GeV]
    // angHMS[0] = {12.493*TMath::DegToRad()}; // HMS central angle [degree to rad]
    // Add new database
    // db->AddEntry_d(T_Eb, 1572, 9999, Eb, comment);
    db->AddEntry_d(T_momHMS, 1572, 9999, momHMS, comment);
    // db->AddEntry_d(T_angHMS, 1572, 9999, angHMS, comment);
}
