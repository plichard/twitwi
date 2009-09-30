/* lang.stdio header file, generated with ooc */
#ifndef ___lang_stdio__
#define ___lang_stdio__


#include <stdio.h>
typedef FILE *lang__FStream;

#include <lang/Object.h>
#include <lang/ooclib.h>
#include <lang/String.h>
#include <lang/Exception.h>

;
lang__Class *FILE_class();
lang__Class *FStream_class();
lang__Char FStream_readChar(lang__FStream this);
lang__String FStream_readLine(lang__FStream this);
lang__Void println_withStr(lang__String str);
lang__Void println();
lang__Void _lang_stdio_load();

#endif // ___lang_stdio__

