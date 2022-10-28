#include "offnara_pid/offnara_pid_core.h"

int main(int argc, char **argv)
{

  ros::init(argc, argv, "pid_configure");
  ros::NodeHandle nh;

  offnaraPID *offnara_pid = new offnaraPID();

  dynamic_reconfigure::Server<offnara_pid::offnaraPIDConfig> dr_srv;
  dynamic_reconfigure::Server<offnara_pid::offnaraPIDConfig>::CallbackType cb;
  cb = boost::bind(&offnaraPID::configCallback, offnara_pid, _1, _2);
  dr_srv.setCallback(cb);

  double p;
  double d;
  double i;
  int rate;

  ros::NodeHandle pnh("~");
  pnh.param("p", p, 0.6);
  pnh.param("d", d, 0.3);
  pnh.param("i", i, 0.5);
  pnh.param("rate", rate, 1);

  ros::Publisher pub_message = nh.advertise<offnara_msgs::PID>("pid", 10);

  ros::Rate r(rate);

  while (nh.ok())
  {
    offnara_pid->publishMessage(&pub_message);
    ros::spinOnce();
    r.sleep();
  }

  return 0;
}
