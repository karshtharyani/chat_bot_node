#include <ros/ros.h>
#include <chatbot_node/reply_msg.h>
#include <message_ui/sent_msg.h>
#include <string>

using namespace std;

//Add your code here

int main(int argc, char **argv)
{

  ros::init(argc, argv, "chatbot_node");
  ros::NodeHandle n;

  ros::Publisher chatter_pub =

  //Add your code here
  string input;
  string reply; 

  ros::Rate loop_rate(20);

  while (ros::ok())
  {
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
