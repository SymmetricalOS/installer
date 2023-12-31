// Generated by Haxe 4.3.3
#ifndef INCLUDED_wx_widgets_Alignment
#define INCLUDED_wx_widgets_Alignment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(wx,widgets,Alignment)

#include <wx/defs.h>
namespace wx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Alignment_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Alignment_obj OBJ_;
		Alignment_obj();

	public:
		enum { _hx_ClassId = 0x3d0f8cb9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="wx.widgets.Alignment")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"wx.widgets.Alignment"); }

		inline static ::hx::ObjectPtr< Alignment_obj > __new() {
			::hx::ObjectPtr< Alignment_obj > __this = new Alignment_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Alignment_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Alignment_obj *__this = (Alignment_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alignment_obj), false, "wx.widgets.Alignment"));
			*(void **)__this = Alignment_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Alignment_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Alignment",c3,c2,10,8c); }

		static void __boot();
		static int INVALID;
		static int NOT;
		static int CENTER_HORIZONTAL;
		static int CENTRE_HORIZONTAL;
		static int LEFT;
		static int TOP;
		static int RIGHT;
		static int BOTTOM;
		static int CENTER_VERTICAL;
		static int CENTRE_VERTICAL;
		static int CENTER;
		static int CENTRE;
		static int MASK;
};

} // end namespace wx
} // end namespace widgets

#endif /* INCLUDED_wx_widgets_Alignment */ 
