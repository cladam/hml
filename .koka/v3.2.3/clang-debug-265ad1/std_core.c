// Koka generated module: std/core, koka version: 3.2.3, platform: 64-bit
#include "std_core.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2021, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

kk_box_t kk_main_console( kk_function_t action, kk_context_t* ctx ) {
  return kk_function_call(kk_box_t,(kk_function_t,kk_unit_t,kk_context_t*),action,(action,kk_Unit,ctx),ctx);
}


 
// Compose two functions `f` and `g`.


// lift anonymous function
struct kk_std_core_o_fun104__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_function_t g;
};
static kk_box_t kk_std_core_o_fun104(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx);
static kk_function_t kk_std_core_new_o_fun104(kk_function_t f, kk_function_t g, kk_context_t* _ctx) {
  struct kk_std_core_o_fun104__t* _self = kk_function_alloc_as(struct kk_std_core_o_fun104__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_o_fun104, kk_context());
  _self->f = f;
  _self->g = g;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_o_fun104(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_core_o_fun104__t* _self = kk_function_as(struct kk_std_core_o_fun104__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (241) -> 244 242 */
  kk_function_t g = _self->g; /* (243) -> 244 241 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_function_dup(g, _ctx);}, {}, _ctx)
  kk_box_t x_0_10092 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), g, (g, x, _ctx), _ctx); /*241*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_0_10092, _ctx);
    return kk_std_core_hnd_yield_extend(f, _ctx);
  }
  {
    return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, x_0_10092, _ctx), _ctx);
  }
}

kk_function_t kk_std_core_o(kk_function_t f, kk_function_t g, kk_context_t* _ctx) { /* forall<a,b,c,e> (f : (a) -> e b, g : (c) -> e a) -> ((x : c) -> e b) */ 
  return kk_std_core_new_o_fun104(f, g, _ctx);
}
extern kk_box_t kk_std_core_const_fun105(kk_function_t _fself, kk_box_t ___wildcard_x105__6, kk_context_t* _ctx) {
  struct kk_std_core_const_fun105__t* _self = kk_function_as(struct kk_std_core_const_fun105__t*, _fself, _ctx);
  kk_box_t kkloc_default = _self->kkloc_default; /* 286 */
  kk_drop_match(_self, {kk_box_dup(kkloc_default, _ctx);}, {}, _ctx)
  kk_box_drop(___wildcard_x105__6, _ctx);
  return kkloc_default;
}
 
// monadic lift

kk_unit_t kk_std_core__mlift_while_10080(kk_function_t action, kk_function_t predicate, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<e> (action : () -> <div|e> (), predicate : () -> <div|e> bool, wild_ : ()) -> <div|e> () */ 
  kk_std_core_while(predicate, action, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_core__mlift_while_10081_fun108__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  kk_function_t predicate_0;
};
static kk_box_t kk_std_core__mlift_while_10081_fun108(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx);
static kk_function_t kk_std_core__new_mlift_while_10081_fun108(kk_function_t action_0, kk_function_t predicate_0, kk_context_t* _ctx) {
  struct kk_std_core__mlift_while_10081_fun108__t* _self = kk_function_alloc_as(struct kk_std_core__mlift_while_10081_fun108__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core__mlift_while_10081_fun108, kk_context());
  _self->action_0 = action_0;
  _self->predicate_0 = predicate_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core__mlift_while_10081_fun108(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx) {
  struct kk_std_core__mlift_while_10081_fun108__t* _self = kk_function_as(struct kk_std_core__mlift_while_10081_fun108__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* () -> <div|335> () */
  kk_function_t predicate_0 = _self->predicate_0; /* () -> <div|335> bool */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_function_dup(predicate_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_3 = kk_Unit;
  kk_unit_unbox(_b_x1);
  kk_unit_t _x_x109 = kk_Unit;
  kk_std_core__mlift_while_10080(action_0, predicate_0, wild___0_3, _ctx);
  return kk_unit_box(_x_x109);
}

kk_unit_t kk_std_core__mlift_while_10081(kk_function_t action_0, kk_function_t predicate_0, bool _y_x10028, kk_context_t* _ctx) { /* forall<e> (action : () -> <div|e> (), predicate : () -> <div|e> bool, bool) -> <div|e> () */ 
  if (_y_x10028) {
    kk_unit_t x_10094 = kk_Unit;
    kk_function_t _x_x106 = kk_function_dup(action_0, _ctx); /*() -> <div|335> ()*/
    kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _x_x106, (_x_x106, _ctx), _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x107 = kk_std_core_hnd_yield_extend(kk_std_core__new_mlift_while_10081_fun108(action_0, predicate_0, _ctx), _ctx); /*2419*/
      kk_unit_unbox(_x_x107); return kk_Unit;
    }
    {
      kk_std_core__mlift_while_10080(action_0, predicate_0, x_10094, _ctx); return kk_Unit;
    }
  }
  {
    kk_function_drop(predicate_0, _ctx);
    kk_function_drop(action_0, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// The `while` fun executes `action`  as long as `pred`  is `true`.


// lift anonymous function
struct kk_std_core_while_fun112__t {
  struct kk_function_s _base;
  kk_function_t action_1;
  kk_function_t predicate_1;
};
static kk_box_t kk_std_core_while_fun112(kk_function_t _fself, kk_box_t _b_x5, kk_context_t* _ctx);
static kk_function_t kk_std_core_new_while_fun112(kk_function_t action_1, kk_function_t predicate_1, kk_context_t* _ctx) {
  struct kk_std_core_while_fun112__t* _self = kk_function_alloc_as(struct kk_std_core_while_fun112__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_while_fun112, kk_context());
  _self->action_1 = action_1;
  _self->predicate_1 = predicate_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_while_fun112(kk_function_t _fself, kk_box_t _b_x5, kk_context_t* _ctx) {
  struct kk_std_core_while_fun112__t* _self = kk_function_as(struct kk_std_core_while_fun112__t*, _fself, _ctx);
  kk_function_t action_1 = _self->action_1; /* () -> <div|335> () */
  kk_function_t predicate_1 = _self->predicate_1; /* () -> <div|335> bool */
  kk_drop_match(_self, {kk_function_dup(action_1, _ctx);kk_function_dup(predicate_1, _ctx);}, {}, _ctx)
  bool _y_x10028_0_10 = kk_bool_unbox(_b_x5); /*bool*/;
  kk_unit_t _x_x113 = kk_Unit;
  kk_std_core__mlift_while_10081(action_1, predicate_1, _y_x10028_0_10, _ctx);
  return kk_unit_box(_x_x113);
}


// lift anonymous function
struct kk_std_core_while_fun116__t {
  struct kk_function_s _base;
  kk_function_t action_1;
  kk_function_t predicate_1;
};
static kk_box_t kk_std_core_while_fun116(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_std_core_new_while_fun116(kk_function_t action_1, kk_function_t predicate_1, kk_context_t* _ctx) {
  struct kk_std_core_while_fun116__t* _self = kk_function_alloc_as(struct kk_std_core_while_fun116__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_while_fun116, kk_context());
  _self->action_1 = action_1;
  _self->predicate_1 = predicate_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_while_fun116(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx) {
  struct kk_std_core_while_fun116__t* _self = kk_function_as(struct kk_std_core_while_fun116__t*, _fself, _ctx);
  kk_function_t action_1 = _self->action_1; /* () -> <div|335> () */
  kk_function_t predicate_1 = _self->predicate_1; /* () -> <div|335> bool */
  kk_drop_match(_self, {kk_function_dup(action_1, _ctx);kk_function_dup(predicate_1, _ctx);}, {}, _ctx)
  kk_unit_t wild___1_11 = kk_Unit;
  kk_unit_unbox(_b_x7);
  kk_unit_t _x_x117 = kk_Unit;
  kk_std_core__mlift_while_10080(action_1, predicate_1, wild___1_11, _ctx);
  return kk_unit_box(_x_x117);
}

kk_unit_t kk_std_core_while(kk_function_t predicate_1, kk_function_t action_1, kk_context_t* _ctx) { /* forall<e> (predicate : () -> <div|e> bool, action : () -> <div|e> ()) -> <div|e> () */ 
  kk__tailcall: ;
  bool x_0_10096;
  kk_function_t _x_x110 = kk_function_dup(predicate_1, _ctx); /*() -> <div|335> bool*/
  x_0_10096 = kk_function_call(bool, (kk_function_t, kk_context_t*), _x_x110, (_x_x110, _ctx), _ctx); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x111 = kk_std_core_hnd_yield_extend(kk_std_core_new_while_fun112(action_1, predicate_1, _ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x111); return kk_Unit;
  }
  if (x_0_10096) {
    kk_unit_t x_1_10099 = kk_Unit;
    kk_function_t _x_x114 = kk_function_dup(action_1, _ctx); /*() -> <div|335> ()*/
    kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _x_x114, (_x_x114, _ctx), _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x115 = kk_std_core_hnd_yield_extend(kk_std_core_new_while_fun116(action_1, predicate_1, _ctx), _ctx); /*2419*/
      kk_unit_unbox(_x_x115); return kk_Unit;
    }
    { // tailcall
      goto kk__tailcall;
    }
  }
  {
    kk_function_drop(predicate_1, _ctx);
    kk_function_drop(action_1, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// Generic equality if `cmp` exists


// lift anonymous function
struct kk_std_core_default_fs_cmp_fs__lp__at_x_fun119__t_eq__eq__rp_ {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun119_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x13, kk_context_t* _ctx);
static kk_function_t kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun119_eq__eq__rp_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_default_fs_cmp_fs__lp__at_x_fun119_eq__eq__rp_, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun119_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x13, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__order _y_x10032_15 = kk_std_core_types__order_unbox(_b_x13, KK_OWNED, _ctx); /*order*/;
  bool _x_x120;
  if (kk_std_core_types__is_Eq(_y_x10032_15, _ctx)) {
    _x_x120 = true; /*bool*/
  }
  else {
    _x_x120 = false; /*bool*/
  }
  return kk_bool_box(_x_x120);
}

bool kk_std_core_default_fs_cmp_fs__lp__eq__eq__rp_(kk_box_t x, kk_box_t y, kk_function_t _implicit_fs_cmp, kk_context_t* _ctx) { /* forall<a,e> (x : a, y : a, ?cmp : (a, a) -> e order) -> e bool */ 
  kk_std_core_types__order x_0_10102 = kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_cmp, (_implicit_fs_cmp, x, y, _ctx), _ctx); /*order*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x118 = kk_std_core_hnd_yield_extend(kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun119_eq__eq__rp_(_ctx), _ctx); /*2419*/
    return kk_bool_unbox(_x_x118);
  }
  if (kk_std_core_types__is_Eq(x_0_10102, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Generic inequality


// lift anonymous function
struct kk_std_core_default_fs__lp__at_x_fun122__t_excl__eq__rp_ {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_default_fs__lp__at_x_fun122_excl__eq__rp_(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_std_core_default_fs__lp__at_new_x_fun122_excl__eq__rp_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_default_fs__lp__at_x_fun122_excl__eq__rp_, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_default_fs__lp__at_x_fun122_excl__eq__rp_(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _y_x10033_19 = kk_bool_unbox(_b_x17); /*bool*/;
  bool _x_x123;
  if (_y_x10033_19) {
    _x_x123 = false; /*bool*/
  }
  else {
    _x_x123 = true; /*bool*/
  }
  return kk_bool_box(_x_x123);
}

bool kk_std_core_default_fs__lp__excl__eq__rp_(kk_box_t x, kk_box_t y, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,e> (x : a, y : a, ?(==) : (a, a) -> e bool) -> e bool */ 
  bool x_0_10106 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, x, y, _ctx), _ctx); /*bool*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x121 = kk_std_core_hnd_yield_extend(kk_std_core_default_fs__lp__at_new_x_fun122_excl__eq__rp_(_ctx), _ctx); /*2419*/
    return kk_bool_unbox(_x_x121);
  }
  if (x_0_10106) {
    return false;
  }
  {
    return true;
  }
}
 
// Generic greater than


// lift anonymous function
struct kk_std_core_default_fs_cmp_fs__lp__at_x_fun125__t_gt__rp_ {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun125_gt__rp_(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx);
static kk_function_t kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun125_gt__rp_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_default_fs_cmp_fs__lp__at_x_fun125_gt__rp_, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun125_gt__rp_(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__order _y_x10034_23 = kk_std_core_types__order_unbox(_b_x21, KK_OWNED, _ctx); /*order*/;
  bool _x_x126 = kk_std_core_order__lp__eq__eq__rp_(_y_x10034_23, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x126);
}

bool kk_std_core_default_fs_cmp_fs__lp__gt__rp_(kk_box_t x, kk_box_t y, kk_function_t _implicit_fs_cmp, kk_context_t* _ctx) { /* forall<a,e> (x : a, y : a, ?cmp : (a, a) -> e order) -> e bool */ 
  kk_std_core_types__order x_0_10110 = kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_cmp, (_implicit_fs_cmp, x, y, _ctx), _ctx); /*order*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x124 = kk_std_core_hnd_yield_extend(kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun125_gt__rp_(_ctx), _ctx); /*2419*/
    return kk_bool_unbox(_x_x124);
  }
  {
    return kk_std_core_order__lp__eq__eq__rp_(x_0_10110, kk_std_core_types__new_Gt(_ctx), _ctx);
  }
}
 
// monadic lift

kk_box_t kk_std_core_range_fs__mlift_fold_10085(kk_integer_t end, kk_function_t f, kk_integer_t start, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (end : int, f : (int, a) -> e a, start : int, x : a) -> e a */ 
  kk_integer_t _x_x127 = kk_integer_add_small_const(start, 1, _ctx); /*int*/
  return kk_std_core_range_fs_fold(_x_x127, end, x, f, _ctx);
}
 
// Fold over the integers between [`start`,`end`] (including `end`).


// lift anonymous function
struct kk_std_core_range_fs_fold_fun130__t {
  struct kk_function_s _base;
  kk_integer_t end_0;
  kk_function_t f_0;
  kk_integer_t start_0;
};
static kk_box_t kk_std_core_range_fs_fold_fun130(kk_function_t _fself, kk_box_t x_1, kk_context_t* _ctx);
static kk_function_t kk_std_core_range_fs_new_fold_fun130(kk_integer_t end_0, kk_function_t f_0, kk_integer_t start_0, kk_context_t* _ctx) {
  struct kk_std_core_range_fs_fold_fun130__t* _self = kk_function_alloc_as(struct kk_std_core_range_fs_fold_fun130__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_range_fs_fold_fun130, kk_context());
  _self->end_0 = end_0;
  _self->f_0 = f_0;
  _self->start_0 = start_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_range_fs_fold_fun130(kk_function_t _fself, kk_box_t x_1, kk_context_t* _ctx) {
  struct kk_std_core_range_fs_fold_fun130__t* _self = kk_function_as(struct kk_std_core_range_fs_fold_fun130__t*, _fself, _ctx);
  kk_integer_t end_0 = _self->end_0; /* int */
  kk_function_t f_0 = _self->f_0; /* (int, 811) -> 812 811 */
  kk_integer_t start_0 = _self->start_0; /* int */
  kk_drop_match(_self, {kk_integer_dup(end_0, _ctx);kk_function_dup(f_0, _ctx);kk_integer_dup(start_0, _ctx);}, {}, _ctx)
  return kk_std_core_range_fs__mlift_fold_10085(end_0, f_0, start_0, x_1, _ctx);
}

kk_box_t kk_std_core_range_fs_fold(kk_integer_t start_0, kk_integer_t end_0, kk_box_t init, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,e> (start : int, end : int, init : a, f : (int, a) -> e a) -> e a */ 
  kk__tailcall: ;
  bool _match_x92 = kk_integer_gt_borrow(start_0,end_0,kk_context()); /*bool*/;
  if (_match_x92) {
    kk_integer_drop(start_0, _ctx);
    kk_function_drop(f_0, _ctx);
    kk_integer_drop(end_0, _ctx);
    return init;
  }
  {
    kk_box_t x_0_10114;
    kk_function_t _x_x129 = kk_function_dup(f_0, _ctx); /*(int, 811) -> 812 811*/
    kk_integer_t _x_x128 = kk_integer_dup(start_0, _ctx); /*int*/
    x_0_10114 = kk_function_call(kk_box_t, (kk_function_t, kk_integer_t, kk_box_t, kk_context_t*), _x_x129, (_x_x129, _x_x128, init, _ctx), _ctx); /*811*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10114, _ctx);
      return kk_std_core_hnd_yield_extend(kk_std_core_range_fs_new_fold_fun130(end_0, f_0, start_0, _ctx), _ctx);
    }
    { // tailcall
      kk_integer_t _x_x131 = kk_integer_add_small_const(start_0, 1, _ctx); /*int*/
      start_0 = _x_x131;
      init = x_0_10114;
      goto kk__tailcall;
    }
  }
}
 
// monadic lift

kk_box_t kk_std_core_range_fs__mlift_fold_while_10086(kk_integer_t end, kk_function_t f, kk_box_t init, kk_integer_t start, kk_std_core_types__maybe _y_x10039, kk_context_t* _ctx) { /* forall<a,e> (end : int, f : (int, a) -> e maybe<a>, init : a, start : int, maybe<a>) -> e a */ 
  if (kk_std_core_types__is_Just(_y_x10039, _ctx)) {
    kk_box_t x = _y_x10039._cons.Just.value;
    kk_box_drop(init, _ctx);
    kk_integer_t _x_x133 = kk_integer_add_small_const(start, 1, _ctx); /*int*/
    return kk_std_core_range_fs_fold_while(_x_x133, end, x, f, _ctx);
  }
  {
    kk_integer_drop(start, _ctx);
    kk_function_drop(f, _ctx);
    kk_integer_drop(end, _ctx);
    return init;
  }
}
 
// Fold over the integers between [`start`,`end`] (including `end`) or until `f` returns `Nothing`


// lift anonymous function
struct kk_std_core_range_fs_fold_while_fun137__t {
  struct kk_function_s _base;
  kk_integer_t end_0;
  kk_function_t f_0;
  kk_box_t init_0;
  kk_integer_t start_0;
};
static kk_box_t kk_std_core_range_fs_fold_while_fun137(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx);
static kk_function_t kk_std_core_range_fs_new_fold_while_fun137(kk_integer_t end_0, kk_function_t f_0, kk_box_t init_0, kk_integer_t start_0, kk_context_t* _ctx) {
  struct kk_std_core_range_fs_fold_while_fun137__t* _self = kk_function_alloc_as(struct kk_std_core_range_fs_fold_while_fun137__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_range_fs_fold_while_fun137, kk_context());
  _self->end_0 = end_0;
  _self->f_0 = f_0;
  _self->init_0 = init_0;
  _self->start_0 = start_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_range_fs_fold_while_fun137(kk_function_t _fself, kk_box_t _b_x25, kk_context_t* _ctx) {
  struct kk_std_core_range_fs_fold_while_fun137__t* _self = kk_function_as(struct kk_std_core_range_fs_fold_while_fun137__t*, _fself, _ctx);
  kk_integer_t end_0 = _self->end_0; /* int */
  kk_function_t f_0 = _self->f_0; /* (int, 948) -> 949 maybe<948> */
  kk_box_t init_0 = _self->init_0; /* 948 */
  kk_integer_t start_0 = _self->start_0; /* int */
  kk_drop_match(_self, {kk_integer_dup(end_0, _ctx);kk_function_dup(f_0, _ctx);kk_box_dup(init_0, _ctx);kk_integer_dup(start_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x138 = kk_std_core_types__maybe_unbox(_b_x25, KK_OWNED, _ctx); /*maybe<948>*/
  return kk_std_core_range_fs__mlift_fold_while_10086(end_0, f_0, init_0, start_0, _x_x138, _ctx);
}

kk_box_t kk_std_core_range_fs_fold_while(kk_integer_t start_0, kk_integer_t end_0, kk_box_t init_0, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,e> (start : int, end : int, init : a, f : (int, a) -> e maybe<a>) -> e a */ 
  kk__tailcall: ;
  bool _match_x90 = kk_integer_gt_borrow(start_0,end_0,kk_context()); /*bool*/;
  if (_match_x90) {
    kk_integer_drop(start_0, _ctx);
    kk_function_drop(f_0, _ctx);
    kk_integer_drop(end_0, _ctx);
    return init_0;
  }
  {
    kk_std_core_types__maybe x_0_10117;
    kk_function_t _x_x136 = kk_function_dup(f_0, _ctx); /*(int, 948) -> 949 maybe<948>*/
    kk_integer_t _x_x134 = kk_integer_dup(start_0, _ctx); /*int*/
    kk_box_t _x_x135 = kk_box_dup(init_0, _ctx); /*948*/
    x_0_10117 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_integer_t, kk_box_t, kk_context_t*), _x_x136, (_x_x136, _x_x134, _x_x135, _ctx), _ctx); /*maybe<948>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10117, _ctx);
      return kk_std_core_hnd_yield_extend(kk_std_core_range_fs_new_fold_while_fun137(end_0, f_0, init_0, start_0, _ctx), _ctx);
    }
    if (kk_std_core_types__is_Just(x_0_10117, _ctx)) {
      kk_box_t x_1 = x_0_10117._cons.Just.value;
      kk_box_drop(init_0, _ctx);
      { // tailcall
        kk_integer_t _x_x139 = kk_integer_add_small_const(start_0, 1, _ctx); /*int*/
        start_0 = _x_x139;
        init_0 = x_1;
        goto kk__tailcall;
      }
    }
    {
      kk_integer_drop(start_0, _ctx);
      kk_function_drop(f_0, _ctx);
      kk_integer_drop(end_0, _ctx);
      return init_0;
    }
  }
}
 
// Generic lower than


// lift anonymous function
struct kk_std_core_default_fs_cmp_fs__lp__at_x_fun142__t_lt__rp_ {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun142_lt__rp_(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun142_lt__rp_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_default_fs_cmp_fs__lp__at_x_fun142_lt__rp_, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun142_lt__rp_(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__order _y_x10044_31 = kk_std_core_types__order_unbox(_b_x29, KK_OWNED, _ctx); /*order*/;
  bool _x_x143 = kk_std_core_order__lp__eq__eq__rp_(_y_x10044_31, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x143);
}

bool kk_std_core_default_fs_cmp_fs__lp__lt__rp_(kk_box_t x, kk_box_t y, kk_function_t _implicit_fs_cmp, kk_context_t* _ctx) { /* forall<a,e> (x : a, y : a, ?cmp : (a, a) -> e order) -> e bool */ 
  kk_std_core_types__order x_0_10120 = kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_cmp, (_implicit_fs_cmp, x, y, _ctx), _ctx); /*order*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x141 = kk_std_core_hnd_yield_extend(kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun142_lt__rp_(_ctx), _ctx); /*2419*/
    return kk_bool_unbox(_x_x141);
  }
  {
    return kk_std_core_order__lp__eq__eq__rp_(x_0_10120, kk_std_core_types__new_Lt(_ctx), _ctx);
  }
}
 
// Generic greater than or equal


// lift anonymous function
struct kk_std_core_default_fs_cmp_fs__lp__at_x_fun145__t_gt__eq__rp_ {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun145_gt__eq__rp_(kk_function_t _fself, kk_box_t _b_x33, kk_context_t* _ctx);
static kk_function_t kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun145_gt__eq__rp_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_default_fs_cmp_fs__lp__at_x_fun145_gt__eq__rp_, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun145_gt__eq__rp_(kk_function_t _fself, kk_box_t _b_x33, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__order _y_x10045_35 = kk_std_core_types__order_unbox(_b_x33, KK_OWNED, _ctx); /*order*/;
  bool b_10068 = kk_std_core_order__lp__eq__eq__rp_(_y_x10045_35, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/;
  bool _x_x146;
  if (b_10068) {
    _x_x146 = false; /*bool*/
  }
  else {
    _x_x146 = true; /*bool*/
  }
  return kk_bool_box(_x_x146);
}

bool kk_std_core_default_fs_cmp_fs__lp__gt__eq__rp_(kk_box_t x, kk_box_t y, kk_function_t _implicit_fs_cmp, kk_context_t* _ctx) { /* forall<a,e> (x : a, y : a, ?cmp : (a, a) -> e order) -> e bool */ 
  kk_std_core_types__order x_0_10124 = kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_cmp, (_implicit_fs_cmp, x, y, _ctx), _ctx); /*order*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x144 = kk_std_core_hnd_yield_extend(kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun145_gt__eq__rp_(_ctx), _ctx); /*2419*/
    return kk_bool_unbox(_x_x144);
  }
  {
    bool b_10068_0 = kk_std_core_order__lp__eq__eq__rp_(x_0_10124, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/;
    if (b_10068_0) {
      return false;
    }
    {
      return true;
    }
  }
}
 
// Generic lower than or equal


// lift anonymous function
struct kk_std_core_default_fs_cmp_fs__lp__at_x_fun148__t_lt__eq__rp_ {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun148_lt__eq__rp_(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun148_lt__eq__rp_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_default_fs_cmp_fs__lp__at_x_fun148_lt__eq__rp_, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_default_fs_cmp_fs__lp__at_x_fun148_lt__eq__rp_(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__order _y_x10046_39 = kk_std_core_types__order_unbox(_b_x37, KK_OWNED, _ctx); /*order*/;
  bool b_10069 = kk_std_core_order__lp__eq__eq__rp_(_y_x10046_39, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/;
  bool _x_x149;
  if (b_10069) {
    _x_x149 = false; /*bool*/
  }
  else {
    _x_x149 = true; /*bool*/
  }
  return kk_bool_box(_x_x149);
}

bool kk_std_core_default_fs_cmp_fs__lp__lt__eq__rp_(kk_box_t x, kk_box_t y, kk_function_t _implicit_fs_cmp, kk_context_t* _ctx) { /* forall<a,e> (x : a, y : a, ?cmp : (a, a) -> e order) -> e bool */ 
  kk_std_core_types__order x_0_10128 = kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_cmp, (_implicit_fs_cmp, x, y, _ctx), _ctx); /*order*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x147 = kk_std_core_hnd_yield_extend(kk_std_core_default_fs_cmp_fs__lp__at_new_x_fun148_lt__eq__rp_(_ctx), _ctx); /*2419*/
    return kk_bool_unbox(_x_x147);
  }
  {
    bool b_10069_0 = kk_std_core_order__lp__eq__eq__rp_(x_0_10128, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/;
    if (b_10069_0) {
      return false;
    }
    {
      return true;
    }
  }
}
 
// monadic lift

kk_unit_t kk_std_core_range_fs__mlift_lift_for_1901_10090(kk_function_t action, kk_integer_t end, kk_integer_t i, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<e> (action : (int) -> e (), end : int, i : int, wild_ : ()) -> e () */ 
  kk_integer_t i_0_10006 = kk_integer_add_small_const(i, 1, _ctx); /*int*/;
  kk_std_core_range_fs__lift_for_1901(action, end, i_0_10006, _ctx); return kk_Unit;
}
 
// lifted local: range/for, rep


// lift anonymous function
struct kk_std_core_range_fs__lift_for_1901_fun153__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  kk_integer_t end_0;
  kk_integer_t i_0;
};
static kk_box_t kk_std_core_range_fs__lift_for_1901_fun153(kk_function_t _fself, kk_box_t _b_x41, kk_context_t* _ctx);
static kk_function_t kk_std_core_range_fs__new_lift_for_1901_fun153(kk_function_t action_0, kk_integer_t end_0, kk_integer_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_range_fs__lift_for_1901_fun153__t* _self = kk_function_alloc_as(struct kk_std_core_range_fs__lift_for_1901_fun153__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_range_fs__lift_for_1901_fun153, kk_context());
  _self->action_0 = action_0;
  _self->end_0 = end_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_range_fs__lift_for_1901_fun153(kk_function_t _fself, kk_box_t _b_x41, kk_context_t* _ctx) {
  struct kk_std_core_range_fs__lift_for_1901_fun153__t* _self = kk_function_as(struct kk_std_core_range_fs__lift_for_1901_fun153__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (int) -> 1326 () */
  kk_integer_t end_0 = _self->end_0; /* int */
  kk_integer_t i_0 = _self->i_0; /* int */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_integer_dup(end_0, _ctx);kk_integer_dup(i_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_43 = kk_Unit;
  kk_unit_unbox(_b_x41);
  kk_unit_t _x_x154 = kk_Unit;
  kk_std_core_range_fs__mlift_lift_for_1901_10090(action_0, end_0, i_0, wild___0_43, _ctx);
  return kk_unit_box(_x_x154);
}

kk_unit_t kk_std_core_range_fs__lift_for_1901(kk_function_t action_0, kk_integer_t end_0, kk_integer_t i_0, kk_context_t* _ctx) { /* forall<e> (action : (int) -> e (), end : int, i : int) -> e () */ 
  kk__tailcall: ;
  bool _match_x85 = kk_integer_lte_borrow(i_0,end_0,kk_context()); /*bool*/;
  if (_match_x85) {
    kk_unit_t x_10132 = kk_Unit;
    kk_function_t _x_x151 = kk_function_dup(action_0, _ctx); /*(int) -> 1326 ()*/
    kk_integer_t _x_x150 = kk_integer_dup(i_0, _ctx); /*int*/
    kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), _x_x151, (_x_x151, _x_x150, _ctx), _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x152 = kk_std_core_hnd_yield_extend(kk_std_core_range_fs__new_lift_for_1901_fun153(action_0, end_0, i_0, _ctx), _ctx); /*2419*/
      kk_unit_unbox(_x_x152); return kk_Unit;
    }
    {
      kk_integer_t i_0_10006_0 = kk_integer_add_small_const(i_0, 1, _ctx); /*int*/;
      { // tailcall
        i_0 = i_0_10006_0;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_integer_drop(i_0, _ctx);
    kk_integer_drop(end_0, _ctx);
    kk_function_drop(action_0, _ctx);
    kk_Unit; return kk_Unit;
  }
}
extern kk_unit_t kk_std_core_repeat_fun158(kk_function_t _fself, kk_integer_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_repeat_fun158__t* _self = kk_function_as(struct kk_std_core_repeat_fun158__t*, _fself, _ctx);
  kk_function_t action = _self->action; /* () -> 1371 () */
  kk_drop_match(_self, {kk_function_dup(action, _ctx);}, {}, _ctx)
  kk_integer_drop(i_0, _ctx);
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), action, (action, _ctx), _ctx); return kk_Unit;
}
 
// monadic lift

kk_std_core_types__maybe kk_std_core_range_fs__mlift_lift_for_while_1902_10091(kk_function_t action, kk_integer_t end, kk_integer_t i, kk_std_core_types__maybe _y_x10054, kk_context_t* _ctx) { /* forall<a,e> (action : (int) -> e maybe<a>, end : int, i : int, maybe<a>) -> e maybe<a> */ 
  if (kk_std_core_types__is_Nothing(_y_x10054, _ctx)) {
    kk_integer_t i_0_10015 = kk_integer_add_small_const(i, 1, _ctx); /*int*/;
    return kk_std_core_range_fs__lift_for_while_1902(action, end, i_0_10015, _ctx);
  }
  {
    kk_box_t x = _y_x10054._cons.Just.value;
    kk_integer_drop(i, _ctx);
    kk_integer_drop(end, _ctx);
    kk_function_drop(action, _ctx);
    return kk_std_core_types__new_Just(x, _ctx);
  }
}
 
// lifted local: range/for-while, rep


// lift anonymous function
struct kk_std_core_range_fs__lift_for_while_1902_fun162__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  kk_integer_t end_0;
  kk_integer_t i_0;
};
static kk_box_t kk_std_core_range_fs__lift_for_while_1902_fun162(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx);
static kk_function_t kk_std_core_range_fs__new_lift_for_while_1902_fun162(kk_function_t action_0, kk_integer_t end_0, kk_integer_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_range_fs__lift_for_while_1902_fun162__t* _self = kk_function_alloc_as(struct kk_std_core_range_fs__lift_for_while_1902_fun162__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_range_fs__lift_for_while_1902_fun162, kk_context());
  _self->action_0 = action_0;
  _self->end_0 = end_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_range_fs__lift_for_while_1902_fun162(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx) {
  struct kk_std_core_range_fs__lift_for_while_1902_fun162__t* _self = kk_function_as(struct kk_std_core_range_fs__lift_for_while_1902_fun162__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (int) -> 1469 maybe<1468> */
  kk_integer_t end_0 = _self->end_0; /* int */
  kk_integer_t i_0 = _self->i_0; /* int */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_integer_dup(end_0, _ctx);kk_integer_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10054_0_47 = kk_std_core_types__maybe_unbox(_b_x45, KK_OWNED, _ctx); /*maybe<1468>*/;
  kk_std_core_types__maybe _x_x163 = kk_std_core_range_fs__mlift_lift_for_while_1902_10091(action_0, end_0, i_0, _y_x10054_0_47, _ctx); /*maybe<1468>*/
  return kk_std_core_types__maybe_box(_x_x163, _ctx);
}

kk_std_core_types__maybe kk_std_core_range_fs__lift_for_while_1902(kk_function_t action_0, kk_integer_t end_0, kk_integer_t i_0, kk_context_t* _ctx) { /* forall<a,e> (action : (int) -> e maybe<a>, end : int, i : int) -> e maybe<a> */ 
  kk__tailcall: ;
  bool _match_x83 = kk_integer_lte_borrow(i_0,end_0,kk_context()); /*bool*/;
  if (_match_x83) {
    kk_std_core_types__maybe x_0_10135;
    kk_function_t _x_x160 = kk_function_dup(action_0, _ctx); /*(int) -> 1469 maybe<1468>*/
    kk_integer_t _x_x159 = kk_integer_dup(i_0, _ctx); /*int*/
    x_0_10135 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_integer_t, kk_context_t*), _x_x160, (_x_x160, _x_x159, _ctx), _ctx); /*maybe<1468>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10135, _ctx);
      kk_box_t _x_x161 = kk_std_core_hnd_yield_extend(kk_std_core_range_fs__new_lift_for_while_1902_fun162(action_0, end_0, i_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__maybe_unbox(_x_x161, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Nothing(x_0_10135, _ctx)) {
      kk_integer_t i_0_10015_0 = kk_integer_add_small_const(i_0, 1, _ctx); /*int*/;
      { // tailcall
        i_0 = i_0_10015_0;
        goto kk__tailcall;
      }
    }
    {
      kk_box_t x_1 = x_0_10135._cons.Just.value;
      kk_integer_drop(i_0, _ctx);
      kk_integer_drop(end_0, _ctx);
      kk_function_drop(action_0, _ctx);
      return kk_std_core_types__new_Just(x_1, _ctx);
    }
  }
  {
    kk_integer_drop(i_0, _ctx);
    kk_integer_drop(end_0, _ctx);
    kk_function_drop(action_0, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// Used by the compiler to wrap main console applications

kk_box_t kk_std_core_main_console(kk_function_t main, kk_context_t* _ctx) { /* forall<a,e> (main : () -> e a) -> e a */ 
  return kk_main_console(main,kk_context());
}
 
// Return the host environment: `dotnet`, `browser`, `webworker`, `node`, or `libc`.

kk_string_t kk_std_core_host(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_get_host(kk_context());
}
 
// The default exception handler


// lift anonymous function
struct kk_std_core__default_exn_fun165__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core__default_exn_fun165(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x654__16, kk_std_core_exn__exception x, kk_context_t* _ctx);
static kk_function_t kk_std_core__new_default_exn_fun165(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core__default_exn_fun165, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_core__default_exn_fun166__t {
  struct kk_function_s _base;
  kk_std_core_exn__exception x;
};
static kk_box_t kk_std_core__default_exn_fun166(kk_function_t _fself, kk_function_t _b_x52, kk_context_t* _ctx);
static kk_function_t kk_std_core__new_default_exn_fun166(kk_std_core_exn__exception x, kk_context_t* _ctx) {
  struct kk_std_core__default_exn_fun166__t* _self = kk_function_alloc_as(struct kk_std_core__default_exn_fun166__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core__default_exn_fun166, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_core__default_exn_fun167__t {
  struct kk_function_s _base;
  kk_function_t _b_x52;
};
static kk_unit_t kk_std_core__default_exn_fun167(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x53, kk_context_t* _ctx);
static kk_function_t kk_std_core__new_default_exn_fun167(kk_function_t _b_x52, kk_context_t* _ctx) {
  struct kk_std_core__default_exn_fun167__t* _self = kk_function_alloc_as(struct kk_std_core__default_exn_fun167__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core__default_exn_fun167, kk_context());
  _self->_b_x52 = _b_x52;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_core__default_exn_fun167(kk_function_t _fself, kk_std_core_hnd__resume_result _b_x53, kk_context_t* _ctx) {
  struct kk_std_core__default_exn_fun167__t* _self = kk_function_as(struct kk_std_core__default_exn_fun167__t*, _fself, _ctx);
  kk_function_t _b_x52 = _self->_b_x52; /* (hnd/resume-result<2716,2719>) -> 2718 2719 */
  kk_drop_match(_self, {kk_function_dup(_b_x52, _ctx);}, {}, _ctx)
  kk_box_t _x_x168 = kk_function_call(kk_box_t, (kk_function_t, kk_std_core_hnd__resume_result, kk_context_t*), _b_x52, (_b_x52, _b_x53, _ctx), _ctx); /*2719*/
  kk_unit_unbox(_x_x168); return kk_Unit;
}


// lift anonymous function
struct kk_std_core__default_exn_fun173__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core__default_exn_fun173(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx);
static kk_function_t kk_std_core__new_default_exn_fun173(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core__default_exn_fun173, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core__default_exn_fun173(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x174 = kk_Unit;
  kk_string_t _x_x175 = kk_string_unbox(_b_x49); /*string*/
  kk_std_core_console_printsln(_x_x175, _ctx);
  return kk_unit_box(_x_x174);
}
static kk_box_t kk_std_core__default_exn_fun166(kk_function_t _fself, kk_function_t _b_x52, kk_context_t* _ctx) {
  struct kk_std_core__default_exn_fun166__t* _self = kk_function_as(struct kk_std_core__default_exn_fun166__t*, _fself, _ctx);
  kk_std_core_exn__exception x = _self->x; /* exception */
  kk_drop_match(_self, {kk_std_core_exn__exception_dup(x, _ctx);}, {}, _ctx)
  kk_function_t ___wildcard_x654__45_69 = kk_std_core__new_default_exn_fun167(_b_x52, _ctx); /*(hnd/resume-result<1724,()>) -> <console/console|1738> ()*/;
  kk_function_drop(___wildcard_x654__45_69, _ctx);
  kk_unit_t __ = kk_Unit;
  kk_string_t _x_x169;
  kk_define_string_literal(static, _s_x170, 20, "uncaught exception: ", _ctx)
  _x_x169 = kk_string_dup(_s_x170, _ctx); /*string*/
  kk_std_core_console_prints(_x_x169, _ctx);
  kk_string_t x_0_10139 = kk_std_core_exn_show(x, _ctx); /*string*/;
  kk_unit_t _x_x171 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_0_10139, _ctx);
    kk_box_t _x_x172 = kk_std_core_hnd_yield_extend(kk_std_core__new_default_exn_fun173(_ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x172);
  }
  else {
    kk_std_core_console_printsln(x_0_10139, _ctx);
  }
  return kk_unit_box(_x_x171);
}
static kk_box_t kk_std_core__default_exn_fun165(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x654__16, kk_std_core_exn__exception x, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_datatype_ptr_dropn(___wildcard_x654__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to_final(m, kk_std_core__new_default_exn_fun166(x, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_core__default_exn_fun178__t {
  struct kk_function_s _base;
  kk_function_t _b_x54_65;
};
static kk_box_t kk_std_core__default_exn_fun178(kk_function_t _fself, int32_t _b_x55, kk_std_core_hnd__ev _b_x56, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_std_core__new_default_exn_fun178(kk_function_t _b_x54_65, kk_context_t* _ctx) {
  struct kk_std_core__default_exn_fun178__t* _self = kk_function_alloc_as(struct kk_std_core__default_exn_fun178__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core__default_exn_fun178, kk_context());
  _self->_b_x54_65 = _b_x54_65;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core__default_exn_fun178(kk_function_t _fself, int32_t _b_x55, kk_std_core_hnd__ev _b_x56, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_std_core__default_exn_fun178__t* _self = kk_function_as(struct kk_std_core__default_exn_fun178__t*, _fself, _ctx);
  kk_function_t _b_x54_65 = _self->_b_x54_65; /* (m : hnd/marker<<console/console|1738>,()>, hnd/ev<exn>, x : exception) -> <console/console|1738> 1724 */
  kk_drop_match(_self, {kk_function_dup(_b_x54_65, _ctx);}, {}, _ctx)
  kk_std_core_exn__exception _x_x179 = kk_std_core_exn__exception_unbox(_b_x57, KK_OWNED, _ctx); /*exception*/
  return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_std_core_exn__exception, kk_context_t*), _b_x54_65, (_b_x54_65, _b_x55, _b_x56, _x_x179, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_core__default_exn_fun180__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core__default_exn_fun180(kk_function_t _fself, kk_box_t _b_x61, kk_context_t* _ctx);
static kk_function_t kk_std_core__new_default_exn_fun180(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core__default_exn_fun180, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core__default_exn_fun180(kk_function_t _fself, kk_box_t _b_x61, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _res_70 = kk_Unit;
  kk_unit_unbox(_b_x61);
  return kk_unit_box(_res_70);
}


// lift anonymous function
struct kk_std_core__default_exn_fun181__t {
  struct kk_function_s _base;
  kk_function_t action;
};
static kk_box_t kk_std_core__default_exn_fun181(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_core__new_default_exn_fun181(kk_function_t action, kk_context_t* _ctx) {
  struct kk_std_core__default_exn_fun181__t* _self = kk_function_alloc_as(struct kk_std_core__default_exn_fun181__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core__default_exn_fun181, kk_context());
  _self->action = action;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core__default_exn_fun181(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_core__default_exn_fun181__t* _self = kk_function_as(struct kk_std_core__default_exn_fun181__t*, _fself, _ctx);
  kk_function_t action = _self->action; /* () -> <exn,console/console|1738> () */
  kk_drop_match(_self, {kk_function_dup(action, _ctx);}, {}, _ctx)
  kk_unit_t _x_x182 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), action, (action, _ctx), _ctx);
  return kk_unit_box(_x_x182);
}

kk_unit_t kk_std_core__default_exn(kk_function_t action, kk_context_t* _ctx) { /* forall<e> (action : () -> <exn,console/console|e> ()) -> <console/console|e> () */ 
  kk_box_t _x_x164;
  kk_function_t _b_x54_65 = kk_std_core__new_default_exn_fun165(_ctx); /*(m : hnd/marker<<console/console|1738>,()>, hnd/ev<exn>, x : exception) -> <console/console|1738> 1724*/;
  kk_std_core_exn__exn _x_x176;
  kk_std_core_hnd__clause1 _x_x177 = kk_std_core_hnd__new_Clause1(kk_std_core__new_default_exn_fun178(_b_x54_65, _ctx), _ctx); /*hnd/clause1<45,46,47,48,49>*/
  _x_x176 = kk_std_core_exn__new_Hnd_exn(kk_reuse_null, 0, kk_integer_from_small(0), _x_x177, _ctx); /*exn<14,15>*/
  _x_x164 = kk_std_core_exn_exn_fs__handle(_x_x176, kk_std_core__new_default_exn_fun180(_ctx), kk_std_core__new_default_exn_fun181(action, _ctx), _ctx); /*198*/
  kk_unit_unbox(_x_x164); return kk_Unit;
}

kk_ref_t kk_std_core_unique_count;
 
// Returns a unique integer (modulo 32-bits).

kk_integer_t kk_std_core_unique(kk_context_t* _ctx) { /* () -> ndet int */ 
  kk_integer_t u;
  kk_box_t _x_x183;
  kk_ref_t _x_x184 = kk_ref_dup(kk_std_core_unique_count, _ctx); /*ref<global,int>*/
  _x_x183 = kk_ref_get(_x_x184,kk_context()); /*212*/
  u = kk_integer_unbox(_x_x183, _ctx); /*int*/
  kk_integer_t _b_x78_80;
  kk_integer_t _x_x185 = kk_integer_dup(u, _ctx); /*int*/
  _b_x78_80 = kk_integer_add_small_const(_x_x185, 1, _ctx); /*int*/
  kk_unit_t __ = kk_Unit;
  kk_ref_set_borrow(kk_std_core_unique_count,(kk_integer_box(_b_x78_80, _ctx)),kk_context());
  return u;
}

kk_std_core__stream kk_std_core_stream_fs__copy(kk_std_core__stream _this, kk_std_core_types__optional head, kk_std_core_types__optional tail, kk_context_t* _ctx) { /* forall<a> (stream<a>, head : ? a, tail : ? (stream<a>)) -> stream<a> */ 
  kk_box_t _x_x188;
  if (kk_std_core_types__is_Optional(head, _ctx)) {
    kk_box_t _uniq_head_1868 = head._cons._Optional.value;
    kk_box_dup(_uniq_head_1868, _ctx);
    kk_std_core_types__optional_drop(head, _ctx);
    _x_x188 = _uniq_head_1868; /*1895*/
  }
  else {
    kk_std_core_types__optional_drop(head, _ctx);
    {
      struct kk_std_core_Next* _con_x189 = kk_std_core__as_Next(_this, _ctx);
      kk_box_t _x = _con_x189->head;
      kk_box_dup(_x, _ctx);
      _x_x188 = _x; /*1895*/
    }
  }
  kk_std_core__stream _x_x190;
  if (kk_std_core_types__is_Optional(tail, _ctx)) {
    kk_box_t _box_x81 = tail._cons._Optional.value;
    kk_std_core__stream _uniq_tail_1879 = kk_std_core__stream_unbox(_box_x81, KK_BORROWED, _ctx);
    kk_std_core__stream_dup(_uniq_tail_1879, _ctx);
    kk_std_core_types__optional_drop(tail, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x190 = _uniq_tail_1879; /*stream<1895>*/
  }
  else {
    kk_std_core_types__optional_drop(tail, _ctx);
    {
      struct kk_std_core_Next* _con_x191 = kk_std_core__as_Next(_this, _ctx);
      kk_box_t _pat_0_1 = _con_x191->head;
      kk_std_core__stream _x_0 = _con_x191->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_box_drop(_pat_0_1, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_std_core__stream_dup(_x_0, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x190 = _x_0; /*stream<1895>*/
    }
  }
  return kk_std_core__new_Next(kk_reuse_null, 0, _x_x188, _x_x190, _ctx);
}

// initialization
void kk_std_core__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_undiv__init(_ctx);
  kk_std_core_unsafe__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_bool__init(_ctx);
  kk_std_core_order__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_maybe2__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_lazy__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_std_core_unique_count = kk_ref_alloc((kk_integer_box(kk_integer_from_small(0), _ctx)),kk_context()); /*ref<global,int>*/
  }
}

// termination
void kk_std_core__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_ref_drop(kk_std_core_unique_count, _ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_lazy__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe2__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_unsafe__done(_ctx);
  kk_std_core_undiv__done(_ctx);
  kk_std_core_types__done(_ctx);
}
