// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Header
#include <haxe/ui/containers/Header.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_Builder
#include <haxe/ui/containers/_TableView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_Events
#include <haxe/ui/containers/_TableView/Events.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ScrollEvent
#include <haxe/ui/events/ScrollEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_137_new,"haxe.ui.containers._TableView.Events","new",0xc682e75b,"haxe.ui.containers._TableView.Events.new","haxe/ui/containers/TableView.hx",137,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_143_register,"haxe.ui.containers._TableView.Events","register",0x75946188,"haxe.ui.containers._TableView.Events.register","haxe/ui/containers/TableView.hx",143,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_150_unregister,"haxe.ui.containers._TableView.Events","unregister",0xae591c21,"haxe.ui.containers._TableView.Events.unregister","haxe/ui/containers/TableView.hx",150,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_157_onScrollChange,"haxe.ui.containers._TableView.Events","onScrollChange",0x3d716a01,"haxe.ui.containers._TableView.Events.onScrollChange","haxe/ui/containers/TableView.hx",157,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_180_onRendererCreated,"haxe.ui.containers._TableView.Events","onRendererCreated",0xe31b90c1,"haxe.ui.containers._TableView.Events.onRendererCreated","haxe/ui/containers/TableView.hx",180,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_191_onRendererDestroyed,"haxe.ui.containers._TableView.Events","onRendererDestroyed",0x37e73af2,"haxe.ui.containers._TableView.Events.onRendererDestroyed","haxe/ui/containers/TableView.hx",191,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_203_onRendererMouseDown,"haxe.ui.containers._TableView.Events","onRendererMouseDown",0x3282b440,"haxe.ui.containers._TableView.Events.onRendererMouseDown","haxe/ui/containers/TableView.hx",203,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_222_startLongPressSelection,"haxe.ui.containers._TableView.Events","startLongPressSelection",0x558bc662,"haxe.ui.containers._TableView.Events.startLongPressSelection","haxe/ui/containers/TableView.hx",222,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_227_startLongPressSelection,"haxe.ui.containers._TableView.Events","startLongPressSelection",0x558bc662,"haxe.ui.containers._TableView.Events.startLongPressSelection","haxe/ui/containers/TableView.hx",227,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_237_startLongPressSelection,"haxe.ui.containers._TableView.Events","startLongPressSelection",0x558bc662,"haxe.ui.containers._TableView.Events.startLongPressSelection","haxe/ui/containers/TableView.hx",237,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_247_startLongPressSelection,"haxe.ui.containers._TableView.Events","startLongPressSelection",0x558bc662,"haxe.ui.containers._TableView.Events.startLongPressSelection","haxe/ui/containers/TableView.hx",247,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_213_startLongPressSelection,"haxe.ui.containers._TableView.Events","startLongPressSelection",0x558bc662,"haxe.ui.containers._TableView.Events.startLongPressSelection","haxe/ui/containers/TableView.hx",213,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_259_onContainerEventsStatusChanged,"haxe.ui.containers._TableView.Events","onContainerEventsStatusChanged",0xb590dcec,"haxe.ui.containers._TableView.Events.onContainerEventsStatusChanged","haxe/ui/containers/TableView.hx",259,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_273_onRendererClick,"haxe.ui.containers._TableView.Events","onRendererClick",0x4d86bee1,"haxe.ui.containers._TableView.Events.onRendererClick","haxe/ui/containers/TableView.hx",273,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_330_toggleSelection,"haxe.ui.containers._TableView.Events","toggleSelection",0x99faa993,"haxe.ui.containers._TableView.Events.toggleSelection","haxe/ui/containers/TableView.hx",330,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_dab48ec5d4bc4236_343_selectRange,"haxe.ui.containers._TableView.Events","selectRange",0xdc71b31c,"haxe.ui.containers._TableView.Events.selectRange","haxe/ui/containers/TableView.hx",343,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void Events_obj::__construct( ::haxe::ui::containers::TableView tableview){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_137_new)
HXLINE( 138)		super::__construct(tableview);
HXLINE( 140)		this->_tableview = tableview;
            	}

Dynamic Events_obj::__CreateEmpty() { return new Events_obj; }

void *Events_obj::_hx_vtable = 0;

Dynamic Events_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Events_obj > _hx_result = new Events_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Events_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1bae5da3) {
		if (inClassId<=(int)0x0548a7cc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
		} else {
			return inClassId==(int)0x1bae5da3;
		}
	} else {
		return inClassId==(int)0x5026ccb9;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_143_register)
HXLINE( 144)		this->super::_hx_register();
HXLINE( 145)		this->registerEvent(HX_("scrollchange",3d,71,a0,da),this->onScrollChange_dyn(),null());
HXLINE( 146)		this->registerEvent(HX_("renderercreated",05,6f,f5,09),this->onRendererCreated_dyn(),null());
HXLINE( 147)		this->registerEvent(HX_("rendererdestroyed",36,32,a8,2f),this->onRendererDestroyed_dyn(),null());
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_150_unregister)
HXLINE( 151)		this->super::unregister();
HXLINE( 152)		this->unregisterEvent(HX_("scrollchange",3d,71,a0,da),this->onScrollChange_dyn());
HXLINE( 153)		this->unregisterEvent(HX_("renderercreated",05,6f,f5,09),this->onRendererCreated_dyn());
HXLINE( 154)		this->unregisterEvent(HX_("rendererdestroyed",36,32,a8,2f),this->onRendererDestroyed_dyn());
            	}


void Events_obj::onScrollChange( ::haxe::ui::events::ScrollEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_157_onScrollChange)
HXLINE( 158)		if (this->_tableview->get_virtual()) {
HXLINE( 159)			 ::haxe::ui::containers::TableView _this = this->_tableview;
HXDLIN( 159)			bool _hx_tmp;
HXDLIN( 159)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 159)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 159)				_hx_tmp = true;
            			}
HXDLIN( 159)			if (!(_hx_tmp)) {
HXLINE( 159)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 162)		 ::haxe::ui::containers::Header header = this->_tableview->findComponent(null(),::hx::ClassOf< ::haxe::ui::containers::Header >(),true,null()).StaticCast<  ::haxe::ui::containers::Header >();
HXLINE( 163)		if (::hx::IsNull( header )) {
HXLINE( 164)			return;
            		}
HXLINE( 167)		 ::haxe::ui::components::VerticalScroll vscroll = this->_tableview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 168)		bool _hx_tmp1;
HXDLIN( 168)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 168)			_hx_tmp1 = (vscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 168)			_hx_tmp1 = false;
            		}
HXDLIN( 168)		if (_hx_tmp1) {
HXLINE( 169)			header->addClass(HX_("scrolling",f5,fa,19,3e),null(),null());
HXLINE( 170)			header->invalidateComponent(null(),true);
            		}
            		else {
HXLINE( 172)			header->removeClass(HX_("scrolling",f5,fa,19,3e),null(),null());
HXLINE( 173)			header->invalidateComponent(null(),true);
            		}
HXLINE( 175)		Float usableWidth = this->_tableview->get_layout()->get_usableWidth();
HXLINE( 176)		Float rc = this->_tableview->get_hscrollPos();
HXDLIN( 176)		 ::haxe::ui::geom::Rectangle rc1 =  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,rc,1,usableWidth,header->get_height());
HXLINE( 177)		header->set_componentClipRect(rc1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onScrollChange,(void))

void Events_obj::onRendererCreated( ::haxe::ui::events::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_180_onRendererCreated)
HXLINE( 181)		 ::haxe::ui::core::ItemRenderer instance = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(e->data);
HXLINE( 182)		instance->registerEvent(HX_("mousedown",07,85,e9,03),this->onRendererMouseDown_dyn(),null());
HXLINE( 183)		instance->registerEvent(HX_("click",48,7c,5e,48),this->onRendererClick_dyn(),null());
HXLINE( 184)		instance->registerEvent(HX_("rightclick",ec,f2,f5,b7),this->onRendererClick_dyn(),null());
HXLINE( 185)		if ((this->_tableview->get_selectedIndices()->indexOf(instance->itemIndex,null()) != -1)) {
HXLINE( 186)			 ::haxe::ui::containers::_TableView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TableView::Builder >::cast(this->_tableview->_compositeBuilder);
HXLINE( 187)			builder->addItemRendererClass(instance,HX_(":selected",95,f4,1e,7c),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onRendererCreated,(void))

void Events_obj::onRendererDestroyed( ::haxe::ui::events::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_191_onRendererDestroyed)
HXLINE( 192)		 ::haxe::ui::core::ItemRenderer instance = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(e->data);
HXLINE( 193)		instance->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onRendererMouseDown_dyn());
HXLINE( 194)		instance->unregisterEvent(HX_("click",48,7c,5e,48),this->onRendererClick_dyn());
HXLINE( 195)		instance->unregisterEvent(HX_("rightclick",ec,f2,f5,b7),this->onRendererClick_dyn());
HXLINE( 196)		if ((this->_tableview->get_selectedIndices()->indexOf(instance->itemIndex,null()) != -1)) {
HXLINE( 197)			 ::haxe::ui::containers::_TableView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TableView::Builder >::cast(this->_tableview->_compositeBuilder);
HXLINE( 198)			builder->addItemRendererClass(instance,HX_(":selected",95,f4,1e,7c),false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onRendererDestroyed,(void))

void Events_obj::onRendererMouseDown( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_203_onRendererMouseDown)
HXDLIN( 203)		if ((this->_tableview->get_selectionMode() == HX_("multiple-long-press",0f,8d,48,06))) {
HXLINE( 205)			if ((this->_tableview->get_selectedIndices()->length == 0)) {
HXLINE( 206)				this->startLongPressSelection(e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onRendererMouseDown,(void))

void Events_obj::startLongPressSelection( ::haxe::ui::events::MouseEvent e){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< Float >,currentMouseY,::Array< Float >,currentMouseX) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::MouseEvent _e){
            			HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_222_startLongPressSelection)
HXLINE( 223)			currentMouseX[0] = _e->screenX;
HXLINE( 224)			currentMouseY[0] = _e->screenY;
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_1, ::haxe::ui::core::ItemRenderer,renderer,::Array< ::Dynamic>,timerClick,::Array< ::Dynamic>,_hx___onMouseUp,::Array< ::Dynamic>,_hx___onMouseMove) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::MouseEvent _e){
            			HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_227_startLongPressSelection)
HXLINE( 228)			if (::hx::IsNotNull( timerClick->__get(0).StaticCast<  ::haxe::Timer >() )) {
HXLINE( 229)				timerClick->__get(0).StaticCast<  ::haxe::Timer >()->stop();
HXLINE( 230)				timerClick[0] = null();
            			}
HXLINE( 233)			 ::haxe::ui::core::Screen _hx_tmp = renderer->get_screen();
HXDLIN( 233)			_hx_tmp->unregisterEvent(HX_("mousemove",b6,6f,dc,09),_hx___onMouseMove->__get(0));
HXLINE( 234)			 ::haxe::ui::core::Screen _hx_tmp1 = renderer->get_screen();
HXDLIN( 234)			_hx_tmp1->unregisterEvent(HX_("mouseup",c0,0f,73,c0),_hx___onMouseUp->__get(0));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,_hx___onMouseClick, ::haxe::ui::core::ItemRenderer,renderer) HXARGC(1)
            		void _hx_run( ::haxe::ui::events::MouseEvent _e){
            			HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_237_startLongPressSelection)
HXLINE( 238)			_e->cancel();
HXLINE( 240)			renderer->unregisterEvent(HX_("click",48,7c,5e,48),_hx___onMouseClick->__get(0));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S7(::hx::LocalFunc,_hx_Closure_3, ::haxe::ui::containers::_TableView::Events,_gthis,::Array< ::Dynamic>,_hx___onMouseClick, ::haxe::ui::events::MouseEvent,e,::Array< Float >,currentMouseY, ::haxe::ui::core::ItemRenderer,renderer,::Array< ::Dynamic>,timerClick,::Array< Float >,currentMouseX) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_247_startLongPressSelection)
HXLINE( 247)			if (::hx::IsNotNull( timerClick->__get(0).StaticCast<  ::haxe::Timer >() )) {
HXLINE( 248)				timerClick[0] = null();
HXLINE( 250)				bool _hx_tmp;
HXDLIN( 250)				if (renderer->hitTest(currentMouseX->__get(0),currentMouseY->__get(0),null())) {
HXLINE( 251)					Float x1 = e->screenX;
HXDLIN( 251)					Float y1 = e->screenY;
HXLINE( 250)					_hx_tmp = (::Math_obj::sqrt((((x1 - currentMouseX->__get(0)) * (x1 - currentMouseX->__get(0))) + ((y1 - currentMouseY->__get(0)) * (y1 - currentMouseY->__get(0))))) < (2 * ::haxe::ui::Toolkit_obj::pixelsPerRem));
            				}
            				else {
HXLINE( 250)					_hx_tmp = false;
            				}
HXDLIN( 250)				if (_hx_tmp) {
HXLINE( 252)					_gthis->toggleSelection(renderer);
HXLINE( 253)					renderer->registerEvent(HX_("click",48,7c,5e,48),_hx___onMouseClick->__get(0),1);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_213_startLongPressSelection)
HXDLIN( 213)		 ::haxe::ui::containers::_TableView::Events _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 214)		::Array< ::Dynamic> timerClick = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 215)		::Array< Float > currentMouseX = ::Array_obj< Float >::__new(1)->init(0,e->screenX);
HXLINE( 216)		::Array< Float > currentMouseY = ::Array_obj< Float >::__new(1)->init(0,e->screenY);
HXLINE( 217)		 ::haxe::ui::core::ItemRenderer renderer = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(e->target);
HXLINE( 218)		::Array< ::Dynamic> _hx___onMouseMove = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 219)		::Array< ::Dynamic> _hx___onMouseUp = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 220)		::Array< ::Dynamic> _hx___onMouseClick = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 222)		_hx___onMouseMove[0] =  ::Dynamic(new _hx_Closure_0(currentMouseY,currentMouseX));
HXLINE( 227)		_hx___onMouseUp[0] =  ::Dynamic(new _hx_Closure_1(renderer,timerClick,_hx___onMouseUp,_hx___onMouseMove));
HXLINE( 237)		_hx___onMouseClick[0] =  ::Dynamic(new _hx_Closure_2(_hx___onMouseClick,renderer));
HXLINE( 243)		 ::haxe::ui::core::Screen _hx_tmp = renderer->get_screen();
HXDLIN( 243)		_hx_tmp->registerEvent(HX_("mousemove",b6,6f,dc,09),_hx___onMouseMove->__get(0),null());
HXLINE( 244)		 ::haxe::ui::core::Screen _hx_tmp1 = renderer->get_screen();
HXDLIN( 244)		_hx_tmp1->registerEvent(HX_("mouseup",c0,0f,73,c0),_hx___onMouseUp->__get(0),null());
HXLINE( 246)		timerClick[0] = ::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_3(_gthis,_hx___onMouseClick,e,currentMouseY,renderer,timerClick,currentMouseX)),this->_tableview->get_longPressSelectionTime());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,startLongPressSelection,(void))

void Events_obj::onContainerEventsStatusChanged(){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_259_onContainerEventsStatusChanged)
HXLINE( 260)		this->super::onContainerEventsStatusChanged();
HXLINE( 261)		if ((this->_containerEventsPaused == true)) {
HXLINE( 262)			this->_tableview->findComponent(HX_("tableview-contents",74,2a,d3,78),::hx::ClassOf< ::haxe::ui::core::Component >(),true,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >()->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            		}
            		else {
HXLINE( 263)			bool _hx_tmp = ::hx::IsNotNull( this->_lastMousePos );
            		}
            	}


void Events_obj::onRendererClick( ::haxe::ui::events::MouseEvent e){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_273_onRendererClick)
HXLINE( 274)		if ((this->_containerEventsPaused == true)) {
HXLINE( 275)			return;
            		}
HXLINE( 278)		::Array< ::Dynamic> components = e->target->findComponentsUnderPoint(e->screenX,e->screenY,null());
HXLINE( 279)		{
HXLINE( 279)			int _g = 0;
HXDLIN( 279)			while((_g < components->length)){
HXLINE( 279)				 ::haxe::ui::core::Component component = components->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 279)				_g = (_g + 1);
HXLINE( 280)				bool _hx_tmp;
HXDLIN( 280)				if (::Std_obj::isOfType(component,::hx::ClassOf< ::haxe::ui::core::InteractiveComponent >())) {
HXLINE( 280)					_hx_tmp = (::hx::TCast<  ::haxe::ui::core::InteractiveComponent >::cast(component)->get_allowInteraction() == true);
            				}
            				else {
HXLINE( 280)					_hx_tmp = false;
            				}
HXDLIN( 280)				if (_hx_tmp) {
HXLINE( 281)					return;
            				}
            			}
            		}
HXLINE( 285)		 ::haxe::ui::core::ItemRenderer renderer = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(e->target);
HXLINE( 286)		::String _hx_switch_0 = this->_tableview->get_selectionMode();
            		if (  (_hx_switch_0==HX_("disabled",7c,41,04,7c)) ){
HXLINE( 287)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("multiple-click-modifier-key",2b,b4,f6,99)) ||  (_hx_switch_0==HX_("multiple-modifier-key",06,1a,77,ac)) ){
HXLINE( 296)			if ((e->ctrlKey == true)) {
HXLINE( 297)				this->toggleSelection(renderer);
            			}
            			else {
HXLINE( 298)				if ((e->shiftKey == true)) {
HXLINE( 299)					::Array< int > selectedIndices = this->_tableview->get_selectedIndices();
HXLINE( 300)					int fromIndex;
HXDLIN( 300)					if ((selectedIndices->length > 0)) {
HXLINE( 300)						fromIndex = selectedIndices->__get((selectedIndices->length - 1));
            					}
            					else {
HXLINE( 300)						fromIndex = 0;
            					}
HXLINE( 301)					int toIndex = renderer->itemIndex;
HXLINE( 302)					if ((fromIndex < toIndex)) {
HXLINE( 303)						int _g1 = 0;
HXDLIN( 303)						while((_g1 < selectedIndices->length)){
HXLINE( 303)							int i = selectedIndices->__get(_g1);
HXDLIN( 303)							_g1 = (_g1 + 1);
HXLINE( 304)							if ((i < fromIndex)) {
HXLINE( 305)								fromIndex = i;
            							}
            						}
            					}
            					else {
HXLINE( 309)						int tmp = fromIndex;
HXLINE( 310)						fromIndex = toIndex;
HXLINE( 311)						toIndex = tmp;
            					}
HXLINE( 314)					this->selectRange(fromIndex,toIndex);
            				}
            				else {
HXLINE( 315)					if ((this->_tableview->get_selectionMode() == HX_("multiple-click-modifier-key",2b,b4,f6,99))) {
HXLINE( 316)						this->_tableview->set_selectedIndex(renderer->itemIndex);
            					}
            				}
            			}
HXLINE( 296)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("multiple-long-press",0f,8d,48,06)) ){
HXLINE( 320)			::Array< int > selectedIndices1 = this->_tableview->get_selectedIndices();
HXLINE( 321)			if ((selectedIndices1->length > 0)) {
HXLINE( 322)				this->toggleSelection(renderer);
            			}
HXLINE( 319)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("one-item",9a,d3,eb,3b)) ){
HXLINE( 290)			this->_tableview->set_selectedIndex(renderer->itemIndex);
HXDLIN( 290)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("one-item-repeated",cd,1a,13,a1)) ){
HXLINE( 293)			this->_tableview->set_selectedIndices(::Array_obj< int >::__new(1)->init(0,renderer->itemIndex));
HXDLIN( 293)			goto _hx_goto_14;
            		}
            		/* default */{
            		}
            		_hx_goto_14:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onRendererClick,(void))

void Events_obj::toggleSelection( ::haxe::ui::core::ItemRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_330_toggleSelection)
HXLINE( 331)		int itemIndex = renderer->itemIndex;
HXLINE( 332)		::Array< int > selectedIndices = this->_tableview->get_selectedIndices()->copy();
HXLINE( 333)		int index = selectedIndices->indexOf(itemIndex,null());
HXLINE( 334)		if ((index == -1)) {
HXLINE( 335)			selectedIndices->push(itemIndex);
            		}
            		else {
HXLINE( 337)			selectedIndices->removeRange(index,1);
            		}
HXLINE( 339)		this->_tableview->set_selectedIndices(selectedIndices);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,toggleSelection,(void))

void Events_obj::selectRange(int fromIndex,int toIndex){
            	HX_STACKFRAME(&_hx_pos_dab48ec5d4bc4236_343_selectRange)
HXDLIN( 343)		 ::haxe::ui::containers::TableView _hx_tmp = this->_tableview;
HXDLIN( 343)		::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN( 343)		{
HXDLIN( 343)			int _g1 = fromIndex;
HXDLIN( 343)			int _g2 = (toIndex + 1);
HXDLIN( 343)			while((_g1 < _g2)){
HXDLIN( 343)				_g1 = (_g1 + 1);
HXDLIN( 343)				int i = (_g1 - 1);
HXDLIN( 343)				_g->push(i);
            			}
            		}
HXDLIN( 343)		_hx_tmp->set_selectedIndices(_g);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,selectRange,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::containers::TableView tableview) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(tableview);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TableView tableview) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.containers._TableView.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(tableview);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_tableview,"_tableview");
	 ::haxe::ui::containers::ScrollViewEvents_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tableview,"_tableview");
	 ::haxe::ui::containers::ScrollViewEvents_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tableview") ) { return ::hx::Val( _tableview ); }
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"selectRange") ) { return ::hx::Val( selectRange_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onScrollChange") ) { return ::hx::Val( onScrollChange_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onRendererClick") ) { return ::hx::Val( onRendererClick_dyn() ); }
		if (HX_FIELD_EQ(inName,"toggleSelection") ) { return ::hx::Val( toggleSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onRendererCreated") ) { return ::hx::Val( onRendererCreated_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onRendererDestroyed") ) { return ::hx::Val( onRendererDestroyed_dyn() ); }
		if (HX_FIELD_EQ(inName,"onRendererMouseDown") ) { return ::hx::Val( onRendererMouseDown_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"startLongPressSelection") ) { return ::hx::Val( startLongPressSelection_dyn() ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"onContainerEventsStatusChanged") ) { return ::hx::Val( onContainerEventsStatusChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_tableview") ) { _tableview=inValue.Cast<  ::haxe::ui::containers::TableView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_tableview",34,85,ad,2c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TableView */ ,(int)offsetof(Events_obj,_tableview),HX_("_tableview",34,85,ad,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_tableview",34,85,ad,2c),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onScrollChange",1c,45,24,39),
	HX_("onRendererCreated",86,58,3c,96),
	HX_("onRendererDestroyed",f7,3d,9d,8a),
	HX_("onRendererMouseDown",45,b7,38,85),
	HX_("startLongPressSelection",e7,2f,00,50),
	HX_("onContainerEventsStatusChanged",07,de,a0,19),
	HX_("onRendererClick",66,9b,53,8e),
	HX_("toggleSelection",18,86,c7,da),
	HX_("selectRange",21,a9,8a,3d),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TableView.Events",e9,9d,d7,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Events_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Events_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Events_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Events_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TableView