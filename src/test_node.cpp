#include <ros/ros.h>

int main (int argc, char **argv) {
	ros::init(argc,argv, "test_node");
	ROS_INFO("Hello World");
	return 0;
}
