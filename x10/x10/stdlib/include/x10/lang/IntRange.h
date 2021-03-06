#ifndef __X10_LANG_INTRANGE_H
#define __X10_LANG_INTRANGE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace array { 
class DenseIterationSpace_2;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class IntRange__IntRangeIt;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class IntRange_Strings {
  public:
    static ::x10::lang::String sl__165139;
};

class IntRange   {
    public:
    RTT_H_DECLS_STRUCT
    
    ::x10::lang::IntRange* operator->() { return this; }
    
    x10_int FMGL(min);
    
    x10_int FMGL(max);
    
    static ::x10aux::itable_entry _itables[3];
    
    ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Any::itable< ::x10::lang::IntRange > _itable_0;
    
    static ::x10::lang::Iterable<x10_int>::itable< ::x10::lang::IntRange > _itable_1;
    
    static ::x10aux::itable_entry _iboxitables[3];
    
    ::x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static ::x10::lang::IntRange _alloc(){::x10::lang::IntRange t; return t; }
    
    void _constructor(x10_int min, x10_int max) {
        
        //#line 37 "x10/lang/IntRange.x10"
        FMGL(min) = min;
        FMGL(max) = max;
        
    }
    static ::x10::lang::IntRange _make(x10_int min, x10_int max) {
        ::x10::lang::IntRange this_; 
        this_->_constructor(min, max);
        return this_;
    }
    
    static ::x10::lang::IntRange __convert(::x10::lang::LongRange x);
    ::x10::lang::Rail< ::x10::lang::IntRange >* split(x10_int n);
    ::x10::array::DenseIterationSpace_2* __times(::x10::lang::IntRange that);
    ::x10::lang::String* toString();
    x10_boolean equals(::x10::lang::Any* that);
    x10_int hashCode();
    ::x10::lang::Iterator<x10_int>* iterator();
    ::x10::lang::String* typeName();
    x10_boolean _struct_equals(::x10::lang::Any* other);
    x10_boolean _struct_equals(::x10::lang::IntRange other) {
        return ((::x10aux::struct_equals((*this)->FMGL(min), other->FMGL(min))) &&
        (::x10aux::struct_equals((*this)->FMGL(max), other->FMGL(max))));
        
    }
    ::x10::lang::IntRange x10__lang__IntRange____this__x10__lang__IntRange(
      ) {
        return (*this);
        
    }
    void __fieldInitializers_x10_lang_IntRange() {
     
    }
    
    static void _serialize(::x10::lang::IntRange this_, ::x10aux::serialization_buffer& buf);
    
    static ::x10::lang::IntRange _deserialize(::x10aux::deserialization_buffer& buf) {
        ::x10::lang::IntRange this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};


} } 
#endif // X10_LANG_INTRANGE_H

namespace x10 { namespace lang { 
class IntRange;
} } 

#ifndef X10_LANG_INTRANGE_H_NODEPS
#define X10_LANG_INTRANGE_H_NODEPS
#ifndef X10_LANG_INTRANGE_H_GENERICS
#define X10_LANG_INTRANGE_H_GENERICS
#endif // X10_LANG_INTRANGE_H_GENERICS
#endif // __X10_LANG_INTRANGE_H_NODEPS
