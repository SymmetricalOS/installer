// Generated by Haxe 4.3.3
#ifndef INCLUDED_haxe_ui_components__TextArea_TextAreaBuilder
#define INCLUDED_haxe_ui_components__TextArea_TextAreaBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,components,HorizontalScroll)
HX_DECLARE_CLASS3(haxe,ui,components,Scroll)
HX_DECLARE_CLASS3(haxe,ui,components,TextArea)
HX_DECLARE_CLASS3(haxe,ui,components,VerticalScroll)
HX_DECLARE_CLASS4(haxe,ui,components,_TextArea,TextAreaBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IDirectionalComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace components{
namespace _TextArea{


class HXCPP_CLASS_ATTRIBUTES TextAreaBuilder_obj : public  ::haxe::ui::core::CompositeBuilder_obj
{
	public:
		typedef  ::haxe::ui::core::CompositeBuilder_obj super;
		typedef TextAreaBuilder_obj OBJ_;
		TextAreaBuilder_obj();

	public:
		enum { _hx_ClassId = 0x526a4ffc };

		void __construct( ::haxe::ui::components::TextArea textarea);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._TextArea.TextAreaBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._TextArea.TextAreaBuilder"); }
		static ::hx::ObjectPtr< TextAreaBuilder_obj > __new( ::haxe::ui::components::TextArea textarea);
		static ::hx::ObjectPtr< TextAreaBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::TextArea textarea);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextAreaBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextAreaBuilder",41,1b,f5,a9); }

		static bool isHtml(::String v);
		static ::Dynamic isHtml_dyn();

		 ::haxe::ui::components::TextArea _textarea;
		void checkScrolls();
		::Dynamic checkScrolls_dyn();

		 ::haxe::ui::components::HorizontalScroll createHScroll();
		::Dynamic createHScroll_dyn();

		 ::haxe::ui::components::VerticalScroll createVScroll();
		::Dynamic createVScroll_dyn();

		void applyStyle( ::haxe::ui::styles::Style style);

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextArea

#endif /* INCLUDED_haxe_ui_components__TextArea_TextAreaBuilder */ 
