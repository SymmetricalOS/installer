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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_LinkHandler
#include <haxe/ui/backend/hxwidgets/handlers/LinkHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_handlers_NativeHandler
#include <haxe/ui/backend/hxwidgets/handlers/NativeHandler.h>
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
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
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
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_74b36a969cfa0a88_6_new,"haxe.ui.backend.hxwidgets.handlers.LinkHandler","new",0xe2378598,"haxe.ui.backend.hxwidgets.handlers.LinkHandler.new","haxe/ui/backend/hxwidgets/handlers/LinkHandler.hx",6,0xd13406f7)
HX_LOCAL_STACK_FRAME(_hx_pos_74b36a969cfa0a88_8_link,"haxe.ui.backend.hxwidgets.handlers.LinkHandler","link",0x0d0df3c2,"haxe.ui.backend.hxwidgets.handlers.LinkHandler.link","haxe/ui/backend/hxwidgets/handlers/LinkHandler.hx",8,0xd13406f7)
HX_LOCAL_STACK_FRAME(_hx_pos_74b36a969cfa0a88_12_unlink,"haxe.ui.backend.hxwidgets.handlers.LinkHandler","unlink",0x5c277c9b,"haxe.ui.backend.hxwidgets.handlers.LinkHandler.unlink","haxe/ui/backend/hxwidgets/handlers/LinkHandler.hx",12,0xd13406f7)
HX_LOCAL_STACK_FRAME(_hx_pos_74b36a969cfa0a88_15___onClick,"haxe.ui.backend.hxwidgets.handlers.LinkHandler","__onClick",0x13b5dac1,"haxe.ui.backend.hxwidgets.handlers.LinkHandler.__onClick","haxe/ui/backend/hxwidgets/handlers/LinkHandler.hx",15,0xd13406f7)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace handlers{

void LinkHandler_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_74b36a969cfa0a88_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic LinkHandler_obj::__CreateEmpty() { return new LinkHandler_obj; }

void *LinkHandler_obj::_hx_vtable = 0;

Dynamic LinkHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinkHandler_obj > _hx_result = new LinkHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LinkHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33f6807e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x33f6807e;
	} else {
		return inClassId==(int)0x70a0e439;
	}
}

void LinkHandler_obj::link(){
            	HX_STACKFRAME(&_hx_pos_74b36a969cfa0a88_8_link)
HXDLIN(   8)		this->_component->get_window()->bind(::wx::widgets::EventType_obj::HYPERLINK,this->_hx___onClick_dyn(),null());
            	}


void LinkHandler_obj::unlink(){
            	HX_STACKFRAME(&_hx_pos_74b36a969cfa0a88_12_unlink)
HXDLIN(  12)		this->_component->get_window()->unbind(::wx::widgets::EventType_obj::HYPERLINK,this->_hx___onClick_dyn(),null());
            	}


void LinkHandler_obj::_hx___onClick( ::hx::widgets::Event event){
            	HX_STACKFRAME(&_hx_pos_74b36a969cfa0a88_15___onClick)
HXLINE(  16)		event->stopPropagation();
HXLINE(  17)		event->skip(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LinkHandler_obj,_hx___onClick,(void))


::hx::ObjectPtr< LinkHandler_obj > LinkHandler_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< LinkHandler_obj > __this = new LinkHandler_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< LinkHandler_obj > LinkHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	LinkHandler_obj *__this = (LinkHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinkHandler_obj), true, "haxe.ui.backend.hxwidgets.handlers.LinkHandler"));
	*(void **)__this = LinkHandler_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

LinkHandler_obj::LinkHandler_obj()
{
}

::hx::Val LinkHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { return ::hx::Val( link_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unlink") ) { return ::hx::Val( unlink_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__onClick") ) { return ::hx::Val( _hx___onClick_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LinkHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LinkHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String LinkHandler_obj_sMemberFields[] = {
	HX_("link",fa,17,b3,47),
	HX_("unlink",d3,1e,88,65),
	HX_("__onClick",89,6b,ea,5f),
	::String(null()) };

::hx::Class LinkHandler_obj::__mClass;

void LinkHandler_obj::__register()
{
	LinkHandler_obj _hx_dummy;
	LinkHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.handlers.LinkHandler",a6,19,f7,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinkHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinkHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinkHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinkHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace handlers