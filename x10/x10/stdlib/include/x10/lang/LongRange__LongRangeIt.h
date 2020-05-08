#ifndef __X10_LANG_LONGRANGE__LONGRANGEIT_H
#define __X10_LANG_LONGRANGE__LONGRANGEIT_H

#include <x10rt.h>


#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class LongRange__LongRangeIt : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static ::x10aux::itable_entry _itables[3];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    static ::x10::lang::Iterator<x10_long>::itable< ::x10::lang::LongRange__LongRangeIt > _itable_0;
    
    static ::x10::lang::Any::itable< ::x10::lang::LongRange__LongRangeIt > _itable_1;
    
    x10_long FMGL(cur);
    
    x10_long FMGL(max);
    
    void _constructor(x10_long min, x10_long max);
    
    static ::x10::lang::LongRange__LongRangeIt* _make(x10_long min, x10_long max);
    
    virtual x10_boolean hasNext();
    virtual x10_long next();
    virtual ::x10::lang::LongRange__LongRangeIt* x10__lang__LongRange__LongRangeIt____this__x10__lang__LongRange__LongRangeIt(
      );
    virtual void __fieldInitializers_x10_lang_LongRange_LongRangeIt(
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


} } 
#endif // X10_LANG_LONGRANGE__LONGRANGEIT_H

namespace x10 { namespace lang { 
class LongRange__LongRangeIt;
} } 

#ifndef X10_LANG_LONGRANGE__LONGRANGEIT_H_NODEPS
#define X10_LANG_LONGRANGE__LONGRANGEIT_H_NODEPS
#ifndef X10_LANG_LONGRANGE__LONGRANGEIT_H_GENERICS
#define X10_LANG_LONGRANGE__LONGRANGEIT_H_GENERICS
#endif // X10_LANG_LONGRANGE__LONGRANGEIT_H_GENERICS
#endif // __X10_LANG_LONGRANGE__LONGRANGEIT_H_NODEPS
