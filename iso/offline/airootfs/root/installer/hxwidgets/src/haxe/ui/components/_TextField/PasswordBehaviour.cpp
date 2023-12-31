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
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
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
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__TextField_PasswordBehaviour
#include <haxe/ui/components/_TextField/PasswordBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2a3999cad14d2e0c_178_new,"haxe.ui.components._TextField.PasswordBehaviour","new",0x642c55fa,"haxe.ui.components._TextField.PasswordBehaviour.new","haxe/ui/components/TextField.hx",178,0x9dfe9498)
HX_LOCAL_STACK_FRAME(_hx_pos_2a3999cad14d2e0c_181_validateData,"haxe.ui.components._TextField.PasswordBehaviour","validateData",0x549e4d06,"haxe.ui.components._TextField.PasswordBehaviour.validateData","haxe/ui/components/TextField.hx",181,0x9dfe9498)
namespace haxe{
namespace ui{
namespace components{
namespace _TextField{

void PasswordBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2a3999cad14d2e0c_178_new)
HXDLIN( 178)		super::__construct(component);
            	}

Dynamic PasswordBehaviour_obj::__CreateEmpty() { return new PasswordBehaviour_obj; }

void *PasswordBehaviour_obj::_hx_vtable = 0;

Dynamic PasswordBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PasswordBehaviour_obj > _hx_result = new PasswordBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PasswordBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x2abcbfa0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2abcbfa0;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void PasswordBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_2a3999cad14d2e0c_181_validateData)
HXLINE( 182)		if (::hx::IsNull( this->originalValue )) {
HXLINE( 183)			this->originalValue = this->_value;
            		}
HXLINE( 185)		 ::haxe::ui::components::TextField textfield = ::hx::TCast<  ::haxe::ui::components::TextField >::cast(this->_component);
HXLINE( 186)		 ::haxe::ui::core::TextInput _hx_tmp = textfield->getTextInput();
HXDLIN( 186)		_hx_tmp->set_password(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->_value));
            	}



::hx::ObjectPtr< PasswordBehaviour_obj > PasswordBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PasswordBehaviour_obj > __this = new PasswordBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PasswordBehaviour_obj > PasswordBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PasswordBehaviour_obj *__this = (PasswordBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PasswordBehaviour_obj), true, "haxe.ui.components._TextField.PasswordBehaviour"));
	*(void **)__this = PasswordBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PasswordBehaviour_obj::PasswordBehaviour_obj()
{
}

void PasswordBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PasswordBehaviour);
	HX_MARK_MEMBER_NAME(originalValue,"originalValue");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PasswordBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(originalValue,"originalValue");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PasswordBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalValue") ) { return ::hx::Val( originalValue ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PasswordBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"originalValue") ) { originalValue=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PasswordBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("originalValue",60,75,a9,8c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PasswordBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(PasswordBehaviour_obj,originalValue),HX_("originalValue",60,75,a9,8c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PasswordBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String PasswordBehaviour_obj_sMemberFields[] = {
	HX_("originalValue",60,75,a9,8c),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class PasswordBehaviour_obj::__mClass;

void PasswordBehaviour_obj::__register()
{
	PasswordBehaviour_obj _hx_dummy;
	PasswordBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._TextField.PasswordBehaviour",08,91,9f,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PasswordBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PasswordBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PasswordBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PasswordBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextField
