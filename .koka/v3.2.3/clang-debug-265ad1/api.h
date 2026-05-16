#pragma once
#ifndef kk_api_H
#define kk_api_H
// Koka generated module: api, koka version: 3.2.3, platform: 64-bit
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
#include "std_num_float64.h"
#include "std_os_env.h"
#include "std_os_file.h"
#include "std_os_path.h"
#include "hml__types.h"

// type declarations

// type api/cliarg
struct kk_api__cliarg_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_api__cliarg;
struct kk_api_Cliarg {
  struct kk_api__cliarg_s _base;
  kk_string_t arg__name;
  kk_string_t arg__help;
  bool arg__required;
};
static inline kk_api__cliarg kk_api__base_Cliarg(struct kk_api_Cliarg* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_api__cliarg kk_api__new_Cliarg(kk_reuse_t _at, int32_t _cpath, kk_string_t arg__name, kk_string_t arg__help, bool arg__required, kk_context_t* _ctx) {
  struct kk_api_Cliarg* _con = kk_block_alloc_at_as(struct kk_api_Cliarg, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->arg__name = arg__name;
  _con->arg__help = arg__help;
  _con->arg__required = arg__required;
  return kk_api__base_Cliarg(_con, _ctx);
}
static inline struct kk_api_Cliarg* kk_api__as_Cliarg(kk_api__cliarg x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_api_Cliarg*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_api__is_Cliarg(kk_api__cliarg x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_api__cliarg kk_api__cliarg_dup(kk_api__cliarg _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_api__cliarg_drop(kk_api__cliarg _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_api__cliarg_box(kk_api__cliarg _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_api__cliarg kk_api__cliarg_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type api/cliflag
struct kk_api__cliflag_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_api__cliflag;
struct kk_api_Cliflag {
  struct kk_api__cliflag_s _base;
  kk_string_t flag__name;
  kk_string_t flag__short;
  kk_string_t flag__help;
};
static inline kk_api__cliflag kk_api__base_Cliflag(struct kk_api_Cliflag* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_api__cliflag kk_api__new_Cliflag(kk_reuse_t _at, int32_t _cpath, kk_string_t flag__name, kk_string_t flag__short, kk_string_t flag__help, kk_context_t* _ctx) {
  struct kk_api_Cliflag* _con = kk_block_alloc_at_as(struct kk_api_Cliflag, _at, 3 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->flag__name = flag__name;
  _con->flag__short = flag__short;
  _con->flag__help = flag__help;
  return kk_api__base_Cliflag(_con, _ctx);
}
static inline struct kk_api_Cliflag* kk_api__as_Cliflag(kk_api__cliflag x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_api_Cliflag*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_api__is_Cliflag(kk_api__cliflag x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_api__cliflag kk_api__cliflag_dup(kk_api__cliflag _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_api__cliflag_drop(kk_api__cliflag _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_api__cliflag_box(kk_api__cliflag _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_api__cliflag kk_api__cliflag_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type api/clioption
struct kk_api__clioption_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_api__clioption;
struct kk_api_Clioption {
  struct kk_api__clioption_s _base;
  kk_string_t opt__name;
  kk_string_t opt__short;
  kk_string_t opt__help;
  kk_string_t opt__default;
};
static inline kk_api__clioption kk_api__base_Clioption(struct kk_api_Clioption* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_api__clioption kk_api__new_Clioption(kk_reuse_t _at, int32_t _cpath, kk_string_t opt__name, kk_string_t opt__short, kk_string_t opt__help, kk_string_t opt__default, kk_context_t* _ctx) {
  struct kk_api_Clioption* _con = kk_block_alloc_at_as(struct kk_api_Clioption, _at, 4 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->opt__name = opt__name;
  _con->opt__short = opt__short;
  _con->opt__help = opt__help;
  _con->opt__default = opt__default;
  return kk_api__base_Clioption(_con, _ctx);
}
static inline struct kk_api_Clioption* kk_api__as_Clioption(kk_api__clioption x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_api_Clioption*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_api__is_Clioption(kk_api__clioption x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_api__clioption kk_api__clioption_dup(kk_api__clioption _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_api__clioption_drop(kk_api__clioption _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_api__clioption_box(kk_api__clioption _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_api__clioption kk_api__clioption_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type api/cliresult
struct kk_api__cliresult_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_api__cliresult;
struct kk_api_Cliresult {
  struct kk_api__cliresult_s _base;
  kk_std_core_types__list cli__flags;
  kk_std_core_types__list cli__options;
  kk_std_core_types__list cli__positionals;
  kk_string_t cli__command;
  kk_std_core_types__maybe cli__sub;
};
static inline kk_api__cliresult kk_api__base_Cliresult(struct kk_api_Cliresult* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_api__cliresult kk_api__new_Cliresult(kk_reuse_t _at, int32_t _cpath, kk_std_core_types__list cli__flags, kk_std_core_types__list cli__options, kk_std_core_types__list cli__positionals, kk_string_t cli__command, kk_std_core_types__maybe cli__sub, kk_context_t* _ctx) {
  struct kk_api_Cliresult* _con = kk_block_alloc_at_as(struct kk_api_Cliresult, _at, 6 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->cli__flags = cli__flags;
  _con->cli__options = cli__options;
  _con->cli__positionals = cli__positionals;
  _con->cli__command = cli__command;
  _con->cli__sub = cli__sub;
  return kk_api__base_Cliresult(_con, _ctx);
}
static inline struct kk_api_Cliresult* kk_api__as_Cliresult(kk_api__cliresult x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_api_Cliresult*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_api__is_Cliresult(kk_api__cliresult x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_api__cliresult kk_api__cliresult_dup(kk_api__cliresult _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_api__cliresult_drop(kk_api__cliresult _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_api__cliresult_box(kk_api__cliresult _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_api__cliresult kk_api__cliresult_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type api/clioutcome
struct kk_api__clioutcome_s {
  kk_block_t _block;
};
typedef kk_datatype_t kk_api__clioutcome;
struct kk_api_CliError {
  struct kk_api__clioutcome_s _base;
  kk_string_t cli__error__msg;
};
struct kk_api_Parsed {
  struct kk_api__clioutcome_s _base;
  kk_api__cliresult cli__result;
};
static inline kk_api__clioutcome kk_api__new_Help(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(1));
}
static inline kk_api__clioutcome kk_api__new_Version(kk_context_t* _ctx) {
  return kk_datatype_from_tag((kk_tag_t)(2));
}
static inline kk_api__clioutcome kk_api__base_CliError(struct kk_api_CliError* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_api__clioutcome kk_api__new_CliError(kk_reuse_t _at, int32_t _cpath, kk_string_t cli__error__msg, kk_context_t* _ctx) {
  struct kk_api_CliError* _con = kk_block_alloc_at_as(struct kk_api_CliError, _at, 1 /* scan count */, _cpath, (kk_tag_t)(3), _ctx);
  _con->cli__error__msg = cli__error__msg;
  return kk_api__base_CliError(_con, _ctx);
}
static inline struct kk_api_CliError* kk_api__as_CliError(kk_api__clioutcome x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_api_CliError*, x, (kk_tag_t)(3), _ctx);
}
static inline kk_api__clioutcome kk_api__base_Parsed(struct kk_api_Parsed* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_api__clioutcome kk_api__new_Parsed(kk_reuse_t _at, int32_t _cpath, kk_api__cliresult cli__result, kk_context_t* _ctx) {
  struct kk_api_Parsed* _con = kk_block_alloc_at_as(struct kk_api_Parsed, _at, 1 /* scan count */, _cpath, (kk_tag_t)(4), _ctx);
  _con->cli__result = cli__result;
  return kk_api__base_Parsed(_con, _ctx);
}
static inline struct kk_api_Parsed* kk_api__as_Parsed(kk_api__clioutcome x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_api_Parsed*, x, (kk_tag_t)(4), _ctx);
}
static inline bool kk_api__is_Help(kk_api__clioutcome x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(1)));
}
static inline bool kk_api__is_Version(kk_api__clioutcome x, kk_context_t* _ctx) {
  return (kk_datatype_has_singleton_tag(x, (kk_tag_t)(2)));
}
static inline bool kk_api__is_CliError(kk_api__clioutcome x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(3), _ctx));
}
static inline bool kk_api__is_Parsed(kk_api__clioutcome x, kk_context_t* _ctx) {
  return (kk_datatype_has_ptr_tag(x, (kk_tag_t)(4), _ctx));
}
static inline kk_api__clioutcome kk_api__clioutcome_dup(kk_api__clioutcome _x, kk_context_t* _ctx) {
  return kk_datatype_dup(_x, _ctx);
}
static inline void kk_api__clioutcome_drop(kk_api__clioutcome _x, kk_context_t* _ctx) {
  kk_datatype_drop(_x, _ctx);
}
static inline kk_box_t kk_api__clioutcome_box(kk_api__clioutcome _x, kk_context_t* _ctx) {
  return kk_datatype_box(_x);
}
static inline kk_api__clioutcome kk_api__clioutcome_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_unbox(_x);
}

// type api/clispec
struct kk_api__clispec_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_api__clispec;
struct kk_api_Clispec {
  struct kk_api__clispec_s _base;
  kk_string_t app__name;
  kk_string_t app__version;
  kk_string_t app__about;
  kk_std_core_types__list app__flags;
  kk_std_core_types__list app__options;
  kk_std_core_types__list app__args;
  kk_std_core_types__list app__commands;
};
static inline kk_api__clispec kk_api__base_Clispec(struct kk_api_Clispec* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_api__clispec kk_api__new_Clispec(kk_reuse_t _at, int32_t _cpath, kk_string_t app__name, kk_string_t app__version, kk_string_t app__about, kk_std_core_types__list app__flags, kk_std_core_types__list app__options, kk_std_core_types__list app__args, kk_std_core_types__list app__commands, kk_context_t* _ctx) {
  struct kk_api_Clispec* _con = kk_block_alloc_at_as(struct kk_api_Clispec, _at, 7 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->app__name = app__name;
  _con->app__version = app__version;
  _con->app__about = app__about;
  _con->app__flags = app__flags;
  _con->app__options = app__options;
  _con->app__args = app__args;
  _con->app__commands = app__commands;
  return kk_api__base_Clispec(_con, _ctx);
}
static inline struct kk_api_Clispec* kk_api__as_Clispec(kk_api__clispec x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_api_Clispec*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_api__is_Clispec(kk_api__clispec x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_api__clispec kk_api__clispec_dup(kk_api__clispec _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_api__clispec_drop(kk_api__clispec _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_api__clispec_box(kk_api__clispec _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_api__clispec kk_api__clispec_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type api/hica-brk
struct kk_api__hica_brk_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_api__hica_brk;
struct kk_api__Hnd_hica_brk {
  struct kk_api__hica_brk_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause0 _ctl_hica_break;
};
static inline kk_api__hica_brk kk_api__base_Hnd_hica_brk(struct kk_api__Hnd_hica_brk* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_api__hica_brk kk_api__new_Hnd_hica_brk(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause0 _ctl_hica_break, kk_context_t* _ctx) {
  struct kk_api__Hnd_hica_brk* _con = kk_block_alloc_at_as(struct kk_api__Hnd_hica_brk, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_ctl_hica_break = _ctl_hica_break;
  return kk_api__base_Hnd_hica_brk(_con, _ctx);
}
static inline struct kk_api__Hnd_hica_brk* kk_api__as_Hnd_hica_brk(kk_api__hica_brk x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_api__Hnd_hica_brk*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_api__is_Hnd_hica_brk(kk_api__hica_brk x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_api__hica_brk kk_api__hica_brk_dup(kk_api__hica_brk _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_api__hica_brk_drop(kk_api__hica_brk _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_api__hica_brk_box(kk_api__hica_brk _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_api__hica_brk kk_api__hica_brk_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type api/parseraw
struct kk_api__parseraw_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_api__parseraw;
struct kk_api_Parseraw {
  struct kk_api__parseraw_s _base;
  kk_string_t raw__error;
  kk_std_core_types__list raw__flags;
  kk_std_core_types__list raw__options;
  kk_std_core_types__list raw__positionals;
  kk_string_t raw__subcmd;
  kk_std_core_types__list raw__sub__args;
};
static inline kk_api__parseraw kk_api__base_Parseraw(struct kk_api_Parseraw* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_api__parseraw kk_api__new_Parseraw(kk_reuse_t _at, int32_t _cpath, kk_string_t raw__error, kk_std_core_types__list raw__flags, kk_std_core_types__list raw__options, kk_std_core_types__list raw__positionals, kk_string_t raw__subcmd, kk_std_core_types__list raw__sub__args, kk_context_t* _ctx) {
  struct kk_api_Parseraw* _con = kk_block_alloc_at_as(struct kk_api_Parseraw, _at, 6 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->raw__error = raw__error;
  _con->raw__flags = raw__flags;
  _con->raw__options = raw__options;
  _con->raw__positionals = raw__positionals;
  _con->raw__subcmd = raw__subcmd;
  _con->raw__sub__args = raw__sub__args;
  return kk_api__base_Parseraw(_con, _ctx);
}
static inline struct kk_api_Parseraw* kk_api__as_Parseraw(kk_api__parseraw x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_api_Parseraw*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_api__is_Parseraw(kk_api__parseraw x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_api__parseraw kk_api__parseraw_dup(kk_api__parseraw _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_api__parseraw_drop(kk_api__parseraw _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_api__parseraw_box(kk_api__parseraw _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_api__parseraw kk_api__parseraw_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:hica-brk` type.

static inline kk_integer_t kk_api_hica_brk_fs__cfc(kk_api__hica_brk _this, kk_context_t* _ctx) { /* forall<e,a> (hica-brk<e,a>) -> int */ 
  {
    struct kk_api__Hnd_hica_brk* _con_x3157 = kk_api__as_Hnd_hica_brk(_this, _ctx);
    kk_integer_t _x = _con_x3157->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}

extern kk_std_core_hnd__htag kk_api_hica_brk_fs__tag;

kk_box_t kk_api_hica_brk_fs__handle(kk_api__hica_brk hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : hica-brk<e,b>, ret : (res : a) -> e b, action : () -> <hica-brk|e> a) -> e b */ 
 
// Automatically generated. Retrieves the `@ctl-hica-break` constructor field of the `:hica-brk` type.

static inline kk_std_core_hnd__clause0 kk_api_hica_brk_fs__ctl_hica_break(kk_api__hica_brk _this, kk_context_t* _ctx) { /* forall<e,a,b> (hica-brk<e,a>) -> hnd/clause0<b,hica-brk,e,a> */ 
  {
    struct kk_api__Hnd_hica_brk* _con_x3161 = kk_api__as_Hnd_hica_brk(_this, _ctx);
    kk_std_core_hnd__clause0 _x = _con_x3161->_ctl_hica_break;
    return kk_std_core_hnd__clause0_dup(_x, _ctx);
  }
}
 
// select `hica-break` operation out of effect `:hica-brk`

static inline kk_std_core_hnd__clause0 kk_api_hica_break_fs__select(kk_api__hica_brk hnd, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : hica-brk<e,b>) -> hnd/clause0<a,hica-brk,e,b> */ 
  {
    struct kk_api__Hnd_hica_brk* _con_x3162 = kk_api__as_Hnd_hica_brk(hnd, _ctx);
    kk_std_core_hnd__clause0 _ctl_hica_break = _con_x3162->_ctl_hica_break;
    return kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
  }
}
 
// Call the `ctl hica-break` operation of the effect `:hica-brk`

static inline kk_box_t kk_api_hica_break(kk_context_t* _ctx) { /* forall<a> () -> hica-brk a */ 
  kk_std_core_hnd__ev ev_11182 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<api/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x3163 = kk_std_core_hnd__as_Ev(ev_11182, _ctx);
    kk_box_t _box_x8 = _con_x3163->hnd;
    int32_t m = _con_x3163->marker;
    kk_api__hica_brk h = kk_api__hica_brk_unbox(_box_x8, KK_BORROWED, _ctx);
    kk_api__hica_brk_dup(h, _ctx);
    {
      struct kk_api__Hnd_hica_brk* _con_x3164 = kk_api__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x3164->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x3164->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t f = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), f, (f, m, ev_11182, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_api_hc_assert(bool b, kk_context_t* _ctx); /* (b : bool) -> exn () */ 
 
// Automatically generated. Tests for the `Help` constructor of the `:clioutcome` type.

static inline bool kk_api_is_help(kk_api__clioutcome clioutcome, kk_context_t* _ctx) { /* (clioutcome : clioutcome) -> bool */ 
  if (kk_api__is_Help(clioutcome, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Version` constructor of the `:clioutcome` type.

static inline bool kk_api_is_version(kk_api__clioutcome clioutcome, kk_context_t* _ctx) { /* (clioutcome : clioutcome) -> bool */ 
  if (kk_api__is_Version(clioutcome, _ctx)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `CliError` constructor of the `:clioutcome` type.

static inline bool kk_api_is_cliError(kk_api__clioutcome clioutcome, kk_context_t* _ctx) { /* (clioutcome : clioutcome) -> bool */ 
  if (kk_api__is_CliError(clioutcome, _ctx)) {
    struct kk_api_CliError* _con_x3171 = kk_api__as_CliError(clioutcome, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Parsed` constructor of the `:clioutcome` type.

static inline bool kk_api_is_parsed(kk_api__clioutcome clioutcome, kk_context_t* _ctx) { /* (clioutcome : clioutcome) -> bool */ 
  if (kk_api__is_Parsed(clioutcome, _ctx)) {
    struct kk_api_Parsed* _con_x3172 = kk_api__as_Parsed(clioutcome, _ctx);
    kk_api__cliresult _pat_0 = _con_x3172->cli__result;
    struct kk_api_Cliresult* _con_x3173 = kk_api__as_Cliresult(_pat_0, _ctx);
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Retrieves the `flag_name` constructor field of the `:cliflag` type.

static inline kk_string_t kk_api_cliflag_fs_flag__name(kk_api__cliflag cliflag, kk_context_t* _ctx) { /* (cliflag : cliflag) -> string */ 
  {
    struct kk_api_Cliflag* _con_x3174 = kk_api__as_Cliflag(cliflag, _ctx);
    kk_string_t _x = _con_x3174->flag__name;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `flag_short` constructor field of the `:cliflag` type.

static inline kk_string_t kk_api_cliflag_fs_flag__short(kk_api__cliflag cliflag, kk_context_t* _ctx) { /* (cliflag : cliflag) -> string */ 
  {
    struct kk_api_Cliflag* _con_x3175 = kk_api__as_Cliflag(cliflag, _ctx);
    kk_string_t _x = _con_x3175->flag__short;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `flag_help` constructor field of the `:cliflag` type.

static inline kk_string_t kk_api_cliflag_fs_flag__help(kk_api__cliflag cliflag, kk_context_t* _ctx) { /* (cliflag : cliflag) -> string */ 
  {
    struct kk_api_Cliflag* _con_x3176 = kk_api__as_Cliflag(cliflag, _ctx);
    kk_string_t _x = _con_x3176->flag__help;
    return kk_string_dup(_x, _ctx);
  }
}

kk_api__cliflag kk_api_cliflag_fs__copy(kk_api__cliflag _this, kk_std_core_types__optional flag__name, kk_std_core_types__optional flag__short, kk_std_core_types__optional flag__help, kk_context_t* _ctx); /* (cliflag, flag_name : ? string, flag_short : ? string, flag_help : ? string) -> cliflag */ 

kk_string_t kk_api_cliflag_fs_show(kk_api__cliflag p, kk_context_t* _ctx); /* (p : cliflag) -> string */ 
 
// Automatically generated. Retrieves the `opt_name` constructor field of the `:clioption` type.

static inline kk_string_t kk_api_clioption_fs_opt__name(kk_api__clioption clioption, kk_context_t* _ctx) { /* (clioption : clioption) -> string */ 
  {
    struct kk_api_Clioption* _con_x3211 = kk_api__as_Clioption(clioption, _ctx);
    kk_string_t _x = _con_x3211->opt__name;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `opt_short` constructor field of the `:clioption` type.

static inline kk_string_t kk_api_clioption_fs_opt__short(kk_api__clioption clioption, kk_context_t* _ctx) { /* (clioption : clioption) -> string */ 
  {
    struct kk_api_Clioption* _con_x3212 = kk_api__as_Clioption(clioption, _ctx);
    kk_string_t _x = _con_x3212->opt__short;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `opt_help` constructor field of the `:clioption` type.

static inline kk_string_t kk_api_clioption_fs_opt__help(kk_api__clioption clioption, kk_context_t* _ctx) { /* (clioption : clioption) -> string */ 
  {
    struct kk_api_Clioption* _con_x3213 = kk_api__as_Clioption(clioption, _ctx);
    kk_string_t _x = _con_x3213->opt__help;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `opt_default` constructor field of the `:clioption` type.

static inline kk_string_t kk_api_clioption_fs_opt__default(kk_api__clioption clioption, kk_context_t* _ctx) { /* (clioption : clioption) -> string */ 
  {
    struct kk_api_Clioption* _con_x3214 = kk_api__as_Clioption(clioption, _ctx);
    kk_string_t _x = _con_x3214->opt__default;
    return kk_string_dup(_x, _ctx);
  }
}

kk_api__clioption kk_api_clioption_fs__copy(kk_api__clioption _this, kk_std_core_types__optional opt__name, kk_std_core_types__optional opt__short, kk_std_core_types__optional opt__help, kk_std_core_types__optional opt__default, kk_context_t* _ctx); /* (clioption, opt_name : ? string, opt_short : ? string, opt_help : ? string, opt_default : ? string) -> clioption */ 

kk_string_t kk_api_clioption_fs_show(kk_api__clioption p, kk_context_t* _ctx); /* (p : clioption) -> string */ 
 
// Automatically generated. Retrieves the `arg_name` constructor field of the `:cliarg` type.

static inline kk_string_t kk_api_cliarg_fs_arg__name(kk_api__cliarg cliarg, kk_context_t* _ctx) { /* (cliarg : cliarg) -> string */ 
  {
    struct kk_api_Cliarg* _con_x3260 = kk_api__as_Cliarg(cliarg, _ctx);
    kk_string_t _x = _con_x3260->arg__name;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `arg_help` constructor field of the `:cliarg` type.

static inline kk_string_t kk_api_cliarg_fs_arg__help(kk_api__cliarg cliarg, kk_context_t* _ctx) { /* (cliarg : cliarg) -> string */ 
  {
    struct kk_api_Cliarg* _con_x3261 = kk_api__as_Cliarg(cliarg, _ctx);
    kk_string_t _x = _con_x3261->arg__help;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `arg_required` constructor field of the `:cliarg` type.

static inline bool kk_api_cliarg_fs_arg__required(kk_api__cliarg cliarg, kk_context_t* _ctx) { /* (cliarg : cliarg) -> bool */ 
  {
    struct kk_api_Cliarg* _con_x3262 = kk_api__as_Cliarg(cliarg, _ctx);
    bool _x = _con_x3262->arg__required;
    return _x;
  }
}

kk_api__cliarg kk_api_cliarg_fs__copy(kk_api__cliarg _this, kk_std_core_types__optional arg__name, kk_std_core_types__optional arg__help, kk_std_core_types__optional arg__required, kk_context_t* _ctx); /* (cliarg, arg_name : ? string, arg_help : ? string, arg_required : ? bool) -> cliarg */ 
 
// Automatically generated. Retrieves the `app_name` constructor field of the `:clispec` type.

static inline kk_string_t kk_api_clispec_fs_app__name(kk_api__clispec clispec, kk_context_t* _ctx) { /* (clispec : clispec) -> string */ 
  {
    struct kk_api_Clispec* _con_x3269 = kk_api__as_Clispec(clispec, _ctx);
    kk_string_t _x = _con_x3269->app__name;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `app_version` constructor field of the `:clispec` type.

static inline kk_string_t kk_api_clispec_fs_app__version(kk_api__clispec clispec, kk_context_t* _ctx) { /* (clispec : clispec) -> string */ 
  {
    struct kk_api_Clispec* _con_x3270 = kk_api__as_Clispec(clispec, _ctx);
    kk_string_t _x = _con_x3270->app__version;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `app_about` constructor field of the `:clispec` type.

static inline kk_string_t kk_api_clispec_fs_app__about(kk_api__clispec clispec, kk_context_t* _ctx) { /* (clispec : clispec) -> string */ 
  {
    struct kk_api_Clispec* _con_x3271 = kk_api__as_Clispec(clispec, _ctx);
    kk_string_t _x = _con_x3271->app__about;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `app_flags` constructor field of the `:clispec` type.

static inline kk_std_core_types__list kk_api_clispec_fs_app__flags(kk_api__clispec clispec, kk_context_t* _ctx) { /* (clispec : clispec) -> list<cliflag> */ 
  {
    struct kk_api_Clispec* _con_x3272 = kk_api__as_Clispec(clispec, _ctx);
    kk_std_core_types__list _x = _con_x3272->app__flags;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `app_options` constructor field of the `:clispec` type.

static inline kk_std_core_types__list kk_api_clispec_fs_app__options(kk_api__clispec clispec, kk_context_t* _ctx) { /* (clispec : clispec) -> list<clioption> */ 
  {
    struct kk_api_Clispec* _con_x3273 = kk_api__as_Clispec(clispec, _ctx);
    kk_std_core_types__list _x = _con_x3273->app__options;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `app_args` constructor field of the `:clispec` type.

static inline kk_std_core_types__list kk_api_clispec_fs_app__args(kk_api__clispec clispec, kk_context_t* _ctx) { /* (clispec : clispec) -> list<cliarg> */ 
  {
    struct kk_api_Clispec* _con_x3274 = kk_api__as_Clispec(clispec, _ctx);
    kk_std_core_types__list _x = _con_x3274->app__args;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `app_commands` constructor field of the `:clispec` type.

static inline kk_std_core_types__list kk_api_clispec_fs_app__commands(kk_api__clispec clispec, kk_context_t* _ctx) { /* (clispec : clispec) -> list<(string, clispec)> */ 
  {
    struct kk_api_Clispec* _con_x3275 = kk_api__as_Clispec(clispec, _ctx);
    kk_std_core_types__list _x = _con_x3275->app__commands;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}

kk_api__clispec kk_api_clispec_fs__copy(kk_api__clispec _this, kk_std_core_types__optional app__name, kk_std_core_types__optional app__version, kk_std_core_types__optional app__about, kk_std_core_types__optional app__flags, kk_std_core_types__optional app__options, kk_std_core_types__optional app__args, kk_std_core_types__optional app__commands, kk_context_t* _ctx); /* (clispec, app_name : ? string, app_version : ? string, app_about : ? string, app_flags : ? (list<cliflag>), app_options : ? (list<clioption>), app_args : ? (list<cliarg>), app_commands : ? (list<(string, clispec)>)) -> clispec */ 
 
// Automatically generated. Retrieves the `cli_flags` constructor field of the `:cliresult` type.

static inline kk_std_core_types__list kk_api_cliresult_fs_cli__flags(kk_api__cliresult cliresult, kk_context_t* _ctx) { /* (cliresult : cliresult) -> list<string> */ 
  {
    struct kk_api_Cliresult* _con_x3290 = kk_api__as_Cliresult(cliresult, _ctx);
    kk_std_core_types__list _x = _con_x3290->cli__flags;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `cli_options` constructor field of the `:cliresult` type.

static inline kk_std_core_types__list kk_api_cliresult_fs_cli__options(kk_api__cliresult cliresult, kk_context_t* _ctx) { /* (cliresult : cliresult) -> list<(string, string)> */ 
  {
    struct kk_api_Cliresult* _con_x3291 = kk_api__as_Cliresult(cliresult, _ctx);
    kk_std_core_types__list _x = _con_x3291->cli__options;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `cli_positionals` constructor field of the `:cliresult` type.

static inline kk_std_core_types__list kk_api_cliresult_fs_cli__positionals(kk_api__cliresult cliresult, kk_context_t* _ctx) { /* (cliresult : cliresult) -> list<string> */ 
  {
    struct kk_api_Cliresult* _con_x3292 = kk_api__as_Cliresult(cliresult, _ctx);
    kk_std_core_types__list _x = _con_x3292->cli__positionals;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `cli_command` constructor field of the `:cliresult` type.

static inline kk_string_t kk_api_cliresult_fs_cli__command(kk_api__cliresult cliresult, kk_context_t* _ctx) { /* (cliresult : cliresult) -> string */ 
  {
    struct kk_api_Cliresult* _con_x3293 = kk_api__as_Cliresult(cliresult, _ctx);
    kk_string_t _x = _con_x3293->cli__command;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `cli_sub` constructor field of the `:cliresult` type.

static inline kk_std_core_types__maybe kk_api_cliresult_fs_cli__sub(kk_api__cliresult cliresult, kk_context_t* _ctx) { /* (cliresult : cliresult) -> maybe<cliresult> */ 
  {
    struct kk_api_Cliresult* _con_x3294 = kk_api__as_Cliresult(cliresult, _ctx);
    kk_std_core_types__maybe _x = _con_x3294->cli__sub;
    return kk_std_core_types__maybe_dup(_x, _ctx);
  }
}

kk_api__cliresult kk_api_cliresult_fs__copy(kk_api__cliresult _this, kk_std_core_types__optional cli__flags, kk_std_core_types__optional cli__options, kk_std_core_types__optional cli__positionals, kk_std_core_types__optional cli__command, kk_std_core_types__optional cli__sub, kk_context_t* _ctx); /* (cliresult, cli_flags : ? (list<string>), cli_options : ? (list<(string, string)>), cli_positionals : ? (list<string>), cli_command : ? string, cli_sub : ? (maybe<cliresult>)) -> cliresult */ 
 
// Automatically generated. Retrieves the `raw_error` constructor field of the `:parseraw` type.

static inline kk_string_t kk_api_parseraw_fs_raw__error(kk_api__parseraw parseraw, kk_context_t* _ctx) { /* (parseraw : parseraw) -> string */ 
  {
    struct kk_api_Parseraw* _con_x3305 = kk_api__as_Parseraw(parseraw, _ctx);
    kk_string_t _x = _con_x3305->raw__error;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `raw_flags` constructor field of the `:parseraw` type.

static inline kk_std_core_types__list kk_api_parseraw_fs_raw__flags(kk_api__parseraw parseraw, kk_context_t* _ctx) { /* (parseraw : parseraw) -> list<string> */ 
  {
    struct kk_api_Parseraw* _con_x3306 = kk_api__as_Parseraw(parseraw, _ctx);
    kk_std_core_types__list _x = _con_x3306->raw__flags;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `raw_options` constructor field of the `:parseraw` type.

static inline kk_std_core_types__list kk_api_parseraw_fs_raw__options(kk_api__parseraw parseraw, kk_context_t* _ctx) { /* (parseraw : parseraw) -> list<(string, string)> */ 
  {
    struct kk_api_Parseraw* _con_x3307 = kk_api__as_Parseraw(parseraw, _ctx);
    kk_std_core_types__list _x = _con_x3307->raw__options;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `raw_positionals` constructor field of the `:parseraw` type.

static inline kk_std_core_types__list kk_api_parseraw_fs_raw__positionals(kk_api__parseraw parseraw, kk_context_t* _ctx) { /* (parseraw : parseraw) -> list<string> */ 
  {
    struct kk_api_Parseraw* _con_x3308 = kk_api__as_Parseraw(parseraw, _ctx);
    kk_std_core_types__list _x = _con_x3308->raw__positionals;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `raw_subcmd` constructor field of the `:parseraw` type.

static inline kk_string_t kk_api_parseraw_fs_raw__subcmd(kk_api__parseraw parseraw, kk_context_t* _ctx) { /* (parseraw : parseraw) -> string */ 
  {
    struct kk_api_Parseraw* _con_x3309 = kk_api__as_Parseraw(parseraw, _ctx);
    kk_string_t _x = _con_x3309->raw__subcmd;
    return kk_string_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `raw_sub_args` constructor field of the `:parseraw` type.

static inline kk_std_core_types__list kk_api_parseraw_fs_raw__sub__args(kk_api__parseraw parseraw, kk_context_t* _ctx) { /* (parseraw : parseraw) -> list<string> */ 
  {
    struct kk_api_Parseraw* _con_x3310 = kk_api__as_Parseraw(parseraw, _ctx);
    kk_std_core_types__list _x = _con_x3310->raw__sub__args;
    return kk_std_core_types__list_dup(_x, _ctx);
  }
}

kk_string_t kk_api_cliarg_fs_show(kk_api__cliarg p, kk_context_t* _ctx); /* (p : cliarg) -> string */ 

kk_string_t kk_api_cliresult_fs_show(kk_api__cliresult p, kk_context_t* _ctx); /* (p : cliresult) -> div string */ 

kk_string_t kk_api_clioutcome_fs_show(kk_api__clioutcome v, kk_context_t* _ctx); /* (v : clioutcome) -> div string */ 

kk_string_t kk_api_clispec_fs_show(kk_api__clispec p, kk_context_t* _ctx); /* (p : clispec) -> div string */ 

kk_string_t kk_api_parseraw_fs_show(kk_api__parseraw p, kk_context_t* _ctx); /* (p : parseraw) -> string */ 

kk_api__parseraw kk_api_parseraw_fs__copy(kk_api__parseraw _this, kk_std_core_types__optional raw__error, kk_std_core_types__optional raw__flags, kk_std_core_types__optional raw__options, kk_std_core_types__optional raw__positionals, kk_std_core_types__optional raw__subcmd, kk_std_core_types__optional raw__sub__args, kk_context_t* _ctx); /* (parseraw, raw_error : ? string, raw_flags : ? (list<string>), raw_options : ? (list<(string, string)>), raw_positionals : ? (list<string>), raw_subcmd : ? string, raw_sub_args : ? (list<string>)) -> parseraw */ 

static inline kk_integer_t kk_api_hc__abs(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x2983 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2983) {
    return kk_integer_sub((kk_integer_from_small(0)),n,kk_context());
  }
  {
    return n;
  }
}

static inline kk_integer_t kk_api_hc__min(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x2982 = kk_integer_lt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x2982) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

static inline kk_integer_t kk_api_hc__max(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  bool _match_x2981 = kk_integer_gt_borrow(a,b,kk_context()); /*bool*/;
  if (_match_x2981) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  {
    kk_integer_drop(a, _ctx);
    return b;
  }
}

kk_integer_t kk_api_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (v : int, lo : int, hi : int) -> int */ 

kk_integer_t kk_api_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_api_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx); /* (a : int, b : int) -> div int */ 

kk_integer_t kk_api_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx); /* (base : int, exp : int) -> div int */ 

kk_integer_t kk_api_hc__sign(kk_integer_t n, kk_context_t* _ctx); /* (n : int) -> int */ 

static inline kk_integer_t kk_api_hc__add(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  return kk_integer_add(a,b,kk_context());
}

static inline kk_integer_t kk_api_hc__sub(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  return kk_integer_sub(a,b,kk_context());
}

static inline kk_integer_t kk_api_hc__mul(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  return kk_integer_mul(a,b,kk_context());
}

static inline kk_integer_t kk_api_hc__div(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  return kk_integer_div(a,b,kk_context());
}

static inline kk_integer_t kk_api_hc__mod(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> int */ 
  return kk_integer_mod(a,b,kk_context());
}

static inline kk_integer_t kk_api_hc__neg(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  return kk_integer_sub((kk_integer_from_small(0)),n,kk_context());
}

static inline bool kk_api_hc__lt(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> bool */ 
  bool _brw_x2970 = kk_integer_lt_borrow(a,b,kk_context()); /*bool*/;
  kk_integer_drop(a, _ctx);
  kk_integer_drop(b, _ctx);
  return _brw_x2970;
}

static inline bool kk_api_hc__le(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> bool */ 
  bool _brw_x2969 = kk_integer_lte_borrow(a,b,kk_context()); /*bool*/;
  kk_integer_drop(a, _ctx);
  kk_integer_drop(b, _ctx);
  return _brw_x2969;
}

static inline bool kk_api_hc__gt(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> bool */ 
  bool _brw_x2968 = kk_integer_gt_borrow(a,b,kk_context()); /*bool*/;
  kk_integer_drop(a, _ctx);
  kk_integer_drop(b, _ctx);
  return _brw_x2968;
}

static inline bool kk_api_hc__ge(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> bool */ 
  bool _brw_x2967 = kk_integer_gte_borrow(a,b,kk_context()); /*bool*/;
  kk_integer_drop(a, _ctx);
  kk_integer_drop(b, _ctx);
  return _brw_x2967;
}

static inline bool kk_api_hc__not__(bool b, kk_context_t* _ctx) { /* (b : bool) -> bool */ 
  if (b) {
    return false;
  }
  {
    return true;
  }
}

static inline bool kk_api_hc__and__(bool a, bool b, kk_context_t* _ctx) { /* (a : bool, b : bool) -> bool */ 
  if (a) {
    return b;
  }
  {
    return false;
  }
}

static inline bool kk_api_hc__or__(bool a, bool b, kk_context_t* _ctx) { /* (a : bool, b : bool) -> bool */ 
  if (a) {
    return true;
  }
  {
    return b;
  }
}

static inline bool kk_api_hc__is__positive(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> bool */ 
  bool _brw_x2966 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(n, _ctx);
  return _brw_x2966;
}

static inline bool kk_api_hc__is__negative(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> bool */ 
  bool _brw_x2965 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(n, _ctx);
  return _brw_x2965;
}

static inline bool kk_api_hc__is__zero(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> bool */ 
  bool _brw_x2964 = kk_integer_eq_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(n, _ctx);
  return _brw_x2964;
}

static inline bool kk_api_hc__is__even(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> bool */ 
  kk_integer_t _brw_x2962 = kk_integer_mod(n,(kk_integer_from_small(2)),kk_context()); /*int*/;
  bool _brw_x2963 = kk_integer_eq_borrow(_brw_x2962,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2962, _ctx);
  return _brw_x2963;
}

static inline bool kk_api_hc__is__odd(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> bool */ 
  kk_integer_t _brw_x2960 = kk_integer_mod(n,(kk_integer_from_small(2)),kk_context()); /*int*/;
  bool _brw_x2961 = kk_integer_neq_borrow(_brw_x2960,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2960, _ctx);
  return _brw_x2961;
}

static inline kk_box_t kk_api_hc__identity(kk_box_t x, kk_context_t* _ctx) { /* forall<a> (x : a) -> a */ 
  return x;
}

kk_std_core_types__list kk_api_hc__intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx); /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 

kk_integer_t kk_api_hc__sum(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<int>) -> int */ 

kk_integer_t kk_api_hc__product(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<int>) -> int */ 

kk_std_core_types__list kk_api__mlift_hc__scan_11116(kk_box_t init, kk_std_core_types__list _y_x10742, kk_context_t* _ctx); /* forall<a,e> (init : a, list<a>) -> e list<a> */ 

kk_std_core_types__list kk_api__mlift_hc__scan_11117(kk_function_t f, kk_box_t init_0, kk_std_core_types__list rest, kk_box_t _y_x10741, kk_context_t* _ctx); /* forall<a,b,e> (f : (b, a) -> e b, init : b, rest : list<a>, b) -> e list<b> */ 

kk_std_core_types__list kk_api_hc__scan(kk_std_core_types__list xs, kk_box_t init_1, kk_function_t f_0, kk_context_t* _ctx); /* forall<a,b,e> (xs : list<a>, init : b, f : (b, a) -> e b) -> e list<b> */ 

kk_std_core_types__list kk_api_hc__zip__with(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f, kk_context_t* _ctx); /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 

kk_std_core_types__list kk_api_hc__unique(kk_std_core_types__list xs, kk_context_t* _ctx); /* (xs : list<int>) -> list<int> */ 

kk_std_core_types__list kk_api_hc__chunks(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx); /* forall<a> (xs : list<a>, n : int) -> div list<list<a>> */ 

static inline bool kk_api_hc__is__empty(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_integer_t _brw_x2949 = kk_std_core_string_chars_fs_count(s, _ctx); /*int*/;
  bool _brw_x2950 = kk_integer_eq_borrow(_brw_x2949,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2949, _ctx);
  return _brw_x2950;
}

static inline bool kk_api_hc__is__blank(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10083;
  kk_string_t _x_x3643 = kk_string_trim_left(s,kk_context()); /*string*/
  s_0_10083 = kk_string_trim_right(_x_x3643,kk_context()); /*string*/
  kk_integer_t _brw_x2947 = kk_std_core_string_chars_fs_count(s_0_10083, _ctx); /*int*/;
  bool _brw_x2948 = kk_integer_eq_borrow(_brw_x2947,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2947, _ctx);
  return _brw_x2948;
}

kk_std_core_types__list kk_api_hc__words(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

kk_std_core_types__list kk_api_hc__lines(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> list<string> */ 

static inline kk_string_t kk_api_hc__unwords(kk_std_core_types__list ws, kk_context_t* _ctx) { /* (ws : list<string>) -> string */ 
  kk_string_t _x_x3664;
  kk_define_string_literal(static, _s_x3665, 1, " ", _ctx)
  _x_x3664 = kk_string_dup(_s_x3665, _ctx); /*string*/
  return kk_std_core_list_joinsep(ws, _x_x3664, _ctx);
}

static inline kk_string_t kk_api_hc__unlines(kk_std_core_types__list ls, kk_context_t* _ctx) { /* (ls : list<string>) -> string */ 
  kk_string_t _x_x3666;
  kk_define_string_literal(static, _s_x3667, 1, "\n", _ctx)
  _x_x3666 = kk_string_dup(_s_x3667, _ctx); /*string*/
  return kk_std_core_list_joinsep(ls, _x_x3666, _ctx);
}

kk_integer_t kk_api_hc__count__substr(kk_string_t s, kk_string_t hc__sub_0, kk_context_t* _ctx); /* (s : string, hc_sub : string) -> int */ 

kk_string_t kk_api_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx); /* (s : string, n : int) -> div string */ 

kk_string_t kk_api_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_api_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

kk_string_t kk_api_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx); /* (s : string, width : int, ch : string) -> div string */ 

static inline kk_string_t kk_api_hc__surround(kk_string_t s, kk_string_t wrap, kk_context_t* _ctx) { /* (s : string, wrap : string) -> string */ 
  kk_string_t _x_x3691;
  kk_string_t _x_x3692 = kk_string_dup(wrap, _ctx); /*string*/
  _x_x3691 = kk_std_core_types__lp__plus__plus__rp_(_x_x3692, s, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3691, wrap, _ctx);
}

kk_string_t kk_api_hc__capitalise(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> string */ 

kk_string_t kk_api_hc__capwords(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> string */ 

static inline kk_string_t kk_api_hc__shout(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  kk_string_t _x_x3709 = kk_std_core_string_to_upper(s, _ctx); /*string*/
  kk_string_t _x_x3710;
  kk_define_string_literal(static, _s_x3711, 1, "!", _ctx)
  _x_x3710 = kk_string_dup(_s_x3711, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3709, _x_x3710, _ctx);
}

kk_string_t kk_api_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx); /* (s : string, pre : string) -> string */ 

kk_string_t kk_api_hc__removesuffix(kk_string_t s, kk_string_t suf, kk_context_t* _ctx); /* (s : string, suf : string) -> string */ 

bool kk_api_hc__all__digits(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

kk_std_core_types__maybe kk_api_hc__parse__part(kk_string_t s, kk_integer_t start, kk_integer_t len, kk_context_t* _ctx); /* (s : string, start : int, len : int) -> maybe<int> */ 

bool kk_api_hc__in__range(kk_integer_t n, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx); /* (n : int, lo : int, hi : int) -> bool */ 

kk_integer_t kk_api_hc__days__in__month(kk_integer_t year, kk_integer_t month, kk_context_t* _ctx); /* (year : int, month : int) -> int */ 

bool kk_api_hc__is__valid__date(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_api_hc__is__valid__time__short(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_api_hc__is__valid__time__full(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_api_hc__is__valid__time(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_api_hc__is__valid__offset(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_api_hc__check__z__offset(kk_string_t rest, kk_context_t* _ctx); /* (rest : string) -> bool */ 

bool kk_api_hc__check__numeric__offset(kk_string_t rest, kk_context_t* _ctx); /* (rest : string) -> bool */ 

bool kk_api_hc__is__iso__datetime(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

bool kk_api_hc__is__local__datetime(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> bool */ 

static inline bool kk_api_hc__is__local__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  return kk_api_hc__is__valid__date(s, _ctx);
}

static inline bool kk_api_hc__is__local__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  return kk_api_hc__is__valid__time(s, _ctx);
}

kk_std_core_types__either kk_api_hc__date__parts(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> either<string,(int, int, int)> */ 

kk_std_core_types__either kk_api_hc__time__parts(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> either<string,(int, int, int)> */ 

kk_std_core_types__either kk_api_hc__datetime__date(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> either<string,string> */ 

kk_string_t kk_api_hc__strip__offset(kk_string_t rest, kk_context_t* _ctx); /* (rest : string) -> string */ 

kk_std_core_types__either kk_api_hc__datetime__time(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> either<string,string> */ 

kk_std_core_types__maybe kk_api_hc__datetime__offset(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> maybe<string> */ 

kk_string_t kk_api_hc__datetime__kind(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> string */ 

kk_integer_t kk_api_hc__date__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx); /* (d1 : string, d2 : string) -> int */ 

kk_integer_t kk_api_hc__time__cmp(kk_string_t t1, kk_string_t t2, kk_context_t* _ctx); /* (t1 : string, t2 : string) -> int */ 

kk_integer_t kk_api_hc__datetime__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx); /* (d1 : string, d2 : string) -> int */ 

bool kk_api_hc__is__before(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx); /* (d1 : string, d2 : string) -> bool */ 

kk_std_core_types__either kk_api_hc__offset__to__minutes(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> either<string,int> */ 

kk_integer_t kk_api_hc__list__int__nth(kk_std_core_types__list xs, kk_integer_t i, kk_context_t* _ctx); /* (xs : list<int>, i : int) -> div int */ 

kk_std_core_types__either kk_api_hc__day__of__week(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> div either<string,string> */ 

static inline kk_api__clispec kk_api_hc__cli(kk_string_t name, kk_string_t version, kk_string_t about, kk_context_t* _ctx) { /* (name : string, version : string, about : string) -> clispec */ 
  return kk_api__new_Clispec(kk_reuse_null, 0, name, version, about, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx);
}

kk_api__clispec kk_api_hc__with__flags(kk_api__clispec spec, kk_std_core_types__list flags, kk_context_t* _ctx); /* (spec : clispec, flags : list<cliflag>) -> clispec */ 

kk_api__clispec kk_api_hc__with__options(kk_api__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx); /* (spec : clispec, options : list<clioption>) -> clispec */ 

kk_api__clispec kk_api_hc__with__args(kk_api__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx); /* (spec : clispec, args : list<cliarg>) -> clispec */ 

kk_api__clispec kk_api_hc__with__commands(kk_api__clispec spec, kk_std_core_types__list commands, kk_context_t* _ctx); /* (spec : clispec, commands : list<(string, clispec)>) -> clispec */ 

kk_api__clispec kk_api_hc__flag(kk_api__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx); /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 

kk_api__clispec kk_api_hc__option(kk_api__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx); /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 

kk_api__clispec kk_api_hc__option__default(kk_api__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_string_t kkloc_default, kk_context_t* _ctx); /* (spec : clispec, name : string, short : string, help_text : string, default : string) -> clispec */ 

kk_api__clispec kk_api_hc__arg(kk_api__clispec spec, kk_string_t name, kk_string_t help__text, bool required, kk_context_t* _ctx); /* (spec : clispec, name : string, help_text : string, required : bool) -> clispec */ 

kk_api__clispec kk_api_hc__command(kk_api__clispec spec, kk_string_t name, kk_api__clispec hc__sub_0, kk_context_t* _ctx); /* (spec : clispec, name : string, hc_sub : clispec) -> clispec */ 

kk_string_t kk_api_hc__format__flag__usage(kk_api__cliflag f, kk_context_t* _ctx); /* (f : cliflag) -> div string */ 

kk_string_t kk_api_hc__format__option__usage(kk_api__clioption o, kk_context_t* _ctx); /* (o : clioption) -> div string */ 

kk_string_t kk_api_hc__format__arg__usage(kk_api__cliarg a, kk_context_t* _ctx); /* (a : cliarg) -> div string */ 

kk_string_t kk_api_hc__format__arg__label(kk_api__cliarg a, kk_context_t* _ctx); /* (a : cliarg) -> string */ 

kk_string_t kk_api_hc__format__cmd__usage(kk_std_core_types__tuple2 pair, kk_context_t* _ctx); /* (pair : (string, clispec)) -> div string */ 

kk_string_t kk_api_hc__cli__help(kk_api__clispec spec, kk_context_t* _ctx); /* (spec : clispec) -> div string */ 

kk_string_t kk_api_hc__cli__version__str(kk_api__clispec spec, kk_context_t* _ctx); /* (spec : clispec) -> string */ 

static inline kk_api__cliresult kk_api_hc__cli__empty(kk_context_t* _ctx) { /* () -> cliresult */ 
  kk_string_t _x_x4888 = kk_string_empty(); /*string*/
  return kk_api__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x4888, kk_std_core_types__new_Nothing(_ctx), _ctx);
}

bool kk_api_hc__has__flag(kk_api__cliresult r, kk_string_t name, kk_context_t* _ctx); /* (r : cliresult, name : string) -> bool */ 

kk_std_core_types__maybe kk_api_hc__get__opt(kk_api__cliresult r, kk_string_t name, kk_context_t* _ctx); /* (r : cliresult, name : string) -> maybe<string> */ 

kk_string_t kk_api_hc__get__opt__or(kk_api__cliresult r, kk_string_t name, kk_string_t kkloc_default, kk_context_t* _ctx); /* (r : cliresult, name : string, default : string) -> string */ 

kk_std_core_types__list kk_api_hc__get__positionals(kk_api__cliresult r, kk_context_t* _ctx); /* (r : cliresult) -> list<string> */ 

kk_string_t kk_api_hc__get__command(kk_api__cliresult r, kk_context_t* _ctx); /* (r : cliresult) -> string */ 

kk_std_core_types__maybe kk_api_hc__get__sub(kk_api__cliresult r, kk_context_t* _ctx); /* (r : cliresult) -> maybe<cliresult> */ 

kk_std_core_types__maybe kk_api_hc__find__flag__long(kk_std_core_types__list flags, kk_string_t name, kk_context_t* _ctx); /* (flags : list<cliflag>, name : string) -> maybe<cliflag> */ 

kk_std_core_types__maybe kk_api_hc__find__flag__short(kk_std_core_types__list flags, kk_string_t s, kk_context_t* _ctx); /* (flags : list<cliflag>, s : string) -> maybe<cliflag> */ 

kk_std_core_types__maybe kk_api_hc__find__opt__long(kk_std_core_types__list options, kk_string_t name, kk_context_t* _ctx); /* (options : list<clioption>, name : string) -> maybe<clioption> */ 

kk_std_core_types__maybe kk_api_hc__find__opt__short(kk_std_core_types__list options, kk_string_t s, kk_context_t* _ctx); /* (options : list<clioption>, s : string) -> maybe<clioption> */ 


// lift anonymous function
struct kk_api_hc__find__command_fun4919__t {
  struct kk_function_s _base;
  kk_string_t name;
};
extern bool kk_api_hc__find__command_fun4919(kk_function_t _fself, kk_box_t _b_x604, kk_context_t* _ctx);
static inline kk_function_t kk_api_new_hc__find__command_fun4919(kk_string_t name, kk_context_t* _ctx) {
  struct kk_api_hc__find__command_fun4919__t* _self = kk_function_alloc_as(struct kk_api_hc__find__command_fun4919__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__find__command_fun4919, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}


static inline kk_std_core_types__maybe kk_api_hc__find__command(kk_std_core_types__list commands, kk_string_t name, kk_context_t* _ctx) { /* (commands : list<(string, clispec)>, name : string) -> maybe<(string, clispec)> */ 
  return kk_std_core_list_find(commands, kk_api_new_hc__find__command_fun4919(name, _ctx), _ctx);
}

kk_std_core_types__list kk_api_hc__add__default(kk_std_core_types__list acc, kk_api__clioption o, kk_context_t* _ctx); /* (acc : list<(string, string)>, o : clioption) -> list<(string, string)> */ 

kk_std_core_types__list kk_api_hc__apply__defaults(kk_api__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx); /* (spec : clispec, options : list<(string, string)>) -> list<(string, string)> */ 

kk_string_t kk_api_hc__check__one__arg(kk_std_core_types__list positionals, kk_string_t err, kk_std_core_types__tuple2 pair, kk_context_t* _ctx); /* (positionals : list<string>, err : string, pair : (int, cliarg)) -> string */ 

kk_string_t kk_api_hc__check__required__args(kk_api__clispec spec, kk_std_core_types__list positionals, kk_context_t* _ctx); /* (spec : clispec, positionals : list<string>) -> string */ 
 
// monadic lift

static inline kk_api__parseraw kk_api__mlift_hc__parse__loop_11118(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_std_core_types__list _y_x10872, kk_std_core_types__list _y_x10873, kk_string_t _y_x10874, kk_std_core_types__list _y_x10875, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, list<string>, string, list<string>) -> <local<h>,div,exn> parseraw */ 
  return kk_api__new_Parseraw(kk_reuse_null, 0, _y_x10870, _y_x10871, _y_x10872, _y_x10873, _y_x10874, _y_x10875, _ctx);
}

kk_api__parseraw kk_api__mlift_hc__parse__loop_11119(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_std_core_types__list _y_x10872, kk_std_core_types__list _y_x10873, kk_ref_t sub__args, kk_string_t _y_x10874, kk_context_t* _ctx); /* forall<h> (string, list<string>, list<(string, string)>, list<string>, sub_args : local-var<h,list<string>>, string) -> <local<h>,div,exn> parseraw */ 

kk_api__parseraw kk_api__mlift_hc__parse__loop_11120(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_std_core_types__list _y_x10872, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10873, kk_context_t* _ctx); /* forall<h> (string, list<string>, list<(string, string)>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 

kk_api__parseraw kk_api__mlift_hc__parse__loop_11121(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10872, kk_context_t* _ctx); /* forall<h> (string, list<string>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<(string, string)>) -> <local<h>,div,exn> parseraw */ 

kk_api__parseraw kk_api__mlift_hc__parse__loop_11122(kk_string_t _y_x10870, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10871, kk_context_t* _ctx); /* forall<h> (string, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 

kk_api__parseraw kk_api__mlift_hc__parse__loop_11123(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t _y_x10870, kk_context_t* _ctx); /* forall<h> (flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, string) -> <local<h>,div,exn> parseraw */ 
 
// monadic lift

static inline bool kk_api__mlift_hc__parse__loop_11124(kk_std_core_types__list _y_x10747, kk_context_t* _ctx) { /* forall<h> (list<string>) -> <local<h>,div,exn,hica-brk> bool */ 
  kk_integer_t _brw_x2618 = kk_std_core_list__lift_length_6003(_y_x10747, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2619 = kk_integer_gt_borrow(_brw_x2618,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2618, _ctx);
  return _brw_x2619;
}

bool kk_api__mlift_hc__parse__loop_11125(kk_ref_t remaining, kk_string_t _y_x10746, kk_context_t* _ctx); /* forall<h> (remaining : local-var<h,list<string>>, string) -> <local<h>,div,exn,hica-brk> bool */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11126(kk_unit_t wild___0, kk_context_t* _ctx); /* forall<h> (wild_@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11127(kk_unit_t wild___0_0, kk_context_t* _ctx); /* forall<h> (wild_@0@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11128(kk_unit_t wild___1, kk_context_t* _ctx); /* forall<h> (wild_@1 : ()) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11129(kk_unit_t wild___2, kk_context_t* _ctx); /* forall<h> (wild_@2 : ()) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11130(kk_std_core_types__list _y_x10764, kk_ref_t positionals, kk_std_core_types__list _y_x10765, kk_context_t* _ctx); /* forall<h> (list<string>, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11131(kk_ref_t positionals, kk_ref_t remaining, kk_std_core_types__list _y_x10764, kk_context_t* _ctx); /* forall<h> (positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11132(kk_string_t name, kk_ref_t options, kk_string_t v, kk_std_core_types__list _y_x10774, kk_context_t* _ctx); /* forall<h> (name : string, options : local-var<h,list<(string, string)>>, v : string, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11133(kk_std_core_types__list _c_x10770, kk_ref_t error, kk_ref_t options, kk_api__clispec spec, kk_string_t name, kk_context_t* _ctx); /* forall<h> (list<string>, error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, name : string) -> <exn,local<h>,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11134(kk_ref_t error, kk_ref_t options, kk_api__clispec spec, kk_std_core_types__list _c_x10770, kk_context_t* _ctx); /* forall<h> (error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, list<string>) -> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11135(kk_ref_t flags, kk_string_t name_0_0, kk_std_core_types__list _y_x10778, kk_context_t* _ctx); /* forall<h> (flags : local-var<h,list<string>>, name@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
 
// monadic lift

static inline kk_unit_t kk_api__mlift_hc__parse__loop_11136(kk_ref_t remaining, kk_std_core_types__list _y_x10788, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x853_855 = kk_std_core_list_drop(_y_x10788, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2596 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x853_855, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2596; return kk_Unit;
}

kk_unit_t kk_api__mlift_hc__parse__loop_11137(kk_ref_t remaining, kk_unit_t wild___3, kk_context_t* _ctx); /* forall<h> (remaining : local-var<h,list<string>>, wild_@3 : ()) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11138(kk_std_core_types__list _y_x10782, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10786, kk_context_t* _ctx); /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11139(kk_std_core_types__list _y_x10782, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10785, kk_context_t* _ctx); /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11140(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10782, kk_context_t* _ctx); /* forall<h> (name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11141(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10780, kk_context_t* _ctx); /* forall<h> (error : local-var<h,string>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11142(kk_api__cliflag f_1, kk_ref_t flags, kk_std_core_types__list _y_x10794, kk_context_t* _ctx); /* forall<h> (f@1 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
 
// monadic lift

static inline kk_unit_t kk_api__mlift_hc__parse__loop_11143(kk_ref_t remaining, kk_std_core_types__list _y_x10804, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x939_941 = kk_std_core_list_drop(_y_x10804, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2581 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x939_941, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2581; return kk_Unit;
}

kk_unit_t kk_api__mlift_hc__parse__loop_11144(kk_ref_t remaining, kk_unit_t wild___4, kk_context_t* _ctx); /* forall<h> (remaining : local-var<h,list<string>>, wild_@4 : ()) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11145(kk_std_core_types__list _y_x10798, kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10802, kk_context_t* _ctx); /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11146(kk_std_core_types__list _y_x10798, kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10801, kk_context_t* _ctx); /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11147(kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10798, kk_context_t* _ctx); /* forall<h> (o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11148(kk_ref_t error, kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_std_core_types__list _y_x10796, kk_context_t* _ctx); /* forall<h> (error : local-var<h,string>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@5 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11149(kk_unit_t wild___6, kk_context_t* _ctx); /* forall<h> (wild_@6 : ()) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11150(kk_ref_t sub__args, kk_std_core_types__list _y_x10811, kk_context_t* _ctx); /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11151(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5, kk_context_t* _ctx); /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5 : ()) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11152(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10815, kk_context_t* _ctx); /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11153(kk_ref_t flags, kk_string_t name_0_0_0, kk_std_core_types__list _y_x10821, kk_context_t* _ctx); /* forall<h> (flags : local-var<h,list<string>>, name@0@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
 
// monadic lift

static inline kk_unit_t kk_api__mlift_hc__parse__loop_11154(kk_ref_t remaining, kk_std_core_types__list _y_x10831, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1059_1061 = kk_std_core_list_drop(_y_x10831, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2562 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1059_1061, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2562; return kk_Unit;
}

kk_unit_t kk_api__mlift_hc__parse__loop_11155(kk_ref_t remaining, kk_unit_t wild___3_0, kk_context_t* _ctx); /* forall<h> (remaining : local-var<h,list<string>>, wild_@3@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11156(kk_std_core_types__list _y_x10825, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10829, kk_context_t* _ctx); /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11157(kk_std_core_types__list _y_x10825, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10828, kk_context_t* _ctx); /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11158(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10825, kk_context_t* _ctx); /* forall<h> (name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11159(kk_ref_t error, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10823, kk_context_t* _ctx); /* forall<h> (error : local-var<h,string>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11160(kk_api__cliflag f_0_0, kk_ref_t flags, kk_std_core_types__list _y_x10837, kk_context_t* _ctx); /* forall<h> (f@0@0 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
 
// monadic lift

static inline kk_unit_t kk_api__mlift_hc__parse__loop_11161(kk_ref_t remaining, kk_std_core_types__list _y_x10847, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1145_1147 = kk_std_core_list_drop(_y_x10847, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2547 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1145_1147, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2547; return kk_Unit;
}

kk_unit_t kk_api__mlift_hc__parse__loop_11162(kk_ref_t remaining, kk_unit_t wild___4_0, kk_context_t* _ctx); /* forall<h> (remaining : local-var<h,list<string>>, wild_@4@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11163(kk_std_core_types__list _y_x10841, kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10845, kk_context_t* _ctx); /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11164(kk_std_core_types__list _y_x10841, kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10844, kk_context_t* _ctx); /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11165(kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10841, kk_context_t* _ctx); /* forall<h> (o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11166(kk_ref_t error, kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_std_core_types__list _y_x10839, kk_context_t* _ctx); /* forall<h> (error : local-var<h,string>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11167(kk_unit_t wild___6_0, kk_context_t* _ctx); /* forall<h> (wild_@6@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11168(kk_ref_t sub__args, kk_std_core_types__list _y_x10854, kk_context_t* _ctx); /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11169(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5_0, kk_context_t* _ctx); /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11170(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10858, kk_context_t* _ctx); /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11171(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t wild__, kk_context_t* _ctx); /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, wild_ : ()) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11172(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10753, kk_context_t* _ctx); /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11173(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t a, kk_context_t* _ctx); /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, a : string) -> <exn,local<h>,hica-brk,div> () */ 

kk_unit_t kk_api__mlift_hc__parse__loop_11174(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10751, kk_context_t* _ctx); /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 

kk_api__parseraw kk_api__mlift_hc__parse__loop_11175(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t _y_x10869, kk_context_t* _ctx); /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, ()) -> <div,exn,local<h>> parseraw */ 

kk_api__parseraw kk_api_hc__parse__loop(kk_api__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx); /* (spec : clispec, args : list<string>) -> pure parseraw */ 

kk_api__clioutcome kk_api__mlift_hc__cli__parse__args_11176(kk_std_core_types__list final__options, kk_std_core_types__list flags, kk_std_core_types__list positionals, kk_string_t subcmd, kk_api__clioutcome _y_x10886, kk_context_t* _ctx); /* (final_options : list<(string, string)>, flags : list<string>, positionals : list<string>, subcmd : string, clioutcome) -> pure clioutcome */ 

kk_api__clioutcome kk_api__mlift_hc__cli__parse__args_11177(kk_api__clispec spec, kk_api__parseraw hc__raw, kk_context_t* _ctx); /* (spec : clispec, hc_raw : parseraw) -> pure clioutcome */ 

kk_api__clioutcome kk_api_hc__cli__parse__args(kk_api__clispec spec_2, kk_std_core_types__list args, kk_context_t* _ctx); /* (spec : clispec, args : list<string>) -> pure clioutcome */ 


// lift anonymous function
struct kk_api_hc__cli__parse_fun5986__t {
  struct kk_function_s _base;
};
extern kk_box_t kk_api_hc__cli__parse_fun5986(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_api_new_hc__cli__parse_fun5986(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse_fun5986, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}


static inline kk_api__clioutcome kk_api_hc__cli__parse(kk_api__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> <pure,ndet> clioutcome */ 
  kk_std_core_types__list _x_x5984;
  kk_box_t _x_x5985 = kk_std_core_hnd__open_none0(kk_api_new_hc__cli__parse_fun5986(_ctx), _ctx); /*10000*/
  _x_x5984 = kk_std_core_types__list_unbox(_x_x5985, KK_OWNED, _ctx); /*list<string>*/
  return kk_api_hc__cli__parse__args(spec, _x_x5984, _ctx);
}

kk_api__cliresult kk_api__mlift_hc__cli__parse__or__exit_11178(kk_api__clispec spec, kk_api__clioutcome _y_x10894, kk_context_t* _ctx); /* (spec : clispec, clioutcome) -> pure cliresult */ 

kk_api__cliresult kk_api_hc__cli__parse__or__exit(kk_api__clispec spec, kk_context_t* _ctx); /* (spec : clispec) -> <pure,console/console,ndet> cliresult */ 

kk_std_core_types__list kk_api__mlift_hc__read__lines_11179(kk_string_t _c_x10899, kk_context_t* _ctx); /* (string) -> list<string> */ 

kk_std_core_types__list kk_api__mlift_hc__read__lines_11180(kk_std_core_exn__error _y_x10897, kk_context_t* _ctx); /* (error<string>) -> <fsys,exn> list<string> */ 

kk_std_core_types__list kk_api_hc__read__lines(kk_string_t file__path, kk_context_t* _ctx); /* (file_path : string) -> <exn,fsys> list<string> */ 

kk_unit_t kk_api_hc__write__lines(kk_string_t file__path, kk_std_core_types__list xs, kk_context_t* _ctx); /* (file_path : string, xs : list<string>) -> <exn,fsys> () */ 

kk_std_core_types__maybe kk_api_hc__hml__get(kk_std_core_types__list nodes, kk_string_t key, kk_context_t* _ctx); /* (nodes : list<hml_types/hmlnode>, key : string) -> div maybe<hml_types/hml> */ 

kk_std_core_types__maybe kk_api_hc__hml__elem(kk_std_core_types__list nodes, kk_string_t name, kk_context_t* _ctx); /* (nodes : list<hml_types/hmlnode>, name : string) -> div maybe<hml_types/hml> */ 

kk_std_core_types__list kk_api_hc__hml__elems(kk_std_core_types__list nodes, kk_string_t name, kk_context_t* _ctx); /* (nodes : list<hml_types/hmlnode>, name : string) -> div list<hml_types/hml> */ 

kk_std_core_types__maybe kk_api_hc__hml__str(kk_hml__types__hml v, kk_context_t* _ctx); /* (v : hml_types/hml) -> maybe<string> */ 

kk_std_core_types__maybe kk_api_hc__hml__int(kk_hml__types__hml v, kk_context_t* _ctx); /* (v : hml_types/hml) -> maybe<int> */ 

kk_std_core_types__maybe kk_api_hc__hml__float(kk_hml__types__hml v, kk_context_t* _ctx); /* (v : hml_types/hml) -> maybe<float64> */ 

kk_std_core_types__maybe kk_api_hc__hml__bool(kk_hml__types__hml v, kk_context_t* _ctx); /* (v : hml_types/hml) -> maybe<bool> */ 

kk_std_core_types__maybe kk_api_hc__hml__duration(kk_hml__types__hml v, kk_context_t* _ctx); /* (v : hml_types/hml) -> maybe<(int, string)> */ 

kk_std_core_types__maybe kk_api_hc__hml__list(kk_hml__types__hml v, kk_context_t* _ctx); /* (v : hml_types/hml) -> maybe<list<hml_types/hml>> */ 

kk_std_core_types__maybe kk_api_hc__hml__body(kk_hml__types__hml v, kk_context_t* _ctx); /* (v : hml_types/hml) -> maybe<list<hml_types/hmlnode>> */ 

kk_std_core_types__maybe kk_api_hc__hml__attrs(kk_hml__types__hml v, kk_context_t* _ctx); /* (v : hml_types/hml) -> maybe<list<(string, hml_types/hml)>> */ 

kk_std_core_types__maybe kk_api_hc__find__attr(kk_std_core_types__list attrs, kk_string_t key, kk_context_t* _ctx); /* (attrs : list<(string, hml_types/hml)>, key : string) -> div maybe<hml_types/hml> */ 

kk_std_core_types__maybe kk_api_hc__hml__attr(kk_hml__types__hml v, kk_string_t key, kk_context_t* _ctx); /* (v : hml_types/hml, key : string) -> div maybe<hml_types/hml> */ 

kk_std_core_types__maybe kk_api_hc__hml__ok(kk_std_core_types__either r, kk_context_t* _ctx); /* (r : either<string,list<hml_types/hmlnode>>) -> maybe<list<hml_types/hmlnode>> */ 
 
// .hc:97

static inline kk_std_core_types__maybe kk_api_hc__at(kk_std_core_types__list nodes, kk_string_t key, kk_context_t* _ctx) { /* (nodes : list<hml_types/hmlnode>, key : string) -> div maybe<hml_types/hml> */ 
  return kk_api_hc__hml__get(nodes, key, _ctx);
}
 
// .hc:101

static inline kk_std_core_types__maybe kk_api_hc__elem__at(kk_std_core_types__list nodes, kk_string_t name, kk_context_t* _ctx) { /* (nodes : list<hml_types/hmlnode>, name : string) -> div maybe<hml_types/hml> */ 
  return kk_api_hc__hml__elem(nodes, name, _ctx);
}

kk_std_core_types__maybe kk_api_hc__as__str(kk_std_core_types__maybe v, kk_context_t* _ctx); /* (v : maybe<hml_types/hml>) -> maybe<string> */ 

kk_std_core_types__maybe kk_api_hc__as__int(kk_std_core_types__maybe v, kk_context_t* _ctx); /* (v : maybe<hml_types/hml>) -> maybe<int> */ 

kk_std_core_types__maybe kk_api_hc__as__bool(kk_std_core_types__maybe v, kk_context_t* _ctx); /* (v : maybe<hml_types/hml>) -> maybe<bool> */ 

void kk_api__init(kk_context_t* _ctx);


void kk_api__done(kk_context_t* _ctx);

#endif // header
