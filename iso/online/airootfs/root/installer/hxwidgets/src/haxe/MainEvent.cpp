// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e9d6ea6e9502540_9_new,"haxe.MainEvent","new",0x1c640c2b,"haxe.MainEvent.new","/usr/share/haxe/std/haxe/MainLoop.hx",9,0x2c185893)
namespace haxe{

void MainEvent_obj::__construct( ::Dynamic f,int p){
            	HX_STACKFRAME(&_hx_pos_4e9d6ea6e9502540_9_new)
HXLINE(  17)		this->isBlocking = true;
HXLINE(  23)		this->f = f;
HXLINE(  24)		this->priority = p;
HXLINE(  25)		this->nextRun = ::Math_obj::NEGATIVE_INFINITY;
            	}

Dynamic MainEvent_obj::__CreateEmpty() { return new MainEvent_obj; }

void *MainEvent_obj::_hx_vtable = 0;

Dynamic MainEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainEvent_obj > _hx_result = new MainEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MainEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b5efb53;
}


::hx::ObjectPtr< MainEvent_obj > MainEvent_obj::__new( ::Dynamic f,int p) {
	::hx::ObjectPtr< MainEvent_obj > __this = new MainEvent_obj();
	__this->__construct(f,p);
	return __this;
}

::hx::ObjectPtr< MainEvent_obj > MainEvent_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic f,int p) {
	MainEvent_obj *__this = (MainEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainEvent_obj), true, "haxe.MainEvent"));
	*(void **)__this = MainEvent_obj::_hx_vtable;
	__this->__construct(f,p);
	return __this;
}

MainEvent_obj::MainEvent_obj()
{
}

void MainEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainEvent);
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(isBlocking,"isBlocking");
	HX_MARK_MEMBER_NAME(nextRun,"nextRun");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_END_CLASS();
}

void MainEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(isBlocking,"isBlocking");
	HX_VISIT_MEMBER_NAME(nextRun,"nextRun");
	HX_VISIT_MEMBER_NAME(priority,"priority");
}

::hx::Val MainEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { return ::hx::Val( prev ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nextRun") ) { return ::hx::Val( nextRun ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { return ::hx::Val( priority ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isBlocking") ) { return ::hx::Val( isBlocking ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MainEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast<  ::haxe::MainEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::haxe::MainEvent >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nextRun") ) { nextRun=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isBlocking") ) { isBlocking=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("prev",f3,be,5e,4a));
	outFields->push(HX_("next",f3,84,02,49));
	outFields->push(HX_("isBlocking",bf,37,5f,94));
	outFields->push(HX_("nextRun",18,74,45,a5));
	outFields->push(HX_("priority",64,7b,3e,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MainEvent_obj,f),HX_("f",66,00,00,00)},
	{::hx::fsObject /*  ::haxe::MainEvent */ ,(int)offsetof(MainEvent_obj,prev),HX_("prev",f3,be,5e,4a)},
	{::hx::fsObject /*  ::haxe::MainEvent */ ,(int)offsetof(MainEvent_obj,next),HX_("next",f3,84,02,49)},
	{::hx::fsBool,(int)offsetof(MainEvent_obj,isBlocking),HX_("isBlocking",bf,37,5f,94)},
	{::hx::fsFloat,(int)offsetof(MainEvent_obj,nextRun),HX_("nextRun",18,74,45,a5)},
	{::hx::fsInt,(int)offsetof(MainEvent_obj,priority),HX_("priority",64,7b,3e,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MainEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String MainEvent_obj_sMemberFields[] = {
	HX_("f",66,00,00,00),
	HX_("prev",f3,be,5e,4a),
	HX_("next",f3,84,02,49),
	HX_("isBlocking",bf,37,5f,94),
	HX_("nextRun",18,74,45,a5),
	HX_("priority",64,7b,3e,bb),
	::String(null()) };

::hx::Class MainEvent_obj::__mClass;

void MainEvent_obj::__register()
{
	MainEvent_obj _hx_dummy;
	MainEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.MainEvent",b9,1a,72,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
