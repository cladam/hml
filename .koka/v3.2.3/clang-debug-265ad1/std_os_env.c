// Koka generated module: std/os/env, koka version: 3.2.3, platform: 64-bit
#include "std_os_env.h"

kk_std_core_types__list kk_std_os_env__trmc_to_tuples(kk_std_core_types__list xs, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (xs : list<string>, ctx<env>) -> env */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x75 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x0 = _con_x75->head;
    kk_std_core_types__list _pat_0 = _con_x75->tail;
    if (kk_std_core_types__is_Cons(_pat_0, _ctx)) {
      struct kk_std_core_types_Cons* _con_x76 = kk_std_core_types__as_Cons(_pat_0, _ctx);
      kk_box_t _box_x1 = _con_x76->head;
      kk_string_t name = kk_string_unbox(_box_x0);
      kk_std_core_types__list xx = _con_x76->tail;
      kk_string_t value = kk_string_unbox(_box_x1);
      kk_reuse_t _ru_x72 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        if kk_likely(kk_datatype_ptr_is_unique(_pat_0, _ctx)) {
          kk_datatype_ptr_free(_pat_0, _ctx);
        }
        else {
          kk_string_dup(value, _ctx);
          kk_std_core_types__list_dup(xx, _ctx);
          kk_datatype_ptr_decref(_pat_0, _ctx);
        }
        _ru_x72 = (kk_datatype_ptr_reuse(xs, _ctx));
      }
      else {
        kk_string_dup(name, _ctx);
        kk_string_dup(value, _ctx);
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_std_core_types__list _trmc_x10004 = kk_datatype_null(); /*std/os/env/env*/;
      kk_std_core_types__list _trmc_x10005;
      kk_box_t _x_x77;
      kk_std_core_types__tuple2 _x_x78 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(value), _ctx); /*(134, 135)*/
      _x_x77 = kk_std_core_types__tuple2_box(_x_x78, _ctx); /*79*/
      _trmc_x10005 = kk_std_core_types__new_Cons(_ru_x72, 0, _x_x77, _trmc_x10004, _ctx); /*list<(string, string)>*/
      kk_field_addr_t _b_x15_27 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10005, _ctx)->tail, _ctx); /*@field-addr<std/os/env/env>*/;
      { // tailcall
        kk_std_core_types__cctx _x_x79 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10005, _ctx)),_b_x15_27,kk_context()); /*ctx<0>*/
        xs = xx;
        _acc = _x_x79;
        goto kk__tailcall;
      }
    }
  }
  if (kk_std_core_types__is_Cons(xs, _ctx)) {
    struct kk_std_core_types_Cons* _con_x80 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x16 = _con_x80->head;
    kk_std_core_types__list _pat_2 = _con_x80->tail;
    kk_string_t name_0 = kk_string_unbox(_box_x16);
    kk_reuse_t _ru_x73 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x73 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_string_dup(name_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t _x_x81;
    kk_box_t _x_x82;
    kk_std_core_types__list _x_x83;
    kk_box_t _x_x84;
    kk_std_core_types__tuple2 _x_x85;
    kk_box_t _x_x86;
    kk_string_t _x_x87 = kk_string_empty(); /*string*/
    _x_x86 = kk_string_box(_x_x87); /*135*/
    _x_x85 = kk_std_core_types__new_Tuple2(kk_string_box(name_0), _x_x86, _ctx); /*(134, 135)*/
    _x_x84 = kk_std_core_types__tuple2_box(_x_x85, _ctx); /*79*/
    _x_x83 = kk_std_core_types__new_Cons(_ru_x73, 0, _x_x84, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<79>*/
    _x_x82 = kk_std_core_types__list_box(_x_x83, _ctx); /*-1*/
    _x_x81 = kk_cctx_apply_linear(_acc,_x_x82,kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x81, KK_OWNED, _ctx);
  }
  {
    kk_box_t _x_x89 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x89, KK_OWNED, _ctx);
  }
}

kk_std_core_types__list kk_std_os_env_to_tuples(kk_std_core_types__list xs_0, kk_context_t* _ctx) { /* (xs : list<string>) -> env */ 
  kk_std_core_types__cctx _x_x90 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_os_env__trmc_to_tuples(xs_0, _x_x90, _ctx);
}

kk_vector_t kk_std_os_env_os_get_env(kk_context_t* _ctx) { /* () -> ndet vector<string> */ 
  return kk_os_get_env(kk_context());
}


// lift anonymous function
struct kk_std_os_env_environ_fun91__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_env_environ_fun91(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_environ_fun91(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_environ_fun91, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_env_environ_fun91(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10000 = kk_std_os_env_os_get_env(_ctx); /*vector<string>*/;
  kk_std_core_types__list xs_10006 = kk_std_core_vector_vlist(v_10000, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/;
  kk_std_core_types__list _x_x92;
  kk_std_core_types__cctx _x_x93 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  _x_x92 = kk_std_os_env__trmc_to_tuples(xs_10006, _x_x93, _ctx); /*std/os/env/env*/
  return kk_std_core_types__list_box(_x_x92, _ctx);
}

kk_std_core_delayed__delayed kk_std_os_env_environ;
extern kk_box_t kk_std_os_env_get_env_fun94(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_delayed__delayed _x_x95 = kk_std_core_delayed__delayed_dup(kk_std_os_env_environ, _ctx); /*delayed/delayed<ndet,std/os/env/env>*/
  return kk_std_core_delayed_force_fs_go(_x_x95, _ctx);
}
 
// Returns the value of an environment variable `name` (or `Nothing` if not present)


// lift anonymous function
struct kk_std_os_env_get_env_value_fun97__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_env_get_env_value_fun97(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_get_env_value_fun97(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_get_env_value_fun97, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_env_get_env_value_fun97(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_delayed__delayed _x_x98 = kk_std_core_delayed__delayed_dup(kk_std_os_env_environ, _ctx); /*delayed/delayed<ndet,std/os/env/env>*/
  return kk_std_core_delayed_force_fs_go(_x_x98, _ctx);
}


// lift anonymous function
struct kk_std_os_env_get_env_value_fun100__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_std_os_env_get_env_value_fun100(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_get_env_value_fun100(kk_string_t name, kk_context_t* _ctx) {
  struct kk_std_os_env_get_env_value_fun100__t* _self = kk_function_alloc_as(struct kk_std_os_env_get_env_value_fun100__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_env_get_env_value_fun100, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_os_env_get_env_value_fun100(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  struct kk_std_os_env_get_env_value_fun100__t* _self = kk_function_as(struct kk_std_os_env_get_env_value_fun100__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x101 = kk_string_unbox(_b_x51); /*string*/
  return kk_string_is_eq(_x_x101,name,kk_context());
}

kk_std_core_types__maybe kk_std_os_env_get_env_value(kk_string_t name, kk_context_t* _ctx) { /* (name : string) -> ndet maybe<string> */ 
  kk_function_t _bv_x48 = kk_std_core_delayed_unsafe_no_state_div_cast(kk_std_os_env_new_get_env_value_fun97(_ctx), _ctx); /*() -> 575 574*/;
  kk_std_core_types__list _b_x49_52;
  kk_box_t _x_x99 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _bv_x48, (_bv_x48, _ctx), _ctx); /*574*/
  _b_x49_52 = kk_std_core_types__list_unbox(_x_x99, KK_OWNED, _ctx); /*std/os/env/env*/
  return kk_std_core_list_lookup(_b_x49_52, kk_std_os_env_new_get_env_value_fun100(name, _ctx), _ctx);
}

kk_vector_t kk_std_os_env_os_get_argv(kk_context_t* _ctx) { /* () -> ndet vector<string> */ 
  return kk_os_get_argv(kk_context());
}


// lift anonymous function
struct kk_std_os_env_argv_fun102__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_env_argv_fun102(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_argv_fun102(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_argv_fun102, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_env_argv_fun102(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10002 = kk_std_os_env_os_get_argv(_ctx); /*vector<string>*/;
  kk_std_core_types__list _x_x103 = kk_std_core_vector_vlist(v_10002, kk_std_core_types__new_None(_ctx), _ctx); /*list<935>*/
  return kk_std_core_types__list_box(_x_x103, _ctx);
}

kk_std_core_delayed__delayed kk_std_os_env_argv;
extern kk_box_t kk_std_os_env_get_argv_fun104(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_delayed__delayed _x_x105 = kk_std_core_delayed__delayed_dup(kk_std_os_env_argv, _ctx); /*delayed/delayed<ndet,list<string>>*/
  return kk_std_core_delayed_force_fs_go(_x_x105, _ctx);
}
 
// Return the arguments that were passed to program itself.
// Strips off the initial program from the unprocessed command line.
// i.e. If a program started as:
// ````
// > node myprogram.js --flag bla
// ````
// The `arguments` list will be `["--flag","bla"]`


// lift anonymous function
struct kk_std_os_env_get_args_fun110__t {
  struct kk_function_s _base;
};
static kk_std_core_types__list kk_std_os_env_get_args_fun110(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_get_args_fun110(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_get_args_fun110, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__list kk_std_os_env_get_args_fun110(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_t _x_x111;
  kk_std_core_delayed__delayed _x_x112 = kk_std_core_delayed__delayed_dup(kk_std_os_env_argv, _ctx); /*delayed/delayed<ndet,list<string>>*/
  _x_x111 = kk_std_core_delayed_force_fs_go(_x_x112, _ctx); /*543*/
  return kk_std_core_types__list_unbox(_x_x111, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_os_env_get_args_fun113__t {
  struct kk_function_s _base;
  kk_function_t _b_x65_68;
};
static kk_box_t kk_std_os_env_get_args_fun113(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_get_args_fun113(kk_function_t _b_x65_68, kk_context_t* _ctx) {
  struct kk_std_os_env_get_args_fun113__t* _self = kk_function_alloc_as(struct kk_std_os_env_get_args_fun113__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_env_get_args_fun113, kk_context());
  _self->_b_x65_68 = _b_x65_68;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_env_get_args_fun113(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_os_env_get_args_fun113__t* _self = kk_function_as(struct kk_std_os_env_get_args_fun113__t*, _fself, _ctx);
  kk_function_t _b_x65_68 = _self->_b_x65_68; /* () -> <st<global>,div,ndet> list<string> */
  kk_drop_match(_self, {kk_function_dup(_b_x65_68, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x114 = kk_function_call(kk_std_core_types__list, (kk_function_t, kk_context_t*), _b_x65_68, (_b_x65_68, _ctx), _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x114, _ctx);
}

kk_std_core_types__list kk_std_os_env_get_args(kk_context_t* _ctx) { /* () -> ndet list<string> */ 
  bool is_node;
  kk_string_t _x_x107 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x_x108;
  kk_define_string_literal(static, _s_x109, 4, "node", _ctx)
  _x_x108 = kk_string_dup(_s_x109, _ctx); /*string*/
  is_node = kk_string_is_eq(_x_x107,_x_x108,kk_context()); /*bool*/
  kk_function_t _b_x65_68 = kk_std_os_env_new_get_args_fun110(_ctx); /*() -> <st<global>,div,ndet> list<string>*/;
  kk_function_t _bv_x66 = kk_std_core_delayed_unsafe_no_state_div_cast(kk_std_os_env_new_get_args_fun113(_b_x65_68, _ctx), _ctx); /*() -> 575 574*/;
  kk_std_core_types__list _match_x70;
  kk_box_t _x_x115 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _bv_x66, (_bv_x66, _ctx), _ctx); /*574*/
  _match_x70 = kk_std_core_types__list_unbox(_x_x115, KK_OWNED, _ctx); /*list<string>*/
  if (kk_std_core_types__is_Cons(_match_x70, _ctx)) {
    struct kk_std_core_types_Cons* _con_x116 = kk_std_core_types__as_Cons(_match_x70, _ctx);
    kk_box_t _box_x67 = _con_x116->head;
    kk_string_t x = kk_string_unbox(_box_x67);
    bool _x_x117;
    if (is_node) {
      kk_string_t _x_x118;
      kk_std_os_path__path _x_x119;
      kk_string_t _x_x120 = kk_string_dup(x, _ctx); /*string*/
      _x_x119 = kk_std_os_path_path(_x_x120, _ctx); /*std/os/path/path*/
      _x_x118 = kk_std_os_path_stemname(_x_x119, _ctx); /*string*/
      kk_string_t _x_x121;
      kk_define_string_literal(static, _s_x122, 4, "node", _ctx)
      _x_x121 = kk_string_dup(_s_x122, _ctx); /*string*/
      _x_x117 = kk_string_is_eq(_x_x118,_x_x121,kk_context()); /*bool*/
    }
    else {
      _x_x117 = false; /*bool*/
    }
    if (_x_x117) {
      kk_std_core_types__list xx = _con_x116->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_match_x70, _ctx)) {
        kk_string_drop(x, _ctx);
        kk_datatype_ptr_free(_match_x70, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_match_x70, _ctx);
      }
      return kk_std_core_list_drop(xx, kk_integer_from_small(1), _ctx);
    }
  }
  {
    return kk_std_core_list_drop(_match_x70, kk_integer_from_small(1), _ctx);
  }
}
 
// Return the main OS name: windows, linux, macos, unix, posix, ios, tvos, watchos, unknown.
// Sometimes has a _dash_ subsystem, like: unix-&lt;freebsd,openbsd,dragonfly,bsd&gt;, and windows-mingw.

kk_string_t kk_std_os_env_get_os_name(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_os_name(kk_context());
}
 
// Return the main processor architecture: x64, x86, arm64, arm32, riscv32, riscv64, alpha64, ppc64, etc.

kk_string_t kk_std_os_env_get_cpu_arch(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_cpu_arch(kk_context());
}
 
// Return the available CPU's.
// This is the logical core count including hyper-threaded cores.

kk_integer_t kk_std_os_env_get_cpu_count(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_int(kk_cpu_count(kk_context()),kk_context());
}
 
// The current compiler version.

kk_string_t kk_std_os_env_get_compiler_version(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_compiler_version(kk_context());
}
 
// The backend compiler name, like `gcc`, `clang`, `cl`, `clang-cl`, `mingw`, or `icc` (and `js` for JavaScript).

kk_string_t kk_std_os_env_get_cc_name(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_cc_name(kk_context());
}
 
// Is the byte-order little-endian?
// If not, it is big-endian; other byte orders are not supported.

bool kk_std_os_env_get_cpu_is_little_endian(kk_context_t* _ctx) { /* () -> ndet bool */ 
  return kk_cpu_is_little_endian(kk_context());
}
 
// Return the processor natural integer register size in bits.
//
// Note: Usually this equals the `get-cpu-size-bits` and `get-cpu-pointer-bits` on modern cpu's
// but they can differ on segmented architectures.
// For example, on the old x86 FAR-NEAR model, the addresses are 32-bit but the integer register size is 16-bit.
// Or on the more recent-[x32 ABI](https://en.wikipedia.org/wiki/X32_ABI)
// the addresses and object sizes are 32-bits but the architecture has 64-bit integer registers.

kk_integer_t kk_std_os_env_get_cpu_int_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*sizeof(kk_intx_t),kk_context());
}
 
// Return the processor maximum object size in bits (`8*sizeof(size_t)`). This is usually
// equal to the `get-cpu-int-bits` but may be different on segmented architectures.

kk_integer_t kk_std_os_env_get_cpu_size_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*sizeof(size_t),kk_context());
}
 
// Return the processor maximum address size in bits (`8*sizeof(vaddr_t)`). This is usually
// equal to the `get-cpu-pointer-bits` but may be smaller on capability architectures like ARM CHERI.

kk_integer_t kk_std_os_env_get_cpu_address_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_int(kk_cpu_address_bits(kk_context()),kk_context());
}
 
// Return the processor maximum pointer size in bits (`8*sizeof(void*)`). This is usually
// equal to the `get-cpu-address-bits` but may be larger on capability architectures like ARM CHERI.

kk_integer_t kk_std_os_env_get_cpu_pointer_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*sizeof(void*),kk_context());
}
 
// Return the size of boxed values in the heap (`8*sizeof(kk_box_t)`). This is usually
// equal to `8*sizeof(void*)` but can be less if compressed pointers are used (when
// compiled with `--target=c64c` for example).

kk_integer_t kk_std_os_env_get_cpu_boxed_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*sizeof(kk_intb_t),kk_context());
}

// initialization
void kk_std_os_env__init(kk_context_t* _ctx){
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
  {
    kk_std_os_env_environ = kk_std_core_delayed_delay(kk_std_os_env_new_environ_fun91(_ctx), _ctx); /*delayed/delayed<ndet,std/os/env/env>*/
  }
  {
    kk_std_os_env_argv = kk_std_core_delayed_delay(kk_std_os_env_new_argv_fun102(_ctx), _ctx); /*delayed/delayed<ndet,list<string>>*/
  }
}

// termination
void kk_std_os_env__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_delayed__delayed_drop(kk_std_os_env_argv, _ctx);
  kk_std_core_delayed__delayed_drop(kk_std_os_env_environ, _ctx);
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
