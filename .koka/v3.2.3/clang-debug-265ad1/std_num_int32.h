#pragma once
#ifndef kk_std_num_int32_H
#define kk_std_num_int32_H
// Koka generated module: std/num/int32, koka version: 3.2.3, platform: 64-bit
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

// value declarations

extern int32_t kk_std_num_int32_one;

extern int32_t kk_std_num_int32_zero;
 
// Convert a boolean to an `:int32`.

static inline int32_t kk_std_num_int32_bool_fs_int32(bool b, kk_context_t* _ctx) { /* (b : bool) -> int32 */ 
  if (b) {
    return kk_std_num_int32_one;
  }
  {
    return kk_std_num_int32_zero;
  }
}
 
// Create an `:int32` from the give `hi` and `lo` 16-bit numbers.
// Preserves the sign of `hi`.

static inline int32_t kk_std_num_int32_hilo_fs_int32(int32_t hi_0, int32_t lo_0, kk_context_t* _ctx) { /* (hi : int32, lo : int32) -> int32 */ 
  int32_t _x_x166 = kk_shl32(hi_0,((KK_I32(16)))); /*int32*/
  int32_t _x_x167 = (lo_0 & ((KK_I32(65535)))); /*int32*/
  return (_x_x166 | _x_x167);
}

extern int32_t kk_std_num_int32_max_int32;

extern int32_t kk_std_num_int32_min_int32;

extern int32_t kk_std_num_int32_bits_int32;
 
// Convenient shorthand to `int32`, e.g. `1234.i32`

static inline int32_t kk_std_num_int32_i32(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> int32 */ 
  return kk_integer_clamp32(i,kk_context());
}
 
// Convert an `:int32` to a boolean.

static inline bool kk_std_num_int32_bool(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> bool */ 
  return (i != kk_std_num_int32_zero);
}
 
// Convert an `:int32` to an `:int` but interpret the `:int32` as a 32-bit unsigned value.

static inline kk_integer_t kk_std_num_int32_uint(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> int */ 
  bool _match_x165 = 0 > i; /*bool*/;
  if (_match_x165) {
    kk_integer_t y_10001 = kk_integer_from_int(i,kk_context()); /*int*/;
    return kk_integer_add((kk_integer_from_str("4294967296", _ctx)),y_10001,kk_context());
  }
  {
    return kk_integer_from_int(i,kk_context());
  }
}
 
// Convert a pair `(hi,lo)` to a signed integer,
// where `(hi,lo).int == hi.int * 0x1_0000_0000 + lo.uint`

static inline kk_integer_t kk_std_num_int32_hilo_fs_int(kk_std_core_types__tuple2 _pat_x419__19, kk_context_t* _ctx) { /* ((int32, int32)) -> int */ 
  {
    kk_box_t _box_x0 = _pat_x419__19.fst;
    kk_box_t _box_x1 = _pat_x419__19.snd;
    int32_t hi_0 = kk_int32_unbox(_box_x0, KK_BORROWED, _ctx);
    int32_t lo_0 = kk_int32_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_drop(_pat_x419__19, _ctx);
    kk_integer_t x_10002;
    kk_integer_t _x_x168 = kk_integer_from_int(hi_0,kk_context()); /*int*/
    x_10002 = kk_integer_mul(_x_x168,(kk_integer_from_str("4294967296", _ctx)),kk_context()); /*int*/
    kk_integer_t y_10003 = kk_std_num_int32_uint(lo_0, _ctx); /*int*/;
    return kk_integer_add(x_10002,y_10003,kk_context());
  }
}
 
// Convert a pair `(hi,lo)` to an unsigned integer,
// where `(hi,lo).uint == hi.uint * 0x1_0000_0000 + lo.uint`

static inline kk_integer_t kk_std_num_int32_hilo_fs_uint(kk_std_core_types__tuple2 _pat_x424__20, kk_context_t* _ctx) { /* ((int32, int32)) -> int */ 
  {
    kk_box_t _box_x2 = _pat_x424__20.fst;
    kk_box_t _box_x3 = _pat_x424__20.snd;
    int32_t hi_0 = kk_int32_unbox(_box_x2, KK_BORROWED, _ctx);
    int32_t lo_0 = kk_int32_unbox(_box_x3, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_drop(_pat_x424__20, _ctx);
    kk_integer_t x_10004;
    kk_integer_t _x_x169 = kk_std_num_int32_uint(hi_0, _ctx); /*int*/
    x_10004 = kk_integer_mul(_x_x169,(kk_integer_from_str("4294967296", _ctx)),kk_context()); /*int*/
    kk_integer_t y_10005 = kk_std_num_int32_uint(lo_0, _ctx); /*int*/;
    return kk_integer_add(x_10004,y_10005,kk_context());
  }
}
 
// Convert an `:int32` to a string

static inline kk_string_t kk_std_num_int32_show(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> string */ 
  kk_integer_t _x_x170 = kk_integer_from_int(i,kk_context()); /*int*/
  return kk_std_core_int_show(_x_x170, _ctx);
}

kk_string_t kk_std_num_int32_show_hex(int32_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx); /* (i : int32, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 

int32_t kk_std_num_int32_uint32(kk_integer_t i, kk_context_t* _ctx); /* (i : int) -> int32 */ 

kk_string_t kk_std_num_int32_show_hex32(int32_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx); /* (i : int32, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
 
// Compare the argument against zero.

static inline kk_std_core_types__order kk_std_num_int32_sign(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> order */ 
  bool _match_x160 = 0 < i; /*bool*/;
  if (_match_x160) {
    return kk_std_core_types__new_Gt(_ctx);
  }
  {
    bool _match_x161 = 0 > i; /*bool*/;
    if (_match_x161) {
      return kk_std_core_types__new_Lt(_ctx);
    }
    {
      return kk_std_core_types__new_Eq(_ctx);
    }
  }
}
 
// Returns `true` if the integer `i`  is an odd number.

static inline bool kk_std_num_int32_is_odd(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> bool */ 
  int32_t _x_x194 = (i & ((KK_I32(1)))); /*int32*/
  return (_x_x194 == ((KK_I32(1))));
}
 
// Returns `true` if the integer `i`  is an even number.

static inline bool kk_std_num_int32_is_even(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> bool */ 
  int32_t _x_x195 = (i & ((KK_I32(1)))); /*int32*/
  return (_x_x195 == ((KK_I32(0))));
}
 
// Increment a 32-bit integer.

static inline int32_t kk_std_num_int32_inc(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> int32 */ 
  return (int32_t)((uint32_t)i + (uint32_t)((KK_I32(1))));
}
 
// Decrement a 32-bit integer.

static inline int32_t kk_std_num_int32_dec(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> int32 */ 
  return (int32_t)((uint32_t)i - (uint32_t)((KK_I32(1))));
}

static inline kk_std_core_types__order kk_std_num_int32_cmp(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> order */ 
  bool _match_x158 = (x < y); /*bool*/;
  if (_match_x158) {
    return kk_std_core_types__new_Lt(_ctx);
  }
  {
    bool _match_x159 = (x > y); /*bool*/;
    if (_match_x159) {
      return kk_std_core_types__new_Gt(_ctx);
    }
    {
      return kk_std_core_types__new_Eq(_ctx);
    }
  }
}
 
// Take the bitwise _xor_ of two `:int32`s

static inline int32_t kk_std_num_int32__lp__hat__rp_(int32_t x, int32_t y, kk_context_t* _ctx) { /* (x : int32, y : int32) -> int32 */ 
  return (x ^ y);
}
 
// Negate a 32-bit integer

static inline int32_t kk_std_num_int32_negate(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> int32 */ 
  return (int32_t)((uint32_t)((KK_I32(0))) - (uint32_t)i);
}

int32_t kk_std_num_int32_abs(int32_t i, kk_context_t* _ctx); /* (i : int32) -> exn int32 */ 

int32_t kk_std_num_int32_abs0(int32_t i, kk_context_t* _ctx); /* (i : int32) -> int32 */ 
 
// Shift an `:int32` `i` to the left by `n & 31` bits.

static inline int32_t kk_std_num_int32_shl(int32_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int32, shift : int) -> int32 */ 
  return kk_shl32(i,(kk_integer_clamp32(shift,kk_context())));
}
 
// Logical shift an `:int32` to the right by `n % 32` bits. Shift in zeros from the left.

static inline int32_t kk_std_num_int32_shr(int32_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int32, shift : int) -> int32 */ 
  return (int32_t)kk_shr32(i,(kk_integer_clamp32(shift,kk_context())));
}
 
// Arithmetic shift an `:int32` to the right by `n % 32` bits. Shifts in the sign bit from the left.

static inline int32_t kk_std_num_int32_sar(int32_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int32, shift : int) -> int32 */ 
  return kk_sar32(i,(kk_integer_clamp32(shift,kk_context())));
}
 
// Return the top 16-bits of an `:int32`.
// Preserves the sign.

static inline int32_t kk_std_num_int32_hi(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> int32 */ 
  return kk_sar32(i,((KK_I32(16))));
}
 
// Return the low 16-bits of an `:int32`.

static inline int32_t kk_std_num_int32_lo(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> int32 */ 
  return (i & ((KK_I32(65535))));
}
 
// Bitwise rotate an `:int32` `n % 32` bits to the left.

static inline int32_t kk_std_num_int32_rotl(int32_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int32, shift : int) -> int32 */ 
  return (int32_t)kk_bits_rotl32(i,(kk_integer_clamp32(shift,kk_context())));
}
 
// Bitwise rotate an `:int32` `n % 32` bits to the right.

static inline int32_t kk_std_num_int32_rotr(int32_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int32, shift : int) -> int32 */ 
  return (int32_t)kk_bits_rotr32(i,(kk_integer_clamp32(shift,kk_context())));
}

kk_std_core_types__tuple2 kk_std_num_int32_clmul__wide(int32_t x, int32_t y, kk_context_t* _ctx); /* (x : int32, y : int32) -> (int32, int32) */ 
 
// Return the minimum of two integers

static inline int32_t kk_std_num_int32_min(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> int32 */ 
  bool _match_x154 = (i <= j); /*bool*/;
  if (_match_x154) {
    return i;
  }
  {
    return j;
  }
}
 
// Return the maximum of two integers

static inline int32_t kk_std_num_int32_max(int32_t i, int32_t j, kk_context_t* _ctx) { /* (i : int32, j : int32) -> int32 */ 
  bool _match_x153 = (i >= j); /*bool*/;
  if (_match_x153) {
    return i;
  }
  {
    return j;
  }
}

kk_std_core_types__tuple2 kk_std_num_int32_umul(int32_t i, int32_t j, kk_context_t* _ctx); /* (i : int32, j : int32) -> (int32, int32) */ 

kk_std_core_types__tuple2 kk_std_num_int32_imul(int32_t i, int32_t j, kk_context_t* _ctx); /* (i : int32, j : int32) -> (int32, int32) */ 

int32_t kk_std_num_int32_cdiv(int32_t i, int32_t j, kk_context_t* _ctx); /* (i : int32, j : int32) -> exn int32 */ 

int32_t kk_std_num_int32_cmod(int32_t i, int32_t j, kk_context_t* _ctx); /* (i : int32, j : int32) -> exn int32 */ 
 
// Negate an 32-bit integer

static inline int32_t kk_std_num_int32__lp__tilde__rp_(int32_t i, kk_context_t* _ctx) { /* (i : int32) -> int32 */ 
  return (int32_t)((uint32_t)((KK_I32(0))) - (uint32_t)i);
}

int32_t kk_std_num_int32__lp__fs__rp_(int32_t x, int32_t y, kk_context_t* _ctx); /* (x : int32, y : int32) -> int32 */ 

int32_t kk_std_num_int32__lp__perc__rp_(int32_t x, int32_t y, kk_context_t* _ctx); /* (x : int32, y : int32) -> int32 */ 

kk_std_core_types__tuple2 kk_std_num_int32_divmod(int32_t x, int32_t y, kk_context_t* _ctx); /* (x : int32, y : int32) -> (int32, int32) */ 

kk_box_t kk_std_num_int32_range_fs__mlift_fold_int32_10071(int32_t end, kk_function_t f, int32_t start, kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (end : int32, f : (int32, a) -> e a, start : int32, x : a) -> e a */ 

kk_box_t kk_std_num_int32_range_fs_fold_int32(int32_t start_0, int32_t end_0, kk_box_t init, kk_function_t f_0, kk_context_t* _ctx); /* forall<a,e> (start : int32, end : int32, init : a, f : (int32, a) -> e a) -> e a */ 
 
// Fold over the 32-bit integers `0` to `n - 1`.

static inline kk_box_t kk_std_num_int32_fold_int32(int32_t n, kk_box_t init, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (n : int32, init : a, f : (int32, a) -> e a) -> e a */ 
  int32_t _own_x122 = (int32_t)((uint32_t)n - (uint32_t)((KK_I32(1)))); /*int32*/;
  return kk_std_num_int32_range_fs_fold_int32(kk_std_num_int32_zero, _own_x122, init, f, _ctx);
}

kk_box_t kk_std_num_int32_range_fs__mlift_fold_while_int32_10072(int32_t end, kk_function_t f, kk_box_t init, int32_t start, kk_std_core_types__maybe _y_x10044, kk_context_t* _ctx); /* forall<a,e> (end : int32, f : (int32, a) -> e maybe<a>, init : a, start : int32, maybe<a>) -> e a */ 

kk_box_t kk_std_num_int32_range_fs_fold_while_int32(int32_t start_0, int32_t end_0, kk_box_t init_0, kk_function_t f_0, kk_context_t* _ctx); /* forall<a,e> (start : int32, end : int32, init : a, f : (int32, a) -> e maybe<a>) -> e a */ 
 
// Iterate over the 32-bit integers `0` to `n - 1`.

static inline kk_box_t kk_std_num_int32_fold_while_int32(int32_t n, kk_box_t init, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (n : int32, init : a, f : (int32, a) -> e maybe<a>) -> e a */ 
  int32_t _x_x223 = (int32_t)((uint32_t)n - (uint32_t)((KK_I32(1)))); /*int32*/
  return kk_std_num_int32_range_fs_fold_while_int32(kk_std_num_int32_zero, _x_x223, init, f, _ctx);
}

kk_unit_t kk_std_num_int32_range_fs__mlift_lift_for32_4098_10073(kk_function_t action, int32_t end, int32_t i, kk_unit_t wild__, kk_context_t* _ctx); /* forall<e> (action : (int32) -> e (), end : int32, i : int32, wild_ : ()) -> e () */ 

kk_unit_t kk_std_num_int32_range_fs__lift_for32_4098(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx); /* forall<e> (action : (int32) -> e (), end : int32, i : int32) -> e () */ 
 
// Executes `action`  for each integer between `start`  upto `end`  (including both `start`  and `end` ).
// If `start > end`  the function returns without any call to `action` .

static inline kk_unit_t kk_std_num_int32_range_fs_for32(int32_t start, int32_t end, kk_function_t action, kk_context_t* _ctx) { /* forall<e> (start : int32, end : int32, action : (int32) -> e ()) -> e () */ 
  kk_std_num_int32_range_fs__lift_for32_4098(action, end, start, _ctx); return kk_Unit;
}

static inline kk_unit_t kk_std_num_int32_for32(int32_t n, kk_function_t action, kk_context_t* _ctx) { /* forall<e> (n : int32, action : (int32) -> e ()) -> e () */ 
  int32_t end_10018 = (int32_t)((uint32_t)n - (uint32_t)((KK_I32(1)))); /*int32*/;
  kk_std_num_int32_range_fs__lift_for32_4098(action, end_10018, kk_std_num_int32_zero, _ctx); return kk_Unit;
}

kk_std_core_types__maybe kk_std_num_int32_range_fs__mlift_lift_for_while32_4099_10074(kk_function_t action, int32_t end, int32_t i, kk_std_core_types__maybe _y_x10054, kk_context_t* _ctx); /* forall<a,e> (action : (int32) -> e maybe<a>, end : int32, i : int32, maybe<a>) -> e maybe<a> */ 

kk_std_core_types__maybe kk_std_num_int32_range_fs__lift_for_while32_4099(kk_function_t action_0, int32_t end_0, int32_t i_0, kk_context_t* _ctx); /* forall<a,e> (action : (int32) -> e maybe<a>, end : int32, i : int32) -> e maybe<a> */ 
 
// Executes `action`  for each integer between `start`  upto `end`  (including both `start`  and `end` ).
// If `start > end`  the function returns without any call to `action` .
// If `action` returns `Just`, the iteration is stopped and the result returned

static inline kk_std_core_types__maybe kk_std_num_int32_range_fs_for_while32(int32_t start, int32_t end, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e> (start : int32, end : int32, action : (int32) -> e maybe<a>) -> e maybe<a> */ 
  return kk_std_num_int32_range_fs__lift_for_while32_4099(action, end, start, _ctx);
}

static inline kk_std_core_types__maybe kk_std_num_int32_for_while32(int32_t n, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e> (n : int32, action : (int32) -> e maybe<a>) -> e maybe<a> */ 
  int32_t end_10022 = (int32_t)((uint32_t)n - (uint32_t)((KK_I32(1)))); /*int32*/;
  return kk_std_num_int32_range_fs__lift_for_while32_4099(action, end_10022, kk_std_num_int32_zero, _ctx);
}

kk_std_core_types__list kk_std_num_int32__trmc_list32(int32_t lo_0, int32_t hi_0, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* (lo : int32, hi : int32, ctx<list<int32>>) -> list<int32> */ 

kk_std_core_types__list kk_std_num_int32_list32(int32_t lo_0_0, int32_t hi_0_0, kk_context_t* _ctx); /* (lo : int32, hi : int32) -> list<int32> */ 

int32_t kk_std_num_int32_sumacc32(kk_std_core_types__list xs, int32_t acc, kk_context_t* _ctx); /* (xs : list<int32>, acc : int32) -> int32 */ 

static inline int32_t kk_std_num_int32_sum32(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int32>) -> int32 */ 
  int32_t _own_x113 = (KK_I32(0)); /*int32*/;
  return kk_std_num_int32_sumacc32(xs, _own_x113, _ctx);
}

void kk_std_num_int32__init(kk_context_t* _ctx);


void kk_std_num_int32__done(kk_context_t* _ctx);

#endif // header
