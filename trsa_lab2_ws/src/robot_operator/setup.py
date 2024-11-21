from setuptools import find_packages, setup
from glob import glob
import os


package_name = 'robot_operator'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*_launch.[pxy][yma]*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='trsa2024',
    maintainer_email='trsa2024@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'goal_pub_server = robot_operator.goal_pub_server:main',
            'record_video = robot_operator.record_video:main',
            'image_recon = robot_operator.image_recon:main',

        ],
    },
)
