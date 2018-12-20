#ifndef ALICA_TURTLE_WORLD_MODEL_WORLD_MODEL_HPP
#define ALICA_TURTLE_WORLD_MODEL_WORLD_MODEL_HPP

#include <ros/ros.h>
#include <engine/AlicaEngine.h>
#include <std_msgs/Empty.h>
#include "alica_ros_turtlesim/turtle.hpp"

namespace turtlesim {
/*
        ALICATurtleWorldModel
        - WorldModel for ALICA ros turtlesim which interface between ALICA and ROS.
        - A few class is static since one robot has one world model
        - ROS:
                - Subscribe: t/init
*/
class ALICATurtleWorldModel {
public:
    static ALICATurtleWorldModel* get();                              // return instance
    static void init(ros::NodeHandle& nh, ros::NodeHandle& priv_nh);  // create instance
    static void del();
    bool get_init() const { return _init_trigger; };
    void set_init(const bool input) { _init_trigger = input; };

    static ALICATurtleWorldModel* instance;
    ALICATurtle turtle;

private:
    ALICATurtleWorldModel(ros::NodeHandle& nh, ros::NodeHandle& priv_nh);
    ~ALICATurtleWorldModel();
    void init_trigger_sub_callback(const std_msgs::EmptyConstPtr& msg);  // callback of /init
    ros::Subscriber _init_trigger_sub;                                   // user input for initialize,
    bool _init_trigger;                                                  // become true when /init topic published
};

}  // namespace turtlesim

#endif /* ALICA_TURTLE_WORLD_MODEL_WORLD_MODEL_HPP */