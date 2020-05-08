#ifndef __X10_UTIL_TEAM_H
#define __X10_UTIL_TEAM_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace util { 
class Team__LocalTeamState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace compiler { 
class NoInline;
} } 
namespace x10 { namespace compiler { 
class NoReturn;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace util { 
class Team__DoubleIdx;
} } 
namespace x10 { namespace lang { 
class SparsePlaceGroup;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class Team_Strings {
  public:
    static ::x10::lang::String sl__171383;
    static ::x10::lang::String sl__171376;
    static ::x10::lang::String sl__171394;
    static ::x10::lang::String sl__171388;
    static ::x10::lang::String sl__171372;
    static ::x10::lang::String sl__171384;
    static ::x10::lang::String sl__171381;
    static ::x10::lang::String sl__171392;
    static ::x10::lang::String sl__171373;
    static ::x10::lang::String sl__171374;
    static ::x10::lang::String sl__171382;
    static ::x10::lang::String sl__171391;
    static ::x10::lang::String sl__171390;
    static ::x10::lang::String sl__171379;
    static ::x10::lang::String sl__171375;
    static ::x10::lang::String sl__171386;
    static ::x10::lang::String sl__171395;
    static ::x10::lang::String sl__171370;
    static ::x10::lang::String sl__171377;
    static ::x10::lang::String sl__171378;
    static ::x10::lang::String sl__171380;
    static ::x10::lang::String sl__171371;
    static ::x10::lang::String sl__171389;
    static ::x10::lang::String sl__171385;
    static ::x10::lang::String sl__171393;
    static ::x10::lang::String sl__171387;
};

class Team   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::util::Team* operator->() { return this; }
    
    static ::x10aux::itable_entry _itables[2];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::util::Team > _itable_0;
    
    static ::x10aux::itable_entry _iboxitables[2];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::util::Team _alloc(){::x10::util::Team t; return t; }
    
    /* Static field: FMGL(DEBUG) */
    static const x10_boolean FMGL(DEBUG) = false;
    static x10_boolean FMGL(DEBUG__get)();
    
    /* Static field: FMGL(DEBUGINTERNALS) */
    static x10_boolean FMGL(DEBUGINTERNALS);
    static void FMGL(DEBUGINTERNALS__do_init)();
    static void FMGL(DEBUGINTERNALS__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(DEBUGINTERNALS__status);
    static ::x10::lang::CheckedThrowable* FMGL(DEBUGINTERNALS__exception);
    static x10_boolean FMGL(DEBUGINTERNALS__get)();
    
    /* Static field: FMGL(WORLD) */
    static ::x10::util::Team FMGL(WORLD);
    static void FMGL(WORLD__do_init)();
    static void FMGL(WORLD__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(WORLD__status);
    static ::x10::lang::CheckedThrowable* FMGL(WORLD__exception);
    static ::x10::util::Team FMGL(WORLD__get)();
    
    /* Static field: FMGL(roles) */
    static ::x10::util::GrowableRail<x10_int>* FMGL(roles);
    static void FMGL(roles__do_init)();
    static void FMGL(roles__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(roles__status);
    static ::x10::lang::CheckedThrowable* FMGL(roles__exception);
    static ::x10::util::GrowableRail<x10_int>* FMGL(roles__get)();
    
    /* Static field: FMGL(state) */
    static ::x10::util::GrowableRail< ::x10::util::Team__LocalTeamState*>* FMGL(state);
    static void FMGL(state__do_init)();
    static void FMGL(state__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(state__status);
    static ::x10::lang::CheckedThrowable* FMGL(state__exception);
    static ::x10::util::GrowableRail< ::x10::util::Team__LocalTeamState*>*
      FMGL(state__get)();
    
    x10_int FMGL(collectiveSupportLevel);
    
    /* Static field: FMGL(X10RT_COLL_NOCOLLECTIVES) */
    static const x10_int FMGL(X10RT_COLL_NOCOLLECTIVES) = 0;
    static x10_int FMGL(X10RT_COLL_NOCOLLECTIVES__get)();
    
    /* Static field: FMGL(X10RT_COLL_BARRIERONLY) */
    static const x10_int FMGL(X10RT_COLL_BARRIERONLY) = 1;
    static x10_int FMGL(X10RT_COLL_BARRIERONLY__get)();
    
    /* Static field: FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES) */
    static const x10_int FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES) = 2;
    static x10_int FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)();
    
    /* Static field: FMGL(X10RT_COLL_NONBLOCKINGBARRIER) */
    static const x10_int FMGL(X10RT_COLL_NONBLOCKINGBARRIER) = 3;
    static x10_int FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)();
    
    /* Static field: FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES) */
    static const x10_int FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES) = 4;
    static x10_int FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)();
    
    /* Static field: FMGL(FORCE_X10_COLLECTIVES) */
    static x10_boolean FMGL(FORCE_X10_COLLECTIVES);
    static void FMGL(FORCE_X10_COLLECTIVES__do_init)();
    static void FMGL(FORCE_X10_COLLECTIVES__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(FORCE_X10_COLLECTIVES__status);
    static ::x10::lang::CheckedThrowable* FMGL(FORCE_X10_COLLECTIVES__exception);
    static x10_boolean FMGL(FORCE_X10_COLLECTIVES__get)();
    
    x10_int FMGL(id);
    
    x10_int id() {
        return (*this)->FMGL(id);
        
    }
    void _constructor(x10_int id, ::x10::lang::PlaceGroup* places, x10_long role);
    
    static ::x10::util::Team _make(x10_int id, ::x10::lang::PlaceGroup* places,
                                   x10_long role);
    
    void _constructor(::x10::lang::PlaceGroup* places);
    
    static ::x10::util::Team _make(::x10::lang::PlaceGroup* places);
    
    static void nativeMake(::x10::lang::Rail< x10_int >* places, x10_int count,
                           ::x10::lang::Rail< x10_int >* result);
    static x10_int collectiveSupport() {
        
        //#line 140 "x10/util/Team.x10"
        if (::x10::util::Team::FMGL(FORCE_X10_COLLECTIVES__get)()) {
            return ((x10_int)0);
            
        } else {
            
            //#line 141 "x10/util/Team.x10"
            return ::x10::util::Team::nativeCollectiveSupport();
            
        }
        
    }
    static x10_int nativeCollectiveSupport() {
        return x10rt_coll_support();
    }
    static void checkBounds(x10_long index, x10_long size);
    static void raiseBoundsError(x10_long index, x10_long size) X10_PRAGMA_NORETURN ;
    x10_long size();
    static x10_int nativeSize(x10_int id) {
        return (x10_int)x10rt_team_sz(id);
    }
    void barrier();
    void nativeBarrier();
    static void nativeBarrier(x10_int id, x10_int role) {
        x10rt_barrier(id, role, ::x10aux::coll_handler, ::x10aux::coll_enter());
    }
    void barrierIgnoreExceptions();
    x10_int agree(x10_int flag);
    static x10_boolean nativeAgree(x10_int id, x10_int role, ::x10::lang::Rail< x10_int >* src,
                                   ::x10::lang::Rail< x10_int >* dst);
    template<class TPMGL(T)> void scatter(::x10::lang::Place root,
                                          ::x10::lang::Rail< TPMGL(T) >* src,
                                          x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
                                          x10_long dst_off,
                                          x10_long count);
    template<class TPMGL(T)> static void nativeScatter(x10_int id,
                                                       x10_int role,
                                                       x10_int root,
                                                       ::x10::lang::Rail< TPMGL(T) >* src,
                                                       x10_int src_off,
                                                       ::x10::lang::Rail< TPMGL(T) >* dst,
                                                       x10_int dst_off,
                                                       x10_int count);
    template<class TPMGL(T)> void scatterv(::x10::lang::Place root,
                                           ::x10::lang::Rail< TPMGL(T) >* src,
                                           x10_long src_off,
                                           ::x10::lang::Rail< TPMGL(T) >* dst,
                                           x10_long dst_off,
                                           ::x10::lang::Rail< x10_int >* scounts);
    template<class TPMGL(T)> static x10_boolean nativeScatterv(
      x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
      x10_int src_off, ::x10::lang::Rail< x10_int >* scounts,
      ::x10::lang::Rail< x10_int >* soffsets, ::x10::lang::Rail< TPMGL(T) >* dst,
      x10_int dst_off);
    template<class TPMGL(T)> void gather(::x10::lang::Place root,
                                         ::x10::lang::Rail< TPMGL(T) >* src,
                                         x10_long src_off,
                                         ::x10::lang::Rail< TPMGL(T) >* dst,
                                         x10_long dst_off,
                                         x10_long count);
    template<class TPMGL(T)> static void nativeGather(x10_int id,
                                                      x10_int role,
                                                      x10_int root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_int src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_int dst_off,
                                                      x10_int count);
    template<class TPMGL(T)> void gatherv(::x10::lang::Place root,
                                          ::x10::lang::Rail< TPMGL(T) >* src,
                                          x10_long src_off,
                                          ::x10::lang::Rail< TPMGL(T) >* dst,
                                          x10_long dst_off,
                                          ::x10::lang::Rail< x10_int >* dcounts);
    template<class TPMGL(T)> static x10_boolean nativeGatherv(
      x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
      x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
      x10_int dst_off, ::x10::lang::Rail< x10_int >* dcounts,
      ::x10::lang::Rail< x10_int >* doffsets);
    template<class TPMGL(T)> void bcast(::x10::lang::Place root,
                                        ::x10::lang::Rail< TPMGL(T) >* src,
                                        x10_long src_off,
                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                        x10_long dst_off,
                                        x10_long count);
    template<class TPMGL(T)> static x10_boolean nativeBcast(
      x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
      x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
      x10_int dst_off, x10_int count);
    template<class TPMGL(T)> void alltoall(::x10::lang::Rail< TPMGL(T) >* src,
                                           x10_long src_off,
                                           ::x10::lang::Rail< TPMGL(T) >* dst,
                                           x10_long dst_off,
                                           x10_long count);
    template<class TPMGL(T)> static void nativeAlltoall(x10_int id,
                                                        x10_int role,
                                                        ::x10::lang::Rail< TPMGL(T) >* src,
                                                        x10_int src_off,
                                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                                        x10_int dst_off,
                                                        x10_int count);
    /* Static field: FMGL(ADD) */
    static const x10_int FMGL(ADD) = 0;
    static x10_int FMGL(ADD__get)();
    
    /* Static field: FMGL(MUL) */
    static const x10_int FMGL(MUL) = 1;
    static x10_int FMGL(MUL__get)();
    
    /* Static field: FMGL(AND) */
    static const x10_int FMGL(AND) = 3;
    static x10_int FMGL(AND__get)();
    
    /* Static field: FMGL(OR) */
    static const x10_int FMGL(OR) = 4;
    static x10_int FMGL(OR__get)();
    
    /* Static field: FMGL(XOR) */
    static const x10_int FMGL(XOR) = 5;
    static x10_int FMGL(XOR__get)();
    
    /* Static field: FMGL(MAX) */
    static const x10_int FMGL(MAX) = 6;
    static x10_int FMGL(MAX__get)();
    
    /* Static field: FMGL(MIN) */
    static const x10_int FMGL(MIN) = 7;
    static x10_int FMGL(MIN__get)();
    
    template<class TPMGL(T)> void reduce(::x10::lang::Place root,
                                         ::x10::lang::Rail< TPMGL(T) >* src,
                                         x10_long src_off,
                                         ::x10::lang::Rail< TPMGL(T) >* dst,
                                         x10_long dst_off,
                                         x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_boolean >* src,
                x10_long src_off, ::x10::lang::Rail< x10_boolean >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_byte >* src,
                x10_long src_off, ::x10::lang::Rail< x10_byte >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_ubyte >* src,
                x10_long src_off, ::x10::lang::Rail< x10_ubyte >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_short >* src,
                x10_long src_off, ::x10::lang::Rail< x10_short >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_ushort >* src,
                x10_long src_off, ::x10::lang::Rail< x10_ushort >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_int >* src,
                x10_long src_off, ::x10::lang::Rail< x10_int >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_uint >* src,
                x10_long src_off, ::x10::lang::Rail< x10_uint >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_long >* src,
                x10_long src_off, ::x10::lang::Rail< x10_long >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_ulong >* src,
                x10_long src_off, ::x10::lang::Rail< x10_ulong >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_float >* src,
                x10_long src_off, ::x10::lang::Rail< x10_float >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    void reduce(::x10::lang::Place root, ::x10::lang::Rail< x10_double >* src,
                x10_long src_off, ::x10::lang::Rail< x10_double >* dst,
                x10_long dst_off, x10_long count, x10_int op);
    template<class TPMGL(T)> void reduce_builtin(::x10::lang::Place root,
                                                 ::x10::lang::Rail< TPMGL(T) >* src,
                                                 x10_long src_off,
                                                 ::x10::lang::Rail< TPMGL(T) >* dst,
                                                 x10_long dst_off,
                                                 x10_long count,
                                                 x10_int op);
    template<class TPMGL(T)> static void nativeReduce(x10_int id,
                                                      x10_int role,
                                                      x10_int root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_int src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_int dst_off,
                                                      x10_int count,
                                                      x10_int op);
    x10_boolean reduce(::x10::lang::Place root, x10_boolean src,
                       x10_int op);
    x10_byte reduce(::x10::lang::Place root, x10_byte src,
                    x10_int op);
    x10_ubyte reduce(::x10::lang::Place root, x10_ubyte src,
                     x10_int op);
    x10_short reduce(::x10::lang::Place root, x10_short src,
                     x10_int op);
    x10_ushort reduce(::x10::lang::Place root, x10_ushort src,
                      x10_int op);
    x10_uint reduce(::x10::lang::Place root, x10_uint src,
                    x10_int op);
    x10_int reduce(::x10::lang::Place root, x10_int src, x10_int op);
    x10_long reduce(::x10::lang::Place root, x10_long src,
                    x10_int op);
    x10_ulong reduce(::x10::lang::Place root, x10_ulong src,
                     x10_int op);
    x10_float reduce(::x10::lang::Place root, x10_float src,
                     x10_int op);
    x10_double reduce(::x10::lang::Place root, x10_double src,
                      x10_int op);
    template<class TPMGL(T)> TPMGL(T) reduce(::x10::lang::Place root,
                                             TPMGL(T) src,
                                             x10_int op);
    template<class TPMGL(T)> static void nativeReduce(x10_int id,
                                                      x10_int role,
                                                      x10_int root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_int op);
    template<class TPMGL(T)> void allreduce(::x10::lang::Rail< TPMGL(T) >* src,
                                            x10_long src_off,
                                            ::x10::lang::Rail< TPMGL(T) >* dst,
                                            x10_long dst_off,
                                            x10_long count,
                                            x10_int op);
    void allreduce(::x10::lang::Rail< x10_boolean >* src,
                   x10_long src_off, ::x10::lang::Rail< x10_boolean >* dst,
                   x10_long dst_off, x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_byte >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_byte >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_ubyte >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_ubyte >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_short >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_short >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_ushort >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_ushort >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_int >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_int >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_uint >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_uint >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_long >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_long >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_ulong >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_ulong >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_float >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_float >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    void allreduce(::x10::lang::Rail< x10_double >* src, x10_long src_off,
                   ::x10::lang::Rail< x10_double >* dst, x10_long dst_off,
                   x10_long count, x10_int op);
    template<class TPMGL(T)> void allreduce_builtin(::x10::lang::Rail< TPMGL(T) >* src,
                                                    x10_long src_off,
                                                    ::x10::lang::Rail< TPMGL(T) >* dst,
                                                    x10_long dst_off,
                                                    x10_long count,
                                                    x10_int op);
    template<class TPMGL(T)> static x10_boolean nativeAllreduce(
      x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
      x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
      x10_int dst_off, x10_int count, x10_int op);
    x10_boolean allreduce(x10_boolean src, x10_int op);
    x10_byte allreduce(x10_byte src, x10_int op);
    x10_ubyte allreduce(x10_ubyte src, x10_int op);
    x10_short allreduce(x10_short src, x10_int op);
    x10_ushort allreduce(x10_ushort src, x10_int op);
    x10_uint allreduce(x10_uint src, x10_int op);
    x10_int allreduce(x10_int src, x10_int op);
    x10_long allreduce(x10_long src, x10_int op);
    x10_ulong allreduce(x10_ulong src, x10_int op);
    x10_float allreduce(x10_float src, x10_int op);
    x10_double allreduce(x10_double src, x10_int op);
    template<class TPMGL(T)> TPMGL(T) allreduce(TPMGL(T) src,
                                                x10_int op);
    template<class TPMGL(T)> static void nativeAllreduce(
      x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
      ::x10::lang::Rail< TPMGL(T) >* dst, x10_int op);
    x10_int indexOfMax(x10_double v, x10_int idx);
    static void nativeIndexOfMax(x10_int id, x10_int role,
                                 ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* src,
                                 ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* dst);
    x10_int indexOfMin(x10_double v, x10_int idx);
    static void nativeIndexOfMin(x10_int id, x10_int role,
                                 ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* src,
                                 ::x10::lang::Rail< ::x10::util::Team__DoubleIdx >* dst);
    ::x10::util::Team split(x10_int color, x10_long new_role);
    static void nativeSplit(x10_int id, x10_int role, x10_int color,
                            x10_int new_role, ::x10::lang::Rail< x10_int >* result);
    void _kwd__delete();
    static void nativeDel(x10_int id, x10_int role) {
        x10rt_team_del(id, role, ::x10aux::coll_handler, ::x10aux::coll_enter());
    }
    ::x10::lang::String* toString();
    x10_boolean equals(::x10::util::Team that) {
        return (::x10aux::struct_equals(that->FMGL(id), (*this)->FMGL(id)));
        
    }
    x10_boolean equals(::x10::lang::Any* that);
    x10_int hashCode() {
        return (*this)->FMGL(id);
        
    }
    ::x10::lang::String* typeName();
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::util::Team other) {
        return ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                         other->FMGL(collectiveSupportLevel))) &&
        (::x10aux::struct_equals((*this)->FMGL(id), other->FMGL(id))));
        
    }
    ::x10::util::Team x10__util__Team____this__x10__util__Team(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_x10_util_Team() {
     
    }
    
    static void _serialize(::x10::util::Team this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::util::Team _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::util::Team this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_UTIL_TEAM_H

namespace x10 { namespace util { 
class Team;
} } 

#ifndef X10_UTIL_TEAM_H_NODEPS
#define X10_UTIL_TEAM_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/System.h>
#include <x10/lang/String.h>
#include <x10/lang/Place.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Long.h>
#include <x10/xrx/Runtime.h>
#include <x10/util/GrowableRail.h>
#include <x10/util/Team__LocalTeamState.h>
#include <x10/lang/Rail.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/Inline.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/NoInline.h>
#include <x10/compiler/NoReturn.h>
#include <x10/lang/Exception.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Byte.h>
#include <x10/lang/UByte.h>
#include <x10/lang/Short.h>
#include <x10/lang/UShort.h>
#include <x10/lang/UInt.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Float.h>
#include <x10/lang/Double.h>
#include <x10/util/Team__DoubleIdx.h>
#include <x10/lang/SparsePlaceGroup.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_TEAM_H_GENERICS
#define X10_UTIL_TEAM_H_GENERICS
inline x10_boolean x10::util::Team::FMGL(DEBUG__get)() {
    return x10::util::Team::FMGL(DEBUG);
}

inline x10_boolean x10::util::Team::FMGL(DEBUGINTERNALS__get)() {
    if (FMGL(DEBUGINTERNALS__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(DEBUGINTERNALS__init)();
    }
    return x10::util::Team::FMGL(DEBUGINTERNALS);
}

inline ::x10::util::Team x10::util::Team::FMGL(WORLD__get)() {
    if (FMGL(WORLD__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(WORLD__init)();
    }
    return x10::util::Team::FMGL(WORLD);
}

inline ::x10::util::GrowableRail<x10_int>* x10::util::Team::FMGL(roles__get)() {
    if (FMGL(roles__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(roles__init)();
    }
    return x10::util::Team::FMGL(roles);
}

inline ::x10::util::GrowableRail< ::x10::util::Team__LocalTeamState*>* x10::util::Team::FMGL(state__get)() {
    if (FMGL(state__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(state__init)();
    }
    return x10::util::Team::FMGL(state);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_NOCOLLECTIVES__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_NOCOLLECTIVES);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_BARRIERONLY__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_BARRIERONLY);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_ALLBLOCKINGCOLLECTIVES);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_NONBLOCKINGBARRIER);
}

inline x10_int x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES__get)() {
    return x10::util::Team::FMGL(X10RT_COLL_ALLNONBLOCKINGCOLLECTIVES);
}

inline x10_boolean x10::util::Team::FMGL(FORCE_X10_COLLECTIVES__get)() {
    if (FMGL(FORCE_X10_COLLECTIVES__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(FORCE_X10_COLLECTIVES__init)();
    }
    return x10::util::Team::FMGL(FORCE_X10_COLLECTIVES);
}

#ifndef X10_UTIL_TEAM_H_scatter_2931
#define X10_UTIL_TEAM_H_scatter_2931
template<class TPMGL(T)> void x10::util::Team::scatter(::x10::lang::Place root,
                                                       ::x10::lang::Rail< TPMGL(T) >* src,
                                                       x10_long src_off,
                                                       ::x10::lang::Rail< TPMGL(T) >* dst,
                                                       x10_long dst_off,
                                                       x10_long count) {
    
    //#line 250 "x10/util/Team.x10"
    if ((true && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                          root)))) {
        x10_long index__153704 = ((((src_off) + ((((*this)->x10::util::Team::size()) * (count))))) - (((x10_long)1ll)));
        x10_long size__153705 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153704) < (((x10_long)0ll))) ||
                      ((index__153704) >= (size__153705))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153704,
                                                size__153705);
        }
        
    }
    
    //#line 251 "x10/util/Team.x10"
    x10_long index__153706 = ((((dst_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153707 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153706) < (((x10_long)0ll))) ||
                  ((index__153706) >= (size__153707))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153706,
                                            size__153707);
    }
    
    //#line 252 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 253 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153830 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeScatter< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) ((__extension__ ({
                               ::x10::lang::Place this__153391 =
                                 ::x10::lang::Place::_make(::x10aux::here);
                               this__153391->FMGL(id);
                           }))
                           ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                    ((x10_long)((*this)->FMGL(id))))),
                      ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
                      dst, ((x10_int) (dst_off)), ((x10_int) (count)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2932) {
                {
                    ::x10::lang::CheckedThrowable* ct__153828 =
                      __exc2932;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153828);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153830);
        }
    } else 
    //#line 254 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 255 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 256 "x10/util/Team.x10"
        ::x10::util::Team::template nativeScatter< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) ((__extension__ ({
                   ::x10::lang::Place this__153394 = ::x10::lang::Place::_make(::x10aux::here);
                   this__153394->FMGL(id);
               }))
               ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                        ((x10_long)((*this)->FMGL(id))))),
          ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
          dst, ((x10_int) (dst_off)), ((x10_int) (count)));
    } else {
        
        //#line 259 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)2), root, src, src_off, dst, dst_off,
          count, ((x10_int)0), ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_scatter_2931
#ifndef X10_UTIL_TEAM_H_nativeScatter_2933
#define X10_UTIL_TEAM_H_nativeScatter_2933
template<class TPMGL(T)> void x10::util::Team::nativeScatter(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count) {
    x10rt_scatter(id, role, root, &src->raw[src_off], &dst->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeScatter_2933
#ifndef X10_UTIL_TEAM_H_scatterv_2934
#define X10_UTIL_TEAM_H_scatterv_2934
template<class TPMGL(T)> void x10::util::Team::scatterv(::x10::lang::Place root,
                                                        ::x10::lang::Rail< TPMGL(T) >* src,
                                                        x10_long src_off,
                                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                                        x10_long dst_off,
                                                        ::x10::lang::Rail< x10_int >* scounts) {
    
    //#line 288 "x10/util/Team.x10"
    if ((true && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                          root)))) {
        
        //#line 289 "x10/util/Team.x10"
        x10_int scounts_sum = (__extension__ ({
            
            //#line 132 "x10/util/RailUtils.x10"
            x10_int accum__153400 = ((x10_int)0);
            
            //#line 133 "x10/util/RailUtils.x10"
            x10_long i__96596max__153711 = (x10_long)(::x10aux::nullCheck(scounts)->FMGL(size));
            {
                x10_long i__153712;
                for (i__153712 = ((x10_long)0ll); ((i__153712) < (i__96596max__153711));
                     i__153712 = ((i__153712) + (((x10_long)1ll))))
                {
                    
                    //#line 134 "x10/util/RailUtils.x10"
                    accum__153400 = (__extension__ ({
                        x10_int b__153709 = ::x10aux::nullCheck(scounts)->x10::lang::template Rail< x10_int >::__apply(
                                              i__153712);
                        ((accum__153400) + (b__153709));
                    }))
                    ;
                }
            }
            accum__153400;
        }))
        ;
        
        //#line 290 "x10/util/Team.x10"
        x10_long index__153714 = ((((src_off) + (((x10_long)(scounts_sum))))) - (((x10_long)1ll)));
        x10_long size__153715 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153714) < (((x10_long)0ll))) ||
                      ((index__153714) >= (size__153715))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153714,
                                                size__153715);
        }
        
    }
    
    //#line 292 "x10/util/Team.x10"
    x10_int my_role = (((*this)->FMGL(collectiveSupportLevel)) > (((x10_int)0)))
      ? ((::x10aux::struct_equals((*this)->FMGL(id), ((x10_int)0)))
           ? (((x10_int) ((__extension__ ({
                  ::x10::lang::Place this__153413 = ::x10::lang::Place::_make(::x10aux::here);
                  this__153413->FMGL(id);
              }))
              ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                       ((x10_long)((*this)->FMGL(id))))))
      : (((x10_int) (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                           ((x10_long)((*this)->FMGL(id)))))->FMGL(myIndex))));
    
    //#line 293 "x10/util/Team.x10"
    x10_int dst_count = ::x10aux::nullCheck(scounts)->x10::lang::template Rail< x10_int >::__apply(
                          ((x10_long)(my_role)));
    
    //#line 294 "x10/util/Team.x10"
    x10_long index__153726 = ((((dst_off) + (((x10_long)(dst_count))))) - (((x10_long)1ll)));
    x10_long size__153727 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153726) < (((x10_long)0ll))) ||
                  ((index__153726) >= (size__153727))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153726,
                                            size__153727);
    }
    
    //#line 296 "x10/util/Team.x10"
    ::x10::lang::Rail< x10_int >* soffsets = (((*this)->FMGL(collectiveSupportLevel)) > (((x10_int)0)))
      ? ((__extension__ ({
             
             //#line 297 "x10/util/Team.x10"
             x10_int unit__153420 = ((x10_int) (src_off));
             
             //#line 284 "x10/util/RailUtils.x10"
             ::x10::lang::Rail< x10_int >* dst__153421 = ::x10::lang::Rail< x10_int >::_makeUnsafe((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size)), false);
             (__extension__ ({
                 
                 //#line 263 "x10/util/RailUtils.x10"
                 #ifndef NO_ASSERTIONS
                 if (::x10aux::x10__assertions_enabled)
                     ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst__153421)->FMGL(size)))));
                 #endif//NO_ASSERTIONS
                 
                 //#line 264 "x10/util/RailUtils.x10"
                 x10_int accum__153427 = unit__153420;
                 
                 //#line 265 "x10/util/RailUtils.x10"
                 dst__153421->x10::lang::template Rail< x10_int >::__set(
                   ((x10_long)0ll), unit__153420);
                 
                 //#line 266 "x10/util/RailUtils.x10"
                 x10_long i__96690max__153718 = (((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size))) - (((x10_long)1ll)));
                 {
                     x10_long i__153719;
                     for (i__153719 = ((x10_long)1ll); ((i__153719) <= (i__96690max__153718));
                          i__153719 = ((i__153719) + (((x10_long)1ll))))
                     {
                         
                         //#line 267 "x10/util/RailUtils.x10"
                         accum__153427 = (__extension__ ({
                             x10_int y__153717 = ::x10aux::nullCheck(scounts)->x10::lang::template Rail< x10_int >::__apply(
                                                   ((i__153719) - (((x10_long)1ll))));
                             ((accum__153427) + (y__153717));
                         }))
                         ;
                         
                         //#line 268 "x10/util/RailUtils.x10"
                         dst__153421->x10::lang::template Rail< x10_int >::__set(
                           i__153719, accum__153427);
                     }
                 }
                 dst__153421;
             }))
             ;
         }))
         ) : ((__extension__ ({
                  
                  //#line 284 "x10/util/RailUtils.x10"
                  ::x10::lang::Rail< x10_int >* dst__153439 =
                    ::x10::lang::Rail< x10_int >::_makeUnsafe((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size)), false);
                  (__extension__ ({
                      
                      //#line 263 "x10/util/RailUtils.x10"
                      #ifndef NO_ASSERTIONS
                      if (::x10aux::x10__assertions_enabled)
                          ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst__153439)->FMGL(size)))));
                      #endif//NO_ASSERTIONS
                      
                      //#line 264 "x10/util/RailUtils.x10"
                      x10_int accum__153445 = ((x10_int)0);
                      
                      //#line 265 "x10/util/RailUtils.x10"
                      dst__153439->x10::lang::template Rail< x10_int >::__set(
                        ((x10_long)0ll), accum__153445);
                      
                      //#line 266 "x10/util/RailUtils.x10"
                      x10_long i__96690max__153723 = (((x10_long)(::x10aux::nullCheck(scounts)->FMGL(size))) - (((x10_long)1ll)));
                      {
                          x10_long i__153724;
                          for (i__153724 = ((x10_long)1ll);
                               ((i__153724) <= (i__96690max__153723));
                               i__153724 = ((i__153724) + (((x10_long)1ll))))
                          {
                              
                              //#line 267 "x10/util/RailUtils.x10"
                              accum__153445 = (__extension__ ({
                                  x10_int y__153722 = ::x10aux::nullCheck(scounts)->x10::lang::template Rail< x10_int >::__apply(
                                                        ((i__153724) - (((x10_long)1ll))));
                                  ((accum__153445) + (y__153722));
                              }))
                              ;
                              
                              //#line 268 "x10/util/RailUtils.x10"
                              dst__153439->x10::lang::template Rail< x10_int >::__set(
                                i__153724, accum__153445);
                          }
                      }
                      dst__153439;
                  }))
                  ;
              }))
              );
    
    //#line 300 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 301 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153834 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_scatterv((*this)->FMGL(id), my_role, ((x10_int) (root->FMGL(id))), src->raw, soffsets->raw, scounts->raw, &(dst)->raw[((x10_int) (dst_off))], scounts->raw[my_role], sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2935) {
                {
                    ::x10::lang::CheckedThrowable* ct__153832 =
                      __exc2935;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153832);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153834);
        }
    } else 
    //#line 302 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 303 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 304 "x10/util/Team.x10"
        x10_boolean success = x10rt_scatterv((*this)->FMGL(id), my_role, ((x10_int) (root->FMGL(id))), src->raw, soffsets->raw, scounts->raw, &(dst)->raw[((x10_int) (dst_off))], scounts->raw[my_role], sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
        
        //#line 305 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 306 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__171378), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__171379)))));
        }
        
    } else {
        
        //#line 309 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)3), root, src, src_off, dst, dst_off,
          ((x10_long)(((x10_int)0))), ((x10_int)0), soffsets,
          scounts);
    }
    
}
#endif // X10_UTIL_TEAM_H_scatterv_2934
#ifndef X10_UTIL_TEAM_H_nativeScatterv_2936
#define X10_UTIL_TEAM_H_nativeScatterv_2936
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeScatterv(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< x10_int >* scounts,
  ::x10::lang::Rail< x10_int >* soffsets, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_int dst_off){
    return x10rt_scatterv(id, role, root, src->raw, soffsets->raw, scounts->raw, &(dst)->raw[dst_off], scounts->raw[role], sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeScatterv_2936
#ifndef X10_UTIL_TEAM_H_gather_2937
#define X10_UTIL_TEAM_H_gather_2937
template<class TPMGL(T)> void x10::util::Team::gather(::x10::lang::Place root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_long src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_long dst_off,
                                                      x10_long count) {
    
    //#line 321 "x10/util/Team.x10"
    if ((true && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                          root)))) {
        x10_long index__153728 = ((((dst_off) + ((((*this)->x10::util::Team::size()) * (count))))) - (((x10_long)1ll)));
        x10_long size__153729 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153728) < (((x10_long)0ll))) ||
                      ((index__153728) >= (size__153729))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153728,
                                                size__153729);
        }
        
    }
    
    //#line 322 "x10/util/Team.x10"
    x10_long index__153730 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153731 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153730) < (((x10_long)0ll))) ||
                  ((index__153730) >= (size__153731))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153730,
                                            size__153731);
    }
    
    //#line 323 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 324 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153838 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeGather< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) ((__extension__ ({
                               ::x10::lang::Place this__153462 =
                                 ::x10::lang::Place::_make(::x10aux::here);
                               this__153462->FMGL(id);
                           }))
                           ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                    ((x10_long)((*this)->FMGL(id))))),
                      ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
                      dst, ((x10_int) (dst_off)), ((x10_int) (count)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2938) {
                {
                    ::x10::lang::CheckedThrowable* ct__153836 =
                      __exc2938;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153836);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153838);
        }
    } else 
    //#line 325 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 326 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 327 "x10/util/Team.x10"
        ::x10::util::Team::template nativeGather< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) ((__extension__ ({
                   ::x10::lang::Place this__153465 = ::x10::lang::Place::_make(::x10aux::here);
                   this__153465->FMGL(id);
               }))
               ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                        ((x10_long)((*this)->FMGL(id))))),
          ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
          dst, ((x10_int) (dst_off)), ((x10_int) (count)));
    } else {
        
        //#line 330 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)9), root, src, src_off, dst, dst_off,
          count, ((x10_int)0), ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_gather_2937
#ifndef X10_UTIL_TEAM_H_nativeGather_2939
#define X10_UTIL_TEAM_H_nativeGather_2939
template<class TPMGL(T)> void x10::util::Team::nativeGather(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count) {
    x10rt_gather(id, role, root, &src->raw[src_off], &dst->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeGather_2939
#ifndef X10_UTIL_TEAM_H_gatherv_2940
#define X10_UTIL_TEAM_H_gatherv_2940
template<class TPMGL(T)> void x10::util::Team::gatherv(::x10::lang::Place root,
                                                       ::x10::lang::Rail< TPMGL(T) >* src,
                                                       x10_long src_off,
                                                       ::x10::lang::Rail< TPMGL(T) >* dst,
                                                       x10_long dst_off,
                                                       ::x10::lang::Rail< x10_int >* dcounts) {
    
    //#line 355 "x10/util/Team.x10"
    if ((true && (::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                          root)))) {
        
        //#line 356 "x10/util/Team.x10"
        x10_int dcounts_sum = (__extension__ ({
            
            //#line 132 "x10/util/RailUtils.x10"
            x10_int accum__153471 = ((x10_int)0);
            
            //#line 133 "x10/util/RailUtils.x10"
            x10_long i__96596max__153735 = (x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size));
            {
                x10_long i__153736;
                for (i__153736 = ((x10_long)0ll); ((i__153736) < (i__96596max__153735));
                     i__153736 = ((i__153736) + (((x10_long)1ll))))
                {
                    
                    //#line 134 "x10/util/RailUtils.x10"
                    accum__153471 = (__extension__ ({
                        x10_int b__153733 = ::x10aux::nullCheck(dcounts)->x10::lang::template Rail< x10_int >::__apply(
                                              i__153736);
                        ((accum__153471) + (b__153733));
                    }))
                    ;
                }
            }
            accum__153471;
        }))
        ;
        
        //#line 357 "x10/util/Team.x10"
        x10_long index__153738 = ((((dst_off) + (((x10_long)(dcounts_sum))))) - (((x10_long)1ll)));
        x10_long size__153739 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153738) < (((x10_long)0ll))) ||
                      ((index__153738) >= (size__153739))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153738,
                                                size__153739);
        }
        
    }
    
    //#line 359 "x10/util/Team.x10"
    x10_int my_role = (((*this)->FMGL(collectiveSupportLevel)) > (((x10_int)0)))
      ? ((::x10aux::struct_equals((*this)->FMGL(id), ((x10_int)0)))
           ? (((x10_int) ((__extension__ ({
                  ::x10::lang::Place this__153484 = ::x10::lang::Place::_make(::x10aux::here);
                  this__153484->FMGL(id);
              }))
              ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                       ((x10_long)((*this)->FMGL(id))))))
      : (((x10_int) (::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                           ((x10_long)((*this)->FMGL(id)))))->FMGL(myIndex))));
    
    //#line 360 "x10/util/Team.x10"
    x10_int src_count = ::x10aux::nullCheck(dcounts)->x10::lang::template Rail< x10_int >::__apply(
                          ((x10_long)(my_role)));
    
    //#line 361 "x10/util/Team.x10"
    x10_long index__153750 = ((((src_off) + (((x10_long)(src_count))))) - (((x10_long)1ll)));
    x10_long size__153751 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153750) < (((x10_long)0ll))) ||
                  ((index__153750) >= (size__153751))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153750,
                                            size__153751);
    }
    
    //#line 363 "x10/util/Team.x10"
    ::x10::lang::Rail< x10_int >* doffsets = (((*this)->FMGL(collectiveSupportLevel)) > (((x10_int)0)))
      ? ((__extension__ ({
             
             //#line 364 "x10/util/Team.x10"
             x10_int unit__153491 = ((x10_int) (dst_off));
             
             //#line 284 "x10/util/RailUtils.x10"
             ::x10::lang::Rail< x10_int >* dst__153492 = ::x10::lang::Rail< x10_int >::_makeUnsafe((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size)), false);
             (__extension__ ({
                 
                 //#line 263 "x10/util/RailUtils.x10"
                 #ifndef NO_ASSERTIONS
                 if (::x10aux::x10__assertions_enabled)
                     ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst__153492)->FMGL(size)))));
                 #endif//NO_ASSERTIONS
                 
                 //#line 264 "x10/util/RailUtils.x10"
                 x10_int accum__153498 = unit__153491;
                 
                 //#line 265 "x10/util/RailUtils.x10"
                 dst__153492->x10::lang::template Rail< x10_int >::__set(
                   ((x10_long)0ll), unit__153491);
                 
                 //#line 266 "x10/util/RailUtils.x10"
                 x10_long i__96690max__153742 = (((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size))) - (((x10_long)1ll)));
                 {
                     x10_long i__153743;
                     for (i__153743 = ((x10_long)1ll); ((i__153743) <= (i__96690max__153742));
                          i__153743 = ((i__153743) + (((x10_long)1ll))))
                     {
                         
                         //#line 267 "x10/util/RailUtils.x10"
                         accum__153498 = (__extension__ ({
                             x10_int y__153741 = ::x10aux::nullCheck(dcounts)->x10::lang::template Rail< x10_int >::__apply(
                                                   ((i__153743) - (((x10_long)1ll))));
                             ((accum__153498) + (y__153741));
                         }))
                         ;
                         
                         //#line 268 "x10/util/RailUtils.x10"
                         dst__153492->x10::lang::template Rail< x10_int >::__set(
                           i__153743, accum__153498);
                     }
                 }
                 dst__153492;
             }))
             ;
         }))
         ) : ((__extension__ ({
                  
                  //#line 284 "x10/util/RailUtils.x10"
                  ::x10::lang::Rail< x10_int >* dst__153510 =
                    ::x10::lang::Rail< x10_int >::_makeUnsafe((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size)), false);
                  (__extension__ ({
                      
                      //#line 263 "x10/util/RailUtils.x10"
                      #ifndef NO_ASSERTIONS
                      if (::x10aux::x10__assertions_enabled)
                          ::x10aux::x10__assert((((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size))) <= ((x10_long)(::x10aux::nullCheck(dst__153510)->FMGL(size)))));
                      #endif//NO_ASSERTIONS
                      
                      //#line 264 "x10/util/RailUtils.x10"
                      x10_int accum__153516 = ((x10_int)0);
                      
                      //#line 265 "x10/util/RailUtils.x10"
                      dst__153510->x10::lang::template Rail< x10_int >::__set(
                        ((x10_long)0ll), accum__153516);
                      
                      //#line 266 "x10/util/RailUtils.x10"
                      x10_long i__96690max__153747 = (((x10_long)(::x10aux::nullCheck(dcounts)->FMGL(size))) - (((x10_long)1ll)));
                      {
                          x10_long i__153748;
                          for (i__153748 = ((x10_long)1ll);
                               ((i__153748) <= (i__96690max__153747));
                               i__153748 = ((i__153748) + (((x10_long)1ll))))
                          {
                              
                              //#line 267 "x10/util/RailUtils.x10"
                              accum__153516 = (__extension__ ({
                                  x10_int y__153746 = ::x10aux::nullCheck(dcounts)->x10::lang::template Rail< x10_int >::__apply(
                                                        ((i__153748) - (((x10_long)1ll))));
                                  ((accum__153516) + (y__153746));
                              }))
                              ;
                              
                              //#line 268 "x10/util/RailUtils.x10"
                              dst__153510->x10::lang::template Rail< x10_int >::__set(
                                i__153748, accum__153516);
                          }
                      }
                      dst__153510;
                  }))
                  ;
              }))
              );
    
    //#line 367 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 368 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153842 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_gatherv((*this)->FMGL(id), my_role, ((x10_int) (root->FMGL(id))), &(src)->raw[((x10_int) (src_off))], dcounts->raw[my_role], dst->raw, doffsets->raw, dcounts->raw, sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2941) {
                {
                    ::x10::lang::CheckedThrowable* ct__153840 =
                      __exc2941;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153840);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153842);
        }
    } else 
    //#line 369 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 370 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 371 "x10/util/Team.x10"
        x10_boolean success = x10rt_gatherv((*this)->FMGL(id), my_role, ((x10_int) (root->FMGL(id))), &(src)->raw[((x10_int) (src_off))], dcounts->raw[my_role], dst->raw, doffsets->raw, dcounts->raw, sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
        
        //#line 372 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 373 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__171378), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__171379)))));
        }
        
    } else {
        
        //#line 376 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)10), root, src, src_off, dst, dst_off,
          ((x10_long)(((x10_int)0))), ((x10_int)0), doffsets,
          dcounts);
    }
    
}
#endif // X10_UTIL_TEAM_H_gatherv_2940
#ifndef X10_UTIL_TEAM_H_nativeGatherv_2942
#define X10_UTIL_TEAM_H_nativeGatherv_2942
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeGatherv(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  ::x10::lang::Rail< x10_int >* dcounts, ::x10::lang::Rail< x10_int >* doffsets){
    return x10rt_gatherv(id, role, root, &(src)->raw[src_off], dcounts->raw[role], dst->raw, doffsets->raw, dcounts->raw, sizeof(TPMGL(T)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeGatherv_2942
#ifndef X10_UTIL_TEAM_H_bcast_2943
#define X10_UTIL_TEAM_H_bcast_2943
template<class TPMGL(T)> void x10::util::Team::bcast(::x10::lang::Place root,
                                                     ::x10::lang::Rail< TPMGL(T) >* src,
                                                     x10_long src_off,
                                                     ::x10::lang::Rail< TPMGL(T) >* dst,
                                                     x10_long dst_off,
                                                     x10_long count) {
    
    //#line 400 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 root))) {
        x10_long index__153752 = ((((src_off) + (count))) - (((x10_long)1ll)));
        x10_long size__153753 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153752) < (((x10_long)0ll))) ||
                      ((index__153752) >= (size__153753))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153752,
                                                size__153753);
        }
        
    }
    
    //#line 401 "x10/util/Team.x10"
    x10_long index__153754 = ((((dst_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153755 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153754) < (((x10_long)0ll))) ||
                  ((index__153754) >= (size__153755))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153754,
                                            size__153755);
    }
    
    //#line 402 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 403 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153846 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_bcast((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                            ((x10_int)0)))
                      ? (((x10_int) ((__extension__ ({
                             ::x10::lang::Place this__153533 =
                               ::x10::lang::Place::_make(::x10aux::here);
                             this__153533->FMGL(id);
                         }))
                         ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                  ((x10_long)((*this)->FMGL(id))))), ((x10_int) (root->FMGL(id))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], sizeof(TPMGL(T)), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2944) {
                {
                    ::x10::lang::CheckedThrowable* ct__153844 =
                      __exc2944;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153844);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153846);
        }
    } else 
    //#line 404 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 405 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 406 "x10/util/Team.x10"
        x10_boolean success = x10rt_bcast((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                                      ((x10_int)0)))
          ? (((x10_int) ((__extension__ ({
                 ::x10::lang::Place this__153536 = ::x10::lang::Place::_make(::x10aux::here);
                 this__153536->FMGL(id);
             }))
             ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                      ((x10_long)((*this)->FMGL(id))))), ((x10_int) (root->FMGL(id))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], sizeof(TPMGL(T)), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
        
        //#line 407 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 408 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__171378), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__171379)))));
        }
        
    } else {
        
        //#line 411 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)1), root, src, src_off, dst, dst_off,
          count, ((x10_int)0), ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_bcast_2943
#ifndef X10_UTIL_TEAM_H_nativeBcast_2945
#define X10_UTIL_TEAM_H_nativeBcast_2945
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeBcast(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count){
    return x10rt_bcast(id, role, root, &(src)->raw[src_off], &(dst)->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeBcast_2945
#ifndef X10_UTIL_TEAM_H_alltoall_2946
#define X10_UTIL_TEAM_H_alltoall_2946
template<class TPMGL(T)> void x10::util::Team::alltoall(::x10::lang::Rail< TPMGL(T) >* src,
                                                        x10_long src_off,
                                                        ::x10::lang::Rail< TPMGL(T) >* dst,
                                                        x10_long dst_off,
                                                        x10_long count) {
    
    //#line 437 "x10/util/Team.x10"
    x10_long numElems__153760 = ((count) * ((*this)->x10::util::Team::size()));
    
    //#line 438 "x10/util/Team.x10"
    x10_long index__153756 = ((((src_off) + (numElems__153760))) - (((x10_long)1ll)));
    x10_long size__153757 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153756) < (((x10_long)0ll))) ||
                  ((index__153756) >= (size__153757))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153756,
                                            size__153757);
    }
    
    //#line 439 "x10/util/Team.x10"
    x10_long index__153758 = ((((dst_off) + (numElems__153760))) - (((x10_long)1ll)));
    x10_long size__153759 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153758) < (((x10_long)0ll))) ||
                  ((index__153758) >= (size__153759))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153758,
                                            size__153759);
    }
    
    //#line 441 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 443 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153850 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeAlltoall< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) ((__extension__ ({
                               ::x10::lang::Place this__153545 =
                                 ::x10::lang::Place::_make(::x10aux::here);
                               this__153545->FMGL(id);
                           }))
                           ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                    ((x10_long)((*this)->FMGL(id))))),
                      src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
                      ((x10_int) (count)));
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2947) {
                {
                    ::x10::lang::CheckedThrowable* ct__153848 =
                      __exc2947;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153848);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153850);
        }
    } else {
        
        //#line 446 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 448 "x10/util/Team.x10"
        ::x10::util::Team::template nativeAlltoall< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) ((__extension__ ({
                   ::x10::lang::Place this__153547 = ::x10::lang::Place::_make(::x10aux::here);
                   this__153547->FMGL(id);
               }))
               ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                        ((x10_long)((*this)->FMGL(id))))),
          src, ((x10_int) (src_off)), dst, ((x10_int) (dst_off)),
          ((x10_int) (count)));
    }
    
}
#endif // X10_UTIL_TEAM_H_alltoall_2946
#ifndef X10_UTIL_TEAM_H_nativeAlltoall_2948
#define X10_UTIL_TEAM_H_nativeAlltoall_2948
template<class TPMGL(T)> void x10::util::Team::nativeAlltoall(
  x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count) {
    x10rt_alltoall(id, role, &src->raw[src_off], &dst->raw[dst_off], sizeof(TPMGL(T)), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeAlltoall_2948
inline x10_int x10::util::Team::FMGL(ADD__get)() {
    return x10::util::Team::FMGL(ADD);
}

inline x10_int x10::util::Team::FMGL(MUL__get)() {
    return x10::util::Team::FMGL(MUL);
}

inline x10_int x10::util::Team::FMGL(AND__get)() {
    return x10::util::Team::FMGL(AND);
}

inline x10_int x10::util::Team::FMGL(OR__get)() {
    return x10::util::Team::FMGL(OR);
}

inline x10_int x10::util::Team::FMGL(XOR__get)() {
    return x10::util::Team::FMGL(XOR);
}

inline x10_int x10::util::Team::FMGL(MAX__get)() {
    return x10::util::Team::FMGL(MAX);
}

inline x10_int x10::util::Team::FMGL(MIN__get)() {
    return x10::util::Team::FMGL(MIN);
}

#ifndef X10_UTIL_TEAM_H_reduce_2949
#define X10_UTIL_TEAM_H_reduce_2949
template<class TPMGL(T)> void x10::util::Team::reduce(::x10::lang::Place root,
                                                      ::x10::lang::Rail< TPMGL(T) >* src,
                                                      x10_long src_off,
                                                      ::x10::lang::Rail< TPMGL(T) >* dst,
                                                      x10_long dst_off,
                                                      x10_long count,
                                                      x10_int op) {
    
    //#line 502 "x10/util/Team.x10"
    x10_long index__153763 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153764 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153763) < (((x10_long)0ll))) ||
                  ((index__153763) >= (size__153764))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153763,
                                            size__153764);
    }
    
    //#line 503 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 root))) {
        x10_long index__153761 = ((((dst_off) + (count))) - (((x10_long)1ll)));
        x10_long size__153762 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153761) < (((x10_long)0ll))) ||
                      ((index__153761) >= (size__153762))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153761,
                                                size__153762);
        }
        
    }
    
    //#line 504 "x10/util/Team.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                          ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
      ((x10_int)5), root, src, src_off, dst, dst_off, count,
      op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
#endif // X10_UTIL_TEAM_H_reduce_2949
#ifndef X10_UTIL_TEAM_H_reduce_builtin_2961
#define X10_UTIL_TEAM_H_reduce_builtin_2961
template<class TPMGL(T)> void x10::util::Team::reduce_builtin(
  ::x10::lang::Place root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_long dst_off,
  x10_long count, x10_int op) {
    
    //#line 549 "x10/util/Team.x10"
    x10_long index__153767 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153768 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153767) < (((x10_long)0ll))) ||
                  ((index__153767) >= (size__153768))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153767,
                                            size__153768);
    }
    
    //#line 550 "x10/util/Team.x10"
    if ((::x10aux::struct_equals(::x10::lang::Place::_make(::x10aux::here),
                                 root))) {
        x10_long index__153765 = ((((dst_off) + (count))) - (((x10_long)1ll)));
        x10_long size__153766 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
        
        //#line 150 "x10/util/Team.x10"
        if ((true && ((((index__153765) < (((x10_long)0ll))) ||
                      ((index__153765) >= (size__153766))))))
        {
            
            //#line 151 "x10/util/Team.x10"
            ::x10::util::Team::raiseBoundsError(index__153765,
                                                size__153766);
        }
        
    }
    
    //#line 551 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 552 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153854 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    ::x10::util::Team::template nativeReduce< TPMGL(T) >(
                      (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                  ((x10_int)0)))
                        ? (((x10_int) ((__extension__ ({
                               ::x10::lang::Place this__153561 =
                                 ::x10::lang::Place::_make(::x10aux::here);
                               this__153561->FMGL(id);
                           }))
                           ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                    ((x10_long)((*this)->FMGL(id))))),
                      ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
                      dst, ((x10_int) (dst_off)), ((x10_int) (count)),
                      op);
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2962) {
                {
                    ::x10::lang::CheckedThrowable* ct__153852 =
                      __exc2962;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153852);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153854);
        }
    } else 
    //#line 553 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 555 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 557 "x10/util/Team.x10"
        ::x10::util::Team::template nativeReduce< TPMGL(T) >(
          (*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                      ((x10_int)0)))
            ? (((x10_int) ((__extension__ ({
                   ::x10::lang::Place this__153564 = ::x10::lang::Place::_make(::x10aux::here);
                   this__153564->FMGL(id);
               }))
               ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                        ((x10_long)((*this)->FMGL(id))))),
          ((x10_int) (root->FMGL(id))), src, ((x10_int) (src_off)),
          dst, ((x10_int) (dst_off)), ((x10_int) (count)),
          op);
    } else {
        
        //#line 560 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)5), root, src, src_off, dst, dst_off,
          count, op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_reduce_builtin_2961
#ifndef X10_UTIL_TEAM_H_nativeReduce_2963
#define X10_UTIL_TEAM_H_nativeReduce_2963
template<class TPMGL(T)> void x10::util::Team::nativeReduce(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count, x10_int op) {
    x10rt_reduce(id, role, root, &src->raw[src_off], &dst->raw[dst_off], (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), count, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeReduce_2963
#ifndef X10_UTIL_TEAM_H_reduce_2975
#define X10_UTIL_TEAM_H_reduce_2975
template<class TPMGL(T)> TPMGL(T) x10::util::Team::reduce(
  ::x10::lang::Place root, TPMGL(T) src, x10_int op) {
    
    //#line 648 "x10/util/Team.x10"
    ::x10::lang::Rail< TPMGL(T) >* chk = ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll),
                                                                              src);
    
    //#line 649 "x10/util/Team.x10"
    ::x10::lang::Rail< TPMGL(T) >* dst = ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll),
                                                                              src);
    
    //#line 650 "x10/util/Team.x10"
    (*this)->template reduce< TPMGL(T) >(root, chk, ((x10_long)0ll),
                                         dst, ((x10_long)0ll),
                                         ((x10_long)1ll),
                                         op);
    
    //#line 651 "x10/util/Team.x10"
    return dst->x10::lang::template Rail< TPMGL(T) >::__apply(
             ((x10_long)0ll));
    
}
#endif // X10_UTIL_TEAM_H_reduce_2975
#ifndef X10_UTIL_TEAM_H_nativeReduce_2976
#define X10_UTIL_TEAM_H_nativeReduce_2976
template<class TPMGL(T)> void x10::util::Team::nativeReduce(
  x10_int id, x10_int role, x10_int root, ::x10::lang::Rail< TPMGL(T) >* src,
  ::x10::lang::Rail< TPMGL(T) >* dst, x10_int op) {
    x10rt_reduce(id, role, root, src->raw, dst->raw, (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), 1, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeReduce_2976
#ifndef X10_UTIL_TEAM_H_allreduce_2977
#define X10_UTIL_TEAM_H_allreduce_2977
template<class TPMGL(T)> void x10::util::Team::allreduce(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int op) {
    
    //#line 675 "x10/util/Team.x10"
    x10_long index__153769 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153770 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153769) < (((x10_long)0ll))) ||
                  ((index__153769) >= (size__153770))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153769,
                                            size__153770);
    }
    
    //#line 676 "x10/util/Team.x10"
    x10_long index__153771 = ((((dst_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153772 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153771) < (((x10_long)0ll))) ||
                  ((index__153771) >= (size__153772))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153771,
                                            size__153772);
    }
    
    //#line 677 "x10/util/Team.x10"
    ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                          ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
      ((x10_int)6), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                              ((x10_long)((*this)->FMGL(id)))))->FMGL(places))->__apply(
                      ((x10_long)0ll)), src, src_off, dst,
      dst_off, count, op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
      ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
#endif // X10_UTIL_TEAM_H_allreduce_2977
#ifndef X10_UTIL_TEAM_H_allreduce_builtin_2989
#define X10_UTIL_TEAM_H_allreduce_builtin_2989
template<class TPMGL(T)> void x10::util::Team::allreduce_builtin(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int op) {
    
    //#line 722 "x10/util/Team.x10"
    x10_long index__153773 = ((((src_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153774 = (x10_long)(::x10aux::nullCheck(src)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153773) < (((x10_long)0ll))) ||
                  ((index__153773) >= (size__153774))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153773,
                                            size__153774);
    }
    
    //#line 723 "x10/util/Team.x10"
    x10_long index__153775 = ((((dst_off) + (count))) - (((x10_long)1ll)));
    x10_long size__153776 = (x10_long)(::x10aux::nullCheck(dst)->FMGL(size));
    
    //#line 150 "x10/util/Team.x10"
    if ((true && ((((index__153775) < (((x10_long)0ll))) ||
                  ((index__153775) >= (size__153776))))))
    {
        
        //#line 151 "x10/util/Team.x10"
        ::x10::util::Team::raiseBoundsError(index__153775,
                                            size__153776);
    }
    
    //#line 724 "x10/util/Team.x10"
    if ((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                 ((x10_int)4)))) {
        {
            
            //#line 726 "x10/util/Team.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__153858 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    x10rt_allreduce((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                                ((x10_int)0)))
                      ? (((x10_int) ((__extension__ ({
                             ::x10::lang::Place this__153579 =
                               ::x10::lang::Place::_make(::x10aux::here);
                             this__153579->FMGL(id);
                         }))
                         ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                                  ((x10_long)((*this)->FMGL(id))))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], (x10rt_red_op_type)(op), x10rt_get_red_type<TPMGL(T)>(), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler,::x10aux::coll_enter());
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc2990) {
                {
                    ::x10::lang::CheckedThrowable* ct__153856 =
                      __exc2990;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__153856);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__153858);
        }
    } else 
    //#line 727 "x10/util/Team.x10"
    if (((::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                  ((x10_int)2))) || (::x10aux::struct_equals((*this)->FMGL(collectiveSupportLevel),
                                                                             ((x10_int)3)))))
    {
        
        //#line 729 "x10/util/Team.x10"
        (*this)->x10::util::Team::barrierIgnoreExceptions();
        
        //#line 731 "x10/util/Team.x10"
        x10_boolean success = x10rt_allreduce((*this)->FMGL(id), (::x10aux::struct_equals((*this)->FMGL(id),
                                                                                          ((x10_int)0)))
          ? (((x10_int) ((__extension__ ({
                 ::x10::lang::Place this__153581 = ::x10::lang::Place::_make(::x10aux::here);
                 this__153581->FMGL(id);
             }))
             ))) : (::x10aux::nullCheck(::x10::util::Team::FMGL(roles__get)())->x10::util::template GrowableRail<x10_int>::__apply(
                      ((x10_long)((*this)->FMGL(id))))), &(src)->raw[((x10_int) (src_off))], &(dst)->raw[((x10_int) (dst_off))], (x10rt_red_op_type)(op), x10rt_get_red_type<TPMGL(T)>(), ((x10_int) (count)), ::x10aux::failed_coll_handler, ::x10aux::coll_handler,::x10aux::coll_enter());
        
        //#line 732 "x10/util/Team.x10"
        if (!(success)) {
            
            //#line 733 "x10/util/Team.x10"
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::DeadPlaceException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::util::Team_Strings::sl__171378), (*this)->FMGL(id)), (&::x10::util::Team_Strings::sl__171379)))));
        }
        
    } else {
        
        //#line 736 "x10/util/Team.x10"
        ::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                              ((x10_long)((*this)->FMGL(id)))))->template collective_impl< TPMGL(T) >(
          ((x10_int)6), ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(::x10::util::Team::FMGL(state__get)())->x10::util::template GrowableRail< ::x10::util::Team__LocalTeamState*>::__apply(
                                                                  ((x10_long)((*this)->FMGL(id)))))->FMGL(places))->__apply(
                          ((x10_long)0ll)), src, src_off,
          dst, dst_off, count, op, ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)),
          ::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
    
}
#endif // X10_UTIL_TEAM_H_allreduce_builtin_2989
#ifndef X10_UTIL_TEAM_H_nativeAllreduce_2991
#define X10_UTIL_TEAM_H_nativeAllreduce_2991
template<class TPMGL(T)> x10_boolean x10::util::Team::nativeAllreduce(
  x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
  x10_int src_off, ::x10::lang::Rail< TPMGL(T) >* dst, x10_int dst_off,
  x10_int count, x10_int op){
    return x10rt_allreduce(id, role, &(src)->raw[src_off], &(dst)->raw[dst_off], (x10rt_red_op_type)(op), x10rt_get_red_type<TPMGL(T)>(), count, ::x10aux::failed_coll_handler, ::x10aux::coll_handler,::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeAllreduce_2991
#ifndef X10_UTIL_TEAM_H_allreduce_3003
#define X10_UTIL_TEAM_H_allreduce_3003
template<class TPMGL(T)> TPMGL(T) x10::util::Team::allreduce(
  TPMGL(T) src, x10_int op) {
    
    //#line 824 "x10/util/Team.x10"
    ::x10::lang::Rail< TPMGL(T) >* chk = ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll),
                                                                              src);
    
    //#line 825 "x10/util/Team.x10"
    ::x10::lang::Rail< TPMGL(T) >* dst = ::x10::lang::Rail< TPMGL(T) >::_make(((x10_long)1ll),
                                                                              src);
    
    //#line 826 "x10/util/Team.x10"
    (*this)->template allreduce< TPMGL(T) >(chk, ((x10_long)0ll),
                                            dst, ((x10_long)0ll),
                                            ((x10_long)1ll),
                                            op);
    
    //#line 827 "x10/util/Team.x10"
    return dst->x10::lang::template Rail< TPMGL(T) >::__apply(
             ((x10_long)0ll));
    
}
#endif // X10_UTIL_TEAM_H_allreduce_3003
#ifndef X10_UTIL_TEAM_H_nativeAllreduce_3004
#define X10_UTIL_TEAM_H_nativeAllreduce_3004
template<class TPMGL(T)> void x10::util::Team::nativeAllreduce(
  x10_int id, x10_int role, ::x10::lang::Rail< TPMGL(T) >* src,
  ::x10::lang::Rail< TPMGL(T) >* dst, x10_int op) {
    x10rt_allreduce(id, role, src->raw, dst->raw, (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), 1, ::x10aux::failed_coll_handler, ::x10aux::coll_handler, ::x10aux::coll_enter());
}
#endif // X10_UTIL_TEAM_H_nativeAllreduce_3004
#endif // X10_UTIL_TEAM_H_GENERICS
#endif // __X10_UTIL_TEAM_H_NODEPS
