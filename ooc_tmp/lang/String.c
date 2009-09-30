/* lang.String source file, generated with ooc */
#include "String.h"
lang__String String_new(lang__SizeT length)
{
	return (lang__Pointer) GC_MALLOC(((lang__SizeT) (length)));
}



lang__Bool String_equals(lang__String this, lang__String other)
{
	if ((this == NULL) || (other == NULL))
	{
		return false;
	}
	if ((lang__SizeT) strlen(this) != (lang__SizeT) strlen(other))
	{
		return false;
	}
	
	{
		lang__SizeT i;
		for (i = 0; i < (lang__SizeT) strlen(other); i++)
		{
			if (__OP_IDX_String_SizeT(this, i) != __OP_IDX_String_SizeT(other, i))
			{
				return false;
			}
		}
	};
	return true;
}







lang__Bool String_isEmpty(lang__String this)
{
	return (this == NULL) || (this[0] == 0);
}


lang__Bool String_startsWith(lang__String this, lang__String s)
{
	if ((lang__SizeT) strlen(this) < (lang__SizeT) strlen(s))
	{
		return false;
	}
	
	{
		lang__SizeT i;
		for (i = 0; i < (lang__SizeT) strlen(s); i++)
		{
			if (__OP_IDX_String_SizeT(this, i) != __OP_IDX_String_SizeT(s, i))
			{
				return false;
			}
		}
	};
	return true;
}


lang__Bool String_endsWith(lang__String this, lang__String s)
{
	lang__SizeT l1 = (lang__SizeT) strlen(this);
	lang__SizeT l2 = (lang__SizeT) strlen(s);
	if (l1 < l2)
	{
		return false;
	}
	lang__SizeT offset = (l1 - l2);
	
	{
		lang__SizeT i;
		for (i = 0; i < l2; i++)
		{
			if (__OP_IDX_String_SizeT(this, i + offset) != __OP_IDX_String_SizeT(s, i))
			{
				return false;
			}
		}
	};
	return true;
}


lang__SizeT String_indexOf(lang__String this, lang__Char c)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	
	{
		lang__SizeT i;
		for (i = 0; i < length; i++)
		{
			if (__OP_IDX_String_SizeT(this, i) == c)
			{
				return i;
			}
		}
	};
	return 0 - 1;
}


lang__String String_trim_space(lang__String this)
{
	return String_trim(this, ' ');
}


lang__String String_trim(lang__String this, lang__Char c)
{
	lang__Int start = 0;
	while (this[start] == c)
	{
		start += 1;
	}
	lang__SizeT end = (lang__SizeT) strlen(this);
	while (__OP_IDX_String_SizeT(this, end - 1) == c)
	{
		end -= 1;
	}
	if (start != 0 || end != (lang__SizeT) strlen(this))
	{
		return String_substring(this, start, end);
	}
	return this;
}


lang__SizeT String_first(lang__String this)
{
	return this[0];
}


lang__SizeT String_lastIndex(lang__String this)
{
	return (lang__SizeT) strlen(this) - 1;
}


lang__SizeT String_last(lang__String this)
{
	return __OP_IDX_String_SizeT(this, String_lastIndex(this));
}


lang__SizeT String_lastIndexOf(lang__String this, lang__Char c)
{
	lang__SizeT i = (lang__SizeT) strlen(this);
	while (i)
	{
		if (__OP_IDX_String_SizeT(this, i) == c)
		{
			return i;
		}
		i -= 1;
	}
	return 0 - 1;
}


lang__String String_substring_tillEnd(lang__String this, lang__SizeT start)
{
	lang__SizeT len = (lang__SizeT) strlen(this);
	if (start > len)
	{
		printf(((lang__String) ("String.substring~tillEnd: out of bounds: length = %d, start = %d\n")), len, start);
		return NULL;
	}
	lang__SizeT diff = (len - start);
	lang__String sub = ((lang__String) (lang__Pointer) GC_MALLOC(((lang__SizeT) (diff + 1))));
	sub[diff + 1] = 0;
	memcpy(((lang__Pointer) (sub)), ((lang__Pointer) (((lang__Char *) this) + start)), ((lang__SizeT) (diff)));
	return sub;
}


lang__String String_substring(lang__String this, lang__SizeT start, lang__SizeT end)
{
	lang__SizeT len = (lang__SizeT) strlen(this);
	if (start > len || start > end || end > len)
	{
		printf(((lang__String) ("String.substring: out of bounds: length = %d, start = %d, end = %d\n")), len, start, end);
		return NULL;
	}
	lang__SizeT diff = (end - start);
	lang__String sub = ((lang__String) (lang__Pointer) GC_MALLOC(((lang__SizeT) (diff + 1))));
	sub[diff + 1] = 0;
	memcpy(((lang__Pointer) (sub)), ((lang__Pointer) (((lang__Char *) this) + start)), ((lang__SizeT) (diff)));
	return sub;
}


lang__String String_reverse(lang__String this)
{
	lang__SizeT len = (lang__SizeT) strlen(this);
	if (!len)
	{
		return NULL;
	}
	lang__String result = ((lang__String) (lang__Pointer) GC_MALLOC(((lang__SizeT) (len + 1))));
	
	{
		lang__SizeT i;
		for (i = 0; i < len; i++)
		{
			result[i] = this[(len - 1) - i];
		}
	};
	result[len] = 0;
	return result;
}


lang__Void String_println(lang__String this)
{
	printf(((lang__String) ("%s\n")), this);
}


lang__String String_times(lang__String this, lang__Int count)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	lang__Char *result = ((lang__Char *) (lang__Pointer) GC_MALLOC(((lang__SizeT) ((length * count) + 1))));
	
	{
		lang__Int i;
		for (i = 0; i < count; i++)
		{
			memcpy(((lang__Pointer) (result + (i * length))), ((lang__Pointer) (this)), ((lang__SizeT) (length)));
		}
	};
	result[length * count] = '\0';
	return result;
}


lang__String String_clone(lang__String this)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	lang__Pointer copy = (lang__Pointer) GC_MALLOC(((lang__SizeT) (length + 1)));
	memcpy(((lang__Pointer) (copy)), ((lang__Pointer) (this)), ((lang__SizeT) (length + 1)));
	return copy;
}


lang__String String_append(lang__String this, lang__String other)
{
	lang__SizeT length = (lang__SizeT) strlen(this);
	lang__SizeT rlength = (lang__SizeT) strlen(other);
	lang__Char *copy = ((lang__Char *) (lang__Pointer) GC_MALLOC(((lang__SizeT) (length + rlength + 1))));
	memcpy(((lang__Pointer) (copy)), ((lang__Pointer) (this)), ((lang__SizeT) (length)));
	memcpy(((lang__Pointer) (((lang__Char *) copy) + length)), ((lang__Pointer) (other)), ((lang__SizeT) (rlength + 1)));
	return copy;
}


lang__Char String_charAt(lang__String this, lang__SizeT index)
{
	return ((lang__Char *) this)[index];
}


lang__Char __OP_IDX_String_SizeT(lang__String string, lang__SizeT index)
{
	return String_charAt(string, index);
}

lang__String __OP_MUL_String_Int(lang__String str, lang__Int count)
{
	return String_times(str, count);
}

lang__String __OP_ADD_String_String(lang__String left, lang__String right)
{
	return String_append(left, right);
}

lang__String __OP_ADD_LLong_String(lang__LLong left, lang__String right)
{
	return __OP_ADD_String_String(LLong_toString(left), right);
}

lang__String __OP_ADD_String_LLong(lang__String left, lang__LLong right)
{
	return __OP_ADD_String_String(left, LLong_toString(right));
}

lang__String __OP_ADD_Int_String(lang__Int left, lang__String right)
{
	return __OP_ADD_String_String(Int_toString(left), right);
}

lang__String __OP_ADD_String_Int(lang__String left, lang__Int right)
{
	return __OP_ADD_String_String(left, Int_toString(right));
}

lang__String __OP_ADD_Double_String(lang__Double left, lang__String right)
{
	return __OP_ADD_String_String(Double_toString(left), right);
}

lang__String __OP_ADD_String_Double(lang__String left, lang__Double right)
{
	return __OP_ADD_String_String(left, Double_toString(right));
}


lang__Void _lang_String_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_Object_load();
		_lang_ooclib_load();
		_lang_Int_load();
		_lang_LLong_load();
		_lang_Double_load();
		_lang_Range_load();
		_lang_stdio_load();
	}
}

