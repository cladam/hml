// Koka generated module: std/num/int32, koka version: 3.2.3, platform: 64-bit
#include "std_num_int32.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2023, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static kk_std_core_types__tuple2 kk_umul32x_wide( int32_t x, int32_t y, kk_context_t* ctx ) {
  uint32_t hi;
  uint32_t lo = kk_umul32_wide((uint32_t)x, (uint32_t)y, &hi);
  return kk_std_core_types__new_Tuple2( kk_int32_box((int32_t)lo,ctx), kk_int32_box((int32_t)hi,ctx), ctx );
}

static kk_std_core_types__tuple2 kk_imul32x_wide( int32_t x, int32_t y, kk_context_t* ctx ) {
  int32_t hi;
  uint32_t lo = kk_imul32_wide(x, y, &hi);
  return kk_std_core_types__new_Tuple2( kk_int32_box((int32_t)lo,ctx), kk_int32_box(hi,ctx), ctx );
}

static kk_std_core_types__tuple2 kk_clmul32x_wide( int32_t x, int32_t y, kk_context_t* ctx ) {
  uint32_t hi;
  uint32_t lo = kk_clmul32_wide((uint32_t)x, (uint32_t)y, &hi);
  return kk_std_core_types__new_Tuple2( kk_int32_box((int32_t)hi,ctx), kk_int32_box((int32_t)lo,ctx), ctx );
}
 
// The 32-bit integer with value 1.

int32_t kk_std_num_int32_one;
 
// The zero 32-bit integer.

int32_t kk_std_num_int32_zero;
 
// The maximal integer value before overflow happens

int32_t kk_std_num_int32_max_int32;
 
// The minimal integer value before underflow happens

int32_t kk_std_num_int32_min_int32;
 
// The number of bits in an `:int32` (always 32)

int32_t kk_std_num_int32_bits_int32;
 
// Show an `:int32` in hexadecimal notation
// The `width`  parameter specifies how wide the hex value is where `'0'`  is used to align.
// The `use-capitals` parameter (= `True`) determines if capital letters should be used to display the hexadecimal digits.
// The `pre` (=`"0x"`) is an optional prefix for the number (goes between the sign and the number).

kk_string_t kk_std_num_int32_show_hex(int32_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx) { /* (i : int32, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
  kk_integer_t _x_x171 = kk_integer_from_int(i,kk_context()); /*int*/
  kk_std_core_types__optional _x_x172;
  kk_box_t _x_x173;
  kk_integer_t _x_x174;
  if (kk_std_core_types__is_Optional(width, _ctx)) {
    kk_box_t _box_x4 = width._cons._Optional.value;
    kk_integer_t _uniq_width_531 = kk_integer_unbox(_box_x4, _ctx);
    kk_integer_dup(_uniq_width_531, _ctx);
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x174 = _uniq_width_531; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x174 = kk_integer_from_small(1); /*int*/
  }
  _x_x173 = kk_integer_box(_x_x174, _ctx); /*7*/
  _x_x172 = kk_std_core_types__new_Optional(_x_x173, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x175;
  kk_box_t _x_x176;
  bool _x_x177;
  if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
    kk_box_t _box_x6 = use_capitals._cons._Optional.value;
    bool _uniq_use_capitals_535 = kk_bool_unbox(_box_x6);
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x177 = _uniq_use_capitals_535; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x177 = true; /*bool*/
  }
  _x_x176 = kk_bool_box(_x_x177); /*7*/
  _x_x175 = kk_std_core_types__new_Optional(_x_x176, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x178;
  kk_box_t _x_x179;
  kk_string_t _x_x180;
  if (kk_std_core_types__is_Optional(pre, _ctx)) {
    kk_box_t _box_x8 = pre._cons._Optional.value;
    kk_string_t _uniq_pre_539 = kk_string_unbox(_box_x8);
    kk_string_dup(_uniq_pre_539, _ctx);
    kk_std_core_types__optional_drop(pre, _ctx);
    _x_x180 = _uniq_pre_539; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(pre, _ctx);
    kk_define_string_literal(static, _s_x181, 2, "0x", _ctx)
    _x_x180 = kk_string_dup(_s_x181, _ctx); /*string*/
  }
  _x_x179 = kk_string_box(_x_x180); /*7*/
  _x_x178 = kk_std_core_types__new_Optional(_x_x179, _ctx); /*? 7*/
  return kk_std_core_show_show_hex(_x_x171, _x_x172, _x_x175, _x_x178, _ctx);
}
 
// Convert an `:int` to `:int32` but interpret the `int` as an unsigned 32-bit value.
// `i` is clamped between `0` and `0xFFFFFFFF`.
// `0x7FFF_FFFF.uint32 == 0x7FFF_FFFF.int32 == max-int32`
// `0x8000_0000.uint32 == -0x8000_0000.int32 == min-int32`
// `0xFFFF_FFFF.uint32 == -1.int32`

int32_t kk_std_num_int32_uint32(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> int32 */ 
  kk_integer_t _x_x182;
  bool _match_x162;
  kk_integer_t _brw_x163 = kk_integer_from_int(kk_std_num_int32_max_int32,kk_context()); /*int*/;
  bool _brw_x164 = kk_integer_gt_borrow(i,_brw_x163,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x163, _ctx);
  _match_x162 = _brw_x164; /*bool*/
  if (_match_x162) {
    _x_x182 = kk_integer_sub(i,(kk_integer_from_str("4294967296", _ctx)),kk_context()); /*int*/
  }
  else {
    _x_x182 = i; /*int*/
  }
  return kk_integer_clamp32(_x_x182,kk_context());
}
 
// Show an `:int32` in hexadecimal notation interpreted as an unsigned 32-bit value.
// The `width`  parameter specifies how wide the hex value is where `'0'`  is used to align.
// The `use-capitals` parameter (= `True`) determines if capital letters should be used to display the hexadecimal digits.
// The `pre` (=`"0x"`) is an optional prefix for the number.

kk_string_t kk_std_num_int32_show_hex32(int32_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx) { /* (i : int32, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
  kk_integer_t _x_x183 = kk_std_num_int32_uint(i, _ctx); /*int*/
  kk_std_core_types__optional _x_x184;
  kk_box_t _x_x185;
  kk_integer_t _x_x186;
  if (kk_std_core_types__is_Optional(width, _ctx)) {
    kk_box_t _box_x13 = width._cons._Optional.value;
    kk_integer_t _uniq_width_648 = kk_integer_unbox(_box_x13, _ctx);
    kk_integer_dup(_uniq_width_648, _ctx);
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x186 = _uniq_width_648; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(width, _ctx);
    _x_x186 = kk_integer_from_small(8); /*int*/
  }
  _x_x185 = kk_integer_box(_x_x186, _ctx); /*7*/
  _x_x184 = kk_std_core_types__new_Optional(_x_x185, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x187;
  kk_box_t _x_x188;
  bool _x_x189;
  if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
    kk_box_t _box_x15 = use_capitals._cons._Optional.value;
    bool _uniq_use_capitals_652 = kk_bool_unbox(_box_x15);
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x189 = _uniq_use_capitals_652; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x189 = true; /*bool*/
  }
  _x_x188 = kk_bool_box(_x_x189); /*7*/
  _x_x187 = kk_std_core_types__new_Optional(_x_x188, _ctx); /*? 7*/
  kk_std_core_types__optional _x_x190;
  kk_box_t _x_x191;
  kk_string_t _x_x192;
  if (kk_std_core_types__is_Optional(pre, _ctx)) {
    kk_box_t _box_x17 = pre._cons._Optional.value;
    kk_string_t _uniq_pre_656 = kk_string_unbox(_box_x17);
    kk_string_dup(_uniq_pre_656, _ctx);
    kk_std_core_types__optional_drop(pre, _ctx);
    _x_x192 = _uniq_pre_656; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(pre, _ctx);
    kk_define_string_literal(static, _s_x193, 2, "0x", _ctx)
    _x_x192 = kk_string_dup(_s_x193, _ctx); /*string*/
  }
  _x_x191 = kk_string_box(_x_x192); /*7*/
  _x_x190 = kk_std_core_types__new_Optional(_x_x191, _ctx); /*? 7*/
  return kk_std_core_show_show_hex(_x_x183, _x_x184, _x_x187, _x_x190, _ctx);
}
 
// Return the absolute value of an integer.
// Raises an exception if the `:int32` is `min-int32`
// (since the negation of `min-int32` equals itself and is still negative)


// lift anonymous function
struct kk_std_num_int32_abs_fun197__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_num_int32_abs_fun197(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx);
static kk_function_t kk_std_num_int32_new_abs_fun197(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_num_int32_abs_fun197, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_num_int32_abs_fun197(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x198;
  bool b_31 = kk_bool_unbox(_b_x24); /*bool*/;
  if (b_31) {
    _x_x198 = false; /*bool*/
  }
  else {
    _x_x198 = true; /*bool*/
  }
  return kk_bool_box(_x_x198);
}

int32_t kk_std_num_int32_abs(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> exn int32 */ 
  bool _x_x1_10070 = 0 > i; /*bool*/;
  bool _match_x156;
  kk_box_t _x_x196 = kk_std_core_hnd__open_none1(kk_std_num_int32_new_abs_fun197(_ctx), kk_bool_box(_x_x1_10070), _ctx); /*9924*/
  _match_x156 = kk_bool_unbox(_x_x196); /*bool*/
  if (_match_x156) {
    return i;
  }
  {
    bool _match_x157 = (i > kk_std_num_int32_min_int32); /*bool*/;
    if (_match_x157) {
      return (int32_t)((uint32_t)((KK_I32(0))) - (uint32_t)i);
    }
    {
      kk_box_t _x_x199;
      kk_string_t _x_x200;
      kk_define_string_literal(static, _s_x201, 79, "std/num/int32/abs: cannot make min-int32 into a positive int32 without overflow", _ctx)
      _x_x200 = kk_string_dup(_s_x201, _ctx); /*string*/
      _x_x199 = kk_std_core_exn_throw(_x_x200, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
      return kk_int32_unbox(_x_x199, KK_OWNED, _ctx);
    }
  }
}
 
// Return the absolute value of an integer.
// Returns 0 if the `:int32` is `min-int32`
// (since the negation of `min-int32` equals itself and is still negative)

int32_t kk_std_num_int32_abs0(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> int32 */ 
  bool b_10008 = 0 > i; /*bool*/;
  if (b_10008) {
    bool _match_x155 = (i > kk_std_num_int32_min_int32); /*bool*/;
    if (_match_x155) {
      return (int32_t)((uint32_t)((KK_I32(0))) - (uint32_t)i);
    }
    {
      return (KK_I32(0));
    }
  }
  {
    return i;
  }
}
 
// Wide carry-less multiplication (or _xor_ multiplication) to `(hi,lo)`.
// where `(hi,lo).int == hi.int * 0x1_0000_0000 + lo.uint`
// See also <https://en.wikipedia.org/wiki/Carry-less_product>

kk_std_core_types__tuple2 kk_std_num_int32_clmul__wide(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> (int32, int32) */ 
  return kk_clmul32x_wide(x,y,kk_context());
}
 
// Full 32x32 bit unsigned multiply to `(hi,lo)`.
// where `umul(x,y).uint == x.uint * y.uint`

kk_std_core_types__tuple2 kk_std_num_int32_umul(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> (int32, int32) */ 
  return kk_umul32x_wide(i,j,kk_context());
}
 
// Full 32x32 bit signed multiply to `(hi,lo)`.
// where `imul(x,y).int == x.int * y.int`

kk_std_core_types__tuple2 kk_std_num_int32_imul(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> (int32, int32) */ 
  return kk_imul32x_wide(i,j,kk_context());
}
 
// Truncated division (as in C). See also `(/):(x : int32, y : int32) -> int32`.

int32_t kk_std_num_int32_cdiv(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> exn int32 */ 
  bool _match_x150 = 0 == j; /*bool*/;
  if (_match_x150) {
    kk_box_t _x_x202;
    kk_string_t _x_x203;
    kk_define_string_literal(static, _s_x204, 35, "std/num/int32/cdiv: modulus by zero", _ctx)
    _x_x203 = kk_string_dup(_s_x204, _ctx); /*string*/
    _x_x202 = kk_std_core_exn_throw(_x_x203, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
    return kk_int32_unbox(_x_x202, KK_OWNED, _ctx);
  }
  {
    bool _match_x151 = (j == ((KK_I32(-1)))); /*bool*/;
    if (_match_x151) {
      bool _match_x152 = (i == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x152) {
        kk_box_t _x_x205;
        kk_string_t _x_x206;
        kk_define_string_literal(static, _s_x207, 65, "std/num/int32/cdiv: modulus overflow in cdiv(min-int32, -1.int32)", _ctx)
        _x_x206 = kk_string_dup(_s_x207, _ctx); /*string*/
        _x_x205 = kk_std_core_exn_throw(_x_x206, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
        return kk_int32_unbox(_x_x205, KK_OWNED, _ctx);
      }
      {
        return (i / j);
      }
    }
    {
      return (i / j);
    }
  }
}
 
// Truncated modulus (as in C). See also `(%):(x : int32, y : int32) -> int32`.

int32_t kk_std_num_int32_cmod(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> exn int32 */ 
  bool _match_x147 = 0 == j; /*bool*/;
  if (_match_x147) {
    kk_box_t _x_x208;
    kk_string_t _x_x209;
    kk_define_string_literal(static, _s_x210, 35, "std/num/int32/cmod: modulus by zero", _ctx)
    _x_x209 = kk_string_dup(_s_x210, _ctx); /*string*/
    _x_x208 = kk_std_core_exn_throw(_x_x209, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
    return kk_int32_unbox(_x_x208, KK_OWNED, _ctx);
  }
  {
    bool _match_x148 = (j == ((KK_I32(-1)))); /*bool*/;
    if (_match_x148) {
      bool _match_x149 = (i == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x149) {
        kk_box_t _x_x211;
        kk_string_t _x_x212;
        kk_define_string_literal(static, _s_x213, 65, "std/num/int32/cmod: modulus overflow in cmod(min-int32, -1.int32)", _ctx)
        _x_x212 = kk_string_dup(_s_x213, _ctx); /*string*/
        _x_x211 = kk_std_core_exn_throw(_x_x212, kk_std_core_types__new_None(_ctx), _ctx); /*420*/
        return kk_int32_unbox(_x_x211, KK_OWNED, _ctx);
      }
      {
        return (i % j);
      }
    }
    {
      return (i % j);
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
// * `D/(2^n) == sar(D,n)         `  (with `0 <= n <= 31`)
// * `D%(2^n) == D & ((2^n) - 1)  `  (with `0 <= n <= 31`)
// 
// Note that an interesting edge case is `min-int32 / -1` which equals `min-int32` since in modulo 32-bit
// arithmetic `min-int32 == -1 * min-int32 == -1 * (min-int32 / -1) + (min-int32 % -1)` satisfying property (1).
// Of course `(min-int32 + 1) / -1` is again positive (namely `max-int32`).
// 
// See also _Division and modulus for computer scientists, Daan Leijen, 2001_
// [pdf](https://www.microsoft.com/en-us/research/wp-content/uploads/2016/02/divmodnote-letter.pdf) .
// */

int32_t kk_std_num_int32__lp__fs__rp_(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> int32 */ 
  bool _match_x140 = (y == ((KK_I32(0)))); /*bool*/;
  if (_match_x140) {
    return (KK_I32(0));
  }
  {
    bool _match_x141 = (y == ((KK_I32(-1)))); /*bool*/;
    if (_match_x141) {
      bool _match_x144 = (x == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x144) {
        return x;
      }
      {
        int32_t q = (x / y); /*int32*/;
        int32_t r = (x % y); /*int32*/;
        bool _match_x145 = (r >= ((KK_I32(0)))); /*bool*/;
        if (_match_x145) {
          return q;
        }
        {
          bool _match_x146 = (y > ((KK_I32(0)))); /*bool*/;
          if (_match_x146) {
            return (int32_t)((uint32_t)q - (uint32_t)((KK_I32(1))));
          }
          {
            return (int32_t)((uint32_t)q + (uint32_t)((KK_I32(1))));
          }
        }
      }
    }
    {
      int32_t q_0 = (x / y); /*int32*/;
      int32_t r_0 = (x % y); /*int32*/;
      bool _match_x142 = (r_0 >= ((KK_I32(0)))); /*bool*/;
      if (_match_x142) {
        return q_0;
      }
      {
        bool _match_x143 = (y > ((KK_I32(0)))); /*bool*/;
        if (_match_x143) {
          return (int32_t)((uint32_t)q_0 - (uint32_t)((KK_I32(1))));
        }
        {
          return (int32_t)((uint32_t)q_0 + (uint32_t)((KK_I32(1))));
        }
      }
    }
  }
}
 
// Euclidean-0 modulus. See `(/):(x : int32, y : int32) -> int32` division for more information.

int32_t kk_std_num_int32__lp__perc__rp_(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> int32 */ 
  bool _match_x133 = (y == ((KK_I32(0)))); /*bool*/;
  if (_match_x133) {
    return x;
  }
  {
    bool _match_x134 = (y == ((KK_I32(-1)))); /*bool*/;
    if (_match_x134) {
      bool _match_x137 = (x == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x137) {
        return (KK_I32(0));
      }
      {
        int32_t r = (x % y); /*int32*/;
        bool _match_x138 = (r >= ((KK_I32(0)))); /*bool*/;
        if (_match_x138) {
          return r;
        }
        {
          bool _match_x139 = (y > ((KK_I32(0)))); /*bool*/;
          if (_match_x139) {
            return (int32_t)((uint32_t)r + (uint32_t)y);
          }
          {
            return (int32_t)((uint32_t)r - (uint32_t)y);
          }
        }
      }
    }
    {
      int32_t r_0 = (x % y); /*int32*/;
      bool _match_x135 = (r_0 >= ((KK_I32(0)))); /*bool*/;
      if (_match_x135) {
        return r_0;
      }
      {
        bool _match_x136 = (y > ((KK_I32(0)))); /*bool*/;
        if (_match_x136) {
          return (int32_t)((uint32_t)r_0 + (uint32_t)y);
        }
        {
          return (int32_t)((uint32_t)r_0 - (uint32_t)y);
        }
      }
    }
  }
}

kk_std_core_types__tuple2 kk_std_num_int32_divmod(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> (int32, int32) */ 
  bool _match_x128 = 0 == y; /*bool*/;
  if (_match_x128) {
    return kk_std_core_types__new_Tuple2(kk_int32_box(kk_std_num_int32_zero, _ctx), kk_int32_box(x, _ctx), _ctx);
  }
  {
    bool _match_x129 = (y == ((KK_I32(-1)))); /*bool*/;
    if (_match_x129) {
      bool _match_x131 = (x == kk_std_num_int32_min_int32); /*bool*/;
      if (_match_x131) {
        int32_t _b_x51_67 = (KK_I32(0)); /*int32*/;
        return kk_std_core_types__new_Tuple2(kk_int32_box(x, _ctx), kk_int32_box(_b_x51_67, _ctx), _ctx);
      }
      {
        int32_t q = (x / y); /*int32*/;
        int32_t r = (x % y); /*int32*/;
        bool b_10010 = 0 > r; /*bool*/;
        if (b_10010) {
          bool _match_x132 = 0 < y; /*bool*/;
          if (_match_x132) {
            int32_t _b_x52_68 = (int32_t)((uint32_t)q - (uint32_t)((KK_I32(1)))); /*int32*/;
            int32_t _b_x53_69 = (int32_t)((uint32_t)r + (uint32_t)y); /*int32*/;
            return kk_std_core_types__new_Tuple2(kk_int32_box(_b_x52_68, _ctx), kk_int32_box(_b_x53_69, _ctx), _ctx);
          }
          {
            int32_t _b_x54_70 = (int32_t)((uint32_t)q + (uint32_t)((KK_I32(1)))); /*int32*/;
            int32_t _b_x55_71 = (int32_t)((uint32_t)r - (uint32_t)y); /*int32*/;
            return kk_std_core_types__new_Tuple2(kk_int32_box(_b_x54_70, _ctx), kk_int32_box(_b_x55_71, _ctx), _ctx);
          }
        }
        {
          return kk_std_core_types__new_Tuple2(kk_int32_box(q, _ctx), kk_int32_box(r, _ctx), _ctx);
        }
      }
    }
    {
      int32_t q_0 = (x / y); /*int32*/;
      int32_t r_0 = (x % y); /*int32*/;
      bool b_0_10013 = 0 > r_0; /*bool*/;
      if (b_0_10013) {
        bool _match_x130 = 0 < y; /*bool*/;
        if (_match_x130) {
          int32_t _b_x58_74 = (int32_t)((uint32_t)q_0 - (uint32_t)((KK_I32(1)))); /*int32*/;
          int32_t _b_x59_75 = (int32_t)((uint32_t)r_0 + (uint32_t)y); /*int32*/;
          return kk_std_core_types__new_Tuple2(kk_int32_box(_b_x58_74, _ctx), kk_int32_box(_b_x59_75, _ctx), _ctx);
        }
        {
          int32_t _b_x60_76 = (int32_t)((uint32_t)q_0 + (uint32_t)((KK_I32(1)))); /*int32*/;
          int32_t _b_x61_77 = (int32_t)((uint32_t)r_0 - (uint32_t)y); /*int32*/;
          return kk_std_core_types__new_Tuple2(kk_int32_box(_b_x60_76, _ctx), kk_int32_box(_b_x61_77, _ctx), _ctx);
        }
      }
      {
        return kk_std_core_types__new_Tuple2(kk_int32_box(q_0, _ctx), kk_int32_box(r_0, _ctx), _ctx);
      }
    }
  }
}
 
// monadic lift

kk_box_t kk_std_num_int32_range_fs__mlift_fold_int32_10071(int32_t end, kk_function_t f, int32_t start, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (end : int32, f : (int32, a) -> e a, start : int32, x : a) -> e a */ 
  int32_t _own_x126 = (int32_t)((uint32_t)start + (uint32_t)((KK_I32(1)))); /*int32*/;
  kk_box_t _brw_x127 = kk_std_num_int32_range_fs_fold_int32(_own_x126, end, x, f, _ctx); /*3597*/;
  kk_function_drop(f, _ctx);
  return _brw_x127;
}
 
// Fold over the range `[start,end]` (including `end`).


// lift anonymous function
struct kk_std_num_int32_range_fs_fold_int32_fun216__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  int32_t end_0;
  int32_t start_0;
};
static kk_box_t kk_std_num_int32_range_fs_fold_int32_fun216(kk_function_t _fself, kk_box_t x_1, kk_context_t* _ctx);
static kk_function_t kk_std_num_int32_range_fs_new_fold_int32_fun216(kk_function_t f_0, int32_t end_0, int32_t start_0, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs_fold_int32_fun216__t* _self = kk_function_alloc_as(struct kk_std_num_int32_range_fs_fold_int32_fun216__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int32_range_fs_fold_int32_fun216, kk_context());
  _self->f_0 = f_0;
  _self->end_0 = end_0;
  _self->start_0 = start_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int32_range_fs_fold_int32_fun216(kk_function_t _fself, kk_box_t x_1, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs_fold_int32_fun216__t* _self = kk_function_as(struct kk_std_num_int32_range_fs_fold_int32_fun216__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (int32, 3597) -> 3598 3597 */
  int32_t end_0 = _self->end_0; /* int32 */
  int32_t start_0 = _self->start_0; /* int32 */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(start_0, _ctx);}, {}, _ctx)
  return kk_std_num_int32_range_fs__mlift_fold_int32_10071(end_0, f_0, start_0, x_1, _ctx);
}

kk_box_t kk_std_num_int32_range_fs_fold_int32(int32_t start_0, int32_t end_0, kk_box_t init, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,e> (start : int32, end : int32, init : a, f : (int32, a) -> e a) -> e a */ 
  kk__tailcall: ;
  bool _match_x123 = (start_0 > end_0); /*bool*/;
  if (_match_x123) {
    return init;
  }
  {
    kk_box_t x_0_10075;
    kk_function_t _x_x214 = kk_function_dup(f_0, _ctx); /*(int32, 3597) -> 3598 3597*/
    x_0_10075 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_box_t, kk_context_t*), _x_x214, (_x_x214, start_0, init, _ctx), _ctx); /*3597*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10075, _ctx);
      kk_function_t _x_x215;
      kk_function_dup(f_0, _ctx);
      _x_x215 = kk_std_num_int32_range_fs_new_fold_int32_fun216(f_0, end_0, start_0, _ctx); /*(x@1 : 3597) -> 3598 3597*/
      return kk_std_core_hnd_yield_extend(_x_x215, _ctx);
    }
    {
      int32_t _own_x125 = (int32_t)((uint32_t)start_0 + (uint32_t)((KK_I32(1)))); /*int32*/;
      { // tailcall
        start_0 = _own_x125;
        init = x_0_10075;
        goto kk__tailcall;
      }
    }
  }
}
 
// monadic lift

kk_box_t kk_std_num_int32_range_fs__mlift_fold_while_int32_10072(int32_t end, kk_function_t f, kk_box_t init, int32_t start, kk_std_core_types__maybe _y_x10044, kk_context_t* _ctx) { /* forall<a,e> (end : int32, f : (int32, a) -> e maybe<a>, init : a, start : int32, maybe<a>) -> e a */ 
  if (kk_std_core_types__is_Just(_y_x10044, _ctx)) {
    kk_box_t x = _y_x10044._cons.Just.value;
    kk_box_drop(init, _ctx);
    int32_t _x_x217 = (int32_t)((uint32_t)start + (uint32_t)((KK_I32(1)))); /*int32*/
    return kk_std_num_int32_range_fs_fold_while_int32(_x_x217, end, x, f, _ctx);
  }
  {
    kk_function_drop(f, _ctx);
    return init;
  }
}
 
// Iterate over the range `[start,end]` (including `end`).


// lift anonymous function
struct kk_std_num_int32_range_fs_fold_while_int32_fun220__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  kk_box_t init_0;
  int32_t end_0;
  int32_t start_0;
};
static kk_box_t kk_std_num_int32_range_fs_fold_while_int32_fun220(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_std_num_int32_range_fs_new_fold_while_int32_fun220(kk_function_t f_0, kk_box_t init_0, int32_t end_0, int32_t start_0, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs_fold_while_int32_fun220__t* _self = kk_function_alloc_as(struct kk_std_num_int32_range_fs_fold_while_int32_fun220__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int32_range_fs_fold_while_int32_fun220, kk_context());
  _self->f_0 = f_0;
  _self->init_0 = init_0;
  _self->end_0 = end_0;
  _self->start_0 = start_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int32_range_fs_fold_while_int32_fun220(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs_fold_while_int32_fun220__t* _self = kk_function_as(struct kk_std_num_int32_range_fs_fold_while_int32_fun220__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (int32, 3734) -> 3735 maybe<3734> */
  kk_box_t init_0 = _self->init_0; /* 3734 */
  int32_t end_0 = _self->end_0; /* int32 */
  int32_t start_0 = _self->start_0; /* int32 */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_box_dup(init_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(start_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x221 = kk_std_core_types__maybe_unbox(_b_x81, KK_OWNED, _ctx); /*maybe<3734>*/
  return kk_std_num_int32_range_fs__mlift_fold_while_int32_10072(end_0, f_0, init_0, start_0, _x_x221, _ctx);
}

kk_box_t kk_std_num_int32_range_fs_fold_while_int32(int32_t start_0, int32_t end_0, kk_box_t init_0, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,e> (start : int32, end : int32, init : a, f : (int32, a) -> e maybe<a>) -> e a */ 
  kk__tailcall: ;
  bool _match_x120 = (start_0 > end_0); /*bool*/;
  if (_match_x120) {
    kk_function_drop(f_0, _ctx);
    return init_0;
  }
  {
    kk_std_core_types__maybe x_0_10078;
    kk_function_t _x_x219 = kk_function_dup(f_0, _ctx); /*(int32, 3734) -> 3735 maybe<3734>*/
    kk_box_t _x_x218 = kk_box_dup(init_0, _ctx); /*3734*/
    x_0_10078 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, int32_t, kk_box_t, kk_context_t*), _x_x219, (_x_x219, start_0, _x_x218, _ctx), _ctx); /*maybe<3734>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10078, _ctx);
      return kk_std_core_hnd_yield_extend(kk_std_num_int32_range_fs_new_fold_while_int32_fun220(f_0, init_0, end_0, start_0, _ctx), _ctx);
    }
    if (kk_std_core_types__is_Just(x_0_10078, _ctx)) {
      kk_box_t x_1 = x_0_10078._cons.Just.value;
      kk_box_drop(init_0, _ctx);
      { // tailcall
        int32_t _x_x222 = (int32_t)((uint32_t)start_0 + (uint32_t)((KK_I32(1)))); /*int32*/
        start_0 = _x_x222;
        init_0 = x_1;
        goto kk__tailcall;
      }
    }
    {
      kk_function_drop(f_0, _ctx);
      return init_0;
    }
  }
}
 
// monadic lift

kk_unit_t kk_std_num_int32_range_fs__mlift_lift_for32_4098_10073(kk_function_t action, int32_t end, int32_t i, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<e> (action : (int32) -> e (), end : int32, i : int32, wild_ : ()) -> e () */ 
  int32_t i_0_10016 = (int32_t)((uint32_t)i + (uint32_t)((KK_I32(1)))); /*int32*/;
  kk_std_num_int32_range_fs__lift_for32_4098(action, end, i_0_10016, _ctx); return kk_Unit;
}
 
// lifted local: range/for32, rep


// lift anonymous function
struct kk_std_num_int32_range_fs__lift_for32_4098_fun226__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  int32_t end_0;
  int32_t i_0;
};
static kk_box_t kk_std_num_int32_range_fs__lift_for32_4098_fun226(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx);
static kk_function_t kk_std_num_int32_range_fs__new_lift_for32_4098_fun226(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs__lift_for32_4098_fun226__t* _self = kk_function_alloc_as(struct kk_std_num_int32_range_fs__lift_for32_4098_fun226__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int32_range_fs__lift_for32_4098_fun226, kk_context());
  _self->action_0 = action_0;
  _self->end_0 = end_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int32_range_fs__lift_for32_4098_fun226(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs__lift_for32_4098_fun226__t* _self = kk_function_as(struct kk_std_num_int32_range_fs__lift_for32_4098_fun226__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (int32) -> 3821 () */
  int32_t end_0 = _self->end_0; /* int32 */
  int32_t i_0 = _self->i_0; /* int32 */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(i_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_87 = kk_Unit;
  kk_unit_unbox(_b_x85);
  kk_unit_t _x_x227 = kk_Unit;
  kk_std_num_int32_range_fs__mlift_lift_for32_4098_10073(action_0, end_0, i_0, wild___0_87, _ctx);
  return kk_unit_box(_x_x227);
}

kk_unit_t kk_std_num_int32_range_fs__lift_for32_4098(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx) { /* forall<e> (action : (int32) -> e (), end : int32, i : int32) -> e () */ 
  kk__tailcall: ;
  bool _match_x118 = (i_0 <= end_0); /*bool*/;
  if (_match_x118) {
    kk_unit_t x_10081 = kk_Unit;
    kk_function_t _x_x224 = kk_function_dup(action_0, _ctx); /*(int32) -> 3821 ()*/
    kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_context_t*), _x_x224, (_x_x224, i_0, _ctx), _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x225 = kk_std_core_hnd_yield_extend(kk_std_num_int32_range_fs__new_lift_for32_4098_fun226(action_0, end_0, i_0, _ctx), _ctx); /*2419*/
      kk_unit_unbox(_x_x225); return kk_Unit;
    }
    {
      int32_t i_0_10016_0 = (int32_t)((uint32_t)i_0 + (uint32_t)((KK_I32(1)))); /*int32*/;
      { // tailcall
        i_0 = i_0_10016_0;
        goto kk__tailcall;
      }
    }
  }
  {
    kk_function_drop(action_0, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift

kk_std_core_types__maybe kk_std_num_int32_range_fs__mlift_lift_for_while32_4099_10074(kk_function_t action, int32_t end, int32_t i, kk_std_core_types__maybe _y_x10054, kk_context_t* _ctx) { /* forall<a,e> (action : (int32) -> e maybe<a>, end : int32, i : int32, maybe<a>) -> e maybe<a> */ 
  if (kk_std_core_types__is_Nothing(_y_x10054, _ctx)) {
    int32_t i_0_10020 = (int32_t)((uint32_t)i + (uint32_t)((KK_I32(1)))); /*int32*/;
    return kk_std_num_int32_range_fs__lift_for_while32_4099(action, end, i_0_10020, _ctx);
  }
  {
    kk_box_t x = _y_x10054._cons.Just.value;
    kk_function_drop(action, _ctx);
    return kk_std_core_types__new_Just(x, _ctx);
  }
}
 
// lifted local: range/for-while32, rep


// lift anonymous function
struct kk_std_num_int32_range_fs__lift_for_while32_4099_fun230__t {
  struct kk_function_s _base;
  kk_function_t action_0;
  int32_t end_0;
  int32_t i_0;
};
static kk_box_t kk_std_num_int32_range_fs__lift_for_while32_4099_fun230(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx);
static kk_function_t kk_std_num_int32_range_fs__new_lift_for_while32_4099_fun230(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs__lift_for_while32_4099_fun230__t* _self = kk_function_alloc_as(struct kk_std_num_int32_range_fs__lift_for_while32_4099_fun230__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_num_int32_range_fs__lift_for_while32_4099_fun230, kk_context());
  _self->action_0 = action_0;
  _self->end_0 = end_0;
  _self->i_0 = i_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_num_int32_range_fs__lift_for_while32_4099_fun230(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx) {
  struct kk_std_num_int32_range_fs__lift_for_while32_4099_fun230__t* _self = kk_function_as(struct kk_std_num_int32_range_fs__lift_for_while32_4099_fun230__t*, _fself, _ctx);
  kk_function_t action_0 = _self->action_0; /* (int32) -> 3943 maybe<3942> */
  int32_t end_0 = _self->end_0; /* int32 */
  int32_t i_0 = _self->i_0; /* int32 */
  kk_drop_match(_self, {kk_function_dup(action_0, _ctx);kk_skip_dup(end_0, _ctx);kk_skip_dup(i_0, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _y_x10054_0_91 = kk_std_core_types__maybe_unbox(_b_x89, KK_OWNED, _ctx); /*maybe<3942>*/;
  kk_std_core_types__maybe _x_x231 = kk_std_num_int32_range_fs__mlift_lift_for_while32_4099_10074(action_0, end_0, i_0, _y_x10054_0_91, _ctx); /*maybe<3942>*/
  return kk_std_core_types__maybe_box(_x_x231, _ctx);
}

kk_std_core_types__maybe kk_std_num_int32_range_fs__lift_for_while32_4099(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx) { /* forall<a,e> (action : (int32) -> e maybe<a>, end : int32, i : int32) -> e maybe<a> */ 
  kk__tailcall: ;
  bool _match_x116 = (i_0 <= end_0); /*bool*/;
  if (_match_x116) {
    kk_std_core_types__maybe x_0_10084;
    kk_function_t _x_x228 = kk_function_dup(action_0, _ctx); /*(int32) -> 3943 maybe<3942>*/
    x_0_10084 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, int32_t, kk_context_t*), _x_x228, (_x_x228, i_0, _ctx), _ctx); /*maybe<3942>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__maybe_drop(x_0_10084, _ctx);
      kk_box_t _x_x229 = kk_std_core_hnd_yield_extend(kk_std_num_int32_range_fs__new_lift_for_while32_4099_fun230(action_0, end_0, i_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__maybe_unbox(_x_x229, KK_OWNED, _ctx);
    }
    if (kk_std_core_types__is_Nothing(x_0_10084, _ctx)) {
      int32_t i_0_10020_0 = (int32_t)((uint32_t)i_0 + (uint32_t)((KK_I32(1)))); /*int32*/;
      { // tailcall
        i_0 = i_0_10020_0;
        goto kk__tailcall;
      }
    }
    {
      kk_box_t x_1 = x_0_10084._cons.Just.value;
      kk_function_drop(action_0, _ctx);
      return kk_std_core_types__new_Just(x_1, _ctx);
    }
  }
  {
    kk_function_drop(action_0, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// Create a list with 32-bit integer elements from `lo` to `hi` (including `hi`).

kk_std_core_types__list kk_std_num_int32__trmc_list32(int32_t lo_0, int32_t hi_0, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (lo : int32, hi : int32, ctx<list<int32>>) -> list<int32> */ 
  kk__tailcall: ;
  bool _match_x115 = (lo_0 <= hi_0); /*bool*/;
  if (_match_x115) {
    kk_std_core_types__list _trmc_x10025 = kk_datatype_null(); /*list<int32>*/;
    kk_std_core_types__list _trmc_x10026 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_int32_box(lo_0, _ctx), _trmc_x10025, _ctx); /*list<int32>*/;
    kk_field_addr_t _b_x101_106 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10026, _ctx)->tail, _ctx); /*@field-addr<list<int32>>*/;
    { // tailcall
      int32_t _x_x232 = (int32_t)((uint32_t)lo_0 + (uint32_t)((KK_I32(1)))); /*int32*/
      kk_std_core_types__cctx _x_x233 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10026, _ctx)),_b_x101_106,kk_context()); /*ctx<0>*/
      lo_0 = _x_x232;
      _acc = _x_x233;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x234 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x234, KK_OWNED, _ctx);
  }
}
 
// Create a list with 32-bit integer elements from `lo` to `hi` (including `hi`).

kk_std_core_types__list kk_std_num_int32_list32(int32_t lo_0_0, int32_t hi_0_0, kk_context_t* _ctx) { /* (lo : int32, hi : int32) -> list<int32> */ 
  kk_std_core_types__cctx _x_x235 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_num_int32__trmc_list32(lo_0_0, hi_0_0, _x_x235, _ctx);
}

int32_t kk_std_num_int32_sumacc32(kk_std_core_types__list xs, int32_t acc, kk_context_t* _ctx) { /* (xs : list<int32>, acc : int32) -> int32 */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x236 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x112 = _con_x236->head;
    kk_std_core_types__list xx = _con_x236->tail;
    int32_t x = kk_int32_unbox(_box_x112, KK_BORROWED, _ctx);
    int32_t _own_x114 = (int32_t)((uint32_t)acc + (uint32_t)x); /*int32*/;
    { // tailcall
      xs = xx;
      acc = _own_x114;
      goto kk__tailcall;
    }
  }
  {
    return acc;
  }
}

// initialization
void kk_std_num_int32__init(kk_context_t* _ctx){
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
    kk_std_num_int32_one = (KK_I32(1)); /*int32*/
  }
  {
    kk_std_num_int32_zero = (KK_I32(0)); /*int32*/
  }
  {
    kk_std_num_int32_max_int32 = (KK_I32(2147483647)); /*int32*/
  }
  {
    kk_std_num_int32_min_int32 = (INT32_MIN); /*int32*/
  }
  {
    kk_std_num_int32_bits_int32 = (KK_I32(32)); /*int32*/
  }
}

// termination
void kk_std_num_int32__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_skip_drop(kk_std_num_int32_bits_int32, _ctx);
  kk_skip_drop(kk_std_num_int32_min_int32, _ctx);
  kk_skip_drop(kk_std_num_int32_max_int32, _ctx);
  kk_skip_drop(kk_std_num_int32_zero, _ctx);
  kk_skip_drop(kk_std_num_int32_one, _ctx);
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
