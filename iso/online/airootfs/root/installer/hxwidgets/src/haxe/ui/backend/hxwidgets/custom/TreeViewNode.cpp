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
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_066b1635387226d3_11_new,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","new",0x73ce6cf9,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.new","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",11,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_16_applyExpanded,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","applyExpanded",0x184826a0,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.applyExpanded","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",16,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_22_set_data,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","set_data",0xfba583ee,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.set_data","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",22,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_31_updateNodeFromData,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","updateNodeFromData",0x53927006,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.updateNodeFromData","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",31,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_50_get_expanded,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","get_expanded",0x49bc4d89,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.get_expanded","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",50,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_58_set_expanded,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","set_expanded",0x5eb570fd,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.set_expanded","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",58,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_73_getNodesInternal,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","getNodesInternal",0x3e5f55df,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.getNodesInternal","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",73,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_87_get_selected,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","get_selected",0x015a66ab,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.get_selected","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",87,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_066b1635387226d3_93_set_selected,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","set_selected",0x16538a1f,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.set_selected","haxe/ui/backend/hxwidgets/custom/TreeViewNode.hx",93,0x3be60118)
HX_LOCAL_STACK_FRAME(_hx_pos_cd40792116e72f3f_523_registerBehaviours,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","registerBehaviours",0x1f051f60,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.registerBehaviours","haxe/ui/macros/Macros.hx",523,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d21f974eec3cbbd0_651_cloneComponent,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","cloneComponent",0xc35251a7,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_cd40792116e72f3f_493_self,"haxe.ui.backend.hxwidgets.custom.TreeViewNode","self",0xe41ef4d3,"haxe.ui.backend.hxwidgets.custom.TreeViewNode.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{
namespace backend{
namespace hxwidgets{
namespace custom{

void TreeViewNode_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_11_new)
HXLINE(  49)		this->_expand = null();
HXLINE(  13)		this->dataViewItem = null();
HXLINE(  12)		this->treeView = null();
HXLINE(  11)		super::__construct();
            	}

Dynamic TreeViewNode_obj::__CreateEmpty() { return new TreeViewNode_obj; }

void *TreeViewNode_obj::_hx_vtable = 0;

Dynamic TreeViewNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TreeViewNode_obj > _hx_result = new TreeViewNode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TreeViewNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x1395e371) {
			if (inClassId<=(int)0x02a99f31) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x02a99f31;
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
		if (inClassId<=(int)0x4ba87886) {
			if (inClassId<=(int)0x31fbae07) {
				if (inClassId<=(int)0x2eb1d3e1) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x2eb1d3e1;
				} else {
					return inClassId==(int)0x31fbae07;
				}
			} else {
				return inClassId==(int)0x4ba87886;
			}
		} else {
			if (inClassId<=(int)0x72c347e4) {
				return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
			} else {
				return inClassId==(int)0x7ec24579;
			}
		}
	}
}

void TreeViewNode_obj::applyExpanded(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_16_applyExpanded)
HXDLIN(  16)		if (::hx::IsNotNull( this->_expand )) {
HXLINE(  17)			this->set_expanded(( (bool)(this->_expand) ));
HXLINE(  18)			this->_expand = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,applyExpanded,(void))

 ::Dynamic TreeViewNode_obj::set_data( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_22_set_data)
HXLINE(  23)		if (::hx::IsEq( value,this->_data )) {
HXLINE(  24)			return value;
            		}
HXLINE(  26)		 ::Dynamic r = this->super::set_data(value);
HXLINE(  27)		this->updateNodeFromData();
HXLINE(  28)		return r;
            	}


void TreeViewNode_obj::updateNodeFromData(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_31_updateNodeFromData)
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		bool _hx_tmp1;
HXDLIN(  32)		if (::hx::IsNotNull( this->treeView )) {
HXLINE(  32)			_hx_tmp1 = ::hx::IsNull( this->dataViewItem );
            		}
            		else {
HXLINE(  32)			_hx_tmp1 = true;
            		}
HXDLIN(  32)		if (!(_hx_tmp1)) {
HXLINE(  32)			_hx_tmp = ::hx::IsNull( this->treeView->get_window() );
            		}
            		else {
HXLINE(  32)			_hx_tmp = true;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  33)			return;
            		}
HXLINE(  36)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->treeView->get_window());
HXLINE(  37)		::String text = ( (::String)(this->_data->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE(  38)		::String icon = ( (::String)(this->_data->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)) );
HXLINE(  39)		if (::Std_obj::isOfType( ::Dynamic(this->_data->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic)),::hx::ClassOf< ::haxe::ui::util::VariantType >())) {
HXLINE(  40)			icon = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic( ::Dynamic(this->_data->__Field(HX_("icon",79,e7,b2,45),::hx::paccDynamic))));
            		}
HXLINE(  43)		treeCtrl->setItemText(this->dataViewItem,text);
HXLINE(  44)		if (::hx::IsNotNull( icon )) {
HXLINE(  45)			 ::hx::widgets::DataViewItem _hx_tmp2 = this->dataViewItem;
HXDLIN(  45)			treeCtrl->setItemIconIndex(_hx_tmp2,::haxe::ui::backend::hxwidgets::TreeViewIcons_obj::get(this->treeView,icon));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TreeViewNode_obj,updateNodeFromData,(void))

bool TreeViewNode_obj::get_expanded(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_50_get_expanded)
HXLINE(  51)		bool _hx_tmp;
HXDLIN(  51)		bool _hx_tmp1;
HXDLIN(  51)		if (::hx::IsNotNull( this->treeView )) {
HXLINE(  51)			_hx_tmp1 = ::hx::IsNull( this->dataViewItem );
            		}
            		else {
HXLINE(  51)			_hx_tmp1 = true;
            		}
HXDLIN(  51)		if (!(_hx_tmp1)) {
HXLINE(  51)			_hx_tmp = ::hx::IsNull( this->treeView->get_window() );
            		}
            		else {
HXLINE(  51)			_hx_tmp = true;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  52)			return ( (bool)(this->_expand) );
            		}
HXLINE(  55)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->treeView->get_window());
HXLINE(  56)		return treeCtrl->isExpanded(this->dataViewItem);
            	}


bool TreeViewNode_obj::set_expanded(bool value){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_58_set_expanded)
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		bool _hx_tmp1;
HXDLIN(  59)		if (::hx::IsNotNull( this->treeView )) {
HXLINE(  59)			_hx_tmp1 = ::hx::IsNull( this->dataViewItem );
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp1)) {
HXLINE(  59)			_hx_tmp = ::hx::IsNull( this->treeView->get_window() );
            		}
            		else {
HXLINE(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			this->_expand = value;
HXLINE(  61)			return value;
            		}
HXLINE(  64)		 ::hx::widgets::DataViewTreeCtrl treeCtrl = ::hx::TCast<  ::hx::widgets::DataViewTreeCtrl >::cast(this->treeView->get_window());
HXLINE(  65)		if (value) {
HXLINE(  66)			treeCtrl->expand(this->dataViewItem);
            		}
            		else {
HXLINE(  68)			treeCtrl->collapse(this->dataViewItem);
            		}
HXLINE(  70)		return value;
            	}


::Array< ::Dynamic> TreeViewNode_obj::getNodesInternal(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_73_getNodesInternal)
HXLINE(  74)		bool _hx_tmp;
HXDLIN(  74)		bool _hx_tmp1;
HXDLIN(  74)		if (::hx::IsNotNull( this->treeView )) {
HXLINE(  74)			_hx_tmp1 = ::hx::IsNull( this->dataViewItem );
            		}
            		else {
HXLINE(  74)			_hx_tmp1 = true;
            		}
HXDLIN(  74)		if (!(_hx_tmp1)) {
HXLINE(  74)			_hx_tmp = ::hx::IsNull( this->treeView->get_window() );
            		}
            		else {
HXLINE(  74)			_hx_tmp = true;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  75)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  78)		::Array< ::Dynamic> nodes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  79)		 ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder builder = ::hx::TCast<  ::haxe::ui::backend::hxwidgets::builders::TreeViewBuilder >::cast(this->treeView->_compositeBuilder);
HXLINE(  80)		::Array< ::Dynamic> internalNodes = builder->dataViewItemChildren(this->dataViewItem);
HXLINE(  81)		{
HXLINE(  81)			int _g = 0;
HXDLIN(  81)			while((_g < internalNodes->length)){
HXLINE(  81)				 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode node = internalNodes->__get(_g).StaticCast<  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode >();
HXDLIN(  81)				_g = (_g + 1);
HXLINE(  82)				nodes->push(node);
            			}
            		}
HXLINE(  84)		return nodes;
            	}


bool TreeViewNode_obj::get_selected(){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_87_get_selected)
HXLINE(  88)		if (::hx::IsNull( this->treeView )) {
HXLINE(  89)			return false;
            		}
HXLINE(  91)		return ::hx::IsInstanceEq( this->treeView->get_selectedNode(),::hx::ObjectPtr<OBJ_>(this) );
            	}


bool TreeViewNode_obj::set_selected(bool value){
            	HX_STACKFRAME(&_hx_pos_066b1635387226d3_93_set_selected)
HXLINE(  94)		if (::hx::IsNull( this->treeView )) {
HXLINE(  95)			return value;
            		}
HXLINE(  98)		this->treeView->set_selectedNode(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  99)		return value;
            	}


void TreeViewNode_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_cd40792116e72f3f_523_registerBehaviours)
HXDLIN( 523)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer TreeViewNode_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_d21f974eec3cbbd0_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::backend::hxwidgets::custom::TreeViewNode c = ( ( ::haxe::ui::backend::hxwidgets::custom::TreeViewNode)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer TreeViewNode_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_cd40792116e72f3f_493_self)
HXDLIN( 493)		return  ::haxe::ui::backend::hxwidgets::custom::TreeViewNode_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< TreeViewNode_obj > TreeViewNode_obj::__new() {
	::hx::ObjectPtr< TreeViewNode_obj > __this = new TreeViewNode_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TreeViewNode_obj > TreeViewNode_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TreeViewNode_obj *__this = (TreeViewNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TreeViewNode_obj), true, "haxe.ui.backend.hxwidgets.custom.TreeViewNode"));
	*(void **)__this = TreeViewNode_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TreeViewNode_obj::TreeViewNode_obj()
{
}

void TreeViewNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TreeViewNode);
	HX_MARK_MEMBER_NAME(treeView,"treeView");
	HX_MARK_MEMBER_NAME(dataViewItem,"dataViewItem");
	HX_MARK_MEMBER_NAME(_expand,"_expand");
	 ::haxe::ui::containers::TreeViewNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TreeViewNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(treeView,"treeView");
	HX_VISIT_MEMBER_NAME(dataViewItem,"dataViewItem");
	HX_VISIT_MEMBER_NAME(_expand,"_expand");
	 ::haxe::ui::containers::TreeViewNode_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TreeViewNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_expand") ) { return ::hx::Val( _expand ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"treeView") ) { return ::hx::Val( treeView ); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return ::hx::Val( set_data_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataViewItem") ) { return ::hx::Val( dataViewItem ); }
		if (HX_FIELD_EQ(inName,"get_expanded") ) { return ::hx::Val( get_expanded_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_expanded") ) { return ::hx::Val( set_expanded_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return ::hx::Val( get_selected_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return ::hx::Val( set_selected_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"applyExpanded") ) { return ::hx::Val( applyExpanded_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNodesInternal") ) { return ::hx::Val( getNodesInternal_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateNodeFromData") ) { return ::hx::Val( updateNodeFromData_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TreeViewNode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_expand") ) { _expand=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"treeView") ) { treeView=inValue.Cast<  ::haxe::ui::containers::TreeView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dataViewItem") ) { dataViewItem=inValue.Cast<  ::hx::widgets::DataViewItem >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TreeViewNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("treeView",e3,fe,16,32));
	outFields->push(HX_("dataViewItem",62,06,d8,ee));
	outFields->push(HX_("_expand",f9,ff,e9,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TreeViewNode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::TreeView */ ,(int)offsetof(TreeViewNode_obj,treeView),HX_("treeView",e3,fe,16,32)},
	{::hx::fsObject /*  ::hx::widgets::DataViewItem */ ,(int)offsetof(TreeViewNode_obj,dataViewItem),HX_("dataViewItem",62,06,d8,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TreeViewNode_obj,_expand),HX_("_expand",f9,ff,e9,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TreeViewNode_obj_sStaticStorageInfo = 0;
#endif

static ::String TreeViewNode_obj_sMemberFields[] = {
	HX_("treeView",e3,fe,16,32),
	HX_("dataViewItem",62,06,d8,ee),
	HX_("applyExpanded",c7,70,04,3a),
	HX_("set_data",27,6b,7b,70),
	HX_("updateNodeFromData",7f,f8,f4,68),
	HX_("_expand",f9,ff,e9,32),
	HX_("get_expanded",42,c5,e8,ae),
	HX_("set_expanded",b6,e8,e1,c3),
	HX_("getNodesInternal",18,9e,b4,dd),
	HX_("get_selected",64,de,86,66),
	HX_("set_selected",d8,01,80,7b),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class TreeViewNode_obj::__mClass;

void TreeViewNode_obj::__register()
{
	TreeViewNode_obj _hx_dummy;
	TreeViewNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.hxwidgets.custom.TreeViewNode",87,7c,0c,f4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TreeViewNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TreeViewNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TreeViewNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TreeViewNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace hxwidgets
} // end namespace custom
