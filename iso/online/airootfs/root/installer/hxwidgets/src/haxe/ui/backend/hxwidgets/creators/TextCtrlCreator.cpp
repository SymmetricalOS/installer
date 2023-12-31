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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_Creator
#include <haxe/ui/backend/hxwidgets/creators/Creator.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_creators_TextCtrlCreator
#include <haxe/ui/backend/hxwidgets/creators/TextCtrlCreator.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_TextCtrlStyle
#include <wx/widgets/styles/TextCtrlStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d6ce2daa2037f247_7_new,"haxe.ui.backend.hxwidgets.creators.TextCtrlCreator","new",0x7f017b1a,"haxe.ui.backend.hxwidgets.creators.TextCtrlCreator.new","haxe/ui/backend/hxwidgets/creators/TextCtrlCreator.hx",7,0x7641b335)
HX_LOCAL_STACK_FRAME(_hx_pos_d6ce2daa2037f247_9_createStyle,"haxe.ui.backend.hxwidgets.creators.TextCtrlCreator","createStyle",0xb466d14f,"haxe.ui.backend.hxwidgets.creators.TextCtrlCreator.createStyle","haxe/ui/backend/hxwidgets/creators/TextCtrlCreator.hx",9,0x7641b335)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace creators{

void TextCtrlCreator_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_d6ce2daa2037f247_7_new)
HXDLIN(   7)		super::__construct(component);
            	}

Dynamic TextCtrlCreator_obj::__CreateEmpty() { return new TextCtrlCreator_obj; }

void *TextCtrlCreator_obj::_hx_vtable = 0;

Dynamic TextCtrlCreator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextCtrlCreator_obj > _hx_result = new TextCtrlCreator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextCtrlCreator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3925cb80) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3925cb80;
	} else {
		return inClassId==(int)0x7469fa68;
	}
}

int TextCtrlCreator_obj::createStyle(int style){
            	HX_STACKFRAME(&_hx_pos_d6ce2daa2037f247_9_createStyle)
HXLINE(  10)		if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::components::TextField >())) {
HXLINE(  11)			style = (style | ::wx::widgets::styles::TextCtrlStyle_obj::PROCESS_ENTER);
            		}
HXLINE(  13)		return style;
            	}



::hx::ObjectPtr< TextCtrlCreator_obj > TextCtrlCreator_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TextCtrlCreator_obj > __this = new TextCtrlCreator_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TextCtrlCreator_obj > TextCtrlCreator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextCtrlCreator_obj *__this = (TextCtrlCreator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextCtrlCreator_obj), true, "haxe.ui.backend.hxwidgets.creators.TextCtrlCreator"));
	*(void **)__this = TextCtrlCreator_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextCtrlCreator_obj::TextCtrlCreator_obj()
{
}

::hx::Val TextCtrlCreator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"createStyle") ) { return ::hx::Val( createStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextCtrlCreator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextCtrlCreator_obj_sStaticStorageInfo = 0;
#endif

static ::String TextCtrlCreator_obj_sMemberFields[] = {
	HX_("createStyle",95,dc,98,ad),
	::String(null()) };

::hx::Class TextCtrlCreator_obj::__mClass;

void TextCtrlCreator_obj::__register()
{
	TextCtrlCreator_obj _hx_dummy;
	TextCtrlCreator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.creators.TextCtrlCreator",28,a6,73,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextCtrlCreator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextCtrlCreator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextCtrlCreator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextCtrlCreator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace creators
