// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: AllocationAuthorityInfo.capnp

#ifndef CAPNP_INCLUDED_e1e7022ab41b6957_
#define CAPNP_INCLUDED_e1e7022ab41b6957_

#include <capnp/generated-header-support.h>

#if CAPNP_VERSION != 6001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(9d606d9272d3600d);
CAPNP_DECLARE_SCHEMA(9fdac7c5cfd18be3);

}  // namespace schemas
}  // namespace capnp


struct AllocationAuthorityInfo {
  AllocationAuthorityInfo() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(9d606d9272d3600d, 3, 3)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct EntrypointRobots {
  EntrypointRobots() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(9fdac7c5cfd18be3, 1, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class AllocationAuthorityInfo::Reader {
public:
  typedef AllocationAuthorityInfo Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasSenderId() const;
  inline  ::capnp::List< ::uint8_t>::Reader getSenderId() const;

  inline  ::int64_t getPlanId() const;

  inline  ::int64_t getParentState() const;

  inline  ::int64_t getPlanType() const;

  inline bool hasAuthority() const;
  inline  ::capnp::List< ::uint8_t>::Reader getAuthority() const;

  inline bool hasEntrypoints() const;
  inline  ::capnp::List< ::EntrypointRobots>::Reader getEntrypoints() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class AllocationAuthorityInfo::Builder {
public:
  typedef AllocationAuthorityInfo Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasSenderId();
  inline  ::capnp::List< ::uint8_t>::Builder getSenderId();
  inline void setSenderId( ::capnp::List< ::uint8_t>::Reader value);
  inline void setSenderId(::kj::ArrayPtr<const  ::uint8_t> value);
  inline  ::capnp::List< ::uint8_t>::Builder initSenderId(unsigned int size);
  inline void adoptSenderId(::capnp::Orphan< ::capnp::List< ::uint8_t>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::uint8_t>> disownSenderId();

  inline  ::int64_t getPlanId();
  inline void setPlanId( ::int64_t value);

  inline  ::int64_t getParentState();
  inline void setParentState( ::int64_t value);

  inline  ::int64_t getPlanType();
  inline void setPlanType( ::int64_t value);

  inline bool hasAuthority();
  inline  ::capnp::List< ::uint8_t>::Builder getAuthority();
  inline void setAuthority( ::capnp::List< ::uint8_t>::Reader value);
  inline void setAuthority(::kj::ArrayPtr<const  ::uint8_t> value);
  inline  ::capnp::List< ::uint8_t>::Builder initAuthority(unsigned int size);
  inline void adoptAuthority(::capnp::Orphan< ::capnp::List< ::uint8_t>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::uint8_t>> disownAuthority();

  inline bool hasEntrypoints();
  inline  ::capnp::List< ::EntrypointRobots>::Builder getEntrypoints();
  inline void setEntrypoints( ::capnp::List< ::EntrypointRobots>::Reader value);
  inline  ::capnp::List< ::EntrypointRobots>::Builder initEntrypoints(unsigned int size);
  inline void adoptEntrypoints(::capnp::Orphan< ::capnp::List< ::EntrypointRobots>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::EntrypointRobots>> disownEntrypoints();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class AllocationAuthorityInfo::Pipeline {
public:
  typedef AllocationAuthorityInfo Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class EntrypointRobots::Reader {
public:
  typedef EntrypointRobots Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::int64_t getEntrypoint() const;

  inline bool hasRobots() const;
  inline  ::capnp::List< ::capnp::List< ::uint8_t>>::Reader getRobots() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class EntrypointRobots::Builder {
public:
  typedef EntrypointRobots Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::int64_t getEntrypoint();
  inline void setEntrypoint( ::int64_t value);

  inline bool hasRobots();
  inline  ::capnp::List< ::capnp::List< ::uint8_t>>::Builder getRobots();
  inline void setRobots( ::capnp::List< ::capnp::List< ::uint8_t>>::Reader value);
  inline void setRobots(::kj::ArrayPtr<const  ::capnp::List< ::uint8_t>::Reader> value);
  inline  ::capnp::List< ::capnp::List< ::uint8_t>>::Builder initRobots(unsigned int size);
  inline void adoptRobots(::capnp::Orphan< ::capnp::List< ::capnp::List< ::uint8_t>>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::List< ::uint8_t>>> disownRobots();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class EntrypointRobots::Pipeline {
public:
  typedef EntrypointRobots Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool AllocationAuthorityInfo::Reader::hasSenderId() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool AllocationAuthorityInfo::Builder::hasSenderId() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::uint8_t>::Reader AllocationAuthorityInfo::Reader::getSenderId() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::uint8_t>::Builder AllocationAuthorityInfo::Builder::getSenderId() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void AllocationAuthorityInfo::Builder::setSenderId( ::capnp::List< ::uint8_t>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline void AllocationAuthorityInfo::Builder::setSenderId(::kj::ArrayPtr<const  ::uint8_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::uint8_t>::Builder AllocationAuthorityInfo::Builder::initSenderId(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void AllocationAuthorityInfo::Builder::adoptSenderId(
    ::capnp::Orphan< ::capnp::List< ::uint8_t>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::uint8_t>> AllocationAuthorityInfo::Builder::disownSenderId() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::int64_t AllocationAuthorityInfo::Reader::getPlanId() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::int64_t AllocationAuthorityInfo::Builder::getPlanId() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void AllocationAuthorityInfo::Builder::setPlanId( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t AllocationAuthorityInfo::Reader::getParentState() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::int64_t AllocationAuthorityInfo::Builder::getParentState() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void AllocationAuthorityInfo::Builder::setParentState( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t AllocationAuthorityInfo::Reader::getPlanType() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::int64_t AllocationAuthorityInfo::Builder::getPlanType() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void AllocationAuthorityInfo::Builder::setPlanType( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline bool AllocationAuthorityInfo::Reader::hasAuthority() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool AllocationAuthorityInfo::Builder::hasAuthority() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::uint8_t>::Reader AllocationAuthorityInfo::Reader::getAuthority() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::uint8_t>::Builder AllocationAuthorityInfo::Builder::getAuthority() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void AllocationAuthorityInfo::Builder::setAuthority( ::capnp::List< ::uint8_t>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline void AllocationAuthorityInfo::Builder::setAuthority(::kj::ArrayPtr<const  ::uint8_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::uint8_t>::Builder AllocationAuthorityInfo::Builder::initAuthority(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void AllocationAuthorityInfo::Builder::adoptAuthority(
    ::capnp::Orphan< ::capnp::List< ::uint8_t>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::uint8_t>> AllocationAuthorityInfo::Builder::disownAuthority() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint8_t>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool AllocationAuthorityInfo::Reader::hasEntrypoints() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool AllocationAuthorityInfo::Builder::hasEntrypoints() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::EntrypointRobots>::Reader AllocationAuthorityInfo::Reader::getEntrypoints() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::EntrypointRobots>>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::EntrypointRobots>::Builder AllocationAuthorityInfo::Builder::getEntrypoints() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::EntrypointRobots>>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void AllocationAuthorityInfo::Builder::setEntrypoints( ::capnp::List< ::EntrypointRobots>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::EntrypointRobots>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::EntrypointRobots>::Builder AllocationAuthorityInfo::Builder::initEntrypoints(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::EntrypointRobots>>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void AllocationAuthorityInfo::Builder::adoptEntrypoints(
    ::capnp::Orphan< ::capnp::List< ::EntrypointRobots>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::EntrypointRobots>>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::EntrypointRobots>> AllocationAuthorityInfo::Builder::disownEntrypoints() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::EntrypointRobots>>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline  ::int64_t EntrypointRobots::Reader::getEntrypoint() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::int64_t EntrypointRobots::Builder::getEntrypoint() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void EntrypointRobots::Builder::setEntrypoint( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool EntrypointRobots::Reader::hasRobots() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool EntrypointRobots::Builder::hasRobots() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::capnp::List< ::uint8_t>>::Reader EntrypointRobots::Reader::getRobots() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::uint8_t>>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::capnp::List< ::uint8_t>>::Builder EntrypointRobots::Builder::getRobots() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::uint8_t>>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void EntrypointRobots::Builder::setRobots( ::capnp::List< ::capnp::List< ::uint8_t>>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::uint8_t>>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline void EntrypointRobots::Builder::setRobots(::kj::ArrayPtr<const  ::capnp::List< ::uint8_t>::Reader> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::uint8_t>>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::capnp::List< ::uint8_t>>::Builder EntrypointRobots::Builder::initRobots(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::uint8_t>>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void EntrypointRobots::Builder::adoptRobots(
    ::capnp::Orphan< ::capnp::List< ::capnp::List< ::uint8_t>>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::uint8_t>>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::capnp::List< ::uint8_t>>> EntrypointRobots::Builder::disownRobots() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::List< ::uint8_t>>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}


#endif  // CAPNP_INCLUDED_e1e7022ab41b6957_