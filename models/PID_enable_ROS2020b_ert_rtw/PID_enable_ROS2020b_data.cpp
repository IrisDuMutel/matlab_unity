//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: PID_enable_ROS2020b_data.cpp
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
#include "PID_enable_ROS2020b.h"
#include "PID_enable_ROS2020b_private.h"

// Block parameters (default storage)
P_PID_enable_ROS2020b_T PID_enable_ROS2020b_P = {
  // Variable: PID_thr
  //  Referenced by:
  //    '<S6>/Gain'
  //    '<S6>/Gain1'

  {
    2.0,
    0.2,
    0.1
  },

  // Variable: Jx_ref
  //  Referenced by: '<S1>/Constant'

  0.017,

  // Variable: Jy_ref
  //  Referenced by: '<S1>/Constant1'

  0.0173,

  // Variable: Jz_ref
  //  Referenced by: '<S1>/Constant2'

  0.0308,

  // Variable: m_ref
  //  Referenced by: '<S9>/Constant'

  0.5,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S17>/Out1'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // ChildFrameId

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // ChildFrameId_SL_Info

    {
      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Position

        {
          0.0,                         // X
          0.0,                         // Y
          0.0,                         // Z
          0.0                          // W
        }                              // Orientation
      },                               // Pose

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // Covariance
    },                                 // Pose

    {
      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Linear

        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        }                              // Angular
      },                               // Twist

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // Covariance
    }                                  // Twist
  },

  // Computed Parameter: Constant_Value
  //  Referenced by: '<S10>/Constant'

  {
    {
      0U,                              // Seq

      {
        0.0,                           // Sec
        0.0                            // Nsec
      },                               // Stamp

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                // FrameId

      {
        0U,                            // CurrentLength
        0U                             // ReceivedLength
      }                                // FrameId_SL_Info
    },                                 // Header

    {
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
      0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
    ,                                  // ChildFrameId

    {
      0U,                              // CurrentLength
      0U                               // ReceivedLength
    },                                 // ChildFrameId_SL_Info

    {
      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Position

        {
          0.0,                         // X
          0.0,                         // Y
          0.0,                         // Z
          0.0                          // W
        }                              // Orientation
      },                               // Pose

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // Covariance
    },                                 // Pose

    {
      {
        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        },                             // Linear

        {
          0.0,                         // X
          0.0,                         // Y
          0.0                          // Z
        }                              // Angular
      },                               // Twist

      {
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
      // Covariance
    }                                  // Twist
  },

  // Computed Parameter: Constant_Value_m
  //  Referenced by: '<S2>/Constant'

  {
    0.0F,                              // Flm
    0.0F,                              // Frm
    0.0F,                              // Rlm
    0.0F,                              // Rrm
    0.0F                               // Yaw
  },

  // Expression: 0.22
  //  Referenced by: '<S7>/D_x'

  0.22,

  // Expression: 0.15
  //  Referenced by: '<S7>/P_x'

  0.15,

  // Expression: 30/180*pi
  //  Referenced by: '<S7>/Saturation'

  0.52359877559829882,

  // Expression: -30/180*pi
  //  Referenced by: '<S7>/Saturation'

  -0.52359877559829882,

  // Expression: 0.22
  //  Referenced by: '<S7>/D_y'

  0.22,

  // Expression: 0.15
  //  Referenced by: '<S7>/P_y'

  0.15,

  // Expression: 30/180*pi
  //  Referenced by: '<S7>/Saturation1'

  0.52359877559829882,

  // Expression: -30/180*pi
  //  Referenced by: '<S7>/Saturation1'

  -0.52359877559829882,

  // Expression: zeros(7,1)
  //  Referenced by: '<Root>/Constant6'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: -1
  //  Referenced by: '<S7>/Gain4'

  -1.0,

  // Expression: 2
  //  Referenced by: '<S7>/Gain8'

  2.0,

  // Expression: 1
  //  Referenced by: '<S7>/Saturation11'

  1.0,

  // Expression: -1
  //  Referenced by: '<S7>/Saturation11'

  -1.0,

  // Expression: 2
  //  Referenced by: '<S7>/Gain7'

  2.0,

  // Expression: 1
  //  Referenced by: '<S7>/Saturation10'

  1.0,

  // Expression: -1
  //  Referenced by: '<S7>/Saturation10'

  -1.0,

  // Expression: 2
  //  Referenced by: '<S7>/Gain6'

  2.0,

  // Expression: 0.5
  //  Referenced by: '<S7>/Saturation9'

  0.5,

  // Expression: -0.5
  //  Referenced by: '<S7>/Saturation9'

  -0.5,

  // Expression: 0
  //  Referenced by: '<Root>/Constant'

  0.0,

  // Expression: 1
  //  Referenced by: '<Root>/Step1'

  1.0,

  // Expression: 0
  //  Referenced by: '<Root>/Step1'

  0.0,

  // Expression: 10
  //  Referenced by: '<Root>/Step1'

  10.0,

  // Expression: 1
  //  Referenced by: '<S6>/Gain2'

  1.0,

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<S6>/Discrete-Time Integrator'

  0.004,

  // Expression: 0
  //  Referenced by: '<S6>/Discrete-Time Integrator'

  0.0,

  // Expression: 1/14
  //  Referenced by: '<Root>/Gain'

  0.071428571428571425,

  // Expression: 1
  //  Referenced by: '<Root>/Saturation7'

  1.0,

  // Expression: 0
  //  Referenced by: '<Root>/Saturation7'

  0.0,

  // Expression: SimulationPace
  //  Referenced by: '<Root>/Simulation Pace'

  1.0,

  // Expression: 2
  //  Referenced by: '<Root>/Simulation Pace'

  2.0,

  // Expression: OutputPaceError
  //  Referenced by: '<Root>/Simulation Pace'

  1.0,

  // Expression: SampleTime
  //  Referenced by: '<Root>/Simulation Pace'

  0.02,

  // Computed Parameter: Saturation3_UpperSat
  //  Referenced by: '<Root>/Saturation3'

  2000.0F,

  // Computed Parameter: Saturation3_LowerSat
  //  Referenced by: '<Root>/Saturation3'

  1000.0F,

  // Computed Parameter: Saturation2_UpperSat
  //  Referenced by: '<Root>/Saturation2'

  2000.0F,

  // Computed Parameter: Saturation2_LowerSat
  //  Referenced by: '<Root>/Saturation2'

  0.0F,

  // Computed Parameter: Saturation1_UpperSat_b
  //  Referenced by: '<Root>/Saturation1'

  2000.0F,

  // Computed Parameter: Saturation1_LowerSat_n
  //  Referenced by: '<Root>/Saturation1'

  0.0F,

  // Computed Parameter: Saturation_UpperSat_i
  //  Referenced by: '<Root>/Saturation'

  2000.0F,

  // Computed Parameter: Saturation_LowerSat_d
  //  Referenced by: '<Root>/Saturation'

  0.0F,

  // Computed Parameter: ManualSwitch_CurrentSetting
  //  Referenced by: '<S7>/Manual Switch'

  0U,

  // Computed Parameter: ManualSwitch1_CurrentSetting
  //  Referenced by: '<S7>/Manual Switch1'

  0U,

  // Computed Parameter: ManualSwitch_CurrentSetting_j
  //  Referenced by: '<Root>/Manual Switch'

  1U
};

//
// File trailer for generated code.
//
// [EOF]
//
