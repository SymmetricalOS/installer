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
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_core_BasicItemRenderer
#include <haxe/ui/core/BasicItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37f329f8c8130634_11_new,"haxe.ui.core.BasicItemRenderer","new",0x42c53359,"haxe.ui.core.BasicItemRenderer.new","haxe/ui/core/BasicItemRenderer.hx",11,0xa8515618)
HX_LOCAL_STACK_FRAME(_hx_pos_37f329f8c8130634_34_updateValues,"haxe.ui.core.BasicItemRenderer","updateValues",0x413ba0b2,"haxe.ui.core.BasicItemRenderer.updateValues","haxe/ui/core/BasicItemRenderer.hx",34,0xa8515618)
HX_LOCAL_STACK_FRAME(_hx_pos_1ef0e5d8602f3499_523_registerBehaviours,"haxe.ui.core.BasicItemRenderer","registerBehaviours",0x86ac8500,"haxe.ui.core.BasicItemRenderer.registerBehaviours","haxe/ui/macros/Macros.hx",523,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_9767e5cac97bd0d6_651_cloneComponent,"haxe.ui.core.BasicItemRenderer","cloneComponent",0xc2ae6747,"haxe.ui.core.BasicItemRenderer.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_1ef0e5d8602f3499_493_self,"haxe.ui.core.BasicItemRenderer","self",0x2d15c273,"haxe.ui.core.BasicItemRenderer.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{
namespace core{

void BasicItemRenderer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_37f329f8c8130634_11_new)
HXLINE(  12)		super::__construct();
HXLINE(  14)		 ::haxe::ui::containers::HBox hbox =  ::haxe::ui::containers::HBox_obj::__alloc( HX_CTX );
HXLINE(  15)		hbox->addClass(HX_("basic-renderer-container",f6,27,21,6f),null(),null());
HXLINE(  17)		this->_icon =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE(  18)		this->_icon->set_id(HX_("icon",79,e7,b2,45));
HXLINE(  19)		this->_icon->addClass(HX_("basic-renderer-icon",e4,30,ec,9c),null(),null());
HXLINE(  20)		this->_icon->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE(  21)		this->_icon->hide();
HXLINE(  22)		hbox->addComponent(this->_icon);
HXLINE(  24)		this->_label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE(  25)		this->_label->set_id(HX_("text",ad,cc,f9,4c));
HXLINE(  26)		this->_label->addClass(HX_("basic-renderer-label",29,02,96,6a),null(),null());
HXLINE(  27)		this->_label->set_verticalAlign(HX_("center",d5,25,db,05));
HXLINE(  28)		this->_label->hide();
HXLINE(  29)		hbox->addComponent(this->_label);
HXLINE(  31)		this->addComponent(hbox);
            	}

Dynamic BasicItemRenderer_obj::__CreateEmpty() { return new BasicItemRenderer_obj; }

void *BasicItemRenderer_obj::_hx_vtable = 0;

Dynamic BasicItemRenderer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BasicItemRenderer_obj > _hx_result = new BasicItemRenderer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BasicItemRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x0d1a7187) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0d1a7187;
				}
			} else {
				return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
			}
		} else {
			if (inClassId<=(int)0x241810fb) {
				return inClassId==(int)0x13d76ae7 || inClassId==(int)0x241810fb;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x5e4d6caf) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x5e4d6caf;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void BasicItemRenderer_obj::updateValues( ::Dynamic value,::Array< ::String > fieldList){
            	HX_STACKFRAME(&_hx_pos_37f329f8c8130634_34_updateValues)
HXLINE(  35)		this->super::updateValues(value,fieldList);
HXLINE(  37)		if (::hx::IsNotNull( value )) {
HXLINE(  38)			if (::hx::IsNotNull( value->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic) )) {
HXLINE(  39)				int _hx_tmp = ::haxe::ui::util::_Color::Color_Impl__obj::fromString(( (::String)(value->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic)) ));
HXDLIN(  39)				this->_label->get_customStyle()->color = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(_hx_tmp);
            			}
HXLINE(  41)			if (::hx::IsNotNull( value->__Field(HX_("bold",85,81,1b,41),::hx::paccDynamic) )) {
HXLINE(  42)				::String _hx_tmp1 = ::Std_obj::string( ::Dynamic(value->__Field(HX_("bold",85,81,1b,41),::hx::paccDynamic)));
HXDLIN(  42)				this->_label->get_customStyle()->fontBold = (_hx_tmp1 == HX_("true",4e,a7,03,4d));
            			}
HXLINE(  44)			if (::hx::IsNotNull( value->__Field(HX_("italic",f0,2e,64,06),::hx::paccDynamic) )) {
HXLINE(  45)				::String _hx_tmp2 = ::Std_obj::string( ::Dynamic(value->__Field(HX_("italic",f0,2e,64,06),::hx::paccDynamic)));
HXDLIN(  45)				this->_label->get_customStyle()->fontItalic = (_hx_tmp2 == HX_("true",4e,a7,03,4d));
            			}
HXLINE(  47)			if (::hx::IsNotNull( value->__Field(HX_("underline",0c,15,d1,87),::hx::paccDynamic) )) {
HXLINE(  48)				::String _hx_tmp3 = ::Std_obj::string( ::Dynamic(value->__Field(HX_("underline",0c,15,d1,87),::hx::paccDynamic)));
HXDLIN(  48)				this->_label->get_customStyle()->fontUnderline = (_hx_tmp3 == HX_("true",4e,a7,03,4d));
            			}
            		}
            	}


void BasicItemRenderer_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_1ef0e5d8602f3499_523_registerBehaviours)
HXDLIN( 523)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer BasicItemRenderer_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_9767e5cac97bd0d6_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::core::BasicItemRenderer c = ( ( ::haxe::ui::core::BasicItemRenderer)(this->super::cloneComponent()) );
HXLINE( 456)		{
HXLINE( 457)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 457)			if (::hx::IsNull( this->_children )) {
HXLINE( 457)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp = this->_children;
            			}
HXDLIN( 457)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 457)			if (::hx::IsNull( c->_children )) {
HXLINE( 457)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 457)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 458)				int _g = 0;
HXDLIN( 458)				::Array< ::Dynamic> _g1;
HXDLIN( 458)				if (::hx::IsNull( this->_children )) {
HXLINE( 458)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 458)					_g1 = this->_children;
            				}
HXDLIN( 458)				while((_g < _g1->length)){
HXLINE( 458)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 458)					_g = (_g + 1);
HXLINE( 459)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 463)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 465)		return c;
            	}


 ::haxe::ui::core::ComponentContainer BasicItemRenderer_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_1ef0e5d8602f3499_493_self)
HXDLIN( 493)		return  ::haxe::ui::core::BasicItemRenderer_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< BasicItemRenderer_obj > BasicItemRenderer_obj::__new() {
	::hx::ObjectPtr< BasicItemRenderer_obj > __this = new BasicItemRenderer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BasicItemRenderer_obj > BasicItemRenderer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BasicItemRenderer_obj *__this = (BasicItemRenderer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BasicItemRenderer_obj), true, "haxe.ui.core.BasicItemRenderer"));
	*(void **)__this = BasicItemRenderer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BasicItemRenderer_obj::BasicItemRenderer_obj()
{
}

void BasicItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicItemRenderer);
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::ItemRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::ItemRenderer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BasicItemRenderer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return ::hx::Val( _icon ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return ::hx::Val( _label ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateValues") ) { return ::hx::Val( updateValues_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BasicItemRenderer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast<  ::haxe::ui::components::Image >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_icon",58,03,c4,f8));
	outFields->push(HX_("_label",35,55,96,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BasicItemRenderer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Image */ ,(int)offsetof(BasicItemRenderer_obj,_icon),HX_("_icon",58,03,c4,f8)},
	{::hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(BasicItemRenderer_obj,_label),HX_("_label",35,55,96,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BasicItemRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String BasicItemRenderer_obj_sMemberFields[] = {
	HX_("_icon",58,03,c4,f8),
	HX_("_label",35,55,96,6b),
	HX_("updateValues",cb,aa,7a,4f),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class BasicItemRenderer_obj::__mClass;

void BasicItemRenderer_obj::__register()
{
	BasicItemRenderer_obj _hx_dummy;
	BasicItemRenderer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.BasicItemRenderer",e7,92,c8,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BasicItemRenderer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BasicItemRenderer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BasicItemRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BasicItemRenderer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
