// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_actions_IActionInputSource
#include <haxe/ui/actions/IActionInputSource.h>
#endif

namespace haxe{
namespace ui{
namespace actions{


static ::String IActionInputSource_obj_sMemberFields[] = {
	HX_("start",62,74,0b,84),
	::String(null()) };

::hx::Class IActionInputSource_obj::__mClass;

void IActionInputSource_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.actions.IActionInputSource",49,09,c9,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IActionInputSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xd15cd5e9 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace actions
