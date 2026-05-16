// Koka generated module: std/text/parse, koka version: 3.2.3, platform: 64-bit
#include "std_text_parse.h"
 
// runtime tag for the effect `:parse`

kk_std_core_hnd__htag kk_std_text_parse_parse_fs__tag;
 
// handler for the effect `:parse`

kk_box_t kk_std_text_parse_parse_fs__handle(kk_std_text_parse__parse hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : parse<e,b>, ret : (res : a) -> e b, action : () -> <parse|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x865 = kk_std_core_hnd__htag_dup(kk_std_text_parse_parse_fs__tag, _ctx); /*hnd/htag<std/text/parse/parse>*/
  return kk_std_core_hnd__hhandle(_x_x865, kk_std_text_parse__parse_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_box_t kk_std_text_parse_satisfy_fun871(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fun871__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fun871__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (sslice/sslice) -> maybe<(533, sslice/sslice)> */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x872;
  kk_std_core_sslice__sslice _x_x873 = kk_std_core_sslice__sslice_unbox(_b_x21, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x872 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core_sslice__sslice, kk_context_t*), pred, (pred, _x_x873, _ctx), _ctx); /*maybe<(533, sslice/sslice)>*/
  return kk_std_core_types__maybe_box(_x_x872, _ctx);
}

kk_std_core_types__either kk_std_text_parse_either(kk_std_text_parse__parse_error perr, kk_context_t* _ctx) { /* forall<a> (perr : parse-error<a>) -> either<string,a> */ 
  if (kk_std_text_parse__is_ParseOk(perr, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x892 = kk_std_text_parse__as_ParseOk(perr, _ctx);
    kk_std_core_sslice__sslice _pat_0 = _con_x892->rest;
    kk_box_t x = _con_x892->result;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Right(x, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x893 = kk_std_text_parse__as_ParseError(perr, _ctx);
    kk_std_core_sslice__sslice _pat_5 = _con_x893->rest;
    kk_string_t msg = _con_x893->msg;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Left(kk_string_box(msg), _ctx);
  }
}

kk_std_core_types__maybe kk_std_text_parse_maybe(kk_std_text_parse__parse_error perr, kk_context_t* _ctx) { /* forall<a> (perr : parse-error<a>) -> maybe<a> */ 
  if (kk_std_text_parse__is_ParseOk(perr, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x894 = kk_std_text_parse__as_ParseOk(perr, _ctx);
    kk_std_core_sslice__sslice _pat_0_0 = _con_x894->rest;
    kk_box_t x_0 = _con_x894->result;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Just(x_0, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x895 = kk_std_text_parse__as_ParseError(perr, _ctx);
    kk_std_core_sslice__sslice _pat_5 = _con_x895->rest;
    kk_string_t msg = _con_x895->msg;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_string_drop(msg, _ctx);
      kk_std_core_sslice__sslice_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// monadic lift

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10177(kk_std_text_parse__parse_error err1, kk_std_text_parse__parse_error _y_x10079, kk_context_t* _ctx) { /* forall<h,a,e> (err1 : parse-error<a>, parse-error<a>) -> <local<h>|e> parse-error<a> */ 
  if (kk_std_text_parse__is_ParseOk(_y_x10079, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x896 = kk_std_text_parse__as_ParseOk(_y_x10079, _ctx);
    kk_std_core_sslice__sslice rest2 = _con_x896->rest;
    kk_box_t x2 = _con_x896->result;
    kk_std_text_parse__parse_error_drop(err1, _ctx);
    kk_reuse_t _ru_x837 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10079, _ctx)) {
      _ru_x837 = (kk_datatype_ptr_reuse(_y_x10079, _ctx));
    }
    else {
      kk_std_core_sslice__sslice_dup(rest2, _ctx);
      kk_box_dup(x2, _ctx);
      kk_datatype_ptr_decref(_y_x10079, _ctx);
    }
    return kk_std_text_parse__new_ParseOk(_ru_x837, 0, x2, rest2, _ctx);
  }
  {
    kk_std_text_parse__parse_error_drop(_y_x10079, _ctx);
    return err1;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10178_fun898__t {
  struct kk_function_s _base;
  kk_std_text_parse__parse_error err1;
};
static kk_box_t kk_std_text_parse__mlift_parse_10178_fun898(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10178_fun898(kk_std_text_parse__parse_error err1, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10178_fun898__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10178_fun898__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10178_fun898, kk_context());
  _self->err1 = err1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10178_fun898(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10178_fun898__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10178_fun898__t*, _fself, _ctx);
  kk_std_text_parse__parse_error err1 = _self->err1; /* std/text/parse/parse-error<1455> */
  kk_drop_match(_self, {kk_std_text_parse__parse_error_dup(err1, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x899;
  kk_std_text_parse__parse_error _y_x10079_47 = kk_std_text_parse__parse_error_unbox(_b_x45, KK_OWNED, _ctx); /*std/text/parse/parse-error<1455>*/;
  if (kk_std_text_parse__is_ParseOk(_y_x10079_47, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x900 = kk_std_text_parse__as_ParseOk(_y_x10079_47, _ctx);
    kk_std_core_sslice__sslice rest2 = _con_x900->rest;
    kk_box_t x2 = _con_x900->result;
    kk_std_text_parse__parse_error_drop(err1, _ctx);
    kk_reuse_t _ru_x839 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10079_47, _ctx)) {
      _ru_x839 = (kk_datatype_ptr_reuse(_y_x10079_47, _ctx));
    }
    else {
      kk_std_core_sslice__sslice_dup(rest2, _ctx);
      kk_box_dup(x2, _ctx);
      kk_datatype_ptr_decref(_y_x10079_47, _ctx);
    }
    _x_x899 = kk_std_text_parse__new_ParseOk(_ru_x839, 0, x2, rest2, _ctx); /*std/text/parse/parse-error<33>*/
  }
  else {
    kk_std_text_parse__parse_error_drop(_y_x10079_47, _ctx);
    _x_x899 = err1; /*std/text/parse/parse-error<33>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x899, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10178(kk_std_text_parse__parse_error err1, kk_function_t resume, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,a,e> (err1 : parse-error<a>, resume : (bool) -> <local<h>|e> parse-error<a>, wild_ : ()) -> <local<h>|e> parse-error<a> */ 
  kk_std_text_parse__parse_error x_10213 = kk_function_call(kk_std_text_parse__parse_error, (kk_function_t, bool, kk_context_t*), resume, (resume, false, _ctx), _ctx); /*std/text/parse/parse-error<1455>*/;
  if (kk_yielding(kk_context())) {
    kk_std_text_parse__parse_error_drop(x_10213, _ctx);
    kk_box_t _x_x897 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10178_fun898(err1, _ctx), _ctx); /*2419*/
    return kk_std_text_parse__parse_error_unbox(_x_x897, KK_OWNED, _ctx);
  }
  {
    kk_std_text_parse__parse_error _y_x10079_48 = x_10213; /*std/text/parse/parse-error<1455>*/;
    if (kk_std_text_parse__is_ParseOk(_y_x10079_48, _ctx)) {
      struct kk_std_text_parse_ParseOk* _con_x901 = kk_std_text_parse__as_ParseOk(_y_x10079_48, _ctx);
      kk_std_core_sslice__sslice rest2 = _con_x901->rest;
      kk_box_t x2 = _con_x901->result;
      kk_std_text_parse__parse_error_drop(err1, _ctx);
      kk_reuse_t _ru_x842 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(_y_x10079_48, _ctx)) {
        _ru_x842 = (kk_datatype_ptr_reuse(_y_x10079_48, _ctx));
      }
      else {
        kk_std_core_sslice__sslice_dup(rest2, _ctx);
        kk_box_dup(x2, _ctx);
        kk_datatype_ptr_decref(_y_x10079_48, _ctx);
      }
      return kk_std_text_parse__new_ParseOk(_ru_x842, 0, x2, rest2, _ctx);
    }
    {
      kk_std_text_parse__parse_error_drop(_y_x10079_48, _ctx);
      return err1;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10179_fun904__t {
  struct kk_function_s _base;
  kk_std_text_parse__parse_error _y_x10077;
  kk_function_t resume;
};
static kk_box_t kk_std_text_parse__mlift_parse_10179_fun904(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10179_fun904(kk_std_text_parse__parse_error _y_x10077, kk_function_t resume, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10179_fun904__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10179_fun904__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10179_fun904, kk_context());
  _self->_y_x10077 = _y_x10077;
  _self->resume = resume;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10179_fun904(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10179_fun904__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10179_fun904__t*, _fself, _ctx);
  kk_std_text_parse__parse_error _y_x10077 = _self->_y_x10077; /* std/text/parse/parse-error<1455> */
  kk_function_t resume = _self->resume; /* (bool) -> <local<1445>|1456> std/text/parse/parse-error<1455> */
  kk_drop_match(_self, {kk_std_text_parse__parse_error_dup(_y_x10077, _ctx);kk_function_dup(resume, _ctx);}, {}, _ctx)
  kk_unit_t wild___56 = kk_Unit;
  kk_unit_unbox(_b_x54);
  kk_std_text_parse__parse_error _x_x905 = kk_std_text_parse__mlift_parse_10178(_y_x10077, resume, wild___56, _ctx); /*std/text/parse/parse-error<1455>*/
  return kk_std_text_parse__parse_error_box(_x_x905, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10179(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_std_text_parse__parse_error _y_x10077, kk_context_t* _ctx) { /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice, parse-error<a>) -> <local<h>|e> parse-error<a> */ 
  if (kk_std_text_parse__is_ParseOk(_y_x10077, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x902 = kk_std_text_parse__as_ParseOk(_y_x10077, _ctx);
    kk_std_core_sslice__sslice rest1 = _con_x902->rest;
    kk_box_t x1 = _con_x902->result;
    kk_std_core_sslice__sslice_drop(save, _ctx);
    kk_function_drop(resume, _ctx);
    kk_ref_drop(input, _ctx);
    kk_reuse_t _ru_x845 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10077, _ctx)) {
      _ru_x845 = (kk_datatype_ptr_reuse(_y_x10077, _ctx));
    }
    else {
      kk_std_core_sslice__sslice_dup(rest1, _ctx);
      kk_box_dup(x1, _ctx);
      kk_datatype_ptr_decref(_y_x10077, _ctx);
    }
    return kk_std_text_parse__new_ParseOk(_ru_x845, 0, x1, rest1, _ctx);
  }
  {
    kk_unit_t x_10217 = kk_Unit;
    kk_unit_t _brw_x826 = kk_Unit;
    kk_ref_set_borrow(input,(kk_std_core_sslice__sslice_box(save, _ctx)),kk_context());
    kk_ref_drop(input, _ctx);
    _brw_x826;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x903 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10179_fun904(_y_x10077, resume, _ctx), _ctx); /*2419*/
      return kk_std_text_parse__parse_error_unbox(_x_x903, KK_OWNED, _ctx);
    }
    {
      return kk_std_text_parse__mlift_parse_10178(_y_x10077, resume, x_10217, _ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10180_fun908__t {
  struct kk_function_s _base;
  kk_ref_t input;
  kk_function_t resume;
  kk_std_core_sslice__sslice save;
};
static kk_box_t kk_std_text_parse__mlift_parse_10180_fun908(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10180_fun908(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10180_fun908__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10180_fun908__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10180_fun908, kk_context());
  _self->input = input;
  _self->resume = resume;
  _self->save = save;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10180_fun908(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10180_fun908__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10180_fun908__t*, _fself, _ctx);
  kk_ref_t input = _self->input; /* local-var<1445,sslice/sslice> */
  kk_function_t resume = _self->resume; /* (bool) -> <local<1445>|1456> std/text/parse/parse-error<1455> */
  kk_std_core_sslice__sslice save = _self->save; /* sslice/sslice */
  kk_drop_match(_self, {kk_ref_dup(input, _ctx);kk_function_dup(resume, _ctx);kk_std_core_sslice__sslice_dup(save, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _y_x10077_60 = kk_std_text_parse__parse_error_unbox(_b_x58, KK_OWNED, _ctx); /*std/text/parse/parse-error<1455>*/;
  kk_std_text_parse__parse_error _x_x909 = kk_std_text_parse__mlift_parse_10179(input, resume, save, _y_x10077_60, _ctx); /*std/text/parse/parse-error<1455>*/
  return kk_std_text_parse__parse_error_box(_x_x909, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10180(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_context_t* _ctx) { /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice) -> <local<h>|e> parse-error<a> */ 
  kk_std_text_parse__parse_error x_10219;
  kk_function_t _x_x906 = kk_function_dup(resume, _ctx); /*(bool) -> <local<1445>|1456> std/text/parse/parse-error<1455>*/
  x_10219 = kk_function_call(kk_std_text_parse__parse_error, (kk_function_t, bool, kk_context_t*), _x_x906, (_x_x906, true, _ctx), _ctx); /*std/text/parse/parse-error<1455>*/
  if (kk_yielding(kk_context())) {
    kk_std_text_parse__parse_error_drop(x_10219, _ctx);
    kk_box_t _x_x907 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10180_fun908(input, resume, save, _ctx), _ctx); /*2419*/
    return kk_std_text_parse__parse_error_unbox(_x_x907, KK_OWNED, _ctx);
  }
  {
    return kk_std_text_parse__mlift_parse_10179(input, resume, save, x_10219, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10182_fun911__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_text_parse__mlift_parse_10182_fun911(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10182_fun911(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10182_fun911__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10182_fun911__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10182_fun911, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10182_fun911(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10182_fun911__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10182_fun911__t*, _fself, _ctx);
  kk_box_t x = _self->x; /* 1394 */
  kk_drop_match(_self, {kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_70 = kk_Unit;
  kk_unit_unbox(_b_x68);
  kk_std_core_types__maybe _x_x912 = kk_std_core_types__new_Just(x, _ctx); /*maybe<88>*/
  return kk_std_core_types__maybe_box(_x_x912, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse__mlift_parse_10182(kk_ref_t input, kk_function_t pred, kk_std_core_sslice__sslice inp, kk_context_t* _ctx) { /* forall<a,h,e> (input : local-var<h,sslice/sslice>, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>, inp : sslice/sslice) -> <local<h>|e> maybe<a> */ 
  kk_std_core_types__maybe _match_x821 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core_sslice__sslice, kk_context_t*), pred, (pred, inp, _ctx), _ctx); /*maybe<(1394, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x821, _ctx)) {
    kk_box_t _box_x61 = _match_x821._cons.Just.value;
    kk_std_core_types__tuple2 _pat_9 = kk_std_core_types__tuple2_unbox(_box_x61, KK_BORROWED, _ctx);
    kk_box_t _box_x62 = _pat_9.snd;
    kk_std_core_sslice__sslice cap = kk_std_core_sslice__sslice_unbox(_box_x62, KK_BORROWED, _ctx);
    kk_box_t x = _pat_9.fst;
    kk_std_core_sslice__sslice_dup(cap, _ctx);
    kk_box_dup(x, _ctx);
    kk_std_core_types__maybe_drop(_match_x821, _ctx);
    kk_unit_t x_0_10221 = kk_Unit;
    kk_unit_t _brw_x823 = kk_Unit;
    kk_ref_set_borrow(input,(kk_std_core_sslice__sslice_box(cap, _ctx)),kk_context());
    kk_ref_drop(input, _ctx);
    _brw_x823;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x910 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10182_fun911(x, _ctx), _ctx); /*2419*/
      return kk_std_core_types__maybe_unbox(_x_x910, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Just(x, _ctx);
    }
  }
  {
    kk_ref_drop(input, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// Parses `input0` with `p`.
//
// This implements the `pick` ctl using a depth-first search,
//   short-circuiting if the `True` branch succeeds.
// If both alternatives of a `pick` invoke `fail`,
//   the first error will be returned.


// lift anonymous function
struct kk_std_text_parse_parse_fun915__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun915(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun915(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun915__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun915__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun915, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun915(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun915__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun915__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  return kk_ref_get(loc,kk_context());
}


// lift anonymous function
struct kk_std_text_parse_parse_fun918__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun918(kk_function_t _fself, int32_t _b_x87, kk_std_core_hnd__ev _b_x88, kk_box_t _b_x89, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun918(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun918__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun918__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun918, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun919__t {
  struct kk_function_s _base;
  kk_box_t _b_x89;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun919(kk_function_t _fself, kk_function_t _b_x84, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun919(kk_box_t _b_x89, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun919__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun919__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun919, kk_context());
  _self->_b_x89 = _b_x89;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun923__t {
  struct kk_function_s _base;
  kk_box_t _b_x89;
};
static kk_box_t kk_std_text_parse_parse_fun923(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun923(kk_box_t _b_x89, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun923__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun923__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun923, kk_context());
  _self->_b_x89 = _b_x89;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun923(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun923__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun923__t*, _fself, _ctx);
  kk_box_t _b_x89 = _self->_b_x89; /* 45 */
  kk_drop_match(_self, {kk_box_dup(_b_x89, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x924;
  kk_string_t _x_x925 = kk_string_unbox(_b_x89); /*string*/
  kk_std_core_sslice__sslice _x_x926 = kk_std_core_sslice__sslice_unbox(_b_x81, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x924 = kk_std_text_parse__new_ParseError(kk_reuse_null, 0, _x_x925, _x_x926, _ctx); /*std/text/parse/parse-error<33>*/
  return kk_std_text_parse__parse_error_box(_x_x924, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun919(kk_function_t _fself, kk_function_t _b_x84, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun919__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun919__t*, _fself, _ctx);
  kk_box_t _b_x89 = _self->_b_x89; /* 45 */
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_drop_match(_self, {kk_box_dup(_b_x89, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_function_drop(_b_x84, _ctx);
  kk_std_core_sslice__sslice x_0_10228;
  kk_box_t _x_x920 = kk_ref_get(loc,kk_context()); /*298*/
  x_0_10228 = kk_std_core_sslice__sslice_unbox(_x_x920, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error _x_x921;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_0_10228, _ctx);
    kk_box_t _x_x922 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun923(_b_x89, _ctx), _ctx); /*2419*/
    _x_x921 = kk_std_text_parse__parse_error_unbox(_x_x922, KK_OWNED, _ctx); /*std/text/parse/parse-error<1455>*/
  }
  else {
    kk_string_t _x_x927 = kk_string_unbox(_b_x89); /*string*/
    _x_x921 = kk_std_text_parse__new_ParseError(kk_reuse_null, 0, _x_x927, x_0_10228, _ctx); /*std/text/parse/parse-error<1455>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x921, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun918(kk_function_t _fself, int32_t _b_x87, kk_std_core_hnd__ev _b_x88, kk_box_t _b_x89, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun918__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun918__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_datatype_ptr_dropn(_b_x88, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to_final(_b_x87, kk_std_text_parse_new_parse_fun919(_b_x89, loc, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun930__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun930(kk_function_t _fself, int32_t _b_x108, kk_std_core_hnd__ev _b_x109, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun930(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun930__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun930__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun930, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun931__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun931(kk_function_t _fself, kk_function_t _b_x105, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun931(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun931__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun931__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun931, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun932__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun932(kk_function_t _fself, kk_box_t _b_x99, kk_function_t _b_x100, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun932(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun932__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun932__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun932, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun933__t {
  struct kk_function_s _base;
  kk_function_t _b_x100;
};
static kk_std_text_parse__parse_error kk_std_text_parse_parse_fun933(kk_function_t _fself, bool _b_x101, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun933(kk_function_t _b_x100, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun933__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun933__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun933, kk_context());
  _self->_b_x100 = _b_x100;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_text_parse__parse_error kk_std_text_parse_parse_fun933(kk_function_t _fself, bool _b_x101, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun933__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun933__t*, _fself, _ctx);
  kk_function_t _b_x100 = _self->_b_x100; /* (6056) -> 6057 6058 */
  kk_drop_match(_self, {kk_function_dup(_b_x100, _ctx);}, {}, _ctx)
  kk_box_t _x_x934 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x100, (_b_x100, kk_bool_box(_b_x101), _ctx), _ctx); /*6058*/
  return kk_std_text_parse__parse_error_unbox(_x_x934, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun939__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_function_t r_167;
};
static kk_box_t kk_std_text_parse_parse_fun939(kk_function_t _fself, kk_box_t _b_x95, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun939(kk_ref_t loc, kk_function_t r_167, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun939__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun939__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun939, kk_context());
  _self->loc = loc;
  _self->r_167 = r_167;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun939(kk_function_t _fself, kk_box_t _b_x95, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun939__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun939__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_function_t r_167 = _self->r_167; /* (bool) -> <local<1445>|1456> std/text/parse/parse-error<1455> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_function_dup(r_167, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x940;
  kk_std_core_sslice__sslice _x_x941 = kk_std_core_sslice__sslice_unbox(_b_x95, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x940 = kk_std_text_parse__mlift_parse_10180(loc, r_167, _x_x941, _ctx); /*std/text/parse/parse-error<1455>*/
  return kk_std_text_parse__parse_error_box(_x_x940, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun932(kk_function_t _fself, kk_box_t _b_x99, kk_function_t _b_x100, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun932__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun932__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_box_drop(_b_x99, _ctx);
  kk_function_t r_167 = kk_std_text_parse_new_parse_fun933(_b_x100, _ctx); /*(bool) -> <local<1445>|1456> std/text/parse/parse-error<1455>*/;
  kk_std_core_sslice__sslice x_1_10233;
  kk_box_t _x_x935;
  kk_ref_t _x_x936 = kk_ref_dup(loc, _ctx); /*local-var<1445,sslice/sslice>*/
  _x_x935 = kk_ref_get(_x_x936,kk_context()); /*298*/
  x_1_10233 = kk_std_core_sslice__sslice_unbox(_x_x935, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error _x_x937;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_1_10233, _ctx);
    kk_box_t _x_x938 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun939(loc, r_167, _ctx), _ctx); /*2419*/
    _x_x937 = kk_std_text_parse__parse_error_unbox(_x_x938, KK_OWNED, _ctx); /*std/text/parse/parse-error<1455>*/
  }
  else {
    _x_x937 = kk_std_text_parse__mlift_parse_10180(loc, r_167, x_1_10233, _ctx); /*std/text/parse/parse-error<1455>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x937, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun931(kk_function_t _fself, kk_function_t _b_x105, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun931__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun931__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  return kk_std_core_hnd_protect(kk_unit_box(kk_Unit), kk_std_text_parse_new_parse_fun932(loc, _ctx), _b_x105, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun930(kk_function_t _fself, int32_t _b_x108, kk_std_core_hnd__ev _b_x109, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun930__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun930__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_datatype_ptr_dropn(_b_x109, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to(_b_x108, kk_std_text_parse_new_parse_fun931(loc, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun944__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun944(kk_function_t _fself, kk_box_t _b_x117, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun944(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun944__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun944__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun944, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun945__t {
  struct kk_function_s _base;
  kk_box_t _b_x117;
};
static kk_std_core_types__maybe kk_std_text_parse_parse_fun945(kk_function_t _fself, kk_std_core_sslice__sslice _b_x120, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun945(kk_box_t _b_x117, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun945__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun945__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun945, kk_context());
  _self->_b_x117 = _b_x117;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_parse_fun945(kk_function_t _fself, kk_std_core_sslice__sslice _b_x120, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun945__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun945__t*, _fself, _ctx);
  kk_box_t _b_x117 = _self->_b_x117; /* 6236 */
  kk_drop_match(_self, {kk_box_dup(_b_x117, _ctx);}, {}, _ctx)
  kk_box_t _x_x946;
  kk_function_t _x_x947 = kk_function_unbox(_b_x117, _ctx); /*(118) -> 119*/
  _x_x946 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x947, (_x_x947, kk_std_core_sslice__sslice_box(_b_x120, _ctx), _ctx), _ctx); /*119*/
  return kk_std_core_types__maybe_unbox(_x_x946, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun952__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_function_t pred_163;
};
static kk_box_t kk_std_text_parse_parse_fun952(kk_function_t _fself, kk_box_t _b_x115, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun952(kk_ref_t loc, kk_function_t pred_163, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun952__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun952__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun952, kk_context());
  _self->loc = loc;
  _self->pred_163 = pred_163;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun952(kk_function_t _fself, kk_box_t _b_x115, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun952__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun952__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_function_t pred_163 = _self->pred_163; /* (sslice/sslice) -> maybe<(1394, sslice/sslice)> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_function_dup(pred_163, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x953;
  kk_std_core_sslice__sslice _x_x954 = kk_std_core_sslice__sslice_unbox(_b_x115, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x953 = kk_std_text_parse__mlift_parse_10182(loc, pred_163, _x_x954, _ctx); /*maybe<1394>*/
  return kk_std_core_types__maybe_box(_x_x953, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun944(kk_function_t _fself, kk_box_t _b_x117, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun944__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun944__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_function_t pred_163 = kk_std_text_parse_new_parse_fun945(_b_x117, _ctx); /*(sslice/sslice) -> maybe<(1394, sslice/sslice)>*/;
  kk_std_core_sslice__sslice x_2_10235;
  kk_box_t _x_x948;
  kk_ref_t _x_x949 = kk_ref_dup(loc, _ctx); /*local-var<1445,sslice/sslice>*/
  _x_x948 = kk_ref_get(_x_x949,kk_context()); /*298*/
  x_2_10235 = kk_std_core_sslice__sslice_unbox(_x_x948, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_core_types__maybe _x_x950;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_2_10235, _ctx);
    kk_box_t _x_x951 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun952(loc, pred_163, _ctx), _ctx); /*2419*/
    _x_x950 = kk_std_core_types__maybe_unbox(_x_x951, KK_OWNED, _ctx); /*maybe<1394>*/
  }
  else {
    _x_x950 = kk_std_text_parse__mlift_parse_10182(loc, pred_163, x_2_10235, _ctx); /*maybe<1394>*/
  }
  return kk_std_core_types__maybe_box(_x_x950, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun957__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun957(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun957(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun957__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun957__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun957, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun961__t {
  struct kk_function_s _base;
  kk_box_t _b_x130;
};
static kk_box_t kk_std_text_parse_parse_fun961(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun961(kk_box_t _b_x130, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun961__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun961__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun961, kk_context());
  _self->_b_x130 = _b_x130;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun961(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun961__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun961__t*, _fself, _ctx);
  kk_box_t _b_x130 = _self->_b_x130; /* 384 */
  kk_drop_match(_self, {kk_box_dup(_b_x130, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x962;
  kk_std_core_sslice__sslice _x_x963 = kk_std_core_sslice__sslice_unbox(_b_x126, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x962 = kk_std_text_parse__new_ParseOk(kk_reuse_null, 0, _b_x130, _x_x963, _ctx); /*std/text/parse/parse-error<33>*/
  return kk_std_text_parse__parse_error_box(_x_x962, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun957(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun957__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun957__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1445,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_core_sslice__sslice x_3_10237;
  kk_box_t _x_x958 = kk_ref_get(loc,kk_context()); /*298*/
  x_3_10237 = kk_std_core_sslice__sslice_unbox(_x_x958, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error _x_x959;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_3_10237, _ctx);
    kk_box_t _x_x960 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun961(_b_x130, _ctx), _ctx); /*2419*/
    _x_x959 = kk_std_text_parse__parse_error_unbox(_x_x960, KK_OWNED, _ctx); /*std/text/parse/parse-error<1455>*/
  }
  else {
    _x_x959 = kk_std_text_parse__new_ParseOk(kk_reuse_null, 0, _b_x130, x_3_10237, _ctx); /*std/text/parse/parse-error<1455>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x959, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse_parse(kk_std_core_sslice__sslice input0, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (input0 : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_sslice__sslice_box(input0, _ctx)),kk_context()); /*local-var<1445,sslice/sslice>*/;
  kk_std_text_parse__parse _b_x127_131;
  kk_std_core_hnd__clause0 _x_x913;
  kk_function_t _x_x914;
  kk_ref_dup(loc, _ctx);
  _x_x914 = kk_std_text_parse_new_parse_fun915(loc, _ctx); /*() -> 6965 298*/
  _x_x913 = kk_std_core_hnd_clause_tail0(_x_x914, _ctx); /*hnd/clause0<6968,6967,6965,6966>*/
  kk_std_core_hnd__clause1 _x_x916;
  kk_function_t _x_x917;
  kk_ref_dup(loc, _ctx);
  _x_x917 = kk_std_text_parse_new_parse_fun918(loc, _ctx); /*(hnd/marker<48,49>, hnd/ev<47>, 45) -> 48 2716*/
  _x_x916 = kk_std_core_hnd__new_Clause1(_x_x917, _ctx); /*hnd/clause1<45,46,47,48,49>*/
  kk_std_core_hnd__clause0 _x_x928;
  kk_function_t _x_x929;
  kk_ref_dup(loc, _ctx);
  _x_x929 = kk_std_text_parse_new_parse_fun930(loc, _ctx); /*(hnd/marker<37,38>, hnd/ev<36>) -> 37 2785*/
  _x_x928 = kk_std_core_hnd__new_Clause0(_x_x929, _ctx); /*hnd/clause0<35,36,37,38>*/
  kk_std_core_hnd__clause1 _x_x942;
  kk_function_t _x_x943;
  kk_ref_dup(loc, _ctx);
  _x_x943 = kk_std_text_parse_new_parse_fun944(loc, _ctx); /*(6236) -> 6233 6237*/
  _x_x942 = kk_std_core_hnd_clause_tail1(_x_x943, _ctx); /*hnd/clause1<6236,6237,6235,6233,6234>*/
  _b_x127_131 = kk_std_text_parse__new_Hnd_parse(kk_reuse_null, 0, kk_integer_from_small(3), _x_x913, _x_x916, _x_x928, _x_x942, _ctx); /*std/text/parse/parse<<local<1445>|1456>,std/text/parse/parse-error<1455>>*/
  kk_std_text_parse__parse_error res;
  kk_box_t _x_x955;
  kk_function_t _x_x956;
  kk_ref_dup(loc, _ctx);
  _x_x956 = kk_std_text_parse_new_parse_fun957(loc, _ctx); /*(384) -> 385 386*/
  _x_x955 = kk_std_text_parse_parse_fs__handle(_b_x127_131, _x_x956, p, _ctx); /*386*/
  res = kk_std_text_parse__parse_error_unbox(_x_x955, KK_OWNED, _ctx); /*std/text/parse/parse-error<1455>*/
  kk_box_t _x_x964 = kk_std_core_hnd_prompt_local_var(loc, kk_std_text_parse__parse_error_box(res, _ctx), _ctx); /*4162*/
  return kk_std_text_parse__parse_error_unbox(_x_x964, KK_OWNED, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse_starts_with(kk_string_t s, kk_function_t p, kk_context_t* _ctx) { /* forall<a> (s : string, p : () -> parse a) -> maybe<(a, sslice/sslice)> */ 
  kk_std_text_parse__parse_error _match_x816;
  kk_std_core_sslice__sslice _x_x965;
  kk_string_t _x_x966 = kk_string_dup(s, _ctx); /*string*/
  kk_integer_t _x_x967 = kk_string_len_int(s,kk_context()); /*int*/
  _x_x965 = kk_std_core_sslice__new_Sslice(_x_x966, kk_integer_from_small(0), _x_x967, _ctx); /*sslice/sslice*/
  _match_x816 = kk_std_text_parse_parse(_x_x965, p, _ctx); /*std/text/parse/parse-error<1455>*/
  if (kk_std_text_parse__is_ParseOk(_match_x816, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x968 = kk_std_text_parse__as_ParseOk(_match_x816, _ctx);
    kk_std_core_sslice__sslice rest = _con_x968->rest;
    kk_box_t x = _con_x968->result;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x816, _ctx)) {
      kk_datatype_ptr_free(_match_x816, _ctx);
    }
    else {
      kk_std_core_sslice__sslice_dup(rest, _ctx);
      kk_box_dup(x, _ctx);
      kk_datatype_ptr_decref(_match_x816, _ctx);
    }
    kk_box_t _x_x969;
    kk_std_core_types__tuple2 _x_x970 = kk_std_core_types__new_Tuple2(x, kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x969 = kk_std_core_types__tuple2_box(_x_x970, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x969, _ctx);
  }
  {
    kk_std_text_parse__parse_error_drop(_match_x816, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse__lp__at_x_fun973__t_bar__bar__rp_ {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__lp__at_x_fun973_bar__bar__rp_(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__lp__at_new_x_fun973_bar__bar__rp_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__lp__at_x_fun973_bar__bar__rp_, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__lp__at_x_fun973_bar__bar__rp_(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_10245 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x974 = kk_std_core_hnd__as_Ev(ev_10245, _ctx);
    kk_box_t _box_x177 = _con_x974->hnd;
    int32_t m = _con_x974->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x177, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x975 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x975->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x975->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x975->_brk_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x975->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x975->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x180 = _ctl_pick.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x180, (_fun_unbox_x180, m, ev_10245, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_text_parse__lp__at_x_fun976__t_bar__bar__rp_ {
  struct kk_function_s _base;
  kk_function_t p1;
  kk_function_t p2;
};
static kk_box_t kk_std_text_parse__lp__at_x_fun976_bar__bar__rp_(kk_function_t _fself, kk_box_t _b_x188, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__lp__at_new_x_fun976_bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__at_x_fun976__t_bar__bar__rp_* _self = kk_function_alloc_as(struct kk_std_text_parse__lp__at_x_fun976__t_bar__bar__rp_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__lp__at_x_fun976_bar__bar__rp_, kk_context());
  _self->p1 = p1;
  _self->p2 = p2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__lp__at_x_fun976_bar__bar__rp_(kk_function_t _fself, kk_box_t _b_x188, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__at_x_fun976__t_bar__bar__rp_* _self = kk_function_as(struct kk_std_text_parse__lp__at_x_fun976__t_bar__bar__rp_*, _fself, _ctx);
  kk_function_t p1 = _self->p1; /* std/text/parse/parser<1543,1542> */
  kk_function_t p2 = _self->p2; /* std/text/parse/parser<1543,1542> */
  kk_drop_match(_self, {kk_function_dup(p1, _ctx);kk_function_dup(p2, _ctx);}, {}, _ctx)
  bool _match_x815 = kk_bool_unbox(_b_x188); /*bool*/;
  if (_match_x815) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx), _ctx);
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx), _ctx);
  }
}

kk_box_t kk_std_text_parse__lp__bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx) { /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>) -> <parse|e> a */ 
  kk_ssize_t _b_x183_185;
  kk_std_core_hnd__htag _x_x971 = kk_std_core_hnd__htag_dup(kk_std_text_parse_parse_fs__tag, _ctx); /*hnd/htag<std/text/parse/parse>*/
  _b_x183_185 = kk_std_core_hnd__evv_index(_x_x971, _ctx); /*hnd/ev-index*/
  bool x_10242;
  kk_box_t _x_x972 = kk_std_core_hnd__open_at0(_b_x183_185, kk_std_text_parse__lp__at_new_x_fun973_bar__bar__rp_(_ctx), _ctx); /*10446*/
  x_10242 = kk_bool_unbox(_x_x972); /*bool*/
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse__lp__at_new_x_fun976_bar__bar__rp_(p1, p2, _ctx), _ctx);
  }
  if (x_10242) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx), _ctx);
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx), _ctx);
  }
}
extern kk_box_t kk_std_text_parse_optional_fun977(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun977__t* _self = kk_function_as(struct kk_std_text_parse_optional_fun977__t*, _fself, _ctx);
  kk_box_t kkloc_default = _self->kkloc_default; /* 1575 */
  kk_drop_match(_self, {kk_box_dup(kkloc_default, _ctx);}, {}, _ctx)
  return kkloc_default;
}
 
// monadic lift

kk_box_t kk_std_text_parse__mlift_choose_10185(kk_function_t p_0, kk_std_core_types__list pp, bool _y_x10099, kk_context_t* _ctx) { /* forall<a,e> (p@0 : parser<e,a>, pp : list<parser<e,a>>, bool) -> <parse|e> a */ 
  if (_y_x10099) {
    kk_std_core_types__list_drop(pp, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p_0, (p_0, _ctx), _ctx);
  }
  {
    kk_function_drop(p_0, _ctx);
    return kk_std_text_parse_choose(pp, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_choose_fun979__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_choose_fun979(kk_function_t _fself, kk_box_t _b_x202, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_choose_fun979(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_choose_fun979, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_choose_fun979(kk_function_t _fself, kk_box_t _b_x202, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_10250 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x980 = kk_std_core_hnd__as_Ev(ev_10250, _ctx);
    kk_box_t _box_x191 = _con_x980->hnd;
    int32_t m = _con_x980->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x191, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x981 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_1 = _con_x981->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x981->_fun_current_input;
      kk_std_core_hnd__clause1 _brk_fail = _con_x981->_brk_fail;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x981->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3_0 = _con_x981->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_1, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_brk_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x195 = _brk_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x195, (_fun_unbox_x195, m, ev_10250, _b_x202, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_choose_fun990__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_choose_fun990(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_choose_fun990(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_choose_fun990, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_choose_fun990(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_0_10256 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x991 = kk_std_core_hnd__as_Ev(ev_0_10256, _ctx);
    kk_box_t _box_x209 = _con_x991->hnd;
    int32_t m_0 = _con_x991->marker;
    kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x209, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h_0, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x992 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
      kk_integer_t _pat_0_2 = _con_x992->_cfc;
      kk_std_core_hnd__clause0 _pat_1_2 = _con_x992->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2_2 = _con_x992->_brk_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x992->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3_1 = _con_x992->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
        kk_integer_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(h_0, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h_0, _ctx);
      }
      {
        kk_function_t _fun_unbox_x212 = _ctl_pick.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x212, (_fun_unbox_x212, m_0, ev_0_10256, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_choose_fun993__t {
  struct kk_function_s _base;
  kk_function_t p_0_0;
  kk_std_core_types__list pp_0;
};
static kk_box_t kk_std_text_parse_choose_fun993(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_choose_fun993(kk_function_t p_0_0, kk_std_core_types__list pp_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun993__t* _self = kk_function_alloc_as(struct kk_std_text_parse_choose_fun993__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_choose_fun993, kk_context());
  _self->p_0_0 = p_0_0;
  _self->pp_0 = pp_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_choose_fun993(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun993__t* _self = kk_function_as(struct kk_std_text_parse_choose_fun993__t*, _fself, _ctx);
  kk_function_t p_0_0 = _self->p_0_0; /* std/text/parse/parser<1640,1639> */
  kk_std_core_types__list pp_0 = _self->pp_0; /* list<std/text/parse/parser<1640,1639>> */
  kk_drop_match(_self, {kk_function_dup(p_0_0, _ctx);kk_std_core_types__list_dup(pp_0, _ctx);}, {}, _ctx)
  bool _x_x994 = kk_bool_unbox(_b_x220); /*bool*/
  return kk_std_text_parse__mlift_choose_10185(p_0_0, pp_0, _x_x994, _ctx);
}

kk_box_t kk_std_text_parse_choose(kk_std_core_types__list ps, kk_context_t* _ctx) { /* forall<a,e> (ps : list<parser<e,a>>) -> <parse|e> a */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(ps, _ctx)) {
    kk_ssize_t _b_x199_221;
    kk_std_core_hnd__htag _x_x978 = kk_std_core_hnd__htag_dup(kk_std_text_parse_parse_fs__tag, _ctx); /*hnd/htag<std/text/parse/parse>*/
    _b_x199_221 = kk_std_core_hnd__evv_index(_x_x978, _ctx); /*hnd/ev-index*/
    kk_box_t _x_x982;
    kk_string_t _x_x983;
    kk_define_string_literal(static, _s_x984, 23, "no further alternatives", _ctx)
    _x_x983 = kk_string_dup(_s_x984, _ctx); /*string*/
    _x_x982 = kk_string_box(_x_x983); /*10559*/
    return kk_std_core_hnd__open_at1(_b_x199_221, kk_std_text_parse_new_choose_fun979(_ctx), _x_x982, _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x985 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_std_core_types__list _pat_1_0_0 = _con_x985->tail;
    if (kk_std_core_types__is_Nil(_pat_1_0_0, _ctx)) {
      kk_box_t _fun_unbox_x204 = _con_x985->head;
      if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
        kk_datatype_ptr_free(ps, _ctx);
      }
      else {
        kk_box_dup(_fun_unbox_x204, _ctx);
        kk_datatype_ptr_decref(ps, _ctx);
      }
      kk_function_t _x_x986 = kk_function_unbox(_fun_unbox_x204, _ctx); /*() -> <std/text/parse/parse|1640> 205*/
      return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x986, (_x_x986, _ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x987 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_box_t _fun_unbox_x207 = _con_x987->head;
    kk_std_core_types__list pp_0 = _con_x987->tail;
    if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
      kk_datatype_ptr_free(ps, _ctx);
    }
    else {
      kk_box_dup(_fun_unbox_x207, _ctx);
      kk_std_core_types__list_dup(pp_0, _ctx);
      kk_datatype_ptr_decref(ps, _ctx);
    }
    kk_function_t p_0_0 = kk_function_unbox(_fun_unbox_x207, _ctx); /*std/text/parse/parser<1640,1639>*/;
    kk_ssize_t _b_x215_217;
    kk_std_core_hnd__htag _x_x988 = kk_std_core_hnd__htag_dup(kk_std_text_parse_parse_fs__tag, _ctx); /*hnd/htag<std/text/parse/parse>*/
    _b_x215_217 = kk_std_core_hnd__evv_index(_x_x988, _ctx); /*hnd/ev-index*/
    bool x_0_10253;
    kk_box_t _x_x989 = kk_std_core_hnd__open_at0(_b_x215_217, kk_std_text_parse_new_choose_fun990(_ctx), _ctx); /*10446*/
    x_0_10253 = kk_bool_unbox(_x_x989); /*bool*/
    if (kk_yielding(kk_context())) {
      return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_choose_fun993(p_0_0, pp_0, _ctx), _ctx);
    }
    if (x_0_10253) {
      kk_std_core_types__list_drop(pp_0, _ctx);
      return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p_0_0, (p_0_0, _ctx), _ctx);
    }
    {
      kk_function_drop(p_0_0, _ctx);
      { // tailcall
        ps = pp_0;
        goto kk__tailcall;
      }
    }
  }
}
 
// monadic lift

kk_box_t kk_std_text_parse__mlift_satisfy_fail_10186(kk_string_t msg, kk_std_core_types__maybe _y_x10104, kk_context_t* _ctx) { /* forall<a> (msg : string, maybe<a>) -> parse a */ 
  if (kk_std_core_types__is_Nothing(_y_x10104, _ctx)) {
    kk_std_core_hnd__ev ev_10258 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    {
      struct kk_std_core_hnd_Ev* _con_x995 = kk_std_core_hnd__as_Ev(ev_10258, _ctx);
      kk_box_t _box_x227 = _con_x995->hnd;
      int32_t m = _con_x995->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x227, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x996 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x996->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x996->_fun_current_input;
        kk_std_core_hnd__clause1 _brk_fail = _con_x996->_brk_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x996->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x996->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_brk_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x231 = _brk_fail.clause;
          return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x231, (_fun_unbox_x231, m, ev_10258, kk_string_box(msg), _ctx), _ctx);
        }
      }
    }
  }
  {
    kk_box_t x_0 = _y_x10104._cons.Just.value;
    kk_string_drop(msg, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_satisfy_fail_fun1000__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_box_t kk_std_text_parse_satisfy_fail_fun1000(kk_function_t _fself, kk_box_t _b_x248, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_satisfy_fail_fun1000(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun1000__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fail_fun1000__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_satisfy_fail_fun1000, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_satisfy_fail_fun1000(kk_function_t _fself, kk_box_t _b_x248, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun1000__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fail_fun1000__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (sslice/sslice) -> maybe<(1682, sslice/sslice)> */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x1001;
  kk_std_core_sslice__sslice _x_x1002 = kk_std_core_sslice__sslice_unbox(_b_x248, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x1001 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core_sslice__sslice, kk_context_t*), pred, (pred, _x_x1002, _ctx), _ctx); /*maybe<(1682, sslice/sslice)>*/
  return kk_std_core_types__maybe_box(_x_x1001, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_satisfy_fail_fun1003__t {
  struct kk_function_s _base;
  kk_string_t msg;
};
static kk_box_t kk_std_text_parse_satisfy_fail_fun1003(kk_function_t _fself, kk_box_t _b_x250, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_satisfy_fail_fun1003(kk_string_t msg, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun1003__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fail_fun1003__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_satisfy_fail_fun1003, kk_context());
  _self->msg = msg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_satisfy_fail_fun1003(kk_function_t _fself, kk_box_t _b_x250, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun1003__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fail_fun1003__t*, _fself, _ctx);
  kk_string_t msg = _self->msg; /* string */
  kk_drop_match(_self, {kk_string_dup(msg, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x1004 = kk_std_core_types__maybe_unbox(_b_x250, KK_OWNED, _ctx); /*maybe<1682>*/
  return kk_std_text_parse__mlift_satisfy_fail_10186(msg, _x_x1004, _ctx);
}

kk_box_t kk_std_text_parse_satisfy_fail(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* forall<a> (msg : string, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>) -> parse a */ 
  kk_std_core_hnd__ev ev_10264 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10261;
  kk_box_t _x_x997;
  {
    struct kk_std_core_hnd_Ev* _con_x998 = kk_std_core_hnd__as_Ev(ev_10264, _ctx);
    kk_box_t _box_x235 = _con_x998->hnd;
    int32_t m = _con_x998->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x235, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x999 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x999->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x999->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x999->_brk_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x999->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x999->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x242 = _fun_satisfy.clause;
        _x_x997 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x242, (_fun_unbox_x242, m, ev_10264, kk_function_box(kk_std_text_parse_new_satisfy_fail_fun1000(pred, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10261 = kk_std_core_types__maybe_unbox(_x_x997, KK_OWNED, _ctx); /*maybe<1682>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10261, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_satisfy_fail_fun1003(msg, _ctx), _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10261, _ctx)) {
    kk_std_core_hnd__ev ev_0_10267 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    {
      struct kk_std_core_hnd_Ev* _con_x1005 = kk_std_core_hnd__as_Ev(ev_0_10267, _ctx);
      kk_box_t _box_x251 = _con_x1005->hnd;
      int32_t m_0 = _con_x1005->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x251, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x1006 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x1006->_cfc;
        kk_std_core_hnd__clause0 _pat_1_2 = _con_x1006->_fun_current_input;
        kk_std_core_hnd__clause1 _brk_fail = _con_x1006->_brk_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x1006->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x1006->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_brk_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x255 = _brk_fail.clause;
          return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x255, (_fun_unbox_x255, m_0, ev_0_10267, kk_string_box(msg), _ctx), _ctx);
        }
      }
    }
  }
  {
    kk_box_t x_2 = x_10261._cons.Just.value;
    kk_string_drop(msg, _ctx);
    return x_2;
  }
}
 
// monadic lift

kk_unit_t kk_std_text_parse__mlift_eof_10187(kk_std_core_types__maybe _y_x10107, kk_context_t* _ctx) { /* (maybe<()>) -> parse () */ 
  if (kk_std_core_types__is_Nothing(_y_x10107, _ctx)) {
    kk_std_core_hnd__ev ev_10270 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x1007;
    {
      struct kk_std_core_hnd_Ev* _con_x1008 = kk_std_core_hnd__as_Ev(ev_10270, _ctx);
      kk_box_t _box_x261 = _con_x1008->hnd;
      int32_t m = _con_x1008->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x261, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x1009 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_0 = _con_x1009->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x1009->_fun_current_input;
        kk_std_core_hnd__clause1 _brk_fail = _con_x1009->_brk_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x1009->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x1009->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_brk_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x265 = _brk_fail.clause;
          kk_box_t _x_x1010;
          kk_string_t _x_x1011;
          kk_define_string_literal(static, _s_x1012, 22, "expecting end-of-input", _ctx)
          _x_x1011 = kk_string_dup(_s_x1012, _ctx); /*string*/
          _x_x1010 = kk_string_box(_x_x1011); /*45*/
          _x_x1007 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x265, (_fun_unbox_x265, m, ev_10270, _x_x1010, _ctx), _ctx); /*46*/
        }
      }
    }
    kk_unit_unbox(_x_x1007); return kk_Unit;
  }
  {
    kk_box_t _box_x269 = _y_x10107._cons.Just.value;
    kk_unit_t _pat_3_0 = kk_unit_unbox(_box_x269);
    kk_std_core_types__maybe_drop(_y_x10107, _ctx);
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_text_parse_eof_fun1016__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_eof_fun1016(kk_function_t _fself, kk_box_t _b_x283, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_eof_fun1016(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_eof_fun1016, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_eof_fun1016(kk_function_t _fself, kk_box_t _b_x283, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10032;
  kk_integer_t _brw_x810;
  kk_std_core_sslice__sslice _match_x809;
  kk_box_t _x_x1017 = kk_box_dup(_b_x283, _ctx); /*281*/
  _match_x809 = kk_std_core_sslice__sslice_unbox(_x_x1017, KK_OWNED, _ctx); /*sslice/sslice*/
  {
    kk_integer_t _x = _match_x809.len;
    kk_integer_dup(_x, _ctx);
    kk_std_core_sslice__sslice_drop(_match_x809, _ctx);
    _brw_x810 = _x; /*int*/
  }
  bool _brw_x811 = kk_integer_gt_borrow(_brw_x810,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x810, _ctx);
  b_10032 = _brw_x811; /*bool*/
  kk_std_core_types__maybe _x_x1018;
  if (b_10032) {
    kk_box_drop(_b_x283, _ctx);
    _x_x1018 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
  }
  else {
    kk_box_t _x_x1019;
    kk_std_core_types__tuple2 _x_x1020 = kk_std_core_types__new_Tuple2(kk_unit_box(kk_Unit), _b_x283, _ctx); /*(134, 135)*/
    _x_x1019 = kk_std_core_types__tuple2_box(_x_x1020, _ctx); /*88*/
    _x_x1018 = kk_std_core_types__new_Just(_x_x1019, _ctx); /*forall<a> maybe<a>*/
  }
  return kk_std_core_types__maybe_box(_x_x1018, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_eof_fun1022__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_eof_fun1022(kk_function_t _fself, kk_box_t _b_x292, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_eof_fun1022(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_eof_fun1022, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_eof_fun1022(kk_function_t _fself, kk_box_t _b_x292, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x1023 = kk_Unit;
  kk_std_core_types__maybe _x_x1024 = kk_std_core_types__maybe_unbox(_b_x292, KK_OWNED, _ctx); /*maybe<()>*/
  kk_std_text_parse__mlift_eof_10187(_x_x1024, _ctx);
  return kk_unit_box(_x_x1023);
}

kk_unit_t kk_std_text_parse_eof(kk_context_t* _ctx) { /* () -> parse () */ 
  kk_std_core_hnd__ev ev_10276 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10273;
  kk_box_t _x_x1013;
  {
    struct kk_std_core_hnd_Ev* _con_x1014 = kk_std_core_hnd__as_Ev(ev_10276, _ctx);
    kk_box_t _box_x270 = _con_x1014->hnd;
    int32_t m = _con_x1014->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x270, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x1015 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x1015->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x1015->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x1015->_brk_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x1015->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x1015->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x277 = _fun_satisfy.clause;
        _x_x1013 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x277, (_fun_unbox_x277, m, ev_10276, kk_function_box(kk_std_text_parse_new_eof_fun1016(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10273 = kk_std_core_types__maybe_unbox(_x_x1013, KK_OWNED, _ctx); /*maybe<()>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10273, _ctx);
    kk_box_t _x_x1021 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_eof_fun1022(_ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x1021); return kk_Unit;
  }
  if (kk_std_core_types__is_Nothing(x_10273, _ctx)) {
    kk_std_core_hnd__ev ev_0_10279 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x1025;
    {
      struct kk_std_core_hnd_Ev* _con_x1026 = kk_std_core_hnd__as_Ev(ev_0_10279, _ctx);
      kk_box_t _box_x293 = _con_x1026->hnd;
      int32_t m_0 = _con_x1026->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x293, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x1027 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x1027->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x1027->_fun_current_input;
        kk_std_core_hnd__clause1 _brk_fail = _con_x1027->_brk_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x1027->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x1027->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_brk_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x297 = _brk_fail.clause;
          kk_box_t _x_x1028;
          kk_string_t _x_x1029;
          kk_define_string_literal(static, _s_x1030, 22, "expecting end-of-input", _ctx)
          _x_x1029 = kk_string_dup(_s_x1030, _ctx); /*string*/
          _x_x1028 = kk_string_box(_x_x1029); /*45*/
          _x_x1025 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x297, (_fun_unbox_x297, m_0, ev_0_10279, _x_x1028, _ctx), _ctx); /*46*/
        }
      }
    }
    kk_unit_unbox(_x_x1025); return kk_Unit;
  }
  {
    kk_box_t _box_x301 = x_10273._cons.Just.value;
    kk_unit_t _pat_3_0_0 = kk_unit_unbox(_box_x301);
    kk_std_core_types__maybe_drop(x_10273, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_eof_10189_fun1033__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_parse_eof_10189_fun1033(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_eof_10189_fun1033(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_parse_eof_10189_fun1033, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_eof_10189_fun1033(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x1034 = kk_Unit;
  kk_std_text_parse_eof(_ctx);
  return kk_unit_box(_x_x1034);
}


// lift anonymous function
struct kk_std_text_parse__mlift_parse_eof_10189_fun1035__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_text_parse__mlift_parse_eof_10189_fun1035(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_eof_10189_fun1035(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_eof_10189_fun1035__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_eof_10189_fun1035__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_eof_10189_fun1035, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_eof_10189_fun1035(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_eof_10189_fun1035__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_eof_10189_fun1035__t*, _fself, _ctx);
  kk_box_t x = _self->x; /* 1779 */
  kk_drop_match(_self, {kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_box_drop(_b_x308, _ctx);
  return x;
}

kk_box_t kk_std_text_parse__mlift_parse_eof_10189(kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (x : a) -> <parse|e> a */ 
  kk_ssize_t _b_x303_305;
  kk_std_core_hnd__htag _x_x1031 = kk_std_core_hnd__htag_dup(kk_std_text_parse_parse_fs__tag, _ctx); /*hnd/htag<std/text/parse/parse>*/
  _b_x303_305 = kk_std_core_hnd__evv_index(_x_x1031, _ctx); /*hnd/ev-index*/
  kk_unit_t x_0_10282 = kk_Unit;
  kk_box_t _x_x1032 = kk_std_core_hnd__open_at0(_b_x303_305, kk_std_text_parse__new_mlift_parse_eof_10189_fun1033(_ctx), _ctx); /*10446*/
  kk_unit_unbox(_x_x1032);
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_eof_10189_fun1035(x, _ctx), _ctx);
  }
  {
    return x;
  }
}


// lift anonymous function
struct kk_std_text_parse_parse_eof_fun1036__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_parse_eof_fun1036(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_eof_fun1036(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_eof_fun1036__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_eof_fun1036__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_eof_fun1036, kk_context());
  _self->p = p;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_eof_fun1038__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_parse_eof_fun1038(kk_function_t _fself, kk_box_t _x1_x1037, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_eof_fun1038(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_parse_eof_fun1038, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_parse_eof_fun1038(kk_function_t _fself, kk_box_t _x1_x1037, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_text_parse__mlift_parse_eof_10189(_x1_x1037, _ctx);
}
static kk_box_t kk_std_text_parse_parse_eof_fun1036(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_eof_fun1036__t* _self = kk_function_as(struct kk_std_text_parse_parse_eof_fun1036__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* () -> <std/text/parse/parse|1780> 1779 */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);}, {}, _ctx)
  kk_box_t x_10286 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx); /*1779*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10286, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_eof_fun1038(_ctx), _ctx);
  }
  {
    return kk_std_text_parse__mlift_parse_eof_10189(x_10286, _ctx);
  }
}

kk_std_text_parse__parse_error kk_std_text_parse_parse_eof(kk_std_core_sslice__sslice input, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (input : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 
  return kk_std_text_parse_parse(input, kk_std_text_parse_new_parse_eof_fun1036(p, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_char_is_fun1040__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_std_core_types__maybe kk_std_text_parse_char_is_fun1040(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_is_fun1040(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun1040__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_is_fun1040__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_char_is_fun1040, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_char_is_fun1040(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun1040__t* _self = kk_function_as(struct kk_std_text_parse_char_is_fun1040__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (char) -> bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x805 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x805, _ctx)) {
    kk_box_t _box_x311 = _match_x805._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x311, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x312 = _pat_0.fst;
      kk_box_t _box_x313 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x312, KK_BORROWED, _ctx);
      kk_function_t _x_x1041 = kk_function_dup(pred, _ctx); /*(char) -> bool*/
      if (kk_function_call(bool, (kk_function_t, kk_char_t, kk_context_t*), _x_x1041, (_x_x1041, c, _ctx), _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x313, KK_BORROWED, _ctx);
        kk_function_drop(pred, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x805, _ctx);
        kk_box_t _x_x1042;
        kk_std_core_types__tuple2 _x_x1043 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1042 = kk_std_core_types__tuple2_box(_x_x1043, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1042, _ctx);
      }
    }
  }
  {
    kk_function_drop(pred, _ctx);
    kk_std_core_types__maybe_drop(_match_x805, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_char_is(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* (msg : string, pred : (char) -> bool) -> parse char */ 
  kk_box_t _x_x1039 = kk_std_text_parse_satisfy_fail(msg, kk_std_text_parse_new_char_is_fun1040(pred, _ctx), _ctx); /*1682*/
  return kk_char_unbox(_x_x1039, KK_OWNED, _ctx);
}

kk_std_core_types__tuple2 kk_std_text_parse_next_while0(kk_std_core_sslice__sslice slice, kk_function_t pred, kk_std_core_types__list acc, kk_context_t* _ctx) { /* (slice : sslice/sslice, pred : (char) -> bool, acc : list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x804;
  kk_std_core_sslice__sslice _x_x1044 = kk_std_core_sslice__sslice_dup(slice, _ctx); /*sslice/sslice*/
  _match_x804 = kk_std_core_sslice_next(_x_x1044, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x804, _ctx)) {
    kk_box_t _box_x324 = _match_x804._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x324, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x325 = _pat_0.fst;
      kk_box_t _box_x326 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x325, KK_BORROWED, _ctx);
      kk_function_t _x_x1045 = kk_function_dup(pred, _ctx); /*(char) -> bool*/
      if (kk_function_call(bool, (kk_function_t, kk_char_t, kk_context_t*), _x_x1045, (_x_x1045, c, _ctx), _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x326, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(slice, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x804, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x1046 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(c, _ctx), acc, _ctx); /*list<79>*/
          slice = rest;
          acc = _x_x1046;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_function_drop(pred, _ctx);
    kk_std_core_types__maybe_drop(_match_x804, _ctx);
    kk_std_core_types__list _b_x329_333 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x329_333, _ctx), kk_std_core_sslice__sslice_box(slice, _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_chars_are_fun1048__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_std_core_types__maybe kk_std_text_parse_chars_are_fun1048(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_chars_are_fun1048(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun1048__t* _self = kk_function_alloc_as(struct kk_std_text_parse_chars_are_fun1048__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_chars_are_fun1048, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_chars_are_fun1048(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun1048__t* _self = kk_function_as(struct kk_std_text_parse_chars_are_fun1048__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (char) -> bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x803 = kk_std_text_parse_next_while0(slice, pred, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x335 = _match_x803.fst;
    kk_box_t _box_x336 = _match_x803.snd;
    kk_std_core_types__list _pat_0 = kk_std_core_types__list_unbox(_box_x335, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1 = kk_std_core_sslice__sslice_unbox(_box_x336, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x803, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x337 = _match_x803.fst;
    kk_box_t _box_x338 = _match_x803.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x338, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x337, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x803, _ctx);
    kk_box_t _x_x1049;
    kk_std_core_types__tuple2 _x_x1050 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x1049 = kk_std_core_types__tuple2_box(_x_x1050, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x1049, _ctx);
  }
}

kk_std_core_types__list kk_std_text_parse_chars_are(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* (msg : string, pred : (char) -> bool) -> parse list<char> */ 
  kk_box_t _x_x1047 = kk_std_text_parse_satisfy_fail(msg, kk_std_text_parse_new_chars_are_fun1048(pred, _ctx), _ctx); /*1682*/
  return kk_std_core_types__list_unbox(_x_x1047, KK_OWNED, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse_next_match(kk_std_core_sslice__sslice slice, kk_std_core_types__list cs, kk_context_t* _ctx) { /* (slice : sslice/sslice, cs : list<char>) -> maybe<sslice/sslice> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(cs, _ctx)) {
    return kk_std_core_types__new_Just(kk_std_core_sslice__sslice_box(slice, _ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x1051 = kk_std_core_types__as_Cons(cs, _ctx);
    kk_box_t _box_x350 = _con_x1051->head;
    kk_std_core_types__list cc = _con_x1051->tail;
    kk_char_t c = kk_char_unbox(_box_x350, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(cs, _ctx)) {
      kk_datatype_ptr_free(cs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(cc, _ctx);
      kk_datatype_ptr_decref(cs, _ctx);
    }
    kk_std_core_types__maybe _match_x802 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
    if (kk_std_core_types__is_Just(_match_x802, _ctx)) {
      kk_box_t _box_x351 = _match_x802._cons.Just.value;
      kk_std_core_types__tuple2 _pat_2 = kk_std_core_types__tuple2_unbox(_box_x351, KK_BORROWED, _ctx);
      if (kk_std_core_types__is_Tuple2(_pat_2, _ctx)) {
        kk_box_t _box_x352 = _pat_2.fst;
        kk_box_t _box_x353 = _pat_2.snd;
        kk_char_t d = kk_char_unbox(_box_x352, KK_BORROWED, _ctx);
        if (c == d) {
          kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x353, KK_BORROWED, _ctx);
          kk_std_core_sslice__sslice_dup(rest, _ctx);
          kk_std_core_types__maybe_drop(_match_x802, _ctx);
          { // tailcall
            slice = rest;
            cs = cc;
            goto kk__tailcall;
          }
        }
      }
    }
    {
      kk_std_core_types__list_drop(cc, _ctx);
      kk_std_core_types__maybe_drop(_match_x802, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_pstring_fun1054__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static kk_std_core_types__maybe kk_std_text_parse_pstring_fun1054(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pstring_fun1054(kk_string_t s, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun1054__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pstring_fun1054__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_pstring_fun1054, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_pstring_fun1054(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun1054__t* _self = kk_function_as(struct kk_std_text_parse_pstring_fun1054__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x801;
  kk_std_core_types__list _x_x1055;
  kk_string_t _x_x1056 = kk_string_dup(s, _ctx); /*string*/
  _x_x1055 = kk_std_core_string_list(_x_x1056, _ctx); /*list<char>*/
  _match_x801 = kk_std_text_parse_next_match(slice, _x_x1055, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x801, _ctx)) {
    kk_box_t _box_x355 = _match_x801._cons.Just.value;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x355, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__maybe_drop(_match_x801, _ctx);
    kk_box_t _x_x1057;
    kk_std_core_types__tuple2 _x_x1058 = kk_std_core_types__new_Tuple2(kk_string_box(s), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x1057 = kk_std_core_types__tuple2_box(_x_x1058, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x1057, _ctx);
  }
  {
    kk_string_drop(s, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_string_t kk_std_text_parse_pstring(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> parse string */ 
  kk_box_t _x_x1052;
  kk_string_t _x_x1053 = kk_string_dup(s, _ctx); /*string*/
  _x_x1052 = kk_std_text_parse_satisfy_fail(_x_x1053, kk_std_text_parse_new_pstring_fun1054(s, _ctx), _ctx); /*1682*/
  return kk_string_unbox(_x_x1052);
}


// lift anonymous function
struct kk_std_text_parse_char_fun1066__t {
  struct kk_function_s _base;
  kk_char_t c;
};
static kk_std_core_types__maybe kk_std_text_parse_char_fun1066(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_fun1066(kk_char_t c, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun1066__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_fun1066__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_char_fun1066, kk_context());
  _self->c = c;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_char_fun1066(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun1066__t* _self = kk_function_as(struct kk_std_text_parse_char_fun1066__t*, _fself, _ctx);
  kk_char_t c = _self->c; /* char */
  kk_drop_match(_self, {kk_skip_dup(c, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x800 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x800, _ctx)) {
    kk_box_t _box_x366 = _match_x800._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x366, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x367 = _pat_0.fst;
      kk_box_t _box_x368 = _pat_0.snd;
      kk_char_t c_0 = kk_char_unbox(_box_x367, KK_BORROWED, _ctx);
      if (c == c_0) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x368, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x800, _ctx);
        kk_box_t _x_x1067;
        kk_std_core_types__tuple2 _x_x1068 = kk_std_core_types__new_Tuple2(kk_char_box(c_0, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1067 = kk_std_core_types__tuple2_box(_x_x1068, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1067, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x800, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_char(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> parse char */ 
  kk_string_t msg_10010;
  kk_string_t _x_x1059;
  kk_define_string_literal(static, _s_x1060, 1, "\'", _ctx)
  _x_x1059 = kk_string_dup(_s_x1060, _ctx); /*string*/
  kk_string_t _x_x1061;
  kk_string_t _x_x1062 = kk_std_core_show_show_char(c, _ctx); /*string*/
  kk_string_t _x_x1063;
  kk_define_string_literal(static, _s_x1064, 1, "\'", _ctx)
  _x_x1063 = kk_string_dup(_s_x1064, _ctx); /*string*/
  _x_x1061 = kk_std_core_types__lp__plus__plus__rp_(_x_x1062, _x_x1063, _ctx); /*string*/
  msg_10010 = kk_std_core_types__lp__plus__plus__rp_(_x_x1059, _x_x1061, _ctx); /*string*/
  kk_box_t _x_x1065 = kk_std_text_parse_satisfy_fail(msg_10010, kk_std_text_parse_new_char_fun1066(c, _ctx), _ctx); /*1682*/
  return kk_char_unbox(_x_x1065, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_no_digit_fun1072__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_no_digit_fun1072(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_no_digit_fun1072(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_no_digit_fun1072, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_no_digit_fun1072(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _match_x798 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x798, _ctx)) {
    kk_box_t _box_x379 = _match_x798._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x379, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x380 = _pat_0.fst;
      kk_box_t _box_x381 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x380, KK_BORROWED, _ctx);
      bool b_10014;
      bool _match_x799 = (c >= ('0')); /*bool*/;
      if (_match_x799) {
        b_10014 = (c <= ('9')); /*bool*/
      }
      else {
        b_10014 = false; /*bool*/
      }
      bool _x_x1073;
      if (b_10014) {
        _x_x1073 = false; /*bool*/
      }
      else {
        _x_x1073 = true; /*bool*/
      }
      if (_x_x1073) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x381, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x798, _ctx);
        kk_box_t _x_x1074;
        kk_std_core_types__tuple2 _x_x1075 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1074 = kk_std_core_types__tuple2_box(_x_x1075, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1074, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x798, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_no_digit(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_box_t _x_x1069;
  kk_string_t _x_x1070;
  kk_define_string_literal(static, _s_x1071, 11, "not a digit", _ctx)
  _x_x1070 = kk_string_dup(_s_x1071, _ctx); /*string*/
  _x_x1069 = kk_std_text_parse_satisfy_fail(_x_x1070, kk_std_text_parse_new_no_digit_fun1072(_ctx), _ctx); /*1682*/
  return kk_char_unbox(_x_x1069, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_digit_10190_fun1078__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_digit_10190_fun1078(kk_function_t _fself, kk_box_t _b_x395, kk_box_t _b_x396, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_digit_10190_fun1078(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_digit_10190_fun1078, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_digit_10190_fun1078(kk_function_t _fself, kk_box_t _b_x395, kk_box_t _b_x396, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x1079;
  kk_char_t c_1_400 = kk_char_unbox(_b_x395, KK_OWNED, _ctx); /*char*/;
  kk_char_t d_401 = kk_char_unbox(_b_x396, KK_OWNED, _ctx); /*char*/;
  kk_integer_t x_10002 = kk_integer_from_int(c_1_400,kk_context()); /*int*/;
  kk_integer_t y_10003 = kk_integer_from_int(d_401,kk_context()); /*int*/;
  kk_integer_t _x_x1080 = kk_integer_sub(x_10002,y_10003,kk_context()); /*int*/
  _x_x1079 = kk_integer_clamp32(_x_x1080,kk_context()); /*char*/
  return kk_char_box(_x_x1079, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_digit_10190(kk_char_t c_0_0, kk_context_t* _ctx) { /* (c@0@0 : char) -> parse int */ 
  kk_char_t _x_x1076;
  kk_box_t _x_x1077 = kk_std_core_hnd__open_none2(kk_std_text_parse__new_mlift_digit_10190_fun1078(_ctx), kk_char_box(c_0_0, _ctx), kk_char_box('0', _ctx), _ctx); /*10005*/
  _x_x1076 = kk_char_unbox(_x_x1077, KK_OWNED, _ctx); /*char*/
  return kk_integer_from_int(_x_x1076,kk_context());
}


// lift anonymous function
struct kk_std_text_parse_digit_fun1084__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_digit_fun1084(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun1084(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun1084, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_digit_fun1084(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _match_x796 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x796, _ctx)) {
    kk_box_t _box_x402 = _match_x796._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0 = kk_std_core_types__tuple2_unbox(_box_x402, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0, _ctx)) {
      kk_box_t _box_x403 = _pat_0_0.fst;
      kk_box_t _box_x404 = _pat_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x403, KK_BORROWED, _ctx);
      bool _match_x797 = (c >= ('0')); /*bool*/;
      bool _x_x1085;
      if (_match_x797) {
        _x_x1085 = (c <= ('9')); /*bool*/
      }
      else {
        _x_x1085 = false; /*bool*/
      }
      if (_x_x1085) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x404, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x796, _ctx);
        kk_box_t _x_x1086;
        kk_std_core_types__tuple2 _x_x1087 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1086 = kk_std_core_types__tuple2_box(_x_x1087, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1086, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x796, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digit_fun1089__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun1089(kk_function_t _fself, kk_box_t _b_x416, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun1089(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun1089, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digit_fun1089(kk_function_t _fself, kk_box_t _b_x416, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1090;
  kk_char_t _x_x1091 = kk_char_unbox(_b_x416, KK_OWNED, _ctx); /*char*/
  _x_x1090 = kk_std_text_parse__mlift_digit_10190(_x_x1091, _ctx); /*int*/
  return kk_integer_box(_x_x1090, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_digit_fun1094__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun1094(kk_function_t _fself, kk_box_t _b_x420, kk_box_t _b_x421, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun1094(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun1094, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digit_fun1094(kk_function_t _fself, kk_box_t _b_x420, kk_box_t _b_x421, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x1095;
  kk_char_t c_1_426 = kk_char_unbox(_b_x420, KK_OWNED, _ctx); /*char*/;
  kk_char_t d_427 = kk_char_unbox(_b_x421, KK_OWNED, _ctx); /*char*/;
  kk_integer_t x_10002 = kk_integer_from_int(c_1_426,kk_context()); /*int*/;
  kk_integer_t y_10003 = kk_integer_from_int(d_427,kk_context()); /*int*/;
  kk_integer_t _x_x1096 = kk_integer_sub(x_10002,y_10003,kk_context()); /*int*/
  _x_x1095 = kk_integer_clamp32(_x_x1096,kk_context()); /*char*/
  return kk_char_box(_x_x1095, _ctx);
}

kk_integer_t kk_std_text_parse_digit(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_char_t x_10288;
  kk_box_t _x_x1081;
  kk_string_t _x_x1082;
  kk_define_string_literal(static, _s_x1083, 5, "digit", _ctx)
  _x_x1082 = kk_string_dup(_s_x1083, _ctx); /*string*/
  _x_x1081 = kk_std_text_parse_satisfy_fail(_x_x1082, kk_std_text_parse_new_digit_fun1084(_ctx), _ctx); /*1682*/
  x_10288 = kk_char_unbox(_x_x1081, KK_OWNED, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1088 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digit_fun1089(_ctx), _ctx); /*2419*/
    return kk_integer_unbox(_x_x1088, _ctx);
  }
  {
    kk_char_t _x_x1092;
    kk_box_t _x_x1093 = kk_std_core_hnd__open_none2(kk_std_text_parse_new_digit_fun1094(_ctx), kk_char_box(x_10288, _ctx), kk_char_box('0', _ctx), _ctx); /*10005*/
    _x_x1092 = kk_char_unbox(_x_x1093, KK_OWNED, _ctx); /*char*/
    return kk_integer_from_int(_x_x1092,kk_context());
  }
}


// lift anonymous function
struct kk_std_text_parse_alpha_fun1100__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_alpha_fun1100(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_fun1100(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_fun1100, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_alpha_fun1100(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _match_x794 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x794, _ctx)) {
    kk_box_t _box_x428 = _match_x794._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x428, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x429 = _pat_0.fst;
      kk_box_t _box_x430 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x429, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_alpha(c, _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x430, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x794, _ctx);
        kk_box_t _x_x1101;
        kk_std_core_types__tuple2 _x_x1102 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1101 = kk_std_core_types__tuple2_box(_x_x1102, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1101, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x794, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_alpha(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_box_t _x_x1097;
  kk_string_t _x_x1098;
  kk_define_string_literal(static, _s_x1099, 5, "alpha", _ctx)
  _x_x1098 = kk_string_dup(_s_x1099, _ctx); /*string*/
  _x_x1097 = kk_std_text_parse_satisfy_fail(_x_x1098, kk_std_text_parse_new_alpha_fun1100(_ctx), _ctx); /*1682*/
  return kk_char_unbox(_x_x1097, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_alpha_num_fun1106__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_alpha_num_fun1106(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_num_fun1106(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_num_fun1106, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_alpha_num_fun1106(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _match_x793 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x793, _ctx)) {
    kk_box_t _box_x441 = _match_x793._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x441, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x442 = _pat_0.fst;
      kk_box_t _box_x443 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x442, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_alpha_num(c, _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x443, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x793, _ctx);
        kk_box_t _x_x1107;
        kk_std_core_types__tuple2 _x_x1108 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1107 = kk_std_core_types__tuple2_box(_x_x1108, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1107, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x793, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_alpha_num(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_box_t _x_x1103;
  kk_string_t _x_x1104;
  kk_define_string_literal(static, _s_x1105, 9, "alpha-num", _ctx)
  _x_x1104 = kk_string_dup(_s_x1105, _ctx); /*string*/
  _x_x1103 = kk_std_text_parse_satisfy_fail(_x_x1104, kk_std_text_parse_new_alpha_num_fun1106(_ctx), _ctx); /*1682*/
  return kk_char_unbox(_x_x1103, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_white_fun1112__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_white_fun1112(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_white_fun1112(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_white_fun1112, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_white_fun1112(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _match_x792 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x792, _ctx)) {
    kk_box_t _box_x454 = _match_x792._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x454, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x455 = _pat_0.fst;
      kk_box_t _box_x456 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x455, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_white(c, _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x456, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x792, _ctx);
        kk_box_t _x_x1113;
        kk_std_core_types__tuple2 _x_x1114 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1113 = kk_std_core_types__tuple2_box(_x_x1114, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1113, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x792, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_white(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_box_t _x_x1109;
  kk_string_t _x_x1110 = kk_string_empty(); /*string*/
  _x_x1109 = kk_std_text_parse_satisfy_fail(_x_x1110, kk_std_text_parse_new_white_fun1112(_ctx), _ctx); /*1682*/
  return kk_char_unbox(_x_x1109, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun1118__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_whitespace_fun1118(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun1118(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun1118, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_whitespace_fun1120__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_whitespace_fun1120(kk_function_t _fself, kk_char_t _x1_x1119, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun1120(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun1120, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_std_text_parse_whitespace_fun1120(kk_function_t _fself, kk_char_t _x1_x1119, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_char_is_white(_x1_x1119, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_whitespace_fun1118(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _match_x791 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_whitespace_fun1120(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x467 = _match_x791.fst;
    kk_box_t _box_x468 = _match_x791.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x467, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x468, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x791, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x469 = _match_x791.fst;
    kk_box_t _box_x470 = _match_x791.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x470, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x469, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x791, _ctx);
    kk_box_t _x_x1121;
    kk_std_core_types__tuple2 _x_x1122 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x1121 = kk_std_core_types__tuple2_box(_x_x1122, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x1121, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun1124__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace_fun1124(kk_function_t _fself, kk_box_t _b_x482, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun1124(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun1124, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace_fun1124(kk_function_t _fself, kk_box_t _b_x482, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1125;
  kk_std_core_types__list _x_x1126 = kk_std_core_types__list_unbox(_b_x482, KK_OWNED, _ctx); /*list<char>*/
  _x_x1125 = kk_std_core_string_listchar_fs_string(_x_x1126, _ctx); /*string*/
  return kk_string_box(_x_x1125);
}

kk_string_t kk_std_text_parse_whitespace(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_types__list x_10291;
  kk_box_t _x_x1115;
  kk_string_t _x_x1116 = kk_string_empty(); /*string*/
  _x_x1115 = kk_std_text_parse_satisfy_fail(_x_x1116, kk_std_text_parse_new_whitespace_fun1118(_ctx), _ctx); /*1682*/
  x_10291 = kk_std_core_types__list_unbox(_x_x1115, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10291, _ctx);
    kk_box_t _x_x1123 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace_fun1124(_ctx), _ctx); /*2419*/
    return kk_string_unbox(_x_x1123);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10291, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1128__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun1128(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1128(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1128, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1132__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_whitespace0_fun1132(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1132(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1132, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1134__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_whitespace0_fun1134(kk_function_t _fself, kk_char_t _x1_x1133, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1134(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1134, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_std_text_parse_whitespace0_fun1134(kk_function_t _fself, kk_char_t _x1_x1133, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_char_is_white(_x1_x1133, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_whitespace0_fun1132(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _match_x789 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_whitespace0_fun1134(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x484 = _match_x789.fst;
    kk_box_t _box_x485 = _match_x789.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x484, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x485, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x789, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x486 = _match_x789.fst;
    kk_box_t _box_x487 = _match_x789.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x487, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x486, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x789, _ctx);
    kk_box_t _x_x1135;
    kk_std_core_types__tuple2 _x_x1136 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x1135 = kk_std_core_types__tuple2_box(_x_x1136, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x1135, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1139__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun1139(kk_function_t _fself, kk_box_t _b_x499, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1139(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1139, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace0_fun1139(kk_function_t _fself, kk_box_t _b_x499, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1140;
  kk_std_core_types__list _x_x1141 = kk_std_core_types__list_unbox(_b_x499, KK_OWNED, _ctx); /*list<char>*/
  _x_x1140 = kk_std_core_string_listchar_fs_string(_x_x1141, _ctx); /*string*/
  return kk_string_box(_x_x1140);
}
static kk_box_t kk_std_text_parse_whitespace0_fun1128(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list x_10293;
  kk_box_t _x_x1129;
  kk_string_t _x_x1130 = kk_string_empty(); /*string*/
  _x_x1129 = kk_std_text_parse_satisfy_fail(_x_x1130, kk_std_text_parse_new_whitespace0_fun1132(_ctx), _ctx); /*1682*/
  x_10293 = kk_std_core_types__list_unbox(_x_x1129, KK_OWNED, _ctx); /*list<char>*/
  kk_string_t _x_x1137;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10293, _ctx);
    kk_box_t _x_x1138 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace0_fun1139(_ctx), _ctx); /*2419*/
    _x_x1137 = kk_string_unbox(_x_x1138); /*string*/
  }
  else {
    _x_x1137 = kk_std_core_string_listchar_fs_string(x_10293, _ctx); /*string*/
  }
  return kk_string_box(_x_x1137);
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1142__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun1142(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1142(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1142, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace0_fun1142(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1143 = kk_string_empty(); /*string*/
  return kk_string_box(_x_x1143);
}

kk_string_t kk_std_text_parse_whitespace0(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_box_t _x_x1127 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_whitespace0_fun1128(_ctx), kk_std_text_parse_new_whitespace0_fun1142(_ctx), _ctx); /*1542*/
  return kk_string_unbox(_x_x1127);
}


// lift anonymous function
struct kk_std_text_parse_digits_fun1148__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_digits_fun1148(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun1148(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun1148, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_digits_fun1150__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_digits_fun1150(kk_function_t _fself, kk_char_t _x1_x1149, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun1150(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun1150, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_std_text_parse_digits_fun1150(kk_function_t _fself, kk_char_t _x1_x1149, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_char_is_digit(_x1_x1149, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_digits_fun1148(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _match_x787 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_digits_fun1150(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x505 = _match_x787.fst;
    kk_box_t _box_x506 = _match_x787.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x505, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x506, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x787, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x507 = _match_x787.fst;
    kk_box_t _box_x508 = _match_x787.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x508, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x507, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x787, _ctx);
    kk_box_t _x_x1151;
    kk_std_core_types__tuple2 _x_x1152 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x1151 = kk_std_core_types__tuple2_box(_x_x1152, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x1151, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits_fun1154__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits_fun1154(kk_function_t _fself, kk_box_t _b_x520, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun1154(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun1154, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits_fun1154(kk_function_t _fself, kk_box_t _b_x520, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1155;
  kk_std_core_types__list _x_x1156 = kk_std_core_types__list_unbox(_b_x520, KK_OWNED, _ctx); /*list<char>*/
  _x_x1155 = kk_std_core_string_listchar_fs_string(_x_x1156, _ctx); /*string*/
  return kk_string_box(_x_x1155);
}

kk_string_t kk_std_text_parse_digits(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_types__list x_10295;
  kk_box_t _x_x1145;
  kk_string_t _x_x1146;
  kk_define_string_literal(static, _s_x1147, 5, "digit", _ctx)
  _x_x1146 = kk_string_dup(_s_x1147, _ctx); /*string*/
  _x_x1145 = kk_std_text_parse_satisfy_fail(_x_x1146, kk_std_text_parse_new_digits_fun1148(_ctx), _ctx); /*1682*/
  x_10295 = kk_std_core_types__list_unbox(_x_x1145, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10295, _ctx);
    kk_box_t _x_x1153 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits_fun1154(_ctx), _ctx); /*2419*/
    return kk_string_unbox(_x_x1153);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10295, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun1158__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun1158(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1158(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1158, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_digits0_fun1162__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_digits0_fun1162(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1162(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1162, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_digits0_fun1164__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_digits0_fun1164(kk_function_t _fself, kk_char_t _x1_x1163, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1164(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1164, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_std_text_parse_digits0_fun1164(kk_function_t _fself, kk_char_t _x1_x1163, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_char_is_digit(_x1_x1163, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_digits0_fun1162(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _match_x785 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_digits0_fun1164(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x522 = _match_x785.fst;
    kk_box_t _box_x523 = _match_x785.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x522, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x523, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x785, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x524 = _match_x785.fst;
    kk_box_t _box_x525 = _match_x785.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x525, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x524, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x785, _ctx);
    kk_box_t _x_x1165;
    kk_std_core_types__tuple2 _x_x1166 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x1165 = kk_std_core_types__tuple2_box(_x_x1166, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x1165, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun1169__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun1169(kk_function_t _fself, kk_box_t _b_x537, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1169(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1169, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits0_fun1169(kk_function_t _fself, kk_box_t _b_x537, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1170;
  kk_std_core_types__list _x_x1171 = kk_std_core_types__list_unbox(_b_x537, KK_OWNED, _ctx); /*list<char>*/
  _x_x1170 = kk_std_core_string_listchar_fs_string(_x_x1171, _ctx); /*string*/
  return kk_string_box(_x_x1170);
}
static kk_box_t kk_std_text_parse_digits0_fun1158(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list x_10297;
  kk_box_t _x_x1159;
  kk_string_t _x_x1160;
  kk_define_string_literal(static, _s_x1161, 5, "digit", _ctx)
  _x_x1160 = kk_string_dup(_s_x1161, _ctx); /*string*/
  _x_x1159 = kk_std_text_parse_satisfy_fail(_x_x1160, kk_std_text_parse_new_digits0_fun1162(_ctx), _ctx); /*1682*/
  x_10297 = kk_std_core_types__list_unbox(_x_x1159, KK_OWNED, _ctx); /*list<char>*/
  kk_string_t _x_x1167;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10297, _ctx);
    kk_box_t _x_x1168 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits0_fun1169(_ctx), _ctx); /*2419*/
    _x_x1167 = kk_string_unbox(_x_x1168); /*string*/
  }
  else {
    _x_x1167 = kk_std_core_string_listchar_fs_string(x_10297, _ctx); /*string*/
  }
  return kk_string_box(_x_x1167);
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun1172__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun1172(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1172(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1172, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits0_fun1172(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1173;
  kk_define_string_literal(static, _s_x1174, 1, "0", _ctx)
  _x_x1173 = kk_string_dup(_s_x1174, _ctx); /*string*/
  return kk_string_box(_x_x1173);
}

kk_string_t kk_std_text_parse_digits0(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_box_t _x_x1157 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_digits0_fun1158(_ctx), kk_std_text_parse_new_digits0_fun1172(_ctx), _ctx); /*1542*/
  return kk_string_unbox(_x_x1157);
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_pnat_10191_fun1176__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_pnat_10191_fun1176(kk_function_t _fself, kk_box_t _b_x547, kk_box_t _b_x548, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pnat_10191_fun1176(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_pnat_10191_fun1176, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pnat_10191_fun1176(kk_function_t _fself, kk_box_t _b_x547, kk_box_t _b_x548, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x1177;
  kk_string_t _x_x1178 = kk_string_unbox(_b_x547); /*string*/
  bool _x_x1179;
  kk_std_core_types__optional _match_x783 = kk_std_core_types__optional_unbox(_b_x548, KK_OWNED, _ctx); /*? bool*/;
  if (kk_std_core_types__is_Optional(_match_x783, _ctx)) {
    kk_box_t _box_x543 = _match_x783._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x543);
    kk_std_core_types__optional_drop(_match_x783, _ctx);
    _x_x1179 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x783, _ctx);
    _x_x1179 = false; /*bool*/
  }
  _x_x1177 = kk_std_core_int_xparse(_x_x1178, _x_x1179, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x_x1177, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_pnat_10191_fun1181__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_pnat_10191_fun1181(kk_function_t _fself, kk_box_t _b_x558, kk_box_t _b_x559, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pnat_10191_fun1181(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_pnat_10191_fun1181, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pnat_10191_fun1181(kk_function_t _fself, kk_box_t _b_x558, kk_box_t _b_x559, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe m_563 = kk_std_core_types__maybe_unbox(_b_x558, KK_OWNED, _ctx); /*maybe<int>*/;
  kk_integer_t nothing_564 = kk_integer_unbox(_b_x559, _ctx); /*int*/;
  kk_integer_t _x_x1182;
  if (kk_std_core_types__is_Nothing(m_563, _ctx)) {
    _x_x1182 = nothing_564; /*int*/
  }
  else {
    kk_box_t _box_x554 = m_563._cons.Just.value;
    kk_integer_t x = kk_integer_unbox(_box_x554, _ctx);
    kk_integer_drop(nothing_564, _ctx);
    kk_integer_dup(x, _ctx);
    kk_std_core_types__maybe_drop(m_563, _ctx);
    _x_x1182 = x; /*int*/
  }
  return kk_integer_box(_x_x1182, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_pnat_10191(kk_std_core_types__list _y_x10128, kk_context_t* _ctx) { /* (list<char>) -> parse int */ 
  kk_string_t _x_x1_0_10174 = kk_std_core_string_listchar_fs_string(_y_x10128, _ctx); /*string*/;
  kk_std_core_types__maybe _x_x1_10172;
  kk_box_t _x_x1175 = kk_std_core_hnd__open_none2(kk_std_text_parse__new_mlift_pnat_10191_fun1176(_ctx), kk_string_box(_x_x1_0_10174), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*10005*/
  _x_x1_10172 = kk_std_core_types__maybe_unbox(_x_x1175, KK_OWNED, _ctx); /*maybe<int>*/
  kk_box_t _x_x1180 = kk_std_core_hnd__open_none2(kk_std_text_parse__new_mlift_pnat_10191_fun1181(_ctx), kk_std_core_types__maybe_box(_x_x1_10172, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*10005*/
  return kk_integer_unbox(_x_x1180, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun1186__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_pnat_fun1186(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1186(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1186, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_pnat_fun1188__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_pnat_fun1188(kk_function_t _fself, kk_char_t _x1_x1187, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1188(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1188, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_std_text_parse_pnat_fun1188(kk_function_t _fself, kk_char_t _x1_x1187, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_char_is_digit(_x1_x1187, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_pnat_fun1186(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _match_x782 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_pnat_fun1188(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x565 = _match_x782.fst;
    kk_box_t _box_x566 = _match_x782.snd;
    kk_std_core_types__list _pat_0_1 = kk_std_core_types__list_unbox(_box_x565, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x566, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_1, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x782, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x567 = _match_x782.fst;
    kk_box_t _box_x568 = _match_x782.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x568, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x567, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x782, _ctx);
    kk_box_t _x_x1189;
    kk_std_core_types__tuple2 _x_x1190 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x1189 = kk_std_core_types__tuple2_box(_x_x1190, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x1189, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun1192__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun1192(kk_function_t _fself, kk_box_t _b_x580, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1192(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1192, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pnat_fun1192(kk_function_t _fself, kk_box_t _b_x580, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1193;
  kk_std_core_types__list _x_x1194 = kk_std_core_types__list_unbox(_b_x580, KK_OWNED, _ctx); /*list<char>*/
  _x_x1193 = kk_std_text_parse__mlift_pnat_10191(_x_x1194, _ctx); /*int*/
  return kk_integer_box(_x_x1193, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun1196__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun1196(kk_function_t _fself, kk_box_t _b_x585, kk_box_t _b_x586, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1196(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1196, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pnat_fun1196(kk_function_t _fself, kk_box_t _b_x585, kk_box_t _b_x586, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x1197;
  kk_string_t _x_x1198 = kk_string_unbox(_b_x585); /*string*/
  bool _x_x1199;
  kk_std_core_types__optional _match_x781 = kk_std_core_types__optional_unbox(_b_x586, KK_OWNED, _ctx); /*? bool*/;
  if (kk_std_core_types__is_Optional(_match_x781, _ctx)) {
    kk_box_t _box_x581 = _match_x781._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x581);
    kk_std_core_types__optional_drop(_match_x781, _ctx);
    _x_x1199 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x781, _ctx);
    _x_x1199 = false; /*bool*/
  }
  _x_x1197 = kk_std_core_int_xparse(_x_x1198, _x_x1199, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x_x1197, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun1201__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun1201(kk_function_t _fself, kk_box_t _b_x596, kk_box_t _b_x597, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1201(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1201, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pnat_fun1201(kk_function_t _fself, kk_box_t _b_x596, kk_box_t _b_x597, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe m_602 = kk_std_core_types__maybe_unbox(_b_x596, KK_OWNED, _ctx); /*maybe<int>*/;
  kk_integer_t nothing_603 = kk_integer_unbox(_b_x597, _ctx); /*int*/;
  kk_integer_t _x_x1202;
  if (kk_std_core_types__is_Nothing(m_602, _ctx)) {
    _x_x1202 = nothing_603; /*int*/
  }
  else {
    kk_box_t _box_x592 = m_602._cons.Just.value;
    kk_integer_t x_0 = kk_integer_unbox(_box_x592, _ctx);
    kk_integer_drop(nothing_603, _ctx);
    kk_integer_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(m_602, _ctx);
    _x_x1202 = x_0; /*int*/
  }
  return kk_integer_box(_x_x1202, _ctx);
}

kk_integer_t kk_std_text_parse_pnat(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_std_core_types__list x_10299;
  kk_box_t _x_x1183;
  kk_string_t _x_x1184;
  kk_define_string_literal(static, _s_x1185, 5, "digit", _ctx)
  _x_x1184 = kk_string_dup(_s_x1185, _ctx); /*string*/
  _x_x1183 = kk_std_text_parse_satisfy_fail(_x_x1184, kk_std_text_parse_new_pnat_fun1186(_ctx), _ctx); /*1682*/
  x_10299 = kk_std_core_types__list_unbox(_x_x1183, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10299, _ctx);
    kk_box_t _x_x1191 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pnat_fun1192(_ctx), _ctx); /*2419*/
    return kk_integer_unbox(_x_x1191, _ctx);
  }
  {
    kk_string_t _x_x1_0_10174 = kk_std_core_string_listchar_fs_string(x_10299, _ctx); /*string*/;
    kk_std_core_types__maybe _x_x1_10172;
    kk_box_t _x_x1195 = kk_std_core_hnd__open_none2(kk_std_text_parse_new_pnat_fun1196(_ctx), kk_string_box(_x_x1_0_10174), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*10005*/
    _x_x1_10172 = kk_std_core_types__maybe_unbox(_x_x1195, KK_OWNED, _ctx); /*maybe<int>*/
    kk_box_t _x_x1200 = kk_std_core_hnd__open_none2(kk_std_text_parse_new_pnat_fun1201(_ctx), kk_std_core_types__maybe_box(_x_x1_10172, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*10005*/
    return kk_integer_unbox(_x_x1200, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_none_of_fun1206__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_std_core_types__maybe kk_std_text_parse_none_of_fun1206(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_fun1206(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_fun1206__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_fun1206__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_none_of_fun1206, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_none_of_fun1206(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_fun1206__t* _self = kk_function_as(struct kk_std_text_parse_none_of_fun1206__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x779 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x779, _ctx)) {
    kk_box_t _box_x604 = _match_x779._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x604, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x605 = _pat_0.fst;
      kk_box_t _box_x606 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x605, KK_BORROWED, _ctx);
      bool b_10040;
      kk_string_t _x_x1207 = kk_string_dup(chars, _ctx); /*string*/
      kk_string_t _x_x1208 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      b_10040 = kk_string_contains(_x_x1207,_x_x1208,kk_context()); /*bool*/
      bool _x_x1209;
      if (b_10040) {
        _x_x1209 = false; /*bool*/
      }
      else {
        _x_x1209 = true; /*bool*/
      }
      if (_x_x1209) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x606, KK_BORROWED, _ctx);
        kk_string_drop(chars, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x779, _ctx);
        kk_box_t _x_x1210;
        kk_std_core_types__tuple2 _x_x1211 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1210 = kk_std_core_types__tuple2_box(_x_x1211, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1210, _ctx);
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_x779, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_none_of(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse char */ 
  kk_box_t _x_x1203;
  kk_string_t _x_x1204 = kk_string_empty(); /*string*/
  _x_x1203 = kk_std_text_parse_satisfy_fail(_x_x1204, kk_std_text_parse_new_none_of_fun1206(chars, _ctx), _ctx); /*1682*/
  return kk_char_unbox(_x_x1203, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun1215__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_std_core_types__maybe kk_std_text_parse_none_of_many1_fun1215(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun1215(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun1215__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_many1_fun1215__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_none_of_many1_fun1215, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun1216__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static bool kk_std_text_parse_none_of_many1_fun1216(kk_function_t _fself, kk_char_t c, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun1216(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun1216__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_many1_fun1216__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_none_of_many1_fun1216, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_text_parse_none_of_many1_fun1216(kk_function_t _fself, kk_char_t c, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun1216__t* _self = kk_function_as(struct kk_std_text_parse_none_of_many1_fun1216__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  bool b_10043;
  kk_string_t _x_x1217 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
  b_10043 = kk_string_contains(chars,_x_x1217,kk_context()); /*bool*/
  if (b_10043) {
    return false;
  }
  {
    return true;
  }
}
static kk_std_core_types__maybe kk_std_text_parse_none_of_many1_fun1215(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun1215__t* _self = kk_function_as(struct kk_std_text_parse_none_of_many1_fun1215__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x778 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_none_of_many1_fun1216(chars, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x617 = _match_x778.fst;
    kk_box_t _box_x618 = _match_x778.snd;
    kk_std_core_types__list _pat_0_1 = kk_std_core_types__list_unbox(_box_x617, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x618, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_1, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x778, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x619 = _match_x778.fst;
    kk_box_t _box_x620 = _match_x778.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x620, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x619, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x778, _ctx);
    kk_box_t _x_x1218;
    kk_std_core_types__tuple2 _x_x1219 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x1218 = kk_std_core_types__tuple2_box(_x_x1219, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x1218, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun1221__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_none_of_many1_fun1221(kk_function_t _fself, kk_box_t _b_x632, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun1221(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_none_of_many1_fun1221, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_none_of_many1_fun1221(kk_function_t _fself, kk_box_t _b_x632, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1222;
  kk_std_core_types__list _x_x1223 = kk_std_core_types__list_unbox(_b_x632, KK_OWNED, _ctx); /*list<char>*/
  _x_x1222 = kk_std_core_string_listchar_fs_string(_x_x1223, _ctx); /*string*/
  return kk_string_box(_x_x1222);
}

kk_string_t kk_std_text_parse_none_of_many1(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse string */ 
  kk_std_core_types__list x_10302;
  kk_box_t _x_x1212;
  kk_string_t _x_x1213 = kk_string_empty(); /*string*/
  _x_x1212 = kk_std_text_parse_satisfy_fail(_x_x1213, kk_std_text_parse_new_none_of_many1_fun1215(chars, _ctx), _ctx); /*1682*/
  x_10302 = kk_std_core_types__list_unbox(_x_x1212, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10302, _ctx);
    kk_box_t _x_x1220 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_none_of_many1_fun1221(_ctx), _ctx); /*2419*/
    return kk_string_unbox(_x_x1220);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10302, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_one_of_fun1226__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_std_core_types__maybe kk_std_text_parse_one_of_fun1226(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_one_of_fun1226(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun1226__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_fun1226__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_one_of_fun1226, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_one_of_fun1226(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun1226__t* _self = kk_function_as(struct kk_std_text_parse_one_of_fun1226__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x776 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x776, _ctx)) {
    kk_box_t _box_x634 = _match_x776._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x634, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x635 = _pat_0.fst;
      kk_box_t _box_x636 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x635, KK_BORROWED, _ctx);
      kk_string_t _x_x1227 = kk_string_dup(chars, _ctx); /*string*/
      kk_string_t _x_x1228 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x1227,_x_x1228,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x636, KK_BORROWED, _ctx);
        kk_string_drop(chars, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x776, _ctx);
        kk_box_t _x_x1229;
        kk_std_core_types__tuple2 _x_x1230 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1229 = kk_std_core_types__tuple2_box(_x_x1230, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1229, _ctx);
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_x776, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_one_of(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse char */ 
  kk_box_t _x_x1224;
  kk_string_t _x_x1225 = kk_string_dup(chars, _ctx); /*string*/
  _x_x1224 = kk_std_text_parse_satisfy_fail(_x_x1225, kk_std_text_parse_new_one_of_fun1226(chars, _ctx), _ctx); /*1682*/
  return kk_char_unbox(_x_x1224, KK_OWNED, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_text_parse__mlift_many_acc_10192(kk_std_core_types__list acc, kk_function_t p, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 
  kk_std_core_types__list _x_x1231 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x, acc, _ctx); /*list<79>*/
  return kk_std_text_parse_many_acc(p, _x_x1231, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun1234__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
  kk_function_t p_0;
};
static kk_box_t kk_std_text_parse_many_acc_fun1234(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun1234(kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1234__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun1234__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many_acc_fun1234, kk_context());
  _self->acc_0 = acc_0;
  _self->p_0 = p_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_many_acc_fun1238__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
  kk_function_t p_0;
};
static kk_box_t kk_std_text_parse_many_acc_fun1238(kk_function_t _fself, kk_box_t _b_x648, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun1238(kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1238__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun1238__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many_acc_fun1238, kk_context());
  _self->acc_0 = acc_0;
  _self->p_0 = p_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many_acc_fun1238(kk_function_t _fself, kk_box_t _b_x648, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1238__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun1238__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2723> */
  kk_function_t p_0 = _self->p_0; /* std/text/parse/parser<2724,2723> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);kk_function_dup(p_0, _ctx);}, {}, _ctx)
  kk_box_t x_1_654 = _b_x648; /*2723*/;
  kk_std_core_types__list _x_x1239 = kk_std_text_parse__mlift_many_acc_10192(acc_0, p_0, x_1_654, _ctx); /*list<2723>*/
  return kk_std_core_types__list_box(_x_x1239, _ctx);
}
static kk_box_t kk_std_text_parse_many_acc_fun1234(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1234__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun1234__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2723> */
  kk_function_t p_0 = _self->p_0; /* std/text/parse/parser<2724,2723> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);kk_function_dup(p_0, _ctx);}, {}, _ctx)
  kk_box_t x_0_10304;
  kk_function_t _x_x1235 = kk_function_dup(p_0, _ctx); /*std/text/parse/parser<2724,2723>*/
  x_0_10304 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x1235, (_x_x1235, _ctx), _ctx); /*2723*/
  kk_std_core_types__list _x_x1236;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_0_10304, _ctx);
    kk_box_t _x_x1237 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many_acc_fun1238(acc_0, p_0, _ctx), _ctx); /*2419*/
    _x_x1236 = kk_std_core_types__list_unbox(_x_x1237, KK_OWNED, _ctx); /*list<2723>*/
  }
  else {
    _x_x1236 = kk_std_text_parse__mlift_many_acc_10192(acc_0, p_0, x_0_10304, _ctx); /*list<2723>*/
  }
  return kk_std_core_types__list_box(_x_x1236, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun1240__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
};
static kk_box_t kk_std_text_parse_many_acc_fun1240(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun1240(kk_std_core_types__list acc_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1240__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun1240__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many_acc_fun1240, kk_context());
  _self->acc_0 = acc_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many_acc_fun1240(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1240__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun1240__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2723> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1241 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), acc_0, _ctx); /*list<1048>*/
  return kk_std_core_types__list_box(_x_x1241, _ctx);
}

kk_std_core_types__list kk_std_text_parse_many_acc(kk_function_t p_0, kk_std_core_types__list acc_0, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>, acc : list<a>) -> <parse|e> list<a> */ 
  kk_box_t _x_x1232;
  kk_function_t _x_x1233;
  kk_std_core_types__list_dup(acc_0, _ctx);
  _x_x1233 = kk_std_text_parse_new_many_acc_fun1234(acc_0, p_0, _ctx); /*() -> <std/text/parse/parse|1543> 1542*/
  _x_x1232 = kk_std_text_parse__lp__bar__bar__rp_(_x_x1233, kk_std_text_parse_new_many_acc_fun1240(acc_0, _ctx), _ctx); /*1542*/
  return kk_std_core_types__list_unbox(_x_x1232, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_many1_10194_fun1243__t {
  struct kk_function_s _base;
  kk_box_t _y_x10136;
};
static kk_box_t kk_std_text_parse__mlift_many1_10194_fun1243(kk_function_t _fself, kk_box_t _b_x656, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_many1_10194_fun1243(kk_box_t _y_x10136, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_many1_10194_fun1243__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_many1_10194_fun1243__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_many1_10194_fun1243, kk_context());
  _self->_y_x10136 = _y_x10136;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_many1_10194_fun1243(kk_function_t _fself, kk_box_t _b_x656, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_many1_10194_fun1243__t* _self = kk_function_as(struct kk_std_text_parse__mlift_many1_10194_fun1243__t*, _fself, _ctx);
  kk_box_t _y_x10136 = _self->_y_x10136; /* 2791 */
  kk_drop_match(_self, {kk_box_dup(_y_x10136, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10137_658 = kk_std_core_types__list_unbox(_b_x656, KK_OWNED, _ctx); /*list<2791>*/;
  kk_std_core_types__list _x_x1244 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10136, _y_x10137_658, _ctx); /*list<79>*/
  return kk_std_core_types__list_box(_x_x1244, _ctx);
}

kk_std_core_types__list kk_std_text_parse__mlift_many1_10194(kk_function_t p, kk_box_t _y_x10136, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>, a) -> <parse|e> list<a> */ 
  kk_std_core_types__list x_10306 = kk_std_text_parse_many_acc(p, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<2791>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10306, _ctx);
    kk_box_t _x_x1242 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_many1_10194_fun1243(_y_x10136, _ctx), _ctx); /*2419*/
    return kk_std_core_types__list_unbox(_x_x1242, KK_OWNED, _ctx);
  }
  {
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10136, x_10306, _ctx);
  }
}
 
// The `many1` combinator parses `p` at least once and then until it fails, returning a list of the results of `p`.
// The `many1` combinator is non-divergent only when `p` always consumes input or `fail`s.


// lift anonymous function
struct kk_std_text_parse_many1_fun1247__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_many1_fun1247(kk_function_t _fself, kk_box_t _b_x660, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many1_fun1247(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun1247__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many1_fun1247__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many1_fun1247, kk_context());
  _self->p = p;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many1_fun1247(kk_function_t _fself, kk_box_t _b_x660, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun1247__t* _self = kk_function_as(struct kk_std_text_parse_many1_fun1247__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* std/text/parse/parser<2792,2791> */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);}, {}, _ctx)
  kk_box_t _y_x10136_665 = _b_x660; /*2791*/;
  kk_std_core_types__list _x_x1248 = kk_std_text_parse__mlift_many1_10194(p, _y_x10136_665, _ctx); /*list<2791>*/
  return kk_std_core_types__list_box(_x_x1248, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many1_fun1250__t {
  struct kk_function_s _base;
  kk_box_t x_10310;
};
static kk_box_t kk_std_text_parse_many1_fun1250(kk_function_t _fself, kk_box_t _b_x662, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many1_fun1250(kk_box_t x_10310, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun1250__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many1_fun1250__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many1_fun1250, kk_context());
  _self->x_10310 = x_10310;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many1_fun1250(kk_function_t _fself, kk_box_t _b_x662, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun1250__t* _self = kk_function_as(struct kk_std_text_parse_many1_fun1250__t*, _fself, _ctx);
  kk_box_t x_10310 = _self->x_10310; /* 2791 */
  kk_drop_match(_self, {kk_box_dup(x_10310, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10137_666 = kk_std_core_types__list_unbox(_b_x662, KK_OWNED, _ctx); /*list<2791>*/;
  kk_std_core_types__list _x_x1251 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_10310, _y_x10137_666, _ctx); /*list<79>*/
  return kk_std_core_types__list_box(_x_x1251, _ctx);
}

kk_std_core_types__list kk_std_text_parse_many1(kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 
  kk_box_t x_10310;
  kk_function_t _x_x1245 = kk_function_dup(p, _ctx); /*std/text/parse/parser<2792,2791>*/
  x_10310 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x1245, (_x_x1245, _ctx), _ctx); /*2791*/
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10310, _ctx);
    kk_box_t _x_x1246 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many1_fun1247(p, _ctx), _ctx); /*2419*/
    return kk_std_core_types__list_unbox(_x_x1246, KK_OWNED, _ctx);
  }
  {
    kk_std_core_types__list x_0_10313 = kk_std_text_parse_many_acc(p, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<2791>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_0_10313, _ctx);
      kk_box_t _x_x1249 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many1_fun1250(x_10310, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1249, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Cons(kk_reuse_null, 0, x_10310, x_0_10313, _ctx);
    }
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_text_parse__mlift_count_acc_10195(kk_std_core_types__list acc, kk_integer_t n, kk_function_t p, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, n : int, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 
  kk_integer_t _x_x1252 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
  kk_std_core_types__list _x_x1253 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x, acc, _ctx); /*list<79>*/
  return kk_std_text_parse_count_acc(_x_x1252, _x_x1253, p, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_count_acc_fun1256__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
  kk_integer_t n_0;
  kk_function_t p_0;
};
static kk_box_t kk_std_text_parse_count_acc_fun1256(kk_function_t _fself, kk_box_t _b_x668, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_count_acc_fun1256(kk_std_core_types__list acc_0, kk_integer_t n_0, kk_function_t p_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_count_acc_fun1256__t* _self = kk_function_alloc_as(struct kk_std_text_parse_count_acc_fun1256__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_count_acc_fun1256, kk_context());
  _self->acc_0 = acc_0;
  _self->n_0 = n_0;
  _self->p_0 = p_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_count_acc_fun1256(kk_function_t _fself, kk_box_t _b_x668, kk_context_t* _ctx) {
  struct kk_std_text_parse_count_acc_fun1256__t* _self = kk_function_as(struct kk_std_text_parse_count_acc_fun1256__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2892> */
  kk_integer_t n_0 = _self->n_0; /* int */
  kk_function_t p_0 = _self->p_0; /* std/text/parse/parser<2893,2892> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);kk_integer_dup(n_0, _ctx);kk_function_dup(p_0, _ctx);}, {}, _ctx)
  kk_box_t x_1_670 = _b_x668; /*2892*/;
  kk_std_core_types__list _x_x1257 = kk_std_text_parse__mlift_count_acc_10195(acc_0, n_0, p_0, x_1_670, _ctx); /*list<2892>*/
  return kk_std_core_types__list_box(_x_x1257, _ctx);
}

kk_std_core_types__list kk_std_text_parse_count_acc(kk_integer_t n_0, kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx) { /* forall<a,e> (n : int, acc : list<a>, p : parser<e,a>) -> <parse|e> list<a> */ 
  kk__tailcall: ;
  bool _match_x770 = kk_integer_lte_borrow(n_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x770) {
    kk_function_drop(p_0, _ctx);
    kk_integer_drop(n_0, _ctx);
    return kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), acc_0, _ctx);
  }
  {
    kk_box_t x_0_10318;
    kk_function_t _x_x1254 = kk_function_dup(p_0, _ctx); /*std/text/parse/parser<2893,2892>*/
    x_0_10318 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x1254, (_x_x1254, _ctx), _ctx); /*2892*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10318, _ctx);
      kk_box_t _x_x1255 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_count_acc_fun1256(acc_0, n_0, p_0, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1255, KK_OWNED, _ctx);
    }
    { // tailcall
      kk_integer_t _x_x1258 = kk_integer_add_small_const(n_0, -1, _ctx); /*int*/
      kk_std_core_types__list _x_x1259 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_0_10318, acc_0, _ctx); /*list<79>*/
      n_0 = _x_x1258;
      acc_0 = _x_x1259;
      goto kk__tailcall;
    }
  }
}
extern kk_box_t kk_std_text_parse_one_of_or_fun1261(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun1261__t* _self = kk_function_as(struct kk_std_text_parse_one_of_or_fun1261__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_char_t _x_x1262 = kk_std_text_parse_one_of(chars, _ctx); /*char*/
  return kk_char_box(_x_x1262, _ctx);
}
extern kk_box_t kk_std_text_parse_one_of_or_fun1263(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun1263__t* _self = kk_function_as(struct kk_std_text_parse_one_of_or_fun1263__t*, _fself, _ctx);
  kk_char_t kkloc_default = _self->kkloc_default; /* char */
  kk_drop_match(_self, {kk_skip_dup(kkloc_default, _ctx);}, {}, _ctx)
  return kk_char_box(kkloc_default, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun1265__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun1265(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun1265(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun1265, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_sign_fun1268__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_sign_fun1268(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun1268(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun1268, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_sign_fun1268(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _match_x769 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x769, _ctx)) {
    kk_box_t _box_x675 = _match_x769._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0 = kk_std_core_types__tuple2_unbox(_box_x675, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0, _ctx)) {
      kk_box_t _box_x676 = _pat_0_0.fst;
      kk_box_t _box_x677 = _pat_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x676, KK_BORROWED, _ctx);
      kk_string_t _x_x1269;
      kk_define_string_literal(static, _s_x1270, 2, "+-", _ctx)
      _x_x1269 = kk_string_dup(_s_x1270, _ctx); /*string*/
      kk_string_t _x_x1271 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x1269,_x_x1271,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x677, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x769, _ctx);
        kk_box_t _x_x1272;
        kk_std_core_types__tuple2 _x_x1273 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1272 = kk_std_core_types__tuple2_box(_x_x1273, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1272, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x769, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
static kk_box_t kk_std_text_parse_sign_fun1265(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1266;
  kk_define_string_literal(static, _s_x1267, 2, "+-", _ctx)
  _x_x1266 = kk_string_dup(_s_x1267, _ctx); /*string*/
  return kk_std_text_parse_satisfy_fail(_x_x1266, kk_std_text_parse_new_sign_fun1268(_ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun1274__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun1274(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun1274(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun1274, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_sign_fun1274(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_char_box('+', _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun1276__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun1276(kk_function_t _fself, kk_box_t _b_x693, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun1276(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun1276, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_sign_fun1276(kk_function_t _fself, kk_box_t _b_x693, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x1277;
  kk_char_t _x_x1278 = kk_char_unbox(_b_x693, KK_OWNED, _ctx); /*char*/
  _x_x1277 = kk_std_text_parse__mlift_sign_10196(_x_x1278, _ctx); /*bool*/
  return kk_bool_box(_x_x1277);
}

bool kk_std_text_parse_sign(kk_context_t* _ctx) { /* () -> parse bool */ 
  kk_char_t x_10321;
  kk_box_t _x_x1264 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_sign_fun1265(_ctx), kk_std_text_parse_new_sign_fun1274(_ctx), _ctx); /*1542*/
  x_10321 = kk_char_unbox(_x_x1264, KK_OWNED, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1275 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sign_fun1276(_ctx), _ctx); /*2419*/
    return kk_bool_unbox(_x_x1275);
  }
  {
    return (x_10321 == ('-'));
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_pint_10198_fun1280__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse__mlift_pint_10198_fun1280(kk_function_t _fself, kk_box_t _b_x696, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pint_10198_fun1280(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_pint_10198_fun1280__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_pint_10198_fun1280__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_pint_10198_fun1280, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pint_10198_fun1280(kk_function_t _fself, kk_box_t _b_x696, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_pint_10198_fun1280__t* _self = kk_function_as(struct kk_std_text_parse__mlift_pint_10198_fun1280__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1281;
  kk_integer_t i_698 = kk_integer_unbox(_b_x696, _ctx); /*int*/;
  if (neg) {
    _x_x1281 = kk_integer_neg(i_698,kk_context()); /*int*/
  }
  else {
    _x_x1281 = i_698; /*int*/
  }
  return kk_integer_box(_x_x1281, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_pint_10198(kk_char_t c_0, kk_context_t* _ctx) { /* (c@0 : char) -> parse int */ 
  bool neg = (c_0 == ('-')); /*bool*/;
  kk_integer_t x_10324 = kk_std_text_parse_pnat(_ctx); /*int*/;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10324, _ctx);
    kk_box_t _x_x1279 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_pint_10198_fun1280(neg, _ctx), _ctx); /*2419*/
    return kk_integer_unbox(_x_x1279, _ctx);
  }
  {
    kk_integer_t i_699 = x_10324; /*int*/;
    if (neg) {
      return kk_integer_neg(i_699,kk_context());
    }
    {
      return i_699;
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_pint_fun1283__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun1283(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1283(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun1283, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_pint_fun1286__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_pint_fun1286(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1286(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun1286, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_pint_fun1286(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _match_x766 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x766, _ctx)) {
    kk_box_t _box_x700 = _match_x766._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0 = kk_std_core_types__tuple2_unbox(_box_x700, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0, _ctx)) {
      kk_box_t _box_x701 = _pat_0_0.fst;
      kk_box_t _box_x702 = _pat_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x701, KK_BORROWED, _ctx);
      kk_string_t _x_x1287;
      kk_define_string_literal(static, _s_x1288, 2, "+-", _ctx)
      _x_x1287 = kk_string_dup(_s_x1288, _ctx); /*string*/
      kk_string_t _x_x1289 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x1287,_x_x1289,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x702, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x766, _ctx);
        kk_box_t _x_x1290;
        kk_std_core_types__tuple2 _x_x1291 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
        _x_x1290 = kk_std_core_types__tuple2_box(_x_x1291, _ctx); /*88*/
        return kk_std_core_types__new_Just(_x_x1290, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x766, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
static kk_box_t kk_std_text_parse_pint_fun1283(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1284;
  kk_define_string_literal(static, _s_x1285, 2, "+-", _ctx)
  _x_x1284 = kk_string_dup(_s_x1285, _ctx); /*string*/
  return kk_std_text_parse_satisfy_fail(_x_x1284, kk_std_text_parse_new_pint_fun1286(_ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun1292__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun1292(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1292(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun1292, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun1292(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_char_box('+', _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun1294__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun1294(kk_function_t _fself, kk_box_t _b_x718, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1294(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun1294, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun1294(kk_function_t _fself, kk_box_t _b_x718, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x1295;
  kk_char_t _x_x1296 = kk_char_unbox(_b_x718, KK_OWNED, _ctx); /*char*/
  _x_x1295 = kk_std_text_parse__mlift_pint_10198(_x_x1296, _ctx); /*int*/
  return kk_integer_box(_x_x1295, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun1298__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse_pint_fun1298(kk_function_t _fself, kk_box_t _b_x720, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1298(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun1298__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pint_fun1298__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_pint_fun1298, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun1298(kk_function_t _fself, kk_box_t _b_x720, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun1298__t* _self = kk_function_as(struct kk_std_text_parse_pint_fun1298__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_integer_t i_723 = kk_integer_unbox(_b_x720, _ctx); /*int*/;
  kk_integer_t _x_x1299;
  if (neg) {
    _x_x1299 = kk_integer_neg(i_723,kk_context()); /*int*/
  }
  else {
    _x_x1299 = i_723; /*int*/
  }
  return kk_integer_box(_x_x1299, _ctx);
}

kk_integer_t kk_std_text_parse_pint(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_char_t x_10328;
  kk_box_t _x_x1282 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_pint_fun1283(_ctx), kk_std_text_parse_new_pint_fun1292(_ctx), _ctx); /*1542*/
  x_10328 = kk_char_unbox(_x_x1282, KK_OWNED, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1293 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun1294(_ctx), _ctx); /*2419*/
    return kk_integer_unbox(_x_x1293, _ctx);
  }
  {
    bool neg = (x_10328 == ('-')); /*bool*/;
    kk_integer_t x_0_10331 = kk_std_text_parse_pnat(_ctx); /*int*/;
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x_0_10331, _ctx);
      kk_box_t _x_x1297 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun1298(neg, _ctx), _ctx); /*2419*/
      return kk_integer_unbox(_x_x1297, _ctx);
    }
    if (neg) {
      return kk_integer_neg(x_0_10331,kk_context());
    }
    {
      return x_0_10331;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_sep_by1_10201_fun1300__t {
  struct kk_function_s _base;
  kk_function_t p;
  kk_function_t sep;
};
static kk_box_t kk_std_text_parse__mlift_sep_by1_10201_fun1300(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_sep_by1_10201_fun1300(kk_function_t p, kk_function_t sep, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_sep_by1_10201_fun1300__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_sep_by1_10201_fun1300__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_sep_by1_10201_fun1300, kk_context());
  _self->p = p;
  _self->sep = sep;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse__mlift_sep_by1_10201_fun1301__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse__mlift_sep_by1_10201_fun1301(kk_function_t _fself, kk_box_t wild__, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_sep_by1_10201_fun1301(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_sep_by1_10201_fun1301__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_sep_by1_10201_fun1301__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_sep_by1_10201_fun1301, kk_context());
  _self->p = p;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_sep_by1_10201_fun1301(kk_function_t _fself, kk_box_t wild__, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_sep_by1_10201_fun1301__t* _self = kk_function_as(struct kk_std_text_parse__mlift_sep_by1_10201_fun1301__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* std/text/parse/parser<3145,3143> */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);}, {}, _ctx)
  kk_box_drop(wild__, _ctx);
  return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx);
}
static kk_box_t kk_std_text_parse__mlift_sep_by1_10201_fun1300(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_sep_by1_10201_fun1300__t* _self = kk_function_as(struct kk_std_text_parse__mlift_sep_by1_10201_fun1300__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* std/text/parse/parser<3145,3143> */
  kk_function_t sep = _self->sep; /* std/text/parse/parser<3145,3144> */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);kk_function_dup(sep, _ctx);}, {}, _ctx)
  kk_box_t x_0_10338 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), sep, (sep, _ctx), _ctx); /*3144*/;
  kk_box_drop(x_0_10338, _ctx);
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_sep_by1_10201_fun1301(p, _ctx), _ctx);
  }
  {
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse__mlift_sep_by1_10201_fun1303__t {
  struct kk_function_s _base;
  kk_box_t _y_x10150;
};
static kk_box_t kk_std_text_parse__mlift_sep_by1_10201_fun1303(kk_function_t _fself, kk_box_t _b_x725, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_sep_by1_10201_fun1303(kk_box_t _y_x10150, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_sep_by1_10201_fun1303__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_sep_by1_10201_fun1303__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_sep_by1_10201_fun1303, kk_context());
  _self->_y_x10150 = _y_x10150;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_sep_by1_10201_fun1303(kk_function_t _fself, kk_box_t _b_x725, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_sep_by1_10201_fun1303__t* _self = kk_function_as(struct kk_std_text_parse__mlift_sep_by1_10201_fun1303__t*, _fself, _ctx);
  kk_box_t _y_x10150 = _self->_y_x10150; /* 3143 */
  kk_drop_match(_self, {kk_box_dup(_y_x10150, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10153_727 = kk_std_core_types__list_unbox(_b_x725, KK_OWNED, _ctx); /*list<3143>*/;
  kk_std_core_types__list _x_x1304 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10150, _y_x10153_727, _ctx); /*list<79>*/
  return kk_std_core_types__list_box(_x_x1304, _ctx);
}

kk_std_core_types__list kk_std_text_parse__mlift_sep_by1_10201(kk_function_t p, kk_function_t sep, kk_box_t _y_x10150, kk_context_t* _ctx) { /* forall<a,b,e> (p : parser<e,a>, sep : parser<e,b>, a) -> <parse|e> list<a> */ 
  kk_std_core_types__list x_10336 = kk_std_text_parse_many_acc(kk_std_text_parse__new_mlift_sep_by1_10201_fun1300(p, sep, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<3143>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10336, _ctx);
    kk_box_t _x_x1302 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_sep_by1_10201_fun1303(_y_x10150, _ctx), _ctx); /*2419*/
    return kk_std_core_types__list_unbox(_x_x1302, KK_OWNED, _ctx);
  }
  {
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10150, x_10336, _ctx);
  }
}
 
// The `sep-by1` parses one or more occurrences of `p`, separated by `sep`. Returns a list of the results of `p`.
// The `sep-by1` combinator is non-divergent only when `p` always consumes input or `fail`s.


// lift anonymous function
struct kk_std_text_parse_sep_by1_fun1307__t {
  struct kk_function_s _base;
  kk_function_t p;
  kk_function_t sep;
};
static kk_box_t kk_std_text_parse_sep_by1_fun1307(kk_function_t _fself, kk_box_t _b_x729, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sep_by1_fun1307(kk_function_t p, kk_function_t sep, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by1_fun1307__t* _self = kk_function_alloc_as(struct kk_std_text_parse_sep_by1_fun1307__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_sep_by1_fun1307, kk_context());
  _self->p = p;
  _self->sep = sep;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_sep_by1_fun1307(kk_function_t _fself, kk_box_t _b_x729, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by1_fun1307__t* _self = kk_function_as(struct kk_std_text_parse_sep_by1_fun1307__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* std/text/parse/parser<3145,3143> */
  kk_function_t sep = _self->sep; /* std/text/parse/parser<3145,3144> */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);kk_function_dup(sep, _ctx);}, {}, _ctx)
  kk_box_t _y_x10150_734 = _b_x729; /*3143*/;
  kk_std_core_types__list _x_x1308 = kk_std_text_parse__mlift_sep_by1_10201(p, sep, _y_x10150_734, _ctx); /*list<3143>*/
  return kk_std_core_types__list_box(_x_x1308, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sep_by1_fun1309__t {
  struct kk_function_s _base;
  kk_function_t p;
  kk_function_t sep;
};
static kk_box_t kk_std_text_parse_sep_by1_fun1309(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sep_by1_fun1309(kk_function_t p, kk_function_t sep, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by1_fun1309__t* _self = kk_function_alloc_as(struct kk_std_text_parse_sep_by1_fun1309__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_sep_by1_fun1309, kk_context());
  _self->p = p;
  _self->sep = sep;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_sep_by1_fun1310__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_sep_by1_fun1310(kk_function_t _fself, kk_box_t wild__, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sep_by1_fun1310(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by1_fun1310__t* _self = kk_function_alloc_as(struct kk_std_text_parse_sep_by1_fun1310__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_sep_by1_fun1310, kk_context());
  _self->p = p;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_sep_by1_fun1310(kk_function_t _fself, kk_box_t wild__, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by1_fun1310__t* _self = kk_function_as(struct kk_std_text_parse_sep_by1_fun1310__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* std/text/parse/parser<3145,3143> */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);}, {}, _ctx)
  kk_box_drop(wild__, _ctx);
  return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx);
}
static kk_box_t kk_std_text_parse_sep_by1_fun1309(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by1_fun1309__t* _self = kk_function_as(struct kk_std_text_parse_sep_by1_fun1309__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* std/text/parse/parser<3145,3143> */
  kk_function_t sep = _self->sep; /* std/text/parse/parser<3145,3144> */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);kk_function_dup(sep, _ctx);}, {}, _ctx)
  kk_box_t x_1_10350 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), sep, (sep, _ctx), _ctx); /*3144*/;
  kk_box_drop(x_1_10350, _ctx);
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sep_by1_fun1310(p, _ctx), _ctx);
  }
  {
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_sep_by1_fun1312__t {
  struct kk_function_s _base;
  kk_box_t x_10344;
};
static kk_box_t kk_std_text_parse_sep_by1_fun1312(kk_function_t _fself, kk_box_t _b_x731, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sep_by1_fun1312(kk_box_t x_10344, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by1_fun1312__t* _self = kk_function_alloc_as(struct kk_std_text_parse_sep_by1_fun1312__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_sep_by1_fun1312, kk_context());
  _self->x_10344 = x_10344;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_sep_by1_fun1312(kk_function_t _fself, kk_box_t _b_x731, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by1_fun1312__t* _self = kk_function_as(struct kk_std_text_parse_sep_by1_fun1312__t*, _fself, _ctx);
  kk_box_t x_10344 = _self->x_10344; /* 3143 */
  kk_drop_match(_self, {kk_box_dup(x_10344, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10153_735 = kk_std_core_types__list_unbox(_b_x731, KK_OWNED, _ctx); /*list<3143>*/;
  kk_std_core_types__list _x_x1313 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_10344, _y_x10153_735, _ctx); /*list<79>*/
  return kk_std_core_types__list_box(_x_x1313, _ctx);
}

kk_std_core_types__list kk_std_text_parse_sep_by1(kk_function_t p, kk_function_t sep, kk_context_t* _ctx) { /* forall<a,b,e> (p : parser<e,a>, sep : parser<e,b>) -> <parse|e> list<a> */ 
  kk_box_t x_10344;
  kk_function_t _x_x1305 = kk_function_dup(p, _ctx); /*std/text/parse/parser<3145,3143>*/
  x_10344 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x1305, (_x_x1305, _ctx), _ctx); /*3143*/
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10344, _ctx);
    kk_box_t _x_x1306 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sep_by1_fun1307(p, sep, _ctx), _ctx); /*2419*/
    return kk_std_core_types__list_unbox(_x_x1306, KK_OWNED, _ctx);
  }
  {
    kk_std_core_types__list x_0_10347 = kk_std_text_parse_many_acc(kk_std_text_parse_new_sep_by1_fun1309(p, sep, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<3143>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_0_10347, _ctx);
      kk_box_t _x_x1311 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sep_by1_fun1312(x_10344, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x1311, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Cons(kk_reuse_null, 0, x_10344, x_0_10347, _ctx);
    }
  }
}
extern kk_box_t kk_std_text_parse_sep_by_fun1315(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_sep_by_fun1315__t* _self = kk_function_as(struct kk_std_text_parse_sep_by_fun1315__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* std/text/parse/parser<3198,3196> */
  kk_function_t sep = _self->sep; /* std/text/parse/parser<3198,3197> */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);kk_function_dup(sep, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1316 = kk_std_text_parse_sep_by1(p, sep, _ctx); /*list<3143>*/
  return kk_std_core_types__list_box(_x_x1316, _ctx);
}
extern kk_box_t kk_std_text_parse_sep_by_fun1317(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun1321__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_hex_digits_fun1321(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun1321(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun1321, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_hex_digits_fun1323__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_hex_digits_fun1323(kk_function_t _fself, kk_char_t _x1_x1322, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun1323(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun1323, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_std_text_parse_hex_digits_fun1323(kk_function_t _fself, kk_char_t _x1_x1322, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_char_is_hex_digit(_x1_x1322, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_hex_digits_fun1321(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _match_x758 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_hex_digits_fun1323(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x740 = _match_x758.fst;
    kk_box_t _box_x741 = _match_x758.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x740, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x741, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x758, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x742 = _match_x758.fst;
    kk_box_t _box_x743 = _match_x758.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x743, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x742, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x758, _ctx);
    kk_box_t _x_x1324;
    kk_std_core_types__tuple2 _x_x1325 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(134, 135)*/
    _x_x1324 = kk_std_core_types__tuple2_box(_x_x1325, _ctx); /*88*/
    return kk_std_core_types__new_Just(_x_x1324, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun1327__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_hex_digits_fun1327(kk_function_t _fself, kk_box_t _b_x755, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun1327(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun1327, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_hex_digits_fun1327(kk_function_t _fself, kk_box_t _b_x755, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x1328;
  kk_std_core_types__list _x_x1329 = kk_std_core_types__list_unbox(_b_x755, KK_OWNED, _ctx); /*list<char>*/
  _x_x1328 = kk_std_core_string_listchar_fs_string(_x_x1329, _ctx); /*string*/
  return kk_string_box(_x_x1328);
}

kk_string_t kk_std_text_parse_hex_digits(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_types__list x_10356;
  kk_box_t _x_x1318;
  kk_string_t _x_x1319;
  kk_define_string_literal(static, _s_x1320, 5, "digit", _ctx)
  _x_x1319 = kk_string_dup(_s_x1320, _ctx); /*string*/
  _x_x1318 = kk_std_text_parse_satisfy_fail(_x_x1319, kk_std_text_parse_new_hex_digits_fun1321(_ctx), _ctx); /*1682*/
  x_10356 = kk_std_core_types__list_unbox(_x_x1318, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10356, _ctx);
    kk_box_t _x_x1326 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_hex_digits_fun1327(_ctx), _ctx); /*2419*/
    return kk_string_unbox(_x_x1326);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10356, _ctx);
  }
}

// initialization
void kk_std_text_parse__init(kk_context_t* _ctx){
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
    kk_string_t _x_x863;
    kk_define_string_literal(static, _s_x864, 11, "parse@parse", _ctx)
    _x_x863 = kk_string_dup(_s_x864, _ctx); /*string*/
    kk_std_text_parse_parse_fs__tag = kk_std_core_hnd__new_Htag(_x_x863, _ctx); /*hnd/htag<std/text/parse/parse>*/
  }
}

// termination
void kk_std_text_parse__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_std_text_parse_parse_fs__tag, _ctx);
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
