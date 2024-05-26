// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#include "test.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace mosaic {

inline constexpr TextResponse::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : output_text_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR TextResponse::TextResponse(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct TextResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TextResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TextResponseDefaultTypeInternal() {}
  union {
    TextResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TextResponseDefaultTypeInternal _TextResponse_default_instance_;

inline constexpr ModelChunk::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : chunk_data_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR ModelChunk::ModelChunk(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ModelChunkDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ModelChunkDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ModelChunkDefaultTypeInternal() {}
  union {
    ModelChunk _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ModelChunkDefaultTypeInternal _ModelChunk_default_instance_;

inline constexpr IntValue::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : value_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR IntValue::IntValue(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct IntValueDefaultTypeInternal {
  PROTOBUF_CONSTEXPR IntValueDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~IntValueDefaultTypeInternal() {}
  union {
    IntValue _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 IntValueDefaultTypeInternal _IntValue_default_instance_;

inline constexpr ImageAndTextRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : image_data_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        text_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR ImageAndTextRequest::ImageAndTextRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct ImageAndTextRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ImageAndTextRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ImageAndTextRequestDefaultTypeInternal() {}
  union {
    ImageAndTextRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ImageAndTextRequestDefaultTypeInternal _ImageAndTextRequest_default_instance_;
}  // namespace mosaic
static ::_pb::Metadata file_level_metadata_test_2eproto[4];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_test_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_test_2eproto = nullptr;
const ::uint32_t TableStruct_test_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::mosaic::ImageAndTextRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::mosaic::ImageAndTextRequest, _impl_.image_data_),
    PROTOBUF_FIELD_OFFSET(::mosaic::ImageAndTextRequest, _impl_.text_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::mosaic::TextResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::mosaic::TextResponse, _impl_.output_text_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::mosaic::ModelChunk, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::mosaic::ModelChunk, _impl_.chunk_data_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::mosaic::IntValue, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::mosaic::IntValue, _impl_.value_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::mosaic::ImageAndTextRequest)},
        {10, -1, -1, sizeof(::mosaic::TextResponse)},
        {19, -1, -1, sizeof(::mosaic::ModelChunk)},
        {28, -1, -1, sizeof(::mosaic::IntValue)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::mosaic::_ImageAndTextRequest_default_instance_._instance,
    &::mosaic::_TextResponse_default_instance_._instance,
    &::mosaic::_ModelChunk_default_instance_._instance,
    &::mosaic::_IntValue_default_instance_._instance,
};
const char descriptor_table_protodef_test_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\ntest.proto\022\006mosaic\032\033google/protobuf/em"
    "pty.proto\"7\n\023ImageAndTextRequest\022\022\n\nimag"
    "e_data\030\001 \001(\014\022\014\n\004text\030\002 \001(\t\"#\n\014TextRespon"
    "se\022\023\n\013output_text\030\001 \001(\t\" \n\nModelChunk\022\022\n"
    "\nchunk_data\030\001 \001(\014\"\031\n\010IntValue\022\r\n\005value\030\001"
    " \001(\0052\337\002\n\013YourService\022J\n\023ProcessImageAndT"
    "ext\022\033.mosaic.ImageAndTextRequest\032\024.mosai"
    "c.TextResponse\"\000\022A\n\017SendModelStream\022\026.go"
    "ogle.protobuf.Empty\032\022.mosaic.ModelChunk\""
    "\0000\001\022A\n\nTrainModel\022\033.mosaic.ImageAndTextR"
    "equest\032\024.mosaic.TextResponse\"\000\022:\n\014SendIn"
    "tValue\022\026.google.protobuf.Empty\032\020.mosaic."
    "IntValue\"\000\022B\n\022ReceiveModelStream\022\022.mosai"
    "c.ModelChunk\032\026.google.protobuf.Empty(\001b\006"
    "proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_test_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2fempty_2eproto,
};
static ::absl::once_flag descriptor_table_test_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_test_2eproto = {
    false,
    false,
    566,
    descriptor_table_protodef_test_2eproto,
    "test.proto",
    &descriptor_table_test_2eproto_once,
    descriptor_table_test_2eproto_deps,
    1,
    4,
    schemas,
    file_default_instances,
    TableStruct_test_2eproto::offsets,
    file_level_metadata_test_2eproto,
    file_level_enum_descriptors_test_2eproto,
    file_level_service_descriptors_test_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_test_2eproto_getter() {
  return &descriptor_table_test_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_test_2eproto(&descriptor_table_test_2eproto);
namespace mosaic {
// ===================================================================

class ImageAndTextRequest::_Internal {
 public:
};

ImageAndTextRequest::ImageAndTextRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:mosaic.ImageAndTextRequest)
}
inline PROTOBUF_NDEBUG_INLINE ImageAndTextRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : image_data_(arena, from.image_data_),
        text_(arena, from.text_),
        _cached_size_{0} {}

ImageAndTextRequest::ImageAndTextRequest(
    ::google::protobuf::Arena* arena,
    const ImageAndTextRequest& from)
    : ::google::protobuf::Message(arena) {
  ImageAndTextRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:mosaic.ImageAndTextRequest)
}
inline PROTOBUF_NDEBUG_INLINE ImageAndTextRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : image_data_(arena),
        text_(arena),
        _cached_size_{0} {}

inline void ImageAndTextRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
ImageAndTextRequest::~ImageAndTextRequest() {
  // @@protoc_insertion_point(destructor:mosaic.ImageAndTextRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ImageAndTextRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.image_data_.Destroy();
  _impl_.text_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void ImageAndTextRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:mosaic.ImageAndTextRequest)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.image_data_.ClearToEmpty();
  _impl_.text_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* ImageAndTextRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 39, 2> ImageAndTextRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_ImageAndTextRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string text = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(ImageAndTextRequest, _impl_.text_)}},
    // bytes image_data = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(ImageAndTextRequest, _impl_.image_data_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bytes image_data = 1;
    {PROTOBUF_FIELD_OFFSET(ImageAndTextRequest, _impl_.image_data_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // string text = 2;
    {PROTOBUF_FIELD_OFFSET(ImageAndTextRequest, _impl_.text_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\32\0\4\0\0\0\0\0"
    "mosaic.ImageAndTextRequest"
    "text"
  }},
};

::uint8_t* ImageAndTextRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mosaic.ImageAndTextRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bytes image_data = 1;
  if (!this->_internal_image_data().empty()) {
    const std::string& _s = this->_internal_image_data();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  // string text = 2;
  if (!this->_internal_text().empty()) {
    const std::string& _s = this->_internal_text();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "mosaic.ImageAndTextRequest.text");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mosaic.ImageAndTextRequest)
  return target;
}

::size_t ImageAndTextRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mosaic.ImageAndTextRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes image_data = 1;
  if (!this->_internal_image_data().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_image_data());
  }

  // string text = 2;
  if (!this->_internal_text().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_text());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData ImageAndTextRequest::_class_data_ = {
    ImageAndTextRequest::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* ImageAndTextRequest::GetClassData() const {
  return &_class_data_;
}

void ImageAndTextRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<ImageAndTextRequest*>(&to_msg);
  auto& from = static_cast<const ImageAndTextRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:mosaic.ImageAndTextRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_image_data().empty()) {
    _this->_internal_set_image_data(from._internal_image_data());
  }
  if (!from._internal_text().empty()) {
    _this->_internal_set_text(from._internal_text());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ImageAndTextRequest::CopyFrom(const ImageAndTextRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mosaic.ImageAndTextRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool ImageAndTextRequest::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* ImageAndTextRequest::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void ImageAndTextRequest::InternalSwap(ImageAndTextRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.image_data_, &other->_impl_.image_data_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.text_, &other->_impl_.text_, arena);
}

::google::protobuf::Metadata ImageAndTextRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_test_2eproto_getter, &descriptor_table_test_2eproto_once,
      file_level_metadata_test_2eproto[0]);
}
// ===================================================================

class TextResponse::_Internal {
 public:
};

TextResponse::TextResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:mosaic.TextResponse)
}
inline PROTOBUF_NDEBUG_INLINE TextResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : output_text_(arena, from.output_text_),
        _cached_size_{0} {}

TextResponse::TextResponse(
    ::google::protobuf::Arena* arena,
    const TextResponse& from)
    : ::google::protobuf::Message(arena) {
  TextResponse* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:mosaic.TextResponse)
}
inline PROTOBUF_NDEBUG_INLINE TextResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : output_text_(arena),
        _cached_size_{0} {}

inline void TextResponse::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
TextResponse::~TextResponse() {
  // @@protoc_insertion_point(destructor:mosaic.TextResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TextResponse::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.output_text_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void TextResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:mosaic.TextResponse)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.output_text_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TextResponse::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 39, 2> TextResponse::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_TextResponse_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // string output_text = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(TextResponse, _impl_.output_text_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string output_text = 1;
    {PROTOBUF_FIELD_OFFSET(TextResponse, _impl_.output_text_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\23\13\0\0\0\0\0\0"
    "mosaic.TextResponse"
    "output_text"
  }},
};

::uint8_t* TextResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mosaic.TextResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string output_text = 1;
  if (!this->_internal_output_text().empty()) {
    const std::string& _s = this->_internal_output_text();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "mosaic.TextResponse.output_text");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mosaic.TextResponse)
  return target;
}

::size_t TextResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mosaic.TextResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string output_text = 1;
  if (!this->_internal_output_text().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_output_text());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TextResponse::_class_data_ = {
    TextResponse::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* TextResponse::GetClassData() const {
  return &_class_data_;
}

void TextResponse::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TextResponse*>(&to_msg);
  auto& from = static_cast<const TextResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:mosaic.TextResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_output_text().empty()) {
    _this->_internal_set_output_text(from._internal_output_text());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TextResponse::CopyFrom(const TextResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mosaic.TextResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TextResponse::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* TextResponse::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void TextResponse::InternalSwap(TextResponse* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.output_text_, &other->_impl_.output_text_, arena);
}

::google::protobuf::Metadata TextResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_test_2eproto_getter, &descriptor_table_test_2eproto_once,
      file_level_metadata_test_2eproto[1]);
}
// ===================================================================

class ModelChunk::_Internal {
 public:
};

ModelChunk::ModelChunk(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:mosaic.ModelChunk)
}
inline PROTOBUF_NDEBUG_INLINE ModelChunk::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : chunk_data_(arena, from.chunk_data_),
        _cached_size_{0} {}

ModelChunk::ModelChunk(
    ::google::protobuf::Arena* arena,
    const ModelChunk& from)
    : ::google::protobuf::Message(arena) {
  ModelChunk* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:mosaic.ModelChunk)
}
inline PROTOBUF_NDEBUG_INLINE ModelChunk::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : chunk_data_(arena),
        _cached_size_{0} {}

inline void ModelChunk::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
ModelChunk::~ModelChunk() {
  // @@protoc_insertion_point(destructor:mosaic.ModelChunk)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void ModelChunk::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.chunk_data_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void ModelChunk::Clear() {
// @@protoc_insertion_point(message_clear_start:mosaic.ModelChunk)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.chunk_data_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* ModelChunk::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> ModelChunk::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_ModelChunk_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // bytes chunk_data = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(ModelChunk, _impl_.chunk_data_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bytes chunk_data = 1;
    {PROTOBUF_FIELD_OFFSET(ModelChunk, _impl_.chunk_data_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* ModelChunk::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mosaic.ModelChunk)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bytes chunk_data = 1;
  if (!this->_internal_chunk_data().empty()) {
    const std::string& _s = this->_internal_chunk_data();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mosaic.ModelChunk)
  return target;
}

::size_t ModelChunk::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mosaic.ModelChunk)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes chunk_data = 1;
  if (!this->_internal_chunk_data().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_chunk_data());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData ModelChunk::_class_data_ = {
    ModelChunk::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* ModelChunk::GetClassData() const {
  return &_class_data_;
}

void ModelChunk::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<ModelChunk*>(&to_msg);
  auto& from = static_cast<const ModelChunk&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:mosaic.ModelChunk)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_chunk_data().empty()) {
    _this->_internal_set_chunk_data(from._internal_chunk_data());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void ModelChunk::CopyFrom(const ModelChunk& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mosaic.ModelChunk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool ModelChunk::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* ModelChunk::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void ModelChunk::InternalSwap(ModelChunk* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.chunk_data_, &other->_impl_.chunk_data_, arena);
}

::google::protobuf::Metadata ModelChunk::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_test_2eproto_getter, &descriptor_table_test_2eproto_once,
      file_level_metadata_test_2eproto[2]);
}
// ===================================================================

class IntValue::_Internal {
 public:
};

IntValue::IntValue(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:mosaic.IntValue)
}
IntValue::IntValue(
    ::google::protobuf::Arena* arena, const IntValue& from)
    : IntValue(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE IntValue::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void IntValue::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.value_ = {};
}
IntValue::~IntValue() {
  // @@protoc_insertion_point(destructor:mosaic.IntValue)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void IntValue::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void IntValue::Clear() {
// @@protoc_insertion_point(message_clear_start:mosaic.IntValue)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.value_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* IntValue::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> IntValue::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_IntValue_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // int32 value = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(IntValue, _impl_.value_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(IntValue, _impl_.value_)}},
  }}, {{
    65535, 65535
  }}, {{
    // int32 value = 1;
    {PROTOBUF_FIELD_OFFSET(IntValue, _impl_.value_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* IntValue::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mosaic.IntValue)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // int32 value = 1;
  if (this->_internal_value() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mosaic.IntValue)
  return target;
}

::size_t IntValue::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mosaic.IntValue)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 value = 1;
  if (this->_internal_value() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData IntValue::_class_data_ = {
    IntValue::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* IntValue::GetClassData() const {
  return &_class_data_;
}

void IntValue::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<IntValue*>(&to_msg);
  auto& from = static_cast<const IntValue&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:mosaic.IntValue)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_value() != 0) {
    _this->_internal_set_value(from._internal_value());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void IntValue::CopyFrom(const IntValue& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mosaic.IntValue)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool IntValue::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* IntValue::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void IntValue::InternalSwap(IntValue* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
        swap(_impl_.value_, other->_impl_.value_);
}

::google::protobuf::Metadata IntValue::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_test_2eproto_getter, &descriptor_table_test_2eproto_once,
      file_level_metadata_test_2eproto[3]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace mosaic
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"