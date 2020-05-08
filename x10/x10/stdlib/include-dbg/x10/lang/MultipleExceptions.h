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
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1055
#define X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1055
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::lang::MultipleExceptions::getExceptionsOfType(
  x10_boolean deep) {
    
    //#line 62 "x10/lang/MultipleExceptions.x10"
    ::x10::util::GrowableRail<TPMGL(T)>* es = ::x10::util::GrowableRail<TPMGL(T)>::_make();
    
    //#line 63 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__107189 =
      this->FMGL(exceptions);
    x10_long size__107190 = (x10_long)(::x10aux::nullCheck(rail__107189)->FMGL(size));
    {
        x10_long idx__107191;
        for (idx__107191 = ((x10_long)0ll); ((idx__107191) < (size__107190));
             idx__107191 = ((idx__107191) + (((x10_long)1ll)))) {
            ::x10::lang::CheckedThrowable* e__107192 = ::x10aux::nullCheck(rail__107189)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__107191);
            
            //#line 64 "x10/lang/MultipleExceptions.x10"
            if (::x10aux::instanceof<TPMGL(T)>(e__107192))
            {
                
                //#line 65 "x10/lang/MultipleExceptions.x10"
                es->x10::util::template GrowableRail<TPMGL(T)>::add(
                  ::x10aux::class_cast<TPMGL(T)>(e__107192));
            } else 
            //#line 66 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__107192)))
            {
                
                //#line 67 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(T) >* es__107188 =
                  ::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__107192)))->template getExceptionsOfType< TPMGL(T) >();
                
                //#line 68 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(T) >* rail__107184 =
                  es__107188;
                x10_long size__107185 = (x10_long)(::x10aux::nullCheck(rail__107184)->FMGL(size));
                {
                    x10_long idx__107186;
                    for (idx__107186 = ((x10_long)0ll); ((idx__107186) < (size__107185));
                         idx__107186 = ((idx__107186) + (((x10_long)1ll))))
                    {
                        TPMGL(T) e__107187 = ::x10aux::nullCheck(rail__107184)->x10::lang::template Rail< TPMGL(T) >::__apply(
                                               idx__107186);
                        es->x10::util::template GrowableRail<TPMGL(T)>::add(
                          e__107187);
                    }
                }
                
            }
            
        }
    }
    
    //#line 72 "x10/lang/MultipleExceptions.x10"
    return es->x10::util::template GrowableRail<TPMGL(T)>::toRail();
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1055
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1056
#define X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1056
template<class TPMGL(T)> ::x10::lang::Rail< TPMGL(T) >* x10::lang::MultipleExceptions::getExceptionsOfType(
  ) {
    return this->template getExceptionsOfType< TPMGL(T) >(
             true);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_getExceptionsOfType_1056
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1057
#define X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1057
template<class TPMGL(T)> ::x10::lang::MultipleExceptions*
  x10::lang::MultipleExceptions::filterExceptionsOfType(x10_boolean deep) {
    
    //#line 87 "x10/lang/MultipleExceptions.x10"
    ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* es =
      ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
    
    //#line 88 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__107194 =
      this->FMGL(exceptions);
    x10_long size__107195 = (x10_long)(::x10aux::nullCheck(rail__107194)->FMGL(size));
    {
        x10_long idx__107196;
        for (idx__107196 = ((x10_long)0ll); ((idx__107196) < (size__107195));
             idx__107196 = ((idx__107196) + (((x10_long)1ll))))
        {
            ::x10::lang::CheckedThrowable* e__107197 = ::x10aux::nullCheck(rail__107194)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__107196);
            
            //#line 89 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__107197)))
            {
                
                //#line 90 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::MultipleExceptions* me__107193 =
                  ::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__107197)))->template filterExceptionsOfType< TPMGL(T) >();
                
                //#line 91 "x10/lang/MultipleExceptions.x10"
                if ((!::x10aux::struct_equals(me__107193,
                                              reinterpret_cast< ::x10::lang::NullType*>(X10_NULL))))
                {
                    es->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                      reinterpret_cast< ::x10::lang::CheckedThrowable*>(me__107193));
                }
                
            } else 
            //#line 92 "x10/lang/MultipleExceptions.x10"
            if (!(::x10aux::instanceof<TPMGL(T)>(e__107197)))
            {
                
                //#line 93 "x10/lang/MultipleExceptions.x10"
                es->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                  e__107197);
            }
            
        }
    }
    
    //#line 97 "x10/lang/MultipleExceptions.x10"
    return ::x10::lang::MultipleExceptions::make(es);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1057
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1058
#define X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1058
template<class TPMGL(T)> ::x10::lang::MultipleExceptions*
  x10::lang::MultipleExceptions::filterExceptionsOfType() {
    return this->template filterExceptionsOfType< TPMGL(T) >(
             true);
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_filterExceptionsOfType_1058
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1061
#define X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1061
template<class TPMGL(T)> void x10::lang::MultipleExceptions::splitExceptionsOfType(
  x10_boolean deep, ::x10::util::GrowableRail<TPMGL(T)>* accT,
  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* accNotT) {
    
    //#line 132 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::Rail< ::x10::lang::CheckedThrowable* >* rail__107202 =
      this->FMGL(exceptions);
    x10_long size__107203 = (x10_long)(::x10aux::nullCheck(rail__107202)->FMGL(size));
    {
        x10_long idx__107204;
        for (idx__107204 = ((x10_long)0ll); ((idx__107204) < (size__107203));
             idx__107204 = ((idx__107204) + (((x10_long)1ll))))
        {
            ::x10::lang::CheckedThrowable* e__107205 = ::x10aux::nullCheck(rail__107202)->x10::lang::template Rail< ::x10::lang::CheckedThrowable* >::__apply(
                                                         idx__107204);
            
            //#line 133 "x10/lang/MultipleExceptions.x10"
            if ((deep && ::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(e__107205)))
            {
                
                //#line 134 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck((::x10aux::class_cast< ::x10::lang::MultipleExceptions*>(e__107205)))->template splitExceptionsOfType< TPMGL(T) >(
                  deep, accT, accNotT);
            } else 
            //#line 135 "x10/lang/MultipleExceptions.x10"
            if (::x10aux::instanceof<TPMGL(T)>(e__107205))
            {
                
                //#line 136 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(accT)->x10::util::template GrowableRail<TPMGL(T)>::add(
                  ::x10aux::class_cast<TPMGL(T)>(e__107205));
            } else {
                
                //#line 138 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(accNotT)->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::add(
                  e__107205);
            }
            
        }
    }
    
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_splitExceptionsOfType_1061
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1062
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1062
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler) {
    
    //#line 223 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1063) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1063)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1063);
            {
                
                //#line 225 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns =
                  ::x10::util::GrowableRail<TPMGL(E)>::_make();
                
                //#line 226 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 227 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                  deep, exns, others);
                
                //#line 228 "x10/lang/MultipleExceptions.x10"
                if (((exns->x10::util::template GrowableRail<TPMGL(E)>::size()) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                      exns->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                }
                
                //#line 229 "x10/lang/MultipleExceptions.x10"
                if (((others->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1062
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1064
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1064
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__107230 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1065) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1065)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1065);
                    {
                        
                        //#line 252 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns =
                          ::x10::util::GrowableRail<TPMGL(E)>::_make();
                        
                        //#line 253 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 254 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                          deep, exns, others);
                        
                        //#line 255 "x10/lang/MultipleExceptions.x10"
                        if (((exns->x10::util::template GrowableRail<TPMGL(E)>::size()) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>::__apply(::x10aux::nullCheck(handler), 
                              exns->x10::util::template GrowableRail<TPMGL(E)>::toRail());
                        }
                        
                        //#line 256 "x10/lang/MultipleExceptions.x10"
                        if (((others->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1066) {
            {
                ::x10::lang::CheckedThrowable* formal__107231 =
                  __exc1066;
                {
                    throwable__107230 = formal__107231;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__107230, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__107230))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107230));
            }
            
        }
        
        //#line 258 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 250 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__107230, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__107230)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107230));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1064
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1067
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1067
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler) {
    
    //#line 274 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E) >(
      true, body, handler);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1067
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1068
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1068
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E) >*>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    
    //#line 292 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E) >(
      true, body, handler, finallyBlock);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1068
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1069
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1069
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2) {
    
    //#line 314 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1070) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1070)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1070);
            {
                
                //#line 316 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                  ::x10::util::GrowableRail<TPMGL(E1)>::_make();
                
                //#line 317 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 318 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                  deep, exns1, others1);
                
                //#line 319 "x10/lang/MultipleExceptions.x10"
                if (((exns1->x10::util::template GrowableRail<TPMGL(E1)>::size()) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                      exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                }
                
                //#line 320 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                  ::x10::util::GrowableRail<TPMGL(E2)>::_make();
                
                //#line 321 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 322 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                  deep, exns2, others2);
                
                //#line 323 "x10/lang/MultipleExceptions.x10"
                if (((exns2->x10::util::template GrowableRail<TPMGL(E2)>::size()) > (((x10_long)0ll))))
                {
                    ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                      exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                }
                
                //#line 324 "x10/lang/MultipleExceptions.x10"
                if (((others2->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1069
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1071
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1071
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__107233 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1072) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1072)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1072);
                    {
                        
                        //#line 350 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                          ::x10::util::GrowableRail<TPMGL(E1)>::_make();
                        
                        //#line 351 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 352 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                          deep, exns1, others1);
                        
                        //#line 353 "x10/lang/MultipleExceptions.x10"
                        if (((exns1->x10::util::template GrowableRail<TPMGL(E1)>::size()) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>::__apply(::x10aux::nullCheck(handler1), 
                              exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail());
                        }
                        
                        //#line 354 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                          ::x10::util::GrowableRail<TPMGL(E2)>::_make();
                        
                        //#line 355 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 356 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                          deep, exns2, others2);
                        
                        //#line 357 "x10/lang/MultipleExceptions.x10"
                        if (((exns2->x10::util::template GrowableRail<TPMGL(E2)>::size()) > (((x10_long)0ll))))
                        {
                            ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>::__apply(::x10aux::nullCheck(handler2), 
                              exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail());
                        }
                        
                        //#line 358 "x10/lang/MultipleExceptions.x10"
                        if (((others2->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1073) {
            {
                ::x10::lang::CheckedThrowable* formal__107234 =
                  __exc1073;
                {
                    throwable__107233 = formal__107234;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__107233, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__107233))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107233));
            }
            
        }
        
        //#line 359 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 348 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__107233, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__107233)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107233));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1071
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1074
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1074
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2) {
    
    //#line 378 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E1),
    TPMGL(E2) >(true, body, handler1, handler2);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1074
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1075
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1075
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E1) >*>* handler1,
  ::x10::lang::VoidFun_0_1< ::x10::lang::Rail< TPMGL(E2) >*>* handler2,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    
    //#line 398 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E1),
    TPMGL(E2) >(true, body, handler1, handler2, finallyBlock);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1075
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1076
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1076
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler) {
    
    //#line 431 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1077) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1077)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1077);
            {
                
                //#line 433 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E)>* exns =
                  ::x10::util::GrowableRail<TPMGL(E)>::_make();
                
                //#line 434 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 435 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                  deep, exns, others);
                
                //#line 436 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E) >* rail__107206 =
                  exns->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                x10_long size__107207 = (x10_long)(::x10aux::nullCheck(rail__107206)->FMGL(size));
                {
                    x10_long idx__107208;
                    for (idx__107208 = ((x10_long)0ll); ((idx__107208) < (size__107207));
                         idx__107208 = ((idx__107208) + (((x10_long)1ll))))
                    {
                        TPMGL(E) e__107209 = ::x10aux::nullCheck(rail__107206)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                               idx__107208);
                        
                        //#line 437 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                          e__107209);
                    }
                }
                
                //#line 439 "x10/lang/MultipleExceptions.x10"
                if (((others->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1076
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1078
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1078
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__107236 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1079) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1079)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1079);
                    {
                        
                        //#line 461 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E)>* exns =
                          ::x10::util::GrowableRail<TPMGL(E)>::_make();
                        
                        //#line 462 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 463 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E) >(
                          deep, exns, others);
                        
                        //#line 464 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E) >* rail__107210 =
                          exns->x10::util::template GrowableRail<TPMGL(E)>::toRail();
                        x10_long size__107211 = (x10_long)(::x10aux::nullCheck(rail__107210)->FMGL(size));
                        {
                            x10_long idx__107212;
                            for (idx__107212 = ((x10_long)0ll);
                                 ((idx__107212) < (size__107211));
                                 idx__107212 = ((idx__107212) + (((x10_long)1ll))))
                            {
                                TPMGL(E) e__107213 = ::x10aux::nullCheck(rail__107210)->x10::lang::template Rail< TPMGL(E) >::__apply(
                                                       idx__107212);
                                
                                //#line 465 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E)>::__apply(::x10aux::nullCheck(handler), 
                                  e__107213);
                            }
                        }
                        
                        //#line 467 "x10/lang/MultipleExceptions.x10"
                        if (((others->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1080) {
            {
                ::x10::lang::CheckedThrowable* formal__107237 =
                  __exc1080;
                {
                    throwable__107236 = formal__107237;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__107236, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__107236))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107236));
            }
            
        }
        
        //#line 469 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 459 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__107236, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__107236)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107236));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1078
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1081
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1081
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler) {
    
    //#line 485 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E) >(
      true, body, handler);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1081
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1082
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1082
template<class TPMGL(E)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E)>* handler,
  ::x10::lang::VoidFun_0_0* finallyBlock) {
    
    //#line 503 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E) >(
      true, body, handler, finallyBlock);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1082
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1083
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1083
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2) {
    
    //#line 524 "x10/lang/MultipleExceptions.x10"
    try {
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
    }
    catch (::x10::lang::CheckedThrowable* __exc1084) {
        if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1084)) {
            ::x10::lang::MultipleExceptions* me = static_cast< ::x10::lang::MultipleExceptions*>(__exc1084);
            {
                
                //#line 526 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                  ::x10::util::GrowableRail<TPMGL(E1)>::_make();
                
                //#line 527 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 528 "x10/lang/MultipleExceptions.x10"
                ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                  deep, exns1, others1);
                
                //#line 529 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E1) >* rail__107214 =
                  exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                x10_long size__107215 = (x10_long)(::x10aux::nullCheck(rail__107214)->FMGL(size));
                {
                    x10_long idx__107216;
                    for (idx__107216 = ((x10_long)0ll); ((idx__107216) < (size__107215));
                         idx__107216 = ((idx__107216) + (((x10_long)1ll))))
                    {
                        TPMGL(E1) e__107217 = ::x10aux::nullCheck(rail__107214)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                idx__107216);
                        
                        //#line 530 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                          e__107217);
                    }
                }
                
                //#line 532 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                  ::x10::util::GrowableRail<TPMGL(E2)>::_make();
                
                //#line 533 "x10/lang/MultipleExceptions.x10"
                ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                  ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                
                //#line 534 "x10/lang/MultipleExceptions.x10"
                (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                  deep, exns2, others2);
                
                //#line 535 "x10/lang/MultipleExceptions.x10"
                ::x10::lang::Rail< TPMGL(E2) >* rail__107218 =
                  exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                x10_long size__107219 = (x10_long)(::x10aux::nullCheck(rail__107218)->FMGL(size));
                {
                    x10_long idx__107220;
                    for (idx__107220 = ((x10_long)0ll); ((idx__107220) < (size__107219));
                         idx__107220 = ((idx__107220) + (((x10_long)1ll))))
                    {
                        TPMGL(E2) e__107221 = ::x10aux::nullCheck(rail__107218)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                idx__107220);
                        
                        //#line 536 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                          e__107221);
                    }
                }
                
                //#line 538 "x10/lang/MultipleExceptions.x10"
                if (((others2->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                }
                
            }
        } else {
            throw;
        }
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1083
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1085
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1085
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  x10_boolean deep, ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2, ::x10::lang::VoidFun_0_0* finallyBlock) {
    {
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        ::x10::lang::CheckedThrowable* throwable__107239 =
          ::x10aux::class_cast_unchecked< ::x10::lang::CheckedThrowable*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL));
        try {
            try {
                ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(body));
            }
            catch (::x10::lang::CheckedThrowable* __exc1086) {
                if (::x10aux::instanceof< ::x10::lang::MultipleExceptions*>(__exc1086)) {
                    ::x10::lang::MultipleExceptions* me =
                      static_cast< ::x10::lang::MultipleExceptions*>(__exc1086);
                    {
                        
                        //#line 563 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E1)>* exns1 =
                          ::x10::util::GrowableRail<TPMGL(E1)>::_make();
                        
                        //#line 564 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others1 =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 565 "x10/lang/MultipleExceptions.x10"
                        ::x10aux::nullCheck(me)->template splitExceptionsOfType< TPMGL(E1) >(
                          deep, exns1, others1);
                        
                        //#line 566 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E1) >* rail__107222 =
                          exns1->x10::util::template GrowableRail<TPMGL(E1)>::toRail();
                        x10_long size__107223 = (x10_long)(::x10aux::nullCheck(rail__107222)->FMGL(size));
                        {
                            x10_long idx__107224;
                            for (idx__107224 = ((x10_long)0ll);
                                 ((idx__107224) < (size__107223));
                                 idx__107224 = ((idx__107224) + (((x10_long)1ll))))
                            {
                                TPMGL(E1) e__107225 = ::x10aux::nullCheck(rail__107222)->x10::lang::template Rail< TPMGL(E1) >::__apply(
                                                        idx__107224);
                                
                                //#line 567 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E1)>::__apply(::x10aux::nullCheck(handler1), 
                                  e__107225);
                            }
                        }
                        
                        //#line 569 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail<TPMGL(E2)>* exns2 =
                          ::x10::util::GrowableRail<TPMGL(E2)>::_make();
                        
                        //#line 570 "x10/lang/MultipleExceptions.x10"
                        ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>* others2 =
                          ::x10::util::GrowableRail< ::x10::lang::CheckedThrowable*>::_make();
                        
                        //#line 571 "x10/lang/MultipleExceptions.x10"
                        (::x10::lang::MultipleExceptions::_make(others1))->template splitExceptionsOfType< TPMGL(E2) >(
                          deep, exns2, others2);
                        
                        //#line 572 "x10/lang/MultipleExceptions.x10"
                        ::x10::lang::Rail< TPMGL(E2) >* rail__107226 =
                          exns2->x10::util::template GrowableRail<TPMGL(E2)>::toRail();
                        x10_long size__107227 = (x10_long)(::x10aux::nullCheck(rail__107226)->FMGL(size));
                        {
                            x10_long idx__107228;
                            for (idx__107228 = ((x10_long)0ll);
                                 ((idx__107228) < (size__107227));
                                 idx__107228 = ((idx__107228) + (((x10_long)1ll))))
                            {
                                TPMGL(E2) e__107229 = ::x10aux::nullCheck(rail__107226)->x10::lang::template Rail< TPMGL(E2) >::__apply(
                                                        idx__107228);
                                
                                //#line 573 "x10/lang/MultipleExceptions.x10"
                                ::x10::lang::VoidFun_0_1<TPMGL(E2)>::__apply(::x10aux::nullCheck(handler2), 
                                  e__107229);
                            }
                        }
                        
                        //#line 575 "x10/lang/MultipleExceptions.x10"
                        if (((others2->x10::util::template GrowableRail< ::x10::lang::CheckedThrowable*>::size()) > (((x10_long)0ll))))
                        {
                            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::MultipleExceptions::_make(others2)));
                        }
                        
                    }
                } else {
                    throw;
                }
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc1087) {
            {
                ::x10::lang::CheckedThrowable* formal__107240 =
                  __exc1087;
                {
                    throwable__107239 = formal__107240;
                }
            }
        }
        if ((!::x10aux::struct_equals(throwable__107239, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (::x10aux::instanceof< ::x10::compiler::Abort*>(throwable__107239))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107239));
            }
            
        }
        
        //#line 576 "x10/lang/MultipleExceptions.x10"
        if (true) {
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(finallyBlock));
        }
        
        //#line 561 "x10/lang/MultipleExceptions.x10"
        if ((!::x10aux::struct_equals(throwable__107239, reinterpret_cast< ::x10::lang::CheckedThrowable*>(X10_NULL))))
        {
            if (!(::x10aux::instanceof< ::x10::compiler::Finalization*>(throwable__107239)))
            {
                ::x10aux::throwException(::x10aux::nullCheck(throwable__107239));
            }
            
        }
        
    }
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1085
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1088
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1088
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2) {
    
    //#line 594 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E1),
    TPMGL(E2) >(true, body, handler1, handler2);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1088
#ifndef X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1089
#define X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1089
template<class TPMGL(E1), class TPMGL(E2)> void x10::lang::MultipleExceptions::_kwd__try(
  ::x10::lang::VoidFun_0_0* body, ::x10::lang::VoidFun_0_1<TPMGL(E1)>* handler1,
  ::x10::lang::VoidFun_0_1<TPMGL(E2)>* handler2, ::x10::lang::VoidFun_0_0* finallyBlock) {
    
    //#line 614 "x10/lang/MultipleExceptions.x10"
    ::x10::lang::MultipleExceptions::template _kwd__try< TPMGL(E1),
    TPMGL(E2) >(true, body, handler1, handler2, finallyBlock);
}
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H__kwd__try_1089
#endif // X10_LANG_MULTIPLEEXCEPTIONS_H_GENERICS
#endif // __X10_LANG_MULTIPLEEXCEPTIONS_H_NODEPS
