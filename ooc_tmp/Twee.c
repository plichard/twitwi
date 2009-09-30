/* Twee source file, generated with ooc */
#include "Twee.h"

lang__Void Twee___defaults___impl(Twee *this)
{
	Object___defaults___impl((lang__Object *) this);
	this->running = true;
}

lang__Void Twee___destroy___impl(Twee *this)
{
}

lang__Void Twee_init_impl(Twee *this)
{
	this->root = Node_new(NULL);
}

lang__Void Twee_openScreen_impl(Twee *this, lang__Int x, lang__Int y, lang__Int bpp)
{
	this->bpp = bpp;
	this->y = y;
	this->x = x;
	SDL_Init(((lang__UInt32) (SDL_INIT_EVERYTHING)));
	Twee_setRes(this, x, y, bpp);
}

lang__Void Twee_setRes_impl(Twee *this, lang__Int x, lang__Int y, lang__Int bpp)
{
	this->bpp = bpp;
	this->y = y;
	this->x = x;
	SDL_SetVideoMode(((lang__Int) (x)), ((lang__Int) (y)), ((lang__Int) (bpp)), ((lang__UInt32) (SDL_OPENGL)));
}

lang__Void Twee_start_impl(Twee *this)
{
	this->running = true;
	sdl__Event event;
	while (this->running)
	{
		SDL_PollEvent(((sdl__Event) (event)));
		if (((((sdl__EventStruct) (*event)).type)) == (SDL_QUIT)){
			this->running = false;
		};
		glClear(((lang__UInt32) (GL_COLOR_BUFFER_BIT)));
		glFlush();
		SDL_GL_SwapBuffers();
	}
}

lang__Class *Twee_class()
{
	static lang__Bool __done__ = false;
	static TweeClass class = 
	{
		{
			{
				.size = sizeof(Twee),
				.name = "Twee",
			},
			.__defaults__ = (lang__Void (*)(lang__Object *)) Twee___defaults___impl,
			.__destroy__ = (lang__Void (*)(lang__Object *)) Twee___destroy___impl,
		},
		.init = Twee_init_impl,
		.openScreen = Twee_openScreen_impl,
		.setRes = Twee_setRes_impl,
		.start = Twee_start_impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Object_class();
	}
	return classPtr;
}


lang__Void Twee___defaults__(Twee *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void Twee___destroy__(Twee *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void Twee_init(Twee *this)
{
	((TweeClass *)((lang__Object *)this)->class)->init((Twee *) this);
}


lang__Void Twee_openScreen(Twee *this, lang__Int x, lang__Int y, lang__Int bpp)
{
	((TweeClass *)((lang__Object *)this)->class)->openScreen((Twee *) this, x, y, bpp);
}


lang__Void Twee_setRes(Twee *this, lang__Int x, lang__Int y, lang__Int bpp)
{
	((TweeClass *)((lang__Object *)this)->class)->setRes((Twee *) this, x, y, bpp);
}


lang__Void Twee_start(Twee *this)
{
	((TweeClass *)((lang__Object *)this)->class)->start((Twee *) this);
}


lang__Void Twee___load__()
{
}


Twee *Twee_new()
{
	Twee *this = ((Twee *) Class_alloc(Twee_class()));
	Twee_init(this);
	return this;
}



lang__Void _Twee_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		Twee___load__();
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
		_Node_load();
		_sdl_Sdl_load();
		_sdl_Video_load();
		_sdl_Event_load();
		_gl_Gl_load();
		_glu_Glu_load();
	}
}

