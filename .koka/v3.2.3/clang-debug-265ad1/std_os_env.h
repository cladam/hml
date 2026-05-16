#pragma once
#ifndef kk_std_os_env_H
#define kk_std_os_env_H
// Koka generated module: std/os/env, koka version: 3.2.3, platform: 64-bit
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
#include "std_os_path.h"

// type declarations

// value declarations

kk_std_core_types__list kk_std_os_env__trmc_to_tuples(kk_std_core_types__list xs, kk_std_core_types__cctx _acc, kk_context_t* _ctx); /* (xs : list<string>, ctx<env>) -> env */ 

kk_std_core_types__list kk_std_os_env_to_tuples(kk_std_core_types__list xs_0, kk_context_t* _ctx); /* (xs : list<string>) -> env */ 

kk_vector_t kk_std_os_env_os_get_env(kk_context_t* _ctx); /* () -> ndet vector<string> */ 

extern kk_std_core_delayed__delayed kk_std_os_env_environ;
 
// Get the environment variables for this program


// lift anonymous function
struct kk_std_os_env_get_env_fun94__t {
  struct kk_function_s _base;
};
extern kk_box_t kk_std_os_env_get_env_fun94(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_os_env_new_get_env_fun94(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_get_env_fun94, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}


static inline kk_std_core_types__list kk_std_os_env_get_env(kk_context_t* _ctx) { /* () -> ndet env */ 
  kk_function_t _bv_x43 = kk_std_core_delayed_unsafe_no_state_div_cast(kk_std_os_env_new_get_env_fun94(_ctx), _ctx); /*() -> 575 574*/;
  kk_box_t _x_x96 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _bv_x43, (_bv_x43, _ctx), _ctx); /*574*/
  return kk_std_core_types__list_unbox(_x_x96, KK_OWNED, _ctx);
}

kk_std_core_types__maybe kk_std_os_env_get_env_value(kk_string_t name, kk_context_t* _ctx); /* (name : string) -> ndet maybe<string> */ 

kk_vector_t kk_std_os_env_os_get_argv(kk_context_t* _ctx); /* () -> ndet vector<string> */ 

extern kk_std_core_delayed__delayed kk_std_os_env_argv;
 
// The unprocessed command line that was used to start this program.
// On ''Node'' the first arguments will often be of the form `["node","interactive.js",...]`.


// lift anonymous function
struct kk_std_os_env_get_argv_fun104__t {
  struct kk_function_s _base;
};
extern kk_box_t kk_std_os_env_get_argv_fun104(kk_function_t _fself, kk_context_t* _ctx);
static inline kk_function_t kk_std_os_env_new_get_argv_fun104(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_get_argv_fun104, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}


static inline kk_std_core_types__list kk_std_os_env_get_argv(kk_context_t* _ctx) { /* () -> ndet list<string> */ 
  kk_function_t _bv_x61 = kk_std_core_delayed_unsafe_no_state_div_cast(kk_std_os_env_new_get_argv_fun104(_ctx), _ctx); /*() -> 575 574*/;
  kk_box_t _x_x106 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _bv_x61, (_bv_x61, _ctx), _ctx); /*574*/
  return kk_std_core_types__list_unbox(_x_x106, KK_OWNED, _ctx);
}

kk_std_core_types__list kk_std_os_env_get_args(kk_context_t* _ctx); /* () -> ndet list<string> */ 

kk_string_t kk_std_os_env_get_os_name(kk_context_t* _ctx); /* () -> ndet string */ 

kk_string_t kk_std_os_env_get_cpu_arch(kk_context_t* _ctx); /* () -> ndet string */ 

kk_integer_t kk_std_os_env_get_cpu_count(kk_context_t* _ctx); /* () -> ndet int */ 

kk_string_t kk_std_os_env_get_compiler_version(kk_context_t* _ctx); /* () -> ndet string */ 

kk_string_t kk_std_os_env_get_cc_name(kk_context_t* _ctx); /* () -> ndet string */ 

bool kk_std_os_env_get_cpu_is_little_endian(kk_context_t* _ctx); /* () -> ndet bool */ 

kk_integer_t kk_std_os_env_get_cpu_int_bits(kk_context_t* _ctx); /* () -> ndet int */ 

kk_integer_t kk_std_os_env_get_cpu_size_bits(kk_context_t* _ctx); /* () -> ndet int */ 

kk_integer_t kk_std_os_env_get_cpu_address_bits(kk_context_t* _ctx); /* () -> ndet int */ 

kk_integer_t kk_std_os_env_get_cpu_pointer_bits(kk_context_t* _ctx); /* () -> ndet int */ 

kk_integer_t kk_std_os_env_get_cpu_boxed_bits(kk_context_t* _ctx); /* () -> ndet int */ 

void kk_std_os_env__init(kk_context_t* _ctx);


void kk_std_os_env__done(kk_context_t* _ctx);

#endif // header
