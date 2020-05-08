#ifndef __X10_ARRAY_LOCALSTATE_BB3_H
#define __X10_ARRAY_LOCALSTATE_BB3_H

#include <x10rt.h>


#define X10_ARRAY_LOCALSTATE_H_NODEPS
#include <x10/array/LocalState.h>
#undef X10_ARRAY_LOCALSTATE_H_NODEPS
namespace x10 { namespace array { 
class Dist_BlockBlock_3;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(Z3), class TPMGL(U)>
class Fun_0_3;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_3;
} } 
namespace x10 { namespace lang { 
class Unsafe;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace array { 

template<class TPMGL(S)> class LocalState_BB3;
template <> class LocalState_BB3<void>;
template<class TPMGL(S)> class LocalState_BB3 : public ::x10::array::LocalState<TPMGL(S)>
  {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::array::Dist_BlockBlock_3* FMGL(dist);
    
    void _constructor(::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
                      x10_long size, ::x10::array::Dist_BlockBlock_3* d);
    
    static ::x10::array::LocalState_BB3<TPMGL(S)>* _make(
             ::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
             x10_long size, ::x10::array::Dist_BlockBlock_3* d);
    
    virtual ::x10::array::LocalState_BB3<TPMGL(S)>* x10__array__LocalState_BB3____this__x10__array__LocalState_BB3(
      );
    virtual void __fieldInitializers_x10_array_LocalState_BB3(
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

template<class TPMGL(S)> ::x10aux::RuntimeType x10::array::LocalState_BB3<TPMGL(S)>::rtt;
template<class TPMGL(S)> void x10::array::LocalState_BB3<TPMGL(S)>::_initRTT() {
    const ::x10aux::RuntimeType *canonical = ::x10aux::getRTT< ::x10::array::LocalState_BB3<void> >();
    if (rtt.initStageOne(canonical)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::x10::array::LocalState<TPMGL(S)> >()};
    const ::x10aux::RuntimeType* params[1] = { ::x10aux::getRTT<TPMGL(S)>()};
    ::x10aux::RuntimeType::Variance variances[1] = { ::x10aux::RuntimeType::invariant};
    const char *baseName = "x10.array.LocalState_BB3";
    rtt.initStageTwo(baseName, ::x10aux::RuntimeType::class_kind, 1, parents, 1, params, variances);
}

template <> class LocalState_BB3<void> : public ::x10::array::LocalState<void>
{
    public:
    static ::x10aux::RuntimeType rtt;
    static const ::x10aux::RuntimeType* getRTT() { return & rtt; }
    template<class TPMGL(S)> static ::x10::array::LocalState_BB3<TPMGL(S)>*
      make(::x10::lang::PlaceGroup* pg, x10_long m, x10_long n,
           x10_long p, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(S)>* init);
    
    
};

} } 
#endif // X10_ARRAY_LOCALSTATE_BB3_H

namespace x10 { namespace array { 
template<class TPMGL(S)> class LocalState_BB3;
} } 

#ifndef X10_ARRAY_LOCALSTATE_BB3_H_NODEPS
#define X10_ARRAY_LOCALSTATE_BB3_H_NODEPS
#include <x10/array/LocalState.h>
#include <x10/array/Dist_BlockBlock_3.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Fun_0_3.h>
#include <x10/array/DenseIterationSpace_3.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Unsafe.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_ARRAY_LOCALSTATE_BB3_H_GENERICS
#define X10_ARRAY_LOCALSTATE_BB3_H_GENERICS
#endif // X10_ARRAY_LOCALSTATE_BB3_H_GENERICS
#ifndef X10_ARRAY_LOCALSTATE_BB3_H_IMPLEMENTATION
#define X10_ARRAY_LOCALSTATE_BB3_H_IMPLEMENTATION
#include <x10/array/LocalState_BB3.h>


//#line 286 "x10/array/DistArray_BlockBlock_3.x10"

//#line 288 "x10/array/DistArray_BlockBlock_3.x10"
template<class TPMGL(S)> void x10::array::LocalState_BB3<TPMGL(S)>::_constructor(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
                           x10_long size, ::x10::array::Dist_BlockBlock_3* d) {
    
    //#line 290 "x10/array/DistArray_BlockBlock_3.x10"
    ::x10::array::LocalState<TPMGL(S)>* this__102087 = this;
    
    //#line 301 "x10/array/DistArray.x10"
    ::x10aux::nullCheck(this__102087)->FMGL(pg) = pg;
    ::x10aux::nullCheck(this__102087)->FMGL(rail) = data;
    ::x10aux::nullCheck(this__102087)->FMGL(size) = size;
    
    //#line 288 "x10/array/DistArray_BlockBlock_3.x10"
    
    //#line 291 "x10/array/DistArray_BlockBlock_3.x10"
    this->FMGL(dist) = d;
}
template<class TPMGL(S)> ::x10::array::LocalState_BB3<TPMGL(S)>* x10::array::LocalState_BB3<TPMGL(S)>::_make(
                           ::x10::lang::PlaceGroup* pg, ::x10::lang::Rail< TPMGL(S) >* data,
                           x10_long size, ::x10::array::Dist_BlockBlock_3* d)
{
    ::x10::array::LocalState_BB3<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::array::LocalState_BB3<TPMGL(S)> >()) ::x10::array::LocalState_BB3<TPMGL(S)>();
    this_->_constructor(pg, data, size, d);
    return this_;
}



//#line 294 "x10/array/DistArray_BlockBlock_3.x10"

//#line 285 "x10/array/DistArray_BlockBlock_3.x10"
template<class TPMGL(S)> ::x10::array::LocalState_BB3<TPMGL(S)>*
  x10::array::LocalState_BB3<TPMGL(S)>::x10__array__LocalState_BB3____this__x10__array__LocalState_BB3(
  ) {
    return this;
    
}
template<class TPMGL(S)> void x10::array::LocalState_BB3<TPMGL(S)>::__fieldInitializers_x10_array_LocalState_BB3(
  ) {
 
}
template<class TPMGL(S)> const ::x10aux::serialization_id_t x10::array::LocalState_BB3<TPMGL(S)>::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::x10::array::LocalState_BB3<TPMGL(S)>::_deserializer);

template<class TPMGL(S)> void x10::array::LocalState_BB3<TPMGL(S)>::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::x10::array::LocalState<TPMGL(S)>::_serialize_body(buf);
    buf.write(this->FMGL(dist));
    
}

template<class TPMGL(S)> ::x10::lang::Reference* ::x10::array::LocalState_BB3<TPMGL(S)>::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::x10::array::LocalState_BB3<TPMGL(S)>* this_ = new (::x10aux::alloc_z< ::x10::array::LocalState_BB3<TPMGL(S)> >()) ::x10::array::LocalState_BB3<TPMGL(S)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(S)> void x10::array::LocalState_BB3<TPMGL(S)>::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::x10::array::LocalState<TPMGL(S)>::_deserialize_body(buf);
    FMGL(dist) = buf.read< ::x10::array::Dist_BlockBlock_3*>();
}

template<class TPMGL(S)> ::x10::array::LocalState_BB3<TPMGL(S)>*
  x10::array::LocalState_BB3<void>::make(::x10::lang::PlaceGroup* pg,
                                         x10_long m, x10_long n,
                                         x10_long p, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(S)>* init) {
    
    //#line 295 "x10/array/DistArray_BlockBlock_3.x10"
    ::x10::array::DenseIterationSpace_3* globalSpace =  (new (::x10aux::alloc_z< ::x10::array::DenseIterationSpace_3>()) ::x10::array::DenseIterationSpace_3());
    (globalSpace)->::x10::array::DenseIterationSpace_3::_constructor(
      ((x10_long)0ll), ((x10_long)0ll), ((x10_long)0ll), ((m) - (((x10_long)1ll))),
      ((n) - (((x10_long)1ll))), ((p) - (((x10_long)1ll))));
    
    //#line 296 "x10/array/DistArray_BlockBlock_3.x10"
    ::x10::array::Dist_BlockBlock_3* dist =  (new (::x10aux::alloc_z< ::x10::array::Dist_BlockBlock_3>()) ::x10::array::Dist_BlockBlock_3());
    (dist)->::x10::array::Dist_BlockBlock_3::_constructor(
      pg, globalSpace);
    
    //#line 298 "x10/array/DistArray_BlockBlock_3.x10"
    ::x10::lang::Rail< TPMGL(S) >* data;
    
    //#line 299 "x10/array/DistArray_BlockBlock_3.x10"
    if (dist->FMGL(localIndices)->x10::array::DenseIterationSpace_3::isEmpty())
    {
        
        //#line 300 "x10/array/DistArray_BlockBlock_3.x10"
        data = ::x10::lang::Rail< TPMGL(S) >::_make();
    } else {
        
        //#line 302 "x10/array/DistArray_BlockBlock_3.x10"
        x10_long low1 = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_3::min(
                          ((x10_long)0ll));
        
        //#line 303 "x10/array/DistArray_BlockBlock_3.x10"
        x10_long hi1 = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_3::max(
                         ((x10_long)0ll));
        
        //#line 304 "x10/array/DistArray_BlockBlock_3.x10"
        x10_long low2 = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_3::min(
                          ((x10_long)1ll));
        
        //#line 305 "x10/array/DistArray_BlockBlock_3.x10"
        x10_long hi2 = dist->FMGL(localIndices)->x10::array::DenseIterationSpace_3::max(
                         ((x10_long)1ll));
        
        //#line 307 "x10/array/DistArray_BlockBlock_3.x10"
        x10_long hi3 = ((p) - (((x10_long)1ll)));
        
        //#line 308 "x10/array/DistArray_BlockBlock_3.x10"
        x10_long localSize1 = ((((hi1) - (low1))) + (((x10_long)1ll)));
        
        //#line 309 "x10/array/DistArray_BlockBlock_3.x10"
        x10_long localSize2 = ((((hi2) - (low2))) + (((x10_long)1ll)));
        
        //#line 311 "x10/array/DistArray_BlockBlock_3.x10"
        x10_long dataSize = ((((localSize1) * (localSize2))) * (p));
        
        //#line 312 "x10/array/DistArray_BlockBlock_3.x10"
        data = ::x10::lang::Rail< TPMGL(S) >::_makeUnsafe(dataSize, false);
        
        //#line 313 "x10/array/DistArray_BlockBlock_3.x10"
        {
            x10_long i__102101;
            for (i__102101 = low1; ((i__102101) <= (hi1));
                 i__102101 = ((i__102101) + (((x10_long)1ll))))
            {
                
                //#line 314 "x10/array/DistArray_BlockBlock_3.x10"
                {
                    x10_long i__102097;
                    for (i__102097 = low2; ((i__102097) <= (hi2));
                         i__102097 = ((i__102097) + (((x10_long)1ll))))
                    {
                        
                        //#line 315 "x10/array/DistArray_BlockBlock_3.x10"
                        {
                            x10_long i__102093;
                            for (i__102093 = ((x10_long)0ll);
                                 ((i__102093) <= (hi3)); i__102093 =
                                                           ((i__102093) + (((x10_long)1ll))))
                            {
                                
                                //#line 316 "x10/array/DistArray_BlockBlock_3.x10"
                                x10_long offset__102091 =
                                  ((i__102093) + (((p) * (((((i__102097) - (low2))) + (((localSize2) * (((i__102101) - (low1))))))))));
                                
                                //#line 317 "x10/array/DistArray_BlockBlock_3.x10"
                                data->x10::lang::template Rail< TPMGL(S) >::__set(
                                  offset__102091, ::x10::lang::Fun_0_3<x10_long, x10_long, x10_long, TPMGL(S)>::__apply(::x10aux::nullCheck(init), 
                                    i__102101, i__102097,
                                    i__102093));
                            }
                        }
                        
                    }
                }
                
            }
        }
        
    }
    
    //#line 322 "x10/array/DistArray_BlockBlock_3.x10"
    ::x10::array::LocalState_BB3<TPMGL(S)>* alloc__102103 =
       (new (::x10aux::alloc_z< ::x10::array::LocalState_BB3<TPMGL(S)> >()) ::x10::array::LocalState_BB3<TPMGL(S)>());
    (alloc__102103)->::x10::array::LocalState_BB3<TPMGL(S)>::_constructor(
      pg, data, ((m) * (n)), dist);
    return alloc__102103;
    
}
#endif // X10_ARRAY_LOCALSTATE_BB3_H_IMPLEMENTATION
#endif // __X10_ARRAY_LOCALSTATE_BB3_H_NODEPS
