// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_core_TextDisplayData
#include <haxe/ui/core/TextDisplayData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_68e3108eed25cda6_8_new,"haxe.ui.core.TextDisplayData","new",0x9abc7eb4,"haxe.ui.core.TextDisplayData.new","haxe/ui/core/TextDisplay.hx",8,0xd6487467)
namespace haxe{
namespace ui{
namespace core{

void TextDisplayData_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_68e3108eed25cda6_8_new)
HXLINE(  10)		this->wordWrap = false;
HXLINE(   9)		this->multiline = false;
            	}

Dynamic TextDisplayData_obj::__CreateEmpty() { return new TextDisplayData_obj; }

void *TextDisplayData_obj::_hx_vtable = 0;

Dynamic TextDisplayData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextDisplayData_obj > _hx_result = new TextDisplayData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextDisplayData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1db70446;
}


TextDisplayData_obj::TextDisplayData_obj()
{
}

::hx::Val TextDisplayData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return ::hx::Val( wordWrap ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return ::hx::Val( multiline ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextDisplayData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { multiline=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextDisplayData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextDisplayData_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(TextDisplayData_obj,multiline),HX_("multiline",ed,d2,11,9e)},
	{::hx::fsBool,(int)offsetof(TextDisplayData_obj,wordWrap),HX_("wordWrap",b4,14,db,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextDisplayData_obj_sStaticStorageInfo = 0;
#endif

static ::String TextDisplayData_obj_sMemberFields[] = {
	HX_("multiline",ed,d2,11,9e),
	HX_("wordWrap",b4,14,db,00),
	::String(null()) };

::hx::Class TextDisplayData_obj::__mClass;

void TextDisplayData_obj::__register()
{
	TextDisplayData_obj _hx_dummy;
	TextDisplayData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.TextDisplayData",c2,54,8a,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextDisplayData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextDisplayData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextDisplayData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextDisplayData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
