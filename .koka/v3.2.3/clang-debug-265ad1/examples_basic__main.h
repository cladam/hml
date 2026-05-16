#pragma once
#ifndef kk_examples_basic__main_H
#define kk_examples_basic__main_H
// Koka generated module: examples/basic/@main, koka version: 3.2.3, platform: 64-bit
#include <kklib.h>
#include "std_num_int32.h"
#include "std_num_int64.h"
#include "std_core_undiv.h"
#include "std_num_float64.h"
#include "std_os_dir.h"
#include "std_text_parse.h"
#include "hml__types.h"
#include "parser.h"
#include "api.h"
#include "display.h"
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
#include "std_os_env.h"
#include "std_os_file.h"
#include "std_os_path.h"
#include "hml.h"
#include "std_core.h"
#include "examples_basic.h"

// type declarations

// value declarations

static inline kk_unit_t kk_examples_basic__main__expr(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_examples_basic_main(_ctx); return kk_Unit;
}

static inline kk_unit_t kk_examples_basic__main__main(kk_context_t* _ctx) { /* () -> <st<global>,console/console,div,fsys,ndet,net,ui> () */ 
  kk_examples_basic_main(_ctx); return kk_Unit;
}

void kk_examples_basic__main__init(kk_context_t* _ctx);


void kk_examples_basic__main__done(kk_context_t* _ctx);

#endif // header
