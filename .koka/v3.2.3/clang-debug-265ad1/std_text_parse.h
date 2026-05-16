#pragma once
#ifndef kk_std_text_parse_H
#define kk_std_text_parse_H
// Koka generated module: std/text/parse, koka version: 3.2.3, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core_exn.h"
#include "std_core_bool.h"
#include "std_core_order.h"
#include "std_core_char.h"
#include "std_core_int.h"
#include "std_core_vector.h"
#include "std_core_string.h"
#include "std_core_sslice.h"
#include "std_core_list.h"
#include "std_core_maybe.h"
#include "std_core_maybe2.h"
#include "std_core_either.h"
#include "std_core_tuple.h"
#include "std_core_lazy.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"
#include "std_core_undiv.h"

// type declarations

// type std/text/parse/parse
struct kk_std_text_parse__parse_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_text_parse__parse;
struct kk_std_text_parse__Hnd_parse {
  struct kk_std_text_parse__parse_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause0 _fun_current_input;
  kk_std_core_hnd__clause1 _brk_fail;
  kk_std_core_hnd__clause0 _ctl_pick;
  kk_std_core_hnd__clause1 _fun_satisfy;
};
static inline kk_std_text_parse__parse kk_std_text_parse__base_Hnd_parse(struct kk_std_text_parse__Hnd_parse* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_text_parse__parse kk_std_text_parse__new_Hnd_parse(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause0 _fun_current_input, kk_std_core_hnd__clause1 _brk_fail, kk_std_core_hnd__clause0 _ctl_pick, kk_std_core_hnd__clause1 _fun_satisfy, kk_context_t* _ctx) {
  struct kk_std_text_parse__Hnd_parse* _con = kk_block_alloc_at_as(struct kk_std_text_parse__Hnd_parse, _at, 5 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_current_input = _fun_current_input;
  _con->_brk_fail = _brk_fail;
  _con->_ctl_pick = _ctl_pick;
  _con->_fun_satisfy = _fun_satisfy;
  return kk_std_text_parse__base_Hnd_parse(_con, _ctx);
}
static inline struct kk_std_text_parse__Hnd_parse* kk_std_text_parse__as_Hnd_parse(kk_std_text_parse__parse x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_text_parse__Hnd_parse*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_std_text_parse__is_Hnd_parse(kk_std_text_parse__parse x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_std_text_parse__parse kk_std_text_parse__parse_dup(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_text_parse__parse_drop(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_text_parse__parse_box(kk_std_text_parse__parse _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_text_parse__parse kk_std_text_parse__parse_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type std/text/parse/parse-error
struct kk_std_text_parse__parse_error_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_std_text_parse__parse_error;
struct kk_std_text_parse_ParseOk {
  struct kk_std_text_parse__parse_error_s _base;
  kk_box_t result;
  kk_std_core_sslice__sslice rest;
};
struct kk_std_text_parse_ParseError {
  struct kk_std_text_parse__parse_error_s _base;
  kk_string_t msg;
  kk_std_core_sslice__sslice rest;
};
static inline kk_std_text_parse__parse_error kk_std_text_parse__base_ParseOk(struct kk_std_text_parse_ParseOk* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__new_ParseOk(kk_reuse_t _at, int32_t _cpath, kk_box_t result, kk_std_core_sslice__sslice rest, kk_context_t* _ctx) {
  struct kk_std_text_parse_ParseOk* _con = kk_block_alloc_at_as(struct kk_std_text_parse_ParseOk, _at, 4 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->result = result;
  _con->rest = rest;
  return kk_std_text_parse__base_ParseOk(_con, _ctx);
}
static inline struct kk_std_text_parse_ParseOk* kk_std_text_parse__as_ParseOk(kk_std_text_parse__parse_error x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_text_parse_ParseOk*, x, (kk_tag_t)(1), _ctx);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__base_ParseError(struct kk_std_text_parse_ParseError* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__new_ParseError(kk_reuse_t _at, int32_t _cpath, kk_string_t msg, kk_std_core_sslice__sslice rest, kk_context_t* _ctx) {
  struct kk_std_text_parse_ParseError* _con = kk_block_alloc_at_as(struct kk_std_text_parse_ParseError, _at, 4 /* scan count */, _cpath, (kk_tag_t)(2), _ctx);
  _con->msg = msg;
  _con->rest = rest;
  return kk_std_text_parse__base_ParseError(_con, _ctx);
}
static inline struct kk_std_text_parse_ParseError* kk_std_text_parse__as_ParseError(kk_std_text_parse__parse_error x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_std_text_parse_ParseError*, x, (kk_tag_t)(2), _ctx);
}
static inline bool kk_std_text_parse__is_ParseOk(kk_std_text_parse__parse_error x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(1), _ctx));
}
static inline bool kk_std_text_parse__is_ParseError(kk_std_text_parse__parse_error x, kk_context_t* _ctx) {
  return (kk_datatype_ptr_has_tag(x, (kk_tag_t)(2), _ctx));
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__parse_error_dup(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_std_text_parse__parse_error_drop(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_std_text_parse__parse_error_box(kk_std_text_parse__parse_error _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_std_text_parse__parse_error kk_std_text_parse__parse_error_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:parse` type.

static inline kk_integer_t kk_std_text_parse_parse_fs__cfc(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a> (parse : parse<e,a>) -> int */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x862 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_integer_t _x = _con_x862->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}

extern kk_std_core_hnd__htag kk_std_text_parse_parse_fs__tag;

kk_box_t kk_std_text_parse_parse_fs__handle(kk_std_text_parse__parse hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : parse<e,b>, ret : (res : a) -> e b, action : () -> <parse|e> a) -> e b */ 
 
// Automatically generated. Retrieves the `@fun-satisfy` constructor field of the `:parse` type.

static inline kk_std_core_hnd__clause1 kk_std_text_parse_parse_fs__fun_satisfy(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a,b> (parse : parse<e,a>) -> hnd/clause1<(sslice/sslice) -> maybe<(b, sslice/sslice)>,maybe<b>,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x866 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x866->_fun_satisfy;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// select `satisfy` operation out of effect `:parse`

static inline kk_std_core_hnd__clause1 kk_std_text_parse_satisfy_fs__select(kk_std_text_parse__parse hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : parse<e,b>) -> hnd/clause1<(sslice/sslice) -> maybe<(a, sslice/sslice)>,maybe<a>,parse,e,b> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x867 = kk_std_text_parse__as_Hnd_parse(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_satisfy = _con_x867->_fun_satisfy;
    return kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
  }
}
 
// See also `satisfy-fail` which invokes `fail` when `pred` returns `Nothing`.
// Call the `fun satisfy` operation of the effect `:parse`


// lift anonymous function
struct kk_std_text_parse_satisfy_fun871__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
extern kk_box_t kk_std_text_parse_satisfy_fun871(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx);
static inline kk_function_t kk_std_text_parse_new_satisfy_fun871(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fun871__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fun871__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_satisfy_fun871, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_std_core_types__maybe kk_std_text_parse_satisfy(kk_function_t pred, kk_context_t* _ctx) { /* forall<a> (pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>) -> parse maybe<a> */ 
  kk_std_core_hnd__ev ev_10203 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_box_t _x_x868;
  {
    struct kk_std_core_hnd_Ev* _con_x869 = kk_std_core_hnd__as_Ev(ev_10203, _ctx);
    kk_box_t _box_x8 = _con_x869->hnd;
    int32_t m = _con_x869->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x8, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x870 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x870->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x870->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x870->_brk_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x870->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x870->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x15 = _fun_satisfy.clause;
        _x_x868 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x15, (_fun_unbox_x15, m, ev_10203, kk_function_box(kk_std_text_parse_new_satisfy_fun871(pred, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  return kk_std_core_types__maybe_unbox(_x_x868, KK_OWNED, _ctx);
}
 
// Automatically generated. Retrieves the `@brk-fail` constructor field of the `:parse` type.

static inline kk_std_core_hnd__clause1 kk_std_text_parse_parse_fs__brk_fail(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a,b> (parse : parse<e,a>) -> hnd/clause1<string,b,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x874 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x874->_brk_fail;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}
 
// select `fail` operation out of effect `:parse`

static inline kk_std_core_hnd__clause1 kk_std_text_parse_fail_fs__select(kk_std_text_parse__parse hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : parse<e,b>) -> hnd/clause1<string,a,parse,e,b> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x875 = kk_std_text_parse__as_Hnd_parse(hnd, _ctx);
    kk_std_core_hnd__clause1 _brk_fail = _con_x875->_brk_fail;
    return kk_std_core_hnd__clause1_dup(_brk_fail, _ctx);
  }
}
 
// Fails the current branch of parsing.
// Call the `final ctl fail` operation of the effect `:parse`

static inline kk_box_t kk_std_text_parse_fail(kk_string_t msg, kk_context_t* _ctx) { /* forall<a> (msg : string) -> parse a */ 
  kk_std_core_hnd__ev ev_10206 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x876 = kk_std_core_hnd__as_Ev(ev_10206, _ctx);
    kk_box_t _box_x22 = _con_x876->hnd;
    int32_t m = _con_x876->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x22, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x877 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x877->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x877->_fun_current_input;
      kk_std_core_hnd__clause1 _brk_fail = _con_x877->_brk_fail;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x877->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x877->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_brk_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x26 = _brk_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x26, (_fun_unbox_x26, m, ev_10206, kk_string_box(msg), _ctx), _ctx);
      }
    }
  }
}
 
// Automatically generated. Retrieves the `@ctl-pick` constructor field of the `:parse` type.

static inline kk_std_core_hnd__clause0 kk_std_text_parse_parse_fs__ctl_pick(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a> (parse : parse<e,a>) -> hnd/clause0<bool,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x878 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x878->_ctl_pick;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// select `pick` operation out of effect `:parse`

static inline kk_std_core_hnd__clause0 kk_std_text_parse_pick_fs__select(kk_std_text_parse__parse hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : parse<e,a>) -> hnd/clause0<bool,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x879 = kk_std_text_parse__as_Hnd_parse(hnd, _ctx);
    kk_std_core_hnd__clause0 _ctl_pick = _con_x879->_ctl_pick;
    return kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
  }
}
 
// Handlers usually resume up to twice with `True` and `False`.
// Call the `ctl pick` operation of the effect `:parse`

static inline bool kk_std_text_parse_pick(kk_context_t* _ctx) { /* () -> parse bool */ 
  kk_std_core_hnd__ev ev_10209 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_box_t _x_x880;
  {
    struct kk_std_core_hnd_Ev* _con_x881 = kk_std_core_hnd__as_Ev(ev_10209, _ctx);
    kk_box_t _box_x30 = _con_x881->hnd;
    int32_t m = _con_x881->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x30, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x882 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x882->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x882->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2_0 = _con_x882->_brk_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x882->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x882->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x33 = _ctl_pick.clause;
        _x_x880 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x33, (_fun_unbox_x33, m, ev_10209, _ctx), _ctx); /*35*/
      }
    }
  }
  return kk_bool_unbox(_x_x880);
}
 
// Automatically generated. Retrieves the `@fun-current-input` constructor field of the `:parse` type.

static inline kk_std_core_hnd__clause0 kk_std_text_parse_parse_fs__fun_current_input(kk_std_text_parse__parse parse_0, kk_context_t* _ctx) { /* forall<e,a> (parse : parse<e,a>) -> hnd/clause0<sslice/sslice,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x883 = kk_std_text_parse__as_Hnd_parse(parse_0, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x883->_fun_current_input;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// select `current-input` operation out of effect `:parse`

static inline kk_std_core_hnd__clause0 kk_std_text_parse_current_input_fs__select(kk_std_text_parse__parse hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : parse<e,a>) -> hnd/clause0<sslice/sslice,parse,e,a> */ 
  {
    struct kk_std_text_parse__Hnd_parse* _con_x884 = kk_std_text_parse__as_Hnd_parse(hnd, _ctx);
    kk_std_core_hnd__clause0 _fun_current_input = _con_x884->_fun_current_input;
    return kk_std_core_hnd__clause0_dup(_fun_current_input, _ctx);
  }
}
 
// The current position of parse on the input.
// Call the `fun current-input` operation of the effect `:parse`

static inline kk_std_core_sslice__sslice kk_std_text_parse_current_input(kk_context_t* _ctx) { /* () -> parse sslice/sslice */ 
  kk_std_core_hnd__ev ev_10211 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_box_t _x_x885;
  {
    struct kk_std_core_hnd_Ev* _con_x886 = kk_std_core_hnd__as_Ev(ev_10211, _ctx);
    kk_box_t _box_x36 = _con_x886->hnd;
    int32_t m = _con_x886->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x36, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x887 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x887->_cfc;
      kk_std_core_hnd__clause0 _fun_current_input = _con_x887->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_1_0 = _con_x887->_brk_fail;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x887->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x887->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_fun_current_input, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x39 = _fun_current_input.clause;
        _x_x885 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x39, (_fun_unbox_x39, m, ev_10211, _ctx), _ctx); /*35*/
      }
    }
  }
  return kk_std_core_sslice__sslice_unbox(_x_x885, KK_OWNED, _ctx);
}
 
// Automatically generated. Tests for the `ParseOk` constructor of the `:parse-error` type.

static inline bool kk_std_text_parse_is_parseOk(kk_std_text_parse__parse_error parse_error, kk_context_t* _ctx) { /* forall<a> (parse-error : parse-error<a>) -> bool */ 
  if (kk_std_text_parse__is_ParseOk(parse_error, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x888 = kk_std_text_parse__as_ParseOk(parse_error, _ctx);
    kk_std_core_sslice__sslice _pat_1 = _con_x888->rest;
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `rest` constructor field of the `:parse-error` type.

static inline kk_std_core_sslice__sslice kk_std_text_parse_parse_error_fs_rest(kk_std_text_parse__parse_error _this, kk_context_t* _ctx) { /* forall<a> (parse-error<a>) -> sslice/sslice */ 
  if (kk_std_text_parse__is_ParseOk(_this, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x889 = kk_std_text_parse__as_ParseOk(_this, _ctx);
    kk_std_core_sslice__sslice _x = _con_x889->rest;
    return kk_std_core_sslice__sslice_dup(_x, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x890 = kk_std_text_parse__as_ParseError(_this, _ctx);
    kk_std_core_sslice__sslice _x_0 = _con_x890->rest;
    return kk_std_core_sslice__sslice_dup(_x_0, _ctx);
  }
}
 
// Automatically generated. Tests for the `ParseError` constructor of the `:parse-error` type.

static inline bool kk_std_text_parse_is_parseError(kk_std_text_parse__parse_error parse_error, kk_context_t* _ctx) { /* forall<a> (parse-error : parse-error<a>) -> bool */ 
  if (kk_std_text_parse__is_ParseError(parse_error, _ctx)) {
    struct kk_std_text_parse_ParseError* _con_x891 = kk_std_text_parse__as_ParseError(parse_error, _ctx);
    kk_std_core_sslice__sslice _pat_1 = _con_x891->rest;
    return true;
  }
  {
    return false;
  }
}

kk_std_core_types__either kk_std_text_parse_either(kk_std_text_parse__parse_error perr, kk_context_t* _ctx); /* forall<a> (perr : parse-error<a>) -> either<string,a> */ 

kk_std_core_types__maybe kk_std_text_parse_maybe(kk_std_text_parse__parse_error perr, kk_context_t* _ctx); /* forall<a> (perr : parse-error<a>) -> maybe<a> */ 
 
// monadic lift

static inline kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10176(kk_string_t msg, kk_std_core_sslice__sslice _y_x10075, kk_context_t* _ctx) { /* forall<h,a,e> (msg : string, sslice/sslice) -> <local<h>|e> parse-error<a> */ 
  return kk_std_text_parse__new_ParseError(kk_reuse_null, 0, msg, _y_x10075, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10177(kk_std_text_parse__parse_error err1, kk_std_text_parse__parse_error _y_x10079, kk_context_t* _ctx); /* forall<h,a,e> (err1 : parse-error<a>, parse-error<a>) -> <local<h>|e> parse-error<a> */ 

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10178(kk_std_text_parse__parse_error err1, kk_function_t resume, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h,a,e> (err1 : parse-error<a>, resume : (bool) -> <local<h>|e> parse-error<a>, wild_ : ()) -> <local<h>|e> parse-error<a> */ 

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10179(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_std_text_parse__parse_error _y_x10077, kk_context_t* _ctx); /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice, parse-error<a>) -> <local<h>|e> parse-error<a> */ 

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10180(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_context_t* _ctx); /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice) -> <local<h>|e> parse-error<a> */ 
 
// monadic lift

static inline kk_std_core_types__maybe kk_std_text_parse__mlift_parse_10181(kk_box_t x, kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<a,h,e> (x : a, wild_@0 : ()) -> <local<h>|e> maybe<a> */ 
  return kk_std_core_types__new_Just(x, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse__mlift_parse_10182(kk_ref_t input, kk_function_t pred, kk_std_core_sslice__sslice inp, kk_context_t* _ctx); /* forall<a,h,e> (input : local-var<h,sslice/sslice>, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>, inp : sslice/sslice) -> <local<h>|e> maybe<a> */ 
 
// monadic lift

static inline kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10183(kk_box_t x_0, kk_std_core_sslice__sslice _y_x10084, kk_context_t* _ctx) { /* forall<h,a,e> (x@0 : a, sslice/sslice) -> <local<h>|e> parse-error<a> */ 
  return kk_std_text_parse__new_ParseOk(kk_reuse_null, 0, x_0, _y_x10084, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse_parse(kk_std_core_sslice__sslice input0, kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (input0 : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 

kk_std_core_types__maybe kk_std_text_parse_starts_with(kk_string_t s, kk_function_t p, kk_context_t* _ctx); /* forall<a> (s : string, p : () -> parse a) -> maybe<(a, sslice/sslice)> */ 
 
// monadic lift

static inline kk_box_t kk_std_text_parse__lp__at_mlift_x_10184_bar__bar__rp_(kk_function_t p1, kk_function_t p2, bool _y_x10090, kk_context_t* _ctx) { /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>, bool) -> <parse|e> a */ 
  if (_y_x10090) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx), _ctx);
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx), _ctx);
  }
}

kk_box_t kk_std_text_parse__lp__bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx); /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>) -> <parse|e> a */ 


// lift anonymous function
struct kk_std_text_parse_optional_fun977__t {
  struct kk_function_s _base;
  kk_box_t kkloc_default;
};
extern kk_box_t kk_std_text_parse_optional_fun977(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_text_parse_new_optional_fun977(kk_box_t kkloc_default, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun977__t* _self = kk_function_alloc_as(struct kk_std_text_parse_optional_fun977__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_optional_fun977, kk_context());
  _self->kkloc_default = kkloc_default;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_box_t kk_std_text_parse_optional(kk_box_t kkloc_default, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (default : a, p : parser<e,a>) -> <parse|e> a */ 
  return kk_std_text_parse__lp__bar__bar__rp_(p, kk_std_text_parse_new_optional_fun977(kkloc_default, _ctx), _ctx);
}

kk_box_t kk_std_text_parse__mlift_choose_10185(kk_function_t p_0, kk_std_core_types__list pp, bool _y_x10099, kk_context_t* _ctx); /* forall<a,e> (p@0 : parser<e,a>, pp : list<parser<e,a>>, bool) -> <parse|e> a */ 

kk_box_t kk_std_text_parse_choose(kk_std_core_types__list ps, kk_context_t* _ctx); /* forall<a,e> (ps : list<parser<e,a>>) -> <parse|e> a */ 

kk_box_t kk_std_text_parse__mlift_satisfy_fail_10186(kk_string_t msg, kk_std_core_types__maybe _y_x10104, kk_context_t* _ctx); /* forall<a> (msg : string, maybe<a>) -> parse a */ 

kk_box_t kk_std_text_parse_satisfy_fail(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx); /* forall<a> (msg : string, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>) -> parse a */ 

kk_unit_t kk_std_text_parse__mlift_eof_10187(kk_std_core_types__maybe _y_x10107, kk_context_t* _ctx); /* (maybe<()>) -> parse () */ 

kk_unit_t kk_std_text_parse_eof(kk_context_t* _ctx); /* () -> parse () */ 
 
// monadic lift

static inline kk_box_t kk_std_text_parse__mlift_parse_eof_10188(kk_box_t x, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<a,e> (x : a, wild_ : ()) -> <parse|e> a */ 
  return x;
}

kk_box_t kk_std_text_parse__mlift_parse_eof_10189(kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (x : a) -> <parse|e> a */ 

kk_std_text_parse__parse_error kk_std_text_parse_parse_eof(kk_std_core_sslice__sslice input, kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (input : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 

kk_char_t kk_std_text_parse_char_is(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx); /* (msg : string, pred : (char) -> bool) -> parse char */ 

kk_std_core_types__tuple2 kk_std_text_parse_next_while0(kk_std_core_sslice__sslice slice, kk_function_t pred, kk_std_core_types__list acc, kk_context_t* _ctx); /* (slice : sslice/sslice, pred : (char) -> bool, acc : list<char>) -> (list<char>, sslice/sslice) */ 

kk_std_core_types__list kk_std_text_parse_chars_are(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx); /* (msg : string, pred : (char) -> bool) -> parse list<char> */ 

kk_std_core_types__maybe kk_std_text_parse_next_match(kk_std_core_sslice__sslice slice, kk_std_core_types__list cs, kk_context_t* _ctx); /* (slice : sslice/sslice, cs : list<char>) -> maybe<sslice/sslice> */ 

kk_string_t kk_std_text_parse_pstring(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> parse string */ 

kk_char_t kk_std_text_parse_char(kk_char_t c, kk_context_t* _ctx); /* (c : char) -> parse char */ 

kk_char_t kk_std_text_parse_no_digit(kk_context_t* _ctx); /* () -> parse char */ 

kk_integer_t kk_std_text_parse__mlift_digit_10190(kk_char_t c_0_0, kk_context_t* _ctx); /* (c@0@0 : char) -> parse int */ 

kk_integer_t kk_std_text_parse_digit(kk_context_t* _ctx); /* () -> parse int */ 

kk_char_t kk_std_text_parse_alpha(kk_context_t* _ctx); /* () -> parse char */ 

kk_char_t kk_std_text_parse_alpha_num(kk_context_t* _ctx); /* () -> parse char */ 

kk_char_t kk_std_text_parse_white(kk_context_t* _ctx); /* () -> parse char */ 

kk_string_t kk_std_text_parse_whitespace(kk_context_t* _ctx); /* () -> parse string */ 

kk_string_t kk_std_text_parse_whitespace0(kk_context_t* _ctx); /* () -> parse string */ 

kk_string_t kk_std_text_parse_digits(kk_context_t* _ctx); /* () -> parse string */ 

kk_string_t kk_std_text_parse_digits0(kk_context_t* _ctx); /* () -> parse string */ 

kk_integer_t kk_std_text_parse__mlift_pnat_10191(kk_std_core_types__list _y_x10128, kk_context_t* _ctx); /* (list<char>) -> parse int */ 

kk_integer_t kk_std_text_parse_pnat(kk_context_t* _ctx); /* () -> parse int */ 

kk_char_t kk_std_text_parse_none_of(kk_string_t chars, kk_context_t* _ctx); /* (chars : string) -> parse char */ 

kk_string_t kk_std_text_parse_none_of_many1(kk_string_t chars, kk_context_t* _ctx); /* (chars : string) -> parse string */ 

kk_char_t kk_std_text_parse_one_of(kk_string_t chars, kk_context_t* _ctx); /* (chars : string) -> parse char */ 

kk_std_core_types__list kk_std_text_parse__mlift_many_acc_10192(kk_std_core_types__list acc, kk_function_t p, kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (acc : list<a>, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse_many_acc(kk_function_t p_0, kk_std_core_types__list acc_0, kk_context_t* _ctx); /* forall<a,e> (p : parser<e,a>, acc : list<a>) -> <parse|e> list<a> */ 
 
// The `many` combinator parses `p` until it fails, returning a list of the results of `p`.
// The `many` combinator is non-divergent only when `p` always consumes input or `fail`s.

static inline kk_std_core_types__list kk_std_text_parse_many(kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 
  return kk_std_text_parse_many_acc(p, kk_std_core_types__new_Nil(_ctx), _ctx);
}
 
// monadic lift

static inline kk_std_core_types__list kk_std_text_parse__mlift_many1_10193(kk_box_t _y_x10136, kk_std_core_types__list _y_x10137, kk_context_t* _ctx) { /* forall<a,e> (a, list<a>) -> <parse|e> list<a> */ 
  return kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10136, _y_x10137, _ctx);
}

kk_std_core_types__list kk_std_text_parse__mlift_many1_10194(kk_function_t p, kk_box_t _y_x10136, kk_context_t* _ctx); /* forall<a,e> (p : parser<e,a>, a) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse_many1(kk_function_t p, kk_context_t* _ctx); /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse__mlift_count_acc_10195(kk_std_core_types__list acc, kk_integer_t n, kk_function_t p, kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (acc : list<a>, n : int, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse_count_acc(kk_integer_t n_0, kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx); /* forall<a,e> (n : int, acc : list<a>, p : parser<e,a>) -> <parse|e> list<a> */ 

static inline kk_std_core_types__list kk_std_text_parse_count(kk_integer_t n, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (n : int, p : parser<e,a>) -> <parse|e> list<a> */ 
  return kk_std_text_parse_count_acc(n, kk_std_core_types__new_Nil(_ctx), p, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_one_of_or_fun1261__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
extern kk_box_t kk_std_text_parse_one_of_or_fun1261(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_text_parse_new_one_of_or_fun1261(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun1261__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_or_fun1261__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_one_of_or_fun1261, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_one_of_or_fun1263__t {
  struct kk_function_s _base;
  kk_char_t kkloc_default;
};
extern kk_box_t kk_std_text_parse_one_of_or_fun1263(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_text_parse_new_one_of_or_fun1263(kk_char_t kkloc_default, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun1263__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_or_fun1263__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_one_of_or_fun1263, kk_context());
  _self->kkloc_default = kkloc_default;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_char_t kk_std_text_parse_one_of_or(kk_string_t chars, kk_char_t kkloc_default, kk_context_t* _ctx) { /* (chars : string, default : char) -> parse char */ 
  kk_box_t _x_x1260 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_one_of_or_fun1261(chars, _ctx), kk_std_text_parse_new_one_of_or_fun1263(kkloc_default, _ctx), _ctx); /*1542*/
  return kk_char_unbox(_x_x1260, KK_OWNED, _ctx);
}
 
// monadic lift

static inline bool kk_std_text_parse__mlift_sign_10196(kk_char_t c_0, kk_context_t* _ctx) { /* (c@0 : char) -> parse bool */ 
  return (c_0 == ('-'));
}

bool kk_std_text_parse_sign(kk_context_t* _ctx); /* () -> parse bool */ 
 
// monadic lift

static inline kk_integer_t kk_std_text_parse__mlift_pint_10197(bool neg, kk_integer_t i, kk_context_t* _ctx) { /* (neg : bool, i : int) -> parse int */ 
  if (neg) {
    return kk_integer_neg(i,kk_context());
  }
  {
    return i;
  }
}

kk_integer_t kk_std_text_parse__mlift_pint_10198(kk_char_t c_0, kk_context_t* _ctx); /* (c@0 : char) -> parse int */ 

kk_integer_t kk_std_text_parse_pint(kk_context_t* _ctx); /* () -> parse int */ 
 
// monadic lift

static inline kk_box_t kk_std_text_parse__mlift_sep_by1_10199(kk_function_t p, kk_box_t wild__, kk_context_t* _ctx) { /* forall<a,b,e> (p : parser<e,a>, wild_ : b) -> <parse|e> a */ 
  kk_box_drop(wild__, _ctx);
  return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx);
}
 
// monadic lift

static inline kk_std_core_types__list kk_std_text_parse__mlift_sep_by1_10200(kk_box_t _y_x10150, kk_std_core_types__list _y_x10153, kk_context_t* _ctx) { /* forall<a,e> (a, list<a>) -> <parse|e> list<a> */ 
  return kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10150, _y_x10153, _ctx);
}

kk_std_core_types__list kk_std_text_parse__mlift_sep_by1_10201(kk_function_t p, kk_function_t sep, kk_box_t _y_x10150, kk_context_t* _ctx); /* forall<a,b,e> (p : parser<e,a>, sep : parser<e,b>, a) -> <parse|e> list<a> */ 

kk_std_core_types__list kk_std_text_parse_sep_by1(kk_function_t p, kk_function_t sep, kk_context_t* _ctx); /* forall<a,b,e> (p : parser<e,a>, sep : parser<e,b>) -> <parse|e> list<a> */ 
 
// The `sep-by` parses zero or more occurrences of `p`, separated by `sep`. Returns a list of the results of `p`.
// The `sep-by` combinator is non-divergent only when `p` always consumes input or `fail`s.


// lift anonymous function
struct kk_std_text_parse_sep_by_fun1315__t {
  struct kk_function_s _base;
  kk_function_t p;
  kk_function_t sep;
};
extern kk_box_t kk_std_text_parse_sep_by_fun1315(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_text_parse_new_sep_by_fun1315(kk_function_t p, kk_function_t sep, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by_fun1315__t* _self = kk_function_alloc_as(struct kk_std_text_parse_sep_by_fun1315__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_sep_by_fun1315, kk_context());
  _self->p = p;
  _self->sep = sep;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_sep_by_fun1317__t {
  struct kk_function_s _base;
};
extern kk_box_t kk_std_text_parse_sep_by_fun1317(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_text_parse_new_sep_by_fun1317(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sep_by_fun1317, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}


static inline kk_std_core_types__list kk_std_text_parse_sep_by(kk_function_t p, kk_function_t sep, kk_context_t* _ctx) { /* forall<a,b,e> (p : parser<e,a>, sep : parser<e,b>) -> <parse|e> list<a> */ 
  kk_box_t _x_x1314 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_sep_by_fun1315(p, sep, _ctx), kk_std_text_parse_new_sep_by_fun1317(_ctx), _ctx); /*1542*/
  return kk_std_core_types__list_unbox(_x_x1314, KK_OWNED, _ctx);
}

kk_string_t kk_std_text_parse_hex_digits(kk_context_t* _ctx); /* () -> parse string */ 

void kk_std_text_parse__init(kk_context_t* _ctx);


void kk_std_text_parse__done(kk_context_t* _ctx);

#endif // header
