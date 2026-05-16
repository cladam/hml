// Koka generated module: std/os/dir, koka version: 3.2.3, platform: 64-bit
#include "std_os_dir.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2021, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static kk_std_core_exn__error kk_os_ensure_dir_error( kk_string_t path, kk_integer_t mode, kk_context_t* ctx ) {
  int m  = kk_integer_clamp32(mode,ctx);
  const int err = kk_os_ensure_dir(path,m,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_unit_box(kk_Unit),ctx);
}

static kk_std_core_exn__error kk_os_copy_file_error( kk_string_t from, kk_string_t to, bool preserve_mtime, kk_context_t* ctx ) {
  const int err = kk_os_copy_file(from,to,preserve_mtime,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_unit_box(kk_Unit),ctx);
}

static kk_std_core_exn__error kk_os_list_directory_prim( kk_string_t dir, kk_context_t* ctx ) {
  kk_vector_t contents;
  const int err = kk_os_list_directory(dir,&contents,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_vector_box(contents,ctx),ctx);
}


kk_std_core_exn__error kk_std_os_dir_prim_copy_file(kk_string_t from, kk_string_t to, bool preserve_mtime, kk_context_t* _ctx) { /* (from : string, to : string, preserve-mtime : bool) -> fsys error<()> */ 
  return kk_os_copy_file_error(from,to,preserve_mtime,kk_context());
}
 
// Copy a file.


// lift anonymous function
struct kk_std_os_dir_copy_file_fun405__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun405(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun405(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun405, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_file_fun405(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x406;
  kk_std_os_path__path _x_x407 = kk_std_os_path__path_unbox(_b_x2, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x406 = kk_std_os_path_string(_x_x407, _ctx); /*string*/
  return kk_string_box(_x_x406);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun411__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun411(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun411(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun411, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_file_fun411(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x412;
  kk_std_os_path__path _x_x413 = kk_std_os_path__path_unbox(_b_x7, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x412 = kk_std_os_path_string(_x_x413, _ctx); /*string*/
  return kk_string_box(_x_x412);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun417__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun417(kk_function_t _fself, kk_box_t _b_x15, kk_box_t _b_x16, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun417(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun417, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_file_fun417(kk_function_t _fself, kk_box_t _b_x15, kk_box_t _b_x16, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__error _x_x418;
  kk_string_t _x_x419 = kk_string_unbox(_b_x15); /*string*/
  kk_string_t _x_x420 = kk_string_unbox(_b_x16); /*string*/
  bool _x_x421 = kk_bool_unbox(_b_x17); /*bool*/
  _x_x418 = kk_std_os_dir_prim_copy_file(_x_x419, _x_x420, _x_x421, _ctx); /*error<()>*/
  return kk_std_core_exn__error_box(_x_x418, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun429__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun429(kk_function_t _fself, kk_box_t _b_x20, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun429(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun429, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_file_fun429(kk_function_t _fself, kk_box_t _b_x20, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x430;
  kk_string_t _x_x431;
  kk_std_os_path__path _x_x432 = kk_std_os_path__path_unbox(_b_x20, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x431 = kk_std_os_path_string(_x_x432, _ctx); /*string*/
  _x_x430 = kk_std_core_show_string_fs_show(_x_x431, _ctx); /*string*/
  return kk_string_box(_x_x430);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun438__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun438(kk_function_t _fself, kk_box_t _b_x23, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun438(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun438, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_file_fun438(kk_function_t _fself, kk_box_t _b_x23, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path p_0_51 = kk_std_os_path__path_unbox(_b_x23, KK_OWNED, _ctx); /*std/os/path/path*/;
  kk_string_t _x_x439;
  kk_string_t _x_x440 = kk_std_os_path_string(p_0_51, _ctx); /*string*/
  _x_x439 = kk_std_core_show_string_fs_show(_x_x440, _ctx); /*string*/
  return kk_string_box(_x_x439);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_fun442__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_fun442(kk_function_t _fself, kk_box_t _b_x31, kk_box_t _b_x32, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_fun442(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_fun442, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_file_fun442(kk_function_t _fself, kk_box_t _b_x31, kk_box_t _b_x32, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__exception _x_x443;
  kk_string_t _x_x444;
  kk_string_t _x_x445 = kk_string_unbox(_b_x32); /*string*/
  kk_string_t _x_x446;
  kk_string_t _x_x447;
  kk_define_string_literal(static, _s_x448, 2, ": ", _ctx)
  _x_x447 = kk_string_dup(_s_x448, _ctx); /*string*/
  kk_string_t _x_x449;
  kk_std_core_exn__exception _match_x400;
  kk_box_t _x_x450 = kk_box_dup(_b_x31, _ctx); /*10003*/
  _match_x400 = kk_std_core_exn__exception_unbox(_x_x450, KK_OWNED, _ctx); /*exception*/
  {
    kk_string_t _x = _match_x400.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x400, _ctx);
    _x_x449 = _x; /*string*/
  }
  _x_x446 = kk_std_core_types__lp__plus__plus__rp_(_x_x447, _x_x449, _ctx); /*string*/
  _x_x444 = kk_std_core_types__lp__plus__plus__rp_(_x_x445, _x_x446, _ctx); /*string*/
  kk_std_core_exn__exception_info _x_x451;
  kk_std_core_exn__exception _match_x399 = kk_std_core_exn__exception_unbox(_b_x31, KK_OWNED, _ctx); /*exception*/;
  {
    kk_std_core_exn__exception_info _x_0 = _match_x399.info;
    kk_std_core_exn__exception_info_dup(_x_0, _ctx);
    kk_std_core_exn__exception_drop(_match_x399, _ctx);
    _x_x451 = _x_0; /*exception-info*/
  }
  _x_x443 = kk_std_core_exn__new_Exception(_x_x444, _x_x451, _ctx); /*exception*/
  return kk_std_core_exn__exception_box(_x_x443, _ctx);
}

kk_unit_t kk_std_os_dir_copy_file(kk_std_os_path__path from, kk_std_os_path__path to, kk_std_core_types__optional preserve_mtime, kk_context_t* _ctx) { /* (from : std/os/path/path, to : std/os/path/path, preserve-mtime : ? bool) -> <exn,fsys> () */ 
  kk_string_t _x_x1_10051;
  kk_box_t _x_x404;
  kk_box_t _x_x408;
  kk_std_os_path__path _x_x409 = kk_std_os_path__path_dup(from, _ctx); /*std/os/path/path*/
  _x_x408 = kk_std_os_path__path_box(_x_x409, _ctx); /*9923*/
  _x_x404 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_fun405(_ctx), _x_x408, _ctx); /*9924*/
  _x_x1_10051 = kk_string_unbox(_x_x404); /*string*/
  kk_string_t _x_x2_10052;
  kk_box_t _x_x410;
  kk_box_t _x_x414;
  kk_std_os_path__path _x_x415 = kk_std_os_path__path_dup(to, _ctx); /*std/os/path/path*/
  _x_x414 = kk_std_os_path__path_box(_x_x415, _ctx); /*9923*/
  _x_x410 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_fun411(_ctx), _x_x414, _ctx); /*9924*/
  _x_x2_10052 = kk_string_unbox(_x_x410); /*string*/
  kk_std_core_exn__error _match_x396;
  kk_box_t _x_x416;
  kk_box_t _x_x422;
  bool _x_x423;
  if (kk_std_core_types__is_Optional(preserve_mtime, _ctx)) {
    kk_box_t _box_x10 = preserve_mtime._cons._Optional.value;
    bool _uniq_preserve_mtime_65 = kk_bool_unbox(_box_x10);
    kk_std_core_types__optional_drop(preserve_mtime, _ctx);
    _x_x423 = _uniq_preserve_mtime_65; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(preserve_mtime, _ctx);
    _x_x423 = true; /*bool*/
  }
  _x_x422 = kk_bool_box(_x_x423); /*10098*/
  _x_x416 = kk_std_core_hnd__open_none3(kk_std_os_dir_new_copy_file_fun417(_ctx), kk_string_box(_x_x1_10051), kk_string_box(_x_x2_10052), _x_x422, _ctx); /*10099*/
  _match_x396 = kk_std_core_exn__error_unbox(_x_x416, KK_OWNED, _ctx); /*error<()>*/
  if (kk_std_core_exn__is_Error(_match_x396, _ctx)) {
    kk_std_core_exn__exception exn = _match_x396._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn, _ctx);
    kk_std_core_exn__error_drop(_match_x396, _ctx);
    kk_string_t _x_x2_0_10057;
    kk_string_t _x_x424;
    kk_define_string_literal(static, _s_x425, 15, "unable to copy ", _ctx)
    _x_x424 = kk_string_dup(_s_x425, _ctx); /*string*/
    kk_string_t _x_x426;
    kk_string_t _x_x427;
    kk_box_t _x_x428 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_fun429(_ctx), kk_std_os_path__path_box(from, _ctx), _ctx); /*9924*/
    _x_x427 = kk_string_unbox(_x_x428); /*string*/
    kk_string_t _x_x433;
    kk_string_t _x_x434;
    kk_define_string_literal(static, _s_x435, 4, " to ", _ctx)
    _x_x434 = kk_string_dup(_s_x435, _ctx); /*string*/
    kk_string_t _x_x436;
    kk_box_t _x_x437 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_fun438(_ctx), kk_std_os_path__path_box(to, _ctx), _ctx); /*9924*/
    _x_x436 = kk_string_unbox(_x_x437); /*string*/
    _x_x433 = kk_std_core_types__lp__plus__plus__rp_(_x_x434, _x_x436, _ctx); /*string*/
    _x_x426 = kk_std_core_types__lp__plus__plus__rp_(_x_x427, _x_x433, _ctx); /*string*/
    _x_x2_0_10057 = kk_std_core_types__lp__plus__plus__rp_(_x_x424, _x_x426, _ctx); /*string*/
    kk_std_core_exn__exception exn_0_10000;
    kk_box_t _x_x441 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_copy_file_fun442(_ctx), kk_std_core_exn__exception_box(exn, _ctx), kk_string_box(_x_x2_0_10057), _ctx); /*10005*/
    exn_0_10000 = kk_std_core_exn__exception_unbox(_x_x441, KK_OWNED, _ctx); /*exception*/
    kk_std_core_hnd__ev ev_10087 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x452;
    {
      struct kk_std_core_hnd_Ev* _con_x453 = kk_std_core_hnd__as_Ev(ev_10087, _ctx);
      kk_box_t _box_x38 = _con_x453->hnd;
      int32_t m = _con_x453->marker;
      kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x38, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x397;
      kk_std_core_hnd__clause1 _brw_x398 = kk_std_core_exn_throw_exn_fs__select(h, _ctx); /*hnd/clause1<exception,277,exn,278,279>*/;
      kk_datatype_ptr_dropn(h, (KK_I32(2)), _ctx);
      _match_x397 = _brw_x398; /*hnd/clause1<exception,277,exn,278,279>*/
      {
        kk_function_t _fun_unbox_x42 = _match_x397.clause;
        _x_x452 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x42, (_fun_unbox_x42, m, ev_10087, kk_std_core_exn__exception_box(exn_0_10000, _ctx), _ctx), _ctx); /*46*/
      }
    }
    kk_unit_unbox(_x_x452); return kk_Unit;
  }
  {
    kk_std_os_path__path_drop(to, _ctx);
    kk_std_os_path__path_drop(from, _ctx);
    kk_std_core_exn__error_drop(_match_x396, _ctx);
    kk_Unit; return kk_Unit;
  }
}

kk_std_core_exn__error kk_std_os_dir_ensure_dir_err(kk_string_t path, kk_integer_t mode, kk_context_t* _ctx) { /* (path : string, mode : int) -> fsys error<()> */ 
  return kk_os_ensure_dir_error(path,mode,kk_context());
}
 
// Ensure a directory path exists


// lift anonymous function
struct kk_std_os_dir_ensure_dir_fun455__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_ensure_dir_fun455(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_ensure_dir_fun455(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_ensure_dir_fun455, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_ensure_dir_fun455(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x456;
  kk_std_os_path__path _x_x457 = kk_std_os_path__path_unbox(_b_x54, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x456 = kk_std_os_path_string(_x_x457, _ctx); /*string*/
  return kk_string_box(_x_x456);
}


// lift anonymous function
struct kk_std_os_dir_ensure_dir_fun461__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_ensure_dir_fun461(kk_function_t _fself, kk_box_t _b_x60, kk_box_t _b_x61, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_ensure_dir_fun461(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_ensure_dir_fun461, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_ensure_dir_fun461(kk_function_t _fself, kk_box_t _b_x60, kk_box_t _b_x61, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__error _x_x462;
  kk_string_t _x_x463 = kk_string_unbox(_b_x60); /*string*/
  kk_integer_t _x_x464 = kk_integer_unbox(_b_x61, _ctx); /*int*/
  _x_x462 = kk_std_os_dir_ensure_dir_err(_x_x463, _x_x464, _ctx); /*error<()>*/
  return kk_std_core_exn__error_box(_x_x462, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_ensure_dir_fun469__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_ensure_dir_fun469(kk_function_t _fself, kk_box_t _b_x64, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_ensure_dir_fun469(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_ensure_dir_fun469, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_ensure_dir_fun469(kk_function_t _fself, kk_box_t _b_x64, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x470;
  kk_string_t _x_x471;
  kk_std_os_path__path _x_x472 = kk_std_os_path__path_unbox(_b_x64, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x471 = kk_std_os_path_string(_x_x472, _ctx); /*string*/
  _x_x470 = kk_std_core_show_string_fs_show(_x_x471, _ctx); /*string*/
  return kk_string_box(_x_x470);
}


// lift anonymous function
struct kk_std_os_dir_ensure_dir_fun474__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_ensure_dir_fun474(kk_function_t _fself, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_ensure_dir_fun474(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_ensure_dir_fun474, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_ensure_dir_fun474(kk_function_t _fself, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__exception _x_x475;
  kk_string_t _x_x476;
  kk_string_t _x_x477 = kk_string_unbox(_b_x72); /*string*/
  kk_string_t _x_x478;
  kk_string_t _x_x479;
  kk_define_string_literal(static, _s_x480, 2, ": ", _ctx)
  _x_x479 = kk_string_dup(_s_x480, _ctx); /*string*/
  kk_string_t _x_x481;
  kk_std_core_exn__exception _match_x395;
  kk_box_t _x_x482 = kk_box_dup(_b_x71, _ctx); /*10003*/
  _match_x395 = kk_std_core_exn__exception_unbox(_x_x482, KK_OWNED, _ctx); /*exception*/
  {
    kk_string_t _x = _match_x395.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x395, _ctx);
    _x_x481 = _x; /*string*/
  }
  _x_x478 = kk_std_core_types__lp__plus__plus__rp_(_x_x479, _x_x481, _ctx); /*string*/
  _x_x476 = kk_std_core_types__lp__plus__plus__rp_(_x_x477, _x_x478, _ctx); /*string*/
  kk_std_core_exn__exception_info _x_x483;
  kk_std_core_exn__exception _match_x394 = kk_std_core_exn__exception_unbox(_b_x71, KK_OWNED, _ctx); /*exception*/;
  {
    kk_std_core_exn__exception_info _x_0 = _match_x394.info;
    kk_std_core_exn__exception_info_dup(_x_0, _ctx);
    kk_std_core_exn__exception_drop(_match_x394, _ctx);
    _x_x483 = _x_0; /*exception-info*/
  }
  _x_x475 = kk_std_core_exn__new_Exception(_x_x476, _x_x483, _ctx); /*exception*/
  return kk_std_core_exn__exception_box(_x_x475, _ctx);
}

kk_unit_t kk_std_os_dir_ensure_dir(kk_std_os_path__path dir, kk_context_t* _ctx) { /* (dir : std/os/path/path) -> <exn,fsys> () */ 
  kk_string_t _x_x1_10060;
  kk_box_t _x_x454;
  kk_box_t _x_x458;
  kk_std_os_path__path _x_x459 = kk_std_os_path__path_dup(dir, _ctx); /*std/os/path/path*/
  _x_x458 = kk_std_os_path__path_box(_x_x459, _ctx); /*9923*/
  _x_x454 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_ensure_dir_fun455(_ctx), _x_x458, _ctx); /*9924*/
  _x_x1_10060 = kk_string_unbox(_x_x454); /*string*/
  kk_std_core_exn__error _match_x391;
  kk_box_t _x_x460 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_ensure_dir_fun461(_ctx), kk_string_box(_x_x1_10060), kk_integer_box(kk_integer_from_small(-1), _ctx), _ctx); /*10005*/
  _match_x391 = kk_std_core_exn__error_unbox(_x_x460, KK_OWNED, _ctx); /*error<()>*/
  if (kk_std_core_exn__is_Error(_match_x391, _ctx)) {
    kk_std_core_exn__exception exn = _match_x391._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn, _ctx);
    kk_std_core_exn__error_drop(_match_x391, _ctx);
    kk_string_t _x_x2_0_10064;
    kk_string_t _x_x465;
    kk_define_string_literal(static, _s_x466, 27, "unable to create directory ", _ctx)
    _x_x465 = kk_string_dup(_s_x466, _ctx); /*string*/
    kk_string_t _x_x467;
    kk_box_t _x_x468 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_ensure_dir_fun469(_ctx), kk_std_os_path__path_box(dir, _ctx), _ctx); /*9924*/
    _x_x467 = kk_string_unbox(_x_x468); /*string*/
    _x_x2_0_10064 = kk_std_core_types__lp__plus__plus__rp_(_x_x465, _x_x467, _ctx); /*string*/
    kk_std_core_exn__exception exn_0_10001;
    kk_box_t _x_x473 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_ensure_dir_fun474(_ctx), kk_std_core_exn__exception_box(exn, _ctx), kk_string_box(_x_x2_0_10064), _ctx); /*10005*/
    exn_0_10001 = kk_std_core_exn__exception_unbox(_x_x473, KK_OWNED, _ctx); /*exception*/
    kk_std_core_hnd__ev ev_10090 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x484;
    {
      struct kk_std_core_hnd_Ev* _con_x485 = kk_std_core_hnd__as_Ev(ev_10090, _ctx);
      kk_box_t _box_x78 = _con_x485->hnd;
      int32_t m = _con_x485->marker;
      kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x78, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x392;
      kk_std_core_hnd__clause1 _brw_x393 = kk_std_core_exn_throw_exn_fs__select(h, _ctx); /*hnd/clause1<exception,277,exn,278,279>*/;
      kk_datatype_ptr_dropn(h, (KK_I32(2)), _ctx);
      _match_x392 = _brw_x393; /*hnd/clause1<exception,277,exn,278,279>*/
      {
        kk_function_t _fun_unbox_x82 = _match_x392.clause;
        _x_x484 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x82, (_fun_unbox_x82, m, ev_10090, kk_std_core_exn__exception_box(exn_0_10001, _ctx), _ctx), _ctx); /*46*/
      }
    }
    kk_unit_unbox(_x_x484); return kk_Unit;
  }
  {
    kk_box_t _box_x86 = _match_x391._cons.Ok.result;
    kk_unit_t _pat_3_0 = kk_unit_unbox(_box_x86);
    kk_std_os_path__path_drop(dir, _ctx);
    kk_std_core_exn__error_drop(_match_x391, _ctx);
    kk_Unit; return kk_Unit;
  }
}

bool kk_std_os_dir_prim_is_dir(kk_string_t dir, kk_context_t* _ctx) { /* (dir : string) -> fsys bool */ 
  return kk_os_is_directory(dir,kk_context());
}

kk_std_core_exn__error kk_std_os_dir_prim_list_dir(kk_string_t dir, kk_context_t* _ctx) { /* (dir : string) -> fsys error<vector<string>> */ 
  return kk_os_list_directory_prim(dir,kk_context());
}
 
// List directory contents (excluding `.` and `..`).
// Returns a list of full paths (not just the names in the directory).


// lift anonymous function
struct kk_std_os_dir_list_directory_fun488__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_list_directory_fun488(kk_function_t _fself, kk_box_t _b_x92, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_fun488(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_list_directory_fun488, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_list_directory_fun488(kk_function_t _fself, kk_box_t _b_x92, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x489;
  kk_std_os_path__path _x_x490 = kk_std_os_path__path_unbox(_b_x92, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x489 = kk_std_os_path_string(_x_x490, _ctx); /*string*/
  return kk_string_box(_x_x489);
}


// lift anonymous function
struct kk_std_os_dir_list_directory_fun494__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_list_directory_fun494(kk_function_t _fself, kk_box_t _b_x97, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_fun494(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_list_directory_fun494, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_list_directory_fun494(kk_function_t _fself, kk_box_t _b_x97, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__error _x_x495;
  kk_string_t _x_x496 = kk_string_unbox(_b_x97); /*string*/
  _x_x495 = kk_std_os_dir_prim_list_dir(_x_x496, _ctx); /*error<vector<string>>*/
  return kk_std_core_exn__error_box(_x_x495, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_list_directory_fun499__t {
  struct kk_function_s _base;
  kk_std_os_path__path dir;
};
static kk_box_t kk_std_os_dir_list_directory_fun499(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_fun499(kk_std_os_path__path dir, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_fun499__t* _self = kk_function_alloc_as(struct kk_std_os_dir_list_directory_fun499__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_list_directory_fun499, kk_context());
  _self->dir = dir;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_os_dir_list_directory_fun501__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_list_directory_fun501(kk_function_t _fself, kk_box_t _b_x109, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_fun501(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_list_directory_fun501, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_list_directory_fun501(kk_function_t _fself, kk_box_t _b_x109, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x502;
  kk_string_t _x_x503 = kk_string_unbox(_b_x109); /*string*/
  _x_x502 = kk_std_os_path_path(_x_x503, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x502, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_list_directory_fun504__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_list_directory_fun504(kk_function_t _fself, kk_box_t _b_x115, kk_box_t _b_x116, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_fun504(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_list_directory_fun504, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_list_directory_fun504(kk_function_t _fself, kk_box_t _b_x115, kk_box_t _b_x116, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x505;
  kk_std_os_path__path _x_x506 = kk_std_os_path__path_unbox(_b_x115, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x507 = kk_std_os_path__path_unbox(_b_x116, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x505 = kk_std_os_path__lp__fs__rp_(_x_x506, _x_x507, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x505, _ctx);
}
static kk_box_t kk_std_os_dir_list_directory_fun499(kk_function_t _fself, kk_box_t _b_x119, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_fun499__t* _self = kk_function_as(struct kk_std_os_dir_list_directory_fun499__t*, _fself, _ctx);
  kk_std_os_path__path dir = _self->dir; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(dir, _ctx);}, {}, _ctx)
  kk_string_t name_127 = kk_string_unbox(_b_x119); /*string*/;
  kk_std_os_path__path _x_x2_10069;
  kk_box_t _x_x500 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_list_directory_fun501(_ctx), kk_string_box(name_127), _ctx); /*9924*/
  _x_x2_10069 = kk_std_os_path__path_unbox(_x_x500, KK_OWNED, _ctx); /*std/os/path/path*/
  return kk_std_core_hnd__open_none2(kk_std_os_dir_new_list_directory_fun504(_ctx), kk_std_os_path__path_box(dir, _ctx), kk_std_os_path__path_box(_x_x2_10069, _ctx), _ctx);
}

kk_std_core_types__list kk_std_os_dir_list_directory(kk_std_os_path__path dir, kk_context_t* _ctx) { /* (dir : std/os/path/path) -> <exn,fsys> list<std/os/path/path> */ 
  kk_string_t _x_x1_10066;
  kk_box_t _x_x487;
  kk_box_t _x_x491;
  kk_std_os_path__path _x_x492 = kk_std_os_path__path_dup(dir, _ctx); /*std/os/path/path*/
  _x_x491 = kk_std_os_path__path_box(_x_x492, _ctx); /*9923*/
  _x_x487 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_list_directory_fun488(_ctx), _x_x491, _ctx); /*9924*/
  _x_x1_10066 = kk_string_unbox(_x_x487); /*string*/
  kk_std_core_exn__error _match_x386;
  kk_box_t _x_x493 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_list_directory_fun494(_ctx), kk_string_box(_x_x1_10066), _ctx); /*9924*/
  _match_x386 = kk_std_core_exn__error_unbox(_x_x493, KK_OWNED, _ctx); /*error<vector<string>>*/
  if (kk_std_core_exn__is_Error(_match_x386, _ctx)) {
    kk_std_core_exn__exception exn = _match_x386._cons.Error.exception;
    kk_std_os_path__path_drop(dir, _ctx);
    kk_std_core_exn__exception_dup(exn, _ctx);
    kk_std_core_exn__error_drop(_match_x386, _ctx);
    kk_std_core_hnd__ev ev_10093 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x497;
    {
      struct kk_std_core_hnd_Ev* _con_x498 = kk_std_core_hnd__as_Ev(ev_10093, _ctx);
      kk_box_t _box_x98 = _con_x498->hnd;
      int32_t m = _con_x498->marker;
      kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x98, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x389;
      kk_std_core_hnd__clause1 _brw_x390 = kk_std_core_exn_throw_exn_fs__select(h, _ctx); /*hnd/clause1<exception,277,exn,278,279>*/;
      kk_datatype_ptr_dropn(h, (KK_I32(2)), _ctx);
      _match_x389 = _brw_x390; /*hnd/clause1<exception,277,exn,278,279>*/
      {
        kk_function_t _fun_unbox_x102 = _match_x389.clause;
        _x_x497 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x102, (_fun_unbox_x102, m, ev_10093, kk_std_core_exn__exception_box(exn, _ctx), _ctx), _ctx); /*46*/
      }
    }
    return kk_std_core_types__list_unbox(_x_x497, KK_OWNED, _ctx);
  }
  {
    kk_box_t _box_x106 = _match_x386._cons.Ok.result;
    kk_vector_t contents = kk_vector_unbox(_box_x106, _ctx);
    kk_vector_dup(contents, _ctx);
    kk_std_core_exn__error_drop(_match_x386, _ctx);
    kk_std_core_types__list _b_x117_122 = kk_std_core_vector_vlist(contents, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/;
    kk_function_t _brw_x387 = kk_std_os_dir_new_list_directory_fun499(dir, _ctx); /*(2228) -> 2230 10005*/;
    kk_std_core_types__list _brw_x388 = kk_std_core_list_map(_b_x117_122, _brw_x387, _ctx); /*list<2229>*/;
    kk_function_drop(_brw_x387, _ctx);
    return _brw_x388;
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_os_dir__mlift_list_directory_recursive_10080(kk_std_core_types__list all, kk_std_core_types__list _y_x10013, kk_context_t* _ctx) { /* (all : list<std/os/path/path>, list<std/os/path/path>) -> <div,exn,fsys> list<std/os/path/path> */ 
  return kk_std_core_list_append(all, _y_x10013, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun508__t {
  struct kk_function_s _base;
  kk_std_core_types__optional max_depth;
};
static kk_std_core_types__list kk_std_os_dir__mlift_list_directory_recursive_10081_fun508(kk_function_t _fself, kk_box_t _b_x132, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_list_directory_recursive_10081_fun508(kk_std_core_types__optional max_depth, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun508__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun508__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir__mlift_list_directory_recursive_10081_fun508, kk_context());
  _self->max_depth = max_depth;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__list kk_std_os_dir__mlift_list_directory_recursive_10081_fun508(kk_function_t _fself, kk_box_t _b_x132, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun508__t* _self = kk_function_as(struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun508__t*, _fself, _ctx);
  kk_std_core_types__optional max_depth = _self->max_depth; /* ? int */
  kk_drop_match(_self, {kk_std_core_types__optional_dup(max_depth, _ctx);}, {}, _ctx)
  kk_integer_t _b_x129_135;
  kk_integer_t _x_x509;
  if (kk_std_core_types__is_Optional(max_depth, _ctx)) {
    kk_box_t _box_x128 = max_depth._cons._Optional.value;
    kk_integer_t _uniq_max_depth_509_0 = kk_integer_unbox(_box_x128, _ctx);
    kk_integer_dup(_uniq_max_depth_509_0, _ctx);
    kk_std_core_types__optional_drop(max_depth, _ctx);
    _x_x509 = _uniq_max_depth_509_0; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(max_depth, _ctx);
    _x_x509 = kk_integer_from_small(1000); /*int*/
  }
  _b_x129_135 = kk_integer_add_small_const(_x_x509, -1, _ctx); /*int*/
  kk_std_os_path__path _x_x510 = kk_std_os_path__path_unbox(_b_x132, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_core_types__optional _x_x511 = kk_std_core_types__new_Optional(kk_integer_box(_b_x129_135, _ctx), _ctx); /*? 7*/
  return kk_std_os_dir_list_directory_recursive(_x_x510, _x_x511, _ctx);
}


// lift anonymous function
struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun513__t {
  struct kk_function_s _base;
  kk_std_core_types__list all_0;
};
static kk_box_t kk_std_os_dir__mlift_list_directory_recursive_10081_fun513(kk_function_t _fself, kk_box_t _b_x138, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_list_directory_recursive_10081_fun513(kk_std_core_types__list all_0, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun513__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun513__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir__mlift_list_directory_recursive_10081_fun513, kk_context());
  _self->all_0 = all_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir__mlift_list_directory_recursive_10081_fun513(kk_function_t _fself, kk_box_t _b_x138, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun513__t* _self = kk_function_as(struct kk_std_os_dir__mlift_list_directory_recursive_10081_fun513__t*, _fself, _ctx);
  kk_std_core_types__list all_0 = _self->all_0; /* list<std/os/path/path> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(all_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10013_0_140 = kk_std_core_types__list_unbox(_b_x138, KK_OWNED, _ctx); /*list<std/os/path/path>*/;
  kk_std_core_types__list _x_x514 = kk_std_os_dir__mlift_list_directory_recursive_10080(all_0, _y_x10013_0_140, _ctx); /*list<std/os/path/path>*/
  return kk_std_core_types__list_box(_x_x514, _ctx);
}

kk_std_core_types__list kk_std_os_dir__mlift_list_directory_recursive_10081(kk_std_core_types__list all_0, kk_std_core_types__optional max_depth, kk_std_core_types__list dirs, kk_context_t* _ctx) { /* (all : list<std/os/path/path>, max-depth : ? int, dirs : list<std/os/path/path>) -> <fsys,div,exn> list<std/os/path/path> */ 
  kk_std_core_types__list x_10096 = kk_std_core_list_flatmap(dirs, kk_std_os_dir__new_mlift_list_directory_recursive_10081_fun508(max_depth, _ctx), _ctx); /*list<std/os/path/path>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10096, _ctx);
    kk_box_t _x_x512 = kk_std_core_hnd_yield_extend(kk_std_os_dir__new_mlift_list_directory_recursive_10081_fun513(all_0, _ctx), _ctx); /*2419*/
    return kk_std_core_types__list_unbox(_x_x512, KK_OWNED, _ctx);
  }
  {
    return kk_std_os_dir__mlift_list_directory_recursive_10080(all_0, x_10096, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_dir__mlift_list_directory_recursive_10082_fun516__t {
  struct kk_function_s _base;
};
static bool kk_std_os_dir__mlift_list_directory_recursive_10082_fun516(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_list_directory_recursive_10082_fun516(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift_list_directory_recursive_10082_fun516, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_dir__mlift_list_directory_recursive_10082_fun518__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift_list_directory_recursive_10082_fun518(kk_function_t _fself, kk_box_t _b_x143, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_list_directory_recursive_10082_fun518(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift_list_directory_recursive_10082_fun518, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir__mlift_list_directory_recursive_10082_fun518(kk_function_t _fself, kk_box_t _b_x143, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x519;
  kk_std_os_path__path _x_x520 = kk_std_os_path__path_unbox(_b_x143, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x519 = kk_std_os_dir_is_directory(_x_x520, _ctx); /*bool*/
  return kk_bool_box(_x_x519);
}
static bool kk_std_os_dir__mlift_list_directory_recursive_10082_fun516(kk_function_t _fself, kk_box_t _b_x146, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_t _x_x517 = kk_std_core_hnd__open_none1(kk_std_os_dir__new_mlift_list_directory_recursive_10082_fun518(_ctx), _b_x146, _ctx); /*9924*/
  return kk_bool_unbox(_x_x517);
}


// lift anonymous function
struct kk_std_os_dir__mlift_list_directory_recursive_10082_fun522__t {
  struct kk_function_s _base;
  kk_std_core_types__list all_1;
  kk_std_core_types__optional max_depth_0;
};
static kk_box_t kk_std_os_dir__mlift_list_directory_recursive_10082_fun522(kk_function_t _fself, kk_box_t _b_x153, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_list_directory_recursive_10082_fun522(kk_std_core_types__list all_1, kk_std_core_types__optional max_depth_0, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_list_directory_recursive_10082_fun522__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift_list_directory_recursive_10082_fun522__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir__mlift_list_directory_recursive_10082_fun522, kk_context());
  _self->all_1 = all_1;
  _self->max_depth_0 = max_depth_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir__mlift_list_directory_recursive_10082_fun522(kk_function_t _fself, kk_box_t _b_x153, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_list_directory_recursive_10082_fun522__t* _self = kk_function_as(struct kk_std_os_dir__mlift_list_directory_recursive_10082_fun522__t*, _fself, _ctx);
  kk_std_core_types__list all_1 = _self->all_1; /* list<std/os/path/path> */
  kk_std_core_types__optional max_depth_0 = _self->max_depth_0; /* ? int */
  kk_drop_match(_self, {kk_std_core_types__list_dup(all_1, _ctx);kk_std_core_types__optional_dup(max_depth_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list dirs_0_155 = kk_std_core_types__list_unbox(_b_x153, KK_OWNED, _ctx); /*list<std/os/path/path>*/;
  kk_std_core_types__list _x_x523 = kk_std_os_dir__mlift_list_directory_recursive_10081(all_1, max_depth_0, dirs_0_155, _ctx); /*list<std/os/path/path>*/
  return kk_std_core_types__list_box(_x_x523, _ctx);
}

kk_std_core_types__list kk_std_os_dir__mlift_list_directory_recursive_10082(kk_std_core_types__optional max_depth_0, kk_std_core_types__list all_1, kk_context_t* _ctx) { /* (max-depth : ? int, all : list<std/os/path/path>) -> <exn,fsys> list<std/os/path/path> */ 
  kk_std_core_types__list x_0_10098;
  kk_std_core_types__list _x_x515 = kk_std_core_types__list_dup(all_1, _ctx); /*list<std/os/path/path>*/
  x_0_10098 = kk_std_core_list_filter(_x_x515, kk_std_os_dir__new_mlift_list_directory_recursive_10082_fun516(_ctx), _ctx); /*list<std/os/path/path>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_0_10098, _ctx);
    kk_box_t _x_x521 = kk_std_core_hnd_yield_extend(kk_std_os_dir__new_mlift_list_directory_recursive_10082_fun522(all_1, max_depth_0, _ctx), _ctx); /*2419*/
    return kk_std_core_types__list_unbox(_x_x521, KK_OWNED, _ctx);
  }
  {
    return kk_std_os_dir__mlift_list_directory_recursive_10081(all_1, max_depth_0, x_0_10098, _ctx);
  }
}
 
// Recursively list all the entries under a directory.


// lift anonymous function
struct kk_std_os_dir_list_directory_recursive_fun525__t {
  struct kk_function_s _base;
  kk_std_core_types__optional max_depth_1;
};
static kk_box_t kk_std_os_dir_list_directory_recursive_fun525(kk_function_t _fself, kk_box_t _b_x158, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_recursive_fun525(kk_std_core_types__optional max_depth_1, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun525__t* _self = kk_function_alloc_as(struct kk_std_os_dir_list_directory_recursive_fun525__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_list_directory_recursive_fun525, kk_context());
  _self->max_depth_1 = max_depth_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir_list_directory_recursive_fun525(kk_function_t _fself, kk_box_t _b_x158, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun525__t* _self = kk_function_as(struct kk_std_os_dir_list_directory_recursive_fun525__t*, _fself, _ctx);
  kk_std_core_types__optional max_depth_1 = _self->max_depth_1; /* ? int */
  kk_drop_match(_self, {kk_std_core_types__optional_dup(max_depth_1, _ctx);}, {}, _ctx)
  kk_std_core_types__list all_2_186 = kk_std_core_types__list_unbox(_b_x158, KK_OWNED, _ctx); /*list<std/os/path/path>*/;
  kk_std_core_types__list _x_x526 = kk_std_os_dir__mlift_list_directory_recursive_10082(max_depth_1, all_2_186, _ctx); /*list<std/os/path/path>*/
  return kk_std_core_types__list_box(_x_x526, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_list_directory_recursive_fun528__t {
  struct kk_function_s _base;
};
static bool kk_std_os_dir_list_directory_recursive_fun528(kk_function_t _fself, kk_box_t _b_x164, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_recursive_fun528(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_list_directory_recursive_fun528, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_dir_list_directory_recursive_fun530__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_list_directory_recursive_fun530(kk_function_t _fself, kk_box_t _b_x161, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_recursive_fun530(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_list_directory_recursive_fun530, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_list_directory_recursive_fun530(kk_function_t _fself, kk_box_t _b_x161, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x531;
  kk_std_os_path__path _x_x532 = kk_std_os_path__path_unbox(_b_x161, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x531 = kk_std_os_dir_is_directory(_x_x532, _ctx); /*bool*/
  return kk_bool_box(_x_x531);
}
static bool kk_std_os_dir_list_directory_recursive_fun528(kk_function_t _fself, kk_box_t _b_x164, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_t _x_x529 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_list_directory_recursive_fun530(_ctx), _b_x164, _ctx); /*9924*/
  return kk_bool_unbox(_x_x529);
}


// lift anonymous function
struct kk_std_os_dir_list_directory_recursive_fun534__t {
  struct kk_function_s _base;
  kk_std_core_types__optional max_depth_1;
  kk_std_core_types__list x_1_10100;
};
static kk_box_t kk_std_os_dir_list_directory_recursive_fun534(kk_function_t _fself, kk_box_t _b_x171, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_recursive_fun534(kk_std_core_types__optional max_depth_1, kk_std_core_types__list x_1_10100, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun534__t* _self = kk_function_alloc_as(struct kk_std_os_dir_list_directory_recursive_fun534__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_list_directory_recursive_fun534, kk_context());
  _self->max_depth_1 = max_depth_1;
  _self->x_1_10100 = x_1_10100;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir_list_directory_recursive_fun534(kk_function_t _fself, kk_box_t _b_x171, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun534__t* _self = kk_function_as(struct kk_std_os_dir_list_directory_recursive_fun534__t*, _fself, _ctx);
  kk_std_core_types__optional max_depth_1 = _self->max_depth_1; /* ? int */
  kk_std_core_types__list x_1_10100 = _self->x_1_10100; /* list<std/os/path/path> */
  kk_drop_match(_self, {kk_std_core_types__optional_dup(max_depth_1, _ctx);kk_std_core_types__list_dup(x_1_10100, _ctx);}, {}, _ctx)
  kk_std_core_types__list dirs_1_187 = kk_std_core_types__list_unbox(_b_x171, KK_OWNED, _ctx); /*list<std/os/path/path>*/;
  kk_std_core_types__list _x_x535 = kk_std_os_dir__mlift_list_directory_recursive_10081(x_1_10100, max_depth_1, dirs_1_187, _ctx); /*list<std/os/path/path>*/
  return kk_std_core_types__list_box(_x_x535, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_list_directory_recursive_fun536__t {
  struct kk_function_s _base;
  kk_std_core_types__optional max_depth_1;
};
static kk_std_core_types__list kk_std_os_dir_list_directory_recursive_fun536(kk_function_t _fself, kk_box_t _b_x176, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_recursive_fun536(kk_std_core_types__optional max_depth_1, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun536__t* _self = kk_function_alloc_as(struct kk_std_os_dir_list_directory_recursive_fun536__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_list_directory_recursive_fun536, kk_context());
  _self->max_depth_1 = max_depth_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__list kk_std_os_dir_list_directory_recursive_fun536(kk_function_t _fself, kk_box_t _b_x176, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun536__t* _self = kk_function_as(struct kk_std_os_dir_list_directory_recursive_fun536__t*, _fself, _ctx);
  kk_std_core_types__optional max_depth_1 = _self->max_depth_1; /* ? int */
  kk_drop_match(_self, {kk_std_core_types__optional_dup(max_depth_1, _ctx);}, {}, _ctx)
  kk_integer_t _b_x173_179;
  kk_integer_t _x_x537;
  if (kk_std_core_types__is_Optional(max_depth_1, _ctx)) {
    kk_box_t _box_x172 = max_depth_1._cons._Optional.value;
    kk_integer_t _uniq_max_depth_509_0_0 = kk_integer_unbox(_box_x172, _ctx);
    kk_integer_dup(_uniq_max_depth_509_0_0, _ctx);
    kk_std_core_types__optional_drop(max_depth_1, _ctx);
    _x_x537 = _uniq_max_depth_509_0_0; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(max_depth_1, _ctx);
    _x_x537 = kk_integer_from_small(1000); /*int*/
  }
  _b_x173_179 = kk_integer_add_small_const(_x_x537, -1, _ctx); /*int*/
  kk_std_os_path__path _x_x538 = kk_std_os_path__path_unbox(_b_x176, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_core_types__optional _x_x539 = kk_std_core_types__new_Optional(kk_integer_box(_b_x173_179, _ctx), _ctx); /*? 7*/
  return kk_std_os_dir_list_directory_recursive(_x_x538, _x_x539, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_list_directory_recursive_fun541__t {
  struct kk_function_s _base;
  kk_std_core_types__list x_1_10100;
};
static kk_box_t kk_std_os_dir_list_directory_recursive_fun541(kk_function_t _fself, kk_box_t _b_x182, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_list_directory_recursive_fun541(kk_std_core_types__list x_1_10100, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun541__t* _self = kk_function_alloc_as(struct kk_std_os_dir_list_directory_recursive_fun541__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_list_directory_recursive_fun541, kk_context());
  _self->x_1_10100 = x_1_10100;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir_list_directory_recursive_fun541(kk_function_t _fself, kk_box_t _b_x182, kk_context_t* _ctx) {
  struct kk_std_os_dir_list_directory_recursive_fun541__t* _self = kk_function_as(struct kk_std_os_dir_list_directory_recursive_fun541__t*, _fself, _ctx);
  kk_std_core_types__list x_1_10100 = _self->x_1_10100; /* list<std/os/path/path> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(x_1_10100, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10013_1_188 = kk_std_core_types__list_unbox(_b_x182, KK_OWNED, _ctx); /*list<std/os/path/path>*/;
  kk_std_core_types__list _x_x542 = kk_std_os_dir__mlift_list_directory_recursive_10080(x_1_10100, _y_x10013_1_188, _ctx); /*list<std/os/path/path>*/
  return kk_std_core_types__list_box(_x_x542, _ctx);
}

kk_std_core_types__list kk_std_os_dir_list_directory_recursive(kk_std_os_path__path dir, kk_std_core_types__optional max_depth_1, kk_context_t* _ctx) { /* (dir : std/os/path/path, max-depth : ? int) -> <pure,fsys> list<std/os/path/path> */ 
  bool _match_x378;
  kk_integer_t _brw_x382;
  if (kk_std_core_types__is_Optional(max_depth_1, _ctx)) {
    kk_box_t _box_x156 = max_depth_1._cons._Optional.value;
    kk_integer_t _uniq_max_depth_509 = kk_integer_unbox(_box_x156, _ctx);
    kk_integer_dup(_uniq_max_depth_509, _ctx);
    _brw_x382 = _uniq_max_depth_509; /*int*/
  }
  else {
    _brw_x382 = kk_integer_from_small(1000); /*int*/
  }
  bool _brw_x383 = kk_integer_lt_borrow(_brw_x382,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x382, _ctx);
  _match_x378 = _brw_x383; /*bool*/
  if (_match_x378) {
    kk_std_core_types__optional_drop(max_depth_1, _ctx);
    kk_std_os_path__path_drop(dir, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list x_1_10100 = kk_std_os_dir_list_directory(dir, _ctx); /*list<std/os/path/path>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_1_10100, _ctx);
      kk_box_t _x_x524 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_list_directory_recursive_fun525(max_depth_1, _ctx), _ctx); /*2419*/
      return kk_std_core_types__list_unbox(_x_x524, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list x_2_10103;
      kk_std_core_types__list _x_x527 = kk_std_core_types__list_dup(x_1_10100, _ctx); /*list<std/os/path/path>*/
      x_2_10103 = kk_std_core_list_filter(_x_x527, kk_std_os_dir_new_list_directory_recursive_fun528(_ctx), _ctx); /*list<std/os/path/path>*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__list_drop(x_2_10103, _ctx);
        kk_box_t _x_x533 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_list_directory_recursive_fun534(max_depth_1, x_1_10100, _ctx), _ctx); /*2419*/
        return kk_std_core_types__list_unbox(_x_x533, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list x_3_10106 = kk_std_core_list_flatmap(x_2_10103, kk_std_os_dir_new_list_directory_recursive_fun536(max_depth_1, _ctx), _ctx); /*list<std/os/path/path>*/;
        if (kk_yielding(kk_context())) {
          kk_std_core_types__list_drop(x_3_10106, _ctx);
          kk_box_t _x_x540 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_list_directory_recursive_fun541(x_1_10100, _ctx), _ctx); /*2419*/
          return kk_std_core_types__list_unbox(_x_x540, KK_OWNED, _ctx);
        }
        {
          return kk_std_core_list_append(x_1_10100, x_3_10106, _ctx);
        }
      }
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10083_fun543__t {
  struct kk_function_s _base;
  kk_std_os_path__path to;
};
static kk_unit_t kk_std_os_dir__mlift_copy_directory_10083_fun543(kk_function_t _fself, kk_box_t _b_x205, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10083_fun543(kk_std_os_path__path to, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10083_fun543__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift_copy_directory_10083_fun543__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir__mlift_copy_directory_10083_fun543, kk_context());
  _self->to = to;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10083_fun545__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift_copy_directory_10083_fun545(kk_function_t _fself, kk_box_t _b_x194, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10083_fun545(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift_copy_directory_10083_fun545, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir__mlift_copy_directory_10083_fun545(kk_function_t _fself, kk_box_t _b_x194, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x189_190;
  kk_std_core_types__list _x_x546;
  kk_std_os_path__path _match_x377;
  kk_box_t _x_x547 = kk_box_dup(_b_x194, _ctx); /*9923*/
  _match_x377 = kk_std_os_path__path_unbox(_x_x547, KK_OWNED, _ctx); /*std/os/path/path*/
  {
    kk_std_core_types__list _x_1_0 = _match_x377.parts;
    kk_std_core_types__list_dup(_x_1_0, _ctx);
    kk_std_os_path__path_drop(_match_x377, _ctx);
    _x_x546 = _x_1_0; /*list<string>*/
  }
  _b_x189_190 = kk_std_core_list_take(_x_x546, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x_x548;
  kk_string_t _x_x549 = kk_string_empty(); /*string*/
  kk_std_core_types__list _x_x551;
  kk_std_core_types__optional _match_x375 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x189_190, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x375, _ctx)) {
    kk_box_t _box_x191 = _match_x375._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_136_0 = kk_std_core_types__list_unbox(_box_x191, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_136_0, _ctx);
    kk_std_core_types__optional_drop(_match_x375, _ctx);
    kk_box_drop(_b_x194, _ctx);
    _x_x551 = _uniq_parts_136_0; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x375, _ctx);
    kk_std_os_path__path _match_x376 = kk_std_os_path__path_unbox(_b_x194, KK_OWNED, _ctx); /*std/os/path/path*/;
    {
      kk_std_core_types__list _x_0_0 = _match_x376.parts;
      kk_std_core_types__list_dup(_x_0_0, _ctx);
      kk_std_os_path__path_drop(_match_x376, _ctx);
      _x_x551 = _x_0_0; /*list<string>*/
    }
  }
  _x_x548 = kk_std_os_path__new_Path(_x_x549, _x_x551, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x548, _ctx);
}


// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10083_fun556__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift_copy_directory_10083_fun556(kk_function_t _fself, kk_box_t _b_x201, kk_box_t _b_x202, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10083_fun556(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift_copy_directory_10083_fun556, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir__mlift_copy_directory_10083_fun556(kk_function_t _fself, kk_box_t _b_x201, kk_box_t _b_x202, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x557;
  kk_std_os_path__path _x_x558 = kk_std_os_path__path_unbox(_b_x201, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x559 = kk_std_os_path__path_unbox(_b_x202, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x557 = kk_std_os_path__lp__fs__rp_(_x_x558, _x_x559, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x557, _ctx);
}
static kk_unit_t kk_std_os_dir__mlift_copy_directory_10083_fun543(kk_function_t _fself, kk_box_t _b_x205, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10083_fun543__t* _self = kk_function_as(struct kk_std_os_dir__mlift_copy_directory_10083_fun543__t*, _fself, _ctx);
  kk_std_os_path__path to = _self->to; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to, _ctx);}, {}, _ctx)
  kk_std_os_path__path _x_x2_0_10075;
  kk_box_t _x_x544;
  kk_box_t _x_x552 = kk_box_dup(_b_x205, _ctx); /*3304*/
  _x_x544 = kk_std_core_hnd__open_none1(kk_std_os_dir__new_mlift_copy_directory_10083_fun545(_ctx), _x_x552, _ctx); /*9924*/
  _x_x2_0_10075 = kk_std_os_path__path_unbox(_x_x544, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x553 = kk_std_os_path__path_unbox(_b_x205, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x554;
  kk_box_t _x_x555 = kk_std_core_hnd__open_none2(kk_std_os_dir__new_mlift_copy_directory_10083_fun556(_ctx), kk_std_os_path__path_box(to, _ctx), kk_std_os_path__path_box(_x_x2_0_10075, _ctx), _ctx); /*10005*/
  _x_x554 = kk_std_os_path__path_unbox(_x_x555, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_dir_copy_directory(_x_x553, _x_x554, _ctx); return kk_Unit;
}

kk_unit_t kk_std_os_dir__mlift_copy_directory_10083(kk_std_core_types__list dirs, kk_std_os_path__path to, kk_unit_t wild___0, kk_context_t* _ctx) { /* (dirs : list<std/os/path/path>, to : std/os/path/path, wild_@0 : ()) -> <exn,fsys,div> () */ 
  kk_std_core_list_foreach(dirs, kk_std_os_dir__new_mlift_copy_directory_10083_fun543(to, _ctx), _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10084_fun561__t {
  struct kk_function_s _base;
  kk_std_os_path__path to_0;
};
static kk_unit_t kk_std_os_dir__mlift_copy_directory_10084_fun561(kk_function_t _fself, kk_box_t _b_x230, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10084_fun561(kk_std_os_path__path to_0, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10084_fun561__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift_copy_directory_10084_fun561__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir__mlift_copy_directory_10084_fun561, kk_context());
  _self->to_0 = to_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10084_fun563__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift_copy_directory_10084_fun563(kk_function_t _fself, kk_box_t _b_x219, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10084_fun563(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift_copy_directory_10084_fun563, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir__mlift_copy_directory_10084_fun563(kk_function_t _fself, kk_box_t _b_x219, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x214_215;
  kk_std_core_types__list _x_x564;
  kk_std_os_path__path _match_x374;
  kk_box_t _x_x565 = kk_box_dup(_b_x219, _ctx); /*9923*/
  _match_x374 = kk_std_os_path__path_unbox(_x_x565, KK_OWNED, _ctx); /*std/os/path/path*/
  {
    kk_std_core_types__list _x_1 = _match_x374.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(_match_x374, _ctx);
    _x_x564 = _x_1; /*list<string>*/
  }
  _b_x214_215 = kk_std_core_list_take(_x_x564, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x_x566;
  kk_string_t _x_x567 = kk_string_empty(); /*string*/
  kk_std_core_types__list _x_x569;
  kk_std_core_types__optional _match_x372 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x214_215, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x372, _ctx)) {
    kk_box_t _box_x216 = _match_x372._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_136 = kk_std_core_types__list_unbox(_box_x216, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_136, _ctx);
    kk_std_core_types__optional_drop(_match_x372, _ctx);
    kk_box_drop(_b_x219, _ctx);
    _x_x569 = _uniq_parts_136; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x372, _ctx);
    kk_std_os_path__path _match_x373 = kk_std_os_path__path_unbox(_b_x219, KK_OWNED, _ctx); /*std/os/path/path*/;
    {
      kk_std_core_types__list _x_0 = _match_x373.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(_match_x373, _ctx);
      _x_x569 = _x_0; /*list<string>*/
    }
  }
  _x_x566 = kk_std_os_path__new_Path(_x_x567, _x_x569, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x566, _ctx);
}


// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10084_fun574__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift_copy_directory_10084_fun574(kk_function_t _fself, kk_box_t _b_x226, kk_box_t _b_x227, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10084_fun574(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift_copy_directory_10084_fun574, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir__mlift_copy_directory_10084_fun574(kk_function_t _fself, kk_box_t _b_x226, kk_box_t _b_x227, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x575;
  kk_std_os_path__path _x_x576 = kk_std_os_path__path_unbox(_b_x226, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x577 = kk_std_os_path__path_unbox(_b_x227, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x575 = kk_std_os_path__lp__fs__rp_(_x_x576, _x_x577, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x575, _ctx);
}
static kk_unit_t kk_std_os_dir__mlift_copy_directory_10084_fun561(kk_function_t _fself, kk_box_t _b_x230, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10084_fun561__t* _self = kk_function_as(struct kk_std_os_dir__mlift_copy_directory_10084_fun561__t*, _fself, _ctx);
  kk_std_os_path__path to_0 = _self->to_0; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to_0, _ctx);}, {}, _ctx)
  kk_std_os_path__path _x_x2_10072;
  kk_box_t _x_x562;
  kk_box_t _x_x570 = kk_box_dup(_b_x230, _ctx); /*3304*/
  _x_x562 = kk_std_core_hnd__open_none1(kk_std_os_dir__new_mlift_copy_directory_10084_fun563(_ctx), _x_x570, _ctx); /*9924*/
  _x_x2_10072 = kk_std_os_path__path_unbox(_x_x562, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x571 = kk_std_os_path__path_unbox(_b_x230, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x572;
  kk_box_t _x_x573 = kk_std_core_hnd__open_none2(kk_std_os_dir__new_mlift_copy_directory_10084_fun574(_ctx), kk_std_os_path__path_box(to_0, _ctx), kk_std_os_path__path_box(_x_x2_10072, _ctx), _ctx); /*10005*/
  _x_x572 = kk_std_os_path__path_unbox(_x_x573, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_dir_copy_file(_x_x571, _x_x572, kk_std_core_types__new_None(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10084_fun579__t {
  struct kk_function_s _base;
  kk_std_core_types__list dirs_0;
  kk_std_os_path__path to_0;
};
static kk_box_t kk_std_os_dir__mlift_copy_directory_10084_fun579(kk_function_t _fself, kk_box_t _b_x238, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10084_fun579(kk_std_core_types__list dirs_0, kk_std_os_path__path to_0, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10084_fun579__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift_copy_directory_10084_fun579__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir__mlift_copy_directory_10084_fun579, kk_context());
  _self->dirs_0 = dirs_0;
  _self->to_0 = to_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir__mlift_copy_directory_10084_fun579(kk_function_t _fself, kk_box_t _b_x238, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10084_fun579__t* _self = kk_function_as(struct kk_std_os_dir__mlift_copy_directory_10084_fun579__t*, _fself, _ctx);
  kk_std_core_types__list dirs_0 = _self->dirs_0; /* list<std/os/path/path> */
  kk_std_os_path__path to_0 = _self->to_0; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_core_types__list_dup(dirs_0, _ctx);kk_std_os_path__path_dup(to_0, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_0_240 = kk_Unit;
  kk_unit_unbox(_b_x238);
  kk_unit_t _x_x580 = kk_Unit;
  kk_std_os_dir__mlift_copy_directory_10083(dirs_0, to_0, wild___0_0_240, _ctx);
  return kk_unit_box(_x_x580);
}

kk_unit_t kk_std_os_dir__mlift_copy_directory_10084(kk_std_os_path__path to_0, kk_std_core_types__tuple2 _y_x10017, kk_context_t* _ctx) { /* (to : std/os/path/path, (list<std/os/path/path>, list<std/os/path/path>)) -> <fsys,div,exn> () */ 
  {
    kk_box_t _box_x212 = _y_x10017.fst;
    kk_box_t _box_x213 = _y_x10017.snd;
    kk_std_core_types__list dirs_0 = kk_std_core_types__list_unbox(_box_x212, KK_BORROWED, _ctx);
    kk_std_core_types__list files = kk_std_core_types__list_unbox(_box_x213, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(dirs_0, _ctx);
    kk_std_core_types__list_dup(files, _ctx);
    kk_std_core_types__tuple2_drop(_y_x10017, _ctx);
    kk_unit_t x_10109 = kk_Unit;
    kk_function_t _x_x560;
    kk_std_os_path__path_dup(to_0, _ctx);
    _x_x560 = kk_std_os_dir__new_mlift_copy_directory_10084_fun561(to_0, _ctx); /*(3304) -> 3305 ()*/
    kk_std_core_list_foreach(files, _x_x560, _ctx);
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x578 = kk_std_core_hnd_yield_extend(kk_std_os_dir__new_mlift_copy_directory_10084_fun579(dirs_0, to_0, _ctx), _ctx); /*2419*/
      kk_unit_unbox(_x_x578); return kk_Unit;
    }
    {
      kk_std_os_dir__mlift_copy_directory_10083(dirs_0, to_0, x_10109, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10085_fun581__t {
  struct kk_function_s _base;
};
static bool kk_std_os_dir__mlift_copy_directory_10085_fun581(kk_function_t _fself, kk_box_t _b_x246, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10085_fun581(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift_copy_directory_10085_fun581, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10085_fun583__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir__mlift_copy_directory_10085_fun583(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10085_fun583(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir__mlift_copy_directory_10085_fun583, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir__mlift_copy_directory_10085_fun583(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x584;
  kk_std_os_path__path _x_x585 = kk_std_os_path__path_unbox(_b_x243, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x584 = kk_std_os_dir_is_directory(_x_x585, _ctx); /*bool*/
  return kk_bool_box(_x_x584);
}
static bool kk_std_os_dir__mlift_copy_directory_10085_fun581(kk_function_t _fself, kk_box_t _b_x246, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_t _x_x582 = kk_std_core_hnd__open_none1(kk_std_os_dir__new_mlift_copy_directory_10085_fun583(_ctx), _b_x246, _ctx); /*9924*/
  return kk_bool_unbox(_x_x582);
}


// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10085_fun587__t {
  struct kk_function_s _base;
  kk_std_os_path__path to_1;
};
static kk_box_t kk_std_os_dir__mlift_copy_directory_10085_fun587(kk_function_t _fself, kk_box_t _b_x253, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10085_fun587(kk_std_os_path__path to_1, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10085_fun587__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift_copy_directory_10085_fun587__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir__mlift_copy_directory_10085_fun587, kk_context());
  _self->to_1 = to_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir__mlift_copy_directory_10085_fun587(kk_function_t _fself, kk_box_t _b_x253, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10085_fun587__t* _self = kk_function_as(struct kk_std_os_dir__mlift_copy_directory_10085_fun587__t*, _fself, _ctx);
  kk_std_os_path__path to_1 = _self->to_1; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to_1, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _y_x10017_0_255 = kk_std_core_types__tuple2_unbox(_b_x253, KK_OWNED, _ctx); /*(list<std/os/path/path>, list<std/os/path/path>)*/;
  kk_unit_t _x_x588 = kk_Unit;
  kk_std_os_dir__mlift_copy_directory_10084(to_1, _y_x10017_0_255, _ctx);
  return kk_unit_box(_x_x588);
}

kk_unit_t kk_std_os_dir__mlift_copy_directory_10085(kk_std_os_path__path to_1, kk_std_core_types__list all, kk_context_t* _ctx) { /* (to : std/os/path/path, all : list<std/os/path/path>) -> <exn,fsys> () */ 
  kk_std_core_types__tuple2 x_0_10111;
  kk_function_t _brw_x369 = kk_std_os_dir__new_mlift_copy_directory_10085_fun581(_ctx); /*(3031) -> 3032 bool*/;
  kk_std_core_types__tuple2 _brw_x370 = kk_std_core_list_partition(all, _brw_x369, _ctx); /*(list<3031>, list<3031>)*/;
  kk_function_drop(_brw_x369, _ctx);
  x_0_10111 = _brw_x370; /*(list<std/os/path/path>, list<std/os/path/path>)*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__tuple2_drop(x_0_10111, _ctx);
    kk_box_t _x_x586 = kk_std_core_hnd_yield_extend(kk_std_os_dir__new_mlift_copy_directory_10085_fun587(to_1, _ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x586); return kk_Unit;
  }
  {
    kk_std_os_dir__mlift_copy_directory_10084(to_1, x_0_10111, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_dir__mlift_copy_directory_10086_fun590__t {
  struct kk_function_s _base;
  kk_std_os_path__path to_2;
};
static kk_box_t kk_std_os_dir__mlift_copy_directory_10086_fun590(kk_function_t _fself, kk_box_t _b_x257, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir__new_mlift_copy_directory_10086_fun590(kk_std_os_path__path to_2, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10086_fun590__t* _self = kk_function_alloc_as(struct kk_std_os_dir__mlift_copy_directory_10086_fun590__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir__mlift_copy_directory_10086_fun590, kk_context());
  _self->to_2 = to_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir__mlift_copy_directory_10086_fun590(kk_function_t _fself, kk_box_t _b_x257, kk_context_t* _ctx) {
  struct kk_std_os_dir__mlift_copy_directory_10086_fun590__t* _self = kk_function_as(struct kk_std_os_dir__mlift_copy_directory_10086_fun590__t*, _fself, _ctx);
  kk_std_os_path__path to_2 = _self->to_2; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to_2, _ctx);}, {}, _ctx)
  kk_std_core_types__list all_0_259 = kk_std_core_types__list_unbox(_b_x257, KK_OWNED, _ctx); /*list<std/os/path/path>*/;
  kk_unit_t _x_x591 = kk_Unit;
  kk_std_os_dir__mlift_copy_directory_10085(to_2, all_0_259, _ctx);
  return kk_unit_box(_x_x591);
}

kk_unit_t kk_std_os_dir__mlift_copy_directory_10086(kk_std_os_path__path dir, kk_std_os_path__path to_2, kk_unit_t wild__, kk_context_t* _ctx) { /* (dir : std/os/path/path, to : std/os/path/path, wild_ : ()) -> <exn,fsys> () */ 
  kk_std_core_types__list x_1_10113 = kk_std_os_dir_list_directory(dir, _ctx); /*list<std/os/path/path>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_1_10113, _ctx);
    kk_box_t _x_x589 = kk_std_core_hnd_yield_extend(kk_std_os_dir__new_mlift_copy_directory_10086_fun590(to_2, _ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x589); return kk_Unit;
  }
  {
    kk_std_os_dir__mlift_copy_directory_10085(to_2, x_1_10113, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun594__t {
  struct kk_function_s _base;
  kk_std_os_path__path dir_0;
  kk_std_os_path__path to_3;
};
static kk_box_t kk_std_os_dir_copy_directory_fun594(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun594(kk_std_os_path__path dir_0, kk_std_os_path__path to_3, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun594__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun594__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_copy_directory_fun594, kk_context());
  _self->dir_0 = dir_0;
  _self->to_3 = to_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir_copy_directory_fun594(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun594__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun594__t*, _fself, _ctx);
  kk_std_os_path__path dir_0 = _self->dir_0; /* std/os/path/path */
  kk_std_os_path__path to_3 = _self->to_3; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(dir_0, _ctx);kk_std_os_path__path_dup(to_3, _ctx);}, {}, _ctx)
  kk_unit_t wild___1_330 = kk_Unit;
  kk_unit_unbox(_b_x261);
  kk_unit_t _x_x595 = kk_Unit;
  kk_std_os_dir__mlift_copy_directory_10086(dir_0, to_3, wild___1_330, _ctx);
  return kk_unit_box(_x_x595);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun597__t {
  struct kk_function_s _base;
  kk_std_os_path__path to_3;
};
static kk_box_t kk_std_os_dir_copy_directory_fun597(kk_function_t _fself, kk_box_t _b_x263, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun597(kk_std_os_path__path to_3, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun597__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun597__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_copy_directory_fun597, kk_context());
  _self->to_3 = to_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir_copy_directory_fun597(kk_function_t _fself, kk_box_t _b_x263, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun597__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun597__t*, _fself, _ctx);
  kk_std_os_path__path to_3 = _self->to_3; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to_3, _ctx);}, {}, _ctx)
  kk_std_core_types__list all_1_331 = kk_std_core_types__list_unbox(_b_x263, KK_OWNED, _ctx); /*list<std/os/path/path>*/;
  kk_unit_t _x_x598 = kk_Unit;
  kk_std_os_dir__mlift_copy_directory_10085(to_3, all_1_331, _ctx);
  return kk_unit_box(_x_x598);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun599__t {
  struct kk_function_s _base;
};
static bool kk_std_os_dir_copy_directory_fun599(kk_function_t _fself, kk_box_t _b_x269, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun599(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun599, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_dir_copy_directory_fun601__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun601(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun601(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun601, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_directory_fun601(kk_function_t _fself, kk_box_t _b_x266, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x602;
  kk_std_os_path__path _x_x603 = kk_std_os_path__path_unbox(_b_x266, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x602 = kk_std_os_dir_is_directory(_x_x603, _ctx); /*bool*/
  return kk_bool_box(_x_x602);
}
static bool kk_std_os_dir_copy_directory_fun599(kk_function_t _fself, kk_box_t _b_x269, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_t _x_x600 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_directory_fun601(_ctx), _b_x269, _ctx); /*9924*/
  return kk_bool_unbox(_x_x600);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun605__t {
  struct kk_function_s _base;
  kk_std_os_path__path to_3;
};
static kk_box_t kk_std_os_dir_copy_directory_fun605(kk_function_t _fself, kk_box_t _b_x276, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun605(kk_std_os_path__path to_3, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun605__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun605__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_copy_directory_fun605, kk_context());
  _self->to_3 = to_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir_copy_directory_fun605(kk_function_t _fself, kk_box_t _b_x276, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun605__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun605__t*, _fself, _ctx);
  kk_std_os_path__path to_3 = _self->to_3; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to_3, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _y_x10017_1_332 = kk_std_core_types__tuple2_unbox(_b_x276, KK_OWNED, _ctx); /*(list<std/os/path/path>, list<std/os/path/path>)*/;
  kk_unit_t _x_x606 = kk_Unit;
  kk_std_os_dir__mlift_copy_directory_10084(to_3, _y_x10017_1_332, _ctx);
  return kk_unit_box(_x_x606);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun608__t {
  struct kk_function_s _base;
  kk_std_os_path__path to_3;
};
static kk_unit_t kk_std_os_dir_copy_directory_fun608(kk_function_t _fself, kk_box_t _b_x295, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun608(kk_std_os_path__path to_3, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun608__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun608__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_copy_directory_fun608, kk_context());
  _self->to_3 = to_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_os_dir_copy_directory_fun610__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun610(kk_function_t _fself, kk_box_t _b_x284, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun610(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun610, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_directory_fun610(kk_function_t _fself, kk_box_t _b_x284, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x279_280;
  kk_std_core_types__list _x_x611;
  kk_std_os_path__path _match_x364;
  kk_box_t _x_x612 = kk_box_dup(_b_x284, _ctx); /*9923*/
  _match_x364 = kk_std_os_path__path_unbox(_x_x612, KK_OWNED, _ctx); /*std/os/path/path*/
  {
    kk_std_core_types__list _x_1_1 = _match_x364.parts;
    kk_std_core_types__list_dup(_x_1_1, _ctx);
    kk_std_os_path__path_drop(_match_x364, _ctx);
    _x_x611 = _x_1_1; /*list<string>*/
  }
  _b_x279_280 = kk_std_core_list_take(_x_x611, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x_x613;
  kk_string_t _x_x614 = kk_string_empty(); /*string*/
  kk_std_core_types__list _x_x616;
  kk_std_core_types__optional _match_x362 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x279_280, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x362, _ctx)) {
    kk_box_t _box_x281 = _match_x362._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_136_1 = kk_std_core_types__list_unbox(_box_x281, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_136_1, _ctx);
    kk_std_core_types__optional_drop(_match_x362, _ctx);
    kk_box_drop(_b_x284, _ctx);
    _x_x616 = _uniq_parts_136_1; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x362, _ctx);
    kk_std_os_path__path _match_x363 = kk_std_os_path__path_unbox(_b_x284, KK_OWNED, _ctx); /*std/os/path/path*/;
    {
      kk_std_core_types__list _x_0_1 = _match_x363.parts;
      kk_std_core_types__list_dup(_x_0_1, _ctx);
      kk_std_os_path__path_drop(_match_x363, _ctx);
      _x_x616 = _x_0_1; /*list<string>*/
    }
  }
  _x_x613 = kk_std_os_path__new_Path(_x_x614, _x_x616, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x613, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun621__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun621(kk_function_t _fself, kk_box_t _b_x291, kk_box_t _b_x292, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun621(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun621, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_directory_fun621(kk_function_t _fself, kk_box_t _b_x291, kk_box_t _b_x292, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x622;
  kk_std_os_path__path _x_x623 = kk_std_os_path__path_unbox(_b_x291, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x624 = kk_std_os_path__path_unbox(_b_x292, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x622 = kk_std_os_path__lp__fs__rp_(_x_x623, _x_x624, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x622, _ctx);
}
static kk_unit_t kk_std_os_dir_copy_directory_fun608(kk_function_t _fself, kk_box_t _b_x295, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun608__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun608__t*, _fself, _ctx);
  kk_std_os_path__path to_3 = _self->to_3; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to_3, _ctx);}, {}, _ctx)
  kk_std_os_path__path _x_x2_10072_0;
  kk_box_t _x_x609;
  kk_box_t _x_x617 = kk_box_dup(_b_x295, _ctx); /*3304*/
  _x_x609 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_directory_fun610(_ctx), _x_x617, _ctx); /*9924*/
  _x_x2_10072_0 = kk_std_os_path__path_unbox(_x_x609, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x618 = kk_std_os_path__path_unbox(_b_x295, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x619;
  kk_box_t _x_x620 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_copy_directory_fun621(_ctx), kk_std_os_path__path_box(to_3, _ctx), kk_std_os_path__path_box(_x_x2_10072_0, _ctx), _ctx); /*10005*/
  _x_x619 = kk_std_os_path__path_unbox(_x_x620, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_dir_copy_file(_x_x618, _x_x619, kk_std_core_types__new_None(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun626__t {
  struct kk_function_s _base;
  kk_std_core_types__list dirs_1;
  kk_std_os_path__path to_3;
};
static kk_box_t kk_std_os_dir_copy_directory_fun626(kk_function_t _fself, kk_box_t _b_x303, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun626(kk_std_core_types__list dirs_1, kk_std_os_path__path to_3, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun626__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun626__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_copy_directory_fun626, kk_context());
  _self->dirs_1 = dirs_1;
  _self->to_3 = to_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_dir_copy_directory_fun626(kk_function_t _fself, kk_box_t _b_x303, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun626__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun626__t*, _fself, _ctx);
  kk_std_core_types__list dirs_1 = _self->dirs_1; /* list<std/os/path/path> */
  kk_std_os_path__path to_3 = _self->to_3; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_core_types__list_dup(dirs_1, _ctx);kk_std_os_path__path_dup(to_3, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_1_333 = kk_Unit;
  kk_unit_unbox(_b_x303);
  kk_unit_t _x_x627 = kk_Unit;
  kk_std_os_dir__mlift_copy_directory_10083(dirs_1, to_3, wild___0_1_333, _ctx);
  return kk_unit_box(_x_x627);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun628__t {
  struct kk_function_s _base;
  kk_std_os_path__path to_3;
};
static kk_unit_t kk_std_os_dir_copy_directory_fun628(kk_function_t _fself, kk_box_t _b_x320, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun628(kk_std_os_path__path to_3, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun628__t* _self = kk_function_alloc_as(struct kk_std_os_dir_copy_directory_fun628__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_dir_copy_directory_fun628, kk_context());
  _self->to_3 = to_3;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_os_dir_copy_directory_fun630__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun630(kk_function_t _fself, kk_box_t _b_x309, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun630(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun630, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_directory_fun630(kk_function_t _fself, kk_box_t _b_x309, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x304_305;
  kk_std_core_types__list _x_x631;
  kk_std_os_path__path _match_x361;
  kk_box_t _x_x632 = kk_box_dup(_b_x309, _ctx); /*9923*/
  _match_x361 = kk_std_os_path__path_unbox(_x_x632, KK_OWNED, _ctx); /*std/os/path/path*/
  {
    kk_std_core_types__list _x_1_0_0 = _match_x361.parts;
    kk_std_core_types__list_dup(_x_1_0_0, _ctx);
    kk_std_os_path__path_drop(_match_x361, _ctx);
    _x_x631 = _x_1_0_0; /*list<string>*/
  }
  _b_x304_305 = kk_std_core_list_take(_x_x631, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x_x633;
  kk_string_t _x_x634 = kk_string_empty(); /*string*/
  kk_std_core_types__list _x_x636;
  kk_std_core_types__optional _match_x359 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x304_305, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x359, _ctx)) {
    kk_box_t _box_x306 = _match_x359._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_136_0_0 = kk_std_core_types__list_unbox(_box_x306, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_136_0_0, _ctx);
    kk_std_core_types__optional_drop(_match_x359, _ctx);
    kk_box_drop(_b_x309, _ctx);
    _x_x636 = _uniq_parts_136_0_0; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x359, _ctx);
    kk_std_os_path__path _match_x360 = kk_std_os_path__path_unbox(_b_x309, KK_OWNED, _ctx); /*std/os/path/path*/;
    {
      kk_std_core_types__list _x_0_0_0 = _match_x360.parts;
      kk_std_core_types__list_dup(_x_0_0_0, _ctx);
      kk_std_os_path__path_drop(_match_x360, _ctx);
      _x_x636 = _x_0_0_0; /*list<string>*/
    }
  }
  _x_x633 = kk_std_os_path__new_Path(_x_x634, _x_x636, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x633, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_directory_fun641__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_directory_fun641(kk_function_t _fself, kk_box_t _b_x316, kk_box_t _b_x317, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_directory_fun641(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_directory_fun641, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_directory_fun641(kk_function_t _fself, kk_box_t _b_x316, kk_box_t _b_x317, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x642;
  kk_std_os_path__path _x_x643 = kk_std_os_path__path_unbox(_b_x316, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x644 = kk_std_os_path__path_unbox(_b_x317, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x642 = kk_std_os_path__lp__fs__rp_(_x_x643, _x_x644, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x642, _ctx);
}
static kk_unit_t kk_std_os_dir_copy_directory_fun628(kk_function_t _fself, kk_box_t _b_x320, kk_context_t* _ctx) {
  struct kk_std_os_dir_copy_directory_fun628__t* _self = kk_function_as(struct kk_std_os_dir_copy_directory_fun628__t*, _fself, _ctx);
  kk_std_os_path__path to_3 = _self->to_3; /* std/os/path/path */
  kk_drop_match(_self, {kk_std_os_path__path_dup(to_3, _ctx);}, {}, _ctx)
  kk_std_os_path__path _x_x2_0_10075_0;
  kk_box_t _x_x629;
  kk_box_t _x_x637 = kk_box_dup(_b_x320, _ctx); /*3304*/
  _x_x629 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_directory_fun630(_ctx), _x_x637, _ctx); /*9924*/
  _x_x2_0_10075_0 = kk_std_os_path__path_unbox(_x_x629, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x638 = kk_std_os_path__path_unbox(_b_x320, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x639;
  kk_box_t _x_x640 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_copy_directory_fun641(_ctx), kk_std_os_path__path_box(to_3, _ctx), kk_std_os_path__path_box(_x_x2_0_10075_0, _ctx), _ctx); /*10005*/
  _x_x639 = kk_std_os_path__path_unbox(_x_x640, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_dir_copy_directory(_x_x638, _x_x639, _ctx); return kk_Unit;
}

kk_unit_t kk_std_os_dir_copy_directory(kk_std_os_path__path dir_0, kk_std_os_path__path to_3, kk_context_t* _ctx) { /* (dir : std/os/path/path, to : std/os/path/path) -> <pure,fsys> () */ 
  kk_unit_t x_2_10115 = kk_Unit;
  kk_std_os_path__path _x_x592 = kk_std_os_path__path_dup(to_3, _ctx); /*std/os/path/path*/
  kk_std_os_dir_ensure_dir(_x_x592, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x593 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_copy_directory_fun594(dir_0, to_3, _ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x593); return kk_Unit;
  }
  {
    kk_std_core_types__list x_3_10118 = kk_std_os_dir_list_directory(dir_0, _ctx); /*list<std/os/path/path>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_3_10118, _ctx);
      kk_box_t _x_x596 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_copy_directory_fun597(to_3, _ctx), _ctx); /*2419*/
      kk_unit_unbox(_x_x596); return kk_Unit;
    }
    {
      kk_std_core_types__tuple2 x_4_10121;
      kk_function_t _brw_x365 = kk_std_os_dir_new_copy_directory_fun599(_ctx); /*(3031) -> 3032 bool*/;
      kk_std_core_types__tuple2 _brw_x366 = kk_std_core_list_partition(x_3_10118, _brw_x365, _ctx); /*(list<3031>, list<3031>)*/;
      kk_function_drop(_brw_x365, _ctx);
      x_4_10121 = _brw_x366; /*(list<std/os/path/path>, list<std/os/path/path>)*/
      if (kk_yielding(kk_context())) {
        kk_std_core_types__tuple2_drop(x_4_10121, _ctx);
        kk_box_t _x_x604 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_copy_directory_fun605(to_3, _ctx), _ctx); /*2419*/
        kk_unit_unbox(_x_x604); return kk_Unit;
      }
      {
        kk_box_t _box_x277 = x_4_10121.fst;
        kk_box_t _box_x278 = x_4_10121.snd;
        kk_std_core_types__list dirs_1 = kk_std_core_types__list_unbox(_box_x277, KK_BORROWED, _ctx);
        kk_std_core_types__list files_0 = kk_std_core_types__list_unbox(_box_x278, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(dirs_1, _ctx);
        kk_std_core_types__list_dup(files_0, _ctx);
        kk_std_core_types__tuple2_drop(x_4_10121, _ctx);
        kk_unit_t x_5_10124 = kk_Unit;
        kk_function_t _x_x607;
        kk_std_os_path__path_dup(to_3, _ctx);
        _x_x607 = kk_std_os_dir_new_copy_directory_fun608(to_3, _ctx); /*(3304) -> 3305 ()*/
        kk_std_core_list_foreach(files_0, _x_x607, _ctx);
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x625 = kk_std_core_hnd_yield_extend(kk_std_os_dir_new_copy_directory_fun626(dirs_1, to_3, _ctx), _ctx); /*2419*/
          kk_unit_unbox(_x_x625); return kk_Unit;
        }
        {
          kk_std_core_list_foreach(dirs_1, kk_std_os_dir_new_copy_directory_fun628(to_3, _ctx), _ctx); return kk_Unit;
        }
      }
    }
  }
}
 
// Copy a file to a directory


// lift anonymous function
struct kk_std_os_dir_copy_file_to_dir_fun646__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_to_dir_fun646(kk_function_t _fself, kk_box_t _b_x340, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_to_dir_fun646(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_to_dir_fun646, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_file_to_dir_fun646(kk_function_t _fself, kk_box_t _b_x340, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x335_336;
  kk_std_core_types__list _x_x647;
  kk_std_os_path__path _match_x354;
  kk_box_t _x_x648 = kk_box_dup(_b_x340, _ctx); /*9923*/
  _match_x354 = kk_std_os_path__path_unbox(_x_x648, KK_OWNED, _ctx); /*std/os/path/path*/
  {
    kk_std_core_types__list _x_1 = _match_x354.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(_match_x354, _ctx);
    _x_x647 = _x_1; /*list<string>*/
  }
  _b_x335_336 = kk_std_core_list_take(_x_x647, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_std_os_path__path _x_x649;
  kk_string_t _x_x650 = kk_string_empty(); /*string*/
  kk_std_core_types__list _x_x652;
  kk_std_core_types__optional _match_x352 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x335_336, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x352, _ctx)) {
    kk_box_t _box_x337 = _match_x352._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_136 = kk_std_core_types__list_unbox(_box_x337, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_136, _ctx);
    kk_std_core_types__optional_drop(_match_x352, _ctx);
    kk_box_drop(_b_x340, _ctx);
    _x_x652 = _uniq_parts_136; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x352, _ctx);
    kk_std_os_path__path _match_x353 = kk_std_os_path__path_unbox(_b_x340, KK_OWNED, _ctx); /*std/os/path/path*/;
    {
      kk_std_core_types__list _x_0 = _match_x353.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(_match_x353, _ctx);
      _x_x652 = _x_0; /*list<string>*/
    }
  }
  _x_x649 = kk_std_os_path__new_Path(_x_x650, _x_x652, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x649, _ctx);
}


// lift anonymous function
struct kk_std_os_dir_copy_file_to_dir_fun657__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_dir_copy_file_to_dir_fun657(kk_function_t _fself, kk_box_t _b_x347, kk_box_t _b_x348, kk_context_t* _ctx);
static kk_function_t kk_std_os_dir_new_copy_file_to_dir_fun657(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_dir_copy_file_to_dir_fun657, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_dir_copy_file_to_dir_fun657(kk_function_t _fself, kk_box_t _b_x347, kk_box_t _b_x348, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x658;
  kk_std_os_path__path _x_x659 = kk_std_os_path__path_unbox(_b_x347, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x660 = kk_std_os_path__path_unbox(_b_x348, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x658 = kk_std_os_path__lp__fs__rp_(_x_x659, _x_x660, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x658, _ctx);
}

kk_unit_t kk_std_os_dir_copy_file_to_dir(kk_std_os_path__path from, kk_std_os_path__path dir, kk_context_t* _ctx) { /* (from : std/os/path/path, dir : std/os/path/path) -> <exn,fsys> () */ 
  kk_std_os_path__path _x_x2_10078;
  kk_box_t _x_x645;
  kk_box_t _x_x653;
  kk_std_os_path__path _x_x654 = kk_std_os_path__path_dup(from, _ctx); /*std/os/path/path*/
  _x_x653 = kk_std_os_path__path_box(_x_x654, _ctx); /*9923*/
  _x_x645 = kk_std_core_hnd__open_none1(kk_std_os_dir_new_copy_file_to_dir_fun646(_ctx), _x_x653, _ctx); /*9924*/
  _x_x2_10078 = kk_std_os_path__path_unbox(_x_x645, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x655;
  kk_box_t _x_x656 = kk_std_core_hnd__open_none2(kk_std_os_dir_new_copy_file_to_dir_fun657(_ctx), kk_std_os_path__path_box(dir, _ctx), kk_std_os_path__path_box(_x_x2_10078, _ctx), _ctx); /*10005*/
  _x_x655 = kk_std_os_path__path_unbox(_x_x656, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_dir_copy_file(from, _x_x655, kk_std_core_types__new_None(_ctx), _ctx); return kk_Unit;
}

bool kk_std_os_dir_prim_is_file(kk_string_t path, kk_context_t* _ctx) { /* (path : string) -> fsys bool */ 
  return kk_os_is_file(path,kk_context());
}

// initialization
void kk_std_os_dir__init(kk_context_t* _ctx){
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
  kk_std_os_path__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_os_dir__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_os_path__done(_ctx);
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
