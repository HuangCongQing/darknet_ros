/*
 * yolo_obstacle_detector_node.cpp
 *
 *  Created on: Dec 19, 2016
 *      Author: Marko Bjelonic
 *   Institute: ETH Zurich, Robotic Systems Lab
 */

#include <ros/ros.h>
#include <darknet_ros/YoloObjectDetector.hpp>

int main(int argc, char** argv) {
  ros::init(argc, argv, "darknet_ros");  //初始化
  ros::NodeHandle nodeHandle("~"); //创建节点类
  darknet_ros::YoloObjectDetector yoloObjectDetector(nodeHandle);  //创建yoloObjectDetector类

  ros::spin();  // ROS消息回调处理函数，相当于一个循环进入后就不会继续往下执行主函数了，而是一直将回调函数队列里的回调函数输出
  return 0;
}
