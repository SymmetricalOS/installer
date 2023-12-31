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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_ComponentToolTipRendererBehaviour
#include <haxe/ui/core/ComponentToolTipRendererBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_tooltips_ToolTipManager
#include <haxe/ui/tooltips/ToolTipManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1a995493925ebe68_363_new,"haxe.ui.core.ComponentToolTipRendererBehaviour","new",0x0f2c2009,"haxe.ui.core.ComponentToolTipRendererBehaviour.new","haxe/ui/core/ComponentContainer.hx",363,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_1a995493925ebe68_365_validateData,"haxe.ui.core.ComponentToolTipRendererBehaviour","validateData",0xd8b24917,"haxe.ui.core.ComponentToolTipRendererBehaviour.validateData","haxe/ui/core/ComponentContainer.hx",365,0x0bbfc49c)
namespace haxe{
namespace ui{
namespace core{

void ComponentToolTipRendererBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_1a995493925ebe68_363_new)
HXDLIN( 363)		super::__construct(component);
            	}

Dynamic ComponentToolTipRendererBehaviour_obj::__CreateEmpty() { return new ComponentToolTipRendererBehaviour_obj; }

void *ComponentToolTipRendererBehaviour_obj::_hx_vtable = 0;

Dynamic ComponentToolTipRendererBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentToolTipRendererBehaviour_obj > _hx_result = new ComponentToolTipRendererBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentToolTipRendererBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x5f808637 || inClassId==(int)0x7e17fa9f;
	}
}

void ComponentToolTipRendererBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_1a995493925ebe68_365_validateData)
HXDLIN( 365)		bool _hx_tmp;
HXDLIN( 365)		if (::hx::IsNotNull( this->_value )) {
HXDLIN( 365)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXDLIN( 365)			_hx_tmp = true;
            		}
HXDLIN( 365)		if (_hx_tmp) {
HXLINE( 366)			::haxe::ui::tooltips::ToolTipManager_obj::get_instance()->updateTooltipRenderer(this->_component,null());
            		}
            		else {
HXLINE( 368)			 ::haxe::ui::tooltips::ToolTipManager _hx_tmp1 = ::haxe::ui::tooltips::ToolTipManager_obj::get_instance();
HXDLIN( 368)			 ::haxe::ui::core::Component _hx_tmp2 = this->_component;
HXDLIN( 368)			_hx_tmp1->updateTooltipRenderer(_hx_tmp2,( ( ::haxe::ui::core::ItemRenderer)(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value)) ));
            		}
            	}



::hx::ObjectPtr< ComponentToolTipRendererBehaviour_obj > ComponentToolTipRendererBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentToolTipRendererBehaviour_obj > __this = new ComponentToolTipRendererBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentToolTipRendererBehaviour_obj > ComponentToolTipRendererBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentToolTipRendererBehaviour_obj *__this = (ComponentToolTipRendererBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentToolTipRendererBehaviour_obj), true, "haxe.ui.core.ComponentToolTipRendererBehaviour"));
	*(void **)__this = ComponentToolTipRendererBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentToolTipRendererBehaviour_obj::ComponentToolTipRendererBehaviour_obj()
{
}

::hx::Val ComponentToolTipRendererBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentToolTipRendererBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentToolTipRendererBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentToolTipRendererBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ComponentToolTipRendererBehaviour_obj::__mClass;

void ComponentToolTipRendererBehaviour_obj::__register()
{
	ComponentToolTipRendererBehaviour_obj _hx_dummy;
	ComponentToolTipRendererBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentToolTipRendererBehaviour",97,67,af,b5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentToolTipRendererBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentToolTipRendererBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentToolTipRendererBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentToolTipRendererBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
