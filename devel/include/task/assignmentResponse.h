// Generated by gencpp from file task/assignmentResponse.msg
// DO NOT EDIT!


#ifndef TASK_MESSAGE_ASSIGNMENTRESPONSE_H
#define TASK_MESSAGE_ASSIGNMENTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace task
{
template <class ContainerAllocator>
struct assignmentResponse_
{
  typedef assignmentResponse_<ContainerAllocator> Type;

  assignmentResponse_()
    : result()
    , distance(0.0)  {
    }
  assignmentResponse_(const ContainerAllocator& _alloc)
    : result(_alloc)
    , distance(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _result_type;
  _result_type result;

   typedef double _distance_type;
  _distance_type distance;





  typedef boost::shared_ptr< ::task::assignmentResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::task::assignmentResponse_<ContainerAllocator> const> ConstPtr;

}; // struct assignmentResponse_

typedef ::task::assignmentResponse_<std::allocator<void> > assignmentResponse;

typedef boost::shared_ptr< ::task::assignmentResponse > assignmentResponsePtr;
typedef boost::shared_ptr< ::task::assignmentResponse const> assignmentResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::task::assignmentResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::task::assignmentResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::task::assignmentResponse_<ContainerAllocator1> & lhs, const ::task::assignmentResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.distance == rhs.distance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::task::assignmentResponse_<ContainerAllocator1> & lhs, const ::task::assignmentResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace task

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::task::assignmentResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::task::assignmentResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::task::assignmentResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::task::assignmentResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::task::assignmentResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::task::assignmentResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::task::assignmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8bb25a224ff987289e4bb4db81282f4";
  }

  static const char* value(const ::task::assignmentResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8bb25a224ff9872ULL;
  static const uint64_t static_value2 = 0x89e4bb4db81282f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::task::assignmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "task/assignmentResponse";
  }

  static const char* value(const ::task::assignmentResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::task::assignmentResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string result\n"
"float64 distance\n"
"\n"
"\n"
;
  }

  static const char* value(const ::task::assignmentResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::task::assignmentResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct assignmentResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::task::assignmentResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::task::assignmentResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.result);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TASK_MESSAGE_ASSIGNMENTRESPONSE_H
