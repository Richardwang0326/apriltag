// Generated by gencpp from file task/assignmentRequest.msg
// DO NOT EDIT!


#ifndef TASK_MESSAGE_ASSIGNMENTREQUEST_H
#define TASK_MESSAGE_ASSIGNMENTREQUEST_H


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
struct assignmentRequest_
{
  typedef assignmentRequest_<ContainerAllocator> Type;

  assignmentRequest_()
    : tag1_id(0)
    , tag2_id(0)  {
    }
  assignmentRequest_(const ContainerAllocator& _alloc)
    : tag1_id(0)
    , tag2_id(0)  {
  (void)_alloc;
    }



   typedef int64_t _tag1_id_type;
  _tag1_id_type tag1_id;

   typedef int64_t _tag2_id_type;
  _tag2_id_type tag2_id;





  typedef boost::shared_ptr< ::task::assignmentRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::task::assignmentRequest_<ContainerAllocator> const> ConstPtr;

}; // struct assignmentRequest_

typedef ::task::assignmentRequest_<std::allocator<void> > assignmentRequest;

typedef boost::shared_ptr< ::task::assignmentRequest > assignmentRequestPtr;
typedef boost::shared_ptr< ::task::assignmentRequest const> assignmentRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::task::assignmentRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::task::assignmentRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::task::assignmentRequest_<ContainerAllocator1> & lhs, const ::task::assignmentRequest_<ContainerAllocator2> & rhs)
{
  return lhs.tag1_id == rhs.tag1_id &&
    lhs.tag2_id == rhs.tag2_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::task::assignmentRequest_<ContainerAllocator1> & lhs, const ::task::assignmentRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace task

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::task::assignmentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::task::assignmentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::task::assignmentRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::task::assignmentRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::task::assignmentRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::task::assignmentRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::task::assignmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f286f46d5c435878fb57d59632e4582f";
  }

  static const char* value(const ::task::assignmentRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf286f46d5c435878ULL;
  static const uint64_t static_value2 = 0xfb57d59632e4582fULL;
};

template<class ContainerAllocator>
struct DataType< ::task::assignmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "task/assignmentRequest";
  }

  static const char* value(const ::task::assignmentRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::task::assignmentRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 tag1_id\n"
"int64 tag2_id\n"
;
  }

  static const char* value(const ::task::assignmentRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::task::assignmentRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tag1_id);
      stream.next(m.tag2_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct assignmentRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::task::assignmentRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::task::assignmentRequest_<ContainerAllocator>& v)
  {
    s << indent << "tag1_id: ";
    Printer<int64_t>::stream(s, indent + "  ", v.tag1_id);
    s << indent << "tag2_id: ";
    Printer<int64_t>::stream(s, indent + "  ", v.tag2_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TASK_MESSAGE_ASSIGNMENTREQUEST_H
