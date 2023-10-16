// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBox
#include <haxe/ui/components/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_CheckBoxBuilder
#include <haxe/ui/components/CheckBoxBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBox
#include <haxe/ui/components/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxBuilder
#include <haxe/ui/components/OptionBoxBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_components_OptionBoxGroups
#include <haxe/ui/components/OptionBoxGroups.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4d0c124ac8f3c03a_179_new,"haxe.ui.components.OptionBoxGroups","new",0x79379796,"haxe.ui.components.OptionBoxGroups.new","haxe/ui/components/OptionBox.hx",179,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_4d0c124ac8f3c03a_185_get,"haxe.ui.components.OptionBoxGroups","get",0x793247cc,"haxe.ui.components.OptionBoxGroups.get","haxe/ui/components/OptionBox.hx",185,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_4d0c124ac8f3c03a_189_set,"haxe.ui.components.OptionBoxGroups","set",0x793b62d8,"haxe.ui.components.OptionBoxGroups.set","haxe/ui/components/OptionBox.hx",189,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_4d0c124ac8f3c03a_192_add,"haxe.ui.components.OptionBoxGroups","add",0x792db957,"haxe.ui.components.OptionBoxGroups.add","haxe/ui/components/OptionBox.hx",192,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_4d0c124ac8f3c03a_204_remove,"haxe.ui.components.OptionBoxGroups","remove",0xa8acbace,"haxe.ui.components.OptionBoxGroups.remove","haxe/ui/components/OptionBox.hx",204,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_4d0c124ac8f3c03a_216_reset,"haxe.ui.components.OptionBoxGroups","reset",0x3594ca85,"haxe.ui.components.OptionBoxGroups.reset","haxe/ui/components/OptionBox.hx",216,0x8f34a36f)
HX_LOCAL_STACK_FRAME(_hx_pos_4d0c124ac8f3c03a_169_get_instance,"haxe.ui.components.OptionBoxGroups","get_instance",0x549b75a8,"haxe.ui.components.OptionBoxGroups.get_instance","haxe/ui/components/OptionBox.hx",169,0x8f34a36f)
namespace haxe{
namespace ui{
namespace components{

void OptionBoxGroups_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_4d0c124ac8f3c03a_179_new)
HXDLIN( 179)		this->_groups =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic OptionBoxGroups_obj::__CreateEmpty() { return new OptionBoxGroups_obj; }

void *OptionBoxGroups_obj::_hx_vtable = 0;

Dynamic OptionBoxGroups_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionBoxGroups_obj > _hx_result = new OptionBoxGroups_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OptionBoxGroups_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x59a0e7da;
}

::Array< ::Dynamic> OptionBoxGroups_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_4d0c124ac8f3c03a_185_get)
HXDLIN( 185)		return ( (::Array< ::Dynamic>)(this->_groups->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionBoxGroups_obj,get,return )

void OptionBoxGroups_obj::set(::String name,::Array< ::Dynamic> options){
            	HX_STACKFRAME(&_hx_pos_4d0c124ac8f3c03a_189_set)
HXDLIN( 189)		this->_groups->set(name,options);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OptionBoxGroups_obj,set,(void))

void OptionBoxGroups_obj::add(::String name, ::haxe::ui::components::OptionBox optionbox){
            	HX_STACKFRAME(&_hx_pos_4d0c124ac8f3c03a_192_add)
HXLINE( 193)		::Array< ::Dynamic> arr = this->get(name);
HXLINE( 194)		if (::hx::IsNull( arr )) {
HXLINE( 195)			arr = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 198)		if ((arr->indexOf(optionbox,null()) == -1)) {
HXLINE( 199)			arr->push(optionbox);
            		}
HXLINE( 201)		this->set(name,arr);
            	}


HX_DEFINE_DYNAMIC_FUNC2(OptionBoxGroups_obj,add,(void))

void OptionBoxGroups_obj::remove(::String name, ::haxe::ui::components::OptionBox optionbox){
            	HX_STACKFRAME(&_hx_pos_4d0c124ac8f3c03a_204_remove)
HXLINE( 205)		::Array< ::Dynamic> arr = this->get(name);
HXLINE( 206)		if (::hx::IsNull( arr )) {
HXLINE( 207)			return;
            		}
HXLINE( 210)		arr->remove(optionbox);
HXLINE( 211)		if ((arr->length == 0)) {
HXLINE( 212)			this->_groups->remove(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(OptionBoxGroups_obj,remove,(void))

void OptionBoxGroups_obj::reset(::String name){
            	HX_STACKFRAME(&_hx_pos_4d0c124ac8f3c03a_216_reset)
HXLINE( 217)		::Array< ::Dynamic> arr = this->get(name);
HXLINE( 218)		if (::hx::IsNull( arr )) {
HXLINE( 219)			return;
            		}
HXLINE( 222)		 ::haxe::ui::components::OptionBox selection = null();
HXLINE( 223)		{
HXLINE( 223)			int _g = 0;
HXDLIN( 223)			while((_g < arr->length)){
HXLINE( 223)				 ::haxe::ui::components::OptionBox item = arr->__get(_g).StaticCast<  ::haxe::ui::components::OptionBox >();
HXDLIN( 223)				_g = (_g + 1);
HXLINE( 224)				if ((item->get_selected() == true)) {
HXLINE( 225)					selection = item;
HXLINE( 226)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 230)		if (::hx::IsNull( selection )) {
HXLINE( 231)			return;
            		}
HXLINE( 234)		::hx::TCast<  ::haxe::ui::components::OptionBoxBuilder >::cast(selection->_compositeBuilder)->setSelection(selection,false,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionBoxGroups_obj,reset,(void))

 ::haxe::ui::components::OptionBoxGroups OptionBoxGroups_obj::_instance;

 ::haxe::ui::components::OptionBoxGroups OptionBoxGroups_obj::instance;

 ::haxe::ui::components::OptionBoxGroups OptionBoxGroups_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_4d0c124ac8f3c03a_169_get_instance)
HXLINE( 170)		if (::hx::IsNull( ::haxe::ui::components::OptionBoxGroups_obj::_instance )) {
HXLINE( 171)			::haxe::ui::components::OptionBoxGroups_obj::_instance =  ::haxe::ui::components::OptionBoxGroups_obj::__alloc( HX_CTX );
            		}
HXLINE( 173)		return ::haxe::ui::components::OptionBoxGroups_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(OptionBoxGroups_obj,get_instance,return )


::hx::ObjectPtr< OptionBoxGroups_obj > OptionBoxGroups_obj::__new() {
	::hx::ObjectPtr< OptionBoxGroups_obj > __this = new OptionBoxGroups_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OptionBoxGroups_obj > OptionBoxGroups_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OptionBoxGroups_obj *__this = (OptionBoxGroups_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionBoxGroups_obj), true, "haxe.ui.components.OptionBoxGroups"));
	*(void **)__this = OptionBoxGroups_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OptionBoxGroups_obj::OptionBoxGroups_obj()
{
}

void OptionBoxGroups_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionBoxGroups);
	HX_MARK_MEMBER_NAME(_groups,"_groups");
	HX_MARK_END_CLASS();
}

void OptionBoxGroups_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_groups,"_groups");
}

::hx::Val OptionBoxGroups_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { return ::hx::Val( _groups ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionBoxGroups_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val OptionBoxGroups_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionBoxGroups_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::components::OptionBoxGroups >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::components::OptionBoxGroups >(); return true; }
	}
	return false;
}

void OptionBoxGroups_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_groups",f3,35,9f,8a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionBoxGroups_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(OptionBoxGroups_obj,_groups),HX_("_groups",f3,35,9f,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionBoxGroups_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::OptionBoxGroups */ ,(void *) &OptionBoxGroups_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::components::OptionBoxGroups */ ,(void *) &OptionBoxGroups_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionBoxGroups_obj_sMemberFields[] = {
	HX_("_groups",f3,35,9f,8a),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("reset",cf,49,c8,e6),
	::String(null()) };

static void OptionBoxGroups_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionBoxGroups_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(OptionBoxGroups_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionBoxGroups_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionBoxGroups_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(OptionBoxGroups_obj::instance,"instance");
};

#endif

::hx::Class OptionBoxGroups_obj::__mClass;

static ::String OptionBoxGroups_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void OptionBoxGroups_obj::__register()
{
	OptionBoxGroups_obj _hx_dummy;
	OptionBoxGroups_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.OptionBoxGroups",a4,d4,ca,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionBoxGroups_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionBoxGroups_obj::__SetStatic;
	__mClass->mMarkFunc = OptionBoxGroups_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionBoxGroups_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionBoxGroups_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionBoxGroups_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionBoxGroups_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionBoxGroups_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionBoxGroups_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components