// Koka generated module: std/os/path, koka version: 3.2.3, platform: 64-bit
#include "std_os_path.h"

kk_std_os_path__path kk_std_os_path_path_fs__copy(kk_std_os_path__path _this, kk_std_core_types__optional root, kk_std_core_types__optional parts, kk_context_t* _ctx) { /* (path, root : ? string, parts : ? (list<string>)) -> path */ 
  kk_string_t _x_x488;
  if (kk_std_core_types__is_Optional(root, _ctx)) {
    kk_box_t _box_x2 = root._cons._Optional.value;
    kk_string_t _uniq_root_128 = kk_string_unbox(_box_x2);
    kk_string_dup(_uniq_root_128, _ctx);
    kk_std_core_types__optional_drop(root, _ctx);
    _x_x488 = _uniq_root_128; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(root, _ctx);
    {
      kk_string_t _x = _this.root;
      kk_string_dup(_x, _ctx);
      _x_x488 = _x; /*string*/
    }
  }
  kk_std_core_types__list _x_x489;
  if (kk_std_core_types__is_Optional(parts, _ctx)) {
    kk_box_t _box_x3 = parts._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_136 = kk_std_core_types__list_unbox(_box_x3, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_136, _ctx);
    kk_std_core_types__optional_drop(parts, _ctx);
    kk_std_os_path__path_drop(_this, _ctx);
    _x_x489 = _uniq_parts_136; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(parts, _ctx);
    {
      kk_std_core_types__list _x_0 = _this.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(_this, _ctx);
      _x_x489 = _x_0; /*list<string>*/
    }
  }
  return kk_std_os_path__new_Path(_x_x488, _x_x489, _ctx);
}
 
// Return the base name of a path (stem name + extension)
// `"/foo/bar.txt".path.basename === "bar.txt"`
// `"/foo".path.basename === "foo"`

kk_string_t kk_std_os_path_basename(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x490 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x4 = _con_x490->head;
      kk_std_core_types__list _pat_0_0 = _con_x490->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x4);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      return x_0;
    }
    {
      return kk_string_empty();
    }
  }
}
 
// Return the directory part of a path (including the rootname)
// `"/foo/bar.txt".path.dirname === "/foo"`
// `"/foo".path.dirname === "/"`

kk_string_t kk_std_os_path_dirname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core_types__list xs_10007;
  kk_std_core_types__list _x_x492;
  {
    kk_std_core_types__list _x_0 = p.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
      struct kk_std_core_types_Cons* _con_x493 = kk_std_core_types__as_Cons(_x_0, _ctx);
      kk_box_t _box_x6 = _con_x493->head;
      kk_std_core_types__list xx = _con_x493->tail;
      kk_string_t _pat_0_0 = kk_string_unbox(_box_x6);
      if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
        kk_string_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(_x_0, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x_0, _ctx);
      }
      _x_x492 = xx; /*list<string>*/
    }
    else {
      _x_x492 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  xs_10007 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), _x_x492, _ctx); /*list<string>*/
  kk_string_t _x_x494;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    _x_x494 = _x; /*string*/
  }
  kk_string_t _x_x495;
  kk_string_t _x_x496;
  kk_define_string_literal(static, _s_x497, 1, "/", _ctx)
  _x_x496 = kk_string_dup(_s_x497, _ctx); /*string*/
  _x_x495 = kk_std_core_list_joinsep(xs_10007, _x_x496, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x494, _x_x495, _ctx);
}
 
// Is a path empty?

bool kk_std_os_path_is_empty(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> bool */ 
  bool _match_x452;
  kk_string_t _x_x498;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x, _ctx);
    _x_x498 = _x; /*string*/
  }
  kk_string_t _x_x499 = kk_string_empty(); /*string*/
  _match_x452 = kk_string_is_eq(_x_x498,_x_x499,kk_context()); /*bool*/
  if (_match_x452) {
    kk_std_core_types__list _x_0 = p.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Nil(_x_0, _ctx)) {
      return true;
    }
    {
      kk_std_core_types__list_drop(_x_0, _ctx);
      return false;
    }
  }
  {
    kk_std_os_path__path_drop(p, _ctx);
    return false;
  }
}
 
// Convert a `:path` to a normalized `:string` path.
// If this results in an empty string, the current directory path `"."` is returned.
// `"c:/foo/test.txt".path.string -> "c:/foo/test.txt"`
// `"c:\\foo\\test.txt".path.string -> "c:/foo/test.txt"`
// `"/foo//./bar/../test.txt".path.string -> "/foo/test.txt"`

kk_string_t kk_std_os_path_string(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core_types__list xs_10017;
  kk_std_core_types__list _x_x501;
  {
    kk_std_core_types__list _x_0 = p.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _x_x501 = _x_0; /*list<string>*/
  }
  xs_10017 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), _x_x501, _ctx); /*list<string>*/
  kk_string_t s;
  kk_string_t _x_x502;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    _x_x502 = _x; /*string*/
  }
  kk_string_t _x_x503;
  kk_string_t _x_x504;
  kk_define_string_literal(static, _s_x505, 1, "/", _ctx)
  _x_x504 = kk_string_dup(_s_x505, _ctx); /*string*/
  _x_x503 = kk_std_core_list_joinsep(xs_10017, _x_x504, _ctx); /*string*/
  s = kk_std_core_types__lp__plus__plus__rp_(_x_x502, _x_x503, _ctx); /*string*/
  bool _match_x451;
  kk_string_t _x_x506 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x507 = kk_string_empty(); /*string*/
  _match_x451 = kk_string_is_eq(_x_x506,_x_x507,kk_context()); /*bool*/
  if (_match_x451) {
    kk_string_drop(s, _ctx);
    kk_define_string_literal(static, _s_x509, 1, ".", _ctx)
    return kk_string_dup(_s_x509, _ctx);
  }
  {
    return s;
  }
}

kk_std_core_types__tuple2 kk_std_os_path_split_base(kk_string_t basename_0, kk_context_t* _ctx) { /* (basename : string) -> (string, string) */ 
  kk_std_core_types__maybe _match_x450;
  kk_string_t _x_x510 = kk_string_dup(basename_0, _ctx); /*string*/
  kk_string_t _x_x511;
  kk_define_string_literal(static, _s_x512, 1, ".", _ctx)
  _x_x511 = kk_string_dup(_s_x512, _ctx); /*string*/
  _match_x450 = kk_std_core_sslice_find_last(_x_x510, _x_x511, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x450, _ctx)) {
    kk_box_t _box_x7 = _match_x450._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x7, KK_BORROWED, _ctx);
    kk_string_drop(basename_0, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x450, _ctx);
    kk_string_t _b_x8_12;
    kk_std_core_sslice__sslice _x_x513;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x513 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x8_12 = kk_std_core_sslice_string(_x_x513, _ctx); /*string*/
    kk_string_t _b_x9_13;
    kk_std_core_sslice__sslice _x_x514 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x9_13 = kk_std_core_sslice_string(_x_x514, _ctx); /*string*/
    return kk_std_core_types__new_Tuple2(kk_string_box(_b_x8_12), kk_string_box(_b_x9_13), _ctx);
  }
  {
    kk_box_t _x_x515;
    kk_string_t _x_x516 = kk_string_empty(); /*string*/
    _x_x515 = kk_string_box(_x_x516); /*135*/
    return kk_std_core_types__new_Tuple2(kk_string_box(basename_0), _x_x515, _ctx);
  }
}
 
// Return the extension of path (without the preceding dot (`'.'`))
// `"/foo/bar.svg.txt".path.extname === "txt"`

kk_string_t kk_std_os_path_extname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core_types__tuple2 tuple2_10023;
  kk_std_core_types__maybe _match_x449;
  kk_string_t _x_x518;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x519 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x16 = _con_x519->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x519->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x16);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x518 = x_0; /*string*/
    }
    else {
      _x_x518 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x521;
  kk_define_string_literal(static, _s_x522, 1, ".", _ctx)
  _x_x521 = kk_string_dup(_s_x522, _ctx); /*string*/
  _match_x449 = kk_std_core_sslice_find_last(_x_x518, _x_x521, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x449, _ctx)) {
    kk_box_t _box_x18 = _match_x449._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x18, KK_BORROWED, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x449, _ctx);
    kk_string_t _b_x19_25;
    kk_std_core_sslice__sslice _x_x523;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x523 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x19_25 = kk_std_core_sslice_string(_x_x523, _ctx); /*string*/
    kk_string_t _b_x20_26;
    kk_std_core_sslice__sslice _x_x524 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x20_26 = kk_std_core_sslice_string(_x_x524, _ctx); /*string*/
    tuple2_10023 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x19_25), kk_string_box(_b_x20_26), _ctx); /*(string, string)*/
  }
  else {
    kk_box_t _x_x525;
    kk_string_t _x_x526;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x527 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x21 = _con_x527->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x527->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x21);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x526 = x_0_0; /*string*/
      }
      else {
        _x_x526 = kk_string_empty(); /*string*/
      }
    }
    _x_x525 = kk_string_box(_x_x526); /*134*/
    kk_box_t _x_x529;
    kk_string_t _x_x530 = kk_string_empty(); /*string*/
    _x_x529 = kk_string_box(_x_x530); /*135*/
    tuple2_10023 = kk_std_core_types__new_Tuple2(_x_x525, _x_x529, _ctx); /*(string, string)*/
  }
  {
    kk_box_t _box_x29 = tuple2_10023.fst;
    kk_box_t _box_x30 = tuple2_10023.snd;
    kk_string_t _x_0_0 = kk_string_unbox(_box_x30);
    kk_string_dup(_x_0_0, _ctx);
    kk_std_core_types__tuple2_drop(tuple2_10023, _ctx);
    return _x_0_0;
  }
}
 
// Return the stem name of path.
// `"/foo/bar.svg.txt".path.extname === "foo.svg"`

kk_string_t kk_std_os_path_stemname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core_types__tuple2 tuple2_10024;
  kk_std_core_types__maybe _match_x448;
  kk_string_t _x_x532;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x533 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x31 = _con_x533->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x533->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x31);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x532 = x_0; /*string*/
    }
    else {
      _x_x532 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x535;
  kk_define_string_literal(static, _s_x536, 1, ".", _ctx)
  _x_x535 = kk_string_dup(_s_x536, _ctx); /*string*/
  _match_x448 = kk_std_core_sslice_find_last(_x_x532, _x_x535, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x448, _ctx)) {
    kk_box_t _box_x33 = _match_x448._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x33, KK_BORROWED, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x448, _ctx);
    kk_string_t _b_x34_40;
    kk_std_core_sslice__sslice _x_x537;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x537 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x34_40 = kk_std_core_sslice_string(_x_x537, _ctx); /*string*/
    kk_string_t _b_x35_41;
    kk_std_core_sslice__sslice _x_x538 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x35_41 = kk_std_core_sslice_string(_x_x538, _ctx); /*string*/
    tuple2_10024 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x34_40), kk_string_box(_b_x35_41), _ctx); /*(string, string)*/
  }
  else {
    kk_box_t _x_x539;
    kk_string_t _x_x540;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x541 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x36 = _con_x541->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x541->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x36);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x540 = x_0_0; /*string*/
      }
      else {
        _x_x540 = kk_string_empty(); /*string*/
      }
    }
    _x_x539 = kk_string_box(_x_x540); /*134*/
    kk_box_t _x_x543;
    kk_string_t _x_x544 = kk_string_empty(); /*string*/
    _x_x543 = kk_string_box(_x_x544); /*135*/
    tuple2_10024 = kk_std_core_types__new_Tuple2(_x_x539, _x_x543, _ctx); /*(string, string)*/
  }
  {
    kk_box_t _box_x44 = tuple2_10024.fst;
    kk_box_t _box_x45 = tuple2_10024.snd;
    kk_string_t _x_0_0 = kk_string_unbox(_box_x44);
    kk_string_dup(_x_0_0, _ctx);
    kk_std_core_types__tuple2_drop(tuple2_10024, _ctx);
    return _x_0_0;
  }
}

kk_std_core_types__tuple2 kk_std_os_path_split_parts(kk_std_core_types__list parts, kk_context_t* _ctx) { /* (parts : list<string>) -> (string, list<string>) */ 
  kk_box_t _x_x546;
  kk_string_t _x_x547;
  if (kk_std_core_types__is_Cons(parts, _ctx)) {
    struct kk_std_core_types_Cons* _con_x548 = kk_std_core_types__as_Cons(parts, _ctx);
    kk_box_t _box_x46 = _con_x548->head;
    kk_string_t x_0 = kk_string_unbox(_box_x46);
    kk_string_dup(x_0, _ctx);
    _x_x547 = x_0; /*string*/
  }
  else {
    _x_x547 = kk_string_empty(); /*string*/
  }
  _x_x546 = kk_string_box(_x_x547); /*134*/
  kk_box_t _x_x550;
  kk_std_core_types__list _x_x551;
  if (kk_std_core_types__is_Cons(parts, _ctx)) {
    struct kk_std_core_types_Cons* _con_x552 = kk_std_core_types__as_Cons(parts, _ctx);
    kk_box_t _box_x48 = _con_x552->head;
    kk_std_core_types__list xx = _con_x552->tail;
    kk_string_t _pat_0_1_0 = kk_string_unbox(_box_x48);
    if kk_likely(kk_datatype_ptr_is_unique(parts, _ctx)) {
      kk_string_drop(_pat_0_1_0, _ctx);
      kk_datatype_ptr_free(parts, _ctx);
    }
    else {
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(parts, _ctx);
    }
    _x_x551 = xx; /*list<string>*/
  }
  else {
    _x_x551 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  _x_x550 = kk_std_core_types__list_box(_x_x551, _ctx); /*135*/
  return kk_std_core_types__new_Tuple2(_x_x546, _x_x550, _ctx);
}
 
// Return the first path if it is not empty, otherwise return the second one.

kk_std_os_path__path kk_std_os_path__lp__bar__bar__rp_(kk_std_os_path__path p1, kk_std_os_path__path p2, kk_context_t* _ctx) { /* (p1 : path, p2 : path) -> path */ 
  bool _match_x447;
  kk_string_t _x_x560;
  {
    kk_string_t _x = p1.root;
    kk_string_dup(_x, _ctx);
    _x_x560 = _x; /*string*/
  }
  kk_string_t _x_x561 = kk_string_empty(); /*string*/
  _match_x447 = kk_string_is_eq(_x_x560,_x_x561,kk_context()); /*bool*/
  if (_match_x447) {
    kk_std_core_types__list _x_0 = p1.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    if (kk_std_core_types__is_Nil(_x_0, _ctx)) {
      kk_std_os_path__path_drop(p1, _ctx);
      return p2;
    }
    {
      kk_std_os_path__path_drop(p2, _ctx);
      kk_std_core_types__list_drop(_x_0, _ctx);
      return p1;
    }
  }
  {
    kk_std_os_path__path_drop(p2, _ctx);
    return p1;
  }
}

kk_std_core_types__list kk_std_os_path_push_part(kk_string_t dir, kk_std_core_types__list dirs, kk_context_t* _ctx) { /* (dir : string, dirs : list<string>) -> list<string> */ 
  bool _match_x444;
  kk_string_t _x_x563 = kk_string_dup(dir, _ctx); /*string*/
  kk_string_t _x_x564;
  kk_define_string_literal(static, _s_x565, 1, ".", _ctx)
  _x_x564 = kk_string_dup(_s_x565, _ctx); /*string*/
  _match_x444 = kk_string_is_eq(_x_x563,_x_x564,kk_context()); /*bool*/
  if (_match_x444) {
    kk_string_drop(dir, _ctx);
    return dirs;
  }
  {
    bool _match_x445;
    kk_string_t _x_x566 = kk_string_dup(dir, _ctx); /*string*/
    kk_string_t _x_x567 = kk_string_empty(); /*string*/
    _match_x445 = kk_string_is_eq(_x_x566,_x_x567,kk_context()); /*bool*/
    if (_match_x445) {
      kk_string_drop(dir, _ctx);
      return dirs;
    }
    {
      bool _match_x446;
      kk_string_t _x_x569 = kk_string_dup(dir, _ctx); /*string*/
      kk_string_t _x_x570;
      kk_define_string_literal(static, _s_x571, 2, "..", _ctx)
      _x_x570 = kk_string_dup(_s_x571, _ctx); /*string*/
      _match_x446 = kk_string_is_eq(_x_x569,_x_x570,kk_context()); /*bool*/
      if (_match_x446) {
        if (kk_std_core_types__is_Cons(dirs, _ctx)) {
          struct kk_std_core_types_Cons* _con_x572 = kk_std_core_types__as_Cons(dirs, _ctx);
          kk_box_t _box_x53 = _con_x572->head;
          kk_string_drop(dir, _ctx);
          if (kk_std_core_types__is_Cons(dirs, _ctx)) {
            struct kk_std_core_types_Cons* _con_x573 = kk_std_core_types__as_Cons(dirs, _ctx);
            kk_box_t _box_x54 = _con_x573->head;
            kk_std_core_types__list xx = _con_x573->tail;
            kk_string_t _pat_0_1 = kk_string_unbox(_box_x54);
            if kk_likely(kk_datatype_ptr_is_unique(dirs, _ctx)) {
              kk_string_drop(_pat_0_1, _ctx);
              kk_datatype_ptr_free(dirs, _ctx);
            }
            else {
              kk_std_core_types__list_dup(xx, _ctx);
              kk_datatype_ptr_decref(dirs, _ctx);
            }
            return xx;
          }
          {
            return kk_std_core_types__new_Nil(_ctx);
          }
        }
        {
          return kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(dir), dirs, _ctx);
        }
      }
      {
        return kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(dir), dirs, _ctx);
      }
    }
  }
}

kk_std_core_types__list kk_std_os_path_push_parts(kk_std_core_types__list parts, kk_std_core_types__list dirs, kk_context_t* _ctx) { /* (parts : list<string>, dirs : list<string>) -> list<string> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(parts, _ctx)) {
    struct kk_std_core_types_Cons* _con_x574 = kk_std_core_types__as_Cons(parts, _ctx);
    kk_box_t _box_x63 = _con_x574->head;
    kk_std_core_types__list rest = _con_x574->tail;
    kk_string_t part = kk_string_unbox(_box_x63);
    if kk_likely(kk_datatype_ptr_is_unique(parts, _ctx)) {
      kk_datatype_ptr_free(parts, _ctx);
    }
    else {
      kk_string_dup(part, _ctx);
      kk_std_core_types__list_dup(rest, _ctx);
      kk_datatype_ptr_decref(parts, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x575 = kk_std_os_path_push_part(part, dirs, _ctx); /*list<string>*/
      parts = rest;
      dirs = _x_x575;
      goto kk__tailcall;
    }
  }
  {
    return dirs;
  }
}

kk_std_os_path__path kk_std_os_path_path_parts(kk_string_t root, kk_string_t s, kk_std_core_types__optional dirs, kk_context_t* _ctx) { /* (root : string, s : string, dirs : ? (list<string>)) -> path */ 
  kk_vector_t v_10011;
  kk_string_t _x_x576;
  kk_define_string_literal(static, _s_x577, 1, "/", _ctx)
  _x_x576 = kk_string_dup(_s_x577, _ctx); /*string*/
  v_10011 = kk_string_splitv(s,_x_x576,kk_context()); /*vector<string>*/
  kk_std_core_types__list parts;
  kk_std_core_types__list _x_x578 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<935>*/
  kk_std_core_types__list _x_x579;
  if (kk_std_core_types__is_Optional(dirs, _ctx)) {
    kk_box_t _box_x64 = dirs._cons._Optional.value;
    kk_std_core_types__list _uniq_dirs_1153 = kk_std_core_types__list_unbox(_box_x64, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_dirs_1153, _ctx);
    kk_std_core_types__optional_drop(dirs, _ctx);
    _x_x579 = _uniq_dirs_1153; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(dirs, _ctx);
    _x_x579 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  parts = kk_std_os_path_push_parts(_x_x578, _x_x579, _ctx); /*list<string>*/
  return kk_std_os_path__new_Path(root, parts, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_proot_10187_fun581__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10187_fun581(kk_function_t _fself, kk_box_t _b_x66, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10187_fun581(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10187_fun581, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10187_fun581(kk_function_t _fself, kk_box_t _b_x66, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x582 = kk_Unit;
  kk_char_t _x_x583 = kk_char_unbox(_b_x66, KK_OWNED, _ctx); /*char*/
  kk_std_os_path__mlift_proot_10186(_x_x583, _ctx);
  return kk_unit_box(_x_x582);
}

kk_unit_t kk_std_os_path__mlift_proot_10187(kk_char_t wild__, kk_context_t* _ctx) { /* (wild_ : char) -> std/text/parse/parse () */ 
  kk_char_t x_10199 = kk_std_text_parse_char(':', _ctx); /*char*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x580 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10187_fun581(_ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x580); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_proot_10189_fun584__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10189_fun584(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10189_fun584(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10189_fun584, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10189_fun584(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t _x_x585;
  kk_string_t _x_x586;
  kk_define_string_literal(static, _s_x587, 1, "/", _ctx)
  _x_x586 = kk_string_dup(_s_x587, _ctx); /*string*/
  _x_x585 = kk_std_text_parse_none_of(_x_x586, _ctx); /*char*/
  return kk_char_box(_x_x585, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift_proot_10189_fun589__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10189_fun589(kk_function_t _fself, kk_box_t _b_x73, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10189_fun589(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10189_fun589, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10189_fun589(kk_function_t _fself, kk_box_t _b_x73, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x590 = kk_Unit;
  kk_std_core_types__list _x_x591 = kk_std_core_types__list_unbox(_b_x73, KK_OWNED, _ctx); /*list<char>*/
  kk_std_os_path__mlift_proot_10188(_x_x591, _ctx);
  return kk_unit_box(_x_x590);
}

kk_unit_t kk_std_os_path__mlift_proot_10189(kk_char_t _y_x10137, kk_context_t* _ctx) { /* (char) -> std/text/parse/parse () */ 
  kk_std_core_types__list x_10201 = kk_std_text_parse_many_acc(kk_std_os_path__new_mlift_proot_10189_fun584(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<char>*/;
  kk_std_core_types__list_drop(x_10201, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x588 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10189_fun589(_ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x588); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_proot_10190_fun595__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10190_fun595(kk_function_t _fself, kk_box_t _b_x76, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10190_fun595(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10190_fun595, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10190_fun595(kk_function_t _fself, kk_box_t _b_x76, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x596 = kk_Unit;
  kk_char_t _x_x597 = kk_char_unbox(_b_x76, KK_OWNED, _ctx); /*char*/
  kk_std_os_path__mlift_proot_10189(_x_x597, _ctx);
  return kk_unit_box(_x_x596);
}

kk_unit_t kk_std_os_path__mlift_proot_10190(kk_char_t wild___1, kk_context_t* _ctx) { /* (wild_@1 : char) -> std/text/parse/parse () */ 
  kk_char_t x_10203;
  kk_string_t _x_x592;
  kk_define_string_literal(static, _s_x593, 1, "/", _ctx)
  _x_x592 = kk_string_dup(_s_x593, _ctx); /*string*/
  x_10203 = kk_std_text_parse_none_of(_x_x592, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x594 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10190_fun595(_ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x594); return kk_Unit;
  }
  {
    kk_std_os_path__mlift_proot_10189(x_10203, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_proot_10191_fun599__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10191_fun599(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10191_fun599(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10191_fun599, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path__mlift_proot_10191_fun602__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10191_fun602(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10191_fun602(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10191_fun602, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10191_fun602(kk_function_t _fself, kk_box_t _b_x79, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x603;
  kk_char_t _x_x604 = kk_char_unbox(_b_x79, KK_OWNED, _ctx); /*char*/
  _x_x603 = kk_std_os_path__mlift_proot_10184(_x_x604, _ctx); /*bool*/
  return kk_bool_box(_x_x603);
}
static kk_box_t kk_std_os_path__mlift_proot_10191_fun599(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t x_10205 = kk_std_text_parse_char('/', _ctx); /*char*/;
  bool _x_x600;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x601 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10191_fun602(_ctx), _ctx); /*2419*/
    _x_x600 = kk_bool_unbox(_x_x601); /*bool*/
  }
  else {
    _x_x600 = false; /*bool*/
  }
  return kk_bool_box(_x_x600);
}


// lift anonymous function
struct kk_std_os_path__mlift_proot_10191_fun605__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10191_fun605(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10191_fun605(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10191_fun605, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path__mlift_proot_10191_fun608__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10191_fun608(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10191_fun608(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10191_fun608, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10191_fun608(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x609;
  kk_unit_t _x_x610 = kk_Unit;
  kk_unit_unbox(_b_x81);
  _x_x609 = kk_std_os_path__mlift_proot_10185(_x_x610, _ctx); /*bool*/
  return kk_bool_box(_x_x609);
}
static kk_box_t kk_std_os_path__mlift_proot_10191_fun605(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t x_0_10207 = kk_Unit;
  kk_std_text_parse_eof(_ctx);
  bool _x_x606;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x607 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10191_fun608(_ctx), _ctx); /*2419*/
    _x_x606 = kk_bool_unbox(_x_x607); /*bool*/
  }
  else {
    _x_x606 = true; /*bool*/
  }
  return kk_bool_box(_x_x606);
}

bool kk_std_os_path__mlift_proot_10191(kk_unit_t wild___3, kk_context_t* _ctx) { /* (wild_@3 : ()) -> std/text/parse/parse bool */ 
  kk_box_t _x_x598 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_os_path__new_mlift_proot_10191_fun599(_ctx), kk_std_os_path__new_mlift_proot_10191_fun605(_ctx), _ctx); /*1542*/
  return kk_bool_unbox(_x_x598);
}


// lift anonymous function
struct kk_std_os_path_proot_fun612__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun612(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun612(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun612, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path_proot_fun615__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun615(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun615(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun615, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun615(kk_function_t _fself, kk_box_t _b_x89, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x616 = kk_Unit;
  kk_char_t _x_x617 = kk_char_unbox(_b_x89, KK_OWNED, _ctx); /*char*/
  kk_std_os_path__mlift_proot_10187(_x_x617, _ctx);
  return kk_unit_box(_x_x616);
}
static kk_box_t kk_std_os_path_proot_fun612(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t x_0_10212 = kk_std_text_parse_alpha(_ctx); /*char*/;
  kk_unit_t _x_x613 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x614 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun615(_ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x614);
  }
  else {
    kk_std_os_path__mlift_proot_10187(x_0_10212, _ctx);
  }
  return kk_unit_box(_x_x613);
}


// lift anonymous function
struct kk_std_os_path_proot_fun618__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun618(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun618(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun618, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path_proot_fun621__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun621(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun621(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun621, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun621(kk_function_t _fself, kk_box_t _b_x91, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t _x_x622 = kk_Unit;
  kk_char_t _x_x623 = kk_char_unbox(_b_x91, KK_OWNED, _ctx); /*char*/
  kk_std_os_path__mlift_proot_10190(_x_x623, _ctx);
  return kk_unit_box(_x_x622);
}
static kk_box_t kk_std_os_path_proot_fun618(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t x_1_10214 = kk_std_text_parse_char('/', _ctx); /*char*/;
  kk_unit_t _x_x619 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x620 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun621(_ctx), _ctx); /*2419*/
    kk_unit_unbox(_x_x620);
  }
  else {
    kk_std_os_path__mlift_proot_10190(x_1_10214, _ctx);
  }
  return kk_unit_box(_x_x619);
}


// lift anonymous function
struct kk_std_os_path_proot_fun625__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun625(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun625(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun625, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun625(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x626;
  kk_unit_t _x_x627 = kk_Unit;
  kk_unit_unbox(_b_x99);
  _x_x626 = kk_std_os_path__mlift_proot_10191(_x_x627, _ctx); /*bool*/
  return kk_bool_box(_x_x626);
}


// lift anonymous function
struct kk_std_os_path_proot_fun628__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun628(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun628(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun628, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path_proot_fun631__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun631(kk_function_t _fself, kk_box_t _b_x101, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun631(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun631, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun631(kk_function_t _fself, kk_box_t _b_x101, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x632;
  kk_char_t _x_x633 = kk_char_unbox(_b_x101, KK_OWNED, _ctx); /*char*/
  _x_x632 = kk_std_os_path__mlift_proot_10184(_x_x633, _ctx); /*bool*/
  return kk_bool_box(_x_x632);
}
static kk_box_t kk_std_os_path_proot_fun628(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_char_t x_2_10216 = kk_std_text_parse_char('/', _ctx); /*char*/;
  bool _x_x629;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x630 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun631(_ctx), _ctx); /*2419*/
    _x_x629 = kk_bool_unbox(_x_x630); /*bool*/
  }
  else {
    _x_x629 = false; /*bool*/
  }
  return kk_bool_box(_x_x629);
}


// lift anonymous function
struct kk_std_os_path_proot_fun634__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun634(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun634(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun634, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path_proot_fun637__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun637(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun637(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun637, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun637(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x638;
  kk_unit_t _x_x639 = kk_Unit;
  kk_unit_unbox(_b_x103);
  _x_x638 = kk_std_os_path__mlift_proot_10185(_x_x639, _ctx); /*bool*/
  return kk_bool_box(_x_x638);
}
static kk_box_t kk_std_os_path_proot_fun634(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t x_3_10218 = kk_Unit;
  kk_std_text_parse_eof(_ctx);
  bool _x_x635;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x636 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun637(_ctx), _ctx); /*2419*/
    _x_x635 = kk_bool_unbox(_x_x636); /*bool*/
  }
  else {
    _x_x635 = true; /*bool*/
  }
  return kk_bool_box(_x_x635);
}

bool kk_std_os_path_proot(kk_context_t* _ctx) { /* () -> std/text/parse/parse bool */ 
  kk_unit_t x_10209 = kk_Unit;
  kk_box_t _x_x611 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_os_path_new_proot_fun612(_ctx), kk_std_os_path_new_proot_fun618(_ctx), _ctx); /*1542*/
  kk_unit_unbox(_x_x611);
  kk_box_t _x_x624;
  if (kk_yielding(kk_context())) {
    _x_x624 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun625(_ctx), _ctx); /*2419*/
  }
  else {
    _x_x624 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_os_path_new_proot_fun628(_ctx), kk_std_os_path_new_proot_fun634(_ctx), _ctx); /*2419*/
  }
  return kk_bool_unbox(_x_x624);
}
 
// Create a normalized `:path` from a path string.


// lift anonymous function
struct kk_std_os_path_path_fun650__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_path_fun650(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_path_fun650(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_path_fun650, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_path_fun650(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x651 = kk_std_os_path_proot(_ctx); /*bool*/
  return kk_bool_box(_x_x651);
}

kk_std_os_path__path kk_std_os_path_path(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> path */ 
  bool _match_x430;
  kk_string_t _x_x640 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x641 = kk_string_empty(); /*string*/
  _match_x430 = kk_string_is_eq(_x_x640,_x_x641,kk_context()); /*bool*/
  if (_match_x430) {
    kk_string_drop(s, _ctx);
    kk_string_t _x_x643 = kk_string_empty(); /*string*/
    return kk_std_os_path__new_Path(_x_x643, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    kk_string_t t;
    kk_string_t _x_x645;
    kk_define_string_literal(static, _s_x646, 1, "\\", _ctx)
    _x_x645 = kk_string_dup(_s_x646, _ctx); /*string*/
    kk_string_t _x_x647;
    kk_define_string_literal(static, _s_x648, 1, "/", _ctx)
    _x_x647 = kk_string_dup(_s_x648, _ctx); /*string*/
    t = kk_string_replace_all(s,_x_x645,_x_x647,kk_context()); /*string*/
    kk_std_core_types__maybe _match_x431;
    kk_string_t _x_x649 = kk_string_dup(t, _ctx); /*string*/
    _match_x431 = kk_std_text_parse_starts_with(_x_x649, kk_std_os_path_new_path_fun650(_ctx), _ctx); /*maybe<(1515, sslice/sslice)>*/
    if (kk_std_core_types__is_Nothing(_match_x431, _ctx)) {
      kk_vector_t v_10011;
      kk_string_t _x_x652;
      kk_define_string_literal(static, _s_x653, 1, "/", _ctx)
      _x_x652 = kk_string_dup(_s_x653, _ctx); /*string*/
      v_10011 = kk_string_splitv(t,_x_x652,kk_context()); /*vector<string>*/
      kk_std_core_types__list parts;
      kk_std_core_types__list _x_x654 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<935>*/
      kk_std_core_types__list _x_x655;
      kk_std_core_types__optional _match_x433 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x433, _ctx)) {
        kk_box_t _box_x113 = _match_x433._cons._Optional.value;
        kk_std_core_types__list _uniq_dirs_1153 = kk_std_core_types__list_unbox(_box_x113, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(_uniq_dirs_1153, _ctx);
        kk_std_core_types__optional_drop(_match_x433, _ctx);
        _x_x655 = _uniq_dirs_1153; /*list<string>*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x433, _ctx);
        _x_x655 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
      }
      parts = kk_std_os_path_push_parts(_x_x654, _x_x655, _ctx); /*list<string>*/
      kk_string_t _x_x656 = kk_string_empty(); /*string*/
      return kk_std_os_path__new_Path(_x_x656, parts, _ctx);
    }
    {
      kk_box_t _box_x114 = _match_x431._cons.Just.value;
      kk_std_core_types__tuple2 _pat_3 = kk_std_core_types__tuple2_unbox(_box_x114, KK_BORROWED, _ctx);
      kk_box_t _box_x115 = _pat_3.fst;
      kk_box_t _box_x116 = _pat_3.snd;
      kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x116, KK_BORROWED, _ctx);
      bool eof = kk_bool_unbox(_box_x115);
      kk_string_drop(t, _ctx);
      kk_std_core_sslice__sslice_dup(rest, _ctx);
      kk_std_core_types__maybe_drop(_match_x431, _ctx);
      kk_string_t root_0_10104;
      kk_string_t _x_x658;
      kk_std_core_sslice__sslice _x_x659;
      {
        kk_string_t s_1_0 = rest.str;
        kk_integer_t start = rest.start;
        kk_string_dup(s_1_0, _ctx);
        kk_integer_dup(start, _ctx);
        _x_x659 = kk_std_core_sslice__new_Sslice(s_1_0, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
      }
      _x_x658 = kk_std_core_sslice_string(_x_x659, _ctx); /*string*/
      kk_string_t _x_x660;
      if (eof) {
        kk_define_string_literal(static, _s_x661, 1, "/", _ctx)
        _x_x660 = kk_string_dup(_s_x661, _ctx); /*string*/
      }
      else {
        _x_x660 = kk_string_empty(); /*string*/
      }
      root_0_10104 = kk_std_core_types__lp__plus__plus__rp_(_x_x658, _x_x660, _ctx); /*string*/
      kk_string_t s_1_10105 = kk_std_core_sslice_string(rest, _ctx); /*string*/;
      kk_vector_t v_10011_0;
      kk_string_t _x_x663;
      kk_define_string_literal(static, _s_x664, 1, "/", _ctx)
      _x_x663 = kk_string_dup(_s_x664, _ctx); /*string*/
      v_10011_0 = kk_string_splitv(s_1_10105,_x_x663,kk_context()); /*vector<string>*/
      kk_std_core_types__list parts_0;
      kk_std_core_types__list _x_x665 = kk_std_core_vector_vlist(v_10011_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<935>*/
      kk_std_core_types__list _x_x666;
      kk_std_core_types__optional _match_x432 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x432, _ctx)) {
        kk_box_t _box_x117 = _match_x432._cons._Optional.value;
        kk_std_core_types__list _uniq_dirs_1153_0 = kk_std_core_types__list_unbox(_box_x117, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(_uniq_dirs_1153_0, _ctx);
        kk_std_core_types__optional_drop(_match_x432, _ctx);
        _x_x666 = _uniq_dirs_1153_0; /*list<string>*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x432, _ctx);
        _x_x666 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
      }
      parts_0 = kk_std_os_path_push_parts(_x_x665, _x_x666, _ctx); /*list<string>*/
      return kk_std_os_path__new_Path(root_0_10104, parts_0, _ctx);
    }
  }
}


// lift anonymous function
struct kk_std_os_path__trmc_paths_collect_fun675__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_os_path__trmc_paths_collect_fun675(kk_function_t _fself, kk_char_t _b_x122, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_trmc_paths_collect_fun675(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__trmc_paths_collect_fun675, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_os_path__trmc_paths_collect_fun675(kk_function_t _fself, kk_char_t _b_x122, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_types__new_Just(kk_char_box(_b_x122, _ctx), _ctx);
}

kk_std_core_types__list kk_std_os_path__trmc_paths_collect(kk_std_core_types__list ps, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (ps : list<string>, ctx<list<path>>) -> list<path> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ps, _ctx)) {
    struct kk_std_core_types_Cons* _con_x667 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_box_t _box_x120 = _con_x667->head;
    kk_std_core_types__list _pat_0 = _con_x667->tail;
    if (kk_std_core_types__is_Cons(_pat_0, _ctx)) {
      struct kk_std_core_types_Cons* _con_x668 = kk_std_core_types__as_Cons(_pat_0, _ctx);
      kk_box_t _box_x121 = _con_x668->head;
      kk_string_t root = kk_string_unbox(_box_x120);
      kk_string_t part = kk_string_unbox(_box_x121);
      bool _match_x426;
      kk_integer_t _brw_x428;
      kk_string_t _x_x669 = kk_string_dup(root, _ctx); /*string*/
      _brw_x428 = kk_std_core_string_chars_fs_count(_x_x669, _ctx); /*int*/
      bool _brw_x429 = kk_integer_eq_borrow(_brw_x428,(kk_integer_from_small(1)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x428, _ctx);
      _match_x426 = _brw_x429; /*bool*/
      bool _x_x670;
      if (_match_x426) {
        kk_std_core_types__maybe m_10047;
        kk_std_core_sslice__sslice _x_x671;
        kk_string_t _x_x672 = kk_string_dup(root, _ctx); /*string*/
        kk_integer_t _x_x673;
        kk_string_t _x_x674 = kk_string_dup(root, _ctx); /*string*/
        _x_x673 = kk_string_len_int(_x_x674,kk_context()); /*int*/
        _x_x671 = kk_std_core_sslice__new_Sslice(_x_x672, kk_integer_from_small(0), _x_x673, _ctx); /*sslice/sslice*/
        m_10047 = kk_std_core_sslice_slice_fs_foreach_while(_x_x671, kk_std_os_path__new_trmc_paths_collect_fun675(_ctx), _ctx); /*maybe<char>*/
        bool _match_x427;
        kk_char_t _x_x676;
        if (kk_std_core_types__is_Nothing(m_10047, _ctx)) {
          _x_x676 = ' '; /*char*/
        }
        else {
          kk_box_t _box_x123 = m_10047._cons.Just.value;
          kk_char_t x = kk_char_unbox(_box_x123, KK_BORROWED, _ctx);
          kk_std_core_types__maybe_drop(m_10047, _ctx);
          _x_x676 = x; /*char*/
        }
        _match_x427 = kk_std_core_char_is_alpha(_x_x676, _ctx); /*bool*/
        if (_match_x427) {
          bool b_10050;
          kk_string_t _x_x677 = kk_string_dup(part, _ctx); /*string*/
          kk_string_t _x_x678 = kk_string_empty(); /*string*/
          b_10050 = kk_string_is_eq(_x_x677,_x_x678,kk_context()); /*bool*/
          if (b_10050) {
            _x_x670 = false; /*bool*/
          }
          else {
            kk_string_t _x_x680;
            kk_define_string_literal(static, _s_x681, 2, "/\\", _ctx)
            _x_x680 = kk_string_dup(_s_x681, _ctx); /*string*/
            kk_string_t _x_x682;
            kk_string_t _x_x683 = kk_string_dup(part, _ctx); /*string*/
            _x_x682 = kk_std_core_sslice_head(_x_x683, _ctx); /*string*/
            _x_x670 = kk_string_contains(_x_x680,_x_x682,kk_context()); /*bool*/
          }
        }
        else {
          _x_x670 = false; /*bool*/
        }
      }
      else {
        _x_x670 = false; /*bool*/
      }
      if (_x_x670) {
        kk_std_core_types__list rest = _con_x668->tail;
        kk_reuse_t _ru_x463 = kk_reuse_null; /*@reuse*/;
        if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
          if kk_likely(kk_datatype_ptr_is_unique(_pat_0, _ctx)) {
            kk_datatype_ptr_free(_pat_0, _ctx);
          }
          else {
            kk_string_dup(part, _ctx);
            kk_std_core_types__list_dup(rest, _ctx);
            kk_datatype_ptr_decref(_pat_0, _ctx);
          }
          _ru_x463 = (kk_datatype_ptr_reuse(ps, _ctx));
        }
        else {
          kk_string_dup(part, _ctx);
          kk_std_core_types__list_dup(rest, _ctx);
          kk_string_dup(root, _ctx);
          kk_datatype_ptr_decref(ps, _ctx);
        }
        kk_std_os_path__path _trmc_x10128;
        kk_string_t _x_x684;
        kk_string_t _x_x685;
        kk_string_t _x_x686;
        kk_define_string_literal(static, _s_x687, 1, ":", _ctx)
        _x_x686 = kk_string_dup(_s_x687, _ctx); /*string*/
        _x_x685 = kk_std_core_types__lp__plus__plus__rp_(_x_x686, part, _ctx); /*string*/
        _x_x684 = kk_std_core_types__lp__plus__plus__rp_(root, _x_x685, _ctx); /*string*/
        _trmc_x10128 = kk_std_os_path_path(_x_x684, _ctx); /*std/os/path/path*/
        kk_std_core_types__list _trmc_x10129 = kk_datatype_null(); /*list<std/os/path/path>*/;
        kk_std_core_types__list _trmc_x10130 = kk_std_core_types__new_Cons(_ru_x463, 0, kk_std_os_path__path_box(_trmc_x10128, _ctx), _trmc_x10129, _ctx); /*list<std/os/path/path>*/;
        kk_field_addr_t _b_x133_149 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10130, _ctx)->tail, _ctx); /*@field-addr<list<std/os/path/path>>*/;
        { // tailcall
          kk_std_core_types__cctx _x_x688 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10130, _ctx)),_b_x133_149,kk_context()); /*ctx<0>*/
          ps = rest;
          _acc = _x_x688;
          goto kk__tailcall;
        }
      }
    }
  }
  if (kk_std_core_types__is_Cons(ps, _ctx)) {
    struct kk_std_core_types_Cons* _con_x689 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_box_t _box_x134 = _con_x689->head;
    kk_std_core_types__list rest_0 = _con_x689->tail;
    kk_string_t part_0 = kk_string_unbox(_box_x134);
    kk_reuse_t _ru_x464 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
      _ru_x464 = (kk_datatype_ptr_reuse(ps, _ctx));
    }
    else {
      kk_string_dup(part_0, _ctx);
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_datatype_ptr_decref(ps, _ctx);
    }
    kk_std_os_path__path _trmc_x10131 = kk_std_os_path_path(part_0, _ctx); /*std/os/path/path*/;
    kk_std_core_types__list _trmc_x10132 = kk_datatype_null(); /*list<std/os/path/path>*/;
    kk_std_core_types__list _trmc_x10133 = kk_std_core_types__new_Cons(_ru_x464, 0, kk_std_os_path__path_box(_trmc_x10131, _ctx), _trmc_x10132, _ctx); /*list<std/os/path/path>*/;
    kk_field_addr_t _b_x144_155 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10133, _ctx)->tail, _ctx); /*@field-addr<list<std/os/path/path>>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x690 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10133, _ctx)),_b_x144_155,kk_context()); /*ctx<0>*/
      ps = rest_0;
      _acc = _x_x690;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x691 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x691, KK_OWNED, _ctx);
  }
}

kk_std_core_types__list kk_std_os_path_paths_collect(kk_std_core_types__list ps_0, kk_context_t* _ctx) { /* (ps : list<string>) -> list<path> */ 
  kk_std_core_types__cctx _x_x692 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_os_path__trmc_paths_collect(ps_0, _x_x692, _ctx);
}
 
// Add two paths together using left-associative operator `(/)`.
// Keeps the root of `p1` and discards the root name of `p2`.
// `"/a/" / "b/foo.txt"          === "/a/b/foo.txt"`
// `"/a/foo.txt" / "/b/bar.txt"  === "/a/foo.txt/b/bar.txt"`
// `"c:/foo" / "d:/bar"          === "c:/foo/bar"`

kk_std_os_path__path kk_std_os_path__lp__fs__rp_(kk_std_os_path__path p1, kk_std_os_path__path p2, kk_context_t* _ctx) { /* (p1 : path, p2 : path) -> path */ 
  kk_std_core_types__list _b_x161_162;
  kk_std_core_types__list _x_x700;
  kk_std_core_types__list _x_x701;
  {
    kk_std_core_types__list _x_0 = p2.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    kk_std_os_path__path_drop(p2, _ctx);
    _x_x701 = _x_0; /*list<string>*/
  }
  _x_x700 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), _x_x701, _ctx); /*list<1048>*/
  kk_std_core_types__list _x_x702;
  {
    kk_std_core_types__list _x_1 = p1.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _x_x702 = _x_1; /*list<string>*/
  }
  _b_x161_162 = kk_std_os_path_push_parts(_x_x700, _x_x702, _ctx); /*list<string>*/
  kk_string_t _x_x703;
  {
    kk_string_t _x = p1.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p1, _ctx);
    _x_x703 = _x; /*string*/
  }
  kk_std_core_types__list _x_x704;
  kk_std_core_types__optional _match_x425 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x161_162, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x425, _ctx)) {
    kk_box_t _box_x163 = _match_x425._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_95 = kk_std_core_types__list_unbox(_box_x163, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_95, _ctx);
    kk_std_core_types__optional_drop(_match_x425, _ctx);
    _x_x704 = _uniq_parts_95; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x425, _ctx);
    _x_x704 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x_x703, _x_x704, _ctx);
}
 
// Convenience function that adds a string path.

kk_std_os_path__path kk_std_os_path_pathstring_fs__lp__fs__rp_(kk_std_os_path__path p1, kk_string_t p2, kk_context_t* _ctx) { /* (p1 : path, p2 : string) -> path */ 
  kk_std_os_path__path p2_0_10108 = kk_std_os_path_path(p2, _ctx); /*std/os/path/path*/;
  kk_std_core_types__list _b_x164_165;
  kk_std_core_types__list _x_x705;
  kk_std_core_types__list _x_x706;
  {
    kk_std_core_types__list _x_0 = p2_0_10108.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    kk_std_os_path__path_drop(p2_0_10108, _ctx);
    _x_x706 = _x_0; /*list<string>*/
  }
  _x_x705 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), _x_x706, _ctx); /*list<1048>*/
  kk_std_core_types__list _x_x707;
  {
    kk_std_core_types__list _x_1 = p1.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _x_x707 = _x_1; /*list<string>*/
  }
  _b_x164_165 = kk_std_os_path_push_parts(_x_x705, _x_x707, _ctx); /*list<string>*/
  kk_string_t _x_x708;
  {
    kk_string_t _x = p1.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p1, _ctx);
    _x_x708 = _x; /*string*/
  }
  kk_std_core_types__list _x_x709;
  kk_std_core_types__optional _match_x424 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x164_165, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x424, _ctx)) {
    kk_box_t _box_x166 = _match_x424._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_95 = kk_std_core_types__list_unbox(_box_x166, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_95, _ctx);
    kk_std_core_types__optional_drop(_match_x424, _ctx);
    _x_x709 = _uniq_parts_95; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x424, _ctx);
    _x_x709 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x_x708, _x_x709, _ctx);
}
 
// Convenience function that adds two strings into a path.

kk_std_os_path__path kk_std_os_path_string_fs__lp__fs__rp_(kk_string_t p1, kk_string_t p2, kk_context_t* _ctx) { /* (p1 : string, p2 : string) -> path */ 
  kk_std_os_path__path p1_0_10109 = kk_std_os_path_path(p1, _ctx); /*std/os/path/path*/;
  kk_std_os_path__path p2_0_10110 = kk_std_os_path_path(p2, _ctx); /*std/os/path/path*/;
  kk_std_core_types__list _b_x167_168;
  kk_std_core_types__list _x_x710;
  kk_std_core_types__list _x_x711;
  {
    kk_std_core_types__list _x_0 = p2_0_10110.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    kk_std_os_path__path_drop(p2_0_10110, _ctx);
    _x_x711 = _x_0; /*list<string>*/
  }
  _x_x710 = kk_std_core_list_reverse_acc(kk_std_core_types__new_Nil(_ctx), _x_x711, _ctx); /*list<1048>*/
  kk_std_core_types__list _x_x712;
  {
    kk_std_core_types__list _x_1 = p1_0_10109.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _x_x712 = _x_1; /*list<string>*/
  }
  _b_x167_168 = kk_std_os_path_push_parts(_x_x710, _x_x712, _ctx); /*list<string>*/
  kk_string_t _x_x713;
  {
    kk_string_t _x = p1_0_10109.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p1_0_10109, _ctx);
    _x_x713 = _x; /*string*/
  }
  kk_std_core_types__list _x_x714;
  kk_std_core_types__optional _match_x423 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x167_168, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x423, _ctx)) {
    kk_box_t _box_x169 = _match_x423._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_95 = kk_std_core_types__list_unbox(_box_x169, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_95, _ctx);
    kk_std_core_types__optional_drop(_match_x423, _ctx);
    _x_x714 = _uniq_parts_95; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x423, _ctx);
    _x_x714 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x_x713, _x_x714, _ctx);
}
 
// Combine multiple paths using `(/)`.


// lift anonymous function
struct kk_std_os_path_combine_fun720__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_combine_fun720(kk_function_t _fself, kk_box_t _b_x176, kk_box_t _b_x177, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_combine_fun720(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_combine_fun720, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_combine_fun720(kk_function_t _fself, kk_box_t _b_x176, kk_box_t _b_x177, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x721;
  kk_std_os_path__path _x_x722 = kk_std_os_path__path_unbox(_b_x176, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x723 = kk_std_os_path__path_unbox(_b_x177, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x721 = kk_std_os_path__lp__fs__rp_(_x_x722, _x_x723, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x721, _ctx);
}

kk_std_os_path__path kk_std_os_path_combine(kk_std_core_types__list ps, kk_context_t* _ctx) { /* (ps : list<path>) -> path */ 
  if (kk_std_core_types__is_Nil(ps, _ctx)) {
    kk_string_t _x_x715;
    kk_std_core_types__optional _match_x422 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x422, _ctx)) {
      kk_box_t _box_x170 = _match_x422._cons._Optional.value;
      kk_string_t _uniq_root_89 = kk_string_unbox(_box_x170);
      kk_string_dup(_uniq_root_89, _ctx);
      kk_std_core_types__optional_drop(_match_x422, _ctx);
      _x_x715 = _uniq_root_89; /*string*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x422, _ctx);
      _x_x715 = kk_string_empty(); /*string*/
    }
    kk_std_core_types__list _x_x717;
    kk_std_core_types__optional _match_x421 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x421, _ctx)) {
      kk_box_t _box_x171 = _match_x421._cons._Optional.value;
      kk_std_core_types__list _uniq_parts_95 = kk_std_core_types__list_unbox(_box_x171, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(_uniq_parts_95, _ctx);
      kk_std_core_types__optional_drop(_match_x421, _ctx);
      _x_x717 = _uniq_parts_95; /*list<string>*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x421, _ctx);
      _x_x717 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
    return kk_std_os_path__new_Path(_x_x715, _x_x717, _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x718 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_box_t _box_x172 = _con_x718->head;
    kk_std_os_path__path p = kk_std_os_path__path_unbox(_box_x172, KK_BORROWED, _ctx);
    kk_std_core_types__list pp = _con_x718->tail;
    if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
      kk_std_os_path__path_dup(p, _ctx);
      kk_box_drop(_box_x172, _ctx);
      kk_datatype_ptr_free(ps, _ctx);
    }
    else {
      kk_std_os_path__path_dup(p, _ctx);
      kk_std_core_types__list_dup(pp, _ctx);
      kk_datatype_ptr_decref(ps, _ctx);
    }
    kk_box_t _x_x719 = kk_std_core_list_foldl(pp, kk_std_os_path__path_box(p, _ctx), kk_std_os_path_new_combine_fun720(_ctx), _ctx); /*1203*/
    return kk_std_os_path__path_unbox(_x_x719, KK_OWNED, _ctx);
  }
}
 
// Remove the directory and root and only keep the base name (file name) portion of the path.
// `nodir("foo/bar.ext".path) === "bar.ext"`

kk_std_os_path__path kk_std_os_path_nodir(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> path */ 
  kk_std_core_types__list _b_x181_182;
  kk_std_core_types__list _x_x724;
  {
    kk_std_core_types__list _x_1 = p.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _x_x724 = _x_1; /*list<string>*/
  }
  _b_x181_182 = kk_std_core_list_take(_x_x724, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_string_t _x_x725 = kk_string_empty(); /*string*/
  kk_std_core_types__list _x_x727;
  kk_std_core_types__optional _match_x420 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x181_182, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x420, _ctx)) {
    kk_box_t _box_x183 = _match_x420._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_136 = kk_std_core_types__list_unbox(_box_x183, KK_BORROWED, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_136, _ctx);
    kk_std_core_types__optional_drop(_match_x420, _ctx);
    _x_x727 = _uniq_parts_136; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x420, _ctx);
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      _x_x727 = _x_0; /*list<string>*/
    }
  }
  return kk_std_os_path__new_Path(_x_x725, _x_x727, _ctx);
}
 
// Remove the basename and only keep the root and directory name portion of the path.
// `nobase("foo/bar.ext".path) == "foo")`

kk_std_os_path__path kk_std_os_path_nobase(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> path */ 
  kk_string_t _x_x728;
  kk_std_core_types__optional _match_x419 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x419, _ctx)) {
    kk_box_t _box_x184 = _match_x419._cons._Optional.value;
    kk_string_t _uniq_root_128 = kk_string_unbox(_box_x184);
    kk_string_dup(_uniq_root_128, _ctx);
    kk_std_core_types__optional_drop(_match_x419, _ctx);
    _x_x728 = _uniq_root_128; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x419, _ctx);
    {
      kk_string_t _x_0 = p.root;
      kk_string_dup(_x_0, _ctx);
      _x_x728 = _x_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x729;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x730 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x185 = _con_x730->head;
      kk_std_core_types__list xx = _con_x730->tail;
      kk_string_t _pat_0_2 = kk_string_unbox(_box_x185);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x729 = xx; /*list<string>*/
    }
    else {
      _x_x729 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  return kk_std_os_path__new_Path(_x_x728, _x_x729, _ctx);
}
 
// Change the extension of a path.
// Only adds a dot if the extname does not already start with a dot.

kk_std_os_path__path kk_std_os_path_change_ext(kk_std_os_path__path p, kk_string_t extname_0, kk_context_t* _ctx) { /* (p : path, extname : string) -> path */ 
  kk_std_core_types__maybe _match_x418;
  kk_string_t _x_x731;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x732 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x186 = _con_x732->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x732->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x186);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x731 = x_0; /*string*/
    }
    else {
      _x_x731 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x734;
  kk_define_string_literal(static, _s_x735, 1, ".", _ctx)
  _x_x734 = kk_string_dup(_s_x735, _ctx); /*string*/
  _match_x418 = kk_std_core_sslice_find_last(_x_x731, _x_x734, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x418, _ctx)) {
    kk_box_t _box_x188 = _match_x418._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x188, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x418, _ctx);
    kk_string_t stemname_0;
    kk_std_core_sslice__sslice _x_x736;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x736 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    stemname_0 = kk_std_core_sslice_string(_x_x736, _ctx); /*string*/
    kk_string_t _pat_1_2;
    kk_std_core_sslice__sslice _x_x737 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _pat_1_2 = kk_std_core_sslice_string(_x_x737, _ctx); /*string*/
    kk_string_drop(_pat_1_2, _ctx);
    kk_std_core_types__maybe maybe_10071;
    kk_string_t _x_x738 = kk_string_dup(extname_0, _ctx); /*string*/
    kk_string_t _x_x739;
    kk_define_string_literal(static, _s_x740, 1, ".", _ctx)
    _x_x739 = kk_string_dup(_s_x740, _ctx); /*string*/
    maybe_10071 = kk_std_core_sslice_starts_with(_x_x738, _x_x739, _ctx); /*maybe<sslice/sslice>*/
    kk_string_t newext;
    if (kk_std_core_types__is_Just(maybe_10071, _ctx)) {
      kk_box_t _box_x189 = maybe_10071._cons.Just.value;
      kk_std_core_types__maybe_drop(maybe_10071, _ctx);
      newext = extname_0; /*string*/
    }
    else {
      kk_string_t _x_x741;
      kk_define_string_literal(static, _s_x742, 1, ".", _ctx)
      _x_x741 = kk_string_dup(_s_x742, _ctx); /*string*/
      newext = kk_std_core_types__lp__plus__plus__rp_(_x_x741, extname_0, _ctx); /*string*/
    }
    kk_string_t s_0_10116 = kk_std_core_types__lp__plus__plus__rp_(stemname_0, newext, _ctx); /*string*/;
    kk_vector_t v_10011;
    kk_string_t _x_x743;
    kk_define_string_literal(static, _s_x744, 1, "/", _ctx)
    _x_x743 = kk_string_dup(_s_x744, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_0_10116,_x_x743,kk_context()); /*vector<string>*/
    kk_std_core_types__list parts;
    kk_std_core_types__list _x_x745 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<935>*/
    kk_std_core_types__list _x_x746;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x747 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x190 = _con_x747->head;
        kk_std_core_types__list xx = _con_x747->tail;
        kk_string_t _pat_0_1_0 = kk_string_unbox(_box_x190);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_string_drop(_pat_0_1_0, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_std_core_types__list_dup(xx, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x746 = xx; /*list<string>*/
      }
      else {
        _x_x746 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
      }
    }
    parts = kk_std_os_path_push_parts(_x_x745, _x_x746, _ctx); /*list<string>*/
    kk_string_t _x_x748;
    {
      kk_string_t _x_0_0 = p.root;
      kk_string_dup(_x_0_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      _x_x748 = _x_0_0; /*string*/
    }
    return kk_std_os_path__new_Path(_x_x748, parts, _ctx);
  }
  {
    kk_std_core_types__maybe maybe_10071_0;
    kk_string_t _x_x749 = kk_string_dup(extname_0, _ctx); /*string*/
    kk_string_t _x_x750;
    kk_define_string_literal(static, _s_x751, 1, ".", _ctx)
    _x_x750 = kk_string_dup(_s_x751, _ctx); /*string*/
    maybe_10071_0 = kk_std_core_sslice_starts_with(_x_x749, _x_x750, _ctx); /*maybe<sslice/sslice>*/
    kk_string_t newext_0;
    if (kk_std_core_types__is_Just(maybe_10071_0, _ctx)) {
      kk_box_t _box_x191 = maybe_10071_0._cons.Just.value;
      kk_std_core_types__maybe_drop(maybe_10071_0, _ctx);
      newext_0 = extname_0; /*string*/
    }
    else {
      kk_string_t _x_x752;
      kk_define_string_literal(static, _s_x753, 1, ".", _ctx)
      _x_x752 = kk_string_dup(_s_x753, _ctx); /*string*/
      newext_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x752, extname_0, _ctx); /*string*/
    }
    kk_string_t s_0_10116_0;
    kk_string_t _x_x754;
    {
      kk_std_core_types__list _x_1 = p.parts;
      kk_std_core_types__list_dup(_x_1, _ctx);
      if (kk_std_core_types__is_Cons(_x_1, _ctx)) {
        struct kk_std_core_types_Cons* _con_x755 = kk_std_core_types__as_Cons(_x_1, _ctx);
        kk_box_t _box_x192 = _con_x755->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x755->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x192);
        if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_1, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_1, _ctx);
        }
        _x_x754 = x_0_0; /*string*/
      }
      else {
        _x_x754 = kk_string_empty(); /*string*/
      }
    }
    s_0_10116_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x754, newext_0, _ctx); /*string*/
    kk_vector_t v_10011_0;
    kk_string_t _x_x757;
    kk_define_string_literal(static, _s_x758, 1, "/", _ctx)
    _x_x757 = kk_string_dup(_s_x758, _ctx); /*string*/
    v_10011_0 = kk_string_splitv(s_0_10116_0,_x_x757,kk_context()); /*vector<string>*/
    kk_std_core_types__list parts_0;
    kk_std_core_types__list _x_x759 = kk_std_core_vector_vlist(v_10011_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<935>*/
    kk_std_core_types__list _x_x760;
    {
      kk_std_core_types__list _x_0_1 = p.parts;
      kk_std_core_types__list_dup(_x_0_1, _ctx);
      if (kk_std_core_types__is_Cons(_x_0_1, _ctx)) {
        struct kk_std_core_types_Cons* _con_x761 = kk_std_core_types__as_Cons(_x_0_1, _ctx);
        kk_box_t _box_x194 = _con_x761->head;
        kk_std_core_types__list xx_0 = _con_x761->tail;
        kk_string_t _pat_0_1_0_0 = kk_string_unbox(_box_x194);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0_1, _ctx)) {
          kk_string_drop(_pat_0_1_0_0, _ctx);
          kk_datatype_ptr_free(_x_0_1, _ctx);
        }
        else {
          kk_std_core_types__list_dup(xx_0, _ctx);
          kk_datatype_ptr_decref(_x_0_1, _ctx);
        }
        _x_x760 = xx_0; /*list<string>*/
      }
      else {
        _x_x760 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
      }
    }
    parts_0 = kk_std_os_path_push_parts(_x_x759, _x_x760, _ctx); /*list<string>*/
    kk_string_t _x_x762;
    {
      kk_string_t _x_0_0_0 = p.root;
      kk_string_dup(_x_0_0_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      _x_x762 = _x_0_0_0; /*string*/
    }
    return kk_std_os_path__new_Path(_x_x762, parts_0, _ctx);
  }
}
 
// If a path has no extension, set it to the provided one.

kk_std_os_path__path kk_std_os_path_default_ext(kk_std_os_path__path p, kk_string_t newext, kk_context_t* _ctx) { /* (p : path, newext : string) -> path */ 
  kk_std_core_types__tuple2 tuple2_10075;
  kk_std_core_types__maybe _match_x417;
  kk_string_t _x_x765;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x766 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x195 = _con_x766->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x766->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x195);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x765 = x_0; /*string*/
    }
    else {
      _x_x765 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x768;
  kk_define_string_literal(static, _s_x769, 1, ".", _ctx)
  _x_x768 = kk_string_dup(_s_x769, _ctx); /*string*/
  _match_x417 = kk_std_core_sslice_find_last(_x_x765, _x_x768, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x417, _ctx)) {
    kk_box_t _box_x197 = _match_x417._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x197, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x417, _ctx);
    kk_string_t _b_x198_204;
    kk_std_core_sslice__sslice _x_x770;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x770 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x198_204 = kk_std_core_sslice_string(_x_x770, _ctx); /*string*/
    kk_string_t _b_x199_205;
    kk_std_core_sslice__sslice _x_x771 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x199_205 = kk_std_core_sslice_string(_x_x771, _ctx); /*string*/
    tuple2_10075 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x198_204), kk_string_box(_b_x199_205), _ctx); /*(string, string)*/
  }
  else {
    kk_box_t _x_x772;
    kk_string_t _x_x773;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x774 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x200 = _con_x774->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x774->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x200);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x773 = x_0_0; /*string*/
      }
      else {
        _x_x773 = kk_string_empty(); /*string*/
      }
    }
    _x_x772 = kk_string_box(_x_x773); /*134*/
    kk_box_t _x_x776;
    kk_string_t _x_x777 = kk_string_empty(); /*string*/
    _x_x776 = kk_string_box(_x_x777); /*135*/
    tuple2_10075 = kk_std_core_types__new_Tuple2(_x_x772, _x_x776, _ctx); /*(string, string)*/
  }
  bool _match_x416;
  kk_string_t _x_x779;
  {
    kk_box_t _box_x208 = tuple2_10075.fst;
    kk_box_t _box_x209 = tuple2_10075.snd;
    kk_string_t _x_0_0 = kk_string_unbox(_box_x209);
    kk_string_dup(_x_0_0, _ctx);
    kk_std_core_types__tuple2_drop(tuple2_10075, _ctx);
    _x_x779 = _x_0_0; /*string*/
  }
  kk_string_t _x_x780 = kk_string_empty(); /*string*/
  _match_x416 = kk_string_is_eq(_x_x779,_x_x780,kk_context()); /*bool*/
  if (_match_x416) {
    return kk_std_os_path_change_ext(p, newext, _ctx);
  }
  {
    kk_string_drop(newext, _ctx);
    return p;
  }
}
 
// Change the base name of a path

kk_std_os_path__path kk_std_os_path_change_base(kk_std_os_path__path p, kk_string_t basename_0, kk_context_t* _ctx) { /* (p : path, basename : string) -> path */ 
  kk_std_os_path__path q;
  kk_string_t _x_x782;
  kk_std_core_types__optional _match_x415 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x415, _ctx)) {
    kk_box_t _box_x210 = _match_x415._cons._Optional.value;
    kk_string_t _uniq_root_128 = kk_string_unbox(_box_x210);
    kk_string_dup(_uniq_root_128, _ctx);
    kk_std_core_types__optional_drop(_match_x415, _ctx);
    _x_x782 = _uniq_root_128; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x415, _ctx);
    {
      kk_string_t _x_0 = p.root;
      kk_string_dup(_x_0, _ctx);
      _x_x782 = _x_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x783;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x784 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x211 = _con_x784->head;
      kk_std_core_types__list xx = _con_x784->tail;
      kk_string_t _pat_0_2 = kk_string_unbox(_box_x211);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x783 = xx; /*list<string>*/
    }
    else {
      _x_x783 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  q = kk_std_os_path__new_Path(_x_x782, _x_x783, _ctx); /*std/os/path/path*/
  kk_vector_t v_10011;
  kk_string_t _x_x785;
  kk_define_string_literal(static, _s_x786, 1, "/", _ctx)
  _x_x785 = kk_string_dup(_s_x786, _ctx); /*string*/
  v_10011 = kk_string_splitv(basename_0,_x_x785,kk_context()); /*vector<string>*/
  kk_std_core_types__list parts;
  kk_std_core_types__list _x_x787 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<935>*/
  kk_std_core_types__list _x_x788;
  {
    kk_std_core_types__list _x_0_0 = q.parts;
    kk_std_core_types__list_dup(_x_0_0, _ctx);
    _x_x788 = _x_0_0; /*list<string>*/
  }
  parts = kk_std_os_path_push_parts(_x_x787, _x_x788, _ctx); /*list<string>*/
  kk_string_t _x_x789;
  {
    kk_string_t _x_1 = q.root;
    kk_string_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(q, _ctx);
    _x_x789 = _x_1; /*string*/
  }
  return kk_std_os_path__new_Path(_x_x789, parts, _ctx);
}
 
// Change the stem name of a path

kk_std_os_path__path kk_std_os_path_change_stem(kk_std_os_path__path p, kk_string_t stemname_0, kk_context_t* _ctx) { /* (p : path, stemname : string) -> path */ 
  kk_std_core_types__tuple2 tuple2_10079;
  kk_std_core_types__maybe _match_x414;
  kk_string_t _x_x790;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x791 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x212 = _con_x791->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x791->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x212);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x790 = x_0; /*string*/
    }
    else {
      _x_x790 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x793;
  kk_define_string_literal(static, _s_x794, 1, ".", _ctx)
  _x_x793 = kk_string_dup(_s_x794, _ctx); /*string*/
  _match_x414 = kk_std_core_sslice_find_last(_x_x790, _x_x793, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x414, _ctx)) {
    kk_box_t _box_x214 = _match_x414._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x214, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x414, _ctx);
    kk_string_t _b_x215_221;
    kk_std_core_sslice__sslice _x_x795;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x795 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x215_221 = kk_std_core_sslice_string(_x_x795, _ctx); /*string*/
    kk_string_t _b_x216_222;
    kk_std_core_sslice__sslice _x_x796 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x216_222 = kk_std_core_sslice_string(_x_x796, _ctx); /*string*/
    tuple2_10079 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x215_221), kk_string_box(_b_x216_222), _ctx); /*(string, string)*/
  }
  else {
    kk_box_t _x_x797;
    kk_string_t _x_x798;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x799 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x217 = _con_x799->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x799->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x217);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x798 = x_0_0; /*string*/
      }
      else {
        _x_x798 = kk_string_empty(); /*string*/
      }
    }
    _x_x797 = kk_string_box(_x_x798); /*134*/
    kk_box_t _x_x801;
    kk_string_t _x_x802 = kk_string_empty(); /*string*/
    _x_x801 = kk_string_box(_x_x802); /*135*/
    tuple2_10079 = kk_std_core_types__new_Tuple2(_x_x797, _x_x801, _ctx); /*(string, string)*/
  }
  kk_string_t basename_0_10081;
  kk_string_t _x_x804;
  bool _match_x413;
  kk_string_t _x_x805;
  {
    kk_box_t _box_x225 = tuple2_10079.fst;
    kk_box_t _box_x226 = tuple2_10079.snd;
    kk_string_t _x_0_0 = kk_string_unbox(_box_x226);
    kk_string_dup(_x_0_0, _ctx);
    _x_x805 = _x_0_0; /*string*/
  }
  kk_string_t _x_x806 = kk_string_empty(); /*string*/
  _match_x413 = kk_string_is_eq(_x_x805,_x_x806,kk_context()); /*bool*/
  if (_match_x413) {
    kk_std_core_types__tuple2_drop(tuple2_10079, _ctx);
    _x_x804 = kk_string_empty(); /*string*/
  }
  else {
    kk_string_t _x_x809;
    kk_define_string_literal(static, _s_x810, 1, ".", _ctx)
    _x_x809 = kk_string_dup(_s_x810, _ctx); /*string*/
    kk_string_t _x_x811;
    {
      kk_box_t _box_x227 = tuple2_10079.fst;
      kk_box_t _box_x228 = tuple2_10079.snd;
      kk_string_t _x_0_1 = kk_string_unbox(_box_x228);
      kk_string_dup(_x_0_1, _ctx);
      kk_std_core_types__tuple2_drop(tuple2_10079, _ctx);
      _x_x811 = _x_0_1; /*string*/
    }
    _x_x804 = kk_std_core_types__lp__plus__plus__rp_(_x_x809, _x_x811, _ctx); /*string*/
  }
  basename_0_10081 = kk_std_core_types__lp__plus__plus__rp_(stemname_0, _x_x804, _ctx); /*string*/
  kk_std_os_path__path q;
  kk_string_t _x_x812;
  kk_std_core_types__optional _match_x412 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x412, _ctx)) {
    kk_box_t _box_x229 = _match_x412._cons._Optional.value;
    kk_string_t _uniq_root_128 = kk_string_unbox(_box_x229);
    kk_string_dup(_uniq_root_128, _ctx);
    kk_std_core_types__optional_drop(_match_x412, _ctx);
    _x_x812 = _uniq_root_128; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x412, _ctx);
    {
      kk_string_t _x_0_2 = p.root;
      kk_string_dup(_x_0_2, _ctx);
      _x_x812 = _x_0_2; /*string*/
    }
  }
  kk_std_core_types__list _x_x813;
  {
    kk_std_core_types__list _x_1 = p.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Cons(_x_1, _ctx)) {
      struct kk_std_core_types_Cons* _con_x814 = kk_std_core_types__as_Cons(_x_1, _ctx);
      kk_box_t _box_x230 = _con_x814->head;
      kk_std_core_types__list xx = _con_x814->tail;
      kk_string_t _pat_0_2_1 = kk_string_unbox(_box_x230);
      if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
        kk_string_drop(_pat_0_2_1, _ctx);
        kk_datatype_ptr_free(_x_1, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x_1, _ctx);
      }
      _x_x813 = xx; /*list<string>*/
    }
    else {
      _x_x813 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  q = kk_std_os_path__new_Path(_x_x812, _x_x813, _ctx); /*std/os/path/path*/
  kk_vector_t v_10011;
  kk_string_t _x_x815;
  kk_define_string_literal(static, _s_x816, 1, "/", _ctx)
  _x_x815 = kk_string_dup(_s_x816, _ctx); /*string*/
  v_10011 = kk_string_splitv(basename_0_10081,_x_x815,kk_context()); /*vector<string>*/
  kk_std_core_types__list parts;
  kk_std_core_types__list _x_x817 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<935>*/
  kk_std_core_types__list _x_x818;
  {
    kk_std_core_types__list _x_1_0 = q.parts;
    kk_std_core_types__list_dup(_x_1_0, _ctx);
    _x_x818 = _x_1_0; /*list<string>*/
  }
  parts = kk_std_os_path_push_parts(_x_x817, _x_x818, _ctx); /*list<string>*/
  kk_string_t _x_x819;
  {
    kk_string_t _x_0_0_0 = q.root;
    kk_string_dup(_x_0_0_0, _ctx);
    kk_std_os_path__path_drop(q, _ctx);
    _x_x819 = _x_0_0_0; /*string*/
  }
  return kk_std_os_path__new_Path(_x_x819, parts, _ctx);
}
 
// Return the last directory component name (or the empty string).
// `"c:/foo/bar/tst.txt".path.parentname === "bar"

kk_string_t kk_std_os_path_parentname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    kk_std_core_types__list _match_x411;
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x821 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x231 = _con_x821->head;
      kk_std_core_types__list xx = _con_x821->tail;
      kk_string_t _pat_0_1 = kk_string_unbox(_box_x231);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_string_drop(_pat_0_1, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _match_x411 = xx; /*list<string>*/
    }
    else {
      _match_x411 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
    if (kk_std_core_types__is_Cons(_match_x411, _ctx)) {
      struct kk_std_core_types_Cons* _con_x822 = kk_std_core_types__as_Cons(_match_x411, _ctx);
      kk_box_t _box_x232 = _con_x822->head;
      kk_std_core_types__list _pat_0_0 = _con_x822->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x232);
      if kk_likely(kk_datatype_ptr_is_unique(_match_x411, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(_match_x411, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_match_x411, _ctx);
      }
      return x_0;
    }
    {
      return kk_string_empty();
    }
  }
}

kk_string_t kk_std_os_path_xrealpath(kk_string_t p, kk_context_t* _ctx) { /* (p : string) -> io string */ 
  return kk_os_realpath(p,kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path_string_fs__mlift_realpath_10192_fun825__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_string_fs__mlift_realpath_10192_fun825(kk_function_t _fself, kk_box_t _b_x236, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_string_fs__new_mlift_realpath_10192_fun825(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_string_fs__mlift_realpath_10192_fun825, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_string_fs__mlift_realpath_10192_fun825(kk_function_t _fself, kk_box_t _b_x236, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x826;
  kk_string_t _x_x827 = kk_string_unbox(_b_x236); /*string*/
  _x_x826 = kk_std_os_path_path(_x_x827, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x826, _ctx);
}

kk_std_os_path__path kk_std_os_path_string_fs__mlift_realpath_10192(kk_string_t _y_x10146, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x824 = kk_std_core_hnd__open_none1(kk_std_os_path_string_fs__new_mlift_realpath_10192_fun825(_ctx), kk_string_box(_y_x10146), _ctx); /*9924*/
  return kk_std_os_path__path_unbox(_x_x824, KK_OWNED, _ctx);
}
 
// Convert a path to the absolute path on the file system.
// The overload on a plain string is necessary as it allows
// for unnormalized paths with `".."` parts. For example
// `"/foo/symlink/../test.txt"` may resolve to `"/bar/test.txt"` if
// ``symlink`` is a symbolic link to a sub directory of `"/bar"`.


// lift anonymous function
struct kk_std_os_path_string_fs_realpath_fun829__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_string_fs_realpath_fun829(kk_function_t _fself, kk_box_t _b_x240, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_string_fs_new_realpath_fun829(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_string_fs_realpath_fun829, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_string_fs_realpath_fun829(kk_function_t _fself, kk_box_t _b_x240, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x830;
  kk_string_t _x_x831 = kk_string_unbox(_b_x240); /*string*/
  _x_x830 = kk_std_os_path_string_fs__mlift_realpath_10192(_x_x831, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x830, _ctx);
}


// lift anonymous function
struct kk_std_os_path_string_fs_realpath_fun832__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_string_fs_realpath_fun832(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_string_fs_new_realpath_fun832(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_string_fs_realpath_fun832, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_string_fs_realpath_fun832(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x833;
  kk_string_t _x_x834 = kk_string_unbox(_b_x243); /*string*/
  _x_x833 = kk_std_os_path_path(_x_x834, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x833, _ctx);
}

kk_std_os_path__path kk_std_os_path_string_fs_realpath(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> io path */ 
  kk_string_t x_10223 = kk_std_os_path_xrealpath(s, _ctx); /*string*/;
  kk_box_t _x_x828;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10223, _ctx);
    _x_x828 = kk_std_core_hnd_yield_extend(kk_std_os_path_string_fs_new_realpath_fun829(_ctx), _ctx); /*2419*/
  }
  else {
    _x_x828 = kk_std_core_hnd__open_none1(kk_std_os_path_string_fs_new_realpath_fun832(_ctx), kk_string_box(x_10223), _ctx); /*2419*/
  }
  return kk_std_os_path__path_unbox(_x_x828, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_realpath_10193_fun836__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_realpath_10193_fun836(kk_function_t _fself, kk_box_t _b_x249, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_realpath_10193_fun836(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_realpath_10193_fun836, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_realpath_10193_fun836(kk_function_t _fself, kk_box_t _b_x249, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x837;
  kk_string_t _x_x838 = kk_string_unbox(_b_x249); /*string*/
  _x_x837 = kk_std_os_path_path(_x_x838, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x837, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_realpath_10193(kk_string_t _y_x10147, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x835 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_realpath_10193_fun836(_ctx), kk_string_box(_y_x10147), _ctx); /*9924*/
  return kk_std_os_path__path_unbox(_x_x835, KK_OWNED, _ctx);
}
 
// Convert a path to the absolute path on the file system.
// The path is not required to exist on disk. However, if it
// exists any permissions and symbolic links are resolved fully.
// `".".realpath` (to get the current working directory)
// `"/foo".realpath` (to resolve the full root, like `"c:/foo"` on windows)


// lift anonymous function
struct kk_std_os_path_realpath_fun840__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun840(kk_function_t _fself, kk_box_t _b_x254, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun840(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun840, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_realpath_fun840(kk_function_t _fself, kk_box_t _b_x254, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x841;
  kk_std_os_path__path _x_x842 = kk_std_os_path__path_unbox(_b_x254, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x841 = kk_std_os_path_string(_x_x842, _ctx); /*string*/
  return kk_string_box(_x_x841);
}


// lift anonymous function
struct kk_std_os_path_realpath_fun844__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun844(kk_function_t _fself, kk_box_t _b_x258, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun844(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun844, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_realpath_fun844(kk_function_t _fself, kk_box_t _b_x258, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x845;
  kk_string_t _x_x846 = kk_string_unbox(_b_x258); /*string*/
  _x_x845 = kk_std_os_path__mlift_realpath_10193(_x_x846, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x845, _ctx);
}


// lift anonymous function
struct kk_std_os_path_realpath_fun847__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun847(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun847(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun847, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_realpath_fun847(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x848;
  kk_string_t _x_x849 = kk_string_unbox(_b_x261); /*string*/
  _x_x848 = kk_std_os_path_path(_x_x849, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x848, _ctx);
}

kk_std_os_path__path kk_std_os_path_realpath(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> io path */ 
  kk_string_t s_10092;
  kk_box_t _x_x839 = kk_std_core_hnd__open_none1(kk_std_os_path_new_realpath_fun840(_ctx), kk_std_os_path__path_box(p, _ctx), _ctx); /*9924*/
  s_10092 = kk_string_unbox(_x_x839); /*string*/
  kk_string_t x_10226 = kk_std_os_path_xrealpath(s_10092, _ctx); /*string*/;
  kk_box_t _x_x843;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10226, _ctx);
    _x_x843 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_realpath_fun844(_ctx), _ctx); /*2419*/
  }
  else {
    _x_x843 = kk_std_core_hnd__open_none1(kk_std_os_path_new_realpath_fun847(_ctx), kk_string_box(x_10226), _ctx); /*2419*/
  }
  return kk_std_os_path__path_unbox(_x_x843, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_cwd_10194_fun851__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_cwd_10194_fun851(kk_function_t _fself, kk_box_t _b_x267, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_cwd_10194_fun851(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_cwd_10194_fun851, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_cwd_10194_fun851(kk_function_t _fself, kk_box_t _b_x267, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x852;
  kk_string_t _x_x853 = kk_string_unbox(_b_x267); /*string*/
  _x_x852 = kk_std_os_path_path(_x_x853, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x852, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_cwd_10194(kk_string_t _y_x10148, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x850 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_cwd_10194_fun851(_ctx), kk_string_box(_y_x10148), _ctx); /*9924*/
  return kk_std_os_path__path_unbox(_x_x850, KK_OWNED, _ctx);
}
 
// Returns the current working directory.
// Equal to `".".realpath`.


// lift anonymous function
struct kk_std_os_path_cwd_fun857__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_cwd_fun857(kk_function_t _fself, kk_box_t _b_x271, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_cwd_fun857(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_cwd_fun857, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_cwd_fun857(kk_function_t _fself, kk_box_t _b_x271, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x858;
  kk_string_t _x_x859 = kk_string_unbox(_b_x271); /*string*/
  _x_x858 = kk_std_os_path__mlift_cwd_10194(_x_x859, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x858, _ctx);
}


// lift anonymous function
struct kk_std_os_path_cwd_fun860__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_cwd_fun860(kk_function_t _fself, kk_box_t _b_x274, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_cwd_fun860(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_cwd_fun860, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_cwd_fun860(kk_function_t _fself, kk_box_t _b_x274, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x861;
  kk_string_t _x_x862 = kk_string_unbox(_b_x274); /*string*/
  _x_x861 = kk_std_os_path_path(_x_x862, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x861, _ctx);
}

kk_std_os_path__path kk_std_os_path_cwd(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10229;
  kk_string_t _x_x854;
  kk_define_string_literal(static, _s_x855, 1, ".", _ctx)
  _x_x854 = kk_string_dup(_s_x855, _ctx); /*string*/
  x_10229 = kk_std_os_path_xrealpath(_x_x854, _ctx); /*string*/
  kk_box_t _x_x856;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10229, _ctx);
    _x_x856 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_cwd_fun857(_ctx), _ctx); /*2419*/
  }
  else {
    _x_x856 = kk_std_core_hnd__open_none1(kk_std_os_path_new_cwd_fun860(_ctx), kk_string_box(x_10229), _ctx); /*2419*/
  }
  return kk_std_os_path__path_unbox(_x_x856, KK_OWNED, _ctx);
}
 
// Return the OS specific directory separator (`"/"` or `"\\"`)

kk_string_t kk_std_os_path_partsep(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_os_dir_sep(kk_context());
}
 
// Return the OS specific path separator (`';'` or `':'`)

kk_string_t kk_std_os_path_pathsep(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_os_path_sep(kk_context());
}

kk_string_t kk_std_os_path_xapp_path(kk_context_t* _ctx) { /* () -> io string */ 
  return kk_os_app_path(kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_app_path_10195_fun864__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_app_path_10195_fun864(kk_function_t _fself, kk_box_t _b_x280, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_app_path_10195_fun864(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_app_path_10195_fun864, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_app_path_10195_fun864(kk_function_t _fself, kk_box_t _b_x280, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x865;
  kk_string_t _x_x866 = kk_string_unbox(_b_x280); /*string*/
  _x_x865 = kk_std_os_path_path(_x_x866, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x865, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_app_path_10195(kk_string_t _y_x10150, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x863 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_app_path_10195_fun864(_ctx), kk_string_box(_y_x10150), _ctx); /*9924*/
  return kk_std_os_path__path_unbox(_x_x863, KK_OWNED, _ctx);
}
 
// Return the path to the currently executing application.


// lift anonymous function
struct kk_std_os_path_app_path_fun868__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_app_path_fun868(kk_function_t _fself, kk_box_t _b_x284, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_app_path_fun868(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_app_path_fun868, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_app_path_fun868(kk_function_t _fself, kk_box_t _b_x284, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x869;
  kk_string_t _x_x870 = kk_string_unbox(_b_x284); /*string*/
  _x_x869 = kk_std_os_path__mlift_app_path_10195(_x_x870, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x869, _ctx);
}


// lift anonymous function
struct kk_std_os_path_app_path_fun871__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_app_path_fun871(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_app_path_fun871(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_app_path_fun871, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_app_path_fun871(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x872;
  kk_string_t _x_x873 = kk_string_unbox(_b_x287); /*string*/
  _x_x872 = kk_std_os_path_path(_x_x873, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x872, _ctx);
}

kk_std_os_path__path kk_std_os_path_app_path(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10232 = kk_std_os_path_xapp_path(_ctx); /*string*/;
  kk_box_t _x_x867;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10232, _ctx);
    _x_x867 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_app_path_fun868(_ctx), _ctx); /*2419*/
  }
  else {
    _x_x867 = kk_std_core_hnd__open_none1(kk_std_os_path_new_app_path_fun871(_ctx), kk_string_box(x_10232), _ctx); /*2419*/
  }
  return kk_std_os_path__path_unbox(_x_x867, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10196_fun875__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_appdir_10196_fun875(kk_function_t _fself, kk_box_t _b_x293, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10196_fun875(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10196_fun875, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10196_fun875(kk_function_t _fself, kk_box_t _b_x293, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x876;
  kk_string_t _x_x877 = kk_string_unbox(_b_x293); /*string*/
  _x_x876 = kk_std_os_path_path(_x_x877, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x876, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10196_fun879__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_appdir_10196_fun879(kk_function_t _fself, kk_box_t _b_x300, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10196_fun879(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10196_fun879, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10196_fun879(kk_function_t _fself, kk_box_t _b_x300, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x880;
  kk_string_t _x_x881;
  kk_std_core_types__optional _match_x405 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x405, _ctx)) {
    kk_box_t _box_x296 = _match_x405._cons._Optional.value;
    kk_string_t _uniq_root_128 = kk_string_unbox(_box_x296);
    kk_string_dup(_uniq_root_128, _ctx);
    kk_std_core_types__optional_drop(_match_x405, _ctx);
    _x_x881 = _uniq_root_128; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x405, _ctx);
    kk_std_os_path__path _match_x406;
    kk_box_t _x_x882 = kk_box_dup(_b_x300, _ctx); /*9923*/
    _match_x406 = kk_std_os_path__path_unbox(_x_x882, KK_OWNED, _ctx); /*std/os/path/path*/
    {
      kk_string_t _x_0 = _match_x406.root;
      kk_string_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(_match_x406, _ctx);
      _x_x881 = _x_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x883;
  kk_std_os_path__path _match_x404 = kk_std_os_path__path_unbox(_b_x300, KK_OWNED, _ctx); /*std/os/path/path*/;
  {
    kk_std_core_types__list _x = _match_x404.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(_match_x404, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x884 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x297 = _con_x884->head;
      kk_std_core_types__list xx = _con_x884->tail;
      kk_string_t _pat_0_2 = kk_string_unbox(_box_x297);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x883 = xx; /*list<string>*/
    }
    else {
      _x_x883 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x880 = kk_std_os_path__new_Path(_x_x881, _x_x883, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x880, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10196_fun885__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_os_path__mlift_appdir_10196_fun885(kk_function_t _fself, kk_std_os_path__path p_1, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10196_fun885(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10196_fun885, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_std_os_path__mlift_appdir_10196_fun885(kk_function_t _fself, kk_std_os_path__path p_1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  {
    kk_std_core_types__list _x_1 = p_1.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(p_1, _ctx);
    if (kk_std_core_types__is_Cons(_x_1, _ctx)) {
      struct kk_std_core_types_Cons* _con_x886 = kk_std_core_types__as_Cons(_x_1, _ctx);
      kk_box_t _box_x304 = _con_x886->head;
      kk_std_core_types__list _pat_0_0_1 = _con_x886->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x304);
      if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_1, _ctx);
        kk_datatype_ptr_free(_x_1, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x_1, _ctx);
      }
      return x_0;
    }
    {
      return kk_string_empty();
    }
  }
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10196_fun890__t {
  struct kk_function_s _base;
  kk_function_t _b_x306_320;
};
static kk_box_t kk_std_os_path__mlift_appdir_10196_fun890(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10196_fun890(kk_function_t _b_x306_320, kk_context_t* _ctx) {
  struct kk_std_os_path__mlift_appdir_10196_fun890__t* _self = kk_function_alloc_as(struct kk_std_os_path__mlift_appdir_10196_fun890__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_path__mlift_appdir_10196_fun890, kk_context());
  _self->_b_x306_320 = _b_x306_320;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10196_fun890(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx) {
  struct kk_std_os_path__mlift_appdir_10196_fun890__t* _self = kk_function_as(struct kk_std_os_path__mlift_appdir_10196_fun890__t*, _fself, _ctx);
  kk_function_t _b_x306_320 = _self->_b_x306_320; /* (p@1 : std/os/path/path) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x306_320, _ctx);}, {}, _ctx)
  kk_string_t _x_x891;
  kk_std_os_path__path _x_x892 = kk_std_os_path__path_unbox(_b_x308, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x891 = kk_function_call(kk_string_t, (kk_function_t, kk_std_os_path__path, kk_context_t*), _b_x306_320, (_b_x306_320, _x_x892, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x891);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10196_fun896__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_appdir_10196_fun896(kk_function_t _fself, kk_box_t _b_x311, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10196_fun896(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10196_fun896, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10196_fun896(kk_function_t _fself, kk_box_t _b_x311, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x897;
  kk_std_os_path__path _x_x898 = kk_std_os_path__path_unbox(_b_x311, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x897 = kk_std_os_path_nobase(_x_x898, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x897, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10196_fun899__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_os_path__mlift_appdir_10196_fun899(kk_function_t _fself, kk_std_os_path__path p_2, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10196_fun899(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10196_fun899, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_std_os_path__mlift_appdir_10196_fun899(kk_function_t _fself, kk_std_os_path__path p_2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  {
    kk_std_core_types__list _x_2 = p_2.parts;
    kk_std_core_types__list_dup(_x_2, _ctx);
    kk_std_os_path__path_drop(p_2, _ctx);
    if (kk_std_core_types__is_Cons(_x_2, _ctx)) {
      struct kk_std_core_types_Cons* _con_x900 = kk_std_core_types__as_Cons(_x_2, _ctx);
      kk_box_t _box_x312 = _con_x900->head;
      kk_std_core_types__list _pat_0_0_2 = _con_x900->tail;
      kk_string_t x_0_0 = kk_string_unbox(_box_x312);
      if kk_likely(kk_datatype_ptr_is_unique(_x_2, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_2, _ctx);
        kk_datatype_ptr_free(_x_2, _ctx);
      }
      else {
        kk_string_dup(x_0_0, _ctx);
        kk_datatype_ptr_decref(_x_2, _ctx);
      }
      return x_0_0;
    }
    {
      return kk_string_empty();
    }
  }
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10196_fun904__t {
  struct kk_function_s _base;
  kk_function_t _b_x314_324;
};
static kk_box_t kk_std_os_path__mlift_appdir_10196_fun904(kk_function_t _fself, kk_box_t _b_x316, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10196_fun904(kk_function_t _b_x314_324, kk_context_t* _ctx) {
  struct kk_std_os_path__mlift_appdir_10196_fun904__t* _self = kk_function_alloc_as(struct kk_std_os_path__mlift_appdir_10196_fun904__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_path__mlift_appdir_10196_fun904, kk_context());
  _self->_b_x314_324 = _b_x314_324;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10196_fun904(kk_function_t _fself, kk_box_t _b_x316, kk_context_t* _ctx) {
  struct kk_std_os_path__mlift_appdir_10196_fun904__t* _self = kk_function_as(struct kk_std_os_path__mlift_appdir_10196_fun904__t*, _fself, _ctx);
  kk_function_t _b_x314_324 = _self->_b_x314_324; /* (p@2 : std/os/path/path) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x314_324, _ctx);}, {}, _ctx)
  kk_string_t _x_x905;
  kk_std_os_path__path _x_x906 = kk_std_os_path__path_unbox(_b_x316, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x905 = kk_function_call(kk_string_t, (kk_function_t, kk_std_os_path__path, kk_context_t*), _b_x314_324, (_b_x314_324, _x_x906, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x905);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10196_fun910__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_appdir_10196_fun910(kk_function_t _fself, kk_box_t _b_x319, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10196_fun910(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10196_fun910, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10196_fun910(kk_function_t _fself, kk_box_t _b_x319, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x911;
  kk_std_os_path__path _x_x912 = kk_std_os_path__path_unbox(_b_x319, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x911 = kk_std_os_path_nobase(_x_x912, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x911, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_appdir_10196(kk_string_t _y_x10151, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_std_os_path__path _x_x1_10176;
  kk_box_t _x_x874 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10196_fun875(_ctx), kk_string_box(_y_x10151), _ctx); /*9924*/
  _x_x1_10176 = kk_std_os_path__path_unbox(_x_x874, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path p_0;
  kk_box_t _x_x878 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10196_fun879(_ctx), kk_std_os_path__path_box(_x_x1_10176, _ctx), _ctx); /*9924*/
  p_0 = kk_std_os_path__path_unbox(_x_x878, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_function_t _b_x306_320 = kk_std_os_path__new_mlift_appdir_10196_fun885(_ctx); /*(p@1 : std/os/path/path) -> string*/;
  kk_std_os_path__path _b_x307_321 = kk_std_os_path__path_dup(p_0, _ctx); /*std/os/path/path*/;
  bool _match_x402;
  kk_string_t _x_x888;
  kk_box_t _x_x889 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10196_fun890(_b_x306_320, _ctx), kk_std_os_path__path_box(_b_x307_321, _ctx), _ctx); /*9924*/
  _x_x888 = kk_string_unbox(_x_x889); /*string*/
  kk_string_t _x_x893;
  kk_define_string_literal(static, _s_x894, 3, "bin", _ctx)
  _x_x893 = kk_string_dup(_s_x894, _ctx); /*string*/
  _match_x402 = kk_string_is_eq(_x_x888,_x_x893,kk_context()); /*bool*/
  if (_match_x402) {
    kk_box_t _x_x895 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10196_fun896(_ctx), kk_std_os_path__path_box(p_0, _ctx), _ctx); /*9924*/
    return kk_std_os_path__path_unbox(_x_x895, KK_OWNED, _ctx);
  }
  {
    kk_function_t _b_x314_324 = kk_std_os_path__new_mlift_appdir_10196_fun899(_ctx); /*(p@2 : std/os/path/path) -> string*/;
    kk_std_os_path__path _b_x315_325 = kk_std_os_path__path_dup(p_0, _ctx); /*std/os/path/path*/;
    bool _match_x403;
    kk_string_t _x_x902;
    kk_box_t _x_x903 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10196_fun904(_b_x314_324, _ctx), kk_std_os_path__path_box(_b_x315_325, _ctx), _ctx); /*9924*/
    _x_x902 = kk_string_unbox(_x_x903); /*string*/
    kk_string_t _x_x907;
    kk_define_string_literal(static, _s_x908, 3, "exe", _ctx)
    _x_x907 = kk_string_dup(_s_x908, _ctx); /*string*/
    _match_x403 = kk_string_is_eq(_x_x902,_x_x907,kk_context()); /*bool*/
    if (_match_x403) {
      kk_box_t _x_x909 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10196_fun910(_ctx), kk_std_os_path__path_box(p_0, _ctx), _ctx); /*9924*/
      return kk_std_os_path__path_unbox(_x_x909, KK_OWNED, _ctx);
    }
    {
      return p_0;
    }
  }
}
 
// Return the base directory that contains the currently running application.
// First tries `app-path().nobase`; if that ends in the ``bin`` or ``exe`` directory it
// returns the parent of that directory.


// lift anonymous function
struct kk_std_os_path_appdir_fun914__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun914(kk_function_t _fself, kk_box_t _b_x329, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun914(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun914, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun914(kk_function_t _fself, kk_box_t _b_x329, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x915;
  kk_string_t _x_x916 = kk_string_unbox(_b_x329); /*string*/
  _x_x915 = kk_std_os_path__mlift_appdir_10196(_x_x916, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x915, _ctx);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun918__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun918(kk_function_t _fself, kk_box_t _b_x332, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun918(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun918, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun918(kk_function_t _fself, kk_box_t _b_x332, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x919;
  kk_string_t _x_x920 = kk_string_unbox(_b_x332); /*string*/
  _x_x919 = kk_std_os_path_path(_x_x920, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x919, _ctx);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun922__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun922(kk_function_t _fself, kk_box_t _b_x339, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun922(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun922, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun922(kk_function_t _fself, kk_box_t _b_x339, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x923;
  kk_string_t _x_x924;
  kk_std_core_types__optional _match_x400 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x400, _ctx)) {
    kk_box_t _box_x335 = _match_x400._cons._Optional.value;
    kk_string_t _uniq_root_128 = kk_string_unbox(_box_x335);
    kk_string_dup(_uniq_root_128, _ctx);
    kk_std_core_types__optional_drop(_match_x400, _ctx);
    _x_x924 = _uniq_root_128; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x400, _ctx);
    kk_std_os_path__path _match_x401;
    kk_box_t _x_x925 = kk_box_dup(_b_x339, _ctx); /*9923*/
    _match_x401 = kk_std_os_path__path_unbox(_x_x925, KK_OWNED, _ctx); /*std/os/path/path*/
    {
      kk_string_t _x_0 = _match_x401.root;
      kk_string_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(_match_x401, _ctx);
      _x_x924 = _x_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x926;
  kk_std_os_path__path _match_x399 = kk_std_os_path__path_unbox(_b_x339, KK_OWNED, _ctx); /*std/os/path/path*/;
  {
    kk_std_core_types__list _x = _match_x399.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(_match_x399, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x927 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x336 = _con_x927->head;
      kk_std_core_types__list xx = _con_x927->tail;
      kk_string_t _pat_0_2 = kk_string_unbox(_box_x336);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x926 = xx; /*list<string>*/
    }
    else {
      _x_x926 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x923 = kk_std_os_path__new_Path(_x_x924, _x_x926, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x923, _ctx);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun928__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_os_path_appdir_fun928(kk_function_t _fself, kk_std_os_path__path p_1, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun928(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun928, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_std_os_path_appdir_fun928(kk_function_t _fself, kk_std_os_path__path p_1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  {
    kk_std_core_types__list _x_1 = p_1.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(p_1, _ctx);
    if (kk_std_core_types__is_Cons(_x_1, _ctx)) {
      struct kk_std_core_types_Cons* _con_x929 = kk_std_core_types__as_Cons(_x_1, _ctx);
      kk_box_t _box_x343 = _con_x929->head;
      kk_std_core_types__list _pat_0_0_1_0 = _con_x929->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x343);
      if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_1_0, _ctx);
        kk_datatype_ptr_free(_x_1, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x_1, _ctx);
      }
      return x_0;
    }
    {
      return kk_string_empty();
    }
  }
}


// lift anonymous function
struct kk_std_os_path_appdir_fun933__t {
  struct kk_function_s _base;
  kk_function_t _b_x345_360;
};
static kk_box_t kk_std_os_path_appdir_fun933(kk_function_t _fself, kk_box_t _b_x347, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun933(kk_function_t _b_x345_360, kk_context_t* _ctx) {
  struct kk_std_os_path_appdir_fun933__t* _self = kk_function_alloc_as(struct kk_std_os_path_appdir_fun933__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_path_appdir_fun933, kk_context());
  _self->_b_x345_360 = _b_x345_360;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun933(kk_function_t _fself, kk_box_t _b_x347, kk_context_t* _ctx) {
  struct kk_std_os_path_appdir_fun933__t* _self = kk_function_as(struct kk_std_os_path_appdir_fun933__t*, _fself, _ctx);
  kk_function_t _b_x345_360 = _self->_b_x345_360; /* (p@1 : std/os/path/path) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x345_360, _ctx);}, {}, _ctx)
  kk_string_t _x_x934;
  kk_std_os_path__path _x_x935 = kk_std_os_path__path_unbox(_b_x347, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x934 = kk_function_call(kk_string_t, (kk_function_t, kk_std_os_path__path, kk_context_t*), _b_x345_360, (_b_x345_360, _x_x935, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x934);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun939__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun939(kk_function_t _fself, kk_box_t _b_x350, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun939(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun939, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun939(kk_function_t _fself, kk_box_t _b_x350, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x940;
  kk_std_os_path__path _x_x941 = kk_std_os_path__path_unbox(_b_x350, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x940 = kk_std_os_path_nobase(_x_x941, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x940, _ctx);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun942__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_os_path_appdir_fun942(kk_function_t _fself, kk_std_os_path__path p_2, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun942(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun942, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_std_os_path_appdir_fun942(kk_function_t _fself, kk_std_os_path__path p_2, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  {
    kk_std_core_types__list _x_2 = p_2.parts;
    kk_std_core_types__list_dup(_x_2, _ctx);
    kk_std_os_path__path_drop(p_2, _ctx);
    if (kk_std_core_types__is_Cons(_x_2, _ctx)) {
      struct kk_std_core_types_Cons* _con_x943 = kk_std_core_types__as_Cons(_x_2, _ctx);
      kk_box_t _box_x351 = _con_x943->head;
      kk_std_core_types__list _pat_0_0_2 = _con_x943->tail;
      kk_string_t x_0_0 = kk_string_unbox(_box_x351);
      if kk_likely(kk_datatype_ptr_is_unique(_x_2, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_2, _ctx);
        kk_datatype_ptr_free(_x_2, _ctx);
      }
      else {
        kk_string_dup(x_0_0, _ctx);
        kk_datatype_ptr_decref(_x_2, _ctx);
      }
      return x_0_0;
    }
    {
      return kk_string_empty();
    }
  }
}


// lift anonymous function
struct kk_std_os_path_appdir_fun947__t {
  struct kk_function_s _base;
  kk_function_t _b_x353_364;
};
static kk_box_t kk_std_os_path_appdir_fun947(kk_function_t _fself, kk_box_t _b_x355, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun947(kk_function_t _b_x353_364, kk_context_t* _ctx) {
  struct kk_std_os_path_appdir_fun947__t* _self = kk_function_alloc_as(struct kk_std_os_path_appdir_fun947__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_path_appdir_fun947, kk_context());
  _self->_b_x353_364 = _b_x353_364;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun947(kk_function_t _fself, kk_box_t _b_x355, kk_context_t* _ctx) {
  struct kk_std_os_path_appdir_fun947__t* _self = kk_function_as(struct kk_std_os_path_appdir_fun947__t*, _fself, _ctx);
  kk_function_t _b_x353_364 = _self->_b_x353_364; /* (p@2 : std/os/path/path) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x353_364, _ctx);}, {}, _ctx)
  kk_string_t _x_x948;
  kk_std_os_path__path _x_x949 = kk_std_os_path__path_unbox(_b_x355, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x948 = kk_function_call(kk_string_t, (kk_function_t, kk_std_os_path__path, kk_context_t*), _b_x353_364, (_b_x353_364, _x_x949, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x948);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun953__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun953(kk_function_t _fself, kk_box_t _b_x358, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun953(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun953, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun953(kk_function_t _fself, kk_box_t _b_x358, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x954;
  kk_std_os_path__path _x_x955 = kk_std_os_path__path_unbox(_b_x358, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x954 = kk_std_os_path_nobase(_x_x955, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x954, _ctx);
}

kk_std_os_path__path kk_std_os_path_appdir(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10235 = kk_std_os_path_xapp_path(_ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10235, _ctx);
    kk_box_t _x_x913 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_appdir_fun914(_ctx), _ctx); /*2419*/
    return kk_std_os_path__path_unbox(_x_x913, KK_OWNED, _ctx);
  }
  {
    kk_std_os_path__path _x_x1_10176;
    kk_box_t _x_x917 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun918(_ctx), kk_string_box(x_10235), _ctx); /*9924*/
    _x_x1_10176 = kk_std_os_path__path_unbox(_x_x917, KK_OWNED, _ctx); /*std/os/path/path*/
    kk_std_os_path__path p_0;
    kk_box_t _x_x921 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun922(_ctx), kk_std_os_path__path_box(_x_x1_10176, _ctx), _ctx); /*9924*/
    p_0 = kk_std_os_path__path_unbox(_x_x921, KK_OWNED, _ctx); /*std/os/path/path*/
    kk_function_t _b_x345_360 = kk_std_os_path_new_appdir_fun928(_ctx); /*(p@1 : std/os/path/path) -> string*/;
    kk_std_os_path__path _b_x346_361 = kk_std_os_path__path_dup(p_0, _ctx); /*std/os/path/path*/;
    bool _match_x397;
    kk_string_t _x_x931;
    kk_box_t _x_x932 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun933(_b_x345_360, _ctx), kk_std_os_path__path_box(_b_x346_361, _ctx), _ctx); /*9924*/
    _x_x931 = kk_string_unbox(_x_x932); /*string*/
    kk_string_t _x_x936;
    kk_define_string_literal(static, _s_x937, 3, "bin", _ctx)
    _x_x936 = kk_string_dup(_s_x937, _ctx); /*string*/
    _match_x397 = kk_string_is_eq(_x_x931,_x_x936,kk_context()); /*bool*/
    if (_match_x397) {
      kk_box_t _x_x938 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun939(_ctx), kk_std_os_path__path_box(p_0, _ctx), _ctx); /*9924*/
      return kk_std_os_path__path_unbox(_x_x938, KK_OWNED, _ctx);
    }
    {
      kk_function_t _b_x353_364 = kk_std_os_path_new_appdir_fun942(_ctx); /*(p@2 : std/os/path/path) -> string*/;
      kk_std_os_path__path _b_x354_365 = kk_std_os_path__path_dup(p_0, _ctx); /*std/os/path/path*/;
      bool _match_x398;
      kk_string_t _x_x945;
      kk_box_t _x_x946 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun947(_b_x353_364, _ctx), kk_std_os_path__path_box(_b_x354_365, _ctx), _ctx); /*9924*/
      _x_x945 = kk_string_unbox(_x_x946); /*string*/
      kk_string_t _x_x950;
      kk_define_string_literal(static, _s_x951, 3, "exe", _ctx)
      _x_x950 = kk_string_dup(_s_x951, _ctx); /*string*/
      _match_x398 = kk_string_is_eq(_x_x945,_x_x950,kk_context()); /*bool*/
      if (_match_x398) {
        kk_box_t _x_x952 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun953(_ctx), kk_std_os_path__path_box(p_0, _ctx), _ctx); /*9924*/
        return kk_std_os_path__path_unbox(_x_x952, KK_OWNED, _ctx);
      }
      {
        return p_0;
      }
    }
  }
}

kk_string_t kk_std_os_path_xhomedir(kk_context_t* _ctx) { /* () -> io string */ 
  return kk_os_home_dir(kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_homedir_10197_fun957__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_homedir_10197_fun957(kk_function_t _fself, kk_box_t _b_x370, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_homedir_10197_fun957(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_homedir_10197_fun957, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_homedir_10197_fun957(kk_function_t _fself, kk_box_t _b_x370, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x958;
  kk_string_t _x_x959 = kk_string_unbox(_b_x370); /*string*/
  _x_x958 = kk_std_os_path_path(_x_x959, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x958, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_homedir_10197(kk_string_t _y_x10155, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x956 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_homedir_10197_fun957(_ctx), kk_string_box(_y_x10155), _ctx); /*9924*/
  return kk_std_os_path__path_unbox(_x_x956, KK_OWNED, _ctx);
}
 
// Return the home directory of the current user.


// lift anonymous function
struct kk_std_os_path_homedir_fun961__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_homedir_fun961(kk_function_t _fself, kk_box_t _b_x374, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_homedir_fun961(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_homedir_fun961, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_homedir_fun961(kk_function_t _fself, kk_box_t _b_x374, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x962;
  kk_string_t _x_x963 = kk_string_unbox(_b_x374); /*string*/
  _x_x962 = kk_std_os_path__mlift_homedir_10197(_x_x963, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x962, _ctx);
}


// lift anonymous function
struct kk_std_os_path_homedir_fun964__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_homedir_fun964(kk_function_t _fself, kk_box_t _b_x377, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_homedir_fun964(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_homedir_fun964, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_homedir_fun964(kk_function_t _fself, kk_box_t _b_x377, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x965;
  kk_string_t _x_x966 = kk_string_unbox(_b_x377); /*string*/
  _x_x965 = kk_std_os_path_path(_x_x966, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x965, _ctx);
}

kk_std_os_path__path kk_std_os_path_homedir(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10238 = kk_std_os_path_xhomedir(_ctx); /*string*/;
  kk_box_t _x_x960;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10238, _ctx);
    _x_x960 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_homedir_fun961(_ctx), _ctx); /*2419*/
  }
  else {
    _x_x960 = kk_std_core_hnd__open_none1(kk_std_os_path_new_homedir_fun964(_ctx), kk_string_box(x_10238), _ctx); /*2419*/
  }
  return kk_std_os_path__path_unbox(_x_x960, KK_OWNED, _ctx);
}

kk_string_t kk_std_os_path_xtempdir(kk_context_t* _ctx) { /* () -> io string */ 
  return kk_os_temp_dir(kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_tempdir_10198_fun968__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_tempdir_10198_fun968(kk_function_t _fself, kk_box_t _b_x383, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_tempdir_10198_fun968(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_tempdir_10198_fun968, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_tempdir_10198_fun968(kk_function_t _fself, kk_box_t _b_x383, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x969;
  kk_string_t _x_x970 = kk_string_unbox(_b_x383); /*string*/
  _x_x969 = kk_std_os_path_path(_x_x970, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x969, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_tempdir_10198(kk_string_t _y_x10157, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x967 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_tempdir_10198_fun968(_ctx), kk_string_box(_y_x10157), _ctx); /*9924*/
  return kk_std_os_path__path_unbox(_x_x967, KK_OWNED, _ctx);
}
 
// Return the temporary directory for the current user.


// lift anonymous function
struct kk_std_os_path_tempdir_fun972__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_tempdir_fun972(kk_function_t _fself, kk_box_t _b_x387, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_tempdir_fun972(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_tempdir_fun972, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_tempdir_fun972(kk_function_t _fself, kk_box_t _b_x387, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x973;
  kk_string_t _x_x974 = kk_string_unbox(_b_x387); /*string*/
  _x_x973 = kk_std_os_path__mlift_tempdir_10198(_x_x974, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x973, _ctx);
}


// lift anonymous function
struct kk_std_os_path_tempdir_fun975__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_tempdir_fun975(kk_function_t _fself, kk_box_t _b_x390, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_tempdir_fun975(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_tempdir_fun975, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_tempdir_fun975(kk_function_t _fself, kk_box_t _b_x390, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x976;
  kk_string_t _x_x977 = kk_string_unbox(_b_x390); /*string*/
  _x_x976 = kk_std_os_path_path(_x_x977, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x976, _ctx);
}

kk_std_os_path__path kk_std_os_path_tempdir(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10241 = kk_std_os_path_xtempdir(_ctx); /*string*/;
  kk_box_t _x_x971;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10241, _ctx);
    _x_x971 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_tempdir_fun972(_ctx), _ctx); /*2419*/
  }
  else {
    _x_x971 = kk_std_core_hnd__open_none1(kk_std_os_path_new_tempdir_fun975(_ctx), kk_string_box(x_10241), _ctx); /*2419*/
  }
  return kk_std_os_path__path_unbox(_x_x971, KK_OWNED, _ctx);
}

// initialization
void kk_std_os_path__init(kk_context_t* _ctx){
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
  kk_std_text_parse__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_os_path__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_text_parse__done(_ctx);
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
