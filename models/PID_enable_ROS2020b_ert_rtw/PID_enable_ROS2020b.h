//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: PID_enable_ROS2020b.h
//
// Code generated for Simulink model 'PID_enable_ROS2020b'.
//
// Model version                  : 2.14
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Thu Apr 22 17:06:03 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_PID_enable_ROS2020b_h_
#define RTW_HEADER_PID_enable_ROS2020b_h_
#include <math.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "PID_enable_ROS2020b_types.h"
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
struct B_PID_enable_ROS2020b_T {
  SL_Bus_PID_enable_ROS2020b_nav_msgs_Odometry In1;// '<S17>/In1'
  SL_Bus_PID_enable_ROS2020b_nav_msgs_Odometry b_varargout_2;
  real_T SimulationPace;               // '<Root>/Simulation Pace'
};

// Block states (default storage) for system '<Root>'
struct DW_PID_enable_ROS2020b_T {
  ros_slroscpp_internal_block_P_T obj; // '<S8>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S10>/SourceBlock'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S6>/Discrete-Time Integrator'
};

// External inputs (root inport signals with default storage)
struct ExtU_PID_enable_ROS2020b_T {
  real_T currentposition;              // '<Root>/current position'
  real_T velned;                       // '<Root>/vel ned'
};

// Parameters (default storage)
struct P_PID_enable_ROS2020b_T_ {
  struct_9iDbyyjfBL0Y1ELTIVXdBC PID_thr;// Variable: PID_thr
                                           //  Referenced by:
                                           //    '<S6>/Gain'
                                           //    '<S6>/Gain1'

  real_T Jx_ref;                       // Variable: Jx_ref
                                          //  Referenced by: '<S1>/Constant'

  real_T Jy_ref;                       // Variable: Jy_ref
                                          //  Referenced by: '<S1>/Constant1'

  real_T Jz_ref;                       // Variable: Jz_ref
                                          //  Referenced by: '<S1>/Constant2'

  real_T m_ref;                        // Variable: m_ref
                                          //  Referenced by: '<S9>/Constant'

  SL_Bus_PID_enable_ROS2020b_nav_msgs_Odometry Out1_Y0;// Computed Parameter: Out1_Y0
                                                          //  Referenced by: '<S17>/Out1'

  SL_Bus_PID_enable_ROS2020b_nav_msgs_Odometry Constant_Value;// Computed Parameter: Constant_Value
                                                                 //  Referenced by: '<S10>/Constant'

  SL_Bus_PID_enable_ROS2020b_robotics_demo_QuadForce Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                      //  Referenced by: '<S2>/Constant'

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

  real_T Constant_Value_n;             // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

  real_T Step1_Time;                   // Expression: 1
                                          //  Referenced by: '<Root>/Step1'

  real_T Step1_Y0;                     // Expression: 0
                                          //  Referenced by: '<Root>/Step1'

  real_T Step1_YFinal;                 // Expression: 10
                                          //  Referenced by: '<Root>/Step1'

  real_T Gain2_Gain;                   // Expression: 1
                                          //  Referenced by: '<S6>/Gain2'

  real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S6>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                          //  Referenced by: '<S6>/Discrete-Time Integrator'

  real_T Gain_Gain;                    // Expression: 1/14
                                          //  Referenced by: '<Root>/Gain'

  real_T Saturation7_UpperSat;         // Expression: 1
                                          //  Referenced by: '<Root>/Saturation7'

  real_T Saturation7_LowerSat;         // Expression: 0
                                          //  Referenced by: '<Root>/Saturation7'

  real_T SimulationPace_P1;            // Expression: SimulationPace
                                          //  Referenced by: '<Root>/Simulation Pace'

  real_T SimulationPace_P2;            // Expression: 2
                                          //  Referenced by: '<Root>/Simulation Pace'

  real_T SimulationPace_P3;            // Expression: OutputPaceError
                                          //  Referenced by: '<Root>/Simulation Pace'

  real_T SimulationPace_P4;            // Expression: SampleTime
                                          //  Referenced by: '<Root>/Simulation Pace'

  real32_T Saturation3_UpperSat;     // Computed Parameter: Saturation3_UpperSat
                                        //  Referenced by: '<Root>/Saturation3'

  real32_T Saturation3_LowerSat;     // Computed Parameter: Saturation3_LowerSat
                                        //  Referenced by: '<Root>/Saturation3'

  real32_T Saturation2_UpperSat;     // Computed Parameter: Saturation2_UpperSat
                                        //  Referenced by: '<Root>/Saturation2'

  real32_T Saturation2_LowerSat;     // Computed Parameter: Saturation2_LowerSat
                                        //  Referenced by: '<Root>/Saturation2'

  real32_T Saturation1_UpperSat_b; // Computed Parameter: Saturation1_UpperSat_b
                                      //  Referenced by: '<Root>/Saturation1'

  real32_T Saturation1_LowerSat_n; // Computed Parameter: Saturation1_LowerSat_n
                                      //  Referenced by: '<Root>/Saturation1'

  real32_T Saturation_UpperSat_i;   // Computed Parameter: Saturation_UpperSat_i
                                       //  Referenced by: '<Root>/Saturation'

  real32_T Saturation_LowerSat_d;   // Computed Parameter: Saturation_LowerSat_d
                                       //  Referenced by: '<Root>/Saturation'

  uint8_T ManualSwitch_CurrentSetting;
                              // Computed Parameter: ManualSwitch_CurrentSetting
                                 //  Referenced by: '<S7>/Manual Switch'

  uint8_T ManualSwitch1_CurrentSetting;
                             // Computed Parameter: ManualSwitch1_CurrentSetting
                                //  Referenced by: '<S7>/Manual Switch1'

  uint8_T ManualSwitch_CurrentSetting_j;
                            // Computed Parameter: ManualSwitch_CurrentSetting_j
                               //  Referenced by: '<Root>/Manual Switch'

};

// Real-time Model Data Structure
struct tag_RTM_PID_enable_ROS2020b_T {
  const char_T *errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_PID_enable_ROS2020b_T PID_enable_ROS2020b_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_PID_enable_ROS2020b_T PID_enable_ROS2020b_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_PID_enable_ROS2020b_T PID_enable_ROS2020b_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // External inputs (root inport signals with default storage)
  extern struct ExtU_PID_enable_ROS2020b_T PID_enable_ROS2020b_U;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void PID_enable_ROS2020b_initialize(void);
  extern void PID_enable_ROS2020b_step(void);
  extern void PID_enable_ROS2020b_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_PID_enable_ROS2020b_T *const PID_enable_ROS2020b_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Gain1' : Unused code path elimination
//  Block '<Root>/Gain2' : Unused code path elimination
//  Block '<Root>/Gain3' : Unused code path elimination
//  Block '<S7>/Scope' : Unused code path elimination
//  Block '<Root>/Saturation4' : Unused code path elimination
//  Block '<Root>/Saturation5' : Unused code path elimination
//  Block '<Root>/Saturation6' : Unused code path elimination
//  Block '<Root>/Scope3' : Unused code path elimination
//  Block '<Root>/Scope4' : Unused code path elimination
//  Block '<Root>/Scope5' : Unused code path elimination
//  Block '<Root>/Scope6' : Unused code path elimination


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
//  '<Root>' : 'PID_enable_ROS2020b'
//  '<S1>'   : 'PID_enable_ROS2020b/Attitude control'
//  '<S2>'   : 'PID_enable_ROS2020b/Blank Message'
//  '<S3>'   : 'PID_enable_ROS2020b/Force converter'
//  '<S4>'   : 'PID_enable_ROS2020b/MATLAB Function'
//  '<S5>'   : 'PID_enable_ROS2020b/Motor Mixer'
//  '<S6>'   : 'PID_enable_ROS2020b/PID Altitude control'
//  '<S7>'   : 'PID_enable_ROS2020b/Position control'
//  '<S8>'   : 'PID_enable_ROS2020b/Publish'
//  '<S9>'   : 'PID_enable_ROS2020b/SMC Altitude control'
//  '<S10>'  : 'PID_enable_ROS2020b/Subscribe'
//  '<S11>'  : 'PID_enable_ROS2020b/Attitude control/MATLAB Function'
//  '<S12>'  : 'PID_enable_ROS2020b/Attitude control/MATLAB Function2'
//  '<S13>'  : 'PID_enable_ROS2020b/Attitude control/MATLAB Function3'
//  '<S14>'  : 'PID_enable_ROS2020b/Attitude control/MATLAB Function4'
//  '<S15>'  : 'PID_enable_ROS2020b/Attitude control/Sliding Mode Controller'
//  '<S16>'  : 'PID_enable_ROS2020b/SMC Altitude control/MATLAB Function1'
//  '<S17>'  : 'PID_enable_ROS2020b/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_PID_enable_ROS2020b_h_

//
// File trailer for generated code.
//
// [EOF]
//
