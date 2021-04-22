#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block SMC_original_ROS2020b/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_SMC_original_ROS2020b_nav_msgs_Odometry> Sub_SMC_original_ROS2020b_165;

// For Block SMC_original_ROS2020b/Publish
extern SimulinkPublisher<robotics_demo::QuadForce, SL_Bus_SMC_original_ROS2020b_robotics_demo_QuadForce> Pub_SMC_original_ROS2020b_161;

void slros_node_init(int argc, char** argv);

#endif
