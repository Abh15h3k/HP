#ifndef __X10_UTIL_FOREACH_BLOCK__REDUCER_H
#define __X10_UTIL_FOREACH_BLOCK__REDUCER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Cell;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace util { namespace foreach { 
class ReduceNotReady;
} } } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Reducible;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace array { 
class BlockingUtils;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

template<class TPMGL(T)> class Block__Reducer;
template <> class Block__Reducer<void>;
template<class TPMGL(T)> class Block__Reducer : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Cell<TPMGL(T)>* FMGL(result);
    
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* FMGL(reduce);
    
    TPMGL(T) FMGL(identity);
    
    virtual TPMGL(T) value();
    void _constructor(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                      TPMGL(T) identity);
    
    static ::x10::util::foreach::Block__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
             TPMGL(T) identity);
    
    void _constructor(::x10::lang::Reducible<TPMGL(T)>* red);
    
    static ::x10::util::foreach::Block__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Reducible<TPMGL(T)>* red);
    
    virtual TPMGL(T) _kwd__for(::x10::lang::LongRange range, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    virtual TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                               ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Block__Reducer<TPMGL(T)>* x10__util__foreach__Block__Reducer____this__x10__util__foreach__Block__Reducer(
      );
    virtual void __fieldInitializers_x10_util_foreach_Block_Reducer(
      );
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::foreach::Block__Reducer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::foreach::Block__Reducer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.foreach.Block.Reducer";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Block__Reducer<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // X10_UTIL_FOREACH_BLOCK__REDUCER_H

namespace x10 { namespace util { namespace foreach { 
template<class TPMGL(T)> class Block__Reducer;
} } } 

#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER_H_NODEPS
#define X10_UTIL_FOREACH_BLOCK__REDUCER_H_NODEPS
#include <x10/lang/Cell.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/util/foreach/ReduceNotReady.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Reducible.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/array/BlockingUtils.h>
#include <x10/array/IterationSpace.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER_H_GENERICS
#define X10_UTIL_FOREACH_BLOCK__REDUCER_H_GENERICS
#endif // X10_UTIL_FOREACH_BLOCK__REDUCER_H_GENERICS
#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER_H_IMPLEMENTATION
#define X10_UTIL_FOREACH_BLOCK__REDUCER_H_IMPLEMENTATION
#include <x10/util/foreach/Block__Reducer.h>

#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__7_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_foreach_Block__Reducer__closure__7 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(TPMGL(T) a, TPMGL(T) b){
        return ::x10::lang::Reducible<TPMGL(T)>::__apply(::x10aux::nullCheck(red), 
                 a, b);
        
    }
    
    // captured environment
    ::x10::lang::Reducible<TPMGL(T)>* red;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->red);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Reducible<TPMGL(T)>* that_red = buf.read< ::x10::lang::Reducible<TPMGL(T)>*>();
        x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >(that_red);
        return this_;
    }
    
    x10_util_foreach_Block__Reducer__closure__7(::x10::lang::Reducible<TPMGL(T)>* red) : red(red) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:217";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) > >x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::__apply, &x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__Reducer__closure__7<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__7_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__8_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__Reducer__closure__8 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 162 "x10/util/foreach/Block.x10"
        x10_long lo__139617 = ((((min__139607) + (((blockSize__139612) * (myT__139616))))) + (((myT__139616) < (leftOver__139613))
          ? (myT__139616) : (leftOver__139613)));
        
        //#line 163 "x10/util/foreach/Block.x10"
        x10_long hi__139618 = ((((lo__139617) + (blockSize__139612))) + (((myT__139616) < (leftOver__139613))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 164 "x10/util/foreach/Block.x10"
        results__139614->x10::lang::template Rail< TPMGL(T) >::__set(
          myT__139616, (__extension__ ({
              ::x10::lang::LongRange range__139619 = ::x10::lang::LongRange::_make(lo__139617, hi__139618);
              
              //#line 102 "x10/util/foreach/Block.x10"
              TPMGL(T) myRes__139620 = identity__139345;
              
              //#line 103 "x10/util/foreach/Block.x10"
              x10_long i__139133min__139593 = range__139619->FMGL(min);
              x10_long i__139133max__139594 = range__139619->FMGL(max);
              {
                  x10_long i__139595;
                  for (i__139595 = i__139133min__139593; ((i__139595) <= (i__139133max__139594));
                       i__139595 = ((i__139595) + (((x10_long)1ll))))
                  {
                      
                      //#line 104 "x10/util/foreach/Block.x10"
                      myRes__139620 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139344), 
                        myRes__139620, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__139346), 
                          i__139595));
                  }
              }
              myRes__139620;
          }))
          );
    }
    
    // captured environment
    x10_long min__139607;
    x10_long blockSize__139612;
    x10_long myT__139616;
    x10_long leftOver__139613;
    ::x10::lang::Rail< TPMGL(T) >* results__139614;
    TPMGL(T) identity__139345;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139344;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__139346;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->min__139607);
        buf.write(this->blockSize__139612);
        buf.write(this->myT__139616);
        buf.write(this->leftOver__139613);
        buf.write(this->results__139614);
        buf.write(this->identity__139345);
        buf.write(this->reduce__139344);
        buf.write(this->body__139346);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min__139607 = buf.read<x10_long>();
        x10_long that_blockSize__139612 = buf.read<x10_long>();
        x10_long that_myT__139616 = buf.read<x10_long>();
        x10_long that_leftOver__139613 = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results__139614 = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        TPMGL(T) that_identity__139345 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__139344 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body__139346 = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >(that_min__139607, that_blockSize__139612, that_myT__139616, that_leftOver__139613, that_results__139614, that_identity__139345, that_reduce__139344, that_body__139346);
        return this_;
    }
    
    x10_util_foreach_Block__Reducer__closure__8(x10_long min__139607, x10_long blockSize__139612, x10_long myT__139616, x10_long leftOver__139613, ::x10::lang::Rail< TPMGL(T) >* results__139614, TPMGL(T) identity__139345, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139344, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__139346) : min__139607(min__139607), blockSize__139612(blockSize__139612), myT__139616(myT__139616), leftOver__139613(leftOver__139613), results__139614(results__139614), identity__139345(identity__139345), reduce__139344(reduce__139344), body__139346(body__139346) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:161-165";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) > >x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::__apply, &x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__Reducer__closure__8<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__8_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__9_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__Reducer__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        results__139409->x10::lang::template Rail< TPMGL(T) >::__set(myT__139411,
                                                                     (__extension__ ({
                                                                         
                                                                         //#line 88 "x10/util/foreach/Sequential.x10"
                                                                         TPMGL(T) myRes__139440 =
                                                                           identity__139407;
                                                                         
                                                                         //#line 89 "x10/util/foreach/Sequential.x10"
                                                                         x10_long j__137263min__139633 =
                                                                           block__139412->x10::array::DenseIterationSpace_2::min(
                                                                             ((x10_long)1ll));
                                                                         x10_long j__137263max__139634 =
                                                                           block__139412->x10::array::DenseIterationSpace_2::max(
                                                                             ((x10_long)1ll));
                                                                         x10_long i__137294min__139635 =
                                                                           block__139412->x10::array::DenseIterationSpace_2::min(
                                                                             ((x10_long)0ll));
                                                                         x10_long i__137294max__139636 =
                                                                           block__139412->x10::array::DenseIterationSpace_2::max(
                                                                             ((x10_long)0ll));
                                                                         {
                                                                             x10_long i__139637;
                                                                             for (i__139637 =
                                                                                    i__137294min__139635;
                                                                                  ((i__139637) <= (i__137294max__139636));
                                                                                  i__139637 =
                                                                                    ((i__139637) + (((x10_long)1ll))))
                                                                             {
                                                                                 {
                                                                                     x10_long j__139639;
                                                                                     for (j__139639 =
                                                                                            j__137263min__139633;
                                                                                          ((j__139639) <= (j__137263max__139634));
                                                                                          j__139639 =
                                                                                            ((j__139639) + (((x10_long)1ll))))
                                                                                     {
                                                                                         
                                                                                         //#line 90 "x10/util/foreach/Sequential.x10"
                                                                                         myRes__139440 =
                                                                                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139406), 
                                                                                           myRes__139440,
                                                                                           ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__139408), 
                                                                                             i__139637,
                                                                                             j__139639));
                                                                                     }
                                                                                 }
                                                                                 
                                                                             }
                                                                         }
                                                                         myRes__139440;
                                                                     }))
                                                                     );
    }
    
    // captured environment
    ::x10::lang::Rail< TPMGL(T) >* results__139409;
    x10_long myT__139411;
    ::x10::array::DenseIterationSpace_2* block__139412;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139406;
    TPMGL(T) identity__139407;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__139408;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->results__139409);
        buf.write(this->myT__139411);
        buf.write(this->block__139412);
        buf.write(this->reduce__139406);
        buf.write(this->identity__139407);
        buf.write(this->body__139408);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Rail< TPMGL(T) >* that_results__139409 = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_long that_myT__139411 = buf.read<x10_long>();
        ::x10::array::DenseIterationSpace_2* that_block__139412 = buf.read< ::x10::array::DenseIterationSpace_2*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__139406 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        TPMGL(T) that_identity__139407 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body__139408 = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >(that_results__139409, that_myT__139411, that_block__139412, that_reduce__139406, that_identity__139407, that_body__139408);
        return this_;
    }
    
    x10_util_foreach_Block__Reducer__closure__9(::x10::lang::Rail< TPMGL(T) >* results__139409, x10_long myT__139411, ::x10::array::DenseIterationSpace_2* block__139412, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139406, TPMGL(T) identity__139407, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__139408) : results__139409(results__139409), myT__139411(myT__139411), block__139412(block__139412), reduce__139406(reduce__139406), identity__139407(identity__139407), body__139408(body__139408) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:128";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) > >x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::__apply, &x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__Reducer__closure__9<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__REDUCER__CLOSURE__9_CLOSURE

//#line 179 "x10/util/foreach/Block.x10"

//#line 184 "x10/util/foreach/Block.x10"
/**
         * The reduction operation.
         */

//#line 189 "x10/util/foreach/Block.x10"
/**
         * The identity value for the reduction operation such that reduce(identity,f)=f.
         */

//#line 197 "x10/util/foreach/Block.x10"
/**
         * Access to the result of the last reduction. It may
         * raise <code>ReduceNotReady</code> if no result has been
         * computed yet.
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block__Reducer<TPMGL(T)>::value(
  ) {
    
    //#line 198 "x10/util/foreach/Block.x10"
    if ((::x10aux::struct_equals(this->FMGL(result), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::util::foreach::ReduceNotReady::_make()));
    }
    
    //#line 199 "x10/util/foreach/Block.x10"
    ::x10::lang::Cell<TPMGL(T)>* this__139579 = this->FMGL(result);
    return ::x10aux::nullCheck(this__139579)->FMGL(value);
    
}

//#line 207 "x10/util/foreach/Block.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param reduce the reduction operation
         * @param identity the identity value for the reduction operation such that reduce(identity,f)=f
         */
template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    
    //#line 178 "x10/util/foreach/Block.x10"
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this__139580 =
      this;
    ::x10aux::nullCheck(this__139580)->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 208 "x10/util/foreach/Block.x10"
    this->FMGL(reduce) = (reduce);
    
    //#line 209 "x10/util/foreach/Block.x10"
    this->FMGL(identity) = identity;
}
template<class TPMGL(T)> ::x10::util::foreach::Block__Reducer<TPMGL(T)>* x10::util::foreach::Block__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Block__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Block__Reducer<TPMGL(T)>();
    this_->_constructor(reduce, identity);
    return this_;
}



//#line 216 "x10/util/foreach/Block.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param red the reduction operation
         */
template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Reducible<TPMGL(T)>* red) {
    
    //#line 178 "x10/util/foreach/Block.x10"
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this__139581 =
      this;
    ::x10aux::nullCheck(this__139581)->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 217 "x10/util/foreach/Block.x10"
    this->FMGL(reduce) = reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_foreach_Block__Reducer__closure__7<TPMGL(T)>)))x10_util_foreach_Block__Reducer__closure__7<TPMGL(T)>(red)));
    
    //#line 218 "x10/util/foreach/Block.x10"
    this->FMGL(identity) = ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(red));
}
template<class TPMGL(T)> ::x10::util::foreach::Block__Reducer<TPMGL(T)>* x10::util::foreach::Block__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Reducible<TPMGL(T)>* red)
{
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Block__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Block__Reducer<TPMGL(T)>();
    this_->_constructor(red);
    return this_;
}



//#line 226 "x10/util/foreach/Block.x10"
/**
         * Reduce over a range of indices in parallel using a block decomposition.
         * @param range the iteration space
         * @param body a closure that executes over a single value of the index
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block__Reducer<TPMGL(T)>::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 228 "x10/util/foreach/Block.x10"
    TPMGL(T) res = (__extension__ ({
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139344 =
          this->FMGL(reduce);
        TPMGL(T) identity__139345 = this->FMGL(identity);
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__139346 =
          body;
        
        //#line 98 "x10/util/foreach/Block.x10"
        TPMGL(T) ret__139355;
        (__extension__ ({
            
            //#line 108 "x10/util/foreach/Block.x10"
            ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139601 =
              reduce__139344;
            
            //#line 145 "x10/util/foreach/Block.x10"
            TPMGL(T) ret__139602;
            goto __ret__139603; __ret__139603: {
            {
                
                //#line 148 "x10/util/foreach/Block.x10"
                x10_int nthreads__139604 = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
                
                //#line 149 "x10/util/foreach/Block.x10"
                if ((::x10aux::struct_equals(nthreads__139604,
                                             ((x10_int)1))))
                {
                    
                    //#line 150 "x10/util/foreach/Block.x10"
                    ret__139602 = (__extension__ ({
                        
                        //#line 102 "x10/util/foreach/Block.x10"
                        TPMGL(T) myRes__139606 = identity__139345;
                        
                        //#line 103 "x10/util/foreach/Block.x10"
                        x10_long i__139133min__139583 = range->FMGL(min);
                        x10_long i__139133max__139584 = range->FMGL(max);
                        {
                            x10_long i__139585;
                            for (i__139585 = i__139133min__139583;
                                 ((i__139585) <= (i__139133max__139584));
                                 i__139585 = ((i__139585) + (((x10_long)1ll))))
                            {
                                
                                //#line 104 "x10/util/foreach/Block.x10"
                                myRes__139606 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139344), 
                                  myRes__139606, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                    i__139585));
                            }
                        }
                        myRes__139606;
                    }))
                    ;
                    goto __ret__139603_end_;
                } else {
                    
                    //#line 152 "x10/util/foreach/Block.x10"
                    x10_long min__139607 = range->FMGL(min);
                    
                    //#line 153 "x10/util/foreach/Block.x10"
                    x10_long max__139608 = range->FMGL(max);
                    
                    //#line 154 "x10/util/foreach/Block.x10"
                    x10_long numElems__139609 = ((((max__139608) - (min__139607))) + (((x10_long)1ll)));
                    
                    //#line 155 "x10/util/foreach/Block.x10"
                    if (((numElems__139609) < (((x10_long)1ll))))
                    {
                        ret__139602 = (__extension__ ({
                            
                            //#line 102 "x10/util/foreach/Block.x10"
                            TPMGL(T) myRes__139611 = identity__139345;
                            
                            //#line 103 "x10/util/foreach/Block.x10"
                            x10_long i__139133min__139588 =
                              range->FMGL(min);
                            x10_long i__139133max__139589 =
                              range->FMGL(max);
                            {
                                x10_long i__139590;
                                for (i__139590 = i__139133min__139588;
                                     ((i__139590) <= (i__139133max__139589));
                                     i__139590 = ((i__139590) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 104 "x10/util/foreach/Block.x10"
                                    myRes__139611 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139344), 
                                      myRes__139611, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                        i__139590));
                                }
                            }
                            myRes__139611;
                        }))
                        ;
                        goto __ret__139603_end_;
                    }
                    
                    //#line 156 "x10/util/foreach/Block.x10"
                    x10_long blockSize__139612 = ((numElems__139609) / ::x10aux::zeroCheck(((x10_long)(nthreads__139604))));
                    
                    //#line 157 "x10/util/foreach/Block.x10"
                    x10_long leftOver__139613 = ((numElems__139609) - (((((x10_long)(nthreads__139604))) * (blockSize__139612))));
                    
                    //#line 158 "x10/util/foreach/Block.x10"
                    ::x10::lang::Rail< TPMGL(T) >* results__139614 =
                      ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads__139604)), false);
                    {
                        
                        //#line 159 "x10/util/foreach/Block.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__139679 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                {
                                    x10_long t__139615;
                                    for (t__139615 = ((((x10_long)(nthreads__139604))) - (((x10_long)1ll)));
                                         ((t__139615) >= (((x10_long)0ll)));
                                         t__139615 = ((t__139615) - (((x10_long)1ll))))
                                    {
                                        
                                        //#line 160 "x10/util/foreach/Block.x10"
                                        x10_long myT__139616 =
                                          t__139615;
                                        
                                        //#line 161 "x10/util/foreach/Block.x10"
                                        ::x10::xrx::Runtime::runAsync(
                                          reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__Reducer__closure__8<TPMGL(T)>)))x10_util_foreach_Block__Reducer__closure__8<TPMGL(T)>(min__139607, blockSize__139612, myT__139616, leftOver__139613, results__139614, identity__139345, reduce__139344, body__139346))));
                                    }
                                }
                                
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc2267) {
                            {
                                ::x10::lang::CheckedThrowable* ct__139677 =
                                  __exc2267;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__139677);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__139679);
                    }
                    
                    //#line 167 "x10/util/foreach/Block.x10"
                    TPMGL(T) res__139621 = results__139614->x10::lang::template Rail< TPMGL(T) >::__apply(
                                             ((x10_long)0ll));
                    
                    //#line 168 "x10/util/foreach/Block.x10"
                    x10_long i__139170max__139597 = ((((x10_long)(nthreads__139604))) - (((x10_long)1ll)));
                    {
                        x10_long i__139598;
                        for (i__139598 = ((x10_long)1ll);
                             ((i__139598) <= (i__139170max__139597));
                             i__139598 = ((i__139598) + (((x10_long)1ll))))
                        {
                            
                            //#line 169 "x10/util/foreach/Block.x10"
                            res__139621 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139601), 
                              res__139621, results__139614->x10::lang::template Rail< TPMGL(T) >::__apply(
                                             i__139598));
                        }
                    }
                    
                    //#line 171 "x10/util/foreach/Block.x10"
                    ret__139602 = res__139621;
                    goto __ret__139603_end_;
                }
                
            }goto __ret__139603_end_; __ret__139603_end_: ;
            }
            ret__139602;
            }))
            ;
        }))
        ;
        
    
    //#line 229 "x10/util/foreach/Block.x10"
    this->FMGL(result) = (__extension__ ({
        ::x10::lang::Cell<TPMGL(T)>* alloc__139130 =  (new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>());
        
        //#line 33 "x10/lang/Cell.x10"
        alloc__139130->FMGL(value) = res;
        alloc__139130;
    }))
    ;
    
    //#line 230 "x10/util/foreach/Block.x10"
    return res;
    }
    

//#line 238 "x10/util/foreach/Block.x10"
/**
         * Reduce over a range of indices in parallel using a block decomposition.
         * @param space the 2D dense space over which to reduce
         * @param body a closure that executes over a single index [i,j]
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block__Reducer<TPMGL(T)>::_kwd__for(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
    
    //#line 240 "x10/util/foreach/Block.x10"
    TPMGL(T) res = (__extension__ ({
        ::x10::array::DenseIterationSpace_2* space__139405 =
          space;
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139406 =
          this->FMGL(reduce);
        TPMGL(T) identity__139407 = this->FMGL(identity);
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__139408 =
          body;
        
        //#line 118 "x10/util/foreach/Block.x10"
        TPMGL(T) ret__139418;
        goto __ret__139419; __ret__139419: {
        {
            
            //#line 121 "x10/util/foreach/Block.x10"
            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                         ((x10_int)1)))) {
                
                //#line 122 "x10/util/foreach/Block.x10"
                ret__139418 = (__extension__ ({
                    
                    //#line 88 "x10/util/foreach/Sequential.x10"
                    TPMGL(T) myRes__139424 = identity__139407;
                    
                    //#line 89 "x10/util/foreach/Sequential.x10"
                    x10_long j__137263min__139624 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                      ((x10_long)1ll));
                    x10_long j__137263max__139625 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                      ((x10_long)1ll));
                    x10_long i__137294min__139626 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                      ((x10_long)0ll));
                    x10_long i__137294max__139627 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                      ((x10_long)0ll));
                    {
                        x10_long i__139628;
                        for (i__139628 = i__137294min__139626;
                             ((i__139628) <= (i__137294max__139627));
                             i__139628 = ((i__139628) + (((x10_long)1ll))))
                        {
                            {
                                x10_long j__139630;
                                for (j__139630 = j__137263min__139624;
                                     ((j__139630) <= (j__137263max__139625));
                                     j__139630 = ((j__139630) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 90 "x10/util/foreach/Sequential.x10"
                                    myRes__139424 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139406), 
                                      myRes__139424, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                        i__139628, j__139630));
                                }
                            }
                            
                        }
                    }
                    myRes__139424;
                }))
                ;
                goto __ret__139419_end_;
            } else {
                
                //#line 124 "x10/util/foreach/Block.x10"
                ::x10::lang::Rail< TPMGL(T) >* results__139409 =
                  ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
                {
                    
                    //#line 125 "x10/util/foreach/Block.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__139684 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            {
                                x10_long t__139410;
                                for (t__139410 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                                     ((t__139410) >= (((x10_long)0ll)));
                                     t__139410 = ((t__139410) - (((x10_long)1ll))))
                                {
                                    
                                    //#line 126 "x10/util/foreach/Block.x10"
                                    x10_long myT__139411 =
                                      t__139410;
                                    
                                    //#line 127 "x10/util/foreach/Block.x10"
                                    ::x10::array::DenseIterationSpace_2* block__139412 =
                                      ::x10::array::BlockingUtils::partitionBlockBlock(
                                        reinterpret_cast< ::x10::array::IterationSpace*>(space__139405),
                                        ((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())),
                                        t__139410);
                                    
                                    //#line 128 "x10/util/foreach/Block.x10"
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__Reducer__closure__9<TPMGL(T)>)))x10_util_foreach_Block__Reducer__closure__9<TPMGL(T)>(results__139409, myT__139411, block__139412, reduce__139406, identity__139407, body__139408))));
                                }
                            }
                            
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc2269) {
                        {
                            ::x10::lang::CheckedThrowable* ct__139682 =
                              __exc2269;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__139682);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__139684);
                }
                
                //#line 130 "x10/util/foreach/Block.x10"
                TPMGL(T) res__139413 = results__139409->x10::lang::template Rail< TPMGL(T) >::__apply(
                                         ((x10_long)0ll));
                
                //#line 131 "x10/util/foreach/Block.x10"
                x10_long i__139152max__139641 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                {
                    x10_long i__139642;
                    for (i__139642 = ((x10_long)1ll); ((i__139642) <= (i__139152max__139641));
                         i__139642 = ((i__139642) + (((x10_long)1ll))))
                    {
                        
                        //#line 132 "x10/util/foreach/Block.x10"
                        res__139413 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139406), 
                          res__139413, results__139409->x10::lang::template Rail< TPMGL(T) >::__apply(
                                         i__139642));
                    }
                }
                
                //#line 134 "x10/util/foreach/Block.x10"
                ret__139418 = res__139413;
                goto __ret__139419_end_;
            }
            
        }goto __ret__139419_end_; __ret__139419_end_: ;
        }
        ret__139418;
        }))
        ;
        
    
    //#line 241 "x10/util/foreach/Block.x10"
    this->FMGL(result) = (__extension__ ({
        ::x10::lang::Cell<TPMGL(T)>* alloc__139131 =  (new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>());
        
        //#line 33 "x10/lang/Cell.x10"
        alloc__139131->FMGL(value) = res;
        alloc__139131;
    }))
    ;
    
    //#line 242 "x10/util/foreach/Block.x10"
    return res;
    }
    

//#line 178 "x10/util/foreach/Block.x10"
template<class TPMGL(T)> ::x10::util::foreach::Block__Reducer<TPMGL(T)>*
  x10::util::foreach::Block__Reducer<TPMGL(T)>::x10__util__foreach__Block__Reducer____this__x10__util__foreach__Block__Reducer(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::__fieldInitializers_x10_util_foreach_Block_Reducer(
  ) {
    this->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::foreach::Block__Reducer<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::foreach::Block__Reducer<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(result));
    buf.write(this->FMGL(reduce));
    buf.write(this->FMGL(identity));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::foreach::Block__Reducer<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::foreach::Block__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Block__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Block__Reducer<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::foreach::Block__Reducer<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(result) = buf.read< ::x10::lang::Cell<TPMGL(T)>*>();
    FMGL(reduce) = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
    FMGL(identity) = buf.read<TPMGL(T)>();
}

#endif // X10_UTIL_FOREACH_BLOCK__REDUCER_H_IMPLEMENTATION
#endif // __X10_UTIL_FOREACH_BLOCK__REDUCER_H_NODEPS
