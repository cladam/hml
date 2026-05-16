// Koka generated module: std/os/file, koka version: 3.2.3, platform: 64-bit
#include "std_os_file.h"
/*---------------------------------------------------------------------------
  Copyright 2020-2021, Microsoft Research, Daan Leijen.

  This is free software; you can redistribute it and/or modify it under the
  terms of the Apache License, Version 2.0. A copy of the License can be
  found in the LICENSE file at the root of this distribution.
---------------------------------------------------------------------------*/

static kk_std_core_exn__error kk_os_read_text_file_error( kk_string_t path, kk_context_t* ctx ) {
  kk_string_t content;
  const int err = kk_os_read_text_file(path,&content,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_string_box(content),ctx);
}

static kk_std_core_exn__error kk_os_write_text_file_error( kk_string_t path, kk_string_t content, kk_context_t* ctx ) {
  const int err = kk_os_write_text_file(path,content,ctx);
  if (err != 0) return kk_error_from_errno(err,ctx);
           else return kk_error_ok(kk_unit_box(kk_Unit),ctx);
}


kk_std_core_exn__error kk_std_os_file_read_text_file_err(kk_string_t path, kk_context_t* _ctx) { /* (path : string) -> fsys error<string> */ 
  return kk_os_read_text_file_error(path,kk_context());
}
 
// Read a text file synchronously (using UTF8 encoding)


// lift anonymous function
struct kk_std_os_file_read_text_file_fun158__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_read_text_file_fun158(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_read_text_file_fun158(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_read_text_file_fun158, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_read_text_file_fun158(kk_function_t _fself, kk_box_t _b_x2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x159;
  kk_std_os_path__path _x_x160 = kk_std_os_path__path_unbox(_b_x2, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x159 = kk_std_os_path_string(_x_x160, _ctx); /*string*/
  return kk_string_box(_x_x159);
}


// lift anonymous function
struct kk_std_os_file_read_text_file_fun164__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_read_text_file_fun164(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_read_text_file_fun164(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_read_text_file_fun164, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_read_text_file_fun164(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__error _x_x165;
  kk_string_t _x_x166 = kk_string_unbox(_b_x7); /*string*/
  _x_x165 = kk_std_os_file_read_text_file_err(_x_x166, _ctx); /*error<string>*/
  return kk_std_core_exn__error_box(_x_x165, _ctx);
}


// lift anonymous function
struct kk_std_os_file_read_text_file_fun171__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_read_text_file_fun171(kk_function_t _fself, kk_box_t _b_x10, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_read_text_file_fun171(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_read_text_file_fun171, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_read_text_file_fun171(kk_function_t _fself, kk_box_t _b_x10, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x172;
  kk_string_t _x_x173;
  kk_std_os_path__path _x_x174 = kk_std_os_path__path_unbox(_b_x10, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x173 = kk_std_os_path_string(_x_x174, _ctx); /*string*/
  _x_x172 = kk_std_core_show_string_fs_show(_x_x173, _ctx); /*string*/
  return kk_string_box(_x_x172);
}


// lift anonymous function
struct kk_std_os_file_read_text_file_fun176__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_read_text_file_fun176(kk_function_t _fself, kk_box_t _b_x17, kk_box_t _b_x18, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_read_text_file_fun176(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_read_text_file_fun176, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_read_text_file_fun176(kk_function_t _fself, kk_box_t _b_x17, kk_box_t _b_x18, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__exception _x_x177;
  kk_string_t _x_x178;
  kk_string_t _x_x179 = kk_string_unbox(_b_x18); /*string*/
  kk_string_t _x_x180;
  kk_string_t _x_x181;
  kk_define_string_literal(static, _s_x182, 2, ": ", _ctx)
  _x_x181 = kk_string_dup(_s_x182, _ctx); /*string*/
  kk_string_t _x_x183;
  kk_std_core_exn__exception _match_x151;
  kk_box_t _x_x184 = kk_box_dup(_b_x17, _ctx); /*10000*/
  _match_x151 = kk_std_core_exn__exception_unbox(_x_x184, KK_OWNED, _ctx); /*exception*/
  {
    kk_string_t _x = _match_x151.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x151, _ctx);
    _x_x183 = _x; /*string*/
  }
  _x_x180 = kk_std_core_types__lp__plus__plus__rp_(_x_x181, _x_x183, _ctx); /*string*/
  _x_x178 = kk_std_core_types__lp__plus__plus__rp_(_x_x179, _x_x180, _ctx); /*string*/
  kk_std_core_exn__exception_info _x_x185;
  kk_std_core_exn__exception _match_x150 = kk_std_core_exn__exception_unbox(_b_x17, KK_OWNED, _ctx); /*exception*/;
  {
    kk_std_core_exn__exception_info _x_0 = _match_x150.info;
    kk_std_core_exn__exception_info_dup(_x_0, _ctx);
    kk_std_core_exn__exception_drop(_match_x150, _ctx);
    _x_x185 = _x_0; /*exception-info*/
  }
  _x_x177 = kk_std_core_exn__new_Exception(_x_x178, _x_x185, _ctx); /*exception*/
  return kk_std_core_exn__exception_box(_x_x177, _ctx);
}

kk_string_t kk_std_os_file_read_text_file(kk_std_os_path__path path, kk_context_t* _ctx) { /* (path : std/os/path/path) -> <exn,fsys> string */ 
  kk_string_t _x_x1_10020;
  kk_box_t _x_x157;
  kk_box_t _x_x161;
  kk_std_os_path__path _x_x162 = kk_std_os_path__path_dup(path, _ctx); /*std/os/path/path*/
  _x_x161 = kk_std_os_path__path_box(_x_x162, _ctx); /*10000*/
  _x_x157 = kk_std_core_hnd__open_none1(kk_std_os_file_new_read_text_file_fun158(_ctx), _x_x161, _ctx); /*10001*/
  _x_x1_10020 = kk_string_unbox(_x_x157); /*string*/
  kk_std_core_exn__error _match_x147;
  kk_box_t _x_x163 = kk_std_core_hnd__open_none1(kk_std_os_file_new_read_text_file_fun164(_ctx), kk_string_box(_x_x1_10020), _ctx); /*10001*/
  _match_x147 = kk_std_core_exn__error_unbox(_x_x163, KK_OWNED, _ctx); /*error<string>*/
  if (kk_std_core_exn__is_Error(_match_x147, _ctx)) {
    kk_std_core_exn__exception exn = _match_x147._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn, _ctx);
    kk_std_core_exn__error_drop(_match_x147, _ctx);
    kk_string_t _x_x2_10023;
    kk_string_t _x_x167;
    kk_define_string_literal(static, _s_x168, 25, "unable to read text file ", _ctx)
    _x_x167 = kk_string_dup(_s_x168, _ctx); /*string*/
    kk_string_t _x_x169;
    kk_box_t _x_x170 = kk_std_core_hnd__open_none1(kk_std_os_file_new_read_text_file_fun171(_ctx), kk_std_os_path__path_box(path, _ctx), _ctx); /*10001*/
    _x_x169 = kk_string_unbox(_x_x170); /*string*/
    _x_x2_10023 = kk_std_core_types__lp__plus__plus__rp_(_x_x167, _x_x169, _ctx); /*string*/
    kk_std_core_exn__exception exn_0_10000;
    kk_box_t _x_x175 = kk_std_core_hnd__open_none2(kk_std_os_file_new_read_text_file_fun176(_ctx), kk_std_core_exn__exception_box(exn, _ctx), kk_string_box(_x_x2_10023), _ctx); /*10002*/
    exn_0_10000 = kk_std_core_exn__exception_unbox(_x_x175, KK_OWNED, _ctx); /*exception*/
    kk_std_core_hnd__ev ev_10034 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x186;
    {
      struct kk_std_core_hnd_Ev* _con_x187 = kk_std_core_hnd__as_Ev(ev_10034, _ctx);
      kk_box_t _box_x24 = _con_x187->hnd;
      int32_t m = _con_x187->marker;
      kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x24, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x148;
      kk_std_core_hnd__clause1 _brw_x149 = kk_std_core_exn_throw_exn_fs__select(h, _ctx); /*hnd/clause1<exception,10000,exn,10001,10002>*/;
      kk_datatype_ptr_dropn(h, (KK_I32(2)), _ctx);
      _match_x148 = _brw_x149; /*hnd/clause1<exception,10000,exn,10001,10002>*/
      {
        kk_function_t _fun_unbox_x28 = _match_x148.clause;
        _x_x186 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x28, (_fun_unbox_x28, m, ev_10034, kk_std_core_exn__exception_box(exn_0_10000, _ctx), _ctx), _ctx); /*10010*/
      }
    }
    return kk_string_unbox(_x_x186);
  }
  {
    kk_box_t _box_x32 = _match_x147._cons.Ok.result;
    kk_string_t content = kk_string_unbox(_box_x32);
    kk_std_os_path__path_drop(path, _ctx);
    kk_string_dup(content, _ctx);
    kk_std_core_exn__error_drop(_match_x147, _ctx);
    return content;
  }
}

kk_std_core_exn__error kk_std_os_file_write_text_file_err(kk_string_t path, kk_string_t content, kk_context_t* _ctx) { /* (path : string, content : string) -> fsys error<()> */ 
  return kk_os_write_text_file_error(path,content,kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_file__mlift_write_text_file_10033_fun189__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file__mlift_write_text_file_10033_fun189(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_std_os_file__new_mlift_write_text_file_10033_fun189(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file__mlift_write_text_file_10033_fun189, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file__mlift_write_text_file_10033_fun189(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x190;
  kk_std_os_path__path _x_x191 = kk_std_os_path__path_unbox(_b_x37, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x190 = kk_std_os_path_string(_x_x191, _ctx); /*string*/
  return kk_string_box(_x_x190);
}


// lift anonymous function
struct kk_std_os_file__mlift_write_text_file_10033_fun195__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file__mlift_write_text_file_10033_fun195(kk_function_t _fself, kk_box_t _b_x43, kk_box_t _b_x44, kk_context_t* _ctx);
static kk_function_t kk_std_os_file__new_mlift_write_text_file_10033_fun195(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file__mlift_write_text_file_10033_fun195, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file__mlift_write_text_file_10033_fun195(kk_function_t _fself, kk_box_t _b_x43, kk_box_t _b_x44, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__error _x_x196;
  kk_string_t _x_x197 = kk_string_unbox(_b_x43); /*string*/
  kk_string_t _x_x198 = kk_string_unbox(_b_x44); /*string*/
  _x_x196 = kk_std_os_file_write_text_file_err(_x_x197, _x_x198, _ctx); /*error<()>*/
  return kk_std_core_exn__error_box(_x_x196, _ctx);
}


// lift anonymous function
struct kk_std_os_file__mlift_write_text_file_10033_fun203__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file__mlift_write_text_file_10033_fun203(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_std_os_file__new_mlift_write_text_file_10033_fun203(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file__mlift_write_text_file_10033_fun203, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file__mlift_write_text_file_10033_fun203(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x204;
  kk_string_t _x_x205;
  kk_std_os_path__path _x_x206 = kk_std_os_path__path_unbox(_b_x47, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x205 = kk_std_os_path_string(_x_x206, _ctx); /*string*/
  _x_x204 = kk_std_core_show_string_fs_show(_x_x205, _ctx); /*string*/
  return kk_string_box(_x_x204);
}


// lift anonymous function
struct kk_std_os_file__mlift_write_text_file_10033_fun208__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file__mlift_write_text_file_10033_fun208(kk_function_t _fself, kk_box_t _b_x54, kk_box_t _b_x55, kk_context_t* _ctx);
static kk_function_t kk_std_os_file__new_mlift_write_text_file_10033_fun208(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file__mlift_write_text_file_10033_fun208, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file__mlift_write_text_file_10033_fun208(kk_function_t _fself, kk_box_t _b_x54, kk_box_t _b_x55, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__exception _x_x209;
  kk_string_t _x_x210;
  kk_string_t _x_x211 = kk_string_unbox(_b_x55); /*string*/
  kk_string_t _x_x212;
  kk_string_t _x_x213;
  kk_define_string_literal(static, _s_x214, 2, ": ", _ctx)
  _x_x213 = kk_string_dup(_s_x214, _ctx); /*string*/
  kk_string_t _x_x215;
  kk_std_core_exn__exception _match_x146;
  kk_box_t _x_x216 = kk_box_dup(_b_x54, _ctx); /*10000*/
  _match_x146 = kk_std_core_exn__exception_unbox(_x_x216, KK_OWNED, _ctx); /*exception*/
  {
    kk_string_t _x_2 = _match_x146.message;
    kk_string_dup(_x_2, _ctx);
    kk_std_core_exn__exception_drop(_match_x146, _ctx);
    _x_x215 = _x_2; /*string*/
  }
  _x_x212 = kk_std_core_types__lp__plus__plus__rp_(_x_x213, _x_x215, _ctx); /*string*/
  _x_x210 = kk_std_core_types__lp__plus__plus__rp_(_x_x211, _x_x212, _ctx); /*string*/
  kk_std_core_exn__exception_info _x_x217;
  kk_std_core_exn__exception _match_x145 = kk_std_core_exn__exception_unbox(_b_x54, KK_OWNED, _ctx); /*exception*/;
  {
    kk_std_core_exn__exception_info _x_0_1 = _match_x145.info;
    kk_std_core_exn__exception_info_dup(_x_0_1, _ctx);
    kk_std_core_exn__exception_drop(_match_x145, _ctx);
    _x_x217 = _x_0_1; /*exception-info*/
  }
  _x_x209 = kk_std_core_exn__new_Exception(_x_x210, _x_x217, _ctx); /*exception*/
  return kk_std_core_exn__exception_box(_x_x209, _ctx);
}

kk_unit_t kk_std_os_file__mlift_write_text_file_10033(kk_string_t content, kk_std_os_path__path path, kk_unit_t _c_x10007, kk_context_t* _ctx) { /* (content : string, path : std/os/path/path, ()) -> () */ 
  kk_string_t _x_x1_1_10027;
  kk_box_t _x_x188;
  kk_box_t _x_x192;
  kk_std_os_path__path _x_x193 = kk_std_os_path__path_dup(path, _ctx); /*std/os/path/path*/
  _x_x192 = kk_std_os_path__path_box(_x_x193, _ctx); /*10000*/
  _x_x188 = kk_std_core_hnd__open_none1(kk_std_os_file__new_mlift_write_text_file_10033_fun189(_ctx), _x_x192, _ctx); /*10001*/
  _x_x1_1_10027 = kk_string_unbox(_x_x188); /*string*/
  kk_std_core_exn__error _match_x142;
  kk_box_t _x_x194 = kk_std_core_hnd__open_none2(kk_std_os_file__new_mlift_write_text_file_10033_fun195(_ctx), kk_string_box(_x_x1_1_10027), kk_string_box(content), _ctx); /*10002*/
  _match_x142 = kk_std_core_exn__error_unbox(_x_x194, KK_OWNED, _ctx); /*error<()>*/
  if (kk_std_core_exn__is_Error(_match_x142, _ctx)) {
    kk_std_core_exn__exception exn = _match_x142._cons.Error.exception;
    kk_std_core_exn__exception_dup(exn, _ctx);
    kk_std_core_exn__error_drop(_match_x142, _ctx);
    kk_string_t _x_x2_0_10031;
    kk_string_t _x_x199;
    kk_define_string_literal(static, _s_x200, 26, "unable to write text file ", _ctx)
    _x_x199 = kk_string_dup(_s_x200, _ctx); /*string*/
    kk_string_t _x_x201;
    kk_box_t _x_x202 = kk_std_core_hnd__open_none1(kk_std_os_file__new_mlift_write_text_file_10033_fun203(_ctx), kk_std_os_path__path_box(path, _ctx), _ctx); /*10001*/
    _x_x201 = kk_string_unbox(_x_x202); /*string*/
    _x_x2_0_10031 = kk_std_core_types__lp__plus__plus__rp_(_x_x199, _x_x201, _ctx); /*string*/
    kk_std_core_exn__exception exn_0_10001;
    kk_box_t _x_x207 = kk_std_core_hnd__open_none2(kk_std_os_file__new_mlift_write_text_file_10033_fun208(_ctx), kk_std_core_exn__exception_box(exn, _ctx), kk_string_box(_x_x2_0_10031), _ctx); /*10002*/
    exn_0_10001 = kk_std_core_exn__exception_unbox(_x_x207, KK_OWNED, _ctx); /*exception*/
    kk_std_core_hnd__ev ev_10037 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
    kk_box_t _x_x218;
    {
      struct kk_std_core_hnd_Ev* _con_x219 = kk_std_core_hnd__as_Ev(ev_10037, _ctx);
      kk_box_t _box_x61 = _con_x219->hnd;
      int32_t m = _con_x219->marker;
      kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x61, KK_BORROWED, _ctx);
      kk_std_core_exn__exn_dup(h, _ctx);
      kk_std_core_hnd__clause1 _match_x143;
      kk_std_core_hnd__clause1 _brw_x144 = kk_std_core_exn_throw_exn_fs__select(h, _ctx); /*hnd/clause1<exception,10000,exn,10001,10002>*/;
      kk_datatype_ptr_dropn(h, (KK_I32(2)), _ctx);
      _match_x143 = _brw_x144; /*hnd/clause1<exception,10000,exn,10001,10002>*/
      {
        kk_function_t _fun_unbox_x65 = _match_x143.clause;
        _x_x218 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x65, (_fun_unbox_x65, m, ev_10037, kk_std_core_exn__exception_box(exn_0_10001, _ctx), _ctx), _ctx); /*10010*/
      }
    }
    kk_unit_unbox(_x_x218); return kk_Unit;
  }
  {
    kk_std_os_path__path_drop(path, _ctx);
    kk_std_core_exn__error_drop(_match_x142, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// Write a text file synchronously (using UTF8 encoding)


// lift anonymous function
struct kk_std_os_file_write_text_file_fun222__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun222(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun222(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun222, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_write_text_file_fun222(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x223;
  kk_string_t _x_x224;
  kk_std_core_types__optional _match_x140 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x140, _ctx)) {
    kk_box_t _box_x73 = _match_x140._cons._Optional.value;
    kk_string_t _uniq_root_128 = kk_string_unbox(_box_x73);
    kk_string_dup(_uniq_root_128, _ctx);
    kk_std_core_types__optional_drop(_match_x140, _ctx);
    _x_x224 = _uniq_root_128; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x140, _ctx);
    kk_std_os_path__path _match_x141;
    kk_box_t _x_x225 = kk_box_dup(_b_x77, _ctx); /*10000*/
    _match_x141 = kk_std_os_path__path_unbox(_x_x225, KK_OWNED, _ctx); /*std/os/path/path*/
    {
      kk_string_t _x_0 = _match_x141.root;
      kk_string_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(_match_x141, _ctx);
      _x_x224 = _x_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x226;
  kk_std_os_path__path _match_x139 = kk_std_os_path__path_unbox(_b_x77, KK_OWNED, _ctx); /*std/os/path/path*/;
  {
    kk_std_core_types__list _x = _match_x139.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(_match_x139, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x227 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x74 = _con_x227->head;
      kk_std_core_types__list xx = _con_x227->tail;
      kk_string_t _pat_0_2 = kk_string_unbox(_box_x74);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x226 = xx; /*list<string>*/
    }
    else {
      _x_x226 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x223 = kk_std_os_path__new_Path(_x_x224, _x_x226, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x223, _ctx);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun232__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun232(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun232(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun232, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_write_text_file_fun232(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x233;
  kk_string_t _x_x234;
  kk_std_core_types__optional _match_x137 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x137, _ctx)) {
    kk_box_t _box_x78 = _match_x137._cons._Optional.value;
    kk_string_t _uniq_root_128_0 = kk_string_unbox(_box_x78);
    kk_string_dup(_uniq_root_128_0, _ctx);
    kk_std_core_types__optional_drop(_match_x137, _ctx);
    _x_x234 = _uniq_root_128_0; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x137, _ctx);
    kk_std_os_path__path _match_x138;
    kk_box_t _x_x235 = kk_box_dup(_b_x82, _ctx); /*10000*/
    _match_x138 = kk_std_os_path__path_unbox(_x_x235, KK_OWNED, _ctx); /*std/os/path/path*/
    {
      kk_string_t _x_0_0 = _match_x138.root;
      kk_string_dup(_x_0_0, _ctx);
      kk_std_os_path__path_drop(_match_x138, _ctx);
      _x_x234 = _x_0_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x236;
  kk_std_os_path__path _match_x136 = kk_std_os_path__path_unbox(_b_x82, KK_OWNED, _ctx); /*std/os/path/path*/;
  {
    kk_std_core_types__list _x_1 = _match_x136.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(_match_x136, _ctx);
    if (kk_std_core_types__is_Cons(_x_1, _ctx)) {
      struct kk_std_core_types_Cons* _con_x237 = kk_std_core_types__as_Cons(_x_1, _ctx);
      kk_box_t _box_x79 = _con_x237->head;
      kk_std_core_types__list xx_0 = _con_x237->tail;
      kk_string_t _pat_0_2_0 = kk_string_unbox(_box_x79);
      if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
        kk_string_drop(_pat_0_2_0, _ctx);
        kk_datatype_ptr_free(_x_1, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx_0, _ctx);
        kk_datatype_ptr_decref(_x_1, _ctx);
      }
      _x_x236 = xx_0; /*list<string>*/
    }
    else {
      _x_x236 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x233 = kk_std_os_path__new_Path(_x_x234, _x_x236, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x233, _ctx);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun241__t {
  struct kk_function_s _base;
  kk_string_t content;
  kk_std_os_path__path path;
};
static kk_box_t kk_std_os_file_write_text_file_fun241(kk_function_t _fself, kk_box_t _b_x90, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun241(kk_string_t content, kk_std_os_path__path path, kk_context_t* _ctx) {
  struct kk_std_os_file_write_text_file_fun241__t* _self = kk_function_alloc_as(struct kk_std_os_file_write_text_file_fun241__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_file_write_text_file_fun241, kk_context());
  _self->content = content;
  _self->path = path;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_file_write_text_file_fun241(kk_function_t _fself, kk_box_t _b_x90, kk_context_t* _ctx) {
  struct kk_std_os_file_write_text_file_fun241__t* _self = kk_function_as(struct kk_std_os_file_write_text_file_fun241__t*, _fself, _ctx);
  kk_string_t content = _self->content; /* string */
  kk_std_os_path__path path = _self->path; /* std/os/path/path */
  kk_drop_match(_self, {kk_string_dup(content, _ctx);kk_std_os_path__path_dup(path, _ctx);}, {}, _ctx)
  kk_unit_t _c_x10007_129 = kk_Unit;
  kk_unit_unbox(_b_x90);
  kk_unit_t _x_x242 = kk_Unit;
  kk_std_os_file__mlift_write_text_file_10033(content, path, _c_x10007_129, _ctx);
  return kk_unit_box(_x_x242);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun244__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun244(kk_function_t _fself, kk_box_t _b_x93, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun244(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun244, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_write_text_file_fun244(kk_function_t _fself, kk_box_t _b_x93, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x245;
  kk_std_os_path__path _x_x246 = kk_std_os_path__path_unbox(_b_x93, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x245 = kk_std_os_path_string(_x_x246, _ctx); /*string*/
  return kk_string_box(_x_x245);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun250__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun250(kk_function_t _fself, kk_box_t _b_x99, kk_box_t _b_x100, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun250(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun250, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_write_text_file_fun250(kk_function_t _fself, kk_box_t _b_x99, kk_box_t _b_x100, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__error _x_x251;
  kk_string_t _x_x252 = kk_string_unbox(_b_x99); /*string*/
  kk_string_t _x_x253 = kk_string_unbox(_b_x100); /*string*/
  _x_x251 = kk_std_os_file_write_text_file_err(_x_x252, _x_x253, _ctx); /*error<()>*/
  return kk_std_core_exn__error_box(_x_x251, _ctx);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun258__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun258(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun258(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun258, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_write_text_file_fun258(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x259;
  kk_string_t _x_x260;
  kk_std_os_path__path _x_x261 = kk_std_os_path__path_unbox(_b_x103, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x260 = kk_std_os_path_string(_x_x261, _ctx); /*string*/
  _x_x259 = kk_std_core_show_string_fs_show(_x_x260, _ctx); /*string*/
  return kk_string_box(_x_x259);
}


// lift anonymous function
struct kk_std_os_file_write_text_file_fun263__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_file_write_text_file_fun263(kk_function_t _fself, kk_box_t _b_x110, kk_box_t _b_x111, kk_context_t* _ctx);
static kk_function_t kk_std_os_file_new_write_text_file_fun263(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_file_write_text_file_fun263, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_file_write_text_file_fun263(kk_function_t _fself, kk_box_t _b_x110, kk_box_t _b_x111, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_exn__exception _x_x264;
  kk_string_t _x_x265;
  kk_string_t _x_x266 = kk_string_unbox(_b_x111); /*string*/
  kk_string_t _x_x267;
  kk_string_t _x_x268;
  kk_define_string_literal(static, _s_x269, 2, ": ", _ctx)
  _x_x268 = kk_string_dup(_s_x269, _ctx); /*string*/
  kk_string_t _x_x270;
  kk_std_core_exn__exception _match_x135;
  kk_box_t _x_x271 = kk_box_dup(_b_x110, _ctx); /*10000*/
  _match_x135 = kk_std_core_exn__exception_unbox(_x_x271, KK_OWNED, _ctx); /*exception*/
  {
    kk_string_t _x_2 = _match_x135.message;
    kk_string_dup(_x_2, _ctx);
    kk_std_core_exn__exception_drop(_match_x135, _ctx);
    _x_x270 = _x_2; /*string*/
  }
  _x_x267 = kk_std_core_types__lp__plus__plus__rp_(_x_x268, _x_x270, _ctx); /*string*/
  _x_x265 = kk_std_core_types__lp__plus__plus__rp_(_x_x266, _x_x267, _ctx); /*string*/
  kk_std_core_exn__exception_info _x_x272;
  kk_std_core_exn__exception _match_x134 = kk_std_core_exn__exception_unbox(_b_x110, KK_OWNED, _ctx); /*exception*/;
  {
    kk_std_core_exn__exception_info _x_0_1 = _match_x134.info;
    kk_std_core_exn__exception_info_dup(_x_0_1, _ctx);
    kk_std_core_exn__exception_drop(_match_x134, _ctx);
    _x_x272 = _x_0_1; /*exception-info*/
  }
  _x_x264 = kk_std_core_exn__new_Exception(_x_x265, _x_x272, _ctx); /*exception*/
  return kk_std_core_exn__exception_box(_x_x264, _ctx);
}

kk_unit_t kk_std_os_file_write_text_file(kk_std_os_path__path path, kk_string_t content, kk_std_core_types__optional create_dir, kk_context_t* _ctx) { /* (path : std/os/path/path, content : string, create-dir : ? bool) -> <exn,fsys> () */ 
  kk_unit_t x_10040 = kk_Unit;
  if (kk_std_core_types__is_Optional(create_dir, _ctx)) {
    kk_box_t _box_x72 = create_dir._cons._Optional.value;
    bool _uniq_create_dir_153 = kk_bool_unbox(_box_x72);
    kk_std_core_types__optional_drop(create_dir, _ctx);
    if (_uniq_create_dir_153) {
      kk_std_os_path__path _x_x220;
      kk_box_t _x_x221;
      kk_box_t _x_x228;
      kk_std_os_path__path _x_x229 = kk_std_os_path__path_dup(path, _ctx); /*std/os/path/path*/
      _x_x228 = kk_std_os_path__path_box(_x_x229, _ctx); /*10000*/
      _x_x221 = kk_std_core_hnd__open_none1(kk_std_os_file_new_write_text_file_fun222(_ctx), _x_x228, _ctx); /*10001*/
      _x_x220 = kk_std_os_path__path_unbox(_x_x221, KK_OWNED, _ctx); /*std/os/path/path*/
      kk_std_os_dir_ensure_dir(_x_x220, _ctx);
    }
    else {
      
    }
  }
  else {
    kk_std_core_types__optional_drop(create_dir, _ctx);
    kk_std_os_path__path _x_x230;
    kk_box_t _x_x231;
    kk_box_t _x_x238;
    kk_std_os_path__path _x_x239 = kk_std_os_path__path_dup(path, _ctx); /*std/os/path/path*/
    _x_x238 = kk_std_os_path__path_box(_x_x239, _ctx); /*10000*/
    _x_x231 = kk_std_core_hnd__open_none1(kk_std_os_file_new_write_text_file_fun232(_ctx), _x_x238, _ctx); /*10001*/
    _x_x230 = kk_std_os_path__path_unbox(_x_x231, KK_OWNED, _ctx); /*std/os/path/path*/
    kk_std_os_dir_ensure_dir(_x_x230, _ctx);
  }
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x240 = kk_std_core_hnd_yield_extend(kk_std_os_file_new_write_text_file_fun241(content, path, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x240); return kk_Unit;
  }
  {
    kk_string_t _x_x1_1_10027;
    kk_box_t _x_x243;
    kk_box_t _x_x247;
    kk_std_os_path__path _x_x248 = kk_std_os_path__path_dup(path, _ctx); /*std/os/path/path*/
    _x_x247 = kk_std_os_path__path_box(_x_x248, _ctx); /*10000*/
    _x_x243 = kk_std_core_hnd__open_none1(kk_std_os_file_new_write_text_file_fun244(_ctx), _x_x247, _ctx); /*10001*/
    _x_x1_1_10027 = kk_string_unbox(_x_x243); /*string*/
    kk_std_core_exn__error _match_x131;
    kk_box_t _x_x249 = kk_std_core_hnd__open_none2(kk_std_os_file_new_write_text_file_fun250(_ctx), kk_string_box(_x_x1_1_10027), kk_string_box(content), _ctx); /*10002*/
    _match_x131 = kk_std_core_exn__error_unbox(_x_x249, KK_OWNED, _ctx); /*error<()>*/
    if (kk_std_core_exn__is_Error(_match_x131, _ctx)) {
      kk_std_core_exn__exception exn = _match_x131._cons.Error.exception;
      kk_std_core_exn__exception_dup(exn, _ctx);
      kk_std_core_exn__error_drop(_match_x131, _ctx);
      kk_string_t _x_x2_0_10031;
      kk_string_t _x_x254;
      kk_define_string_literal(static, _s_x255, 26, "unable to write text file ", _ctx)
      _x_x254 = kk_string_dup(_s_x255, _ctx); /*string*/
      kk_string_t _x_x256;
      kk_box_t _x_x257 = kk_std_core_hnd__open_none1(kk_std_os_file_new_write_text_file_fun258(_ctx), kk_std_os_path__path_box(path, _ctx), _ctx); /*10001*/
      _x_x256 = kk_string_unbox(_x_x257); /*string*/
      _x_x2_0_10031 = kk_std_core_types__lp__plus__plus__rp_(_x_x254, _x_x256, _ctx); /*string*/
      kk_std_core_exn__exception exn_0_10001;
      kk_box_t _x_x262 = kk_std_core_hnd__open_none2(kk_std_os_file_new_write_text_file_fun263(_ctx), kk_std_core_exn__exception_box(exn, _ctx), kk_string_box(_x_x2_0_10031), _ctx); /*10002*/
      exn_0_10001 = kk_std_core_exn__exception_unbox(_x_x262, KK_OWNED, _ctx); /*exception*/
      kk_std_core_hnd__ev ev_10043 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<exn>*/;
      kk_box_t _x_x273;
      {
        struct kk_std_core_hnd_Ev* _con_x274 = kk_std_core_hnd__as_Ev(ev_10043, _ctx);
        kk_box_t _box_x117 = _con_x274->hnd;
        int32_t m = _con_x274->marker;
        kk_std_core_exn__exn h = kk_std_core_exn__exn_unbox(_box_x117, KK_BORROWED, _ctx);
        kk_std_core_exn__exn_dup(h, _ctx);
        kk_std_core_hnd__clause1 _match_x132;
        kk_std_core_hnd__clause1 _brw_x133 = kk_std_core_exn_throw_exn_fs__select(h, _ctx); /*hnd/clause1<exception,10000,exn,10001,10002>*/;
        kk_datatype_ptr_dropn(h, (KK_I32(2)), _ctx);
        _match_x132 = _brw_x133; /*hnd/clause1<exception,10000,exn,10001,10002>*/
        {
          kk_function_t _fun_unbox_x121 = _match_x132.clause;
          _x_x273 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x121, (_fun_unbox_x121, m, ev_10043, kk_std_core_exn__exception_box(exn_0_10001, _ctx), _ctx), _ctx); /*10010*/
        }
      }
      kk_unit_unbox(_x_x273); return kk_Unit;
    }
    {
      kk_std_os_path__path_drop(path, _ctx);
      kk_std_core_exn__error_drop(_match_x131, _ctx);
      kk_Unit; return kk_Unit;
    }
  }
}

// initialization
void kk_std_os_file__init(kk_context_t* _ctx){
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
  kk_std_os_dir__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_os_file__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_os_dir__done(_ctx);
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
