// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_wx_widgets_Alignment
#include <wx/widgets/Alignment.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_5_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",5,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_6_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",6,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_7_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",7,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_8_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",8,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_9_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",9,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_10_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",10,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_11_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",11,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_12_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",12,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_13_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",13,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_14_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",14,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_15_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",15,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_16_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",16,0xb9a318e9)
HX_LOCAL_STACK_FRAME(_hx_pos_0f5c5c7b603bc967_17_boot,"wx.widgets.Alignment","boot",0xa21dc1c9,"wx.widgets.Alignment.boot","wx/widgets/Alignment.hx",17,0xb9a318e9)
namespace wx{
namespace widgets{

void Alignment_obj::__construct() { }

Dynamic Alignment_obj::__CreateEmpty() { return new Alignment_obj; }

void *Alignment_obj::_hx_vtable = 0;

Dynamic Alignment_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alignment_obj > _hx_result = new Alignment_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Alignment_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d0f8cb9;
}

int Alignment_obj::INVALID;

int Alignment_obj::NOT;

int Alignment_obj::CENTER_HORIZONTAL;

int Alignment_obj::CENTRE_HORIZONTAL;

int Alignment_obj::LEFT;

int Alignment_obj::TOP;

int Alignment_obj::RIGHT;

int Alignment_obj::BOTTOM;

int Alignment_obj::CENTER_VERTICAL;

int Alignment_obj::CENTRE_VERTICAL;

int Alignment_obj::CENTER;

int Alignment_obj::CENTRE;

int Alignment_obj::MASK;


Alignment_obj::Alignment_obj()
{
}

bool Alignment_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"NOT") ) { outValue = ( NOT ); return true; }
		if (HX_FIELD_EQ(inName,"TOP") ) { outValue = ( TOP ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { outValue = ( LEFT ); return true; }
		if (HX_FIELD_EQ(inName,"MASK") ) { outValue = ( MASK ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { outValue = ( RIGHT ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { outValue = ( BOTTOM ); return true; }
		if (HX_FIELD_EQ(inName,"CENTER") ) { outValue = ( CENTER ); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE") ) { outValue = ( CENTRE ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"INVALID") ) { outValue = ( INVALID ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CENTER_VERTICAL") ) { outValue = ( CENTER_VERTICAL ); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE_VERTICAL") ) { outValue = ( CENTRE_VERTICAL ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CENTER_HORIZONTAL") ) { outValue = ( CENTER_HORIZONTAL ); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE_HORIZONTAL") ) { outValue = ( CENTRE_HORIZONTAL ); return true; }
	}
	return false;
}

bool Alignment_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"NOT") ) { NOT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TOP") ) { TOP=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MASK") ) { MASK=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CENTER") ) { CENTER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE") ) { CENTRE=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"INVALID") ) { INVALID=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CENTER_VERTICAL") ) { CENTER_VERTICAL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE_VERTICAL") ) { CENTRE_VERTICAL=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CENTER_HORIZONTAL") ) { CENTER_HORIZONTAL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CENTRE_HORIZONTAL") ) { CENTRE_HORIZONTAL=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Alignment_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Alignment_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Alignment_obj::INVALID,HX_("INVALID",d7,ae,1b,bb)},
	{::hx::fsInt,(void *) &Alignment_obj::NOT,HX_("NOT",f3,74,3b,00)},
	{::hx::fsInt,(void *) &Alignment_obj::CENTER_HORIZONTAL,HX_("CENTER_HORIZONTAL",4e,42,df,f1)},
	{::hx::fsInt,(void *) &Alignment_obj::CENTRE_HORIZONTAL,HX_("CENTRE_HORIZONTAL",c8,10,ed,25)},
	{::hx::fsInt,(void *) &Alignment_obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsInt,(void *) &Alignment_obj::TOP,HX_("TOP",75,02,40,00)},
	{::hx::fsInt,(void *) &Alignment_obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsInt,(void *) &Alignment_obj::BOTTOM,HX_("BOTTOM",eb,92,fb,17)},
	{::hx::fsInt,(void *) &Alignment_obj::CENTER_VERTICAL,HX_("CENTER_VERTICAL",60,0f,07,a9)},
	{::hx::fsInt,(void *) &Alignment_obj::CENTRE_VERTICAL,HX_("CENTRE_VERTICAL",5a,6b,8a,70)},
	{::hx::fsInt,(void *) &Alignment_obj::CENTER,HX_("CENTER",d5,d1,5d,b8)},
	{::hx::fsInt,(void *) &Alignment_obj::CENTRE,HX_("CENTRE",1b,dd,5d,b8)},
	{::hx::fsInt,(void *) &Alignment_obj::MASK,HX_("MASK",ec,08,17,33)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Alignment_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Alignment_obj::INVALID,"INVALID");
	HX_MARK_MEMBER_NAME(Alignment_obj::NOT,"NOT");
	HX_MARK_MEMBER_NAME(Alignment_obj::CENTER_HORIZONTAL,"CENTER_HORIZONTAL");
	HX_MARK_MEMBER_NAME(Alignment_obj::CENTRE_HORIZONTAL,"CENTRE_HORIZONTAL");
	HX_MARK_MEMBER_NAME(Alignment_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Alignment_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(Alignment_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Alignment_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(Alignment_obj::CENTER_VERTICAL,"CENTER_VERTICAL");
	HX_MARK_MEMBER_NAME(Alignment_obj::CENTRE_VERTICAL,"CENTRE_VERTICAL");
	HX_MARK_MEMBER_NAME(Alignment_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(Alignment_obj::CENTRE,"CENTRE");
	HX_MARK_MEMBER_NAME(Alignment_obj::MASK,"MASK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Alignment_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Alignment_obj::INVALID,"INVALID");
	HX_VISIT_MEMBER_NAME(Alignment_obj::NOT,"NOT");
	HX_VISIT_MEMBER_NAME(Alignment_obj::CENTER_HORIZONTAL,"CENTER_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(Alignment_obj::CENTRE_HORIZONTAL,"CENTRE_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(Alignment_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Alignment_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(Alignment_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Alignment_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(Alignment_obj::CENTER_VERTICAL,"CENTER_VERTICAL");
	HX_VISIT_MEMBER_NAME(Alignment_obj::CENTRE_VERTICAL,"CENTRE_VERTICAL");
	HX_VISIT_MEMBER_NAME(Alignment_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(Alignment_obj::CENTRE,"CENTRE");
	HX_VISIT_MEMBER_NAME(Alignment_obj::MASK,"MASK");
};

#endif

::hx::Class Alignment_obj::__mClass;

static ::String Alignment_obj_sStaticFields[] = {
	HX_("INVALID",d7,ae,1b,bb),
	HX_("NOT",f3,74,3b,00),
	HX_("CENTER_HORIZONTAL",4e,42,df,f1),
	HX_("CENTRE_HORIZONTAL",c8,10,ed,25),
	HX_("LEFT",07,d0,70,32),
	HX_("TOP",75,02,40,00),
	HX_("RIGHT",bc,43,52,67),
	HX_("BOTTOM",eb,92,fb,17),
	HX_("CENTER_VERTICAL",60,0f,07,a9),
	HX_("CENTRE_VERTICAL",5a,6b,8a,70),
	HX_("CENTER",d5,d1,5d,b8),
	HX_("CENTRE",1b,dd,5d,b8),
	HX_("MASK",ec,08,17,33),
	::String(null())
};

void Alignment_obj::__register()
{
	Alignment_obj _hx_dummy;
	Alignment_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("wx.widgets.Alignment",37,0a,09,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Alignment_obj::__GetStatic;
	__mClass->mSetStaticField = &Alignment_obj::__SetStatic;
	__mClass->mMarkFunc = Alignment_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Alignment_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Alignment_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Alignment_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alignment_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alignment_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Alignment_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_5_boot)
HXDLIN(   5)		INVALID = wxALIGN_INVALID;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_6_boot)
HXDLIN(   6)		NOT = wxALIGN_NOT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_7_boot)
HXDLIN(   7)		CENTER_HORIZONTAL = wxALIGN_CENTER_HORIZONTAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_8_boot)
HXDLIN(   8)		CENTRE_HORIZONTAL = wxALIGN_CENTRE_HORIZONTAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_9_boot)
HXDLIN(   9)		LEFT = wxALIGN_LEFT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_10_boot)
HXDLIN(  10)		TOP = wxALIGN_TOP;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_11_boot)
HXDLIN(  11)		RIGHT = wxALIGN_RIGHT;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_12_boot)
HXDLIN(  12)		BOTTOM = wxALIGN_BOTTOM;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_13_boot)
HXDLIN(  13)		CENTER_VERTICAL = wxALIGN_CENTER_VERTICAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_14_boot)
HXDLIN(  14)		CENTRE_VERTICAL = wxALIGN_CENTRE_VERTICAL;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_15_boot)
HXDLIN(  15)		CENTER = wxALIGN_CENTER;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_16_boot)
HXDLIN(  16)		CENTRE = wxALIGN_CENTRE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f5c5c7b603bc967_17_boot)
HXDLIN(  17)		MASK = wxALIGN_MASK;
            	}
}

} // end namespace wx
} // end namespace widgets