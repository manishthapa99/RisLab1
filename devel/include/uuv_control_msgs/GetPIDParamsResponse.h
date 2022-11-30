// Generated by gencpp from file uuv_control_msgs/GetPIDParamsResponse.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_GETPIDPARAMSRESPONSE_H
#define UUV_CONTROL_MSGS_MESSAGE_GETPIDPARAMSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct GetPIDParamsResponse_
{
  typedef GetPIDParamsResponse_<ContainerAllocator> Type;

  GetPIDParamsResponse_()
    : Kp()
    , Kd()
    , Ki()  {
    }
  GetPIDParamsResponse_(const ContainerAllocator& _alloc)
    : Kp(_alloc)
    , Kd(_alloc)
    , Ki(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _Kp_type;
  _Kp_type Kp;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _Kd_type;
  _Kd_type Kd;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _Ki_type;
  _Ki_type Ki;





  typedef boost::shared_ptr< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPIDParamsResponse_

typedef ::uuv_control_msgs::GetPIDParamsResponse_<std::allocator<void> > GetPIDParamsResponse;

typedef boost::shared_ptr< ::uuv_control_msgs::GetPIDParamsResponse > GetPIDParamsResponsePtr;
typedef boost::shared_ptr< ::uuv_control_msgs::GetPIDParamsResponse const> GetPIDParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator1> & lhs, const ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.Kp == rhs.Kp &&
    lhs.Kd == rhs.Kd &&
    lhs.Ki == rhs.Ki;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator1> & lhs, const ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1dae001799e4bc231c788fb194cf733a";
  }

  static const char* value(const ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1dae001799e4bc23ULL;
  static const uint64_t static_value2 = 0x1c788fb194cf733aULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/GetPIDParamsResponse";
  }

  static const char* value(const ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] Kp\n"
"float64[] Kd\n"
"float64[] Ki\n"
"\n"
;
  }

  static const char* value(const ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Kp);
      stream.next(m.Kd);
      stream.next(m.Ki);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPIDParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::GetPIDParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "Kp[]" << std::endl;
    for (size_t i = 0; i < v.Kp.size(); ++i)
    {
      s << indent << "  Kp[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.Kp[i]);
    }
    s << indent << "Kd[]" << std::endl;
    for (size_t i = 0; i < v.Kd.size(); ++i)
    {
      s << indent << "  Kd[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.Kd[i]);
    }
    s << indent << "Ki[]" << std::endl;
    for (size_t i = 0; i < v.Ki.size(); ++i)
    {
      s << indent << "  Ki[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.Ki[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_GETPIDPARAMSRESPONSE_H
