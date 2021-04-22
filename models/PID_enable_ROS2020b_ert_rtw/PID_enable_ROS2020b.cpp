//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: PID_enable_ROS2020b.cpp
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

// Block signals (default storage)
B_PID_enable_ROS2020b_T PID_enable_ROS2020b_B;

// Block states (default storage)
DW_PID_enable_ROS2020b_T PID_enable_ROS2020b_DW;

// External inputs (root inport signals with default storage)
ExtU_PID_enable_ROS2020b_T PID_enable_ROS2020b_U;

// Real-time model
RT_MODEL_PID_enable_ROS2020b_T PID_enable_ROS2020b_M_ =
  RT_MODEL_PID_enable_ROS2020b_T();
RT_MODEL_PID_enable_ROS2020b_T *const PID_enable_ROS2020b_M =
  &PID_enable_ROS2020b_M_;

// Model step function
void PID_enable_ROS2020b_step(void)
{
  SL_Bus_PID_enable_ROS2020b_robotics_demo_QuadForce rtb_BusAssignment;
  real_T rtb_Gain2;
  real_T rtb_Sum5;
  real32_T rtb_Saturation;
  real32_T rtb_Saturation1;
  real32_T rtb_Saturation2;
  real32_T rtb_Saturation3;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S10>/SourceBlock' incorporates:
  //   Inport: '<S17>/In1'

  b_varargout_1 = Sub_PID_enable_ROS2020b_165.getLatestMessage
    (&PID_enable_ROS2020b_B.b_varargout_2);

  // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S17>/Enable'

  if (b_varargout_1) {
    PID_enable_ROS2020b_B.In1 = PID_enable_ROS2020b_B.b_varargout_2;
  }

  // End of MATLABSystem: '<S10>/SourceBlock'
  // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Step: '<Root>/Step1'
  if (((PID_enable_ROS2020b_M->Timing.clockTick0) * 0.02) <
      PID_enable_ROS2020b_P.Step1_Time) {
    rtb_Gain2 = PID_enable_ROS2020b_P.Step1_Y0;
  } else {
    rtb_Gain2 = PID_enable_ROS2020b_P.Step1_YFinal;
  }

  // End of Step: '<Root>/Step1'

  // Sum: '<Root>/Sum5' incorporates:
  //   SignalConversion generated from: '<Root>/Bus Selector1'

  rtb_Sum5 = rtb_Gain2 - PID_enable_ROS2020b_B.In1.Pose.Pose.Position.Z;

  // Gain: '<S6>/Gain2'
  rtb_Gain2 = PID_enable_ROS2020b_P.Gain2_Gain * rtb_Sum5;

  // ManualSwitch: '<Root>/Manual Switch' incorporates:
  //   Constant: '<Root>/Constant6'
  //   DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
  //   Gain: '<S6>/Gain'
  //   Gain: '<S6>/Gain1'
  //   MATLAB Function: '<S9>/MATLAB Function1'
  //   SignalConversion generated from: '<Root>/Bus Selector3'
  //   Sum: '<S6>/Sum'
  //   Sum: '<S6>/Sum2'

  if (PID_enable_ROS2020b_P.ManualSwitch_CurrentSetting_j == 1) {
    // MATLAB Function: '<S9>/MATLAB Function1' incorporates:
    //   Constant: '<Root>/Constant6'
    //   SignalConversion generated from: '<Root>/Bus Selector3'

    rtb_Sum5 = (PID_enable_ROS2020b_P.Constant6_Value[6] -
                PID_enable_ROS2020b_B.In1.Twist.Twist.Linear.Z) + 100.0 *
      rtb_Sum5;
    if (rtb_Sum5 < 0.0) {
      rtb_Sum5 = -1.0;
    } else if (rtb_Sum5 > 0.0) {
      rtb_Sum5 = 1.0;
    } else if (rtb_Sum5 == 0.0) {
      rtb_Sum5 = 0.0;
    } else {
      rtb_Sum5 = (rtNaN);
    }

    rtb_Sum5 *= 10.0;
  } else {
    rtb_Sum5 = (PID_enable_ROS2020b_P.PID_thr.Kp * rtb_Gain2 +
                PID_enable_ROS2020b_DW.DiscreteTimeIntegrator_DSTATE) +
      (PID_enable_ROS2020b_P.Constant6_Value[6] -
       PID_enable_ROS2020b_B.In1.Twist.Twist.Linear.Z) *
      -PID_enable_ROS2020b_P.PID_thr.Kd;
  }

  // End of ManualSwitch: '<Root>/Manual Switch'

  // Gain: '<Root>/Gain'
  rtb_Sum5 *= PID_enable_ROS2020b_P.Gain_Gain;

  // Saturate: '<Root>/Saturation7'
  if (rtb_Sum5 > PID_enable_ROS2020b_P.Saturation7_UpperSat) {
    rtb_Sum5 = PID_enable_ROS2020b_P.Saturation7_UpperSat;
  } else if (rtb_Sum5 < PID_enable_ROS2020b_P.Saturation7_LowerSat) {
    rtb_Sum5 = PID_enable_ROS2020b_P.Saturation7_LowerSat;
  }

  // End of Saturate: '<Root>/Saturation7'

  // MATLAB Function: '<Root>/Motor Mixer' incorporates:
  //   Constant: '<Root>/Constant'
  //   DataTypeConversion: '<Root>/Data Type Conversion'

  rtb_Saturation3 = (((-static_cast<real32_T>
                       (PID_enable_ROS2020b_P.Constant_Value_n) + static_cast<
                       real32_T>(PID_enable_ROS2020b_P.Constant_Value_n)) -
                      static_cast<real32_T>
                      (PID_enable_ROS2020b_P.Constant_Value_n)) / 2.0F *
                     static_cast<real32_T>(rtb_Sum5) + static_cast<real32_T>
                     (rtb_Sum5)) * 1000.0F + 1000.0F;

  // Saturate: '<Root>/Saturation3'
  if (rtb_Saturation3 > PID_enable_ROS2020b_P.Saturation3_UpperSat) {
    rtb_Saturation3 = PID_enable_ROS2020b_P.Saturation3_UpperSat;
  } else if (rtb_Saturation3 < PID_enable_ROS2020b_P.Saturation3_LowerSat) {
    rtb_Saturation3 = PID_enable_ROS2020b_P.Saturation3_LowerSat;
  }

  // End of Saturate: '<Root>/Saturation3'

  // MATLAB Function: '<Root>/Motor Mixer' incorporates:
  //   Constant: '<Root>/Constant'
  //   DataTypeConversion: '<Root>/Data Type Conversion'

  rtb_Saturation2 = (((static_cast<real32_T>
                       (PID_enable_ROS2020b_P.Constant_Value_n) - static_cast<
                       real32_T>(PID_enable_ROS2020b_P.Constant_Value_n)) -
                      static_cast<real32_T>
                      (PID_enable_ROS2020b_P.Constant_Value_n)) / 2.0F *
                     static_cast<real32_T>(rtb_Sum5) + static_cast<real32_T>
                     (rtb_Sum5)) * 1000.0F + 1000.0F;

  // Saturate: '<Root>/Saturation2'
  if (rtb_Saturation2 > PID_enable_ROS2020b_P.Saturation2_UpperSat) {
    rtb_Saturation2 = PID_enable_ROS2020b_P.Saturation2_UpperSat;
  } else if (rtb_Saturation2 < PID_enable_ROS2020b_P.Saturation2_LowerSat) {
    rtb_Saturation2 = PID_enable_ROS2020b_P.Saturation2_LowerSat;
  }

  // End of Saturate: '<Root>/Saturation2'

  // MATLAB Function: '<Root>/Motor Mixer' incorporates:
  //   Constant: '<Root>/Constant'
  //   DataTypeConversion: '<Root>/Data Type Conversion'

  rtb_Saturation1 = (((static_cast<real32_T>
                       (PID_enable_ROS2020b_P.Constant_Value_n) + static_cast<
                       real32_T>(PID_enable_ROS2020b_P.Constant_Value_n)) +
                      static_cast<real32_T>
                      (PID_enable_ROS2020b_P.Constant_Value_n)) / 2.0F *
                     static_cast<real32_T>(rtb_Sum5) + static_cast<real32_T>
                     (rtb_Sum5)) * 1000.0F + 1000.0F;

  // Saturate: '<Root>/Saturation1'
  if (rtb_Saturation1 > PID_enable_ROS2020b_P.Saturation1_UpperSat_b) {
    rtb_Saturation1 = PID_enable_ROS2020b_P.Saturation1_UpperSat_b;
  } else if (rtb_Saturation1 < PID_enable_ROS2020b_P.Saturation1_LowerSat_n) {
    rtb_Saturation1 = PID_enable_ROS2020b_P.Saturation1_LowerSat_n;
  }

  // End of Saturate: '<Root>/Saturation1'

  // MATLAB Function: '<Root>/Motor Mixer' incorporates:
  //   Constant: '<Root>/Constant'
  //   DataTypeConversion: '<Root>/Data Type Conversion'

  rtb_Saturation = (((-static_cast<real32_T>
                      (PID_enable_ROS2020b_P.Constant_Value_n) -
                      static_cast<real32_T>
                      (PID_enable_ROS2020b_P.Constant_Value_n)) +
                     static_cast<real32_T>
                     (PID_enable_ROS2020b_P.Constant_Value_n)) / 2.0F *
                    static_cast<real32_T>(rtb_Sum5) + static_cast<real32_T>
                    (rtb_Sum5)) * 1000.0F + 1000.0F;

  // Saturate: '<Root>/Saturation'
  if (rtb_Saturation > PID_enable_ROS2020b_P.Saturation_UpperSat_i) {
    rtb_Saturation = PID_enable_ROS2020b_P.Saturation_UpperSat_i;
  } else if (rtb_Saturation < PID_enable_ROS2020b_P.Saturation_LowerSat_d) {
    rtb_Saturation = PID_enable_ROS2020b_P.Saturation_LowerSat_d;
  }

  // End of Saturate: '<Root>/Saturation'

  // MATLAB Function: '<Root>/Force converter'
  rtb_Saturation3 = (rtb_Saturation3 * 2.38173106E-6F + -0.003628F) *
    rtb_Saturation3 + 1.17728F;
  rtb_Saturation2 = (rtb_Saturation2 * 2.38173106E-6F + -0.003628F) *
    rtb_Saturation2 + 1.17728F;
  rtb_Saturation1 = (rtb_Saturation1 * 2.38173106E-6F + -0.003628F) *
    rtb_Saturation1 + 1.17728F;
  rtb_Saturation = (rtb_Saturation * 2.38173106E-6F + -0.003628F) *
    rtb_Saturation + 1.17728F;
  rtb_Sum5 = rtb_Saturation3;
  if (rtb_Saturation3 < 0.0F) {
    rtb_Sum5 = 0.0;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion1'

  rtb_BusAssignment.Flm = static_cast<real32_T>(rtb_Sum5);

  // MATLAB Function: '<Root>/Force converter'
  rtb_Sum5 = rtb_Saturation2;
  if (rtb_Saturation2 < 0.0F) {
    rtb_Sum5 = 0.0;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion1'

  rtb_BusAssignment.Frm = static_cast<real32_T>(rtb_Sum5);

  // MATLAB Function: '<Root>/Force converter'
  rtb_Sum5 = rtb_Saturation1;
  if (rtb_Saturation1 < 0.0F) {
    rtb_Sum5 = 0.0;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   DataTypeConversion: '<Root>/Data Type Conversion1'

  rtb_BusAssignment.Rlm = static_cast<real32_T>(rtb_Sum5);

  // MATLAB Function: '<Root>/Force converter'
  rtb_Sum5 = rtb_Saturation;
  if (rtb_Saturation < 0.0F) {
    rtb_Sum5 = 0.0;
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant'
  //   DataTypeConversion: '<Root>/Data Type Conversion'
  //   DataTypeConversion: '<Root>/Data Type Conversion1'

  rtb_BusAssignment.Rrm = static_cast<real32_T>(rtb_Sum5);
  rtb_BusAssignment.Yaw = static_cast<real32_T>
    (PID_enable_ROS2020b_P.Constant_Value_n);

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S8>/SinkBlock'
  Pub_PID_enable_ROS2020b_335.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // S-Function (saeroclockpacer): '<Root>/Simulation Pace'
  //
  //  The Clock Pacer generates no code, it is only active in
  //  interpreted simulation.


  // Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
  PID_enable_ROS2020b_DW.DiscreteTimeIntegrator_DSTATE +=
    PID_enable_ROS2020b_P.DiscreteTimeIntegrator_gainval * rtb_Gain2;

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The resolution of this integer timer is 0.02, which is the step size
  //  of the task. Size of "clockTick0" ensures timer will not overflow during the
  //  application lifespan selected.

  PID_enable_ROS2020b_M->Timing.clockTick0++;
}

// Model initialize function
void PID_enable_ROS2020b_initialize(void)
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

    // InitializeConditions for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' 
    PID_enable_ROS2020b_DW.DiscreteTimeIntegrator_DSTATE =
      PID_enable_ROS2020b_P.DiscreteTimeIntegrator_IC;

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S17>/Out1' incorporates:
    //   Inport: '<S17>/In1'

    PID_enable_ROS2020b_B.In1 = PID_enable_ROS2020b_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'

    // Start for MATLABSystem: '<S10>/SourceBlock'
    PID_enable_ROS2020b_DW.obj_n.matlabCodegenIsDeleted = false;
    PID_enable_ROS2020b_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[5] = '\x00';
    Sub_PID_enable_ROS2020b_165.createSubscriber(&b_zeroDelimTopic[0], 1);
    PID_enable_ROS2020b_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    PID_enable_ROS2020b_DW.obj.matlabCodegenIsDeleted = false;
    PID_enable_ROS2020b_DW.obj.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_0[i] = tmp_0[i];
    }

    b_zeroDelimTopic_0[11] = '\x00';
    Pub_PID_enable_ROS2020b_335.createPublisher(&b_zeroDelimTopic_0[0], 1);
    PID_enable_ROS2020b_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'
  }
}

// Model terminate function
void PID_enable_ROS2020b_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  if (!PID_enable_ROS2020b_DW.obj_n.matlabCodegenIsDeleted) {
    PID_enable_ROS2020b_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  if (!PID_enable_ROS2020b_DW.obj.matlabCodegenIsDeleted) {
    PID_enable_ROS2020b_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

//
// File trailer for generated code.
//
// [EOF]
//
