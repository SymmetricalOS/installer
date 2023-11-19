// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuBar
#include <haxe/ui/containers/menus/MenuBar.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus_MenuEvent
#include <haxe/ui/containers/menus/MenuEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuBar_Builder
#include <haxe/ui/containers/menus/_MenuBar/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_menus__MenuBar_Events
#include <haxe/ui/containers/menus/_MenuBar/Events.h>
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b7981bc0ae91f24a_25_new,"haxe.ui.containers.menus.MenuBar","new",0x7cf97182,"haxe.ui.containers.menus.MenuBar.new","haxe/ui/containers/menus/MenuBar.hx",25,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_b7981bc0ae91f24a_35_onThemeChanged,"haxe.ui.containers.menus.MenuBar","onThemeChanged",0xf3110bc8,"haxe.ui.containers.menus.MenuBar.onThemeChanged","haxe/ui/containers/menus/MenuBar.hx",35,0x144ebed0)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf5a1387c9bbc0c_193_registerComposite,"haxe.ui.containers.menus.MenuBar","registerComposite",0x7ac87dc6,"haxe.ui.containers.menus.MenuBar.registerComposite","haxe/ui/macros/Macros.hx",193,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf5a1387c9bbc0c_230_set_onMenuSelected,"haxe.ui.containers.menus.MenuBar","set_onMenuSelected",0x4f2acb34,"haxe.ui.containers.menus.MenuBar.set_onMenuSelected","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf5a1387c9bbc0c_230_set_onMenuOpened,"haxe.ui.containers.menus.MenuBar","set_onMenuOpened",0xd3ebeb42,"haxe.ui.containers.menus.MenuBar.set_onMenuOpened","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf5a1387c9bbc0c_230_set_onMenuClosed,"haxe.ui.containers.menus.MenuBar","set_onMenuClosed",0xc0a93245,"haxe.ui.containers.menus.MenuBar.set_onMenuClosed","haxe/ui/macros/Macros.hx",230,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf5a1387c9bbc0c_522_registerBehaviours,"haxe.ui.containers.menus.MenuBar","registerBehaviours",0x77a49cf7,"haxe.ui.containers.menus.MenuBar.registerBehaviours","haxe/ui/macros/Macros.hx",522,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf5a1387c9bbc0c_566_get_menuStyleNames,"haxe.ui.containers.menus.MenuBar","get_menuStyleNames",0x7aa8e53d,"haxe.ui.containers.menus.MenuBar.get_menuStyleNames","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf5a1387c9bbc0c_599_set_menuStyleNames,"haxe.ui.containers.menus.MenuBar","set_menuStyleNames",0x575817b1,"haxe.ui.containers.menus.MenuBar.set_menuStyleNames","haxe/ui/macros/Macros.hx",599,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_24366af1f06276e1_651_cloneComponent,"haxe.ui.containers.menus.MenuBar","cloneComponent",0xf12f77be,"haxe.ui.containers.menus.MenuBar.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_8cf5a1387c9bbc0c_493_self,"haxe.ui.containers.menus.MenuBar","self",0xe097e82a,"haxe.ui.containers.menus.MenuBar.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace menus{

void MenuBar_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b7981bc0ae91f24a_25_new)
HXDLIN(  25)		super::__construct();
            	}

Dynamic MenuBar_obj::__CreateEmpty() { return new MenuBar_obj; }

void *MenuBar_obj::_hx_vtable = 0;

Dynamic MenuBar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuBar_obj > _hx_result = new MenuBar_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MenuBar_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2570d72f) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0f2dd418) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0f2dd418;
				}
			} else {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x2570d72f;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x578ca5ac) {
				if (inClassId<=(int)0x4ba87886) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
				} else {
					return inClassId==(int)0x578ca5ac;
				}
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void MenuBar_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_b7981bc0ae91f24a_35_onThemeChanged)
HXLINE(  36)		this->super::onThemeChanged();
HXLINE(  37)		 ::haxe::ui::containers::menus::_MenuBar::Builder builder = ::hx::TCast<  ::haxe::ui::containers::menus::_MenuBar::Builder >::cast(this->_compositeBuilder);
HXLINE(  38)		builder->onThemeChanged();
            	}


void MenuBar_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_8cf5a1387c9bbc0c_193_registerComposite)
HXLINE( 194)		this->super::registerComposite();
HXLINE( 202)		this->_internalEventsClass = ::hx::ClassOf< ::haxe::ui::containers::menus::_MenuBar::Events >();
HXLINE( 206)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::containers::menus::_MenuBar::Builder >();
            	}


 ::Dynamic MenuBar_obj::set_onMenuSelected( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8cf5a1387c9bbc0c_230_set_onMenuSelected)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onMenuSelected )) {
HXLINE( 232)			this->unregisterEvent(HX_("menuselected",fa,a6,03,90),this->_internal__onMenuSelected);
HXLINE( 233)			this->_internal__onMenuSelected = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onMenuSelected = value;
HXLINE( 237)			this->registerEvent(HX_("menuselected",fa,a6,03,90),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuBar_obj,set_onMenuSelected,return )

 ::Dynamic MenuBar_obj::set_onMenuOpened( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8cf5a1387c9bbc0c_230_set_onMenuOpened)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onMenuOpened )) {
HXLINE( 232)			this->unregisterEvent(HX_("menuopened",88,29,84,cf),this->_internal__onMenuOpened);
HXLINE( 233)			this->_internal__onMenuOpened = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onMenuOpened = value;
HXLINE( 237)			this->registerEvent(HX_("menuopened",88,29,84,cf),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuBar_obj,set_onMenuOpened,return )

 ::Dynamic MenuBar_obj::set_onMenuClosed( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8cf5a1387c9bbc0c_230_set_onMenuClosed)
HXLINE( 231)		if (::hx::IsNotNull( this->_internal__onMenuClosed )) {
HXLINE( 232)			this->unregisterEvent(HX_("menuclosed",8b,70,41,bc),this->_internal__onMenuClosed);
HXLINE( 233)			this->_internal__onMenuClosed = null();
            		}
HXLINE( 235)		if (::hx::IsNotNull( value )) {
HXLINE( 236)			this->_internal__onMenuClosed = value;
HXLINE( 237)			this->registerEvent(HX_("menuclosed",8b,70,41,bc),value,null());
            		}
HXLINE( 239)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuBar_obj,set_onMenuClosed,return )

void MenuBar_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_8cf5a1387c9bbc0c_522_registerBehaviours)
HXLINE( 523)		this->super::registerBehaviours();
HXLINE( 632)		this->behaviours->_hx_register(HX_("menuStyleNames",56,0f,d2,9b),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


::String MenuBar_obj::get_menuStyleNames(){
            	HX_STACKFRAME(&_hx_pos_8cf5a1387c9bbc0c_566_get_menuStyleNames)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return null();
            		}
HXLINE( 570)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("menuStyleNames",56,0f,d2,9b)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuBar_obj,get_menuStyleNames,return )

::String MenuBar_obj::set_menuStyleNames(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_8cf5a1387c9bbc0c_599_set_menuStyleNames)
HXLINE( 600)		{
HXLINE( 600)			 ::ValueType _g = ::Type_obj::_hx_typeof(value);
HXDLIN( 600)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 601)				if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE( 602)					bool _hx_tmp;
HXDLIN( 602)					bool _hx_tmp1;
HXDLIN( 602)					if (::hx::IsNotNull( value )) {
HXLINE( 602)						_hx_tmp1 = ::StringTools_obj::startsWith(value,HX_("{{",a0,6b,00,00));
            					}
            					else {
HXLINE( 602)						_hx_tmp1 = false;
            					}
HXDLIN( 602)					if (_hx_tmp1) {
HXLINE( 602)						_hx_tmp = ::StringTools_obj::endsWith(value,HX_("}}",60,6d,00,00));
            					}
            					else {
HXLINE( 602)						_hx_tmp = false;
            					}
HXDLIN( 602)					if (_hx_tmp) {
HXLINE( 603)						::haxe::ui::locale::LocaleManager_obj::get_instance()->registerComponent(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) ),HX_("menuStyleNames",56,0f,d2,9b),null(),value,null());
HXLINE( 604)						return value;
            					}
            				}
            			}
            		}
HXLINE( 608)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 608)		_hx_tmp2->set(HX_("menuStyleNames",56,0f,d2,9b),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 609)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("menuStyleNames",56,0f,d2,9b)));
HXLINE( 610)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuBar_obj,set_menuStyleNames,return )

 ::haxe::ui::core::ComponentContainer MenuBar_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_24366af1f06276e1_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::containers::menus::MenuBar c = ( ( ::haxe::ui::containers::menus::MenuBar)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer MenuBar_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_8cf5a1387c9bbc0c_493_self)
HXDLIN( 493)		return  ::haxe::ui::containers::menus::MenuBar_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< MenuBar_obj > MenuBar_obj::__new() {
	::hx::ObjectPtr< MenuBar_obj > __this = new MenuBar_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MenuBar_obj > MenuBar_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MenuBar_obj *__this = (MenuBar_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuBar_obj), true, "haxe.ui.containers.menus.MenuBar"));
	*(void **)__this = MenuBar_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MenuBar_obj::MenuBar_obj()
{
}

void MenuBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuBar);
	HX_MARK_MEMBER_NAME(_internal__onMenuSelected,"_internal__onMenuSelected");
	HX_MARK_MEMBER_NAME(onMenuSelected,"onMenuSelected");
	HX_MARK_MEMBER_NAME(_internal__onMenuOpened,"_internal__onMenuOpened");
	HX_MARK_MEMBER_NAME(onMenuOpened,"onMenuOpened");
	HX_MARK_MEMBER_NAME(_internal__onMenuClosed,"_internal__onMenuClosed");
	HX_MARK_MEMBER_NAME(onMenuClosed,"onMenuClosed");
	 ::haxe::ui::containers::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_internal__onMenuSelected,"_internal__onMenuSelected");
	HX_VISIT_MEMBER_NAME(onMenuSelected,"onMenuSelected");
	HX_VISIT_MEMBER_NAME(_internal__onMenuOpened,"_internal__onMenuOpened");
	HX_VISIT_MEMBER_NAME(onMenuOpened,"onMenuOpened");
	HX_VISIT_MEMBER_NAME(_internal__onMenuClosed,"_internal__onMenuClosed");
	HX_VISIT_MEMBER_NAME(onMenuClosed,"onMenuClosed");
	 ::haxe::ui::containers::Box_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuBar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMenuOpened") ) { return ::hx::Val( onMenuOpened ); }
		if (HX_FIELD_EQ(inName,"onMenuClosed") ) { return ::hx::Val( onMenuClosed ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMenuSelected") ) { return ::hx::Val( onMenuSelected ); }
		if (HX_FIELD_EQ(inName,"menuStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_menuStyleNames() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_onMenuOpened") ) { return ::hx::Val( set_onMenuOpened_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_onMenuClosed") ) { return ::hx::Val( set_onMenuClosed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_onMenuSelected") ) { return ::hx::Val( set_onMenuSelected_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_menuStyleNames") ) { return ::hx::Val( get_menuStyleNames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_menuStyleNames") ) { return ::hx::Val( set_menuStyleNames_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_internal__onMenuOpened") ) { return ::hx::Val( _internal__onMenuOpened ); }
		if (HX_FIELD_EQ(inName,"_internal__onMenuClosed") ) { return ::hx::Val( _internal__onMenuClosed ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_internal__onMenuSelected") ) { return ::hx::Val( _internal__onMenuSelected ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuBar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"onMenuOpened") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMenuOpened(inValue.Cast<  ::Dynamic >()) );onMenuOpened=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMenuClosed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMenuClosed(inValue.Cast<  ::Dynamic >()) );onMenuClosed=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onMenuSelected") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_onMenuSelected(inValue.Cast<  ::Dynamic >()) );onMenuSelected=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuStyleNames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_menuStyleNames(inValue.Cast< ::String >()) ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_internal__onMenuOpened") ) { _internal__onMenuOpened=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_internal__onMenuClosed") ) { _internal__onMenuClosed=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_internal__onMenuSelected") ) { _internal__onMenuSelected=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menuStyleNames",56,0f,d2,9b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuBar_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MenuBar_obj,_internal__onMenuSelected),HX_("_internal__onMenuSelected",95,a4,a0,63)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MenuBar_obj,onMenuSelected),HX_("onMenuSelected",d9,c2,a4,93)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MenuBar_obj,_internal__onMenuOpened),HX_("_internal__onMenuOpened",63,fa,26,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MenuBar_obj,onMenuOpened),HX_("onMenuOpened",a7,3f,5c,dc)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MenuBar_obj,_internal__onMenuClosed),HX_("_internal__onMenuClosed",66,41,e4,04)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MenuBar_obj,onMenuClosed),HX_("onMenuClosed",aa,86,19,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuBar_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuBar_obj_sMemberFields[] = {
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("registerComposite",24,e5,7f,fe),
	HX_("_internal__onMenuSelected",95,a4,a0,63),
	HX_("onMenuSelected",d9,c2,a4,93),
	HX_("set_onMenuSelected",16,d6,ed,0b),
	HX_("_internal__onMenuOpened",63,fa,26,18),
	HX_("onMenuOpened",a7,3f,5c,dc),
	HX_("set_onMenuOpened",a4,19,3d,37),
	HX_("_internal__onMenuClosed",66,41,e4,04),
	HX_("onMenuClosed",aa,86,19,c9),
	HX_("set_onMenuClosed",a7,60,fa,23),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_menuStyleNames",1f,f0,6b,37),
	HX_("set_menuStyleNames",93,22,1b,14),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class MenuBar_obj::__mClass;

void MenuBar_obj::__register()
{
	MenuBar_obj _hx_dummy;
	MenuBar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.menus.MenuBar",90,48,c6,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuBar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuBar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuBar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuBar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace menus
