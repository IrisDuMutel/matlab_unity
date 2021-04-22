#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "SMC_original_ROS2020b";

// For Block SMC_original_ROS2020b/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_SMC_original_ROS2020b_nav_msgs_Odometry> Sub_SMC_original_ROS2020b_165;

// For Block SMC_original_ROS2020b/Publish
SimulinkPublisher<robotics_demo::QuadForce, SL_Bus_SMC_original_ROS2020b_robotics_demo_QuadForce> Pub_SMC_original_ROS2020b_161;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

