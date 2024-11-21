import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from cv_bridge import CvBridge 
from sensor_msgs.msg import Image
import cv2
import os
import ultralytics 



class MinimalService(Node):
    def __init__(self):
        super().__init__('video_recorder')
        self.camera_driver_sub = self.create_subscription(Image,'/depth_camera/image_raw', self.frame_received_callback,10)     
        self.ident_img_pub = self.create_publisher(Image, '/camera/identified', 10)
   
        self.bridge = CvBridge()
        self.model = ultralytics.YOLO('./src/robot_operator/models/best.pt')


    def frame_received_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg)
            result = self.model.predict(cv_image, verbose=False)  # Disable printing
            # Filter out any boxes classified as "Box" because box identification turned out bad
            filtered_boxes = [box for box in result[0].boxes if box.cls != 0]  # Assuming 0 is the class ID for "Box"
            
            if len(filtered_boxes) > 0:
                result[0].boxes = filtered_boxes
                annotated_image = result[0].plot()
                pub_img = self.bridge.cv2_to_imgmsg(annotated_image)
                self.ident_img_pub.publish(pub_img)
                


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