// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_test_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "google/protobuf/empty.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_test_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_test_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_test_2eproto;
namespace mosaic {
class ImageAndTextRequest;
struct ImageAndTextRequestDefaultTypeInternal;
extern ImageAndTextRequestDefaultTypeInternal _ImageAndTextRequest_default_instance_;
class IntValue;
struct IntValueDefaultTypeInternal;
extern IntValueDefaultTypeInternal _IntValue_default_instance_;
class ModelChunk;
struct ModelChunkDefaultTypeInternal;
extern ModelChunkDefaultTypeInternal _ModelChunk_default_instance_;
class TextResponse;
struct TextResponseDefaultTypeInternal;
extern TextResponseDefaultTypeInternal _TextResponse_default_instance_;
}  // namespace mosaic
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace mosaic {

// ===================================================================


// -------------------------------------------------------------------

class TextResponse final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mosaic.TextResponse) */ {
 public:
  inline TextResponse() : TextResponse(nullptr) {}
  ~TextResponse() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR TextResponse(::google::protobuf::internal::ConstantInitialized);

  inline TextResponse(const TextResponse& from)
      : TextResponse(nullptr, from) {}
  TextResponse(TextResponse&& from) noexcept
    : TextResponse() {
    *this = ::std::move(from);
  }

  inline TextResponse& operator=(const TextResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline TextResponse& operator=(TextResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const TextResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const TextResponse* internal_default_instance() {
    return reinterpret_cast<const TextResponse*>(
               &_TextResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TextResponse& a, TextResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(TextResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TextResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TextResponse* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TextResponse>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const TextResponse& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const TextResponse& from) {
    TextResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(TextResponse* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "mosaic.TextResponse";
  }
  protected:
  explicit TextResponse(::google::protobuf::Arena* arena);
  TextResponse(::google::protobuf::Arena* arena, const TextResponse& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOutputTextFieldNumber = 1,
  };
  // string output_text = 1;
  void clear_output_text() ;
  const std::string& output_text() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_output_text(Arg_&& arg, Args_... args);
  std::string* mutable_output_text();
  PROTOBUF_NODISCARD std::string* release_output_text();
  void set_allocated_output_text(std::string* value);

  private:
  const std::string& _internal_output_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_output_text(
      const std::string& value);
  std::string* _internal_mutable_output_text();

  public:
  // @@protoc_insertion_point(class_scope:mosaic.TextResponse)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      39, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr output_text_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_2eproto;
};// -------------------------------------------------------------------

class ModelChunk final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mosaic.ModelChunk) */ {
 public:
  inline ModelChunk() : ModelChunk(nullptr) {}
  ~ModelChunk() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ModelChunk(::google::protobuf::internal::ConstantInitialized);

  inline ModelChunk(const ModelChunk& from)
      : ModelChunk(nullptr, from) {}
  ModelChunk(ModelChunk&& from) noexcept
    : ModelChunk() {
    *this = ::std::move(from);
  }

  inline ModelChunk& operator=(const ModelChunk& from) {
    CopyFrom(from);
    return *this;
  }
  inline ModelChunk& operator=(ModelChunk&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ModelChunk& default_instance() {
    return *internal_default_instance();
  }
  static inline const ModelChunk* internal_default_instance() {
    return reinterpret_cast<const ModelChunk*>(
               &_ModelChunk_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ModelChunk& a, ModelChunk& b) {
    a.Swap(&b);
  }
  inline void Swap(ModelChunk* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ModelChunk* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ModelChunk* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ModelChunk>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ModelChunk& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const ModelChunk& from) {
    ModelChunk::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(ModelChunk* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "mosaic.ModelChunk";
  }
  protected:
  explicit ModelChunk(::google::protobuf::Arena* arena);
  ModelChunk(::google::protobuf::Arena* arena, const ModelChunk& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChunkDataFieldNumber = 1,
  };
  // bytes chunk_data = 1;
  void clear_chunk_data() ;
  const std::string& chunk_data() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_chunk_data(Arg_&& arg, Args_... args);
  std::string* mutable_chunk_data();
  PROTOBUF_NODISCARD std::string* release_chunk_data();
  void set_allocated_chunk_data(std::string* value);

  private:
  const std::string& _internal_chunk_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_chunk_data(
      const std::string& value);
  std::string* _internal_mutable_chunk_data();

  public:
  // @@protoc_insertion_point(class_scope:mosaic.ModelChunk)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr chunk_data_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_2eproto;
};// -------------------------------------------------------------------

class IntValue final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mosaic.IntValue) */ {
 public:
  inline IntValue() : IntValue(nullptr) {}
  ~IntValue() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR IntValue(::google::protobuf::internal::ConstantInitialized);

  inline IntValue(const IntValue& from)
      : IntValue(nullptr, from) {}
  IntValue(IntValue&& from) noexcept
    : IntValue() {
    *this = ::std::move(from);
  }

  inline IntValue& operator=(const IntValue& from) {
    CopyFrom(from);
    return *this;
  }
  inline IntValue& operator=(IntValue&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const IntValue& default_instance() {
    return *internal_default_instance();
  }
  static inline const IntValue* internal_default_instance() {
    return reinterpret_cast<const IntValue*>(
               &_IntValue_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(IntValue& a, IntValue& b) {
    a.Swap(&b);
  }
  inline void Swap(IntValue* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(IntValue* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  IntValue* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<IntValue>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const IntValue& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const IntValue& from) {
    IntValue::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(IntValue* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "mosaic.IntValue";
  }
  protected:
  explicit IntValue(::google::protobuf::Arena* arena);
  IntValue(::google::protobuf::Arena* arena, const IntValue& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kValueFieldNumber = 1,
  };
  // int32 value = 1;
  void clear_value() ;
  ::int32_t value() const;
  void set_value(::int32_t value);

  private:
  ::int32_t _internal_value() const;
  void _internal_set_value(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:mosaic.IntValue)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::int32_t value_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_2eproto;
};// -------------------------------------------------------------------

class ImageAndTextRequest final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:mosaic.ImageAndTextRequest) */ {
 public:
  inline ImageAndTextRequest() : ImageAndTextRequest(nullptr) {}
  ~ImageAndTextRequest() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR ImageAndTextRequest(::google::protobuf::internal::ConstantInitialized);

  inline ImageAndTextRequest(const ImageAndTextRequest& from)
      : ImageAndTextRequest(nullptr, from) {}
  ImageAndTextRequest(ImageAndTextRequest&& from) noexcept
    : ImageAndTextRequest() {
    *this = ::std::move(from);
  }

  inline ImageAndTextRequest& operator=(const ImageAndTextRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ImageAndTextRequest& operator=(ImageAndTextRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ImageAndTextRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ImageAndTextRequest* internal_default_instance() {
    return reinterpret_cast<const ImageAndTextRequest*>(
               &_ImageAndTextRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ImageAndTextRequest& a, ImageAndTextRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ImageAndTextRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ImageAndTextRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ImageAndTextRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ImageAndTextRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const ImageAndTextRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const ImageAndTextRequest& from) {
    ImageAndTextRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(ImageAndTextRequest* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "mosaic.ImageAndTextRequest";
  }
  protected:
  explicit ImageAndTextRequest(::google::protobuf::Arena* arena);
  ImageAndTextRequest(::google::protobuf::Arena* arena, const ImageAndTextRequest& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kImageDataFieldNumber = 1,
    kTextFieldNumber = 2,
  };
  // bytes image_data = 1;
  void clear_image_data() ;
  const std::string& image_data() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_image_data(Arg_&& arg, Args_... args);
  std::string* mutable_image_data();
  PROTOBUF_NODISCARD std::string* release_image_data();
  void set_allocated_image_data(std::string* value);

  private:
  const std::string& _internal_image_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_image_data(
      const std::string& value);
  std::string* _internal_mutable_image_data();

  public:
  // string text = 2;
  void clear_text() ;
  const std::string& text() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_text(Arg_&& arg, Args_... args);
  std::string* mutable_text();
  PROTOBUF_NODISCARD std::string* release_text();
  void set_allocated_text(std::string* value);

  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(
      const std::string& value);
  std::string* _internal_mutable_text();

  public:
  // @@protoc_insertion_point(class_scope:mosaic.ImageAndTextRequest)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      39, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr image_data_;
    ::google::protobuf::internal::ArenaStringPtr text_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_test_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// ImageAndTextRequest

// bytes image_data = 1;
inline void ImageAndTextRequest::clear_image_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.image_data_.ClearToEmpty();
}
inline const std::string& ImageAndTextRequest::image_data() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:mosaic.ImageAndTextRequest.image_data)
  return _internal_image_data();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ImageAndTextRequest::set_image_data(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.image_data_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:mosaic.ImageAndTextRequest.image_data)
}
inline std::string* ImageAndTextRequest::mutable_image_data() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_image_data();
  // @@protoc_insertion_point(field_mutable:mosaic.ImageAndTextRequest.image_data)
  return _s;
}
inline const std::string& ImageAndTextRequest::_internal_image_data() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.image_data_.Get();
}
inline void ImageAndTextRequest::_internal_set_image_data(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.image_data_.Set(value, GetArena());
}
inline std::string* ImageAndTextRequest::_internal_mutable_image_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.image_data_.Mutable( GetArena());
}
inline std::string* ImageAndTextRequest::release_image_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:mosaic.ImageAndTextRequest.image_data)
  return _impl_.image_data_.Release();
}
inline void ImageAndTextRequest::set_allocated_image_data(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.image_data_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.image_data_.IsDefault()) {
          _impl_.image_data_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mosaic.ImageAndTextRequest.image_data)
}

// string text = 2;
inline void ImageAndTextRequest::clear_text() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.text_.ClearToEmpty();
}
inline const std::string& ImageAndTextRequest::text() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:mosaic.ImageAndTextRequest.text)
  return _internal_text();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ImageAndTextRequest::set_text(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.text_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:mosaic.ImageAndTextRequest.text)
}
inline std::string* ImageAndTextRequest::mutable_text() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_text();
  // @@protoc_insertion_point(field_mutable:mosaic.ImageAndTextRequest.text)
  return _s;
}
inline const std::string& ImageAndTextRequest::_internal_text() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.text_.Get();
}
inline void ImageAndTextRequest::_internal_set_text(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.text_.Set(value, GetArena());
}
inline std::string* ImageAndTextRequest::_internal_mutable_text() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.text_.Mutable( GetArena());
}
inline std::string* ImageAndTextRequest::release_text() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:mosaic.ImageAndTextRequest.text)
  return _impl_.text_.Release();
}
inline void ImageAndTextRequest::set_allocated_text(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.text_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.text_.IsDefault()) {
          _impl_.text_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mosaic.ImageAndTextRequest.text)
}

// -------------------------------------------------------------------

// TextResponse

// string output_text = 1;
inline void TextResponse::clear_output_text() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.output_text_.ClearToEmpty();
}
inline const std::string& TextResponse::output_text() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:mosaic.TextResponse.output_text)
  return _internal_output_text();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void TextResponse::set_output_text(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.output_text_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:mosaic.TextResponse.output_text)
}
inline std::string* TextResponse::mutable_output_text() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_output_text();
  // @@protoc_insertion_point(field_mutable:mosaic.TextResponse.output_text)
  return _s;
}
inline const std::string& TextResponse::_internal_output_text() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.output_text_.Get();
}
inline void TextResponse::_internal_set_output_text(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.output_text_.Set(value, GetArena());
}
inline std::string* TextResponse::_internal_mutable_output_text() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.output_text_.Mutable( GetArena());
}
inline std::string* TextResponse::release_output_text() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:mosaic.TextResponse.output_text)
  return _impl_.output_text_.Release();
}
inline void TextResponse::set_allocated_output_text(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.output_text_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.output_text_.IsDefault()) {
          _impl_.output_text_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mosaic.TextResponse.output_text)
}

// -------------------------------------------------------------------

// ModelChunk

// bytes chunk_data = 1;
inline void ModelChunk::clear_chunk_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.chunk_data_.ClearToEmpty();
}
inline const std::string& ModelChunk::chunk_data() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:mosaic.ModelChunk.chunk_data)
  return _internal_chunk_data();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void ModelChunk::set_chunk_data(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.chunk_data_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:mosaic.ModelChunk.chunk_data)
}
inline std::string* ModelChunk::mutable_chunk_data() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_chunk_data();
  // @@protoc_insertion_point(field_mutable:mosaic.ModelChunk.chunk_data)
  return _s;
}
inline const std::string& ModelChunk::_internal_chunk_data() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.chunk_data_.Get();
}
inline void ModelChunk::_internal_set_chunk_data(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.chunk_data_.Set(value, GetArena());
}
inline std::string* ModelChunk::_internal_mutable_chunk_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.chunk_data_.Mutable( GetArena());
}
inline std::string* ModelChunk::release_chunk_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:mosaic.ModelChunk.chunk_data)
  return _impl_.chunk_data_.Release();
}
inline void ModelChunk::set_allocated_chunk_data(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.chunk_data_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.chunk_data_.IsDefault()) {
          _impl_.chunk_data_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:mosaic.ModelChunk.chunk_data)
}

// -------------------------------------------------------------------

// IntValue

// int32 value = 1;
inline void IntValue::clear_value() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.value_ = 0;
}
inline ::int32_t IntValue::value() const {
  // @@protoc_insertion_point(field_get:mosaic.IntValue.value)
  return _internal_value();
}
inline void IntValue::set_value(::int32_t value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:mosaic.IntValue.value)
}
inline ::int32_t IntValue::_internal_value() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.value_;
}
inline void IntValue::_internal_set_value(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.value_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace mosaic


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_test_2eproto_2epb_2eh
