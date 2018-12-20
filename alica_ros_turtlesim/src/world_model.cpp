#include <alica_ros_turtlesim/world_model.hpp>
#include <geometry_msgs/Twist.h>

namespace turtlesim {

ALICATurtleWorldModel* ALICATurtleWorldModel::instance = nullptr;

ALICATurtleWorldModel* ALICATurtleWorldModel::get() {
    return instance;
}

void ALICATurtleWorldModel::init(ros::NodeHandle& nh, ros::NodeHandle& priv_nh) {
    if (!instance) {
        instance = new ALICATurtleWorldModel(nh, priv_nh);
    }
}

void ALICATurtleWorldModel::del() {
    delete instance;
}

ALICATurtleWorldModel::ALICATurtleWorldModel(ros::NodeHandle& nh, ros::NodeHandle& priv_nh)
        : turtle(priv_nh) {
    // initialize publisher, subscriber and service client.
    _init_trigger_sub = nh.subscribe("init", 1, &ALICATurtleWorldModel::init_trigger_sub_callback, this);

    // initialize attribute.
    _init_trigger = false;
}

ALICATurtleWorldModel::~ALICATurtleWorldModel() {}
void ALICATurtleWorldModel::init_trigger_sub_callback(const std_msgs::EmptyConstPtr& msg) {
    _init_trigger = true;
}

}  // namespace turtlesim