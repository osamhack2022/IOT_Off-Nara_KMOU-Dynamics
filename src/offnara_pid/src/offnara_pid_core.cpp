#include "offnara_pid/offnara_pid_core.h"

offnaraPID::offnaraPID()
{
}

offnaraPID::~offnaraPID()
{
}

void offnaraPID::publishMessage(ros::Publisher *pub_message)
{
  offnara_msgs::PID msg;
  msg.p = p_;
  msg.d = d_;
  msg.i = i_;
  pub_message->publish(msg);
}

void offnaraPID::messageCallback(const offnara_msgs::PID::ConstPtr &msg)
{
  p_ = msg->p;
  d_ = msg->d;
  i_ = msg->i;

  //echo P,I,D
  ROS_INFO("P: %f", p_);
  ROS_INFO("D: %f", d_);
  ROS_INFO("I: %f", i_);
}

void offnaraPID::configCallback(offnara_pid::offnaraPIDConfig &config, double level)
{
  //for PID GUI
  p_ = config.p;
  d_ = config.d;
  i_ = config.i;

}
