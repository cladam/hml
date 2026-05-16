// Koka generated module: std/core/maybe2, koka version: 3.2.3, platform: 64-bit
#include "std_core_maybe2.h"
 
// Get the value of the `Just` constructor or raise an exception

kk_std_core_types__tuple2 kk_std_core_maybe2_unjust(kk_std_core_types__maybe2 m, kk_string_t _implicit_fs_kk_file_line, kk_context_t* _ctx) { /* forall<a,b> (m : maybe2<a,b>, ?kk-file-line : string) -> exn (a, b) */ 
  if (kk_std_core_types__is_Just2(m, _ctx)) {
    kk_box_t x = m._cons.Just2.fst;
    kk_box_t y = m._cons.Just2.snd;
    kk_string_drop(_implicit_fs_kk_file_line, _ctx);
    return kk_std_core_types__new_Tuple2(x, y, _ctx);
  }
  {
    kk_string_t _b_x0_2;
    kk_string_t _x_x37;
    kk_define_string_literal(static, _s_x38, 23, "unexpected Nothing2 in ", _ctx)
    _x_x37 = kk_string_dup(_s_x38, _ctx); /*string*/
    _b_x0_2 = kk_std_core_types__lp__plus__plus__rp_(_x_x37, _implicit_fs_kk_file_line, _ctx); /*string*/
    kk_box_t _x_x39 = kk_std_core_exn_throw(_b_x0_2, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
    return kk_std_core_types__tuple2_unbox(_x_x39, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_std_core_maybe2_map_fun42__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_maybe2_map_fun42(kk_function_t _fself, kk_box_t _b_x9, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe2_new_map_fun42(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_maybe2_map_fun42, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_maybe2_map_fun42(kk_function_t _fself, kk_box_t _b_x9, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _y_x10006_11 = kk_std_core_types__tuple2_unbox(_b_x9, KK_OWNED, _ctx); /*(427, 428)*/;
  kk_std_core_types__maybe2 _x_x43;
  {
    kk_box_t fx = _y_x10006_11.fst;
    kk_box_t fy = _y_x10006_11.snd;
    _x_x43 = kk_std_core_types__new_Just2(fx, fy, _ctx); /*maybe2<93,94>*/
  }
  return kk_std_core_types__maybe2_box(_x_x43, _ctx);
}

kk_std_core_types__maybe2 kk_std_core_maybe2_map(kk_std_core_types__maybe2 m, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,d,e> (m : maybe2<a,b>, f : (a, b) -> e (c, d)) -> e maybe2<c,d> */ 
  if (kk_std_core_types__is_Nothing2(m, _ctx)) {
    kk_function_drop(f, _ctx);
    return kk_std_core_types__new_Nothing2(_ctx);
  }
  {
    kk_box_t x = m._cons.Just2.fst;
    kk_box_t y = m._cons.Just2.snd;
    kk_std_core_types__tuple2 x_0_10026 = kk_function_call(kk_std_core_types__tuple2, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, x, y, _ctx), _ctx); /*(427, 428)*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__tuple2_drop(x_0_10026, _ctx);
      kk_box_t _x_x41 = kk_std_core_hnd_yield_extend(kk_std_core_maybe2_new_map_fun42(_ctx), _ctx); /*2419*/
      return kk_std_core_types__maybe2_unbox(_x_x41, KK_OWNED, _ctx);
    }
    {
      kk_box_t fx_0 = x_0_10026.fst;
      kk_box_t fy_0 = x_0_10026.snd;
      return kk_std_core_types__new_Just2(fx_0, fy_0, _ctx);
    }
  }
}
 
// Equality on `:maybe`


// lift anonymous function
struct kk_std_core_maybe2__lp__at_x_fun45__t_eq__eq__rp_ {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_;
  kk_box_t b;
  kk_box_t y;
};
static kk_box_t kk_std_core_maybe2__lp__at_x_fun45_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x13, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe2__lp__at_new_x_fun45_eq__eq__rp_(kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_box_t b, kk_box_t y, kk_context_t* _ctx) {
  struct kk_std_core_maybe2__lp__at_x_fun45__t_eq__eq__rp_* _self = kk_function_alloc_as(struct kk_std_core_maybe2__lp__at_x_fun45__t_eq__eq__rp_, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_maybe2__lp__at_x_fun45_eq__eq__rp_, kk_context());
  _self->_implicit_fs_snd_fs__lp__eq__eq__rp_ = _implicit_fs_snd_fs__lp__eq__eq__rp_;
  _self->b = b;
  _self->y = y;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_maybe2__lp__at_x_fun45_eq__eq__rp_(kk_function_t _fself, kk_box_t _b_x13, kk_context_t* _ctx) {
  struct kk_std_core_maybe2__lp__at_x_fun45__t_eq__eq__rp_* _self = kk_function_as(struct kk_std_core_maybe2__lp__at_x_fun45__t_eq__eq__rp_*, _fself, _ctx);
  kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_ = _self->_implicit_fs_snd_fs__lp__eq__eq__rp_; /* (568, 568) -> 569 bool */
  kk_box_t b = _self->b; /* 568 */
  kk_box_t y = _self->y; /* 568 */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_snd_fs__lp__eq__eq__rp_, _ctx);kk_box_dup(b, _ctx);kk_box_dup(y, _ctx);}, {}, _ctx)
  bool _y_x10008_15 = kk_bool_unbox(_b_x13); /*bool*/;
  bool _x_x46;
  if (_y_x10008_15) {
    _x_x46 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_snd_fs__lp__eq__eq__rp_, (_implicit_fs_snd_fs__lp__eq__eq__rp_, y, b, _ctx), _ctx); /*bool*/
  }
  else {
    kk_box_drop(y, _ctx);
    kk_box_drop(b, _ctx);
    kk_function_drop(_implicit_fs_snd_fs__lp__eq__eq__rp_, _ctx);
    _x_x46 = false; /*bool*/
  }
  return kk_bool_box(_x_x46);
}

bool kk_std_core_maybe2__lp__eq__eq__rp_(kk_std_core_types__maybe2 mb1, kk_std_core_types__maybe2 mb2, kk_function_t _implicit_fs_fst_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,b,e> (mb1 : maybe2<a,b>, mb2 : maybe2<a,b>, ?fst/(==) : (a, a) -> e bool, ?snd/(==) : (b, b) -> e bool) -> e bool */ 
  if (kk_std_core_types__is_Just2(mb1, _ctx)) {
    kk_box_t x = mb1._cons.Just2.fst;
    kk_box_t y = mb1._cons.Just2.snd;
    if (kk_std_core_types__is_Just2(mb2, _ctx)) {
      kk_box_t a = mb2._cons.Just2.fst;
      kk_box_t b = mb2._cons.Just2.snd;
      bool x_0_10030 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_fst_fs__lp__eq__eq__rp_, (_implicit_fs_fst_fs__lp__eq__eq__rp_, x, a, _ctx), _ctx); /*bool*/;
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x44 = kk_std_core_hnd_yield_extend(kk_std_core_maybe2__lp__at_new_x_fun45_eq__eq__rp_(_implicit_fs_snd_fs__lp__eq__eq__rp_, b, y, _ctx), _ctx); /*2419*/
        return kk_bool_unbox(_x_x44);
      }
      if (x_0_10030) {
        return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_snd_fs__lp__eq__eq__rp_, (_implicit_fs_snd_fs__lp__eq__eq__rp_, y, b, _ctx), _ctx);
      }
      {
        kk_box_drop(y, _ctx);
        kk_box_drop(b, _ctx);
        kk_function_drop(_implicit_fs_snd_fs__lp__eq__eq__rp_, _ctx);
        return false;
      }
    }
    {
      kk_box_drop(y, _ctx);
      kk_box_drop(x, _ctx);
      kk_function_drop(_implicit_fs_snd_fs__lp__eq__eq__rp_, _ctx);
      kk_function_drop(_implicit_fs_fst_fs__lp__eq__eq__rp_, _ctx);
      return false;
    }
  }
  {
    kk_function_drop(_implicit_fs_snd_fs__lp__eq__eq__rp_, _ctx);
    kk_function_drop(_implicit_fs_fst_fs__lp__eq__eq__rp_, _ctx);
    if (kk_std_core_types__is_Nothing2(mb2, _ctx)) {
      return true;
    }
    {
      kk_std_core_types__maybe2_drop(mb2, _ctx);
      return false;
    }
  }
}
 
// Order on `:maybe` values


// lift anonymous function
struct kk_std_core_maybe2_cmp_fun48__t {
  struct kk_function_s _base;
  kk_box_t b;
  kk_function_t _implicit_fs_snd_fs_cmp;
  kk_box_t y;
};
static kk_box_t kk_std_core_maybe2_cmp_fun48(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe2_new_cmp_fun48(kk_box_t b, kk_function_t _implicit_fs_snd_fs_cmp, kk_box_t y, kk_context_t* _ctx) {
  struct kk_std_core_maybe2_cmp_fun48__t* _self = kk_function_alloc_as(struct kk_std_core_maybe2_cmp_fun48__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_maybe2_cmp_fun48, kk_context());
  _self->b = b;
  _self->_implicit_fs_snd_fs_cmp = _implicit_fs_snd_fs_cmp;
  _self->y = y;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_maybe2_cmp_fun48(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  struct kk_std_core_maybe2_cmp_fun48__t* _self = kk_function_as(struct kk_std_core_maybe2_cmp_fun48__t*, _fself, _ctx);
  kk_box_t b = _self->b; /* 656 */
  kk_function_t _implicit_fs_snd_fs_cmp = _self->_implicit_fs_snd_fs_cmp; /* (656, 656) -> 657 order */
  kk_box_t y = _self->y; /* 656 */
  kk_drop_match(_self, {kk_box_dup(b, _ctx);kk_function_dup(_implicit_fs_snd_fs_cmp, _ctx);kk_box_dup(y, _ctx);}, {}, _ctx)
  kk_std_core_types__order _y_x10013_19 = kk_std_core_types__order_unbox(_b_x17, KK_OWNED, _ctx); /*order*/;
  kk_std_core_types__order _x_x49;
  if (kk_std_core_types__is_Eq(_y_x10013_19, _ctx)) {
    _x_x49 = kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_snd_fs_cmp, (_implicit_fs_snd_fs_cmp, y, b, _ctx), _ctx); /*order*/
  }
  else {
    kk_box_drop(y, _ctx);
    kk_function_drop(_implicit_fs_snd_fs_cmp, _ctx);
    kk_box_drop(b, _ctx);
    _x_x49 = _y_x10013_19; /*order*/
  }
  return kk_std_core_types__order_box(_x_x49, _ctx);
}

kk_std_core_types__order kk_std_core_maybe2_cmp(kk_std_core_types__maybe2 mb1, kk_std_core_types__maybe2 mb2, kk_function_t _implicit_fs_fst_fs_cmp, kk_function_t _implicit_fs_snd_fs_cmp, kk_context_t* _ctx) { /* forall<a,b,e> (mb1 : maybe2<a,b>, mb2 : maybe2<a,b>, ?fst/cmp : (a, a) -> e order, ?snd/cmp : (b, b) -> e order) -> e order */ 
  if (kk_std_core_types__is_Just2(mb1, _ctx)) {
    kk_box_t x = mb1._cons.Just2.fst;
    kk_box_t y = mb1._cons.Just2.snd;
    if (kk_std_core_types__is_Just2(mb2, _ctx)) {
      kk_box_t a = mb2._cons.Just2.fst;
      kk_box_t b = mb2._cons.Just2.snd;
      kk_std_core_types__order x_0_10037 = kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_fst_fs_cmp, (_implicit_fs_fst_fs_cmp, x, a, _ctx), _ctx); /*order*/;
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x47 = kk_std_core_hnd_yield_extend(kk_std_core_maybe2_new_cmp_fun48(b, _implicit_fs_snd_fs_cmp, y, _ctx), _ctx); /*2419*/
        return kk_std_core_types__order_unbox(_x_x47, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Eq(x_0_10037, _ctx)) {
        return kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_snd_fs_cmp, (_implicit_fs_snd_fs_cmp, y, b, _ctx), _ctx);
      }
      {
        kk_box_drop(y, _ctx);
        kk_function_drop(_implicit_fs_snd_fs_cmp, _ctx);
        kk_box_drop(b, _ctx);
        return x_0_10037;
      }
    }
    {
      kk_box_drop(y, _ctx);
      kk_box_drop(x, _ctx);
      kk_function_drop(_implicit_fs_snd_fs_cmp, _ctx);
      kk_function_drop(_implicit_fs_fst_fs_cmp, _ctx);
      return kk_std_core_types__new_Gt(_ctx);
    }
  }
  {
    kk_function_drop(_implicit_fs_snd_fs_cmp, _ctx);
    kk_function_drop(_implicit_fs_fst_fs_cmp, _ctx);
    if (kk_std_core_types__is_Nothing2(mb2, _ctx)) {
      return kk_std_core_types__new_Eq(_ctx);
    }
    {
      kk_std_core_types__maybe2_drop(mb2, _ctx);
      return kk_std_core_types__new_Lt(_ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_core_maybe2__mlift_show_10025_fun59__t {
  struct kk_function_s _base;
  kk_string_t _y_x10018;
};
static kk_string_t kk_std_core_maybe2__mlift_show_10025_fun59(kk_function_t _fself, kk_string_t _y_x10019, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe2__new_mlift_show_10025_fun59(kk_string_t _y_x10018, kk_context_t* _ctx) {
  struct kk_std_core_maybe2__mlift_show_10025_fun59__t* _self = kk_function_alloc_as(struct kk_std_core_maybe2__mlift_show_10025_fun59__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_maybe2__mlift_show_10025_fun59, kk_context());
  _self->_y_x10018 = _y_x10018;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_std_core_maybe2__mlift_show_10025_fun59(kk_function_t _fself, kk_string_t _y_x10019, kk_context_t* _ctx) {
  struct kk_std_core_maybe2__mlift_show_10025_fun59__t* _self = kk_function_as(struct kk_std_core_maybe2__mlift_show_10025_fun59__t*, _fself, _ctx);
  kk_string_t _y_x10018 = _self->_y_x10018; /* string */
  kk_drop_match(_self, {kk_string_dup(_y_x10018, _ctx);}, {}, _ctx)
  kk_string_t _x_x60;
  kk_define_string_literal(static, _s_x61, 6, "Just2(", _ctx)
  _x_x60 = kk_string_dup(_s_x61, _ctx); /*string*/
  kk_string_t _x_x62;
  kk_string_t _x_x63;
  kk_string_t _x_x64;
  kk_define_string_literal(static, _s_x65, 1, ",", _ctx)
  _x_x64 = kk_string_dup(_s_x65, _ctx); /*string*/
  kk_string_t _x_x66;
  kk_string_t _x_x67;
  kk_define_string_literal(static, _s_x68, 1, ")", _ctx)
  _x_x67 = kk_string_dup(_s_x68, _ctx); /*string*/
  _x_x66 = kk_std_core_types__lp__plus__plus__rp_(_y_x10019, _x_x67, _ctx); /*string*/
  _x_x63 = kk_std_core_types__lp__plus__plus__rp_(_x_x64, _x_x66, _ctx); /*string*/
  _x_x62 = kk_std_core_types__lp__plus__plus__rp_(_y_x10018, _x_x63, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x60, _x_x62, _ctx);
}


// lift anonymous function
struct kk_std_core_maybe2__mlift_show_10025_fun70__t {
  struct kk_function_s _base;
  kk_function_t next_10045;
};
static kk_box_t kk_std_core_maybe2__mlift_show_10025_fun70(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe2__new_mlift_show_10025_fun70(kk_function_t next_10045, kk_context_t* _ctx) {
  struct kk_std_core_maybe2__mlift_show_10025_fun70__t* _self = kk_function_alloc_as(struct kk_std_core_maybe2__mlift_show_10025_fun70__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_maybe2__mlift_show_10025_fun70, kk_context());
  _self->next_10045 = next_10045;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_maybe2__mlift_show_10025_fun70(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx) {
  struct kk_std_core_maybe2__mlift_show_10025_fun70__t* _self = kk_function_as(struct kk_std_core_maybe2__mlift_show_10025_fun70__t*, _fself, _ctx);
  kk_function_t next_10045 = _self->next_10045; /* (string) -> 754 string */
  kk_drop_match(_self, {kk_function_dup(next_10045, _ctx);}, {}, _ctx)
  kk_string_t _x_x71;
  kk_string_t _x_x72 = kk_string_unbox(_b_x21); /*string*/
  _x_x71 = kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), next_10045, (next_10045, _x_x72, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x71);
}

kk_string_t kk_std_core_maybe2__mlift_show_10025(kk_function_t _implicit_fs_snd_fs_show, kk_box_t y, kk_string_t _y_x10018, kk_context_t* _ctx) { /* forall<a,e> (?snd/show : (a) -> e string, y : a, string) -> e string */ 
  kk_string_t x_10044 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_snd_fs_show, (_implicit_fs_snd_fs_show, y, _ctx), _ctx); /*string*/;
  kk_function_t next_10045 = kk_std_core_maybe2__new_mlift_show_10025_fun59(_y_x10018, _ctx); /*(string) -> 754 string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10044, _ctx);
    kk_box_t _x_x69 = kk_std_core_hnd_yield_extend(kk_std_core_maybe2__new_mlift_show_10025_fun70(next_10045, _ctx), _ctx); /*2419*/
    return kk_string_unbox(_x_x69);
  }
  {
    return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), next_10045, (next_10045, x_10044, _ctx), _ctx);
  }
}
 
// Show a `:maybe2` type


// lift anonymous function
struct kk_std_core_maybe2_show_fun74__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_snd_fs_show;
  kk_box_t y;
};
static kk_box_t kk_std_core_maybe2_show_fun74(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe2_new_show_fun74(kk_function_t _implicit_fs_snd_fs_show, kk_box_t y, kk_context_t* _ctx) {
  struct kk_std_core_maybe2_show_fun74__t* _self = kk_function_alloc_as(struct kk_std_core_maybe2_show_fun74__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_maybe2_show_fun74, kk_context());
  _self->_implicit_fs_snd_fs_show = _implicit_fs_snd_fs_show;
  _self->y = y;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_maybe2_show_fun74(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx) {
  struct kk_std_core_maybe2_show_fun74__t* _self = kk_function_as(struct kk_std_core_maybe2_show_fun74__t*, _fself, _ctx);
  kk_function_t _implicit_fs_snd_fs_show = _self->_implicit_fs_snd_fs_show; /* (753) -> 754 string */
  kk_box_t y = _self->y; /* 753 */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_snd_fs_show, _ctx);kk_box_dup(y, _ctx);}, {}, _ctx)
  kk_string_t _y_x10018_29 = kk_string_unbox(_b_x24); /*string*/;
  kk_string_t _x_x75 = kk_std_core_maybe2__mlift_show_10025(_implicit_fs_snd_fs_show, y, _y_x10018_29, _ctx); /*string*/
  return kk_string_box(_x_x75);
}


// lift anonymous function
struct kk_std_core_maybe2_show_fun77__t {
  struct kk_function_s _base;
  kk_string_t x_0_10048;
};
static kk_box_t kk_std_core_maybe2_show_fun77(kk_function_t _fself, kk_box_t _b_x26, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe2_new_show_fun77(kk_string_t x_0_10048, kk_context_t* _ctx) {
  struct kk_std_core_maybe2_show_fun77__t* _self = kk_function_alloc_as(struct kk_std_core_maybe2_show_fun77__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_maybe2_show_fun77, kk_context());
  _self->x_0_10048 = x_0_10048;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_maybe2_show_fun77(kk_function_t _fself, kk_box_t _b_x26, kk_context_t* _ctx) {
  struct kk_std_core_maybe2_show_fun77__t* _self = kk_function_as(struct kk_std_core_maybe2_show_fun77__t*, _fself, _ctx);
  kk_string_t x_0_10048 = _self->x_0_10048; /* string */
  kk_drop_match(_self, {kk_string_dup(x_0_10048, _ctx);}, {}, _ctx)
  kk_string_t _y_x10019_30 = kk_string_unbox(_b_x26); /*string*/;
  kk_string_t _x_x78;
  kk_string_t _x_x79;
  kk_define_string_literal(static, _s_x80, 6, "Just2(", _ctx)
  _x_x79 = kk_string_dup(_s_x80, _ctx); /*string*/
  kk_string_t _x_x81;
  kk_string_t _x_x82;
  kk_string_t _x_x83;
  kk_define_string_literal(static, _s_x84, 1, ",", _ctx)
  _x_x83 = kk_string_dup(_s_x84, _ctx); /*string*/
  kk_string_t _x_x85;
  kk_string_t _x_x86;
  kk_define_string_literal(static, _s_x87, 1, ")", _ctx)
  _x_x86 = kk_string_dup(_s_x87, _ctx); /*string*/
  _x_x85 = kk_std_core_types__lp__plus__plus__rp_(_y_x10019_30, _x_x86, _ctx); /*string*/
  _x_x82 = kk_std_core_types__lp__plus__plus__rp_(_x_x83, _x_x85, _ctx); /*string*/
  _x_x81 = kk_std_core_types__lp__plus__plus__rp_(x_0_10048, _x_x82, _ctx); /*string*/
  _x_x78 = kk_std_core_types__lp__plus__plus__rp_(_x_x79, _x_x81, _ctx); /*string*/
  return kk_string_box(_x_x78);
}

kk_string_t kk_std_core_maybe2_show(kk_std_core_types__maybe2 mb, kk_function_t _implicit_fs_fst_fs_show, kk_function_t _implicit_fs_snd_fs_show, kk_context_t* _ctx) { /* forall<a,b,e> (mb : maybe2<a,b>, ?fst/show : (a) -> e string, ?snd/show : (b) -> e string) -> e string */ 
  if (kk_std_core_types__is_Just2(mb, _ctx)) {
    kk_box_t x = mb._cons.Just2.fst;
    kk_box_t y = mb._cons.Just2.snd;
    kk_string_t x_0_10048 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_fst_fs_show, (_implicit_fs_fst_fs_show, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10048, _ctx);
      kk_box_t _x_x73 = kk_std_core_hnd_yield_extend(kk_std_core_maybe2_new_show_fun74(_implicit_fs_snd_fs_show, y, _ctx), _ctx); /*2419*/
      return kk_string_unbox(_x_x73);
    }
    {
      kk_string_t x_1_10051 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_snd_fs_show, (_implicit_fs_snd_fs_show, y, _ctx), _ctx); /*string*/;
      if (kk_yielding(kk_context())) {
        kk_string_drop(x_1_10051, _ctx);
        kk_box_t _x_x76 = kk_std_core_hnd_yield_extend(kk_std_core_maybe2_new_show_fun77(x_0_10048, _ctx), _ctx); /*2419*/
        return kk_string_unbox(_x_x76);
      }
      {
        kk_string_t _x_x88;
        kk_define_string_literal(static, _s_x89, 6, "Just2(", _ctx)
        _x_x88 = kk_string_dup(_s_x89, _ctx); /*string*/
        kk_string_t _x_x90;
        kk_string_t _x_x91;
        kk_string_t _x_x92;
        kk_define_string_literal(static, _s_x93, 1, ",", _ctx)
        _x_x92 = kk_string_dup(_s_x93, _ctx); /*string*/
        kk_string_t _x_x94;
        kk_string_t _x_x95;
        kk_define_string_literal(static, _s_x96, 1, ")", _ctx)
        _x_x95 = kk_string_dup(_s_x96, _ctx); /*string*/
        _x_x94 = kk_std_core_types__lp__plus__plus__rp_(x_1_10051, _x_x95, _ctx); /*string*/
        _x_x91 = kk_std_core_types__lp__plus__plus__rp_(_x_x92, _x_x94, _ctx); /*string*/
        _x_x90 = kk_std_core_types__lp__plus__plus__rp_(x_0_10048, _x_x91, _ctx); /*string*/
        return kk_std_core_types__lp__plus__plus__rp_(_x_x88, _x_x90, _ctx);
      }
    }
  }
  {
    kk_function_drop(_implicit_fs_snd_fs_show, _ctx);
    kk_function_drop(_implicit_fs_fst_fs_show, _ctx);
    kk_define_string_literal(static, _s_x97, 8, "Nothing2", _ctx)
    return kk_string_dup(_s_x97, _ctx);
  }
}

// initialization
void kk_std_core_maybe2__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_core_maybe2__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
