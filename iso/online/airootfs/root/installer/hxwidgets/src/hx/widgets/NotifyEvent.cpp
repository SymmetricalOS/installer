// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_NotifyEvent
#include <hx/widgets/NotifyEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5521996602a4cad7_6_new,"hx.widgets.NotifyEvent","new",0x5d49c846,"hx.widgets.NotifyEvent.new","hx/widgets/NotifyEvent.hx",6,0xa63eca6c)
HX_LOCAL_STACK_FRAME(_hx_pos_5521996602a4cad7_10_get_isAllowed,"hx.widgets.NotifyEvent","get_isAllowed",0x9114559b,"hx.widgets.NotifyEvent.get_isAllowed","hx/widgets/NotifyEvent.hx",10,0xa63eca6c)
HX_LOCAL_STACK_FRAME(_hx_pos_5521996602a4cad7_14_veto,"hx.widgets.NotifyEvent","veto",0x488f27c4,"hx.widgets.NotifyEvent.veto","hx/widgets/NotifyEvent.hx",14,0xa63eca6c)
HX_LOCAL_STACK_FRAME(_hx_pos_5521996602a4cad7_18_allow,"hx.widgets.NotifyEvent","allow",0x21e3e1ef,"hx.widgets.NotifyEvent.allow","hx/widgets/NotifyEvent.hx",18,0xa63eca6c)
HX_LOCAL_STACK_FRAME(_hx_pos_5521996602a4cad7_26_get_notifyEventRef,"hx.widgets.NotifyEvent","get_notifyEventRef",0xfe6d18e5,"hx.widgets.NotifyEvent.get_notifyEventRef","hx/widgets/NotifyEvent.hx",26,0xa63eca6c)
namespace hx{
namespace widgets{

void NotifyEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5521996602a4cad7_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic NotifyEvent_obj::__CreateEmpty() { return new NotifyEvent_obj; }

void *NotifyEvent_obj::_hx_vtable = 0;

Dynamic NotifyEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotifyEvent_obj > _hx_result = new NotifyEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotifyEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4f345a43) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4f345a43;
	} else {
		return inClassId==(int)0x6e03e0b2;
	}
}

bool NotifyEvent_obj::get_isAllowed(){
            	HX_STACKFRAME(&_hx_pos_5521996602a4cad7_10_get_isAllowed)
HXDLIN(  10)		return this->get_notifyEventRef()->ptr->IsAllowed();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NotifyEvent_obj,get_isAllowed,return )

void NotifyEvent_obj::veto(){
            	HX_STACKFRAME(&_hx_pos_5521996602a4cad7_14_veto)
HXDLIN(  14)		this->get_notifyEventRef()->ptr->Veto();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NotifyEvent_obj,veto,(void))

void NotifyEvent_obj::allow(){
            	HX_STACKFRAME(&_hx_pos_5521996602a4cad7_18_allow)
HXDLIN(  18)		this->get_notifyEventRef()->ptr->Allow();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NotifyEvent_obj,allow,(void))

::cpp::Pointer<  wxNotifyEvent > NotifyEvent_obj::get_notifyEventRef(){
            	HX_STACKFRAME(&_hx_pos_5521996602a4cad7_26_get_notifyEventRef)
HXDLIN(  26)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NotifyEvent_obj,get_notifyEventRef,return )


::hx::ObjectPtr< NotifyEvent_obj > NotifyEvent_obj::__new() {
	::hx::ObjectPtr< NotifyEvent_obj > __this = new NotifyEvent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NotifyEvent_obj > NotifyEvent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NotifyEvent_obj *__this = (NotifyEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotifyEvent_obj), true, "hx.widgets.NotifyEvent"));
	*(void **)__this = NotifyEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NotifyEvent_obj::NotifyEvent_obj()
{
}

void NotifyEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotifyEvent);
	HX_MARK_MEMBER_NAME(isAllowed,"isAllowed");
	HX_MARK_MEMBER_NAME(notifyEventRef,"notifyEventRef");
	 ::hx::widgets::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NotifyEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isAllowed,"isAllowed");
	HX_VISIT_MEMBER_NAME(notifyEventRef,"notifyEventRef");
	 ::hx::widgets::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NotifyEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"veto") ) { return ::hx::Val( veto_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"allow") ) { return ::hx::Val( allow_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isAllowed") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isAllowed() : isAllowed ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_isAllowed") ) { return ::hx::Val( get_isAllowed_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notifyEventRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_notifyEventRef() : notifyEventRef ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_notifyEventRef") ) { return ::hx::Val( get_notifyEventRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NotifyEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isAllowed") ) { isAllowed=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notifyEventRef") ) { notifyEventRef=inValue.Cast< ::cpp::Pointer<  wxNotifyEvent > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NotifyEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isAllowed",5e,6e,2b,6d));
	outFields->push(HX_("notifyEventRef",42,5d,36,77));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NotifyEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(NotifyEvent_obj,isAllowed),HX_("isAllowed",5e,6e,2b,6d)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxNotifyEvent > */ ,(int)offsetof(NotifyEvent_obj,notifyEventRef),HX_("notifyEventRef",42,5d,36,77)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NotifyEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String NotifyEvent_obj_sMemberFields[] = {
	HX_("isAllowed",5e,6e,2b,6d),
	HX_("get_isAllowed",35,42,8f,2e),
	HX_("veto",6a,36,4c,4e),
	HX_("allow",89,a4,93,21),
	HX_("notifyEventRef",42,5d,36,77),
	HX_("get_notifyEventRef",0b,3e,d0,12),
	::String(null()) };

::hx::Class NotifyEvent_obj::__mClass;

void NotifyEvent_obj::__register()
{
	NotifyEvent_obj _hx_dummy;
	NotifyEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.NotifyEvent",54,ed,6a,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotifyEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotifyEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotifyEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotifyEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
