// Generated by Haxe 4.3.3
#ifndef INCLUDED_hx_widgets_DataObjectSimple
#define INCLUDED_hx_widgets_DataObjectSimple

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_DataObject
#include <hx/widgets/DataObject.h>
#endif
HX_DECLARE_CLASS2(hx,widgets,DataObject)
HX_DECLARE_CLASS2(hx,widgets,DataObjectSimple)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES DataObjectSimple_obj : public  ::hx::widgets::DataObject_obj
{
	public:
		typedef  ::hx::widgets::DataObject_obj super;
		typedef DataObjectSimple_obj OBJ_;
		DataObjectSimple_obj();

	public:
		enum { _hx_ClassId = 0x472475da };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.DataObjectSimple")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.DataObjectSimple"); }
		static ::hx::ObjectPtr< DataObjectSimple_obj > __new();
		static ::hx::ObjectPtr< DataObjectSimple_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataObjectSimple_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataObjectSimple",bb,25,37,5b); }

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_DataObjectSimple */ 
