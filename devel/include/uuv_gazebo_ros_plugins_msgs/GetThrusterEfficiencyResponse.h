// Generated by gencpp from file uuv_gazebo_ros_plugins_msgs/GetThrusterEfficiencyResponse.msg
// DO NOT EDIT!


#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETTHRUSTEREFFICIENCYRESPONSE_H
#define UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETTHRUSTEREFFICIENCYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_gazebo_ros_plugins_msgs
{
template <class ContainerAllocator>
struct GetThrusterEfficiencyResponse_
{
  typedef GetThrusterEfficiencyResponse_<ContainerAllocator> Type;

  GetThrusterEfficiencyResponse_()
    : efficiency(0.0)  {
    }
  GetThrusterEfficiencyResponse_(const ContainerAllocator& _alloc)
    : efficiency(0.0)  {
  (void)_alloc;
    }



   typedef double _efficiency_type;
  _efficiency_type efficiency;





  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetThrusterEfficiencyResponse_

typedef ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<std::allocator<void> > GetThrusterEfficiencyResponse;

typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse > GetThrusterEfficiencyResponsePtr;
typedef boost::shared_ptr< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse const> GetThrusterEfficiencyResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator1> & lhs, const ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator2> & rhs)
{
  return lhs.efficiency == rhs.efficiency;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator1> & lhs, const ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_gazebo_ros_plugins_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b80ec71e671b93e4cc403df1ac4c8a86";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb80ec71e671b93e4ULL;
  static const uint64_t static_value2 = 0xcc403df1ac4c8a86ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_gazebo_ros_plugins_msgs/GetThrusterEfficiencyResponse";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 efficiency\n"
"\n"
;
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.efficiency);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetThrusterEfficiencyResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_gazebo_ros_plugins_msgs::GetThrusterEfficiencyResponse_<ContainerAllocator>& v)
  {
    s << indent << "efficiency: ";
    Printer<double>::stream(s, indent + "  ", v.efficiency);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_GETTHRUSTEREFFICIENCYRESPONSE_H
