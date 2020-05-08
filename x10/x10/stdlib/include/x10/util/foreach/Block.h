#ifndef __X10_UTIL_FOREACH_BLOCK_H
#define __X10_UTIL_FOREACH_BLOCK_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace xrx { 
class Runtime;
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
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace array { 
class BlockingUtils;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

class Block : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1< ::x10::lang::LongRange>* body);
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Block* x10__util__foreach__Block____this__x10__util__foreach__Block(
      );
    void _constructor();
    
    static ::x10::util::foreach::Block* _make();
    
    virtual void __fieldInitializers_x10_util_foreach_Block(
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


} } } 
#endif // X10_UTIL_FOREACH_BLOCK_H

namespace x10 { namespace util { namespace foreach { 
class Block;
} } } 

#ifndef X10_UTIL_FOREACH_BLOCK_H_NODEPS
#define X10_UTIL_FOREACH_BLOCK_H_NODEPS
#include <x10/lang/LongRange.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Inline.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/array/BlockingUtils.h>
#include <x10/array/IterationSpace.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_BLOCK__CLOSURE__4_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 162 "x10/util/foreach/Block.x10"
        x10_long lo__139545 = ((((min__139535) + (((blockSize__139540) * (myT__139544))))) + (((myT__139544) < (leftOver__139541))
          ? (myT__139544) : (leftOver__139541)));
        
        //#line 163 "x10/util/foreach/Block.x10"
        x10_long hi__139546 = ((((lo__139545) + (blockSize__139540))) + (((myT__139544) < (leftOver__139541))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 164 "x10/util/foreach/Block.x10"
        results__139542->x10::lang::template Rail< TPMGL(T) >::__set(
          myT__139544, (__extension__ ({
              ::x10::lang::LongRange range__139547 = ::x10::lang::LongRange::_make(lo__139545, hi__139546);
              
              //#line 102 "x10/util/foreach/Block.x10"
              TPMGL(T) myRes__139548 = identity;
              
              //#line 103 "x10/util/foreach/Block.x10"
              x10_long i__139133min__139521 = range__139547->FMGL(min);
              x10_long i__139133max__139522 = range__139547->FMGL(max);
              {
                  x10_long i__139523;
                  for (i__139523 = i__139133min__139521; ((i__139523) <= (i__139133max__139522));
                       i__139523 = ((i__139523) + (((x10_long)1ll))))
                  {
                      
                      //#line 104 "x10/util/foreach/Block.x10"
                      myRes__139548 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                        myRes__139548, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                          i__139523));
                  }
              }
              myRes__139548;
          }))
          );
    }
    
    // captured environment
    x10_long min__139535;
    x10_long blockSize__139540;
    x10_long myT__139544;
    x10_long leftOver__139541;
    ::x10::lang::Rail< TPMGL(T) >* results__139542;
    TPMGL(T) identity;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->min__139535);
        buf.write(this->blockSize__139540);
        buf.write(this->myT__139544);
        buf.write(this->leftOver__139541);
        buf.write(this->results__139542);
        buf.write(this->identity);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min__139535 = buf.read<x10_long>();
        x10_long that_blockSize__139540 = buf.read<x10_long>();
        x10_long that_myT__139544 = buf.read<x10_long>();
        x10_long that_leftOver__139541 = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results__139542 = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_foreach_Block__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__closure__4<TPMGL(T) >(that_min__139535, that_blockSize__139540, that_myT__139544, that_leftOver__139541, that_results__139542, that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Block__closure__4(x10_long min__139535, x10_long blockSize__139540, x10_long myT__139544, x10_long leftOver__139541, ::x10::lang::Rail< TPMGL(T) >* results__139542, TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) : min__139535(min__139535), blockSize__139540(blockSize__139540), myT__139544(myT__139544), leftOver__139541(leftOver__139541), results__139542(results__139542), identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:161-165";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__4<TPMGL(T) > >x10_util_foreach_Block__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__closure__4<TPMGL(T) >::__apply, &x10_util_foreach_Block__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__closure__4<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__4<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__closure__4<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__CLOSURE__4_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK__CLOSURE__5_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT, (__extension__ ({
                                                                 
                                                                 //#line 88 "x10/util/foreach/Sequential.x10"
                                                                 TPMGL(T) myRes__139325 =
                                                                   identity;
                                                                 
                                                                 //#line 89 "x10/util/foreach/Sequential.x10"
                                                                 x10_long j__137263min__139565 =
                                                                   block->x10::array::DenseIterationSpace_2::min(
                                                                     ((x10_long)1ll));
                                                                 x10_long j__137263max__139566 =
                                                                   block->x10::array::DenseIterationSpace_2::max(
                                                                     ((x10_long)1ll));
                                                                 x10_long i__137294min__139567 =
                                                                   block->x10::array::DenseIterationSpace_2::min(
                                                                     ((x10_long)0ll));
                                                                 x10_long i__137294max__139568 =
                                                                   block->x10::array::DenseIterationSpace_2::max(
                                                                     ((x10_long)0ll));
                                                                 {
                                                                     x10_long i__139569;
                                                                     for (i__139569 =
                                                                            i__137294min__139567;
                                                                          ((i__139569) <= (i__137294max__139568));
                                                                          i__139569 =
                                                                            ((i__139569) + (((x10_long)1ll))))
                                                                     {
                                                                         {
                                                                             x10_long j__139571;
                                                                             for (j__139571 =
                                                                                    j__137263min__139565;
                                                                                  ((j__139571) <= (j__137263max__139566));
                                                                                  j__139571 =
                                                                                    ((j__139571) + (((x10_long)1ll))))
                                                                             {
                                                                                 
                                                                                 //#line 90 "x10/util/foreach/Sequential.x10"
                                                                                 myRes__139325 =
                                                                                   ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                                                                   myRes__139325,
                                                                                   ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                                                     i__139569,
                                                                                     j__139571));
                                                                             }
                                                                         }
                                                                         
                                                                     }
                                                                 }
                                                                 myRes__139325;
                                                             }))
                                                             );
    }
    
    // captured environment
    ::x10::lang::Rail< TPMGL(T) >* results;
    x10_long myT;
    ::x10::array::DenseIterationSpace_2* block;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    TPMGL(T) identity;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->results);
        buf.write(this->myT);
        buf.write(this->block);
        buf.write(this->reduce);
        buf.write(this->identity);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_long that_myT = buf.read<x10_long>();
        ::x10::array::DenseIterationSpace_2* that_block = buf.read< ::x10::array::DenseIterationSpace_2*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Block__closure__5<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__closure__5<TPMGL(T) >(that_results, that_myT, that_block, that_reduce, that_identity, that_body);
        return this_;
    }
    
    x10_util_foreach_Block__closure__5(::x10::lang::Rail< TPMGL(T) >* results, x10_long myT, ::x10::array::DenseIterationSpace_2* block, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) : results(results), myT(myT), block(block), reduce(reduce), identity(identity), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:128";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__5<TPMGL(T) > >x10_util_foreach_Block__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__closure__5<TPMGL(T) >::__apply, &x10_util_foreach_Block__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__closure__5<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__5<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__closure__5<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__CLOSURE__5_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK__CLOSURE__6_CLOSURE
#define X10_UTIL_FOREACH_BLOCK__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Block__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 162 "x10/util/foreach/Block.x10"
        x10_long lo = ((((min) + (((blockSize) * (myT))))) + (((myT) < (leftOver))
          ? (myT) : (leftOver)));
        
        //#line 163 "x10/util/foreach/Block.x10"
        x10_long hi = ((((lo) + (blockSize))) + (((myT) < (leftOver))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 164 "x10/util/foreach/Block.x10"
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT,
                                                             ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                               ::x10::lang::LongRange::_make(lo, hi)));
    }
    
    // captured environment
    x10_long min;
    x10_long blockSize;
    x10_long myT;
    x10_long leftOver;
    ::x10::lang::Rail< TPMGL(T) >* results;
    ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->min);
        buf.write(this->blockSize);
        buf.write(this->myT);
        buf.write(this->leftOver);
        buf.write(this->results);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Block__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Block__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min = buf.read<x10_long>();
        x10_long that_blockSize = buf.read<x10_long>();
        x10_long that_myT = buf.read<x10_long>();
        x10_long that_leftOver = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>();
        x10_util_foreach_Block__closure__6<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Block__closure__6<TPMGL(T) >(that_min, that_blockSize, that_myT, that_leftOver, that_results, that_body);
        return this_;
    }
    
    x10_util_foreach_Block__closure__6(x10_long min, x10_long blockSize, x10_long myT, x10_long leftOver, ::x10::lang::Rail< TPMGL(T) >* results, ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) : min(min), blockSize(blockSize), myT(myT), leftOver(leftOver), results(results), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Block.x10:161-165";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Block__closure__6<TPMGL(T) > >x10_util_foreach_Block__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Block__closure__6<TPMGL(T) >::__apply, &x10_util_foreach_Block__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Block__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Block__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Block__closure__6<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Block__closure__6<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Block__closure__6<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BLOCK__CLOSURE__6_CLOSURE
#ifndef X10_UTIL_FOREACH_BLOCK_H_GENERICS
#define X10_UTIL_FOREACH_BLOCK_H_GENERICS
#ifndef X10_UTIL_FOREACH_BLOCK_H__kwd__for_2257
#define X10_UTIL_FOREACH_BLOCK_H__kwd__for_2257
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block::_kwd__for(::x10::lang::LongRange range,
                                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                                       TPMGL(T) identity,
                                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 108 "x10/util/foreach/Block.x10"
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139529 =
      reduce;
    
    //#line 145 "x10/util/foreach/Block.x10"
    TPMGL(T) ret__139530;
    goto __ret__139531; __ret__139531: {
    {
        
        //#line 148 "x10/util/foreach/Block.x10"
        x10_int nthreads__139532 = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
        
        //#line 149 "x10/util/foreach/Block.x10"
        if ((::x10aux::struct_equals(nthreads__139532, ((x10_int)1))))
        {
            
            //#line 150 "x10/util/foreach/Block.x10"
            ret__139530 = (__extension__ ({
                
                //#line 102 "x10/util/foreach/Block.x10"
                TPMGL(T) myRes__139534 = identity;
                
                //#line 103 "x10/util/foreach/Block.x10"
                x10_long i__139133min__139511 = range->FMGL(min);
                x10_long i__139133max__139512 = range->FMGL(max);
                {
                    x10_long i__139513;
                    for (i__139513 = i__139133min__139511;
                         ((i__139513) <= (i__139133max__139512));
                         i__139513 = ((i__139513) + (((x10_long)1ll))))
                    {
                        
                        //#line 104 "x10/util/foreach/Block.x10"
                        myRes__139534 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myRes__139534, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__139513));
                    }
                }
                myRes__139534;
            }))
            ;
            goto __ret__139531_end_;
        } else {
            
            //#line 152 "x10/util/foreach/Block.x10"
            x10_long min__139535 = range->FMGL(min);
            
            //#line 153 "x10/util/foreach/Block.x10"
            x10_long max__139536 = range->FMGL(max);
            
            //#line 154 "x10/util/foreach/Block.x10"
            x10_long numElems__139537 = ((((max__139536) - (min__139535))) + (((x10_long)1ll)));
            
            //#line 155 "x10/util/foreach/Block.x10"
            if (((numElems__139537) < (((x10_long)1ll))))
            {
                ret__139530 = (__extension__ ({
                    
                    //#line 102 "x10/util/foreach/Block.x10"
                    TPMGL(T) myRes__139539 = identity;
                    
                    //#line 103 "x10/util/foreach/Block.x10"
                    x10_long i__139133min__139516 = range->FMGL(min);
                    x10_long i__139133max__139517 = range->FMGL(max);
                    {
                        x10_long i__139518;
                        for (i__139518 = i__139133min__139516;
                             ((i__139518) <= (i__139133max__139517));
                             i__139518 = ((i__139518) + (((x10_long)1ll))))
                        {
                            
                            //#line 104 "x10/util/foreach/Block.x10"
                            myRes__139539 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__139539, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__139518));
                        }
                    }
                    myRes__139539;
                }))
                ;
                goto __ret__139531_end_;
            }
            
            //#line 156 "x10/util/foreach/Block.x10"
            x10_long blockSize__139540 = ((numElems__139537) / ::x10aux::zeroCheck(((x10_long)(nthreads__139532))));
            
            //#line 157 "x10/util/foreach/Block.x10"
            x10_long leftOver__139541 = ((numElems__139537) - (((((x10_long)(nthreads__139532))) * (blockSize__139540))));
            
            //#line 158 "x10/util/foreach/Block.x10"
            ::x10::lang::Rail< TPMGL(T) >* results__139542 =
              ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads__139532)), false);
            {
                
                //#line 159 "x10/util/foreach/Block.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__139664 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t__139543;
                            for (t__139543 = ((((x10_long)(nthreads__139532))) - (((x10_long)1ll)));
                                 ((t__139543) >= (((x10_long)0ll)));
                                 t__139543 = ((t__139543) - (((x10_long)1ll))))
                            {
                                
                                //#line 160 "x10/util/foreach/Block.x10"
                                x10_long myT__139544 = t__139543;
                                
                                //#line 161 "x10/util/foreach/Block.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__closure__4<TPMGL(T)>)))x10_util_foreach_Block__closure__4<TPMGL(T)>(min__139535, blockSize__139540, myT__139544, leftOver__139541, results__139542, identity, reduce, body))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc2258) {
                    {
                        ::x10::lang::CheckedThrowable* ct__139662 =
                          __exc2258;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__139662);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__139664);
            }
            
            //#line 167 "x10/util/foreach/Block.x10"
            TPMGL(T) res__139549 = results__139542->x10::lang::template Rail< TPMGL(T) >::__apply(
                                     ((x10_long)0ll));
            
            //#line 168 "x10/util/foreach/Block.x10"
            x10_long i__139170max__139525 = ((((x10_long)(nthreads__139532))) - (((x10_long)1ll)));
            {
                x10_long i__139526;
                for (i__139526 = ((x10_long)1ll); ((i__139526) <= (i__139170max__139525));
                     i__139526 = ((i__139526) + (((x10_long)1ll))))
                {
                    
                    //#line 169 "x10/util/foreach/Block.x10"
                    res__139549 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139529), 
                      res__139549, results__139542->x10::lang::template Rail< TPMGL(T) >::__apply(
                                     i__139526));
                }
            }
            
            //#line 171 "x10/util/foreach/Block.x10"
            ret__139530 = res__139549;
            goto __ret__139531_end_;
        }
        
    }goto __ret__139531_end_; __ret__139531_end_: ;
    }
    
    //#line 108 "x10/util/foreach/Block.x10"
    return ret__139530;
    }
    #endif // X10_UTIL_FOREACH_BLOCK_H__kwd__for_2257
    #ifndef X10_UTIL_FOREACH_BLOCK_H__kwd__for_2259
    #define X10_UTIL_FOREACH_BLOCK_H__kwd__for_2259
    template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block::_kwd__for(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
        
        //#line 121 "x10/util/foreach/Block.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 88 "x10/util/foreach/Sequential.x10"
            TPMGL(T) myRes__139563 = identity;
            
            //#line 89 "x10/util/foreach/Sequential.x10"
            x10_long j__137263min__139551 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                              ((x10_long)1ll));
            x10_long j__137263max__139552 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                              ((x10_long)1ll));
            x10_long i__137294min__139553 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                              ((x10_long)0ll));
            x10_long i__137294max__139554 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                              ((x10_long)0ll));
            {
                x10_long i__139555;
                for (i__139555 = i__137294min__139553; ((i__139555) <= (i__137294max__139554));
                     i__139555 = ((i__139555) + (((x10_long)1ll))))
                {
                    {
                        x10_long j__139557;
                        for (j__139557 = j__137263min__139551;
                             ((j__139557) <= (j__137263max__139552));
                             j__139557 = ((j__139557) + (((x10_long)1ll))))
                        {
                            
                            //#line 90 "x10/util/foreach/Sequential.x10"
                            myRes__139563 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__139563, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__139555, j__139557));
                        }
                    }
                    
                }
            }
            
            //#line 122 "x10/util/foreach/Block.x10"
            return myRes__139563;
            
        } else {
            
            //#line 124 "x10/util/foreach/Block.x10"
            ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
            {
                
                //#line 125 "x10/util/foreach/Block.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__139669 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t;
                            for (t = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                                 ((t) >= (((x10_long)0ll)));
                                 t = ((t) - (((x10_long)1ll))))
                            {
                                
                                //#line 126 "x10/util/foreach/Block.x10"
                                x10_long myT = t;
                                
                                //#line 127 "x10/util/foreach/Block.x10"
                                ::x10::array::DenseIterationSpace_2* block =
                                  ::x10::array::BlockingUtils::partitionBlockBlock(
                                    reinterpret_cast< ::x10::array::IterationSpace*>(space),
                                    ((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())),
                                    t);
                                
                                //#line 128 "x10/util/foreach/Block.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__closure__5<TPMGL(T)>)))x10_util_foreach_Block__closure__5<TPMGL(T)>(results, myT, block, reduce, identity, body))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc2260) {
                    {
                        ::x10::lang::CheckedThrowable* ct__139667 =
                          __exc2260;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__139667);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__139669);
            }
            
            //#line 130 "x10/util/foreach/Block.x10"
            TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll));
            
            //#line 131 "x10/util/foreach/Block.x10"
            x10_long i__139152max__139573 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
            {
                x10_long i__139574;
                for (i__139574 = ((x10_long)1ll); ((i__139574) <= (i__139152max__139573));
                     i__139574 = ((i__139574) + (((x10_long)1ll))))
                {
                    
                    //#line 132 "x10/util/foreach/Block.x10"
                    res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             i__139574));
                }
            }
            
            //#line 134 "x10/util/foreach/Block.x10"
            return res;
            
        }
        
    }
    #endif // X10_UTIL_FOREACH_BLOCK_H__kwd__for_2259
    #ifndef X10_UTIL_FOREACH_BLOCK_H__kwd__for_2261
    #define X10_UTIL_FOREACH_BLOCK_H__kwd__for_2261
    template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Block::_kwd__for(
      ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
        
        //#line 148 "x10/util/foreach/Block.x10"
        x10_int nthreads = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
        
        //#line 149 "x10/util/foreach/Block.x10"
        if ((::x10aux::struct_equals(nthreads, ((x10_int)1))))
        {
            
            //#line 150 "x10/util/foreach/Block.x10"
            return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
              range);
            
        } else {
            
            //#line 152 "x10/util/foreach/Block.x10"
            x10_long min = range->FMGL(min);
            
            //#line 153 "x10/util/foreach/Block.x10"
            x10_long max = range->FMGL(max);
            
            //#line 154 "x10/util/foreach/Block.x10"
            x10_long numElems = ((((max) - (min))) + (((x10_long)1ll)));
            
            //#line 155 "x10/util/foreach/Block.x10"
            if (((numElems) < (((x10_long)1ll)))) {
                return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                  range);
                
            }
            
            //#line 156 "x10/util/foreach/Block.x10"
            x10_long blockSize = ((numElems) / ::x10aux::zeroCheck(((x10_long)(nthreads))));
            
            //#line 157 "x10/util/foreach/Block.x10"
            x10_long leftOver = ((numElems) - (((((x10_long)(nthreads))) * (blockSize))));
            
            //#line 158 "x10/util/foreach/Block.x10"
            ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads)), false);
            {
                
                //#line 159 "x10/util/foreach/Block.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__139674 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t;
                            for (t = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
                                 ((t) >= (((x10_long)0ll)));
                                 t = ((t) - (((x10_long)1ll))))
                            {
                                
                                //#line 160 "x10/util/foreach/Block.x10"
                                x10_long myT = t;
                                
                                //#line 161 "x10/util/foreach/Block.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Block__closure__6<TPMGL(T)>)))x10_util_foreach_Block__closure__6<TPMGL(T)>(min, blockSize, myT, leftOver, results, body))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc2262) {
                    {
                        ::x10::lang::CheckedThrowable* ct__139672 =
                          __exc2262;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__139672);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__139674);
            }
            
            //#line 167 "x10/util/foreach/Block.x10"
            TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll));
            
            //#line 168 "x10/util/foreach/Block.x10"
            x10_long i__139170max__139576 = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
            {
                x10_long i__139577;
                for (i__139577 = ((x10_long)1ll); ((i__139577) <= (i__139170max__139576));
                     i__139577 = ((i__139577) + (((x10_long)1ll))))
                {
                    
                    //#line 169 "x10/util/foreach/Block.x10"
                    res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             i__139577));
                }
            }
            
            //#line 171 "x10/util/foreach/Block.x10"
            return res;
            
        }
        
    }
    #endif // X10_UTIL_FOREACH_BLOCK_H__kwd__for_2261
    #endif // X10_UTIL_FOREACH_BLOCK_H_GENERICS
    #endif // __X10_UTIL_FOREACH_BLOCK_H_NODEPS
