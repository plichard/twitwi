/* structs.ArrayList source file, generated with ooc */
#include "ArrayList.h"

lang__Void ArrayList___defaults___impl(structs__ArrayList *this)
{
	List___defaults___impl((structs__List *) this);
	this->size = 0;
}

lang__Void ArrayList___destroy___impl(structs__ArrayList *this)
{
}

lang__Void ArrayList_init_impl(structs__ArrayList *this)
{
	ArrayList_init_withCapacity(this, ((lang__Int) (10)));
}

lang__Void ArrayList_init_withCapacity_impl(structs__ArrayList *this, lang__Int capacity)
{
	this->capacity = capacity;
	this->data = (lang__Pointer) GC_MALLOC(((lang__SizeT) (capacity * this->T->size)));
}

lang__Void ArrayList_add_impl(structs__ArrayList *this, uint8_t * element)
{
	ArrayList_ensureCapacity(this, this->size + 1);
	memcpy(((lang__Pointer) (this->data + this->size * this->T->size)), ((lang__Pointer) (element)), ((lang__SizeT) (this->T->size)));
	this->size += 1;
}

lang__Void ArrayList_add_withIndex_impl(structs__ArrayList *this, lang__Int index, uint8_t * element)
{
	ArrayList_checkIndex(this, index);
	ArrayList_ensureCapacity(this, this->size + 1);
	lang__Octet *dst, *src;
	dst = this->data + (this->T->size * (index + 1));
	src = this->data + (this->T->size * index);
	lang__Int bsize = (this->size - index) * this->T->size;
	memmove(((lang__Pointer) (dst)), ((lang__Pointer) (src)), ((lang__SizeT) (bsize)));
	memcpy(((lang__Pointer) (this->data + index * this->T->size)), ((lang__Pointer) (element)), ((lang__SizeT) (this->T->size)));
	this->size += 1;
}

lang__Void ArrayList_addAll_impl(structs__ArrayList *this, structs__List *list)
{
	ArrayList_addAll_withIndex(this, 0, list);
}

lang__Void ArrayList_addAll_withIndex_impl(structs__ArrayList *this, lang__Int index, structs__List *list)
{
	
	{
		uint8_t element[this->T->size];
		
		{
			lang__Iterator *iter376 = List_iterator(list);
			while (Iterator_hasNext(iter376))
			{
				Iterator_next(iter376, element);
				ArrayList_add(this, element);
			}
		};
	};
}

lang__Void ArrayList_clear_impl(structs__ArrayList *this)
{
	this->size = 0;
}

void ArrayList_get_impl(structs__ArrayList *this, lang__Pointer returnarg268, lang__Int index)
{
	ArrayList_checkIndex(this, index);
	if (returnarg268)
	{
		memcpy(((lang__Pointer) (returnarg268)), ((lang__Pointer) (this->data + index * this->T->size)), ((lang__SizeT) (this->T->size)));
	}
	return;
}

lang__Int ArrayList_indexOf_impl(structs__ArrayList *this, uint8_t * element)
{
	lang__Int index = 0 - 1;
	while (index < this->size)
	{
		index += 1;
		uint8_t candidate[this->T->size];
		memcpy(((lang__Pointer) (candidate)), ((lang__Pointer) (this->data + index * this->T->size)), ((lang__SizeT) (this->T->size)));
		if ((*candidate) == (*element))
		{
			return index;
		}
	}
	return 0 - 1;
}

lang__Int ArrayList_lastIndexOf_impl(structs__ArrayList *this, uint8_t * element)
{
	lang__Int index = this->size;
	while (index)
	{
		uint8_t candidate[this->T->size];
		memcpy(((lang__Pointer) (candidate)), ((lang__Pointer) (this->data + index * this->T->size)), ((lang__SizeT) (this->T->size)));
		if ((*candidate) == (*element))
		{
			return index;
		}
		index -= 1;
	}
	return 0 - 1;
}

void ArrayList_removeAt_impl(structs__ArrayList *this, lang__Pointer returnarg271, lang__Int index)
{
	uint8_t element[this->T->size];
	memcpy(((lang__Pointer) (element)), ((lang__Pointer) (this->data + index * this->T->size)), ((lang__SizeT) (this->T->size)));
	memmove(((lang__Pointer) (this->data + (index * this->T->size))), ((lang__Pointer) (this->data + ((index + 1) * this->T->size))), ((lang__SizeT) ((this->size - index) * this->T->size)));
	this->size -= 1;
	if (returnarg271)
	{
		memcpy(((lang__Pointer) (returnarg271)), ((lang__Pointer) (element)), ((lang__SizeT) (this->T->size)));
	}
	return;
}

lang__Bool ArrayList_remove_impl(structs__ArrayList *this, uint8_t * element)
{
	lang__Int index = ArrayList_indexOf(this, element);
	if (index == 0 - 1)
	{
		return false;
	}
	else 
	{
		ArrayList_removeAt(this, NULL, index);
	}
	return true;
}

lang__Void ArrayList_set_impl(structs__ArrayList *this, lang__Int index, uint8_t * element)
{
	memcpy(((lang__Pointer) (this->data + index * this->T->size)), ((lang__Pointer) (element)), ((lang__SizeT) (this->T->size)));
}

lang__Int ArrayList_size_impl(structs__ArrayList *this)
{
	return this->size;
}

lang__Void ArrayList_ensureCapacity_impl(structs__ArrayList *this, lang__Int newSize)
{
	while (newSize >= this->capacity)
	{
		ArrayList_grow(this);
	}
}

lang__Void ArrayList_grow_impl(structs__ArrayList *this)
{
	this->capacity = this->capacity * 1.1 + 10;
	lang__Pointer tmpData = (lang__Pointer) GC_REALLOC(((lang__Pointer) (this->data)), ((lang__SizeT) (this->capacity * this->T->size)));
	if (tmpData)
	{
		this->data = tmpData;
	}
	else 
	{
		printf(((lang__String) ("Failed to allocate %zu bytes of memory for array to grow! Exiting..\n")), this->capacity * this->T->size);
		lang__Int x = 0;
		x = 1 / x;
	}
}

lang__Void ArrayList_checkIndex_impl(structs__ArrayList *this, lang__Int index)
{
	if (index < 0)
	{
		Exception_throw(Exception_new(ArrayList_class(), __OP_ADD_String_String("Index too small! ", __OP_ADD_Int_String(index, " < 0"))));
	}
	if (index >= this->size)
	{
		Exception_throw(Exception_new(ArrayList_class(), __OP_ADD_String_String("Index too big! ", __OP_ADD_Int_String(index, __OP_ADD_String_Int(" >= ", ArrayList_size(this))))));
	}
}

lang__Iterator *ArrayList_iterator_impl(structs__ArrayList *this)
{
	return ((lang__Iterator *) ArrayListIterator_new(this->T, this));
}

structs__ArrayList *ArrayList_clone_impl(structs__ArrayList *this)
{
	structs__ArrayList *copy = ArrayList_new_withCapacity(this->T, ArrayList_size(this));
	ArrayList_addAll(copy, ((structs__List *) this));
	return copy;
}

lang__Class *ArrayList_class()
{
	static lang__Bool __done__ = false;
	static structs__ArrayListClass class = 
	{
		{
			{
				{
					{
						.size = sizeof(structs__ArrayList),
						.name = "ArrayList",
					},
					.__defaults__ = (lang__Void (*)(lang__Object *)) ArrayList___defaults___impl,
					.__destroy__ = (lang__Void (*)(lang__Object *)) ArrayList___destroy___impl,
				},
				.iterator = (lang__Iterator * (*)(lang__Iterable *)) ArrayList_iterator_impl,
			},
			.add = (lang__Void (*)(structs__List *, uint8_t *)) ArrayList_add_impl,
			.add_withIndex = (lang__Void (*)(structs__List *, lang__Int, uint8_t *)) ArrayList_add_withIndex_impl,
			.addAll = (lang__Void (*)(structs__List *, structs__List *)) ArrayList_addAll_impl,
			.addAll_atStart = List_addAll_atStart_impl,
			.clear = (lang__Void (*)(structs__List *)) ArrayList_clear_impl,
			.removeLast = List_removeLast_impl,
			.contains = List_contains_impl,
			.get = (lang__Void (*)(structs__List *, lang__Pointer, lang__Int)) ArrayList_get_impl,
			.indexOf = (lang__Int (*)(structs__List *, uint8_t *)) ArrayList_indexOf_impl,
			.isEmpty = List_isEmpty_impl,
			.lastIndexOf = (lang__Int (*)(structs__List *, uint8_t *)) ArrayList_lastIndexOf_impl,
			.removeAt = (lang__Void (*)(structs__List *, lang__Pointer, lang__Int)) ArrayList_removeAt_impl,
			.remove = (lang__Bool (*)(structs__List *, uint8_t *)) ArrayList_remove_impl,
			.set = (lang__Void (*)(structs__List *, lang__Int, uint8_t *)) ArrayList_set_impl,
			.size = (lang__Int (*)(structs__List *)) ArrayList_size_impl,
			.clone = (structs__List * (*)(structs__List *)) ArrayList_clone_impl,
			.lastIndex = List_lastIndex_impl,
		},
		.init = ArrayList_init_impl,
		.init_withCapacity = ArrayList_init_withCapacity_impl,
		.addAll_withIndex = ArrayList_addAll_withIndex_impl,
		.ensureCapacity = ArrayList_ensureCapacity_impl,
		.grow = ArrayList_grow_impl,
		.checkIndex = ArrayList_checkIndex_impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = List_class();
	}
	return classPtr;
}


lang__Void ArrayList___defaults__(structs__ArrayList *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void ArrayList___destroy__(structs__ArrayList *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void ArrayList_init(structs__ArrayList *this)
{
	((structs__ArrayListClass *)((lang__Object *)this)->class)->init((structs__ArrayList *) this);
}


lang__Void ArrayList_init_withCapacity(structs__ArrayList *this, lang__Int capacity)
{
	((structs__ArrayListClass *)((lang__Object *)this)->class)->init_withCapacity((structs__ArrayList *) this, capacity);
}


lang__Void ArrayList_add(structs__ArrayList *this, uint8_t * element)
{
	((structs__ListClass *)((lang__Object *)this)->class)->add((structs__List *) this, element);
}


lang__Void ArrayList_add_withIndex(structs__ArrayList *this, lang__Int index, uint8_t * element)
{
	((structs__ListClass *)((lang__Object *)this)->class)->add_withIndex((structs__List *) this, index, element);
}


lang__Void ArrayList_addAll(structs__ArrayList *this, structs__List *list)
{
	((structs__ListClass *)((lang__Object *)this)->class)->addAll((structs__List *) this, list);
}


lang__Void ArrayList_addAll_withIndex(structs__ArrayList *this, lang__Int index, structs__List *list)
{
	((structs__ArrayListClass *)((lang__Object *)this)->class)->addAll_withIndex((structs__ArrayList *) this, index, list);
}


lang__Void ArrayList_clear(structs__ArrayList *this)
{
	((structs__ListClass *)((lang__Object *)this)->class)->clear((structs__List *) this);
}


void ArrayList_get(structs__ArrayList *this, lang__Pointer returnarg268, lang__Int index)
{
	((structs__ListClass *)((lang__Object *)this)->class)->get((structs__List *) this, returnarg268, index);
}


lang__Int ArrayList_indexOf(structs__ArrayList *this, uint8_t * element)
{
	return (lang__Int)((structs__ListClass *)((lang__Object *)this)->class)->indexOf((structs__List *) this, element);
}


lang__Int ArrayList_lastIndexOf(structs__ArrayList *this, uint8_t * element)
{
	return (lang__Int)((structs__ListClass *)((lang__Object *)this)->class)->lastIndexOf((structs__List *) this, element);
}


void ArrayList_removeAt(structs__ArrayList *this, lang__Pointer returnarg271, lang__Int index)
{
	((structs__ListClass *)((lang__Object *)this)->class)->removeAt((structs__List *) this, returnarg271, index);
}


lang__Bool ArrayList_remove(structs__ArrayList *this, uint8_t * element)
{
	return (lang__Bool)((structs__ListClass *)((lang__Object *)this)->class)->remove((structs__List *) this, element);
}


lang__Void ArrayList_set(structs__ArrayList *this, lang__Int index, uint8_t * element)
{
	((structs__ListClass *)((lang__Object *)this)->class)->set((structs__List *) this, index, element);
}


lang__Int ArrayList_size(structs__ArrayList *this)
{
	return (lang__Int)((structs__ListClass *)((lang__Object *)this)->class)->size((structs__List *) this);
}


lang__Void ArrayList_ensureCapacity(structs__ArrayList *this, lang__Int newSize)
{
	((structs__ArrayListClass *)((lang__Object *)this)->class)->ensureCapacity((structs__ArrayList *) this, newSize);
}


lang__Void ArrayList_grow(structs__ArrayList *this)
{
	((structs__ArrayListClass *)((lang__Object *)this)->class)->grow((structs__ArrayList *) this);
}


lang__Void ArrayList_checkIndex(structs__ArrayList *this, lang__Int index)
{
	((structs__ArrayListClass *)((lang__Object *)this)->class)->checkIndex((structs__ArrayList *) this, index);
}


lang__Iterator *ArrayList_iterator(structs__ArrayList *this)
{
	return (lang__Iterator *)((lang__IterableClass *)((lang__Object *)this)->class)->iterator((lang__Iterable *) this);
}


structs__ArrayList *ArrayList_clone(structs__ArrayList *this)
{
	return (structs__ArrayList *)((structs__ListClass *)((lang__Object *)this)->class)->clone((structs__List *) this);
}


lang__Void ArrayList___load__()
{
}


structs__ArrayList *ArrayList_new(lang__Class *T)
{
	structs__ArrayList *this = ((structs__ArrayList *) Class_alloc(ArrayList_class()));
	this->T = T;
	ArrayList_init(this);
	return this;
}


structs__ArrayList *ArrayList_new_withCapacity(lang__Class *T, lang__Int capacity)
{
	structs__ArrayList *this = ((structs__ArrayList *) Class_alloc(ArrayList_class()));
	this->T = T;
	ArrayList_init_withCapacity(this, ((lang__Int) (capacity)));
	return this;
}



lang__Void ArrayListIterator___defaults___impl(structs__ArrayListIterator *this)
{
	Iterator___defaults___impl((lang__Iterator *) this);
	this->index = 0;
}

lang__Void ArrayListIterator___destroy___impl(structs__ArrayListIterator *this)
{
}

lang__Void ArrayListIterator_init_impl(structs__ArrayListIterator *this, structs__ArrayList *list)
{
	this->list = list;
}

lang__Bool ArrayListIterator_hasNext_impl(structs__ArrayListIterator *this)
{
	return this->index < ArrayList_size(this->list);
}

void ArrayListIterator_next_impl(structs__ArrayListIterator *this, lang__Pointer returnarg288)
{
	uint8_t element[this->T->size];
	ArrayList_get(this->list, element, this->index);
	this->index += 1;
	if (returnarg288)
	{
		memcpy(((lang__Pointer) (returnarg288)), ((lang__Pointer) (element)), ((lang__SizeT) (this->T->size)));
	}
	return;
}

lang__Class *ArrayListIterator_class()
{
	static lang__Bool __done__ = false;
	static structs__ArrayListIteratorClass class = 
	{
		{
			{
				{
					.size = sizeof(structs__ArrayListIterator),
					.name = "ArrayListIterator",
				},
				.__defaults__ = (lang__Void (*)(lang__Object *)) ArrayListIterator___defaults___impl,
				.__destroy__ = (lang__Void (*)(lang__Object *)) ArrayListIterator___destroy___impl,
			},
			.hasNext = (lang__Bool (*)(lang__Iterator *)) ArrayListIterator_hasNext_impl,
			.next = (lang__Void (*)(lang__Iterator *, lang__Pointer)) ArrayListIterator_next_impl,
		},
		.init = ArrayListIterator_init_impl,
	};
	lang__Class *classPtr = (lang__Class *) &class;
	if(!__done__)
	{
		__done__ = true;
		classPtr->super = Iterator_class();
	}
	return classPtr;
}


lang__Void ArrayListIterator___defaults__(structs__ArrayListIterator *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__defaults__((lang__Object *) this);
}


lang__Void ArrayListIterator___destroy__(structs__ArrayListIterator *this)
{
	((lang__ObjectClass *)((lang__Object *)this)->class)->__destroy__((lang__Object *) this);
}


lang__Void ArrayListIterator_init(structs__ArrayListIterator *this, structs__ArrayList *list)
{
	((structs__ArrayListIteratorClass *)((lang__Object *)this)->class)->init((structs__ArrayListIterator *) this, list);
}


lang__Bool ArrayListIterator_hasNext(structs__ArrayListIterator *this)
{
	return (lang__Bool)((lang__IteratorClass *)((lang__Object *)this)->class)->hasNext((lang__Iterator *) this);
}


void ArrayListIterator_next(structs__ArrayListIterator *this, lang__Pointer returnarg288)
{
	((lang__IteratorClass *)((lang__Object *)this)->class)->next((lang__Iterator *) this, returnarg288);
}


lang__Void ArrayListIterator___load__()
{
}


structs__ArrayListIterator *ArrayListIterator_new(lang__Class *T, structs__ArrayList *list)
{
	structs__ArrayListIterator *this = ((structs__ArrayListIterator *) Class_alloc(ArrayListIterator_class()));
	this->T = T;
	ArrayListIterator_init(this, ((structs__ArrayList *) (list)));
	return this;
}



lang__Void _structs_ArrayList_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		ArrayList___load__();
		ArrayListIterator___load__();
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
		_structs_List_load();
	}
}

