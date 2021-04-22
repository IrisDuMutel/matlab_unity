//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: SMC_original_ROS2020b.cpp
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
#include "SMC_original_ROS2020b.h"
#include "SMC_original_ROS2020b_private.h"

// Block signals (default storage)
B_SMC_original_ROS2020b_T SMC_original_ROS2020b_B;

// Block states (default storage)
DW_SMC_original_ROS2020b_T SMC_original_ROS2020b_DW;

// External inputs (root inport signals with default storage)
ExtU_SMC_original_ROS2020b_T SMC_original_ROS2020b_U;

// Real-time model
RT_MODEL_SMC_original_ROS2020_T SMC_original_ROS2020b_M_ =
  RT_MODEL_SMC_original_ROS2020_T();
RT_MODEL_SMC_original_ROS2020_T *const SMC_original_ROS2020b_M =
  &SMC_original_ROS2020b_M_;
static void rate_scheduler(void);

//
//   This function updates active task flag for each subrate.
// The function is called at model base rate, hence the
// generated code self-manages all its subrates.
//
static void rate_scheduler(void)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (SMC_original_ROS2020b_M->Timing.TaskCounters.TID[1])++;
  if ((SMC_original_ROS2020b_M->Timing.TaskCounters.TID[1]) > 4999) {// Sample time: [0.05s, 0.0s] 
    SMC_original_ROS2020b_M->Timing.TaskCounters.TID[1] = 0;
  }
}

// Model step function
void SMC_original_ROS2020b_step(void)
{
  SL_Bus_SMC_original_ROS2020b_robotics_demo_QuadForce rtb_BusAssignment;
  real_T rtb_Saturation1;
  real_T rtb_Saturation2;
  real_T rtb_Saturation3;
  real_T rtb_Saturation7;
  boolean_T b_varargout_1;
  if (SMC_original_ROS2020b_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<Root>/Subscribe'
    // MATLABSystem: '<S9>/SourceBlock' incorporates:
    //   Inport: '<S16>/In1'

    b_varargout_1 = Sub_SMC_original_ROS2020b_165.getLatestMessage
      (&SMC_original_ROS2020b_B.b_varargout_2);

    // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S16>/Enable'

    if (b_varargout_1) {
      SMC_original_ROS2020b_B.In1 = SMC_original_ROS2020b_B.b_varargout_2;
    }

    // End of MATLABSystem: '<S9>/SourceBlock'
    // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<Root>/Subscribe'

    // Step: '<Root>/Step1'
    if (((SMC_original_ROS2020b_M->Timing.clockTick1) * 0.05) <
        SMC_original_ROS2020b_P.Step1_Time) {
      rtb_Saturation7 = SMC_original_ROS2020b_P.Step1_Y0;
    } else {
      rtb_Saturation7 = SMC_original_ROS2020b_P.Step1_YFinal;
    }

    // End of Step: '<Root>/Step1'

    // MATLAB Function: '<S1>/MATLAB Function1' incorporates:
    //   Constant: '<Root>/Constant6'
    //   SignalConversion generated from: '<Root>/Bus Selector1'
    //   SignalConversion generated from: '<Root>/Bus Selector3'
    //   Sum: '<Root>/Sum5'

    rtb_Saturation7 = (SMC_original_ROS2020b_P.Constant6_Value[6] -
                       SMC_original_ROS2020b_B.In1.Twist.Twist.Linear.Z) +
      (rtb_Saturation7 - SMC_original_ROS2020b_B.In1.Pose.Pose.Position.Z);
    if (rtb_Saturation7 < 0.0) {
      rtb_Saturation7 = -1.0;
    } else if (rtb_Saturation7 > 0.0) {
      rtb_Saturation7 = 1.0;
    } else if (rtb_Saturation7 == 0.0) {
      rtb_Saturation7 = 0.0;
    } else {
      rtb_Saturation7 = (rtNaN);
    }

    // Gain: '<Root>/Gain' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function1'

    rtb_Saturation7 = 1.2 * rtb_Saturation7 * SMC_original_ROS2020b_P.Gain_Gain;

    // Saturate: '<Root>/Saturation7'
    if (rtb_Saturation7 > SMC_original_ROS2020b_P.Saturation7_UpperSat) {
      rtb_Saturation7 = SMC_original_ROS2020b_P.Saturation7_UpperSat;
    } else if (rtb_Saturation7 < SMC_original_ROS2020b_P.Saturation7_LowerSat) {
      rtb_Saturation7 = SMC_original_ROS2020b_P.Saturation7_LowerSat;
    }

    // End of Saturate: '<Root>/Saturation7'

    // MATLAB Function: '<Root>/Motor Mixer'
    rtb_Saturation7 = (0.0 * rtb_Saturation7 + rtb_Saturation7) * 1000.0 +
      1000.0;

    // Saturate: '<Root>/Saturation3' incorporates:
    //   MATLAB Function: '<Root>/Motor Mixer'

    if (rtb_Saturation7 > SMC_original_ROS2020b_P.Saturation3_UpperSat) {
      rtb_Saturation3 = SMC_original_ROS2020b_P.Saturation3_UpperSat;
    } else if (rtb_Saturation7 < SMC_original_ROS2020b_P.Saturation3_LowerSat) {
      rtb_Saturation3 = SMC_original_ROS2020b_P.Saturation3_LowerSat;
    } else {
      rtb_Saturation3 = rtb_Saturation7;
    }

    // End of Saturate: '<Root>/Saturation3'

    // Saturate: '<Root>/Saturation2'
    if (rtb_Saturation7 > SMC_original_ROS2020b_P.Saturation2_UpperSat) {
      rtb_Saturation2 = SMC_original_ROS2020b_P.Saturation2_UpperSat;
    } else if (rtb_Saturation7 < SMC_original_ROS2020b_P.Saturation2_LowerSat) {
      rtb_Saturation2 = SMC_original_ROS2020b_P.Saturation2_LowerSat;
    } else {
      rtb_Saturation2 = rtb_Saturation7;
    }

    // End of Saturate: '<Root>/Saturation2'

    // Saturate: '<Root>/Saturation1'
    if (rtb_Saturation7 > SMC_original_ROS2020b_P.Saturation1_UpperSat_b) {
      rtb_Saturation1 = SMC_original_ROS2020b_P.Saturation1_UpperSat_b;
    } else if (rtb_Saturation7 < SMC_original_ROS2020b_P.Saturation1_LowerSat_n)
    {
      rtb_Saturation1 = SMC_original_ROS2020b_P.Saturation1_LowerSat_n;
    } else {
      rtb_Saturation1 = rtb_Saturation7;
    }

    // End of Saturate: '<Root>/Saturation1'

    // Saturate: '<Root>/Saturation'
    if (rtb_Saturation7 > SMC_original_ROS2020b_P.Saturation_UpperSat_i) {
      rtb_Saturation7 = SMC_original_ROS2020b_P.Saturation_UpperSat_i;
    } else if (rtb_Saturation7 < SMC_original_ROS2020b_P.Saturation_LowerSat_d)
    {
      rtb_Saturation7 = SMC_original_ROS2020b_P.Saturation_LowerSat_d;
    }

    // End of Saturate: '<Root>/Saturation'

    // MATLAB Function: '<Root>/Force converter'
    rtb_Saturation3 = (rtb_Saturation3 * 2.381731E-6 + -0.003628) *
      rtb_Saturation3 + 1.17728;
    rtb_Saturation2 = (rtb_Saturation2 * 2.381731E-6 + -0.003628) *
      rtb_Saturation2 + 1.17728;
    rtb_Saturation1 = (rtb_Saturation1 * 2.381731E-6 + -0.003628) *
      rtb_Saturation1 + 1.17728;
    rtb_Saturation7 = (rtb_Saturation7 * 2.381731E-6 + -0.003628) *
      rtb_Saturation7 + 1.17728;
    if (rtb_Saturation3 < 0.0) {
      rtb_Saturation3 = 0.0;
    }

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   DataTypeConversion: '<Root>/Data Type Conversion1'

    rtb_BusAssignment.Frm = static_cast<real32_T>(rtb_Saturation3);

    // MATLAB Function: '<Root>/Force converter'
    rtb_Saturation3 = rtb_Saturation2;
    if (rtb_Saturation2 < 0.0) {
      rtb_Saturation3 = 0.0;
    }

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   DataTypeConversion: '<Root>/Data Type Conversion1'

    rtb_BusAssignment.Rlm = static_cast<real32_T>(rtb_Saturation3);

    // MATLAB Function: '<Root>/Force converter'
    rtb_Saturation3 = rtb_Saturation1;
    if (rtb_Saturation1 < 0.0) {
      rtb_Saturation3 = 0.0;
    }

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   DataTypeConversion: '<Root>/Data Type Conversion1'

    rtb_BusAssignment.Rrm = static_cast<real32_T>(rtb_Saturation3);

    // MATLAB Function: '<Root>/Force converter'
    rtb_Saturation3 = rtb_Saturation7;
    if (rtb_Saturation7 < 0.0) {
      rtb_Saturation3 = 0.0;
    }

    // BusAssignment: '<Root>/Bus Assignment' incorporates:
    //   Constant: '<Root>/Constant'
    //   DataTypeConversion: '<Root>/Data Type Conversion'
    //   DataTypeConversion: '<Root>/Data Type Conversion1'

    rtb_BusAssignment.Flm = static_cast<real32_T>(rtb_Saturation3);
    rtb_BusAssignment.Yaw = static_cast<real32_T>
      (SMC_original_ROS2020b_P.Constant_Value_n);

    // Outputs for Atomic SubSystem: '<Root>/Publish'
    // MATLABSystem: '<S8>/SinkBlock'
    Pub_SMC_original_ROS2020b_161.publish(&rtb_BusAssignment);

    // End of Outputs for SubSystem: '<Root>/Publish'

    // S-Function (saeroclockpacer): '<Root>/Simulation Pace'
    //
    //  The Clock Pacer generates no code, it is only active in
    //  interpreted simulation.

  }

  if (SMC_original_ROS2020b_M->Timing.TaskCounters.TID[1] == 0) {
    // Update absolute timer for sample time: [0.05s, 0.0s]
    // The "clockTick1" counts the number of times the code of this task has
    //  been executed. The resolution of this integer timer is 0.05, which is the step size
    //  of the task. Size of "clockTick1" ensures timer will not overflow during the
    //  application lifespan selected.

    SMC_original_ROS2020b_M->Timing.clockTick1++;
  }

  rate_scheduler();
}

// Model initialize function
void SMC_original_ROS2020b_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_0[12];
    char_T b_zeroDelimTopic[6];
    static const char_T tmp[5] = { '/', 'o', 'd', 'o', 'm' };

    static const char_T tmp_0[11] = { '/', 'm', 'o', 't', 'o', 'r', 'F', 'o',
      'r', 'c', 'e' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S16>/Out1' incorporates:
    //   Inport: '<S16>/In1'

    SMC_original_ROS2020b_B.In1 = SMC_original_ROS2020b_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    SMC_original_ROS2020b_DW.obj_n.matlabCodegenIsDeleted = false;
    SMC_original_ROS2020b_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[5] = '\x00';
    Sub_SMC_original_ROS2020b_165.createSubscriber(&b_zeroDelimTopic[0], 1);
    SMC_original_ROS2020b_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    SMC_original_ROS2020b_DW.obj.matlabCodegenIsDeleted = false;
    SMC_original_ROS2020b_DW.obj.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[11] = '\x00';
    Pub_SMC_original_ROS2020b_161.createPublisher(&b_zeroDelimTopic_0[0], 1);
    SMC_original_ROS2020b_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void SMC_original_ROS2020b_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  if (!SMC_original_ROS2020b_DW.obj_n.matlabCodegenIsDeleted) {
    SMC_original_ROS2020b_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  if (!SMC_original_ROS2020b_DW.obj.matlabCodegenIsDeleted) {
    SMC_original_ROS2020b_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
