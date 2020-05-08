#ifndef __X10_UTIL_FOREACH_BISECT_H
#define __X10_UTIL_FOREACH_BISECT_H

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
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(Z4), class TPMGL(U)>
class Fun_0_4;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

class Bisect : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static void _kwd__for(::x10::lang::LongRange range, x10_long grainSize,
                          ::x10::lang::VoidFun_0_1< ::x10::lang::LongRange>* body);
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1< ::x10::lang::LongRange>* body);
    static void _kwd__for(::x10::lang::LongRange range, x10_long grainSize,
                          ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void _kwd__for(::x10::lang::LongRange range, ::x10::lang::VoidFun_0_1<x10_long>* body);
    static void doBisect1D(x10_long start, x10_long end, x10_long grainSize,
                           ::x10::lang::VoidFun_0_1< ::x10::lang::LongRange>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       x10_long grainSize,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       x10_long grainSize,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) doBisectReduce1D(
      x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space,
                          x10_long grainSize0, x10_long grainSize1,
                          ::x10::lang::VoidFun_0_1< ::x10::array::DenseIterationSpace_2*>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space,
                          ::x10::lang::VoidFun_0_1< ::x10::array::DenseIterationSpace_2*>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space,
                          x10_long grainSize0, x10_long grainSize1,
                          ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void _kwd__for(::x10::array::DenseIterationSpace_2* space,
                          ::x10::lang::VoidFun_0_2<x10_long, x10_long>* body);
    static void doBisect2D(x10_long s0, x10_long e0, x10_long s1,
                           x10_long e1, x10_long g1, x10_long g2,
                           ::x10::lang::VoidFun_0_1< ::x10::array::DenseIterationSpace_2*>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                                                       x10_long grainSize0,
                                                       x10_long grainSize1,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                                                       ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                       TPMGL(T) identity,
                                                       ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    template<class TPMGL(T)> static TPMGL(T) doBisectReduce2D(
      x10_long s0, x10_long e0, x10_long s1, x10_long e1,
      x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Bisect* x10__util__foreach__Bisect____this__x10__util__foreach__Bisect(
      );
    void _constructor();
    
    static ::x10::util::foreach::Bisect* _make();
    
    virtual void __fieldInitializers_x10_util_foreach_Bisect(
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
#endif // X10_UTIL_FOREACH_BISECT_H

namespace x10 { namespace util { namespace foreach { 
class Bisect;
} } } 

#ifndef X10_UTIL_FOREACH_BISECT_H_NODEPS
#define X10_UTIL_FOREACH_BISECT_H_NODEPS
#include <x10/lang/LongRange.h>
#include <x10/lang/Long.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/lang/Int.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/VoidFun_0_2.h>
#include <x10/lang/Fun_0_4.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__4_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(::x10::lang::LongRange range__138575){
        
        //#line 115 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myRes__138576 = identity;
        
        //#line 116 "x10/util/foreach/Bisect.x10"
        x10_long i__138033min__138562 = range__138575->FMGL(min);
        x10_long i__138033max__138563 = range__138575->FMGL(max);
        {
            x10_long i__138564;
            for (i__138564 = i__138033min__138562; ((i__138564) <= (i__138033max__138563));
                 i__138564 = ((i__138564) + (((x10_long)1ll)))) {
                
                //#line 117 "x10/util/foreach/Bisect.x10"
                myRes__138576 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                  myRes__138576, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                    i__138564));
            }
        }
        
        //#line 119 "x10/util/foreach/Bisect.x10"
        return myRes__138576;
        
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
        x10_util_foreach_Bisect__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__4<TPMGL(T) >(that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__4(TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) : identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:114-120";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__4<TPMGL(T) > >x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__4<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__4<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__4_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__5_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__5 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__5<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(::x10::lang::LongRange range__138608){
        
        //#line 115 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myRes__138609 = identity__138613;
        
        //#line 116 "x10/util/foreach/Bisect.x10"
        x10_long i__138033min__138595 = range__138608->FMGL(min);
        x10_long i__138033max__138596 = range__138608->FMGL(max);
        {
            x10_long i__138597;
            for (i__138597 = i__138033min__138595; ((i__138597) <= (i__138033max__138596));
                 i__138597 = ((i__138597) + (((x10_long)1ll)))) {
                
                //#line 117 "x10/util/foreach/Bisect.x10"
                myRes__138609 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__138612), 
                  myRes__138609, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__138614), 
                    i__138597));
            }
        }
        
        //#line 119 "x10/util/foreach/Bisect.x10"
        return myRes__138609;
        
    }
    
    // captured environment
    TPMGL(T) identity__138613;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138612;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__138614;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__138613);
        buf.write(this->reduce__138612);
        buf.write(this->body__138614);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__5<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__138613 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__138612 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body__138614 = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__5<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__5<TPMGL(T) >(that_identity__138613, that_reduce__138612, that_body__138614);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__5(TPMGL(T) identity__138613, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138612, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__138614) : identity__138613(identity__138613), reduce__138612(reduce__138612), body__138614(body__138614) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:114-120";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__5<TPMGL(T) > >x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__5<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__5<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__5<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__5_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__6_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__6 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__6<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::util::foreach::Bisect::doBisectReduce1D< TPMGL(T) >(
                        ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        end, grainSize, reduce, body);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long start;
    x10_long end;
    x10_long grainSize;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body;
    
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
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__6<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_start = buf.read<x10_long>();
        x10_long that_end = buf.read<x10_long>();
        x10_long that_grainSize = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__6<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__6<TPMGL(T) >(that_asyncResult, that_start, that_end, that_grainSize, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__6(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long start, x10_long end, x10_long grainSize, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) : asyncResult(asyncResult), start(start), end(end), grainSize(grainSize), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:179";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__6<TPMGL(T) > >x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__6<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__6<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Bisect__closure__6<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__6_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__11_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__11 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__11<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min0, x10_long max0, x10_long min1, x10_long max1){
        
        //#line 316 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myResult = identity;
        
        //#line 317 "x10/util/foreach/Bisect.x10"
        {
            x10_long i__138690;
            for (i__138690 = min0; ((i__138690) <= (max0)); i__138690 = ((i__138690) + (((x10_long)1ll))))
            {
                
                //#line 318 "x10/util/foreach/Bisect.x10"
                {
                    x10_long i__138686;
                    for (i__138686 = min1; ((i__138686) <= (max1));
                         i__138686 = ((i__138686) + (((x10_long)1ll))))
                    {
                        
                        //#line 319 "x10/util/foreach/Bisect.x10"
                        myResult = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myResult, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__138690, i__138686));
                    }
                }
                
            }
        }
        
        //#line 322 "x10/util/foreach/Bisect.x10"
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
        x10_util_foreach_Bisect__closure__11<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__11<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__11<TPMGL(T) >(that_identity, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__11(TPMGL(T) identity, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) : identity(identity), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:315-323";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__11<TPMGL(T) > >x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__11<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__11<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__11<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__11_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__12_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__12 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__12<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min__138722, x10_long max__138723, x10_long min__138724, x10_long max__138725){
        
        //#line 316 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myResult__138726 = identity__138713;
        
        //#line 317 "x10/util/foreach/Bisect.x10"
        {
            x10_long i__138707;
            for (i__138707 = min__138722; ((i__138707) <= (max__138723));
                 i__138707 = ((i__138707) + (((x10_long)1ll)))) {
                
                //#line 318 "x10/util/foreach/Bisect.x10"
                {
                    x10_long i__138703;
                    for (i__138703 = min__138724; ((i__138703) <= (max__138725));
                         i__138703 = ((i__138703) + (((x10_long)1ll))))
                    {
                        
                        //#line 319 "x10/util/foreach/Bisect.x10"
                        myResult__138726 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__138712), 
                          myResult__138726, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__138714), 
                            i__138707, i__138703));
                    }
                }
                
            }
        }
        
        //#line 322 "x10/util/foreach/Bisect.x10"
        return myResult__138726;
        
    }
    
    // captured environment
    TPMGL(T) identity__138713;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138712;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__138714;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__138713);
        buf.write(this->reduce__138712);
        buf.write(this->body__138714);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__12<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__12<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__138713 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__138712 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body__138714 = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__12<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__12<TPMGL(T) >(that_identity__138713, that_reduce__138712, that_body__138714);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__12(TPMGL(T) identity__138713, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138712, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__138714) : identity__138713(identity__138713), reduce__138712(reduce__138712), body__138714(body__138714) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:315-323";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__closure__12<TPMGL(T) > >x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__12<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__12<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__12<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__12_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__13_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__13 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__13<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::util::foreach::Bisect::doBisectReduce2D< TPMGL(T) >(
                        ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        e0, s1, e1, g1, g2, reduce, body);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long s0;
    x10_long e0;
    x10_long s1;
    x10_long e1;
    x10_long g1;
    x10_long g2;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body;
    
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
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__13<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__13<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_s0 = buf.read<x10_long>();
        x10_long that_e0 = buf.read<x10_long>();
        x10_long that_s1 = buf.read<x10_long>();
        x10_long that_e1 = buf.read<x10_long>();
        x10_long that_g1 = buf.read<x10_long>();
        x10_long that_g2 = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__13<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__13<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__13(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:435";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__13<TPMGL(T) > >x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__13<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__13<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Bisect__closure__13<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__13_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__CLOSURE__14_CLOSURE
#define X10_UTIL_FOREACH_BISECT__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__closure__14 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__14<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        asyncResult = ::x10::util::foreach::Bisect::doBisectReduce2D< TPMGL(T) >(
                        s0, e0, ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                        e1, g1, g2, reduce, body);
    }
    
    // captured environment
    x10aux::captured_struct_lval<TPMGL(T)> asyncResult;
    x10_long s0;
    x10_long e0;
    x10_long s1;
    x10_long e1;
    x10_long g1;
    x10_long g2;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce;
    ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body;
    
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
        buf.write(this->reduce);
        buf.write(this->body);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__closure__14<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__closure__14<TPMGL(T) > >();
        buf.record_reference(storage);
        x10aux::captured_struct_lval<TPMGL(T)> that_asyncResult = buf.read<x10aux::captured_struct_lval<TPMGL(T)> >();
        x10_long that_s0 = buf.read<x10_long>();
        x10_long that_e0 = buf.read<x10_long>();
        x10_long that_s1 = buf.read<x10_long>();
        x10_long that_e1 = buf.read<x10_long>();
        x10_long that_g1 = buf.read<x10_long>();
        x10_long that_g2 = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* that_body = buf.read< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__closure__14<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__closure__14<TPMGL(T) >(that_asyncResult, that_s0, that_e0, that_s1, that_e1, that_g1, that_g2, that_reduce, that_body);
        return this_;
    }
    
    x10_util_foreach_Bisect__closure__14(x10aux::captured_struct_lval<TPMGL(T)> asyncResult, x10_long s0, x10_long e0, x10_long s1, x10_long e1, x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce, ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body) : asyncResult(asyncResult), s0(s0), e0(e0), s1(s1), e1(e1), g1(g1), g2(g2), reduce(reduce), body(body) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:443";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Bisect__closure__14<TPMGL(T) > >x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__closure__14<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__closure__14<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Bisect__closure__14<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_BISECT__CLOSURE__14_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT_H_GENERICS
#define X10_UTIL_FOREACH_BISECT_H_GENERICS
#ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2220
#define X10_UTIL_FOREACH_BISECT_H__kwd__for_2220
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(::x10::lang::LongRange range,
                                                                        x10_long grainSize,
                                                                        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                                                                        TPMGL(T) identity,
                                                                        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 132 "x10/util/foreach/Bisect.x10"
    TPMGL(T) ret__138569;
    goto __ret__138570; __ret__138570: {
    {
        
        //#line 136 "x10/util/foreach/Bisect.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 137 "x10/util/foreach/Bisect.x10"
            ret__138569 = (__extension__ ({
                
                //#line 115 "x10/util/foreach/Bisect.x10"
                TPMGL(T) myRes__138574 = identity;
                
                //#line 116 "x10/util/foreach/Bisect.x10"
                x10_long i__138033min__138557 = range->FMGL(min);
                x10_long i__138033max__138558 = range->FMGL(max);
                {
                    x10_long i__138559;
                    for (i__138559 = i__138033min__138557;
                         ((i__138559) <= (i__138033max__138558));
                         i__138559 = ((i__138559) + (((x10_long)1ll))))
                    {
                        
                        //#line 117 "x10/util/foreach/Bisect.x10"
                        myRes__138574 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          myRes__138574, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                            i__138559));
                    }
                }
                myRes__138574;
            }))
            ;
            goto __ret__138570_end_;
        } else {
            
            //#line 139 "x10/util/foreach/Bisect.x10"
            ret__138569 = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                            range->FMGL(min), ((range->FMGL(max)) + (((x10_long)1ll))),
                            grainSize, reduce, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__4<TPMGL(T)>)))x10_util_foreach_Bisect__closure__4<TPMGL(T)>(identity, reduce, body))));
            goto __ret__138570_end_;
        }
        
    }goto __ret__138570_end_; __ret__138570_end_: ;
    }
    
    //#line 121 "x10/util/foreach/Bisect.x10"
    return ret__138569;
    }
    #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2220
    #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2221
    #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2221
    template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
      ::x10::lang::LongRange range, x10_long grainSize, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
        
        //#line 136 "x10/util/foreach/Bisect.x10"
        if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                     ((x10_int)1)))) {
            
            //#line 137 "x10/util/foreach/Bisect.x10"
            return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
              range);
            
        } else {
            
            //#line 139 "x10/util/foreach/Bisect.x10"
            return ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                     range->FMGL(min), ((range->FMGL(max)) + (((x10_long)1ll))),
                     grainSize, reduce, body);
            
        }
        
    }
    #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2221
    #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2222
    #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2222
    template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
      ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
      ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
        
        //#line 155 "x10/util/foreach/Bisect.x10"
        x10_long grainSize = (__extension__ ({
            x10_long b__138217 = ((((range->FMGL(max)) - (range->FMGL(min)))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll)))));
            ((((x10_long)1ll)) < (b__138217)) ? (b__138217)
              : (((x10_long)1ll));
        }))
        ;
        
        //#line 132 "x10/util/foreach/Bisect.x10"
        TPMGL(T) ret__138584;
        goto __ret__138585; __ret__138585: {
        {
            
            //#line 136 "x10/util/foreach/Bisect.x10"
            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                         ((x10_int)1)))) {
                
                //#line 137 "x10/util/foreach/Bisect.x10"
                ret__138584 = ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                  range);
                goto __ret__138585_end_;
            } else {
                
                //#line 139 "x10/util/foreach/Bisect.x10"
                ret__138584 = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                                range->FMGL(min), ((range->FMGL(max)) + (((x10_long)1ll))),
                                grainSize, reduce, body);
                goto __ret__138585_end_;
            }
            
        }goto __ret__138585_end_; __ret__138585_end_: ;
        }
        
        //#line 156 "x10/util/foreach/Bisect.x10"
        return ret__138584;
        }
        #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2222
        #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2223
        #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2223
        template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
          ::x10::lang::LongRange range, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
          TPMGL(T) identity, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
            
            //#line 167 "x10/util/foreach/Bisect.x10"
            x10_long grainSize = (__extension__ ({
                x10_long b__138230 = ((((range->FMGL(max)) - (range->FMGL(min)))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll)))));
                ((((x10_long)1ll)) < (b__138230)) ? (b__138230)
                  : (((x10_long)1ll));
            }))
            ;
            
            //#line 168 "x10/util/foreach/Bisect.x10"
            ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138612 =
              reduce;
            TPMGL(T) identity__138613 = identity;
            ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__138614 =
              body;
            
            //#line 109 "x10/util/foreach/Bisect.x10"
            TPMGL(T) ret__138615;
            
            //#line 121 "x10/util/foreach/Bisect.x10"
            ret__138615 = (__extension__ ({
                
                //#line 132 "x10/util/foreach/Bisect.x10"
                TPMGL(T) ret__138602;
                goto __ret__138603; __ret__138603: {
                {
                    
                    //#line 136 "x10/util/foreach/Bisect.x10"
                    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                 ((x10_int)1))))
                    {
                        
                        //#line 137 "x10/util/foreach/Bisect.x10"
                        ret__138602 = (__extension__ ({
                            
                            //#line 115 "x10/util/foreach/Bisect.x10"
                            TPMGL(T) myRes__138607 = identity;
                            
                            //#line 116 "x10/util/foreach/Bisect.x10"
                            x10_long i__138033min__138590 =
                              range->FMGL(min);
                            x10_long i__138033max__138591 =
                              range->FMGL(max);
                            {
                                x10_long i__138592;
                                for (i__138592 = i__138033min__138590;
                                     ((i__138592) <= (i__138033max__138591));
                                     i__138592 = ((i__138592) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 117 "x10/util/foreach/Bisect.x10"
                                    myRes__138607 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                      myRes__138607, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                        i__138592));
                                }
                            }
                            myRes__138607;
                        }))
                        ;
                        goto __ret__138603_end_;
                    } else {
                        
                        //#line 139 "x10/util/foreach/Bisect.x10"
                        ret__138602 = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                                        range->FMGL(min),
                                        ((range->FMGL(max)) + (((x10_long)1ll))),
                                        grainSize, reduce,
                                        reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__5<TPMGL(T)>)))x10_util_foreach_Bisect__closure__5<TPMGL(T)>(identity__138613, reduce__138612, body__138614))));
                        goto __ret__138603_end_;
                    }
                    
                }goto __ret__138603_end_; __ret__138603_end_: ;
                }
                ret__138602;
                }))
                ;
            
            //#line 168 "x10/util/foreach/Bisect.x10"
            return ret__138615;
            }
            #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2223
            #ifndef X10_UTIL_FOREACH_BISECT_H_doBisectReduce1D_2224
            #define X10_UTIL_FOREACH_BISECT_H_doBisectReduce1D_2224
            template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::doBisectReduce1D(
              x10_long start, x10_long end, x10_long grainSize,
              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
              ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>* body) {
                
                //#line 175 "x10/util/foreach/Bisect.x10"
                if (((((end) - (start))) > (grainSize))) {
                    
                    //#line 176 "x10/util/foreach/Bisect.x10"
                    TPMGL(T) asyncResult;
                    
                    //#line 177 "x10/util/foreach/Bisect.x10"
                    TPMGL(T) syncResult;
                    {
                        
                        //#line 178 "x10/util/foreach/Bisect.x10"
                        ::x10::xrx::Runtime::ensureNotInAtomic();
                        ::x10::xrx::FinishState* fs__138808 =
                          ::x10::xrx::Runtime::startFinish();
                        try {
                            {
                                
                                //#line 179 "x10/util/foreach/Bisect.x10"
                                ::x10::xrx::Runtime::runAsync(
                                  reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Bisect__closure__6<TPMGL(T)>)))x10_util_foreach_Bisect__closure__6<TPMGL(T)>(&(asyncResult), start, end, grainSize, reduce, body))));
                                
                                //#line 180 "x10/util/foreach/Bisect.x10"
                                syncResult = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                                               start, ((((start) + (end))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                               grainSize,
                                               reduce, body);
                            }
                        }
                        catch (::x10::lang::CheckedThrowable* __exc2225) {
                            {
                                ::x10::lang::CheckedThrowable* ct__138806 =
                                  __exc2225;
                                {
                                    ::x10::xrx::Runtime::pushException(
                                      ct__138806);
                                }
                            }
                        }
                        ::x10::xrx::Runtime::stopFinish(fs__138808);
                    }
                    
                    //#line 182 "x10/util/foreach/Bisect.x10"
                    return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                      syncResult, asyncResult);
                    
                } else {
                    
                    //#line 184 "x10/util/foreach/Bisect.x10"
                    return ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                      ::x10::lang::LongRange::_make(start, ((end) - (((x10_long)1ll)))));
                    
                }
                
            }
            #endif // X10_UTIL_FOREACH_BISECT_H_doBisectReduce1D_2224
            #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2235
            #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2235
            template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
              ::x10::array::DenseIterationSpace_2* space,
              x10_long grainSize0, x10_long grainSize1, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
              TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
                
                //#line 311 "x10/util/foreach/Bisect.x10"
                if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                             ((x10_int)1))))
                {
                    
                    //#line 88 "x10/util/foreach/Sequential.x10"
                    TPMGL(T) myRes__138683 = identity;
                    
                    //#line 89 "x10/util/foreach/Sequential.x10"
                    x10_long j__137263min__138671 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                      ((x10_long)1ll));
                    x10_long j__137263max__138672 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                      ((x10_long)1ll));
                    x10_long i__137294min__138673 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                      ((x10_long)0ll));
                    x10_long i__137294max__138674 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                      ((x10_long)0ll));
                    {
                        x10_long i__138675;
                        for (i__138675 = i__137294min__138673;
                             ((i__138675) <= (i__137294max__138674));
                             i__138675 = ((i__138675) + (((x10_long)1ll))))
                        {
                            {
                                x10_long j__138677;
                                for (j__138677 = j__137263min__138671;
                                     ((j__138677) <= (j__137263max__138672));
                                     j__138677 = ((j__138677) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 90 "x10/util/foreach/Sequential.x10"
                                    myRes__138683 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                      myRes__138683, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                        i__138675, j__138677));
                                }
                            }
                            
                        }
                    }
                    
                    //#line 312 "x10/util/foreach/Bisect.x10"
                    return myRes__138683;
                    
                } else {
                    
                    //#line 324 "x10/util/foreach/Bisect.x10"
                    return ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                             ::x10aux::nullCheck(space)->FMGL(min0),
                             ((::x10aux::nullCheck(space)->FMGL(max0)) + (((x10_long)1ll))),
                             ::x10aux::nullCheck(space)->FMGL(min1),
                             ((::x10aux::nullCheck(space)->FMGL(max1)) + (((x10_long)1ll))),
                             grainSize0, grainSize1, reduce,
                             reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__11<TPMGL(T)>)))x10_util_foreach_Bisect__closure__11<TPMGL(T)>(identity, reduce, body))));
                    
                }
                
            }
            #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2235
            #ifndef X10_UTIL_FOREACH_BISECT_H__kwd__for_2236
            #define X10_UTIL_FOREACH_BISECT_H__kwd__for_2236
            template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::_kwd__for(
              ::x10::array::DenseIterationSpace_2* space,
              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
              TPMGL(T) identity, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
                
                //#line 343 "x10/util/foreach/Bisect.x10"
                x10_long grainSize0 = (__extension__ ({
                    x10_long b__138350 = ((((::x10aux::nullCheck(space)->FMGL(max0)) - (::x10aux::nullCheck(space)->FMGL(min0)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
                    ((((x10_long)1ll)) < (b__138350)) ? (b__138350)
                      : (((x10_long)1ll));
                }))
                ;
                
                //#line 344 "x10/util/foreach/Bisect.x10"
                x10_long grainSize1 = (__extension__ ({
                    x10_long b__138353 = ((((::x10aux::nullCheck(space)->FMGL(max1)) - (::x10aux::nullCheck(space)->FMGL(min1)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
                    ((((x10_long)1ll)) < (b__138353)) ? (b__138353)
                      : (((x10_long)1ll));
                }))
                ;
                
                //#line 345 "x10/util/foreach/Bisect.x10"
                ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138712 =
                  reduce;
                TPMGL(T) identity__138713 = identity;
                ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__138714 =
                  body;
                
                //#line 307 "x10/util/foreach/Bisect.x10"
                TPMGL(T) ret__138715;
                goto __ret__138716; __ret__138716: {
                {
                    
                    //#line 311 "x10/util/foreach/Bisect.x10"
                    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                 ((x10_int)1))))
                    {
                        
                        //#line 312 "x10/util/foreach/Bisect.x10"
                        ret__138715 = (__extension__ ({
                            
                            //#line 88 "x10/util/foreach/Sequential.x10"
                            TPMGL(T) myRes__138721 = identity;
                            
                            //#line 89 "x10/util/foreach/Sequential.x10"
                            x10_long j__137263min__138693 =
                              ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                ((x10_long)1ll));
                            x10_long j__137263max__138694 =
                              ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                ((x10_long)1ll));
                            x10_long i__137294min__138695 =
                              ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                ((x10_long)0ll));
                            x10_long i__137294max__138696 =
                              ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                ((x10_long)0ll));
                            {
                                x10_long i__138697;
                                for (i__138697 = i__137294min__138695;
                                     ((i__138697) <= (i__137294max__138696));
                                     i__138697 = ((i__138697) + (((x10_long)1ll))))
                                {
                                    {
                                        x10_long j__138699;
                                        for (j__138699 = j__137263min__138693;
                                             ((j__138699) <= (j__137263max__138694));
                                             j__138699 = ((j__138699) + (((x10_long)1ll))))
                                        {
                                            
                                            //#line 90 "x10/util/foreach/Sequential.x10"
                                            myRes__138721 =
                                              ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                                              myRes__138721,
                                              ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                                i__138697,
                                                j__138699));
                                        }
                                    }
                                    
                                }
                            }
                            myRes__138721;
                        }))
                        ;
                        goto __ret__138716_end_;
                    } else {
                        
                        //#line 324 "x10/util/foreach/Bisect.x10"
                        ret__138715 = ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                                        ::x10aux::nullCheck(space)->FMGL(min0),
                                        ((::x10aux::nullCheck(space)->FMGL(max0)) + (((x10_long)1ll))),
                                        ::x10aux::nullCheck(space)->FMGL(min1),
                                        ((::x10aux::nullCheck(space)->FMGL(max1)) + (((x10_long)1ll))),
                                        grainSize0, grainSize1,
                                        reduce, reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__closure__12<TPMGL(T)>)))x10_util_foreach_Bisect__closure__12<TPMGL(T)>(identity__138713, reduce__138712, body__138714))));
                        goto __ret__138716_end_;
                    }
                    
                }goto __ret__138716_end_; __ret__138716_end_: ;
                }
                
                //#line 345 "x10/util/foreach/Bisect.x10"
                return ret__138715;
                }
                #endif // X10_UTIL_FOREACH_BISECT_H__kwd__for_2236
                #ifndef X10_UTIL_FOREACH_BISECT_H_doBisectReduce2D_2237
                #define X10_UTIL_FOREACH_BISECT_H_doBisectReduce2D_2237
                template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect::doBisectReduce2D(
                  x10_long s0, x10_long e0, x10_long s1, x10_long e1,
                  x10_long g1, x10_long g2, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                  ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>* body) {
                    
                    //#line 431 "x10/util/foreach/Bisect.x10"
                    if ((((((e0) - (s0))) > (g1)) && ((((((e0) - (s0))) >= (((e1) - (s1)))) ||
                                                      ((((e1) - (s1))) <= (g2))))))
                    {
                        
                        //#line 432 "x10/util/foreach/Bisect.x10"
                        TPMGL(T) asyncResult;
                        
                        //#line 433 "x10/util/foreach/Bisect.x10"
                        TPMGL(T) syncResult;
                        {
                            
                            //#line 434 "x10/util/foreach/Bisect.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__138831 =
                              ::x10::xrx::Runtime::startFinish();
                            try {
                                {
                                    
                                    //#line 435 "x10/util/foreach/Bisect.x10"
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Bisect__closure__13<TPMGL(T)>)))x10_util_foreach_Bisect__closure__13<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, reduce, body))));
                                    
                                    //#line 436 "x10/util/foreach/Bisect.x10"
                                    syncResult = ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                                                   s0, ((((s0) + (e0))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                   s1, e1,
                                                   g1, g2,
                                                   reduce,
                                                   body);
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc2238) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__138829 =
                                      __exc2238;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__138829);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__138831);
                        }
                        
                        //#line 438 "x10/util/foreach/Bisect.x10"
                        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          asyncResult, syncResult);
                        
                    } else 
                    //#line 439 "x10/util/foreach/Bisect.x10"
                    if (((((e1) - (s1))) > (g2))) {
                        
                        //#line 440 "x10/util/foreach/Bisect.x10"
                        TPMGL(T) asyncResult;
                        
                        //#line 441 "x10/util/foreach/Bisect.x10"
                        TPMGL(T) syncResult;
                        {
                            
                            //#line 442 "x10/util/foreach/Bisect.x10"
                            ::x10::xrx::Runtime::ensureNotInAtomic();
                            ::x10::xrx::FinishState* fs__138836 =
                              ::x10::xrx::Runtime::startFinish();
                            try {
                                {
                                    
                                    //#line 443 "x10/util/foreach/Bisect.x10"
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Bisect__closure__14<TPMGL(T)>)))x10_util_foreach_Bisect__closure__14<TPMGL(T)>(&(asyncResult), s0, e0, s1, e1, g1, g2, reduce, body))));
                                    
                                    //#line 444 "x10/util/foreach/Bisect.x10"
                                    syncResult = ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                                                   s0, e0,
                                                   s1, ((((s1) + (e1))) / ::x10aux::zeroCheck(((x10_long)2ll))),
                                                   g1, g2,
                                                   reduce,
                                                   body);
                                }
                            }
                            catch (::x10::lang::CheckedThrowable* __exc2239) {
                                {
                                    ::x10::lang::CheckedThrowable* ct__138834 =
                                      __exc2239;
                                    {
                                        ::x10::xrx::Runtime::pushException(
                                          ct__138834);
                                    }
                                }
                            }
                            ::x10::xrx::Runtime::stopFinish(
                              fs__138836);
                        }
                        
                        //#line 446 "x10/util/foreach/Bisect.x10"
                        return ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce), 
                          asyncResult, syncResult);
                        
                    } else {
                        
                        //#line 448 "x10/util/foreach/Bisect.x10"
                        return ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                          s0, ((e0) - (((x10_long)1ll))),
                          s1, ((e1) - (((x10_long)1ll))));
                        
                    }
                    
                }
                #endif // X10_UTIL_FOREACH_BISECT_H_doBisectReduce2D_2237
                #endif // X10_UTIL_FOREACH_BISECT_H_GENERICS
                #endif // __X10_UTIL_FOREACH_BISECT_H_NODEPS
