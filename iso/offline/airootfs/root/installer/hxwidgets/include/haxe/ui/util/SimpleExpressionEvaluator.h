// Generated by Haxe 4.3.3
#ifndef INCLUDED_haxe_ui_util_SimpleExpressionEvaluator
#define INCLUDED_haxe_ui_util_SimpleExpressionEvaluator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,util,SimpleExpressionEvaluator)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES SimpleExpressionEvaluator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SimpleExpressionEvaluator_obj OBJ_;
		SimpleExpressionEvaluator_obj();

	public:
		enum { _hx_ClassId = 0x3c424281 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.SimpleExpressionEvaluator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.SimpleExpressionEvaluator"); }

		inline static ::hx::ObjectPtr< SimpleExpressionEvaluator_obj > __new() {
			::hx::ObjectPtr< SimpleExpressionEvaluator_obj > __this = new SimpleExpressionEvaluator_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SimpleExpressionEvaluator_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SimpleExpressionEvaluator_obj *__this = (SimpleExpressionEvaluator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleExpressionEvaluator_obj), false, "haxe.ui.util.SimpleExpressionEvaluator"));
			*(void **)__this = SimpleExpressionEvaluator_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SimpleExpressionEvaluator_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SimpleExpressionEvaluator",c5,8c,16,2d); }

		static bool evalCondition(::String condition);
		static ::Dynamic evalCondition_dyn();

		static bool defined(::String key);
		static ::Dynamic defined_dyn();

		static  ::Dynamic eval(::String s, ::Dynamic context);
		static ::Dynamic eval_dyn();

		static  ::Dynamic evalSingle(::String s, ::Dynamic context);
		static ::Dynamic evalSingle_dyn();

		static bool isNum(::String value);
		static ::Dynamic isNum_dyn();

		static bool isString(::String value);
		static ::Dynamic isString_dyn();

		static bool isBool(::String value);
		static ::Dynamic isBool_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_SimpleExpressionEvaluator */ 
