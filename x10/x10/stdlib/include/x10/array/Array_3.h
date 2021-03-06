#ifndef __X10_ARRAY_ARRAY_3_H
#define __X10_ARRAY_ARRAY_3_H

#include <x10rt.h>


#define X10_ARRAY_ARRAY_H_NODEPS
#include <x10/array/Array.h>
#undef X10_ARRAY_ARRAY_H_NODEPS
#define X10_LANG_FUN_0_3_H_NODEPS
#include <x10/lang/Fun_0_3.h>
#undef X10_LANG_FUN_0_3_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class IllegalOperationException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_3;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

class Array_3_Strings {
  public:
    static ::x10::lang::String sl__163624;
    static ::x10::lang::String sl__163619;
    static ::x10::lang::String sl__163623;
    static ::x10::lang::String sl__163625;
    static ::x10::lang::String sl__163620;
    static ::x10::lang::String sl__163626;
    static ::x10::lang::String sl__163627;
    static ::x10::lang::String sl__163621;
    static ::x10::lang::String sl__163622;
    static ::x10::lang::String sl__163628;
};

template<class TPMGL(T)> class Array_3;
template <> class Array_3<void>;
template<class TPMGL(T)> class Array_3 : public ::x10::array::Array<TPMGL(T)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(numElems_1);
    
    x10_long FMGL(numElems_2);
    
    x10_long FMGL(numElems_3);
    
    static ::x10aux::itable_entry _itables[5];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::array::Array_3<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::array::Array_3<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::array::Array_3<TPMGL(T)> > _itable_2;
    
    static typename ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::Array_3<TPMGL(T)> > _itable_3;
    
    x10_long rank();
    void _constructor(x10_long m, x10_long n, x10_long p);
    
    static ::x10::array::Array_3<TPMGL(T)>* _make(x10_long m, x10_long n,
                                                  x10_long p);
    
    void _constructor(x10_long m, x10_long n, x10_long p, TPMGL(T) init);
    
    static ::x10::array::Array_3<TPMGL(T)>* _make(x10_long m, x10_long n,
                                                  x10_long p, TPMGL(T) init);
    
    void _constructor(x10_long m, x10_long n, x10_long p, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init);
    
    static ::x10::array::Array_3<TPMGL(T)>* _make(x10_long m, x10_long n,
                                                  x10_long p, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init);
    
    void _constructor(::x10::array::Array_3<TPMGL(T)>* src);
    
    static ::x10::array::Array_3<TPMGL(T)>* _make(::x10::array::Array_3<TPMGL(T)>* src);
    
    void _constructor(::x10::lang::Rail< TPMGL(T) >* r, x10_long m, x10_long n,
                      x10_long p);
    
    static ::x10::array::Array_3<TPMGL(T)>* _make(::x10::lang::Rail< TPMGL(T) >* r,
                                                  x10_long m, x10_long n,
                                                  x10_long p);
    
    virtual ::x10::lang::String* toString();
    virtual ::x10::lang::String* toString(x10_long limit);
    virtual ::x10::array::IterationSpace* indices();
    virtual x10_long offset(x10_long i, x10_long j, x10_long k);
    virtual TPMGL(T) __apply(x10_long i, x10_long j, x10_long k);
    virtual TPMGL(T) __apply(::x10::lang::Point* p);
    virtual TPMGL(T) __set(x10_long i, x10_long j, x10_long k, TPMGL(T) v);
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v);
    virtual ::x10::array::Array_3<TPMGL(T)>* x10__array__Array_3____this__x10__array__Array_3(
      );
    virtual void __fieldInitializers_x10_array_Array_3();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> ::x10aux::RuntimeType x10::array::Array_3<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::array::Array_3<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::Array_3<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::array::Array<TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.Array_3";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class Array_3<void> : public ::x10::array::Array<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static ::x10::array::Array_3<TPMGL(T)>*
      makeView(::x10::lang::Rail< TPMGL(T) >* r, x10_long m,
               x10_long n, x10_long p);
    
    static x10_long validateSize(x10_long m, x10_long n, x10_long p);
    
    
};

} } 
#endif // X10_ARRAY_ARRAY_3_H

namespace x10 { namespace array { 
template<class TPMGL(T)> class Array_3;
} } 

#ifndef X10_ARRAY_ARRAY_3_H_NODEPS
#define X10_ARRAY_ARRAY_3_H_NODEPS
#include <x10/array/Array.h>
#include <x10/lang/Fun_0_3.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/IllegalOperationException.h>
#include <x10/lang/String.h>
#include <x10/util/StringBuilder.h>
#include <x10/lang/Any.h>
#include <x10/lang/Unsafe.h>
#include <x10/array/DenseIterationSpace_3.h>
#include <x10/lang/Point.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_ARRAY_ARRAY_3_H_GENERICS
#define X10_ARRAY_ARRAY_3_H_GENERICS
#endif // X10_ARRAY_ARRAY_3_H_GENERICS
#ifndef X10_ARRAY_ARRAY_3_H_IMPLEMENTATION
#define X10_ARRAY_ARRAY_3_H_IMPLEMENTATION
#include <x10/array/Array_3.h>


//#line 25 "x10/array/Array_3.x10"
/**
         * The number of elements in rank 1 (indexed 0..(numElems_1-1))
         */

//#line 30 "x10/array/Array_3.x10"
/**
         * The number of elements in rank 2 (indexed 0..(numElems_2-1)).
         */

//#line 35 "x10/array/Array_3.x10"
/**
         * The number of elements in rank 3 (indexed 0..(numElems_3-1)).
         */
template<class TPMGL(T)> typename ::x10::lang::Iterable<TPMGL(T)>::template itable< ::x10::array::Array_3<TPMGL(T)> >  x10::array::Array_3<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &::x10::array::Array<TPMGL(T)>::iterator, &x10::array::Array_3<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::array::Array_3<TPMGL(T)> >  x10::array::Array_3<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::Array_3<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::array::Array_3<TPMGL(T)> >  x10::array::Array_3<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::Array_3<TPMGL(T)>::__apply, &x10::array::Array_3<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>::template itable< ::x10::array::Array_3<TPMGL(T)> >  x10::array::Array_3<TPMGL(T)>::_itable_3(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::array::Array_3<TPMGL(T)>::__apply, &x10::array::Array_3<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::array::Array_3<TPMGL(T)>::_itables[5] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable<TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >, &_itable_2), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)> >, &_itable_3), ::x10aux::itable_entry(NULL, (void*)"::x10::array::Array_3<TPMGL(T)>")};

//#line 41 "x10/array/Array_3.x10"
/**
     * @return the rank (dimensionality) of the Array
     */
template<class TPMGL(T)> x10_long x10::array::Array_3<TPMGL(T)>::rank() {
    return ((x10_long)3ll);
    
}

//#line 47 "x10/array/Array_3.x10"
/**
     * Construct a 3-dimensional array with indices [0..m-1][0..n-1][0..p-1] 
     * whose elements are zero-initialized.
     */
template<class TPMGL(T)> void x10::array::Array_3<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p) {
    
    //#line 48 "x10/array/Array_3.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor((__extension__ ({
                                                            
                                                            //#line 214 "x10/array/Array_3.x10"
                                                            if (((((m) < (((x10_long)0ll))) ||
                                                                ((n) < (((x10_long)0ll)))) ||
                                                                ((p) < (((x10_long)0ll)))))
                                                            {
                                                                ::x10::array::Array<void>::raiseNegativeArraySizeException();
                                                            }
                                                            ((((m) * (n))) * (p));
                                                        }))
                                                        ,
                                                        true);
    
    //#line 49 "x10/array/Array_3.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    FMGL(numElems_3) = p;
    
}
template<class TPMGL(T)> ::x10::array::Array_3<TPMGL(T)>* x10::array::Array_3<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p)
{
    ::x10::array::Array_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_3<TPMGL(T)> >()) ::x10::array::Array_3<TPMGL(T)>();
    this_->_constructor(m, n, p);
    return this_;
}



//#line 56 "x10/array/Array_3.x10"
/**
     * Construct a 3-dimensional array with indices [0..m-1][0..n-1][0..p-1] 
     * whose elements are initialized to init.
     */
template<class TPMGL(T)> void x10::array::Array_3<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p,
                           TPMGL(T) init) {
    
    //#line 57 "x10/array/Array_3.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor((__extension__ ({
                                                            
                                                            //#line 214 "x10/array/Array_3.x10"
                                                            if (((((m) < (((x10_long)0ll))) ||
                                                                ((n) < (((x10_long)0ll)))) ||
                                                                ((p) < (((x10_long)0ll)))))
                                                            {
                                                                ::x10::array::Array<void>::raiseNegativeArraySizeException();
                                                            }
                                                            ((((m) * (n))) * (p));
                                                        }))
                                                        ,
                                                        false);
    
    //#line 58 "x10/array/Array_3.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    FMGL(numElems_3) = p;
    
    //#line 59 "x10/array/Array_3.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::fill(
      init);
}
template<class TPMGL(T)> ::x10::array::Array_3<TPMGL(T)>* x10::array::Array_3<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p,
                           TPMGL(T) init) {
    ::x10::array::Array_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_3<TPMGL(T)> >()) ::x10::array::Array_3<TPMGL(T)>();
    this_->_constructor(m, n, p, init);
    return this_;
}



//#line 66 "x10/array/Array_3.x10"
/**
     * Construct a 3-dimensional array with indices [0..m-1][0..n-1][0..p-1] 
     * whose elements are initialized to the value returned by the init closure for each index.
     */
template<class TPMGL(T)> void x10::array::Array_3<TPMGL(T)>::_constructor(
                           x10_long m, x10_long n, x10_long p,
                           ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init) {
    
    //#line 67 "x10/array/Array_3.x10"
    (this)->::x10::array::Array<TPMGL(T)>::_constructor((__extension__ ({
                                                            
                                                            //#line 214 "x10/array/Array_3.x10"
                                                            if (((((m) < (((x10_long)0ll))) ||
                                                                ((n) < (((x10_long)0ll)))) ||
                                                                ((p) < (((x10_long)0ll)))))
                                                            {
                                                                ::x10::array::Array<void>::raiseNegativeArraySizeException();
                                                            }
                                                            ((((m) * (n))) * (p));
                                                        }))
                                                        ,
                                                        false);
    
    //#line 68 "x10/array/Array_3.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    FMGL(numElems_3) = p;
    
    //#line 69 "x10/array/Array_3.x10"
    x10_long i__94310max__94893 = ((m) - (((x10_long)1ll)));
    {
        x10_long i__94894;
        for (i__94894 = ((x10_long)0ll); ((i__94894) <= (i__94310max__94893));
             i__94894 = ((i__94894) + (((x10_long)1ll))))
        {
            
            //#line 70 "x10/array/Array_3.x10"
            x10_long i__94292max__94890 = ((n) - (((x10_long)1ll)));
            {
                x10_long i__94891;
                for (i__94891 = ((x10_long)0ll); ((i__94891) <= (i__94292max__94890));
                     i__94891 = ((i__94891) + (((x10_long)1ll))))
                {
                    
                    //#line 71 "x10/array/Array_3.x10"
                    x10_long i__94274max__94887 = ((p) - (((x10_long)1ll)));
                    {
                        x10_long i__94888;
                        for (i__94888 = ((x10_long)0ll); ((i__94888) <= (i__94274max__94887));
                             i__94888 = ((i__94888) + (((x10_long)1ll))))
                        {
                            
                            //#line 72 "x10/array/Array_3.x10"
                            this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                              (__extension__ ({
                                  ::x10::array::Array_3<TPMGL(T)>* this__94883 =
                                    this;
                                  ((i__94888) + (((::x10aux::nullCheck(this__94883)->FMGL(numElems_3)) * (((i__94891) + (((i__94894) * (::x10aux::nullCheck(this__94883)->FMGL(numElems_2)))))))));
                              }))
                              , ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
                                i__94894, i__94891, i__94888));
                        }
                    }
                    
                }
            }
            
        }
    }
    
}
template<class TPMGL(T)> ::x10::array::Array_3<TPMGL(T)>* x10::array::Array_3<TPMGL(T)>::_make(
                           x10_long m, x10_long n, x10_long p,
                           ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(T)>* init)
{
    ::x10::array::Array_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_3<TPMGL(T)> >()) ::x10::array::Array_3<TPMGL(T)>();
    this_->_constructor(m, n, p, init);
    return this_;
}



//#line 82 "x10/array/Array_3.x10"
/**
     * Construct a new 3-dimensional array by copying all elements of src
     * @param src The source array to copy
     */
template<class TPMGL(T)> void x10::array::Array_3<TPMGL(T)>::_constructor(
                           ::x10::array::Array_3<TPMGL(T)>* src) {
    
    //#line 83 "x10/array/Array_3.x10"
    ::x10::array::Array<TPMGL(T)>* this__94897 = this;
    ::x10::lang::Rail< TPMGL(T) >* r__94898 = ::x10::lang::Rail< TPMGL(T) >::_make(::x10aux::nullCheck(src)->FMGL(raw));
    
    //#line 65 "x10/array/Array.x10"
    ::x10aux::nullCheck(this__94897)->FMGL(size) = (x10_long)(::x10aux::nullCheck(r__94898)->FMGL(size));
    
    //#line 66 "x10/array/Array.x10"
    ::x10aux::nullCheck(this__94897)->FMGL(raw) = r__94898;
    
    //#line 84 "x10/array/Array_3.x10"
    FMGL(numElems_1) = ::x10aux::nullCheck(src)->FMGL(numElems_1);
    FMGL(numElems_2) = ::x10aux::nullCheck(src)->FMGL(numElems_2);
    FMGL(numElems_3) = ::x10aux::nullCheck(src)->FMGL(numElems_3);
    
}
template<class TPMGL(T)> ::x10::array::Array_3<TPMGL(T)>* x10::array::Array_3<TPMGL(T)>::_make(
                           ::x10::array::Array_3<TPMGL(T)>* src)
{
    ::x10::array::Array_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_3<TPMGL(T)> >()) ::x10::array::Array_3<TPMGL(T)>();
    this_->_constructor(src);
    return this_;
}



//#line 88 "x10/array/Array_3.x10"
template<class TPMGL(T)> void x10::array::Array_3<TPMGL(T)>::_constructor(
                           ::x10::lang::Rail< TPMGL(T) >* r,
                           x10_long m, x10_long n, x10_long p) {
    
    //#line 89 "x10/array/Array_3.x10"
    ::x10::array::Array<TPMGL(T)>* this__94900 = this;
    
    //#line 65 "x10/array/Array.x10"
    ::x10aux::nullCheck(this__94900)->FMGL(size) = (x10_long)(::x10aux::nullCheck(r)->FMGL(size));
    
    //#line 66 "x10/array/Array.x10"
    ::x10aux::nullCheck(this__94900)->FMGL(raw) = r;
    
    //#line 90 "x10/array/Array_3.x10"
    FMGL(numElems_1) = m;
    FMGL(numElems_2) = n;
    FMGL(numElems_3) = p;
    
}
template<class TPMGL(T)> ::x10::array::Array_3<TPMGL(T)>* x10::array::Array_3<TPMGL(T)>::_make(
                           ::x10::lang::Rail< TPMGL(T) >* r,
                           x10_long m, x10_long n, x10_long p)
{
    ::x10::array::Array_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_3<TPMGL(T)> >()) ::x10::array::Array_3<TPMGL(T)>();
    this_->_constructor(r, m, n, p);
    return this_;
}



//#line 96 "x10/array/Array_3.x10"
/**
     * Construct an Array_3 view over an existing Rail
     */

//#line 108 "x10/array/Array_3.x10"
/**
     * Return the string representation of this array.
     * 
     * @return the string representation of this array.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::array::Array_3<TPMGL(T)>::toString(
  ) {
    
    //#line 109 "x10/array/Array_3.x10"
    return this->x10::array::template Array_3<TPMGL(T)>::toString(
             ((x10_long)10ll));
    
}

//#line 118 "x10/array/Array_3.x10"
/**
     * Return the string representation of this array.
     *
     * @param limit maximum number of elements to print
     * @return the string representation of this array.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::array::Array_3<TPMGL(T)>::toString(
  x10_long limit) {
    
    //#line 119 "x10/array/Array_3.x10"
    ::x10::util::StringBuilder* sb =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
    (sb)->::x10::util::StringBuilder::_constructor();
    
    //#line 120 "x10/array/Array_3.x10"
    sb->add((&::x10::array::Array_3_Strings::sl__163622));
    
    //#line 121 "x10/array/Array_3.x10"
    x10_long printed = ((x10_long)0ll);
    
    //#line 122 "x10/array/Array_3.x10"
    x10_long i__94364max__94916 = ((this->FMGL(numElems_1)) - (((x10_long)1ll)));
    goto outer__94917; outer__94917: {
        x10_long i__94918;
        for (i__94918 = ((x10_long)0ll); ((i__94918) <= (i__94364max__94916));
             i__94918 = ((i__94918) + (((x10_long)1ll))))
        {
        {
            
            //#line 123 "x10/array/Array_3.x10"
            x10_long i__94346max__94913 = ((this->FMGL(numElems_2)) - (((x10_long)1ll)));
            {
                x10_long i__94914;
                for (i__94914 = ((x10_long)0ll); ((i__94914) <= (i__94346max__94913));
                     i__94914 = ((i__94914) + (((x10_long)1ll))))
                {
                    
                    //#line 124 "x10/array/Array_3.x10"
                    x10_long i__94328max__94910 = ((this->FMGL(numElems_3)) - (((x10_long)1ll)));
                    {
                        x10_long i__94911;
                        for (i__94911 = ((x10_long)0ll); ((i__94911) <= (i__94328max__94910));
                             i__94911 = ((i__94911) + (((x10_long)1ll))))
                        {
                            
                            //#line 125 "x10/array/Array_3.x10"
                            if ((!::x10aux::struct_equals(i__94911,
                                                          ((x10_long)0ll))))
                            {
                                sb->add((&::x10::array::Array_3_Strings::sl__163623));
                            }
                            
                            //#line 126 "x10/array/Array_3.x10"
                            reinterpret_cast< ::x10::util::StringBuilder*>(sb->add(
                                                                             ::x10aux::class_cast_unchecked< ::x10::lang::Any*>((__extension__ ({
                                                                                 ::x10::array::Array_3<TPMGL(T)>* this__94903 =
                                                                                   this;
                                                                                 
                                                                                 //#line 164 "x10/array/Array_3.x10"
                                                                                 if ((true &&
                                                                                     ((((((((i__94918) < (((x10_long)0ll))) ||
                                                                                      ((i__94918) >= (::x10aux::nullCheck(this__94903)->FMGL(numElems_1)))) ||
                                                                                      ((i__94914) < (((x10_long)0ll)))) ||
                                                                                      ((i__94914) >= (::x10aux::nullCheck(this__94903)->FMGL(numElems_2)))) ||
                                                                                      ((i__94911) < (((x10_long)0ll)))) ||
                                                                                      ((i__94911) >= (::x10aux::nullCheck(this__94903)->FMGL(numElems_3)))))))
                                                                                 {
                                                                                     
                                                                                     //#line 167 "x10/array/Array_3.x10"
                                                                                     ::x10::array::Array<void>::raiseBoundsError(
                                                                                       i__94918,
                                                                                       i__94914,
                                                                                       i__94911);
                                                                                 }
                                                                                 (::x10aux::nullCheck(this__94903)->FMGL(raw))->unchecked_apply(((i__94911) + (((::x10aux::nullCheck(this__94903)->FMGL(numElems_3)) * (((i__94914) + (((i__94918) * (::x10aux::nullCheck(this__94903)->FMGL(numElems_2))))))))));
                                                                             }))
                                                                             )));
                            
                            //#line 127 "x10/array/Array_3.x10"
                            if (((printed = ((printed) + (((x10_long)1ll)))) > (limit)))
                            {
                                goto outer__94917_end_;
                            }
                            
                        }
                    }
                    
                    //#line 129 "x10/array/Array_3.x10"
                    sb->add((::x10aux::struct_equals(i__94914,
                                                     ((this->FMGL(numElems_2)) - (((x10_long)1ll)))))
                              ? ((&::x10::array::Array_3_Strings::sl__163624))
                              : ((&::x10::array::Array_3_Strings::sl__163625)));
                }
            }
            
        }
        goto outer__94917_next_; outer__94917_next_: ;
        }
        goto outer__94917_end_; outer__94917_end_: ;
    }
    
    //#line 132 "x10/array/Array_3.x10"
    if (((limit) < (this->FMGL(size)))) {
        
        //#line 133 "x10/array/Array_3.x10"
        sb->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::array::Array_3_Strings::sl__163626), ((this->FMGL(size)) - (limit))), (&::x10::array::Array_3_Strings::sl__163627)));
    }
    
    //#line 135 "x10/array/Array_3.x10"
    sb->add((&::x10::array::Array_3_Strings::sl__163628));
    
    //#line 136 "x10/array/Array_3.x10"
    return sb->toString();
    
}

//#line 142 "x10/array/Array_3.x10"
/**
     * @return an IterationSpace containing all valid Points for indexing this Array.
     */
template<class TPMGL(T)> ::x10::array::IterationSpace* x10::array::Array_3<TPMGL(T)>::indices(
  ) {
    
    //#line 143 "x10/array/Array_3.x10"
    ::x10::array::DenseIterationSpace_3* alloc__94920 =  (new (::x10aux::alloc_z< ::x10::array::DenseIterationSpace_3>()) ::x10::array::DenseIterationSpace_3());
    (alloc__94920)->::x10::array::DenseIterationSpace_3::_constructor(
      ((x10_long)0ll), ((x10_long)0ll), ((x10_long)0ll), ((this->FMGL(numElems_1)) - (((x10_long)1ll))),
      ((this->FMGL(numElems_2)) - (((x10_long)1ll))), ((this->FMGL(numElems_3)) - (((x10_long)1ll))));
    return reinterpret_cast< ::x10::array::IterationSpace*>(alloc__94920);
    
}

//#line 150 "x10/array/Array_3.x10"
/**
     * Map a 3-D (i,j,k) index into a 1-D index into the backing Rail
     * returned by raw(). Uses row-major ordering.
     */
template<class TPMGL(T)> x10_long x10::array::Array_3<TPMGL(T)>::offset(
  x10_long i, x10_long j, x10_long k) {
    
    //#line 151 "x10/array/Array_3.x10"
    return ((k) + (((this->FMGL(numElems_3)) * (((j) + (((i) * (this->FMGL(numElems_2)))))))));
    
}

//#line 163 "x10/array/Array_3.x10"
/**
     * Return the element of this array corresponding to the given triple of indices.
     * 
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @param k the given index in the third dimension
     * @return the element of this array corresponding to the given triple of indices.
     * @see #set(T, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_3<TPMGL(T)>::__apply(
  x10_long i, x10_long j, x10_long k) {
    
    //#line 164 "x10/array/Array_3.x10"
    if ((true && ((((((((i) < (((x10_long)0ll))) || ((i) >= (this->FMGL(numElems_1)))) ||
                  ((j) < (((x10_long)0ll)))) || ((j) >= (this->FMGL(numElems_2)))) ||
                  ((k) < (((x10_long)0ll)))) || ((k) >= (this->FMGL(numElems_3)))))))
    {
        
        //#line 167 "x10/array/Array_3.x10"
        ::x10::array::Array<void>::raiseBoundsError(i, j,
                                                    k);
    }
    
    //#line 169 "x10/array/Array_3.x10"
    return (this->FMGL(raw))->unchecked_apply((__extension__ ({
        ::x10::array::Array_3<TPMGL(T)>* this__94854 = this;
        ((k) + (((::x10aux::nullCheck(this__94854)->FMGL(numElems_3)) * (((j) + (((i) * (::x10aux::nullCheck(this__94854)->FMGL(numElems_2)))))))));
    }))
    );
    
}

//#line 179 "x10/array/Array_3.x10"
/**
     * Return the element of this array corresponding to the given Point.
     * 
     * @param p the given Point
     * @return the element of this array corresponding to the given Point.
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_3<TPMGL(T)>::__apply(
  ::x10::lang::Point* p) {
    ::x10::array::Array_3<TPMGL(T)>* this__94921 = this;
    x10_long i__94922 = ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                          ((x10_long)0ll));
    x10_long j__94923 = ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                          ((x10_long)1ll));
    x10_long k__94924 = ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                          ((x10_long)2ll));
    
    //#line 164 "x10/array/Array_3.x10"
    if ((true && ((((((((i__94922) < (((x10_long)0ll))) ||
                  ((i__94922) >= (::x10aux::nullCheck(this__94921)->FMGL(numElems_1)))) ||
                  ((j__94923) < (((x10_long)0ll)))) || ((j__94923) >= (::x10aux::nullCheck(this__94921)->FMGL(numElems_2)))) ||
                  ((k__94924) < (((x10_long)0ll)))) || ((k__94924) >= (::x10aux::nullCheck(this__94921)->FMGL(numElems_3)))))))
    {
        
        //#line 167 "x10/array/Array_3.x10"
        ::x10::array::Array<void>::raiseBoundsError(i__94922,
                                                    j__94923,
                                                    k__94924);
    }
    
    //#line 179 "x10/array/Array_3.x10"
    return (::x10aux::nullCheck(this__94921)->FMGL(raw))->unchecked_apply(((k__94924) + (((::x10aux::nullCheck(this__94921)->FMGL(numElems_3)) * (((j__94923) + (((i__94922) * (::x10aux::nullCheck(this__94921)->FMGL(numElems_2))))))))));
    
}

//#line 192 "x10/array/Array_3.x10"
/**
     * Set the element of this array corresponding to the given triple of indices to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param i the given index in the first dimension
     * @param j the given index in the second dimension
     * @param k the given index in the third dimension
     * @return the new value of the element of this array corresponding to the given triple of indices.
     * @see #operator(Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_3<TPMGL(T)>::__set(
  x10_long i, x10_long j, x10_long k, TPMGL(T) v) {
    
    //#line 193 "x10/array/Array_3.x10"
    if ((true && ((((((((i) < (((x10_long)0ll))) || ((i) >= (this->FMGL(numElems_1)))) ||
                  ((j) < (((x10_long)0ll)))) || ((j) >= (this->FMGL(numElems_2)))) ||
                  ((k) < (((x10_long)0ll)))) || ((k) >= (this->FMGL(numElems_3)))))))
    {
        
        //#line 196 "x10/array/Array_3.x10"
        ::x10::array::Array<void>::raiseBoundsError(i, j,
                                                    k);
    }
    
    //#line 198 "x10/array/Array_3.x10"
    return (this->FMGL(raw))->unchecked_set((__extension__ ({
        ::x10::array::Array_3<TPMGL(T)>* this__94868 = this;
        ((k) + (((::x10aux::nullCheck(this__94868)->FMGL(numElems_3)) * (((j) + (((i) * (::x10aux::nullCheck(this__94868)->FMGL(numElems_2)))))))));
    }))
    , v);
    
}

//#line 210 "x10/array/Array_3.x10"
/**
     * Set the element of this array corresponding to the given Point to the given value.
     * Return the new value of the element.
     * 
     * @param v the given value
     * @param p the given Point
     * @return the new value of the element of this array corresponding to the given Point.
     * @see #operator(Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::array::Array_3<TPMGL(T)>::__set(
  ::x10::lang::Point* p, TPMGL(T) v) {
    ::x10::array::Array_3<TPMGL(T)>* this__94928 = this;
    x10_long i__94929 = ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                          ((x10_long)0ll));
    x10_long j__94930 = ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                          ((x10_long)1ll));
    x10_long k__94931 = ::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                          ((x10_long)2ll));
    
    //#line 193 "x10/array/Array_3.x10"
    if ((true && ((((((((i__94929) < (((x10_long)0ll))) ||
                  ((i__94929) >= (::x10aux::nullCheck(this__94928)->FMGL(numElems_1)))) ||
                  ((j__94930) < (((x10_long)0ll)))) || ((j__94930) >= (::x10aux::nullCheck(this__94928)->FMGL(numElems_2)))) ||
                  ((k__94931) < (((x10_long)0ll)))) || ((k__94931) >= (::x10aux::nullCheck(this__94928)->FMGL(numElems_3)))))))
    {
        
        //#line 196 "x10/array/Array_3.x10"
        ::x10::array::Array<void>::raiseBoundsError(i__94929,
                                                    j__94930,
                                                    k__94931);
    }
    
    //#line 210 "x10/array/Array_3.x10"
    return (::x10aux::nullCheck(this__94928)->FMGL(raw))->unchecked_set(((k__94931) + (((::x10aux::nullCheck(this__94928)->FMGL(numElems_3)) * (((j__94930) + (((i__94929) * (::x10aux::nullCheck(this__94928)->FMGL(numElems_2))))))))), v);
    
}

//#line 213 "x10/array/Array_3.x10"

//#line 21 "x10/array/Array_3.x10"
template<class TPMGL(T)> ::x10::array::Array_3<TPMGL(T)>*
  x10::array::Array_3<TPMGL(T)>::x10__array__Array_3____this__x10__array__Array_3(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::array::Array_3<TPMGL(T)>::__fieldInitializers_x10_array_Array_3(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::array::Array_3<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::Array_3<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::array::Array_3<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::array::Array<TPMGL(T)>::_serialize_body(buf);
    buf.write(this->FMGL(numElems_1));
    buf.write(this->FMGL(numElems_2));
    buf.write(this->FMGL(numElems_3));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::array::Array_3<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::Array_3<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::array::Array_3<TPMGL(T)> >()) ::x10::array::Array_3<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::array::Array_3<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::array::Array<TPMGL(T)>::_deserialize_body(buf);
    FMGL(numElems_1) = buf.read<x10_long>();
    FMGL(numElems_2) = buf.read<x10_long>();
    FMGL(numElems_3) = buf.read<x10_long>();
}

template<class TPMGL(T)> ::x10::array::Array_3<TPMGL(T)>*
  x10::array::Array_3<void>::makeView(::x10::lang::Rail< TPMGL(T) >* r,
                                      x10_long m, x10_long n,
                                      x10_long p) {
    
    //#line 97 "x10/array/Array_3.x10"
    x10_long size = ((((n) * (m))) * (p));
    
    //#line 98 "x10/array/Array_3.x10"
    if ((!::x10aux::struct_equals(size, (x10_long)(::x10aux::nullCheck(r)->FMGL(size)))))
    {
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalOperationException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::array::Array_3_Strings::sl__163619), m), (&::x10::array::Array_3_Strings::sl__163620)), n), (&::x10::array::Array_3_Strings::sl__163620)), p), (&::x10::array::Array_3_Strings::sl__163621)), (x10_long)(::x10aux::nullCheck(r)->FMGL(size))))));
    }
    
    //#line 99 "x10/array/Array_3.x10"
    ::x10::array::Array_3<TPMGL(T)>* alloc__94902 =  (new (::x10aux::alloc_z< ::x10::array::Array_3<TPMGL(T)> >()) ::x10::array::Array_3<TPMGL(T)>());
    (alloc__94902)->::x10::array::Array_3<TPMGL(T)>::_constructor(
      r, m, n, p);
    return alloc__94902;
    
}
#endif // X10_ARRAY_ARRAY_3_H_IMPLEMENTATION
#endif // __X10_ARRAY_ARRAY_3_H_NODEPS
