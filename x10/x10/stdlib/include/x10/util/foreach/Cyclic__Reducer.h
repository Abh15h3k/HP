#ifndef __X10_UTIL_FOREACH_CYCLIC__REDUCER_H
#define __X10_UTIL_FOREACH_CYCLIC__REDUCER_H

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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

template<class TPMGL(T)> class Cyclic__Reducer;
template <> class Cyclic__Reducer<void>;
template<class TPMGL(T)> class Cyclic__Reducer : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Cell<TPMGL(T)>* FMGL(result);
    
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* FMGL(reduce);
    
    TPMGL(T) FMGL(identity);
    
    virtual TPMGL(T) value();
    void _constructor(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                      TPMGL(T) identity);
    
    static ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
             TPMGL(T) identity);
    
    void _constructor(::x10::lang::Reducible<TPMGL(T)>* red);
    
    static ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Reducible<TPMGL(T)>* red);
    
    virtual TPMGL(T) _kwd__for(::x10::lang::LongRange range, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* x10__util__foreach__Cyclic__Reducer____this__x10__util__foreach__Cyclic__Reducer(
      );
    virtual void __fieldInitializers_x10_util_foreach_Cyclic_Reducer(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::foreach::Cyclic__Reducer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.foreach.Cyclic.Reducer";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Cyclic__Reducer<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // X10_UTIL_FOREACH_CYCLIC__REDUCER_H

namespace x10 { namespace util { namespace foreach { 
template<class TPMGL(T)> class Cyclic__Reducer;
} } } 

#ifndef X10_UTIL_FOREACH_CYCLIC__REDUCER_H_NODEPS
#define X10_UTIL_FOREACH_CYCLIC__REDUCER_H_NODEPS
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
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_CYCLIC__REDUCER_H_GENERICS
#define X10_UTIL_FOREACH_CYCLIC__REDUCER_H_GENERICS
#endif // X10_UTIL_FOREACH_CYCLIC__REDUCER_H_GENERICS
#ifndef X10_UTIL_FOREACH_CYCLIC__REDUCER_H_IMPLEMENTATION
#define X10_UTIL_FOREACH_CYCLIC__REDUCER_H_IMPLEMENTATION
#include <x10/util/foreach/Cyclic__Reducer.h>

#ifndef X10_UTIL_FOREACH_CYCLIC__REDUCER__CLOSURE__3_CLOSURE
#define X10_UTIL_FOREACH_CYCLIC__REDUCER__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_foreach_Cyclic__Reducer__closure__3 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) > > _itable;
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
        x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Reducible<TPMGL(T)>* that_red = buf.read< ::x10::lang::Reducible<TPMGL(T)>*>();
        x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >(that_red);
        return this_;
    }
    
    x10_util_foreach_Cyclic__Reducer__closure__3(::x10::lang::Reducible<TPMGL(T)>* red) : red(red) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Cyclic.x10:121";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) > >x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >::__apply, &x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_CYCLIC__REDUCER__CLOSURE__3_CLOSURE
#ifndef X10_UTIL_FOREACH_CYCLIC__REDUCER__CLOSURE__4_CLOSURE
#define X10_UTIL_FOREACH_CYCLIC__REDUCER__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class x10_util_foreach_Cyclic__Reducer__closure__4 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 65 "x10/util/foreach/Cyclic.x10"
        TPMGL(T) myRes__139922 = identity__139851;
        
        //#line 66 "x10/util/foreach/Cyclic.x10"
        {
            x10_long i__139923;
            for (i__139923 = ((min__139853) + (t__139926)); ((i__139923) <= (max__139854));
                 i__139923 = ((i__139923) + (((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())))))
            {
                
                //#line 67 "x10/util/foreach/Cyclic.x10"
                myRes__139922 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139850), 
                  myRes__139922, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__139852), 
                    i__139923));
            }
        }
        
        //#line 69 "x10/util/foreach/Cyclic.x10"
        results__139855->x10::lang::template Rail< TPMGL(T) >::__set(
          t__139926, myRes__139922);
    }
    
    // captured environment
    TPMGL(T) identity__139851;
    x10_long min__139853;
    x10_long t__139926;
    x10_long max__139854;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139850;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__139852;
    ::x10::lang::Rail< TPMGL(T) >* results__139855;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__139851);
        buf.write(this->min__139853);
        buf.write(this->t__139926);
        buf.write(this->max__139854);
        buf.write(this->reduce__139850);
        buf.write(this->body__139852);
        buf.write(this->results__139855);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__139851 = buf.read<TPMGL(T)>();
        x10_long that_min__139853 = buf.read<x10_long>();
        x10_long that_t__139926 = buf.read<x10_long>();
        x10_long that_max__139854 = buf.read<x10_long>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__139850 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body__139852 = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        ::x10::lang::Rail< TPMGL(T) >* that_results__139855 = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
        x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >(that_identity__139851, that_min__139853, that_t__139926, that_max__139854, that_reduce__139850, that_body__139852, that_results__139855);
        return this_;
    }
    
    x10_util_foreach_Cyclic__Reducer__closure__4(TPMGL(T) identity__139851, x10_long min__139853, x10_long t__139926, x10_long max__139854, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139850, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__139852, ::x10::lang::Rail< TPMGL(T) >* results__139855) : identity__139851(identity__139851), min__139853(min__139853), t__139926(t__139926), max__139854(max__139854), reduce__139850(reduce__139850), body__139852(body__139852), results__139855(results__139855) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::serialization_id_t _network_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Cyclic.x10:64-70";
    }

};

template<class TPMGL(T)> typename ::x10::lang::VoidFun_0_0::template itable <x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) > >x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >::__apply, &x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >::_deserialize);
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T) >::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

#endif // X10_UTIL_FOREACH_CYCLIC__REDUCER__CLOSURE__4_CLOSURE

//#line 84 "x10/util/foreach/Cyclic.x10"

//#line 89 "x10/util/foreach/Cyclic.x10"
/**
         * The reduction operation.
         */

//#line 94 "x10/util/foreach/Cyclic.x10"
/**
         * The identity value for the reduction operation such that reduce(identity,f)=f.
         */

//#line 101 "x10/util/foreach/Cyclic.x10"
/**
         * Access to the result of the last reduction. It may
         * raise <code>ReduceNotReady</code> if no result has been
         * computed yet.
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::value(
  ) {
    
    //#line 102 "x10/util/foreach/Cyclic.x10"
    if ((::x10aux::struct_equals(this->FMGL(result), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::util::foreach::ReduceNotReady::_make()));
    }
    
    //#line 103 "x10/util/foreach/Cyclic.x10"
    ::x10::lang::Cell<TPMGL(T)>* this__139914 = this->FMGL(result);
    return ::x10aux::nullCheck(this__139914)->FMGL(value);
    
}

//#line 111 "x10/util/foreach/Cyclic.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param reduce the reduction operation
         * @param identity the identity value for the reduction operation such that reduce(identity,f)=f
         */
template<class TPMGL(T)> void x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    
    //#line 83 "x10/util/foreach/Cyclic.x10"
    ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* this__139915 =
      this;
    ::x10aux::nullCheck(this__139915)->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 112 "x10/util/foreach/Cyclic.x10"
    this->FMGL(reduce) = (reduce);
    
    //#line 113 "x10/util/foreach/Cyclic.x10"
    this->FMGL(identity) = identity;
}
template<class TPMGL(T)> ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>();
    this_->_constructor(reduce, identity);
    return this_;
}



//#line 120 "x10/util/foreach/Cyclic.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param red the reduction operation
         */
template<class TPMGL(T)> void x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Reducible<TPMGL(T)>* red) {
    
    //#line 83 "x10/util/foreach/Cyclic.x10"
    ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* this__139916 =
      this;
    ::x10aux::nullCheck(this__139916)->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 121 "x10/util/foreach/Cyclic.x10"
    this->FMGL(reduce) = reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T)>)))x10_util_foreach_Cyclic__Reducer__closure__3<TPMGL(T)>(red)));
    
    //#line 122 "x10/util/foreach/Cyclic.x10"
    this->FMGL(identity) = ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(red));
}
template<class TPMGL(T)> ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Reducible<TPMGL(T)>* red)
{
    ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>();
    this_->_constructor(red);
    return this_;
}



//#line 130 "x10/util/foreach/Cyclic.x10"
/**
         * Reduce over a range of indices in parallel using a cyclic decomposition.
         * @param range the iteration space
         * @param body a closure that executes over a single value of the index
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 132 "x10/util/foreach/Cyclic.x10"
    TPMGL(T) res = (__extension__ ({
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__139850 =
          this->FMGL(reduce);
        TPMGL(T) identity__139851 = this->FMGL(identity);
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__139852 =
          body;
        
        //#line 55 "x10/util/foreach/Cyclic.x10"
        TPMGL(T) ret__139867;
        goto __ret__139868; __ret__139868: {
        {
            
            //#line 58 "x10/util/foreach/Cyclic.x10"
            if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                         ((x10_int)1)))) {
                
                //#line 59 "x10/util/foreach/Cyclic.x10"
                ret__139867 = (__extension__ ({
                    
                    //#line 71 "x10/util/foreach/Sequential.x10"
                    TPMGL(T) myRes__139873 = identity__139851;
                    
                    //#line 72 "x10/util/foreach/Sequential.x10"
                    x10_long i__137243min__139918 = range->FMGL(min);
                    x10_long i__137243max__139919 = range->FMGL(max);
                    {
                        x10_long i__139920;
                        for (i__139920 = i__137243min__139918;
                             ((i__139920) <= (i__137243max__139919));
                             i__139920 = ((i__139920) + (((x10_long)1ll))))
                        {
                            
                            //#line 73 "x10/util/foreach/Sequential.x10"
                            myRes__139873 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139850), 
                              myRes__139873, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                i__139920));
                        }
                    }
                    myRes__139873;
                }))
                ;
                goto __ret__139868_end_;
            } else {
                
                //#line 61 "x10/util/foreach/Cyclic.x10"
                x10_long min__139853 = range->FMGL(min);
                
                //#line 62 "x10/util/foreach/Cyclic.x10"
                x10_long max__139854 = range->FMGL(max);
                
                //#line 63 "x10/util/foreach/Cyclic.x10"
                ::x10::lang::Rail< TPMGL(T) >* results__139855 =
                  ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)())), false);
                {
                    
                    //#line 64 "x10/util/foreach/Cyclic.x10"
                    ::x10::xrx::Runtime::ensureNotInAtomic();
                    ::x10::xrx::FinishState* fs__139945 =
                      ::x10::xrx::Runtime::startFinish();
                    try {
                        {
                            x10_long i__139789max__139924 =
                              ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                            {
                                x10_long i__139925;
                                for (i__139925 = ((x10_long)0ll);
                                     ((i__139925) <= (i__139789max__139924));
                                     i__139925 = ((i__139925) + (((x10_long)1ll))))
                                {
                                    x10_long t__139926 = i__139925;
                                    ::x10::xrx::Runtime::runAsync(
                                      reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T)>)))x10_util_foreach_Cyclic__Reducer__closure__4<TPMGL(T)>(identity__139851, min__139853, t__139926, max__139854, reduce__139850, body__139852, results__139855))));
                                }
                            }
                            
                        }
                    }
                    catch (::x10::lang::CheckedThrowable* __exc2280) {
                        {
                            ::x10::lang::CheckedThrowable* ct__139943 =
                              __exc2280;
                            {
                                ::x10::xrx::Runtime::pushException(
                                  ct__139943);
                            }
                        }
                    }
                    ::x10::xrx::Runtime::stopFinish(fs__139945);
                }
                
                //#line 71 "x10/util/foreach/Cyclic.x10"
                TPMGL(T) res__139862 = results__139855->x10::lang::template Rail< TPMGL(T) >::__apply(
                                         ((x10_long)0ll));
                
                //#line 72 "x10/util/foreach/Cyclic.x10"
                x10_long i__139807max__139927 = ((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) - (((x10_long)1ll)));
                {
                    x10_long i__139928;
                    for (i__139928 = ((x10_long)1ll); ((i__139928) <= (i__139807max__139927));
                         i__139928 = ((i__139928) + (((x10_long)1ll))))
                    {
                        
                        //#line 73 "x10/util/foreach/Cyclic.x10"
                        res__139862 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__139850), 
                          res__139862, results__139855->x10::lang::template Rail< TPMGL(T) >::__apply(
                                         i__139928));
                    }
                }
                
                //#line 75 "x10/util/foreach/Cyclic.x10"
                ret__139867 = res__139862;
                goto __ret__139868_end_;
            }
            
        }goto __ret__139868_end_; __ret__139868_end_: ;
        }
        ret__139867;
        }))
        ;
        
    
    //#line 133 "x10/util/foreach/Cyclic.x10"
    this->FMGL(result) = (__extension__ ({
        ::x10::lang::Cell<TPMGL(T)>* alloc__139769 =  (new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>());
        
        //#line 33 "x10/lang/Cell.x10"
        alloc__139769->FMGL(value) = res;
        alloc__139769;
    }))
    ;
    
    //#line 134 "x10/util/foreach/Cyclic.x10"
    return res;
    }
    

//#line 83 "x10/util/foreach/Cyclic.x10"
template<class TPMGL(T)> ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>*
  x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::x10__util__foreach__Cyclic__Reducer____this__x10__util__foreach__Cyclic__Reducer(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::__fieldInitializers_x10_util_foreach_Cyclic_Reducer(
  ) {
    this->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(result));
    buf.write(this->FMGL(reduce));
    buf.write(this->FMGL(identity));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Cyclic__Reducer<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::foreach::Cyclic__Reducer<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(result) = buf.read< ::x10::lang::Cell<TPMGL(T)>*>();
    FMGL(reduce) = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
    FMGL(identity) = buf.read<TPMGL(T)>();
}

#endif // X10_UTIL_FOREACH_CYCLIC__REDUCER_H_IMPLEMENTATION
#endif // __X10_UTIL_FOREACH_CYCLIC__REDUCER_H_NODEPS
