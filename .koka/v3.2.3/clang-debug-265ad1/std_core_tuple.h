#pragma once
#ifndef kk_std_core_tuple_H
#define kk_std_core_tuple_H
// Koka generated module: std/core/tuple, koka version: 3.2.3, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"

// type declarations

// value declarations
 
// monadic lift

static inline kk_std_core_types__tuple2 kk_std_core_tuple_tuple2_fs__mlift_map_10153(kk_box_t _y_x10000, kk_box_t _y_x10001, kk_context_t* _ctx) { /* forall<a,e> (a, a) -> e (a, a) */ 
  return kk_std_core_types__new_Tuple2(_y_x10000, _y_x10001, _ctx);
}

kk_std_core_types__tuple2 kk_std_core_tuple_tuple2_fs__mlift_map_10154(kk_function_t f, kk_std_core_types__tuple2 t, kk_box_t _y_x10000, kk_context_t* _ctx); /* forall<a,b,e> (f : (a) -> e b, t : (a, a), b) -> e (b, b) */ 

kk_std_core_types__tuple2 kk_std_core_tuple_tuple2_fs_map(kk_std_core_types__tuple2 t, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,e> (t : (a, a), f : (a) -> e b) -> e (b, b) */ 
 
// monadic lift

static inline kk_std_core_types__tuple3 kk_std_core_tuple_tuple3_fs__mlift_map_10155(kk_box_t _y_x10002, kk_box_t _y_x10003, kk_box_t _y_x10004, kk_context_t* _ctx) { /* forall<a,e> (a, a, a) -> e (a, a, a) */ 
  return kk_std_core_types__new_Tuple3(_y_x10002, _y_x10003, _y_x10004, _ctx);
}

kk_std_core_types__tuple3 kk_std_core_tuple_tuple3_fs__mlift_map_10156(kk_box_t _y_x10002, kk_function_t f, kk_std_core_types__tuple3 t, kk_box_t _y_x10003, kk_context_t* _ctx); /* forall<a,b,e> (b, f : (a) -> e b, t : (a, a, a), b) -> e (b, b, b) */ 

kk_std_core_types__tuple3 kk_std_core_tuple_tuple3_fs__mlift_map_10157(kk_function_t f, kk_std_core_types__tuple3 t, kk_box_t _y_x10002, kk_context_t* _ctx); /* forall<a,b,e> (f : (a) -> e b, t : (a, a, a), b) -> e (b, b, b) */ 

kk_std_core_types__tuple3 kk_std_core_tuple_tuple3_fs_map(kk_std_core_types__tuple3 t, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,e> (t : (a, a, a), f : (a) -> e b) -> e (b, b, b) */ 
 
// monadic lift

static inline kk_std_core_types__tuple4 kk_std_core_tuple_tuple4_fs__mlift_map_10158(kk_box_t _y_x10005, kk_box_t _y_x10006, kk_box_t _y_x10007, kk_box_t _y_x10008, kk_context_t* _ctx) { /* forall<a,e> (a, a, a, a) -> e (a, a, a, a) */ 
  return kk_std_core_types__new_Tuple4(kk_reuse_null, 0, _y_x10005, _y_x10006, _y_x10007, _y_x10008, _ctx);
}

kk_std_core_types__tuple4 kk_std_core_tuple_tuple4_fs__mlift_map_10159(kk_box_t _y_x10005, kk_box_t _y_x10006, kk_function_t f, kk_std_core_types__tuple4 t, kk_box_t _y_x10007, kk_context_t* _ctx); /* forall<a,b,e> (b, b, f : (a) -> e b, t : (a, a, a, a), b) -> e (b, b, b, b) */ 

kk_std_core_types__tuple4 kk_std_core_tuple_tuple4_fs__mlift_map_10160(kk_box_t _y_x10005, kk_function_t f, kk_std_core_types__tuple4 t, kk_box_t _y_x10006, kk_context_t* _ctx); /* forall<a,b,e> (b, f : (a) -> e b, t : (a, a, a, a), b) -> e (b, b, b, b) */ 

kk_std_core_types__tuple4 kk_std_core_tuple_tuple4_fs__mlift_map_10161(kk_function_t f, kk_std_core_types__tuple4 t, kk_box_t _y_x10005, kk_context_t* _ctx); /* forall<a,b,e> (f : (a) -> e b, t : (a, a, a, a), b) -> e (b, b, b, b) */ 

kk_std_core_types__tuple4 kk_std_core_tuple_tuple4_fs_map(kk_std_core_types__tuple4 t, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,e> (t : (a, a, a, a), f : (a) -> e b) -> e (b, b, b, b) */ 
 
// monadic lift

static inline kk_std_core_types__tuple5 kk_std_core_tuple_tuple5_fs__mlift_map_10162(kk_box_t _y_x10009, kk_box_t _y_x10010, kk_box_t _y_x10011, kk_box_t _y_x10012, kk_box_t _y_x10013, kk_context_t* _ctx) { /* forall<a,e> (a, a, a, a, a) -> e (a, a, a, a, a) */ 
  return kk_std_core_types__new_Tuple5(kk_reuse_null, 0, _y_x10009, _y_x10010, _y_x10011, _y_x10012, _y_x10013, _ctx);
}

kk_std_core_types__tuple5 kk_std_core_tuple_tuple5_fs__mlift_map_10163(kk_box_t _y_x10009, kk_box_t _y_x10010, kk_box_t _y_x10011, kk_function_t f, kk_std_core_types__tuple5 t, kk_box_t _y_x10012, kk_context_t* _ctx); /* forall<a,b,e> (b, b, b, f : (a) -> e b, t : (a, a, a, a, a), b) -> e (b, b, b, b, b) */ 

kk_std_core_types__tuple5 kk_std_core_tuple_tuple5_fs__mlift_map_10164(kk_box_t _y_x10009, kk_box_t _y_x10010, kk_function_t f, kk_std_core_types__tuple5 t, kk_box_t _y_x10011, kk_context_t* _ctx); /* forall<a,b,e> (b, b, f : (a) -> e b, t : (a, a, a, a, a), b) -> e (b, b, b, b, b) */ 

kk_std_core_types__tuple5 kk_std_core_tuple_tuple5_fs__mlift_map_10165(kk_box_t _y_x10009, kk_function_t f, kk_std_core_types__tuple5 t, kk_box_t _y_x10010, kk_context_t* _ctx); /* forall<a,b,e> (b, f : (a) -> e b, t : (a, a, a, a, a), b) -> e (b, b, b, b, b) */ 

kk_std_core_types__tuple5 kk_std_core_tuple_tuple5_fs__mlift_map_10166(kk_function_t f, kk_std_core_types__tuple5 t, kk_box_t _y_x10009, kk_context_t* _ctx); /* forall<a,b,e> (f : (a) -> e b, t : (a, a, a, a, a), b) -> e (b, b, b, b, b) */ 

kk_std_core_types__tuple5 kk_std_core_tuple_tuple5_fs_map(kk_std_core_types__tuple5 t, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,e> (t : (a, a, a, a, a), f : (a) -> e b) -> e (b, b, b, b, b) */ 
 
// Compare unit values. Useful to build composite equality for structures containing a unit (e.g. either<string, ()>)

static inline bool kk_std_core_tuple_unit_fs__lp__eq__eq__rp_(kk_unit_t a, kk_unit_t b, kk_context_t* _ctx) { /* (a : (), b : ()) -> bool */ 
  return true;
}
 
// monadic lift

static inline bool kk_std_core_tuple_tuple2_fs__lp__at_mlift_x_10167_eq__eq__rp_(kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_box_t y1, kk_box_t y2, bool _y_x10014, kk_context_t* _ctx) { /* forall<a,e> (?snd/(==) : (a, a) -> e bool, y1 : a, y2 : a, bool) -> e bool */ 
  if (_y_x10014) {
    return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_snd_fs__lp__eq__eq__rp_, (_implicit_fs_snd_fs__lp__eq__eq__rp_, y1, y2, _ctx), _ctx);
  }
  {
    kk_box_drop(y2, _ctx);
    kk_box_drop(y1, _ctx);
    kk_function_drop(_implicit_fs_snd_fs__lp__eq__eq__rp_, _ctx);
    return false;
  }
}

bool kk_std_core_tuple_tuple2_fs__lp__eq__eq__rp_(kk_std_core_types__tuple2 _pat_x36__22, kk_std_core_types__tuple2 _pat_x36__39, kk_function_t _implicit_fs_fst_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b,e> ((a, b), (a, b), ?fst/(==) : (a, a) -> e bool, ?snd/(==) : (b, b) -> e bool) -> e bool */ 
 
// monadic lift

static inline bool kk_std_core_tuple_tuple3_fs__lp__at_mlift_x_10168_eq__eq__rp_(kk_function_t _implicit_fs_thd_fs__lp__eq__eq__rp_, kk_box_t z1, kk_box_t z2, bool _y_x10020, kk_context_t* _ctx) { /* forall<a,e> (?thd/(==) : (a, a) -> e bool, z1 : a, z2 : a, bool) -> e bool */ 
  if (_y_x10020) {
    return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_thd_fs__lp__eq__eq__rp_, (_implicit_fs_thd_fs__lp__eq__eq__rp_, z1, z2, _ctx), _ctx);
  }
  {
    kk_box_drop(z2, _ctx);
    kk_box_drop(z1, _ctx);
    kk_function_drop(_implicit_fs_thd_fs__lp__eq__eq__rp_, _ctx);
    return false;
  }
}

bool kk_std_core_tuple_tuple3_fs__lp__at_mlift_x_10169_eq__eq__rp_(kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_thd_fs__lp__eq__eq__rp_, kk_box_t y1, kk_box_t y2, kk_box_t z1, kk_box_t z2, bool _y_x10019, kk_context_t* _ctx); /* forall<a,b,e> (?snd/(==) : (a, a) -> e bool, ?thd/(==) : (b, b) -> e bool, y1 : a, y2 : a, z1 : b, z2 : b, bool) -> e bool */ 

bool kk_std_core_tuple_tuple3_fs__lp__eq__eq__rp_(kk_std_core_types__tuple3 _pat_x40__22, kk_std_core_types__tuple3 _pat_x40__44, kk_function_t _implicit_fs_fst_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_thd_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b,c,e> ((a, b, c), (a, b, c), ?fst/(==) : (a, a) -> e bool, ?snd/(==) : (b, b) -> e bool, ?thd/(==) : (c, c) -> e bool) -> e bool */ 
 
// monadic lift

static inline bool kk_std_core_tuple_tuple4_fs__lp__at_mlift_x_10170_eq__eq__rp_(kk_function_t _implicit_fs_field4_fs__lp__eq__eq__rp_, kk_box_t w1, kk_box_t w2, bool _y_x10028, kk_context_t* _ctx) { /* forall<a,e> (?field4/(==) : (a, a) -> e bool, w1 : a, w2 : a, bool) -> e bool */ 
  if (_y_x10028) {
    return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_field4_fs__lp__eq__eq__rp_, (_implicit_fs_field4_fs__lp__eq__eq__rp_, w1, w2, _ctx), _ctx);
  }
  {
    kk_box_drop(w2, _ctx);
    kk_box_drop(w1, _ctx);
    kk_function_drop(_implicit_fs_field4_fs__lp__eq__eq__rp_, _ctx);
    return false;
  }
}

bool kk_std_core_tuple_tuple4_fs__lp__at_mlift_x_10171_eq__eq__rp_(kk_function_t _implicit_fs_field4_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_thd_fs__lp__eq__eq__rp_, kk_box_t w1, kk_box_t w2, kk_box_t z1, kk_box_t z2, bool _y_x10027, kk_context_t* _ctx); /* forall<a,b,e> (?field4/(==) : (b, b) -> e bool, ?thd/(==) : (a, a) -> e bool, w1 : b, w2 : b, z1 : a, z2 : a, bool) -> e bool */ 

bool kk_std_core_tuple_tuple4_fs__lp__at_mlift_x_10172_eq__eq__rp_(kk_function_t _implicit_fs_field4_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_thd_fs__lp__eq__eq__rp_, kk_box_t w1, kk_box_t w2, kk_box_t y1, kk_box_t y2, kk_box_t z1, kk_box_t z2, bool _y_x10026, kk_context_t* _ctx); /* forall<a,b,c,e> (?field4/(==) : (c, c) -> e bool, ?snd/(==) : (a, a) -> e bool, ?thd/(==) : (b, b) -> e bool, w1 : c, w2 : c, y1 : a, y2 : a, z1 : b, z2 : b, bool) -> e bool */ 

bool kk_std_core_tuple_tuple4_fs__lp__eq__eq__rp_(kk_std_core_types__tuple4 _pat_x44__22, kk_std_core_types__tuple4 _pat_x44__49, kk_function_t _implicit_fs_fst_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_thd_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_field4_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b,c,d,e> ((a, b, c, d), (a, b, c, d), ?fst/(==) : (a, a) -> e bool, ?snd/(==) : (b, b) -> e bool, ?thd/(==) : (c, c) -> e bool, ?field4/(==) : (d, d) -> e bool) -> e bool */ 
 
// monadic lift

static inline bool kk_std_core_tuple_tuple5_fs__lp__at_mlift_x_10173_eq__eq__rp_(kk_function_t _implicit_fs_field5_fs__lp__eq__eq__rp_, kk_box_t v1, kk_box_t v2, bool _y_x10038, kk_context_t* _ctx) { /* forall<e,a> (?field5/(==) : (a, a) -> e bool, v1 : a, v2 : a, bool) -> e bool */ 
  if (_y_x10038) {
    return kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_field5_fs__lp__eq__eq__rp_, (_implicit_fs_field5_fs__lp__eq__eq__rp_, v1, v2, _ctx), _ctx);
  }
  {
    kk_box_drop(v2, _ctx);
    kk_box_drop(v1, _ctx);
    kk_function_drop(_implicit_fs_field5_fs__lp__eq__eq__rp_, _ctx);
    return false;
  }
}

bool kk_std_core_tuple_tuple5_fs__lp__at_mlift_x_10174_eq__eq__rp_(kk_function_t _implicit_fs_field4_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_field5_fs__lp__eq__eq__rp_, kk_box_t v1, kk_box_t v2, kk_box_t w1, kk_box_t w2, bool _y_x10037, kk_context_t* _ctx); /* forall<a,e,b> (?field4/(==) : (a, a) -> e bool, ?field5/(==) : (b, b) -> e bool, v1 : b, v2 : b, w1 : a, w2 : a, bool) -> e bool */ 

bool kk_std_core_tuple_tuple5_fs__lp__at_mlift_x_10175_eq__eq__rp_(kk_function_t _implicit_fs_field4_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_field5_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_thd_fs__lp__eq__eq__rp_, kk_box_t v1, kk_box_t v2, kk_box_t w1, kk_box_t w2, kk_box_t z1, kk_box_t z2, bool _y_x10036, kk_context_t* _ctx); /* forall<a,b,e,c> (?field4/(==) : (b, b) -> e bool, ?field5/(==) : (c, c) -> e bool, ?thd/(==) : (a, a) -> e bool, v1 : c, v2 : c, w1 : b, w2 : b, z1 : a, z2 : a, bool) -> e bool */ 

bool kk_std_core_tuple_tuple5_fs__lp__at_mlift_x_10176_eq__eq__rp_(kk_function_t _implicit_fs_field4_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_field5_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_thd_fs__lp__eq__eq__rp_, kk_box_t v1, kk_box_t v2, kk_box_t w1, kk_box_t w2, kk_box_t y1, kk_box_t y2, kk_box_t z1, kk_box_t z2, bool _y_x10035, kk_context_t* _ctx); /* forall<a,b,c,e,d> (?field4/(==) : (c, c) -> e bool, ?field5/(==) : (d, d) -> e bool, ?snd/(==) : (a, a) -> e bool, ?thd/(==) : (b, b) -> e bool, v1 : d, v2 : d, w1 : c, w2 : c, y1 : a, y2 : a, z1 : b, z2 : b, bool) -> e bool */ 

bool kk_std_core_tuple_tuple5_fs__lp__eq__eq__rp_(kk_std_core_types__tuple5 _pat_x50__22, kk_std_core_types__tuple5 _pat_x50__54, kk_function_t _implicit_fs_fst_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_snd_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_thd_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_field4_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_field5_fs__lp__eq__eq__rp_, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> ((a, b, c, d, a1), (a, b, c, d, a1), ?fst/(==) : (a, a) -> e bool, ?snd/(==) : (b, b) -> e bool, ?thd/(==) : (c, c) -> e bool, ?field4/(==) : (d, d) -> e bool, ?field5/(==) : (a1, a1) -> e bool) -> e bool */ 
 
// Order on unit

static inline kk_std_core_types__order kk_std_core_tuple_unit_fs_cmp(kk_unit_t a, kk_unit_t b, kk_context_t* _ctx) { /* (a : (), b : ()) -> order */ 
  return kk_std_core_types__new_Eq(_ctx);
}
 
// monadic lift

static inline kk_std_core_types__order kk_std_core_tuple_tuple2_fs__mlift_cmp_10177(kk_function_t _implicit_fs_snd_fs_cmp, kk_box_t y1, kk_box_t y2, kk_std_core_types__order _y_x10046, kk_context_t* _ctx) { /* forall<a,e> (?snd/cmp : (a, a) -> e order, y1 : a, y2 : a, order) -> e order */ 
  if (kk_std_core_types__is_Eq(_y_x10046, _ctx)) {
    return kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_snd_fs_cmp, (_implicit_fs_snd_fs_cmp, y1, y2, _ctx), _ctx);
  }
  {
    kk_box_drop(y2, _ctx);
    kk_box_drop(y1, _ctx);
    kk_function_drop(_implicit_fs_snd_fs_cmp, _ctx);
    return _y_x10046;
  }
}

kk_std_core_types__order kk_std_core_tuple_tuple2_fs_cmp(kk_std_core_types__tuple2 _pat_x60__21, kk_std_core_types__tuple2 _pat_x60__38, kk_function_t _implicit_fs_fst_fs_cmp, kk_function_t _implicit_fs_snd_fs_cmp, kk_context_t* _ctx); /* forall<a,b,e> ((a, b), (a, b), ?fst/cmp : (a, a) -> e order, ?snd/cmp : (b, b) -> e order) -> e order */ 
 
// monadic lift

static inline kk_std_core_types__order kk_std_core_tuple_tuple3_fs__mlift_cmp_10178(kk_function_t _implicit_fs_thd_fs_cmp, kk_box_t z1, kk_box_t z2, kk_std_core_types__order _y_x10052, kk_context_t* _ctx) { /* forall<a,e> (?thd/cmp : (a, a) -> e order, z1 : a, z2 : a, order) -> e order */ 
  if (kk_std_core_types__is_Eq(_y_x10052, _ctx)) {
    return kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_thd_fs_cmp, (_implicit_fs_thd_fs_cmp, z1, z2, _ctx), _ctx);
  }
  {
    kk_box_drop(z2, _ctx);
    kk_box_drop(z1, _ctx);
    kk_function_drop(_implicit_fs_thd_fs_cmp, _ctx);
    return _y_x10052;
  }
}

kk_std_core_types__order kk_std_core_tuple_tuple3_fs__mlift_cmp_10179(kk_function_t _implicit_fs_snd_fs_cmp, kk_function_t _implicit_fs_thd_fs_cmp, kk_box_t y1, kk_box_t y2, kk_box_t z1, kk_box_t z2, kk_std_core_types__order _y_x10051, kk_context_t* _ctx); /* forall<a,b,e> (?snd/cmp : (a, a) -> e order, ?thd/cmp : (b, b) -> e order, y1 : a, y2 : a, z1 : b, z2 : b, order) -> e order */ 

kk_std_core_types__order kk_std_core_tuple_tuple3_fs_cmp(kk_std_core_types__tuple3 _pat_x66__26, kk_std_core_types__tuple3 _pat_x66__48, kk_function_t _implicit_fs_fst_fs_cmp, kk_function_t _implicit_fs_snd_fs_cmp, kk_function_t _implicit_fs_thd_fs_cmp, kk_context_t* _ctx); /* forall<a,b,c,e> ((a, b, c), (a, b, c), ?fst/cmp : (a, a) -> e order, ?snd/cmp : (b, b) -> e order, ?thd/cmp : (c, c) -> e order) -> e order */ 
 
// monadic lift

static inline kk_std_core_types__order kk_std_core_tuple_tuple4_fs__mlift_cmp_10180(kk_function_t _implicit_fs_field4_fs_cmp, kk_box_t w1, kk_box_t w2, kk_std_core_types__order _y_x10060, kk_context_t* _ctx) { /* forall<a,e> (?field4/cmp : (a, a) -> e order, w1 : a, w2 : a, order) -> e order */ 
  if (kk_std_core_types__is_Eq(_y_x10060, _ctx)) {
    return kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_field4_fs_cmp, (_implicit_fs_field4_fs_cmp, w1, w2, _ctx), _ctx);
  }
  {
    kk_box_drop(w2, _ctx);
    kk_box_drop(w1, _ctx);
    kk_function_drop(_implicit_fs_field4_fs_cmp, _ctx);
    return _y_x10060;
  }
}

kk_std_core_types__order kk_std_core_tuple_tuple4_fs__mlift_cmp_10181(kk_function_t _implicit_fs_field4_fs_cmp, kk_function_t _implicit_fs_thd_fs_cmp, kk_box_t w1, kk_box_t w2, kk_box_t z1, kk_box_t z2, kk_std_core_types__order _y_x10059, kk_context_t* _ctx); /* forall<a,b,e> (?field4/cmp : (b, b) -> e order, ?thd/cmp : (a, a) -> e order, w1 : b, w2 : b, z1 : a, z2 : a, order) -> e order */ 

kk_std_core_types__order kk_std_core_tuple_tuple4_fs__mlift_cmp_10182(kk_function_t _implicit_fs_field4_fs_cmp, kk_function_t _implicit_fs_snd_fs_cmp, kk_function_t _implicit_fs_thd_fs_cmp, kk_box_t w1, kk_box_t w2, kk_box_t y1, kk_box_t y2, kk_box_t z1, kk_box_t z2, kk_std_core_types__order _y_x10058, kk_context_t* _ctx); /* forall<a,b,c,e> (?field4/cmp : (c, c) -> e order, ?snd/cmp : (a, a) -> e order, ?thd/cmp : (b, b) -> e order, w1 : c, w2 : c, y1 : a, y2 : a, z1 : b, z2 : b, order) -> e order */ 

kk_std_core_types__order kk_std_core_tuple_tuple4_fs_cmp(kk_std_core_types__tuple4 _pat_x74__26, kk_std_core_types__tuple4 _pat_x74__53, kk_function_t _implicit_fs_fst_fs_cmp, kk_function_t _implicit_fs_snd_fs_cmp, kk_function_t _implicit_fs_thd_fs_cmp, kk_function_t _implicit_fs_field4_fs_cmp, kk_context_t* _ctx); /* forall<a,b,c,d,e> ((a, b, c, d), (a, b, c, d), ?fst/cmp : (a, a) -> e order, ?snd/cmp : (b, b) -> e order, ?thd/cmp : (c, c) -> e order, ?field4/cmp : (d, d) -> e order) -> e order */ 
 
// monadic lift

static inline kk_std_core_types__order kk_std_core_tuple_tuple5_fs__mlift_cmp_10183(kk_function_t _implicit_fs_field5_fs_cmp, kk_box_t v1, kk_box_t v2, kk_std_core_types__order _y_x10070, kk_context_t* _ctx) { /* forall<e,a> (?field5/cmp : (a, a) -> e order, v1 : a, v2 : a, order) -> e order */ 
  if (kk_std_core_types__is_Eq(_y_x10070, _ctx)) {
    return kk_function_call(kk_std_core_types__order, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs_field5_fs_cmp, (_implicit_fs_field5_fs_cmp, v1, v2, _ctx), _ctx);
  }
  {
    kk_box_drop(v2, _ctx);
    kk_box_drop(v1, _ctx);
    kk_function_drop(_implicit_fs_field5_fs_cmp, _ctx);
    return _y_x10070;
  }
}

kk_std_core_types__order kk_std_core_tuple_tuple5_fs__mlift_cmp_10184(kk_function_t _implicit_fs_field4_fs_cmp, kk_function_t _implicit_fs_field5_fs_cmp, kk_box_t v1, kk_box_t v2, kk_box_t w1, kk_box_t w2, kk_std_core_types__order _y_x10069, kk_context_t* _ctx); /* forall<a,e,b> (?field4/cmp : (a, a) -> e order, ?field5/cmp : (b, b) -> e order, v1 : b, v2 : b, w1 : a, w2 : a, order) -> e order */ 

kk_std_core_types__order kk_std_core_tuple_tuple5_fs__mlift_cmp_10185(kk_function_t _implicit_fs_field4_fs_cmp, kk_function_t _implicit_fs_field5_fs_cmp, kk_function_t _implicit_fs_thd_fs_cmp, kk_box_t v1, kk_box_t v2, kk_box_t w1, kk_box_t w2, kk_box_t z1, kk_box_t z2, kk_std_core_types__order _y_x10068, kk_context_t* _ctx); /* forall<a,b,e,c> (?field4/cmp : (b, b) -> e order, ?field5/cmp : (c, c) -> e order, ?thd/cmp : (a, a) -> e order, v1 : c, v2 : c, w1 : b, w2 : b, z1 : a, z2 : a, order) -> e order */ 

kk_std_core_types__order kk_std_core_tuple_tuple5_fs__mlift_cmp_10186(kk_function_t _implicit_fs_field4_fs_cmp, kk_function_t _implicit_fs_field5_fs_cmp, kk_function_t _implicit_fs_snd_fs_cmp, kk_function_t _implicit_fs_thd_fs_cmp, kk_box_t v1, kk_box_t v2, kk_box_t w1, kk_box_t w2, kk_box_t y1, kk_box_t y2, kk_box_t z1, kk_box_t z2, kk_std_core_types__order _y_x10067, kk_context_t* _ctx); /* forall<a,b,c,e,d> (?field4/cmp : (c, c) -> e order, ?field5/cmp : (d, d) -> e order, ?snd/cmp : (a, a) -> e order, ?thd/cmp : (b, b) -> e order, v1 : d, v2 : d, w1 : c, w2 : c, y1 : a, y2 : a, z1 : b, z2 : b, order) -> e order */ 

kk_std_core_types__order kk_std_core_tuple_tuple5_fs_cmp(kk_std_core_types__tuple5 _pat_x86__26, kk_std_core_types__tuple5 _pat_x86__58, kk_function_t _implicit_fs_fst_fs_cmp, kk_function_t _implicit_fs_snd_fs_cmp, kk_function_t _implicit_fs_thd_fs_cmp, kk_function_t _implicit_fs_field4_fs_cmp, kk_function_t _implicit_fs_field5_fs_cmp, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> ((a, b, c, d, a1), (a, b, c, d, a1), ?fst/cmp : (a, a) -> e order, ?snd/cmp : (b, b) -> e order, ?thd/cmp : (c, c) -> e order, ?field4/cmp : (d, d) -> e order, ?field5/cmp : (a1, a1) -> e order) -> e order */ 
 
// fip ordering of unit values

static inline kk_std_core_types__order2 kk_std_core_tuple_unit_fs_order2(kk_unit_t a, kk_unit_t b, kk_context_t* _ctx) { /* (a : (), b : ()) -> order2<()> */ 
  return kk_std_core_types__new_Eq2(kk_unit_box(a), _ctx);
}

kk_std_core_types__order2 kk_std_core_tuple_tuple2_fs__mlift_order2_10187(kk_box_t z1, kk_std_core_types__order2 _y_x10079, kk_context_t* _ctx); /* forall<a,b,e> (z1 : a, order2<b>) -> e order2<(a, b)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple2_fs__mlift_order2_10188(kk_function_t _implicit_fs_b_fs_order2, kk_box_t x2, kk_box_t y2, kk_std_core_types__order2 _y_x10078, kk_context_t* _ctx); /* forall<a,b,e> (?b/order2 : (b, b) -> e order2<b>, x2 : b, y2 : b, order2<a>) -> e order2<(a, b)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple2_fs_order2(kk_std_core_types__tuple2 _pat_x104__24, kk_std_core_types__tuple2 _pat_x104__42, kk_function_t _implicit_fs_a_fs_order2, kk_function_t _implicit_fs_b_fs_order2, kk_context_t* _ctx); /* forall<a,b,e> ((a, b), (a, b), ?a/order2 : (a, a) -> e order2<a>, ?b/order2 : (b, b) -> e order2<b>) -> e order2<(a, b)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple3_fs__mlift_order2_10189(kk_box_t z1, kk_box_t z2, kk_std_core_types__order2 _y_x10085, kk_context_t* _ctx); /* forall<a,b,c,e> (z1 : a, z2 : b, order2<c>) -> e order2<(a, b, c)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple3_fs__mlift_order2_10190(kk_function_t _implicit_fs_c_fs_order2, kk_box_t x3, kk_box_t y3, kk_box_t z1, kk_std_core_types__order2 _y_x10084, kk_context_t* _ctx); /* forall<a,b,c,e> (?c/order2 : (c, c) -> e order2<c>, x3 : c, y3 : c, z1 : a, order2<b>) -> e order2<(a, b, c)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple3_fs__mlift_order2_10191(kk_function_t _implicit_fs_b_fs_order2, kk_function_t _implicit_fs_c_fs_order2, kk_box_t x2, kk_box_t x3, kk_box_t y2, kk_box_t y3, kk_std_core_types__order2 _y_x10083, kk_context_t* _ctx); /* forall<a,b,c,e> (?b/order2 : (b, b) -> e order2<b>, ?c/order2 : (c, c) -> e order2<c>, x2 : b, x3 : c, y2 : b, y3 : c, order2<a>) -> e order2<(a, b, c)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple3_fs_order2(kk_std_core_types__tuple3 _pat_x115__24, kk_std_core_types__tuple3 _pat_x115__49, kk_function_t _implicit_fs_a_fs_order2, kk_function_t _implicit_fs_b_fs_order2, kk_function_t _implicit_fs_c_fs_order2, kk_context_t* _ctx); /* forall<a,b,c,e> ((a, b, c), (a, b, c), ?a/order2 : (a, a) -> e order2<a>, ?b/order2 : (b, b) -> e order2<b>, ?c/order2 : (c, c) -> e order2<c>) -> e order2<(a, b, c)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple4_fs__mlift_order2_10192(kk_box_t z1, kk_box_t z2, kk_box_t z3, kk_std_core_types__order2 _y_x10093, kk_context_t* _ctx); /* forall<a,b,c,d,e> (z1 : a, z2 : b, z3 : c, order2<d>) -> e order2<(a, b, c, d)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple4_fs__mlift_order2_10193(kk_function_t _implicit_fs_field4_fs_order2, kk_box_t x4, kk_box_t y4, kk_box_t z1, kk_box_t z2, kk_std_core_types__order2 _y_x10092, kk_context_t* _ctx); /* forall<a,b,c,d,e> (?field4/order2 : (d, d) -> e order2<d>, x4 : d, y4 : d, z1 : a, z2 : b, order2<c>) -> e order2<(a, b, c, d)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple4_fs__mlift_order2_10194(kk_function_t _implicit_fs_c_fs_order2, kk_function_t _implicit_fs_field4_fs_order2, kk_box_t x3, kk_box_t x4, kk_box_t y3, kk_box_t y4, kk_box_t z1, kk_std_core_types__order2 _y_x10091, kk_context_t* _ctx); /* forall<a,b,c,d,e> (?c/order2 : (c, c) -> e order2<c>, ?field4/order2 : (d, d) -> e order2<d>, x3 : c, x4 : d, y3 : c, y4 : d, z1 : a, order2<b>) -> e order2<(a, b, c, d)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple4_fs__mlift_order2_10195(kk_function_t _implicit_fs_b_fs_order2, kk_function_t _implicit_fs_c_fs_order2, kk_function_t _implicit_fs_field4_fs_order2, kk_box_t x2, kk_box_t x3, kk_box_t x4, kk_box_t y2, kk_box_t y3, kk_box_t y4, kk_std_core_types__order2 _y_x10090, kk_context_t* _ctx); /* forall<a,b,c,d,e> (?b/order2 : (b, b) -> e order2<b>, ?c/order2 : (c, c) -> e order2<c>, ?field4/order2 : (d, d) -> e order2<d>, x2 : b, x3 : c, x4 : d, y2 : b, y3 : c, y4 : d, order2<a>) -> e order2<(a, b, c, d)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple4_fs_order2(kk_std_core_types__tuple4 _pat_x130__24, kk_std_core_types__tuple4 _pat_x130__56, kk_function_t _implicit_fs_a_fs_order2, kk_function_t _implicit_fs_b_fs_order2, kk_function_t _implicit_fs_c_fs_order2, kk_function_t _implicit_fs_field4_fs_order2, kk_context_t* _ctx); /* forall<a,b,c,d,e> ((a, b, c, d), (a, b, c, d), ?a/order2 : (a, a) -> e order2<a>, ?b/order2 : (b, b) -> e order2<b>, ?c/order2 : (c, c) -> e order2<c>, ?field4/order2 : (d, d) -> e order2<d>) -> e order2<(a, b, c, d)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple5_fs__mlift_order2_10196(kk_box_t z1, kk_box_t z2, kk_box_t z3, kk_box_t z4, kk_std_core_types__order2 _y_x10103, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (z1 : a, z2 : b, z3 : c, z4 : d, order2<a1>) -> e order2<(a, b, c, d, a1)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple5_fs__mlift_order2_10197(kk_function_t _implicit_fs_field5_fs_order2, kk_box_t x5, kk_box_t y5, kk_box_t z1, kk_box_t z2, kk_box_t z3, kk_std_core_types__order2 _y_x10102, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (?field5/order2 : (a1, a1) -> e order2<a1>, x5 : a1, y5 : a1, z1 : a, z2 : b, z3 : c, order2<d>) -> e order2<(a, b, c, d, a1)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple5_fs__mlift_order2_10198(kk_function_t _implicit_fs_field4_fs_order2, kk_function_t _implicit_fs_field5_fs_order2, kk_box_t x4, kk_box_t x5, kk_box_t y4, kk_box_t y5, kk_box_t z1, kk_box_t z2, kk_std_core_types__order2 _y_x10101, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (?field4/order2 : (d, d) -> e order2<d>, ?field5/order2 : (a1, a1) -> e order2<a1>, x4 : d, x5 : a1, y4 : d, y5 : a1, z1 : a, z2 : b, order2<c>) -> e order2<(a, b, c, d, a1)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple5_fs__mlift_order2_10199(kk_function_t _implicit_fs_c_fs_order2, kk_function_t _implicit_fs_field4_fs_order2, kk_function_t _implicit_fs_field5_fs_order2, kk_box_t x3, kk_box_t x4, kk_box_t x5, kk_box_t y3, kk_box_t y4, kk_box_t y5, kk_box_t z1, kk_std_core_types__order2 _y_x10100, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (?c/order2 : (c, c) -> e order2<c>, ?field4/order2 : (d, d) -> e order2<d>, ?field5/order2 : (a1, a1) -> e order2<a1>, x3 : c, x4 : d, x5 : a1, y3 : c, y4 : d, y5 : a1, z1 : a, order2<b>) -> e order2<(a, b, c, d, a1)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple5_fs__mlift_order2_10200(kk_function_t _implicit_fs_b_fs_order2, kk_function_t _implicit_fs_c_fs_order2, kk_function_t _implicit_fs_field4_fs_order2, kk_function_t _implicit_fs_field5_fs_order2, kk_box_t x2, kk_box_t x3, kk_box_t x4, kk_box_t x5, kk_box_t y2, kk_box_t y3, kk_box_t y4, kk_box_t y5, kk_std_core_types__order2 _y_x10099, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (?b/order2 : (b, b) -> e order2<b>, ?c/order2 : (c, c) -> e order2<c>, ?field4/order2 : (d, d) -> e order2<d>, ?field5/order2 : (a1, a1) -> e order2<a1>, x2 : b, x3 : c, x4 : d, x5 : a1, y2 : b, y3 : c, y4 : d, y5 : a1, order2<a>) -> e order2<(a, b, c, d, a1)> */ 

kk_std_core_types__order2 kk_std_core_tuple_tuple5_fs_order2(kk_std_core_types__tuple5 _pat_x148__24, kk_std_core_types__tuple5 _pat_x148__63, kk_function_t _implicit_fs_a_fs_order2, kk_function_t _implicit_fs_b_fs_order2, kk_function_t _implicit_fs_c_fs_order2, kk_function_t _implicit_fs_field4_fs_order2, kk_function_t _implicit_fs_field5_fs_order2, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> ((a, b, c, d, a1), (a, b, c, d, a1), ?a/order2 : (a, a) -> e order2<a>, ?b/order2 : (b, b) -> e order2<b>, ?c/order2 : (c, c) -> e order2<c>, ?field4/order2 : (d, d) -> e order2<d>, ?field5/order2 : (a1, a1) -> e order2<a1>) -> e order2<(a, b, c, d, a1)> */ 
 
// Convert a unit value `()` to a string

static inline kk_string_t kk_std_core_tuple_unit_fs_show(kk_unit_t u, kk_context_t* _ctx) { /* (u : ()) -> string */ 
  kk_define_string_literal(static, _s_x1460, 2, "()", _ctx)
  return kk_string_dup(_s_x1460, _ctx);
}
 
// monadic lift

static inline kk_string_t kk_std_core_tuple_tuple2_fs__mlift_show_10201(kk_string_t _y_x10110, kk_string_t _y_x10111, kk_context_t* _ctx) { /* forall<e> (string, string) -> e string */ 
  kk_string_t _x_x1461;
  kk_define_string_literal(static, _s_x1462, 1, "(", _ctx)
  _x_x1461 = kk_string_dup(_s_x1462, _ctx); /*string*/
  kk_string_t _x_x1463;
  kk_string_t _x_x1464;
  kk_string_t _x_x1465;
  kk_define_string_literal(static, _s_x1466, 1, ",", _ctx)
  _x_x1465 = kk_string_dup(_s_x1466, _ctx); /*string*/
  kk_string_t _x_x1467;
  kk_string_t _x_x1468;
  kk_define_string_literal(static, _s_x1469, 1, ")", _ctx)
  _x_x1468 = kk_string_dup(_s_x1469, _ctx); /*string*/
  _x_x1467 = kk_std_core_types__lp__plus__plus__rp_(_y_x10111, _x_x1468, _ctx); /*string*/
  _x_x1464 = kk_std_core_types__lp__plus__plus__rp_(_x_x1465, _x_x1467, _ctx); /*string*/
  _x_x1463 = kk_std_core_types__lp__plus__plus__rp_(_y_x10110, _x_x1464, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x1461, _x_x1463, _ctx);
}

kk_string_t kk_std_core_tuple_tuple2_fs__mlift_show_10202(kk_function_t _implicit_fs_snd_fs_show, kk_std_core_types__tuple2 x, kk_string_t _y_x10110, kk_context_t* _ctx); /* forall<a,b,e> (?snd/show : (b) -> e string, x : (a, b), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple2_fs_show(kk_std_core_types__tuple2 x, kk_function_t _implicit_fs_fst_fs_show, kk_function_t _implicit_fs_snd_fs_show, kk_context_t* _ctx); /* forall<a,b,e> (x : (a, b), ?fst/show : (a) -> e string, ?snd/show : (b) -> e string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple3_fs__mlift_show_10203(kk_string_t _y_x10112, kk_string_t _y_x10113, kk_string_t _y_x10114, kk_context_t* _ctx); /* forall<e> (string, string, string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple3_fs__mlift_show_10204(kk_string_t _y_x10112, kk_function_t _implicit_fs_thd_fs_show, kk_std_core_types__tuple3 x, kk_string_t _y_x10113, kk_context_t* _ctx); /* forall<a,b,c,e> (string, ?thd/show : (c) -> e string, x : (a, b, c), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple3_fs__mlift_show_10205(kk_function_t _implicit_fs_snd_fs_show, kk_function_t _implicit_fs_thd_fs_show, kk_std_core_types__tuple3 x, kk_string_t _y_x10112, kk_context_t* _ctx); /* forall<a,b,c,e> (?snd/show : (b) -> e string, ?thd/show : (c) -> e string, x : (a, b, c), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple3_fs_show(kk_std_core_types__tuple3 x, kk_function_t _implicit_fs_fst_fs_show, kk_function_t _implicit_fs_snd_fs_show, kk_function_t _implicit_fs_thd_fs_show, kk_context_t* _ctx); /* forall<a,b,c,e> (x : (a, b, c), ?fst/show : (a) -> e string, ?snd/show : (b) -> e string, ?thd/show : (c) -> e string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple4_fs__mlift_show_10206(kk_string_t _y_x10115, kk_string_t _y_x10116, kk_string_t _y_x10117, kk_string_t _y_x10118, kk_context_t* _ctx); /* forall<e> (string, string, string, string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple4_fs__mlift_show_10207(kk_string_t _y_x10115, kk_string_t _y_x10116, kk_function_t _implicit_fs_field4_fs_show, kk_std_core_types__tuple4 x, kk_string_t _y_x10117, kk_context_t* _ctx); /* forall<a,b,c,d,e> (string, string, ?field4/show : (d) -> e string, x : (a, b, c, d), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple4_fs__mlift_show_10208(kk_string_t _y_x10115, kk_function_t _implicit_fs_field4_fs_show, kk_function_t _implicit_fs_thd_fs_show, kk_std_core_types__tuple4 x, kk_string_t _y_x10116, kk_context_t* _ctx); /* forall<a,b,c,d,e> (string, ?field4/show : (d) -> e string, ?thd/show : (c) -> e string, x : (a, b, c, d), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple4_fs__mlift_show_10209(kk_function_t _implicit_fs_field4_fs_show, kk_function_t _implicit_fs_snd_fs_show, kk_function_t _implicit_fs_thd_fs_show, kk_std_core_types__tuple4 x, kk_string_t _y_x10115, kk_context_t* _ctx); /* forall<a,b,c,d,e> (?field4/show : (d) -> e string, ?snd/show : (b) -> e string, ?thd/show : (c) -> e string, x : (a, b, c, d), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple4_fs_show(kk_std_core_types__tuple4 x, kk_function_t _implicit_fs_fst_fs_show, kk_function_t _implicit_fs_snd_fs_show, kk_function_t _implicit_fs_thd_fs_show, kk_function_t _implicit_fs_field4_fs_show, kk_context_t* _ctx); /* forall<a,b,c,d,e> (x : (a, b, c, d), ?fst/show : (a) -> e string, ?snd/show : (b) -> e string, ?thd/show : (c) -> e string, ?field4/show : (d) -> e string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple5_fs__mlift_show_10210(kk_string_t _y_x10119, kk_string_t _y_x10120, kk_string_t _y_x10121, kk_string_t _y_x10122, kk_string_t _y_x10123, kk_context_t* _ctx); /* forall<e> (string, string, string, string, string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple5_fs__mlift_show_10211(kk_string_t _y_x10119, kk_string_t _y_x10120, kk_string_t _y_x10121, kk_function_t _implicit_fs_field5_fs_show, kk_std_core_types__tuple5 x, kk_string_t _y_x10122, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (string, string, string, ?field5/show : (a1) -> e string, x : (a, b, c, d, a1), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple5_fs__mlift_show_10212(kk_string_t _y_x10119, kk_string_t _y_x10120, kk_function_t _implicit_fs_field4_fs_show, kk_function_t _implicit_fs_field5_fs_show, kk_std_core_types__tuple5 x, kk_string_t _y_x10121, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (string, string, ?field4/show : (d) -> e string, ?field5/show : (a1) -> e string, x : (a, b, c, d, a1), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple5_fs__mlift_show_10213(kk_string_t _y_x10119, kk_function_t _implicit_fs_field4_fs_show, kk_function_t _implicit_fs_field5_fs_show, kk_function_t _implicit_fs_thd_fs_show, kk_std_core_types__tuple5 x, kk_string_t _y_x10120, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (string, ?field4/show : (d) -> e string, ?field5/show : (a1) -> e string, ?thd/show : (c) -> e string, x : (a, b, c, d, a1), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple5_fs__mlift_show_10214(kk_function_t _implicit_fs_field4_fs_show, kk_function_t _implicit_fs_field5_fs_show, kk_function_t _implicit_fs_snd_fs_show, kk_function_t _implicit_fs_thd_fs_show, kk_std_core_types__tuple5 x, kk_string_t _y_x10119, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (?field4/show : (d) -> e string, ?field5/show : (a1) -> e string, ?snd/show : (b) -> e string, ?thd/show : (c) -> e string, x : (a, b, c, d, a1), string) -> e string */ 

kk_string_t kk_std_core_tuple_tuple5_fs_show(kk_std_core_types__tuple5 x, kk_function_t _implicit_fs_fst_fs_show, kk_function_t _implicit_fs_snd_fs_show, kk_function_t _implicit_fs_thd_fs_show, kk_function_t _implicit_fs_field4_fs_show, kk_function_t _implicit_fs_field5_fs_show, kk_context_t* _ctx); /* forall<a,b,c,d,e,a1> (x : (a, b, c, d, a1), ?fst/show : (a) -> e string, ?snd/show : (b) -> e string, ?thd/show : (c) -> e string, ?field4/show : (d) -> e string, ?field5/show : (a1) -> e string) -> e string */ 
 
// _deprecated_, use `tuple2/show` instead

static inline kk_string_t kk_std_core_tuple_show_tuple(kk_std_core_types__tuple2 x, kk_function_t showfst, kk_function_t showsnd, kk_context_t* _ctx) { /* forall<a,b,e> (x : (a, b), showfst : (a) -> e string, showsnd : (b) -> e string) -> e string */ 
  return kk_std_core_tuple_tuple2_fs_show(x, showfst, showsnd, _ctx);
}

void kk_std_core_tuple__init(kk_context_t* _ctx);


void kk_std_core_tuple__done(kk_context_t* _ctx);

#endif // header
