/* structs.List header file, generated with ooc */
#ifndef ___structs_List__
#define ___structs_List__


struct _structs__List;
typedef struct _structs__List structs__List;
struct _structs__ListClass;
typedef struct _structs__ListClass structs__ListClass;

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

struct _structs__List
{
	struct _lang__Iterable __super__;
	lang__Class *T;
};


struct _structs__ListClass
{
	struct _lang__IterableClass __super__;
	lang__Void (*add)(structs__List *, uint8_t *);
	lang__Void (*add_withIndex)(structs__List *, lang__Int, uint8_t *);
	lang__Void (*addAll)(structs__List *, structs__List *);
	lang__Void (*addAll_atStart)(structs__List *, lang__Int, structs__List *);
	lang__Void (*clear)(structs__List *);
	lang__Bool (*removeLast)(structs__List *);
	lang__Bool (*contains)(structs__List *, uint8_t *);
	lang__Void (*get)(structs__List *, lang__Pointer, lang__Int);
	lang__Int (*indexOf)(structs__List *, uint8_t *);
	lang__Bool (*isEmpty)(structs__List *);
	lang__Int (*lastIndexOf)(structs__List *, uint8_t *);
	lang__Void (*removeAt)(structs__List *, lang__Pointer, lang__Int);
	lang__Bool (*remove)(structs__List *, uint8_t *);
	lang__Void (*set)(structs__List *, lang__Int, uint8_t *);
	lang__Int (*size)(structs__List *);
	structs__List * (*clone)(structs__List *);
	lang__SizeT (*lastIndex)(structs__List *);
};


lang__Class *List_class();

lang__Void List___load__();
lang__Void List___defaults__(structs__List *this);
lang__Void List___defaults___impl(structs__List *this);
lang__Void List___destroy__(structs__List *this);
lang__Void List___destroy___impl(structs__List *this);
lang__Void List_add(structs__List *this, uint8_t * element);
lang__Void List_add_withIndex(structs__List *this, lang__Int index, uint8_t * element);
lang__Void List_addAll(structs__List *this, structs__List *list);
lang__Void List_addAll_impl(structs__List *this, structs__List *list);
lang__Void List_addAll_atStart(structs__List *this, lang__Int start, structs__List *list);
lang__Void List_addAll_atStart_impl(structs__List *this, lang__Int start, structs__List *list);
lang__Void List_clear(structs__List *this);
lang__Bool List_removeLast(structs__List *this);
lang__Bool List_removeLast_impl(structs__List *this);
lang__Bool List_contains(structs__List *this, uint8_t * element);
lang__Bool List_contains_impl(structs__List *this, uint8_t * element);
void List_get(structs__List *this, lang__Pointer returnarg300, lang__Int index);
lang__Int List_indexOf(structs__List *this, uint8_t * element);
lang__Bool List_isEmpty(structs__List *this);
lang__Bool List_isEmpty_impl(structs__List *this);
lang__Int List_lastIndexOf(structs__List *this, uint8_t * element);
void List_removeAt(structs__List *this, lang__Pointer returnarg304, lang__Int index);
lang__Bool List_remove(structs__List *this, uint8_t * element);
lang__Void List_set(structs__List *this, lang__Int index, uint8_t * element);
lang__Int List_size(structs__List *this);
lang__Iterator *List_iterator(structs__List *this);
structs__List *List_clone(structs__List *this);
lang__SizeT List_lastIndex(structs__List *this);
lang__SizeT List_lastIndex_impl(structs__List *this);

void __OP_IDX_List_Int(lang__Pointer returnarg311, lang__Class *T, structs__List *list, lang__Int i);
lang__Void __OP_IDX_ASS_List_Int_T(lang__Class *T, structs__List *list, lang__Int i, uint8_t * element);
lang__Void __OP_ADD_ASS_List_T(lang__Class *T, structs__List *list, uint8_t * element);
lang__Bool __OP_SUB_ASS_List_T(lang__Class *T, structs__List *list, uint8_t * element);
lang__Void _structs_List_load();

#endif // ___structs_List__

