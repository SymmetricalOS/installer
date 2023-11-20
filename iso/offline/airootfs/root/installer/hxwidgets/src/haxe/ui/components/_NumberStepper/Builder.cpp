// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_NumberStepper
#include <haxe/ui/components/NumberStepper.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_Builder
#include <haxe/ui/components/_NumberStepper/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_ClassicLayout
#include <haxe/ui/components/_NumberStepper/ClassicLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_StandardLayout
#include <haxe/ui/components/_NumberStepper/StandardLayout.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1db12519812ff455_126_new,"haxe.ui.components._NumberStepper.Builder","new",0x785e5aee,"haxe.ui.components._NumberStepper.Builder.new","haxe/ui/components/NumberStepper.hx",126,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_1db12519812ff455_132_create,"haxe.ui.components._NumberStepper.Builder","create",0xbb93692e,"haxe.ui.components._NumberStepper.Builder.create","haxe/ui/components/NumberStepper.hx",132,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_1db12519812ff455_158_applyStyle,"haxe.ui.components._NumberStepper.Builder","applyStyle",0x18252415,"haxe.ui.components._NumberStepper.Builder.applyStyle","haxe/ui/components/NumberStepper.hx",158,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void Builder_obj::__construct( ::haxe::ui::components::NumberStepper stepper){
            	HX_GC_STACKFRAME(&_hx_pos_1db12519812ff455_126_new)
HXLINE( 127)		super::__construct(stepper);
HXLINE( 128)		this->_stepper = stepper;
HXLINE( 129)		 ::haxe::ui::components::NumberStepper _hx_tmp = this->_stepper;
HXDLIN( 129)		_hx_tmp->set_layout( ::haxe::ui::components::_NumberStepper::StandardLayout_obj::__alloc( HX_CTX ));
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x001adb3e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x001adb3e;
	} else {
		return inClassId==(int)0x0472fd8d;
	}
}

void Builder_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1db12519812ff455_132_create)
HXLINE( 133)		 ::haxe::ui::components::TextField value =  ::haxe::ui::components::TextField_obj::__alloc( HX_CTX );
HXLINE( 134)		value->set_id(HX_("value",71,7f,b8,31));
HXLINE( 135)		value->addClass(HX_("stepper-value",f5,63,66,a7),null(),null());
HXLINE( 136)		value->set_scriptAccess(false);
HXLINE( 137)		value->set_allowFocus(false);
HXLINE( 138)		value->set_restrictChars(HX_("0-9\\-\\.\\,",8f,56,39,cc));
HXLINE( 139)		this->_stepper->addComponent(value);
HXLINE( 141)		 ::haxe::ui::components::Button deinc =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 142)		deinc->set_id(HX_("deinc",fd,9b,24,d7));
HXLINE( 143)		deinc->addClass(HX_("stepper-deinc",81,80,d2,4c),null(),null());
HXLINE( 144)		deinc->set_allowFocus(false);
HXLINE( 145)		deinc->set_scriptAccess(false);
HXLINE( 146)		deinc->set_repeater(true);
HXLINE( 147)		this->_stepper->addComponent(deinc);
HXLINE( 149)		 ::haxe::ui::components::Button inc =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 150)		inc->set_id(HX_("inc",de,0c,50,00));
HXLINE( 151)		inc->addClass(HX_("stepper-inc",62,08,25,9a),null(),null());
HXLINE( 152)		inc->set_allowFocus(false);
HXLINE( 153)		inc->set_scriptAccess(false);
HXLINE( 154)		inc->set_repeater(true);
HXLINE( 155)		this->_stepper->addComponent(inc);
            	}


void Builder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_GC_STACKFRAME(&_hx_pos_1db12519812ff455_158_applyStyle)
HXLINE( 159)		if ((style->layout == HX_("classic",12,52,91,69))) {
HXLINE( 160)			 ::haxe::ui::components::NumberStepper _hx_tmp = this->_stepper;
HXDLIN( 160)			_hx_tmp->set_layout( ::haxe::ui::components::_NumberStepper::ClassicLayout_obj::__alloc( HX_CTX ));
            		}
            		else {
HXLINE( 161)			bool _hx_tmp1;
HXDLIN( 161)			if (::hx::IsNull( style->layout )) {
HXLINE( 161)				_hx_tmp1 = !(::Std_obj::isOfType(this->_stepper->get_layout(),::hx::ClassOf< ::haxe::ui::components::_NumberStepper::StandardLayout >()));
            			}
            			else {
HXLINE( 161)				_hx_tmp1 = false;
            			}
HXDLIN( 161)			if (_hx_tmp1) {
HXLINE( 162)				 ::haxe::ui::components::NumberStepper _hx_tmp2 = this->_stepper;
HXDLIN( 162)				_hx_tmp2->set_layout( ::haxe::ui::components::_NumberStepper::StandardLayout_obj::__alloc( HX_CTX ));
            			}
            		}
HXLINE( 165)		 ::haxe::ui::components::TextField value = this->_stepper->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null()).StaticCast<  ::haxe::ui::components::TextField >();
HXLINE( 166)		bool _hx_tmp3;
HXDLIN( 166)		if (::hx::IsNotNull( value )) {
HXLINE( 167)			bool _hx_tmp4;
HXDLIN( 167)			bool _hx_tmp5;
HXDLIN( 167)			bool _hx_tmp6;
HXDLIN( 167)			if (::hx::IsEq( value->get_customStyle()->color,style->color )) {
HXLINE( 167)				_hx_tmp6 = (value->get_customStyle()->fontName != style->fontName);
            			}
            			else {
HXLINE( 167)				_hx_tmp6 = true;
            			}
HXDLIN( 167)			if (!(_hx_tmp6)) {
HXLINE( 167)				_hx_tmp5 = ::hx::IsNotEq( value->get_customStyle()->fontSize,style->fontSize );
            			}
            			else {
HXLINE( 167)				_hx_tmp5 = true;
            			}
HXDLIN( 167)			if (!(_hx_tmp5)) {
HXLINE( 167)				_hx_tmp4 = (value->get_customStyle()->cursor != style->cursor);
            			}
            			else {
HXLINE( 167)				_hx_tmp4 = true;
            			}
HXDLIN( 167)			if (!(_hx_tmp4)) {
HXLINE( 166)				_hx_tmp3 = (value->get_customStyle()->textAlign != style->textAlign);
            			}
            			else {
HXLINE( 166)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXLINE( 166)			_hx_tmp3 = false;
            		}
HXDLIN( 166)		if (_hx_tmp3) {
HXLINE( 173)			value->get_customStyle()->color = style->color;
HXLINE( 174)			value->get_customStyle()->fontName = style->fontName;
HXLINE( 175)			value->get_customStyle()->fontSize = style->fontSize;
HXLINE( 176)			value->get_customStyle()->cursor = style->cursor;
HXLINE( 177)			value->get_customStyle()->textAlign = style->textAlign;
HXLINE( 178)			{
HXLINE( 178)				value->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 178)				{
            				}
            			}
            		}
            	}



::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::components::NumberStepper stepper) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(stepper);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::NumberStepper stepper) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.components._NumberStepper.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(stepper);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_stepper,"_stepper");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stepper,"_stepper");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stepper") ) { return ::hx::Val( _stepper ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_stepper") ) { _stepper=inValue.Cast<  ::haxe::ui::components::NumberStepper >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_stepper",92,5e,18,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::NumberStepper */ ,(int)offsetof(Builder_obj,_stepper),HX_("_stepper",92,5e,18,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_stepper",92,5e,18,bb),
	HX_("create",fc,66,0f,7c),
	HX_("applyStyle",e3,20,6f,2f),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.Builder",fc,0b,c7,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper