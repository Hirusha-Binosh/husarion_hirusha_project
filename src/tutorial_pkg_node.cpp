#include <ros/ros.h>

int main(int argc, char** argv) {
    // Initialize the node with my name 
    ros::init(argc, argv, "hirusha_node");
    
    // Create the handle to manage the node
    ros::NodeHandle nh;

    // Log a message to the terminal
    ROS_INFO("hirusha_node has started successfully!");

    // Keep the node running until Ctrl+C is pressed
    ros::spin();

    return 0;
}
