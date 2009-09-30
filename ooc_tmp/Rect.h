/* Rect header file, generated with ooc */
#ifndef ___Rect__
#define ___Rect__


struct _View;
typedef struct _View View;
struct _ViewClass;
typedef struct _ViewClass ViewClass;

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

struct _View
{
	struct _lang__Object __super__;
	lang__Double x, y, s;
};


struct _ViewClass
{
	struct _lang__ObjectClass __super__;
	lang__Void (*init)(View *, lang__Double, lang__Double, lang__Double);
};


lang__Class *View_class();

lang__Void View___load__();
lang__Void View___defaults__(View *this);
lang__Void View___defaults___impl(View *this);
lang__Void View___destroy__(View *this);
lang__Void View___destroy___impl(View *this);
View *View_new(lang__Double x, lang__Double y, lang__Double s);
lang__Void View_init(View *this, lang__Double x, lang__Double y, lang__Double s);
lang__Void View_init_impl(View *this, lang__Double x, lang__Double y, lang__Double s);

lang__Void _Rect_load();

#endif // ___Rect__

