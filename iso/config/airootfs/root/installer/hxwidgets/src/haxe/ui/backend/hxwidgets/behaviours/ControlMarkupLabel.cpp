// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_ControlMarkupLabel
#include <haxe/ui/backend/hxwidgets/behaviours/ControlMarkupLabel.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8724e120fae6c312_7_new,"haxe.ui.backend.hxwidgets.behaviours.ControlMarkupLabel","new",0x073224fe,"haxe.ui.backend.hxwidgets.behaviours.ControlMarkupLabel.new","haxe/ui/backend/hxwidgets/behaviours/ControlMarkupLabel.hx",7,0x84e8e073)
HX_LOCAL_STACK_FRAME(_hx_pos_8724e120fae6c312_9_validateData,"haxe.ui.backend.hxwidgets.behaviours.ControlMarkupLabel","validateData",0xe1107d82,"haxe.ui.backend.hxwidgets.behaviours.ControlMarkupLabel.validateData","haxe/ui/backend/hxwidgets/behaviours/ControlMarkupLabel.hx",9,0x84e8e073)
HX_LOCAL_STACK_FRAME(_hx_pos_8724e120fae6c312_25_normalizeText,"haxe.ui.backend.hxwidgets.behaviours.ControlMarkupLabel","normalizeText",0x0e3100f8,"haxe.ui.backend.hxwidgets.behaviours.ControlMarkupLabel.normalizeText","haxe/ui/backend/hxwidgets/behaviours/ControlMarkupLabel.hx",25,0x84e8e073)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void ControlMarkupLabel_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_8724e120fae6c312_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic ControlMarkupLabel_obj::__CreateEmpty() { return new ControlMarkupLabel_obj; }

void *ControlMarkupLabel_obj::_hx_vtable = 0;

Dynamic ControlMarkupLabel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlMarkupLabel_obj > _hx_result = new ControlMarkupLabel_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ControlMarkupLabel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x57f86c8a || inClassId==(int)0x7e17fa9f;
	}
}

void ControlMarkupLabel_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_8724e120fae6c312_9_validateData)
HXLINE(  10)		if (::hx::IsNull( this->_component->get_window() )) {
HXLINE(  11)			return;
            		}
HXLINE(  14)		 ::hx::widgets::Control ctrl = ::hx::TCast<  ::hx::widgets::Control >::cast(this->_component->get_window());
HXLINE(  15)		if (::hx::IsNotNull( this->_value )) {
HXLINE(  16)			 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN(  16)			_hx_tmp->set(HX_("originalLabel",e3,03,a0,ca),::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
HXLINE(  17)			::String s = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value);
HXDLIN(  17)			s = ::StringTools_obj::replace(s,HX_("\\n",92,50,00,00),HX_("\r\n",5d,0b,00,00));
HXDLIN(  17)			ctrl->setLabelMarkup(s);
HXLINE(  18)			{
HXLINE(  18)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  18)				bool _hx_tmp1;
HXDLIN(  18)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  18)					_hx_tmp1 = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE(  18)					_hx_tmp1 = true;
            				}
HXDLIN(  18)				if (!(_hx_tmp1)) {
HXLINE(  18)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE(  19)			{
HXLINE(  19)				 ::haxe::ui::core::Component _this1 = this->_component;
HXDLIN(  19)				_this1->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN(  19)				{
            				}
            			}
            		}
            		else {
HXLINE(  21)			this->_component->set(HX_("originalLabel",e3,03,a0,ca),null());
            		}
            	}


::String ControlMarkupLabel_obj::normalizeText(::String s){
            	HX_STACKFRAME(&_hx_pos_8724e120fae6c312_25_normalizeText)
HXLINE(  26)		s = ::StringTools_obj::replace(s,HX_("\\n",92,50,00,00),HX_("\r\n",5d,0b,00,00));
HXLINE(  27)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlMarkupLabel_obj,normalizeText,return )


::hx::ObjectPtr< ControlMarkupLabel_obj > ControlMarkupLabel_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ControlMarkupLabel_obj > __this = new ControlMarkupLabel_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ControlMarkupLabel_obj > ControlMarkupLabel_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ControlMarkupLabel_obj *__this = (ControlMarkupLabel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlMarkupLabel_obj), true, "haxe.ui.backend.hxwidgets.behaviours.ControlMarkupLabel"));
	*(void **)__this = ControlMarkupLabel_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ControlMarkupLabel_obj::ControlMarkupLabel_obj()
{
}

::hx::Val ControlMarkupLabel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalizeText") ) { return ::hx::Val( normalizeText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ControlMarkupLabel_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ControlMarkupLabel_obj_sStaticStorageInfo = 0;
#endif

static ::String ControlMarkupLabel_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("normalizeText",da,7a,5b,01),
	::String(null()) };

::hx::Class ControlMarkupLabel_obj::__mClass;

void ControlMarkupLabel_obj::__register()
{
	ControlMarkupLabel_obj _hx_dummy;
	ControlMarkupLabel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.ControlMarkupLabel",0c,8e,48,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlMarkupLabel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlMarkupLabel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlMarkupLabel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlMarkupLabel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours
