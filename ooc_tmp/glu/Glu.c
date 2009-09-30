/* glu.Glu source file, generated with ooc */
#include "Glu.h"
lang__Class *Quadric_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(((lang__SizeT) (sizeof(lang__Class))));
		_class->size = sizeof(glu__Quadric);
		_class->name = "Quadric";
	}
	return _class;
}


lang__Class *GLU_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(((lang__SizeT) (sizeof(lang__Class))));
		_class->size = sizeof(glu__GLU);
		_class->name = "GLU";
	}
	return _class;
}








lang__Void _glu_Glu_load()
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
	}
}

