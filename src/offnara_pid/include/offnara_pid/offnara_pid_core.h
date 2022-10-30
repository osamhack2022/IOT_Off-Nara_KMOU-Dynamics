#ifndef SR_OFFNARA_PID_CORE_H
#define SR_OFFNARA_PID_CORE_H

#include "ros/ros.h"
#include "ros/time.h"

// Custom message includes. Auto-generated from msg/ directory.
#include <offnara_msgs/PID.h>

// Dynamic reconfigure includes.
#include <dynamic_reconfigure/server.h>
// Auto-generated from cfg/ directory.
#include <offnara_pid/offnaraPIDConfig.h>

class offnaraPID
{
public:
  offnaraPID();
  ~offnaraPID();
  void configCallback(offnara_pid::offnaraPIDConfig &config, double level);
  void publishMessage(ros::Publisher *pub_message);
  void messageCallback(const offnara_msgs::PID::ConstPtr &msg);

  double p_;
  double d_;
  double i_;

};
#endif
