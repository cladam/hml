// Koka generated module: std/core/maybe, koka version: 3.2.3, platform: 64-bit
#include "std_core_maybe.h"


// lift anonymous function
struct kk_std_core_maybe_map_fun47__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_maybe_map_fun47(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe_new_map_fun47(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_maybe_map_fun47, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_maybe_map_fun47(kk_function_t _fself, kk_box_t _b_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_t _y_x10006_3 = _b_x1; /*267*/;
  kk_std_core_types__maybe _x_x48 = kk_std_core_types__new_Just(_y_x10006_3, _ctx); /*maybe<88>*/
  return kk_std_core_types__maybe_box(_x_x48, _ctx);
}

kk_std_core_types__maybe kk_std_core_maybe_map(kk_std_core_types__maybe m, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,e> (m : maybe<a>, f : (a) -> e b) -> e maybe<b> */ 
  if (kk_std_core_types__is_Nothing(m, _ctx)) {
    kk_function_drop(f, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    kk_box_t x = m._cons.Just.value;
    kk_box_t x_0_10022 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), f, (f, x, _ctx), _ctx); /*267*/;
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10022, _ctx);
      kk_box_t _x_x46 = kk_std_core_hnd_yield_extend(kk_std_core_maybe_new_map_fun47(_ctx), _ctx); /*2419*/
      return kk_std_core_types__maybe_unbox(_x_x46, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Just(x_0_10022, _ctx);
    }
  }
}
 
// Equality on `:maybe`

bool kk_std_core_maybe__lp__eq__eq__rp_(kk_std_core_types__maybe mb1, kk_std_core_types__maybe mb2, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) { /* forall<a,e> (mb1 : maybe<a>, mb2 : maybe<a>, ?(==) : (a, a) -> e bool) -> e bool */ 
  if (kk_std_core_types__is_Just(mb1, _ctx)) {
    kk_box_t x = mb1._cons.Just.value;
    if (kk_std_core_types__is_Just(mb2, _ctx)) {
      kk_box_t y = mb2._cons.Just.value;
      return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, x, y, _ctx), _ctx);
    }
    {
      kk_box_drop(x, _ctx);
      kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
      return false;
    }
  }
  {
    kk_function_drop(_implicit_fs__lp__eq__eq__rp_, _ctx);
    if (kk_std_core_types__is_Nothing(mb2, _ctx)) {
      return true;
    }
    {
      kk_std_core_types__maybe_drop(mb2, _ctx);
      return false;
    }
  }
}
 
// Order on `:maybe` values

kk_std_core_types__order kk_std_core_maybe_cmp(kk_std_core_types__maybe mb1, kk_std_core_types__maybe mb2, kk_function_t _implicit_fs_cmp, kk_context_t* _ctx) { /* forall<a,e> (mb1 : maybe<a>, mb2 : maybe<a>, ?cmp : (a, a) -> e order) -> e order */ 
  if (kk_std_core_types__is_Just(mb1, _ctx)) {
    kk_box_t x = mb1._cons.Just.value;
    if (kk_std_core_types__is_Just(mb2, _ctx)) {
      kk_box_t y = mb2._cons.Just.value;
      return kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_cmp, (_implicit_fs_cmp, x, y, _ctx), _ctx);
    }
    {
      kk_box_drop(x, _ctx);
      kk_function_drop(_implicit_fs_cmp, _ctx);
      return kk_std_core_types__new_Gt(_ctx);
    }
  }
  {
    kk_function_drop(_implicit_fs_cmp, _ctx);
    if (kk_std_core_types__is_Nothing(mb2, _ctx)) {
      return kk_std_core_types__new_Eq(_ctx);
    }
    {
      kk_std_core_types__maybe_drop(mb2, _ctx);
      return kk_std_core_types__new_Lt(_ctx);
    }
  }
}
 
// monadic lift

kk_std_core_types__order2 kk_std_core_maybe__mlift_order2_10020(kk_std_core_types__order2 _y_x10014, kk_context_t* _ctx) { /* forall<a,e> (order2<a>) -> e order2<maybe<a>> */ 
  if (kk_std_core_types__is_Eq2(_y_x10014, _ctx)) {
    kk_box_t z = _y_x10014._cons.Eq2.eq;
    kk_box_t _x_x49;
    kk_std_core_types__maybe _x_x50 = kk_std_core_types__new_Just(z, _ctx); /*maybe<88>*/
    _x_x49 = kk_std_core_types__maybe_box(_x_x50, _ctx); /*105*/
    return kk_std_core_types__new_Eq2(_x_x49, _ctx);
  }
  if (kk_std_core_types__is_Lt2(_y_x10014, _ctx)) {
    kk_box_t l = _y_x10014._cons.Lt2.lt;
    kk_box_t g = _y_x10014._cons.Lt2.gt;
    kk_box_t _x_x51;
    kk_std_core_types__maybe _x_x52 = kk_std_core_types__new_Just(l, _ctx); /*maybe<88>*/
    _x_x51 = kk_std_core_types__maybe_box(_x_x52, _ctx); /*105*/
    kk_box_t _x_x53;
    kk_std_core_types__maybe _x_x54 = kk_std_core_types__new_Just(g, _ctx); /*maybe<88>*/
    _x_x53 = kk_std_core_types__maybe_box(_x_x54, _ctx); /*105*/
    return kk_std_core_types__new_Lt2(_x_x51, _x_x53, _ctx);
  }
  {
    kk_box_t l_0 = _y_x10014._cons.Gt2.lt;
    kk_box_t g_0 = _y_x10014._cons.Gt2.gt;
    kk_box_t _x_x55;
    kk_std_core_types__maybe _x_x56 = kk_std_core_types__new_Just(l_0, _ctx); /*maybe<88>*/
    _x_x55 = kk_std_core_types__maybe_box(_x_x56, _ctx); /*105*/
    kk_box_t _x_x57;
    kk_std_core_types__maybe _x_x58 = kk_std_core_types__new_Just(g_0, _ctx); /*maybe<88>*/
    _x_x57 = kk_std_core_types__maybe_box(_x_x58, _ctx); /*105*/
    return kk_std_core_types__new_Gt2(_x_x55, _x_x57, _ctx);
  }
}
 
// Order two `:maybe` values in ascending order


// lift anonymous function
struct kk_std_core_maybe_order2_fun61__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_maybe_order2_fun61(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe_new_order2_fun61(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_maybe_order2_fun61, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_maybe_order2_fun61(kk_function_t _fself, kk_box_t _b_x15, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__order2 _y_x10014_35 = kk_std_core_types__order2_unbox(_b_x15, KK_OWNED, _ctx); /*order2<580>*/;
  kk_std_core_types__order2 _x_x62 = kk_std_core_maybe__mlift_order2_10020(_y_x10014_35, _ctx); /*order2<maybe<580>>*/
  return kk_std_core_types__order2_box(_x_x62, _ctx);
}

kk_std_core_types__order2 kk_std_core_maybe_order2(kk_std_core_types__maybe mb1, kk_std_core_types__maybe mb2, kk_function_t _implicit_fs_order2, kk_context_t* _ctx) { /* forall<a,e> (mb1 : maybe<a>, mb2 : maybe<a>, ?order2 : (a, a) -> e order2<a>) -> e order2<maybe<a>> */ 
  if (kk_std_core_types__is_Just(mb1, _ctx)) {
    kk_box_t x = mb1._cons.Just.value;
    if (kk_std_core_types__is_Just(mb2, _ctx)) {
      kk_box_t y = mb2._cons.Just.value;
      kk_std_core_types__order2 x_0_10026;
      kk_function_t _x_x59 = kk_function_dup(_implicit_fs_order2, _ctx); /*(580, 580) -> 581 order2<580>*/
      x_0_10026 = kk_function_call(kk_std_core_types__order2, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x59, (_x_x59, x, y, _ctx), _ctx); /*order2<580>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__order2_drop(x_0_10026, _ctx);
        kk_box_t _x_x60 = kk_std_core_hnd_yield_extend(kk_std_core_maybe_new_order2_fun61(_ctx), _ctx); /*2419*/
        return kk_std_core_types__order2_unbox(_x_x60, KK_OWNED, _ctx);
      }
      if (kk_std_core_types__is_Eq2(x_0_10026, _ctx)) {
        kk_box_t z = x_0_10026._cons.Eq2.eq;
        kk_box_t _x_x63;
        kk_std_core_types__maybe _x_x64 = kk_std_core_types__new_Just(z, _ctx); /*maybe<88>*/
        _x_x63 = kk_std_core_types__maybe_box(_x_x64, _ctx); /*105*/
        return kk_std_core_types__new_Eq2(_x_x63, _ctx);
      }
      if (kk_std_core_types__is_Lt2(x_0_10026, _ctx)) {
        kk_box_t l = x_0_10026._cons.Lt2.lt;
        kk_box_t g = x_0_10026._cons.Lt2.gt;
        kk_box_t _x_x65;
        kk_std_core_types__maybe _x_x66 = kk_std_core_types__new_Just(l, _ctx); /*maybe<88>*/
        _x_x65 = kk_std_core_types__maybe_box(_x_x66, _ctx); /*105*/
        kk_box_t _x_x67;
        kk_std_core_types__maybe _x_x68 = kk_std_core_types__new_Just(g, _ctx); /*maybe<88>*/
        _x_x67 = kk_std_core_types__maybe_box(_x_x68, _ctx); /*105*/
        return kk_std_core_types__new_Lt2(_x_x65, _x_x67, _ctx);
      }
      {
        kk_box_t l_0 = x_0_10026._cons.Gt2.lt;
        kk_box_t g_0 = x_0_10026._cons.Gt2.gt;
        kk_box_t _x_x69;
        kk_std_core_types__maybe _x_x70 = kk_std_core_types__new_Just(l_0, _ctx); /*maybe<88>*/
        _x_x69 = kk_std_core_types__maybe_box(_x_x70, _ctx); /*105*/
        kk_box_t _x_x71;
        kk_std_core_types__maybe _x_x72 = kk_std_core_types__new_Just(g_0, _ctx); /*maybe<88>*/
        _x_x71 = kk_std_core_types__maybe_box(_x_x72, _ctx); /*105*/
        return kk_std_core_types__new_Gt2(_x_x69, _x_x71, _ctx);
      }
    }
    {
      kk_box_t _x_x73;
      kk_std_core_types__maybe _x_x74 = kk_std_core_types__new_Just(x, _ctx); /*maybe<88>*/
      _x_x73 = kk_std_core_types__maybe_box(_x_x74, _ctx); /*105*/
      return kk_std_core_types__new_Gt2(kk_std_core_types__maybe_box(kk_std_core_types__new_Nothing(_ctx), _ctx), _x_x73, _ctx);
    }
  }
  {
    return kk_std_core_types__new_Lt2(kk_std_core_types__maybe_box(kk_std_core_types__new_Nothing(_ctx), _ctx), kk_std_core_types__maybe_box(mb2, _ctx), _ctx);
  }
}
 
// Show a `:maybe` type


// lift anonymous function
struct kk_std_core_maybe_show_fun81__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_core_maybe_show_fun81(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_std_core_maybe_new_show_fun81(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_maybe_show_fun81, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_core_maybe_show_fun81(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _y_x10017_39 = kk_string_unbox(_b_x37); /*string*/;
  kk_string_t _x_x82;
  kk_string_t _x_x83;
  kk_define_string_literal(static, _s_x84, 5, "Just(", _ctx)
  _x_x83 = kk_string_dup(_s_x84, _ctx); /*string*/
  kk_string_t _x_x85;
  kk_string_t _x_x86;
  kk_define_string_literal(static, _s_x87, 1, ")", _ctx)
  _x_x86 = kk_string_dup(_s_x87, _ctx); /*string*/
  _x_x85 = kk_std_core_types__lp__plus__plus__rp_(_y_x10017_39, _x_x86, _ctx); /*string*/
  _x_x82 = kk_std_core_types__lp__plus__plus__rp_(_x_x83, _x_x85, _ctx); /*string*/
  return kk_string_box(_x_x82);
}

kk_string_t kk_std_core_maybe_show(kk_std_core_types__maybe mb, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a,e> (mb : maybe<a>, ?show : (a) -> e string) -> e string */ 
  if (kk_std_core_types__is_Just(mb, _ctx)) {
    kk_box_t x = mb._cons.Just.value;
    kk_string_t x_0_10029 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, x, _ctx), _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_10029, _ctx);
      kk_box_t _x_x80 = kk_std_core_hnd_yield_extend(kk_std_core_maybe_new_show_fun81(_ctx), _ctx); /*2419*/
      return kk_string_unbox(_x_x80);
    }
    {
      kk_string_t _x_x88;
      kk_define_string_literal(static, _s_x89, 5, "Just(", _ctx)
      _x_x88 = kk_string_dup(_s_x89, _ctx); /*string*/
      kk_string_t _x_x90;
      kk_string_t _x_x91;
      kk_define_string_literal(static, _s_x92, 1, ")", _ctx)
      _x_x91 = kk_string_dup(_s_x92, _ctx); /*string*/
      _x_x90 = kk_std_core_types__lp__plus__plus__rp_(x_0_10029, _x_x91, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x88, _x_x90, _ctx);
    }
  }
  {
    kk_function_drop(_implicit_fs_show, _ctx);
    kk_define_string_literal(static, _s_x93, 7, "Nothing", _ctx)
    return kk_string_dup(_s_x93, _ctx);
  }
}

// initialization
void kk_std_core_maybe__init(kk_context_t* _ctx){
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
void kk_std_core_maybe__done(kk_context_t* _ctx){
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
