// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_util__Listener_ListenerInternal
#include <haxe/ui/util/_Listener/ListenerInternal.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Listener_Listener_Impl_
#include <haxe/ui/util/_Listener/Listener_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2b3d021e1164a9bd_5__new,"haxe.ui.util._Listener.Listener_Impl_","_new",0xbd061a06,"haxe.ui.util._Listener.Listener_Impl_._new","haxe/ui/util/Listener.hx",5,0x62097b8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b3d021e1164a9bd_11_compareListener,"haxe.ui.util._Listener.Listener_Impl_","compareListener",0x294ea5b4,"haxe.ui.util._Listener.Listener_Impl_.compareListener","haxe/ui/util/Listener.hx",11,0x62097b8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b3d021e1164a9bd_17_compareFunction,"haxe.ui.util._Listener.Listener_Impl_","compareFunction",0x056f5058,"haxe.ui.util._Listener.Listener_Impl_.compareFunction","haxe/ui/util/Listener.hx",17,0x62097b8f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b3d021e1164a9bd_22_toFunc,"haxe.ui.util._Listener.Listener_Impl_","toFunc",0x82ab8e44,"haxe.ui.util._Listener.Listener_Impl_.toFunc","haxe/ui/util/Listener.hx",22,0x62097b8f)
namespace haxe{
namespace ui{
namespace util{
namespace _Listener{

void Listener_Impl__obj::__construct() { }

Dynamic Listener_Impl__obj::__CreateEmpty() { return new Listener_Impl__obj; }

void *Listener_Impl__obj::_hx_vtable = 0;

Dynamic Listener_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Listener_Impl__obj > _hx_result = new Listener_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Listener_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4df85e6b;
}

 ::haxe::ui::util::_Listener::ListenerInternal Listener_Impl__obj::_new( ::Dynamic callback,int priority){
            	HX_GC_STACKFRAME(&_hx_pos_2b3d021e1164a9bd_5__new)
HXDLIN(   5)		return  ::haxe::ui::util::_Listener::ListenerInternal_obj::__alloc( HX_CTX ,callback,priority);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Listener_Impl__obj,_new,return )

bool Listener_Impl__obj::compareListener( ::haxe::ui::util::_Listener::ListenerInternal a, ::haxe::ui::util::_Listener::ListenerInternal b){
            	HX_STACKFRAME(&_hx_pos_2b3d021e1164a9bd_11_compareListener)
HXDLIN(  11)		return ::hx::IsEq( a->callback,b->callback );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Listener_Impl__obj,compareListener,return )

bool Listener_Impl__obj::compareFunction( ::haxe::ui::util::_Listener::ListenerInternal a, ::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_2b3d021e1164a9bd_17_compareFunction)
HXDLIN(  17)		return ::hx::IsEq( a->callback,b );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Listener_Impl__obj,compareFunction,return )

 ::Dynamic Listener_Impl__obj::toFunc( ::haxe::ui::util::_Listener::ListenerInternal this1){
            	HX_STACKFRAME(&_hx_pos_2b3d021e1164a9bd_22_toFunc)
HXDLIN(  22)		return this1->callback;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Listener_Impl__obj,toFunc,return )


Listener_Impl__obj::Listener_Impl__obj()
{
}

bool Listener_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toFunc") ) { outValue = toFunc_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"compareListener") ) { outValue = compareListener_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"compareFunction") ) { outValue = compareFunction_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Listener_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Listener_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Listener_Impl__obj::__mClass;

static ::String Listener_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("compareListener",39,82,bd,3d),
	HX_("compareFunction",dd,2c,de,19),
	HX_("toFunc",5f,56,7e,79),
	::String(null())
};

void Listener_Impl__obj::__register()
{
	Listener_Impl__obj _hx_dummy;
	Listener_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util._Listener.Listener_Impl_",e9,9d,35,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Listener_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Listener_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Listener_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Listener_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Listener_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Listener
