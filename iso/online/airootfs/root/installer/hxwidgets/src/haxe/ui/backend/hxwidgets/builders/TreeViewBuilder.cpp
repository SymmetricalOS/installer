// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_Platform
#include <haxe/ui/backend/hxwidgets/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_TreeViewIcons
#include <haxe/ui/backend/hxwidgets/TreeViewIcons.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_builders_TreeViewBuilder
#include <haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_hxwidgets_custom_TreeViewNode
#include <haxe/ui/backend/hxwidgets/custom/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeView
#include <haxe/ui/containers/TreeView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#include <haxe/ui/containers/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewCtrl
#include <hx/widgets/DataViewCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewItem
#include <hx/widgets/DataViewItem.h>
#endif
#ifndef INCLUDED_hx_widgets_DataViewTreeCtrl
#include <hx/widgets/DataViewTreeCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_NotifyEvent
#include <hx/widgets/NotifyEvent.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_EventType
#include <wx/widgets/EventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_16_new,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","new",0x39a45d2f,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.new","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",16,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_25_onInitialize,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","onInitialize",0x1773b4a0,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.onInitialize","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",25,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_40_onContextMenu,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","onContextMenu",0x5c178dde,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.onContextMenu","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",40,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_47_onItemStartEdit,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","onItemStartEdit",0xe01812a9,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.onItemStartEdit","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",47,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_52_dataViewItemToNode,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","dataViewItemToNode",0xe74e1930,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.dataViewItemToNode","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",52,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_59_dataViewItemChildren,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","dataViewItemChildren",0x0bf42812,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.dataViewItemChildren","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",59,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_82_createNode,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","createNode",0xc27b062f,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.createNode","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",82,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_134_removeNode,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","removeNode",0x2d0c7f77,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.removeNode","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",134,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_140_clearNodes,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","clearNodes",0xdbac3275,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.clearNodes","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",140,0x2d9f6ac0)
HX_LOCAL_STACK_FRAME(_hx_pos_bcf2f90b62ca7b4a_150_deleteDataViewItem,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder","deleteDataViewItem",0x42565b3e,"haxe.ui.backend.hxwidgets.builders.TreeViewBuilder.deleteDataViewItem","haxe/ui/backend/hxwidgets/builders/TreeViewBuilder.hx",150,0x2d9f6ac0)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace builders{

void TreeViewBuilder_obj::__construct( ::haxe::ui::containers::TreeView treeview){
            	HX_GC_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_16_new)
HXLINE(  81)		this->_dataViewItemToNodeMap =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  18)		this->nodesToCreate = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  17)		this->_treeview = null();
HXLINE(  21)		super::__construct(treeview);
HXLINE(  22)		this->_treeview = treeview;
            	}

Dynamic TreeViewBuilder_obj::__CreateEmpty() { return new TreeViewBuilder_obj; }

void *TreeViewBuilder_obj::_hx_vtable = 0;

Dynamic TreeViewBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewBuilder_obj > _hx_result = new TreeViewBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TreeViewBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x0d6b3e23;
	}
}

void TreeViewBuilder_obj::onInitialize(){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_25_onInitialize)
HXLINE(  26)		this->super::onInitialize();
HXLINE(  27)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->_component->get_window());
HXLINE(  28)		if (::haxe::ui::backend::hxwidgets::Platform_obj::get_isWindows()) {
HXLINE(  29)			treeCtrl->set_indent(16);
            		}
HXLINE(  31)		treeCtrl->bind(::wx::widgets::EventType_obj::DATAVIEW_ITEM_START_EDITING,this->onItemStartEdit_dyn(),null());
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			::Array< ::Dynamic> _g1 = this->nodesToCreate;
HXDLIN(  32)			while((_g < _g1->length)){
HXLINE(  32)				 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node = _g1->__get(_g).StaticCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >();
HXDLIN(  32)				_g = (_g + 1);
HXLINE(  33)				this->createNode(node);
            			}
            		}
HXLINE(  35)		this->nodesToCreate = null();
HXLINE(  37)		this->_component->get_window()->bind(::wx::widgets::EventType_obj::DATAVIEW_ITEM_CONTEXT_MENU,this->onContextMenu_dyn(),null());
            	}


void TreeViewBuilder_obj::onContextMenu( ::hx::widgets::Event _){
            	HX_GC_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_40_onContextMenu)
HXLINE(  42)		 ::haxe::ui::containers::TreeView _hx_tmp = this->_treeview;
HXDLIN(  42)		_hx_tmp->dispatch( ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("rightmousedown",ab,1d,2b,41)));
HXLINE(  43)		 ::haxe::ui::containers::TreeView _hx_tmp1 = this->_treeview;
HXDLIN(  43)		_hx_tmp1->dispatch( ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("rightclick",ec,f2,f5,b7)));
HXLINE(  44)		 ::haxe::ui::containers::TreeView _hx_tmp2 = this->_treeview;
HXDLIN(  44)		_hx_tmp2->dispatch( ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,HX_("rightmouseup",64,77,d0,dd)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,onContextMenu,(void))

void TreeViewBuilder_obj::onItemStartEdit( ::hx::widgets::Event event){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_47_onItemStartEdit)
HXLINE(  48)		 ::hx::widgets::NotifyEvent notifyEvent = event->convertTo(::hx::ClassOf< ::hx::widgets::NotifyEvent >()).StaticCast<  ::hx::widgets::NotifyEvent >();
HXLINE(  49)		notifyEvent->veto();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,onItemStartEdit,(void))

 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode TreeViewBuilder_obj::dataViewItemToNode( ::hx::widgets::DataViewItem dataViewItem){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_52_dataViewItemToNode)
HXLINE(  53)		if (::hx::IsNull( dataViewItem )) {
HXLINE(  54)			return null();
            		}
HXLINE(  56)		::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  56)		return ( ( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode)(( ( ::haxe::ds::IntMap)(this1) )->get(dataViewItem->get_id())) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,dataViewItemToNode,return )

::Array< ::Dynamic> TreeViewBuilder_obj::dataViewItemChildren( ::hx::widgets::DataViewItem dataViewItem){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_59_dataViewItemChildren)
HXLINE(  60)		::Array< ::Dynamic> children = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  61)		if (::hx::IsNull( dataViewItem )) {
HXLINE(  62)			 ::Dynamic k = this->_dataViewItemToNodeMap->keys();
HXDLIN(  62)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  62)				int k1 = ( (int)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  63)				 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode v = ( ( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode)(this->_dataViewItemToNodeMap->get(k1)) );
HXLINE(  64)				if (::hx::IsNull( v->parentNode )) {
HXLINE(  65)					children->push(v);
            				}
            			}
            		}
            		else {
HXLINE(  69)			 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->_component->get_window());
HXLINE(  70)			int childCount = treeCtrl->getChildCount(dataViewItem);
HXLINE(  71)			{
HXLINE(  71)				int _g = 0;
HXDLIN(  71)				int _g1 = childCount;
HXDLIN(  71)				while((_g < _g1)){
HXLINE(  71)					_g = (_g + 1);
HXDLIN(  71)					int n = (_g - 1);
HXLINE(  72)					 ::hx::widgets::DataViewItem childDataItem = treeCtrl->getNthChild(dataViewItem,n);
HXLINE(  73)					::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  73)					if (( ( ::haxe::ds::IntMap)(this1) )->exists(childDataItem->get_id())) {
HXLINE(  74)						::Dynamic this2 = this->_dataViewItemToNodeMap;
HXDLIN(  74)						children->push(( ( ::haxe::ds::IntMap)(this2) )->get(childDataItem->get_id()));
            					}
            				}
            			}
            		}
HXLINE(  78)		return children;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,dataViewItemChildren,return )

void TreeViewBuilder_obj::createNode( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_82_createNode)
HXLINE(  83)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->_component->get_window());
HXLINE(  84)		::String text = ( (::String)(node->get_data()->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE(  85)		::String icon = ( (::String)(node->get_data()->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) );
HXLINE(  86)		if (::hx::IsNull( node->parentNode )) {
HXLINE(  87)			if (::hx::IsEq( node->get_data()->__Field(HX_("expandable",f4,90,fa,55),::hx::paccDynamic),true )) {
HXLINE(  88)				node->dataViewItem = treeCtrl->appendContainer(null(),text,::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(this->_treeview,icon),null());
            			}
            			else {
HXLINE(  90)				node->dataViewItem = treeCtrl->appendItem(null(),text,::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(this->_treeview,icon));
            			}
HXLINE(  92)			{
HXLINE(  92)				::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN(  92)				( ( ::haxe::ds::IntMap)(this1) )->set(node->dataViewItem->get_id(),node);
            			}
            		}
            		else {
HXLINE(  94)			 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode parentNode = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(node->parentNode);
HXLINE(  95)			bool _hx_tmp;
HXDLIN(  95)			if (::hx::IsNotNull( parentNode->dataViewItem )) {
HXLINE(  95)				_hx_tmp = !(treeCtrl->isContainer(parentNode->dataViewItem));
            			}
            			else {
HXLINE(  95)				_hx_tmp = false;
            			}
HXDLIN(  95)			if (_hx_tmp) {
HXLINE(  96)				 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode selectedNode = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(this->_treeview->get_selectedNode());
HXLINE(  97)				if (::hx::IsNull( parentNode->parentNode )) {
HXLINE(  98)					 ::hx::widgets::DataViewItem prevNode = treeCtrl->getPrevItem(null(),parentNode->dataViewItem,null());
HXLINE(  99)					if (::hx::IsNotNull( prevNode )) {
HXLINE( 100)						this->deleteDataViewItem(parentNode->dataViewItem,false);
HXLINE( 101)						 ::Dynamic _hx_tmp1 =  ::Dynamic(parentNode->get_data()->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
HXDLIN( 101)						 ::haxe::ui::containers::TreeView _hx_tmp2 = this->_treeview;
HXDLIN( 101)						parentNode->dataViewItem = treeCtrl->insertContainer(null(),prevNode,( (::String)(_hx_tmp1) ),::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(_hx_tmp2,( (::String)(parentNode->get_data()->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) )),null());
            					}
            					else {
HXLINE( 103)						this->deleteDataViewItem(parentNode->dataViewItem,false);
HXLINE( 104)						 ::Dynamic _hx_tmp3 =  ::Dynamic(parentNode->get_data()->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
HXDLIN( 104)						 ::haxe::ui::containers::TreeView _hx_tmp4 = this->_treeview;
HXDLIN( 104)						parentNode->dataViewItem = treeCtrl->prependContainer(null(),( (::String)(_hx_tmp3) ),::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(_hx_tmp4,( (::String)(parentNode->get_data()->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) )),null());
            					}
HXLINE( 106)					{
HXLINE( 106)						::Dynamic this2 = this->_dataViewItemToNodeMap;
HXDLIN( 106)						( ( ::haxe::ds::IntMap)(this2) )->set(parentNode->dataViewItem->get_id(),parentNode);
            					}
            				}
            				else {
HXLINE( 108)					 ::hx::widgets::DataViewItem prevNode1 = treeCtrl->getPrevItem(::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(parentNode->parentNode)->dataViewItem,parentNode->dataViewItem,null());
HXLINE( 109)					if (::hx::IsNotNull( prevNode1 )) {
HXLINE( 110)						this->deleteDataViewItem(parentNode->dataViewItem,false);
HXLINE( 111)						 ::hx::widgets::DataViewItem _hx_tmp5 = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(parentNode->parentNode)->dataViewItem;
HXDLIN( 111)						 ::Dynamic _hx_tmp6 =  ::Dynamic(parentNode->get_data()->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
HXDLIN( 111)						 ::haxe::ui::containers::TreeView _hx_tmp7 = this->_treeview;
HXDLIN( 111)						parentNode->dataViewItem = treeCtrl->insertContainer(_hx_tmp5,prevNode1,( (::String)(_hx_tmp6) ),::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(_hx_tmp7,( (::String)(parentNode->get_data()->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) )),null());
            					}
            					else {
HXLINE( 113)						this->deleteDataViewItem(parentNode->dataViewItem,false);
HXLINE( 114)						 ::hx::widgets::DataViewItem _hx_tmp8 = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >::cast(parentNode->parentNode)->dataViewItem;
HXDLIN( 114)						 ::Dynamic _hx_tmp9 =  ::Dynamic(parentNode->get_data()->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
HXDLIN( 114)						 ::haxe::ui::containers::TreeView _hx_tmp10 = this->_treeview;
HXDLIN( 114)						parentNode->dataViewItem = treeCtrl->prependContainer(_hx_tmp8,( (::String)(_hx_tmp9) ),::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(_hx_tmp10,( (::String)(parentNode->get_data()->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) )),null());
            					}
HXLINE( 116)					{
HXLINE( 116)						::Dynamic this3 = this->_dataViewItemToNodeMap;
HXDLIN( 116)						( ( ::haxe::ds::IntMap)(this3) )->set(parentNode->dataViewItem->get_id(),parentNode);
            					}
            				}
HXLINE( 118)				if (::hx::IsNotNull( selectedNode )) {
HXLINE( 119)					treeCtrl->pauseEvent(::wx::widgets::EventType_obj::DATAVIEW_SELECTION_CHANGED);
HXLINE( 120)					treeCtrl->set_selection(selectedNode->dataViewItem);
HXLINE( 121)					treeCtrl->unpauseEvent(::wx::widgets::EventType_obj::DATAVIEW_SELECTION_CHANGED);
            				}
            			}
HXLINE( 124)			if (::hx::IsEq( node->get_data()->__Field(HX_("expandable",f4,90,fa,55),::hx::paccDynamic),true )) {
HXLINE( 125)				 ::hx::widgets::DataViewItem parentNode1 = parentNode->dataViewItem;
HXDLIN( 125)				node->dataViewItem = treeCtrl->appendContainer(parentNode1,text,::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(this->_treeview,icon),null());
            			}
            			else {
HXLINE( 127)				 ::hx::widgets::DataViewItem parentNode2 = parentNode->dataViewItem;
HXDLIN( 127)				node->dataViewItem = treeCtrl->appendItem(parentNode2,text,::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(this->_treeview,icon));
            			}
HXLINE( 129)			{
HXLINE( 129)				::Dynamic this4 = this->_dataViewItemToNodeMap;
HXDLIN( 129)				( ( ::haxe::ds::IntMap)(this4) )->set(node->dataViewItem->get_id(),node);
            			}
HXLINE( 130)			parentNode->applyExpanded();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,createNode,(void))

void TreeViewBuilder_obj::removeNode( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_134_removeNode)
HXLINE( 135)		this->deleteDataViewItem(node->dataViewItem,true);
HXLINE( 136)		node->treeView = null();
HXLINE( 137)		node->dataViewItem = null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,removeNode,(void))

void TreeViewBuilder_obj::clearNodes( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_140_clearNodes)
HXLINE( 141)		if (::hx::IsNull( node )) {
HXLINE( 142)			return;
            		}
HXLINE( 144)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->_component->get_window());
HXLINE( 145)		while((treeCtrl->getChildCount(node->dataViewItem) > 0)){
HXLINE( 146)			this->deleteDataViewItem(treeCtrl->getNthChild(node->dataViewItem,0),true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TreeViewBuilder_obj,clearNodes,(void))

void TreeViewBuilder_obj::deleteDataViewItem( ::hx::widgets::DataViewItem dataViewItem,bool clearObjects){
            	HX_STACKFRAME(&_hx_pos_bcf2f90b62ca7b4a_150_deleteDataViewItem)
HXLINE( 151)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->_component->get_window());
HXLINE( 152)		while((treeCtrl->getChildCount(dataViewItem) > 0)){
HXLINE( 153)			this->deleteDataViewItem(treeCtrl->getNthChild(dataViewItem,0),clearObjects);
            		}
HXLINE( 155)		treeCtrl->deleteItem(dataViewItem);
HXLINE( 156)		::Dynamic this1 = this->_dataViewItemToNodeMap;
HXDLIN( 156)		if (( ( ::haxe::ds::IntMap)(this1) )->exists(dataViewItem->get_id())) {
HXLINE( 157)			::Dynamic this2 = this->_dataViewItemToNodeMap;
HXDLIN( 157)			 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node = ( ( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode)(( ( ::haxe::ds::IntMap)(this2) )->get(dataViewItem->get_id())) );
HXLINE( 158)			{
HXLINE( 158)				::Dynamic this3 = this->_dataViewItemToNodeMap;
HXDLIN( 158)				( ( ::haxe::ds::IntMap)(this3) )->remove(dataViewItem->get_id());
            			}
HXLINE( 159)			if (clearObjects) {
HXLINE( 160)				node->treeView = null();
HXLINE( 161)				node->dataViewItem = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(TreeViewBuilder_obj,deleteDataViewItem,(void))


::hx::ObjectPtr< TreeViewBuilder_obj > TreeViewBuilder_obj::__new( ::haxe::ui::containers::TreeView treeview) {
	::hx::ObjectPtr< TreeViewBuilder_obj > __this = new TreeViewBuilder_obj();
	__this->__construct(treeview);
	return __this;
}

::hx::ObjectPtr< TreeViewBuilder_obj > TreeViewBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::TreeView treeview) {
	TreeViewBuilder_obj *__this = (TreeViewBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewBuilder_obj), true, "haxe.ui.backend.hxwidgets.builders.TreeViewBuilder"));
	*(void **)__this = TreeViewBuilder_obj::_hx_vtable;
	__this->__construct(treeview);
	return __this;
}

TreeViewBuilder_obj::TreeViewBuilder_obj()
{
}

void TreeViewBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeViewBuilder);
	HX_MARK_MEMBER_NAME(_treeview,"_treeview");
	HX_MARK_MEMBER_NAME(nodesToCreate,"nodesToCreate");
	HX_MARK_MEMBER_NAME(_dataViewItemToNodeMap,"_dataViewItemToNodeMap");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_treeview,"_treeview");
	HX_VISIT_MEMBER_NAME(nodesToCreate,"nodesToCreate");
	HX_VISIT_MEMBER_NAME(_dataViewItemToNodeMap,"_dataViewItemToNodeMap");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_treeview") ) { return ::hx::Val( _treeview ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createNode") ) { return ::hx::Val( createNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeNode") ) { return ::hx::Val( removeNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearNodes") ) { return ::hx::Val( clearNodes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nodesToCreate") ) { return ::hx::Val( nodesToCreate ); }
		if (HX_FIELD_EQ(inName,"onContextMenu") ) { return ::hx::Val( onContextMenu_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onItemStartEdit") ) { return ::hx::Val( onItemStartEdit_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dataViewItemToNode") ) { return ::hx::Val( dataViewItemToNode_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteDataViewItem") ) { return ::hx::Val( deleteDataViewItem_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dataViewItemChildren") ) { return ::hx::Val( dataViewItemChildren_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_dataViewItemToNodeMap") ) { return ::hx::Val( _dataViewItemToNodeMap ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_treeview") ) { _treeview=inValue.Cast<  ::haxe::ui::containers::TreeView >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nodesToCreate") ) { nodesToCreate=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_dataViewItemToNodeMap") ) { _dataViewItemToNodeMap=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_treeview",22,ca,d3,8e));
	outFields->push(HX_("nodesToCreate",28,9c,6b,ee));
	outFields->push(HX_("_dataViewItemToNodeMap",fe,33,d3,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TreeView */ ,(int)offsetof(TreeViewBuilder_obj,_treeview),HX_("_treeview",22,ca,d3,8e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TreeViewBuilder_obj,nodesToCreate),HX_("nodesToCreate",28,9c,6b,ee)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(TreeViewBuilder_obj,_dataViewItemToNodeMap),HX_("_dataViewItemToNodeMap",fe,33,d3,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewBuilder_obj_sMemberFields[] = {
	HX_("_treeview",22,ca,d3,8e),
	HX_("nodesToCreate",28,9c,6b,ee),
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("onContextMenu",4f,48,47,88),
	HX_("onItemStartEdit",5a,0b,80,43),
	HX_("dataViewItemToNode",1f,e5,2f,c0),
	HX_("dataViewItemChildren",c1,0d,d4,39),
	HX_("_dataViewItemToNodeMap",fe,33,d3,12),
	HX_("createNode",1e,cb,97,5b),
	HX_("removeNode",66,44,29,c6),
	HX_("clearNodes",64,f7,c8,74),
	HX_("deleteDataViewItem",2d,27,38,1b),
	::String(null()) };

::hx::Class TreeViewBuilder_obj::__mClass;

void TreeViewBuilder_obj::__register()
{
	TreeViewBuilder_obj _hx_dummy;
	TreeViewBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.builders.TreeViewBuilder",bd,99,6c,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace builders
