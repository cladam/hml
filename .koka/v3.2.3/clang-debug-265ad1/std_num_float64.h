#pragma once
#ifndef kk_std_num_float64_H
#define kk_std_num_float64_H
// Koka generated module: std/num/float64, koka version: 3.2.3, platform: 64-bit
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
#include "std_text_parse.h"
#include "std_num_int32.h"
#include "std_num_int64.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2024, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static inline double kk_double_abs(double d) {
  return (isfinite(d) && d < 0.0 ? -d : d);
}


// type declarations

// value declarations
 
// &pi;
#define kk_std_num_float64_pi ((double)(0x1.921fb54442d18p1))
 
// &pi;
#define kk_std_num_float64_flt_pi ((double)(0x1.921fb54442d18p1))
 
// 2&pi;
#define kk_std_num_float64_flt_twopi ((double)(0x1.921fb54442d18p2))
 
// &pi;/2
#define kk_std_num_float64_flt_pi2 ((double)(0x1.921fb54442d18p0))
 
// &pi;/4
#define kk_std_num_float64_flt_pi4 ((double)(0x1.921fb54442d18p-1))
 
// 3&pi;/4
#define kk_std_num_float64_flt_pi34 ((double)(0x1.2d97c7f3321d2p1))
 
// The [_e_](https://en.wikipedia.org/wiki/E_(mathematical_constant)) constant.
#define kk_std_num_float64_flt_e ((double)(0x1.5bf0a8b145769p1))
 
// The natural logarithm of 2
#define kk_std_num_float64_flt_ln2 ((double)(0x1.62e42fefa39efp-1))
 
// The natural logarithm of 10
#define kk_std_num_float64_flt_ln10 ((double)(0x1.26bb1bbb55516p1))
 
// The base-2 logarithm of _e_.
#define kk_std_num_float64_flt_log2e ((double)(0x1.71547652b82fep0))
 
// The base-10 logarithm of _e_.
#define kk_std_num_float64_flt_log10e ((double)(0x1.bcb7b1526e50ep-2))
 
// The square-root of 2
#define kk_std_num_float64_flt_sqrt2 ((double)(0x1.6a09e667f3bcdp0))
 
// `1.0 / sqrt(2.0)`  (= `sqrt(0.5)`)
#define kk_std_num_float64_flt_sqrt12 ((double)(0x1.6a09e667f3bcdp-1))
 
// [Euler's constant](https://en.wikipedia.org/wiki/Euler%E2%80%93Mascheroni_constant)
#define kk_std_num_float64_flt_euler ((double)(0x1.2788cfc6fb619p-1))
 
// Maximum float64 value
#define kk_std_num_float64_flt_max ((double)(0x1.fffffffffffffp1023))
 
// Smallest positive normalized float64 value
#define kk_std_num_float64_flt_min ((double)(0x1p-1022))
 
// Smallest positive subnormal value (i.e. [``DBL_TRUE_MIN``](https://en.cppreference.com/w/cpp/types/climits))
#define kk_std_num_float64_flt_true_min ((double)(0x1p-1074))
 
// Machine epsilon: the difference between 1.0 and the next representable `:float64` value.
#define kk_std_num_float64_flt_epsilon ((double)(0x1p-52))
 
// maximal precision in decimal digits of a `:float64`.

extern kk_integer_t kk_std_num_float64_flt_max_prec;
 
// Is the value negative?

static inline bool kk_std_num_float64_is_neg(double d, kk_context_t* _ctx) { /* (d : float64) -> bool */ 
  return (d < (0x0p+0));
}
 
// Returns the largest of two floats

static inline double kk_std_num_float64_max(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  bool _match_x659 = (x >= y); /*bool*/;
  if (_match_x659) {
    return x;
  }
  {
    return y;
  }
}
 
// Is this a [subnormal](https://en.wikipedia.org/wiki/Denormal_number) value?
// (i.e. `0 < d.abs < flt-min`)

static inline bool kk_std_num_float64_is_subnormal(double d, kk_context_t* _ctx) { /* (d : float64) -> bool */ 
  bool _match_x658 = (d != (0x0p+0)); /*bool*/;
  if (_match_x658) {
    double _x_x665 = kk_double_abs(d); /*float64*/
    return (_x_x665 < (0x1p-1022));
  }
  {
    return false;
  }
}

double kk_std_num_float64_float32_fs_float64(float f, kk_context_t* _ctx); /* (f : float32) -> float64 */ 
 
// Convert an 64-bit integer to a `:float64`.

static inline double kk_std_num_float64_int64_fs_float64(int64_t i, kk_context_t* _ctx) { /* (i : int64) -> float64 */ 
  kk_integer_t _x_x666 = kk_integer_from_int64(i,kk_context()); /*int*/
  return kk_integer_as_double(_x_x666,kk_context());
}

double kk_std_num_float64_make_neginf(kk_context_t* _ctx); /* () -> float64 */ 

extern double kk_std_num_float64_neginf;

double kk_std_num_float64_make_posinf(kk_context_t* _ctx); /* () -> float64 */ 

extern double kk_std_num_float64_posinf;
 
// Is the value positive?

static inline bool kk_std_num_float64_is_pos(double d, kk_context_t* _ctx) { /* (d : float64) -> bool */ 
  return (d > (0x0p+0));
}
 
// Is the value zero?

static inline bool kk_std_num_float64_is_zero(double d, kk_context_t* _ctx) { /* (d : float64) -> bool */ 
  return (d == (0x0p+0));
}
 
// Returns the smallest of two floats

static inline double kk_std_num_float64_min(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  bool _match_x657 = (x <= y); /*bool*/;
  if (_match_x657) {
    return x;
  }
  {
    return y;
  }
}

double kk_std_num_float64_minimum(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<float64>) -> float64 */ 

double kk_std_num_float64_maximum(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<float64>) -> float64 */ 

double kk_std_num_float64_make_nan(kk_context_t* _ctx); /* () -> float64 */ 

extern double kk_std_num_float64_nan;
 
// Compare the argument to zero.

static inline kk_std_core_types__order kk_std_num_float64_sign(double d, kk_context_t* _ctx) { /* (d : float64) -> order */ 
  bool _match_x655 = (d < (0x0p+0)); /*bool*/;
  if (_match_x655) {
    return kk_std_core_types__new_Lt(_ctx);
  }
  {
    bool _match_x656 = (d > (0x0p+0)); /*bool*/;
    if (_match_x656) {
      return kk_std_core_types__new_Gt(_ctx);
    }
    {
      return kk_std_core_types__new_Eq(_ctx);
    }
  }
}

kk_string_t kk_std_num_float64_show_fixedx(double d, int32_t prec, kk_context_t* _ctx); /* (d : float64, prec : int32) -> string */ 

kk_string_t kk_std_num_float64_show_expx(double d, int32_t prec, kk_context_t* _ctx); /* (d : float64, prec : int32) -> string */ 

kk_string_t kk_std_num_float64_show_exp(double d, kk_std_core_types__optional precision, kk_context_t* _ctx); /* (d : float64, precision : ? int) -> string */ 

kk_string_t kk_std_num_float64_show_fixed(double d, kk_std_core_types__optional precision, kk_context_t* _ctx); /* (d : float64, precision : ? int) -> string */ 

kk_string_t kk_std_num_float64_show(double d, kk_std_core_types__optional precision, kk_context_t* _ctx); /* (d : float64, precision : ? int) -> string */ 

bool kk_std_num_float64_is_inf(double d, kk_context_t* _ctx); /* (d : float64) -> bool */ 
 
// Is this a negative zero value?

static inline bool kk_std_num_float64_is_negzero(double d, kk_context_t* _ctx) { /* (d : float64) -> bool */ 
  bool _match_x650 = (d == (0x0p+0)); /*bool*/;
  if (_match_x650) {
    double _x_x694 = (0x1p0 / d); /*float64*/
    return (isinf(_x_x694) && signbit(_x_x694));
  }
  {
    return false;
  }
}

double kk_std_num_float64_fmadd(double x, double y, double z, kk_context_t* _ctx); /* (x : float64, y : float64, z : float64) -> float64 */ 
 
// Return the integral part of a `:float64` `d` .
// If `d >= 0.0` , return the largest integer equal or less to `d` ,
// If `d < 0.0` , return the smallest integer equal or larger to `d` .

static inline double kk_std_num_float64_truncate(double d, kk_context_t* _ctx) { /* (d : float64) -> float64 */ 
  bool _match_x649 = (d >= (0x0p+0)); /*bool*/;
  if (_match_x649) {
    return floor(d);
  }
  {
    return ceil(d);
  }
}
 
// Return the fractional part of a `:float64` `d`.
// `d.truncate + d.fraction === d`
// `(-2.4).fraction === -0.4`

static inline double kk_std_num_float64_fraction(double d, kk_context_t* _ctx) { /* (d : float64) -> float64 */ 
  double _x_x695;
  bool _match_x648 = (d >= (0x0p+0)); /*bool*/;
  if (_match_x648) {
    _x_x695 = floor(d); /*float64*/
  }
  else {
    _x_x695 = ceil(d); /*float64*/
  }
  return (d - _x_x695);
}
 
// Return the 'floored' fraction of `d`, always greater or equal to zero.
// `d.floor + d.ffraction === d`
// `(-2.4).ffraction === 0.6`

static inline double kk_std_num_float64_ffraction(double d, kk_context_t* _ctx) { /* (d : float64) -> float64 */ 
  double _x_x696 = floor(d); /*float64*/
  return (d - _x_x696);
}

double kk_std_num_float64_round_to_prec(double d, kk_integer_t prec, kk_context_t* _ctx); /* (d : float64, prec : int) -> float64 */ 

float kk_std_num_float64_float64_fs_float32(double f, kk_context_t* _ctx); /* (f : float64) -> float32 */ 
 
// Short version of `float32` for convenience, e.g. `1.337.f32`. For example:
// ```
// > 1.337.show-hex ++ " != " ++ 1.337.f32.float64.show-hex
// "0x1.5645A1CAC0831p+0 != 0x1.5645A2p+0"
// ```
// .

static inline float kk_std_num_float64_f32(double f, kk_context_t* _ctx) { /* (f : float64) -> float32 */ 
  return kk_std_num_float64_float64_fs_float32(f, _ctx);
}
 
// Return the logarithm in base `base` of a `:float64` `f`

static inline double kk_std_num_float64_log(double f, double base, kk_context_t* _ctx) { /* (f : float64, base : float64) -> float64 */ 
  double _x_x700 = log(f); /*float64*/
  double _x_x701 = log(base); /*float64*/
  return (_x_x700 / _x_x701);
}

static inline double kk_std_num_float64_log2p1(double x, kk_context_t* _ctx) { /* (x : float64) -> float64 */ 
  double _x_x702 = log1p(x); /*float64*/
  return ((0x1.71547652b82fep0) * _x_x702);
}

static inline double kk_std_num_float64_exp2m1(double x, kk_context_t* _ctx) { /* (x : float64) -> float64 */ 
  double _x_x703 = ((0x1.62e42fefa39efp-1) * x); /*float64*/
  return expm1(_x_x703);
}

double kk_std_num_float64_lnaddexp(double x, double y, kk_context_t* _ctx); /* (x : float64, y : float64) -> float64 */ 

double kk_std_num_float64_logaddexp2(double x, double y, kk_context_t* _ctx); /* (x : float64, y : float64) -> float64 */ 

bool kk_std_num_float64_nearly_eq(double x, double y, kk_std_core_types__optional epsilon, kk_context_t* _ctx); /* (x : float64, y : float64, epsilon : ? float64) -> bool */ 
 
// Return if two floats are nearly equal with respect to an `epsilon` of `8*flt-epsilon`.
// See also `nearly-eq` which takes an explicit `epsilon`.

static inline bool kk_std_num_float64__lp__tilde__eq__rp_(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> bool */ 
  return kk_std_num_float64_nearly_eq(x, y, kk_std_core_types__new_None(_ctx), _ctx);
}

int64_t kk_std_num_float64_float64_to_bits(double d, kk_context_t* _ctx); /* (d : float64) -> int64 */ 

double kk_std_num_float64_float64_from_bits(int64_t i, kk_context_t* _ctx); /* (i : int64) -> float64 */ 

double kk_std_num_float64_exp2i(kk_integer_t e, kk_context_t* _ctx); /* (e : int) -> float64 */ 
#define kk_std_num_float64_one_p1023 ((double)(0x1p1023))
#define kk_std_num_float64_one_m1022 ((double)(0x1p-1022))

static inline double kk_std_num_float64_mul_exp2(double x, kk_integer_t e, kk_context_t* _ctx) { /* (x : float64, e : int) -> float64 */ 
  double _x_x731 = kk_std_num_float64_exp2i(e, _ctx); /*float64*/
  return (x * _x_x731);
}

double kk_std_num_float64_ldexp(double x, kk_integer_t e, kk_context_t* _ctx); /* (x : float64, e : int) -> float64 */ 
 
// Create a float64 `d` given a mantissa `man` and exponent `exp`
// such that `man`&middot;2^`exp`^ =  `d` exactly (if it is representable
// by a `:float64`). See also `ldexp`.

static inline double kk_std_num_float64_encode(kk_integer_t man, kk_integer_t exp, kk_context_t* _ctx) { /* (man : int, exp : int) -> float64 */ 
  double _x_x739 = kk_integer_as_double(man,kk_context()); /*float64*/
  return kk_std_num_float64_ldexp(_x_x739, exp, _ctx);
}

kk_std_core_types__tuple2 kk_std_num_float64_decode_normalized(double d, kk_std_core_types__optional e_adjust, kk_context_t* _ctx); /* (d : float64, e-adjust : ? int) -> (int, int) */ 

kk_std_core_types__tuple2 kk_std_num_float64_decode(double d, kk_context_t* _ctx); /* (d : float64) -> (int, int) */ 

kk_std_core_types__tuple2 kk_std_num_float64_frexp(double x, kk_context_t* _ctx); /* (x : float64) -> (float64, int) */ 

double kk_std_num_float64_next_down(double x, kk_context_t* _ctx); /* (x : float64) -> float64 */ 

double kk_std_num_float64_next_up(double x, kk_context_t* _ctx); /* (x : float64) -> float64 */ 

kk_std_core_types__order kk_std_num_float64_cmp(double x, double y, kk_context_t* _ctx); /* (x : float64, y : float64) -> order */ 

double kk_std_num_float64_midpoint(double x, double y, kk_context_t* _ctx); /* (x : float64, y : float64) -> float64 */ 

double kk_std_num_float64_lerp(double x, double y, double t, kk_context_t* _ctx); /* (x : float64, y : float64, t : float64) -> float64 */ 

kk_string_t kk_std_num_float64_show_hex(double d, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx); /* (d : float64, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
 
// monadic lift

static inline kk_integer_t kk_std_num_float64__mlift_phexdouble_10171(kk_char_t wild___2, kk_context_t* _ctx) { /* (wild_@2 : char) -> std/text/parse/parse int */ 
  return kk_std_text_parse_pint(_ctx);
}

double kk_std_num_float64__mlift_phexdouble_10172(kk_string_t frac, kk_string_t man, kk_integer_t exp, kk_context_t* _ctx); /* (frac : string, man : string, exp : int) -> std/text/parse/parse float64 */ 
 
// monadic lift

static inline kk_string_t kk_std_num_float64__mlift_phexdouble_10173(kk_char_t wild___1, kk_context_t* _ctx) { /* (wild_@1 : char) -> std/text/parse/parse string */ 
  return kk_std_text_parse_hex_digits(_ctx);
}

double kk_std_num_float64__mlift_phexdouble_10174(kk_string_t man, kk_string_t _y_x10133, kk_context_t* _ctx); /* (man : string, string) -> std/text/parse/parse float64 */ 

double kk_std_num_float64__mlift_phexdouble_10175(kk_string_t man, kk_context_t* _ctx); /* (man : string) -> std/text/parse/parse float64 */ 

double kk_std_num_float64__mlift_phexdouble_10176(kk_char_t wild___0, kk_context_t* _ctx); /* (wild_@0 : char) -> std/text/parse/parse float64 */ 

double kk_std_num_float64__mlift_phexdouble_10177(kk_char_t wild__, kk_context_t* _ctx); /* (wild_ : char) -> std/text/parse/parse float64 */ 

double kk_std_num_float64_phexdouble(kk_context_t* _ctx); /* () -> std/text/parse/parse float64 */ 

double kk_std_num_float64_prim_parse_float64(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> float64 */ 
 
// monadic lift

static inline kk_integer_t kk_std_num_float64__mlift_pdecdouble_10178(kk_char_t wild___0, kk_context_t* _ctx) { /* (wild_@0 : char) -> std/text/parse/parse int */ 
  return kk_std_text_parse_pint(_ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10179(kk_std_core_sslice__sslice cur, kk_integer_t exp, kk_context_t* _ctx); /* (cur : sslice/sslice, exp : int) -> std/text/parse/parse float64 */ 
 
// monadic lift

static inline kk_string_t kk_std_num_float64__mlift_pdecdouble_10180(kk_char_t wild__, kk_context_t* _ctx) { /* (wild_ : char) -> std/text/parse/parse string */ 
  return kk_std_text_parse_digits0(_ctx);
}

double kk_std_num_float64__mlift_pdecdouble_10181(kk_std_core_sslice__sslice cur, kk_string_t _y_x10141, kk_context_t* _ctx); /* (cur : sslice/sslice, string) -> std/text/parse/parse float64 */ 

double kk_std_num_float64__mlift_pdecdouble_10182(kk_std_core_sslice__sslice cur, kk_string_t man, kk_context_t* _ctx); /* (cur : sslice/sslice, man : string) -> std/text/parse/parse float64 */ 

double kk_std_num_float64__mlift_pdecdouble_10183(kk_std_core_sslice__sslice cur, kk_context_t* _ctx); /* (cur : sslice/sslice) -> std/text/parse/parse float64 */ 

double kk_std_num_float64_pdecdouble(kk_context_t* _ctx); /* () -> std/text/parse/parse float64 */ 
 
// monadic lift

static inline double kk_std_num_float64__mlift_pspecial_10184(kk_string_t wild__, kk_context_t* _ctx) { /* (wild_ : string) -> std/text/parse/parse float64 */ 
  kk_string_drop(wild__, _ctx);
  return kk_std_num_float64_nan;
}
 
// monadic lift

static inline double kk_std_num_float64__mlift_pspecial_10185(kk_string_t wild___0, kk_context_t* _ctx) { /* (wild_@0 : string) -> std/text/parse/parse float64 */ 
  kk_string_drop(wild___0, _ctx);
  return kk_std_num_float64_posinf;
}
 
// monadic lift

static inline double kk_std_num_float64__mlift_pspecial_10186(kk_string_t wild___1, kk_context_t* _ctx) { /* (wild_@1 : string) -> std/text/parse/parse float64 */ 
  kk_string_drop(wild___1, _ctx);
  return kk_std_num_float64_posinf;
}

double kk_std_num_float64_pspecial(kk_context_t* _ctx); /* () -> std/text/parse/parse float64 */ 
 
// monadic lift

static inline double kk_std_num_float64__mlift_pdouble_10187(kk_string_t wild__, kk_context_t* _ctx) { /* (wild_ : string) -> std/text/parse/parse float64 */ 
  kk_string_drop(wild__, _ctx);
  return kk_std_num_float64_nan;
}
 
// monadic lift

static inline double kk_std_num_float64__mlift_pdouble_10188(kk_string_t wild___0, kk_context_t* _ctx) { /* (wild_@0 : string) -> std/text/parse/parse float64 */ 
  kk_string_drop(wild___0, _ctx);
  return kk_std_num_float64_posinf;
}
 
// monadic lift

static inline double kk_std_num_float64__mlift_pdouble_10189(kk_string_t wild___1, kk_context_t* _ctx) { /* (wild_@1 : string) -> std/text/parse/parse float64 */ 
  kk_string_drop(wild___1, _ctx);
  return kk_std_num_float64_posinf;
}
 
// monadic lift

static inline double kk_std_num_float64__mlift_pdouble_10190(bool neg, double d, kk_context_t* _ctx) { /* (neg : bool, d : float64) -> std/text/parse/parse float64 */ 
  if (neg) {
    return (-d);
  }
  {
    return d;
  }
}

double kk_std_num_float64__mlift_pdouble_10191(bool neg, kk_context_t* _ctx); /* (neg : bool) -> std/text/parse/parse float64 */ 

double kk_std_num_float64_pdouble(kk_context_t* _ctx); /* () -> std/text/parse/parse float64 */ 
 
// monadic lift

static inline double kk_std_num_float64__mlift_parse_float64_10192(double x, kk_unit_t wild__, kk_context_t* _ctx) { /* (x : float64, wild_ : ()) -> std/text/parse/parse float64 */ 
  return x;
}

double kk_std_num_float64__mlift_parse_float64_10193(double x, kk_context_t* _ctx); /* (x : float64) -> std/text/parse/parse float64 */ 

kk_std_core_types__maybe kk_std_num_float64_parse_float64(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> maybe<float64> */ 

double kk_std_num_float64_sum(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<float64>) -> float64 */ 

double kk_std_num_float64_hypot(double x, double y, kk_context_t* _ctx); /* (x : float64, y : float64) -> float64 */ 
 
// The square of a float64

static inline double kk_std_num_float64_sqr(double x, kk_context_t* _ctx) { /* (x : float64) -> float64 */ 
  return (x * x);
}

double kk_std_num_float64_xyz_fs_hypot(double x, double y, double z, kk_context_t* _ctx); /* (x : float64, y : float64, z : float64) -> float64 */ 
 
// The maximum of the absolute values.

static inline double kk_std_num_float64_abs_max(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  double x_0_10122 = kk_double_abs(x); /*float64*/;
  double y_0_10123 = kk_double_abs(y); /*float64*/;
  bool _match_x517 = (x_0_10122 >= y_0_10123); /*bool*/;
  if (_match_x517) {
    return x_0_10122;
  }
  {
    return y_0_10123;
  }
}

double kk_std_num_float64_list_fs_abs_max(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<float64>) -> float64 */ 

double kk_std_num_float64_list_fs_hypot(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<float64>) -> float64 */ 

extern double kk_std_num_float64_rad2deg;

extern double kk_std_num_float64_deg2rad;
 
// Convert radians to degrees.

static inline double kk_std_num_float64_deg(double rad_0, kk_context_t* _ctx) { /* (rad : float64) -> float64 */ 
  return (rad_0 * kk_std_num_float64_rad2deg);
}
 
// Convert degrees to radians.

static inline double kk_std_num_float64_rad(double deg_0, kk_context_t* _ctx) { /* (deg : float64) -> float64 */ 
  return (deg_0 * kk_std_num_float64_deg2rad);
}
 
// Return `x` with the sign of `y`.

static inline double kk_std_num_float64_with_sign_of(double x, double y, kk_context_t* _ctx) { /* (x : float64, y : float64) -> float64 */ 
  bool _match_x511 = (y < (0x0p+0)); /*bool*/;
  if (_match_x511) {
    double _x_x1216 = kk_double_abs(x); /*float64*/
    return (-_x_x1216);
  }
  {
    return kk_double_abs(x);
  }
}

double kk_std_num_float64_atanh(double d, kk_context_t* _ctx); /* (d : float64) -> float64 */ 

double kk_std_num_float64_acosh(double d, kk_context_t* _ctx); /* (d : float64) -> float64 */ 

double kk_std_num_float64_asinh(double d, kk_context_t* _ctx); /* (d : float64) -> float64 */ 

void kk_std_num_float64__init(kk_context_t* _ctx);


void kk_std_num_float64__done(kk_context_t* _ctx);

#endif // header
