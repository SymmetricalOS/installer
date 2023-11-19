// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
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
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TabBar
#include <haxe/ui/components/TabBar.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_Builder
#include <haxe/ui/components/_TabBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TabBar_SelectedIndex
#include <haxe/ui/components/_TabBar/SelectedIndex.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f99aa70c34f9f5cd_122_new,"haxe.ui.components._TabBar.SelectedIndex","new",0xf132e952,"haxe.ui.components._TabBar.SelectedIndex.new","haxe/ui/components/TabBar.hx",122,0xaabf3019)
HX_LOCAL_STACK_FRAME(_hx_pos_f99aa70c34f9f5cd_123_validateData,"haxe.ui.components._TabBar.SelectedIndex","validateData",0xd3468eae,"haxe.ui.components._TabBar.SelectedIndex.validateData","haxe/ui/components/TabBar.hx",123,0xaabf3019)
namespace haxe{
namespace ui{
namespace components{
namespace _TabBar{

void SelectedIndex_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_f99aa70c34f9f5cd_122_new)
HXDLIN( 122)		super::__construct(component);
            	}

Dynamic SelectedIndex_obj::__CreateEmpty() { return new SelectedIndex_obj; }

void *SelectedIndex_obj::_hx_vtable = 0;

Dynamic SelectedIndex_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedIndex_obj > _hx_result = new SelectedIndex_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedIndex_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x77dabc2e || inClassId==(int)0x7e17fa9f;
	}
}

void SelectedIndex_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_f99aa70c34f9f5cd_123_validateData)
HXLINE( 124)		 ::haxe::ui::components::_TabBar::Builder builder = ::hx::TCast<  ::haxe::ui::components::_TabBar::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 125)		if (::hx::IsNull( builder->_container )) {
HXLINE( 126)			return;
            		}
HXLINE( 128)		 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN( 128)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::lt(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0))) {
HXLINE( 129)			return;
            		}
HXLINE( 131)		 ::haxe::ui::util::VariantType _hx_tmp1 = this->_value;
HXDLIN( 131)		 ::haxe::ui::containers::HBox _this = builder->_container;
HXDLIN( 131)		::Array< ::Dynamic> _hx_tmp2;
HXDLIN( 131)		if (::hx::IsNull( _this->_children )) {
HXLINE( 131)			_hx_tmp2 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 131)			_hx_tmp2 = _this->_children;
            		}
HXDLIN( 131)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::gt(_hx_tmp1,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((_hx_tmp2->length - 1)))) {
HXLINE( 132)			 ::haxe::ui::containers::HBox _this1 = builder->_container;
HXDLIN( 132)			::Array< ::Dynamic> _hx_tmp3;
HXDLIN( 132)			if (::hx::IsNull( _this1->_children )) {
HXLINE( 132)				_hx_tmp3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 132)				_hx_tmp3 = _this1->_children;
            			}
HXDLIN( 132)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt((_hx_tmp3->length - 1));
HXLINE( 133)			return;
            		}
HXLINE( 136)		 ::haxe::ui::events::UIEvent beforeChangeEvent =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("beforechange",2f,cf,41,af),null(),null());
HXLINE( 137)		beforeChangeEvent->value = this->_value;
HXLINE( 138)		this->_component->dispatch(beforeChangeEvent);
HXLINE( 139)		if (beforeChangeEvent->canceled) {
HXLINE( 140)			this->_value = this->_previousValue;
HXLINE( 141)			return;
            		}
HXLINE( 144)		 ::haxe::ui::containers::HBox builder1 = builder->_container;
HXDLIN( 144)		 ::haxe::ui::core::Component tab = builder1->getComponentAt(( (int)(::haxe::ui::util::_Variant::Variant_Impl__obj::toInt(this->_value)) ));
HXLINE( 145)		if (::hx::IsNotNull( tab )) {
HXLINE( 146)			 ::haxe::ui::core::Component selectedTab = ::hx::TCast<  ::haxe::ui::components::TabBar >::cast(this->_component)->get_selectedTab();
HXLINE( 147)			if (::hx::IsNotNull( selectedTab )) {
HXLINE( 149)				selectedTab->removeClass(HX_("tabbar-button-selected",67,00,aa,e0),null(),null());
HXLINE( 150)				 ::haxe::ui::components::Label label = selectedTab->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 151)				if (::hx::IsNotNull( label )) {
HXLINE( 152)					label->invalidateComponent(null(),null());
            				}
HXLINE( 154)				 ::haxe::ui::components::Image icon = selectedTab->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null(),null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 155)				if (::hx::IsNotNull( icon )) {
HXLINE( 156)					icon->invalidateComponent(null(),null());
            				}
            			}
HXLINE( 159)			tab->addClass(HX_("tabbar-button-selected",67,00,aa,e0),null(),null());
HXLINE( 161)			 ::haxe::ui::components::Label label1 = tab->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),null(),null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 162)			if (::hx::IsNotNull( label1 )) {
HXLINE( 163)				label1->invalidateComponent(null(),null());
            			}
HXLINE( 165)			 ::haxe::ui::components::Image icon1 = tab->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null(),null()).StaticCast<  ::haxe::ui::components::Image >();
HXLINE( 166)			if (::hx::IsNotNull( icon1 )) {
HXLINE( 167)				icon1->invalidateComponent(null(),null());
            			}
HXLINE( 170)			Float rangeMin = ::Math_obj::abs(( (Float)(builder->_container->get_left()) ));
HXLINE( 171)			Float rangeMax = (rangeMin + this->_component->get_width());
HXLINE( 173)			 ::haxe::ui::components::Button left = this->_component->findComponent(HX_("tabbar-scroll-left",18,70,e0,85),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 174)			 ::haxe::ui::components::Button right = this->_component->findComponent(HX_("tabbar-scroll-right",ab,b2,8e,15),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 175)			bool _hx_tmp4;
HXDLIN( 175)			if (::hx::IsNotNull( left )) {
HXLINE( 175)				_hx_tmp4 = (left->get_hidden() == false);
            			}
            			else {
HXLINE( 175)				_hx_tmp4 = false;
            			}
HXDLIN( 175)			if (_hx_tmp4) {
HXLINE( 176)				rangeMax = (rangeMax - ( (Float)(left->get_width()) ));
HXLINE( 177)				rangeMax = (rangeMax - this->_component->get_layout()->get_horizontalSpacing());
            			}
HXLINE( 179)			bool _hx_tmp5;
HXDLIN( 179)			if (::hx::IsNotNull( right )) {
HXLINE( 179)				_hx_tmp5 = (right->get_hidden() == false);
            			}
            			else {
HXLINE( 179)				_hx_tmp5 = false;
            			}
HXDLIN( 179)			if (_hx_tmp5) {
HXLINE( 180)				rangeMax = (rangeMax - ( (Float)(right->get_width()) ));
            			}
HXLINE( 183)			bool _hx_tmp6;
HXDLIN( 183)			if (!(::hx::IsLess( tab->get_left(),rangeMin ))) {
HXLINE( 183)				 ::Dynamic _hx_tmp7 = tab->get_left();
HXDLIN( 183)				_hx_tmp6 = ((_hx_tmp7 + tab->get_width()) > rangeMax);
            			}
            			else {
HXLINE( 183)				_hx_tmp6 = true;
            			}
HXDLIN( 183)			if (_hx_tmp6) {
HXLINE( 184)				 ::Dynamic max = builder->_container->get_width();
HXDLIN( 184)				Float max1 = -((( (Float)(max) ) - ( (Float)(this->_component->get_width()) )));
HXLINE( 185)				Float x = -(tab->get_left());
HXDLIN( 185)				Float x1 = (x + this->_component->get_layout()->get_paddingLeft());
HXLINE( 186)				bool _hx_tmp8;
HXDLIN( 186)				if (::hx::IsNotNull( left )) {
HXLINE( 186)					_hx_tmp8 = (left->get_hidden() == false);
            				}
            				else {
HXLINE( 186)					_hx_tmp8 = false;
            				}
HXDLIN( 186)				if (_hx_tmp8) {
HXLINE( 187)					max1 = (max1 - ( (Float)(left->get_width()) ));
HXLINE( 188)					max1 = (max1 - this->_component->get_layout()->get_horizontalSpacing());
            				}
HXLINE( 190)				bool _hx_tmp9;
HXDLIN( 190)				if (::hx::IsNotNull( right )) {
HXLINE( 190)					_hx_tmp9 = (right->get_hidden() == false);
            				}
            				else {
HXLINE( 190)					_hx_tmp9 = false;
            				}
HXDLIN( 190)				if (_hx_tmp9) {
HXLINE( 191)					max1 = (max1 - ( (Float)(right->get_width()) ));
            				}
HXLINE( 194)				if ((x1 < max1)) {
HXLINE( 195)					x1 = max1;
            				}
HXLINE( 198)				builder->_containerPosition = x1;
HXLINE( 199)				builder->_container->set_left(x1);
            			}
HXLINE( 202)			{
HXLINE( 202)				 ::haxe::ui::core::Component _this2 = this->_component;
HXDLIN( 202)				bool _hx_tmp10;
HXDLIN( 202)				if (::hx::IsNotNull( _this2->_layout )) {
HXLINE( 202)					_hx_tmp10 = (_this2->_layoutLocked == true);
            				}
            				else {
HXLINE( 202)					_hx_tmp10 = true;
            				}
HXDLIN( 202)				if (!(_hx_tmp10)) {
HXLINE( 202)					_this2->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
HXLINE( 203)			 ::haxe::ui::core::Component _hx_tmp11 = this->_component;
HXDLIN( 203)			_hx_tmp11->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}



::hx::ObjectPtr< SelectedIndex_obj > SelectedIndex_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedIndex_obj > __this = new SelectedIndex_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedIndex_obj > SelectedIndex_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedIndex_obj *__this = (SelectedIndex_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedIndex_obj), true, "haxe.ui.components._TabBar.SelectedIndex"));
	*(void **)__this = SelectedIndex_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedIndex_obj::SelectedIndex_obj()
{
}

::hx::Val SelectedIndex_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedIndex_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedIndex_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedIndex_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class SelectedIndex_obj::__mClass;

void SelectedIndex_obj::__register()
{
	SelectedIndex_obj _hx_dummy;
	SelectedIndex_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TabBar.SelectedIndex",60,98,53,7e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedIndex_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedIndex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedIndex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedIndex_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TabBar
