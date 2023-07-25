from setuptools import find_packages
from setuptools import setup

setup(
    name='akari_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('akari_msgs', 'akari_msgs.*')),
)
