// Generated by Haxe 4.3.1
#ifndef INCLUDED_haxe_ui_backend_AppImpl
#define INCLUDED_haxe_ui_backend_AppImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,backend,AppBase)
HX_DECLARE_CLASS3(haxe,ui,backend,AppImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TimerImpl)
HX_DECLARE_CLASS3(haxe,ui,util,Timer)
HX_DECLARE_CLASS2(hx,widgets,App)
HX_DECLARE_CLASS2(hx,widgets,AppConsole)
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,EventFilter)
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,Frame)
HX_DECLARE_CLASS2(hx,widgets,NonOwnedWindow)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,TopLevelWindow)
HX_DECLARE_CLASS2(hx,widgets,Trackable)
HX_DECLARE_CLASS2(hx,widgets,Window)
HX_DECLARE_CLASS3(sys,thread,_Thread,HaxeThread)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES AppImpl_obj : public  ::haxe::ui::backend::AppBase_obj
{
	public:
		typedef  ::haxe::ui::backend::AppBase_obj super;
		typedef AppImpl_obj OBJ_;
		AppImpl_obj();

	public:
		enum { _hx_ClassId = 0x0e9feee7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.AppImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.AppImpl"); }
		static ::hx::ObjectPtr< AppImpl_obj > __new();
		static ::hx::ObjectPtr< AppImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AppImpl_obj();

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
		::String __ToString() const { return HX_("AppImpl",01,34,60,04); }

		static  ::sys::thread::_Thread::HaxeThread mainThread;
		 ::hx::widgets::App _app;
		 ::hx::widgets::Frame _frame;
		 ::Dynamic _hx___onEnd;
		Dynamic _hx___onEnd_dyn() { return _hx___onEnd;}
		void build();

		void onIdle( ::hx::widgets::Event event);
		::Dynamic onIdle_dyn();

		void onResize( ::hx::widgets::Event event);
		::Dynamic onResize_dyn();

		void onMove( ::hx::widgets::Event event);
		::Dynamic onMove_dyn();

		 ::haxe::ui::util::Timer _timer;
		void startTimer();
		::Dynamic startTimer_dyn();

		void endTimer();
		::Dynamic endTimer_dyn();

		void onTimer();
		::Dynamic onTimer_dyn();

		virtual void init( ::Dynamic onReady, ::Dynamic onEnd);

		 ::Dynamic getToolkitInit();

		void start();

		void exit();

		 ::haxe::ds::ObjectMap _cachedIcon;
		::String set_icon(::String value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_AppImpl */ 
