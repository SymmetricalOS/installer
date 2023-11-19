// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_3fabc4d277dfeb98
#define INCLUDED_3fabc4d277dfeb98
#include "wx/timer.h"
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
#ifndef INCLUDED_hx_widgets_Timer
#include <hx/widgets/Timer.h>
#endif
#ifndef INCLUDED_hx_widgets_TimerEvent
#include <hx/widgets/TimerEvent.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bd0145b7f0fba429_8_new,"hx.widgets.TimerEvent","new",0xe8a050a4,"hx.widgets.TimerEvent.new","hx/widgets/TimerEvent.hx",8,0xc7bd2d0a)
HX_LOCAL_STACK_FRAME(_hx_pos_bd0145b7f0fba429_10_get_timer,"hx.widgets.TimerEvent","get_timer",0x443f2760,"hx.widgets.TimerEvent.get_timer","hx/widgets/TimerEvent.hx",10,0xc7bd2d0a)
HX_LOCAL_STACK_FRAME(_hx_pos_bd0145b7f0fba429_23_get_timerEventRef,"hx.widgets.TimerEvent","get_timerEventRef",0x974d98d9,"hx.widgets.TimerEvent.get_timerEventRef","hx/widgets/TimerEvent.hx",23,0xc7bd2d0a)
namespace hx{
namespace widgets{

void TimerEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bd0145b7f0fba429_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic TimerEvent_obj::__CreateEmpty() { return new TimerEvent_obj; }

void *TimerEvent_obj::_hx_vtable = 0;

Dynamic TimerEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TimerEvent_obj > _hx_result = new TimerEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TimerEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x36a79114) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x36a79114;
	} else {
		return inClassId==(int)0x4f345a43;
	}
}

 ::hx::widgets::Timer TimerEvent_obj::get_timer(){
            	HX_GC_STACKFRAME(&_hx_pos_bd0145b7f0fba429_10_get_timer)
HXLINE(  11)		 wxTimer & timerRef = this->get_timerEventRef()->ptr->GetTimer();
HXLINE(  12)		 ::hx::widgets::Timer timer =  ::hx::widgets::Timer_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  13)		 wxTimer* raw = &(timerRef);
HXLINE(  14)		timer->_ref = ::cpp::Pointer_obj::fromRaw(raw)->reinterpret();
HXLINE(  15)		return timer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TimerEvent_obj,get_timer,return )

::cpp::Pointer<  wxTimerEvent > TimerEvent_obj::get_timerEventRef(){
            	HX_STACKFRAME(&_hx_pos_bd0145b7f0fba429_23_get_timerEventRef)
HXDLIN(  23)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TimerEvent_obj,get_timerEventRef,return )


::hx::ObjectPtr< TimerEvent_obj > TimerEvent_obj::__new() {
	::hx::ObjectPtr< TimerEvent_obj > __this = new TimerEvent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TimerEvent_obj > TimerEvent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TimerEvent_obj *__this = (TimerEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TimerEvent_obj), true, "hx.widgets.TimerEvent"));
	*(void **)__this = TimerEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TimerEvent_obj::TimerEvent_obj()
{
}

void TimerEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerEvent);
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(timerEventRef,"timerEventRef");
	 ::hx::widgets::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TimerEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(timerEventRef,"timerEventRef");
	 ::hx::widgets::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TimerEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_timer() : timer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_timer") ) { return ::hx::Val( get_timer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timerEventRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_timerEventRef() : timerEventRef ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_timerEventRef") ) { return ::hx::Val( get_timerEventRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TimerEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast<  ::hx::widgets::Timer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timerEventRef") ) { timerEventRef=inValue.Cast< ::cpp::Pointer<  wxTimerEvent > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimerEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("timer",c5,bf,35,10));
	outFields->push(HX_("timerEventRef",3e,9e,da,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TimerEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hx::widgets::Timer */ ,(int)offsetof(TimerEvent_obj,timer),HX_("timer",c5,bf,35,10)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxTimerEvent > */ ,(int)offsetof(TimerEvent_obj,timerEventRef),HX_("timerEventRef",3e,9e,da,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TimerEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String TimerEvent_obj_sMemberFields[] = {
	HX_("timer",c5,bf,35,10),
	HX_("get_timer",1c,1c,df,53),
	HX_("timerEventRef",3e,9e,da,d8),
	HX_("get_timerEventRef",95,a9,4a,df),
	::String(null()) };

::hx::Class TimerEvent_obj::__mClass;

void TimerEvent_obj::__register()
{
	TimerEvent_obj _hx_dummy;
	TimerEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.TimerEvent",b2,6e,c2,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TimerEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TimerEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TimerEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TimerEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
