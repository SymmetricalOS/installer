// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_c98dd3744054cb1f
#define INCLUDED_c98dd3744054cb1f
#include "wx/intl.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_Locale
#include <hx/widgets/Locale.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_86dfa00d9cdfaad7_8_getLanguageName,"hx.widgets.Locale","getLanguageName",0x786be4c2,"hx.widgets.Locale.getLanguageName","hx/widgets/Locale.hx",8,0xace31325)
HX_LOCAL_STACK_FRAME(_hx_pos_86dfa00d9cdfaad7_13_getLanguageCanonicalName,"hx.widgets.Locale","getLanguageCanonicalName",0x0bde4708,"hx.widgets.Locale.getLanguageCanonicalName","hx/widgets/Locale.hx",13,0xace31325)
HX_LOCAL_STACK_FRAME(_hx_pos_86dfa00d9cdfaad7_19_get_systemEncodingName,"hx.widgets.Locale","get_systemEncodingName",0x979dbe6d,"hx.widgets.Locale.get_systemEncodingName","hx/widgets/Locale.hx",19,0xace31325)
HX_LOCAL_STACK_FRAME(_hx_pos_86dfa00d9cdfaad7_26_get_systemLanguage,"hx.widgets.Locale","get_systemLanguage",0x1fa96a87,"hx.widgets.Locale.get_systemLanguage","hx/widgets/Locale.hx",26,0xace31325)
HX_LOCAL_STACK_FRAME(_hx_pos_86dfa00d9cdfaad7_30_isAvailable,"hx.widgets.Locale","isAvailable",0x7e8c5c48,"hx.widgets.Locale.isAvailable","hx/widgets/Locale.hx",30,0xace31325)
namespace hx{
namespace widgets{

void Locale_obj::__construct() { }

Dynamic Locale_obj::__CreateEmpty() { return new Locale_obj; }

void *Locale_obj::_hx_vtable = 0;

Dynamic Locale_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Locale_obj > _hx_result = new Locale_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Locale_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x64c5ac19;
}

::String Locale_obj::getLanguageName(int lang){
            	HX_STACKFRAME(&_hx_pos_86dfa00d9cdfaad7_8_getLanguageName)
HXLINE(   9)		 wxString r = wxLocale::GetLanguageName(lang);
HXLINE(  10)		return ::String(::String(r.ToUTF8().data()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Locale_obj,getLanguageName,return )

::String Locale_obj::getLanguageCanonicalName(int lang){
            	HX_STACKFRAME(&_hx_pos_86dfa00d9cdfaad7_13_getLanguageCanonicalName)
HXLINE(  14)		 wxString r = wxLocale::GetLanguageCanonicalName(lang);
HXLINE(  15)		return ::String(::String(r.ToUTF8().data()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Locale_obj,getLanguageCanonicalName,return )

::String Locale_obj::systemEncodingName;

::String Locale_obj::get_systemEncodingName(){
            	HX_STACKFRAME(&_hx_pos_86dfa00d9cdfaad7_19_get_systemEncodingName)
HXLINE(  20)		 wxString r = wxLocale::GetSystemEncodingName();
HXLINE(  21)		return ::String(::String(r.ToUTF8().data()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Locale_obj,get_systemEncodingName,return )

int Locale_obj::systemLanguage;

int Locale_obj::get_systemLanguage(){
            	HX_STACKFRAME(&_hx_pos_86dfa00d9cdfaad7_26_get_systemLanguage)
HXDLIN(  26)		return wxLocale::GetSystemLanguage();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Locale_obj,get_systemLanguage,return )

bool Locale_obj::isAvailable(int lang){
            	HX_STACKFRAME(&_hx_pos_86dfa00d9cdfaad7_30_isAvailable)
HXDLIN(  30)		return wxLocale::IsAvailable(lang);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Locale_obj,isAvailable,return )


Locale_obj::Locale_obj()
{
}

bool Locale_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isAvailable") ) { outValue = isAvailable_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"systemLanguage") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_systemLanguage() : systemLanguage ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getLanguageName") ) { outValue = getLanguageName_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"systemEncodingName") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_systemEncodingName() : systemEncodingName ); return true; }
		if (HX_FIELD_EQ(inName,"get_systemLanguage") ) { outValue = get_systemLanguage_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_systemEncodingName") ) { outValue = get_systemEncodingName_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getLanguageCanonicalName") ) { outValue = getLanguageCanonicalName_dyn(); return true; }
	}
	return false;
}

bool Locale_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"systemLanguage") ) { systemLanguage=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"systemEncodingName") ) { systemEncodingName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Locale_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Locale_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Locale_obj::systemEncodingName,HX_("systemEncodingName",4d,9e,26,75)},
	{::hx::fsInt,(void *) &Locale_obj::systemLanguage,HX_("systemLanguage",67,da,8c,5b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Locale_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Locale_obj::systemEncodingName,"systemEncodingName");
	HX_MARK_MEMBER_NAME(Locale_obj::systemLanguage,"systemLanguage");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Locale_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Locale_obj::systemEncodingName,"systemEncodingName");
	HX_VISIT_MEMBER_NAME(Locale_obj::systemLanguage,"systemLanguage");
};

#endif

::hx::Class Locale_obj::__mClass;

static ::String Locale_obj_sStaticFields[] = {
	HX_("getLanguageName",79,80,d7,a2),
	HX_("getLanguageCanonicalName",71,fc,e2,47),
	HX_("systemEncodingName",4d,9e,26,75),
	HX_("get_systemEncodingName",96,17,bb,ce),
	HX_("systemLanguage",67,da,8c,5b),
	HX_("get_systemLanguage",30,bb,26,f7),
	HX_("isAvailable",7f,10,04,56),
	::String(null())
};

void Locale_obj::__register()
{
	Locale_obj _hx_dummy;
	Locale_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Locale",b7,e2,3d,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Locale_obj::__GetStatic;
	__mClass->mSetStaticField = &Locale_obj::__SetStatic;
	__mClass->mMarkFunc = Locale_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Locale_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Locale_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Locale_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Locale_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Locale_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
