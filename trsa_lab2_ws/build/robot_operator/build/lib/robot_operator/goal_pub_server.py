from trsa_interface.srv import PubGoal
from geometry_msgs.msg import PoseStamped
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
import tf_transformations
import math


class MinimalService(Node):
    def __init__(self):
        super().__init__('minimal_service')
        self.gp_cb_group = MutuallyExclusiveCallbackGroup()
        self.goal_pub = self.create_publisher(PoseStamped, '/goal_pose', 10)
        self.srv1= self.create_service(
            PubGoal, 
            '/pub_goal', 
            self.publish_goal_callback,
            callback_group = self.gp_cb_group
        )

    def publish_goal_callback(self, request, response):
        self.get_logger().info(f"Received request: x={request.x}, y={request.y}, z={request.yaw}")
        poseStamped = PoseStamped()

        poseStamped.pose.position.x = request.x
        poseStamped.pose.position.y = request.y
        poseStamped.pose.position.z = 0.0

        quaternion = tf_transformations.quaternion_from_euler(0, 0, math.radians(request.yaw))
        poseStamped.pose.orientation.x = quaternion[0]
        poseStamped.pose.orientation.y = quaternion[1]
        poseStamped.pose.orientation.z = quaternion[2]
        poseStamped.pose.orientation.w = quaternion[3]
        poseStamped.header.frame_id = "map"

        self.goal_pub.publish(poseStamped)
        response.result = True
        return response
    

def main(args=None):
    rclpy.init(args=args)
    server_node = MinimalService()

    executor = MultiThreadedExecutor()
    executor.add_node(server_node)

    try:
        server_node.get_logger().info(
            "Beginning client, shut down with CTRL-C"
        )
        executor.spin()
    except KeyboardInterrupt:
        server_node.get_logger().info(
            "Keyboard interrupt, shutting down.\n"
        )
    server_node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()