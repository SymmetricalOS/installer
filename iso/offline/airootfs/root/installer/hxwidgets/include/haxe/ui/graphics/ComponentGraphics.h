// Generated by Haxe 4.3.3
#ifndef INCLUDED_haxe_ui_graphics_ComponentGraphics
#define INCLUDED_haxe_ui_graphics_ComponentGraphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsImpl
#include <haxe/ui/backend/ComponentGraphicsImpl.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentGraphicsBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentGraphicsImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,graphics,ComponentGraphics)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES ComponentGraphics_obj : public  ::haxe::ui::backend::ComponentGraphicsImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::ComponentGraphicsImpl_obj super;
		typedef ComponentGraphics_obj OBJ_;
		ComponentGraphics_obj();

	public:
		enum { _hx_ClassId = 0x071217ff };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.graphics.ComponentGraphics")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.graphics.ComponentGraphics"); }
		static ::hx::ObjectPtr< ComponentGraphics_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< ComponentGraphics_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentGraphics_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentGraphics",88,ea,9d,b6); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace graphics

#endif /* INCLUDED_haxe_ui_graphics_ComponentGraphics */ 
