#ifndef __X10_COMPILER_FOREACH_H
#define __X10_COMPILER_FOREACH_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
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
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace array { 
class BlockingUtils;
} } 
namespace x10 { namespace array { 
class IterationSpace;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(Z4)>
class VoidFun_0_4;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(Z4), class TPMGL(U)>
class Fun_0_4;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace compiler { 

class Foreach : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void sequential(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void sequential(x10_long min0, x10_long max0, x10_long min1,
                           x10_long max1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void sequential(x10_long min, x10_long max, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void sequential(::x10::array::DenseIterationSpace_2* space,
                           ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) sequentialReduce(x10_long min,
                                                              x10_long max,
                                                              ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
                                                              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                              TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) sequentialReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    template<class TPMGL(T)> static TPMGL(T) sequentialReduce(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    static void basic(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void basic(x10_long min0, x10_long max0, x10_long min1,
                      x10_long max1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void block(x10_long min, x10_long max, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void block(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) blockReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    template<class TPMGL(T)> static TPMGL(T) blockReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    static void block(x10_long min0, x10_long max0, x10_long min1,
                      x10_long max1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void block(::x10::array::DenseIterationSpace_2* space,
                      ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) blockReduce(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    static void cyclic(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) cyclicReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    static void bisect(x10_long min, x10_long max, x10_long grainSize,
                       ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void bisect(x10_long min, x10_long max, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void bisect(x10_long min, x10_long max, x10_long grainSize,
                       ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void bisect(x10_long min, x10_long max, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void doBisect1D(x10_long start, x10_long end, x10_long grainSize,
                           ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min, x10_long max, x10_long grainSize, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min, x10_long max, x10_long grainSize, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) doBisectReduce1D(
      x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    static void bisect(x10_long min0, x10_long max0, x10_long min1,
                       x10_long max1, x10_long grainSize0,
                       x10_long grainSize1, ::x10::lang::VoidFun_0_4<x10_long, x10_long, x10_long, x10_long>* body);
    static void bisect(x10_long min0, x10_long max0, x10_long min1,
                       x10_long max1, ::x10::lang::VoidFun_0_4<x10_long, x10_long, x10_long, x10_long>* body);
    static void bisect(x10_long min0, x10_long max0, x10_long min1,
                       x10_long max1, x10_long grainSize0,
                       x10_long grainSize1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void bisect(x10_long min0, x10_long max0, x10_long min1,
                       x10_long max1, ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void doBisect2D(x10_long s0, x10_long e0, x10_long s1,
                           x10_long e1, x10_long g1, x10_long g2,
                           ::x10::lang::VoidFun_0_4<x10_long, x10_long, x10_long, x10_long>* body);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      x10_long min0, x10_long max0, x10_long min1, x10_long max1,
      x10_long grainSize0, x10_long grainSize1, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      ::x10::array::DenseIterationSpace_2* space, x10_long grainSize0,
      x10_long grainSize1, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) bisectReduce(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity);
    template<class TPMGL(T)> static TPMGL(T) doBisectReduce2D(
      x10_long s0, x10_long e0, x10_long s1, x10_long e1,
      x10_long g1, x10_long g2, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce);
    virtual ::x10::compiler::Foreach* x10__compiler__Foreach____this__x10__compiler__Foreach(
      );
    void _constructor();
    
    static ::x10::compiler::Foreach* _make();
    
    virtual void __fieldInitializers_x10_compiler_Foreach(
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


} } 
#endif // X10_COMPILER_FOREACH_H

namespace x10 { namespace compiler { 
class Foreach;
} } 

#ifndef X10_COMPILER_FOREACH_H_NODEPS
#define X10_COMPILER_FOREACH_H_NODEPS
#include <x10/lang/Long.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Boolean.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/BlockingUtils.h>
#include <x10/array/IterationSpace.h>
#include <x10/lang/VoidFun_0_4.h>
#include <x10/lang/Fun_0_4.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_COMPILER_FOREACH__CLOSURE__5_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 257 "x10/compiler/Foreach.x10"
        x10_long lo = ((((min) + (((blockSize) * (myT))))) + (((myT) < (leftOver))
          ? (myT) : (leftOver)));
        
        //#line 258 "x10/compiler/Foreach.x10"
        x10_long hi = ((((lo) + (blockSize))) + (((myT) < (leftOver))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 259 "x10/compiler/Foreach.x10"
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT,
                                                             ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                               lo,
                                                               hi));
    }
    
    // captured environment
    x10_long min;
    x10_long blockSize;
    x10_long myT;
    x10_long leftOver;
    ::x10::lang::Rail< TPMGL(T) >* results;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    
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
        x10_compiler_Foreach__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min = buf.read<x10_long>();
        x10_long that_blockSize = buf.read<x10_long>();
        x10_long that_myT = buf.read<x10_long>();
        x10_long that_leftOver = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__5<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__5<TPMGL(T) >(that_min, that_blockSize, that_myT, that_leftOver, that_results, that_body);
        return this_;
    }
    
    x10_compiler_Foreach__closure__5(x10_long min, x10_long blockSize, x10_long myT, x10_long leftOver, ::x10::lang::Rail< TPMGL(T) >* results, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) : min(min), blockSize(blockSize), myT(myT), leftOver(leftOver), results(results), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:256-260";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__5<TPMGL(T) > >x10_compiler_Foreach__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__5<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__5<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__5<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__5<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__5_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__6_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 257 "x10/compiler/Foreach.x10"
        x10_long lo__104441 = ((((min__104423) + (((blockSize__104436) * (myT__104440))))) + (((myT__104440) < (leftOver__104437))
          ? (myT__104440) : (leftOver__104437)));
        
        //#line 258 "x10/compiler/Foreach.x10"
        x10_long hi__104442 = ((((lo__104441) + (blockSize__104436))) + (((myT__104440) < (leftOver__104437))
          ? (((x10_long)0ll)) : (((x10_long)-1ll))));
        
        //#line 259 "x10/compiler/Foreach.x10"
        results__104438->x10::lang::template Rail< TPMGL(T) >::__set(
          myT__104440, (__extension__ ({
              
              //#line 285 "x10/compiler/Foreach.x10"
              TPMGL(T) myRes__104445 = identity;
              
              //#line 286 "x10/compiler/Foreach.x10"
              {
                  x10_long i__104418;
                  for (i__104418 = lo__104441; ((i__104418) <= (hi__104442));
                       i__104418 = ((i__104418) + (((x10_long)1ll))))
                  {
                      
                      //#line 287 "x10/compiler/Foreach.x10"
                      myRes__104445 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                        myRes__104445, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                          i__104418));
                  }
              }
              myRes__104445;
          }))
          );
    }
    
    // captured environment
    x10_long min__104423;
    x10_long blockSize__104436;
    x10_long myT__104440;
    x10_long leftOver__104437;
    ::x10::lang::Rail< TPMGL(T) >* results__104438;
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
        buf.write(this->min__104423);
        buf.write(this->blockSize__104436);
        buf.write(this->myT__104440);
        buf.write(this->leftOver__104437);
        buf.write(this->results__104438);
        buf.write(this->identity);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_long that_min__104423 = buf.read<x10_long>();
        x10_long that_blockSize__104436 = buf.read<x10_long>();
        x10_long that_myT__104440 = buf.read<x10_long>();
        x10_long that_leftOver__104437 = buf.read<x10_long>();
        ::x10::lang::Rail< TPMGL(T) >* that_results__104438 = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__6<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__6<TPMGL(T) >(that_min__104423, that_blockSize__104436, that_myT__104440, that_leftOver__104437, that_results__104438, that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_compiler_Foreach__closure__6(x10_long min__104423, x10_long blockSize__104436, x10_long myT__104440, x10_long leftOver__104437, ::x10::lang::Rail< TPMGL(T) >* results__104438, TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) : min__104423(min__104423), blockSize__104436(blockSize__104436), myT__104440(myT__104440), leftOver__104437(leftOver__104437), results__104438(results__104438), identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:256-260";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__6<TPMGL(T) > >x10_compiler_Foreach__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__6<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__6<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__6<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__6<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__6_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__9_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__9 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__9<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        results->x10::lang::template Rail< TPMGL(T) >::__set(myT, (__extension__ ({
                                                                 
                                                                 //#line 139 "x10/compiler/Foreach.x10"
                                                                 TPMGL(T) myRes__103962 =
                                                                   identity;
                                                                 
                                                                 //#line 140 "x10/compiler/Foreach.x10"
                                                                 x10_long i__103453min__104530 =
                                                                   block->FMGL(min0);
                                                                 x10_long i__103453max__104531 =
                                                                   block->FMGL(max0);
                                                                 {
                                                                     x10_long i__104532;
                                                                     for (i__104532 =
                                                                            i__103453min__104530;
                                                                          ((i__104532) <= (i__103453max__104531));
                                                                          i__104532 =
                                                                            ((i__104532) + (((x10_long)1ll))))
                                                                     {
                                                                         
                                                                         //#line 141 "x10/compiler/Foreach.x10"
                                                                         x10_long i__103435min__104526 =
                                                                           block->FMGL(min1);
                                                                         x10_long i__103435max__104527 =
                                                                           block->FMGL(max1);
                                                                         {
                                                                             x10_long i__104528;
                                                                             for (i__104528 =
                                                                                    i__103435min__104526;
                                                                                  ((i__104528) <= (i__103435max__104527));
                                                                                  i__104528 =
                                                                                    ((i__104528) + (((x10_long)1ll))))
                                                                             {
                                                                                 
                                                                                 //#line 142 "x10/compiler/Foreach.x10"
                                                                                 myRes__103962 =
                                                                                   ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                                                                   myRes__103962,
                                                                                   ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                                                     i__104532,
                                                                                     i__104528));
                                                                             }
                                                                         }
                                                                         
                                                                     }
                                                                 }
                                                                 myRes__103962;
                                                             }))
                                                             );
    }
    
    // captured environment
    ::x10::lang::Rail< TPMGL(T) >* results;
    x10_long myT;
    ::x10::array::DenseIterationSpace_2* block;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    TPMGL(T) identity;
    
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
        buf.write(this->body);
        buf.write(this->reduce);
        buf.write(this->identity);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__9<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_long that_myT = buf.read<x10_long>();
        ::x10::array::DenseIterationSpace_2* that_block = buf.read< ::x10::array::DenseIterationSpace_2*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        x10_compiler_Foreach__closure__9<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__9<TPMGL(T) >(that_results, that_myT, that_block, that_body, that_reduce, that_identity);
        return this_;
    }
    
    x10_compiler_Foreach__closure__9(::x10::lang::Rail< TPMGL(T) >* results, x10_long myT, ::x10::array::DenseIterationSpace_2* block, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, TPMGL(T) identity) : results(results), myT(myT), block(block), body(body), reduce(reduce), identity(identity) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:356";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__9<TPMGL(T) > >x10_compiler_Foreach__closure__9<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__9<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__9<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__9<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__9<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__9<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__9<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__9<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__9<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__9_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__11_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__11 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__11<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 407 "x10/compiler/Foreach.x10"
        TPMGL(T) myRes__104558 = identity;
        
        //#line 408 "x10/compiler/Foreach.x10"
        {
            x10_long i__104559;
            for (i__104559 = ((min) + (t__104562)); ((i__104559) <= (max));
                 i__104559 = ((i__104559) + (((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))))
            {
                
                //#line 409 "x10/compiler/Foreach.x10"
                myRes__104558 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__104558, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__104559));
            }
        }
        
        //#line 411 "x10/compiler/Foreach.x10"
        results->x10::lang::template Rail< TPMGL(T) >::__set(
          t__104562, myRes__104558);
    }
    
    // captured environment
    TPMGL(T) identity;
    x10_long min;
    x10_long t__104562;
    x10_long max;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body;
    ::x10::lang::Rail< TPMGL(T) >* results;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity);
        buf.write(this->min);
        buf.write(this->t__104562);
        buf.write(this->max);
        buf.write(this->reduce);
        buf.write(this->body);
        buf.write(this->results);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__11<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        x10_long that_min = buf.read<x10_long>();
        x10_long that_t__104562 = buf.read<x10_long>();
        x10_long that_max = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Rail< TPMGL(T) >* that_results = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_compiler_Foreach__closure__11<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__11<TPMGL(T) >(that_identity, that_min, that_t__104562, that_max, that_reduce, that_body, that_results);
        return this_;
    }
    
    x10_compiler_Foreach__closure__11(TPMGL(T) identity, x10_long min, x10_long t__104562, x10_long max, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body, ::x10::lang::Rail< TPMGL(T) >* results) : identity(identity), min(min), t__104562(t__104562), max(max), reduce(reduce), body(body), results(results) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:406-412";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__11<TPMGL(T) > >x10_compiler_Foreach__closure__11<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__11<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__11<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__11<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__11<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__11<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__11<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__11<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__11<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__11_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__15_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__15 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__15<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long start__104624, x10_long end__104625){
        
        //#line 524 "x10/compiler/Foreach.x10"
        TPMGL(T) myRes__104626 = identity;
        
        //#line 525 "x10/compiler/Foreach.x10"
        {
            x10_long i__104610;
            for (i__104610 = start__104624; ((i__104610) <= (end__104625));
                 i__104610 = ((i__104610) + (((x10_long)1ll)))) {
                
                //#line 526 "x10/compiler/Foreach.x10"
                myRes__104626 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__104626, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__104610));
            }
        }
        
        //#line 528 "x10/compiler/Foreach.x10"
        return myRes__104626;
        
    }
    
    // captured environment
    TPMGL(T) identity;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__15<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__15<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__15<TPMGL(T) >(that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_compiler_Foreach__closure__15(TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) : identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:523-529";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__15<TPMGL(T) > >x10_compiler_Foreach__closure__15<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__15<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__15<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__15<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__15<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__15<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__15<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__15_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__16_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__16 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__16<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long start__104662, x10_long end__104663){
        
        //#line 524 "x10/compiler/Foreach.x10"
        TPMGL(T) myRes__104664 = identity__104670;
        
        //#line 525 "x10/compiler/Foreach.x10"
        {
            x10_long i__104648;
            for (i__104648 = start__104662; ((i__104648) <= (end__104663));
                 i__104648 = ((i__104648) + (((x10_long)1ll)))) {
                
                //#line 526 "x10/compiler/Foreach.x10"
                myRes__104664 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__104669), 
                  myRes__104664, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__104668), 
                    i__104648));
            }
        }
        
        //#line 528 "x10/compiler/Foreach.x10"
        return myRes__104664;
        
    }
    
    // captured environment
    TPMGL(T) identity__104670;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104669;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__104668;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__104670);
        buf.write(this->reduce__104669);
        buf.write(this->body__104668);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__16<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__104670 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__104669 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body__104668 = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__16<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__16<TPMGL(T) >(that_identity__104670, that_reduce__104669, that_body__104668);
        return this_;
    }
    
    x10_compiler_Foreach__closure__16(TPMGL(T) identity__104670, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104669, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__104668) : identity__104670(identity__104670), reduce__104669(reduce__104669), body__104668(body__104668) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:523-529";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__16<TPMGL(T) > >x10_compiler_Foreach__closure__16<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__16<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__16<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__16<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__16<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__16<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__16<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__16_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__17_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__17 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__17<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::compiler::Foreach::doBisectReduce1D< TPMGL(T) >(
                        ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        end, grainSize, body, reduce);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long start;
    x10_long end;
    x10_long grainSize;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->asyncResult);
        buf.write(this->start);
        buf.write(this->end);
        buf.write(this->grainSize);
        buf.write(this->body);
        buf.write(this->reduce);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__17<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__17<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_start = buf.read<x10_long>();
        x10_long that_end = buf.read<x10_long>();
        x10_long that_grainSize = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__17<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__17<TPMGL(T) >(that_asyncResult, that_start, that_end, that_grainSize, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__17(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : asyncResult(asyncResult), start(start), end(end), grainSize(grainSize), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:598";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__17<TPMGL(T) > >x10_compiler_Foreach__closure__17<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__17<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__17<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__17<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__17<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__17<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__17<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__17<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__17<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__17_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__22_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__22 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__22<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min0, x10_long max0, x10_long min1, x10_long max1){
        
        //#line 753 "x10/compiler/Foreach.x10"
        TPMGL(T) myResult = identity;
        
        //#line 754 "x10/compiler/Foreach.x10"
        {
            x10_long i__104766;
            for (i__104766 = min0; ((i__104766) <= (max0)); i__104766 = ((i__104766) + (((x10_long)1ll))))
            {
                
                //#line 755 "x10/compiler/Foreach.x10"
                {
                    x10_long i__104762;
                    for (i__104762 = min1; ((i__104762) <= (max1));
                         i__104762 = ((i__104762) + (((x10_long)1ll))))
                    {
                        
                        //#line 756 "x10/compiler/Foreach.x10"
                        myResult = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myResult, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__104766, i__104762));
                    }
                }
                
            }
        }
        
        //#line 759 "x10/compiler/Foreach.x10"
        return myResult;
        
    }
    
    // captured environment
    TPMGL(T) identity;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity);
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__22<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__22<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__22<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__22<TPMGL(T) >(that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_compiler_Foreach__closure__22(TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) : identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:752-760";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__22<TPMGL(T) > >x10_compiler_Foreach__closure__22<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__22<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__22<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__22<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__22<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__22<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__22<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__22_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__23_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__23 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__23<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min__104801, x10_long max__104802, x10_long min__104803, x10_long max__104804){
        
        //#line 753 "x10/compiler/Foreach.x10"
        TPMGL(T) myResult__104805 = identity__104792;
        
        //#line 754 "x10/compiler/Foreach.x10"
        {
            x10_long i__104782;
            for (i__104782 = min__104801; ((i__104782) <= (max__104802));
                 i__104782 = ((i__104782) + (((x10_long)1ll)))) {
                
                //#line 755 "x10/compiler/Foreach.x10"
                {
                    x10_long i__104778;
                    for (i__104778 = min__104803; ((i__104778) <= (max__104804));
                         i__104778 = ((i__104778) + (((x10_long)1ll))))
                    {
                        
                        //#line 756 "x10/compiler/Foreach.x10"
                        myResult__104805 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__104791), 
                          myResult__104805, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__104790), 
                            i__104782, i__104778));
                    }
                }
                
            }
        }
        
        //#line 759 "x10/compiler/Foreach.x10"
        return myResult__104805;
        
    }
    
    // captured environment
    TPMGL(T) identity__104792;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104791;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104790;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__104792);
        buf.write(this->reduce__104791);
        buf.write(this->body__104790);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__23<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__23<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__104792 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__104791 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body__104790 = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__23<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__23<TPMGL(T) >(that_identity__104792, that_reduce__104791, that_body__104790);
        return this_;
    }
    
    x10_compiler_Foreach__closure__23(TPMGL(T) identity__104792, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104791, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104790) : identity__104792(identity__104792), reduce__104791(reduce__104791), body__104790(body__104790) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:752-760";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__23<TPMGL(T) > >x10_compiler_Foreach__closure__23<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__23<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__23<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__23<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__23<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__23<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__23<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__23_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__24_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__24 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__24<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min__104839, x10_long max__104840, x10_long min__104841, x10_long max__104842){
        
        //#line 753 "x10/compiler/Foreach.x10"
        TPMGL(T) myResult__104843 = identity__104830;
        
        //#line 754 "x10/compiler/Foreach.x10"
        {
            x10_long i__104820;
            for (i__104820 = min__104839; ((i__104820) <= (max__104840));
                 i__104820 = ((i__104820) + (((x10_long)1ll)))) {
                
                //#line 755 "x10/compiler/Foreach.x10"
                {
                    x10_long i__104816;
                    for (i__104816 = min__104841; ((i__104816) <= (max__104842));
                         i__104816 = ((i__104816) + (((x10_long)1ll))))
                    {
                        
                        //#line 756 "x10/compiler/Foreach.x10"
                        myResult__104843 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__104829), 
                          myResult__104843, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__104828), 
                            i__104820, i__104816));
                    }
                }
                
            }
        }
        
        //#line 759 "x10/compiler/Foreach.x10"
        return myResult__104843;
        
    }
    
    // captured environment
    TPMGL(T) identity__104830;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104829;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104828;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__104830);
        buf.write(this->reduce__104829);
        buf.write(this->body__104828);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__24<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__24<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__104830 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__104829 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body__104828 = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_compiler_Foreach__closure__24<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__24<TPMGL(T) >(that_identity__104830, that_reduce__104829, that_body__104828);
        return this_;
    }
    
    x10_compiler_Foreach__closure__24(TPMGL(T) identity__104830, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104829, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104828) : identity__104830(identity__104830), reduce__104829(reduce__104829), body__104828(body__104828) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:752-760";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_compiler_Foreach__closure__24<TPMGL(T) > >x10_compiler_Foreach__closure__24<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__24<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__24<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__24<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_compiler_Foreach__closure__24<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__24<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__24<TPMGL(T) >::_deserialize);

#endif // X10_COMPILER_FOREACH__CLOSURE__24_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__25_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__25 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__25<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::compiler::Foreach::doBisectReduce2D< TPMGL(T) >(
                        ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        e0, s1, e1, g1, g2, body, reduce);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long s0;
    x10_long e0;
    x10_long s1;
    x10_long e1;
    x10_long g1;
    x10_long g2;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->asyncResult);
        buf.write(this->s0);
        buf.write(this->e0);
        buf.write(this->s1);
        buf.write(this->e1);
        buf.write(this->g1);
        buf.write(this->g2);
        buf.write(this->body);
        buf.write(this->reduce);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__25<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__25<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_s0 = buf.read<x10_long>();
        x10_long that_e0 = buf.read<x10_long>();
        x10_long that_s1 = buf.read<x10_long>();
        x10_long that_e1 = buf.read<x10_long>();
        x10_long that_g1 = buf.read<x10_long>();
        x10_long that_g2 = buf.read<x10_long>();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__25<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__25<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__25(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:820";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__25<TPMGL(T) > >x10_compiler_Foreach__closure__25<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__25<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__25<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__25<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__25<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__25<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__25<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__25<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__25<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__25_CLOSURE
#ifndef X10_COMPILER_FOREACH__CLOSURE__26_CLOSURE
#define X10_COMPILER_FOREACH__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_compiler_Foreach__closure__26 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__26<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::compiler::Foreach::doBisectReduce2D< TPMGL(T) >(
                        s0, e0, ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        e1, g1, g2, body, reduce);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long s0;
    x10_long e0;
    x10_long s1;
    x10_long e1;
    x10_long g1;
    x10_long g2;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->asyncResult);
        buf.write(this->s0);
        buf.write(this->e0);
        buf.write(this->s1);
        buf.write(this->e1);
        buf.write(this->g1);
        buf.write(this->g2);
        buf.write(this->body);
        buf.write(this->reduce);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_compiler_Foreach__closure__26<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_compiler_Foreach__closure__26<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_s0 = buf.read<x10_long>();
        x10_long that_e0 = buf.read<x10_long>();
        x10_long that_s1 = buf.read<x10_long>();
        x10_long that_e1 = buf.read<x10_long>();
        x10_long that_g1 = buf.read<x10_long>();
        x10_long that_g2 = buf.read<x10_long>();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        x10_compiler_Foreach__closure__26<TPMGL(T) >* this_ = new (storage) x10_compiler_Foreach__closure__26<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_body, that_reduce);
        return this_;
    }
    
    x10_compiler_Foreach__closure__26(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), body(body), reduce(reduce) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/compiler/Foreach.x10:828";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_compiler_Foreach__closure__26<TPMGL(T) > >x10_compiler_Foreach__closure__26<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_compiler_Foreach__closure__26<TPMGL(T) >::__apply, &x10_compiler_Foreach__closure__26<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_compiler_Foreach__closure__26<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_compiler_Foreach__closure__26<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__26<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_compiler_Foreach__closure__26<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_compiler_Foreach__closure__26<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_compiler_Foreach__closure__26<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_COMPILER_FOREACH__CLOSURE__26_CLOSURE
#ifndef X10_COMPILER_FOREACH_H_GENERICS
#define X10_COMPILER_FOREACH_H_GENERICS
#ifndef X10_COMPILER_FOREACH_H_sequentialReduce_309
#define X10_COMPILER_FOREACH_H_sequentialReduce_309
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::sequentialReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, TPMGL(T) identity) {
    
    //#line 108 "x10/compiler/Foreach.x10"
    TPMGL(T) myRes = identity;
    
    //#line 109 "x10/compiler/Foreach.x10"
    {
        x10_long i__104329;
        for (i__104329 = min; ((i__104329) <= (max)); i__104329 = ((i__104329) + (((x10_long)1ll))))
        {
            
            //#line 110 "x10/compiler/Foreach.x10"
            myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
              myRes, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                i__104329));
        }
    }
    
    //#line 112 "x10/compiler/Foreach.x10"
    return myRes;
    
}
#endif // X10_COMPILER_FOREACH_H_sequentialReduce_309
#ifndef X10_COMPILER_FOREACH_H_sequentialReduce_310
#define X10_COMPILER_FOREACH_H_sequentialReduce_310
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::sequentialReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
    
    //#line 126 "x10/compiler/Foreach.x10"
    return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
      min, max);
    
}
#endif // X10_COMPILER_FOREACH_H_sequentialReduce_310
#ifndef X10_COMPILER_FOREACH_H_sequentialReduce_311
#define X10_COMPILER_FOREACH_H_sequentialReduce_311
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::sequentialReduce(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 139 "x10/compiler/Foreach.x10"
    TPMGL(T) myRes = identity;
    
    //#line 140 "x10/compiler/Foreach.x10"
    x10_long i__103453min__104335 = ::x10aux::nullCheck(space)->FMGL(min0);
    x10_long i__103453max__104336 = ::x10aux::nullCheck(space)->FMGL(max0);
    {
        x10_long i__104337;
        for (i__104337 = i__103453min__104335; ((i__104337) <= (i__103453max__104336));
             i__104337 = ((i__104337) + (((x10_long)1ll))))
        {
            
            //#line 141 "x10/compiler/Foreach.x10"
            x10_long i__103435min__104331 = ::x10aux::nullCheck(space)->FMGL(min1);
            x10_long i__103435max__104332 = ::x10aux::nullCheck(space)->FMGL(max1);
            {
                x10_long i__104333;
                for (i__104333 = i__103435min__104331; ((i__104333) <= (i__103435max__104332));
                     i__104333 = ((i__104333) + (((x10_long)1ll))))
                {
                    
                    //#line 142 "x10/compiler/Foreach.x10"
                    myRes = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      myRes, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                        i__104337, i__104333));
                }
            }
            
        }
    }
    
    //#line 145 "x10/compiler/Foreach.x10"
    return myRes;
    
}
#endif // X10_COMPILER_FOREACH_H_sequentialReduce_311
#ifndef X10_COMPILER_FOREACH_H_blockReduce_320
#define X10_COMPILER_FOREACH_H_blockReduce_320
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::blockReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
    
    //#line 245 "x10/compiler/Foreach.x10"
    x10_int nthreads = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
    
    //#line 246 "x10/compiler/Foreach.x10"
    if ((::x10aux::struct_equals(nthreads, ((x10_int)1))))
    {
        
        //#line 247 "x10/compiler/Foreach.x10"
        return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
          min, max);
        
    } else {
        
        //#line 249 "x10/compiler/Foreach.x10"
        x10_long numElems = ((((max) - (min))) + (((x10_long)1ll)));
        
        //#line 250 "x10/compiler/Foreach.x10"
        if (((numElems) < (((x10_long)1ll)))) {
            return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
              min, max);
            
        }
        
        //#line 251 "x10/compiler/Foreach.x10"
        x10_long blockSize = ((numElems) / ::x10aux::zeroCheck(((x10_long)(nthreads))));
        
        //#line 252 "x10/compiler/Foreach.x10"
        x10_long leftOver = ((numElems) - (((((x10_long)(nthreads))) * (blockSize))));
        
        //#line 253 "x10/compiler/Foreach.x10"
        ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads)), false);
        {
            
            //#line 254 "x10/compiler/Foreach.x10"
            ::x10::xrx::Runtime::ensureNotInAtomic();
            ::x10::xrx::FinishState* fs__104868 = ::x10::xrx::Runtime::startFinish();
            try {
                {
                    {
                        x10_long t;
                        for (t = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
                             ((t) >= (((x10_long)0ll))); t =
                                                           ((t) - (((x10_long)1ll))))
                        {
                            
                            //#line 255 "x10/compiler/Foreach.x10"
                            x10_long myT = t;
                            
                            //#line 256 "x10/compiler/Foreach.x10"
                            ::x10::xrx::Runtime::runAsync(
                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__5<TPMGL(T)>)))x10_compiler_Foreach__closure__5<TPMGL(T)>(min, blockSize, myT, leftOver, results, body))));
                        }
                    }
                    
                }
            }
            catch (::x10::lang::CheckedThrowable* __exc321) {
                {
                    ::x10::lang::CheckedThrowable* ct__104866 =
                      __exc321;
                    {
                        ::x10::xrx::Runtime::pushException(
                          ct__104866);
                    }
                }
            }
            ::x10::xrx::Runtime::stopFinish(fs__104868);
        }
        
        //#line 262 "x10/compiler/Foreach.x10"
        TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         ((x10_long)0ll));
        
        //#line 263 "x10/compiler/Foreach.x10"
        x10_long i__103525max__104405 = ((((x10_long)(nthreads))) - (((x10_long)1ll)));
        {
            x10_long i__104406;
            for (i__104406 = ((x10_long)1ll); ((i__104406) <= (i__103525max__104405));
                 i__104406 = ((i__104406) + (((x10_long)1ll))))
            {
                
                //#line 264 "x10/compiler/Foreach.x10"
                res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                         i__104406));
            }
        }
        
        //#line 266 "x10/compiler/Foreach.x10"
        return res;
        
    }
    
}
#endif // X10_COMPILER_FOREACH_H_blockReduce_320
#ifndef X10_COMPILER_FOREACH_H_blockReduce_322
#define X10_COMPILER_FOREACH_H_blockReduce_322
template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::blockReduce(
  x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
  TPMGL(T) identity) {
    
    //#line 292 "x10/compiler/Foreach.x10"
    x10_long min__104423 = min;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104425 =
      reduce;
    
    //#line 242 "x10/compiler/Foreach.x10"
    TPMGL(T) ret__104426;
    goto __ret__104427; __ret__104427: {
    {
        
        //#line 245 "x10/compiler/Foreach.x10"
        x10_int nthreads__104428 = ::x10::xrx::Runtime::FMGL(NTHREADS__get)();
        
        //#line 246 "x10/compiler/Foreach.x10"
        if ((::x10aux::struct_equals(nthreads__104428, ((x10_int)1))))
        {
            
            //#line 247 "x10/compiler/Foreach.x10"
            ret__104426 = (__extension__ ({
                
                //#line 285 "x10/compiler/Foreach.x10"
                TPMGL(T) myRes__104431 = identity;
                
                //#line 286 "x10/compiler/Foreach.x10"
                {
                    x10_long i__104410;
                    for (i__104410 = min; ((i__104410) <= (max));
                         i__104410 = ((i__104410) + (((x10_long)1ll))))
                    {
                        
                        //#line 287 "x10/compiler/Foreach.x10"
                        myRes__104431 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myRes__104431, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__104410));
                    }
                }
                myRes__104431;
            }))
            ;
            goto __ret__104427_end_;
        } else {
            
            //#line 249 "x10/compiler/Foreach.x10"
            x10_long numElems__104432 = ((((max) - (min))) + (((x10_long)1ll)));
            
            //#line 250 "x10/compiler/Foreach.x10"
            if (((numElems__104432) < (((x10_long)1ll))))
            {
                ret__104426 = (__extension__ ({
                    
                    //#line 285 "x10/compiler/Foreach.x10"
                    TPMGL(T) myRes__104435 = identity;
                    
                    //#line 286 "x10/compiler/Foreach.x10"
                    {
                        x10_long i__104414;
                        for (i__104414 = min; ((i__104414) <= (max));
                             i__104414 = ((i__104414) + (((x10_long)1ll))))
                        {
                            
                            //#line 287 "x10/compiler/Foreach.x10"
                            myRes__104435 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__104435, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__104414));
                        }
                    }
                    myRes__104435;
                }))
                ;
                goto __ret__104427_end_;
            }
            
            //#line 251 "x10/compiler/Foreach.x10"
            x10_long blockSize__104436 = ((numElems__104432) / ::x10aux::zeroCheck(((x10_long)(nthreads__104428))));
            
            //#line 252 "x10/compiler/Foreach.x10"
            x10_long leftOver__104437 = ((numElems__104432) - (((((x10_long)(nthreads__104428))) * (blockSize__104436))));
            
            //#line 253 "x10/compiler/Foreach.x10"
            ::x10::lang::Rail< TPMGL(T) >* results__104438 =
              ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(nthreads__104428)), false);
            {
                
                //#line 254 "x10/compiler/Foreach.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__104873 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t__104439;
                            for (t__104439 = ((((x10_long)(nthreads__104428))) - (((x10_long)1ll)));
                                 ((t__104439) >= (((x10_long)0ll)));
                                 t__104439 = ((t__104439) - (((x10_long)1ll))))
                            {
                                
                                //#line 255 "x10/compiler/Foreach.x10"
                                x10_long myT__104440 = t__104439;
                                
                                //#line 256 "x10/compiler/Foreach.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__6<TPMGL(T)>)))x10_compiler_Foreach__closure__6<TPMGL(T)>(min__104423, blockSize__104436, myT__104440, leftOver__104437, results__104438, identity, reduce, body))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc323) {
                    {
                        ::x10::lang::CheckedThrowable* ct__104871 =
                          __exc323;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__104871);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__104873);
            }
            
            //#line 262 "x10/compiler/Foreach.x10"
            TPMGL(T) res__104446 = results__104438->x10::lang::template Rail< TPMGL(T) >::__apply(
                                     ((x10_long)0ll));
            
            //#line 263 "x10/compiler/Foreach.x10"
            x10_long i__103525max__104420 = ((((x10_long)(nthreads__104428))) - (((x10_long)1ll)));
            {
                x10_long i__104421;
                for (i__104421 = ((x10_long)1ll); ((i__104421) <= (i__103525max__104420));
                     i__104421 = ((i__104421) + (((x10_long)1ll))))
                {
                    
                    //#line 264 "x10/compiler/Foreach.x10"
                    res__104446 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__104425), 
                      res__104446, results__104438->x10::lang::template Rail< TPMGL(T) >::__apply(
                                     i__104421));
                }
            }
            
            //#line 266 "x10/compiler/Foreach.x10"
            ret__104426 = res__104446;
            goto __ret__104427_end_;
        }
        
    }goto __ret__104427_end_; __ret__104427_end_: ;
    }
    
    //#line 292 "x10/compiler/Foreach.x10"
    return ret__104426;
    }
    #endif // X10_COMPILER_FOREACH_H_blockReduce_322
    #ifndef X10_COMPILER_FOREACH_H_blockReduce_328
    #define X10_COMPILER_FOREACH_H_blockReduce_328
    template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::blockReduce(
      ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity) {
        
        //#line 349 "x10/compiler/Foreach.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 139 "x10/compiler/Foreach.x10"
            TPMGL(T) myRes__104525 = identity;
            
            //#line 140 "x10/compiler/Foreach.x10"
            x10_long i__103453min__104517 = ::x10aux::nullCheck(space)->FMGL(min0);
            x10_long i__103453max__104518 = ::x10aux::nullCheck(space)->FMGL(max0);
            {
                x10_long i__104519;
                for (i__104519 = i__103453min__104517; ((i__104519) <= (i__103453max__104518));
                     i__104519 = ((i__104519) + (((x10_long)1ll))))
                {
                    
                    //#line 141 "x10/compiler/Foreach.x10"
                    x10_long i__103435min__104513 = ::x10aux::nullCheck(space)->FMGL(min1);
                    x10_long i__103435max__104514 = ::x10aux::nullCheck(space)->FMGL(max1);
                    {
                        x10_long i__104515;
                        for (i__104515 = i__103435min__104513;
                             ((i__104515) <= (i__103435max__104514));
                             i__104515 = ((i__104515) + (((x10_long)1ll))))
                        {
                            
                            //#line 142 "x10/compiler/Foreach.x10"
                            myRes__104525 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__104525, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__104519, i__104515));
                        }
                    }
                    
                }
            }
            
            //#line 350 "x10/compiler/Foreach.x10"
            return myRes__104525;
            
        } else {
            
            //#line 352 "x10/compiler/Foreach.x10"
            ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
            {
                
                //#line 353 "x10/compiler/Foreach.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__104888 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        {
                            x10_long t;
                            for (t = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                                 ((t) >= (((x10_long)0ll)));
                                 t = ((t) - (((x10_long)1ll))))
                            {
                                
                                //#line 354 "x10/compiler/Foreach.x10"
                                x10_long myT = t;
                                
                                //#line 355 "x10/compiler/Foreach.x10"
                                ::x10::array::DenseIterationSpace_2* block =
                                  ::x10::array::BlockingUtils::partitionBlockBlock(
                                    reinterpret_cast< ::x10::array::IterationSpace*>(space),
                                    ((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())),
                                    t);
                                
                                //#line 356 "x10/compiler/Foreach.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__9<TPMGL(T)>)))x10_compiler_Foreach__closure__9<TPMGL(T)>(results, myT, block, body, reduce, identity))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc329) {
                    {
                        ::x10::lang::CheckedThrowable* ct__104886 =
                          __exc329;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__104886);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__104888);
            }
            
            //#line 358 "x10/compiler/Foreach.x10"
            TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll));
            
            //#line 359 "x10/compiler/Foreach.x10"
            x10_long i__103561max__104534 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
            {
                x10_long i__104535;
                for (i__104535 = ((x10_long)1ll); ((i__104535) <= (i__103561max__104534));
                     i__104535 = ((i__104535) + (((x10_long)1ll))))
                {
                    
                    //#line 360 "x10/compiler/Foreach.x10"
                    res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             i__104535));
                }
            }
            
            //#line 362 "x10/compiler/Foreach.x10"
            return res;
            
        }
        
    }
    #endif // X10_COMPILER_FOREACH_H_blockReduce_328
    #ifndef X10_COMPILER_FOREACH_H_cyclicReduce_332
    #define X10_COMPILER_FOREACH_H_cyclicReduce_332
    template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::cyclicReduce(
      x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity) {
        
        //#line 402 "x10/compiler/Foreach.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 108 "x10/compiler/Foreach.x10"
            TPMGL(T) myRes__104557 = identity;
            
            //#line 109 "x10/compiler/Foreach.x10"
            {
                x10_long i__104550;
                for (i__104550 = min; ((i__104550) <= (max));
                     i__104550 = ((i__104550) + (((x10_long)1ll))))
                {
                    
                    //#line 110 "x10/compiler/Foreach.x10"
                    myRes__104557 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      myRes__104557, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                        i__104550));
                }
            }
            
            //#line 403 "x10/compiler/Foreach.x10"
            return myRes__104557;
            
        } else {
            
            //#line 405 "x10/compiler/Foreach.x10"
            ::x10::lang::Rail< TPMGL(T) >* results = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
            {
                
                //#line 406 "x10/compiler/Foreach.x10"
                ::x10::xrx::Runtime::ensureNotInAtomic();
                ::x10::xrx::FinishState* fs__104898 = ::x10::xrx::Runtime::startFinish();
                try {
                    {
                        x10_long i__103597max__104560 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                        {
                            x10_long i__104561;
                            for (i__104561 = ((x10_long)0ll);
                                 ((i__104561) <= (i__103597max__104560));
                                 i__104561 = ((i__104561) + (((x10_long)1ll))))
                            {
                                x10_long t__104562 = i__104561;
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__11<TPMGL(T)>)))x10_compiler_Foreach__closure__11<TPMGL(T)>(identity, min, t__104562, max, reduce, body, results))));
                            }
                        }
                        
                    }
                }
                catch (::x10::lang::CheckedThrowable* __exc333) {
                    {
                        ::x10::lang::CheckedThrowable* ct__104896 =
                          __exc333;
                        {
                            ::x10::xrx::Runtime::pushException(
                              ct__104896);
                        }
                    }
                }
                ::x10::xrx::Runtime::stopFinish(fs__104898);
            }
            
            //#line 413 "x10/compiler/Foreach.x10"
            TPMGL(T) res = results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             ((x10_long)0ll));
            
            //#line 414 "x10/compiler/Foreach.x10"
            x10_long i__103615max__104563 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
            {
                x10_long i__104564;
                for (i__104564 = ((x10_long)1ll); ((i__104564) <= (i__103615max__104563));
                     i__104564 = ((i__104564) + (((x10_long)1ll))))
                {
                    
                    //#line 415 "x10/compiler/Foreach.x10"
                    res = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      res, results->x10::lang::template Rail< TPMGL(T) >::__apply(
                             i__104564));
                }
            }
            
            //#line 417 "x10/compiler/Foreach.x10"
            return res;
            
        }
        
    }
    #endif // X10_COMPILER_FOREACH_H_cyclicReduce_332
    #ifndef X10_COMPILER_FOREACH_H_bisectReduce_343
    #define X10_COMPILER_FOREACH_H_bisectReduce_343
    template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
      x10_long min, x10_long max, x10_long grainSize, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      TPMGL(T) identity) {
        
        //#line 530 "x10/compiler/Foreach.x10"
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104615 =
          reduce;
        
        //#line 545 "x10/compiler/Foreach.x10"
        TPMGL(T) ret__104616;
        goto __ret__104617; __ret__104617: {
        {
            
            //#line 549 "x10/compiler/Foreach.x10"
            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                         ((x10_int)1)))) {
                
                //#line 550 "x10/compiler/Foreach.x10"
                ret__104616 = (__extension__ ({
                    
                    //#line 524 "x10/compiler/Foreach.x10"
                    TPMGL(T) myRes__104623 = identity;
                    
                    //#line 525 "x10/compiler/Foreach.x10"
                    {
                        x10_long i__104606;
                        for (i__104606 = min; ((i__104606) <= (max));
                             i__104606 = ((i__104606) + (((x10_long)1ll))))
                        {
                            
                            //#line 526 "x10/compiler/Foreach.x10"
                            myRes__104623 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                              myRes__104623, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__104606));
                        }
                    }
                    myRes__104623;
                }))
                ;
                goto __ret__104617_end_;
            } else {
                
                //#line 552 "x10/compiler/Foreach.x10"
                ret__104616 = ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                                min, ((max) + (((x10_long)1ll))),
                                grainSize, reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__15<TPMGL(T)>)))x10_compiler_Foreach__closure__15<TPMGL(T)>(identity, reduce, body))),
                                reduce__104615);
                goto __ret__104617_end_;
            }
            
        }goto __ret__104617_end_; __ret__104617_end_: ;
        }
        
        //#line 530 "x10/compiler/Foreach.x10"
        return ret__104616;
        }
        #endif // X10_COMPILER_FOREACH_H_bisectReduce_343
        #ifndef X10_COMPILER_FOREACH_H_bisectReduce_344
        #define X10_COMPILER_FOREACH_H_bisectReduce_344
        template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
          x10_long min, x10_long max, x10_long grainSize,
          ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
            
            //#line 549 "x10/compiler/Foreach.x10"
            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                         ((x10_int)1)))) {
                
                //#line 550 "x10/compiler/Foreach.x10"
                return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                  min, max);
                
            } else {
                
                //#line 552 "x10/compiler/Foreach.x10"
                return ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                         min, ((max) + (((x10_long)1ll))),
                         grainSize, body, reduce);
                
            }
            
        }
        #endif // X10_COMPILER_FOREACH_H_bisectReduce_344
        #ifndef X10_COMPILER_FOREACH_H_bisectReduce_345
        #define X10_COMPILER_FOREACH_H_bisectReduce_345
        template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
          x10_long min, x10_long max, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
            
            //#line 570 "x10/compiler/Foreach.x10"
            x10_long grainSize = (__extension__ ({
                x10_long b__104064 = ((((max) - (min))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll)))));
                ((((x10_long)1ll)) < (b__104064)) ? (b__104064)
                  : (((x10_long)1ll));
            }))
            ;
            
            //#line 545 "x10/compiler/Foreach.x10"
            TPMGL(T) ret__104636;
            goto __ret__104637; __ret__104637: {
            {
                
                //#line 549 "x10/compiler/Foreach.x10"
                if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                             ((x10_int)1))))
                {
                    
                    //#line 550 "x10/compiler/Foreach.x10"
                    ret__104636 = ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                      min, max);
                    goto __ret__104637_end_;
                } else {
                    
                    //#line 552 "x10/compiler/Foreach.x10"
                    ret__104636 = ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                                    min, ((max) + (((x10_long)1ll))),
                                    grainSize, body, reduce);
                    goto __ret__104637_end_;
                }
                
            }goto __ret__104637_end_; __ret__104637_end_: ;
            }
            
            //#line 571 "x10/compiler/Foreach.x10"
            return ret__104636;
            }
            #endif // X10_COMPILER_FOREACH_H_bisectReduce_345
            #ifndef X10_COMPILER_FOREACH_H_bisectReduce_346
            #define X10_COMPILER_FOREACH_H_bisectReduce_346
            template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
              x10_long min, x10_long max, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body,
              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
              TPMGL(T) identity) {
                
                //#line 586 "x10/compiler/Foreach.x10"
                x10_long grainSize = (__extension__ ({
                    x10_long b__104079 = ((((max) - (min))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll)))));
                    ((((x10_long)1ll)) < (b__104079)) ? (b__104079)
                      : (((x10_long)1ll));
                }))
                ;
                
                //#line 587 "x10/compiler/Foreach.x10"
                ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__104668 =
                  body;
                ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104669 =
                  reduce;
                TPMGL(T) identity__104670 = identity;
                
                //#line 518 "x10/compiler/Foreach.x10"
                TPMGL(T) ret__104671;
                
                //#line 530 "x10/compiler/Foreach.x10"
                ret__104671 = (__extension__ ({
                    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104653 =
                      reduce;
                    
                    //#line 545 "x10/compiler/Foreach.x10"
                    TPMGL(T) ret__104654;
                    goto __ret__104655; __ret__104655: {
                    {
                        
                        //#line 549 "x10/compiler/Foreach.x10"
                        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                     ((x10_int)1))))
                        {
                            
                            //#line 550 "x10/compiler/Foreach.x10"
                            ret__104654 = (__extension__ ({
                                
                                //#line 524 "x10/compiler/Foreach.x10"
                                TPMGL(T) myRes__104661 = identity;
                                
                                //#line 525 "x10/compiler/Foreach.x10"
                                {
                                    x10_long i__104644;
                                    for (i__104644 = min;
                                         ((i__104644) <= (max));
                                         i__104644 = ((i__104644) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 526 "x10/compiler/Foreach.x10"
                                        myRes__104661 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                          myRes__104661, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                            i__104644));
                                    }
                                }
                                myRes__104661;
                            }))
                            ;
                            goto __ret__104655_end_;
                        } else {
                            
                            //#line 552 "x10/compiler/Foreach.x10"
                            ret__104654 = ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                                            min, ((max) + (((x10_long)1ll))),
                                            grainSize, reinterpret_cast< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__16<TPMGL(T)>)))x10_compiler_Foreach__closure__16<TPMGL(T)>(identity__104670, reduce__104669, body__104668))),
                                            reduce__104653);
                            goto __ret__104655_end_;
                        }
                        
                    }goto __ret__104655_end_; __ret__104655_end_: ;
                    }
                    ret__104654;
                    }))
                    ;
                
                //#line 587 "x10/compiler/Foreach.x10"
                return ret__104671;
                }
                #endif // X10_COMPILER_FOREACH_H_bisectReduce_346
                #ifndef X10_COMPILER_FOREACH_H_doBisectReduce1D_347
                #define X10_COMPILER_FOREACH_H_doBisectReduce1D_347
                template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::doBisectReduce1D(
                  x10_long start, x10_long end, x10_long grainSize,
                  ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
                  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
                    
                    //#line 594 "x10/compiler/Foreach.x10"
                    if (((((end) - (start))) > (grainSize)))
                    {
                        
                        //#line 595 "x10/compiler/Foreach.x10"
                        TPMGL(T) asyncResult;
                        
                        //#line 596 "x10/compiler/Foreach.x10"
                        TPMGL(T) syncResult;
                        {
                            
                            //#line 597 "x10/compiler/Foreach.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__104920 =
                              ::x10::xrx::Runtime::startFinish();
                            try {
                                {
                                    
                                    //#line 598 "x10/compiler/Foreach.x10"
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__17<TPMGL(T)>)))x10_compiler_Foreach__closure__17<TPMGL(T)>(&(asyncResult), start, end, grainSize, body, reduce))));
                                    
                                    //#line 599 "x10/compiler/Foreach.x10"
                                    syncResult = ::x10::compiler::Foreach::template doBisectReduce1D< TPMGL(T) >(
                                                   start,
                                                   ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                   grainSize,
                                                   body, reduce);
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc348) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__104918 =
                                      __exc348;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__104918);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__104920);
                        }
                        
                        //#line 601 "x10/compiler/Foreach.x10"
                        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          syncResult, asyncResult);
                        
                    } else {
                        
                        //#line 603 "x10/compiler/Foreach.x10"
                        return ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                          start, ((end) - (((x10_long)1ll))));
                        
                    }
                    
                }
                #endif // X10_COMPILER_FOREACH_H_doBisectReduce1D_347
                #ifndef X10_COMPILER_FOREACH_H_bisectReduce_358
                #define X10_COMPILER_FOREACH_H_bisectReduce_358
                template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
                  x10_long min0, x10_long max0, x10_long min1,
                  x10_long max1, x10_long grainSize0, x10_long grainSize1,
                  ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
                  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                  TPMGL(T) identity) {
                    
                    //#line 748 "x10/compiler/Foreach.x10"
                    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                 ((x10_int)1))))
                    {
                        
                        //#line 749 "x10/compiler/Foreach.x10"
                        ::x10::array::DenseIterationSpace_2* space__104754 =
                          (__extension__ ({
                            ::x10::array::DenseIterationSpace_2* alloc__104755 =
                               (new (::x10aux::alloc_z< ::x10::array::DenseIterationSpace_2>()) ::x10::array::DenseIterationSpace_2());
                            (alloc__104755)->::x10::array::DenseIterationSpace_2::_constructor(
                              min0, min1, max0, max1);
                            alloc__104755;
                        }))
                        ;
                        
                        //#line 139 "x10/compiler/Foreach.x10"
                        TPMGL(T) myRes__104759 = identity;
                        
                        //#line 140 "x10/compiler/Foreach.x10"
                        x10_long i__103453min__104750 = ::x10aux::nullCheck(space__104754)->FMGL(min0);
                        x10_long i__103453max__104751 = ::x10aux::nullCheck(space__104754)->FMGL(max0);
                        {
                            x10_long i__104752;
                            for (i__104752 = i__103453min__104750;
                                 ((i__104752) <= (i__103453max__104751));
                                 i__104752 = ((i__104752) + (((x10_long)1ll))))
                            {
                                
                                //#line 141 "x10/compiler/Foreach.x10"
                                x10_long i__103435min__104746 =
                                  ::x10aux::nullCheck(space__104754)->FMGL(min1);
                                x10_long i__103435max__104747 =
                                  ::x10aux::nullCheck(space__104754)->FMGL(max1);
                                {
                                    x10_long i__104748;
                                    for (i__104748 = i__103435min__104746;
                                         ((i__104748) <= (i__103435max__104747));
                                         i__104748 = ((i__104748) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 142 "x10/compiler/Foreach.x10"
                                        myRes__104759 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                          myRes__104759, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                            i__104752, i__104748));
                                    }
                                }
                                
                            }
                        }
                        
                        //#line 749 "x10/compiler/Foreach.x10"
                        return myRes__104759;
                        
                    } else {
                        
                        //#line 761 "x10/compiler/Foreach.x10"
                        return ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                 min0, ((max0) + (((x10_long)1ll))),
                                 min1, ((max1) + (((x10_long)1ll))),
                                 grainSize0, grainSize1, reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__22<TPMGL(T)>)))x10_compiler_Foreach__closure__22<TPMGL(T)>(identity, reduce, body))),
                                 reduce);
                        
                    }
                    
                }
                #endif // X10_COMPILER_FOREACH_H_bisectReduce_358
                #ifndef X10_COMPILER_FOREACH_H_bisectReduce_359
                #define X10_COMPILER_FOREACH_H_bisectReduce_359
                template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
                  ::x10::array::DenseIterationSpace_2* space,
                  x10_long grainSize0, x10_long grainSize1,
                  ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
                  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                  TPMGL(T) identity) {
                    
                    //#line 783 "x10/compiler/Foreach.x10"
                    x10_long min__104784 = ::x10aux::nullCheck(space)->FMGL(min0);
                    x10_long max__104785 = ::x10aux::nullCheck(space)->FMGL(max0);
                    x10_long min__104786 = ::x10aux::nullCheck(space)->FMGL(min1);
                    x10_long max__104787 = ::x10aux::nullCheck(space)->FMGL(max1);
                    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104790 =
                      body;
                    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104791 =
                      reduce;
                    TPMGL(T) identity__104792 = identity;
                    
                    //#line 743 "x10/compiler/Foreach.x10"
                    TPMGL(T) ret__104793;
                    goto __ret__104794; __ret__104794: {
                    {
                        
                        //#line 748 "x10/compiler/Foreach.x10"
                        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                     ((x10_int)1))))
                        {
                            
                            //#line 749 "x10/compiler/Foreach.x10"
                            ret__104793 = (__extension__ ({
                                ::x10::array::DenseIterationSpace_2* space__104795 =
                                  (__extension__ ({
                                    ::x10::array::DenseIterationSpace_2* alloc__104796 =
                                       (new (::x10aux::alloc_z< ::x10::array::DenseIterationSpace_2>()) ::x10::array::DenseIterationSpace_2());
                                    (alloc__104796)->::x10::array::DenseIterationSpace_2::_constructor(
                                      min__104784, min__104786,
                                      max__104785, max__104787);
                                    alloc__104796;
                                }))
                                ;
                                
                                //#line 139 "x10/compiler/Foreach.x10"
                                TPMGL(T) myRes__104800 = identity;
                                
                                //#line 140 "x10/compiler/Foreach.x10"
                                x10_long i__103453min__104772 =
                                  ::x10aux::nullCheck(space__104795)->FMGL(min0);
                                x10_long i__103453max__104773 =
                                  ::x10aux::nullCheck(space__104795)->FMGL(max0);
                                {
                                    x10_long i__104774;
                                    for (i__104774 = i__103453min__104772;
                                         ((i__104774) <= (i__103453max__104773));
                                         i__104774 = ((i__104774) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 141 "x10/compiler/Foreach.x10"
                                        x10_long i__103435min__104768 =
                                          ::x10aux::nullCheck(space__104795)->FMGL(min1);
                                        x10_long i__103435max__104769 =
                                          ::x10aux::nullCheck(space__104795)->FMGL(max1);
                                        {
                                            x10_long i__104770;
                                            for (i__104770 =
                                                   i__103435min__104768;
                                                 ((i__104770) <= (i__103435max__104769));
                                                 i__104770 =
                                                   ((i__104770) + (((x10_long)1ll))))
                                            {
                                                
                                                //#line 142 "x10/compiler/Foreach.x10"
                                                myRes__104800 =
                                                  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                                  myRes__104800,
                                                  ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                    i__104774,
                                                    i__104770));
                                            }
                                        }
                                        
                                    }
                                }
                                myRes__104800;
                            }))
                            ;
                            goto __ret__104794_end_;
                        } else {
                            
                            //#line 761 "x10/compiler/Foreach.x10"
                            ret__104793 = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                            min__104784, ((max__104785) + (((x10_long)1ll))),
                                            min__104786, ((max__104787) + (((x10_long)1ll))),
                                            grainSize0, grainSize1,
                                            reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__23<TPMGL(T)>)))x10_compiler_Foreach__closure__23<TPMGL(T)>(identity__104792, reduce__104791, body__104790))),
                                            reduce__104791);
                            goto __ret__104794_end_;
                        }
                        
                    }goto __ret__104794_end_; __ret__104794_end_: ;
                    }
                    
                    //#line 783 "x10/compiler/Foreach.x10"
                    return ret__104793;
                    }
                    #endif // X10_COMPILER_FOREACH_H_bisectReduce_359
                    #ifndef X10_COMPILER_FOREACH_H_bisectReduce_360
                    #define X10_COMPILER_FOREACH_H_bisectReduce_360
                    template<class TPMGL(T)> TPMGL(T) x10::compiler::Foreach::bisectReduce(
                      ::x10::array::DenseIterationSpace_2* space,
                      ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body,
                      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                      TPMGL(T) identity) {
                        
                        //#line 801 "x10/compiler/Foreach.x10"
                        x10_long grainSize0 = (__extension__ ({
                            x10_long b__104255 = ((((::x10aux::nullCheck(space)->FMGL(max0)) - (::x10aux::nullCheck(space)->FMGL(min0)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
                            ((((x10_long)1ll)) < (b__104255))
                              ? (b__104255) : (((x10_long)1ll));
                        }))
                        ;
                        
                        //#line 802 "x10/compiler/Foreach.x10"
                        x10_long grainSize1 = (__extension__ ({
                            x10_long b__104258 = ((((::x10aux::nullCheck(space)->FMGL(max1)) - (::x10aux::nullCheck(space)->FMGL(min1)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
                            ((((x10_long)1ll)) < (b__104258))
                              ? (b__104258) : (((x10_long)1ll));
                        }))
                        ;
                        
                        //#line 803 "x10/compiler/Foreach.x10"
                        x10_long min__104822 = ::x10aux::nullCheck(space)->FMGL(min0);
                        x10_long max__104823 = ::x10aux::nullCheck(space)->FMGL(max0);
                        x10_long min__104824 = ::x10aux::nullCheck(space)->FMGL(min1);
                        x10_long max__104825 = ::x10aux::nullCheck(space)->FMGL(max1);
                        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__104828 =
                          body;
                        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__104829 =
                          reduce;
                        TPMGL(T) identity__104830 = identity;
                        
                        //#line 743 "x10/compiler/Foreach.x10"
                        TPMGL(T) ret__104831;
                        goto __ret__104832; __ret__104832: {
                        {
                            
                            //#line 748 "x10/compiler/Foreach.x10"
                            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                         ((x10_int)1))))
                            {
                                
                                //#line 749 "x10/compiler/Foreach.x10"
                                ret__104831 = (__extension__ ({
                                    ::x10::array::DenseIterationSpace_2* space__104833 =
                                      (__extension__ ({
                                        ::x10::array::DenseIterationSpace_2* alloc__104834 =
                                           (new (::x10aux::alloc_z< ::x10::array::DenseIterationSpace_2>()) ::x10::array::DenseIterationSpace_2());
                                        (alloc__104834)->::x10::array::DenseIterationSpace_2::_constructor(
                                          min__104822, min__104824,
                                          max__104823, max__104825);
                                        alloc__104834;
                                    }))
                                    ;
                                    
                                    //#line 139 "x10/compiler/Foreach.x10"
                                    TPMGL(T) myRes__104838 =
                                      identity;
                                    
                                    //#line 140 "x10/compiler/Foreach.x10"
                                    x10_long i__103453min__104810 =
                                      ::x10aux::nullCheck(space__104833)->FMGL(min0);
                                    x10_long i__103453max__104811 =
                                      ::x10aux::nullCheck(space__104833)->FMGL(max0);
                                    {
                                        x10_long i__104812;
                                        for (i__104812 = i__103453min__104810;
                                             ((i__104812) <= (i__103453max__104811));
                                             i__104812 = ((i__104812) + (((x10_long)1ll))))
                                        {
                                            
                                            //#line 141 "x10/compiler/Foreach.x10"
                                            x10_long i__103435min__104806 =
                                              ::x10aux::nullCheck(space__104833)->FMGL(min1);
                                            x10_long i__103435max__104807 =
                                              ::x10aux::nullCheck(space__104833)->FMGL(max1);
                                            {
                                                x10_long i__104808;
                                                for (i__104808 =
                                                       i__103435min__104806;
                                                     ((i__104808) <= (i__103435max__104807));
                                                     i__104808 =
                                                       ((i__104808) + (((x10_long)1ll))))
                                                {
                                                    
                                                    //#line 142 "x10/compiler/Foreach.x10"
                                                    myRes__104838 =
                                                      ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                                      myRes__104838,
                                                      ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                        i__104812,
                                                        i__104808));
                                                }
                                            }
                                            
                                        }
                                    }
                                    myRes__104838;
                                }))
                                ;
                                goto __ret__104832_end_;
                            } else {
                                
                                //#line 761 "x10/compiler/Foreach.x10"
                                ret__104831 = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                                min__104822,
                                                ((max__104823) + (((x10_long)1ll))),
                                                min__104824,
                                                ((max__104825) + (((x10_long)1ll))),
                                                grainSize0,
                                                grainSize1,
                                                reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_compiler_Foreach__closure__24<TPMGL(T)>)))x10_compiler_Foreach__closure__24<TPMGL(T)>(identity__104830, reduce__104829, body__104828))),
                                                reduce__104829);
                                goto __ret__104832_end_;
                            }
                            
                        }goto __ret__104832_end_; __ret__104832_end_: ;
                        }
                        
                        //#line 803 "x10/compiler/Foreach.x10"
                        return ret__104831;
                        }
                        #endif // X10_COMPILER_FOREACH_H_bisectReduce_360
                        #ifndef X10_COMPILER_FOREACH_H_doBisectReduce2D_361
                        #define X10_COMPILER_FOREACH_H_doBisectReduce2D_361
                        template<class TPMGL(T)> TPMGL(T)
                          x10::compiler::Foreach::doBisectReduce2D(
                          x10_long s0, x10_long e0, x10_long s1,
                          x10_long e1, x10_long g1, x10_long g2,
                          ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body,
                          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce) {
                            
                            //#line 816 "x10/compiler/Foreach.x10"
                            if ((((((e0) - (s0))) > (g1)) &&
                                ((((((e0) - (s0))) >= (((e1) - (s1)))) ||
                                 ((((e1) - (s1))) <= (g2))))))
                            {
                                
                                //#line 817 "x10/compiler/Foreach.x10"
                                TPMGL(T) asyncResult;
                                
                                //#line 818 "x10/compiler/Foreach.x10"
                                TPMGL(T) syncResult;
                                {
                                    
                                    //#line 819 "x10/compiler/Foreach.x10"
                                    ::x10::xrx::Runtime::ensureNotInAtomic();
                                    ::x10::xrx::FinishState* fs__104943 =
                                      ::x10::xrx::Runtime::startFinish();
                                    try {
                                        {
                                            
                                            //#line 820 "x10/compiler/Foreach.x10"
                                            ::x10::xrx::Runtime::runAsync(
                                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__25<TPMGL(T)>)))x10_compiler_Foreach__closure__25<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, body, reduce))));
                                            
                                            //#line 821 "x10/compiler/Foreach.x10"
                                            syncResult = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                                           s0,
                                                           ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                           s1,
                                                           e1,
                                                           g1,
                                                           g2,
                                                           body,
                                                           reduce);
                                        }
                                    }
                                    catch (::x10::lang::CheckedThrowable* __exc362) {
                                        {
                                            ::x10::lang::CheckedThrowable* ct__104941 =
                                              __exc362;
                                            {
                                                ::x10::xrx::Runtime::pushException(
                                                  ct__104941);
                                            }
                                        }
                                    }
                                    ::x10::xrx::Runtime::stopFinish(
                                      fs__104943);
                                }
                                
                                //#line 823 "x10/compiler/Foreach.x10"
                                return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                  asyncResult, syncResult);
                                
                            } else 
                            //#line 824 "x10/compiler/Foreach.x10"
                            if (((((e1) - (s1))) > (g2)))
                            {
                                
                                //#line 825 "x10/compiler/Foreach.x10"
                                TPMGL(T) asyncResult;
                                
                                //#line 826 "x10/compiler/Foreach.x10"
                                TPMGL(T) syncResult;
                                {
                                    
                                    //#line 827 "x10/compiler/Foreach.x10"
                                    ::x10::xrx::Runtime::ensureNotInAtomic();
                                    ::x10::xrx::FinishState* fs__104948 =
                                      ::x10::xrx::Runtime::startFinish();
                                    try {
                                        {
                                            
                                            //#line 828 "x10/compiler/Foreach.x10"
                                            ::x10::xrx::Runtime::runAsync(
                                              reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_compiler_Foreach__closure__26<TPMGL(T)>)))x10_compiler_Foreach__closure__26<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, body, reduce))));
                                            
                                            //#line 829 "x10/compiler/Foreach.x10"
                                            syncResult = ::x10::compiler::Foreach::template doBisectReduce2D< TPMGL(T) >(
                                                           s0,
                                                           e0,
                                                           s1,
                                                           ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                           g1,
                                                           g2,
                                                           body,
                                                           reduce);
                                        }
                                    }
                                    catch (::x10::lang::CheckedThrowable* __exc363) {
                                        {
                                            ::x10::lang::CheckedThrowable* ct__104946 =
                                              __exc363;
                                            {
                                                ::x10::xrx::Runtime::pushException(
                                                  ct__104946);
                                            }
                                        }
                                    }
                                    ::x10::xrx::Runtime::stopFinish(
                                      fs__104948);
                                }
                                
                                //#line 831 "x10/compiler/Foreach.x10"
                                return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                  asyncResult, syncResult);
                                
                            } else {
                                
                                //#line 833 "x10/compiler/Foreach.x10"
                                return ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                  s0, ((e0) - (((x10_long)1ll))),
                                  s1, ((e1) - (((x10_long)1ll))));
                                
                            }
                            
                        }
                        #endif // X10_COMPILER_FOREACH_H_doBisectReduce2D_361
                        #endif // X10_COMPILER_FOREACH_H_GENERICS
                        #endif // __X10_COMPILER_FOREACH_H_NODEPS
