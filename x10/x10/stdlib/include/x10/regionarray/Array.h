#ifndef __X10_REGIONARRAY_ARRAY_H
#define __X10_REGIONARRAY_ARRAY_H

#include <x10rt.h>


#define X10_LANG_FUN_0_1_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#undef X10_LANG_FUN_0_1_H_NODEPS
namespace x10 { namespace lang { 
class Point;
} } 
#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
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
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace regionarray { 
class Array__LayoutHelper;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace x10 { namespace regionarray { 
class RectRegion1D;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class RemoteArray;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRef;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array__Anonymous__14235;
} } 
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array__Anonymous__14520;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class GlobalRail;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class Array_Strings {
  public:
    static ::x10::lang::String sl__165825;
    static ::x10::lang::String sl__165838;
    static ::x10::lang::String sl__165831;
    static ::x10::lang::String sl__165835;
    static ::x10::lang::String sl__165826;
    static ::x10::lang::String sl__165837;
    static ::x10::lang::String sl__165821;
    static ::x10::lang::String sl__165822;
    static ::x10::lang::String sl__165829;
    static ::x10::lang::String sl__165830;
    static ::x10::lang::String sl__165833;
    static ::x10::lang::String sl__165834;
    static ::x10::lang::String sl__165824;
    static ::x10::lang::String sl__165832;
    static ::x10::lang::String sl__165839;
    static ::x10::lang::String sl__165841;
    static ::x10::lang::String sl__165820;
    static ::x10::lang::String sl__165827;
    static ::x10::lang::String sl__165836;
    static ::x10::lang::String sl__165823;
    static ::x10::lang::String sl__165840;
    static ::x10::lang::String sl__165828;
};

template<class TPMGL(T)> class Array;
template <> class Array<void>;
template<class TPMGL(T)> class Array : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::regionarray::Region* FMGL(region);
    
    x10_long FMGL(rank);
    
    x10_boolean FMGL(rect);
    
    x10_boolean FMGL(zeroBased);
    
    x10_boolean FMGL(rail);
    
    x10_long FMGL(size);
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::regionarray::Array<TPMGL(T)> > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::Array<TPMGL(T)> > _itable_1;
    
    static typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::regionarray::Array<TPMGL(T)> > _itable_2;
    
    ::x10::lang::Rail< TPMGL(T) >* FMGL(raw);
    
    virtual ::x10::lang::Rail< TPMGL(T) >* raw();
    void _constructor(::x10::regionarray::Region* reg);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Region* reg);
    
    void _constructor(x10_boolean zeroed, ::x10::regionarray::Region* reg);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_boolean zeroed,
                                                      ::x10::regionarray::Region* reg);
    
    void _constructor(::x10::regionarray::Region* reg, ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Region* reg,
                                                      ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init);
    
    void _constructor(::x10::regionarray::Region* reg, TPMGL(T) init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Region* reg,
                                                      TPMGL(T) init);
    
    void _constructor(::x10::regionarray::Region* reg, ::x10::lang::Rail< TPMGL(T) >* backingStore);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Region* reg,
                                                      ::x10::lang::Rail< TPMGL(T) >* backingStore);
    
    void _constructor(::x10::lang::Rail< TPMGL(T) >* backingStore);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::lang::Rail< TPMGL(T) >* backingStore);
    
    void _constructor(x10_long size);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_long size);
    
    void _constructor(x10_boolean zeroed, x10_long size);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_boolean zeroed,
                                                      x10_long size);
    
    void _constructor(x10_long size, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_long size,
                                                      ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init);
    
    void _constructor(x10_long size, TPMGL(T) init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(x10_long size,
                                                      TPMGL(T) init);
    
    void _constructor(::x10::regionarray::Array<TPMGL(T)>* init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::Array<TPMGL(T)>* init);
    
    void _constructor(::x10::regionarray::RemoteArray<TPMGL(T)>* init);
    
    static ::x10::regionarray::Array<TPMGL(T)>* _make(::x10::regionarray::RemoteArray<TPMGL(T)>* init);
    
    virtual ::x10::lang::String* toString();
    virtual ::x10::lang::Iterator< ::x10::lang::Point*>* iterator(
      );
    virtual ::x10::lang::Iterable<TPMGL(T)>* values();
    virtual TPMGL(T) __apply(x10_long i0);
    virtual TPMGL(T) __apply(x10_long i0, x10_long i1);
    virtual TPMGL(T) __apply(x10_long i0, x10_long i1, x10_long i2);
    virtual TPMGL(T) __apply(x10_long i0, x10_long i1, x10_long i2,
                             x10_long i3);
    virtual TPMGL(T) __apply(::x10::lang::Point* pt);
    virtual TPMGL(T) __set(x10_long i0, TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, x10_long i1, TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, x10_long i1, x10_long i2,
                           TPMGL(T) v);
    virtual TPMGL(T) __set(x10_long i0, x10_long i1, x10_long i2,
                           x10_long i3, TPMGL(T) v);
    virtual TPMGL(T) __set(::x10::lang::Point* p, TPMGL(T) v);
    virtual void fill(TPMGL(T) v);
    virtual void clear();
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      map(::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      map(::x10::regionarray::Array<TPMGL(U)>* dst, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      map(::x10::regionarray::Array<TPMGL(U)>* dst, ::x10::regionarray::Region* filter,
          ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::regionarray::Array<TPMGL(S)>*
      map(::x10::regionarray::Array<TPMGL(U)>* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::regionarray::Array<TPMGL(S)>*
      map(::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
          ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op);
    template<class TPMGL(S), class TPMGL(U)> ::x10::regionarray::Array<TPMGL(S)>*
      map(::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
          ::x10::regionarray::Region* filter, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op);
    template<class TPMGL(U)> TPMGL(U) reduce(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                             TPMGL(U) unit);
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      scan(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
           TPMGL(U) unit);
    template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
      scan(::x10::regionarray::Array<TPMGL(U)>* dst, ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
           TPMGL(U) unit);
    virtual void copy(::x10::regionarray::Array<TPMGL(T)>* src,
                      ::x10::regionarray::Region* r);
    void copy3(::x10::regionarray::Array<TPMGL(T)>* src, ::x10::regionarray::Region* r);
    x10_long FMGL(layout_min0);
    
    x10_long FMGL(layout_stride1);
    
    x10_long FMGL(layout_min1);
    
    ::x10::lang::Rail< x10_long >* FMGL(layout);
    
    x10_long offset(x10_long i0);
    x10_long offset(x10_long i0, x10_long i1);
    x10_long offset(x10_long i0, x10_long i1, x10_long i2);
    x10_long offset(x10_long i0, x10_long i1, x10_long i2,
                    x10_long i3);
    x10_long offset(::x10::lang::Point* pt);
    virtual ::x10::regionarray::Array<TPMGL(T)>* x10__regionarray__Array____this__x10__regionarray__Array(
      );
    virtual void __fieldInitializers_x10_regionarray_Array(
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

template<class TPMGL(T)> ::x10aux::RuntimeType x10::regionarray::Array<TPMGL(T)>::rtt;
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::regionarray::Array<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[2] = { ::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >(), ::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(T)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.regionarray.Array";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 2, parents, 1, params, variances);
}

template <> class Array<void> : public ::x10::lang::X10Class
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                   ::x10::regionarray::RemoteArray<TPMGL(T)>* dst);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                   ::x10::lang::Point* srcPoint,
                                                   ::x10::regionarray::RemoteArray<TPMGL(T)>* dst,
                                                   ::x10::lang::Point* dstPoint,
                                                   x10_long numElems);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                   x10_long srcIndex,
                                                   ::x10::regionarray::RemoteArray<TPMGL(T)>* dst,
                                                   x10_long dstIndex,
                                                   x10_long numElems);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                   ::x10::regionarray::Array<TPMGL(T)>* dst);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                   ::x10::lang::Point* srcPoint,
                                                   ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                   ::x10::lang::Point* dstPoint,
                                                   x10_long numElems);
    
    template<class TPMGL(T)> static void asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                   x10_long srcIndex,
                                                   ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                   x10_long dstIndex,
                                                   x10_long numElems);
    
    template<class TPMGL(T)> static void copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                              ::x10::regionarray::Array<TPMGL(T)>* dst);
    
    template<class TPMGL(T)> static void copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                              ::x10::lang::Point* srcPoint,
                                              ::x10::regionarray::Array<TPMGL(T)>* dst,
                                              ::x10::lang::Point* dstPoint,
                                              x10_long numElems);
    
    template<class TPMGL(T)> static void copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                              x10_long srcIndex,
                                              ::x10::regionarray::Array<TPMGL(T)>* dst,
                                              x10_long dstIndex,
                                              x10_long numElems);
    
    static void raiseBoundsError(x10_long i0) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i0, x10_long i1) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i0, x10_long i1,
                                 x10_long i2) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(x10_long i0, x10_long i1,
                                 x10_long i2, x10_long i3) X10_PRAGMA_NORETURN ;
    
    static void raiseBoundsError(::x10::lang::Point* pt) X10_PRAGMA_NORETURN ;
    
    
};

} } 
#endif // X10_REGIONARRAY_ARRAY_H

namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class Array;
} } 

#ifndef X10_REGIONARRAY_ARRAY_H_NODEPS
#define X10_REGIONARRAY_ARRAY_H_NODEPS
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Point.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/regionarray/Region.h>
#include <x10/lang/Rail.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/regionarray/Array__LayoutHelper.h>
#include <x10/lang/Unsafe.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/regionarray/RectRegion1D.h>
#include <x10/regionarray/RemoteArray.h>
#include <x10/lang/GlobalRef.h>
#include <x10/lang/String.h>
#include <x10/util/StringBuilder.h>
#include <x10/regionarray/Array__Anonymous__14235.h>
#include <x10/regionarray/Array__Anonymous__14520.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Fun_0_2.h>
#include <x10/lang/GlobalRail.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/NoInline.h>
#include <x10/compiler/NoReturn.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_REGIONARRAY_ARRAY_H_GENERICS
#define X10_REGIONARRAY_ARRAY_H_GENERICS
#ifndef X10_REGIONARRAY_ARRAY_H_map_1384
#define X10_REGIONARRAY_ARRAY_H_map_1384
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::map(::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 685 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<TPMGL(U)>* alloc__125852 =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(U)> >()) ::x10::regionarray::Array<TPMGL(U)>());
    ::x10::regionarray::Region* reg__125851 = this->FMGL(region);
    
    //#line 174 "x10/regionarray/Array.x10"
    alloc__125852->FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125838 = reg__125851;
        if (!((!::x10aux::struct_equals(t__125838, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165820))));
            }
            
        }
        t__125838;
    }))
    ;
    alloc__125852->FMGL(rank) = ::x10aux::nullCheck(reg__125851)->FMGL(rank);
    alloc__125852->FMGL(rect) = ::x10aux::nullCheck(reg__125851)->FMGL(rect);
    alloc__125852->FMGL(zeroBased) = ::x10aux::nullCheck(reg__125851)->FMGL(zeroBased);
    alloc__125852->FMGL(rail) = ::x10aux::nullCheck(reg__125851)->FMGL(rail);
    alloc__125852->FMGL(size) = ::x10aux::nullCheck(reg__125851)->size();
    
    //#line 175 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__125839 =
       ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__125839)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__125851);
    
    //#line 176 "x10/regionarray/Array.x10"
    alloc__125852->FMGL(layout_min0) = crh__125839->FMGL(min0);
    
    //#line 177 "x10/regionarray/Array.x10"
    alloc__125852->FMGL(layout_stride1) = crh__125839->FMGL(stride1);
    
    //#line 178 "x10/regionarray/Array.x10"
    alloc__125852->FMGL(layout_min1) = crh__125839->FMGL(min1);
    
    //#line 179 "x10/regionarray/Array.x10"
    alloc__125852->FMGL(layout) = crh__125839->FMGL(layout);
    
    //#line 180 "x10/regionarray/Array.x10"
    x10_long n__125840 = crh__125839->FMGL(size);
    
    //#line 181 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(U) >* r__125841 = ::x10::lang::Rail< TPMGL(U) >::_makeUnsafe(n__125840, false);
    
    //#line 182 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__125842;
        for (p__125842 = ::x10aux::nullCheck(reg__125851)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__125842));
             ) {
            ::x10::lang::Point* p__125843 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__125842));
            
            //#line 183 "x10/regionarray/Array.x10"
            r__125841->x10::lang::template Rail< TPMGL(U) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125845 = ((::x10aux::nullCheck(p__125843)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (alloc__125852->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p__125843)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125845 = ((((((offset__125845) * (alloc__125852->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125843)->x10::lang::Point::__apply(
                                                                                                            ((x10_long)1ll))))) - (alloc__125852->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124769max__125832 = ((::x10aux::nullCheck(p__125843)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125833;
                          for (i__125833 = ((x10_long)2ll);
                               ((i__125833) <= (i__124769max__125832));
                               i__125833 = ((i__125833) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125845 = ((((((offset__125845) * (::x10aux::nullCheck(alloc__125852->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125833) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125843)->x10::lang::Point::__apply(
                                                                                                                                             i__125833)))) - (::x10aux::nullCheck(alloc__125852->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125833) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125845;
              }))
              , ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                (__extension__ ({
                    
                    //#line 685 "x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<TPMGL(T)>* this__125847 =
                      this;
                    
                    //#line 524 "x10/regionarray/Array.x10"
                    if ((true && !(::x10aux::nullCheck(this__125847)->FMGL(region)->contains(
                                     p__125843)))) {
                        
                        //#line 525 "x10/regionarray/Array.x10"
                        ::x10::regionarray::Array<void>::raiseBoundsError(
                          p__125843);
                    }
                    ::x10aux::nullCheck(this__125847)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      (__extension__ ({
                          
                          //#line 1315 "x10/regionarray/Array.x10"
                          x10_long offset__125850 = ((::x10aux::nullCheck(p__125843)->x10::lang::Point::__apply(
                                                        ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125847)->FMGL(layout_min0)));
                          
                          //#line 1316 "x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(p__125843)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1317 "x10/regionarray/Array.x10"
                              offset__125850 = ((((((offset__125850) * (::x10aux::nullCheck(this__125847)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125843)->x10::lang::Point::__apply(
                                                                                                                                        ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125847)->FMGL(layout_min1)));
                              
                              //#line 1318 "x10/regionarray/Array.x10"
                              x10_long i__124769max__125835 =
                                ((::x10aux::nullCheck(p__125843)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__125836;
                                  for (i__125836 = ((x10_long)2ll);
                                       ((i__125836) <= (i__124769max__125835));
                                       i__125836 = ((i__125836) + (((x10_long)1ll))))
                                  {
                                      
                                      //#line 1319 "x10/regionarray/Array.x10"
                                      offset__125850 = ((((((offset__125850) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125847)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                  ((((x10_long)2ll)) * (((i__125836) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125843)->x10::lang::Point::__apply(
                                                                                                                                                     i__125836)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125847)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                        ((((((x10_long)2ll)) * (((i__125836) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          offset__125850;
                      }))
                      );
                }))
                ));
        }
    }
    
    //#line 185 "x10/regionarray/Array.x10"
    alloc__125852->FMGL(raw) = r__125841;
    
    //#line 685 "x10/regionarray/Array.x10"
    return alloc__125852;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1384
#ifndef X10_REGIONARRAY_ARRAY_H_map_1385
#define X10_REGIONARRAY_ARRAY_H_map_1385
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::map(::x10::regionarray::Array<TPMGL(U)>* dst,
                                         ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 704 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 708 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< TPMGL(T) >* src__125857 = this->FMGL(raw);
        ::x10::lang::Rail< TPMGL(U) >* dst__125858 = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 180 "x10/util/RailUtils.x10"
        x10_long i__96634max__125854 = (x10_long)(::x10aux::nullCheck(src__125857)->FMGL(size));
        {
            x10_long i__125855;
            for (i__125855 = ((x10_long)0ll); ((i__125855) < (i__96634max__125854));
                 i__125855 = ((i__125855) + (((x10_long)1ll))))
            {
                
                //#line 181 "x10/util/RailUtils.x10"
                ::x10aux::nullCheck(dst__125858)->x10::lang::template Rail< TPMGL(U) >::__set(
                  i__125855, ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                    ::x10aux::nullCheck(src__125857)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      i__125855)));
            }
        }
        
        //#line 709 "x10/regionarray/Array.x10"
        return dst;
        
    } else {
        
        //#line 711 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124622;
            for (p__124622 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124622));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124622));
                
                //#line 712 "x10/regionarray/Array.x10"
                TPMGL(U) v__125867 = ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                  (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__125868 =
                        this;
                      
                      //#line 524 "x10/regionarray/Array.x10"
                      if ((true && !(::x10aux::nullCheck(this__125868)->FMGL(region)->contains(
                                       p)))) {
                          
                          //#line 525 "x10/regionarray/Array.x10"
                          ::x10::regionarray::Array<void>::raiseBoundsError(
                            p);
                      }
                      ::x10aux::nullCheck(this__125868)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                        (__extension__ ({
                            
                            //#line 1315 "x10/regionarray/Array.x10"
                            x10_long offset__125871 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                          ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125868)->FMGL(layout_min0)));
                            
                            //#line 1316 "x10/regionarray/Array.x10"
                            if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                            {
                                
                                //#line 1317 "x10/regionarray/Array.x10"
                                offset__125871 = ((((((offset__125871) * (::x10aux::nullCheck(this__125868)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                          ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125868)->FMGL(layout_min1)));
                                
                                //#line 1318 "x10/regionarray/Array.x10"
                                x10_long i__124769max__125860 =
                                  ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                                {
                                    x10_long i__125861;
                                    for (i__125861 = ((x10_long)2ll);
                                         ((i__125861) <= (i__124769max__125860));
                                         i__125861 = ((i__125861) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 1319 "x10/regionarray/Array.x10"
                                        offset__125871 = ((((((offset__125871) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125868)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                    ((((x10_long)2ll)) * (((i__125861) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                       i__125861)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125868)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                          ((((((x10_long)2ll)) * (((i__125861) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                    }
                                }
                                
                            }
                            offset__125871;
                        }))
                        );
                  }))
                  );
                
                //#line 637 "x10/regionarray/Array.x10"
                if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                                 p)))) {
                    
                    //#line 638 "x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<void>::raiseBoundsError(
                      p);
                }
                
                //#line 640 "x10/regionarray/Array.x10"
                ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__set(
                  (__extension__ ({
                      
                      //#line 1315 "x10/regionarray/Array.x10"
                      x10_long offset__125873 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                    ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                      
                      //#line 1316 "x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1317 "x10/regionarray/Array.x10"
                          offset__125873 = ((((((offset__125873) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                           ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                          
                          //#line 1318 "x10/regionarray/Array.x10"
                          x10_long i__124769max__125863 =
                            ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__125864;
                              for (i__125864 = ((x10_long)2ll);
                                   ((i__125864) <= (i__124769max__125863));
                                   i__125864 = ((i__125864) + (((x10_long)1ll))))
                              {
                                  
                                  //#line 1319 "x10/regionarray/Array.x10"
                                  offset__125873 = ((((((offset__125873) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((((x10_long)2ll)) * (((i__125864) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                 i__125864)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__125864) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      offset__125873;
                  }))
                  , v__125867);
            }
        }
        
    }
    
    //#line 715 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1385
#ifndef X10_REGIONARRAY_ARRAY_H_map_1386
#define X10_REGIONARRAY_ARRAY_H_map_1386
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::map(::x10::regionarray::Array<TPMGL(U)>* dst,
                                         ::x10::regionarray::Region* filter,
                                         ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>* op) {
    
    //#line 734 "x10/regionarray/Array.x10"
    ::x10::regionarray::Region* fregion = this->FMGL(region)->__and(
                                            filter);
    
    //#line 735 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__124624;
        for (p__124624 = ::x10aux::nullCheck(fregion)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124624));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124624));
            
            //#line 736 "x10/regionarray/Array.x10"
            TPMGL(U) v__125881 = ::x10::lang::Fun_0_1<TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              (__extension__ ({
                  ::x10::regionarray::Array<TPMGL(T)>* this__125882 =
                    this;
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(this__125882)->FMGL(region)->contains(
                                   p)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p);
                  }
                  ::x10aux::nullCheck(this__125882)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125885 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125882)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125885 = ((((((offset__125885) * (::x10aux::nullCheck(this__125882)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125882)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124769max__125874 =
                              ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__125875;
                                for (i__125875 = ((x10_long)2ll);
                                     ((i__125875) <= (i__124769max__125874));
                                     i__125875 = ((i__125875) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125885 = ((((((offset__125885) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125882)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__125875) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                   i__125875)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125882)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__125875) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125885;
                    }))
                    );
              }))
              );
            
            //#line 637 "x10/regionarray/Array.x10"
            if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                             p)))) {
                
                //#line 638 "x10/regionarray/Array.x10"
                ::x10::regionarray::Array<void>::raiseBoundsError(
                  p);
            }
            
            //#line 640 "x10/regionarray/Array.x10"
            ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125887 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125887 = ((((((offset__125887) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                       ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124769max__125877 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125878;
                          for (i__125878 = ((x10_long)2ll);
                               ((i__125878) <= (i__124769max__125877));
                               i__125878 = ((i__125878) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125887 = ((((((offset__125887) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125878) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                             i__125878)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125878) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125887;
              }))
              , v__125881);
        }
    }
    
    //#line 738 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1386
#ifndef X10_REGIONARRAY_ARRAY_H_map_1387
#define X10_REGIONARRAY_ARRAY_H_map_1387
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::Array<TPMGL(S)>* x10::regionarray::Array<TPMGL(T)>::map(
  ::x10::regionarray::Array<TPMGL(U)>* src, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 755 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<TPMGL(S)>* alloc__125914 = 
    (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(S)> >()) ::x10::regionarray::Array<TPMGL(S)>());
    ::x10::regionarray::Region* reg__125913 = this->FMGL(region);
    
    //#line 174 "x10/regionarray/Array.x10"
    alloc__125914->FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125897 = reg__125913;
        if (!((!::x10aux::struct_equals(t__125897, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            if (true) {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165820))));
            }
            
        }
        t__125897;
    }))
    ;
    alloc__125914->FMGL(rank) = ::x10aux::nullCheck(reg__125913)->FMGL(rank);
    alloc__125914->FMGL(rect) = ::x10aux::nullCheck(reg__125913)->FMGL(rect);
    alloc__125914->FMGL(zeroBased) = ::x10aux::nullCheck(reg__125913)->FMGL(zeroBased);
    alloc__125914->FMGL(rail) = ::x10aux::nullCheck(reg__125913)->FMGL(rail);
    alloc__125914->FMGL(size) = ::x10aux::nullCheck(reg__125913)->size();
    
    //#line 175 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh__125898 =
       ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh__125898)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg__125913);
    
    //#line 176 "x10/regionarray/Array.x10"
    alloc__125914->FMGL(layout_min0) = crh__125898->FMGL(min0);
    
    //#line 177 "x10/regionarray/Array.x10"
    alloc__125914->FMGL(layout_stride1) = crh__125898->FMGL(stride1);
    
    //#line 178 "x10/regionarray/Array.x10"
    alloc__125914->FMGL(layout_min1) = crh__125898->FMGL(min1);
    
    //#line 179 "x10/regionarray/Array.x10"
    alloc__125914->FMGL(layout) = crh__125898->FMGL(layout);
    
    //#line 180 "x10/regionarray/Array.x10"
    x10_long n__125899 = crh__125898->FMGL(size);
    
    //#line 181 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(S) >* r__125900 = ::x10::lang::Rail< TPMGL(S) >::_makeUnsafe(n__125899, false);
    
    //#line 182 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__125901;
        for (p__125901 = ::x10aux::nullCheck(reg__125913)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__125901));
             ) {
            ::x10::lang::Point* p__125902 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__125901));
            
            //#line 183 "x10/regionarray/Array.x10"
            r__125900->x10::lang::template Rail< TPMGL(S) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125904 = ((::x10aux::nullCheck(p__125902)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (alloc__125914->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p__125902)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125904 = ((((((offset__125904) * (alloc__125914->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125902)->x10::lang::Point::__apply(
                                                                                                            ((x10_long)1ll))))) - (alloc__125914->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124769max__125888 = ((::x10aux::nullCheck(p__125902)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125889;
                          for (i__125889 = ((x10_long)2ll);
                               ((i__125889) <= (i__124769max__125888));
                               i__125889 = ((i__125889) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125904 = ((((((offset__125904) * (::x10aux::nullCheck(alloc__125914->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125889) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125902)->x10::lang::Point::__apply(
                                                                                                                                             i__125889)))) - (::x10aux::nullCheck(alloc__125914->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125889) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125904;
              }))
              , ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                (__extension__ ({
                    
                    //#line 755 "x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<TPMGL(T)>* this__125906 =
                      this;
                    
                    //#line 524 "x10/regionarray/Array.x10"
                    if ((true && !(::x10aux::nullCheck(this__125906)->FMGL(region)->contains(
                                     p__125902)))) {
                        
                        //#line 525 "x10/regionarray/Array.x10"
                        ::x10::regionarray::Array<void>::raiseBoundsError(
                          p__125902);
                    }
                    ::x10aux::nullCheck(this__125906)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      (__extension__ ({
                          
                          //#line 1315 "x10/regionarray/Array.x10"
                          x10_long offset__125909 = ((::x10aux::nullCheck(p__125902)->x10::lang::Point::__apply(
                                                        ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125906)->FMGL(layout_min0)));
                          
                          //#line 1316 "x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(p__125902)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1317 "x10/regionarray/Array.x10"
                              offset__125909 = ((((((offset__125909) * (::x10aux::nullCheck(this__125906)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125902)->x10::lang::Point::__apply(
                                                                                                                                        ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125906)->FMGL(layout_min1)));
                              
                              //#line 1318 "x10/regionarray/Array.x10"
                              x10_long i__124769max__125891 =
                                ((::x10aux::nullCheck(p__125902)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__125892;
                                  for (i__125892 = ((x10_long)2ll);
                                       ((i__125892) <= (i__124769max__125891));
                                       i__125892 = ((i__125892) + (((x10_long)1ll))))
                                  {
                                      
                                      //#line 1319 "x10/regionarray/Array.x10"
                                      offset__125909 = ((((((offset__125909) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125906)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                  ((((x10_long)2ll)) * (((i__125892) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125902)->x10::lang::Point::__apply(
                                                                                                                                                     i__125892)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125906)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                        ((((((x10_long)2ll)) * (((i__125892) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          offset__125909;
                      }))
                      );
                }))
                , (__extension__ ({
                    
                    //#line 524 "x10/regionarray/Array.x10"
                    if ((true && !(::x10aux::nullCheck(src)->FMGL(region)->contains(
                                     p__125902)))) {
                        
                        //#line 525 "x10/regionarray/Array.x10"
                        ::x10::regionarray::Array<void>::raiseBoundsError(
                          p__125902);
                    }
                    ::x10aux::nullCheck(src)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__apply(
                      (__extension__ ({
                          
                          //#line 1315 "x10/regionarray/Array.x10"
                          x10_long offset__125912 = ((::x10aux::nullCheck(p__125902)->x10::lang::Point::__apply(
                                                        ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(src)->FMGL(layout_min0)));
                          
                          //#line 1316 "x10/regionarray/Array.x10"
                          if (((::x10aux::nullCheck(p__125902)->FMGL(rank)) > (((x10_long)1ll))))
                          {
                              
                              //#line 1317 "x10/regionarray/Array.x10"
                              offset__125912 = ((((((offset__125912) * (::x10aux::nullCheck(src)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125902)->x10::lang::Point::__apply(
                                                                                                                               ((x10_long)1ll))))) - (::x10aux::nullCheck(src)->FMGL(layout_min1)));
                              
                              //#line 1318 "x10/regionarray/Array.x10"
                              x10_long i__124769max__125894 =
                                ((::x10aux::nullCheck(p__125902)->FMGL(rank)) - (((x10_long)1ll)));
                              {
                                  x10_long i__125895;
                                  for (i__125895 = ((x10_long)2ll);
                                       ((i__125895) <= (i__124769max__125894));
                                       i__125895 = ((i__125895) + (((x10_long)1ll))))
                                  {
                                      
                                      //#line 1319 "x10/regionarray/Array.x10"
                                      offset__125912 = ((((((offset__125912) * (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                  ((((x10_long)2ll)) * (((i__125895) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125902)->x10::lang::Point::__apply(
                                                                                                                                                     i__125895)))) - (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                        ((((((x10_long)2ll)) * (((i__125895) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                  }
                              }
                              
                          }
                          offset__125912;
                      }))
                      );
                }))
                ));
        }
    }
    
    //#line 185 "x10/regionarray/Array.x10"
    alloc__125914->FMGL(raw) = r__125900;
    
    //#line 755 "x10/regionarray/Array.x10"
    return alloc__125914;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1387
#ifndef X10_REGIONARRAY_ARRAY_H_map_1388
#define X10_REGIONARRAY_ARRAY_H_map_1388
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::Array<TPMGL(S)>* x10::regionarray::Array<TPMGL(T)>::map(
  ::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
  ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 774 "x10/regionarray/Array.x10"
    if ((this->FMGL(rect) && (::x10aux::struct_equals(this->FMGL(size),
                                                      ::x10aux::nullCheck(src)->FMGL(size)))))
    {
        
        //#line 778 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< TPMGL(T) >* src__125919 = this->FMGL(raw);
        ::x10::lang::Rail< TPMGL(U) >* src__125920 = (__extension__ ({
            ::x10::lang::Rail< TPMGL(U) >* t__125921 = ::x10aux::nullCheck(src)->FMGL(raw);
            if (!((::x10aux::struct_equals((x10_long)(::x10aux::nullCheck(t__125921)->FMGL(size)),
                                           (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(this)->FMGL(raw))->FMGL(size))))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165831))));
            }
            t__125921;
        }))
        ;
        ::x10::lang::Rail< TPMGL(S) >* dst__125922 = ::x10aux::nullCheck(dst)->FMGL(raw);
        
        //#line 203 "x10/util/RailUtils.x10"
        x10_long i__96653max__125916 = (x10_long)(::x10aux::nullCheck(src__125919)->FMGL(size));
        {
            x10_long i__125917;
            for (i__125917 = ((x10_long)0ll); ((i__125917) < (i__96653max__125916));
                 i__125917 = ((i__125917) + (((x10_long)1ll))))
            {
                
                //#line 204 "x10/util/RailUtils.x10"
                ::x10aux::nullCheck(dst__125922)->x10::lang::template Rail< TPMGL(S) >::__set(
                  i__125917, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                    ::x10aux::nullCheck(src__125919)->x10::lang::template Rail< TPMGL(T) >::__apply(
                      i__125917), ::x10aux::nullCheck(src__125920)->x10::lang::template Rail< TPMGL(U) >::__apply(
                                    i__125917)));
            }
        }
        
        //#line 779 "x10/regionarray/Array.x10"
        return dst;
        
    } else {
        
        //#line 781 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124626;
            for (p__124626 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124626));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124626));
                
                //#line 782 "x10/regionarray/Array.x10"
                TPMGL(S) v__125934 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
                  (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__125935 =
                        this;
                      
                      //#line 524 "x10/regionarray/Array.x10"
                      if ((true && !(::x10aux::nullCheck(this__125935)->FMGL(region)->contains(
                                       p)))) {
                          
                          //#line 525 "x10/regionarray/Array.x10"
                          ::x10::regionarray::Array<void>::raiseBoundsError(
                            p);
                      }
                      ::x10aux::nullCheck(this__125935)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                        (__extension__ ({
                            
                            //#line 1315 "x10/regionarray/Array.x10"
                            x10_long offset__125938 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                          ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125935)->FMGL(layout_min0)));
                            
                            //#line 1316 "x10/regionarray/Array.x10"
                            if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                            {
                                
                                //#line 1317 "x10/regionarray/Array.x10"
                                offset__125938 = ((((((offset__125938) * (::x10aux::nullCheck(this__125935)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                          ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125935)->FMGL(layout_min1)));
                                
                                //#line 1318 "x10/regionarray/Array.x10"
                                x10_long i__124769max__125924 =
                                  ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                                {
                                    x10_long i__125925;
                                    for (i__125925 = ((x10_long)2ll);
                                         ((i__125925) <= (i__124769max__125924));
                                         i__125925 = ((i__125925) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 1319 "x10/regionarray/Array.x10"
                                        offset__125938 = ((((((offset__125938) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125935)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                    ((((x10_long)2ll)) * (((i__125925) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                       i__125925)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125935)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                          ((((((x10_long)2ll)) * (((i__125925) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                    }
                                }
                                
                            }
                            offset__125938;
                        }))
                        );
                  }))
                  , (__extension__ ({
                      
                      //#line 524 "x10/regionarray/Array.x10"
                      if ((true && !(::x10aux::nullCheck(src)->FMGL(region)->contains(
                                       p)))) {
                          
                          //#line 525 "x10/regionarray/Array.x10"
                          ::x10::regionarray::Array<void>::raiseBoundsError(
                            p);
                      }
                      ::x10aux::nullCheck(src)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__apply(
                        (__extension__ ({
                            
                            //#line 1315 "x10/regionarray/Array.x10"
                            x10_long offset__125941 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                          ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(src)->FMGL(layout_min0)));
                            
                            //#line 1316 "x10/regionarray/Array.x10"
                            if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                            {
                                
                                //#line 1317 "x10/regionarray/Array.x10"
                                offset__125941 = ((((((offset__125941) * (::x10aux::nullCheck(src)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                 ((x10_long)1ll))))) - (::x10aux::nullCheck(src)->FMGL(layout_min1)));
                                
                                //#line 1318 "x10/regionarray/Array.x10"
                                x10_long i__124769max__125927 =
                                  ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                                {
                                    x10_long i__125928;
                                    for (i__125928 = ((x10_long)2ll);
                                         ((i__125928) <= (i__124769max__125927));
                                         i__125928 = ((i__125928) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 1319 "x10/regionarray/Array.x10"
                                        offset__125941 = ((((((offset__125941) * (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                    ((((x10_long)2ll)) * (((i__125928) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                       i__125928)))) - (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                          ((((((x10_long)2ll)) * (((i__125928) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                    }
                                }
                                
                            }
                            offset__125941;
                        }))
                        );
                  }))
                  );
                
                //#line 637 "x10/regionarray/Array.x10"
                if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                                 p)))) {
                    
                    //#line 638 "x10/regionarray/Array.x10"
                    ::x10::regionarray::Array<void>::raiseBoundsError(
                      p);
                }
                
                //#line 640 "x10/regionarray/Array.x10"
                ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(S) >::__set(
                  (__extension__ ({
                      
                      //#line 1315 "x10/regionarray/Array.x10"
                      x10_long offset__125943 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                    ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                      
                      //#line 1316 "x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1317 "x10/regionarray/Array.x10"
                          offset__125943 = ((((((offset__125943) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                           ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                          
                          //#line 1318 "x10/regionarray/Array.x10"
                          x10_long i__124769max__125930 =
                            ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__125931;
                              for (i__125931 = ((x10_long)2ll);
                                   ((i__125931) <= (i__124769max__125930));
                                   i__125931 = ((i__125931) + (((x10_long)1ll))))
                              {
                                  
                                  //#line 1319 "x10/regionarray/Array.x10"
                                  offset__125943 = ((((((offset__125943) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((((x10_long)2ll)) * (((i__125931) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                 i__125931)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__125931) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      offset__125943;
                  }))
                  , v__125934);
            }
        }
        
    }
    
    //#line 785 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1388
#ifndef X10_REGIONARRAY_ARRAY_H_map_1389
#define X10_REGIONARRAY_ARRAY_H_map_1389
template<class TPMGL(T)> template<class TPMGL(S), class TPMGL(U)>
::x10::regionarray::Array<TPMGL(S)>* x10::regionarray::Array<TPMGL(T)>::map(
  ::x10::regionarray::Array<TPMGL(S)>* dst, ::x10::regionarray::Array<TPMGL(U)>* src,
  ::x10::regionarray::Region* filter, ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>* op) {
    
    //#line 805 "x10/regionarray/Array.x10"
    ::x10::regionarray::Region* fregion = this->FMGL(region)->__and(
                                            filter);
    
    //#line 806 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__124628;
        for (p__124628 = ::x10aux::nullCheck(fregion)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124628));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124628));
            
            //#line 807 "x10/regionarray/Array.x10"
            TPMGL(S) v__125954 = ::x10::lang::Fun_0_2<TPMGL(T), TPMGL(U), TPMGL(S)>::__apply(::x10aux::nullCheck(op), 
              (__extension__ ({
                  ::x10::regionarray::Array<TPMGL(T)>* this__125955 =
                    this;
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(this__125955)->FMGL(region)->contains(
                                   p)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p);
                  }
                  ::x10aux::nullCheck(this__125955)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125958 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125955)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125958 = ((((((offset__125958) * (::x10aux::nullCheck(this__125955)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125955)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124769max__125944 =
                              ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__125945;
                                for (i__125945 = ((x10_long)2ll);
                                     ((i__125945) <= (i__124769max__125944));
                                     i__125945 = ((i__125945) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125958 = ((((((offset__125958) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125955)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__125945) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                   i__125945)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125955)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__125945) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125958;
                    }))
                    );
              }))
              , (__extension__ ({
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(src)->FMGL(region)->contains(
                                   p)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p);
                  }
                  ::x10aux::nullCheck(src)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125961 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(src)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125961 = ((((((offset__125961) * (::x10aux::nullCheck(src)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                             ((x10_long)1ll))))) - (::x10aux::nullCheck(src)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124769max__125947 =
                              ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__125948;
                                for (i__125948 = ((x10_long)2ll);
                                     ((i__125948) <= (i__124769max__125947));
                                     i__125948 = ((i__125948) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125961 = ((((((offset__125961) * (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__125948) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                   i__125948)))) - (::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__125948) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125961;
                    }))
                    );
              }))
              );
            
            //#line 637 "x10/regionarray/Array.x10"
            if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                             p)))) {
                
                //#line 638 "x10/regionarray/Array.x10"
                ::x10::regionarray::Array<void>::raiseBoundsError(
                  p);
            }
            
            //#line 640 "x10/regionarray/Array.x10"
            ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(S) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125963 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125963 = ((((((offset__125963) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                       ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124769max__125950 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125951;
                          for (i__125951 = ((x10_long)2ll);
                               ((i__125951) <= (i__124769max__125950));
                               i__125951 = ((i__125951) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125963 = ((((((offset__125963) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125951) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                             i__125951)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125951) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125963;
              }))
              , v__125954);
        }
    }
    
    //#line 809 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_map_1389
#ifndef X10_REGIONARRAY_ARRAY_H_reduce_1390
#define X10_REGIONARRAY_ARRAY_H_reduce_1390
template<class TPMGL(T)> template<class TPMGL(U)> TPMGL(U)
  x10::regionarray::Array<TPMGL(T)>::reduce(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                            TPMGL(U) unit) {
    
    //#line 826 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 830 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< TPMGL(T) >* src__125968 = this->FMGL(raw);
        
        //#line 132 "x10/util/RailUtils.x10"
        TPMGL(U) accum__125971 = unit;
        
        //#line 133 "x10/util/RailUtils.x10"
        x10_long i__96596max__125965 = (x10_long)(::x10aux::nullCheck(src__125968)->FMGL(size));
        {
            x10_long i__125966;
            for (i__125966 = ((x10_long)0ll); ((i__125966) < (i__96596max__125965));
                 i__125966 = ((i__125966) + (((x10_long)1ll))))
            {
                
                //#line 134 "x10/util/RailUtils.x10"
                accum__125971 = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                  accum__125971, ::x10aux::nullCheck(src__125968)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                   i__125966));
            }
        }
        
        //#line 830 "x10/regionarray/Array.x10"
        return accum__125971;
        
    } else {
        
        //#line 832 "x10/regionarray/Array.x10"
        TPMGL(U) accum = unit;
        
        //#line 833 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124630;
            for (p__124630 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124630));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124630));
                
                //#line 834 "x10/regionarray/Array.x10"
                accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
                  accum, (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__125652 =
                        this;
                      
                      //#line 524 "x10/regionarray/Array.x10"
                      if ((true && !(::x10aux::nullCheck(this__125652)->FMGL(region)->contains(
                                       p)))) {
                          
                          //#line 525 "x10/regionarray/Array.x10"
                          ::x10::regionarray::Array<void>::raiseBoundsError(
                            p);
                      }
                      ::x10aux::nullCheck(this__125652)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                        (__extension__ ({
                            
                            //#line 1315 "x10/regionarray/Array.x10"
                            x10_long offset__125655 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                          ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125652)->FMGL(layout_min0)));
                            
                            //#line 1316 "x10/regionarray/Array.x10"
                            if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                            {
                                
                                //#line 1317 "x10/regionarray/Array.x10"
                                offset__125655 = ((((((offset__125655) * (::x10aux::nullCheck(this__125652)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                          ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125652)->FMGL(layout_min1)));
                                
                                //#line 1318 "x10/regionarray/Array.x10"
                                x10_long i__124769max__125972 =
                                  ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                                {
                                    x10_long i__125973;
                                    for (i__125973 = ((x10_long)2ll);
                                         ((i__125973) <= (i__124769max__125972));
                                         i__125973 = ((i__125973) + (((x10_long)1ll))))
                                    {
                                        
                                        //#line 1319 "x10/regionarray/Array.x10"
                                        offset__125655 = ((((((offset__125655) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125652)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                    ((((x10_long)2ll)) * (((i__125973) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                       i__125973)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125652)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                          ((((((x10_long)2ll)) * (((i__125973) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                    }
                                }
                                
                            }
                            offset__125655;
                        }))
                        );
                  }))
                  );
            }
        }
        
        //#line 836 "x10/regionarray/Array.x10"
        return accum;
        
    }
    
}
#endif // X10_REGIONARRAY_ARRAY_H_reduce_1390
#ifndef X10_REGIONARRAY_ARRAY_H_scan_1391
#define X10_REGIONARRAY_ARRAY_H_scan_1391
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::scan(::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                          TPMGL(U) unit) {
    
    //#line 855 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<TPMGL(T)>* this__125989 = this;
    ::x10::regionarray::Array<TPMGL(U)>* dst__125990 = (__extension__ ({
        ::x10::regionarray::Array<TPMGL(U)>* alloc__125991 =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(U)> >()) ::x10::regionarray::Array<TPMGL(U)>());
        ::x10::regionarray::Region* reg__125978 = this->FMGL(region);
        
        //#line 142 "x10/regionarray/Array.x10"
        alloc__125991->FMGL(region) = (__extension__ ({
            ::x10::regionarray::Region* t__125975 = reg__125978;
            if (!((!::x10aux::struct_equals(t__125975, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
            {
                if (true) {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165820))));
                }
                
            }
            t__125975;
        }))
        ;
        alloc__125991->FMGL(rank) = ::x10aux::nullCheck(reg__125978)->FMGL(rank);
        alloc__125991->FMGL(rect) = ::x10aux::nullCheck(reg__125978)->FMGL(rect);
        alloc__125991->FMGL(zeroBased) = ::x10aux::nullCheck(reg__125978)->FMGL(zeroBased);
        alloc__125991->FMGL(rail) = ::x10aux::nullCheck(reg__125978)->FMGL(rail);
        alloc__125991->FMGL(size) = ::x10aux::nullCheck(reg__125978)->size();
        
        //#line 143 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__LayoutHelper crh__125976 =
           ::x10::regionarray::Array__LayoutHelper::_alloc();
        (crh__125976)->::x10::regionarray::Array__LayoutHelper::_constructor(
          reg__125978);
        
        //#line 144 "x10/regionarray/Array.x10"
        alloc__125991->FMGL(layout_min0) = crh__125976->FMGL(min0);
        
        //#line 145 "x10/regionarray/Array.x10"
        alloc__125991->FMGL(layout_stride1) = crh__125976->FMGL(stride1);
        
        //#line 146 "x10/regionarray/Array.x10"
        alloc__125991->FMGL(layout_min1) = crh__125976->FMGL(min1);
        
        //#line 147 "x10/regionarray/Array.x10"
        alloc__125991->FMGL(layout) = crh__125976->FMGL(layout);
        
        //#line 148 "x10/regionarray/Array.x10"
        x10_long n__125977 = crh__125976->FMGL(size);
        
        //#line 152 "x10/regionarray/Array.x10"
        alloc__125991->FMGL(raw) = ::x10::lang::Rail< TPMGL(U) >::_makeUnsafe(n__125977, false);
        alloc__125991;
    }))
    ;
    
    //#line 873 "x10/regionarray/Array.x10"
    TPMGL(U) accum__125994 = unit;
    
    //#line 874 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__125995;
        for (p__125995 = ::x10aux::nullCheck(this__125989)->FMGL(region)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__125995));
             ) {
            ::x10::lang::Point* p__125996 = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__125995));
            
            //#line 875 "x10/regionarray/Array.x10"
            accum__125994 = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              accum__125994, (__extension__ ({
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(this__125989)->FMGL(region)->contains(
                                   p__125996)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p__125996);
                  }
                  ::x10aux::nullCheck(this__125989)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125999 = ((::x10aux::nullCheck(p__125996)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125989)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p__125996)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125999 = ((((((offset__125999) * (::x10aux::nullCheck(this__125989)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125996)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125989)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124769max__125979 =
                              ((::x10aux::nullCheck(p__125996)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__125980;
                                for (i__125980 = ((x10_long)2ll);
                                     ((i__125980) <= (i__124769max__125979));
                                     i__125980 = ((i__125980) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125999 = ((((((offset__125999) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125989)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__125980) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125996)->x10::lang::Point::__apply(
                                                                                                                                                   i__125980)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125989)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__125980) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125999;
                    }))
                    );
              }))
              );
            
            //#line 637 "x10/regionarray/Array.x10"
            if ((true && !(dst__125990->FMGL(region)->contains(
                             p__125996)))) {
                
                //#line 638 "x10/regionarray/Array.x10"
                ::x10::regionarray::Array<void>::raiseBoundsError(
                  p__125996);
            }
            
            //#line 640 "x10/regionarray/Array.x10"
            dst__125990->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__125988 = ((::x10aux::nullCheck(p__125996)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (dst__125990->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p__125996)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__125988 = ((((((offset__125988) * (dst__125990->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p__125996)->x10::lang::Point::__apply(
                                                                                                          ((x10_long)1ll))))) - (dst__125990->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124769max__125982 = ((::x10aux::nullCheck(p__125996)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125983;
                          for (i__125983 = ((x10_long)2ll);
                               ((i__125983) <= (i__124769max__125982));
                               i__125983 = ((i__125983) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__125988 = ((((((offset__125988) * (::x10aux::nullCheck(dst__125990->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125983) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p__125996)->x10::lang::Point::__apply(
                                                                                                                                             i__125983)))) - (::x10aux::nullCheck(dst__125990->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125983) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__125988;
              }))
              , accum__125994);
        }
    }
    
    //#line 855 "x10/regionarray/Array.x10"
    return dst__125990;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_scan_1391
#ifndef X10_REGIONARRAY_ARRAY_H_scan_1392
#define X10_REGIONARRAY_ARRAY_H_scan_1392
template<class TPMGL(T)> template<class TPMGL(U)> ::x10::regionarray::Array<TPMGL(U)>*
  x10::regionarray::Array<TPMGL(T)>::scan(::x10::regionarray::Array<TPMGL(U)>* dst,
                                          ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>* op,
                                          TPMGL(U) unit) {
    
    //#line 873 "x10/regionarray/Array.x10"
    TPMGL(U) accum = unit;
    
    //#line 874 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__124632;
        for (p__124632 = this->FMGL(region)->iterator(); ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124632));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124632));
            
            //#line 875 "x10/regionarray/Array.x10"
            accum = ::x10::lang::Fun_0_2<TPMGL(U), TPMGL(T), TPMGL(U)>::__apply(::x10aux::nullCheck(op), 
              accum, (__extension__ ({
                  ::x10::regionarray::Array<TPMGL(T)>* this__125696 =
                    this;
                  
                  //#line 524 "x10/regionarray/Array.x10"
                  if ((true && !(::x10aux::nullCheck(this__125696)->FMGL(region)->contains(
                                   p)))) {
                      
                      //#line 525 "x10/regionarray/Array.x10"
                      ::x10::regionarray::Array<void>::raiseBoundsError(
                        p);
                  }
                  ::x10aux::nullCheck(this__125696)->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                    (__extension__ ({
                        
                        //#line 1315 "x10/regionarray/Array.x10"
                        x10_long offset__125699 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                      ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125696)->FMGL(layout_min0)));
                        
                        //#line 1316 "x10/regionarray/Array.x10"
                        if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                        {
                            
                            //#line 1317 "x10/regionarray/Array.x10"
                            offset__125699 = ((((((offset__125699) * (::x10aux::nullCheck(this__125696)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                      ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125696)->FMGL(layout_min1)));
                            
                            //#line 1318 "x10/regionarray/Array.x10"
                            x10_long i__124769max__126000 =
                              ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                            {
                                x10_long i__126001;
                                for (i__126001 = ((x10_long)2ll);
                                     ((i__126001) <= (i__124769max__126000));
                                     i__126001 = ((i__126001) + (((x10_long)1ll))))
                                {
                                    
                                    //#line 1319 "x10/regionarray/Array.x10"
                                    offset__125699 = ((((((offset__125699) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125696)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                ((((x10_long)2ll)) * (((i__126001) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                   i__126001)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125696)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                      ((((((x10_long)2ll)) * (((i__126001) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                                }
                            }
                            
                        }
                        offset__125699;
                    }))
                    );
              }))
              );
            
            //#line 637 "x10/regionarray/Array.x10"
            if ((true && !(::x10aux::nullCheck(dst)->FMGL(region)->contains(
                             p)))) {
                
                //#line 638 "x10/regionarray/Array.x10"
                ::x10::regionarray::Array<void>::raiseBoundsError(
                  p);
            }
            
            //#line 640 "x10/regionarray/Array.x10"
            ::x10aux::nullCheck(dst)->FMGL(raw)->x10::lang::template Rail< TPMGL(U) >::__set(
              (__extension__ ({
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__126009 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__126009 = ((((((offset__126009) * (::x10aux::nullCheck(dst)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                       ((x10_long)1ll))))) - (::x10aux::nullCheck(dst)->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124769max__126003 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__126004;
                          for (i__126004 = ((x10_long)2ll);
                               ((i__126004) <= (i__124769max__126003));
                               i__126004 = ((i__126004) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__126009 = ((((((offset__126009) * (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__126004) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                             i__126004)))) - (::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__126004) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__126009;
              }))
              , accum);
        }
    }
    
    //#line 878 "x10/regionarray/Array.x10"
    return dst;
    
}
#endif // X10_REGIONARRAY_ARRAY_H_scan_1392
#endif // X10_REGIONARRAY_ARRAY_H_GENERICS
#ifndef X10_REGIONARRAY_ARRAY_H_IMPLEMENTATION
#define X10_REGIONARRAY_ARRAY_H_IMPLEMENTATION
#include <x10/regionarray/Array.h>

#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__1_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_Array__closure__1 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__1<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(){
        return ::x10aux::nullCheck((gra)->__apply())->FMGL(region)->indexOf(
                 dstPoint);
        
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra;
    ::x10::lang::Point* dstPoint;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->gra);
        buf.write(this->dstPoint);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_Array__closure__1<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > that_gra = buf.read< ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > >();
        ::x10::lang::Point* that_dstPoint = buf.read< ::x10::lang::Point*>();
        x10_regionarray_Array__closure__1<TPMGL(T) >* this_ = new (storage) x10_regionarray_Array__closure__1<TPMGL(T) >(that_gra, that_dstPoint);
        return this_;
    }
    
    x10_regionarray_Array__closure__1(::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra, ::x10::lang::Point* dstPoint) : gra(gra), dstPoint(dstPoint) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:938";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__1<TPMGL(T) > >x10_regionarray_Array__closure__1<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__1<TPMGL(T) >::__apply, &x10_regionarray_Array__closure__1<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_Array__closure__1<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &x10_regionarray_Array__closure__1<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__1<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__1<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__1_CLOSURE
#ifndef X10_REGIONARRAY_ARRAY__CLOSURE__2_CLOSURE
#define X10_REGIONARRAY_ARRAY__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
template<class TPMGL(T)> class x10_regionarray_Array__closure__2 : public ::x10::lang::Closure {
    public:
    
    static typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__2<TPMGL(T) > > _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(){
        return ::x10aux::nullCheck((gra)->__apply())->FMGL(region)->indexOf(
                 srcPoint);
        
    }
    
    // captured environment
    ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra;
    ::x10::lang::Point* srcPoint;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->gra);
        buf.write(this->srcPoint);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        x10_regionarray_Array__closure__2<TPMGL(T) >* storage = ::x10aux::alloc_z<x10_regionarray_Array__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > that_gra = buf.read< ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > >();
        ::x10::lang::Point* that_srcPoint = buf.read< ::x10::lang::Point*>();
        x10_regionarray_Array__closure__2<TPMGL(T) >* this_ = new (storage) x10_regionarray_Array__closure__2<TPMGL(T) >(that_gra, that_srcPoint);
        return this_;
    }
    
    x10_regionarray_Array__closure__2(::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra, ::x10::lang::Point* srcPoint) : gra(gra), srcPoint(srcPoint) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
    
    const char* toNativeString() {
        return "x10/regionarray/Array.x10:1041";
    }

};

template<class TPMGL(T)> typename ::x10::lang::Fun_0_0<x10_long>::template itable <x10_regionarray_Array__closure__2<TPMGL(T) > >x10_regionarray_Array__closure__2<TPMGL(T) >::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &x10_regionarray_Array__closure__2<TPMGL(T) >::__apply, &x10_regionarray_Array__closure__2<TPMGL(T) >::toString, &::x10::lang::Closure::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10_regionarray_Array__closure__2<TPMGL(T) >::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &x10_regionarray_Array__closure__2<TPMGL(T) >::_itable),::x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const ::x10aux::serialization_id_t x10_regionarray_Array__closure__2<TPMGL(T) >::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(x10_regionarray_Array__closure__2<TPMGL(T) >::_deserialize);

#endif // X10_REGIONARRAY_ARRAY__CLOSURE__2_CLOSURE

//#line 59 "x10/regionarray/Array.x10"
/**
         * The region of this array.
         */

//#line 64 "x10/regionarray/Array.x10"
/**
         * The rank of this array.
         */

//#line 69 "x10/regionarray/Array.x10"
/**
         * Is this array defined over a rectangular region?  
         */

//#line 74 "x10/regionarray/Array.x10"
/**
         * Is this array's region zero-based?
         */

//#line 79 "x10/regionarray/Array.x10"
/**
         * Is this array's region a "rail" (one-dimensional, rect, and zero-based)?
         */

//#line 85 "x10/regionarray/Array.x10"
/**
         * The number of points/data values in the array.
         * Will always be equal to region.size(), but cached here to make it available as a property.
         */
template<class TPMGL(T)> typename ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::template itable< ::x10::regionarray::Array<TPMGL(T)> >  x10::regionarray::Array<TPMGL(T)>::_itable_0(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::Array<TPMGL(T)>::__apply, &x10::regionarray::Array<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10::lang::Any::itable< ::x10::regionarray::Array<TPMGL(T)> >  x10::regionarray::Array<TPMGL(T)>::_itable_1(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::Array<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> typename ::x10::lang::Iterable< ::x10::lang::Point*>::template itable< ::x10::regionarray::Array<TPMGL(T)> >  x10::regionarray::Array<TPMGL(T)>::_itable_2(&::x10::lang::X10Class::equals, &::x10::lang::X10Class::hashCode, &x10::regionarray::Array<TPMGL(T)>::iterator, &x10::regionarray::Array<TPMGL(T)>::toString, &::x10::lang::X10Class::typeName);
template<class TPMGL(T)> ::x10aux::itable_entry x10::regionarray::Array<TPMGL(T)>::_itables[4] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)> >, &_itable_0), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Any>, &_itable_1), ::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Iterable< ::x10::lang::Point*> >, &_itable_2), ::x10aux::itable_entry(NULL, (void*)"::x10::regionarray::Array<TPMGL(T)>")};

//#line 97 "x10/regionarray/Array.x10"
/**
     * The backing storage for the array's elements
     */

//#line 115 "x10/regionarray/Array.x10"
/**
     * Return the Rail[T] that is providing the backing storage for the array.
     * This method is primarily intended to be used to interface with native libraries 
     * (eg BLAS, ESSL). <p>
     * 
     * This method should be used sparingly, since it may make client code dependent on the layout
     * algorithm used to map Points in the Array's Region to indicies in the backing Rail.
     * The specifics of this mapping are unspecified, although it would be reasonable to assume that
     * if the rect property is true, then every element of the backing Rail[T] actually
     * contatins a valid element of T.  Furthermore, for a multi-dimensional array it is currently true
     * (and likely to remain true) that the layout used is a row-major layout (like C, unlike Fortran)
     * and is compatible with the layout expected by platform BLAS libraries that operate on row-major
     * C arrays.
     * 
     * @return the Rail[T] that is the backing storage for the Array object.
     */
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::regionarray::Array<TPMGL(T)>::raw(
  ) {
    return this->FMGL(raw);
    
}

//#line 122 "x10/regionarray/Array.x10"
/**
     * Construct an Array over the region reg whose elements are zero-initialized.
     * 
     * @param reg The region over which to construct the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Region* reg) {
    
    //#line 124 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125782 = reg;
        if (!((!::x10aux::struct_equals(t__125782, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165820))));
        }
        t__125782;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 125 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 126 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 127 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 128 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 129 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 130 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 131 "x10/regionarray/Array.x10"
    this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_make(n);
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Region* reg)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(reg);
    return this_;
}



//#line 140 "x10/regionarray/Array.x10"
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_boolean zeroed, ::x10::regionarray::Region* reg) {
    
    //#line 142 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125784 = reg;
        if (!((!::x10aux::struct_equals(t__125784, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165820))));
        }
        t__125784;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 143 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 144 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 145 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 146 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 147 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 148 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 149 "x10/regionarray/Array.x10"
    if (zeroed) {
        
        //#line 150 "x10/regionarray/Array.x10"
        this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_make(n);
    } else {
        
        //#line 152 "x10/regionarray/Array.x10"
        this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(n, false);
    }
    
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_boolean zeroed, ::x10::regionarray::Region* reg)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(zeroed, reg);
    return this_;
}



//#line 172 "x10/regionarray/Array.x10"
/**
     * Construct an Array over the region reg whose
     * values are initialized as specified by the init function.
     * The function will be evaluated exactly once for each point
     * in reg in an arbitrary order to 
     * compute the initial value for each array element.</p>
     * 
     * It is unspecified whether the function evaluations will
     * be done sequentially for each point by the current activity 
     * or concurrently for disjoint sets of points by one or more 
     * child activities. 
     * 
     * @param reg The region over which to construct the array.
     * @param init The function to use to initialize the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Region* reg,
                           ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init) {
    
    //#line 174 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125789 = reg;
        if (!((!::x10aux::struct_equals(t__125789, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165820))));
        }
        t__125789;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 175 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 176 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 177 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 178 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 179 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 180 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 181 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(n, false);
    
    //#line 182 "x10/regionarray/Array.x10"
    {
        ::x10::lang::Iterator< ::x10::lang::Point*>* p__124543;
        for (p__124543 = ::x10aux::nullCheck(reg)->iterator();
             ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124543));
             ) {
            ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124543));
            
            //#line 183 "x10/regionarray/Array.x10"
            r->x10::lang::template Rail< TPMGL(T) >::__set(
              (__extension__ ({
                  ::x10::regionarray::Array<TPMGL(T)>* this__124998 =
                    this;
                  
                  //#line 1315 "x10/regionarray/Array.x10"
                  x10_long offset__124993 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__124998)->FMGL(layout_min0)));
                  
                  //#line 1316 "x10/regionarray/Array.x10"
                  if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                  {
                      
                      //#line 1317 "x10/regionarray/Array.x10"
                      offset__124993 = ((((((offset__124993) * (::x10aux::nullCheck(this__124998)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                ((x10_long)1ll))))) - (::x10aux::nullCheck(this__124998)->FMGL(layout_min1)));
                      
                      //#line 1318 "x10/regionarray/Array.x10"
                      x10_long i__124769max__125786 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                      {
                          x10_long i__125787;
                          for (i__125787 = ((x10_long)2ll);
                               ((i__125787) <= (i__124769max__125786));
                               i__125787 = ((i__125787) + (((x10_long)1ll))))
                          {
                              
                              //#line 1319 "x10/regionarray/Array.x10"
                              offset__124993 = ((((((offset__124993) * (::x10aux::nullCheck(::x10aux::nullCheck(this__124998)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                          ((((x10_long)2ll)) * (((i__125787) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                             i__125787)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__124998)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                ((((((x10_long)2ll)) * (((i__125787) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                          }
                      }
                      
                  }
                  offset__124993;
              }))
              , ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
                p));
        }
    }
    
    //#line 185 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Region* reg,
                           ::x10::lang::Fun_0_1< ::x10::lang::Point*, TPMGL(T)>* init)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(reg, init);
    return this_;
}



//#line 195 "x10/regionarray/Array.x10"
/**
     * Construct an Array over the region reg whose
     * values are initialized to be init.
     * 
     * @param reg The region over which to construct the array.
     * @param init The function to use to initialize the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Region* reg,
                           TPMGL(T) init) {
    
    //#line 197 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125798 = reg;
        if (!((!::x10aux::struct_equals(t__125798, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165820))));
        }
        t__125798;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 199 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 200 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 201 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 202 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 203 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 204 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 205 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(n, false);
    
    //#line 206 "x10/regionarray/Array.x10"
    if (::x10aux::nullCheck(reg)->FMGL(rect)) {
        
        //#line 209 "x10/regionarray/Array.x10"
        x10_long i__124545max__125792 = (x10_long)(::x10aux::nullCheck(r)->FMGL(size));
        {
            x10_long i__125793;
            for (i__125793 = ((x10_long)0ll); ((i__125793) < (i__124545max__125792));
                 i__125793 = ((i__125793) + (((x10_long)1ll))))
            {
                
                //#line 210 "x10/regionarray/Array.x10"
                r->x10::lang::template Rail< TPMGL(T) >::__set(
                  i__125793, init);
            }
        }
        
    } else {
        
        //#line 213 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124564;
            for (p__124564 = ::x10aux::nullCheck(reg)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124564));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124564));
                
                //#line 214 "x10/regionarray/Array.x10"
                r->x10::lang::template Rail< TPMGL(T) >::__set(
                  (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__125008 =
                        this;
                      
                      //#line 1315 "x10/regionarray/Array.x10"
                      x10_long offset__125003 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                    ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125008)->FMGL(layout_min0)));
                      
                      //#line 1316 "x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1317 "x10/regionarray/Array.x10"
                          offset__125003 = ((((((offset__125003) * (::x10aux::nullCheck(this__125008)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                    ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125008)->FMGL(layout_min1)));
                          
                          //#line 1318 "x10/regionarray/Array.x10"
                          x10_long i__124769max__125795 =
                            ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__125796;
                              for (i__125796 = ((x10_long)2ll);
                                   ((i__125796) <= (i__124769max__125795));
                                   i__125796 = ((i__125796) + (((x10_long)1ll))))
                              {
                                  
                                  //#line 1319 "x10/regionarray/Array.x10"
                                  offset__125003 = ((((((offset__125003) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125008)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((((x10_long)2ll)) * (((i__125796) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                 i__125796)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125008)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__125796) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      offset__125003;
                  }))
                  , init);
            }
        }
        
    }
    
    //#line 217 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Region* reg,
                           TPMGL(T) init) {
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(reg, init);
    return this_;
}



//#line 231 "x10/regionarray/Array.x10"
/**
     * Construct an Array view of a backing Rail
     * using the argument region to define how to map Points into
     * offsets in the backingStorage.  The size of the Rail
     * must be at least as large as the number of points in the boundingBox
     * of the given Region.
     * 
     * @param reg The region over which to define the array.
     * @param backingStore The backing storage for the array data.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Region* reg,
                           ::x10::lang::Rail< TPMGL(T) >* backingStore) {
    
    //#line 233 "x10/regionarray/Array.x10"
    FMGL(region) = (__extension__ ({
        ::x10::regionarray::Region* t__125800 = reg;
        if (!((!::x10aux::struct_equals(t__125800, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165820))));
        }
        t__125800;
    }))
    ;
    FMGL(rank) = ::x10aux::nullCheck(reg)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(reg)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(reg)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(reg)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(reg)->size();
    
    //#line 235 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
    (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
      reg);
    
    //#line 236 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = crh->FMGL(min0);
    
    //#line 237 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = crh->FMGL(stride1);
    
    //#line 238 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = crh->FMGL(min1);
    
    //#line 239 "x10/regionarray/Array.x10"
    this->FMGL(layout) = crh->FMGL(layout);
    
    //#line 240 "x10/regionarray/Array.x10"
    x10_long n = crh->FMGL(size);
    
    //#line 241 "x10/regionarray/Array.x10"
    if (((n) > ((x10_long)(::x10aux::nullCheck(backingStore)->FMGL(size)))))
    {
        
        //#line 242 "x10/regionarray/Array.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::IllegalArgumentException::_make((&::x10::regionarray::Array_Strings::sl__165821))));
    }
    
    //#line 244 "x10/regionarray/Array.x10"
    this->FMGL(raw) = (__extension__ ({
        ::x10::lang::Rail< TPMGL(T) >* t__122679 = backingStore;
        if (!((!::x10aux::struct_equals(t__122679, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165822))));
        }
        t__122679;
    }))
    ;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Region* reg,
                           ::x10::lang::Rail< TPMGL(T) >* backingStore)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(reg, backingStore);
    return this_;
}



//#line 253 "x10/regionarray/Array.x10"
/**
     * Construct an Array view of a backing Rail
     * using the region 0..(backingStore.size-1)
     * 
     * @param backingStore The backing storage for the array data.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::lang::Rail< TPMGL(T) >* backingStore) {
    
    //#line 255 "x10/regionarray/Array.x10"
    x10_long s = (x10_long)(::x10aux::nullCheck(backingStore)->FMGL(size));
    
    //#line 256 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((s) - (((x10_long)1ll))));
    
    //#line 257 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = s;
    
    //#line 259 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 260 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 261 "x10/regionarray/Array.x10"
    this->FMGL(raw) = (__extension__ ({
        ::x10::lang::Rail< TPMGL(T) >* t__122688 = backingStore;
        if (!((!::x10aux::struct_equals(t__122688, reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165822))));
        }
        t__122688;
    }))
    ;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::lang::Rail< TPMGL(T) >* backingStore)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(backingStore);
    return this_;
}



//#line 268 "x10/regionarray/Array.x10"
/**
     * Construct Array over the region 0..(size-1) whose elements are zero-initialized.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_long size) {
    
    //#line 270 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((size) - (((x10_long)1ll))));
    
    //#line 271 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 273 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 274 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 275 "x10/regionarray/Array.x10"
    this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_make(size);
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_long size) {
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(size);
    return this_;
}



//#line 282 "x10/regionarray/Array.x10"
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_boolean zeroed, x10_long size) {
    
    //#line 284 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((size) - (((x10_long)1ll))));
    
    //#line 285 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 287 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 288 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 289 "x10/regionarray/Array.x10"
    if (zeroed) {
        
        //#line 290 "x10/regionarray/Array.x10"
        this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_make(size);
    } else {
        
        //#line 292 "x10/regionarray/Array.x10"
        this->FMGL(raw) = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(size, false);
    }
    
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_boolean zeroed, x10_long size)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(zeroed, size);
    return this_;
}



//#line 312 "x10/regionarray/Array.x10"
/**
     * Construct Array over the region 0..(size-1) whose
     * values are initialized as specified by the init function.
     * The function will be evaluated exactly once for each point
     * in reg in an arbitrary order to 
     * compute the initial value for each array element.</p>
     * 
     * It is unspecified whether the function evaluations will
     * be done sequentially for each point by the current activity 
     * or concurrently for disjoint sets of points by one or more 
     * child activities. 
     * 
     * 
     * @param reg The region over which to construct the array.
     * @param init The function to use to initialize the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_long size, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init) {
    
    //#line 314 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((size) - (((x10_long)1ll))));
    
    //#line 315 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 317 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 318 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 319 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(size, false);
    
    //#line 320 "x10/regionarray/Array.x10"
    x10_long i__124566max__125805 = ((size) - (((x10_long)1ll)));
    {
        x10_long i__125806;
        for (i__125806 = ((x10_long)0ll); ((i__125806) <= (i__124566max__125805));
             i__125806 = ((i__125806) + (((x10_long)1ll))))
        {
            
            //#line 321 "x10/regionarray/Array.x10"
            r->x10::lang::template Rail< TPMGL(T) >::__set(
              i__125806, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>::__apply(::x10aux::nullCheck(init), 
                i__125806));
        }
    }
    
    //#line 323 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_long size, ::x10::lang::Fun_0_1<x10_long, TPMGL(T)>* init)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(size, init);
    return this_;
}



//#line 333 "x10/regionarray/Array.x10"
/**
     * Construct Array over the region 0..(size-1) whose
     * values are initialized to be init
     * 
     * @param reg The region over which to construct the array.
     * @param init The function to use to initialize the array.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           x10_long size, TPMGL(T) init) {
    
    //#line 335 "x10/regionarray/Array.x10"
    ::x10::regionarray::RectRegion1D* myReg =  (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
    (myReg)->::x10::regionarray::RectRegion1D::_constructor(
      ((size) - (((x10_long)1ll))));
    
    //#line 336 "x10/regionarray/Array.x10"
    FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg);
    FMGL(rank) = ((x10_long)1ll);
    FMGL(rect) = true;
    FMGL(zeroBased) = true;
    FMGL(rail) = true;
    FMGL(size) = size;
    
    //#line 338 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = this->FMGL(layout_stride1) =
      this->FMGL(layout_min1) = ((x10_long)0ll);
    
    //#line 339 "x10/regionarray/Array.x10"
    this->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 340 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe(size, false);
    
    //#line 341 "x10/regionarray/Array.x10"
    x10_long i__124584max__125809 = ((size) - (((x10_long)1ll)));
    {
        x10_long i__125810;
        for (i__125810 = ((x10_long)0ll); ((i__125810) <= (i__124584max__125809));
             i__125810 = ((i__125810) + (((x10_long)1ll))))
        {
            
            //#line 342 "x10/regionarray/Array.x10"
            r->x10::lang::template Rail< TPMGL(T) >::__set(
              i__125810, init);
        }
    }
    
    //#line 344 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           x10_long size, TPMGL(T) init) {
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(size, init);
    return this_;
}



//#line 353 "x10/regionarray/Array.x10"
/**
     * Construct a copy of the given Array.
     * 
     * @param init The array to copy.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::Array<TPMGL(T)>* init) {
    
    //#line 355 "x10/regionarray/Array.x10"
    FMGL(region) = ::x10aux::nullCheck(init)->FMGL(region);
    FMGL(rank) = ::x10aux::nullCheck(init)->FMGL(rank);
    FMGL(rect) = ::x10aux::nullCheck(init)->FMGL(rect);
    FMGL(zeroBased) = ::x10aux::nullCheck(init)->FMGL(zeroBased);
    FMGL(rail) = ::x10aux::nullCheck(init)->FMGL(rail);
    FMGL(size) = ::x10aux::nullCheck(init)->FMGL(size);
    
    //#line 356 "x10/regionarray/Array.x10"
    this->FMGL(layout_min0) = ::x10aux::nullCheck(init)->FMGL(layout_min0);
    
    //#line 357 "x10/regionarray/Array.x10"
    this->FMGL(layout_stride1) = ::x10aux::nullCheck(init)->FMGL(layout_stride1);
    
    //#line 358 "x10/regionarray/Array.x10"
    this->FMGL(layout_min1) = ::x10aux::nullCheck(init)->FMGL(layout_min1);
    
    //#line 359 "x10/regionarray/Array.x10"
    this->FMGL(layout) = ::x10aux::nullCheck(init)->FMGL(layout);
    
    //#line 360 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(init)->FMGL(raw))->FMGL(size)), false);
    
    //#line 361 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(init)->FMGL(raw), ((x10_long)0ll),
      r, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(r)->FMGL(size)));
    
    //#line 362 "x10/regionarray/Array.x10"
    this->FMGL(raw) = r;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::Array<TPMGL(T)>* init)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(init);
    return this_;
}



//#line 371 "x10/regionarray/Array.x10"
/**
     * Construct a copy of the given RemoteArray.
     * 
     * @param init The remote array to copy.
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_constructor(
                           ::x10::regionarray::RemoteArray<TPMGL(T)>* init) {
    
    //#line 373 "x10/regionarray/Array.x10"
    ::x10::regionarray::Array<TPMGL(T)>* this__125814 = this;
    ::x10::regionarray::Array<TPMGL(T)>* init__125815 = (::x10aux::nullCheck(init)->FMGL(array))->__apply();
    
    //#line 355 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125814)->FMGL(region) = ::x10aux::nullCheck(init__125815)->FMGL(region);
    ::x10aux::nullCheck(this__125814)->FMGL(rank) = ::x10aux::nullCheck(init__125815)->FMGL(rank);
    ::x10aux::nullCheck(this__125814)->FMGL(rect) = ::x10aux::nullCheck(init__125815)->FMGL(rect);
    ::x10aux::nullCheck(this__125814)->FMGL(zeroBased) = ::x10aux::nullCheck(init__125815)->FMGL(zeroBased);
    ::x10aux::nullCheck(this__125814)->FMGL(rail) = ::x10aux::nullCheck(init__125815)->FMGL(rail);
    ::x10aux::nullCheck(this__125814)->FMGL(size) = ::x10aux::nullCheck(init__125815)->FMGL(size);
    
    //#line 356 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125814)->FMGL(layout_min0) =
      ::x10aux::nullCheck(init__125815)->FMGL(layout_min0);
    
    //#line 357 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125814)->FMGL(layout_stride1) =
      ::x10aux::nullCheck(init__125815)->FMGL(layout_stride1);
    
    //#line 358 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125814)->FMGL(layout_min1) =
      ::x10aux::nullCheck(init__125815)->FMGL(layout_min1);
    
    //#line 359 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125814)->FMGL(layout) = ::x10aux::nullCheck(init__125815)->FMGL(layout);
    
    //#line 360 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* r__125813 = ::x10::lang::Rail< TPMGL(T) >::_makeUnsafe((x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(init__125815)->FMGL(raw))->FMGL(size)), false);
    
    //#line 361 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(init__125815)->FMGL(raw), ((x10_long)0ll),
      r__125813, ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(r__125813)->FMGL(size)));
    
    //#line 362 "x10/regionarray/Array.x10"
    ::x10aux::nullCheck(this__125814)->FMGL(raw) = r__125813;
}
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>* x10::regionarray::Array<TPMGL(T)>::_make(
                           ::x10::regionarray::RemoteArray<TPMGL(T)>* init)
{
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    this_->_constructor(init);
    return this_;
}



//#line 381 "x10/regionarray/Array.x10"
/**
     * Return the string representation of this array.
     * 
     * @return the string representation of this array.
     */
template<class TPMGL(T)> ::x10::lang::String* x10::regionarray::Array<TPMGL(T)>::toString(
  ) {
    
    //#line 382 "x10/regionarray/Array.x10"
    if (this->FMGL(rail)) {
        
        //#line 383 "x10/regionarray/Array.x10"
        ::x10::util::StringBuilder* sb =  (new (::x10aux::alloc_z< ::x10::util::StringBuilder>()) ::x10::util::StringBuilder());
        (sb)->::x10::util::StringBuilder::_constructor();
        
        //#line 384 "x10/regionarray/Array.x10"
        sb->add((&::x10::regionarray::Array_Strings::sl__165823));
        
        //#line 385 "x10/regionarray/Array.x10"
        x10_long sz = (__extension__ ({
            x10_long a__125380 = this->FMGL(size);
            ((a__125380) < (((x10_long)10ll))) ? (a__125380)
              : (((x10_long)10ll));
        }))
        ;
        
        //#line 386 "x10/regionarray/Array.x10"
        x10_long i__124602max__125816 = ((sz) - (((x10_long)1ll)));
        {
            x10_long i__125817;
            for (i__125817 = ((x10_long)0ll); ((i__125817) <= (i__124602max__125816));
                 i__125817 = ((i__125817) + (((x10_long)1ll))))
            {
                
                //#line 387 "x10/regionarray/Array.x10"
                if (((i__125817) > (((x10_long)0ll)))) {
                    sb->add((&::x10::regionarray::Array_Strings::sl__165824));
                }
                
                //#line 388 "x10/regionarray/Array.x10"
                sb->add(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165825), this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                                                                        i__125817)));
            }
        }
        
        //#line 390 "x10/regionarray/Array.x10"
        if (((sz) < (this->FMGL(size)))) {
            sb->add(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165826), ((this->FMGL(size)) - (sz))), (&::x10::regionarray::Array_Strings::sl__165827)));
        }
        
        //#line 391 "x10/regionarray/Array.x10"
        sb->add((&::x10::regionarray::Array_Strings::sl__165828));
        
        //#line 392 "x10/regionarray/Array.x10"
        return sb->toString();
        
    } else {
        
        //#line 394 "x10/regionarray/Array.x10"
        return ::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165829), this->FMGL(region)), (&::x10::regionarray::Array_Strings::sl__165830));
        
    }
    
}

//#line 404 "x10/regionarray/Array.x10"
/**
     * Return an iterator over the points in the region of this array.
     * 
     * @return an iterator over the points in the region of this array.
     * @see x10.lang.Iterable[T]#iterator()
     */
template<class TPMGL(T)> ::x10::lang::Iterator< ::x10::lang::Point*>*
  x10::regionarray::Array<TPMGL(T)>::iterator() {
    return this->FMGL(region)->iterator();
    
}

//#line 412 "x10/regionarray/Array.x10"
/**
     * Return an Iterable[T] that can construct iterators 
     * over this array.<p>
     * @return an Iterable[T] over this array.
     */
template<class TPMGL(T)> ::x10::lang::Iterable<TPMGL(T)>*
  x10::regionarray::Array<TPMGL(T)>::values() {
    
    //#line 413 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 414 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__Anonymous__14235<TPMGL(T)>* alloc__125820 =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array__Anonymous__14235<TPMGL(T)> >()) ::x10::regionarray::Array__Anonymous__14235<TPMGL(T)>());
        ::x10::regionarray::Array<TPMGL(T)>* out__125819 =
          this;
        
        //#line 55 "x10/regionarray/Array.x10"
        alloc__125820->FMGL(out__) = out__125819;
        
        //#line 414 "x10/regionarray/Array.x10"
        return reinterpret_cast< ::x10::lang::Iterable<TPMGL(T)>*>(alloc__125820);
        
    } else {
        
        //#line 422 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>* alloc__125822 =
           (new (::x10aux::alloc_z< ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)> >()) ::x10::regionarray::Array__Anonymous__14520<TPMGL(T)>());
        ::x10::regionarray::Array<TPMGL(T)>* out__125821 =
          this;
        
        //#line 55 "x10/regionarray/Array.x10"
        alloc__125822->FMGL(out__) = out__125821;
        
        //#line 422 "x10/regionarray/Array.x10"
        return reinterpret_cast< ::x10::lang::Iterable<TPMGL(T)>*>(alloc__125822);
        
    }
    
}

//#line 442 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given index.
     * Only applies to one-dimensional arrays.
     * Functionally equivalent to indexing the array via a one-dimensional point.
     * 
     * @param i0 the given index in the first dimension
     * @return the element of this array corresponding to the given index.
     * @see #operator(Point)
     * @see #set(T, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  x10_long i0) {
    
    //#line 444 "x10/regionarray/Array.x10"
    if (this->FMGL(rail)) {
        
        //#line 446 "x10/regionarray/Array.x10"
        return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                 i0);
        
    } else {
        
        //#line 448 "x10/regionarray/Array.x10"
        if ((true && !(this->FMGL(region)->contains(i0))))
        {
            
            //#line 449 "x10/regionarray/Array.x10"
            ::x10::regionarray::Array<void>::raiseBoundsError(
              i0);
        }
        
        //#line 451 "x10/regionarray/Array.x10"
        return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
                 ((i0) - (this->FMGL(layout_min0))));
        
    }
    
}

//#line 466 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given pair of indices.
     * Only applies to two-dimensional arrays.
     * Functionally equivalent to indexing the array via a two-dimensional point.
     * 
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @return the element of this array corresponding to the given pair of indices.
     * @see #operator(Point)
     * @see #set(T, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  x10_long i0, x10_long i1) {
    
    //#line 467 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1))))
    {
        
        //#line 468 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1);
    }
    
    //#line 470 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 471 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 472 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             offset);
    
}

//#line 487 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given triple of indices.
     * Only applies to three-dimensional arrays.
     * Functionally equivalent to indexing the array via a three-dimensional point.
     * 
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @return the element of this array corresponding to the given triple of indices.
     * @see #operator(Point)
     * @see #set(T, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  x10_long i0, x10_long i1, x10_long i2) {
    
    //#line 488 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1, i2))))
    {
        
        //#line 489 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2);
    }
    
    //#line 491 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             (__extension__ ({
                 ::x10::regionarray::Array<TPMGL(T)>* this__125391 =
                   this;
                 
                 //#line 1300 "x10/regionarray/Array.x10"
                 x10_long offset__125390 = ((i0) - (::x10aux::nullCheck(this__125391)->FMGL(layout_min0)));
                 
                 //#line 1301 "x10/regionarray/Array.x10"
                 offset__125390 = ((((((offset__125390) * (::x10aux::nullCheck(this__125391)->FMGL(layout_stride1)))) + (i1))) - (::x10aux::nullCheck(this__125391)->FMGL(layout_min1)));
                 ((((((offset__125390) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125391)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                            ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125391)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((x10_long)1ll))));
             }))
             );
    
}

//#line 507 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given quartet of indices.
     * Only applies to four-dimensional arrays.
     * Functionally equivalent to indexing the array via a four-dimensional point.
     * 
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @param i3 the given index in the fourth dimension
     * @return the element of this array corresponding to the given quartet of indices.
     * @see #operator(Point)
     * @see #set(T, Long, Long, Long, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  x10_long i0, x10_long i1, x10_long i2, x10_long i3) {
    
    //#line 508 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1, i2,
                                                i3)))) {
        
        //#line 509 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2, i3);
    }
    
    //#line 511 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             (__extension__ ({
                 ::x10::regionarray::Array<TPMGL(T)>* this__125398 =
                   this;
                 
                 //#line 1307 "x10/regionarray/Array.x10"
                 x10_long offset__125397 = ((i0) - (::x10aux::nullCheck(this__125398)->FMGL(layout_min0)));
                 
                 //#line 1308 "x10/regionarray/Array.x10"
                 offset__125397 = ((((((offset__125397) * (::x10aux::nullCheck(this__125398)->FMGL(layout_stride1)))) + (i1))) - (::x10aux::nullCheck(this__125398)->FMGL(layout_min1)));
                 
                 //#line 1309 "x10/regionarray/Array.x10"
                 offset__125397 = ((((((offset__125397) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125398)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                             ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125398)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                               ((x10_long)1ll))));
                 ((((((offset__125397) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125398)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                            ((x10_long)2ll))))) + (i3))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125398)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((x10_long)3ll))));
             }))
             );
    
}

//#line 523 "x10/regionarray/Array.x10"
/**
     * Return the element of this array corresponding to the given point.
     * The rank of the given point has to be the same as the rank of this array.
     * 
     * @param pt the given point
     * @return the element of this array corresponding to the given point.
     * @see #operator(Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__apply(
  ::x10::lang::Point* pt) {
    
    //#line 524 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(pt)))) {
        
        //#line 525 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          pt);
    }
    
    //#line 527 "x10/regionarray/Array.x10"
    return this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__apply(
             (__extension__ ({
                 ::x10::regionarray::Array<TPMGL(T)>* this__125406 =
                   this;
                 
                 //#line 1315 "x10/regionarray/Array.x10"
                 x10_long offset__125401 = ((::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                               ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125406)->FMGL(layout_min0)));
                 
                 //#line 1316 "x10/regionarray/Array.x10"
                 if (((::x10aux::nullCheck(pt)->FMGL(rank)) > (((x10_long)1ll))))
                 {
                     
                     //#line 1317 "x10/regionarray/Array.x10"
                     offset__125401 = ((((((offset__125401) * (::x10aux::nullCheck(this__125406)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                                                                                                               ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125406)->FMGL(layout_min1)));
                     
                     //#line 1318 "x10/regionarray/Array.x10"
                     x10_long i__124769max__125823 = ((::x10aux::nullCheck(pt)->FMGL(rank)) - (((x10_long)1ll)));
                     {
                         x10_long i__125824;
                         for (i__125824 = ((x10_long)2ll);
                              ((i__125824) <= (i__124769max__125823));
                              i__125824 = ((i__125824) + (((x10_long)1ll))))
                         {
                             
                             //#line 1319 "x10/regionarray/Array.x10"
                             offset__125401 = ((((((offset__125401) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125406)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                         ((((x10_long)2ll)) * (((i__125824) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                                                                                                                            i__125824)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125406)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                               ((((((x10_long)2ll)) * (((i__125824) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                         }
                     }
                     
                 }
                 offset__125401;
             }))
             );
    
}

//#line 543 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given index to the given value.
     * Return the new value of the element.
     * Only applies to one-dimensional arrays.
     * Functionally equivalent to setting the array via a one-dimensional point.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @return the new value of the element of this array corresponding to the given index.
     * @see #operator(Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  x10_long i0, TPMGL(T) v) {
    
    //#line 545 "x10/regionarray/Array.x10"
    if (this->FMGL(rail)) {
        
        //#line 547 "x10/regionarray/Array.x10"
        this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
          i0, v);
    } else {
        
        //#line 549 "x10/regionarray/Array.x10"
        if ((true && !(this->FMGL(region)->contains(i0))))
        {
            
            //#line 550 "x10/regionarray/Array.x10"
            ::x10::regionarray::Array<void>::raiseBoundsError(
              i0);
        }
        
        //#line 552 "x10/regionarray/Array.x10"
        this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
          ((i0) - (this->FMGL(layout_min0))), v);
    }
    
    //#line 554 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 570 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given pair of indices to the given value.
     * Return the new value of the element.
     * Only applies to two-dimensional arrays.
     * Functionally equivalent to setting the array via a two-dimensional point.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @return the new value of the element of this array corresponding to the given pair of indices.
     * @see #operator(Long, Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  x10_long i0, x10_long i1, TPMGL(T) v) {
    
    //#line 571 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1))))
    {
        
        //#line 572 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1);
    }
    
    //#line 574 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 575 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 576 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      offset, v);
    
    //#line 577 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 594 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given triple of indices to the given value.
     * Return the new value of the element.
     * Only applies to three-dimensional arrays.
     * Functionally equivalent to setting the array via a three-dimensional point.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @return the new value of the element of this array corresponding to the given triple of indices.
     * @see #operator(Long, Long, Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  x10_long i0, x10_long i1, x10_long i2, TPMGL(T) v) {
    
    //#line 595 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1, i2))))
    {
        
        //#line 596 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2);
    }
    
    //#line 598 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      (__extension__ ({
          ::x10::regionarray::Array<TPMGL(T)>* this__125412 =
            this;
          
          //#line 1300 "x10/regionarray/Array.x10"
          x10_long offset__125411 = ((i0) - (::x10aux::nullCheck(this__125412)->FMGL(layout_min0)));
          
          //#line 1301 "x10/regionarray/Array.x10"
          offset__125411 = ((((((offset__125411) * (::x10aux::nullCheck(this__125412)->FMGL(layout_stride1)))) + (i1))) - (::x10aux::nullCheck(this__125412)->FMGL(layout_min1)));
          ((((((offset__125411) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125412)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                     ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125412)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                       ((x10_long)1ll))));
      }))
      , v);
    
    //#line 599 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 617 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given quartet of indices to the given value.
     * Return the new value of the element.
     * Only applies to four-dimensional arrays.
     * Functionally equivalent to setting the array via a four-dimensional point.
     * 
     * @param v the given value
     * @param i0 the given index in the first dimension
     * @param i1 the given index in the second dimension
     * @param i2 the given index in the third dimension
     * @param i3 the given index in the fourth dimension
     * @return the new value of the element of this array corresponding to the given quartet of indices.
     * @see #operator(Long, Long, Long, Long)
     * @see #set(T, Point)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  x10_long i0, x10_long i1, x10_long i2, x10_long i3, TPMGL(T) v) {
    
    //#line 618 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(i0, i1, i2,
                                                i3)))) {
        
        //#line 619 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          i0, i1, i2, i3);
    }
    
    //#line 621 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      (__extension__ ({
          ::x10::regionarray::Array<TPMGL(T)>* this__125419 =
            this;
          
          //#line 1307 "x10/regionarray/Array.x10"
          x10_long offset__125418 = ((i0) - (::x10aux::nullCheck(this__125419)->FMGL(layout_min0)));
          
          //#line 1308 "x10/regionarray/Array.x10"
          offset__125418 = ((((((offset__125418) * (::x10aux::nullCheck(this__125419)->FMGL(layout_stride1)))) + (i1))) - (::x10aux::nullCheck(this__125419)->FMGL(layout_min1)));
          
          //#line 1309 "x10/regionarray/Array.x10"
          offset__125418 = ((((((offset__125418) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125419)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                      ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125419)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                        ((x10_long)1ll))));
          ((((((offset__125418) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125419)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                     ((x10_long)2ll))))) + (i3))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125419)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                       ((x10_long)3ll))));
      }))
      , v);
    
    //#line 622 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 636 "x10/regionarray/Array.x10"
/**
     * Set the element of this array corresponding to the given point to the given value.
     * Return the new value of the element.
     * The rank of the given point has to be the same as the rank of this array.
     * 
     * @param v the given value
     * @param pt the given point
     * @return the new value of the element of this array corresponding to the given point.
     * @see #operator(Point)
     * @see #set(T, Long)
     */
template<class TPMGL(T)> TPMGL(T) x10::regionarray::Array<TPMGL(T)>::__set(
  ::x10::lang::Point* p, TPMGL(T) v) {
    
    //#line 637 "x10/regionarray/Array.x10"
    if ((true && !(this->FMGL(region)->contains(p)))) {
        
        //#line 638 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<void>::raiseBoundsError(
          p);
    }
    
    //#line 640 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
      (__extension__ ({
          ::x10::regionarray::Array<TPMGL(T)>* this__125427 =
            this;
          
          //#line 1315 "x10/regionarray/Array.x10"
          x10_long offset__125422 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                        ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125427)->FMGL(layout_min0)));
          
          //#line 1316 "x10/regionarray/Array.x10"
          if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
          {
              
              //#line 1317 "x10/regionarray/Array.x10"
              offset__125422 = ((((((offset__125422) * (::x10aux::nullCheck(this__125427)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                        ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125427)->FMGL(layout_min1)));
              
              //#line 1318 "x10/regionarray/Array.x10"
              x10_long i__124769max__125826 = ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
              {
                  x10_long i__125827;
                  for (i__125827 = ((x10_long)2ll); ((i__125827) <= (i__124769max__125826));
                       i__125827 = ((i__125827) + (((x10_long)1ll))))
                  {
                      
                      //#line 1319 "x10/regionarray/Array.x10"
                      offset__125422 = ((((((offset__125422) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125427)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                  ((((x10_long)2ll)) * (((i__125827) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                     i__125827)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125427)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                        ((((((x10_long)2ll)) * (((i__125827) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                  }
              }
              
          }
          offset__125422;
      }))
      , v);
    
    //#line 641 "x10/regionarray/Array.x10"
    return v;
    
}

//#line 650 "x10/regionarray/Array.x10"
/**
     * Fill all elements of the array to contain the argument value.
     * 
     * @param v the value with which to fill the array
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::fill(
  TPMGL(T) v) {
    
    //#line 651 "x10/regionarray/Array.x10"
    if (this->FMGL(rect)) {
        
        //#line 654 "x10/regionarray/Array.x10"
        this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::fill(
          v);
    } else {
        
        //#line 656 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124620;
            for (p__124620 = this->FMGL(region)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124620));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124620));
                
                //#line 657 "x10/regionarray/Array.x10"
                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                  (__extension__ ({
                      ::x10::regionarray::Array<TPMGL(T)>* this__125435 =
                        this;
                      
                      //#line 1315 "x10/regionarray/Array.x10"
                      x10_long offset__125430 = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                    ((x10_long)(((x10_int)0))))) - (::x10aux::nullCheck(this__125435)->FMGL(layout_min0)));
                      
                      //#line 1316 "x10/regionarray/Array.x10"
                      if (((::x10aux::nullCheck(p)->FMGL(rank)) > (((x10_long)1ll))))
                      {
                          
                          //#line 1317 "x10/regionarray/Array.x10"
                          offset__125430 = ((((((offset__125430) * (::x10aux::nullCheck(this__125435)->FMGL(layout_stride1)))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                    ((x10_long)1ll))))) - (::x10aux::nullCheck(this__125435)->FMGL(layout_min1)));
                          
                          //#line 1318 "x10/regionarray/Array.x10"
                          x10_long i__124769max__125829 =
                            ((::x10aux::nullCheck(p)->FMGL(rank)) - (((x10_long)1ll)));
                          {
                              x10_long i__125830;
                              for (i__125830 = ((x10_long)2ll);
                                   ((i__125830) <= (i__124769max__125829));
                                   i__125830 = ((i__125830) + (((x10_long)1ll))))
                              {
                                  
                                  //#line 1319 "x10/regionarray/Array.x10"
                                  offset__125430 = ((((((offset__125430) * (::x10aux::nullCheck(::x10aux::nullCheck(this__125435)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                              ((((x10_long)2ll)) * (((i__125830) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                                                                                                                                 i__125830)))) - (::x10aux::nullCheck(::x10aux::nullCheck(this__125435)->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                                                    ((((((x10_long)2ll)) * (((i__125830) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
                              }
                          }
                          
                      }
                      offset__125430;
                  }))
                  , v);
            }
        }
        
    }
    
}

//#line 667 "x10/regionarray/Array.x10"
/**
     * Fill all elements of the array with the zero value of type T 
     * @see x10.lang.Zero.get[T]()
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::clear(
  ) {
    
    //#line 668 "x10/regionarray/Array.x10"
    this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::clear(
      ((x10_long)0ll), (x10_long)(::x10aux::nullCheck(this->FMGL(raw))->FMGL(size)));
}

//#line 684 "x10/regionarray/Array.x10"
/**
     * Map the function onto the elements of this array
     * constructing a new result array such that for all points <code>p</code>
     * in <code>this.region</code>,
     * <code>result(p) == op(this(p))</code>.<p>
     * 
     * @param op the function to apply to each element of the array
     * @return a new array with the same region as this array where <code>result(p) == op(this(p))</code>
     * 
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 702 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array
     * storing the results in the dst array such that for all points <code>p</code>
     * in <code>this.region</code>,
     * <code>dst(p) == op(this(p))</code>.<p>
     * 
     * @param dst the destination array for the results of the map operation
     * @param op the function to apply to each element of the array
     * @return dst after applying the map operation.
     * 
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 733 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array for the subset
     * of points contained in the filter region such that for all points <code>p</code>
     * in <code>filter</code>,
     * <code>dst(p) == op(this(p))</code>.<p>
     * 
     * @param dst the destination array for the results of the map operation
     * @param filter the region to select the subset of points to include in the map
     * @param op the function to apply to each element of the array
     * @return dst after applying the map operation.
     * 
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 754 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array
     * and the other src array, storing the results in a new result array 
     * such that for all points <code>p</code> in <code>this.region</code>,
     * <code>result(p) == op(this(p), src(p))</code>.<p>
     * 
     * @param src the other src array
     * @param op the function to apply to each element of the array
     * @return a new array with the same region as this array containing the result of the map
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 772 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array
     * and the other src array, storing the results in the given dst array 
     * such that for all points <code>p</code> in <code>this.region</code>,
     * <code>dst(p) == op(this(p), src(p))</code>.<p>
     * 
     * @param dst the destination array for the map operation
     * @param src the second source array for the map operation
     * @param op the function to apply to each element of the array
     * @return destination after applying the map operation.
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 804 "x10/regionarray/Array.x10"
/**
     * Map the given function onto the elements of this array
     * and the other src array for the subset of points contained in the filter region, 
     * storing the results in the given dst array such that for all points <code>p</code> 
     * in <code>filter</code>,
     * <code>dst(p) == op(this(p), src(p))</code>.<p>
     * 
     * @param dst the destination array for the map operation
     * @param src the second source array for the map operation
     * @param filter the region to select the subset of points to include in the map
     * @param op the function to apply to each element of the array
     * @return destination after applying the map operation.
     * @see #reduce((U,T)=>U,U)
     * @see #scan((U,T)=>U,U)
     */

//#line 825 "x10/regionarray/Array.x10"
/**
     * Reduce this array using the given function and the given initial value.
     * Each element of the array will be given as an argument to the reduction
     * function exactly once, but in an arbitrary order.  The reduction function
     * may be applied concurrently to implement a parallel reduction. 
     * 
     * @param op the reduction function
     * @param unit the given initial value
     * @return the final result of the reduction.
     * @see #map((T)=>S)
     * @see #scan((U,T)=>U,U)
     */

//#line 854 "x10/regionarray/Array.x10"
/**
     * Scan this array using the function and the given initial value.
     * Starting with the initial value, apply the operation pointwise to the current running value
     * and each element of this array.
     * Return a new array with the same region as this array.
     * Each element of the new array is the result of applying the given function to the
     * current running value and the corresponding element of this array.
     * 
     * @param op the scan function
     * @param unit the given initial value
     * @return a new array containing the result of the scan 
     * @see #map((T)=>U)
     * @see #reduce((U,T)=>U,U)
     */

//#line 872 "x10/regionarray/Array.x10"
/**
     * Scan this array using the given function and the given initial value.
     * Starting with the initial value, apply the operation pointwise to the current running value
     * and each element of this array storing the result in the destination array.
     * Return the destination array where each element has been set to the result of 
     * applying the given operation to the current running value and the corresponding 
     * element of this array.
     * 
     * @param op the scan function
     * @param unit the given initial value
     * @return a new array containing the result of the scan 
     * @see #map((T)=>U)
     * @see #reduce((U,T)=>U,U)
     */

//#line 903 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy all of the values from the source Array to the 
     * Array referenced by the destination RemoteArray.
     * The two arrays must be defined over Regions with equal size 
     * bounding boxes; if the backing storage for the two arrays is 
     * not of equal size, then an IllegalArgumentExeption will be raised.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param dst the destination array.
     * @throws IllegalArgumentException if mismatch in size of backing storage
     *         of the two arrays.
     */

//#line 934 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy the specified values from the source Array to the 
     * specified portion of the Array referenced by the destination RemoteArray.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param srcPoint the first element in this array to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstPoint the first element in the destination
     *                 array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 978 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy the specified values from the source Array to the 
     * specified portion of the Array referenced by the destination RemoteArray.
     * The index arguments that are used to specify the start of the source
     * and destination regions are interpreted as of they were the result
     * of calling {@link Region#indexOf} on the Point that specifies the
     * start of the copy region.  Note that for Arrays that have the 
     * <code>rail</code> property, this exactly corresponds to the index
     * that would be used to access the element via apply or set.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param srcIndex the index of the first element in this array
     *        to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstIndex the index of the first element in the destination
     *        array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @see Region#indexOf
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1006 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy all of the values from the source Array 
     * referenced by the RemoteArray to the destination Array.
     * The two arrays must be defined over Regions with equal size 
     * bounding boxes; if the backing storage for the two arrays is 
     * not of equal size, then an IllegalArgumentExeption will be raised.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param dst the destination array.
     * @throws IllegalArgumentException if mismatch in size of backing storage
     *         of the two arrays.
     */

//#line 1037 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy the specified values from the Array referenced by
     * the source RemoteArray to the specified portion of the destination Array.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param srcPoint the first element in this array to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstPoint the first element in the destination
     *                 array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1081 "x10/regionarray/Array.x10"
/**
     * Asynchronously copy the specified values from the Array referenced by
     * the source RemoteArray to the specified portion of the destination Array.
     * The index arguments that are used to specify the start of the source
     * and destination regions are interpreted as of they were the result
     * of calling {@link Region#indexOf} on the Point that specifies the
     * start of the copy region.  Note that for Arrays that have the 
     * <code>rail</code> property, this exactly corresponds to the index
     * that would be used to access the element via apply or set.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * The activity created to do the copying will be registered with the
     * dynamically enclosing finish.<p>
     * 
     * Warning: This method is only intended to be used on Arrays containing
     *   non-Object data elements.  The elements are actually copied via an
     *   optimized DMA operation if available.  Therefore object-references will
     *   not be properly transferred. Ideally, future versions of the X10 type
     *   system would enable this restriction to be checked statically.</p>
     * 
     * @param src the source array.
     * @param srcIndex the index of the first element in this array
     *        to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstIndex the index of the first element in the destination
     *        array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @see Region#indexOf
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1099 "x10/regionarray/Array.x10"
/**
     * Copy all of the values from the source Array to the destination Array.
     * The two arrays must be defined over Regions with equal size 
     * bounding boxes; if the backing storage for the two arrays is 
     * not of equal size, then an IllegalArgumentExeption will be raised.<p>
     * 
     * @param src the source array.
     * @param dst the destination array.
     * @throws IllegalArgumentException if mismatch in size of backing storage
     *         of the two arrays.
     */

//#line 1121 "x10/regionarray/Array.x10"
/**
     * Copy the specified values from the source Array to the 
     * specified portion of the destination Array.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * @param src the source array.
     * @param srcPoint the first element in this array to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstPoint the first element in the destination
     *                 array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1154 "x10/regionarray/Array.x10"
/**
     * Copy the specified values from the source Array to the 
     * specified portion of the destination Array.
     * The index arguments that are used to specify the start of the source
     * and destination regions are interpreted as of they were the result
     * of calling {@link Region#indexOf} on the Point that specifies the
     * start of the copy region.  Note that for Arrays that have the 
     * <code>rail</code> property, this exactly corresponds to the index
     * that would be used to access the element via apply or set.
     * If accessing any point in either the specified source or the 
     * specified destination range would in an ArrayIndexOutOfBoundsError
     * being raised, then this method will throw an IllegalArgumentException.<p>
     * 
     * @param src the source array.
     * @param srcIndex the index of the first element in this array
     *        to be copied.  
     * @param dst the destination array.  May actually be local or remote
     * @param dstIndex the index of the first element in the destination
     *        array where copied data elements will be stored.
     * @param numElems the number of elements to be copied.
     * 
     * @see Region#indexOf
     * 
     * @throws IllegalArgumentException if the specified copy regions would 
     *         result in an ArrayIndexOutOfBoundsException.
     */

//#line 1174 "x10/regionarray/Array.x10"
/**
     * Copy the specified region from the source Array to this array.
     * If the specified region is not contained in the region for the source
     * array or this array, then an ArrayIndexOutOfBoundsError is raised.
     * 
     * @param src the source array.
     * @param region the region of the array to copy to this array
     * 
     * @see Region#indexOf
     * 
     * @throws ArrayIndexOutOfBoundsException if the specified region is not
     *        contained in the source array or this array
     */
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::copy(
  ::x10::regionarray::Array<TPMGL(T)>* src, ::x10::regionarray::Region* r) {
    
    //#line 1176 "x10/regionarray/Array.x10"
    if (!(::x10aux::nullCheck(src)->FMGL(region)->contains(
            r))) {
        
        //#line 1177 "x10/regionarray/Array.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::ArrayIndexOutOfBoundsException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165832), r), (&::x10::regionarray::Array_Strings::sl__165833)), ::x10aux::nullCheck(src)->FMGL(region)))));
    } else 
    //#line 1178 "x10/regionarray/Array.x10"
    if (!(this->FMGL(region)->contains(r))) {
        
        //#line 1179 "x10/regionarray/Array.x10"
        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::ArrayIndexOutOfBoundsException::_make(::x10::lang::String::__plus(::x10::lang::String::__plus(::x10::lang::String::__plus((&::x10::regionarray::Array_Strings::sl__165832), r), (&::x10::regionarray::Array_Strings::sl__165834)), this->FMGL(region)))));
    }
    
    //#line 1182 "x10/regionarray/Array.x10"
    if (((::x10aux::struct_equals(this->FMGL(rank), ((x10_long)3ll))) &&
        ::x10aux::nullCheck(r)->FMGL(rect))) {
        
        //#line 1183 "x10/regionarray/Array.x10"
        ::x10aux::nullCheck((__extension__ ({
            ::x10::regionarray::Array<TPMGL(T)>* t__123065 =
              this;
            if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__123065)->FMGL(rank),
                                           ((x10_long)3ll)))))
            {
                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165835))));
            }
            t__123065;
        }))
        )->x10::regionarray::template Array<TPMGL(T)>::copy3(
          (__extension__ ({
              ::x10::regionarray::Array<TPMGL(T)>* t__123067 =
                src;
              if (!((::x10aux::struct_equals(::x10aux::nullCheck(t__123067)->FMGL(rank),
                                             ((x10_long)3ll)))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165835))));
              }
              t__123067;
          }))
          , (__extension__ ({
              ::x10::regionarray::Region* t__123069 = r;
              if (!(((::x10aux::struct_equals(::x10aux::nullCheck(t__123069)->FMGL(rect),
                                              true)) && (::x10aux::struct_equals(::x10aux::nullCheck(t__123069)->FMGL(rank),
                                                                                 ((x10_long)3ll))))))
              {
                  ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::x10::regionarray::Array_Strings::sl__165836))));
              }
              t__123069;
          }))
          );
        
        //#line 1184 "x10/regionarray/Array.x10"
        return;
    }
    
    //#line 1187 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* srcRaw = ::x10aux::nullCheck(src)->FMGL(raw);
    
    //#line 1188 "x10/regionarray/Array.x10"
    if ((::x10aux::struct_equals(this->FMGL(region), ::x10aux::nullCheck(src)->FMGL(region))))
    {
        
        //#line 1190 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124634;
            for (p__124634 = ::x10aux::nullCheck(r)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124634));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124634));
                
                //#line 1191 "x10/regionarray/Array.x10"
                x10_long offset = this->FMGL(region)->indexOf(
                                    p);
                
                //#line 1192 "x10/regionarray/Array.x10"
                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                  offset, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                            offset));
            }
        }
        
    } else {
        
        //#line 1196 "x10/regionarray/Array.x10"
        ::x10::lang::Fun_0_1<x10_long, x10_long>* min = this->FMGL(region)->min();
        
        //#line 1197 "x10/regionarray/Array.x10"
        this->FMGL(region)->max();
        
        //#line 1198 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<x10_long>* delta =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_long> >()) ::x10::regionarray::Array<x10_long>());
        x10_long size__126044 = this->FMGL(rank);
        
        //#line 314 "x10/regionarray/Array.x10"
        ::x10::regionarray::RectRegion1D* myReg__126029 =
           (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
        (myReg__126029)->::x10::regionarray::RectRegion1D::_constructor(
          ((size__126044) - (((x10_long)1ll))));
        
        //#line 315 "x10/regionarray/Array.x10"
        delta->FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg__126029);
        delta->FMGL(rank) = ((x10_long)1ll);
        delta->FMGL(rect) = true;
        delta->FMGL(zeroBased) = true;
        delta->FMGL(rail) = true;
        delta->FMGL(size) = size__126044;
        
        //#line 317 "x10/regionarray/Array.x10"
        delta->FMGL(layout_min0) = delta->FMGL(layout_stride1) =
          delta->FMGL(layout_min1) = ((x10_long)0ll);
        
        //#line 318 "x10/regionarray/Array.x10"
        delta->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 319 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< x10_long >* r__126030 = ::x10::lang::Rail< x10_long >::_makeUnsafe(size__126044, false);
        
        //#line 320 "x10/regionarray/Array.x10"
        x10_long i__124566max__126026 = ((size__126044) - (((x10_long)1ll)));
        {
            x10_long i__126027;
            for (i__126027 = ((x10_long)0ll); ((i__126027) <= (i__124566max__126026));
                 i__126027 = ((i__126027) + (((x10_long)1ll))))
            {
                
                //#line 321 "x10/regionarray/Array.x10"
                r__126030->x10::lang::template Rail< x10_long >::__set(
                  i__126027, ((((this->FMGL(region)->max(
                                   i__126027)) - (this->FMGL(region)->min(
                                                    i__126027)))) + (((x10_long)1ll))));
            }
        }
        
        //#line 323 "x10/regionarray/Array.x10"
        delta->FMGL(raw) = r__126030;
        
        //#line 1199 "x10/regionarray/Array.x10"
        ::x10::lang::Fun_0_1<x10_long, x10_long>* srcMin =
          ::x10aux::nullCheck(src)->FMGL(region)->min();
        
        //#line 1200 "x10/regionarray/Array.x10"
        ::x10aux::nullCheck(src)->FMGL(region)->max();
        
        //#line 1201 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array<x10_long>* srcDelta =  (new (::x10aux::alloc_z< ::x10::regionarray::Array<x10_long> >()) ::x10::regionarray::Array<x10_long>());
        x10_long size__126045 = this->FMGL(rank);
        
        //#line 314 "x10/regionarray/Array.x10"
        ::x10::regionarray::RectRegion1D* myReg__126035 =
           (new (::x10aux::alloc_z< ::x10::regionarray::RectRegion1D>()) ::x10::regionarray::RectRegion1D());
        (myReg__126035)->::x10::regionarray::RectRegion1D::_constructor(
          ((size__126045) - (((x10_long)1ll))));
        
        //#line 315 "x10/regionarray/Array.x10"
        srcDelta->FMGL(region) = reinterpret_cast< ::x10::regionarray::Region*>(myReg__126035);
        srcDelta->FMGL(rank) = ((x10_long)1ll);
        srcDelta->FMGL(rect) = true;
        srcDelta->FMGL(zeroBased) = true;
        srcDelta->FMGL(rail) = true;
        srcDelta->FMGL(size) = size__126045;
        
        //#line 317 "x10/regionarray/Array.x10"
        srcDelta->FMGL(layout_min0) = srcDelta->FMGL(layout_stride1) =
          srcDelta->FMGL(layout_min1) = ((x10_long)0ll);
        
        //#line 318 "x10/regionarray/Array.x10"
        srcDelta->FMGL(layout) = (::x10aux::class_cast_unchecked< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        
        //#line 319 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< x10_long >* r__126036 = ::x10::lang::Rail< x10_long >::_makeUnsafe(size__126045, false);
        
        //#line 320 "x10/regionarray/Array.x10"
        x10_long i__124566max__126032 = ((size__126045) - (((x10_long)1ll)));
        {
            x10_long i__126033;
            for (i__126033 = ((x10_long)0ll); ((i__126033) <= (i__124566max__126032));
                 i__126033 = ((i__126033) + (((x10_long)1ll))))
            {
                
                //#line 321 "x10/regionarray/Array.x10"
                r__126036->x10::lang::template Rail< x10_long >::__set(
                  i__126033, ((((::x10aux::nullCheck(src)->FMGL(region)->max(
                                   i__126033)) - (::x10aux::nullCheck(src)->FMGL(region)->min(
                                                    i__126033)))) + (((x10_long)1ll))));
            }
        }
        
        //#line 323 "x10/regionarray/Array.x10"
        srcDelta->FMGL(raw) = r__126036;
        
        //#line 1202 "x10/regionarray/Array.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Point*>* p__124654;
            for (p__124654 = ::x10aux::nullCheck(r)->iterator();
                 ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(p__124654));
                 ) {
                ::x10::lang::Point* p = ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(p__124654));
                
                //#line 1203 "x10/regionarray/Array.x10"
                x10_long offset = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                      ((x10_long)0ll))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(min), 
                  ((x10_long)0ll))));
                
                //#line 1204 "x10/regionarray/Array.x10"
                x10_long srcOffset = ((::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                         ((x10_long)0ll))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(srcMin), 
                  ((x10_long)0ll))));
                
                //#line 1205 "x10/regionarray/Array.x10"
                x10_long i__124636max__126041 = ((this->FMGL(rank)) - (((x10_long)1ll)));
                {
                    x10_long i__126042;
                    for (i__126042 = ((x10_long)1ll); ((i__126042) <= (i__124636max__126041));
                         i__126042 = ((i__126042) + (((x10_long)1ll))))
                    {
                        
                        //#line 1206 "x10/regionarray/Array.x10"
                        offset = ((((((offset) * ((__extension__ ({
                            
                            //#line 442 "x10/regionarray/Array.x10"
                            x10_long ret__126038;
                            delta->FMGL(raw)->x10::lang::template Rail< x10_long >::__apply(
                              i__126042);
                        }))
                        ))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                 i__126042)))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(min), 
                          i__126042)));
                        
                        //#line 1207 "x10/regionarray/Array.x10"
                        srcOffset = ((((((srcOffset) * ((__extension__ ({
                            
                            //#line 442 "x10/regionarray/Array.x10"
                            x10_long ret__126040;
                            srcDelta->FMGL(raw)->x10::lang::template Rail< x10_long >::__apply(
                              i__126042);
                        }))
                        ))) + (::x10aux::nullCheck(p)->x10::lang::Point::__apply(
                                 i__126042)))) - (::x10::lang::Fun_0_1<x10_long, x10_long>::__apply(::x10aux::nullCheck(srcMin), 
                          i__126042)));
                    }
                }
                
                //#line 1209 "x10/regionarray/Array.x10"
                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                  offset, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                            srcOffset));
            }
        }
        
    }
    
}

//#line 1214 "x10/regionarray/Array.x10"
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::copy3(
  ::x10::regionarray::Array<TPMGL(T)>* src, ::x10::regionarray::Region* r) {
    
    //#line 1215 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< TPMGL(T) >* srcRaw = ::x10aux::nullCheck(src)->FMGL(raw);
    
    //#line 1216 "x10/regionarray/Array.x10"
    if ((::x10aux::struct_equals(this->FMGL(region), ::x10aux::nullCheck(src)->FMGL(region))))
    {
        
        //#line 1218 "x10/regionarray/Array.x10"
        x10_long k__124657min__126049 = ::x10aux::nullCheck(r)->min(
                                          ((x10_long)2ll));
        x10_long k__124657max__126050 = ::x10aux::nullCheck(r)->max(
                                          ((x10_long)2ll));
        x10_long j__124676min__126051 = ::x10aux::nullCheck(r)->min(
                                          ((x10_long)1ll));
        x10_long j__124676max__126052 = ::x10aux::nullCheck(r)->max(
                                          ((x10_long)1ll));
        x10_long i__124695min__126053 = ::x10aux::nullCheck(r)->min(
                                          ((x10_long)0ll));
        x10_long i__124695max__126054 = ::x10aux::nullCheck(r)->max(
                                          ((x10_long)0ll));
        {
            x10_long i__126055;
            for (i__126055 = i__124695min__126053; ((i__126055) <= (i__124695max__126054));
                 i__126055 = ((i__126055) + (((x10_long)1ll))))
            {
                {
                    x10_long j__126057;
                    for (j__126057 = j__124676min__126051;
                         ((j__126057) <= (j__124676max__126052));
                         j__126057 = ((j__126057) + (((x10_long)1ll))))
                    {
                        {
                            x10_long k__126059;
                            for (k__126059 = k__124657min__126049;
                                 ((k__126059) <= (k__124657max__126050));
                                 k__126059 = ((k__126059) + (((x10_long)1ll))))
                            {
                                
                                //#line 1219 "x10/regionarray/Array.x10"
                                x10_long offset__126046 =
                                  this->FMGL(region)->indexOf(
                                    (__extension__ ({
                                        ::x10::lang::Rail< x10_long >* r__126047 =
                                          (__extension__ ({
                                            ::x10::lang::Rail< x10_long >* t__165813 =
                                              ::x10::lang::Rail< x10_long >::_makeUnsafe(((x10_long)3ll), false);
                                            t__165813->x10::lang::template Rail< x10_long >::__set(
                                              ((x10_long)0ll),
                                              i__126055);
                                            t__165813->x10::lang::template Rail< x10_long >::__set(
                                              ((x10_long)1ll),
                                              j__126057);
                                            t__165813->x10::lang::template Rail< x10_long >::__set(
                                              ((x10_long)2ll),
                                              k__126059);
                                            t__165813;
                                        }))
                                        ;
                                        ::x10::lang::Point::make(
                                          r__126047);
                                    }))
                                    );
                                
                                //#line 1220 "x10/regionarray/Array.x10"
                                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                  offset__126046, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                    offset__126046));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
    } else {
        
        //#line 1223 "x10/regionarray/Array.x10"
        x10_long layout_stride2 = ::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                    ((x10_long)0ll));
        
        //#line 1224 "x10/regionarray/Array.x10"
        x10_long layout_stride3 = ::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                    ((x10_long)1ll));
        
        //#line 1226 "x10/regionarray/Array.x10"
        ::x10::regionarray::Array__LayoutHelper crh =  ::x10::regionarray::Array__LayoutHelper::_alloc();
        (crh)->::x10::regionarray::Array__LayoutHelper::_constructor(
          ::x10aux::nullCheck(src)->FMGL(region));
        
        //#line 1227 "x10/regionarray/Array.x10"
        x10_long src_min0 = crh->FMGL(min0);
        
        //#line 1228 "x10/regionarray/Array.x10"
        x10_long src_max0 = ::x10aux::nullCheck(src)->FMGL(region)->max(
                              ((x10_long)0ll));
        
        //#line 1229 "x10/regionarray/Array.x10"
        x10_long src_stride1 = crh->FMGL(stride1);
        
        //#line 1230 "x10/regionarray/Array.x10"
        x10_long src_min1 = crh->FMGL(min1);
        
        //#line 1231 "x10/regionarray/Array.x10"
        x10_long src_max1 = ::x10aux::nullCheck(src)->FMGL(region)->max(
                              ((x10_long)1ll));
        
        //#line 1232 "x10/regionarray/Array.x10"
        ::x10::lang::Rail< x10_long >* src_layout = crh->FMGL(layout);
        
        //#line 1233 "x10/regionarray/Array.x10"
        x10_long src_stride2 = ::x10aux::nullCheck(src_layout)->x10::lang::template Rail< x10_long >::__apply(
                                 ((x10_long)0ll));
        
        //#line 1234 "x10/regionarray/Array.x10"
        x10_long src_stride3 = ::x10aux::nullCheck(src_layout)->x10::lang::template Rail< x10_long >::__apply(
                                 ((x10_long)1ll));
        
        //#line 1235 "x10/regionarray/Array.x10"
        x10_long src_min2 = ::x10aux::nullCheck(src)->FMGL(region)->min(
                              ((x10_long)2ll));
        
        //#line 1236 "x10/regionarray/Array.x10"
        x10_long src_max2 = ::x10aux::nullCheck(src)->FMGL(region)->max(
                              ((x10_long)2ll));
        
        //#line 1238 "x10/regionarray/Array.x10"
        {
            x10_long i__126077;
            for (i__126077 = src_min0; ((i__126077) <= (src_max0));
                 i__126077 = ((i__126077) + (((x10_long)1ll))))
            {
                
                //#line 1239 "x10/regionarray/Array.x10"
                x10_long offset__126073 = ((((i__126077) - (this->FMGL(layout_min0)))) * (this->FMGL(layout_stride1)));
                
                //#line 1240 "x10/regionarray/Array.x10"
                x10_long srcOffset__126074 = ((((i__126077) - (src_min0))) * (src_stride1));
                
                //#line 1241 "x10/regionarray/Array.x10"
                {
                    x10_long i__126071;
                    for (i__126071 = src_min1; ((i__126071) <= (src_max1));
                         i__126071 = ((i__126071) + (((x10_long)1ll))))
                    {
                        
                        //#line 1242 "x10/regionarray/Array.x10"
                        x10_long offset__126067 = ((((((offset__126073) + (i__126071))) - (this->FMGL(layout_min1)))) * (layout_stride2));
                        
                        //#line 1243 "x10/regionarray/Array.x10"
                        x10_long srcOffset__126068 = ((((((srcOffset__126074) + (i__126071))) - (src_min1))) * (src_stride2));
                        
                        //#line 1244 "x10/regionarray/Array.x10"
                        {
                            x10_long i__126065;
                            for (i__126065 = src_min2; ((i__126065) <= (src_max2));
                                 i__126065 = ((i__126065) + (((x10_long)1ll))))
                            {
                                
                                //#line 1245 "x10/regionarray/Array.x10"
                                x10_long offset__126061 =
                                  ((((offset__126067) + (i__126065))) - (layout_stride3));
                                
                                //#line 1246 "x10/regionarray/Array.x10"
                                x10_long srcOffset__126062 =
                                  ((((srcOffset__126068) + (i__126065))) - (src_stride3));
                                
                                //#line 1247 "x10/regionarray/Array.x10"
                                this->FMGL(raw)->x10::lang::template Rail< TPMGL(T) >::__set(
                                  offset__126061, srcRaw->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                    srcOffset__126062));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
}

//#line 1254 "x10/regionarray/Array.x10"

//#line 1257 "x10/regionarray/Array.x10"

//#line 1260 "x10/regionarray/Array.x10"

//#line 1263 "x10/regionarray/Array.x10"

//#line 1266 "x10/regionarray/Array.x10"

//#line 1277 "x10/regionarray/Array.x10"

//#line 1278 "x10/regionarray/Array.x10"

//#line 1279 "x10/regionarray/Array.x10"

//#line 1287 "x10/regionarray/Array.x10"

//#line 1290 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  x10_long i0) {
    return ((i0) - (this->FMGL(layout_min0)));
    
}

//#line 1293 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  x10_long i0, x10_long i1) {
    
    //#line 1294 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 1295 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 1296 "x10/regionarray/Array.x10"
    return offset;
    
}

//#line 1299 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  x10_long i0, x10_long i1, x10_long i2) {
    
    //#line 1300 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 1301 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 1302 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                  ((x10_long)1ll))));
    
    //#line 1303 "x10/regionarray/Array.x10"
    return offset;
    
}

//#line 1306 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  x10_long i0, x10_long i1, x10_long i2, x10_long i3) {
    
    //#line 1307 "x10/regionarray/Array.x10"
    x10_long offset = ((i0) - (this->FMGL(layout_min0)));
    
    //#line 1308 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (i1))) - (this->FMGL(layout_min1)));
    
    //#line 1309 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                ((x10_long)0ll))))) + (i2))) - (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                  ((x10_long)1ll))));
    
    //#line 1310 "x10/regionarray/Array.x10"
    offset = ((((((offset) * (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                ((x10_long)2ll))))) + (i3))) - (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                  ((x10_long)3ll))));
    
    //#line 1311 "x10/regionarray/Array.x10"
    return offset;
    
}

//#line 1314 "x10/regionarray/Array.x10"
template<class TPMGL(T)> x10_long x10::regionarray::Array<TPMGL(T)>::offset(
  ::x10::lang::Point* pt) {
    
    //#line 1315 "x10/regionarray/Array.x10"
    x10_long offset = ((::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                          ((x10_long)(((x10_int)0))))) - (this->FMGL(layout_min0)));
    
    //#line 1316 "x10/regionarray/Array.x10"
    if (((::x10aux::nullCheck(pt)->FMGL(rank)) > (((x10_long)1ll))))
    {
        
        //#line 1317 "x10/regionarray/Array.x10"
        offset = ((((((offset) * (this->FMGL(layout_stride1)))) + (::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                                                     ((x10_long)1ll))))) - (this->FMGL(layout_min1)));
        
        //#line 1318 "x10/regionarray/Array.x10"
        x10_long i__124769max__126079 = ((::x10aux::nullCheck(pt)->FMGL(rank)) - (((x10_long)1ll)));
        {
            x10_long i__126080;
            for (i__126080 = ((x10_long)2ll); ((i__126080) <= (i__124769max__126079));
                 i__126080 = ((i__126080) + (((x10_long)1ll))))
            {
                
                //#line 1319 "x10/regionarray/Array.x10"
                offset = ((((((offset) * (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                            ((((x10_long)2ll)) * (((i__126080) - (((x10_long)2ll))))))))) + (::x10aux::nullCheck(pt)->x10::lang::Point::__apply(
                                                                                                               i__126080)))) - (::x10aux::nullCheck(this->FMGL(layout))->x10::lang::template Rail< x10_long >::__apply(
                                                                                                                                  ((((((x10_long)2ll)) * (((i__126080) - (((x10_long)2ll)))))) + (((x10_long)1ll))))));
            }
        }
        
    }
    
    //#line 1322 "x10/regionarray/Array.x10"
    return offset;
    
}

//#line 55 "x10/regionarray/Array.x10"
template<class TPMGL(T)> ::x10::regionarray::Array<TPMGL(T)>*
  x10::regionarray::Array<TPMGL(T)>::x10__regionarray__Array____this__x10__regionarray__Array(
  ) {
    return this;
    
}
template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::__fieldInitializers_x10_regionarray_Array(
  ) {
 
}
template<class TPMGL(T)> const ::x10aux::serialization_id_t x10::regionarray::Array<TPMGL(T)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::regionarray::Array<TPMGL(T)>::_deserializer);

template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(raw));
    buf.write(this->FMGL(layout_min0));
    buf.write(this->FMGL(layout_stride1));
    buf.write(this->FMGL(layout_min1));
    buf.write(this->FMGL(layout));
    buf.write(this->FMGL(region));
    buf.write(this->FMGL(rank));
    buf.write(this->FMGL(rect));
    buf.write(this->FMGL(zeroBased));
    buf.write(this->FMGL(rail));
    buf.write(this->FMGL(size));
    
}

template<class TPMGL(T)> ::x10::lang::Reference* ::x10::regionarray::Array<TPMGL(T)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::regionarray::Array<TPMGL(T)>* this_ = new (::x10aux::alloc_z< ::x10::regionarray::Array<TPMGL(T)> >()) ::x10::regionarray::Array<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void x10::regionarray::Array<TPMGL(T)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(raw) = buf.read< ::x10::lang::Rail< TPMGL(T) >*>();
    FMGL(layout_min0) = buf.read<x10_long>();
    FMGL(layout_stride1) = buf.read<x10_long>();
    FMGL(layout_min1) = buf.read<x10_long>();
    FMGL(layout) = buf.read< ::x10::lang::Rail< x10_long >*>();
    FMGL(region) = buf.read< ::x10::regionarray::Region*>();
    FMGL(rank) = buf.read<x10_long>();
    FMGL(rect) = buf.read<x10_boolean>();
    FMGL(zeroBased) = buf.read<x10_boolean>();
    FMGL(rail) = buf.read<x10_boolean>();
    FMGL(size) = buf.read<x10_long>();
}

template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                       ::x10::regionarray::RemoteArray<TPMGL(T)>* dst) {
    
    //#line 904 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), ((x10_long)0ll),
      ::x10aux::nullCheck(dst)->FMGL(rawData), ((x10_long)0ll),
      (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(raw))->FMGL(size)));
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                       ::x10::lang::Point* srcPoint,
                                                                       ::x10::regionarray::RemoteArray<TPMGL(T)>* dst,
                                                                       ::x10::lang::Point* dstPoint,
                                                                       x10_long numElems) {
    
    //#line 937 "x10/regionarray/Array.x10"
    ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra =
      ::x10aux::nullCheck(dst)->FMGL(array);
    
    //#line 938 "x10/regionarray/Array.x10"
    x10_long dstIndex = ::x10::xrx::Runtime::template evalAt< x10_long >(
                          ::x10::lang::Place::_make(((x10_long)((gra)->location))),
                          reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(x10_regionarray_Array__closure__1<TPMGL(T)>)))x10_regionarray_Array__closure__1<TPMGL(T)>(gra, dstPoint))),
                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 939 "x10/regionarray/Array.x10"
    x10_long srcIndex__126011 = ::x10aux::nullCheck(src)->FMGL(region)->indexOf(
                                  srcPoint);
    
    //#line 981 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), srcIndex__126011,
      ::x10aux::nullCheck(dst)->FMGL(rawData), dstIndex, numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                       x10_long srcIndex,
                                                                       ::x10::regionarray::RemoteArray<TPMGL(T)>* dst,
                                                                       x10_long dstIndex,
                                                                       x10_long numElems) {
    
    //#line 981 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), srcIndex, ::x10aux::nullCheck(dst)->FMGL(rawData),
      dstIndex, numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                                       ::x10::regionarray::Array<TPMGL(T)>* dst) {
    
    //#line 1007 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(rawData), ((x10_long)0ll),
      ::x10aux::nullCheck(dst)->FMGL(raw), ((x10_long)0ll),
      (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(dst)->FMGL(raw))->FMGL(size)));
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                                       ::x10::lang::Point* srcPoint,
                                                                       ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                                       ::x10::lang::Point* dstPoint,
                                                                       x10_long numElems) {
    
    //#line 1040 "x10/regionarray/Array.x10"
    ::x10::lang::GlobalRef< ::x10::regionarray::Array<TPMGL(T)>* > gra =
      ::x10aux::nullCheck(src)->FMGL(array);
    
    //#line 1041 "x10/regionarray/Array.x10"
    x10_long srcIndex = ::x10::xrx::Runtime::template evalAt< x10_long >(
                          ::x10::lang::Place::_make(((x10_long)((gra)->location))),
                          reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(x10_regionarray_Array__closure__2<TPMGL(T)>)))x10_regionarray_Array__closure__2<TPMGL(T)>(gra, srcPoint))),
                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    
    //#line 1042 "x10/regionarray/Array.x10"
    x10_long dstIndex__126018 = ::x10aux::nullCheck(dst)->FMGL(region)->indexOf(
                                  dstPoint);
    
    //#line 1084 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(rawData), srcIndex, ::x10aux::nullCheck(dst)->FMGL(raw),
      dstIndex__126018, numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::asyncCopy(::x10::regionarray::RemoteArray<TPMGL(T)>* src,
                                                                       x10_long srcIndex,
                                                                       ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                                       x10_long dstIndex,
                                                                       x10_long numElems) {
    
    //#line 1084 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template asyncCopy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(rawData), srcIndex, ::x10aux::nullCheck(dst)->FMGL(raw),
      dstIndex, numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                  ::x10::regionarray::Array<TPMGL(T)>* dst) {
    
    //#line 1100 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), ((x10_long)0ll),
      ::x10aux::nullCheck(dst)->FMGL(raw), ((x10_long)0ll),
      (x10_long)(::x10aux::nullCheck(::x10aux::nullCheck(src)->FMGL(raw))->FMGL(size)));
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                  ::x10::lang::Point* srcPoint,
                                                                  ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                                  ::x10::lang::Point* dstPoint,
                                                                  x10_long numElems) {
    
    //#line 1124 "x10/regionarray/Array.x10"
    x10_long srcIndex__126021 = ::x10aux::nullCheck(src)->FMGL(region)->indexOf(
                                  srcPoint);
    x10_long dstIndex__126023 = ::x10aux::nullCheck(dst)->FMGL(region)->indexOf(
                                  dstPoint);
    
    //#line 1157 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), srcIndex__126021,
      ::x10aux::nullCheck(dst)->FMGL(raw), dstIndex__126023,
      numElems);
}
template<class TPMGL(T)> void x10::regionarray::Array<void>::copy(::x10::regionarray::Array<TPMGL(T)>* src,
                                                                  x10_long srcIndex,
                                                                  ::x10::regionarray::Array<TPMGL(T)>* dst,
                                                                  x10_long dstIndex,
                                                                  x10_long numElems) {
    
    //#line 1157 "x10/regionarray/Array.x10"
    ::x10::lang::Rail< void >::template copy< TPMGL(T) >(
      ::x10aux::nullCheck(src)->FMGL(raw), srcIndex, ::x10aux::nullCheck(dst)->FMGL(raw),
      dstIndex, numElems);
}
#endif // X10_REGIONARRAY_ARRAY_H_IMPLEMENTATION
#endif // __X10_REGIONARRAY_ARRAY_H_NODEPS
