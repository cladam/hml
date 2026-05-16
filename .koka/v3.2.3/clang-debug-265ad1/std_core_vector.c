// Koka generated module: std/core/vector, koka version: 3.2.3, platform: 64-bit
#include "std_core_vector.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2024, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

kk_std_core_types__list kk_vector_to_list(kk_vector_t v, kk_std_core_types__list tail, kk_context_t* ctx) {
  // todo: avoid boxed_dup if v is unique
  kk_ssize_t n;
  kk_box_t* p = kk_vector_buf_borrow(v, &n, ctx);
  if (n <= 0) {
    kk_vector_drop(v,ctx);
    return tail;
  }
  kk_std_core_types__list nil  = kk_std_core_types__new_Nil(ctx);
  struct kk_std_core_types_Cons* cons = NULL;
  kk_std_core_types__list list = kk_std_core_types__new_Nil(ctx);
  for( kk_ssize_t i = 0; i < n; i++ ) {
    kk_std_core_types__list hd = kk_std_core_types__new_Cons(kk_reuse_null,0,kk_box_dup(p[i],ctx), nil, ctx);
    if (cons==NULL) {
      list = hd;
    }
    else {
      cons->tail = hd;
    }
    cons = kk_std_core_types__as_Cons(hd,ctx);
  }
  if (cons == NULL) { list = tail; }
               else { cons->tail = tail; }
  kk_vector_drop(v,ctx);
  return list;
}

kk_vector_t kk_list_to_vector(kk_std_core_types__list xs, kk_context_t* ctx) {
  // todo: avoid boxed_dup if xs is unique
  // find the length
  kk_ssize_t len = 0;
  kk_std_core_types__list ys = xs;
  while (kk_std_core_types__is_Cons(ys,ctx)) {
    struct kk_std_core_types_Cons* cons = kk_std_core_types__as_Cons(ys,ctx);
    len++;
    ys = cons->tail;
  }
  // alloc the vector and copy
  kk_box_t* p;
  kk_vector_t v = kk_vector_alloc_uninit(len, &p, ctx);
  ys = xs;
  for( kk_ssize_t i = 0; i < len; i++) {
    struct kk_std_core_types_Cons* cons = kk_std_core_types__as_Cons(ys,ctx);
    ys = cons->tail;
    p[i] = kk_box_dup(cons->head,ctx);
  }
  kk_std_core_types__list_drop(xs,ctx);  // todo: drop while visiting?
  return v;
}


kk_vector_t kk_vector_init_total( kk_ssize_t n, kk_function_t init, kk_context_t* ctx) {
  kk_vector_t v = kk_vector_alloc(n, kk_box_null(), ctx);
  kk_box_t* p = kk_vector_buf_borrow(v, NULL, ctx);
  for(kk_ssize_t i = 0; i < n; i++) {
    kk_function_dup(init,ctx);
    p[i] = kk_function_call(kk_box_t,(kk_function_t,kk_ssize_t,kk_context_t*),init,(init,i,ctx),ctx);
  }
  kk_function_drop(init,ctx);
  return v;
}


kk_vector_t kk_std_core_vector__unsafe_vector(kk_ssize_t n, kk_context_t* _ctx) { /* forall<a> (n : ssize_t) -> vector<a> */ 
  return kk_vector_alloc(n,kk_box_null(),kk_context());
}
 
// Create a new vector of length `n`  with initial elements `init`` .

kk_vector_t kk_std_core_vector_vector_alloc(kk_ssize_t n, kk_box_t init, kk_context_t* _ctx) { /* forall<a,e> (n : ssize_t, init : a) -> e vector<a> */ 
  return kk_vector_alloc(n,init,kk_context());
}
 
// Create a new vector of length `n`  with initial elements given by a total function `f` .

kk_vector_t kk_std_core_vector_vector_alloc_total(kk_ssize_t n, kk_function_t f, kk_context_t* _ctx) { /* forall<a> (n : ssize_t, f : (ssize_t) -> a) -> vector<a> */ 
  return kk_vector_init_total(n,f,kk_context());
}
 
// Return the element at position `index`  in vector `v`.
// Raise an out of bounds exception if `index < 0`  or `index >= v.length`.

kk_box_t kk_std_core_vector__index(kk_vector_t v, kk_integer_t index, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, index : int) -> exn a */ 
  kk_ssize_t idx;
  kk_integer_t _x_x42 = kk_integer_dup(index, _ctx); /*int*/
  idx = kk_std_core_int_ssize__t(_x_x42, _ctx); /*ssize_t*/
  bool _match_x41;
  kk_ssize_t _x_x43 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
  _match_x41 = (idx < _x_x43); /*bool*/
  if (_match_x41) {
    return kk_vector_at_borrow(v,idx,kk_context());
  }
  {
    kk_string_t _x_x44;
    kk_define_string_literal(static, _s_x45, 19, "index out of bounds", _ctx)
    _x_x44 = kk_string_dup(_s_x45, _ctx); /*string*/
    kk_std_core_types__optional _x_x46 = kk_std_core_types__new_Optional(kk_std_core_exn__exception_info_box(kk_std_core_exn__new_ExnRange(_ctx), _ctx), _ctx); /*? 7*/
    return kk_std_core_exn_throw(_x_x44, _x_x46, _ctx);
  }
}
 
// Return the element at position `index` in vector `v`, or `Nothing` if out of bounds

kk_std_core_types__maybe kk_std_core_vector_at(kk_vector_t v, kk_integer_t index, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, index : int) -> maybe<a> */ 
  kk_ssize_t idx;
  kk_integer_t _x_x47 = kk_integer_dup(index, _ctx); /*int*/
  idx = kk_std_core_int_ssize__t(_x_x47, _ctx); /*ssize_t*/
  bool _match_x40;
  kk_ssize_t _x_x48 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
  _match_x40 = (idx < _x_x48); /*bool*/
  if (_match_x40) {
    kk_box_t _x_x49 = kk_vector_at_borrow(v,idx,kk_context()); /*3*/
    return kk_std_core_types__new_Just(_x_x49, _ctx);
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
extern kk_box_t kk_std_core_vector_vector_init_total_fun55(kk_function_t _fself, kk_ssize_t i, kk_context_t* _ctx) {
  struct kk_std_core_vector_vector_init_total_fun55__t* _self = kk_function_as(struct kk_std_core_vector_vector_init_total_fun55__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (int) -> 476 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_integer_t _x_x56 = kk_integer_from_ssize_t(i,kk_context()); /*int*/
  return kk_function_call(kk_box_t, (kk_function_t, kk_integer_t, kk_context_t*), f, (f, _x_x56, _ctx), _ctx);
}

kk_ssize_t kk_std_core_vector_ssize__t_fs_decr(kk_ssize_t i, kk_context_t* _ctx) { /* (i : ssize_t) -> ssize_t */ 
  return (i - 1);
}

kk_ssize_t kk_std_core_vector_ssize__t_fs_incr(kk_ssize_t i, kk_context_t* _ctx) { /* (i : ssize_t) -> ssize_t */ 
  return (i + 1);
}
 
// monadic lift

kk_unit_t kk_std_core_vector__mlift_lift_forz_1011_10045(kk_function_t action, kk_ssize_t i, kk_ssize_t n, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<e> (action : (ssize_t) -> e (), i : ssize_t, n : ssize_t, wild_ : ()) -> e () */ 
  kk_ssize_t i_0_10000 = kk_std_core_vector_ssize__t_fs_incr(i, _ctx); /*ssize_t*/;
  kk_std_core_vector__lift_forz_1011(action, n, i_0_10000, _ctx); return kk_Unit;
}
 
// lifted local: forz, rep


// lift anonymous function
struct kk_std_core_vector__lift_forz_1011_fun59__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  kk_ssize_t i_0;
  kk_ssize_t n_0;
};
static kk_box_t kk_std_core_vector__lift_forz_1011_fun59(kk_function_t _fself, kk_box_t _b_x3, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector__new_lift_forz_1011_fun59(kk_function_t action_0, kk_ssize_t i_0, kk_ssize_t n_0, kk_context_t* _ctx) {
  struct kk_std_core_vector__lift_forz_1011_fun59__t* _self = kk_function_alloc_as(struct kk_std_core_vector__lift_forz_1011_fun59__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector__lift_forz_1011_fun59, kk_context());
  _self->action_0 = action_0;
  _self->i_0 = i_0;
  _self->n_0 = n_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_vector__lift_forz_1011_fun59(kk_function_t _fself, kk_box_t _b_x3, kk_context_t* _ctx) {
  struct kk_std_core_vector__lift_forz_1011_fun59__t* _self = kk_function_as(struct kk_std_core_vector__lift_forz_1011_fun59__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (ssize_t) -> 539 () */
  kk_ssize_t i_0 = _self->i_0; /* ssize_t */
  kk_ssize_t n_0 = _self->n_0; /* ssize_t */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_skip_dup(i_0, _ctx);kk_skip_dup(n_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_5 = kk_Unit;
  kk_unit_unbox(_b_x3);
  kk_unit_t _x_x60 = kk_Unit;
  kk_std_core_vector__mlift_lift_forz_1011_10045(action_0, i_0, n_0, wild___0_5, _ctx);
  return kk_unit_box(_x_x60);
}

kk_unit_t kk_std_core_vector__lift_forz_1011(kk_function_t action_0, kk_ssize_t n_0, kk_ssize_t i_0, kk_context_t* _ctx) { /* forall<e> (action : (ssize_t) -> e (), n : ssize_t, i : ssize_t) -> e () */ 
  kk__tailcall: ;
  bool _match_x38 = (i_0 < n_0); /*bool*/;
  if (_match_x38) {
    kk_unit_t x_10051 = kk_Unit;
    kk_function_t _x_x57 = kk_function_dup(action_0, _ctx); /*(ssize_t) -> 539 ()*/
    kk_function_call(kk_unit_t, (kk_function_t, kk_ssize_t, kk_context_t*), _x_x57, (_x_x57, i_0, _ctx), _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x58 = kk_std_core_hnd_yield_extend(kk_std_core_vector__new_lift_forz_1011_fun59(action_0, i_0, n_0, _ctx), _ctx); /*2419*/
      kk_unit_unbox(_x_x58); return kk_Unit;
    }
    {
      kk_ssize_t i_0_10000_0 = kk_std_core_vector_ssize__t_fs_incr(i_0, _ctx); /*ssize_t*/;
      { // tailcall
        i_0 = i_0_10000_0;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_function_drop(action_0, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// Create a new vector of length `n`  with initial elements given by function `f` which can have a control effect.


// lift anonymous function
struct kk_std_core_vector_vector_init_fun63__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_vector_t v;
};
static kk_unit_t kk_std_core_vector_vector_init_fun63(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_vector_init_fun63(kk_function_t f, kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_core_vector_vector_init_fun63__t* _self = kk_function_alloc_as(struct kk_std_core_vector_vector_init_fun63__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_vector_init_fun63, kk_context());
  _self->f = f;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_core_vector_vector_init_fun66__t {
  struct kk_function_s _base;
  kk_vector_t v;
  kk_ssize_t i_0;
};
static kk_box_t kk_std_core_vector_vector_init_fun66(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_vector_init_fun66(kk_vector_t v, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_vector_vector_init_fun66__t* _self = kk_function_alloc_as(struct kk_std_core_vector_vector_init_fun66__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_vector_init_fun66, kk_context());
  _self->v = v;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_vector_vector_init_fun66(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx) {
  struct kk_std_core_vector_vector_init_fun66__t* _self = kk_function_as(struct kk_std_core_vector_vector_init_fun66__t*, _fself, _ctx);
  kk_vector_t v = _self->v; /* vector<591> */
  kk_ssize_t i_0 = _self->i_0; /* ssize_t */
  kk_drop_match(_self, {kk_vector_dup(v, _ctx);kk_skip_dup(i_0, _ctx);}, {}, _ctx)
  kk_unit_t _x_x67 = kk_Unit;
  kk_vector_unsafe_assign(v,i_0,_b_x7,kk_context());
  return kk_unit_box(_x_x67);
}
static kk_unit_t kk_std_core_vector_vector_init_fun63(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_vector_vector_init_fun63__t* _self = kk_function_as(struct kk_std_core_vector_vector_init_fun63__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (int) -> 592 591 */
  kk_vector_t v = _self->v; /* vector<591> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_box_t x_0_10057;
  kk_integer_t _x_x64 = kk_integer_from_ssize_t(i_0,kk_context()); /*int*/
  x_0_10057 = kk_function_call(kk_box_t, (kk_function_t, kk_integer_t, kk_context_t*), f, (f, _x_x64, _ctx), _ctx); /*591*/
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_0_10057, _ctx);
    kk_box_t _x_x65 = kk_std_core_hnd_yield_extend(kk_std_core_vector_new_vector_init_fun66(v, i_0, _ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x65); return kk_Unit;
  }
  {
    kk_vector_unsafe_assign(v,i_0,x_0_10057,kk_context()); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_core_vector_vector_init_fun69__t {
  struct kk_function_s _base;
  kk_vector_t v;
};
static kk_box_t kk_std_core_vector_vector_init_fun69(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_vector_init_fun69(kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_core_vector_vector_init_fun69__t* _self = kk_function_alloc_as(struct kk_std_core_vector_vector_init_fun69__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_vector_init_fun69, kk_context());
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_vector_vector_init_fun69(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  struct kk_std_core_vector_vector_init_fun69__t* _self = kk_function_as(struct kk_std_core_vector_vector_init_fun69__t*, _fself, _ctx);
  kk_vector_t v = _self->v; /* vector<591> */
  kk_drop_match(_self, {kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_unit_t wild___13 = kk_Unit;
  kk_unit_unbox(_b_x11);
  return kk_vector_box(v, _ctx);
}

kk_vector_t kk_std_core_vector_vector_init(kk_integer_t n, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (n : int, f : (int) -> e a) -> e vector<a> */ 
  kk_ssize_t len;
  kk_integer_t _x_x61 = kk_integer_dup(n, _ctx); /*int*/
  len = kk_std_core_int_ssize__t(_x_x61, _ctx); /*ssize_t*/
  kk_vector_t v = kk_vector_alloc(len,kk_box_null(),kk_context()); /*vector<591>*/;
  kk_ssize_t i = (KK_IZ(0)); /*ssize_t*/;
  kk_unit_t x_10054 = kk_Unit;
  kk_function_t _x_x62;
  kk_vector_dup(v, _ctx);
  _x_x62 = kk_std_core_vector_new_vector_init_fun63(f, v, _ctx); /*(i@0 : ssize_t) -> 592 ()*/
  kk_std_core_vector__lift_forz_1011(_x_x62, len, i, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x68 = kk_std_core_hnd_yield_extend(kk_std_core_vector_new_vector_init_fun69(v, _ctx), _ctx); /*2419*/
    return kk_vector_unbox(_x_x68, _ctx);
  }
  {
    return v;
  }
}


// lift anonymous function
struct kk_std_core_vector_foreach_indexedz_fun70__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_vector_t v;
};
static kk_unit_t kk_std_core_vector_foreach_indexedz_fun70(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_foreach_indexedz_fun70(kk_function_t f, kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_core_vector_foreach_indexedz_fun70__t* _self = kk_function_alloc_as(struct kk_std_core_vector_foreach_indexedz_fun70__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_foreach_indexedz_fun70, kk_context());
  _self->f = f;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_core_vector_foreach_indexedz_fun70(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_vector_foreach_indexedz_fun70__t* _self = kk_function_as(struct kk_std_core_vector_foreach_indexedz_fun70__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (ssize_t, 636) -> 637 () */
  kk_vector_t v = _self->v; /* vector<636> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_box_t _x_x71;
  kk_box_t _brw_x35 = kk_vector_at_borrow(v,i_0,kk_context()); /*3*/;
  kk_vector_drop(v, _ctx);
  _x_x71 = _brw_x35; /*3*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_ssize_t, kk_box_t, kk_context_t*), f, (f, i_0, _x_x71, _ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_std_core_vector_foreach_indexedz(kk_vector_t v, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (v : vector<a>, f : (ssize_t, a) -> e ()) -> e () */ 
  kk_ssize_t n_10003 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
  kk_ssize_t i = (KK_IZ(0)); /*ssize_t*/;
  kk_std_core_vector__lift_forz_1011(kk_std_core_vector_new_foreach_indexedz_fun70(f, v, _ctx), n_10003, i, _ctx); return kk_Unit;
}
 
// Invoke a function `f` for each element in a vector `v`


// lift anonymous function
struct kk_std_core_vector_foreach_fun72__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_vector_t v;
};
static kk_unit_t kk_std_core_vector_foreach_fun72(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_foreach_fun72(kk_function_t f, kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_core_vector_foreach_fun72__t* _self = kk_function_alloc_as(struct kk_std_core_vector_foreach_fun72__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_foreach_fun72, kk_context());
  _self->f = f;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_core_vector_foreach_fun72(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_vector_foreach_fun72__t* _self = kk_function_as(struct kk_std_core_vector_foreach_fun72__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (668) -> 669 () */
  kk_vector_t v = _self->v; /* vector<668> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_box_t x_10015;
  kk_box_t _brw_x34 = kk_vector_at_borrow(v,i_0,kk_context()); /*3*/;
  kk_vector_drop(v, _ctx);
  x_10015 = _brw_x34; /*668*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, x_10015, _ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_std_core_vector_foreach(kk_vector_t v, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (v : vector<a>, f : (a) -> e ()) -> e () */ 
  kk_ssize_t n_10003 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
  kk_ssize_t i = (KK_IZ(0)); /*ssize_t*/;
  kk_std_core_vector__lift_forz_1011(kk_std_core_vector_new_foreach_fun72(f, v, _ctx), n_10003, i, _ctx); return kk_Unit;
}
 
// Invoke a function `f` for each element in a vector `v`


// lift anonymous function
struct kk_std_core_vector_foreach_indexed_fun73__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_vector_t v;
};
static kk_unit_t kk_std_core_vector_foreach_indexed_fun73(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_foreach_indexed_fun73(kk_function_t f, kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_core_vector_foreach_indexed_fun73__t* _self = kk_function_alloc_as(struct kk_std_core_vector_foreach_indexed_fun73__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_foreach_indexed_fun73, kk_context());
  _self->f = f;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_core_vector_foreach_indexed_fun73(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_vector_foreach_indexed_fun73__t* _self = kk_function_as(struct kk_std_core_vector_foreach_indexed_fun73__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (int, 705) -> 706 () */
  kk_vector_t v = _self->v; /* vector<705> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_box_t x_10017;
  kk_box_t _brw_x33 = kk_vector_at_borrow(v,i_0,kk_context()); /*3*/;
  kk_vector_drop(v, _ctx);
  x_10017 = _brw_x33; /*705*/
  kk_integer_t _x_x74 = kk_integer_from_ssize_t(i_0,kk_context()); /*int*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_box_t, kk_context_t*), f, (f, _x_x74, x_10017, _ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_std_core_vector_foreach_indexed(kk_vector_t v, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (v : vector<a>, f : (int, a) -> e ()) -> e () */ 
  kk_ssize_t n_10003 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
  kk_ssize_t i = (KK_IZ(0)); /*ssize_t*/;
  kk_std_core_vector__lift_forz_1011(kk_std_core_vector_new_foreach_indexed_fun73(f, v, _ctx), n_10003, i, _ctx); return kk_Unit;
}
 
// monadic lift

kk_std_core_types__maybe kk_std_core_vector__mlift_lift_for_whilez_1012_10048(kk_function_t action, kk_ssize_t i, kk_ssize_t n, kk_std_core_types__maybe _y_x10035, kk_context_t* _ctx) { /* forall<a,e> (action : (ssize_t) -> e maybe<a>, i : ssize_t, n : ssize_t, maybe<a>) -> e maybe<a> */ 
  if (kk_std_core_types__is_Nothing(_y_x10035, _ctx)) {
    kk_ssize_t i_0_10005 = kk_std_core_vector_ssize__t_fs_incr(i, _ctx); /*ssize_t*/;
    return kk_std_core_vector__lift_for_whilez_1012(action, n, i_0_10005, _ctx);
  }
  {
    kk_box_t x = _y_x10035._cons.Just.value;
    kk_function_drop(action, _ctx);
    return kk_std_core_types__new_Just(x, _ctx);
  }
}
 
// lifted local: for-whilez, rep


// lift anonymous function
struct kk_std_core_vector__lift_for_whilez_1012_fun77__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  kk_ssize_t i_0;
  kk_ssize_t n_0;
};
static kk_box_t kk_std_core_vector__lift_for_whilez_1012_fun77(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector__new_lift_for_whilez_1012_fun77(kk_function_t action_0, kk_ssize_t i_0, kk_ssize_t n_0, kk_context_t* _ctx) {
  struct kk_std_core_vector__lift_for_whilez_1012_fun77__t* _self = kk_function_alloc_as(struct kk_std_core_vector__lift_for_whilez_1012_fun77__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector__lift_for_whilez_1012_fun77, kk_context());
  _self->action_0 = action_0;
  _self->i_0 = i_0;
  _self->n_0 = n_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_vector__lift_for_whilez_1012_fun77(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx) {
  struct kk_std_core_vector__lift_for_whilez_1012_fun77__t* _self = kk_function_as(struct kk_std_core_vector__lift_for_whilez_1012_fun77__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (ssize_t) -> 780 maybe<779> */
  kk_ssize_t i_0 = _self->i_0; /* ssize_t */
  kk_ssize_t n_0 = _self->n_0; /* ssize_t */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_skip_dup(i_0, _ctx);kk_skip_dup(n_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10035_0_17 = kk_std_core_types__maybe_unbox(_b_x15, KK_OWNED, _ctx); /*maybe<779>*/;
  kk_std_core_types__maybe _x_x78 = kk_std_core_vector__mlift_lift_for_whilez_1012_10048(action_0, i_0, n_0, _y_x10035_0_17, _ctx); /*maybe<779>*/
  return kk_std_core_types__maybe_box(_x_x78, _ctx);
}

kk_std_core_types__maybe kk_std_core_vector__lift_for_whilez_1012(kk_function_t action_0, kk_ssize_t n_0, kk_ssize_t i_0, kk_context_t* _ctx) { /* forall<a,e> (action : (ssize_t) -> e maybe<a>, n : ssize_t, i : ssize_t) -> e maybe<a> */ 
  kk__tailcall: ;
  bool _match_x31 = (i_0 < n_0); /*bool*/;
  if (_match_x31) {
    kk_std_core_types__maybe x_0_10064;
    kk_function_t _x_x75 = kk_function_dup(action_0, _ctx); /*(ssize_t) -> 780 maybe<779>*/
    x_0_10064 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_ssize_t, kk_context_t*), _x_x75, (_x_x75, i_0, _ctx), _ctx); /*maybe<779>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10064, _ctx);
      kk_box_t _x_x76 = kk_std_core_hnd_yield_extend(kk_std_core_vector__new_lift_for_whilez_1012_fun77(action_0, i_0, n_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__maybe_unbox(_x_x76, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Nothing(x_0_10064, _ctx)) {
      kk_ssize_t i_0_10005_0 = kk_std_core_vector_ssize__t_fs_incr(i_0, _ctx); /*ssize_t*/;
      { // tailcall
        i_0 = i_0_10005_0;
        goto kk__tailcall;
      }
    }
    {
      kk_box_t x_1 = x_0_10064._cons.Just.value;
      kk_function_drop(action_0, _ctx);
      return kk_std_core_types__new_Just(x_1, _ctx);
    }
  }
  {
    kk_function_drop(action_0, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// Invoke a function `f` for each element in a vector `v`.
// If `f` returns `Just`, the iteration is stopped early and the result is returned.


// lift anonymous function
struct kk_std_core_vector_foreach_while_fun79__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_vector_t v;
};
static kk_std_core_types__maybe kk_std_core_vector_foreach_while_fun79(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_foreach_while_fun79(kk_function_t f, kk_vector_t v, kk_context_t* _ctx) {
  struct kk_std_core_vector_foreach_while_fun79__t* _self = kk_function_alloc_as(struct kk_std_core_vector_foreach_while_fun79__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_foreach_while_fun79, kk_context());
  _self->f = f;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_core_vector_foreach_while_fun79(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_vector_foreach_while_fun79__t* _self = kk_function_as(struct kk_std_core_vector_foreach_while_fun79__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (831) -> 833 maybe<832> */
  kk_vector_t v = _self->v; /* vector<831> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_vector_dup(v, _ctx);}, {}, _ctx)
  kk_box_t _x_x80;
  kk_box_t _brw_x30 = kk_vector_at_borrow(v,i_0,kk_context()); /*3*/;
  kk_vector_drop(v, _ctx);
  _x_x80 = _brw_x30; /*3*/
  return kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_box_t, kk_context_t*), f, (f, _x_x80, _ctx), _ctx);
}

kk_std_core_types__maybe kk_std_core_vector_foreach_while(kk_vector_t v, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e> (v : vector<a>, f : (a) -> e maybe<b>) -> e maybe<b> */ 
  kk_ssize_t n_10006 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
  kk_ssize_t i = (KK_IZ(0)); /*ssize_t*/;
  return kk_std_core_vector__lift_for_whilez_1012(kk_std_core_vector_new_foreach_while_fun79(f, v, _ctx), n_10006, i, _ctx);
}
 
// Apply a function `f` to each element in a vector `v`


// lift anonymous function
struct kk_std_core_vector_map_fun85__t {
  struct kk_function_s _base;
  kk_function_t f;
  kk_vector_t v;
  kk_vector_t w;
};
static kk_unit_t kk_std_core_vector_map_fun85(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_map_fun85(kk_function_t f, kk_vector_t v, kk_vector_t w, kk_context_t* _ctx) {
  struct kk_std_core_vector_map_fun85__t* _self = kk_function_alloc_as(struct kk_std_core_vector_map_fun85__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_map_fun85, kk_context());
  _self->f = f;
  _self->v = v;
  _self->w = w;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_core_vector_map_fun87__t {
  struct kk_function_s _base;
  kk_vector_t w;
  kk_ssize_t i_0;
};
static kk_box_t kk_std_core_vector_map_fun87(kk_function_t _fself, kk_box_t _b_x19, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_map_fun87(kk_vector_t w, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_vector_map_fun87__t* _self = kk_function_alloc_as(struct kk_std_core_vector_map_fun87__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_map_fun87, kk_context());
  _self->w = w;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_vector_map_fun87(kk_function_t _fself, kk_box_t _b_x19, kk_context_t* _ctx) {
  struct kk_std_core_vector_map_fun87__t* _self = kk_function_as(struct kk_std_core_vector_map_fun87__t*, _fself, _ctx);
  kk_vector_t w = _self->w; /* vector<902> */
  kk_ssize_t i_0 = _self->i_0; /* ssize_t */
  kk_drop_match(_self, {kk_vector_dup(w, _ctx);kk_skip_dup(i_0, _ctx);}, {}, _ctx)
  kk_unit_t _x_x88 = kk_Unit;
  kk_vector_unsafe_assign(w,i_0,_b_x19,kk_context());
  return kk_unit_box(_x_x88);
}
static kk_unit_t kk_std_core_vector_map_fun85(kk_function_t _fself, kk_ssize_t i_0, kk_context_t* _ctx) {
  struct kk_std_core_vector_map_fun85__t* _self = kk_function_as(struct kk_std_core_vector_map_fun85__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (901) -> 903 902 */
  kk_vector_t v = _self->v; /* vector<901> */
  kk_vector_t w = _self->w; /* vector<902> */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);kk_vector_dup(v, _ctx);kk_vector_dup(w, _ctx);}, {}, _ctx)
  kk_box_t x_10019;
  kk_box_t _brw_x29 = kk_vector_at_borrow(v,i_0,kk_context()); /*3*/;
  kk_vector_drop(v, _ctx);
  x_10019 = _brw_x29; /*901*/
  kk_box_t x_0_10070 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, x_10019, _ctx), _ctx); /*902*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_0_10070, _ctx);
    kk_box_t _x_x86 = kk_std_core_hnd_yield_extend(kk_std_core_vector_new_map_fun87(w, i_0, _ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x86); return kk_Unit;
  }
  {
    kk_vector_unsafe_assign(w,i_0,x_0_10070,kk_context()); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_core_vector_map_fun90__t {
  struct kk_function_s _base;
  kk_vector_t w;
};
static kk_box_t kk_std_core_vector_map_fun90(kk_function_t _fself, kk_box_t _b_x23, kk_context_t* _ctx);
static kk_function_t kk_std_core_vector_new_map_fun90(kk_vector_t w, kk_context_t* _ctx) {
  struct kk_std_core_vector_map_fun90__t* _self = kk_function_alloc_as(struct kk_std_core_vector_map_fun90__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_vector_map_fun90, kk_context());
  _self->w = w;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_vector_map_fun90(kk_function_t _fself, kk_box_t _b_x23, kk_context_t* _ctx) {
  struct kk_std_core_vector_map_fun90__t* _self = kk_function_as(struct kk_std_core_vector_map_fun90__t*, _fself, _ctx);
  kk_vector_t w = _self->w; /* vector<902> */
  kk_drop_match(_self, {kk_vector_dup(w, _ctx);}, {}, _ctx)
  kk_unit_t wild___25 = kk_Unit;
  kk_unit_unbox(_b_x23);
  return kk_vector_box(w, _ctx);
}

kk_vector_t kk_std_core_vector_map(kk_vector_t v, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e> (v : vector<a>, f : (a) -> e b) -> e vector<b> */ 
  kk_vector_t w;
  kk_ssize_t _x_x81;
  kk_integer_t _x_x82;
  kk_ssize_t _x_x83 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/
  _x_x82 = kk_integer_from_ssize_t(_x_x83,kk_context()); /*int*/
  _x_x81 = kk_std_core_int_ssize__t(_x_x82, _ctx); /*ssize_t*/
  w = kk_vector_alloc(_x_x81,kk_box_null(),kk_context()); /*vector<902>*/
  kk_ssize_t n_10003 = kk_vector_len_borrow(v,kk_context()); /*ssize_t*/;
  kk_ssize_t i = (KK_IZ(0)); /*ssize_t*/;
  kk_unit_t x_10067 = kk_Unit;
  kk_function_t _x_x84;
  kk_vector_dup(w, _ctx);
  _x_x84 = kk_std_core_vector_new_map_fun85(f, v, w, _ctx); /*(i@0 : ssize_t) -> 903 ()*/
  kk_std_core_vector__lift_forz_1011(_x_x84, n_10003, i, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x89 = kk_std_core_hnd_yield_extend(kk_std_core_vector_new_map_fun90(w, _ctx), _ctx); /*2419*/
    return kk_vector_unbox(_x_x89, _ctx);
  }
  {
    return w;
  }
}
 
// Convert a vector to a list with an optional tail.

kk_std_core_types__list kk_std_core_vector_vlist(kk_vector_t v, kk_std_core_types__optional tail, kk_context_t* _ctx) { /* forall<a> (v : vector<a>, tail : ? (list<a>)) -> list<a> */ 
  kk_std_core_types__list _x_x91;
  if (kk_std_core_types__is_Optional(tail, _ctx)) {
    kk_box_t _box_x26 = tail._cons._Optional.value;
    kk_std_core_types__list _uniq_tail_919 = kk_std_core_types__list_unbox(_box_x26, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_tail_919, _ctx);
    kk_std_core_types__optional_drop(tail, _ctx);
    _x_x91 = _uniq_tail_919; /*list<935>*/
  }
  else {
    kk_std_core_types__optional_drop(tail, _ctx);
    _x_x91 = kk_std_core_types__new_Nil(_ctx); /*list<935>*/
  }
  return kk_vector_to_list(v,_x_x91,kk_context());
}

kk_vector_t kk_std_core_vector_unvlist(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a> (xs : list<a>) -> vector<a> */ 
  return kk_list_to_vector(xs,kk_context());
}

bool kk_std_core_vector_ssize__t_fs_is_zero(kk_ssize_t i, kk_context_t* _ctx) { /* (i : ssize_t) -> bool */ 
  return (i == 0);
}

// initialization
void kk_std_core_vector__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_undiv__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_int__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_core_vector__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_int__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_undiv__done(_ctx);
  kk_std_core_types__done(_ctx);
}
