#ifndef __X10_LANG_MULTIPLEEXCEPTIONS_H
#define __X10_LANG_MULTIPLEEXCEPTIONS_H

#include <x10rt.h>


#define X10_LANG_EXCEPTION_H_NODEPS
#include <x10/lang/Exception.h>
#undef X10_LANG_EXCEPTION_H_NODEPS
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class GrowableRail;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

namespace x10 { namespace lang { 

class MultipleExceptions : public ::x10::lang::Exception   {
    public:
    RTT_H_DECLS_CLASS
    
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* FMGL(exceptions);
    
    using ::x10::lang::CheckedThrowable::printStackTrace;
    
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* exceptions();
    void _constructor(::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es);
    
    static ::x10::lang::MultipleExceptions* _make(::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es);
    
    void _constructor();
    
    static ::x10::lang::MultipleExceptions* _make();
    
    void _constructor(::x10::lang::CheckedThrowable* t);
    
    static ::x10::lang::MultipleExceptions* _make(::x10::lang::CheckedThrowable* t);
    
    virtual void printStackTrace();
    static ::x10::lang::MultipleExceptions* make(::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es);
    static ::x10::lang::MultipleExceptions* make(::x10::lang::CheckedThrowable* t);
    template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* getExceptionsOfType(
      x10_boolean deep);
    template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* getExceptionsOfType(
      );
    template<class TPMGL(T)> ::x10::lang::MultipleExceptions* filterExceptionsOfType(
      x10_boolean deep);
    template<class TPMGL(T)> ::x10::lang::MultipleExceptions* filterExceptionsOfType(
      );
    virtual ::x10::lang::MultipleExceptions* flatten();
    static void flattenAux(::x10::lang::MultipleExceptions* me,
                           ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* acc);
    template<class TPMGL(T)> void splitExceptionsOfType(x10_boolean deep,
                                                        ::x10::util::GrowableRail<TPMGL(T)>* accT,
                                                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* accNotT);
    template<class TPMGL(E)> static void _kwd__try(x10_boolean deep,
                                                   ::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler);
    template<class TPMGL(E)> static void _kwd__try(x10_boolean deep,
                                                   ::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
                                                   ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E)> static void _kwd__try(::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler);
    template<class TPMGL(E)> static void _kwd__try(::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
                                                   ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(x10_boolean deep, ::x10::lang::VoidFun_0_0* body,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(x10_boolean deep, ::x10::lang::VoidFun_0_0* body,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
                ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
                ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
                ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E)> static void _kwd__try(x10_boolean deep,
                                                   ::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler);
    template<class TPMGL(E)> static void _kwd__try(x10_boolean deep,
                                                   ::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
                                                   ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E)> static void _kwd__try(::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler);
    template<class TPMGL(E)> static void _kwd__try(::x10::lang::VoidFun_0_0* body,
                                                   ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
                                                   ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(x10_boolean deep, ::x10::lang::VoidFun_0_0* body,
                ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
                ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(x10_boolean deep, ::x10::lang::VoidFun_0_0* body,
                ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
                ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2,
                ::x10::lang::VoidFun_0_0* finallyBlock);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
                ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2);
    template<class TPMGL(E1), class TPMGL(E2)> static void
      _kwd__try(::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
                ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2,
                ::x10::lang::VoidFun_0_0* finallyBlock);
    virtual ::x10::lang::MultipleExceptions* x10__lang__MultipleExceptions____this__x10__lang__MultipleExceptions(
      );
    virtual void __fieldInitializers_x10_lang_MultipleExceptions(
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
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H

namespace x10 { namespace lang { 
class MultipleExceptions;
} } 

#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_NODEPS
#define X10_LANG_MULTIPLEEXCEPTIONS_H_NODEPS
#include <x10/lang/Exception.h>
#include <x10/lang/Rail.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/util/GrowableRail.h>
#include <x10/lang/Long.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/VoidFun_0_1.h>
#include <x10/compiler/Inline.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Synthetic.h>
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_GENERICS
#define X10_LANG_MULTIPLEEXCEPTIONS_H_GENERICS
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1063
#define X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1063
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::lang::MultipleExceptions::getExceptionsOfType(
  x10_boolean deep) {
    
    //#line 62 "x10/lang/MultipleExceptions.x10"
    ::x10::util::GrowableRail<TPMGL(T)>* es =  (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(T)> >()) ::x10::util::GrowableRail<TPMGL(T)>());
    
    //#line 50 "x10/util/GrowableRail.x10"
    (es)->::x10::util::GrowableRail<TPMGL(T)>::_constructor(((x10_long)0ll));
    
    //#line 63 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__121946 =
      this->FMGL(exceptions);
    x10_long size__121947 = (x10_long)(::x10aux::nullCheck(rail__121946)->FMGL(size));
    {
        x10_long idx__121948;
        for (idx__121948 = ((x10_long)0ll); ((idx__121948) < (size__121947));
             idx__121948 = ((idx__121948) + (((x10_long)1ll)))) {
            ::x10::lang::CheckedThrowable* e__121949 = ::x10aux::nullCheck(rail__121946)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__121948);
            
            //#line 64 "x10/lang/MultipleExceptions.x10"
            if (::x10aux::instanceof<TPMGL(T)>(e__121949))
            {
                
                //#line 65 "x10/lang/MultipleExceptions.x10"
                es->x10::util::template GrowableRail<TPMGL(T)>::add(
                  ::x10aux::class_cast<TPMGL(T)>(e__121949));
            } else 
            //#line 66 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__121949)))
            {
                
                //#line 67 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(T) >* es__121944 =
                  (__extension__ ({
                    ::x10::lang::MultipleExceptions* this__121945 =
                      ::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__121949);
                    ::x10aux::nullCheck(this__121945)->template getExceptionsOfType< TPMGL(T) >(
                      true);
                }))
                ;
                
                //#line 68 "x10/lang/MultipleExceptions.x10"
                x10_long size__121941 = (x10_long)(::x10aux::nullCheck(es__121944)->FMGL(size));
                {
                    x10_long idx__121942;
                    for (idx__121942 = ((x10_long)0ll); ((idx__121942) < (size__121941));
                         idx__121942 = ((idx__121942) + (((x10_long)1ll))))
                    {
                        TPMGL(T) e__121943 = ::x10aux::nullCheck(es__121944)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                               idx__121942);
                        es->x10::util::template GrowableRail<TPMGL(T)>::add(
                          e__121943);
                    }
                }
                
            }
            
        }
    }
    
    //#line 72 "x10/lang/MultipleExceptions.x10"
    return es->x10::util::template GrowableRail<TPMGL(T)>::toRail();
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1063
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1064
#define X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1064
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::lang::MultipleExceptions::getExceptionsOfType(
  ) {
    return this->template getExceptionsOfType< TPMGL(T) >(
             true);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1064
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1065
#define X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1065
template<class TPMGL(T)> ::x10::lang::MultipleExceptions*
  x10::lang::MultipleExceptions::filterExceptionsOfType(x10_boolean deep) {
    
    //#line 87 "x10/lang/MultipleExceptions.x10"
    ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es =
       (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
    
    //#line 50 "x10/util/GrowableRail.x10"
    (es)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
      ((x10_long)0ll));
    
    //#line 88 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__121952 =
      this->FMGL(exceptions);
    x10_long size__121953 = (x10_long)(::x10aux::nullCheck(rail__121952)->FMGL(size));
    {
        x10_long idx__121954;
        for (idx__121954 = ((x10_long)0ll); ((idx__121954) < (size__121953));
             idx__121954 = ((idx__121954) + (((x10_long)1ll))))
        {
            ::x10::lang::CheckedThrowable* e__121955 = ::x10aux::nullCheck(rail__121952)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__121954);
            
            //#line 89 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__121955)))
            {
                
                //#line 90 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::MultipleExceptions* me__121950 =
                  (__extension__ ({
                    ::x10::lang::MultipleExceptions* this__121951 =
                      ::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__121955);
                    ::x10aux::nullCheck(this__121951)->template filterExceptionsOfType< TPMGL(T) >(
                      true);
                }))
                ;
                
                //#line 91 "x10/lang/MultipleExceptions.x10"
                if ((!::x10aux::struct_equals(me__121950,
                                              reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                {
                    es->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                      reinterpret_cast< ::x10::lang::CheckedThrowable*>(me__121950));
                }
                
            } else 
            //#line 92 "x10/lang/MultipleExceptions.x10"
            if (!(::x10aux::instanceof<TPMGL(T)>(e__121955)))
            {
                
                //#line 93 "x10/lang/MultipleExceptions.x10"
                es->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                  e__121955);
            }
            
        }
    }
    
    //#line 97 "x10/lang/MultipleExceptions.x10"
    return ::x10::lang::MultipleExceptions::make(es);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1065
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1066
#define X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1066
template<class TPMGL(T)> ::x10::lang::MultipleExceptions*
  x10::lang::MultipleExceptions::filterExceptionsOfType() {
    return this->template filterExceptionsOfType< TPMGL(T) >(
             true);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1066
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1069
#define X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1069
template<class TPMGL(T)> void x10::lang::MultipleExceptions::splitExceptionsOfType(
  x10_boolean deep, ::x10::util::GrowableRail<TPMGL(T)>* accT,
  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* accNotT) {
    
    //#line 132 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__121960 =
      this->FMGL(exceptions);
    x10_long size__121961 = (x10_long)(::x10aux::nullCheck(rail__121960)->FMGL(size));
    {
        x10_long idx__121962;
        for (idx__121962 = ((x10_long)0ll); ((idx__121962) < (size__121961));
             idx__121962 = ((idx__121962) + (((x10_long)1ll))))
        {
            ::x10::lang::CheckedThrowable* e__121963 = ::x10aux::nullCheck(rail__121960)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__121962);
            
            //#line 133 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__121963)))
            {
                
                //#line 134 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__121963)))->template splitExceptionsOfType< TPMGL(T) >(
                  deep, accT, accNotT);
            } else 
            //#line 135 "x10/lang/MultipleExceptions.x10"
            if (::x10aux::instanceof<TPMGL(T)>(e__121963))
            {
                
                //#line 136 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(accT)->x10::util::template GrowableRail<TPMGL(T)>::add(
                  ::x10aux::class_cast<TPMGL(T)>(e__121963));
            } else {
                
                //#line 138 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(accNotT)->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                  e__121963);
            }
            
        }
    }
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1069
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1070
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1070
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler) {
    
    //#line 223 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1071) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1071)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1071);
            {
                
                //#line 225 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 226 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 227 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                  deep, exns, others);
                
                //#line 228 "x10/lang/MultipleExceptions.x10"
                if (((exns->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                      exns->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                }
                
                //#line 229 "x10/lang/MultipleExceptions.x10"
                if (((others->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1070
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1072
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1072
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__122068 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1073) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1073)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1073);
                    {
                        
                        //#line 252 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 253 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 254 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                          deep, exns, others);
                        
                        //#line 255 "x10/lang/MultipleExceptions.x10"
                        if (((exns->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                              exns->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                        }
                        
                        //#line 256 "x10/lang/MultipleExceptions.x10"
                        if (((others->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1074) {
            {
                ::x10::lang::CheckedThrowable* formal__122069 =
                  __exc1074;
                {
                    throwable__122068 = formal__122069;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__122068, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__122068))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122068));
            }
            
        }
        
        //#line 258 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__122068, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__122068)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122068));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1072
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1075
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1075
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler) {
    
    //#line 223 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1076) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1076)) {
            ::x10::lang::MultipleExceptions* me__121964 =
              static_cast< ::x10::lang::MultipleExceptions*>(__exc1076);
            {
                
                //#line 225 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns__121965 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__121965)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 226 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121966 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__121966)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 227 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me__121964)->template splitExceptionsOfType< TPMGL(E) >(
                  true, exns__121965, others__121966);
                
                //#line 228 "x10/lang/MultipleExceptions.x10"
                if (((exns__121965->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                      exns__121965->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                }
                
                //#line 229 "x10/lang/MultipleExceptions.x10"
                if (((others__121966->FMGL(size)) > (((x10_long)0ll))))
                {
                    if (true) {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121966)));
                    }
                    
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1075
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1077
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1077
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__122071 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1078) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1078)) {
                    ::x10::lang::MultipleExceptions* me__121969 =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1078);
                    {
                        
                        //#line 252 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns__121970 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__121970)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 253 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121971 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__121971)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 254 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me__121969)->template splitExceptionsOfType< TPMGL(E) >(
                          true, exns__121970, others__121971);
                        
                        //#line 255 "x10/lang/MultipleExceptions.x10"
                        if (((exns__121970->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                              exns__121970->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                        }
                        
                        //#line 256 "x10/lang/MultipleExceptions.x10"
                        if (((others__121971->FMGL(size)) > (((x10_long)0ll))))
                        {
                            if (true) {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121971)));
                            }
                            
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1079) {
            {
                ::x10::lang::CheckedThrowable* formal__122072 =
                  __exc1079;
                {
                    throwable__122071 = formal__122072;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__122071, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__122071))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122071));
            }
            
        }
        
        //#line 258 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__122071, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__122071)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122071));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1077
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1080
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1080
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2) {
    
    //#line 314 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1081) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1081)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1081);
            {
                
                //#line 316 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns1)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 317 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others1)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 318 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                  deep, exns1, others1);
                
                //#line 319 "x10/lang/MultipleExceptions.x10"
                if (((exns1->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                      exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                }
                
                //#line 320 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns2)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 321 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others2)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 322 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                  deep, exns2, others2);
                
                //#line 323 "x10/lang/MultipleExceptions.x10"
                if (((exns2->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                      exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                }
                
                //#line 324 "x10/lang/MultipleExceptions.x10"
                if (((others2->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1080
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1082
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1082
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__122074 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1083) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1083)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1083);
                    {
                        
                        //#line 350 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns1)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 351 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others1)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 352 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                          deep, exns1, others1);
                        
                        //#line 353 "x10/lang/MultipleExceptions.x10"
                        if (((exns1->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                              exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                        }
                        
                        //#line 354 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns2)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 355 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others2)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 356 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                          deep, exns2, others2);
                        
                        //#line 357 "x10/lang/MultipleExceptions.x10"
                        if (((exns2->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                              exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                        }
                        
                        //#line 358 "x10/lang/MultipleExceptions.x10"
                        if (((others2->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1084) {
            {
                ::x10::lang::CheckedThrowable* formal__122075 =
                  __exc1084;
                {
                    throwable__122074 = formal__122075;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__122074, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__122074))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122074));
            }
            
        }
        
        //#line 359 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__122074, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__122074)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122074));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1082
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1085
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1085
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2) {
    
    //#line 314 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1086) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1086)) {
            ::x10::lang::MultipleExceptions* me__121975 =
              static_cast< ::x10::lang::MultipleExceptions*>(__exc1086);
            {
                
                //#line 316 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns__121976 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__121976)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 317 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121977 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__121977)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 318 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me__121975)->template splitExceptionsOfType< TPMGL(E1) >(
                  true, exns__121976, others__121977);
                
                //#line 319 "x10/lang/MultipleExceptions.x10"
                if (((exns__121976->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                      exns__121976->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                }
                
                //#line 320 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns__121978 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__121978)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 321 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121979 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__121979)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 322 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others__121977))->template splitExceptionsOfType< TPMGL(E2) >(
                  true, exns__121978, others__121979);
                
                //#line 323 "x10/lang/MultipleExceptions.x10"
                if (((exns__121978->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                      exns__121978->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                }
                
                //#line 324 "x10/lang/MultipleExceptions.x10"
                if (((others__121979->FMGL(size)) > (((x10_long)0ll))))
                {
                    if (true) {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121979)));
                    }
                    
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1085
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1087
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1087
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__122077 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1088) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1088)) {
                    ::x10::lang::MultipleExceptions* me__121983 =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1088);
                    {
                        
                        //#line 350 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns__121984 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__121984)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 351 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121985 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__121985)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 352 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me__121983)->template splitExceptionsOfType< TPMGL(E1) >(
                          true, exns__121984, others__121985);
                        
                        //#line 353 "x10/lang/MultipleExceptions.x10"
                        if (((exns__121984->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                              exns__121984->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                        }
                        
                        //#line 354 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns__121986 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__121986)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 355 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__121987 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__121987)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 356 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others__121985))->template splitExceptionsOfType< TPMGL(E2) >(
                          true, exns__121986, others__121987);
                        
                        //#line 357 "x10/lang/MultipleExceptions.x10"
                        if (((exns__121986->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                              exns__121986->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                        }
                        
                        //#line 358 "x10/lang/MultipleExceptions.x10"
                        if (((others__121987->FMGL(size)) > (((x10_long)0ll))))
                        {
                            if (true) {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__121987)));
                            }
                            
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1089) {
            {
                ::x10::lang::CheckedThrowable* formal__122078 =
                  __exc1089;
                {
                    throwable__122077 = formal__122078;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__122077, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__122077))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122077));
            }
            
        }
        
        //#line 359 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__122077, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__122077)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122077));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1087
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1090
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1090
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler) {
    
    //#line 431 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1091) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1091)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1091);
            {
                
                //#line 433 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 434 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 435 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                  deep, exns, others);
                
                //#line 436 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E) >* rail__121992 =
                  exns->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                x10_long size__121993 = (x10_long)(::x10aux::nullCheck(rail__121992)->FMGL(size));
                {
                    x10_long idx__121994;
                    for (idx__121994 = ((x10_long)0ll); ((idx__121994) < (size__121993));
                         idx__121994 = ((idx__121994) + (((x10_long)1ll))))
                    {
                        TPMGL(E) e__121995 = ::x10aux::nullCheck(rail__121992)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                               idx__121994);
                        
                        //#line 437 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                          e__121995);
                    }
                }
                
                //#line 439 "x10/lang/MultipleExceptions.x10"
                if (((others->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1090
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1092
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1092
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__122080 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1093) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1093)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1093);
                    {
                        
                        //#line 461 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 462 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 463 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                          deep, exns, others);
                        
                        //#line 464 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E) >* rail__121996 =
                          exns->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                        x10_long size__121997 = (x10_long)(::x10aux::nullCheck(rail__121996)->FMGL(size));
                        {
                            x10_long idx__121998;
                            for (idx__121998 = ((x10_long)0ll);
                                 ((idx__121998) < (size__121997));
                                 idx__121998 = ((idx__121998) + (((x10_long)1ll))))
                            {
                                TPMGL(E) e__121999 = ::x10aux::nullCheck(rail__121996)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                                       idx__121998);
                                
                                //#line 465 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                                  e__121999);
                            }
                        }
                        
                        //#line 467 "x10/lang/MultipleExceptions.x10"
                        if (((others->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1094) {
            {
                ::x10::lang::CheckedThrowable* formal__122081 =
                  __exc1094;
                {
                    throwable__122080 = formal__122081;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__122080, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__122080))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122080));
            }
            
        }
        
        //#line 469 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__122080, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__122080)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122080));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1092
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1095
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1095
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler) {
    
    //#line 431 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1096) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1096)) {
            ::x10::lang::MultipleExceptions* me__122004 =
              static_cast< ::x10::lang::MultipleExceptions*>(__exc1096);
            {
                
                //#line 433 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns__122005 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__122005)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 434 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__122006 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__122006)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 435 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me__122004)->template splitExceptionsOfType< TPMGL(E) >(
                  true, exns__122005, others__122006);
                
                //#line 436 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E) >* rail__122000 =
                  exns__122005->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                x10_long size__122001 = (x10_long)(::x10aux::nullCheck(rail__122000)->FMGL(size));
                {
                    x10_long idx__122002;
                    for (idx__122002 = ((x10_long)0ll); ((idx__122002) < (size__122001));
                         idx__122002 = ((idx__122002) + (((x10_long)1ll))))
                    {
                        TPMGL(E) e__122003 = ::x10aux::nullCheck(rail__122000)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                               idx__122002);
                        
                        //#line 437 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                          e__122003);
                    }
                }
                
                //#line 439 "x10/lang/MultipleExceptions.x10"
                if (((others__122006->FMGL(size)) > (((x10_long)0ll))))
                {
                    if (true) {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__122006)));
                    }
                    
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1095
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1097
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1097
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__122083 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1098) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1098)) {
                    ::x10::lang::MultipleExceptions* me__122013 =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1098);
                    {
                        
                        //#line 461 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns__122014 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E)> >()) ::x10::util::GrowableRail<TPMGL(E)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__122014)->::x10::util::GrowableRail<TPMGL(E)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 462 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__122015 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__122015)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 463 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me__122013)->template splitExceptionsOfType< TPMGL(E) >(
                          true, exns__122014, others__122015);
                        
                        //#line 464 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E) >* rail__122009 =
                          exns__122014->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                        x10_long size__122010 = (x10_long)(::x10aux::nullCheck(rail__122009)->FMGL(size));
                        {
                            x10_long idx__122011;
                            for (idx__122011 = ((x10_long)0ll);
                                 ((idx__122011) < (size__122010));
                                 idx__122011 = ((idx__122011) + (((x10_long)1ll))))
                            {
                                TPMGL(E) e__122012 = ::x10aux::nullCheck(rail__122009)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                                       idx__122011);
                                
                                //#line 465 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                                  e__122012);
                            }
                        }
                        
                        //#line 467 "x10/lang/MultipleExceptions.x10"
                        if (((others__122015->FMGL(size)) > (((x10_long)0ll))))
                        {
                            if (true) {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__122015)));
                            }
                            
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1099) {
            {
                ::x10::lang::CheckedThrowable* formal__122084 =
                  __exc1099;
                {
                    throwable__122083 = formal__122084;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__122083, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__122083))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122083));
            }
            
        }
        
        //#line 469 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__122083, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__122083)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122083));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1097
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1100
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1100
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2) {
    
    //#line 524 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1101) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1101)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1101);
            {
                
                //#line 526 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns1)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 527 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others1)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 528 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                  deep, exns1, others1);
                
                //#line 529 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E1) >* rail__122019 =
                  exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                x10_long size__122020 = (x10_long)(::x10aux::nullCheck(rail__122019)->FMGL(size));
                {
                    x10_long idx__122021;
                    for (idx__122021 = ((x10_long)0ll); ((idx__122021) < (size__122020));
                         idx__122021 = ((idx__122021) + (((x10_long)1ll))))
                    {
                        TPMGL(E1) e__122022 = ::x10aux::nullCheck(rail__122019)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                idx__122021);
                        
                        //#line 530 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                          e__122022);
                    }
                }
                
                //#line 532 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns2)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 533 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others2)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 534 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                  deep, exns2, others2);
                
                //#line 535 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E2) >* rail__122023 =
                  exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                x10_long size__122024 = (x10_long)(::x10aux::nullCheck(rail__122023)->FMGL(size));
                {
                    x10_long idx__122025;
                    for (idx__122025 = ((x10_long)0ll); ((idx__122025) < (size__122024));
                         idx__122025 = ((idx__122025) + (((x10_long)1ll))))
                    {
                        TPMGL(E2) e__122026 = ::x10aux::nullCheck(rail__122023)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                idx__122025);
                        
                        //#line 536 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                          e__122026);
                    }
                }
                
                //#line 538 "x10/lang/MultipleExceptions.x10"
                if (((others2->FMGL(size)) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1100
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1102
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1102
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2, ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__122086 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1103) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1103)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1103);
                    {
                        
                        //#line 563 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns1)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 564 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others1)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 565 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                          deep, exns1, others1);
                        
                        //#line 566 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E1) >* rail__122027 =
                          exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                        x10_long size__122028 = (x10_long)(::x10aux::nullCheck(rail__122027)->FMGL(size));
                        {
                            x10_long idx__122029;
                            for (idx__122029 = ((x10_long)0ll);
                                 ((idx__122029) < (size__122028));
                                 idx__122029 = ((idx__122029) + (((x10_long)1ll))))
                            {
                                TPMGL(E1) e__122030 = ::x10aux::nullCheck(rail__122027)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                        idx__122029);
                                
                                //#line 567 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                                  e__122030);
                            }
                        }
                        
                        //#line 569 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns2)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 570 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others2)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 571 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                          deep, exns2, others2);
                        
                        //#line 572 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E2) >* rail__122031 =
                          exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                        x10_long size__122032 = (x10_long)(::x10aux::nullCheck(rail__122031)->FMGL(size));
                        {
                            x10_long idx__122033;
                            for (idx__122033 = ((x10_long)0ll);
                                 ((idx__122033) < (size__122032));
                                 idx__122033 = ((idx__122033) + (((x10_long)1ll))))
                            {
                                TPMGL(E2) e__122034 = ::x10aux::nullCheck(rail__122031)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                        idx__122033);
                                
                                //#line 573 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                                  e__122034);
                            }
                        }
                        
                        //#line 575 "x10/lang/MultipleExceptions.x10"
                        if (((others2->FMGL(size)) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1104) {
            {
                ::x10::lang::CheckedThrowable* formal__122087 =
                  __exc1104;
                {
                    throwable__122086 = formal__122087;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__122086, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__122086))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122086));
            }
            
        }
        
        //#line 576 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__122086, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__122086)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122086));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1102
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1105
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1105
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2) {
    
    //#line 524 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1106) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1106)) {
            ::x10::lang::MultipleExceptions* me__122043 =
              static_cast< ::x10::lang::MultipleExceptions*>(__exc1106);
            {
                
                //#line 526 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns__122044 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__122044)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 527 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__122045 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__122045)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 528 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me__122043)->template splitExceptionsOfType< TPMGL(E1) >(
                  true, exns__122044, others__122045);
                
                //#line 529 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E1) >* rail__122035 =
                  exns__122044->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                x10_long size__122036 = (x10_long)(::x10aux::nullCheck(rail__122035)->FMGL(size));
                {
                    x10_long idx__122037;
                    for (idx__122037 = ((x10_long)0ll); ((idx__122037) < (size__122036));
                         idx__122037 = ((idx__122037) + (((x10_long)1ll))))
                    {
                        TPMGL(E1) e__122038 = ::x10aux::nullCheck(rail__122035)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                idx__122037);
                        
                        //#line 530 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                          e__122038);
                    }
                }
                
                //#line 532 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns__122046 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (exns__122046)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                  ((x10_long)0ll));
                
                //#line 533 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__122047 =
                   (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                
                //#line 50 "x10/util/GrowableRail.x10"
                (others__122047)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                  ((x10_long)0ll));
                
                //#line 534 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others__122045))->template splitExceptionsOfType< TPMGL(E2) >(
                  true, exns__122046, others__122047);
                
                //#line 535 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E2) >* rail__122039 =
                  exns__122046->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                x10_long size__122040 = (x10_long)(::x10aux::nullCheck(rail__122039)->FMGL(size));
                {
                    x10_long idx__122041;
                    for (idx__122041 = ((x10_long)0ll); ((idx__122041) < (size__122040));
                         idx__122041 = ((idx__122041) + (((x10_long)1ll))))
                    {
                        TPMGL(E2) e__122042 = ::x10aux::nullCheck(rail__122039)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                idx__122041);
                        
                        //#line 536 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                          e__122042);
                    }
                }
                
                //#line 538 "x10/lang/MultipleExceptions.x10"
                if (((others__122047->FMGL(size)) > (((x10_long)0ll))))
                {
                    if (true) {
                        ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__122047)));
                    }
                    
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1105
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1107
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1107
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2, ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__122089 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1108) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1108)) {
                    ::x10::lang::MultipleExceptions* me__122059 =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1108);
                    {
                        
                        //#line 563 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns__122060 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E1)> >()) ::x10::util::GrowableRail<TPMGL(E1)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__122060)->::x10::util::GrowableRail<TPMGL(E1)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 564 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__122061 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__122061)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 565 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me__122059)->template splitExceptionsOfType< TPMGL(E1) >(
                          true, exns__122060, others__122061);
                        
                        //#line 566 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E1) >* rail__122051 =
                          exns__122060->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                        x10_long size__122052 = (x10_long)(::x10aux::nullCheck(rail__122051)->FMGL(size));
                        {
                            x10_long idx__122053;
                            for (idx__122053 = ((x10_long)0ll);
                                 ((idx__122053) < (size__122052));
                                 idx__122053 = ((idx__122053) + (((x10_long)1ll))))
                            {
                                TPMGL(E1) e__122054 = ::x10aux::nullCheck(rail__122051)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                        idx__122053);
                                
                                //#line 567 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                                  e__122054);
                            }
                        }
                        
                        //#line 569 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns__122062 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail<TPMGL(E2)> >()) ::x10::util::GrowableRail<TPMGL(E2)>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (exns__122062)->::x10::util::GrowableRail<TPMGL(E2)>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 570 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others__122063 =
                           (new (::x10aux::alloc_z< ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*> >()) ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>());
                        
                        //#line 50 "x10/util/GrowableRail.x10"
                        (others__122063)->::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_constructor(
                          ((x10_long)0ll));
                        
                        //#line 571 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others__122061))->template splitExceptionsOfType< TPMGL(E2) >(
                          true, exns__122062, others__122063);
                        
                        //#line 572 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E2) >* rail__122055 =
                          exns__122062->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                        x10_long size__122056 = (x10_long)(::x10aux::nullCheck(rail__122055)->FMGL(size));
                        {
                            x10_long idx__122057;
                            for (idx__122057 = ((x10_long)0ll);
                                 ((idx__122057) < (size__122056));
                                 idx__122057 = ((idx__122057) + (((x10_long)1ll))))
                            {
                                TPMGL(E2) e__122058 = ::x10aux::nullCheck(rail__122055)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                        idx__122057);
                                
                                //#line 573 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                                  e__122058);
                            }
                        }
                        
                        //#line 575 "x10/lang/MultipleExceptions.x10"
                        if (((others__122063->FMGL(size)) > (((x10_long)0ll))))
                        {
                            if (true) {
                                ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others__122063)));
                            }
                            
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1109) {
            {
                ::x10::lang::CheckedThrowable* formal__122090 =
                  __exc1109;
                {
                    throwable__122089 = formal__122090;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__122089, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__122089))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122089));
            }
            
        }
        
        //#line 576 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__122089, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__122089)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__122089));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1107
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_GENERICS
#endif // __X10_LANG_MULTIPLEEXCEPTIONS_H_NODEPS
