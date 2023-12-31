// Generated by Haxe 4.3.3
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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_SelectionModeBehaviour
#include <haxe/ui/containers/_ListView/SelectionModeBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_65d0ca9efc541cc5_564_new,"haxe.ui.containers._ListView.SelectionModeBehaviour","new",0x4b924916,"haxe.ui.containers._ListView.SelectionModeBehaviour.new","haxe/ui/containers/ListView.hx",564,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_65d0ca9efc541cc5_565_validateData,"haxe.ui.containers._ListView.SelectionModeBehaviour","validateData",0x9087166a,"haxe.ui.containers._ListView.SelectionModeBehaviour.validateData","haxe/ui/containers/ListView.hx",565,0xe137bf10)
namespace haxe{
namespace ui{
namespace containers{
namespace _ListView{

void SelectionModeBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_65d0ca9efc541cc5_564_new)
HXDLIN( 564)		super::__construct(component);
            	}

Dynamic SelectionModeBehaviour_obj::__CreateEmpty() { return new SelectionModeBehaviour_obj; }

void *SelectionModeBehaviour_obj::_hx_vtable = 0;

Dynamic SelectionModeBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectionModeBehaviour_obj > _hx_result = new SelectionModeBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectionModeBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x5b1b90a4 || inClassId==(int)0x7e17fa9f;
	}
}

void SelectionModeBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_65d0ca9efc541cc5_565_validateData)
HXLINE( 566)		 ::haxe::ui::containers::ListView listView = ::hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE( 567)		::Array< int > selectedIndices = listView->get_selectedIndices();
HXLINE( 568)		bool _hx_tmp;
HXDLIN( 568)		if (::hx::IsNotNull( selectedIndices )) {
HXLINE( 568)			_hx_tmp = (selectedIndices->length == 0);
            		}
            		else {
HXLINE( 568)			_hx_tmp = true;
            		}
HXDLIN( 568)		if (_hx_tmp) {
HXLINE( 569)			return;
            		}
HXLINE( 572)		::String selectionMode = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value);
HXLINE( 573)		::String _hx_switch_0 = selectionMode;
            		if (  (_hx_switch_0==HX_("disabled",7c,41,04,7c)) ){
HXLINE( 575)			listView->set_selectedIndices(null());
HXDLIN( 575)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("one-item",9a,d3,eb,3b)) ){
HXLINE( 578)			if ((selectedIndices->length > 1)) {
HXLINE( 579)				listView->set_selectedIndices(::Array_obj< int >::__new(1)->init(0,selectedIndices->__get(0)));
            			}
HXLINE( 578)			goto _hx_goto_1;
            		}
            		/* default */{
            		}
            		_hx_goto_1:;
            	}



::hx::ObjectPtr< SelectionModeBehaviour_obj > SelectionModeBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectionModeBehaviour_obj > __this = new SelectionModeBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectionModeBehaviour_obj > SelectionModeBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectionModeBehaviour_obj *__this = (SelectionModeBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectionModeBehaviour_obj), true, "haxe.ui.containers._ListView.SelectionModeBehaviour"));
	*(void **)__this = SelectionModeBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectionModeBehaviour_obj::SelectionModeBehaviour_obj()
{
}

::hx::Val SelectionModeBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectionModeBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectionModeBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectionModeBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class SelectionModeBehaviour_obj::__mClass;

void SelectionModeBehaviour_obj::__register()
{
	SelectionModeBehaviour_obj _hx_dummy;
	SelectionModeBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ListView.SelectionModeBehaviour",24,c6,8e,bc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectionModeBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectionModeBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectionModeBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectionModeBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ListView
