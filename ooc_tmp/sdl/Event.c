/* sdl.Event source file, generated with ooc */
#include "Event.h"
lang__Class *EventStruct_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(((lang__SizeT) (sizeof(lang__Class))));
		_class->size = sizeof(sdl__EventStruct);
		_class->name = "EventStruct";
	}
	return _class;
}


lang__Class *Event_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(((lang__SizeT) (sizeof(lang__Class))));
		_class->size = sizeof(sdl__Event);
		_class->name = "Event";
	}
	return _class;
}


lang__Class *SDLEvent_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(((lang__SizeT) (sizeof(lang__Class))));
		_class->size = sizeof(sdl__SDLEvent);
		_class->name = "SDLEvent";
	}
	return _class;
}





lang__Void _sdl_Event_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
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
		_sdl_Sdl_load();
	}
}

