// Generated by Haxe 4.3.3
#ifndef INCLUDED_haxe_ui_containers_menus__MenuOptionBox_SelectedOptionBehaviour
#define INCLUDED_haxe_ui_containers_menus__MenuOptionBox_SelectedOptionBehaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS5(haxe,ui,containers,menus,_MenuOptionBox,SelectedOptionBehaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace containers{
namespace menus{
namespace _MenuOptionBox{


class HXCPP_CLASS_ATTRIBUTES SelectedOptionBehaviour_obj : public  ::haxe::ui::behaviours::Behaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::Behaviour_obj super;
		typedef SelectedOptionBehaviour_obj OBJ_;
		SelectedOptionBehaviour_obj();

	public:
		enum { _hx_ClassId = 0x6ea2424d };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.menus._MenuOptionBox.SelectedOptionBehaviour")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.menus._MenuOptionBox.SelectedOptionBehaviour"); }
		static ::hx::ObjectPtr< SelectedOptionBehaviour_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< SelectedOptionBehaviour_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SelectedOptionBehaviour_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SelectedOptionBehaviour",cd,0b,de,af); }

		 ::haxe::ui::util::VariantType get();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
} // end namespace _MenuOptionBox

#endif /* INCLUDED_haxe_ui_containers_menus__MenuOptionBox_SelectedOptionBehaviour */ 
