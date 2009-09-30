/* structs.ArrayList header file, generated with ooc */
#ifndef ___structs_ArrayList__
#define ___structs_ArrayList__


struct _structs__ArrayList;
typedef struct _structs__ArrayList structs__ArrayList;
struct _structs__ArrayListClass;
typedef struct _structs__ArrayListClass structs__ArrayListClass;
struct _structs__ArrayListIterator;
typedef struct _structs__ArrayListIterator structs__ArrayListIterator;
struct _structs__ArrayListIteratorClass;
typedef struct _structs__ArrayListIteratorClass structs__ArrayListIteratorClass;

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
#include <structs/List.h>

struct _structs__ArrayList
{
	struct _structs__List __super__;
	lang__Class *T;
	uint8_t *data;
	lang__Int capacity;
	lang__Int size;
};


struct _structs__ArrayListClass
{
	struct _structs__ListClass __super__;
	lang__Void (*init)(structs__ArrayList *);
	lang__Void (*init_withCapacity)(structs__ArrayList *, lang__Int);
	lang__Void (*addAll_withIndex)(structs__ArrayList *, lang__Int, structs__List *);
	lang__Void (*ensureCapacity)(structs__ArrayList *, lang__Int);
	lang__Void (*grow)(structs__ArrayList *);
	lang__Void (*checkIndex)(structs__ArrayList *, lang__Int);
};


lang__Class *ArrayList_class();

lang__Void ArrayList___load__();
lang__Void ArrayList___defaults__(structs__ArrayList *this);
lang__Void ArrayList___defaults___impl(structs__ArrayList *this);
lang__Void ArrayList___destroy__(structs__ArrayList *this);
lang__Void ArrayList___destroy___impl(structs__ArrayList *this);
structs__ArrayList *ArrayList_new(lang__Class *T);
lang__Void ArrayList_init(structs__ArrayList *this);
lang__Void ArrayList_init_impl(structs__ArrayList *this);
structs__ArrayList *ArrayList_new_withCapacity(lang__Class *T, lang__Int capacity);
lang__Void ArrayList_init_withCapacity(structs__ArrayList *this, lang__Int capacity);
lang__Void ArrayList_init_withCapacity_impl(structs__ArrayList *this, lang__Int capacity);
lang__Void ArrayList_add(structs__ArrayList *this, uint8_t * element);
lang__Void ArrayList_add_impl(structs__ArrayList *this, uint8_t * element);
lang__Void ArrayList_add_withIndex(structs__ArrayList *this, lang__Int index, uint8_t * element);
lang__Void ArrayList_add_withIndex_impl(structs__ArrayList *this, lang__Int index, uint8_t * element);
lang__Void ArrayList_addAll(structs__ArrayList *this, structs__List *list);
lang__Void ArrayList_addAll_impl(structs__ArrayList *this, structs__List *list);
lang__Void ArrayList_addAll_withIndex(structs__ArrayList *this, lang__Int index, structs__List *list);
lang__Void ArrayList_addAll_withIndex_impl(structs__ArrayList *this, lang__Int index, structs__List *list);
lang__Void ArrayList_clear(structs__ArrayList *this);
lang__Void ArrayList_clear_impl(structs__ArrayList *this);
void ArrayList_get(structs__ArrayList *this, lang__Pointer returnarg268, lang__Int index);
void ArrayList_get_impl(structs__ArrayList *this, lang__Pointer returnarg268, lang__Int index);
lang__Int ArrayList_indexOf(structs__ArrayList *this, uint8_t * element);
lang__Int ArrayList_indexOf_impl(structs__ArrayList *this, uint8_t * element);
lang__Int ArrayList_lastIndexOf(structs__ArrayList *this, uint8_t * element);
lang__Int ArrayList_lastIndexOf_impl(structs__ArrayList *this, uint8_t * element);
void ArrayList_removeAt(structs__ArrayList *this, lang__Pointer returnarg271, lang__Int index);
void ArrayList_removeAt_impl(structs__ArrayList *this, lang__Pointer returnarg271, lang__Int index);
lang__Bool ArrayList_remove(structs__ArrayList *this, uint8_t * element);
lang__Bool ArrayList_remove_impl(structs__ArrayList *this, uint8_t * element);
lang__Void ArrayList_set(structs__ArrayList *this, lang__Int index, uint8_t * element);
lang__Void ArrayList_set_impl(structs__ArrayList *this, lang__Int index, uint8_t * element);
lang__Int ArrayList_size(structs__ArrayList *this);
lang__Int ArrayList_size_impl(structs__ArrayList *this);
lang__Void ArrayList_ensureCapacity(structs__ArrayList *this, lang__Int newSize);
lang__Void ArrayList_ensureCapacity_impl(structs__ArrayList *this, lang__Int newSize);
lang__Void ArrayList_grow(structs__ArrayList *this);
lang__Void ArrayList_grow_impl(structs__ArrayList *this);
lang__Void ArrayList_checkIndex(structs__ArrayList *this, lang__Int index);
lang__Void ArrayList_checkIndex_impl(structs__ArrayList *this, lang__Int index);
lang__Iterator *ArrayList_iterator(structs__ArrayList *this);
lang__Iterator *ArrayList_iterator_impl(structs__ArrayList *this);
structs__ArrayList *ArrayList_clone(structs__ArrayList *this);
structs__ArrayList *ArrayList_clone_impl(structs__ArrayList *this);

struct _structs__ArrayListIterator
{
	struct _lang__Iterator __super__;
	lang__Class *T;
	structs__ArrayList *list;
	lang__Int index;
};


struct _structs__ArrayListIteratorClass
{
	struct _lang__IteratorClass __super__;
	lang__Void (*init)(structs__ArrayListIterator *, structs__ArrayList *);
};


lang__Class *ArrayListIterator_class();

lang__Void ArrayListIterator___load__();
lang__Void ArrayListIterator___defaults__(structs__ArrayListIterator *this);
lang__Void ArrayListIterator___defaults___impl(structs__ArrayListIterator *this);
lang__Void ArrayListIterator___destroy__(structs__ArrayListIterator *this);
lang__Void ArrayListIterator___destroy___impl(structs__ArrayListIterator *this);
structs__ArrayListIterator *ArrayListIterator_new(lang__Class *T, structs__ArrayList *list);
lang__Void ArrayListIterator_init(structs__ArrayListIterator *this, structs__ArrayList *list);
lang__Void ArrayListIterator_init_impl(structs__ArrayListIterator *this, structs__ArrayList *list);
lang__Bool ArrayListIterator_hasNext(structs__ArrayListIterator *this);
lang__Bool ArrayListIterator_hasNext_impl(structs__ArrayListIterator *this);
void ArrayListIterator_next(structs__ArrayListIterator *this, lang__Pointer returnarg288);
void ArrayListIterator_next_impl(structs__ArrayListIterator *this, lang__Pointer returnarg288);

lang__Void _structs_ArrayList_load();

#endif // ___structs_ArrayList__

