// Generated by Haxe 4.3.3
#ifndef INCLUDED_hx_widgets_DataViewItem
#define INCLUDED_hx_widgets_DataViewItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_17f2a4542ec8b462
#define INCLUDED_17f2a4542ec8b462
#include "wx/dataview.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,DataViewItem)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataViewItem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DataViewItem_obj OBJ_;
		DataViewItem_obj();

	public:
		enum { _hx_ClassId = 0x2fbd313d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataViewItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataViewItem"); }
		static ::hx::ObjectPtr< DataViewItem_obj > __new();
		static ::hx::ObjectPtr< DataViewItem_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataViewItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataViewItem",82,52,ea,b6); }

		 wxDataViewItem _item;
		int id;
		int get_id();
		::Dynamic get_id_dyn();

		bool isOK;
		bool get_isOK();
		::Dynamic get_isOK_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataViewItem */ 
