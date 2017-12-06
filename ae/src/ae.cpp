#include "ros/ros.h"
#include <iostream>
#include "geometry_msgs/Twist.h"
#include <sstream>
using namespace std;
int main(int argc, char **argv)
{
	ros::init(argc, argv, "talker");
	ros::NodeHandle n;
	ros::Publisher ae = n.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 5);
	ros::Rate loop_rate(1000);
	int a,b=10;
	    
		cout<<"Hey";
		cin>>a;

		if(a!=b)
		{
			geometry_msgs::Twist msg;
                        geometry_msgs::Twist msg1;
                          
			switch(a)
			{
				
case 1: {			        msg.angular.z = -1.5;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 0;
					msg.linear.x = 3;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					
					break;
					}
case 2: {			
					 
					
					msg.linear.x = 5;
					msg.angular.z = -3;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 0;
					msg.linear.x = -3;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					break;
                                        }
case 3: {			
					 
					
					msg.linear.x = 3;
					msg.angular.z = -3;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = -3;
					msg.linear.x = -3;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					break;
                                        }
case 4: {			
					 
					
					msg.linear.x = 0;
					msg.angular.z = -1.5;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.linear.x = 3;
					msg.angular.z = 3;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 0;
					msg.linear.x = -2.5;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					break;
                                        }


case 5:{			
					 
					
					msg.linear.x = -3;
					msg.angular.z = 0;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.linear.x = 0;
					msg.angular.z = 1.5;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 0;
					msg.linear.x = -1.5;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 1.5;
					msg.linear.x = 0;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = -3;
					msg.linear.x = -5;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					break;
                                        }
case 6: {			
					 
					
					msg.linear.x = -6;
					msg.angular.z = 3;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<700;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 5;
					msg.linear.x = -4.8;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					break;
                                        }
case 7: {			
					 
					
					msg.linear.x = 2;
					msg.angular.z = 0;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<700;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.linear.x = 0;
					msg.angular.z = -2;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 0;
					msg.linear.x = 2.65;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					break;
                                        }
case 8:  {			
					 
					
					msg.linear.x = 6;
					msg.angular.z = -6;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 6;
					msg.linear.x = 6;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					break;
                                        }
case 9: {			
					 
					
					msg.linear.x = 0;
					msg.angular.z = 1.5;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.linear.x = 4.5;
					msg.angular.z = -9;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1034;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 0;
					msg.linear.x = 2;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					break;
                                        }
case 0: {			
					 
					
					msg.linear.x = 1;
					msg.angular.z = 1;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.linear.x = 2;
					msg.angular.z = 1;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.linear.x = 1;
					msg.angular.z = 1;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.linear.x = 1;
					msg.angular.z = 1;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.linear.x = 2;
					msg.angular.z = 1;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1034;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					msg.angular.z = 1;
					msg.linear.x = 1;
					//ROS_INFO("%s", msg.data.c_str());
					for(int i=0;i<1040;i++)
					{ae.publish(msg);
					//ros::spinOnce();
					loop_rate.sleep();
					}
					break;
                                        }
			
			}msg.linear.x = 0;
			msg.linear.y = 0;
			msg.linear.z = 0;
			msg.angular.x = 0;
			msg.angular.y = 0;
			msg.angular.z = 0;
                       ae.publish(msg);
					ros::spinOnce();
					loop_rate.sleep();
			b=a;
		}
	
	return 0;
}
