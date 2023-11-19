// Generated by Haxe 4.3.3
#ifndef INCLUDED_hx_widgets_TextDataObject
#define INCLUDED_hx_widgets_TextDataObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DataObjectSimple
#include <hx/widgets/DataObjectSimple.h>
#endif
#ifndef INCLUDED_ba0dc751eb097782
#define INCLUDED_ba0dc751eb097782
#include "wx/dataobj.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DataObject)
HX_DECLARE_CLASS2(hx,widgets,DataObjectSimple)
HX_DECLARE_CLASS2(hx,widgets,TextDataObject)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES TextDataObject_obj : public  ::hx::widgets::DataObjectSimple_obj
{
	public:
		typedef  ::hx::widgets::DataObjectSimple_obj super;
		typedef TextDataObject_obj OBJ_;
		TextDataObject_obj();

	public:
		enum { _hx_ClassId = 0x0e3b6731 };

		void __construct(::String text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.TextDataObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.TextDataObject"); }
		static ::hx::ObjectPtr< TextDataObject_obj > __new(::String text);
		static ::hx::ObjectPtr< TextDataObject_obj > __alloc(::hx::Ctx *_hx_ctx,::String text);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextDataObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextDataObject",b6,23,e7,93); }

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		::cpp::Pointer<  wxTextDataObject > textDataObjectRef;
		::cpp::Pointer<  wxTextDataObject > get_textDataObjectRef();
		::Dynamic get_textDataObjectRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_TextDataObject */ 
