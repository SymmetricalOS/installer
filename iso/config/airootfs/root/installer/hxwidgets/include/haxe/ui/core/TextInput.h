// Generated by Haxe 4.3.1
#ifndef INCLUDED_haxe_ui_core_TextInput
#define INCLUDED_haxe_ui_core_TextInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,TextBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TextInputImpl)
HX_DECLARE_CLASS3(haxe,ui,core,TextInput)
HX_DECLARE_CLASS3(haxe,ui,core,TextInputData)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES TextInput_obj : public  ::haxe::ui::backend::TextInputImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::TextInputImpl_obj super;
		typedef TextInput_obj OBJ_;
		TextInput_obj();

	public:
		enum { _hx_ClassId = 0x2a307560 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.TextInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.TextInput"); }
		static ::hx::ObjectPtr< TextInput_obj > __new();
		static ::hx::ObjectPtr< TextInput_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TextInput",fd,33,de,f8); }

		 ::haxe::ds::StringMap _invalidationFlags;
		bool _isAllInvalid;
		bool _isValidating;
		::String get_id();
		::Dynamic get_id_dyn();

		::String set_id(::String value);
		::Dynamic set_id_dyn();

		bool isComponentOffscreen;
		bool get_isComponentOffscreen();
		::Dynamic get_isComponentOffscreen_dyn();

		void focus();

		void blur();

		 ::haxe::ui::styles::Style get_textStyle();
		::Dynamic get_textStyle_dyn();

		 ::haxe::ui::styles::Style set_textStyle( ::haxe::ui::styles::Style value);
		::Dynamic set_textStyle_dyn();

		 ::haxe::ui::core::TextInputData data;
		 ::haxe::ui::core::TextInputData get_data();
		::Dynamic get_data_dyn();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		::String get_htmlText();
		::Dynamic get_htmlText_dyn();

		::String set_htmlText(::String value);
		::Dynamic set_htmlText_dyn();

		bool get_password();
		::Dynamic get_password_dyn();

		bool set_password(bool value);
		::Dynamic set_password_dyn();

		Float get_left();
		::Dynamic get_left_dyn();

		Float set_left(Float value);
		::Dynamic set_left_dyn();

		Float get_top();
		::Dynamic get_top_dyn();

		Float set_top(Float value);
		::Dynamic set_top_dyn();

		Float set_width(Float value);
		::Dynamic set_width_dyn();

		Float get_width();
		::Dynamic get_width_dyn();

		Float set_height(Float value);
		::Dynamic set_height_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		Float textWidth;
		Float get_textWidth();
		::Dynamic get_textWidth_dyn();

		Float textHeight;
		Float get_textHeight();
		::Dynamic get_textHeight_dyn();

		bool get_multiline();
		::Dynamic get_multiline_dyn();

		bool set_multiline(bool value);
		::Dynamic set_multiline_dyn();

		bool get_wordWrap();
		::Dynamic get_wordWrap_dyn();

		bool set_wordWrap(bool value);
		::Dynamic set_wordWrap_dyn();

		Float get_hscrollPos();
		::Dynamic get_hscrollPos_dyn();

		Float set_hscrollPos(Float value);
		::Dynamic set_hscrollPos_dyn();

		Float hscrollMax;
		Float get_hscrollMax();
		::Dynamic get_hscrollMax_dyn();

		Float hscrollPageSize;
		Float get_hscrollPageSize();
		::Dynamic get_hscrollPageSize_dyn();

		Float get_vscrollPos();
		::Dynamic get_vscrollPos_dyn();

		Float set_vscrollPos(Float value);
		::Dynamic set_vscrollPos_dyn();

		Float vscrollMax;
		Float get_vscrollMax();
		::Dynamic get_vscrollMax_dyn();

		Float vscrollPageSize;
		Float get_vscrollPageSize();
		::Dynamic get_vscrollPageSize_dyn();

		bool isComponentInvalid(::String flag);
		::Dynamic isComponentInvalid_dyn();

		void invalidateComponent(::String flag);
		::Dynamic invalidateComponent_dyn();

		int _depth;
		int get_depth();
		::Dynamic get_depth_dyn();

		int set_depth(int value);
		::Dynamic set_depth_dyn();

		void updateComponentDisplay();
		::Dynamic updateComponentDisplay_dyn();

		void validateComponent(::hx::Null< bool >  nextFrame);
		::Dynamic validateComponent_dyn();

		void validateComponentInternal();
		::Dynamic validateComponentInternal_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_TextInput */ 
