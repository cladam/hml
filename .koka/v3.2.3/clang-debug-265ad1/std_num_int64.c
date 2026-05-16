// Koka generated module: std/num/int64, koka version: 3.2.3, platform: 64-bit
#include "std_num_int64.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2023, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static kk_std_core_types__tuple2 kk_umul64x_wide( int64_t x, int64_t y, kk_context_t* ctx ) {
  uint64_t hi;
  uint64_t lo = kk_umul64_wide((uint64_t)x, (uint64_t)y, &hi);
  return kk_std_core_types__new_Tuple2( kk_int64_box((int64_t)hi,ctx), kk_int64_box((int64_t)lo,ctx), ctx );
}

static kk_std_core_types__tuple2 kk_imul64x_wide( int64_t x, int64_t y, kk_context_t* ctx ) {
  int64_t hi;
  uint64_t lo = kk_imul64_wide(x, y, &hi);
  return kk_std_core_types__new_Tuple2( kk_int64_box(hi,ctx), kk_int64_box((int64_t)lo,ctx), ctx );
}

static kk_std_core_types__tuple2 kk_clmul64x_wide( int64_t x, int64_t y, kk_context_t* ctx ) {
  uint64_t hi;
  uint64_t lo = kk_clmul64_wide((uint64_t)x, (uint64_t)y, &hi);
  return kk_std_core_types__new_Tuple2( kk_int64_box((int64_t)hi,ctx), kk_int64_box((int64_t)lo,ctx), ctx );
}

 
// clamp an `:int` to fit in an `:int64_t`.

int64_t kk_std_num_int64_int64(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> int64 */ 
  return kk_integer_clamp64(i,kk_context());
}
 
// The 64-bit integer for 1.

int64_t kk_std_num_int64_one;
 
// The 64-bit integer for zero.

int64_t kk_std_num_int64_zero;
 
// The maximal integer value before overflow happens

int64_t kk_std_num_int64_max_int64;
 
// The minimal integer value before underflow happens

int64_t kk_std_num_int64_min_int64;
 
// The number of bits in an `:int64` (always 64)

int64_t kk_std_num_int64_bits_int64;
 
// Convert an `:int` to `:int64` but interpret the `int` as an unsigned 64-bit value.
// `i` is clamped between `0` and `0xFFFF_FFFF_FFFF_FFFF`.
// `0x7FFF_FFFF_FFFF_FFFF.uint64 == 0x7FFF_FFFF_FFFF_FFFF.int64 == max-int64`
// `0x8000_0000_0000_0000.uint64 == -0x8000_0000_0000_0000.int64 == min-int64`
// `0xFFFF_FFFF_FFFF_FFFF.uint64 == -1.int64`

int64_t kk_std_num_int64_int_fs_uint64(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> int64 */ 
  kk_integer_t _x_x284;
  bool _match_x270;
  kk_integer_t _brw_x271 = kk_integer_from_int64(kk_std_num_int64_max_int64,kk_context()); /*int*/;
  bool _brw_x272 = kk_integer_gt_borrow(i,_brw_x271,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x271, _ctx);
  _match_x270 = _brw_x272; /*bool*/
  if (_match_x270) {
    _x_x284 = kk_integer_sub(i,(kk_integer_from_str("18446744073709551616", _ctx)),kk_context()); /*int*/
  }
  else {
    _x_x284 = i; /*int*/
  }
  return kk_std_num_int64_int64(_x_x284, _ctx);
}
 
// Show an `:int64` in hexadecimal notation
// The `width`  parameter specifies how wide the hex value is where `'0'`  is used to align.
// The `use-capitals` parameter (= `True`) determines if capital letters should be used to display the hexadecimal digits.
// The `pre` (=`"0x"`) is an optional prefix for the number (goes between the sign and the number).

kk_string_t kk_std_num_int64_show_hex(int64_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx) { /* (i : int64, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
  kk_integer_t _x_x285 = kk_integer_from_int64(i,kk_context()); /*int*/
  kk_std_core_types__optional _x_x286;
  kk_box_t _x_x287;
  kk_integer_t _x_x288;
  if (kk_std_core_types__is_Optional(width, _ctx)) {
    kk_box_t _box_x4 = width._cons._Optional.value;
    kk_integer_t _uniq_width_610 = kk_integer_unbox(_box_x4, _ctx);
    kk_integer_dup(_uniq_width_610, _ctx);
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x288 = _uniq_width_610; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x288 = kk_integer_from_small(1); /*int*/
  }
  _x_x287 = kk_integer_box(_x_x288, _ctx); /*7*/
  _x_x286 = kk_std_core_types__new_Optional(_x_x287, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x289;
  kk_box_t _x_x290;
  bool _x_x291;
  if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
    kk_box_t _box_x6 = use_capitals._cons._Optional.value;
    bool _uniq_use_capitals_614 = kk_bool_unbox(_box_x6);
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x291 = _uniq_use_capitals_614; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x291 = true; /*bool*/
  }
  _x_x290 = kk_bool_box(_x_x291); /*7*/
  _x_x289 = kk_std_core_types__new_Optional(_x_x290, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x292;
  kk_box_t _x_x293;
  kk_string_t _x_x294;
  if (kk_std_core_types__is_Optional(pre, _ctx)) {
    kk_box_t _box_x8 = pre._cons._Optional.value;
    kk_string_t _uniq_pre_618 = kk_string_unbox(_box_x8);
    kk_string_dup(_uniq_pre_618, _ctx);
    kk_std_core_types__optional_drop(pre, _ctx);
    _x_x294 = _uniq_pre_618; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(pre, _ctx);
    kk_define_string_literal(static, _s_x295, 2, "0x", _ctx)
    _x_x294 = kk_string_dup(_s_x295, _ctx); /*string*/
  }
  _x_x293 = kk_string_box(_x_x294); /*7*/
  _x_x292 = kk_std_core_types__new_Optional(_x_x293, _ctx); /*? 7*/
  return kk_std_core_show_show_hex(_x_x285, _x_x286, _x_x289, _x_x292, _ctx);
}
 
// Show an `:int64` in hexadecimal notation interpreted as an unsigned 64-bit value.
// The `width`  parameter specifies how wide the hex value is where `'0'`  is used to align.
// The `use-capitals` parameter (= `True`) determines if capital letters should be used to display the hexadecimal digits.
// The `pre` (=`"0x"`) is an optional prefix for the number.

kk_string_t kk_std_num_int64_show_hex64(int64_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx) { /* (i : int64, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
  kk_integer_t _x_x296 = kk_std_num_int64_int64_fs_uint(i, _ctx); /*int*/
  kk_std_core_types__optional _x_x297;
  kk_box_t _x_x298;
  kk_integer_t _x_x299;
  if (kk_std_core_types__is_Optional(width, _ctx)) {
    kk_box_t _box_x13 = width._cons._Optional.value;
    kk_integer_t _uniq_width_661 = kk_integer_unbox(_box_x13, _ctx);
    kk_integer_dup(_uniq_width_661, _ctx);
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x299 = _uniq_width_661; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x299 = kk_integer_from_small(16); /*int*/
  }
  _x_x298 = kk_integer_box(_x_x299, _ctx); /*7*/
  _x_x297 = kk_std_core_types__new_Optional(_x_x298, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x300;
  kk_box_t _x_x301;
  bool _x_x302;
  if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
    kk_box_t _box_x15 = use_capitals._cons._Optional.value;
    bool _uniq_use_capitals_665 = kk_bool_unbox(_box_x15);
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x302 = _uniq_use_capitals_665; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x302 = true; /*bool*/
  }
  _x_x301 = kk_bool_box(_x_x302); /*7*/
  _x_x300 = kk_std_core_types__new_Optional(_x_x301, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x303;
  kk_box_t _x_x304;
  kk_string_t _x_x305;
  if (kk_std_core_types__is_Optional(pre, _ctx)) {
    kk_box_t _box_x17 = pre._cons._Optional.value;
    kk_string_t _uniq_pre_669 = kk_string_unbox(_box_x17);
    kk_string_dup(_uniq_pre_669, _ctx);
    kk_std_core_types__optional_drop(pre, _ctx);
    _x_x305 = _uniq_pre_669; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(pre, _ctx);
    kk_define_string_literal(static, _s_x306, 2, "0x", _ctx)
    _x_x305 = kk_string_dup(_s_x306, _ctx); /*string*/
  }
  _x_x304 = kk_string_box(_x_x305); /*7*/
  _x_x303 = kk_std_core_types__new_Optional(_x_x304, _ctx); /*? 7*/
  return kk_std_core_show_show_hex(_x_x296, _x_x297, _x_x300, _x_x303, _ctx);
}
 
// Return the absolute value of an integer.
// Raises an exception if the `:int64` is `min-int64`
// (since the negation of `min-int64` equals itself and is still negative)


// lift anonymous function
struct kk_std_num_int64_abs_fun313__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_int64_abs_fun313(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx);
static kk_function_t kk_std_num_int64_new_abs_fun313(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_int64_abs_fun313, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_int64_abs_fun313(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x314;
  bool b_37 = kk_bool_unbox(_b_x24); /*bool*/;
  if (b_37) {
    _x_x314 = false; /*bool*/
  }
  else {
    _x_x314 = true; /*bool*/
  }
  return kk_bool_box(_x_x314);
}


// lift anonymous function
struct kk_std_num_int64_abs_fun316__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_int64_abs_fun316(kk_function_t _fself, kk_box_t _b_x27, kk_context_t* _ctx);
static kk_function_t kk_std_num_int64_new_abs_fun316(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_int64_abs_fun316, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_int64_abs_fun316(kk_function_t _fself, kk_box_t _b_x27, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  int64_t i_0_36 = kk_int64_unbox(_b_x27, KK_OWNED, _ctx); /*int64*/;
  int64_t _x_x317;
  int64_t _x_x318 = (KK_I64(0)); /*int64*/
  _x_x317 = (int64_t)((uint64_t)_x_x318 - (uint64_t)i_0_36); /*int64*/
  return kk_int64_box(_x_x317, _ctx);
}

int64_t kk_std_num_int64_abs(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> exn int64 */ 
  bool _x_x1_10096 = 0 > i; /*bool*/;
  bool _match_x264;
  kk_box_t _x_x312 = kk_std_core_hnd__open_none1(kk_std_num_int64_new_abs_fun313(_ctx), kk_bool_box(_x_x1_10096), _ctx); /*9924*/
  _match_x264 = kk_bool_unbox(_x_x312); /*bool*/
  if (_match_x264) {
    return i;
  }
  {
    kk_box_t _x_x315;
    bool _match_x265 = (i > kk_std_num_int64_min_int64); /*bool*/;
    if (_match_x265) {
      _x_x315 = kk_std_core_hnd__open_none1(kk_std_num_int64_new_abs_fun316(_ctx), kk_int64_box(i, _ctx), _ctx); /*9924*/
    }
    else {
      kk_string_t _x_x319;
      kk_define_string_literal(static, _s_x320, 79, "std/num/int64/abs: cannot make min-int64 into a positive int64 without overflow", _ctx)
      _x_x319 = kk_string_dup(_s_x320, _ctx); /*string*/
      _x_x315 = kk_std_core_exn_throw(_x_x319, kk_std_core_types__new_None(_ctx), _ctx); /*9924*/
    }
    return kk_int64_unbox(_x_x315, KK_OWNED, _ctx);
  }
}
 
// Return the absolute value of an integer.
// Returns 0 if the `:int64` is `min-int64`
// (since the negation of `min-int64` equals itself and is still negative)

int64_t kk_std_num_int64_abs0(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> int64 */ 
  bool b_10008 = 0 > i; /*bool*/;
  if (b_10008) {
    bool _match_x263 = (i > kk_std_num_int64_min_int64); /*bool*/;
    if (_match_x263) {
      int64_t _x_x321 = (KK_I64(0)); /*int64*/
      return (int64_t)((uint64_t)_x_x321 - (uint64_t)i);
    }
    {
      return (KK_I64(0));
    }
  }
  {
    return i;
  }
}
 
// Wide carry-less multiplication (or _xor_ multiplication) to `(hi,lo)`,
// where `(hi,lo).int == hi.int * 0x1_0000_0000_0000_0000 + lo.uint`.
// See also <https://en.wikipedia.org/wiki/Carry-less_product>.

kk_std_core_types__tuple2 kk_std_num_int64_clmul_wide(int64_t x, int64_t y, kk_context_t* _ctx) { /* (x : int64, y : int64) -> (int64, int64) */ 
  return kk_clmul64x_wide(x,y,kk_context());
}
 
// Full 64x64 to 128-bit unsigned multiply to `(hi,lo)`.
// where `umul(x,y).uint == x.uint * y.uint`

kk_std_core_types__tuple2 kk_std_num_int64_umul(int64_t i, int64_t j, kk_context_t* _ctx) { /* (i : int64, j : int64) -> (int64, int64) */ 
  return kk_umul64x_wide(i,j,kk_context());
}
 
// Full 64x64 to 128-bit signed multiply to `(hi,lo)`.
// where `imul(x,y).int == x.int * y.int`

kk_std_core_types__tuple2 kk_std_num_int64_imul(int64_t i, int64_t j, kk_context_t* _ctx) { /* (i : int64, j : int64) -> (int64, int64) */ 
  return kk_imul64x_wide(i,j,kk_context());
}
 
// Truncated division (as in C). See also `(/):(x : int64, y : int64) -> int64`.


// lift anonymous function
struct kk_std_num_int64_cdiv_fun332__t {
  struct kk_function_s _base;
};
static int64_t kk_std_num_int64_cdiv_fun332(kk_function_t _fself, kk_integer_t _x1_x331, kk_context_t* _ctx);
static kk_function_t kk_std_num_int64_new_cdiv_fun332(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_int64_cdiv_fun332, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static int64_t kk_std_num_int64_cdiv_fun332(kk_function_t _fself, kk_integer_t _x1_x331, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_num_int64_int64(_x1_x331, _ctx);
}


// lift anonymous function
struct kk_std_num_int64_cdiv_fun335__t {
  struct kk_function_s _base;
  kk_function_t _b_x40_47;
};
static kk_box_t kk_std_num_int64_cdiv_fun335(kk_function_t _fself, kk_box_t _b_x42, kk_context_t* _ctx);
static kk_function_t kk_std_num_int64_new_cdiv_fun335(kk_function_t _b_x40_47, kk_context_t* _ctx) {
  struct kk_std_num_int64_cdiv_fun335__t* _self = kk_function_alloc_as(struct kk_std_num_int64_cdiv_fun335__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int64_cdiv_fun335, kk_context());
  _self->_b_x40_47 = _b_x40_47;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int64_cdiv_fun335(kk_function_t _fself, kk_box_t _b_x42, kk_context_t* _ctx) {
  struct kk_std_num_int64_cdiv_fun335__t* _self = kk_function_as(struct kk_std_num_int64_cdiv_fun335__t*, _fself, _ctx);
  kk_function_t _b_x40_47 = _self->_b_x40_47; /* (i : int) -> int64 */
  kk_drop_match(_self, {kk_function_dup(_b_x40_47, _ctx);}, {}, _ctx)
  int64_t _x_x336;
  kk_integer_t _x_x337 = kk_integer_unbox(_b_x42, _ctx); /*int*/
  _x_x336 = kk_function_call(int64_t, (kk_function_t, kk_integer_t, kk_context_t*), _b_x40_47, (_b_x40_47, _x_x337, _ctx), _ctx); /*int64*/
  return kk_int64_box(_x_x336, _ctx);
}

int64_t kk_std_num_int64_cdiv(int64_t i, int64_t j, kk_context_t* _ctx) { /* (i : int64, j : int64) -> exn int64 */ 
  bool _match_x258 = 0 == j; /*bool*/;
  if (_match_x258) {
    kk_box_t _x_x328;
    kk_string_t _x_x329;
    kk_define_string_literal(static, _s_x330, 36, "std/num/int64/cdiv: division by zero", _ctx)
    _x_x329 = kk_string_dup(_s_x330, _ctx); /*string*/
    _x_x328 = kk_std_core_exn_throw(_x_x329, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
    return kk_int64_unbox(_x_x328, KK_OWNED, _ctx);
  }
  {
    kk_function_t _b_x40_47 = kk_std_num_int64_new_cdiv_fun332(_ctx); /*(i : int) -> int64*/;
    kk_integer_t _b_x41_48 = kk_integer_from_small(-1); /*int*/;
    bool _match_x259;
    int64_t _x_x333;
    kk_box_t _x_x334 = kk_std_core_hnd__open_none1(kk_std_num_int64_new_cdiv_fun335(_b_x40_47, _ctx), kk_integer_box(_b_x41_48, _ctx), _ctx); /*9924*/
    _x_x333 = kk_int64_unbox(_x_x334, KK_OWNED, _ctx); /*int64*/
    _match_x259 = (j == _x_x333); /*bool*/
    if (_match_x259) {
      bool _match_x260 = (i == kk_std_num_int64_min_int64); /*bool*/;
      if (_match_x260) {
        kk_box_t _x_x338;
        kk_string_t _x_x339;
        kk_define_string_literal(static, _s_x340, 66, "std/num/int64/cdiv: division overflow in cdiv(min-int64, -1.int64)", _ctx)
        _x_x339 = kk_string_dup(_s_x340, _ctx); /*string*/
        _x_x338 = kk_std_core_exn_throw(_x_x339, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
        return kk_int64_unbox(_x_x338, KK_OWNED, _ctx);
      }
      {
        return i / j;
      }
    }
    {
      return i / j;
    }
  }
}
 
// Truncated modulus (as in C). See also `(%):(x : int64, y : int64) -> int64`.


// lift anonymous function
struct kk_std_num_int64_cmod_fun345__t {
  struct kk_function_s _base;
};
static int64_t kk_std_num_int64_cmod_fun345(kk_function_t _fself, kk_integer_t _x1_x344, kk_context_t* _ctx);
static kk_function_t kk_std_num_int64_new_cmod_fun345(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_int64_cmod_fun345, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static int64_t kk_std_num_int64_cmod_fun345(kk_function_t _fself, kk_integer_t _x1_x344, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_num_int64_int64(_x1_x344, _ctx);
}


// lift anonymous function
struct kk_std_num_int64_cmod_fun348__t {
  struct kk_function_s _base;
  kk_function_t _b_x53_60;
};
static kk_box_t kk_std_num_int64_cmod_fun348(kk_function_t _fself, kk_box_t _b_x55, kk_context_t* _ctx);
static kk_function_t kk_std_num_int64_new_cmod_fun348(kk_function_t _b_x53_60, kk_context_t* _ctx) {
  struct kk_std_num_int64_cmod_fun348__t* _self = kk_function_alloc_as(struct kk_std_num_int64_cmod_fun348__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int64_cmod_fun348, kk_context());
  _self->_b_x53_60 = _b_x53_60;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int64_cmod_fun348(kk_function_t _fself, kk_box_t _b_x55, kk_context_t* _ctx) {
  struct kk_std_num_int64_cmod_fun348__t* _self = kk_function_as(struct kk_std_num_int64_cmod_fun348__t*, _fself, _ctx);
  kk_function_t _b_x53_60 = _self->_b_x53_60; /* (i : int) -> int64 */
  kk_drop_match(_self, {kk_function_dup(_b_x53_60, _ctx);}, {}, _ctx)
  int64_t _x_x349;
  kk_integer_t _x_x350 = kk_integer_unbox(_b_x55, _ctx); /*int*/
  _x_x349 = kk_function_call(int64_t, (kk_function_t, kk_integer_t, kk_context_t*), _b_x53_60, (_b_x53_60, _x_x350, _ctx), _ctx); /*int64*/
  return kk_int64_box(_x_x349, _ctx);
}

int64_t kk_std_num_int64_cmod(int64_t i, int64_t j, kk_context_t* _ctx) { /* (i : int64, j : int64) -> exn int64 */ 
  bool _match_x255 = 0 == j; /*bool*/;
  if (_match_x255) {
    kk_box_t _x_x341;
    kk_string_t _x_x342;
    kk_define_string_literal(static, _s_x343, 35, "std/num/int64/cmod: modulus by zero", _ctx)
    _x_x342 = kk_string_dup(_s_x343, _ctx); /*string*/
    _x_x341 = kk_std_core_exn_throw(_x_x342, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
    return kk_int64_unbox(_x_x341, KK_OWNED, _ctx);
  }
  {
    kk_function_t _b_x53_60 = kk_std_num_int64_new_cmod_fun345(_ctx); /*(i : int) -> int64*/;
    kk_integer_t _b_x54_61 = kk_integer_from_small(-1); /*int*/;
    bool _match_x256;
    int64_t _x_x346;
    kk_box_t _x_x347 = kk_std_core_hnd__open_none1(kk_std_num_int64_new_cmod_fun348(_b_x53_60, _ctx), kk_integer_box(_b_x54_61, _ctx), _ctx); /*9924*/
    _x_x346 = kk_int64_unbox(_x_x347, KK_OWNED, _ctx); /*int64*/
    _match_x256 = (j == _x_x346); /*bool*/
    if (_match_x256) {
      bool _match_x257 = (i == kk_std_num_int64_min_int64); /*bool*/;
      if (_match_x257) {
        kk_box_t _x_x351;
        kk_string_t _x_x352;
        kk_define_string_literal(static, _s_x353, 65, "std/num/int64/cmod: modulus overflow in cmod(min-int64, -1.int64)", _ctx)
        _x_x352 = kk_string_dup(_s_x353, _ctx); /*string*/
        _x_x351 = kk_std_core_exn_throw(_x_x352, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
        return kk_int64_unbox(_x_x351, KK_OWNED, _ctx);
      }
      {
        return i % j;
      }
    }
    {
      return i % j;
    }
  }
}
 
// /*
// Euclidean-0 division.
// Euclidean division is defined as: For any `D`  and `d`  where `d!=0` , we have:
// 
// 1. `D == d*(D/d) + (D%d)`
// 2. `D%d`  is always positive where `0 <= D%d < abs(d)`
// 
// Moreover, Euclidean-0 is a total function, for the case where `d==0`  we have
// that `D%0 == D`  and `D/0 == 0` . So property (1) still holds, but not property (2).
// Useful laws that hold for Euclidean-0 division:
// 
// * `D/(-d) == -(D/d)`
// * `D%(-d) == D%d`
// * `D/(2^n) == sar(D,n)         `  (with `0 <= n <= 63`)
// * `D%(2^n) == D & ((2^n) - 1)  `  (with `0 <= n <= 63`)
// 
// Note that an interesting edge case is `min-int64 / -1` which equals `min-int64` since in modulo 64-bit
// arithmetic `min-int64 == -1 * min-int64 == -1 * (min-int64 / -1) + (min-int64 % -1)` satisfying property (1).
// Of course `(min-int64 + 1) / -1` is again positive (namely `max-int64`).
// 
// See also _Division and modulus for computer scientists, Daan Leijen, 2001_
// [pdf](https://www.microsoft.com/en-us/research/wp-content/uploads/2016/02/divmodnote-letter.pdf) .
// */

int64_t kk_std_num_int64__lp__fs__rp_(int64_t x, int64_t y, kk_context_t* _ctx) { /* (x : int64, y : int64) -> int64 */ 
  bool _match_x248;
  int64_t _x_x355 = (KK_I64(0)); /*int64*/
  _match_x248 = (y == _x_x355); /*bool*/
  if (_match_x248) {
    return (KK_I64(0));
  }
  {
    bool _match_x249;
    int64_t _x_x356 = (KK_I64(-1)); /*int64*/
    _match_x249 = (y == _x_x356); /*bool*/
    if (_match_x249) {
      bool _match_x252 = (x == kk_std_num_int64_min_int64); /*bool*/;
      if (_match_x252) {
        return x;
      }
      {
        int64_t q = x / y; /*int64*/;
        int64_t r = x % y; /*int64*/;
        bool _match_x253;
        int64_t _x_x357 = (KK_I64(0)); /*int64*/
        _match_x253 = (r >= _x_x357); /*bool*/
        if (_match_x253) {
          return q;
        }
        {
          bool _match_x254;
          int64_t _x_x358 = (KK_I64(0)); /*int64*/
          _match_x254 = (y > _x_x358); /*bool*/
          if (_match_x254) {
            int64_t _x_x359 = (KK_I64(1)); /*int64*/
            return (int64_t)((uint64_t)q - (uint64_t)_x_x359);
          }
          {
            int64_t _x_x360 = (KK_I64(1)); /*int64*/
            return (int64_t)((uint64_t)q + (uint64_t)_x_x360);
          }
        }
      }
    }
    {
      int64_t q_0 = x / y; /*int64*/;
      int64_t r_0 = x % y; /*int64*/;
      bool _match_x250;
      int64_t _x_x361 = (KK_I64(0)); /*int64*/
      _match_x250 = (r_0 >= _x_x361); /*bool*/
      if (_match_x250) {
        return q_0;
      }
      {
        bool _match_x251;
        int64_t _x_x362 = (KK_I64(0)); /*int64*/
        _match_x251 = (y > _x_x362); /*bool*/
        if (_match_x251) {
          int64_t _x_x363 = (KK_I64(1)); /*int64*/
          return (int64_t)((uint64_t)q_0 - (uint64_t)_x_x363);
        }
        {
          int64_t _x_x364 = (KK_I64(1)); /*int64*/
          return (int64_t)((uint64_t)q_0 + (uint64_t)_x_x364);
        }
      }
    }
  }
}
 
// Euclidean-0 modulus. See `(/):(x : int64, y : int64) -> int64` division for more information.

int64_t kk_std_num_int64__lp__perc__rp_(int64_t x, int64_t y, kk_context_t* _ctx) { /* (x : int64, y : int64) -> int64 */ 
  bool _match_x241;
  int64_t _x_x365 = (KK_I64(0)); /*int64*/
  _match_x241 = (y == _x_x365); /*bool*/
  if (_match_x241) {
    return x;
  }
  {
    bool _match_x242;
    int64_t _x_x366 = (KK_I64(-1)); /*int64*/
    _match_x242 = (y == _x_x366); /*bool*/
    if (_match_x242) {
      bool _match_x245 = (x == kk_std_num_int64_min_int64); /*bool*/;
      if (_match_x245) {
        return (KK_I64(0));
      }
      {
        int64_t r = x % y; /*int64*/;
        bool _match_x246;
        int64_t _x_x367 = (KK_I64(0)); /*int64*/
        _match_x246 = (r >= _x_x367); /*bool*/
        if (_match_x246) {
          return r;
        }
        {
          bool _match_x247;
          int64_t _x_x368 = (KK_I64(0)); /*int64*/
          _match_x247 = (y > _x_x368); /*bool*/
          if (_match_x247) {
            return (int64_t)((uint64_t)r + (uint64_t)y);
          }
          {
            return (int64_t)((uint64_t)r - (uint64_t)y);
          }
        }
      }
    }
    {
      int64_t r_0 = x % y; /*int64*/;
      bool _match_x243;
      int64_t _x_x369 = (KK_I64(0)); /*int64*/
      _match_x243 = (r_0 >= _x_x369); /*bool*/
      if (_match_x243) {
        return r_0;
      }
      {
        bool _match_x244;
        int64_t _x_x370 = (KK_I64(0)); /*int64*/
        _match_x244 = (y > _x_x370); /*bool*/
        if (_match_x244) {
          return (int64_t)((uint64_t)r_0 + (uint64_t)y);
        }
        {
          return (int64_t)((uint64_t)r_0 - (uint64_t)y);
        }
      }
    }
  }
}

kk_std_core_types__tuple2 kk_std_num_int64_divmod(int64_t x, int64_t y, kk_context_t* _ctx) { /* (x : int64, y : int64) -> (int64, int64) */ 
  bool _match_x234 = 0 == y; /*bool*/;
  if (_match_x234) {
    return kk_std_core_types__new_Tuple2(kk_int64_box(kk_std_num_int64_zero, _ctx), kk_int64_box(x, _ctx), _ctx);
  }
  {
    bool _match_x235;
    int64_t _x_x371 = (KK_I64(-1)); /*int64*/
    _match_x235 = (y == _x_x371); /*bool*/
    if (_match_x235) {
      bool _match_x238 = (x == kk_std_num_int64_min_int64); /*bool*/;
      if (_match_x238) {
        int64_t _b_x67_83 = (KK_I64(0)); /*int64*/;
        return kk_std_core_types__new_Tuple2(kk_int64_box(x, _ctx), kk_int64_box(_b_x67_83, _ctx), _ctx);
      }
      {
        int64_t q = x / y; /*int64*/;
        int64_t r = x % y; /*int64*/;
        bool _match_x239;
        int64_t _x_x372 = (KK_I64(0)); /*int64*/
        _match_x239 = (r >= _x_x372); /*bool*/
        if (_match_x239) {
          return kk_std_core_types__new_Tuple2(kk_int64_box(q, _ctx), kk_int64_box(r, _ctx), _ctx);
        }
        {
          bool _match_x240;
          int64_t _x_x373 = (KK_I64(0)); /*int64*/
          _match_x240 = (y > _x_x373); /*bool*/
          if (_match_x240) {
            int64_t _b_x70_86;
            int64_t _x_x374 = (KK_I64(1)); /*int64*/
            _b_x70_86 = (int64_t)((uint64_t)q - (uint64_t)_x_x374); /*int64*/
            int64_t _b_x71_87 = (int64_t)((uint64_t)r + (uint64_t)y); /*int64*/;
            return kk_std_core_types__new_Tuple2(kk_int64_box(_b_x70_86, _ctx), kk_int64_box(_b_x71_87, _ctx), _ctx);
          }
          {
            int64_t _b_x72_88;
            int64_t _x_x375 = (KK_I64(1)); /*int64*/
            _b_x72_88 = (int64_t)((uint64_t)q + (uint64_t)_x_x375); /*int64*/
            int64_t _b_x73_89 = (int64_t)((uint64_t)r - (uint64_t)y); /*int64*/;
            return kk_std_core_types__new_Tuple2(kk_int64_box(_b_x72_88, _ctx), kk_int64_box(_b_x73_89, _ctx), _ctx);
          }
        }
      }
    }
    {
      int64_t q_0 = x / y; /*int64*/;
      int64_t r_0 = x % y; /*int64*/;
      bool _match_x236;
      int64_t _x_x376 = (KK_I64(0)); /*int64*/
      _match_x236 = (r_0 >= _x_x376); /*bool*/
      if (_match_x236) {
        return kk_std_core_types__new_Tuple2(kk_int64_box(q_0, _ctx), kk_int64_box(r_0, _ctx), _ctx);
      }
      {
        bool _match_x237;
        int64_t _x_x377 = (KK_I64(0)); /*int64*/
        _match_x237 = (y > _x_x377); /*bool*/
        if (_match_x237) {
          int64_t _b_x76_92;
          int64_t _x_x378 = (KK_I64(1)); /*int64*/
          _b_x76_92 = (int64_t)((uint64_t)q_0 - (uint64_t)_x_x378); /*int64*/
          int64_t _b_x77_93 = (int64_t)((uint64_t)r_0 + (uint64_t)y); /*int64*/;
          return kk_std_core_types__new_Tuple2(kk_int64_box(_b_x76_92, _ctx), kk_int64_box(_b_x77_93, _ctx), _ctx);
        }
        {
          int64_t _b_x78_94;
          int64_t _x_x379 = (KK_I64(1)); /*int64*/
          _b_x78_94 = (int64_t)((uint64_t)q_0 + (uint64_t)_x_x379); /*int64*/
          int64_t _b_x79_95 = (int64_t)((uint64_t)r_0 - (uint64_t)y); /*int64*/;
          return kk_std_core_types__new_Tuple2(kk_int64_box(_b_x78_94, _ctx), kk_int64_box(_b_x79_95, _ctx), _ctx);
        }
      }
    }
  }
}
 
// monadic lift

kk_box_t kk_std_num_int64_range_fs__mlift_fold_int64_10100(int64_t end, kk_function_t f, int64_t start, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (end : int64, f : (int64, a) -> e a, start : int64, x : a) -> e a */ 
  int64_t _x_x380;
  int64_t _x_x381 = (KK_I64(1)); /*int64*/
  _x_x380 = (int64_t)((uint64_t)start + (uint64_t)_x_x381); /*int64*/
  return kk_std_num_int64_range_fs_fold_int64(_x_x380, end, x, f, _ctx);
}


// lift anonymous function
struct kk_std_num_int64_range_fs_fold_int64_fun383__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  int64_t end_0;
  int64_t start_0;
};
static kk_box_t kk_std_num_int64_range_fs_fold_int64_fun383(kk_function_t _fself, kk_box_t x_1, kk_context_t* _ctx);
static kk_function_t kk_std_num_int64_range_fs_new_fold_int64_fun383(kk_function_t f_0, int64_t end_0, int64_t start_0, kk_context_t* _ctx) {
  struct kk_std_num_int64_range_fs_fold_int64_fun383__t* _self = kk_function_alloc_as(struct kk_std_num_int64_range_fs_fold_int64_fun383__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int64_range_fs_fold_int64_fun383, kk_context());
  _self->f_0 = f_0;
  _self->end_0 = end_0;
  _self->start_0 = start_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int64_range_fs_fold_int64_fun383(kk_function_t _fself, kk_box_t x_1, kk_context_t* _ctx) {
  struct kk_std_num_int64_range_fs_fold_int64_fun383__t* _self = kk_function_as(struct kk_std_num_int64_range_fs_fold_int64_fun383__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (int64, 3638) -> 3639 3638 */
  int64_t end_0 = _self->end_0; /* int64 */
  int64_t start_0 = _self->start_0; /* int64 */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(start_0, _ctx);}, {}, _ctx)
  return kk_std_num_int64_range_fs__mlift_fold_int64_10100(end_0, f_0, start_0, x_1, _ctx);
}

kk_box_t kk_std_num_int64_range_fs_fold_int64(int64_t start_0, int64_t end_0, kk_box_t init, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,e> (start : int64, end : int64, init : a, f : (int64, a) -> e a) -> e a */ 
  kk__tailcall: ;
  bool _match_x232 = (start_0 > end_0); /*bool*/;
  if (_match_x232) {
    kk_function_drop(f_0, _ctx);
    return init;
  }
  {
    kk_box_t x_0_10102;
    kk_function_t _x_x382 = kk_function_dup(f_0, _ctx); /*(int64, 3638) -> 3639 3638*/
    x_0_10102 = kk_function_call(kk_box_t, (kk_function_t, int64_t, kk_box_t, kk_context_t*), _x_x382, (_x_x382, start_0, init, _ctx), _ctx); /*3638*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10102, _ctx);
      return kk_std_core_hnd_yield_extend(kk_std_num_int64_range_fs_new_fold_int64_fun383(f_0, end_0, start_0, _ctx), _ctx);
    }
    { // tailcall
      int64_t _x_x384;
      int64_t _x_x385 = (KK_I64(1)); /*int64*/
      _x_x384 = (int64_t)((uint64_t)start_0 + (uint64_t)_x_x385); /*int64*/
      start_0 = _x_x384;
      init = x_0_10102;
      goto kk__tailcall;
    }
  }
}
 
// monadic lift

kk_std_core_types__maybe kk_std_num_int64_range_fs__mlift_lift_for_while64_4245_10101(kk_function_t action, int64_t end, int64_t i, kk_std_core_types__maybe _y_x10082, kk_context_t* _ctx) { /* forall<a,e> (action : (int64) -> e maybe<a>, end : int64, i : int64, maybe<a>) -> e maybe<a> */ 
  if (kk_std_core_types__is_Nothing(_y_x10082, _ctx)) {
    int64_t i_0_10018;
    int64_t _x_x388 = (KK_I64(1)); /*int64*/
    i_0_10018 = (int64_t)((uint64_t)i + (uint64_t)_x_x388); /*int64*/
    return kk_std_num_int64_range_fs__lift_for_while64_4245(action, end, i_0_10018, _ctx);
  }
  {
    kk_box_t x = _y_x10082._cons.Just.value;
    kk_function_drop(action, _ctx);
    return kk_std_core_types__new_Just(x, _ctx);
  }
}
 
// lifted local: range/for-while64, rep


// lift anonymous function
struct kk_std_num_int64_range_fs__lift_for_while64_4245_fun391__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  int64_t end_0;
  int64_t i_0;
};
static kk_box_t kk_std_num_int64_range_fs__lift_for_while64_4245_fun391(kk_function_t _fself, kk_box_t _b_x97, kk_context_t* _ctx);
static kk_function_t kk_std_num_int64_range_fs__new_lift_for_while64_4245_fun391(kk_function_t action_0, int64_t end_0, int64_t i_0, kk_context_t* _ctx) {
  struct kk_std_num_int64_range_fs__lift_for_while64_4245_fun391__t* _self = kk_function_alloc_as(struct kk_std_num_int64_range_fs__lift_for_while64_4245_fun391__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int64_range_fs__lift_for_while64_4245_fun391, kk_context());
  _self->action_0 = action_0;
  _self->end_0 = end_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int64_range_fs__lift_for_while64_4245_fun391(kk_function_t _fself, kk_box_t _b_x97, kk_context_t* _ctx) {
  struct kk_std_num_int64_range_fs__lift_for_while64_4245_fun391__t* _self = kk_function_as(struct kk_std_num_int64_range_fs__lift_for_while64_4245_fun391__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (int64) -> 3750 maybe<3749> */
  int64_t end_0 = _self->end_0; /* int64 */
  int64_t i_0 = _self->i_0; /* int64 */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10082_0_99 = kk_std_core_types__maybe_unbox(_b_x97, KK_OWNED, _ctx); /*maybe<3749>*/;
  kk_std_core_types__maybe _x_x392 = kk_std_num_int64_range_fs__mlift_lift_for_while64_4245_10101(action_0, end_0, i_0, _y_x10082_0_99, _ctx); /*maybe<3749>*/
  return kk_std_core_types__maybe_box(_x_x392, _ctx);
}

kk_std_core_types__maybe kk_std_num_int64_range_fs__lift_for_while64_4245(kk_function_t action_0, int64_t end_0, int64_t i_0, kk_context_t* _ctx) { /* forall<a,e> (action : (int64) -> e maybe<a>, end : int64, i : int64) -> e maybe<a> */ 
  kk__tailcall: ;
  bool _match_x230 = (i_0 <= end_0); /*bool*/;
  if (_match_x230) {
    kk_std_core_types__maybe x_0_10105;
    kk_function_t _x_x389 = kk_function_dup(action_0, _ctx); /*(int64) -> 3750 maybe<3749>*/
    x_0_10105 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, int64_t, kk_context_t*), _x_x389, (_x_x389, i_0, _ctx), _ctx); /*maybe<3749>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10105, _ctx);
      kk_box_t _x_x390 = kk_std_core_hnd_yield_extend(kk_std_num_int64_range_fs__new_lift_for_while64_4245_fun391(action_0, end_0, i_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__maybe_unbox(_x_x390, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Nothing(x_0_10105, _ctx)) {
      int64_t i_0_10018_0;
      int64_t _x_x393 = (KK_I64(1)); /*int64*/
      i_0_10018_0 = (int64_t)((uint64_t)i_0 + (uint64_t)_x_x393); /*int64*/
      { // tailcall
        i_0 = i_0_10018_0;
        goto kk__tailcall;
      }
    }
    {
      kk_box_t x_1 = x_0_10105._cons.Just.value;
      kk_function_drop(action_0, _ctx);
      return kk_std_core_types__new_Just(x_1, _ctx);
    }
  }
  {
    kk_function_drop(action_0, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_std_core_types__list kk_std_num_int64__trmc_list64(int64_t lo_0, int64_t hi_0, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (lo : int64, hi : int64, ctx<list<int64>>) -> list<int64> */ 
  kk__tailcall: ;
  bool _match_x229 = (lo_0 <= hi_0); /*bool*/;
  if (_match_x229) {
    kk_std_core_types__list _trmc_x10063 = kk_datatype_null(); /*list<int64>*/;
    kk_std_core_types__list _trmc_x10064 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_int64_box(lo_0, _ctx), _trmc_x10063, _ctx); /*list<int64>*/;
    kk_field_addr_t _b_x109_114 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10064, _ctx)->tail, _ctx); /*@field-addr<list<int64>>*/;
    { // tailcall
      int64_t _x_x397;
      int64_t _x_x398 = (KK_I64(1)); /*int64*/
      _x_x397 = (int64_t)((uint64_t)lo_0 + (uint64_t)_x_x398); /*int64*/
      kk_std_core_types__cctx _x_x399 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10064, _ctx)),_b_x109_114,kk_context()); /*ctx<0>*/
      lo_0 = _x_x397;
      _acc = _x_x399;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x400 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x400, KK_OWNED, _ctx);
  }
}

kk_std_core_types__list kk_std_num_int64_list64(int64_t lo_0_0, int64_t hi_0_0, kk_context_t* _ctx) { /* (lo : int64, hi : int64) -> list<int64> */ 
  kk_std_core_types__cctx _x_x401 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_num_int64__trmc_list64(lo_0_0, hi_0_0, _x_x401, _ctx);
}

int64_t kk_std_num_int64_sumacc64(kk_std_core_types__list xs, int64_t acc, kk_context_t* _ctx) { /* (xs : list<int64>, acc : int64) -> int64 */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x402 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x120 = _con_x402->head;
    kk_std_core_types__list xx = _con_x402->tail;
    int64_t x = kk_int64_unbox(_box_x120, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_box_drop(_box_x120, _ctx);
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    { // tailcall
      int64_t _x_x403 = (int64_t)((uint64_t)acc + (uint64_t)x); /*int64*/
      xs = xx;
      acc = _x_x403;
      goto kk__tailcall;
    }
  }
  {
    return acc;
  }
}
 
// carry-less multiply by -1 gives the _prefix sum_

kk_string_t kk_std_num_int64_test_prefix_sum(kk_context_t* _ctx) { /* () -> string */ 
  int64_t x = (KK_I64(1295)); /*int64*/;
  int64_t i_10023;
  int64_t _x_x405 = (KK_I64(-1)); /*int64*/
  i_10023 = (int64_t)kk_clmul64((uint64_t)x,(uint64_t)_x_x405); /*int64*/
  kk_integer_t _x_x406 = kk_integer_from_int64(i_10023,kk_context()); /*int*/
  kk_std_core_types__optional _x_x407;
  kk_box_t _x_x408;
  kk_integer_t _x_x409;
  kk_std_core_types__optional _match_x228 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x228, _ctx)) {
    kk_box_t _box_x121 = _match_x228._cons._Optional.value;
    kk_integer_t _uniq_width_610 = kk_integer_unbox(_box_x121, _ctx);
    kk_integer_dup(_uniq_width_610, _ctx);
    kk_std_core_types__optional_drop(_match_x228, _ctx);
    _x_x409 = _uniq_width_610; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x228, _ctx);
    _x_x409 = kk_integer_from_small(1); /*int*/
  }
  _x_x408 = kk_integer_box(_x_x409, _ctx); /*7*/
  _x_x407 = kk_std_core_types__new_Optional(_x_x408, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x410;
  kk_box_t _x_x411;
  bool _x_x412;
  kk_std_core_types__optional _match_x227 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x227, _ctx)) {
    kk_box_t _box_x123 = _match_x227._cons._Optional.value;
    bool _uniq_use_capitals_614 = kk_bool_unbox(_box_x123);
    kk_std_core_types__optional_drop(_match_x227, _ctx);
    _x_x412 = _uniq_use_capitals_614; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x227, _ctx);
    _x_x412 = true; /*bool*/
  }
  _x_x411 = kk_bool_box(_x_x412); /*7*/
  _x_x410 = kk_std_core_types__new_Optional(_x_x411, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x413;
  kk_box_t _x_x414;
  kk_string_t _x_x415;
  kk_std_core_types__optional _match_x226 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x226, _ctx)) {
    kk_box_t _box_x125 = _match_x226._cons._Optional.value;
    kk_string_t _uniq_pre_618 = kk_string_unbox(_box_x125);
    kk_string_dup(_uniq_pre_618, _ctx);
    kk_std_core_types__optional_drop(_match_x226, _ctx);
    _x_x415 = _uniq_pre_618; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x226, _ctx);
    kk_define_string_literal(static, _s_x416, 2, "0x", _ctx)
    _x_x415 = kk_string_dup(_s_x416, _ctx); /*string*/
  }
  _x_x414 = kk_string_box(_x_x415); /*7*/
  _x_x413 = kk_std_core_types__new_Optional(_x_x414, _ctx); /*? 7*/
  return kk_std_core_show_show_hex(_x_x406, _x_x407, _x_x410, _x_x413, _ctx);
}
 
// carry-less multiply of x by x spreads the bits

kk_string_t kk_std_num_int64_test_bit_spread1(kk_context_t* _ctx) { /* () -> string */ 
  int64_t x = (KK_I64(1535)); /*int64*/;
  int64_t i_10027 = (int64_t)kk_clmul64((uint64_t)x,(uint64_t)x); /*int64*/;
  kk_integer_t _x_x417 = kk_integer_from_int64(i_10027,kk_context()); /*int*/
  kk_std_core_types__optional _x_x418;
  kk_box_t _x_x419;
  kk_integer_t _x_x420;
  kk_std_core_types__optional _match_x225 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x225, _ctx)) {
    kk_box_t _box_x130 = _match_x225._cons._Optional.value;
    kk_integer_t _uniq_width_610 = kk_integer_unbox(_box_x130, _ctx);
    kk_integer_dup(_uniq_width_610, _ctx);
    kk_std_core_types__optional_drop(_match_x225, _ctx);
    _x_x420 = _uniq_width_610; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x225, _ctx);
    _x_x420 = kk_integer_from_small(1); /*int*/
  }
  _x_x419 = kk_integer_box(_x_x420, _ctx); /*7*/
  _x_x418 = kk_std_core_types__new_Optional(_x_x419, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x421;
  kk_box_t _x_x422;
  bool _x_x423;
  kk_std_core_types__optional _match_x224 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x224, _ctx)) {
    kk_box_t _box_x132 = _match_x224._cons._Optional.value;
    bool _uniq_use_capitals_614 = kk_bool_unbox(_box_x132);
    kk_std_core_types__optional_drop(_match_x224, _ctx);
    _x_x423 = _uniq_use_capitals_614; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x224, _ctx);
    _x_x423 = true; /*bool*/
  }
  _x_x422 = kk_bool_box(_x_x423); /*7*/
  _x_x421 = kk_std_core_types__new_Optional(_x_x422, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x424;
  kk_box_t _x_x425;
  kk_string_t _x_x426;
  kk_std_core_types__optional _match_x223 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x223, _ctx)) {
    kk_box_t _box_x134 = _match_x223._cons._Optional.value;
    kk_string_t _uniq_pre_618 = kk_string_unbox(_box_x134);
    kk_string_dup(_uniq_pre_618, _ctx);
    kk_std_core_types__optional_drop(_match_x223, _ctx);
    _x_x426 = _uniq_pre_618; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x223, _ctx);
    kk_define_string_literal(static, _s_x427, 2, "0x", _ctx)
    _x_x426 = kk_string_dup(_s_x427, _ctx); /*string*/
  }
  _x_x425 = kk_string_box(_x_x426); /*7*/
  _x_x424 = kk_std_core_types__new_Optional(_x_x425, _ctx); /*? 7*/
  return kk_std_core_show_show_hex(_x_x417, _x_x418, _x_x421, _x_x424, _ctx);
}

kk_string_t kk_std_num_int64_test_bit_spread2(kk_context_t* _ctx) { /* () -> string */ 
  int64_t x = (KK_I64(1531)); /*int64*/;
  int64_t i_10031 = (int64_t)kk_clmul64((uint64_t)x,(uint64_t)x); /*int64*/;
  kk_integer_t _x_x428 = kk_integer_from_int64(i_10031,kk_context()); /*int*/
  kk_std_core_types__optional _x_x429;
  kk_box_t _x_x430;
  kk_integer_t _x_x431;
  kk_std_core_types__optional _match_x222 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x222, _ctx)) {
    kk_box_t _box_x139 = _match_x222._cons._Optional.value;
    kk_integer_t _uniq_width_610 = kk_integer_unbox(_box_x139, _ctx);
    kk_integer_dup(_uniq_width_610, _ctx);
    kk_std_core_types__optional_drop(_match_x222, _ctx);
    _x_x431 = _uniq_width_610; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x222, _ctx);
    _x_x431 = kk_integer_from_small(1); /*int*/
  }
  _x_x430 = kk_integer_box(_x_x431, _ctx); /*7*/
  _x_x429 = kk_std_core_types__new_Optional(_x_x430, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x432;
  kk_box_t _x_x433;
  bool _x_x434;
  kk_std_core_types__optional _match_x221 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x221, _ctx)) {
    kk_box_t _box_x141 = _match_x221._cons._Optional.value;
    bool _uniq_use_capitals_614 = kk_bool_unbox(_box_x141);
    kk_std_core_types__optional_drop(_match_x221, _ctx);
    _x_x434 = _uniq_use_capitals_614; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x221, _ctx);
    _x_x434 = true; /*bool*/
  }
  _x_x433 = kk_bool_box(_x_x434); /*7*/
  _x_x432 = kk_std_core_types__new_Optional(_x_x433, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x435;
  kk_box_t _x_x436;
  kk_string_t _x_x437;
  kk_std_core_types__optional _match_x220 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x220, _ctx)) {
    kk_box_t _box_x143 = _match_x220._cons._Optional.value;
    kk_string_t _uniq_pre_618 = kk_string_unbox(_box_x143);
    kk_string_dup(_uniq_pre_618, _ctx);
    kk_std_core_types__optional_drop(_match_x220, _ctx);
    _x_x437 = _uniq_pre_618; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x220, _ctx);
    kk_define_string_literal(static, _s_x438, 2, "0x", _ctx)
    _x_x437 = kk_string_dup(_s_x438, _ctx); /*string*/
  }
  _x_x436 = kk_string_box(_x_x437); /*7*/
  _x_x435 = kk_std_core_types__new_Optional(_x_x436, _ctx); /*? 7*/
  return kk_std_core_show_show_hex(_x_x428, _x_x429, _x_x432, _x_x435, _ctx);
}

kk_string_t kk_std_num_int64_test_clmulr1(kk_context_t* _ctx) { /* () -> string */ 
  int64_t x = (KK_I64(51)); /*int64*/;
  int64_t i_10035 = kk_bits_zip64(x); /*int64*/;
  int64_t i_0_10039;
  int64_t _x_x441 = (int64_t)kk_clmul64((uint64_t)x,(uint64_t)x); /*int64*/
  int64_t _x_x442 = (int64_t)kk_clmulr64((uint64_t)x,(uint64_t)x); /*int64*/
  i_0_10039 = _x_x441 | _x_x442; /*int64*/
  kk_integer_t _b_x149_160;
  kk_std_core_types__optional _match_x219 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x219, _ctx)) {
    kk_box_t _box_x148 = _match_x219._cons._Optional.value;
    kk_integer_t _uniq_width_610 = kk_integer_unbox(_box_x148, _ctx);
    kk_integer_dup(_uniq_width_610, _ctx);
    kk_std_core_types__optional_drop(_match_x219, _ctx);
    _b_x149_160 = _uniq_width_610; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x219, _ctx);
    _b_x149_160 = kk_integer_from_small(1); /*int*/
  }
  bool _b_x151_161;
  kk_std_core_types__optional _match_x218 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x218, _ctx)) {
    kk_box_t _box_x150 = _match_x218._cons._Optional.value;
    bool _uniq_use_capitals_614 = kk_bool_unbox(_box_x150);
    kk_std_core_types__optional_drop(_match_x218, _ctx);
    _b_x151_161 = _uniq_use_capitals_614; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x218, _ctx);
    _b_x151_161 = true; /*bool*/
  }
  kk_string_t _b_x153_162;
  kk_std_core_types__optional _match_x217 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x217, _ctx)) {
    kk_box_t _box_x152 = _match_x217._cons._Optional.value;
    kk_string_t _uniq_pre_618 = kk_string_unbox(_box_x152);
    kk_string_dup(_uniq_pre_618, _ctx);
    kk_std_core_types__optional_drop(_match_x217, _ctx);
    _b_x153_162 = _uniq_pre_618; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x217, _ctx);
    kk_define_string_literal(static, _s_x443, 2, "0x", _ctx)
    _b_x153_162 = kk_string_dup(_s_x443, _ctx); /*string*/
  }
  kk_string_t _x_x444;
  kk_integer_t _x_x445 = kk_integer_from_int64(i_10035,kk_context()); /*int*/
  kk_std_core_types__optional _x_x446 = kk_std_core_types__new_Optional(kk_integer_box(_b_x149_160, _ctx), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x447 = kk_std_core_types__new_Optional(kk_bool_box(_b_x151_161), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x448 = kk_std_core_types__new_Optional(kk_string_box(_b_x153_162), _ctx); /*? 7*/
  _x_x444 = kk_std_core_show_show_hex(_x_x445, _x_x446, _x_x447, _x_x448, _ctx); /*string*/
  kk_string_t _x_x449;
  kk_integer_t _b_x155_163;
  kk_std_core_types__optional _match_x216 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x216, _ctx)) {
    kk_box_t _box_x154 = _match_x216._cons._Optional.value;
    kk_integer_t _uniq_width_610_0 = kk_integer_unbox(_box_x154, _ctx);
    kk_integer_dup(_uniq_width_610_0, _ctx);
    kk_std_core_types__optional_drop(_match_x216, _ctx);
    _b_x155_163 = _uniq_width_610_0; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x216, _ctx);
    _b_x155_163 = kk_integer_from_small(1); /*int*/
  }
  bool _b_x157_164;
  kk_std_core_types__optional _match_x215 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x215, _ctx)) {
    kk_box_t _box_x156 = _match_x215._cons._Optional.value;
    bool _uniq_use_capitals_614_0 = kk_bool_unbox(_box_x156);
    kk_std_core_types__optional_drop(_match_x215, _ctx);
    _b_x157_164 = _uniq_use_capitals_614_0; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x215, _ctx);
    _b_x157_164 = true; /*bool*/
  }
  kk_string_t _b_x159_165;
  kk_std_core_types__optional _match_x214 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x214, _ctx)) {
    kk_box_t _box_x158 = _match_x214._cons._Optional.value;
    kk_string_t _uniq_pre_618_0 = kk_string_unbox(_box_x158);
    kk_string_dup(_uniq_pre_618_0, _ctx);
    kk_std_core_types__optional_drop(_match_x214, _ctx);
    _b_x159_165 = _uniq_pre_618_0; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x214, _ctx);
    kk_define_string_literal(static, _s_x450, 2, "0x", _ctx)
    _b_x159_165 = kk_string_dup(_s_x450, _ctx); /*string*/
  }
  kk_string_t _x_x451;
  kk_define_string_literal(static, _s_x452, 4, " == ", _ctx)
  _x_x451 = kk_string_dup(_s_x452, _ctx); /*string*/
  kk_string_t _x_x453;
  kk_integer_t _x_x454 = kk_integer_from_int64(i_0_10039,kk_context()); /*int*/
  kk_std_core_types__optional _x_x455 = kk_std_core_types__new_Optional(kk_integer_box(_b_x155_163, _ctx), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x456 = kk_std_core_types__new_Optional(kk_bool_box(_b_x157_164), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x457 = kk_std_core_types__new_Optional(kk_string_box(_b_x159_165), _ctx); /*? 7*/
  _x_x453 = kk_std_core_show_show_hex(_x_x454, _x_x455, _x_x456, _x_x457, _ctx); /*string*/
  _x_x449 = kk_std_core_types__lp__plus__plus__rp_(_x_x451, _x_x453, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x444, _x_x449, _ctx);
}

kk_string_t kk_std_num_int64_test_clmulr2(kk_context_t* _ctx) { /* () -> string */ 
  int64_t x = (KK_I64(81986702028889840)); /*int64*/;
  int64_t i_10044 = kk_bits_zip64(x); /*int64*/;
  int64_t i_0_10048;
  int64_t _x_x458 = (int64_t)kk_clmul64((uint64_t)x,(uint64_t)x); /*int64*/
  int64_t _x_x459 = (int64_t)kk_clmulr64((uint64_t)x,(uint64_t)x); /*int64*/
  i_0_10048 = _x_x458 | _x_x459; /*int64*/
  kk_integer_t _b_x167_178;
  kk_std_core_types__optional _match_x213 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x213, _ctx)) {
    kk_box_t _box_x166 = _match_x213._cons._Optional.value;
    kk_integer_t _uniq_width_610 = kk_integer_unbox(_box_x166, _ctx);
    kk_integer_dup(_uniq_width_610, _ctx);
    kk_std_core_types__optional_drop(_match_x213, _ctx);
    _b_x167_178 = _uniq_width_610; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x213, _ctx);
    _b_x167_178 = kk_integer_from_small(1); /*int*/
  }
  bool _b_x169_179;
  kk_std_core_types__optional _match_x212 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x212, _ctx)) {
    kk_box_t _box_x168 = _match_x212._cons._Optional.value;
    bool _uniq_use_capitals_614 = kk_bool_unbox(_box_x168);
    kk_std_core_types__optional_drop(_match_x212, _ctx);
    _b_x169_179 = _uniq_use_capitals_614; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x212, _ctx);
    _b_x169_179 = true; /*bool*/
  }
  kk_string_t _b_x171_180;
  kk_std_core_types__optional _match_x211 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x211, _ctx)) {
    kk_box_t _box_x170 = _match_x211._cons._Optional.value;
    kk_string_t _uniq_pre_618 = kk_string_unbox(_box_x170);
    kk_string_dup(_uniq_pre_618, _ctx);
    kk_std_core_types__optional_drop(_match_x211, _ctx);
    _b_x171_180 = _uniq_pre_618; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x211, _ctx);
    kk_define_string_literal(static, _s_x460, 2, "0x", _ctx)
    _b_x171_180 = kk_string_dup(_s_x460, _ctx); /*string*/
  }
  kk_string_t _x_x461;
  kk_integer_t _x_x462 = kk_integer_from_int64(i_10044,kk_context()); /*int*/
  kk_std_core_types__optional _x_x463 = kk_std_core_types__new_Optional(kk_integer_box(_b_x167_178, _ctx), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x464 = kk_std_core_types__new_Optional(kk_bool_box(_b_x169_179), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x465 = kk_std_core_types__new_Optional(kk_string_box(_b_x171_180), _ctx); /*? 7*/
  _x_x461 = kk_std_core_show_show_hex(_x_x462, _x_x463, _x_x464, _x_x465, _ctx); /*string*/
  kk_string_t _x_x466;
  kk_integer_t _b_x173_181;
  kk_std_core_types__optional _match_x210 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x210, _ctx)) {
    kk_box_t _box_x172 = _match_x210._cons._Optional.value;
    kk_integer_t _uniq_width_610_0 = kk_integer_unbox(_box_x172, _ctx);
    kk_integer_dup(_uniq_width_610_0, _ctx);
    kk_std_core_types__optional_drop(_match_x210, _ctx);
    _b_x173_181 = _uniq_width_610_0; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x210, _ctx);
    _b_x173_181 = kk_integer_from_small(1); /*int*/
  }
  bool _b_x175_182;
  kk_std_core_types__optional _match_x209 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x209, _ctx)) {
    kk_box_t _box_x174 = _match_x209._cons._Optional.value;
    bool _uniq_use_capitals_614_0 = kk_bool_unbox(_box_x174);
    kk_std_core_types__optional_drop(_match_x209, _ctx);
    _b_x175_182 = _uniq_use_capitals_614_0; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x209, _ctx);
    _b_x175_182 = true; /*bool*/
  }
  kk_string_t _b_x177_183;
  kk_std_core_types__optional _match_x208 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x208, _ctx)) {
    kk_box_t _box_x176 = _match_x208._cons._Optional.value;
    kk_string_t _uniq_pre_618_0 = kk_string_unbox(_box_x176);
    kk_string_dup(_uniq_pre_618_0, _ctx);
    kk_std_core_types__optional_drop(_match_x208, _ctx);
    _b_x177_183 = _uniq_pre_618_0; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x208, _ctx);
    kk_define_string_literal(static, _s_x467, 2, "0x", _ctx)
    _b_x177_183 = kk_string_dup(_s_x467, _ctx); /*string*/
  }
  kk_string_t _x_x468;
  kk_define_string_literal(static, _s_x469, 4, " == ", _ctx)
  _x_x468 = kk_string_dup(_s_x469, _ctx); /*string*/
  kk_string_t _x_x470;
  kk_integer_t _x_x471 = kk_integer_from_int64(i_0_10048,kk_context()); /*int*/
  kk_std_core_types__optional _x_x472 = kk_std_core_types__new_Optional(kk_integer_box(_b_x173_181, _ctx), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x473 = kk_std_core_types__new_Optional(kk_bool_box(_b_x175_182), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x474 = kk_std_core_types__new_Optional(kk_string_box(_b_x177_183), _ctx); /*? 7*/
  _x_x470 = kk_std_core_show_show_hex(_x_x471, _x_x472, _x_x473, _x_x474, _ctx); /*string*/
  _x_x466 = kk_std_core_types__lp__plus__plus__rp_(_x_x468, _x_x470, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x461, _x_x466, _ctx);
}

kk_string_t kk_std_num_int64_test_clmulrev1(kk_context_t* _ctx) { /* () -> string */ 
  int64_t x = (KK_I64(305419896)); /*int64*/;
  int64_t y;
  int64_t _x_x478 = (KK_I64(2309737967)); /*int64*/
  y = kk_bits_bswap64(_x_x478); /*int64*/
  int64_t i_10053 = (int64_t)kk_clmulr64((uint64_t)x,(uint64_t)y); /*int64*/;
  int64_t i_0_10057;
  int64_t _x_x479;
  int64_t _x_x480 = kk_bits_reverse64(x); /*int64*/
  int64_t _x_x481 = kk_bits_reverse64(y); /*int64*/
  _x_x479 = (int64_t)kk_clmul64((uint64_t)_x_x480,(uint64_t)_x_x481); /*int64*/
  i_0_10057 = kk_bits_reverse64(_x_x479); /*int64*/
  kk_integer_t _b_x185_196;
  kk_std_core_types__optional _match_x207 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x207, _ctx)) {
    kk_box_t _box_x184 = _match_x207._cons._Optional.value;
    kk_integer_t _uniq_width_610 = kk_integer_unbox(_box_x184, _ctx);
    kk_integer_dup(_uniq_width_610, _ctx);
    kk_std_core_types__optional_drop(_match_x207, _ctx);
    _b_x185_196 = _uniq_width_610; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x207, _ctx);
    _b_x185_196 = kk_integer_from_small(1); /*int*/
  }
  bool _b_x187_197;
  kk_std_core_types__optional _match_x206 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x206, _ctx)) {
    kk_box_t _box_x186 = _match_x206._cons._Optional.value;
    bool _uniq_use_capitals_614 = kk_bool_unbox(_box_x186);
    kk_std_core_types__optional_drop(_match_x206, _ctx);
    _b_x187_197 = _uniq_use_capitals_614; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x206, _ctx);
    _b_x187_197 = true; /*bool*/
  }
  kk_string_t _b_x189_198;
  kk_std_core_types__optional _match_x205 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x205, _ctx)) {
    kk_box_t _box_x188 = _match_x205._cons._Optional.value;
    kk_string_t _uniq_pre_618 = kk_string_unbox(_box_x188);
    kk_string_dup(_uniq_pre_618, _ctx);
    kk_std_core_types__optional_drop(_match_x205, _ctx);
    _b_x189_198 = _uniq_pre_618; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x205, _ctx);
    kk_define_string_literal(static, _s_x482, 2, "0x", _ctx)
    _b_x189_198 = kk_string_dup(_s_x482, _ctx); /*string*/
  }
  kk_string_t _x_x483;
  kk_integer_t _x_x484 = kk_integer_from_int64(i_10053,kk_context()); /*int*/
  kk_std_core_types__optional _x_x485 = kk_std_core_types__new_Optional(kk_integer_box(_b_x185_196, _ctx), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x486 = kk_std_core_types__new_Optional(kk_bool_box(_b_x187_197), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x487 = kk_std_core_types__new_Optional(kk_string_box(_b_x189_198), _ctx); /*? 7*/
  _x_x483 = kk_std_core_show_show_hex(_x_x484, _x_x485, _x_x486, _x_x487, _ctx); /*string*/
  kk_string_t _x_x488;
  kk_integer_t _b_x191_199;
  kk_std_core_types__optional _match_x204 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x204, _ctx)) {
    kk_box_t _box_x190 = _match_x204._cons._Optional.value;
    kk_integer_t _uniq_width_610_0 = kk_integer_unbox(_box_x190, _ctx);
    kk_integer_dup(_uniq_width_610_0, _ctx);
    kk_std_core_types__optional_drop(_match_x204, _ctx);
    _b_x191_199 = _uniq_width_610_0; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x204, _ctx);
    _b_x191_199 = kk_integer_from_small(1); /*int*/
  }
  bool _b_x193_200;
  kk_std_core_types__optional _match_x203 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x203, _ctx)) {
    kk_box_t _box_x192 = _match_x203._cons._Optional.value;
    bool _uniq_use_capitals_614_0 = kk_bool_unbox(_box_x192);
    kk_std_core_types__optional_drop(_match_x203, _ctx);
    _b_x193_200 = _uniq_use_capitals_614_0; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x203, _ctx);
    _b_x193_200 = true; /*bool*/
  }
  kk_string_t _b_x195_201;
  kk_std_core_types__optional _match_x202 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x202, _ctx)) {
    kk_box_t _box_x194 = _match_x202._cons._Optional.value;
    kk_string_t _uniq_pre_618_0 = kk_string_unbox(_box_x194);
    kk_string_dup(_uniq_pre_618_0, _ctx);
    kk_std_core_types__optional_drop(_match_x202, _ctx);
    _b_x195_201 = _uniq_pre_618_0; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x202, _ctx);
    kk_define_string_literal(static, _s_x489, 2, "0x", _ctx)
    _b_x195_201 = kk_string_dup(_s_x489, _ctx); /*string*/
  }
  kk_string_t _x_x490;
  kk_define_string_literal(static, _s_x491, 4, " == ", _ctx)
  _x_x490 = kk_string_dup(_s_x491, _ctx); /*string*/
  kk_string_t _x_x492;
  kk_integer_t _x_x493 = kk_integer_from_int64(i_0_10057,kk_context()); /*int*/
  kk_std_core_types__optional _x_x494 = kk_std_core_types__new_Optional(kk_integer_box(_b_x191_199, _ctx), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x495 = kk_std_core_types__new_Optional(kk_bool_box(_b_x193_200), _ctx); /*? 7*/
  kk_std_core_types__optional _x_x496 = kk_std_core_types__new_Optional(kk_string_box(_b_x195_201), _ctx); /*? 7*/
  _x_x492 = kk_std_core_show_show_hex(_x_x493, _x_x494, _x_x495, _x_x496, _ctx); /*string*/
  _x_x488 = kk_std_core_types__lp__plus__plus__rp_(_x_x490, _x_x492, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x483, _x_x488, _ctx);
}

// initialization
void kk_std_num_int64__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
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
  kk_std_core__init(_ctx);
  kk_std_core_undiv__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_std_num_int64_one = (KK_I64(1)); /*int64*/
  }
  {
    kk_std_num_int64_zero = (KK_I64(0)); /*int64*/
  }
  {
    kk_std_num_int64_max_int64 = (KK_I64(9223372036854775807)); /*int64*/
  }
  {
    kk_std_num_int64_min_int64 = (INT64_MIN); /*int64*/
  }
  {
    kk_std_num_int64_bits_int64 = (KK_I64(64)); /*int64*/
  }
}

// termination
void kk_std_num_int64__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_skip_drop(kk_std_num_int64_bits_int64, _ctx);
  kk_skip_drop(kk_std_num_int64_min_int64, _ctx);
  kk_skip_drop(kk_std_num_int64_max_int64, _ctx);
  kk_skip_drop(kk_std_num_int64_zero, _ctx);
  kk_skip_drop(kk_std_num_int64_one, _ctx);
  kk_std_core_undiv__done(_ctx);
  kk_std_core__done(_ctx);
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
  kk_std_core_types__done(_ctx);
}
