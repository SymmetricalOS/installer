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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#include <haxe/ui/components/ButtonEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDown
#include <haxe/ui/components/DropDown.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownEvents
#include <haxe/ui/components/DropDownEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_components_DropDownHandler
#include <haxe/ui/components/DropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components_IDropDownHandler
#include <haxe/ui/components/IDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_components__DropDown_ListDropDownHandler
#include <haxe/ui/components/_DropDown/ListDropDownHandler.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_de5db126bacf7a84_281_new,"haxe.ui.components._DropDown.ListDropDownHandler","new",0xad1bcd29,"haxe.ui.components._DropDown.ListDropDownHandler.new","haxe/ui/components/DropDown.hx",281,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_284_get_component,"haxe.ui.components._DropDown.ListDropDownHandler","get_component",0xfc74f69d,"haxe.ui.components._DropDown.ListDropDownHandler.get_component","haxe/ui/components/DropDown.hx",284,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_290_reset,"haxe.ui.components._DropDown.ListDropDownHandler","reset",0x531fcad8,"haxe.ui.components._DropDown.ListDropDownHandler.reset","haxe/ui/components/DropDown.hx",290,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_300_prepare,"haxe.ui.components._DropDown.ListDropDownHandler","prepare",0x09de26d0,"haxe.ui.components._DropDown.ListDropDownHandler.prepare","haxe/ui/components/DropDown.hx",300,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_345_get_selectedIndex,"haxe.ui.components._DropDown.ListDropDownHandler","get_selectedIndex",0x409fec97,"haxe.ui.components._DropDown.ListDropDownHandler.get_selectedIndex","haxe/ui/components/DropDown.hx",345,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_352_set_selectedIndex,"haxe.ui.components._DropDown.ListDropDownHandler","set_selectedIndex",0x640dc4a3,"haxe.ui.components._DropDown.ListDropDownHandler.set_selectedIndex","haxe/ui/components/DropDown.hx",352,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_395_indexOfItem,"haxe.ui.components._DropDown.ListDropDownHandler","indexOfItem",0x00d64045,"haxe.ui.components._DropDown.ListDropDownHandler.indexOfItem","haxe/ui/components/DropDown.hx",395,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_425_get_selectedItem,"haxe.ui.components._DropDown.ListDropDownHandler","get_selectedItem",0xf5f9cb2e,"haxe.ui.components._DropDown.ListDropDownHandler.get_selectedItem","haxe/ui/components/DropDown.hx",425,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_438_set_selectedItem,"haxe.ui.components._DropDown.ListDropDownHandler","set_selectedItem",0x4c3bb8a2,"haxe.ui.components._DropDown.ListDropDownHandler.set_selectedItem","haxe/ui/components/DropDown.hx",438,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_458_createListView,"haxe.ui.components._DropDown.ListDropDownHandler","createListView",0x9a4d16d6,"haxe.ui.components._DropDown.ListDropDownHandler.createListView","haxe/ui/components/DropDown.hx",458,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_477_createListView,"haxe.ui.components._DropDown.ListDropDownHandler","createListView",0x9a4d16d6,"haxe.ui.components._DropDown.ListDropDownHandler.createListView","haxe/ui/components/DropDown.hx",477,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_491_onListChange,"haxe.ui.components._DropDown.ListDropDownHandler","onListChange",0x3ced0084,"haxe.ui.components._DropDown.ListDropDownHandler.onListChange","haxe/ui/components/DropDown.hx",491,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_496_applySelection,"haxe.ui.components._DropDown.ListDropDownHandler","applySelection",0x9667cad5,"haxe.ui.components._DropDown.ListDropDownHandler.applySelection","haxe/ui/components/DropDown.hx",496,0x145b8c86)
HX_LOCAL_STACK_FRAME(_hx_pos_de5db126bacf7a84_532_applyDefault,"haxe.ui.components._DropDown.ListDropDownHandler","applyDefault",0x2601c70a,"haxe.ui.components._DropDown.ListDropDownHandler.applyDefault","haxe/ui/components/DropDown.hx",532,0x145b8c86)
namespace haxe{
namespace ui{
namespace components{
namespace _DropDown{

void ListDropDownHandler_obj::__construct( ::haxe::ui::components::DropDown dropdown){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_281_new)
HXLINE( 437)		this->_cachedSelectedItem = null();
HXLINE( 344)		this->_cachedSelectedIndex = -1;
HXLINE( 281)		super::__construct(dropdown);
            	}

Dynamic ListDropDownHandler_obj::__CreateEmpty() { return new ListDropDownHandler_obj; }

void *ListDropDownHandler_obj::_hx_vtable = 0;

Dynamic ListDropDownHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListDropDownHandler_obj > _hx_result = new ListDropDownHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ListDropDownHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0101a03f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0101a03f;
	} else {
		return inClassId==(int)0x184b9921;
	}
}

 ::haxe::ui::core::Component ListDropDownHandler_obj::get_component(){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_284_get_component)
HXLINE( 285)		this->createListView();
HXLINE( 286)		return this->_listview;
            	}


void ListDropDownHandler_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_290_reset)
HXDLIN( 290)		if (::hx::IsNotNull( this->_listview )) {
HXLINE( 291)			 ::haxe::ui::containers::ListView _hx_tmp = this->_listview;
HXDLIN( 291)			_hx_tmp->set_dataSource(this->_dropdown->get_dataSource());
            		}
            	}


void ListDropDownHandler_obj::prepare( ::haxe::ui::containers::Box wrapper){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_300_prepare)
HXLINE( 301)		int itemCount = 4;
HXLINE( 302)		if (::hx::IsNotNull( this->_dropdown->get_dropdownSize() )) {
HXLINE( 303)			itemCount = ( (int)(this->_dropdown->get_dropdownSize()) );
            		}
HXLINE( 305)		bool _hx_tmp;
HXDLIN( 305)		if (::hx::IsNotNull( this->_listview->get_dataSource() )) {
HXLINE( 305)			_hx_tmp = (this->_listview->get_dataSource()->get_size() < itemCount);
            		}
            		else {
HXLINE( 305)			_hx_tmp = false;
            		}
HXDLIN( 305)		if (_hx_tmp) {
HXLINE( 306)			itemCount = this->_listview->get_dataSource()->get_size();
            		}
HXLINE( 309)		bool _hx_tmp1;
HXDLIN( 309)		if ((itemCount > 0)) {
HXLINE( 309)			_hx_tmp1 = ::hx::IsNull( this->_dropdown->get_dropdownHeight() );
            		}
            		else {
HXLINE( 309)			_hx_tmp1 = false;
            		}
HXDLIN( 309)		if (_hx_tmp1) {
HXLINE( 310)			this->_listview->set_itemCount(itemCount);
            		}
HXLINE( 313)		this->_listview->syncComponentValidation(null());
HXLINE( 314)		if (::hx::IsNull( this->_dropdown->get_dropdownWidth() )) {
HXLINE( 315)			wrapper->syncComponentValidation(null());
HXLINE( 316)			Float offset = ( (Float)(0) );
HXLINE( 317)			if (::hx::IsNotNull( wrapper->get_layout() )) {
HXLINE( 318)				Float offset1 = wrapper->get_layout()->get_paddingLeft();
HXDLIN( 318)				offset = (offset1 + wrapper->get_layout()->get_paddingRight());
            			}
HXLINE( 320)			 ::haxe::ui::containers::ListView _hx_tmp2 = this->_listview;
HXDLIN( 320)			_hx_tmp2->set_width((( (Float)(this->_dropdown->get_width()) ) - offset));
            		}
            		else {
HXLINE( 322)			 ::haxe::ui::containers::ListView _hx_tmp3 = this->_listview;
HXDLIN( 322)			_hx_tmp3->set_width(this->_dropdown->get_dropdownWidth());
            		}
HXLINE( 324)		if (::hx::IsNotNull( this->_dropdown->get_dropdownHeight() )) {
HXLINE( 325)			 ::haxe::ui::containers::ListView _hx_tmp4 = this->_listview;
HXDLIN( 325)			_hx_tmp4->set_height(this->_dropdown->get_dropdownHeight());
            		}
HXLINE( 328)		int selectedIndex = this->_dropdown->get_selectedIndex();
HXLINE( 329)		bool _hx_tmp5;
HXDLIN( 329)		bool _hx_tmp6;
HXDLIN( 329)		if (::hx::IsNotNull( this->_dropdown->get_dataSource() )) {
HXLINE( 329)			_hx_tmp6 = ::hx::IsNotNull( this->_dropdown->get_text() );
            		}
            		else {
HXLINE( 329)			_hx_tmp6 = false;
            		}
HXDLIN( 329)		if (_hx_tmp6) {
HXLINE( 329)			_hx_tmp5 = (selectedIndex < 0);
            		}
            		else {
HXLINE( 329)			_hx_tmp5 = false;
            		}
HXDLIN( 329)		if (_hx_tmp5) {
HXLINE( 330)			::String text = this->_dropdown->get_text();
HXLINE( 331)			int itemIndex = this->indexOfItem(text);
HXLINE( 332)			if ((itemIndex != -1)) {
HXLINE( 333)				selectedIndex = itemIndex;
            			}
            		}
HXLINE( 338)		this->_listview->unregisterEvent(HX_("change",70,91,72,b7),this->onListChange_dyn());
HXLINE( 339)		this->_listview->set_selectedIndex(selectedIndex);
HXLINE( 340)		this->_listview->syncComponentValidation(null());
HXLINE( 341)		this->_listview->registerEvent(HX_("change",70,91,72,b7),this->onListChange_dyn(),null());
            	}


int ListDropDownHandler_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_345_get_selectedIndex)
HXLINE( 346)		if (::hx::IsNull( this->_listview )) {
HXLINE( 347)			return this->_cachedSelectedIndex;
            		}
HXLINE( 349)		return this->_listview->get_selectedIndex();
            	}


int ListDropDownHandler_obj::set_selectedIndex(int value){
            	HX_GC_STACKFRAME(&_hx_pos_de5db126bacf7a84_352_set_selectedIndex)
HXLINE( 353)		 ::Dynamic data = null();
HXLINE( 354)		bool dispatchChanged = false;
HXLINE( 355)		bool _hx_tmp;
HXDLIN( 355)		if (::hx::IsNotNull( this->_listview )) {
HXLINE( 355)			_hx_tmp = (this->_cachedSelectedIndex != value);
            		}
            		else {
HXLINE( 355)			_hx_tmp = false;
            		}
HXDLIN( 355)		if (_hx_tmp) {
HXLINE( 356)			this->_cachedSelectedIndex = value;
HXLINE( 357)			this->_listview->set_selectedIndex(value);
            		}
            		else {
HXLINE( 358)			if ((this->_cachedSelectedIndex != value)) {
HXLINE( 359)				this->_cachedSelectedIndex = value;
HXLINE( 360)				bool _hx_tmp1;
HXDLIN( 360)				bool _hx_tmp2;
HXDLIN( 360)				if (::hx::IsNotNull( this->_dropdown->get_dataSource() )) {
HXLINE( 360)					_hx_tmp2 = (value >= 0);
            				}
            				else {
HXLINE( 360)					_hx_tmp2 = false;
            				}
HXDLIN( 360)				if (_hx_tmp2) {
HXLINE( 360)					_hx_tmp1 = (value < this->_dropdown->get_dataSource()->get_size());
            				}
            				else {
HXLINE( 360)					_hx_tmp1 = false;
            				}
HXDLIN( 360)				if (_hx_tmp1) {
HXLINE( 361)					data = this->_dropdown->get_dataSource()->get(value);
            				}
HXLINE( 363)				dispatchChanged = true;
            			}
            		}
HXLINE( 366)		bool _hx_tmp3;
HXDLIN( 366)		bool _hx_tmp4;
HXDLIN( 366)		if (::hx::IsNotNull( this->_dropdown->get_dataSource() )) {
HXLINE( 366)			_hx_tmp4 = (value >= 0);
            		}
            		else {
HXLINE( 366)			_hx_tmp4 = false;
            		}
HXDLIN( 366)		if (_hx_tmp4) {
HXLINE( 366)			_hx_tmp3 = (value < this->_dropdown->get_dataSource()->get_size());
            		}
            		else {
HXLINE( 366)			_hx_tmp3 = false;
            		}
HXDLIN( 366)		if (_hx_tmp3) {
HXLINE( 367)			 ::Dynamic data1 = this->_dropdown->get_dataSource()->get(value);
HXLINE( 368)			 ::haxe::ui::core::ItemRenderer itemRenderer = this->_dropdown->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 369)			if (::hx::IsNull( itemRenderer )) {
HXLINE( 370)				::String text = null();
HXLINE( 371)				if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(data1),::ValueType_obj::TObject_dyn() )) {
HXLINE( 372)					text = ( (::String)(data1->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE( 373)					if (::hx::IsNull( text )) {
HXLINE( 374)						text = ( (::String)(data1->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
            					}
            				}
            				else {
HXLINE( 377)					text = ::Std_obj::string(data1);
            				}
HXLINE( 379)				this->_dropdown->set_text(text);
            			}
            			else {
HXLINE( 381)				itemRenderer->set_data(data1);
            			}
            		}
HXLINE( 385)		if (dispatchChanged) {
HXLINE( 386)			 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),false,data);
HXLINE( 387)			event->value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(data);
HXLINE( 388)			this->_dropdown->dispatch(event);
HXLINE( 389)			 ::haxe::ui::components::DropDown _hx_tmp5 = this->_dropdown;
HXDLIN( 389)			_hx_tmp5->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),false,HX_("selectedItem",0e,e5,59,d6)));
            		}
HXLINE( 392)		return value;
            	}


int ListDropDownHandler_obj::indexOfItem(::String text){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_395_indexOfItem)
HXLINE( 396)		if (::hx::IsNull( text )) {
HXLINE( 397)			return -1;
            		}
HXLINE( 399)		int index = -1;
HXLINE( 400)		if (::hx::IsNotNull( this->_dropdown->get_dataSource() )) {
HXLINE( 401)			int _g = 0;
HXDLIN( 401)			int _g1 = this->_dropdown->get_dataSource()->get_size();
HXDLIN( 401)			while((_g < _g1)){
HXLINE( 401)				_g = (_g + 1);
HXDLIN( 401)				int i = (_g - 1);
HXLINE( 402)				 ::Dynamic item = this->_dropdown->get_dataSource()->get(i);
HXLINE( 403)				bool _hx_tmp;
HXDLIN( 403)				bool _hx_tmp1;
HXDLIN( 403)				if (::hx::IsNotEq( item,text )) {
HXLINE( 403)					_hx_tmp1 = ::hx::IsEq( item->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic),text );
            				}
            				else {
HXLINE( 403)					_hx_tmp1 = true;
            				}
HXDLIN( 403)				if (!(_hx_tmp1)) {
HXLINE( 403)					_hx_tmp = ::hx::IsEq( item->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic),text );
            				}
            				else {
HXLINE( 403)					_hx_tmp = true;
            				}
HXDLIN( 403)				if (_hx_tmp) {
HXLINE( 404)					index = i;
            				}
            			}
            		}
HXLINE( 409)		bool _hx_tmp2;
HXDLIN( 409)		if ((index == -1)) {
HXLINE( 409)			_hx_tmp2 = ::hx::IsNotNull( this->_dropdown->get_dataSource() );
            		}
            		else {
HXLINE( 409)			_hx_tmp2 = false;
            		}
HXDLIN( 409)		if (_hx_tmp2) {
HXLINE( 410)			::String expr = ::haxe::ui::locale::LocaleManager_obj::get_instance()->findBindingExpr(this->_dropdown,HX_("text",ad,cc,f9,4c));
HXLINE( 411)			if (::hx::IsNotNull( expr )) {
HXLINE( 412)				text = expr;
HXLINE( 413)				{
HXLINE( 413)					int _g2 = 0;
HXDLIN( 413)					int _g3 = this->_dropdown->get_dataSource()->get_size();
HXDLIN( 413)					while((_g2 < _g3)){
HXLINE( 413)						_g2 = (_g2 + 1);
HXDLIN( 413)						int i1 = (_g2 - 1);
HXLINE( 414)						 ::Dynamic item1 = this->_dropdown->get_dataSource()->get(i1);
HXLINE( 415)						bool _hx_tmp3;
HXDLIN( 415)						bool _hx_tmp4;
HXDLIN( 415)						if (::hx::IsNotEq( item1,text )) {
HXLINE( 415)							_hx_tmp4 = ::hx::IsEq( item1->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic),text );
            						}
            						else {
HXLINE( 415)							_hx_tmp4 = true;
            						}
HXDLIN( 415)						if (!(_hx_tmp4)) {
HXLINE( 415)							_hx_tmp3 = ::hx::IsEq( item1->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic),text );
            						}
            						else {
HXLINE( 415)							_hx_tmp3 = true;
            						}
HXDLIN( 415)						if (_hx_tmp3) {
HXLINE( 416)							index = i1;
            						}
            					}
            				}
            			}
            		}
HXLINE( 422)		return index;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListDropDownHandler_obj,indexOfItem,return )

 ::Dynamic ListDropDownHandler_obj::get_selectedItem(){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_425_get_selectedItem)
HXLINE( 426)		if (::hx::IsNull( this->_listview )) {
HXLINE( 427)			bool _hx_tmp;
HXDLIN( 427)			if ((this->_cachedSelectedIndex >= 0)) {
HXLINE( 427)				int _hx_tmp1 = this->_cachedSelectedIndex;
HXDLIN( 427)				_hx_tmp = (_hx_tmp1 < this->_dropdown->get_dataSource()->get_size());
            			}
            			else {
HXLINE( 427)				_hx_tmp = false;
            			}
HXDLIN( 427)			if (_hx_tmp) {
HXLINE( 428)				 ::Dynamic data = this->_dropdown->get_dataSource()->get(this->_cachedSelectedIndex);
HXLINE( 429)				return data;
            			}
            			else {
HXLINE( 431)				return this->_cachedSelectedItem;
            			}
            		}
HXLINE( 434)		return this->_listview->get_selectedItem();
            	}


 ::Dynamic ListDropDownHandler_obj::set_selectedItem( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_438_set_selectedItem)
HXLINE( 439)		if (::hx::IsNull( value )) {
HXLINE( 440)			return value;
            		}
HXLINE( 443)		::String text = null();
HXLINE( 444)		if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(value),::ValueType_obj::TObject_dyn() )) {
HXLINE( 445)			text = ( (::String)(value->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE( 446)			if (::hx::IsNull( text )) {
HXLINE( 447)				text = ( (::String)(value->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
            			}
            		}
            		else {
HXLINE( 450)			text = ::Std_obj::string(value);
            		}
HXLINE( 453)		int index = this->indexOfItem(text);
HXLINE( 454)		this->set_selectedIndex(index);
HXLINE( 455)		return value;
            	}


void ListDropDownHandler_obj::createListView(){
            	HX_GC_STACKFRAME(&_hx_pos_de5db126bacf7a84_458_createListView)
HXDLIN( 458)		 ::haxe::ui::components::_DropDown::ListDropDownHandler _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 459)		if (::hx::IsNull( this->_listview )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::_DropDown::ListDropDownHandler,_gthis) HXARGC(1)
            			void _hx_run( ::haxe::ui::events::ActionEvent e){
            				HX_GC_STACKFRAME(&_hx_pos_de5db126bacf7a84_477_createListView)
HXLINE( 477)				::String _hx_switch_0 = e->action;
            				if (  (_hx_switch_0==HX_("actionBack",fd,54,57,4c)) ||  (_hx_switch_0==HX_("actionCancel",d0,49,2f,fe)) ){
HXLINE( 479)					e->cancel();
HXLINE( 480)					::hx::TCast<  ::haxe::ui::components::DropDownEvents >::cast(_gthis->_dropdown->_internalEvents)->hideDropDown();
HXLINE( 478)					goto _hx_goto_11;
            				}
            				if (  (_hx_switch_0==HX_("actionConfirm",ea,0b,2f,06)) ||  (_hx_switch_0==HX_("actionPress",ed,53,ed,9a)) ){
HXLINE( 482)					e->cancel();
HXLINE( 483)					_gthis->applySelection();
HXLINE( 481)					goto _hx_goto_11;
            				}
            				/* default */{
            				}
            				_hx_goto_11:;
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 460)			this->_listview =  ::haxe::ui::containers::ListView_obj::__alloc( HX_CTX );
HXLINE( 461)			if (::hx::IsNotNull( this->_dropdown->get_itemRenderer() )) {
HXLINE( 462)				 ::haxe::ui::containers::ListView _hx_tmp = this->_listview;
HXDLIN( 462)				_hx_tmp->addComponent(this->_dropdown->get_itemRenderer());
            			}
HXLINE( 464)			this->_listview->componentTabIndex = -1;
HXLINE( 465)			 ::haxe::ui::containers::ListView _hx_tmp1 = this->_listview;
HXDLIN( 465)			_hx_tmp1->set_virtual(this->_dropdown->get_virtual());
HXLINE( 466)			 ::haxe::ui::containers::ListView _hx_tmp2 = this->_listview;
HXDLIN( 466)			_hx_tmp2->set_dataSource(this->_dropdown->get_dataSource());
HXLINE( 467)			if ((this->_cachedSelectedIndex != -1)) {
HXLINE( 468)				this->_listview->set_selectedIndex(this->_cachedSelectedIndex);
            			}
HXLINE( 471)			if (::hx::IsNotNull( this->_dropdown->get_id() )) {
HXLINE( 472)				 ::haxe::ui::containers::ListView _hx_tmp3 = this->_listview;
HXDLIN( 472)				_hx_tmp3->addClass((this->_dropdown->get_id() + HX_("-listview",f0,4a,da,57)),null(),null());
HXLINE( 473)				 ::haxe::ui::containers::ListView _hx_tmp4 = this->_listview;
HXDLIN( 473)				_hx_tmp4->set_id((this->_dropdown->get_id() + HX_("_listview",22,cd,00,8b)));
            			}
HXLINE( 476)			this->_listview->registerEvent(HX_("actionstart",ec,04,43,c3), ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListDropDownHandler_obj,createListView,(void))

void ListDropDownHandler_obj::onListChange( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_491_onListChange)
HXDLIN( 491)		if (::Std_obj::isOfType(event->relatedEvent,::hx::ClassOf< ::haxe::ui::events::MouseEvent >())) {
HXLINE( 492)			this->applySelection();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListDropDownHandler_obj,onListChange,(void))

void ListDropDownHandler_obj::applySelection(){
            	HX_GC_STACKFRAME(&_hx_pos_de5db126bacf7a84_496_applySelection)
HXLINE( 497)		if (::hx::IsNull( this->_listview->get_selectedItem() )) {
HXLINE( 498)			return;
            		}
HXLINE( 500)		 ::haxe::ui::core::Component currentHover = this->_listview->findComponent(HX_(":hover",42,d3,17,5c),null(),true,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 501)		if (::hx::IsNotNull( currentHover )) {
HXLINE( 502)			currentHover->removeClass(HX_(":hover",42,d3,17,5c),null(),null());
            		}
HXLINE( 504)		 ::Dynamic selectedItem = this->_listview->get_selectedItem();
HXLINE( 505)		 ::haxe::ui::core::ItemRenderer itemRenderer = this->_dropdown->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 506)		if (::hx::IsNull( itemRenderer )) {
HXLINE( 507)			::String text = null();
HXLINE( 508)			if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(selectedItem),::ValueType_obj::TObject_dyn() )) {
HXLINE( 509)				text = ( (::String)(this->_listview->get_selectedItem()->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE( 510)				if (::hx::IsNull( text )) {
HXLINE( 511)					text = ( (::String)(this->_listview->get_selectedItem()->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
            				}
            			}
            			else {
HXLINE( 514)				text = ::Std_obj::string(selectedItem);
            			}
HXLINE( 516)			this->_dropdown->set_text(text);
            		}
            		else {
HXLINE( 518)			itemRenderer->set_data(selectedItem);
            		}
HXLINE( 523)		if ((this->eventsPaused == false)) {
HXLINE( 524)			::hx::TCast<  ::haxe::ui::components::DropDownEvents >::cast(this->_dropdown->_internalEvents)->hideDropDown();
HXLINE( 525)			 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),false,selectedItem);
HXLINE( 526)			event->value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(selectedItem);
HXLINE( 527)			this->_dropdown->dispatch(event);
HXLINE( 528)			 ::haxe::ui::components::DropDown _hx_tmp = this->_dropdown;
HXDLIN( 528)			_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),false,HX_("selectedItem",0e,e5,59,d6)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListDropDownHandler_obj,applySelection,(void))

void ListDropDownHandler_obj::applyDefault(){
            	HX_STACKFRAME(&_hx_pos_de5db126bacf7a84_532_applyDefault)
HXLINE( 533)		int indexToSelect = 0;
HXLINE( 534)		if (::hx::IsNotNull( this->_cachedSelectedItem )) {
HXLINE( 535)			int index = this->indexOfItem(( (::String)(this->_cachedSelectedItem) ));
HXLINE( 536)			if ((index != -1)) {
HXLINE( 537)				indexToSelect = index;
            			}
            		}
            		else {
HXLINE( 539)			if ((this->_cachedSelectedIndex != -1)) {
HXLINE( 540)				indexToSelect = this->_cachedSelectedIndex;
            			}
            		}
HXLINE( 542)		this->_dropdown->set_selectedIndex(indexToSelect);
            	}



::hx::ObjectPtr< ListDropDownHandler_obj > ListDropDownHandler_obj::__new( ::haxe::ui::components::DropDown dropdown) {
	::hx::ObjectPtr< ListDropDownHandler_obj > __this = new ListDropDownHandler_obj();
	__this->__construct(dropdown);
	return __this;
}

::hx::ObjectPtr< ListDropDownHandler_obj > ListDropDownHandler_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::DropDown dropdown) {
	ListDropDownHandler_obj *__this = (ListDropDownHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListDropDownHandler_obj), true, "haxe.ui.components._DropDown.ListDropDownHandler"));
	*(void **)__this = ListDropDownHandler_obj::_hx_vtable;
	__this->__construct(dropdown);
	return __this;
}

ListDropDownHandler_obj::ListDropDownHandler_obj()
{
}

void ListDropDownHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListDropDownHandler);
	HX_MARK_MEMBER_NAME(_listview,"_listview");
	HX_MARK_MEMBER_NAME(_cachedSelectedIndex,"_cachedSelectedIndex");
	HX_MARK_MEMBER_NAME(_cachedSelectedItem,"_cachedSelectedItem");
	 ::haxe::ui::components::DropDownHandler_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListDropDownHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_listview,"_listview");
	HX_VISIT_MEMBER_NAME(_cachedSelectedIndex,"_cachedSelectedIndex");
	HX_VISIT_MEMBER_NAME(_cachedSelectedItem,"_cachedSelectedItem");
	 ::haxe::ui::components::DropDownHandler_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ListDropDownHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"prepare") ) { return ::hx::Val( prepare_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_listview") ) { return ::hx::Val( _listview ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"indexOfItem") ) { return ::hx::Val( indexOfItem_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onListChange") ) { return ::hx::Val( onListChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyDefault") ) { return ::hx::Val( applyDefault_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_component") ) { return ::hx::Val( get_component_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createListView") ) { return ::hx::Val( createListView_dyn() ); }
		if (HX_FIELD_EQ(inName,"applySelection") ) { return ::hx::Val( applySelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedItem") ) { return ::hx::Val( get_selectedItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedItem") ) { return ::hx::Val( set_selectedItem_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_cachedSelectedItem") ) { return ::hx::Val( _cachedSelectedItem ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedSelectedIndex") ) { return ::hx::Val( _cachedSelectedIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListDropDownHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_listview") ) { _listview=inValue.Cast<  ::haxe::ui::containers::ListView >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_cachedSelectedItem") ) { _cachedSelectedItem=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_cachedSelectedIndex") ) { _cachedSelectedIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListDropDownHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_listview",22,cd,00,8b));
	outFields->push(HX_("_cachedSelectedIndex",76,b8,61,4a));
	outFields->push(HX_("_cachedSelectedItem",2f,60,ba,d4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListDropDownHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ListView */ ,(int)offsetof(ListDropDownHandler_obj,_listview),HX_("_listview",22,cd,00,8b)},
	{::hx::fsInt,(int)offsetof(ListDropDownHandler_obj,_cachedSelectedIndex),HX_("_cachedSelectedIndex",76,b8,61,4a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ListDropDownHandler_obj,_cachedSelectedItem),HX_("_cachedSelectedItem",2f,60,ba,d4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListDropDownHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String ListDropDownHandler_obj_sMemberFields[] = {
	HX_("_listview",22,cd,00,8b),
	HX_("get_component",94,c4,b7,d0),
	HX_("reset",cf,49,c8,e6),
	HX_("prepare",87,91,dd,37),
	HX_("_cachedSelectedIndex",76,b8,61,4a),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("indexOfItem",7c,d2,26,72),
	HX_("get_selectedItem",97,d1,f8,da),
	HX_("_cachedSelectedItem",2f,60,ba,d4),
	HX_("set_selectedItem",0b,bf,3a,31),
	HX_("createListView",ff,80,7e,80),
	HX_("onListChange",6d,5e,1c,f2),
	HX_("applySelection",fe,34,99,7c),
	HX_("applyDefault",f3,24,31,db),
	::String(null()) };

::hx::Class ListDropDownHandler_obj::__mClass;

void ListDropDownHandler_obj::__register()
{
	ListDropDownHandler_obj _hx_dummy;
	ListDropDownHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._DropDown.ListDropDownHandler",b7,04,ba,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListDropDownHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListDropDownHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListDropDownHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListDropDownHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _DropDown
