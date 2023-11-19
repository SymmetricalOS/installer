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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#include <haxe/ui/backend/FocusManagerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerImpl
#include <haxe/ui/backend/FocusManagerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_59_new,"haxe.ui.core.Screen","new",0x467c6e5b,"haxe.ui.core.Screen.new","haxe/ui/core/Screen.hx",59,0xa3acdbf4)
HX_DEFINE_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_16_new,"haxe.ui.core.Screen","new",0x467c6e5b,"haxe.ui.core.Screen.new","haxe/ui/core/Screen.hx",16,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_74_addComponent,"haxe.ui.core.Screen","addComponent",0xf8075d01,"haxe.ui.core.Screen.addComponent","haxe/ui/core/Screen.hx",74,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_106_removeComponent,"haxe.ui.core.Screen","removeComponent",0xa34db654,"haxe.ui.core.Screen.removeComponent","haxe/ui/core/Screen.hx",106,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_137_setComponentIndex,"haxe.ui.core.Screen","setComponentIndex",0xc2d3d392,"haxe.ui.core.Screen.setComponentIndex","haxe/ui/core/Screen.hx",137,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_152_moveComponentToFront,"haxe.ui.core.Screen","moveComponentToFront",0x9cc086c7,"haxe.ui.core.Screen.moveComponentToFront","haxe/ui/core/Screen.hx",152,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_168_findComponentsUnderPoint,"haxe.ui.core.Screen","findComponentsUnderPoint",0xa96e09cc,"haxe.ui.core.Screen.findComponentsUnderPoint","haxe/ui/core/Screen.hx",168,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_193_hasComponentUnderPoint,"haxe.ui.core.Screen","hasComponentUnderPoint",0xa83122e0,"haxe.ui.core.Screen.hasComponentUnderPoint","haxe/ui/core/Screen.hx",193,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_213_findSolidComponentUnderPoint,"haxe.ui.core.Screen","findSolidComponentUnderPoint",0x5ca83dc8,"haxe.ui.core.Screen.findSolidComponentUnderPoint","haxe/ui/core/Screen.hx",213,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_236_hasSolidComponentUnderPoint,"haxe.ui.core.Screen","hasSolidComponentUnderPoint",0x54f41a3f,"haxe.ui.core.Screen.hasSolidComponentUnderPoint","haxe/ui/core/Screen.hx",236,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_240_onThemeChanged,"haxe.ui.core.Screen","onThemeChanged",0x9ffb7b8f,"haxe.ui.core.Screen.onThemeChanged","haxe/ui/core/Screen.hx",240,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_246_onThemeChangedChildren,"haxe.ui.core.Screen","onThemeChangedChildren",0xaf63f7ee,"haxe.ui.core.Screen.onThemeChangedChildren","haxe/ui/core/Screen.hx",246,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_265_registerEvent,"haxe.ui.core.Screen","registerEvent",0xb52f9072,"haxe.ui.core.Screen.registerEvent","haxe/ui/core/Screen.hx",265,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_283_unregisterEvent,"haxe.ui.core.Screen","unregisterEvent",0x7b828b39,"haxe.ui.core.Screen.unregisterEvent","haxe/ui/core/Screen.hx",283,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_289__onMappedEvent,"haxe.ui.core.Screen","_onMappedEvent",0x903426ae,"haxe.ui.core.Screen._onMappedEvent","haxe/ui/core/Screen.hx",289,0xa3acdbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_3dff6c3b2f6b9797_23_get_instance,"haxe.ui.core.Screen","get_instance",0xf85a1e43,"haxe.ui.core.Screen.get_instance","haxe/ui/core/Screen.hx",23,0xa3acdbf4)
namespace haxe{
namespace ui{
namespace core{

void Screen_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::Screen,_gthis) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::MouseEvent e){
            			HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_59_new)
HXLINE(  60)			_gthis->currentMouseX = e->screenX;
HXLINE(  61)			_gthis->currentMouseY = e->screenY;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_16_new)
HXLINE(  49)		this->currentMouseY = ((Float)0);
HXLINE(  41)		this->currentMouseX = ((Float)0);
HXLINE(  33)		this->_eventMap =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
HXLINE(  57)		 ::haxe::ui::core::Screen _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  58)		super::__construct();
HXLINE(  59)		this->registerEvent(HX_("mousemove",b6,6f,dc,09), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}

Dynamic Screen_obj::__CreateEmpty() { return new Screen_obj; }

void *Screen_obj::_hx_vtable = 0;

Dynamic Screen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Screen_obj > _hx_result = new Screen_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Screen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7f344a3f) {
		if (inClassId<=(int)0x0f4c0249) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0f4c0249;
		} else {
			return inClassId==(int)0x7f344a3f;
		}
	} else {
		return inClassId==(int)0x7faef962;
	}
}

 ::haxe::ui::core::Component Screen_obj::addComponent( ::haxe::ui::core::Component component){
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_74_addComponent)
HXLINE(  75)		bool wasReady = component->get_isReady();
HXLINE(  76)		component->_hasScreen = true;
HXLINE(  77)		this->super::addComponent(component);
HXLINE(  79)		component->ready();
HXLINE(  81)		if ((this->rootComponents->indexOf(component,null()) == -1)) {
HXLINE(  82)			this->rootComponents->push(component);
            		}
HXLINE(  84)		::haxe::ui::focus::FocusManager_obj::get_instance()->pushView(component);
HXLINE(  85)		if ((component->hasEvent(HX_("resize",f4,59,7b,08),this->_onRootComponentResize_dyn()) == false)) {
HXLINE(  86)			component->registerEvent(HX_("resize",f4,59,7b,08),this->_onRootComponentResize_dyn(),null());
            		}
HXLINE(  89)		bool _hx_tmp;
HXDLIN(  89)		if (wasReady) {
HXLINE(  89)			_hx_tmp = (component->get_hidden() == false);
            		}
            		else {
HXLINE(  89)			_hx_tmp = false;
            		}
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  90)			component->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("shown",d1,88,27,7c),null(),null()));
            		}
HXLINE(  93)		return component;
            	}


 ::haxe::ui::core::Component Screen_obj::removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  __o_dispose){
            		bool dispose = __o_dispose.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_106_removeComponent)
HXLINE( 107)		if ((this->rootComponents->indexOf(component,null()) == -1)) {
HXLINE( 108)			return component;
            		}
HXLINE( 110)		component->_hasScreen = false;
HXLINE( 111)		this->super::removeComponent(component,dispose);
HXLINE( 112)		component->set_depth(-1);
HXLINE( 113)		this->rootComponents->remove(component);
HXLINE( 114)		::haxe::ui::focus::FocusManager_obj::get_instance()->removeView(component);
HXLINE( 115)		component->unregisterEvent(HX_("resize",f4,59,7b,08),this->_onRootComponentResize_dyn());
HXLINE( 116)		if ((dispose == true)) {
HXLINE( 117)			component->disposeComponent();
            		}
            		else {
HXLINE( 119)			component->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("hidden",6a,ff,95,4c),null(),null()));
HXLINE( 121)			component->removeClass(HX_(":hover",42,d3,17,5c),false,true);
            		}
HXLINE( 123)		return component;
            	}


 ::haxe::ui::core::Component Screen_obj::setComponentIndex( ::haxe::ui::core::Component child,int index){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_137_setComponentIndex)
HXLINE( 138)		bool _hx_tmp;
HXDLIN( 138)		if ((index >= 0)) {
HXLINE( 138)			_hx_tmp = (index <= this->rootComponents->length);
            		}
            		else {
HXLINE( 138)			_hx_tmp = false;
            		}
HXDLIN( 138)		if (_hx_tmp) {
HXLINE( 139)			this->handleSetComponentIndex(child,index);
HXLINE( 140)			this->rootComponents->remove(child);
HXLINE( 141)			this->rootComponents->insert(index,child);
            		}
HXLINE( 143)		return child;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,setComponentIndex,return )

void Screen_obj::moveComponentToFront( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_152_moveComponentToFront)
HXDLIN( 152)		if ((this->rootComponents->indexOf(child,null()) != -1)) {
HXLINE( 153)			this->setComponentIndex(child,(this->rootComponents->length - 1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,moveComponentToFront,(void))

::Array< ::Dynamic> Screen_obj::findComponentsUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_168_findComponentsUnderPoint)
HXLINE( 169)		::Array< ::Dynamic> c = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 170)		{
HXLINE( 170)			int _g = 0;
HXDLIN( 170)			::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 170)			while((_g < _g1->length)){
HXLINE( 170)				 ::haxe::ui::core::Component r = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 170)				_g = (_g + 1);
HXLINE( 171)				if (r->hitTest(screenX,screenY,null())) {
HXLINE( 172)					bool match = true;
HXLINE( 173)					bool _hx_tmp;
HXDLIN( 173)					if (::hx::IsNotNull( type )) {
HXLINE( 173)						_hx_tmp = (::Std_obj::isOfType(r,type) == false);
            					}
            					else {
HXLINE( 173)						_hx_tmp = false;
            					}
HXDLIN( 173)					if (_hx_tmp) {
HXLINE( 174)						match = false;
            					}
HXLINE( 176)					if ((match == true)) {
HXLINE( 177)						c->push(r);
            					}
            				}
HXLINE( 180)				c = c->concat(r->findComponentsUnderPoint(screenX,screenY,type));
            			}
            		}
HXLINE( 182)		return c;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,findComponentsUnderPoint,return )

bool Screen_obj::hasComponentUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_193_hasComponentUnderPoint)
HXLINE( 194)		{
HXLINE( 194)			int _g = 0;
HXDLIN( 194)			::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 194)			while((_g < _g1->length)){
HXLINE( 194)				 ::haxe::ui::core::Component r = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 194)				_g = (_g + 1);
HXLINE( 195)				if ((r->hasComponentUnderPoint(screenX,screenY,type) == true)) {
HXLINE( 196)					return true;
            				}
            			}
            		}
HXLINE( 199)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,hasComponentUnderPoint,return )

::Array< ::Dynamic> Screen_obj::findSolidComponentUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_213_findSolidComponentUnderPoint)
HXLINE( 214)		::Array< ::Dynamic> solidComponents = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 215)		::Array< ::Dynamic> components = this->findComponentsUnderPoint(screenX,screenY,type);
HXLINE( 216)		{
HXLINE( 216)			int _g = 0;
HXDLIN( 216)			while((_g < components->length)){
HXLINE( 216)				 ::haxe::ui::core::Component c = components->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 216)				_g = (_g + 1);
HXLINE( 217)				if (c->get_isComponentSolid()) {
HXLINE( 218)					solidComponents->push(c);
            				}
            			}
            		}
HXLINE( 221)		return solidComponents;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,findSolidComponentUnderPoint,return )

bool Screen_obj::hasSolidComponentUnderPoint(Float screenX,Float screenY,::hx::Class type){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_236_hasSolidComponentUnderPoint)
HXDLIN( 236)		return (this->findSolidComponentUnderPoint(screenX,screenY,type)->length > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,hasSolidComponentUnderPoint,return )

void Screen_obj::onThemeChanged(){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_240_onThemeChanged)
HXDLIN( 240)		int _g = 0;
HXDLIN( 240)		::Array< ::Dynamic> _g1 = this->rootComponents;
HXDLIN( 240)		while((_g < _g1->length)){
HXDLIN( 240)			 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 240)			_g = (_g + 1);
HXLINE( 241)			this->onThemeChangedChildren(c);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,onThemeChanged,(void))

void Screen_obj::onThemeChangedChildren( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_246_onThemeChangedChildren)
HXLINE( 247)		{
HXLINE( 247)			int _g = 0;
HXDLIN( 247)			::Array< ::Dynamic> _g1;
HXDLIN( 247)			if (::hx::IsNull( c->_children )) {
HXLINE( 247)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 247)				_g1 = c->_children;
            			}
HXDLIN( 247)			while((_g < _g1->length)){
HXLINE( 247)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 247)				_g = (_g + 1);
HXLINE( 248)				this->onThemeChangedChildren(child);
            			}
            		}
HXLINE( 250)		c->onThemeChanged();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,onThemeChangedChildren,(void))

void Screen_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_265_registerEvent)
HXDLIN( 265)		if ((this->supportsEvent(type) == true)) {
HXLINE( 266)			if ((this->_eventMap->add(type,listener,priority) == true)) {
HXLINE( 267)				this->mapEvent(type,this->_onMappedEvent_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,registerEvent,(void))

void Screen_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_283_unregisterEvent)
HXDLIN( 283)		if ((this->_eventMap->remove(type,listener) == true)) {
HXLINE( 284)			this->unmapEvent(type,this->_onMappedEvent_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,unregisterEvent,(void))

void Screen_obj::_onMappedEvent( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_289__onMappedEvent)
HXDLIN( 289)		this->_eventMap->invoke(event->type,event,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,_onMappedEvent,(void))

 ::haxe::ui::core::Screen Screen_obj::_instance;

 ::haxe::ui::core::Screen Screen_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_3dff6c3b2f6b9797_23_get_instance)
HXLINE(  24)		if (::hx::IsNull( ::haxe::ui::core::Screen_obj::_instance )) {
HXLINE(  25)			::haxe::ui::core::Screen_obj::_instance =  ::haxe::ui::core::Screen_obj::__alloc( HX_CTX );
            		}
HXLINE(  27)		return ::haxe::ui::core::Screen_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_instance,return )


::hx::ObjectPtr< Screen_obj > Screen_obj::__new() {
	::hx::ObjectPtr< Screen_obj > __this = new Screen_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Screen_obj > Screen_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Screen_obj *__this = (Screen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Screen_obj), true, "haxe.ui.core.Screen"));
	*(void **)__this = Screen_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(_eventMap,"_eventMap");
	HX_MARK_MEMBER_NAME(currentMouseX,"currentMouseX");
	HX_MARK_MEMBER_NAME(currentMouseY,"currentMouseY");
	 ::haxe::ui::backend::ScreenImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_eventMap,"_eventMap");
	HX_VISIT_MEMBER_NAME(currentMouseX,"currentMouseX");
	HX_VISIT_MEMBER_NAME(currentMouseY,"currentMouseY");
	 ::haxe::ui::backend::ScreenImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Screen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { return ::hx::Val( _eventMap ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentMouseX") ) { return ::hx::Val( currentMouseX ); }
		if (HX_FIELD_EQ(inName,"currentMouseY") ) { return ::hx::Val( currentMouseY ); }
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onThemeChanged") ) { return ::hx::Val( onThemeChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"_onMappedEvent") ) { return ::hx::Val( _onMappedEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeComponent") ) { return ::hx::Val( removeComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setComponentIndex") ) { return ::hx::Val( setComponentIndex_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"moveComponentToFront") ) { return ::hx::Val( moveComponentToFront_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hasComponentUnderPoint") ) { return ::hx::Val( hasComponentUnderPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"onThemeChangedChildren") ) { return ::hx::Val( onThemeChangedChildren_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findComponentsUnderPoint") ) { return ::hx::Val( findComponentsUnderPoint_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"hasSolidComponentUnderPoint") ) { return ::hx::Val( hasSolidComponentUnderPoint_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"findSolidComponentUnderPoint") ) { return ::hx::Val( findSolidComponentUnderPoint_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Screen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_instance() ); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val Screen_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_eventMap") ) { _eventMap=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentMouseX") ) { currentMouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentMouseY") ) { currentMouseY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Screen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::core::Screen >(); return true; }
	}
	return false;
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_eventMap",01,7e,68,08));
	outFields->push(HX_("currentMouseX",ac,cb,6a,af));
	outFields->push(HX_("currentMouseY",ad,cb,6a,af));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Screen_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(Screen_obj,_eventMap),HX_("_eventMap",01,7e,68,08)},
	{::hx::fsFloat,(int)offsetof(Screen_obj,currentMouseX),HX_("currentMouseX",ac,cb,6a,af)},
	{::hx::fsFloat,(int)offsetof(Screen_obj,currentMouseY),HX_("currentMouseY",ad,cb,6a,af)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Screen_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Screen */ ,(void *) &Screen_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Screen_obj_sMemberFields[] = {
	HX_("_eventMap",01,7e,68,08),
	HX_("currentMouseX",ac,cb,6a,af),
	HX_("currentMouseY",ad,cb,6a,af),
	HX_("addComponent",5c,12,a8,0e),
	HX_("removeComponent",d9,8b,72,50),
	HX_("setComponentIndex",57,d4,fc,a2),
	HX_("moveComponentToFront",22,8f,6e,fe),
	HX_("findComponentsUnderPoint",a7,db,36,14),
	HX_("hasComponentUnderPoint",fb,37,b6,57),
	HX_("findSolidComponentUnderPoint",23,99,6e,a3),
	HX_("hasSolidComponentUnderPoint",44,a3,85,8d),
	HX_("onThemeChanged",aa,7d,38,28),
	HX_("onThemeChangedChildren",09,0d,e9,5e),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("_onMappedEvent",c9,28,71,18),
	::String(null()) };

static void Screen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Screen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::_instance,"_instance");
};

#endif

::hx::Class Screen_obj::__mClass;

static ::String Screen_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void Screen_obj::__register()
{
	Screen_obj _hx_dummy;
	Screen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.Screen",e9,a4,c1,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Screen_obj::__GetStatic;
	__mClass->mSetStaticField = &Screen_obj::__SetStatic;
	__mClass->mMarkFunc = Screen_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Screen_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Screen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Screen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Screen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Screen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Screen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
