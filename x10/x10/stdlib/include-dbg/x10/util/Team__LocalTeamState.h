#ifndef __X10_UTIL_TEAM__LOCALTEAMSTATE_H
#define __X10_UTIL_TEAM__LOCALTEAMSTATE_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { namespace concurrent { 
class AtomicInteger;
} } } 
namespace x10 { namespace util { namespace concurrent { 
class Lock;
} } } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace util { 
class Team__LocalTeamState__TreeStructure;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace compiler { 
class Pragma;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace util { 
class TeamReductionHelper;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRail;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace util { 
class Team__DoubleIdx;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
} } 
namespace x10 { namespace lang { 
class MultipleExceptions;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class Team__LocalTeamState_Strings {
  public:
    static ::x10::lang::String sl__161047;
    static ::x10::lang::String sl__161092;
    static ::x10::lang::String sl__161101;
    static ::x10::lang::String sl__161034;
    static ::x10::lang::String sl__161061;
    static ::x10::lang::String sl__161060;
    static ::x10::lang::String sl__161102;
    static ::x10::lang::String sl__161062;
    static ::x10::lang::String sl__161100;
    static ::x10::lang::String sl__161046;
    static ::x10::lang::String sl__161070;
    static ::x10::lang::String sl__161037;
    static ::x10::lang::String sl__161096;
    static ::x10::lang::String sl__161081;
    static ::x10::lang::String sl__161083;
    static ::x10::lang::String sl__161089;
    static ::x10::lang::String sl__161054;
    static ::x10::lang::String sl__161033;
    static ::x10::lang::String sl__161095;
    static ::x10::lang::String sl__161057;
    static ::x10::lang::String sl__161088;
    static ::x10::lang::String sl__161045;
    static ::x10::lang::String sl__161053;
    static ::x10::lang::String sl__161085;
    static ::x10::lang::String sl__161071;
    static ::x10::lang::String sl__161090;
    static ::x10::lang::String sl__161043;
    static ::x10::lang::String sl__161072;
    static ::x10::lang::String sl__161082;
    static ::x10::lang::String sl__161093;
    static ::x10::lang::String sl__161031;
    static ::x10::lang::String sl__161049;
    static ::x10::lang::String sl__161035;
    static ::x10::lang::String sl__161075;
    static ::x10::lang::String sl__161040;
    static ::x10::lang::String sl__161044;
    static ::x10::lang::String sl__161078;
    static ::x10::lang::String sl__161048;
    static ::x10::lang::String sl__161087;
    static ::x10::lang::String sl__161097;
    static ::x10::lang::String sl__161028;
    static ::x10::lang::String sl__161084;
    static ::x10::lang::String sl__161074;
    static ::x10::lang::String sl__161064;
    static ::x10::lang::String sl__161076;
    static ::x10::lang::String sl__161050;
    static ::x10::lang::String sl__161094;
    static ::x10::lang::String sl__161052;
    static ::x10::lang::String sl__161026;
    static ::x10::lang::String sl__161063;
    static ::x10::lang::String sl__161030;
    static ::x10::lang::String sl__161059;
    static ::x10::lang::String sl__161029;
    static ::x10::lang::String sl__161077;
    static ::x10::lang::String sl__161091;
    static ::x10::lang::String sl__161041;
    static ::x10::lang::String sl__161056;
    static ::x10::lang::String sl__161027;
    static ::x10::lang::String sl__161086;
    static ::x10::lang::String sl__161058;
    static ::x10::lang::String sl__161067;
    static ::x10::lang::String sl__161055;
    static ::x10::lang::String sl__161065;
    static ::x10::lang::String sl__161073;
    static ::x10::lang::String sl__161103;
    static ::x10::lang::String sl__161036;
    static ::x10::lang::String sl__161098;
    static ::x10::lang::String sl__161032;
    static ::x10::lang::String sl__161068;
    static ::x10::lang::String sl__161069;
    static ::x10::lang::String sl__161099;
    static ::x10::lang::String sl__161038;
    static ::x10::lang::String sl__161079;
    static ::x10::lang::String sl__161039;
    static ::x10::lang::String sl__161042;
    static ::x10::lang::String sl__161066;
    static ::x10::lang::String sl__161080;
    static ::x10::lang::String sl__161051;
};

class Team__LocalTeamState : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::PlaceGroup* FMGL(places);
    
    x10_int FMGL(teamid);
    
    x10_long FMGL(myIndex);
    
    /* Static field: FMGL(PHASE_READY) */
    static const x10_int FMGL(PHASE_READY) = 0;
    static x10_int FMGL(PHASE_READY__get)();
    
    /* Static field: FMGL(PHASE_INIT) */
    static const x10_int FMGL(PHASE_INIT) = 1;
    static x10_int FMGL(PHASE_INIT__get)();
    
    /* Static field: FMGL(PHASE_GATHER1) */
    static const x10_int FMGL(PHASE_GATHER1) = 2;
    static x10_int FMGL(PHASE_GATHER1__get)();
    
    /* Static field: FMGL(PHASE_GATHER2) */
    static const x10_int FMGL(PHASE_GATHER2) = 3;
    static x10_int FMGL(PHASE_GATHER2__get)();
    
    /* Static field: FMGL(PHASE_PARENT) */
    static const x10_int FMGL(PHASE_PARENT) = 4;
    static x10_int FMGL(PHASE_PARENT__get)();
    
    /* Static field: FMGL(PHASE_SCATTER1) */
    static const x10_int FMGL(PHASE_SCATTER1) = 5;
    static x10_int FMGL(PHASE_SCATTER1__get)();
    
    /* Static field: FMGL(PHASE_SCATTER2) */
    static const x10_int FMGL(PHASE_SCATTER2) = 6;
    static x10_int FMGL(PHASE_SCATTER2__get)();
    
    /* Static field: FMGL(PHASE_DONE) */
    static const x10_int FMGL(PHASE_DONE) = 7;
    static x10_int FMGL(PHASE_DONE__get)();
    
    /* Static field: FMGL(PHASE_INVALID) */
    static const x10_int FMGL(PHASE_INVALID) = -1;
    static x10_int FMGL(PHASE_INVALID__get)();
    
    ::x10::util::concurrent::AtomicInteger* FMGL(phase);
    
    ::x10::util::concurrent::Lock* FMGL(dstLock);
    
    /* Static field: FMGL(COLL_BARRIER) */
    static const x10_int FMGL(COLL_BARRIER) = 0;
    static x10_int FMGL(COLL_BARRIER__get)();
    
    /* Static field: FMGL(COLL_BROADCAST) */
    static const x10_int FMGL(COLL_BROADCAST) = 1;
    static x10_int FMGL(COLL_BROADCAST__get)();
    
    /* Static field: FMGL(COLL_SCATTER) */
    static const x10_int FMGL(COLL_SCATTER) = 2;
    static x10_int FMGL(COLL_SCATTER__get)();
    
    /* Static field: FMGL(COLL_SCATTERV) */
    static const x10_int FMGL(COLL_SCATTERV) = 3;
    static x10_int FMGL(COLL_SCATTERV__get)();
    
    /* Static field: FMGL(COLL_ALLTOALL) */
    static const x10_int FMGL(COLL_ALLTOALL) = 4;
    static x10_int FMGL(COLL_ALLTOALL__get)();
    
    /* Static field: FMGL(COLL_REDUCE) */
    static const x10_int FMGL(COLL_REDUCE) = 5;
    static x10_int FMGL(COLL_REDUCE__get)();
    
    /* Static field: FMGL(COLL_ALLREDUCE) */
    static const x10_int FMGL(COLL_ALLREDUCE) = 6;
    static x10_int FMGL(COLL_ALLREDUCE__get)();
    
    /* Static field: FMGL(COLL_INDEXOFMIN) */
    static const x10_int FMGL(COLL_INDEXOFMIN) = 7;
    static x10_int FMGL(COLL_INDEXOFMIN__get)();
    
    /* Static field: FMGL(COLL_INDEXOFMAX) */
    static const x10_int FMGL(COLL_INDEXOFMAX) = 8;
    static x10_int FMGL(COLL_INDEXOFMAX__get)();
    
    /* Static field: FMGL(COLL_GATHER) */
    static const x10_int FMGL(COLL_GATHER) = 9;
    static x10_int FMGL(COLL_GATHER__get)();
    
    /* Static field: FMGL(COLL_GATHERV) */
    static const x10_int FMGL(COLL_GATHERV) = 10;
    static x10_int FMGL(COLL_GATHERV__get)();
    
    ::x10::lang::Any* FMGL(local_src);
    
    x10_long FMGL(local_src_off);
    
    ::x10::lang::Any* FMGL(local_dst);
    
    x10_long FMGL(local_dst_off);
    
    ::x10::lang::Any* FMGL(local_temp_buff);
    
    ::x10::lang::Any* FMGL(local_temp_buff2);
    
    x10_long FMGL(local_count);
    
    ::x10::lang::Rail< x10_int >* FMGL(local_counts);
    
    x10_long FMGL(local_counts_sum);
    
    x10_long FMGL(local_offset);
    
    x10_long FMGL(local_parentIndex);
    
    x10_long FMGL(local_grandchildren);
    
    x10_long FMGL(local_child1Index);
    
    x10_long FMGL(local_child2Index);
    
    static ::x10::lang::String* getCollName(x10_int collType);
    x10_boolean isValid();
    void markInvalid();
    ::x10::util::Team__LocalTeamState__TreeStructure getLinks(x10_long placeIndex,
                                                              ::x10::lang::Place root,
                                                              ::x10::lang::Rail< x10_int >* counts);
    ::x10::util::Team__LocalTeamState__TreeStructure getLinks(
      x10_long placeIndex, x10_long parent, x10_long startIndex,
      x10_long endIndex, ::x10::lang::Rail< x10_int >* counts);
    void init();
    template<class TPMGL(T)> void collective_impl(x10_int collType,
                                                  ::x10::lang::Place root,
                                                  ::x10::lang::Rail< TPMGL(T) >* src,
                                                  x10_long src_off,
                                                  ::x10::lang::Rail< TPMGL(T) >* dst,
                                                  x10_long dst_off,
                                                  x10_long count,
                                                  x10_int operation,
                                                  ::x10::lang::Rail< x10_int >* offsets,
                                                  ::x10::lang::Rail< x10_int >* counts);
    virtual ::x10::util::Team__LocalTeamState* x10__util__Team__LocalTeamState____this__x10__util__Team__LocalTeamState(
      );
    void _constructor(::x10::lang::PlaceGroup* places, x10_int teamid,
                      x10_long myIndex);
    
    static ::x10::util::Team__LocalTeamState* _make(::x10::lang::PlaceGroup* places,
                                                    x10_int teamid,
                                                    x10_long myIndex);
    
    virtual void __fieldInitializers_x10_util_Team_LocalTeamState(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE_H

namespace x10 { namespace util { 
class Team__LocalTeamState;
} } 

#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE_H_NODEPS
#define X10_UTIL_TEAM__LOCALTEAMSTATE_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/util/concurrent/AtomicInteger.h>
#include <x10/util/concurrent/Lock.h>
#include <x10/lang/Any.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Place.h>
#include <x10/util/Team__LocalTeamState__TreeStructure.h>
#include <x10/util/Team.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/compiler/Pragma.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/util/GrowableRail.h>
#include <x10/lang/System.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/compiler/NoInline.h>
#include <x10/lang/Unsafe.h>
#include <x10/util/TeamReductionHelper.h>
#include <x10/lang/GlobalRail.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/util/Team__DoubleIdx.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/lang/Double.h>
#include <x10/lang/MultipleExceptions.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__12_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class x10_util_Team__LocalTeamState__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::itable<x10_util_Team__LocalTeamState__closure__12> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(::x10::lang::Fun_0_0<x10_boolean>* condition, ::x10::lang::String* conditionStr);
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__12* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__12>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__12* this_ = new (storage) x10_util_Team__LocalTeamState__closure__12(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__12(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1158-1198";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__12_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__13_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__13 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__13> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    ::x10::util::Team__LocalTeamState* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__13* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__13>();
        buf.record_reference(storage);
        ::x10::util::Team__LocalTeamState* that_saved_this = buf.read< ::x10::util::Team__LocalTeamState*>();
        x10_util_Team__LocalTeamState__closure__13* this_ = new (storage) x10_util_Team__LocalTeamState__closure__13(that_saved_this);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__13(::x10::util::Team__LocalTeamState* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1202";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__13_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__14_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__14 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__14> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    ::x10::util::Team__LocalTeamState* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__14* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__14>();
        buf.record_reference(storage);
        ::x10::util::Team__LocalTeamState* that_saved_this = buf.read< ::x10::util::Team__LocalTeamState*>();
        x10_util_Team__LocalTeamState__closure__14* this_ = new (storage) x10_util_Team__LocalTeamState__closure__14(that_saved_this);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__14(::x10::util::Team__LocalTeamState* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1280";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__14_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__16_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__16 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__16> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__16* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__16>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__16* this_ = new (storage) x10_util_Team__LocalTeamState__closure__16(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__16(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1358-1361";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__16_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__17_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__17 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__17> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__17* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__17>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__17* this_ = new (storage) x10_util_Team__LocalTeamState__closure__17(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__17(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1390";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__17_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__18_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__18 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__18> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__18* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__18>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__18* this_ = new (storage) x10_util_Team__LocalTeamState__closure__18(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__18(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1402";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__18_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__19_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__19 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__19> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__19* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__19>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__19* this_ = new (storage) x10_util_Team__LocalTeamState__closure__19(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__19(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1420-1423";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__19_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__15_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_Team__LocalTeamState__closure__15 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_Team__LocalTeamState__closure__15<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 1358 "x10/util/Team.x10"
        ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
          reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__16)))x10_util_Team__LocalTeamState__closure__16(teamidcopy))),
          (&::x10::util::Team__LocalTeamState_Strings::sl__161063));
        
        //#line 1362 "x10/util/Team.x10"
        if (!(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                    ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid()))
        {
            
            //#line 1363 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161064)))));
        }
        
        //#line 1367 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLTOALL__get)())))
        {
            {
                
                //#line 1369 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__143161 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          gr, ((childDstOffset) + (((count) * (sourceIndex)))),
                          ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                      ((x10_long)(teamidcopy))))->FMGL(local_dst)),
                          ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(local_dst_off)) + (((count) * (sourceIndex)))),
                          childTotalData);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3020) {
                    {
                        ::x10::lang::CheckedThrowable* ct__143159 =
                          __exc3020;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__143159);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__143161);
            }
        } else 
        //#line 1371 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE__get)())) ||
            (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE__get)()))))
        {
            
            //#line 1373 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* target;
            
            //#line 1374 "x10/util/Team.x10"
            x10_long off;
            
            //#line 1375 "x10/util/Team.x10"
            if ((::x10aux::struct_equals(sourceIndex, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                            ((x10_long)(teamidcopy))))->FMGL(local_child2Index))))
            {
                
                //#line 1376 "x10/util/Team.x10"
                target = (::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                      ((x10_long)(teamidcopy))))->FMGL(local_temp_buff2)));
                
                //#line 1377 "x10/util/Team.x10"
                off = ((x10_long)0ll);
            } else 
            //#line 1378 "x10/util/Team.x10"
            if ((::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                               ((x10_long)(teamidcopy))))->FMGL(local_src),
                                         ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                               ((x10_long)(teamidcopy))))->FMGL(local_dst))))
            {
                
                //#line 1379 "x10/util/Team.x10"
                target = (::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                      ((x10_long)(teamidcopy))))->FMGL(local_temp_buff)));
                
                //#line 1380 "x10/util/Team.x10"
                off = ((x10_long)0ll);
            } else {
                
                //#line 1383 "x10/util/Team.x10"
                target = (::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                      ((x10_long)(teamidcopy))))->FMGL(local_dst)));
                
                //#line 1384 "x10/util/Team.x10"
                off = ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off);
            }
            
            //#line 1386 "x10/util/Team.x10"
            if ((!::x10aux::struct_equals(target, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                {
                    
                    //#line 1387 "x10/util/Team.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__143165 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                              gr, childDstOffset, target,
                              off, count);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3021) {
                        {
                            ::x10::lang::CheckedThrowable* ct__143163 =
                              __exc3021;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__143163);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__143165);
                }
            }
            
        } else 
        //#line 1389 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX__get)())))
        {
            
            //#line 1390 "x10/util/Team.x10"
            ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
              reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__17)))x10_util_Team__LocalTeamState__closure__17(teamidcopy))),
              (&::x10::util::Team__LocalTeamState_Strings::sl__161065));
            
            //#line 1391 "x10/util/Team.x10"
            ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* ldi =
              ::x10aux::class_cast< ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
            
            //#line 1392 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161066)), ::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__apply(
                                                                                                                                                                                                                                                                                                                                      ((x10_long)0ll))->FMGL(value)), (&::x10::util::Team__LocalTeamState_Strings::sl__161067)), childVal->FMGL(value))))->c_str());
            }
            
            //#line 1397 "x10/util/Team.x10"
            if (((childVal->FMGL(value)) > (::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__apply(
                                              ((x10_long)0ll))->FMGL(value))))
            {
                
                //#line 1398 "x10/util/Team.x10"
                ::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__set(
                  ((x10_long)0ll), childVal);
            }
            
            //#line 1399 "x10/util/Team.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                      ((x10_long)(teamidcopy))))->FMGL(dstLock))->unlock();
        } else 
        //#line 1401 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN__get)())))
        {
            
            //#line 1402 "x10/util/Team.x10"
            ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
              reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__18)))x10_util_Team__LocalTeamState__closure__18(teamidcopy))),
              (&::x10::util::Team__LocalTeamState_Strings::sl__161065));
            
            //#line 1403 "x10/util/Team.x10"
            ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* ldi =
              ::x10aux::class_cast< ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
            
            //#line 1404 "x10/util/Team.x10"
            if (((childVal->FMGL(value)) < (::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__apply(
                                              ((x10_long)0ll))->FMGL(value))))
            {
                
                //#line 1405 "x10/util/Team.x10"
                ::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__set(
                  ((x10_long)0ll), childVal);
            }
            
            //#line 1406 "x10/util/Team.x10"
            ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                      ((x10_long)(teamidcopy))))->FMGL(dstLock))->unlock();
        } else 
        //#line 1408 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHER__get)())) ||
            (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHERV__get)()))))
        {
            
            //#line 1409 "x10/util/Team.x10"
            x10_long rootDstOffset = (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                    ((x10_long)(teamidcopy))))->FMGL(local_parentIndex),
                                                              ((x10_long)-1ll)))
              ? (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                       ((x10_long)(teamidcopy))))->FMGL(local_dst_off))
              : (((x10_long)0ll));
            
            //#line 1410 "x10/util/Team.x10"
            x10_long parentOffset = (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                   ((x10_long)(teamidcopy))))->FMGL(local_parentIndex),
                                                             ((x10_long)-1ll)))
              ? (((x10_long)0ll)) : (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                           ((x10_long)(teamidcopy))))->FMGL(local_offset));
            
            //#line 1411 "x10/util/Team.x10"
            x10_long myOffset = ((((childOffset) - (parentOffset))) + (rootDstOffset));
            
            //#line 1412 "x10/util/Team.x10"
            ::x10::lang::Any* nonnulltempbuff = ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                      ((x10_long)(teamidcopy))))->FMGL(local_temp_buff);
            
            //#line 1413 "x10/util/Team.x10"
            if ((!::x10aux::struct_equals(nonnulltempbuff,
                                          reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
            {
                {
                    
                    //#line 1414 "x10/util/Team.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__143169 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                              gr, ((x10_long)0ll), ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(nonnulltempbuff),
                              myOffset, childTotalData);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3022) {
                        {
                            ::x10::lang::CheckedThrowable* ct__143167 =
                              __exc3022;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__143167);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__143169);
                }
            }
            
        }
        
        //#line 1418 "x10/util/Team.x10"
        if ((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                       ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
               ::x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER1__get)(),
               ::x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER2__get)()) ||
            ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                      ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
              ::x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER2__get)(),
              ::x10::util::Team__LocalTeamState::FMGL(PHASE_PARENT__get)())))
        {
            
            //#line 1420 "x10/util/Team.x10"
            ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
              reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__19)))x10_util_Team__LocalTeamState__closure__19(teamidcopy))),
              (&::x10::util::Team__LocalTeamState_Strings::sl__161068));
        } else {
            
            //#line 1425 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team__LocalTeamState_Strings::sl__161069), ::x10::lang::Place::_make(::x10aux::here)), (&::x10::util::Team__LocalTeamState_Strings::sl__161039)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__161070)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::get())))->c_str());
        }
        
        //#line 1428 "x10/util/Team.x10"
        if (!(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                    ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid()))
        {
            
            //#line 1429 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161071)))));
        }
        
        //#line 1434 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLTOALL__get)())))
        {
            
            //#line 1435 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* notNullDst = (__extension__ ({
                ::x10::lang::Rail< TPMGL(T) >* t__141649 =
                  ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
                if (!((!::x10aux::struct_equals(t__141649,
                                                reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__161061))));
                }
                t__141649;
            }))
            ;
            {
                
                //#line 1436 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__143173 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        
                        //#line 1437 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161072)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst_off)), (&::x10::util::Team__LocalTeamState_Strings::sl__161073)), childDstOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__161074)), ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ((x10_long)(teamidcopy))))->FMGL(local_count)) * (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       ((x10_long)(teamidcopy))))->FMGL(myIndex))))))->c_str());
                        }
                        
                        //#line 1439 "x10/util/Team.x10"
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullDst, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off),
                          gr, childDstOffset, ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                      ((x10_long)(teamidcopy))))->FMGL(local_count)) * (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                              ((x10_long)(teamidcopy))))->FMGL(myIndex))));
                        
                        //#line 1440 "x10/util/Team.x10"
                        x10_long secondLocalOffset = ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                             ((x10_long)(teamidcopy))))->FMGL(local_dst_off)) + (((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                         ((x10_long)(teamidcopy))))->FMGL(local_count)) * (lastChild))));
                        
                        //#line 1441 "x10/util/Team.x10"
                        x10_long secondChildOffset = ((childDstOffset) + (((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                  ((x10_long)(teamidcopy))))->FMGL(local_count)) * (lastChild))));
                        
                        //#line 1442 "x10/util/Team.x10"
                        x10_long secondSize = ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                      ((x10_long)(teamidcopy))))->FMGL(local_count)) * (((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                    ((x10_long)(teamidcopy))))->FMGL(places))->x10::lang::PlaceGroup::size()) - (lastChild))));
                        
                        //#line 1443 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161075)), secondLocalOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__161076)), secondChildOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__161074)), secondSize)))->c_str());
                        }
                        
                        //#line 1445 "x10/util/Team.x10"
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullDst, secondLocalOffset, gr,
                          secondChildOffset, secondSize);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3023) {
                    {
                        ::x10::lang::CheckedThrowable* ct__143171 =
                          __exc3023;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__143171);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__143173);
            }
        } else 
        //#line 1448 "x10/util/Team.x10"
        if (((((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_BROADCAST__get)())) ||
            (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE__get)()))) ||
            (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN__get)()))) ||
            (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX__get)()))))
        {
            
            //#line 1451 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* notNullDst = (__extension__ ({
                ::x10::lang::Rail< TPMGL(T) >* t__141915 =
                  ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
                if (!((!::x10aux::struct_equals(t__141915,
                                                reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__161061))));
                }
                t__141915;
            }))
            ;
            
            //#line 1452 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161077)), notNullDst), (&::x10::util::Team__LocalTeamState_Strings::sl__161078)), gr)))->c_str());
            }
            {
                
                //#line 1453 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__143177 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullDst, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off),
                          gr, childDstOffset, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                    ((x10_long)(teamidcopy))))->FMGL(local_count));
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3024) {
                    {
                        ::x10::lang::CheckedThrowable* ct__143175 =
                          __exc3024;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__143175);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__143177);
            }
        } else 
        //#line 1455 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)())) ||
            (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV__get)()))))
        {
            
            //#line 1456 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* notNullTmp = (__extension__ ({
                ::x10::lang::Rail< TPMGL(T) >* t__141975 =
                  ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_temp_buff));
                if (!((!::x10aux::struct_equals(t__141975,
                                                reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__161061))));
                }
                t__141975;
            }))
            ;
            
            //#line 1458 "x10/util/Team.x10"
            x10_long parentOffset = (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                   ((x10_long)(teamidcopy))))->FMGL(local_parentIndex),
                                                             ((x10_long)-1ll)))
              ? (((x10_long)0ll)) : (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                           ((x10_long)(teamidcopy))))->FMGL(local_offset));
            
            //#line 1459 "x10/util/Team.x10"
            x10_long rootSourceOffset = (::x10aux::struct_equals(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                       ((x10_long)(teamidcopy))))->FMGL(local_parentIndex),
                                                                 ((x10_long)-1ll)))
              ? (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                       ((x10_long)(teamidcopy))))->FMGL(local_src_off))
              : (((x10_long)0ll));
            
            //#line 1460 "x10/util/Team.x10"
            x10_long myOffset = ((((childOffset) - (parentOffset))) + (rootSourceOffset));
            
            //#line 1461 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161079)), childTotalData), (&::x10::util::Team__LocalTeamState_Strings::sl__161080)), notNullTmp), (&::x10::util::Team__LocalTeamState_Strings::sl__161081)), myOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__161078)), gr)))->c_str());
            }
            {
                
                //#line 1462 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__143181 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullTmp, myOffset, gr, ((x10_long)0ll),
                          childTotalData);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3025) {
                    {
                        ::x10::lang::CheckedThrowable* ct__143179 =
                          __exc3025;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__143179);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__143181);
            }
        }
        
        //#line 1465 "x10/util/Team.x10"
        if (!((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                         ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
                 ::x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER1__get)(),
                 ::x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER2__get)()) ||
            ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                      ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
              ::x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER2__get)(),
              ::x10::util::Team__LocalTeamState::FMGL(PHASE_DONE__get)()))))
        {
            
            //#line 1467 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team__LocalTeamState_Strings::sl__161082), ::x10::lang::Place::_make(::x10aux::here)), (&::x10::util::Team__LocalTeamState_Strings::sl__161039)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__161070)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::get())))->c_str());
        }
        
        //#line 1470 "x10/util/Team.x10"
        if (!(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                    ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid()))
        {
            
            //#line 1471 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161083)))));
        }
        
    }
    
    // captured environment
    x10_int teamidcopy;
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* sleepUntil;
    x10_int collType;
    ::x10::lang::GlobalRail<TPMGL(T)> gr;
    x10_long childDstOffset;
    x10_long count;
    x10_long sourceIndex;
    x10_long childTotalData;
    ::x10::util::Team__DoubleIdx childVal;
    x10_long childOffset;
    x10_long lastChild;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
        buf.write(this->sleepUntil);
        buf.write(this->collType);
        buf.write(this->gr);
        buf.write(this->childDstOffset);
        buf.write(this->count);
        buf.write(this->sourceIndex);
        buf.write(this->childTotalData);
        buf.write(this->childVal);
        buf.write(this->childOffset);
        buf.write(this->lastChild);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* that_sleepUntil = buf.read< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>*>();
        x10_int that_collType = buf.read<x10_int>();
        ::x10::lang::GlobalRail<TPMGL(T)> that_gr = buf.read< ::x10::lang::GlobalRail<TPMGL(T)> >();
        x10_long that_childDstOffset = buf.read<x10_long>();
        x10_long that_count = buf.read<x10_long>();
        x10_long that_sourceIndex = buf.read<x10_long>();
        x10_long that_childTotalData = buf.read<x10_long>();
        ::x10::util::Team__DoubleIdx that_childVal = buf.read< ::x10::util::Team__DoubleIdx>();
        x10_long that_childOffset = buf.read<x10_long>();
        x10_long that_lastChild = buf.read<x10_long>();
        x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >* this_ = new (storage) x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >(that_teamidcopy, that_sleepUntil, that_collType, that_gr, that_childDstOffset, that_count, that_sourceIndex, that_childTotalData, that_childVal, that_childOffset, that_lastChild);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__15(x10_int teamidcopy, ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* sleepUntil, x10_int collType, ::x10::lang::GlobalRail<TPMGL(T)> gr, x10_long childDstOffset, x10_long count, x10_long sourceIndex, x10_long childTotalData, ::x10::util::Team__DoubleIdx childVal, x10_long childOffset, x10_long lastChild) : teamidcopy(teamidcopy), sleepUntil(sleepUntil), collType(collType), gr(gr), childDstOffset(childDstOffset), count(count), sourceIndex(sourceIndex), childTotalData(childTotalData), childVal(childVal), childOffset(childOffset), lastChild(lastChild) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1357-1473";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_Team__LocalTeamState__closure__15<TPMGL(T) > >x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >::__apply, &x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_Team__LocalTeamState__closure__15<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__15_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__20_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__20 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__20> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_boolean __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__20* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__20>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__20* this_ = new (storage) x10_util_Team__LocalTeamState__closure__20(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__20(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1509";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__20_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__21_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__21 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__21> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__21* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__21>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__21* this_ = new (storage) x10_util_Team__LocalTeamState__closure__21(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__21(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1535-1537";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__21_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__22_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__22 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__22> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__22* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__22>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__22* this_ = new (storage) x10_util_Team__LocalTeamState__closure__22(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__22(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1545-1547";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__22_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__24_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__24 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__24> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__24* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__24>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__24* this_ = new (storage) x10_util_Team__LocalTeamState__closure__24(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__24(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1559-1561";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__24_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__25_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__25 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__25> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__25* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__25>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__25* this_ = new (storage) x10_util_Team__LocalTeamState__closure__25(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__25(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1567-1569";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__25_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__23_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
class x10_util_Team__LocalTeamState__closure__23 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_1<x10_long>::itable<x10_util_Team__LocalTeamState__closure__23> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(x10_long childIndex);
    // captured environment
    ::x10::lang::Place root;
    ::x10::lang::Rail< x10_int >* counts;
    ::x10::util::Team__LocalTeamState* saved_this;
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->root);
        buf.write(this->counts);
        buf.write(this->saved_this);
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__23* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__23>();
        buf.record_reference(storage);
        ::x10::lang::Place that_root = buf.read< ::x10::lang::Place>();
        ::x10::lang::Rail< x10_int >* that_counts = buf.read< ::x10::lang::Rail< x10_int >*>();
        ::x10::util::Team__LocalTeamState* that_saved_this = buf.read< ::x10::util::Team__LocalTeamState*>();
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__23* this_ = new (storage) x10_util_Team__LocalTeamState__closure__23(that_root, that_counts, that_saved_this, that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__23(::x10::lang::Place root, ::x10::lang::Rail< x10_int >* counts, ::x10::util::Team__LocalTeamState* saved_this, x10_int teamidcopy) : root(root), counts(counts), saved_this(saved_this), teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_1<x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1553-1572";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__23_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__26_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__26 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__26> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__26* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__26>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__26* this_ = new (storage) x10_util_Team__LocalTeamState__closure__26(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__26(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1578-1580";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__26_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__27_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__27 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__27> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply();
    // captured environment
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__27* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__27>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__27* this_ = new (storage) x10_util_Team__LocalTeamState__closure__27(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__27(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1590-1592";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__27_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE_H_GENERICS
#define X10_UTIL_TEAM__LOCALTEAMSTATE_H_GENERICS
inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_READY__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_READY);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_INIT__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_INIT);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER1__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER1);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER2__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER2);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_PARENT__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_PARENT);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER1__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER1);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER2__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER2);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_DONE__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_DONE);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(PHASE_INVALID__get)() {
    return x10::util::Team__LocalTeamState::FMGL(PHASE_INVALID);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_BARRIER__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_BARRIER);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_BROADCAST__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_BROADCAST);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_ALLTOALL__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_ALLTOALL);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_GATHER__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_GATHER);
}

inline x10_int x10::util::Team__LocalTeamState::FMGL(COLL_GATHERV__get)() {
    return x10::util::Team__LocalTeamState::FMGL(COLL_GATHERV);
}

#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE_H_collective_impl_3019
#define X10_UTIL_TEAM__LOCALTEAMSTATE_H_collective_impl_3019
template<class TPMGL(T)> void x10::util::Team__LocalTeamState::collective_impl(
  x10_int collType, ::x10::lang::Place root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_long dst_off,
  x10_long count, x10_int operation, ::x10::lang::Rail< x10_int >* offsets,
  ::x10::lang::Rail< x10_int >* counts) {
    
    //#line 1149 "x10/util/Team.x10"
    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)()) {
        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161039)), this->FMGL(teamid)), (&::x10::util::Team__LocalTeamState_Strings::sl__161045)), ::x10::util::Team__LocalTeamState::getCollName(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              collType)), (&::x10::util::Team__LocalTeamState_Strings::sl__161046)), ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::get()), (&::x10::util::Team__LocalTeamState_Strings::sl__161047)), root)))->c_str());
    }
    
    //#line 1151 "x10/util/Team.x10"
    x10_int teamidcopy = this->FMGL(teamid);
    
    //#line 1158 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* sleepUntil =
      reinterpret_cast< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*> >(sizeof(x10_util_Team__LocalTeamState__closure__12)))x10_util_Team__LocalTeamState__closure__12(teamidcopy)));
    
    //#line 1202 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
      reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__13)))x10_util_Team__LocalTeamState__closure__13(this))),
      (&::x10::util::Team__LocalTeamState_Strings::sl__161053));
    
    //#line 1204 "x10/util/Team.x10"
    ::x10::util::Team__LocalTeamState__TreeStructure myLinks =
      this->getLinks(this->FMGL(myIndex), root, counts);
    
    //#line 1206 "x10/util/Team.x10"
    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)()) {
        
        //#line 1207 "x10/util/Team.x10"
        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161039)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__161054)), (::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ((x10_long)-1ll)))
          ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)())
          : (::x10aux::nullCheck(this->FMGL(places))->__apply(
               myLinks->FMGL(parentIndex)))), (&::x10::util::Team__LocalTeamState_Strings::sl__161041)), (::x10aux::struct_equals(myLinks->FMGL(child1Index),
                                                                                                                                  ((x10_long)-1ll)))
          ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)())
          : (::x10aux::nullCheck(this->FMGL(places))->__apply(
               myLinks->FMGL(child1Index)))), (&::x10::util::Team__LocalTeamState_Strings::sl__161042)), (::x10aux::struct_equals(myLinks->FMGL(child2Index),
                                                                                                                                  ((x10_long)-1ll)))
          ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)())
          : (::x10aux::nullCheck(this->FMGL(places))->__apply(
               myLinks->FMGL(child2Index))))))->c_str());
        
        //#line 1211 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(counts, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 1212 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161039)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__161055)), myLinks->FMGL(countsSum))))->c_str());
        }
        
    }
    
    //#line 1217 "x10/util/Team.x10"
    this->FMGL(local_src) = (reinterpret_cast< ::x10::lang::Any*>(src));
    
    //#line 1218 "x10/util/Team.x10"
    this->FMGL(local_src_off) = src_off;
    
    //#line 1219 "x10/util/Team.x10"
    this->FMGL(local_dst) = (reinterpret_cast< ::x10::lang::Any*>(dst));
    
    //#line 1220 "x10/util/Team.x10"
    this->FMGL(local_dst_off) = dst_off;
    
    //#line 1221 "x10/util/Team.x10"
    this->FMGL(local_count) = count;
    
    //#line 1222 "x10/util/Team.x10"
    this->FMGL(local_parentIndex) = myLinks->FMGL(parentIndex);
    
    //#line 1223 "x10/util/Team.x10"
    this->FMGL(local_grandchildren) = myLinks->FMGL(totalChildren);
    
    //#line 1224 "x10/util/Team.x10"
    this->FMGL(local_child1Index) = myLinks->FMGL(child1Index);
    
    //#line 1225 "x10/util/Team.x10"
    this->FMGL(local_child2Index) = myLinks->FMGL(child2Index);
    
    //#line 1226 "x10/util/Team.x10"
    this->FMGL(local_counts) = counts;
    
    //#line 1227 "x10/util/Team.x10"
    if ((!::x10aux::struct_equals(counts, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 1228 "x10/util/Team.x10"
        this->FMGL(local_counts_sum) = ((x10_long)(myLinks->FMGL(countsSum)));
        
        //#line 1229 "x10/util/Team.x10"
        this->FMGL(local_offset) = ((x10_long)(::x10aux::nullCheck(offsets)->x10::lang::template Rail< x10_int >::__apply(
                                                 this->FMGL(myIndex))));
        
        //#line 1230 "x10/util/Team.x10"
        this->FMGL(local_count) = ((x10_long)(::x10aux::nullCheck(counts)->x10::lang::template Rail< x10_int >::__apply(
                                                this->FMGL(myIndex))));
    } else {
        
        //#line 1233 "x10/util/Team.x10"
        this->FMGL(local_counts_sum) = ((((this->FMGL(local_grandchildren)) + (((x10_long)1ll)))) * (count));
        
        //#line 1234 "x10/util/Team.x10"
        this->FMGL(local_offset) = ((this->FMGL(myIndex)) * (count));
    }
    
    //#line 1236 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE__get)())) ||
        (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE__get)()))))
    {
        
        //#line 1237 "x10/util/Team.x10"
        if ((((this->FMGL(local_child1Index)) > (((x10_long)-1ll))) &&
            (::x10aux::struct_equals(src, dst)))) {
            
            //#line 1239 "x10/util/Team.x10"
            this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(count, false)));
        }
        
        //#line 1241 "x10/util/Team.x10"
        if (((this->FMGL(local_child2Index)) > (((x10_long)-1ll))))
        {
            
            //#line 1242 "x10/util/Team.x10"
            this->FMGL(local_temp_buff2) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(count, false)));
        }
        
    } else 
    //#line 1244 "x10/util/Team.x10"
    if (((!::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                   ((x10_long)-1ll))) && (((::x10aux::struct_equals(collType,
                                                                                    ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)())) ||
                                                          (::x10aux::struct_equals(collType,
                                                                                   ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV__get)()))))))
    {
        
        //#line 1246 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161056)), this->FMGL(local_counts_sum))))->c_str());
        }
        
        //#line 1247 "x10/util/Team.x10"
        this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(this->FMGL(local_counts_sum), false)));
    } else 
    //#line 1248 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHER__get)())) ||
        (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHERV__get)()))))
    {
        
        //#line 1250 "x10/util/Team.x10"
        x10_long offset = ((x10_long)0ll);
        
        //#line 1251 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                     ((x10_long)-1ll)))) {
            
            //#line 1252 "x10/util/Team.x10"
            this->FMGL(local_temp_buff) = this->FMGL(local_dst);
            
            //#line 1253 "x10/util/Team.x10"
            offset = ((dst_off) + (this->FMGL(local_offset)));
        } else {
            
            //#line 1256 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161056)), this->FMGL(local_counts_sum))))->c_str());
            }
            
            //#line 1257 "x10/util/Team.x10"
            this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(this->FMGL(local_counts_sum), false)));
        }
        
        //#line 1259 "x10/util/Team.x10"
        ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
          src, src_off, ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff)),
          offset, this->FMGL(local_count));
    } else 
    //#line 1260 "x10/util/Team.x10"
    if (((((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN__get)())) ||
          (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX__get)())))) &&
        (!::x10aux::struct_equals(this->FMGL(local_child1Index),
                                  ((x10_long)-1ll))))) {
        
        //#line 1262 "x10/util/Team.x10"
        this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((::x10aux::struct_equals(this->FMGL(local_child2Index),
                                                                                                                                                ((x10_long)-1ll)))
                                         ? (((x10_long)1ll))
                                         : (((x10_long)2ll)), false)));
    }
    
    //#line 1265 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX__get)())) ||
        (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN__get)()))))
    {
        
        //#line 1266 "x10/util/Team.x10"
        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
          ((x10_long)0ll), ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll)));
    }
    
    //#line 1269 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child1Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1271 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_INIT__get)(),
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_PARENT__get)());
    } else 
    //#line 1272 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child2Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1274 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_INIT__get)(),
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER2__get)());
    } else {
        
        //#line 1276 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_INIT__get)(),
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_GATHER1__get)());
    }
    
    //#line 1280 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
      reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__14)))x10_util_Team__LocalTeamState__closure__14(this))),
      (&::x10::util::Team__LocalTeamState_Strings::sl__161057));
    
    //#line 1282 "x10/util/Team.x10"
    if (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid())
    {
        
        //#line 1283 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE__get)())) ||
            (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE__get)()))))
        {
            
            //#line 1284 "x10/util/Team.x10"
            if ((!::x10aux::struct_equals(this->FMGL(local_child1Index),
                                          ((x10_long)-1ll))))
            {
                
                //#line 1286 "x10/util/Team.x10"
                if ((::x10aux::struct_equals(src, dst))) {
                    
                    //#line 1287 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161058)), this->FMGL(local_temp_buff)), (&::x10::util::Team__LocalTeamState_Strings::sl__161059)), dst)))->c_str());
                    }
                    
                    //#line 1288 "x10/util/Team.x10"
                    ::x10::util::TeamReductionHelper::template performReduction< TPMGL(T) >(
                      ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff)),
                      ((x10_long)0ll), dst, dst_off, count,
                      operation);
                } else {
                    
                    //#line 1290 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161060)), src), (&::x10::util::Team__LocalTeamState_Strings::sl__161059)), dst)))->c_str());
                    }
                    
                    //#line 1291 "x10/util/Team.x10"
                    ::x10::util::TeamReductionHelper::template performReduction< TPMGL(T) >(
                      src, src_off, dst, dst_off, count, operation);
                }
                
                //#line 1293 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(this->FMGL(local_child2Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1294 "x10/util/Team.x10"
                    ::x10::util::TeamReductionHelper::template performReduction< TPMGL(T) >(
                      ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff2)),
                      ((x10_long)0ll), dst, dst_off, count,
                      operation);
                }
                
            } else {
                
                //#line 1297 "x10/util/Team.x10"
                ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
                  src, src_off, dst, dst_off, count);
            }
            
        } else 
        //#line 1299 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLTOALL__get)())))
        {
            
            //#line 1300 "x10/util/Team.x10"
            ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
              src, src_off, dst, ((dst_off) + (((count) * (this->FMGL(myIndex))))),
              count);
        }
        
        //#line 1303 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                     ((x10_long)-1ll)))) {
            
            //#line 1306 "x10/util/Team.x10"
            if ((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_BROADCAST__get)())))
            {
                
                //#line 1307 "x10/util/Team.x10"
                ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
                  src, src_off, dst, dst_off, count);
            } else 
            //#line 1308 "x10/util/Team.x10"
            if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)())) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV__get)()))))
            {
                
                //#line 1309 "x10/util/Team.x10"
                this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(src));
            }
            
        } else {
            
            //#line 1313 "x10/util/Team.x10"
            ::x10::lang::GlobalRail<TPMGL(T)> gr;
            
            //#line 1314 "x10/util/Team.x10"
            if (((((((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLTOALL__get)())) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_BROADCAST__get)()))) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_REDUCE__get)()))) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLREDUCE__get)()))) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX__get)()))) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN__get)()))))
            {
                
                //#line 1320 "x10/util/Team.x10"
                ::x10::lang::Rail< TPMGL(T) >* notnulldst =
                  (__extension__ ({
                    ::x10::lang::Rail< TPMGL(T) >* t__141316 =
                      dst;
                    if (!((!::x10aux::struct_equals(t__141316,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__161061))));
                    }
                    t__141316;
                }))
                ;
                
                //#line 1321 "x10/util/Team.x10"
                gr = ::x10::lang::GlobalRail<TPMGL(T)>::_make(notnulldst);
            } else 
            //#line 1322 "x10/util/Team.x10"
            if (((((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHER__get)())) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHERV__get)()))) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)()))) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV__get)()))))
            {
                
                //#line 1326 "x10/util/Team.x10"
                ::x10::lang::Rail< TPMGL(T) >* notNullTmp =
                  (__extension__ ({
                    ::x10::lang::Rail< TPMGL(T) >* t__141318 =
                      ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff));
                    if (!((!::x10aux::struct_equals(t__141318,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__161061))));
                    }
                    t__141318;
                }))
                ;
                
                //#line 1327 "x10/util/Team.x10"
                gr = ::x10::lang::GlobalRail<TPMGL(T)>::_make(notNullTmp);
            } else {
                
                //#line 1329 "x10/util/Team.x10"
                gr = ::x10::lang::GlobalRail<TPMGL(T)>::_make(::x10::lang::Rail< TPMGL(T) >::_make());
            }
            
            //#line 1332 "x10/util/Team.x10"
            x10_long sourceIndex = this->FMGL(myIndex);
            
            //#line 1333 "x10/util/Team.x10"
            x10_long grandchildren = myLinks->FMGL(totalChildren);
            
            //#line 1334 "x10/util/Team.x10"
            x10_long lastChild = ((((this->FMGL(myIndex)) + (this->FMGL(local_grandchildren)))) + (((x10_long)1ll)));
            
            //#line 1335 "x10/util/Team.x10"
            ::x10::util::Team__DoubleIdx childVal;
            
            //#line 1336 "x10/util/Team.x10"
            if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMAX__get)())) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_INDEXOFMIN__get)()))))
            {
                
                //#line 1337 "x10/util/Team.x10"
                childVal = (::x10aux::class_cast< ::x10::util::Team__DoubleIdx>(::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                                                  ((x10_long)0ll))));
            } else {
                
                //#line 1339 "x10/util/Team.x10"
                childVal = ::x10::util::Team__DoubleIdx::_make(0.0,
                                                               ((x10_int)0));
            }
            
            //#line 1341 "x10/util/Team.x10"
            x10_long childOffset = this->FMGL(local_offset);
            
            //#line 1342 "x10/util/Team.x10"
            x10_long childDstOffset = ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off);
            
            //#line 1343 "x10/util/Team.x10"
            x10_long childTotalData;
            
            //#line 1344 "x10/util/Team.x10"
            if ((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_ALLTOALL__get)())))
            {
                
                //#line 1345 "x10/util/Team.x10"
                childTotalData = ((count) * (((grandchildren) + (((x10_long)1ll)))));
            } else 
            //#line 1346 "x10/util/Team.x10"
            if (((((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHER__get)())) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_GATHERV__get)()))) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)()))) ||
                (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV__get)()))))
            {
                
                //#line 1350 "x10/util/Team.x10"
                childTotalData = this->FMGL(local_counts_sum);
            } else {
                
                //#line 1352 "x10/util/Team.x10"
                childTotalData = ((x10_long)-1ll);
            }
            
            //#line 1355 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161039)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__161062)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                                                                                                              myLinks->FMGL(parentIndex)))))->c_str());
            }
            
            //#line 1356 "x10/util/Team.x10"
            try {
                {
                    
                    //#line 1357 "x10/util/Team.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__143189 =
                      ::x10::xrx::Runtime::startFinish(::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                    try {
                        {
                            ::x10::xrx::Runtime::runAsync(
                              ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                myLinks->FMGL(parentIndex)),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__15<TPMGL(T)>)))x10_util_Team__LocalTeamState__closure__15<TPMGL(T)>(teamidcopy, sleepUntil, collType, gr, childDstOffset, count, sourceIndex, childTotalData, childVal, childOffset, lastChild))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3026) {
                        {
                            ::x10::lang::CheckedThrowable* ct__143186 =
                              __exc3026;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__143186);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__143189);
                }
                
                //#line 1474 "x10/util/Team.x10"
                if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                {
                    ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161039)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__161084)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(parentIndex)))))->c_str());
                }
                
            }
            catch (::x10::lang::CheckedThrowable* __exc3027) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3027)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc3027);
                    {
                        
                        //#line 1477 "x10/util/Team.x10"
                        ::x10::lang::Rail< ::x10::lang::DeadPlaceException* >* dper =
                          ::x10aux::nullCheck(me)->template getExceptionsOfType< ::x10::lang::DeadPlaceException* >();
                        
                        //#line 1478 "x10/util/Team.x10"
                        if ((((x10_long)(::x10aux::nullCheck(dper)->FMGL(size))) > (((x10_long)0ll))))
                        {
                            
                            //#line 1479 "x10/util/Team.x10"
                            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                            {
                                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161085)), ::x10aux::nullCheck(dper)->x10::lang::template Rail< ::x10::lang::DeadPlaceException* >::__apply(
                                                                                                                                                                                                                                                                                              ((x10_long)0ll)))))->c_str());
                            }
                            
                            //#line 1480 "x10/util/Team.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::markInvalid();
                        } else {
                            
                            //#line 1482 "x10/util/Team.x10"
                            ::x10aux::throwException(::x10aux::nullCheck(me));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
            
            //#line 1486 "x10/util/Team.x10"
            gr->x10::lang::template GlobalRail<TPMGL(T)>::forget();
        }
        
    }
    
    //#line 1490 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)())) ||
        (::x10aux::struct_equals(collType, ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTERV__get)()))))
    {
        
        //#line 1492 "x10/util/Team.x10"
        x10_long temp_off_my_data = (::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                                             ((x10_long)-1ll)))
          ? (((src_off) + (this->FMGL(local_offset)))) : (((x10_long)0ll));
        
        //#line 1493 "x10/util/Team.x10"
        x10_long temp_count = this->FMGL(local_count);
        
        //#line 1494 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            
            //#line 1495 "x10/util/Team.x10"
            ::x10::lang::String* coll_name = (::x10aux::struct_equals(collType,
                                                                      ::x10::util::Team__LocalTeamState::FMGL(COLL_SCATTER__get)()))
              ? ((&::x10::util::Team__LocalTeamState_Strings::sl__161086))
              : ((&::x10::util::Team__LocalTeamState_Strings::sl__161087));
            
            //#line 1496 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161088)), coll_name), (&::x10::util::Team__LocalTeamState_Strings::sl__161088)), count), (&::x10::util::Team__LocalTeamState_Strings::sl__161089)), temp_off_my_data), (&::x10::util::Team__LocalTeamState_Strings::sl__161090))))->c_str());
        }
        
        //#line 1498 "x10/util/Team.x10"
        ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
          (__extension__ ({
              ::x10::lang::Rail< TPMGL(T) >* t__142514 = ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff));
              if (!((!::x10aux::struct_equals(t__142514, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__161061))));
              }
              t__142514;
          }))
          , temp_off_my_data, dst, dst_off, temp_count);
    }
    
    //#line 1501 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child1Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1502 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_PARENT__get)(),
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_DONE__get)());
    } else 
    //#line 1503 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child2Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1504 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_PARENT__get)(),
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER2__get)());
    } else {
        
        //#line 1506 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_PARENT__get)(),
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_SCATTER1__get)());
    }
    
    //#line 1509 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
      reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__20)))x10_util_Team__LocalTeamState__closure__20(teamidcopy))),
      (&::x10::util::Team__LocalTeamState_Strings::sl__161091));
    
    //#line 1512 "x10/util/Team.x10"
    this->FMGL(local_src) = (::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1513 "x10/util/Team.x10"
    this->FMGL(local_dst) = (::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1514 "x10/util/Team.x10"
    this->FMGL(local_temp_buff) = (::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1515 "x10/util/Team.x10"
    this->FMGL(local_temp_buff2) = (::x10aux::class_cast_unchecked< ::x10::lang::Any*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1516 "x10/util/Team.x10"
    this->FMGL(local_parentIndex) = ((x10_long)-1ll);
    
    //#line 1517 "x10/util/Team.x10"
    this->FMGL(local_child1Index) = ((x10_long)-1ll);
    
    //#line 1518 "x10/util/Team.x10"
    this->FMGL(local_child2Index) = ((x10_long)-1ll);
    
    //#line 1520 "x10/util/Team.x10"
    if (this->x10::util::Team__LocalTeamState::isValid())
    {
        
        //#line 1521 "x10/util/Team.x10"
        if (((this->FMGL(local_child1Index)) > (((x10_long)-1ll))))
        {
            
            //#line 1524 "x10/util/Team.x10"
            ::x10aux::event_probe();
        }
        
        //#line 1526 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_DONE__get)(),
          ::x10::util::Team__LocalTeamState::FMGL(PHASE_READY__get)());
        
        //#line 1527 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161039)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__161092)), ::x10::util::Team__LocalTeamState::getCollName(
                                                                                                                                                                                                                                                                                                                                                                                                          collType))))->c_str());
        }
        
    } else {
        
        //#line 1531 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                      ((x10_long)-1ll))))
        {
            
            //#line 1532 "x10/util/Team.x10"
            if (!(::x10aux::nullCheck(this->FMGL(places))->__apply(
                    myLinks->FMGL(parentIndex))->x10::lang::Place::isDead()))
            {
                
                //#line 1533 "x10/util/Team.x10"
                try {
                    
                    //#line 1534 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161093)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(parentIndex))), (&::x10::util::Team__LocalTeamState_Strings::sl__161094))))->c_str());
                    }
                    {
                        
                        //#line 1535 "x10/util/Team.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__143197 =
                          ::x10::xrx::Runtime::startFinish(
                            ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                        try {
                            {
                                ::x10::xrx::Runtime::runAsync(
                                  ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                    myLinks->FMGL(parentIndex)),
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__21)))x10_util_Team__LocalTeamState__closure__21(teamidcopy))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3028) {
                            {
                                ::x10::lang::CheckedThrowable* ct__143194 =
                                  __exc3028;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__143194);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__143197);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3029) {
                    if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3029)) {
                        ::x10::lang::MultipleExceptions* me =
                          static_cast< ::x10::lang::MultipleExceptions*>(__exc3029);
                        {
                         
                        }
                    } else {
                        throw;
                    }
                }
            } else {
                
                //#line 1541 "x10/util/Team.x10"
                ::x10::util::Team__LocalTeamState__TreeStructure parentLinks =
                  this->getLinks(myLinks->FMGL(parentIndex),
                                 root, counts);
                
                //#line 1542 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(parentLinks->FMGL(parentIndex),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1543 "x10/util/Team.x10"
                    try {
                        
                        //#line 1544 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161095)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      parentLinks->FMGL(parentIndex))), (&::x10::util::Team__LocalTeamState_Strings::sl__161094))))->c_str());
                        }
                        {
                            
                            //#line 1545 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__143205 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        parentLinks->FMGL(parentIndex)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__22)))x10_util_Team__LocalTeamState__closure__22(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3030) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__143202 =
                                      __exc3030;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__143202);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__143205);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3031) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3031)) {
                            ::x10::lang::MultipleExceptions* me =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3031);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
            }
            
        }
        
        //#line 1553 "x10/util/Team.x10"
        ::x10::lang::VoidFun_0_1<x10_long>* notifyGrandchildren =
          reinterpret_cast< ::x10::lang::VoidFun_0_1<x10_long>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_1<x10_long> >(sizeof(x10_util_Team__LocalTeamState__closure__23)))x10_util_Team__LocalTeamState__closure__23(root, counts, this, teamidcopy)));
        
        //#line 1574 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(myLinks->FMGL(child1Index),
                                      ((x10_long)-1ll))))
        {
            
            //#line 1575 "x10/util/Team.x10"
            if (!(::x10aux::nullCheck(this->FMGL(places))->__apply(
                    myLinks->FMGL(child1Index))->x10::lang::Place::isDead()))
            {
                
                //#line 1576 "x10/util/Team.x10"
                try {
                    
                    //#line 1577 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161098)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(child1Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__161099))))->c_str());
                    }
                    {
                        
                        //#line 1578 "x10/util/Team.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__143229 =
                          ::x10::xrx::Runtime::startFinish(
                            ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                        try {
                            {
                                ::x10::xrx::Runtime::runAsync(
                                  ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                    myLinks->FMGL(child1Index)),
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__26)))x10_util_Team__LocalTeamState__closure__26(teamidcopy))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3036) {
                            {
                                ::x10::lang::CheckedThrowable* ct__143226 =
                                  __exc3036;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__143226);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__143229);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3037) {
                    if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3037)) {
                        ::x10::lang::MultipleExceptions* me =
                          static_cast< ::x10::lang::MultipleExceptions*>(__exc3037);
                        {
                         
                        }
                    } else {
                        throw;
                    }
                }
            } else {
                
                //#line 1583 "x10/util/Team.x10"
                ::x10::lang::VoidFun_0_1<x10_long>::__apply(::x10aux::nullCheck(notifyGrandchildren), 
                  myLinks->FMGL(child1Index));
            }
            
        }
        
        //#line 1586 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(myLinks->FMGL(child2Index),
                                      ((x10_long)-1ll))))
        {
            
            //#line 1587 "x10/util/Team.x10"
            if (!(::x10aux::nullCheck(this->FMGL(places))->__apply(
                    myLinks->FMGL(child2Index))->x10::lang::Place::isDead()))
            {
                
                //#line 1588 "x10/util/Team.x10"
                try {
                    
                    //#line 1589 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161100)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(child2Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__161094))))->c_str());
                    }
                    {
                        
                        //#line 1590 "x10/util/Team.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__143237 =
                          ::x10::xrx::Runtime::startFinish(
                            ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                        try {
                            {
                                ::x10::xrx::Runtime::runAsync(
                                  ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                    myLinks->FMGL(child2Index)),
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__27)))x10_util_Team__LocalTeamState__closure__27(teamidcopy))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3038) {
                            {
                                ::x10::lang::CheckedThrowable* ct__143234 =
                                  __exc3038;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__143234);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__143237);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3039) {
                    if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3039)) {
                        ::x10::lang::MultipleExceptions* me =
                          static_cast< ::x10::lang::MultipleExceptions*>(__exc3039);
                        {
                         
                        }
                    } else {
                        throw;
                    }
                }
            } else {
                
                //#line 1595 "x10/util/Team.x10"
                ::x10::lang::VoidFun_0_1<x10_long>::__apply(::x10aux::nullCheck(notifyGrandchildren), 
                  myLinks->FMGL(child2Index));
            }
            
        }
        
        //#line 1599 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__161039)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__161101)), ::x10::util::Team__LocalTeamState::getCollName(
                                                                                                                                                                                                                                                                                                                                                                                                          collType))))->c_str());
        }
        
        //#line 1601 "x10/util/Team.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team__LocalTeamState_Strings::sl__161102), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__161103)))));
    }
    
}
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE_H_collective_impl_3019
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE_H_GENERICS
#endif // __X10_UTIL_TEAM__LOCALTEAMSTATE_H_NODEPS
