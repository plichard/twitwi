/* main source file, generated with ooc */
#include "main.h"
lang__Int main()
{
	GC_INIT();
	_main_load();
	Twee *twee = Twee_new();
	Twee_start(twee);
	return 0;
}


lang__Void _main_load()
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
		_Twee_load();
	}
}

