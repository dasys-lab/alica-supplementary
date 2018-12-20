# ALICA ROS turtlesim
### Prerequisite
- [ROS kinetic](http://wiki.ros.org/kinetic/Installation/Ubuntu)
- [catkin_tools](https://catkin-tools.readthedocs.io/en/latest/installing.html)
- [wstool](http://wiki.ros.org/wstool)

### Setting up workspace:
    mkdir -p catkin_ws/src
    cd catkin_ws/src
    git clone -b yu_alica_ros_turtlesim git@bitbucket.org:rapyutians/io_projects.git
    wstool init
    wstool merge src/io_projects/projects/alica_ros_turtlesim/alica_ros_turtlesim.rosinstall 
    wstool update
    rosdep init
    rosdep update
    source /opt/ros/kinetic/setup.bash
    rosdep install --from-paths . --ignore-src --rosdistro $ROS_DISTRO -y -r
### Build
    cd ~/catkin_ws && catkin build alica_ros_turtlesim

### Sample usage:
1. Launch turtlesim
    `roslaunch alica_ros_turtlesim env.launch`
2. Turtle node(you can launch turtle with different name till 7 turtles)
    `roslaunch alica_ros_turtlesim turtle.launch name:=turtle1`
5. start moving
    `rostopic pub /init std_msgs/Empty "{}" `

### Setup Plan designer
##### Get plan desginer
   git clone https://github.com/dasys-lab/alica-plan-designer.git
##### Start plan designer
  ```
  cd alica-plan-designer
  . /bin/start.sh
  ```
##### Project setting
1. Create project
    input root path to your alica ws and change expr as well.#todo add pic
2. Set preference
    1. open Window -> Preference -> Plan Designer -> Condition plugin
    2.  input followings:
    - Path to plugin folder: <path to your alica-plan-designer>/src/conditionPlugins/templates
    - Path to template interface: <path to your alica-plan-designer>/src/conditionPlugins/templates/TemplateInterface.xpt
    - Path to plugin template: <path to your alica-plan-designer>/src/conditionPlugins/templates/PluginTemplate.xpt


## Tutorial
#### Objective
This t
1. 
