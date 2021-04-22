//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: SMC_original_ROS2020b.h
//
// Code generated for Simulink model 'SMC_original_ROS2020b'.
//
// Model version                  : 2.0
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Wed Apr 21 13:25:37 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_SMC_original_ROS2020b_h_
#define RTW_HEADER_SMC_original_ROS2020b_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "SMC_original_ROS2020b_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_SMC_original_ROS2020b_T {
  SL_Bus_SMC_original_ROS2020b_nav_msgs_Odometry In1;// '<S16>/In1'
  SL_Bus_SMC_original_ROS2020b_nav_msgs_Odometry b_varargout_2;
};

// Block states (default storage) for system '<Root>'
struct DW_SMC_original_ROS2020b_T {
  ros_slroscpp_internal_block_P_T obj; // '<S8>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S9>/SourceBlock'
};

// External inputs (root inport signals with default storage)
struct ExtU_SMC_original_ROS2020b_T {
  real_T currentposition;              // '<Root>/current position'
  real_T velned;                       // '<Root>/vel ned'
};

// Parameters (default storage)
struct P_SMC_original_ROS2020b_T_ {
  real_T Jx_ref;                       // Variable: Jx_ref
                                          //  Referenced by: '<S2>/Constant'

  real_T Jy_ref;                       // Variable: Jy_ref
                                          //  Referenced by: '<S2>/Constant1'

  real_T Jz_ref;                       // Variable: Jz_ref
                                          //  Referenced by: '<S2>/Constant2'

  real_T m_ref;                        // Variable: m_ref
                                          //  Referenced by: '<S1>/Constant'

  SL_Bus_SMC_original_ROS2020b_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                            //  Referenced by: '<S16>/Out1'

  SL_Bus_SMC_original_ROS2020b_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                                   //  Referenced by: '<S9>/Constant'

  SL_Bus_SMC_original_ROS2020b_robotics_demo_QuadForce Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                      //  Referenced by: '<S3>/Constant'

  real_T D_x_Gain;                     // Expression: 0.22
                                          //  Referenced by: '<S7>/D_x'

  real_T P_x_Gain;                     // Expression: 0.15
                                          //  Referenced by: '<S7>/P_x'

  real_T Saturation_UpperSat;          // Expression: 30/180*pi
                                          //  Referenced by: '<S7>/Saturation'

  real_T Saturation_LowerSat;          // Expression: -30/180*pi
                                          //  Referenced by: '<S7>/Saturation'

  real_T D_y_Gain;                     // Expression: 0.22
                                          //  Referenced by: '<S7>/D_y'

  real_T P_y_Gain;                     // Expression: 0.15
                                          //  Referenced by: '<S7>/P_y'

  real_T Saturation1_UpperSat;         // Expression: 30/180*pi
                                          //  Referenced by: '<S7>/Saturation1'

  real_T Saturation1_LowerSat;         // Expression: -30/180*pi
                                          //  Referenced by: '<S7>/Saturation1'

  real_T Constant6_Value[7];           // Expression: zeros(7,1)
                                          //  Referenced by: '<Root>/Constant6'

  real_T Gain4_Gain;                   // Expression: -1
                                          //  Referenced by: '<S7>/Gain4'

  real_T Gain8_Gain;                   // Expression: 2
                                          //  Referenced by: '<S7>/Gain8'

  real_T Saturation11_UpperSat;        // Expression: 1
                                          //  Referenced by: '<S7>/Saturation11'

  real_T Saturation11_LowerSat;        // Expression: -1
                                          //  Referenced by: '<S7>/Saturation11'

  real_T Gain7_Gain;                   // Expression: 2
                                          //  Referenced by: '<S7>/Gain7'

  real_T Saturation10_UpperSat;        // Expression: 1
                                          //  Referenced by: '<S7>/Saturation10'

  real_T Saturation10_LowerSat;        // Expression: -1
                                          //  Referenced by: '<S7>/Saturation10'

  real_T Gain6_Gain;                   // Expression: 2
                                          //  Referenced by: '<S7>/Gain6'

  real_T Saturation9_UpperSat;         // Expression: 0.5
                                          //  Referenced by: '<S7>/Saturation9'

  real_T Saturation9_LowerSat;         // Expression: -0.5
                                          //  Referenced by: '<S7>/Saturation9'

  real_T Step1_Time;                   // Expression: 1
                                          //  Referenced by: '<Root>/Step1'

  real_T Step1_Y0;                     // Expression: 0
                                          //  Referenced by: '<Root>/Step1'

  real_T Step1_YFinal;                 // Expression: 4
                                          //  Referenced by: '<Root>/Step1'

  real_T Gain_Gain;                    // Expression: 1/14
                                          //  Referenced by: '<Root>/Gain'

  real_T Saturation7_UpperSat;         // Expression: 1
                                          //  Referenced by: '<Root>/Saturation7'

  real_T Saturation7_LowerSat;         // Expression: 0
                                          //  Referenced by: '<Root>/Saturation7'

  real_T Saturation3_UpperSat;         // Expression: 2000
                                          //  Referenced by: '<Root>/Saturation3'

  real_T Saturation3_LowerSat;         // Expression: 1000
                                          //  Referenced by: '<Root>/Saturation3'

  real_T Saturation2_UpperSat;         // Expression: 2000
                                          //  Referenced by: '<Root>/Saturation2'

  real_T Saturation2_LowerSat;         // Expression: 0
                                          //  Referenced by: '<Root>/Saturation2'

  real_T Saturation1_UpperSat_b;       // Expression: 2000
                                          //  Referenced by: '<Root>/Saturation1'

  real_T Saturation1_LowerSat_n;       // Expression: 0
                                          //  Referenced by: '<Root>/Saturation1'

  real_T Saturation_UpperSat_i;        // Expression: 2000
                                          //  Referenced by: '<Root>/Saturation'

  real_T Saturation_LowerSat_d;        // Expression: 0
                                          //  Referenced by: '<Root>/Saturation'

  real_T Constant_Value_n;             // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

  real_T SimulationPace_P1;            // Expression: SimulationPace
                                          //  Referenced by: '<Root>/Simulation Pace'

  real_T SimulationPace_P2;            // Expression: 2
                                          //  Referenced by: '<Root>/Simulation Pace'

  real_T SimulationPace_P3;            // Expression: OutputPaceError
                                          //  Referenced by: '<Root>/Simulation Pace'

  real_T SimulationPace_P4;            // Expression: SampleTime
                                          //  Referenced by: '<Root>/Simulation Pace'

  uint8_T ManualSwitch_CurrentSetting;
                              // Computed Parameter: ManualSwitch_CurrentSetting
                                 //  Referenced by: '<S7>/Manual Switch'

  uint8_T ManualSwitch1_CurrentSetting;
                             // Computed Parameter: ManualSwitch1_CurrentSetting
                                //  Referenced by: '<S7>/Manual Switch1'

};

// Real-time Model Data Structure
struct tag_RTM_SMC_original_ROS2020b_T {
  const char_T *errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick1;
    struct {
      uint16_T TID[2];
    } TaskCounters;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_SMC_original_ROS2020b_T SMC_original_ROS2020b_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_SMC_original_ROS2020b_T SMC_original_ROS2020b_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_SMC_original_ROS2020b_T SMC_original_ROS2020b_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // External inputs (root inport signals with default storage)
  extern struct ExtU_SMC_original_ROS2020b_T SMC_original_ROS2020b_U;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void SMC_original_ROS2020b_initialize(void);
  extern void SMC_original_ROS2020b_step(void);
  extern void SMC_original_ROS2020b_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_SMC_original_ROS2020_T *const SMC_original_ROS2020b_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Gain1' : Unused code path elimination
//  Block '<Root>/Gain2' : Unused code path elimination
//  Block '<Root>/Gain3' : Unused code path elimination
//  Block '<Root>/Gain4' : Unused code path elimination
//  Block '<S7>/Scope' : Unused code path elimination
//  Block '<Root>/Saturation4' : Unused code path elimination
//  Block '<Root>/Saturation5' : Unused code path elimination
//  Block '<Root>/Saturation6' : Unused code path elimination
//  Block '<Root>/Scope3' : Unused code path elimination
//  Block '<Root>/Scope4' : Unused code path elimination
//  Block '<Root>/Scope5' : Unused code path elimination
//  Block '<Root>/Step' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'SMC_original_ROS2020b'
//  '<S1>'   : 'SMC_original_ROS2020b/Altitude control'
//  '<S2>'   : 'SMC_original_ROS2020b/Attitude control'
//  '<S3>'   : 'SMC_original_ROS2020b/Blank Message'
//  '<S4>'   : 'SMC_original_ROS2020b/Force converter'
//  '<S5>'   : 'SMC_original_ROS2020b/MATLAB Function'
//  '<S6>'   : 'SMC_original_ROS2020b/Motor Mixer'
//  '<S7>'   : 'SMC_original_ROS2020b/Position control'
//  '<S8>'   : 'SMC_original_ROS2020b/Publish'
//  '<S9>'   : 'SMC_original_ROS2020b/Subscribe'
//  '<S10>'  : 'SMC_original_ROS2020b/Altitude control/MATLAB Function1'
//  '<S11>'  : 'SMC_original_ROS2020b/Attitude control/MATLAB Function'
//  '<S12>'  : 'SMC_original_ROS2020b/Attitude control/MATLAB Function2'
//  '<S13>'  : 'SMC_original_ROS2020b/Attitude control/MATLAB Function3'
//  '<S14>'  : 'SMC_original_ROS2020b/Attitude control/MATLAB Function4'
//  '<S15>'  : 'SMC_original_ROS2020b/Attitude control/Sliding Mode Controller'
//  '<S16>'  : 'SMC_original_ROS2020b/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_SMC_original_ROS2020b_h_

//
// File trailer for generated code.
//
// [EOF]
//
