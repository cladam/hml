#pragma once
#ifndef kk_std_core_list_H
#define kk_std_core_list_H
// Koka generated module: std/core/list, koka version: 3.2.3, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_undiv.h"
#include "std_core_hnd.h"
#include "std_core_exn.h"
#include "std_core_char.h"
#include "std_core_string.h"
#include "std_core_int.h"
#include "std_core_vector.h"

// type declarations

// value declarations

kk_std_core_types__maybe kk_std_core_list_maybe_fs_head(kk_std_core_types__list xs, kk_context_t* _ctx); /* forall<a> (xs : list<a>) -> maybe<a> */ 

kk_box_t kk_std_core_list_head(kk_std_core_types__list xs, kk_box_t kkloc_default, kk_context_t* _ctx); /* forall<a> (xs : list<a>, default : a) -> a */ 

kk_std_core_types__list kk_std_core_list_tail(kk_std_core_types__list xs, kk_context_t* _ctx); /* forall<a> (xs : list<a>) -> list<a> */ 
 
// Is the list empty?

static inline bool kk_std_core_list_is_empty(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a> (xs : list<a>) -> bool */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Returns a singleton list.

static inline kk_std_core_types__list kk_std_core_list_single(kk_box_t x, kk_context_t* _ctx) { /* forall<a> (x : a) -> list<a> */ 
  return kk_std_core_types__new_Cons(kk_reuse_null, 0, x, kk_std_core_types__new_Nil(_ctx), _ctx);
}

kk_integer_t kk_std_core_list__lift_length_6003(kk_std_core_types__list ys, kk_integer_t acc, kk_context_t* _ctx); /* forall<a> (ys : list<a>, acc : int) -> int */ 
 
// Returns the length of a list.

static inline kk_integer_t kk_std_core_list_length(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a> (xs : list<a>) -> int */ 
  return kk_std_core_list__lift_length_6003(xs, kk_integer_from_small(0), _ctx);
}

bool kk_std_core_list__lp__at_mlift_x_10283_eq__eq__rp_(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_std_core_types__list xx, kk_std_core_types__list yy, bool _y_x10104, kk_context_t* _ctx); /* forall<a,e> (?(==) : (a, a) -> e bool, xx : list<a>, yy : list<a>, bool) -> e bool */ 

bool kk_std_core_list__lp__eq__eq__rp_(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, ys : list<a>, ?(==) : (a, a) -> e bool) -> e bool */ 

kk_std_core_types__order kk_std_core_list__mlift_cmp_10284(kk_function_t _implicit_fs_cmp, kk_std_core_types__list xx, kk_std_core_types__list yy, kk_std_core_types__order _y_x10109, kk_context_t* _ctx); /* forall<a,e> (?cmp : (a, a) -> e order, xx : list<a>, yy : list<a>, order) -> e order */ 

kk_std_core_types__order kk_std_core_list_cmp(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t _implicit_fs_cmp_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, ys : list<a>, ?cmp : (a, a) -> e order) -> e order */ 

kk_std_core_types__list kk_std_core_list__trmc_take(kk_std_core_types__list xs, kk_integer_t n, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* forall<a> (xs : list<a>, n : int, ctx<list<a>>) -> list<a> */ 

kk_std_core_types__list kk_std_core_list_take(kk_std_core_types__list xs_0, kk_integer_t n_0, kk_context_t* _ctx); /* forall<a> (xs : list<a>, n : int) -> list<a> */ 

kk_std_core_types__list kk_std_core_list_drop(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx); /* forall<a> (xs : list<a>, n : int) -> list<a> */ 

kk_std_core_types__list kk_std_core_list_reverse_acc(kk_std_core_types__list acc, kk_std_core_types__list ys, kk_context_t* _ctx); /* forall<a> (acc : list<a>, ys : list<a>) -> list<a> */ 
 
// Efficiently reverse a list `xs` and append it to `tl`:
// `reverse-append(xs,tl) == reverse(xs) ++ tl

static inline kk_std_core_types__list kk_std_core_list_reverse_append(kk_std_core_types__list xs, kk_std_core_types__list tl, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, tl : list<a>) -> list<a> */ 
  return kk_std_core_list_reverse_acc(tl, xs, _ctx);
}
 
// Reverse a list.

static inline kk_std_core_types__list kk_std_core_list_reverse(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a> (xs : list<a>) -> list<a> */ 
  return kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), xs, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_append(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* forall<a> (xs : list<a>, ys : list<a>, ctx<list<a>>) -> list<a> */ 

kk_std_core_types__list kk_std_core_list_append(kk_std_core_types__list xs_0, kk_std_core_types__list ys_0, kk_context_t* _ctx); /* forall<a> (xs : list<a>, ys : list<a>) -> list<a> */ 
 
// Append two lists.

static inline kk_std_core_types__list kk_std_core_list__lp__plus__plus__rp_(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, ys : list<a>) -> list<a> */ 
  kk_std_core_types__cctx _x_x1307 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_append(xs, ys, _x_x1307, _ctx);
}

kk_box_t kk_std_core_list__mlift_foldl_10285(kk_function_t f, kk_std_core_types__list xx, kk_box_t _y_x10114, kk_context_t* _ctx); /* forall<a,b,e> (f : (b, a) -> e b, xx : list<a>, b) -> e b */ 

kk_box_t kk_std_core_list_foldl(kk_std_core_types__list xs, kk_box_t z, kk_function_t f_0, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, z : b, f : (b, a) -> e b) -> e b */ 
 
// Fold a list from the right, i.e. `foldr([1,2],0,(+)) == 1+(2+0)`
// Note, `foldr` is less efficient than `foldl` as it reverses the list first.


// lift anonymous function
struct kk_std_core_list_foldr_fun1312__t {
  struct kk_function_s _base;
  kk_function_t f;
};
extern kk_box_t kk_std_core_list_foldr_fun1312(kk_function_t _fself, kk_box_t x, kk_box_t y, kk_context_t* _ctx);
static inline kk_function_t kk_std_core_list_new_foldr_fun1312(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_core_list_foldr_fun1312__t* _self = kk_function_alloc_as(struct kk_std_core_list_foldr_fun1312__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_foldr_fun1312, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_box_t kk_std_core_list_foldr(kk_std_core_types__list xs, kk_box_t z, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, z : b, f : (a, b) -> e b) -> e b */ 
  kk_std_core_types__list _x_x1311 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), xs, _ctx); /*list<1048>*/
  return kk_std_core_list_foldl(_x_x1311, z, kk_std_core_list_new_foldr_fun1312(f, _ctx), _ctx);
}

kk_box_t kk_std_core_list_foldl1(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, f : (a, a) -> <exn|e> a) -> <exn|e> a */ 

kk_box_t kk_std_core_list_foldr1(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, f : (a, a) -> <exn|e> a) -> <exn|e> a */ 

kk_std_core_types__tuple2 kk_std_core_list_split(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx); /* forall<a> (xs : list<a>, n : int) -> (list<a>, list<a>) */ 

kk_std_core_types__list kk_std_core_list__mlift_drop_while_10286(kk_function_t predicate, kk_std_core_types__list xs, kk_std_core_types__list xx, bool _y_x10125, kk_context_t* _ctx); /* forall<a,e> (predicate : (a) -> e bool, xs : list<a>, xx : list<a>, bool) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list_drop_while(kk_std_core_types__list xs_0, kk_function_t predicate_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list__mlift_trmc_filter_10287(kk_std_core_types__cctx _acc, kk_function_t pred, kk_box_t x, kk_std_core_types__list xx, bool _y_x10129, kk_context_t* _ctx); /* forall<a,e> (ctx<list<a>>, pred : (a) -> e bool, x : a, xx : list<a>, bool) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list__trmc_filter(kk_std_core_types__list xs, kk_function_t pred_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, pred : (a) -> e bool, ctx<list<a>>) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list_filter(kk_std_core_types__list xs_0, kk_function_t pred_1, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list__mlift_trmc_filter_map_10288(kk_std_core_types__cctx _acc, kk_function_t pred, kk_std_core_types__list xx, kk_std_core_types__maybe _y_x10135, kk_context_t* _ctx); /* forall<a,b,e> (ctx<list<b>>, pred : (a) -> e maybe<b>, xx : list<a>, maybe<b>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__trmc_filter_map(kk_std_core_types__list xs, kk_function_t pred_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, pred : (a) -> e maybe<b>, ctx<list<b>>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list_filter_map(kk_std_core_types__list xs_0, kk_function_t pred_1, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, pred : (a) -> e maybe<b>) -> e list<b> */ 

kk_std_core_types__maybe kk_std_core_list__mlift_foreach_while_10289(kk_function_t action, kk_std_core_types__list xx, kk_std_core_types__maybe _y_x10141, kk_context_t* _ctx); /* forall<a,b,e> (action : (a) -> e maybe<b>, xx : list<a>, maybe<b>) -> e maybe<b> */ 

kk_std_core_types__maybe kk_std_core_list_foreach_while(kk_std_core_types__list xs, kk_function_t action_0, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, action : (a) -> e maybe<b>) -> e maybe<b> */ 
 
// monadic lift

static inline kk_std_core_types__maybe kk_std_core_list__mlift_find_10290(kk_box_t x, bool _y_x10145, kk_context_t* _ctx) { /* forall<a,e> (x : a, bool) -> e maybe<a> */ 
  if (_y_x10145) {
    return kk_std_core_types__new_Just(x, _ctx);
  }
  {
    kk_box_drop(x, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_std_core_types__maybe kk_std_core_list_find(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e maybe<a> */ 
 
// Find the first element satisfying some predicate and return it.

static inline kk_std_core_types__maybe kk_std_core_list_find_maybe(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, pred : (a) -> e maybe<b>) -> e maybe<b> */ 
  return kk_std_core_list_foreach_while(xs, pred, _ctx);
}
 
// Convert a `:maybe` type to a list type.

static inline kk_std_core_types__list kk_std_core_list_maybe_fs_list(kk_std_core_types__maybe m, kk_context_t* _ctx) { /* forall<a> (m : maybe<a>) -> list<a> */ 
  if (kk_std_core_types__is_Nothing(m, _ctx)) {
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_box_t x = m._cons.Just.value;
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, x, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
}

kk_std_core_types__list kk_std_core_list_range_fs__trmc_list(kk_integer_t lo, kk_integer_t hi, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* (lo : int, hi : int, ctx<list<int>>) -> list<int> */ 

kk_std_core_types__list kk_std_core_list_range_fs_list(kk_integer_t lo_0, kk_integer_t hi_0, kk_context_t* _ctx); /* (lo : int, hi : int) -> list<int> */ 

kk_std_core_types__list kk_std_core_list__mlift_trmc_map_10291(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list xx, kk_box_t _trmc_x10058, kk_context_t* _ctx); /* forall<a,b,e> (ctx<list<b>>, f : (a) -> e b, xx : list<a>, b) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__trmc_map(kk_std_core_types__list xs, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, f : (a) -> e b, ctx<list<b>>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list_map(kk_std_core_types__list xs_0, kk_function_t f_1, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, f : (a) -> e b) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list_char_fs_list(kk_char_t lo, kk_char_t hi, kk_context_t* _ctx); /* (lo : char, hi : char) -> list<char> */ 

kk_std_core_types__list kk_std_core_list_function_fs__mlift_trmc_list_10292(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t hi, kk_integer_t lo, kk_box_t _trmc_x10061, kk_context_t* _ctx); /* forall<a,e> (ctx<list<a>>, f : (int) -> e a, hi : int, lo : int, a) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list_function_fs__trmc_list(kk_integer_t lo_0, kk_integer_t hi_0, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,e> (lo : int, hi : int, f : (int) -> e a, ctx<list<a>>) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list_function_fs_list(kk_integer_t lo_1, kk_integer_t hi_1, kk_function_t f_1, kk_context_t* _ctx); /* forall<a,e> (lo : int, hi : int, f : (int) -> e a) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list_stride_fs__trmc_list(kk_integer_t lo, kk_integer_t hi, kk_integer_t stride, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* (lo : int, hi : int, stride : int, ctx<list<int>>) -> list<int> */ 

kk_std_core_types__list kk_std_core_list_stride_fs_list(kk_integer_t lo_0, kk_integer_t hi_0, kk_integer_t stride_0, kk_context_t* _ctx); /* (lo : int, hi : int, stride : int) -> list<int> */ 

kk_std_core_types__list kk_std_core_list_stridefunction_fs__mlift_trmc_list_10293(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t hi, kk_integer_t lo, kk_integer_t stride, kk_box_t _trmc_x10066, kk_context_t* _ctx); /* forall<a,e> (ctx<list<a>>, f : (int) -> e a, hi : int, lo : int, stride : int, a) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list_stridefunction_fs__trmc_list(kk_integer_t lo_0, kk_integer_t hi_0, kk_integer_t stride_0, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,e> (lo : int, hi : int, stride : int, f : (int) -> e a, ctx<list<a>>) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list_stridefunction_fs_list(kk_integer_t lo_1, kk_integer_t hi_1, kk_integer_t stride_1, kk_function_t f_1, kk_context_t* _ctx); /* forall<a,e> (lo : int, hi : int, stride : int, f : (int) -> e a) -> e list<a> */ 

kk_string_t kk_std_core_list_string_fs_map(kk_string_t s, kk_function_t f, kk_context_t* _ctx); /* forall<e> (s : string, f : (char) -> e char) -> e string */ 

kk_std_core_types__order2 kk_std_core_list__mlift_order2_10294(kk_box_t z, kk_std_core_types__order2 _y_x10162, kk_context_t* _ctx); /* forall<a,e> (z : a, order2<list<a>>) -> e order2<list<a>> */ 

kk_std_core_types__order2 kk_std_core_list__mlift_order2_10295(kk_function_t _implicit_fs_order2, kk_std_core_types__list xx, kk_std_core_types__list yy, kk_std_core_types__order2 _y_x10161, kk_context_t* _ctx); /* forall<a,e> (?order2 : (a, a) -> e order2<a>, xx : list<a>, yy : list<a>, order2<a>) -> e order2<list<a>> */ 

kk_std_core_types__order2 kk_std_core_list_order2(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t _implicit_fs_order2_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, ys : list<a>, ?order2 : (a, a) -> e order2<a>) -> e order2<list<a>> */ 

kk_std_core_types__list kk_std_core_list__mlift_trmc_lift_map_indexed_6004_10296(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t i_0_10018, kk_std_core_types__list yy, kk_box_t _trmc_x10069, kk_context_t* _ctx); /* forall<a,b,e> (ctx<list<b>>, f : (idx : int, value : a) -> e b, i@0@10018 : int, yy : list<a>, b) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__trmc_lift_map_indexed_6004(kk_function_t f_0, kk_std_core_types__list ys, kk_integer_t i, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,e> (f : (idx : int, value : a) -> e b, ys : list<a>, i : int, ctx<list<b>>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__lift_map_indexed_6004(kk_function_t f_1, kk_std_core_types__list ys_0, kk_integer_t i_0, kk_context_t* _ctx); /* forall<a,b,e> (f : (idx : int, value : a) -> e b, ys : list<a>, i : int) -> e list<b> */ 
 
// Apply a function `f` to each element of the input list in sequence where takes
// both the index of the current element and the element itself as arguments.

static inline kk_std_core_types__list kk_std_core_list_map_indexed(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, f : (idx : int, value : a) -> e b) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1486 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_map_indexed_6004(f, xs, kk_integer_from_small(0), _x_x1486, _ctx);
}

kk_std_core_types__list kk_std_core_list__mlift_trmc_lift_map_peek_6005_10297(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list yy, kk_box_t _trmc_x10072, kk_context_t* _ctx); /* forall<a,b,e> (ctx<list<b>>, f : (value : a, rest : list<a>) -> e b, yy : list<a>, b) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__trmc_lift_map_peek_6005(kk_function_t f_0, kk_std_core_types__list ys, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,e> (f : (value : a, rest : list<a>) -> e b, ys : list<a>, ctx<list<b>>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__lift_map_peek_6005(kk_function_t f_1, kk_std_core_types__list ys_0, kk_context_t* _ctx); /* forall<a,b,e> (f : (value : a, rest : list<a>) -> e b, ys : list<a>) -> e list<b> */ 
 
// Apply a function `f` to each element of the input list in sequence where `f` takes
// both the current element and the tail list as arguments.

static inline kk_std_core_types__list kk_std_core_list_map_peek(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, f : (value : a, rest : list<a>) -> e b) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1497 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_map_peek_6005(f, xs, _x_x1497, _ctx);
}

kk_std_core_types__list kk_std_core_list__mlift_trmc_lift_map_indexed_peek_6006_10298(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t i_0_10021, kk_std_core_types__list yy, kk_box_t _trmc_x10075, kk_context_t* _ctx); /* forall<a,b,e> (ctx<list<b>>, f : (idx : int, value : a, rest : list<a>) -> e b, i@0@10021 : int, yy : list<a>, b) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__trmc_lift_map_indexed_peek_6006(kk_function_t f_0, kk_std_core_types__list ys, kk_integer_t i, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,e> (f : (idx : int, value : a, rest : list<a>) -> e b, ys : list<a>, i : int, ctx<list<b>>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__lift_map_indexed_peek_6006(kk_function_t f_1, kk_std_core_types__list ys_0, kk_integer_t i_0, kk_context_t* _ctx); /* forall<a,b,e> (f : (idx : int, value : a, rest : list<a>) -> e b, ys : list<a>, i : int) -> e list<b> */ 
 
// Apply a function `f` to each element of the input list in sequence where takes
// both the index of the current element, the element itself, and the tail list as arguments.

static inline kk_std_core_types__list kk_std_core_list_map_indexed_peek(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, f : (idx : int, value : a, rest : list<a>) -> e b) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1509 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_map_indexed_peek_6006(f, xs, kk_integer_from_small(0), _x_x1509, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_replicate(kk_box_t x, kk_integer_t n, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* forall<a> (x : a, n : int, ctx<list<a>>) -> list<a> */ 

kk_std_core_types__list kk_std_core_list_replicate(kk_box_t x_0, kk_integer_t n_0, kk_context_t* _ctx); /* forall<a> (x : a, n : int) -> list<a> */ 
 
// monadic lift

static inline bool kk_std_core_list__mlift_remove_10299(bool _y_x10181, kk_context_t* _ctx) { /* forall<e> (bool) -> e bool */ 
  if (_y_x10181) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_std_core_list_remove(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e list<a> */ 

kk_std_core_types__tuple2 kk_std_core_list__mlift_partition_acc_10300(kk_std_core_types__cctx acc1, kk_std_core_types__cctx acc2, kk_function_t pred, kk_box_t x, kk_std_core_types__list xx, bool _y_x10183, kk_context_t* _ctx); /* forall<a,e> (acc1 : ctx<list<a>>, acc2 : ctx<list<a>>, pred : (a) -> e bool, x : a, xx : list<a>, bool) -> e (list<a>, list<a>) */ 

kk_std_core_types__tuple2 kk_std_core_list_partition_acc(kk_std_core_types__list xs, kk_function_t pred_0, kk_std_core_types__cctx acc1_0, kk_std_core_types__cctx acc2_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, pred : (a) -> e bool, acc1 : ctx<list<a>>, acc2 : ctx<list<a>>) -> e (list<a>, list<a>) */ 
 
// Partition a list in two lists where the first list contains
// those elements that satisfy the given predicate `pred`.
// For example: `partition([1,2,3],odd?) == ([1,3],[2])`

static inline kk_std_core_types__tuple2 kk_std_core_list_partition(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e (list<a>, list<a>) */ 
  kk_std_core_types__cctx _own_x1157 = kk_cctx_empty(kk_context()); /*ctx<0>*/;
  kk_std_core_types__cctx _own_x1156 = kk_cctx_empty(kk_context()); /*ctx<0>*/;
  return kk_std_core_list_partition_acc(xs, pred, _own_x1157, _own_x1156, _ctx);
}
 
// monadic lift

static inline kk_std_core_types__maybe kk_std_core_list__mlift_lookup_10301(kk_std_core_types__tuple2 kv, bool _y_x10189, kk_context_t* _ctx) { /* forall<a,b,e> (kv : (a, b), bool) -> e maybe<b> */ 
  if (_y_x10189) {
    kk_box_t _x_x1537;
    {
      kk_box_t _x_0 = kv.snd;
      kk_box_dup(_x_0, _ctx);
      kk_std_core_types__tuple2_drop(kv, _ctx);
      _x_x1537 = _x_0; /*3168*/
    }
    return kk_std_core_types__new_Just(_x_x1537, _ctx);
  }
  {
    kk_std_core_types__tuple2_drop(kv, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_std_core_types__maybe kk_std_core_list_lookup(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<(a, b)>, pred : (a) -> e bool) -> e maybe<b> */ 

kk_integer_t kk_std_core_list__mlift_index_of_acc_10302(kk_integer_t idx, kk_function_t pred, kk_std_core_types__list xx, bool _y_x10192, kk_context_t* _ctx); /* forall<a,e> (idx : int, pred : (a) -> e bool, xx : list<a>, bool) -> e int */ 

kk_integer_t kk_std_core_list_index_of_acc(kk_std_core_types__list xs, kk_function_t pred_0, kk_integer_t idx_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, pred : (a) -> e bool, idx : int) -> e int */ 
 
// Returns the index of the first element where `pred` holds, or `-1` if no such element exists.

static inline kk_integer_t kk_std_core_list_index_of(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e int */ 
  return kk_std_core_list_index_of_acc(xs, pred, kk_integer_from_small(0), _ctx);
}

kk_unit_t kk_std_core_list__mlift_foreach_10303(kk_function_t action, kk_std_core_types__list xx, kk_unit_t wild__, kk_context_t* _ctx); /* forall<a,e> (action : (a) -> e (), xx : list<a>, wild_ : ()) -> e () */ 

kk_unit_t kk_std_core_list_foreach(kk_std_core_types__list xs, kk_function_t action_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, action : (a) -> e ()) -> e () */ 

kk_std_core_types__list kk_std_core_list__mlift_trmc_map_while_10304(kk_std_core_types__cctx _acc, kk_function_t action, kk_std_core_types__list xx, kk_std_core_types__maybe _y_x10200, kk_context_t* _ctx); /* forall<a,b,e> (ctx<list<b>>, action : (a) -> e maybe<b>, xx : list<a>, maybe<b>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__trmc_map_while(kk_std_core_types__list xs, kk_function_t action_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, action : (a) -> e maybe<b>, ctx<list<b>>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list_map_while(kk_std_core_types__list xs_0, kk_function_t action_1, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, action : (a) -> e maybe<b>) -> e list<b> */ 
 
// monadic lift

static inline kk_unit_t kk_std_core_list__mlift_foreach_indexed_10305(kk_ref_t i, kk_integer_t _y_x10208, kk_context_t* _ctx) { /* forall<h,e> (i : local-var<h,int>, int) -> <local<h>|e> () */ 
  kk_integer_t _b_x592_594 = kk_integer_add_small_const(_y_x10208, 1, _ctx); /*int*/;
  kk_unit_t _brw_x1149 = kk_Unit;
  kk_ref_set_borrow(i,(kk_integer_box(_b_x592_594, _ctx)),kk_context());
  kk_ref_drop(i, _ctx);
  _brw_x1149; return kk_Unit;
}

kk_unit_t kk_std_core_list__mlift_foreach_indexed_10306(kk_ref_t i, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h,e> (i : local-var<h,int>, wild_ : ()) -> <local<h>|e> () */ 

kk_unit_t kk_std_core_list__mlift_foreach_indexed_10307(kk_function_t action, kk_ref_t i, kk_box_t x, kk_integer_t j, kk_context_t* _ctx); /* forall<h,a,e> (action : (int, a) -> e (), i : local-var<h,int>, x : a, j : int) -> <local<h>|e> () */ 

kk_unit_t kk_std_core_list_foreach_indexed(kk_std_core_types__list xs, kk_function_t action, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, action : (int, a) -> e ()) -> e () */ 

kk_std_core_types__list kk_std_core_list__trmc_lift_intersperse_6007(kk_box_t sep, kk_std_core_types__list ys, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* forall<a> (sep : a, ys : list<a>, ctx<list<a>>) -> list<a> */ 

kk_std_core_types__list kk_std_core_list__lift_intersperse_6007(kk_box_t sep_0, kk_std_core_types__list ys_0, kk_context_t* _ctx); /* forall<a> (sep : a, ys : list<a>) -> list<a> */ 

kk_std_core_types__list kk_std_core_list_intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx); /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 

kk_string_t kk_std_core_list_joinsep(kk_std_core_types__list xs, kk_string_t sep, kk_context_t* _ctx); /* (xs : list<string>, sep : string) -> string */ 

kk_string_t kk_std_core_list_concat_fs_join(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<string>) -> string */ 
 
// Concatenate all strings in a list using a specific separator

static inline kk_string_t kk_std_core_list_joinsep_fs_join(kk_std_core_types__list xs, kk_string_t sep, kk_context_t* _ctx) { /* (xs : list<string>, sep : string) -> string */ 
  return kk_std_core_list_joinsep(xs, sep, _ctx);
}

kk_string_t kk_std_core_list__mlift_show_10308(kk_std_core_types__list _y_x10213, kk_context_t* _ctx); /* forall<e> (list<string>) -> e string */ 

kk_string_t kk_std_core_list_show(kk_std_core_types__list xs, kk_function_t _implicit_fs_show, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, ?show : (a) -> e string) -> e string */ 
 
// _deprecated_, use `list/show` instead.

static inline kk_string_t kk_std_core_list_show_list(kk_std_core_types__list xs, kk_function_t show_elem, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, show-elem : (a) -> e string) -> e string */ 
  return kk_std_core_list_show(xs, show_elem, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_zip(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* forall<a,b> (xs : list<a>, ys : list<b>, ctx<list<(a, b)>>) -> list<(a, b)> */ 

kk_std_core_types__list kk_std_core_list_zip(kk_std_core_types__list xs_0, kk_std_core_types__list ys_0, kk_context_t* _ctx); /* forall<a,b> (xs : list<a>, ys : list<b>) -> list<(a, b)> */ 

kk_std_core_types__list kk_std_core_list__mlift_trmc_zipwith_10309(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list xx, kk_std_core_types__list yy, kk_box_t _trmc_x10086, kk_context_t* _ctx); /* forall<a,b,c,e> (ctx<list<c>>, f : (a, b) -> e c, xx : list<a>, yy : list<b>, c) -> e list<c> */ 

kk_std_core_types__list kk_std_core_list__trmc_zipwith(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c, ctx<list<c>>) -> e list<c> */ 

kk_std_core_types__list kk_std_core_list_zipwith(kk_std_core_types__list xs_0, kk_std_core_types__list ys_0, kk_function_t f_1, kk_context_t* _ctx); /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 

kk_std_core_types__list kk_std_core_list__mlift_trmc_zipwith_iter_10310(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t i, kk_std_core_types__list xx, kk_std_core_types__list yy, kk_box_t _trmc_x10089, kk_context_t* _ctx); /* forall<a,b,c,d,e> (ctx<list<a>>, f : (int, b, c) -> e d, i : int, xx : list<b>, yy : list<c>, d) -> e list<d> */ 

kk_std_core_types__list kk_std_core_list__trmc_zipwith_iter(kk_integer_t i_0, kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,c,e> (i : int, xs : list<a>, ys : list<b>, f : (int, a, b) -> e c, ctx<list<c>>) -> e list<c> */ 

kk_std_core_types__list kk_std_core_list_zipwith_iter(kk_integer_t i_1, kk_std_core_types__list xs_0, kk_std_core_types__list ys_0, kk_function_t f_1, kk_context_t* _ctx); /* forall<a,b,c,e> (i : int, xs : list<a>, ys : list<b>, f : (int, a, b) -> e c) -> e list<c> */ 
 
// Zip two lists together by apply a function `f` to all corresponding elements
// and their index in the list.
// The returned list is only as long as the smallest input list.

static inline kk_std_core_types__list kk_std_core_list_zipwith_indexed(kk_std_core_types__list xs0, kk_std_core_types__list ys0, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,e> (xs0 : list<a>, ys0 : list<b>, f : (int, a, b) -> e c) -> e list<c> */ 
  kk_std_core_types__cctx _own_x1129 = kk_cctx_empty(kk_context()); /*ctx<0>*/;
  return kk_std_core_list__trmc_zipwith_iter(kk_integer_from_small(0), xs0, ys0, f, _own_x1129, _ctx);
}

kk_std_core_types__tuple2 kk_std_core_list__lift_unzip_6008(kk_std_core_types__list ys, kk_std_core_types__cctx acc1, kk_std_core_types__cctx acc2, kk_context_t* _ctx); /* forall<a,b,c,d> (ys : list<(a, b)>, acc1 : cctx<c,list<a>>, acc2 : cctx<d,list<b>>) -> (c, d) */ 
 
// Unzip a list of pairs into two lists

static inline kk_std_core_types__tuple2 kk_std_core_list_unzip(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a,b> (xs : list<(a, b)>) -> (list<a>, list<b>) */ 
  kk_std_core_types__cctx _x_x1690 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  kk_std_core_types__cctx _x_x1691 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__lift_unzip_6008(xs, _x_x1690, _x_x1691, _ctx);
}

kk_std_core_types__tuple3 kk_std_core_list__lift_unzip3_6009(kk_std_core_types__list ys, kk_std_core_types__cctx acc1, kk_std_core_types__cctx acc2, kk_std_core_types__cctx acc3, kk_context_t* _ctx); /* forall<a,b,c,d,a1,b1> (ys : list<(a, b, c)>, acc1 : cctx<d,list<a>>, acc2 : cctx<a1,list<b>>, acc3 : cctx<b1,list<c>>) -> (d, a1, b1) */ 
 
// Unzip a list of triples into three lists

static inline kk_std_core_types__tuple3 kk_std_core_list_unzip3(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a,b,c> (xs : list<(a, b, c)>) -> (list<a>, list<b>, list<c>) */ 
  kk_std_core_types__cctx _x_x1705 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  kk_std_core_types__cctx _x_x1706 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  kk_std_core_types__cctx _x_x1707 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__lift_unzip3_6009(xs, _x_x1705, _x_x1706, _x_x1707, _ctx);
}

kk_std_core_types__tuple4 kk_std_core_list__lift_unzip4_6010(kk_std_core_types__list ys, kk_std_core_types__cctx acc1, kk_std_core_types__cctx acc2, kk_std_core_types__cctx acc3, kk_std_core_types__cctx acc4, kk_context_t* _ctx); /* forall<a,b,c,d,a1,b1,c1,d1> (ys : list<(a, b, c, d)>, acc1 : cctx<a1,list<a>>, acc2 : cctx<b1,list<b>>, acc3 : cctx<c1,list<c>>, acc4 : cctx<d1,list<d>>) -> (a1, b1, c1, d1) */ 
 
// Unzip a list of quadruples into four lists

static inline kk_std_core_types__tuple4 kk_std_core_list_unzip4(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a,b,c,d> (xs : list<(a, b, c, d)>) -> (list<a>, list<b>, list<c>, list<d>) */ 
  kk_std_core_types__cctx _x_x1726 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  kk_std_core_types__cctx _x_x1727 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  kk_std_core_types__cctx _x_x1728 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  kk_std_core_types__cctx _x_x1729 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__lift_unzip4_6010(xs, _x_x1726, _x_x1727, _x_x1728, _x_x1729, _ctx);
}

kk_std_core_types__tuple2 kk_std_core_list__mlift_lift_span_6011_10311(kk_std_core_types__cctx acc, kk_function_t predicate, kk_box_t y, kk_std_core_types__list ys, kk_std_core_types__list yy, bool _y_x10226, kk_context_t* _ctx); /* forall<a,b,e> (acc : cctx<a,list<b>>, predicate : (b) -> e bool, y : b, ys : list<b>, yy : list<b>, bool) -> e (a, list<b>) */ 

kk_std_core_types__tuple2 kk_std_core_list__lift_span_6011(kk_function_t predicate_0, kk_std_core_types__list ys_0, kk_std_core_types__cctx acc_0, kk_context_t* _ctx); /* forall<a,e,b> (predicate : (a) -> e bool, ys : list<a>, acc : cctx<b,list<a>>) -> e (b, list<a>) */ 

static inline kk_std_core_types__tuple2 kk_std_core_list_span(kk_std_core_types__list xs, kk_function_t predicate, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool) -> e (list<a>, list<a>) */ 
  kk_std_core_types__cctx acc = kk_cctx_empty(kk_context()); /*cctx<list<5194>,list<5194>>*/;
  return kk_std_core_list__lift_span_6011(predicate, xs, acc, _ctx);
}

kk_std_core_types__list kk_std_core_list__mlift_trmc_take_while_10312(kk_std_core_types__cctx _acc, kk_function_t predicate, kk_box_t x, kk_std_core_types__list xx, bool _y_x10231, kk_context_t* _ctx); /* forall<a,e> (ctx<list<a>>, predicate : (a) -> e bool, x : a, xx : list<a>, bool) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list__trmc_take_while(kk_std_core_types__list xs, kk_function_t predicate_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool, ctx<list<a>>) -> e list<a> */ 

kk_std_core_types__list kk_std_core_list_take_while(kk_std_core_types__list xs_0, kk_function_t predicate_1, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool) -> e list<a> */ 

kk_string_t kk_std_core_list_reverse_join(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<string>) -> string */ 
 
// Append `end` to each string in the list `xs` and join them all together.
// `join-end([],end) === ""`
// `join-end(["a","b"],"/") === "a/b/"`

static inline kk_string_t kk_std_core_list_join_end(kk_std_core_types__list xs, kk_string_t end, kk_context_t* _ctx) { /* (xs : list<string>, end : string) -> string */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_string_drop(end, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x1758;
    kk_string_t _x_x1759 = kk_string_dup(end, _ctx); /*string*/
    _x_x1758 = kk_std_core_list_joinsep(xs, _x_x1759, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x1758, end, _ctx);
  }
}

kk_std_core_types__list kk_std_core_list__trmc_lift_concat_6012(kk_std_core_types__list ys, kk_std_core_types__list zss, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* forall<a> (ys : list<a>, zss : list<list<a>>, ctx<list<a>>) -> list<a> */ 

kk_std_core_types__list kk_std_core_list__lift_concat_6012(kk_std_core_types__list ys_0, kk_std_core_types__list zss_0, kk_context_t* _ctx); /* forall<a> (ys : list<a>, zss : list<list<a>>) -> list<a> */ 
 
// Concatenate all lists in a list (e.g. flatten the list). (tail-recursive)

static inline kk_std_core_types__list kk_std_core_list_concat(kk_std_core_types__list xss, kk_context_t* _ctx) { /* forall<a> (xss : list<list<a>>) -> list<a> */ 
  kk_std_core_types__cctx _x_x1765 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_concat_6012(kk_std_core_types__new_Nil(_ctx), xss, _x_x1765, _ctx);
}

kk_std_core_types__list kk_std_core_list__mlift_trmc_lift_flatmap_6013_10313(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list zz, kk_std_core_types__list ys_1_10038, kk_context_t* _ctx); /* forall<a,b,e> (ctx<list<b>>, f : (a) -> e list<b>, zz : list<a>, ys@1@10038 : list<b>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__trmc_lift_flatmap_6013(kk_function_t f_0, kk_std_core_types__list ys, kk_std_core_types__list zs, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,e> (f : (a) -> e list<b>, ys : list<b>, zs : list<a>, ctx<list<b>>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__lift_flatmap_6013(kk_function_t f_1, kk_std_core_types__list ys_0, kk_std_core_types__list zs_0, kk_context_t* _ctx); /* forall<a,b,e> (f : (a) -> e list<b>, ys : list<b>, zs : list<a>) -> e list<b> */ 
 
// Concatenate the result lists from applying a function to all elements.

static inline kk_std_core_types__list kk_std_core_list_flatmap(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, f : (a) -> e list<b>) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1775 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_flatmap_6013(f, kk_std_core_types__new_Nil(_ctx), xs, _x_x1775, _ctx);
}

kk_std_core_types__list kk_std_core_list__mlift_trmc_flatmap_maybe_10314(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list xx, kk_std_core_types__maybe _y_x10243, kk_context_t* _ctx); /* forall<a,b,e> (ctx<list<b>>, f : (a) -> e maybe<b>, xx : list<a>, maybe<b>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__trmc_flatmap_maybe(kk_std_core_types__list xs, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, f : (a) -> e maybe<b>, ctx<list<b>>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list_flatmap_maybe(kk_std_core_types__list xs_0, kk_function_t f_1, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, f : (a) -> e maybe<b>) -> e list<b> */ 

kk_std_core_types__list kk_std_core_list__trmc_concat_maybe(kk_std_core_types__list xs, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* forall<a> (xs : list<maybe<a>>, ctx<list<a>>) -> list<a> */ 

kk_std_core_types__list kk_std_core_list_concat_maybe(kk_std_core_types__list xs_0, kk_context_t* _ctx); /* forall<a> (xs : list<maybe<a>>) -> list<a> */ 

kk_std_core_types__maybe kk_std_core_list_last(kk_std_core_types__list xs, kk_context_t* _ctx); /* forall<a> (xs : list<a>) -> maybe<a> */ 

kk_std_core_types__list kk_std_core_list__trmc_init(kk_std_core_types__list xs, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* forall<a> (xs : list<a>, ctx<list<a>>) -> list<a> */ 

kk_std_core_types__list kk_std_core_list_init(kk_std_core_types__list xs_0, kk_context_t* _ctx); /* forall<a> (xs : list<a>) -> list<a> */ 

kk_std_core_types__maybe kk_std_core_list__index(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx); /* forall<a> (xs : list<a>, n : int) -> maybe<a> */ 

bool kk_std_core_list__mlift_all_10315(kk_function_t predicate, kk_std_core_types__list xx, bool _y_x10249, kk_context_t* _ctx); /* forall<a,e> (predicate : (a) -> e bool, xx : list<a>, bool) -> e bool */ 

bool kk_std_core_list_all(kk_std_core_types__list xs, kk_function_t predicate_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool) -> e bool */ 

bool kk_std_core_list__mlift_any_10316(kk_function_t predicate, kk_std_core_types__list xx, bool _y_x10253, kk_context_t* _ctx); /* forall<a,e> (predicate : (a) -> e bool, xx : list<a>, bool) -> e bool */ 

bool kk_std_core_list_any(kk_std_core_types__list xs, kk_function_t predicate_0, kk_context_t* _ctx); /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool) -> e bool */ 

kk_integer_t kk_std_core_list_sum(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<int>) -> int */ 

kk_integer_t kk_std_core_list_minimum(kk_std_core_types__list xs, kk_std_core_types__optional kkloc_default, kk_context_t* _ctx); /* (xs : list<int>, default : ? int) -> int */ 

kk_integer_t kk_std_core_list_maximum(kk_std_core_types__list xs, kk_std_core_types__optional kkloc_default, kk_context_t* _ctx); /* (xs : list<int>, default : ? int) -> int */ 
 
// Split a string into a list of lines

static inline kk_std_core_types__list kk_std_core_list_lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_vector_t v_10011;
  kk_string_t _x_x1825;
  kk_define_string_literal(static, _s_x1826, 1, "\n", _ctx)
  _x_x1825 = kk_string_dup(_s_x1826, _ctx); /*string*/
  v_10011 = kk_string_splitv(s,_x_x1825,kk_context()); /*vector<string>*/
  return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
}

kk_string_t kk_std_core_list_unlines(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<string>) -> string */ 

void kk_std_core_list__init(kk_context_t* _ctx);


void kk_std_core_list__done(kk_context_t* _ctx);

#endif // header
