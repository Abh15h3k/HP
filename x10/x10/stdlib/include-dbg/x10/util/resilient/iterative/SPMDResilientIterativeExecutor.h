#ifndef __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H
#define __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H

#include <x10rt.h>


#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_GLOBALREF_H_NODEPS
#include <x10/lang/GlobalRef.h>
#undef X10_LANG_GLOBALREF_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_LANG_PLACELOCALHANDLE_H_NODEPS
#include <x10/lang/PlaceLocalHandle.h>
#undef X10_LANG_PLACELOCALHANDLE_H_NODEPS
#define X10_UTIL_TEAM_H_NODEPS
#include <x10/util/Team.h>
#undef X10_UTIL_TEAM_H_NODEPS
#define X10_UTIL_TEAM_H_NODEPS
#include <x10/util/Team.h>
#undef X10_UTIL_TEAM_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_BOOLEAN_H_NODEPS
#include <x10/lang/Boolean.h>
#undef X10_LANG_BOOLEAN_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
namespace x10 { namespace lang { 
class System;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager;
} } } 
namespace x10 { namespace util { namespace resilient { namespace store { 
template<class TPMGL(V)> class Store;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace localstore { 
class Cloneable;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeExecutor__PlaceTempData;
} } } } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SimplePlaceHammer;
} } } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeApp;
} } } } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class MapSet;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class HashSet;
} } 
namespace x10 { namespace util { 
template<class TPMGL(K), class TPMGL(V)> class HashMap;
} } 
namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeExecutor__PlaceStatistics;
} } } } 
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
class Exception;
} } 
namespace x10 { namespace lang { 
class UnsupportedOperationException;
} } 
namespace x10 { namespace util { namespace resilient { 
class PlaceManager__ChangeDescription;
} } } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ListIterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Set;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class DeadPlaceException;
} } 
namespace x10 { namespace lang { 
class MultipleExceptions;
} } 
namespace x10 { namespace util { 
class RailUtils;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 

namespace x10 { namespace util { namespace resilient { namespace iterative { 

class SPMDResilientIterativeExecutor_Strings {
  public:
    static ::x10::lang::String sl__159900;
    static ::x10::lang::String sl__159896;
    static ::x10::lang::String sl__159892;
    static ::x10::lang::String sl__159928;
    static ::x10::lang::String sl__159941;
    static ::x10::lang::String sl__159895;
    static ::x10::lang::String sl__159890;
    static ::x10::lang::String sl__159931;
    static ::x10::lang::String sl__159945;
    static ::x10::lang::String sl__159914;
    static ::x10::lang::String sl__159923;
    static ::x10::lang::String sl__159942;
    static ::x10::lang::String sl__159946;
    static ::x10::lang::String sl__159955;
    static ::x10::lang::String sl__159897;
    static ::x10::lang::String sl__159936;
    static ::x10::lang::String sl__159927;
    static ::x10::lang::String sl__159951;
    static ::x10::lang::String sl__159949;
    static ::x10::lang::String sl__159899;
    static ::x10::lang::String sl__159924;
    static ::x10::lang::String sl__159939;
    static ::x10::lang::String sl__159950;
    static ::x10::lang::String sl__159905;
    static ::x10::lang::String sl__159908;
    static ::x10::lang::String sl__159926;
    static ::x10::lang::String sl__159934;
    static ::x10::lang::String sl__159943;
    static ::x10::lang::String sl__159901;
    static ::x10::lang::String sl__159938;
    static ::x10::lang::String sl__159889;
    static ::x10::lang::String sl__159954;
    static ::x10::lang::String sl__159917;
    static ::x10::lang::String sl__159911;
    static ::x10::lang::String sl__159948;
    static ::x10::lang::String sl__159916;
    static ::x10::lang::String sl__159957;
    static ::x10::lang::String sl__159952;
    static ::x10::lang::String sl__159953;
    static ::x10::lang::String sl__159891;
    static ::x10::lang::String sl__159903;
    static ::x10::lang::String sl__159921;
    static ::x10::lang::String sl__159910;
    static ::x10::lang::String sl__159919;
    static ::x10::lang::String sl__159922;
    static ::x10::lang::String sl__159944;
    static ::x10::lang::String sl__159902;
    static ::x10::lang::String sl__159940;
    static ::x10::lang::String sl__159904;
    static ::x10::lang::String sl__159888;
    static ::x10::lang::String sl__159920;
    static ::x10::lang::String sl__159909;
    static ::x10::lang::String sl__159913;
    static ::x10::lang::String sl__159918;
    static ::x10::lang::String sl__159929;
    static ::x10::lang::String sl__159935;
    static ::x10::lang::String sl__159893;
    static ::x10::lang::String sl__159912;
    static ::x10::lang::String sl__159930;
    static ::x10::lang::String sl__159898;
    static ::x10::lang::String sl__159947;
    static ::x10::lang::String sl__159956;
    static ::x10::lang::String sl__159937;
    static ::x10::lang::String sl__159925;
    static ::x10::lang::String sl__159933;
    static ::x10::lang::String sl__159932;
    static ::x10::lang::String sl__159894;
    static ::x10::lang::String sl__159906;
    static ::x10::lang::String sl__159907;
    static ::x10::lang::String sl__159915;
};

class SPMDResilientIterativeExecutor : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Place FMGL(home);
    
    /* Static field: FMGL(VERBOSE) */
    static x10_boolean FMGL(VERBOSE);
    static void FMGL(VERBOSE__do_init)();
    static void FMGL(VERBOSE__init)();
    static volatile ::x10aux::StaticInitController::status FMGL(VERBOSE__status);
    static ::x10::lang::CheckedThrowable* FMGL(VERBOSE__exception);
    static x10_boolean FMGL(VERBOSE__get)();
    
    ::x10::lang::GlobalRef< ::x10::util::resilient::PlaceManager* > FMGL(manager);
    
    ::x10::util::resilient::store::Store< ::x10::util::resilient::localstore::Cloneable*>*
      FMGL(resilientMap);
    
    ::x10::lang::PlaceLocalHandle< ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor__PlaceTempData*>
      FMGL(plh);
    
    ::x10::util::Team FMGL(team);
    
    x10_long FMGL(itersPerCheckpoint);
    
    x10_boolean FMGL(isResilient);
    
    x10_boolean FMGL(implicitStepSynchronization);
    
    ::x10::util::resilient::iterative::SimplePlaceHammer*
      FMGL(simplePlaceHammer);
    
    ::x10::util::ArrayList<x10_long>* FMGL(ckptTimes);
    
    ::x10::util::ArrayList<x10_long>* FMGL(remakeTimes);
    
    ::x10::util::ArrayList<x10_long>* FMGL(appRemakeTimes);
    
    ::x10::util::ArrayList<x10_long>* FMGL(reconstructTeamTimes);
    
    ::x10::util::ArrayList<x10_long>* FMGL(resilientMapRecoveryTimes);
    
    ::x10::util::ArrayList<x10_long>* FMGL(failureDetectionTimes);
    
    x10_long FMGL(applicationInitializationTime);
    
    x10_long FMGL(startRunTime);
    
    x10_long FMGL(lastCkptVersion);
    
    x10_long FMGL(lastCkptIter);
    
    void _constructor(x10_long itersPerCheckpoint, x10_long sparePlaces,
                      x10_boolean supportShrinking, x10_boolean implicitStepSynchronization);
    
    static ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor* _make(
             x10_long itersPerCheckpoint, x10_long sparePlaces,
             x10_boolean supportShrinking, x10_boolean implicitStepSynchronization);
    
    virtual void run(::x10::util::resilient::iterative::SPMDResilientIterativeApp* app);
    virtual void setHammer(::x10::util::resilient::iterative::SimplePlaceHammer* h);
    virtual ::x10::lang::PlaceGroup* activePlaces();
    virtual ::x10::util::Team team();
    virtual void run(::x10::util::resilient::iterative::SPMDResilientIterativeApp* app,
                     x10_long startRunTime);
    x10_boolean remake(::x10::util::resilient::iterative::SPMDResilientIterativeApp* app);
    void checkpoint(::x10::util::resilient::iterative::SPMDResilientIterativeApp* app);
    void restore(::x10::util::resilient::iterative::SPMDResilientIterativeApp* app,
                 x10_long lastCkptIter);
    void calculateTimingStatistics();
    void processIterationException(::x10::lang::Exception* ex);
    x10_boolean containsDPE(::x10::lang::Exception* ex);
    template<class TPMGL(T)> ::x10::lang::String* railToString(
      ::x10::lang::Rail< TPMGL(T) >* r);
    x10_long railSum(::x10::lang::Rail< x10_long >* r);
    x10_double railSum(::x10::lang::Rail< x10_double >* r);
    x10_double railAverage(::x10::lang::Rail< x10_long >* r);
    x10_double railAverage(::x10::lang::Rail< x10_double >* r);
    template<class TPMGL(T)> ::x10::lang::Rail< x10_double >*
      computeAverages(::x10::lang::Rail< TPMGL(T) >* sum);
    void executorKillHere(::x10::lang::String* op);
    virtual ::x10::util::resilient::iterative::SPMDResilientIterativeExecutor*
      x10__util__resilient__iterative__SPMDResilientIterativeExecutor____this__x10__util__resilient__iterative__SPMDResilientIterativeExecutor(
      );
    virtual void __fieldInitializers_x10_util_resilient_iterative_SPMDResilientIterativeExecutor(
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


} } } } 
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H

namespace x10 { namespace util { namespace resilient { namespace iterative { 
class SPMDResilientIterativeExecutor;
} } } } 

#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_NODEPS
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_NODEPS
#include <x10/lang/GlobalRef.h>
#include <x10/lang/PlaceLocalHandle.h>
#include <x10/util/Team.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Place.h>
#include <x10/lang/System.h>
#include <x10/lang/String.h>
#include <x10/util/resilient/PlaceManager.h>
#include <x10/util/resilient/store/Store.h>
#include <x10/util/resilient/localstore/Cloneable.h>
#include <x10/util/resilient/iterative/SPMDResilientIterativeExecutor__PlaceTempData.h>
#include <x10/util/resilient/iterative/SimplePlaceHammer.h>
#include <x10/util/ArrayList.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Int.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/util/resilient/iterative/SPMDResilientIterativeApp.h>
#include <x10/util/Timer.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/util/MapSet.h>
#include <x10/util/HashSet.h>
#include <x10/util/HashMap.h>
#include <x10/util/resilient/iterative/SPMDResilientIterativeExecutor__PlaceStatistics.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Exception.h>
#include <x10/lang/UnsupportedOperationException.h>
#include <x10/util/resilient/PlaceManager__ChangeDescription.h>
#include <x10/util/ListIterator.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Set.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Double.h>
#include <x10/lang/DeadPlaceException.h>
#include <x10/lang/MultipleExceptions.h>
#include <x10/util/RailUtils.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Math.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/Zero.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_GENERICS
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_GENERICS
inline x10_boolean x10::util::resilient::iterative::SPMDResilientIterativeExecutor::FMGL(VERBOSE__get)() {
    if (FMGL(VERBOSE__status) != ::x10aux::StaticInitController::INITIALIZED) {
        FMGL(VERBOSE__init)();
    }
    return x10::util::resilient::iterative::SPMDResilientIterativeExecutor::FMGL(VERBOSE);
}

#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_railToString_2591
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_railToString_2591
template<class TPMGL(T)> ::x10::lang::String* x10::util::resilient::iterative::SPMDResilientIterativeExecutor::railToString(
  ::x10::lang::Rail< TPMGL(T) >* r) {
    
    //#line 443 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    if ((::x10aux::struct_equals(r, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 444 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
        return (&::x10::util::resilient::iterative::SPMDResilientIterativeExecutor_Strings::sl__159900);
        
    }
    
    //#line 445 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    ::x10::lang::String* str = (&::x10::util::resilient::iterative::SPMDResilientIterativeExecutor_Strings::sl__159900);
    
    //#line 446 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    ::x10::lang::Rail< TPMGL(T) >* rail__132569 = r;
    x10_long size__132570 = (x10_long)(::x10aux::nullCheck(rail__132569)->FMGL(size));
    {
        x10_long idx__132571;
        for (idx__132571 = ((x10_long)0ll); ((idx__132571) < (size__132570));
             idx__132571 = ((idx__132571) + (((x10_long)1ll))))
        {
            TPMGL(T) x__132572 = ::x10aux::nullCheck(rail__132569)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                   idx__132571);
            
            //#line 447 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
            str = ::x10::lang::String::__plus(str, ::x10::lang::String::__plus(x__132572, (&::x10::util::resilient::iterative::SPMDResilientIterativeExecutor_Strings::sl__159901)));
        }
    }
    
    //#line 448 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    return str;
    
}
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_railToString_2591
#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_computeAverages_2596
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_computeAverages_2596
template<class TPMGL(T)> ::x10::lang::Rail< x10_double >*
  x10::util::resilient::iterative::SPMDResilientIterativeExecutor::computeAverages(
  ::x10::lang::Rail< TPMGL(T) >* sum) {
    
    //#line 478 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    ::x10::lang::Rail< x10_double >* result = ::x10::lang::Rail< x10_double >::_make((x10_long)(::x10aux::nullCheck(sum)->FMGL(size)));
    
    //#line 479 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    x10_long i__132547min__132573 = ((x10_long)0ll);
    x10_long i__132547max__132574 = (((x10_long)(::x10aux::nullCheck(sum)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__132575;
        for (i__132575 = i__132547min__132573; ((i__132575) <= (i__132547max__132574));
             i__132575 = ((i__132575) + (((x10_long)1ll))))
        {
            x10_long i__132576 = i__132575;
            
            //#line 480 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
            result->x10::lang::template Rail< x10_double >::__set(
              i__132576, ((::x10aux::class_cast<x10_double>(::x10aux::nullCheck(sum)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                              i__132576))) / (((x10_double) (::x10aux::nullCheck(::x10aux::nullCheck((this->FMGL(manager))->__apply())->activePlaces())->x10::lang::PlaceGroup::size())))));
            
            //#line 481 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
            result->x10::lang::template Rail< x10_double >::__set(
              i__132576, ((((x10_double) (::x10::lang::DoubleNatives::toLong(((result->x10::lang::template Rail< x10_double >::__apply(
                                                                                 i__132576)) * (((x10_double) (((x10_long)100ll))))))))) / (100.0)));
        }
    }
    
    //#line 483 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    return result;
    
}
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_computeAverages_2596
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_NODEPS
