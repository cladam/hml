#pragma once
#ifndef kk_std_num_int64_H
#define kk_std_num_int64_H
// Koka generated module: std/num/int64, koka version: 3.2.3, platform: 64-bit
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

int64_t kk_std_num_int64_int64(kk_integer_t i, kk_context_t* _ctx); /* (i : int) -> int64 */ 

extern int64_t kk_std_num_int64_one;

extern int64_t kk_std_num_int64_zero;
 
// Convert a boolean to an `:int64`.

static inline int64_t kk_std_num_int64_bool_fs_int64(bool b, kk_context_t* _ctx) { /* (b : bool) -> int64 */ 
  if (b) {
    return kk_std_num_int64_one;
  }
  {
    return kk_std_num_int64_zero;
  }
}
 
// Create an `:int64` from the given `hi` and `lo` numbers lowest 32-bits.
// Preserves the sign of `hi`.

static inline int64_t kk_std_num_int64_hilo_fs_int64(int64_t hi_0, int64_t lo_0, kk_context_t* _ctx) { /* (hi : int64, lo : int64) -> int64 */ 
  int64_t _x_x275;
  int64_t _x_x276 = (KK_I64(32)); /*int64*/
  _x_x275 = kk_shl64(hi_0,_x_x276); /*int64*/
  int64_t _x_x277;
  int64_t _x_x278 = (KK_I64(4294967295)); /*int64*/
  _x_x277 = lo_0 & _x_x278; /*int64*/
  return _x_x275 | _x_x277;
}

extern int64_t kk_std_num_int64_max_int64;

extern int64_t kk_std_num_int64_min_int64;

extern int64_t kk_std_num_int64_bits_int64;
 
// Convenient shorthand to `int64`, e.g. `1234.i64`

static inline int64_t kk_std_num_int64_i64(kk_integer_t i, kk_context_t* _ctx) { /* (i : int) -> int64 */ 
  return kk_std_num_int64_int64(i, _ctx);
}
 
// Convert an `:int64` to a boolean.

static inline bool kk_std_num_int64_bool(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> bool */ 
  return (i != kk_std_num_int64_zero);
}
 
// Return the top 32-bits of an `:int64`.
// Preserves the sign.

static inline int64_t kk_std_num_int64_hi(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> int64 */ 
  int64_t _x_x279 = (KK_I64(32)); /*int64*/
  return kk_sar64(i,_x_x279);
}
 
// Return the low 32-bits of an `:int64`.

static inline int64_t kk_std_num_int64_lo(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> int64 */ 
  int64_t _x_x280 = (KK_I64(4294967295)); /*int64*/
  return i & _x_x280;
}
 
// Convert an `:int64` to an `:int` but interpret the `:int64` as a 64-bit unsigned value.

static inline kk_integer_t kk_std_num_int64_int64_fs_uint(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> int */ 
  bool _match_x273 = 0 > i; /*bool*/;
  if (_match_x273) {
    kk_integer_t y_10001 = kk_integer_from_int64(i,kk_context()); /*int*/;
    return kk_integer_add((kk_integer_from_str("18446744073709551616", _ctx)),y_10001,kk_context());
  }
  {
    return kk_integer_from_int64(i,kk_context());
  }
}
 
// Convert a pair `(hi,lo)` to an signed integer,
// where `(hi,lo).int == hi.int * 0x1_0000_0000_0000_0000 + lo.uint`

static inline kk_integer_t kk_std_num_int64_hilo_fs_int(kk_std_core_types__tuple2 _pat_x445__19, kk_context_t* _ctx) { /* ((int64, int64)) -> int */ 
  {
    kk_box_t _box_x0 = _pat_x445__19.fst;
    kk_box_t _box_x1 = _pat_x445__19.snd;
    int64_t hi_0 = kk_int64_unbox(_box_x0, KK_BORROWED, _ctx);
    int64_t lo_0 = kk_int64_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_drop(_pat_x445__19, _ctx);
    kk_integer_t x_10002;
    kk_integer_t _x_x281 = kk_integer_from_int64(hi_0,kk_context()); /*int*/
    x_10002 = kk_integer_mul(_x_x281,(kk_integer_from_str("18446744073709551616", _ctx)),kk_context()); /*int*/
    kk_integer_t y_10003 = kk_std_num_int64_int64_fs_uint(lo_0, _ctx); /*int*/;
    return kk_integer_add(x_10002,y_10003,kk_context());
  }
}
 
// Convert a pair `(hi,lo)` to an unsigned integer,
// where `(hi,lo).uint == hi.uint * 0x1_0000_0000_0000_0000 + lo.uint`

static inline kk_integer_t kk_std_num_int64_hilo_fs_uint(kk_std_core_types__tuple2 _pat_x450__20, kk_context_t* _ctx) { /* ((int64, int64)) -> int */ 
  {
    kk_box_t _box_x2 = _pat_x450__20.fst;
    kk_box_t _box_x3 = _pat_x450__20.snd;
    int64_t hi_0 = kk_int64_unbox(_box_x2, KK_BORROWED, _ctx);
    int64_t lo_0 = kk_int64_unbox(_box_x3, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_drop(_pat_x450__20, _ctx);
    kk_integer_t x_10004;
    kk_integer_t _x_x282 = kk_std_num_int64_int64_fs_uint(hi_0, _ctx); /*int*/
    x_10004 = kk_integer_mul(_x_x282,(kk_integer_from_str("18446744073709551616", _ctx)),kk_context()); /*int*/
    kk_integer_t y_10005 = kk_std_num_int64_int64_fs_uint(lo_0, _ctx); /*int*/;
    return kk_integer_add(x_10004,y_10005,kk_context());
  }
}
 
// Convert an `:int64` to a string

static inline kk_string_t kk_std_num_int64_show(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> string */ 
  kk_integer_t _x_x283 = kk_integer_from_int64(i,kk_context()); /*int*/
  return kk_std_core_int_show(_x_x283, _ctx);
}

int64_t kk_std_num_int64_int_fs_uint64(kk_integer_t i, kk_context_t* _ctx); /* (i : int) -> int64 */ 

kk_string_t kk_std_num_int64_show_hex(int64_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx); /* (i : int64, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 

kk_string_t kk_std_num_int64_show_hex64(int64_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx); /* (i : int64, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
 
// Compare a 64-integer to zero.

static inline kk_std_core_types__order kk_std_num_int64_sign(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> order */ 
  bool _match_x268 = 0 < i; /*bool*/;
  if (_match_x268) {
    return kk_std_core_types__new_Gt(_ctx);
  }
  {
    bool _match_x269 = 0 > i; /*bool*/;
    if (_match_x269) {
      return kk_std_core_types__new_Lt(_ctx);
    }
    {
      return kk_std_core_types__new_Eq(_ctx);
    }
  }
}
 
// Returns `true` if the integer `i`  is an odd number.

static inline bool kk_std_num_int64_is_odd(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> bool */ 
  int64_t _x_x307 = i & kk_std_num_int64_one; /*int64*/
  return (_x_x307 == kk_std_num_int64_one);
}
 
// Returns `true` if the integer `i`  is an even number.

static inline bool kk_std_num_int64_is_even(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> bool */ 
  int64_t _x_x308 = i & kk_std_num_int64_one; /*int64*/
  return (_x_x308 == kk_std_num_int64_zero);
}
 
// Increment a 64-bit integer.

static inline int64_t kk_std_num_int64_inc(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> int64 */ 
  int64_t _x_x309 = (KK_I64(1)); /*int64*/
  return (int64_t)((uint64_t)i + (uint64_t)_x_x309);
}
 
// Decrement a 64-bit integer.

static inline int64_t kk_std_num_int64_dec(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> int64 */ 
  int64_t _x_x310 = (KK_I64(1)); /*int64*/
  return (int64_t)((uint64_t)i - (uint64_t)_x_x310);
}

static inline kk_std_core_types__order kk_std_num_int64_cmp(int64_t x, int64_t y, kk_context_t* _ctx) { /* (x : int64, y : int64) -> order */ 
  bool _match_x266 = (x < y); /*bool*/;
  if (_match_x266) {
    return kk_std_core_types__new_Lt(_ctx);
  }
  {
    bool _match_x267 = (x > y); /*bool*/;
    if (_match_x267) {
      return kk_std_core_types__new_Gt(_ctx);
    }
    {
      return kk_std_core_types__new_Eq(_ctx);
    }
  }
}
 
// Take the bitwise _xor_ of two `:int64`s

static inline int64_t kk_std_num_int64__lp__hat__rp_(int64_t x, int64_t y, kk_context_t* _ctx) { /* (x : int64, y : int64) -> int64 */ 
  return x ^ y;
}
 
// Negate a 64-bit integer

static inline int64_t kk_std_num_int64_negate(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> int64 */ 
  int64_t _x_x311 = (KK_I64(0)); /*int64*/
  return (int64_t)((uint64_t)_x_x311 - (uint64_t)i);
}

int64_t kk_std_num_int64_abs(int64_t i, kk_context_t* _ctx); /* (i : int64) -> exn int64 */ 

int64_t kk_std_num_int64_abs0(int64_t i, kk_context_t* _ctx); /* (i : int64) -> int64 */ 
 
// Shift an `:int64` `i` to the left by `n % 64` bits.

static inline int64_t kk_std_num_int64_shl(int64_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int64, shift : int) -> int64 */ 
  int64_t _x_x322 = kk_std_num_int64_int64(shift, _ctx); /*int64*/
  return kk_shl64(i,_x_x322);
}
 
// Logical shift an `:int64` to the right by `n % 64` bits. Shift in zeros from the left.

static inline int64_t kk_std_num_int64_shr(int64_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int64, shift : int) -> int64 */ 
  int64_t _x_x323 = kk_std_num_int64_int64(shift, _ctx); /*int64*/
  return (int64_t)kk_shr64(i,_x_x323);
}
 
// Arithmetic shift an `:int64` to the right by `n % 64` bits. Shift in the sign bit from the left.

static inline int64_t kk_std_num_int64_sar(int64_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int64, shift : int) -> int64 */ 
  int64_t _x_x324 = kk_std_num_int64_int64(shift, _ctx); /*int64*/
  return kk_sar64(i,_x_x324);
}
 
// Bitwise rotate an `:int64` `n % 64` bits to the left.

static inline int64_t kk_std_num_int64_rotl(int64_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int64, shift : int) -> int64 */ 
  int64_t _x_x325 = kk_std_num_int64_int64(shift, _ctx); /*int64*/
  return (int64_t)kk_bits_rotl64(i,(int)_x_x325);
}
 
// Bitwise rotate an `:int64` `n % 64` bits to the right.

static inline int64_t kk_std_num_int64_rotr(int64_t i, kk_integer_t shift, kk_context_t* _ctx) { /* (i : int64, shift : int) -> int64 */ 
  int64_t _x_x326 = kk_std_num_int64_int64(shift, _ctx); /*int64*/
  return (int64_t)kk_bits_rotr64(i,(int)_x_x326);
}
 
// Count number of 1-bits.

static inline kk_integer_t kk_std_num_int64_popcount(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> int */ 
  int64_t _x_x327 = (int64_t)kk_bits_popcount64(i); /*int64*/
  return kk_integer_from_int64(_x_x327,kk_context());
}

kk_std_core_types__tuple2 kk_std_num_int64_clmul_wide(int64_t x, int64_t y, kk_context_t* _ctx); /* (x : int64, y : int64) -> (int64, int64) */ 
 
// Return the minimum of two integers

static inline int64_t kk_std_num_int64_min(int64_t i, int64_t j, kk_context_t* _ctx) { /* (i : int64, j : int64) -> int64 */ 
  bool _match_x262 = (i <= j); /*bool*/;
  if (_match_x262) {
    return i;
  }
  {
    return j;
  }
}
 
// Return the maximum of two integers

static inline int64_t kk_std_num_int64_max(int64_t i, int64_t j, kk_context_t* _ctx) { /* (i : int64, j : int64) -> int64 */ 
  bool _match_x261 = (i >= j); /*bool*/;
  if (_match_x261) {
    return i;
  }
  {
    return j;
  }
}

kk_std_core_types__tuple2 kk_std_num_int64_umul(int64_t i, int64_t j, kk_context_t* _ctx); /* (i : int64, j : int64) -> (int64, int64) */ 

kk_std_core_types__tuple2 kk_std_num_int64_imul(int64_t i, int64_t j, kk_context_t* _ctx); /* (i : int64, j : int64) -> (int64, int64) */ 

int64_t kk_std_num_int64_cdiv(int64_t i, int64_t j, kk_context_t* _ctx); /* (i : int64, j : int64) -> exn int64 */ 

int64_t kk_std_num_int64_cmod(int64_t i, int64_t j, kk_context_t* _ctx); /* (i : int64, j : int64) -> exn int64 */ 
 
// Negate an 64-bit integer

static inline int64_t kk_std_num_int64__lp__tilde__rp_(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> int64 */ 
  int64_t _x_x354 = (KK_I64(0)); /*int64*/
  return (int64_t)((uint64_t)_x_x354 - (uint64_t)i);
}

int64_t kk_std_num_int64__lp__fs__rp_(int64_t x, int64_t y, kk_context_t* _ctx); /* (x : int64, y : int64) -> int64 */ 

int64_t kk_std_num_int64__lp__perc__rp_(int64_t x, int64_t y, kk_context_t* _ctx); /* (x : int64, y : int64) -> int64 */ 

kk_std_core_types__tuple2 kk_std_num_int64_divmod(int64_t x, int64_t y, kk_context_t* _ctx); /* (x : int64, y : int64) -> (int64, int64) */ 

kk_box_t kk_std_num_int64_range_fs__mlift_fold_int64_10100(int64_t end, kk_function_t f, int64_t start, kk_box_t x, kk_context_t* _ctx); /* forall<a,e> (end : int64, f : (int64, a) -> e a, start : int64, x : a) -> e a */ 

kk_box_t kk_std_num_int64_range_fs_fold_int64(int64_t start_0, int64_t end_0, kk_box_t init, kk_function_t f_0, kk_context_t* _ctx); /* forall<a,e> (start : int64, end : int64, init : a, f : (int64, a) -> e a) -> e a */ 

static inline kk_box_t kk_std_num_int64_fold_int64(int64_t n, kk_box_t init, kk_function_t f, kk_context_t* _ctx) { /* forall<a,e> (n : int64, init : a, f : (int64, a) -> e a) -> e a */ 
  int64_t _x_x386;
  int64_t _x_x387 = (KK_I64(1)); /*int64*/
  _x_x386 = (int64_t)((uint64_t)n - (uint64_t)_x_x387); /*int64*/
  return kk_std_num_int64_range_fs_fold_int64(kk_std_num_int64_zero, _x_x386, init, f, _ctx);
}

kk_std_core_types__maybe kk_std_num_int64_range_fs__mlift_lift_for_while64_4245_10101(kk_function_t action, int64_t end, int64_t i, kk_std_core_types__maybe _y_x10082, kk_context_t* _ctx); /* forall<a,e> (action : (int64) -> e maybe<a>, end : int64, i : int64, maybe<a>) -> e maybe<a> */ 

kk_std_core_types__maybe kk_std_num_int64_range_fs__lift_for_while64_4245(kk_function_t action_0, int64_t end_0, int64_t i_0, kk_context_t* _ctx); /* forall<a,e> (action : (int64) -> e maybe<a>, end : int64, i : int64) -> e maybe<a> */ 
 
// Executes `action`  for each integer between `start`  upto `end`  (including both `start`  and `end` ).
// If `start > end`  the function returns without any call to `action` .
// If `action` returns `Just`, the iteration is stopped and the result returned

static inline kk_std_core_types__maybe kk_std_num_int64_range_fs_for_while64(int64_t start, int64_t end, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e> (start : int64, end : int64, action : (int64) -> e maybe<a>) -> e maybe<a> */ 
  kk_function_t _x_x394 = kk_function_dup(action, _ctx); /*(int64) -> 3750 maybe<3749>*/
  return kk_std_num_int64_range_fs__lift_for_while64_4245(_x_x394, end, start, _ctx);
}

static inline kk_std_core_types__maybe kk_std_num_int64_for_while64(int64_t n, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e> (n : int64, action : (int64) -> e maybe<a>) -> e maybe<a> */ 
  int64_t end_10020;
  int64_t _x_x395 = (KK_I64(1)); /*int64*/
  end_10020 = (int64_t)((uint64_t)n - (uint64_t)_x_x395); /*int64*/
  kk_function_t _x_x396 = kk_function_dup(action, _ctx); /*(int64) -> 3784 maybe<3783>*/
  return kk_std_num_int64_range_fs__lift_for_while64_4245(_x_x396, end_10020, kk_std_num_int64_zero, _ctx);
}

kk_std_core_types__list kk_std_num_int64__trmc_list64(int64_t lo_0, int64_t hi_0, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* (lo : int64, hi : int64, ctx<list<int64>>) -> list<int64> */ 

kk_std_core_types__list kk_std_num_int64_list64(int64_t lo_0_0, int64_t hi_0_0, kk_context_t* _ctx); /* (lo : int64, hi : int64) -> list<int64> */ 

int64_t kk_std_num_int64_sumacc64(kk_std_core_types__list xs, int64_t acc, kk_context_t* _ctx); /* (xs : list<int64>, acc : int64) -> int64 */ 

static inline int64_t kk_std_num_int64_sum64(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int64>) -> int64 */ 
  int64_t _x_x404 = (KK_I64(0)); /*int64*/
  return kk_std_num_int64_sumacc64(xs, _x_x404, _ctx);
}

kk_string_t kk_std_num_int64_test_prefix_sum(kk_context_t* _ctx); /* () -> string */ 

kk_string_t kk_std_num_int64_test_bit_spread1(kk_context_t* _ctx); /* () -> string */ 

kk_string_t kk_std_num_int64_test_bit_spread2(kk_context_t* _ctx); /* () -> string */ 

static inline int64_t kk_std_num_int64_zip_clmul(int64_t x, kk_context_t* _ctx) { /* (x : int64) -> int64 */ 
  int64_t _x_x439 = (int64_t)kk_clmul64((uint64_t)x,(uint64_t)x); /*int64*/
  int64_t _x_x440 = (int64_t)kk_clmulr64((uint64_t)x,(uint64_t)x); /*int64*/
  return _x_x439 | _x_x440;
}

kk_string_t kk_std_num_int64_test_clmulr1(kk_context_t* _ctx); /* () -> string */ 

kk_string_t kk_std_num_int64_test_clmulr2(kk_context_t* _ctx); /* () -> string */ 

static inline int64_t kk_std_num_int64_clmulrev(int64_t x, int64_t y, kk_context_t* _ctx) { /* (x : int64, y : int64) -> int64 */ 
  int64_t _x_x475;
  int64_t _x_x476 = kk_bits_reverse64(x); /*int64*/
  int64_t _x_x477 = kk_bits_reverse64(y); /*int64*/
  _x_x475 = (int64_t)kk_clmul64((uint64_t)_x_x476,(uint64_t)_x_x477); /*int64*/
  return kk_bits_reverse64(_x_x475);
}

kk_string_t kk_std_num_int64_test_clmulrev1(kk_context_t* _ctx); /* () -> string */ 

void kk_std_num_int64__init(kk_context_t* _ctx);


void kk_std_num_int64__done(kk_context_t* _ctx);

#endif // header
