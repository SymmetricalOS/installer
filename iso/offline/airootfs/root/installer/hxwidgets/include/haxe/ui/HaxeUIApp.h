// Generated by Haxe 4.3.3
#ifndef INCLUDED_haxe_ui_HaxeUIApp
#define INCLUDED_haxe_ui_HaxeUIApp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_AppImpl
#include <haxe/ui/backend/AppImpl.h>
#endif
HX_DECLARE_CLASS2(haxe,ui,HaxeUIApp)
HX_DECLARE_CLASS2(haxe,ui,Preloader)
HX_DECLARE_CLASS3(haxe,ui,backend,AppBase)
HX_DECLARE_CLASS3(haxe,ui,backend,AppImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentSurface)
HX_DECLARE_CLASS3(haxe,ui,containers,Box)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES HaxeUIApp_obj : public  ::haxe::ui::backend::AppImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::AppImpl_obj super;
		typedef HaxeUIApp_obj OBJ_;
		HaxeUIApp_obj();

	public:
		enum { _hx_ClassId = 0x47ec5b65 };

		void __construct( ::Dynamic options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.HaxeUIApp")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.HaxeUIApp"); }
		static ::hx::ObjectPtr< HaxeUIApp_obj > __new( ::Dynamic options);
		static ::hx::ObjectPtr< HaxeUIApp_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HaxeUIApp_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HaxeUIApp",a7,78,9f,01); }

		static  ::haxe::ui::HaxeUIApp instance;
		 ::Dynamic _options;
		bool _readyCalled;
		void ready( ::Dynamic onReady, ::Dynamic onEnd);
		::Dynamic ready_dyn();

		::hx::Class preloaderClass;
		 ::haxe::ui::Preloader preloader;
		 ::Dynamic _onReady;
		Dynamic _onReady_dyn() { return _onReady;}
		 ::Dynamic _onEnd;
		Dynamic _onEnd_dyn() { return _onEnd;}
		void init( ::Dynamic onReady, ::Dynamic onEnd);

		void onPreloadComplete();
		::Dynamic onPreloadComplete_dyn();

		void startPreload( ::Dynamic onComplete);

		void handlePreload(::Array< ::Dynamic> list, ::Dynamic onComplete, ::haxe::ui::Preloader preloader);
		::Dynamic handlePreload_dyn();

		::String get_title();
		::Dynamic get_title_dyn();

		::String set_title(::String value);
		::Dynamic set_title_dyn();

		 ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component component);
		::Dynamic addComponent_dyn();

		 ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  dispose);
		::Dynamic removeComponent_dyn();

		 ::haxe::ui::core::Component setComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic setComponentIndex_dyn();

		::Array< ::Dynamic> buildPreloadList();

};

} // end namespace haxe
} // end namespace ui

#endif /* INCLUDED_haxe_ui_HaxeUIApp */ 
