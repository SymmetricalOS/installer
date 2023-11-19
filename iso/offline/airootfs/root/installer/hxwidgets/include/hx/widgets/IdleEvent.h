// Generated by Haxe 4.3.3
#ifndef INCLUDED_hx_widgets_IdleEvent
#define INCLUDED_hx_widgets_IdleEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,Event)
HX_DECLARE_CLASS2(hx,widgets,IdleEvent)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES IdleEvent_obj : public  ::hx::widgets::Event_obj
{
	public:
		typedef  ::hx::widgets::Event_obj super;
		typedef IdleEvent_obj OBJ_;
		IdleEvent_obj();

	public:
		enum { _hx_ClassId = 0x24ffb6ab };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.IdleEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.IdleEvent"); }
		static ::hx::ObjectPtr< IdleEvent_obj > __new();
		static ::hx::ObjectPtr< IdleEvent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~IdleEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("IdleEvent",46,48,97,74); }

		void requestMore(::hx::Null< bool >  needMore);
		::Dynamic requestMore_dyn();

		::cpp::Pointer<  wxIdleEvent > idleEventRef;
		::cpp::Pointer<  wxIdleEvent > get_idleEventRef();
		::Dynamic get_idleEventRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_IdleEvent */ 
