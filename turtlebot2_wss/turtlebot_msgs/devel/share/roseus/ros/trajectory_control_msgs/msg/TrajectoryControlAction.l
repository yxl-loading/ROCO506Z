;; Auto-generated. Do not edit!


(when (boundp 'trajectory_control_msgs::TrajectoryControlAction)
  (if (not (find-package "TRAJECTORY_CONTROL_MSGS"))
    (make-package "TRAJECTORY_CONTROL_MSGS"))
  (shadow 'TrajectoryControlAction (find-package "TRAJECTORY_CONTROL_MSGS")))
(unless (find-package "TRAJECTORY_CONTROL_MSGS::TRAJECTORYCONTROLACTION")
  (make-package "TRAJECTORY_CONTROL_MSGS::TRAJECTORYCONTROLACTION"))

(in-package "ROS")
;;//! \htmlinclude TrajectoryControlAction.msg.html


(defclass trajectory_control_msgs::TrajectoryControlAction
  :super ros::object
  :slots (_action_goal _action_result _action_feedback ))

(defmethod trajectory_control_msgs::TrajectoryControlAction
  (:init
   (&key
    ((:action_goal __action_goal) (instance trajectory_control_msgs::TrajectoryControlActionGoal :init))
    ((:action_result __action_result) (instance trajectory_control_msgs::TrajectoryControlActionResult :init))
    ((:action_feedback __action_feedback) (instance trajectory_control_msgs::TrajectoryControlActionFeedback :init))
    )
   (send-super :init)
   (setq _action_goal __action_goal)
   (setq _action_result __action_result)
   (setq _action_feedback __action_feedback)
   self)
  (:action_goal
   (&rest __action_goal)
   (if (keywordp (car __action_goal))
       (send* _action_goal __action_goal)
     (progn
       (if __action_goal (setq _action_goal (car __action_goal)))
       _action_goal)))
  (:action_result
   (&rest __action_result)
   (if (keywordp (car __action_result))
       (send* _action_result __action_result)
     (progn
       (if __action_result (setq _action_result (car __action_result)))
       _action_result)))
  (:action_feedback
   (&rest __action_feedback)
   (if (keywordp (car __action_feedback))
       (send* _action_feedback __action_feedback)
     (progn
       (if __action_feedback (setq _action_feedback (car __action_feedback)))
       _action_feedback)))
  (:serialization-length
   ()
   (+
    ;; trajectory_control_msgs/TrajectoryControlActionGoal _action_goal
    (send _action_goal :serialization-length)
    ;; trajectory_control_msgs/TrajectoryControlActionResult _action_result
    (send _action_result :serialization-length)
    ;; trajectory_control_msgs/TrajectoryControlActionFeedback _action_feedback
    (send _action_feedback :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; trajectory_control_msgs/TrajectoryControlActionGoal _action_goal
       (send _action_goal :serialize s)
     ;; trajectory_control_msgs/TrajectoryControlActionResult _action_result
       (send _action_result :serialize s)
     ;; trajectory_control_msgs/TrajectoryControlActionFeedback _action_feedback
       (send _action_feedback :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; trajectory_control_msgs/TrajectoryControlActionGoal _action_goal
     (send _action_goal :deserialize buf ptr-) (incf ptr- (send _action_goal :serialization-length))
   ;; trajectory_control_msgs/TrajectoryControlActionResult _action_result
     (send _action_result :deserialize buf ptr-) (incf ptr- (send _action_result :serialization-length))
   ;; trajectory_control_msgs/TrajectoryControlActionFeedback _action_feedback
     (send _action_feedback :deserialize buf ptr-) (incf ptr- (send _action_feedback :serialization-length))
   ;;
   self)
  )

(setf (get trajectory_control_msgs::TrajectoryControlAction :md5sum-) "d2311c0b64230dec6a9a5cc13450e841")
(setf (get trajectory_control_msgs::TrajectoryControlAction :datatype-) "trajectory_control_msgs/TrajectoryControlAction")
(setf (get trajectory_control_msgs::TrajectoryControlAction :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

TrajectoryControlActionGoal action_goal
TrajectoryControlActionResult action_result
TrajectoryControlActionFeedback action_feedback

================================================================================
MSG: trajectory_control_msgs/TrajectoryControlActionGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalID goal_id
TrajectoryControlGoal goal

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: actionlib_msgs/GoalID
# The stamp should store the time at which this goal was requested.
# It is used by an action server when it tries to preempt all
# goals that were requested before a certain time
time stamp

# The id provides a way to associate feedback and
# result message with specific goal requests. The id
# specified must be unique.
string id


================================================================================
MSG: trajectory_control_msgs/TrajectoryControlGoal
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the goal
nav_msgs/Path path

================================================================================
MSG: nav_msgs/Path
#An array of poses that represents a Path for a robot to follow
Header header
geometry_msgs/PoseStamped[] poses

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: trajectory_control_msgs/TrajectoryControlActionResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
TrajectoryControlResult result

================================================================================
MSG: actionlib_msgs/GoalStatus
GoalID goal_id
uint8 status
uint8 PENDING         = 0   # The goal has yet to be processed by the action server
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing
                            #   and has since completed its execution (Terminal State)
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due
                            #    to some failure (Terminal State)
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,
                            #    because the goal was unattainable or invalid (Terminal State)
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing
                            #    and has not yet completed execution
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,
                            #    but the action server has not yet confirmed that the goal is canceled
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing
                            #    and was successfully cancelled (Terminal State)
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be
                            #    sent over the wire by an action server

#Allow for the user to associate a string with GoalStatus for debugging
string text


================================================================================
MSG: trajectory_control_msgs/TrajectoryControlResult
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

# Define the result
bool done

================================================================================
MSG: trajectory_control_msgs/TrajectoryControlActionFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

Header header
actionlib_msgs/GoalStatus status
TrajectoryControlFeedback feedback

================================================================================
MSG: trajectory_control_msgs/TrajectoryControlFeedback
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

# Define a feedbackmessage
float64 timestep
geometry_msgs/Twist cmd_vel
nifti_robot_driver_msgs/Tracks tracks_cmd
std_msgs/Int32 posture_cmd
nifti_robot_driver_msgs/FlippersStateStamped flippers_state
geometry_msgs/Vector3 trajectory_error
geometry_msgs/Pose virtual_reference_pose
geometry_msgs/Pose robot_pose


================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: nifti_robot_driver_msgs/Tracks
float64 left
float64 right


================================================================================
MSG: std_msgs/Int32
int32 data
================================================================================
MSG: nifti_robot_driver_msgs/FlippersStateStamped
Header header
float64 frontLeft
float64 frontRight
float64 rearLeft
float64 rearRight

")



(provide :trajectory_control_msgs/TrajectoryControlAction "d2311c0b64230dec6a9a5cc13450e841")

