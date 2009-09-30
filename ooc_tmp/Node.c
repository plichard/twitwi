/* Node source file, generated with ooc */
#include "Node.h"

lang__Void Node___defaults___impl(Node *this)
{
	Object___defaults___impl((lang__Object *) this);
}

lang__Void Node___destroy___impl(Node *this)
{
}

lang__Void Node_init_impl(Node *this, Node *parent)
{
	this->parent = parent;
	this->children = ArrayList_new(Pointer_class());
}

lang__Class *Node_class()
{
	static lang__Bool __done__ = false;
	static NodeClass class = 
	{
		{
			{
				.size = sizeof(Node),
				.name = "Node",
			},
			.__defaults__ = (lang__Void (*)(lang__Object *)) Node___defaults___impl,
			.__destroy__ = (lang__Void (*)(lang__Object *)) Node___destroy___impl,
		},
		.init = Node_init_impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Object_class();
	}
	return classPtr;
}


lang__Void Node___defaults__(Node *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void Node___destroy__(Node *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void Node_init(Node *this, Node *parent)
{
	((NodeClass *)((lang__Object *)this)->class)->init((Node *) this, parent);
}


lang__Void Node___load__()
{
}


Node *Node_new(Node *parent)
{
	Node *this = ((Node *) Class_alloc(Node_class()));
	Node_init(this, ((Node *) (parent)));
	return this;
}



lang__Void _Node_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		Node___load__();
		_lang_Iterable_load();
		_lang_LLong_load();
		_lang_Float_load();
		_lang_Iterator_load();
		_lang_ooclib_load();
		_lang_Double_load();
		_lang_String_load();
		_lang_Exception_load();
		_lang_Bool_load();
		_lang_Char_load();
		_lang_Range_load();
		_lang_TypeInfo_load();
		_lang_Object_load();
		_lang_Interface_load();
		_lang_stdio_load();
		_lang_Int_load();
		_structs_ArrayList_load();
	}
}

