/* lang.stdio source file, generated with ooc */
#include "stdio.h"
lang__Class *FILE_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(((lang__SizeT) (sizeof(lang__Class))));
		_class->size = sizeof(FILE);
		_class->name = "FILE";
	}
	return _class;
}


lang__Class *FStream_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(((lang__SizeT) (sizeof(lang__Class))));
		_class->size = sizeof(lang__FStream);
		_class->name = "FStream";
	}
	return _class;
}


lang__Char FStream_readChar(lang__FStream this)
{
	lang__Char c;
	fread(((lang__Pointer) (&(c))), ((lang__SizeT) (1)), ((lang__SizeT) (1)), ((lang__FStream) (this)));
	return c;
}


lang__String FStream_readLine(lang__FStream this)
{
	lang__Int chunk = 128;
	lang__Int length = chunk;
	lang__Int pos = 0;
	lang__String str = ((lang__String) (lang__Pointer) GC_MALLOC(((lang__SizeT) (length))));
	fgets(((lang__String) (str)), ((lang__SizeT) (chunk)), ((lang__FStream) (this)));
	while (String_last(str) != '\n')
	{
		pos += chunk - 1;
		length += chunk;
		lang__Pointer tmp = (lang__Pointer) GC_REALLOC(((lang__Pointer) (str)), ((lang__SizeT) (length)));
		if (!tmp)
		{
			Exception_new(FStream_class(), "Ran out of memory while reading a (apparently never-ending) line!");
		}
		str = tmp;
		fgets(((lang__String) (((lang__Char *) str) + pos)), ((lang__SizeT) (chunk)), ((lang__FStream) (this)));
	}
	return str;
}


lang__Void println_withStr(lang__String str)
{
	printf(((lang__String) ("%s\n")), str);
}

lang__Void println()
{
	printf(((lang__String) ("\n")));
}


lang__Void _lang_stdio_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_Object_load();
		_lang_ooclib_load();
		_lang_String_load();
		_lang_Exception_load();
	}
}

