#ifndef __X10_UTIL_FOREACH_BISECT__REDUCER_H
#define __X10_UTIL_FOREACH_BISECT__REDUCER_H

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
namespace x10 { namespace util { namespace foreach { 
class Bisect;
} } } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(Z4), class TPMGL(U)>
class Fun_0_4;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { namespace foreach { 

template<class TPMGL(T)> class Bisect__Reducer;
template <> class Bisect__Reducer<void>;
template<class TPMGL(T)> class Bisect__Reducer : public ::x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Cell<TPMGL(T)>* FMGL(result);
    
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* FMGL(reduce);
    
    TPMGL(T) FMGL(identity);
    
    virtual TPMGL(T) value();
    void _constructor(::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                      TPMGL(T) identity);
    
    static ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
             TPMGL(T) identity);
    
    void _constructor(::x10::lang::Reducible<TPMGL(T)>* red);
    
    static ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>* _make(
             ::x10::lang::Reducible<TPMGL(T)>* red);
    
    virtual TPMGL(T) _kwd__for(::x10::lang::LongRange range,
                               ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body);
    virtual TPMGL(T) _kwd__for(::x10::array::DenseIterationSpace_2* space,
                               ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body);
    virtual ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>*
      x10__util__foreach__Bisect__Reducer____this__x10__util__foreach__Bisect__Reducer(
      );
    virtual void __fieldInitializers_x10_util_foreach_Bisect_Reducer(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::util::foreach::Bisect__Reducer<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::util::foreach::Bisect__Reducer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.util.foreach.Bisect.Reducer";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class Bisect__Reducer<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // X10_UTIL_FOREACH_BISECT__REDUCER_H

namespace x10 { namespace util { namespace foreach { 
template<class TPMGL(T)> class Bisect__Reducer;
} } } 

#ifndef X10_UTIL_FOREACH_BISECT__REDUCER_H_NODEPS
#define X10_UTIL_FOREACH_BISECT__REDUCER_H_NODEPS
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
#include <x10/util/foreach/Bisect.h>
#include <x10/array/DenseIterationSpace_2.h>
#include <x10/lang/Fun_0_4.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_UTIL_FOREACH_BISECT__REDUCER_H_GENERICS
#define X10_UTIL_FOREACH_BISECT__REDUCER_H_GENERICS
#endif // X10_UTIL_FOREACH_BISECT__REDUCER_H_GENERICS
#ifndef X10_UTIL_FOREACH_BISECT__REDUCER_H_IMPLEMENTATION
#define X10_UTIL_FOREACH_BISECT__REDUCER_H_IMPLEMENTATION
#include <x10/util/foreach/Bisect__Reducer.h>

#ifndef X10_UTIL_FOREACH_BISECT__REDUCER__CLOSURE__15_CLOSURE
#define X10_UTIL_FOREACH_BISECT__REDUCER__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__Reducer__closure__15 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) > > _itable;
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
        x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::Reducible<TPMGL(T)>* that_red = buf.read< ::x10::lang::Reducible<TPMGL(T)>*>();
        x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >(that_red);
        return this_;
    }
    
    x10_util_foreach_Bisect__Reducer__closure__15(::x10::lang::Reducible<TPMGL(T)>* red) : red(red) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:390";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::template itable <x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) > >x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >, &x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__REDUCER__CLOSURE__15_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__REDUCER__CLOSURE__16_CLOSURE
#define X10_UTIL_FOREACH_BISECT__REDUCER__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__Reducer__closure__16 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(::x10::lang::LongRange range__138749){
        
        //#line 115 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myRes__138750 = identity__138411;
        
        //#line 116 "x10/util/foreach/Bisect.x10"
        x10_long i__138033min__138736 = range__138749->FMGL(min);
        x10_long i__138033max__138737 = range__138749->FMGL(max);
        {
            x10_long i__138738;
            for (i__138738 = i__138033min__138736; ((i__138738) <= (i__138033max__138737));
                 i__138738 = ((i__138738) + (((x10_long)1ll)))) {
                
                //#line 117 "x10/util/foreach/Bisect.x10"
                myRes__138750 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__138410), 
                  myRes__138750, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__138412), 
                    i__138738));
            }
        }
        
        //#line 119 "x10/util/foreach/Bisect.x10"
        return myRes__138750;
        
    }
    
    // captured environment
    TPMGL(T) identity__138411;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138410;
    ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__138412;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__138411);
        buf.write(this->reduce__138410);
        buf.write(this->body__138412);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__138411 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__138410 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* that_body__138412 = buf.read< ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >(that_identity__138411, that_reduce__138410, that_body__138412);
        return this_;
    }
    
    x10_util_foreach_Bisect__Reducer__closure__16(TPMGL(T) identity__138411, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138410, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__138412) : identity__138411(identity__138411), reduce__138410(reduce__138410), body__138412(body__138412) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:114-120";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>::template itable <x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) > >x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >, &x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__REDUCER__CLOSURE__16_CLOSURE
#ifndef X10_UTIL_FOREACH_BISECT__REDUCER__CLOSURE__17_CLOSURE
#define X10_UTIL_FOREACH_BISECT__REDUCER__CLOSURE__17_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_4.h>
template<class TPMGL(T)> class x10_util_foreach_Bisect__Reducer__closure__17 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    TPMGL(T) __apply(x10_long min__138464, x10_long max__138465, x10_long min__138466, x10_long max__138467){
        
        //#line 316 "x10/util/foreach/Bisect.x10"
        TPMGL(T) myResult__138468 = identity__138461;
        
        //#line 317 "x10/util/foreach/Bisect.x10"
        {
            x10_long i__138767;
            for (i__138767 = min__138464; ((i__138767) <= (max__138465));
                 i__138767 = ((i__138767) + (((x10_long)1ll)))) {
                
                //#line 318 "x10/util/foreach/Bisect.x10"
                {
                    x10_long i__138763;
                    for (i__138763 = min__138466; ((i__138763) <= (max__138467));
                         i__138763 = ((i__138763) + (((x10_long)1ll))))
                    {
                        
                        //#line 319 "x10/util/foreach/Bisect.x10"
                        myResult__138468 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__138460), 
                          myResult__138468, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body__138462), 
                            i__138767, i__138763));
                    }
                }
                
            }
        }
        
        //#line 322 "x10/util/foreach/Bisect.x10"
        return myResult__138468;
        
    }
    
    // captured environment
    TPMGL(T) identity__138461;
    ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138460;
    ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__138462;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->identity__138461);
        buf.write(this->reduce__138460);
        buf.write(this->body__138462);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) > >();
        buf.record_reference(storage);
        TPMGL(T) that_identity__138461 = buf.read<TPMGL(T)>();
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* that_reduce__138460 = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
        ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* that_body__138462 = buf.read< ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>*>();
        x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >* this_ = new (storage) x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >(that_identity__138461, that_reduce__138460, that_body__138462);
        return this_;
    }
    
    x10_util_foreach_Bisect__Reducer__closure__17(TPMGL(T) identity__138461, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138460, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__138462) : identity__138461(identity__138461), reduce__138460(reduce__138460), body__138462(body__138462) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(); }
    
    const char* toNativeString() {
        return "x10/util/foreach/Bisect.x10:315-323";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>::template itable <x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) > >x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >::__apply, &x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >, &x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T) >::_deserialize);

#endif // X10_UTIL_FOREACH_BISECT__REDUCER__CLOSURE__17_CLOSURE

//#line 352 "x10/util/foreach/Bisect.x10"

//#line 357 "x10/util/foreach/Bisect.x10"
/**
         * The reduction operation.
         */

//#line 362 "x10/util/foreach/Bisect.x10"
/**
         * The identity value for the reduction operation such that reduce(identity,f)=f.
         */

//#line 370 "x10/util/foreach/Bisect.x10"
/**
         * Access to the result of the last reduction. It may
         * raise <code>ReduceNotReady</code> if no result has been
         * computed yet.
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect__Reducer<TPMGL(T)>::value(
  ) {
    
    //#line 371 "x10/util/foreach/Bisect.x10"
    if ((::x10aux::struct_equals(this->FMGL(result), reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::util::foreach::ReduceNotReady::_make()));
    }
    
    //#line 372 "x10/util/foreach/Bisect.x10"
    ::x10::lang::Cell<TPMGL(T)>* this__138727 = this->FMGL(result);
    return ::x10aux::nullCheck(this__138727)->FMGL(value);
    
}

//#line 380 "x10/util/foreach/Bisect.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param reduce the reduction operation
         * @param identity the identity value for the reduction operation such that reduce(identity,f)=f
         */
template<class TPMGL(T)> void x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    
    //#line 351 "x10/util/foreach/Bisect.x10"
    ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>* this__138728 =
      this;
    ::x10aux::nullCheck(this__138728)->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 381 "x10/util/foreach/Bisect.x10"
    this->FMGL(reduce) = (reduce);
    
    //#line 382 "x10/util/foreach/Bisect.x10"
    this->FMGL(identity) = identity;
}
template<class TPMGL(T)> ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>* x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce,
                           TPMGL(T) identity) {
    ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Bisect__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>();
    this_->_constructor(reduce, identity);
    return this_;
}



//#line 389 "x10/util/foreach/Bisect.x10"
/**
         * Constructor for collecting loop with reducer.
         * @param red the reduction operation
         */
template<class TPMGL(T)> void x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_constructor(
                           ::x10::lang::Reducible<TPMGL(T)>* red) {
    
    //#line 351 "x10/util/foreach/Bisect.x10"
    ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>* this__138729 =
      this;
    ::x10aux::nullCheck(this__138729)->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 390 "x10/util/foreach/Bisect.x10"
    this->FMGL(reduce) = reinterpret_cast< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T)>)))x10_util_foreach_Bisect__Reducer__closure__15<TPMGL(T)>(red)));
    
    //#line 391 "x10/util/foreach/Bisect.x10"
    this->FMGL(identity) = ::x10::lang::Reducible<TPMGL(T)>::zero(::x10aux::nullCheck(red));
}
template<class TPMGL(T)> ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>* x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_make(
                           ::x10::lang::Reducible<TPMGL(T)>* red)
{
    ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Bisect__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>();
    this_->_constructor(red);
    return this_;
}



//#line 399 "x10/util/foreach/Bisect.x10"
/**
         * Reduce over a range of indices in parallel using recursive bisection.
         * @param range the iteration space
         * @param body a closure that executes over a single value of the index
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_kwd__for(
  ::x10::lang::LongRange range, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body) {
    
    //#line 401 "x10/util/foreach/Bisect.x10"
    TPMGL(T) res = (__extension__ ({
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138400 =
          this->FMGL(reduce);
        TPMGL(T) identity__138401 = this->FMGL(identity);
        
        //#line 167 "x10/util/foreach/Bisect.x10"
        x10_long grainSize__138403 = (__extension__ ({
            x10_long b__138406 = ((((range->FMGL(max)) - (range->FMGL(min)))) / ::x10aux::zeroCheck(((((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))) * (((x10_long)8ll)))));
            ((((x10_long)1ll)) < (b__138406)) ? (b__138406)
              : (((x10_long)1ll));
        }))
        ;
        (__extension__ ({
            
            //#line 168 "x10/util/foreach/Bisect.x10"
            ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138410 =
              reduce__138400;
            TPMGL(T) identity__138411 = identity__138401;
            ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* body__138412 =
              body;
            
            //#line 109 "x10/util/foreach/Bisect.x10"
            TPMGL(T) ret__138421;
            (__extension__ ({
                
                //#line 132 "x10/util/foreach/Bisect.x10"
                TPMGL(T) ret__138743;
                goto __ret__138744; __ret__138744: {
                {
                    
                    //#line 136 "x10/util/foreach/Bisect.x10"
                    if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                                 ((x10_int)1))))
                    {
                        
                        //#line 137 "x10/util/foreach/Bisect.x10"
                        ret__138743 = (__extension__ ({
                            
                            //#line 115 "x10/util/foreach/Bisect.x10"
                            TPMGL(T) myRes__138748 = identity__138401;
                            
                            //#line 116 "x10/util/foreach/Bisect.x10"
                            x10_long i__138033min__138731 =
                              range->FMGL(min);
                            x10_long i__138033max__138732 =
                              range->FMGL(max);
                            {
                                x10_long i__138733;
                                for (i__138733 = i__138033min__138731;
                                     ((i__138733) <= (i__138033max__138732));
                                     i__138733 = ((i__138733) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 117 "x10/util/foreach/Bisect.x10"
                                    myRes__138748 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__138400), 
                                      myRes__138748, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                        i__138733));
                                }
                            }
                            myRes__138748;
                        }))
                        ;
                        goto __ret__138744_end_;
                    } else {
                        
                        //#line 139 "x10/util/foreach/Bisect.x10"
                        ret__138743 = ::x10::util::foreach::Bisect::template doBisectReduce1D< TPMGL(T) >(
                                        range->FMGL(min),
                                        ((range->FMGL(max)) + (((x10_long)1ll))),
                                        grainSize__138403,
                                        reduce__138400, reinterpret_cast< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_1< ::x10::lang::LongRange, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T)>)))x10_util_foreach_Bisect__Reducer__closure__16<TPMGL(T)>(identity__138411, reduce__138410, body__138412))));
                        goto __ret__138744_end_;
                    }
                    
                }goto __ret__138744_end_; __ret__138744_end_: ;
                }
                ret__138743;
                }))
                ;
            }))
            ;
        }))
        ;
        
    
    //#line 402 "x10/util/foreach/Bisect.x10"
    this->FMGL(result) = (__extension__ ({
        ::x10::lang::Cell<TPMGL(T)>* alloc__138011 =  (new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>());
        
        //#line 33 "x10/lang/Cell.x10"
        alloc__138011->FMGL(value) = res;
        alloc__138011;
    }))
    ;
    
    //#line 403 "x10/util/foreach/Bisect.x10"
    return res;
    }
    

//#line 412 "x10/util/foreach/Bisect.x10"
/**
         * Reduce over a dense rectangular set of indices in parallel using
         * two-dimensional recursive bisection.
         * @param space the 2D dense space over which to reduce
         * @param body a closure that executes over a single index [i,j]
         */
template<class TPMGL(T)> TPMGL(T) x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_kwd__for(
  ::x10::array::DenseIterationSpace_2* space, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body) {
    
    //#line 414 "x10/util/foreach/Bisect.x10"
    TPMGL(T) res = (__extension__ ({
        ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138445 =
          this->FMGL(reduce);
        TPMGL(T) identity__138446 = this->FMGL(identity);
        
        //#line 343 "x10/util/foreach/Bisect.x10"
        x10_long grainSize__138448 = (__extension__ ({
            x10_long b__138452 = ((((::x10aux::nullCheck(space)->FMGL(max0)) - (::x10aux::nullCheck(space)->FMGL(min0)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
            ((((x10_long)1ll)) < (b__138452)) ? (b__138452)
              : (((x10_long)1ll));
        }))
        ;
        
        //#line 344 "x10/util/foreach/Bisect.x10"
        x10_long grainSize__138449 = (__extension__ ({
            x10_long b__138455 = ((((::x10aux::nullCheck(space)->FMGL(max1)) - (::x10aux::nullCheck(space)->FMGL(min1)))) / ::x10aux::zeroCheck(((x10_long)(::x10::xrx::Runtime::FMGL(NTHREADS__get)()))));
            ((((x10_long)1ll)) < (b__138455)) ? (b__138455)
              : (((x10_long)1ll));
        }))
        ;
        (__extension__ ({
            
            //#line 345 "x10/util/foreach/Bisect.x10"
            ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>* reduce__138460 =
              reduce__138445;
            TPMGL(T) identity__138461 = identity__138446;
            ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>* body__138462 =
              body;
            
            //#line 307 "x10/util/foreach/Bisect.x10"
            TPMGL(T) ret__138477;
            goto __ret__138478; __ret__138478: {
            {
                
                //#line 311 "x10/util/foreach/Bisect.x10"
                if ((::x10aux::struct_equals(::x10::xrx::Runtime::FMGL(NTHREADS__get)(),
                                             ((x10_int)1))))
                {
                    
                    //#line 312 "x10/util/foreach/Bisect.x10"
                    ret__138477 = (__extension__ ({
                        
                        //#line 88 "x10/util/foreach/Sequential.x10"
                        TPMGL(T) myRes__138483 = identity__138446;
                        
                        //#line 89 "x10/util/foreach/Sequential.x10"
                        x10_long j__137263min__138753 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                          ((x10_long)1ll));
                        x10_long j__137263max__138754 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                          ((x10_long)1ll));
                        x10_long i__137294min__138755 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::min(
                                                          ((x10_long)0ll));
                        x10_long i__137294max__138756 = ::x10aux::nullCheck(space)->x10::array::DenseIterationSpace_2::max(
                                                          ((x10_long)0ll));
                        {
                            x10_long i__138757;
                            for (i__138757 = i__137294min__138755;
                                 ((i__138757) <= (i__137294max__138756));
                                 i__138757 = ((i__138757) + (((x10_long)1ll))))
                            {
                                {
                                    x10_long j__138759;
                                    for (j__138759 = j__137263min__138753;
                                         ((j__138759) <= (j__137263max__138754));
                                         j__138759 = ((j__138759) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 90 "x10/util/foreach/Sequential.x10"
                                        myRes__138483 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>::__apply(::x10aux::nullCheck(reduce__138445), 
                                          myRes__138483, ::x10::lang::Fun_0_2<x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(body), 
                                            i__138757, j__138759));
                                    }
                                }
                                
                            }
                        }
                        myRes__138483;
                    }))
                    ;
                    goto __ret__138478_end_;
                } else {
                    
                    //#line 324 "x10/util/foreach/Bisect.x10"
                    ret__138477 = ::x10::util::foreach::Bisect::template doBisectReduce2D< TPMGL(T) >(
                                    ::x10aux::nullCheck(space)->FMGL(min0),
                                    ((::x10aux::nullCheck(space)->FMGL(max0)) + (((x10_long)1ll))),
                                    ::x10aux::nullCheck(space)->FMGL(min1),
                                    ((::x10aux::nullCheck(space)->FMGL(max1)) + (((x10_long)1ll))),
                                    grainSize__138448, grainSize__138449,
                                    reduce__138445, reinterpret_cast< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_4<x10_long, x10_long, x10_long, x10_long, TPMGL(T)> >(sizeof(x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T)>)))x10_util_foreach_Bisect__Reducer__closure__17<TPMGL(T)>(identity__138461, reduce__138460, body__138462))));
                    goto __ret__138478_end_;
                }
                
            }goto __ret__138478_end_; __ret__138478_end_: ;
            }
            ret__138477;
            }))
            ;
        }))
        ;
        
    
    //#line 415 "x10/util/foreach/Bisect.x10"
    this->FMGL(result) = (__extension__ ({
        ::x10::lang::Cell<TPMGL(T)>* alloc__138012 =  (new (::x10aux::alloc_z< ::x10::lang::Cell<TPMGL(T)> >()) ::x10::lang::Cell<TPMGL(T)>());
        
        //#line 33 "x10/lang/Cell.x10"
        alloc__138012->FMGL(value) = res;
        alloc__138012;
    }))
    ;
    
    //#line 416 "x10/util/foreach/Bisect.x10"
    return res;
    }
    

//#line 351 "x10/util/foreach/Bisect.x10"
template<class TPMGL(T)> ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>*
  x10::util::foreach::Bisect__Reducer<TPMGL(T)>::x10__util__foreach__Bisect__Reducer____this__x10__util__foreach__Bisect__Reducer(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::util::foreach::Bisect__Reducer<TPMGL(T)>::__fieldInitializers_x10_util_foreach_Bisect_Reducer(
  ) {
    this->FMGL(result) = (::x10aux::class_cast_unchecked< ::x10::lang::Cell<TPMGL(T)>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(result));
    buf.write(this->FMGL(reduce));
    buf.write(this->FMGL(identity));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::util::foreach::Bisect__Reducer<TPMGL(T)> >()) ::x10::util::foreach::Bisect__Reducer<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::util::foreach::Bisect__Reducer<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(result) = buf.read< ::x10::lang::Cell<TPMGL(T)>*>();
    FMGL(reduce) = buf.read< ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), TPMGL(T)>*>();
    FMGL(identity) = buf.read<TPMGL(T)>();
}

#endif // X10_UTIL_FOREACH_BISECT__REDUCER_H_IMPLEMENTATION
#endif // __X10_UTIL_FOREACH_BISECT__REDUCER_H_NODEPS
