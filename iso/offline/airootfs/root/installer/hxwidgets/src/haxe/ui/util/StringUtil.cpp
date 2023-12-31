// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_4_uncapitalizeFirstLetter,"haxe.ui.util.StringUtil","uncapitalizeFirstLetter",0xf85d5430,"haxe.ui.util.StringUtil.uncapitalizeFirstLetter","haxe/ui/util/StringUtil.hx",4,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_9_capitalizeFirstLetter,"haxe.ui.util.StringUtil","capitalizeFirstLetter",0x3603c169,"haxe.ui.util.StringUtil.capitalizeFirstLetter","haxe/ui/util/StringUtil.hx",9,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_15_capitalizeHyphens,"haxe.ui.util.StringUtil","capitalizeHyphens",0x495322f4,"haxe.ui.util.StringUtil.capitalizeHyphens","haxe/ui/util/StringUtil.hx",15,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_18_capitalizeDelim,"haxe.ui.util.StringUtil","capitalizeDelim",0xbc1dca62,"haxe.ui.util.StringUtil.capitalizeDelim","haxe/ui/util/StringUtil.hx",18,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_32_toDashes,"haxe.ui.util.StringUtil","toDashes",0x514906fc,"haxe.ui.util.StringUtil.toDashes","haxe/ui/util/StringUtil.hx",32,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_30_toDashes,"haxe.ui.util.StringUtil","toDashes",0x514906fc,"haxe.ui.util.StringUtil.toDashes","haxe/ui/util/StringUtil.hx",30,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_42_replaceVars,"haxe.ui.util.StringUtil","replaceVars",0xb30793bf,"haxe.ui.util.StringUtil.replaceVars","haxe/ui/util/StringUtil.hx",42,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_51_rpad,"haxe.ui.util.StringUtil","rpad",0x54709882,"haxe.ui.util.StringUtil.rpad","haxe/ui/util/StringUtil.hx",51,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_58_padDecimal,"haxe.ui.util.StringUtil","padDecimal",0x69789e9f,"haxe.ui.util.StringUtil.padDecimal","haxe/ui/util/StringUtil.hx",58,0x14027730)
HX_LOCAL_STACK_FRAME(_hx_pos_276022ad0c305d13_75_countTokens,"haxe.ui.util.StringUtil","countTokens",0x20a79f48,"haxe.ui.util.StringUtil.countTokens","haxe/ui/util/StringUtil.hx",75,0x14027730)
namespace haxe{
namespace ui{
namespace util{

void StringUtil_obj::__construct() { }

Dynamic StringUtil_obj::__CreateEmpty() { return new StringUtil_obj; }

void *StringUtil_obj::_hx_vtable = 0;

Dynamic StringUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringUtil_obj > _hx_result = new StringUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36d67457;
}

::String StringUtil_obj::uncapitalizeFirstLetter(::String s){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_4_uncapitalizeFirstLetter)
HXLINE(   5)		::String s1 = s.substr(0,1).toLowerCase();
HXDLIN(   5)		s = (s1 + s.substr(1,s.length));
HXLINE(   6)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,uncapitalizeFirstLetter,return )

::String StringUtil_obj::capitalizeFirstLetter(::String s){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_9_capitalizeFirstLetter)
HXLINE(  10)		::String s1 = s.substr(0,1).toUpperCase();
HXDLIN(  10)		s = (s1 + s.substr(1,s.length));
HXLINE(  11)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeFirstLetter,return )

::String StringUtil_obj::capitalizeHyphens(::String s){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_15_capitalizeHyphens)
HXDLIN(  15)		return ::haxe::ui::util::StringUtil_obj::capitalizeDelim(s,HX_("-",2d,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeHyphens,return )

::String StringUtil_obj::capitalizeDelim(::String s,::String d){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_18_capitalizeDelim)
HXLINE(  19)		::String r = s;
HXLINE(  20)		int n = r.indexOf(d,null());
HXLINE(  21)		while((n != -1)){
HXLINE(  22)			::String before = r.substr(0,n);
HXLINE(  23)			::String after = r.substr((n + 1),r.length);
HXLINE(  24)			r = (before + ::haxe::ui::util::StringUtil_obj::capitalizeFirstLetter(after));
HXLINE(  25)			n = r.indexOf(d,(n + 1));
            		}
HXLINE(  27)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,capitalizeDelim,return )

::String StringUtil_obj::toDashes(::String s,::hx::Null< bool >  __o_toLower){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::String _hx_run( ::EReg re){
            			HX_GC_STACKFRAME(&_hx_pos_276022ad0c305d13_32_toDashes)
HXLINE(  32)			return ((HX_("",00,00,00,00) + re->matched(1)) + HX_("-",2d,00,00,00));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		bool toLower = __o_toLower.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_276022ad0c305d13_30_toDashes)
HXLINE(  31)		::String s1 =  ::EReg_obj::__alloc( HX_CTX ,HX_("([a-zA-Z])(?=[A-Z])",86,7a,7c,3f),HX_("g",67,00,00,00))->map(s, ::Dynamic(new _hx_Closure_0()));
HXLINE(  35)		if ((toLower == true)) {
HXLINE(  36)			s1 = s1.toLowerCase();
            		}
HXLINE(  39)		return s1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,toDashes,return )

::String StringUtil_obj::replaceVars(::String s, ::haxe::ds::StringMap params){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_42_replaceVars)
HXLINE(  43)		if (::hx::IsNotNull( params )) {
HXLINE(  44)			 ::Dynamic k = params->keys();
HXDLIN(  44)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  44)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  45)				s = ::StringTools_obj::replace(s,((HX_("${",d7,1f,00,00) + k1) + HX_("}",7d,00,00,00)),( (::String)(params->get(k1)) ));
            			}
            		}
HXLINE(  48)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,replaceVars,return )

::String StringUtil_obj::rpad(::String s,int count,::String __o_c){
            		::String c = __o_c;
            		if (::hx::IsNull(__o_c)) c = HX_(" ",20,00,00,00);
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_51_rpad)
HXLINE(  52)		{
HXLINE(  52)			int _g = 0;
HXDLIN(  52)			int _g1 = count;
HXDLIN(  52)			while((_g < _g1)){
HXLINE(  52)				_g = (_g + 1);
HXDLIN(  52)				int i = (_g - 1);
HXLINE(  53)				s = (s + c);
            			}
            		}
HXLINE(  55)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringUtil_obj,rpad,return )

::String StringUtil_obj::padDecimal(Float v, ::Dynamic precision){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_58_padDecimal)
HXLINE(  59)		::String s = ::Std_obj::string(v);
HXLINE(  60)		bool _hx_tmp;
HXDLIN(  60)		if (::hx::IsNotNull( precision )) {
HXLINE(  60)			_hx_tmp = ::hx::IsLessEq( precision,0 );
            		}
            		else {
HXLINE(  60)			_hx_tmp = true;
            		}
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  61)			return s;
            		}
HXLINE(  64)		int n = s.indexOf(HX_(".",2e,00,00,00),null());
HXLINE(  65)		if ((n == -1)) {
HXLINE(  66)			n = s.length;
HXLINE(  67)			s = (s + HX_(".",2e,00,00,00));
            		}
HXLINE(  70)		int delta = (( (int)(precision) ) - ((s.length - n) - 1));
HXLINE(  72)		return ::haxe::ui::util::StringUtil_obj::rpad(s,delta,HX_("0",30,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,padDecimal,return )

int StringUtil_obj::countTokens(::String s,::String token){
            	HX_STACKFRAME(&_hx_pos_276022ad0c305d13_75_countTokens)
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		if (::hx::IsNotNull( s )) {
HXLINE(  76)			_hx_tmp = (s == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  76)			_hx_tmp = true;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  77)			return 0;
            		}
HXLINE(  79)		return (s.split(token)->length - 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringUtil_obj,countTokens,return )


StringUtil_obj::StringUtil_obj()
{
}

bool StringUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rpad") ) { outValue = rpad_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toDashes") ) { outValue = toDashes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"padDecimal") ) { outValue = padDecimal_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"replaceVars") ) { outValue = replaceVars_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"countTokens") ) { outValue = countTokens_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"capitalizeDelim") ) { outValue = capitalizeDelim_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"capitalizeHyphens") ) { outValue = capitalizeHyphens_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"capitalizeFirstLetter") ) { outValue = capitalizeFirstLetter_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"uncapitalizeFirstLetter") ) { outValue = uncapitalizeFirstLetter_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StringUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StringUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class StringUtil_obj::__mClass;

static ::String StringUtil_obj_sStaticFields[] = {
	HX_("uncapitalizeFirstLetter",f1,67,13,d0),
	HX_("capitalizeFirstLetter",ea,b2,39,df),
	HX_("capitalizeHyphens",f5,ff,ef,d2),
	HX_("capitalizeDelim",23,b5,d9,2e),
	HX_("toDashes",1b,ce,1f,49),
	HX_("replaceVars",00,ca,e4,62),
	HX_("rpad",21,a4,af,4b),
	HX_("padDecimal",7e,ab,e6,19),
	HX_("countTokens",89,d5,84,d0),
	::String(null())
};

void StringUtil_obj::__register()
{
	StringUtil_obj _hx_dummy;
	StringUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.StringUtil",ad,c7,99,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StringUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StringUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
