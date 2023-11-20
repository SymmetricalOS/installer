// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_MenuItemSelected
#include <haxe/ui/backend/hxwidgets/behaviours/MenuItemSelected.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuCheckBox
#include <haxe/ui/containers/menus/MenuCheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuItem
#include <haxe/ui/containers/menus/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuOptionBox
#include <haxe/ui/containers/menus/MenuOptionBox.h>
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
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_MenuItem
#include <hx/widgets/MenuItem.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4971feabd5f11c13_8_new,"haxe.ui.backend.hxwidgets.behaviours.MenuItemSelected","new",0x7c1384bc,"haxe.ui.backend.hxwidgets.behaviours.MenuItemSelected.new","haxe/ui/backend/hxwidgets/behaviours/MenuItemSelected.hx",8,0xb5420035)
HX_LOCAL_STACK_FRAME(_hx_pos_4971feabd5f11c13_9_validateData,"haxe.ui.backend.hxwidgets.behaviours.MenuItemSelected","validateData",0xa1d03604,"haxe.ui.backend.hxwidgets.behaviours.MenuItemSelected.validateData","haxe/ui/backend/hxwidgets/behaviours/MenuItemSelected.hx",9,0xb5420035)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void MenuItemSelected_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4971feabd5f11c13_8_new)
HXDLIN(   8)		super::__construct(component);
            	}

Dynamic MenuItemSelected_obj::__CreateEmpty() { return new MenuItemSelected_obj; }

void *MenuItemSelected_obj::_hx_vtable = 0;

Dynamic MenuItemSelected_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItemSelected_obj > _hx_result = new MenuItemSelected_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuItemSelected_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x5dd659c8 || inClassId==(int)0x7e17fa9f;
	}
}

void MenuItemSelected_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_4971feabd5f11c13_9_validateData)
HXLINE(  10)		 ::hx::widgets::MenuItem menuItem = ( ( ::hx::widgets::MenuItem)(this->_component->object) );
HXLINE(  11)		if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::menus::MenuCheckBox >())) {
HXLINE(  12)			menuItem->check(::hx::TCast<  ::haxe::ui::containers::menus::MenuCheckBox >::cast(this->_component)->get_selected());
            		}
            		else {
HXLINE(  13)			if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::menus::MenuOptionBox >())) {
HXLINE(  14)				menuItem->check(::hx::TCast<  ::haxe::ui::containers::menus::MenuOptionBox >::cast(this->_component)->get_selected());
            			}
            		}
            	}



::hx::ObjectPtr< MenuItemSelected_obj > MenuItemSelected_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< MenuItemSelected_obj > __this = new MenuItemSelected_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< MenuItemSelected_obj > MenuItemSelected_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	MenuItemSelected_obj *__this = (MenuItemSelected_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItemSelected_obj), true, "haxe.ui.backend.hxwidgets.behaviours.MenuItemSelected"));
	*(void **)__this = MenuItemSelected_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

MenuItemSelected_obj::MenuItemSelected_obj()
{
}

::hx::Val MenuItemSelected_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuItemSelected_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuItemSelected_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItemSelected_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class MenuItemSelected_obj::__mClass;

void MenuItemSelected_obj::__register()
{
	MenuItemSelected_obj _hx_dummy;
	MenuItemSelected_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.MenuItemSelected",ca,b6,53,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItemSelected_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItemSelected_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItemSelected_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItemSelected_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours