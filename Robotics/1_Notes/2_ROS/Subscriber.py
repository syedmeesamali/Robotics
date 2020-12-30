#This is an example of a simple subscriber node in ROS
#Such nodes can be used to monitor a process like a robotic joint reaching some limit

import rospy
from std_msgs.msg import String

#Topic callback function
def stringListenerCallBack(data):
    rospy.loginfo('The content of topic is %s', data.data)
    
def stringListener():
    rospy.init_node('node_2', anonymous = False)
    rospy.Subscriber('topic_1', String, stringListenerCallBack)

    #Spin keeps python from exiting until the node is stopped
    rospy.spin()

if __name__ = '__main__':
    stringListener