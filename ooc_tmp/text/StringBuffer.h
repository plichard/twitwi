/* text.StringBuffer header file, generated with ooc */
#ifndef ___text_StringBuffer__
#define ___text_StringBuffer__


struct _text__StringBuffer;
typedef struct _text__StringBuffer text__StringBuffer;
struct _text__StringBufferClass;
typedef struct _text__StringBufferClass text__StringBufferClass;

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

struct _text__StringBuffer
{
	struct _lang__Object __super__;
	lang__SizeT size;
	lang__SizeT capacity;
	lang__String data;
};


struct _text__StringBufferClass
{
	struct _lang__ObjectClass __super__;
	lang__Void (*init)(text__StringBuffer *);
	lang__Void (*init_withCapa)(text__StringBuffer *, lang__SizeT);
	lang__Void (*append_str)(text__StringBuffer *, lang__String);
	lang__Void (*append_chr)(text__StringBuffer *, lang__Char);
	lang__Void (*checkLength)(text__StringBuffer *, lang__SizeT);
	lang__String (*toString)(text__StringBuffer *);
};


lang__Class *StringBuffer_class();

lang__Void StringBuffer___load__();
lang__Void StringBuffer___defaults__(text__StringBuffer *this);
lang__Void StringBuffer___defaults___impl(text__StringBuffer *this);
lang__Void StringBuffer___destroy__(text__StringBuffer *this);
lang__Void StringBuffer___destroy___impl(text__StringBuffer *this);
text__StringBuffer *StringBuffer_new();
lang__Void StringBuffer_init(text__StringBuffer *this);
lang__Void StringBuffer_init_impl(text__StringBuffer *this);
text__StringBuffer *StringBuffer_new_withCapa(lang__SizeT capacity);
lang__Void StringBuffer_init_withCapa(text__StringBuffer *this, lang__SizeT capacity);
lang__Void StringBuffer_init_withCapa_impl(text__StringBuffer *this, lang__SizeT capacity);
lang__Void StringBuffer_append_str(text__StringBuffer *this, lang__String str);
lang__Void StringBuffer_append_str_impl(text__StringBuffer *this, lang__String str);
lang__Void StringBuffer_append_chr(text__StringBuffer *this, lang__Char chr);
lang__Void StringBuffer_append_chr_impl(text__StringBuffer *this, lang__Char chr);
lang__Void StringBuffer_checkLength(text__StringBuffer *this, lang__SizeT min);
lang__Void StringBuffer_checkLength_impl(text__StringBuffer *this, lang__SizeT min);
lang__String StringBuffer_toString(text__StringBuffer *this);
lang__String StringBuffer_toString_impl(text__StringBuffer *this);

lang__Void _text_StringBuffer_load();

#endif // ___text_StringBuffer__

