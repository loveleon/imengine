// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: counters.proto

#ifndef PROTOBUF_counters_2eproto__INCLUDED
#define PROTOBUF_counters_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace zproto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_counters_2eproto();
void protobuf_InitDefaults_counters_2eproto();
void protobuf_AssignDesc_counters_2eproto();
void protobuf_ShutdownFile_counters_2eproto();

class AppCounters;
class CountersChangedNotify;

// ===================================================================

class AppCounters : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.AppCounters) */ {
 public:
  AppCounters();
  virtual ~AppCounters();

  AppCounters(const AppCounters& from);

  inline AppCounters& operator=(const AppCounters& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AppCounters& default_instance();

  static const AppCounters* internal_default_instance();

  void Swap(AppCounters* other);

  // implements Message ----------------------------------------------

  inline AppCounters* New() const { return New(NULL); }

  AppCounters* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AppCounters* other);
  void UnsafeMergeFrom(const AppCounters& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 global_counter = 1;
  void clear_global_counter();
  static const int kGlobalCounterFieldNumber = 1;
  ::google::protobuf::int32 global_counter() const;
  void set_global_counter(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:zproto.AppCounters)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 global_counter_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_counters_2eproto_impl();
  friend void  protobuf_AddDesc_counters_2eproto_impl();
  friend void protobuf_AssignDesc_counters_2eproto();
  friend void protobuf_ShutdownFile_counters_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<AppCounters> AppCounters_default_instance_;

// -------------------------------------------------------------------

class CountersChangedNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.CountersChangedNotify) */ {
 public:
  CountersChangedNotify();
  virtual ~CountersChangedNotify();

  CountersChangedNotify(const CountersChangedNotify& from);

  inline CountersChangedNotify& operator=(const CountersChangedNotify& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CountersChangedNotify& default_instance();

  static const CountersChangedNotify* internal_default_instance();

  void Swap(CountersChangedNotify* other);

  // implements Message ----------------------------------------------

  inline CountersChangedNotify* New() const { return New(NULL); }

  CountersChangedNotify* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CountersChangedNotify* other);
  void UnsafeMergeFrom(const CountersChangedNotify& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .zproto.AppCounters counters = 1;
  bool has_counters() const;
  void clear_counters();
  static const int kCountersFieldNumber = 1;
  const ::zproto::AppCounters& counters() const;
  ::zproto::AppCounters* mutable_counters();
  ::zproto::AppCounters* release_counters();
  void set_allocated_counters(::zproto::AppCounters* counters);

  // @@protoc_insertion_point(class_scope:zproto.CountersChangedNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::zproto::AppCounters* counters_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_counters_2eproto_impl();
  friend void  protobuf_AddDesc_counters_2eproto_impl();
  friend void protobuf_AssignDesc_counters_2eproto();
  friend void protobuf_ShutdownFile_counters_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<CountersChangedNotify> CountersChangedNotify_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AppCounters

// optional int32 global_counter = 1;
inline void AppCounters::clear_global_counter() {
  global_counter_ = 0;
}
inline ::google::protobuf::int32 AppCounters::global_counter() const {
  // @@protoc_insertion_point(field_get:zproto.AppCounters.global_counter)
  return global_counter_;
}
inline void AppCounters::set_global_counter(::google::protobuf::int32 value) {
  
  global_counter_ = value;
  // @@protoc_insertion_point(field_set:zproto.AppCounters.global_counter)
}

inline const AppCounters* AppCounters::internal_default_instance() {
  return &AppCounters_default_instance_.get();
}
// -------------------------------------------------------------------

// CountersChangedNotify

// optional .zproto.AppCounters counters = 1;
inline bool CountersChangedNotify::has_counters() const {
  return this != internal_default_instance() && counters_ != NULL;
}
inline void CountersChangedNotify::clear_counters() {
  if (GetArenaNoVirtual() == NULL && counters_ != NULL) delete counters_;
  counters_ = NULL;
}
inline const ::zproto::AppCounters& CountersChangedNotify::counters() const {
  // @@protoc_insertion_point(field_get:zproto.CountersChangedNotify.counters)
  return counters_ != NULL ? *counters_
                         : *::zproto::AppCounters::internal_default_instance();
}
inline ::zproto::AppCounters* CountersChangedNotify::mutable_counters() {
  
  if (counters_ == NULL) {
    counters_ = new ::zproto::AppCounters;
  }
  // @@protoc_insertion_point(field_mutable:zproto.CountersChangedNotify.counters)
  return counters_;
}
inline ::zproto::AppCounters* CountersChangedNotify::release_counters() {
  // @@protoc_insertion_point(field_release:zproto.CountersChangedNotify.counters)
  
  ::zproto::AppCounters* temp = counters_;
  counters_ = NULL;
  return temp;
}
inline void CountersChangedNotify::set_allocated_counters(::zproto::AppCounters* counters) {
  delete counters_;
  counters_ = counters;
  if (counters) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:zproto.CountersChangedNotify.counters)
}

inline const CountersChangedNotify* CountersChangedNotify::internal_default_instance() {
  return &CountersChangedNotify_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_counters_2eproto__INCLUDED
