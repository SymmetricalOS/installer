// Generated by Haxe 4.3.3
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#define INCLUDED_haxe_ui_core_IValueComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES IValueComponent_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::Dynamic (::hx::Object :: *_hx_get_value)(); 
		static inline  ::Dynamic get_value( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IValueComponent_obj *>(_hx_.mPtr->_hx_getInterface(0x9229be7c)))->_hx_get_value)();
		}
		 ::Dynamic (::hx::Object :: *_hx_set_value)( ::Dynamic value); 
		static inline  ::Dynamic set_value( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::haxe::ui::core::IValueComponent_obj *>(_hx_.mPtr->_hx_getInterface(0x9229be7c)))->_hx_set_value)(value);
		}
};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_IValueComponent */ 
