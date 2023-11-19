// Generated by Haxe 4.3.3
#ifndef INCLUDED_haxe_ui_containers__TableView_AddColumn
#define INCLUDED_haxe_ui_containers__TableView_AddColumn

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
HX_DECLARE_CLASS4(haxe,ui,containers,_TableView,AddColumn)
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
namespace _TableView{


class HXCPP_CLASS_ATTRIBUTES AddColumn_obj : public  ::haxe::ui::behaviours::Behaviour_obj
{
	public:
		typedef  ::haxe::ui::behaviours::Behaviour_obj super;
		typedef AddColumn_obj OBJ_;
		AddColumn_obj();

	public:
		enum { _hx_ClassId = 0x4c9e4c6f };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers._TableView.AddColumn")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers._TableView.AddColumn"); }
		static ::hx::ObjectPtr< AddColumn_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< AddColumn_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AddColumn_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AddColumn",b7,63,82,20); }

		 ::haxe::ui::util::VariantType call( ::Dynamic param);

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView

#endif /* INCLUDED_haxe_ui_containers__TableView_AddColumn */ 
