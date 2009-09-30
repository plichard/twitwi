/* Rect source file, generated with ooc */
#include "Rect.h"

lang__Void View___defaults___impl(View *this)
{
	Object___defaults___impl((lang__Object *) this);
}

lang__Void View___destroy___impl(View *this)
{
}

lang__Void View_init_impl(View *this, lang__Double x, lang__Double y, lang__Double s)
{
	this->s = s;
	this->y = y;
	this->x = x;
}

lang__Class *View_class()
{
	static lang__Bool __done__ = false;
	static ViewClass class = 
	{
		{
			{
				.size = sizeof(View),
				.name = "View",
			},
			.__defaults__ = (lang__Void (*)(lang__Object *)) View___defaults___impl,
			.__destroy__ = (lang__Void (*)(lang__Object *)) View___destroy___impl,
		},
		.init = View_init_impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Object_class();
	}
	return classPtr;
}


lang__Void View___defaults__(View *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void View___destroy__(View *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void View_init(View *this, lang__Double x, lang__Double y, lang__Double s)
{
	((ViewClass *)((lang__Object *)this)->class)->init((View *) this, x, y, s);
}


lang__Void View___load__()
{
}


View *View_new(lang__Double x, lang__Double y, lang__Double s)
{
	View *this = ((View *) Class_alloc(View_class()));
	View_init(this, ((lang__Double) (x)), ((lang__Double) (y)), ((lang__Double) (s)));
	return this;
}



lang__Void _Rect_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		View___load__();
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
	}
}

