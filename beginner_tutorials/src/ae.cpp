#include "ros/ros.h"
#include <iostream>
#include "geometry_msgs/Twist.h"
#include <sstream>
using namespace std;
int main(int argc, char **argv)
{
	ros::init(argc, argv, "talker");
	ros::NodeHandle n;
	ros::Publisher ae = n.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 1000);
	ros::Rate loop_rate(10);
	int a,b=10;
	while (ros::ok())
	{     
		cin>>a;
		if(a!=b)
		{
			geometry_msgs::Twist msg;
			switch(a)
			{
				case 1: {			
					msg.linear.x = 0;
					msg.linear.y = 1;
					msg.linear.z = 0;
					msg.angular.x = 0;
					msg.angular.y = 0;
					msg.angular.z = 0;
					//ROS_INFO("%s", msg.data.c_str());
					ae.publish(msg);
					ros::spinOnce();
					loop_rate.sleep();
					break;
					}
			b=a;
			}
		}
	}
	return 0;
}
