// Koka generated module: std/core/list, koka version: 3.2.3, platform: 64-bit
#include "std_core_list.h"
 
// Return the head of list if the list is not empty.

kk_std_core_types__maybe kk_std_core_list_maybe_fs_head(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a> (xs : list<a>) -> maybe<a> */ 
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1275 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1275->head;
    kk_std_core_types__list _pat_0 = _con_x1275->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    return kk_std_core_types__new_Just(x, _ctx);
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// Return the head of list with a default value in case the list is empty.

kk_box_t kk_std_core_list_head(kk_std_core_types__list xs, kk_box_t kkloc_default, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, default : a) -> a */ 
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1276 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1276->head;
    kk_std_core_types__list _pat_0 = _con_x1276->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_drop(kkloc_default, _ctx);
    return x;
  }
  {
    return kkloc_default;
  }
}
 
// Return the tail of list. Returns the empty list if `xs` is empty.

kk_std_core_types__list kk_std_core_list_tail(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a> (xs : list<a>) -> list<a> */ 
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1277 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _pat_0 = _con_x1277->head;
    kk_std_core_types__list xx = _con_x1277->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_box_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    return xx;
  }
  {
    return kk_std_core_types__new_Nil(_ctx);
  }
}
 
// lifted local: length, len

kk_integer_t kk_std_core_list__lift_length_6003(kk_std_core_types__list ys, kk_integer_t acc, kk_context_t* _ctx) { /* forall<a> (ys : list<a>, acc : int) -> int */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1278 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t _pat_0 = _con_x1278->head;
    kk_std_core_types__list yy = _con_x1278->tail;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      kk_box_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(ys, _ctx);
    }
    else {
      kk_std_core_types__list_dup(yy, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    { // tailcall
      kk_integer_t _x_x1279 = kk_integer_add_small_const(acc, 1, _ctx); /*int*/
      ys = yy;
      acc = _x_x1279;
      goto kk__tailcall;
    }
  }
  {
    return acc;
  }
}
 
// monadic lift

bool kk_std_core_list__lp__at_mlift_x_10283_eq__eq__rp_(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_std_core_types__list xx, kk_std_core_types__list yy, bool _y_x10104, kk_context_t* _ctx) { /* forall<a,e> (?(==) : (a, a) -> e bool, xx : list<a>, yy : list<a>, bool) -> e bool */ 
  if (_y_x10104) {
    return kk_std_core_list__lp__eq__eq__rp_(xx, yy, _implicit_fs__lp__eq__eq__rp_, _ctx);
  }
  {
    kk_std_core_types__list_drop(yy, _ctx);
    kk_std_core_types__list_drop(xx, _ctx);
    kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
    return false;
  }
}
 
// Element-wise list equality


// lift anonymous function
struct kk_std_core_list__lp__at_x_fun1284__t_eq__eq__rp_ {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_;
  kk_std_core_types__list xx_0;
  kk_std_core_types__list yy_0;
};
static kk_box_t kk_std_core_list__lp__at_x_fun1284_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__lp__at_new_x_fun1284_eq__eq__rp_(kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_std_core_types__list xx_0, kk_std_core_types__list yy_0, kk_context_t* _ctx) {
  struct kk_std_core_list__lp__at_x_fun1284__t_eq__eq__rp_* _self = kk_function_alloc_as(struct kk_std_core_list__lp__at_x_fun1284__t_eq__eq__rp_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__lp__at_x_fun1284_eq__eq__rp_, kk_context());
  _self->_implicit_fs__lp__at_x_0_eq__eq__rp_ = _implicit_fs__lp__at_x_0_eq__eq__rp_;
  _self->xx_0 = xx_0;
  _self->yy_0 = yy_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__lp__at_x_fun1284_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx) {
  struct kk_std_core_list__lp__at_x_fun1284__t_eq__eq__rp_* _self = kk_function_as(struct kk_std_core_list__lp__at_x_fun1284__t_eq__eq__rp_*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_ = _self->_implicit_fs__lp__at_x_0_eq__eq__rp_; /* (813, 813) -> 814 bool */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<813> */
  kk_std_core_types__list yy_0 = _self->yy_0; /* list<813> */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);kk_std_core_types__list_dup(yy_0, _ctx);}, {}, _ctx)
  bool _y_x10104_0_3 = kk_bool_unbox(_b_x1); /*bool*/;
  bool _x_x1285 = kk_std_core_list__lp__at_mlift_x_10283_eq__eq__rp_(_implicit_fs__lp__at_x_0_eq__eq__rp_, xx_0, yy_0, _y_x10104_0_3, _ctx); /*bool*/
  return kk_bool_box(_x_x1285);
}

bool kk_std_core_list__lp__eq__eq__rp_(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t _implicit_fs__lp__at_x_0_eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, ys : list<a>, ?(==) : (a, a) -> e bool) -> e bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1280 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1280->head;
    kk_std_core_types__list xx_0 = _con_x1280->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    if (kk_std_core_types__is_Nil(ys, _ctx)) {
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_box_drop(x, _ctx);
      kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
      return false;
    }
    {
      struct kk_std_core_types_Cons* _con_x1281 = kk_std_core_types__as_Cons(ys, _ctx);
      kk_box_t y = _con_x1281->head;
      kk_std_core_types__list yy_0 = _con_x1281->tail;
      if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
        kk_datatype_ptr_free(ys, _ctx);
      }
      else {
        kk_box_dup(y, _ctx);
        kk_std_core_types__list_dup(yy_0, _ctx);
        kk_datatype_ptr_decref(ys, _ctx);
      }
      bool x_0_10317;
      kk_function_t _x_x1282 = kk_function_dup(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx); /*(813, 813) -> 814 bool*/
      x_0_10317 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1282, (_x_x1282, x, y, _ctx), _ctx); /*bool*/
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x1283 = kk_std_core_hnd_yield_extend(kk_std_core_list__lp__at_new_x_fun1284_eq__eq__rp_(_implicit_fs__lp__at_x_0_eq__eq__rp_, xx_0, yy_0, _ctx), _ctx); /*2419*/
        return kk_bool_unbox(_x_x1283);
      }
      if (x_0_10317) { // tailcall
                       xs = xx_0;
                       ys = yy_0;
                       goto kk__tailcall;
      }
      {
        kk_std_core_types__list_drop(yy_0, _ctx);
        kk_std_core_types__list_drop(xx_0, _ctx);
        kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
        return false;
      }
    }
  }
  {
    kk_function_drop(_implicit_fs__lp__at_x_0_eq__eq__rp_, _ctx);
    if (kk_std_core_types__is_Nil(ys, _ctx)) {
      return true;
    }
    {
      struct kk_std_core_types_Cons* _con_x1286 = kk_std_core_types__as_Cons(ys, _ctx);
      kk_box_t _pat_7 = _con_x1286->head;
      kk_std_core_types__list _pat_8 = _con_x1286->tail;
      if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
        kk_std_core_types__list_drop(_pat_8, _ctx);
        kk_box_drop(_pat_7, _ctx);
        kk_datatype_ptr_free(ys, _ctx);
      }
      else {
        kk_datatype_ptr_decref(ys, _ctx);
      }
      return false;
    }
  }
}
 
// monadic lift

kk_std_core_types__order kk_std_core_list__mlift_cmp_10284(kk_function_t _implicit_fs_cmp, kk_std_core_types__list xx, kk_std_core_types__list yy, kk_std_core_types__order _y_x10109, kk_context_t* _ctx) { /* forall<a,e> (?cmp : (a, a) -> e order, xx : list<a>, yy : list<a>, order) -> e order */ 
  if (kk_std_core_types__is_Eq(_y_x10109, _ctx)) {
    return kk_std_core_list_cmp(xx, yy, _implicit_fs_cmp, _ctx);
  }
  {
    kk_std_core_types__list_drop(yy, _ctx);
    kk_std_core_types__list_drop(xx, _ctx);
    kk_function_drop(_implicit_fs_cmp, _ctx);
    return _y_x10109;
  }
}
 
// Order on lists


// lift anonymous function
struct kk_std_core_list_cmp_fun1291__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_cmp_0;
  kk_std_core_types__list xx_0;
  kk_std_core_types__list yy_0;
};
static kk_box_t kk_std_core_list_cmp_fun1291(kk_function_t _fself, kk_box_t _b_x5, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_cmp_fun1291(kk_function_t _implicit_fs_cmp_0, kk_std_core_types__list xx_0, kk_std_core_types__list yy_0, kk_context_t* _ctx) {
  struct kk_std_core_list_cmp_fun1291__t* _self = kk_function_alloc_as(struct kk_std_core_list_cmp_fun1291__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_cmp_fun1291, kk_context());
  _self->_implicit_fs_cmp_0 = _implicit_fs_cmp_0;
  _self->xx_0 = xx_0;
  _self->yy_0 = yy_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_cmp_fun1291(kk_function_t _fself, kk_box_t _b_x5, kk_context_t* _ctx) {
  struct kk_std_core_list_cmp_fun1291__t* _self = kk_function_as(struct kk_std_core_list_cmp_fun1291__t*, _fself, _ctx);
  kk_function_t _implicit_fs_cmp_0 = _self->_implicit_fs_cmp_0; /* (909, 909) -> 910 order */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<909> */
  kk_std_core_types__list yy_0 = _self->yy_0; /* list<909> */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_cmp_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);kk_std_core_types__list_dup(yy_0, _ctx);}, {}, _ctx)
  kk_std_core_types__order _y_x10109_0_7 = kk_std_core_types__order_unbox(_b_x5, KK_OWNED, _ctx); /*order*/;
  kk_std_core_types__order _x_x1292 = kk_std_core_list__mlift_cmp_10284(_implicit_fs_cmp_0, xx_0, yy_0, _y_x10109_0_7, _ctx); /*order*/
  return kk_std_core_types__order_box(_x_x1292, _ctx);
}

kk_std_core_types__order kk_std_core_list_cmp(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t _implicit_fs_cmp_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, ys : list<a>, ?cmp : (a, a) -> e order) -> e order */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1287 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1287->head;
    kk_std_core_types__list xx_0 = _con_x1287->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    if (kk_std_core_types__is_Nil(ys, _ctx)) {
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_box_drop(x, _ctx);
      kk_function_drop(_implicit_fs_cmp_0, _ctx);
      return kk_std_core_types__new_Gt(_ctx);
    }
    {
      struct kk_std_core_types_Cons* _con_x1288 = kk_std_core_types__as_Cons(ys, _ctx);
      kk_box_t y = _con_x1288->head;
      kk_std_core_types__list yy_0 = _con_x1288->tail;
      if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
        kk_datatype_ptr_free(ys, _ctx);
      }
      else {
        kk_box_dup(y, _ctx);
        kk_std_core_types__list_dup(yy_0, _ctx);
        kk_datatype_ptr_decref(ys, _ctx);
      }
      kk_std_core_types__order x_0_10320;
      kk_function_t _x_x1289 = kk_function_dup(_implicit_fs_cmp_0, _ctx); /*(909, 909) -> 910 order*/
      x_0_10320 = kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1289, (_x_x1289, x, y, _ctx), _ctx); /*order*/
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x1290 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_cmp_fun1291(_implicit_fs_cmp_0, xx_0, yy_0, _ctx), _ctx); /*2419*/
        return kk_std_core_types__order_unbox(_x_x1290, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Eq(x_0_10320, _ctx)) { // tailcall
                                                       xs = xx_0;
                                                       ys = yy_0;
                                                       goto kk__tailcall;
      }
      {
        kk_std_core_types__list_drop(yy_0, _ctx);
        kk_std_core_types__list_drop(xx_0, _ctx);
        kk_function_drop(_implicit_fs_cmp_0, _ctx);
        return x_0_10320;
      }
    }
  }
  {
    kk_function_drop(_implicit_fs_cmp_0, _ctx);
    if (kk_std_core_types__is_Nil(ys, _ctx)) {
      return kk_std_core_types__new_Eq(_ctx);
    }
    {
      struct kk_std_core_types_Cons* _con_x1293 = kk_std_core_types__as_Cons(ys, _ctx);
      kk_box_t _pat_6 = _con_x1293->head;
      kk_std_core_types__list _pat_7 = _con_x1293->tail;
      if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
        kk_std_core_types__list_drop(_pat_7, _ctx);
        kk_box_drop(_pat_6, _ctx);
        kk_datatype_ptr_free(ys, _ctx);
      }
      else {
        kk_datatype_ptr_decref(ys, _ctx);
      }
      return kk_std_core_types__new_Lt(_ctx);
    }
  }
}
 
// Take the first `n` elements of a list (or fewer if the list is shorter than `n`)

kk_std_core_types__list kk_std_core_list__trmc_take(kk_std_core_types__list xs, kk_integer_t n, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int, ctx<list<a>>) -> list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1294 = kk_std_core_types__as_Cons(xs, _ctx);
    if (kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context())) {
      kk_box_t x = _con_x1294->head;
      kk_std_core_types__list xx = _con_x1294->tail;
      kk_reuse_t _ru_x1208 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        _ru_x1208 = (kk_datatype_ptr_reuse(xs, _ctx));
      }
      else {
        kk_box_dup(x, _ctx);
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_std_core_types__list _trmc_x10048 = kk_datatype_null(); /*list<971>*/;
      kk_std_core_types__list _trmc_x10049 = kk_std_core_types__new_Cons(_ru_x1208, 0, x, _trmc_x10048, _ctx); /*list<971>*/;
      kk_field_addr_t _b_x13_18 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10049, _ctx)->tail, _ctx); /*@field-addr<list<971>>*/;
      { // tailcall
        kk_integer_t _x_x1295 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
        kk_std_core_types__cctx _x_x1296 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10049, _ctx)),_b_x13_18,kk_context()); /*ctx<0>*/
        xs = xx;
        n = _x_x1295;
        _acc = _x_x1296;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_std_core_types__list_drop(xs, _ctx);
    kk_integer_drop(n, _ctx);
    kk_box_t _x_x1297 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1297, KK_OWNED, _ctx);
  }
}
 
// Take the first `n` elements of a list (or fewer if the list is shorter than `n`)

kk_std_core_types__list kk_std_core_list_take(kk_std_core_types__list xs_0, kk_integer_t n_0, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> list<a> */ 
  kk_std_core_types__cctx _x_x1298 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_take(xs_0, n_0, _x_x1298, _ctx);
}
 
// Drop the first `n` elements of a list (or fewer if the list is shorter than `n`)

kk_std_core_types__list kk_std_core_list_drop(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1299 = kk_std_core_types__as_Cons(xs, _ctx);
    if (kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context())) {
      kk_box_t _pat_0 = _con_x1299->head;
      kk_std_core_types__list xx = _con_x1299->tail;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        kk_box_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(xs, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      { // tailcall
        kk_integer_t _x_x1300 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
        xs = xx;
        n = _x_x1300;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_integer_drop(n, _ctx);
    return xs;
  }
}

kk_std_core_types__list kk_std_core_list_reverse_acc(kk_std_core_types__list acc, kk_std_core_types__list ys, kk_context_t* _ctx) { /* forall<a> (acc : list<a>, ys : list<a>) -> list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1301 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t x = _con_x1301->head;
    kk_std_core_types__list xx = _con_x1301->tail;
    kk_reuse_t _ru_x1210 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      _ru_x1210 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x1302 = kk_std_core_types__new_Cons(_ru_x1210, 0, x, acc, _ctx); /*list<79>*/
      acc = _x_x1302;
      ys = xx;
      goto kk__tailcall;
    }
  }
  {
    return acc;
  }
}
 
// Append two lists.

kk_std_core_types__list kk_std_core_list__trmc_append(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, ys : list<a>, ctx<list<a>>) -> list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1303 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1303->head;
    kk_std_core_types__list xx = _con_x1303->tail;
    kk_reuse_t _ru_x1211 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1211 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__list _trmc_x10050 = kk_datatype_null(); /*list<1132>*/;
    kk_std_core_types__list _trmc_x10051 = kk_std_core_types__new_Cons(_ru_x1211, 0, x, _trmc_x10050, _ctx); /*list<1132>*/;
    kk_field_addr_t _b_x29_34 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10051, _ctx)->tail, _ctx); /*@field-addr<list<1132>>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x1304 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10051, _ctx)),_b_x29_34,kk_context()); /*ctx<0>*/
      xs = xx;
      _acc = _x_x1304;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x1305 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(ys, _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1305, KK_OWNED, _ctx);
  }
}
 
// Append two lists.

kk_std_core_types__list kk_std_core_list_append(kk_std_core_types__list xs_0, kk_std_core_types__list ys_0, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, ys : list<a>) -> list<a> */ 
  kk_std_core_types__cctx _x_x1306 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_append(xs_0, ys_0, _x_x1306, _ctx);
}
 
// monadic lift

kk_box_t kk_std_core_list__mlift_foldl_10285(kk_function_t f, kk_std_core_types__list xx, kk_box_t _y_x10114, kk_context_t* _ctx) { /* forall<a,b,e> (f : (b, a) -> e b, xx : list<a>, b) -> e b */ 
  return kk_std_core_list_foldl(xx, _y_x10114, f, _ctx);
}
 
// Fold a list from the left, i.e. `foldl([1,2],0,(+)) == (0+1)+2`
// Since `foldl` is tail recursive, it is preferred over `foldr` when using an associative function `f`


// lift anonymous function
struct kk_std_core_list_foldl_fun1310__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list_foldl_fun1310(kk_function_t _fself, kk_box_t _y_x10114_0, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_foldl_fun1310(kk_function_t f_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list_foldl_fun1310__t* _self = kk_function_alloc_as(struct kk_std_core_list_foldl_fun1310__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_foldl_fun1310, kk_context());
  _self->f_0 = f_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_foldl_fun1310(kk_function_t _fself, kk_box_t _y_x10114_0, kk_context_t* _ctx) {
  struct kk_std_core_list_foldl_fun1310__t* _self = kk_function_as(struct kk_std_core_list_foldl_fun1310__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (1203, 1202) -> 1204 1203 */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<1202> */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  return kk_std_core_list__mlift_foldl_10285(f_0, xx_0, _y_x10114_0, _ctx);
}

kk_box_t kk_std_core_list_foldl(kk_std_core_types__list xs, kk_box_t z, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, z : b, f : (b, a) -> e b) -> e b */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1308 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1308->head;
    kk_std_core_types__list xx_0 = _con_x1308->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_0_10325;
    kk_function_t _x_x1309 = kk_function_dup(f_0, _ctx); /*(1203, 1202) -> 1204 1203*/
    x_0_10325 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1309, (_x_x1309, z, x, _ctx), _ctx); /*1203*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10325, _ctx);
      return kk_std_core_hnd_yield_extend(kk_std_core_list_new_foldl_fun1310(f_0, xx_0, _ctx), _ctx);
    }
    { // tailcall
      xs = xx_0;
      z = x_0_10325;
      goto kk__tailcall;
    }
  }
  {
    kk_function_drop(f_0, _ctx);
    return z;
  }
}
extern kk_box_t kk_std_core_list_foldr_fun1312(kk_function_t _fself, kk_box_t x, kk_box_t y, kk_context_t* _ctx) {
  struct kk_std_core_list_foldr_fun1312__t* _self = kk_function_as(struct kk_std_core_list_foldr_fun1312__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (1255, 1256) -> 1257 1256 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, y, x, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_core_list_foldl1_fun1315__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_list_foldl1_fun1315(kk_function_t _fself, kk_box_t _b_x44, kk_box_t _b_x45, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_foldl1_fun1315(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_list_foldl1_fun1315, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_list_foldl1_fun1315(kk_function_t _fself, kk_box_t _b_x44, kk_box_t _b_x45, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1316 = kk_string_unbox(_b_x44); /*string*/
  kk_std_core_types__optional _x_x1317 = kk_std_core_types__optional_unbox(_b_x45, KK_OWNED, _ctx); /*? exception-info*/
  return kk_std_core_exn_throw(_x_x1316, _x_x1317, _ctx);
}

kk_box_t kk_std_core_list_foldl1(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, f : (a, a) -> <exn|e> a) -> <exn|e> a */ 
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1313 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1313->head;
    kk_std_core_types__list xx = _con_x1313->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    return kk_std_core_list_foldl(xx, x, f, _ctx);
  }
  {
    kk_function_drop(f, _ctx);
    kk_ssize_t _b_x40_46;
    kk_std_core_hnd__htag _x_x1314 = kk_std_core_hnd__htag_dup(kk_std_core_exn_exn_fs__tag, _ctx); /*hnd/htag<exn>*/
    _b_x40_46 = kk_std_core_hnd__evv_index(_x_x1314, _ctx); /*hnd/ev-index*/
    kk_box_t _x_x1318;
    kk_string_t _x_x1319;
    kk_define_string_literal(static, _s_x1320, 33, "unexpected Nil in std/core/foldl1", _ctx)
    _x_x1319 = kk_string_dup(_s_x1320, _ctx); /*string*/
    _x_x1318 = kk_string_box(_x_x1319); /*10685*/
    return kk_std_core_hnd__open_at2(_b_x40_46, kk_std_core_list_new_foldl1_fun1315(_ctx), _x_x1318, kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_std_core_list_foldr1_fun1323__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_list_foldr1_fun1323(kk_function_t _fself, kk_box_t _b_x54, kk_box_t _b_x55, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_foldr1_fun1323(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_list_foldr1_fun1323, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_list_foldr1_fun1323(kk_function_t _fself, kk_box_t _b_x54, kk_box_t _b_x55, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1324 = kk_string_unbox(_b_x54); /*string*/
  kk_std_core_types__optional _x_x1325 = kk_std_core_types__optional_unbox(_b_x55, KK_OWNED, _ctx); /*? exception-info*/
  return kk_std_core_exn_throw(_x_x1324, _x_x1325, _ctx);
}

kk_box_t kk_std_core_list_foldr1(kk_std_core_types__list xs, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, f : (a, a) -> <exn|e> a) -> <exn|e> a */ 
  kk_std_core_types__list xs_0_10010 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), xs, _ctx); /*list<1349>*/;
  if (kk_std_core_types__is_Cons(xs_0_10010, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1321 = kk_std_core_types__as_Cons(xs_0_10010, _ctx);
    kk_box_t x = _con_x1321->head;
    kk_std_core_types__list xx = _con_x1321->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs_0_10010, _ctx)) {
      kk_datatype_ptr_free(xs_0_10010, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs_0_10010, _ctx);
    }
    return kk_std_core_list_foldl(xx, x, f, _ctx);
  }
  {
    kk_function_drop(f, _ctx);
    kk_ssize_t _b_x50_56;
    kk_std_core_hnd__htag _x_x1322 = kk_std_core_hnd__htag_dup(kk_std_core_exn_exn_fs__tag, _ctx); /*hnd/htag<exn>*/
    _b_x50_56 = kk_std_core_hnd__evv_index(_x_x1322, _ctx); /*hnd/ev-index*/
    kk_box_t _x_x1326;
    kk_string_t _x_x1327;
    kk_define_string_literal(static, _s_x1328, 33, "unexpected Nil in std/core/foldl1", _ctx)
    _x_x1327 = kk_string_dup(_s_x1328, _ctx); /*string*/
    _x_x1326 = kk_string_box(_x_x1327); /*10685*/
    return kk_std_core_hnd__open_at2(_b_x50_56, kk_std_core_list_new_foldr1_fun1323(_ctx), _x_x1326, kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx);
  }
}
 
// split a list at position `n`

kk_std_core_types__tuple2 kk_std_core_list_split(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> (list<a>, list<a>) */ 
  kk_std_core_types__list _b_x60_62;
  kk_std_core_types__list _x_x1329 = kk_std_core_types__list_dup(xs, _ctx); /*list<1392>*/
  kk_integer_t _x_x1330 = kk_integer_dup(n, _ctx); /*int*/
  kk_std_core_types__cctx _x_x1331 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  _b_x60_62 = kk_std_core_list__trmc_take(_x_x1329, _x_x1330, _x_x1331, _ctx); /*list<1392>*/
  kk_std_core_types__list _b_x61_63 = kk_std_core_list_drop(xs, n, _ctx); /*list<1392>*/;
  return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x60_62, _ctx), kk_std_core_types__list_box(_b_x61_63, _ctx), _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_drop_while_10286(kk_function_t predicate, kk_std_core_types__list xs, kk_std_core_types__list xx, bool _y_x10125, kk_context_t* _ctx) { /* forall<a,e> (predicate : (a) -> e bool, xs : list<a>, xx : list<a>, bool) -> e list<a> */ 
  if (_y_x10125) {
    kk_std_core_types__list_drop(xs, _ctx);
    return kk_std_core_list_drop_while(xx, predicate, _ctx);
  }
  {
    kk_std_core_types__list_drop(xx, _ctx);
    kk_function_drop(predicate, _ctx);
    return xs;
  }
}
 
// Drop all initial elements that satisfy `predicate`


// lift anonymous function
struct kk_std_core_list_drop_while_fun1335__t {
  struct kk_function_s _base;
  kk_function_t predicate_0;
  kk_std_core_types__list xs_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list_drop_while_fun1335(kk_function_t _fself, kk_box_t _b_x65, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_drop_while_fun1335(kk_function_t predicate_0, kk_std_core_types__list xs_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list_drop_while_fun1335__t* _self = kk_function_alloc_as(struct kk_std_core_list_drop_while_fun1335__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_drop_while_fun1335, kk_context());
  _self->predicate_0 = predicate_0;
  _self->xs_0 = xs_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_drop_while_fun1335(kk_function_t _fself, kk_box_t _b_x65, kk_context_t* _ctx) {
  struct kk_std_core_list_drop_while_fun1335__t* _self = kk_function_as(struct kk_std_core_list_drop_while_fun1335__t*, _fself, _ctx);
  kk_function_t predicate_0 = _self->predicate_0; /* (1438) -> 1439 bool */
  kk_std_core_types__list xs_0 = _self->xs_0; /* list<1438> */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<1438> */
  kk_drop_match(_self, {kk_function_dup(predicate_0, _ctx);kk_std_core_types__list_dup(xs_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  bool _y_x10125_0_67 = kk_bool_unbox(_b_x65); /*bool*/;
  kk_std_core_types__list _x_x1336 = kk_std_core_list__mlift_drop_while_10286(predicate_0, xs_0, xx_0, _y_x10125_0_67, _ctx); /*list<1438>*/
  return kk_std_core_types__list_box(_x_x1336, _ctx);
}

kk_std_core_types__list kk_std_core_list_drop_while(kk_std_core_types__list xs_0, kk_function_t predicate_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool) -> e list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs_0, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1332 = kk_std_core_types__as_Cons(xs_0, _ctx);
    kk_box_t x = _con_x1332->head;
    kk_std_core_types__list xx_0 = _con_x1332->tail;
    kk_box_dup(x, _ctx);
    kk_std_core_types__list_dup(xx_0, _ctx);
    bool x_0_10330;
    kk_function_t _x_x1333 = kk_function_dup(predicate_0, _ctx); /*(1438) -> 1439 bool*/
    x_0_10330 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x1333, (_x_x1333, x, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1334 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_drop_while_fun1335(predicate_0, xs_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1334, KK_OWNED, _ctx);
    }
    if (x_0_10330) {
      if kk_likely(kk_datatype_ptr_is_unique(xs_0, _ctx)) {
        kk_std_core_types__list_drop(xx_0, _ctx);
        kk_box_drop(x, _ctx);
        kk_datatype_ptr_free(xs_0, _ctx);
      }
      else {
        kk_datatype_ptr_decref(xs_0, _ctx);
      }
      { // tailcall
        xs_0 = xx_0;
        goto kk__tailcall;
      }
    }
    {
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_function_drop(predicate_0, _ctx);
      return xs_0;
    }
  }
  {
    kk_function_drop(predicate_0, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_filter_10287(kk_std_core_types__cctx _acc, kk_function_t pred, kk_box_t x, kk_std_core_types__list xx, bool _y_x10129, kk_context_t* _ctx) { /* forall<a,e> (ctx<list<a>>, pred : (a) -> e bool, x : a, xx : list<a>, bool) -> e list<a> */ 
  if (_y_x10129) {
    kk_std_core_types__list _trmc_x10052 = kk_datatype_null(); /*list<1504>*/;
    kk_std_core_types__list _trmc_x10053 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), x, _trmc_x10052, _ctx); /*list<1504>*/;
    kk_field_addr_t _b_x73_76 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10053, _ctx)->tail, _ctx); /*@field-addr<list<1504>>*/;
    kk_std_core_types__cctx _x_x1337 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10053, _ctx)),_b_x73_76,kk_context()); /*ctx<0>*/
    return kk_std_core_list__trmc_filter(xx, pred, _x_x1337, _ctx);
  }
  {
    kk_box_drop(x, _ctx);
    return kk_std_core_list__trmc_filter(xx, pred, _acc, _ctx);
  }
}
 
// Retain only those elements of a list that satisfy the given predicate `pred`.
// For example: `filter([1,2,3],odd?) == [1,3]`


// lift anonymous function
struct kk_std_core_list__trmc_filter_fun1342__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t pred_0;
  kk_box_t x_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list__trmc_filter_fun1342(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_filter_fun1342(kk_std_core_types__cctx _acc_0, kk_function_t pred_0, kk_box_t x_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_filter_fun1342__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_filter_fun1342__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_filter_fun1342, kk_context());
  _self->_acc_0 = _acc_0;
  _self->pred_0 = pred_0;
  _self->x_0 = x_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_filter_fun1342(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_filter_fun1342__t* _self = kk_function_as(struct kk_std_core_list__trmc_filter_fun1342__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<1504>> */
  kk_function_t pred_0 = _self->pred_0; /* (1504) -> 1505 bool */
  kk_box_t x_0 = _self->x_0; /* 1504 */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<1504> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(pred_0, _ctx);kk_box_dup(x_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  bool _y_x10129_0_99 = kk_bool_unbox(_b_x81); /*bool*/;
  kk_std_core_types__list _x_x1343 = kk_std_core_list__mlift_trmc_filter_10287(_acc_0, pred_0, x_0, xx_0, _y_x10129_0_99, _ctx); /*list<1504>*/
  return kk_std_core_types__list_box(_x_x1343, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_filter(kk_std_core_types__list xs, kk_function_t pred_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool, ctx<list<a>>) -> e list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1338 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x1338->head;
    kk_std_core_types__list xx_0 = _con_x1338->tail;
    kk_reuse_t _ru_x1216 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1216 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x_0, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool x_1_10333;
    kk_function_t _x_x1340 = kk_function_dup(pred_0, _ctx); /*(1504) -> 1505 bool*/
    kk_box_t _x_x1339 = kk_box_dup(x_0, _ctx); /*1504*/
    x_1_10333 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x1340, (_x_x1340, _x_x1339, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1216,kk_context());
      kk_box_t _x_x1341 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_trmc_filter_fun1342(_acc_0, pred_0, x_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1341, KK_OWNED, _ctx);
    }
    if (x_1_10333) {
      kk_std_core_types__list _trmc_x10052_0 = kk_datatype_null(); /*list<1504>*/;
      kk_std_core_types__list _trmc_x10053_0 = kk_std_core_types__new_Cons(_ru_x1216, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_0, _trmc_x10052_0, _ctx); /*list<1504>*/;
      kk_field_addr_t _b_x87_93 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10053_0, _ctx)->tail, _ctx); /*@field-addr<list<1504>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1344 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10053_0, _ctx)),_b_x87_93,kk_context()); /*ctx<0>*/
        xs = xx_0;
        _acc_0 = _x_x1344;
        goto kk__tailcall;
      }
    }
    {
      kk_reuse_drop(_ru_x1216,kk_context());
      kk_box_drop(x_0, _ctx);
      { // tailcall
        xs = xx_0;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_function_drop(pred_0, _ctx);
    kk_box_t _x_x1345 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1345, KK_OWNED, _ctx);
  }
}
 
// Retain only those elements of a list that satisfy the given predicate `pred`.
// For example: `filter([1,2,3],odd?) == [1,3]`

kk_std_core_types__list kk_std_core_list_filter(kk_std_core_types__list xs_0, kk_function_t pred_1, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e list<a> */ 
  kk_std_core_types__cctx _x_x1346 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_filter(xs_0, pred_1, _x_x1346, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_filter_map_10288(kk_std_core_types__cctx _acc, kk_function_t pred, kk_std_core_types__list xx, kk_std_core_types__maybe _y_x10135, kk_context_t* _ctx) { /* forall<a,b,e> (ctx<list<b>>, pred : (a) -> e maybe<b>, xx : list<a>, maybe<b>) -> e list<b> */ 
  if (kk_std_core_types__is_Nothing(_y_x10135, _ctx)) {
    return kk_std_core_list__trmc_filter_map(xx, pred, _acc, _ctx);
  }
  {
    kk_box_t y = _y_x10135._cons.Just.value;
    kk_std_core_types__list _trmc_x10054 = kk_datatype_null(); /*list<1588>*/;
    kk_std_core_types__list _trmc_x10055 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), y, _trmc_x10054, _ctx); /*list<1588>*/;
    kk_field_addr_t _b_x105_108 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10055, _ctx)->tail, _ctx); /*@field-addr<list<1588>>*/;
    kk_std_core_types__cctx _x_x1347 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10055, _ctx)),_b_x105_108,kk_context()); /*ctx<0>*/
    return kk_std_core_list__trmc_filter_map(xx, pred, _x_x1347, _ctx);
  }
}
 
// Retain only those elements of a list that satisfy the given predicate `pred`.
// For example: `filterMap([1,2,3],fn(i) { if i.odd? then Nothing else Just(i*i) }) == [4]`


// lift anonymous function
struct kk_std_core_list__trmc_filter_map_fun1352__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t pred_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list__trmc_filter_map_fun1352(kk_function_t _fself, kk_box_t _b_x115, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_filter_map_fun1352(kk_std_core_types__cctx _acc_0, kk_function_t pred_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_filter_map_fun1352__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_filter_map_fun1352__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_filter_map_fun1352, kk_context());
  _self->_acc_0 = _acc_0;
  _self->pred_0 = pred_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_filter_map_fun1352(kk_function_t _fself, kk_box_t _b_x115, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_filter_map_fun1352__t* _self = kk_function_as(struct kk_std_core_list__trmc_filter_map_fun1352__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<1588>> */
  kk_function_t pred_0 = _self->pred_0; /* (1587) -> 1589 maybe<1588> */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<1587> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(pred_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10135_0_131 = kk_std_core_types__maybe_unbox(_b_x115, KK_OWNED, _ctx); /*maybe<1588>*/;
  kk_std_core_types__list _x_x1353 = kk_std_core_list__mlift_trmc_filter_map_10288(_acc_0, pred_0, xx_0, _y_x10135_0_131, _ctx); /*list<1588>*/
  return kk_std_core_types__list_box(_x_x1353, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_filter_map(kk_std_core_types__list xs, kk_function_t pred_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, pred : (a) -> e maybe<b>, ctx<list<b>>) -> e list<b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(pred_0, _ctx);
    kk_box_t _x_x1348 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1348, KK_OWNED, _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x1349 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1349->head;
    kk_std_core_types__list xx_0 = _con_x1349->tail;
    kk_reuse_t _ru_x1217 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1217 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__maybe x_0_10336;
    kk_function_t _x_x1350 = kk_function_dup(pred_0, _ctx); /*(1587) -> 1589 maybe<1588>*/
    x_0_10336 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_box_t, kk_context_t*), _x_x1350, (_x_x1350, x, _ctx), _ctx); /*maybe<1588>*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1217,kk_context());
      kk_std_core_types__maybe_drop(x_0_10336, _ctx);
      kk_box_t _x_x1351 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_trmc_filter_map_fun1352(_acc_0, pred_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1351, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Nothing(x_0_10336, _ctx)) {
      kk_reuse_drop(_ru_x1217,kk_context());
      { // tailcall
        xs = xx_0;
        goto kk__tailcall;
      }
    }
    {
      kk_box_t y_0 = x_0_10336._cons.Just.value;
      kk_std_core_types__list _trmc_x10054_0 = kk_datatype_null(); /*list<1588>*/;
      kk_std_core_types__list _trmc_x10055_0 = kk_std_core_types__new_Cons(_ru_x1217, kk_field_index_of(struct kk_std_core_types_Cons, tail), y_0, _trmc_x10054_0, _ctx); /*list<1588>*/;
      kk_field_addr_t _b_x121_127 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10055_0, _ctx)->tail, _ctx); /*@field-addr<list<1588>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1354 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10055_0, _ctx)),_b_x121_127,kk_context()); /*ctx<0>*/
        xs = xx_0;
        _acc_0 = _x_x1354;
        goto kk__tailcall;
      }
    }
  }
}
 
// Retain only those elements of a list that satisfy the given predicate `pred`.
// For example: `filterMap([1,2,3],fn(i) { if i.odd? then Nothing else Just(i*i) }) == [4]`

kk_std_core_types__list kk_std_core_list_filter_map(kk_std_core_types__list xs_0, kk_function_t pred_1, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, pred : (a) -> e maybe<b>) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1355 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_filter_map(xs_0, pred_1, _x_x1355, _ctx);
}
 
// monadic lift

kk_std_core_types__maybe kk_std_core_list__mlift_foreach_while_10289(kk_function_t action, kk_std_core_types__list xx, kk_std_core_types__maybe _y_x10141, kk_context_t* _ctx) { /* forall<a,b,e> (action : (a) -> e maybe<b>, xx : list<a>, maybe<b>) -> e maybe<b> */ 
  if (kk_std_core_types__is_Nothing(_y_x10141, _ctx)) {
    return kk_std_core_list_foreach_while(xx, action, _ctx);
  }
  {
    kk_std_core_types__list_drop(xx, _ctx);
    kk_function_drop(action, _ctx);
    return _y_x10141;
  }
}
 
// Invoke `action` for each element of a list while `action` return `Nothing`


// lift anonymous function
struct kk_std_core_list_foreach_while_fun1359__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list_foreach_while_fun1359(kk_function_t _fself, kk_box_t _b_x133, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_foreach_while_fun1359(kk_function_t action_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list_foreach_while_fun1359__t* _self = kk_function_alloc_as(struct kk_std_core_list_foreach_while_fun1359__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_foreach_while_fun1359, kk_context());
  _self->action_0 = action_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_foreach_while_fun1359(kk_function_t _fself, kk_box_t _b_x133, kk_context_t* _ctx) {
  struct kk_std_core_list_foreach_while_fun1359__t* _self = kk_function_as(struct kk_std_core_list_foreach_while_fun1359__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (1661) -> 1663 maybe<1662> */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<1661> */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10141_0_135 = kk_std_core_types__maybe_unbox(_b_x133, KK_OWNED, _ctx); /*maybe<1662>*/;
  kk_std_core_types__maybe _x_x1360 = kk_std_core_list__mlift_foreach_while_10289(action_0, xx_0, _y_x10141_0_135, _ctx); /*maybe<1662>*/
  return kk_std_core_types__maybe_box(_x_x1360, _ctx);
}

kk_std_core_types__maybe kk_std_core_list_foreach_while(kk_std_core_types__list xs, kk_function_t action_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, action : (a) -> e maybe<b>) -> e maybe<b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(action_0, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x1356 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1356->head;
    kk_std_core_types__list xx_0 = _con_x1356->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__maybe x_0_10339;
    kk_function_t _x_x1357 = kk_function_dup(action_0, _ctx); /*(1661) -> 1663 maybe<1662>*/
    x_0_10339 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_box_t, kk_context_t*), _x_x1357, (_x_x1357, x, _ctx), _ctx); /*maybe<1662>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10339, _ctx);
      kk_box_t _x_x1358 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_foreach_while_fun1359(action_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__maybe_unbox(_x_x1358, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Nothing(x_0_10339, _ctx)) { // tailcall
                                                          xs = xx_0;
                                                          goto kk__tailcall;
    }
    {
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_function_drop(action_0, _ctx);
      return x_0_10339;
    }
  }
}
 
// Find the first element satisfying some predicate


// lift anonymous function
struct kk_std_core_list_find_fun1361__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_std_core_types__maybe kk_std_core_list_find_fun1361(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_find_fun1361(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_core_list_find_fun1361__t* _self = kk_function_alloc_as(struct kk_std_core_list_find_fun1361__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_find_fun1361, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_core_list_find_fun1364__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_core_list_find_fun1364(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_find_fun1364(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_core_list_find_fun1364__t* _self = kk_function_alloc_as(struct kk_std_core_list_find_fun1364__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_find_fun1364, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_find_fun1364(kk_function_t _fself, kk_box_t _b_x137, kk_context_t* _ctx) {
  struct kk_std_core_list_find_fun1364__t* _self = kk_function_as(struct kk_std_core_list_find_fun1364__t*, _fself, _ctx);
  kk_box_t x = _self->x; /* 1730 */
  kk_drop_match(_self, {kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x1365;
  bool _y_x10145_139 = kk_bool_unbox(_b_x137); /*bool*/;
  if (_y_x10145_139) {
    _x_x1365 = kk_std_core_types__new_Just(x, _ctx); /*maybe<88>*/
  }
  else {
    kk_box_drop(x, _ctx);
    _x_x1365 = kk_std_core_types__new_Nothing(_ctx); /*maybe<88>*/
  }
  return kk_std_core_types__maybe_box(_x_x1365, _ctx);
}
static kk_std_core_types__maybe kk_std_core_list_find_fun1361(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_core_list_find_fun1361__t* _self = kk_function_as(struct kk_std_core_list_find_fun1361__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (1730) -> 1731 bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  bool x_0_10342;
  kk_box_t _x_x1362 = kk_box_dup(x, _ctx); /*1730*/
  x_0_10342 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), pred, (pred, _x_x1362, _ctx), _ctx); /*bool*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1363 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_find_fun1364(x, _ctx), _ctx); /*2419*/
    return kk_std_core_types__maybe_unbox(_x_x1363, KK_OWNED, _ctx);
  }
  if (x_0_10342) {
    return kk_std_core_types__new_Just(x, _ctx);
  }
  {
    kk_box_drop(x, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_std_core_types__maybe kk_std_core_list_find(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e maybe<a> */ 
  return kk_std_core_list_foreach_while(xs, kk_std_core_list_new_find_fun1361(pred, _ctx), _ctx);
}
 
// Returns an integer list of increasing elements from `lo`  to `hi`
// (including both `lo`  and `hi` ).
// If `lo > hi`  the function returns the empty list.

kk_std_core_types__list kk_std_core_list_range_fs__trmc_list(kk_integer_t lo, kk_integer_t hi, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (lo : int, hi : int, ctx<list<int>>) -> list<int> */ 
  kk__tailcall: ;
  bool _match_x1189 = kk_integer_lte_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x1189) {
    kk_std_core_types__list _trmc_x10056 = kk_datatype_null(); /*list<int>*/;
    kk_std_core_types__list _trmc_x10057;
    kk_box_t _x_x1366;
    kk_integer_t _x_x1367 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x1366 = kk_integer_box(_x_x1367, _ctx); /*79*/
    _trmc_x10057 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1366, _trmc_x10056, _ctx); /*list<int>*/
    kk_field_addr_t _b_x150_155 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10057, _ctx)->tail, _ctx); /*@field-addr<list<int>>*/;
    { // tailcall
      kk_integer_t _x_x1368 = kk_integer_add_small_const(lo, 1, _ctx); /*int*/
      kk_std_core_types__cctx _x_x1369 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10057, _ctx)),_b_x150_155,kk_context()); /*ctx<0>*/
      lo = _x_x1368;
      _acc = _x_x1369;
      goto kk__tailcall;
    }
  }
  {
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    kk_box_t _x_x1370 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1370, KK_OWNED, _ctx);
  }
}
 
// Returns an integer list of increasing elements from `lo`  to `hi`
// (including both `lo`  and `hi` ).
// If `lo > hi`  the function returns the empty list.

kk_std_core_types__list kk_std_core_list_range_fs_list(kk_integer_t lo_0, kk_integer_t hi_0, kk_context_t* _ctx) { /* (lo : int, hi : int) -> list<int> */ 
  kk_std_core_types__cctx _x_x1371 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list_range_fs__trmc_list(lo_0, hi_0, _x_x1371, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_map_10291(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list xx, kk_box_t _trmc_x10058, kk_context_t* _ctx) { /* forall<a,b,e> (ctx<list<b>>, f : (a) -> e b, xx : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list _trmc_x10059 = kk_datatype_null(); /*list<2229>*/;
  kk_std_core_types__list _trmc_x10060 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _trmc_x10058, _trmc_x10059, _ctx); /*list<2229>*/;
  kk_field_addr_t _b_x166_169 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10060, _ctx)->tail, _ctx); /*@field-addr<list<2229>>*/;
  kk_std_core_types__cctx _own_x1187 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10060, _ctx)),_b_x166_169,kk_context()); /*ctx<0>*/;
  kk_std_core_types__list _brw_x1188 = kk_std_core_list__trmc_map(xx, f, _own_x1187, _ctx); /*list<2229>*/;
  kk_function_drop(f, _ctx);
  return _brw_x1188;
}
 
// Apply a function `f` to each element of the input list in sequence.


// lift anonymous function
struct kk_std_core_list__trmc_map_fun1376__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list__trmc_map_fun1376(kk_function_t _fself, kk_box_t _b_x174, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_map_fun1376(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_map_fun1376__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_map_fun1376__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_map_fun1376, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_map_fun1376(kk_function_t _fself, kk_box_t _b_x174, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_map_fun1376__t* _self = kk_function_as(struct kk_std_core_list__trmc_map_fun1376__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<2229>> */
  kk_function_t f_0 = _self->f_0; /* (2228) -> 2230 2229 */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<2228> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  kk_box_t _trmc_x10058_0_192 = _b_x174; /*2229*/;
  kk_std_core_types__list _x_x1377 = kk_std_core_list__mlift_trmc_map_10291(_acc_0, f_0, xx_0, _trmc_x10058_0_192, _ctx); /*list<2229>*/
  return kk_std_core_types__list_box(_x_x1377, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_map(kk_std_core_types__list xs, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, f : (a) -> e b, ctx<list<b>>) -> e list<b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1372 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1372->head;
    kk_std_core_types__list xx_0 = _con_x1372->tail;
    kk_reuse_t _ru_x1219 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1219 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_0_10346;
    kk_function_t _x_x1373 = kk_function_dup(f_0, _ctx); /*(2228) -> 2230 2229*/
    x_0_10346 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x1373, (_x_x1373, x, _ctx), _ctx); /*2229*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1219,kk_context());
      kk_box_drop(x_0_10346, _ctx);
      kk_box_t _x_x1374;
      kk_function_t _x_x1375;
      kk_function_dup(f_0, _ctx);
      _x_x1375 = kk_std_core_list__new_trmc_map_fun1376(_acc_0, f_0, xx_0, _ctx); /*(2418) -> 2420 2419*/
      _x_x1374 = kk_std_core_hnd_yield_extend(_x_x1375, _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1374, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list _trmc_x10059_0 = kk_datatype_null(); /*list<2229>*/;
      kk_std_core_types__list _trmc_x10060_0 = kk_std_core_types__new_Cons(_ru_x1219, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_0_10346, _trmc_x10059_0, _ctx); /*list<2229>*/;
      kk_field_addr_t _b_x180_186 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10060_0, _ctx)->tail, _ctx); /*@field-addr<list<2229>>*/;
      kk_std_core_types__cctx _own_x1186 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10060_0, _ctx)),_b_x180_186,kk_context()); /*ctx<0>*/;
      { // tailcall
        xs = xx_0;
        _acc_0 = _own_x1186;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_box_t _x_x1378 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1378, KK_OWNED, _ctx);
  }
}
 
// Apply a function `f` to each element of the input list in sequence.

kk_std_core_types__list kk_std_core_list_map(kk_std_core_types__list xs_0, kk_function_t f_1, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, f : (a) -> e b) -> e list<b> */ 
  kk_std_core_types__cctx _own_x1184 = kk_cctx_empty(kk_context()); /*ctx<0>*/;
  return kk_std_core_list__trmc_map(xs_0, f_1, _own_x1184, _ctx);
}
 
// Create a list of characters from `lo`  to `hi`  (including `hi`).


// lift anonymous function
struct kk_std_core_list_char_fs_list_fun1380__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_list_char_fs_list_fun1380(kk_function_t _fself, kk_box_t _b_x196, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_char_fs_new_list_fun1380(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_list_char_fs_list_fun1380, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_list_char_fs_list_fun1380(kk_function_t _fself, kk_box_t _b_x196, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x1381;
  kk_integer_t _x_x1382 = kk_integer_unbox(_b_x196, _ctx); /*int*/
  _x_x1381 = kk_integer_clamp32(_x_x1382,kk_context()); /*char*/
  return kk_char_box(_x_x1381, _ctx);
}

kk_std_core_types__list kk_std_core_list_char_fs_list(kk_char_t lo, kk_char_t hi, kk_context_t* _ctx) { /* (lo : char, hi : char) -> list<char> */ 
  kk_integer_t lo_0_10351 = kk_integer_from_int(lo,kk_context()); /*int*/;
  kk_integer_t hi_0_10352 = kk_integer_from_int(hi,kk_context()); /*int*/;
  kk_std_core_types__list xs_10349;
  kk_std_core_types__cctx _x_x1379 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  xs_10349 = kk_std_core_list_range_fs__trmc_list(lo_0_10351, hi_0_10352, _x_x1379, _ctx); /*list<int>*/
  kk_std_core_types__cctx _b_x195_199 = kk_cctx_empty(kk_context()); /*ctx<list<char>>*/;
  kk_function_t _brw_x1182 = kk_std_core_list_char_fs_new_list_fun1380(_ctx); /*(2228) -> 2230 2229*/;
  kk_std_core_types__list _brw_x1183 = kk_std_core_list__trmc_map(xs_10349, _brw_x1182, _b_x195_199, _ctx); /*list<2229>*/;
  kk_function_drop(_brw_x1182, _ctx);
  return _brw_x1183;
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list_function_fs__mlift_trmc_list_10292(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t hi, kk_integer_t lo, kk_box_t _trmc_x10061, kk_context_t* _ctx) { /* forall<a,e> (ctx<list<a>>, f : (int) -> e a, hi : int, lo : int, a) -> e list<a> */ 
  kk_std_core_types__list _trmc_x10062 = kk_datatype_null(); /*list<1938>*/;
  kk_std_core_types__list _trmc_x10063 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _trmc_x10061, _trmc_x10062, _ctx); /*list<1938>*/;
  kk_field_addr_t _b_x205_208 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10063, _ctx)->tail, _ctx); /*@field-addr<list<1938>>*/;
  kk_integer_t _x_x1383 = kk_integer_add_small_const(lo, 1, _ctx); /*int*/
  kk_std_core_types__cctx _x_x1384 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10063, _ctx)),_b_x205_208,kk_context()); /*ctx<0>*/
  return kk_std_core_list_function_fs__trmc_list(_x_x1383, hi, f, _x_x1384, _ctx);
}
 
// Applies a function `f` to list of increasing elements from `lo`  to `hi`
// (including both `lo`  and `hi` ).
// If `lo > hi`  the function returns the empty list.


// lift anonymous function
struct kk_std_core_list_function_fs__trmc_list_fun1388__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_integer_t hi_0;
  kk_integer_t lo_0;
};
static kk_box_t kk_std_core_list_function_fs__trmc_list_fun1388(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_function_fs__new_trmc_list_fun1388(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_integer_t hi_0, kk_integer_t lo_0, kk_context_t* _ctx) {
  struct kk_std_core_list_function_fs__trmc_list_fun1388__t* _self = kk_function_alloc_as(struct kk_std_core_list_function_fs__trmc_list_fun1388__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_function_fs__trmc_list_fun1388, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->hi_0 = hi_0;
  _self->lo_0 = lo_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_function_fs__trmc_list_fun1388(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx) {
  struct kk_std_core_list_function_fs__trmc_list_fun1388__t* _self = kk_function_as(struct kk_std_core_list_function_fs__trmc_list_fun1388__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<1938>> */
  kk_function_t f_0 = _self->f_0; /* (int) -> 1939 1938 */
  kk_integer_t hi_0 = _self->hi_0; /* int */
  kk_integer_t lo_0 = _self->lo_0; /* int */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_integer_dup(hi_0, _ctx);kk_integer_dup(lo_0, _ctx);}, {}, _ctx)
  kk_box_t _trmc_x10061_0_231 = _b_x213; /*1938*/;
  kk_std_core_types__list _x_x1389 = kk_std_core_list_function_fs__mlift_trmc_list_10292(_acc_0, f_0, hi_0, lo_0, _trmc_x10061_0_231, _ctx); /*list<1938>*/
  return kk_std_core_types__list_box(_x_x1389, _ctx);
}

kk_std_core_types__list kk_std_core_list_function_fs__trmc_list(kk_integer_t lo_0, kk_integer_t hi_0, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,e> (lo : int, hi : int, f : (int) -> e a, ctx<list<a>>) -> e list<a> */ 
  kk__tailcall: ;
  bool _match_x1180 = kk_integer_lte_borrow(lo_0,hi_0,kk_context()); /*bool*/;
  if (_match_x1180) {
    kk_box_t x_10353;
    kk_function_t _x_x1386 = kk_function_dup(f_0, _ctx); /*(int) -> 1939 1938*/
    kk_integer_t _x_x1385 = kk_integer_dup(lo_0, _ctx); /*int*/
    x_10353 = kk_function_call(kk_box_t, (kk_function_t, kk_integer_t, kk_context_t*), _x_x1386, (_x_x1386, _x_x1385, _ctx), _ctx); /*1938*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_10353, _ctx);
      kk_box_t _x_x1387 = kk_std_core_hnd_yield_extend(kk_std_core_list_function_fs__new_trmc_list_fun1388(_acc_0, f_0, hi_0, lo_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1387, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list _trmc_x10062_0 = kk_datatype_null(); /*list<1938>*/;
      kk_std_core_types__list _trmc_x10063_0 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_10353, _trmc_x10062_0, _ctx); /*list<1938>*/;
      kk_field_addr_t _b_x219_225 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10063_0, _ctx)->tail, _ctx); /*@field-addr<list<1938>>*/;
      { // tailcall
        kk_integer_t _x_x1390 = kk_integer_add_small_const(lo_0, 1, _ctx); /*int*/
        kk_std_core_types__cctx _x_x1391 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10063_0, _ctx)),_b_x219_225,kk_context()); /*ctx<0>*/
        lo_0 = _x_x1390;
        _acc_0 = _x_x1391;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_integer_drop(lo_0, _ctx);
    kk_integer_drop(hi_0, _ctx);
    kk_function_drop(f_0, _ctx);
    kk_box_t _x_x1392 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1392, KK_OWNED, _ctx);
  }
}
 
// Applies a function `f` to list of increasing elements from `lo`  to `hi`
// (including both `lo`  and `hi` ).
// If `lo > hi`  the function returns the empty list.

kk_std_core_types__list kk_std_core_list_function_fs_list(kk_integer_t lo_1, kk_integer_t hi_1, kk_function_t f_1, kk_context_t* _ctx) { /* forall<a,e> (lo : int, hi : int, f : (int) -> e a) -> e list<a> */ 
  kk_std_core_types__cctx _x_x1393 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list_function_fs__trmc_list(lo_1, hi_1, f_1, _x_x1393, _ctx);
}
 
// Returns an integer list of increasing elements from `lo`  to `hi` with stride `stride`.
// If `lo > hi`  the function returns the empty list.

kk_std_core_types__list kk_std_core_list_stride_fs__trmc_list(kk_integer_t lo, kk_integer_t hi, kk_integer_t stride, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (lo : int, hi : int, stride : int, ctx<list<int>>) -> list<int> */ 
  kk__tailcall: ;
  bool _match_x1179 = kk_integer_lte_borrow(lo,hi,kk_context()); /*bool*/;
  if (_match_x1179) {
    kk_std_core_types__list _trmc_x10064 = kk_datatype_null(); /*list<int>*/;
    kk_std_core_types__list _trmc_x10065;
    kk_box_t _x_x1394;
    kk_integer_t _x_x1395 = kk_integer_dup(lo, _ctx); /*int*/
    _x_x1394 = kk_integer_box(_x_x1395, _ctx); /*79*/
    _trmc_x10065 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1394, _trmc_x10064, _ctx); /*list<int>*/
    kk_field_addr_t _b_x241_246 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10065, _ctx)->tail, _ctx); /*@field-addr<list<int>>*/;
    { // tailcall
      kk_integer_t _x_x1396;
      kk_integer_t _x_x1397 = kk_integer_dup(stride, _ctx); /*int*/
      _x_x1396 = kk_integer_add(lo,_x_x1397,kk_context()); /*int*/
      kk_std_core_types__cctx _x_x1398 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10065, _ctx)),_b_x241_246,kk_context()); /*ctx<0>*/
      lo = _x_x1396;
      _acc = _x_x1398;
      goto kk__tailcall;
    }
  }
  {
    kk_integer_drop(stride, _ctx);
    kk_integer_drop(lo, _ctx);
    kk_integer_drop(hi, _ctx);
    kk_box_t _x_x1399 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1399, KK_OWNED, _ctx);
  }
}
 
// Returns an integer list of increasing elements from `lo`  to `hi` with stride `stride`.
// If `lo > hi`  the function returns the empty list.

kk_std_core_types__list kk_std_core_list_stride_fs_list(kk_integer_t lo_0, kk_integer_t hi_0, kk_integer_t stride_0, kk_context_t* _ctx) { /* (lo : int, hi : int, stride : int) -> list<int> */ 
  kk_std_core_types__cctx _x_x1400 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list_stride_fs__trmc_list(lo_0, hi_0, stride_0, _x_x1400, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list_stridefunction_fs__mlift_trmc_list_10293(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t hi, kk_integer_t lo, kk_integer_t stride, kk_box_t _trmc_x10066, kk_context_t* _ctx) { /* forall<a,e> (ctx<list<a>>, f : (int) -> e a, hi : int, lo : int, stride : int, a) -> e list<a> */ 
  kk_std_core_types__list _trmc_x10067 = kk_datatype_null(); /*list<2118>*/;
  kk_std_core_types__list _trmc_x10068 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _trmc_x10066, _trmc_x10067, _ctx); /*list<2118>*/;
  kk_field_addr_t _b_x257_260 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10068, _ctx)->tail, _ctx); /*@field-addr<list<2118>>*/;
  kk_integer_t _x_x1401;
  kk_integer_t _x_x1402 = kk_integer_dup(stride, _ctx); /*int*/
  _x_x1401 = kk_integer_add(lo,_x_x1402,kk_context()); /*int*/
  kk_std_core_types__cctx _x_x1403 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10068, _ctx)),_b_x257_260,kk_context()); /*ctx<0>*/
  return kk_std_core_list_stridefunction_fs__trmc_list(_x_x1401, hi, stride, f, _x_x1403, _ctx);
}
 
// Returns an integer list of increasing elements from `lo`  to `hi` with stride `stride`.
// If `lo > hi`  the function returns the empty list.


// lift anonymous function
struct kk_std_core_list_stridefunction_fs__trmc_list_fun1407__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_integer_t hi_0;
  kk_integer_t lo_0;
  kk_integer_t stride_0;
};
static kk_box_t kk_std_core_list_stridefunction_fs__trmc_list_fun1407(kk_function_t _fself, kk_box_t _b_x265, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_stridefunction_fs__new_trmc_list_fun1407(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_integer_t hi_0, kk_integer_t lo_0, kk_integer_t stride_0, kk_context_t* _ctx) {
  struct kk_std_core_list_stridefunction_fs__trmc_list_fun1407__t* _self = kk_function_alloc_as(struct kk_std_core_list_stridefunction_fs__trmc_list_fun1407__t, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_stridefunction_fs__trmc_list_fun1407, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->hi_0 = hi_0;
  _self->lo_0 = lo_0;
  _self->stride_0 = stride_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_stridefunction_fs__trmc_list_fun1407(kk_function_t _fself, kk_box_t _b_x265, kk_context_t* _ctx) {
  struct kk_std_core_list_stridefunction_fs__trmc_list_fun1407__t* _self = kk_function_as(struct kk_std_core_list_stridefunction_fs__trmc_list_fun1407__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<2118>> */
  kk_function_t f_0 = _self->f_0; /* (int) -> 2119 2118 */
  kk_integer_t hi_0 = _self->hi_0; /* int */
  kk_integer_t lo_0 = _self->lo_0; /* int */
  kk_integer_t stride_0 = _self->stride_0; /* int */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_integer_dup(hi_0, _ctx);kk_integer_dup(lo_0, _ctx);kk_integer_dup(stride_0, _ctx);}, {}, _ctx)
  kk_box_t _trmc_x10066_0_283 = _b_x265; /*2118*/;
  kk_std_core_types__list _x_x1408 = kk_std_core_list_stridefunction_fs__mlift_trmc_list_10293(_acc_0, f_0, hi_0, lo_0, stride_0, _trmc_x10066_0_283, _ctx); /*list<2118>*/
  return kk_std_core_types__list_box(_x_x1408, _ctx);
}

kk_std_core_types__list kk_std_core_list_stridefunction_fs__trmc_list(kk_integer_t lo_0, kk_integer_t hi_0, kk_integer_t stride_0, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,e> (lo : int, hi : int, stride : int, f : (int) -> e a, ctx<list<a>>) -> e list<a> */ 
  kk__tailcall: ;
  bool _match_x1177 = kk_integer_lte_borrow(lo_0,hi_0,kk_context()); /*bool*/;
  if (_match_x1177) {
    kk_box_t x_10356;
    kk_function_t _x_x1405 = kk_function_dup(f_0, _ctx); /*(int) -> 2119 2118*/
    kk_integer_t _x_x1404 = kk_integer_dup(lo_0, _ctx); /*int*/
    x_10356 = kk_function_call(kk_box_t, (kk_function_t, kk_integer_t, kk_context_t*), _x_x1405, (_x_x1405, _x_x1404, _ctx), _ctx); /*2118*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_10356, _ctx);
      kk_box_t _x_x1406 = kk_std_core_hnd_yield_extend(kk_std_core_list_stridefunction_fs__new_trmc_list_fun1407(_acc_0, f_0, hi_0, lo_0, stride_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1406, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list _trmc_x10067_0 = kk_datatype_null(); /*list<2118>*/;
      kk_std_core_types__list _trmc_x10068_0 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_10356, _trmc_x10067_0, _ctx); /*list<2118>*/;
      kk_field_addr_t _b_x271_277 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10068_0, _ctx)->tail, _ctx); /*@field-addr<list<2118>>*/;
      { // tailcall
        kk_integer_t _x_x1409;
        kk_integer_t _x_x1410 = kk_integer_dup(stride_0, _ctx); /*int*/
        _x_x1409 = kk_integer_add(lo_0,_x_x1410,kk_context()); /*int*/
        kk_std_core_types__cctx _x_x1411 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10068_0, _ctx)),_b_x271_277,kk_context()); /*ctx<0>*/
        lo_0 = _x_x1409;
        _acc_0 = _x_x1411;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_integer_drop(stride_0, _ctx);
    kk_integer_drop(lo_0, _ctx);
    kk_integer_drop(hi_0, _ctx);
    kk_function_drop(f_0, _ctx);
    kk_box_t _x_x1412 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1412, KK_OWNED, _ctx);
  }
}
 
// Returns an integer list of increasing elements from `lo`  to `hi` with stride `stride`.
// If `lo > hi`  the function returns the empty list.

kk_std_core_types__list kk_std_core_list_stridefunction_fs_list(kk_integer_t lo_1, kk_integer_t hi_1, kk_integer_t stride_1, kk_function_t f_1, kk_context_t* _ctx) { /* forall<a,e> (lo : int, hi : int, stride : int, f : (int) -> e a) -> e list<a> */ 
  kk_std_core_types__cctx _x_x1413 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list_stridefunction_fs__trmc_list(lo_1, hi_1, stride_1, f_1, _x_x1413, _ctx);
}
 
// Apply a function `f` to each character in a string


// lift anonymous function
struct kk_std_core_list_string_fs_map_fun1414__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_std_core_list_string_fs_map_fun1414(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_string_fs_new_map_fun1414(kk_function_t f, kk_context_t* _ctx) {
  struct kk_std_core_list_string_fs_map_fun1414__t* _self = kk_function_alloc_as(struct kk_std_core_list_string_fs_map_fun1414__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_string_fs_map_fun1414, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_string_fs_map_fun1414(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx) {
  struct kk_std_core_list_string_fs_map_fun1414__t* _self = kk_function_as(struct kk_std_core_list_string_fs_map_fun1414__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (char) -> 2171 char */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_char_t _x_x1415;
  kk_char_t _x_x1416 = kk_char_unbox(_b_x287, KK_OWNED, _ctx); /*char*/
  _x_x1415 = kk_function_call(kk_char_t, (kk_function_t, kk_char_t, kk_context_t*), f, (f, _x_x1416, _ctx), _ctx); /*char*/
  return kk_char_box(_x_x1415, _ctx);
}


// lift anonymous function
struct kk_std_core_list_string_fs_map_fun1418__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_list_string_fs_map_fun1418(kk_function_t _fself, kk_box_t _b_x292, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_string_fs_new_map_fun1418(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_list_string_fs_map_fun1418, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_list_string_fs_map_fun1418(kk_function_t _fself, kk_box_t _b_x292, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1419;
  kk_std_core_types__list _x_x1420 = kk_std_core_types__list_unbox(_b_x292, KK_OWNED, _ctx); /*list<char>*/
  _x_x1419 = kk_std_core_string_listchar_fs_string(_x_x1420, _ctx); /*string*/
  return kk_string_box(_x_x1419);
}

kk_string_t kk_std_core_list_string_fs_map(kk_string_t s, kk_function_t f, kk_context_t* _ctx) { /* forall<e> (s : string, f : (char) -> e char) -> e string */ 
  kk_std_core_types__list xs_10361 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
  kk_std_core_types__cctx _b_x286_290 = kk_cctx_empty(kk_context()); /*ctx<list<char>>*/;
  kk_std_core_types__list x_10359;
  kk_function_t _brw_x1175 = kk_std_core_list_string_fs_new_map_fun1414(f, _ctx); /*(2228) -> 2230 2229*/;
  kk_std_core_types__list _brw_x1176 = kk_std_core_list__trmc_map(xs_10361, _brw_x1175, _b_x286_290, _ctx); /*list<2229>*/;
  kk_function_drop(_brw_x1175, _ctx);
  x_10359 = _brw_x1176; /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10359, _ctx);
    kk_box_t _x_x1417 = kk_std_core_hnd_yield_extend(kk_std_core_list_string_fs_new_map_fun1418(_ctx), _ctx); /*2419*/
    return kk_string_unbox(_x_x1417);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10359, _ctx);
  }
}
 
// monadic lift

kk_std_core_types__order2 kk_std_core_list__mlift_order2_10294(kk_box_t z, kk_std_core_types__order2 _y_x10162, kk_context_t* _ctx) { /* forall<a,e> (z : a, order2<list<a>>) -> e order2<list<a>> */ 
  if (kk_std_core_types__is_Eq2(_y_x10162, _ctx)) {
    kk_box_t _box_x294 = _y_x10162._cons.Eq2.eq;
    kk_std_core_types__list zz = kk_std_core_types__list_unbox(_box_x294, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(zz, _ctx);
    kk_std_core_types__order2_drop(_y_x10162, _ctx);
    kk_box_t _x_x1421;
    kk_std_core_types__list _x_x1422 = kk_std_core_types__new_Cons(kk_reuse_null, 0, z, zz, _ctx); /*list<79>*/
    _x_x1421 = kk_std_core_types__list_box(_x_x1422, _ctx); /*105*/
    return kk_std_core_types__new_Eq2(_x_x1421, _ctx);
  }
  if (kk_std_core_types__is_Lt2(_y_x10162, _ctx)) {
    kk_box_t _box_x296 = _y_x10162._cons.Lt2.lt;
    kk_box_t _box_x297 = _y_x10162._cons.Lt2.gt;
    kk_std_core_types__list xx_sq_ = kk_std_core_types__list_unbox(_box_x296, KK_BORROWED, _ctx);
    kk_std_core_types__list yy_sq_ = kk_std_core_types__list_unbox(_box_x297, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(xx_sq_, _ctx);
    kk_std_core_types__list_dup(yy_sq_, _ctx);
    kk_std_core_types__order2_drop(_y_x10162, _ctx);
    kk_box_t _x_x1423;
    kk_std_core_types__list _x_x1424;
    kk_box_t _x_x1425 = kk_box_dup(z, _ctx); /*2513*/
    _x_x1424 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1425, xx_sq_, _ctx); /*list<79>*/
    _x_x1423 = kk_std_core_types__list_box(_x_x1424, _ctx); /*105*/
    kk_box_t _x_x1426;
    kk_std_core_types__list _x_x1427 = kk_std_core_types__new_Cons(kk_reuse_null, 0, z, yy_sq_, _ctx); /*list<79>*/
    _x_x1426 = kk_std_core_types__list_box(_x_x1427, _ctx); /*105*/
    return kk_std_core_types__new_Lt2(_x_x1423, _x_x1426, _ctx);
  }
  {
    kk_box_t _box_x300 = _y_x10162._cons.Gt2.lt;
    kk_box_t _box_x301 = _y_x10162._cons.Gt2.gt;
    kk_std_core_types__list yy_0_sq_ = kk_std_core_types__list_unbox(_box_x300, KK_BORROWED, _ctx);
    kk_std_core_types__list xx_0_sq_ = kk_std_core_types__list_unbox(_box_x301, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(xx_0_sq_, _ctx);
    kk_std_core_types__list_dup(yy_0_sq_, _ctx);
    kk_std_core_types__order2_drop(_y_x10162, _ctx);
    kk_box_t _x_x1428;
    kk_std_core_types__list _x_x1429;
    kk_box_t _x_x1430 = kk_box_dup(z, _ctx); /*2513*/
    _x_x1429 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1430, yy_0_sq_, _ctx); /*list<79>*/
    _x_x1428 = kk_std_core_types__list_box(_x_x1429, _ctx); /*105*/
    kk_box_t _x_x1431;
    kk_std_core_types__list _x_x1432 = kk_std_core_types__new_Cons(kk_reuse_null, 0, z, xx_0_sq_, _ctx); /*list<79>*/
    _x_x1431 = kk_std_core_types__list_box(_x_x1432, _ctx); /*105*/
    return kk_std_core_types__new_Gt2(_x_x1428, _x_x1431, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_core_list__mlift_order2_10295_fun1434__t {
  struct kk_function_s _base;
  kk_box_t z_0;
};
static kk_box_t kk_std_core_list__mlift_order2_10295_fun1434(kk_function_t _fself, kk_box_t _b_x310, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_mlift_order2_10295_fun1434(kk_box_t z_0, kk_context_t* _ctx) {
  struct kk_std_core_list__mlift_order2_10295_fun1434__t* _self = kk_function_alloc_as(struct kk_std_core_list__mlift_order2_10295_fun1434__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__mlift_order2_10295_fun1434, kk_context());
  _self->z_0 = z_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__mlift_order2_10295_fun1434(kk_function_t _fself, kk_box_t _b_x310, kk_context_t* _ctx) {
  struct kk_std_core_list__mlift_order2_10295_fun1434__t* _self = kk_function_as(struct kk_std_core_list__mlift_order2_10295_fun1434__t*, _fself, _ctx);
  kk_box_t z_0 = _self->z_0; /* 2513 */
  kk_drop_match(_self, {kk_box_dup(z_0, _ctx);}, {}, _ctx)
  kk_std_core_types__order2 _y_x10162_0_320 = kk_std_core_types__order2_unbox(_b_x310, KK_OWNED, _ctx); /*order2<list<2513>>*/;
  kk_std_core_types__order2 _x_x1435 = kk_std_core_list__mlift_order2_10294(z_0, _y_x10162_0_320, _ctx); /*order2<list<2513>>*/
  return kk_std_core_types__order2_box(_x_x1435, _ctx);
}

kk_std_core_types__order2 kk_std_core_list__mlift_order2_10295(kk_function_t _implicit_fs_order2, kk_std_core_types__list xx, kk_std_core_types__list yy, kk_std_core_types__order2 _y_x10161, kk_context_t* _ctx) { /* forall<a,e> (?order2 : (a, a) -> e order2<a>, xx : list<a>, yy : list<a>, order2<a>) -> e order2<list<a>> */ 
  if (kk_std_core_types__is_Eq2(_y_x10161, _ctx)) {
    kk_box_t z_0 = _y_x10161._cons.Eq2.eq;
    kk_std_core_types__order2 x_10363;
    kk_std_core_types__order2 _brw_x1173 = kk_std_core_list_order2(xx, yy, _implicit_fs_order2, _ctx); /*order2<list<2513>>*/;
    kk_function_drop(_implicit_fs_order2, _ctx);
    x_10363 = _brw_x1173; /*order2<list<2513>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__order2_drop(x_10363, _ctx);
      kk_box_t _x_x1433 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_mlift_order2_10295_fun1434(z_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__order2_unbox(_x_x1433, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_list__mlift_order2_10294(z_0, x_10363, _ctx);
    }
  }
  if (kk_std_core_types__is_Lt2(_y_x10161, _ctx)) {
    kk_box_t x_sq_ = _y_x10161._cons.Lt2.lt;
    kk_box_t y_sq_ = _y_x10161._cons.Lt2.gt;
    kk_function_drop(_implicit_fs_order2, _ctx);
    kk_box_t _x_x1436;
    kk_std_core_types__list _x_x1437 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_sq_, xx, _ctx); /*list<79>*/
    _x_x1436 = kk_std_core_types__list_box(_x_x1437, _ctx); /*105*/
    kk_box_t _x_x1438;
    kk_std_core_types__list _x_x1439 = kk_std_core_types__new_Cons(kk_reuse_null, 0, y_sq_, yy, _ctx); /*list<79>*/
    _x_x1438 = kk_std_core_types__list_box(_x_x1439, _ctx); /*105*/
    return kk_std_core_types__new_Lt2(_x_x1436, _x_x1438, _ctx);
  }
  {
    kk_box_t y_0_sq_ = _y_x10161._cons.Gt2.lt;
    kk_box_t x_0_sq_ = _y_x10161._cons.Gt2.gt;
    kk_function_drop(_implicit_fs_order2, _ctx);
    kk_box_t _x_x1440;
    kk_std_core_types__list _x_x1441 = kk_std_core_types__new_Cons(kk_reuse_null, 0, y_0_sq_, yy, _ctx); /*list<79>*/
    _x_x1440 = kk_std_core_types__list_box(_x_x1441, _ctx); /*105*/
    kk_box_t _x_x1442;
    kk_std_core_types__list _x_x1443 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_0_sq_, xx, _ctx); /*list<79>*/
    _x_x1442 = kk_std_core_types__list_box(_x_x1443, _ctx); /*105*/
    return kk_std_core_types__new_Gt2(_x_x1440, _x_x1442, _ctx);
  }
}
 
// Order2 on lists


// lift anonymous function
struct kk_std_core_list_order2_fun1451__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_order2_0;
  kk_std_core_types__list xx_0;
  kk_std_core_types__list yy_0;
};
static kk_box_t kk_std_core_list_order2_fun1451(kk_function_t _fself, kk_box_t _b_x327, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_order2_fun1451(kk_function_t _implicit_fs_order2_0, kk_std_core_types__list xx_0, kk_std_core_types__list yy_0, kk_context_t* _ctx) {
  struct kk_std_core_list_order2_fun1451__t* _self = kk_function_alloc_as(struct kk_std_core_list_order2_fun1451__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_order2_fun1451, kk_context());
  _self->_implicit_fs_order2_0 = _implicit_fs_order2_0;
  _self->xx_0 = xx_0;
  _self->yy_0 = yy_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_order2_fun1451(kk_function_t _fself, kk_box_t _b_x327, kk_context_t* _ctx) {
  struct kk_std_core_list_order2_fun1451__t* _self = kk_function_as(struct kk_std_core_list_order2_fun1451__t*, _fself, _ctx);
  kk_function_t _implicit_fs_order2_0 = _self->_implicit_fs_order2_0; /* (2513, 2513) -> 2514 order2<2513> */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<2513> */
  kk_std_core_types__list yy_0 = _self->yy_0; /* list<2513> */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_order2_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);kk_std_core_types__list_dup(yy_0, _ctx);}, {}, _ctx)
  kk_std_core_types__order2 _y_x10161_0_360 = kk_std_core_types__order2_unbox(_b_x327, KK_OWNED, _ctx); /*order2<2513>*/;
  kk_std_core_types__order2 _x_x1452 = kk_std_core_list__mlift_order2_10295(_implicit_fs_order2_0, xx_0, yy_0, _y_x10161_0_360, _ctx); /*order2<list<2513>>*/
  return kk_std_core_types__order2_box(_x_x1452, _ctx);
}


// lift anonymous function
struct kk_std_core_list_order2_fun1454__t {
  struct kk_function_s _base;
  kk_box_t z_1;
};
static kk_box_t kk_std_core_list_order2_fun1454(kk_function_t _fself, kk_box_t _b_x329, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_order2_fun1454(kk_box_t z_1, kk_context_t* _ctx) {
  struct kk_std_core_list_order2_fun1454__t* _self = kk_function_alloc_as(struct kk_std_core_list_order2_fun1454__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_order2_fun1454, kk_context());
  _self->z_1 = z_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_order2_fun1454(kk_function_t _fself, kk_box_t _b_x329, kk_context_t* _ctx) {
  struct kk_std_core_list_order2_fun1454__t* _self = kk_function_as(struct kk_std_core_list_order2_fun1454__t*, _fself, _ctx);
  kk_box_t z_1 = _self->z_1; /* 2513 */
  kk_drop_match(_self, {kk_box_dup(z_1, _ctx);}, {}, _ctx)
  kk_std_core_types__order2 _y_x10162_1_361 = kk_std_core_types__order2_unbox(_b_x329, KK_OWNED, _ctx); /*order2<list<2513>>*/;
  kk_std_core_types__order2 _x_x1455 = kk_std_core_list__mlift_order2_10294(z_1, _y_x10162_1_361, _ctx); /*order2<list<2513>>*/
  return kk_std_core_types__order2_box(_x_x1455, _ctx);
}

kk_std_core_types__order2 kk_std_core_list_order2(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t _implicit_fs_order2_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, ys : list<a>, ?order2 : (a, a) -> e order2<a>) -> e order2<list<a>> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    if (kk_std_core_types__is_Nil(ys, _ctx)) {
      return kk_std_core_types__new_Eq2(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _ctx);
    }
    {
      return kk_std_core_types__new_Lt2(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_std_core_types__list_box(ys, _ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x1444 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x1444->head;
    kk_std_core_types__list xx_0 = _con_x1444->tail;
    kk_reuse_t _ru_x1220 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1220 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x_0, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    if (kk_std_core_types__is_Nil(ys, _ctx)) {
      kk_box_t _x_x1445;
      kk_std_core_types__list _x_x1446 = kk_std_core_types__new_Cons(_ru_x1220, 0, x_0, xx_0, _ctx); /*list<79>*/
      _x_x1445 = kk_std_core_types__list_box(_x_x1446, _ctx); /*105*/
      return kk_std_core_types__new_Gt2(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), _x_x1445, _ctx);
    }
    {
      struct kk_std_core_types_Cons* _con_x1447 = kk_std_core_types__as_Cons(ys, _ctx);
      kk_box_t y = _con_x1447->head;
      kk_std_core_types__list yy_0 = _con_x1447->tail;
      kk_reuse_t _ru_x1221 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
        _ru_x1221 = (kk_datatype_ptr_reuse(ys, _ctx));
      }
      else {
        kk_box_dup(y, _ctx);
        kk_std_core_types__list_dup(yy_0, _ctx);
        kk_datatype_ptr_decref(ys, _ctx);
      }
      kk_std_core_types__order2 x_1_10365;
      kk_function_t _x_x1448 = kk_function_dup(_implicit_fs_order2_0, _ctx); /*(2513, 2513) -> 2514 order2<2513>*/
      x_1_10365 = kk_function_call(kk_std_core_types__order2, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1448, (_x_x1448, x_0, y, _ctx), _ctx); /*order2<2513>*/
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x1220,kk_context());
        kk_reuse_drop(_ru_x1221,kk_context());
        kk_std_core_types__order2_drop(x_1_10365, _ctx);
        kk_box_t _x_x1449;
        kk_function_t _x_x1450;
        kk_function_dup(_implicit_fs_order2_0, _ctx);
        _x_x1450 = kk_std_core_list_new_order2_fun1451(_implicit_fs_order2_0, xx_0, yy_0, _ctx); /*(2418) -> 2420 2419*/
        _x_x1449 = kk_std_core_hnd_yield_extend(_x_x1450, _ctx); /*2419*/
        return kk_std_core_types__order2_unbox(_x_x1449, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Eq2(x_1_10365, _ctx)) {
        kk_box_t z_1 = x_1_10365._cons.Eq2.eq;
        kk_std_core_types__order2 x_2_10368 = kk_std_core_list_order2(xx_0, yy_0, _implicit_fs_order2_0, _ctx); /*order2<list<2513>>*/;
        if (kk_yielding(kk_context())) {
          kk_reuse_drop(_ru_x1220,kk_context());
          kk_reuse_drop(_ru_x1221,kk_context());
          kk_std_core_types__order2_drop(x_2_10368, _ctx);
          kk_box_t _x_x1453 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_order2_fun1454(z_1, _ctx), _ctx); /*2419*/
          return kk_std_core_types__order2_unbox(_x_x1453, KK_OWNED, _ctx);
        }
        if (kk_std_core_types__is_Eq2(x_2_10368, _ctx)) {
          kk_box_t _box_x330 = x_2_10368._cons.Eq2.eq;
          kk_std_core_types__list zz_0 = kk_std_core_types__list_unbox(_box_x330, KK_BORROWED, _ctx);
          kk_reuse_drop(_ru_x1220,kk_context());
          kk_std_core_types__list_dup(zz_0, _ctx);
          kk_std_core_types__order2_drop(x_2_10368, _ctx);
          kk_box_t _x_x1456;
          kk_std_core_types__list _x_x1457 = kk_std_core_types__new_Cons(_ru_x1221, 0, z_1, zz_0, _ctx); /*list<79>*/
          _x_x1456 = kk_std_core_types__list_box(_x_x1457, _ctx); /*105*/
          return kk_std_core_types__new_Eq2(_x_x1456, _ctx);
        }
        if (kk_std_core_types__is_Lt2(x_2_10368, _ctx)) {
          kk_box_t _box_x332 = x_2_10368._cons.Lt2.lt;
          kk_box_t _box_x333 = x_2_10368._cons.Lt2.gt;
          kk_std_core_types__list xx_1_sq_ = kk_std_core_types__list_unbox(_box_x332, KK_BORROWED, _ctx);
          kk_std_core_types__list yy_1_sq_ = kk_std_core_types__list_unbox(_box_x333, KK_BORROWED, _ctx);
          kk_std_core_types__list_dup(xx_1_sq_, _ctx);
          kk_std_core_types__list_dup(yy_1_sq_, _ctx);
          kk_std_core_types__order2_drop(x_2_10368, _ctx);
          kk_box_t _x_x1458;
          kk_std_core_types__list _x_x1459;
          kk_box_t _x_x1460 = kk_box_dup(z_1, _ctx); /*2513*/
          _x_x1459 = kk_std_core_types__new_Cons(_ru_x1221, 0, _x_x1460, xx_1_sq_, _ctx); /*list<79>*/
          _x_x1458 = kk_std_core_types__list_box(_x_x1459, _ctx); /*105*/
          kk_box_t _x_x1461;
          kk_std_core_types__list _x_x1462 = kk_std_core_types__new_Cons(_ru_x1220, 0, z_1, yy_1_sq_, _ctx); /*list<79>*/
          _x_x1461 = kk_std_core_types__list_box(_x_x1462, _ctx); /*105*/
          return kk_std_core_types__new_Lt2(_x_x1458, _x_x1461, _ctx);
        }
        {
          kk_box_t _box_x336 = x_2_10368._cons.Gt2.lt;
          kk_box_t _box_x337 = x_2_10368._cons.Gt2.gt;
          kk_std_core_types__list yy_0_0_sq_ = kk_std_core_types__list_unbox(_box_x336, KK_BORROWED, _ctx);
          kk_std_core_types__list xx_0_0_sq_ = kk_std_core_types__list_unbox(_box_x337, KK_BORROWED, _ctx);
          kk_std_core_types__list_dup(xx_0_0_sq_, _ctx);
          kk_std_core_types__list_dup(yy_0_0_sq_, _ctx);
          kk_std_core_types__order2_drop(x_2_10368, _ctx);
          kk_box_t _x_x1463;
          kk_std_core_types__list _x_x1464;
          kk_box_t _x_x1465 = kk_box_dup(z_1, _ctx); /*2513*/
          _x_x1464 = kk_std_core_types__new_Cons(_ru_x1221, 0, _x_x1465, yy_0_0_sq_, _ctx); /*list<79>*/
          _x_x1463 = kk_std_core_types__list_box(_x_x1464, _ctx); /*105*/
          kk_box_t _x_x1466;
          kk_std_core_types__list _x_x1467 = kk_std_core_types__new_Cons(_ru_x1220, 0, z_1, xx_0_0_sq_, _ctx); /*list<79>*/
          _x_x1466 = kk_std_core_types__list_box(_x_x1467, _ctx); /*105*/
          return kk_std_core_types__new_Gt2(_x_x1463, _x_x1466, _ctx);
        }
      }
      if (kk_std_core_types__is_Lt2(x_1_10365, _ctx)) {
        kk_box_t x_1_sq_ = x_1_10365._cons.Lt2.lt;
        kk_box_t y_1_sq_ = x_1_10365._cons.Lt2.gt;
        kk_box_t _x_x1468;
        kk_std_core_types__list _x_x1469 = kk_std_core_types__new_Cons(_ru_x1221, 0, x_1_sq_, xx_0, _ctx); /*list<79>*/
        _x_x1468 = kk_std_core_types__list_box(_x_x1469, _ctx); /*105*/
        kk_box_t _x_x1470;
        kk_std_core_types__list _x_x1471 = kk_std_core_types__new_Cons(_ru_x1220, 0, y_1_sq_, yy_0, _ctx); /*list<79>*/
        _x_x1470 = kk_std_core_types__list_box(_x_x1471, _ctx); /*105*/
        return kk_std_core_types__new_Lt2(_x_x1468, _x_x1470, _ctx);
      }
      {
        kk_box_t y_0_0_sq_ = x_1_10365._cons.Gt2.lt;
        kk_box_t x_0_0_sq_ = x_1_10365._cons.Gt2.gt;
        kk_box_t _x_x1472;
        kk_std_core_types__list _x_x1473 = kk_std_core_types__new_Cons(_ru_x1221, 0, y_0_0_sq_, yy_0, _ctx); /*list<79>*/
        _x_x1472 = kk_std_core_types__list_box(_x_x1473, _ctx); /*105*/
        kk_box_t _x_x1474;
        kk_std_core_types__list _x_x1475 = kk_std_core_types__new_Cons(_ru_x1220, 0, x_0_0_sq_, xx_0, _ctx); /*list<79>*/
        _x_x1474 = kk_std_core_types__list_box(_x_x1475, _ctx); /*105*/
        return kk_std_core_types__new_Gt2(_x_x1472, _x_x1474, _ctx);
      }
    }
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_lift_map_indexed_6004_10296(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t i_0_10018, kk_std_core_types__list yy, kk_box_t _trmc_x10069, kk_context_t* _ctx) { /* forall<a,b,e> (ctx<list<b>>, f : (idx : int, value : a) -> e b, i@0@10018 : int, yy : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list _trmc_x10070 = kk_datatype_null(); /*list<2589>*/;
  kk_std_core_types__list _trmc_x10071 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _trmc_x10069, _trmc_x10070, _ctx); /*list<2589>*/;
  kk_field_addr_t _b_x367_370 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10071, _ctx)->tail, _ctx); /*@field-addr<list<2589>>*/;
  kk_std_core_types__cctx _x_x1476 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10071, _ctx)),_b_x367_370,kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_map_indexed_6004(f, yy, i_0_10018, _x_x1476, _ctx);
}
 
// lifted local: map-indexed, map-idx


// lift anonymous function
struct kk_std_core_list__trmc_lift_map_indexed_6004_fun1481__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_integer_t i_0_10018_0;
  kk_std_core_types__list yy_0;
};
static kk_box_t kk_std_core_list__trmc_lift_map_indexed_6004_fun1481(kk_function_t _fself, kk_box_t _b_x375, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_lift_map_indexed_6004_fun1481(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_integer_t i_0_10018_0, kk_std_core_types__list yy_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_lift_map_indexed_6004_fun1481__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_lift_map_indexed_6004_fun1481__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_lift_map_indexed_6004_fun1481, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->i_0_10018_0 = i_0_10018_0;
  _self->yy_0 = yy_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_lift_map_indexed_6004_fun1481(kk_function_t _fself, kk_box_t _b_x375, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_lift_map_indexed_6004_fun1481__t* _self = kk_function_as(struct kk_std_core_list__trmc_lift_map_indexed_6004_fun1481__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<2589>> */
  kk_function_t f_0 = _self->f_0; /* (idx : int, value : 2588) -> 2590 2589 */
  kk_integer_t i_0_10018_0 = _self->i_0_10018_0; /* int */
  kk_std_core_types__list yy_0 = _self->yy_0; /* list<2588> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_integer_dup(i_0_10018_0, _ctx);kk_std_core_types__list_dup(yy_0, _ctx);}, {}, _ctx)
  kk_box_t _trmc_x10069_0_393 = _b_x375; /*2589*/;
  kk_std_core_types__list _x_x1482 = kk_std_core_list__mlift_trmc_lift_map_indexed_6004_10296(_acc_0, f_0, i_0_10018_0, yy_0, _trmc_x10069_0_393, _ctx); /*list<2589>*/
  return kk_std_core_types__list_box(_x_x1482, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_lift_map_indexed_6004(kk_function_t f_0, kk_std_core_types__list ys, kk_integer_t i, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,e> (f : (idx : int, value : a) -> e b, ys : list<a>, i : int, ctx<list<b>>) -> e list<b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1477 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t y = _con_x1477->head;
    kk_std_core_types__list yy_0 = _con_x1477->tail;
    kk_reuse_t _ru_x1222 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      _ru_x1222 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(y, _ctx);
      kk_std_core_types__list_dup(yy_0, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    kk_integer_t i_0_10018_0;
    kk_integer_t _x_x1478 = kk_integer_dup(i, _ctx); /*int*/
    i_0_10018_0 = kk_integer_add_small_const(_x_x1478, 1, _ctx); /*int*/
    kk_box_t x_10371;
    kk_function_t _x_x1479 = kk_function_dup(f_0, _ctx); /*(idx : int, value : 2588) -> 2590 2589*/
    x_10371 = kk_function_call(kk_box_t, (kk_function_t, kk_integer_t, kk_box_t, kk_context_t*), _x_x1479, (_x_x1479, i, y, _ctx), _ctx); /*2589*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1222,kk_context());
      kk_box_drop(x_10371, _ctx);
      kk_box_t _x_x1480 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_trmc_lift_map_indexed_6004_fun1481(_acc_0, f_0, i_0_10018_0, yy_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1480, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list _trmc_x10070_0 = kk_datatype_null(); /*list<2589>*/;
      kk_std_core_types__list _trmc_x10071_0 = kk_std_core_types__new_Cons(_ru_x1222, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_10371, _trmc_x10070_0, _ctx); /*list<2589>*/;
      kk_field_addr_t _b_x381_387 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10071_0, _ctx)->tail, _ctx); /*@field-addr<list<2589>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1483 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10071_0, _ctx)),_b_x381_387,kk_context()); /*ctx<0>*/
        ys = yy_0;
        i = i_0_10018_0;
        _acc_0 = _x_x1483;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_integer_drop(i, _ctx);
    kk_function_drop(f_0, _ctx);
    kk_box_t _x_x1484 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1484, KK_OWNED, _ctx);
  }
}
 
// lifted local: map-indexed, map-idx

kk_std_core_types__list kk_std_core_list__lift_map_indexed_6004(kk_function_t f_1, kk_std_core_types__list ys_0, kk_integer_t i_0, kk_context_t* _ctx) { /* forall<a,b,e> (f : (idx : int, value : a) -> e b, ys : list<a>, i : int) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1485 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_map_indexed_6004(f_1, ys_0, i_0, _x_x1485, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_lift_map_peek_6005_10297(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list yy, kk_box_t _trmc_x10072, kk_context_t* _ctx) { /* forall<a,b,e> (ctx<list<b>>, f : (value : a, rest : list<a>) -> e b, yy : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list _trmc_x10073 = kk_datatype_null(); /*list<2651>*/;
  kk_std_core_types__list _trmc_x10074 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _trmc_x10072, _trmc_x10073, _ctx); /*list<2651>*/;
  kk_field_addr_t _b_x399_402 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10074, _ctx)->tail, _ctx); /*@field-addr<list<2651>>*/;
  kk_std_core_types__cctx _x_x1487 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10074, _ctx)),_b_x399_402,kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_map_peek_6005(f, yy, _x_x1487, _ctx);
}
 
// lifted local: map-peek, mappeek


// lift anonymous function
struct kk_std_core_list__trmc_lift_map_peek_6005_fun1492__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_std_core_types__list yy_0;
};
static kk_box_t kk_std_core_list__trmc_lift_map_peek_6005_fun1492(kk_function_t _fself, kk_box_t _b_x407, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_lift_map_peek_6005_fun1492(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_std_core_types__list yy_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_lift_map_peek_6005_fun1492__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_lift_map_peek_6005_fun1492__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_lift_map_peek_6005_fun1492, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->yy_0 = yy_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_lift_map_peek_6005_fun1492(kk_function_t _fself, kk_box_t _b_x407, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_lift_map_peek_6005_fun1492__t* _self = kk_function_as(struct kk_std_core_list__trmc_lift_map_peek_6005_fun1492__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<2651>> */
  kk_function_t f_0 = _self->f_0; /* (value : 2650, rest : list<2650>) -> 2652 2651 */
  kk_std_core_types__list yy_0 = _self->yy_0; /* list<2650> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_std_core_types__list_dup(yy_0, _ctx);}, {}, _ctx)
  kk_box_t _trmc_x10072_0_425 = _b_x407; /*2651*/;
  kk_std_core_types__list _x_x1493 = kk_std_core_list__mlift_trmc_lift_map_peek_6005_10297(_acc_0, f_0, yy_0, _trmc_x10072_0_425, _ctx); /*list<2651>*/
  return kk_std_core_types__list_box(_x_x1493, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_lift_map_peek_6005(kk_function_t f_0, kk_std_core_types__list ys, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,e> (f : (value : a, rest : list<a>) -> e b, ys : list<a>, ctx<list<b>>) -> e list<b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1488 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t y = _con_x1488->head;
    kk_std_core_types__list yy_0 = _con_x1488->tail;
    kk_reuse_t _ru_x1223 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      _ru_x1223 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(y, _ctx);
      kk_std_core_types__list_dup(yy_0, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    kk_box_t x_10377;
    kk_function_t _x_x1490 = kk_function_dup(f_0, _ctx); /*(value : 2650, rest : list<2650>) -> 2652 2651*/
    kk_std_core_types__list _x_x1489 = kk_std_core_types__list_dup(yy_0, _ctx); /*list<2650>*/
    x_10377 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_std_core_types__list, kk_context_t*), _x_x1490, (_x_x1490, y, _x_x1489, _ctx), _ctx); /*2651*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1223,kk_context());
      kk_box_drop(x_10377, _ctx);
      kk_box_t _x_x1491 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_trmc_lift_map_peek_6005_fun1492(_acc_0, f_0, yy_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1491, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list _trmc_x10073_0 = kk_datatype_null(); /*list<2651>*/;
      kk_std_core_types__list _trmc_x10074_0 = kk_std_core_types__new_Cons(_ru_x1223, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_10377, _trmc_x10073_0, _ctx); /*list<2651>*/;
      kk_field_addr_t _b_x413_419 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10074_0, _ctx)->tail, _ctx); /*@field-addr<list<2651>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1494 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10074_0, _ctx)),_b_x413_419,kk_context()); /*ctx<0>*/
        ys = yy_0;
        _acc_0 = _x_x1494;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_function_drop(f_0, _ctx);
    kk_box_t _x_x1495 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1495, KK_OWNED, _ctx);
  }
}
 
// lifted local: map-peek, mappeek

kk_std_core_types__list kk_std_core_list__lift_map_peek_6005(kk_function_t f_1, kk_std_core_types__list ys_0, kk_context_t* _ctx) { /* forall<a,b,e> (f : (value : a, rest : list<a>) -> e b, ys : list<a>) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1496 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_map_peek_6005(f_1, ys_0, _x_x1496, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_lift_map_indexed_peek_6006_10298(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t i_0_10021, kk_std_core_types__list yy, kk_box_t _trmc_x10075, kk_context_t* _ctx) { /* forall<a,b,e> (ctx<list<b>>, f : (idx : int, value : a, rest : list<a>) -> e b, i@0@10021 : int, yy : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list _trmc_x10076 = kk_datatype_null(); /*list<2722>*/;
  kk_std_core_types__list _trmc_x10077 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _trmc_x10075, _trmc_x10076, _ctx); /*list<2722>*/;
  kk_field_addr_t _b_x431_434 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10077, _ctx)->tail, _ctx); /*@field-addr<list<2722>>*/;
  kk_std_core_types__cctx _x_x1498 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10077, _ctx)),_b_x431_434,kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_map_indexed_peek_6006(f, yy, i_0_10021, _x_x1498, _ctx);
}
 
// lifted local: map-indexed-peek, mapidx


// lift anonymous function
struct kk_std_core_list__trmc_lift_map_indexed_peek_6006_fun1504__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_integer_t i_0_10021_0;
  kk_std_core_types__list yy_0;
};
static kk_box_t kk_std_core_list__trmc_lift_map_indexed_peek_6006_fun1504(kk_function_t _fself, kk_box_t _b_x439, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_lift_map_indexed_peek_6006_fun1504(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_integer_t i_0_10021_0, kk_std_core_types__list yy_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_lift_map_indexed_peek_6006_fun1504__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_lift_map_indexed_peek_6006_fun1504__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_lift_map_indexed_peek_6006_fun1504, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->i_0_10021_0 = i_0_10021_0;
  _self->yy_0 = yy_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_lift_map_indexed_peek_6006_fun1504(kk_function_t _fself, kk_box_t _b_x439, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_lift_map_indexed_peek_6006_fun1504__t* _self = kk_function_as(struct kk_std_core_list__trmc_lift_map_indexed_peek_6006_fun1504__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<2722>> */
  kk_function_t f_0 = _self->f_0; /* (idx : int, value : 2721, rest : list<2721>) -> 2723 2722 */
  kk_integer_t i_0_10021_0 = _self->i_0_10021_0; /* int */
  kk_std_core_types__list yy_0 = _self->yy_0; /* list<2721> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_integer_dup(i_0_10021_0, _ctx);kk_std_core_types__list_dup(yy_0, _ctx);}, {}, _ctx)
  kk_box_t _trmc_x10075_0_457 = _b_x439; /*2722*/;
  kk_std_core_types__list _x_x1505 = kk_std_core_list__mlift_trmc_lift_map_indexed_peek_6006_10298(_acc_0, f_0, i_0_10021_0, yy_0, _trmc_x10075_0_457, _ctx); /*list<2722>*/
  return kk_std_core_types__list_box(_x_x1505, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_lift_map_indexed_peek_6006(kk_function_t f_0, kk_std_core_types__list ys, kk_integer_t i, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,e> (f : (idx : int, value : a, rest : list<a>) -> e b, ys : list<a>, i : int, ctx<list<b>>) -> e list<b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1499 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t y = _con_x1499->head;
    kk_std_core_types__list yy_0 = _con_x1499->tail;
    kk_reuse_t _ru_x1224 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      _ru_x1224 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(y, _ctx);
      kk_std_core_types__list_dup(yy_0, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    kk_integer_t i_0_10021_0;
    kk_integer_t _x_x1500 = kk_integer_dup(i, _ctx); /*int*/
    i_0_10021_0 = kk_integer_add_small_const(_x_x1500, 1, _ctx); /*int*/
    kk_box_t x_10382;
    kk_function_t _x_x1502 = kk_function_dup(f_0, _ctx); /*(idx : int, value : 2721, rest : list<2721>) -> 2723 2722*/
    kk_std_core_types__list _x_x1501 = kk_std_core_types__list_dup(yy_0, _ctx); /*list<2721>*/
    x_10382 = kk_function_call(kk_box_t, (kk_function_t, kk_integer_t, kk_box_t, kk_std_core_types__list, kk_context_t*), _x_x1502, (_x_x1502, i, y, _x_x1501, _ctx), _ctx); /*2722*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1224,kk_context());
      kk_box_drop(x_10382, _ctx);
      kk_box_t _x_x1503 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_trmc_lift_map_indexed_peek_6006_fun1504(_acc_0, f_0, i_0_10021_0, yy_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1503, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list _trmc_x10076_0 = kk_datatype_null(); /*list<2722>*/;
      kk_std_core_types__list _trmc_x10077_0 = kk_std_core_types__new_Cons(_ru_x1224, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_10382, _trmc_x10076_0, _ctx); /*list<2722>*/;
      kk_field_addr_t _b_x445_451 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10077_0, _ctx)->tail, _ctx); /*@field-addr<list<2722>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1506 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10077_0, _ctx)),_b_x445_451,kk_context()); /*ctx<0>*/
        ys = yy_0;
        i = i_0_10021_0;
        _acc_0 = _x_x1506;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_integer_drop(i, _ctx);
    kk_function_drop(f_0, _ctx);
    kk_box_t _x_x1507 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1507, KK_OWNED, _ctx);
  }
}
 
// lifted local: map-indexed-peek, mapidx

kk_std_core_types__list kk_std_core_list__lift_map_indexed_peek_6006(kk_function_t f_1, kk_std_core_types__list ys_0, kk_integer_t i_0, kk_context_t* _ctx) { /* forall<a,b,e> (f : (idx : int, value : a, rest : list<a>) -> e b, ys : list<a>, i : int) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1508 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_map_indexed_peek_6006(f_1, ys_0, i_0, _x_x1508, _ctx);
}
 
// Create a list of `n` repeated elements `x`

kk_std_core_types__list kk_std_core_list__trmc_replicate(kk_box_t x, kk_integer_t n, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* forall<a> (x : a, n : int, ctx<list<a>>) -> list<a> */ 
  kk__tailcall: ;
  bool _match_x1166 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x1166) {
    kk_std_core_types__list _trmc_x10078 = kk_datatype_null(); /*list<2781>*/;
    kk_std_core_types__list _trmc_x10079;
    kk_box_t _x_x1510 = kk_box_dup(x, _ctx); /*2781*/
    _trmc_x10079 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x1510, _trmc_x10078, _ctx); /*list<2781>*/
    kk_field_addr_t _b_x463_468 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10079, _ctx)->tail, _ctx); /*@field-addr<list<2781>>*/;
    { // tailcall
      kk_integer_t _x_x1511 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
      kk_std_core_types__cctx _x_x1512 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10079, _ctx)),_b_x463_468,kk_context()); /*ctx<0>*/
      n = _x_x1511;
      _acc = _x_x1512;
      goto kk__tailcall;
    }
  }
  {
    kk_box_drop(x, _ctx);
    kk_integer_drop(n, _ctx);
    kk_box_t _x_x1513 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1513, KK_OWNED, _ctx);
  }
}
 
// Create a list of `n` repeated elements `x`

kk_std_core_types__list kk_std_core_list_replicate(kk_box_t x_0, kk_integer_t n_0, kk_context_t* _ctx) { /* forall<a> (x : a, n : int) -> list<a> */ 
  kk_std_core_types__cctx _x_x1514 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_replicate(x_0, n_0, _x_x1514, _ctx);
}
 
// Remove those elements of a list that satisfy the given predicate `pred`.
// For example: `remove([1,2,3],odd?) == [2]`


// lift anonymous function
struct kk_std_core_list_remove_fun1515__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static bool kk_std_core_list_remove_fun1515(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_remove_fun1515(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_core_list_remove_fun1515__t* _self = kk_function_alloc_as(struct kk_std_core_list_remove_fun1515__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_remove_fun1515, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_core_list_remove_fun1517__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_list_remove_fun1517(kk_function_t _fself, kk_box_t _b_x475, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_remove_fun1517(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_list_remove_fun1517, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_list_remove_fun1517(kk_function_t _fself, kk_box_t _b_x475, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _y_x10181_477 = kk_bool_unbox(_b_x475); /*bool*/;
  bool _x_x1518;
  if (_y_x10181_477) {
    _x_x1518 = false; /*bool*/
  }
  else {
    _x_x1518 = true; /*bool*/
  }
  return kk_bool_box(_x_x1518);
}
static bool kk_std_core_list_remove_fun1515(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_core_list_remove_fun1515__t* _self = kk_function_as(struct kk_std_core_list_remove_fun1515__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (2821) -> 2822 bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  bool x_0_10390 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), pred, (pred, x, _ctx), _ctx); /*bool*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1516 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_remove_fun1517(_ctx), _ctx); /*2419*/
    return kk_bool_unbox(_x_x1516);
  }
  if (x_0_10390) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_std_core_list_remove(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool) -> e list<a> */ 
  kk_std_core_types__cctx _x_x1519 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_filter(xs, kk_std_core_list_new_remove_fun1515(pred, _ctx), _x_x1519, _ctx);
}
 
// monadic lift

kk_std_core_types__tuple2 kk_std_core_list__mlift_partition_acc_10300(kk_std_core_types__cctx acc1, kk_std_core_types__cctx acc2, kk_function_t pred, kk_box_t x, kk_std_core_types__list xx, bool _y_x10183, kk_context_t* _ctx) { /* forall<a,e> (acc1 : ctx<list<a>>, acc2 : ctx<list<a>>, pred : (a) -> e bool, x : a, xx : list<a>, bool) -> e (list<a>, list<a>) */ 
  if (_y_x10183) {
    kk_std_core_types__list _cctx_x2924;
    kk_std_core_types__list _x_x1520 = kk_datatype_null(); /*list<2984>*/
    _cctx_x2924 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), x, _x_x1520, _ctx); /*list<2984>*/
    kk_field_addr_t _cctx_x2925 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x2924, _ctx)->tail, _ctx); /*@field-addr<list<2984>>*/;
    kk_std_core_types__list _b_x484_494 = _cctx_x2924; /*list<2984>*/;
    kk_field_addr_t _b_x485_495 = _cctx_x2925; /*@field-addr<list<2984>>*/;
    kk_std_core_types__cctx _own_x1163;
    kk_std_core_types__cctx _x_x1521 = kk_cctx_create((kk_std_core_types__list_box(_b_x484_494, _ctx)),_b_x485_495,kk_context()); /*cctx<0,1>*/
    _own_x1163 = kk_cctx_compose(acc1,_x_x1521,kk_context()); /*cctx<394,396>*/
    kk_std_core_types__tuple2 _brw_x1164 = kk_std_core_list_partition_acc(xx, pred, _own_x1163, acc2, _ctx); /*(list<2984>, list<2984>)*/;
    kk_function_drop(pred, _ctx);
    return _brw_x1164;
  }
  {
    kk_std_core_types__list _cctx_x2971;
    kk_std_core_types__list _x_x1522 = kk_datatype_null(); /*list<2984>*/
    _cctx_x2971 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), x, _x_x1522, _ctx); /*list<2984>*/
    kk_field_addr_t _cctx_x2972 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x2971, _ctx)->tail, _ctx); /*@field-addr<list<2984>>*/;
    kk_std_core_types__list _b_x492_496 = _cctx_x2971; /*list<2984>*/;
    kk_field_addr_t _b_x493_497 = _cctx_x2972; /*@field-addr<list<2984>>*/;
    kk_std_core_types__cctx _own_x1161;
    kk_std_core_types__cctx _x_x1523 = kk_cctx_create((kk_std_core_types__list_box(_b_x492_496, _ctx)),_b_x493_497,kk_context()); /*cctx<0,1>*/
    _own_x1161 = kk_cctx_compose(acc2,_x_x1523,kk_context()); /*cctx<394,396>*/
    kk_std_core_types__tuple2 _brw_x1162 = kk_std_core_list_partition_acc(xx, pred, acc1, _own_x1161, _ctx); /*(list<2984>, list<2984>)*/;
    kk_function_drop(pred, _ctx);
    return _brw_x1162;
  }
}


// lift anonymous function
struct kk_std_core_list_partition_acc_fun1531__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx acc1_0;
  kk_std_core_types__cctx acc2_0;
  kk_function_t pred_0;
  kk_box_t x_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list_partition_acc_fun1531(kk_function_t _fself, kk_box_t _b_x505, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_partition_acc_fun1531(kk_std_core_types__cctx acc1_0, kk_std_core_types__cctx acc2_0, kk_function_t pred_0, kk_box_t x_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list_partition_acc_fun1531__t* _self = kk_function_alloc_as(struct kk_std_core_list_partition_acc_fun1531__t, 8, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_partition_acc_fun1531, kk_context());
  _self->acc1_0 = acc1_0;
  _self->acc2_0 = acc2_0;
  _self->pred_0 = pred_0;
  _self->x_0 = x_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_partition_acc_fun1531(kk_function_t _fself, kk_box_t _b_x505, kk_context_t* _ctx) {
  struct kk_std_core_list_partition_acc_fun1531__t* _self = kk_function_as(struct kk_std_core_list_partition_acc_fun1531__t*, _fself, _ctx);
  kk_std_core_types__cctx acc1_0 = _self->acc1_0; /* ctx<list<2984>> */
  kk_std_core_types__cctx acc2_0 = _self->acc2_0; /* ctx<list<2984>> */
  kk_function_t pred_0 = _self->pred_0; /* (2984) -> 2985 bool */
  kk_box_t x_0 = _self->x_0; /* 2984 */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<2984> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(acc1_0, _ctx);kk_std_core_types__cctx_dup(acc2_0, _ctx);kk_function_dup(pred_0, _ctx);kk_box_dup(x_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  bool _y_x10183_0_533 = kk_bool_unbox(_b_x505); /*bool*/;
  kk_std_core_types__tuple2 _x_x1532 = kk_std_core_list__mlift_partition_acc_10300(acc1_0, acc2_0, pred_0, x_0, xx_0, _y_x10183_0_533, _ctx); /*(list<2984>, list<2984>)*/
  return kk_std_core_types__tuple2_box(_x_x1532, _ctx);
}

kk_std_core_types__tuple2 kk_std_core_list_partition_acc(kk_std_core_types__list xs, kk_function_t pred_0, kk_std_core_types__cctx acc1_0, kk_std_core_types__cctx acc2_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool, acc1 : ctx<list<a>>, acc2 : ctx<list<a>>) -> e (list<a>, list<a>) */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_std_core_types__list _b_x502_522;
    kk_box_t _x_x1524 = kk_cctx_apply(acc1_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    _b_x502_522 = kk_std_core_types__list_unbox(_x_x1524, KK_OWNED, _ctx); /*list<2984>*/
    kk_std_core_types__list _b_x503_523;
    kk_box_t _x_x1525 = kk_cctx_apply(acc2_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    _b_x503_523 = kk_std_core_types__list_unbox(_x_x1525, KK_OWNED, _ctx); /*list<2984>*/
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x502_522, _ctx), kk_std_core_types__list_box(_b_x503_523, _ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x1526 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x1526->head;
    kk_std_core_types__list xx_0 = _con_x1526->tail;
    kk_reuse_t _ru_x1225 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1225 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x_0, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool x_1_10393;
    kk_function_t _x_x1528 = kk_function_dup(pred_0, _ctx); /*(2984) -> 2985 bool*/
    kk_box_t _x_x1527 = kk_box_dup(x_0, _ctx); /*2984*/
    x_1_10393 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x1528, (_x_x1528, _x_x1527, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1225,kk_context());
      kk_box_t _x_x1529;
      kk_function_t _x_x1530;
      kk_function_dup(pred_0, _ctx);
      _x_x1530 = kk_std_core_list_new_partition_acc_fun1531(acc1_0, acc2_0, pred_0, x_0, xx_0, _ctx); /*(2418) -> 2420 2419*/
      _x_x1529 = kk_std_core_hnd_yield_extend(_x_x1530, _ctx); /*2419*/
      return kk_std_core_types__tuple2_unbox(_x_x1529, KK_OWNED, _ctx);
    }
    if (x_1_10393) {
      kk_std_core_types__list _cctx_x2924_0;
      kk_std_core_types__list _x_x1533 = kk_datatype_null(); /*list<2984>*/
      _cctx_x2924_0 = kk_std_core_types__new_Cons(_ru_x1225, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_0, _x_x1533, _ctx); /*list<2984>*/
      kk_field_addr_t _cctx_x2925_0 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x2924_0, _ctx)->tail, _ctx); /*@field-addr<list<2984>>*/;
      kk_std_core_types__list _b_x512_529 = _cctx_x2924_0; /*list<2984>*/;
      kk_field_addr_t _b_x513_530 = _cctx_x2925_0; /*@field-addr<list<2984>>*/;
      kk_std_core_types__cctx _own_x1160;
      kk_std_core_types__cctx _x_x1534 = kk_cctx_create((kk_std_core_types__list_box(_b_x512_529, _ctx)),_b_x513_530,kk_context()); /*cctx<0,1>*/
      _own_x1160 = kk_cctx_compose(acc1_0,_x_x1534,kk_context()); /*cctx<394,396>*/
      { // tailcall
        xs = xx_0;
        acc1_0 = _own_x1160;
        goto kk__tailcall;
      }
    }
    {
      kk_std_core_types__list _cctx_x2971_0;
      kk_std_core_types__list _x_x1535 = kk_datatype_null(); /*list<2984>*/
      _cctx_x2971_0 = kk_std_core_types__new_Cons(_ru_x1225, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_0, _x_x1535, _ctx); /*list<2984>*/
      kk_field_addr_t _cctx_x2972_0 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x2971_0, _ctx)->tail, _ctx); /*@field-addr<list<2984>>*/;
      kk_std_core_types__list _b_x520_531 = _cctx_x2971_0; /*list<2984>*/;
      kk_field_addr_t _b_x521_532 = _cctx_x2972_0; /*@field-addr<list<2984>>*/;
      kk_std_core_types__cctx _own_x1159;
      kk_std_core_types__cctx _x_x1536 = kk_cctx_create((kk_std_core_types__list_box(_b_x520_531, _ctx)),_b_x521_532,kk_context()); /*cctx<0,1>*/
      _own_x1159 = kk_cctx_compose(acc2_0,_x_x1536,kk_context()); /*cctx<394,396>*/
      { // tailcall
        xs = xx_0;
        acc2_0 = _own_x1159;
        goto kk__tailcall;
      }
    }
  }
}
 
// Lookup the first element satisfying some predicate


// lift anonymous function
struct kk_std_core_list_lookup_fun1538__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_std_core_types__maybe kk_std_core_list_lookup_fun1538(kk_function_t _fself, kk_box_t _b_x538, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_lookup_fun1538(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_core_list_lookup_fun1538__t* _self = kk_function_alloc_as(struct kk_std_core_list_lookup_fun1538__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_lookup_fun1538, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_core_list_lookup_fun1541__t {
  struct kk_function_s _base;
  kk_box_t _b_x538;
};
static kk_std_core_types__maybe kk_std_core_list_lookup_fun1541(kk_function_t _fself, bool _y_x10189, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_lookup_fun1541(kk_box_t _b_x538, kk_context_t* _ctx) {
  struct kk_std_core_list_lookup_fun1541__t* _self = kk_function_alloc_as(struct kk_std_core_list_lookup_fun1541__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_lookup_fun1541, kk_context());
  _self->_b_x538 = _b_x538;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_core_list_lookup_fun1541(kk_function_t _fself, bool _y_x10189, kk_context_t* _ctx) {
  struct kk_std_core_list_lookup_fun1541__t* _self = kk_function_as(struct kk_std_core_list_lookup_fun1541__t*, _fself, _ctx);
  kk_box_t _b_x538 = _self->_b_x538; /* 1661 */
  kk_drop_match(_self, {kk_box_dup(_b_x538, _ctx);}, {}, _ctx)
  if (_y_x10189) {
    kk_box_t _x_x1542;
    kk_std_core_types__tuple2 _match_x1154 = kk_std_core_types__tuple2_unbox(_b_x538, KK_OWNED, _ctx); /*(3167, 3168)*/;
    {
      kk_box_t _x_0 = _match_x1154.snd;
      kk_box_dup(_x_0, _ctx);
      kk_std_core_types__tuple2_drop(_match_x1154, _ctx);
      _x_x1542 = _x_0; /*3168*/
    }
    return kk_std_core_types__new_Just(_x_x1542, _ctx);
  }
  {
    kk_box_drop(_b_x538, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_std_core_list_lookup_fun1544__t {
  struct kk_function_s _base;
  kk_function_t next_10397;
};
static kk_box_t kk_std_core_list_lookup_fun1544(kk_function_t _fself, kk_box_t _b_x535, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_lookup_fun1544(kk_function_t next_10397, kk_context_t* _ctx) {
  struct kk_std_core_list_lookup_fun1544__t* _self = kk_function_alloc_as(struct kk_std_core_list_lookup_fun1544__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_lookup_fun1544, kk_context());
  _self->next_10397 = next_10397;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_lookup_fun1544(kk_function_t _fself, kk_box_t _b_x535, kk_context_t* _ctx) {
  struct kk_std_core_list_lookup_fun1544__t* _self = kk_function_as(struct kk_std_core_list_lookup_fun1544__t*, _fself, _ctx);
  kk_function_t next_10397 = _self->next_10397; /* (bool) -> 3169 maybe<3168> */
  kk_drop_match(_self, {kk_function_dup(next_10397, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x1545;
  bool _x_x1546 = kk_bool_unbox(_b_x535); /*bool*/
  _x_x1545 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, bool, kk_context_t*), next_10397, (next_10397, _x_x1546, _ctx), _ctx); /*maybe<3168>*/
  return kk_std_core_types__maybe_box(_x_x1545, _ctx);
}
static kk_std_core_types__maybe kk_std_core_list_lookup_fun1538(kk_function_t _fself, kk_box_t _b_x538, kk_context_t* _ctx) {
  struct kk_std_core_list_lookup_fun1538__t* _self = kk_function_as(struct kk_std_core_list_lookup_fun1538__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (3167) -> 3169 bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  bool x_10396;
  kk_box_t _x_x1539;
  kk_std_core_types__tuple2 _match_x1155;
  kk_box_t _x_x1540 = kk_box_dup(_b_x538, _ctx); /*1661*/
  _match_x1155 = kk_std_core_types__tuple2_unbox(_x_x1540, KK_OWNED, _ctx); /*(3167, 3168)*/
  {
    kk_box_t _x = _match_x1155.fst;
    kk_box_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x1155, _ctx);
    _x_x1539 = _x; /*3167*/
  }
  x_10396 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), pred, (pred, _x_x1539, _ctx), _ctx); /*bool*/
  kk_function_t next_10397 = kk_std_core_list_new_lookup_fun1541(_b_x538, _ctx); /*(bool) -> 3169 maybe<3168>*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1543 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_lookup_fun1544(next_10397, _ctx), _ctx); /*2419*/
    return kk_std_core_types__maybe_unbox(_x_x1543, KK_OWNED, _ctx);
  }
  {
    return kk_function_call(kk_std_core_types__maybe, (kk_function_t, bool, kk_context_t*), next_10397, (next_10397, x_10396, _ctx), _ctx);
  }
}

kk_std_core_types__maybe kk_std_core_list_lookup(kk_std_core_types__list xs, kk_function_t pred, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<(a, b)>, pred : (a) -> e bool) -> e maybe<b> */ 
  return kk_std_core_list_foreach_while(xs, kk_std_core_list_new_lookup_fun1538(pred, _ctx), _ctx);
}
 
// monadic lift

kk_integer_t kk_std_core_list__mlift_index_of_acc_10302(kk_integer_t idx, kk_function_t pred, kk_std_core_types__list xx, bool _y_x10192, kk_context_t* _ctx) { /* forall<a,e> (idx : int, pred : (a) -> e bool, xx : list<a>, bool) -> e int */ 
  if (_y_x10192) {
    kk_std_core_types__list_drop(xx, _ctx);
    kk_function_drop(pred, _ctx);
    return idx;
  }
  {
    kk_integer_t _x_x1547 = kk_integer_add_small_const(idx, 1, _ctx); /*int*/
    return kk_std_core_list_index_of_acc(xx, pred, _x_x1547, _ctx);
  }
}


// lift anonymous function
struct kk_std_core_list_index_of_acc_fun1551__t {
  struct kk_function_s _base;
  kk_integer_t idx_0;
  kk_function_t pred_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list_index_of_acc_fun1551(kk_function_t _fself, kk_box_t _b_x544, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_index_of_acc_fun1551(kk_integer_t idx_0, kk_function_t pred_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list_index_of_acc_fun1551__t* _self = kk_function_alloc_as(struct kk_std_core_list_index_of_acc_fun1551__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_index_of_acc_fun1551, kk_context());
  _self->idx_0 = idx_0;
  _self->pred_0 = pred_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_index_of_acc_fun1551(kk_function_t _fself, kk_box_t _b_x544, kk_context_t* _ctx) {
  struct kk_std_core_list_index_of_acc_fun1551__t* _self = kk_function_as(struct kk_std_core_list_index_of_acc_fun1551__t*, _fself, _ctx);
  kk_integer_t idx_0 = _self->idx_0; /* int */
  kk_function_t pred_0 = _self->pred_0; /* (3224) -> 3225 bool */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<3224> */
  kk_drop_match(_self, {kk_integer_dup(idx_0, _ctx);kk_function_dup(pred_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  bool _y_x10192_0_546 = kk_bool_unbox(_b_x544); /*bool*/;
  kk_integer_t _x_x1552 = kk_std_core_list__mlift_index_of_acc_10302(idx_0, pred_0, xx_0, _y_x10192_0_546, _ctx); /*int*/
  return kk_integer_box(_x_x1552, _ctx);
}

kk_integer_t kk_std_core_list_index_of_acc(kk_std_core_types__list xs, kk_function_t pred_0, kk_integer_t idx_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, pred : (a) -> e bool, idx : int) -> e int */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1548 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1548->head;
    kk_std_core_types__list xx_0 = _con_x1548->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool x_0_10400;
    kk_function_t _x_x1549 = kk_function_dup(pred_0, _ctx); /*(3224) -> 3225 bool*/
    x_0_10400 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x1549, (_x_x1549, x, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1550 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_index_of_acc_fun1551(idx_0, pred_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_integer_unbox(_x_x1550, _ctx);
    }
    if (x_0_10400) {
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_function_drop(pred_0, _ctx);
      return idx_0;
    }
    { // tailcall
      kk_integer_t _x_x1553 = kk_integer_add_small_const(idx_0, 1, _ctx); /*int*/
      xs = xx_0;
      idx_0 = _x_x1553;
      goto kk__tailcall;
    }
  }
  {
    kk_function_drop(pred_0, _ctx);
    kk_integer_drop(idx_0, _ctx);
    return kk_integer_from_small(-1);
  }
}
 
// monadic lift

kk_unit_t kk_std_core_list__mlift_foreach_10303(kk_function_t action, kk_std_core_types__list xx, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<a,e> (action : (a) -> e (), xx : list<a>, wild_ : ()) -> e () */ 
  kk_std_core_list_foreach(xx, action, _ctx); return kk_Unit;
}
 
// Invoke `action` for each element of a list


// lift anonymous function
struct kk_std_core_list_foreach_fun1557__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list_foreach_fun1557(kk_function_t _fself, kk_box_t _b_x548, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_foreach_fun1557(kk_function_t action_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list_foreach_fun1557__t* _self = kk_function_alloc_as(struct kk_std_core_list_foreach_fun1557__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_foreach_fun1557, kk_context());
  _self->action_0 = action_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_foreach_fun1557(kk_function_t _fself, kk_box_t _b_x548, kk_context_t* _ctx) {
  struct kk_std_core_list_foreach_fun1557__t* _self = kk_function_as(struct kk_std_core_list_foreach_fun1557__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (3304) -> 3305 () */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<3304> */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_550 = kk_Unit;
  kk_unit_unbox(_b_x548);
  kk_unit_t _x_x1558 = kk_Unit;
  kk_std_core_list__mlift_foreach_10303(action_0, xx_0, wild___0_550, _ctx);
  return kk_unit_box(_x_x1558);
}

kk_unit_t kk_std_core_list_foreach(kk_std_core_types__list xs, kk_function_t action_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, action : (a) -> e ()) -> e () */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1554 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1554->head;
    kk_std_core_types__list xx_0 = _con_x1554->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_unit_t x_0_10403 = kk_Unit;
    kk_function_t _x_x1555 = kk_function_dup(action_0, _ctx); /*(3304) -> 3305 ()*/
    kk_function_call(kk_unit_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x1555, (_x_x1555, x, _ctx), _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1556 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_foreach_fun1557(action_0, xx_0, _ctx), _ctx); /*2419*/
      kk_unit_unbox(_x_x1556); return kk_Unit;
    }
    { // tailcall
      xs = xx_0;
      goto kk__tailcall;
    }
  }
  {
    kk_function_drop(action_0, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_map_while_10304(kk_std_core_types__cctx _acc, kk_function_t action, kk_std_core_types__list xx, kk_std_core_types__maybe _y_x10200, kk_context_t* _ctx) { /* forall<a,b,e> (ctx<list<b>>, action : (a) -> e maybe<b>, xx : list<a>, maybe<b>) -> e list<b> */ 
  if (kk_std_core_types__is_Just(_y_x10200, _ctx)) {
    kk_box_t y = _y_x10200._cons.Just.value;
    kk_std_core_types__list _trmc_x10080 = kk_datatype_null(); /*list<3382>*/;
    kk_std_core_types__list _trmc_x10081 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), y, _trmc_x10080, _ctx); /*list<3382>*/;
    kk_field_addr_t _b_x556_561 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10081, _ctx)->tail, _ctx); /*@field-addr<list<3382>>*/;
    kk_std_core_types__cctx _x_x1559 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10081, _ctx)),_b_x556_561,kk_context()); /*ctx<0>*/
    return kk_std_core_list__trmc_map_while(xx, action, _x_x1559, _ctx);
  }
  {
    kk_std_core_types__list_drop(xx, _ctx);
    kk_function_drop(action, _ctx);
    kk_box_t _x_x1560 = kk_cctx_apply(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1560, KK_OWNED, _ctx);
  }
}
 
// Invoke `action` on each element of a list while `action` returns `Just`


// lift anonymous function
struct kk_std_core_list__trmc_map_while_fun1565__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t action_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list__trmc_map_while_fun1565(kk_function_t _fself, kk_box_t _b_x570, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_map_while_fun1565(kk_std_core_types__cctx _acc_0, kk_function_t action_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_map_while_fun1565__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_map_while_fun1565__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_map_while_fun1565, kk_context());
  _self->_acc_0 = _acc_0;
  _self->action_0 = action_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_map_while_fun1565(kk_function_t _fself, kk_box_t _b_x570, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_map_while_fun1565__t* _self = kk_function_as(struct kk_std_core_list__trmc_map_while_fun1565__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<3382>> */
  kk_function_t action_0 = _self->action_0; /* (3381) -> 3383 maybe<3382> */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<3381> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(action_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10200_0_590 = kk_std_core_types__maybe_unbox(_b_x570, KK_OWNED, _ctx); /*maybe<3382>*/;
  kk_std_core_types__list _x_x1566 = kk_std_core_list__mlift_trmc_map_while_10304(_acc_0, action_0, xx_0, _y_x10200_0_590, _ctx); /*list<3382>*/
  return kk_std_core_types__list_box(_x_x1566, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_map_while(kk_std_core_types__list xs, kk_function_t action_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, action : (a) -> e maybe<b>, ctx<list<b>>) -> e list<b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(action_0, _ctx);
    kk_box_t _x_x1561 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1561, KK_OWNED, _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x1562 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1562->head;
    kk_std_core_types__list xx_0 = _con_x1562->tail;
    kk_reuse_t _ru_x1228 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1228 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__maybe x_0_10406;
    kk_function_t _x_x1563 = kk_function_dup(action_0, _ctx); /*(3381) -> 3383 maybe<3382>*/
    x_0_10406 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_box_t, kk_context_t*), _x_x1563, (_x_x1563, x, _ctx), _ctx); /*maybe<3382>*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1228,kk_context());
      kk_std_core_types__maybe_drop(x_0_10406, _ctx);
      kk_box_t _x_x1564 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_trmc_map_while_fun1565(_acc_0, action_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1564, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Just(x_0_10406, _ctx)) {
      kk_box_t y_0 = x_0_10406._cons.Just.value;
      kk_std_core_types__list _trmc_x10080_0 = kk_datatype_null(); /*list<3382>*/;
      kk_std_core_types__list _trmc_x10081_0 = kk_std_core_types__new_Cons(_ru_x1228, kk_field_index_of(struct kk_std_core_types_Cons, tail), y_0, _trmc_x10080_0, _ctx); /*list<3382>*/;
      kk_field_addr_t _b_x576_584 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10081_0, _ctx)->tail, _ctx); /*@field-addr<list<3382>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1567 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10081_0, _ctx)),_b_x576_584,kk_context()); /*ctx<0>*/
        xs = xx_0;
        _acc_0 = _x_x1567;
        goto kk__tailcall;
      }
    }
    {
      kk_reuse_drop(_ru_x1228,kk_context());
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_function_drop(action_0, _ctx);
      kk_box_t _x_x1568 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
      return kk_std_core_types__list_unbox(_x_x1568, KK_OWNED, _ctx);
    }
  }
}
 
// Invoke `action` on each element of a list while `action` returns `Just`

kk_std_core_types__list kk_std_core_list_map_while(kk_std_core_types__list xs_0, kk_function_t action_1, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, action : (a) -> e maybe<b>) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1569 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_map_while(xs_0, action_1, _x_x1569, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_core_list__mlift_foreach_indexed_10306_fun1572__t {
  struct kk_function_s _base;
  kk_ref_t i;
};
static kk_unit_t kk_std_core_list__mlift_foreach_indexed_10306_fun1572(kk_function_t _fself, kk_integer_t _y_x10208, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_mlift_foreach_indexed_10306_fun1572(kk_ref_t i, kk_context_t* _ctx) {
  struct kk_std_core_list__mlift_foreach_indexed_10306_fun1572__t* _self = kk_function_alloc_as(struct kk_std_core_list__mlift_foreach_indexed_10306_fun1572__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__mlift_foreach_indexed_10306_fun1572, kk_context());
  _self->i = i;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_std_core_list__mlift_foreach_indexed_10306_fun1572(kk_function_t _fself, kk_integer_t _y_x10208, kk_context_t* _ctx) {
  struct kk_std_core_list__mlift_foreach_indexed_10306_fun1572__t* _self = kk_function_as(struct kk_std_core_list__mlift_foreach_indexed_10306_fun1572__t*, _fself, _ctx);
  kk_ref_t i = _self->i; /* local-var<3510,int> */
  kk_drop_match(_self, {kk_ref_dup(i, _ctx);}, {}, _ctx)
  kk_integer_t _b_x600_602 = kk_integer_add_small_const(_y_x10208, 1, _ctx); /*int*/;
  kk_unit_t _brw_x1148 = kk_Unit;
  kk_ref_set_borrow(i,(kk_integer_box(_b_x600_602, _ctx)),kk_context());
  kk_ref_drop(i, _ctx);
  _brw_x1148; return kk_Unit;
}


// lift anonymous function
struct kk_std_core_list__mlift_foreach_indexed_10306_fun1574__t {
  struct kk_function_s _base;
  kk_function_t next_10410;
};
static kk_box_t kk_std_core_list__mlift_foreach_indexed_10306_fun1574(kk_function_t _fself, kk_box_t _b_x604, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_mlift_foreach_indexed_10306_fun1574(kk_function_t next_10410, kk_context_t* _ctx) {
  struct kk_std_core_list__mlift_foreach_indexed_10306_fun1574__t* _self = kk_function_alloc_as(struct kk_std_core_list__mlift_foreach_indexed_10306_fun1574__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__mlift_foreach_indexed_10306_fun1574, kk_context());
  _self->next_10410 = next_10410;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__mlift_foreach_indexed_10306_fun1574(kk_function_t _fself, kk_box_t _b_x604, kk_context_t* _ctx) {
  struct kk_std_core_list__mlift_foreach_indexed_10306_fun1574__t* _self = kk_function_as(struct kk_std_core_list__mlift_foreach_indexed_10306_fun1574__t*, _fself, _ctx);
  kk_function_t next_10410 = _self->next_10410; /* (int) -> <local<3510>|3521> () */
  kk_drop_match(_self, {kk_function_dup(next_10410, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1575 = kk_Unit;
  kk_integer_t _x_x1576 = kk_integer_unbox(_b_x604, _ctx); /*int*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next_10410, (next_10410, _x_x1576, _ctx), _ctx);
  return kk_unit_box(_x_x1575);
}

kk_unit_t kk_std_core_list__mlift_foreach_indexed_10306(kk_ref_t i, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,e> (i : local-var<h,int>, wild_ : ()) -> <local<h>|e> () */ 
  kk_integer_t x_10409;
  kk_box_t _x_x1570;
  kk_ref_t _x_x1571 = kk_ref_dup(i, _ctx); /*local-var<3510,int>*/
  _x_x1570 = kk_ref_get(_x_x1571,kk_context()); /*298*/
  x_10409 = kk_integer_unbox(_x_x1570, _ctx); /*int*/
  kk_function_t next_10410 = kk_std_core_list__new_mlift_foreach_indexed_10306_fun1572(i, _ctx); /*(int) -> <local<3510>|3521> ()*/;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10409, _ctx);
    kk_box_t _x_x1573 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_mlift_foreach_indexed_10306_fun1574(next_10410, _ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x1573); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next_10410, (next_10410, x_10409, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_core_list__mlift_foreach_indexed_10307_fun1578__t {
  struct kk_function_s _base;
  kk_ref_t i;
};
static kk_box_t kk_std_core_list__mlift_foreach_indexed_10307_fun1578(kk_function_t _fself, kk_box_t _b_x607, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_mlift_foreach_indexed_10307_fun1578(kk_ref_t i, kk_context_t* _ctx) {
  struct kk_std_core_list__mlift_foreach_indexed_10307_fun1578__t* _self = kk_function_alloc_as(struct kk_std_core_list__mlift_foreach_indexed_10307_fun1578__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__mlift_foreach_indexed_10307_fun1578, kk_context());
  _self->i = i;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__mlift_foreach_indexed_10307_fun1578(kk_function_t _fself, kk_box_t _b_x607, kk_context_t* _ctx) {
  struct kk_std_core_list__mlift_foreach_indexed_10307_fun1578__t* _self = kk_function_as(struct kk_std_core_list__mlift_foreach_indexed_10307_fun1578__t*, _fself, _ctx);
  kk_ref_t i = _self->i; /* local-var<3510,int> */
  kk_drop_match(_self, {kk_ref_dup(i, _ctx);}, {}, _ctx)
  kk_unit_t wild___609 = kk_Unit;
  kk_unit_unbox(_b_x607);
  kk_unit_t _x_x1579 = kk_Unit;
  kk_std_core_list__mlift_foreach_indexed_10306(i, wild___609, _ctx);
  return kk_unit_box(_x_x1579);
}

kk_unit_t kk_std_core_list__mlift_foreach_indexed_10307(kk_function_t action, kk_ref_t i, kk_box_t x, kk_integer_t j, kk_context_t* _ctx) { /* forall<h,a,e> (action : (int, a) -> e (), i : local-var<h,int>, x : a, j : int) -> <local<h>|e> () */ 
  kk_unit_t x_0_10413 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_box_t, kk_context_t*), action, (action, j, x, _ctx), _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1577 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_mlift_foreach_indexed_10307_fun1578(i, _ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x1577); return kk_Unit;
  }
  {
    kk_std_core_list__mlift_foreach_indexed_10306(i, x_0_10413, _ctx); return kk_Unit;
  }
}
 
// Invoke `action` for each element of a list, passing also the position of the element.


// lift anonymous function
struct kk_std_core_list_foreach_indexed_fun1581__t {
  struct kk_function_s _base;
  kk_function_t action;
  kk_ref_t loc;
};
static kk_unit_t kk_std_core_list_foreach_indexed_fun1581(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_foreach_indexed_fun1581(kk_function_t action, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_core_list_foreach_indexed_fun1581__t* _self = kk_function_alloc_as(struct kk_std_core_list_foreach_indexed_fun1581__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_foreach_indexed_fun1581, kk_context());
  _self->action = action;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_core_list_foreach_indexed_fun1585__t {
  struct kk_function_s _base;
  kk_function_t action;
  kk_ref_t loc;
  kk_box_t x;
};
static kk_box_t kk_std_core_list_foreach_indexed_fun1585(kk_function_t _fself, kk_box_t _b_x617, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_foreach_indexed_fun1585(kk_function_t action, kk_ref_t loc, kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_core_list_foreach_indexed_fun1585__t* _self = kk_function_alloc_as(struct kk_std_core_list_foreach_indexed_fun1585__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_foreach_indexed_fun1585, kk_context());
  _self->action = action;
  _self->loc = loc;
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_foreach_indexed_fun1585(kk_function_t _fself, kk_box_t _b_x617, kk_context_t* _ctx) {
  struct kk_std_core_list_foreach_indexed_fun1585__t* _self = kk_function_as(struct kk_std_core_list_foreach_indexed_fun1585__t*, _fself, _ctx);
  kk_function_t action = _self->action; /* (int, 3520) -> 3521 () */
  kk_ref_t loc = _self->loc; /* local-var<3510,int> */
  kk_box_t x = _self->x; /* 3520 */
  kk_drop_match(_self, {kk_function_dup(action, _ctx);kk_ref_dup(loc, _ctx);kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_unit_t _x_x1586 = kk_Unit;
  kk_integer_t _x_x1587 = kk_integer_unbox(_b_x617, _ctx); /*int*/
  kk_std_core_list__mlift_foreach_indexed_10307(action, loc, x, _x_x1587, _ctx);
  return kk_unit_box(_x_x1586);
}
static kk_unit_t kk_std_core_list_foreach_indexed_fun1581(kk_function_t _fself, kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_core_list_foreach_indexed_fun1581__t* _self = kk_function_as(struct kk_std_core_list_foreach_indexed_fun1581__t*, _fself, _ctx);
  kk_function_t action = _self->action; /* (int, 3520) -> 3521 () */
  kk_ref_t loc = _self->loc; /* local-var<3510,int> */
  kk_drop_match(_self, {kk_function_dup(action, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_integer_t x_0_10418;
  kk_box_t _x_x1582;
  kk_ref_t _x_x1583 = kk_ref_dup(loc, _ctx); /*local-var<3510,int>*/
  _x_x1582 = kk_ref_get(_x_x1583,kk_context()); /*298*/
  x_0_10418 = kk_integer_unbox(_x_x1582, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_0_10418, _ctx);
    kk_box_t _x_x1584 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_foreach_indexed_fun1585(action, loc, x, _ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x1584); return kk_Unit;
  }
  {
    kk_std_core_list__mlift_foreach_indexed_10307(action, loc, x, x_0_10418, _ctx); return kk_Unit;
  }
}

kk_unit_t kk_std_core_list_foreach_indexed(kk_std_core_types__list xs, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, action : (int, a) -> e ()) -> e () */ 
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(kk_integer_from_small(0), _ctx)),kk_context()); /*local-var<3510,int>*/;
  kk_unit_t res = kk_Unit;
  kk_function_t _x_x1580;
  kk_ref_dup(loc, _ctx);
  _x_x1580 = kk_std_core_list_new_foreach_indexed_fun1581(action, loc, _ctx); /*(x : 3520) -> <local<3510>|3521> ()*/
  kk_std_core_list_foreach(xs, _x_x1580, _ctx);
  kk_box_t _x_x1588 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*4162*/
  kk_unit_unbox(_x_x1588); return kk_Unit;
}
 
// lifted local: intersperse, before

kk_std_core_types__list kk_std_core_list__trmc_lift_intersperse_6007(kk_box_t sep, kk_std_core_types__list ys, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* forall<a> (sep : a, ys : list<a>, ctx<list<a>>) -> list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1589 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t y = _con_x1589->head;
    kk_std_core_types__list yy = _con_x1589->tail;
    kk_reuse_t _ru_x1229 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      _ru_x1229 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(y, _ctx);
      kk_std_core_types__list_dup(yy, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    kk_std_core_types__list _trmc_x10082;
    kk_std_core_types__list _x_x1590 = kk_datatype_null(); /*list<3597>*/
    _trmc_x10082 = kk_std_core_types__new_Cons(_ru_x1229, 0, y, _x_x1590, _ctx); /*list<3597>*/
    kk_field_addr_t _b_x629_634 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10082, _ctx)->tail, _ctx); /*@field-addr<list<3597>>*/;
    { // tailcall
      kk_box_t _x_x1591 = kk_box_dup(sep, _ctx); /*3597*/
      kk_std_core_types__cctx _x_x1592;
      kk_box_t _x_x1593;
      kk_std_core_types__list _x_x1594 = kk_std_core_types__new_Cons(kk_reuse_null, 0, sep, _trmc_x10082, _ctx); /*list<79>*/
      _x_x1593 = kk_std_core_types__list_box(_x_x1594, _ctx); /*0*/
      _x_x1592 = kk_cctx_extend_linear(_acc,_x_x1593,_b_x629_634,kk_context()); /*ctx<0>*/
      sep = _x_x1591;
      ys = yy;
      _acc = _x_x1592;
      goto kk__tailcall;
    }
  }
  {
    kk_box_drop(sep, _ctx);
    kk_box_t _x_x1595 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1595, KK_OWNED, _ctx);
  }
}
 
// lifted local: intersperse, before

kk_std_core_types__list kk_std_core_list__lift_intersperse_6007(kk_box_t sep_0, kk_std_core_types__list ys_0, kk_context_t* _ctx) { /* forall<a> (sep : a, ys : list<a>) -> list<a> */ 
  kk_std_core_types__cctx _x_x1596 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_intersperse_6007(sep_0, ys_0, _x_x1596, _ctx);
}
 
// Insert a separator `sep`  between all elements of a list `xs` .

kk_std_core_types__list kk_std_core_list_intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1597 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1597->head;
    kk_std_core_types__list xx = _con_x1597->tail;
    kk_reuse_t _ru_x1230 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1230 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__list _x_x1598;
    kk_std_core_types__cctx _x_x1599 = kk_cctx_empty(kk_context()); /*ctx<0>*/
    _x_x1598 = kk_std_core_list__trmc_lift_intersperse_6007(sep, xx, _x_x1599, _ctx); /*list<3597>*/
    return kk_std_core_types__new_Cons(_ru_x1230, 0, x, _x_x1598, _ctx);
  }
  {
    kk_box_drop(sep, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
}
 
// Concatenate all strings in a list

kk_string_t kk_std_core_list_joinsep(kk_std_core_types__list xs, kk_string_t sep, kk_context_t* _ctx) { /* (xs : list<string>, sep : string) -> string */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_string_drop(sep, _ctx);
    return kk_string_empty();
  }
  {
    struct kk_std_core_types_Cons* _con_x1601 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x640 = _con_x1601->head;
    kk_std_core_types__list _pat_1 = _con_x1601->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_string_t x = kk_string_unbox(_box_x640);
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        kk_datatype_ptr_free(xs, _ctx);
      }
      else {
        kk_string_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_string_drop(sep, _ctx);
      return x;
    }
  }
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1602 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x641 = _con_x1602->head;
    kk_std_core_types__list _pat_3 = _con_x1602->tail;
    if (kk_std_core_types__is_Cons(_pat_3, _ctx)) {
      struct kk_std_core_types_Cons* _con_x1603 = kk_std_core_types__as_Cons(_pat_3, _ctx);
      kk_box_t _box_x642 = _con_x1603->head;
      kk_std_core_types__list _pat_4 = _con_x1603->tail;
      if (kk_std_core_types__is_Nil(_pat_4, _ctx)) {
        kk_string_t _x_x1604 = kk_string_dup(sep, _ctx); /*string*/
        kk_string_t _x_x1605 = kk_string_empty(); /*string*/
        if (kk_string_is_eq(_x_x1604,_x_x1605,kk_context())) {
          kk_string_t x_0 = kk_string_unbox(_box_x641);
          kk_string_t y = kk_string_unbox(_box_x642);
          if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
            if kk_likely(kk_datatype_ptr_is_unique(_pat_3, _ctx)) {
              kk_datatype_ptr_free(_pat_3, _ctx);
            }
            else {
              kk_string_dup(y, _ctx);
              kk_datatype_ptr_decref(_pat_3, _ctx);
            }
            kk_datatype_ptr_free(xs, _ctx);
          }
          else {
            kk_string_dup(x_0, _ctx);
            kk_string_dup(y, _ctx);
            kk_datatype_ptr_decref(xs, _ctx);
          }
          kk_string_drop(sep, _ctx);
          return kk_std_core_types__lp__plus__plus__rp_(x_0, y, _ctx);
        }
      }
    }
  }
  {
    kk_vector_t _x_x1607 = kk_std_core_vector_unvlist(xs, _ctx); /*vector<978>*/
    return kk_string_join_with(_x_x1607,sep,kk_context());
  }
}
 
// Concatenate all strings in a list

kk_string_t kk_std_core_list_concat_fs_join(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<string>) -> string */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    return kk_string_empty();
  }
  {
    struct kk_std_core_types_Cons* _con_x1609 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x643 = _con_x1609->head;
    kk_std_core_types__list _pat_1 = _con_x1609->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_string_t x = kk_string_unbox(_box_x643);
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        kk_datatype_ptr_free(xs, _ctx);
      }
      else {
        kk_string_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      return x;
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x1610 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x644 = _con_x1610->head;
    kk_std_core_types__list _pat_3 = _con_x1610->tail;
    struct kk_std_core_types_Cons* _con_x1611 = kk_std_core_types__as_Cons(_pat_3, _ctx);
    kk_box_t _box_x645 = _con_x1611->head;
    kk_std_core_types__list _pat_4 = _con_x1611->tail;
    if (kk_std_core_types__is_Nil(_pat_4, _ctx)) {
      kk_string_t x_0 = kk_string_unbox(_box_x644);
      kk_string_t y = kk_string_unbox(_box_x645);
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        if kk_likely(kk_datatype_ptr_is_unique(_pat_3, _ctx)) {
          kk_datatype_ptr_free(_pat_3, _ctx);
        }
        else {
          kk_string_dup(y, _ctx);
          kk_datatype_ptr_decref(_pat_3, _ctx);
        }
        kk_datatype_ptr_free(xs, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_string_dup(y, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      return kk_std_core_types__lp__plus__plus__rp_(x_0, y, _ctx);
    }
  }
  {
    kk_vector_t _x_x1612 = kk_std_core_vector_unvlist(xs, _ctx); /*vector<978>*/
    return kk_string_join(_x_x1612,kk_context());
  }
}
 
// monadic lift

kk_string_t kk_std_core_list__mlift_show_10308(kk_std_core_types__list _y_x10213, kk_context_t* _ctx) { /* forall<e> (list<string>) -> e string */ 
  kk_string_t _x_x1613;
  kk_define_string_literal(static, _s_x1614, 1, "[", _ctx)
  _x_x1613 = kk_string_dup(_s_x1614, _ctx); /*string*/
  kk_string_t _x_x1615;
  kk_string_t _x_x1616;
  if (kk_std_core_types__is_Nil(_y_x10213, _ctx)) {
    _x_x1616 = kk_string_empty(); /*string*/
    goto _match_x1617;
  }
  {
    struct kk_std_core_types_Cons* _con_x1619 = kk_std_core_types__as_Cons(_y_x10213, _ctx);
    kk_box_t _box_x646 = _con_x1619->head;
    kk_std_core_types__list _pat_1 = _con_x1619->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_string_t x = kk_string_unbox(_box_x646);
      if kk_likely(kk_datatype_ptr_is_unique(_y_x10213, _ctx)) {
        kk_datatype_ptr_free(_y_x10213, _ctx);
      }
      else {
        kk_string_dup(x, _ctx);
        kk_datatype_ptr_decref(_y_x10213, _ctx);
      }
      _x_x1616 = x; /*string*/
      goto _match_x1617;
    }
  }
  if (kk_std_core_types__is_Cons(_y_x10213, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1620 = kk_std_core_types__as_Cons(_y_x10213, _ctx);
    kk_box_t _box_x647 = _con_x1620->head;
    kk_std_core_types__list _pat_3 = _con_x1620->tail;
    if (kk_std_core_types__is_Cons(_pat_3, _ctx)) {
      struct kk_std_core_types_Cons* _con_x1621 = kk_std_core_types__as_Cons(_pat_3, _ctx);
      kk_box_t _box_x648 = _con_x1621->head;
      kk_std_core_types__list _pat_4 = _con_x1621->tail;
      if (kk_std_core_types__is_Nil(_pat_4, _ctx)) {
        kk_string_t _x_x1622;
        kk_define_string_literal(static, _s_x1623, 1, ",", _ctx)
        _x_x1622 = kk_string_dup(_s_x1623, _ctx); /*string*/
        kk_string_t _x_x1624 = kk_string_empty(); /*string*/
        if (kk_string_is_eq(_x_x1622,_x_x1624,kk_context())) {
          kk_string_t x_0 = kk_string_unbox(_box_x647);
          kk_string_t y = kk_string_unbox(_box_x648);
          if kk_likely(kk_datatype_ptr_is_unique(_y_x10213, _ctx)) {
            if kk_likely(kk_datatype_ptr_is_unique(_pat_3, _ctx)) {
              kk_datatype_ptr_free(_pat_3, _ctx);
            }
            else {
              kk_string_dup(y, _ctx);
              kk_datatype_ptr_decref(_pat_3, _ctx);
            }
            kk_datatype_ptr_free(_y_x10213, _ctx);
          }
          else {
            kk_string_dup(x_0, _ctx);
            kk_string_dup(y, _ctx);
            kk_datatype_ptr_decref(_y_x10213, _ctx);
          }
          _x_x1616 = kk_std_core_types__lp__plus__plus__rp_(x_0, y, _ctx); /*string*/
          goto _match_x1617;
        }
      }
    }
  }
  {
    kk_vector_t _x_x1626 = kk_std_core_vector_unvlist(_y_x10213, _ctx); /*vector<978>*/
    kk_string_t _x_x1627;
    kk_define_string_literal(static, _s_x1628, 1, ",", _ctx)
    _x_x1627 = kk_string_dup(_s_x1628, _ctx); /*string*/
    _x_x1616 = kk_string_join_with(_x_x1626,_x_x1627,kk_context()); /*string*/
  }
  _match_x1617: ;
  kk_string_t _x_x1629;
  kk_define_string_literal(static, _s_x1630, 1, "]", _ctx)
  _x_x1629 = kk_string_dup(_s_x1630, _ctx); /*string*/
  _x_x1615 = kk_std_core_types__lp__plus__plus__rp_(_x_x1616, _x_x1629, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x1613, _x_x1615, _ctx);
}
 
// Show a list


// lift anonymous function
struct kk_std_core_list_show_fun1631__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_std_core_list_show_fun1631(kk_function_t _fself, kk_box_t _b_x652, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_show_fun1631(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_std_core_list_show_fun1631__t* _self = kk_function_alloc_as(struct kk_std_core_list_show_fun1631__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_show_fun1631, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_show_fun1631(kk_function_t _fself, kk_box_t _b_x652, kk_context_t* _ctx) {
  struct kk_std_core_list_show_fun1631__t* _self = kk_function_as(struct kk_std_core_list_show_fun1631__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (3800) -> 3801 string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x1632 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x652, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x1632);
}


// lift anonymous function
struct kk_std_core_list_show_fun1634__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_list_show_fun1634(kk_function_t _fself, kk_box_t _b_x657, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_show_fun1634(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_list_show_fun1634, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_list_show_fun1634(kk_function_t _fself, kk_box_t _b_x657, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _y_x10213_662 = kk_std_core_types__list_unbox(_b_x657, KK_OWNED, _ctx); /*list<string>*/;
  kk_string_t _x_x1635 = kk_std_core_list__mlift_show_10308(_y_x10213_662, _ctx); /*string*/
  return kk_string_box(_x_x1635);
}

kk_string_t kk_std_core_list_show(kk_std_core_types__list xs, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, ?show : (a) -> e string) -> e string */ 
  kk_std_core_types__cctx _b_x651_655 = kk_cctx_empty(kk_context()); /*ctx<list<string>>*/;
  kk_std_core_types__list x_10422;
  kk_function_t _brw_x1143 = kk_std_core_list_new_show_fun1631(_implicit_fs_show, _ctx); /*(2228) -> 2230 2229*/;
  kk_std_core_types__list _brw_x1144 = kk_std_core_list__trmc_map(xs, _brw_x1143, _b_x651_655, _ctx); /*list<2229>*/;
  kk_function_drop(_brw_x1143, _ctx);
  x_10422 = _brw_x1144; /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10422, _ctx);
    kk_box_t _x_x1633 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_show_fun1634(_ctx), _ctx); /*2419*/
    return kk_string_unbox(_x_x1633);
  }
  {
    kk_string_t _x_x1636;
    kk_define_string_literal(static, _s_x1637, 1, "[", _ctx)
    _x_x1636 = kk_string_dup(_s_x1637, _ctx); /*string*/
    kk_string_t _x_x1638;
    kk_string_t _x_x1639;
    if (kk_std_core_types__is_Nil(x_10422, _ctx)) {
      _x_x1639 = kk_string_empty(); /*string*/
      goto _match_x1640;
    }
    {
      struct kk_std_core_types_Cons* _con_x1642 = kk_std_core_types__as_Cons(x_10422, _ctx);
      kk_box_t _box_x658 = _con_x1642->head;
      kk_std_core_types__list _pat_1_0 = _con_x1642->tail;
      if (kk_std_core_types__is_Nil(_pat_1_0, _ctx)) {
        kk_string_t x_0 = kk_string_unbox(_box_x658);
        if kk_likely(kk_datatype_ptr_is_unique(x_10422, _ctx)) {
          kk_datatype_ptr_free(x_10422, _ctx);
        }
        else {
          kk_string_dup(x_0, _ctx);
          kk_datatype_ptr_decref(x_10422, _ctx);
        }
        _x_x1639 = x_0; /*string*/
        goto _match_x1640;
      }
    }
    if (kk_std_core_types__is_Cons(x_10422, _ctx)) {
      struct kk_std_core_types_Cons* _con_x1643 = kk_std_core_types__as_Cons(x_10422, _ctx);
      kk_box_t _box_x659 = _con_x1643->head;
      kk_std_core_types__list _pat_3 = _con_x1643->tail;
      if (kk_std_core_types__is_Cons(_pat_3, _ctx)) {
        struct kk_std_core_types_Cons* _con_x1644 = kk_std_core_types__as_Cons(_pat_3, _ctx);
        kk_box_t _box_x660 = _con_x1644->head;
        kk_std_core_types__list _pat_4 = _con_x1644->tail;
        if (kk_std_core_types__is_Nil(_pat_4, _ctx)) {
          kk_string_t _x_x1645;
          kk_define_string_literal(static, _s_x1646, 1, ",", _ctx)
          _x_x1645 = kk_string_dup(_s_x1646, _ctx); /*string*/
          kk_string_t _x_x1647 = kk_string_empty(); /*string*/
          if (kk_string_is_eq(_x_x1645,_x_x1647,kk_context())) {
            kk_string_t x_0_0 = kk_string_unbox(_box_x659);
            kk_string_t y = kk_string_unbox(_box_x660);
            if kk_likely(kk_datatype_ptr_is_unique(x_10422, _ctx)) {
              if kk_likely(kk_datatype_ptr_is_unique(_pat_3, _ctx)) {
                kk_datatype_ptr_free(_pat_3, _ctx);
              }
              else {
                kk_string_dup(y, _ctx);
                kk_datatype_ptr_decref(_pat_3, _ctx);
              }
              kk_datatype_ptr_free(x_10422, _ctx);
            }
            else {
              kk_string_dup(x_0_0, _ctx);
              kk_string_dup(y, _ctx);
              kk_datatype_ptr_decref(x_10422, _ctx);
            }
            _x_x1639 = kk_std_core_types__lp__plus__plus__rp_(x_0_0, y, _ctx); /*string*/
            goto _match_x1640;
          }
        }
      }
    }
    {
      kk_vector_t _x_x1649 = kk_std_core_vector_unvlist(x_10422, _ctx); /*vector<978>*/
      kk_string_t _x_x1650;
      kk_define_string_literal(static, _s_x1651, 1, ",", _ctx)
      _x_x1650 = kk_string_dup(_s_x1651, _ctx); /*string*/
      _x_x1639 = kk_string_join_with(_x_x1649,_x_x1650,kk_context()); /*string*/
    }
    _match_x1640: ;
    kk_string_t _x_x1652;
    kk_define_string_literal(static, _s_x1653, 1, "]", _ctx)
    _x_x1652 = kk_string_dup(_s_x1653, _ctx); /*string*/
    _x_x1638 = kk_std_core_types__lp__plus__plus__rp_(_x_x1639, _x_x1652, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x1636, _x_x1638, _ctx);
  }
}
 
// Zip two lists together by pairing the corresponding elements.
// The returned list is only as long as the smallest input list.

kk_std_core_types__list kk_std_core_list__trmc_zip(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* forall<a,b> (xs : list<a>, ys : list<b>, ctx<list<(a, b)>>) -> list<(a, b)> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1654 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1654->head;
    kk_std_core_types__list xx = _con_x1654->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    if (kk_std_core_types__is_Cons(ys, _ctx)) {
      struct kk_std_core_types_Cons* _con_x1655 = kk_std_core_types__as_Cons(ys, _ctx);
      kk_box_t y = _con_x1655->head;
      kk_std_core_types__list yy = _con_x1655->tail;
      kk_reuse_t _ru_x1244 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
        _ru_x1244 = (kk_datatype_ptr_reuse(ys, _ctx));
      }
      else {
        kk_box_dup(y, _ctx);
        kk_std_core_types__list_dup(yy, _ctx);
        kk_datatype_ptr_decref(ys, _ctx);
      }
      kk_std_core_types__list _trmc_x10084 = kk_datatype_null(); /*list<(3917, 3918)>*/;
      kk_std_core_types__list _trmc_x10085;
      kk_box_t _x_x1656;
      kk_std_core_types__tuple2 _x_x1657 = kk_std_core_types__new_Tuple2(x, y, _ctx); /*(134, 135)*/
      _x_x1656 = kk_std_core_types__tuple2_box(_x_x1657, _ctx); /*79*/
      _trmc_x10085 = kk_std_core_types__new_Cons(_ru_x1244, 0, _x_x1656, _trmc_x10084, _ctx); /*list<(3917, 3918)>*/
      kk_field_addr_t _b_x672_679 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10085, _ctx)->tail, _ctx); /*@field-addr<list<(3917, 3918)>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1658 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10085, _ctx)),_b_x672_679,kk_context()); /*ctx<0>*/
        xs = xx;
        ys = yy;
        _acc = _x_x1658;
        goto kk__tailcall;
      }
    }
    {
      kk_std_core_types__list_drop(xx, _ctx);
      kk_box_drop(x, _ctx);
      kk_box_t _x_x1659 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
      return kk_std_core_types__list_unbox(_x_x1659, KK_OWNED, _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(ys, _ctx);
    kk_box_t _x_x1660 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1660, KK_OWNED, _ctx);
  }
}
 
// Zip two lists together by pairing the corresponding elements.
// The returned list is only as long as the smallest input list.

kk_std_core_types__list kk_std_core_list_zip(kk_std_core_types__list xs_0, kk_std_core_types__list ys_0, kk_context_t* _ctx) { /* forall<a,b> (xs : list<a>, ys : list<b>) -> list<(a, b)> */ 
  kk_std_core_types__cctx _x_x1661 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_zip(xs_0, ys_0, _x_x1661, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_zipwith_10309(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list xx, kk_std_core_types__list yy, kk_box_t _trmc_x10086, kk_context_t* _ctx) { /* forall<a,b,c,e> (ctx<list<c>>, f : (a, b) -> e c, xx : list<a>, yy : list<b>, c) -> e list<c> */ 
  kk_std_core_types__list _trmc_x10087 = kk_datatype_null(); /*list<4000>*/;
  kk_std_core_types__list _trmc_x10088 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _trmc_x10086, _trmc_x10087, _ctx); /*list<4000>*/;
  kk_field_addr_t _b_x692_695 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10088, _ctx)->tail, _ctx); /*@field-addr<list<4000>>*/;
  kk_std_core_types__cctx _own_x1140 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10088, _ctx)),_b_x692_695,kk_context()); /*ctx<0>*/;
  kk_std_core_types__list _brw_x1141 = kk_std_core_list__trmc_zipwith(xx, yy, f, _own_x1140, _ctx); /*list<4000>*/;
  kk_function_drop(f, _ctx);
  return _brw_x1141;
}
 
// Zip two lists together by apply a function `f` to all corresponding elements.
// The returned list is only as long as the smallest input list.


// lift anonymous function
struct kk_std_core_list__trmc_zipwith_fun1667__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_std_core_types__list xx_0;
  kk_std_core_types__list yy_0;
};
static kk_box_t kk_std_core_list__trmc_zipwith_fun1667(kk_function_t _fself, kk_box_t _b_x700, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_zipwith_fun1667(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_std_core_types__list xx_0, kk_std_core_types__list yy_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_zipwith_fun1667__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_zipwith_fun1667__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_zipwith_fun1667, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->xx_0 = xx_0;
  _self->yy_0 = yy_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_zipwith_fun1667(kk_function_t _fself, kk_box_t _b_x700, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_zipwith_fun1667__t* _self = kk_function_as(struct kk_std_core_list__trmc_zipwith_fun1667__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<4000>> */
  kk_function_t f_0 = _self->f_0; /* (3998, 3999) -> 4001 4000 */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<3998> */
  kk_std_core_types__list yy_0 = _self->yy_0; /* list<3999> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);kk_std_core_types__list_dup(yy_0, _ctx);}, {}, _ctx)
  kk_box_t _trmc_x10086_0_722 = _b_x700; /*4000*/;
  kk_std_core_types__list _x_x1668 = kk_std_core_list__mlift_trmc_zipwith_10309(_acc_0, f_0, xx_0, yy_0, _trmc_x10086_0_722, _ctx); /*list<4000>*/
  return kk_std_core_types__list_box(_x_x1668, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_zipwith(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c, ctx<list<c>>) -> e list<c> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1662 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1662->head;
    kk_std_core_types__list xx_0 = _con_x1662->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    if (kk_std_core_types__is_Cons(ys, _ctx)) {
      struct kk_std_core_types_Cons* _con_x1663 = kk_std_core_types__as_Cons(ys, _ctx);
      kk_box_t y = _con_x1663->head;
      kk_std_core_types__list yy_0 = _con_x1663->tail;
      kk_reuse_t _ru_x1246 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
        _ru_x1246 = (kk_datatype_ptr_reuse(ys, _ctx));
      }
      else {
        kk_box_dup(y, _ctx);
        kk_std_core_types__list_dup(yy_0, _ctx);
        kk_datatype_ptr_decref(ys, _ctx);
      }
      kk_box_t x_0_10427;
      kk_function_t _x_x1664 = kk_function_dup(f_0, _ctx); /*(3998, 3999) -> 4001 4000*/
      x_0_10427 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1664, (_x_x1664, x, y, _ctx), _ctx); /*4000*/
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x1246,kk_context());
        kk_box_drop(x_0_10427, _ctx);
        kk_box_t _x_x1665;
        kk_function_t _x_x1666;
        kk_function_dup(f_0, _ctx);
        _x_x1666 = kk_std_core_list__new_trmc_zipwith_fun1667(_acc_0, f_0, xx_0, yy_0, _ctx); /*(2418) -> 2420 2419*/
        _x_x1665 = kk_std_core_hnd_yield_extend(_x_x1666, _ctx); /*2419*/
        return kk_std_core_types__list_unbox(_x_x1665, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list _trmc_x10087_0 = kk_datatype_null(); /*list<4000>*/;
        kk_std_core_types__list _trmc_x10088_0 = kk_std_core_types__new_Cons(_ru_x1246, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_0_10427, _trmc_x10087_0, _ctx); /*list<4000>*/;
        kk_field_addr_t _b_x706_714 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10088_0, _ctx)->tail, _ctx); /*@field-addr<list<4000>>*/;
        kk_std_core_types__cctx _own_x1139 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10088_0, _ctx)),_b_x706_714,kk_context()); /*ctx<0>*/;
        { // tailcall
          xs = xx_0;
          ys = yy_0;
          _acc_0 = _own_x1139;
          goto kk__tailcall;
        }
      }
    }
    {
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_box_drop(x, _ctx);
      kk_box_t _x_x1669 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
      return kk_std_core_types__list_unbox(_x_x1669, KK_OWNED, _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(ys, _ctx);
    kk_box_t _x_x1670 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1670, KK_OWNED, _ctx);
  }
}
 
// Zip two lists together by apply a function `f` to all corresponding elements.
// The returned list is only as long as the smallest input list.

kk_std_core_types__list kk_std_core_list_zipwith(kk_std_core_types__list xs_0, kk_std_core_types__list ys_0, kk_function_t f_1, kk_context_t* _ctx) { /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 
  kk_std_core_types__cctx _own_x1137 = kk_cctx_empty(kk_context()); /*ctx<0>*/;
  return kk_std_core_list__trmc_zipwith(xs_0, ys_0, f_1, _own_x1137, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_zipwith_iter_10310(kk_std_core_types__cctx _acc, kk_function_t f, kk_integer_t i, kk_std_core_types__list xx, kk_std_core_types__list yy, kk_box_t _trmc_x10089, kk_context_t* _ctx) { /* forall<a,b,c,d,e> (ctx<list<a>>, f : (int, b, c) -> e d, i : int, xx : list<b>, yy : list<c>, d) -> e list<d> */ 
  kk_std_core_types__list _trmc_x10090 = kk_datatype_null(); /*list<4086>*/;
  kk_std_core_types__list _trmc_x10091 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), _trmc_x10089, _trmc_x10090, _ctx); /*list<4086>*/;
  kk_field_addr_t _b_x728_731 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10091, _ctx)->tail, _ctx); /*@field-addr<list<4086>>*/;
  kk_integer_t _own_x1135 = kk_integer_add_small_const(i, 1, _ctx); /*int*/;
  kk_std_core_types__cctx _own_x1134 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10091, _ctx)),_b_x728_731,kk_context()); /*ctx<0>*/;
  kk_std_core_types__list _brw_x1136 = kk_std_core_list__trmc_zipwith_iter(_own_x1135, xx, yy, f, _own_x1134, _ctx); /*list<4082>*/;
  kk_function_drop(f, _ctx);
  return _brw_x1136;
}


// lift anonymous function
struct kk_std_core_list__trmc_zipwith_iter_fun1677__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_integer_t i_0;
  kk_std_core_types__list xx_0;
  kk_std_core_types__list yy_0;
};
static kk_box_t kk_std_core_list__trmc_zipwith_iter_fun1677(kk_function_t _fself, kk_box_t _b_x736, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_zipwith_iter_fun1677(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_integer_t i_0, kk_std_core_types__list xx_0, kk_std_core_types__list yy_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_zipwith_iter_fun1677__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_zipwith_iter_fun1677__t, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_zipwith_iter_fun1677, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->i_0 = i_0;
  _self->xx_0 = xx_0;
  _self->yy_0 = yy_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_zipwith_iter_fun1677(kk_function_t _fself, kk_box_t _b_x736, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_zipwith_iter_fun1677__t* _self = kk_function_as(struct kk_std_core_list__trmc_zipwith_iter_fun1677__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<4082>> */
  kk_function_t f_0 = _self->f_0; /* (int, 4084, 4085) -> 4087 4086 */
  kk_integer_t i_0 = _self->i_0; /* int */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<4084> */
  kk_std_core_types__list yy_0 = _self->yy_0; /* list<4085> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_integer_dup(i_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);kk_std_core_types__list_dup(yy_0, _ctx);}, {}, _ctx)
  kk_box_t _trmc_x10089_0_758 = _b_x736; /*4086*/;
  kk_std_core_types__list _x_x1678 = kk_std_core_list__mlift_trmc_zipwith_iter_10310(_acc_0, f_0, i_0, xx_0, yy_0, _trmc_x10089_0_758, _ctx); /*list<4086>*/
  return kk_std_core_types__list_box(_x_x1678, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_zipwith_iter(kk_integer_t i_0, kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,c,e> (i : int, xs : list<a>, ys : list<b>, f : (int, a, b) -> e c, ctx<list<c>>) -> e list<c> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1671 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1671->head;
    kk_std_core_types__list xx_0 = _con_x1671->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    if (kk_std_core_types__is_Cons(ys, _ctx)) {
      struct kk_std_core_types_Cons* _con_x1672 = kk_std_core_types__as_Cons(ys, _ctx);
      kk_box_t y = _con_x1672->head;
      kk_std_core_types__list yy_0 = _con_x1672->tail;
      kk_reuse_t _ru_x1248 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
        _ru_x1248 = (kk_datatype_ptr_reuse(ys, _ctx));
      }
      else {
        kk_box_dup(y, _ctx);
        kk_std_core_types__list_dup(yy_0, _ctx);
        kk_datatype_ptr_decref(ys, _ctx);
      }
      kk_box_t x_0_10430;
      kk_function_t _x_x1674 = kk_function_dup(f_0, _ctx); /*(int, 4084, 4085) -> 4087 4086*/
      kk_integer_t _x_x1673 = kk_integer_dup(i_0, _ctx); /*int*/
      x_0_10430 = kk_function_call(kk_box_t, (kk_function_t, kk_integer_t, kk_box_t, kk_box_t, kk_context_t*), _x_x1674, (_x_x1674, _x_x1673, x, y, _ctx), _ctx); /*4086*/
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x1248,kk_context());
        kk_box_drop(x_0_10430, _ctx);
        kk_box_t _x_x1675;
        kk_function_t _x_x1676;
        kk_function_dup(f_0, _ctx);
        _x_x1676 = kk_std_core_list__new_trmc_zipwith_iter_fun1677(_acc_0, f_0, i_0, xx_0, yy_0, _ctx); /*(2418) -> 2420 2419*/
        _x_x1675 = kk_std_core_hnd_yield_extend(_x_x1676, _ctx); /*2419*/
        return kk_std_core_types__list_unbox(_x_x1675, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list _trmc_x10090_0 = kk_datatype_null(); /*list<4086>*/;
        kk_std_core_types__list _trmc_x10091_0 = kk_std_core_types__new_Cons(_ru_x1248, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_0_10430, _trmc_x10090_0, _ctx); /*list<4086>*/;
        kk_field_addr_t _b_x742_750 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10091_0, _ctx)->tail, _ctx); /*@field-addr<list<4086>>*/;
        kk_integer_t _own_x1133 = kk_integer_add_small_const(i_0, 1, _ctx); /*int*/;
        kk_std_core_types__cctx _own_x1132 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10091_0, _ctx)),_b_x742_750,kk_context()); /*ctx<0>*/;
        { // tailcall
          i_0 = _own_x1133;
          xs = xx_0;
          ys = yy_0;
          _acc_0 = _own_x1132;
          goto kk__tailcall;
        }
      }
    }
    {
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_box_drop(x, _ctx);
      kk_integer_drop(i_0, _ctx);
      kk_box_t _x_x1679 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
      return kk_std_core_types__list_unbox(_x_x1679, KK_OWNED, _ctx);
    }
  }
  {
    kk_std_core_types__list_drop(ys, _ctx);
    kk_integer_drop(i_0, _ctx);
    kk_box_t _x_x1680 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1680, KK_OWNED, _ctx);
  }
}

kk_std_core_types__list kk_std_core_list_zipwith_iter(kk_integer_t i_1, kk_std_core_types__list xs_0, kk_std_core_types__list ys_0, kk_function_t f_1, kk_context_t* _ctx) { /* forall<a,b,c,e> (i : int, xs : list<a>, ys : list<b>, f : (int, a, b) -> e c) -> e list<c> */ 
  kk_std_core_types__cctx _own_x1130 = kk_cctx_empty(kk_context()); /*ctx<0>*/;
  return kk_std_core_list__trmc_zipwith_iter(i_1, xs_0, ys_0, f_1, _own_x1130, _ctx);
}
 
// lifted local: unzip, iter

kk_std_core_types__tuple2 kk_std_core_list__lift_unzip_6008(kk_std_core_types__list ys, kk_std_core_types__cctx acc1, kk_std_core_types__cctx acc2, kk_context_t* _ctx) { /* forall<a,b,c,d> (ys : list<(a, b)>, acc1 : cctx<c,list<a>>, acc2 : cctx<d,list<b>>) -> (c, d) */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1681 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t _box_x759 = _con_x1681->head;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x759, KK_BORROWED, _ctx);
    kk_std_core_types__list xx = _con_x1681->tail;
    kk_box_t x = _pat_0.fst;
    kk_box_t y = _pat_0.snd;
    kk_reuse_t _ru_x1249 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      kk_box_dup(x, _ctx);
      kk_box_dup(y, _ctx);
      kk_box_drop(_box_x759, _ctx);
      _ru_x1249 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_box_dup(y, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    kk_std_core_types__list _cctx_x4190;
    kk_std_core_types__list _x_x1682 = kk_datatype_null(); /*list<4297>*/
    _cctx_x4190 = kk_std_core_types__new_Cons(_ru_x1249, kk_field_index_of(struct kk_std_core_types_Cons, tail), x, _x_x1682, _ctx); /*list<4297>*/
    kk_field_addr_t _cctx_x4191 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x4190, _ctx)->tail, _ctx); /*@field-addr<list<4297>>*/;
    kk_std_core_types__list _cctx_x4233;
    kk_std_core_types__list _x_x1683 = kk_datatype_null(); /*list<4298>*/
    _cctx_x4233 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), y, _x_x1683, _ctx); /*list<4298>*/
    kk_field_addr_t _cctx_x4234 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x4233, _ctx)->tail, _ctx); /*@field-addr<list<4298>>*/;
    kk_std_core_types__list _b_x772_780 = _cctx_x4190; /*list<4297>*/;
    kk_field_addr_t _b_x773_781 = _cctx_x4191; /*@field-addr<list<4297>>*/;
    kk_std_core_types__list _b_x774_782 = _cctx_x4233; /*list<4298>*/;
    kk_field_addr_t _b_x775_783 = _cctx_x4234; /*@field-addr<list<4298>>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x1684;
      kk_std_core_types__cctx _x_x1685 = kk_cctx_create((kk_std_core_types__list_box(_b_x772_780, _ctx)),_b_x773_781,kk_context()); /*cctx<0,1>*/
      _x_x1684 = kk_cctx_compose(acc1,_x_x1685,kk_context()); /*cctx<394,396>*/
      kk_std_core_types__cctx _x_x1686;
      kk_std_core_types__cctx _x_x1687 = kk_cctx_create((kk_std_core_types__list_box(_b_x774_782, _ctx)),_b_x775_783,kk_context()); /*cctx<0,1>*/
      _x_x1686 = kk_cctx_compose(acc2,_x_x1687,kk_context()); /*cctx<394,396>*/
      ys = xx;
      acc1 = _x_x1684;
      acc2 = _x_x1686;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x1688 = kk_cctx_apply(acc1,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    kk_box_t _x_x1689 = kk_cctx_apply(acc2,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    return kk_std_core_types__new_Tuple2(_x_x1688, _x_x1689, _ctx);
  }
}
 
// lifted local: unzip3, iter

kk_std_core_types__tuple3 kk_std_core_list__lift_unzip3_6009(kk_std_core_types__list ys, kk_std_core_types__cctx acc1, kk_std_core_types__cctx acc2, kk_std_core_types__cctx acc3, kk_context_t* _ctx) { /* forall<a,b,c,d,a1,b1> (ys : list<(a, b, c)>, acc1 : cctx<d,list<a>>, acc2 : cctx<a1,list<b>>, acc3 : cctx<b1,list<c>>) -> (d, a1, b1) */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1692 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t _box_x788 = _con_x1692->head;
    kk_std_core_types__tuple3 _pat_0 = kk_std_core_types__tuple3_unbox(_box_x788, KK_BORROWED, _ctx);
    kk_std_core_types__list xx = _con_x1692->tail;
    kk_box_t x = _pat_0.fst;
    kk_box_t y = _pat_0.snd;
    kk_box_t z = _pat_0.thd;
    kk_reuse_t _ru_x1250 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      kk_box_dup(x, _ctx);
      kk_box_dup(y, _ctx);
      kk_box_dup(z, _ctx);
      kk_box_drop(_box_x788, _ctx);
      _ru_x1250 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_box_dup(y, _ctx);
      kk_box_dup(z, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    kk_std_core_types__list _cctx_x4406;
    kk_std_core_types__list _x_x1693 = kk_datatype_null(); /*list<4575>*/
    _cctx_x4406 = kk_std_core_types__new_Cons(_ru_x1250, kk_field_index_of(struct kk_std_core_types_Cons, tail), x, _x_x1693, _ctx); /*list<4575>*/
    kk_field_addr_t _cctx_x4407 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x4406, _ctx)->tail, _ctx); /*@field-addr<list<4575>>*/;
    kk_std_core_types__list _cctx_x4449;
    kk_std_core_types__list _x_x1694 = kk_datatype_null(); /*list<4576>*/
    _cctx_x4449 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), y, _x_x1694, _ctx); /*list<4576>*/
    kk_field_addr_t _cctx_x4450 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x4449, _ctx)->tail, _ctx); /*@field-addr<list<4576>>*/;
    kk_std_core_types__list _cctx_x4492;
    kk_std_core_types__list _x_x1695 = kk_datatype_null(); /*list<4577>*/
    _cctx_x4492 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), z, _x_x1695, _ctx); /*list<4577>*/
    kk_field_addr_t _cctx_x4493 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x4492, _ctx)->tail, _ctx); /*@field-addr<list<4577>>*/;
    kk_std_core_types__list _b_x807_819 = _cctx_x4406; /*list<4575>*/;
    kk_field_addr_t _b_x808_820 = _cctx_x4407; /*@field-addr<list<4575>>*/;
    kk_std_core_types__list _b_x809_821 = _cctx_x4449; /*list<4576>*/;
    kk_field_addr_t _b_x810_822 = _cctx_x4450; /*@field-addr<list<4576>>*/;
    kk_std_core_types__list _b_x811_823 = _cctx_x4492; /*list<4577>*/;
    kk_field_addr_t _b_x812_824 = _cctx_x4493; /*@field-addr<list<4577>>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x1696;
      kk_std_core_types__cctx _x_x1697 = kk_cctx_create((kk_std_core_types__list_box(_b_x807_819, _ctx)),_b_x808_820,kk_context()); /*cctx<0,1>*/
      _x_x1696 = kk_cctx_compose(acc1,_x_x1697,kk_context()); /*cctx<394,396>*/
      kk_std_core_types__cctx _x_x1698;
      kk_std_core_types__cctx _x_x1699 = kk_cctx_create((kk_std_core_types__list_box(_b_x809_821, _ctx)),_b_x810_822,kk_context()); /*cctx<0,1>*/
      _x_x1698 = kk_cctx_compose(acc2,_x_x1699,kk_context()); /*cctx<394,396>*/
      kk_std_core_types__cctx _x_x1700;
      kk_std_core_types__cctx _x_x1701 = kk_cctx_create((kk_std_core_types__list_box(_b_x811_823, _ctx)),_b_x812_824,kk_context()); /*cctx<0,1>*/
      _x_x1700 = kk_cctx_compose(acc3,_x_x1701,kk_context()); /*cctx<394,396>*/
      ys = xx;
      acc1 = _x_x1696;
      acc2 = _x_x1698;
      acc3 = _x_x1700;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x1702 = kk_cctx_apply(acc1,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    kk_box_t _x_x1703 = kk_cctx_apply(acc2,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    kk_box_t _x_x1704 = kk_cctx_apply(acc3,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    return kk_std_core_types__new_Tuple3(_x_x1702, _x_x1703, _x_x1704, _ctx);
  }
}
 
// lifted local: unzip4, iter

kk_std_core_types__tuple4 kk_std_core_list__lift_unzip4_6010(kk_std_core_types__list ys, kk_std_core_types__cctx acc1, kk_std_core_types__cctx acc2, kk_std_core_types__cctx acc3, kk_std_core_types__cctx acc4, kk_context_t* _ctx) { /* forall<a,b,c,d,a1,b1,c1,d1> (ys : list<(a, b, c, d)>, acc1 : cctx<a1,list<a>>, acc2 : cctx<b1,list<b>>, acc3 : cctx<c1,list<c>>, acc4 : cctx<d1,list<d>>) -> (a1, b1, c1, d1) */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1708 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t _box_x831 = _con_x1708->head;
    kk_std_core_types__tuple4 _pat_0 = kk_std_core_types__tuple4_unbox(_box_x831, KK_BORROWED, _ctx);
    struct kk_std_core_types_Tuple4* _con_x1709 = kk_std_core_types__as_Tuple4(_pat_0, _ctx);
    kk_std_core_types__list xx = _con_x1708->tail;
    kk_box_t x = _con_x1709->fst;
    kk_box_t y = _con_x1709->snd;
    kk_box_t z = _con_x1709->thd;
    kk_box_t w = _con_x1709->field4;
    kk_reuse_t _ru_x1252 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      if kk_likely(kk_datatype_ptr_is_unique(_pat_0, _ctx)) {
        kk_datatype_ptr_free(_pat_0, _ctx);
      }
      else {
        kk_box_dup(w, _ctx);
        kk_box_dup(x, _ctx);
        kk_box_dup(y, _ctx);
        kk_box_dup(z, _ctx);
        kk_datatype_ptr_decref(_pat_0, _ctx);
      }
      _ru_x1252 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(w, _ctx);
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_box_dup(y, _ctx);
      kk_box_dup(z, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    kk_std_core_types__list _cctx_x4713;
    kk_std_core_types__list _x_x1710 = kk_datatype_null(); /*list<4944>*/
    _cctx_x4713 = kk_std_core_types__new_Cons(_ru_x1252, kk_field_index_of(struct kk_std_core_types_Cons, tail), x, _x_x1710, _ctx); /*list<4944>*/
    kk_field_addr_t _cctx_x4714 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x4713, _ctx)->tail, _ctx); /*@field-addr<list<4944>>*/;
    kk_std_core_types__list _cctx_x4756;
    kk_std_core_types__list _x_x1711 = kk_datatype_null(); /*list<4945>*/
    _cctx_x4756 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), y, _x_x1711, _ctx); /*list<4945>*/
    kk_field_addr_t _cctx_x4757 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x4756, _ctx)->tail, _ctx); /*@field-addr<list<4945>>*/;
    kk_std_core_types__list _cctx_x4799;
    kk_std_core_types__list _x_x1712 = kk_datatype_null(); /*list<4946>*/
    _cctx_x4799 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), z, _x_x1712, _ctx); /*list<4946>*/
    kk_field_addr_t _cctx_x4800 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x4799, _ctx)->tail, _ctx); /*@field-addr<list<4946>>*/;
    kk_std_core_types__list _cctx_x4842;
    kk_std_core_types__list _x_x1713 = kk_datatype_null(); /*list<4947>*/
    _cctx_x4842 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), w, _x_x1713, _ctx); /*list<4947>*/
    kk_field_addr_t _cctx_x4843 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x4842, _ctx)->tail, _ctx); /*@field-addr<list<4947>>*/;
    kk_std_core_types__list _b_x856_872 = _cctx_x4713; /*list<4944>*/;
    kk_field_addr_t _b_x857_873 = _cctx_x4714; /*@field-addr<list<4944>>*/;
    kk_std_core_types__list _b_x858_874 = _cctx_x4756; /*list<4945>*/;
    kk_field_addr_t _b_x859_875 = _cctx_x4757; /*@field-addr<list<4945>>*/;
    kk_std_core_types__list _b_x860_876 = _cctx_x4799; /*list<4946>*/;
    kk_field_addr_t _b_x861_877 = _cctx_x4800; /*@field-addr<list<4946>>*/;
    kk_std_core_types__list _b_x862_878 = _cctx_x4842; /*list<4947>*/;
    kk_field_addr_t _b_x863_879 = _cctx_x4843; /*@field-addr<list<4947>>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x1714;
      kk_std_core_types__cctx _x_x1715 = kk_cctx_create((kk_std_core_types__list_box(_b_x856_872, _ctx)),_b_x857_873,kk_context()); /*cctx<0,1>*/
      _x_x1714 = kk_cctx_compose(acc1,_x_x1715,kk_context()); /*cctx<394,396>*/
      kk_std_core_types__cctx _x_x1716;
      kk_std_core_types__cctx _x_x1717 = kk_cctx_create((kk_std_core_types__list_box(_b_x858_874, _ctx)),_b_x859_875,kk_context()); /*cctx<0,1>*/
      _x_x1716 = kk_cctx_compose(acc2,_x_x1717,kk_context()); /*cctx<394,396>*/
      kk_std_core_types__cctx _x_x1718;
      kk_std_core_types__cctx _x_x1719 = kk_cctx_create((kk_std_core_types__list_box(_b_x860_876, _ctx)),_b_x861_877,kk_context()); /*cctx<0,1>*/
      _x_x1718 = kk_cctx_compose(acc3,_x_x1719,kk_context()); /*cctx<394,396>*/
      kk_std_core_types__cctx _x_x1720;
      kk_std_core_types__cctx _x_x1721 = kk_cctx_create((kk_std_core_types__list_box(_b_x862_878, _ctx)),_b_x863_879,kk_context()); /*cctx<0,1>*/
      _x_x1720 = kk_cctx_compose(acc4,_x_x1721,kk_context()); /*cctx<394,396>*/
      ys = xx;
      acc1 = _x_x1714;
      acc2 = _x_x1716;
      acc3 = _x_x1718;
      acc4 = _x_x1720;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x1722 = kk_cctx_apply(acc1,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    kk_box_t _x_x1723 = kk_cctx_apply(acc2,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    kk_box_t _x_x1724 = kk_cctx_apply(acc3,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    kk_box_t _x_x1725 = kk_cctx_apply(acc4,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*382*/
    return kk_std_core_types__new_Tuple4(kk_reuse_null, 0, _x_x1722, _x_x1723, _x_x1724, _x_x1725, _ctx);
  }
}
 
// monadic lift

kk_std_core_types__tuple2 kk_std_core_list__mlift_lift_span_6011_10311(kk_std_core_types__cctx acc, kk_function_t predicate, kk_box_t y, kk_std_core_types__list ys, kk_std_core_types__list yy, bool _y_x10226, kk_context_t* _ctx) { /* forall<a,b,e> (acc : cctx<a,list<b>>, predicate : (b) -> e bool, y : b, ys : list<b>, yy : list<b>, bool) -> e (a, list<b>) */ 
  if (_y_x10226) {
    kk_std_core_types__list_drop(ys, _ctx);
    kk_std_core_types__list _cctx_x5097;
    kk_std_core_types__list _x_x1730 = kk_datatype_null(); /*list<5194>*/
    _cctx_x5097 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), y, _x_x1730, _ctx); /*list<5194>*/
    kk_field_addr_t _cctx_x5098 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x5097, _ctx)->tail, _ctx); /*@field-addr<list<5194>>*/;
    kk_std_core_types__cctx acc_0_10030;
    kk_std_core_types__cctx _x_x1731 = kk_cctx_create((kk_std_core_types__list_box(_cctx_x5097, _ctx)),_cctx_x5098,kk_context()); /*cctx<0,1>*/
    acc_0_10030 = kk_cctx_compose(acc,_x_x1731,kk_context()); /*cctx<5169,list<5194>>*/
    return kk_std_core_list__lift_span_6011(predicate, yy, acc_0_10030, _ctx);
  }
  {
    kk_std_core_types__list_drop(yy, _ctx);
    kk_box_drop(y, _ctx);
    kk_function_drop(predicate, _ctx);
    kk_box_t _b_x900_902 = kk_cctx_apply(acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*5169*/;
    return kk_std_core_types__new_Tuple2(_b_x900_902, kk_std_core_types__list_box(ys, _ctx), _ctx);
  }
}
 
// lifted local: span, span-acc


// lift anonymous function
struct kk_std_core_list__lift_span_6011_fun1736__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx acc_0;
  kk_function_t predicate_0;
  kk_box_t y_0;
  kk_std_core_types__list ys_0;
  kk_std_core_types__list yy_0;
};
static kk_box_t kk_std_core_list__lift_span_6011_fun1736(kk_function_t _fself, kk_box_t _b_x907, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_lift_span_6011_fun1736(kk_std_core_types__cctx acc_0, kk_function_t predicate_0, kk_box_t y_0, kk_std_core_types__list ys_0, kk_std_core_types__list yy_0, kk_context_t* _ctx) {
  struct kk_std_core_list__lift_span_6011_fun1736__t* _self = kk_function_alloc_as(struct kk_std_core_list__lift_span_6011_fun1736__t, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__lift_span_6011_fun1736, kk_context());
  _self->acc_0 = acc_0;
  _self->predicate_0 = predicate_0;
  _self->y_0 = y_0;
  _self->ys_0 = ys_0;
  _self->yy_0 = yy_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__lift_span_6011_fun1736(kk_function_t _fself, kk_box_t _b_x907, kk_context_t* _ctx) {
  struct kk_std_core_list__lift_span_6011_fun1736__t* _self = kk_function_as(struct kk_std_core_list__lift_span_6011_fun1736__t*, _fself, _ctx);
  kk_std_core_types__cctx acc_0 = _self->acc_0; /* cctx<5169,list<5194>> */
  kk_function_t predicate_0 = _self->predicate_0; /* (5194) -> 5195 bool */
  kk_box_t y_0 = _self->y_0; /* 5194 */
  kk_std_core_types__list ys_0 = _self->ys_0; /* list<5194> */
  kk_std_core_types__list yy_0 = _self->yy_0; /* list<5194> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(acc_0, _ctx);kk_function_dup(predicate_0, _ctx);kk_box_dup(y_0, _ctx);kk_std_core_types__list_dup(ys_0, _ctx);kk_std_core_types__list_dup(yy_0, _ctx);}, {}, _ctx)
  bool _y_x10226_0_935 = kk_bool_unbox(_b_x907); /*bool*/;
  kk_std_core_types__tuple2 _x_x1737 = kk_std_core_list__mlift_lift_span_6011_10311(acc_0, predicate_0, y_0, ys_0, yy_0, _y_x10226_0_935, _ctx); /*(5169, list<5194>)*/
  return kk_std_core_types__tuple2_box(_x_x1737, _ctx);
}

kk_std_core_types__tuple2 kk_std_core_list__lift_span_6011(kk_function_t predicate_0, kk_std_core_types__list ys_0, kk_std_core_types__cctx acc_0, kk_context_t* _ctx) { /* forall<a,e,b> (predicate : (a) -> e bool, ys : list<a>, acc : cctx<b,list<a>>) -> e (b, list<a>) */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys_0, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1732 = kk_std_core_types__as_Cons(ys_0, _ctx);
    kk_box_t y_0 = _con_x1732->head;
    kk_std_core_types__list yy_0 = _con_x1732->tail;
    kk_box_dup(y_0, _ctx);
    kk_std_core_types__list_dup(yy_0, _ctx);
    bool x_10437;
    kk_function_t _x_x1734 = kk_function_dup(predicate_0, _ctx); /*(5194) -> 5195 bool*/
    kk_box_t _x_x1733 = kk_box_dup(y_0, _ctx); /*5194*/
    x_10437 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x1734, (_x_x1734, _x_x1733, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1735 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_lift_span_6011_fun1736(acc_0, predicate_0, y_0, ys_0, yy_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__tuple2_unbox(_x_x1735, KK_OWNED, _ctx);
    }
    if (x_10437) {
      kk_reuse_t _ru_x1253 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(ys_0, _ctx)) {
        kk_std_core_types__list_drop(yy_0, _ctx);
        kk_box_drop(y_0, _ctx);
        _ru_x1253 = (kk_datatype_ptr_reuse(ys_0, _ctx));
      }
      else {
        kk_datatype_ptr_decref(ys_0, _ctx);
      }
      kk_std_core_types__list _cctx_x5097_0;
      kk_std_core_types__list _x_x1738 = kk_datatype_null(); /*list<5194>*/
      _cctx_x5097_0 = kk_std_core_types__new_Cons(_ru_x1253, kk_field_index_of(struct kk_std_core_types_Cons, tail), y_0, _x_x1738, _ctx); /*list<5194>*/
      kk_field_addr_t _cctx_x5098_0 = kk_field_addr_create(&kk_std_core_types__as_Cons(_cctx_x5097_0, _ctx)->tail, _ctx); /*@field-addr<list<5194>>*/;
      kk_std_core_types__cctx acc_0_10030_0;
      kk_std_core_types__cctx _x_x1739 = kk_cctx_create((kk_std_core_types__list_box(_cctx_x5097_0, _ctx)),_cctx_x5098_0,kk_context()); /*cctx<0,1>*/
      acc_0_10030_0 = kk_cctx_compose(acc_0,_x_x1739,kk_context()); /*cctx<5169,list<5194>>*/
      { // tailcall
        ys_0 = yy_0;
        acc_0 = acc_0_10030_0;
        goto kk__tailcall;
      }
    }
    {
      kk_std_core_types__list_drop(yy_0, _ctx);
      kk_box_drop(y_0, _ctx);
      kk_function_drop(predicate_0, _ctx);
      kk_box_t _b_x920_927 = kk_cctx_apply(acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*5169*/;
      return kk_std_core_types__new_Tuple2(_b_x920_927, kk_std_core_types__list_box(ys_0, _ctx), _ctx);
    }
  }
  {
    kk_function_drop(predicate_0, _ctx);
    kk_box_t _b_x924_931 = kk_cctx_apply(acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*5169*/;
    return kk_std_core_types__new_Tuple2(_b_x924_931, kk_std_core_types__list_box(ys_0, _ctx), _ctx);
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_take_while_10312(kk_std_core_types__cctx _acc, kk_function_t predicate, kk_box_t x, kk_std_core_types__list xx, bool _y_x10231, kk_context_t* _ctx) { /* forall<a,e> (ctx<list<a>>, predicate : (a) -> e bool, x : a, xx : list<a>, bool) -> e list<a> */ 
  if (_y_x10231) {
    kk_std_core_types__list _trmc_x10092 = kk_datatype_null(); /*list<5253>*/;
    kk_std_core_types__list _trmc_x10093 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), x, _trmc_x10092, _ctx); /*list<5253>*/;
    kk_field_addr_t _b_x941_946 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10093, _ctx)->tail, _ctx); /*@field-addr<list<5253>>*/;
    kk_std_core_types__cctx _x_x1740 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10093, _ctx)),_b_x941_946,kk_context()); /*ctx<0>*/
    return kk_std_core_list__trmc_take_while(xx, predicate, _x_x1740, _ctx);
  }
  {
    kk_std_core_types__list_drop(xx, _ctx);
    kk_box_drop(x, _ctx);
    kk_function_drop(predicate, _ctx);
    kk_box_t _x_x1741 = kk_cctx_apply(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1741, KK_OWNED, _ctx);
  }
}
 
// Keep only those initial elements that satisfy `predicate`


// lift anonymous function
struct kk_std_core_list__trmc_take_while_fun1746__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t predicate_0;
  kk_box_t x_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list__trmc_take_while_fun1746(kk_function_t _fself, kk_box_t _b_x953, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_take_while_fun1746(kk_std_core_types__cctx _acc_0, kk_function_t predicate_0, kk_box_t x_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_take_while_fun1746__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_take_while_fun1746__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_take_while_fun1746, kk_context());
  _self->_acc_0 = _acc_0;
  _self->predicate_0 = predicate_0;
  _self->x_0 = x_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_take_while_fun1746(kk_function_t _fself, kk_box_t _b_x953, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_take_while_fun1746__t* _self = kk_function_as(struct kk_std_core_list__trmc_take_while_fun1746__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<5253>> */
  kk_function_t predicate_0 = _self->predicate_0; /* (5253) -> 5254 bool */
  kk_box_t x_0 = _self->x_0; /* 5253 */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<5253> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(predicate_0, _ctx);kk_box_dup(x_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  bool _y_x10231_0_975 = kk_bool_unbox(_b_x953); /*bool*/;
  kk_std_core_types__list _x_x1747 = kk_std_core_list__mlift_trmc_take_while_10312(_acc_0, predicate_0, x_0, xx_0, _y_x10231_0_975, _ctx); /*list<5253>*/
  return kk_std_core_types__list_box(_x_x1747, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_take_while(kk_std_core_types__list xs, kk_function_t predicate_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool, ctx<list<a>>) -> e list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1742 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x1742->head;
    kk_std_core_types__list xx_0 = _con_x1742->tail;
    kk_reuse_t _ru_x1254 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1254 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x_0, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool x_1_10440;
    kk_function_t _x_x1744 = kk_function_dup(predicate_0, _ctx); /*(5253) -> 5254 bool*/
    kk_box_t _x_x1743 = kk_box_dup(x_0, _ctx); /*5253*/
    x_1_10440 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x1744, (_x_x1744, _x_x1743, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1254,kk_context());
      kk_box_t _x_x1745 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_trmc_take_while_fun1746(_acc_0, predicate_0, x_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1745, KK_OWNED, _ctx);
    }
    if (x_1_10440) {
      kk_std_core_types__list _trmc_x10092_0 = kk_datatype_null(); /*list<5253>*/;
      kk_std_core_types__list _trmc_x10093_0 = kk_std_core_types__new_Cons(_ru_x1254, kk_field_index_of(struct kk_std_core_types_Cons, tail), x_0, _trmc_x10092_0, _ctx); /*list<5253>*/;
      kk_field_addr_t _b_x959_967 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10093_0, _ctx)->tail, _ctx); /*@field-addr<list<5253>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1748 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10093_0, _ctx)),_b_x959_967,kk_context()); /*ctx<0>*/
        xs = xx_0;
        _acc_0 = _x_x1748;
        goto kk__tailcall;
      }
    }
    {
      kk_reuse_drop(_ru_x1254,kk_context());
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_box_drop(x_0, _ctx);
      kk_function_drop(predicate_0, _ctx);
      kk_box_t _x_x1749 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
      return kk_std_core_types__list_unbox(_x_x1749, KK_OWNED, _ctx);
    }
  }
  {
    kk_function_drop(predicate_0, _ctx);
    kk_box_t _x_x1750 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1750, KK_OWNED, _ctx);
  }
}
 
// Keep only those initial elements that satisfy `predicate`

kk_std_core_types__list kk_std_core_list_take_while(kk_std_core_types__list xs_0, kk_function_t predicate_1, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool) -> e list<a> */ 
  kk_std_core_types__cctx _x_x1751 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_take_while(xs_0, predicate_1, _x_x1751, _ctx);
}
 
// Concatenate all strings in a list in reverse order

kk_string_t kk_std_core_list_reverse_join(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<string>) -> string */ 
  kk_std_core_types__list xs_0_10031 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), xs, _ctx); /*list<string>*/;
  if (kk_std_core_types__is_Nil(xs_0_10031, _ctx)) {
    return kk_string_empty();
  }
  {
    struct kk_std_core_types_Cons* _con_x1753 = kk_std_core_types__as_Cons(xs_0_10031, _ctx);
    kk_box_t _box_x976 = _con_x1753->head;
    kk_std_core_types__list _pat_1 = _con_x1753->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_string_t x = kk_string_unbox(_box_x976);
      if kk_likely(kk_datatype_ptr_is_unique(xs_0_10031, _ctx)) {
        kk_datatype_ptr_free(xs_0_10031, _ctx);
      }
      else {
        kk_string_dup(x, _ctx);
        kk_datatype_ptr_decref(xs_0_10031, _ctx);
      }
      return x;
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x1754 = kk_std_core_types__as_Cons(xs_0_10031, _ctx);
    kk_box_t _box_x977 = _con_x1754->head;
    kk_std_core_types__list _pat_3 = _con_x1754->tail;
    struct kk_std_core_types_Cons* _con_x1755 = kk_std_core_types__as_Cons(_pat_3, _ctx);
    kk_box_t _box_x978 = _con_x1755->head;
    kk_std_core_types__list _pat_4 = _con_x1755->tail;
    if (kk_std_core_types__is_Nil(_pat_4, _ctx)) {
      kk_string_t x_0 = kk_string_unbox(_box_x977);
      kk_string_t y = kk_string_unbox(_box_x978);
      if kk_likely(kk_datatype_ptr_is_unique(xs_0_10031, _ctx)) {
        if kk_likely(kk_datatype_ptr_is_unique(_pat_3, _ctx)) {
          kk_datatype_ptr_free(_pat_3, _ctx);
        }
        else {
          kk_string_dup(y, _ctx);
          kk_datatype_ptr_decref(_pat_3, _ctx);
        }
        kk_datatype_ptr_free(xs_0_10031, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_string_dup(y, _ctx);
        kk_datatype_ptr_decref(xs_0_10031, _ctx);
      }
      return kk_std_core_types__lp__plus__plus__rp_(x_0, y, _ctx);
    }
  }
  {
    kk_vector_t _x_x1756 = kk_std_core_vector_unvlist(xs_0_10031, _ctx); /*vector<978>*/
    return kk_string_join(_x_x1756,kk_context());
  }
}
 
// lifted local: concat, concat-pre

kk_std_core_types__list kk_std_core_list__trmc_lift_concat_6012(kk_std_core_types__list ys, kk_std_core_types__list zss, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* forall<a> (ys : list<a>, zss : list<list<a>>, ctx<list<a>>) -> list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1760 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t y = _con_x1760->head;
    kk_std_core_types__list yy = _con_x1760->tail;
    kk_reuse_t _ru_x1258 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      _ru_x1258 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(y, _ctx);
      kk_std_core_types__list_dup(yy, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    kk_std_core_types__list _trmc_x10094 = kk_datatype_null(); /*list<5363>*/;
    kk_std_core_types__list _trmc_x10095 = kk_std_core_types__new_Cons(_ru_x1258, 0, y, _trmc_x10094, _ctx); /*list<5363>*/;
    kk_field_addr_t _b_x984_990 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10095, _ctx)->tail, _ctx); /*@field-addr<list<5363>>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x1761 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10095, _ctx)),_b_x984_990,kk_context()); /*ctx<0>*/
      ys = yy;
      _acc = _x_x1761;
      goto kk__tailcall;
    }
  }
  if (kk_std_core_types__is_Cons(zss, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1762 = kk_std_core_types__as_Cons(zss, _ctx);
    kk_box_t _box_x985 = _con_x1762->head;
    kk_std_core_types__list zzs = _con_x1762->tail;
    kk_std_core_types__list zs = kk_std_core_types__list_unbox(_box_x985, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(zss, _ctx)) {
      kk_datatype_ptr_free(zss, _ctx);
    }
    else {
      kk_std_core_types__list_dup(zs, _ctx);
      kk_std_core_types__list_dup(zzs, _ctx);
      kk_datatype_ptr_decref(zss, _ctx);
    }
    { // tailcall
      ys = zs;
      zss = zzs;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x1763 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1763, KK_OWNED, _ctx);
  }
}
 
// lifted local: concat, concat-pre

kk_std_core_types__list kk_std_core_list__lift_concat_6012(kk_std_core_types__list ys_0, kk_std_core_types__list zss_0, kk_context_t* _ctx) { /* forall<a> (ys : list<a>, zss : list<list<a>>) -> list<a> */ 
  kk_std_core_types__cctx _x_x1764 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_concat_6012(ys_0, zss_0, _x_x1764, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_lift_flatmap_6013_10313(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list zz, kk_std_core_types__list ys_1_10038, kk_context_t* _ctx) { /* forall<a,b,e> (ctx<list<b>>, f : (a) -> e list<b>, zz : list<a>, ys@1@10038 : list<b>) -> e list<b> */ 
  return kk_std_core_list__trmc_lift_flatmap_6013(f, ys_1_10038, zz, _acc, _ctx);
}
 
// lifted local: flatmap, flatmap-pre


// lift anonymous function
struct kk_std_core_list__trmc_lift_flatmap_6013_fun1771__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_std_core_types__list zz_0;
};
static kk_box_t kk_std_core_list__trmc_lift_flatmap_6013_fun1771(kk_function_t _fself, kk_box_t _b_x1003, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_lift_flatmap_6013_fun1771(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_std_core_types__list zz_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_lift_flatmap_6013_fun1771__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_lift_flatmap_6013_fun1771__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_lift_flatmap_6013_fun1771, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->zz_0 = zz_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_lift_flatmap_6013_fun1771(kk_function_t _fself, kk_box_t _b_x1003, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_lift_flatmap_6013_fun1771__t* _self = kk_function_as(struct kk_std_core_list__trmc_lift_flatmap_6013_fun1771__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<5455>> */
  kk_function_t f_0 = _self->f_0; /* (5454) -> 5456 list<5455> */
  kk_std_core_types__list zz_0 = _self->zz_0; /* list<5454> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_std_core_types__list_dup(zz_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list ys_1_10038_0_1015 = kk_std_core_types__list_unbox(_b_x1003, KK_OWNED, _ctx); /*list<5455>*/;
  kk_std_core_types__list _x_x1772 = kk_std_core_list__mlift_trmc_lift_flatmap_6013_10313(_acc_0, f_0, zz_0, ys_1_10038_0_1015, _ctx); /*list<5455>*/
  return kk_std_core_types__list_box(_x_x1772, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_lift_flatmap_6013(kk_function_t f_0, kk_std_core_types__list ys, kk_std_core_types__list zs, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,e> (f : (a) -> e list<b>, ys : list<b>, zs : list<a>, ctx<list<b>>) -> e list<b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ys, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1766 = kk_std_core_types__as_Cons(ys, _ctx);
    kk_box_t y = _con_x1766->head;
    kk_std_core_types__list yy = _con_x1766->tail;
    kk_reuse_t _ru_x1260 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ys, _ctx)) {
      _ru_x1260 = (kk_datatype_ptr_reuse(ys, _ctx));
    }
    else {
      kk_box_dup(y, _ctx);
      kk_std_core_types__list_dup(yy, _ctx);
      kk_datatype_ptr_decref(ys, _ctx);
    }
    kk_std_core_types__list _trmc_x10096 = kk_datatype_null(); /*list<5455>*/;
    kk_std_core_types__list _trmc_x10097 = kk_std_core_types__new_Cons(_ru_x1260, kk_field_index_of(struct kk_std_core_types_Cons, tail), y, _trmc_x10096, _ctx); /*list<5455>*/;
    kk_field_addr_t _b_x1001_1008 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10097, _ctx)->tail, _ctx); /*@field-addr<list<5455>>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x1767 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10097, _ctx)),_b_x1001_1008,kk_context()); /*ctx<0>*/
      ys = yy;
      _acc_0 = _x_x1767;
      goto kk__tailcall;
    }
  }
  if (kk_std_core_types__is_Cons(zs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1768 = kk_std_core_types__as_Cons(zs, _ctx);
    kk_box_t z = _con_x1768->head;
    kk_std_core_types__list zz_0 = _con_x1768->tail;
    if kk_likely(kk_datatype_ptr_is_unique(zs, _ctx)) {
      kk_datatype_ptr_free(zs, _ctx);
    }
    else {
      kk_box_dup(z, _ctx);
      kk_std_core_types__list_dup(zz_0, _ctx);
      kk_datatype_ptr_decref(zs, _ctx);
    }
    kk_std_core_types__list x_10445;
    kk_function_t _x_x1769 = kk_function_dup(f_0, _ctx); /*(5454) -> 5456 list<5455>*/
    x_10445 = kk_function_call(kk_std_core_types__list, (kk_function_t, kk_box_t, kk_context_t*), _x_x1769, (_x_x1769, z, _ctx), _ctx); /*list<5455>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_10445, _ctx);
      kk_box_t _x_x1770 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_trmc_lift_flatmap_6013_fun1771(_acc_0, f_0, zz_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1770, KK_OWNED, _ctx);
    }
    { // tailcall
      ys = x_10445;
      zs = zz_0;
      goto kk__tailcall;
    }
  }
  {
    kk_function_drop(f_0, _ctx);
    kk_box_t _x_x1773 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1773, KK_OWNED, _ctx);
  }
}
 
// lifted local: flatmap, flatmap-pre

kk_std_core_types__list kk_std_core_list__lift_flatmap_6013(kk_function_t f_1, kk_std_core_types__list ys_0, kk_std_core_types__list zs_0, kk_context_t* _ctx) { /* forall<a,b,e> (f : (a) -> e list<b>, ys : list<b>, zs : list<a>) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1774 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_lift_flatmap_6013(f_1, ys_0, zs_0, _x_x1774, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_core_list__mlift_trmc_flatmap_maybe_10314(kk_std_core_types__cctx _acc, kk_function_t f, kk_std_core_types__list xx, kk_std_core_types__maybe _y_x10243, kk_context_t* _ctx) { /* forall<a,b,e> (ctx<list<b>>, f : (a) -> e maybe<b>, xx : list<a>, maybe<b>) -> e list<b> */ 
  if (kk_std_core_types__is_Just(_y_x10243, _ctx)) {
    kk_box_t y = _y_x10243._cons.Just.value;
    kk_std_core_types__list _trmc_x10098 = kk_datatype_null(); /*list<5542>*/;
    kk_std_core_types__list _trmc_x10099 = kk_std_core_types__new_Cons(kk_reuse_null, kk_field_index_of(struct kk_std_core_types_Cons, tail), y, _trmc_x10098, _ctx); /*list<5542>*/;
    kk_field_addr_t _b_x1021_1024 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10099, _ctx)->tail, _ctx); /*@field-addr<list<5542>>*/;
    kk_std_core_types__cctx _x_x1776 = kk_cctx_extend(_acc,(kk_std_core_types__list_box(_trmc_x10099, _ctx)),_b_x1021_1024,kk_context()); /*ctx<0>*/
    return kk_std_core_list__trmc_flatmap_maybe(xx, f, _x_x1776, _ctx);
  }
  {
    return kk_std_core_list__trmc_flatmap_maybe(xx, f, _acc, _ctx);
  }
}
 
// Concatenate the `Just` result elements from applying a function to all elements.


// lift anonymous function
struct kk_std_core_list__trmc_flatmap_maybe_fun1780__t {
  struct kk_function_s _base;
  kk_std_core_types__cctx _acc_0;
  kk_function_t f_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list__trmc_flatmap_maybe_fun1780(kk_function_t _fself, kk_box_t _b_x1029, kk_context_t* _ctx);
static kk_function_t kk_std_core_list__new_trmc_flatmap_maybe_fun1780(kk_std_core_types__cctx _acc_0, kk_function_t f_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_flatmap_maybe_fun1780__t* _self = kk_function_alloc_as(struct kk_std_core_list__trmc_flatmap_maybe_fun1780__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list__trmc_flatmap_maybe_fun1780, kk_context());
  _self->_acc_0 = _acc_0;
  _self->f_0 = f_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list__trmc_flatmap_maybe_fun1780(kk_function_t _fself, kk_box_t _b_x1029, kk_context_t* _ctx) {
  struct kk_std_core_list__trmc_flatmap_maybe_fun1780__t* _self = kk_function_as(struct kk_std_core_list__trmc_flatmap_maybe_fun1780__t*, _fself, _ctx);
  kk_std_core_types__cctx _acc_0 = _self->_acc_0; /* ctx<list<5542>> */
  kk_function_t f_0 = _self->f_0; /* (5541) -> 5543 maybe<5542> */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<5541> */
  kk_drop_match(_self, {kk_std_core_types__cctx_dup(_acc_0, _ctx);kk_function_dup(f_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10243_0_1047 = kk_std_core_types__maybe_unbox(_b_x1029, KK_OWNED, _ctx); /*maybe<5542>*/;
  kk_std_core_types__list _x_x1781 = kk_std_core_list__mlift_trmc_flatmap_maybe_10314(_acc_0, f_0, xx_0, _y_x10243_0_1047, _ctx); /*list<5542>*/
  return kk_std_core_types__list_box(_x_x1781, _ctx);
}

kk_std_core_types__list kk_std_core_list__trmc_flatmap_maybe(kk_std_core_types__list xs, kk_function_t f_0, kk_std_core_types__cctx _acc_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, f : (a) -> e maybe<b>, ctx<list<b>>) -> e list<b> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1777 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1777->head;
    kk_std_core_types__list xx_0 = _con_x1777->tail;
    kk_reuse_t _ru_x1262 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x1262 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__maybe x_0_10451;
    kk_function_t _x_x1778 = kk_function_dup(f_0, _ctx); /*(5541) -> 5543 maybe<5542>*/
    x_0_10451 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_box_t, kk_context_t*), _x_x1778, (_x_x1778, x, _ctx), _ctx); /*maybe<5542>*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x1262,kk_context());
      kk_std_core_types__maybe_drop(x_0_10451, _ctx);
      kk_box_t _x_x1779 = kk_std_core_hnd_yield_extend(kk_std_core_list__new_trmc_flatmap_maybe_fun1780(_acc_0, f_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1779, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Just(x_0_10451, _ctx)) {
      kk_box_t y_0 = x_0_10451._cons.Just.value;
      kk_std_core_types__list _trmc_x10098_0 = kk_datatype_null(); /*list<5542>*/;
      kk_std_core_types__list _trmc_x10099_0 = kk_std_core_types__new_Cons(_ru_x1262, kk_field_index_of(struct kk_std_core_types_Cons, tail), y_0, _trmc_x10098_0, _ctx); /*list<5542>*/;
      kk_field_addr_t _b_x1035_1041 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10099_0, _ctx)->tail, _ctx); /*@field-addr<list<5542>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1782 = kk_cctx_extend(_acc_0,(kk_std_core_types__list_box(_trmc_x10099_0, _ctx)),_b_x1035_1041,kk_context()); /*ctx<0>*/
        xs = xx_0;
        _acc_0 = _x_x1782;
        goto kk__tailcall;
      }
    }
    {
      kk_reuse_drop(_ru_x1262,kk_context());
      { // tailcall
        xs = xx_0;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_function_drop(f_0, _ctx);
    kk_box_t _x_x1783 = kk_cctx_apply(_acc_0,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1783, KK_OWNED, _ctx);
  }
}
 
// Concatenate the `Just` result elements from applying a function to all elements.

kk_std_core_types__list kk_std_core_list_flatmap_maybe(kk_std_core_types__list xs_0, kk_function_t f_1, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, f : (a) -> e maybe<b>) -> e list<b> */ 
  kk_std_core_types__cctx _x_x1784 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_flatmap_maybe(xs_0, f_1, _x_x1784, _ctx);
}
 
// Concatenate a list of `:maybe` values

kk_std_core_types__list kk_std_core_list__trmc_concat_maybe(kk_std_core_types__list xs, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* forall<a> (xs : list<maybe<a>>, ctx<list<a>>) -> list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1785 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x1048 = _con_x1785->head;
    kk_std_core_types__list xx = _con_x1785->tail;
    kk_std_core_types__maybe x = kk_std_core_types__maybe_unbox(_box_x1048, KK_BORROWED, _ctx);
    kk_reuse_t _ru_x1263 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_std_core_types__maybe_dup(x, _ctx);
      kk_box_drop(_box_x1048, _ctx);
      _ru_x1263 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__maybe_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    if (kk_std_core_types__is_Just(x, _ctx)) {
      kk_box_t y = x._cons.Just.value;
      kk_std_core_types__list _trmc_x10100 = kk_datatype_null(); /*list<5607>*/;
      kk_std_core_types__list _trmc_x10101 = kk_std_core_types__new_Cons(_ru_x1263, 0, y, _trmc_x10100, _ctx); /*list<5607>*/;
      kk_field_addr_t _b_x1054_1059 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10101, _ctx)->tail, _ctx); /*@field-addr<list<5607>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1786 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10101, _ctx)),_b_x1054_1059,kk_context()); /*ctx<0>*/
        xs = xx;
        _acc = _x_x1786;
        goto kk__tailcall;
      }
    }
    {
      kk_reuse_drop(_ru_x1263,kk_context());
      { // tailcall
        xs = xx;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_box_t _x_x1787 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1787, KK_OWNED, _ctx);
  }
}
 
// Concatenate a list of `:maybe` values

kk_std_core_types__list kk_std_core_list_concat_maybe(kk_std_core_types__list xs_0, kk_context_t* _ctx) { /* forall<a> (xs : list<maybe<a>>) -> list<a> */ 
  kk_std_core_types__cctx _x_x1788 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_concat_maybe(xs_0, _x_x1788, _ctx);
}
 
// Return the last element of a list (or `Nothing` for the empty list)

kk_std_core_types__maybe kk_std_core_list_last(kk_std_core_types__list xs, kk_context_t* _ctx) { /* forall<a> (xs : list<a>) -> maybe<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1789 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_std_core_types__list _pat_0 = _con_x1789->tail;
    if (kk_std_core_types__is_Nil(_pat_0, _ctx)) {
      kk_box_t x = _con_x1789->head;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        kk_datatype_ptr_free(xs, _ctx);
      }
      else {
        kk_box_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      return kk_std_core_types__new_Just(x, _ctx);
    }
  }
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1790 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _pat_2 = _con_x1790->head;
    kk_std_core_types__list xx = _con_x1790->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_box_drop(_pat_2, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    { // tailcall
      xs = xx;
      goto kk__tailcall;
    }
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// Return the list without its last element.
// Return an empty list for an empty list.

kk_std_core_types__list kk_std_core_list__trmc_init(kk_std_core_types__list xs, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, ctx<list<a>>) -> list<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1791 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_std_core_types__list xx = _con_x1791->tail;
    if (kk_std_core_types__is_Cons(xx, _ctx)) {
      struct kk_std_core_types_Cons* _con_x1792 = kk_std_core_types__as_Cons(xx, _ctx);
      kk_box_t x = _con_x1791->head;
      kk_reuse_t _ru_x1266 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        _ru_x1266 = (kk_datatype_ptr_reuse(xs, _ctx));
      }
      else {
        kk_box_dup(x, _ctx);
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_std_core_types__list _trmc_x10102 = kk_datatype_null(); /*list<5698>*/;
      kk_std_core_types__list _trmc_x10103 = kk_std_core_types__new_Cons(_ru_x1266, 0, x, _trmc_x10102, _ctx); /*list<5698>*/;
      kk_field_addr_t _b_x1070_1075 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10103, _ctx)->tail, _ctx); /*@field-addr<list<5698>>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x1793 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10103, _ctx)),_b_x1070_1075,kk_context()); /*ctx<0>*/
        xs = xx;
        _acc = _x_x1793;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_std_core_types__list_drop(xs, _ctx);
    kk_box_t _x_x1794 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x1794, KK_OWNED, _ctx);
  }
}
 
// Return the list without its last element.
// Return an empty list for an empty list.

kk_std_core_types__list kk_std_core_list_init(kk_std_core_types__list xs_0, kk_context_t* _ctx) { /* forall<a> (xs : list<a>) -> list<a> */ 
  kk_std_core_types__cctx _x_x1795 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_core_list__trmc_init(xs_0, _x_x1795, _ctx);
}
 
// Get (zero-based) element `n`  of a list. Return a `:maybe` type.

kk_std_core_types__maybe kk_std_core_list__index(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> maybe<a> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1796 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1796->head;
    kk_std_core_types__list xx = _con_x1796->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool _match_x1122 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x1122) {
      kk_box_drop(x, _ctx);
      { // tailcall
        kk_integer_t _x_x1797 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
        xs = xx;
        n = _x_x1797;
        goto kk__tailcall;
      }
    }
    {
      kk_std_core_types__list_drop(xx, _ctx);
      bool _match_x1123;
      bool _brw_x1124 = kk_integer_eq_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(n, _ctx);
      _match_x1123 = _brw_x1124; /*bool*/
      if (_match_x1123) {
        return kk_std_core_types__new_Just(x, _ctx);
      }
      {
        kk_box_drop(x, _ctx);
        return kk_std_core_types__new_Nothing(_ctx);
      }
    }
  }
  {
    kk_integer_drop(n, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// monadic lift

bool kk_std_core_list__mlift_all_10315(kk_function_t predicate, kk_std_core_types__list xx, bool _y_x10249, kk_context_t* _ctx) { /* forall<a,e> (predicate : (a) -> e bool, xx : list<a>, bool) -> e bool */ 
  if (_y_x10249) {
    return kk_std_core_list_all(xx, predicate, _ctx);
  }
  {
    kk_std_core_types__list_drop(xx, _ctx);
    kk_function_drop(predicate, _ctx);
    return false;
  }
}
 
// Do all elements satisfy a predicate ?


// lift anonymous function
struct kk_std_core_list_all_fun1801__t {
  struct kk_function_s _base;
  kk_function_t predicate_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list_all_fun1801(kk_function_t _fself, kk_box_t _b_x1082, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_all_fun1801(kk_function_t predicate_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list_all_fun1801__t* _self = kk_function_alloc_as(struct kk_std_core_list_all_fun1801__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_all_fun1801, kk_context());
  _self->predicate_0 = predicate_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_all_fun1801(kk_function_t _fself, kk_box_t _b_x1082, kk_context_t* _ctx) {
  struct kk_std_core_list_all_fun1801__t* _self = kk_function_as(struct kk_std_core_list_all_fun1801__t*, _fself, _ctx);
  kk_function_t predicate_0 = _self->predicate_0; /* (5835) -> 5836 bool */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<5835> */
  kk_drop_match(_self, {kk_function_dup(predicate_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  bool _y_x10249_0_1084 = kk_bool_unbox(_b_x1082); /*bool*/;
  bool _x_x1802 = kk_std_core_list__mlift_all_10315(predicate_0, xx_0, _y_x10249_0_1084, _ctx); /*bool*/
  return kk_bool_box(_x_x1802);
}

bool kk_std_core_list_all(kk_std_core_types__list xs, kk_function_t predicate_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool) -> e bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1798 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1798->head;
    kk_std_core_types__list xx_0 = _con_x1798->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool x_0_10454;
    kk_function_t _x_x1799 = kk_function_dup(predicate_0, _ctx); /*(5835) -> 5836 bool*/
    x_0_10454 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x1799, (_x_x1799, x, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1800 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_all_fun1801(predicate_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_bool_unbox(_x_x1800);
    }
    if (x_0_10454) { // tailcall
                     xs = xx_0;
                     goto kk__tailcall;
    }
    {
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_function_drop(predicate_0, _ctx);
      return false;
    }
  }
  {
    kk_function_drop(predicate_0, _ctx);
    return true;
  }
}
 
// monadic lift

bool kk_std_core_list__mlift_any_10316(kk_function_t predicate, kk_std_core_types__list xx, bool _y_x10253, kk_context_t* _ctx) { /* forall<a,e> (predicate : (a) -> e bool, xx : list<a>, bool) -> e bool */ 
  if (_y_x10253) {
    kk_std_core_types__list_drop(xx, _ctx);
    kk_function_drop(predicate, _ctx);
    return true;
  }
  {
    return kk_std_core_list_any(xx, predicate, _ctx);
  }
}
 
// Are there any elements in a list that satisfy a predicate ?


// lift anonymous function
struct kk_std_core_list_any_fun1806__t {
  struct kk_function_s _base;
  kk_function_t predicate_0;
  kk_std_core_types__list xx_0;
};
static kk_box_t kk_std_core_list_any_fun1806(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_any_fun1806(kk_function_t predicate_0, kk_std_core_types__list xx_0, kk_context_t* _ctx) {
  struct kk_std_core_list_any_fun1806__t* _self = kk_function_alloc_as(struct kk_std_core_list_any_fun1806__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_list_any_fun1806, kk_context());
  _self->predicate_0 = predicate_0;
  _self->xx_0 = xx_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_list_any_fun1806(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx) {
  struct kk_std_core_list_any_fun1806__t* _self = kk_function_as(struct kk_std_core_list_any_fun1806__t*, _fself, _ctx);
  kk_function_t predicate_0 = _self->predicate_0; /* (5882) -> 5883 bool */
  kk_std_core_types__list xx_0 = _self->xx_0; /* list<5882> */
  kk_drop_match(_self, {kk_function_dup(predicate_0, _ctx);kk_std_core_types__list_dup(xx_0, _ctx);}, {}, _ctx)
  bool _y_x10253_0_1088 = kk_bool_unbox(_b_x1086); /*bool*/;
  bool _x_x1807 = kk_std_core_list__mlift_any_10316(predicate_0, xx_0, _y_x10253_0_1088, _ctx); /*bool*/
  return kk_bool_box(_x_x1807);
}

bool kk_std_core_list_any(kk_std_core_types__list xs, kk_function_t predicate_0, kk_context_t* _ctx) { /* forall<a,e> (xs : list<a>, predicate : (a) -> e bool) -> e bool */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1803 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x = _con_x1803->head;
    kk_std_core_types__list xx_0 = _con_x1803->tail;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_std_core_types__list_dup(xx_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool x_0_10457;
    kk_function_t _x_x1804 = kk_function_dup(predicate_0, _ctx); /*(5882) -> 5883 bool*/
    x_0_10457 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x_x1804, (_x_x1804, x, _ctx), _ctx); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x1805 = kk_std_core_hnd_yield_extend(kk_std_core_list_new_any_fun1806(predicate_0, xx_0, _ctx), _ctx); /*2419*/
      return kk_bool_unbox(_x_x1805);
    }
    if (x_0_10457) {
      kk_std_core_types__list_drop(xx_0, _ctx);
      kk_function_drop(predicate_0, _ctx);
      return true;
    }
    { // tailcall
      xs = xx_0;
      goto kk__tailcall;
    }
  }
  {
    kk_function_drop(predicate_0, _ctx);
    return false;
  }
}
 
// Return the sum of a list of integers


// lift anonymous function
struct kk_std_core_list_sum_fun1809__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_list_sum_fun1809(kk_function_t _fself, kk_box_t _b_x1092, kk_box_t _b_x1093, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_sum_fun1809(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_list_sum_fun1809, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_list_sum_fun1809(kk_function_t _fself, kk_box_t _b_x1092, kk_box_t _b_x1093, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1810;
  kk_integer_t _x_x1811 = kk_integer_unbox(_b_x1092, _ctx); /*int*/
  kk_integer_t _x_x1812 = kk_integer_unbox(_b_x1093, _ctx); /*int*/
  _x_x1810 = kk_std_core_int__lp__plus__rp_(_x_x1811, _x_x1812, _ctx); /*int*/
  return kk_integer_box(_x_x1810, _ctx);
}

kk_integer_t kk_std_core_list_sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x1808 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(0), _ctx), kk_std_core_list_new_sum_fun1809(_ctx), _ctx); /*1203*/
  return kk_integer_unbox(_x_x1808, _ctx);
}
 
// Returns the smallest element of a list of integers (or `default` (=`0`) for the empty list)


// lift anonymous function
struct kk_std_core_list_minimum_fun1815__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_list_minimum_fun1815(kk_function_t _fself, kk_box_t _b_x1102, kk_box_t _b_x1103, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_minimum_fun1815(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_list_minimum_fun1815, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_list_minimum_fun1815(kk_function_t _fself, kk_box_t _b_x1102, kk_box_t _b_x1103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1816;
  kk_integer_t _x_x1817 = kk_integer_unbox(_b_x1102, _ctx); /*int*/
  kk_integer_t _x_x1818 = kk_integer_unbox(_b_x1103, _ctx); /*int*/
  _x_x1816 = kk_std_core_int_min(_x_x1817, _x_x1818, _ctx); /*int*/
  return kk_integer_box(_x_x1816, _ctx);
}

kk_integer_t kk_std_core_list_minimum(kk_std_core_types__list xs, kk_std_core_types__optional kkloc_default, kk_context_t* _ctx) { /* (xs : list<int>, default : ? int) -> int */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    if (kk_std_core_types__is_Optional(kkloc_default, _ctx)) {
      kk_box_t _box_x1097 = kkloc_default._cons._Optional.value;
      kk_integer_t _uniq_default_5916 = kk_integer_unbox(_box_x1097, _ctx);
      kk_integer_dup(_uniq_default_5916, _ctx);
      kk_std_core_types__optional_drop(kkloc_default, _ctx);
      return _uniq_default_5916;
    }
    {
      kk_std_core_types__optional_drop(kkloc_default, _ctx);
      return kk_integer_from_small(0);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x1813 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x1098 = _con_x1813->head;
    kk_std_core_types__list xx = _con_x1813->tail;
    kk_integer_t x = kk_integer_unbox(_box_x1098, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_integer_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__optional_drop(kkloc_default, _ctx);
    kk_box_t _x_x1814 = kk_std_core_list_foldl(xx, kk_integer_box(x, _ctx), kk_std_core_list_new_minimum_fun1815(_ctx), _ctx); /*1203*/
    return kk_integer_unbox(_x_x1814, _ctx);
  }
}
 
// Returns the largest element of a list of integers (or `default` (=`0`) for the empty list)


// lift anonymous function
struct kk_std_core_list_maximum_fun1821__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_list_maximum_fun1821(kk_function_t _fself, kk_box_t _b_x1112, kk_box_t _b_x1113, kk_context_t* _ctx);
static kk_function_t kk_std_core_list_new_maximum_fun1821(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_list_maximum_fun1821, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_list_maximum_fun1821(kk_function_t _fself, kk_box_t _b_x1112, kk_box_t _b_x1113, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1822;
  kk_integer_t _x_x1823 = kk_integer_unbox(_b_x1112, _ctx); /*int*/
  kk_integer_t _x_x1824 = kk_integer_unbox(_b_x1113, _ctx); /*int*/
  _x_x1822 = kk_std_core_int_max(_x_x1823, _x_x1824, _ctx); /*int*/
  return kk_integer_box(_x_x1822, _ctx);
}

kk_integer_t kk_std_core_list_maximum(kk_std_core_types__list xs, kk_std_core_types__optional kkloc_default, kk_context_t* _ctx) { /* (xs : list<int>, default : ? int) -> int */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    if (kk_std_core_types__is_Optional(kkloc_default, _ctx)) {
      kk_box_t _box_x1107 = kkloc_default._cons._Optional.value;
      kk_integer_t _uniq_default_5950 = kk_integer_unbox(_box_x1107, _ctx);
      kk_integer_dup(_uniq_default_5950, _ctx);
      kk_std_core_types__optional_drop(kkloc_default, _ctx);
      return _uniq_default_5950;
    }
    {
      kk_std_core_types__optional_drop(kkloc_default, _ctx);
      return kk_integer_from_small(0);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x1819 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x1108 = _con_x1819->head;
    kk_std_core_types__list xx = _con_x1819->tail;
    kk_integer_t x = kk_integer_unbox(_box_x1108, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_integer_dup(x, _ctx);
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__optional_drop(kkloc_default, _ctx);
    kk_box_t _x_x1820 = kk_std_core_list_foldl(xx, kk_integer_box(x, _ctx), kk_std_core_list_new_maximum_fun1821(_ctx), _ctx); /*1203*/
    return kk_integer_unbox(_x_x1820, _ctx);
  }
}
 
// Join a list of strings with newlines

kk_string_t kk_std_core_list_unlines(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<string>) -> string */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    return kk_string_empty();
  }
  {
    struct kk_std_core_types_Cons* _con_x1828 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x1117 = _con_x1828->head;
    kk_std_core_types__list _pat_1 = _con_x1828->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_string_t x = kk_string_unbox(_box_x1117);
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        kk_datatype_ptr_free(xs, _ctx);
      }
      else {
        kk_string_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      return x;
    }
  }
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x1829 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x1118 = _con_x1829->head;
    kk_std_core_types__list _pat_3 = _con_x1829->tail;
    if (kk_std_core_types__is_Cons(_pat_3, _ctx)) {
      struct kk_std_core_types_Cons* _con_x1830 = kk_std_core_types__as_Cons(_pat_3, _ctx);
      kk_box_t _box_x1119 = _con_x1830->head;
      kk_std_core_types__list _pat_4 = _con_x1830->tail;
      if (kk_std_core_types__is_Nil(_pat_4, _ctx)) {
        kk_string_t _x_x1831;
        kk_define_string_literal(static, _s_x1832, 1, "\n", _ctx)
        _x_x1831 = kk_string_dup(_s_x1832, _ctx); /*string*/
        kk_string_t _x_x1833 = kk_string_empty(); /*string*/
        if (kk_string_is_eq(_x_x1831,_x_x1833,kk_context())) {
          kk_string_t x_0 = kk_string_unbox(_box_x1118);
          kk_string_t y = kk_string_unbox(_box_x1119);
          if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
            if kk_likely(kk_datatype_ptr_is_unique(_pat_3, _ctx)) {
              kk_datatype_ptr_free(_pat_3, _ctx);
            }
            else {
              kk_string_dup(y, _ctx);
              kk_datatype_ptr_decref(_pat_3, _ctx);
            }
            kk_datatype_ptr_free(xs, _ctx);
          }
          else {
            kk_string_dup(x_0, _ctx);
            kk_string_dup(y, _ctx);
            kk_datatype_ptr_decref(xs, _ctx);
          }
          return kk_std_core_types__lp__plus__plus__rp_(x_0, y, _ctx);
        }
      }
    }
  }
  {
    kk_vector_t _x_x1835 = kk_std_core_vector_unvlist(xs, _ctx); /*vector<978>*/
    kk_string_t _x_x1836;
    kk_define_string_literal(static, _s_x1837, 1, "\n", _ctx)
    _x_x1836 = kk_string_dup(_s_x1837, _ctx); /*string*/
    return kk_string_join_with(_x_x1835,_x_x1836,kk_context());
  }
}

// initialization
void kk_std_core_list__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_undiv__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_core_list__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_undiv__done(_ctx);
  kk_std_core_types__done(_ctx);
}
