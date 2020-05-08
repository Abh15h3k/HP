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
    static ::x10::lang::String sl__170359;
    static ::x10::lang::String sl__170355;
    static ::x10::lang::String sl__170351;
    static ::x10::lang::String sl__170387;
    static ::x10::lang::String sl__170400;
    static ::x10::lang::String sl__170354;
    static ::x10::lang::String sl__170349;
    static ::x10::lang::String sl__170390;
    static ::x10::lang::String sl__170404;
    static ::x10::lang::String sl__170373;
    static ::x10::lang::String sl__170382;
    static ::x10::lang::String sl__170401;
    static ::x10::lang::String sl__170405;
    static ::x10::lang::String sl__170414;
    static ::x10::lang::String sl__170356;
    static ::x10::lang::String sl__170395;
    static ::x10::lang::String sl__170386;
    static ::x10::lang::String sl__170410;
    static ::x10::lang::String sl__170408;
    static ::x10::lang::String sl__170358;
    static ::x10::lang::String sl__170383;
    static ::x10::lang::String sl__170398;
    static ::x10::lang::String sl__170409;
    static ::x10::lang::String sl__170364;
    static ::x10::lang::String sl__170367;
    static ::x10::lang::String sl__170385;
    static ::x10::lang::String sl__170393;
    static ::x10::lang::String sl__170402;
    static ::x10::lang::String sl__170360;
    static ::x10::lang::String sl__170397;
    static ::x10::lang::String sl__170348;
    static ::x10::lang::String sl__170413;
    static ::x10::lang::String sl__170376;
    static ::x10::lang::String sl__170370;
    static ::x10::lang::String sl__170407;
    static ::x10::lang::String sl__170375;
    static ::x10::lang::String sl__170416;
    static ::x10::lang::String sl__170411;
    static ::x10::lang::String sl__170412;
    static ::x10::lang::String sl__170350;
    static ::x10::lang::String sl__170362;
    static ::x10::lang::String sl__170380;
    static ::x10::lang::String sl__170369;
    static ::x10::lang::String sl__170378;
    static ::x10::lang::String sl__170381;
    static ::x10::lang::String sl__170403;
    static ::x10::lang::String sl__170361;
    static ::x10::lang::String sl__170399;
    static ::x10::lang::String sl__170363;
    static ::x10::lang::String sl__170347;
    static ::x10::lang::String sl__170379;
    static ::x10::lang::String sl__170368;
    static ::x10::lang::String sl__170372;
    static ::x10::lang::String sl__170377;
    static ::x10::lang::String sl__170388;
    static ::x10::lang::String sl__170394;
    static ::x10::lang::String sl__170352;
    static ::x10::lang::String sl__170371;
    static ::x10::lang::String sl__170389;
    static ::x10::lang::String sl__170357;
    static ::x10::lang::String sl__170406;
    static ::x10::lang::String sl__170415;
    static ::x10::lang::String sl__170396;
    static ::x10::lang::String sl__170384;
    static ::x10::lang::String sl__170392;
    static ::x10::lang::String sl__170391;
    static ::x10::lang::String sl__170353;
    static ::x10::lang::String sl__170365;
    static ::x10::lang::String sl__170366;
    static ::x10::lang::String sl__170374;
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

#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_railToString_2623
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_railToString_2623
template<class TPMGL(T)> ::x10::lang::String* x10::util::resilient::iterative::SPMDResilientIterativeExecutor::railToString(
  ::x10::lang::Rail< TPMGL(T) >* r) {
    
    //#line 443 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    if ((::x10aux::struct_equals(r, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        
        //#line 444 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
        return (&::x10::util::resilient::iterative::SPMDResilientIterativeExecutor_Strings::sl__170359);
        
    }
    
    //#line 445 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    ::x10::lang::String* str = (&::x10::util::resilient::iterative::SPMDResilientIterativeExecutor_Strings::sl__170359);
    
    //#line 446 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    x10_long size__149934 = (x10_long)(::x10aux::nullCheck(r)->FMGL(size));
    {
        x10_long idx__149935;
        for (idx__149935 = ((x10_long)0ll); ((idx__149935) < (size__149934));
             idx__149935 = ((idx__149935) + (((x10_long)1ll))))
        {
            TPMGL(T) x__149936 = ::x10aux::nullCheck(r)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                   idx__149935);
            
            //#line 447 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
            str = ::x10::lang::String::__plus(str, ::x10::lang::String::__plus(x__149936, (&::x10::util::resilient::iterative::SPMDResilientIterativeExecutor_Strings::sl__170360)));
        }
    }
    
    //#line 448 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    return str;
    
}
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_railToString_2623
#ifndef X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_computeAverages_2628
#define X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_computeAverages_2628
template<class TPMGL(T)> ::x10::lang::Rail< x10_double >*
  x10::util::resilient::iterative::SPMDResilientIterativeExecutor::computeAverages(
  ::x10::lang::Rail< TPMGL(T) >* sum) {
    
    //#line 478 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    ::x10::lang::Rail< x10_double >* result = ::x10::lang::Rail< x10_double >::_make((x10_long)(::x10aux::nullCheck(sum)->FMGL(size)));
    
    //#line 479 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    x10_long i__149629max__149960 = (((x10_long)(::x10aux::nullCheck(sum)->FMGL(size))) - (((x10_long)1ll)));
    {
        x10_long i__149961;
        for (i__149961 = ((x10_long)0ll); ((i__149961) <= (i__149629max__149960));
             i__149961 = ((i__149961) + (((x10_long)1ll))))
        {
            
            //#line 480 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
            result->x10::lang::template Rail< x10_double >::__set(
              i__149961, ((::x10aux::class_cast<x10_double>(::x10aux::nullCheck(sum)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                              i__149961))) / (((x10_double) ((__extension__ ({
                  ::x10::lang::PlaceGroup* this__149959 =
                    ::x10aux::nullCheck((this->FMGL(manager))->__apply())->activePlaces();
                  ::x10aux::nullCheck(this__149959)->numPlaces();
              }))
              )))));
            
            //#line 481 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
            result->x10::lang::template Rail< x10_double >::__set(
              i__149961, ((((x10_double) (::x10::lang::DoubleNatives::toLong(((result->x10::lang::template Rail< x10_double >::__apply(
                                                                                 i__149961)) * (((x10_double) (((x10_long)100ll))))))))) / (100.0)));
        }
    }
    
    //#line 483 "x10/util/resilient/iterative/SPMDResilientIterativeExecutor.x10"
    return result;
    
}
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_computeAverages_2628
#endif // X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_GENERICS
#endif // __X10_UTIL_RESILIENT_ITERATIVE_SPMDRESILIENTITERATIVEEXECUTOR_H_NODEPS
