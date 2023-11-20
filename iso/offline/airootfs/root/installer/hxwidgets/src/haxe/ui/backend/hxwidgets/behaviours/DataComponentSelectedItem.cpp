// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_behaviours_DataComponentSelectedItem
#include <haxe/ui/backend/hxwidgets/behaviours/DataComponentSelectedItem.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
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
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ffe597081a33de9c_10_new,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem","new",0x17628636,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem.new","haxe/ui/backend/hxwidgets/behaviours/DataComponentSelectedItem.hx",10,0xb7ed4fd9)
HX_LOCAL_STACK_FRAME(_hx_pos_ffe597081a33de9c_13_getDynamic,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem","getDynamic",0x07047673,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem.getDynamic","haxe/ui/backend/hxwidgets/behaviours/DataComponentSelectedItem.hx",13,0xb7ed4fd9)
HX_LOCAL_STACK_FRAME(_hx_pos_ffe597081a33de9c_41_setDynamic,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem","setDynamic",0x0a8214e7,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem.setDynamic","haxe/ui/backend/hxwidgets/behaviours/DataComponentSelectedItem.hx",41,0xb7ed4fd9)
HX_LOCAL_STACK_FRAME(_hx_pos_ffe597081a33de9c_53_findIndexOfItem,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem","findIndexOfItem",0x0ee22199,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem.findIndexOfItem","haxe/ui/backend/hxwidgets/behaviours/DataComponentSelectedItem.hx",53,0xb7ed4fd9)
HX_LOCAL_STACK_FRAME(_hx_pos_ffe597081a33de9c_71_valueToString,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem","valueToString",0x4bd00293,"haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem.valueToString","haxe/ui/backend/hxwidgets/behaviours/DataComponentSelectedItem.hx",71,0xb7ed4fd9)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace behaviours{

void DataComponentSelectedItem_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_ffe597081a33de9c_10_new)
HXLINE(  11)		this->_cachedValue = null();
HXLINE(  10)		super::__construct(component);
            	}

Dynamic DataComponentSelectedItem_obj::__CreateEmpty() { return new DataComponentSelectedItem_obj; }

void *DataComponentSelectedItem_obj::_hx_vtable = 0;

Dynamic DataComponentSelectedItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataComponentSelectedItem_obj > _hx_result = new DataComponentSelectedItem_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataComponentSelectedItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x78d1f5a2 || inClassId==(int)0x7e17fa9f;
	}
}

 ::Dynamic DataComponentSelectedItem_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_ffe597081a33de9c_13_getDynamic)
HXLINE(  14)		if ((::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::core::IDataComponent >()) == false)) {
HXLINE(  15)			return false;
            		}
HXLINE(  18)		::Dynamic dataComponent =  ::hx::interface_check(this->_component,0xfafb3fc3);
HXLINE(  19)		 ::haxe::ui::data::DataSource ds = ::haxe::ui::core::IDataComponent_obj::get_dataSource(dataComponent);
HXLINE(  20)		 ::Dynamic selectedItem = null();
HXLINE(  22)		if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::components::DropDown >())) {
HXLINE(  23)			 ::haxe::ui::components::DropDown dropDown = ::hx::TCast<  ::haxe::ui::components::DropDown >::cast(this->_component);
HXLINE(  24)			if ((dropDown->get_selectedIndex() > -1)) {
HXLINE(  25)				selectedItem = ds->get(dropDown->get_selectedIndex());
            			}
            			else {
HXLINE(  26)				if (::hx::IsNotNull( this->_cachedValue )) {
HXLINE(  27)					selectedItem = this->_cachedValue;
            				}
            			}
            		}
            		else {
HXLINE(  29)			if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::ListView >())) {
HXLINE(  30)				 ::haxe::ui::containers::ListView listview = ::hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE(  31)				if ((listview->get_selectedIndex() > -1)) {
HXLINE(  32)					selectedItem = ds->get(listview->get_selectedIndex());
            				}
            				else {
HXLINE(  33)					if (::hx::IsNotNull( this->_cachedValue )) {
HXLINE(  34)						selectedItem = this->_cachedValue;
            					}
            				}
            			}
            		}
HXLINE(  38)		return selectedItem;
            	}


void DataComponentSelectedItem_obj::setDynamic( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ffe597081a33de9c_41_setDynamic)
HXLINE(  42)		this->_cachedValue = value;
HXLINE(  43)		::Dynamic dataComponent =  ::hx::interface_check(this->_component,0xfafb3fc3);
HXLINE(  44)		 ::haxe::ui::data::DataSource ds = ::haxe::ui::core::IDataComponent_obj::get_dataSource(dataComponent);
HXLINE(  45)		int selectedIndex = this->findIndexOfItem(value,ds);
HXLINE(  46)		if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::components::DropDown >())) {
HXLINE(  47)			int dropDown = ::hx::TCast<  ::haxe::ui::components::DropDown >::cast(this->_component)->set_selectedIndex(selectedIndex);
            		}
            		else {
HXLINE(  48)			if (::Std_obj::isOfType(this->_component,::hx::ClassOf< ::haxe::ui::containers::ListView >())) {
HXLINE(  49)				int listview = ::hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component)->set_selectedIndex(selectedIndex);
            			}
            		}
            	}


int DataComponentSelectedItem_obj::findIndexOfItem( ::Dynamic value, ::haxe::ui::data::DataSource ds){
            	HX_STACKFRAME(&_hx_pos_ffe597081a33de9c_53_findIndexOfItem)
HXLINE(  54)		int n = -1;
HXLINE(  56)		::String text = this->valueToString(value);
HXLINE(  57)		if (::hx::IsNull( text )) {
HXLINE(  58)			return -1;
            		}
HXLINE(  61)		{
HXLINE(  61)			int _g = 0;
HXDLIN(  61)			int _g1 = ds->get_size();
HXDLIN(  61)			while((_g < _g1)){
HXLINE(  61)				_g = (_g + 1);
HXDLIN(  61)				int i = (_g - 1);
HXLINE(  62)				if ((text == this->valueToString(ds->get(i)))) {
HXLINE(  63)					n = i;
HXLINE(  64)					goto _hx_goto_3;
            				}
            			}
            			_hx_goto_3:;
            		}
HXLINE(  68)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DataComponentSelectedItem_obj,findIndexOfItem,return )

::String DataComponentSelectedItem_obj::valueToString( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ffe597081a33de9c_71_valueToString)
HXLINE(  72)		::String text = null();
HXLINE(  73)		if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(value),::ValueType_obj::TObject_dyn() )) {
HXLINE(  74)			text = ( (::String)(value->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE(  75)			if (::hx::IsNull( text )) {
HXLINE(  76)				text = ( (::String)(value->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
            			}
            		}
            		else {
HXLINE(  79)			text = ::Std_obj::string(value);
            		}
HXLINE(  81)		return text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DataComponentSelectedItem_obj,valueToString,return )


::hx::ObjectPtr< DataComponentSelectedItem_obj > DataComponentSelectedItem_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DataComponentSelectedItem_obj > __this = new DataComponentSelectedItem_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DataComponentSelectedItem_obj > DataComponentSelectedItem_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DataComponentSelectedItem_obj *__this = (DataComponentSelectedItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataComponentSelectedItem_obj), true, "haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem"));
	*(void **)__this = DataComponentSelectedItem_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DataComponentSelectedItem_obj::DataComponentSelectedItem_obj()
{
}

void DataComponentSelectedItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataComponentSelectedItem);
	HX_MARK_MEMBER_NAME(_cachedValue,"_cachedValue");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataComponentSelectedItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cachedValue,"_cachedValue");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataComponentSelectedItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDynamic") ) { return ::hx::Val( setDynamic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedValue") ) { return ::hx::Val( _cachedValue ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"valueToString") ) { return ::hx::Val( valueToString_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"findIndexOfItem") ) { return ::hx::Val( findIndexOfItem_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataComponentSelectedItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_cachedValue") ) { _cachedValue=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataComponentSelectedItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_cachedValue",30,6a,ac,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataComponentSelectedItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DataComponentSelectedItem_obj,_cachedValue),HX_("_cachedValue",30,6a,ac,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataComponentSelectedItem_obj_sStaticStorageInfo = 0;
#endif

static ::String DataComponentSelectedItem_obj_sMemberFields[] = {
	HX_("_cachedValue",30,6a,ac,10),
	HX_("getDynamic",89,25,77,85),
	HX_("setDynamic",fd,c3,f4,88),
	HX_("findIndexOfItem",c3,02,2f,33),
	HX_("valueToString",3d,65,7f,9b),
	::String(null()) };

::hx::Class DataComponentSelectedItem_obj::__mClass;

void DataComponentSelectedItem_obj::__register()
{
	DataComponentSelectedItem_obj _hx_dummy;
	DataComponentSelectedItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.behaviours.DataComponentSelectedItem",44,f3,f1,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataComponentSelectedItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataComponentSelectedItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataComponentSelectedItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataComponentSelectedItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace behaviours