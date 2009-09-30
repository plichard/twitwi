/* Twee header file, generated with ooc */
#ifndef ___Twee__
#define ___Twee__


#include <SDL/SDL.h>
#include <GL/gl.h>
struct _Twee;
typedef struct _Twee Twee;
struct _TweeClass;
typedef struct _TweeClass TweeClass;

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
#include <Node.h>
#include <sdl/Sdl.h>
#include <sdl/Video.h>
#include <sdl/Event.h>
#include <gl/Gl.h>
#include <glu/Glu.h>
#include <Rect.h>

struct _Twee
{
	struct _lang__Object __super__;
	lang__Int x, y, bpp;
	View *view;
	lang__Bool running;
	Node *root;
	Node *current;
	Node *focus;
};


struct _TweeClass
{
	struct _lang__ObjectClass __super__;
	lang__Void (*init)(Twee *);
	lang__Void (*init_withRes)(Twee *, lang__Int, lang__Int, lang__Int);
	lang__Void (*openScreen)(Twee *, lang__Int, lang__Int, lang__Int);
	lang__Void (*setRes)(Twee *, lang__Int, lang__Int, lang__Int);
	lang__Void (*start)(Twee *);
	lang__Void (*zoom)(Twee *, lang__Double);
};


lang__Class *Twee_class();

lang__Void Twee___load__();
lang__Void Twee___defaults__(Twee *this);
lang__Void Twee___defaults___impl(Twee *this);
lang__Void Twee___destroy__(Twee *this);
lang__Void Twee___destroy___impl(Twee *this);
Twee *Twee_new();
lang__Void Twee_init(Twee *this);
lang__Void Twee_init_impl(Twee *this);
Twee *Twee_new_withRes(lang__Int x, lang__Int y, lang__Int bpp);
lang__Void Twee_init_withRes(Twee *this, lang__Int x, lang__Int y, lang__Int bpp);
lang__Void Twee_init_withRes_impl(Twee *this, lang__Int x, lang__Int y, lang__Int bpp);
lang__Void Twee_openScreen(Twee *this, lang__Int x, lang__Int y, lang__Int bpp);
lang__Void Twee_openScreen_impl(Twee *this, lang__Int x, lang__Int y, lang__Int bpp);
lang__Void Twee_setRes(Twee *this, lang__Int x, lang__Int y, lang__Int bpp);
lang__Void Twee_setRes_impl(Twee *this, lang__Int x, lang__Int y, lang__Int bpp);
lang__Void Twee_start(Twee *this);
lang__Void Twee_start_impl(Twee *this);
lang__Void Twee_zoom(Twee *this, lang__Double z);
lang__Void Twee_zoom_impl(Twee *this, lang__Double z);

lang__Void _Twee_load();

#endif // ___Twee__

