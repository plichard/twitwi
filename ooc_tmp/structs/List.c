/* structs.List source file, generated with ooc */
#include "List.h"

lang__Void List___defaults___impl(structs__List *this)
{
	Iterable___defaults___impl((lang__Iterable *) this);
}

lang__Void List___destroy___impl(structs__List *this)
{
}

lang__Void List_addAll_impl(structs__List *this, structs__List *list)
{
	List_addAll_atStart(this, 0, list);
}

lang__Void List_addAll_atStart_impl(structs__List *this, lang__Int start, structs__List *list)
{
	if (start == 0)
	{
		
		{
			uint8_t element[this->T->size];
			
			{
				lang__Iterator *iter389 = List_iterator(list);
				while (Iterator_hasNext(iter389))
				{
					Iterator_next(iter389, element);
					List_add(this, element);
				}
			};
		};
		return;
	}
	lang__Int index = 0;
	lang__Iterator *iter = List_iterator(list);
	while (index < start)
	{
		Iterator_next(iter, NULL);
		index += 1;
	}
	while (Iterator_hasNext(iter))
	{
		
		{
			lang__Class *gcall390;
			Iterator_next(iter, &(gcall390));
			List_add(this, (uint8_t*) &gcall390);
		};
	}
}

lang__Bool List_removeLast_impl(structs__List *this)
{
	lang__Int size = List_size(this);
	if (size > 0)
	{
		List_removeAt(this, NULL, size - 1);
		return true;
	}
	return false;
}

lang__Bool List_contains_impl(structs__List *this, uint8_t * element)
{
	return List_indexOf(this, element) != 0 - 1;
}

lang__Bool List_isEmpty_impl(structs__List *this)
{
	return (List_size(this) == 0);
}

lang__SizeT List_lastIndex_impl(structs__List *this)
{
	return List_size(this) - 1;
}

lang__Class *List_class()
{
	static lang__Bool __done__ = false;
	static structs__ListClass class = 
	{
		{
			{
				{
					.size = sizeof(structs__List),
					.name = "List",
				},
				.__defaults__ = (lang__Void (*)(lang__Object *)) List___defaults___impl,
				.__destroy__ = (lang__Void (*)(lang__Object *)) List___destroy___impl,
			},
		},
		.add = List_add,
		.add_withIndex = List_add_withIndex,
		.addAll = List_addAll_impl,
		.addAll_atStart = List_addAll_atStart_impl,
		.clear = List_clear,
		.removeLast = List_removeLast_impl,
		.contains = List_contains_impl,
		.get = List_get,
		.indexOf = List_indexOf,
		.isEmpty = List_isEmpty_impl,
		.lastIndexOf = List_lastIndexOf,
		.removeAt = List_removeAt,
		.remove = List_remove,
		.set = List_set,
		.size = List_size,
		.clone = List_clone,
		.lastIndex = List_lastIndex_impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Iterable_class();
	}
	return classPtr;
}


lang__Void List___defaults__(structs__List *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void List___destroy__(structs__List *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void List_add(structs__List *this, uint8_t * element)
{
	((structs__ListClass *)((lang__Object *)this)->class)->add((structs__List *) this, element);
}


lang__Void List_add_withIndex(structs__List *this, lang__Int index, uint8_t * element)
{
	((structs__ListClass *)((lang__Object *)this)->class)->add_withIndex((structs__List *) this, index, element);
}


lang__Void List_addAll(structs__List *this, structs__List *list)
{
	((structs__ListClass *)((lang__Object *)this)->class)->addAll((structs__List *) this, list);
}


lang__Void List_addAll_atStart(structs__List *this, lang__Int start, structs__List *list)
{
	((structs__ListClass *)((lang__Object *)this)->class)->addAll_atStart((structs__List *) this, start, list);
}


lang__Void List_clear(structs__List *this)
{
	((structs__ListClass *)((lang__Object *)this)->class)->clear((structs__List *) this);
}


lang__Bool List_removeLast(structs__List *this)
{
	return (lang__Bool)((structs__ListClass *)((lang__Object *)this)->class)->removeLast((structs__List *) this);
}


lang__Bool List_contains(structs__List *this, uint8_t * element)
{
	return (lang__Bool)((structs__ListClass *)((lang__Object *)this)->class)->contains((structs__List *) this, element);
}


void List_get(structs__List *this, lang__Pointer returnarg304, lang__Int index)
{
	((structs__ListClass *)((lang__Object *)this)->class)->get((structs__List *) this, returnarg304, index);
}


lang__Int List_indexOf(structs__List *this, uint8_t * element)
{
	return (lang__Int)((structs__ListClass *)((lang__Object *)this)->class)->indexOf((structs__List *) this, element);
}


lang__Bool List_isEmpty(structs__List *this)
{
	return (lang__Bool)((structs__ListClass *)((lang__Object *)this)->class)->isEmpty((structs__List *) this);
}


lang__Int List_lastIndexOf(structs__List *this, uint8_t * element)
{
	return (lang__Int)((structs__ListClass *)((lang__Object *)this)->class)->lastIndexOf((structs__List *) this, element);
}


void List_removeAt(structs__List *this, lang__Pointer returnarg308, lang__Int index)
{
	((structs__ListClass *)((lang__Object *)this)->class)->removeAt((structs__List *) this, returnarg308, index);
}


lang__Bool List_remove(structs__List *this, uint8_t * element)
{
	return (lang__Bool)((structs__ListClass *)((lang__Object *)this)->class)->remove((structs__List *) this, element);
}


lang__Void List_set(structs__List *this, lang__Int index, uint8_t * element)
{
	((structs__ListClass *)((lang__Object *)this)->class)->set((structs__List *) this, index, element);
}


lang__Int List_size(structs__List *this)
{
	return (lang__Int)((structs__ListClass *)((lang__Object *)this)->class)->size((structs__List *) this);
}


lang__Iterator *List_iterator(structs__List *this)
{
	return (lang__Iterator *)((lang__IterableClass *)((lang__Object *)this)->class)->iterator((lang__Iterable *) this);
}


structs__List *List_clone(structs__List *this)
{
	return (structs__List *)((structs__ListClass *)((lang__Object *)this)->class)->clone((structs__List *) this);
}


lang__SizeT List_lastIndex(structs__List *this)
{
	return (lang__SizeT)((structs__ListClass *)((lang__Object *)this)->class)->lastIndex((structs__List *) this);
}


lang__Void List___load__()
{
}


void __OP_IDX_List_Int(lang__Pointer returnarg315, lang__Class *T, structs__List *list, lang__Int i)
{
	
	{
		uint8_t gcall391[T->size];
		List_get(list, gcall391, i);
		if (returnarg315)
		{
			memcpy(((lang__Pointer) (returnarg315)), ((lang__Pointer) (gcall391)), ((lang__SizeT) (T->size)));
		}
		return;
	};
}

lang__Void __OP_IDX_ASS_List_Int_T(lang__Class *T, structs__List *list, lang__Int i, uint8_t * element)
{
	List_set(list, i, element);
}

lang__Void __OP_ADD_ASS_List_T(lang__Class *T, structs__List *list, uint8_t * element)
{
	List_add(list, element);
}

lang__Bool __OP_SUB_ASS_List_T(lang__Class *T, structs__List *list, uint8_t * element)
{
	return List_remove(list, element);
}


lang__Void _structs_List_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		List___load__();
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

