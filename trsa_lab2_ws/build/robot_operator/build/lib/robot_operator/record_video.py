import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from cv_bridge import CvBridge 
from sensor_msgs.msg import Image
import cv2
import os

class MinimalService(Node):
    def __init__(self):
        super().__init__('video_recorder')
        self.camera_driver_sub = self.create_subscription(Image,'/depth_camera/image_raw', self.frame_received_callback,10)        
        self.bridge = CvBridge()
        self.file_number = 1
        self.output_folder = 'training_images'
        os.makedirs(self.output_folder, exist_ok=True)

    def frame_received_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg)

            file_path = os.path.join(self.output_folder, f'image_{self.file_number:04d}.png')
            cv2.imwrite(file_path, cv_image)
            self.get_logger().info(f"Image saved: {file_path}")

            self.file_number += 1

        except Exception as e:
            self.get_logger().error(f"Failed to save image: {str(e)}")
    

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