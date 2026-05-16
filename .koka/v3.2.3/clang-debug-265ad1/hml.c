// Koka generated module: hml, koka version: 3.2.3, platform: 64-bit
#include "hml.h"
 
// runtime tag for the effect `:hica-brk`

kk_std_core_hnd__htag kk_hml_hica_brk_fs__tag;
 
// handler for the effect `:hica-brk`

kk_box_t kk_hml_hica_brk_fs__handle(kk_hml__hica_brk hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : hica-brk<e,b>, ret : (res : a) -> e b, action : () -> <hica-brk|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x3080 = kk_std_core_hnd__htag_dup(kk_hml_hica_brk_fs__tag, _ctx); /*hnd/htag<hml/hica-brk>*/
  return kk_std_core_hnd__hhandle(_x_x3080, kk_hml__hica_brk_box(hnd, _ctx), ret, action, _ctx);
}


// lift anonymous function
struct kk_hml_hc_assert_fun3086__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc_assert_fun3086(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc_assert_fun3086(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc_assert_fun3086, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc_assert_fun3086(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x3087;
  bool b_0_18 = kk_bool_unbox(_b_x11); /*bool*/;
  if (b_0_18) {
    _x_x3087 = false; /*bool*/
  }
  else {
    _x_x3087 = true; /*bool*/
  }
  return kk_bool_box(_x_x3087);
}

kk_unit_t kk_hml_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x2928;
  kk_box_t _x_x3085 = kk_std_core_hnd__open_none1(kk_hml_new_hc_assert_fun3086(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x2928 = kk_bool_unbox(_x_x3085); /*bool*/
  if (_match_x2928) {
    kk_box_t _x_x3088;
    kk_string_t _x_x3089;
    kk_define_string_literal(static, _s_x3090, 16, "assertion failed", _ctx)
    _x_x3089 = kk_string_dup(_s_x3090, _ctx); /*string*/
    _x_x3088 = kk_std_core_exn_throw(_x_x3089, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x3088); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}

kk_hml__cliflag kk_hml_cliflag_fs__copy(kk_hml__cliflag _this, kk_std_core_types__optional flag__name, kk_std_core_types__optional flag__short, kk_std_core_types__optional flag__help, kk_context_t* _ctx) { /* (cliflag, flag_name : ? string, flag_short : ? string, flag_help : ? string) -> cliflag */ 
  kk_string_t _x_x3097;
  if (kk_std_core_types__is_Optional(flag__name, _ctx)) {
    kk_box_t _box_x19 = flag__name._cons._Optional.value;
    kk_string_t _uniq_flag__name_913 = kk_string_unbox(_box_x19);
    kk_string_dup(_uniq_flag__name_913, _ctx);
    kk_std_core_types__optional_drop(flag__name, _ctx);
    _x_x3097 = _uniq_flag__name_913; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__name, _ctx);
    {
      struct kk_hml_Cliflag* _con_x3098 = kk_hml__as_Cliflag(_this, _ctx);
      kk_string_t _x = _con_x3098->flag__name;
      kk_string_dup(_x, _ctx);
      _x_x3097 = _x; /*string*/
    }
  }
  kk_string_t _x_x3099;
  if (kk_std_core_types__is_Optional(flag__short, _ctx)) {
    kk_box_t _box_x20 = flag__short._cons._Optional.value;
    kk_string_t _uniq_flag__short_921 = kk_string_unbox(_box_x20);
    kk_string_dup(_uniq_flag__short_921, _ctx);
    kk_std_core_types__optional_drop(flag__short, _ctx);
    _x_x3099 = _uniq_flag__short_921; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__short, _ctx);
    {
      struct kk_hml_Cliflag* _con_x3100 = kk_hml__as_Cliflag(_this, _ctx);
      kk_string_t _x_0 = _con_x3100->flag__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3099 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3101;
  if (kk_std_core_types__is_Optional(flag__help, _ctx)) {
    kk_box_t _box_x21 = flag__help._cons._Optional.value;
    kk_string_t _uniq_flag__help_929 = kk_string_unbox(_box_x21);
    kk_string_dup(_uniq_flag__help_929, _ctx);
    kk_std_core_types__optional_drop(flag__help, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x3101 = _uniq_flag__help_929; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__help, _ctx);
    {
      struct kk_hml_Cliflag* _con_x3102 = kk_hml__as_Cliflag(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3102->flag__name;
      kk_string_t _pat_1_3 = _con_x3102->flag__short;
      kk_string_t _x_1 = _con_x3102->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3101 = _x_1; /*string*/
    }
  }
  return kk_hml__new_Cliflag(kk_reuse_null, 0, _x_x3097, _x_x3099, _x_x3101, _ctx);
}

kk_string_t kk_hml_cliflag_fs_show(kk_hml__cliflag p, kk_context_t* _ctx) { /* (p : cliflag) -> string */ 
  kk_string_t _x_x3103;
  kk_define_string_literal(static, _s_x3104, 8, "CliFlag(", _ctx)
  _x_x3103 = kk_string_dup(_s_x3104, _ctx); /*string*/
  kk_string_t _x_x3105;
  kk_string_t _x_x3106;
  kk_define_string_literal(static, _s_x3107, 11, "flag_name: ", _ctx)
  _x_x3106 = kk_string_dup(_s_x3107, _ctx); /*string*/
  kk_string_t _x_x3108;
  kk_string_t _x_x3109;
  {
    struct kk_hml_Cliflag* _con_x3110 = kk_hml__as_Cliflag(p, _ctx);
    kk_string_t _x = _con_x3110->flag__name;
    kk_string_dup(_x, _ctx);
    _x_x3109 = _x; /*string*/
  }
  kk_string_t _x_x3111;
  kk_string_t _x_x3112;
  kk_define_string_literal(static, _s_x3113, 2, ", ", _ctx)
  _x_x3112 = kk_string_dup(_s_x3113, _ctx); /*string*/
  kk_string_t _x_x3114;
  kk_string_t _x_x3115;
  kk_define_string_literal(static, _s_x3116, 12, "flag_short: ", _ctx)
  _x_x3115 = kk_string_dup(_s_x3116, _ctx); /*string*/
  kk_string_t _x_x3117;
  kk_string_t _x_x3118;
  {
    struct kk_hml_Cliflag* _con_x3119 = kk_hml__as_Cliflag(p, _ctx);
    kk_string_t _x_0 = _con_x3119->flag__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3118 = _x_0; /*string*/
  }
  kk_string_t _x_x3120;
  kk_string_t _x_x3121;
  kk_define_string_literal(static, _s_x3122, 2, ", ", _ctx)
  _x_x3121 = kk_string_dup(_s_x3122, _ctx); /*string*/
  kk_string_t _x_x3123;
  kk_string_t _x_x3124;
  kk_define_string_literal(static, _s_x3125, 11, "flag_help: ", _ctx)
  _x_x3124 = kk_string_dup(_s_x3125, _ctx); /*string*/
  kk_string_t _x_x3126;
  kk_string_t _x_x3127;
  {
    struct kk_hml_Cliflag* _con_x3128 = kk_hml__as_Cliflag(p, _ctx);
    kk_string_t _pat_0_1 = _con_x3128->flag__name;
    kk_string_t _pat_1_1 = _con_x3128->flag__short;
    kk_string_t _x_1 = _con_x3128->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _x_x3127 = _x_1; /*string*/
  }
  kk_string_t _x_x3129;
  kk_define_string_literal(static, _s_x3130, 1, ")", _ctx)
  _x_x3129 = kk_string_dup(_s_x3130, _ctx); /*string*/
  _x_x3126 = kk_std_core_types__lp__plus__plus__rp_(_x_x3127, _x_x3129, _ctx); /*string*/
  _x_x3123 = kk_std_core_types__lp__plus__plus__rp_(_x_x3124, _x_x3126, _ctx); /*string*/
  _x_x3120 = kk_std_core_types__lp__plus__plus__rp_(_x_x3121, _x_x3123, _ctx); /*string*/
  _x_x3117 = kk_std_core_types__lp__plus__plus__rp_(_x_x3118, _x_x3120, _ctx); /*string*/
  _x_x3114 = kk_std_core_types__lp__plus__plus__rp_(_x_x3115, _x_x3117, _ctx); /*string*/
  _x_x3111 = kk_std_core_types__lp__plus__plus__rp_(_x_x3112, _x_x3114, _ctx); /*string*/
  _x_x3108 = kk_std_core_types__lp__plus__plus__rp_(_x_x3109, _x_x3111, _ctx); /*string*/
  _x_x3105 = kk_std_core_types__lp__plus__plus__rp_(_x_x3106, _x_x3108, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3103, _x_x3105, _ctx);
}

kk_hml__clioption kk_hml_clioption_fs__copy(kk_hml__clioption _this, kk_std_core_types__optional opt__name, kk_std_core_types__optional opt__short, kk_std_core_types__optional opt__help, kk_std_core_types__optional opt__default, kk_context_t* _ctx) { /* (clioption, opt_name : ? string, opt_short : ? string, opt_help : ? string, opt_default : ? string) -> clioption */ 
  kk_string_t _x_x3135;
  if (kk_std_core_types__is_Optional(opt__name, _ctx)) {
    kk_box_t _box_x22 = opt__name._cons._Optional.value;
    kk_string_t _uniq_opt__name_1076 = kk_string_unbox(_box_x22);
    kk_string_dup(_uniq_opt__name_1076, _ctx);
    kk_std_core_types__optional_drop(opt__name, _ctx);
    _x_x3135 = _uniq_opt__name_1076; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__name, _ctx);
    {
      struct kk_hml_Clioption* _con_x3136 = kk_hml__as_Clioption(_this, _ctx);
      kk_string_t _x = _con_x3136->opt__name;
      kk_string_dup(_x, _ctx);
      _x_x3135 = _x; /*string*/
    }
  }
  kk_string_t _x_x3137;
  if (kk_std_core_types__is_Optional(opt__short, _ctx)) {
    kk_box_t _box_x23 = opt__short._cons._Optional.value;
    kk_string_t _uniq_opt__short_1084 = kk_string_unbox(_box_x23);
    kk_string_dup(_uniq_opt__short_1084, _ctx);
    kk_std_core_types__optional_drop(opt__short, _ctx);
    _x_x3137 = _uniq_opt__short_1084; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__short, _ctx);
    {
      struct kk_hml_Clioption* _con_x3138 = kk_hml__as_Clioption(_this, _ctx);
      kk_string_t _x_0 = _con_x3138->opt__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3137 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3139;
  if (kk_std_core_types__is_Optional(opt__help, _ctx)) {
    kk_box_t _box_x24 = opt__help._cons._Optional.value;
    kk_string_t _uniq_opt__help_1092 = kk_string_unbox(_box_x24);
    kk_string_dup(_uniq_opt__help_1092, _ctx);
    kk_std_core_types__optional_drop(opt__help, _ctx);
    _x_x3139 = _uniq_opt__help_1092; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__help, _ctx);
    {
      struct kk_hml_Clioption* _con_x3140 = kk_hml__as_Clioption(_this, _ctx);
      kk_string_t _x_1 = _con_x3140->opt__help;
      kk_string_dup(_x_1, _ctx);
      _x_x3139 = _x_1; /*string*/
    }
  }
  kk_string_t _x_x3141;
  if (kk_std_core_types__is_Optional(opt__default, _ctx)) {
    kk_box_t _box_x25 = opt__default._cons._Optional.value;
    kk_string_t _uniq_opt__default_1100 = kk_string_unbox(_box_x25);
    kk_string_dup(_uniq_opt__default_1100, _ctx);
    kk_std_core_types__optional_drop(opt__default, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(4)), _ctx);
    _x_x3141 = _uniq_opt__default_1100; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__default, _ctx);
    {
      struct kk_hml_Clioption* _con_x3142 = kk_hml__as_Clioption(_this, _ctx);
      kk_string_t _pat_0_3 = _con_x3142->opt__name;
      kk_string_t _pat_1_4 = _con_x3142->opt__short;
      kk_string_t _pat_2_3 = _con_x3142->opt__help;
      kk_string_t _x_2 = _con_x3142->opt__default;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_2_3, _ctx);
        kk_string_drop(_pat_1_4, _ctx);
        kk_string_drop(_pat_0_3, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_2, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3141 = _x_2; /*string*/
    }
  }
  return kk_hml__new_Clioption(kk_reuse_null, 0, _x_x3135, _x_x3137, _x_x3139, _x_x3141, _ctx);
}

kk_string_t kk_hml_clioption_fs_show(kk_hml__clioption p, kk_context_t* _ctx) { /* (p : clioption) -> string */ 
  kk_string_t _x_x3143;
  kk_define_string_literal(static, _s_x3144, 10, "CliOption(", _ctx)
  _x_x3143 = kk_string_dup(_s_x3144, _ctx); /*string*/
  kk_string_t _x_x3145;
  kk_string_t _x_x3146;
  kk_define_string_literal(static, _s_x3147, 10, "opt_name: ", _ctx)
  _x_x3146 = kk_string_dup(_s_x3147, _ctx); /*string*/
  kk_string_t _x_x3148;
  kk_string_t _x_x3149;
  {
    struct kk_hml_Clioption* _con_x3150 = kk_hml__as_Clioption(p, _ctx);
    kk_string_t _x = _con_x3150->opt__name;
    kk_string_dup(_x, _ctx);
    _x_x3149 = _x; /*string*/
  }
  kk_string_t _x_x3151;
  kk_string_t _x_x3152;
  kk_define_string_literal(static, _s_x3153, 2, ", ", _ctx)
  _x_x3152 = kk_string_dup(_s_x3153, _ctx); /*string*/
  kk_string_t _x_x3154;
  kk_string_t _x_x3155;
  kk_define_string_literal(static, _s_x3156, 11, "opt_short: ", _ctx)
  _x_x3155 = kk_string_dup(_s_x3156, _ctx); /*string*/
  kk_string_t _x_x3157;
  kk_string_t _x_x3158;
  {
    struct kk_hml_Clioption* _con_x3159 = kk_hml__as_Clioption(p, _ctx);
    kk_string_t _x_0 = _con_x3159->opt__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3158 = _x_0; /*string*/
  }
  kk_string_t _x_x3160;
  kk_string_t _x_x3161;
  kk_define_string_literal(static, _s_x3162, 2, ", ", _ctx)
  _x_x3161 = kk_string_dup(_s_x3162, _ctx); /*string*/
  kk_string_t _x_x3163;
  kk_string_t _x_x3164;
  kk_define_string_literal(static, _s_x3165, 10, "opt_help: ", _ctx)
  _x_x3164 = kk_string_dup(_s_x3165, _ctx); /*string*/
  kk_string_t _x_x3166;
  kk_string_t _x_x3167;
  {
    struct kk_hml_Clioption* _con_x3168 = kk_hml__as_Clioption(p, _ctx);
    kk_string_t _x_1 = _con_x3168->opt__help;
    kk_string_dup(_x_1, _ctx);
    _x_x3167 = _x_1; /*string*/
  }
  kk_string_t _x_x3169;
  kk_string_t _x_x3170;
  kk_define_string_literal(static, _s_x3171, 2, ", ", _ctx)
  _x_x3170 = kk_string_dup(_s_x3171, _ctx); /*string*/
  kk_string_t _x_x3172;
  kk_string_t _x_x3173;
  kk_define_string_literal(static, _s_x3174, 13, "opt_default: ", _ctx)
  _x_x3173 = kk_string_dup(_s_x3174, _ctx); /*string*/
  kk_string_t _x_x3175;
  kk_string_t _x_x3176;
  {
    struct kk_hml_Clioption* _con_x3177 = kk_hml__as_Clioption(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3177->opt__name;
    kk_string_t _pat_1_2 = _con_x3177->opt__short;
    kk_string_t _pat_2_2 = _con_x3177->opt__help;
    kk_string_t _x_2 = _con_x3177->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_2_2, _ctx);
      kk_string_drop(_pat_1_2, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_string_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _x_x3176 = _x_2; /*string*/
  }
  kk_string_t _x_x3178;
  kk_define_string_literal(static, _s_x3179, 1, ")", _ctx)
  _x_x3178 = kk_string_dup(_s_x3179, _ctx); /*string*/
  _x_x3175 = kk_std_core_types__lp__plus__plus__rp_(_x_x3176, _x_x3178, _ctx); /*string*/
  _x_x3172 = kk_std_core_types__lp__plus__plus__rp_(_x_x3173, _x_x3175, _ctx); /*string*/
  _x_x3169 = kk_std_core_types__lp__plus__plus__rp_(_x_x3170, _x_x3172, _ctx); /*string*/
  _x_x3166 = kk_std_core_types__lp__plus__plus__rp_(_x_x3167, _x_x3169, _ctx); /*string*/
  _x_x3163 = kk_std_core_types__lp__plus__plus__rp_(_x_x3164, _x_x3166, _ctx); /*string*/
  _x_x3160 = kk_std_core_types__lp__plus__plus__rp_(_x_x3161, _x_x3163, _ctx); /*string*/
  _x_x3157 = kk_std_core_types__lp__plus__plus__rp_(_x_x3158, _x_x3160, _ctx); /*string*/
  _x_x3154 = kk_std_core_types__lp__plus__plus__rp_(_x_x3155, _x_x3157, _ctx); /*string*/
  _x_x3151 = kk_std_core_types__lp__plus__plus__rp_(_x_x3152, _x_x3154, _ctx); /*string*/
  _x_x3148 = kk_std_core_types__lp__plus__plus__rp_(_x_x3149, _x_x3151, _ctx); /*string*/
  _x_x3145 = kk_std_core_types__lp__plus__plus__rp_(_x_x3146, _x_x3148, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3143, _x_x3145, _ctx);
}

kk_hml__cliarg kk_hml_cliarg_fs__copy(kk_hml__cliarg _this, kk_std_core_types__optional arg__name, kk_std_core_types__optional arg__help, kk_std_core_types__optional arg__required, kk_context_t* _ctx) { /* (cliarg, arg_name : ? string, arg_help : ? string, arg_required : ? bool) -> cliarg */ 
  kk_string_t _x_x3183;
  if (kk_std_core_types__is_Optional(arg__name, _ctx)) {
    kk_box_t _box_x26 = arg__name._cons._Optional.value;
    kk_string_t _uniq_arg__name_1271 = kk_string_unbox(_box_x26);
    kk_string_dup(_uniq_arg__name_1271, _ctx);
    kk_std_core_types__optional_drop(arg__name, _ctx);
    _x_x3183 = _uniq_arg__name_1271; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__name, _ctx);
    {
      struct kk_hml_Cliarg* _con_x3184 = kk_hml__as_Cliarg(_this, _ctx);
      kk_string_t _x = _con_x3184->arg__name;
      kk_string_dup(_x, _ctx);
      _x_x3183 = _x; /*string*/
    }
  }
  kk_string_t _x_x3185;
  if (kk_std_core_types__is_Optional(arg__help, _ctx)) {
    kk_box_t _box_x27 = arg__help._cons._Optional.value;
    kk_string_t _uniq_arg__help_1279 = kk_string_unbox(_box_x27);
    kk_string_dup(_uniq_arg__help_1279, _ctx);
    kk_std_core_types__optional_drop(arg__help, _ctx);
    _x_x3185 = _uniq_arg__help_1279; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__help, _ctx);
    {
      struct kk_hml_Cliarg* _con_x3186 = kk_hml__as_Cliarg(_this, _ctx);
      kk_string_t _x_0 = _con_x3186->arg__help;
      kk_string_dup(_x_0, _ctx);
      _x_x3185 = _x_0; /*string*/
    }
  }
  bool _x_x3187;
  if (kk_std_core_types__is_Optional(arg__required, _ctx)) {
    kk_box_t _box_x28 = arg__required._cons._Optional.value;
    bool _uniq_arg__required_1287 = kk_bool_unbox(_box_x28);
    kk_std_core_types__optional_drop(arg__required, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x3187 = _uniq_arg__required_1287; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(arg__required, _ctx);
    {
      struct kk_hml_Cliarg* _con_x3188 = kk_hml__as_Cliarg(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3188->arg__name;
      kk_string_t _pat_1_3 = _con_x3188->arg__help;
      bool _x_1 = _con_x3188->arg__required;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3187 = _x_1; /*bool*/
    }
  }
  return kk_hml__new_Cliarg(kk_reuse_null, 0, _x_x3183, _x_x3185, _x_x3187, _ctx);
}

kk_hml__clispec kk_hml_clispec_fs__copy(kk_hml__clispec _this, kk_std_core_types__optional app__name, kk_std_core_types__optional app__version, kk_std_core_types__optional app__about, kk_std_core_types__optional app__flags, kk_std_core_types__optional app__options, kk_std_core_types__optional app__args, kk_std_core_types__optional app__commands, kk_context_t* _ctx) { /* (clispec, app_name : ? string, app_version : ? string, app_about : ? string, app_flags : ? (list<cliflag>), app_options : ? (list<clioption>), app_args : ? (list<cliarg>), app_commands : ? (list<(string, clispec)>)) -> clispec */ 
  kk_string_t _x_x3196;
  if (kk_std_core_types__is_Optional(app__name, _ctx)) {
    kk_box_t _box_x29 = app__name._cons._Optional.value;
    kk_string_t _uniq_app__name_1361 = kk_string_unbox(_box_x29);
    kk_string_dup(_uniq_app__name_1361, _ctx);
    kk_std_core_types__optional_drop(app__name, _ctx);
    _x_x3196 = _uniq_app__name_1361; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__name, _ctx);
    {
      struct kk_hml_Clispec* _con_x3197 = kk_hml__as_Clispec(_this, _ctx);
      kk_string_t _x = _con_x3197->app__name;
      kk_string_dup(_x, _ctx);
      _x_x3196 = _x; /*string*/
    }
  }
  kk_string_t _x_x3198;
  if (kk_std_core_types__is_Optional(app__version, _ctx)) {
    kk_box_t _box_x30 = app__version._cons._Optional.value;
    kk_string_t _uniq_app__version_1369 = kk_string_unbox(_box_x30);
    kk_string_dup(_uniq_app__version_1369, _ctx);
    kk_std_core_types__optional_drop(app__version, _ctx);
    _x_x3198 = _uniq_app__version_1369; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__version, _ctx);
    {
      struct kk_hml_Clispec* _con_x3199 = kk_hml__as_Clispec(_this, _ctx);
      kk_string_t _x_0 = _con_x3199->app__version;
      kk_string_dup(_x_0, _ctx);
      _x_x3198 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3200;
  if (kk_std_core_types__is_Optional(app__about, _ctx)) {
    kk_box_t _box_x31 = app__about._cons._Optional.value;
    kk_string_t _uniq_app__about_1377 = kk_string_unbox(_box_x31);
    kk_string_dup(_uniq_app__about_1377, _ctx);
    kk_std_core_types__optional_drop(app__about, _ctx);
    _x_x3200 = _uniq_app__about_1377; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__about, _ctx);
    {
      struct kk_hml_Clispec* _con_x3201 = kk_hml__as_Clispec(_this, _ctx);
      kk_string_t _x_1 = _con_x3201->app__about;
      kk_string_dup(_x_1, _ctx);
      _x_x3200 = _x_1; /*string*/
    }
  }
  kk_std_core_types__list _x_x3202;
  if (kk_std_core_types__is_Optional(app__flags, _ctx)) {
    kk_box_t _box_x32 = app__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_app__flags_1385 = kk_std_core_types__list_unbox(_box_x32, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__flags_1385, _ctx);
    kk_std_core_types__optional_drop(app__flags, _ctx);
    _x_x3202 = _uniq_app__flags_1385; /*list<hml/cliflag>*/
  }
  else {
    kk_std_core_types__optional_drop(app__flags, _ctx);
    {
      struct kk_hml_Clispec* _con_x3203 = kk_hml__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3203->app__flags;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3202 = _x_2; /*list<hml/cliflag>*/
    }
  }
  kk_std_core_types__list _x_x3204;
  if (kk_std_core_types__is_Optional(app__options, _ctx)) {
    kk_box_t _box_x33 = app__options._cons._Optional.value;
    kk_std_core_types__list _uniq_app__options_1393 = kk_std_core_types__list_unbox(_box_x33, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__options_1393, _ctx);
    kk_std_core_types__optional_drop(app__options, _ctx);
    _x_x3204 = _uniq_app__options_1393; /*list<hml/clioption>*/
  }
  else {
    kk_std_core_types__optional_drop(app__options, _ctx);
    {
      struct kk_hml_Clispec* _con_x3205 = kk_hml__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_3 = _con_x3205->app__options;
      kk_std_core_types__list_dup(_x_3, _ctx);
      _x_x3204 = _x_3; /*list<hml/clioption>*/
    }
  }
  kk_std_core_types__list _x_x3206;
  if (kk_std_core_types__is_Optional(app__args, _ctx)) {
    kk_box_t _box_x34 = app__args._cons._Optional.value;
    kk_std_core_types__list _uniq_app__args_1401 = kk_std_core_types__list_unbox(_box_x34, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__args_1401, _ctx);
    kk_std_core_types__optional_drop(app__args, _ctx);
    _x_x3206 = _uniq_app__args_1401; /*list<hml/cliarg>*/
  }
  else {
    kk_std_core_types__optional_drop(app__args, _ctx);
    {
      struct kk_hml_Clispec* _con_x3207 = kk_hml__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_4 = _con_x3207->app__args;
      kk_std_core_types__list_dup(_x_4, _ctx);
      _x_x3206 = _x_4; /*list<hml/cliarg>*/
    }
  }
  kk_std_core_types__list _x_x3208;
  if (kk_std_core_types__is_Optional(app__commands, _ctx)) {
    kk_box_t _box_x35 = app__commands._cons._Optional.value;
    kk_std_core_types__list _uniq_app__commands_1409 = kk_std_core_types__list_unbox(_box_x35, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__commands_1409, _ctx);
    kk_std_core_types__optional_drop(app__commands, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(7)), _ctx);
    _x_x3208 = _uniq_app__commands_1409; /*list<(string, hml/clispec)>*/
  }
  else {
    kk_std_core_types__optional_drop(app__commands, _ctx);
    {
      struct kk_hml_Clispec* _con_x3209 = kk_hml__as_Clispec(_this, _ctx);
      kk_string_t _pat_0_6 = _con_x3209->app__name;
      kk_string_t _pat_1_7 = _con_x3209->app__version;
      kk_string_t _pat_2_6 = _con_x3209->app__about;
      kk_std_core_types__list _pat_3_6 = _con_x3209->app__flags;
      kk_std_core_types__list _pat_4_6 = _con_x3209->app__options;
      kk_std_core_types__list _pat_5_6 = _con_x3209->app__args;
      kk_std_core_types__list _x_5 = _con_x3209->app__commands;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_std_core_types__list_drop(_pat_5_6, _ctx);
        kk_std_core_types__list_drop(_pat_4_6, _ctx);
        kk_std_core_types__list_drop(_pat_3_6, _ctx);
        kk_string_drop(_pat_2_6, _ctx);
        kk_string_drop(_pat_1_7, _ctx);
        kk_string_drop(_pat_0_6, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_std_core_types__list_dup(_x_5, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3208 = _x_5; /*list<(string, hml/clispec)>*/
    }
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x3196, _x_x3198, _x_x3200, _x_x3202, _x_x3204, _x_x3206, _x_x3208, _ctx);
}

kk_hml__cliresult kk_hml_cliresult_fs__copy(kk_hml__cliresult _this, kk_std_core_types__optional cli__flags, kk_std_core_types__optional cli__options, kk_std_core_types__optional cli__positionals, kk_std_core_types__optional cli__command, kk_std_core_types__optional cli__sub, kk_context_t* _ctx) { /* (cliresult, cli_flags : ? (list<string>), cli_options : ? (list<(string, string)>), cli_positionals : ? (list<string>), cli_command : ? string, cli_sub : ? (maybe<cliresult>)) -> cliresult */ 
  kk_std_core_types__list _x_x3215;
  if (kk_std_core_types__is_Optional(cli__flags, _ctx)) {
    kk_box_t _box_x36 = cli__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__flags_1471 = kk_std_core_types__list_unbox(_box_x36, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__flags_1471, _ctx);
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    _x_x3215 = _uniq_cli__flags_1471; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    {
      struct kk_hml_Cliresult* _con_x3216 = kk_hml__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x = _con_x3216->cli__flags;
      kk_std_core_types__list_dup(_x, _ctx);
      _x_x3215 = _x; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3217;
  if (kk_std_core_types__is_Optional(cli__options, _ctx)) {
    kk_box_t _box_x37 = cli__options._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__options_1479 = kk_std_core_types__list_unbox(_box_x37, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__options_1479, _ctx);
    kk_std_core_types__optional_drop(cli__options, _ctx);
    _x_x3217 = _uniq_cli__options_1479; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__options, _ctx);
    {
      struct kk_hml_Cliresult* _con_x3218 = kk_hml__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3218->cli__options;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3217 = _x_0; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3219;
  if (kk_std_core_types__is_Optional(cli__positionals, _ctx)) {
    kk_box_t _box_x38 = cli__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__positionals_1487 = kk_std_core_types__list_unbox(_box_x38, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__positionals_1487, _ctx);
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    _x_x3219 = _uniq_cli__positionals_1487; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    {
      struct kk_hml_Cliresult* _con_x3220 = kk_hml__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3220->cli__positionals;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3219 = _x_1; /*list<string>*/
    }
  }
  kk_string_t _x_x3221;
  if (kk_std_core_types__is_Optional(cli__command, _ctx)) {
    kk_box_t _box_x39 = cli__command._cons._Optional.value;
    kk_string_t _uniq_cli__command_1495 = kk_string_unbox(_box_x39);
    kk_string_dup(_uniq_cli__command_1495, _ctx);
    kk_std_core_types__optional_drop(cli__command, _ctx);
    _x_x3221 = _uniq_cli__command_1495; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(cli__command, _ctx);
    {
      struct kk_hml_Cliresult* _con_x3222 = kk_hml__as_Cliresult(_this, _ctx);
      kk_string_t _x_2 = _con_x3222->cli__command;
      kk_string_dup(_x_2, _ctx);
      _x_x3221 = _x_2; /*string*/
    }
  }
  kk_std_core_types__maybe _x_x3223;
  if (kk_std_core_types__is_Optional(cli__sub, _ctx)) {
    kk_box_t _box_x40 = cli__sub._cons._Optional.value;
    kk_std_core_types__maybe _uniq_cli__sub_1503 = kk_std_core_types__maybe_unbox(_box_x40, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_dup(_uniq_cli__sub_1503, _ctx);
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3223 = _uniq_cli__sub_1503; /*maybe<hml/cliresult>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    {
      struct kk_hml_Cliresult* _con_x3224 = kk_hml__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _pat_0_4 = _con_x3224->cli__flags;
      kk_std_core_types__list _pat_1_5 = _con_x3224->cli__options;
      kk_std_core_types__list _pat_2_4 = _con_x3224->cli__positionals;
      kk_string_t _pat_3_4 = _con_x3224->cli__command;
      kk_std_core_types__maybe _x_3 = _con_x3224->cli__sub;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_3_4, _ctx);
        kk_std_core_types__list_drop(_pat_2_4, _ctx);
        kk_std_core_types__list_drop(_pat_1_5, _ctx);
        kk_std_core_types__list_drop(_pat_0_4, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_std_core_types__maybe_dup(_x_3, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3223 = _x_3; /*maybe<hml/cliresult>*/
    }
  }
  return kk_hml__new_Cliresult(kk_reuse_null, 0, _x_x3215, _x_x3217, _x_x3219, _x_x3221, _x_x3223, _ctx);
}

kk_string_t kk_hml_cliarg_fs_show(kk_hml__cliarg p, kk_context_t* _ctx) { /* (p : cliarg) -> string */ 
  kk_string_t _x_x3231;
  kk_define_string_literal(static, _s_x3232, 7, "CliArg(", _ctx)
  _x_x3231 = kk_string_dup(_s_x3232, _ctx); /*string*/
  kk_string_t _x_x3233;
  kk_string_t _x_x3234;
  kk_define_string_literal(static, _s_x3235, 10, "arg_name: ", _ctx)
  _x_x3234 = kk_string_dup(_s_x3235, _ctx); /*string*/
  kk_string_t _x_x3236;
  kk_string_t _x_x3237;
  {
    struct kk_hml_Cliarg* _con_x3238 = kk_hml__as_Cliarg(p, _ctx);
    kk_string_t _x = _con_x3238->arg__name;
    kk_string_dup(_x, _ctx);
    _x_x3237 = _x; /*string*/
  }
  kk_string_t _x_x3239;
  kk_string_t _x_x3240;
  kk_define_string_literal(static, _s_x3241, 2, ", ", _ctx)
  _x_x3240 = kk_string_dup(_s_x3241, _ctx); /*string*/
  kk_string_t _x_x3242;
  kk_string_t _x_x3243;
  kk_define_string_literal(static, _s_x3244, 10, "arg_help: ", _ctx)
  _x_x3243 = kk_string_dup(_s_x3244, _ctx); /*string*/
  kk_string_t _x_x3245;
  kk_string_t _x_x3246;
  {
    struct kk_hml_Cliarg* _con_x3247 = kk_hml__as_Cliarg(p, _ctx);
    kk_string_t _x_0 = _con_x3247->arg__help;
    kk_string_dup(_x_0, _ctx);
    _x_x3246 = _x_0; /*string*/
  }
  kk_string_t _x_x3248;
  kk_string_t _x_x3249;
  kk_define_string_literal(static, _s_x3250, 2, ", ", _ctx)
  _x_x3249 = kk_string_dup(_s_x3250, _ctx); /*string*/
  kk_string_t _x_x3251;
  kk_string_t _x_x3252;
  kk_define_string_literal(static, _s_x3253, 14, "arg_required: ", _ctx)
  _x_x3252 = kk_string_dup(_s_x3253, _ctx); /*string*/
  kk_string_t _x_x3254;
  kk_string_t _x_x3255;
  {
    struct kk_hml_Cliarg* _con_x3256 = kk_hml__as_Cliarg(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3256->arg__name;
    kk_string_t _pat_1_1 = _con_x3256->arg__help;
    bool _x_1 = _con_x3256->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_datatype_ptr_decref(p, _ctx);
    }
    if (_x_1) {
      kk_define_string_literal(static, _s_x3257, 4, "True", _ctx)
      _x_x3255 = kk_string_dup(_s_x3257, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(static, _s_x3258, 5, "False", _ctx)
      _x_x3255 = kk_string_dup(_s_x3258, _ctx); /*string*/
    }
  }
  kk_string_t _x_x3259;
  kk_define_string_literal(static, _s_x3260, 1, ")", _ctx)
  _x_x3259 = kk_string_dup(_s_x3260, _ctx); /*string*/
  _x_x3254 = kk_std_core_types__lp__plus__plus__rp_(_x_x3255, _x_x3259, _ctx); /*string*/
  _x_x3251 = kk_std_core_types__lp__plus__plus__rp_(_x_x3252, _x_x3254, _ctx); /*string*/
  _x_x3248 = kk_std_core_types__lp__plus__plus__rp_(_x_x3249, _x_x3251, _ctx); /*string*/
  _x_x3245 = kk_std_core_types__lp__plus__plus__rp_(_x_x3246, _x_x3248, _ctx); /*string*/
  _x_x3242 = kk_std_core_types__lp__plus__plus__rp_(_x_x3243, _x_x3245, _ctx); /*string*/
  _x_x3239 = kk_std_core_types__lp__plus__plus__rp_(_x_x3240, _x_x3242, _ctx); /*string*/
  _x_x3236 = kk_std_core_types__lp__plus__plus__rp_(_x_x3237, _x_x3239, _ctx); /*string*/
  _x_x3233 = kk_std_core_types__lp__plus__plus__rp_(_x_x3234, _x_x3236, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3231, _x_x3233, _ctx);
}


// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3266__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3266(kk_function_t _fself, kk_string_t _x1_x3265, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3266(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_cliresult_fs_show_fun3266, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_cliresult_fs_show_fun3266(kk_function_t _fself, kk_string_t _x1_x3265, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3265, _ctx);
}


// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3271__t {
  struct kk_function_s _base;
  kk_function_t _b_x42_59;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3271(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3271(kk_function_t _b_x42_59, kk_context_t* _ctx) {
  struct kk_hml_cliresult_fs_show_fun3271__t* _self = kk_function_alloc_as(struct kk_hml_cliresult_fs_show_fun3271__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_cliresult_fs_show_fun3271, kk_context());
  _self->_b_x42_59 = _b_x42_59;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_cliresult_fs_show_fun3271(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx) {
  struct kk_hml_cliresult_fs_show_fun3271__t* _self = kk_function_as(struct kk_hml_cliresult_fs_show_fun3271__t*, _fself, _ctx);
  kk_function_t _b_x42_59 = _self->_b_x42_59; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x42_59, _ctx);}, {}, _ctx)
  kk_string_t _x_x3272 = kk_string_unbox(_b_x43); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x42_59, (_b_x42_59, _x_x3272, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3278__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3278(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3278(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_cliresult_fs_show_fun3278, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3279__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3279(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3279(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_cliresult_fs_show_fun3279, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_cliresult_fs_show_fun3279(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3280 = kk_string_unbox(_b_x47); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3280, _ctx);
}


// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3281__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3281(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3281(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_cliresult_fs_show_fun3281, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_cliresult_fs_show_fun3281(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3282 = kk_string_unbox(_b_x48); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3282, _ctx);
}
static kk_string_t kk_hml_cliresult_fs_show_fun3278(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_hml_cliresult_fs_new_show_fun3279(_ctx), kk_hml_cliresult_fs_new_show_fun3281(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3287__t {
  struct kk_function_s _base;
  kk_function_t _b_x50_61;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3287(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3287(kk_function_t _b_x50_61, kk_context_t* _ctx) {
  struct kk_hml_cliresult_fs_show_fun3287__t* _self = kk_function_alloc_as(struct kk_hml_cliresult_fs_show_fun3287__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_cliresult_fs_show_fun3287, kk_context());
  _self->_b_x50_61 = _b_x50_61;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_cliresult_fs_show_fun3287(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  struct kk_hml_cliresult_fs_show_fun3287__t* _self = kk_function_as(struct kk_hml_cliresult_fs_show_fun3287__t*, _fself, _ctx);
  kk_function_t _b_x50_61 = _self->_b_x50_61; /* ((string, string)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x50_61, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3288 = kk_std_core_types__tuple2_unbox(_b_x51, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x50_61, (_b_x50_61, _x_x3288, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3295__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3295(kk_function_t _fself, kk_string_t _x1_x3294, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3295(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_cliresult_fs_show_fun3295, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_cliresult_fs_show_fun3295(kk_function_t _fself, kk_string_t _x1_x3294, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3294, _ctx);
}


// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3300__t {
  struct kk_function_s _base;
  kk_function_t _b_x53_66;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3300(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3300(kk_function_t _b_x53_66, kk_context_t* _ctx) {
  struct kk_hml_cliresult_fs_show_fun3300__t* _self = kk_function_alloc_as(struct kk_hml_cliresult_fs_show_fun3300__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_cliresult_fs_show_fun3300, kk_context());
  _self->_b_x53_66 = _b_x53_66;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_cliresult_fs_show_fun3300(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_hml_cliresult_fs_show_fun3300__t* _self = kk_function_as(struct kk_hml_cliresult_fs_show_fun3300__t*, _fself, _ctx);
  kk_function_t _b_x53_66 = _self->_b_x53_66; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x53_66, _ctx);}, {}, _ctx)
  kk_string_t _x_x3301 = kk_string_unbox(_b_x54); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x53_66, (_b_x53_66, _x_x3301, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3317__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3317(kk_function_t _fself, kk_hml__cliresult _x1_x3316, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3317(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_cliresult_fs_show_fun3317, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_cliresult_fs_show_fun3317(kk_function_t _fself, kk_hml__cliresult _x1_x3316, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml_cliresult_fs_show(_x1_x3316, _ctx);
}


// lift anonymous function
struct kk_hml_cliresult_fs_show_fun3322__t {
  struct kk_function_s _base;
  kk_function_t _b_x56_68;
};
static kk_string_t kk_hml_cliresult_fs_show_fun3322(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_hml_cliresult_fs_new_show_fun3322(kk_function_t _b_x56_68, kk_context_t* _ctx) {
  struct kk_hml_cliresult_fs_show_fun3322__t* _self = kk_function_alloc_as(struct kk_hml_cliresult_fs_show_fun3322__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_cliresult_fs_show_fun3322, kk_context());
  _self->_b_x56_68 = _b_x56_68;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_cliresult_fs_show_fun3322(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_hml_cliresult_fs_show_fun3322__t* _self = kk_function_as(struct kk_hml_cliresult_fs_show_fun3322__t*, _fself, _ctx);
  kk_function_t _b_x56_68 = _self->_b_x56_68; /* (p : hml/cliresult) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x56_68, _ctx);}, {}, _ctx)
  kk_hml__cliresult _x_x3323 = kk_hml__cliresult_unbox(_b_x57, KK_OWNED, _ctx); /*hml/cliresult*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__cliresult, kk_context_t*), _b_x56_68, (_b_x56_68, _x_x3323, _ctx), _ctx);
}

kk_string_t kk_hml_cliresult_fs_show(kk_hml__cliresult p, kk_context_t* _ctx) { /* (p : cliresult) -> div string */ 
  kk_string_t _x_x3261;
  kk_define_string_literal(static, _s_x3262, 10, "CliResult(", _ctx)
  _x_x3261 = kk_string_dup(_s_x3262, _ctx); /*string*/
  kk_string_t _x_x3263;
  kk_std_core_types__list _b_x41_58;
  {
    struct kk_hml_Cliresult* _con_x3264 = kk_hml__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x = _con_x3264->cli__flags;
    kk_std_core_types__list_dup(_x, _ctx);
    _b_x41_58 = _x; /*list<string>*/
  }
  kk_function_t _b_x42_59 = kk_hml_cliresult_fs_new_show_fun3266(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3267;
  kk_define_string_literal(static, _s_x3268, 11, "cli_flags: ", _ctx)
  _x_x3267 = kk_string_dup(_s_x3268, _ctx); /*string*/
  kk_string_t _x_x3269;
  kk_string_t _x_x3270 = kk_std_core_list_show(_b_x41_58, kk_hml_cliresult_fs_new_show_fun3271(_b_x42_59, _ctx), _ctx); /*string*/
  kk_string_t _x_x3273;
  kk_string_t _x_x3274;
  kk_define_string_literal(static, _s_x3275, 2, ", ", _ctx)
  _x_x3274 = kk_string_dup(_s_x3275, _ctx); /*string*/
  kk_string_t _x_x3276;
  kk_std_core_types__list _b_x49_60;
  {
    struct kk_hml_Cliresult* _con_x3277 = kk_hml__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3277->cli__options;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x49_60 = _x_0; /*list<(string, string)>*/
  }
  kk_function_t _b_x50_61 = kk_hml_cliresult_fs_new_show_fun3278(_ctx); /*((string, string)) -> div string*/;
  kk_string_t _x_x3283;
  kk_define_string_literal(static, _s_x3284, 13, "cli_options: ", _ctx)
  _x_x3283 = kk_string_dup(_s_x3284, _ctx); /*string*/
  kk_string_t _x_x3285;
  kk_string_t _x_x3286 = kk_std_core_list_show(_b_x49_60, kk_hml_cliresult_fs_new_show_fun3287(_b_x50_61, _ctx), _ctx); /*string*/
  kk_string_t _x_x3289;
  kk_string_t _x_x3290;
  kk_define_string_literal(static, _s_x3291, 2, ", ", _ctx)
  _x_x3290 = kk_string_dup(_s_x3291, _ctx); /*string*/
  kk_string_t _x_x3292;
  kk_std_core_types__list _b_x52_65;
  {
    struct kk_hml_Cliresult* _con_x3293 = kk_hml__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3293->cli__positionals;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x52_65 = _x_1; /*list<string>*/
  }
  kk_function_t _b_x53_66 = kk_hml_cliresult_fs_new_show_fun3295(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3296;
  kk_define_string_literal(static, _s_x3297, 17, "cli_positionals: ", _ctx)
  _x_x3296 = kk_string_dup(_s_x3297, _ctx); /*string*/
  kk_string_t _x_x3298;
  kk_string_t _x_x3299 = kk_std_core_list_show(_b_x52_65, kk_hml_cliresult_fs_new_show_fun3300(_b_x53_66, _ctx), _ctx); /*string*/
  kk_string_t _x_x3302;
  kk_string_t _x_x3303;
  kk_define_string_literal(static, _s_x3304, 2, ", ", _ctx)
  _x_x3303 = kk_string_dup(_s_x3304, _ctx); /*string*/
  kk_string_t _x_x3305;
  kk_string_t _x_x3306;
  kk_define_string_literal(static, _s_x3307, 13, "cli_command: ", _ctx)
  _x_x3306 = kk_string_dup(_s_x3307, _ctx); /*string*/
  kk_string_t _x_x3308;
  kk_string_t _x_x3309;
  {
    struct kk_hml_Cliresult* _con_x3310 = kk_hml__as_Cliresult(p, _ctx);
    kk_string_t _x_2 = _con_x3310->cli__command;
    kk_string_dup(_x_2, _ctx);
    _x_x3309 = _x_2; /*string*/
  }
  kk_string_t _x_x3311;
  kk_string_t _x_x3312;
  kk_define_string_literal(static, _s_x3313, 2, ", ", _ctx)
  _x_x3312 = kk_string_dup(_s_x3313, _ctx); /*string*/
  kk_string_t _x_x3314;
  kk_std_core_types__maybe _b_x55_67;
  {
    struct kk_hml_Cliresult* _con_x3315 = kk_hml__as_Cliresult(p, _ctx);
    kk_std_core_types__list _pat_0_3 = _con_x3315->cli__flags;
    kk_std_core_types__list _pat_1_3 = _con_x3315->cli__options;
    kk_std_core_types__list _pat_2_3 = _con_x3315->cli__positionals;
    kk_string_t _pat_3_3 = _con_x3315->cli__command;
    kk_std_core_types__maybe _x_3 = _con_x3315->cli__sub;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_3_3, _ctx);
      kk_std_core_types__list_drop(_pat_2_3, _ctx);
      kk_std_core_types__list_drop(_pat_1_3, _ctx);
      kk_std_core_types__list_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_std_core_types__maybe_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _b_x55_67 = _x_3; /*maybe<hml/cliresult>*/
  }
  kk_function_t _b_x56_68 = kk_hml_cliresult_fs_new_show_fun3317(_ctx); /*(p : hml/cliresult) -> div string*/;
  kk_string_t _x_x3318;
  kk_define_string_literal(static, _s_x3319, 9, "cli_sub: ", _ctx)
  _x_x3318 = kk_string_dup(_s_x3319, _ctx); /*string*/
  kk_string_t _x_x3320;
  kk_string_t _x_x3321 = kk_std_core_maybe_show(_b_x55_67, kk_hml_cliresult_fs_new_show_fun3322(_b_x56_68, _ctx), _ctx); /*string*/
  kk_string_t _x_x3324;
  kk_define_string_literal(static, _s_x3325, 1, ")", _ctx)
  _x_x3324 = kk_string_dup(_s_x3325, _ctx); /*string*/
  _x_x3320 = kk_std_core_types__lp__plus__plus__rp_(_x_x3321, _x_x3324, _ctx); /*string*/
  _x_x3314 = kk_std_core_types__lp__plus__plus__rp_(_x_x3318, _x_x3320, _ctx); /*string*/
  _x_x3311 = kk_std_core_types__lp__plus__plus__rp_(_x_x3312, _x_x3314, _ctx); /*string*/
  _x_x3308 = kk_std_core_types__lp__plus__plus__rp_(_x_x3309, _x_x3311, _ctx); /*string*/
  _x_x3305 = kk_std_core_types__lp__plus__plus__rp_(_x_x3306, _x_x3308, _ctx); /*string*/
  _x_x3302 = kk_std_core_types__lp__plus__plus__rp_(_x_x3303, _x_x3305, _ctx); /*string*/
  _x_x3298 = kk_std_core_types__lp__plus__plus__rp_(_x_x3299, _x_x3302, _ctx); /*string*/
  _x_x3292 = kk_std_core_types__lp__plus__plus__rp_(_x_x3296, _x_x3298, _ctx); /*string*/
  _x_x3289 = kk_std_core_types__lp__plus__plus__rp_(_x_x3290, _x_x3292, _ctx); /*string*/
  _x_x3285 = kk_std_core_types__lp__plus__plus__rp_(_x_x3286, _x_x3289, _ctx); /*string*/
  _x_x3276 = kk_std_core_types__lp__plus__plus__rp_(_x_x3283, _x_x3285, _ctx); /*string*/
  _x_x3273 = kk_std_core_types__lp__plus__plus__rp_(_x_x3274, _x_x3276, _ctx); /*string*/
  _x_x3269 = kk_std_core_types__lp__plus__plus__rp_(_x_x3270, _x_x3273, _ctx); /*string*/
  _x_x3263 = kk_std_core_types__lp__plus__plus__rp_(_x_x3267, _x_x3269, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3261, _x_x3263, _ctx);
}

kk_string_t kk_hml_clioutcome_fs_show(kk_hml__clioutcome v, kk_context_t* _ctx) { /* (v : clioutcome) -> div string */ 
  if (kk_hml__is_Help(v, _ctx)) {
    kk_define_string_literal(static, _s_x3326, 4, "Help", _ctx)
    return kk_string_dup(_s_x3326, _ctx);
  }
  if (kk_hml__is_Version(v, _ctx)) {
    kk_define_string_literal(static, _s_x3327, 7, "Version", _ctx)
    return kk_string_dup(_s_x3327, _ctx);
  }
  if (kk_hml__is_CliError(v, _ctx)) {
    struct kk_hml_CliError* _con_x3328 = kk_hml__as_CliError(v, _ctx);
    kk_string_t cli__error__msg = _con_x3328->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(cli__error__msg, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3329;
    kk_define_string_literal(static, _s_x3330, 9, "CliError(", _ctx)
    _x_x3329 = kk_string_dup(_s_x3330, _ctx); /*string*/
    kk_string_t _x_x3331;
    kk_string_t _x_x3332;
    kk_define_string_literal(static, _s_x3333, 1, ")", _ctx)
    _x_x3332 = kk_string_dup(_s_x3333, _ctx); /*string*/
    _x_x3331 = kk_std_core_types__lp__plus__plus__rp_(cli__error__msg, _x_x3332, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3329, _x_x3331, _ctx);
  }
  {
    struct kk_hml_Parsed* _con_x3334 = kk_hml__as_Parsed(v, _ctx);
    kk_hml__cliresult cli__result = _con_x3334->cli__result;
    struct kk_hml_Cliresult* _con_x3335 = kk_hml__as_Cliresult(cli__result, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_hml__cliresult_dup(cli__result, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3336;
    kk_define_string_literal(static, _s_x3337, 7, "Parsed(", _ctx)
    _x_x3336 = kk_string_dup(_s_x3337, _ctx); /*string*/
    kk_string_t _x_x3338;
    kk_string_t _x_x3339 = kk_hml_cliresult_fs_show(cli__result, _ctx); /*string*/
    kk_string_t _x_x3340;
    kk_define_string_literal(static, _s_x3341, 1, ")", _ctx)
    _x_x3340 = kk_string_dup(_s_x3341, _ctx); /*string*/
    _x_x3338 = kk_std_core_types__lp__plus__plus__rp_(_x_x3339, _x_x3340, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3336, _x_x3338, _ctx);
  }
}


// lift anonymous function
struct kk_hml_clispec_fs_show_fun3374__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_clispec_fs_show_fun3374(kk_function_t _fself, kk_hml__cliflag _x1_x3373, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3374(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_clispec_fs_show_fun3374, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_clispec_fs_show_fun3374(kk_function_t _fself, kk_hml__cliflag _x1_x3373, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml_cliflag_fs_show(_x1_x3373, _ctx);
}


// lift anonymous function
struct kk_hml_clispec_fs_show_fun3379__t {
  struct kk_function_s _base;
  kk_function_t _b_x70_87;
};
static kk_string_t kk_hml_clispec_fs_show_fun3379(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3379(kk_function_t _b_x70_87, kk_context_t* _ctx) {
  struct kk_hml_clispec_fs_show_fun3379__t* _self = kk_function_alloc_as(struct kk_hml_clispec_fs_show_fun3379__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_clispec_fs_show_fun3379, kk_context());
  _self->_b_x70_87 = _b_x70_87;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_clispec_fs_show_fun3379(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx) {
  struct kk_hml_clispec_fs_show_fun3379__t* _self = kk_function_as(struct kk_hml_clispec_fs_show_fun3379__t*, _fself, _ctx);
  kk_function_t _b_x70_87 = _self->_b_x70_87; /* (p : hml/cliflag) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x70_87, _ctx);}, {}, _ctx)
  kk_hml__cliflag _x_x3380 = kk_hml__cliflag_unbox(_b_x71, KK_OWNED, _ctx); /*hml/cliflag*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__cliflag, kk_context_t*), _b_x70_87, (_b_x70_87, _x_x3380, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_clispec_fs_show_fun3387__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_clispec_fs_show_fun3387(kk_function_t _fself, kk_hml__clioption _x1_x3386, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3387(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_clispec_fs_show_fun3387, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_clispec_fs_show_fun3387(kk_function_t _fself, kk_hml__clioption _x1_x3386, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml_clioption_fs_show(_x1_x3386, _ctx);
}


// lift anonymous function
struct kk_hml_clispec_fs_show_fun3392__t {
  struct kk_function_s _base;
  kk_function_t _b_x73_89;
};
static kk_string_t kk_hml_clispec_fs_show_fun3392(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3392(kk_function_t _b_x73_89, kk_context_t* _ctx) {
  struct kk_hml_clispec_fs_show_fun3392__t* _self = kk_function_alloc_as(struct kk_hml_clispec_fs_show_fun3392__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_clispec_fs_show_fun3392, kk_context());
  _self->_b_x73_89 = _b_x73_89;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_clispec_fs_show_fun3392(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx) {
  struct kk_hml_clispec_fs_show_fun3392__t* _self = kk_function_as(struct kk_hml_clispec_fs_show_fun3392__t*, _fself, _ctx);
  kk_function_t _b_x73_89 = _self->_b_x73_89; /* (p : hml/clioption) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x73_89, _ctx);}, {}, _ctx)
  kk_hml__clioption _x_x3393 = kk_hml__clioption_unbox(_b_x74, KK_OWNED, _ctx); /*hml/clioption*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__clioption, kk_context_t*), _b_x73_89, (_b_x73_89, _x_x3393, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_clispec_fs_show_fun3400__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_clispec_fs_show_fun3400(kk_function_t _fself, kk_hml__cliarg _x1_x3399, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3400(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_clispec_fs_show_fun3400, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_clispec_fs_show_fun3400(kk_function_t _fself, kk_hml__cliarg _x1_x3399, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml_cliarg_fs_show(_x1_x3399, _ctx);
}


// lift anonymous function
struct kk_hml_clispec_fs_show_fun3405__t {
  struct kk_function_s _base;
  kk_function_t _b_x76_91;
};
static kk_string_t kk_hml_clispec_fs_show_fun3405(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3405(kk_function_t _b_x76_91, kk_context_t* _ctx) {
  struct kk_hml_clispec_fs_show_fun3405__t* _self = kk_function_alloc_as(struct kk_hml_clispec_fs_show_fun3405__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_clispec_fs_show_fun3405, kk_context());
  _self->_b_x76_91 = _b_x76_91;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_clispec_fs_show_fun3405(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx) {
  struct kk_hml_clispec_fs_show_fun3405__t* _self = kk_function_as(struct kk_hml_clispec_fs_show_fun3405__t*, _fself, _ctx);
  kk_function_t _b_x76_91 = _self->_b_x76_91; /* (p : hml/cliarg) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x76_91, _ctx);}, {}, _ctx)
  kk_hml__cliarg _x_x3406 = kk_hml__cliarg_unbox(_b_x77, KK_OWNED, _ctx); /*hml/cliarg*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__cliarg, kk_context_t*), _b_x76_91, (_b_x76_91, _x_x3406, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_clispec_fs_show_fun3412__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_clispec_fs_show_fun3412(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3412(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_clispec_fs_show_fun3412, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_clispec_fs_show_fun3413__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_clispec_fs_show_fun3413(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3413(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_clispec_fs_show_fun3413, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_clispec_fs_show_fun3413(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3414 = kk_string_unbox(_b_x81); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3414, _ctx);
}


// lift anonymous function
struct kk_hml_clispec_fs_show_fun3415__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_clispec_fs_show_fun3415(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3415(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_clispec_fs_show_fun3415, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_clispec_fs_show_fun3415(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_hml__clispec _x_x3416 = kk_hml__clispec_unbox(_b_x82, KK_OWNED, _ctx); /*hml/clispec*/
  return kk_hml_clispec_fs_show(_x_x3416, _ctx);
}
static kk_string_t kk_hml_clispec_fs_show_fun3412(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_hml_clispec_fs_new_show_fun3413(_ctx), kk_hml_clispec_fs_new_show_fun3415(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml_clispec_fs_show_fun3421__t {
  struct kk_function_s _base;
  kk_function_t _b_x84_93;
};
static kk_string_t kk_hml_clispec_fs_show_fun3421(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx);
static kk_function_t kk_hml_clispec_fs_new_show_fun3421(kk_function_t _b_x84_93, kk_context_t* _ctx) {
  struct kk_hml_clispec_fs_show_fun3421__t* _self = kk_function_alloc_as(struct kk_hml_clispec_fs_show_fun3421__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_clispec_fs_show_fun3421, kk_context());
  _self->_b_x84_93 = _b_x84_93;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_clispec_fs_show_fun3421(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx) {
  struct kk_hml_clispec_fs_show_fun3421__t* _self = kk_function_as(struct kk_hml_clispec_fs_show_fun3421__t*, _fself, _ctx);
  kk_function_t _b_x84_93 = _self->_b_x84_93; /* ((string, hml/clispec)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x84_93, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3422 = kk_std_core_types__tuple2_unbox(_b_x85, KK_OWNED, _ctx); /*(string, hml/clispec)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x84_93, (_b_x84_93, _x_x3422, _ctx), _ctx);
}

kk_string_t kk_hml_clispec_fs_show(kk_hml__clispec p, kk_context_t* _ctx) { /* (p : clispec) -> div string */ 
  kk_string_t _x_x3342;
  kk_define_string_literal(static, _s_x3343, 8, "CliSpec(", _ctx)
  _x_x3342 = kk_string_dup(_s_x3343, _ctx); /*string*/
  kk_string_t _x_x3344;
  kk_string_t _x_x3345;
  kk_define_string_literal(static, _s_x3346, 10, "app_name: ", _ctx)
  _x_x3345 = kk_string_dup(_s_x3346, _ctx); /*string*/
  kk_string_t _x_x3347;
  kk_string_t _x_x3348;
  {
    struct kk_hml_Clispec* _con_x3349 = kk_hml__as_Clispec(p, _ctx);
    kk_string_t _x = _con_x3349->app__name;
    kk_string_dup(_x, _ctx);
    _x_x3348 = _x; /*string*/
  }
  kk_string_t _x_x3350;
  kk_string_t _x_x3351;
  kk_define_string_literal(static, _s_x3352, 2, ", ", _ctx)
  _x_x3351 = kk_string_dup(_s_x3352, _ctx); /*string*/
  kk_string_t _x_x3353;
  kk_string_t _x_x3354;
  kk_define_string_literal(static, _s_x3355, 13, "app_version: ", _ctx)
  _x_x3354 = kk_string_dup(_s_x3355, _ctx); /*string*/
  kk_string_t _x_x3356;
  kk_string_t _x_x3357;
  {
    struct kk_hml_Clispec* _con_x3358 = kk_hml__as_Clispec(p, _ctx);
    kk_string_t _x_0 = _con_x3358->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x3357 = _x_0; /*string*/
  }
  kk_string_t _x_x3359;
  kk_string_t _x_x3360;
  kk_define_string_literal(static, _s_x3361, 2, ", ", _ctx)
  _x_x3360 = kk_string_dup(_s_x3361, _ctx); /*string*/
  kk_string_t _x_x3362;
  kk_string_t _x_x3363;
  kk_define_string_literal(static, _s_x3364, 11, "app_about: ", _ctx)
  _x_x3363 = kk_string_dup(_s_x3364, _ctx); /*string*/
  kk_string_t _x_x3365;
  kk_string_t _x_x3366;
  {
    struct kk_hml_Clispec* _con_x3367 = kk_hml__as_Clispec(p, _ctx);
    kk_string_t _x_1 = _con_x3367->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x3366 = _x_1; /*string*/
  }
  kk_string_t _x_x3368;
  kk_string_t _x_x3369;
  kk_define_string_literal(static, _s_x3370, 2, ", ", _ctx)
  _x_x3369 = kk_string_dup(_s_x3370, _ctx); /*string*/
  kk_string_t _x_x3371;
  kk_std_core_types__list _b_x69_86;
  {
    struct kk_hml_Clispec* _con_x3372 = kk_hml__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3372->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x69_86 = _x_2; /*list<hml/cliflag>*/
  }
  kk_function_t _b_x70_87 = kk_hml_clispec_fs_new_show_fun3374(_ctx); /*(p : hml/cliflag) -> string*/;
  kk_string_t _x_x3375;
  kk_define_string_literal(static, _s_x3376, 11, "app_flags: ", _ctx)
  _x_x3375 = kk_string_dup(_s_x3376, _ctx); /*string*/
  kk_string_t _x_x3377;
  kk_string_t _x_x3378 = kk_std_core_list_show(_b_x69_86, kk_hml_clispec_fs_new_show_fun3379(_b_x70_87, _ctx), _ctx); /*string*/
  kk_string_t _x_x3381;
  kk_string_t _x_x3382;
  kk_define_string_literal(static, _s_x3383, 2, ", ", _ctx)
  _x_x3382 = kk_string_dup(_s_x3383, _ctx); /*string*/
  kk_string_t _x_x3384;
  kk_std_core_types__list _b_x72_88;
  {
    struct kk_hml_Clispec* _con_x3385 = kk_hml__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_3 = _con_x3385->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _b_x72_88 = _x_3; /*list<hml/clioption>*/
  }
  kk_function_t _b_x73_89 = kk_hml_clispec_fs_new_show_fun3387(_ctx); /*(p : hml/clioption) -> string*/;
  kk_string_t _x_x3388;
  kk_define_string_literal(static, _s_x3389, 13, "app_options: ", _ctx)
  _x_x3388 = kk_string_dup(_s_x3389, _ctx); /*string*/
  kk_string_t _x_x3390;
  kk_string_t _x_x3391 = kk_std_core_list_show(_b_x72_88, kk_hml_clispec_fs_new_show_fun3392(_b_x73_89, _ctx), _ctx); /*string*/
  kk_string_t _x_x3394;
  kk_string_t _x_x3395;
  kk_define_string_literal(static, _s_x3396, 2, ", ", _ctx)
  _x_x3395 = kk_string_dup(_s_x3396, _ctx); /*string*/
  kk_string_t _x_x3397;
  kk_std_core_types__list _b_x75_90;
  {
    struct kk_hml_Clispec* _con_x3398 = kk_hml__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_4 = _con_x3398->app__args;
    kk_std_core_types__list_dup(_x_4, _ctx);
    _b_x75_90 = _x_4; /*list<hml/cliarg>*/
  }
  kk_function_t _b_x76_91 = kk_hml_clispec_fs_new_show_fun3400(_ctx); /*(p : hml/cliarg) -> string*/;
  kk_string_t _x_x3401;
  kk_define_string_literal(static, _s_x3402, 10, "app_args: ", _ctx)
  _x_x3401 = kk_string_dup(_s_x3402, _ctx); /*string*/
  kk_string_t _x_x3403;
  kk_string_t _x_x3404 = kk_std_core_list_show(_b_x75_90, kk_hml_clispec_fs_new_show_fun3405(_b_x76_91, _ctx), _ctx); /*string*/
  kk_string_t _x_x3407;
  kk_string_t _x_x3408;
  kk_define_string_literal(static, _s_x3409, 2, ", ", _ctx)
  _x_x3408 = kk_string_dup(_s_x3409, _ctx); /*string*/
  kk_string_t _x_x3410;
  kk_std_core_types__list _b_x83_92;
  {
    struct kk_hml_Clispec* _con_x3411 = kk_hml__as_Clispec(p, _ctx);
    kk_string_t _pat_0_5 = _con_x3411->app__name;
    kk_string_t _pat_1_5 = _con_x3411->app__version;
    kk_string_t _pat_2_5 = _con_x3411->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x3411->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x3411->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x3411->app__args;
    kk_std_core_types__list _x_5 = _con_x3411->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_5, _ctx);
      kk_std_core_types__list_drop(_pat_4_5, _ctx);
      kk_std_core_types__list_drop(_pat_3_5, _ctx);
      kk_string_drop(_pat_2_5, _ctx);
      kk_string_drop(_pat_1_5, _ctx);
      kk_string_drop(_pat_0_5, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _b_x83_92 = _x_5; /*list<(string, hml/clispec)>*/
  }
  kk_function_t _b_x84_93 = kk_hml_clispec_fs_new_show_fun3412(_ctx); /*((string, hml/clispec)) -> div string*/;
  kk_string_t _x_x3417;
  kk_define_string_literal(static, _s_x3418, 14, "app_commands: ", _ctx)
  _x_x3417 = kk_string_dup(_s_x3418, _ctx); /*string*/
  kk_string_t _x_x3419;
  kk_string_t _x_x3420 = kk_std_core_list_show(_b_x83_92, kk_hml_clispec_fs_new_show_fun3421(_b_x84_93, _ctx), _ctx); /*string*/
  kk_string_t _x_x3423;
  kk_define_string_literal(static, _s_x3424, 1, ")", _ctx)
  _x_x3423 = kk_string_dup(_s_x3424, _ctx); /*string*/
  _x_x3419 = kk_std_core_types__lp__plus__plus__rp_(_x_x3420, _x_x3423, _ctx); /*string*/
  _x_x3410 = kk_std_core_types__lp__plus__plus__rp_(_x_x3417, _x_x3419, _ctx); /*string*/
  _x_x3407 = kk_std_core_types__lp__plus__plus__rp_(_x_x3408, _x_x3410, _ctx); /*string*/
  _x_x3403 = kk_std_core_types__lp__plus__plus__rp_(_x_x3404, _x_x3407, _ctx); /*string*/
  _x_x3397 = kk_std_core_types__lp__plus__plus__rp_(_x_x3401, _x_x3403, _ctx); /*string*/
  _x_x3394 = kk_std_core_types__lp__plus__plus__rp_(_x_x3395, _x_x3397, _ctx); /*string*/
  _x_x3390 = kk_std_core_types__lp__plus__plus__rp_(_x_x3391, _x_x3394, _ctx); /*string*/
  _x_x3384 = kk_std_core_types__lp__plus__plus__rp_(_x_x3388, _x_x3390, _ctx); /*string*/
  _x_x3381 = kk_std_core_types__lp__plus__plus__rp_(_x_x3382, _x_x3384, _ctx); /*string*/
  _x_x3377 = kk_std_core_types__lp__plus__plus__rp_(_x_x3378, _x_x3381, _ctx); /*string*/
  _x_x3371 = kk_std_core_types__lp__plus__plus__rp_(_x_x3375, _x_x3377, _ctx); /*string*/
  _x_x3368 = kk_std_core_types__lp__plus__plus__rp_(_x_x3369, _x_x3371, _ctx); /*string*/
  _x_x3365 = kk_std_core_types__lp__plus__plus__rp_(_x_x3366, _x_x3368, _ctx); /*string*/
  _x_x3362 = kk_std_core_types__lp__plus__plus__rp_(_x_x3363, _x_x3365, _ctx); /*string*/
  _x_x3359 = kk_std_core_types__lp__plus__plus__rp_(_x_x3360, _x_x3362, _ctx); /*string*/
  _x_x3356 = kk_std_core_types__lp__plus__plus__rp_(_x_x3357, _x_x3359, _ctx); /*string*/
  _x_x3353 = kk_std_core_types__lp__plus__plus__rp_(_x_x3354, _x_x3356, _ctx); /*string*/
  _x_x3350 = kk_std_core_types__lp__plus__plus__rp_(_x_x3351, _x_x3353, _ctx); /*string*/
  _x_x3347 = kk_std_core_types__lp__plus__plus__rp_(_x_x3348, _x_x3350, _ctx); /*string*/
  _x_x3344 = kk_std_core_types__lp__plus__plus__rp_(_x_x3345, _x_x3347, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3342, _x_x3344, _ctx);
}


// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3439__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3439(kk_function_t _fself, kk_string_t _x1_x3438, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3439(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_parseraw_fs_show_fun3439, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_parseraw_fs_show_fun3439(kk_function_t _fself, kk_string_t _x1_x3438, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3438, _ctx);
}


// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3444__t {
  struct kk_function_s _base;
  kk_function_t _b_x98_115;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3444(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3444(kk_function_t _b_x98_115, kk_context_t* _ctx) {
  struct kk_hml_parseraw_fs_show_fun3444__t* _self = kk_function_alloc_as(struct kk_hml_parseraw_fs_show_fun3444__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_parseraw_fs_show_fun3444, kk_context());
  _self->_b_x98_115 = _b_x98_115;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_parseraw_fs_show_fun3444(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_hml_parseraw_fs_show_fun3444__t* _self = kk_function_as(struct kk_hml_parseraw_fs_show_fun3444__t*, _fself, _ctx);
  kk_function_t _b_x98_115 = _self->_b_x98_115; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x98_115, _ctx);}, {}, _ctx)
  kk_string_t _x_x3445 = kk_string_unbox(_b_x99); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x98_115, (_b_x98_115, _x_x3445, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3451__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3451(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3451(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_parseraw_fs_show_fun3451, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3452__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3452(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3452(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_parseraw_fs_show_fun3452, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_parseraw_fs_show_fun3452(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3453 = kk_string_unbox(_b_x103); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3453, _ctx);
}


// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3454__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3454(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3454(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_parseraw_fs_show_fun3454, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_parseraw_fs_show_fun3454(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3455 = kk_string_unbox(_b_x104); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3455, _ctx);
}
static kk_string_t kk_hml_parseraw_fs_show_fun3451(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_hml_parseraw_fs_new_show_fun3452(_ctx), kk_hml_parseraw_fs_new_show_fun3454(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3460__t {
  struct kk_function_s _base;
  kk_function_t _b_x106_117;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3460(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3460(kk_function_t _b_x106_117, kk_context_t* _ctx) {
  struct kk_hml_parseraw_fs_show_fun3460__t* _self = kk_function_alloc_as(struct kk_hml_parseraw_fs_show_fun3460__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_parseraw_fs_show_fun3460, kk_context());
  _self->_b_x106_117 = _b_x106_117;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_parseraw_fs_show_fun3460(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx) {
  struct kk_hml_parseraw_fs_show_fun3460__t* _self = kk_function_as(struct kk_hml_parseraw_fs_show_fun3460__t*, _fself, _ctx);
  kk_function_t _b_x106_117 = _self->_b_x106_117; /* ((string, string)) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x106_117, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3461 = kk_std_core_types__tuple2_unbox(_b_x107, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x106_117, (_b_x106_117, _x_x3461, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3468__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3468(kk_function_t _fself, kk_string_t _x1_x3467, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3468(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_parseraw_fs_show_fun3468, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_parseraw_fs_show_fun3468(kk_function_t _fself, kk_string_t _x1_x3467, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3467, _ctx);
}


// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3473__t {
  struct kk_function_s _base;
  kk_function_t _b_x109_122;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3473(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3473(kk_function_t _b_x109_122, kk_context_t* _ctx) {
  struct kk_hml_parseraw_fs_show_fun3473__t* _self = kk_function_alloc_as(struct kk_hml_parseraw_fs_show_fun3473__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_parseraw_fs_show_fun3473, kk_context());
  _self->_b_x109_122 = _b_x109_122;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_parseraw_fs_show_fun3473(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_hml_parseraw_fs_show_fun3473__t* _self = kk_function_as(struct kk_hml_parseraw_fs_show_fun3473__t*, _fself, _ctx);
  kk_function_t _b_x109_122 = _self->_b_x109_122; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x109_122, _ctx);}, {}, _ctx)
  kk_string_t _x_x3474 = kk_string_unbox(_b_x110); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x109_122, (_b_x109_122, _x_x3474, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3490__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3490(kk_function_t _fself, kk_string_t _x1_x3489, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3490(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_parseraw_fs_show_fun3490, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml_parseraw_fs_show_fun3490(kk_function_t _fself, kk_string_t _x1_x3489, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3489, _ctx);
}


// lift anonymous function
struct kk_hml_parseraw_fs_show_fun3495__t {
  struct kk_function_s _base;
  kk_function_t _b_x112_124;
};
static kk_string_t kk_hml_parseraw_fs_show_fun3495(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx);
static kk_function_t kk_hml_parseraw_fs_new_show_fun3495(kk_function_t _b_x112_124, kk_context_t* _ctx) {
  struct kk_hml_parseraw_fs_show_fun3495__t* _self = kk_function_alloc_as(struct kk_hml_parseraw_fs_show_fun3495__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_parseraw_fs_show_fun3495, kk_context());
  _self->_b_x112_124 = _b_x112_124;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml_parseraw_fs_show_fun3495(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx) {
  struct kk_hml_parseraw_fs_show_fun3495__t* _self = kk_function_as(struct kk_hml_parseraw_fs_show_fun3495__t*, _fself, _ctx);
  kk_function_t _b_x112_124 = _self->_b_x112_124; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x112_124, _ctx);}, {}, _ctx)
  kk_string_t _x_x3496 = kk_string_unbox(_b_x113); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x112_124, (_b_x112_124, _x_x3496, _ctx), _ctx);
}

kk_string_t kk_hml_parseraw_fs_show(kk_hml__parseraw p, kk_context_t* _ctx) { /* (p : parseraw) -> string */ 
  kk_string_t _x_x3425;
  kk_define_string_literal(static, _s_x3426, 9, "ParseRaw(", _ctx)
  _x_x3425 = kk_string_dup(_s_x3426, _ctx); /*string*/
  kk_string_t _x_x3427;
  kk_string_t _x_x3428;
  kk_define_string_literal(static, _s_x3429, 11, "raw_error: ", _ctx)
  _x_x3428 = kk_string_dup(_s_x3429, _ctx); /*string*/
  kk_string_t _x_x3430;
  kk_string_t _x_x3431;
  {
    struct kk_hml_Parseraw* _con_x3432 = kk_hml__as_Parseraw(p, _ctx);
    kk_string_t _x = _con_x3432->raw__error;
    kk_string_dup(_x, _ctx);
    _x_x3431 = _x; /*string*/
  }
  kk_string_t _x_x3433;
  kk_string_t _x_x3434;
  kk_define_string_literal(static, _s_x3435, 2, ", ", _ctx)
  _x_x3434 = kk_string_dup(_s_x3435, _ctx); /*string*/
  kk_string_t _x_x3436;
  kk_std_core_types__list _b_x97_114;
  {
    struct kk_hml_Parseraw* _con_x3437 = kk_hml__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3437->raw__flags;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x97_114 = _x_0; /*list<string>*/
  }
  kk_function_t _b_x98_115 = kk_hml_parseraw_fs_new_show_fun3439(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3440;
  kk_define_string_literal(static, _s_x3441, 11, "raw_flags: ", _ctx)
  _x_x3440 = kk_string_dup(_s_x3441, _ctx); /*string*/
  kk_string_t _x_x3442;
  kk_string_t _x_x3443 = kk_std_core_list_show(_b_x97_114, kk_hml_parseraw_fs_new_show_fun3444(_b_x98_115, _ctx), _ctx); /*string*/
  kk_string_t _x_x3446;
  kk_string_t _x_x3447;
  kk_define_string_literal(static, _s_x3448, 2, ", ", _ctx)
  _x_x3447 = kk_string_dup(_s_x3448, _ctx); /*string*/
  kk_string_t _x_x3449;
  kk_std_core_types__list _b_x105_116;
  {
    struct kk_hml_Parseraw* _con_x3450 = kk_hml__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3450->raw__options;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x105_116 = _x_1; /*list<(string, string)>*/
  }
  kk_function_t _b_x106_117 = kk_hml_parseraw_fs_new_show_fun3451(_ctx); /*((string, string)) -> string*/;
  kk_string_t _x_x3456;
  kk_define_string_literal(static, _s_x3457, 13, "raw_options: ", _ctx)
  _x_x3456 = kk_string_dup(_s_x3457, _ctx); /*string*/
  kk_string_t _x_x3458;
  kk_string_t _x_x3459 = kk_std_core_list_show(_b_x105_116, kk_hml_parseraw_fs_new_show_fun3460(_b_x106_117, _ctx), _ctx); /*string*/
  kk_string_t _x_x3462;
  kk_string_t _x_x3463;
  kk_define_string_literal(static, _s_x3464, 2, ", ", _ctx)
  _x_x3463 = kk_string_dup(_s_x3464, _ctx); /*string*/
  kk_string_t _x_x3465;
  kk_std_core_types__list _b_x108_121;
  {
    struct kk_hml_Parseraw* _con_x3466 = kk_hml__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3466->raw__positionals;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x108_121 = _x_2; /*list<string>*/
  }
  kk_function_t _b_x109_122 = kk_hml_parseraw_fs_new_show_fun3468(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3469;
  kk_define_string_literal(static, _s_x3470, 17, "raw_positionals: ", _ctx)
  _x_x3469 = kk_string_dup(_s_x3470, _ctx); /*string*/
  kk_string_t _x_x3471;
  kk_string_t _x_x3472 = kk_std_core_list_show(_b_x108_121, kk_hml_parseraw_fs_new_show_fun3473(_b_x109_122, _ctx), _ctx); /*string*/
  kk_string_t _x_x3475;
  kk_string_t _x_x3476;
  kk_define_string_literal(static, _s_x3477, 2, ", ", _ctx)
  _x_x3476 = kk_string_dup(_s_x3477, _ctx); /*string*/
  kk_string_t _x_x3478;
  kk_string_t _x_x3479;
  kk_define_string_literal(static, _s_x3480, 12, "raw_subcmd: ", _ctx)
  _x_x3479 = kk_string_dup(_s_x3480, _ctx); /*string*/
  kk_string_t _x_x3481;
  kk_string_t _x_x3482;
  {
    struct kk_hml_Parseraw* _con_x3483 = kk_hml__as_Parseraw(p, _ctx);
    kk_string_t _x_3 = _con_x3483->raw__subcmd;
    kk_string_dup(_x_3, _ctx);
    _x_x3482 = _x_3; /*string*/
  }
  kk_string_t _x_x3484;
  kk_string_t _x_x3485;
  kk_define_string_literal(static, _s_x3486, 2, ", ", _ctx)
  _x_x3485 = kk_string_dup(_s_x3486, _ctx); /*string*/
  kk_string_t _x_x3487;
  kk_std_core_types__list _b_x111_123;
  {
    struct kk_hml_Parseraw* _con_x3488 = kk_hml__as_Parseraw(p, _ctx);
    kk_string_t _pat_0_4 = _con_x3488->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x3488->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x3488->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x3488->raw__positionals;
    kk_string_t _pat_4_4 = _con_x3488->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x3488->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_std_core_types__list_drop(_pat_2_4, _ctx);
      kk_std_core_types__list_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _b_x111_123 = _x_4; /*list<string>*/
  }
  kk_function_t _b_x112_124 = kk_hml_parseraw_fs_new_show_fun3490(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3491;
  kk_define_string_literal(static, _s_x3492, 14, "raw_sub_args: ", _ctx)
  _x_x3491 = kk_string_dup(_s_x3492, _ctx); /*string*/
  kk_string_t _x_x3493;
  kk_string_t _x_x3494 = kk_std_core_list_show(_b_x111_123, kk_hml_parseraw_fs_new_show_fun3495(_b_x112_124, _ctx), _ctx); /*string*/
  kk_string_t _x_x3497;
  kk_define_string_literal(static, _s_x3498, 1, ")", _ctx)
  _x_x3497 = kk_string_dup(_s_x3498, _ctx); /*string*/
  _x_x3493 = kk_std_core_types__lp__plus__plus__rp_(_x_x3494, _x_x3497, _ctx); /*string*/
  _x_x3487 = kk_std_core_types__lp__plus__plus__rp_(_x_x3491, _x_x3493, _ctx); /*string*/
  _x_x3484 = kk_std_core_types__lp__plus__plus__rp_(_x_x3485, _x_x3487, _ctx); /*string*/
  _x_x3481 = kk_std_core_types__lp__plus__plus__rp_(_x_x3482, _x_x3484, _ctx); /*string*/
  _x_x3478 = kk_std_core_types__lp__plus__plus__rp_(_x_x3479, _x_x3481, _ctx); /*string*/
  _x_x3475 = kk_std_core_types__lp__plus__plus__rp_(_x_x3476, _x_x3478, _ctx); /*string*/
  _x_x3471 = kk_std_core_types__lp__plus__plus__rp_(_x_x3472, _x_x3475, _ctx); /*string*/
  _x_x3465 = kk_std_core_types__lp__plus__plus__rp_(_x_x3469, _x_x3471, _ctx); /*string*/
  _x_x3462 = kk_std_core_types__lp__plus__plus__rp_(_x_x3463, _x_x3465, _ctx); /*string*/
  _x_x3458 = kk_std_core_types__lp__plus__plus__rp_(_x_x3459, _x_x3462, _ctx); /*string*/
  _x_x3449 = kk_std_core_types__lp__plus__plus__rp_(_x_x3456, _x_x3458, _ctx); /*string*/
  _x_x3446 = kk_std_core_types__lp__plus__plus__rp_(_x_x3447, _x_x3449, _ctx); /*string*/
  _x_x3442 = kk_std_core_types__lp__plus__plus__rp_(_x_x3443, _x_x3446, _ctx); /*string*/
  _x_x3436 = kk_std_core_types__lp__plus__plus__rp_(_x_x3440, _x_x3442, _ctx); /*string*/
  _x_x3433 = kk_std_core_types__lp__plus__plus__rp_(_x_x3434, _x_x3436, _ctx); /*string*/
  _x_x3430 = kk_std_core_types__lp__plus__plus__rp_(_x_x3431, _x_x3433, _ctx); /*string*/
  _x_x3427 = kk_std_core_types__lp__plus__plus__rp_(_x_x3428, _x_x3430, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3425, _x_x3427, _ctx);
}

kk_hml__parseraw kk_hml_parseraw_fs__copy(kk_hml__parseraw _this, kk_std_core_types__optional raw__error, kk_std_core_types__optional raw__flags, kk_std_core_types__optional raw__options, kk_std_core_types__optional raw__positionals, kk_std_core_types__optional raw__subcmd, kk_std_core_types__optional raw__sub__args, kk_context_t* _ctx) { /* (parseraw, raw_error : ? string, raw_flags : ? (list<string>), raw_options : ? (list<(string, string)>), raw_positionals : ? (list<string>), raw_subcmd : ? string, raw_sub_args : ? (list<string>)) -> parseraw */ 
  kk_string_t _x_x3499;
  if (kk_std_core_types__is_Optional(raw__error, _ctx)) {
    kk_box_t _box_x125 = raw__error._cons._Optional.value;
    kk_string_t _uniq_raw__error_3733 = kk_string_unbox(_box_x125);
    kk_string_dup(_uniq_raw__error_3733, _ctx);
    kk_std_core_types__optional_drop(raw__error, _ctx);
    _x_x3499 = _uniq_raw__error_3733; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__error, _ctx);
    {
      struct kk_hml_Parseraw* _con_x3500 = kk_hml__as_Parseraw(_this, _ctx);
      kk_string_t _x = _con_x3500->raw__error;
      kk_string_dup(_x, _ctx);
      _x_x3499 = _x; /*string*/
    }
  }
  kk_std_core_types__list _x_x3501;
  if (kk_std_core_types__is_Optional(raw__flags, _ctx)) {
    kk_box_t _box_x126 = raw__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__flags_3741 = kk_std_core_types__list_unbox(_box_x126, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__flags_3741, _ctx);
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    _x_x3501 = _uniq_raw__flags_3741; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    {
      struct kk_hml_Parseraw* _con_x3502 = kk_hml__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3502->raw__flags;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3501 = _x_0; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3503;
  if (kk_std_core_types__is_Optional(raw__options, _ctx)) {
    kk_box_t _box_x127 = raw__options._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__options_3749 = kk_std_core_types__list_unbox(_box_x127, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__options_3749, _ctx);
    kk_std_core_types__optional_drop(raw__options, _ctx);
    _x_x3503 = _uniq_raw__options_3749; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__options, _ctx);
    {
      struct kk_hml_Parseraw* _con_x3504 = kk_hml__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3504->raw__options;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3503 = _x_1; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3505;
  if (kk_std_core_types__is_Optional(raw__positionals, _ctx)) {
    kk_box_t _box_x128 = raw__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__positionals_3757 = kk_std_core_types__list_unbox(_box_x128, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__positionals_3757, _ctx);
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    _x_x3505 = _uniq_raw__positionals_3757; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    {
      struct kk_hml_Parseraw* _con_x3506 = kk_hml__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3506->raw__positionals;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3505 = _x_2; /*list<string>*/
    }
  }
  kk_string_t _x_x3507;
  if (kk_std_core_types__is_Optional(raw__subcmd, _ctx)) {
    kk_box_t _box_x129 = raw__subcmd._cons._Optional.value;
    kk_string_t _uniq_raw__subcmd_3765 = kk_string_unbox(_box_x129);
    kk_string_dup(_uniq_raw__subcmd_3765, _ctx);
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    _x_x3507 = _uniq_raw__subcmd_3765; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    {
      struct kk_hml_Parseraw* _con_x3508 = kk_hml__as_Parseraw(_this, _ctx);
      kk_string_t _x_3 = _con_x3508->raw__subcmd;
      kk_string_dup(_x_3, _ctx);
      _x_x3507 = _x_3; /*string*/
    }
  }
  kk_std_core_types__list _x_x3509;
  if (kk_std_core_types__is_Optional(raw__sub__args, _ctx)) {
    kk_box_t _box_x130 = raw__sub__args._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__sub__args_3773 = kk_std_core_types__list_unbox(_box_x130, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__sub__args_3773, _ctx);
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3509 = _uniq_raw__sub__args_3773; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    {
      struct kk_hml_Parseraw* _con_x3510 = kk_hml__as_Parseraw(_this, _ctx);
      kk_string_t _pat_0_5 = _con_x3510->raw__error;
      kk_std_core_types__list _pat_1_6 = _con_x3510->raw__flags;
      kk_std_core_types__list _pat_2_5 = _con_x3510->raw__options;
      kk_std_core_types__list _pat_3_5 = _con_x3510->raw__positionals;
      kk_string_t _pat_4_5 = _con_x3510->raw__subcmd;
      kk_std_core_types__list _x_4 = _con_x3510->raw__sub__args;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_4_5, _ctx);
        kk_std_core_types__list_drop(_pat_3_5, _ctx);
        kk_std_core_types__list_drop(_pat_2_5, _ctx);
        kk_std_core_types__list_drop(_pat_1_6, _ctx);
        kk_string_drop(_pat_0_5, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_std_core_types__list_dup(_x_4, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3509 = _x_4; /*list<string>*/
    }
  }
  return kk_hml__new_Parseraw(kk_reuse_null, 0, _x_x3499, _x_x3501, _x_x3503, _x_x3505, _x_x3507, _x_x3509, _ctx);
}

kk_integer_t kk_hml_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10059;
  bool _match_x2924 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x2924) {
    kk_integer_drop(lo, _ctx);
    a_10059 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10059 = lo; /*int*/
  }
  bool _match_x2923 = kk_integer_lt_borrow(a_10059,hi,kk_context()); /*bool*/;
  if (_match_x2923) {
    kk_integer_drop(hi, _ctx);
    return a_10059;
  }
  {
    kk_integer_drop(a_10059, _ctx);
    return hi;
  }
}

kk_integer_t kk_hml_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x2922 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2922) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x3511 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x3512 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x3511;
    b = _x_x3512;
    goto kk__tailcall;
  }
}

kk_integer_t kk_hml_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x2919 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2919) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x2920 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2920) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10063;
      kk_integer_t _x_x3513 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x3514 = kk_integer_dup(b, _ctx); /*int*/
      n_10063 = kk_integer_mul(_x_x3513,_x_x3514,kk_context()); /*int*/
      kk_integer_t _x_x3515;
      bool _match_x2921 = kk_integer_lt_borrow(n_10063,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2921) {
        _x_x3515 = kk_integer_sub((kk_integer_from_small(0)),n_10063,kk_context()); /*int*/
      }
      else {
        _x_x3515 = n_10063; /*int*/
      }
      kk_integer_t _x_x3516 = kk_hml_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x3515,_x_x3516,kk_context());
    }
  }
}

kk_integer_t kk_hml_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x2918 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2918) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x3517 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x3518;
    kk_integer_t _x_x3519 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x3518 = kk_hml_hc__pow(base, _x_x3519, _ctx); /*int*/
    return kk_integer_mul(_x_x3517,_x_x3518,kk_context());
  }
}

kk_integer_t kk_hml_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x2915 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2915) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x2916;
    bool _brw_x2917 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x2916 = _brw_x2917; /*bool*/
    if (_match_x2916) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_hml_hc__intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_box_drop(sep, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3520 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_std_core_types__list _pat_1 = _con_x3520->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_box_t x = _con_x3520->head;
      kk_reuse_t _ru_x2950 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        _ru_x2950 = (kk_datatype_ptr_reuse(xs, _ctx));
      }
      else {
        kk_box_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_box_drop(sep, _ctx);
      return kk_std_core_types__new_Cons(_ru_x2950, 0, x, kk_std_core_types__new_Nil(_ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x3521 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3521->head;
    kk_std_core_types__list rest = _con_x3521->tail;
    kk_reuse_t _ru_x2951 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x2951 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__list ys_10078;
    kk_box_t _x_x3522 = kk_box_dup(sep, _ctx); /*5273*/
    ys_10078 = kk_hml_hc__intersperse(rest, _x_x3522, _ctx); /*list<5273>*/
    kk_std_core_types__list _x_x3523;
    kk_std_core_types__list _x_x3524 = kk_std_core_types__new_Cons(_ru_x2951, 0, sep, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3523 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_0, _x_x3524, _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3523, ys_10078, _ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__sum_fun3526__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__sum_fun3526(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__sum_fun3526(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__sum_fun3526, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__sum_fun3526(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x3527;
  kk_integer_t _x_x3528 = kk_integer_unbox(_b_x134, _ctx); /*int*/
  kk_integer_t _x_x3529 = kk_integer_unbox(_b_x135, _ctx); /*int*/
  _x_x3527 = kk_std_core_int__lp__plus__rp_(_x_x3528, _x_x3529, _ctx); /*int*/
  return kk_integer_box(_x_x3527, _ctx);
}

kk_integer_t kk_hml_hc__sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3525 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(0), _ctx), kk_hml_new_hc__sum_fun3526(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3525, _ctx);
}


// lift anonymous function
struct kk_hml_hc__product_fun3531__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__product_fun3531(kk_function_t _fself, kk_box_t _b_x142, kk_box_t _b_x143, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__product_fun3531(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__product_fun3531, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__product_fun3531(kk_function_t _fself, kk_box_t _b_x142, kk_box_t _b_x143, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t a_147 = kk_integer_unbox(_b_x142, _ctx); /*int*/;
  kk_integer_t b_148 = kk_integer_unbox(_b_x143, _ctx); /*int*/;
  kk_integer_t _x_x3532 = kk_integer_mul(a_147,b_148,kk_context()); /*int*/
  return kk_integer_box(_x_x3532, _ctx);
}

kk_integer_t kk_hml_hc__product(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3530 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(1), _ctx), kk_hml_new_hc__product_fun3531(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3530, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_hml__mlift_hc__scan_11111(kk_box_t init, kk_std_core_types__list _y_x10737, kk_context_t* _ctx) { /* forall<a,e> (init : a, list<a>) -> e list<a> */ 
  kk_std_core_types__list _x_x3533 = kk_std_core_types__new_Cons(kk_reuse_null, 0, init, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  return kk_std_core_list_append(_x_x3533, _y_x10737, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__scan_11112_fun3535__t {
  struct kk_function_s _base;
  kk_box_t init_0;
};
static kk_box_t kk_hml__mlift_hc__scan_11112_fun3535(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__scan_11112_fun3535(kk_box_t init_0, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__scan_11112_fun3535__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__scan_11112_fun3535__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__scan_11112_fun3535, kk_context());
  _self->init_0 = init_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__scan_11112_fun3535(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__scan_11112_fun3535__t* _self = kk_function_as(struct kk_hml__mlift_hc__scan_11112_fun3535__t*, _fself, _ctx);
  kk_box_t init_0 = _self->init_0; /* 5390 */
  kk_drop_match(_self, {kk_box_dup(init_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10737_0_152 = kk_std_core_types__list_unbox(_b_x150, KK_OWNED, _ctx); /*list<5390>*/;
  kk_std_core_types__list _x_x3536 = kk_hml__mlift_hc__scan_11111(init_0, _y_x10737_0_152, _ctx); /*list<5390>*/
  return kk_std_core_types__list_box(_x_x3536, _ctx);
}

kk_std_core_types__list kk_hml__mlift_hc__scan_11112(kk_function_t f, kk_box_t init_0, kk_std_core_types__list rest, kk_box_t _y_x10736, kk_context_t* _ctx) { /* forall<a,b,e> (f : (b, a) -> e b, init : b, rest : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list x_11179 = kk_hml_hc__scan(rest, _y_x10736, f, _ctx); /*list<5390>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11179, _ctx);
    kk_box_t _x_x3534 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__scan_11112_fun3535(init_0, _ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x3534, KK_OWNED, _ctx);
  }
  {
    return kk_hml__mlift_hc__scan_11111(init_0, x_11179, _ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__scan_fun3541__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  kk_box_t init_1;
  kk_std_core_types__list rest_0;
};
static kk_box_t kk_hml_hc__scan_fun3541(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__scan_fun3541(kk_function_t f_0, kk_box_t init_1, kk_std_core_types__list rest_0, kk_context_t* _ctx) {
  struct kk_hml_hc__scan_fun3541__t* _self = kk_function_alloc_as(struct kk_hml_hc__scan_fun3541__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__scan_fun3541, kk_context());
  _self->f_0 = f_0;
  _self->init_1 = init_1;
  _self->rest_0 = rest_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__scan_fun3541(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx) {
  struct kk_hml_hc__scan_fun3541__t* _self = kk_function_as(struct kk_hml_hc__scan_fun3541__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (5390, 5389) -> 5391 5390 */
  kk_box_t init_1 = _self->init_1; /* 5390 */
  kk_std_core_types__list rest_0 = _self->rest_0; /* list<5389> */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_box_dup(init_1, _ctx);kk_std_core_types__list_dup(rest_0, _ctx);}, {}, _ctx)
  kk_box_t _y_x10736_0_159 = _b_x154; /*5390*/;
  kk_std_core_types__list _x_x3542 = kk_hml__mlift_hc__scan_11112(f_0, init_1, rest_0, _y_x10736_0_159, _ctx); /*list<5390>*/
  return kk_std_core_types__list_box(_x_x3542, _ctx);
}


// lift anonymous function
struct kk_hml_hc__scan_fun3544__t {
  struct kk_function_s _base;
  kk_box_t init_1;
};
static kk_box_t kk_hml_hc__scan_fun3544(kk_function_t _fself, kk_box_t _b_x156, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__scan_fun3544(kk_box_t init_1, kk_context_t* _ctx) {
  struct kk_hml_hc__scan_fun3544__t* _self = kk_function_alloc_as(struct kk_hml_hc__scan_fun3544__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__scan_fun3544, kk_context());
  _self->init_1 = init_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__scan_fun3544(kk_function_t _fself, kk_box_t _b_x156, kk_context_t* _ctx) {
  struct kk_hml_hc__scan_fun3544__t* _self = kk_function_as(struct kk_hml_hc__scan_fun3544__t*, _fself, _ctx);
  kk_box_t init_1 = _self->init_1; /* 5390 */
  kk_drop_match(_self, {kk_box_dup(init_1, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10737_1_160 = kk_std_core_types__list_unbox(_b_x156, KK_OWNED, _ctx); /*list<5390>*/;
  kk_std_core_types__list _x_x3545 = kk_hml__mlift_hc__scan_11111(init_1, _y_x10737_1_160, _ctx); /*list<5390>*/
  return kk_std_core_types__list_box(_x_x3545, _ctx);
}

kk_std_core_types__list kk_hml_hc__scan(kk_std_core_types__list xs, kk_box_t init_1, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, init : b, f : (b, a) -> e b) -> e list<b> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(f_0, _ctx);
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3537 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3537->head;
    kk_std_core_types__list rest_0 = _con_x3537->tail;
    kk_reuse_t _ru_x2952 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x2952 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_1_11181;
    kk_function_t _x_x3539 = kk_function_dup(f_0, _ctx); /*(5390, 5389) -> 5391 5390*/
    kk_box_t _x_x3538 = kk_box_dup(init_1, _ctx); /*5390*/
    x_1_11181 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x3539, (_x_x3539, _x_x3538, x_0, _ctx), _ctx); /*5390*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x2952,kk_context());
      kk_box_drop(x_1_11181, _ctx);
      kk_box_t _x_x3540 = kk_std_core_hnd_yield_extend(kk_hml_new_hc__scan_fun3541(f_0, init_1, rest_0, _ctx), _ctx); /*10001*/
      return kk_std_core_types__list_unbox(_x_x3540, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list x_2_11184 = kk_hml_hc__scan(rest_0, x_1_11181, f_0, _ctx); /*list<5390>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x2952,kk_context());
        kk_std_core_types__list_drop(x_2_11184, _ctx);
        kk_box_t _x_x3543 = kk_std_core_hnd_yield_extend(kk_hml_new_hc__scan_fun3544(init_1, _ctx), _ctx); /*10001*/
        return kk_std_core_types__list_unbox(_x_x3543, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list _x_x3546 = kk_std_core_types__new_Cons(_ru_x2952, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        return kk_std_core_list_append(_x_x3546, x_2_11184, _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_hml_hc__zip__with_fun3547__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_hml_hc__zip__with_fun3547(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__zip__with_fun3547(kk_function_t f, kk_context_t* _ctx) {
  struct kk_hml_hc__zip__with_fun3547__t* _self = kk_function_alloc_as(struct kk_hml_hc__zip__with_fun3547__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__zip__with_fun3547, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__zip__with_fun3547(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx) {
  struct kk_hml_hc__zip__with_fun3547__t* _self = kk_function_as(struct kk_hml_hc__zip__with_fun3547__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (5600, 5601) -> 5603 5602 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_box_t _x_x3548;
  kk_std_core_types__tuple2 _match_x2898;
  kk_box_t _x_x3549 = kk_box_dup(_b_x163, _ctx); /*10001*/
  _match_x2898 = kk_std_core_types__tuple2_unbox(_x_x3549, KK_OWNED, _ctx); /*(5600, 5601)*/
  {
    kk_box_t _x = _match_x2898.fst;
    kk_box_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2898, _ctx);
    _x_x3548 = _x; /*5600*/
  }
  kk_box_t _x_x3550;
  kk_std_core_types__tuple2 _match_x2897 = kk_std_core_types__tuple2_unbox(_b_x163, KK_OWNED, _ctx); /*(5600, 5601)*/;
  {
    kk_box_t _x_0 = _match_x2897.snd;
    kk_box_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2897, _ctx);
    _x_x3550 = _x_0; /*5601*/
  }
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, _x_x3548, _x_x3550, _ctx), _ctx);
}

kk_std_core_types__list kk_hml_hc__zip__with(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 
  kk_std_core_types__list _b_x161_164 = kk_std_core_list_zip(xs, ys, _ctx); /*list<(5600, 5601)>*/;
  kk_function_t _brw_x2899 = kk_hml_new_hc__zip__with_fun3547(f, _ctx); /*(10001) -> 10003 5602*/;
  kk_std_core_types__list _brw_x2900 = kk_std_core_list_map(_b_x161_164, _brw_x2899, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2899, _ctx);
  return _brw_x2900;
}


// lift anonymous function
struct kk_hml_hc__unique_fun3552__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__unique_fun3552(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__unique_fun3552(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__unique_fun3552, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_hc__unique_fun3553__t {
  struct kk_function_s _base;
  kk_integer_t x_185;
};
static bool kk_hml_hc__unique_fun3553(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__unique_fun3553(kk_integer_t x_185, kk_context_t* _ctx) {
  struct kk_hml_hc__unique_fun3553__t* _self = kk_function_alloc_as(struct kk_hml_hc__unique_fun3553__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__unique_fun3553, kk_context());
  _self->x_185 = x_185;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__unique_fun3553(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx) {
  struct kk_hml_hc__unique_fun3553__t* _self = kk_function_as(struct kk_hml_hc__unique_fun3553__t*, _fself, _ctx);
  kk_integer_t x_185 = _self->x_185; /* int */
  kk_drop_match(_self, {kk_integer_dup(x_185, _ctx);}, {}, _ctx)
  bool _brw_x2896 = kk_integer_eq_borrow(hc____el,x_185,kk_context()); /*bool*/;
  kk_integer_drop(hc____el, _ctx);
  kk_integer_drop(x_185, _ctx);
  return _brw_x2896;
}


// lift anonymous function
struct kk_hml_hc__unique_fun3555__t {
  struct kk_function_s _base;
  kk_function_t _b_x168_181;
};
static bool kk_hml_hc__unique_fun3555(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__unique_fun3555(kk_function_t _b_x168_181, kk_context_t* _ctx) {
  struct kk_hml_hc__unique_fun3555__t* _self = kk_function_alloc_as(struct kk_hml_hc__unique_fun3555__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__unique_fun3555, kk_context());
  _self->_b_x168_181 = _b_x168_181;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__unique_fun3555(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx) {
  struct kk_hml_hc__unique_fun3555__t* _self = kk_function_as(struct kk_hml_hc__unique_fun3555__t*, _fself, _ctx);
  kk_function_t _b_x168_181 = _self->_b_x168_181; /* (hc__el : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x168_181, _ctx);}, {}, _ctx)
  kk_integer_t _x_x3556 = kk_integer_unbox(_b_x169, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_context_t*), _b_x168_181, (_b_x168_181, _x_x3556, _ctx), _ctx);
}
static kk_box_t kk_hml_hc__unique_fun3552(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list acc_184 = kk_std_core_types__list_unbox(_b_x175, KK_OWNED, _ctx); /*list<int>*/;
  kk_integer_t x_185 = kk_integer_unbox(_b_x176, _ctx); /*int*/;
  kk_std_core_types__list _b_x167_180 = kk_std_core_types__list_dup(acc_184, _ctx); /*list<int>*/;
  kk_function_t _b_x168_181;
  kk_integer_dup(x_185, _ctx);
  _b_x168_181 = kk_hml_new_hc__unique_fun3553(x_185, _ctx); /*(hc__el : int) -> bool*/
  kk_std_core_types__list _x_x3554;
  bool _match_x2895 = kk_std_core_list_any(_b_x167_180, kk_hml_new_hc__unique_fun3555(_b_x168_181, _ctx), _ctx); /*bool*/;
  if (_match_x2895) {
    kk_integer_drop(x_185, _ctx);
    _x_x3554 = acc_184; /*list<int>*/
  }
  else {
    kk_std_core_types__list _x_x3557 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(x_185, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3554 = kk_std_core_list_append(acc_184, _x_x3557, _ctx); /*list<int>*/
  }
  return kk_std_core_types__list_box(_x_x3554, _ctx);
}

kk_std_core_types__list kk_hml_hc__unique(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> list<int> */ 
  kk_box_t _x_x3551 = kk_std_core_list_foldl(xs, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_hml_new_hc__unique_fun3552(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x3551, KK_OWNED, _ctx);
}

kk_std_core_types__list kk_hml_hc__chunks(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> div list<list<a>> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(n, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list _b_x186_188;
    kk_std_core_types__list _x_x3558 = kk_std_core_types__list_dup(xs, _ctx); /*list<5863>*/
    kk_integer_t _x_x3559 = kk_integer_dup(n, _ctx); /*int*/
    _b_x186_188 = kk_std_core_list_take(_x_x3558, _x_x3559, _ctx); /*list<5863>*/
    kk_std_core_types__list ys_10082;
    kk_std_core_types__list _x_x3560;
    kk_integer_t _x_x3561 = kk_integer_dup(n, _ctx); /*int*/
    _x_x3560 = kk_std_core_list_drop(xs, _x_x3561, _ctx); /*list<10001>*/
    ys_10082 = kk_hml_hc__chunks(_x_x3560, n, _ctx); /*list<list<5863>>*/
    kk_std_core_types__list _x_x3562 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__list_box(_b_x186_188, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3562, ys_10082, _ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__words_fun3568__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__words_fun3568(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__words_fun3568(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__words_fun3568, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__words_fun3568(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3569;
  kk_char_t _x_x3570 = kk_char_unbox(_b_x192, KK_OWNED, _ctx); /*char*/
  _x_x3569 = kk_std_core_string_char_fs_string(_x_x3570, _ctx); /*string*/
  return kk_string_box(_x_x3569);
}


// lift anonymous function
struct kk_hml_hc__words_fun3573__t {
  struct kk_function_s _base;
};
static bool kk_hml_hc__words_fun3573(kk_function_t _fself, kk_box_t _b_x195, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__words_fun3573(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__words_fun3573, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_hml_hc__words_fun3573(kk_function_t _fself, kk_box_t _b_x195, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10088;
  kk_integer_t _brw_x2886;
  kk_string_t _x_x3574 = kk_string_unbox(_b_x195); /*string*/
  _brw_x2886 = kk_std_core_string_chars_fs_count(_x_x3574, _ctx); /*int*/
  bool _brw_x2887 = kk_integer_eq_borrow(_brw_x2886,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2886, _ctx);
  b_10088 = _brw_x2887; /*bool*/
  if (b_10088) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_hml_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x193_196;
  bool _match_x2888;
  kk_string_t _x_x3564;
  kk_define_string_literal(static, _s_x3565, 1, " ", _ctx)
  _x_x3564 = kk_string_dup(_s_x3565, _ctx); /*string*/
  kk_string_t _x_x3566 = kk_string_empty(); /*string*/
  _match_x2888 = kk_string_is_eq(_x_x3564,_x_x3566,kk_context()); /*bool*/
  if (_match_x2888) {
    kk_std_core_types__list _b_x190_198 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2889 = kk_hml_new_hc__words_fun3568(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2890 = kk_std_core_list_map(_b_x190_198, _brw_x2889, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2889, _ctx);
    _b_x193_196 = _brw_x2890; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x3571;
    kk_define_string_literal(static, _s_x3572, 1, " ", _ctx)
    _x_x3571 = kk_string_dup(_s_x3572, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3571,kk_context()); /*vector<string>*/
    _b_x193_196 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x193_196, kk_hml_new_hc__words_fun3573(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml_hc__lines_fun3579__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__lines_fun3579(kk_function_t _fself, kk_box_t _b_x203, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__lines_fun3579(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__lines_fun3579, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__lines_fun3579(kk_function_t _fself, kk_box_t _b_x203, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3580;
  kk_char_t _x_x3581 = kk_char_unbox(_b_x203, KK_OWNED, _ctx); /*char*/
  _x_x3580 = kk_std_core_string_char_fs_string(_x_x3581, _ctx); /*string*/
  return kk_string_box(_x_x3580);
}

kk_std_core_types__list kk_hml_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x2883;
  kk_string_t _x_x3575;
  kk_define_string_literal(static, _s_x3576, 1, "\n", _ctx)
  _x_x3575 = kk_string_dup(_s_x3576, _ctx); /*string*/
  kk_string_t _x_x3577 = kk_string_empty(); /*string*/
  _match_x2883 = kk_string_is_eq(_x_x3575,_x_x3577,kk_context()); /*bool*/
  if (_match_x2883) {
    kk_std_core_types__list _b_x201_204 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2884 = kk_hml_new_hc__lines_fun3579(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2885 = kk_std_core_list_map(_b_x201_204, _brw_x2884, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2884, _ctx);
    return _brw_x2885;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x3582;
    kk_define_string_literal(static, _s_x3583, 1, "\n", _ctx)
    _x_x3582 = kk_string_dup(_s_x3583, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3582,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__count__substr_fun3591__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__count__substr_fun3591(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__count__substr_fun3591(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__count__substr_fun3591, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__count__substr_fun3591(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3592;
  kk_char_t _x_x3593 = kk_char_unbox(_b_x208, KK_OWNED, _ctx); /*char*/
  _x_x3592 = kk_std_core_string_char_fs_string(_x_x3593, _ctx); /*string*/
  return kk_string_box(_x_x3592);
}

kk_integer_t kk_hml_hc__count__substr(kk_string_t s, kk_string_t hc__sub_0, kk_context_t* _ctx) { /* (s : string, hc_sub : string) -> int */ 
  kk_std_core_types__list xs_10100;
  bool _match_x2880;
  kk_string_t _x_x3588 = kk_string_dup(hc__sub_0, _ctx); /*string*/
  kk_string_t _x_x3589 = kk_string_empty(); /*string*/
  _match_x2880 = kk_string_is_eq(_x_x3588,_x_x3589,kk_context()); /*bool*/
  if (_match_x2880) {
    kk_string_drop(hc__sub_0, _ctx);
    kk_std_core_types__list _b_x206_209 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2881 = kk_hml_new_hc__count__substr_fun3591(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2882 = kk_std_core_list_map(_b_x206_209, _brw_x2881, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2881, _ctx);
    xs_10100 = _brw_x2882; /*list<string>*/
  }
  else {
    kk_vector_t v_10011 = kk_string_splitv(s,hc__sub_0,kk_context()); /*vector<string>*/;
    xs_10100 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_integer_t x_10098 = kk_std_core_list__lift_length_6003(xs_10100, kk_integer_from_small(0), _ctx); /*int*/;
  return kk_integer_add_small_const(x_10098, -1, _ctx);
}

kk_string_t kk_hml_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x2879 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2879) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3595 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3596;
    kk_integer_t _x_x3597 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x3596 = kk_hml_hc__repeat__str(s, _x_x3597, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3595, _x_x3596, _ctx);
  }
}

kk_string_t kk_hml_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10109;
  kk_string_t _x_x3598 = kk_string_dup(s, _ctx); /*string*/
  y_10109 = kk_std_core_string_chars_fs_count(_x_x3598, _ctx); /*int*/
  kk_integer_t b_10107 = kk_integer_sub(width,y_10109,kk_context()); /*int*/;
  kk_string_t _x_x3599;
  kk_integer_t _x_x3600;
  bool _match_x2878 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10107,kk_context()); /*bool*/;
  if (_match_x2878) {
    kk_integer_drop(b_10107, _ctx);
    _x_x3600 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3600 = b_10107; /*int*/
  }
  _x_x3599 = kk_hml_hc__repeat__str(ch, _x_x3600, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3599, s, _ctx);
}

kk_string_t kk_hml_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10113;
  kk_string_t _x_x3601 = kk_string_dup(s, _ctx); /*string*/
  y_10113 = kk_std_core_string_chars_fs_count(_x_x3601, _ctx); /*int*/
  kk_integer_t b_10111 = kk_integer_sub(width,y_10113,kk_context()); /*int*/;
  kk_string_t _x_x3602;
  kk_integer_t _x_x3603;
  bool _match_x2877 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10111,kk_context()); /*bool*/;
  if (_match_x2877) {
    kk_integer_drop(b_10111, _ctx);
    _x_x3603 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3603 = b_10111; /*int*/
  }
  _x_x3602 = kk_hml_hc__repeat__str(ch, _x_x3603, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x3602, _ctx);
}

kk_string_t kk_hml_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10117;
  kk_string_t _x_x3604 = kk_string_dup(s, _ctx); /*string*/
  y_10117 = kk_std_core_string_chars_fs_count(_x_x3604, _ctx); /*int*/
  kk_integer_t b_10115 = kk_integer_sub(width,y_10117,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x2876 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10115,kk_context()); /*bool*/;
  if (_match_x2876) {
    kk_integer_drop(b_10115, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10115; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x3605 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x3605,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x3606 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x3606,kk_context()); /*int*/
  kk_string_t _x_x3607;
  kk_string_t _x_x3608;
  kk_string_t _x_x3609 = kk_string_dup(ch, _ctx); /*string*/
  _x_x3608 = kk_hml_hc__repeat__str(_x_x3609, left, _ctx); /*string*/
  _x_x3607 = kk_std_core_types__lp__plus__plus__rp_(_x_x3608, s, _ctx); /*string*/
  kk_string_t _x_x3610 = kk_hml_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3607, _x_x3610, _ctx);
}

kk_string_t kk_hml_hc__capitalise(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2873;
  kk_integer_t _brw_x2874;
  kk_string_t _x_x3613 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2874 = kk_std_core_string_chars_fs_count(_x_x3613, _ctx); /*int*/
  bool _brw_x2875 = kk_integer_eq_borrow(_brw_x2874,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2874, _ctx);
  _match_x2873 = _brw_x2875; /*bool*/
  if (_match_x2873) {
    kk_string_drop(s, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3615;
    kk_string_t _x_x3616;
    kk_std_core_types__list _x_x3617;
    kk_std_core_types__list _x_x3618;
    kk_string_t _x_x3619 = kk_string_dup(s, _ctx); /*string*/
    _x_x3618 = kk_std_core_string_list(_x_x3619, _ctx); /*list<char>*/
    _x_x3617 = kk_std_core_list_take(_x_x3618, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3616 = kk_std_core_string_listchar_fs_string(_x_x3617, _ctx); /*string*/
    _x_x3615 = kk_std_core_string_to_upper(_x_x3616, _ctx); /*string*/
    kk_string_t _x_x3620;
    kk_string_t _x_x3621;
    kk_std_core_types__list _x_x3622;
    kk_std_core_types__list _x_x3623 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3622 = kk_std_core_list_drop(_x_x3623, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3621 = kk_std_core_string_listchar_fs_string(_x_x3622, _ctx); /*string*/
    _x_x3620 = kk_std_core_string_to_lower(_x_x3621, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3615, _x_x3620, _ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__capwords_fun3624__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__capwords_fun3624(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__capwords_fun3624(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__capwords_fun3624, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__capwords_fun3624(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3625;
  kk_string_t _x_x3626 = kk_string_unbox(_b_x213); /*string*/
  _x_x3625 = kk_hml_hc__capitalise(_x_x3626, _ctx); /*string*/
  return kk_string_box(_x_x3625);
}

kk_string_t kk_hml_hc__capwords(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  kk_std_core_types__list _b_x211_214 = kk_hml_hc__words(s, _ctx); /*list<string>*/;
  kk_std_core_types__list xs_10120;
  kk_function_t _brw_x2871 = kk_hml_new_hc__capwords_fun3624(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2872 = kk_std_core_list_map(_b_x211_214, _brw_x2871, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2871, _ctx);
  xs_10120 = _brw_x2872; /*list<string>*/
  kk_string_t _x_x3627;
  kk_define_string_literal(static, _s_x3628, 1, " ", _ctx)
  _x_x3627 = kk_string_dup(_s_x3628, _ctx); /*string*/
  return kk_std_core_list_joinsep(xs_10120, _x_x3627, _ctx);
}

kk_string_t kk_hml_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10122;
  kk_string_t _x_x3632 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3633 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10122 = kk_std_core_sslice_starts_with(_x_x3632, _x_x3633, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10122, _ctx)) {
    kk_box_t _box_x216 = maybe_10122._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10122, _ctx);
    kk_std_core_types__list _x_x3634;
    kk_std_core_types__list _x_x3635 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3636 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x3634 = kk_std_core_list_drop(_x_x3635, _x_x3636, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3634, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}

kk_string_t kk_hml_hc__removesuffix(kk_string_t s, kk_string_t suf, kk_context_t* _ctx) { /* (s : string, suf : string) -> string */ 
  kk_std_core_types__maybe maybe_10123;
  kk_string_t _x_x3637 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3638 = kk_string_dup(suf, _ctx); /*string*/
  maybe_10123 = kk_std_core_sslice_ends_with(_x_x3637, _x_x3638, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10123, _ctx)) {
    kk_box_t _box_x217 = maybe_10123._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10123, _ctx);
    kk_integer_t x_10124;
    kk_string_t _x_x3639 = kk_string_dup(s, _ctx); /*string*/
    x_10124 = kk_std_core_string_chars_fs_count(_x_x3639, _ctx); /*int*/
    kk_integer_t y_10125 = kk_std_core_string_chars_fs_count(suf, _ctx); /*int*/;
    kk_std_core_types__list _x_x3640;
    kk_std_core_types__list _x_x3641 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3642 = kk_integer_sub(x_10124,y_10125,kk_context()); /*int*/
    _x_x3640 = kk_std_core_list_take(_x_x3641, _x_x3642, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3640, _ctx);
  }
  {
    kk_string_drop(suf, _ctx);
    return s;
  }
}


// lift anonymous function
struct kk_hml_hc__all__digits_fun3648__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__all__digits_fun3648(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__all__digits_fun3648(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__all__digits_fun3648, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__all__digits_fun3648(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3649;
  kk_char_t _x_x3650 = kk_char_unbox(_b_x220, KK_OWNED, _ctx); /*char*/
  _x_x3649 = kk_std_core_string_char_fs_string(_x_x3650, _ctx); /*string*/
  return kk_string_box(_x_x3649);
}


// lift anonymous function
struct kk_hml_hc__all__digits_fun3653__t {
  struct kk_function_s _base;
};
static bool kk_hml_hc__all__digits_fun3653(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__all__digits_fun3653(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__all__digits_fun3653, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_hml_hc__all__digits_fun3653(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _match_x2859;
  kk_std_core_types__order _x_x3654;
  kk_string_t _brw_x2864;
  kk_box_t _x_x3655 = kk_box_dup(_b_x225, _ctx); /*10001*/
  _brw_x2864 = kk_string_unbox(_x_x3655); /*string*/
  kk_string_t _brw_x2863;
  kk_define_string_literal(static, _s_x3656, 1, "0", _ctx)
  _brw_x2863 = kk_string_dup(_s_x3656, _ctx); /*string*/
  kk_std_core_types__order _brw_x2865 = kk_std_core_string_cmp(_brw_x2864, _brw_x2863, _ctx); /*order*/;
  kk_string_drop(_brw_x2864, _ctx);
  kk_string_drop(_brw_x2863, _ctx);
  _x_x3654 = _brw_x2865; /*order*/
  _match_x2859 = kk_std_core_order__lp__gt__rp_(_x_x3654, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x2859) {
    kk_std_core_types__order _x_x3657;
    kk_string_t _brw_x2861 = kk_string_unbox(_b_x225); /*string*/;
    kk_string_t _brw_x2860;
    kk_define_string_literal(static, _s_x3658, 1, "9", _ctx)
    _brw_x2860 = kk_string_dup(_s_x3658, _ctx); /*string*/
    kk_std_core_types__order _brw_x2862 = kk_std_core_string_cmp(_brw_x2861, _brw_x2860, _ctx); /*order*/;
    kk_string_drop(_brw_x2861, _ctx);
    kk_string_drop(_brw_x2860, _ctx);
    _x_x3657 = _brw_x2862; /*order*/
    return kk_std_core_order__lp__lt__rp_(_x_x3657, kk_std_core_types__new_Gt(_ctx), _ctx);
  }
  {
    kk_box_drop(_b_x225, _ctx);
    return false;
  }
}

bool kk_hml_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2858;
  kk_integer_t _brw_x2869;
  kk_string_t _x_x3643 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2869 = kk_std_core_string_chars_fs_count(_x_x3643, _ctx); /*int*/
  bool _brw_x2870 = kk_integer_eq_borrow(_brw_x2869,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2869, _ctx);
  _match_x2858 = _brw_x2870; /*bool*/
  if (_match_x2858) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list chars;
    bool _match_x2866;
    kk_string_t _x_x3644 = kk_string_empty(); /*string*/
    kk_string_t _x_x3646 = kk_string_empty(); /*string*/
    _match_x2866 = kk_string_is_eq(_x_x3644,_x_x3646,kk_context()); /*bool*/
    if (_match_x2866) {
      kk_std_core_types__list _b_x218_221 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
      kk_function_t _brw_x2867 = kk_hml_new_hc__all__digits_fun3648(_ctx); /*(10001) -> 10003 10002*/;
      kk_std_core_types__list _brw_x2868 = kk_std_core_list_map(_b_x218_221, _brw_x2867, _ctx); /*list<10002>*/;
      kk_function_drop(_brw_x2867, _ctx);
      chars = _brw_x2868; /*list<string>*/
    }
    else {
      kk_vector_t v_10011;
      kk_string_t _x_x3651 = kk_string_empty(); /*string*/
      v_10011 = kk_string_splitv(s,_x_x3651,kk_context()); /*vector<string>*/
      chars = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
    }
    return kk_std_core_list_all(chars, kk_hml_new_hc__all__digits_fun3653(_ctx), _ctx);
  }
}

kk_std_core_types__maybe kk_hml_hc__parse__part(kk_string_t s, kk_integer_t start, kk_integer_t len, kk_context_t* _ctx) { /* (s : string, start : int, len : int) -> maybe<int> */ 
  kk_integer_t x_10135;
  kk_integer_t _x_x3659 = kk_integer_dup(start, _ctx); /*int*/
  x_10135 = kk_integer_add(_x_x3659,len,kk_context()); /*int*/
  kk_string_t s_0_10133;
  kk_std_core_types__list _x_x3660;
  kk_std_core_types__list _x_x3661;
  kk_std_core_types__list _x_x3662 = kk_std_core_string_list(s, _ctx); /*list<char>*/
  kk_integer_t _x_x3663 = kk_integer_dup(start, _ctx); /*int*/
  _x_x3661 = kk_std_core_list_drop(_x_x3662, _x_x3663, _ctx); /*list<10001>*/
  kk_integer_t _x_x3664 = kk_integer_sub(x_10135,start,kk_context()); /*int*/
  _x_x3660 = kk_std_core_list_take(_x_x3661, _x_x3664, _ctx); /*list<10001>*/
  s_0_10133 = kk_std_core_string_listchar_fs_string(_x_x3660, _ctx); /*string*/
  bool _x_x3665;
  kk_std_core_types__optional _match_x2857 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2857, _ctx)) {
    kk_box_t _box_x229 = _match_x2857._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x229);
    kk_std_core_types__optional_drop(_match_x2857, _ctx);
    _x_x3665 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2857, _ctx);
    _x_x3665 = false; /*bool*/
  }
  return kk_std_core_int_xparse(s_0_10133, _x_x3665, _ctx);
}

bool kk_hml_hc__in__range(kk_integer_t n, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (n : int, lo : int, hi : int) -> bool */ 
  bool _match_x2854;
  bool _brw_x2856 = kk_integer_gte_borrow(n,lo,kk_context()); /*bool*/;
  kk_integer_drop(lo, _ctx);
  _match_x2854 = _brw_x2856; /*bool*/
  if (_match_x2854) {
    bool _brw_x2855 = kk_integer_lte_borrow(n,hi,kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return _brw_x2855;
  }
  {
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return false;
  }
}

kk_integer_t kk_hml_hc__days__in__month(kk_integer_t year, kk_integer_t month, kk_context_t* _ctx) { /* (year : int, month : int) -> int */ 
  if (kk_integer_eq_borrow(month, kk_integer_from_small(1), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(2), _ctx)) {
    kk_integer_drop(month, _ctx);
    bool _match_x2842;
    kk_integer_t _brw_x2852;
    kk_integer_t _x_x3666 = kk_integer_dup(year, _ctx); /*int*/
    _brw_x2852 = kk_integer_mod(_x_x3666,(kk_integer_from_small(4)),kk_context()); /*int*/
    bool _brw_x2853 = kk_integer_eq_borrow(_brw_x2852,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2852, _ctx);
    _match_x2842 = _brw_x2853; /*bool*/
    if (_match_x2842) {
      bool _match_x2846;
      kk_integer_t _brw_x2850;
      kk_integer_t _x_x3667 = kk_integer_dup(year, _ctx); /*int*/
      _brw_x2850 = kk_integer_mod(_x_x3667,(kk_integer_from_small(100)),kk_context()); /*int*/
      bool _brw_x2851 = kk_integer_neq_borrow(_brw_x2850,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2850, _ctx);
      _match_x2846 = _brw_x2851; /*bool*/
      if (_match_x2846) {
        kk_integer_drop(year, _ctx);
        return kk_integer_from_small(29);
      }
      {
        bool _match_x2847;
        kk_integer_t _brw_x2848 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
        bool _brw_x2849 = kk_integer_eq_borrow(_brw_x2848,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2848, _ctx);
        _match_x2847 = _brw_x2849; /*bool*/
        if (_match_x2847) {
          return kk_integer_from_small(29);
        }
        {
          return kk_integer_from_small(28);
        }
      }
    }
    {
      bool _match_x2843;
      kk_integer_t _brw_x2844 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
      bool _brw_x2845 = kk_integer_eq_borrow(_brw_x2844,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2844, _ctx);
      _match_x2843 = _brw_x2845; /*bool*/
      if (_match_x2843) {
        return kk_integer_from_small(29);
      }
      {
        return kk_integer_from_small(28);
      }
    }
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(3), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(4), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(30);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(5), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(6), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(30);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(7), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(8), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(9), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(30);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(10), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(11), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(30);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(12), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(0);
  }
}

bool kk_hml_hc__is__valid__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2827;
  kk_integer_t _brw_x2840;
  kk_string_t _x_x3668 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2840 = kk_std_core_string_chars_fs_count(_x_x3668, _ctx); /*int*/
  bool _brw_x2841 = kk_integer_neq_borrow(_brw_x2840,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2840, _ctx);
  _match_x2827 = _brw_x2841; /*bool*/
  if (_match_x2827) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2828;
    kk_string_t _x_x3669;
    kk_std_core_types__list _x_x3670;
    kk_std_core_types__list _x_x3671;
    kk_std_core_types__list _x_x3672;
    kk_string_t _x_x3673 = kk_string_dup(s, _ctx); /*string*/
    _x_x3672 = kk_std_core_string_list(_x_x3673, _ctx); /*list<char>*/
    _x_x3671 = kk_std_core_list_drop(_x_x3672, kk_integer_from_small(4), _ctx); /*list<10001>*/
    kk_integer_t _x_x3674 = kk_integer_add_small_const(kk_integer_from_small(5), -4, _ctx); /*int*/
    _x_x3670 = kk_std_core_list_take(_x_x3671, _x_x3674, _ctx); /*list<10001>*/
    _x_x3669 = kk_std_core_string_listchar_fs_string(_x_x3670, _ctx); /*string*/
    kk_string_t _x_x3675;
    kk_define_string_literal(static, _s_x3676, 1, "-", _ctx)
    _x_x3675 = kk_string_dup(_s_x3676, _ctx); /*string*/
    _match_x2828 = kk_string_is_neq(_x_x3669,_x_x3675,kk_context()); /*bool*/
    if (_match_x2828) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool _match_x2829;
      kk_string_t _x_x3677;
      kk_std_core_types__list _x_x3678;
      kk_std_core_types__list _x_x3679;
      kk_std_core_types__list _x_x3680;
      kk_string_t _x_x3681 = kk_string_dup(s, _ctx); /*string*/
      _x_x3680 = kk_std_core_string_list(_x_x3681, _ctx); /*list<char>*/
      _x_x3679 = kk_std_core_list_drop(_x_x3680, kk_integer_from_small(7), _ctx); /*list<10001>*/
      kk_integer_t _x_x3682 = kk_integer_add_small_const(kk_integer_from_small(8), -7, _ctx); /*int*/
      _x_x3678 = kk_std_core_list_take(_x_x3679, _x_x3682, _ctx); /*list<10001>*/
      _x_x3677 = kk_std_core_string_listchar_fs_string(_x_x3678, _ctx); /*string*/
      kk_string_t _x_x3683;
      kk_define_string_literal(static, _s_x3684, 1, "-", _ctx)
      _x_x3683 = kk_string_dup(_s_x3684, _ctx); /*string*/
      _match_x2829 = kk_string_is_neq(_x_x3677,_x_x3683,kk_context()); /*bool*/
      if (_match_x2829) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        bool b_10143;
        kk_string_t _x_x3685;
        kk_std_core_types__list _x_x3686;
        kk_std_core_types__list _x_x3687;
        kk_std_core_types__list _x_x3688;
        kk_string_t _x_x3689 = kk_string_dup(s, _ctx); /*string*/
        _x_x3688 = kk_std_core_string_list(_x_x3689, _ctx); /*list<char>*/
        _x_x3687 = kk_std_core_list_drop(_x_x3688, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3690 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
        _x_x3686 = kk_std_core_list_take(_x_x3687, _x_x3690, _ctx); /*list<10001>*/
        _x_x3685 = kk_std_core_string_listchar_fs_string(_x_x3686, _ctx); /*string*/
        b_10143 = kk_hml_hc__all__digits(_x_x3685, _ctx); /*bool*/
        if (b_10143) {
          bool b_0_10146;
          kk_string_t _x_x3691;
          kk_std_core_types__list _x_x3692;
          kk_std_core_types__list _x_x3693;
          kk_std_core_types__list _x_x3694;
          kk_string_t _x_x3695 = kk_string_dup(s, _ctx); /*string*/
          _x_x3694 = kk_std_core_string_list(_x_x3695, _ctx); /*list<char>*/
          _x_x3693 = kk_std_core_list_drop(_x_x3694, kk_integer_from_small(5), _ctx); /*list<10001>*/
          kk_integer_t _x_x3696 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
          _x_x3692 = kk_std_core_list_take(_x_x3693, _x_x3696, _ctx); /*list<10001>*/
          _x_x3691 = kk_std_core_string_listchar_fs_string(_x_x3692, _ctx); /*string*/
          b_0_10146 = kk_hml_hc__all__digits(_x_x3691, _ctx); /*bool*/
          if (b_0_10146) {
            bool b_1_10149;
            kk_string_t _x_x3697;
            kk_std_core_types__list _x_x3698;
            kk_std_core_types__list _x_x3699;
            kk_std_core_types__list _x_x3700;
            kk_string_t _x_x3701 = kk_string_dup(s, _ctx); /*string*/
            _x_x3700 = kk_std_core_string_list(_x_x3701, _ctx); /*list<char>*/
            _x_x3699 = kk_std_core_list_drop(_x_x3700, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3702 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
            _x_x3698 = kk_std_core_list_take(_x_x3699, _x_x3702, _ctx); /*list<10001>*/
            _x_x3697 = kk_std_core_string_listchar_fs_string(_x_x3698, _ctx); /*string*/
            b_1_10149 = kk_hml_hc__all__digits(_x_x3697, _ctx); /*bool*/
            if (b_1_10149) {
              kk_string_t s_0_10152;
              kk_std_core_types__list _x_x3703;
              kk_std_core_types__list _x_x3704;
              kk_std_core_types__list _x_x3705;
              kk_string_t _x_x3706 = kk_string_dup(s, _ctx); /*string*/
              _x_x3705 = kk_std_core_string_list(_x_x3706, _ctx); /*list<char>*/
              _x_x3704 = kk_std_core_list_drop(_x_x3705, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x3707 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
              _x_x3703 = kk_std_core_list_take(_x_x3704, _x_x3707, _ctx); /*list<10001>*/
              s_0_10152 = kk_std_core_string_listchar_fs_string(_x_x3703, _ctx); /*string*/
              kk_std_core_types__maybe _match_x2830;
              bool _x_x3708;
              kk_std_core_types__optional _match_x2839 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
              if (kk_std_core_types__is_Optional(_match_x2839, _ctx)) {
                kk_box_t _box_x230 = _match_x2839._cons._Optional.value;
                bool _uniq_hex_581 = kk_bool_unbox(_box_x230);
                kk_std_core_types__optional_drop(_match_x2839, _ctx);
                _x_x3708 = _uniq_hex_581; /*bool*/
              }
              else {
                kk_std_core_types__optional_drop(_match_x2839, _ctx);
                _x_x3708 = false; /*bool*/
              }
              _match_x2830 = kk_std_core_int_xparse(s_0_10152, _x_x3708, _ctx); /*maybe<int>*/
              if (kk_std_core_types__is_Just(_match_x2830, _ctx)) {
                kk_box_t _box_x231 = _match_x2830._cons.Just.value;
                kk_integer_t y_5 = kk_integer_unbox(_box_x231, _ctx);
                kk_integer_dup(y_5, _ctx);
                kk_std_core_types__maybe_drop(_match_x2830, _ctx);
                kk_string_t s_1_10156;
                kk_std_core_types__list _x_x3709;
                kk_std_core_types__list _x_x3710;
                kk_std_core_types__list _x_x3711;
                kk_string_t _x_x3712 = kk_string_dup(s, _ctx); /*string*/
                _x_x3711 = kk_std_core_string_list(_x_x3712, _ctx); /*list<char>*/
                _x_x3710 = kk_std_core_list_drop(_x_x3711, kk_integer_from_small(5), _ctx); /*list<10001>*/
                kk_integer_t _x_x3713 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
                _x_x3709 = kk_std_core_list_take(_x_x3710, _x_x3713, _ctx); /*list<10001>*/
                s_1_10156 = kk_std_core_string_listchar_fs_string(_x_x3709, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2831;
                bool _x_x3714;
                kk_std_core_types__optional _match_x2838 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2838, _ctx)) {
                  kk_box_t _box_x232 = _match_x2838._cons._Optional.value;
                  bool _uniq_hex_581_0 = kk_bool_unbox(_box_x232);
                  kk_std_core_types__optional_drop(_match_x2838, _ctx);
                  _x_x3714 = _uniq_hex_581_0; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2838, _ctx);
                  _x_x3714 = false; /*bool*/
                }
                _match_x2831 = kk_std_core_int_xparse(s_1_10156, _x_x3714, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2831, _ctx)) {
                  kk_box_t _box_x233 = _match_x2831._cons.Just.value;
                  kk_integer_t m = kk_integer_unbox(_box_x233, _ctx);
                  kk_integer_dup(m, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2831, _ctx);
                  kk_string_t s_2_10160;
                  kk_std_core_types__list _x_x3715;
                  kk_std_core_types__list _x_x3716;
                  kk_std_core_types__list _x_x3717 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x3716 = kk_std_core_list_drop(_x_x3717, kk_integer_from_small(8), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3718 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
                  _x_x3715 = kk_std_core_list_take(_x_x3716, _x_x3718, _ctx); /*list<10001>*/
                  s_2_10160 = kk_std_core_string_listchar_fs_string(_x_x3715, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2832;
                  bool _x_x3719;
                  kk_std_core_types__optional _match_x2837 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2837, _ctx)) {
                    kk_box_t _box_x234 = _match_x2837._cons._Optional.value;
                    bool _uniq_hex_581_1 = kk_bool_unbox(_box_x234);
                    kk_std_core_types__optional_drop(_match_x2837, _ctx);
                    _x_x3719 = _uniq_hex_581_1; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2837, _ctx);
                    _x_x3719 = false; /*bool*/
                  }
                  _match_x2832 = kk_std_core_int_xparse(s_2_10160, _x_x3719, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2832, _ctx)) {
                    kk_box_t _box_x235 = _match_x2832._cons.Just.value;
                    kk_integer_t d = kk_integer_unbox(_box_x235, _ctx);
                    kk_integer_dup(d, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2832, _ctx);
                    bool _match_x2833 = kk_integer_gte_borrow(m,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                    if (_match_x2833) {
                      bool _match_x2834 = kk_integer_lte_borrow(m,(kk_integer_from_small(12)),kk_context()); /*bool*/;
                      if (_match_x2834) {
                        kk_integer_t hi_0_10169 = kk_hml_hc__days__in__month(y_5, m, _ctx); /*int*/;
                        bool _match_x2835 = kk_integer_gte_borrow(d,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                        if (_match_x2835) {
                          bool _brw_x2836 = kk_integer_lte_borrow(d,hi_0_10169,kk_context()); /*bool*/;
                          kk_integer_drop(d, _ctx);
                          kk_integer_drop(hi_0_10169, _ctx);
                          return _brw_x2836;
                        }
                        {
                          kk_integer_drop(hi_0_10169, _ctx);
                          kk_integer_drop(d, _ctx);
                          return false;
                        }
                      }
                      {
                        kk_integer_drop(y_5, _ctx);
                        kk_integer_drop(m, _ctx);
                        kk_integer_drop(d, _ctx);
                        return false;
                      }
                    }
                    {
                      kk_integer_drop(y_5, _ctx);
                      kk_integer_drop(m, _ctx);
                      kk_integer_drop(d, _ctx);
                      return false;
                    }
                  }
                  {
                    kk_integer_drop(y_5, _ctx);
                    kk_integer_drop(m, _ctx);
                    return false;
                  }
                }
                {
                  kk_integer_drop(y_5, _ctx);
                  kk_string_drop(s, _ctx);
                  return false;
                }
              }
              {
                kk_string_drop(s, _ctx);
                return false;
              }
            }
            {
              kk_string_drop(s, _ctx);
              return false;
            }
          }
          {
            kk_string_drop(s, _ctx);
            return false;
          }
        }
        {
          kk_string_drop(s, _ctx);
          return false;
        }
      }
    }
  }
}

bool kk_hml_hc__is__valid__time__short(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10170;
  kk_std_core_types__list _x_x3720;
  kk_std_core_types__list _x_x3721;
  kk_std_core_types__list _x_x3722;
  kk_string_t _x_x3723 = kk_string_dup(s, _ctx); /*string*/
  _x_x3722 = kk_std_core_string_list(_x_x3723, _ctx); /*list<char>*/
  _x_x3721 = kk_std_core_list_drop(_x_x3722, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x3724 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
  _x_x3720 = kk_std_core_list_take(_x_x3721, _x_x3724, _ctx); /*list<10001>*/
  s_0_10170 = kk_std_core_string_listchar_fs_string(_x_x3720, _ctx); /*string*/
  kk_std_core_types__maybe _match_x2818;
  bool _x_x3725;
  kk_std_core_types__optional _match_x2826 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2826, _ctx)) {
    kk_box_t _box_x236 = _match_x2826._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x236);
    kk_std_core_types__optional_drop(_match_x2826, _ctx);
    _x_x3725 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2826, _ctx);
    _x_x3725 = false; /*bool*/
  }
  _match_x2818 = kk_std_core_int_xparse(s_0_10170, _x_x3725, _ctx); /*maybe<int>*/
  if (kk_std_core_types__is_Just(_match_x2818, _ctx)) {
    kk_box_t _box_x237 = _match_x2818._cons.Just.value;
    kk_integer_t h = kk_integer_unbox(_box_x237, _ctx);
    kk_integer_dup(h, _ctx);
    kk_std_core_types__maybe_drop(_match_x2818, _ctx);
    kk_string_t s_1_10174;
    kk_std_core_types__list _x_x3726;
    kk_std_core_types__list _x_x3727;
    kk_std_core_types__list _x_x3728 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3727 = kk_std_core_list_drop(_x_x3728, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3729 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3726 = kk_std_core_list_take(_x_x3727, _x_x3729, _ctx); /*list<10001>*/
    s_1_10174 = kk_std_core_string_listchar_fs_string(_x_x3726, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2819;
    bool _x_x3730;
    kk_std_core_types__optional _match_x2825 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2825, _ctx)) {
      kk_box_t _box_x238 = _match_x2825._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x238);
      kk_std_core_types__optional_drop(_match_x2825, _ctx);
      _x_x3730 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2825, _ctx);
      _x_x3730 = false; /*bool*/
    }
    _match_x2819 = kk_std_core_int_xparse(s_1_10174, _x_x3730, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2819, _ctx)) {
      kk_box_t _box_x239 = _match_x2819._cons.Just.value;
      kk_integer_t m = kk_integer_unbox(_box_x239, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__maybe_drop(_match_x2819, _ctx);
      bool _match_x2820 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2820) {
        bool _match_x2821;
        bool _brw_x2824 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
        kk_integer_drop(h, _ctx);
        _match_x2821 = _brw_x2824; /*bool*/
        if (_match_x2821) {
          bool _match_x2822 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2822) {
            bool _brw_x2823 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
            kk_integer_drop(m, _ctx);
            return _brw_x2823;
          }
          {
            kk_integer_drop(m, _ctx);
            return false;
          }
        }
        {
          kk_integer_drop(m, _ctx);
          return false;
        }
      }
      {
        kk_integer_drop(m, _ctx);
        kk_integer_drop(h, _ctx);
        return false;
      }
    }
    {
      kk_integer_drop(h, _ctx);
      return false;
    }
  }
  {
    kk_string_drop(s, _ctx);
    return false;
  }
}

bool kk_hml_hc__is__valid__time__full(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool b_10184;
  kk_string_t _x_x3731;
  kk_std_core_types__list _x_x3732;
  kk_std_core_types__list _x_x3733;
  kk_std_core_types__list _x_x3734;
  kk_string_t _x_x3735 = kk_string_dup(s, _ctx); /*string*/
  _x_x3734 = kk_std_core_string_list(_x_x3735, _ctx); /*list<char>*/
  _x_x3733 = kk_std_core_list_drop(_x_x3734, kk_integer_from_small(6), _ctx); /*list<10001>*/
  kk_integer_t _x_x3736 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
  _x_x3732 = kk_std_core_list_take(_x_x3733, _x_x3736, _ctx); /*list<10001>*/
  _x_x3731 = kk_std_core_string_listchar_fs_string(_x_x3732, _ctx); /*string*/
  b_10184 = kk_hml_hc__all__digits(_x_x3731, _ctx); /*bool*/
  if (b_10184) {
    kk_string_t s_0_10187;
    kk_std_core_types__list _x_x3737;
    kk_std_core_types__list _x_x3738;
    kk_std_core_types__list _x_x3739;
    kk_string_t _x_x3740 = kk_string_dup(s, _ctx); /*string*/
    _x_x3739 = kk_std_core_string_list(_x_x3740, _ctx); /*list<char>*/
    _x_x3738 = kk_std_core_list_drop(_x_x3739, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x3741 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
    _x_x3737 = kk_std_core_list_take(_x_x3738, _x_x3741, _ctx); /*list<10001>*/
    s_0_10187 = kk_std_core_string_listchar_fs_string(_x_x3737, _ctx); /*string*/
    kk_std_core_types__maybe hh;
    bool _x_x3742;
    kk_std_core_types__optional _match_x2817 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2817, _ctx)) {
      kk_box_t _box_x240 = _match_x2817._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x240);
      kk_std_core_types__optional_drop(_match_x2817, _ctx);
      _x_x3742 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2817, _ctx);
      _x_x3742 = false; /*bool*/
    }
    hh = kk_std_core_int_xparse(s_0_10187, _x_x3742, _ctx); /*maybe<int>*/
    kk_string_t s_1_10191;
    kk_std_core_types__list _x_x3743;
    kk_std_core_types__list _x_x3744;
    kk_std_core_types__list _x_x3745;
    kk_string_t _x_x3746 = kk_string_dup(s, _ctx); /*string*/
    _x_x3745 = kk_std_core_string_list(_x_x3746, _ctx); /*list<char>*/
    _x_x3744 = kk_std_core_list_drop(_x_x3745, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3747 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3743 = kk_std_core_list_take(_x_x3744, _x_x3747, _ctx); /*list<10001>*/
    s_1_10191 = kk_std_core_string_listchar_fs_string(_x_x3743, _ctx); /*string*/
    kk_std_core_types__maybe mm;
    bool _x_x3748;
    kk_std_core_types__optional _match_x2816 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2816, _ctx)) {
      kk_box_t _box_x241 = _match_x2816._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x241);
      kk_std_core_types__optional_drop(_match_x2816, _ctx);
      _x_x3748 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2816, _ctx);
      _x_x3748 = false; /*bool*/
    }
    mm = kk_std_core_int_xparse(s_1_10191, _x_x3748, _ctx); /*maybe<int>*/
    kk_string_t s_2_10195;
    kk_std_core_types__list _x_x3749;
    kk_std_core_types__list _x_x3750;
    kk_std_core_types__list _x_x3751;
    kk_string_t _x_x3752 = kk_string_dup(s, _ctx); /*string*/
    _x_x3751 = kk_std_core_string_list(_x_x3752, _ctx); /*list<char>*/
    _x_x3750 = kk_std_core_list_drop(_x_x3751, kk_integer_from_small(6), _ctx); /*list<10001>*/
    kk_integer_t _x_x3753 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
    _x_x3749 = kk_std_core_list_take(_x_x3750, _x_x3753, _ctx); /*list<10001>*/
    s_2_10195 = kk_std_core_string_listchar_fs_string(_x_x3749, _ctx); /*string*/
    kk_std_core_types__maybe ss;
    bool _x_x3754;
    kk_std_core_types__optional _match_x2815 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2815, _ctx)) {
      kk_box_t _box_x242 = _match_x2815._cons._Optional.value;
      bool _uniq_hex_581_1 = kk_bool_unbox(_box_x242);
      kk_std_core_types__optional_drop(_match_x2815, _ctx);
      _x_x3754 = _uniq_hex_581_1; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2815, _ctx);
      _x_x3754 = false; /*bool*/
    }
    ss = kk_std_core_int_xparse(s_2_10195, _x_x3754, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(hh, _ctx)) {
      kk_box_t _box_x243 = hh._cons.Just.value;
      kk_integer_t h = kk_integer_unbox(_box_x243, _ctx);
      kk_integer_dup(h, _ctx);
      kk_std_core_types__maybe_drop(hh, _ctx);
      if (kk_std_core_types__is_Just(mm, _ctx)) {
        kk_box_t _box_x244 = mm._cons.Just.value;
        kk_integer_t m = kk_integer_unbox(_box_x244, _ctx);
        kk_integer_dup(m, _ctx);
        kk_std_core_types__maybe_drop(mm, _ctx);
        if (kk_std_core_types__is_Just(ss, _ctx)) {
          kk_box_t _box_x245 = ss._cons.Just.value;
          kk_integer_t sec = kk_integer_unbox(_box_x245, _ctx);
          kk_integer_dup(sec, _ctx);
          kk_std_core_types__maybe_drop(ss, _ctx);
          bool base__ok;
          bool _match_x2807 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2807) {
            bool _match_x2808;
            bool _brw_x2814 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
            kk_integer_drop(h, _ctx);
            _match_x2808 = _brw_x2814; /*bool*/
            if (_match_x2808) {
              bool _match_x2809 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
              if (_match_x2809) {
                bool _match_x2810;
                bool _brw_x2813 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                kk_integer_drop(m, _ctx);
                _match_x2810 = _brw_x2813; /*bool*/
                if (_match_x2810) {
                  bool _match_x2811 = kk_integer_gte_borrow(sec,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                  if (_match_x2811) {
                    bool _brw_x2812 = kk_integer_lte_borrow(sec,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                    kk_integer_drop(sec, _ctx);
                    base__ok = _brw_x2812; /*bool*/
                  }
                  else {
                    kk_integer_drop(sec, _ctx);
                    base__ok = false; /*bool*/
                  }
                }
                else {
                  kk_integer_drop(sec, _ctx);
                  base__ok = false; /*bool*/
                }
              }
              else {
                kk_integer_drop(sec, _ctx);
                kk_integer_drop(m, _ctx);
                base__ok = false; /*bool*/
              }
            }
            else {
              kk_integer_drop(sec, _ctx);
              kk_integer_drop(m, _ctx);
              base__ok = false; /*bool*/
            }
          }
          else {
            kk_integer_drop(sec, _ctx);
            kk_integer_drop(m, _ctx);
            kk_integer_drop(h, _ctx);
            base__ok = false; /*bool*/
          }
          bool _match_x2800;
          kk_integer_t _brw_x2805;
          kk_string_t _x_x3755 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2805 = kk_std_core_string_chars_fs_count(_x_x3755, _ctx); /*int*/
          bool _brw_x2806 = kk_integer_eq_borrow(_brw_x2805,(kk_integer_from_small(8)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2805, _ctx);
          _match_x2800 = _brw_x2806; /*bool*/
          if (_match_x2800) {
            kk_string_drop(s, _ctx);
            return base__ok;
          }
          {
            bool _match_x2801;
            kk_string_t _x_x3756;
            kk_std_core_types__list _x_x3757;
            kk_std_core_types__list _x_x3758;
            kk_std_core_types__list _x_x3759;
            kk_string_t _x_x3760 = kk_string_dup(s, _ctx); /*string*/
            _x_x3759 = kk_std_core_string_list(_x_x3760, _ctx); /*list<char>*/
            _x_x3758 = kk_std_core_list_drop(_x_x3759, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3761 = kk_integer_add_small_const(kk_integer_from_small(9), -8, _ctx); /*int*/
            _x_x3757 = kk_std_core_list_take(_x_x3758, _x_x3761, _ctx); /*list<10001>*/
            _x_x3756 = kk_std_core_string_listchar_fs_string(_x_x3757, _ctx); /*string*/
            kk_string_t _x_x3762;
            kk_define_string_literal(static, _s_x3763, 1, ".", _ctx)
            _x_x3762 = kk_string_dup(_s_x3763, _ctx); /*string*/
            _match_x2801 = kk_string_is_eq(_x_x3756,_x_x3762,kk_context()); /*bool*/
            if (_match_x2801) {
              kk_string_t frac;
              kk_std_core_types__list _x_x3764;
              kk_std_core_types__list _x_x3765 = kk_std_core_string_list(s, _ctx); /*list<char>*/
              _x_x3764 = kk_std_core_list_drop(_x_x3765, kk_integer_from_small(9), _ctx); /*list<10001>*/
              frac = kk_std_core_string_listchar_fs_string(_x_x3764, _ctx); /*string*/
              if (base__ok) {
                bool _match_x2802;
                kk_integer_t _brw_x2803;
                kk_string_t _x_x3766 = kk_string_dup(frac, _ctx); /*string*/
                _brw_x2803 = kk_std_core_string_chars_fs_count(_x_x3766, _ctx); /*int*/
                bool _brw_x2804 = kk_integer_gt_borrow(_brw_x2803,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                kk_integer_drop(_brw_x2803, _ctx);
                _match_x2802 = _brw_x2804; /*bool*/
                if (_match_x2802) {
                  return kk_hml_hc__all__digits(frac, _ctx);
                }
                {
                  kk_string_drop(frac, _ctx);
                  return false;
                }
              }
              {
                kk_string_drop(frac, _ctx);
                return false;
              }
            }
            {
              kk_string_drop(s, _ctx);
              return false;
            }
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(m, _ctx);
          kk_integer_drop(h, _ctx);
          return false;
        }
      }
      {
        kk_std_core_types__maybe_drop(ss, _ctx);
        kk_string_drop(s, _ctx);
        kk_integer_drop(h, _ctx);
        return false;
      }
    }
    {
      kk_std_core_types__maybe_drop(ss, _ctx);
      kk_string_drop(s, _ctx);
      kk_std_core_types__maybe_drop(mm, _ctx);
      return false;
    }
  }
  {
    kk_string_drop(s, _ctx);
    return false;
  }
}

bool kk_hml_hc__is__valid__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2789;
  kk_integer_t _brw_x2798;
  kk_string_t _x_x3767 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2798 = kk_std_core_string_chars_fs_count(_x_x3767, _ctx); /*int*/
  bool _brw_x2799 = kk_integer_lt_borrow(_brw_x2798,(kk_integer_from_small(5)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2798, _ctx);
  _match_x2789 = _brw_x2799; /*bool*/
  if (_match_x2789) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2790;
    kk_string_t _x_x3768;
    kk_std_core_types__list _x_x3769;
    kk_std_core_types__list _x_x3770;
    kk_std_core_types__list _x_x3771;
    kk_string_t _x_x3772 = kk_string_dup(s, _ctx); /*string*/
    _x_x3771 = kk_std_core_string_list(_x_x3772, _ctx); /*list<char>*/
    _x_x3770 = kk_std_core_list_drop(_x_x3771, kk_integer_from_small(2), _ctx); /*list<10001>*/
    kk_integer_t _x_x3773 = kk_integer_add_small_const(kk_integer_from_small(3), -2, _ctx); /*int*/
    _x_x3769 = kk_std_core_list_take(_x_x3770, _x_x3773, _ctx); /*list<10001>*/
    _x_x3768 = kk_std_core_string_listchar_fs_string(_x_x3769, _ctx); /*string*/
    kk_string_t _x_x3774;
    kk_define_string_literal(static, _s_x3775, 1, ":", _ctx)
    _x_x3774 = kk_string_dup(_s_x3775, _ctx); /*string*/
    _match_x2790 = kk_string_is_neq(_x_x3768,_x_x3774,kk_context()); /*bool*/
    if (_match_x2790) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool b_10212;
      kk_string_t _x_x3776;
      kk_std_core_types__list _x_x3777;
      kk_std_core_types__list _x_x3778;
      kk_std_core_types__list _x_x3779;
      kk_string_t _x_x3780 = kk_string_dup(s, _ctx); /*string*/
      _x_x3779 = kk_std_core_string_list(_x_x3780, _ctx); /*list<char>*/
      _x_x3778 = kk_std_core_list_drop(_x_x3779, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x3781 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x3777 = kk_std_core_list_take(_x_x3778, _x_x3781, _ctx); /*list<10001>*/
      _x_x3776 = kk_std_core_string_listchar_fs_string(_x_x3777, _ctx); /*string*/
      b_10212 = kk_hml_hc__all__digits(_x_x3776, _ctx); /*bool*/
      if (b_10212) {
        bool b_0_10215;
        kk_string_t _x_x3782;
        kk_std_core_types__list _x_x3783;
        kk_std_core_types__list _x_x3784;
        kk_std_core_types__list _x_x3785;
        kk_string_t _x_x3786 = kk_string_dup(s, _ctx); /*string*/
        _x_x3785 = kk_std_core_string_list(_x_x3786, _ctx); /*list<char>*/
        _x_x3784 = kk_std_core_list_drop(_x_x3785, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x3787 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x3783 = kk_std_core_list_take(_x_x3784, _x_x3787, _ctx); /*list<10001>*/
        _x_x3782 = kk_std_core_string_listchar_fs_string(_x_x3783, _ctx); /*string*/
        b_0_10215 = kk_hml_hc__all__digits(_x_x3782, _ctx); /*bool*/
        if (b_0_10215) {
          bool _match_x2791;
          kk_integer_t _brw_x2796;
          kk_string_t _x_x3788 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2796 = kk_std_core_string_chars_fs_count(_x_x3788, _ctx); /*int*/
          bool _brw_x2797 = kk_integer_eq_borrow(_brw_x2796,(kk_integer_from_small(5)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2796, _ctx);
          _match_x2791 = _brw_x2797; /*bool*/
          if (_match_x2791) {
            return kk_hml_hc__is__valid__time__short(s, _ctx);
          }
          {
            bool _match_x2792;
            kk_integer_t _brw_x2794;
            kk_string_t _x_x3789 = kk_string_dup(s, _ctx); /*string*/
            _brw_x2794 = kk_std_core_string_chars_fs_count(_x_x3789, _ctx); /*int*/
            bool _brw_x2795 = kk_integer_gte_borrow(_brw_x2794,(kk_integer_from_small(8)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2794, _ctx);
            _match_x2792 = _brw_x2795; /*bool*/
            if (_match_x2792) {
              bool _match_x2793;
              kk_string_t _x_x3790;
              kk_std_core_types__list _x_x3791;
              kk_std_core_types__list _x_x3792;
              kk_std_core_types__list _x_x3793;
              kk_string_t _x_x3794 = kk_string_dup(s, _ctx); /*string*/
              _x_x3793 = kk_std_core_string_list(_x_x3794, _ctx); /*list<char>*/
              _x_x3792 = kk_std_core_list_drop(_x_x3793, kk_integer_from_small(5), _ctx); /*list<10001>*/
              kk_integer_t _x_x3795 = kk_integer_add_small_const(kk_integer_from_small(6), -5, _ctx); /*int*/
              _x_x3791 = kk_std_core_list_take(_x_x3792, _x_x3795, _ctx); /*list<10001>*/
              _x_x3790 = kk_std_core_string_listchar_fs_string(_x_x3791, _ctx); /*string*/
              kk_string_t _x_x3796;
              kk_define_string_literal(static, _s_x3797, 1, ":", _ctx)
              _x_x3796 = kk_string_dup(_s_x3797, _ctx); /*string*/
              _match_x2793 = kk_string_is_eq(_x_x3790,_x_x3796,kk_context()); /*bool*/
              if (_match_x2793) {
                return kk_hml_hc__is__valid__time__full(s, _ctx);
              }
              {
                kk_string_drop(s, _ctx);
                return false;
              }
            }
            {
              kk_string_drop(s, _ctx);
              return false;
            }
          }
        }
        {
          kk_string_drop(s, _ctx);
          return false;
        }
      }
      {
        kk_string_drop(s, _ctx);
        return false;
      }
    }
  }
}

bool kk_hml_hc__is__valid__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2762;
  kk_string_t _x_x3798 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3799;
  kk_define_string_literal(static, _s_x3800, 1, "Z", _ctx)
  _x_x3799 = kk_string_dup(_s_x3800, _ctx); /*string*/
  _match_x2762 = kk_string_is_eq(_x_x3798,_x_x3799,kk_context()); /*bool*/
  if (_match_x2762) {
    kk_string_drop(s, _ctx);
    return true;
  }
  {
    bool _match_x2763;
    kk_string_t _x_x3801 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3802;
    kk_define_string_literal(static, _s_x3803, 1, "z", _ctx)
    _x_x3802 = kk_string_dup(_s_x3803, _ctx); /*string*/
    _match_x2763 = kk_string_is_eq(_x_x3801,_x_x3802,kk_context()); /*bool*/
    if (_match_x2763) {
      kk_string_drop(s, _ctx);
      return true;
    }
    {
      bool _match_x2764;
      kk_integer_t _brw_x2787;
      kk_string_t _x_x3804 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2787 = kk_std_core_string_chars_fs_count(_x_x3804, _ctx); /*int*/
      bool _brw_x2788 = kk_integer_neq_borrow(_brw_x2787,(kk_integer_from_small(6)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2787, _ctx);
      _match_x2764 = _brw_x2788; /*bool*/
      if (_match_x2764) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        kk_string_t hc__sign_0;
        kk_std_core_types__list _x_x3805;
        kk_std_core_types__list _x_x3806;
        kk_std_core_types__list _x_x3807;
        kk_string_t _x_x3808 = kk_string_dup(s, _ctx); /*string*/
        _x_x3807 = kk_std_core_string_list(_x_x3808, _ctx); /*list<char>*/
        _x_x3806 = kk_std_core_list_drop(_x_x3807, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3809 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x3805 = kk_std_core_list_take(_x_x3806, _x_x3809, _ctx); /*list<10001>*/
        hc__sign_0 = kk_std_core_string_listchar_fs_string(_x_x3805, _ctx); /*string*/
        bool _match_x2765;
        kk_string_t _x_x3810 = kk_string_dup(hc__sign_0, _ctx); /*string*/
        kk_string_t _x_x3811;
        kk_define_string_literal(static, _s_x3812, 1, "+", _ctx)
        _x_x3811 = kk_string_dup(_s_x3812, _ctx); /*string*/
        _match_x2765 = kk_string_is_neq(_x_x3810,_x_x3811,kk_context()); /*bool*/
        if (_match_x2765) {
          bool _match_x2776;
          kk_string_t _x_x3813;
          kk_define_string_literal(static, _s_x3814, 1, "-", _ctx)
          _x_x3813 = kk_string_dup(_s_x3814, _ctx); /*string*/
          _match_x2776 = kk_string_is_neq(hc__sign_0,_x_x3813,kk_context()); /*bool*/
          if (_match_x2776) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool _match_x2777;
            kk_string_t _x_x3815;
            kk_std_core_types__list _x_x3816;
            kk_std_core_types__list _x_x3817;
            kk_std_core_types__list _x_x3818;
            kk_string_t _x_x3819 = kk_string_dup(s, _ctx); /*string*/
            _x_x3818 = kk_std_core_string_list(_x_x3819, _ctx); /*list<char>*/
            _x_x3817 = kk_std_core_list_drop(_x_x3818, kk_integer_from_small(3), _ctx); /*list<10001>*/
            kk_integer_t _x_x3820 = kk_integer_add_small_const(kk_integer_from_small(4), -3, _ctx); /*int*/
            _x_x3816 = kk_std_core_list_take(_x_x3817, _x_x3820, _ctx); /*list<10001>*/
            _x_x3815 = kk_std_core_string_listchar_fs_string(_x_x3816, _ctx); /*string*/
            kk_string_t _x_x3821;
            kk_define_string_literal(static, _s_x3822, 1, ":", _ctx)
            _x_x3821 = kk_string_dup(_s_x3822, _ctx); /*string*/
            _match_x2777 = kk_string_is_neq(_x_x3815,_x_x3821,kk_context()); /*bool*/
            if (_match_x2777) {
              kk_string_drop(s, _ctx);
              return false;
            }
            {
              bool b_10224;
              kk_string_t _x_x3823;
              kk_std_core_types__list _x_x3824;
              kk_std_core_types__list _x_x3825;
              kk_std_core_types__list _x_x3826;
              kk_string_t _x_x3827 = kk_string_dup(s, _ctx); /*string*/
              _x_x3826 = kk_std_core_string_list(_x_x3827, _ctx); /*list<char>*/
              _x_x3825 = kk_std_core_list_drop(_x_x3826, kk_integer_from_small(1), _ctx); /*list<10001>*/
              kk_integer_t _x_x3828 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
              _x_x3824 = kk_std_core_list_take(_x_x3825, _x_x3828, _ctx); /*list<10001>*/
              _x_x3823 = kk_std_core_string_listchar_fs_string(_x_x3824, _ctx); /*string*/
              b_10224 = kk_hml_hc__all__digits(_x_x3823, _ctx); /*bool*/
              if (b_10224) {
                bool b_0_10227;
                kk_string_t _x_x3829;
                kk_std_core_types__list _x_x3830;
                kk_std_core_types__list _x_x3831;
                kk_std_core_types__list _x_x3832;
                kk_string_t _x_x3833 = kk_string_dup(s, _ctx); /*string*/
                _x_x3832 = kk_std_core_string_list(_x_x3833, _ctx); /*list<char>*/
                _x_x3831 = kk_std_core_list_drop(_x_x3832, kk_integer_from_small(4), _ctx); /*list<10001>*/
                kk_integer_t _x_x3834 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                _x_x3830 = kk_std_core_list_take(_x_x3831, _x_x3834, _ctx); /*list<10001>*/
                _x_x3829 = kk_std_core_string_listchar_fs_string(_x_x3830, _ctx); /*string*/
                b_0_10227 = kk_hml_hc__all__digits(_x_x3829, _ctx); /*bool*/
                if (b_0_10227) {
                  kk_string_t s_0_10230;
                  kk_std_core_types__list _x_x3835;
                  kk_std_core_types__list _x_x3836;
                  kk_std_core_types__list _x_x3837;
                  kk_string_t _x_x3838 = kk_string_dup(s, _ctx); /*string*/
                  _x_x3837 = kk_std_core_string_list(_x_x3838, _ctx); /*list<char>*/
                  _x_x3836 = kk_std_core_list_drop(_x_x3837, kk_integer_from_small(1), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3839 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                  _x_x3835 = kk_std_core_list_take(_x_x3836, _x_x3839, _ctx); /*list<10001>*/
                  s_0_10230 = kk_std_core_string_listchar_fs_string(_x_x3835, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2778;
                  bool _x_x3840;
                  kk_std_core_types__optional _match_x2786 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2786, _ctx)) {
                    kk_box_t _box_x246 = _match_x2786._cons._Optional.value;
                    bool _uniq_hex_581 = kk_bool_unbox(_box_x246);
                    kk_std_core_types__optional_drop(_match_x2786, _ctx);
                    _x_x3840 = _uniq_hex_581; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2786, _ctx);
                    _x_x3840 = false; /*bool*/
                  }
                  _match_x2778 = kk_std_core_int_xparse(s_0_10230, _x_x3840, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2778, _ctx)) {
                    kk_box_t _box_x247 = _match_x2778._cons.Just.value;
                    kk_integer_t h = kk_integer_unbox(_box_x247, _ctx);
                    kk_integer_dup(h, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2778, _ctx);
                    kk_string_t s_1_10234;
                    kk_std_core_types__list _x_x3841;
                    kk_std_core_types__list _x_x3842;
                    kk_std_core_types__list _x_x3843 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                    _x_x3842 = kk_std_core_list_drop(_x_x3843, kk_integer_from_small(4), _ctx); /*list<10001>*/
                    kk_integer_t _x_x3844 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                    _x_x3841 = kk_std_core_list_take(_x_x3842, _x_x3844, _ctx); /*list<10001>*/
                    s_1_10234 = kk_std_core_string_listchar_fs_string(_x_x3841, _ctx); /*string*/
                    kk_std_core_types__maybe _match_x2779;
                    bool _x_x3845;
                    kk_std_core_types__optional _match_x2785 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                    if (kk_std_core_types__is_Optional(_match_x2785, _ctx)) {
                      kk_box_t _box_x248 = _match_x2785._cons._Optional.value;
                      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x248);
                      kk_std_core_types__optional_drop(_match_x2785, _ctx);
                      _x_x3845 = _uniq_hex_581_0; /*bool*/
                    }
                    else {
                      kk_std_core_types__optional_drop(_match_x2785, _ctx);
                      _x_x3845 = false; /*bool*/
                    }
                    _match_x2779 = kk_std_core_int_xparse(s_1_10234, _x_x3845, _ctx); /*maybe<int>*/
                    if (kk_std_core_types__is_Just(_match_x2779, _ctx)) {
                      kk_box_t _box_x249 = _match_x2779._cons.Just.value;
                      kk_integer_t m = kk_integer_unbox(_box_x249, _ctx);
                      kk_integer_dup(m, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2779, _ctx);
                      bool _match_x2780 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                      if (_match_x2780) {
                        bool _match_x2781;
                        bool _brw_x2784 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                        kk_integer_drop(h, _ctx);
                        _match_x2781 = _brw_x2784; /*bool*/
                        if (_match_x2781) {
                          bool _match_x2782 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                          if (_match_x2782) {
                            bool _brw_x2783 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                            kk_integer_drop(m, _ctx);
                            return _brw_x2783;
                          }
                          {
                            kk_integer_drop(m, _ctx);
                            return false;
                          }
                        }
                        {
                          kk_integer_drop(m, _ctx);
                          return false;
                        }
                      }
                      {
                        kk_integer_drop(m, _ctx);
                        kk_integer_drop(h, _ctx);
                        return false;
                      }
                    }
                    {
                      kk_integer_drop(h, _ctx);
                      return false;
                    }
                  }
                  {
                    kk_string_drop(s, _ctx);
                    return false;
                  }
                }
                {
                  kk_string_drop(s, _ctx);
                  return false;
                }
              }
              {
                kk_string_drop(s, _ctx);
                return false;
              }
            }
          }
        }
        {
          kk_string_drop(hc__sign_0, _ctx);
          bool _match_x2766;
          kk_string_t _x_x3846;
          kk_std_core_types__list _x_x3847;
          kk_std_core_types__list _x_x3848;
          kk_std_core_types__list _x_x3849;
          kk_string_t _x_x3850 = kk_string_dup(s, _ctx); /*string*/
          _x_x3849 = kk_std_core_string_list(_x_x3850, _ctx); /*list<char>*/
          _x_x3848 = kk_std_core_list_drop(_x_x3849, kk_integer_from_small(3), _ctx); /*list<10001>*/
          kk_integer_t _x_x3851 = kk_integer_add_small_const(kk_integer_from_small(4), -3, _ctx); /*int*/
          _x_x3847 = kk_std_core_list_take(_x_x3848, _x_x3851, _ctx); /*list<10001>*/
          _x_x3846 = kk_std_core_string_listchar_fs_string(_x_x3847, _ctx); /*string*/
          kk_string_t _x_x3852;
          kk_define_string_literal(static, _s_x3853, 1, ":", _ctx)
          _x_x3852 = kk_string_dup(_s_x3853, _ctx); /*string*/
          _match_x2766 = kk_string_is_neq(_x_x3846,_x_x3852,kk_context()); /*bool*/
          if (_match_x2766) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool b_1_10246;
            kk_string_t _x_x3854;
            kk_std_core_types__list _x_x3855;
            kk_std_core_types__list _x_x3856;
            kk_std_core_types__list _x_x3857;
            kk_string_t _x_x3858 = kk_string_dup(s, _ctx); /*string*/
            _x_x3857 = kk_std_core_string_list(_x_x3858, _ctx); /*list<char>*/
            _x_x3856 = kk_std_core_list_drop(_x_x3857, kk_integer_from_small(1), _ctx); /*list<10001>*/
            kk_integer_t _x_x3859 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
            _x_x3855 = kk_std_core_list_take(_x_x3856, _x_x3859, _ctx); /*list<10001>*/
            _x_x3854 = kk_std_core_string_listchar_fs_string(_x_x3855, _ctx); /*string*/
            b_1_10246 = kk_hml_hc__all__digits(_x_x3854, _ctx); /*bool*/
            if (b_1_10246) {
              bool b_2_10249;
              kk_string_t _x_x3860;
              kk_std_core_types__list _x_x3861;
              kk_std_core_types__list _x_x3862;
              kk_std_core_types__list _x_x3863;
              kk_string_t _x_x3864 = kk_string_dup(s, _ctx); /*string*/
              _x_x3863 = kk_std_core_string_list(_x_x3864, _ctx); /*list<char>*/
              _x_x3862 = kk_std_core_list_drop(_x_x3863, kk_integer_from_small(4), _ctx); /*list<10001>*/
              kk_integer_t _x_x3865 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
              _x_x3861 = kk_std_core_list_take(_x_x3862, _x_x3865, _ctx); /*list<10001>*/
              _x_x3860 = kk_std_core_string_listchar_fs_string(_x_x3861, _ctx); /*string*/
              b_2_10249 = kk_hml_hc__all__digits(_x_x3860, _ctx); /*bool*/
              if (b_2_10249) {
                kk_string_t s_2_10252;
                kk_std_core_types__list _x_x3866;
                kk_std_core_types__list _x_x3867;
                kk_std_core_types__list _x_x3868;
                kk_string_t _x_x3869 = kk_string_dup(s, _ctx); /*string*/
                _x_x3868 = kk_std_core_string_list(_x_x3869, _ctx); /*list<char>*/
                _x_x3867 = kk_std_core_list_drop(_x_x3868, kk_integer_from_small(1), _ctx); /*list<10001>*/
                kk_integer_t _x_x3870 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                _x_x3866 = kk_std_core_list_take(_x_x3867, _x_x3870, _ctx); /*list<10001>*/
                s_2_10252 = kk_std_core_string_listchar_fs_string(_x_x3866, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2767;
                bool _x_x3871;
                kk_std_core_types__optional _match_x2775 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2775, _ctx)) {
                  kk_box_t _box_x250 = _match_x2775._cons._Optional.value;
                  bool _uniq_hex_581_1 = kk_bool_unbox(_box_x250);
                  kk_std_core_types__optional_drop(_match_x2775, _ctx);
                  _x_x3871 = _uniq_hex_581_1; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2775, _ctx);
                  _x_x3871 = false; /*bool*/
                }
                _match_x2767 = kk_std_core_int_xparse(s_2_10252, _x_x3871, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2767, _ctx)) {
                  kk_box_t _box_x251 = _match_x2767._cons.Just.value;
                  kk_integer_t h_0 = kk_integer_unbox(_box_x251, _ctx);
                  kk_integer_dup(h_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2767, _ctx);
                  kk_string_t s_3_10256;
                  kk_std_core_types__list _x_x3872;
                  kk_std_core_types__list _x_x3873;
                  kk_std_core_types__list _x_x3874 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x3873 = kk_std_core_list_drop(_x_x3874, kk_integer_from_small(4), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3875 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                  _x_x3872 = kk_std_core_list_take(_x_x3873, _x_x3875, _ctx); /*list<10001>*/
                  s_3_10256 = kk_std_core_string_listchar_fs_string(_x_x3872, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2768;
                  bool _x_x3876;
                  kk_std_core_types__optional _match_x2774 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2774, _ctx)) {
                    kk_box_t _box_x252 = _match_x2774._cons._Optional.value;
                    bool _uniq_hex_581_2 = kk_bool_unbox(_box_x252);
                    kk_std_core_types__optional_drop(_match_x2774, _ctx);
                    _x_x3876 = _uniq_hex_581_2; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2774, _ctx);
                    _x_x3876 = false; /*bool*/
                  }
                  _match_x2768 = kk_std_core_int_xparse(s_3_10256, _x_x3876, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2768, _ctx)) {
                    kk_box_t _box_x253 = _match_x2768._cons.Just.value;
                    kk_integer_t m_0 = kk_integer_unbox(_box_x253, _ctx);
                    kk_integer_dup(m_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2768, _ctx);
                    bool _match_x2769 = kk_integer_gte_borrow(h_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                    if (_match_x2769) {
                      bool _match_x2770;
                      bool _brw_x2773 = kk_integer_lte_borrow(h_0,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                      kk_integer_drop(h_0, _ctx);
                      _match_x2770 = _brw_x2773; /*bool*/
                      if (_match_x2770) {
                        bool _match_x2771 = kk_integer_gte_borrow(m_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                        if (_match_x2771) {
                          bool _brw_x2772 = kk_integer_lte_borrow(m_0,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                          kk_integer_drop(m_0, _ctx);
                          return _brw_x2772;
                        }
                        {
                          kk_integer_drop(m_0, _ctx);
                          return false;
                        }
                      }
                      {
                        kk_integer_drop(m_0, _ctx);
                        return false;
                      }
                    }
                    {
                      kk_integer_drop(m_0, _ctx);
                      kk_integer_drop(h_0, _ctx);
                      return false;
                    }
                  }
                  {
                    kk_integer_drop(h_0, _ctx);
                    return false;
                  }
                }
                {
                  kk_string_drop(s, _ctx);
                  return false;
                }
              }
              {
                kk_string_drop(s, _ctx);
                return false;
              }
            }
            {
              kk_string_drop(s, _ctx);
              return false;
            }
          }
        }
      }
    }
  }
}

bool kk_hml_hc__check__z__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  kk_integer_t zi;
  kk_std_core_types__maybe _match_x2758;
  kk_string_t _x_x3877 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x3878;
  kk_define_string_literal(static, _s_x3879, 1, "Z", _ctx)
  _x_x3878 = kk_string_dup(_s_x3879, _ctx); /*string*/
  _match_x2758 = kk_std_core_sslice_find(_x_x3877, _x_x3878, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x2758, _ctx)) {
    kk_box_t _box_x254 = _match_x2758._cons.Just.value;
    kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x254, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
    kk_std_core_types__maybe_drop(_match_x2758, _ctx);
    kk_std_core_sslice__sslice _x_x3880;
    {
      kk_string_t s = hc____ss.str;
      kk_integer_t start = hc____ss.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
      _x_x3880 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    zi = kk_std_core_sslice_count(_x_x3880, _ctx); /*int*/
  }
  else {
    kk_std_core_types__maybe _match_x2759 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2759, _ctx)) {
      kk_box_t _box_x255 = _match_x2759._cons.Just.value;
      kk_integer_t i = kk_integer_unbox(_box_x255, _ctx);
      kk_integer_dup(i, _ctx);
      kk_std_core_types__maybe_drop(_match_x2759, _ctx);
      zi = i; /*int*/
    }
    else {
      kk_std_core_types__maybe _match_x2760;
      kk_string_t _x_x3881 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x3882;
      kk_define_string_literal(static, _s_x3883, 1, "z", _ctx)
      _x_x3882 = kk_string_dup(_s_x3883, _ctx); /*string*/
      _match_x2760 = kk_std_core_sslice_find(_x_x3881, _x_x3882, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2760, _ctx)) {
        kk_box_t _box_x256 = _match_x2760._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x256, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2760, _ctx);
        kk_std_core_sslice__sslice _x_x3884;
        {
          kk_string_t s_0 = hc____ss_0.str;
          kk_integer_t start_0 = hc____ss_0.start;
          kk_string_dup(s_0, _ctx);
          kk_integer_dup(start_0, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
          _x_x3884 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
        }
        zi = kk_std_core_sslice_count(_x_x3884, _ctx); /*int*/
      }
      else {
        kk_std_core_types__maybe _match_x2761 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2761, _ctx)) {
          kk_box_t _box_x257 = _match_x2761._cons.Just.value;
          kk_integer_t i_0 = kk_integer_unbox(_box_x257, _ctx);
          kk_integer_dup(i_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2761, _ctx);
          zi = i_0; /*int*/
        }
        else {
          zi = kk_integer_from_small(0); /*int*/
        }
      }
    }
  }
  kk_string_t t;
  kk_std_core_types__list _x_x3885;
  kk_std_core_types__list _x_x3886;
  kk_std_core_types__list _x_x3887;
  kk_string_t _x_x3888 = kk_string_dup(rest, _ctx); /*string*/
  _x_x3887 = kk_std_core_string_list(_x_x3888, _ctx); /*list<char>*/
  _x_x3886 = kk_std_core_list_drop(_x_x3887, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x3889;
  kk_integer_t _x_x3890 = kk_integer_dup(zi, _ctx); /*int*/
  _x_x3889 = kk_integer_add_small_const(_x_x3890, 0, _ctx); /*int*/
  _x_x3885 = kk_std_core_list_take(_x_x3886, _x_x3889, _ctx); /*list<10001>*/
  t = kk_std_core_string_listchar_fs_string(_x_x3885, _ctx); /*string*/
  bool _match_x2757 = kk_hml_hc__is__valid__time(t, _ctx); /*bool*/;
  if (_match_x2757) {
    kk_string_t _x_x3891;
    kk_std_core_types__list _x_x3892;
    kk_std_core_types__list _x_x3893 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
    _x_x3892 = kk_std_core_list_drop(_x_x3893, zi, _ctx); /*list<10001>*/
    _x_x3891 = kk_std_core_string_listchar_fs_string(_x_x3892, _ctx); /*string*/
    return kk_hml_hc__is__valid__offset(_x_x3891, _ctx);
  }
  {
    kk_integer_drop(zi, _ctx);
    kk_string_drop(rest, _ctx);
    return false;
  }
}

bool kk_hml_hc__check__numeric__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  bool _match_x2750;
  kk_integer_t _brw_x2755;
  kk_string_t _x_x3894 = kk_string_dup(rest, _ctx); /*string*/
  _brw_x2755 = kk_std_core_string_chars_fs_count(_x_x3894, _ctx); /*int*/
  bool _brw_x2756 = kk_integer_lt_borrow(_brw_x2755,(kk_integer_from_small(11)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2755, _ctx);
  _match_x2750 = _brw_x2756; /*bool*/
  if (_match_x2750) {
    kk_string_drop(rest, _ctx);
    return false;
  }
  {
    kk_integer_t x_10270;
    kk_string_t _x_x3895 = kk_string_dup(rest, _ctx); /*string*/
    x_10270 = kk_std_core_string_chars_fs_count(_x_x3895, _ctx); /*int*/
    kk_integer_t sign__pos = kk_integer_add_small_const(x_10270, -6, _ctx); /*int*/;
    kk_integer_t x_0_10272;
    kk_integer_t _x_x3896 = kk_integer_dup(sign__pos, _ctx); /*int*/
    x_0_10272 = kk_integer_add_small_const(_x_x3896, 1, _ctx); /*int*/
    kk_string_t sign__char;
    kk_std_core_types__list _x_x3897;
    kk_std_core_types__list _x_x3898;
    kk_std_core_types__list _x_x3899;
    kk_string_t _x_x3900 = kk_string_dup(rest, _ctx); /*string*/
    _x_x3899 = kk_std_core_string_list(_x_x3900, _ctx); /*list<char>*/
    kk_integer_t _x_x3901 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x3898 = kk_std_core_list_drop(_x_x3899, _x_x3901, _ctx); /*list<10001>*/
    kk_integer_t _x_x3902;
    kk_integer_t _x_x3903 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x3902 = kk_integer_sub(x_0_10272,_x_x3903,kk_context()); /*int*/
    _x_x3897 = kk_std_core_list_take(_x_x3898, _x_x3902, _ctx); /*list<10001>*/
    sign__char = kk_std_core_string_listchar_fs_string(_x_x3897, _ctx); /*string*/
    bool _match_x2751;
    kk_string_t _x_x3904 = kk_string_dup(sign__char, _ctx); /*string*/
    kk_string_t _x_x3905;
    kk_define_string_literal(static, _s_x3906, 1, "+", _ctx)
    _x_x3905 = kk_string_dup(_s_x3906, _ctx); /*string*/
    _match_x2751 = kk_string_is_neq(_x_x3904,_x_x3905,kk_context()); /*bool*/
    if (_match_x2751) {
      bool _match_x2753;
      kk_string_t _x_x3907;
      kk_define_string_literal(static, _s_x3908, 1, "-", _ctx)
      _x_x3907 = kk_string_dup(_s_x3908, _ctx); /*string*/
      _match_x2753 = kk_string_is_neq(sign__char,_x_x3907,kk_context()); /*bool*/
      if (_match_x2753) {
        kk_integer_drop(sign__pos, _ctx);
        kk_string_drop(rest, _ctx);
        return false;
      }
      {
        kk_string_t t;
        kk_std_core_types__list _x_x3909;
        kk_std_core_types__list _x_x3910;
        kk_std_core_types__list _x_x3911;
        kk_string_t _x_x3912 = kk_string_dup(rest, _ctx); /*string*/
        _x_x3911 = kk_std_core_string_list(_x_x3912, _ctx); /*list<char>*/
        _x_x3910 = kk_std_core_list_drop(_x_x3911, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3913;
        kk_integer_t _x_x3914 = kk_integer_dup(sign__pos, _ctx); /*int*/
        _x_x3913 = kk_integer_add_small_const(_x_x3914, 0, _ctx); /*int*/
        _x_x3909 = kk_std_core_list_take(_x_x3910, _x_x3913, _ctx); /*list<10001>*/
        t = kk_std_core_string_listchar_fs_string(_x_x3909, _ctx); /*string*/
        kk_string_t o;
        kk_std_core_types__list _x_x3915;
        kk_std_core_types__list _x_x3916 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x3915 = kk_std_core_list_drop(_x_x3916, sign__pos, _ctx); /*list<10001>*/
        o = kk_std_core_string_listchar_fs_string(_x_x3915, _ctx); /*string*/
        bool _match_x2754 = kk_hml_hc__is__valid__time(t, _ctx); /*bool*/;
        if (_match_x2754) {
          return kk_hml_hc__is__valid__offset(o, _ctx);
        }
        {
          kk_string_drop(o, _ctx);
          return false;
        }
      }
    }
    {
      kk_string_drop(sign__char, _ctx);
      kk_string_t t_0;
      kk_std_core_types__list _x_x3917;
      kk_std_core_types__list _x_x3918;
      kk_std_core_types__list _x_x3919;
      kk_string_t _x_x3920 = kk_string_dup(rest, _ctx); /*string*/
      _x_x3919 = kk_std_core_string_list(_x_x3920, _ctx); /*list<char>*/
      _x_x3918 = kk_std_core_list_drop(_x_x3919, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x3921;
      kk_integer_t _x_x3922 = kk_integer_dup(sign__pos, _ctx); /*int*/
      _x_x3921 = kk_integer_add_small_const(_x_x3922, 0, _ctx); /*int*/
      _x_x3917 = kk_std_core_list_take(_x_x3918, _x_x3921, _ctx); /*list<10001>*/
      t_0 = kk_std_core_string_listchar_fs_string(_x_x3917, _ctx); /*string*/
      kk_string_t o_0;
      kk_std_core_types__list _x_x3923;
      kk_std_core_types__list _x_x3924 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x3923 = kk_std_core_list_drop(_x_x3924, sign__pos, _ctx); /*list<10001>*/
      o_0 = kk_std_core_string_listchar_fs_string(_x_x3923, _ctx); /*string*/
      bool _match_x2752 = kk_hml_hc__is__valid__time(t_0, _ctx); /*bool*/;
      if (_match_x2752) {
        return kk_hml_hc__is__valid__offset(o_0, _ctx);
      }
      {
        kk_string_drop(o_0, _ctx);
        return false;
      }
    }
  }
}

bool kk_hml_hc__is__iso__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2738;
  kk_integer_t _brw_x2748;
  kk_string_t _x_x3925 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2748 = kk_std_core_string_chars_fs_count(_x_x3925, _ctx); /*int*/
  bool _brw_x2749 = kk_integer_lt_borrow(_brw_x2748,(kk_integer_from_small(17)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2748, _ctx);
  _match_x2738 = _brw_x2749; /*bool*/
  if (_match_x2738) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x3926;
    kk_std_core_types__list _x_x3927;
    kk_std_core_types__list _x_x3928;
    kk_string_t _x_x3929 = kk_string_dup(s, _ctx); /*string*/
    _x_x3928 = kk_std_core_string_list(_x_x3929, _ctx); /*list<char>*/
    _x_x3927 = kk_std_core_list_drop(_x_x3928, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x3930 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x3926 = kk_std_core_list_take(_x_x3927, _x_x3930, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x3926, _ctx); /*string*/
    bool _match_x2739;
    kk_string_t _x_x3931 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x3932;
    kk_define_string_literal(static, _s_x3933, 1, "T", _ctx)
    _x_x3932 = kk_string_dup(_s_x3933, _ctx); /*string*/
    _match_x2739 = kk_string_is_neq(_x_x3931,_x_x3932,kk_context()); /*bool*/
    if (_match_x2739) {
      bool _match_x2742;
      kk_string_t _x_x3934 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x3935;
      kk_define_string_literal(static, _s_x3936, 1, "t", _ctx)
      _x_x3935 = kk_string_dup(_s_x3936, _ctx); /*string*/
      _match_x2742 = kk_string_is_neq(_x_x3934,_x_x3935,kk_context()); /*bool*/
      if (_match_x2742) {
        bool _match_x2745;
        kk_string_t _x_x3937;
        kk_define_string_literal(static, _s_x3938, 1, " ", _ctx)
        _x_x3937 = kk_string_dup(_s_x3938, _ctx); /*string*/
        _match_x2745 = kk_string_is_neq(sep,_x_x3937,kk_context()); /*bool*/
        if (_match_x2745) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool b_10282;
          kk_string_t _x_x3939;
          kk_std_core_types__list _x_x3940;
          kk_std_core_types__list _x_x3941;
          kk_std_core_types__list _x_x3942;
          kk_string_t _x_x3943 = kk_string_dup(s, _ctx); /*string*/
          _x_x3942 = kk_std_core_string_list(_x_x3943, _ctx); /*list<char>*/
          _x_x3941 = kk_std_core_list_drop(_x_x3942, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x3944 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
          _x_x3940 = kk_std_core_list_take(_x_x3941, _x_x3944, _ctx); /*list<10001>*/
          _x_x3939 = kk_std_core_string_listchar_fs_string(_x_x3940, _ctx); /*string*/
          b_10282 = kk_hml_hc__is__valid__date(_x_x3939, _ctx); /*bool*/
          if (b_10282) {
            kk_string_t rest;
            kk_std_core_types__list _x_x3945;
            kk_std_core_types__list _x_x3946 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x3945 = kk_std_core_list_drop(_x_x3946, kk_integer_from_small(11), _ctx); /*list<10001>*/
            rest = kk_std_core_string_listchar_fs_string(_x_x3945, _ctx); /*string*/
            bool _match_x2746;
            kk_string_t _x_x3947 = kk_string_dup(rest, _ctx); /*string*/
            kk_string_t _x_x3948;
            kk_define_string_literal(static, _s_x3949, 1, "Z", _ctx)
            _x_x3948 = kk_string_dup(_s_x3949, _ctx); /*string*/
            _match_x2746 = kk_string_contains(_x_x3947,_x_x3948,kk_context()); /*bool*/
            if (_match_x2746) {
              return kk_hml_hc__check__z__offset(rest, _ctx);
            }
            {
              bool _match_x2747;
              kk_string_t _x_x3950 = kk_string_dup(rest, _ctx); /*string*/
              kk_string_t _x_x3951;
              kk_define_string_literal(static, _s_x3952, 1, "z", _ctx)
              _x_x3951 = kk_string_dup(_s_x3952, _ctx); /*string*/
              _match_x2747 = kk_string_contains(_x_x3950,_x_x3951,kk_context()); /*bool*/
              if (_match_x2747) {
                return kk_hml_hc__check__z__offset(rest, _ctx);
              }
              {
                return kk_hml_hc__check__numeric__offset(rest, _ctx);
              }
            }
          }
          {
            kk_string_drop(s, _ctx);
            return false;
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        bool b_0_10285;
        kk_string_t _x_x3953;
        kk_std_core_types__list _x_x3954;
        kk_std_core_types__list _x_x3955;
        kk_std_core_types__list _x_x3956;
        kk_string_t _x_x3957 = kk_string_dup(s, _ctx); /*string*/
        _x_x3956 = kk_std_core_string_list(_x_x3957, _ctx); /*list<char>*/
        _x_x3955 = kk_std_core_list_drop(_x_x3956, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3958 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x3954 = kk_std_core_list_take(_x_x3955, _x_x3958, _ctx); /*list<10001>*/
        _x_x3953 = kk_std_core_string_listchar_fs_string(_x_x3954, _ctx); /*string*/
        b_0_10285 = kk_hml_hc__is__valid__date(_x_x3953, _ctx); /*bool*/
        if (b_0_10285) {
          kk_string_t rest_0;
          kk_std_core_types__list _x_x3959;
          kk_std_core_types__list _x_x3960 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x3959 = kk_std_core_list_drop(_x_x3960, kk_integer_from_small(11), _ctx); /*list<10001>*/
          rest_0 = kk_std_core_string_listchar_fs_string(_x_x3959, _ctx); /*string*/
          bool _match_x2743;
          kk_string_t _x_x3961 = kk_string_dup(rest_0, _ctx); /*string*/
          kk_string_t _x_x3962;
          kk_define_string_literal(static, _s_x3963, 1, "Z", _ctx)
          _x_x3962 = kk_string_dup(_s_x3963, _ctx); /*string*/
          _match_x2743 = kk_string_contains(_x_x3961,_x_x3962,kk_context()); /*bool*/
          if (_match_x2743) {
            return kk_hml_hc__check__z__offset(rest_0, _ctx);
          }
          {
            bool _match_x2744;
            kk_string_t _x_x3964 = kk_string_dup(rest_0, _ctx); /*string*/
            kk_string_t _x_x3965;
            kk_define_string_literal(static, _s_x3966, 1, "z", _ctx)
            _x_x3965 = kk_string_dup(_s_x3966, _ctx); /*string*/
            _match_x2744 = kk_string_contains(_x_x3964,_x_x3965,kk_context()); /*bool*/
            if (_match_x2744) {
              return kk_hml_hc__check__z__offset(rest_0, _ctx);
            }
            {
              return kk_hml_hc__check__numeric__offset(rest_0, _ctx);
            }
          }
        }
        {
          kk_string_drop(s, _ctx);
          return false;
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      bool b_1_10288;
      kk_string_t _x_x3967;
      kk_std_core_types__list _x_x3968;
      kk_std_core_types__list _x_x3969;
      kk_std_core_types__list _x_x3970;
      kk_string_t _x_x3971 = kk_string_dup(s, _ctx); /*string*/
      _x_x3970 = kk_std_core_string_list(_x_x3971, _ctx); /*list<char>*/
      _x_x3969 = kk_std_core_list_drop(_x_x3970, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x3972 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x3968 = kk_std_core_list_take(_x_x3969, _x_x3972, _ctx); /*list<10001>*/
      _x_x3967 = kk_std_core_string_listchar_fs_string(_x_x3968, _ctx); /*string*/
      b_1_10288 = kk_hml_hc__is__valid__date(_x_x3967, _ctx); /*bool*/
      if (b_1_10288) {
        kk_string_t rest_1;
        kk_std_core_types__list _x_x3973;
        kk_std_core_types__list _x_x3974 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x3973 = kk_std_core_list_drop(_x_x3974, kk_integer_from_small(11), _ctx); /*list<10001>*/
        rest_1 = kk_std_core_string_listchar_fs_string(_x_x3973, _ctx); /*string*/
        bool _match_x2740;
        kk_string_t _x_x3975 = kk_string_dup(rest_1, _ctx); /*string*/
        kk_string_t _x_x3976;
        kk_define_string_literal(static, _s_x3977, 1, "Z", _ctx)
        _x_x3976 = kk_string_dup(_s_x3977, _ctx); /*string*/
        _match_x2740 = kk_string_contains(_x_x3975,_x_x3976,kk_context()); /*bool*/
        if (_match_x2740) {
          return kk_hml_hc__check__z__offset(rest_1, _ctx);
        }
        {
          bool _match_x2741;
          kk_string_t _x_x3978 = kk_string_dup(rest_1, _ctx); /*string*/
          kk_string_t _x_x3979;
          kk_define_string_literal(static, _s_x3980, 1, "z", _ctx)
          _x_x3979 = kk_string_dup(_s_x3980, _ctx); /*string*/
          _match_x2741 = kk_string_contains(_x_x3978,_x_x3979,kk_context()); /*bool*/
          if (_match_x2741) {
            return kk_hml_hc__check__z__offset(rest_1, _ctx);
          }
          {
            return kk_hml_hc__check__numeric__offset(rest_1, _ctx);
          }
        }
      }
      {
        kk_string_drop(s, _ctx);
        return false;
      }
    }
  }
}

bool kk_hml_hc__is__local__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2729;
  kk_integer_t _brw_x2736;
  kk_string_t _x_x3981 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2736 = kk_std_core_string_chars_fs_count(_x_x3981, _ctx); /*int*/
  bool _brw_x2737 = kk_integer_lt_borrow(_brw_x2736,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2736, _ctx);
  _match_x2729 = _brw_x2737; /*bool*/
  if (_match_x2729) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x3982;
    kk_std_core_types__list _x_x3983;
    kk_std_core_types__list _x_x3984;
    kk_string_t _x_x3985 = kk_string_dup(s, _ctx); /*string*/
    _x_x3984 = kk_std_core_string_list(_x_x3985, _ctx); /*list<char>*/
    _x_x3983 = kk_std_core_list_drop(_x_x3984, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x3986 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x3982 = kk_std_core_list_take(_x_x3983, _x_x3986, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x3982, _ctx); /*string*/
    bool _match_x2730;
    kk_string_t _x_x3987 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x3988;
    kk_define_string_literal(static, _s_x3989, 1, "T", _ctx)
    _x_x3988 = kk_string_dup(_s_x3989, _ctx); /*string*/
    _match_x2730 = kk_string_is_neq(_x_x3987,_x_x3988,kk_context()); /*bool*/
    if (_match_x2730) {
      bool _match_x2732;
      kk_string_t _x_x3990 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x3991;
      kk_define_string_literal(static, _s_x3992, 1, "t", _ctx)
      _x_x3991 = kk_string_dup(_s_x3992, _ctx); /*string*/
      _match_x2732 = kk_string_is_neq(_x_x3990,_x_x3991,kk_context()); /*bool*/
      if (_match_x2732) {
        bool _match_x2734;
        kk_string_t _x_x3993;
        kk_define_string_literal(static, _s_x3994, 1, " ", _ctx)
        _x_x3993 = kk_string_dup(_s_x3994, _ctx); /*string*/
        _match_x2734 = kk_string_is_neq(sep,_x_x3993,kk_context()); /*bool*/
        if (_match_x2734) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool _match_x2735;
          kk_string_t _x_x3995;
          kk_std_core_types__list _x_x3996;
          kk_std_core_types__list _x_x3997;
          kk_std_core_types__list _x_x3998;
          kk_string_t _x_x3999 = kk_string_dup(s, _ctx); /*string*/
          _x_x3998 = kk_std_core_string_list(_x_x3999, _ctx); /*list<char>*/
          _x_x3997 = kk_std_core_list_drop(_x_x3998, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4000 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
          _x_x3996 = kk_std_core_list_take(_x_x3997, _x_x4000, _ctx); /*list<10001>*/
          _x_x3995 = kk_std_core_string_listchar_fs_string(_x_x3996, _ctx); /*string*/
          _match_x2735 = kk_hml_hc__is__valid__date(_x_x3995, _ctx); /*bool*/
          if (_match_x2735) {
            kk_string_t _x_x4001;
            kk_std_core_types__list _x_x4002;
            kk_std_core_types__list _x_x4003 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x4002 = kk_std_core_list_drop(_x_x4003, kk_integer_from_small(11), _ctx); /*list<10001>*/
            _x_x4001 = kk_std_core_string_listchar_fs_string(_x_x4002, _ctx); /*string*/
            return kk_hml_hc__is__valid__time(_x_x4001, _ctx);
          }
          {
            kk_string_drop(s, _ctx);
            return false;
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        bool _match_x2733;
        kk_string_t _x_x4004;
        kk_std_core_types__list _x_x4005;
        kk_std_core_types__list _x_x4006;
        kk_std_core_types__list _x_x4007;
        kk_string_t _x_x4008 = kk_string_dup(s, _ctx); /*string*/
        _x_x4007 = kk_std_core_string_list(_x_x4008, _ctx); /*list<char>*/
        _x_x4006 = kk_std_core_list_drop(_x_x4007, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4009 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x4005 = kk_std_core_list_take(_x_x4006, _x_x4009, _ctx); /*list<10001>*/
        _x_x4004 = kk_std_core_string_listchar_fs_string(_x_x4005, _ctx); /*string*/
        _match_x2733 = kk_hml_hc__is__valid__date(_x_x4004, _ctx); /*bool*/
        if (_match_x2733) {
          kk_string_t _x_x4010;
          kk_std_core_types__list _x_x4011;
          kk_std_core_types__list _x_x4012 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4011 = kk_std_core_list_drop(_x_x4012, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4010 = kk_std_core_string_listchar_fs_string(_x_x4011, _ctx); /*string*/
          return kk_hml_hc__is__valid__time(_x_x4010, _ctx);
        }
        {
          kk_string_drop(s, _ctx);
          return false;
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      bool _match_x2731;
      kk_string_t _x_x4013;
      kk_std_core_types__list _x_x4014;
      kk_std_core_types__list _x_x4015;
      kk_std_core_types__list _x_x4016;
      kk_string_t _x_x4017 = kk_string_dup(s, _ctx); /*string*/
      _x_x4016 = kk_std_core_string_list(_x_x4017, _ctx); /*list<char>*/
      _x_x4015 = kk_std_core_list_drop(_x_x4016, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4018 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4014 = kk_std_core_list_take(_x_x4015, _x_x4018, _ctx); /*list<10001>*/
      _x_x4013 = kk_std_core_string_listchar_fs_string(_x_x4014, _ctx); /*string*/
      _match_x2731 = kk_hml_hc__is__valid__date(_x_x4013, _ctx); /*bool*/
      if (_match_x2731) {
        kk_string_t _x_x4019;
        kk_std_core_types__list _x_x4020;
        kk_std_core_types__list _x_x4021 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4020 = kk_std_core_list_drop(_x_x4021, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4019 = kk_std_core_string_listchar_fs_string(_x_x4020, _ctx); /*string*/
        return kk_hml_hc__is__valid__time(_x_x4019, _ctx);
      }
      {
        kk_string_drop(s, _ctx);
        return false;
      }
    }
  }
}

kk_std_core_types__either kk_hml_hc__date__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10299;
  kk_string_t _x_x4022 = kk_string_dup(s, _ctx); /*string*/
  b_10299 = kk_hml_hc__is__valid__date(_x_x4022, _ctx); /*bool*/
  if (b_10299) {
    kk_string_t s_0_10300;
    kk_std_core_types__list _x_x4023;
    kk_std_core_types__list _x_x4024;
    kk_std_core_types__list _x_x4025;
    kk_string_t _x_x4026 = kk_string_dup(s, _ctx); /*string*/
    _x_x4025 = kk_std_core_string_list(_x_x4026, _ctx); /*list<char>*/
    _x_x4024 = kk_std_core_list_drop(_x_x4025, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4027 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
    _x_x4023 = kk_std_core_list_take(_x_x4024, _x_x4027, _ctx); /*list<10001>*/
    s_0_10300 = kk_std_core_string_listchar_fs_string(_x_x4023, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2723;
    bool _x_x4028;
    kk_std_core_types__optional _match_x2728 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2728, _ctx)) {
      kk_box_t _box_x258 = _match_x2728._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x258);
      kk_std_core_types__optional_drop(_match_x2728, _ctx);
      _x_x4028 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2728, _ctx);
      _x_x4028 = false; /*bool*/
    }
    _match_x2723 = kk_std_core_int_xparse(s_0_10300, _x_x4028, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2723, _ctx)) {
      kk_box_t _box_x259 = _match_x2723._cons.Just.value;
      kk_integer_t y_0 = kk_integer_unbox(_box_x259, _ctx);
      kk_integer_dup(y_0, _ctx);
      kk_std_core_types__maybe_drop(_match_x2723, _ctx);
      kk_string_t s_1_10304;
      kk_std_core_types__list _x_x4029;
      kk_std_core_types__list _x_x4030;
      kk_std_core_types__list _x_x4031;
      kk_string_t _x_x4032 = kk_string_dup(s, _ctx); /*string*/
      _x_x4031 = kk_std_core_string_list(_x_x4032, _ctx); /*list<char>*/
      _x_x4030 = kk_std_core_list_drop(_x_x4031, kk_integer_from_small(5), _ctx); /*list<10001>*/
      kk_integer_t _x_x4033 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
      _x_x4029 = kk_std_core_list_take(_x_x4030, _x_x4033, _ctx); /*list<10001>*/
      s_1_10304 = kk_std_core_string_listchar_fs_string(_x_x4029, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2724;
      bool _x_x4034;
      kk_std_core_types__optional _match_x2727 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2727, _ctx)) {
        kk_box_t _box_x260 = _match_x2727._cons._Optional.value;
        bool _uniq_hex_581_0 = kk_bool_unbox(_box_x260);
        kk_std_core_types__optional_drop(_match_x2727, _ctx);
        _x_x4034 = _uniq_hex_581_0; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2727, _ctx);
        _x_x4034 = false; /*bool*/
      }
      _match_x2724 = kk_std_core_int_xparse(s_1_10304, _x_x4034, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2724, _ctx)) {
        kk_box_t _box_x261 = _match_x2724._cons.Just.value;
        kk_integer_t m = kk_integer_unbox(_box_x261, _ctx);
        kk_integer_dup(m, _ctx);
        kk_std_core_types__maybe_drop(_match_x2724, _ctx);
        kk_string_t s_2_10308;
        kk_std_core_types__list _x_x4035;
        kk_std_core_types__list _x_x4036;
        kk_std_core_types__list _x_x4037 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4036 = kk_std_core_list_drop(_x_x4037, kk_integer_from_small(8), _ctx); /*list<10001>*/
        kk_integer_t _x_x4038 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
        _x_x4035 = kk_std_core_list_take(_x_x4036, _x_x4038, _ctx); /*list<10001>*/
        s_2_10308 = kk_std_core_string_listchar_fs_string(_x_x4035, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2725;
        bool _x_x4039;
        kk_std_core_types__optional _match_x2726 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2726, _ctx)) {
          kk_box_t _box_x262 = _match_x2726._cons._Optional.value;
          bool _uniq_hex_581_1 = kk_bool_unbox(_box_x262);
          kk_std_core_types__optional_drop(_match_x2726, _ctx);
          _x_x4039 = _uniq_hex_581_1; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2726, _ctx);
          _x_x4039 = false; /*bool*/
        }
        _match_x2725 = kk_std_core_int_xparse(s_2_10308, _x_x4039, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2725, _ctx)) {
          kk_box_t _box_x263 = _match_x2725._cons.Just.value;
          kk_integer_t d = kk_integer_unbox(_box_x263, _ctx);
          kk_integer_dup(d, _ctx);
          kk_std_core_types__maybe_drop(_match_x2725, _ctx);
          kk_box_t _x_x4040;
          kk_std_core_types__tuple3 _x_x4041 = kk_std_core_types__new_Tuple3(kk_integer_box(y_0, _ctx), kk_integer_box(m, _ctx), kk_integer_box(d, _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4040 = kk_std_core_types__tuple3_box(_x_x4041, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4040, _ctx);
        }
        {
          kk_integer_drop(y_0, _ctx);
          kk_integer_drop(m, _ctx);
          kk_box_t _x_x4042;
          kk_string_t _x_x4043;
          kk_define_string_literal(static, _s_x4044, 11, "invalid day", _ctx)
          _x_x4043 = kk_string_dup(_s_x4044, _ctx); /*string*/
          _x_x4042 = kk_string_box(_x_x4043); /*10014*/
          return kk_std_core_types__new_Left(_x_x4042, _ctx);
        }
      }
      {
        kk_integer_drop(y_0, _ctx);
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4045;
        kk_string_t _x_x4046;
        kk_define_string_literal(static, _s_x4047, 13, "invalid month", _ctx)
        _x_x4046 = kk_string_dup(_s_x4047, _ctx); /*string*/
        _x_x4045 = kk_string_box(_x_x4046); /*10014*/
        return kk_std_core_types__new_Left(_x_x4045, _ctx);
      }
    }
    {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4048;
      kk_string_t _x_x4049;
      kk_define_string_literal(static, _s_x4050, 12, "invalid year", _ctx)
      _x_x4049 = kk_string_dup(_s_x4050, _ctx); /*string*/
      _x_x4048 = kk_string_box(_x_x4049); /*10014*/
      return kk_std_core_types__new_Left(_x_x4048, _ctx);
    }
  }
  {
    kk_string_t _b_x271_279;
    kk_string_t _x_x4051;
    kk_define_string_literal(static, _s_x4052, 14, "invalid date: ", _ctx)
    _x_x4051 = kk_string_dup(_s_x4052, _ctx); /*string*/
    _b_x271_279 = kk_std_core_types__lp__plus__plus__rp_(_x_x4051, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x271_279), _ctx);
  }
}

kk_std_core_types__either kk_hml_hc__time__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10312;
  kk_string_t _x_x4053 = kk_string_dup(s, _ctx); /*string*/
  b_10312 = kk_hml_hc__is__valid__time(_x_x4053, _ctx); /*bool*/
  if (b_10312) {
    bool _match_x2710;
    kk_integer_t _brw_x2721;
    kk_string_t _x_x4054 = kk_string_dup(s, _ctx); /*string*/
    _brw_x2721 = kk_std_core_string_chars_fs_count(_x_x4054, _ctx); /*int*/
    bool _brw_x2722 = kk_integer_eq_borrow(_brw_x2721,(kk_integer_from_small(5)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2721, _ctx);
    _match_x2710 = _brw_x2722; /*bool*/
    if (_match_x2710) {
      kk_string_t s_0_10313;
      kk_std_core_types__list _x_x4055;
      kk_std_core_types__list _x_x4056;
      kk_std_core_types__list _x_x4057;
      kk_string_t _x_x4058 = kk_string_dup(s, _ctx); /*string*/
      _x_x4057 = kk_std_core_string_list(_x_x4058, _ctx); /*list<char>*/
      _x_x4056 = kk_std_core_list_drop(_x_x4057, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4059 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4055 = kk_std_core_list_take(_x_x4056, _x_x4059, _ctx); /*list<10001>*/
      s_0_10313 = kk_std_core_string_listchar_fs_string(_x_x4055, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2717;
      bool _x_x4060;
      kk_std_core_types__optional _match_x2720 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2720, _ctx)) {
        kk_box_t _box_x280 = _match_x2720._cons._Optional.value;
        bool _uniq_hex_581 = kk_bool_unbox(_box_x280);
        kk_std_core_types__optional_drop(_match_x2720, _ctx);
        _x_x4060 = _uniq_hex_581; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2720, _ctx);
        _x_x4060 = false; /*bool*/
      }
      _match_x2717 = kk_std_core_int_xparse(s_0_10313, _x_x4060, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2717, _ctx)) {
        kk_box_t _box_x281 = _match_x2717._cons.Just.value;
        kk_integer_t h = kk_integer_unbox(_box_x281, _ctx);
        kk_integer_dup(h, _ctx);
        kk_std_core_types__maybe_drop(_match_x2717, _ctx);
        kk_string_t s_1_10317;
        kk_std_core_types__list _x_x4061;
        kk_std_core_types__list _x_x4062;
        kk_std_core_types__list _x_x4063 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4062 = kk_std_core_list_drop(_x_x4063, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4064 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4061 = kk_std_core_list_take(_x_x4062, _x_x4064, _ctx); /*list<10001>*/
        s_1_10317 = kk_std_core_string_listchar_fs_string(_x_x4061, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2718;
        bool _x_x4065;
        kk_std_core_types__optional _match_x2719 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2719, _ctx)) {
          kk_box_t _box_x282 = _match_x2719._cons._Optional.value;
          bool _uniq_hex_581_0 = kk_bool_unbox(_box_x282);
          kk_std_core_types__optional_drop(_match_x2719, _ctx);
          _x_x4065 = _uniq_hex_581_0; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2719, _ctx);
          _x_x4065 = false; /*bool*/
        }
        _match_x2718 = kk_std_core_int_xparse(s_1_10317, _x_x4065, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2718, _ctx)) {
          kk_box_t _box_x283 = _match_x2718._cons.Just.value;
          kk_integer_t m = kk_integer_unbox(_box_x283, _ctx);
          kk_integer_dup(m, _ctx);
          kk_std_core_types__maybe_drop(_match_x2718, _ctx);
          kk_box_t _x_x4066;
          kk_std_core_types__tuple3 _x_x4067 = kk_std_core_types__new_Tuple3(kk_integer_box(h, _ctx), kk_integer_box(m, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4066 = kk_std_core_types__tuple3_box(_x_x4067, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4066, _ctx);
        }
        {
          kk_integer_drop(h, _ctx);
          kk_box_t _x_x4068;
          kk_string_t _x_x4069;
          kk_define_string_literal(static, _s_x4070, 14, "invalid minute", _ctx)
          _x_x4069 = kk_string_dup(_s_x4070, _ctx); /*string*/
          _x_x4068 = kk_string_box(_x_x4069); /*10014*/
          return kk_std_core_types__new_Left(_x_x4068, _ctx);
        }
      }
      {
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4071;
        kk_string_t _x_x4072;
        kk_define_string_literal(static, _s_x4073, 12, "invalid hour", _ctx)
        _x_x4072 = kk_string_dup(_s_x4073, _ctx); /*string*/
        _x_x4071 = kk_string_box(_x_x4072); /*10014*/
        return kk_std_core_types__new_Left(_x_x4071, _ctx);
      }
    }
    {
      kk_string_t s_2_10321;
      kk_std_core_types__list _x_x4074;
      kk_std_core_types__list _x_x4075;
      kk_std_core_types__list _x_x4076;
      kk_string_t _x_x4077 = kk_string_dup(s, _ctx); /*string*/
      _x_x4076 = kk_std_core_string_list(_x_x4077, _ctx); /*list<char>*/
      _x_x4075 = kk_std_core_list_drop(_x_x4076, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4078 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4074 = kk_std_core_list_take(_x_x4075, _x_x4078, _ctx); /*list<10001>*/
      s_2_10321 = kk_std_core_string_listchar_fs_string(_x_x4074, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2711;
      bool _x_x4079;
      kk_std_core_types__optional _match_x2716 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2716, _ctx)) {
        kk_box_t _box_x290 = _match_x2716._cons._Optional.value;
        bool _uniq_hex_581_1 = kk_bool_unbox(_box_x290);
        kk_std_core_types__optional_drop(_match_x2716, _ctx);
        _x_x4079 = _uniq_hex_581_1; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2716, _ctx);
        _x_x4079 = false; /*bool*/
      }
      _match_x2711 = kk_std_core_int_xparse(s_2_10321, _x_x4079, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2711, _ctx)) {
        kk_box_t _box_x291 = _match_x2711._cons.Just.value;
        kk_integer_t h_0 = kk_integer_unbox(_box_x291, _ctx);
        kk_integer_dup(h_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2711, _ctx);
        kk_string_t s_3_10325;
        kk_std_core_types__list _x_x4080;
        kk_std_core_types__list _x_x4081;
        kk_std_core_types__list _x_x4082;
        kk_string_t _x_x4083 = kk_string_dup(s, _ctx); /*string*/
        _x_x4082 = kk_std_core_string_list(_x_x4083, _ctx); /*list<char>*/
        _x_x4081 = kk_std_core_list_drop(_x_x4082, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4084 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4080 = kk_std_core_list_take(_x_x4081, _x_x4084, _ctx); /*list<10001>*/
        s_3_10325 = kk_std_core_string_listchar_fs_string(_x_x4080, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2712;
        bool _x_x4085;
        kk_std_core_types__optional _match_x2715 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2715, _ctx)) {
          kk_box_t _box_x292 = _match_x2715._cons._Optional.value;
          bool _uniq_hex_581_2 = kk_bool_unbox(_box_x292);
          kk_std_core_types__optional_drop(_match_x2715, _ctx);
          _x_x4085 = _uniq_hex_581_2; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2715, _ctx);
          _x_x4085 = false; /*bool*/
        }
        _match_x2712 = kk_std_core_int_xparse(s_3_10325, _x_x4085, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2712, _ctx)) {
          kk_box_t _box_x293 = _match_x2712._cons.Just.value;
          kk_integer_t m_0 = kk_integer_unbox(_box_x293, _ctx);
          kk_integer_dup(m_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2712, _ctx);
          kk_string_t s_4_10329;
          kk_std_core_types__list _x_x4086;
          kk_std_core_types__list _x_x4087;
          kk_std_core_types__list _x_x4088 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4087 = kk_std_core_list_drop(_x_x4088, kk_integer_from_small(6), _ctx); /*list<10001>*/
          kk_integer_t _x_x4089 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
          _x_x4086 = kk_std_core_list_take(_x_x4087, _x_x4089, _ctx); /*list<10001>*/
          s_4_10329 = kk_std_core_string_listchar_fs_string(_x_x4086, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2713;
          bool _x_x4090;
          kk_std_core_types__optional _match_x2714 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2714, _ctx)) {
            kk_box_t _box_x294 = _match_x2714._cons._Optional.value;
            bool _uniq_hex_581_3 = kk_bool_unbox(_box_x294);
            kk_std_core_types__optional_drop(_match_x2714, _ctx);
            _x_x4090 = _uniq_hex_581_3; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2714, _ctx);
            _x_x4090 = false; /*bool*/
          }
          _match_x2713 = kk_std_core_int_xparse(s_4_10329, _x_x4090, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2713, _ctx)) {
            kk_box_t _box_x295 = _match_x2713._cons.Just.value;
            kk_integer_t sec = kk_integer_unbox(_box_x295, _ctx);
            kk_integer_dup(sec, _ctx);
            kk_std_core_types__maybe_drop(_match_x2713, _ctx);
            kk_box_t _x_x4091;
            kk_std_core_types__tuple3 _x_x4092 = kk_std_core_types__new_Tuple3(kk_integer_box(h_0, _ctx), kk_integer_box(m_0, _ctx), kk_integer_box(sec, _ctx), _ctx); /*(10041, 10042, 10043)*/
            _x_x4091 = kk_std_core_types__tuple3_box(_x_x4092, _ctx); /*10015*/
            return kk_std_core_types__new_Right(_x_x4091, _ctx);
          }
          {
            kk_integer_drop(m_0, _ctx);
            kk_integer_drop(h_0, _ctx);
            kk_box_t _x_x4093;
            kk_string_t _x_x4094;
            kk_define_string_literal(static, _s_x4095, 14, "invalid second", _ctx)
            _x_x4094 = kk_string_dup(_s_x4095, _ctx); /*string*/
            _x_x4093 = kk_string_box(_x_x4094); /*10014*/
            return kk_std_core_types__new_Left(_x_x4093, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(h_0, _ctx);
          kk_box_t _x_x4096;
          kk_string_t _x_x4097;
          kk_define_string_literal(static, _s_x4098, 14, "invalid minute", _ctx)
          _x_x4097 = kk_string_dup(_s_x4098, _ctx); /*string*/
          _x_x4096 = kk_string_box(_x_x4097); /*10014*/
          return kk_std_core_types__new_Left(_x_x4096, _ctx);
        }
      }
      {
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4099;
        kk_string_t _x_x4100;
        kk_define_string_literal(static, _s_x4101, 12, "invalid hour", _ctx)
        _x_x4100 = kk_string_dup(_s_x4101, _ctx); /*string*/
        _x_x4099 = kk_string_box(_x_x4100); /*10014*/
        return kk_std_core_types__new_Left(_x_x4099, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x303_317;
    kk_string_t _x_x4102;
    kk_define_string_literal(static, _s_x4103, 14, "invalid time: ", _ctx)
    _x_x4102 = kk_string_dup(_s_x4103, _ctx); /*string*/
    _b_x303_317 = kk_std_core_types__lp__plus__plus__rp_(_x_x4102, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x303_317), _ctx);
  }
}

kk_std_core_types__either kk_hml_hc__datetime__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2706;
  kk_integer_t _brw_x2708;
  kk_string_t _x_x4104 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2708 = kk_std_core_string_chars_fs_count(_x_x4104, _ctx); /*int*/
  bool _brw_x2709 = kk_integer_gte_borrow(_brw_x2708,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2708, _ctx);
  _match_x2706 = _brw_x2709; /*bool*/
  if (_match_x2706) {
    bool _match_x2707;
    kk_string_t _x_x4105;
    kk_std_core_types__list _x_x4106;
    kk_std_core_types__list _x_x4107;
    kk_std_core_types__list _x_x4108;
    kk_string_t _x_x4109 = kk_string_dup(s, _ctx); /*string*/
    _x_x4108 = kk_std_core_string_list(_x_x4109, _ctx); /*list<char>*/
    _x_x4107 = kk_std_core_list_drop(_x_x4108, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4110 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
    _x_x4106 = kk_std_core_list_take(_x_x4107, _x_x4110, _ctx); /*list<10001>*/
    _x_x4105 = kk_std_core_string_listchar_fs_string(_x_x4106, _ctx); /*string*/
    _match_x2707 = kk_hml_hc__is__valid__date(_x_x4105, _ctx); /*bool*/
    if (_match_x2707) {
      kk_string_t _b_x318_321;
      kk_std_core_types__list _x_x4111;
      kk_std_core_types__list _x_x4112;
      kk_std_core_types__list _x_x4113 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4112 = kk_std_core_list_drop(_x_x4113, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4114 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4111 = kk_std_core_list_take(_x_x4112, _x_x4114, _ctx); /*list<10001>*/
      _b_x318_321 = kk_std_core_string_listchar_fs_string(_x_x4111, _ctx); /*string*/
      return kk_std_core_types__new_Right(kk_string_box(_b_x318_321), _ctx);
    }
    {
      kk_string_t _b_x319_322;
      kk_string_t _x_x4115;
      kk_define_string_literal(static, _s_x4116, 18, "no valid date in: ", _ctx)
      _x_x4115 = kk_string_dup(_s_x4116, _ctx); /*string*/
      _b_x319_322 = kk_std_core_types__lp__plus__plus__rp_(_x_x4115, s, _ctx); /*string*/
      return kk_std_core_types__new_Left(kk_string_box(_b_x319_322), _ctx);
    }
  }
  {
    kk_string_t _b_x320_323;
    kk_string_t _x_x4117;
    kk_define_string_literal(static, _s_x4118, 18, "no valid date in: ", _ctx)
    _x_x4117 = kk_string_dup(_s_x4118, _ctx); /*string*/
    _b_x320_323 = kk_std_core_types__lp__plus__plus__rp_(_x_x4117, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x320_323), _ctx);
  }
}

kk_string_t kk_hml_hc__strip__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> string */ 
  bool _match_x2691;
  kk_string_t _x_x4119 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x4120;
  kk_define_string_literal(static, _s_x4121, 1, "Z", _ctx)
  _x_x4120 = kk_string_dup(_s_x4121, _ctx); /*string*/
  _match_x2691 = kk_string_contains(_x_x4119,_x_x4120,kk_context()); /*bool*/
  if (_match_x2691) {
    kk_std_core_types__maybe _match_x2702;
    kk_string_t _x_x4122 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4123;
    kk_define_string_literal(static, _s_x4124, 1, "Z", _ctx)
    _x_x4123 = kk_string_dup(_s_x4124, _ctx); /*string*/
    _match_x2702 = kk_std_core_sslice_find(_x_x4122, _x_x4123, _ctx); /*maybe<sslice/sslice>*/
    if (kk_std_core_types__is_Just(_match_x2702, _ctx)) {
      kk_box_t _box_x324 = _match_x2702._cons.Just.value;
      kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x324, KK_BORROWED, _ctx);
      kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
      kk_std_core_types__maybe_drop(_match_x2702, _ctx);
      kk_integer_t i;
      kk_std_core_sslice__sslice _x_x4125;
      {
        kk_string_t s = hc____ss.str;
        kk_integer_t start = hc____ss.start;
        kk_string_dup(s, _ctx);
        kk_integer_dup(start, _ctx);
        kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
        _x_x4125 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
      }
      i = kk_std_core_sslice_count(_x_x4125, _ctx); /*int*/
      kk_std_core_types__list _x_x4126;
      kk_std_core_types__list _x_x4127;
      kk_std_core_types__list _x_x4128 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x4127 = kk_std_core_list_drop(_x_x4128, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4129 = kk_integer_add_small_const(i, 0, _ctx); /*int*/
      _x_x4126 = kk_std_core_list_take(_x_x4127, _x_x4129, _ctx); /*list<10001>*/
      return kk_std_core_string_listchar_fs_string(_x_x4126, _ctx);
    }
    {
      kk_std_core_types__maybe _match_x2703 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
      if (kk_std_core_types__is_Just(_match_x2703, _ctx)) {
        kk_box_t _box_x325 = _match_x2703._cons.Just.value;
        kk_integer_t i_0 = kk_integer_unbox(_box_x325, _ctx);
        kk_integer_dup(i_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2703, _ctx);
        kk_std_core_types__list _x_x4130;
        kk_std_core_types__list _x_x4131;
        kk_std_core_types__list _x_x4132 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4131 = kk_std_core_list_drop(_x_x4132, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4133 = kk_integer_add_small_const(i_0, 0, _ctx); /*int*/
        _x_x4130 = kk_std_core_list_take(_x_x4131, _x_x4133, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4130, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2704;
        kk_string_t _x_x4134 = kk_string_dup(rest, _ctx); /*string*/
        kk_string_t _x_x4135;
        kk_define_string_literal(static, _s_x4136, 1, "z", _ctx)
        _x_x4135 = kk_string_dup(_s_x4136, _ctx); /*string*/
        _match_x2704 = kk_std_core_sslice_find(_x_x4134, _x_x4135, _ctx); /*maybe<sslice/sslice>*/
        if (kk_std_core_types__is_Just(_match_x2704, _ctx)) {
          kk_box_t _box_x326 = _match_x2704._cons.Just.value;
          kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x326, KK_BORROWED, _ctx);
          kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2704, _ctx);
          kk_integer_t i_0_0;
          kk_std_core_sslice__sslice _x_x4137;
          {
            kk_string_t s_0 = hc____ss_0.str;
            kk_integer_t start_0 = hc____ss_0.start;
            kk_string_dup(s_0, _ctx);
            kk_integer_dup(start_0, _ctx);
            kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
            _x_x4137 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
          }
          i_0_0 = kk_std_core_sslice_count(_x_x4137, _ctx); /*int*/
          kk_std_core_types__list _x_x4138;
          kk_std_core_types__list _x_x4139;
          kk_std_core_types__list _x_x4140 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4139 = kk_std_core_list_drop(_x_x4140, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4141 = kk_integer_add_small_const(i_0_0, 0, _ctx); /*int*/
          _x_x4138 = kk_std_core_list_take(_x_x4139, _x_x4141, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4138, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2705 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
          if (kk_std_core_types__is_Just(_match_x2705, _ctx)) {
            kk_box_t _box_x327 = _match_x2705._cons.Just.value;
            kk_integer_t i_0_1 = kk_integer_unbox(_box_x327, _ctx);
            kk_integer_dup(i_0_1, _ctx);
            kk_std_core_types__maybe_drop(_match_x2705, _ctx);
            kk_std_core_types__list _x_x4142;
            kk_std_core_types__list _x_x4143;
            kk_std_core_types__list _x_x4144 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4143 = kk_std_core_list_drop(_x_x4144, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4145 = kk_integer_add_small_const(i_0_1, 0, _ctx); /*int*/
            _x_x4142 = kk_std_core_list_take(_x_x4143, _x_x4145, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4142, _ctx);
          }
          {
            return rest;
          }
        }
      }
    }
  }
  {
    bool _match_x2692;
    kk_string_t _x_x4146 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4147;
    kk_define_string_literal(static, _s_x4148, 1, "z", _ctx)
    _x_x4147 = kk_string_dup(_s_x4148, _ctx); /*string*/
    _match_x2692 = kk_string_contains(_x_x4146,_x_x4147,kk_context()); /*bool*/
    if (_match_x2692) {
      kk_std_core_types__maybe _match_x2698;
      kk_string_t _x_x4149 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x4150;
      kk_define_string_literal(static, _s_x4151, 1, "Z", _ctx)
      _x_x4150 = kk_string_dup(_s_x4151, _ctx); /*string*/
      _match_x2698 = kk_std_core_sslice_find(_x_x4149, _x_x4150, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2698, _ctx)) {
        kk_box_t _box_x328 = _match_x2698._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_1 = kk_std_core_sslice__sslice_unbox(_box_x328, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_1, _ctx);
        kk_std_core_types__maybe_drop(_match_x2698, _ctx);
        kk_integer_t i_1;
        kk_std_core_sslice__sslice _x_x4152;
        {
          kk_string_t s_1 = hc____ss_1.str;
          kk_integer_t start_1 = hc____ss_1.start;
          kk_string_dup(s_1, _ctx);
          kk_integer_dup(start_1, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_1, _ctx);
          _x_x4152 = kk_std_core_sslice__new_Sslice(s_1, kk_integer_from_small(0), start_1, _ctx); /*sslice/sslice*/
        }
        i_1 = kk_std_core_sslice_count(_x_x4152, _ctx); /*int*/
        kk_std_core_types__list _x_x4153;
        kk_std_core_types__list _x_x4154;
        kk_std_core_types__list _x_x4155 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4154 = kk_std_core_list_drop(_x_x4155, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4156 = kk_integer_add_small_const(i_1, 0, _ctx); /*int*/
        _x_x4153 = kk_std_core_list_take(_x_x4154, _x_x4156, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4153, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2699 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2699, _ctx)) {
          kk_box_t _box_x329 = _match_x2699._cons.Just.value;
          kk_integer_t i_2 = kk_integer_unbox(_box_x329, _ctx);
          kk_integer_dup(i_2, _ctx);
          kk_std_core_types__maybe_drop(_match_x2699, _ctx);
          kk_std_core_types__list _x_x4157;
          kk_std_core_types__list _x_x4158;
          kk_std_core_types__list _x_x4159 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4158 = kk_std_core_list_drop(_x_x4159, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4160 = kk_integer_add_small_const(i_2, 0, _ctx); /*int*/
          _x_x4157 = kk_std_core_list_take(_x_x4158, _x_x4160, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4157, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2700;
          kk_string_t _x_x4161 = kk_string_dup(rest, _ctx); /*string*/
          kk_string_t _x_x4162;
          kk_define_string_literal(static, _s_x4163, 1, "z", _ctx)
          _x_x4162 = kk_string_dup(_s_x4163, _ctx); /*string*/
          _match_x2700 = kk_std_core_sslice_find(_x_x4161, _x_x4162, _ctx); /*maybe<sslice/sslice>*/
          if (kk_std_core_types__is_Just(_match_x2700, _ctx)) {
            kk_box_t _box_x330 = _match_x2700._cons.Just.value;
            kk_std_core_sslice__sslice hc____ss_0_0 = kk_std_core_sslice__sslice_unbox(_box_x330, KK_BORROWED, _ctx);
            kk_std_core_sslice__sslice_dup(hc____ss_0_0, _ctx);
            kk_std_core_types__maybe_drop(_match_x2700, _ctx);
            kk_integer_t i_0_2;
            kk_std_core_sslice__sslice _x_x4164;
            {
              kk_string_t s_2 = hc____ss_0_0.str;
              kk_integer_t start_2 = hc____ss_0_0.start;
              kk_string_dup(s_2, _ctx);
              kk_integer_dup(start_2, _ctx);
              kk_std_core_sslice__sslice_drop(hc____ss_0_0, _ctx);
              _x_x4164 = kk_std_core_sslice__new_Sslice(s_2, kk_integer_from_small(0), start_2, _ctx); /*sslice/sslice*/
            }
            i_0_2 = kk_std_core_sslice_count(_x_x4164, _ctx); /*int*/
            kk_std_core_types__list _x_x4165;
            kk_std_core_types__list _x_x4166;
            kk_std_core_types__list _x_x4167 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4166 = kk_std_core_list_drop(_x_x4167, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4168 = kk_integer_add_small_const(i_0_2, 0, _ctx); /*int*/
            _x_x4165 = kk_std_core_list_take(_x_x4166, _x_x4168, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4165, _ctx);
          }
          {
            kk_std_core_types__maybe _match_x2701 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
            if (kk_std_core_types__is_Just(_match_x2701, _ctx)) {
              kk_box_t _box_x331 = _match_x2701._cons.Just.value;
              kk_integer_t i_0_3 = kk_integer_unbox(_box_x331, _ctx);
              kk_integer_dup(i_0_3, _ctx);
              kk_std_core_types__maybe_drop(_match_x2701, _ctx);
              kk_std_core_types__list _x_x4169;
              kk_std_core_types__list _x_x4170;
              kk_std_core_types__list _x_x4171 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
              _x_x4170 = kk_std_core_list_drop(_x_x4171, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x4172 = kk_integer_add_small_const(i_0_3, 0, _ctx); /*int*/
              _x_x4169 = kk_std_core_list_take(_x_x4170, _x_x4172, _ctx); /*list<10001>*/
              return kk_std_core_string_listchar_fs_string(_x_x4169, _ctx);
            }
            {
              return rest;
            }
          }
        }
      }
    }
    {
      bool _match_x2693;
      kk_integer_t _brw_x2696;
      kk_string_t _x_x4173 = kk_string_dup(rest, _ctx); /*string*/
      _brw_x2696 = kk_std_core_string_chars_fs_count(_x_x4173, _ctx); /*int*/
      bool _brw_x2697 = kk_integer_gte_borrow(_brw_x2696,(kk_integer_from_small(11)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2696, _ctx);
      _match_x2693 = _brw_x2697; /*bool*/
      if (_match_x2693) {
        kk_integer_t x_9_10361;
        kk_string_t _x_x4174 = kk_string_dup(rest, _ctx); /*string*/
        x_9_10361 = kk_std_core_string_chars_fs_count(_x_x4174, _ctx); /*int*/
        kk_integer_t x_8_10359 = kk_integer_add_small_const(x_9_10361, -5, _ctx); /*int*/;
        kk_integer_t x_10_10363;
        kk_string_t _x_x4175 = kk_string_dup(rest, _ctx); /*string*/
        x_10_10363 = kk_std_core_string_chars_fs_count(_x_x4175, _ctx); /*int*/
        kk_integer_t y_8_10360 = kk_integer_add_small_const(x_10_10363, -6, _ctx); /*int*/;
        kk_integer_t x_7_10357;
        kk_string_t _x_x4176 = kk_string_dup(rest, _ctx); /*string*/
        x_7_10357 = kk_std_core_string_chars_fs_count(_x_x4176, _ctx); /*int*/
        bool _match_x2694;
        kk_string_t _x_x4177;
        kk_std_core_types__list _x_x4178;
        kk_std_core_types__list _x_x4179;
        kk_std_core_types__list _x_x4180;
        kk_string_t _x_x4181 = kk_string_dup(rest, _ctx); /*string*/
        _x_x4180 = kk_std_core_string_list(_x_x4181, _ctx); /*list<char>*/
        kk_integer_t _x_x4182 = kk_integer_add_small_const(x_7_10357, -6, _ctx); /*int*/
        _x_x4179 = kk_std_core_list_drop(_x_x4180, _x_x4182, _ctx); /*list<10001>*/
        kk_integer_t _x_x4183 = kk_integer_sub(x_8_10359,y_8_10360,kk_context()); /*int*/
        _x_x4178 = kk_std_core_list_take(_x_x4179, _x_x4183, _ctx); /*list<10001>*/
        _x_x4177 = kk_std_core_string_listchar_fs_string(_x_x4178, _ctx); /*string*/
        kk_string_t _x_x4184;
        kk_define_string_literal(static, _s_x4185, 1, "+", _ctx)
        _x_x4184 = kk_string_dup(_s_x4185, _ctx); /*string*/
        _match_x2694 = kk_string_is_eq(_x_x4177,_x_x4184,kk_context()); /*bool*/
        if (_match_x2694) {
          kk_integer_t x_12_10367;
          kk_string_t _x_x4186 = kk_string_dup(rest, _ctx); /*string*/
          x_12_10367 = kk_std_core_string_chars_fs_count(_x_x4186, _ctx); /*int*/
          kk_integer_t x_11_10365 = kk_integer_add_small_const(x_12_10367, -6, _ctx); /*int*/;
          kk_std_core_types__list _x_x4187;
          kk_std_core_types__list _x_x4188;
          kk_std_core_types__list _x_x4189 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4188 = kk_std_core_list_drop(_x_x4189, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4190 = kk_integer_add_small_const(x_11_10365, 0, _ctx); /*int*/
          _x_x4187 = kk_std_core_list_take(_x_x4188, _x_x4190, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4187, _ctx);
        }
        {
          kk_integer_t x_15_10373;
          kk_string_t _x_x4191 = kk_string_dup(rest, _ctx); /*string*/
          x_15_10373 = kk_std_core_string_chars_fs_count(_x_x4191, _ctx); /*int*/
          kk_integer_t x_14_10371 = kk_integer_add_small_const(x_15_10373, -5, _ctx); /*int*/;
          kk_integer_t x_16_10375;
          kk_string_t _x_x4192 = kk_string_dup(rest, _ctx); /*string*/
          x_16_10375 = kk_std_core_string_chars_fs_count(_x_x4192, _ctx); /*int*/
          kk_integer_t y_14_10372 = kk_integer_add_small_const(x_16_10375, -6, _ctx); /*int*/;
          kk_integer_t x_13_10369;
          kk_string_t _x_x4193 = kk_string_dup(rest, _ctx); /*string*/
          x_13_10369 = kk_std_core_string_chars_fs_count(_x_x4193, _ctx); /*int*/
          bool _match_x2695;
          kk_string_t _x_x4194;
          kk_std_core_types__list _x_x4195;
          kk_std_core_types__list _x_x4196;
          kk_std_core_types__list _x_x4197;
          kk_string_t _x_x4198 = kk_string_dup(rest, _ctx); /*string*/
          _x_x4197 = kk_std_core_string_list(_x_x4198, _ctx); /*list<char>*/
          kk_integer_t _x_x4199 = kk_integer_add_small_const(x_13_10369, -6, _ctx); /*int*/
          _x_x4196 = kk_std_core_list_drop(_x_x4197, _x_x4199, _ctx); /*list<10001>*/
          kk_integer_t _x_x4200 = kk_integer_sub(x_14_10371,y_14_10372,kk_context()); /*int*/
          _x_x4195 = kk_std_core_list_take(_x_x4196, _x_x4200, _ctx); /*list<10001>*/
          _x_x4194 = kk_std_core_string_listchar_fs_string(_x_x4195, _ctx); /*string*/
          kk_string_t _x_x4201;
          kk_define_string_literal(static, _s_x4202, 1, "-", _ctx)
          _x_x4201 = kk_string_dup(_s_x4202, _ctx); /*string*/
          _match_x2695 = kk_string_is_eq(_x_x4194,_x_x4201,kk_context()); /*bool*/
          if (_match_x2695) {
            kk_integer_t x_18_10379;
            kk_string_t _x_x4203 = kk_string_dup(rest, _ctx); /*string*/
            x_18_10379 = kk_std_core_string_chars_fs_count(_x_x4203, _ctx); /*int*/
            kk_integer_t x_17_10377 = kk_integer_add_small_const(x_18_10379, -6, _ctx); /*int*/;
            kk_std_core_types__list _x_x4204;
            kk_std_core_types__list _x_x4205;
            kk_std_core_types__list _x_x4206 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4205 = kk_std_core_list_drop(_x_x4206, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4207 = kk_integer_add_small_const(x_17_10377, 0, _ctx); /*int*/
            _x_x4204 = kk_std_core_list_take(_x_x4205, _x_x4207, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4204, _ctx);
          }
          {
            return rest;
          }
        }
      }
      {
        return rest;
      }
    }
  }
}

kk_std_core_types__either kk_hml_hc__datetime__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2682;
  kk_integer_t _brw_x2689;
  kk_string_t _x_x4208 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2689 = kk_std_core_string_chars_fs_count(_x_x4208, _ctx); /*int*/
  bool _brw_x2690 = kk_integer_lt_borrow(_brw_x2689,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2689, _ctx);
  _match_x2682 = _brw_x2690; /*bool*/
  if (_match_x2682) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4209;
    kk_string_t _x_x4210;
    kk_define_string_literal(static, _s_x4211, 29, "string too short for datetime", _ctx)
    _x_x4210 = kk_string_dup(_s_x4211, _ctx); /*string*/
    _x_x4209 = kk_string_box(_x_x4210); /*10014*/
    return kk_std_core_types__new_Left(_x_x4209, _ctx);
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4212;
    kk_std_core_types__list _x_x4213;
    kk_std_core_types__list _x_x4214;
    kk_string_t _x_x4215 = kk_string_dup(s, _ctx); /*string*/
    _x_x4214 = kk_std_core_string_list(_x_x4215, _ctx); /*list<char>*/
    _x_x4213 = kk_std_core_list_drop(_x_x4214, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4216 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4212 = kk_std_core_list_take(_x_x4213, _x_x4216, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4212, _ctx); /*string*/
    bool _match_x2683;
    kk_string_t _x_x4217 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4218;
    kk_define_string_literal(static, _s_x4219, 1, "T", _ctx)
    _x_x4218 = kk_string_dup(_s_x4219, _ctx); /*string*/
    _match_x2683 = kk_string_is_neq(_x_x4217,_x_x4218,kk_context()); /*bool*/
    if (_match_x2683) {
      bool _match_x2685;
      kk_string_t _x_x4220 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4221;
      kk_define_string_literal(static, _s_x4222, 1, "t", _ctx)
      _x_x4221 = kk_string_dup(_s_x4222, _ctx); /*string*/
      _match_x2685 = kk_string_is_neq(_x_x4220,_x_x4221,kk_context()); /*bool*/
      if (_match_x2685) {
        bool _match_x2687;
        kk_string_t _x_x4223;
        kk_define_string_literal(static, _s_x4224, 1, " ", _ctx)
        _x_x4223 = kk_string_dup(_s_x4224, _ctx); /*string*/
        _match_x2687 = kk_string_is_neq(sep,_x_x4223,kk_context()); /*bool*/
        if (_match_x2687) {
          kk_string_drop(s, _ctx);
          kk_box_t _x_x4225;
          kk_string_t _x_x4226;
          kk_define_string_literal(static, _s_x4227, 27, "no datetime separator found", _ctx)
          _x_x4226 = kk_string_dup(_s_x4227, _ctx); /*string*/
          _x_x4225 = kk_string_box(_x_x4226); /*10014*/
          return kk_std_core_types__new_Left(_x_x4225, _ctx);
        }
        {
          kk_string_t time__part;
          kk_string_t _x_x4228;
          kk_std_core_types__list _x_x4229;
          kk_std_core_types__list _x_x4230 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4229 = kk_std_core_list_drop(_x_x4230, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4228 = kk_std_core_string_listchar_fs_string(_x_x4229, _ctx); /*string*/
          time__part = kk_hml_hc__strip__offset(_x_x4228, _ctx); /*string*/
          bool _match_x2688;
          kk_string_t _x_x4231 = kk_string_dup(time__part, _ctx); /*string*/
          _match_x2688 = kk_hml_hc__is__valid__time(_x_x4231, _ctx); /*bool*/
          if (_match_x2688) {
            return kk_std_core_types__new_Right(kk_string_box(time__part), _ctx);
          }
          {
            kk_string_drop(time__part, _ctx);
            kk_box_t _x_x4232;
            kk_string_t _x_x4233;
            kk_define_string_literal(static, _s_x4234, 20, "invalid time portion", _ctx)
            _x_x4233 = kk_string_dup(_s_x4234, _ctx); /*string*/
            _x_x4232 = kk_string_box(_x_x4233); /*10014*/
            return kk_std_core_types__new_Left(_x_x4232, _ctx);
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        kk_string_t time__part_0;
        kk_string_t _x_x4235;
        kk_std_core_types__list _x_x4236;
        kk_std_core_types__list _x_x4237 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4236 = kk_std_core_list_drop(_x_x4237, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4235 = kk_std_core_string_listchar_fs_string(_x_x4236, _ctx); /*string*/
        time__part_0 = kk_hml_hc__strip__offset(_x_x4235, _ctx); /*string*/
        bool _match_x2686;
        kk_string_t _x_x4238 = kk_string_dup(time__part_0, _ctx); /*string*/
        _match_x2686 = kk_hml_hc__is__valid__time(_x_x4238, _ctx); /*bool*/
        if (_match_x2686) {
          return kk_std_core_types__new_Right(kk_string_box(time__part_0), _ctx);
        }
        {
          kk_string_drop(time__part_0, _ctx);
          kk_box_t _x_x4239;
          kk_string_t _x_x4240;
          kk_define_string_literal(static, _s_x4241, 20, "invalid time portion", _ctx)
          _x_x4240 = kk_string_dup(_s_x4241, _ctx); /*string*/
          _x_x4239 = kk_string_box(_x_x4240); /*10014*/
          return kk_std_core_types__new_Left(_x_x4239, _ctx);
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      kk_string_t time__part_1;
      kk_string_t _x_x4242;
      kk_std_core_types__list _x_x4243;
      kk_std_core_types__list _x_x4244 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4243 = kk_std_core_list_drop(_x_x4244, kk_integer_from_small(11), _ctx); /*list<10001>*/
      _x_x4242 = kk_std_core_string_listchar_fs_string(_x_x4243, _ctx); /*string*/
      time__part_1 = kk_hml_hc__strip__offset(_x_x4242, _ctx); /*string*/
      bool _match_x2684;
      kk_string_t _x_x4245 = kk_string_dup(time__part_1, _ctx); /*string*/
      _match_x2684 = kk_hml_hc__is__valid__time(_x_x4245, _ctx); /*bool*/
      if (_match_x2684) {
        return kk_std_core_types__new_Right(kk_string_box(time__part_1), _ctx);
      }
      {
        kk_string_drop(time__part_1, _ctx);
        kk_box_t _x_x4246;
        kk_string_t _x_x4247;
        kk_define_string_literal(static, _s_x4248, 20, "invalid time portion", _ctx)
        _x_x4247 = kk_string_dup(_s_x4248, _ctx); /*string*/
        _x_x4246 = kk_string_box(_x_x4247); /*10014*/
        return kk_std_core_types__new_Left(_x_x4246, _ctx);
      }
    }
  }
}

kk_std_core_types__maybe kk_hml_hc__datetime__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> maybe<string> */ 
  bool _match_x2673;
  kk_string_t _x_x4249 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4250;
  kk_define_string_literal(static, _s_x4251, 1, "Z", _ctx)
  _x_x4250 = kk_string_dup(_s_x4251, _ctx); /*string*/
  _match_x2673 = kk_string_contains(_x_x4249,_x_x4250,kk_context()); /*bool*/
  if (_match_x2673) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4252;
    kk_string_t _x_x4253;
    kk_define_string_literal(static, _s_x4254, 1, "Z", _ctx)
    _x_x4253 = kk_string_dup(_s_x4254, _ctx); /*string*/
    _x_x4252 = kk_string_box(_x_x4253); /*10024*/
    return kk_std_core_types__new_Just(_x_x4252, _ctx);
  }
  {
    bool _match_x2674;
    kk_string_t _x_x4255 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4256;
    kk_define_string_literal(static, _s_x4257, 1, "z", _ctx)
    _x_x4256 = kk_string_dup(_s_x4257, _ctx); /*string*/
    _match_x2674 = kk_string_contains(_x_x4255,_x_x4256,kk_context()); /*bool*/
    if (_match_x2674) {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4258;
      kk_string_t _x_x4259;
      kk_define_string_literal(static, _s_x4260, 1, "Z", _ctx)
      _x_x4259 = kk_string_dup(_s_x4260, _ctx); /*string*/
      _x_x4258 = kk_string_box(_x_x4259); /*10024*/
      return kk_std_core_types__new_Just(_x_x4258, _ctx);
    }
    {
      bool _match_x2675;
      kk_integer_t _brw_x2680;
      kk_string_t _x_x4261 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2680 = kk_std_core_string_chars_fs_count(_x_x4261, _ctx); /*int*/
      bool _brw_x2681 = kk_integer_gte_borrow(_brw_x2680,(kk_integer_from_small(22)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2680, _ctx);
      _match_x2675 = _brw_x2681; /*bool*/
      if (_match_x2675) {
        kk_integer_t x_1_10387;
        kk_string_t _x_x4262 = kk_string_dup(s, _ctx); /*string*/
        x_1_10387 = kk_std_core_string_chars_fs_count(_x_x4262, _ctx); /*int*/
        kk_integer_t x_0_10385 = kk_integer_add_small_const(x_1_10387, -5, _ctx); /*int*/;
        kk_integer_t x_2_10389;
        kk_string_t _x_x4263 = kk_string_dup(s, _ctx); /*string*/
        x_2_10389 = kk_std_core_string_chars_fs_count(_x_x4263, _ctx); /*int*/
        kk_integer_t y_0_10386 = kk_integer_add_small_const(x_2_10389, -6, _ctx); /*int*/;
        kk_integer_t x_10383;
        kk_string_t _x_x4264 = kk_string_dup(s, _ctx); /*string*/
        x_10383 = kk_std_core_string_chars_fs_count(_x_x4264, _ctx); /*int*/
        bool _match_x2676;
        kk_string_t _x_x4265;
        kk_std_core_types__list _x_x4266;
        kk_std_core_types__list _x_x4267;
        kk_std_core_types__list _x_x4268;
        kk_string_t _x_x4269 = kk_string_dup(s, _ctx); /*string*/
        _x_x4268 = kk_std_core_string_list(_x_x4269, _ctx); /*list<char>*/
        kk_integer_t _x_x4270 = kk_integer_add_small_const(x_10383, -6, _ctx); /*int*/
        _x_x4267 = kk_std_core_list_drop(_x_x4268, _x_x4270, _ctx); /*list<10001>*/
        kk_integer_t _x_x4271 = kk_integer_sub(x_0_10385,y_0_10386,kk_context()); /*int*/
        _x_x4266 = kk_std_core_list_take(_x_x4267, _x_x4271, _ctx); /*list<10001>*/
        _x_x4265 = kk_std_core_string_listchar_fs_string(_x_x4266, _ctx); /*string*/
        kk_string_t _x_x4272;
        kk_define_string_literal(static, _s_x4273, 1, "+", _ctx)
        _x_x4272 = kk_string_dup(_s_x4273, _ctx); /*string*/
        _match_x2676 = kk_string_is_eq(_x_x4265,_x_x4272,kk_context()); /*bool*/
        if (_match_x2676) {
          kk_integer_t x_3_10391;
          kk_string_t _x_x4274 = kk_string_dup(s, _ctx); /*string*/
          x_3_10391 = kk_std_core_string_chars_fs_count(_x_x4274, _ctx); /*int*/
          kk_string_t o;
          kk_std_core_types__list _x_x4275;
          kk_std_core_types__list _x_x4276 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          kk_integer_t _x_x4277 = kk_integer_add_small_const(x_3_10391, -6, _ctx); /*int*/
          _x_x4275 = kk_std_core_list_drop(_x_x4276, _x_x4277, _ctx); /*list<10001>*/
          o = kk_std_core_string_listchar_fs_string(_x_x4275, _ctx); /*string*/
          bool _match_x2679;
          kk_string_t _x_x4278 = kk_string_dup(o, _ctx); /*string*/
          _match_x2679 = kk_hml_hc__is__valid__offset(_x_x4278, _ctx); /*bool*/
          if (_match_x2679) {
            return kk_std_core_types__new_Just(kk_string_box(o), _ctx);
          }
          {
            kk_string_drop(o, _ctx);
            return kk_std_core_types__new_Nothing(_ctx);
          }
        }
        {
          kk_integer_t x_6_10397;
          kk_string_t _x_x4279 = kk_string_dup(s, _ctx); /*string*/
          x_6_10397 = kk_std_core_string_chars_fs_count(_x_x4279, _ctx); /*int*/
          kk_integer_t x_5_10395 = kk_integer_add_small_const(x_6_10397, -5, _ctx); /*int*/;
          kk_integer_t x_7_10399;
          kk_string_t _x_x4280 = kk_string_dup(s, _ctx); /*string*/
          x_7_10399 = kk_std_core_string_chars_fs_count(_x_x4280, _ctx); /*int*/
          kk_integer_t y_5_10396 = kk_integer_add_small_const(x_7_10399, -6, _ctx); /*int*/;
          kk_integer_t x_4_10393;
          kk_string_t _x_x4281 = kk_string_dup(s, _ctx); /*string*/
          x_4_10393 = kk_std_core_string_chars_fs_count(_x_x4281, _ctx); /*int*/
          bool _match_x2677;
          kk_string_t _x_x4282;
          kk_std_core_types__list _x_x4283;
          kk_std_core_types__list _x_x4284;
          kk_std_core_types__list _x_x4285;
          kk_string_t _x_x4286 = kk_string_dup(s, _ctx); /*string*/
          _x_x4285 = kk_std_core_string_list(_x_x4286, _ctx); /*list<char>*/
          kk_integer_t _x_x4287 = kk_integer_add_small_const(x_4_10393, -6, _ctx); /*int*/
          _x_x4284 = kk_std_core_list_drop(_x_x4285, _x_x4287, _ctx); /*list<10001>*/
          kk_integer_t _x_x4288 = kk_integer_sub(x_5_10395,y_5_10396,kk_context()); /*int*/
          _x_x4283 = kk_std_core_list_take(_x_x4284, _x_x4288, _ctx); /*list<10001>*/
          _x_x4282 = kk_std_core_string_listchar_fs_string(_x_x4283, _ctx); /*string*/
          kk_string_t _x_x4289;
          kk_define_string_literal(static, _s_x4290, 1, "-", _ctx)
          _x_x4289 = kk_string_dup(_s_x4290, _ctx); /*string*/
          _match_x2677 = kk_string_is_eq(_x_x4282,_x_x4289,kk_context()); /*bool*/
          if (_match_x2677) {
            kk_integer_t x_8_10401;
            kk_string_t _x_x4291 = kk_string_dup(s, _ctx); /*string*/
            x_8_10401 = kk_std_core_string_chars_fs_count(_x_x4291, _ctx); /*int*/
            kk_string_t o_0;
            kk_std_core_types__list _x_x4292;
            kk_std_core_types__list _x_x4293 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            kk_integer_t _x_x4294 = kk_integer_add_small_const(x_8_10401, -6, _ctx); /*int*/
            _x_x4292 = kk_std_core_list_drop(_x_x4293, _x_x4294, _ctx); /*list<10001>*/
            o_0 = kk_std_core_string_listchar_fs_string(_x_x4292, _ctx); /*string*/
            bool _match_x2678;
            kk_string_t _x_x4295 = kk_string_dup(o_0, _ctx); /*string*/
            _match_x2678 = kk_hml_hc__is__valid__offset(_x_x4295, _ctx); /*bool*/
            if (_match_x2678) {
              return kk_std_core_types__new_Just(kk_string_box(o_0), _ctx);
            }
            {
              kk_string_drop(o_0, _ctx);
              return kk_std_core_types__new_Nothing(_ctx);
            }
          }
          {
            kk_string_drop(s, _ctx);
            return kk_std_core_types__new_Nothing(_ctx);
          }
        }
      }
      {
        kk_string_drop(s, _ctx);
        return kk_std_core_types__new_Nothing(_ctx);
      }
    }
  }
}

kk_string_t kk_hml_hc__datetime__kind(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2664;
  kk_string_t _x_x4296 = kk_string_dup(s, _ctx); /*string*/
  _match_x2664 = kk_hml_hc__is__valid__time(_x_x4296, _ctx); /*bool*/
  if (_match_x2664) {
    kk_string_drop(s, _ctx);
    kk_define_string_literal(static, _s_x4297, 10, "local-time", _ctx)
    return kk_string_dup(_s_x4297, _ctx);
  }
  {
    bool _match_x2665;
    kk_string_t _x_x4298 = kk_string_dup(s, _ctx); /*string*/
    _match_x2665 = kk_hml_hc__is__valid__date(_x_x4298, _ctx); /*bool*/
    if (_match_x2665) {
      bool _match_x2668;
      kk_integer_t _brw_x2671;
      kk_string_t _x_x4299 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2671 = kk_std_core_string_chars_fs_count(_x_x4299, _ctx); /*int*/
      bool _brw_x2672 = kk_integer_eq_borrow(_brw_x2671,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2671, _ctx);
      _match_x2668 = _brw_x2672; /*bool*/
      if (_match_x2668) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4300, 10, "local-date", _ctx)
        return kk_string_dup(_s_x4300, _ctx);
      }
      {
        bool _match_x2669;
        kk_string_t _x_x4301 = kk_string_dup(s, _ctx); /*string*/
        _match_x2669 = kk_hml_hc__is__iso__datetime(_x_x4301, _ctx); /*bool*/
        if (_match_x2669) {
          kk_string_drop(s, _ctx);
          kk_define_string_literal(static, _s_x4302, 15, "offset-datetime", _ctx)
          return kk_string_dup(_s_x4302, _ctx);
        }
        {
          bool _match_x2670 = kk_hml_hc__is__local__datetime(s, _ctx); /*bool*/;
          if (_match_x2670) {
            kk_define_string_literal(static, _s_x4303, 14, "local-datetime", _ctx)
            return kk_string_dup(_s_x4303, _ctx);
          }
          {
            kk_define_string_literal(static, _s_x4304, 7, "invalid", _ctx)
            return kk_string_dup(_s_x4304, _ctx);
          }
        }
      }
    }
    {
      bool _match_x2666;
      kk_string_t _x_x4305 = kk_string_dup(s, _ctx); /*string*/
      _match_x2666 = kk_hml_hc__is__iso__datetime(_x_x4305, _ctx); /*bool*/
      if (_match_x2666) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4306, 15, "offset-datetime", _ctx)
        return kk_string_dup(_s_x4306, _ctx);
      }
      {
        bool _match_x2667 = kk_hml_hc__is__local__datetime(s, _ctx); /*bool*/;
        if (_match_x2667) {
          kk_define_string_literal(static, _s_x4307, 14, "local-datetime", _ctx)
          return kk_string_dup(_s_x4307, _ctx);
        }
        {
          kk_define_string_literal(static, _s_x4308, 7, "invalid", _ctx)
          return kk_string_dup(_s_x4308, _ctx);
        }
      }
    }
  }
}

kk_integer_t kk_hml_hc__date__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10405;
  kk_string_t _x_x4309 = kk_string_dup(d1, _ctx); /*string*/
  b_10405 = kk_hml_hc__is__valid__date(_x_x4309, _ctx); /*bool*/
  if (b_10405) {
    bool b_0_10406;
    kk_string_t _x_x4310 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10406 = kk_hml_hc__is__valid__date(_x_x4310, _ctx); /*bool*/
    if (b_0_10406) {
      bool _match_x2661;
      kk_std_core_types__order _x_x4311 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2661 = kk_std_core_order__lp__eq__eq__rp_(_x_x4311, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2661) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2662;
        kk_std_core_types__order _x_x4312;
        kk_std_core_types__order _brw_x2663 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4312 = _brw_x2663; /*order*/
        _match_x2662 = kk_std_core_order__lp__eq__eq__rp_(_x_x4312, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2662) {
          return kk_integer_from_small(1);
        }
        {
          return kk_integer_from_small(0);
        }
      }
    }
    {
      kk_string_drop(d2, _ctx);
      kk_string_drop(d1, _ctx);
      return kk_integer_from_small(0);
    }
  }
  {
    kk_string_drop(d2, _ctx);
    kk_string_drop(d1, _ctx);
    return kk_integer_from_small(0);
  }
}

kk_integer_t kk_hml_hc__time__cmp(kk_string_t t1, kk_string_t t2, kk_context_t* _ctx) { /* (t1 : string, t2 : string) -> int */ 
  bool b_10413;
  kk_string_t _x_x4313 = kk_string_dup(t1, _ctx); /*string*/
  b_10413 = kk_hml_hc__is__valid__time(_x_x4313, _ctx); /*bool*/
  if (b_10413) {
    bool b_0_10414;
    kk_string_t _x_x4314 = kk_string_dup(t2, _ctx); /*string*/
    b_0_10414 = kk_hml_hc__is__valid__time(_x_x4314, _ctx); /*bool*/
    if (b_0_10414) {
      bool _match_x2658;
      kk_std_core_types__order _x_x4315 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/
      _match_x2658 = kk_std_core_order__lp__eq__eq__rp_(_x_x4315, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2658) {
        kk_string_drop(t2, _ctx);
        kk_string_drop(t1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2659;
        kk_std_core_types__order _x_x4316;
        kk_std_core_types__order _brw_x2660 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/;
        kk_string_drop(t1, _ctx);
        kk_string_drop(t2, _ctx);
        _x_x4316 = _brw_x2660; /*order*/
        _match_x2659 = kk_std_core_order__lp__eq__eq__rp_(_x_x4316, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2659) {
          return kk_integer_from_small(1);
        }
        {
          return kk_integer_from_small(0);
        }
      }
    }
    {
      kk_string_drop(t2, _ctx);
      kk_string_drop(t1, _ctx);
      return kk_integer_from_small(0);
    }
  }
  {
    kk_string_drop(t2, _ctx);
    kk_string_drop(t1, _ctx);
    return kk_integer_from_small(0);
  }
}

kk_integer_t kk_hml_hc__datetime__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10421;
  kk_string_t _x_x4317 = kk_string_dup(d1, _ctx); /*string*/
  b_10421 = kk_hml_hc__is__local__datetime(_x_x4317, _ctx); /*bool*/
  if (b_10421) {
    bool b_0_10422;
    kk_string_t _x_x4318 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10422 = kk_hml_hc__is__local__datetime(_x_x4318, _ctx); /*bool*/
    if (b_0_10422) {
      bool _match_x2655;
      kk_std_core_types__order _x_x4319 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2655 = kk_std_core_order__lp__eq__eq__rp_(_x_x4319, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2655) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2656;
        kk_std_core_types__order _x_x4320;
        kk_std_core_types__order _brw_x2657 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4320 = _brw_x2657; /*order*/
        _match_x2656 = kk_std_core_order__lp__eq__eq__rp_(_x_x4320, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2656) {
          return kk_integer_from_small(1);
        }
        {
          return kk_integer_from_small(0);
        }
      }
    }
    {
      kk_string_drop(d2, _ctx);
      kk_string_drop(d1, _ctx);
      return kk_integer_from_small(0);
    }
  }
  {
    kk_string_drop(d2, _ctx);
    kk_string_drop(d1, _ctx);
    return kk_integer_from_small(0);
  }
}

bool kk_hml_hc__is__before(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> bool */ 
  bool _match_x2634;
  kk_string_t _x_x4321 = kk_string_dup(d1, _ctx); /*string*/
  _match_x2634 = kk_hml_hc__is__valid__date(_x_x4321, _ctx); /*bool*/
  if (_match_x2634) {
    bool _match_x2644;
    kk_string_t _x_x4322 = kk_string_dup(d2, _ctx); /*string*/
    _match_x2644 = kk_hml_hc__is__valid__date(_x_x4322, _ctx); /*bool*/
    if (_match_x2644) {
      kk_std_core_types__order _x_x4323;
      kk_std_core_types__order _brw_x2654 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
      kk_string_drop(d1, _ctx);
      kk_string_drop(d2, _ctx);
      _x_x4323 = _brw_x2654; /*order*/
      return kk_std_core_order__lp__eq__eq__rp_(_x_x4323, kk_std_core_types__new_Lt(_ctx), _ctx);
    }
    {
      bool _match_x2645;
      kk_string_t _x_x4324 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2645 = kk_hml_hc__is__local__datetime(_x_x4324, _ctx); /*bool*/
      if (_match_x2645) {
        bool _match_x2649;
        kk_string_t _x_x4325 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2649 = kk_hml_hc__is__local__datetime(_x_x4325, _ctx); /*bool*/
        if (_match_x2649) {
          kk_std_core_types__order _x_x4326;
          kk_std_core_types__order _brw_x2653 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4326 = _brw_x2653; /*order*/
          return kk_std_core_order__lp__eq__eq__rp_(_x_x4326, kk_std_core_types__new_Lt(_ctx), _ctx);
        }
        {
          bool _match_x2650;
          kk_string_t _x_x4327 = kk_string_dup(d1, _ctx); /*string*/
          _match_x2650 = kk_hml_hc__is__valid__time(_x_x4327, _ctx); /*bool*/
          if (_match_x2650) {
            bool _match_x2651;
            kk_string_t _x_x4328 = kk_string_dup(d2, _ctx); /*string*/
            _match_x2651 = kk_hml_hc__is__valid__time(_x_x4328, _ctx); /*bool*/
            if (_match_x2651) {
              kk_std_core_types__order _x_x4329;
              kk_std_core_types__order _brw_x2652 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
              kk_string_drop(d1, _ctx);
              kk_string_drop(d2, _ctx);
              _x_x4329 = _brw_x2652; /*order*/
              return kk_std_core_order__lp__eq__eq__rp_(_x_x4329, kk_std_core_types__new_Lt(_ctx), _ctx);
            }
            {
              kk_string_drop(d2, _ctx);
              kk_string_drop(d1, _ctx);
              return false;
            }
          }
          {
            kk_string_drop(d2, _ctx);
            kk_string_drop(d1, _ctx);
            return false;
          }
        }
      }
      {
        bool _match_x2646;
        kk_string_t _x_x4330 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2646 = kk_hml_hc__is__valid__time(_x_x4330, _ctx); /*bool*/
        if (_match_x2646) {
          bool _match_x2647;
          kk_string_t _x_x4331 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2647 = kk_hml_hc__is__valid__time(_x_x4331, _ctx); /*bool*/
          if (_match_x2647) {
            kk_std_core_types__order _x_x4332;
            kk_std_core_types__order _brw_x2648 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4332 = _brw_x2648; /*order*/
            return kk_std_core_order__lp__eq__eq__rp_(_x_x4332, kk_std_core_types__new_Lt(_ctx), _ctx);
          }
          {
            kk_string_drop(d2, _ctx);
            kk_string_drop(d1, _ctx);
            return false;
          }
        }
        {
          kk_string_drop(d2, _ctx);
          kk_string_drop(d1, _ctx);
          return false;
        }
      }
    }
  }
  {
    bool _match_x2635;
    kk_string_t _x_x4333 = kk_string_dup(d1, _ctx); /*string*/
    _match_x2635 = kk_hml_hc__is__local__datetime(_x_x4333, _ctx); /*bool*/
    if (_match_x2635) {
      bool _match_x2639;
      kk_string_t _x_x4334 = kk_string_dup(d2, _ctx); /*string*/
      _match_x2639 = kk_hml_hc__is__local__datetime(_x_x4334, _ctx); /*bool*/
      if (_match_x2639) {
        kk_std_core_types__order _x_x4335;
        kk_std_core_types__order _brw_x2643 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4335 = _brw_x2643; /*order*/
        return kk_std_core_order__lp__eq__eq__rp_(_x_x4335, kk_std_core_types__new_Lt(_ctx), _ctx);
      }
      {
        bool _match_x2640;
        kk_string_t _x_x4336 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2640 = kk_hml_hc__is__valid__time(_x_x4336, _ctx); /*bool*/
        if (_match_x2640) {
          bool _match_x2641;
          kk_string_t _x_x4337 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2641 = kk_hml_hc__is__valid__time(_x_x4337, _ctx); /*bool*/
          if (_match_x2641) {
            kk_std_core_types__order _x_x4338;
            kk_std_core_types__order _brw_x2642 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4338 = _brw_x2642; /*order*/
            return kk_std_core_order__lp__eq__eq__rp_(_x_x4338, kk_std_core_types__new_Lt(_ctx), _ctx);
          }
          {
            kk_string_drop(d2, _ctx);
            kk_string_drop(d1, _ctx);
            return false;
          }
        }
        {
          kk_string_drop(d2, _ctx);
          kk_string_drop(d1, _ctx);
          return false;
        }
      }
    }
    {
      bool _match_x2636;
      kk_string_t _x_x4339 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2636 = kk_hml_hc__is__valid__time(_x_x4339, _ctx); /*bool*/
      if (_match_x2636) {
        bool _match_x2637;
        kk_string_t _x_x4340 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2637 = kk_hml_hc__is__valid__time(_x_x4340, _ctx); /*bool*/
        if (_match_x2637) {
          kk_std_core_types__order _x_x4341;
          kk_std_core_types__order _brw_x2638 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4341 = _brw_x2638; /*order*/
          return kk_std_core_order__lp__eq__eq__rp_(_x_x4341, kk_std_core_types__new_Lt(_ctx), _ctx);
        }
        {
          kk_string_drop(d2, _ctx);
          kk_string_drop(d1, _ctx);
          return false;
        }
      }
      {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return false;
      }
    }
  }
}

kk_std_core_types__either kk_hml_hc__offset__to__minutes(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,int> */ 
  bool _match_x2627;
  kk_string_t _x_x4342 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4343;
  kk_define_string_literal(static, _s_x4344, 1, "Z", _ctx)
  _x_x4343 = kk_string_dup(_s_x4344, _ctx); /*string*/
  _match_x2627 = kk_string_is_eq(_x_x4342,_x_x4343,kk_context()); /*bool*/
  if (_match_x2627) {
    kk_string_drop(s, _ctx);
    return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
  }
  {
    bool _match_x2628;
    kk_string_t _x_x4345 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4346;
    kk_define_string_literal(static, _s_x4347, 1, "z", _ctx)
    _x_x4346 = kk_string_dup(_s_x4347, _ctx); /*string*/
    _match_x2628 = kk_string_is_eq(_x_x4345,_x_x4346,kk_context()); /*bool*/
    if (_match_x2628) {
      kk_string_drop(s, _ctx);
      return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
    }
    {
      bool b_10443;
      kk_string_t _x_x4348 = kk_string_dup(s, _ctx); /*string*/
      b_10443 = kk_hml_hc__is__valid__offset(_x_x4348, _ctx); /*bool*/
      if (b_10443) {
        kk_integer_t hc__sign_0;
        bool _match_x2633;
        kk_string_t _x_x4349;
        kk_std_core_types__list _x_x4350;
        kk_std_core_types__list _x_x4351;
        kk_std_core_types__list _x_x4352;
        kk_string_t _x_x4353 = kk_string_dup(s, _ctx); /*string*/
        _x_x4352 = kk_std_core_string_list(_x_x4353, _ctx); /*list<char>*/
        _x_x4351 = kk_std_core_list_drop(_x_x4352, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4354 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x4350 = kk_std_core_list_take(_x_x4351, _x_x4354, _ctx); /*list<10001>*/
        _x_x4349 = kk_std_core_string_listchar_fs_string(_x_x4350, _ctx); /*string*/
        kk_string_t _x_x4355;
        kk_define_string_literal(static, _s_x4356, 1, "-", _ctx)
        _x_x4355 = kk_string_dup(_s_x4356, _ctx); /*string*/
        _match_x2633 = kk_string_is_eq(_x_x4349,_x_x4355,kk_context()); /*bool*/
        if (_match_x2633) {
          hc__sign_0 = kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx); /*int*/
        }
        else {
          hc__sign_0 = kk_integer_from_small(1); /*int*/
        }
        kk_string_t s_0_10448;
        kk_std_core_types__list _x_x4357;
        kk_std_core_types__list _x_x4358;
        kk_std_core_types__list _x_x4359;
        kk_string_t _x_x4360 = kk_string_dup(s, _ctx); /*string*/
        _x_x4359 = kk_std_core_string_list(_x_x4360, _ctx); /*list<char>*/
        _x_x4358 = kk_std_core_list_drop(_x_x4359, kk_integer_from_small(1), _ctx); /*list<10001>*/
        kk_integer_t _x_x4361 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
        _x_x4357 = kk_std_core_list_take(_x_x4358, _x_x4361, _ctx); /*list<10001>*/
        s_0_10448 = kk_std_core_string_listchar_fs_string(_x_x4357, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2629;
        bool _x_x4362;
        kk_std_core_types__optional _match_x2632 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2632, _ctx)) {
          kk_box_t _box_x358 = _match_x2632._cons._Optional.value;
          bool _uniq_hex_581 = kk_bool_unbox(_box_x358);
          kk_std_core_types__optional_drop(_match_x2632, _ctx);
          _x_x4362 = _uniq_hex_581; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2632, _ctx);
          _x_x4362 = false; /*bool*/
        }
        _match_x2629 = kk_std_core_int_xparse(s_0_10448, _x_x4362, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2629, _ctx)) {
          kk_box_t _box_x359 = _match_x2629._cons.Just.value;
          kk_integer_t h = kk_integer_unbox(_box_x359, _ctx);
          kk_integer_dup(h, _ctx);
          kk_std_core_types__maybe_drop(_match_x2629, _ctx);
          kk_string_t s_1_10452;
          kk_std_core_types__list _x_x4363;
          kk_std_core_types__list _x_x4364;
          kk_std_core_types__list _x_x4365 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4364 = kk_std_core_list_drop(_x_x4365, kk_integer_from_small(4), _ctx); /*list<10001>*/
          kk_integer_t _x_x4366 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
          _x_x4363 = kk_std_core_list_take(_x_x4364, _x_x4366, _ctx); /*list<10001>*/
          s_1_10452 = kk_std_core_string_listchar_fs_string(_x_x4363, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2630;
          bool _x_x4367;
          kk_std_core_types__optional _match_x2631 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2631, _ctx)) {
            kk_box_t _box_x360 = _match_x2631._cons._Optional.value;
            bool _uniq_hex_581_0 = kk_bool_unbox(_box_x360);
            kk_std_core_types__optional_drop(_match_x2631, _ctx);
            _x_x4367 = _uniq_hex_581_0; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2631, _ctx);
            _x_x4367 = false; /*bool*/
          }
          _match_x2630 = kk_std_core_int_xparse(s_1_10452, _x_x4367, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2630, _ctx)) {
            kk_box_t _box_x361 = _match_x2630._cons.Just.value;
            kk_integer_t m = kk_integer_unbox(_box_x361, _ctx);
            kk_integer_dup(m, _ctx);
            kk_std_core_types__maybe_drop(_match_x2630, _ctx);
            kk_integer_t x_3_10456 = kk_integer_mul(h,(kk_integer_from_small(60)),kk_context()); /*int*/;
            kk_integer_t _b_x362_368;
            kk_integer_t _x_x4368 = kk_integer_add(x_3_10456,m,kk_context()); /*int*/
            _b_x362_368 = kk_integer_mul(hc__sign_0,_x_x4368,kk_context()); /*int*/
            return kk_std_core_types__new_Right(kk_integer_box(_b_x362_368, _ctx), _ctx);
          }
          {
            kk_integer_drop(hc__sign_0, _ctx);
            kk_integer_drop(h, _ctx);
            kk_box_t _x_x4369;
            kk_string_t _x_x4370;
            kk_define_string_literal(static, _s_x4371, 22, "invalid offset minutes", _ctx)
            _x_x4370 = kk_string_dup(_s_x4371, _ctx); /*string*/
            _x_x4369 = kk_string_box(_x_x4370); /*10014*/
            return kk_std_core_types__new_Left(_x_x4369, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(hc__sign_0, _ctx);
          kk_box_t _x_x4372;
          kk_string_t _x_x4373;
          kk_define_string_literal(static, _s_x4374, 20, "invalid offset hours", _ctx)
          _x_x4373 = kk_string_dup(_s_x4374, _ctx); /*string*/
          _x_x4372 = kk_string_box(_x_x4373); /*10014*/
          return kk_std_core_types__new_Left(_x_x4372, _ctx);
        }
      }
      {
        kk_string_t _b_x365_371;
        kk_string_t _x_x4375;
        kk_define_string_literal(static, _s_x4376, 16, "invalid offset: ", _ctx)
        _x_x4375 = kk_string_dup(_s_x4376, _ctx); /*string*/
        _b_x365_371 = kk_std_core_types__lp__plus__plus__rp_(_x_x4375, s, _ctx); /*string*/
        return kk_std_core_types__new_Left(kk_string_box(_b_x365_371), _ctx);
      }
    }
  }
}

kk_integer_t kk_hml_hc__list__int__nth(kk_std_core_types__list xs, kk_integer_t i, kk_context_t* _ctx) { /* (xs : list<int>, i : int) -> div int */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(i, _ctx);
    return kk_integer_from_small(0);
  }
  {
    struct kk_std_core_types_Cons* _con_x4377 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x372 = _con_x4377->head;
    kk_std_core_types__list rest = _con_x4377->tail;
    kk_integer_t x = kk_integer_unbox(_box_x372, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_integer_dup(x, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool _match_x2626 = kk_integer_eq_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2626) {
      kk_std_core_types__list_drop(rest, _ctx);
      kk_integer_drop(i, _ctx);
      return x;
    }
    {
      kk_integer_drop(x, _ctx);
      { // tailcall
        kk_integer_t _x_x4378 = kk_integer_add_small_const(i, -1, _ctx); /*int*/
        xs = rest;
        i = _x_x4378;
        goto kk__tailcall;
      }
    }
  }
}

kk_std_core_types__either kk_hml_hc__day__of__week(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> div either<string,string> */ 
  bool b_10460;
  kk_string_t _x_x4379 = kk_string_dup(s, _ctx); /*string*/
  b_10460 = kk_hml_hc__is__valid__date(_x_x4379, _ctx); /*bool*/
  if (b_10460) {
    kk_std_core_types__either _match_x2622 = kk_hml_hc__date__parts(s, _ctx); /*either<string,(int, int, int)>*/;
    if (kk_std_core_types__is_Left(_match_x2622, _ctx)) {
      kk_box_t _box_x373 = _match_x2622._cons.Left.left;
      kk_string_t e = kk_string_unbox(_box_x373);
      kk_string_dup(e, _ctx);
      kk_std_core_types__either_drop(_match_x2622, _ctx);
      return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
    }
    {
      kk_box_t _box_x375 = _match_x2622._cons.Right.right;
      kk_std_core_types__tuple3 parts = kk_std_core_types__tuple3_unbox(_box_x375, KK_BORROWED, _ctx);
      kk_std_core_types__tuple3_dup(parts, _ctx);
      kk_std_core_types__either_drop(_match_x2622, _ctx);
      kk_integer_t y_0;
      bool _match_x2623;
      kk_integer_t _brw_x2624;
      {
        kk_box_t _box_x376 = parts.fst;
        kk_box_t _box_x377 = parts.snd;
        kk_box_t _box_x378 = parts.thd;
        kk_integer_t _x = kk_integer_unbox(_box_x377, _ctx);
        kk_integer_dup(_x, _ctx);
        _brw_x2624 = _x; /*int*/
      }
      bool _brw_x2625 = kk_integer_lt_borrow(_brw_x2624,(kk_integer_from_small(3)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2624, _ctx);
      _match_x2623 = _brw_x2625; /*bool*/
      if (_match_x2623) {
        kk_integer_t _x_x4380;
        {
          kk_box_t _box_x379 = parts.fst;
          kk_box_t _box_x380 = parts.snd;
          kk_box_t _box_x381 = parts.thd;
          kk_integer_t _x_0 = kk_integer_unbox(_box_x379, _ctx);
          kk_integer_dup(_x_0, _ctx);
          _x_x4380 = _x_0; /*int*/
        }
        y_0 = kk_integer_add_small_const(_x_x4380, -1, _ctx); /*int*/
      }
      else {
        kk_box_t _box_x382 = parts.fst;
        kk_box_t _box_x383 = parts.snd;
        kk_box_t _box_x384 = parts.thd;
        kk_integer_t _x_1 = kk_integer_unbox(_box_x382, _ctx);
        kk_integer_dup(_x_1, _ctx);
        y_0 = _x_1; /*int*/
      }
      kk_integer_t y_5_10475;
      kk_integer_t _x_x4381 = kk_integer_dup(y_0, _ctx); /*int*/
      y_5_10475 = kk_integer_div(_x_x4381,(kk_integer_from_small(4)),kk_context()); /*int*/
      kk_integer_t x_3_10472;
      kk_integer_t _x_x4382 = kk_integer_dup(y_0, _ctx); /*int*/
      x_3_10472 = kk_integer_add(_x_x4382,y_5_10475,kk_context()); /*int*/
      kk_integer_t y_4_10473;
      kk_integer_t _x_x4383 = kk_integer_dup(y_0, _ctx); /*int*/
      y_4_10473 = kk_integer_div(_x_x4383,(kk_integer_from_small(100)),kk_context()); /*int*/
      kk_integer_t x_2_10470 = kk_integer_sub(x_3_10472,y_4_10473,kk_context()); /*int*/;
      kk_integer_t y_3_10471 = kk_integer_div(y_0,(kk_integer_from_small(400)),kk_context()); /*int*/;
      kk_integer_t x_1_10468 = kk_integer_add(x_2_10470,y_3_10471,kk_context()); /*int*/;
      kk_integer_t y_2_10469;
      kk_std_core_types__list _x_x4384;
      kk_std_core_types__list _x_x4385;
      kk_std_core_types__list _x_x4386;
      kk_std_core_types__list _x_x4387;
      kk_std_core_types__list _x_x4388;
      kk_std_core_types__list _x_x4389;
      kk_std_core_types__list _x_x4390;
      kk_std_core_types__list _x_x4391;
      kk_std_core_types__list _x_x4392;
      kk_std_core_types__list _x_x4393;
      kk_std_core_types__list _x_x4394;
      kk_std_core_types__list _x_x4395 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      _x_x4394 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4395, _ctx); /*list<10021>*/
      _x_x4393 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(6), _ctx), _x_x4394, _ctx); /*list<10021>*/
      _x_x4392 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), _x_x4393, _ctx); /*list<10021>*/
      _x_x4391 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(1), _ctx), _x_x4392, _ctx); /*list<10021>*/
      _x_x4390 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4391, _ctx); /*list<10021>*/
      _x_x4389 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4390, _ctx); /*list<10021>*/
      _x_x4388 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4389, _ctx); /*list<10021>*/
      _x_x4387 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4388, _ctx); /*list<10021>*/
      _x_x4386 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4387, _ctx); /*list<10021>*/
      _x_x4385 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4386, _ctx); /*list<10021>*/
      _x_x4384 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4385, _ctx); /*list<10021>*/
      kk_integer_t _x_x4396;
      kk_integer_t _x_x4397;
      {
        kk_box_t _box_x409 = parts.fst;
        kk_box_t _box_x410 = parts.snd;
        kk_box_t _box_x411 = parts.thd;
        kk_integer_t _x_2 = kk_integer_unbox(_box_x410, _ctx);
        kk_integer_dup(_x_2, _ctx);
        _x_x4397 = _x_2; /*int*/
      }
      _x_x4396 = kk_integer_add_small_const(_x_x4397, -1, _ctx); /*int*/
      y_2_10469 = kk_hml_hc__list__int__nth(_x_x4384, _x_x4396, _ctx); /*int*/
      kk_integer_t x_0_10466 = kk_integer_add(x_1_10468,y_2_10469,kk_context()); /*int*/;
      kk_integer_t idx;
      kk_integer_t _x_x4398;
      kk_integer_t _x_x4399;
      {
        kk_box_t _box_x436 = parts.fst;
        kk_box_t _box_x437 = parts.snd;
        kk_box_t _box_x438 = parts.thd;
        kk_integer_t _x_3 = kk_integer_unbox(_box_x438, _ctx);
        kk_integer_dup(_x_3, _ctx);
        kk_std_core_types__tuple3_drop(parts, _ctx);
        _x_x4399 = _x_3; /*int*/
      }
      _x_x4398 = kk_integer_add(x_0_10466,_x_x4399,kk_context()); /*int*/
      idx = kk_integer_mod(_x_x4398,(kk_integer_from_small(7)),kk_context()); /*int*/
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(0), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4400;
        kk_string_t _x_x4401;
        kk_define_string_literal(static, _s_x4402, 6, "sunday", _ctx)
        _x_x4401 = kk_string_dup(_s_x4402, _ctx); /*string*/
        _x_x4400 = kk_string_box(_x_x4401); /*10015*/
        return kk_std_core_types__new_Right(_x_x4400, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(1), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4403;
        kk_string_t _x_x4404;
        kk_define_string_literal(static, _s_x4405, 6, "monday", _ctx)
        _x_x4404 = kk_string_dup(_s_x4405, _ctx); /*string*/
        _x_x4403 = kk_string_box(_x_x4404); /*10015*/
        return kk_std_core_types__new_Right(_x_x4403, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(2), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4406;
        kk_string_t _x_x4407;
        kk_define_string_literal(static, _s_x4408, 7, "tuesday", _ctx)
        _x_x4407 = kk_string_dup(_s_x4408, _ctx); /*string*/
        _x_x4406 = kk_string_box(_x_x4407); /*10015*/
        return kk_std_core_types__new_Right(_x_x4406, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(3), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4409;
        kk_string_t _x_x4410;
        kk_define_string_literal(static, _s_x4411, 9, "wednesday", _ctx)
        _x_x4410 = kk_string_dup(_s_x4411, _ctx); /*string*/
        _x_x4409 = kk_string_box(_x_x4410); /*10015*/
        return kk_std_core_types__new_Right(_x_x4409, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(4), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4412;
        kk_string_t _x_x4413;
        kk_define_string_literal(static, _s_x4414, 8, "thursday", _ctx)
        _x_x4413 = kk_string_dup(_s_x4414, _ctx); /*string*/
        _x_x4412 = kk_string_box(_x_x4413); /*10015*/
        return kk_std_core_types__new_Right(_x_x4412, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(5), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4415;
        kk_string_t _x_x4416;
        kk_define_string_literal(static, _s_x4417, 6, "friday", _ctx)
        _x_x4416 = kk_string_dup(_s_x4417, _ctx); /*string*/
        _x_x4415 = kk_string_box(_x_x4416); /*10015*/
        return kk_std_core_types__new_Right(_x_x4415, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(6), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4418;
        kk_string_t _x_x4419;
        kk_define_string_literal(static, _s_x4420, 8, "saturday", _ctx)
        _x_x4419 = kk_string_dup(_s_x4420, _ctx); /*string*/
        _x_x4418 = kk_string_box(_x_x4419); /*10015*/
        return kk_std_core_types__new_Right(_x_x4418, _ctx);
      }
      {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4421;
        kk_string_t _x_x4422;
        kk_define_string_literal(static, _s_x4423, 11, "unreachable", _ctx)
        _x_x4422 = kk_string_dup(_s_x4423, _ctx); /*string*/
        _x_x4421 = kk_string_box(_x_x4422); /*10014*/
        return kk_std_core_types__new_Left(_x_x4421, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x447_457;
    kk_string_t _x_x4424;
    kk_define_string_literal(static, _s_x4425, 14, "invalid date: ", _ctx)
    _x_x4424 = kk_string_dup(_s_x4425, _ctx); /*string*/
    _b_x447_457 = kk_std_core_types__lp__plus__plus__rp_(_x_x4424, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x447_457), _ctx);
  }
}

kk_hml__clispec kk_hml_hc__with__flags(kk_hml__clispec spec, kk_std_core_types__list flags, kk_context_t* _ctx) { /* (spec : clispec, flags : list<cliflag>) -> clispec */ 
  kk_string_t _x_x4426;
  {
    struct kk_hml_Clispec* _con_x4427 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4427->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4426 = _x; /*string*/
  }
  kk_string_t _x_x4428;
  {
    struct kk_hml_Clispec* _con_x4429 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4429->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4428 = _x_0; /*string*/
  }
  kk_string_t _x_x4430;
  {
    struct kk_hml_Clispec* _con_x4431 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4431->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4430 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4432;
  {
    struct kk_hml_Clispec* _con_x4433 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4433->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4432 = _x_2; /*list<hml/clioption>*/
  }
  kk_std_core_types__list _x_x4434;
  {
    struct kk_hml_Clispec* _con_x4435 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4435->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4434 = _x_3; /*list<hml/cliarg>*/
  }
  kk_std_core_types__list _x_x4436;
  {
    struct kk_hml_Clispec* _con_x4437 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4437->app__name;
    kk_string_t _pat_1_4 = _con_x4437->app__version;
    kk_string_t _pat_2_4 = _con_x4437->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4437->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4437->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4437->app__args;
    kk_std_core_types__list _x_4 = _con_x4437->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4436 = _x_4; /*list<(string, hml/clispec)>*/
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x4426, _x_x4428, _x_x4430, flags, _x_x4432, _x_x4434, _x_x4436, _ctx);
}

kk_hml__clispec kk_hml_hc__with__options(kk_hml__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<clioption>) -> clispec */ 
  kk_string_t _x_x4438;
  {
    struct kk_hml_Clispec* _con_x4439 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4439->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4438 = _x; /*string*/
  }
  kk_string_t _x_x4440;
  {
    struct kk_hml_Clispec* _con_x4441 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4441->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4440 = _x_0; /*string*/
  }
  kk_string_t _x_x4442;
  {
    struct kk_hml_Clispec* _con_x4443 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4443->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4442 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4444;
  {
    struct kk_hml_Clispec* _con_x4445 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4445->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4444 = _x_2; /*list<hml/cliflag>*/
  }
  kk_std_core_types__list _x_x4446;
  {
    struct kk_hml_Clispec* _con_x4447 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4447->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4446 = _x_3; /*list<hml/cliarg>*/
  }
  kk_std_core_types__list _x_x4448;
  {
    struct kk_hml_Clispec* _con_x4449 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4449->app__name;
    kk_string_t _pat_1_4 = _con_x4449->app__version;
    kk_string_t _pat_2_4 = _con_x4449->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4449->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4449->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4449->app__args;
    kk_std_core_types__list _x_4 = _con_x4449->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4448 = _x_4; /*list<(string, hml/clispec)>*/
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x4438, _x_x4440, _x_x4442, _x_x4444, options, _x_x4446, _x_x4448, _ctx);
}

kk_hml__clispec kk_hml_hc__with__args(kk_hml__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<cliarg>) -> clispec */ 
  kk_string_t _x_x4450;
  {
    struct kk_hml_Clispec* _con_x4451 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4451->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4450 = _x; /*string*/
  }
  kk_string_t _x_x4452;
  {
    struct kk_hml_Clispec* _con_x4453 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4453->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4452 = _x_0; /*string*/
  }
  kk_string_t _x_x4454;
  {
    struct kk_hml_Clispec* _con_x4455 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4455->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4454 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4456;
  {
    struct kk_hml_Clispec* _con_x4457 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4457->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4456 = _x_2; /*list<hml/cliflag>*/
  }
  kk_std_core_types__list _x_x4458;
  {
    struct kk_hml_Clispec* _con_x4459 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4459->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4458 = _x_3; /*list<hml/clioption>*/
  }
  kk_std_core_types__list _x_x4460;
  {
    struct kk_hml_Clispec* _con_x4461 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4461->app__name;
    kk_string_t _pat_1_4 = _con_x4461->app__version;
    kk_string_t _pat_2_4 = _con_x4461->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4461->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4461->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4461->app__args;
    kk_std_core_types__list _x_4 = _con_x4461->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4460 = _x_4; /*list<(string, hml/clispec)>*/
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x4450, _x_x4452, _x_x4454, _x_x4456, _x_x4458, args, _x_x4460, _ctx);
}

kk_hml__clispec kk_hml_hc__with__commands(kk_hml__clispec spec, kk_std_core_types__list commands, kk_context_t* _ctx) { /* (spec : clispec, commands : list<(string, clispec)>) -> clispec */ 
  kk_string_t _x_x4462;
  {
    struct kk_hml_Clispec* _con_x4463 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4463->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4462 = _x; /*string*/
  }
  kk_string_t _x_x4464;
  {
    struct kk_hml_Clispec* _con_x4465 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4465->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4464 = _x_0; /*string*/
  }
  kk_string_t _x_x4466;
  {
    struct kk_hml_Clispec* _con_x4467 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4467->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4466 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4468;
  {
    struct kk_hml_Clispec* _con_x4469 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4469->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4468 = _x_2; /*list<hml/cliflag>*/
  }
  kk_std_core_types__list _x_x4470;
  {
    struct kk_hml_Clispec* _con_x4471 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4471->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4470 = _x_3; /*list<hml/clioption>*/
  }
  kk_std_core_types__list _x_x4472;
  {
    struct kk_hml_Clispec* _con_x4473 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4473->app__name;
    kk_string_t _pat_1_4 = _con_x4473->app__version;
    kk_string_t _pat_2_4 = _con_x4473->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4473->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4473->app__options;
    kk_std_core_types__list _x_4 = _con_x4473->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4473->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4472 = _x_4; /*list<hml/cliarg>*/
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x4462, _x_x4464, _x_x4466, _x_x4468, _x_x4470, _x_x4472, commands, _ctx);
}

kk_hml__clispec kk_hml_hc__flag(kk_hml__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list flags_10505;
  kk_std_core_types__list _x_x4474;
  {
    struct kk_hml_Clispec* _con_x4475 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4475->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4474 = _x_5; /*list<hml/cliflag>*/
  }
  kk_std_core_types__list _x_x4476;
  kk_box_t _x_x4477;
  kk_hml__cliflag _x_x4478 = kk_hml__new_Cliflag(kk_reuse_null, 0, name, kkloc_short, help__text, _ctx); /*hml/cliflag*/
  _x_x4477 = kk_hml__cliflag_box(_x_x4478, _ctx); /*10021*/
  _x_x4476 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4477, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  flags_10505 = kk_std_core_list_append(_x_x4474, _x_x4476, _ctx); /*list<hml/cliflag>*/
  kk_string_t _x_x4479;
  {
    struct kk_hml_Clispec* _con_x4480 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4480->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4479 = _x; /*string*/
  }
  kk_string_t _x_x4481;
  {
    struct kk_hml_Clispec* _con_x4482 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4482->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4481 = _x_0; /*string*/
  }
  kk_string_t _x_x4483;
  {
    struct kk_hml_Clispec* _con_x4484 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4484->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4483 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4485;
  {
    struct kk_hml_Clispec* _con_x4486 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4486->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4485 = _x_2; /*list<hml/clioption>*/
  }
  kk_std_core_types__list _x_x4487;
  {
    struct kk_hml_Clispec* _con_x4488 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4488->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4487 = _x_3; /*list<hml/cliarg>*/
  }
  kk_std_core_types__list _x_x4489;
  {
    struct kk_hml_Clispec* _con_x4490 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4490->app__name;
    kk_string_t _pat_1_4 = _con_x4490->app__version;
    kk_string_t _pat_2_4 = _con_x4490->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4490->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4490->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4490->app__args;
    kk_std_core_types__list _x_4 = _con_x4490->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4489 = _x_4; /*list<(string, hml/clispec)>*/
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x4479, _x_x4481, _x_x4483, flags_10505, _x_x4485, _x_x4487, _x_x4489, _ctx);
}

kk_hml__clispec kk_hml_hc__option(kk_hml__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list options_10516;
  kk_std_core_types__list _x_x4491;
  {
    struct kk_hml_Clispec* _con_x4492 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4492->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4491 = _x_5; /*list<hml/clioption>*/
  }
  kk_std_core_types__list _x_x4493;
  kk_box_t _x_x4494;
  kk_hml__clioption _x_x4495;
  kk_string_t _x_x4496 = kk_string_empty(); /*string*/
  _x_x4495 = kk_hml__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, _x_x4496, _ctx); /*hml/clioption*/
  _x_x4494 = kk_hml__clioption_box(_x_x4495, _ctx); /*10021*/
  _x_x4493 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4494, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10516 = kk_std_core_list_append(_x_x4491, _x_x4493, _ctx); /*list<hml/clioption>*/
  kk_string_t _x_x4498;
  {
    struct kk_hml_Clispec* _con_x4499 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4499->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4498 = _x; /*string*/
  }
  kk_string_t _x_x4500;
  {
    struct kk_hml_Clispec* _con_x4501 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4501->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4500 = _x_0; /*string*/
  }
  kk_string_t _x_x4502;
  {
    struct kk_hml_Clispec* _con_x4503 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4503->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4502 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4504;
  {
    struct kk_hml_Clispec* _con_x4505 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4505->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4504 = _x_2; /*list<hml/cliflag>*/
  }
  kk_std_core_types__list _x_x4506;
  {
    struct kk_hml_Clispec* _con_x4507 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4507->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4506 = _x_3; /*list<hml/cliarg>*/
  }
  kk_std_core_types__list _x_x4508;
  {
    struct kk_hml_Clispec* _con_x4509 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4509->app__name;
    kk_string_t _pat_1_4 = _con_x4509->app__version;
    kk_string_t _pat_2_4 = _con_x4509->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4509->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4509->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4509->app__args;
    kk_std_core_types__list _x_4 = _con_x4509->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4508 = _x_4; /*list<(string, hml/clispec)>*/
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x4498, _x_x4500, _x_x4502, _x_x4504, options_10516, _x_x4506, _x_x4508, _ctx);
}

kk_hml__clispec kk_hml_hc__option__default(kk_hml__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string, default : string) -> clispec */ 
  kk_std_core_types__list options_10527;
  kk_std_core_types__list _x_x4510;
  {
    struct kk_hml_Clispec* _con_x4511 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4511->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4510 = _x_5; /*list<hml/clioption>*/
  }
  kk_std_core_types__list _x_x4512;
  kk_box_t _x_x4513;
  kk_hml__clioption _x_x4514 = kk_hml__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, kkloc_default, _ctx); /*hml/clioption*/
  _x_x4513 = kk_hml__clioption_box(_x_x4514, _ctx); /*10021*/
  _x_x4512 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4513, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10527 = kk_std_core_list_append(_x_x4510, _x_x4512, _ctx); /*list<hml/clioption>*/
  kk_string_t _x_x4515;
  {
    struct kk_hml_Clispec* _con_x4516 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4516->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4515 = _x; /*string*/
  }
  kk_string_t _x_x4517;
  {
    struct kk_hml_Clispec* _con_x4518 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4518->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4517 = _x_0; /*string*/
  }
  kk_string_t _x_x4519;
  {
    struct kk_hml_Clispec* _con_x4520 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4520->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4519 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4521;
  {
    struct kk_hml_Clispec* _con_x4522 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4522->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4521 = _x_2; /*list<hml/cliflag>*/
  }
  kk_std_core_types__list _x_x4523;
  {
    struct kk_hml_Clispec* _con_x4524 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4524->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4523 = _x_3; /*list<hml/cliarg>*/
  }
  kk_std_core_types__list _x_x4525;
  {
    struct kk_hml_Clispec* _con_x4526 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4526->app__name;
    kk_string_t _pat_1_4 = _con_x4526->app__version;
    kk_string_t _pat_2_4 = _con_x4526->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4526->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4526->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4526->app__args;
    kk_std_core_types__list _x_4 = _con_x4526->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4525 = _x_4; /*list<(string, hml/clispec)>*/
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x4515, _x_x4517, _x_x4519, _x_x4521, options_10527, _x_x4523, _x_x4525, _ctx);
}

kk_hml__clispec kk_hml_hc__arg(kk_hml__clispec spec, kk_string_t name, kk_string_t help__text, bool required, kk_context_t* _ctx) { /* (spec : clispec, name : string, help_text : string, required : bool) -> clispec */ 
  kk_std_core_types__list args_10538;
  kk_std_core_types__list _x_x4527;
  {
    struct kk_hml_Clispec* _con_x4528 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4528->app__args;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4527 = _x_5; /*list<hml/cliarg>*/
  }
  kk_std_core_types__list _x_x4529;
  kk_box_t _x_x4530;
  kk_hml__cliarg _x_x4531 = kk_hml__new_Cliarg(kk_reuse_null, 0, name, help__text, required, _ctx); /*hml/cliarg*/
  _x_x4530 = kk_hml__cliarg_box(_x_x4531, _ctx); /*10021*/
  _x_x4529 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4530, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  args_10538 = kk_std_core_list_append(_x_x4527, _x_x4529, _ctx); /*list<hml/cliarg>*/
  kk_string_t _x_x4532;
  {
    struct kk_hml_Clispec* _con_x4533 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4533->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4532 = _x; /*string*/
  }
  kk_string_t _x_x4534;
  {
    struct kk_hml_Clispec* _con_x4535 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4535->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4534 = _x_0; /*string*/
  }
  kk_string_t _x_x4536;
  {
    struct kk_hml_Clispec* _con_x4537 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4537->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4536 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4538;
  {
    struct kk_hml_Clispec* _con_x4539 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4539->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4538 = _x_2; /*list<hml/cliflag>*/
  }
  kk_std_core_types__list _x_x4540;
  {
    struct kk_hml_Clispec* _con_x4541 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4541->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4540 = _x_3; /*list<hml/clioption>*/
  }
  kk_std_core_types__list _x_x4542;
  {
    struct kk_hml_Clispec* _con_x4543 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4543->app__name;
    kk_string_t _pat_1_4 = _con_x4543->app__version;
    kk_string_t _pat_2_4 = _con_x4543->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4543->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4543->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4543->app__args;
    kk_std_core_types__list _x_4 = _con_x4543->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4542 = _x_4; /*list<(string, hml/clispec)>*/
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x4532, _x_x4534, _x_x4536, _x_x4538, _x_x4540, args_10538, _x_x4542, _ctx);
}

kk_hml__clispec kk_hml_hc__command(kk_hml__clispec spec, kk_string_t name, kk_hml__clispec hc__sub_0, kk_context_t* _ctx) { /* (spec : clispec, name : string, hc_sub : clispec) -> clispec */ 
  kk_std_core_types__list commands_10549;
  kk_std_core_types__list _x_x4544;
  {
    struct kk_hml_Clispec* _con_x4545 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4545->app__commands;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4544 = _x_5; /*list<(string, hml/clispec)>*/
  }
  kk_std_core_types__list _x_x4546;
  kk_box_t _x_x4547;
  kk_std_core_types__tuple2 _x_x4548 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_hml__clispec_box(hc__sub_0, _ctx), _ctx); /*(10037, 10038)*/
  _x_x4547 = kk_std_core_types__tuple2_box(_x_x4548, _ctx); /*10021*/
  _x_x4546 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4547, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  commands_10549 = kk_std_core_list_append(_x_x4544, _x_x4546, _ctx); /*list<(string, hml/clispec)>*/
  kk_string_t _x_x4549;
  {
    struct kk_hml_Clispec* _con_x4550 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4550->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4549 = _x; /*string*/
  }
  kk_string_t _x_x4551;
  {
    struct kk_hml_Clispec* _con_x4552 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4552->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4551 = _x_0; /*string*/
  }
  kk_string_t _x_x4553;
  {
    struct kk_hml_Clispec* _con_x4554 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4554->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4553 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4555;
  {
    struct kk_hml_Clispec* _con_x4556 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4556->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4555 = _x_2; /*list<hml/cliflag>*/
  }
  kk_std_core_types__list _x_x4557;
  {
    struct kk_hml_Clispec* _con_x4558 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4558->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4557 = _x_3; /*list<hml/clioption>*/
  }
  kk_std_core_types__list _x_x4559;
  {
    struct kk_hml_Clispec* _con_x4560 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4560->app__name;
    kk_string_t _pat_1_4 = _con_x4560->app__version;
    kk_string_t _pat_2_4 = _con_x4560->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4560->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4560->app__options;
    kk_std_core_types__list _x_4 = _con_x4560->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4560->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4559 = _x_4; /*list<hml/cliarg>*/
  }
  return kk_hml__new_Clispec(kk_reuse_null, 0, _x_x4549, _x_x4551, _x_x4553, _x_x4555, _x_x4557, _x_x4559, commands_10549, _ctx);
}

kk_string_t kk_hml_hc__format__flag__usage(kk_hml__cliflag f, kk_context_t* _ctx) { /* (f : cliflag) -> div string */ 
  bool _match_x2617;
  kk_integer_t _brw_x2620;
  kk_string_t _x_x4561;
  {
    struct kk_hml_Cliflag* _con_x4562 = kk_hml__as_Cliflag(f, _ctx);
    kk_string_t _x = _con_x4562->flag__short;
    kk_string_dup(_x, _ctx);
    _x_x4561 = _x; /*string*/
  }
  _brw_x2620 = kk_std_core_string_chars_fs_count(_x_x4561, _ctx); /*int*/
  bool _brw_x2621 = kk_integer_eq_borrow(_brw_x2620,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2620, _ctx);
  _match_x2617 = _brw_x2621; /*bool*/
  if (_match_x2617) {
    kk_string_t s_0_10561;
    kk_string_t _x_x4563;
    kk_define_string_literal(static, _s_x4564, 6, "    --", _ctx)
    _x_x4563 = kk_string_dup(_s_x4564, _ctx); /*string*/
    kk_string_t _x_x4565;
    {
      struct kk_hml_Cliflag* _con_x4566 = kk_hml__as_Cliflag(f, _ctx);
      kk_string_t _x_0 = _con_x4566->flag__name;
      kk_string_dup(_x_0, _ctx);
      _x_x4565 = _x_0; /*string*/
    }
    s_0_10561 = kk_std_core_types__lp__plus__plus__rp_(_x_x4563, _x_x4565, _ctx); /*string*/
    kk_integer_t y_10568;
    kk_string_t _x_x4567 = kk_string_dup(s_0_10561, _ctx); /*string*/
    y_10568 = kk_std_core_string_chars_fs_count(_x_x4567, _ctx); /*int*/
    kk_integer_t b_10566 = kk_integer_sub((kk_integer_from_small(24)),y_10568,kk_context()); /*int*/;
    kk_string_t _x_x4568;
    kk_string_t _x_x4569;
    kk_string_t _x_x4570;
    kk_define_string_literal(static, _s_x4571, 1, " ", _ctx)
    _x_x4570 = kk_string_dup(_s_x4571, _ctx); /*string*/
    kk_integer_t _x_x4572;
    bool _match_x2619 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10566,kk_context()); /*bool*/;
    if (_match_x2619) {
      kk_integer_drop(b_10566, _ctx);
      _x_x4572 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4572 = b_10566; /*int*/
    }
    _x_x4569 = kk_hml_hc__repeat__str(_x_x4570, _x_x4572, _ctx); /*string*/
    _x_x4568 = kk_std_core_types__lp__plus__plus__rp_(s_0_10561, _x_x4569, _ctx); /*string*/
    kk_string_t _x_x4573;
    {
      struct kk_hml_Cliflag* _con_x4574 = kk_hml__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_2 = _con_x4574->flag__name;
      kk_string_t _pat_1_1 = _con_x4574->flag__short;
      kk_string_t _x_1 = _con_x4574->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_1, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4573 = _x_1; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4568, _x_x4573, _ctx);
  }
  {
    kk_string_t s_1_10570;
    kk_string_t _x_x4575;
    kk_define_string_literal(static, _s_x4576, 3, "  -", _ctx)
    _x_x4575 = kk_string_dup(_s_x4576, _ctx); /*string*/
    kk_string_t _x_x4577;
    kk_string_t _x_x4578;
    {
      struct kk_hml_Cliflag* _con_x4579 = kk_hml__as_Cliflag(f, _ctx);
      kk_string_t _x_2 = _con_x4579->flag__short;
      kk_string_dup(_x_2, _ctx);
      _x_x4578 = _x_2; /*string*/
    }
    kk_string_t _x_x4580;
    kk_string_t _x_x4581;
    kk_define_string_literal(static, _s_x4582, 4, ", --", _ctx)
    _x_x4581 = kk_string_dup(_s_x4582, _ctx); /*string*/
    kk_string_t _x_x4583;
    {
      struct kk_hml_Cliflag* _con_x4584 = kk_hml__as_Cliflag(f, _ctx);
      kk_string_t _x_3 = _con_x4584->flag__name;
      kk_string_dup(_x_3, _ctx);
      _x_x4583 = _x_3; /*string*/
    }
    _x_x4580 = kk_std_core_types__lp__plus__plus__rp_(_x_x4581, _x_x4583, _ctx); /*string*/
    _x_x4577 = kk_std_core_types__lp__plus__plus__rp_(_x_x4578, _x_x4580, _ctx); /*string*/
    s_1_10570 = kk_std_core_types__lp__plus__plus__rp_(_x_x4575, _x_x4577, _ctx); /*string*/
    kk_integer_t y_0_10578;
    kk_string_t _x_x4585 = kk_string_dup(s_1_10570, _ctx); /*string*/
    y_0_10578 = kk_std_core_string_chars_fs_count(_x_x4585, _ctx); /*int*/
    kk_integer_t b_0_10576 = kk_integer_sub((kk_integer_from_small(24)),y_0_10578,kk_context()); /*int*/;
    kk_string_t _x_x4586;
    kk_string_t _x_x4587;
    kk_string_t _x_x4588;
    kk_define_string_literal(static, _s_x4589, 1, " ", _ctx)
    _x_x4588 = kk_string_dup(_s_x4589, _ctx); /*string*/
    kk_integer_t _x_x4590;
    bool _match_x2618 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10576,kk_context()); /*bool*/;
    if (_match_x2618) {
      kk_integer_drop(b_0_10576, _ctx);
      _x_x4590 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4590 = b_0_10576; /*int*/
    }
    _x_x4587 = kk_hml_hc__repeat__str(_x_x4588, _x_x4590, _ctx); /*string*/
    _x_x4586 = kk_std_core_types__lp__plus__plus__rp_(s_1_10570, _x_x4587, _ctx); /*string*/
    kk_string_t _x_x4591;
    {
      struct kk_hml_Cliflag* _con_x4592 = kk_hml__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_7 = _con_x4592->flag__name;
      kk_string_t _pat_1_4 = _con_x4592->flag__short;
      kk_string_t _x_4 = _con_x4592->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_4, _ctx);
        kk_string_drop(_pat_0_7, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_4, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4591 = _x_4; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4586, _x_x4591, _ctx);
  }
}

kk_string_t kk_hml_hc__format__option__usage(kk_hml__clioption o, kk_context_t* _ctx) { /* (o : clioption) -> div string */ 
  kk_string_t suffix;
  bool _match_x2614;
  kk_integer_t _brw_x2615;
  kk_string_t _x_x4593;
  {
    struct kk_hml_Clioption* _con_x4594 = kk_hml__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x4594->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x4593 = _x; /*string*/
  }
  _brw_x2615 = kk_std_core_string_chars_fs_count(_x_x4593, _ctx); /*int*/
  bool _brw_x2616 = kk_integer_eq_borrow(_brw_x2615,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2615, _ctx);
  _match_x2614 = _brw_x2616; /*bool*/
  if (_match_x2614) {
    suffix = kk_string_empty(); /*string*/
  }
  else {
    kk_string_t _x_x4596;
    kk_define_string_literal(static, _s_x4597, 11, " [default: ", _ctx)
    _x_x4596 = kk_string_dup(_s_x4597, _ctx); /*string*/
    kk_string_t _x_x4598;
    kk_string_t _x_x4599;
    {
      struct kk_hml_Clioption* _con_x4600 = kk_hml__as_Clioption(o, _ctx);
      kk_string_t _x_0 = _con_x4600->opt__default;
      kk_string_dup(_x_0, _ctx);
      _x_x4599 = _x_0; /*string*/
    }
    kk_string_t _x_x4601;
    kk_define_string_literal(static, _s_x4602, 1, "]", _ctx)
    _x_x4601 = kk_string_dup(_s_x4602, _ctx); /*string*/
    _x_x4598 = kk_std_core_types__lp__plus__plus__rp_(_x_x4599, _x_x4601, _ctx); /*string*/
    suffix = kk_std_core_types__lp__plus__plus__rp_(_x_x4596, _x_x4598, _ctx); /*string*/
  }
  bool _match_x2609;
  kk_integer_t _brw_x2612;
  kk_string_t _x_x4603;
  {
    struct kk_hml_Clioption* _con_x4604 = kk_hml__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x4604->opt__short;
    kk_string_dup(_x_1, _ctx);
    _x_x4603 = _x_1; /*string*/
  }
  _brw_x2612 = kk_std_core_string_chars_fs_count(_x_x4603, _ctx); /*int*/
  bool _brw_x2613 = kk_integer_eq_borrow(_brw_x2612,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2612, _ctx);
  _match_x2609 = _brw_x2613; /*bool*/
  if (_match_x2609) {
    kk_string_t s_1_10585;
    kk_string_t _x_x4605;
    kk_define_string_literal(static, _s_x4606, 6, "    --", _ctx)
    _x_x4605 = kk_string_dup(_s_x4606, _ctx); /*string*/
    kk_string_t _x_x4607;
    kk_string_t _x_x4608;
    {
      struct kk_hml_Clioption* _con_x4609 = kk_hml__as_Clioption(o, _ctx);
      kk_string_t _x_2 = _con_x4609->opt__name;
      kk_string_dup(_x_2, _ctx);
      _x_x4608 = _x_2; /*string*/
    }
    kk_string_t _x_x4610;
    kk_define_string_literal(static, _s_x4611, 6, " VALUE", _ctx)
    _x_x4610 = kk_string_dup(_s_x4611, _ctx); /*string*/
    _x_x4607 = kk_std_core_types__lp__plus__plus__rp_(_x_x4608, _x_x4610, _ctx); /*string*/
    s_1_10585 = kk_std_core_types__lp__plus__plus__rp_(_x_x4605, _x_x4607, _ctx); /*string*/
    kk_integer_t y_10592;
    kk_string_t _x_x4612 = kk_string_dup(s_1_10585, _ctx); /*string*/
    y_10592 = kk_std_core_string_chars_fs_count(_x_x4612, _ctx); /*int*/
    kk_integer_t b_10590 = kk_integer_sub((kk_integer_from_small(24)),y_10592,kk_context()); /*int*/;
    kk_string_t _x_x4613;
    kk_string_t _x_x4614;
    kk_string_t _x_x4615;
    kk_string_t _x_x4616;
    kk_define_string_literal(static, _s_x4617, 1, " ", _ctx)
    _x_x4616 = kk_string_dup(_s_x4617, _ctx); /*string*/
    kk_integer_t _x_x4618;
    bool _match_x2611 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10590,kk_context()); /*bool*/;
    if (_match_x2611) {
      kk_integer_drop(b_10590, _ctx);
      _x_x4618 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4618 = b_10590; /*int*/
    }
    _x_x4615 = kk_hml_hc__repeat__str(_x_x4616, _x_x4618, _ctx); /*string*/
    _x_x4614 = kk_std_core_types__lp__plus__plus__rp_(s_1_10585, _x_x4615, _ctx); /*string*/
    kk_string_t _x_x4619;
    {
      struct kk_hml_Clioption* _con_x4620 = kk_hml__as_Clioption(o, _ctx);
      kk_string_t _pat_0_5 = _con_x4620->opt__name;
      kk_string_t _pat_1_4 = _con_x4620->opt__short;
      kk_string_t _x_3 = _con_x4620->opt__help;
      kk_string_t _pat_2_3 = _con_x4620->opt__default;
      if kk_likely(kk_datatype_ptr_is_unique(o, _ctx)) {
        kk_string_drop(_pat_2_3, _ctx);
        kk_string_drop(_pat_1_4, _ctx);
        kk_string_drop(_pat_0_5, _ctx);
        kk_datatype_ptr_free(o, _ctx);
      }
      else {
        kk_string_dup(_x_3, _ctx);
        kk_datatype_ptr_decref(o, _ctx);
      }
      _x_x4619 = _x_3; /*string*/
    }
    _x_x4613 = kk_std_core_types__lp__plus__plus__rp_(_x_x4614, _x_x4619, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4613, suffix, _ctx);
  }
  {
    kk_string_t s_2_10594;
    kk_string_t _x_x4621;
    kk_define_string_literal(static, _s_x4622, 3, "  -", _ctx)
    _x_x4621 = kk_string_dup(_s_x4622, _ctx); /*string*/
    kk_string_t _x_x4623;
    kk_string_t _x_x4624;
    {
      struct kk_hml_Clioption* _con_x4625 = kk_hml__as_Clioption(o, _ctx);
      kk_string_t _x_4 = _con_x4625->opt__short;
      kk_string_dup(_x_4, _ctx);
      _x_x4624 = _x_4; /*string*/
    }
    kk_string_t _x_x4626;
    kk_string_t _x_x4627;
    kk_define_string_literal(static, _s_x4628, 4, ", --", _ctx)
    _x_x4627 = kk_string_dup(_s_x4628, _ctx); /*string*/
    kk_string_t _x_x4629;
    kk_string_t _x_x4630;
    {
      struct kk_hml_Clioption* _con_x4631 = kk_hml__as_Clioption(o, _ctx);
      kk_string_t _x_5 = _con_x4631->opt__name;
      kk_string_dup(_x_5, _ctx);
      _x_x4630 = _x_5; /*string*/
    }
    kk_string_t _x_x4632;
    kk_define_string_literal(static, _s_x4633, 6, " VALUE", _ctx)
    _x_x4632 = kk_string_dup(_s_x4633, _ctx); /*string*/
    _x_x4629 = kk_std_core_types__lp__plus__plus__rp_(_x_x4630, _x_x4632, _ctx); /*string*/
    _x_x4626 = kk_std_core_types__lp__plus__plus__rp_(_x_x4627, _x_x4629, _ctx); /*string*/
    _x_x4623 = kk_std_core_types__lp__plus__plus__rp_(_x_x4624, _x_x4626, _ctx); /*string*/
    s_2_10594 = kk_std_core_types__lp__plus__plus__rp_(_x_x4621, _x_x4623, _ctx); /*string*/
    kk_integer_t y_0_10602;
    kk_string_t _x_x4634 = kk_string_dup(s_2_10594, _ctx); /*string*/
    y_0_10602 = kk_std_core_string_chars_fs_count(_x_x4634, _ctx); /*int*/
    kk_integer_t b_0_10600 = kk_integer_sub((kk_integer_from_small(24)),y_0_10602,kk_context()); /*int*/;
    kk_string_t _x_x4635;
    kk_string_t _x_x4636;
    kk_string_t _x_x4637;
    kk_string_t _x_x4638;
    kk_define_string_literal(static, _s_x4639, 1, " ", _ctx)
    _x_x4638 = kk_string_dup(_s_x4639, _ctx); /*string*/
    kk_integer_t _x_x4640;
    bool _match_x2610 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10600,kk_context()); /*bool*/;
    if (_match_x2610) {
      kk_integer_drop(b_0_10600, _ctx);
      _x_x4640 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4640 = b_0_10600; /*int*/
    }
    _x_x4637 = kk_hml_hc__repeat__str(_x_x4638, _x_x4640, _ctx); /*string*/
    _x_x4636 = kk_std_core_types__lp__plus__plus__rp_(s_2_10594, _x_x4637, _ctx); /*string*/
    kk_string_t _x_x4641;
    {
      struct kk_hml_Clioption* _con_x4642 = kk_hml__as_Clioption(o, _ctx);
      kk_string_t _pat_0_9 = _con_x4642->opt__name;
      kk_string_t _pat_1_7 = _con_x4642->opt__short;
      kk_string_t _x_6 = _con_x4642->opt__help;
      kk_string_t _pat_2_7 = _con_x4642->opt__default;
      if kk_likely(kk_datatype_ptr_is_unique(o, _ctx)) {
        kk_string_drop(_pat_2_7, _ctx);
        kk_string_drop(_pat_1_7, _ctx);
        kk_string_drop(_pat_0_9, _ctx);
        kk_datatype_ptr_free(o, _ctx);
      }
      else {
        kk_string_dup(_x_6, _ctx);
        kk_datatype_ptr_decref(o, _ctx);
      }
      _x_x4641 = _x_6; /*string*/
    }
    _x_x4635 = kk_std_core_types__lp__plus__plus__rp_(_x_x4636, _x_x4641, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4635, suffix, _ctx);
  }
}

kk_string_t kk_hml_hc__format__arg__usage(kk_hml__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> div string */ 
  kk_string_t s_10604;
  kk_string_t _x_x4643;
  kk_define_string_literal(static, _s_x4644, 3, "  <", _ctx)
  _x_x4643 = kk_string_dup(_s_x4644, _ctx); /*string*/
  kk_string_t _x_x4645;
  kk_string_t _x_x4646;
  {
    struct kk_hml_Cliarg* _con_x4647 = kk_hml__as_Cliarg(a, _ctx);
    kk_string_t _x_0 = _con_x4647->arg__name;
    kk_string_dup(_x_0, _ctx);
    _x_x4646 = _x_0; /*string*/
  }
  kk_string_t _x_x4648;
  kk_define_string_literal(static, _s_x4649, 1, ">", _ctx)
  _x_x4648 = kk_string_dup(_s_x4649, _ctx); /*string*/
  _x_x4645 = kk_std_core_types__lp__plus__plus__rp_(_x_x4646, _x_x4648, _ctx); /*string*/
  s_10604 = kk_std_core_types__lp__plus__plus__rp_(_x_x4643, _x_x4645, _ctx); /*string*/
  kk_integer_t y_10611;
  kk_string_t _x_x4650 = kk_string_dup(s_10604, _ctx); /*string*/
  y_10611 = kk_std_core_string_chars_fs_count(_x_x4650, _ctx); /*int*/
  kk_integer_t b_10609 = kk_integer_sub((kk_integer_from_small(24)),y_10611,kk_context()); /*int*/;
  kk_string_t _x_x4651;
  kk_string_t _x_x4652;
  kk_string_t _x_x4653;
  kk_string_t _x_x4654;
  kk_define_string_literal(static, _s_x4655, 1, " ", _ctx)
  _x_x4654 = kk_string_dup(_s_x4655, _ctx); /*string*/
  kk_integer_t _x_x4656;
  bool _match_x2608 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10609,kk_context()); /*bool*/;
  if (_match_x2608) {
    kk_integer_drop(b_10609, _ctx);
    _x_x4656 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4656 = b_10609; /*int*/
  }
  _x_x4653 = kk_hml_hc__repeat__str(_x_x4654, _x_x4656, _ctx); /*string*/
  _x_x4652 = kk_std_core_types__lp__plus__plus__rp_(s_10604, _x_x4653, _ctx); /*string*/
  kk_string_t _x_x4657;
  {
    struct kk_hml_Cliarg* _con_x4658 = kk_hml__as_Cliarg(a, _ctx);
    kk_string_t _x_1 = _con_x4658->arg__help;
    kk_string_dup(_x_1, _ctx);
    _x_x4657 = _x_1; /*string*/
  }
  _x_x4651 = kk_std_core_types__lp__plus__plus__rp_(_x_x4652, _x_x4657, _ctx); /*string*/
  kk_string_t _x_x4659;
  {
    struct kk_hml_Cliarg* _con_x4660 = kk_hml__as_Cliarg(a, _ctx);
    kk_string_t _pat_0 = _con_x4660->arg__name;
    kk_string_t _pat_1 = _con_x4660->arg__help;
    bool _x = _con_x4660->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_datatype_ptr_decref(a, _ctx);
    }
    if (_x) {
      kk_define_string_literal(static, _s_x4661, 11, " (required)", _ctx)
      _x_x4659 = kk_string_dup(_s_x4661, _ctx); /*string*/
    }
    else {
      _x_x4659 = kk_string_empty(); /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4651, _x_x4659, _ctx);
}

kk_string_t kk_hml_hc__format__arg__label(kk_hml__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> string */ 
  {
    struct kk_hml_Cliarg* _con_x4663 = kk_hml__as_Cliarg(a, _ctx);
    bool _x = _con_x4663->arg__required;
    if (_x) {
      kk_string_t _x_x4664;
      kk_define_string_literal(static, _s_x4665, 2, " <", _ctx)
      _x_x4664 = kk_string_dup(_s_x4665, _ctx); /*string*/
      kk_string_t _x_x4666;
      kk_string_t _x_x4667;
      {
        struct kk_hml_Cliarg* _con_x4668 = kk_hml__as_Cliarg(a, _ctx);
        kk_string_t _x_0 = _con_x4668->arg__name;
        kk_string_t _pat_0_0 = _con_x4668->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_0, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4667 = _x_0; /*string*/
      }
      kk_string_t _x_x4669;
      kk_define_string_literal(static, _s_x4670, 1, ">", _ctx)
      _x_x4669 = kk_string_dup(_s_x4670, _ctx); /*string*/
      _x_x4666 = kk_std_core_types__lp__plus__plus__rp_(_x_x4667, _x_x4669, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4664, _x_x4666, _ctx);
    }
    {
      kk_string_t _x_x4671;
      kk_define_string_literal(static, _s_x4672, 2, " [", _ctx)
      _x_x4671 = kk_string_dup(_s_x4672, _ctx); /*string*/
      kk_string_t _x_x4673;
      kk_string_t _x_x4674;
      {
        struct kk_hml_Cliarg* _con_x4675 = kk_hml__as_Cliarg(a, _ctx);
        kk_string_t _x_1 = _con_x4675->arg__name;
        kk_string_t _pat_0_2 = _con_x4675->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_1, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4674 = _x_1; /*string*/
      }
      kk_string_t _x_x4676;
      kk_define_string_literal(static, _s_x4677, 1, "]", _ctx)
      _x_x4676 = kk_string_dup(_s_x4677, _ctx); /*string*/
      _x_x4673 = kk_std_core_types__lp__plus__plus__rp_(_x_x4674, _x_x4676, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4671, _x_x4673, _ctx);
    }
  }
}

kk_string_t kk_hml_hc__format__cmd__usage(kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (pair : (string, clispec)) -> div string */ 
  kk_string_t s_10617;
  kk_string_t _x_x4678;
  kk_define_string_literal(static, _s_x4679, 2, "  ", _ctx)
  _x_x4678 = kk_string_dup(_s_x4679, _ctx); /*string*/
  kk_string_t _x_x4680;
  {
    kk_box_t _box_x482 = pair.fst;
    kk_box_t _box_x483 = pair.snd;
    kk_string_t _x = kk_string_unbox(_box_x482);
    kk_string_dup(_x, _ctx);
    _x_x4680 = _x; /*string*/
  }
  s_10617 = kk_std_core_types__lp__plus__plus__rp_(_x_x4678, _x_x4680, _ctx); /*string*/
  kk_integer_t y_10624;
  kk_string_t _x_x4681 = kk_string_dup(s_10617, _ctx); /*string*/
  y_10624 = kk_std_core_string_chars_fs_count(_x_x4681, _ctx); /*int*/
  kk_integer_t b_10622 = kk_integer_sub((kk_integer_from_small(24)),y_10624,kk_context()); /*int*/;
  kk_string_t _x_x4682;
  kk_string_t _x_x4683;
  kk_string_t _x_x4684;
  kk_define_string_literal(static, _s_x4685, 1, " ", _ctx)
  _x_x4684 = kk_string_dup(_s_x4685, _ctx); /*string*/
  kk_integer_t _x_x4686;
  bool _match_x2607 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10622,kk_context()); /*bool*/;
  if (_match_x2607) {
    kk_integer_drop(b_10622, _ctx);
    _x_x4686 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4686 = b_10622; /*int*/
  }
  _x_x4683 = kk_hml_hc__repeat__str(_x_x4684, _x_x4686, _ctx); /*string*/
  _x_x4682 = kk_std_core_types__lp__plus__plus__rp_(s_10617, _x_x4683, _ctx); /*string*/
  kk_string_t _x_x4687;
  {
    kk_box_t _box_x484 = pair.fst;
    kk_box_t _box_x485 = pair.snd;
    kk_hml__clispec _x_1 = kk_hml__clispec_unbox(_box_x485, KK_BORROWED, _ctx);
    kk_hml__clispec_dup(_x_1, _ctx);
    kk_std_core_types__tuple2_drop(pair, _ctx);
    {
      struct kk_hml_Clispec* _con_x4688 = kk_hml__as_Clispec(_x_1, _ctx);
      kk_string_t _pat_0_1 = _con_x4688->app__name;
      kk_string_t _pat_1_0 = _con_x4688->app__version;
      kk_string_t _x_0 = _con_x4688->app__about;
      kk_std_core_types__list _pat_2_0 = _con_x4688->app__flags;
      kk_std_core_types__list _pat_3 = _con_x4688->app__options;
      kk_std_core_types__list _pat_4 = _con_x4688->app__args;
      kk_std_core_types__list _pat_5 = _con_x4688->app__commands;
      if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
        kk_std_core_types__list_drop(_pat_5, _ctx);
        kk_std_core_types__list_drop(_pat_4, _ctx);
        kk_std_core_types__list_drop(_pat_3, _ctx);
        kk_std_core_types__list_drop(_pat_2_0, _ctx);
        kk_string_drop(_pat_1_0, _ctx);
        kk_string_drop(_pat_0_1, _ctx);
        kk_datatype_ptr_free(_x_1, _ctx);
      }
      else {
        kk_string_dup(_x_0, _ctx);
        kk_datatype_ptr_decref(_x_1, _ctx);
      }
      _x_x4687 = _x_0; /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4682, _x_x4687, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__help_fun4702__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__help_fun4702(kk_function_t _fself, kk_box_t _b_x488, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__help_fun4702(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__help_fun4702, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__help_fun4702(kk_function_t _fself, kk_box_t _b_x488, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4703;
  kk_hml__cliarg _x_x4704 = kk_hml__cliarg_unbox(_b_x488, KK_OWNED, _ctx); /*hml/cliarg*/
  _x_x4703 = kk_hml_hc__format__arg__label(_x_x4704, _ctx); /*string*/
  return kk_string_box(_x_x4703);
}


// lift anonymous function
struct kk_hml_hc__cli__help_fun4722__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__help_fun4722(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__help_fun4722(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__help_fun4722, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__help_fun4722(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4723;
  kk_hml__cliflag _x_x4724 = kk_hml__cliflag_unbox(_b_x493, KK_OWNED, _ctx); /*hml/cliflag*/
  _x_x4723 = kk_hml_hc__format__flag__usage(_x_x4724, _ctx); /*string*/
  return kk_string_box(_x_x4723);
}


// lift anonymous function
struct kk_hml_hc__cli__help_fun4727__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__help_fun4727(kk_function_t _fself, kk_box_t _b_x498, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__help_fun4727(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__help_fun4727, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__help_fun4727(kk_function_t _fself, kk_box_t _b_x498, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4728;
  kk_hml__clioption _x_x4729 = kk_hml__clioption_unbox(_b_x498, KK_OWNED, _ctx); /*hml/clioption*/
  _x_x4728 = kk_hml_hc__format__option__usage(_x_x4729, _ctx); /*string*/
  return kk_string_box(_x_x4728);
}


// lift anonymous function
struct kk_hml_hc__cli__help_fun4768__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__help_fun4768(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__help_fun4768(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__help_fun4768, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__help_fun4768(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4769;
  kk_hml__cliarg _x_x4770 = kk_hml__cliarg_unbox(_b_x513, KK_OWNED, _ctx); /*hml/cliarg*/
  _x_x4769 = kk_hml_hc__format__arg__usage(_x_x4770, _ctx); /*string*/
  return kk_string_box(_x_x4769);
}


// lift anonymous function
struct kk_hml_hc__cli__help_fun4784__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__help_fun4784(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__help_fun4784(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__help_fun4784, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__help_fun4784(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4785;
  kk_std_core_types__tuple2 _x_x4786 = kk_std_core_types__tuple2_unbox(_b_x526, KK_OWNED, _ctx); /*(string, hml/clispec)*/
  _x_x4785 = kk_hml_hc__format__cmd__usage(_x_x4786, _ctx); /*string*/
  return kk_string_box(_x_x4785);
}

kk_string_t kk_hml_hc__cli__help(kk_hml__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> div string */ 
  kk_string_t header;
  kk_string_t _x_x4689;
  {
    struct kk_hml_Clispec* _con_x4690 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4690->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4689 = _x; /*string*/
  }
  kk_string_t _x_x4691;
  kk_string_t _x_x4692;
  kk_define_string_literal(static, _s_x4693, 1, " ", _ctx)
  _x_x4692 = kk_string_dup(_s_x4693, _ctx); /*string*/
  kk_string_t _x_x4694;
  kk_string_t _x_x4695;
  {
    struct kk_hml_Clispec* _con_x4696 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4696->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4695 = _x_0; /*string*/
  }
  kk_string_t _x_x4697;
  kk_string_t _x_x4698;
  kk_define_string_literal(static, _s_x4699, 5, " " "\xE2\x80\x94" " ", _ctx)
  _x_x4698 = kk_string_dup(_s_x4699, _ctx); /*string*/
  kk_string_t _x_x4700;
  {
    struct kk_hml_Clispec* _con_x4701 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4701->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4700 = _x_1; /*string*/
  }
  _x_x4697 = kk_std_core_types__lp__plus__plus__rp_(_x_x4698, _x_x4700, _ctx); /*string*/
  _x_x4694 = kk_std_core_types__lp__plus__plus__rp_(_x_x4695, _x_x4697, _ctx); /*string*/
  _x_x4691 = kk_std_core_types__lp__plus__plus__rp_(_x_x4692, _x_x4694, _ctx); /*string*/
  header = kk_std_core_types__lp__plus__plus__rp_(_x_x4689, _x_x4691, _ctx); /*string*/
  kk_std_core_types__list arg__labels;
  kk_function_t _brw_x2605 = kk_hml_new_hc__cli__help_fun4702(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2606;
  kk_std_core_types__list _x_x4705;
  {
    struct kk_hml_Clispec* _con_x4706 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4706->app__args;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4705 = _x_2; /*list<hml/cliarg>*/
  }
  _brw_x2606 = kk_std_core_list_map(_x_x4705, _brw_x2605, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2605, _ctx);
  arg__labels = _brw_x2606; /*list<string>*/
  kk_string_t args__str;
  kk_string_t _x_x4707 = kk_string_empty(); /*string*/
  args__str = kk_std_core_list_joinsep(arg__labels, _x_x4707, _ctx); /*string*/
  kk_string_t cmds__str;
  bool _match_x2602;
  kk_integer_t _brw_x2603;
  kk_std_core_types__list _x_x4709;
  {
    struct kk_hml_Clispec* _con_x4710 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4710->app__commands;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4709 = _x_3; /*list<(string, hml/clispec)>*/
  }
  _brw_x2603 = kk_std_core_list__lift_length_6003(_x_x4709, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2604 = kk_integer_gt_borrow(_brw_x2603,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2603, _ctx);
  _match_x2602 = _brw_x2604; /*bool*/
  if (_match_x2602) {
    kk_define_string_literal(static, _s_x4711, 10, " <COMMAND>", _ctx)
    cmds__str = kk_string_dup(_s_x4711, _ctx); /*string*/
  }
  else {
    cmds__str = kk_string_empty(); /*string*/
  }
  kk_string_t usage__line;
  kk_string_t _x_x4713;
  kk_define_string_literal(static, _s_x4714, 7, "USAGE: ", _ctx)
  _x_x4713 = kk_string_dup(_s_x4714, _ctx); /*string*/
  kk_string_t _x_x4715;
  kk_string_t _x_x4716;
  {
    struct kk_hml_Clispec* _con_x4717 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x_4 = _con_x4717->app__name;
    kk_string_dup(_x_4, _ctx);
    _x_x4716 = _x_4; /*string*/
  }
  kk_string_t _x_x4718;
  kk_string_t _x_x4719;
  kk_define_string_literal(static, _s_x4720, 10, " [OPTIONS]", _ctx)
  _x_x4719 = kk_string_dup(_s_x4720, _ctx); /*string*/
  kk_string_t _x_x4721 = kk_std_core_types__lp__plus__plus__rp_(args__str, cmds__str, _ctx); /*string*/
  _x_x4718 = kk_std_core_types__lp__plus__plus__rp_(_x_x4719, _x_x4721, _ctx); /*string*/
  _x_x4715 = kk_std_core_types__lp__plus__plus__rp_(_x_x4716, _x_x4718, _ctx); /*string*/
  usage__line = kk_std_core_types__lp__plus__plus__rp_(_x_x4713, _x_x4715, _ctx); /*string*/
  kk_std_core_types__list flag__lines;
  kk_function_t _brw_x2600 = kk_hml_new_hc__cli__help_fun4722(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2601;
  kk_std_core_types__list _x_x4725;
  {
    struct kk_hml_Clispec* _con_x4726 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4726->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4725 = _x_5; /*list<hml/cliflag>*/
  }
  _brw_x2601 = kk_std_core_list_map(_x_x4725, _brw_x2600, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2600, _ctx);
  flag__lines = _brw_x2601; /*list<string>*/
  kk_std_core_types__list opt__lines;
  kk_function_t _brw_x2598 = kk_hml_new_hc__cli__help_fun4727(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2599;
  kk_std_core_types__list _x_x4730;
  {
    struct kk_hml_Clispec* _con_x4731 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_6 = _con_x4731->app__options;
    kk_std_core_types__list_dup(_x_6, _ctx);
    _x_x4730 = _x_6; /*list<hml/clioption>*/
  }
  _brw_x2599 = kk_std_core_list_map(_x_x4730, _brw_x2598, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2598, _ctx);
  opt__lines = _brw_x2599; /*list<string>*/
  kk_integer_t y_10645;
  kk_string_t _x_x4732;
  kk_define_string_literal(static, _s_x4733, 12, "  -h, --help", _ctx)
  _x_x4732 = kk_string_dup(_s_x4733, _ctx); /*string*/
  y_10645 = kk_std_core_string_chars_fs_count(_x_x4732, _ctx); /*int*/
  kk_integer_t b_10643 = kk_integer_sub((kk_integer_from_small(24)),y_10645,kk_context()); /*int*/;
  kk_integer_t y_0_10652;
  kk_string_t _x_x4734;
  kk_define_string_literal(static, _s_x4735, 15, "      --version", _ctx)
  _x_x4734 = kk_string_dup(_s_x4735, _ctx); /*string*/
  y_0_10652 = kk_std_core_string_chars_fs_count(_x_x4734, _ctx); /*int*/
  kk_integer_t b_0_10650 = kk_integer_sub((kk_integer_from_small(24)),y_0_10652,kk_context()); /*int*/;
  kk_string_t _b_x503_505;
  kk_string_t _x_x4736;
  kk_string_t _x_x4737;
  kk_define_string_literal(static, _s_x4738, 12, "  -h, --help", _ctx)
  _x_x4737 = kk_string_dup(_s_x4738, _ctx); /*string*/
  kk_string_t _x_x4739;
  kk_string_t _x_x4740;
  kk_define_string_literal(static, _s_x4741, 1, " ", _ctx)
  _x_x4740 = kk_string_dup(_s_x4741, _ctx); /*string*/
  kk_integer_t _x_x4742;
  bool _match_x2597 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10643,kk_context()); /*bool*/;
  if (_match_x2597) {
    kk_integer_drop(b_10643, _ctx);
    _x_x4742 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4742 = b_10643; /*int*/
  }
  _x_x4739 = kk_hml_hc__repeat__str(_x_x4740, _x_x4742, _ctx); /*string*/
  _x_x4736 = kk_std_core_types__lp__plus__plus__rp_(_x_x4737, _x_x4739, _ctx); /*string*/
  kk_string_t _x_x4743;
  kk_define_string_literal(static, _s_x4744, 14, "Show this help", _ctx)
  _x_x4743 = kk_string_dup(_s_x4744, _ctx); /*string*/
  _b_x503_505 = kk_std_core_types__lp__plus__plus__rp_(_x_x4736, _x_x4743, _ctx); /*string*/
  kk_string_t _b_x501_507;
  kk_string_t _x_x4745;
  kk_string_t _x_x4746;
  kk_define_string_literal(static, _s_x4747, 15, "      --version", _ctx)
  _x_x4746 = kk_string_dup(_s_x4747, _ctx); /*string*/
  kk_string_t _x_x4748;
  kk_string_t _x_x4749;
  kk_define_string_literal(static, _s_x4750, 1, " ", _ctx)
  _x_x4749 = kk_string_dup(_s_x4750, _ctx); /*string*/
  kk_integer_t _x_x4751;
  bool _match_x2596 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10650,kk_context()); /*bool*/;
  if (_match_x2596) {
    kk_integer_drop(b_0_10650, _ctx);
    _x_x4751 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4751 = b_0_10650; /*int*/
  }
  _x_x4748 = kk_hml_hc__repeat__str(_x_x4749, _x_x4751, _ctx); /*string*/
  _x_x4745 = kk_std_core_types__lp__plus__plus__rp_(_x_x4746, _x_x4748, _ctx); /*string*/
  kk_string_t _x_x4752;
  kk_define_string_literal(static, _s_x4753, 12, "Show version", _ctx)
  _x_x4752 = kk_string_dup(_s_x4753, _ctx); /*string*/
  _b_x501_507 = kk_std_core_types__lp__plus__plus__rp_(_x_x4745, _x_x4752, _ctx); /*string*/
  kk_std_core_types__list xs_1_10653 = kk_std_core_list_append(flag__lines, opt__lines, _ctx); /*list<string>*/;
  kk_std_core_types__list all__opts;
  kk_std_core_types__list _x_x4754;
  kk_std_core_types__list _x_x4755 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x501_507), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _x_x4754 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x503_505), _x_x4755, _ctx); /*list<10021>*/
  all__opts = kk_std_core_list_append(xs_1_10653, _x_x4754, _ctx); /*list<string>*/
  kk_string_t init_11187;
  kk_string_t _x_x4756;
  kk_string_t _x_x4757;
  kk_define_string_literal(static, _s_x4758, 2, "\n\n", _ctx)
  _x_x4757 = kk_string_dup(_s_x4758, _ctx); /*string*/
  kk_string_t _x_x4759;
  kk_string_t _x_x4760;
  kk_string_t _x_x4761;
  kk_define_string_literal(static, _s_x4762, 11, "\n\nOPTIONS:\n", _ctx)
  _x_x4761 = kk_string_dup(_s_x4762, _ctx); /*string*/
  kk_string_t _x_x4763;
  kk_string_t _x_x4764;
  kk_define_string_literal(static, _s_x4765, 1, "\n", _ctx)
  _x_x4764 = kk_string_dup(_s_x4765, _ctx); /*string*/
  _x_x4763 = kk_std_core_list_joinsep(all__opts, _x_x4764, _ctx); /*string*/
  _x_x4760 = kk_std_core_types__lp__plus__plus__rp_(_x_x4761, _x_x4763, _ctx); /*string*/
  _x_x4759 = kk_std_core_types__lp__plus__plus__rp_(usage__line, _x_x4760, _ctx); /*string*/
  _x_x4756 = kk_std_core_types__lp__plus__plus__rp_(_x_x4757, _x_x4759, _ctx); /*string*/
  init_11187 = kk_std_core_types__lp__plus__plus__rp_(header, _x_x4756, _ctx); /*string*/
  kk_ref_t loc = kk_ref_alloc((kk_string_box(init_11187)),kk_context()); /*local-var<19156,string>*/;
  kk_unit_t __ = kk_Unit;
  bool _match_x2591;
  kk_integer_t _brw_x2594;
  kk_std_core_types__list _x_x4766;
  {
    struct kk_hml_Clispec* _con_x4767 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_7 = _con_x4767->app__args;
    kk_std_core_types__list_dup(_x_7, _ctx);
    _x_x4766 = _x_7; /*list<hml/cliarg>*/
  }
  _brw_x2594 = kk_std_core_list__lift_length_6003(_x_x4766, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2595 = kk_integer_gt_borrow(_brw_x2594,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2594, _ctx);
  _match_x2591 = _brw_x2595; /*bool*/
  if (_match_x2591) {
    kk_std_core_types__list arg__lines;
    kk_function_t _brw_x2592 = kk_hml_new_hc__cli__help_fun4768(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2593;
    kk_std_core_types__list _x_x4771;
    {
      struct kk_hml_Clispec* _con_x4772 = kk_hml__as_Clispec(spec, _ctx);
      kk_std_core_types__list _x_8 = _con_x4772->app__args;
      kk_std_core_types__list_dup(_x_8, _ctx);
      _x_x4771 = _x_8; /*list<hml/cliarg>*/
    }
    _brw_x2593 = kk_std_core_list_map(_x_x4771, _brw_x2592, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2592, _ctx);
    arg__lines = _brw_x2593; /*list<string>*/
    kk_string_t _b_x519_521;
    kk_string_t _x_x4773;
    kk_box_t _x_x4774;
    kk_ref_t _x_x4775 = kk_ref_dup(loc, _ctx); /*local-var<19156,string>*/
    _x_x4774 = kk_ref_get(_x_x4775,kk_context()); /*10000*/
    _x_x4773 = kk_string_unbox(_x_x4774); /*string*/
    kk_string_t _x_x4776;
    kk_string_t _x_x4777;
    kk_define_string_literal(static, _s_x4778, 8, "\n\nARGS:\n", _ctx)
    _x_x4777 = kk_string_dup(_s_x4778, _ctx); /*string*/
    kk_string_t _x_x4779;
    kk_string_t _x_x4780;
    kk_define_string_literal(static, _s_x4781, 1, "\n", _ctx)
    _x_x4780 = kk_string_dup(_s_x4781, _ctx); /*string*/
    _x_x4779 = kk_std_core_list_joinsep(arg__lines, _x_x4780, _ctx); /*string*/
    _x_x4776 = kk_std_core_types__lp__plus__plus__rp_(_x_x4777, _x_x4779, _ctx); /*string*/
    _b_x519_521 = kk_std_core_types__lp__plus__plus__rp_(_x_x4773, _x_x4776, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x519_521)),kk_context());
  }
  else {
    
  }
  kk_unit_t ___0 = kk_Unit;
  bool _match_x2586;
  kk_integer_t _brw_x2589;
  kk_std_core_types__list _x_x4782;
  {
    struct kk_hml_Clispec* _con_x4783 = kk_hml__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_9 = _con_x4783->app__commands;
    kk_std_core_types__list_dup(_x_9, _ctx);
    _x_x4782 = _x_9; /*list<(string, hml/clispec)>*/
  }
  _brw_x2589 = kk_std_core_list__lift_length_6003(_x_x4782, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2590 = kk_integer_gt_borrow(_brw_x2589,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2589, _ctx);
  _match_x2586 = _brw_x2590; /*bool*/
  if (_match_x2586) {
    kk_std_core_types__list cmd__lines;
    kk_function_t _brw_x2587 = kk_hml_new_hc__cli__help_fun4784(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2588;
    kk_std_core_types__list _x_x4787;
    {
      struct kk_hml_Clispec* _con_x4788 = kk_hml__as_Clispec(spec, _ctx);
      kk_string_t _pat_0_13 = _con_x4788->app__name;
      kk_string_t _pat_1_11 = _con_x4788->app__version;
      kk_string_t _pat_2_11 = _con_x4788->app__about;
      kk_std_core_types__list _pat_3_11 = _con_x4788->app__flags;
      kk_std_core_types__list _pat_4_10 = _con_x4788->app__options;
      kk_std_core_types__list _pat_5_10 = _con_x4788->app__args;
      kk_std_core_types__list _x_10 = _con_x4788->app__commands;
      if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
        kk_std_core_types__list_drop(_pat_5_10, _ctx);
        kk_std_core_types__list_drop(_pat_4_10, _ctx);
        kk_std_core_types__list_drop(_pat_3_11, _ctx);
        kk_string_drop(_pat_2_11, _ctx);
        kk_string_drop(_pat_1_11, _ctx);
        kk_string_drop(_pat_0_13, _ctx);
        kk_datatype_ptr_free(spec, _ctx);
      }
      else {
        kk_std_core_types__list_dup(_x_10, _ctx);
        kk_datatype_ptr_decref(spec, _ctx);
      }
      _x_x4787 = _x_10; /*list<(string, hml/clispec)>*/
    }
    _brw_x2588 = kk_std_core_list_map(_x_x4787, _brw_x2587, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2587, _ctx);
    cmd__lines = _brw_x2588; /*list<string>*/
    kk_string_t _b_x532_534;
    kk_string_t _x_x4789;
    kk_box_t _x_x4790;
    kk_ref_t _x_x4791 = kk_ref_dup(loc, _ctx); /*local-var<19156,string>*/
    _x_x4790 = kk_ref_get(_x_x4791,kk_context()); /*10000*/
    _x_x4789 = kk_string_unbox(_x_x4790); /*string*/
    kk_string_t _x_x4792;
    kk_string_t _x_x4793;
    kk_define_string_literal(static, _s_x4794, 12, "\n\nCOMMANDS:\n", _ctx)
    _x_x4793 = kk_string_dup(_s_x4794, _ctx); /*string*/
    kk_string_t _x_x4795;
    kk_string_t _x_x4796;
    kk_define_string_literal(static, _s_x4797, 1, "\n", _ctx)
    _x_x4796 = kk_string_dup(_s_x4797, _ctx); /*string*/
    _x_x4795 = kk_std_core_list_joinsep(cmd__lines, _x_x4796, _ctx); /*string*/
    _x_x4792 = kk_std_core_types__lp__plus__plus__rp_(_x_x4793, _x_x4795, _ctx); /*string*/
    _b_x532_534 = kk_std_core_types__lp__plus__plus__rp_(_x_x4789, _x_x4792, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x532_534)),kk_context());
  }
  else {
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
  }
  kk_string_t res;
  kk_box_t _x_x4798;
  kk_ref_t _x_x4799 = kk_ref_dup(loc, _ctx); /*local-var<19156,string>*/
  _x_x4798 = kk_ref_get(_x_x4799,kk_context()); /*10000*/
  res = kk_string_unbox(_x_x4798); /*string*/
  kk_box_t _x_x4800 = kk_std_core_hnd_prompt_local_var(loc, kk_string_box(res), _ctx); /*10001*/
  return kk_string_unbox(_x_x4800);
}

kk_string_t kk_hml_hc__cli__version__str(kk_hml__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> string */ 
  kk_string_t _x_x4801;
  {
    struct kk_hml_Clispec* _con_x4802 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4802->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4801 = _x; /*string*/
  }
  kk_string_t _x_x4803;
  kk_string_t _x_x4804;
  kk_define_string_literal(static, _s_x4805, 1, " ", _ctx)
  _x_x4804 = kk_string_dup(_s_x4805, _ctx); /*string*/
  kk_string_t _x_x4806;
  {
    struct kk_hml_Clispec* _con_x4807 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_0 = _con_x4807->app__name;
    kk_string_t _x_0 = _con_x4807->app__version;
    kk_string_t _pat_1_0 = _con_x4807->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x4807->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x4807->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x4807->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x4807->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4806 = _x_0; /*string*/
  }
  _x_x4803 = kk_std_core_types__lp__plus__plus__rp_(_x_x4804, _x_x4806, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4801, _x_x4803, _ctx);
}


// lift anonymous function
struct kk_hml_hc__has__flag_fun4812__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml_hc__has__flag_fun4812(kk_function_t _fself, kk_box_t _b_x547, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__has__flag_fun4812(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml_hc__has__flag_fun4812__t* _self = kk_function_alloc_as(struct kk_hml_hc__has__flag_fun4812__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__has__flag_fun4812, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__has__flag_fun4812(kk_function_t _fself, kk_box_t _b_x547, kk_context_t* _ctx) {
  struct kk_hml_hc__has__flag_fun4812__t* _self = kk_function_as(struct kk_hml_hc__has__flag_fun4812__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4813 = kk_string_unbox(_b_x547); /*string*/
  return kk_string_is_eq(_x_x4813,name,kk_context());
}

bool kk_hml_hc__has__flag(kk_hml__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> bool */ 
  kk_std_core_types__list _x_x4810;
  {
    struct kk_hml_Cliresult* _con_x4811 = kk_hml__as_Cliresult(r, _ctx);
    kk_std_core_types__list _x = _con_x4811->cli__flags;
    kk_std_core_types__list _pat_0 = _con_x4811->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4811->cli__positionals;
    kk_string_t _pat_2 = _con_x4811->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4811->cli__sub;
    if kk_likely(kk_datatype_ptr_is_unique(r, _ctx)) {
      kk_std_core_types__maybe_drop(_pat_3, _ctx);
      kk_string_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(r, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(r, _ctx);
    }
    _x_x4810 = _x; /*list<string>*/
  }
  return kk_std_core_list_any(_x_x4810, kk_hml_new_hc__has__flag_fun4812(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_hc__get__opt_fun4816__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml_hc__get__opt_fun4816(kk_function_t _fself, kk_box_t _b_x555, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__get__opt_fun4816(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml_hc__get__opt_fun4816__t* _self = kk_function_alloc_as(struct kk_hml_hc__get__opt_fun4816__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__get__opt_fun4816, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__get__opt_fun4816(kk_function_t _fself, kk_box_t _b_x555, kk_context_t* _ctx) {
  struct kk_hml_hc__get__opt_fun4816__t* _self = kk_function_as(struct kk_hml_hc__get__opt_fun4816__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_563 = kk_std_core_types__tuple2_unbox(_b_x555, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4817;
  {
    kk_box_t _box_x551 = pair_563.fst;
    kk_box_t _box_x552 = pair_563.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x551);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_563, _ctx);
    _x_x4817 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4817,name,kk_context());
}

kk_std_core_types__maybe kk_hml_hc__get__opt(kk_hml__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> maybe<string> */ 
  kk_std_core_types__maybe _match_x2585;
  kk_std_core_types__list _x_x4814;
  {
    struct kk_hml_Cliresult* _con_x4815 = kk_hml__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4815->cli__flags;
    kk_std_core_types__list _x = _con_x4815->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4815->cli__positionals;
    kk_string_t _pat_2 = _con_x4815->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4815->cli__sub;
    if kk_likely(kk_datatype_ptr_is_unique(r, _ctx)) {
      kk_std_core_types__maybe_drop(_pat_3, _ctx);
      kk_string_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(r, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(r, _ctx);
    }
    _x_x4814 = _x; /*list<(string, string)>*/
  }
  _match_x2585 = kk_std_core_list_find(_x_x4814, kk_hml_new_hc__get__opt_fun4816(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2585, _ctx)) {
    kk_box_t _box_x556 = _match_x2585._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x556, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2585, _ctx);
    kk_box_t _x_x4818;
    kk_string_t _x_x4819;
    {
      kk_box_t _box_x557 = pair_0.fst;
      kk_box_t _box_x558 = pair_0.snd;
      kk_string_t _x_1 = kk_string_unbox(_box_x558);
      kk_string_dup(_x_1, _ctx);
      kk_std_core_types__tuple2_drop(pair_0, _ctx);
      _x_x4819 = _x_1; /*string*/
    }
    _x_x4818 = kk_string_box(_x_x4819); /*10024*/
    return kk_std_core_types__new_Just(_x_x4818, _ctx);
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__get__opt__or_fun4822__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml_hc__get__opt__or_fun4822(kk_function_t _fself, kk_box_t _b_x568, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__get__opt__or_fun4822(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml_hc__get__opt__or_fun4822__t* _self = kk_function_alloc_as(struct kk_hml_hc__get__opt__or_fun4822__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__get__opt__or_fun4822, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__get__opt__or_fun4822(kk_function_t _fself, kk_box_t _b_x568, kk_context_t* _ctx) {
  struct kk_hml_hc__get__opt__or_fun4822__t* _self = kk_function_as(struct kk_hml_hc__get__opt__or_fun4822__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_575 = kk_std_core_types__tuple2_unbox(_b_x568, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4823;
  {
    kk_box_t _box_x564 = pair_575.fst;
    kk_box_t _box_x565 = pair_575.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x564);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_575, _ctx);
    _x_x4823 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4823,name,kk_context());
}

kk_string_t kk_hml_hc__get__opt__or(kk_hml__cliresult r, kk_string_t name, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (r : cliresult, name : string, default : string) -> string */ 
  kk_std_core_types__maybe _match_x2583;
  kk_std_core_types__list _x_x4820;
  {
    struct kk_hml_Cliresult* _con_x4821 = kk_hml__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4821->cli__flags;
    kk_std_core_types__list _x = _con_x4821->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4821->cli__positionals;
    kk_string_t _pat_2 = _con_x4821->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4821->cli__sub;
    if kk_likely(kk_datatype_ptr_is_unique(r, _ctx)) {
      kk_std_core_types__maybe_drop(_pat_3, _ctx);
      kk_string_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(r, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(r, _ctx);
    }
    _x_x4820 = _x; /*list<(string, string)>*/
  }
  _match_x2583 = kk_std_core_list_find(_x_x4820, kk_hml_new_hc__get__opt__or_fun4822(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2583, _ctx)) {
    kk_box_t _box_x569 = _match_x2583._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x569, KK_BORROWED, _ctx);
    kk_string_drop(kkloc_default, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2583, _ctx);
    {
      kk_box_t _box_x570 = pair_0.fst;
      kk_box_t _box_x571 = pair_0.snd;
      kk_string_t _x_1 = kk_string_unbox(_box_x571);
      kk_string_dup(_x_1, _ctx);
      kk_std_core_types__tuple2_drop(pair_0, _ctx);
      return _x_1;
    }
  }
  {
    kk_std_core_types__maybe _match_x2584 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2584, _ctx)) {
      kk_box_t _box_x572 = _match_x2584._cons.Just.value;
      kk_string_t v = kk_string_unbox(_box_x572);
      kk_string_drop(kkloc_default, _ctx);
      kk_string_dup(v, _ctx);
      kk_std_core_types__maybe_drop(_match_x2584, _ctx);
      return v;
    }
    {
      return kkloc_default;
    }
  }
}

kk_std_core_types__list kk_hml_hc__get__positionals(kk_hml__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> list<string> */ 
  {
    struct kk_hml_Cliresult* _con_x4824 = kk_hml__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4824->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4824->cli__options;
    kk_std_core_types__list _x = _con_x4824->cli__positionals;
    kk_string_t _pat_2 = _con_x4824->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4824->cli__sub;
    if kk_likely(kk_datatype_ptr_is_unique(r, _ctx)) {
      kk_std_core_types__maybe_drop(_pat_3, _ctx);
      kk_string_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(r, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(r, _ctx);
    }
    return _x;
  }
}

kk_string_t kk_hml_hc__get__command(kk_hml__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> string */ 
  {
    struct kk_hml_Cliresult* _con_x4825 = kk_hml__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4825->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4825->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4825->cli__positionals;
    kk_string_t _x = _con_x4825->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4825->cli__sub;
    if kk_likely(kk_datatype_ptr_is_unique(r, _ctx)) {
      kk_std_core_types__maybe_drop(_pat_3, _ctx);
      kk_std_core_types__list_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(r, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(r, _ctx);
    }
    return _x;
  }
}

kk_std_core_types__maybe kk_hml_hc__get__sub(kk_hml__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> maybe<cliresult> */ 
  {
    struct kk_hml_Cliresult* _con_x4826 = kk_hml__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4826->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4826->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4826->cli__positionals;
    kk_string_t _pat_3 = _con_x4826->cli__command;
    kk_std_core_types__maybe _x = _con_x4826->cli__sub;
    if kk_likely(kk_datatype_ptr_is_unique(r, _ctx)) {
      kk_string_drop(_pat_3, _ctx);
      kk_std_core_types__list_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(r, _ctx);
    }
    else {
      kk_std_core_types__maybe_dup(_x, _ctx);
      kk_datatype_ptr_decref(r, _ctx);
    }
    return _x;
  }
}


// lift anonymous function
struct kk_hml_hc__find__flag__long_fun4827__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml_hc__find__flag__long_fun4827(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__find__flag__long_fun4827(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml_hc__find__flag__long_fun4827__t* _self = kk_function_alloc_as(struct kk_hml_hc__find__flag__long_fun4827__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__find__flag__long_fun4827, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__find__flag__long_fun4827(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx) {
  struct kk_hml_hc__find__flag__long_fun4827__t* _self = kk_function_as(struct kk_hml_hc__find__flag__long_fun4827__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4828;
  kk_hml__cliflag _match_x2582 = kk_hml__cliflag_unbox(_b_x578, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x4829 = kk_hml__as_Cliflag(_match_x2582, _ctx);
    kk_string_t _x = _con_x4829->flag__name;
    kk_string_t _pat_0 = _con_x4829->flag__short;
    kk_string_t _pat_1 = _con_x4829->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2582, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2582, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2582, _ctx);
    }
    _x_x4828 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4828,name,kk_context());
}

kk_std_core_types__maybe kk_hml_hc__find__flag__long(kk_std_core_types__list flags, kk_string_t name, kk_context_t* _ctx) { /* (flags : list<cliflag>, name : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_hml_new_hc__find__flag__long_fun4827(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_hc__find__flag__short_fun4830__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_hml_hc__find__flag__short_fun4830(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__find__flag__short_fun4830(kk_string_t s, kk_context_t* _ctx) {
  struct kk_hml_hc__find__flag__short_fun4830__t* _self = kk_function_alloc_as(struct kk_hml_hc__find__flag__short_fun4830__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__find__flag__short_fun4830, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__find__flag__short_fun4830(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx) {
  struct kk_hml_hc__find__flag__short_fun4830__t* _self = kk_function_as(struct kk_hml_hc__find__flag__short_fun4830__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4831;
  kk_hml__cliflag _match_x2581 = kk_hml__cliflag_unbox(_b_x584, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x4832 = kk_hml__as_Cliflag(_match_x2581, _ctx);
    kk_string_t _pat_0 = _con_x4832->flag__name;
    kk_string_t _x = _con_x4832->flag__short;
    kk_string_t _pat_1 = _con_x4832->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2581, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2581, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2581, _ctx);
    }
    _x_x4831 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4831,s,kk_context());
}

kk_std_core_types__maybe kk_hml_hc__find__flag__short(kk_std_core_types__list flags, kk_string_t s, kk_context_t* _ctx) { /* (flags : list<cliflag>, s : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_hml_new_hc__find__flag__short_fun4830(s, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_hc__find__opt__long_fun4833__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml_hc__find__opt__long_fun4833(kk_function_t _fself, kk_box_t _b_x590, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__find__opt__long_fun4833(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml_hc__find__opt__long_fun4833__t* _self = kk_function_alloc_as(struct kk_hml_hc__find__opt__long_fun4833__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__find__opt__long_fun4833, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__find__opt__long_fun4833(kk_function_t _fself, kk_box_t _b_x590, kk_context_t* _ctx) {
  struct kk_hml_hc__find__opt__long_fun4833__t* _self = kk_function_as(struct kk_hml_hc__find__opt__long_fun4833__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4834;
  kk_hml__clioption _match_x2580 = kk_hml__clioption_unbox(_b_x590, KK_OWNED, _ctx); /*hml/clioption*/;
  {
    struct kk_hml_Clioption* _con_x4835 = kk_hml__as_Clioption(_match_x2580, _ctx);
    kk_string_t _x = _con_x4835->opt__name;
    kk_string_t _pat_0 = _con_x4835->opt__short;
    kk_string_t _pat_1 = _con_x4835->opt__help;
    kk_string_t _pat_2 = _con_x4835->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2580, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2580, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2580, _ctx);
    }
    _x_x4834 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4834,name,kk_context());
}

kk_std_core_types__maybe kk_hml_hc__find__opt__long(kk_std_core_types__list options, kk_string_t name, kk_context_t* _ctx) { /* (options : list<clioption>, name : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_hml_new_hc__find__opt__long_fun4833(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_hc__find__opt__short_fun4836__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_hml_hc__find__opt__short_fun4836(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__find__opt__short_fun4836(kk_string_t s, kk_context_t* _ctx) {
  struct kk_hml_hc__find__opt__short_fun4836__t* _self = kk_function_alloc_as(struct kk_hml_hc__find__opt__short_fun4836__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__find__opt__short_fun4836, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__find__opt__short_fun4836(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx) {
  struct kk_hml_hc__find__opt__short_fun4836__t* _self = kk_function_as(struct kk_hml_hc__find__opt__short_fun4836__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4837;
  kk_hml__clioption _match_x2579 = kk_hml__clioption_unbox(_b_x596, KK_OWNED, _ctx); /*hml/clioption*/;
  {
    struct kk_hml_Clioption* _con_x4838 = kk_hml__as_Clioption(_match_x2579, _ctx);
    kk_string_t _pat_0 = _con_x4838->opt__name;
    kk_string_t _x = _con_x4838->opt__short;
    kk_string_t _pat_1 = _con_x4838->opt__help;
    kk_string_t _pat_2 = _con_x4838->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2579, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2579, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2579, _ctx);
    }
    _x_x4837 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4837,s,kk_context());
}

kk_std_core_types__maybe kk_hml_hc__find__opt__short(kk_std_core_types__list options, kk_string_t s, kk_context_t* _ctx) { /* (options : list<clioption>, s : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_hml_new_hc__find__opt__short_fun4836(s, _ctx), _ctx);
}
extern bool kk_hml_hc__find__command_fun4839(kk_function_t _fself, kk_box_t _b_x604, kk_context_t* _ctx) {
  struct kk_hml_hc__find__command_fun4839__t* _self = kk_function_as(struct kk_hml_hc__find__command_fun4839__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4840;
  kk_std_core_types__tuple2 _match_x2578 = kk_std_core_types__tuple2_unbox(_b_x604, KK_OWNED, _ctx); /*(string, hml/clispec)*/;
  {
    kk_box_t _box_x600 = _match_x2578.fst;
    kk_box_t _box_x601 = _match_x2578.snd;
    kk_string_t _x = kk_string_unbox(_box_x600);
    kk_string_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2578, _ctx);
    _x_x4840 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4840,name,kk_context());
}


// lift anonymous function
struct kk_hml_hc__add__default_fun4845__t {
  struct kk_function_s _base;
  kk_hml__clioption o;
};
static bool kk_hml_hc__add__default_fun4845(kk_function_t _fself, kk_box_t _b_x612, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__add__default_fun4845(kk_hml__clioption o, kk_context_t* _ctx) {
  struct kk_hml_hc__add__default_fun4845__t* _self = kk_function_alloc_as(struct kk_hml_hc__add__default_fun4845__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__add__default_fun4845, kk_context());
  _self->o = o;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__add__default_fun4845(kk_function_t _fself, kk_box_t _b_x612, kk_context_t* _ctx) {
  struct kk_hml_hc__add__default_fun4845__t* _self = kk_function_as(struct kk_hml_hc__add__default_fun4845__t*, _fself, _ctx);
  kk_hml__clioption o = _self->o; /* hml/clioption */
  kk_drop_match(_self, {kk_hml__clioption_dup(o, _ctx);}, {}, _ctx)
  kk_string_t _x_x4846;
  kk_std_core_types__tuple2 _match_x2575 = kk_std_core_types__tuple2_unbox(_b_x612, KK_OWNED, _ctx); /*(string, string)*/;
  {
    kk_box_t _box_x608 = _match_x2575.fst;
    kk_box_t _box_x609 = _match_x2575.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x608);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2575, _ctx);
    _x_x4846 = _x_0; /*string*/
  }
  kk_string_t _x_x4847;
  {
    struct kk_hml_Clioption* _con_x4848 = kk_hml__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x4848->opt__name;
    kk_string_t _pat_0_3 = _con_x4848->opt__short;
    kk_string_t _pat_1_1 = _con_x4848->opt__help;
    kk_string_t _pat_2_0 = _con_x4848->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(o, _ctx)) {
      kk_string_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(o, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(o, _ctx);
    }
    _x_x4847 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x4846,_x_x4847,kk_context());
}

kk_std_core_types__list kk_hml_hc__add__default(kk_std_core_types__list acc, kk_hml__clioption o, kk_context_t* _ctx) { /* (acc : list<(string, string)>, o : clioption) -> list<(string, string)> */ 
  bool b_10683;
  kk_integer_t _brw_x2576;
  kk_string_t _x_x4841;
  {
    struct kk_hml_Clioption* _con_x4842 = kk_hml__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x4842->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x4841 = _x; /*string*/
  }
  _brw_x2576 = kk_std_core_string_chars_fs_count(_x_x4841, _ctx); /*int*/
  bool _brw_x2577 = kk_integer_eq_borrow(_brw_x2576,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2576, _ctx);
  b_10683 = _brw_x2577; /*bool*/
  if (b_10683) {
    kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
    return acc;
  }
  {
    bool b_0_10686;
    kk_std_core_types__list _x_x4843 = kk_std_core_types__list_dup(acc, _ctx); /*list<(string, string)>*/
    kk_function_t _x_x4844;
    kk_hml__clioption_dup(o, _ctx);
    _x_x4844 = kk_hml_new_hc__add__default_fun4845(o, _ctx); /*(10001) -> 10002 bool*/
    b_0_10686 = kk_std_core_list_any(_x_x4843, _x_x4844, _ctx); /*bool*/
    if (b_0_10686) {
      kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
      return acc;
    }
    {
      kk_std_core_types__list _x_x4849;
      kk_box_t _x_x4850;
      kk_std_core_types__tuple2 _x_x4851;
      kk_box_t _x_x4852;
      kk_string_t _x_x4853;
      {
        struct kk_hml_Clioption* _con_x4854 = kk_hml__as_Clioption(o, _ctx);
        kk_string_t _x_2 = _con_x4854->opt__name;
        kk_string_dup(_x_2, _ctx);
        _x_x4853 = _x_2; /*string*/
      }
      _x_x4852 = kk_string_box(_x_x4853); /*10037*/
      kk_box_t _x_x4855;
      kk_string_t _x_x4856;
      {
        struct kk_hml_Clioption* _con_x4857 = kk_hml__as_Clioption(o, _ctx);
        kk_string_t _pat_0_5 = _con_x4857->opt__name;
        kk_string_t _pat_1_4 = _con_x4857->opt__short;
        kk_string_t _pat_2_2 = _con_x4857->opt__help;
        kk_string_t _x_3 = _con_x4857->opt__default;
        if kk_likely(kk_datatype_ptr_is_unique(o, _ctx)) {
          kk_string_drop(_pat_2_2, _ctx);
          kk_string_drop(_pat_1_4, _ctx);
          kk_string_drop(_pat_0_5, _ctx);
          kk_datatype_ptr_free(o, _ctx);
        }
        else {
          kk_string_dup(_x_3, _ctx);
          kk_datatype_ptr_decref(o, _ctx);
        }
        _x_x4856 = _x_3; /*string*/
      }
      _x_x4855 = kk_string_box(_x_x4856); /*10038*/
      _x_x4851 = kk_std_core_types__new_Tuple2(_x_x4852, _x_x4855, _ctx); /*(10037, 10038)*/
      _x_x4850 = kk_std_core_types__tuple2_box(_x_x4851, _ctx); /*10021*/
      _x_x4849 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4850, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      return kk_std_core_list_append(acc, _x_x4849, _ctx);
    }
  }
}


// lift anonymous function
struct kk_hml_hc__apply__defaults_fun4861__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__apply__defaults_fun4861(kk_function_t _fself, kk_box_t _b_x627, kk_box_t _b_x628, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__apply__defaults_fun4861(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__apply__defaults_fun4861, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__apply__defaults_fun4861(kk_function_t _fself, kk_box_t _b_x627, kk_box_t _b_x628, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x4862;
  kk_std_core_types__list _x_x4863 = kk_std_core_types__list_unbox(_b_x627, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_hml__clioption _x_x4864 = kk_hml__clioption_unbox(_b_x628, KK_OWNED, _ctx); /*hml/clioption*/
  _x_x4862 = kk_hml_hc__add__default(_x_x4863, _x_x4864, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x4862, _ctx);
}

kk_std_core_types__list kk_hml_hc__apply__defaults(kk_hml__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<(string, string)>) -> list<(string, string)> */ 
  kk_box_t _x_x4858;
  kk_std_core_types__list _x_x4859;
  {
    struct kk_hml_Clispec* _con_x4860 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x4860->app__name;
    kk_string_t _pat_1 = _con_x4860->app__version;
    kk_string_t _pat_2 = _con_x4860->app__about;
    kk_std_core_types__list _pat_3 = _con_x4860->app__flags;
    kk_std_core_types__list _x = _con_x4860->app__options;
    kk_std_core_types__list _pat_4 = _con_x4860->app__args;
    kk_std_core_types__list _pat_5 = _con_x4860->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5, _ctx);
      kk_std_core_types__list_drop(_pat_4, _ctx);
      kk_std_core_types__list_drop(_pat_3, _ctx);
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4859 = _x; /*list<hml/clioption>*/
  }
  _x_x4858 = kk_std_core_list_foldl(_x_x4859, kk_std_core_types__list_box(options, _ctx), kk_hml_new_hc__apply__defaults_fun4861(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x4858, KK_OWNED, _ctx);
}

kk_string_t kk_hml_hc__check__one__arg(kk_std_core_types__list positionals, kk_string_t err, kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (positionals : list<string>, err : string, pair : (int, cliarg)) -> string */ 
  bool b_10694;
  kk_integer_t _brw_x2573;
  kk_string_t _x_x4865 = kk_string_dup(err, _ctx); /*string*/
  _brw_x2573 = kk_std_core_string_chars_fs_count(_x_x4865, _ctx); /*int*/
  bool _brw_x2574 = kk_integer_eq_borrow(_brw_x2573,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2573, _ctx);
  b_10694 = _brw_x2574; /*bool*/
  if (b_10694) {
    kk_string_drop(err, _ctx);
    {
      kk_box_t _box_x632 = pair.fst;
      kk_box_t _box_x633 = pair.snd;
      kk_hml__cliarg _x_0 = kk_hml__cliarg_unbox(_box_x633, KK_BORROWED, _ctx);
      kk_hml__cliarg_dup(_x_0, _ctx);
      {
        struct kk_hml_Cliarg* _con_x4866 = kk_hml__as_Cliarg(_x_0, _ctx);
        kk_string_t _pat_0_1 = _con_x4866->arg__name;
        kk_string_t _pat_1_0 = _con_x4866->arg__help;
        bool _x = _con_x4866->arg__required;
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_string_drop(_pat_1_0, _ctx);
          kk_string_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        if (_x) {
          bool _match_x2569;
          kk_integer_t _brw_x2571;
          {
            kk_box_t _box_x634 = pair.fst;
            kk_box_t _box_x635 = pair.snd;
            kk_integer_t _x_1 = kk_integer_unbox(_box_x634, _ctx);
            kk_integer_dup(_x_1, _ctx);
            _brw_x2571 = _x_1; /*int*/
          }
          kk_integer_t _brw_x2570 = kk_std_core_list__lift_length_6003(positionals, kk_integer_from_small(0), _ctx); /*int*/;
          bool _brw_x2572 = kk_integer_gte_borrow(_brw_x2571,_brw_x2570,kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2571, _ctx);
          kk_integer_drop(_brw_x2570, _ctx);
          _match_x2569 = _brw_x2572; /*bool*/
          if (_match_x2569) {
            kk_string_t _x_x4867;
            kk_define_string_literal(static, _s_x4868, 28, "missing required argument: <", _ctx)
            _x_x4867 = kk_string_dup(_s_x4868, _ctx); /*string*/
            kk_string_t _x_x4869;
            kk_string_t _x_x4870;
            {
              kk_box_t _box_x636 = pair.fst;
              kk_box_t _box_x637 = pair.snd;
              kk_hml__cliarg _x_3 = kk_hml__cliarg_unbox(_box_x637, KK_BORROWED, _ctx);
              kk_hml__cliarg_dup(_x_3, _ctx);
              kk_std_core_types__tuple2_drop(pair, _ctx);
              {
                struct kk_hml_Cliarg* _con_x4871 = kk_hml__as_Cliarg(_x_3, _ctx);
                kk_string_t _x_2 = _con_x4871->arg__name;
                kk_string_t _pat_0_4 = _con_x4871->arg__help;
                if kk_likely(kk_datatype_ptr_is_unique(_x_3, _ctx)) {
                  kk_string_drop(_pat_0_4, _ctx);
                  kk_datatype_ptr_free(_x_3, _ctx);
                }
                else {
                  kk_string_dup(_x_2, _ctx);
                  kk_datatype_ptr_decref(_x_3, _ctx);
                }
                _x_x4870 = _x_2; /*string*/
              }
            }
            kk_string_t _x_x4872;
            kk_define_string_literal(static, _s_x4873, 1, ">", _ctx)
            _x_x4872 = kk_string_dup(_s_x4873, _ctx); /*string*/
            _x_x4869 = kk_std_core_types__lp__plus__plus__rp_(_x_x4870, _x_x4872, _ctx); /*string*/
            return kk_std_core_types__lp__plus__plus__rp_(_x_x4867, _x_x4869, _ctx);
          }
          {
            kk_std_core_types__tuple2_drop(pair, _ctx);
            return kk_string_empty();
          }
        }
        {
          kk_std_core_types__list_drop(positionals, _ctx);
          kk_std_core_types__tuple2_drop(pair, _ctx);
          return kk_string_empty();
        }
      }
    }
  }
  {
    kk_std_core_types__list_drop(positionals, _ctx);
    kk_std_core_types__tuple2_drop(pair, _ctx);
    return err;
  }
}


// lift anonymous function
struct kk_hml_hc__check__required__args_fun4878__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__check__required__args_fun4878(kk_function_t _fself, kk_integer_t _b_x642, kk_box_t _b_x643, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__check__required__args_fun4878(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__check__required__args_fun4878, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__check__required__args_fun4878(kk_function_t _fself, kk_integer_t _b_x642, kk_box_t _b_x643, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t hc____i_656 = _b_x642; /*int*/;
  kk_hml__cliarg hc____x_657 = kk_hml__cliarg_unbox(_b_x643, KK_OWNED, _ctx); /*hml/cliarg*/;
  kk_integer_t _b_x638_654 = hc____i_656; /*int*/;
  kk_hml__cliarg _b_x639_655 = hc____x_657; /*hml/cliarg*/;
  kk_std_core_types__tuple2 _x_x4879 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x638_654, _ctx), kk_hml__cliarg_box(_b_x639_655, _ctx), _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x4879, _ctx);
}


// lift anonymous function
struct kk_hml_hc__check__required__args_fun4884__t {
  struct kk_function_s _base;
  kk_std_core_types__list positionals;
};
static kk_box_t kk_hml_hc__check__required__args_fun4884(kk_function_t _fself, kk_box_t _b_x647, kk_box_t _b_x648, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__check__required__args_fun4884(kk_std_core_types__list positionals, kk_context_t* _ctx) {
  struct kk_hml_hc__check__required__args_fun4884__t* _self = kk_function_alloc_as(struct kk_hml_hc__check__required__args_fun4884__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__check__required__args_fun4884, kk_context());
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__check__required__args_fun4884(kk_function_t _fself, kk_box_t _b_x647, kk_box_t _b_x648, kk_context_t* _ctx) {
  struct kk_hml_hc__check__required__args_fun4884__t* _self = kk_function_as(struct kk_hml_hc__check__required__args_fun4884__t*, _fself, _ctx);
  kk_std_core_types__list positionals = _self->positionals; /* list<string> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(positionals, _ctx);}, {}, _ctx)
  kk_string_t err_658 = kk_string_unbox(_b_x647); /*string*/;
  kk_std_core_types__tuple2 pair_659 = kk_std_core_types__tuple2_unbox(_b_x648, KK_OWNED, _ctx); /*(int, hml/cliarg)*/;
  kk_string_t _x_x4885 = kk_hml_hc__check__one__arg(positionals, err_658, pair_659, _ctx); /*string*/
  return kk_string_box(_x_x4885);
}

kk_string_t kk_hml_hc__check__required__args(kk_hml__clispec spec, kk_std_core_types__list positionals, kk_context_t* _ctx) { /* (spec : clispec, positionals : list<string>) -> string */ 
  kk_std_core_types__list _b_x644_649;
  kk_std_core_types__list _x_x4876;
  {
    struct kk_hml_Clispec* _con_x4877 = kk_hml__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x4877->app__name;
    kk_string_t _pat_1 = _con_x4877->app__version;
    kk_string_t _pat_2 = _con_x4877->app__about;
    kk_std_core_types__list _pat_3 = _con_x4877->app__flags;
    kk_std_core_types__list _pat_4 = _con_x4877->app__options;
    kk_std_core_types__list _x = _con_x4877->app__args;
    kk_std_core_types__list _pat_5 = _con_x4877->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(spec, _ctx)) {
      kk_std_core_types__list_drop(_pat_5, _ctx);
      kk_std_core_types__list_drop(_pat_4, _ctx);
      kk_std_core_types__list_drop(_pat_3, _ctx);
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(spec, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x, _ctx);
      kk_datatype_ptr_decref(spec, _ctx);
    }
    _x_x4876 = _x; /*list<hml/cliarg>*/
  }
  _b_x644_649 = kk_std_core_list_map_indexed(_x_x4876, kk_hml_new_hc__check__required__args_fun4878(_ctx), _ctx); /*list<(int, hml/cliarg)>*/
  kk_box_t _x_x4880;
  kk_box_t _x_x4881;
  kk_string_t _x_x4882 = kk_string_empty(); /*string*/
  _x_x4881 = kk_string_box(_x_x4882); /*10002*/
  _x_x4880 = kk_std_core_list_foldl(_b_x644_649, _x_x4881, kk_hml_new_hc__check__required__args_fun4884(positionals, _ctx), _ctx); /*10002*/
  return kk_string_unbox(_x_x4880);
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11114_fun4888__t {
  struct kk_function_s _base;
  kk_string_t _y_x10865;
  kk_std_core_types__list _y_x10866;
  kk_std_core_types__list _y_x10867;
  kk_std_core_types__list _y_x10868;
  kk_string_t _y_x10869;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11114_fun4888(kk_function_t _fself, kk_box_t _b_x665, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11114_fun4888(kk_string_t _y_x10865, kk_std_core_types__list _y_x10866, kk_std_core_types__list _y_x10867, kk_std_core_types__list _y_x10868, kk_string_t _y_x10869, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11114_fun4888__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11114_fun4888__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11114_fun4888, kk_context());
  _self->_y_x10865 = _y_x10865;
  _self->_y_x10866 = _y_x10866;
  _self->_y_x10867 = _y_x10867;
  _self->_y_x10868 = _y_x10868;
  _self->_y_x10869 = _y_x10869;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11114_fun4888(kk_function_t _fself, kk_box_t _b_x665, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11114_fun4888__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11114_fun4888__t*, _fself, _ctx);
  kk_string_t _y_x10865 = _self->_y_x10865; /* string */
  kk_std_core_types__list _y_x10866 = _self->_y_x10866; /* list<string> */
  kk_std_core_types__list _y_x10867 = _self->_y_x10867; /* list<(string, string)> */
  kk_std_core_types__list _y_x10868 = _self->_y_x10868; /* list<string> */
  kk_string_t _y_x10869 = _self->_y_x10869; /* string */
  kk_drop_match(_self, {kk_string_dup(_y_x10865, _ctx);kk_std_core_types__list_dup(_y_x10866, _ctx);kk_std_core_types__list_dup(_y_x10867, _ctx);kk_std_core_types__list_dup(_y_x10868, _ctx);kk_string_dup(_y_x10869, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10870_667 = kk_std_core_types__list_unbox(_b_x665, KK_OWNED, _ctx); /*list<string>*/;
  kk_hml__parseraw _x_x4889 = kk_hml__new_Parseraw(kk_reuse_null, 0, _y_x10865, _y_x10866, _y_x10867, _y_x10868, _y_x10869, _y_x10870_667, _ctx); /*hml/parseraw*/
  return kk_hml__parseraw_box(_x_x4889, _ctx);
}

kk_hml__parseraw kk_hml__mlift_hc__parse__loop_11114(kk_string_t _y_x10865, kk_std_core_types__list _y_x10866, kk_std_core_types__list _y_x10867, kk_std_core_types__list _y_x10868, kk_ref_t sub__args, kk_string_t _y_x10869, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, list<string>, sub_args : local-var<h,list<string>>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11189;
  kk_box_t _x_x4886 = kk_ref_get(sub__args,kk_context()); /*10000*/
  x_11189 = kk_std_core_types__list_unbox(_x_x4886, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11189, _ctx);
    kk_box_t _x_x4887 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11114_fun4888(_y_x10865, _y_x10866, _y_x10867, _y_x10868, _y_x10869, _ctx), _ctx); /*10001*/
    return kk_hml__parseraw_unbox(_x_x4887, KK_OWNED, _ctx);
  }
  {
    return kk_hml__new_Parseraw(kk_reuse_null, 0, _y_x10865, _y_x10866, _y_x10867, _y_x10868, _y_x10869, x_11189, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11115_fun4892__t {
  struct kk_function_s _base;
  kk_string_t _y_x10865;
  kk_std_core_types__list _y_x10866;
  kk_std_core_types__list _y_x10867;
  kk_std_core_types__list _y_x10868;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11115_fun4892(kk_function_t _fself, kk_box_t _b_x673, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11115_fun4892(kk_string_t _y_x10865, kk_std_core_types__list _y_x10866, kk_std_core_types__list _y_x10867, kk_std_core_types__list _y_x10868, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11115_fun4892__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11115_fun4892__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11115_fun4892, kk_context());
  _self->_y_x10865 = _y_x10865;
  _self->_y_x10866 = _y_x10866;
  _self->_y_x10867 = _y_x10867;
  _self->_y_x10868 = _y_x10868;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11115_fun4892(kk_function_t _fself, kk_box_t _b_x673, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11115_fun4892__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11115_fun4892__t*, _fself, _ctx);
  kk_string_t _y_x10865 = _self->_y_x10865; /* string */
  kk_std_core_types__list _y_x10866 = _self->_y_x10866; /* list<string> */
  kk_std_core_types__list _y_x10867 = _self->_y_x10867; /* list<(string, string)> */
  kk_std_core_types__list _y_x10868 = _self->_y_x10868; /* list<string> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(_y_x10865, _ctx);kk_std_core_types__list_dup(_y_x10866, _ctx);kk_std_core_types__list_dup(_y_x10867, _ctx);kk_std_core_types__list_dup(_y_x10868, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_string_t _y_x10869_675 = kk_string_unbox(_b_x673); /*string*/;
  kk_hml__parseraw _x_x4893 = kk_hml__mlift_hc__parse__loop_11114(_y_x10865, _y_x10866, _y_x10867, _y_x10868, sub__args, _y_x10869_675, _ctx); /*hml/parseraw*/
  return kk_hml__parseraw_box(_x_x4893, _ctx);
}

kk_hml__parseraw kk_hml__mlift_hc__parse__loop_11115(kk_string_t _y_x10865, kk_std_core_types__list _y_x10866, kk_std_core_types__list _y_x10867, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10868, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_string_t x_11197;
  kk_box_t _x_x4890 = kk_ref_get(subcmd,kk_context()); /*10000*/
  x_11197 = kk_string_unbox(_x_x4890); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11197, _ctx);
    kk_box_t _x_x4891 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11115_fun4892(_y_x10865, _y_x10866, _y_x10867, _y_x10868, sub__args, _ctx), _ctx); /*10001*/
    return kk_hml__parseraw_unbox(_x_x4891, KK_OWNED, _ctx);
  }
  {
    return kk_hml__mlift_hc__parse__loop_11114(_y_x10865, _y_x10866, _y_x10867, _y_x10868, sub__args, x_11197, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11116_fun4896__t {
  struct kk_function_s _base;
  kk_string_t _y_x10865;
  kk_std_core_types__list _y_x10866;
  kk_std_core_types__list _y_x10867;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11116_fun4896(kk_function_t _fself, kk_box_t _b_x681, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11116_fun4896(kk_string_t _y_x10865, kk_std_core_types__list _y_x10866, kk_std_core_types__list _y_x10867, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11116_fun4896__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11116_fun4896__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11116_fun4896, kk_context());
  _self->_y_x10865 = _y_x10865;
  _self->_y_x10866 = _y_x10866;
  _self->_y_x10867 = _y_x10867;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11116_fun4896(kk_function_t _fself, kk_box_t _b_x681, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11116_fun4896__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11116_fun4896__t*, _fself, _ctx);
  kk_string_t _y_x10865 = _self->_y_x10865; /* string */
  kk_std_core_types__list _y_x10866 = _self->_y_x10866; /* list<string> */
  kk_std_core_types__list _y_x10867 = _self->_y_x10867; /* list<(string, string)> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10865, _ctx);kk_std_core_types__list_dup(_y_x10866, _ctx);kk_std_core_types__list_dup(_y_x10867, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10868_683 = kk_std_core_types__list_unbox(_b_x681, KK_OWNED, _ctx); /*list<string>*/;
  kk_hml__parseraw _x_x4897 = kk_hml__mlift_hc__parse__loop_11115(_y_x10865, _y_x10866, _y_x10867, sub__args, subcmd, _y_x10868_683, _ctx); /*hml/parseraw*/
  return kk_hml__parseraw_box(_x_x4897, _ctx);
}

kk_hml__parseraw kk_hml__mlift_hc__parse__loop_11116(kk_string_t _y_x10865, kk_std_core_types__list _y_x10866, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10867, kk_context_t* _ctx) { /* forall<h> (string, list<string>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<(string, string)>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11199;
  kk_box_t _x_x4894 = kk_ref_get(positionals,kk_context()); /*10000*/
  x_11199 = kk_std_core_types__list_unbox(_x_x4894, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11199, _ctx);
    kk_box_t _x_x4895 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11116_fun4896(_y_x10865, _y_x10866, _y_x10867, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_hml__parseraw_unbox(_x_x4895, KK_OWNED, _ctx);
  }
  {
    return kk_hml__mlift_hc__parse__loop_11115(_y_x10865, _y_x10866, _y_x10867, sub__args, subcmd, x_11199, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11117_fun4900__t {
  struct kk_function_s _base;
  kk_string_t _y_x10865;
  kk_std_core_types__list _y_x10866;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11117_fun4900(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11117_fun4900(kk_string_t _y_x10865, kk_std_core_types__list _y_x10866, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11117_fun4900__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11117_fun4900__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11117_fun4900, kk_context());
  _self->_y_x10865 = _y_x10865;
  _self->_y_x10866 = _y_x10866;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11117_fun4900(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11117_fun4900__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11117_fun4900__t*, _fself, _ctx);
  kk_string_t _y_x10865 = _self->_y_x10865; /* string */
  kk_std_core_types__list _y_x10866 = _self->_y_x10866; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10865, _ctx);kk_std_core_types__list_dup(_y_x10866, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10867_691 = kk_std_core_types__list_unbox(_b_x689, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_hml__parseraw _x_x4901 = kk_hml__mlift_hc__parse__loop_11116(_y_x10865, _y_x10866, positionals, sub__args, subcmd, _y_x10867_691, _ctx); /*hml/parseraw*/
  return kk_hml__parseraw_box(_x_x4901, _ctx);
}

kk_hml__parseraw kk_hml__mlift_hc__parse__loop_11117(kk_string_t _y_x10865, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10866, kk_context_t* _ctx) { /* forall<h> (string, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11201;
  kk_box_t _x_x4898 = kk_ref_get(options,kk_context()); /*10000*/
  x_11201 = kk_std_core_types__list_unbox(_x_x4898, KK_OWNED, _ctx); /*list<(string, string)>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11201, _ctx);
    kk_box_t _x_x4899 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11117_fun4900(_y_x10865, _y_x10866, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_hml__parseraw_unbox(_x_x4899, KK_OWNED, _ctx);
  }
  {
    return kk_hml__mlift_hc__parse__loop_11116(_y_x10865, _y_x10866, positionals, sub__args, subcmd, x_11201, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11118_fun4904__t {
  struct kk_function_s _base;
  kk_string_t _y_x10865;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11118_fun4904(kk_function_t _fself, kk_box_t _b_x697, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11118_fun4904(kk_string_t _y_x10865, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11118_fun4904__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11118_fun4904__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11118_fun4904, kk_context());
  _self->_y_x10865 = _y_x10865;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11118_fun4904(kk_function_t _fself, kk_box_t _b_x697, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11118_fun4904__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11118_fun4904__t*, _fself, _ctx);
  kk_string_t _y_x10865 = _self->_y_x10865; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10865, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10866_699 = kk_std_core_types__list_unbox(_b_x697, KK_OWNED, _ctx); /*list<string>*/;
  kk_hml__parseraw _x_x4905 = kk_hml__mlift_hc__parse__loop_11117(_y_x10865, options, positionals, sub__args, subcmd, _y_x10866_699, _ctx); /*hml/parseraw*/
  return kk_hml__parseraw_box(_x_x4905, _ctx);
}

kk_hml__parseraw kk_hml__mlift_hc__parse__loop_11118(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t _y_x10865, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11203;
  kk_box_t _x_x4902 = kk_ref_get(flags,kk_context()); /*10000*/
  x_11203 = kk_std_core_types__list_unbox(_x_x4902, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11203, _ctx);
    kk_box_t _x_x4903 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11118_fun4904(_y_x10865, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_hml__parseraw_unbox(_x_x4903, KK_OWNED, _ctx);
  }
  {
    return kk_hml__mlift_hc__parse__loop_11117(_y_x10865, options, positionals, sub__args, subcmd, x_11203, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11120_fun4908__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11120_fun4908(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11120_fun4908(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11120_fun4908, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11120_fun4908(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x4909;
  kk_std_core_types__list _y_x10742_707 = kk_std_core_types__list_unbox(_b_x705, KK_OWNED, _ctx); /*list<string>*/;
  kk_integer_t _brw_x2558 = kk_std_core_list__lift_length_6003(_y_x10742_707, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2559 = kk_integer_gt_borrow(_brw_x2558,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2558, _ctx);
  _x_x4909 = _brw_x2559; /*bool*/
  return kk_bool_box(_x_x4909);
}

bool kk_hml__mlift_hc__parse__loop_11120(kk_ref_t remaining, kk_string_t _y_x10741, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, string) -> <local<h>,div,exn,hica-brk> bool */ 
  bool _match_x2554;
  kk_integer_t _brw_x2560 = kk_std_core_string_chars_fs_count(_y_x10741, _ctx); /*int*/;
  bool _brw_x2561 = kk_integer_eq_borrow(_brw_x2560,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2560, _ctx);
  _match_x2554 = _brw_x2561; /*bool*/
  if (_match_x2554) {
    kk_std_core_types__list x_11205;
    kk_box_t _x_x4906 = kk_ref_get(remaining,kk_context()); /*10000*/
    x_11205 = kk_std_core_types__list_unbox(_x_x4906, KK_OWNED, _ctx); /*list<string>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11205, _ctx);
      kk_box_t _x_x4907 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11120_fun4908(_ctx), _ctx); /*10001*/
      return kk_bool_unbox(_x_x4907);
    }
    {
      kk_std_core_types__list _y_x10742_708 = x_11205; /*list<string>*/;
      kk_integer_t _brw_x2556 = kk_std_core_list__lift_length_6003(_y_x10742_708, kk_integer_from_small(0), _ctx); /*int*/;
      bool _brw_x2557 = kk_integer_gt_borrow(_brw_x2556,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2556, _ctx);
      return _brw_x2557;
    }
  }
  {
    kk_ref_drop(remaining, _ctx);
    return false;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11121_fun4911__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11121_fun4911(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11121_fun4911(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11121_fun4911, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11121_fun4911(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11208 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4912 = kk_std_core_hnd__as_Ev(ev_11208, _ctx);
    kk_box_t _box_x709 = _con_x4912->hnd;
    int32_t m = _con_x4912->marker;
    kk_hml__hica_brk h = kk_hml__hica_brk_unbox(_box_x709, KK_BORROWED, _ctx);
    kk_hml__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__Hnd_hica_brk* _con_x4913 = kk_hml__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4913->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4913->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x712 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x712, (_fun_unbox_x712, m, ev_11208, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11121(kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<h> (wild_@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x715_717 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4910 = kk_std_core_hnd__open_at0(_b_x715_717, kk_hml__new_mlift_hc__parse__loop_11121_fun4911(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4910); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11122_fun4915__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11122_fun4915(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11122_fun4915(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11122_fun4915, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11122_fun4915(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11210 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4916 = kk_std_core_hnd__as_Ev(ev_11210, _ctx);
    kk_box_t _box_x719 = _con_x4916->hnd;
    int32_t m = _con_x4916->marker;
    kk_hml__hica_brk h = kk_hml__hica_brk_unbox(_box_x719, KK_BORROWED, _ctx);
    kk_hml__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__Hnd_hica_brk* _con_x4917 = kk_hml__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4917->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4917->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x722 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x722, (_fun_unbox_x722, m, ev_11210, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11122(kk_unit_t wild___0_0, kk_context_t* _ctx) { /* forall<h> (wild_@0@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x725_727 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4914 = kk_std_core_hnd__open_at0(_b_x725_727, kk_hml__new_mlift_hc__parse__loop_11122_fun4915(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4914); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11123_fun4919__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11123_fun4919(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11123_fun4919(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11123_fun4919, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11123_fun4919(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11212 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4920 = kk_std_core_hnd__as_Ev(ev_11212, _ctx);
    kk_box_t _box_x729 = _con_x4920->hnd;
    int32_t m = _con_x4920->marker;
    kk_hml__hica_brk h = kk_hml__hica_brk_unbox(_box_x729, KK_BORROWED, _ctx);
    kk_hml__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__Hnd_hica_brk* _con_x4921 = kk_hml__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4921->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4921->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x732 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x732, (_fun_unbox_x732, m, ev_11212, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11123(kk_unit_t wild___1, kk_context_t* _ctx) { /* forall<h> (wild_@1 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x735_737 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4918 = kk_std_core_hnd__open_at0(_b_x735_737, kk_hml__new_mlift_hc__parse__loop_11123_fun4919(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4918); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11124_fun4923__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11124_fun4923(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11124_fun4923(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11124_fun4923, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11124_fun4923(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11214 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4924 = kk_std_core_hnd__as_Ev(ev_11214, _ctx);
    kk_box_t _box_x739 = _con_x4924->hnd;
    int32_t m = _con_x4924->marker;
    kk_hml__hica_brk h = kk_hml__hica_brk_unbox(_box_x739, KK_BORROWED, _ctx);
    kk_hml__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__Hnd_hica_brk* _con_x4925 = kk_hml__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4925->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4925->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x742 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x742, (_fun_unbox_x742, m, ev_11214, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11124(kk_unit_t wild___2, kk_context_t* _ctx) { /* forall<h> (wild_@2 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x745_747 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4922 = kk_std_core_hnd__open_at0(_b_x745_747, kk_hml__new_mlift_hc__parse__loop_11124_fun4923(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4922); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11125_fun4927__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11125_fun4927(kk_function_t _fself, kk_box_t _b_x754, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11125_fun4927(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11125_fun4927, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11125_fun4927(kk_function_t _fself, kk_box_t _b_x754, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___2_756 = kk_Unit;
  kk_unit_unbox(_b_x754);
  kk_unit_t _x_x4928 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11124(wild___2_756, _ctx);
  return kk_unit_box(_x_x4928);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11125(kk_std_core_types__list _y_x10759, kk_ref_t positionals, kk_std_core_types__list _y_x10760, kk_context_t* _ctx) { /* forall<h> (list<string>, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x750_752 = kk_std_core_list_append(_y_x10759, _y_x10760, _ctx); /*list<string>*/;
  kk_unit_t x_11216 = kk_Unit;
  kk_unit_t _brw_x2553 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x750_752, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2553;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x4926 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11125_fun4927(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x4926); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11124(x_11216, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11126_fun4931__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10759;
  kk_ref_t positionals;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11126_fun4931(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11126_fun4931(kk_std_core_types__list _y_x10759, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11126_fun4931__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11126_fun4931__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11126_fun4931, kk_context());
  _self->_y_x10759 = _y_x10759;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11126_fun4931(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11126_fun4931__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11126_fun4931__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10759 = _self->_y_x10759; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10759, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10760_764 = kk_std_core_types__list_unbox(_b_x762, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x4932 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11125(_y_x10759, positionals, _y_x10760_764, _ctx);
  return kk_unit_box(_x_x4932);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11126(kk_ref_t positionals, kk_ref_t remaining, kk_std_core_types__list _y_x10759, kk_context_t* _ctx) { /* forall<h> (positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11218;
  kk_box_t _x_x4929 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11218 = kk_std_core_types__list_unbox(_x_x4929, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11218, _ctx);
    kk_box_t _x_x4930 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11126_fun4931(_y_x10759, positionals, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x4930); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11125(_y_x10759, positionals, x_11218, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_hml__mlift_hc__parse__loop_11127(kk_string_t name, kk_ref_t options, kk_string_t v, kk_std_core_types__list _y_x10769, kk_context_t* _ctx) { /* forall<h> (name : string, options : local-var<h,list<(string, string)>>, v : string, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x770_772;
  kk_std_core_types__list _x_x4933;
  kk_box_t _x_x4934;
  kk_std_core_types__tuple2 _x_x4935 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x4934 = kk_std_core_types__tuple2_box(_x_x4935, _ctx); /*10021*/
  _x_x4933 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4934, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x770_772 = kk_std_core_list_append(_y_x10769, _x_x4933, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2550 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x770_772, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2550; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11128_fun4940__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11128_fun4940(kk_function_t _fself, kk_box_t _b_x779, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11128_fun4940(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11128_fun4940, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11128_fun4940(kk_function_t _fself, kk_box_t _b_x779, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x4941;
  kk_hml__clispec _match_x2549 = kk_hml__clispec_unbox(_b_x779, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x4942 = kk_hml__as_Clispec(_match_x2549, _ctx);
    kk_string_t _pat_0_6 = _con_x4942->app__name;
    kk_string_t _pat_1_4 = _con_x4942->app__version;
    kk_string_t _pat_2_1 = _con_x4942->app__about;
    kk_std_core_types__list _pat_3_0 = _con_x4942->app__flags;
    kk_std_core_types__list _x_0 = _con_x4942->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x4942->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x4942->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2549, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_string_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_6, _ctx);
      kk_datatype_ptr_free(_match_x2549, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2549, _ctx);
    }
    _x_x4941 = _x_0; /*list<hml/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x4941, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11128_fun4944__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11128_fun4944(kk_function_t _fself, kk_box_t _b_x789, kk_box_t _b_x790, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11128_fun4944(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11128_fun4944, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11128_fun4946__t {
  struct kk_function_s _base;
  kk_string_t name_0_822;
};
static bool kk_hml__mlift_hc__parse__loop_11128_fun4946(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11128_fun4946(kk_string_t name_0_822, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11128_fun4946__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11128_fun4946__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11128_fun4946, kk_context());
  _self->name_0_822 = name_0_822;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11128_fun4946(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11128_fun4946__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11128_fun4946__t*, _fself, _ctx);
  kk_string_t name_0_822 = _self->name_0_822; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_822, _ctx);}, {}, _ctx)
  kk_string_t _x_x4947;
  kk_hml__clioption _match_x2548 = kk_hml__clioption_unbox(_b_x785, KK_OWNED, _ctx); /*hml/clioption*/;
  {
    struct kk_hml_Clioption* _con_x4948 = kk_hml__as_Clioption(_match_x2548, _ctx);
    kk_string_t _x = _con_x4948->opt__name;
    kk_string_t _pat_0_5 = _con_x4948->opt__short;
    kk_string_t _pat_1_3 = _con_x4948->opt__help;
    kk_string_t _pat_2_0 = _con_x4948->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2548, _ctx)) {
      kk_string_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_5, _ctx);
      kk_datatype_ptr_free(_match_x2548, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2548, _ctx);
    }
    _x_x4947 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4947,name_0_822,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11128_fun4944(kk_function_t _fself, kk_box_t _b_x789, kk_box_t _b_x790, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x4945;
  kk_std_core_types__list options_0_821 = kk_std_core_types__list_unbox(_b_x789, KK_OWNED, _ctx); /*list<hml/clioption>*/;
  kk_string_t name_0_822 = kk_string_unbox(_b_x790); /*string*/;
  _x_x4945 = kk_std_core_list_find(options_0_821, kk_hml__new_mlift_hc__parse__loop_11128_fun4946(name_0_822, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x4945, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11128_fun4954__t {
  struct kk_function_s _base;
  kk_string_t name;
  kk_ref_t options;
  kk_string_t v;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11128_fun4954(kk_function_t _fself, kk_std_core_types__list _y_x10769, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11128_fun4954(kk_string_t name, kk_ref_t options, kk_string_t v, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11128_fun4954__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11128_fun4954__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11128_fun4954, kk_context());
  _self->name = name;
  _self->options = options;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__mlift_hc__parse__loop_11128_fun4954(kk_function_t _fself, kk_std_core_types__list _y_x10769, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11128_fun4954__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11128_fun4954__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_string_t v = _self->v; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);kk_ref_dup(options, _ctx);kk_string_dup(v, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x801_803;
  kk_std_core_types__list _x_x4955;
  kk_box_t _x_x4956;
  kk_std_core_types__tuple2 _x_x4957 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x4956 = kk_std_core_types__tuple2_box(_x_x4957, _ctx); /*10021*/
  _x_x4955 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4956, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x801_803 = kk_std_core_list_append(_y_x10769, _x_x4955, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2547 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x801_803, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2547; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11128_fun4959__t {
  struct kk_function_s _base;
  kk_function_t next_11221;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11128_fun4959(kk_function_t _fself, kk_box_t _b_x809, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11128_fun4959(kk_function_t next_11221, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11128_fun4959__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11128_fun4959__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11128_fun4959, kk_context());
  _self->next_11221 = next_11221;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11128_fun4959(kk_function_t _fself, kk_box_t _b_x809, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11128_fun4959__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11128_fun4959__t*, _fself, _ctx);
  kk_function_t next_11221 = _self->next_11221; /* (list<(string, string)>) -> <local<23359>,exn,hml/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11221, _ctx);}, {}, _ctx)
  kk_unit_t _x_x4960 = kk_Unit;
  kk_std_core_types__list _x_x4961 = kk_std_core_types__list_unbox(_b_x809, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11221, (next_11221, _x_x4961, _ctx), _ctx);
  return kk_unit_box(_x_x4960);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11128(kk_std_core_types__list _c_x10765, kk_ref_t error, kk_ref_t options, kk_hml__clispec spec, kk_string_t name, kk_context_t* _ctx) { /* forall<h> (list<string>, error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, name : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t v;
  kk_std_core_types__list _x_x4936 = kk_std_core_list_drop(_c_x10765, kk_integer_from_small(1), _ctx); /*list<10001>*/
  kk_string_t _x_x4937;
  kk_define_string_literal(static, _s_x4938, 1, "=", _ctx)
  _x_x4937 = kk_string_dup(_s_x4938, _ctx); /*string*/
  v = kk_std_core_list_joinsep(_x_x4936, _x_x4937, _ctx); /*string*/
  kk_std_core_types__list _x_x1_4_11030;
  kk_box_t _x_x4939 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11128_fun4940(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
  _x_x1_4_11030 = kk_std_core_types__list_unbox(_x_x4939, KK_OWNED, _ctx); /*list<hml/clioption>*/
  kk_std_core_types__maybe _match_x2544;
  kk_box_t _x_x4943;
  kk_box_t _x_x4949;
  kk_string_t _x_x4950 = kk_string_dup(name, _ctx); /*string*/
  _x_x4949 = kk_string_box(_x_x4950); /*10001*/
  _x_x4943 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11128_fun4944(_ctx), kk_std_core_types__list_box(_x_x1_4_11030, _ctx), _x_x4949, _ctx); /*10002*/
  _match_x2544 = kk_std_core_types__maybe_unbox(_x_x4943, KK_OWNED, _ctx); /*maybe<hml/clioption>*/
  if (kk_std_core_types__is_Just(_match_x2544, _ctx)) {
    kk_box_t _box_x791 = _match_x2544._cons.Just.value;
    kk_hml__clioption _pat_15_0 = kk_hml__clioption_unbox(_box_x791, KK_BORROWED, _ctx);
    struct kk_hml_Clioption* _con_x4951 = kk_hml__as_Clioption(_pat_15_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__maybe_drop(_match_x2544, _ctx);
    kk_std_core_types__list x_11220;
    kk_box_t _x_x4952;
    kk_ref_t _x_x4953 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x4952 = kk_ref_get(_x_x4953,kk_context()); /*10000*/
    x_11220 = kk_std_core_types__list_unbox(_x_x4952, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_function_t next_11221 = kk_hml__new_mlift_hc__parse__loop_11128_fun4954(name, options, v, _ctx); /*(list<(string, string)>) -> <local<23359>,exn,hml/hica-brk,div> ()*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11220, _ctx);
      kk_box_t _x_x4958 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11128_fun4959(next_11221, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x4958); return kk_Unit;
    }
    {
      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11221, (next_11221, x_11220, _ctx), _ctx); return kk_Unit;
    }
  }
  {
    kk_string_drop(v, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x811_819;
    kk_string_t _x_x4962;
    kk_define_string_literal(static, _s_x4963, 18, "unknown option: --", _ctx)
    _x_x4962 = kk_string_dup(_s_x4963, _ctx); /*string*/
    _b_x811_819 = kk_std_core_types__lp__plus__plus__rp_(_x_x4962, name, _ctx); /*string*/
    kk_unit_t _brw_x2545 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x811_819)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2545; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11129_fun4975__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11129_fun4975(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11129_fun4975(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11129_fun4975, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11129_fun4975(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4976;
  kk_std_core_types__maybe _match_x2543 = kk_std_core_types__maybe_unbox(_b_x830, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2543, _ctx)) {
    kk_box_t _box_x823 = _match_x2543._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x823);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2543, _ctx);
    kk_box_drop(_b_x831, _ctx);
    _x_x4976 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x824_836;
    kk_string_t _x_x4977;
    kk_define_string_literal(static, _s_x4978, 22, "unexpected Nothing in ", _ctx)
    _x_x4977 = kk_string_dup(_s_x4978, _ctx); /*string*/
    kk_string_t _x_x4979 = kk_string_unbox(_b_x831); /*string*/
    _b_x824_836 = kk_std_core_types__lp__plus__plus__rp_(_x_x4977, _x_x4979, _ctx); /*string*/
    kk_box_t _x_x4980 = kk_std_core_exn_throw(_b_x824_836, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x4976 = kk_string_unbox(_x_x4980); /*string*/
  }
  return kk_string_box(_x_x4976);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11129_fun4982__t {
  struct kk_function_s _base;
  kk_std_core_types__list _c_x10765;
  kk_ref_t error;
  kk_ref_t options;
  kk_hml__clispec spec;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11129_fun4982(kk_function_t _fself, kk_box_t _b_x841, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11129_fun4982(kk_std_core_types__list _c_x10765, kk_ref_t error, kk_ref_t options, kk_hml__clispec spec, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11129_fun4982__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11129_fun4982__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11129_fun4982, kk_context());
  _self->_c_x10765 = _c_x10765;
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11129_fun4982(kk_function_t _fself, kk_box_t _b_x841, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11129_fun4982__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11129_fun4982__t*, _fself, _ctx);
  kk_std_core_types__list _c_x10765 = _self->_c_x10765; /* list<string> */
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_hml__clispec spec = _self->spec; /* hml/clispec */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_c_x10765, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_hml__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_string_t name_843 = kk_string_unbox(_b_x841); /*string*/;
  kk_unit_t _x_x4983 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11128(_c_x10765, error, options, spec, name_843, _ctx);
  return kk_unit_box(_x_x4983);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11129(kk_ref_t error, kk_ref_t options, kk_hml__clispec spec, kk_std_core_types__list _c_x10765, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, list<string>) -> () */ 
  kk_std_core_types__maybe _x_x1_3_11028;
  kk_std_core_types__list _x_x4964 = kk_std_core_types__list_dup(_c_x10765, _ctx); /*list<string>*/
  _x_x1_3_11028 = kk_std_core_list__index(_x_x4964, kk_integer_from_small(0), _ctx); /*maybe<string>*/
  kk_string_t _x_x2_2_11029;
  kk_string_t _x_x4965;
  kk_define_string_literal(static, _s_x4966, 6, "hml.kk", _ctx)
  _x_x4965 = kk_string_dup(_s_x4966, _ctx); /*string*/
  kk_string_t _x_x4967;
  kk_string_t _x_x4968;
  kk_define_string_literal(static, _s_x4969, 1, "(", _ctx)
  _x_x4968 = kk_string_dup(_s_x4969, _ctx); /*string*/
  kk_string_t _x_x4970;
  kk_string_t _x_x4971 = kk_std_core_int_show(kk_integer_from_small(763), _ctx); /*string*/
  kk_string_t _x_x4972;
  kk_define_string_literal(static, _s_x4973, 1, ")", _ctx)
  _x_x4972 = kk_string_dup(_s_x4973, _ctx); /*string*/
  _x_x4970 = kk_std_core_types__lp__plus__plus__rp_(_x_x4971, _x_x4972, _ctx); /*string*/
  _x_x4967 = kk_std_core_types__lp__plus__plus__rp_(_x_x4968, _x_x4970, _ctx); /*string*/
  _x_x2_2_11029 = kk_std_core_types__lp__plus__plus__rp_(_x_x4965, _x_x4967, _ctx); /*string*/
  kk_ssize_t _b_x826_832 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11226;
  kk_box_t _x_x4974 = kk_std_core_hnd__open_at2(_b_x826_832, kk_hml__new_mlift_hc__parse__loop_11129_fun4975(_ctx), kk_std_core_types__maybe_box(_x_x1_3_11028, _ctx), kk_string_box(_x_x2_2_11029), _ctx); /*10002*/
  x_11226 = kk_string_unbox(_x_x4974); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11226, _ctx);
    kk_box_t _x_x4981 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11129_fun4982(_c_x10765, error, options, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x4981); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11128(_c_x10765, error, options, spec, x_11226, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_hml__mlift_hc__parse__loop_11130(kk_ref_t flags, kk_string_t name_0_0, kk_std_core_types__list _y_x10773, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x847_849;
  kk_std_core_types__list _x_x4984 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x847_849 = kk_std_core_list_append(_y_x10773, _x_x4984, _ctx); /*list<string>*/
  kk_unit_t _brw_x2541 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x847_849, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2541; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11132_fun4987__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11132_fun4987(kk_function_t _fself, kk_std_core_types__list _y_x10783, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11132_fun4987(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11132_fun4987__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11132_fun4987__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11132_fun4987, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__mlift_hc__parse__loop_11132_fun4987(kk_function_t _fself, kk_std_core_types__list _y_x10783, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11132_fun4987__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11132_fun4987__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x861_863 = kk_std_core_list_drop(_y_x10783, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2539 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x861_863, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2539; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11132_fun4989__t {
  struct kk_function_s _base;
  kk_function_t next_11229;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11132_fun4989(kk_function_t _fself, kk_box_t _b_x865, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11132_fun4989(kk_function_t next_11229, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11132_fun4989__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11132_fun4989__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11132_fun4989, kk_context());
  _self->next_11229 = next_11229;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11132_fun4989(kk_function_t _fself, kk_box_t _b_x865, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11132_fun4989__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11132_fun4989__t*, _fself, _ctx);
  kk_function_t next_11229 = _self->next_11229; /* (list<string>) -> <local<23359>,exn,hml/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11229, _ctx);}, {}, _ctx)
  kk_unit_t _x_x4990 = kk_Unit;
  kk_std_core_types__list _x_x4991 = kk_std_core_types__list_unbox(_b_x865, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11229, (next_11229, _x_x4991, _ctx), _ctx);
  return kk_unit_box(_x_x4990);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11132(kk_ref_t remaining, kk_unit_t wild___3, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11228;
  kk_box_t _x_x4985;
  kk_ref_t _x_x4986 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x4985 = kk_ref_get(_x_x4986,kk_context()); /*10000*/
  x_11228 = kk_std_core_types__list_unbox(_x_x4985, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11229 = kk_hml__new_mlift_hc__parse__loop_11132_fun4987(remaining, _ctx); /*(list<string>) -> <local<23359>,exn,hml/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11228, _ctx);
    kk_box_t _x_x4988 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11132_fun4989(next_11229, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x4988); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11229, (next_11229, x_11228, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11133_fun4996__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11133_fun4996(kk_function_t _fself, kk_box_t _b_x880, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11133_fun4996(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11133_fun4996__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11133_fun4996__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11133_fun4996, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11133_fun4996(kk_function_t _fself, kk_box_t _b_x880, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11133_fun4996__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11133_fun4996__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_882 = kk_Unit;
  kk_unit_unbox(_b_x880);
  kk_unit_t _x_x4997 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11132(remaining, wild___3_882, _ctx);
  return kk_unit_box(_x_x4997);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11133(kk_std_core_types__list _y_x10777, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10781, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x872_874;
  kk_std_core_types__list _x_x4992;
  kk_box_t _x_x4993;
  kk_std_core_types__tuple2 _x_x4994 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0), kk_string_box(_y_x10781), _ctx); /*(10037, 10038)*/
  _x_x4993 = kk_std_core_types__tuple2_box(_x_x4994, _ctx); /*10021*/
  _x_x4992 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4993, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x872_874 = kk_std_core_list_append(_y_x10777, _x_x4992, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11232 = kk_Unit;
  kk_unit_t _brw_x2537 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x872_874, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2537;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x4995 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11133_fun4996(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x4995); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11132(remaining, x_11232, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11134_fun5008__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11134_fun5008(kk_function_t _fself, kk_box_t _b_x890, kk_box_t _b_x891, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11134_fun5008(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11134_fun5008, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11134_fun5008(kk_function_t _fself, kk_box_t _b_x890, kk_box_t _b_x891, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5009;
  kk_std_core_types__maybe _match_x2535 = kk_std_core_types__maybe_unbox(_b_x890, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2535, _ctx)) {
    kk_box_t _box_x883 = _match_x2535._cons.Just.value;
    kk_string_t x_1 = kk_string_unbox(_box_x883);
    kk_string_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_match_x2535, _ctx);
    kk_box_drop(_b_x891, _ctx);
    _x_x5009 = x_1; /*string*/
  }
  else {
    kk_string_t _b_x884_896;
    kk_string_t _x_x5010;
    kk_define_string_literal(static, _s_x5011, 22, "unexpected Nothing in ", _ctx)
    _x_x5010 = kk_string_dup(_s_x5011, _ctx); /*string*/
    kk_string_t _x_x5012 = kk_string_unbox(_b_x891); /*string*/
    _b_x884_896 = kk_std_core_types__lp__plus__plus__rp_(_x_x5010, _x_x5012, _ctx); /*string*/
    kk_box_t _x_x5013 = kk_std_core_exn_throw(_b_x884_896, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5009 = kk_string_unbox(_x_x5013); /*string*/
  }
  return kk_string_box(_x_x5009);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11134_fun5015__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10777;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11134_fun5015(kk_function_t _fself, kk_box_t _b_x901, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11134_fun5015(kk_std_core_types__list _y_x10777, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11134_fun5015__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11134_fun5015__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11134_fun5015, kk_context());
  _self->_y_x10777 = _y_x10777;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11134_fun5015(kk_function_t _fself, kk_box_t _b_x901, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11134_fun5015__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11134_fun5015__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10777 = _self->_y_x10777; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10777, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10781_903 = kk_string_unbox(_b_x901); /*string*/;
  kk_unit_t _x_x5016 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11133(_y_x10777, name_0_0, options, remaining, _y_x10781_903, _ctx);
  return kk_unit_box(_x_x5016);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11134(kk_std_core_types__list _y_x10777, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10780, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_12_11042 = kk_std_core_list__index(_y_x10780, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_7_11043;
  kk_string_t _x_x4998;
  kk_define_string_literal(static, _s_x4999, 6, "hml.kk", _ctx)
  _x_x4998 = kk_string_dup(_s_x4999, _ctx); /*string*/
  kk_string_t _x_x5000;
  kk_string_t _x_x5001;
  kk_define_string_literal(static, _s_x5002, 1, "(", _ctx)
  _x_x5001 = kk_string_dup(_s_x5002, _ctx); /*string*/
  kk_string_t _x_x5003;
  kk_string_t _x_x5004 = kk_std_core_int_show(kk_integer_from_small(781), _ctx); /*string*/
  kk_string_t _x_x5005;
  kk_define_string_literal(static, _s_x5006, 1, ")", _ctx)
  _x_x5005 = kk_string_dup(_s_x5006, _ctx); /*string*/
  _x_x5003 = kk_std_core_types__lp__plus__plus__rp_(_x_x5004, _x_x5005, _ctx); /*string*/
  _x_x5000 = kk_std_core_types__lp__plus__plus__rp_(_x_x5001, _x_x5003, _ctx); /*string*/
  _x_x2_7_11043 = kk_std_core_types__lp__plus__plus__rp_(_x_x4998, _x_x5000, _ctx); /*string*/
  kk_ssize_t _b_x886_892 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11234;
  kk_box_t _x_x5007 = kk_std_core_hnd__open_at2(_b_x886_892, kk_hml__new_mlift_hc__parse__loop_11134_fun5008(_ctx), kk_std_core_types__maybe_box(_x_x1_12_11042, _ctx), kk_string_box(_x_x2_7_11043), _ctx); /*10002*/
  x_11234 = kk_string_unbox(_x_x5007); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11234, _ctx);
    kk_box_t _x_x5014 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11134_fun5015(_y_x10777, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5014); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11133(_y_x10777, name_0_0, options, remaining, x_11234, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11135_fun5020__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10777;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11135_fun5020(kk_function_t _fself, kk_box_t _b_x909, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11135_fun5020(kk_std_core_types__list _y_x10777, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11135_fun5020__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11135_fun5020__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11135_fun5020, kk_context());
  _self->_y_x10777 = _y_x10777;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11135_fun5020(kk_function_t _fself, kk_box_t _b_x909, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11135_fun5020__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11135_fun5020__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10777 = _self->_y_x10777; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10777, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10780_911 = kk_std_core_types__list_unbox(_b_x909, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5021 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11134(_y_x10777, name_0_0, options, remaining, _y_x10780_911, _ctx);
  return kk_unit_box(_x_x5021);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11135(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10777, kk_context_t* _ctx) { /* forall<h> (name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11236;
  kk_box_t _x_x5017;
  kk_ref_t _x_x5018 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5017 = kk_ref_get(_x_x5018,kk_context()); /*10000*/
  x_11236 = kk_std_core_types__list_unbox(_x_x5017, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11236, _ctx);
    kk_box_t _x_x5019 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11135_fun5020(_y_x10777, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5019); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11134(_y_x10777, name_0_0, options, remaining, x_11236, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11136_fun5030__t {
  struct kk_function_s _base;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11136_fun5030(kk_function_t _fself, kk_box_t _b_x919, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11136_fun5030(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11136_fun5030__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11136_fun5030__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11136_fun5030, kk_context());
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11136_fun5030(kk_function_t _fself, kk_box_t _b_x919, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11136_fun5030__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11136_fun5030__t*, _fself, _ctx);
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10777_923 = kk_std_core_types__list_unbox(_b_x919, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5031 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11135(name_0_0, options, remaining, _y_x10777_923, _ctx);
  return kk_unit_box(_x_x5031);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11136(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10775, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2528;
  kk_integer_t _brw_x2531 = kk_std_core_list__lift_length_6003(_y_x10775, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2532 = kk_integer_eq_borrow(_brw_x2531,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2531, _ctx);
  _match_x2528 = _brw_x2532; /*bool*/
  if (_match_x2528) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x913_921;
    kk_string_t _x_x5022;
    kk_define_string_literal(static, _s_x5023, 9, "option --", _ctx)
    _x_x5022 = kk_string_dup(_s_x5023, _ctx); /*string*/
    kk_string_t _x_x5024;
    kk_string_t _x_x5025;
    kk_define_string_literal(static, _s_x5026, 17, " requires a value", _ctx)
    _x_x5025 = kk_string_dup(_s_x5026, _ctx); /*string*/
    _x_x5024 = kk_std_core_types__lp__plus__plus__rp_(name_0_0, _x_x5025, _ctx); /*string*/
    _b_x913_921 = kk_std_core_types__lp__plus__plus__rp_(_x_x5022, _x_x5024, _ctx); /*string*/
    kk_unit_t _brw_x2530 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x913_921)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2530; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11238;
    kk_box_t _x_x5027;
    kk_ref_t _x_x5028 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x5027 = kk_ref_get(_x_x5028,kk_context()); /*10000*/
    x_11238 = kk_std_core_types__list_unbox(_x_x5027, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11238, _ctx);
      kk_box_t _x_x5029 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11136_fun5030(name_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5029); return kk_Unit;
    }
    {
      kk_hml__mlift_hc__parse__loop_11135(name_0_0, options, remaining, x_11238, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11137_fun5033__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11137_fun5033(kk_function_t _fself, kk_box_t _b_x926, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11137_fun5033(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11137_fun5033, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11137_fun5033(kk_function_t _fself, kk_box_t _b_x926, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5034;
  kk_hml__cliflag _match_x2527 = kk_hml__cliflag_unbox(_b_x926, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x5035 = kk_hml__as_Cliflag(_match_x2527, _ctx);
    kk_string_t _x_7 = _con_x5035->flag__name;
    kk_string_t _pat_0_20 = _con_x5035->flag__short;
    kk_string_t _pat_1_15 = _con_x5035->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2527, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2527, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2527, _ctx);
    }
    _x_x5034 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5034);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11137(kk_hml__cliflag f_1, kk_ref_t flags, kk_std_core_types__list _y_x10789, kk_context_t* _ctx) { /* forall<h> (f@1 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x927_929;
  kk_box_t _x_x5032 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11137_fun5033(_ctx), kk_hml__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x927_929 = kk_string_unbox(_x_x5032); /*string*/
  kk_std_core_types__list _b_x935_937;
  kk_std_core_types__list _x_x5036 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x927_929), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x935_937 = kk_std_core_list_append(_y_x10789, _x_x5036, _ctx); /*list<string>*/
  kk_unit_t _brw_x2526 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x935_937, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2526; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11139_fun5039__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11139_fun5039(kk_function_t _fself, kk_std_core_types__list _y_x10799, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11139_fun5039(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11139_fun5039__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11139_fun5039__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11139_fun5039, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__mlift_hc__parse__loop_11139_fun5039(kk_function_t _fself, kk_std_core_types__list _y_x10799, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11139_fun5039__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11139_fun5039__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x947_949 = kk_std_core_list_drop(_y_x10799, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2524 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x947_949, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2524; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11139_fun5041__t {
  struct kk_function_s _base;
  kk_function_t next_11241;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11139_fun5041(kk_function_t _fself, kk_box_t _b_x951, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11139_fun5041(kk_function_t next_11241, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11139_fun5041__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11139_fun5041__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11139_fun5041, kk_context());
  _self->next_11241 = next_11241;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11139_fun5041(kk_function_t _fself, kk_box_t _b_x951, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11139_fun5041__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11139_fun5041__t*, _fself, _ctx);
  kk_function_t next_11241 = _self->next_11241; /* (list<string>) -> <local<23359>,exn,hml/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11241, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5042 = kk_Unit;
  kk_std_core_types__list _x_x5043 = kk_std_core_types__list_unbox(_b_x951, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11241, (next_11241, _x_x5043, _ctx), _ctx);
  return kk_unit_box(_x_x5042);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11139(kk_ref_t remaining, kk_unit_t wild___4, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11240;
  kk_box_t _x_x5037;
  kk_ref_t _x_x5038 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5037 = kk_ref_get(_x_x5038,kk_context()); /*10000*/
  x_11240 = kk_std_core_types__list_unbox(_x_x5037, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11241 = kk_hml__new_mlift_hc__parse__loop_11139_fun5039(remaining, _ctx); /*(list<string>) -> <local<23359>,exn,hml/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11240, _ctx);
    kk_box_t _x_x5040 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11139_fun5041(next_11241, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5040); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11241, (next_11241, x_11240, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11140_fun5045__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11140_fun5045(kk_function_t _fself, kk_box_t _b_x955, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11140_fun5045(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11140_fun5045, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11140_fun5045(kk_function_t _fself, kk_box_t _b_x955, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5046;
  kk_hml__clioption _match_x2522 = kk_hml__clioption_unbox(_b_x955, KK_OWNED, _ctx); /*hml/clioption*/;
  {
    struct kk_hml_Clioption* _con_x5047 = kk_hml__as_Clioption(_match_x2522, _ctx);
    kk_string_t _x_10 = _con_x5047->opt__name;
    kk_string_t _pat_0_23 = _con_x5047->opt__short;
    kk_string_t _pat_1_18 = _con_x5047->opt__help;
    kk_string_t _pat_2_8 = _con_x5047->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2522, _ctx)) {
      kk_string_drop(_pat_2_8, _ctx);
      kk_string_drop(_pat_1_18, _ctx);
      kk_string_drop(_pat_0_23, _ctx);
      kk_datatype_ptr_free(_match_x2522, _ctx);
    }
    else {
      kk_string_dup(_x_10, _ctx);
      kk_datatype_ptr_decref(_match_x2522, _ctx);
    }
    _x_x5046 = _x_10; /*string*/
  }
  return kk_string_box(_x_x5046);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11140_fun5052__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11140_fun5052(kk_function_t _fself, kk_box_t _b_x972, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11140_fun5052(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11140_fun5052__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11140_fun5052__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11140_fun5052, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11140_fun5052(kk_function_t _fself, kk_box_t _b_x972, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11140_fun5052__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11140_fun5052__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_974 = kk_Unit;
  kk_unit_unbox(_b_x972);
  kk_unit_t _x_x5053 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11139(remaining, wild___4_974, _ctx);
  return kk_unit_box(_x_x5053);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11140(kk_std_core_types__list _y_x10793, kk_hml__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10797, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x956_962;
  kk_box_t _x_x5044 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11140_fun5045(_ctx), kk_hml__clioption_box(o_2, _ctx), _ctx); /*10001*/
  _b_x956_962 = kk_string_unbox(_x_x5044); /*string*/
  kk_std_core_types__list _b_x968_970;
  kk_std_core_types__list _x_x5048;
  kk_box_t _x_x5049;
  kk_std_core_types__tuple2 _x_x5050 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x956_962), kk_string_box(_y_x10797), _ctx); /*(10037, 10038)*/
  _x_x5049 = kk_std_core_types__tuple2_box(_x_x5050, _ctx); /*10021*/
  _x_x5048 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5049, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x968_970 = kk_std_core_list_append(_y_x10793, _x_x5048, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11244 = kk_Unit;
  kk_unit_t _brw_x2521 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x968_970, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2521;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5051 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11140_fun5052(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5051); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11139(remaining, x_11244, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11141_fun5064__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11141_fun5064(kk_function_t _fself, kk_box_t _b_x982, kk_box_t _b_x983, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11141_fun5064(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11141_fun5064, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11141_fun5064(kk_function_t _fself, kk_box_t _b_x982, kk_box_t _b_x983, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5065;
  kk_std_core_types__maybe _match_x2519 = kk_std_core_types__maybe_unbox(_b_x982, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2519, _ctx)) {
    kk_box_t _box_x975 = _match_x2519._cons.Just.value;
    kk_string_t x_2 = kk_string_unbox(_box_x975);
    kk_string_dup(x_2, _ctx);
    kk_std_core_types__maybe_drop(_match_x2519, _ctx);
    kk_box_drop(_b_x983, _ctx);
    _x_x5065 = x_2; /*string*/
  }
  else {
    kk_string_t _b_x976_988;
    kk_string_t _x_x5066;
    kk_define_string_literal(static, _s_x5067, 22, "unexpected Nothing in ", _ctx)
    _x_x5066 = kk_string_dup(_s_x5067, _ctx); /*string*/
    kk_string_t _x_x5068 = kk_string_unbox(_b_x983); /*string*/
    _b_x976_988 = kk_std_core_types__lp__plus__plus__rp_(_x_x5066, _x_x5068, _ctx); /*string*/
    kk_box_t _x_x5069 = kk_std_core_exn_throw(_b_x976_988, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5065 = kk_string_unbox(_x_x5069); /*string*/
  }
  return kk_string_box(_x_x5065);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11141_fun5071__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10793;
  kk_hml__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11141_fun5071(kk_function_t _fself, kk_box_t _b_x993, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11141_fun5071(kk_std_core_types__list _y_x10793, kk_hml__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11141_fun5071__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11141_fun5071__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11141_fun5071, kk_context());
  _self->_y_x10793 = _y_x10793;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11141_fun5071(kk_function_t _fself, kk_box_t _b_x993, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11141_fun5071__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11141_fun5071__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10793 = _self->_y_x10793; /* list<(string, string)> */
  kk_hml__clioption o_2 = _self->o_2; /* hml/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10793, _ctx);kk_hml__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10797_995 = kk_string_unbox(_b_x993); /*string*/;
  kk_unit_t _x_x5072 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11140(_y_x10793, o_2, options, remaining, _y_x10797_995, _ctx);
  return kk_unit_box(_x_x5072);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11141(kk_std_core_types__list _y_x10793, kk_hml__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10796, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_20_11054 = kk_std_core_list__index(_y_x10796, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11_11055;
  kk_string_t _x_x5054;
  kk_define_string_literal(static, _s_x5055, 6, "hml.kk", _ctx)
  _x_x5054 = kk_string_dup(_s_x5055, _ctx); /*string*/
  kk_string_t _x_x5056;
  kk_string_t _x_x5057;
  kk_define_string_literal(static, _s_x5058, 1, "(", _ctx)
  _x_x5057 = kk_string_dup(_s_x5058, _ctx); /*string*/
  kk_string_t _x_x5059;
  kk_string_t _x_x5060 = kk_std_core_int_show(kk_integer_from_small(796), _ctx); /*string*/
  kk_string_t _x_x5061;
  kk_define_string_literal(static, _s_x5062, 1, ")", _ctx)
  _x_x5061 = kk_string_dup(_s_x5062, _ctx); /*string*/
  _x_x5059 = kk_std_core_types__lp__plus__plus__rp_(_x_x5060, _x_x5061, _ctx); /*string*/
  _x_x5056 = kk_std_core_types__lp__plus__plus__rp_(_x_x5057, _x_x5059, _ctx); /*string*/
  _x_x2_11_11055 = kk_std_core_types__lp__plus__plus__rp_(_x_x5054, _x_x5056, _ctx); /*string*/
  kk_ssize_t _b_x978_984 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11246;
  kk_box_t _x_x5063 = kk_std_core_hnd__open_at2(_b_x978_984, kk_hml__new_mlift_hc__parse__loop_11141_fun5064(_ctx), kk_std_core_types__maybe_box(_x_x1_20_11054, _ctx), kk_string_box(_x_x2_11_11055), _ctx); /*10002*/
  x_11246 = kk_string_unbox(_x_x5063); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11246, _ctx);
    kk_box_t _x_x5070 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11141_fun5071(_y_x10793, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5070); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11140(_y_x10793, o_2, options, remaining, x_11246, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11142_fun5076__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10793;
  kk_hml__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11142_fun5076(kk_function_t _fself, kk_box_t _b_x1001, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11142_fun5076(kk_std_core_types__list _y_x10793, kk_hml__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11142_fun5076__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11142_fun5076__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11142_fun5076, kk_context());
  _self->_y_x10793 = _y_x10793;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11142_fun5076(kk_function_t _fself, kk_box_t _b_x1001, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11142_fun5076__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11142_fun5076__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10793 = _self->_y_x10793; /* list<(string, string)> */
  kk_hml__clioption o_2 = _self->o_2; /* hml/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10793, _ctx);kk_hml__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10796_1003 = kk_std_core_types__list_unbox(_b_x1001, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5077 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11141(_y_x10793, o_2, options, remaining, _y_x10796_1003, _ctx);
  return kk_unit_box(_x_x5077);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11142(kk_hml__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10793, kk_context_t* _ctx) { /* forall<h> (o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11248;
  kk_box_t _x_x5073;
  kk_ref_t _x_x5074 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5073 = kk_ref_get(_x_x5074,kk_context()); /*10000*/
  x_11248 = kk_std_core_types__list_unbox(_x_x5073, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11248, _ctx);
    kk_box_t _x_x5075 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11142_fun5076(_y_x10793, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5075); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11141(_y_x10793, o_2, options, remaining, x_11248, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11143_fun5086__t {
  struct kk_function_s _base;
  kk_hml__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11143_fun5086(kk_function_t _fself, kk_box_t _b_x1011, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11143_fun5086(kk_hml__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11143_fun5086__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11143_fun5086__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11143_fun5086, kk_context());
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11143_fun5086(kk_function_t _fself, kk_box_t _b_x1011, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11143_fun5086__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11143_fun5086__t*, _fself, _ctx);
  kk_hml__clioption o_2 = _self->o_2; /* hml/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_hml__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10793_1015 = kk_std_core_types__list_unbox(_b_x1011, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5087 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11142(o_2, options, remaining, _y_x10793_1015, _ctx);
  return kk_unit_box(_x_x5087);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11143(kk_ref_t error, kk_hml__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_std_core_types__list _y_x10791, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@5 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2512;
  kk_integer_t _brw_x2515 = kk_std_core_list__lift_length_6003(_y_x10791, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2516 = kk_integer_eq_borrow(_brw_x2515,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2515, _ctx);
  _match_x2512 = _brw_x2516; /*bool*/
  if (_match_x2512) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_2, (KK_I32(4)), _ctx);
    kk_string_t _b_x1005_1013;
    kk_string_t _x_x5078;
    kk_define_string_literal(static, _s_x5079, 8, "option -", _ctx)
    _x_x5078 = kk_string_dup(_s_x5079, _ctx); /*string*/
    kk_string_t _x_x5080;
    kk_string_t _x_x5081;
    kk_define_string_literal(static, _s_x5082, 17, " requires a value", _ctx)
    _x_x5081 = kk_string_dup(_s_x5082, _ctx); /*string*/
    _x_x5080 = kk_std_core_types__lp__plus__plus__rp_(s_5, _x_x5081, _ctx); /*string*/
    _b_x1005_1013 = kk_std_core_types__lp__plus__plus__rp_(_x_x5078, _x_x5080, _ctx); /*string*/
    kk_unit_t _brw_x2514 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1005_1013)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2514; return kk_Unit;
  }
  {
    kk_string_drop(s_5, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11250;
    kk_box_t _x_x5083;
    kk_ref_t _x_x5084 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x5083 = kk_ref_get(_x_x5084,kk_context()); /*10000*/
    x_11250 = kk_std_core_types__list_unbox(_x_x5083, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11250, _ctx);
      kk_box_t _x_x5085 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11143_fun5086(o_2, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5085); return kk_Unit;
    }
    {
      kk_hml__mlift_hc__parse__loop_11142(o_2, options, remaining, x_11250, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11144_fun5089__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11144_fun5089(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11144_fun5089(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11144_fun5089, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11144_fun5089(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11252 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5090 = kk_std_core_hnd__as_Ev(ev_11252, _ctx);
    kk_box_t _box_x1016 = _con_x5090->hnd;
    int32_t m = _con_x5090->marker;
    kk_hml__hica_brk h = kk_hml__hica_brk_unbox(_box_x1016, KK_BORROWED, _ctx);
    kk_hml__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__Hnd_hica_brk* _con_x5091 = kk_hml__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5091->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5091->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1019 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1019, (_fun_unbox_x1019, m, ev_11252, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11144(kk_unit_t wild___6, kk_context_t* _ctx) { /* forall<h> (wild_@6 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1022_1024 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5088 = kk_std_core_hnd__open_at0(_b_x1022_1024, kk_hml__new_mlift_hc__parse__loop_11144_fun5089(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5088); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11145_fun5093__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11145_fun5093(kk_function_t _fself, kk_box_t _b_x1031, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11145_fun5093(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11145_fun5093, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11145_fun5093(kk_function_t _fself, kk_box_t _b_x1031, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_1033 = kk_Unit;
  kk_unit_unbox(_b_x1031);
  kk_unit_t _x_x5094 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11144(wild___6_1033, _ctx);
  return kk_unit_box(_x_x5094);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11145(kk_ref_t sub__args, kk_std_core_types__list _y_x10806, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11254 = kk_Unit;
  kk_unit_t _brw_x2511 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10806, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2511;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5092 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11145_fun5093(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5092); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11144(x_11254, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11146_fun5097__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11146_fun5097(kk_function_t _fself, kk_box_t _b_x1039, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11146_fun5097(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11146_fun5097__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11146_fun5097__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11146_fun5097, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11146_fun5097(kk_function_t _fself, kk_box_t _b_x1039, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11146_fun5097__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11146_fun5097__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10806_1041 = kk_std_core_types__list_unbox(_b_x1039, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5098 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11145(sub__args, _y_x10806_1041, _ctx);
  return kk_unit_box(_x_x5098);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11146(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11256;
  kk_box_t _x_x5095 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11256 = kk_std_core_types__list_unbox(_x_x5095, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11256, _ctx);
    kk_box_t _x_x5096 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11146_fun5097(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5096); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11145(sub__args, x_11256, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_hml__mlift_hc__parse__loop_11147(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10810, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1045_1047;
  kk_std_core_types__list _x_x5099 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1045_1047 = kk_std_core_list_append(_y_x10810, _x_x5099, _ctx); /*list<string>*/
  kk_unit_t _brw_x2508 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1045_1047, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2508; return kk_Unit;
}
 
// monadic lift

kk_unit_t kk_hml__mlift_hc__parse__loop_11148(kk_ref_t flags, kk_string_t name_0_0_0, kk_std_core_types__list _y_x10816, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1053_1055;
  kk_std_core_types__list _x_x5100 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1053_1055 = kk_std_core_list_append(_y_x10816, _x_x5100, _ctx); /*list<string>*/
  kk_unit_t _brw_x2507 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1053_1055, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2507; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11150_fun5103__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11150_fun5103(kk_function_t _fself, kk_std_core_types__list _y_x10826, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11150_fun5103(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11150_fun5103__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11150_fun5103__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11150_fun5103, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__mlift_hc__parse__loop_11150_fun5103(kk_function_t _fself, kk_std_core_types__list _y_x10826, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11150_fun5103__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11150_fun5103__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1067_1069 = kk_std_core_list_drop(_y_x10826, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2505 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1067_1069, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2505; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11150_fun5105__t {
  struct kk_function_s _base;
  kk_function_t next_11259;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11150_fun5105(kk_function_t _fself, kk_box_t _b_x1071, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11150_fun5105(kk_function_t next_11259, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11150_fun5105__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11150_fun5105__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11150_fun5105, kk_context());
  _self->next_11259 = next_11259;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11150_fun5105(kk_function_t _fself, kk_box_t _b_x1071, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11150_fun5105__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11150_fun5105__t*, _fself, _ctx);
  kk_function_t next_11259 = _self->next_11259; /* (list<string>) -> <local<23359>,exn,hml/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11259, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5106 = kk_Unit;
  kk_std_core_types__list _x_x5107 = kk_std_core_types__list_unbox(_b_x1071, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11259, (next_11259, _x_x5107, _ctx), _ctx);
  return kk_unit_box(_x_x5106);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11150(kk_ref_t remaining, kk_unit_t wild___3_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11258;
  kk_box_t _x_x5101;
  kk_ref_t _x_x5102 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5101 = kk_ref_get(_x_x5102,kk_context()); /*10000*/
  x_11258 = kk_std_core_types__list_unbox(_x_x5101, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11259 = kk_hml__new_mlift_hc__parse__loop_11150_fun5103(remaining, _ctx); /*(list<string>) -> <local<23359>,exn,hml/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11258, _ctx);
    kk_box_t _x_x5104 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11150_fun5105(next_11259, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5104); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11259, (next_11259, x_11258, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11151_fun5112__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11151_fun5112(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11151_fun5112(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11151_fun5112__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11151_fun5112__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11151_fun5112, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11151_fun5112(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11151_fun5112__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11151_fun5112__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_0_1088 = kk_Unit;
  kk_unit_unbox(_b_x1086);
  kk_unit_t _x_x5113 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11150(remaining, wild___3_0_1088, _ctx);
  return kk_unit_box(_x_x5113);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11151(kk_std_core_types__list _y_x10820, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10824, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1078_1080;
  kk_std_core_types__list _x_x5108;
  kk_box_t _x_x5109;
  kk_std_core_types__tuple2 _x_x5110 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0_0), kk_string_box(_y_x10824), _ctx); /*(10037, 10038)*/
  _x_x5109 = kk_std_core_types__tuple2_box(_x_x5110, _ctx); /*10021*/
  _x_x5108 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5109, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1078_1080 = kk_std_core_list_append(_y_x10820, _x_x5108, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11262 = kk_Unit;
  kk_unit_t _brw_x2503 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1078_1080, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2503;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5111 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11151_fun5112(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5111); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11150(remaining, x_11262, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11152_fun5124__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11152_fun5124(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11152_fun5124(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11152_fun5124, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11152_fun5124(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5125;
  kk_std_core_types__maybe _match_x2501 = kk_std_core_types__maybe_unbox(_b_x1096, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2501, _ctx)) {
    kk_box_t _box_x1089 = _match_x2501._cons.Just.value;
    kk_string_t x_3 = kk_string_unbox(_box_x1089);
    kk_string_dup(x_3, _ctx);
    kk_std_core_types__maybe_drop(_match_x2501, _ctx);
    kk_box_drop(_b_x1097, _ctx);
    _x_x5125 = x_3; /*string*/
  }
  else {
    kk_string_t _b_x1090_1102;
    kk_string_t _x_x5126;
    kk_define_string_literal(static, _s_x5127, 22, "unexpected Nothing in ", _ctx)
    _x_x5126 = kk_string_dup(_s_x5127, _ctx); /*string*/
    kk_string_t _x_x5128 = kk_string_unbox(_b_x1097); /*string*/
    _b_x1090_1102 = kk_std_core_types__lp__plus__plus__rp_(_x_x5126, _x_x5128, _ctx); /*string*/
    kk_box_t _x_x5129 = kk_std_core_exn_throw(_b_x1090_1102, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5125 = kk_string_unbox(_x_x5129); /*string*/
  }
  return kk_string_box(_x_x5125);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11152_fun5131__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10820;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11152_fun5131(kk_function_t _fself, kk_box_t _b_x1107, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11152_fun5131(kk_std_core_types__list _y_x10820, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11152_fun5131__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11152_fun5131__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11152_fun5131, kk_context());
  _self->_y_x10820 = _y_x10820;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11152_fun5131(kk_function_t _fself, kk_box_t _b_x1107, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11152_fun5131__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11152_fun5131__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10820 = _self->_y_x10820; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10820, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10824_1109 = kk_string_unbox(_b_x1107); /*string*/;
  kk_unit_t _x_x5132 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11151(_y_x10820, name_0_0_0, options, remaining, _y_x10824_1109, _ctx);
  return kk_unit_box(_x_x5132);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11152(kk_std_core_types__list _y_x10820, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10823, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_30_11069 = kk_std_core_list__index(_y_x10823, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_16_11070;
  kk_string_t _x_x5114;
  kk_define_string_literal(static, _s_x5115, 6, "hml.kk", _ctx)
  _x_x5114 = kk_string_dup(_s_x5115, _ctx); /*string*/
  kk_string_t _x_x5116;
  kk_string_t _x_x5117;
  kk_define_string_literal(static, _s_x5118, 1, "(", _ctx)
  _x_x5117 = kk_string_dup(_s_x5118, _ctx); /*string*/
  kk_string_t _x_x5119;
  kk_string_t _x_x5120 = kk_std_core_int_show(kk_integer_from_small(781), _ctx); /*string*/
  kk_string_t _x_x5121;
  kk_define_string_literal(static, _s_x5122, 1, ")", _ctx)
  _x_x5121 = kk_string_dup(_s_x5122, _ctx); /*string*/
  _x_x5119 = kk_std_core_types__lp__plus__plus__rp_(_x_x5120, _x_x5121, _ctx); /*string*/
  _x_x5116 = kk_std_core_types__lp__plus__plus__rp_(_x_x5117, _x_x5119, _ctx); /*string*/
  _x_x2_16_11070 = kk_std_core_types__lp__plus__plus__rp_(_x_x5114, _x_x5116, _ctx); /*string*/
  kk_ssize_t _b_x1092_1098 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11264;
  kk_box_t _x_x5123 = kk_std_core_hnd__open_at2(_b_x1092_1098, kk_hml__new_mlift_hc__parse__loop_11152_fun5124(_ctx), kk_std_core_types__maybe_box(_x_x1_30_11069, _ctx), kk_string_box(_x_x2_16_11070), _ctx); /*10002*/
  x_11264 = kk_string_unbox(_x_x5123); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11264, _ctx);
    kk_box_t _x_x5130 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11152_fun5131(_y_x10820, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5130); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11151(_y_x10820, name_0_0_0, options, remaining, x_11264, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11153_fun5136__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10820;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11153_fun5136(kk_function_t _fself, kk_box_t _b_x1115, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11153_fun5136(kk_std_core_types__list _y_x10820, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11153_fun5136__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11153_fun5136__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11153_fun5136, kk_context());
  _self->_y_x10820 = _y_x10820;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11153_fun5136(kk_function_t _fself, kk_box_t _b_x1115, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11153_fun5136__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11153_fun5136__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10820 = _self->_y_x10820; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10820, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10823_1117 = kk_std_core_types__list_unbox(_b_x1115, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5137 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11152(_y_x10820, name_0_0_0, options, remaining, _y_x10823_1117, _ctx);
  return kk_unit_box(_x_x5137);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11153(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10820, kk_context_t* _ctx) { /* forall<h> (name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11266;
  kk_box_t _x_x5133;
  kk_ref_t _x_x5134 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5133 = kk_ref_get(_x_x5134,kk_context()); /*10000*/
  x_11266 = kk_std_core_types__list_unbox(_x_x5133, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11266, _ctx);
    kk_box_t _x_x5135 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11153_fun5136(_y_x10820, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5135); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11152(_y_x10820, name_0_0_0, options, remaining, x_11266, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11154_fun5146__t {
  struct kk_function_s _base;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11154_fun5146(kk_function_t _fself, kk_box_t _b_x1125, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11154_fun5146(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11154_fun5146__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11154_fun5146__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11154_fun5146, kk_context());
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11154_fun5146(kk_function_t _fself, kk_box_t _b_x1125, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11154_fun5146__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11154_fun5146__t*, _fself, _ctx);
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10820_1129 = kk_std_core_types__list_unbox(_b_x1125, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5147 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11153(name_0_0_0, options, remaining, _y_x10820_1129, _ctx);
  return kk_unit_box(_x_x5147);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11154(kk_ref_t error, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10818, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2494;
  kk_integer_t _brw_x2497 = kk_std_core_list__lift_length_6003(_y_x10818, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2498 = kk_integer_eq_borrow(_brw_x2497,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2497, _ctx);
  _match_x2494 = _brw_x2498; /*bool*/
  if (_match_x2494) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x1119_1127;
    kk_string_t _x_x5138;
    kk_define_string_literal(static, _s_x5139, 9, "option --", _ctx)
    _x_x5138 = kk_string_dup(_s_x5139, _ctx); /*string*/
    kk_string_t _x_x5140;
    kk_string_t _x_x5141;
    kk_define_string_literal(static, _s_x5142, 17, " requires a value", _ctx)
    _x_x5141 = kk_string_dup(_s_x5142, _ctx); /*string*/
    _x_x5140 = kk_std_core_types__lp__plus__plus__rp_(name_0_0_0, _x_x5141, _ctx); /*string*/
    _b_x1119_1127 = kk_std_core_types__lp__plus__plus__rp_(_x_x5138, _x_x5140, _ctx); /*string*/
    kk_unit_t _brw_x2496 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1119_1127)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2496; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11268;
    kk_box_t _x_x5143;
    kk_ref_t _x_x5144 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x5143 = kk_ref_get(_x_x5144,kk_context()); /*10000*/
    x_11268 = kk_std_core_types__list_unbox(_x_x5143, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11268, _ctx);
      kk_box_t _x_x5145 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11154_fun5146(name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5145); return kk_Unit;
    }
    {
      kk_hml__mlift_hc__parse__loop_11153(name_0_0_0, options, remaining, x_11268, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11155_fun5149__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11155_fun5149(kk_function_t _fself, kk_box_t _b_x1132, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11155_fun5149(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11155_fun5149, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11155_fun5149(kk_function_t _fself, kk_box_t _b_x1132, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5150;
  kk_hml__cliflag _match_x2493 = kk_hml__cliflag_unbox(_b_x1132, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x5151 = kk_hml__as_Cliflag(_match_x2493, _ctx);
    kk_string_t _x_19 = _con_x5151->flag__name;
    kk_string_t _pat_0_40 = _con_x5151->flag__short;
    kk_string_t _pat_1_30 = _con_x5151->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2493, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2493, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2493, _ctx);
    }
    _x_x5150 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5150);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11155(kk_hml__cliflag f_0_0, kk_ref_t flags, kk_std_core_types__list _y_x10832, kk_context_t* _ctx) { /* forall<h> (f@0@0 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x1133_1135;
  kk_box_t _x_x5148 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11155_fun5149(_ctx), kk_hml__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1133_1135 = kk_string_unbox(_x_x5148); /*string*/
  kk_std_core_types__list _b_x1141_1143;
  kk_std_core_types__list _x_x5152 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1133_1135), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1141_1143 = kk_std_core_list_append(_y_x10832, _x_x5152, _ctx); /*list<string>*/
  kk_unit_t _brw_x2492 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1141_1143, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2492; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11157_fun5155__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11157_fun5155(kk_function_t _fself, kk_std_core_types__list _y_x10842, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11157_fun5155(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11157_fun5155__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11157_fun5155__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11157_fun5155, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__mlift_hc__parse__loop_11157_fun5155(kk_function_t _fself, kk_std_core_types__list _y_x10842, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11157_fun5155__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11157_fun5155__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1153_1155 = kk_std_core_list_drop(_y_x10842, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2490 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1153_1155, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2490; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11157_fun5157__t {
  struct kk_function_s _base;
  kk_function_t next_11271;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11157_fun5157(kk_function_t _fself, kk_box_t _b_x1157, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11157_fun5157(kk_function_t next_11271, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11157_fun5157__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11157_fun5157__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11157_fun5157, kk_context());
  _self->next_11271 = next_11271;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11157_fun5157(kk_function_t _fself, kk_box_t _b_x1157, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11157_fun5157__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11157_fun5157__t*, _fself, _ctx);
  kk_function_t next_11271 = _self->next_11271; /* (list<string>) -> <local<23359>,exn,hml/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11271, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5158 = kk_Unit;
  kk_std_core_types__list _x_x5159 = kk_std_core_types__list_unbox(_b_x1157, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11271, (next_11271, _x_x5159, _ctx), _ctx);
  return kk_unit_box(_x_x5158);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11157(kk_ref_t remaining, kk_unit_t wild___4_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11270;
  kk_box_t _x_x5153;
  kk_ref_t _x_x5154 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5153 = kk_ref_get(_x_x5154,kk_context()); /*10000*/
  x_11270 = kk_std_core_types__list_unbox(_x_x5153, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11271 = kk_hml__new_mlift_hc__parse__loop_11157_fun5155(remaining, _ctx); /*(list<string>) -> <local<23359>,exn,hml/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11270, _ctx);
    kk_box_t _x_x5156 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11157_fun5157(next_11271, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5156); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11271, (next_11271, x_11270, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11158_fun5161__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11158_fun5161(kk_function_t _fself, kk_box_t _b_x1161, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11158_fun5161(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11158_fun5161, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11158_fun5161(kk_function_t _fself, kk_box_t _b_x1161, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5162;
  kk_hml__clioption _match_x2488 = kk_hml__clioption_unbox(_b_x1161, KK_OWNED, _ctx); /*hml/clioption*/;
  {
    struct kk_hml_Clioption* _con_x5163 = kk_hml__as_Clioption(_match_x2488, _ctx);
    kk_string_t _x_22 = _con_x5163->opt__name;
    kk_string_t _pat_0_43 = _con_x5163->opt__short;
    kk_string_t _pat_1_33 = _con_x5163->opt__help;
    kk_string_t _pat_2_16 = _con_x5163->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2488, _ctx)) {
      kk_string_drop(_pat_2_16, _ctx);
      kk_string_drop(_pat_1_33, _ctx);
      kk_string_drop(_pat_0_43, _ctx);
      kk_datatype_ptr_free(_match_x2488, _ctx);
    }
    else {
      kk_string_dup(_x_22, _ctx);
      kk_datatype_ptr_decref(_match_x2488, _ctx);
    }
    _x_x5162 = _x_22; /*string*/
  }
  return kk_string_box(_x_x5162);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11158_fun5168__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11158_fun5168(kk_function_t _fself, kk_box_t _b_x1178, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11158_fun5168(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11158_fun5168__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11158_fun5168__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11158_fun5168, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11158_fun5168(kk_function_t _fself, kk_box_t _b_x1178, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11158_fun5168__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11158_fun5168__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_0_1180 = kk_Unit;
  kk_unit_unbox(_b_x1178);
  kk_unit_t _x_x5169 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11157(remaining, wild___4_0_1180, _ctx);
  return kk_unit_box(_x_x5169);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11158(kk_std_core_types__list _y_x10836, kk_hml__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10840, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x1162_1168;
  kk_box_t _x_x5160 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11158_fun5161(_ctx), kk_hml__clioption_box(o_0_0, _ctx), _ctx); /*10001*/
  _b_x1162_1168 = kk_string_unbox(_x_x5160); /*string*/
  kk_std_core_types__list _b_x1174_1176;
  kk_std_core_types__list _x_x5164;
  kk_box_t _x_x5165;
  kk_std_core_types__tuple2 _x_x5166 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x1162_1168), kk_string_box(_y_x10840), _ctx); /*(10037, 10038)*/
  _x_x5165 = kk_std_core_types__tuple2_box(_x_x5166, _ctx); /*10021*/
  _x_x5164 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5165, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1174_1176 = kk_std_core_list_append(_y_x10836, _x_x5164, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11274 = kk_Unit;
  kk_unit_t _brw_x2487 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1174_1176, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2487;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5167 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11158_fun5168(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5167); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11157(remaining, x_11274, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11159_fun5180__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11159_fun5180(kk_function_t _fself, kk_box_t _b_x1188, kk_box_t _b_x1189, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11159_fun5180(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11159_fun5180, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11159_fun5180(kk_function_t _fself, kk_box_t _b_x1188, kk_box_t _b_x1189, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5181;
  kk_std_core_types__maybe _match_x2485 = kk_std_core_types__maybe_unbox(_b_x1188, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2485, _ctx)) {
    kk_box_t _box_x1181 = _match_x2485._cons.Just.value;
    kk_string_t x_4 = kk_string_unbox(_box_x1181);
    kk_string_dup(x_4, _ctx);
    kk_std_core_types__maybe_drop(_match_x2485, _ctx);
    kk_box_drop(_b_x1189, _ctx);
    _x_x5181 = x_4; /*string*/
  }
  else {
    kk_string_t _b_x1182_1194;
    kk_string_t _x_x5182;
    kk_define_string_literal(static, _s_x5183, 22, "unexpected Nothing in ", _ctx)
    _x_x5182 = kk_string_dup(_s_x5183, _ctx); /*string*/
    kk_string_t _x_x5184 = kk_string_unbox(_b_x1189); /*string*/
    _b_x1182_1194 = kk_std_core_types__lp__plus__plus__rp_(_x_x5182, _x_x5184, _ctx); /*string*/
    kk_box_t _x_x5185 = kk_std_core_exn_throw(_b_x1182_1194, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5181 = kk_string_unbox(_x_x5185); /*string*/
  }
  return kk_string_box(_x_x5181);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11159_fun5187__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10836;
  kk_hml__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11159_fun5187(kk_function_t _fself, kk_box_t _b_x1199, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11159_fun5187(kk_std_core_types__list _y_x10836, kk_hml__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11159_fun5187__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11159_fun5187__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11159_fun5187, kk_context());
  _self->_y_x10836 = _y_x10836;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11159_fun5187(kk_function_t _fself, kk_box_t _b_x1199, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11159_fun5187__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11159_fun5187__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10836 = _self->_y_x10836; /* list<(string, string)> */
  kk_hml__clioption o_0_0 = _self->o_0_0; /* hml/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10836, _ctx);kk_hml__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10840_1201 = kk_string_unbox(_b_x1199); /*string*/;
  kk_unit_t _x_x5188 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11158(_y_x10836, o_0_0, options, remaining, _y_x10840_1201, _ctx);
  return kk_unit_box(_x_x5188);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11159(kk_std_core_types__list _y_x10836, kk_hml__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10839, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_38_11081 = kk_std_core_list__index(_y_x10839, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_20_11082;
  kk_string_t _x_x5170;
  kk_define_string_literal(static, _s_x5171, 6, "hml.kk", _ctx)
  _x_x5170 = kk_string_dup(_s_x5171, _ctx); /*string*/
  kk_string_t _x_x5172;
  kk_string_t _x_x5173;
  kk_define_string_literal(static, _s_x5174, 1, "(", _ctx)
  _x_x5173 = kk_string_dup(_s_x5174, _ctx); /*string*/
  kk_string_t _x_x5175;
  kk_string_t _x_x5176 = kk_std_core_int_show(kk_integer_from_small(796), _ctx); /*string*/
  kk_string_t _x_x5177;
  kk_define_string_literal(static, _s_x5178, 1, ")", _ctx)
  _x_x5177 = kk_string_dup(_s_x5178, _ctx); /*string*/
  _x_x5175 = kk_std_core_types__lp__plus__plus__rp_(_x_x5176, _x_x5177, _ctx); /*string*/
  _x_x5172 = kk_std_core_types__lp__plus__plus__rp_(_x_x5173, _x_x5175, _ctx); /*string*/
  _x_x2_20_11082 = kk_std_core_types__lp__plus__plus__rp_(_x_x5170, _x_x5172, _ctx); /*string*/
  kk_ssize_t _b_x1184_1190 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11276;
  kk_box_t _x_x5179 = kk_std_core_hnd__open_at2(_b_x1184_1190, kk_hml__new_mlift_hc__parse__loop_11159_fun5180(_ctx), kk_std_core_types__maybe_box(_x_x1_38_11081, _ctx), kk_string_box(_x_x2_20_11082), _ctx); /*10002*/
  x_11276 = kk_string_unbox(_x_x5179); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11276, _ctx);
    kk_box_t _x_x5186 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11159_fun5187(_y_x10836, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5186); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11158(_y_x10836, o_0_0, options, remaining, x_11276, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11160_fun5192__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10836;
  kk_hml__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11160_fun5192(kk_function_t _fself, kk_box_t _b_x1207, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11160_fun5192(kk_std_core_types__list _y_x10836, kk_hml__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11160_fun5192__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11160_fun5192__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11160_fun5192, kk_context());
  _self->_y_x10836 = _y_x10836;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11160_fun5192(kk_function_t _fself, kk_box_t _b_x1207, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11160_fun5192__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11160_fun5192__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10836 = _self->_y_x10836; /* list<(string, string)> */
  kk_hml__clioption o_0_0 = _self->o_0_0; /* hml/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10836, _ctx);kk_hml__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10839_1209 = kk_std_core_types__list_unbox(_b_x1207, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5193 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11159(_y_x10836, o_0_0, options, remaining, _y_x10839_1209, _ctx);
  return kk_unit_box(_x_x5193);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11160(kk_hml__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10836, kk_context_t* _ctx) { /* forall<h> (o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11278;
  kk_box_t _x_x5189;
  kk_ref_t _x_x5190 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5189 = kk_ref_get(_x_x5190,kk_context()); /*10000*/
  x_11278 = kk_std_core_types__list_unbox(_x_x5189, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11278, _ctx);
    kk_box_t _x_x5191 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11160_fun5192(_y_x10836, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5191); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11159(_y_x10836, o_0_0, options, remaining, x_11278, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11161_fun5202__t {
  struct kk_function_s _base;
  kk_hml__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11161_fun5202(kk_function_t _fself, kk_box_t _b_x1217, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11161_fun5202(kk_hml__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11161_fun5202__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11161_fun5202__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11161_fun5202, kk_context());
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11161_fun5202(kk_function_t _fself, kk_box_t _b_x1217, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11161_fun5202__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11161_fun5202__t*, _fself, _ctx);
  kk_hml__clioption o_0_0 = _self->o_0_0; /* hml/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_hml__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10836_1221 = kk_std_core_types__list_unbox(_b_x1217, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5203 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11160(o_0_0, options, remaining, _y_x10836_1221, _ctx);
  return kk_unit_box(_x_x5203);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11161(kk_ref_t error, kk_hml__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_std_core_types__list _y_x10834, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2478;
  kk_integer_t _brw_x2481 = kk_std_core_list__lift_length_6003(_y_x10834, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2482 = kk_integer_eq_borrow(_brw_x2481,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2481, _ctx);
  _match_x2478 = _brw_x2482; /*bool*/
  if (_match_x2478) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_0_0, (KK_I32(4)), _ctx);
    kk_string_t _b_x1211_1219;
    kk_string_t _x_x5194;
    kk_define_string_literal(static, _s_x5195, 8, "option -", _ctx)
    _x_x5194 = kk_string_dup(_s_x5195, _ctx); /*string*/
    kk_string_t _x_x5196;
    kk_string_t _x_x5197;
    kk_define_string_literal(static, _s_x5198, 17, " requires a value", _ctx)
    _x_x5197 = kk_string_dup(_s_x5198, _ctx); /*string*/
    _x_x5196 = kk_std_core_types__lp__plus__plus__rp_(s_0_0, _x_x5197, _ctx); /*string*/
    _b_x1211_1219 = kk_std_core_types__lp__plus__plus__rp_(_x_x5194, _x_x5196, _ctx); /*string*/
    kk_unit_t _brw_x2480 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1211_1219)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2480; return kk_Unit;
  }
  {
    kk_string_drop(s_0_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11280;
    kk_box_t _x_x5199;
    kk_ref_t _x_x5200 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x5199 = kk_ref_get(_x_x5200,kk_context()); /*10000*/
    x_11280 = kk_std_core_types__list_unbox(_x_x5199, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11280, _ctx);
      kk_box_t _x_x5201 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11161_fun5202(o_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5201); return kk_Unit;
    }
    {
      kk_hml__mlift_hc__parse__loop_11160(o_0_0, options, remaining, x_11280, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11162_fun5205__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11162_fun5205(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11162_fun5205(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11162_fun5205, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11162_fun5205(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11282 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5206 = kk_std_core_hnd__as_Ev(ev_11282, _ctx);
    kk_box_t _box_x1222 = _con_x5206->hnd;
    int32_t m = _con_x5206->marker;
    kk_hml__hica_brk h = kk_hml__hica_brk_unbox(_box_x1222, KK_BORROWED, _ctx);
    kk_hml__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__Hnd_hica_brk* _con_x5207 = kk_hml__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5207->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5207->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1225 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1225, (_fun_unbox_x1225, m, ev_11282, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11162(kk_unit_t wild___6_0, kk_context_t* _ctx) { /* forall<h> (wild_@6@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1228_1230 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5204 = kk_std_core_hnd__open_at0(_b_x1228_1230, kk_hml__new_mlift_hc__parse__loop_11162_fun5205(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5204); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11163_fun5209__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11163_fun5209(kk_function_t _fself, kk_box_t _b_x1237, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11163_fun5209(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11163_fun5209, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11163_fun5209(kk_function_t _fself, kk_box_t _b_x1237, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_0_1239 = kk_Unit;
  kk_unit_unbox(_b_x1237);
  kk_unit_t _x_x5210 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11162(wild___6_0_1239, _ctx);
  return kk_unit_box(_x_x5210);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11163(kk_ref_t sub__args, kk_std_core_types__list _y_x10849, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11284 = kk_Unit;
  kk_unit_t _brw_x2477 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10849, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2477;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5208 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11163_fun5209(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5208); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11162(x_11284, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11164_fun5213__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11164_fun5213(kk_function_t _fself, kk_box_t _b_x1245, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11164_fun5213(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11164_fun5213__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11164_fun5213__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11164_fun5213, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11164_fun5213(kk_function_t _fself, kk_box_t _b_x1245, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11164_fun5213__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11164_fun5213__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10849_1247 = kk_std_core_types__list_unbox(_b_x1245, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5214 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11163(sub__args, _y_x10849_1247, _ctx);
  return kk_unit_box(_x_x5214);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11164(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11286;
  kk_box_t _x_x5211 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11286 = kk_std_core_types__list_unbox(_x_x5211, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11286, _ctx);
    kk_box_t _x_x5212 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11164_fun5213(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5212); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11163(sub__args, x_11286, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_hml__mlift_hc__parse__loop_11165(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10853, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1251_1253;
  kk_std_core_types__list _x_x5215 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1251_1253 = kk_std_core_list_append(_y_x10853, _x_x5215, _ctx); /*list<string>*/
  kk_unit_t _brw_x2474 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1251_1253, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2474; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5223__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5223(kk_function_t _fself, kk_box_t _b_x1261, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5223(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5223, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5223(kk_function_t _fself, kk_box_t _b_x1261, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_1751 = kk_Unit;
  kk_unit_unbox(_b_x1261);
  kk_unit_t _x_x5224 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11121(wild___0_1751, _ctx);
  return kk_unit_box(_x_x5224);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5232__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5232(kk_function_t _fself, kk_box_t _b_x1267, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5232(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5232, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5232(kk_function_t _fself, kk_box_t _b_x1267, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_0_1752 = kk_Unit;
  kk_unit_unbox(_b_x1267);
  kk_unit_t _x_x5233 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11122(wild___0_0_1752, _ctx);
  return kk_unit_box(_x_x5233);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5241__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5241(kk_function_t _fself, kk_box_t _b_x1273, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5241(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5241, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5241(kk_function_t _fself, kk_box_t _b_x1273, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___1_1753 = kk_Unit;
  kk_unit_unbox(_b_x1273);
  kk_unit_t _x_x5242 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11123(wild___1_1753, _ctx);
  return kk_unit_box(_x_x5242);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5249__t {
  struct kk_function_s _base;
  kk_ref_t positionals;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5249(kk_function_t _fself, kk_box_t _b_x1279, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5249(kk_ref_t positionals, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5249__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5249__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5249, kk_context());
  _self->positionals = positionals;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5249(kk_function_t _fself, kk_box_t _b_x1279, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5249__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5249__t*, _fself, _ctx);
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10759_1754 = kk_std_core_types__list_unbox(_b_x1279, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5250 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11126(positionals, remaining, _y_x10759_1754, _ctx);
  return kk_unit_box(_x_x5250);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5255__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5255(kk_function_t _fself, kk_box_t _b_x1283, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5255(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5255, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5255(kk_function_t _fself, kk_box_t _b_x1283, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5256;
  kk_std_core_types__maybe maybe_1772 = kk_std_core_types__maybe_unbox(_b_x1283, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1772, _ctx)) {
    kk_box_t _box_x1280 = maybe_1772._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1772, _ctx);
    _x_x5256 = true; /*bool*/
  }
  else {
    _x_x5256 = false; /*bool*/
  }
  return kk_bool_box(_x_x5256);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5261__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5261(kk_function_t _fself, kk_box_t _b_x1288, kk_box_t _b_x1289, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5261(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5261, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5261(kk_function_t _fself, kk_box_t _b_x1288, kk_box_t _b_x1289, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_0_10704;
  kk_string_t _x_x5262;
  kk_box_t _x_x5263 = kk_box_dup(_b_x1288, _ctx); /*10000*/
  _x_x5262 = kk_string_unbox(_x_x5263); /*string*/
  kk_string_t _x_x5264;
  kk_box_t _x_x5265 = kk_box_dup(_b_x1289, _ctx); /*10001*/
  _x_x5264 = kk_string_unbox(_x_x5265); /*string*/
  maybe_0_10704 = kk_std_core_sslice_starts_with(_x_x5262, _x_x5264, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5266;
  if (kk_std_core_types__is_Just(maybe_0_10704, _ctx)) {
    kk_box_t _box_x1284 = maybe_0_10704._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_0_10704, _ctx);
    kk_std_core_types__list _x_x5267;
    kk_std_core_types__list _x_x5268;
    kk_string_t _x_x5269 = kk_string_unbox(_b_x1288); /*string*/
    _x_x5268 = kk_std_core_string_list(_x_x5269, _ctx); /*list<char>*/
    kk_integer_t _x_x5270;
    kk_string_t _x_x5271 = kk_string_unbox(_b_x1289); /*string*/
    _x_x5270 = kk_std_core_string_chars_fs_count(_x_x5271, _ctx); /*int*/
    _x_x5267 = kk_std_core_list_drop(_x_x5268, _x_x5270, _ctx); /*list<10001>*/
    _x_x5266 = kk_std_core_string_listchar_fs_string(_x_x5267, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1289, _ctx);
    _x_x5266 = kk_string_unbox(_b_x1288); /*string*/
  }
  return kk_string_box(_x_x5266);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5279__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5279(kk_function_t _fself, kk_box_t _b_x1297, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5279(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5279, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5279(kk_function_t _fself, kk_box_t _b_x1297, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5280;
  kk_char_t _x_x5281 = kk_char_unbox(_b_x1297, KK_OWNED, _ctx); /*char*/
  _x_x5280 = kk_std_core_string_char_fs_string(_x_x5281, _ctx); /*string*/
  return kk_string_box(_x_x5280);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5283__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5283(kk_function_t _fself, kk_box_t _b_x1301, kk_box_t _b_x1302, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5283(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5283, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5283(kk_function_t _fself, kk_box_t _b_x1301, kk_box_t _b_x1302, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011;
  kk_string_t _x_x5284 = kk_string_unbox(_b_x1301); /*string*/
  kk_string_t _x_x5285 = kk_string_unbox(_b_x1302); /*string*/
  v_10011 = kk_string_splitv(_x_x5284,_x_x5285,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x5286 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x5286, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5291__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t options;
  kk_hml__clispec spec;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5291(kk_function_t _fself, kk_box_t _b_x1311, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5291(kk_ref_t error, kk_ref_t options, kk_hml__clispec spec, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5291__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5291__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5291, kk_context());
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5291(kk_function_t _fself, kk_box_t _b_x1311, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5291__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5291__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_hml__clispec spec = _self->spec; /* hml/clispec */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_hml__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list _c_x10765_1755 = kk_std_core_types__list_unbox(_b_x1311, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5292 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11129(error, options, spec, _c_x10765_1755, _ctx);
  return kk_unit_box(_x_x5292);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5297__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5297(kk_function_t _fself, kk_box_t _b_x1315, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5297(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5297, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5297(kk_function_t _fself, kk_box_t _b_x1315, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5298;
  kk_std_core_types__maybe maybe_1_1773 = kk_std_core_types__maybe_unbox(_b_x1315, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1_1773, _ctx)) {
    kk_box_t _box_x1312 = maybe_1_1773._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1_1773, _ctx);
    _x_x5298 = true; /*bool*/
  }
  else {
    _x_x5298 = false; /*bool*/
  }
  return kk_bool_box(_x_x5298);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5300__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5300(kk_function_t _fself, kk_box_t _b_x1320, kk_box_t _b_x1321, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5300(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5300, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5300(kk_function_t _fself, kk_box_t _b_x1320, kk_box_t _b_x1321, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_2_10706;
  kk_string_t _x_x5301;
  kk_box_t _x_x5302 = kk_box_dup(_b_x1320, _ctx); /*10000*/
  _x_x5301 = kk_string_unbox(_x_x5302); /*string*/
  kk_string_t _x_x5303;
  kk_box_t _x_x5304 = kk_box_dup(_b_x1321, _ctx); /*10001*/
  _x_x5303 = kk_string_unbox(_x_x5304); /*string*/
  maybe_2_10706 = kk_std_core_sslice_starts_with(_x_x5301, _x_x5303, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5305;
  if (kk_std_core_types__is_Just(maybe_2_10706, _ctx)) {
    kk_box_t _box_x1316 = maybe_2_10706._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_2_10706, _ctx);
    kk_std_core_types__list _x_x5306;
    kk_std_core_types__list _x_x5307;
    kk_string_t _x_x5308 = kk_string_unbox(_b_x1320); /*string*/
    _x_x5307 = kk_std_core_string_list(_x_x5308, _ctx); /*list<char>*/
    kk_integer_t _x_x5309;
    kk_string_t _x_x5310 = kk_string_unbox(_b_x1321); /*string*/
    _x_x5309 = kk_std_core_string_chars_fs_count(_x_x5310, _ctx); /*int*/
    _x_x5306 = kk_std_core_list_drop(_x_x5307, _x_x5309, _ctx); /*list<10001>*/
    _x_x5305 = kk_std_core_string_listchar_fs_string(_x_x5306, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1321, _ctx);
    _x_x5305 = kk_string_unbox(_b_x1320); /*string*/
  }
  return kk_string_box(_x_x5305);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5315__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5315(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5315(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5315, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5315(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5316;
  kk_hml__clispec _match_x2462 = kk_hml__clispec_unbox(_b_x1329, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5317 = kk_hml__as_Clispec(_match_x2462, _ctx);
    kk_string_t _pat_0_11 = _con_x5317->app__name;
    kk_string_t _pat_1_8 = _con_x5317->app__version;
    kk_string_t _pat_2_2 = _con_x5317->app__about;
    kk_std_core_types__list _x_2 = _con_x5317->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x5317->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x5317->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5317->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2462, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_string_drop(_pat_2_2, _ctx);
      kk_string_drop(_pat_1_8, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2462, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2462, _ctx);
    }
    _x_x5316 = _x_2; /*list<hml/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5316, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5321__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5321(kk_function_t _fself, kk_box_t _b_x1339, kk_box_t _b_x1340, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5321(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5321, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5323__t {
  struct kk_function_s _base;
  kk_string_t name_1_1775;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5323(kk_function_t _fself, kk_box_t _b_x1335, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5323(kk_string_t name_1_1775, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5323__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5323__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5323, kk_context());
  _self->name_1_1775 = name_1_1775;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5323(kk_function_t _fself, kk_box_t _b_x1335, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5323__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5323__t*, _fself, _ctx);
  kk_string_t name_1_1775 = _self->name_1_1775; /* string */
  kk_drop_match(_self, {kk_string_dup(name_1_1775, _ctx);}, {}, _ctx)
  kk_string_t _x_x5324;
  kk_hml__cliflag _match_x2461 = kk_hml__cliflag_unbox(_b_x1335, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x5325 = kk_hml__as_Cliflag(_match_x2461, _ctx);
    kk_string_t _x_1 = _con_x5325->flag__name;
    kk_string_t _pat_0_10 = _con_x5325->flag__short;
    kk_string_t _pat_1_7 = _con_x5325->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2461, _ctx)) {
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_10, _ctx);
      kk_datatype_ptr_free(_match_x2461, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2461, _ctx);
    }
    _x_x5324 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x5324,name_1_1775,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5321(kk_function_t _fself, kk_box_t _b_x1339, kk_box_t _b_x1340, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5322;
  kk_std_core_types__list flags_0_1774 = kk_std_core_types__list_unbox(_b_x1339, KK_OWNED, _ctx); /*list<hml/cliflag>*/;
  kk_string_t name_1_1775 = kk_string_unbox(_b_x1340); /*string*/;
  _x_x5322 = kk_std_core_list_find(flags_0_1774, kk_hml__new_mlift_hc__parse__loop_11166_fun5323(name_1_1775, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5322, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5331__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5331(kk_function_t _fself, kk_std_core_types__list _y_x10773, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5331(kk_ref_t flags, kk_string_t name_0_0, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5331__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5331__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5331, kk_context());
  _self->flags = flags;
  _self->name_0_0 = name_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5331(kk_function_t _fself, kk_std_core_types__list _y_x10773, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5331__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5331__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1349_1351;
  kk_std_core_types__list _x_x5332 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1349_1351 = kk_std_core_list_append(_y_x10773, _x_x5332, _ctx); /*list<string>*/
  kk_unit_t _brw_x2460 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1349_1351, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2460; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5334__t {
  struct kk_function_s _base;
  kk_function_t next_4_11299;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5334(kk_function_t _fself, kk_box_t _b_x1355, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5334(kk_function_t next_4_11299, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5334__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5334__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5334, kk_context());
  _self->next_4_11299 = next_4_11299;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5334(kk_function_t _fself, kk_box_t _b_x1355, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5334__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5334__t*, _fself, _ctx);
  kk_function_t next_4_11299 = _self->next_4_11299; /* (list<string>) -> <local<23359>,exn,hml/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_4_11299, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5335 = kk_Unit;
  kk_std_core_types__list _x_x5336 = kk_std_core_types__list_unbox(_b_x1355, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11299, (next_4_11299, _x_x5336, _ctx), _ctx);
  return kk_unit_box(_x_x5335);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5338__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5338(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5338(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5338, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5338(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5339;
  kk_hml__clispec _match_x2458 = kk_hml__clispec_unbox(_b_x1358, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5340 = kk_hml__as_Clispec(_match_x2458, _ctx);
    kk_string_t _pat_0_13 = _con_x5340->app__name;
    kk_string_t _pat_1_10 = _con_x5340->app__version;
    kk_string_t _pat_2_4 = _con_x5340->app__about;
    kk_std_core_types__list _pat_3_2 = _con_x5340->app__flags;
    kk_std_core_types__list _x_4 = _con_x5340->app__options;
    kk_std_core_types__list _pat_4_2 = _con_x5340->app__args;
    kk_std_core_types__list _pat_5_2 = _con_x5340->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2458, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_std_core_types__list_drop(_pat_3_2, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_10, _ctx);
      kk_string_drop(_pat_0_13, _ctx);
      kk_datatype_ptr_free(_match_x2458, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2458, _ctx);
    }
    _x_x5339 = _x_4; /*list<hml/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5339, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5342__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5342(kk_function_t _fself, kk_box_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5342(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5342, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5344__t {
  struct kk_function_s _base;
  kk_string_t name_2_1777;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5344(kk_function_t _fself, kk_box_t _b_x1364, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5344(kk_string_t name_2_1777, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5344__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5344__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5344, kk_context());
  _self->name_2_1777 = name_2_1777;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5344(kk_function_t _fself, kk_box_t _b_x1364, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5344__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5344__t*, _fself, _ctx);
  kk_string_t name_2_1777 = _self->name_2_1777; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2_1777, _ctx);}, {}, _ctx)
  kk_string_t _x_x5345;
  kk_hml__clioption _match_x2457 = kk_hml__clioption_unbox(_b_x1364, KK_OWNED, _ctx); /*hml/clioption*/;
  {
    struct kk_hml_Clioption* _con_x5346 = kk_hml__as_Clioption(_match_x2457, _ctx);
    kk_string_t _x_3 = _con_x5346->opt__name;
    kk_string_t _pat_0_12 = _con_x5346->opt__short;
    kk_string_t _pat_1_9 = _con_x5346->opt__help;
    kk_string_t _pat_2_3 = _con_x5346->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2457, _ctx)) {
      kk_string_drop(_pat_2_3, _ctx);
      kk_string_drop(_pat_1_9, _ctx);
      kk_string_drop(_pat_0_12, _ctx);
      kk_datatype_ptr_free(_match_x2457, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2457, _ctx);
    }
    _x_x5345 = _x_3; /*string*/
  }
  return kk_string_is_eq(_x_x5345,name_2_1777,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5342(kk_function_t _fself, kk_box_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5343;
  kk_std_core_types__list options_1_1776 = kk_std_core_types__list_unbox(_b_x1368, KK_OWNED, _ctx); /*list<hml/clioption>*/;
  kk_string_t name_2_1777 = kk_string_unbox(_b_x1369); /*string*/;
  _x_x5343 = kk_std_core_list_find(options_1_1776, kk_hml__new_mlift_hc__parse__loop_11166_fun5344(name_2_1777, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5343, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5353__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5353(kk_function_t _fself, kk_box_t _b_x1376, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5353(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5353__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5353__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5353, kk_context());
  _self->error = error;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5353(kk_function_t _fself, kk_box_t _b_x1376, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5353__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5353__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10775_1758 = kk_std_core_types__list_unbox(_b_x1376, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5354 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11136(error, name_0_0, options, remaining, _y_x10775_1758, _ctx);
  return kk_unit_box(_x_x5354);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5361__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5361(kk_function_t _fself, kk_box_t _b_x1382, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5361(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5361, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5361(kk_function_t _fself, kk_box_t _b_x1382, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5362;
  kk_std_core_types__maybe maybe_3_1778 = kk_std_core_types__maybe_unbox(_b_x1382, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_3_1778, _ctx)) {
    kk_box_t _box_x1379 = maybe_3_1778._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_3_1778, _ctx);
    _x_x5362 = true; /*bool*/
  }
  else {
    _x_x5362 = false; /*bool*/
  }
  return kk_bool_box(_x_x5362);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5364__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5364(kk_function_t _fself, kk_box_t _b_x1387, kk_box_t _b_x1388, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5364(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5364, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5364(kk_function_t _fself, kk_box_t _b_x1387, kk_box_t _b_x1388, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_4_10709;
  kk_string_t _x_x5365;
  kk_box_t _x_x5366 = kk_box_dup(_b_x1387, _ctx); /*10000*/
  _x_x5365 = kk_string_unbox(_x_x5366); /*string*/
  kk_string_t _x_x5367;
  kk_box_t _x_x5368 = kk_box_dup(_b_x1388, _ctx); /*10001*/
  _x_x5367 = kk_string_unbox(_x_x5368); /*string*/
  maybe_4_10709 = kk_std_core_sslice_starts_with(_x_x5365, _x_x5367, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5369;
  if (kk_std_core_types__is_Just(maybe_4_10709, _ctx)) {
    kk_box_t _box_x1383 = maybe_4_10709._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_4_10709, _ctx);
    kk_std_core_types__list _x_x5370;
    kk_std_core_types__list _x_x5371;
    kk_string_t _x_x5372 = kk_string_unbox(_b_x1387); /*string*/
    _x_x5371 = kk_std_core_string_list(_x_x5372, _ctx); /*list<char>*/
    kk_integer_t _x_x5373;
    kk_string_t _x_x5374 = kk_string_unbox(_b_x1388); /*string*/
    _x_x5373 = kk_std_core_string_chars_fs_count(_x_x5374, _ctx); /*int*/
    _x_x5370 = kk_std_core_list_drop(_x_x5371, _x_x5373, _ctx); /*list<10001>*/
    _x_x5369 = kk_std_core_string_listchar_fs_string(_x_x5370, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1388, _ctx);
    _x_x5369 = kk_string_unbox(_b_x1387); /*string*/
  }
  return kk_string_box(_x_x5369);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5379__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5379(kk_function_t _fself, kk_box_t _b_x1396, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5379(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5379, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5379(kk_function_t _fself, kk_box_t _b_x1396, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5380;
  kk_hml__clispec _match_x2452 = kk_hml__clispec_unbox(_b_x1396, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5381 = kk_hml__as_Clispec(_match_x2452, _ctx);
    kk_string_t _pat_0_19 = _con_x5381->app__name;
    kk_string_t _pat_1_14 = _con_x5381->app__version;
    kk_string_t _pat_2_5 = _con_x5381->app__about;
    kk_std_core_types__list _x_6 = _con_x5381->app__flags;
    kk_std_core_types__list _pat_3_3 = _con_x5381->app__options;
    kk_std_core_types__list _pat_4_3 = _con_x5381->app__args;
    kk_std_core_types__list _pat_5_3 = _con_x5381->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2452, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_3, _ctx);
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_string_drop(_pat_2_5, _ctx);
      kk_string_drop(_pat_1_14, _ctx);
      kk_string_drop(_pat_0_19, _ctx);
      kk_datatype_ptr_free(_match_x2452, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2452, _ctx);
    }
    _x_x5380 = _x_6; /*list<hml/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5380, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5385__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5385(kk_function_t _fself, kk_box_t _b_x1406, kk_box_t _b_x1407, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5385(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5385, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5387__t {
  struct kk_function_s _base;
  kk_string_t s_6_1780;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5387(kk_function_t _fself, kk_box_t _b_x1402, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5387(kk_string_t s_6_1780, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5387__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5387__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5387, kk_context());
  _self->s_6_1780 = s_6_1780;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5387(kk_function_t _fself, kk_box_t _b_x1402, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5387__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5387__t*, _fself, _ctx);
  kk_string_t s_6_1780 = _self->s_6_1780; /* string */
  kk_drop_match(_self, {kk_string_dup(s_6_1780, _ctx);}, {}, _ctx)
  kk_string_t _x_x5388;
  kk_hml__cliflag _match_x2451 = kk_hml__cliflag_unbox(_b_x1402, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x5389 = kk_hml__as_Cliflag(_match_x2451, _ctx);
    kk_string_t _pat_0_18 = _con_x5389->flag__name;
    kk_string_t _x_5 = _con_x5389->flag__short;
    kk_string_t _pat_1_13 = _con_x5389->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2451, _ctx)) {
      kk_string_drop(_pat_1_13, _ctx);
      kk_string_drop(_pat_0_18, _ctx);
      kk_datatype_ptr_free(_match_x2451, _ctx);
    }
    else {
      kk_string_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2451, _ctx);
    }
    _x_x5388 = _x_5; /*string*/
  }
  return kk_string_is_eq(_x_x5388,s_6_1780,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5385(kk_function_t _fself, kk_box_t _b_x1406, kk_box_t _b_x1407, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5386;
  kk_std_core_types__list flags_1_0_1779 = kk_std_core_types__list_unbox(_b_x1406, KK_OWNED, _ctx); /*list<hml/cliflag>*/;
  kk_string_t s_6_1780 = kk_string_unbox(_b_x1407); /*string*/;
  _x_x5386 = kk_std_core_list_find(flags_1_0_1779, kk_hml__new_mlift_hc__parse__loop_11166_fun5387(s_6_1780, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5386, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5395__t {
  struct kk_function_s _base;
  kk_hml__cliflag f_1;
  kk_ref_t flags;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5395(kk_function_t _fself, kk_std_core_types__list _y_x10789, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5395(kk_hml__cliflag f_1, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5395__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5395__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5395, kk_context());
  _self->f_1 = f_1;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5397__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5397(kk_function_t _fself, kk_box_t _b_x1415, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5397(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5397, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5397(kk_function_t _fself, kk_box_t _b_x1415, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5398;
  kk_hml__cliflag _match_x2450 = kk_hml__cliflag_unbox(_b_x1415, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x5399 = kk_hml__as_Cliflag(_match_x2450, _ctx);
    kk_string_t _x_7 = _con_x5399->flag__name;
    kk_string_t _pat_0_20 = _con_x5399->flag__short;
    kk_string_t _pat_1_15 = _con_x5399->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2450, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2450, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2450, _ctx);
    }
    _x_x5398 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5398);
}
static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5395(kk_function_t _fself, kk_std_core_types__list _y_x10789, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5395__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5395__t*, _fself, _ctx);
  kk_hml__cliflag f_1 = _self->f_1; /* hml/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_hml__cliflag_dup(f_1, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1416_1418;
  kk_box_t _x_x5396 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5397(_ctx), kk_hml__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x1416_1418 = kk_string_unbox(_x_x5396); /*string*/
  kk_std_core_types__list _b_x1424_1426;
  kk_std_core_types__list _x_x5400 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1416_1418), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1424_1426 = kk_std_core_list_append(_y_x10789, _x_x5400, _ctx); /*list<string>*/
  kk_unit_t _brw_x2449 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1424_1426, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2449; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5402__t {
  struct kk_function_s _base;
  kk_function_t next_6_11306;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5402(kk_function_t _fself, kk_box_t _b_x1428, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5402(kk_function_t next_6_11306, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5402__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5402__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5402, kk_context());
  _self->next_6_11306 = next_6_11306;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5402(kk_function_t _fself, kk_box_t _b_x1428, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5402__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5402__t*, _fself, _ctx);
  kk_function_t next_6_11306 = _self->next_6_11306; /* (list<string>) -> <local<23359>,exn,hml/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_6_11306, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5403 = kk_Unit;
  kk_std_core_types__list _x_x5404 = kk_std_core_types__list_unbox(_b_x1428, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11306, (next_6_11306, _x_x5404, _ctx), _ctx);
  return kk_unit_box(_x_x5403);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5406__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5406(kk_function_t _fself, kk_box_t _b_x1431, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5406(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5406, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5406(kk_function_t _fself, kk_box_t _b_x1431, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5407;
  kk_hml__clispec _match_x2447 = kk_hml__clispec_unbox(_b_x1431, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5408 = kk_hml__as_Clispec(_match_x2447, _ctx);
    kk_string_t _pat_0_22 = _con_x5408->app__name;
    kk_string_t _pat_1_17 = _con_x5408->app__version;
    kk_string_t _pat_2_7 = _con_x5408->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x5408->app__flags;
    kk_std_core_types__list _x_9 = _con_x5408->app__options;
    kk_std_core_types__list _pat_4_4 = _con_x5408->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x5408->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2447, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_17, _ctx);
      kk_string_drop(_pat_0_22, _ctx);
      kk_datatype_ptr_free(_match_x2447, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2447, _ctx);
    }
    _x_x5407 = _x_9; /*list<hml/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5407, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5410__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5410(kk_function_t _fself, kk_box_t _b_x1441, kk_box_t _b_x1442, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5410(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5410, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5412__t {
  struct kk_function_s _base;
  kk_string_t s_7_1782;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5412(kk_function_t _fself, kk_box_t _b_x1437, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5412(kk_string_t s_7_1782, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5412__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5412__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5412, kk_context());
  _self->s_7_1782 = s_7_1782;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5412(kk_function_t _fself, kk_box_t _b_x1437, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5412__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5412__t*, _fself, _ctx);
  kk_string_t s_7_1782 = _self->s_7_1782; /* string */
  kk_drop_match(_self, {kk_string_dup(s_7_1782, _ctx);}, {}, _ctx)
  kk_string_t _x_x5413;
  kk_hml__clioption _match_x2446 = kk_hml__clioption_unbox(_b_x1437, KK_OWNED, _ctx); /*hml/clioption*/;
  {
    struct kk_hml_Clioption* _con_x5414 = kk_hml__as_Clioption(_match_x2446, _ctx);
    kk_string_t _pat_0_21 = _con_x5414->opt__name;
    kk_string_t _x_8 = _con_x5414->opt__short;
    kk_string_t _pat_1_16 = _con_x5414->opt__help;
    kk_string_t _pat_2_6 = _con_x5414->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2446, _ctx)) {
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_16, _ctx);
      kk_string_drop(_pat_0_21, _ctx);
      kk_datatype_ptr_free(_match_x2446, _ctx);
    }
    else {
      kk_string_dup(_x_8, _ctx);
      kk_datatype_ptr_decref(_match_x2446, _ctx);
    }
    _x_x5413 = _x_8; /*string*/
  }
  return kk_string_is_eq(_x_x5413,s_7_1782,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5410(kk_function_t _fself, kk_box_t _b_x1441, kk_box_t _b_x1442, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5411;
  kk_std_core_types__list options_2_1781 = kk_std_core_types__list_unbox(_b_x1441, KK_OWNED, _ctx); /*list<hml/clioption>*/;
  kk_string_t s_7_1782 = kk_string_unbox(_b_x1442); /*string*/;
  _x_x5411 = kk_std_core_list_find(options_2_1781, kk_hml__new_mlift_hc__parse__loop_11166_fun5412(s_7_1782, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5411, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5421__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_hml__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_5;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5421(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5421(kk_ref_t error, kk_hml__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5421__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5421__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5421, kk_context());
  _self->error = error;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_5 = s_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5421(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5421__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5421__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_hml__clioption o_2 = _self->o_2; /* hml/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_string_t s_5 = _self->s_5; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_hml__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_5, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10791_1761 = kk_std_core_types__list_unbox(_b_x1449, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5422 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11143(error, o_2, options, remaining, s_5, _y_x10791_1761, _ctx);
  return kk_unit_box(_x_x5422);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5426__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5426(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5426(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5426, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5426(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5427;
  kk_hml__clispec _match_x2441 = kk_hml__clispec_unbox(_b_x1454, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5428 = kk_hml__as_Clispec(_match_x2441, _ctx);
    kk_string_t _pat_0_26 = _con_x5428->app__name;
    kk_string_t _pat_1_19 = _con_x5428->app__version;
    kk_string_t _pat_2_9 = _con_x5428->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x5428->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x5428->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x5428->app__args;
    kk_std_core_types__list _x_12 = _con_x5428->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2441, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_5, _ctx);
      kk_std_core_types__list_drop(_pat_4_5, _ctx);
      kk_std_core_types__list_drop(_pat_3_5, _ctx);
      kk_string_drop(_pat_2_9, _ctx);
      kk_string_drop(_pat_1_19, _ctx);
      kk_string_drop(_pat_0_26, _ctx);
      kk_datatype_ptr_free(_match_x2441, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_12, _ctx);
      kk_datatype_ptr_decref(_match_x2441, _ctx);
    }
    _x_x5427 = _x_12; /*list<(string, hml/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5427, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5430__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5430(kk_function_t _fself, kk_box_t _b_x1466, kk_box_t _b_x1467, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5430(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5430, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5432__t {
  struct kk_function_s _base;
  kk_string_t name_3_1784;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5432(kk_function_t _fself, kk_box_t _b_x1462, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5432(kk_string_t name_3_1784, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5432__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5432__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5432, kk_context());
  _self->name_3_1784 = name_3_1784;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5432(kk_function_t _fself, kk_box_t _b_x1462, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5432__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5432__t*, _fself, _ctx);
  kk_string_t name_3_1784 = _self->name_3_1784; /* string */
  kk_drop_match(_self, {kk_string_dup(name_3_1784, _ctx);}, {}, _ctx)
  kk_string_t _x_x5433;
  kk_std_core_types__tuple2 _match_x2440 = kk_std_core_types__tuple2_unbox(_b_x1462, KK_OWNED, _ctx); /*(string, hml/clispec)*/;
  {
    kk_box_t _box_x1458 = _match_x2440.fst;
    kk_box_t _box_x1459 = _match_x2440.snd;
    kk_string_t _x_11 = kk_string_unbox(_box_x1458);
    kk_string_dup(_x_11, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2440, _ctx);
    _x_x5433 = _x_11; /*string*/
  }
  return kk_string_is_eq(_x_x5433,name_3_1784,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5430(kk_function_t _fself, kk_box_t _b_x1466, kk_box_t _b_x1467, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5431;
  kk_std_core_types__list commands_1783 = kk_std_core_types__list_unbox(_b_x1466, KK_OWNED, _ctx); /*list<(string, hml/clispec)>*/;
  kk_string_t name_3_1784 = kk_string_unbox(_b_x1467); /*string*/;
  _x_x5431 = kk_std_core_list_find(commands_1783, kk_hml__new_mlift_hc__parse__loop_11166_fun5432(name_3_1784, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5431, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5437__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5437(kk_function_t _fself, kk_box_t _b_x1474, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5437(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5437__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5437__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5437, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5437(kk_function_t _fself, kk_box_t _b_x1474, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5437__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5437__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_1763 = kk_Unit;
  kk_unit_unbox(_b_x1474);
  kk_unit_t _x_x5438 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11146(remaining, sub__args, wild___5_1763, _ctx);
  return kk_unit_box(_x_x5438);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5441__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5441(kk_function_t _fself, kk_std_core_types__list _y_x10810, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5441(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5441__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5441__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5441, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5441(kk_function_t _fself, kk_std_core_types__list _y_x10810, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5441__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5441__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1482_1484;
  kk_std_core_types__list _x_x5442 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1482_1484 = kk_std_core_list_append(_y_x10810, _x_x5442, _ctx); /*list<string>*/
  kk_unit_t _brw_x2437 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1482_1484, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2437; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5444__t {
  struct kk_function_s _base;
  kk_function_t next_9_11315;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5444(kk_function_t _fself, kk_box_t _b_x1488, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5444(kk_function_t next_9_11315, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5444__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5444__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5444, kk_context());
  _self->next_9_11315 = next_9_11315;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5444(kk_function_t _fself, kk_box_t _b_x1488, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5444__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5444__t*, _fself, _ctx);
  kk_function_t next_9_11315 = _self->next_9_11315; /* (list<string>) -> <local<23359>,hml/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_9_11315, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5445 = kk_Unit;
  kk_std_core_types__list _x_x5446 = kk_std_core_types__list_unbox(_b_x1488, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11315, (next_9_11315, _x_x5446, _ctx), _ctx);
  return kk_unit_box(_x_x5445);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5451__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5451(kk_function_t _fself, kk_box_t _b_x1492, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5451(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5451, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5451(kk_function_t _fself, kk_box_t _b_x1492, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5452;
  kk_std_core_types__maybe maybe_5_1785 = kk_std_core_types__maybe_unbox(_b_x1492, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_5_1785, _ctx)) {
    kk_box_t _box_x1489 = maybe_5_1785._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_5_1785, _ctx);
    _x_x5452 = true; /*bool*/
  }
  else {
    _x_x5452 = false; /*bool*/
  }
  return kk_bool_box(_x_x5452);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5454__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5454(kk_function_t _fself, kk_box_t _b_x1497, kk_box_t _b_x1498, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5454(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5454, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5454(kk_function_t _fself, kk_box_t _b_x1497, kk_box_t _b_x1498, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_6_10713;
  kk_string_t _x_x5455;
  kk_box_t _x_x5456 = kk_box_dup(_b_x1497, _ctx); /*10000*/
  _x_x5455 = kk_string_unbox(_x_x5456); /*string*/
  kk_string_t _x_x5457;
  kk_box_t _x_x5458 = kk_box_dup(_b_x1498, _ctx); /*10001*/
  _x_x5457 = kk_string_unbox(_x_x5458); /*string*/
  maybe_6_10713 = kk_std_core_sslice_starts_with(_x_x5455, _x_x5457, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5459;
  if (kk_std_core_types__is_Just(maybe_6_10713, _ctx)) {
    kk_box_t _box_x1493 = maybe_6_10713._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_6_10713, _ctx);
    kk_std_core_types__list _x_x5460;
    kk_std_core_types__list _x_x5461;
    kk_string_t _x_x5462 = kk_string_unbox(_b_x1497); /*string*/
    _x_x5461 = kk_std_core_string_list(_x_x5462, _ctx); /*list<char>*/
    kk_integer_t _x_x5463;
    kk_string_t _x_x5464 = kk_string_unbox(_b_x1498); /*string*/
    _x_x5463 = kk_std_core_string_chars_fs_count(_x_x5464, _ctx); /*int*/
    _x_x5460 = kk_std_core_list_drop(_x_x5461, _x_x5463, _ctx); /*list<10001>*/
    _x_x5459 = kk_std_core_string_listchar_fs_string(_x_x5460, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1498, _ctx);
    _x_x5459 = kk_string_unbox(_b_x1497); /*string*/
  }
  return kk_string_box(_x_x5459);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5469__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5469(kk_function_t _fself, kk_box_t _b_x1506, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5469(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5469, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5469(kk_function_t _fself, kk_box_t _b_x1506, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5470;
  kk_hml__clispec _match_x2431 = kk_hml__clispec_unbox(_b_x1506, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5471 = kk_hml__as_Clispec(_match_x2431, _ctx);
    kk_string_t _pat_0_31 = _con_x5471->app__name;
    kk_string_t _pat_1_23 = _con_x5471->app__version;
    kk_string_t _pat_2_10 = _con_x5471->app__about;
    kk_std_core_types__list _x_14 = _con_x5471->app__flags;
    kk_std_core_types__list _pat_3_6 = _con_x5471->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5471->app__args;
    kk_std_core_types__list _pat_5_6 = _con_x5471->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2431, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_6, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_10, _ctx);
      kk_string_drop(_pat_1_23, _ctx);
      kk_string_drop(_pat_0_31, _ctx);
      kk_datatype_ptr_free(_match_x2431, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_14, _ctx);
      kk_datatype_ptr_decref(_match_x2431, _ctx);
    }
    _x_x5470 = _x_14; /*list<hml/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5470, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5475__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5475(kk_function_t _fself, kk_box_t _b_x1516, kk_box_t _b_x1517, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5475(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5475, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5477__t {
  struct kk_function_s _base;
  kk_string_t name_4_1787;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5477(kk_function_t _fself, kk_box_t _b_x1512, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5477(kk_string_t name_4_1787, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5477__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5477__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5477, kk_context());
  _self->name_4_1787 = name_4_1787;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5477(kk_function_t _fself, kk_box_t _b_x1512, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5477__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5477__t*, _fself, _ctx);
  kk_string_t name_4_1787 = _self->name_4_1787; /* string */
  kk_drop_match(_self, {kk_string_dup(name_4_1787, _ctx);}, {}, _ctx)
  kk_string_t _x_x5478;
  kk_hml__cliflag _match_x2430 = kk_hml__cliflag_unbox(_b_x1512, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x5479 = kk_hml__as_Cliflag(_match_x2430, _ctx);
    kk_string_t _x_13 = _con_x5479->flag__name;
    kk_string_t _pat_0_30 = _con_x5479->flag__short;
    kk_string_t _pat_1_22 = _con_x5479->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2430, _ctx)) {
      kk_string_drop(_pat_1_22, _ctx);
      kk_string_drop(_pat_0_30, _ctx);
      kk_datatype_ptr_free(_match_x2430, _ctx);
    }
    else {
      kk_string_dup(_x_13, _ctx);
      kk_datatype_ptr_decref(_match_x2430, _ctx);
    }
    _x_x5478 = _x_13; /*string*/
  }
  return kk_string_is_eq(_x_x5478,name_4_1787,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5475(kk_function_t _fself, kk_box_t _b_x1516, kk_box_t _b_x1517, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5476;
  kk_std_core_types__list flags_2_0_1786 = kk_std_core_types__list_unbox(_b_x1516, KK_OWNED, _ctx); /*list<hml/cliflag>*/;
  kk_string_t name_4_1787 = kk_string_unbox(_b_x1517); /*string*/;
  _x_x5476 = kk_std_core_list_find(flags_2_0_1786, kk_hml__new_mlift_hc__parse__loop_11166_fun5477(name_4_1787, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5476, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5485__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0_0_0;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5485(kk_function_t _fself, kk_std_core_types__list _y_x10816, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5485(kk_ref_t flags, kk_string_t name_0_0_0_0, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5485__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5485__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5485, kk_context());
  _self->flags = flags;
  _self->name_0_0_0_0 = name_0_0_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5485(kk_function_t _fself, kk_std_core_types__list _y_x10816, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5485__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5485__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1526_1528;
  kk_std_core_types__list _x_x5486 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1526_1528 = kk_std_core_list_append(_y_x10816, _x_x5486, _ctx); /*list<string>*/
  kk_unit_t _brw_x2429 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1526_1528, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2429; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5488__t {
  struct kk_function_s _base;
  kk_function_t next_10_11320;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5488(kk_function_t _fself, kk_box_t _b_x1532, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5488(kk_function_t next_10_11320, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5488__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5488__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5488, kk_context());
  _self->next_10_11320 = next_10_11320;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5488(kk_function_t _fself, kk_box_t _b_x1532, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5488__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5488__t*, _fself, _ctx);
  kk_function_t next_10_11320 = _self->next_10_11320; /* (list<string>) -> <local<23359>,exn,hml/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_10_11320, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5489 = kk_Unit;
  kk_std_core_types__list _x_x5490 = kk_std_core_types__list_unbox(_b_x1532, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11320, (next_10_11320, _x_x5490, _ctx), _ctx);
  return kk_unit_box(_x_x5489);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5492__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5492(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5492(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5492, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5492(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5493;
  kk_hml__clispec _match_x2427 = kk_hml__clispec_unbox(_b_x1535, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5494 = kk_hml__as_Clispec(_match_x2427, _ctx);
    kk_string_t _pat_0_33 = _con_x5494->app__name;
    kk_string_t _pat_1_25 = _con_x5494->app__version;
    kk_string_t _pat_2_12 = _con_x5494->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5494->app__flags;
    kk_std_core_types__list _x_16 = _con_x5494->app__options;
    kk_std_core_types__list _pat_4_7 = _con_x5494->app__args;
    kk_std_core_types__list _pat_5_7 = _con_x5494->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2427, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_7, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_12, _ctx);
      kk_string_drop(_pat_1_25, _ctx);
      kk_string_drop(_pat_0_33, _ctx);
      kk_datatype_ptr_free(_match_x2427, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_16, _ctx);
      kk_datatype_ptr_decref(_match_x2427, _ctx);
    }
    _x_x5493 = _x_16; /*list<hml/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5493, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5496__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5496(kk_function_t _fself, kk_box_t _b_x1545, kk_box_t _b_x1546, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5496(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5496, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5498__t {
  struct kk_function_s _base;
  kk_string_t name_5_1789;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5498(kk_function_t _fself, kk_box_t _b_x1541, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5498(kk_string_t name_5_1789, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5498__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5498__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5498, kk_context());
  _self->name_5_1789 = name_5_1789;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5498(kk_function_t _fself, kk_box_t _b_x1541, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5498__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5498__t*, _fself, _ctx);
  kk_string_t name_5_1789 = _self->name_5_1789; /* string */
  kk_drop_match(_self, {kk_string_dup(name_5_1789, _ctx);}, {}, _ctx)
  kk_string_t _x_x5499;
  kk_hml__clioption _match_x2426 = kk_hml__clioption_unbox(_b_x1541, KK_OWNED, _ctx); /*hml/clioption*/;
  {
    struct kk_hml_Clioption* _con_x5500 = kk_hml__as_Clioption(_match_x2426, _ctx);
    kk_string_t _x_15 = _con_x5500->opt__name;
    kk_string_t _pat_0_32 = _con_x5500->opt__short;
    kk_string_t _pat_1_24 = _con_x5500->opt__help;
    kk_string_t _pat_2_11 = _con_x5500->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2426, _ctx)) {
      kk_string_drop(_pat_2_11, _ctx);
      kk_string_drop(_pat_1_24, _ctx);
      kk_string_drop(_pat_0_32, _ctx);
      kk_datatype_ptr_free(_match_x2426, _ctx);
    }
    else {
      kk_string_dup(_x_15, _ctx);
      kk_datatype_ptr_decref(_match_x2426, _ctx);
    }
    _x_x5499 = _x_15; /*string*/
  }
  return kk_string_is_eq(_x_x5499,name_5_1789,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5496(kk_function_t _fself, kk_box_t _b_x1545, kk_box_t _b_x1546, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5497;
  kk_std_core_types__list options_3_1788 = kk_std_core_types__list_unbox(_b_x1545, KK_OWNED, _ctx); /*list<hml/clioption>*/;
  kk_string_t name_5_1789 = kk_string_unbox(_b_x1546); /*string*/;
  _x_x5497 = kk_std_core_list_find(options_3_1788, kk_hml__new_mlift_hc__parse__loop_11166_fun5498(name_5_1789, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5497, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5507__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5507(kk_function_t _fself, kk_box_t _b_x1553, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5507(kk_ref_t error, kk_string_t name_0_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5507__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5507__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5507, kk_context());
  _self->error = error;
  _self->name_0_0_0_0 = name_0_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5507(kk_function_t _fself, kk_box_t _b_x1553, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5507__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5507__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10818_1766 = kk_std_core_types__list_unbox(_b_x1553, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5508 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11154(error, name_0_0_0_0, options, remaining, _y_x10818_1766, _ctx);
  return kk_unit_box(_x_x5508);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5515__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5515(kk_function_t _fself, kk_box_t _b_x1559, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5515(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5515, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5515(kk_function_t _fself, kk_box_t _b_x1559, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5516;
  kk_std_core_types__maybe maybe_7_1790 = kk_std_core_types__maybe_unbox(_b_x1559, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_7_1790, _ctx)) {
    kk_box_t _box_x1556 = maybe_7_1790._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_7_1790, _ctx);
    _x_x5516 = true; /*bool*/
  }
  else {
    _x_x5516 = false; /*bool*/
  }
  return kk_bool_box(_x_x5516);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5518__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5518(kk_function_t _fself, kk_box_t _b_x1564, kk_box_t _b_x1565, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5518(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5518, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5518(kk_function_t _fself, kk_box_t _b_x1564, kk_box_t _b_x1565, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_8_10716;
  kk_string_t _x_x5519;
  kk_box_t _x_x5520 = kk_box_dup(_b_x1564, _ctx); /*10000*/
  _x_x5519 = kk_string_unbox(_x_x5520); /*string*/
  kk_string_t _x_x5521;
  kk_box_t _x_x5522 = kk_box_dup(_b_x1565, _ctx); /*10001*/
  _x_x5521 = kk_string_unbox(_x_x5522); /*string*/
  maybe_8_10716 = kk_std_core_sslice_starts_with(_x_x5519, _x_x5521, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5523;
  if (kk_std_core_types__is_Just(maybe_8_10716, _ctx)) {
    kk_box_t _box_x1560 = maybe_8_10716._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_8_10716, _ctx);
    kk_std_core_types__list _x_x5524;
    kk_std_core_types__list _x_x5525;
    kk_string_t _x_x5526 = kk_string_unbox(_b_x1564); /*string*/
    _x_x5525 = kk_std_core_string_list(_x_x5526, _ctx); /*list<char>*/
    kk_integer_t _x_x5527;
    kk_string_t _x_x5528 = kk_string_unbox(_b_x1565); /*string*/
    _x_x5527 = kk_std_core_string_chars_fs_count(_x_x5528, _ctx); /*int*/
    _x_x5524 = kk_std_core_list_drop(_x_x5525, _x_x5527, _ctx); /*list<10001>*/
    _x_x5523 = kk_std_core_string_listchar_fs_string(_x_x5524, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1565, _ctx);
    _x_x5523 = kk_string_unbox(_b_x1564); /*string*/
  }
  return kk_string_box(_x_x5523);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5533__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5533(kk_function_t _fself, kk_box_t _b_x1573, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5533(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5533, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5533(kk_function_t _fself, kk_box_t _b_x1573, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5534;
  kk_hml__clispec _match_x2421 = kk_hml__clispec_unbox(_b_x1573, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5535 = kk_hml__as_Clispec(_match_x2421, _ctx);
    kk_string_t _pat_0_39 = _con_x5535->app__name;
    kk_string_t _pat_1_29 = _con_x5535->app__version;
    kk_string_t _pat_2_13 = _con_x5535->app__about;
    kk_std_core_types__list _x_18 = _con_x5535->app__flags;
    kk_std_core_types__list _pat_3_8 = _con_x5535->app__options;
    kk_std_core_types__list _pat_4_8 = _con_x5535->app__args;
    kk_std_core_types__list _pat_5_8 = _con_x5535->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2421, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_8, _ctx);
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_std_core_types__list_drop(_pat_3_8, _ctx);
      kk_string_drop(_pat_2_13, _ctx);
      kk_string_drop(_pat_1_29, _ctx);
      kk_string_drop(_pat_0_39, _ctx);
      kk_datatype_ptr_free(_match_x2421, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_18, _ctx);
      kk_datatype_ptr_decref(_match_x2421, _ctx);
    }
    _x_x5534 = _x_18; /*list<hml/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5534, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5539__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5539(kk_function_t _fself, kk_box_t _b_x1583, kk_box_t _b_x1584, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5539(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5539, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5541__t {
  struct kk_function_s _base;
  kk_string_t s_10_1792;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5541(kk_function_t _fself, kk_box_t _b_x1579, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5541(kk_string_t s_10_1792, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5541__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5541__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5541, kk_context());
  _self->s_10_1792 = s_10_1792;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5541(kk_function_t _fself, kk_box_t _b_x1579, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5541__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5541__t*, _fself, _ctx);
  kk_string_t s_10_1792 = _self->s_10_1792; /* string */
  kk_drop_match(_self, {kk_string_dup(s_10_1792, _ctx);}, {}, _ctx)
  kk_string_t _x_x5542;
  kk_hml__cliflag _match_x2420 = kk_hml__cliflag_unbox(_b_x1579, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x5543 = kk_hml__as_Cliflag(_match_x2420, _ctx);
    kk_string_t _pat_0_38 = _con_x5543->flag__name;
    kk_string_t _x_17 = _con_x5543->flag__short;
    kk_string_t _pat_1_28 = _con_x5543->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2420, _ctx)) {
      kk_string_drop(_pat_1_28, _ctx);
      kk_string_drop(_pat_0_38, _ctx);
      kk_datatype_ptr_free(_match_x2420, _ctx);
    }
    else {
      kk_string_dup(_x_17, _ctx);
      kk_datatype_ptr_decref(_match_x2420, _ctx);
    }
    _x_x5542 = _x_17; /*string*/
  }
  return kk_string_is_eq(_x_x5542,s_10_1792,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5539(kk_function_t _fself, kk_box_t _b_x1583, kk_box_t _b_x1584, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5540;
  kk_std_core_types__list flags_3_0_1791 = kk_std_core_types__list_unbox(_b_x1583, KK_OWNED, _ctx); /*list<hml/cliflag>*/;
  kk_string_t s_10_1792 = kk_string_unbox(_b_x1584); /*string*/;
  _x_x5540 = kk_std_core_list_find(flags_3_0_1791, kk_hml__new_mlift_hc__parse__loop_11166_fun5541(s_10_1792, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5540, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5549__t {
  struct kk_function_s _base;
  kk_hml__cliflag f_0_0;
  kk_ref_t flags;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5549(kk_function_t _fself, kk_std_core_types__list _y_x10832, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5549(kk_hml__cliflag f_0_0, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5549__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5549__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5549, kk_context());
  _self->f_0_0 = f_0_0;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5551__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5551(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5551(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5551, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5551(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5552;
  kk_hml__cliflag _match_x2419 = kk_hml__cliflag_unbox(_b_x1592, KK_OWNED, _ctx); /*hml/cliflag*/;
  {
    struct kk_hml_Cliflag* _con_x5553 = kk_hml__as_Cliflag(_match_x2419, _ctx);
    kk_string_t _x_19 = _con_x5553->flag__name;
    kk_string_t _pat_0_40 = _con_x5553->flag__short;
    kk_string_t _pat_1_30 = _con_x5553->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2419, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2419, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2419, _ctx);
    }
    _x_x5552 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5552);
}
static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5549(kk_function_t _fself, kk_std_core_types__list _y_x10832, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5549__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5549__t*, _fself, _ctx);
  kk_hml__cliflag f_0_0 = _self->f_0_0; /* hml/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_hml__cliflag_dup(f_0_0, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1593_1595;
  kk_box_t _x_x5550 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5551(_ctx), kk_hml__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1593_1595 = kk_string_unbox(_x_x5550); /*string*/
  kk_std_core_types__list _b_x1601_1603;
  kk_std_core_types__list _x_x5554 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1593_1595), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1601_1603 = kk_std_core_list_append(_y_x10832, _x_x5554, _ctx); /*list<string>*/
  kk_unit_t _brw_x2418 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1601_1603, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2418; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5556__t {
  struct kk_function_s _base;
  kk_function_t next_12_11327;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5556(kk_function_t _fself, kk_box_t _b_x1605, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5556(kk_function_t next_12_11327, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5556__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5556__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5556, kk_context());
  _self->next_12_11327 = next_12_11327;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5556(kk_function_t _fself, kk_box_t _b_x1605, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5556__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5556__t*, _fself, _ctx);
  kk_function_t next_12_11327 = _self->next_12_11327; /* (list<string>) -> <local<23359>,exn,hml/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_12_11327, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5557 = kk_Unit;
  kk_std_core_types__list _x_x5558 = kk_std_core_types__list_unbox(_b_x1605, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11327, (next_12_11327, _x_x5558, _ctx), _ctx);
  return kk_unit_box(_x_x5557);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5560__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5560(kk_function_t _fself, kk_box_t _b_x1608, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5560(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5560, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5560(kk_function_t _fself, kk_box_t _b_x1608, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5561;
  kk_hml__clispec _match_x2416 = kk_hml__clispec_unbox(_b_x1608, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5562 = kk_hml__as_Clispec(_match_x2416, _ctx);
    kk_string_t _pat_0_42 = _con_x5562->app__name;
    kk_string_t _pat_1_32 = _con_x5562->app__version;
    kk_string_t _pat_2_15 = _con_x5562->app__about;
    kk_std_core_types__list _pat_3_9 = _con_x5562->app__flags;
    kk_std_core_types__list _x_21 = _con_x5562->app__options;
    kk_std_core_types__list _pat_4_9 = _con_x5562->app__args;
    kk_std_core_types__list _pat_5_9 = _con_x5562->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2416, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_9, _ctx);
      kk_std_core_types__list_drop(_pat_4_9, _ctx);
      kk_std_core_types__list_drop(_pat_3_9, _ctx);
      kk_string_drop(_pat_2_15, _ctx);
      kk_string_drop(_pat_1_32, _ctx);
      kk_string_drop(_pat_0_42, _ctx);
      kk_datatype_ptr_free(_match_x2416, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_21, _ctx);
      kk_datatype_ptr_decref(_match_x2416, _ctx);
    }
    _x_x5561 = _x_21; /*list<hml/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5561, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5564__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5564(kk_function_t _fself, kk_box_t _b_x1618, kk_box_t _b_x1619, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5564(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5564, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5566__t {
  struct kk_function_s _base;
  kk_string_t s_11_1794;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5566(kk_function_t _fself, kk_box_t _b_x1614, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5566(kk_string_t s_11_1794, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5566__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5566__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5566, kk_context());
  _self->s_11_1794 = s_11_1794;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5566(kk_function_t _fself, kk_box_t _b_x1614, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5566__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5566__t*, _fself, _ctx);
  kk_string_t s_11_1794 = _self->s_11_1794; /* string */
  kk_drop_match(_self, {kk_string_dup(s_11_1794, _ctx);}, {}, _ctx)
  kk_string_t _x_x5567;
  kk_hml__clioption _match_x2415 = kk_hml__clioption_unbox(_b_x1614, KK_OWNED, _ctx); /*hml/clioption*/;
  {
    struct kk_hml_Clioption* _con_x5568 = kk_hml__as_Clioption(_match_x2415, _ctx);
    kk_string_t _pat_0_41 = _con_x5568->opt__name;
    kk_string_t _x_20 = _con_x5568->opt__short;
    kk_string_t _pat_1_31 = _con_x5568->opt__help;
    kk_string_t _pat_2_14 = _con_x5568->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2415, _ctx)) {
      kk_string_drop(_pat_2_14, _ctx);
      kk_string_drop(_pat_1_31, _ctx);
      kk_string_drop(_pat_0_41, _ctx);
      kk_datatype_ptr_free(_match_x2415, _ctx);
    }
    else {
      kk_string_dup(_x_20, _ctx);
      kk_datatype_ptr_decref(_match_x2415, _ctx);
    }
    _x_x5567 = _x_20; /*string*/
  }
  return kk_string_is_eq(_x_x5567,s_11_1794,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5564(kk_function_t _fself, kk_box_t _b_x1618, kk_box_t _b_x1619, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5565;
  kk_std_core_types__list options_4_1793 = kk_std_core_types__list_unbox(_b_x1618, KK_OWNED, _ctx); /*list<hml/clioption>*/;
  kk_string_t s_11_1794 = kk_string_unbox(_b_x1619); /*string*/;
  _x_x5565 = kk_std_core_list_find(options_4_1793, kk_hml__new_mlift_hc__parse__loop_11166_fun5566(s_11_1794, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5565, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5575__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_hml__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_0_0;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5575(kk_function_t _fself, kk_box_t _b_x1626, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5575(kk_ref_t error, kk_hml__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5575__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5575__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5575, kk_context());
  _self->error = error;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_0_0 = s_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5575(kk_function_t _fself, kk_box_t _b_x1626, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5575__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5575__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_hml__clioption o_0_0 = _self->o_0_0; /* hml/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_string_t s_0_0 = _self->s_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_hml__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10834_1769 = kk_std_core_types__list_unbox(_b_x1626, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5576 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11161(error, o_0_0, options, remaining, s_0_0, _y_x10834_1769, _ctx);
  return kk_unit_box(_x_x5576);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5580__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5580(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5580(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5580, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5580(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5581;
  kk_hml__clispec _match_x2410 = kk_hml__clispec_unbox(_b_x1631, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5582 = kk_hml__as_Clispec(_match_x2410, _ctx);
    kk_string_t _pat_0_46 = _con_x5582->app__name;
    kk_string_t _pat_1_34 = _con_x5582->app__version;
    kk_string_t _pat_2_17 = _con_x5582->app__about;
    kk_std_core_types__list _pat_3_10 = _con_x5582->app__flags;
    kk_std_core_types__list _pat_4_10 = _con_x5582->app__options;
    kk_std_core_types__list _pat_5_10 = _con_x5582->app__args;
    kk_std_core_types__list _x_24 = _con_x5582->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2410, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_10, _ctx);
      kk_std_core_types__list_drop(_pat_4_10, _ctx);
      kk_std_core_types__list_drop(_pat_3_10, _ctx);
      kk_string_drop(_pat_2_17, _ctx);
      kk_string_drop(_pat_1_34, _ctx);
      kk_string_drop(_pat_0_46, _ctx);
      kk_datatype_ptr_free(_match_x2410, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_24, _ctx);
      kk_datatype_ptr_decref(_match_x2410, _ctx);
    }
    _x_x5581 = _x_24; /*list<(string, hml/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5581, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5584__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5584(kk_function_t _fself, kk_box_t _b_x1643, kk_box_t _b_x1644, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5584(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11166_fun5584, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5586__t {
  struct kk_function_s _base;
  kk_string_t name_6_1796;
};
static bool kk_hml__mlift_hc__parse__loop_11166_fun5586(kk_function_t _fself, kk_box_t _b_x1639, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5586(kk_string_t name_6_1796, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5586__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5586__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5586, kk_context());
  _self->name_6_1796 = name_6_1796;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__parse__loop_11166_fun5586(kk_function_t _fself, kk_box_t _b_x1639, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5586__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5586__t*, _fself, _ctx);
  kk_string_t name_6_1796 = _self->name_6_1796; /* string */
  kk_drop_match(_self, {kk_string_dup(name_6_1796, _ctx);}, {}, _ctx)
  kk_string_t _x_x5587;
  kk_std_core_types__tuple2 _match_x2409 = kk_std_core_types__tuple2_unbox(_b_x1639, KK_OWNED, _ctx); /*(string, hml/clispec)*/;
  {
    kk_box_t _box_x1635 = _match_x2409.fst;
    kk_box_t _box_x1636 = _match_x2409.snd;
    kk_string_t _x_23 = kk_string_unbox(_box_x1635);
    kk_string_dup(_x_23, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2409, _ctx);
    _x_x5587 = _x_23; /*string*/
  }
  return kk_string_is_eq(_x_x5587,name_6_1796,kk_context());
}
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5584(kk_function_t _fself, kk_box_t _b_x1643, kk_box_t _b_x1644, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5585;
  kk_std_core_types__list commands_0_1795 = kk_std_core_types__list_unbox(_b_x1643, KK_OWNED, _ctx); /*list<(string, hml/clispec)>*/;
  kk_string_t name_6_1796 = kk_string_unbox(_b_x1644); /*string*/;
  _x_x5585 = kk_std_core_list_find(commands_0_1795, kk_hml__new_mlift_hc__parse__loop_11166_fun5586(name_6_1796, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5585, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5591__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5591(kk_function_t _fself, kk_box_t _b_x1651, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5591(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5591__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5591__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5591, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5591(kk_function_t _fself, kk_box_t _b_x1651, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5591__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5591__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_0_1771 = kk_Unit;
  kk_unit_unbox(_b_x1651);
  kk_unit_t _x_x5592 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11164(remaining, sub__args, wild___5_0_1771, _ctx);
  return kk_unit_box(_x_x5592);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5595__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5595(kk_function_t _fself, kk_std_core_types__list _y_x10853, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5595(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5595__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5595__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5595, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__mlift_hc__parse__loop_11166_fun5595(kk_function_t _fself, kk_std_core_types__list _y_x10853, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5595__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5595__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1659_1661;
  kk_std_core_types__list _x_x5596 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1659_1661 = kk_std_core_list_append(_y_x10853, _x_x5596, _ctx); /*list<string>*/
  kk_unit_t _brw_x2406 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1659_1661, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2406; return kk_Unit;
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11166_fun5598__t {
  struct kk_function_s _base;
  kk_function_t next_15_11336;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5598(kk_function_t _fself, kk_box_t _b_x1665, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11166_fun5598(kk_function_t next_15_11336, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5598__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5598__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11166_fun5598, kk_context());
  _self->next_15_11336 = next_15_11336;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11166_fun5598(kk_function_t _fself, kk_box_t _b_x1665, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11166_fun5598__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11166_fun5598__t*, _fself, _ctx);
  kk_function_t next_15_11336 = _self->next_15_11336; /* (list<string>) -> <local<23359>,hml/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_15_11336, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5599 = kk_Unit;
  kk_std_core_types__list _x_x5600 = kk_std_core_types__list_unbox(_b_x1665, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11336, (next_15_11336, _x_x5600, _ctx), _ctx);
  return kk_unit_box(_x_x5599);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11166(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, wild_ : ()) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2397;
  kk_string_t _x_x5216 = kk_string_dup(a, _ctx); /*string*/
  kk_string_t _x_x5217;
  kk_define_string_literal(static, _s_x5218, 6, "--help", _ctx)
  _x_x5217 = kk_string_dup(_s_x5218, _ctx); /*string*/
  _match_x2397 = kk_string_is_eq(_x_x5216,_x_x5217,kk_context()); /*bool*/
  if (_match_x2397) {
    kk_ref_drop(subcmd, _ctx);
    kk_ref_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(positionals, _ctx);
    kk_ref_drop(options, _ctx);
    kk_ref_drop(flags, _ctx);
    kk_string_drop(a, _ctx);
    kk_unit_t x_11288 = kk_Unit;
    kk_unit_t _brw_x2473 = kk_Unit;
    kk_box_t _x_x5219;
    kk_string_t _x_x5220;
    kk_define_string_literal(static, _s_x5221, 8, "__help__", _ctx)
    _x_x5220 = kk_string_dup(_s_x5221, _ctx); /*string*/
    _x_x5219 = kk_string_box(_x_x5220); /*10000*/
    kk_ref_set_borrow(error,_x_x5219,kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2473;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x5222 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5223(_ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5222); return kk_Unit;
    }
    {
      kk_hml__mlift_hc__parse__loop_11121(x_11288, _ctx); return kk_Unit;
    }
  }
  {
    bool _match_x2398;
    kk_string_t _x_x5225 = kk_string_dup(a, _ctx); /*string*/
    kk_string_t _x_x5226;
    kk_define_string_literal(static, _s_x5227, 2, "-h", _ctx)
    _x_x5226 = kk_string_dup(_s_x5227, _ctx); /*string*/
    _match_x2398 = kk_string_is_eq(_x_x5225,_x_x5226,kk_context()); /*bool*/
    if (_match_x2398) {
      kk_ref_drop(subcmd, _ctx);
      kk_ref_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_ref_drop(remaining, _ctx);
      kk_ref_drop(positionals, _ctx);
      kk_ref_drop(options, _ctx);
      kk_ref_drop(flags, _ctx);
      kk_string_drop(a, _ctx);
      kk_unit_t x_0_11290 = kk_Unit;
      kk_unit_t _brw_x2471 = kk_Unit;
      kk_box_t _x_x5228;
      kk_string_t _x_x5229;
      kk_define_string_literal(static, _s_x5230, 8, "__help__", _ctx)
      _x_x5229 = kk_string_dup(_s_x5230, _ctx); /*string*/
      _x_x5228 = kk_string_box(_x_x5229); /*10000*/
      kk_ref_set_borrow(error,_x_x5228,kk_context());
      kk_ref_drop(error, _ctx);
      _brw_x2471;
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x5231 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5232(_ctx), _ctx); /*10001*/
        kk_unit_unbox(_x_x5231); return kk_Unit;
      }
      {
        kk_hml__mlift_hc__parse__loop_11122(x_0_11290, _ctx); return kk_Unit;
      }
    }
    {
      bool _match_x2399;
      kk_string_t _x_x5234 = kk_string_dup(a, _ctx); /*string*/
      kk_string_t _x_x5235;
      kk_define_string_literal(static, _s_x5236, 9, "--version", _ctx)
      _x_x5235 = kk_string_dup(_s_x5236, _ctx); /*string*/
      _match_x2399 = kk_string_is_eq(_x_x5234,_x_x5235,kk_context()); /*bool*/
      if (_match_x2399) {
        kk_ref_drop(subcmd, _ctx);
        kk_ref_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_ref_drop(remaining, _ctx);
        kk_ref_drop(positionals, _ctx);
        kk_ref_drop(options, _ctx);
        kk_ref_drop(flags, _ctx);
        kk_string_drop(a, _ctx);
        kk_unit_t x_1_11292 = kk_Unit;
        kk_unit_t _brw_x2469 = kk_Unit;
        kk_box_t _x_x5237;
        kk_string_t _x_x5238;
        kk_define_string_literal(static, _s_x5239, 11, "__version__", _ctx)
        _x_x5238 = kk_string_dup(_s_x5239, _ctx); /*string*/
        _x_x5237 = kk_string_box(_x_x5238); /*10000*/
        kk_ref_set_borrow(error,_x_x5237,kk_context());
        kk_ref_drop(error, _ctx);
        _brw_x2469;
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x5240 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5241(_ctx), _ctx); /*10001*/
          kk_unit_unbox(_x_x5240); return kk_Unit;
        }
        {
          kk_hml__mlift_hc__parse__loop_11123(x_1_11292, _ctx); return kk_Unit;
        }
      }
      {
        bool _match_x2400;
        kk_string_t _x_x5243 = kk_string_dup(a, _ctx); /*string*/
        kk_string_t _x_x5244;
        kk_define_string_literal(static, _s_x5245, 2, "--", _ctx)
        _x_x5244 = kk_string_dup(_s_x5245, _ctx); /*string*/
        _match_x2400 = kk_string_is_eq(_x_x5243,_x_x5244,kk_context()); /*bool*/
        if (_match_x2400) {
          kk_ref_drop(subcmd, _ctx);
          kk_ref_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_ref_drop(options, _ctx);
          kk_ref_drop(flags, _ctx);
          kk_ref_drop(error, _ctx);
          kk_string_drop(a, _ctx);
          kk_std_core_types__list x_2_11294;
          kk_box_t _x_x5246;
          kk_ref_t _x_x5247 = kk_ref_dup(positionals, _ctx); /*local-var<23359,list<string>>*/
          _x_x5246 = kk_ref_get(_x_x5247,kk_context()); /*10000*/
          x_2_11294 = kk_std_core_types__list_unbox(_x_x5246, KK_OWNED, _ctx); /*list<string>*/
          if (kk_yielding(kk_context())) {
            kk_std_core_types__list_drop(x_2_11294, _ctx);
            kk_box_t _x_x5248 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5249(positionals, remaining, _ctx), _ctx); /*10001*/
            kk_unit_unbox(_x_x5248); return kk_Unit;
          }
          {
            kk_hml__mlift_hc__parse__loop_11126(positionals, remaining, x_2_11294, _ctx); return kk_Unit;
          }
        }
        {
          kk_std_core_types__maybe _x_x1_0_11023;
          kk_string_t _x_x5251 = kk_string_dup(a, _ctx); /*string*/
          kk_string_t _x_x5252;
          kk_define_string_literal(static, _s_x5253, 2, "--", _ctx)
          _x_x5252 = kk_string_dup(_s_x5253, _ctx); /*string*/
          _x_x1_0_11023 = kk_std_core_sslice_starts_with(_x_x5251, _x_x5252, _ctx); /*maybe<sslice/sslice>*/
          bool _match_x2401;
          kk_box_t _x_x5254 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5255(_ctx), kk_std_core_types__maybe_box(_x_x1_0_11023, _ctx), _ctx); /*10001*/
          _match_x2401 = kk_bool_unbox(_x_x5254); /*bool*/
          if (_match_x2401) {
            bool _match_x2432;
            kk_string_t _x_x5257 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5258;
            kk_define_string_literal(static, _s_x5259, 1, "=", _ctx)
            _x_x5258 = kk_string_dup(_s_x5259, _ctx); /*string*/
            _match_x2432 = kk_string_contains(_x_x5257,_x_x5258,kk_context()); /*bool*/
            if (_match_x2432) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(remaining, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_ref_drop(flags, _ctx);
              kk_string_t clean;
              kk_box_t _x_x5260;
              kk_box_t _x_x5272;
              kk_string_t _x_x5273;
              kk_define_string_literal(static, _s_x5274, 2, "--", _ctx)
              _x_x5273 = kk_string_dup(_s_x5274, _ctx); /*string*/
              _x_x5272 = kk_string_box(_x_x5273); /*10001*/
              _x_x5260 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5261(_ctx), kk_string_box(a), _x_x5272, _ctx); /*10002*/
              clean = kk_string_unbox(_x_x5260); /*string*/
              kk_std_core_types__list x_3_11296;
              bool _match_x2464;
              kk_string_t _x_x5275;
              kk_define_string_literal(static, _s_x5276, 1, "=", _ctx)
              _x_x5275 = kk_string_dup(_s_x5276, _ctx); /*string*/
              kk_string_t _x_x5277 = kk_string_empty(); /*string*/
              _match_x2464 = kk_string_is_eq(_x_x5275,_x_x5277,kk_context()); /*bool*/
              if (_match_x2464) {
                kk_std_core_types__list _b_x1295_1303 = kk_std_core_string_list(clean, _ctx); /*list<char>*/;
                kk_function_t _brw_x2465 = kk_hml__new_mlift_hc__parse__loop_11166_fun5279(_ctx); /*(10001) -> 10003 10002*/;
                kk_std_core_types__list _brw_x2466 = kk_std_core_list_map(_b_x1295_1303, _brw_x2465, _ctx); /*list<10002>*/;
                kk_function_drop(_brw_x2465, _ctx);
                x_3_11296 = _brw_x2466; /*list<string>*/
              }
              else {
                kk_box_t _x_x5282;
                kk_box_t _x_x5287;
                kk_string_t _x_x5288;
                kk_define_string_literal(static, _s_x5289, 1, "=", _ctx)
                _x_x5288 = kk_string_dup(_s_x5289, _ctx); /*string*/
                _x_x5287 = kk_string_box(_x_x5288); /*10001*/
                _x_x5282 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5283(_ctx), kk_string_box(clean), _x_x5287, _ctx); /*10002*/
                x_3_11296 = kk_std_core_types__list_unbox(_x_x5282, KK_OWNED, _ctx); /*list<string>*/
              }
              if (kk_yielding(kk_context())) {
                kk_std_core_types__list_drop(x_3_11296, _ctx);
                kk_box_t _x_x5290 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5291(error, options, spec, _ctx), _ctx); /*10001*/
                kk_unit_unbox(_x_x5290); return kk_Unit;
              }
              {
                kk_hml__mlift_hc__parse__loop_11129(error, options, spec, x_3_11296, _ctx); return kk_Unit;
              }
            }
            {
              kk_std_core_types__maybe _x_x1_6_11033;
              kk_string_t _x_x5293 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5294;
              kk_define_string_literal(static, _s_x5295, 2, "--", _ctx)
              _x_x5294 = kk_string_dup(_s_x5295, _ctx); /*string*/
              _x_x1_6_11033 = kk_std_core_sslice_starts_with(_x_x5293, _x_x5294, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2433;
              kk_box_t _x_x5296 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5297(_ctx), kk_std_core_types__maybe_box(_x_x1_6_11033, _ctx), _ctx); /*10001*/
              _match_x2433 = kk_bool_unbox(_x_x5296); /*bool*/
              if (_match_x2433) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t name_0_0;
                kk_box_t _x_x5299;
                kk_box_t _x_x5311;
                kk_string_t _x_x5312;
                kk_define_string_literal(static, _s_x5313, 2, "--", _ctx)
                _x_x5312 = kk_string_dup(_s_x5313, _ctx); /*string*/
                _x_x5311 = kk_string_box(_x_x5312); /*10001*/
                _x_x5299 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5300(_ctx), kk_string_box(a), _x_x5311, _ctx); /*10002*/
                name_0_0 = kk_string_unbox(_x_x5299); /*string*/
                kk_std_core_types__list _x_x1_8_11036;
                kk_box_t _x_x5314;
                kk_box_t _x_x5318;
                kk_hml__clispec _x_x5319 = kk_hml__clispec_dup(spec, _ctx); /*hml/clispec*/
                _x_x5318 = kk_hml__clispec_box(_x_x5319, _ctx); /*10000*/
                _x_x5314 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5315(_ctx), _x_x5318, _ctx); /*10001*/
                _x_x1_8_11036 = kk_std_core_types__list_unbox(_x_x5314, KK_OWNED, _ctx); /*list<hml/cliflag>*/
                kk_std_core_types__maybe _match_x2453;
                kk_box_t _x_x5320;
                kk_box_t _x_x5326;
                kk_string_t _x_x5327 = kk_string_dup(name_0_0, _ctx); /*string*/
                _x_x5326 = kk_string_box(_x_x5327); /*10001*/
                _x_x5320 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5321(_ctx), kk_std_core_types__list_box(_x_x1_8_11036, _ctx), _x_x5326, _ctx); /*10002*/
                _match_x2453 = kk_std_core_types__maybe_unbox(_x_x5320, KK_OWNED, _ctx); /*maybe<hml/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2453, _ctx)) {
                  kk_box_t _box_x1341 = _match_x2453._cons.Just.value;
                  kk_hml__cliflag _pat_24_0 = kk_hml__cliflag_unbox(_box_x1341, KK_BORROWED, _ctx);
                  struct kk_hml_Cliflag* _con_x5328 = kk_hml__as_Cliflag(_pat_24_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2453, _ctx);
                  kk_std_core_types__list x_4_11298;
                  kk_box_t _x_x5329;
                  kk_ref_t _x_x5330 = kk_ref_dup(flags, _ctx); /*local-var<23359,list<string>>*/
                  _x_x5329 = kk_ref_get(_x_x5330,kk_context()); /*10000*/
                  x_4_11298 = kk_std_core_types__list_unbox(_x_x5329, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_4_11299 = kk_hml__new_mlift_hc__parse__loop_11166_fun5331(flags, name_0_0, _ctx); /*(list<string>) -> <local<23359>,exn,hml/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_4_11298, _ctx);
                    kk_box_t _x_x5333 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5334(next_4_11299, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5333); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11299, (next_4_11299, x_4_11298, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_10_11039;
                  kk_box_t _x_x5337 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5338(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_10_11039 = kk_std_core_types__list_unbox(_x_x5337, KK_OWNED, _ctx); /*list<hml/clioption>*/
                  kk_std_core_types__maybe _match_x2454;
                  kk_box_t _x_x5341;
                  kk_box_t _x_x5347;
                  kk_string_t _x_x5348 = kk_string_dup(name_0_0, _ctx); /*string*/
                  _x_x5347 = kk_string_box(_x_x5348); /*10001*/
                  _x_x5341 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5342(_ctx), kk_std_core_types__list_box(_x_x1_10_11039, _ctx), _x_x5347, _ctx); /*10002*/
                  _match_x2454 = kk_std_core_types__maybe_unbox(_x_x5341, KK_OWNED, _ctx); /*maybe<hml/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2454, _ctx)) {
                    kk_box_t _box_x1370 = _match_x2454._cons.Just.value;
                    kk_hml__clioption _pat_30_0 = kk_hml__clioption_unbox(_box_x1370, KK_BORROWED, _ctx);
                    struct kk_hml_Clioption* _con_x5349 = kk_hml__as_Clioption(_pat_30_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2454, _ctx);
                    kk_std_core_types__list x_5_11303;
                    kk_box_t _x_x5350;
                    kk_ref_t _x_x5351 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
                    _x_x5350 = kk_ref_get(_x_x5351,kk_context()); /*10000*/
                    x_5_11303 = kk_std_core_types__list_unbox(_x_x5350, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_5_11303, _ctx);
                      kk_box_t _x_x5352 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5353(error, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5352); return kk_Unit;
                    }
                    {
                      kk_hml__mlift_hc__parse__loop_11136(error, name_0_0, options, remaining, x_5_11303, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1378_1688;
                    kk_string_t _x_x5355;
                    kk_define_string_literal(static, _s_x5356, 18, "unknown option: --", _ctx)
                    _x_x5355 = kk_string_dup(_s_x5356, _ctx); /*string*/
                    _b_x1378_1688 = kk_std_core_types__lp__plus__plus__rp_(_x_x5355, name_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2455 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1378_1688)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2455; return kk_Unit;
                  }
                }
              }
              {
                kk_std_core_types__maybe _x_x1_13_11044;
                kk_string_t _x_x5357 = kk_string_dup(a, _ctx); /*string*/
                kk_string_t _x_x5358;
                kk_define_string_literal(static, _s_x5359, 1, "-", _ctx)
                _x_x5358 = kk_string_dup(_s_x5359, _ctx); /*string*/
                _x_x1_13_11044 = kk_std_core_sslice_starts_with(_x_x5357, _x_x5358, _ctx); /*maybe<sslice/sslice>*/
                bool _match_x2434;
                kk_box_t _x_x5360 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5361(_ctx), kk_std_core_types__maybe_box(_x_x1_13_11044, _ctx), _ctx); /*10001*/
                _match_x2434 = kk_bool_unbox(_x_x5360); /*bool*/
                if (_match_x2434) {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(positionals, _ctx);
                  kk_string_t s_5;
                  kk_box_t _x_x5363;
                  kk_box_t _x_x5375;
                  kk_string_t _x_x5376;
                  kk_define_string_literal(static, _s_x5377, 1, "-", _ctx)
                  _x_x5376 = kk_string_dup(_s_x5377, _ctx); /*string*/
                  _x_x5375 = kk_string_box(_x_x5376); /*10001*/
                  _x_x5363 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5364(_ctx), kk_string_box(a), _x_x5375, _ctx); /*10002*/
                  s_5 = kk_string_unbox(_x_x5363); /*string*/
                  kk_std_core_types__list _x_x1_15_11047;
                  kk_box_t _x_x5378;
                  kk_box_t _x_x5382;
                  kk_hml__clispec _x_x5383 = kk_hml__clispec_dup(spec, _ctx); /*hml/clispec*/
                  _x_x5382 = kk_hml__clispec_box(_x_x5383, _ctx); /*10000*/
                  _x_x5378 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5379(_ctx), _x_x5382, _ctx); /*10001*/
                  _x_x1_15_11047 = kk_std_core_types__list_unbox(_x_x5378, KK_OWNED, _ctx); /*list<hml/cliflag>*/
                  kk_std_core_types__maybe _match_x2442;
                  kk_box_t _x_x5384;
                  kk_box_t _x_x5390;
                  kk_string_t _x_x5391 = kk_string_dup(s_5, _ctx); /*string*/
                  _x_x5390 = kk_string_box(_x_x5391); /*10001*/
                  _x_x5384 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5385(_ctx), kk_std_core_types__list_box(_x_x1_15_11047, _ctx), _x_x5390, _ctx); /*10002*/
                  _match_x2442 = kk_std_core_types__maybe_unbox(_x_x5384, KK_OWNED, _ctx); /*maybe<hml/cliflag>*/
                  if (kk_std_core_types__is_Just(_match_x2442, _ctx)) {
                    kk_box_t _box_x1408 = _match_x2442._cons.Just.value;
                    kk_hml__cliflag f_1 = kk_hml__cliflag_unbox(_box_x1408, KK_BORROWED, _ctx);
                    struct kk_hml_Cliflag* _con_x5392 = kk_hml__as_Cliflag(f_1, _ctx);
                    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                    kk_string_drop(s_5, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_ref_drop(error, _ctx);
                    kk_hml__cliflag_dup(f_1, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2442, _ctx);
                    kk_std_core_types__list x_6_11305;
                    kk_box_t _x_x5393;
                    kk_ref_t _x_x5394 = kk_ref_dup(flags, _ctx); /*local-var<23359,list<string>>*/
                    _x_x5393 = kk_ref_get(_x_x5394,kk_context()); /*10000*/
                    x_6_11305 = kk_std_core_types__list_unbox(_x_x5393, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_6_11306 = kk_hml__new_mlift_hc__parse__loop_11166_fun5395(f_1, flags, _ctx); /*(list<string>) -> <local<23359>,exn,hml/hica-brk,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_6_11305, _ctx);
                      kk_box_t _x_x5401 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5402(next_6_11306, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5401); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11306, (next_6_11306, x_6_11305, _ctx), _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(flags, _ctx);
                    kk_std_core_types__list _x_x1_18_11051;
                    kk_box_t _x_x5405 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5406(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
                    _x_x1_18_11051 = kk_std_core_types__list_unbox(_x_x5405, KK_OWNED, _ctx); /*list<hml/clioption>*/
                    kk_std_core_types__maybe _match_x2443;
                    kk_box_t _x_x5409;
                    kk_box_t _x_x5415;
                    kk_string_t _x_x5416 = kk_string_dup(s_5, _ctx); /*string*/
                    _x_x5415 = kk_string_box(_x_x5416); /*10001*/
                    _x_x5409 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5410(_ctx), kk_std_core_types__list_box(_x_x1_18_11051, _ctx), _x_x5415, _ctx); /*10002*/
                    _match_x2443 = kk_std_core_types__maybe_unbox(_x_x5409, KK_OWNED, _ctx); /*maybe<hml/clioption>*/
                    if (kk_std_core_types__is_Just(_match_x2443, _ctx)) {
                      kk_box_t _box_x1443 = _match_x2443._cons.Just.value;
                      kk_hml__clioption o_2 = kk_hml__clioption_unbox(_box_x1443, KK_BORROWED, _ctx);
                      struct kk_hml_Clioption* _con_x5417 = kk_hml__as_Clioption(o_2, _ctx);
                      kk_hml__clioption_dup(o_2, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2443, _ctx);
                      kk_std_core_types__list x_7_11310;
                      kk_box_t _x_x5418;
                      kk_ref_t _x_x5419 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
                      _x_x5418 = kk_ref_get(_x_x5419,kk_context()); /*10000*/
                      x_7_11310 = kk_std_core_types__list_unbox(_x_x5418, KK_OWNED, _ctx); /*list<string>*/
                      if (kk_yielding(kk_context())) {
                        kk_std_core_types__list_drop(x_7_11310, _ctx);
                        kk_box_t _x_x5420 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5421(error, o_2, options, remaining, s_5, _ctx), _ctx); /*10001*/
                        kk_unit_unbox(_x_x5420); return kk_Unit;
                      }
                      {
                        kk_hml__mlift_hc__parse__loop_11143(error, o_2, options, remaining, s_5, x_7_11310, _ctx); return kk_Unit;
                      }
                    }
                    {
                      kk_ref_drop(remaining, _ctx);
                      kk_ref_drop(options, _ctx);
                      kk_string_t _b_x1451_1704;
                      kk_string_t _x_x5423;
                      kk_define_string_literal(static, _s_x5424, 17, "unknown option: -", _ctx)
                      _x_x5423 = kk_string_dup(_s_x5424, _ctx); /*string*/
                      _b_x1451_1704 = kk_std_core_types__lp__plus__plus__rp_(_x_x5423, s_5, _ctx); /*string*/
                      kk_unit_t _brw_x2444 = kk_Unit;
                      kk_ref_set_borrow(error,(kk_string_box(_b_x1451_1704)),kk_context());
                      kk_ref_drop(error, _ctx);
                      _brw_x2444; return kk_Unit;
                    }
                  }
                }
                {
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(flags, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__list _x_x1_22_11057;
                  kk_box_t _x_x5425 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5426(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_22_11057 = kk_std_core_types__list_unbox(_x_x5425, KK_OWNED, _ctx); /*list<(string, hml/clispec)>*/
                  kk_std_core_types__maybe _match_x2435;
                  kk_box_t _x_x5429;
                  kk_box_t _x_x5434;
                  kk_string_t _x_x5435 = kk_string_dup(a, _ctx); /*string*/
                  _x_x5434 = kk_string_box(_x_x5435); /*10001*/
                  _x_x5429 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5430(_ctx), kk_std_core_types__list_box(_x_x1_22_11057, _ctx), _x_x5434, _ctx); /*10002*/
                  _match_x2435 = kk_std_core_types__maybe_unbox(_x_x5429, KK_OWNED, _ctx); /*maybe<(string, hml/clispec)>*/
                  if (kk_std_core_types__is_Just(_match_x2435, _ctx)) {
                    kk_box_t _box_x1468 = _match_x2435._cons.Just.value;
                    kk_ref_drop(positionals, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2435, _ctx);
                    kk_unit_t x_8_11312 = kk_Unit;
                    kk_unit_t _brw_x2439 = kk_Unit;
                    kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                    kk_ref_drop(subcmd, _ctx);
                    _brw_x2439;
                    if (kk_yielding(kk_context())) {
                      kk_box_t _x_x5436 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5437(remaining, sub__args, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5436); return kk_Unit;
                    }
                    {
                      kk_hml__mlift_hc__parse__loop_11146(remaining, sub__args, x_8_11312, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(subcmd, _ctx);
                    kk_ref_drop(sub__args, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_std_core_types__list x_9_11314;
                    kk_box_t _x_x5439;
                    kk_ref_t _x_x5440 = kk_ref_dup(positionals, _ctx); /*local-var<23359,list<string>>*/
                    _x_x5439 = kk_ref_get(_x_x5440,kk_context()); /*10000*/
                    x_9_11314 = kk_std_core_types__list_unbox(_x_x5439, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_9_11315 = kk_hml__new_mlift_hc__parse__loop_11166_fun5441(a, positionals, _ctx); /*(list<string>) -> <local<23359>,hml/hica-brk,exn,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_9_11314, _ctx);
                      kk_box_t _x_x5443 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5444(next_9_11315, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5443); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11315, (next_9_11315, x_9_11314, _ctx), _ctx); return kk_Unit;
                    }
                  }
                }
              }
            }
          }
          {
            kk_std_core_types__maybe _x_x1_24_11060;
            kk_string_t _x_x5447 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5448;
            kk_define_string_literal(static, _s_x5449, 2, "--", _ctx)
            _x_x5448 = kk_string_dup(_s_x5449, _ctx); /*string*/
            _x_x1_24_11060 = kk_std_core_sslice_starts_with(_x_x5447, _x_x5448, _ctx); /*maybe<sslice/sslice>*/
            bool _match_x2402;
            kk_box_t _x_x5450 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5451(_ctx), kk_std_core_types__maybe_box(_x_x1_24_11060, _ctx), _ctx); /*10001*/
            _match_x2402 = kk_bool_unbox(_x_x5450); /*bool*/
            if (_match_x2402) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_string_t name_0_0_0_0;
              kk_box_t _x_x5453;
              kk_box_t _x_x5465;
              kk_string_t _x_x5466;
              kk_define_string_literal(static, _s_x5467, 2, "--", _ctx)
              _x_x5466 = kk_string_dup(_s_x5467, _ctx); /*string*/
              _x_x5465 = kk_string_box(_x_x5466); /*10001*/
              _x_x5453 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5454(_ctx), kk_string_box(a), _x_x5465, _ctx); /*10002*/
              name_0_0_0_0 = kk_string_unbox(_x_x5453); /*string*/
              kk_std_core_types__list _x_x1_26_11063;
              kk_box_t _x_x5468;
              kk_box_t _x_x5472;
              kk_hml__clispec _x_x5473 = kk_hml__clispec_dup(spec, _ctx); /*hml/clispec*/
              _x_x5472 = kk_hml__clispec_box(_x_x5473, _ctx); /*10000*/
              _x_x5468 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5469(_ctx), _x_x5472, _ctx); /*10001*/
              _x_x1_26_11063 = kk_std_core_types__list_unbox(_x_x5468, KK_OWNED, _ctx); /*list<hml/cliflag>*/
              kk_std_core_types__maybe _match_x2422;
              kk_box_t _x_x5474;
              kk_box_t _x_x5480;
              kk_string_t _x_x5481 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
              _x_x5480 = kk_string_box(_x_x5481); /*10001*/
              _x_x5474 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5475(_ctx), kk_std_core_types__list_box(_x_x1_26_11063, _ctx), _x_x5480, _ctx); /*10002*/
              _match_x2422 = kk_std_core_types__maybe_unbox(_x_x5474, KK_OWNED, _ctx); /*maybe<hml/cliflag>*/
              if (kk_std_core_types__is_Just(_match_x2422, _ctx)) {
                kk_box_t _box_x1518 = _match_x2422._cons.Just.value;
                kk_hml__cliflag _pat_24_0_0 = kk_hml__cliflag_unbox(_box_x1518, KK_BORROWED, _ctx);
                struct kk_hml_Cliflag* _con_x5482 = kk_hml__as_Cliflag(_pat_24_0_0, _ctx);
                kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                kk_ref_drop(remaining, _ctx);
                kk_ref_drop(options, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__maybe_drop(_match_x2422, _ctx);
                kk_std_core_types__list x_10_11319;
                kk_box_t _x_x5483;
                kk_ref_t _x_x5484 = kk_ref_dup(flags, _ctx); /*local-var<23359,list<string>>*/
                _x_x5483 = kk_ref_get(_x_x5484,kk_context()); /*10000*/
                x_10_11319 = kk_std_core_types__list_unbox(_x_x5483, KK_OWNED, _ctx); /*list<string>*/
                kk_function_t next_10_11320 = kk_hml__new_mlift_hc__parse__loop_11166_fun5485(flags, name_0_0_0_0, _ctx); /*(list<string>) -> <local<23359>,exn,hml/hica-brk,div> ()*/;
                if (kk_yielding(kk_context())) {
                  kk_std_core_types__list_drop(x_10_11319, _ctx);
                  kk_box_t _x_x5487 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5488(next_10_11320, _ctx), _ctx); /*10001*/
                  kk_unit_unbox(_x_x5487); return kk_Unit;
                }
                {
                  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11320, (next_10_11320, x_10_11319, _ctx), _ctx); return kk_Unit;
                }
              }
              {
                kk_ref_drop(flags, _ctx);
                kk_std_core_types__list _x_x1_28_11066;
                kk_box_t _x_x5491 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5492(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_28_11066 = kk_std_core_types__list_unbox(_x_x5491, KK_OWNED, _ctx); /*list<hml/clioption>*/
                kk_std_core_types__maybe _match_x2423;
                kk_box_t _x_x5495;
                kk_box_t _x_x5501;
                kk_string_t _x_x5502 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
                _x_x5501 = kk_string_box(_x_x5502); /*10001*/
                _x_x5495 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5496(_ctx), kk_std_core_types__list_box(_x_x1_28_11066, _ctx), _x_x5501, _ctx); /*10002*/
                _match_x2423 = kk_std_core_types__maybe_unbox(_x_x5495, KK_OWNED, _ctx); /*maybe<hml/clioption>*/
                if (kk_std_core_types__is_Just(_match_x2423, _ctx)) {
                  kk_box_t _box_x1547 = _match_x2423._cons.Just.value;
                  kk_hml__clioption _pat_30_0_0 = kk_hml__clioption_unbox(_box_x1547, KK_BORROWED, _ctx);
                  struct kk_hml_Clioption* _con_x5503 = kk_hml__as_Clioption(_pat_30_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2423, _ctx);
                  kk_std_core_types__list x_11_11324;
                  kk_box_t _x_x5504;
                  kk_ref_t _x_x5505 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
                  _x_x5504 = kk_ref_get(_x_x5505,kk_context()); /*10000*/
                  x_11_11324 = kk_std_core_types__list_unbox(_x_x5504, KK_OWNED, _ctx); /*list<string>*/
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_11_11324, _ctx);
                    kk_box_t _x_x5506 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5507(error, name_0_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5506); return kk_Unit;
                  }
                  {
                    kk_hml__mlift_hc__parse__loop_11154(error, name_0_0_0_0, options, remaining, x_11_11324, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_string_t _b_x1555_1727;
                  kk_string_t _x_x5509;
                  kk_define_string_literal(static, _s_x5510, 18, "unknown option: --", _ctx)
                  _x_x5509 = kk_string_dup(_s_x5510, _ctx); /*string*/
                  _b_x1555_1727 = kk_std_core_types__lp__plus__plus__rp_(_x_x5509, name_0_0_0_0, _ctx); /*string*/
                  kk_unit_t _brw_x2424 = kk_Unit;
                  kk_ref_set_borrow(error,(kk_string_box(_b_x1555_1727)),kk_context());
                  kk_ref_drop(error, _ctx);
                  _brw_x2424; return kk_Unit;
                }
              }
            }
            {
              kk_std_core_types__maybe _x_x1_31_11071;
              kk_string_t _x_x5511 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5512;
              kk_define_string_literal(static, _s_x5513, 1, "-", _ctx)
              _x_x5512 = kk_string_dup(_s_x5513, _ctx); /*string*/
              _x_x1_31_11071 = kk_std_core_sslice_starts_with(_x_x5511, _x_x5512, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2403;
              kk_box_t _x_x5514 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5515(_ctx), kk_std_core_types__maybe_box(_x_x1_31_11071, _ctx), _ctx); /*10001*/
              _match_x2403 = kk_bool_unbox(_x_x5514); /*bool*/
              if (_match_x2403) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t s_0_0;
                kk_box_t _x_x5517;
                kk_box_t _x_x5529;
                kk_string_t _x_x5530;
                kk_define_string_literal(static, _s_x5531, 1, "-", _ctx)
                _x_x5530 = kk_string_dup(_s_x5531, _ctx); /*string*/
                _x_x5529 = kk_string_box(_x_x5530); /*10001*/
                _x_x5517 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5518(_ctx), kk_string_box(a), _x_x5529, _ctx); /*10002*/
                s_0_0 = kk_string_unbox(_x_x5517); /*string*/
                kk_std_core_types__list _x_x1_33_11074;
                kk_box_t _x_x5532;
                kk_box_t _x_x5536;
                kk_hml__clispec _x_x5537 = kk_hml__clispec_dup(spec, _ctx); /*hml/clispec*/
                _x_x5536 = kk_hml__clispec_box(_x_x5537, _ctx); /*10000*/
                _x_x5532 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5533(_ctx), _x_x5536, _ctx); /*10001*/
                _x_x1_33_11074 = kk_std_core_types__list_unbox(_x_x5532, KK_OWNED, _ctx); /*list<hml/cliflag>*/
                kk_std_core_types__maybe _match_x2411;
                kk_box_t _x_x5538;
                kk_box_t _x_x5544;
                kk_string_t _x_x5545 = kk_string_dup(s_0_0, _ctx); /*string*/
                _x_x5544 = kk_string_box(_x_x5545); /*10001*/
                _x_x5538 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5539(_ctx), kk_std_core_types__list_box(_x_x1_33_11074, _ctx), _x_x5544, _ctx); /*10002*/
                _match_x2411 = kk_std_core_types__maybe_unbox(_x_x5538, KK_OWNED, _ctx); /*maybe<hml/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2411, _ctx)) {
                  kk_box_t _box_x1585 = _match_x2411._cons.Just.value;
                  kk_hml__cliflag f_0_0 = kk_hml__cliflag_unbox(_box_x1585, KK_BORROWED, _ctx);
                  struct kk_hml_Cliflag* _con_x5546 = kk_hml__as_Cliflag(f_0_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_string_drop(s_0_0, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_hml__cliflag_dup(f_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2411, _ctx);
                  kk_std_core_types__list x_12_11326;
                  kk_box_t _x_x5547;
                  kk_ref_t _x_x5548 = kk_ref_dup(flags, _ctx); /*local-var<23359,list<string>>*/
                  _x_x5547 = kk_ref_get(_x_x5548,kk_context()); /*10000*/
                  x_12_11326 = kk_std_core_types__list_unbox(_x_x5547, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_12_11327 = kk_hml__new_mlift_hc__parse__loop_11166_fun5549(f_0_0, flags, _ctx); /*(list<string>) -> <local<23359>,exn,hml/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_12_11326, _ctx);
                    kk_box_t _x_x5555 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5556(next_12_11327, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5555); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11327, (next_12_11327, x_12_11326, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_36_11078;
                  kk_box_t _x_x5559 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5560(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_36_11078 = kk_std_core_types__list_unbox(_x_x5559, KK_OWNED, _ctx); /*list<hml/clioption>*/
                  kk_std_core_types__maybe _match_x2412;
                  kk_box_t _x_x5563;
                  kk_box_t _x_x5569;
                  kk_string_t _x_x5570 = kk_string_dup(s_0_0, _ctx); /*string*/
                  _x_x5569 = kk_string_box(_x_x5570); /*10001*/
                  _x_x5563 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5564(_ctx), kk_std_core_types__list_box(_x_x1_36_11078, _ctx), _x_x5569, _ctx); /*10002*/
                  _match_x2412 = kk_std_core_types__maybe_unbox(_x_x5563, KK_OWNED, _ctx); /*maybe<hml/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2412, _ctx)) {
                    kk_box_t _box_x1620 = _match_x2412._cons.Just.value;
                    kk_hml__clioption o_0_0 = kk_hml__clioption_unbox(_box_x1620, KK_BORROWED, _ctx);
                    struct kk_hml_Clioption* _con_x5571 = kk_hml__as_Clioption(o_0_0, _ctx);
                    kk_hml__clioption_dup(o_0_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2412, _ctx);
                    kk_std_core_types__list x_13_11331;
                    kk_box_t _x_x5572;
                    kk_ref_t _x_x5573 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
                    _x_x5572 = kk_ref_get(_x_x5573,kk_context()); /*10000*/
                    x_13_11331 = kk_std_core_types__list_unbox(_x_x5572, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_13_11331, _ctx);
                      kk_box_t _x_x5574 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5575(error, o_0_0, options, remaining, s_0_0, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5574); return kk_Unit;
                    }
                    {
                      kk_hml__mlift_hc__parse__loop_11161(error, o_0_0, options, remaining, s_0_0, x_13_11331, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1628_1743;
                    kk_string_t _x_x5577;
                    kk_define_string_literal(static, _s_x5578, 17, "unknown option: -", _ctx)
                    _x_x5577 = kk_string_dup(_s_x5578, _ctx); /*string*/
                    _b_x1628_1743 = kk_std_core_types__lp__plus__plus__rp_(_x_x5577, s_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2413 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1628_1743)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2413; return kk_Unit;
                  }
                }
              }
              {
                kk_ref_drop(options, _ctx);
                kk_ref_drop(flags, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__list _x_x1_40_11084;
                kk_box_t _x_x5579 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__parse__loop_11166_fun5580(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_40_11084 = kk_std_core_types__list_unbox(_x_x5579, KK_OWNED, _ctx); /*list<(string, hml/clispec)>*/
                kk_std_core_types__maybe _match_x2404;
                kk_box_t _x_x5583;
                kk_box_t _x_x5588;
                kk_string_t _x_x5589 = kk_string_dup(a, _ctx); /*string*/
                _x_x5588 = kk_string_box(_x_x5589); /*10001*/
                _x_x5583 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__parse__loop_11166_fun5584(_ctx), kk_std_core_types__list_box(_x_x1_40_11084, _ctx), _x_x5588, _ctx); /*10002*/
                _match_x2404 = kk_std_core_types__maybe_unbox(_x_x5583, KK_OWNED, _ctx); /*maybe<(string, hml/clispec)>*/
                if (kk_std_core_types__is_Just(_match_x2404, _ctx)) {
                  kk_box_t _box_x1645 = _match_x2404._cons.Just.value;
                  kk_ref_drop(positionals, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2404, _ctx);
                  kk_unit_t x_14_11333 = kk_Unit;
                  kk_unit_t _brw_x2408 = kk_Unit;
                  kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                  kk_ref_drop(subcmd, _ctx);
                  _brw_x2408;
                  if (kk_yielding(kk_context())) {
                    kk_box_t _x_x5590 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5591(remaining, sub__args, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5590); return kk_Unit;
                  }
                  {
                    kk_hml__mlift_hc__parse__loop_11164(remaining, sub__args, x_14_11333, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_std_core_types__list x_15_11335;
                  kk_box_t _x_x5593;
                  kk_ref_t _x_x5594 = kk_ref_dup(positionals, _ctx); /*local-var<23359,list<string>>*/
                  _x_x5593 = kk_ref_get(_x_x5594,kk_context()); /*10000*/
                  x_15_11335 = kk_std_core_types__list_unbox(_x_x5593, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_15_11336 = kk_hml__new_mlift_hc__parse__loop_11166_fun5595(a, positionals, _ctx); /*(list<string>) -> <local<23359>,hml/hica-brk,exn,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_15_11335, _ctx);
                    kk_box_t _x_x5597 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11166_fun5598(next_15_11336, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5597); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11336, (next_15_11336, x_15_11335, _ctx), _ctx); return kk_Unit;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11167_fun5602__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_hml__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11167_fun5602(kk_function_t _fself, kk_box_t _b_x1802, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11167_fun5602(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11167_fun5602__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11167_fun5602__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11167_fun5602, kk_context());
  _self->a = a;
  _self->error = error;
  _self->flags = flags;
  _self->options = options;
  _self->positionals = positionals;
  _self->remaining = remaining;
  _self->spec = spec;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11167_fun5602(kk_function_t _fself, kk_box_t _b_x1802, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11167_fun5602__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11167_fun5602__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_hml__clispec spec = _self->spec; /* hml/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_hml__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_unit_t wild___1804 = kk_Unit;
  kk_unit_unbox(_b_x1802);
  kk_unit_t _x_x5603 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11166(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, wild___1804, _ctx);
  return kk_unit_box(_x_x5603);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11167(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10748, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1798_1800 = kk_std_core_list_drop(_y_x10748, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t x_11340 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1798_1800, _ctx)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5601 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11167_fun5602(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5601); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11166(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11340, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11168_fun5607__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_hml__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11168_fun5607(kk_function_t _fself, kk_box_t _b_x1810, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11168_fun5607(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11168_fun5607__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11168_fun5607__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11168_fun5607, kk_context());
  _self->a = a;
  _self->error = error;
  _self->flags = flags;
  _self->options = options;
  _self->positionals = positionals;
  _self->remaining = remaining;
  _self->spec = spec;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11168_fun5607(kk_function_t _fself, kk_box_t _b_x1810, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11168_fun5607__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11168_fun5607__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_hml__clispec spec = _self->spec; /* hml/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_hml__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10748_1812 = kk_std_core_types__list_unbox(_b_x1810, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5608 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11167(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _y_x10748_1812, _ctx);
  return kk_unit_box(_x_x5608);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11168(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t a, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, a : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list x_11342;
  kk_box_t _x_x5604;
  kk_ref_t _x_x5605 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5604 = kk_ref_get(_x_x5605,kk_context()); /*10000*/
  x_11342 = kk_std_core_types__list_unbox(_x_x5604, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11342, _ctx);
    kk_box_t _x_x5606 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11168_fun5607(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5606); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11167(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11342, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11169_fun5619__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11169_fun5619(kk_function_t _fself, kk_box_t _b_x1820, kk_box_t _b_x1821, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11169_fun5619(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__parse__loop_11169_fun5619, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11169_fun5619(kk_function_t _fself, kk_box_t _b_x1820, kk_box_t _b_x1821, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5620;
  kk_std_core_types__maybe _match_x2394 = kk_std_core_types__maybe_unbox(_b_x1820, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2394, _ctx)) {
    kk_box_t _box_x1813 = _match_x2394._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x1813);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2394, _ctx);
    kk_box_drop(_b_x1821, _ctx);
    _x_x5620 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x1814_1826;
    kk_string_t _x_x5621;
    kk_define_string_literal(static, _s_x5622, 22, "unexpected Nothing in ", _ctx)
    _x_x5621 = kk_string_dup(_s_x5622, _ctx); /*string*/
    kk_string_t _x_x5623 = kk_string_unbox(_b_x1821); /*string*/
    _b_x1814_1826 = kk_std_core_types__lp__plus__plus__rp_(_x_x5621, _x_x5623, _ctx); /*string*/
    kk_box_t _x_x5624 = kk_std_core_exn_throw(_b_x1814_1826, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5620 = kk_string_unbox(_x_x5624); /*string*/
  }
  return kk_string_box(_x_x5620);
}


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11169_fun5626__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_hml__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11169_fun5626(kk_function_t _fself, kk_box_t _b_x1831, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11169_fun5626(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11169_fun5626__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11169_fun5626__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11169_fun5626, kk_context());
  _self->error = error;
  _self->flags = flags;
  _self->options = options;
  _self->positionals = positionals;
  _self->remaining = remaining;
  _self->spec = spec;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11169_fun5626(kk_function_t _fself, kk_box_t _b_x1831, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11169_fun5626__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11169_fun5626__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_hml__clispec spec = _self->spec; /* hml/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_hml__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t a_1833 = kk_string_unbox(_b_x1831); /*string*/;
  kk_unit_t _x_x5627 = kk_Unit;
  kk_hml__mlift_hc__parse__loop_11168(error, flags, options, positionals, remaining, spec, sub__args, subcmd, a_1833, _ctx);
  return kk_unit_box(_x_x5627);
}

kk_unit_t kk_hml__mlift_hc__parse__loop_11169(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10746, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_11021 = kk_std_core_list__index(_y_x10746, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11022;
  kk_string_t _x_x5609;
  kk_define_string_literal(static, _s_x5610, 6, "hml.kk", _ctx)
  _x_x5609 = kk_string_dup(_s_x5610, _ctx); /*string*/
  kk_string_t _x_x5611;
  kk_string_t _x_x5612;
  kk_define_string_literal(static, _s_x5613, 1, "(", _ctx)
  _x_x5612 = kk_string_dup(_s_x5613, _ctx); /*string*/
  kk_string_t _x_x5614;
  kk_string_t _x_x5615 = kk_std_core_int_show(kk_integer_from_small(749), _ctx); /*string*/
  kk_string_t _x_x5616;
  kk_define_string_literal(static, _s_x5617, 1, ")", _ctx)
  _x_x5616 = kk_string_dup(_s_x5617, _ctx); /*string*/
  _x_x5614 = kk_std_core_types__lp__plus__plus__rp_(_x_x5615, _x_x5616, _ctx); /*string*/
  _x_x5611 = kk_std_core_types__lp__plus__plus__rp_(_x_x5612, _x_x5614, _ctx); /*string*/
  _x_x2_11022 = kk_std_core_types__lp__plus__plus__rp_(_x_x5609, _x_x5611, _ctx); /*string*/
  kk_ssize_t _b_x1816_1822 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11344;
  kk_box_t _x_x5618 = kk_std_core_hnd__open_at2(_b_x1816_1822, kk_hml__new_mlift_hc__parse__loop_11169_fun5619(_ctx), kk_std_core_types__maybe_box(_x_x1_11021, _ctx), kk_string_box(_x_x2_11022), _ctx); /*10002*/
  x_11344 = kk_string_unbox(_x_x5618); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11344, _ctx);
    kk_box_t _x_x5625 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11169_fun5626(error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5625); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11168(error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11344, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__parse__loop_11170_fun5630__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__mlift_hc__parse__loop_11170_fun5630(kk_function_t _fself, kk_box_t _b_x1839, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__parse__loop_11170_fun5630(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11170_fun5630__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__parse__loop_11170_fun5630__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__parse__loop_11170_fun5630, kk_context());
  _self->flags = flags;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__parse__loop_11170_fun5630(kk_function_t _fself, kk_box_t _b_x1839, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__parse__loop_11170_fun5630__t* _self = kk_function_as(struct kk_hml__mlift_hc__parse__loop_11170_fun5630__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t _y_x10865_1841 = kk_string_unbox(_b_x1839); /*string*/;
  kk_hml__parseraw _x_x5631 = kk_hml__mlift_hc__parse__loop_11118(flags, options, positionals, sub__args, subcmd, _y_x10865_1841, _ctx); /*hml/parseraw*/
  return kk_hml__parseraw_box(_x_x5631, _ctx);
}

kk_hml__parseraw kk_hml__mlift_hc__parse__loop_11170(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t _y_x10864, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, ()) -> <div,exn,local<h>> parseraw */ 
  {
    kk_string_t x_11346;
    kk_box_t _x_x5628 = kk_ref_get(error,kk_context()); /*10000*/
    x_11346 = kk_string_unbox(_x_x5628); /*string*/
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_11346, _ctx);
      kk_box_t _x_x5629 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__parse__loop_11170_fun5630(flags, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
      return kk_hml__parseraw_unbox(_x_x5629, KK_OWNED, _ctx);
    }
    {
      return kk_hml__mlift_hc__parse__loop_11118(flags, options, positionals, sub__args, subcmd, x_11346, _ctx);
    }
  }
}


// lift anonymous function
struct kk_hml_hc__parse__loop_fun5641__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__parse__loop_fun5641(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5641(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__parse__loop_fun5641, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_hc__parse__loop_fun5642__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__parse__loop_fun5642(kk_function_t _fself, kk_function_t _b_x1865, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5642(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__parse__loop_fun5642, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_hc__parse__loop_fun5643__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__parse__loop_fun5643(kk_function_t _fself, kk_box_t _b_x1859, kk_function_t _b_x1860, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5643(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__parse__loop_fun5643, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__parse__loop_fun5643(kk_function_t _fself, kk_box_t _b_x1859, kk_function_t _b_x1860, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_drop(_b_x1859, _ctx);
  kk_function_drop(_b_x1860, _ctx);
  return kk_unit_box(kk_Unit);
}
static kk_box_t kk_hml_hc__parse__loop_fun5642(kk_function_t _fself, kk_function_t _b_x1865, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_hnd_protect(kk_unit_box(kk_Unit), kk_hml_new_hc__parse__loop_fun5643(_ctx), _b_x1865, _ctx);
}
static kk_box_t kk_hml_hc__parse__loop_fun5641(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_datatype_ptr_dropn(___wildcard_x688__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to(m, kk_hml_new_hc__parse__loop_fun5642(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml_hc__parse__loop_fun5644__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__parse__loop_fun5644(kk_function_t _fself, kk_box_t _b_x1882, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5644(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__parse__loop_fun5644, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__parse__loop_fun5644(kk_function_t _fself, kk_box_t _b_x1882, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return _b_x1882;
}


// lift anonymous function
struct kk_hml_hc__parse__loop_fun5646__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_hml__clispec spec;
};
static kk_box_t kk_hml_hc__parse__loop_fun5646(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5646(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_hml__clispec spec, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5646__t* _self = kk_function_alloc_as(struct kk_hml_hc__parse__loop_fun5646__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__parse__loop_fun5646, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  _self->loc_1 = loc_1;
  _self->loc_2 = loc_2;
  _self->loc_3 = loc_3;
  _self->loc_4 = loc_4;
  _self->loc_5 = loc_5;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml_hc__parse__loop_fun5649__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
};
static bool kk_hml_hc__parse__loop_fun5649(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5649(kk_ref_t loc_4, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5649__t* _self = kk_function_alloc_as(struct kk_hml_hc__parse__loop_fun5649__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__parse__loop_fun5649, kk_context());
  _self->loc_4 = loc_4;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml_hc__parse__loop_fun5652__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
};
static kk_box_t kk_hml_hc__parse__loop_fun5652(kk_function_t _fself, kk_box_t _b_x1872, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5652(kk_ref_t loc_4, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5652__t* _self = kk_function_alloc_as(struct kk_hml_hc__parse__loop_fun5652__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__parse__loop_fun5652, kk_context());
  _self->loc_4 = loc_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__parse__loop_fun5652(kk_function_t _fself, kk_box_t _b_x1872, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5652__t* _self = kk_function_as(struct kk_hml_hc__parse__loop_fun5652__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);}, {}, _ctx)
  bool _x_x5653;
  kk_string_t _x_x5654 = kk_string_unbox(_b_x1872); /*string*/
  _x_x5653 = kk_hml__mlift_hc__parse__loop_11120(loc_4, _x_x5654, _ctx); /*bool*/
  return kk_bool_box(_x_x5653);
}
static bool kk_hml_hc__parse__loop_fun5649(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5649__t* _self = kk_function_as(struct kk_hml_hc__parse__loop_fun5649__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_string_t x_0_11365;
  kk_box_t _x_x5650 = kk_ref_get(loc_5,kk_context()); /*10000*/
  x_0_11365 = kk_string_unbox(_x_x5650); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_0_11365, _ctx);
    kk_box_t _x_x5651 = kk_std_core_hnd_yield_extend(kk_hml_new_hc__parse__loop_fun5652(loc_4, _ctx), _ctx); /*10001*/
    return kk_bool_unbox(_x_x5651);
  }
  {
    return kk_hml__mlift_hc__parse__loop_11120(loc_4, x_0_11365, _ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__parse__loop_fun5655__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_hml__clispec spec;
};
static kk_unit_t kk_hml_hc__parse__loop_fun5655(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5655(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_hml__clispec spec, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5655__t* _self = kk_function_alloc_as(struct kk_hml_hc__parse__loop_fun5655__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__parse__loop_fun5655, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  _self->loc_1 = loc_1;
  _self->loc_2 = loc_2;
  _self->loc_3 = loc_3;
  _self->loc_4 = loc_4;
  _self->loc_5 = loc_5;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml_hc__parse__loop_fun5659__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_hml__clispec spec;
};
static kk_box_t kk_hml_hc__parse__loop_fun5659(kk_function_t _fself, kk_box_t _b_x1878, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5659(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_hml__clispec spec, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5659__t* _self = kk_function_alloc_as(struct kk_hml_hc__parse__loop_fun5659__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__parse__loop_fun5659, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  _self->loc_1 = loc_1;
  _self->loc_2 = loc_2;
  _self->loc_3 = loc_3;
  _self->loc_4 = loc_4;
  _self->loc_5 = loc_5;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__parse__loop_fun5659(kk_function_t _fself, kk_box_t _b_x1878, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5659__t* _self = kk_function_as(struct kk_hml_hc__parse__loop_fun5659__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23359,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23359,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23359,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23359,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23359,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_hml__clispec spec = _self->spec; /* hml/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_hml__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5660 = kk_Unit;
  kk_std_core_types__list _x_x5661 = kk_std_core_types__list_unbox(_b_x1878, KK_OWNED, _ctx); /*list<string>*/
  kk_hml__mlift_hc__parse__loop_11169(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, _x_x5661, _ctx);
  return kk_unit_box(_x_x5660);
}
static kk_unit_t kk_hml_hc__parse__loop_fun5655(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5655__t* _self = kk_function_as(struct kk_hml_hc__parse__loop_fun5655__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23359,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23359,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23359,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23359,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23359,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_hml__clispec spec = _self->spec; /* hml/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_hml__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list x_1_11367;
  kk_box_t _x_x5656;
  kk_ref_t _x_x5657 = kk_ref_dup(loc_4, _ctx); /*local-var<23359,list<string>>*/
  _x_x5656 = kk_ref_get(_x_x5657,kk_context()); /*10000*/
  x_1_11367 = kk_std_core_types__list_unbox(_x_x5656, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_1_11367, _ctx);
    kk_box_t _x_x5658 = kk_std_core_hnd_yield_extend(kk_hml_new_hc__parse__loop_fun5659(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5658); return kk_Unit;
  }
  {
    kk_hml__mlift_hc__parse__loop_11169(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, x_1_11367, _ctx); return kk_Unit;
  }
}
static kk_box_t kk_hml_hc__parse__loop_fun5646(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5646__t* _self = kk_function_as(struct kk_hml_hc__parse__loop_fun5646__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23359,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23359,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23359,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23359,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23359,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_hml__clispec spec = _self->spec; /* hml/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_hml__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5647 = kk_Unit;
  kk_function_t _x_x5648;
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5648 = kk_hml_new_hc__parse__loop_fun5649(loc_4, loc_5, _ctx); /*() -> <div,local<23359>,exn,hml/hica-brk> bool*/
  kk_std_core_while(_x_x5648, kk_hml_new_hc__parse__loop_fun5655(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx);
  return kk_unit_box(_x_x5647);
}


// lift anonymous function
struct kk_hml_hc__parse__loop_fun5664__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_5;
};
static kk_box_t kk_hml_hc__parse__loop_fun5664(kk_function_t _fself, kk_box_t _b_x1898, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__parse__loop_fun5664(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5664__t* _self = kk_function_alloc_as(struct kk_hml_hc__parse__loop_fun5664__t, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__parse__loop_fun5664, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  _self->loc_1 = loc_1;
  _self->loc_2 = loc_2;
  _self->loc_3 = loc_3;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__parse__loop_fun5664(kk_function_t _fself, kk_box_t _b_x1898, kk_context_t* _ctx) {
  struct kk_hml_hc__parse__loop_fun5664__t* _self = kk_function_as(struct kk_hml_hc__parse__loop_fun5664__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23359,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23359,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23359,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23359,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_hml__parseraw _x_x5665;
  kk_unit_t _x_x5666 = kk_Unit;
  kk_unit_unbox(_b_x1898);
  _x_x5665 = kk_hml__mlift_hc__parse__loop_11170(loc_5, loc, loc_0, loc_1, loc_3, loc_2, _x_x5666, _ctx); /*hml/parseraw*/
  return kk_hml__parseraw_box(_x_x5665, _ctx);
}

kk_hml__parseraw kk_hml_hc__parse__loop(kk_hml__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure parseraw */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23359,list<string>>*/;
  kk_ref_t loc_0 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23359,list<(string, string)>>*/;
  kk_ref_t loc_1 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23359,list<string>>*/;
  kk_ref_t loc_2;
  kk_box_t _x_x5632;
  kk_string_t _x_x5633 = kk_string_empty(); /*string*/
  _x_x5632 = kk_string_box(_x_x5633); /*10000*/
  loc_2 = kk_ref_alloc(_x_x5632,kk_context()); /*local-var<23359,string>*/
  kk_ref_t loc_3 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23359,list<string>>*/;
  kk_ref_t loc_4 = kk_ref_alloc((kk_std_core_types__list_box(args, _ctx)),kk_context()); /*local-var<23359,list<string>>*/;
  kk_ref_t loc_5;
  kk_box_t _x_x5635;
  kk_string_t _x_x5636 = kk_string_empty(); /*string*/
  _x_x5635 = kk_string_box(_x_x5636); /*10000*/
  loc_5 = kk_ref_alloc(_x_x5635,kk_context()); /*local-var<23359,string>*/
  kk_unit_t x_11362 = kk_Unit;
  kk_box_t _x_x5638;
  kk_hml__hica_brk _x_x5639;
  kk_std_core_hnd__clause0 _x_x5640 = kk_std_core_hnd__new_Clause0(kk_hml_new_hc__parse__loop_fun5641(_ctx), _ctx); /*hnd/clause0<10010,10011,10012,10013>*/
  _x_x5639 = kk_hml__new_Hnd_hica_brk(kk_reuse_null, 0, kk_integer_from_small(3), _x_x5640, _ctx); /*hml/hica-brk<30,31>*/
  kk_function_t _x_x5645;
  kk_ref_dup(loc, _ctx);
  kk_ref_dup(loc_0, _ctx);
  kk_ref_dup(loc_1, _ctx);
  kk_ref_dup(loc_2, _ctx);
  kk_ref_dup(loc_3, _ctx);
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5645 = kk_hml_new_hc__parse__loop_fun5646(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx); /*() -> <hml/hica-brk|658> 657*/
  _x_x5638 = kk_hml_hica_brk_fs__handle(_x_x5639, kk_hml_new_hc__parse__loop_fun5644(_ctx), _x_x5645, _ctx); /*659*/
  kk_unit_unbox(_x_x5638);
  kk_hml__parseraw res_5;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5662;
    kk_function_t _x_x5663;
    kk_ref_dup(loc, _ctx);
    kk_ref_dup(loc_0, _ctx);
    kk_ref_dup(loc_1, _ctx);
    kk_ref_dup(loc_2, _ctx);
    kk_ref_dup(loc_3, _ctx);
    kk_ref_dup(loc_5, _ctx);
    _x_x5663 = kk_hml_new_hc__parse__loop_fun5664(loc, loc_0, loc_1, loc_2, loc_3, loc_5, _ctx); /*(10000) -> 10002 10001*/
    _x_x5662 = kk_std_core_hnd_yield_extend(_x_x5663, _ctx); /*10001*/
    res_5 = kk_hml__parseraw_unbox(_x_x5662, KK_OWNED, _ctx); /*hml/parseraw*/
  }
  else {
    kk_ref_t _x_x5667 = kk_ref_dup(loc_5, _ctx); /*local-var<23359,string>*/
    kk_ref_t _x_x5668 = kk_ref_dup(loc, _ctx); /*local-var<23359,list<string>>*/
    kk_ref_t _x_x5669 = kk_ref_dup(loc_0, _ctx); /*local-var<23359,list<(string, string)>>*/
    kk_ref_t _x_x5670 = kk_ref_dup(loc_1, _ctx); /*local-var<23359,list<string>>*/
    kk_ref_t _x_x5671 = kk_ref_dup(loc_3, _ctx); /*local-var<23359,list<string>>*/
    kk_ref_t _x_x5672 = kk_ref_dup(loc_2, _ctx); /*local-var<23359,string>*/
    res_5 = kk_hml__mlift_hc__parse__loop_11170(_x_x5667, _x_x5668, _x_x5669, _x_x5670, _x_x5671, _x_x5672, x_11362, _ctx); /*hml/parseraw*/
  }
  kk_hml__parseraw res_4;
  kk_box_t _x_x5673 = kk_std_core_hnd_prompt_local_var(loc_5, kk_hml__parseraw_box(res_5, _ctx), _ctx); /*10001*/
  res_4 = kk_hml__parseraw_unbox(_x_x5673, KK_OWNED, _ctx); /*hml/parseraw*/
  kk_hml__parseraw res_3;
  kk_box_t _x_x5674 = kk_std_core_hnd_prompt_local_var(loc_4, kk_hml__parseraw_box(res_4, _ctx), _ctx); /*10001*/
  res_3 = kk_hml__parseraw_unbox(_x_x5674, KK_OWNED, _ctx); /*hml/parseraw*/
  kk_hml__parseraw res_2;
  kk_box_t _x_x5675 = kk_std_core_hnd_prompt_local_var(loc_3, kk_hml__parseraw_box(res_3, _ctx), _ctx); /*10001*/
  res_2 = kk_hml__parseraw_unbox(_x_x5675, KK_OWNED, _ctx); /*hml/parseraw*/
  kk_hml__parseraw res_1;
  kk_box_t _x_x5676 = kk_std_core_hnd_prompt_local_var(loc_2, kk_hml__parseraw_box(res_2, _ctx), _ctx); /*10001*/
  res_1 = kk_hml__parseraw_unbox(_x_x5676, KK_OWNED, _ctx); /*hml/parseraw*/
  kk_hml__parseraw res_0;
  kk_box_t _x_x5677 = kk_std_core_hnd_prompt_local_var(loc_1, kk_hml__parseraw_box(res_1, _ctx), _ctx); /*10001*/
  res_0 = kk_hml__parseraw_unbox(_x_x5677, KK_OWNED, _ctx); /*hml/parseraw*/
  kk_hml__parseraw res;
  kk_box_t _x_x5678 = kk_std_core_hnd_prompt_local_var(loc_0, kk_hml__parseraw_box(res_0, _ctx), _ctx); /*10001*/
  res = kk_hml__parseraw_unbox(_x_x5678, KK_OWNED, _ctx); /*hml/parseraw*/
  kk_box_t _x_x5679 = kk_std_core_hnd_prompt_local_var(loc, kk_hml__parseraw_box(res, _ctx), _ctx); /*10001*/
  return kk_hml__parseraw_unbox(_x_x5679, KK_OWNED, _ctx);
}
 
// monadic lift

kk_hml__clioutcome kk_hml__mlift_hc__cli__parse__args_11171(kk_std_core_types__list final__options, kk_std_core_types__list flags, kk_std_core_types__list positionals, kk_string_t subcmd, kk_hml__clioutcome _y_x10881, kk_context_t* _ctx) { /* (final_options : list<(string, string)>, flags : list<string>, positionals : list<string>, subcmd : string, clioutcome) -> pure clioutcome */ 
  if (kk_hml__is_Parsed(_y_x10881, _ctx)) {
    struct kk_hml_Parsed* _con_x5680 = kk_hml__as_Parsed(_y_x10881, _ctx);
    kk_hml__cliresult hc__sub_0 = _con_x5680->cli__result;
    struct kk_hml_Cliresult* _con_x5681 = kk_hml__as_Cliresult(hc__sub_0, _ctx);
    kk_reuse_t _ru_x3035 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10881, _ctx)) {
      _ru_x3035 = (kk_datatype_ptr_reuse(_y_x10881, _ctx));
    }
    else {
      kk_hml__cliresult_dup(hc__sub_0, _ctx);
      kk_datatype_ptr_decref(_y_x10881, _ctx);
    }
    kk_hml__cliresult _b_x1932_1933 = hc__sub_0; /*hml/cliresult*/;
    if kk_likely(_ru_x3035!=NULL) {
      kk_std_core_types__maybe _x_x5683 = kk_std_core_types__new_Just(kk_hml__cliresult_box(_b_x1932_1933, _ctx), _ctx); /*maybe<10024>*/
      struct kk_hml_Parsed* _con_x5682 = (struct kk_hml_Parsed*)_ru_x3035;
      _con_x5682->cli__result = kk_hml__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5683, _ctx);
      return kk_hml__base_Parsed(_con_x5682, _ctx);
    }
    {
      kk_hml__cliresult _x_x5684;
      kk_std_core_types__maybe _x_x5685 = kk_std_core_types__new_Just(kk_hml__cliresult_box(_b_x1932_1933, _ctx), _ctx); /*maybe<10024>*/
      _x_x5684 = kk_hml__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5685, _ctx); /*hml/cliresult*/
      return kk_hml__new_Parsed(kk_reuse_null, 0, _x_x5684, _ctx);
    }
  }
  {
    kk_string_drop(subcmd, _ctx);
    kk_std_core_types__list_drop(positionals, _ctx);
    kk_std_core_types__list_drop(flags, _ctx);
    kk_std_core_types__list_drop(final__options, _ctx);
    return _y_x10881;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5687__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5687(kk_function_t _fself, kk_box_t _b_x1936, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5687(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5687, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5687(kk_function_t _fself, kk_box_t _b_x1936, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5688;
  kk_hml__parseraw _match_x2388 = kk_hml__parseraw_unbox(_b_x1936, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5689 = kk_hml__as_Parseraw(_match_x2388, _ctx);
    kk_string_t _x = _con_x5689->raw__error;
    kk_std_core_types__list _pat_0 = _con_x5689->raw__flags;
    kk_std_core_types__list _pat_1 = _con_x5689->raw__options;
    kk_std_core_types__list _pat_2 = _con_x5689->raw__positionals;
    kk_string_t _pat_3 = _con_x5689->raw__subcmd;
    kk_std_core_types__list _pat_4 = _con_x5689->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2388, _ctx)) {
      kk_std_core_types__list_drop(_pat_4, _ctx);
      kk_string_drop(_pat_3, _ctx);
      kk_std_core_types__list_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2388, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2388, _ctx);
    }
    _x_x5688 = _x; /*string*/
  }
  return kk_string_box(_x_x5688);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5693__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5693(kk_function_t _fself, kk_box_t _b_x1942, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5693(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5693, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5693(kk_function_t _fself, kk_box_t _b_x1942, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5694;
  kk_hml__parseraw _match_x2387 = kk_hml__parseraw_unbox(_b_x1942, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5695 = kk_hml__as_Parseraw(_match_x2387, _ctx);
    kk_string_t _pat_0_0 = _con_x5695->raw__error;
    kk_std_core_types__list _x_0 = _con_x5695->raw__flags;
    kk_std_core_types__list _pat_1_0 = _con_x5695->raw__options;
    kk_std_core_types__list _pat_2_0 = _con_x5695->raw__positionals;
    kk_string_t _pat_3_0 = _con_x5695->raw__subcmd;
    kk_std_core_types__list _pat_4_0 = _con_x5695->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2387, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_string_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2387, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2387, _ctx);
    }
    _x_x5694 = _x_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5694, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5699__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5699(kk_function_t _fself, kk_box_t _b_x1948, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5699(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5699, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5699(kk_function_t _fself, kk_box_t _b_x1948, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5700;
  kk_hml__parseraw _match_x2386 = kk_hml__parseraw_unbox(_b_x1948, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5701 = kk_hml__as_Parseraw(_match_x2386, _ctx);
    kk_string_t _pat_0_1 = _con_x5701->raw__error;
    kk_std_core_types__list _pat_1_1 = _con_x5701->raw__flags;
    kk_std_core_types__list _x_1 = _con_x5701->raw__options;
    kk_std_core_types__list _pat_2_1 = _con_x5701->raw__positionals;
    kk_string_t _pat_3_1 = _con_x5701->raw__subcmd;
    kk_std_core_types__list _pat_4_1 = _con_x5701->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2386, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_string_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_std_core_types__list_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2386, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2386, _ctx);
    }
    _x_x5700 = _x_1; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5700, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5705__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5705(kk_function_t _fself, kk_box_t _b_x1954, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5705(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5705, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5705(kk_function_t _fself, kk_box_t _b_x1954, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5706;
  kk_hml__parseraw _match_x2385 = kk_hml__parseraw_unbox(_b_x1954, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5707 = kk_hml__as_Parseraw(_match_x2385, _ctx);
    kk_string_t _pat_0_2 = _con_x5707->raw__error;
    kk_std_core_types__list _pat_1_2 = _con_x5707->raw__flags;
    kk_std_core_types__list _pat_2_2 = _con_x5707->raw__options;
    kk_std_core_types__list _x_2 = _con_x5707->raw__positionals;
    kk_string_t _pat_3_2 = _con_x5707->raw__subcmd;
    kk_std_core_types__list _pat_4_2 = _con_x5707->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2385, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_string_drop(_pat_3_2, _ctx);
      kk_std_core_types__list_drop(_pat_2_2, _ctx);
      kk_std_core_types__list_drop(_pat_1_2, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(_match_x2385, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2385, _ctx);
    }
    _x_x5706 = _x_2; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5706, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5711__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5711(kk_function_t _fself, kk_box_t _b_x1960, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5711(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5711, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5711(kk_function_t _fself, kk_box_t _b_x1960, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5712;
  kk_hml__parseraw _match_x2384 = kk_hml__parseraw_unbox(_b_x1960, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5713 = kk_hml__as_Parseraw(_match_x2384, _ctx);
    kk_string_t _pat_0_3 = _con_x5713->raw__error;
    kk_std_core_types__list _pat_1_3 = _con_x5713->raw__flags;
    kk_std_core_types__list _pat_2_3 = _con_x5713->raw__options;
    kk_std_core_types__list _pat_3_3 = _con_x5713->raw__positionals;
    kk_string_t _x_3 = _con_x5713->raw__subcmd;
    kk_std_core_types__list _pat_4_3 = _con_x5713->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2384, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_std_core_types__list_drop(_pat_2_3, _ctx);
      kk_std_core_types__list_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(_match_x2384, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2384, _ctx);
    }
    _x_x5712 = _x_3; /*string*/
  }
  return kk_string_box(_x_x5712);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5717__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5717(kk_function_t _fself, kk_box_t _b_x1966, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5717(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5717, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5717(kk_function_t _fself, kk_box_t _b_x1966, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5718;
  kk_hml__parseraw _match_x2383 = kk_hml__parseraw_unbox(_b_x1966, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5719 = kk_hml__as_Parseraw(_match_x2383, _ctx);
    kk_string_t _pat_0_4 = _con_x5719->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x5719->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x5719->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x5719->raw__positionals;
    kk_string_t _pat_4_4 = _con_x5719->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x5719->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2383, _ctx)) {
      kk_string_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_std_core_types__list_drop(_pat_2_4, _ctx);
      kk_std_core_types__list_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(_match_x2383, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2383, _ctx);
    }
    _x_x5718 = _x_4; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5718, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5728__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5728(kk_function_t _fself, kk_box_t _b_x1972, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5728(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5728, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5728(kk_function_t _fself, kk_box_t _b_x1972, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5729;
  bool b_2070 = kk_bool_unbox(_b_x1972); /*bool*/;
  if (b_2070) {
    _x_x5729 = false; /*bool*/
  }
  else {
    _x_x5729 = true; /*bool*/
  }
  return kk_bool_box(_x_x5729);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5731__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5731(kk_function_t _fself, kk_box_t _b_x1981, kk_box_t _b_x1982, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5731(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5731, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5734__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5734(kk_function_t _fself, kk_box_t _b_x1976, kk_box_t _b_x1977, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5734(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5734, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5734(kk_function_t _fself, kk_box_t _b_x1976, kk_box_t _b_x1977, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5735;
  kk_std_core_types__list _x_x5736 = kk_std_core_types__list_unbox(_b_x1976, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_hml__clioption _x_x5737 = kk_hml__clioption_unbox(_b_x1977, KK_OWNED, _ctx); /*hml/clioption*/
  _x_x5735 = kk_hml_hc__add__default(_x_x5736, _x_x5737, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5735, _ctx);
}
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5731(kk_function_t _fself, kk_box_t _b_x1981, kk_box_t _b_x1982, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5732;
  kk_hml__clispec _match_x2380 = kk_hml__clispec_unbox(_b_x1981, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5733 = kk_hml__as_Clispec(_match_x2380, _ctx);
    kk_string_t _pat_0_7 = _con_x5733->app__name;
    kk_string_t _pat_1_6 = _con_x5733->app__version;
    kk_string_t _pat_2_6 = _con_x5733->app__about;
    kk_std_core_types__list _pat_3_6 = _con_x5733->app__flags;
    kk_std_core_types__list _x_5 = _con_x5733->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5733->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5733->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2380, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_6, _ctx);
      kk_string_drop(_pat_0_7, _ctx);
      kk_datatype_ptr_free(_match_x2380, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2380, _ctx);
    }
    _x_x5732 = _x_5; /*list<hml/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x5732, _b_x1982, kk_hml__new_mlift_hc__cli__parse__args_11172_fun5734(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5741__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5741(kk_function_t _fself, kk_box_t _b_x2005, kk_box_t _b_x2006, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5741(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5741, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5744__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5744(kk_function_t _fself, kk_integer_t _b_x1995, kk_box_t _b_x1996, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5744(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5744, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5744(kk_function_t _fself, kk_integer_t _b_x1995, kk_box_t _b_x1996, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x5745 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x1995, _ctx), _b_x1996, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5745, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5749__t {
  struct kk_function_s _base;
  kk_box_t _b_x2006;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5749(kk_function_t _fself, kk_box_t _b_x2000, kk_box_t _b_x2001, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5749(kk_box_t _b_x2006, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__cli__parse__args_11172_fun5749__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__cli__parse__args_11172_fun5749__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__cli__parse__args_11172_fun5749, kk_context());
  _self->_b_x2006 = _b_x2006;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5749(kk_function_t _fself, kk_box_t _b_x2000, kk_box_t _b_x2001, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__cli__parse__args_11172_fun5749__t* _self = kk_function_as(struct kk_hml__mlift_hc__cli__parse__args_11172_fun5749__t*, _fself, _ctx);
  kk_box_t _b_x2006 = _self->_b_x2006; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2006, _ctx);}, {}, _ctx)
  kk_string_t _x_x5750;
  kk_std_core_types__list _x_x5751 = kk_std_core_types__list_unbox(_b_x2006, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x5752 = kk_string_unbox(_b_x2000); /*string*/
  kk_std_core_types__tuple2 _x_x5753 = kk_std_core_types__tuple2_unbox(_b_x2001, KK_OWNED, _ctx); /*(int, hml/cliarg)*/
  _x_x5750 = kk_hml_hc__check__one__arg(_x_x5751, _x_x5752, _x_x5753, _ctx); /*string*/
  return kk_string_box(_x_x5750);
}
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5741(kk_function_t _fself, kk_box_t _b_x2005, kk_box_t _b_x2006, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x1997_2010;
  kk_std_core_types__list _x_x5742;
  kk_hml__clispec _match_x2379 = kk_hml__clispec_unbox(_b_x2005, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5743 = kk_hml__as_Clispec(_match_x2379, _ctx);
    kk_string_t _pat_0_8 = _con_x5743->app__name;
    kk_string_t _pat_1_7 = _con_x5743->app__version;
    kk_string_t _pat_2_7 = _con_x5743->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5743->app__flags;
    kk_std_core_types__list _pat_4_7 = _con_x5743->app__options;
    kk_std_core_types__list _x_6 = _con_x5743->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5743->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2379, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_8, _ctx);
      kk_datatype_ptr_free(_match_x2379, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2379, _ctx);
    }
    _x_x5742 = _x_6; /*list<hml/cliarg>*/
  }
  _b_x1997_2010 = kk_std_core_list_map_indexed(_x_x5742, kk_hml__new_mlift_hc__cli__parse__args_11172_fun5744(_ctx), _ctx); /*list<(int, hml/cliarg)>*/
  kk_box_t _x_x5746;
  kk_string_t _x_x5747 = kk_string_empty(); /*string*/
  _x_x5746 = kk_string_box(_x_x5747); /*10002*/
  return kk_std_core_list_foldl(_b_x1997_2010, _x_x5746, kk_hml__new_mlift_hc__cli__parse__args_11172_fun5749(_b_x2006, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5760__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5760(kk_function_t _fself, kk_box_t _b_x2023, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5760(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5760, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5760(kk_function_t _fself, kk_box_t _b_x2023, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5761;
  bool b_0_2071 = kk_bool_unbox(_b_x2023); /*bool*/;
  if (b_0_2071) {
    _x_x5761 = false; /*bool*/
  }
  else {
    _x_x5761 = true; /*bool*/
  }
  return kk_bool_box(_x_x5761);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5764__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5764(kk_function_t _fself, kk_box_t _b_x2026, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5764(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5764, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5764(kk_function_t _fself, kk_box_t _b_x2026, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5765;
  bool b_1_2072 = kk_bool_unbox(_b_x2026); /*bool*/;
  if (b_1_2072) {
    _x_x5765 = false; /*bool*/
  }
  else {
    _x_x5765 = true; /*bool*/
  }
  return kk_bool_box(_x_x5765);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5767__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5767(kk_function_t _fself, kk_box_t _b_x2029, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5767(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5767, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5767(kk_function_t _fself, kk_box_t _b_x2029, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5768;
  kk_hml__clispec _match_x2374 = kk_hml__clispec_unbox(_b_x2029, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5769 = kk_hml__as_Clispec(_match_x2374, _ctx);
    kk_string_t _pat_0_11 = _con_x5769->app__name;
    kk_string_t _pat_1_7_0 = _con_x5769->app__version;
    kk_string_t _pat_2_7_0 = _con_x5769->app__about;
    kk_std_core_types__list _pat_3_7_0 = _con_x5769->app__flags;
    kk_std_core_types__list _pat_4_7_0 = _con_x5769->app__options;
    kk_std_core_types__list _pat_5_2 = _con_x5769->app__args;
    kk_std_core_types__list _x_7 = _con_x5769->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2374, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0, _ctx);
      kk_string_drop(_pat_2_7_0, _ctx);
      kk_string_drop(_pat_1_7_0, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2374, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2374, _ctx);
    }
    _x_x5768 = _x_7; /*list<(string, hml/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5768, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5771__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5771(kk_function_t _fself, kk_box_t _b_x2041, kk_box_t _b_x2042, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5771(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5771, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5773__t {
  struct kk_function_s _base;
  kk_string_t name_2074;
};
static bool kk_hml__mlift_hc__cli__parse__args_11172_fun5773(kk_function_t _fself, kk_box_t _b_x2037, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5773(kk_string_t name_2074, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__cli__parse__args_11172_fun5773__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__cli__parse__args_11172_fun5773__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__cli__parse__args_11172_fun5773, kk_context());
  _self->name_2074 = name_2074;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__mlift_hc__cli__parse__args_11172_fun5773(kk_function_t _fself, kk_box_t _b_x2037, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__cli__parse__args_11172_fun5773__t* _self = kk_function_as(struct kk_hml__mlift_hc__cli__parse__args_11172_fun5773__t*, _fself, _ctx);
  kk_string_t name_2074 = _self->name_2074; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2074, _ctx);}, {}, _ctx)
  kk_string_t _x_x5774;
  kk_std_core_types__tuple2 _match_x2373 = kk_std_core_types__tuple2_unbox(_b_x2037, KK_OWNED, _ctx); /*(string, hml/clispec)*/;
  {
    kk_box_t _box_x2033 = _match_x2373.fst;
    kk_box_t _box_x2034 = _match_x2373.snd;
    kk_string_t _x_6_0 = kk_string_unbox(_box_x2033);
    kk_string_dup(_x_6_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2373, _ctx);
    _x_x5774 = _x_6_0; /*string*/
  }
  return kk_string_is_eq(_x_x5774,name_2074,kk_context());
}
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5771(kk_function_t _fself, kk_box_t _b_x2041, kk_box_t _b_x2042, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5772;
  kk_std_core_types__list commands_2073 = kk_std_core_types__list_unbox(_b_x2041, KK_OWNED, _ctx); /*list<(string, hml/clispec)>*/;
  kk_string_t name_2074 = kk_string_unbox(_b_x2042); /*string*/;
  _x_x5772 = kk_std_core_list_find(commands_2073, kk_hml__new_mlift_hc__cli__parse__args_11172_fun5773(name_2074, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5772, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5779__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5779(kk_function_t _fself, kk_box_t _b_x2048, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5779(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__args_11172_fun5779, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5779(kk_function_t _fself, kk_box_t _b_x2048, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_hml__clispec _x_x5780;
  kk_std_core_types__tuple2 _match_x2372 = kk_std_core_types__tuple2_unbox(_b_x2048, KK_OWNED, _ctx); /*(string, hml/clispec)*/;
  {
    kk_box_t _box_x2044 = _match_x2372.fst;
    kk_box_t _box_x2045 = _match_x2372.snd;
    kk_hml__clispec _x_8 = kk_hml__clispec_unbox(_box_x2045, KK_BORROWED, _ctx);
    kk_hml__clispec_dup(_x_8, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2372, _ctx);
    _x_x5780 = _x_8; /*hml/clispec*/
  }
  return kk_hml__clispec_box(_x_x5780, _ctx);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__args_11172_fun5782__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_0;
  kk_std_core_types__list flags_0;
  kk_std_core_types__list positionals_0;
  kk_string_t subcmd_0;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5782(kk_function_t _fself, kk_box_t _b_x2053, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__args_11172_fun5782(kk_std_core_types__list final__options_0, kk_std_core_types__list flags_0, kk_std_core_types__list positionals_0, kk_string_t subcmd_0, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__cli__parse__args_11172_fun5782__t* _self = kk_function_alloc_as(struct kk_hml__mlift_hc__cli__parse__args_11172_fun5782__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__mlift_hc__cli__parse__args_11172_fun5782, kk_context());
  _self->final__options_0 = final__options_0;
  _self->flags_0 = flags_0;
  _self->positionals_0 = positionals_0;
  _self->subcmd_0 = subcmd_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__args_11172_fun5782(kk_function_t _fself, kk_box_t _b_x2053, kk_context_t* _ctx) {
  struct kk_hml__mlift_hc__cli__parse__args_11172_fun5782__t* _self = kk_function_as(struct kk_hml__mlift_hc__cli__parse__args_11172_fun5782__t*, _fself, _ctx);
  kk_std_core_types__list final__options_0 = _self->final__options_0; /* list<(string, string)> */
  kk_std_core_types__list flags_0 = _self->flags_0; /* list<string> */
  kk_std_core_types__list positionals_0 = _self->positionals_0; /* list<string> */
  kk_string_t subcmd_0 = _self->subcmd_0; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_0, _ctx);kk_std_core_types__list_dup(flags_0, _ctx);kk_std_core_types__list_dup(positionals_0, _ctx);kk_string_dup(subcmd_0, _ctx);}, {}, _ctx)
  kk_hml__clioutcome _y_x10881_0_2069 = kk_hml__clioutcome_unbox(_b_x2053, KK_OWNED, _ctx); /*hml/clioutcome*/;
  kk_hml__clioutcome _x_x5783 = kk_hml__mlift_hc__cli__parse__args_11171(final__options_0, flags_0, positionals_0, subcmd_0, _y_x10881_0_2069, _ctx); /*hml/clioutcome*/
  return kk_hml__clioutcome_box(_x_x5783, _ctx);
}

kk_hml__clioutcome kk_hml__mlift_hc__cli__parse__args_11172(kk_hml__clispec spec, kk_hml__parseraw hc__raw, kk_context_t* _ctx) { /* (spec : clispec, hc_raw : parseraw) -> pure clioutcome */ 
  kk_string_t error;
  kk_box_t _x_x5686;
  kk_box_t _x_x5690;
  kk_hml__parseraw _x_x5691 = kk_hml__parseraw_dup(hc__raw, _ctx); /*hml/parseraw*/
  _x_x5690 = kk_hml__parseraw_box(_x_x5691, _ctx); /*10000*/
  _x_x5686 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5687(_ctx), _x_x5690, _ctx); /*10001*/
  error = kk_string_unbox(_x_x5686); /*string*/
  kk_std_core_types__list flags_0;
  kk_box_t _x_x5692;
  kk_box_t _x_x5696;
  kk_hml__parseraw _x_x5697 = kk_hml__parseraw_dup(hc__raw, _ctx); /*hml/parseraw*/
  _x_x5696 = kk_hml__parseraw_box(_x_x5697, _ctx); /*10000*/
  _x_x5692 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5693(_ctx), _x_x5696, _ctx); /*10001*/
  flags_0 = kk_std_core_types__list_unbox(_x_x5692, KK_OWNED, _ctx); /*list<string>*/
  kk_std_core_types__list options;
  kk_box_t _x_x5698;
  kk_box_t _x_x5702;
  kk_hml__parseraw _x_x5703 = kk_hml__parseraw_dup(hc__raw, _ctx); /*hml/parseraw*/
  _x_x5702 = kk_hml__parseraw_box(_x_x5703, _ctx); /*10000*/
  _x_x5698 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5699(_ctx), _x_x5702, _ctx); /*10001*/
  options = kk_std_core_types__list_unbox(_x_x5698, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_std_core_types__list positionals_0;
  kk_box_t _x_x5704;
  kk_box_t _x_x5708;
  kk_hml__parseraw _x_x5709 = kk_hml__parseraw_dup(hc__raw, _ctx); /*hml/parseraw*/
  _x_x5708 = kk_hml__parseraw_box(_x_x5709, _ctx); /*10000*/
  _x_x5704 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5705(_ctx), _x_x5708, _ctx); /*10001*/
  positionals_0 = kk_std_core_types__list_unbox(_x_x5704, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t subcmd_0;
  kk_box_t _x_x5710;
  kk_box_t _x_x5714;
  kk_hml__parseraw _x_x5715 = kk_hml__parseraw_dup(hc__raw, _ctx); /*hml/parseraw*/
  _x_x5714 = kk_hml__parseraw_box(_x_x5715, _ctx); /*10000*/
  _x_x5710 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5711(_ctx), _x_x5714, _ctx); /*10001*/
  subcmd_0 = kk_string_unbox(_x_x5710); /*string*/
  kk_std_core_types__list sub__args;
  kk_box_t _x_x5716 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5717(_ctx), kk_hml__parseraw_box(hc__raw, _ctx), _ctx); /*10001*/
  sub__args = kk_std_core_types__list_unbox(_x_x5716, KK_OWNED, _ctx); /*list<string>*/
  bool _match_x2365;
  kk_string_t _x_x5720 = kk_string_dup(error, _ctx); /*string*/
  kk_string_t _x_x5721;
  kk_define_string_literal(static, _s_x5722, 8, "__help__", _ctx)
  _x_x5721 = kk_string_dup(_s_x5722, _ctx); /*string*/
  _match_x2365 = kk_string_is_eq(_x_x5720,_x_x5721,kk_context()); /*bool*/
  if (_match_x2365) {
    kk_string_drop(subcmd_0, _ctx);
    kk_std_core_types__list_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_std_core_types__list_drop(positionals_0, _ctx);
    kk_std_core_types__list_drop(options, _ctx);
    kk_std_core_types__list_drop(flags_0, _ctx);
    kk_string_drop(error, _ctx);
    return kk_hml__new_Help(_ctx);
  }
  {
    bool _match_x2366;
    kk_string_t _x_x5723 = kk_string_dup(error, _ctx); /*string*/
    kk_string_t _x_x5724;
    kk_define_string_literal(static, _s_x5725, 11, "__version__", _ctx)
    _x_x5724 = kk_string_dup(_s_x5725, _ctx); /*string*/
    _match_x2366 = kk_string_is_eq(_x_x5723,_x_x5724,kk_context()); /*bool*/
    if (_match_x2366) {
      kk_string_drop(subcmd_0, _ctx);
      kk_std_core_types__list_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_0, _ctx);
      kk_std_core_types__list_drop(options, _ctx);
      kk_std_core_types__list_drop(flags_0, _ctx);
      kk_string_drop(error, _ctx);
      return kk_hml__new_Version(_ctx);
    }
    {
      bool _x_x1_5_11093;
      kk_integer_t _brw_x2381;
      kk_string_t _x_x5726 = kk_string_dup(error, _ctx); /*string*/
      _brw_x2381 = kk_std_core_string_chars_fs_count(_x_x5726, _ctx); /*int*/
      bool _brw_x2382 = kk_integer_eq_borrow(_brw_x2381,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2381, _ctx);
      _x_x1_5_11093 = _brw_x2382; /*bool*/
      bool _match_x2367;
      kk_box_t _x_x5727 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5728(_ctx), kk_bool_box(_x_x1_5_11093), _ctx); /*10001*/
      _match_x2367 = kk_bool_unbox(_x_x5727); /*bool*/
      if (_match_x2367) {
        kk_string_drop(subcmd_0, _ctx);
        kk_std_core_types__list_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_0, _ctx);
        kk_std_core_types__list_drop(options, _ctx);
        kk_std_core_types__list_drop(flags_0, _ctx);
        return kk_hml__new_CliError(kk_reuse_null, 0, error, _ctx);
      }
      {
        kk_string_drop(error, _ctx);
        kk_std_core_types__list final__options_0;
        kk_box_t _x_x5730;
        kk_box_t _x_x5738;
        kk_hml__clispec _x_x5739 = kk_hml__clispec_dup(spec, _ctx); /*hml/clispec*/
        _x_x5738 = kk_hml__clispec_box(_x_x5739, _ctx); /*10000*/
        _x_x5730 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5731(_ctx), _x_x5738, kk_std_core_types__list_box(options, _ctx), _ctx); /*10002*/
        final__options_0 = kk_std_core_types__list_unbox(_x_x5730, KK_OWNED, _ctx); /*list<(string, string)>*/
        kk_string_t req__err;
        kk_box_t _x_x5740;
        kk_box_t _x_x5754;
        kk_hml__clispec _x_x5755 = kk_hml__clispec_dup(spec, _ctx); /*hml/clispec*/
        _x_x5754 = kk_hml__clispec_box(_x_x5755, _ctx); /*10000*/
        kk_box_t _x_x5756;
        kk_std_core_types__list _x_x5757 = kk_std_core_types__list_dup(positionals_0, _ctx); /*list<string>*/
        _x_x5756 = kk_std_core_types__list_box(_x_x5757, _ctx); /*10001*/
        _x_x5740 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5741(_ctx), _x_x5754, _x_x5756, _ctx); /*10002*/
        req__err = kk_string_unbox(_x_x5740); /*string*/
        bool _x_x1_8_11098;
        kk_integer_t _brw_x2377;
        kk_string_t _x_x5758 = kk_string_dup(req__err, _ctx); /*string*/
        _brw_x2377 = kk_std_core_string_chars_fs_count(_x_x5758, _ctx); /*int*/
        bool _brw_x2378 = kk_integer_eq_borrow(_brw_x2377,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2377, _ctx);
        _x_x1_8_11098 = _brw_x2378; /*bool*/
        bool _match_x2368;
        kk_box_t _x_x5759 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5760(_ctx), kk_bool_box(_x_x1_8_11098), _ctx); /*10001*/
        _match_x2368 = kk_bool_unbox(_x_x5759); /*bool*/
        if (_match_x2368) {
          kk_string_drop(subcmd_0, _ctx);
          kk_std_core_types__list_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_0, _ctx);
          kk_std_core_types__list_drop(flags_0, _ctx);
          kk_std_core_types__list_drop(final__options_0, _ctx);
          return kk_hml__new_CliError(kk_reuse_null, 0, req__err, _ctx);
        }
        {
          kk_string_drop(req__err, _ctx);
          bool _x_x1_9_11099;
          kk_integer_t _brw_x2375;
          kk_string_t _x_x5762 = kk_string_dup(subcmd_0, _ctx); /*string*/
          _brw_x2375 = kk_std_core_string_chars_fs_count(_x_x5762, _ctx); /*int*/
          bool _brw_x2376 = kk_integer_eq_borrow(_brw_x2375,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2375, _ctx);
          _x_x1_9_11099 = _brw_x2376; /*bool*/
          bool _match_x2369;
          kk_box_t _x_x5763 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5764(_ctx), kk_bool_box(_x_x1_9_11099), _ctx); /*10001*/
          _match_x2369 = kk_bool_unbox(_x_x5763); /*bool*/
          if (_match_x2369) {
            kk_std_core_types__list _x_x1_10_11100;
            kk_box_t _x_x5766 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5767(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
            _x_x1_10_11100 = kk_std_core_types__list_unbox(_x_x5766, KK_OWNED, _ctx); /*list<(string, hml/clispec)>*/
            kk_std_core_types__maybe _match_x2370;
            kk_box_t _x_x5770;
            kk_box_t _x_x5775;
            kk_string_t _x_x5776 = kk_string_dup(subcmd_0, _ctx); /*string*/
            _x_x5775 = kk_string_box(_x_x5776); /*10001*/
            _x_x5770 = kk_std_core_hnd__open_none2(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5771(_ctx), kk_std_core_types__list_box(_x_x1_10_11100, _ctx), _x_x5775, _ctx); /*10002*/
            _match_x2370 = kk_std_core_types__maybe_unbox(_x_x5770, KK_OWNED, _ctx); /*maybe<(string, hml/clispec)>*/
            if (kk_std_core_types__is_Just(_match_x2370, _ctx)) {
              kk_box_t _box_x2043 = _match_x2370._cons.Just.value;
              kk_std_core_types__tuple2 pair_0_0 = kk_std_core_types__tuple2_unbox(_box_x2043, KK_BORROWED, _ctx);
              kk_std_core_types__tuple2_dup(pair_0_0, _ctx);
              kk_std_core_types__maybe_drop(_match_x2370, _ctx);
              kk_hml__clioutcome x_11369;
              kk_hml__clispec _x_x5777;
              kk_box_t _x_x5778 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5779(_ctx), kk_std_core_types__tuple2_box(pair_0_0, _ctx), _ctx); /*10001*/
              _x_x5777 = kk_hml__clispec_unbox(_x_x5778, KK_OWNED, _ctx); /*hml/clispec*/
              x_11369 = kk_hml_hc__cli__parse__args(_x_x5777, sub__args, _ctx); /*hml/clioutcome*/
              if (kk_yielding(kk_context())) {
                kk_hml__clioutcome_drop(x_11369, _ctx);
                kk_box_t _x_x5781 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__cli__parse__args_11172_fun5782(final__options_0, flags_0, positionals_0, subcmd_0, _ctx), _ctx); /*10001*/
                return kk_hml__clioutcome_unbox(_x_x5781, KK_OWNED, _ctx);
              }
              {
                return kk_hml__mlift_hc__cli__parse__args_11171(final__options_0, flags_0, positionals_0, subcmd_0, x_11369, _ctx);
              }
            }
            {
              kk_std_core_types__list_drop(sub__args, _ctx);
              kk_std_core_types__list_drop(positionals_0, _ctx);
              kk_std_core_types__list_drop(flags_0, _ctx);
              kk_std_core_types__list_drop(final__options_0, _ctx);
              kk_string_t _x_x5784;
              kk_string_t _x_x5785;
              kk_define_string_literal(static, _s_x5786, 17, "unknown command: ", _ctx)
              _x_x5785 = kk_string_dup(_s_x5786, _ctx); /*string*/
              _x_x5784 = kk_std_core_types__lp__plus__plus__rp_(_x_x5785, subcmd_0, _ctx); /*string*/
              return kk_hml__new_CliError(kk_reuse_null, 0, _x_x5784, _ctx);
            }
          }
          {
            kk_string_drop(subcmd_0, _ctx);
            kk_std_core_types__list_drop(sub__args, _ctx);
            kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
            kk_hml__cliresult _x_x5787;
            kk_string_t _x_x5788 = kk_string_empty(); /*string*/
            _x_x5787 = kk_hml__new_Cliresult(kk_reuse_null, 0, flags_0, final__options_0, positionals_0, _x_x5788, kk_std_core_types__new_Nothing(_ctx), _ctx); /*hml/cliresult*/
            return kk_hml__new_Parsed(kk_reuse_null, 0, _x_x5787, _ctx);
          }
        }
      }
    }
  }
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5792__t {
  struct kk_function_s _base;
  kk_hml__clispec spec_2;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5792(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5792(kk_hml__clispec spec_2, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__args_fun5792__t* _self = kk_function_alloc_as(struct kk_hml_hc__cli__parse__args_fun5792__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__cli__parse__args_fun5792, kk_context());
  _self->spec_2 = spec_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5792(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__args_fun5792__t* _self = kk_function_as(struct kk_hml_hc__cli__parse__args_fun5792__t*, _fself, _ctx);
  kk_hml__clispec spec_2 = _self->spec_2; /* hml/clispec */
  kk_drop_match(_self, {kk_hml__clispec_dup(spec_2, _ctx);}, {}, _ctx)
  kk_hml__parseraw hc__raw_0_2214 = kk_hml__parseraw_unbox(_b_x2076, KK_OWNED, _ctx); /*hml/parseraw*/;
  kk_hml__clioutcome _x_x5793 = kk_hml__mlift_hc__cli__parse__args_11172(spec_2, hc__raw_0_2214, _ctx); /*hml/clioutcome*/
  return kk_hml__clioutcome_box(_x_x5793, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5795__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5795(kk_function_t _fself, kk_box_t _b_x2079, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5795(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5795, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5795(kk_function_t _fself, kk_box_t _b_x2079, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5796;
  kk_hml__parseraw _match_x2364 = kk_hml__parseraw_unbox(_b_x2079, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5797 = kk_hml__as_Parseraw(_match_x2364, _ctx);
    kk_string_t _x_9 = _con_x5797->raw__error;
    kk_std_core_types__list _pat_0_14 = _con_x5797->raw__flags;
    kk_std_core_types__list _pat_1_8 = _con_x5797->raw__options;
    kk_std_core_types__list _pat_2_8 = _con_x5797->raw__positionals;
    kk_string_t _pat_3_8 = _con_x5797->raw__subcmd;
    kk_std_core_types__list _pat_4_8 = _con_x5797->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2364, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_string_drop(_pat_3_8, _ctx);
      kk_std_core_types__list_drop(_pat_2_8, _ctx);
      kk_std_core_types__list_drop(_pat_1_8, _ctx);
      kk_std_core_types__list_drop(_pat_0_14, _ctx);
      kk_datatype_ptr_free(_match_x2364, _ctx);
    }
    else {
      kk_string_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2364, _ctx);
    }
    _x_x5796 = _x_9; /*string*/
  }
  return kk_string_box(_x_x5796);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5801__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5801(kk_function_t _fself, kk_box_t _b_x2085, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5801(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5801, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5801(kk_function_t _fself, kk_box_t _b_x2085, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5802;
  kk_hml__parseraw _match_x2363 = kk_hml__parseraw_unbox(_b_x2085, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5803 = kk_hml__as_Parseraw(_match_x2363, _ctx);
    kk_string_t _pat_0_0_0 = _con_x5803->raw__error;
    kk_std_core_types__list _x_0_0 = _con_x5803->raw__flags;
    kk_std_core_types__list _pat_1_0_0 = _con_x5803->raw__options;
    kk_std_core_types__list _pat_2_0_0 = _con_x5803->raw__positionals;
    kk_string_t _pat_3_0_0 = _con_x5803->raw__subcmd;
    kk_std_core_types__list _pat_4_0_0 = _con_x5803->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2363, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0_0, _ctx);
      kk_string_drop(_pat_3_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2363, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0_0, _ctx);
      kk_datatype_ptr_decref(_match_x2363, _ctx);
    }
    _x_x5802 = _x_0_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5802, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5807__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5807(kk_function_t _fself, kk_box_t _b_x2091, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5807(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5807, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5807(kk_function_t _fself, kk_box_t _b_x2091, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5808;
  kk_hml__parseraw _match_x2362 = kk_hml__parseraw_unbox(_b_x2091, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5809 = kk_hml__as_Parseraw(_match_x2362, _ctx);
    kk_string_t _pat_0_1_0 = _con_x5809->raw__error;
    kk_std_core_types__list _pat_1_1_0 = _con_x5809->raw__flags;
    kk_std_core_types__list _x_1_0 = _con_x5809->raw__options;
    kk_std_core_types__list _pat_2_1_0 = _con_x5809->raw__positionals;
    kk_string_t _pat_3_1_0 = _con_x5809->raw__subcmd;
    kk_std_core_types__list _pat_4_1_0 = _con_x5809->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2362, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1_0, _ctx);
      kk_string_drop(_pat_3_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_1_0, _ctx);
      kk_string_drop(_pat_0_1_0, _ctx);
      kk_datatype_ptr_free(_match_x2362, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1_0, _ctx);
      kk_datatype_ptr_decref(_match_x2362, _ctx);
    }
    _x_x5808 = _x_1_0; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5808, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5813__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5813(kk_function_t _fself, kk_box_t _b_x2097, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5813(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5813, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5813(kk_function_t _fself, kk_box_t _b_x2097, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5814;
  kk_hml__parseraw _match_x2361 = kk_hml__parseraw_unbox(_b_x2097, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5815 = kk_hml__as_Parseraw(_match_x2361, _ctx);
    kk_string_t _pat_0_2_0 = _con_x5815->raw__error;
    kk_std_core_types__list _pat_1_2_0 = _con_x5815->raw__flags;
    kk_std_core_types__list _pat_2_2_0 = _con_x5815->raw__options;
    kk_std_core_types__list _x_2_0 = _con_x5815->raw__positionals;
    kk_string_t _pat_3_2_0 = _con_x5815->raw__subcmd;
    kk_std_core_types__list _pat_4_2_0 = _con_x5815->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2361, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2_0, _ctx);
      kk_string_drop(_pat_3_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_2_0, _ctx);
      kk_string_drop(_pat_0_2_0, _ctx);
      kk_datatype_ptr_free(_match_x2361, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2_0, _ctx);
      kk_datatype_ptr_decref(_match_x2361, _ctx);
    }
    _x_x5814 = _x_2_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5814, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5819__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5819(kk_function_t _fself, kk_box_t _b_x2103, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5819(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5819, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5819(kk_function_t _fself, kk_box_t _b_x2103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5820;
  kk_hml__parseraw _match_x2360 = kk_hml__parseraw_unbox(_b_x2103, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5821 = kk_hml__as_Parseraw(_match_x2360, _ctx);
    kk_string_t _pat_0_3_0 = _con_x5821->raw__error;
    kk_std_core_types__list _pat_1_3_0 = _con_x5821->raw__flags;
    kk_std_core_types__list _pat_2_3_0 = _con_x5821->raw__options;
    kk_std_core_types__list _pat_3_3_0 = _con_x5821->raw__positionals;
    kk_string_t _x_3_0 = _con_x5821->raw__subcmd;
    kk_std_core_types__list _pat_4_3_0 = _con_x5821->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2360, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_3_0, _ctx);
      kk_string_drop(_pat_0_3_0, _ctx);
      kk_datatype_ptr_free(_match_x2360, _ctx);
    }
    else {
      kk_string_dup(_x_3_0, _ctx);
      kk_datatype_ptr_decref(_match_x2360, _ctx);
    }
    _x_x5820 = _x_3_0; /*string*/
  }
  return kk_string_box(_x_x5820);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5825__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5825(kk_function_t _fself, kk_box_t _b_x2109, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5825(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5825, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5825(kk_function_t _fself, kk_box_t _b_x2109, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5826;
  kk_hml__parseraw _match_x2359 = kk_hml__parseraw_unbox(_b_x2109, KK_OWNED, _ctx); /*hml/parseraw*/;
  {
    struct kk_hml_Parseraw* _con_x5827 = kk_hml__as_Parseraw(_match_x2359, _ctx);
    kk_string_t _pat_0_4_0 = _con_x5827->raw__error;
    kk_std_core_types__list _pat_1_4_0 = _con_x5827->raw__flags;
    kk_std_core_types__list _pat_2_4_0 = _con_x5827->raw__options;
    kk_std_core_types__list _pat_3_4_0 = _con_x5827->raw__positionals;
    kk_string_t _pat_4_4_0 = _con_x5827->raw__subcmd;
    kk_std_core_types__list _x_4_0 = _con_x5827->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2359, _ctx)) {
      kk_string_drop(_pat_4_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_4_0, _ctx);
      kk_string_drop(_pat_0_4_0, _ctx);
      kk_datatype_ptr_free(_match_x2359, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4_0, _ctx);
      kk_datatype_ptr_decref(_match_x2359, _ctx);
    }
    _x_x5826 = _x_4_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5826, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5836__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5836(kk_function_t _fself, kk_box_t _b_x2115, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5836(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5836, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5836(kk_function_t _fself, kk_box_t _b_x2115, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5837;
  bool b_2_2217 = kk_bool_unbox(_b_x2115); /*bool*/;
  if (b_2_2217) {
    _x_x5837 = false; /*bool*/
  }
  else {
    _x_x5837 = true; /*bool*/
  }
  return kk_bool_box(_x_x5837);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5839__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5839(kk_function_t _fself, kk_box_t _b_x2124, kk_box_t _b_x2125, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5839(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5839, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5842__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5842(kk_function_t _fself, kk_box_t _b_x2119, kk_box_t _b_x2120, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5842(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5842, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5842(kk_function_t _fself, kk_box_t _b_x2119, kk_box_t _b_x2120, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5843;
  kk_std_core_types__list _x_x5844 = kk_std_core_types__list_unbox(_b_x2119, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_hml__clioption _x_x5845 = kk_hml__clioption_unbox(_b_x2120, KK_OWNED, _ctx); /*hml/clioption*/
  _x_x5843 = kk_hml_hc__add__default(_x_x5844, _x_x5845, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5843, _ctx);
}
static kk_box_t kk_hml_hc__cli__parse__args_fun5839(kk_function_t _fself, kk_box_t _b_x2124, kk_box_t _b_x2125, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5840;
  kk_hml__clispec _match_x2356 = kk_hml__clispec_unbox(_b_x2124, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5841 = kk_hml__as_Clispec(_match_x2356, _ctx);
    kk_string_t _pat_0_7_0 = _con_x5841->app__name;
    kk_string_t _pat_1_6_0 = _con_x5841->app__version;
    kk_string_t _pat_2_6_0 = _con_x5841->app__about;
    kk_std_core_types__list _pat_3_6_0 = _con_x5841->app__flags;
    kk_std_core_types__list _x_5_0 = _con_x5841->app__options;
    kk_std_core_types__list _pat_4_6_0 = _con_x5841->app__args;
    kk_std_core_types__list _pat_5_0_0 = _con_x5841->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2356, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_6_0, _ctx);
      kk_string_drop(_pat_2_6_0, _ctx);
      kk_string_drop(_pat_1_6_0, _ctx);
      kk_string_drop(_pat_0_7_0, _ctx);
      kk_datatype_ptr_free(_match_x2356, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5_0, _ctx);
      kk_datatype_ptr_decref(_match_x2356, _ctx);
    }
    _x_x5840 = _x_5_0; /*list<hml/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x5840, _b_x2125, kk_hml_new_hc__cli__parse__args_fun5842(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5849__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5849(kk_function_t _fself, kk_box_t _b_x2148, kk_box_t _b_x2149, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5849(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5849, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5852__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5852(kk_function_t _fself, kk_integer_t _b_x2138, kk_box_t _b_x2139, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5852(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5852, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5852(kk_function_t _fself, kk_integer_t _b_x2138, kk_box_t _b_x2139, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x5853 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x2138, _ctx), _b_x2139, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5853, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5857__t {
  struct kk_function_s _base;
  kk_box_t _b_x2149;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5857(kk_function_t _fself, kk_box_t _b_x2143, kk_box_t _b_x2144, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5857(kk_box_t _b_x2149, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__args_fun5857__t* _self = kk_function_alloc_as(struct kk_hml_hc__cli__parse__args_fun5857__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__cli__parse__args_fun5857, kk_context());
  _self->_b_x2149 = _b_x2149;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5857(kk_function_t _fself, kk_box_t _b_x2143, kk_box_t _b_x2144, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__args_fun5857__t* _self = kk_function_as(struct kk_hml_hc__cli__parse__args_fun5857__t*, _fself, _ctx);
  kk_box_t _b_x2149 = _self->_b_x2149; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2149, _ctx);}, {}, _ctx)
  kk_string_t _x_x5858;
  kk_std_core_types__list _x_x5859 = kk_std_core_types__list_unbox(_b_x2149, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x5860 = kk_string_unbox(_b_x2143); /*string*/
  kk_std_core_types__tuple2 _x_x5861 = kk_std_core_types__tuple2_unbox(_b_x2144, KK_OWNED, _ctx); /*(int, hml/cliarg)*/
  _x_x5858 = kk_hml_hc__check__one__arg(_x_x5859, _x_x5860, _x_x5861, _ctx); /*string*/
  return kk_string_box(_x_x5858);
}
static kk_box_t kk_hml_hc__cli__parse__args_fun5849(kk_function_t _fself, kk_box_t _b_x2148, kk_box_t _b_x2149, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x2140_2153;
  kk_std_core_types__list _x_x5850;
  kk_hml__clispec _match_x2355 = kk_hml__clispec_unbox(_b_x2148, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5851 = kk_hml__as_Clispec(_match_x2355, _ctx);
    kk_string_t _pat_0_8_1 = _con_x5851->app__name;
    kk_string_t _pat_1_7_1 = _con_x5851->app__version;
    kk_string_t _pat_2_7_1 = _con_x5851->app__about;
    kk_std_core_types__list _pat_3_7_1 = _con_x5851->app__flags;
    kk_std_core_types__list _pat_4_7_1 = _con_x5851->app__options;
    kk_std_core_types__list _x_6_1 = _con_x5851->app__args;
    kk_std_core_types__list _pat_5_1_1 = _con_x5851->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2355, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_1, _ctx);
      kk_string_drop(_pat_2_7_1, _ctx);
      kk_string_drop(_pat_1_7_1, _ctx);
      kk_string_drop(_pat_0_8_1, _ctx);
      kk_datatype_ptr_free(_match_x2355, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6_1, _ctx);
      kk_datatype_ptr_decref(_match_x2355, _ctx);
    }
    _x_x5850 = _x_6_1; /*list<hml/cliarg>*/
  }
  _b_x2140_2153 = kk_std_core_list_map_indexed(_x_x5850, kk_hml_new_hc__cli__parse__args_fun5852(_ctx), _ctx); /*list<(int, hml/cliarg)>*/
  kk_box_t _x_x5854;
  kk_string_t _x_x5855 = kk_string_empty(); /*string*/
  _x_x5854 = kk_string_box(_x_x5855); /*10002*/
  return kk_std_core_list_foldl(_b_x2140_2153, _x_x5854, kk_hml_new_hc__cli__parse__args_fun5857(_b_x2149, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5868__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5868(kk_function_t _fself, kk_box_t _b_x2166, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5868(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5868, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5868(kk_function_t _fself, kk_box_t _b_x2166, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5869;
  bool b_0_0_2218 = kk_bool_unbox(_b_x2166); /*bool*/;
  if (b_0_0_2218) {
    _x_x5869 = false; /*bool*/
  }
  else {
    _x_x5869 = true; /*bool*/
  }
  return kk_bool_box(_x_x5869);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5872__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5872(kk_function_t _fself, kk_box_t _b_x2169, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5872(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5872, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5872(kk_function_t _fself, kk_box_t _b_x2169, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5873;
  bool b_1_0_2219 = kk_bool_unbox(_b_x2169); /*bool*/;
  if (b_1_0_2219) {
    _x_x5873 = false; /*bool*/
  }
  else {
    _x_x5873 = true; /*bool*/
  }
  return kk_bool_box(_x_x5873);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5875__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5875(kk_function_t _fself, kk_box_t _b_x2172, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5875(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5875, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5875(kk_function_t _fself, kk_box_t _b_x2172, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5876;
  kk_hml__clispec _match_x2350 = kk_hml__clispec_unbox(_b_x2172, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5877 = kk_hml__as_Clispec(_match_x2350, _ctx);
    kk_string_t _pat_0_11_0 = _con_x5877->app__name;
    kk_string_t _pat_1_7_0_0 = _con_x5877->app__version;
    kk_string_t _pat_2_7_0_0 = _con_x5877->app__about;
    kk_std_core_types__list _pat_3_7_0_0 = _con_x5877->app__flags;
    kk_std_core_types__list _pat_4_7_0_0 = _con_x5877->app__options;
    kk_std_core_types__list _pat_5_2_0 = _con_x5877->app__args;
    kk_std_core_types__list _x_7_0 = _con_x5877->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2350, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0_0, _ctx);
      kk_string_drop(_pat_2_7_0_0, _ctx);
      kk_string_drop(_pat_1_7_0_0, _ctx);
      kk_string_drop(_pat_0_11_0, _ctx);
      kk_datatype_ptr_free(_match_x2350, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7_0, _ctx);
      kk_datatype_ptr_decref(_match_x2350, _ctx);
    }
    _x_x5876 = _x_7_0; /*list<(string, hml/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5876, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5879__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5879(kk_function_t _fself, kk_box_t _b_x2184, kk_box_t _b_x2185, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5879(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5879, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5881__t {
  struct kk_function_s _base;
  kk_string_t name_0_2221;
};
static bool kk_hml_hc__cli__parse__args_fun5881(kk_function_t _fself, kk_box_t _b_x2180, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5881(kk_string_t name_0_2221, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__args_fun5881__t* _self = kk_function_alloc_as(struct kk_hml_hc__cli__parse__args_fun5881__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__cli__parse__args_fun5881, kk_context());
  _self->name_0_2221 = name_0_2221;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml_hc__cli__parse__args_fun5881(kk_function_t _fself, kk_box_t _b_x2180, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__args_fun5881__t* _self = kk_function_as(struct kk_hml_hc__cli__parse__args_fun5881__t*, _fself, _ctx);
  kk_string_t name_0_2221 = _self->name_0_2221; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_2221, _ctx);}, {}, _ctx)
  kk_string_t _x_x5882;
  kk_std_core_types__tuple2 _match_x2349 = kk_std_core_types__tuple2_unbox(_b_x2180, KK_OWNED, _ctx); /*(string, hml/clispec)*/;
  {
    kk_box_t _box_x2176 = _match_x2349.fst;
    kk_box_t _box_x2177 = _match_x2349.snd;
    kk_string_t _x_6_0_0 = kk_string_unbox(_box_x2176);
    kk_string_dup(_x_6_0_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2349, _ctx);
    _x_x5882 = _x_6_0_0; /*string*/
  }
  return kk_string_is_eq(_x_x5882,name_0_2221,kk_context());
}
static kk_box_t kk_hml_hc__cli__parse__args_fun5879(kk_function_t _fself, kk_box_t _b_x2184, kk_box_t _b_x2185, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5880;
  kk_std_core_types__list commands_0_2220 = kk_std_core_types__list_unbox(_b_x2184, KK_OWNED, _ctx); /*list<(string, hml/clispec)>*/;
  kk_string_t name_0_2221 = kk_string_unbox(_b_x2185); /*string*/;
  _x_x5880 = kk_std_core_list_find(commands_0_2220, kk_hml_new_hc__cli__parse__args_fun5881(name_0_2221, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5880, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5887__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5887(kk_function_t _fself, kk_box_t _b_x2191, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5887(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__args_fun5887, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5887(kk_function_t _fself, kk_box_t _b_x2191, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_hml__clispec _x_x5888;
  kk_std_core_types__tuple2 _match_x2348 = kk_std_core_types__tuple2_unbox(_b_x2191, KK_OWNED, _ctx); /*(string, hml/clispec)*/;
  {
    kk_box_t _box_x2187 = _match_x2348.fst;
    kk_box_t _box_x2188 = _match_x2348.snd;
    kk_hml__clispec _x_8_0 = kk_hml__clispec_unbox(_box_x2188, KK_BORROWED, _ctx);
    kk_hml__clispec_dup(_x_8_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2348, _ctx);
    _x_x5888 = _x_8_0; /*hml/clispec*/
  }
  return kk_hml__clispec_box(_x_x5888, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__args_fun5890__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_1;
  kk_std_core_types__list flags_1;
  kk_std_core_types__list positionals_1;
  kk_string_t subcmd_1;
};
static kk_box_t kk_hml_hc__cli__parse__args_fun5890(kk_function_t _fself, kk_box_t _b_x2196, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__args_fun5890(kk_std_core_types__list final__options_1, kk_std_core_types__list flags_1, kk_std_core_types__list positionals_1, kk_string_t subcmd_1, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__args_fun5890__t* _self = kk_function_alloc_as(struct kk_hml_hc__cli__parse__args_fun5890__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__cli__parse__args_fun5890, kk_context());
  _self->final__options_1 = final__options_1;
  _self->flags_1 = flags_1;
  _self->positionals_1 = positionals_1;
  _self->subcmd_1 = subcmd_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__args_fun5890(kk_function_t _fself, kk_box_t _b_x2196, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__args_fun5890__t* _self = kk_function_as(struct kk_hml_hc__cli__parse__args_fun5890__t*, _fself, _ctx);
  kk_std_core_types__list final__options_1 = _self->final__options_1; /* list<(string, string)> */
  kk_std_core_types__list flags_1 = _self->flags_1; /* list<string> */
  kk_std_core_types__list positionals_1 = _self->positionals_1; /* list<string> */
  kk_string_t subcmd_1 = _self->subcmd_1; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_1, _ctx);kk_std_core_types__list_dup(flags_1, _ctx);kk_std_core_types__list_dup(positionals_1, _ctx);kk_string_dup(subcmd_1, _ctx);}, {}, _ctx)
  kk_hml__clioutcome _y_x10881_1_2216 = kk_hml__clioutcome_unbox(_b_x2196, KK_OWNED, _ctx); /*hml/clioutcome*/;
  kk_hml__clioutcome _x_x5891 = kk_hml__mlift_hc__cli__parse__args_11171(final__options_1, flags_1, positionals_1, subcmd_1, _y_x10881_1_2216, _ctx); /*hml/clioutcome*/
  return kk_hml__clioutcome_box(_x_x5891, _ctx);
}

kk_hml__clioutcome kk_hml_hc__cli__parse__args(kk_hml__clispec spec_2, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure clioutcome */ 
  kk_hml__parseraw x_0_11371;
  kk_hml__clispec _x_x5790 = kk_hml__clispec_dup(spec_2, _ctx); /*hml/clispec*/
  x_0_11371 = kk_hml_hc__parse__loop(_x_x5790, args, _ctx); /*hml/parseraw*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_11371, (KK_I32(6)), _ctx);
    kk_box_t _x_x5791 = kk_std_core_hnd_yield_extend(kk_hml_new_hc__cli__parse__args_fun5792(spec_2, _ctx), _ctx); /*10001*/
    return kk_hml__clioutcome_unbox(_x_x5791, KK_OWNED, _ctx);
  }
  {
    kk_string_t error_0;
    kk_box_t _x_x5794;
    kk_box_t _x_x5798;
    kk_hml__parseraw _x_x5799 = kk_hml__parseraw_dup(x_0_11371, _ctx); /*hml/parseraw*/
    _x_x5798 = kk_hml__parseraw_box(_x_x5799, _ctx); /*10000*/
    _x_x5794 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5795(_ctx), _x_x5798, _ctx); /*10001*/
    error_0 = kk_string_unbox(_x_x5794); /*string*/
    kk_std_core_types__list flags_1;
    kk_box_t _x_x5800;
    kk_box_t _x_x5804;
    kk_hml__parseraw _x_x5805 = kk_hml__parseraw_dup(x_0_11371, _ctx); /*hml/parseraw*/
    _x_x5804 = kk_hml__parseraw_box(_x_x5805, _ctx); /*10000*/
    _x_x5800 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5801(_ctx), _x_x5804, _ctx); /*10001*/
    flags_1 = kk_std_core_types__list_unbox(_x_x5800, KK_OWNED, _ctx); /*list<string>*/
    kk_std_core_types__list options_1;
    kk_box_t _x_x5806;
    kk_box_t _x_x5810;
    kk_hml__parseraw _x_x5811 = kk_hml__parseraw_dup(x_0_11371, _ctx); /*hml/parseraw*/
    _x_x5810 = kk_hml__parseraw_box(_x_x5811, _ctx); /*10000*/
    _x_x5806 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5807(_ctx), _x_x5810, _ctx); /*10001*/
    options_1 = kk_std_core_types__list_unbox(_x_x5806, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_std_core_types__list positionals_1;
    kk_box_t _x_x5812;
    kk_box_t _x_x5816;
    kk_hml__parseraw _x_x5817 = kk_hml__parseraw_dup(x_0_11371, _ctx); /*hml/parseraw*/
    _x_x5816 = kk_hml__parseraw_box(_x_x5817, _ctx); /*10000*/
    _x_x5812 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5813(_ctx), _x_x5816, _ctx); /*10001*/
    positionals_1 = kk_std_core_types__list_unbox(_x_x5812, KK_OWNED, _ctx); /*list<string>*/
    kk_string_t subcmd_1;
    kk_box_t _x_x5818;
    kk_box_t _x_x5822;
    kk_hml__parseraw _x_x5823 = kk_hml__parseraw_dup(x_0_11371, _ctx); /*hml/parseraw*/
    _x_x5822 = kk_hml__parseraw_box(_x_x5823, _ctx); /*10000*/
    _x_x5818 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5819(_ctx), _x_x5822, _ctx); /*10001*/
    subcmd_1 = kk_string_unbox(_x_x5818); /*string*/
    kk_std_core_types__list sub__args_0;
    kk_box_t _x_x5824 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5825(_ctx), kk_hml__parseraw_box(x_0_11371, _ctx), _ctx); /*10001*/
    sub__args_0 = kk_std_core_types__list_unbox(_x_x5824, KK_OWNED, _ctx); /*list<string>*/
    bool _match_x2341;
    kk_string_t _x_x5828 = kk_string_dup(error_0, _ctx); /*string*/
    kk_string_t _x_x5829;
    kk_define_string_literal(static, _s_x5830, 8, "__help__", _ctx)
    _x_x5829 = kk_string_dup(_s_x5830, _ctx); /*string*/
    _match_x2341 = kk_string_is_eq(_x_x5828,_x_x5829,kk_context()); /*bool*/
    if (_match_x2341) {
      kk_string_drop(subcmd_1, _ctx);
      kk_std_core_types__list_drop(sub__args_0, _ctx);
      kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_1, _ctx);
      kk_std_core_types__list_drop(options_1, _ctx);
      kk_std_core_types__list_drop(flags_1, _ctx);
      kk_string_drop(error_0, _ctx);
      return kk_hml__new_Help(_ctx);
    }
    {
      bool _match_x2342;
      kk_string_t _x_x5831 = kk_string_dup(error_0, _ctx); /*string*/
      kk_string_t _x_x5832;
      kk_define_string_literal(static, _s_x5833, 11, "__version__", _ctx)
      _x_x5832 = kk_string_dup(_s_x5833, _ctx); /*string*/
      _match_x2342 = kk_string_is_eq(_x_x5831,_x_x5832,kk_context()); /*bool*/
      if (_match_x2342) {
        kk_string_drop(subcmd_1, _ctx);
        kk_std_core_types__list_drop(sub__args_0, _ctx);
        kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_1, _ctx);
        kk_std_core_types__list_drop(options_1, _ctx);
        kk_std_core_types__list_drop(flags_1, _ctx);
        kk_string_drop(error_0, _ctx);
        return kk_hml__new_Version(_ctx);
      }
      {
        bool _x_x1_5_11093_0;
        kk_integer_t _brw_x2357;
        kk_string_t _x_x5834 = kk_string_dup(error_0, _ctx); /*string*/
        _brw_x2357 = kk_std_core_string_chars_fs_count(_x_x5834, _ctx); /*int*/
        bool _brw_x2358 = kk_integer_eq_borrow(_brw_x2357,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2357, _ctx);
        _x_x1_5_11093_0 = _brw_x2358; /*bool*/
        bool _match_x2343;
        kk_box_t _x_x5835 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5836(_ctx), kk_bool_box(_x_x1_5_11093_0), _ctx); /*10001*/
        _match_x2343 = kk_bool_unbox(_x_x5835); /*bool*/
        if (_match_x2343) {
          kk_string_drop(subcmd_1, _ctx);
          kk_std_core_types__list_drop(sub__args_0, _ctx);
          kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_1, _ctx);
          kk_std_core_types__list_drop(options_1, _ctx);
          kk_std_core_types__list_drop(flags_1, _ctx);
          return kk_hml__new_CliError(kk_reuse_null, 0, error_0, _ctx);
        }
        {
          kk_string_drop(error_0, _ctx);
          kk_std_core_types__list final__options_1;
          kk_box_t _x_x5838;
          kk_box_t _x_x5846;
          kk_hml__clispec _x_x5847 = kk_hml__clispec_dup(spec_2, _ctx); /*hml/clispec*/
          _x_x5846 = kk_hml__clispec_box(_x_x5847, _ctx); /*10000*/
          _x_x5838 = kk_std_core_hnd__open_none2(kk_hml_new_hc__cli__parse__args_fun5839(_ctx), _x_x5846, kk_std_core_types__list_box(options_1, _ctx), _ctx); /*10002*/
          final__options_1 = kk_std_core_types__list_unbox(_x_x5838, KK_OWNED, _ctx); /*list<(string, string)>*/
          kk_string_t req__err_0;
          kk_box_t _x_x5848;
          kk_box_t _x_x5862;
          kk_hml__clispec _x_x5863 = kk_hml__clispec_dup(spec_2, _ctx); /*hml/clispec*/
          _x_x5862 = kk_hml__clispec_box(_x_x5863, _ctx); /*10000*/
          kk_box_t _x_x5864;
          kk_std_core_types__list _x_x5865 = kk_std_core_types__list_dup(positionals_1, _ctx); /*list<string>*/
          _x_x5864 = kk_std_core_types__list_box(_x_x5865, _ctx); /*10001*/
          _x_x5848 = kk_std_core_hnd__open_none2(kk_hml_new_hc__cli__parse__args_fun5849(_ctx), _x_x5862, _x_x5864, _ctx); /*10002*/
          req__err_0 = kk_string_unbox(_x_x5848); /*string*/
          bool _x_x1_8_11098_0;
          kk_integer_t _brw_x2353;
          kk_string_t _x_x5866 = kk_string_dup(req__err_0, _ctx); /*string*/
          _brw_x2353 = kk_std_core_string_chars_fs_count(_x_x5866, _ctx); /*int*/
          bool _brw_x2354 = kk_integer_eq_borrow(_brw_x2353,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2353, _ctx);
          _x_x1_8_11098_0 = _brw_x2354; /*bool*/
          bool _match_x2344;
          kk_box_t _x_x5867 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5868(_ctx), kk_bool_box(_x_x1_8_11098_0), _ctx); /*10001*/
          _match_x2344 = kk_bool_unbox(_x_x5867); /*bool*/
          if (_match_x2344) {
            kk_string_drop(subcmd_1, _ctx);
            kk_std_core_types__list_drop(sub__args_0, _ctx);
            kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
            kk_std_core_types__list_drop(positionals_1, _ctx);
            kk_std_core_types__list_drop(flags_1, _ctx);
            kk_std_core_types__list_drop(final__options_1, _ctx);
            return kk_hml__new_CliError(kk_reuse_null, 0, req__err_0, _ctx);
          }
          {
            kk_string_drop(req__err_0, _ctx);
            bool _x_x1_9_11099_0;
            kk_integer_t _brw_x2351;
            kk_string_t _x_x5870 = kk_string_dup(subcmd_1, _ctx); /*string*/
            _brw_x2351 = kk_std_core_string_chars_fs_count(_x_x5870, _ctx); /*int*/
            bool _brw_x2352 = kk_integer_eq_borrow(_brw_x2351,(kk_integer_from_small(0)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2351, _ctx);
            _x_x1_9_11099_0 = _brw_x2352; /*bool*/
            bool _match_x2345;
            kk_box_t _x_x5871 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5872(_ctx), kk_bool_box(_x_x1_9_11099_0), _ctx); /*10001*/
            _match_x2345 = kk_bool_unbox(_x_x5871); /*bool*/
            if (_match_x2345) {
              kk_std_core_types__list _x_x1_10_11100_0;
              kk_box_t _x_x5874 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5875(_ctx), kk_hml__clispec_box(spec_2, _ctx), _ctx); /*10001*/
              _x_x1_10_11100_0 = kk_std_core_types__list_unbox(_x_x5874, KK_OWNED, _ctx); /*list<(string, hml/clispec)>*/
              kk_std_core_types__maybe _match_x2346;
              kk_box_t _x_x5878;
              kk_box_t _x_x5883;
              kk_string_t _x_x5884 = kk_string_dup(subcmd_1, _ctx); /*string*/
              _x_x5883 = kk_string_box(_x_x5884); /*10001*/
              _x_x5878 = kk_std_core_hnd__open_none2(kk_hml_new_hc__cli__parse__args_fun5879(_ctx), kk_std_core_types__list_box(_x_x1_10_11100_0, _ctx), _x_x5883, _ctx); /*10002*/
              _match_x2346 = kk_std_core_types__maybe_unbox(_x_x5878, KK_OWNED, _ctx); /*maybe<(string, hml/clispec)>*/
              if (kk_std_core_types__is_Just(_match_x2346, _ctx)) {
                kk_box_t _box_x2186 = _match_x2346._cons.Just.value;
                kk_std_core_types__tuple2 pair_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x2186, KK_BORROWED, _ctx);
                kk_std_core_types__tuple2_dup(pair_0_0_0, _ctx);
                kk_std_core_types__maybe_drop(_match_x2346, _ctx);
                kk_hml__clioutcome x_1_11374;
                kk_hml__clispec _x_x5885;
                kk_box_t _x_x5886 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__args_fun5887(_ctx), kk_std_core_types__tuple2_box(pair_0_0_0, _ctx), _ctx); /*10001*/
                _x_x5885 = kk_hml__clispec_unbox(_x_x5886, KK_OWNED, _ctx); /*hml/clispec*/
                x_1_11374 = kk_hml_hc__cli__parse__args(_x_x5885, sub__args_0, _ctx); /*hml/clioutcome*/
                if (kk_yielding(kk_context())) {
                  kk_hml__clioutcome_drop(x_1_11374, _ctx);
                  kk_box_t _x_x5889 = kk_std_core_hnd_yield_extend(kk_hml_new_hc__cli__parse__args_fun5890(final__options_1, flags_1, positionals_1, subcmd_1, _ctx), _ctx); /*10001*/
                  return kk_hml__clioutcome_unbox(_x_x5889, KK_OWNED, _ctx);
                }
                if (kk_hml__is_Parsed(x_1_11374, _ctx)) {
                  struct kk_hml_Parsed* _con_x5892 = kk_hml__as_Parsed(x_1_11374, _ctx);
                  kk_hml__cliresult hc__sub_0_0 = _con_x5892->cli__result;
                  struct kk_hml_Cliresult* _con_x5893 = kk_hml__as_Cliresult(hc__sub_0_0, _ctx);
                  kk_reuse_t _ru_x3063 = kk_reuse_null; /*@reuse*/;
                  if kk_likely(kk_datatype_ptr_is_unique(x_1_11374, _ctx)) {
                    _ru_x3063 = (kk_datatype_ptr_reuse(x_1_11374, _ctx));
                  }
                  else {
                    kk_hml__cliresult_dup(hc__sub_0_0, _ctx);
                    kk_datatype_ptr_decref(x_1_11374, _ctx);
                  }
                  kk_hml__cliresult _b_x2197_2213 = hc__sub_0_0; /*hml/cliresult*/;
                  if kk_likely(_ru_x3063!=NULL) {
                    kk_std_core_types__maybe _x_x5895 = kk_std_core_types__new_Just(kk_hml__cliresult_box(_b_x2197_2213, _ctx), _ctx); /*maybe<10024>*/
                    struct kk_hml_Parsed* _con_x5894 = (struct kk_hml_Parsed*)_ru_x3063;
                    _con_x5894->cli__result = kk_hml__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x5895, _ctx);
                    return kk_hml__base_Parsed(_con_x5894, _ctx);
                  }
                  {
                    kk_hml__cliresult _x_x5896;
                    kk_std_core_types__maybe _x_x5897 = kk_std_core_types__new_Just(kk_hml__cliresult_box(_b_x2197_2213, _ctx), _ctx); /*maybe<10024>*/
                    _x_x5896 = kk_hml__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x5897, _ctx); /*hml/cliresult*/
                    return kk_hml__new_Parsed(kk_reuse_null, 0, _x_x5896, _ctx);
                  }
                }
                {
                  kk_string_drop(subcmd_1, _ctx);
                  kk_std_core_types__list_drop(positionals_1, _ctx);
                  kk_std_core_types__list_drop(flags_1, _ctx);
                  kk_std_core_types__list_drop(final__options_1, _ctx);
                  return x_1_11374;
                }
              }
              {
                kk_std_core_types__list_drop(sub__args_0, _ctx);
                kk_std_core_types__list_drop(positionals_1, _ctx);
                kk_std_core_types__list_drop(flags_1, _ctx);
                kk_std_core_types__list_drop(final__options_1, _ctx);
                kk_string_t _x_x5898;
                kk_string_t _x_x5899;
                kk_define_string_literal(static, _s_x5900, 17, "unknown command: ", _ctx)
                _x_x5899 = kk_string_dup(_s_x5900, _ctx); /*string*/
                _x_x5898 = kk_std_core_types__lp__plus__plus__rp_(_x_x5899, subcmd_1, _ctx); /*string*/
                return kk_hml__new_CliError(kk_reuse_null, 0, _x_x5898, _ctx);
              }
            }
            {
              kk_string_drop(subcmd_1, _ctx);
              kk_std_core_types__list_drop(sub__args_0, _ctx);
              kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
              kk_hml__cliresult _x_x5901;
              kk_string_t _x_x5902 = kk_string_empty(); /*string*/
              _x_x5901 = kk_hml__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, _x_x5902, kk_std_core_types__new_Nothing(_ctx), _ctx); /*hml/cliresult*/
              return kk_hml__new_Parsed(kk_reuse_null, 0, _x_x5901, _ctx);
            }
          }
        }
      }
    }
  }
}
extern kk_box_t kk_hml_hc__cli__parse_fun5906(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5907 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x5907, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__or__exit_11173_fun5912__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__or__exit_11173_fun5912(kk_function_t _fself, kk_box_t _b_x2226, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__or__exit_11173_fun5912(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__or__exit_11173_fun5912, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__or__exit_11173_fun5912(kk_function_t _fself, kk_box_t _b_x2226, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5913;
  kk_hml__clispec _x_x5914 = kk_hml__clispec_unbox(_b_x2226, KK_OWNED, _ctx); /*hml/clispec*/
  _x_x5913 = kk_hml_hc__cli__help(_x_x5914, _ctx); /*string*/
  return kk_string_box(_x_x5913);
}


// lift anonymous function
struct kk_hml__mlift_hc__cli__parse__or__exit_11173_fun5919__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__cli__parse__or__exit_11173_fun5919(kk_function_t _fself, kk_box_t _b_x2231, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__cli__parse__or__exit_11173_fun5919(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__cli__parse__or__exit_11173_fun5919, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__cli__parse__or__exit_11173_fun5919(kk_function_t _fself, kk_box_t _b_x2231, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5920;
  kk_string_t _x_x5921;
  kk_hml__clispec _match_x2339;
  kk_box_t _x_x5922 = kk_box_dup(_b_x2231, _ctx); /*10000*/
  _match_x2339 = kk_hml__clispec_unbox(_x_x5922, KK_OWNED, _ctx); /*hml/clispec*/
  {
    struct kk_hml_Clispec* _con_x5923 = kk_hml__as_Clispec(_match_x2339, _ctx);
    kk_string_t _x = _con_x5923->app__name;
    kk_string_t _pat_0_0 = _con_x5923->app__version;
    kk_string_t _pat_1_0 = _con_x5923->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x5923->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x5923->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x5923->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5923->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2339, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2339, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2339, _ctx);
    }
    _x_x5921 = _x; /*string*/
  }
  kk_string_t _x_x5924;
  kk_string_t _x_x5925;
  kk_define_string_literal(static, _s_x5926, 1, " ", _ctx)
  _x_x5925 = kk_string_dup(_s_x5926, _ctx); /*string*/
  kk_string_t _x_x5927;
  kk_hml__clispec _match_x2338 = kk_hml__clispec_unbox(_b_x2231, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5928 = kk_hml__as_Clispec(_match_x2338, _ctx);
    kk_string_t _pat_0_1 = _con_x5928->app__name;
    kk_string_t _x_0 = _con_x5928->app__version;
    kk_string_t _pat_1_1 = _con_x5928->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x5928->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x5928->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x5928->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5928->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2338, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2338, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2338, _ctx);
    }
    _x_x5927 = _x_0; /*string*/
  }
  _x_x5924 = kk_std_core_types__lp__plus__plus__rp_(_x_x5925, _x_x5927, _ctx); /*string*/
  _x_x5920 = kk_std_core_types__lp__plus__plus__rp_(_x_x5921, _x_x5924, _ctx); /*string*/
  return kk_string_box(_x_x5920);
}

kk_hml__cliresult kk_hml__mlift_hc__cli__parse__or__exit_11173(kk_hml__clispec spec, kk_hml__clioutcome _y_x10889, kk_context_t* _ctx) { /* (spec : clispec, clioutcome) -> pure cliresult */ 
  if (kk_hml__is_Parsed(_y_x10889, _ctx)) {
    struct kk_hml_Parsed* _con_x5908 = kk_hml__as_Parsed(_y_x10889, _ctx);
    kk_hml__cliresult r = _con_x5908->cli__result;
    struct kk_hml_Cliresult* _con_x5909 = kk_hml__as_Cliresult(r, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10889, _ctx)) {
      kk_datatype_ptr_free(_y_x10889, _ctx);
    }
    else {
      kk_hml__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(_y_x10889, _ctx);
    }
    return r;
  }
  if (kk_hml__is_Help(_y_x10889, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x5910;
    kk_box_t _x_x5911 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__or__exit_11173_fun5912(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5910 = kk_string_unbox(_x_x5911); /*string*/
    kk_std_core_console_printsln(_x_x5910, _ctx);
    kk_string_t _x_x5915 = kk_string_empty(); /*string*/
    return kk_hml__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5915, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_hml__is_Version(_y_x10889, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x5917;
    kk_box_t _x_x5918 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__cli__parse__or__exit_11173_fun5919(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5917 = kk_string_unbox(_x_x5918); /*string*/
    kk_std_core_console_printsln(_x_x5917, _ctx);
    kk_string_t _x_x5929 = kk_string_empty(); /*string*/
    return kk_hml__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5929, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_hml_CliError* _con_x5931 = kk_hml__as_CliError(_y_x10889, _ctx);
    kk_string_t msg = _con_x5931->cli__error__msg;
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10889, _ctx)) {
      kk_datatype_ptr_free(_y_x10889, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(_y_x10889, _ctx);
    }
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x5932;
    kk_string_t _x_x5933;
    kk_define_string_literal(static, _s_x5934, 7, "error: ", _ctx)
    _x_x5933 = kk_string_dup(_s_x5934, _ctx); /*string*/
    _x_x5932 = kk_std_core_types__lp__plus__plus__rp_(_x_x5933, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x5932, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x5935;
    kk_define_string_literal(static, _s_x5936, 20, "try --help for usage", _ctx)
    _x_x5935 = kk_string_dup(_s_x5936, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x5935, _ctx);
    kk_string_t _x_x5937 = kk_string_empty(); /*string*/
    return kk_hml__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5937, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__cli__parse__or__exit_fun5942__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__or__exit_fun5942(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__or__exit_fun5942(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__or__exit_fun5942, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__or__exit_fun5942(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5943 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x5943, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__or__exit_fun5945__t {
  struct kk_function_s _base;
  kk_hml__clispec spec;
};
static kk_box_t kk_hml_hc__cli__parse__or__exit_fun5945(kk_function_t _fself, kk_box_t _b_x2238, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__or__exit_fun5945(kk_hml__clispec spec, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__or__exit_fun5945__t* _self = kk_function_alloc_as(struct kk_hml_hc__cli__parse__or__exit_fun5945__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__cli__parse__or__exit_fun5945, kk_context());
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__or__exit_fun5945(kk_function_t _fself, kk_box_t _b_x2238, kk_context_t* _ctx) {
  struct kk_hml_hc__cli__parse__or__exit_fun5945__t* _self = kk_function_as(struct kk_hml_hc__cli__parse__or__exit_fun5945__t*, _fself, _ctx);
  kk_hml__clispec spec = _self->spec; /* hml/clispec */
  kk_drop_match(_self, {kk_hml__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_hml__clioutcome _y_x10889_2251 = kk_hml__clioutcome_unbox(_b_x2238, KK_OWNED, _ctx); /*hml/clioutcome*/;
  kk_hml__cliresult _x_x5946 = kk_hml__mlift_hc__cli__parse__or__exit_11173(spec, _y_x10889_2251, _ctx); /*hml/cliresult*/
  return kk_hml__cliresult_box(_x_x5946, _ctx);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__or__exit_fun5951__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__or__exit_fun5951(kk_function_t _fself, kk_box_t _b_x2241, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__or__exit_fun5951(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__or__exit_fun5951, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__or__exit_fun5951(kk_function_t _fself, kk_box_t _b_x2241, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5952;
  kk_hml__clispec _x_x5953 = kk_hml__clispec_unbox(_b_x2241, KK_OWNED, _ctx); /*hml/clispec*/
  _x_x5952 = kk_hml_hc__cli__help(_x_x5953, _ctx); /*string*/
  return kk_string_box(_x_x5952);
}


// lift anonymous function
struct kk_hml_hc__cli__parse__or__exit_fun5958__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__cli__parse__or__exit_fun5958(kk_function_t _fself, kk_box_t _b_x2246, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__cli__parse__or__exit_fun5958(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__cli__parse__or__exit_fun5958, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__cli__parse__or__exit_fun5958(kk_function_t _fself, kk_box_t _b_x2246, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5959;
  kk_string_t _x_x5960;
  kk_hml__clispec _match_x2337;
  kk_box_t _x_x5961 = kk_box_dup(_b_x2246, _ctx); /*10000*/
  _match_x2337 = kk_hml__clispec_unbox(_x_x5961, KK_OWNED, _ctx); /*hml/clispec*/
  {
    struct kk_hml_Clispec* _con_x5962 = kk_hml__as_Clispec(_match_x2337, _ctx);
    kk_string_t _x = _con_x5962->app__name;
    kk_string_t _pat_0_0_0 = _con_x5962->app__version;
    kk_string_t _pat_1_0_0 = _con_x5962->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x5962->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x5962->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x5962->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5962->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2337, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2337, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2337, _ctx);
    }
    _x_x5960 = _x; /*string*/
  }
  kk_string_t _x_x5963;
  kk_string_t _x_x5964;
  kk_define_string_literal(static, _s_x5965, 1, " ", _ctx)
  _x_x5964 = kk_string_dup(_s_x5965, _ctx); /*string*/
  kk_string_t _x_x5966;
  kk_hml__clispec _match_x2336 = kk_hml__clispec_unbox(_b_x2246, KK_OWNED, _ctx); /*hml/clispec*/;
  {
    struct kk_hml_Clispec* _con_x5967 = kk_hml__as_Clispec(_match_x2336, _ctx);
    kk_string_t _pat_0_1 = _con_x5967->app__name;
    kk_string_t _x_0 = _con_x5967->app__version;
    kk_string_t _pat_1_1 = _con_x5967->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x5967->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x5967->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x5967->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5967->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2336, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2336, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2336, _ctx);
    }
    _x_x5966 = _x_0; /*string*/
  }
  _x_x5963 = kk_std_core_types__lp__plus__plus__rp_(_x_x5964, _x_x5966, _ctx); /*string*/
  _x_x5959 = kk_std_core_types__lp__plus__plus__rp_(_x_x5960, _x_x5963, _ctx); /*string*/
  return kk_string_box(_x_x5959);
}

kk_hml__cliresult kk_hml_hc__cli__parse__or__exit(kk_hml__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> <pure,console/console,ndet> cliresult */ 
  kk_hml__clioutcome x_11377;
  kk_hml__clispec _x_x5939 = kk_hml__clispec_dup(spec, _ctx); /*hml/clispec*/
  kk_std_core_types__list _x_x5940;
  kk_box_t _x_x5941 = kk_std_core_hnd__open_none0(kk_hml_new_hc__cli__parse__or__exit_fun5942(_ctx), _ctx); /*10000*/
  _x_x5940 = kk_std_core_types__list_unbox(_x_x5941, KK_OWNED, _ctx); /*list<string>*/
  x_11377 = kk_hml_hc__cli__parse__args(_x_x5939, _x_x5940, _ctx); /*hml/clioutcome*/
  if (kk_yielding(kk_context())) {
    kk_hml__clioutcome_drop(x_11377, _ctx);
    kk_box_t _x_x5944 = kk_std_core_hnd_yield_extend(kk_hml_new_hc__cli__parse__or__exit_fun5945(spec, _ctx), _ctx); /*10001*/
    return kk_hml__cliresult_unbox(_x_x5944, KK_OWNED, _ctx);
  }
  if (kk_hml__is_Parsed(x_11377, _ctx)) {
    struct kk_hml_Parsed* _con_x5947 = kk_hml__as_Parsed(x_11377, _ctx);
    kk_hml__cliresult r = _con_x5947->cli__result;
    struct kk_hml_Cliresult* _con_x5948 = kk_hml__as_Cliresult(r, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(x_11377, _ctx)) {
      kk_datatype_ptr_free(x_11377, _ctx);
    }
    else {
      kk_hml__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(x_11377, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    return r;
  }
  if (kk_hml__is_Help(x_11377, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x5949;
    kk_box_t _x_x5950 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__or__exit_fun5951(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5949 = kk_string_unbox(_x_x5950); /*string*/
    kk_std_core_console_printsln(_x_x5949, _ctx);
    kk_string_t _x_x5954 = kk_string_empty(); /*string*/
    return kk_hml__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5954, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_hml__is_Version(x_11377, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x5956;
    kk_box_t _x_x5957 = kk_std_core_hnd__open_none1(kk_hml_new_hc__cli__parse__or__exit_fun5958(_ctx), kk_hml__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5956 = kk_string_unbox(_x_x5957); /*string*/
    kk_std_core_console_printsln(_x_x5956, _ctx);
    kk_string_t _x_x5968 = kk_string_empty(); /*string*/
    return kk_hml__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5968, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_hml_CliError* _con_x5970 = kk_hml__as_CliError(x_11377, _ctx);
    kk_string_t msg = _con_x5970->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(x_11377, _ctx)) {
      kk_datatype_ptr_free(x_11377, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(x_11377, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x5971;
    kk_string_t _x_x5972;
    kk_define_string_literal(static, _s_x5973, 7, "error: ", _ctx)
    _x_x5972 = kk_string_dup(_s_x5973, _ctx); /*string*/
    _x_x5971 = kk_std_core_types__lp__plus__plus__rp_(_x_x5972, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x5971, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x5974;
    kk_define_string_literal(static, _s_x5975, 20, "try --help for usage", _ctx)
    _x_x5974 = kk_string_dup(_s_x5975, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x5974, _ctx);
    kk_string_t _x_x5976 = kk_string_empty(); /*string*/
    return kk_hml__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5976, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__read__lines_11174_fun5979__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__read__lines_11174_fun5979(kk_function_t _fself, kk_box_t _b_x2257, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__read__lines_11174_fun5979(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__read__lines_11174_fun5979, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__mlift_hc__read__lines_11174_fun5985__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__read__lines_11174_fun5985(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__read__lines_11174_fun5985(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__read__lines_11174_fun5985, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__read__lines_11174_fun5985(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5986;
  kk_char_t _x_x5987 = kk_char_unbox(_b_x2254, KK_OWNED, _ctx); /*char*/
  _x_x5986 = kk_std_core_string_char_fs_string(_x_x5987, _ctx); /*string*/
  return kk_string_box(_x_x5986);
}
static kk_box_t kk_hml__mlift_hc__read__lines_11174_fun5979(kk_function_t _fself, kk_box_t _b_x2257, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2262 = kk_string_unbox(_b_x2257); /*string*/;
  kk_std_core_types__list _x_x5980;
  bool _match_x2332;
  kk_string_t _x_x5981;
  kk_define_string_literal(static, _s_x5982, 1, "\n", _ctx)
  _x_x5981 = kk_string_dup(_s_x5982, _ctx); /*string*/
  kk_string_t _x_x5983 = kk_string_empty(); /*string*/
  _match_x2332 = kk_string_is_eq(_x_x5981,_x_x5983,kk_context()); /*bool*/
  if (_match_x2332) {
    kk_std_core_types__list _b_x2252_2260 = kk_std_core_string_list(s_2262, _ctx); /*list<char>*/;
    kk_function_t _brw_x2333 = kk_hml__new_mlift_hc__read__lines_11174_fun5985(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2334 = kk_std_core_list_map(_b_x2252_2260, _brw_x2333, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2333, _ctx);
    _x_x5980 = _brw_x2334; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x5988;
    kk_define_string_literal(static, _s_x5989, 1, "\n", _ctx)
    _x_x5988 = kk_string_dup(_s_x5989, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2262,_x_x5988,kk_context()); /*vector<string>*/
    _x_x5980 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x5980, _ctx);
}

kk_std_core_types__list kk_hml__mlift_hc__read__lines_11174(kk_string_t _c_x10894, kk_context_t* _ctx) { /* (string) -> list<string> */ 
  kk_box_t _x_x5978 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__read__lines_11174_fun5979(_ctx), kk_string_box(_c_x10894), _ctx); /*10001*/
  return kk_std_core_types__list_unbox(_x_x5978, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_hml__mlift_hc__read__lines_11175_fun5991__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__read__lines_11175_fun5991(kk_function_t _fself, kk_box_t _b_x2266, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__read__lines_11175_fun5991(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__read__lines_11175_fun5991, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__read__lines_11175_fun5991(kk_function_t _fself, kk_box_t _b_x2266, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5992;
  kk_std_core_exn__exception _match_x2331 = kk_std_core_exn__exception_unbox(_b_x2266, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2331.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2331, _ctx);
    _x_x5992 = _x; /*string*/
  }
  return kk_string_box(_x_x5992);
}


// lift anonymous function
struct kk_hml__mlift_hc__read__lines_11175_fun5998__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__mlift_hc__read__lines_11175_fun5998(kk_function_t _fself, kk_box_t _b_x2275, kk_context_t* _ctx);
static kk_function_t kk_hml__new_mlift_hc__read__lines_11175_fun5998(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__mlift_hc__read__lines_11175_fun5998, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__mlift_hc__read__lines_11175_fun5998(kk_function_t _fself, kk_box_t _b_x2275, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5999;
  kk_string_t _x_x6000 = kk_string_unbox(_b_x2275); /*string*/
  _x_x5999 = kk_hml__mlift_hc__read__lines_11174(_x_x6000, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x5999, _ctx);
}

kk_std_core_types__list kk_hml__mlift_hc__read__lines_11175(kk_std_core_exn__error _y_x10892, kk_context_t* _ctx) { /* (error<string>) -> <fsys,exn> list<string> */ 
  kk_string_t x_11380;
  if (kk_std_core_exn__is_Ok(_y_x10892, _ctx)) {
    kk_box_t _box_x2263 = _y_x10892._cons.Ok.result;
    kk_string_t hc____c = kk_string_unbox(_box_x2263);
    kk_string_dup(hc____c, _ctx);
    kk_std_core_exn__error_drop(_y_x10892, _ctx);
    x_11380 = hc____c; /*string*/
  }
  else {
    kk_std_core_exn__exception hc____e = _y_x10892._cons.Error.exception;
    kk_std_core_exn__exception_dup(hc____e, _ctx);
    kk_std_core_exn__error_drop(_y_x10892, _ctx);
    kk_string_t hc____e_0;
    kk_box_t _x_x5990 = kk_std_core_hnd__open_none1(kk_hml__new_mlift_hc__read__lines_11175_fun5991(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
    hc____e_0 = kk_string_unbox(_x_x5990); /*string*/
    kk_string_t _b_x2270_2272;
    kk_string_t _x_x5993;
    kk_define_string_literal(static, _s_x5994, 8, "unwrap: ", _ctx)
    _x_x5993 = kk_string_dup(_s_x5994, _ctx); /*string*/
    kk_string_t _x_x5995 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
    _b_x2270_2272 = kk_std_core_types__lp__plus__plus__rp_(_x_x5993, _x_x5995, _ctx); /*string*/
    kk_box_t _x_x5996 = kk_std_core_exn_throw(_b_x2270_2272, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    x_11380 = kk_string_unbox(_x_x5996); /*string*/
  }
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11380, _ctx);
    kk_box_t _x_x5997 = kk_std_core_hnd_yield_extend(kk_hml__new_mlift_hc__read__lines_11175_fun5998(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x5997, KK_OWNED, _ctx);
  }
  {
    return kk_hml__mlift_hc__read__lines_11174(x_11380, _ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__read__lines_fun6001__t {
  struct kk_function_s _base;
  kk_string_t file__path;
};
static kk_box_t kk_hml_hc__read__lines_fun6001(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__read__lines_fun6001(kk_string_t file__path, kk_context_t* _ctx) {
  struct kk_hml_hc__read__lines_fun6001__t* _self = kk_function_alloc_as(struct kk_hml_hc__read__lines_fun6001__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml_hc__read__lines_fun6001, kk_context());
  _self->file__path = file__path;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml_hc__read__lines_fun6003__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__read__lines_fun6003(kk_function_t _fself, kk_box_t _b_x2279, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__read__lines_fun6003(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__read__lines_fun6003, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__read__lines_fun6003(kk_function_t _fself, kk_box_t _b_x2279, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6004;
  kk_string_t _x_x6005 = kk_string_unbox(_b_x2279); /*string*/
  _x_x6004 = kk_std_os_path_path(_x_x6005, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6004, _ctx);
}


// lift anonymous function
struct kk_hml_hc__read__lines_fun6006__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__read__lines_fun6006(kk_function_t _fself, kk_box_t _b_x2285, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__read__lines_fun6006(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__read__lines_fun6006, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__read__lines_fun6006(kk_function_t _fself, kk_box_t _b_x2285, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6007;
  kk_std_os_path__path _x_x6008 = kk_std_os_path__path_unbox(_b_x2285, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x6007 = kk_std_os_file_read_text_file(_x_x6008, _ctx); /*string*/
  return kk_string_box(_x_x6007);
}
static kk_box_t kk_hml_hc__read__lines_fun6001(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_hml_hc__read__lines_fun6001__t* _self = kk_function_as(struct kk_hml_hc__read__lines_fun6001__t*, _fself, _ctx);
  kk_string_t file__path = _self->file__path; /* string */
  kk_drop_match(_self, {kk_string_dup(file__path, _ctx);}, {}, _ctx)
  kk_std_os_path__path _x_x1_11106;
  kk_box_t _x_x6002 = kk_std_core_hnd__open_none1(kk_hml_new_hc__read__lines_fun6003(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x1_11106 = kk_std_os_path__path_unbox(_x_x6002, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_ssize_t _b_x2282_2288 = (KK_IZ(0)); /*hnd/ev-index*/;
  return kk_std_core_hnd__open_at1(_b_x2282_2288, kk_hml_new_hc__read__lines_fun6006(_ctx), kk_std_os_path__path_box(_x_x1_11106, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml_hc__read__lines_fun6010__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__read__lines_fun6010(kk_function_t _fself, kk_box_t _b_x2292, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__read__lines_fun6010(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__read__lines_fun6010, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__read__lines_fun6010(kk_function_t _fself, kk_box_t _b_x2292, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6011;
  kk_std_core_exn__error _x_x6012 = kk_std_core_exn__error_unbox(_b_x2292, KK_OWNED, _ctx); /*error<string>*/
  _x_x6011 = kk_hml__mlift_hc__read__lines_11175(_x_x6012, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6011, _ctx);
}


// lift anonymous function
struct kk_hml_hc__read__lines_fun6014__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__read__lines_fun6014(kk_function_t _fself, kk_box_t _b_x2296, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__read__lines_fun6014(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__read__lines_fun6014, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__read__lines_fun6014(kk_function_t _fself, kk_box_t _b_x2296, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6015;
  kk_std_core_exn__exception _match_x2329 = kk_std_core_exn__exception_unbox(_b_x2296, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2329.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2329, _ctx);
    _x_x6015 = _x; /*string*/
  }
  return kk_string_box(_x_x6015);
}


// lift anonymous function
struct kk_hml_hc__read__lines_fun6021__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__read__lines_fun6021(kk_function_t _fself, kk_box_t _b_x2305, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__read__lines_fun6021(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__read__lines_fun6021, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__read__lines_fun6021(kk_function_t _fself, kk_box_t _b_x2305, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6022;
  kk_string_t _x_x6023 = kk_string_unbox(_b_x2305); /*string*/
  _x_x6022 = kk_hml__mlift_hc__read__lines_11174(_x_x6023, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6022, _ctx);
}


// lift anonymous function
struct kk_hml_hc__read__lines_fun6024__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__read__lines_fun6024(kk_function_t _fself, kk_box_t _b_x2311, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__read__lines_fun6024(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__read__lines_fun6024, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml_hc__read__lines_fun6030__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__read__lines_fun6030(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__read__lines_fun6030(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__read__lines_fun6030, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__read__lines_fun6030(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6031;
  kk_char_t _x_x6032 = kk_char_unbox(_b_x2308, KK_OWNED, _ctx); /*char*/
  _x_x6031 = kk_std_core_string_char_fs_string(_x_x6032, _ctx); /*string*/
  return kk_string_box(_x_x6031);
}
static kk_box_t kk_hml_hc__read__lines_fun6024(kk_function_t _fself, kk_box_t _b_x2311, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2318 = kk_string_unbox(_b_x2311); /*string*/;
  kk_std_core_types__list _x_x6025;
  bool _match_x2326;
  kk_string_t _x_x6026;
  kk_define_string_literal(static, _s_x6027, 1, "\n", _ctx)
  _x_x6026 = kk_string_dup(_s_x6027, _ctx); /*string*/
  kk_string_t _x_x6028 = kk_string_empty(); /*string*/
  _match_x2326 = kk_string_is_eq(_x_x6026,_x_x6028,kk_context()); /*bool*/
  if (_match_x2326) {
    kk_std_core_types__list _b_x2306_2316 = kk_std_core_string_list(s_2318, _ctx); /*list<char>*/;
    kk_function_t _brw_x2327 = kk_hml_new_hc__read__lines_fun6030(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2328 = kk_std_core_list_map(_b_x2306_2316, _brw_x2327, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2327, _ctx);
    _x_x6025 = _brw_x2328; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x6033;
    kk_define_string_literal(static, _s_x6034, 1, "\n", _ctx)
    _x_x6033 = kk_string_dup(_s_x6034, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2318,_x_x6033,kk_context()); /*vector<string>*/
    _x_x6025 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x6025, _ctx);
}

kk_std_core_types__list kk_hml_hc__read__lines(kk_string_t file__path, kk_context_t* _ctx) { /* (file_path : string) -> <exn,fsys> list<string> */ 
  kk_std_core_exn__error x_11382 = kk_std_core_exn_error_fs_try(kk_hml_new_hc__read__lines_fun6001(file__path, _ctx), _ctx); /*error<string>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_exn__error_drop(x_11382, _ctx);
    kk_box_t _x_x6009 = kk_std_core_hnd_yield_extend(kk_hml_new_hc__read__lines_fun6010(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x6009, KK_OWNED, _ctx);
  }
  {
    kk_string_t x_0_11385;
    if (kk_std_core_exn__is_Ok(x_11382, _ctx)) {
      kk_box_t _box_x2293 = x_11382._cons.Ok.result;
      kk_string_t hc____c = kk_string_unbox(_box_x2293);
      kk_string_dup(hc____c, _ctx);
      kk_std_core_exn__error_drop(x_11382, _ctx);
      x_0_11385 = hc____c; /*string*/
    }
    else {
      kk_std_core_exn__exception hc____e = x_11382._cons.Error.exception;
      kk_std_core_exn__exception_dup(hc____e, _ctx);
      kk_std_core_exn__error_drop(x_11382, _ctx);
      kk_string_t hc____e_0;
      kk_box_t _x_x6013 = kk_std_core_hnd__open_none1(kk_hml_new_hc__read__lines_fun6014(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
      hc____e_0 = kk_string_unbox(_x_x6013); /*string*/
      kk_string_t _b_x2300_2302;
      kk_string_t _x_x6016;
      kk_define_string_literal(static, _s_x6017, 8, "unwrap: ", _ctx)
      _x_x6016 = kk_string_dup(_s_x6017, _ctx); /*string*/
      kk_string_t _x_x6018 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
      _b_x2300_2302 = kk_std_core_types__lp__plus__plus__rp_(_x_x6016, _x_x6018, _ctx); /*string*/
      kk_box_t _x_x6019 = kk_std_core_exn_throw(_b_x2300_2302, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
      x_0_11385 = kk_string_unbox(_x_x6019); /*string*/
    }
    kk_box_t _x_x6020;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_11385, _ctx);
      _x_x6020 = kk_std_core_hnd_yield_extend(kk_hml_new_hc__read__lines_fun6021(_ctx), _ctx); /*10001*/
    }
    else {
      _x_x6020 = kk_std_core_hnd__open_none1(kk_hml_new_hc__read__lines_fun6024(_ctx), kk_string_box(x_0_11385), _ctx); /*10001*/
    }
    return kk_std_core_types__list_unbox(_x_x6020, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_hml_hc__write__lines_fun6037__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml_hc__write__lines_fun6037(kk_function_t _fself, kk_box_t _b_x2321, kk_context_t* _ctx);
static kk_function_t kk_hml_new_hc__write__lines_fun6037(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml_hc__write__lines_fun6037, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml_hc__write__lines_fun6037(kk_function_t _fself, kk_box_t _b_x2321, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6038;
  kk_string_t _x_x6039 = kk_string_unbox(_b_x2321); /*string*/
  _x_x6038 = kk_std_os_path_path(_x_x6039, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6038, _ctx);
}

kk_unit_t kk_hml_hc__write__lines(kk_string_t file__path, kk_std_core_types__list xs, kk_context_t* _ctx) { /* (file_path : string, xs : list<string>) -> <exn,fsys> () */ 
  kk_std_os_path__path _x_x6035;
  kk_box_t _x_x6036 = kk_std_core_hnd__open_none1(kk_hml_new_hc__write__lines_fun6037(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x6035 = kk_std_os_path__path_unbox(_x_x6036, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_string_t _x_x6040;
  kk_string_t _x_x6041;
  kk_define_string_literal(static, _s_x6042, 1, "\n", _ctx)
  _x_x6041 = kk_string_dup(_s_x6042, _ctx); /*string*/
  _x_x6040 = kk_std_core_list_joinsep(xs, _x_x6041, _ctx); /*string*/
  kk_std_os_file_write_text_file(_x_x6035, _x_x6040, kk_std_core_types__new_None(_ctx), _ctx); return kk_Unit;
}

// initialization
void kk_hml__init(kk_context_t* _ctx){
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
  kk_std_os_env__init(_ctx);
  kk_std_os_file__init(_ctx);
  kk_std_os_path__init(_ctx);
  kk_hml__types__init(_ctx);
  kk_parser__init(_ctx);
  kk_api__init(_ctx);
  kk_display__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x3078;
    kk_define_string_literal(static, _s_x3079, 12, "hica-brk@hml", _ctx)
    _x_x3078 = kk_string_dup(_s_x3079, _ctx); /*string*/
    kk_hml_hica_brk_fs__tag = kk_std_core_hnd__new_Htag(_x_x3078, _ctx); /*hnd/htag<hml/hica-brk>*/
  }
}

// termination
void kk_hml__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_hml_hica_brk_fs__tag, _ctx);
  kk_display__done(_ctx);
  kk_api__done(_ctx);
  kk_parser__done(_ctx);
  kk_hml__types__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_os_file__done(_ctx);
  kk_std_os_env__done(_ctx);
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
