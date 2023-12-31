// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_SelectedItemsBehaviour
#include <haxe/ui/containers/_TableView/SelectedItemsBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7aeeb567798c614f_790_new,"haxe.ui.containers._TableView.SelectedItemsBehaviour","new",0x76b5b19a,"haxe.ui.containers._TableView.SelectedItemsBehaviour.new","haxe/ui/containers/TableView.hx",790,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_7aeeb567798c614f_791_get,"haxe.ui.containers._TableView.SelectedItemsBehaviour","get",0x76b061d0,"haxe.ui.containers._TableView.SelectedItemsBehaviour.get","haxe/ui/containers/TableView.hx",791,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_7aeeb567798c614f_810_set,"haxe.ui.containers._TableView.SelectedItemsBehaviour","set",0x76b97cdc,"haxe.ui.containers._TableView.SelectedItemsBehaviour.set","haxe/ui/containers/TableView.hx",810,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void SelectedItemsBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_7aeeb567798c614f_790_new)
HXDLIN( 790)		super::__construct(component);
            	}

Dynamic SelectedItemsBehaviour_obj::__CreateEmpty() { return new SelectedItemsBehaviour_obj; }

void *SelectedItemsBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedItemsBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedItemsBehaviour_obj > _hx_result = new SelectedItemsBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedItemsBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x70046640;
	}
}

 ::haxe::ui::util::VariantType SelectedItemsBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_7aeeb567798c614f_791_get)
HXLINE( 792)		 ::haxe::ui::containers::TableView tableView = ::hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component);
HXLINE( 793)		::Array< int > selectedIndices = tableView->get_selectedIndices();
HXLINE( 794)		bool _hx_tmp;
HXDLIN( 794)		if (::hx::IsNotNull( selectedIndices )) {
HXLINE( 794)			_hx_tmp = (selectedIndices->length > 0);
            		}
            		else {
HXLINE( 794)			_hx_tmp = false;
            		}
HXDLIN( 794)		if (_hx_tmp) {
HXLINE( 795)			::cpp::VirtualArray selectedItems = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 796)			{
HXLINE( 796)				int _g = 0;
HXDLIN( 796)				while((_g < selectedIndices->length)){
HXLINE( 796)					int i = selectedIndices->__get(_g);
HXDLIN( 796)					_g = (_g + 1);
HXLINE( 797)					bool _hx_tmp1;
HXDLIN( 797)					if ((i >= 0)) {
HXLINE( 797)						_hx_tmp1 = (i >= tableView->get_dataSource()->get_size());
            					}
            					else {
HXLINE( 797)						_hx_tmp1 = true;
            					}
HXDLIN( 797)					if (_hx_tmp1) {
HXLINE( 798)						continue;
            					}
HXLINE( 800)					 ::Dynamic data = tableView->get_dataSource()->get(i);
HXLINE( 801)					selectedItems->push(data);
            				}
            			}
HXLINE( 804)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(selectedItems);
            		}
            		else {
HXLINE( 806)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(::cpp::VirtualArray_obj::__new(0));
            		}
HXLINE( 794)		return null();
            	}


void SelectedItemsBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_7aeeb567798c614f_810_set)
HXLINE( 811)		 ::haxe::ui::containers::TableView tableView = ::hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component);
HXLINE( 812)		::cpp::VirtualArray selectedItems = ::haxe::ui::util::_Variant::Variant_Impl__obj::toArray(value);
HXLINE( 813)		bool _hx_tmp;
HXDLIN( 813)		if (::hx::IsNotNull( selectedItems )) {
HXLINE( 813)			_hx_tmp = (selectedItems->get_length() > 0);
            		}
            		else {
HXLINE( 813)			_hx_tmp = false;
            		}
HXDLIN( 813)		if (_hx_tmp) {
HXLINE( 814)			::Array< int > selectedIndices = ::Array_obj< int >::__new(0);
HXLINE( 815)			int index;
HXLINE( 816)			{
HXLINE( 816)				int _g = 0;
HXDLIN( 816)				while((_g < selectedItems->get_length())){
HXLINE( 816)					 ::Dynamic item = selectedItems->__get(_g);
HXDLIN( 816)					_g = (_g + 1);
HXLINE( 817)					index = tableView->get_dataSource()->indexOf(item);
HXDLIN( 817)					if ((index != -1)) {
HXLINE( 818)						selectedIndices->push(index);
            					}
            				}
            			}
HXLINE( 822)			tableView->set_selectedIndices(selectedIndices);
            		}
            		else {
HXLINE( 824)			tableView->set_selectedIndices(::Array_obj< int >::__new(0));
            		}
            	}



::hx::ObjectPtr< SelectedItemsBehaviour_obj > SelectedItemsBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedItemsBehaviour_obj > __this = new SelectedItemsBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedItemsBehaviour_obj > SelectedItemsBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedItemsBehaviour_obj *__this = (SelectedItemsBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedItemsBehaviour_obj), true, "haxe.ui.containers._TableView.SelectedItemsBehaviour"));
	*(void **)__this = SelectedItemsBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedItemsBehaviour_obj::SelectedItemsBehaviour_obj()
{
}

::hx::Val SelectedItemsBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedItemsBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedItemsBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedItemsBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class SelectedItemsBehaviour_obj::__mClass;

void SelectedItemsBehaviour_obj::__register()
{
	SelectedItemsBehaviour_obj _hx_dummy;
	SelectedItemsBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.SelectedItemsBehaviour",a8,9c,2a,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedItemsBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedItemsBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedItemsBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedItemsBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView
