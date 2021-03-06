// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: buffer.proto

#ifndef PROTOBUF_buffer_2eproto__INCLUDED
#define PROTOBUF_buffer_2eproto__INCLUDED

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

namespace buffer {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_buffer_2eproto();
void protobuf_InitDefaults_buffer_2eproto();
void protobuf_AssignDesc_buffer_2eproto();
void protobuf_ShutdownFile_buffer_2eproto();

class board;
class rank;

// ===================================================================

class board : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffer.board) */ {
 public:
  board();
  virtual ~board();

  board(const board& from);

  inline board& operator=(const board& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const board& default_instance();

  static const board* internal_default_instance();

  void Swap(board* other);

  // implements Message ----------------------------------------------

  inline board* New() const { return New(NULL); }

  board* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const board& from);
  void MergeFrom(const board& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(board* other);
  void UnsafeMergeFrom(const board& from);
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

  // repeated bool current_state = 1;
  int current_state_size() const;
  void clear_current_state();
  static const int kCurrentStateFieldNumber = 1;
  bool current_state(int index) const;
  void set_current_state(int index, bool value);
  void add_current_state(bool value);
  const ::google::protobuf::RepeatedField< bool >&
      current_state() const;
  ::google::protobuf::RepeatedField< bool >*
      mutable_current_state();

  // repeated bool our_group_lib1 = 2;
  int our_group_lib1_size() const;
  void clear_our_group_lib1();
  static const int kOurGroupLib1FieldNumber = 2;
  bool our_group_lib1(int index) const;
  void set_our_group_lib1(int index, bool value);
  void add_our_group_lib1(bool value);
  const ::google::protobuf::RepeatedField< bool >&
      our_group_lib1() const;
  ::google::protobuf::RepeatedField< bool >*
      mutable_our_group_lib1();

  // repeated bool our_group_lib2 = 3;
  int our_group_lib2_size() const;
  void clear_our_group_lib2();
  static const int kOurGroupLib2FieldNumber = 3;
  bool our_group_lib2(int index) const;
  void set_our_group_lib2(int index, bool value);
  void add_our_group_lib2(bool value);
  const ::google::protobuf::RepeatedField< bool >&
      our_group_lib2() const;
  ::google::protobuf::RepeatedField< bool >*
      mutable_our_group_lib2();

  // repeated bool our_group_lib3_plus = 4;
  int our_group_lib3_plus_size() const;
  void clear_our_group_lib3_plus();
  static const int kOurGroupLib3PlusFieldNumber = 4;
  bool our_group_lib3_plus(int index) const;
  void set_our_group_lib3_plus(int index, bool value);
  void add_our_group_lib3_plus(bool value);
  const ::google::protobuf::RepeatedField< bool >&
      our_group_lib3_plus() const;
  ::google::protobuf::RepeatedField< bool >*
      mutable_our_group_lib3_plus();

  // repeated bool oppo_group_lib1 = 5;
  int oppo_group_lib1_size() const;
  void clear_oppo_group_lib1();
  static const int kOppoGroupLib1FieldNumber = 5;
  bool oppo_group_lib1(int index) const;
  void set_oppo_group_lib1(int index, bool value);
  void add_oppo_group_lib1(bool value);
  const ::google::protobuf::RepeatedField< bool >&
      oppo_group_lib1() const;
  ::google::protobuf::RepeatedField< bool >*
      mutable_oppo_group_lib1();

  // repeated bool oppo_group_lib2 = 6;
  int oppo_group_lib2_size() const;
  void clear_oppo_group_lib2();
  static const int kOppoGroupLib2FieldNumber = 6;
  bool oppo_group_lib2(int index) const;
  void set_oppo_group_lib2(int index, bool value);
  void add_oppo_group_lib2(bool value);
  const ::google::protobuf::RepeatedField< bool >&
      oppo_group_lib2() const;
  ::google::protobuf::RepeatedField< bool >*
      mutable_oppo_group_lib2();

  // repeated bool oppo_group_lib3_plus = 7;
  int oppo_group_lib3_plus_size() const;
  void clear_oppo_group_lib3_plus();
  static const int kOppoGroupLib3PlusFieldNumber = 7;
  bool oppo_group_lib3_plus(int index) const;
  void set_oppo_group_lib3_plus(int index, bool value);
  void add_oppo_group_lib3_plus(bool value);
  const ::google::protobuf::RepeatedField< bool >&
      oppo_group_lib3_plus() const;
  ::google::protobuf::RepeatedField< bool >*
      mutable_oppo_group_lib3_plus();

  // @@protoc_insertion_point(class_scope:buffer.board)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< bool > current_state_;
  mutable int _current_state_cached_byte_size_;
  ::google::protobuf::RepeatedField< bool > our_group_lib1_;
  mutable int _our_group_lib1_cached_byte_size_;
  ::google::protobuf::RepeatedField< bool > our_group_lib2_;
  mutable int _our_group_lib2_cached_byte_size_;
  ::google::protobuf::RepeatedField< bool > our_group_lib3_plus_;
  mutable int _our_group_lib3_plus_cached_byte_size_;
  ::google::protobuf::RepeatedField< bool > oppo_group_lib1_;
  mutable int _oppo_group_lib1_cached_byte_size_;
  ::google::protobuf::RepeatedField< bool > oppo_group_lib2_;
  mutable int _oppo_group_lib2_cached_byte_size_;
  ::google::protobuf::RepeatedField< bool > oppo_group_lib3_plus_;
  mutable int _oppo_group_lib3_plus_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_buffer_2eproto_impl();
  friend void  protobuf_AddDesc_buffer_2eproto_impl();
  friend void protobuf_AssignDesc_buffer_2eproto();
  friend void protobuf_ShutdownFile_buffer_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<board> board_default_instance_;

// -------------------------------------------------------------------

class rank : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:buffer.rank) */ {
 public:
  rank();
  virtual ~rank();

  rank(const rank& from);

  inline rank& operator=(const rank& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const rank& default_instance();

  static const rank* internal_default_instance();

  void Swap(rank* other);

  // implements Message ----------------------------------------------

  inline rank* New() const { return New(NULL); }

  rank* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const rank& from);
  void MergeFrom(const rank& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(rank* other);
  void UnsafeMergeFrom(const rank& from);
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

  // repeated int32 x_cor = 1;
  int x_cor_size() const;
  void clear_x_cor();
  static const int kXCorFieldNumber = 1;
  ::google::protobuf::int32 x_cor(int index) const;
  void set_x_cor(int index, ::google::protobuf::int32 value);
  void add_x_cor(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      x_cor() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_x_cor();

  // repeated int32 y_cor = 2;
  int y_cor_size() const;
  void clear_y_cor();
  static const int kYCorFieldNumber = 2;
  ::google::protobuf::int32 y_cor(int index) const;
  void set_y_cor(int index, ::google::protobuf::int32 value);
  void add_y_cor(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      y_cor() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_y_cor();

  // repeated float value = 3;
  int value_size() const;
  void clear_value();
  static const int kValueFieldNumber = 3;
  float value(int index) const;
  void set_value(int index, float value);
  void add_value(float value);
  const ::google::protobuf::RepeatedField< float >&
      value() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_value();

  // @@protoc_insertion_point(class_scope:buffer.rank)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > x_cor_;
  mutable int _x_cor_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > y_cor_;
  mutable int _y_cor_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > value_;
  mutable int _value_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_buffer_2eproto_impl();
  friend void  protobuf_AddDesc_buffer_2eproto_impl();
  friend void protobuf_AssignDesc_buffer_2eproto();
  friend void protobuf_ShutdownFile_buffer_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<rank> rank_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// board

// repeated bool current_state = 1;
inline int board::current_state_size() const {
  return current_state_.size();
}
inline void board::clear_current_state() {
  current_state_.Clear();
}
inline bool board::current_state(int index) const {
  // @@protoc_insertion_point(field_get:buffer.board.current_state)
  return current_state_.Get(index);
}
inline void board::set_current_state(int index, bool value) {
  current_state_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.board.current_state)
}
inline void board::add_current_state(bool value) {
  current_state_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.board.current_state)
}
inline const ::google::protobuf::RepeatedField< bool >&
board::current_state() const {
  // @@protoc_insertion_point(field_list:buffer.board.current_state)
  return current_state_;
}
inline ::google::protobuf::RepeatedField< bool >*
board::mutable_current_state() {
  // @@protoc_insertion_point(field_mutable_list:buffer.board.current_state)
  return &current_state_;
}

// repeated bool our_group_lib1 = 2;
inline int board::our_group_lib1_size() const {
  return our_group_lib1_.size();
}
inline void board::clear_our_group_lib1() {
  our_group_lib1_.Clear();
}
inline bool board::our_group_lib1(int index) const {
  // @@protoc_insertion_point(field_get:buffer.board.our_group_lib1)
  return our_group_lib1_.Get(index);
}
inline void board::set_our_group_lib1(int index, bool value) {
  our_group_lib1_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.board.our_group_lib1)
}
inline void board::add_our_group_lib1(bool value) {
  our_group_lib1_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.board.our_group_lib1)
}
inline const ::google::protobuf::RepeatedField< bool >&
board::our_group_lib1() const {
  // @@protoc_insertion_point(field_list:buffer.board.our_group_lib1)
  return our_group_lib1_;
}
inline ::google::protobuf::RepeatedField< bool >*
board::mutable_our_group_lib1() {
  // @@protoc_insertion_point(field_mutable_list:buffer.board.our_group_lib1)
  return &our_group_lib1_;
}

// repeated bool our_group_lib2 = 3;
inline int board::our_group_lib2_size() const {
  return our_group_lib2_.size();
}
inline void board::clear_our_group_lib2() {
  our_group_lib2_.Clear();
}
inline bool board::our_group_lib2(int index) const {
  // @@protoc_insertion_point(field_get:buffer.board.our_group_lib2)
  return our_group_lib2_.Get(index);
}
inline void board::set_our_group_lib2(int index, bool value) {
  our_group_lib2_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.board.our_group_lib2)
}
inline void board::add_our_group_lib2(bool value) {
  our_group_lib2_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.board.our_group_lib2)
}
inline const ::google::protobuf::RepeatedField< bool >&
board::our_group_lib2() const {
  // @@protoc_insertion_point(field_list:buffer.board.our_group_lib2)
  return our_group_lib2_;
}
inline ::google::protobuf::RepeatedField< bool >*
board::mutable_our_group_lib2() {
  // @@protoc_insertion_point(field_mutable_list:buffer.board.our_group_lib2)
  return &our_group_lib2_;
}

// repeated bool our_group_lib3_plus = 4;
inline int board::our_group_lib3_plus_size() const {
  return our_group_lib3_plus_.size();
}
inline void board::clear_our_group_lib3_plus() {
  our_group_lib3_plus_.Clear();
}
inline bool board::our_group_lib3_plus(int index) const {
  // @@protoc_insertion_point(field_get:buffer.board.our_group_lib3_plus)
  return our_group_lib3_plus_.Get(index);
}
inline void board::set_our_group_lib3_plus(int index, bool value) {
  our_group_lib3_plus_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.board.our_group_lib3_plus)
}
inline void board::add_our_group_lib3_plus(bool value) {
  our_group_lib3_plus_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.board.our_group_lib3_plus)
}
inline const ::google::protobuf::RepeatedField< bool >&
board::our_group_lib3_plus() const {
  // @@protoc_insertion_point(field_list:buffer.board.our_group_lib3_plus)
  return our_group_lib3_plus_;
}
inline ::google::protobuf::RepeatedField< bool >*
board::mutable_our_group_lib3_plus() {
  // @@protoc_insertion_point(field_mutable_list:buffer.board.our_group_lib3_plus)
  return &our_group_lib3_plus_;
}

// repeated bool oppo_group_lib1 = 5;
inline int board::oppo_group_lib1_size() const {
  return oppo_group_lib1_.size();
}
inline void board::clear_oppo_group_lib1() {
  oppo_group_lib1_.Clear();
}
inline bool board::oppo_group_lib1(int index) const {
  // @@protoc_insertion_point(field_get:buffer.board.oppo_group_lib1)
  return oppo_group_lib1_.Get(index);
}
inline void board::set_oppo_group_lib1(int index, bool value) {
  oppo_group_lib1_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.board.oppo_group_lib1)
}
inline void board::add_oppo_group_lib1(bool value) {
  oppo_group_lib1_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.board.oppo_group_lib1)
}
inline const ::google::protobuf::RepeatedField< bool >&
board::oppo_group_lib1() const {
  // @@protoc_insertion_point(field_list:buffer.board.oppo_group_lib1)
  return oppo_group_lib1_;
}
inline ::google::protobuf::RepeatedField< bool >*
board::mutable_oppo_group_lib1() {
  // @@protoc_insertion_point(field_mutable_list:buffer.board.oppo_group_lib1)
  return &oppo_group_lib1_;
}

// repeated bool oppo_group_lib2 = 6;
inline int board::oppo_group_lib2_size() const {
  return oppo_group_lib2_.size();
}
inline void board::clear_oppo_group_lib2() {
  oppo_group_lib2_.Clear();
}
inline bool board::oppo_group_lib2(int index) const {
  // @@protoc_insertion_point(field_get:buffer.board.oppo_group_lib2)
  return oppo_group_lib2_.Get(index);
}
inline void board::set_oppo_group_lib2(int index, bool value) {
  oppo_group_lib2_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.board.oppo_group_lib2)
}
inline void board::add_oppo_group_lib2(bool value) {
  oppo_group_lib2_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.board.oppo_group_lib2)
}
inline const ::google::protobuf::RepeatedField< bool >&
board::oppo_group_lib2() const {
  // @@protoc_insertion_point(field_list:buffer.board.oppo_group_lib2)
  return oppo_group_lib2_;
}
inline ::google::protobuf::RepeatedField< bool >*
board::mutable_oppo_group_lib2() {
  // @@protoc_insertion_point(field_mutable_list:buffer.board.oppo_group_lib2)
  return &oppo_group_lib2_;
}

// repeated bool oppo_group_lib3_plus = 7;
inline int board::oppo_group_lib3_plus_size() const {
  return oppo_group_lib3_plus_.size();
}
inline void board::clear_oppo_group_lib3_plus() {
  oppo_group_lib3_plus_.Clear();
}
inline bool board::oppo_group_lib3_plus(int index) const {
  // @@protoc_insertion_point(field_get:buffer.board.oppo_group_lib3_plus)
  return oppo_group_lib3_plus_.Get(index);
}
inline void board::set_oppo_group_lib3_plus(int index, bool value) {
  oppo_group_lib3_plus_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.board.oppo_group_lib3_plus)
}
inline void board::add_oppo_group_lib3_plus(bool value) {
  oppo_group_lib3_plus_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.board.oppo_group_lib3_plus)
}
inline const ::google::protobuf::RepeatedField< bool >&
board::oppo_group_lib3_plus() const {
  // @@protoc_insertion_point(field_list:buffer.board.oppo_group_lib3_plus)
  return oppo_group_lib3_plus_;
}
inline ::google::protobuf::RepeatedField< bool >*
board::mutable_oppo_group_lib3_plus() {
  // @@protoc_insertion_point(field_mutable_list:buffer.board.oppo_group_lib3_plus)
  return &oppo_group_lib3_plus_;
}

inline const board* board::internal_default_instance() {
  return &board_default_instance_.get();
}
// -------------------------------------------------------------------

// rank

// repeated int32 x_cor = 1;
inline int rank::x_cor_size() const {
  return x_cor_.size();
}
inline void rank::clear_x_cor() {
  x_cor_.Clear();
}
inline ::google::protobuf::int32 rank::x_cor(int index) const {
  // @@protoc_insertion_point(field_get:buffer.rank.x_cor)
  return x_cor_.Get(index);
}
inline void rank::set_x_cor(int index, ::google::protobuf::int32 value) {
  x_cor_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.rank.x_cor)
}
inline void rank::add_x_cor(::google::protobuf::int32 value) {
  x_cor_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.rank.x_cor)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
rank::x_cor() const {
  // @@protoc_insertion_point(field_list:buffer.rank.x_cor)
  return x_cor_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
rank::mutable_x_cor() {
  // @@protoc_insertion_point(field_mutable_list:buffer.rank.x_cor)
  return &x_cor_;
}

// repeated int32 y_cor = 2;
inline int rank::y_cor_size() const {
  return y_cor_.size();
}
inline void rank::clear_y_cor() {
  y_cor_.Clear();
}
inline ::google::protobuf::int32 rank::y_cor(int index) const {
  // @@protoc_insertion_point(field_get:buffer.rank.y_cor)
  return y_cor_.Get(index);
}
inline void rank::set_y_cor(int index, ::google::protobuf::int32 value) {
  y_cor_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.rank.y_cor)
}
inline void rank::add_y_cor(::google::protobuf::int32 value) {
  y_cor_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.rank.y_cor)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
rank::y_cor() const {
  // @@protoc_insertion_point(field_list:buffer.rank.y_cor)
  return y_cor_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
rank::mutable_y_cor() {
  // @@protoc_insertion_point(field_mutable_list:buffer.rank.y_cor)
  return &y_cor_;
}

// repeated float value = 3;
inline int rank::value_size() const {
  return value_.size();
}
inline void rank::clear_value() {
  value_.Clear();
}
inline float rank::value(int index) const {
  // @@protoc_insertion_point(field_get:buffer.rank.value)
  return value_.Get(index);
}
inline void rank::set_value(int index, float value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:buffer.rank.value)
}
inline void rank::add_value(float value) {
  value_.Add(value);
  // @@protoc_insertion_point(field_add:buffer.rank.value)
}
inline const ::google::protobuf::RepeatedField< float >&
rank::value() const {
  // @@protoc_insertion_point(field_list:buffer.rank.value)
  return value_;
}
inline ::google::protobuf::RepeatedField< float >*
rank::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:buffer.rank.value)
  return &value_;
}

inline const rank* rank::internal_default_instance() {
  return &rank_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace buffer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_buffer_2eproto__INCLUDED
