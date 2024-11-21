from setuptools import find_packages
from setuptools import setup

setup(
    name='trsa_interface',
    version='0.0.0',
    packages=find_packages(
        include=('trsa_interface', 'trsa_interface.*')),
)
