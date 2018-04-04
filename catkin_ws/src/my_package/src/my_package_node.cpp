#include <ros/ros.h>
#include <my_package/package_template.hpp>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "my_package");
  
  ros::NodeHandle nodeHandle("~");
  
  ROS_INFO("Work");

  my_package::package_template Package_template(nodeHandle);

  ros::spin();
  return 0;
}