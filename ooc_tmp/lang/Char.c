/* lang.Char source file, generated with ooc */
#include "Char.h"
lang__Bool Char_isAlphaNumeric(lang__Char this)
{
	return isalnum(((lang__Char) (this)));
}


lang__Bool Char_isAlpha(lang__Char this)
{
	return isalpha(((lang__Char) (this)));
}


lang__Bool Char_isDigit(lang__Char this)
{
	return isdigit(((lang__Char) (this)));
}


lang__Bool Char_isWhitespace(lang__Char this)
{
	return isspace(((lang__Char) (this)));
}


lang__Char Char_toLower(lang__Char this)
{
	return tolower(((lang__Char) (this)));
}


lang__Int Char_toInt(lang__Char this)
{
	if ((this >= 48) && (this <= 57))
	{
		return (this - 48);
	}
	return 0 - 1;
}


lang__Void Char_print(lang__Char this)
{
	printf(((lang__String) ("%c")), this);
}


lang__Void Char_println(lang__Char this)
{
	printf(((lang__String) ("%c\n")), this);
}



lang__Void _lang_Char_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_Object_load();
		_lang_ooclib_load();
		_lang_stdio_load();
	}
}

