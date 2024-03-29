#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

int main(int argc, char** argv)
{
	ros::init(argc, argv, "my_tf_broadcaster");
	ros::NodeHandle nh;
	
	tf::TransformBroadcaster br;
	tf::Transform transform;
	
	ros::Rate rate(10.0);
	
	while(nh.ok())
	{
		//transform.setOrigin(tf::Vector3(0.0, 2.0, 0.0));
		//transform.setRotation(tf::Quaternion(0, 0, 0, 1));
		transform.setOrigin(tf::Vector3(2.0*sin(ros::Time::now().toSec()), 2.0*cos(
		br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "turtle1", "carrot1"));
		rate.sleep();
	}
	return 0;
};
