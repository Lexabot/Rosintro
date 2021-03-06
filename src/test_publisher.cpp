#include <ros/ros.h>
#include <std_msgs/String.h>

int main (int argc, char **argv) {
	ros::init(argc,argv, "test_publisher");
	ROS_INFO("Robbie and turtle forever love");
  ros::NodeHandle nh;
  ros::Publisher pub = nh.advertise <std_msgs::String>("/test_str",10);

  ros::Rate loop_rate(2);
  int i= 0;
  while(ros::ok()){
    std_msgs::String msg;
    msg.data = "Message" + std::to_string(i);
    pub.publish(msg);

    ros::spinOnce();
    loop_rate.sleep();
    i++;
  }
  return 0;
}
