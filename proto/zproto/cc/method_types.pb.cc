// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: method_types.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "method_types.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace zproto {

namespace {

const ::google::protobuf::EnumDescriptor* MethodID_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_method_5ftypes_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_method_5ftypes_2eproto() {
  protobuf_AddDesc_method_5ftypes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "method_types.proto");
  GOOGLE_CHECK(file != NULL);
  MethodID_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_method_5ftypes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_method_5ftypes_2eproto() {
}

void protobuf_AddDesc_method_5ftypes_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_method_5ftypes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022method_types.proto\022\006zproto*\247\005\n\010MethodI"
    "D\022\025\n\021METHOD_ID_UNKNOWN\020\000\022\014\n\010VOID_RSP\020\001\022\031"
    "\n\023USER_TOKEN_AUTH_REQ\020\201\374\003\022\031\n\023USER_TOKEN_"
    "AUTH_RSP\020\202\374\003\022\025\n\017SERVER_AUTH_REQ\020\201\376\003\022\025\n\017S"
    "ERVER_AUTH_RSP\020\202\376\003\022!\n\033USER_NAME_PASSWORD"
    "_AUTH_REQ\020\203\376\003\022!\n\033USER_NAME_PASSWORD_AUTH"
    "_RSP\020\204\376\003\022\027\n\021CLIENT_ONLINE_REQ\020\205\376\003\022\027\n\021CLI"
    "ENT_ONLINE_RSP\020\206\376\003\022\030\n\022CLIENT_OFFLINE_REQ"
    "\020\207\376\003\022\030\n\022CLIENT_OFFLINE_RSP\020\210\376\003\022\032\n\024QUERY_"
    "ONINE_USER_REQ\020\231\376\003\022\032\n\024QUERY_ONINE_USER_R"
    "SP\020\232\376\003\022\026\n\020SEND_MESSAGE_REQ\020\211\376\003\022\022\n\014SEQ_DA"
    "TE_RSP\020\212\376\003\022\024\n\016MESSAGE_NOTIFY\020\213\376\003\022\031\n\023MESS"
    "AGE_DATA_NOTIFY\020\214\376\003\022\026\n\020MESSAGE_SYNC_REQ\020"
    "\215\376\003\022\026\n\020MESSAGE_SYNC_RSP\020\216\376\003\022\026\n\020MESSAGE_R"
    "EAD_REQ\020\217\376\003\022\036\n\030LOAD_HISTORY_MESSAGE_REQ\020"
    "\220\376\003\022\036\n\030LOAD_HISTORY_MESSAGE_RSP\020\221\376\003\022\026\n\020L"
    "OAD_DIALOGS_REQ\020\222\376\003\022\026\n\020LOAD_DIALOGS_RSP\020"
    "\223\376\003\022\031\n\023FORAWRD_MESSAGE_REQ\020\224\376\003B#\n\027com.zc"
    "hat.engine.zprotoB\006ZProtoH\002b\006proto3", 755);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "method_types.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_method_5ftypes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_method_5ftypes_2eproto {
  StaticDescriptorInitializer_method_5ftypes_2eproto() {
    protobuf_AddDesc_method_5ftypes_2eproto();
  }
} static_descriptor_initializer_method_5ftypes_2eproto_;
const ::google::protobuf::EnumDescriptor* MethodID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MethodID_descriptor_;
}
bool MethodID_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 65025:
    case 65026:
    case 65281:
    case 65282:
    case 65283:
    case 65284:
    case 65285:
    case 65286:
    case 65287:
    case 65288:
    case 65289:
    case 65290:
    case 65291:
    case 65292:
    case 65293:
    case 65294:
    case 65295:
    case 65296:
    case 65297:
    case 65298:
    case 65299:
    case 65300:
    case 65305:
    case 65306:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)
