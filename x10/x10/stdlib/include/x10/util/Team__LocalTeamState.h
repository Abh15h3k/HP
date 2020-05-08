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
namespace x10 { namespace xrx { 
class Thread;
} } 
namespace x10 { namespace xrx { 
class InterruptedException;
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
namespace x10 { namespace lang { 
class System;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class Team__LocalTeamState_Strings {
  public:
    static ::x10::lang::String sl__171505;
    static ::x10::lang::String sl__171550;
    static ::x10::lang::String sl__171559;
    static ::x10::lang::String sl__171492;
    static ::x10::lang::String sl__171519;
    static ::x10::lang::String sl__171518;
    static ::x10::lang::String sl__171560;
    static ::x10::lang::String sl__171520;
    static ::x10::lang::String sl__171558;
    static ::x10::lang::String sl__171504;
    static ::x10::lang::String sl__171528;
    static ::x10::lang::String sl__171495;
    static ::x10::lang::String sl__171556;
    static ::x10::lang::String sl__171539;
    static ::x10::lang::String sl__171541;
    static ::x10::lang::String sl__171547;
    static ::x10::lang::String sl__171512;
    static ::x10::lang::String sl__171491;
    static ::x10::lang::String sl__171553;
    static ::x10::lang::String sl__171515;
    static ::x10::lang::String sl__171546;
    static ::x10::lang::String sl__171503;
    static ::x10::lang::String sl__171511;
    static ::x10::lang::String sl__171543;
    static ::x10::lang::String sl__171529;
    static ::x10::lang::String sl__171548;
    static ::x10::lang::String sl__171501;
    static ::x10::lang::String sl__171530;
    static ::x10::lang::String sl__171540;
    static ::x10::lang::String sl__171551;
    static ::x10::lang::String sl__171489;
    static ::x10::lang::String sl__171507;
    static ::x10::lang::String sl__171493;
    static ::x10::lang::String sl__171533;
    static ::x10::lang::String sl__171498;
    static ::x10::lang::String sl__171502;
    static ::x10::lang::String sl__171536;
    static ::x10::lang::String sl__171506;
    static ::x10::lang::String sl__171545;
    static ::x10::lang::String sl__171557;
    static ::x10::lang::String sl__171486;
    static ::x10::lang::String sl__171542;
    static ::x10::lang::String sl__171532;
    static ::x10::lang::String sl__171522;
    static ::x10::lang::String sl__171534;
    static ::x10::lang::String sl__171508;
    static ::x10::lang::String sl__171552;
    static ::x10::lang::String sl__171510;
    static ::x10::lang::String sl__171484;
    static ::x10::lang::String sl__171521;
    static ::x10::lang::String sl__171488;
    static ::x10::lang::String sl__171517;
    static ::x10::lang::String sl__171487;
    static ::x10::lang::String sl__171535;
    static ::x10::lang::String sl__171549;
    static ::x10::lang::String sl__171499;
    static ::x10::lang::String sl__171514;
    static ::x10::lang::String sl__171485;
    static ::x10::lang::String sl__171544;
    static ::x10::lang::String sl__171516;
    static ::x10::lang::String sl__171525;
    static ::x10::lang::String sl__171513;
    static ::x10::lang::String sl__171523;
    static ::x10::lang::String sl__171531;
    static ::x10::lang::String sl__171561;
    static ::x10::lang::String sl__171494;
    static ::x10::lang::String sl__171554;
    static ::x10::lang::String sl__171490;
    static ::x10::lang::String sl__171526;
    static ::x10::lang::String sl__171527;
    static ::x10::lang::String sl__171555;
    static ::x10::lang::String sl__171496;
    static ::x10::lang::String sl__171537;
    static ::x10::lang::String sl__171497;
    static ::x10::lang::String sl__171500;
    static ::x10::lang::String sl__171524;
    static ::x10::lang::String sl__171538;
    static ::x10::lang::String sl__171509;
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
#include <x10/xrx/Thread.h>
#include <x10/xrx/InterruptedException.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/lang/System.h>
#include <x10/compiler/NoInline.h>
#include <x10/lang/Unsafe.h>
#include <x10/util/TeamReductionHelper.h>
#include <x10/lang/GlobalRail.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/util/Team__DoubleIdx.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/lang/Double.h>
#include <x10/lang/MultipleExceptions.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__6_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class x10_util_Team__LocalTeamState__closure__6 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::itable<x10_util_Team__LocalTeamState__closure__6> _itable;
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
        x10_util_Team__LocalTeamState__closure__6* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__6>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__6* this_ = new (storage) x10_util_Team__LocalTeamState__closure__6(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__6(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1158-1198";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__6_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__7_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__7> _itable;
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
        x10_util_Team__LocalTeamState__closure__7* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__7>();
        buf.record_reference(storage);
        ::x10::util::Team__LocalTeamState* that_saved_this = buf.read< ::x10::util::Team__LocalTeamState*>();
        x10_util_Team__LocalTeamState__closure__7* this_ = new (storage) x10_util_Team__LocalTeamState__closure__7(that_saved_this);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__7(::x10::util::Team__LocalTeamState* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1202";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__7_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__8_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__8 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__8> _itable;
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
        x10_util_Team__LocalTeamState__closure__8* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__8>();
        buf.record_reference(storage);
        ::x10::util::Team__LocalTeamState* that_saved_this = buf.read< ::x10::util::Team__LocalTeamState*>();
        x10_util_Team__LocalTeamState__closure__8* this_ = new (storage) x10_util_Team__LocalTeamState__closure__8(that_saved_this);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__8(::x10::util::Team__LocalTeamState* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1280";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__8_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__10_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__10 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__10> _itable;
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
        x10_util_Team__LocalTeamState__closure__10* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__10>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__10* this_ = new (storage) x10_util_Team__LocalTeamState__closure__10(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__10(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1358-1361";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__10_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__11_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__11 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__11> _itable;
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
        x10_util_Team__LocalTeamState__closure__11* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__11>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__11* this_ = new (storage) x10_util_Team__LocalTeamState__closure__11(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__11(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1390";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__11_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__12_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class x10_util_Team__LocalTeamState__closure__12 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_boolean>::itable<x10_util_Team__LocalTeamState__closure__12> _itable;
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
        x10_util_Team__LocalTeamState__closure__12* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__12>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__12* this_ = new (storage) x10_util_Team__LocalTeamState__closure__12(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__12(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1402";
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
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__13* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__13>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__13* this_ = new (storage) x10_util_Team__LocalTeamState__closure__13(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__13(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1420-1423";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__13_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__9_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_Team__LocalTeamState__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_Team__LocalTeamState__closure__9<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 1358 "x10/util/Team.x10"
        ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
          reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__10)))x10_util_Team__LocalTeamState__closure__10(teamidcopy))),
          (&::x10::util::Team__LocalTeamState_Strings::sl__171521));
        
        //#line 1362 "x10/util/Team.x10"
        if (!(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                    ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid()))
        {
            
            //#line 1363 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171522)))));
        }
        
        //#line 1367 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ((x10_int)4))))
        {
            {
                
                //#line 1369 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__153886 = ::x10::xrx::Runtime::startFinish();
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
                catch (::x10::lang::CheckedThrowable* __exc3053) {
                    {
                        ::x10::lang::CheckedThrowable* ct__153884 =
                          __exc3053;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__153884);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__153886);
            }
        } else 
        //#line 1371 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ((x10_int)5))) ||
            (::x10aux::struct_equals(collType, ((x10_int)6)))))
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
                    ::x10::xrx::FinishState* fs__153890 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                              gr, childDstOffset, target,
                              off, count);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3054) {
                        {
                            ::x10::lang::CheckedThrowable* ct__153888 =
                              __exc3054;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__153888);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__153890);
                }
            }
            
        } else 
        //#line 1389 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ((x10_int)8))))
        {
            
            //#line 1390 "x10/util/Team.x10"
            ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
              reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__11)))x10_util_Team__LocalTeamState__closure__11(teamidcopy))),
              (&::x10::util::Team__LocalTeamState_Strings::sl__171523));
            
            //#line 1391 "x10/util/Team.x10"
            ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* ldi =
              ::x10aux::class_cast< ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
            
            //#line 1392 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171524)), ::x10aux::nullCheck(ldi)->x10::lang::template Rail< ::x10::util::Team__DoubleIdx >::__apply(
                                                                                                                                                                                                                                                                                                                                      ((x10_long)0ll))->FMGL(value)), (&::x10::util::Team__LocalTeamState_Strings::sl__171525)), childVal->FMGL(value))))->c_str());
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
        if ((::x10aux::struct_equals(collType, ((x10_int)7))))
        {
            
            //#line 1402 "x10/util/Team.x10"
            ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
              reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__12)))x10_util_Team__LocalTeamState__closure__12(teamidcopy))),
              (&::x10::util::Team__LocalTeamState_Strings::sl__171523));
            
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
        if (((::x10aux::struct_equals(collType, ((x10_int)9))) ||
            (::x10aux::struct_equals(collType, ((x10_int)10)))))
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
                    ::x10::xrx::FinishState* fs__153894 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                              gr, ((x10_long)0ll), ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(nonnulltempbuff),
                              myOffset, childTotalData);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3055) {
                        {
                            ::x10::lang::CheckedThrowable* ct__153892 =
                              __exc3055;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__153892);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__153894);
                }
            }
            
        }
        
        //#line 1418 "x10/util/Team.x10"
        if ((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                       ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
               ((x10_int)2), ((x10_int)3)) || ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                        ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
                                                ((x10_int)3),
                                                ((x10_int)4))))
        {
            
            //#line 1420 "x10/util/Team.x10"
            ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
              reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__13)))x10_util_Team__LocalTeamState__closure__13(teamidcopy))),
              (&::x10::util::Team__LocalTeamState_Strings::sl__171526));
        } else {
            
            //#line 1425 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team__LocalTeamState_Strings::sl__171527), ::x10::lang::Place::_make(::x10aux::here)), (&::x10::util::Team__LocalTeamState_Strings::sl__171497)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171528)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::get())))->c_str());
        }
        
        //#line 1428 "x10/util/Team.x10"
        if (!(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                    ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid()))
        {
            
            //#line 1429 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171529)))));
        }
        
        //#line 1434 "x10/util/Team.x10"
        if ((::x10aux::struct_equals(collType, ((x10_int)4))))
        {
            
            //#line 1435 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* notNullDst = (__extension__ ({
                ::x10::lang::Rail< TPMGL(T) >* t__116760 =
                  ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
                if (!((!::x10aux::struct_equals(t__116760,
                                                reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171519))));
                }
                t__116760;
            }))
            ;
            {
                
                //#line 1436 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__153898 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        
                        //#line 1437 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171530)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst_off)), (&::x10::util::Team__LocalTeamState_Strings::sl__171531)), childDstOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__171532)), ((::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
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
                                                                      ((x10_long)(teamidcopy))))->FMGL(local_count)) * ((((__extension__ ({
                            ::x10::lang::PlaceGroup* this__153649 =
                              ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                    ((x10_long)(teamidcopy))))->FMGL(places);
                            ::x10aux::nullCheck(this__153649)->numPlaces();
                        }))
                        ) - (lastChild))));
                        
                        //#line 1443 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171533)), secondLocalOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__171534)), secondChildOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__171532)), secondSize)))->c_str());
                        }
                        
                        //#line 1445 "x10/util/Team.x10"
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullDst, secondLocalOffset, gr,
                          secondChildOffset, secondSize);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3056) {
                    {
                        ::x10::lang::CheckedThrowable* ct__153896 =
                          __exc3056;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__153896);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__153898);
            }
        } else 
        //#line 1448 "x10/util/Team.x10"
        if (((((::x10aux::struct_equals(collType, ((x10_int)1))) ||
            (::x10aux::struct_equals(collType, ((x10_int)6)))) ||
            (::x10aux::struct_equals(collType, ((x10_int)7)))) ||
            (::x10aux::struct_equals(collType, ((x10_int)8)))))
        {
            
            //#line 1451 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* notNullDst = (__extension__ ({
                ::x10::lang::Rail< TPMGL(T) >* t__117026 =
                  ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_dst));
                if (!((!::x10aux::struct_equals(t__117026,
                                                reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171519))));
                }
                t__117026;
            }))
            ;
            
            //#line 1452 "x10/util/Team.x10"
            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
            {
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171535)), notNullDst), (&::x10::util::Team__LocalTeamState_Strings::sl__171536)), gr)))->c_str());
            }
            {
                
                //#line 1453 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__153902 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullDst, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off),
                          gr, childDstOffset, ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                    ((x10_long)(teamidcopy))))->FMGL(local_count));
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3057) {
                    {
                        ::x10::lang::CheckedThrowable* ct__153900 =
                          __exc3057;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__153900);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__153902);
            }
        } else 
        //#line 1455 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ((x10_int)2))) ||
            (::x10aux::struct_equals(collType, ((x10_int)3)))))
        {
            
            //#line 1456 "x10/util/Team.x10"
            ::x10::lang::Rail< TPMGL(T) >* notNullTmp = (__extension__ ({
                ::x10::lang::Rail< TPMGL(T) >* t__117086 =
                  ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                              ((x10_long)(teamidcopy))))->FMGL(local_temp_buff));
                if (!((!::x10aux::struct_equals(t__117086,
                                                reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171519))));
                }
                t__117086;
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
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171537)), childTotalData), (&::x10::util::Team__LocalTeamState_Strings::sl__171538)), notNullTmp), (&::x10::util::Team__LocalTeamState_Strings::sl__171539)), myOffset), (&::x10::util::Team__LocalTeamState_Strings::sl__171536)), gr)))->c_str());
            }
            {
                
                //#line 1462 "x10/util/Team.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__153906 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        ::x10::lang::Rail< void >::asyncCopy< TPMGL(T) >(
                          notNullTmp, myOffset, gr, ((x10_long)0ll),
                          childTotalData);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3058) {
                    {
                        ::x10::lang::CheckedThrowable* ct__153904 =
                          __exc3058;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__153904);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__153906);
            }
        }
        
        //#line 1465 "x10/util/Team.x10"
        if (!((::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                         ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
                 ((x10_int)5), ((x10_int)6)) || ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                          ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
                                                  ((x10_int)6),
                                                  ((x10_int)7)))))
        {
            
            //#line 1467 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team__LocalTeamState_Strings::sl__171540), ::x10::lang::Place::_make(::x10aux::here)), (&::x10::util::Team__LocalTeamState_Strings::sl__171497)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171528)), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::get())))->c_str());
        }
        
        //#line 1470 "x10/util/Team.x10"
        if (!(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                    ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid()))
        {
            
            //#line 1471 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171541)))));
        }
        
    }
    
    // captured environment
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* sleepUntil;
    x10_int teamidcopy;
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
        buf.write(this->sleepUntil);
        buf.write(this->teamidcopy);
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
        x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* that_sleepUntil = buf.read< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>*>();
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_int that_collType = buf.read<x10_int>();
        ::x10::lang::GlobalRail<TPMGL(T)> that_gr = buf.read< ::x10::lang::GlobalRail<TPMGL(T)> >();
        x10_long that_childDstOffset = buf.read<x10_long>();
        x10_long that_count = buf.read<x10_long>();
        x10_long that_sourceIndex = buf.read<x10_long>();
        x10_long that_childTotalData = buf.read<x10_long>();
        ::x10::util::Team__DoubleIdx that_childVal = buf.read< ::x10::util::Team__DoubleIdx>();
        x10_long that_childOffset = buf.read<x10_long>();
        x10_long that_lastChild = buf.read<x10_long>();
        x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >* this_ = new (storage) x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >(that_sleepUntil, that_teamidcopy, that_collType, that_gr, that_childDstOffset, that_count, that_sourceIndex, that_childTotalData, that_childVal, that_childOffset, that_lastChild);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__9(::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* sleepUntil, x10_int teamidcopy, x10_int collType, ::x10::lang::GlobalRail<TPMGL(T)> gr, x10_long childDstOffset, x10_long count, x10_long sourceIndex, x10_long childTotalData, ::x10::util::Team__DoubleIdx childVal, x10_long childOffset, x10_long lastChild) : sleepUntil(sleepUntil), teamidcopy(teamidcopy), collType(collType), gr(gr), childDstOffset(childDstOffset), count(count), sourceIndex(sourceIndex), childTotalData(childTotalData), childVal(childVal), childOffset(childOffset), lastChild(lastChild) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1357-1473";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_Team__LocalTeamState__closure__9<TPMGL(T) > >x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::__apply, &x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_Team__LocalTeamState__closure__9<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__9_CLOSURE
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
    x10_int teamidcopy;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->teamidcopy);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_Team__LocalTeamState__closure__14* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__14>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__14* this_ = new (storage) x10_util_Team__LocalTeamState__closure__14(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__14(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_boolean> >(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1509";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__14_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__15_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__15 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__15> _itable;
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
        x10_util_Team__LocalTeamState__closure__15* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__15>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__15* this_ = new (storage) x10_util_Team__LocalTeamState__closure__15(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__15(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1535-1537";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__15_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__16_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__16 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__16> _itable;
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
        x10_util_Team__LocalTeamState__closure__16* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__16>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__16* this_ = new (storage) x10_util_Team__LocalTeamState__closure__16(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__16(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1545-1547";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__16_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__17_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__17 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__17> _itable;
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
        x10_util_Team__LocalTeamState__closure__17* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__17>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__17* this_ = new (storage) x10_util_Team__LocalTeamState__closure__17(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__17(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1578-1580";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__17_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__18_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__18_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__18 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__18> _itable;
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
        x10_util_Team__LocalTeamState__closure__18* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__18>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__18* this_ = new (storage) x10_util_Team__LocalTeamState__closure__18(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__18(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1559-1561";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__18_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__19_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__19 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__19> _itable;
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
        x10_util_Team__LocalTeamState__closure__19* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__19>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__19* this_ = new (storage) x10_util_Team__LocalTeamState__closure__19(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__19(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1567-1569";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__19_CLOSURE
#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__20_CLOSURE
#define X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class x10_util_Team__LocalTeamState__closure__20 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<x10_util_Team__LocalTeamState__closure__20> _itable;
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
        x10_util_Team__LocalTeamState__closure__20* storage = ::x10aux::alloc_z<x10_util_Team__LocalTeamState__closure__20>();
        buf.record_reference(storage);
        x10_int that_teamidcopy = buf.read<x10_int>();
        x10_util_Team__LocalTeamState__closure__20* this_ = new (storage) x10_util_Team__LocalTeamState__closure__20(that_teamidcopy);
        return this_;
    }
    
    x10_util_Team__LocalTeamState__closure__20(x10_int teamidcopy) : teamidcopy(teamidcopy) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/Team.x10:1590-1592";
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
        return "x10/util/Team.x10:1559-1561";
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
        return "x10/util/Team.x10:1567-1569";
    }

};

#endif // X10_UTIL_TEAM__LOCALTEAMSTATE__CLOSURE__22_CLOSURE
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

#ifndef X10_UTIL_TEAM__LOCALTEAMSTATE_H_collective_impl_3052
#define X10_UTIL_TEAM__LOCALTEAMSTATE_H_collective_impl_3052
template<class TPMGL(T)> void x10::util::Team__LocalTeamState::collective_impl(
  x10_int collType, ::x10::lang::Place root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_long dst_off,
  x10_long count, x10_int operation, ::x10::lang::Rail< x10_int >* offsets,
  ::x10::lang::Rail< x10_int >* counts) {
    
    //#line 1149 "x10/util/Team.x10"
    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)()) {
        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171497)), this->FMGL(teamid)), (&::x10::util::Team__LocalTeamState_Strings::sl__171503)), ::x10::util::Team__LocalTeamState::getCollName(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              collType)), (&::x10::util::Team__LocalTeamState_Strings::sl__171504)), ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::get()), (&::x10::util::Team__LocalTeamState_Strings::sl__171505)), root)))->c_str());
    }
    
    //#line 1151 "x10/util/Team.x10"
    x10_int teamidcopy = this->FMGL(teamid);
    
    //#line 1158 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>* sleepUntil =
      reinterpret_cast< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*> >(sizeof(x10_util_Team__LocalTeamState__closure__6)))x10_util_Team__LocalTeamState__closure__6(teamidcopy)));
    
    //#line 1202 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
      reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__7)))x10_util_Team__LocalTeamState__closure__7(this))),
      (&::x10::util::Team__LocalTeamState_Strings::sl__171511));
    
    //#line 1204 "x10/util/Team.x10"
    ::x10::util::Team__LocalTeamState__TreeStructure myLinks =
      this->getLinks(this->FMGL(myIndex), root, counts);
    
    //#line 1206 "x10/util/Team.x10"
    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)()) {
        
        //#line 1207 "x10/util/Team.x10"
        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171497)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171512)), (::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ((x10_long)-1ll)))
          ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)())
          : (::x10aux::nullCheck(this->FMGL(places))->__apply(
               myLinks->FMGL(parentIndex)))), (&::x10::util::Team__LocalTeamState_Strings::sl__171499)), (::x10aux::struct_equals(myLinks->FMGL(child1Index),
                                                                                                                                  ((x10_long)-1ll)))
          ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)())
          : (::x10aux::nullCheck(this->FMGL(places))->__apply(
               myLinks->FMGL(child1Index)))), (&::x10::util::Team__LocalTeamState_Strings::sl__171500)), (::x10aux::struct_equals(myLinks->FMGL(child2Index),
                                                                                                                                  ((x10_long)-1ll)))
          ? (::x10::lang::Place::FMGL(INVALID_PLACE__get)())
          : (::x10aux::nullCheck(this->FMGL(places))->__apply(
               myLinks->FMGL(child2Index))))))->c_str());
        
        //#line 1211 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(counts, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
        {
            
            //#line 1212 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171497)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171513)), myLinks->FMGL(countsSum))))->c_str());
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
    if (((::x10aux::struct_equals(collType, ((x10_int)5))) ||
        (::x10aux::struct_equals(collType, ((x10_int)6)))))
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
                                                                                    ((x10_int)2))) ||
                                                          (::x10aux::struct_equals(collType,
                                                                                   ((x10_int)3)))))))
    {
        
        //#line 1246 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171514)), this->FMGL(local_counts_sum))))->c_str());
        }
        
        //#line 1247 "x10/util/Team.x10"
        this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(this->FMGL(local_counts_sum), false)));
    } else 
    //#line 1248 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ((x10_int)9))) ||
        (::x10aux::struct_equals(collType, ((x10_int)10)))))
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
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171514)), this->FMGL(local_counts_sum))))->c_str());
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
    if (((((::x10aux::struct_equals(collType, ((x10_int)7))) ||
          (::x10aux::struct_equals(collType, ((x10_int)8))))) &&
        (!::x10aux::struct_equals(this->FMGL(local_child1Index),
                                  ((x10_long)-1ll))))) {
        
        //#line 1262 "x10/util/Team.x10"
        this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((::x10aux::struct_equals(this->FMGL(local_child2Index),
                                                                                                                                                ((x10_long)-1ll)))
                                         ? (((x10_long)1ll))
                                         : (((x10_long)2ll)), false)));
    }
    
    //#line 1265 "x10/util/Team.x10"
    if (((::x10aux::struct_equals(collType, ((x10_int)8))) ||
        (::x10aux::struct_equals(collType, ((x10_int)7)))))
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
          ((x10_int)1), ((x10_int)4));
    } else 
    //#line 1272 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child2Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1274 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)1), ((x10_int)3));
    } else {
        
        //#line 1276 "x10/util/Team.x10"
        ::x10aux::nullCheck(this->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)1), ((x10_int)2));
    }
    
    //#line 1280 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
      reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__8)))x10_util_Team__LocalTeamState__closure__8(this))),
      (&::x10::util::Team__LocalTeamState_Strings::sl__171515));
    
    //#line 1282 "x10/util/Team.x10"
    if (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)(teamidcopy))))->x10::util::Team__LocalTeamState::isValid())
    {
        
        //#line 1283 "x10/util/Team.x10"
        if (((::x10aux::struct_equals(collType, ((x10_int)5))) ||
            (::x10aux::struct_equals(collType, ((x10_int)6)))))
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
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171516)), this->FMGL(local_temp_buff)), (&::x10::util::Team__LocalTeamState_Strings::sl__171517)), dst)))->c_str());
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
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171518)), src), (&::x10::util::Team__LocalTeamState_Strings::sl__171517)), dst)))->c_str());
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
        if ((::x10aux::struct_equals(collType, ((x10_int)4))))
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
            if ((::x10aux::struct_equals(collType, ((x10_int)1))))
            {
                
                //#line 1307 "x10/util/Team.x10"
                ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
                  src, src_off, dst, dst_off, count);
            } else 
            //#line 1308 "x10/util/Team.x10"
            if (((::x10aux::struct_equals(collType, ((x10_int)2))) ||
                (::x10aux::struct_equals(collType, ((x10_int)3)))))
            {
                
                //#line 1309 "x10/util/Team.x10"
                this->FMGL(local_temp_buff) = (reinterpret_cast< ::x10::lang::Any*>(src));
            }
            
        } else {
            
            //#line 1313 "x10/util/Team.x10"
            ::x10::lang::GlobalRail<TPMGL(T)> gr;
            
            //#line 1314 "x10/util/Team.x10"
            if (((((((::x10aux::struct_equals(collType, ((x10_int)4))) ||
                (::x10aux::struct_equals(collType, ((x10_int)1)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)5)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)6)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)8)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)7)))))
            {
                
                //#line 1320 "x10/util/Team.x10"
                ::x10::lang::Rail< TPMGL(T) >* notnulldst =
                  (__extension__ ({
                    ::x10::lang::Rail< TPMGL(T) >* t__116427 =
                      dst;
                    if (!((!::x10aux::struct_equals(t__116427,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171519))));
                    }
                    t__116427;
                }))
                ;
                
                //#line 1321 "x10/util/Team.x10"
                gr = (__extension__ ({
                    ::x10::lang::GlobalRail<TPMGL(T)> alloc__118208 =
                       ::x10::lang::GlobalRail<TPMGL(T)>::_alloc();
                    (alloc__118208)->::x10::lang::GlobalRail<TPMGL(T)>::_constructor(
                      notnulldst);
                    alloc__118208;
                }))
                ;
            } else 
            //#line 1322 "x10/util/Team.x10"
            if (((((::x10aux::struct_equals(collType, ((x10_int)9))) ||
                (::x10aux::struct_equals(collType, ((x10_int)10)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)2)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)3)))))
            {
                
                //#line 1326 "x10/util/Team.x10"
                ::x10::lang::Rail< TPMGL(T) >* notNullTmp =
                  (__extension__ ({
                    ::x10::lang::Rail< TPMGL(T) >* t__116429 =
                      ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff));
                    if (!((!::x10aux::struct_equals(t__116429,
                                                    reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
                    {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171519))));
                    }
                    t__116429;
                }))
                ;
                
                //#line 1327 "x10/util/Team.x10"
                gr = (__extension__ ({
                    ::x10::lang::GlobalRail<TPMGL(T)> alloc__118209 =
                       ::x10::lang::GlobalRail<TPMGL(T)>::_alloc();
                    (alloc__118209)->::x10::lang::GlobalRail<TPMGL(T)>::_constructor(
                      notNullTmp);
                    alloc__118209;
                }))
                ;
            } else {
                
                //#line 1329 "x10/util/Team.x10"
                gr = (__extension__ ({
                    ::x10::lang::GlobalRail<TPMGL(T)> alloc__118210 =
                       ::x10::lang::GlobalRail<TPMGL(T)>::_alloc();
                    (alloc__118210)->::x10::lang::GlobalRail<TPMGL(T)>::_constructor(
                      ::x10::lang::Rail< TPMGL(T) >::_make());
                    alloc__118210;
                }))
                ;
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
            if (((::x10aux::struct_equals(collType, ((x10_int)8))) ||
                (::x10aux::struct_equals(collType, ((x10_int)7)))))
            {
                
                //#line 1337 "x10/util/Team.x10"
                childVal = (::x10aux::class_cast< ::x10::util::Team__DoubleIdx>(::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                                                  ((x10_long)0ll))));
            } else {
                
                //#line 1339 "x10/util/Team.x10"
                childVal = (__extension__ ({
                    ::x10::util::Team__DoubleIdx alloc__118211 =
                       ::x10::util::Team__DoubleIdx::_alloc();
                    
                    //#line 31 "x10/util/Team.x10"
                    alloc__118211->FMGL(value) = 0.0;
                    alloc__118211->FMGL(idx) = ((x10_int)0);
                    alloc__118211;
                }))
                ;
            }
            
            //#line 1341 "x10/util/Team.x10"
            x10_long childOffset = this->FMGL(local_offset);
            
            //#line 1342 "x10/util/Team.x10"
            x10_long childDstOffset = ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                            ((x10_long)(teamidcopy))))->FMGL(local_dst_off);
            
            //#line 1343 "x10/util/Team.x10"
            x10_long childTotalData;
            
            //#line 1344 "x10/util/Team.x10"
            if ((::x10aux::struct_equals(collType, ((x10_int)4))))
            {
                
                //#line 1345 "x10/util/Team.x10"
                childTotalData = ((count) * (((grandchildren) + (((x10_long)1ll)))));
            } else 
            //#line 1346 "x10/util/Team.x10"
            if (((((::x10aux::struct_equals(collType, ((x10_int)9))) ||
                (::x10aux::struct_equals(collType, ((x10_int)10)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)2)))) ||
                (::x10aux::struct_equals(collType, ((x10_int)3)))))
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
                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171497)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171520)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                                                                                                              myLinks->FMGL(parentIndex)))))->c_str());
            }
            
            //#line 1356 "x10/util/Team.x10"
            try {
                {
                    
                    //#line 1357 "x10/util/Team.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__153914 =
                      ::x10::xrx::Runtime::startFinish(::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                    try {
                        {
                            ::x10::xrx::Runtime::runAsync(
                              ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                myLinks->FMGL(parentIndex)),
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__9<TPMGL(T)>)))x10_util_Team__LocalTeamState__closure__9<TPMGL(T)>(sleepUntil, teamidcopy, collType, gr, childDstOffset, count, sourceIndex, childTotalData, childVal, childOffset, lastChild))),
                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3059) {
                        {
                            ::x10::lang::CheckedThrowable* ct__153911 =
                              __exc3059;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__153911);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__153914);
                }
                
                //#line 1474 "x10/util/Team.x10"
                if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                {
                    ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171497)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171542)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(parentIndex)))))->c_str());
                }
                
            }
            catch (::x10::lang::CheckedThrowable* __exc3060) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3060)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc3060);
                    {
                        
                        //#line 1477 "x10/util/Team.x10"
                        ::x10::lang::Rail< ::x10::lang::DeadPlaceException* >* dper =
                          ::x10aux::nullCheck(me)->template getExceptionsOfType< ::x10::lang::DeadPlaceException* >(
                            true);
                        
                        //#line 1478 "x10/util/Team.x10"
                        if ((((x10_long)(::x10aux::nullCheck(dper)->FMGL(size))) > (((x10_long)0ll))))
                        {
                            
                            //#line 1479 "x10/util/Team.x10"
                            if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                            {
                                ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171543)), ::x10aux::nullCheck(dper)->x10::lang::template Rail< ::x10::lang::DeadPlaceException* >::__apply(
                                                                                                                                                                                                                                                                                              ((x10_long)0ll)))))->c_str());
                            }
                            
                            //#line 1480 "x10/util/Team.x10"
                            ::x10::util::Team__LocalTeamState* this__153795 =
                              ::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                ((x10_long)(teamidcopy)));
                            
                            //#line 1066 "x10/util/Team.x10"
                            ::x10aux::nullCheck(::x10aux::nullCheck(this__153795)->FMGL(phase))->x10::util::concurrent::AtomicInteger::set(
                              ((x10_int)-1));
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
    if (((::x10aux::struct_equals(collType, ((x10_int)2))) ||
        (::x10aux::struct_equals(collType, ((x10_int)3)))))
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
                                                                      ((x10_int)2)))
              ? ((&::x10::util::Team__LocalTeamState_Strings::sl__171544))
              : ((&::x10::util::Team__LocalTeamState_Strings::sl__171545));
            
            //#line 1496 "x10/util/Team.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171546)), coll_name), (&::x10::util::Team__LocalTeamState_Strings::sl__171546)), count), (&::x10::util::Team__LocalTeamState_Strings::sl__171547)), temp_off_my_data), (&::x10::util::Team__LocalTeamState_Strings::sl__171548))))->c_str());
        }
        
        //#line 1498 "x10/util/Team.x10"
        ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
          (__extension__ ({
              ::x10::lang::Rail< TPMGL(T) >* t__117625 = ::x10aux::class_cast< ::x10::lang::Rail< TPMGL(T) >*>(this->FMGL(local_temp_buff));
              if (!((!::x10aux::struct_equals(t__117625, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::util::Team__LocalTeamState_Strings::sl__171519))));
              }
              t__117625;
          }))
          , temp_off_my_data, dst, dst_off, temp_count);
    }
    
    //#line 1501 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child1Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1502 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)4), ((x10_int)7));
    } else 
    //#line 1503 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(this->FMGL(local_child2Index),
                                 ((x10_long)-1ll)))) {
        
        //#line 1504 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)4), ((x10_int)6));
    } else {
        
        //#line 1506 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                  ((x10_long)(teamidcopy))))->FMGL(phase))->x10::util::concurrent::AtomicInteger::compareAndSet(
          ((x10_int)4), ((x10_int)5));
    }
    
    //#line 1509 "x10/util/Team.x10"
    ::x10::lang::VoidFun_0_2< ::x10::lang::Fun_0_0<x10_boolean>*, ::x10::lang::String*>::__apply(::x10aux::nullCheck(sleepUntil), 
      reinterpret_cast< ::x10::lang::Fun_0_0<x10_boolean>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_boolean> >(sizeof(x10_util_Team__LocalTeamState__closure__14)))x10_util_Team__LocalTeamState__closure__14(teamidcopy))),
      (&::x10::util::Team__LocalTeamState_Strings::sl__171549));
    
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
          ((x10_int)7), ((x10_int)0));
        
        //#line 1527 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171497)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171550)), ::x10::util::Team__LocalTeamState::getCollName(
                                                                                                                                                                                                                                                                                                                                                                                                          collType))))->c_str());
        }
        
    } else {
        
        //#line 1531 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(myLinks->FMGL(parentIndex),
                                      ((x10_long)-1ll))))
        {
            
            //#line 1532 "x10/util/Team.x10"
            if (!((__extension__ ({
                    ::x10::lang::Place this__153654 = ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                        myLinks->FMGL(parentIndex));
                    x10rt_is_place_dead((x10_int)this__153654->FMGL(id));
                }))
                )) {
                
                //#line 1533 "x10/util/Team.x10"
                try {
                    
                    //#line 1534 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171551)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(parentIndex))), (&::x10::util::Team__LocalTeamState_Strings::sl__171552))))->c_str());
                    }
                    {
                        
                        //#line 1535 "x10/util/Team.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__153922 =
                          ::x10::xrx::Runtime::startFinish(
                            ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                        try {
                            {
                                ::x10::xrx::Runtime::runAsync(
                                  ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                    myLinks->FMGL(parentIndex)),
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__15)))x10_util_Team__LocalTeamState__closure__15(teamidcopy))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3061) {
                            {
                                ::x10::lang::CheckedThrowable* ct__153919 =
                                  __exc3061;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__153919);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__153922);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3062) {
                    if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3062)) {
                        ::x10::lang::MultipleExceptions* me =
                          static_cast< ::x10::lang::MultipleExceptions*>(__exc3062);
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
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171553)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      parentLinks->FMGL(parentIndex))), (&::x10::util::Team__LocalTeamState_Strings::sl__171552))))->c_str());
                        }
                        {
                            
                            //#line 1545 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153930 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        parentLinks->FMGL(parentIndex)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__16)))x10_util_Team__LocalTeamState__closure__16(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3063) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153927 =
                                      __exc3063;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153927);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153930);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3064) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3064)) {
                            ::x10::lang::MultipleExceptions* me =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3064);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
            }
            
        }
        
        //#line 1574 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(myLinks->FMGL(child1Index),
                                      ((x10_long)-1ll))))
        {
            
            //#line 1575 "x10/util/Team.x10"
            if (!((__extension__ ({
                    ::x10::lang::Place this__153660 = ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                        myLinks->FMGL(child1Index));
                    x10rt_is_place_dead((x10_int)this__153660->FMGL(id));
                }))
                )) {
                
                //#line 1576 "x10/util/Team.x10"
                try {
                    
                    //#line 1577 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171554)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(child1Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171555))))->c_str());
                    }
                    {
                        
                        //#line 1578 "x10/util/Team.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__153938 =
                          ::x10::xrx::Runtime::startFinish(
                            ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                        try {
                            {
                                ::x10::xrx::Runtime::runAsync(
                                  ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                    myLinks->FMGL(child1Index)),
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__17)))x10_util_Team__LocalTeamState__closure__17(teamidcopy))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3065) {
                            {
                                ::x10::lang::CheckedThrowable* ct__153935 =
                                  __exc3065;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__153935);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__153938);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3066) {
                    if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3066)) {
                        ::x10::lang::MultipleExceptions* me =
                          static_cast< ::x10::lang::MultipleExceptions*>(__exc3066);
                        {
                         
                        }
                    } else {
                        throw;
                    }
                }
            } else {
                
                //#line 1583 "x10/util/Team.x10"
                x10_long childIndex__153804 = myLinks->FMGL(child1Index);
                
                //#line 1555 "x10/util/Team.x10"
                ::x10::util::Team__LocalTeamState__TreeStructure childLinks__153801 =
                  this->getLinks(childIndex__153804, root,
                                 counts);
                
                //#line 1556 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(childLinks__153801->FMGL(child1Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1557 "x10/util/Team.x10"
                    try {
                        
                        //#line 1558 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171556)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      childLinks__153801->FMGL(child1Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171552))))->c_str());
                        }
                        {
                            
                            //#line 1559 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153946 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        childLinks__153801->FMGL(child1Index)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__18)))x10_util_Team__LocalTeamState__closure__18(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3067) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153943 =
                                      __exc3067;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153943);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153946);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3068) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3068)) {
                            ::x10::lang::MultipleExceptions* me__153802 =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3068);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
                //#line 1564 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(childLinks__153801->FMGL(child2Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1565 "x10/util/Team.x10"
                    try {
                        
                        //#line 1566 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171557)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      childLinks__153801->FMGL(child2Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171552))))->c_str());
                        }
                        {
                            
                            //#line 1567 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153954 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        childLinks__153801->FMGL(child2Index)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__19)))x10_util_Team__LocalTeamState__closure__19(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3069) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153951 =
                                      __exc3069;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153951);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153954);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3070) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3070)) {
                            ::x10::lang::MultipleExceptions* me__153803 =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3070);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
            }
            
        }
        
        //#line 1586 "x10/util/Team.x10"
        if ((!::x10aux::struct_equals(myLinks->FMGL(child2Index),
                                      ((x10_long)-1ll))))
        {
            
            //#line 1587 "x10/util/Team.x10"
            if (!((__extension__ ({
                    ::x10::lang::Place this__153677 = ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                        myLinks->FMGL(child2Index));
                    x10rt_is_place_dead((x10_int)this__153677->FMGL(id));
                }))
                )) {
                
                //#line 1588 "x10/util/Team.x10"
                try {
                    
                    //#line 1589 "x10/util/Team.x10"
                    if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                    {
                        ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171558)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                  myLinks->FMGL(child2Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171552))))->c_str());
                    }
                    {
                        
                        //#line 1590 "x10/util/Team.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__153962 =
                          ::x10::xrx::Runtime::startFinish(
                            ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                        try {
                            {
                                ::x10::xrx::Runtime::runAsync(
                                  ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                    myLinks->FMGL(child2Index)),
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__20)))x10_util_Team__LocalTeamState__closure__20(teamidcopy))),
                                  ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc3071) {
                            {
                                ::x10::lang::CheckedThrowable* ct__153959 =
                                  __exc3071;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__153959);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__153962);
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc3072) {
                    if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3072)) {
                        ::x10::lang::MultipleExceptions* me =
                          static_cast< ::x10::lang::MultipleExceptions*>(__exc3072);
                        {
                         
                        }
                    } else {
                        throw;
                    }
                }
            } else {
                
                //#line 1595 "x10/util/Team.x10"
                x10_long childIndex__153811 = myLinks->FMGL(child2Index);
                
                //#line 1555 "x10/util/Team.x10"
                ::x10::util::Team__LocalTeamState__TreeStructure childLinks__153808 =
                  this->getLinks(childIndex__153811, root,
                                 counts);
                
                //#line 1556 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(childLinks__153808->FMGL(child1Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1557 "x10/util/Team.x10"
                    try {
                        
                        //#line 1558 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171556)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      childLinks__153808->FMGL(child1Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171552))))->c_str());
                        }
                        {
                            
                            //#line 1559 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153970 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        childLinks__153808->FMGL(child1Index)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__21)))x10_util_Team__LocalTeamState__closure__21(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3073) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153967 =
                                      __exc3073;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153967);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153970);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3074) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3074)) {
                            ::x10::lang::MultipleExceptions* me__153809 =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3074);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
                //#line 1564 "x10/util/Team.x10"
                if ((!::x10aux::struct_equals(childLinks__153808->FMGL(child2Index),
                                              ((x10_long)-1ll))))
                {
                    
                    //#line 1565 "x10/util/Team.x10"
                    try {
                        
                        //#line 1566 "x10/util/Team.x10"
                        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
                        {
                            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171557)), ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                                                                                                                                                                                                                                                                                                      childLinks__153808->FMGL(child2Index))), (&::x10::util::Team__LocalTeamState_Strings::sl__171552))))->c_str());
                        }
                        {
                            
                            //#line 1567 "x10/util/Team.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__153978 =
                              ::x10::xrx::Runtime::startFinish(
                                ::x10::compiler::Pragma::FMGL(FINISH_ASYNC__get)());
                            try {
                                {
                                    ::x10::xrx::Runtime::runAsync(
                                      ::x10aux::nullCheck(this->FMGL(places))->__apply(
                                        childLinks__153808->FMGL(child2Index)),
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_Team__LocalTeamState__closure__22)))x10_util_Team__LocalTeamState__closure__22(teamidcopy))),
                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc3075) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__153975 =
                                      __exc3075;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__153975);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__153978);
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc3076) {
                        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc3076)) {
                            ::x10::lang::MultipleExceptions* me__153810 =
                              static_cast< ::x10::lang::MultipleExceptions*>(__exc3076);
                            {
                             
                            }
                        } else {
                            throw;
                        }
                    }
                }
                
            }
            
        }
        
        //#line 1599 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(DEBUGINTERNALS__get)())
        {
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::x10::util::Team__LocalTeamState_Strings::sl__171497)), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171559)), ::x10::util::Team__LocalTeamState::getCollName(
                                                                                                                                                                                                                                                                                                                                                                                                          collType))))->c_str());
        }
        
        //#line 1601 "x10/util/Team.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team__LocalTeamState_Strings::sl__171560), teamidcopy), (&::x10::util::Team__LocalTeamState_Strings::sl__171561)))));
    }
    
}
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE_H_collective_impl_3052
#endif // X10_UTIL_TEAM__LOCALTEAMSTATE_H_GENERICS
#endif // __X10_UTIL_TEAM__LOCALTEAMSTATE_H_NODEPS
