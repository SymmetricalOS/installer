// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif

namespace haxe{
namespace ui{
namespace core{


static ::String IValueComponent_obj_sMemberFields[] = {
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	::String(null()) };

::hx::Class IValueComponent_obj::__mClass;

void IValueComponent_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.IValueComponent",38,74,f2,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IValueComponent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x9229be7c >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
