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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_NotebookSelectedPage
#include <haxe/ui/backend/hxwidgets/behaviours/NotebookSelectedPage.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_BookCtrlBase
#include <hx/widgets/BookCtrlBase.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_Notebook
#include <hx/widgets/Notebook.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_de8b2c5754c5ba7b_7_new,"haxe.ui.backend.hxwidgets.behaviours.NotebookSelectedPage","new",0x75bd0874,"haxe.ui.backend.hxwidgets.behaviours.NotebookSelectedPage.new","haxe/ui/backend/hxwidgets/behaviours/NotebookSelectedPage.hx",7,0xd563effd)
HX_LOCAL_STACK_FRAME(_hx_pos_de8b2c5754c5ba7b_8_get,"haxe.ui.backend.hxwidgets.behaviours.NotebookSelectedPage","get",0x75b7b8aa,"haxe.ui.backend.hxwidgets.behaviours.NotebookSelectedPage.get","haxe/ui/backend/hxwidgets/behaviours/NotebookSelectedPage.hx",8,0xd563effd)
HX_LOCAL_STACK_FRAME(_hx_pos_de8b2c5754c5ba7b_14_set,"haxe.ui.backend.hxwidgets.behaviours.NotebookSelectedPage","set",0x75c0d3b6,"haxe.ui.backend.hxwidgets.behaviours.NotebookSelectedPage.set","haxe/ui/backend/hxwidgets/behaviours/NotebookSelectedPage.hx",14,0xd563effd)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void NotebookSelectedPage_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_de8b2c5754c5ba7b_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic NotebookSelectedPage_obj::__CreateEmpty() { return new NotebookSelectedPage_obj; }

void *NotebookSelectedPage_obj::_hx_vtable = 0;

Dynamic NotebookSelectedPage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotebookSelectedPage_obj > _hx_result = new NotebookSelectedPage_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NotebookSelectedPage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x79d5f880;
	}
}

 ::haxe::ui::util::VariantType NotebookSelectedPage_obj::get(){
            	HX_STACKFRAME(&_hx_pos_de8b2c5754c5ba7b_8_get)
HXLINE(   9)		 ::hx::widgets::Notebook notebook = ::hx::TCast<  ::hx::widgets::Notebook >::cast(this->_component->get_window());
HXLINE(  10)		 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  10)		::Array< ::Dynamic> selectedComponent;
HXDLIN(  10)		if (::hx::IsNull( _this->_children )) {
HXLINE(  10)			selectedComponent = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  10)			selectedComponent = _this->_children;
            		}
HXDLIN(  10)		 ::haxe::ui::core::Component selectedComponent1 = selectedComponent->__get(notebook->get_selection()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  11)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(selectedComponent1);
            	}


void NotebookSelectedPage_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_de8b2c5754c5ba7b_14_set)
HXLINE(  15)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  16)			return;
            		}
HXLINE(  19)		 ::hx::widgets::Notebook notebook = ::hx::TCast<  ::hx::widgets::Notebook >::cast(this->_component->get_window());
HXLINE(  20)		bool _hx_tmp;
HXDLIN(  20)		if (::hx::IsNotNull( value )) {
HXLINE(  20)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value);
            		}
            		else {
HXLINE(  20)			_hx_tmp = true;
            		}
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  21)			return;
            		}
HXLINE(  24)		 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  24)		::Array< ::Dynamic> index;
HXDLIN(  24)		if (::hx::IsNull( _this->_children )) {
HXLINE(  24)			index = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  24)			index = _this->_children;
            		}
HXDLIN(  24)		int index1 = index->indexOf(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(value),null());
HXLINE(  25)		if ((index1 != -1)) {
HXLINE(  26)			notebook->set_selection(index1);
            		}
            	}



::hx::ObjectPtr< NotebookSelectedPage_obj > NotebookSelectedPage_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< NotebookSelectedPage_obj > __this = new NotebookSelectedPage_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< NotebookSelectedPage_obj > NotebookSelectedPage_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	NotebookSelectedPage_obj *__this = (NotebookSelectedPage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotebookSelectedPage_obj), true, "haxe.ui.backend.hxwidgets.behaviours.NotebookSelectedPage"));
	*(void **)__this = NotebookSelectedPage_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

NotebookSelectedPage_obj::NotebookSelectedPage_obj()
{
}

::hx::Val NotebookSelectedPage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NotebookSelectedPage_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NotebookSelectedPage_obj_sStaticStorageInfo = 0;
#endif

static ::String NotebookSelectedPage_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class NotebookSelectedPage_obj::__mClass;

void NotebookSelectedPage_obj::__register()
{
	NotebookSelectedPage_obj _hx_dummy;
	NotebookSelectedPage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.NotebookSelectedPage",82,fe,92,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotebookSelectedPage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotebookSelectedPage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotebookSelectedPage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotebookSelectedPage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
