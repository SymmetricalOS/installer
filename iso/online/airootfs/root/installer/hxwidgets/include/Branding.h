// Generated by Haxe 4.3.3
#ifndef INCLUDED_Branding
#define INCLUDED_Branding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Branding)



class HXCPP_CLASS_ATTRIBUTES Branding_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Branding_obj OBJ_;
		Branding_obj();

	public:
		enum { _hx_ClassId = 0x003c731b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Branding")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Branding"); }

		inline static ::hx::ObjectPtr< Branding_obj > __new() {
			::hx::ObjectPtr< Branding_obj > __this = new Branding_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Branding_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Branding_obj *__this = (Branding_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Branding_obj), false, "Branding"));
			*(void **)__this = Branding_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Branding_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Branding",5b,80,ab,a4); }

		static void __boot();
		static ::String name;
		static ::String shortName;
		static ::String version;
		static ::String shortVersion;
		static ::String versionedName;
		static ::String shortVersionedName;
};


#endif /* INCLUDED_Branding */ 
