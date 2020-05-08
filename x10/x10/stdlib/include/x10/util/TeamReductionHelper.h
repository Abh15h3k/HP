#ifndef __X10_UTIL_TEAMREDUCTIONHELPER_H
#define __X10_UTIL_TEAMREDUCTIONHELPER_H

#include <x10rt.h>


namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace lang { 
class Complex;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Arithmetic;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Bitwise;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class Ordered;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace util { 

class TeamReductionHelper_Strings {
  public:
    static ::x10::lang::String sl__171265;
    static ::x10::lang::String sl__171270;
    static ::x10::lang::String sl__171263;
    static ::x10::lang::String sl__171266;
    static ::x10::lang::String sl__171273;
    static ::x10::lang::String sl__171271;
    static ::x10::lang::String sl__171269;
    static ::x10::lang::String sl__171272;
    static ::x10::lang::String sl__171262;
    static ::x10::lang::String sl__171267;
    static ::x10::lang::String sl__171264;
    static ::x10::lang::String sl__171268;
};

class TeamReductionHelper : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    template<class TPMGL(T)> static void performReduction(::x10::lang::Rail< TPMGL(T) >* src,
                                                          x10_long src_off,
                                                          ::x10::lang::Rail< TPMGL(T) >* dst,
                                                          x10_long dst_off,
                                                          x10_long count,
                                                          x10_int operation);
    static void reduce(::x10::lang::Rail< x10_double >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_double >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_float >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_float >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_complex >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_complex >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_long >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_long >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_int >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_int >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_short >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_short >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_byte >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_byte >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    static void reduce(::x10::lang::Rail< x10_boolean >* src,
                       x10_long src_off, ::x10::lang::Rail< x10_boolean >* dst,
                       x10_long dst_off, x10_long count, x10_int operation);
    template<class TPMGL(T)> static void reduce(::x10::lang::Rail< TPMGL(T) >* src,
                                                x10_long src_off,
                                                ::x10::lang::Rail< TPMGL(T) >* dst,
                                                x10_long dst_off,
                                                x10_long count,
                                                x10_int operation);
    virtual ::x10::util::TeamReductionHelper* x10__util__TeamReductionHelper____this__x10__util__TeamReductionHelper(
      );
    void _constructor();
    
    static ::x10::util::TeamReductionHelper* _make();
    
    virtual void __fieldInitializers_x10_util_TeamReductionHelper(
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
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H

namespace x10 { namespace util { 
class TeamReductionHelper;
} } 

#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_NODEPS
#define X10_UTIL_TEAMREDUCTIONHELPER_H_NODEPS
#include <x10/lang/Rail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Any.h>
#include <x10/lang/Double.h>
#include <x10/lang/Float.h>
#include <x10/lang/Complex.h>
#include <x10/lang/Short.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Math.h>
#include <x10/lang/String.h>
#include <x10/lang/Arithmetic.h>
#include <x10/lang/Bitwise.h>
#include <x10/util/Ordered.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_GENERICS
#define X10_UTIL_TEAMREDUCTIONHELPER_H_GENERICS
#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_performReduction_2894
#define X10_UTIL_TEAMREDUCTIONHELPER_H_performReduction_2894
template<class TPMGL(T)> void x10::util::TeamReductionHelper::performReduction(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int operation) {
    
    //#line 35 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 36 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_double >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 37 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_float >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 38 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_float >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_float >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 39 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 40 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_complex >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 41 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 42 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_long >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 43 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 44 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_int >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 45 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_short >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 46 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_short >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_short >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 47 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 48 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_byte >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else 
    //#line 49 "x10/util/TeamReductionHelper.x10"
    if (::x10aux::instanceof< ::x10::lang::Rail< x10_boolean >*>(reinterpret_cast< ::x10::lang::Any*>(src)))
    {
        
        //#line 50 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::reduce(::x10aux::class_cast< ::x10::lang::Rail< x10_boolean >*>(reinterpret_cast< ::x10::lang::Any*>(src)),
                                                 src_off,
                                                 ::x10aux::class_cast< ::x10::lang::Rail< x10_boolean >*>(reinterpret_cast< ::x10::lang::Any*>(dst)),
                                                 dst_off,
                                                 count, operation);
    } else {
        
        //#line 52 "x10/util/TeamReductionHelper.x10"
        ::x10::util::TeamReductionHelper::template reduce< TPMGL(T) >(
          src, src_off, dst, dst_off, count, operation);
    }
    
}
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H_performReduction_2894
#ifndef X10_UTIL_TEAMREDUCTIONHELPER_H_reduce_2903
#define X10_UTIL_TEAMREDUCTIONHELPER_H_reduce_2903
template<class TPMGL(T)> void x10::util::TeamReductionHelper::reduce(
  ::x10::lang::Rail< TPMGL(T) >* src, x10_long src_off, ::x10::lang::Rail< TPMGL(T) >* dst,
  x10_long dst_off, x10_long count, x10_int operation) {
    
    //#line 365 "x10/util/TeamReductionHelper.x10"
    switch (operation) {
        
        //#line 366 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)0): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153197max__153302 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153303;
                    for (i__153303 = ((x10_long)0ll); ((i__153303) <= (i__153197max__153302));
                         i__153303 = ((i__153303) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153303) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153300 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153303) + (dst_off)));
                              TPMGL(T) b__153301 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153303) + (src_off)));
                              ::x10::lang::Arithmetic< TPMGL(T) >::_m4____plus(::x10aux::class_cast< ::x10::lang::Arithmetic< TPMGL(T) >*>(a__153300), b__153301);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 368 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 369 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)1): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153197max__153307 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153308;
                    for (i__153308 = ((x10_long)0ll); ((i__153308) <= (i__153197max__153307));
                         i__153308 = ((i__153308) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153308) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153305 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153308) + (dst_off)));
                              TPMGL(T) b__153306 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153308) + (src_off)));
                              ::x10::lang::Arithmetic< TPMGL(T) >::__times(::x10aux::class_cast< ::x10::lang::Arithmetic< TPMGL(T) >*>(a__153305), b__153306);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 371 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 372 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)3): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153197max__153312 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153313;
                    for (i__153313 = ((x10_long)0ll); ((i__153313) <= (i__153197max__153312));
                         i__153313 = ((i__153313) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153313) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153310 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153313) + (dst_off)));
                              TPMGL(T) b__153311 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153313) + (src_off)));
                              ::x10::lang::Bitwise< TPMGL(T) >::__ampersand(::x10aux::class_cast< ::x10::lang::Bitwise< TPMGL(T) >*>(a__153310), b__153311);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 374 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 375 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)4): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153197max__153317 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153318;
                    for (i__153318 = ((x10_long)0ll); ((i__153318) <= (i__153197max__153317));
                         i__153318 = ((i__153318) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153318) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153315 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153318) + (dst_off)));
                              TPMGL(T) b__153316 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153318) + (src_off)));
                              ::x10::lang::Bitwise< TPMGL(T) >::__bar(::x10aux::class_cast< ::x10::lang::Bitwise< TPMGL(T) >*>(a__153315), b__153316);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 377 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 378 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)5): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153197max__153322 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153323;
                    for (i__153323 = ((x10_long)0ll); ((i__153323) <= (i__153197max__153322));
                         i__153323 = ((i__153323) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153323) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153320 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153323) + (dst_off)));
                              TPMGL(T) b__153321 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153323) + (src_off)));
                              ::x10::lang::Bitwise< TPMGL(T) >::__caret(::x10aux::class_cast< ::x10::lang::Bitwise< TPMGL(T) >*>(a__153320), b__153321);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 380 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 381 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)6): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153197max__153327 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153328;
                    for (i__153328 = ((x10_long)0ll); ((i__153328) <= (i__153197max__153327));
                         i__153328 = ((i__153328) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153328) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153325 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153328) + (dst_off)));
                              TPMGL(T) b__153326 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153328) + (src_off)));
                              ::x10::util::Ordered< TPMGL(T) >::__lt(::x10aux::class_cast< ::x10::util::Ordered< TPMGL(T) >*>(a__153325), b__153326)
                                ? (b__153326) : (a__153325);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 383 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 384 "x10/util/TeamReductionHelper.x10"
        case ((x10_int)7): ;
        {
            {
                
                //#line 360 "x10/util/TeamReductionHelper.x10"
                x10_long i__153197max__153332 = ((count) - (((x10_long)1ll)));
                {
                    x10_long i__153333;
                    for (i__153333 = ((x10_long)0ll); ((i__153333) <= (i__153197max__153332));
                         i__153333 = ((i__153333) + (((x10_long)1ll))))
                    {
                        
                        //#line 361 "x10/util/TeamReductionHelper.x10"
                        ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__set(
                          ((i__153333) + (dst_off)), (__extension__ ({
                              TPMGL(T) a__153330 = ::x10aux::nullCheck(dst)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153333) + (dst_off)));
                              TPMGL(T) b__153331 = ::x10aux::nullCheck(src)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                                     ((i__153333) + (src_off)));
                              ::x10::util::Ordered< TPMGL(T) >::__lt(::x10aux::class_cast< ::x10::util::Ordered< TPMGL(T) >*>(a__153330), b__153331)
                                ? (a__153330) : (b__153331);
                          }))
                          );
                    }
                }
                
            }
            
            //#line 386 "x10/util/TeamReductionHelper.x10"
            break;
        }
        //#line 387 "x10/util/TeamReductionHelper.x10"
        default: ;
        {
            
            //#line 388 "x10/util/TeamReductionHelper.x10"
            ::x10::lang::RuntimeNatives::println(::x10aux::to_string(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::x10::util::TeamReductionHelper_Strings::sl__171265), operation)))->c_str());
        }
    }
}
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H_reduce_2903
#endif // X10_UTIL_TEAMREDUCTIONHELPER_H_GENERICS
#endif // __X10_UTIL_TEAMREDUCTIONHELPER_H_NODEPS
