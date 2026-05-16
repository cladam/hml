// Koka generated module: std/core/show, koka version: 3.2.3, platform: 64-bit
#include "std_core_show.h"
 
// Generic show: shows the internal representation of an object as a string
// Note: this breaks parametricity so it should not be public

kk_string_t kk_std_core_show_gshow(kk_box_t _arg_x1, kk_context_t* _ctx) { /* forall<a> (a) -> string */ 
  return kk_show_any(_arg_x1,kk_context());
}

kk_string_t kk_std_core_show_int_show_hex(kk_integer_t i, bool use_capitals, kk_context_t* _ctx) { /* (i : int, use-capitals : bool) -> string */ 
  return kk_integer_to_hex_string(i,use_capitals,kk_context());
}
 
// Show an `:int` as a hexadecimal value.
// The `width`  parameter specifies how wide the hex value is where `"0"`  is used to align.
// The `use-capitals` parameter (= `True`) determines if capital letters should be used to display the hexadecimal digits.
// The `pre` (=`"0x"`) is an optional prefix for the number (goes between the sign and the number).

kk_string_t kk_std_core_show_show_hex(kk_integer_t i, kk_std_core_types__optional width, kk_std_core_types__optional use_capitals, kk_std_core_types__optional pre, kk_context_t* _ctx) { /* (i : int, width : ? int, use-capitals : ? bool, pre : ? string) -> string */ 
  kk_string_t _x_x65;
  bool _match_x64 = kk_integer_lt_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x64) {
    kk_define_string_literal(static, _s_x66, 1, "-", _ctx)
    _x_x65 = kk_string_dup(_s_x66, _ctx); /*string*/
  }
  else {
    _x_x65 = kk_string_empty(); /*string*/
  }
  kk_string_t _x_x68;
  kk_char_t _b_x3_4 = '0'; /*char*/;
  kk_string_t _x_x69;
  if (kk_std_core_types__is_Optional(pre, _ctx)) {
    kk_box_t _box_x0 = pre._cons._Optional.value;
    kk_string_t _uniq_pre_70 = kk_string_unbox(_box_x0);
    kk_string_dup(_uniq_pre_70, _ctx);
    kk_std_core_types__optional_drop(pre, _ctx);
    _x_x69 = _uniq_pre_70; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(pre, _ctx);
    kk_define_string_literal(static, _s_x70, 2, "0x", _ctx)
    _x_x69 = kk_string_dup(_s_x70, _ctx); /*string*/
  }
  kk_string_t _x_x71;
  kk_string_t _own_x62;
  kk_integer_t _x_x72 = kk_integer_abs(i,kk_context()); /*int*/
  bool _x_x73;
  if (kk_std_core_types__is_Optional(use_capitals, _ctx)) {
    kk_box_t _box_x1 = use_capitals._cons._Optional.value;
    bool _uniq_use_capitals_66 = kk_bool_unbox(_box_x1);
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x73 = _uniq_use_capitals_66; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(use_capitals, _ctx);
    _x_x73 = true; /*bool*/
  }
  _own_x62 = kk_std_core_show_int_show_hex(_x_x72, _x_x73, _ctx); /*string*/
  kk_integer_t _brw_x61;
  if (kk_std_core_types__is_Optional(width, _ctx)) {
    kk_box_t _box_x2 = width._cons._Optional.value;
    kk_integer_t _uniq_width_62 = kk_integer_unbox(_box_x2, _ctx);
    kk_integer_dup(_uniq_width_62, _ctx);
    kk_std_core_types__optional_drop(width, _ctx);
    _brw_x61 = _uniq_width_62; /*int*/
  }
  else {
    kk_std_core_types__optional_drop(width, _ctx);
    _brw_x61 = kk_integer_from_small(1); /*int*/
  }
  kk_string_t _brw_x63;
  kk_std_core_types__optional _x_x74 = kk_std_core_types__new_Optional(kk_char_box(_b_x3_4, _ctx), _ctx); /*? 7*/
  _brw_x63 = kk_std_core_string_pad_left(_own_x62, _brw_x61, _x_x74, _ctx); /*string*/
  kk_integer_drop(_brw_x61, _ctx);
  _x_x71 = _brw_x63; /*string*/
  _x_x68 = kk_std_core_types__lp__plus__plus__rp_(_x_x69, _x_x71, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x65, _x_x68, _ctx);
}
 
// Show a character as a string

kk_string_t kk_std_core_show_show_char(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> string */ 
  bool _match_x36 = (c < (' ')); /*bool*/;
  if (_match_x36) {
    bool _match_x51 = (c == 0x000A); /*bool*/;
    if (_match_x51) {
      kk_define_string_literal(static, _s_x75, 2, "\\n", _ctx)
      return kk_string_dup(_s_x75, _ctx);
    }
    {
      bool _match_x52 = (c == 0x000D); /*bool*/;
      if (_match_x52) {
        kk_define_string_literal(static, _s_x76, 2, "\\r", _ctx)
        return kk_string_dup(_s_x76, _ctx);
      }
      {
        bool _match_x53 = (c == 0x0009); /*bool*/;
        if (_match_x53) {
          kk_define_string_literal(static, _s_x77, 2, "\\t", _ctx)
          return kk_string_dup(_s_x77, _ctx);
        }
        {
          bool _match_x54;
          kk_integer_t _brw_x59 = kk_integer_from_int(c,kk_context()); /*int*/;
          bool _brw_x60 = kk_integer_lte_borrow(_brw_x59,(kk_integer_from_small(255)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x59, _ctx);
          _match_x54 = _brw_x60; /*bool*/
          if (_match_x54) {
            kk_integer_t _arg_x247 = kk_integer_from_int(c,kk_context()); /*int*/;
            kk_integer_t _b_x5_17 = kk_integer_from_small(2); /*int*/;
            kk_string_t _b_x6_18 = kk_string_empty(); /*string*/;
            kk_string_t _x_x79;
            kk_define_string_literal(static, _s_x80, 2, "\\x", _ctx)
            _x_x79 = kk_string_dup(_s_x80, _ctx); /*string*/
            kk_string_t _x_x81;
            kk_std_core_types__optional _x_x82 = kk_std_core_types__new_Optional(kk_integer_box(_b_x5_17, _ctx), _ctx); /*? 7*/
            kk_std_core_types__optional _x_x83 = kk_std_core_types__new_Optional(kk_string_box(_b_x6_18), _ctx); /*? 7*/
            _x_x81 = kk_std_core_show_show_hex(_arg_x247, _x_x82, kk_std_core_types__new_None(_ctx), _x_x83, _ctx); /*string*/
            return kk_std_core_types__lp__plus__plus__rp_(_x_x79, _x_x81, _ctx);
          }
          {
            bool _match_x55;
            kk_integer_t _brw_x57 = kk_integer_from_int(c,kk_context()); /*int*/;
            kk_integer_t _brw_x56 = kk_integer_from_int(65535, _ctx); /*int*/;
            bool _brw_x58 = kk_integer_lte_borrow(_brw_x57,_brw_x56,kk_context()); /*bool*/;
            kk_integer_drop(_brw_x57, _ctx);
            kk_integer_drop(_brw_x56, _ctx);
            _match_x55 = _brw_x58; /*bool*/
            if (_match_x55) {
              kk_integer_t _arg_x302 = kk_integer_from_int(c,kk_context()); /*int*/;
              kk_integer_t _b_x7_19 = kk_integer_from_small(4); /*int*/;
              kk_string_t _b_x8_20 = kk_string_empty(); /*string*/;
              kk_string_t _x_x85;
              kk_define_string_literal(static, _s_x86, 2, "\\u", _ctx)
              _x_x85 = kk_string_dup(_s_x86, _ctx); /*string*/
              kk_string_t _x_x87;
              kk_std_core_types__optional _x_x88 = kk_std_core_types__new_Optional(kk_integer_box(_b_x7_19, _ctx), _ctx); /*? 7*/
              kk_std_core_types__optional _x_x89 = kk_std_core_types__new_Optional(kk_string_box(_b_x8_20), _ctx); /*? 7*/
              _x_x87 = kk_std_core_show_show_hex(_arg_x302, _x_x88, kk_std_core_types__new_None(_ctx), _x_x89, _ctx); /*string*/
              return kk_std_core_types__lp__plus__plus__rp_(_x_x85, _x_x87, _ctx);
            }
            {
              kk_integer_t _arg_x345 = kk_integer_from_int(c,kk_context()); /*int*/;
              kk_integer_t _b_x9_21 = kk_integer_from_small(6); /*int*/;
              kk_string_t _b_x10_22 = kk_string_empty(); /*string*/;
              kk_string_t _x_x91;
              kk_define_string_literal(static, _s_x92, 2, "\\U", _ctx)
              _x_x91 = kk_string_dup(_s_x92, _ctx); /*string*/
              kk_string_t _x_x93;
              kk_std_core_types__optional _x_x94 = kk_std_core_types__new_Optional(kk_integer_box(_b_x9_21, _ctx), _ctx); /*? 7*/
              kk_std_core_types__optional _x_x95 = kk_std_core_types__new_Optional(kk_string_box(_b_x10_22), _ctx); /*? 7*/
              _x_x93 = kk_std_core_show_show_hex(_arg_x345, _x_x94, kk_std_core_types__new_None(_ctx), _x_x95, _ctx); /*string*/
              return kk_std_core_types__lp__plus__plus__rp_(_x_x91, _x_x93, _ctx);
            }
          }
        }
      }
    }
  }
  {
    bool _match_x37 = (c > ('~')); /*bool*/;
    if (_match_x37) {
      bool _match_x41 = (c == 0x000A); /*bool*/;
      if (_match_x41) {
        kk_define_string_literal(static, _s_x96, 2, "\\n", _ctx)
        return kk_string_dup(_s_x96, _ctx);
      }
      {
        bool _match_x42 = (c == 0x000D); /*bool*/;
        if (_match_x42) {
          kk_define_string_literal(static, _s_x97, 2, "\\r", _ctx)
          return kk_string_dup(_s_x97, _ctx);
        }
        {
          bool _match_x43 = (c == 0x0009); /*bool*/;
          if (_match_x43) {
            kk_define_string_literal(static, _s_x98, 2, "\\t", _ctx)
            return kk_string_dup(_s_x98, _ctx);
          }
          {
            bool _match_x44;
            kk_integer_t _brw_x49 = kk_integer_from_int(c,kk_context()); /*int*/;
            bool _brw_x50 = kk_integer_lte_borrow(_brw_x49,(kk_integer_from_small(255)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x49, _ctx);
            _match_x44 = _brw_x50; /*bool*/
            if (_match_x44) {
              kk_integer_t _arg_x247_0 = kk_integer_from_int(c,kk_context()); /*int*/;
              kk_integer_t _b_x11_23 = kk_integer_from_small(2); /*int*/;
              kk_string_t _b_x12_24 = kk_string_empty(); /*string*/;
              kk_string_t _x_x100;
              kk_define_string_literal(static, _s_x101, 2, "\\x", _ctx)
              _x_x100 = kk_string_dup(_s_x101, _ctx); /*string*/
              kk_string_t _x_x102;
              kk_std_core_types__optional _x_x103 = kk_std_core_types__new_Optional(kk_integer_box(_b_x11_23, _ctx), _ctx); /*? 7*/
              kk_std_core_types__optional _x_x104 = kk_std_core_types__new_Optional(kk_string_box(_b_x12_24), _ctx); /*? 7*/
              _x_x102 = kk_std_core_show_show_hex(_arg_x247_0, _x_x103, kk_std_core_types__new_None(_ctx), _x_x104, _ctx); /*string*/
              return kk_std_core_types__lp__plus__plus__rp_(_x_x100, _x_x102, _ctx);
            }
            {
              bool _match_x45;
              kk_integer_t _brw_x47 = kk_integer_from_int(c,kk_context()); /*int*/;
              kk_integer_t _brw_x46 = kk_integer_from_int(65535, _ctx); /*int*/;
              bool _brw_x48 = kk_integer_lte_borrow(_brw_x47,_brw_x46,kk_context()); /*bool*/;
              kk_integer_drop(_brw_x47, _ctx);
              kk_integer_drop(_brw_x46, _ctx);
              _match_x45 = _brw_x48; /*bool*/
              if (_match_x45) {
                kk_integer_t _arg_x302_0 = kk_integer_from_int(c,kk_context()); /*int*/;
                kk_integer_t _b_x13_25 = kk_integer_from_small(4); /*int*/;
                kk_string_t _b_x14_26 = kk_string_empty(); /*string*/;
                kk_string_t _x_x106;
                kk_define_string_literal(static, _s_x107, 2, "\\u", _ctx)
                _x_x106 = kk_string_dup(_s_x107, _ctx); /*string*/
                kk_string_t _x_x108;
                kk_std_core_types__optional _x_x109 = kk_std_core_types__new_Optional(kk_integer_box(_b_x13_25, _ctx), _ctx); /*? 7*/
                kk_std_core_types__optional _x_x110 = kk_std_core_types__new_Optional(kk_string_box(_b_x14_26), _ctx); /*? 7*/
                _x_x108 = kk_std_core_show_show_hex(_arg_x302_0, _x_x109, kk_std_core_types__new_None(_ctx), _x_x110, _ctx); /*string*/
                return kk_std_core_types__lp__plus__plus__rp_(_x_x106, _x_x108, _ctx);
              }
              {
                kk_integer_t _arg_x345_0 = kk_integer_from_int(c,kk_context()); /*int*/;
                kk_integer_t _b_x15_27 = kk_integer_from_small(6); /*int*/;
                kk_string_t _b_x16_28 = kk_string_empty(); /*string*/;
                kk_string_t _x_x112;
                kk_define_string_literal(static, _s_x113, 2, "\\U", _ctx)
                _x_x112 = kk_string_dup(_s_x113, _ctx); /*string*/
                kk_string_t _x_x114;
                kk_std_core_types__optional _x_x115 = kk_std_core_types__new_Optional(kk_integer_box(_b_x15_27, _ctx), _ctx); /*? 7*/
                kk_std_core_types__optional _x_x116 = kk_std_core_types__new_Optional(kk_string_box(_b_x16_28), _ctx); /*? 7*/
                _x_x114 = kk_std_core_show_show_hex(_arg_x345_0, _x_x115, kk_std_core_types__new_None(_ctx), _x_x116, _ctx); /*string*/
                return kk_std_core_types__lp__plus__plus__rp_(_x_x112, _x_x114, _ctx);
              }
            }
          }
        }
      }
    }
    {
      bool _match_x38 = (c == ('\'')); /*bool*/;
      if (_match_x38) {
        kk_define_string_literal(static, _s_x117, 2, "\\\'", _ctx)
        return kk_string_dup(_s_x117, _ctx);
      }
      {
        bool _match_x39 = (c == ('"')); /*bool*/;
        if (_match_x39) {
          kk_define_string_literal(static, _s_x118, 2, "\\\"", _ctx)
          return kk_string_dup(_s_x118, _ctx);
        }
        {
          bool _match_x40 = (c == ('\\')); /*bool*/;
          if (_match_x40) {
            kk_define_string_literal(static, _s_x119, 2, "\\\\", _ctx)
            return kk_string_dup(_s_x119, _ctx);
          }
          {
            return kk_std_core_string_char_fs_string(c, _ctx);
          }
        }
      }
    }
  }
}
 
// Show a string as a string literal


// lift anonymous function
struct kk_std_core_show_string_fs_show_fun130__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_core_show_string_fs_show_fun130(kk_function_t _fself, kk_char_t _x1_x129, kk_context_t* _ctx);
static kk_function_t kk_std_core_show_string_fs_new_show_fun130(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_core_show_string_fs_show_fun130, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_std_core_show_string_fs_show_fun130(kk_function_t _fself, kk_char_t _x1_x129, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_show_char(_x1_x129, _ctx);
}


// lift anonymous function
struct kk_std_core_show_string_fs_show_fun133__t {
  struct kk_function_s _base;
  kk_function_t _b_x30_33;
};
static kk_box_t kk_std_core_show_string_fs_show_fun133(kk_function_t _fself, kk_box_t _b_x31, kk_context_t* _ctx);
static kk_function_t kk_std_core_show_string_fs_new_show_fun133(kk_function_t _b_x30_33, kk_context_t* _ctx) {
  struct kk_std_core_show_string_fs_show_fun133__t* _self = kk_function_alloc_as(struct kk_std_core_show_string_fs_show_fun133__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_core_show_string_fs_show_fun133, kk_context());
  _self->_b_x30_33 = _b_x30_33;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_core_show_string_fs_show_fun133(kk_function_t _fself, kk_box_t _b_x31, kk_context_t* _ctx) {
  struct kk_std_core_show_string_fs_show_fun133__t* _self = kk_function_as(struct kk_std_core_show_string_fs_show_fun133__t*, _fself, _ctx);
  kk_function_t _b_x30_33 = _self->_b_x30_33; /* (c : char) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x30_33, _ctx);}, {}, _ctx)
  kk_string_t _x_x134;
  kk_char_t _x_x135 = kk_char_unbox(_b_x31, KK_OWNED, _ctx); /*char*/
  _x_x134 = kk_function_call(kk_string_t, (kk_function_t, kk_char_t, kk_context_t*), _b_x30_33, (_b_x30_33, _x_x135, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x134);
}

kk_string_t kk_std_core_show_string_fs_show(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  kk_string_t _x_x126;
  kk_define_string_literal(static, _s_x127, 1, "\"", _ctx)
  _x_x126 = kk_string_dup(_s_x127, _ctx); /*string*/
  kk_string_t _x_x128;
  kk_std_core_types__list _b_x29_32 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
  kk_function_t _b_x30_33 = kk_std_core_show_string_fs_new_show_fun130(_ctx); /*(c : char) -> string*/;
  kk_string_t _x_x131;
  kk_std_core_types__list _x_x132;
  kk_function_t _brw_x34 = kk_std_core_show_string_fs_new_show_fun133(_b_x30_33, _ctx); /*(2228) -> 2230 2229*/;
  kk_std_core_types__list _brw_x35 = kk_std_core_list_map(_b_x29_32, _brw_x34, _ctx); /*list<2229>*/;
  kk_function_drop(_brw_x34, _ctx);
  _x_x132 = _brw_x35; /*list<2229>*/
  _x_x131 = kk_std_core_list_concat_fs_join(_x_x132, _ctx); /*string*/
  kk_string_t _x_x136;
  kk_define_string_literal(static, _s_x137, 1, "\"", _ctx)
  _x_x136 = kk_string_dup(_s_x137, _ctx); /*string*/
  _x_x128 = kk_std_core_types__lp__plus__plus__rp_(_x_x131, _x_x136, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x126, _x_x128, _ctx);
}

// initialization
void kk_std_core_show__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_core_show__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
