#include "my_package/package_template.hpp"
// STD
#include <string>

namespace my_package 
{
  package_template::package_template(ros::NodeHandle& nodeHandle) : nodeHandle_(nodeHandle)
  {
    ROS_INFO("Successfully launched node.");
  }

  package_template::~package_template()
  {
    //
  }

  bool package_template::readParameters()
  {
    return true;
  }

  void package_template::topicCallback()
  {
  //
  }

  bool package_template::serviceCallback(std_srvs::Trigger::Request& request, std_srvs::Trigger::Response& response)
  {
    return true;
  }
}