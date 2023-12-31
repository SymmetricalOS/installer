// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_ba0dc751eb097782
#define INCLUDED_ba0dc751eb097782
#include "wx/dataobj.h"
#endif
#ifndef INCLUDED_hx_widgets_DataObject
#include <hx/widgets/DataObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e87949a468875832_7_new,"hx.widgets.DataObject","new",0xdf69b118,"hx.widgets.DataObject.new","hx/widgets/DataObject.hx",7,0x3df09716)
HX_LOCAL_STACK_FRAME(_hx_pos_e87949a468875832_9_destroy,"hx.widgets.DataObject","destroy",0x65c6c9b2,"hx.widgets.DataObject.destroy","hx/widgets/DataObject.hx",9,0x3df09716)
namespace hx{
namespace widgets{

void DataObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e87949a468875832_7_new)
HXDLIN(   7)		this->_ref = null();
            	}

Dynamic DataObject_obj::__CreateEmpty() { return new DataObject_obj; }

void *DataObject_obj::_hx_vtable = 0;

Dynamic DataObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataObject_obj > _hx_result = new DataObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DataObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x30b2a788;
}

bool DataObject_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_e87949a468875832_9_destroy)
HXLINE(  10)		if (::hx::IsNotNull( this->_ref )) {
HXLINE(  11)			this->_ref->destroy();
HXLINE(  12)			this->_ref = null();
            		}
HXLINE(  14)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataObject_obj,destroy,return )


::hx::ObjectPtr< DataObject_obj > DataObject_obj::__new() {
	::hx::ObjectPtr< DataObject_obj > __this = new DataObject_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DataObject_obj > DataObject_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DataObject_obj *__this = (DataObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataObject_obj), true, "hx.widgets.DataObject"));
	*(void **)__this = DataObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DataObject_obj::DataObject_obj()
{
}

void DataObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataObject);
	HX_MARK_MEMBER_NAME(_ref,"_ref");
	HX_MARK_END_CLASS();
}

void DataObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ref,"_ref");
}

::hx::Val DataObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { return ::hx::Val( _ref ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ref") ) { _ref=inValue.Cast< ::cpp::Pointer<  wxDataObject > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_ref",54,1e,22,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataObject_obj_sMemberStorageInfo[] = {
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDataObject > */ ,(int)offsetof(DataObject_obj,_ref),HX_("_ref",54,1e,22,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataObject_obj_sStaticStorageInfo = 0;
#endif

static ::String DataObject_obj_sMemberFields[] = {
	HX_("_ref",54,1e,22,3f),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

::hx::Class DataObject_obj::__mClass;

void DataObject_obj::__register()
{
	DataObject_obj _hx_dummy;
	DataObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DataObject",26,85,cd,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
