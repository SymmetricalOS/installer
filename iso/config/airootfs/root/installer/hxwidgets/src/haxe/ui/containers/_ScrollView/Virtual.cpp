// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_Virtual
#include <haxe/ui/containers/_ScrollView/Virtual.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b29c0e57337870ab_197_new,"haxe.ui.containers._ScrollView.Virtual","new",0x64e7e5f6,"haxe.ui.containers._ScrollView.Virtual.new","haxe/ui/containers/ScrollView.hx",197,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_b29c0e57337870ab_198_set,"haxe.ui.containers._ScrollView.Virtual","set",0x64ebb138,"haxe.ui.containers._ScrollView.Virtual.set","haxe/ui/containers/ScrollView.hx",198,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void Virtual_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_b29c0e57337870ab_197_new)
HXDLIN( 197)		super::__construct(component);
            	}

Dynamic Virtual_obj::__CreateEmpty() { return new Virtual_obj; }

void *Virtual_obj::_hx_vtable = 0;

Dynamic Virtual_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Virtual_obj > _hx_result = new Virtual_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Virtual_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x0e4c6346) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0e4c6346;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

void Virtual_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_b29c0e57337870ab_198_set)
HXLINE( 199)		this->super::set(value);
HXLINE( 200)		if (::hx::IsNotNull( this->_component->_compositeBuilder )) {
HXLINE( 201)			::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_component->_compositeBuilder)->onVirtualChanged();
            		}
            	}



::hx::ObjectPtr< Virtual_obj > Virtual_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Virtual_obj > __this = new Virtual_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Virtual_obj > Virtual_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Virtual_obj *__this = (Virtual_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Virtual_obj), true, "haxe.ui.containers._ScrollView.Virtual"));
	*(void **)__this = Virtual_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Virtual_obj::Virtual_obj()
{
}

::hx::Val Virtual_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Virtual_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Virtual_obj_sStaticStorageInfo = 0;
#endif

static ::String Virtual_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class Virtual_obj::__mClass;

void Virtual_obj::__register()
{
	Virtual_obj _hx_dummy;
	Virtual_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.Virtual",04,73,dc,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Virtual_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Virtual_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Virtual_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Virtual_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
