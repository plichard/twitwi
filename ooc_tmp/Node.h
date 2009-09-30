/* Node header file, generated with ooc */
#ifndef ___Node__
#define ___Node__


struct _Node;
typedef struct _Node Node;
struct _NodeClass;
typedef struct _NodeClass NodeClass;

#include <lang/Iterable.h>
#include <lang/LLong.h>
#include <lang/Float.h>
#include <lang/Iterator.h>
#include <lang/ooclib.h>
#include <lang/Double.h>
#include <lang/String.h>
#include <lang/Exception.h>
#include <lang/Bool.h>
#include <lang/Char.h>
#include <lang/Range.h>
#include <lang/TypeInfo.h>
#include <lang/Object.h>
#include <lang/Interface.h>
#include <lang/stdio.h>
#include <lang/Int.h>
#include <structs/ArrayList.h>

struct _Node
{
	struct _lang__Object __super__;
	Node *parent;
	structs__ArrayList *children;
};


struct _NodeClass
{
	struct _lang__ObjectClass __super__;
	lang__Void (*init)(Node *, Node *);
};


lang__Class *Node_class();

lang__Void Node___load__();
lang__Void Node___defaults__(Node *this);
lang__Void Node___defaults___impl(Node *this);
lang__Void Node___destroy__(Node *this);
lang__Void Node___destroy___impl(Node *this);
Node *Node_new(Node *parent);
lang__Void Node_init(Node *this, Node *parent);
lang__Void Node_init_impl(Node *this, Node *parent);

lang__Void _Node_load();

#endif // ___Node__

