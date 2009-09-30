/* lang.Exception source file, generated with ooc */
#include "Exception.h"

lang__Void Exception___defaults___impl(lang__Exception *this)
{
	Object___defaults___impl((lang__Object *) this);
}

lang__Void Exception___destroy___impl(lang__Exception *this)
{
}

lang__Void Exception_init_impl(lang__Exception *this, lang__Class *origin, lang__String msg)
{
	this->msg = msg;
	this->origin = origin;
}

lang__Void Exception_init_noOrigin_impl(lang__Exception *this, lang__String msg)
{
	this->msg = msg;
}

lang__Void Exception_crash_impl(lang__Exception *this)
{
	fflush(((lang__FStream) (stdout)));
	lang__Int x = 0;
	x = 1 / x;
}

lang__String Exception_getMessage_impl(lang__Exception *this)
{
	lang__Int max = 1024;
	lang__String buffer = ((lang__String) (lang__Pointer) GC_MALLOC(((lang__SizeT) (max))));
	if (this->origin)
	{
		snprintf(((lang__String) (buffer)), ((lang__Int) (max)), ((lang__String) ("[%s in %s]: %s\n")), ((lang__Object*) this)->class->name, this->origin->name, this->msg);
	}
	else 
	{
		snprintf(((lang__String) (buffer)), ((lang__Int) (max)), ((lang__String) ("[%s]: %s\n")), ((lang__Object*) this)->class->name, this->msg);
	}
	return buffer;
}

lang__Void Exception_print_impl(lang__Exception *this)
{
	fprintf(((lang__FStream) (stderr)), ((lang__String) ("%s")), Exception_getMessage(this));
}

lang__Void Exception_throw_impl(lang__Exception *this)
{
	Exception_print(this);
	Exception_crash(this);
}

lang__Class *Exception_class()
{
	static lang__Bool __done__ = false;
	static lang__ExceptionClass class = 
	{
		{
			{
				.size = sizeof(lang__Exception),
				.name = "Exception",
			},
			.__defaults__ = (lang__Void (*)(lang__Object *)) Exception___defaults___impl,
			.__destroy__ = (lang__Void (*)(lang__Object *)) Exception___destroy___impl,
		},
		.init = Exception_init_impl,
		.init_noOrigin = Exception_init_noOrigin_impl,
		.crash = Exception_crash_impl,
		.getMessage = Exception_getMessage_impl,
		.print = Exception_print_impl,
		.throw = Exception_throw_impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Object_class();
	}
	return classPtr;
}


lang__Void Exception___defaults__(lang__Exception *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void Exception___destroy__(lang__Exception *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void Exception_init(lang__Exception *this, lang__Class *origin, lang__String msg)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->init((lang__Exception *) this, origin, msg);
}


lang__Void Exception_init_noOrigin(lang__Exception *this, lang__String msg)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->init_noOrigin((lang__Exception *) this, msg);
}


lang__Void Exception_crash(lang__Exception *this)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->crash((lang__Exception *) this);
}


lang__String Exception_getMessage(lang__Exception *this)
{
	return (lang__String)((lang__ExceptionClass *)((lang__Object *)this)->class)->getMessage((lang__Exception *) this);
}


lang__Void Exception_print(lang__Exception *this)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->print((lang__Exception *) this);
}


lang__Void Exception_throw(lang__Exception *this)
{
	((lang__ExceptionClass *)((lang__Object *)this)->class)->throw((lang__Exception *) this);
}


lang__Void Exception___load__()
{
}


lang__Exception *Exception_new(lang__Class *origin, lang__String msg)
{
	lang__Exception *this = ((lang__Exception *) Class_alloc(Exception_class()));
	Exception_init(this, ((lang__Class *) (origin)), ((lang__String) (msg)));
	return this;
}


lang__Exception *Exception_new_noOrigin(lang__String msg)
{
	lang__Exception *this = ((lang__Exception *) Class_alloc(Exception_class()));
	Exception_init_noOrigin(this, ((lang__String) (msg)));
	return this;
}



lang__Void _lang_Exception_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		Exception___load__();
		_lang_Object_load();
		_lang_ooclib_load();
		_lang_stdio_load();
	}
}

