#This is an example of a simple publisher node in ROS
import rospy
from std_msgs.msg import String

def simplePublisher():
    simple_publisher = rospy.Publisher('topic_1', String, queue_size = 10)
    rospy.init_node('node_1', anonymous = False)
    rate = rospy.Rate(10)           #Frequeny in Hertz

    #The string to be published on the topic
    topic1_content = "My first ROS Topic"

    while not rospy.is_shutdown():
        simple_publisher.publish(topic1_content)
        rate.sleep()

if __name__ = '__main__':
    try:
        simplePublisher
    except rospy.ROSInterruptException:
        pass
