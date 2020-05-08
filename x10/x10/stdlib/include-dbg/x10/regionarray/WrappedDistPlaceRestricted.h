#ifndef __X10_REGIONARRAY_WRAPPEDDISTPLACERESTRICTED_H
#define __X10_REGIONARRAY_WRAPPEDDISTPLACERESTRICTED_H

#include <x10rt.h>


#define X10_REGIONARRAY_DIST_H_NODEPS
#include <x10/regionarray/Dist.h>
#undef X10_REGIONARRAY_DIST_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
#define X10_LANG_PLACE_H_NODEPS
#include <x10/lang/Place.h>
#undef X10_LANG_PLACE_H_NODEPS
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
class SparsePlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace regionarray { 
class WrappedDistRegionRestricted;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace regionarray { 

class WrappedDistPlaceRestricted_Strings {
  public:
    static ::x10::lang::String sl__157542;
    static ::x10::lang::String sl__157543;
};

class WrappedDistPlaceRestricted : public ::x10::regionarray::Dist   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[4];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Fun_0_1< ::x10::lang::Point*, ::x10::lang::Place>::itable< ::x10::regionarray::WrappedDistPlaceRestricted > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::regionarray::WrappedDistPlaceRestricted > _itable_1;
    
    static ::x10::lang::Iterable< ::x10::lang::Point*>::itable< ::x10::regionarray::WrappedDistPlaceRestricted > _itable_2;
    
    ::x10::regionarray::Dist* FMGL(base);
    
    ::x10::lang::Place FMGL(filter);
    
    void _constructor(::x10::regionarray::Dist* d, ::x10::lang::Place p);
    
    static ::x10::regionarray::WrappedDistPlaceRestricted* _make(::x10::regionarray::Dist* d,
                                                                 ::x10::lang::Place p);
    
    virtual ::x10::lang::PlaceGroup* places();
    virtual x10_long numPlaces();
    virtual ::x10::lang::Iterable< ::x10::regionarray::Region*>* regions(
      );
    virtual ::x10::regionarray::Region* get(::x10::lang::Place p);
    virtual ::x10::regionarray::Region* __apply(::x10::lang::Place p);
    virtual ::x10::lang::Place __apply(::x10::lang::Point* pt);
    virtual ::x10::lang::Place __apply(x10_long i0);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1, x10_long i2);
    virtual ::x10::lang::Place __apply(x10_long i0, x10_long i1, x10_long i2,
                                       x10_long i3);
    virtual ::x10::regionarray::Dist* restriction(::x10::regionarray::Region* r);
    virtual ::x10::regionarray::Dist* restriction(::x10::lang::Place p);
    virtual x10_boolean equals(::x10::lang::Any* thatObj);
    virtual ::x10::regionarray::WrappedDistPlaceRestricted* x10__regionarray__WrappedDistPlaceRestricted____this__x10__regionarray__WrappedDistPlaceRestricted(
      );
    virtual void __fieldInitializers_x10_regionarray_WrappedDistPlaceRestricted(
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
#endif // X10_REGIONARRAY_WRAPPEDDISTPLACERESTRICTED_H

namespace x10 { namespace regionarray { 
class WrappedDistPlaceRestricted;
} } 

#ifndef X10_REGIONARRAY_WRAPPEDDISTPLACERESTRICTED_H_NODEPS
#define X10_REGIONARRAY_WRAPPEDDISTPLACERESTRICTED_H_NODEPS
#ifndef X10_REGIONARRAY_WRAPPEDDISTPLACERESTRICTED_H_GENERICS
#define X10_REGIONARRAY_WRAPPEDDISTPLACERESTRICTED_H_GENERICS
#endif // X10_REGIONARRAY_WRAPPEDDISTPLACERESTRICTED_H_GENERICS
#endif // __X10_REGIONARRAY_WRAPPEDDISTPLACERESTRICTED_H_NODEPS
