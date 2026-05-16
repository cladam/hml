// Koka generated module: examples/basic, koka version: 3.2.3, platform: 64-bit
#include "examples_basic.h"
 
// runtime tag for the effect `:hica-brk`

kk_std_core_hnd__htag kk_examples_basic_hica_brk_fs__tag;
 
// handler for the effect `:hica-brk`

kk_box_t kk_examples_basic_hica_brk_fs__handle(kk_examples_basic__hica_brk hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : hica-brk<e,b>, ret : (res : a) -> e b, action : () -> <hica-brk|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x3129 = kk_std_core_hnd__htag_dup(kk_examples_basic_hica_brk_fs__tag, _ctx); /*hnd/htag<examples/basic/hica-brk>*/
  return kk_std_core_hnd__hhandle(_x_x3129, kk_examples_basic__hica_brk_box(hnd, _ctx), ret, action, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc_assert_fun3135__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc_assert_fun3135(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc_assert_fun3135(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc_assert_fun3135, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc_assert_fun3135(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x3136;
  bool b_0_18 = kk_bool_unbox(_b_x11); /*bool*/;
  if (b_0_18) {
    _x_x3136 = false; /*bool*/
  }
  else {
    _x_x3136 = true; /*bool*/
  }
  return kk_bool_box(_x_x3136);
}

kk_unit_t kk_examples_basic_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x2972;
  kk_box_t _x_x3134 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc_assert_fun3135(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x2972 = kk_bool_unbox(_x_x3134); /*bool*/
  if (_match_x2972) {
    kk_box_t _x_x3137;
    kk_string_t _x_x3138;
    kk_define_string_literal(static, _s_x3139, 16, "assertion failed", _ctx)
    _x_x3138 = kk_string_dup(_s_x3139, _ctx); /*string*/
    _x_x3137 = kk_std_core_exn_throw(_x_x3138, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x3137); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}

kk_examples_basic__cliflag kk_examples_basic_cliflag_fs__copy(kk_examples_basic__cliflag _this, kk_std_core_types__optional flag__name, kk_std_core_types__optional flag__short, kk_std_core_types__optional flag__help, kk_context_t* _ctx) { /* (cliflag, flag_name : ? string, flag_short : ? string, flag_help : ? string) -> cliflag */ 
  kk_string_t _x_x3146;
  if (kk_std_core_types__is_Optional(flag__name, _ctx)) {
    kk_box_t _box_x19 = flag__name._cons._Optional.value;
    kk_string_t _uniq_flag__name_913 = kk_string_unbox(_box_x19);
    kk_string_dup(_uniq_flag__name_913, _ctx);
    kk_std_core_types__optional_drop(flag__name, _ctx);
    _x_x3146 = _uniq_flag__name_913; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__name, _ctx);
    {
      struct kk_examples_basic_Cliflag* _con_x3147 = kk_examples_basic__as_Cliflag(_this, _ctx);
      kk_string_t _x = _con_x3147->flag__name;
      kk_string_dup(_x, _ctx);
      _x_x3146 = _x; /*string*/
    }
  }
  kk_string_t _x_x3148;
  if (kk_std_core_types__is_Optional(flag__short, _ctx)) {
    kk_box_t _box_x20 = flag__short._cons._Optional.value;
    kk_string_t _uniq_flag__short_921 = kk_string_unbox(_box_x20);
    kk_string_dup(_uniq_flag__short_921, _ctx);
    kk_std_core_types__optional_drop(flag__short, _ctx);
    _x_x3148 = _uniq_flag__short_921; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__short, _ctx);
    {
      struct kk_examples_basic_Cliflag* _con_x3149 = kk_examples_basic__as_Cliflag(_this, _ctx);
      kk_string_t _x_0 = _con_x3149->flag__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3148 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3150;
  if (kk_std_core_types__is_Optional(flag__help, _ctx)) {
    kk_box_t _box_x21 = flag__help._cons._Optional.value;
    kk_string_t _uniq_flag__help_929 = kk_string_unbox(_box_x21);
    kk_string_dup(_uniq_flag__help_929, _ctx);
    kk_std_core_types__optional_drop(flag__help, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x3150 = _uniq_flag__help_929; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__help, _ctx);
    {
      struct kk_examples_basic_Cliflag* _con_x3151 = kk_examples_basic__as_Cliflag(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3151->flag__name;
      kk_string_t _pat_1_3 = _con_x3151->flag__short;
      kk_string_t _x_1 = _con_x3151->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3150 = _x_1; /*string*/
    }
  }
  return kk_examples_basic__new_Cliflag(kk_reuse_null, 0, _x_x3146, _x_x3148, _x_x3150, _ctx);
}

kk_string_t kk_examples_basic_cliflag_fs_show(kk_examples_basic__cliflag p, kk_context_t* _ctx) { /* (p : cliflag) -> string */ 
  kk_string_t _x_x3152;
  kk_define_string_literal(static, _s_x3153, 8, "CliFlag(", _ctx)
  _x_x3152 = kk_string_dup(_s_x3153, _ctx); /*string*/
  kk_string_t _x_x3154;
  kk_string_t _x_x3155;
  kk_define_string_literal(static, _s_x3156, 11, "flag_name: ", _ctx)
  _x_x3155 = kk_string_dup(_s_x3156, _ctx); /*string*/
  kk_string_t _x_x3157;
  kk_string_t _x_x3158;
  {
    struct kk_examples_basic_Cliflag* _con_x3159 = kk_examples_basic__as_Cliflag(p, _ctx);
    kk_string_t _x = _con_x3159->flag__name;
    kk_string_dup(_x, _ctx);
    _x_x3158 = _x; /*string*/
  }
  kk_string_t _x_x3160;
  kk_string_t _x_x3161;
  kk_define_string_literal(static, _s_x3162, 2, ", ", _ctx)
  _x_x3161 = kk_string_dup(_s_x3162, _ctx); /*string*/
  kk_string_t _x_x3163;
  kk_string_t _x_x3164;
  kk_define_string_literal(static, _s_x3165, 12, "flag_short: ", _ctx)
  _x_x3164 = kk_string_dup(_s_x3165, _ctx); /*string*/
  kk_string_t _x_x3166;
  kk_string_t _x_x3167;
  {
    struct kk_examples_basic_Cliflag* _con_x3168 = kk_examples_basic__as_Cliflag(p, _ctx);
    kk_string_t _x_0 = _con_x3168->flag__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3167 = _x_0; /*string*/
  }
  kk_string_t _x_x3169;
  kk_string_t _x_x3170;
  kk_define_string_literal(static, _s_x3171, 2, ", ", _ctx)
  _x_x3170 = kk_string_dup(_s_x3171, _ctx); /*string*/
  kk_string_t _x_x3172;
  kk_string_t _x_x3173;
  kk_define_string_literal(static, _s_x3174, 11, "flag_help: ", _ctx)
  _x_x3173 = kk_string_dup(_s_x3174, _ctx); /*string*/
  kk_string_t _x_x3175;
  kk_string_t _x_x3176;
  {
    struct kk_examples_basic_Cliflag* _con_x3177 = kk_examples_basic__as_Cliflag(p, _ctx);
    kk_string_t _pat_0_1 = _con_x3177->flag__name;
    kk_string_t _pat_1_1 = _con_x3177->flag__short;
    kk_string_t _x_1 = _con_x3177->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _x_x3176 = _x_1; /*string*/
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
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3152, _x_x3154, _ctx);
}

kk_examples_basic__clioption kk_examples_basic_clioption_fs__copy(kk_examples_basic__clioption _this, kk_std_core_types__optional opt__name, kk_std_core_types__optional opt__short, kk_std_core_types__optional opt__help, kk_std_core_types__optional opt__default, kk_context_t* _ctx) { /* (clioption, opt_name : ? string, opt_short : ? string, opt_help : ? string, opt_default : ? string) -> clioption */ 
  kk_string_t _x_x3184;
  if (kk_std_core_types__is_Optional(opt__name, _ctx)) {
    kk_box_t _box_x22 = opt__name._cons._Optional.value;
    kk_string_t _uniq_opt__name_1076 = kk_string_unbox(_box_x22);
    kk_string_dup(_uniq_opt__name_1076, _ctx);
    kk_std_core_types__optional_drop(opt__name, _ctx);
    _x_x3184 = _uniq_opt__name_1076; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__name, _ctx);
    {
      struct kk_examples_basic_Clioption* _con_x3185 = kk_examples_basic__as_Clioption(_this, _ctx);
      kk_string_t _x = _con_x3185->opt__name;
      kk_string_dup(_x, _ctx);
      _x_x3184 = _x; /*string*/
    }
  }
  kk_string_t _x_x3186;
  if (kk_std_core_types__is_Optional(opt__short, _ctx)) {
    kk_box_t _box_x23 = opt__short._cons._Optional.value;
    kk_string_t _uniq_opt__short_1084 = kk_string_unbox(_box_x23);
    kk_string_dup(_uniq_opt__short_1084, _ctx);
    kk_std_core_types__optional_drop(opt__short, _ctx);
    _x_x3186 = _uniq_opt__short_1084; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__short, _ctx);
    {
      struct kk_examples_basic_Clioption* _con_x3187 = kk_examples_basic__as_Clioption(_this, _ctx);
      kk_string_t _x_0 = _con_x3187->opt__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3186 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3188;
  if (kk_std_core_types__is_Optional(opt__help, _ctx)) {
    kk_box_t _box_x24 = opt__help._cons._Optional.value;
    kk_string_t _uniq_opt__help_1092 = kk_string_unbox(_box_x24);
    kk_string_dup(_uniq_opt__help_1092, _ctx);
    kk_std_core_types__optional_drop(opt__help, _ctx);
    _x_x3188 = _uniq_opt__help_1092; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__help, _ctx);
    {
      struct kk_examples_basic_Clioption* _con_x3189 = kk_examples_basic__as_Clioption(_this, _ctx);
      kk_string_t _x_1 = _con_x3189->opt__help;
      kk_string_dup(_x_1, _ctx);
      _x_x3188 = _x_1; /*string*/
    }
  }
  kk_string_t _x_x3190;
  if (kk_std_core_types__is_Optional(opt__default, _ctx)) {
    kk_box_t _box_x25 = opt__default._cons._Optional.value;
    kk_string_t _uniq_opt__default_1100 = kk_string_unbox(_box_x25);
    kk_string_dup(_uniq_opt__default_1100, _ctx);
    kk_std_core_types__optional_drop(opt__default, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(4)), _ctx);
    _x_x3190 = _uniq_opt__default_1100; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__default, _ctx);
    {
      struct kk_examples_basic_Clioption* _con_x3191 = kk_examples_basic__as_Clioption(_this, _ctx);
      kk_string_t _pat_0_3 = _con_x3191->opt__name;
      kk_string_t _pat_1_4 = _con_x3191->opt__short;
      kk_string_t _pat_2_3 = _con_x3191->opt__help;
      kk_string_t _x_2 = _con_x3191->opt__default;
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
      _x_x3190 = _x_2; /*string*/
    }
  }
  return kk_examples_basic__new_Clioption(kk_reuse_null, 0, _x_x3184, _x_x3186, _x_x3188, _x_x3190, _ctx);
}

kk_string_t kk_examples_basic_clioption_fs_show(kk_examples_basic__clioption p, kk_context_t* _ctx) { /* (p : clioption) -> string */ 
  kk_string_t _x_x3192;
  kk_define_string_literal(static, _s_x3193, 10, "CliOption(", _ctx)
  _x_x3192 = kk_string_dup(_s_x3193, _ctx); /*string*/
  kk_string_t _x_x3194;
  kk_string_t _x_x3195;
  kk_define_string_literal(static, _s_x3196, 10, "opt_name: ", _ctx)
  _x_x3195 = kk_string_dup(_s_x3196, _ctx); /*string*/
  kk_string_t _x_x3197;
  kk_string_t _x_x3198;
  {
    struct kk_examples_basic_Clioption* _con_x3199 = kk_examples_basic__as_Clioption(p, _ctx);
    kk_string_t _x = _con_x3199->opt__name;
    kk_string_dup(_x, _ctx);
    _x_x3198 = _x; /*string*/
  }
  kk_string_t _x_x3200;
  kk_string_t _x_x3201;
  kk_define_string_literal(static, _s_x3202, 2, ", ", _ctx)
  _x_x3201 = kk_string_dup(_s_x3202, _ctx); /*string*/
  kk_string_t _x_x3203;
  kk_string_t _x_x3204;
  kk_define_string_literal(static, _s_x3205, 11, "opt_short: ", _ctx)
  _x_x3204 = kk_string_dup(_s_x3205, _ctx); /*string*/
  kk_string_t _x_x3206;
  kk_string_t _x_x3207;
  {
    struct kk_examples_basic_Clioption* _con_x3208 = kk_examples_basic__as_Clioption(p, _ctx);
    kk_string_t _x_0 = _con_x3208->opt__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3207 = _x_0; /*string*/
  }
  kk_string_t _x_x3209;
  kk_string_t _x_x3210;
  kk_define_string_literal(static, _s_x3211, 2, ", ", _ctx)
  _x_x3210 = kk_string_dup(_s_x3211, _ctx); /*string*/
  kk_string_t _x_x3212;
  kk_string_t _x_x3213;
  kk_define_string_literal(static, _s_x3214, 10, "opt_help: ", _ctx)
  _x_x3213 = kk_string_dup(_s_x3214, _ctx); /*string*/
  kk_string_t _x_x3215;
  kk_string_t _x_x3216;
  {
    struct kk_examples_basic_Clioption* _con_x3217 = kk_examples_basic__as_Clioption(p, _ctx);
    kk_string_t _x_1 = _con_x3217->opt__help;
    kk_string_dup(_x_1, _ctx);
    _x_x3216 = _x_1; /*string*/
  }
  kk_string_t _x_x3218;
  kk_string_t _x_x3219;
  kk_define_string_literal(static, _s_x3220, 2, ", ", _ctx)
  _x_x3219 = kk_string_dup(_s_x3220, _ctx); /*string*/
  kk_string_t _x_x3221;
  kk_string_t _x_x3222;
  kk_define_string_literal(static, _s_x3223, 13, "opt_default: ", _ctx)
  _x_x3222 = kk_string_dup(_s_x3223, _ctx); /*string*/
  kk_string_t _x_x3224;
  kk_string_t _x_x3225;
  {
    struct kk_examples_basic_Clioption* _con_x3226 = kk_examples_basic__as_Clioption(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3226->opt__name;
    kk_string_t _pat_1_2 = _con_x3226->opt__short;
    kk_string_t _pat_2_2 = _con_x3226->opt__help;
    kk_string_t _x_2 = _con_x3226->opt__default;
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
    _x_x3225 = _x_2; /*string*/
  }
  kk_string_t _x_x3227;
  kk_define_string_literal(static, _s_x3228, 1, ")", _ctx)
  _x_x3227 = kk_string_dup(_s_x3228, _ctx); /*string*/
  _x_x3224 = kk_std_core_types__lp__plus__plus__rp_(_x_x3225, _x_x3227, _ctx); /*string*/
  _x_x3221 = kk_std_core_types__lp__plus__plus__rp_(_x_x3222, _x_x3224, _ctx); /*string*/
  _x_x3218 = kk_std_core_types__lp__plus__plus__rp_(_x_x3219, _x_x3221, _ctx); /*string*/
  _x_x3215 = kk_std_core_types__lp__plus__plus__rp_(_x_x3216, _x_x3218, _ctx); /*string*/
  _x_x3212 = kk_std_core_types__lp__plus__plus__rp_(_x_x3213, _x_x3215, _ctx); /*string*/
  _x_x3209 = kk_std_core_types__lp__plus__plus__rp_(_x_x3210, _x_x3212, _ctx); /*string*/
  _x_x3206 = kk_std_core_types__lp__plus__plus__rp_(_x_x3207, _x_x3209, _ctx); /*string*/
  _x_x3203 = kk_std_core_types__lp__plus__plus__rp_(_x_x3204, _x_x3206, _ctx); /*string*/
  _x_x3200 = kk_std_core_types__lp__plus__plus__rp_(_x_x3201, _x_x3203, _ctx); /*string*/
  _x_x3197 = kk_std_core_types__lp__plus__plus__rp_(_x_x3198, _x_x3200, _ctx); /*string*/
  _x_x3194 = kk_std_core_types__lp__plus__plus__rp_(_x_x3195, _x_x3197, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3192, _x_x3194, _ctx);
}

kk_examples_basic__cliarg kk_examples_basic_cliarg_fs__copy(kk_examples_basic__cliarg _this, kk_std_core_types__optional arg__name, kk_std_core_types__optional arg__help, kk_std_core_types__optional arg__required, kk_context_t* _ctx) { /* (cliarg, arg_name : ? string, arg_help : ? string, arg_required : ? bool) -> cliarg */ 
  kk_string_t _x_x3232;
  if (kk_std_core_types__is_Optional(arg__name, _ctx)) {
    kk_box_t _box_x26 = arg__name._cons._Optional.value;
    kk_string_t _uniq_arg__name_1271 = kk_string_unbox(_box_x26);
    kk_string_dup(_uniq_arg__name_1271, _ctx);
    kk_std_core_types__optional_drop(arg__name, _ctx);
    _x_x3232 = _uniq_arg__name_1271; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__name, _ctx);
    {
      struct kk_examples_basic_Cliarg* _con_x3233 = kk_examples_basic__as_Cliarg(_this, _ctx);
      kk_string_t _x = _con_x3233->arg__name;
      kk_string_dup(_x, _ctx);
      _x_x3232 = _x; /*string*/
    }
  }
  kk_string_t _x_x3234;
  if (kk_std_core_types__is_Optional(arg__help, _ctx)) {
    kk_box_t _box_x27 = arg__help._cons._Optional.value;
    kk_string_t _uniq_arg__help_1279 = kk_string_unbox(_box_x27);
    kk_string_dup(_uniq_arg__help_1279, _ctx);
    kk_std_core_types__optional_drop(arg__help, _ctx);
    _x_x3234 = _uniq_arg__help_1279; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__help, _ctx);
    {
      struct kk_examples_basic_Cliarg* _con_x3235 = kk_examples_basic__as_Cliarg(_this, _ctx);
      kk_string_t _x_0 = _con_x3235->arg__help;
      kk_string_dup(_x_0, _ctx);
      _x_x3234 = _x_0; /*string*/
    }
  }
  bool _x_x3236;
  if (kk_std_core_types__is_Optional(arg__required, _ctx)) {
    kk_box_t _box_x28 = arg__required._cons._Optional.value;
    bool _uniq_arg__required_1287 = kk_bool_unbox(_box_x28);
    kk_std_core_types__optional_drop(arg__required, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x3236 = _uniq_arg__required_1287; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(arg__required, _ctx);
    {
      struct kk_examples_basic_Cliarg* _con_x3237 = kk_examples_basic__as_Cliarg(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3237->arg__name;
      kk_string_t _pat_1_3 = _con_x3237->arg__help;
      bool _x_1 = _con_x3237->arg__required;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3236 = _x_1; /*bool*/
    }
  }
  return kk_examples_basic__new_Cliarg(kk_reuse_null, 0, _x_x3232, _x_x3234, _x_x3236, _ctx);
}

kk_examples_basic__clispec kk_examples_basic_clispec_fs__copy(kk_examples_basic__clispec _this, kk_std_core_types__optional app__name, kk_std_core_types__optional app__version, kk_std_core_types__optional app__about, kk_std_core_types__optional app__flags, kk_std_core_types__optional app__options, kk_std_core_types__optional app__args, kk_std_core_types__optional app__commands, kk_context_t* _ctx) { /* (clispec, app_name : ? string, app_version : ? string, app_about : ? string, app_flags : ? (list<cliflag>), app_options : ? (list<clioption>), app_args : ? (list<cliarg>), app_commands : ? (list<(string, clispec)>)) -> clispec */ 
  kk_string_t _x_x3245;
  if (kk_std_core_types__is_Optional(app__name, _ctx)) {
    kk_box_t _box_x29 = app__name._cons._Optional.value;
    kk_string_t _uniq_app__name_1361 = kk_string_unbox(_box_x29);
    kk_string_dup(_uniq_app__name_1361, _ctx);
    kk_std_core_types__optional_drop(app__name, _ctx);
    _x_x3245 = _uniq_app__name_1361; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__name, _ctx);
    {
      struct kk_examples_basic_Clispec* _con_x3246 = kk_examples_basic__as_Clispec(_this, _ctx);
      kk_string_t _x = _con_x3246->app__name;
      kk_string_dup(_x, _ctx);
      _x_x3245 = _x; /*string*/
    }
  }
  kk_string_t _x_x3247;
  if (kk_std_core_types__is_Optional(app__version, _ctx)) {
    kk_box_t _box_x30 = app__version._cons._Optional.value;
    kk_string_t _uniq_app__version_1369 = kk_string_unbox(_box_x30);
    kk_string_dup(_uniq_app__version_1369, _ctx);
    kk_std_core_types__optional_drop(app__version, _ctx);
    _x_x3247 = _uniq_app__version_1369; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__version, _ctx);
    {
      struct kk_examples_basic_Clispec* _con_x3248 = kk_examples_basic__as_Clispec(_this, _ctx);
      kk_string_t _x_0 = _con_x3248->app__version;
      kk_string_dup(_x_0, _ctx);
      _x_x3247 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3249;
  if (kk_std_core_types__is_Optional(app__about, _ctx)) {
    kk_box_t _box_x31 = app__about._cons._Optional.value;
    kk_string_t _uniq_app__about_1377 = kk_string_unbox(_box_x31);
    kk_string_dup(_uniq_app__about_1377, _ctx);
    kk_std_core_types__optional_drop(app__about, _ctx);
    _x_x3249 = _uniq_app__about_1377; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__about, _ctx);
    {
      struct kk_examples_basic_Clispec* _con_x3250 = kk_examples_basic__as_Clispec(_this, _ctx);
      kk_string_t _x_1 = _con_x3250->app__about;
      kk_string_dup(_x_1, _ctx);
      _x_x3249 = _x_1; /*string*/
    }
  }
  kk_std_core_types__list _x_x3251;
  if (kk_std_core_types__is_Optional(app__flags, _ctx)) {
    kk_box_t _box_x32 = app__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_app__flags_1385 = kk_std_core_types__list_unbox(_box_x32, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__flags_1385, _ctx);
    kk_std_core_types__optional_drop(app__flags, _ctx);
    _x_x3251 = _uniq_app__flags_1385; /*list<examples/basic/cliflag>*/
  }
  else {
    kk_std_core_types__optional_drop(app__flags, _ctx);
    {
      struct kk_examples_basic_Clispec* _con_x3252 = kk_examples_basic__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3252->app__flags;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3251 = _x_2; /*list<examples/basic/cliflag>*/
    }
  }
  kk_std_core_types__list _x_x3253;
  if (kk_std_core_types__is_Optional(app__options, _ctx)) {
    kk_box_t _box_x33 = app__options._cons._Optional.value;
    kk_std_core_types__list _uniq_app__options_1393 = kk_std_core_types__list_unbox(_box_x33, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__options_1393, _ctx);
    kk_std_core_types__optional_drop(app__options, _ctx);
    _x_x3253 = _uniq_app__options_1393; /*list<examples/basic/clioption>*/
  }
  else {
    kk_std_core_types__optional_drop(app__options, _ctx);
    {
      struct kk_examples_basic_Clispec* _con_x3254 = kk_examples_basic__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_3 = _con_x3254->app__options;
      kk_std_core_types__list_dup(_x_3, _ctx);
      _x_x3253 = _x_3; /*list<examples/basic/clioption>*/
    }
  }
  kk_std_core_types__list _x_x3255;
  if (kk_std_core_types__is_Optional(app__args, _ctx)) {
    kk_box_t _box_x34 = app__args._cons._Optional.value;
    kk_std_core_types__list _uniq_app__args_1401 = kk_std_core_types__list_unbox(_box_x34, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__args_1401, _ctx);
    kk_std_core_types__optional_drop(app__args, _ctx);
    _x_x3255 = _uniq_app__args_1401; /*list<examples/basic/cliarg>*/
  }
  else {
    kk_std_core_types__optional_drop(app__args, _ctx);
    {
      struct kk_examples_basic_Clispec* _con_x3256 = kk_examples_basic__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_4 = _con_x3256->app__args;
      kk_std_core_types__list_dup(_x_4, _ctx);
      _x_x3255 = _x_4; /*list<examples/basic/cliarg>*/
    }
  }
  kk_std_core_types__list _x_x3257;
  if (kk_std_core_types__is_Optional(app__commands, _ctx)) {
    kk_box_t _box_x35 = app__commands._cons._Optional.value;
    kk_std_core_types__list _uniq_app__commands_1409 = kk_std_core_types__list_unbox(_box_x35, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__commands_1409, _ctx);
    kk_std_core_types__optional_drop(app__commands, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(7)), _ctx);
    _x_x3257 = _uniq_app__commands_1409; /*list<(string, examples/basic/clispec)>*/
  }
  else {
    kk_std_core_types__optional_drop(app__commands, _ctx);
    {
      struct kk_examples_basic_Clispec* _con_x3258 = kk_examples_basic__as_Clispec(_this, _ctx);
      kk_string_t _pat_0_6 = _con_x3258->app__name;
      kk_string_t _pat_1_7 = _con_x3258->app__version;
      kk_string_t _pat_2_6 = _con_x3258->app__about;
      kk_std_core_types__list _pat_3_6 = _con_x3258->app__flags;
      kk_std_core_types__list _pat_4_6 = _con_x3258->app__options;
      kk_std_core_types__list _pat_5_6 = _con_x3258->app__args;
      kk_std_core_types__list _x_5 = _con_x3258->app__commands;
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
      _x_x3257 = _x_5; /*list<(string, examples/basic/clispec)>*/
    }
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x3245, _x_x3247, _x_x3249, _x_x3251, _x_x3253, _x_x3255, _x_x3257, _ctx);
}

kk_examples_basic__cliresult kk_examples_basic_cliresult_fs__copy(kk_examples_basic__cliresult _this, kk_std_core_types__optional cli__flags, kk_std_core_types__optional cli__options, kk_std_core_types__optional cli__positionals, kk_std_core_types__optional cli__command, kk_std_core_types__optional cli__sub, kk_context_t* _ctx) { /* (cliresult, cli_flags : ? (list<string>), cli_options : ? (list<(string, string)>), cli_positionals : ? (list<string>), cli_command : ? string, cli_sub : ? (maybe<cliresult>)) -> cliresult */ 
  kk_std_core_types__list _x_x3264;
  if (kk_std_core_types__is_Optional(cli__flags, _ctx)) {
    kk_box_t _box_x36 = cli__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__flags_1471 = kk_std_core_types__list_unbox(_box_x36, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__flags_1471, _ctx);
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    _x_x3264 = _uniq_cli__flags_1471; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    {
      struct kk_examples_basic_Cliresult* _con_x3265 = kk_examples_basic__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x = _con_x3265->cli__flags;
      kk_std_core_types__list_dup(_x, _ctx);
      _x_x3264 = _x; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3266;
  if (kk_std_core_types__is_Optional(cli__options, _ctx)) {
    kk_box_t _box_x37 = cli__options._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__options_1479 = kk_std_core_types__list_unbox(_box_x37, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__options_1479, _ctx);
    kk_std_core_types__optional_drop(cli__options, _ctx);
    _x_x3266 = _uniq_cli__options_1479; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__options, _ctx);
    {
      struct kk_examples_basic_Cliresult* _con_x3267 = kk_examples_basic__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3267->cli__options;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3266 = _x_0; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3268;
  if (kk_std_core_types__is_Optional(cli__positionals, _ctx)) {
    kk_box_t _box_x38 = cli__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__positionals_1487 = kk_std_core_types__list_unbox(_box_x38, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__positionals_1487, _ctx);
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    _x_x3268 = _uniq_cli__positionals_1487; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    {
      struct kk_examples_basic_Cliresult* _con_x3269 = kk_examples_basic__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3269->cli__positionals;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3268 = _x_1; /*list<string>*/
    }
  }
  kk_string_t _x_x3270;
  if (kk_std_core_types__is_Optional(cli__command, _ctx)) {
    kk_box_t _box_x39 = cli__command._cons._Optional.value;
    kk_string_t _uniq_cli__command_1495 = kk_string_unbox(_box_x39);
    kk_string_dup(_uniq_cli__command_1495, _ctx);
    kk_std_core_types__optional_drop(cli__command, _ctx);
    _x_x3270 = _uniq_cli__command_1495; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(cli__command, _ctx);
    {
      struct kk_examples_basic_Cliresult* _con_x3271 = kk_examples_basic__as_Cliresult(_this, _ctx);
      kk_string_t _x_2 = _con_x3271->cli__command;
      kk_string_dup(_x_2, _ctx);
      _x_x3270 = _x_2; /*string*/
    }
  }
  kk_std_core_types__maybe _x_x3272;
  if (kk_std_core_types__is_Optional(cli__sub, _ctx)) {
    kk_box_t _box_x40 = cli__sub._cons._Optional.value;
    kk_std_core_types__maybe _uniq_cli__sub_1503 = kk_std_core_types__maybe_unbox(_box_x40, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_dup(_uniq_cli__sub_1503, _ctx);
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3272 = _uniq_cli__sub_1503; /*maybe<examples/basic/cliresult>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    {
      struct kk_examples_basic_Cliresult* _con_x3273 = kk_examples_basic__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _pat_0_4 = _con_x3273->cli__flags;
      kk_std_core_types__list _pat_1_5 = _con_x3273->cli__options;
      kk_std_core_types__list _pat_2_4 = _con_x3273->cli__positionals;
      kk_string_t _pat_3_4 = _con_x3273->cli__command;
      kk_std_core_types__maybe _x_3 = _con_x3273->cli__sub;
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
      _x_x3272 = _x_3; /*maybe<examples/basic/cliresult>*/
    }
  }
  return kk_examples_basic__new_Cliresult(kk_reuse_null, 0, _x_x3264, _x_x3266, _x_x3268, _x_x3270, _x_x3272, _ctx);
}

kk_string_t kk_examples_basic_cliarg_fs_show(kk_examples_basic__cliarg p, kk_context_t* _ctx) { /* (p : cliarg) -> string */ 
  kk_string_t _x_x3280;
  kk_define_string_literal(static, _s_x3281, 7, "CliArg(", _ctx)
  _x_x3280 = kk_string_dup(_s_x3281, _ctx); /*string*/
  kk_string_t _x_x3282;
  kk_string_t _x_x3283;
  kk_define_string_literal(static, _s_x3284, 10, "arg_name: ", _ctx)
  _x_x3283 = kk_string_dup(_s_x3284, _ctx); /*string*/
  kk_string_t _x_x3285;
  kk_string_t _x_x3286;
  {
    struct kk_examples_basic_Cliarg* _con_x3287 = kk_examples_basic__as_Cliarg(p, _ctx);
    kk_string_t _x = _con_x3287->arg__name;
    kk_string_dup(_x, _ctx);
    _x_x3286 = _x; /*string*/
  }
  kk_string_t _x_x3288;
  kk_string_t _x_x3289;
  kk_define_string_literal(static, _s_x3290, 2, ", ", _ctx)
  _x_x3289 = kk_string_dup(_s_x3290, _ctx); /*string*/
  kk_string_t _x_x3291;
  kk_string_t _x_x3292;
  kk_define_string_literal(static, _s_x3293, 10, "arg_help: ", _ctx)
  _x_x3292 = kk_string_dup(_s_x3293, _ctx); /*string*/
  kk_string_t _x_x3294;
  kk_string_t _x_x3295;
  {
    struct kk_examples_basic_Cliarg* _con_x3296 = kk_examples_basic__as_Cliarg(p, _ctx);
    kk_string_t _x_0 = _con_x3296->arg__help;
    kk_string_dup(_x_0, _ctx);
    _x_x3295 = _x_0; /*string*/
  }
  kk_string_t _x_x3297;
  kk_string_t _x_x3298;
  kk_define_string_literal(static, _s_x3299, 2, ", ", _ctx)
  _x_x3298 = kk_string_dup(_s_x3299, _ctx); /*string*/
  kk_string_t _x_x3300;
  kk_string_t _x_x3301;
  kk_define_string_literal(static, _s_x3302, 14, "arg_required: ", _ctx)
  _x_x3301 = kk_string_dup(_s_x3302, _ctx); /*string*/
  kk_string_t _x_x3303;
  kk_string_t _x_x3304;
  {
    struct kk_examples_basic_Cliarg* _con_x3305 = kk_examples_basic__as_Cliarg(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3305->arg__name;
    kk_string_t _pat_1_1 = _con_x3305->arg__help;
    bool _x_1 = _con_x3305->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_datatype_ptr_decref(p, _ctx);
    }
    if (_x_1) {
      kk_define_string_literal(static, _s_x3306, 4, "True", _ctx)
      _x_x3304 = kk_string_dup(_s_x3306, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(static, _s_x3307, 5, "False", _ctx)
      _x_x3304 = kk_string_dup(_s_x3307, _ctx); /*string*/
    }
  }
  kk_string_t _x_x3308;
  kk_define_string_literal(static, _s_x3309, 1, ")", _ctx)
  _x_x3308 = kk_string_dup(_s_x3309, _ctx); /*string*/
  _x_x3303 = kk_std_core_types__lp__plus__plus__rp_(_x_x3304, _x_x3308, _ctx); /*string*/
  _x_x3300 = kk_std_core_types__lp__plus__plus__rp_(_x_x3301, _x_x3303, _ctx); /*string*/
  _x_x3297 = kk_std_core_types__lp__plus__plus__rp_(_x_x3298, _x_x3300, _ctx); /*string*/
  _x_x3294 = kk_std_core_types__lp__plus__plus__rp_(_x_x3295, _x_x3297, _ctx); /*string*/
  _x_x3291 = kk_std_core_types__lp__plus__plus__rp_(_x_x3292, _x_x3294, _ctx); /*string*/
  _x_x3288 = kk_std_core_types__lp__plus__plus__rp_(_x_x3289, _x_x3291, _ctx); /*string*/
  _x_x3285 = kk_std_core_types__lp__plus__plus__rp_(_x_x3286, _x_x3288, _ctx); /*string*/
  _x_x3282 = kk_std_core_types__lp__plus__plus__rp_(_x_x3283, _x_x3285, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3280, _x_x3282, _ctx);
}


// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3315__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3315(kk_function_t _fself, kk_string_t _x1_x3314, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3315(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_cliresult_fs_show_fun3315, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_cliresult_fs_show_fun3315(kk_function_t _fself, kk_string_t _x1_x3314, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3314, _ctx);
}


// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3320__t {
  struct kk_function_s _base;
  kk_function_t _b_x42_59;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3320(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3320(kk_function_t _b_x42_59, kk_context_t* _ctx) {
  struct kk_examples_basic_cliresult_fs_show_fun3320__t* _self = kk_function_alloc_as(struct kk_examples_basic_cliresult_fs_show_fun3320__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_cliresult_fs_show_fun3320, kk_context());
  _self->_b_x42_59 = _b_x42_59;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_cliresult_fs_show_fun3320(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx) {
  struct kk_examples_basic_cliresult_fs_show_fun3320__t* _self = kk_function_as(struct kk_examples_basic_cliresult_fs_show_fun3320__t*, _fself, _ctx);
  kk_function_t _b_x42_59 = _self->_b_x42_59; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x42_59, _ctx);}, {}, _ctx)
  kk_string_t _x_x3321 = kk_string_unbox(_b_x43); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x42_59, (_b_x42_59, _x_x3321, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3327__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3327(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3327(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_cliresult_fs_show_fun3327, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3328__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3328(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3328(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_cliresult_fs_show_fun3328, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_cliresult_fs_show_fun3328(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3329 = kk_string_unbox(_b_x47); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3329, _ctx);
}


// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3330__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3330(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3330(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_cliresult_fs_show_fun3330, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_cliresult_fs_show_fun3330(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3331 = kk_string_unbox(_b_x48); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3331, _ctx);
}
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3327(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_examples_basic_cliresult_fs_new_show_fun3328(_ctx), kk_examples_basic_cliresult_fs_new_show_fun3330(_ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3336__t {
  struct kk_function_s _base;
  kk_function_t _b_x50_61;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3336(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3336(kk_function_t _b_x50_61, kk_context_t* _ctx) {
  struct kk_examples_basic_cliresult_fs_show_fun3336__t* _self = kk_function_alloc_as(struct kk_examples_basic_cliresult_fs_show_fun3336__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_cliresult_fs_show_fun3336, kk_context());
  _self->_b_x50_61 = _b_x50_61;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_cliresult_fs_show_fun3336(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  struct kk_examples_basic_cliresult_fs_show_fun3336__t* _self = kk_function_as(struct kk_examples_basic_cliresult_fs_show_fun3336__t*, _fself, _ctx);
  kk_function_t _b_x50_61 = _self->_b_x50_61; /* ((string, string)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x50_61, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3337 = kk_std_core_types__tuple2_unbox(_b_x51, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x50_61, (_b_x50_61, _x_x3337, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3344__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3344(kk_function_t _fself, kk_string_t _x1_x3343, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3344(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_cliresult_fs_show_fun3344, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_cliresult_fs_show_fun3344(kk_function_t _fself, kk_string_t _x1_x3343, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3343, _ctx);
}


// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3349__t {
  struct kk_function_s _base;
  kk_function_t _b_x53_66;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3349(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3349(kk_function_t _b_x53_66, kk_context_t* _ctx) {
  struct kk_examples_basic_cliresult_fs_show_fun3349__t* _self = kk_function_alloc_as(struct kk_examples_basic_cliresult_fs_show_fun3349__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_cliresult_fs_show_fun3349, kk_context());
  _self->_b_x53_66 = _b_x53_66;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_cliresult_fs_show_fun3349(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_examples_basic_cliresult_fs_show_fun3349__t* _self = kk_function_as(struct kk_examples_basic_cliresult_fs_show_fun3349__t*, _fself, _ctx);
  kk_function_t _b_x53_66 = _self->_b_x53_66; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x53_66, _ctx);}, {}, _ctx)
  kk_string_t _x_x3350 = kk_string_unbox(_b_x54); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x53_66, (_b_x53_66, _x_x3350, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3366__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3366(kk_function_t _fself, kk_examples_basic__cliresult _x1_x3365, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3366(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_cliresult_fs_show_fun3366, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_cliresult_fs_show_fun3366(kk_function_t _fself, kk_examples_basic__cliresult _x1_x3365, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_examples_basic_cliresult_fs_show(_x1_x3365, _ctx);
}


// lift anonymous function
struct kk_examples_basic_cliresult_fs_show_fun3371__t {
  struct kk_function_s _base;
  kk_function_t _b_x56_68;
};
static kk_string_t kk_examples_basic_cliresult_fs_show_fun3371(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_cliresult_fs_new_show_fun3371(kk_function_t _b_x56_68, kk_context_t* _ctx) {
  struct kk_examples_basic_cliresult_fs_show_fun3371__t* _self = kk_function_alloc_as(struct kk_examples_basic_cliresult_fs_show_fun3371__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_cliresult_fs_show_fun3371, kk_context());
  _self->_b_x56_68 = _b_x56_68;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_cliresult_fs_show_fun3371(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_examples_basic_cliresult_fs_show_fun3371__t* _self = kk_function_as(struct kk_examples_basic_cliresult_fs_show_fun3371__t*, _fself, _ctx);
  kk_function_t _b_x56_68 = _self->_b_x56_68; /* (p : examples/basic/cliresult) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x56_68, _ctx);}, {}, _ctx)
  kk_examples_basic__cliresult _x_x3372 = kk_examples_basic__cliresult_unbox(_b_x57, KK_OWNED, _ctx); /*examples/basic/cliresult*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_examples_basic__cliresult, kk_context_t*), _b_x56_68, (_b_x56_68, _x_x3372, _ctx), _ctx);
}

kk_string_t kk_examples_basic_cliresult_fs_show(kk_examples_basic__cliresult p, kk_context_t* _ctx) { /* (p : cliresult) -> div string */ 
  kk_string_t _x_x3310;
  kk_define_string_literal(static, _s_x3311, 10, "CliResult(", _ctx)
  _x_x3310 = kk_string_dup(_s_x3311, _ctx); /*string*/
  kk_string_t _x_x3312;
  kk_std_core_types__list _b_x41_58;
  {
    struct kk_examples_basic_Cliresult* _con_x3313 = kk_examples_basic__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x = _con_x3313->cli__flags;
    kk_std_core_types__list_dup(_x, _ctx);
    _b_x41_58 = _x; /*list<string>*/
  }
  kk_function_t _b_x42_59 = kk_examples_basic_cliresult_fs_new_show_fun3315(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3316;
  kk_define_string_literal(static, _s_x3317, 11, "cli_flags: ", _ctx)
  _x_x3316 = kk_string_dup(_s_x3317, _ctx); /*string*/
  kk_string_t _x_x3318;
  kk_string_t _x_x3319 = kk_std_core_list_show(_b_x41_58, kk_examples_basic_cliresult_fs_new_show_fun3320(_b_x42_59, _ctx), _ctx); /*string*/
  kk_string_t _x_x3322;
  kk_string_t _x_x3323;
  kk_define_string_literal(static, _s_x3324, 2, ", ", _ctx)
  _x_x3323 = kk_string_dup(_s_x3324, _ctx); /*string*/
  kk_string_t _x_x3325;
  kk_std_core_types__list _b_x49_60;
  {
    struct kk_examples_basic_Cliresult* _con_x3326 = kk_examples_basic__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3326->cli__options;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x49_60 = _x_0; /*list<(string, string)>*/
  }
  kk_function_t _b_x50_61 = kk_examples_basic_cliresult_fs_new_show_fun3327(_ctx); /*((string, string)) -> div string*/;
  kk_string_t _x_x3332;
  kk_define_string_literal(static, _s_x3333, 13, "cli_options: ", _ctx)
  _x_x3332 = kk_string_dup(_s_x3333, _ctx); /*string*/
  kk_string_t _x_x3334;
  kk_string_t _x_x3335 = kk_std_core_list_show(_b_x49_60, kk_examples_basic_cliresult_fs_new_show_fun3336(_b_x50_61, _ctx), _ctx); /*string*/
  kk_string_t _x_x3338;
  kk_string_t _x_x3339;
  kk_define_string_literal(static, _s_x3340, 2, ", ", _ctx)
  _x_x3339 = kk_string_dup(_s_x3340, _ctx); /*string*/
  kk_string_t _x_x3341;
  kk_std_core_types__list _b_x52_65;
  {
    struct kk_examples_basic_Cliresult* _con_x3342 = kk_examples_basic__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3342->cli__positionals;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x52_65 = _x_1; /*list<string>*/
  }
  kk_function_t _b_x53_66 = kk_examples_basic_cliresult_fs_new_show_fun3344(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3345;
  kk_define_string_literal(static, _s_x3346, 17, "cli_positionals: ", _ctx)
  _x_x3345 = kk_string_dup(_s_x3346, _ctx); /*string*/
  kk_string_t _x_x3347;
  kk_string_t _x_x3348 = kk_std_core_list_show(_b_x52_65, kk_examples_basic_cliresult_fs_new_show_fun3349(_b_x53_66, _ctx), _ctx); /*string*/
  kk_string_t _x_x3351;
  kk_string_t _x_x3352;
  kk_define_string_literal(static, _s_x3353, 2, ", ", _ctx)
  _x_x3352 = kk_string_dup(_s_x3353, _ctx); /*string*/
  kk_string_t _x_x3354;
  kk_string_t _x_x3355;
  kk_define_string_literal(static, _s_x3356, 13, "cli_command: ", _ctx)
  _x_x3355 = kk_string_dup(_s_x3356, _ctx); /*string*/
  kk_string_t _x_x3357;
  kk_string_t _x_x3358;
  {
    struct kk_examples_basic_Cliresult* _con_x3359 = kk_examples_basic__as_Cliresult(p, _ctx);
    kk_string_t _x_2 = _con_x3359->cli__command;
    kk_string_dup(_x_2, _ctx);
    _x_x3358 = _x_2; /*string*/
  }
  kk_string_t _x_x3360;
  kk_string_t _x_x3361;
  kk_define_string_literal(static, _s_x3362, 2, ", ", _ctx)
  _x_x3361 = kk_string_dup(_s_x3362, _ctx); /*string*/
  kk_string_t _x_x3363;
  kk_std_core_types__maybe _b_x55_67;
  {
    struct kk_examples_basic_Cliresult* _con_x3364 = kk_examples_basic__as_Cliresult(p, _ctx);
    kk_std_core_types__list _pat_0_3 = _con_x3364->cli__flags;
    kk_std_core_types__list _pat_1_3 = _con_x3364->cli__options;
    kk_std_core_types__list _pat_2_3 = _con_x3364->cli__positionals;
    kk_string_t _pat_3_3 = _con_x3364->cli__command;
    kk_std_core_types__maybe _x_3 = _con_x3364->cli__sub;
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
    _b_x55_67 = _x_3; /*maybe<examples/basic/cliresult>*/
  }
  kk_function_t _b_x56_68 = kk_examples_basic_cliresult_fs_new_show_fun3366(_ctx); /*(p : examples/basic/cliresult) -> div string*/;
  kk_string_t _x_x3367;
  kk_define_string_literal(static, _s_x3368, 9, "cli_sub: ", _ctx)
  _x_x3367 = kk_string_dup(_s_x3368, _ctx); /*string*/
  kk_string_t _x_x3369;
  kk_string_t _x_x3370 = kk_std_core_maybe_show(_b_x55_67, kk_examples_basic_cliresult_fs_new_show_fun3371(_b_x56_68, _ctx), _ctx); /*string*/
  kk_string_t _x_x3373;
  kk_define_string_literal(static, _s_x3374, 1, ")", _ctx)
  _x_x3373 = kk_string_dup(_s_x3374, _ctx); /*string*/
  _x_x3369 = kk_std_core_types__lp__plus__plus__rp_(_x_x3370, _x_x3373, _ctx); /*string*/
  _x_x3363 = kk_std_core_types__lp__plus__plus__rp_(_x_x3367, _x_x3369, _ctx); /*string*/
  _x_x3360 = kk_std_core_types__lp__plus__plus__rp_(_x_x3361, _x_x3363, _ctx); /*string*/
  _x_x3357 = kk_std_core_types__lp__plus__plus__rp_(_x_x3358, _x_x3360, _ctx); /*string*/
  _x_x3354 = kk_std_core_types__lp__plus__plus__rp_(_x_x3355, _x_x3357, _ctx); /*string*/
  _x_x3351 = kk_std_core_types__lp__plus__plus__rp_(_x_x3352, _x_x3354, _ctx); /*string*/
  _x_x3347 = kk_std_core_types__lp__plus__plus__rp_(_x_x3348, _x_x3351, _ctx); /*string*/
  _x_x3341 = kk_std_core_types__lp__plus__plus__rp_(_x_x3345, _x_x3347, _ctx); /*string*/
  _x_x3338 = kk_std_core_types__lp__plus__plus__rp_(_x_x3339, _x_x3341, _ctx); /*string*/
  _x_x3334 = kk_std_core_types__lp__plus__plus__rp_(_x_x3335, _x_x3338, _ctx); /*string*/
  _x_x3325 = kk_std_core_types__lp__plus__plus__rp_(_x_x3332, _x_x3334, _ctx); /*string*/
  _x_x3322 = kk_std_core_types__lp__plus__plus__rp_(_x_x3323, _x_x3325, _ctx); /*string*/
  _x_x3318 = kk_std_core_types__lp__plus__plus__rp_(_x_x3319, _x_x3322, _ctx); /*string*/
  _x_x3312 = kk_std_core_types__lp__plus__plus__rp_(_x_x3316, _x_x3318, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3310, _x_x3312, _ctx);
}

kk_string_t kk_examples_basic_clioutcome_fs_show(kk_examples_basic__clioutcome v, kk_context_t* _ctx) { /* (v : clioutcome) -> div string */ 
  if (kk_examples_basic__is_Help(v, _ctx)) {
    kk_define_string_literal(static, _s_x3375, 4, "Help", _ctx)
    return kk_string_dup(_s_x3375, _ctx);
  }
  if (kk_examples_basic__is_Version(v, _ctx)) {
    kk_define_string_literal(static, _s_x3376, 7, "Version", _ctx)
    return kk_string_dup(_s_x3376, _ctx);
  }
  if (kk_examples_basic__is_CliError(v, _ctx)) {
    struct kk_examples_basic_CliError* _con_x3377 = kk_examples_basic__as_CliError(v, _ctx);
    kk_string_t cli__error__msg = _con_x3377->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(cli__error__msg, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3378;
    kk_define_string_literal(static, _s_x3379, 9, "CliError(", _ctx)
    _x_x3378 = kk_string_dup(_s_x3379, _ctx); /*string*/
    kk_string_t _x_x3380;
    kk_string_t _x_x3381;
    kk_define_string_literal(static, _s_x3382, 1, ")", _ctx)
    _x_x3381 = kk_string_dup(_s_x3382, _ctx); /*string*/
    _x_x3380 = kk_std_core_types__lp__plus__plus__rp_(cli__error__msg, _x_x3381, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3378, _x_x3380, _ctx);
  }
  {
    struct kk_examples_basic_Parsed* _con_x3383 = kk_examples_basic__as_Parsed(v, _ctx);
    kk_examples_basic__cliresult cli__result = _con_x3383->cli__result;
    struct kk_examples_basic_Cliresult* _con_x3384 = kk_examples_basic__as_Cliresult(cli__result, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_examples_basic__cliresult_dup(cli__result, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3385;
    kk_define_string_literal(static, _s_x3386, 7, "Parsed(", _ctx)
    _x_x3385 = kk_string_dup(_s_x3386, _ctx); /*string*/
    kk_string_t _x_x3387;
    kk_string_t _x_x3388 = kk_examples_basic_cliresult_fs_show(cli__result, _ctx); /*string*/
    kk_string_t _x_x3389;
    kk_define_string_literal(static, _s_x3390, 1, ")", _ctx)
    _x_x3389 = kk_string_dup(_s_x3390, _ctx); /*string*/
    _x_x3387 = kk_std_core_types__lp__plus__plus__rp_(_x_x3388, _x_x3389, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3385, _x_x3387, _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3423__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3423(kk_function_t _fself, kk_examples_basic__cliflag _x1_x3422, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3423(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_clispec_fs_show_fun3423, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_clispec_fs_show_fun3423(kk_function_t _fself, kk_examples_basic__cliflag _x1_x3422, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_examples_basic_cliflag_fs_show(_x1_x3422, _ctx);
}


// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3428__t {
  struct kk_function_s _base;
  kk_function_t _b_x70_87;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3428(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3428(kk_function_t _b_x70_87, kk_context_t* _ctx) {
  struct kk_examples_basic_clispec_fs_show_fun3428__t* _self = kk_function_alloc_as(struct kk_examples_basic_clispec_fs_show_fun3428__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_clispec_fs_show_fun3428, kk_context());
  _self->_b_x70_87 = _b_x70_87;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_clispec_fs_show_fun3428(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx) {
  struct kk_examples_basic_clispec_fs_show_fun3428__t* _self = kk_function_as(struct kk_examples_basic_clispec_fs_show_fun3428__t*, _fself, _ctx);
  kk_function_t _b_x70_87 = _self->_b_x70_87; /* (p : examples/basic/cliflag) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x70_87, _ctx);}, {}, _ctx)
  kk_examples_basic__cliflag _x_x3429 = kk_examples_basic__cliflag_unbox(_b_x71, KK_OWNED, _ctx); /*examples/basic/cliflag*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_examples_basic__cliflag, kk_context_t*), _b_x70_87, (_b_x70_87, _x_x3429, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3436__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3436(kk_function_t _fself, kk_examples_basic__clioption _x1_x3435, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3436(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_clispec_fs_show_fun3436, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_clispec_fs_show_fun3436(kk_function_t _fself, kk_examples_basic__clioption _x1_x3435, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_examples_basic_clioption_fs_show(_x1_x3435, _ctx);
}


// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3441__t {
  struct kk_function_s _base;
  kk_function_t _b_x73_89;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3441(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3441(kk_function_t _b_x73_89, kk_context_t* _ctx) {
  struct kk_examples_basic_clispec_fs_show_fun3441__t* _self = kk_function_alloc_as(struct kk_examples_basic_clispec_fs_show_fun3441__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_clispec_fs_show_fun3441, kk_context());
  _self->_b_x73_89 = _b_x73_89;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_clispec_fs_show_fun3441(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx) {
  struct kk_examples_basic_clispec_fs_show_fun3441__t* _self = kk_function_as(struct kk_examples_basic_clispec_fs_show_fun3441__t*, _fself, _ctx);
  kk_function_t _b_x73_89 = _self->_b_x73_89; /* (p : examples/basic/clioption) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x73_89, _ctx);}, {}, _ctx)
  kk_examples_basic__clioption _x_x3442 = kk_examples_basic__clioption_unbox(_b_x74, KK_OWNED, _ctx); /*examples/basic/clioption*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_examples_basic__clioption, kk_context_t*), _b_x73_89, (_b_x73_89, _x_x3442, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3449__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3449(kk_function_t _fself, kk_examples_basic__cliarg _x1_x3448, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3449(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_clispec_fs_show_fun3449, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_clispec_fs_show_fun3449(kk_function_t _fself, kk_examples_basic__cliarg _x1_x3448, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_examples_basic_cliarg_fs_show(_x1_x3448, _ctx);
}


// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3454__t {
  struct kk_function_s _base;
  kk_function_t _b_x76_91;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3454(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3454(kk_function_t _b_x76_91, kk_context_t* _ctx) {
  struct kk_examples_basic_clispec_fs_show_fun3454__t* _self = kk_function_alloc_as(struct kk_examples_basic_clispec_fs_show_fun3454__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_clispec_fs_show_fun3454, kk_context());
  _self->_b_x76_91 = _b_x76_91;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_clispec_fs_show_fun3454(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx) {
  struct kk_examples_basic_clispec_fs_show_fun3454__t* _self = kk_function_as(struct kk_examples_basic_clispec_fs_show_fun3454__t*, _fself, _ctx);
  kk_function_t _b_x76_91 = _self->_b_x76_91; /* (p : examples/basic/cliarg) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x76_91, _ctx);}, {}, _ctx)
  kk_examples_basic__cliarg _x_x3455 = kk_examples_basic__cliarg_unbox(_b_x77, KK_OWNED, _ctx); /*examples/basic/cliarg*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_examples_basic__cliarg, kk_context_t*), _b_x76_91, (_b_x76_91, _x_x3455, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3461__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3461(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3461(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_clispec_fs_show_fun3461, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3462__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3462(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3462(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_clispec_fs_show_fun3462, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_clispec_fs_show_fun3462(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3463 = kk_string_unbox(_b_x81); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3463, _ctx);
}


// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3464__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3464(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3464(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_clispec_fs_show_fun3464, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_clispec_fs_show_fun3464(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_examples_basic__clispec _x_x3465 = kk_examples_basic__clispec_unbox(_b_x82, KK_OWNED, _ctx); /*examples/basic/clispec*/
  return kk_examples_basic_clispec_fs_show(_x_x3465, _ctx);
}
static kk_string_t kk_examples_basic_clispec_fs_show_fun3461(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_examples_basic_clispec_fs_new_show_fun3462(_ctx), kk_examples_basic_clispec_fs_new_show_fun3464(_ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_clispec_fs_show_fun3470__t {
  struct kk_function_s _base;
  kk_function_t _b_x84_93;
};
static kk_string_t kk_examples_basic_clispec_fs_show_fun3470(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_clispec_fs_new_show_fun3470(kk_function_t _b_x84_93, kk_context_t* _ctx) {
  struct kk_examples_basic_clispec_fs_show_fun3470__t* _self = kk_function_alloc_as(struct kk_examples_basic_clispec_fs_show_fun3470__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_clispec_fs_show_fun3470, kk_context());
  _self->_b_x84_93 = _b_x84_93;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_clispec_fs_show_fun3470(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx) {
  struct kk_examples_basic_clispec_fs_show_fun3470__t* _self = kk_function_as(struct kk_examples_basic_clispec_fs_show_fun3470__t*, _fself, _ctx);
  kk_function_t _b_x84_93 = _self->_b_x84_93; /* ((string, examples/basic/clispec)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x84_93, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3471 = kk_std_core_types__tuple2_unbox(_b_x85, KK_OWNED, _ctx); /*(string, examples/basic/clispec)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x84_93, (_b_x84_93, _x_x3471, _ctx), _ctx);
}

kk_string_t kk_examples_basic_clispec_fs_show(kk_examples_basic__clispec p, kk_context_t* _ctx) { /* (p : clispec) -> div string */ 
  kk_string_t _x_x3391;
  kk_define_string_literal(static, _s_x3392, 8, "CliSpec(", _ctx)
  _x_x3391 = kk_string_dup(_s_x3392, _ctx); /*string*/
  kk_string_t _x_x3393;
  kk_string_t _x_x3394;
  kk_define_string_literal(static, _s_x3395, 10, "app_name: ", _ctx)
  _x_x3394 = kk_string_dup(_s_x3395, _ctx); /*string*/
  kk_string_t _x_x3396;
  kk_string_t _x_x3397;
  {
    struct kk_examples_basic_Clispec* _con_x3398 = kk_examples_basic__as_Clispec(p, _ctx);
    kk_string_t _x = _con_x3398->app__name;
    kk_string_dup(_x, _ctx);
    _x_x3397 = _x; /*string*/
  }
  kk_string_t _x_x3399;
  kk_string_t _x_x3400;
  kk_define_string_literal(static, _s_x3401, 2, ", ", _ctx)
  _x_x3400 = kk_string_dup(_s_x3401, _ctx); /*string*/
  kk_string_t _x_x3402;
  kk_string_t _x_x3403;
  kk_define_string_literal(static, _s_x3404, 13, "app_version: ", _ctx)
  _x_x3403 = kk_string_dup(_s_x3404, _ctx); /*string*/
  kk_string_t _x_x3405;
  kk_string_t _x_x3406;
  {
    struct kk_examples_basic_Clispec* _con_x3407 = kk_examples_basic__as_Clispec(p, _ctx);
    kk_string_t _x_0 = _con_x3407->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x3406 = _x_0; /*string*/
  }
  kk_string_t _x_x3408;
  kk_string_t _x_x3409;
  kk_define_string_literal(static, _s_x3410, 2, ", ", _ctx)
  _x_x3409 = kk_string_dup(_s_x3410, _ctx); /*string*/
  kk_string_t _x_x3411;
  kk_string_t _x_x3412;
  kk_define_string_literal(static, _s_x3413, 11, "app_about: ", _ctx)
  _x_x3412 = kk_string_dup(_s_x3413, _ctx); /*string*/
  kk_string_t _x_x3414;
  kk_string_t _x_x3415;
  {
    struct kk_examples_basic_Clispec* _con_x3416 = kk_examples_basic__as_Clispec(p, _ctx);
    kk_string_t _x_1 = _con_x3416->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x3415 = _x_1; /*string*/
  }
  kk_string_t _x_x3417;
  kk_string_t _x_x3418;
  kk_define_string_literal(static, _s_x3419, 2, ", ", _ctx)
  _x_x3418 = kk_string_dup(_s_x3419, _ctx); /*string*/
  kk_string_t _x_x3420;
  kk_std_core_types__list _b_x69_86;
  {
    struct kk_examples_basic_Clispec* _con_x3421 = kk_examples_basic__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3421->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x69_86 = _x_2; /*list<examples/basic/cliflag>*/
  }
  kk_function_t _b_x70_87 = kk_examples_basic_clispec_fs_new_show_fun3423(_ctx); /*(p : examples/basic/cliflag) -> string*/;
  kk_string_t _x_x3424;
  kk_define_string_literal(static, _s_x3425, 11, "app_flags: ", _ctx)
  _x_x3424 = kk_string_dup(_s_x3425, _ctx); /*string*/
  kk_string_t _x_x3426;
  kk_string_t _x_x3427 = kk_std_core_list_show(_b_x69_86, kk_examples_basic_clispec_fs_new_show_fun3428(_b_x70_87, _ctx), _ctx); /*string*/
  kk_string_t _x_x3430;
  kk_string_t _x_x3431;
  kk_define_string_literal(static, _s_x3432, 2, ", ", _ctx)
  _x_x3431 = kk_string_dup(_s_x3432, _ctx); /*string*/
  kk_string_t _x_x3433;
  kk_std_core_types__list _b_x72_88;
  {
    struct kk_examples_basic_Clispec* _con_x3434 = kk_examples_basic__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_3 = _con_x3434->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _b_x72_88 = _x_3; /*list<examples/basic/clioption>*/
  }
  kk_function_t _b_x73_89 = kk_examples_basic_clispec_fs_new_show_fun3436(_ctx); /*(p : examples/basic/clioption) -> string*/;
  kk_string_t _x_x3437;
  kk_define_string_literal(static, _s_x3438, 13, "app_options: ", _ctx)
  _x_x3437 = kk_string_dup(_s_x3438, _ctx); /*string*/
  kk_string_t _x_x3439;
  kk_string_t _x_x3440 = kk_std_core_list_show(_b_x72_88, kk_examples_basic_clispec_fs_new_show_fun3441(_b_x73_89, _ctx), _ctx); /*string*/
  kk_string_t _x_x3443;
  kk_string_t _x_x3444;
  kk_define_string_literal(static, _s_x3445, 2, ", ", _ctx)
  _x_x3444 = kk_string_dup(_s_x3445, _ctx); /*string*/
  kk_string_t _x_x3446;
  kk_std_core_types__list _b_x75_90;
  {
    struct kk_examples_basic_Clispec* _con_x3447 = kk_examples_basic__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_4 = _con_x3447->app__args;
    kk_std_core_types__list_dup(_x_4, _ctx);
    _b_x75_90 = _x_4; /*list<examples/basic/cliarg>*/
  }
  kk_function_t _b_x76_91 = kk_examples_basic_clispec_fs_new_show_fun3449(_ctx); /*(p : examples/basic/cliarg) -> string*/;
  kk_string_t _x_x3450;
  kk_define_string_literal(static, _s_x3451, 10, "app_args: ", _ctx)
  _x_x3450 = kk_string_dup(_s_x3451, _ctx); /*string*/
  kk_string_t _x_x3452;
  kk_string_t _x_x3453 = kk_std_core_list_show(_b_x75_90, kk_examples_basic_clispec_fs_new_show_fun3454(_b_x76_91, _ctx), _ctx); /*string*/
  kk_string_t _x_x3456;
  kk_string_t _x_x3457;
  kk_define_string_literal(static, _s_x3458, 2, ", ", _ctx)
  _x_x3457 = kk_string_dup(_s_x3458, _ctx); /*string*/
  kk_string_t _x_x3459;
  kk_std_core_types__list _b_x83_92;
  {
    struct kk_examples_basic_Clispec* _con_x3460 = kk_examples_basic__as_Clispec(p, _ctx);
    kk_string_t _pat_0_5 = _con_x3460->app__name;
    kk_string_t _pat_1_5 = _con_x3460->app__version;
    kk_string_t _pat_2_5 = _con_x3460->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x3460->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x3460->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x3460->app__args;
    kk_std_core_types__list _x_5 = _con_x3460->app__commands;
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
    _b_x83_92 = _x_5; /*list<(string, examples/basic/clispec)>*/
  }
  kk_function_t _b_x84_93 = kk_examples_basic_clispec_fs_new_show_fun3461(_ctx); /*((string, examples/basic/clispec)) -> div string*/;
  kk_string_t _x_x3466;
  kk_define_string_literal(static, _s_x3467, 14, "app_commands: ", _ctx)
  _x_x3466 = kk_string_dup(_s_x3467, _ctx); /*string*/
  kk_string_t _x_x3468;
  kk_string_t _x_x3469 = kk_std_core_list_show(_b_x83_92, kk_examples_basic_clispec_fs_new_show_fun3470(_b_x84_93, _ctx), _ctx); /*string*/
  kk_string_t _x_x3472;
  kk_define_string_literal(static, _s_x3473, 1, ")", _ctx)
  _x_x3472 = kk_string_dup(_s_x3473, _ctx); /*string*/
  _x_x3468 = kk_std_core_types__lp__plus__plus__rp_(_x_x3469, _x_x3472, _ctx); /*string*/
  _x_x3459 = kk_std_core_types__lp__plus__plus__rp_(_x_x3466, _x_x3468, _ctx); /*string*/
  _x_x3456 = kk_std_core_types__lp__plus__plus__rp_(_x_x3457, _x_x3459, _ctx); /*string*/
  _x_x3452 = kk_std_core_types__lp__plus__plus__rp_(_x_x3453, _x_x3456, _ctx); /*string*/
  _x_x3446 = kk_std_core_types__lp__plus__plus__rp_(_x_x3450, _x_x3452, _ctx); /*string*/
  _x_x3443 = kk_std_core_types__lp__plus__plus__rp_(_x_x3444, _x_x3446, _ctx); /*string*/
  _x_x3439 = kk_std_core_types__lp__plus__plus__rp_(_x_x3440, _x_x3443, _ctx); /*string*/
  _x_x3433 = kk_std_core_types__lp__plus__plus__rp_(_x_x3437, _x_x3439, _ctx); /*string*/
  _x_x3430 = kk_std_core_types__lp__plus__plus__rp_(_x_x3431, _x_x3433, _ctx); /*string*/
  _x_x3426 = kk_std_core_types__lp__plus__plus__rp_(_x_x3427, _x_x3430, _ctx); /*string*/
  _x_x3420 = kk_std_core_types__lp__plus__plus__rp_(_x_x3424, _x_x3426, _ctx); /*string*/
  _x_x3417 = kk_std_core_types__lp__plus__plus__rp_(_x_x3418, _x_x3420, _ctx); /*string*/
  _x_x3414 = kk_std_core_types__lp__plus__plus__rp_(_x_x3415, _x_x3417, _ctx); /*string*/
  _x_x3411 = kk_std_core_types__lp__plus__plus__rp_(_x_x3412, _x_x3414, _ctx); /*string*/
  _x_x3408 = kk_std_core_types__lp__plus__plus__rp_(_x_x3409, _x_x3411, _ctx); /*string*/
  _x_x3405 = kk_std_core_types__lp__plus__plus__rp_(_x_x3406, _x_x3408, _ctx); /*string*/
  _x_x3402 = kk_std_core_types__lp__plus__plus__rp_(_x_x3403, _x_x3405, _ctx); /*string*/
  _x_x3399 = kk_std_core_types__lp__plus__plus__rp_(_x_x3400, _x_x3402, _ctx); /*string*/
  _x_x3396 = kk_std_core_types__lp__plus__plus__rp_(_x_x3397, _x_x3399, _ctx); /*string*/
  _x_x3393 = kk_std_core_types__lp__plus__plus__rp_(_x_x3394, _x_x3396, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3391, _x_x3393, _ctx);
}


// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3488__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3488(kk_function_t _fself, kk_string_t _x1_x3487, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3488(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_parseraw_fs_show_fun3488, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_parseraw_fs_show_fun3488(kk_function_t _fself, kk_string_t _x1_x3487, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3487, _ctx);
}


// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3493__t {
  struct kk_function_s _base;
  kk_function_t _b_x98_115;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3493(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3493(kk_function_t _b_x98_115, kk_context_t* _ctx) {
  struct kk_examples_basic_parseraw_fs_show_fun3493__t* _self = kk_function_alloc_as(struct kk_examples_basic_parseraw_fs_show_fun3493__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_parseraw_fs_show_fun3493, kk_context());
  _self->_b_x98_115 = _b_x98_115;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_parseraw_fs_show_fun3493(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_examples_basic_parseraw_fs_show_fun3493__t* _self = kk_function_as(struct kk_examples_basic_parseraw_fs_show_fun3493__t*, _fself, _ctx);
  kk_function_t _b_x98_115 = _self->_b_x98_115; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x98_115, _ctx);}, {}, _ctx)
  kk_string_t _x_x3494 = kk_string_unbox(_b_x99); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x98_115, (_b_x98_115, _x_x3494, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3500__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3500(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3500(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_parseraw_fs_show_fun3500, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3501__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3501(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3501(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_parseraw_fs_show_fun3501, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_parseraw_fs_show_fun3501(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3502 = kk_string_unbox(_b_x103); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3502, _ctx);
}


// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3503__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3503(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3503(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_parseraw_fs_show_fun3503, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_parseraw_fs_show_fun3503(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3504 = kk_string_unbox(_b_x104); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3504, _ctx);
}
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3500(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_examples_basic_parseraw_fs_new_show_fun3501(_ctx), kk_examples_basic_parseraw_fs_new_show_fun3503(_ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3509__t {
  struct kk_function_s _base;
  kk_function_t _b_x106_117;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3509(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3509(kk_function_t _b_x106_117, kk_context_t* _ctx) {
  struct kk_examples_basic_parseraw_fs_show_fun3509__t* _self = kk_function_alloc_as(struct kk_examples_basic_parseraw_fs_show_fun3509__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_parseraw_fs_show_fun3509, kk_context());
  _self->_b_x106_117 = _b_x106_117;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_parseraw_fs_show_fun3509(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx) {
  struct kk_examples_basic_parseraw_fs_show_fun3509__t* _self = kk_function_as(struct kk_examples_basic_parseraw_fs_show_fun3509__t*, _fself, _ctx);
  kk_function_t _b_x106_117 = _self->_b_x106_117; /* ((string, string)) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x106_117, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3510 = kk_std_core_types__tuple2_unbox(_b_x107, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x106_117, (_b_x106_117, _x_x3510, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3517__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3517(kk_function_t _fself, kk_string_t _x1_x3516, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3517(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_parseraw_fs_show_fun3517, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_parseraw_fs_show_fun3517(kk_function_t _fself, kk_string_t _x1_x3516, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3516, _ctx);
}


// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3522__t {
  struct kk_function_s _base;
  kk_function_t _b_x109_122;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3522(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3522(kk_function_t _b_x109_122, kk_context_t* _ctx) {
  struct kk_examples_basic_parseraw_fs_show_fun3522__t* _self = kk_function_alloc_as(struct kk_examples_basic_parseraw_fs_show_fun3522__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_parseraw_fs_show_fun3522, kk_context());
  _self->_b_x109_122 = _b_x109_122;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_parseraw_fs_show_fun3522(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_examples_basic_parseraw_fs_show_fun3522__t* _self = kk_function_as(struct kk_examples_basic_parseraw_fs_show_fun3522__t*, _fself, _ctx);
  kk_function_t _b_x109_122 = _self->_b_x109_122; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x109_122, _ctx);}, {}, _ctx)
  kk_string_t _x_x3523 = kk_string_unbox(_b_x110); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x109_122, (_b_x109_122, _x_x3523, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3539__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3539(kk_function_t _fself, kk_string_t _x1_x3538, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3539(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_parseraw_fs_show_fun3539, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_parseraw_fs_show_fun3539(kk_function_t _fself, kk_string_t _x1_x3538, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3538, _ctx);
}


// lift anonymous function
struct kk_examples_basic_parseraw_fs_show_fun3544__t {
  struct kk_function_s _base;
  kk_function_t _b_x112_124;
};
static kk_string_t kk_examples_basic_parseraw_fs_show_fun3544(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_parseraw_fs_new_show_fun3544(kk_function_t _b_x112_124, kk_context_t* _ctx) {
  struct kk_examples_basic_parseraw_fs_show_fun3544__t* _self = kk_function_alloc_as(struct kk_examples_basic_parseraw_fs_show_fun3544__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_parseraw_fs_show_fun3544, kk_context());
  _self->_b_x112_124 = _b_x112_124;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_examples_basic_parseraw_fs_show_fun3544(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx) {
  struct kk_examples_basic_parseraw_fs_show_fun3544__t* _self = kk_function_as(struct kk_examples_basic_parseraw_fs_show_fun3544__t*, _fself, _ctx);
  kk_function_t _b_x112_124 = _self->_b_x112_124; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x112_124, _ctx);}, {}, _ctx)
  kk_string_t _x_x3545 = kk_string_unbox(_b_x113); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x112_124, (_b_x112_124, _x_x3545, _ctx), _ctx);
}

kk_string_t kk_examples_basic_parseraw_fs_show(kk_examples_basic__parseraw p, kk_context_t* _ctx) { /* (p : parseraw) -> string */ 
  kk_string_t _x_x3474;
  kk_define_string_literal(static, _s_x3475, 9, "ParseRaw(", _ctx)
  _x_x3474 = kk_string_dup(_s_x3475, _ctx); /*string*/
  kk_string_t _x_x3476;
  kk_string_t _x_x3477;
  kk_define_string_literal(static, _s_x3478, 11, "raw_error: ", _ctx)
  _x_x3477 = kk_string_dup(_s_x3478, _ctx); /*string*/
  kk_string_t _x_x3479;
  kk_string_t _x_x3480;
  {
    struct kk_examples_basic_Parseraw* _con_x3481 = kk_examples_basic__as_Parseraw(p, _ctx);
    kk_string_t _x = _con_x3481->raw__error;
    kk_string_dup(_x, _ctx);
    _x_x3480 = _x; /*string*/
  }
  kk_string_t _x_x3482;
  kk_string_t _x_x3483;
  kk_define_string_literal(static, _s_x3484, 2, ", ", _ctx)
  _x_x3483 = kk_string_dup(_s_x3484, _ctx); /*string*/
  kk_string_t _x_x3485;
  kk_std_core_types__list _b_x97_114;
  {
    struct kk_examples_basic_Parseraw* _con_x3486 = kk_examples_basic__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3486->raw__flags;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x97_114 = _x_0; /*list<string>*/
  }
  kk_function_t _b_x98_115 = kk_examples_basic_parseraw_fs_new_show_fun3488(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3489;
  kk_define_string_literal(static, _s_x3490, 11, "raw_flags: ", _ctx)
  _x_x3489 = kk_string_dup(_s_x3490, _ctx); /*string*/
  kk_string_t _x_x3491;
  kk_string_t _x_x3492 = kk_std_core_list_show(_b_x97_114, kk_examples_basic_parseraw_fs_new_show_fun3493(_b_x98_115, _ctx), _ctx); /*string*/
  kk_string_t _x_x3495;
  kk_string_t _x_x3496;
  kk_define_string_literal(static, _s_x3497, 2, ", ", _ctx)
  _x_x3496 = kk_string_dup(_s_x3497, _ctx); /*string*/
  kk_string_t _x_x3498;
  kk_std_core_types__list _b_x105_116;
  {
    struct kk_examples_basic_Parseraw* _con_x3499 = kk_examples_basic__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3499->raw__options;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x105_116 = _x_1; /*list<(string, string)>*/
  }
  kk_function_t _b_x106_117 = kk_examples_basic_parseraw_fs_new_show_fun3500(_ctx); /*((string, string)) -> string*/;
  kk_string_t _x_x3505;
  kk_define_string_literal(static, _s_x3506, 13, "raw_options: ", _ctx)
  _x_x3505 = kk_string_dup(_s_x3506, _ctx); /*string*/
  kk_string_t _x_x3507;
  kk_string_t _x_x3508 = kk_std_core_list_show(_b_x105_116, kk_examples_basic_parseraw_fs_new_show_fun3509(_b_x106_117, _ctx), _ctx); /*string*/
  kk_string_t _x_x3511;
  kk_string_t _x_x3512;
  kk_define_string_literal(static, _s_x3513, 2, ", ", _ctx)
  _x_x3512 = kk_string_dup(_s_x3513, _ctx); /*string*/
  kk_string_t _x_x3514;
  kk_std_core_types__list _b_x108_121;
  {
    struct kk_examples_basic_Parseraw* _con_x3515 = kk_examples_basic__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3515->raw__positionals;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x108_121 = _x_2; /*list<string>*/
  }
  kk_function_t _b_x109_122 = kk_examples_basic_parseraw_fs_new_show_fun3517(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3518;
  kk_define_string_literal(static, _s_x3519, 17, "raw_positionals: ", _ctx)
  _x_x3518 = kk_string_dup(_s_x3519, _ctx); /*string*/
  kk_string_t _x_x3520;
  kk_string_t _x_x3521 = kk_std_core_list_show(_b_x108_121, kk_examples_basic_parseraw_fs_new_show_fun3522(_b_x109_122, _ctx), _ctx); /*string*/
  kk_string_t _x_x3524;
  kk_string_t _x_x3525;
  kk_define_string_literal(static, _s_x3526, 2, ", ", _ctx)
  _x_x3525 = kk_string_dup(_s_x3526, _ctx); /*string*/
  kk_string_t _x_x3527;
  kk_string_t _x_x3528;
  kk_define_string_literal(static, _s_x3529, 12, "raw_subcmd: ", _ctx)
  _x_x3528 = kk_string_dup(_s_x3529, _ctx); /*string*/
  kk_string_t _x_x3530;
  kk_string_t _x_x3531;
  {
    struct kk_examples_basic_Parseraw* _con_x3532 = kk_examples_basic__as_Parseraw(p, _ctx);
    kk_string_t _x_3 = _con_x3532->raw__subcmd;
    kk_string_dup(_x_3, _ctx);
    _x_x3531 = _x_3; /*string*/
  }
  kk_string_t _x_x3533;
  kk_string_t _x_x3534;
  kk_define_string_literal(static, _s_x3535, 2, ", ", _ctx)
  _x_x3534 = kk_string_dup(_s_x3535, _ctx); /*string*/
  kk_string_t _x_x3536;
  kk_std_core_types__list _b_x111_123;
  {
    struct kk_examples_basic_Parseraw* _con_x3537 = kk_examples_basic__as_Parseraw(p, _ctx);
    kk_string_t _pat_0_4 = _con_x3537->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x3537->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x3537->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x3537->raw__positionals;
    kk_string_t _pat_4_4 = _con_x3537->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x3537->raw__sub__args;
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
  kk_function_t _b_x112_124 = kk_examples_basic_parseraw_fs_new_show_fun3539(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3540;
  kk_define_string_literal(static, _s_x3541, 14, "raw_sub_args: ", _ctx)
  _x_x3540 = kk_string_dup(_s_x3541, _ctx); /*string*/
  kk_string_t _x_x3542;
  kk_string_t _x_x3543 = kk_std_core_list_show(_b_x111_123, kk_examples_basic_parseraw_fs_new_show_fun3544(_b_x112_124, _ctx), _ctx); /*string*/
  kk_string_t _x_x3546;
  kk_define_string_literal(static, _s_x3547, 1, ")", _ctx)
  _x_x3546 = kk_string_dup(_s_x3547, _ctx); /*string*/
  _x_x3542 = kk_std_core_types__lp__plus__plus__rp_(_x_x3543, _x_x3546, _ctx); /*string*/
  _x_x3536 = kk_std_core_types__lp__plus__plus__rp_(_x_x3540, _x_x3542, _ctx); /*string*/
  _x_x3533 = kk_std_core_types__lp__plus__plus__rp_(_x_x3534, _x_x3536, _ctx); /*string*/
  _x_x3530 = kk_std_core_types__lp__plus__plus__rp_(_x_x3531, _x_x3533, _ctx); /*string*/
  _x_x3527 = kk_std_core_types__lp__plus__plus__rp_(_x_x3528, _x_x3530, _ctx); /*string*/
  _x_x3524 = kk_std_core_types__lp__plus__plus__rp_(_x_x3525, _x_x3527, _ctx); /*string*/
  _x_x3520 = kk_std_core_types__lp__plus__plus__rp_(_x_x3521, _x_x3524, _ctx); /*string*/
  _x_x3514 = kk_std_core_types__lp__plus__plus__rp_(_x_x3518, _x_x3520, _ctx); /*string*/
  _x_x3511 = kk_std_core_types__lp__plus__plus__rp_(_x_x3512, _x_x3514, _ctx); /*string*/
  _x_x3507 = kk_std_core_types__lp__plus__plus__rp_(_x_x3508, _x_x3511, _ctx); /*string*/
  _x_x3498 = kk_std_core_types__lp__plus__plus__rp_(_x_x3505, _x_x3507, _ctx); /*string*/
  _x_x3495 = kk_std_core_types__lp__plus__plus__rp_(_x_x3496, _x_x3498, _ctx); /*string*/
  _x_x3491 = kk_std_core_types__lp__plus__plus__rp_(_x_x3492, _x_x3495, _ctx); /*string*/
  _x_x3485 = kk_std_core_types__lp__plus__plus__rp_(_x_x3489, _x_x3491, _ctx); /*string*/
  _x_x3482 = kk_std_core_types__lp__plus__plus__rp_(_x_x3483, _x_x3485, _ctx); /*string*/
  _x_x3479 = kk_std_core_types__lp__plus__plus__rp_(_x_x3480, _x_x3482, _ctx); /*string*/
  _x_x3476 = kk_std_core_types__lp__plus__plus__rp_(_x_x3477, _x_x3479, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3474, _x_x3476, _ctx);
}

kk_examples_basic__parseraw kk_examples_basic_parseraw_fs__copy(kk_examples_basic__parseraw _this, kk_std_core_types__optional raw__error, kk_std_core_types__optional raw__flags, kk_std_core_types__optional raw__options, kk_std_core_types__optional raw__positionals, kk_std_core_types__optional raw__subcmd, kk_std_core_types__optional raw__sub__args, kk_context_t* _ctx) { /* (parseraw, raw_error : ? string, raw_flags : ? (list<string>), raw_options : ? (list<(string, string)>), raw_positionals : ? (list<string>), raw_subcmd : ? string, raw_sub_args : ? (list<string>)) -> parseraw */ 
  kk_string_t _x_x3548;
  if (kk_std_core_types__is_Optional(raw__error, _ctx)) {
    kk_box_t _box_x125 = raw__error._cons._Optional.value;
    kk_string_t _uniq_raw__error_3733 = kk_string_unbox(_box_x125);
    kk_string_dup(_uniq_raw__error_3733, _ctx);
    kk_std_core_types__optional_drop(raw__error, _ctx);
    _x_x3548 = _uniq_raw__error_3733; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__error, _ctx);
    {
      struct kk_examples_basic_Parseraw* _con_x3549 = kk_examples_basic__as_Parseraw(_this, _ctx);
      kk_string_t _x = _con_x3549->raw__error;
      kk_string_dup(_x, _ctx);
      _x_x3548 = _x; /*string*/
    }
  }
  kk_std_core_types__list _x_x3550;
  if (kk_std_core_types__is_Optional(raw__flags, _ctx)) {
    kk_box_t _box_x126 = raw__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__flags_3741 = kk_std_core_types__list_unbox(_box_x126, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__flags_3741, _ctx);
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    _x_x3550 = _uniq_raw__flags_3741; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    {
      struct kk_examples_basic_Parseraw* _con_x3551 = kk_examples_basic__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3551->raw__flags;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3550 = _x_0; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3552;
  if (kk_std_core_types__is_Optional(raw__options, _ctx)) {
    kk_box_t _box_x127 = raw__options._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__options_3749 = kk_std_core_types__list_unbox(_box_x127, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__options_3749, _ctx);
    kk_std_core_types__optional_drop(raw__options, _ctx);
    _x_x3552 = _uniq_raw__options_3749; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__options, _ctx);
    {
      struct kk_examples_basic_Parseraw* _con_x3553 = kk_examples_basic__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3553->raw__options;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3552 = _x_1; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3554;
  if (kk_std_core_types__is_Optional(raw__positionals, _ctx)) {
    kk_box_t _box_x128 = raw__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__positionals_3757 = kk_std_core_types__list_unbox(_box_x128, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__positionals_3757, _ctx);
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    _x_x3554 = _uniq_raw__positionals_3757; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    {
      struct kk_examples_basic_Parseraw* _con_x3555 = kk_examples_basic__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3555->raw__positionals;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3554 = _x_2; /*list<string>*/
    }
  }
  kk_string_t _x_x3556;
  if (kk_std_core_types__is_Optional(raw__subcmd, _ctx)) {
    kk_box_t _box_x129 = raw__subcmd._cons._Optional.value;
    kk_string_t _uniq_raw__subcmd_3765 = kk_string_unbox(_box_x129);
    kk_string_dup(_uniq_raw__subcmd_3765, _ctx);
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    _x_x3556 = _uniq_raw__subcmd_3765; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    {
      struct kk_examples_basic_Parseraw* _con_x3557 = kk_examples_basic__as_Parseraw(_this, _ctx);
      kk_string_t _x_3 = _con_x3557->raw__subcmd;
      kk_string_dup(_x_3, _ctx);
      _x_x3556 = _x_3; /*string*/
    }
  }
  kk_std_core_types__list _x_x3558;
  if (kk_std_core_types__is_Optional(raw__sub__args, _ctx)) {
    kk_box_t _box_x130 = raw__sub__args._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__sub__args_3773 = kk_std_core_types__list_unbox(_box_x130, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__sub__args_3773, _ctx);
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3558 = _uniq_raw__sub__args_3773; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    {
      struct kk_examples_basic_Parseraw* _con_x3559 = kk_examples_basic__as_Parseraw(_this, _ctx);
      kk_string_t _pat_0_5 = _con_x3559->raw__error;
      kk_std_core_types__list _pat_1_6 = _con_x3559->raw__flags;
      kk_std_core_types__list _pat_2_5 = _con_x3559->raw__options;
      kk_std_core_types__list _pat_3_5 = _con_x3559->raw__positionals;
      kk_string_t _pat_4_5 = _con_x3559->raw__subcmd;
      kk_std_core_types__list _x_4 = _con_x3559->raw__sub__args;
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
      _x_x3558 = _x_4; /*list<string>*/
    }
  }
  return kk_examples_basic__new_Parseraw(kk_reuse_null, 0, _x_x3548, _x_x3550, _x_x3552, _x_x3554, _x_x3556, _x_x3558, _ctx);
}

kk_integer_t kk_examples_basic_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10059;
  bool _match_x2968 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x2968) {
    kk_integer_drop(lo, _ctx);
    a_10059 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10059 = lo; /*int*/
  }
  bool _match_x2967 = kk_integer_lt_borrow(a_10059,hi,kk_context()); /*bool*/;
  if (_match_x2967) {
    kk_integer_drop(hi, _ctx);
    return a_10059;
  }
  {
    kk_integer_drop(a_10059, _ctx);
    return hi;
  }
}

kk_integer_t kk_examples_basic_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x2966 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2966) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x3560 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x3561 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x3560;
    b = _x_x3561;
    goto kk__tailcall;
  }
}

kk_integer_t kk_examples_basic_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x2963 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2963) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x2964 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2964) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10063;
      kk_integer_t _x_x3562 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x3563 = kk_integer_dup(b, _ctx); /*int*/
      n_10063 = kk_integer_mul(_x_x3562,_x_x3563,kk_context()); /*int*/
      kk_integer_t _x_x3564;
      bool _match_x2965 = kk_integer_lt_borrow(n_10063,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2965) {
        _x_x3564 = kk_integer_sub((kk_integer_from_small(0)),n_10063,kk_context()); /*int*/
      }
      else {
        _x_x3564 = n_10063; /*int*/
      }
      kk_integer_t _x_x3565 = kk_examples_basic_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x3564,_x_x3565,kk_context());
    }
  }
}

kk_integer_t kk_examples_basic_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x2962 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2962) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x3566 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x3567;
    kk_integer_t _x_x3568 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x3567 = kk_examples_basic_hc__pow(base, _x_x3568, _ctx); /*int*/
    return kk_integer_mul(_x_x3566,_x_x3567,kk_context());
  }
}

kk_integer_t kk_examples_basic_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x2959 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2959) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x2960;
    bool _brw_x2961 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x2960 = _brw_x2961; /*bool*/
    if (_match_x2960) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_examples_basic_hc__intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_box_drop(sep, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3569 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_std_core_types__list _pat_1 = _con_x3569->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_box_t x = _con_x3569->head;
      kk_reuse_t _ru_x2994 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        _ru_x2994 = (kk_datatype_ptr_reuse(xs, _ctx));
      }
      else {
        kk_box_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_box_drop(sep, _ctx);
      return kk_std_core_types__new_Cons(_ru_x2994, 0, x, kk_std_core_types__new_Nil(_ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x3570 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3570->head;
    kk_std_core_types__list rest = _con_x3570->tail;
    kk_reuse_t _ru_x2995 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x2995 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__list ys_10078;
    kk_box_t _x_x3571 = kk_box_dup(sep, _ctx); /*5273*/
    ys_10078 = kk_examples_basic_hc__intersperse(rest, _x_x3571, _ctx); /*list<5273>*/
    kk_std_core_types__list _x_x3572;
    kk_std_core_types__list _x_x3573 = kk_std_core_types__new_Cons(_ru_x2995, 0, sep, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3572 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_0, _x_x3573, _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3572, ys_10078, _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__sum_fun3575__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__sum_fun3575(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__sum_fun3575(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__sum_fun3575, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__sum_fun3575(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x3576;
  kk_integer_t _x_x3577 = kk_integer_unbox(_b_x134, _ctx); /*int*/
  kk_integer_t _x_x3578 = kk_integer_unbox(_b_x135, _ctx); /*int*/
  _x_x3576 = kk_std_core_int__lp__plus__rp_(_x_x3577, _x_x3578, _ctx); /*int*/
  return kk_integer_box(_x_x3576, _ctx);
}

kk_integer_t kk_examples_basic_hc__sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3574 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(0), _ctx), kk_examples_basic_new_hc__sum_fun3575(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3574, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__product_fun3580__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__product_fun3580(kk_function_t _fself, kk_box_t _b_x142, kk_box_t _b_x143, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__product_fun3580(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__product_fun3580, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__product_fun3580(kk_function_t _fself, kk_box_t _b_x142, kk_box_t _b_x143, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t a_147 = kk_integer_unbox(_b_x142, _ctx); /*int*/;
  kk_integer_t b_148 = kk_integer_unbox(_b_x143, _ctx); /*int*/;
  kk_integer_t _x_x3581 = kk_integer_mul(a_147,b_148,kk_context()); /*int*/
  return kk_integer_box(_x_x3581, _ctx);
}

kk_integer_t kk_examples_basic_hc__product(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3579 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(1), _ctx), kk_examples_basic_new_hc__product_fun3580(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3579, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_examples_basic__mlift_hc__scan_11130(kk_box_t init, kk_std_core_types__list _y_x10756, kk_context_t* _ctx) { /* forall<a,e> (init : a, list<a>) -> e list<a> */ 
  kk_std_core_types__list _x_x3582 = kk_std_core_types__new_Cons(kk_reuse_null, 0, init, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  return kk_std_core_list_append(_x_x3582, _y_x10756, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__scan_11131_fun3584__t {
  struct kk_function_s _base;
  kk_box_t init_0;
};
static kk_box_t kk_examples_basic__mlift_hc__scan_11131_fun3584(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__scan_11131_fun3584(kk_box_t init_0, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__scan_11131_fun3584__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__scan_11131_fun3584__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__scan_11131_fun3584, kk_context());
  _self->init_0 = init_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__scan_11131_fun3584(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__scan_11131_fun3584__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__scan_11131_fun3584__t*, _fself, _ctx);
  kk_box_t init_0 = _self->init_0; /* 5390 */
  kk_drop_match(_self, {kk_box_dup(init_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10756_0_152 = kk_std_core_types__list_unbox(_b_x150, KK_OWNED, _ctx); /*list<5390>*/;
  kk_std_core_types__list _x_x3585 = kk_examples_basic__mlift_hc__scan_11130(init_0, _y_x10756_0_152, _ctx); /*list<5390>*/
  return kk_std_core_types__list_box(_x_x3585, _ctx);
}

kk_std_core_types__list kk_examples_basic__mlift_hc__scan_11131(kk_function_t f, kk_box_t init_0, kk_std_core_types__list rest, kk_box_t _y_x10755, kk_context_t* _ctx) { /* forall<a,b,e> (f : (b, a) -> e b, init : b, rest : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list x_11198 = kk_examples_basic_hc__scan(rest, _y_x10755, f, _ctx); /*list<5390>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11198, _ctx);
    kk_box_t _x_x3583 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__scan_11131_fun3584(init_0, _ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x3583, KK_OWNED, _ctx);
  }
  {
    return kk_examples_basic__mlift_hc__scan_11130(init_0, x_11198, _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__scan_fun3590__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  kk_box_t init_1;
  kk_std_core_types__list rest_0;
};
static kk_box_t kk_examples_basic_hc__scan_fun3590(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__scan_fun3590(kk_function_t f_0, kk_box_t init_1, kk_std_core_types__list rest_0, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__scan_fun3590__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__scan_fun3590__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__scan_fun3590, kk_context());
  _self->f_0 = f_0;
  _self->init_1 = init_1;
  _self->rest_0 = rest_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__scan_fun3590(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__scan_fun3590__t* _self = kk_function_as(struct kk_examples_basic_hc__scan_fun3590__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (5390, 5389) -> 5391 5390 */
  kk_box_t init_1 = _self->init_1; /* 5390 */
  kk_std_core_types__list rest_0 = _self->rest_0; /* list<5389> */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_box_dup(init_1, _ctx);kk_std_core_types__list_dup(rest_0, _ctx);}, {}, _ctx)
  kk_box_t _y_x10755_0_159 = _b_x154; /*5390*/;
  kk_std_core_types__list _x_x3591 = kk_examples_basic__mlift_hc__scan_11131(f_0, init_1, rest_0, _y_x10755_0_159, _ctx); /*list<5390>*/
  return kk_std_core_types__list_box(_x_x3591, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__scan_fun3593__t {
  struct kk_function_s _base;
  kk_box_t init_1;
};
static kk_box_t kk_examples_basic_hc__scan_fun3593(kk_function_t _fself, kk_box_t _b_x156, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__scan_fun3593(kk_box_t init_1, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__scan_fun3593__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__scan_fun3593__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__scan_fun3593, kk_context());
  _self->init_1 = init_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__scan_fun3593(kk_function_t _fself, kk_box_t _b_x156, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__scan_fun3593__t* _self = kk_function_as(struct kk_examples_basic_hc__scan_fun3593__t*, _fself, _ctx);
  kk_box_t init_1 = _self->init_1; /* 5390 */
  kk_drop_match(_self, {kk_box_dup(init_1, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10756_1_160 = kk_std_core_types__list_unbox(_b_x156, KK_OWNED, _ctx); /*list<5390>*/;
  kk_std_core_types__list _x_x3594 = kk_examples_basic__mlift_hc__scan_11130(init_1, _y_x10756_1_160, _ctx); /*list<5390>*/
  return kk_std_core_types__list_box(_x_x3594, _ctx);
}

kk_std_core_types__list kk_examples_basic_hc__scan(kk_std_core_types__list xs, kk_box_t init_1, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, init : b, f : (b, a) -> e b) -> e list<b> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(f_0, _ctx);
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3586 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3586->head;
    kk_std_core_types__list rest_0 = _con_x3586->tail;
    kk_reuse_t _ru_x2996 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x2996 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_1_11200;
    kk_function_t _x_x3588 = kk_function_dup(f_0, _ctx); /*(5390, 5389) -> 5391 5390*/
    kk_box_t _x_x3587 = kk_box_dup(init_1, _ctx); /*5390*/
    x_1_11200 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x3588, (_x_x3588, _x_x3587, x_0, _ctx), _ctx); /*5390*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x2996,kk_context());
      kk_box_drop(x_1_11200, _ctx);
      kk_box_t _x_x3589 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__scan_fun3590(f_0, init_1, rest_0, _ctx), _ctx); /*10001*/
      return kk_std_core_types__list_unbox(_x_x3589, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list x_2_11203 = kk_examples_basic_hc__scan(rest_0, x_1_11200, f_0, _ctx); /*list<5390>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x2996,kk_context());
        kk_std_core_types__list_drop(x_2_11203, _ctx);
        kk_box_t _x_x3592 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__scan_fun3593(init_1, _ctx), _ctx); /*10001*/
        return kk_std_core_types__list_unbox(_x_x3592, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list _x_x3595 = kk_std_core_types__new_Cons(_ru_x2996, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        return kk_std_core_list_append(_x_x3595, x_2_11203, _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_examples_basic_hc__zip__with_fun3596__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_examples_basic_hc__zip__with_fun3596(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__zip__with_fun3596(kk_function_t f, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__zip__with_fun3596__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__zip__with_fun3596__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__zip__with_fun3596, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__zip__with_fun3596(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__zip__with_fun3596__t* _self = kk_function_as(struct kk_examples_basic_hc__zip__with_fun3596__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (5600, 5601) -> 5603 5602 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_box_t _x_x3597;
  kk_std_core_types__tuple2 _match_x2942;
  kk_box_t _x_x3598 = kk_box_dup(_b_x163, _ctx); /*10001*/
  _match_x2942 = kk_std_core_types__tuple2_unbox(_x_x3598, KK_OWNED, _ctx); /*(5600, 5601)*/
  {
    kk_box_t _x = _match_x2942.fst;
    kk_box_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2942, _ctx);
    _x_x3597 = _x; /*5600*/
  }
  kk_box_t _x_x3599;
  kk_std_core_types__tuple2 _match_x2941 = kk_std_core_types__tuple2_unbox(_b_x163, KK_OWNED, _ctx); /*(5600, 5601)*/;
  {
    kk_box_t _x_0 = _match_x2941.snd;
    kk_box_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2941, _ctx);
    _x_x3599 = _x_0; /*5601*/
  }
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, _x_x3597, _x_x3599, _ctx), _ctx);
}

kk_std_core_types__list kk_examples_basic_hc__zip__with(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 
  kk_std_core_types__list _b_x161_164 = kk_std_core_list_zip(xs, ys, _ctx); /*list<(5600, 5601)>*/;
  kk_function_t _brw_x2943 = kk_examples_basic_new_hc__zip__with_fun3596(f, _ctx); /*(10001) -> 10003 5602*/;
  kk_std_core_types__list _brw_x2944 = kk_std_core_list_map(_b_x161_164, _brw_x2943, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2943, _ctx);
  return _brw_x2944;
}


// lift anonymous function
struct kk_examples_basic_hc__unique_fun3601__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__unique_fun3601(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__unique_fun3601(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__unique_fun3601, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_hc__unique_fun3602__t {
  struct kk_function_s _base;
  kk_integer_t x_185;
};
static bool kk_examples_basic_hc__unique_fun3602(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__unique_fun3602(kk_integer_t x_185, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__unique_fun3602__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__unique_fun3602__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__unique_fun3602, kk_context());
  _self->x_185 = x_185;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__unique_fun3602(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__unique_fun3602__t* _self = kk_function_as(struct kk_examples_basic_hc__unique_fun3602__t*, _fself, _ctx);
  kk_integer_t x_185 = _self->x_185; /* int */
  kk_drop_match(_self, {kk_integer_dup(x_185, _ctx);}, {}, _ctx)
  bool _brw_x2940 = kk_integer_eq_borrow(hc____el,x_185,kk_context()); /*bool*/;
  kk_integer_drop(hc____el, _ctx);
  kk_integer_drop(x_185, _ctx);
  return _brw_x2940;
}


// lift anonymous function
struct kk_examples_basic_hc__unique_fun3604__t {
  struct kk_function_s _base;
  kk_function_t _b_x168_181;
};
static bool kk_examples_basic_hc__unique_fun3604(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__unique_fun3604(kk_function_t _b_x168_181, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__unique_fun3604__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__unique_fun3604__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__unique_fun3604, kk_context());
  _self->_b_x168_181 = _b_x168_181;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__unique_fun3604(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__unique_fun3604__t* _self = kk_function_as(struct kk_examples_basic_hc__unique_fun3604__t*, _fself, _ctx);
  kk_function_t _b_x168_181 = _self->_b_x168_181; /* (hc__el : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x168_181, _ctx);}, {}, _ctx)
  kk_integer_t _x_x3605 = kk_integer_unbox(_b_x169, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_context_t*), _b_x168_181, (_b_x168_181, _x_x3605, _ctx), _ctx);
}
static kk_box_t kk_examples_basic_hc__unique_fun3601(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list acc_184 = kk_std_core_types__list_unbox(_b_x175, KK_OWNED, _ctx); /*list<int>*/;
  kk_integer_t x_185 = kk_integer_unbox(_b_x176, _ctx); /*int*/;
  kk_std_core_types__list _b_x167_180 = kk_std_core_types__list_dup(acc_184, _ctx); /*list<int>*/;
  kk_function_t _b_x168_181;
  kk_integer_dup(x_185, _ctx);
  _b_x168_181 = kk_examples_basic_new_hc__unique_fun3602(x_185, _ctx); /*(hc__el : int) -> bool*/
  kk_std_core_types__list _x_x3603;
  bool _match_x2939 = kk_std_core_list_any(_b_x167_180, kk_examples_basic_new_hc__unique_fun3604(_b_x168_181, _ctx), _ctx); /*bool*/;
  if (_match_x2939) {
    kk_integer_drop(x_185, _ctx);
    _x_x3603 = acc_184; /*list<int>*/
  }
  else {
    kk_std_core_types__list _x_x3606 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(x_185, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3603 = kk_std_core_list_append(acc_184, _x_x3606, _ctx); /*list<int>*/
  }
  return kk_std_core_types__list_box(_x_x3603, _ctx);
}

kk_std_core_types__list kk_examples_basic_hc__unique(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> list<int> */ 
  kk_box_t _x_x3600 = kk_std_core_list_foldl(xs, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_examples_basic_new_hc__unique_fun3601(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x3600, KK_OWNED, _ctx);
}

kk_std_core_types__list kk_examples_basic_hc__chunks(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> div list<list<a>> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(n, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list _b_x186_188;
    kk_std_core_types__list _x_x3607 = kk_std_core_types__list_dup(xs, _ctx); /*list<5863>*/
    kk_integer_t _x_x3608 = kk_integer_dup(n, _ctx); /*int*/
    _b_x186_188 = kk_std_core_list_take(_x_x3607, _x_x3608, _ctx); /*list<5863>*/
    kk_std_core_types__list ys_10082;
    kk_std_core_types__list _x_x3609;
    kk_integer_t _x_x3610 = kk_integer_dup(n, _ctx); /*int*/
    _x_x3609 = kk_std_core_list_drop(xs, _x_x3610, _ctx); /*list<10001>*/
    ys_10082 = kk_examples_basic_hc__chunks(_x_x3609, n, _ctx); /*list<list<5863>>*/
    kk_std_core_types__list _x_x3611 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__list_box(_b_x186_188, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3611, ys_10082, _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__words_fun3617__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__words_fun3617(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__words_fun3617(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__words_fun3617, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__words_fun3617(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3618;
  kk_char_t _x_x3619 = kk_char_unbox(_b_x192, KK_OWNED, _ctx); /*char*/
  _x_x3618 = kk_std_core_string_char_fs_string(_x_x3619, _ctx); /*string*/
  return kk_string_box(_x_x3618);
}


// lift anonymous function
struct kk_examples_basic_hc__words_fun3622__t {
  struct kk_function_s _base;
};
static bool kk_examples_basic_hc__words_fun3622(kk_function_t _fself, kk_box_t _b_x195, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__words_fun3622(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__words_fun3622, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_examples_basic_hc__words_fun3622(kk_function_t _fself, kk_box_t _b_x195, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10088;
  kk_integer_t _brw_x2930;
  kk_string_t _x_x3623 = kk_string_unbox(_b_x195); /*string*/
  _brw_x2930 = kk_std_core_string_chars_fs_count(_x_x3623, _ctx); /*int*/
  bool _brw_x2931 = kk_integer_eq_borrow(_brw_x2930,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2930, _ctx);
  b_10088 = _brw_x2931; /*bool*/
  if (b_10088) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_examples_basic_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x193_196;
  bool _match_x2932;
  kk_string_t _x_x3613;
  kk_define_string_literal(static, _s_x3614, 1, " ", _ctx)
  _x_x3613 = kk_string_dup(_s_x3614, _ctx); /*string*/
  kk_string_t _x_x3615 = kk_string_empty(); /*string*/
  _match_x2932 = kk_string_is_eq(_x_x3613,_x_x3615,kk_context()); /*bool*/
  if (_match_x2932) {
    kk_std_core_types__list _b_x190_198 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2933 = kk_examples_basic_new_hc__words_fun3617(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2934 = kk_std_core_list_map(_b_x190_198, _brw_x2933, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2933, _ctx);
    _b_x193_196 = _brw_x2934; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x3620;
    kk_define_string_literal(static, _s_x3621, 1, " ", _ctx)
    _x_x3620 = kk_string_dup(_s_x3621, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3620,kk_context()); /*vector<string>*/
    _b_x193_196 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x193_196, kk_examples_basic_new_hc__words_fun3622(_ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__lines_fun3628__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__lines_fun3628(kk_function_t _fself, kk_box_t _b_x203, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__lines_fun3628(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__lines_fun3628, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__lines_fun3628(kk_function_t _fself, kk_box_t _b_x203, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3629;
  kk_char_t _x_x3630 = kk_char_unbox(_b_x203, KK_OWNED, _ctx); /*char*/
  _x_x3629 = kk_std_core_string_char_fs_string(_x_x3630, _ctx); /*string*/
  return kk_string_box(_x_x3629);
}

kk_std_core_types__list kk_examples_basic_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x2927;
  kk_string_t _x_x3624;
  kk_define_string_literal(static, _s_x3625, 1, "\n", _ctx)
  _x_x3624 = kk_string_dup(_s_x3625, _ctx); /*string*/
  kk_string_t _x_x3626 = kk_string_empty(); /*string*/
  _match_x2927 = kk_string_is_eq(_x_x3624,_x_x3626,kk_context()); /*bool*/
  if (_match_x2927) {
    kk_std_core_types__list _b_x201_204 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2928 = kk_examples_basic_new_hc__lines_fun3628(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2929 = kk_std_core_list_map(_b_x201_204, _brw_x2928, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2928, _ctx);
    return _brw_x2929;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x3631;
    kk_define_string_literal(static, _s_x3632, 1, "\n", _ctx)
    _x_x3631 = kk_string_dup(_s_x3632, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3631,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__count__substr_fun3640__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__count__substr_fun3640(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__count__substr_fun3640(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__count__substr_fun3640, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__count__substr_fun3640(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3641;
  kk_char_t _x_x3642 = kk_char_unbox(_b_x208, KK_OWNED, _ctx); /*char*/
  _x_x3641 = kk_std_core_string_char_fs_string(_x_x3642, _ctx); /*string*/
  return kk_string_box(_x_x3641);
}

kk_integer_t kk_examples_basic_hc__count__substr(kk_string_t s, kk_string_t hc__sub_0, kk_context_t* _ctx) { /* (s : string, hc_sub : string) -> int */ 
  kk_std_core_types__list xs_10100;
  bool _match_x2924;
  kk_string_t _x_x3637 = kk_string_dup(hc__sub_0, _ctx); /*string*/
  kk_string_t _x_x3638 = kk_string_empty(); /*string*/
  _match_x2924 = kk_string_is_eq(_x_x3637,_x_x3638,kk_context()); /*bool*/
  if (_match_x2924) {
    kk_string_drop(hc__sub_0, _ctx);
    kk_std_core_types__list _b_x206_209 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2925 = kk_examples_basic_new_hc__count__substr_fun3640(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2926 = kk_std_core_list_map(_b_x206_209, _brw_x2925, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2925, _ctx);
    xs_10100 = _brw_x2926; /*list<string>*/
  }
  else {
    kk_vector_t v_10011 = kk_string_splitv(s,hc__sub_0,kk_context()); /*vector<string>*/;
    xs_10100 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_integer_t x_10098 = kk_std_core_list__lift_length_6003(xs_10100, kk_integer_from_small(0), _ctx); /*int*/;
  return kk_integer_add_small_const(x_10098, -1, _ctx);
}

kk_string_t kk_examples_basic_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x2923 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2923) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3644 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3645;
    kk_integer_t _x_x3646 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x3645 = kk_examples_basic_hc__repeat__str(s, _x_x3646, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3644, _x_x3645, _ctx);
  }
}

kk_string_t kk_examples_basic_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10109;
  kk_string_t _x_x3647 = kk_string_dup(s, _ctx); /*string*/
  y_10109 = kk_std_core_string_chars_fs_count(_x_x3647, _ctx); /*int*/
  kk_integer_t b_10107 = kk_integer_sub(width,y_10109,kk_context()); /*int*/;
  kk_string_t _x_x3648;
  kk_integer_t _x_x3649;
  bool _match_x2922 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10107,kk_context()); /*bool*/;
  if (_match_x2922) {
    kk_integer_drop(b_10107, _ctx);
    _x_x3649 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3649 = b_10107; /*int*/
  }
  _x_x3648 = kk_examples_basic_hc__repeat__str(ch, _x_x3649, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3648, s, _ctx);
}

kk_string_t kk_examples_basic_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10113;
  kk_string_t _x_x3650 = kk_string_dup(s, _ctx); /*string*/
  y_10113 = kk_std_core_string_chars_fs_count(_x_x3650, _ctx); /*int*/
  kk_integer_t b_10111 = kk_integer_sub(width,y_10113,kk_context()); /*int*/;
  kk_string_t _x_x3651;
  kk_integer_t _x_x3652;
  bool _match_x2921 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10111,kk_context()); /*bool*/;
  if (_match_x2921) {
    kk_integer_drop(b_10111, _ctx);
    _x_x3652 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3652 = b_10111; /*int*/
  }
  _x_x3651 = kk_examples_basic_hc__repeat__str(ch, _x_x3652, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x3651, _ctx);
}

kk_string_t kk_examples_basic_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10117;
  kk_string_t _x_x3653 = kk_string_dup(s, _ctx); /*string*/
  y_10117 = kk_std_core_string_chars_fs_count(_x_x3653, _ctx); /*int*/
  kk_integer_t b_10115 = kk_integer_sub(width,y_10117,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x2920 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10115,kk_context()); /*bool*/;
  if (_match_x2920) {
    kk_integer_drop(b_10115, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10115; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x3654 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x3654,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x3655 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x3655,kk_context()); /*int*/
  kk_string_t _x_x3656;
  kk_string_t _x_x3657;
  kk_string_t _x_x3658 = kk_string_dup(ch, _ctx); /*string*/
  _x_x3657 = kk_examples_basic_hc__repeat__str(_x_x3658, left, _ctx); /*string*/
  _x_x3656 = kk_std_core_types__lp__plus__plus__rp_(_x_x3657, s, _ctx); /*string*/
  kk_string_t _x_x3659 = kk_examples_basic_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3656, _x_x3659, _ctx);
}

kk_string_t kk_examples_basic_hc__capitalise(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2917;
  kk_integer_t _brw_x2918;
  kk_string_t _x_x3662 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2918 = kk_std_core_string_chars_fs_count(_x_x3662, _ctx); /*int*/
  bool _brw_x2919 = kk_integer_eq_borrow(_brw_x2918,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2918, _ctx);
  _match_x2917 = _brw_x2919; /*bool*/
  if (_match_x2917) {
    kk_string_drop(s, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3664;
    kk_string_t _x_x3665;
    kk_std_core_types__list _x_x3666;
    kk_std_core_types__list _x_x3667;
    kk_string_t _x_x3668 = kk_string_dup(s, _ctx); /*string*/
    _x_x3667 = kk_std_core_string_list(_x_x3668, _ctx); /*list<char>*/
    _x_x3666 = kk_std_core_list_take(_x_x3667, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3665 = kk_std_core_string_listchar_fs_string(_x_x3666, _ctx); /*string*/
    _x_x3664 = kk_std_core_string_to_upper(_x_x3665, _ctx); /*string*/
    kk_string_t _x_x3669;
    kk_string_t _x_x3670;
    kk_std_core_types__list _x_x3671;
    kk_std_core_types__list _x_x3672 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3671 = kk_std_core_list_drop(_x_x3672, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3670 = kk_std_core_string_listchar_fs_string(_x_x3671, _ctx); /*string*/
    _x_x3669 = kk_std_core_string_to_lower(_x_x3670, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3664, _x_x3669, _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__capwords_fun3673__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__capwords_fun3673(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__capwords_fun3673(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__capwords_fun3673, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__capwords_fun3673(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3674;
  kk_string_t _x_x3675 = kk_string_unbox(_b_x213); /*string*/
  _x_x3674 = kk_examples_basic_hc__capitalise(_x_x3675, _ctx); /*string*/
  return kk_string_box(_x_x3674);
}

kk_string_t kk_examples_basic_hc__capwords(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  kk_std_core_types__list _b_x211_214 = kk_examples_basic_hc__words(s, _ctx); /*list<string>*/;
  kk_std_core_types__list xs_10120;
  kk_function_t _brw_x2915 = kk_examples_basic_new_hc__capwords_fun3673(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2916 = kk_std_core_list_map(_b_x211_214, _brw_x2915, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2915, _ctx);
  xs_10120 = _brw_x2916; /*list<string>*/
  kk_string_t _x_x3676;
  kk_define_string_literal(static, _s_x3677, 1, " ", _ctx)
  _x_x3676 = kk_string_dup(_s_x3677, _ctx); /*string*/
  return kk_std_core_list_joinsep(xs_10120, _x_x3676, _ctx);
}

kk_string_t kk_examples_basic_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10122;
  kk_string_t _x_x3681 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3682 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10122 = kk_std_core_sslice_starts_with(_x_x3681, _x_x3682, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10122, _ctx)) {
    kk_box_t _box_x216 = maybe_10122._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10122, _ctx);
    kk_std_core_types__list _x_x3683;
    kk_std_core_types__list _x_x3684 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3685 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x3683 = kk_std_core_list_drop(_x_x3684, _x_x3685, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3683, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}

kk_string_t kk_examples_basic_hc__removesuffix(kk_string_t s, kk_string_t suf, kk_context_t* _ctx) { /* (s : string, suf : string) -> string */ 
  kk_std_core_types__maybe maybe_10123;
  kk_string_t _x_x3686 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3687 = kk_string_dup(suf, _ctx); /*string*/
  maybe_10123 = kk_std_core_sslice_ends_with(_x_x3686, _x_x3687, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10123, _ctx)) {
    kk_box_t _box_x217 = maybe_10123._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10123, _ctx);
    kk_integer_t x_10124;
    kk_string_t _x_x3688 = kk_string_dup(s, _ctx); /*string*/
    x_10124 = kk_std_core_string_chars_fs_count(_x_x3688, _ctx); /*int*/
    kk_integer_t y_10125 = kk_std_core_string_chars_fs_count(suf, _ctx); /*int*/;
    kk_std_core_types__list _x_x3689;
    kk_std_core_types__list _x_x3690 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3691 = kk_integer_sub(x_10124,y_10125,kk_context()); /*int*/
    _x_x3689 = kk_std_core_list_take(_x_x3690, _x_x3691, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3689, _ctx);
  }
  {
    kk_string_drop(suf, _ctx);
    return s;
  }
}


// lift anonymous function
struct kk_examples_basic_hc__all__digits_fun3697__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__all__digits_fun3697(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__all__digits_fun3697(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__all__digits_fun3697, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__all__digits_fun3697(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3698;
  kk_char_t _x_x3699 = kk_char_unbox(_b_x220, KK_OWNED, _ctx); /*char*/
  _x_x3698 = kk_std_core_string_char_fs_string(_x_x3699, _ctx); /*string*/
  return kk_string_box(_x_x3698);
}


// lift anonymous function
struct kk_examples_basic_hc__all__digits_fun3702__t {
  struct kk_function_s _base;
};
static bool kk_examples_basic_hc__all__digits_fun3702(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__all__digits_fun3702(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__all__digits_fun3702, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_examples_basic_hc__all__digits_fun3702(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _match_x2903;
  kk_std_core_types__order _x_x3703;
  kk_string_t _brw_x2908;
  kk_box_t _x_x3704 = kk_box_dup(_b_x225, _ctx); /*10001*/
  _brw_x2908 = kk_string_unbox(_x_x3704); /*string*/
  kk_string_t _brw_x2907;
  kk_define_string_literal(static, _s_x3705, 1, "0", _ctx)
  _brw_x2907 = kk_string_dup(_s_x3705, _ctx); /*string*/
  kk_std_core_types__order _brw_x2909 = kk_std_core_string_cmp(_brw_x2908, _brw_x2907, _ctx); /*order*/;
  kk_string_drop(_brw_x2908, _ctx);
  kk_string_drop(_brw_x2907, _ctx);
  _x_x3703 = _brw_x2909; /*order*/
  _match_x2903 = kk_std_core_order__lp__gt__rp_(_x_x3703, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x2903) {
    kk_std_core_types__order _x_x3706;
    kk_string_t _brw_x2905 = kk_string_unbox(_b_x225); /*string*/;
    kk_string_t _brw_x2904;
    kk_define_string_literal(static, _s_x3707, 1, "9", _ctx)
    _brw_x2904 = kk_string_dup(_s_x3707, _ctx); /*string*/
    kk_std_core_types__order _brw_x2906 = kk_std_core_string_cmp(_brw_x2905, _brw_x2904, _ctx); /*order*/;
    kk_string_drop(_brw_x2905, _ctx);
    kk_string_drop(_brw_x2904, _ctx);
    _x_x3706 = _brw_x2906; /*order*/
    return kk_std_core_order__lp__lt__rp_(_x_x3706, kk_std_core_types__new_Gt(_ctx), _ctx);
  }
  {
    kk_box_drop(_b_x225, _ctx);
    return false;
  }
}

bool kk_examples_basic_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2902;
  kk_integer_t _brw_x2913;
  kk_string_t _x_x3692 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2913 = kk_std_core_string_chars_fs_count(_x_x3692, _ctx); /*int*/
  bool _brw_x2914 = kk_integer_eq_borrow(_brw_x2913,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2913, _ctx);
  _match_x2902 = _brw_x2914; /*bool*/
  if (_match_x2902) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list chars;
    bool _match_x2910;
    kk_string_t _x_x3693 = kk_string_empty(); /*string*/
    kk_string_t _x_x3695 = kk_string_empty(); /*string*/
    _match_x2910 = kk_string_is_eq(_x_x3693,_x_x3695,kk_context()); /*bool*/
    if (_match_x2910) {
      kk_std_core_types__list _b_x218_221 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
      kk_function_t _brw_x2911 = kk_examples_basic_new_hc__all__digits_fun3697(_ctx); /*(10001) -> 10003 10002*/;
      kk_std_core_types__list _brw_x2912 = kk_std_core_list_map(_b_x218_221, _brw_x2911, _ctx); /*list<10002>*/;
      kk_function_drop(_brw_x2911, _ctx);
      chars = _brw_x2912; /*list<string>*/
    }
    else {
      kk_vector_t v_10011;
      kk_string_t _x_x3700 = kk_string_empty(); /*string*/
      v_10011 = kk_string_splitv(s,_x_x3700,kk_context()); /*vector<string>*/
      chars = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
    }
    return kk_std_core_list_all(chars, kk_examples_basic_new_hc__all__digits_fun3702(_ctx), _ctx);
  }
}

kk_std_core_types__maybe kk_examples_basic_hc__parse__part(kk_string_t s, kk_integer_t start, kk_integer_t len, kk_context_t* _ctx) { /* (s : string, start : int, len : int) -> maybe<int> */ 
  kk_integer_t x_10135;
  kk_integer_t _x_x3708 = kk_integer_dup(start, _ctx); /*int*/
  x_10135 = kk_integer_add(_x_x3708,len,kk_context()); /*int*/
  kk_string_t s_0_10133;
  kk_std_core_types__list _x_x3709;
  kk_std_core_types__list _x_x3710;
  kk_std_core_types__list _x_x3711 = kk_std_core_string_list(s, _ctx); /*list<char>*/
  kk_integer_t _x_x3712 = kk_integer_dup(start, _ctx); /*int*/
  _x_x3710 = kk_std_core_list_drop(_x_x3711, _x_x3712, _ctx); /*list<10001>*/
  kk_integer_t _x_x3713 = kk_integer_sub(x_10135,start,kk_context()); /*int*/
  _x_x3709 = kk_std_core_list_take(_x_x3710, _x_x3713, _ctx); /*list<10001>*/
  s_0_10133 = kk_std_core_string_listchar_fs_string(_x_x3709, _ctx); /*string*/
  bool _x_x3714;
  kk_std_core_types__optional _match_x2901 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2901, _ctx)) {
    kk_box_t _box_x229 = _match_x2901._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x229);
    kk_std_core_types__optional_drop(_match_x2901, _ctx);
    _x_x3714 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2901, _ctx);
    _x_x3714 = false; /*bool*/
  }
  return kk_std_core_int_xparse(s_0_10133, _x_x3714, _ctx);
}

bool kk_examples_basic_hc__in__range(kk_integer_t n, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (n : int, lo : int, hi : int) -> bool */ 
  bool _match_x2898;
  bool _brw_x2900 = kk_integer_gte_borrow(n,lo,kk_context()); /*bool*/;
  kk_integer_drop(lo, _ctx);
  _match_x2898 = _brw_x2900; /*bool*/
  if (_match_x2898) {
    bool _brw_x2899 = kk_integer_lte_borrow(n,hi,kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return _brw_x2899;
  }
  {
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return false;
  }
}

kk_integer_t kk_examples_basic_hc__days__in__month(kk_integer_t year, kk_integer_t month, kk_context_t* _ctx) { /* (year : int, month : int) -> int */ 
  if (kk_integer_eq_borrow(month, kk_integer_from_small(1), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(2), _ctx)) {
    kk_integer_drop(month, _ctx);
    bool _match_x2886;
    kk_integer_t _brw_x2896;
    kk_integer_t _x_x3715 = kk_integer_dup(year, _ctx); /*int*/
    _brw_x2896 = kk_integer_mod(_x_x3715,(kk_integer_from_small(4)),kk_context()); /*int*/
    bool _brw_x2897 = kk_integer_eq_borrow(_brw_x2896,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2896, _ctx);
    _match_x2886 = _brw_x2897; /*bool*/
    if (_match_x2886) {
      bool _match_x2890;
      kk_integer_t _brw_x2894;
      kk_integer_t _x_x3716 = kk_integer_dup(year, _ctx); /*int*/
      _brw_x2894 = kk_integer_mod(_x_x3716,(kk_integer_from_small(100)),kk_context()); /*int*/
      bool _brw_x2895 = kk_integer_neq_borrow(_brw_x2894,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2894, _ctx);
      _match_x2890 = _brw_x2895; /*bool*/
      if (_match_x2890) {
        kk_integer_drop(year, _ctx);
        return kk_integer_from_small(29);
      }
      {
        bool _match_x2891;
        kk_integer_t _brw_x2892 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
        bool _brw_x2893 = kk_integer_eq_borrow(_brw_x2892,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2892, _ctx);
        _match_x2891 = _brw_x2893; /*bool*/
        if (_match_x2891) {
          return kk_integer_from_small(29);
        }
        {
          return kk_integer_from_small(28);
        }
      }
    }
    {
      bool _match_x2887;
      kk_integer_t _brw_x2888 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
      bool _brw_x2889 = kk_integer_eq_borrow(_brw_x2888,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2888, _ctx);
      _match_x2887 = _brw_x2889; /*bool*/
      if (_match_x2887) {
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

bool kk_examples_basic_hc__is__valid__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2871;
  kk_integer_t _brw_x2884;
  kk_string_t _x_x3717 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2884 = kk_std_core_string_chars_fs_count(_x_x3717, _ctx); /*int*/
  bool _brw_x2885 = kk_integer_neq_borrow(_brw_x2884,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2884, _ctx);
  _match_x2871 = _brw_x2885; /*bool*/
  if (_match_x2871) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2872;
    kk_string_t _x_x3718;
    kk_std_core_types__list _x_x3719;
    kk_std_core_types__list _x_x3720;
    kk_std_core_types__list _x_x3721;
    kk_string_t _x_x3722 = kk_string_dup(s, _ctx); /*string*/
    _x_x3721 = kk_std_core_string_list(_x_x3722, _ctx); /*list<char>*/
    _x_x3720 = kk_std_core_list_drop(_x_x3721, kk_integer_from_small(4), _ctx); /*list<10001>*/
    kk_integer_t _x_x3723 = kk_integer_add_small_const(kk_integer_from_small(5), -4, _ctx); /*int*/
    _x_x3719 = kk_std_core_list_take(_x_x3720, _x_x3723, _ctx); /*list<10001>*/
    _x_x3718 = kk_std_core_string_listchar_fs_string(_x_x3719, _ctx); /*string*/
    kk_string_t _x_x3724;
    kk_define_string_literal(static, _s_x3725, 1, "-", _ctx)
    _x_x3724 = kk_string_dup(_s_x3725, _ctx); /*string*/
    _match_x2872 = kk_string_is_neq(_x_x3718,_x_x3724,kk_context()); /*bool*/
    if (_match_x2872) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool _match_x2873;
      kk_string_t _x_x3726;
      kk_std_core_types__list _x_x3727;
      kk_std_core_types__list _x_x3728;
      kk_std_core_types__list _x_x3729;
      kk_string_t _x_x3730 = kk_string_dup(s, _ctx); /*string*/
      _x_x3729 = kk_std_core_string_list(_x_x3730, _ctx); /*list<char>*/
      _x_x3728 = kk_std_core_list_drop(_x_x3729, kk_integer_from_small(7), _ctx); /*list<10001>*/
      kk_integer_t _x_x3731 = kk_integer_add_small_const(kk_integer_from_small(8), -7, _ctx); /*int*/
      _x_x3727 = kk_std_core_list_take(_x_x3728, _x_x3731, _ctx); /*list<10001>*/
      _x_x3726 = kk_std_core_string_listchar_fs_string(_x_x3727, _ctx); /*string*/
      kk_string_t _x_x3732;
      kk_define_string_literal(static, _s_x3733, 1, "-", _ctx)
      _x_x3732 = kk_string_dup(_s_x3733, _ctx); /*string*/
      _match_x2873 = kk_string_is_neq(_x_x3726,_x_x3732,kk_context()); /*bool*/
      if (_match_x2873) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        bool b_10143;
        kk_string_t _x_x3734;
        kk_std_core_types__list _x_x3735;
        kk_std_core_types__list _x_x3736;
        kk_std_core_types__list _x_x3737;
        kk_string_t _x_x3738 = kk_string_dup(s, _ctx); /*string*/
        _x_x3737 = kk_std_core_string_list(_x_x3738, _ctx); /*list<char>*/
        _x_x3736 = kk_std_core_list_drop(_x_x3737, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3739 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
        _x_x3735 = kk_std_core_list_take(_x_x3736, _x_x3739, _ctx); /*list<10001>*/
        _x_x3734 = kk_std_core_string_listchar_fs_string(_x_x3735, _ctx); /*string*/
        b_10143 = kk_examples_basic_hc__all__digits(_x_x3734, _ctx); /*bool*/
        if (b_10143) {
          bool b_0_10146;
          kk_string_t _x_x3740;
          kk_std_core_types__list _x_x3741;
          kk_std_core_types__list _x_x3742;
          kk_std_core_types__list _x_x3743;
          kk_string_t _x_x3744 = kk_string_dup(s, _ctx); /*string*/
          _x_x3743 = kk_std_core_string_list(_x_x3744, _ctx); /*list<char>*/
          _x_x3742 = kk_std_core_list_drop(_x_x3743, kk_integer_from_small(5), _ctx); /*list<10001>*/
          kk_integer_t _x_x3745 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
          _x_x3741 = kk_std_core_list_take(_x_x3742, _x_x3745, _ctx); /*list<10001>*/
          _x_x3740 = kk_std_core_string_listchar_fs_string(_x_x3741, _ctx); /*string*/
          b_0_10146 = kk_examples_basic_hc__all__digits(_x_x3740, _ctx); /*bool*/
          if (b_0_10146) {
            bool b_1_10149;
            kk_string_t _x_x3746;
            kk_std_core_types__list _x_x3747;
            kk_std_core_types__list _x_x3748;
            kk_std_core_types__list _x_x3749;
            kk_string_t _x_x3750 = kk_string_dup(s, _ctx); /*string*/
            _x_x3749 = kk_std_core_string_list(_x_x3750, _ctx); /*list<char>*/
            _x_x3748 = kk_std_core_list_drop(_x_x3749, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3751 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
            _x_x3747 = kk_std_core_list_take(_x_x3748, _x_x3751, _ctx); /*list<10001>*/
            _x_x3746 = kk_std_core_string_listchar_fs_string(_x_x3747, _ctx); /*string*/
            b_1_10149 = kk_examples_basic_hc__all__digits(_x_x3746, _ctx); /*bool*/
            if (b_1_10149) {
              kk_string_t s_0_10152;
              kk_std_core_types__list _x_x3752;
              kk_std_core_types__list _x_x3753;
              kk_std_core_types__list _x_x3754;
              kk_string_t _x_x3755 = kk_string_dup(s, _ctx); /*string*/
              _x_x3754 = kk_std_core_string_list(_x_x3755, _ctx); /*list<char>*/
              _x_x3753 = kk_std_core_list_drop(_x_x3754, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x3756 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
              _x_x3752 = kk_std_core_list_take(_x_x3753, _x_x3756, _ctx); /*list<10001>*/
              s_0_10152 = kk_std_core_string_listchar_fs_string(_x_x3752, _ctx); /*string*/
              kk_std_core_types__maybe _match_x2874;
              bool _x_x3757;
              kk_std_core_types__optional _match_x2883 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
              if (kk_std_core_types__is_Optional(_match_x2883, _ctx)) {
                kk_box_t _box_x230 = _match_x2883._cons._Optional.value;
                bool _uniq_hex_581 = kk_bool_unbox(_box_x230);
                kk_std_core_types__optional_drop(_match_x2883, _ctx);
                _x_x3757 = _uniq_hex_581; /*bool*/
              }
              else {
                kk_std_core_types__optional_drop(_match_x2883, _ctx);
                _x_x3757 = false; /*bool*/
              }
              _match_x2874 = kk_std_core_int_xparse(s_0_10152, _x_x3757, _ctx); /*maybe<int>*/
              if (kk_std_core_types__is_Just(_match_x2874, _ctx)) {
                kk_box_t _box_x231 = _match_x2874._cons.Just.value;
                kk_integer_t y_5 = kk_integer_unbox(_box_x231, _ctx);
                kk_integer_dup(y_5, _ctx);
                kk_std_core_types__maybe_drop(_match_x2874, _ctx);
                kk_string_t s_1_10156;
                kk_std_core_types__list _x_x3758;
                kk_std_core_types__list _x_x3759;
                kk_std_core_types__list _x_x3760;
                kk_string_t _x_x3761 = kk_string_dup(s, _ctx); /*string*/
                _x_x3760 = kk_std_core_string_list(_x_x3761, _ctx); /*list<char>*/
                _x_x3759 = kk_std_core_list_drop(_x_x3760, kk_integer_from_small(5), _ctx); /*list<10001>*/
                kk_integer_t _x_x3762 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
                _x_x3758 = kk_std_core_list_take(_x_x3759, _x_x3762, _ctx); /*list<10001>*/
                s_1_10156 = kk_std_core_string_listchar_fs_string(_x_x3758, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2875;
                bool _x_x3763;
                kk_std_core_types__optional _match_x2882 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2882, _ctx)) {
                  kk_box_t _box_x232 = _match_x2882._cons._Optional.value;
                  bool _uniq_hex_581_0 = kk_bool_unbox(_box_x232);
                  kk_std_core_types__optional_drop(_match_x2882, _ctx);
                  _x_x3763 = _uniq_hex_581_0; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2882, _ctx);
                  _x_x3763 = false; /*bool*/
                }
                _match_x2875 = kk_std_core_int_xparse(s_1_10156, _x_x3763, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2875, _ctx)) {
                  kk_box_t _box_x233 = _match_x2875._cons.Just.value;
                  kk_integer_t m = kk_integer_unbox(_box_x233, _ctx);
                  kk_integer_dup(m, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2875, _ctx);
                  kk_string_t s_2_10160;
                  kk_std_core_types__list _x_x3764;
                  kk_std_core_types__list _x_x3765;
                  kk_std_core_types__list _x_x3766 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x3765 = kk_std_core_list_drop(_x_x3766, kk_integer_from_small(8), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3767 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
                  _x_x3764 = kk_std_core_list_take(_x_x3765, _x_x3767, _ctx); /*list<10001>*/
                  s_2_10160 = kk_std_core_string_listchar_fs_string(_x_x3764, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2876;
                  bool _x_x3768;
                  kk_std_core_types__optional _match_x2881 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2881, _ctx)) {
                    kk_box_t _box_x234 = _match_x2881._cons._Optional.value;
                    bool _uniq_hex_581_1 = kk_bool_unbox(_box_x234);
                    kk_std_core_types__optional_drop(_match_x2881, _ctx);
                    _x_x3768 = _uniq_hex_581_1; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2881, _ctx);
                    _x_x3768 = false; /*bool*/
                  }
                  _match_x2876 = kk_std_core_int_xparse(s_2_10160, _x_x3768, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2876, _ctx)) {
                    kk_box_t _box_x235 = _match_x2876._cons.Just.value;
                    kk_integer_t d = kk_integer_unbox(_box_x235, _ctx);
                    kk_integer_dup(d, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2876, _ctx);
                    bool _match_x2877 = kk_integer_gte_borrow(m,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                    if (_match_x2877) {
                      bool _match_x2878 = kk_integer_lte_borrow(m,(kk_integer_from_small(12)),kk_context()); /*bool*/;
                      if (_match_x2878) {
                        kk_integer_t hi_0_10169 = kk_examples_basic_hc__days__in__month(y_5, m, _ctx); /*int*/;
                        bool _match_x2879 = kk_integer_gte_borrow(d,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                        if (_match_x2879) {
                          bool _brw_x2880 = kk_integer_lte_borrow(d,hi_0_10169,kk_context()); /*bool*/;
                          kk_integer_drop(d, _ctx);
                          kk_integer_drop(hi_0_10169, _ctx);
                          return _brw_x2880;
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

bool kk_examples_basic_hc__is__valid__time__short(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10170;
  kk_std_core_types__list _x_x3769;
  kk_std_core_types__list _x_x3770;
  kk_std_core_types__list _x_x3771;
  kk_string_t _x_x3772 = kk_string_dup(s, _ctx); /*string*/
  _x_x3771 = kk_std_core_string_list(_x_x3772, _ctx); /*list<char>*/
  _x_x3770 = kk_std_core_list_drop(_x_x3771, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x3773 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
  _x_x3769 = kk_std_core_list_take(_x_x3770, _x_x3773, _ctx); /*list<10001>*/
  s_0_10170 = kk_std_core_string_listchar_fs_string(_x_x3769, _ctx); /*string*/
  kk_std_core_types__maybe _match_x2862;
  bool _x_x3774;
  kk_std_core_types__optional _match_x2870 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2870, _ctx)) {
    kk_box_t _box_x236 = _match_x2870._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x236);
    kk_std_core_types__optional_drop(_match_x2870, _ctx);
    _x_x3774 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2870, _ctx);
    _x_x3774 = false; /*bool*/
  }
  _match_x2862 = kk_std_core_int_xparse(s_0_10170, _x_x3774, _ctx); /*maybe<int>*/
  if (kk_std_core_types__is_Just(_match_x2862, _ctx)) {
    kk_box_t _box_x237 = _match_x2862._cons.Just.value;
    kk_integer_t h = kk_integer_unbox(_box_x237, _ctx);
    kk_integer_dup(h, _ctx);
    kk_std_core_types__maybe_drop(_match_x2862, _ctx);
    kk_string_t s_1_10174;
    kk_std_core_types__list _x_x3775;
    kk_std_core_types__list _x_x3776;
    kk_std_core_types__list _x_x3777 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3776 = kk_std_core_list_drop(_x_x3777, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3778 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3775 = kk_std_core_list_take(_x_x3776, _x_x3778, _ctx); /*list<10001>*/
    s_1_10174 = kk_std_core_string_listchar_fs_string(_x_x3775, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2863;
    bool _x_x3779;
    kk_std_core_types__optional _match_x2869 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2869, _ctx)) {
      kk_box_t _box_x238 = _match_x2869._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x238);
      kk_std_core_types__optional_drop(_match_x2869, _ctx);
      _x_x3779 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2869, _ctx);
      _x_x3779 = false; /*bool*/
    }
    _match_x2863 = kk_std_core_int_xparse(s_1_10174, _x_x3779, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2863, _ctx)) {
      kk_box_t _box_x239 = _match_x2863._cons.Just.value;
      kk_integer_t m = kk_integer_unbox(_box_x239, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__maybe_drop(_match_x2863, _ctx);
      bool _match_x2864 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2864) {
        bool _match_x2865;
        bool _brw_x2868 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
        kk_integer_drop(h, _ctx);
        _match_x2865 = _brw_x2868; /*bool*/
        if (_match_x2865) {
          bool _match_x2866 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2866) {
            bool _brw_x2867 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
            kk_integer_drop(m, _ctx);
            return _brw_x2867;
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

bool kk_examples_basic_hc__is__valid__time__full(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool b_10184;
  kk_string_t _x_x3780;
  kk_std_core_types__list _x_x3781;
  kk_std_core_types__list _x_x3782;
  kk_std_core_types__list _x_x3783;
  kk_string_t _x_x3784 = kk_string_dup(s, _ctx); /*string*/
  _x_x3783 = kk_std_core_string_list(_x_x3784, _ctx); /*list<char>*/
  _x_x3782 = kk_std_core_list_drop(_x_x3783, kk_integer_from_small(6), _ctx); /*list<10001>*/
  kk_integer_t _x_x3785 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
  _x_x3781 = kk_std_core_list_take(_x_x3782, _x_x3785, _ctx); /*list<10001>*/
  _x_x3780 = kk_std_core_string_listchar_fs_string(_x_x3781, _ctx); /*string*/
  b_10184 = kk_examples_basic_hc__all__digits(_x_x3780, _ctx); /*bool*/
  if (b_10184) {
    kk_string_t s_0_10187;
    kk_std_core_types__list _x_x3786;
    kk_std_core_types__list _x_x3787;
    kk_std_core_types__list _x_x3788;
    kk_string_t _x_x3789 = kk_string_dup(s, _ctx); /*string*/
    _x_x3788 = kk_std_core_string_list(_x_x3789, _ctx); /*list<char>*/
    _x_x3787 = kk_std_core_list_drop(_x_x3788, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x3790 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
    _x_x3786 = kk_std_core_list_take(_x_x3787, _x_x3790, _ctx); /*list<10001>*/
    s_0_10187 = kk_std_core_string_listchar_fs_string(_x_x3786, _ctx); /*string*/
    kk_std_core_types__maybe hh;
    bool _x_x3791;
    kk_std_core_types__optional _match_x2861 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2861, _ctx)) {
      kk_box_t _box_x240 = _match_x2861._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x240);
      kk_std_core_types__optional_drop(_match_x2861, _ctx);
      _x_x3791 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2861, _ctx);
      _x_x3791 = false; /*bool*/
    }
    hh = kk_std_core_int_xparse(s_0_10187, _x_x3791, _ctx); /*maybe<int>*/
    kk_string_t s_1_10191;
    kk_std_core_types__list _x_x3792;
    kk_std_core_types__list _x_x3793;
    kk_std_core_types__list _x_x3794;
    kk_string_t _x_x3795 = kk_string_dup(s, _ctx); /*string*/
    _x_x3794 = kk_std_core_string_list(_x_x3795, _ctx); /*list<char>*/
    _x_x3793 = kk_std_core_list_drop(_x_x3794, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3796 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3792 = kk_std_core_list_take(_x_x3793, _x_x3796, _ctx); /*list<10001>*/
    s_1_10191 = kk_std_core_string_listchar_fs_string(_x_x3792, _ctx); /*string*/
    kk_std_core_types__maybe mm;
    bool _x_x3797;
    kk_std_core_types__optional _match_x2860 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2860, _ctx)) {
      kk_box_t _box_x241 = _match_x2860._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x241);
      kk_std_core_types__optional_drop(_match_x2860, _ctx);
      _x_x3797 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2860, _ctx);
      _x_x3797 = false; /*bool*/
    }
    mm = kk_std_core_int_xparse(s_1_10191, _x_x3797, _ctx); /*maybe<int>*/
    kk_string_t s_2_10195;
    kk_std_core_types__list _x_x3798;
    kk_std_core_types__list _x_x3799;
    kk_std_core_types__list _x_x3800;
    kk_string_t _x_x3801 = kk_string_dup(s, _ctx); /*string*/
    _x_x3800 = kk_std_core_string_list(_x_x3801, _ctx); /*list<char>*/
    _x_x3799 = kk_std_core_list_drop(_x_x3800, kk_integer_from_small(6), _ctx); /*list<10001>*/
    kk_integer_t _x_x3802 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
    _x_x3798 = kk_std_core_list_take(_x_x3799, _x_x3802, _ctx); /*list<10001>*/
    s_2_10195 = kk_std_core_string_listchar_fs_string(_x_x3798, _ctx); /*string*/
    kk_std_core_types__maybe ss;
    bool _x_x3803;
    kk_std_core_types__optional _match_x2859 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2859, _ctx)) {
      kk_box_t _box_x242 = _match_x2859._cons._Optional.value;
      bool _uniq_hex_581_1 = kk_bool_unbox(_box_x242);
      kk_std_core_types__optional_drop(_match_x2859, _ctx);
      _x_x3803 = _uniq_hex_581_1; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2859, _ctx);
      _x_x3803 = false; /*bool*/
    }
    ss = kk_std_core_int_xparse(s_2_10195, _x_x3803, _ctx); /*maybe<int>*/
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
          bool _match_x2851 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2851) {
            bool _match_x2852;
            bool _brw_x2858 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
            kk_integer_drop(h, _ctx);
            _match_x2852 = _brw_x2858; /*bool*/
            if (_match_x2852) {
              bool _match_x2853 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
              if (_match_x2853) {
                bool _match_x2854;
                bool _brw_x2857 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                kk_integer_drop(m, _ctx);
                _match_x2854 = _brw_x2857; /*bool*/
                if (_match_x2854) {
                  bool _match_x2855 = kk_integer_gte_borrow(sec,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                  if (_match_x2855) {
                    bool _brw_x2856 = kk_integer_lte_borrow(sec,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                    kk_integer_drop(sec, _ctx);
                    base__ok = _brw_x2856; /*bool*/
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
          bool _match_x2844;
          kk_integer_t _brw_x2849;
          kk_string_t _x_x3804 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2849 = kk_std_core_string_chars_fs_count(_x_x3804, _ctx); /*int*/
          bool _brw_x2850 = kk_integer_eq_borrow(_brw_x2849,(kk_integer_from_small(8)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2849, _ctx);
          _match_x2844 = _brw_x2850; /*bool*/
          if (_match_x2844) {
            kk_string_drop(s, _ctx);
            return base__ok;
          }
          {
            bool _match_x2845;
            kk_string_t _x_x3805;
            kk_std_core_types__list _x_x3806;
            kk_std_core_types__list _x_x3807;
            kk_std_core_types__list _x_x3808;
            kk_string_t _x_x3809 = kk_string_dup(s, _ctx); /*string*/
            _x_x3808 = kk_std_core_string_list(_x_x3809, _ctx); /*list<char>*/
            _x_x3807 = kk_std_core_list_drop(_x_x3808, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3810 = kk_integer_add_small_const(kk_integer_from_small(9), -8, _ctx); /*int*/
            _x_x3806 = kk_std_core_list_take(_x_x3807, _x_x3810, _ctx); /*list<10001>*/
            _x_x3805 = kk_std_core_string_listchar_fs_string(_x_x3806, _ctx); /*string*/
            kk_string_t _x_x3811;
            kk_define_string_literal(static, _s_x3812, 1, ".", _ctx)
            _x_x3811 = kk_string_dup(_s_x3812, _ctx); /*string*/
            _match_x2845 = kk_string_is_eq(_x_x3805,_x_x3811,kk_context()); /*bool*/
            if (_match_x2845) {
              kk_string_t frac;
              kk_std_core_types__list _x_x3813;
              kk_std_core_types__list _x_x3814 = kk_std_core_string_list(s, _ctx); /*list<char>*/
              _x_x3813 = kk_std_core_list_drop(_x_x3814, kk_integer_from_small(9), _ctx); /*list<10001>*/
              frac = kk_std_core_string_listchar_fs_string(_x_x3813, _ctx); /*string*/
              if (base__ok) {
                bool _match_x2846;
                kk_integer_t _brw_x2847;
                kk_string_t _x_x3815 = kk_string_dup(frac, _ctx); /*string*/
                _brw_x2847 = kk_std_core_string_chars_fs_count(_x_x3815, _ctx); /*int*/
                bool _brw_x2848 = kk_integer_gt_borrow(_brw_x2847,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                kk_integer_drop(_brw_x2847, _ctx);
                _match_x2846 = _brw_x2848; /*bool*/
                if (_match_x2846) {
                  return kk_examples_basic_hc__all__digits(frac, _ctx);
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

bool kk_examples_basic_hc__is__valid__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2833;
  kk_integer_t _brw_x2842;
  kk_string_t _x_x3816 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2842 = kk_std_core_string_chars_fs_count(_x_x3816, _ctx); /*int*/
  bool _brw_x2843 = kk_integer_lt_borrow(_brw_x2842,(kk_integer_from_small(5)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2842, _ctx);
  _match_x2833 = _brw_x2843; /*bool*/
  if (_match_x2833) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2834;
    kk_string_t _x_x3817;
    kk_std_core_types__list _x_x3818;
    kk_std_core_types__list _x_x3819;
    kk_std_core_types__list _x_x3820;
    kk_string_t _x_x3821 = kk_string_dup(s, _ctx); /*string*/
    _x_x3820 = kk_std_core_string_list(_x_x3821, _ctx); /*list<char>*/
    _x_x3819 = kk_std_core_list_drop(_x_x3820, kk_integer_from_small(2), _ctx); /*list<10001>*/
    kk_integer_t _x_x3822 = kk_integer_add_small_const(kk_integer_from_small(3), -2, _ctx); /*int*/
    _x_x3818 = kk_std_core_list_take(_x_x3819, _x_x3822, _ctx); /*list<10001>*/
    _x_x3817 = kk_std_core_string_listchar_fs_string(_x_x3818, _ctx); /*string*/
    kk_string_t _x_x3823;
    kk_define_string_literal(static, _s_x3824, 1, ":", _ctx)
    _x_x3823 = kk_string_dup(_s_x3824, _ctx); /*string*/
    _match_x2834 = kk_string_is_neq(_x_x3817,_x_x3823,kk_context()); /*bool*/
    if (_match_x2834) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool b_10212;
      kk_string_t _x_x3825;
      kk_std_core_types__list _x_x3826;
      kk_std_core_types__list _x_x3827;
      kk_std_core_types__list _x_x3828;
      kk_string_t _x_x3829 = kk_string_dup(s, _ctx); /*string*/
      _x_x3828 = kk_std_core_string_list(_x_x3829, _ctx); /*list<char>*/
      _x_x3827 = kk_std_core_list_drop(_x_x3828, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x3830 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x3826 = kk_std_core_list_take(_x_x3827, _x_x3830, _ctx); /*list<10001>*/
      _x_x3825 = kk_std_core_string_listchar_fs_string(_x_x3826, _ctx); /*string*/
      b_10212 = kk_examples_basic_hc__all__digits(_x_x3825, _ctx); /*bool*/
      if (b_10212) {
        bool b_0_10215;
        kk_string_t _x_x3831;
        kk_std_core_types__list _x_x3832;
        kk_std_core_types__list _x_x3833;
        kk_std_core_types__list _x_x3834;
        kk_string_t _x_x3835 = kk_string_dup(s, _ctx); /*string*/
        _x_x3834 = kk_std_core_string_list(_x_x3835, _ctx); /*list<char>*/
        _x_x3833 = kk_std_core_list_drop(_x_x3834, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x3836 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x3832 = kk_std_core_list_take(_x_x3833, _x_x3836, _ctx); /*list<10001>*/
        _x_x3831 = kk_std_core_string_listchar_fs_string(_x_x3832, _ctx); /*string*/
        b_0_10215 = kk_examples_basic_hc__all__digits(_x_x3831, _ctx); /*bool*/
        if (b_0_10215) {
          bool _match_x2835;
          kk_integer_t _brw_x2840;
          kk_string_t _x_x3837 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2840 = kk_std_core_string_chars_fs_count(_x_x3837, _ctx); /*int*/
          bool _brw_x2841 = kk_integer_eq_borrow(_brw_x2840,(kk_integer_from_small(5)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2840, _ctx);
          _match_x2835 = _brw_x2841; /*bool*/
          if (_match_x2835) {
            return kk_examples_basic_hc__is__valid__time__short(s, _ctx);
          }
          {
            bool _match_x2836;
            kk_integer_t _brw_x2838;
            kk_string_t _x_x3838 = kk_string_dup(s, _ctx); /*string*/
            _brw_x2838 = kk_std_core_string_chars_fs_count(_x_x3838, _ctx); /*int*/
            bool _brw_x2839 = kk_integer_gte_borrow(_brw_x2838,(kk_integer_from_small(8)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2838, _ctx);
            _match_x2836 = _brw_x2839; /*bool*/
            if (_match_x2836) {
              bool _match_x2837;
              kk_string_t _x_x3839;
              kk_std_core_types__list _x_x3840;
              kk_std_core_types__list _x_x3841;
              kk_std_core_types__list _x_x3842;
              kk_string_t _x_x3843 = kk_string_dup(s, _ctx); /*string*/
              _x_x3842 = kk_std_core_string_list(_x_x3843, _ctx); /*list<char>*/
              _x_x3841 = kk_std_core_list_drop(_x_x3842, kk_integer_from_small(5), _ctx); /*list<10001>*/
              kk_integer_t _x_x3844 = kk_integer_add_small_const(kk_integer_from_small(6), -5, _ctx); /*int*/
              _x_x3840 = kk_std_core_list_take(_x_x3841, _x_x3844, _ctx); /*list<10001>*/
              _x_x3839 = kk_std_core_string_listchar_fs_string(_x_x3840, _ctx); /*string*/
              kk_string_t _x_x3845;
              kk_define_string_literal(static, _s_x3846, 1, ":", _ctx)
              _x_x3845 = kk_string_dup(_s_x3846, _ctx); /*string*/
              _match_x2837 = kk_string_is_eq(_x_x3839,_x_x3845,kk_context()); /*bool*/
              if (_match_x2837) {
                return kk_examples_basic_hc__is__valid__time__full(s, _ctx);
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

bool kk_examples_basic_hc__is__valid__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2806;
  kk_string_t _x_x3847 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3848;
  kk_define_string_literal(static, _s_x3849, 1, "Z", _ctx)
  _x_x3848 = kk_string_dup(_s_x3849, _ctx); /*string*/
  _match_x2806 = kk_string_is_eq(_x_x3847,_x_x3848,kk_context()); /*bool*/
  if (_match_x2806) {
    kk_string_drop(s, _ctx);
    return true;
  }
  {
    bool _match_x2807;
    kk_string_t _x_x3850 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3851;
    kk_define_string_literal(static, _s_x3852, 1, "z", _ctx)
    _x_x3851 = kk_string_dup(_s_x3852, _ctx); /*string*/
    _match_x2807 = kk_string_is_eq(_x_x3850,_x_x3851,kk_context()); /*bool*/
    if (_match_x2807) {
      kk_string_drop(s, _ctx);
      return true;
    }
    {
      bool _match_x2808;
      kk_integer_t _brw_x2831;
      kk_string_t _x_x3853 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2831 = kk_std_core_string_chars_fs_count(_x_x3853, _ctx); /*int*/
      bool _brw_x2832 = kk_integer_neq_borrow(_brw_x2831,(kk_integer_from_small(6)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2831, _ctx);
      _match_x2808 = _brw_x2832; /*bool*/
      if (_match_x2808) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        kk_string_t hc__sign_0;
        kk_std_core_types__list _x_x3854;
        kk_std_core_types__list _x_x3855;
        kk_std_core_types__list _x_x3856;
        kk_string_t _x_x3857 = kk_string_dup(s, _ctx); /*string*/
        _x_x3856 = kk_std_core_string_list(_x_x3857, _ctx); /*list<char>*/
        _x_x3855 = kk_std_core_list_drop(_x_x3856, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3858 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x3854 = kk_std_core_list_take(_x_x3855, _x_x3858, _ctx); /*list<10001>*/
        hc__sign_0 = kk_std_core_string_listchar_fs_string(_x_x3854, _ctx); /*string*/
        bool _match_x2809;
        kk_string_t _x_x3859 = kk_string_dup(hc__sign_0, _ctx); /*string*/
        kk_string_t _x_x3860;
        kk_define_string_literal(static, _s_x3861, 1, "+", _ctx)
        _x_x3860 = kk_string_dup(_s_x3861, _ctx); /*string*/
        _match_x2809 = kk_string_is_neq(_x_x3859,_x_x3860,kk_context()); /*bool*/
        if (_match_x2809) {
          bool _match_x2820;
          kk_string_t _x_x3862;
          kk_define_string_literal(static, _s_x3863, 1, "-", _ctx)
          _x_x3862 = kk_string_dup(_s_x3863, _ctx); /*string*/
          _match_x2820 = kk_string_is_neq(hc__sign_0,_x_x3862,kk_context()); /*bool*/
          if (_match_x2820) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool _match_x2821;
            kk_string_t _x_x3864;
            kk_std_core_types__list _x_x3865;
            kk_std_core_types__list _x_x3866;
            kk_std_core_types__list _x_x3867;
            kk_string_t _x_x3868 = kk_string_dup(s, _ctx); /*string*/
            _x_x3867 = kk_std_core_string_list(_x_x3868, _ctx); /*list<char>*/
            _x_x3866 = kk_std_core_list_drop(_x_x3867, kk_integer_from_small(3), _ctx); /*list<10001>*/
            kk_integer_t _x_x3869 = kk_integer_add_small_const(kk_integer_from_small(4), -3, _ctx); /*int*/
            _x_x3865 = kk_std_core_list_take(_x_x3866, _x_x3869, _ctx); /*list<10001>*/
            _x_x3864 = kk_std_core_string_listchar_fs_string(_x_x3865, _ctx); /*string*/
            kk_string_t _x_x3870;
            kk_define_string_literal(static, _s_x3871, 1, ":", _ctx)
            _x_x3870 = kk_string_dup(_s_x3871, _ctx); /*string*/
            _match_x2821 = kk_string_is_neq(_x_x3864,_x_x3870,kk_context()); /*bool*/
            if (_match_x2821) {
              kk_string_drop(s, _ctx);
              return false;
            }
            {
              bool b_10224;
              kk_string_t _x_x3872;
              kk_std_core_types__list _x_x3873;
              kk_std_core_types__list _x_x3874;
              kk_std_core_types__list _x_x3875;
              kk_string_t _x_x3876 = kk_string_dup(s, _ctx); /*string*/
              _x_x3875 = kk_std_core_string_list(_x_x3876, _ctx); /*list<char>*/
              _x_x3874 = kk_std_core_list_drop(_x_x3875, kk_integer_from_small(1), _ctx); /*list<10001>*/
              kk_integer_t _x_x3877 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
              _x_x3873 = kk_std_core_list_take(_x_x3874, _x_x3877, _ctx); /*list<10001>*/
              _x_x3872 = kk_std_core_string_listchar_fs_string(_x_x3873, _ctx); /*string*/
              b_10224 = kk_examples_basic_hc__all__digits(_x_x3872, _ctx); /*bool*/
              if (b_10224) {
                bool b_0_10227;
                kk_string_t _x_x3878;
                kk_std_core_types__list _x_x3879;
                kk_std_core_types__list _x_x3880;
                kk_std_core_types__list _x_x3881;
                kk_string_t _x_x3882 = kk_string_dup(s, _ctx); /*string*/
                _x_x3881 = kk_std_core_string_list(_x_x3882, _ctx); /*list<char>*/
                _x_x3880 = kk_std_core_list_drop(_x_x3881, kk_integer_from_small(4), _ctx); /*list<10001>*/
                kk_integer_t _x_x3883 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                _x_x3879 = kk_std_core_list_take(_x_x3880, _x_x3883, _ctx); /*list<10001>*/
                _x_x3878 = kk_std_core_string_listchar_fs_string(_x_x3879, _ctx); /*string*/
                b_0_10227 = kk_examples_basic_hc__all__digits(_x_x3878, _ctx); /*bool*/
                if (b_0_10227) {
                  kk_string_t s_0_10230;
                  kk_std_core_types__list _x_x3884;
                  kk_std_core_types__list _x_x3885;
                  kk_std_core_types__list _x_x3886;
                  kk_string_t _x_x3887 = kk_string_dup(s, _ctx); /*string*/
                  _x_x3886 = kk_std_core_string_list(_x_x3887, _ctx); /*list<char>*/
                  _x_x3885 = kk_std_core_list_drop(_x_x3886, kk_integer_from_small(1), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3888 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                  _x_x3884 = kk_std_core_list_take(_x_x3885, _x_x3888, _ctx); /*list<10001>*/
                  s_0_10230 = kk_std_core_string_listchar_fs_string(_x_x3884, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2822;
                  bool _x_x3889;
                  kk_std_core_types__optional _match_x2830 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2830, _ctx)) {
                    kk_box_t _box_x246 = _match_x2830._cons._Optional.value;
                    bool _uniq_hex_581 = kk_bool_unbox(_box_x246);
                    kk_std_core_types__optional_drop(_match_x2830, _ctx);
                    _x_x3889 = _uniq_hex_581; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2830, _ctx);
                    _x_x3889 = false; /*bool*/
                  }
                  _match_x2822 = kk_std_core_int_xparse(s_0_10230, _x_x3889, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2822, _ctx)) {
                    kk_box_t _box_x247 = _match_x2822._cons.Just.value;
                    kk_integer_t h = kk_integer_unbox(_box_x247, _ctx);
                    kk_integer_dup(h, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2822, _ctx);
                    kk_string_t s_1_10234;
                    kk_std_core_types__list _x_x3890;
                    kk_std_core_types__list _x_x3891;
                    kk_std_core_types__list _x_x3892 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                    _x_x3891 = kk_std_core_list_drop(_x_x3892, kk_integer_from_small(4), _ctx); /*list<10001>*/
                    kk_integer_t _x_x3893 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                    _x_x3890 = kk_std_core_list_take(_x_x3891, _x_x3893, _ctx); /*list<10001>*/
                    s_1_10234 = kk_std_core_string_listchar_fs_string(_x_x3890, _ctx); /*string*/
                    kk_std_core_types__maybe _match_x2823;
                    bool _x_x3894;
                    kk_std_core_types__optional _match_x2829 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                    if (kk_std_core_types__is_Optional(_match_x2829, _ctx)) {
                      kk_box_t _box_x248 = _match_x2829._cons._Optional.value;
                      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x248);
                      kk_std_core_types__optional_drop(_match_x2829, _ctx);
                      _x_x3894 = _uniq_hex_581_0; /*bool*/
                    }
                    else {
                      kk_std_core_types__optional_drop(_match_x2829, _ctx);
                      _x_x3894 = false; /*bool*/
                    }
                    _match_x2823 = kk_std_core_int_xparse(s_1_10234, _x_x3894, _ctx); /*maybe<int>*/
                    if (kk_std_core_types__is_Just(_match_x2823, _ctx)) {
                      kk_box_t _box_x249 = _match_x2823._cons.Just.value;
                      kk_integer_t m = kk_integer_unbox(_box_x249, _ctx);
                      kk_integer_dup(m, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2823, _ctx);
                      bool _match_x2824 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                      if (_match_x2824) {
                        bool _match_x2825;
                        bool _brw_x2828 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                        kk_integer_drop(h, _ctx);
                        _match_x2825 = _brw_x2828; /*bool*/
                        if (_match_x2825) {
                          bool _match_x2826 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                          if (_match_x2826) {
                            bool _brw_x2827 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                            kk_integer_drop(m, _ctx);
                            return _brw_x2827;
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
          bool _match_x2810;
          kk_string_t _x_x3895;
          kk_std_core_types__list _x_x3896;
          kk_std_core_types__list _x_x3897;
          kk_std_core_types__list _x_x3898;
          kk_string_t _x_x3899 = kk_string_dup(s, _ctx); /*string*/
          _x_x3898 = kk_std_core_string_list(_x_x3899, _ctx); /*list<char>*/
          _x_x3897 = kk_std_core_list_drop(_x_x3898, kk_integer_from_small(3), _ctx); /*list<10001>*/
          kk_integer_t _x_x3900 = kk_integer_add_small_const(kk_integer_from_small(4), -3, _ctx); /*int*/
          _x_x3896 = kk_std_core_list_take(_x_x3897, _x_x3900, _ctx); /*list<10001>*/
          _x_x3895 = kk_std_core_string_listchar_fs_string(_x_x3896, _ctx); /*string*/
          kk_string_t _x_x3901;
          kk_define_string_literal(static, _s_x3902, 1, ":", _ctx)
          _x_x3901 = kk_string_dup(_s_x3902, _ctx); /*string*/
          _match_x2810 = kk_string_is_neq(_x_x3895,_x_x3901,kk_context()); /*bool*/
          if (_match_x2810) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool b_1_10246;
            kk_string_t _x_x3903;
            kk_std_core_types__list _x_x3904;
            kk_std_core_types__list _x_x3905;
            kk_std_core_types__list _x_x3906;
            kk_string_t _x_x3907 = kk_string_dup(s, _ctx); /*string*/
            _x_x3906 = kk_std_core_string_list(_x_x3907, _ctx); /*list<char>*/
            _x_x3905 = kk_std_core_list_drop(_x_x3906, kk_integer_from_small(1), _ctx); /*list<10001>*/
            kk_integer_t _x_x3908 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
            _x_x3904 = kk_std_core_list_take(_x_x3905, _x_x3908, _ctx); /*list<10001>*/
            _x_x3903 = kk_std_core_string_listchar_fs_string(_x_x3904, _ctx); /*string*/
            b_1_10246 = kk_examples_basic_hc__all__digits(_x_x3903, _ctx); /*bool*/
            if (b_1_10246) {
              bool b_2_10249;
              kk_string_t _x_x3909;
              kk_std_core_types__list _x_x3910;
              kk_std_core_types__list _x_x3911;
              kk_std_core_types__list _x_x3912;
              kk_string_t _x_x3913 = kk_string_dup(s, _ctx); /*string*/
              _x_x3912 = kk_std_core_string_list(_x_x3913, _ctx); /*list<char>*/
              _x_x3911 = kk_std_core_list_drop(_x_x3912, kk_integer_from_small(4), _ctx); /*list<10001>*/
              kk_integer_t _x_x3914 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
              _x_x3910 = kk_std_core_list_take(_x_x3911, _x_x3914, _ctx); /*list<10001>*/
              _x_x3909 = kk_std_core_string_listchar_fs_string(_x_x3910, _ctx); /*string*/
              b_2_10249 = kk_examples_basic_hc__all__digits(_x_x3909, _ctx); /*bool*/
              if (b_2_10249) {
                kk_string_t s_2_10252;
                kk_std_core_types__list _x_x3915;
                kk_std_core_types__list _x_x3916;
                kk_std_core_types__list _x_x3917;
                kk_string_t _x_x3918 = kk_string_dup(s, _ctx); /*string*/
                _x_x3917 = kk_std_core_string_list(_x_x3918, _ctx); /*list<char>*/
                _x_x3916 = kk_std_core_list_drop(_x_x3917, kk_integer_from_small(1), _ctx); /*list<10001>*/
                kk_integer_t _x_x3919 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                _x_x3915 = kk_std_core_list_take(_x_x3916, _x_x3919, _ctx); /*list<10001>*/
                s_2_10252 = kk_std_core_string_listchar_fs_string(_x_x3915, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2811;
                bool _x_x3920;
                kk_std_core_types__optional _match_x2819 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2819, _ctx)) {
                  kk_box_t _box_x250 = _match_x2819._cons._Optional.value;
                  bool _uniq_hex_581_1 = kk_bool_unbox(_box_x250);
                  kk_std_core_types__optional_drop(_match_x2819, _ctx);
                  _x_x3920 = _uniq_hex_581_1; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2819, _ctx);
                  _x_x3920 = false; /*bool*/
                }
                _match_x2811 = kk_std_core_int_xparse(s_2_10252, _x_x3920, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2811, _ctx)) {
                  kk_box_t _box_x251 = _match_x2811._cons.Just.value;
                  kk_integer_t h_0 = kk_integer_unbox(_box_x251, _ctx);
                  kk_integer_dup(h_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2811, _ctx);
                  kk_string_t s_3_10256;
                  kk_std_core_types__list _x_x3921;
                  kk_std_core_types__list _x_x3922;
                  kk_std_core_types__list _x_x3923 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x3922 = kk_std_core_list_drop(_x_x3923, kk_integer_from_small(4), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3924 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                  _x_x3921 = kk_std_core_list_take(_x_x3922, _x_x3924, _ctx); /*list<10001>*/
                  s_3_10256 = kk_std_core_string_listchar_fs_string(_x_x3921, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2812;
                  bool _x_x3925;
                  kk_std_core_types__optional _match_x2818 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2818, _ctx)) {
                    kk_box_t _box_x252 = _match_x2818._cons._Optional.value;
                    bool _uniq_hex_581_2 = kk_bool_unbox(_box_x252);
                    kk_std_core_types__optional_drop(_match_x2818, _ctx);
                    _x_x3925 = _uniq_hex_581_2; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2818, _ctx);
                    _x_x3925 = false; /*bool*/
                  }
                  _match_x2812 = kk_std_core_int_xparse(s_3_10256, _x_x3925, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2812, _ctx)) {
                    kk_box_t _box_x253 = _match_x2812._cons.Just.value;
                    kk_integer_t m_0 = kk_integer_unbox(_box_x253, _ctx);
                    kk_integer_dup(m_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2812, _ctx);
                    bool _match_x2813 = kk_integer_gte_borrow(h_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                    if (_match_x2813) {
                      bool _match_x2814;
                      bool _brw_x2817 = kk_integer_lte_borrow(h_0,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                      kk_integer_drop(h_0, _ctx);
                      _match_x2814 = _brw_x2817; /*bool*/
                      if (_match_x2814) {
                        bool _match_x2815 = kk_integer_gte_borrow(m_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                        if (_match_x2815) {
                          bool _brw_x2816 = kk_integer_lte_borrow(m_0,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                          kk_integer_drop(m_0, _ctx);
                          return _brw_x2816;
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

bool kk_examples_basic_hc__check__z__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  kk_integer_t zi;
  kk_std_core_types__maybe _match_x2802;
  kk_string_t _x_x3926 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x3927;
  kk_define_string_literal(static, _s_x3928, 1, "Z", _ctx)
  _x_x3927 = kk_string_dup(_s_x3928, _ctx); /*string*/
  _match_x2802 = kk_std_core_sslice_find(_x_x3926, _x_x3927, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x2802, _ctx)) {
    kk_box_t _box_x254 = _match_x2802._cons.Just.value;
    kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x254, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
    kk_std_core_types__maybe_drop(_match_x2802, _ctx);
    kk_std_core_sslice__sslice _x_x3929;
    {
      kk_string_t s = hc____ss.str;
      kk_integer_t start = hc____ss.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
      _x_x3929 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    zi = kk_std_core_sslice_count(_x_x3929, _ctx); /*int*/
  }
  else {
    kk_std_core_types__maybe _match_x2803 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2803, _ctx)) {
      kk_box_t _box_x255 = _match_x2803._cons.Just.value;
      kk_integer_t i = kk_integer_unbox(_box_x255, _ctx);
      kk_integer_dup(i, _ctx);
      kk_std_core_types__maybe_drop(_match_x2803, _ctx);
      zi = i; /*int*/
    }
    else {
      kk_std_core_types__maybe _match_x2804;
      kk_string_t _x_x3930 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x3931;
      kk_define_string_literal(static, _s_x3932, 1, "z", _ctx)
      _x_x3931 = kk_string_dup(_s_x3932, _ctx); /*string*/
      _match_x2804 = kk_std_core_sslice_find(_x_x3930, _x_x3931, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2804, _ctx)) {
        kk_box_t _box_x256 = _match_x2804._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x256, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2804, _ctx);
        kk_std_core_sslice__sslice _x_x3933;
        {
          kk_string_t s_0 = hc____ss_0.str;
          kk_integer_t start_0 = hc____ss_0.start;
          kk_string_dup(s_0, _ctx);
          kk_integer_dup(start_0, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
          _x_x3933 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
        }
        zi = kk_std_core_sslice_count(_x_x3933, _ctx); /*int*/
      }
      else {
        kk_std_core_types__maybe _match_x2805 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2805, _ctx)) {
          kk_box_t _box_x257 = _match_x2805._cons.Just.value;
          kk_integer_t i_0 = kk_integer_unbox(_box_x257, _ctx);
          kk_integer_dup(i_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2805, _ctx);
          zi = i_0; /*int*/
        }
        else {
          zi = kk_integer_from_small(0); /*int*/
        }
      }
    }
  }
  kk_string_t t;
  kk_std_core_types__list _x_x3934;
  kk_std_core_types__list _x_x3935;
  kk_std_core_types__list _x_x3936;
  kk_string_t _x_x3937 = kk_string_dup(rest, _ctx); /*string*/
  _x_x3936 = kk_std_core_string_list(_x_x3937, _ctx); /*list<char>*/
  _x_x3935 = kk_std_core_list_drop(_x_x3936, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x3938;
  kk_integer_t _x_x3939 = kk_integer_dup(zi, _ctx); /*int*/
  _x_x3938 = kk_integer_add_small_const(_x_x3939, 0, _ctx); /*int*/
  _x_x3934 = kk_std_core_list_take(_x_x3935, _x_x3938, _ctx); /*list<10001>*/
  t = kk_std_core_string_listchar_fs_string(_x_x3934, _ctx); /*string*/
  bool _match_x2801 = kk_examples_basic_hc__is__valid__time(t, _ctx); /*bool*/;
  if (_match_x2801) {
    kk_string_t _x_x3940;
    kk_std_core_types__list _x_x3941;
    kk_std_core_types__list _x_x3942 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
    _x_x3941 = kk_std_core_list_drop(_x_x3942, zi, _ctx); /*list<10001>*/
    _x_x3940 = kk_std_core_string_listchar_fs_string(_x_x3941, _ctx); /*string*/
    return kk_examples_basic_hc__is__valid__offset(_x_x3940, _ctx);
  }
  {
    kk_integer_drop(zi, _ctx);
    kk_string_drop(rest, _ctx);
    return false;
  }
}

bool kk_examples_basic_hc__check__numeric__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  bool _match_x2794;
  kk_integer_t _brw_x2799;
  kk_string_t _x_x3943 = kk_string_dup(rest, _ctx); /*string*/
  _brw_x2799 = kk_std_core_string_chars_fs_count(_x_x3943, _ctx); /*int*/
  bool _brw_x2800 = kk_integer_lt_borrow(_brw_x2799,(kk_integer_from_small(11)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2799, _ctx);
  _match_x2794 = _brw_x2800; /*bool*/
  if (_match_x2794) {
    kk_string_drop(rest, _ctx);
    return false;
  }
  {
    kk_integer_t x_10270;
    kk_string_t _x_x3944 = kk_string_dup(rest, _ctx); /*string*/
    x_10270 = kk_std_core_string_chars_fs_count(_x_x3944, _ctx); /*int*/
    kk_integer_t sign__pos = kk_integer_add_small_const(x_10270, -6, _ctx); /*int*/;
    kk_integer_t x_0_10272;
    kk_integer_t _x_x3945 = kk_integer_dup(sign__pos, _ctx); /*int*/
    x_0_10272 = kk_integer_add_small_const(_x_x3945, 1, _ctx); /*int*/
    kk_string_t sign__char;
    kk_std_core_types__list _x_x3946;
    kk_std_core_types__list _x_x3947;
    kk_std_core_types__list _x_x3948;
    kk_string_t _x_x3949 = kk_string_dup(rest, _ctx); /*string*/
    _x_x3948 = kk_std_core_string_list(_x_x3949, _ctx); /*list<char>*/
    kk_integer_t _x_x3950 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x3947 = kk_std_core_list_drop(_x_x3948, _x_x3950, _ctx); /*list<10001>*/
    kk_integer_t _x_x3951;
    kk_integer_t _x_x3952 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x3951 = kk_integer_sub(x_0_10272,_x_x3952,kk_context()); /*int*/
    _x_x3946 = kk_std_core_list_take(_x_x3947, _x_x3951, _ctx); /*list<10001>*/
    sign__char = kk_std_core_string_listchar_fs_string(_x_x3946, _ctx); /*string*/
    bool _match_x2795;
    kk_string_t _x_x3953 = kk_string_dup(sign__char, _ctx); /*string*/
    kk_string_t _x_x3954;
    kk_define_string_literal(static, _s_x3955, 1, "+", _ctx)
    _x_x3954 = kk_string_dup(_s_x3955, _ctx); /*string*/
    _match_x2795 = kk_string_is_neq(_x_x3953,_x_x3954,kk_context()); /*bool*/
    if (_match_x2795) {
      bool _match_x2797;
      kk_string_t _x_x3956;
      kk_define_string_literal(static, _s_x3957, 1, "-", _ctx)
      _x_x3956 = kk_string_dup(_s_x3957, _ctx); /*string*/
      _match_x2797 = kk_string_is_neq(sign__char,_x_x3956,kk_context()); /*bool*/
      if (_match_x2797) {
        kk_integer_drop(sign__pos, _ctx);
        kk_string_drop(rest, _ctx);
        return false;
      }
      {
        kk_string_t t;
        kk_std_core_types__list _x_x3958;
        kk_std_core_types__list _x_x3959;
        kk_std_core_types__list _x_x3960;
        kk_string_t _x_x3961 = kk_string_dup(rest, _ctx); /*string*/
        _x_x3960 = kk_std_core_string_list(_x_x3961, _ctx); /*list<char>*/
        _x_x3959 = kk_std_core_list_drop(_x_x3960, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3962;
        kk_integer_t _x_x3963 = kk_integer_dup(sign__pos, _ctx); /*int*/
        _x_x3962 = kk_integer_add_small_const(_x_x3963, 0, _ctx); /*int*/
        _x_x3958 = kk_std_core_list_take(_x_x3959, _x_x3962, _ctx); /*list<10001>*/
        t = kk_std_core_string_listchar_fs_string(_x_x3958, _ctx); /*string*/
        kk_string_t o;
        kk_std_core_types__list _x_x3964;
        kk_std_core_types__list _x_x3965 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x3964 = kk_std_core_list_drop(_x_x3965, sign__pos, _ctx); /*list<10001>*/
        o = kk_std_core_string_listchar_fs_string(_x_x3964, _ctx); /*string*/
        bool _match_x2798 = kk_examples_basic_hc__is__valid__time(t, _ctx); /*bool*/;
        if (_match_x2798) {
          return kk_examples_basic_hc__is__valid__offset(o, _ctx);
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
      kk_std_core_types__list _x_x3966;
      kk_std_core_types__list _x_x3967;
      kk_std_core_types__list _x_x3968;
      kk_string_t _x_x3969 = kk_string_dup(rest, _ctx); /*string*/
      _x_x3968 = kk_std_core_string_list(_x_x3969, _ctx); /*list<char>*/
      _x_x3967 = kk_std_core_list_drop(_x_x3968, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x3970;
      kk_integer_t _x_x3971 = kk_integer_dup(sign__pos, _ctx); /*int*/
      _x_x3970 = kk_integer_add_small_const(_x_x3971, 0, _ctx); /*int*/
      _x_x3966 = kk_std_core_list_take(_x_x3967, _x_x3970, _ctx); /*list<10001>*/
      t_0 = kk_std_core_string_listchar_fs_string(_x_x3966, _ctx); /*string*/
      kk_string_t o_0;
      kk_std_core_types__list _x_x3972;
      kk_std_core_types__list _x_x3973 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x3972 = kk_std_core_list_drop(_x_x3973, sign__pos, _ctx); /*list<10001>*/
      o_0 = kk_std_core_string_listchar_fs_string(_x_x3972, _ctx); /*string*/
      bool _match_x2796 = kk_examples_basic_hc__is__valid__time(t_0, _ctx); /*bool*/;
      if (_match_x2796) {
        return kk_examples_basic_hc__is__valid__offset(o_0, _ctx);
      }
      {
        kk_string_drop(o_0, _ctx);
        return false;
      }
    }
  }
}

bool kk_examples_basic_hc__is__iso__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2782;
  kk_integer_t _brw_x2792;
  kk_string_t _x_x3974 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2792 = kk_std_core_string_chars_fs_count(_x_x3974, _ctx); /*int*/
  bool _brw_x2793 = kk_integer_lt_borrow(_brw_x2792,(kk_integer_from_small(17)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2792, _ctx);
  _match_x2782 = _brw_x2793; /*bool*/
  if (_match_x2782) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x3975;
    kk_std_core_types__list _x_x3976;
    kk_std_core_types__list _x_x3977;
    kk_string_t _x_x3978 = kk_string_dup(s, _ctx); /*string*/
    _x_x3977 = kk_std_core_string_list(_x_x3978, _ctx); /*list<char>*/
    _x_x3976 = kk_std_core_list_drop(_x_x3977, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x3979 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x3975 = kk_std_core_list_take(_x_x3976, _x_x3979, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x3975, _ctx); /*string*/
    bool _match_x2783;
    kk_string_t _x_x3980 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x3981;
    kk_define_string_literal(static, _s_x3982, 1, "T", _ctx)
    _x_x3981 = kk_string_dup(_s_x3982, _ctx); /*string*/
    _match_x2783 = kk_string_is_neq(_x_x3980,_x_x3981,kk_context()); /*bool*/
    if (_match_x2783) {
      bool _match_x2786;
      kk_string_t _x_x3983 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x3984;
      kk_define_string_literal(static, _s_x3985, 1, "t", _ctx)
      _x_x3984 = kk_string_dup(_s_x3985, _ctx); /*string*/
      _match_x2786 = kk_string_is_neq(_x_x3983,_x_x3984,kk_context()); /*bool*/
      if (_match_x2786) {
        bool _match_x2789;
        kk_string_t _x_x3986;
        kk_define_string_literal(static, _s_x3987, 1, " ", _ctx)
        _x_x3986 = kk_string_dup(_s_x3987, _ctx); /*string*/
        _match_x2789 = kk_string_is_neq(sep,_x_x3986,kk_context()); /*bool*/
        if (_match_x2789) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool b_10282;
          kk_string_t _x_x3988;
          kk_std_core_types__list _x_x3989;
          kk_std_core_types__list _x_x3990;
          kk_std_core_types__list _x_x3991;
          kk_string_t _x_x3992 = kk_string_dup(s, _ctx); /*string*/
          _x_x3991 = kk_std_core_string_list(_x_x3992, _ctx); /*list<char>*/
          _x_x3990 = kk_std_core_list_drop(_x_x3991, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x3993 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
          _x_x3989 = kk_std_core_list_take(_x_x3990, _x_x3993, _ctx); /*list<10001>*/
          _x_x3988 = kk_std_core_string_listchar_fs_string(_x_x3989, _ctx); /*string*/
          b_10282 = kk_examples_basic_hc__is__valid__date(_x_x3988, _ctx); /*bool*/
          if (b_10282) {
            kk_string_t rest;
            kk_std_core_types__list _x_x3994;
            kk_std_core_types__list _x_x3995 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x3994 = kk_std_core_list_drop(_x_x3995, kk_integer_from_small(11), _ctx); /*list<10001>*/
            rest = kk_std_core_string_listchar_fs_string(_x_x3994, _ctx); /*string*/
            bool _match_x2790;
            kk_string_t _x_x3996 = kk_string_dup(rest, _ctx); /*string*/
            kk_string_t _x_x3997;
            kk_define_string_literal(static, _s_x3998, 1, "Z", _ctx)
            _x_x3997 = kk_string_dup(_s_x3998, _ctx); /*string*/
            _match_x2790 = kk_string_contains(_x_x3996,_x_x3997,kk_context()); /*bool*/
            if (_match_x2790) {
              return kk_examples_basic_hc__check__z__offset(rest, _ctx);
            }
            {
              bool _match_x2791;
              kk_string_t _x_x3999 = kk_string_dup(rest, _ctx); /*string*/
              kk_string_t _x_x4000;
              kk_define_string_literal(static, _s_x4001, 1, "z", _ctx)
              _x_x4000 = kk_string_dup(_s_x4001, _ctx); /*string*/
              _match_x2791 = kk_string_contains(_x_x3999,_x_x4000,kk_context()); /*bool*/
              if (_match_x2791) {
                return kk_examples_basic_hc__check__z__offset(rest, _ctx);
              }
              {
                return kk_examples_basic_hc__check__numeric__offset(rest, _ctx);
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
        kk_string_t _x_x4002;
        kk_std_core_types__list _x_x4003;
        kk_std_core_types__list _x_x4004;
        kk_std_core_types__list _x_x4005;
        kk_string_t _x_x4006 = kk_string_dup(s, _ctx); /*string*/
        _x_x4005 = kk_std_core_string_list(_x_x4006, _ctx); /*list<char>*/
        _x_x4004 = kk_std_core_list_drop(_x_x4005, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4007 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x4003 = kk_std_core_list_take(_x_x4004, _x_x4007, _ctx); /*list<10001>*/
        _x_x4002 = kk_std_core_string_listchar_fs_string(_x_x4003, _ctx); /*string*/
        b_0_10285 = kk_examples_basic_hc__is__valid__date(_x_x4002, _ctx); /*bool*/
        if (b_0_10285) {
          kk_string_t rest_0;
          kk_std_core_types__list _x_x4008;
          kk_std_core_types__list _x_x4009 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4008 = kk_std_core_list_drop(_x_x4009, kk_integer_from_small(11), _ctx); /*list<10001>*/
          rest_0 = kk_std_core_string_listchar_fs_string(_x_x4008, _ctx); /*string*/
          bool _match_x2787;
          kk_string_t _x_x4010 = kk_string_dup(rest_0, _ctx); /*string*/
          kk_string_t _x_x4011;
          kk_define_string_literal(static, _s_x4012, 1, "Z", _ctx)
          _x_x4011 = kk_string_dup(_s_x4012, _ctx); /*string*/
          _match_x2787 = kk_string_contains(_x_x4010,_x_x4011,kk_context()); /*bool*/
          if (_match_x2787) {
            return kk_examples_basic_hc__check__z__offset(rest_0, _ctx);
          }
          {
            bool _match_x2788;
            kk_string_t _x_x4013 = kk_string_dup(rest_0, _ctx); /*string*/
            kk_string_t _x_x4014;
            kk_define_string_literal(static, _s_x4015, 1, "z", _ctx)
            _x_x4014 = kk_string_dup(_s_x4015, _ctx); /*string*/
            _match_x2788 = kk_string_contains(_x_x4013,_x_x4014,kk_context()); /*bool*/
            if (_match_x2788) {
              return kk_examples_basic_hc__check__z__offset(rest_0, _ctx);
            }
            {
              return kk_examples_basic_hc__check__numeric__offset(rest_0, _ctx);
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
      kk_string_t _x_x4016;
      kk_std_core_types__list _x_x4017;
      kk_std_core_types__list _x_x4018;
      kk_std_core_types__list _x_x4019;
      kk_string_t _x_x4020 = kk_string_dup(s, _ctx); /*string*/
      _x_x4019 = kk_std_core_string_list(_x_x4020, _ctx); /*list<char>*/
      _x_x4018 = kk_std_core_list_drop(_x_x4019, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4021 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4017 = kk_std_core_list_take(_x_x4018, _x_x4021, _ctx); /*list<10001>*/
      _x_x4016 = kk_std_core_string_listchar_fs_string(_x_x4017, _ctx); /*string*/
      b_1_10288 = kk_examples_basic_hc__is__valid__date(_x_x4016, _ctx); /*bool*/
      if (b_1_10288) {
        kk_string_t rest_1;
        kk_std_core_types__list _x_x4022;
        kk_std_core_types__list _x_x4023 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4022 = kk_std_core_list_drop(_x_x4023, kk_integer_from_small(11), _ctx); /*list<10001>*/
        rest_1 = kk_std_core_string_listchar_fs_string(_x_x4022, _ctx); /*string*/
        bool _match_x2784;
        kk_string_t _x_x4024 = kk_string_dup(rest_1, _ctx); /*string*/
        kk_string_t _x_x4025;
        kk_define_string_literal(static, _s_x4026, 1, "Z", _ctx)
        _x_x4025 = kk_string_dup(_s_x4026, _ctx); /*string*/
        _match_x2784 = kk_string_contains(_x_x4024,_x_x4025,kk_context()); /*bool*/
        if (_match_x2784) {
          return kk_examples_basic_hc__check__z__offset(rest_1, _ctx);
        }
        {
          bool _match_x2785;
          kk_string_t _x_x4027 = kk_string_dup(rest_1, _ctx); /*string*/
          kk_string_t _x_x4028;
          kk_define_string_literal(static, _s_x4029, 1, "z", _ctx)
          _x_x4028 = kk_string_dup(_s_x4029, _ctx); /*string*/
          _match_x2785 = kk_string_contains(_x_x4027,_x_x4028,kk_context()); /*bool*/
          if (_match_x2785) {
            return kk_examples_basic_hc__check__z__offset(rest_1, _ctx);
          }
          {
            return kk_examples_basic_hc__check__numeric__offset(rest_1, _ctx);
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

bool kk_examples_basic_hc__is__local__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2773;
  kk_integer_t _brw_x2780;
  kk_string_t _x_x4030 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2780 = kk_std_core_string_chars_fs_count(_x_x4030, _ctx); /*int*/
  bool _brw_x2781 = kk_integer_lt_borrow(_brw_x2780,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2780, _ctx);
  _match_x2773 = _brw_x2781; /*bool*/
  if (_match_x2773) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4031;
    kk_std_core_types__list _x_x4032;
    kk_std_core_types__list _x_x4033;
    kk_string_t _x_x4034 = kk_string_dup(s, _ctx); /*string*/
    _x_x4033 = kk_std_core_string_list(_x_x4034, _ctx); /*list<char>*/
    _x_x4032 = kk_std_core_list_drop(_x_x4033, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4035 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4031 = kk_std_core_list_take(_x_x4032, _x_x4035, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4031, _ctx); /*string*/
    bool _match_x2774;
    kk_string_t _x_x4036 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4037;
    kk_define_string_literal(static, _s_x4038, 1, "T", _ctx)
    _x_x4037 = kk_string_dup(_s_x4038, _ctx); /*string*/
    _match_x2774 = kk_string_is_neq(_x_x4036,_x_x4037,kk_context()); /*bool*/
    if (_match_x2774) {
      bool _match_x2776;
      kk_string_t _x_x4039 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4040;
      kk_define_string_literal(static, _s_x4041, 1, "t", _ctx)
      _x_x4040 = kk_string_dup(_s_x4041, _ctx); /*string*/
      _match_x2776 = kk_string_is_neq(_x_x4039,_x_x4040,kk_context()); /*bool*/
      if (_match_x2776) {
        bool _match_x2778;
        kk_string_t _x_x4042;
        kk_define_string_literal(static, _s_x4043, 1, " ", _ctx)
        _x_x4042 = kk_string_dup(_s_x4043, _ctx); /*string*/
        _match_x2778 = kk_string_is_neq(sep,_x_x4042,kk_context()); /*bool*/
        if (_match_x2778) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool _match_x2779;
          kk_string_t _x_x4044;
          kk_std_core_types__list _x_x4045;
          kk_std_core_types__list _x_x4046;
          kk_std_core_types__list _x_x4047;
          kk_string_t _x_x4048 = kk_string_dup(s, _ctx); /*string*/
          _x_x4047 = kk_std_core_string_list(_x_x4048, _ctx); /*list<char>*/
          _x_x4046 = kk_std_core_list_drop(_x_x4047, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4049 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
          _x_x4045 = kk_std_core_list_take(_x_x4046, _x_x4049, _ctx); /*list<10001>*/
          _x_x4044 = kk_std_core_string_listchar_fs_string(_x_x4045, _ctx); /*string*/
          _match_x2779 = kk_examples_basic_hc__is__valid__date(_x_x4044, _ctx); /*bool*/
          if (_match_x2779) {
            kk_string_t _x_x4050;
            kk_std_core_types__list _x_x4051;
            kk_std_core_types__list _x_x4052 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x4051 = kk_std_core_list_drop(_x_x4052, kk_integer_from_small(11), _ctx); /*list<10001>*/
            _x_x4050 = kk_std_core_string_listchar_fs_string(_x_x4051, _ctx); /*string*/
            return kk_examples_basic_hc__is__valid__time(_x_x4050, _ctx);
          }
          {
            kk_string_drop(s, _ctx);
            return false;
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        bool _match_x2777;
        kk_string_t _x_x4053;
        kk_std_core_types__list _x_x4054;
        kk_std_core_types__list _x_x4055;
        kk_std_core_types__list _x_x4056;
        kk_string_t _x_x4057 = kk_string_dup(s, _ctx); /*string*/
        _x_x4056 = kk_std_core_string_list(_x_x4057, _ctx); /*list<char>*/
        _x_x4055 = kk_std_core_list_drop(_x_x4056, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4058 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x4054 = kk_std_core_list_take(_x_x4055, _x_x4058, _ctx); /*list<10001>*/
        _x_x4053 = kk_std_core_string_listchar_fs_string(_x_x4054, _ctx); /*string*/
        _match_x2777 = kk_examples_basic_hc__is__valid__date(_x_x4053, _ctx); /*bool*/
        if (_match_x2777) {
          kk_string_t _x_x4059;
          kk_std_core_types__list _x_x4060;
          kk_std_core_types__list _x_x4061 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4060 = kk_std_core_list_drop(_x_x4061, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4059 = kk_std_core_string_listchar_fs_string(_x_x4060, _ctx); /*string*/
          return kk_examples_basic_hc__is__valid__time(_x_x4059, _ctx);
        }
        {
          kk_string_drop(s, _ctx);
          return false;
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      bool _match_x2775;
      kk_string_t _x_x4062;
      kk_std_core_types__list _x_x4063;
      kk_std_core_types__list _x_x4064;
      kk_std_core_types__list _x_x4065;
      kk_string_t _x_x4066 = kk_string_dup(s, _ctx); /*string*/
      _x_x4065 = kk_std_core_string_list(_x_x4066, _ctx); /*list<char>*/
      _x_x4064 = kk_std_core_list_drop(_x_x4065, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4067 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4063 = kk_std_core_list_take(_x_x4064, _x_x4067, _ctx); /*list<10001>*/
      _x_x4062 = kk_std_core_string_listchar_fs_string(_x_x4063, _ctx); /*string*/
      _match_x2775 = kk_examples_basic_hc__is__valid__date(_x_x4062, _ctx); /*bool*/
      if (_match_x2775) {
        kk_string_t _x_x4068;
        kk_std_core_types__list _x_x4069;
        kk_std_core_types__list _x_x4070 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4069 = kk_std_core_list_drop(_x_x4070, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4068 = kk_std_core_string_listchar_fs_string(_x_x4069, _ctx); /*string*/
        return kk_examples_basic_hc__is__valid__time(_x_x4068, _ctx);
      }
      {
        kk_string_drop(s, _ctx);
        return false;
      }
    }
  }
}

kk_std_core_types__either kk_examples_basic_hc__date__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10299;
  kk_string_t _x_x4071 = kk_string_dup(s, _ctx); /*string*/
  b_10299 = kk_examples_basic_hc__is__valid__date(_x_x4071, _ctx); /*bool*/
  if (b_10299) {
    kk_string_t s_0_10300;
    kk_std_core_types__list _x_x4072;
    kk_std_core_types__list _x_x4073;
    kk_std_core_types__list _x_x4074;
    kk_string_t _x_x4075 = kk_string_dup(s, _ctx); /*string*/
    _x_x4074 = kk_std_core_string_list(_x_x4075, _ctx); /*list<char>*/
    _x_x4073 = kk_std_core_list_drop(_x_x4074, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4076 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
    _x_x4072 = kk_std_core_list_take(_x_x4073, _x_x4076, _ctx); /*list<10001>*/
    s_0_10300 = kk_std_core_string_listchar_fs_string(_x_x4072, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2767;
    bool _x_x4077;
    kk_std_core_types__optional _match_x2772 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2772, _ctx)) {
      kk_box_t _box_x258 = _match_x2772._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x258);
      kk_std_core_types__optional_drop(_match_x2772, _ctx);
      _x_x4077 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2772, _ctx);
      _x_x4077 = false; /*bool*/
    }
    _match_x2767 = kk_std_core_int_xparse(s_0_10300, _x_x4077, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2767, _ctx)) {
      kk_box_t _box_x259 = _match_x2767._cons.Just.value;
      kk_integer_t y_0 = kk_integer_unbox(_box_x259, _ctx);
      kk_integer_dup(y_0, _ctx);
      kk_std_core_types__maybe_drop(_match_x2767, _ctx);
      kk_string_t s_1_10304;
      kk_std_core_types__list _x_x4078;
      kk_std_core_types__list _x_x4079;
      kk_std_core_types__list _x_x4080;
      kk_string_t _x_x4081 = kk_string_dup(s, _ctx); /*string*/
      _x_x4080 = kk_std_core_string_list(_x_x4081, _ctx); /*list<char>*/
      _x_x4079 = kk_std_core_list_drop(_x_x4080, kk_integer_from_small(5), _ctx); /*list<10001>*/
      kk_integer_t _x_x4082 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
      _x_x4078 = kk_std_core_list_take(_x_x4079, _x_x4082, _ctx); /*list<10001>*/
      s_1_10304 = kk_std_core_string_listchar_fs_string(_x_x4078, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2768;
      bool _x_x4083;
      kk_std_core_types__optional _match_x2771 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2771, _ctx)) {
        kk_box_t _box_x260 = _match_x2771._cons._Optional.value;
        bool _uniq_hex_581_0 = kk_bool_unbox(_box_x260);
        kk_std_core_types__optional_drop(_match_x2771, _ctx);
        _x_x4083 = _uniq_hex_581_0; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2771, _ctx);
        _x_x4083 = false; /*bool*/
      }
      _match_x2768 = kk_std_core_int_xparse(s_1_10304, _x_x4083, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2768, _ctx)) {
        kk_box_t _box_x261 = _match_x2768._cons.Just.value;
        kk_integer_t m = kk_integer_unbox(_box_x261, _ctx);
        kk_integer_dup(m, _ctx);
        kk_std_core_types__maybe_drop(_match_x2768, _ctx);
        kk_string_t s_2_10308;
        kk_std_core_types__list _x_x4084;
        kk_std_core_types__list _x_x4085;
        kk_std_core_types__list _x_x4086 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4085 = kk_std_core_list_drop(_x_x4086, kk_integer_from_small(8), _ctx); /*list<10001>*/
        kk_integer_t _x_x4087 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
        _x_x4084 = kk_std_core_list_take(_x_x4085, _x_x4087, _ctx); /*list<10001>*/
        s_2_10308 = kk_std_core_string_listchar_fs_string(_x_x4084, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2769;
        bool _x_x4088;
        kk_std_core_types__optional _match_x2770 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2770, _ctx)) {
          kk_box_t _box_x262 = _match_x2770._cons._Optional.value;
          bool _uniq_hex_581_1 = kk_bool_unbox(_box_x262);
          kk_std_core_types__optional_drop(_match_x2770, _ctx);
          _x_x4088 = _uniq_hex_581_1; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2770, _ctx);
          _x_x4088 = false; /*bool*/
        }
        _match_x2769 = kk_std_core_int_xparse(s_2_10308, _x_x4088, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2769, _ctx)) {
          kk_box_t _box_x263 = _match_x2769._cons.Just.value;
          kk_integer_t d = kk_integer_unbox(_box_x263, _ctx);
          kk_integer_dup(d, _ctx);
          kk_std_core_types__maybe_drop(_match_x2769, _ctx);
          kk_box_t _x_x4089;
          kk_std_core_types__tuple3 _x_x4090 = kk_std_core_types__new_Tuple3(kk_integer_box(y_0, _ctx), kk_integer_box(m, _ctx), kk_integer_box(d, _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4089 = kk_std_core_types__tuple3_box(_x_x4090, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4089, _ctx);
        }
        {
          kk_integer_drop(y_0, _ctx);
          kk_integer_drop(m, _ctx);
          kk_box_t _x_x4091;
          kk_string_t _x_x4092;
          kk_define_string_literal(static, _s_x4093, 11, "invalid day", _ctx)
          _x_x4092 = kk_string_dup(_s_x4093, _ctx); /*string*/
          _x_x4091 = kk_string_box(_x_x4092); /*10014*/
          return kk_std_core_types__new_Left(_x_x4091, _ctx);
        }
      }
      {
        kk_integer_drop(y_0, _ctx);
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4094;
        kk_string_t _x_x4095;
        kk_define_string_literal(static, _s_x4096, 13, "invalid month", _ctx)
        _x_x4095 = kk_string_dup(_s_x4096, _ctx); /*string*/
        _x_x4094 = kk_string_box(_x_x4095); /*10014*/
        return kk_std_core_types__new_Left(_x_x4094, _ctx);
      }
    }
    {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4097;
      kk_string_t _x_x4098;
      kk_define_string_literal(static, _s_x4099, 12, "invalid year", _ctx)
      _x_x4098 = kk_string_dup(_s_x4099, _ctx); /*string*/
      _x_x4097 = kk_string_box(_x_x4098); /*10014*/
      return kk_std_core_types__new_Left(_x_x4097, _ctx);
    }
  }
  {
    kk_string_t _b_x271_279;
    kk_string_t _x_x4100;
    kk_define_string_literal(static, _s_x4101, 14, "invalid date: ", _ctx)
    _x_x4100 = kk_string_dup(_s_x4101, _ctx); /*string*/
    _b_x271_279 = kk_std_core_types__lp__plus__plus__rp_(_x_x4100, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x271_279), _ctx);
  }
}

kk_std_core_types__either kk_examples_basic_hc__time__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10312;
  kk_string_t _x_x4102 = kk_string_dup(s, _ctx); /*string*/
  b_10312 = kk_examples_basic_hc__is__valid__time(_x_x4102, _ctx); /*bool*/
  if (b_10312) {
    bool _match_x2754;
    kk_integer_t _brw_x2765;
    kk_string_t _x_x4103 = kk_string_dup(s, _ctx); /*string*/
    _brw_x2765 = kk_std_core_string_chars_fs_count(_x_x4103, _ctx); /*int*/
    bool _brw_x2766 = kk_integer_eq_borrow(_brw_x2765,(kk_integer_from_small(5)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2765, _ctx);
    _match_x2754 = _brw_x2766; /*bool*/
    if (_match_x2754) {
      kk_string_t s_0_10313;
      kk_std_core_types__list _x_x4104;
      kk_std_core_types__list _x_x4105;
      kk_std_core_types__list _x_x4106;
      kk_string_t _x_x4107 = kk_string_dup(s, _ctx); /*string*/
      _x_x4106 = kk_std_core_string_list(_x_x4107, _ctx); /*list<char>*/
      _x_x4105 = kk_std_core_list_drop(_x_x4106, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4108 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4104 = kk_std_core_list_take(_x_x4105, _x_x4108, _ctx); /*list<10001>*/
      s_0_10313 = kk_std_core_string_listchar_fs_string(_x_x4104, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2761;
      bool _x_x4109;
      kk_std_core_types__optional _match_x2764 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2764, _ctx)) {
        kk_box_t _box_x280 = _match_x2764._cons._Optional.value;
        bool _uniq_hex_581 = kk_bool_unbox(_box_x280);
        kk_std_core_types__optional_drop(_match_x2764, _ctx);
        _x_x4109 = _uniq_hex_581; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2764, _ctx);
        _x_x4109 = false; /*bool*/
      }
      _match_x2761 = kk_std_core_int_xparse(s_0_10313, _x_x4109, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2761, _ctx)) {
        kk_box_t _box_x281 = _match_x2761._cons.Just.value;
        kk_integer_t h = kk_integer_unbox(_box_x281, _ctx);
        kk_integer_dup(h, _ctx);
        kk_std_core_types__maybe_drop(_match_x2761, _ctx);
        kk_string_t s_1_10317;
        kk_std_core_types__list _x_x4110;
        kk_std_core_types__list _x_x4111;
        kk_std_core_types__list _x_x4112 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4111 = kk_std_core_list_drop(_x_x4112, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4113 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4110 = kk_std_core_list_take(_x_x4111, _x_x4113, _ctx); /*list<10001>*/
        s_1_10317 = kk_std_core_string_listchar_fs_string(_x_x4110, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2762;
        bool _x_x4114;
        kk_std_core_types__optional _match_x2763 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2763, _ctx)) {
          kk_box_t _box_x282 = _match_x2763._cons._Optional.value;
          bool _uniq_hex_581_0 = kk_bool_unbox(_box_x282);
          kk_std_core_types__optional_drop(_match_x2763, _ctx);
          _x_x4114 = _uniq_hex_581_0; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2763, _ctx);
          _x_x4114 = false; /*bool*/
        }
        _match_x2762 = kk_std_core_int_xparse(s_1_10317, _x_x4114, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2762, _ctx)) {
          kk_box_t _box_x283 = _match_x2762._cons.Just.value;
          kk_integer_t m = kk_integer_unbox(_box_x283, _ctx);
          kk_integer_dup(m, _ctx);
          kk_std_core_types__maybe_drop(_match_x2762, _ctx);
          kk_box_t _x_x4115;
          kk_std_core_types__tuple3 _x_x4116 = kk_std_core_types__new_Tuple3(kk_integer_box(h, _ctx), kk_integer_box(m, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4115 = kk_std_core_types__tuple3_box(_x_x4116, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4115, _ctx);
        }
        {
          kk_integer_drop(h, _ctx);
          kk_box_t _x_x4117;
          kk_string_t _x_x4118;
          kk_define_string_literal(static, _s_x4119, 14, "invalid minute", _ctx)
          _x_x4118 = kk_string_dup(_s_x4119, _ctx); /*string*/
          _x_x4117 = kk_string_box(_x_x4118); /*10014*/
          return kk_std_core_types__new_Left(_x_x4117, _ctx);
        }
      }
      {
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4120;
        kk_string_t _x_x4121;
        kk_define_string_literal(static, _s_x4122, 12, "invalid hour", _ctx)
        _x_x4121 = kk_string_dup(_s_x4122, _ctx); /*string*/
        _x_x4120 = kk_string_box(_x_x4121); /*10014*/
        return kk_std_core_types__new_Left(_x_x4120, _ctx);
      }
    }
    {
      kk_string_t s_2_10321;
      kk_std_core_types__list _x_x4123;
      kk_std_core_types__list _x_x4124;
      kk_std_core_types__list _x_x4125;
      kk_string_t _x_x4126 = kk_string_dup(s, _ctx); /*string*/
      _x_x4125 = kk_std_core_string_list(_x_x4126, _ctx); /*list<char>*/
      _x_x4124 = kk_std_core_list_drop(_x_x4125, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4127 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4123 = kk_std_core_list_take(_x_x4124, _x_x4127, _ctx); /*list<10001>*/
      s_2_10321 = kk_std_core_string_listchar_fs_string(_x_x4123, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2755;
      bool _x_x4128;
      kk_std_core_types__optional _match_x2760 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2760, _ctx)) {
        kk_box_t _box_x290 = _match_x2760._cons._Optional.value;
        bool _uniq_hex_581_1 = kk_bool_unbox(_box_x290);
        kk_std_core_types__optional_drop(_match_x2760, _ctx);
        _x_x4128 = _uniq_hex_581_1; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2760, _ctx);
        _x_x4128 = false; /*bool*/
      }
      _match_x2755 = kk_std_core_int_xparse(s_2_10321, _x_x4128, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2755, _ctx)) {
        kk_box_t _box_x291 = _match_x2755._cons.Just.value;
        kk_integer_t h_0 = kk_integer_unbox(_box_x291, _ctx);
        kk_integer_dup(h_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2755, _ctx);
        kk_string_t s_3_10325;
        kk_std_core_types__list _x_x4129;
        kk_std_core_types__list _x_x4130;
        kk_std_core_types__list _x_x4131;
        kk_string_t _x_x4132 = kk_string_dup(s, _ctx); /*string*/
        _x_x4131 = kk_std_core_string_list(_x_x4132, _ctx); /*list<char>*/
        _x_x4130 = kk_std_core_list_drop(_x_x4131, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4133 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4129 = kk_std_core_list_take(_x_x4130, _x_x4133, _ctx); /*list<10001>*/
        s_3_10325 = kk_std_core_string_listchar_fs_string(_x_x4129, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2756;
        bool _x_x4134;
        kk_std_core_types__optional _match_x2759 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2759, _ctx)) {
          kk_box_t _box_x292 = _match_x2759._cons._Optional.value;
          bool _uniq_hex_581_2 = kk_bool_unbox(_box_x292);
          kk_std_core_types__optional_drop(_match_x2759, _ctx);
          _x_x4134 = _uniq_hex_581_2; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2759, _ctx);
          _x_x4134 = false; /*bool*/
        }
        _match_x2756 = kk_std_core_int_xparse(s_3_10325, _x_x4134, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2756, _ctx)) {
          kk_box_t _box_x293 = _match_x2756._cons.Just.value;
          kk_integer_t m_0 = kk_integer_unbox(_box_x293, _ctx);
          kk_integer_dup(m_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2756, _ctx);
          kk_string_t s_4_10329;
          kk_std_core_types__list _x_x4135;
          kk_std_core_types__list _x_x4136;
          kk_std_core_types__list _x_x4137 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4136 = kk_std_core_list_drop(_x_x4137, kk_integer_from_small(6), _ctx); /*list<10001>*/
          kk_integer_t _x_x4138 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
          _x_x4135 = kk_std_core_list_take(_x_x4136, _x_x4138, _ctx); /*list<10001>*/
          s_4_10329 = kk_std_core_string_listchar_fs_string(_x_x4135, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2757;
          bool _x_x4139;
          kk_std_core_types__optional _match_x2758 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2758, _ctx)) {
            kk_box_t _box_x294 = _match_x2758._cons._Optional.value;
            bool _uniq_hex_581_3 = kk_bool_unbox(_box_x294);
            kk_std_core_types__optional_drop(_match_x2758, _ctx);
            _x_x4139 = _uniq_hex_581_3; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2758, _ctx);
            _x_x4139 = false; /*bool*/
          }
          _match_x2757 = kk_std_core_int_xparse(s_4_10329, _x_x4139, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2757, _ctx)) {
            kk_box_t _box_x295 = _match_x2757._cons.Just.value;
            kk_integer_t sec = kk_integer_unbox(_box_x295, _ctx);
            kk_integer_dup(sec, _ctx);
            kk_std_core_types__maybe_drop(_match_x2757, _ctx);
            kk_box_t _x_x4140;
            kk_std_core_types__tuple3 _x_x4141 = kk_std_core_types__new_Tuple3(kk_integer_box(h_0, _ctx), kk_integer_box(m_0, _ctx), kk_integer_box(sec, _ctx), _ctx); /*(10041, 10042, 10043)*/
            _x_x4140 = kk_std_core_types__tuple3_box(_x_x4141, _ctx); /*10015*/
            return kk_std_core_types__new_Right(_x_x4140, _ctx);
          }
          {
            kk_integer_drop(m_0, _ctx);
            kk_integer_drop(h_0, _ctx);
            kk_box_t _x_x4142;
            kk_string_t _x_x4143;
            kk_define_string_literal(static, _s_x4144, 14, "invalid second", _ctx)
            _x_x4143 = kk_string_dup(_s_x4144, _ctx); /*string*/
            _x_x4142 = kk_string_box(_x_x4143); /*10014*/
            return kk_std_core_types__new_Left(_x_x4142, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(h_0, _ctx);
          kk_box_t _x_x4145;
          kk_string_t _x_x4146;
          kk_define_string_literal(static, _s_x4147, 14, "invalid minute", _ctx)
          _x_x4146 = kk_string_dup(_s_x4147, _ctx); /*string*/
          _x_x4145 = kk_string_box(_x_x4146); /*10014*/
          return kk_std_core_types__new_Left(_x_x4145, _ctx);
        }
      }
      {
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4148;
        kk_string_t _x_x4149;
        kk_define_string_literal(static, _s_x4150, 12, "invalid hour", _ctx)
        _x_x4149 = kk_string_dup(_s_x4150, _ctx); /*string*/
        _x_x4148 = kk_string_box(_x_x4149); /*10014*/
        return kk_std_core_types__new_Left(_x_x4148, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x303_317;
    kk_string_t _x_x4151;
    kk_define_string_literal(static, _s_x4152, 14, "invalid time: ", _ctx)
    _x_x4151 = kk_string_dup(_s_x4152, _ctx); /*string*/
    _b_x303_317 = kk_std_core_types__lp__plus__plus__rp_(_x_x4151, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x303_317), _ctx);
  }
}

kk_std_core_types__either kk_examples_basic_hc__datetime__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2750;
  kk_integer_t _brw_x2752;
  kk_string_t _x_x4153 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2752 = kk_std_core_string_chars_fs_count(_x_x4153, _ctx); /*int*/
  bool _brw_x2753 = kk_integer_gte_borrow(_brw_x2752,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2752, _ctx);
  _match_x2750 = _brw_x2753; /*bool*/
  if (_match_x2750) {
    bool _match_x2751;
    kk_string_t _x_x4154;
    kk_std_core_types__list _x_x4155;
    kk_std_core_types__list _x_x4156;
    kk_std_core_types__list _x_x4157;
    kk_string_t _x_x4158 = kk_string_dup(s, _ctx); /*string*/
    _x_x4157 = kk_std_core_string_list(_x_x4158, _ctx); /*list<char>*/
    _x_x4156 = kk_std_core_list_drop(_x_x4157, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4159 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
    _x_x4155 = kk_std_core_list_take(_x_x4156, _x_x4159, _ctx); /*list<10001>*/
    _x_x4154 = kk_std_core_string_listchar_fs_string(_x_x4155, _ctx); /*string*/
    _match_x2751 = kk_examples_basic_hc__is__valid__date(_x_x4154, _ctx); /*bool*/
    if (_match_x2751) {
      kk_string_t _b_x318_321;
      kk_std_core_types__list _x_x4160;
      kk_std_core_types__list _x_x4161;
      kk_std_core_types__list _x_x4162 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4161 = kk_std_core_list_drop(_x_x4162, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4163 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4160 = kk_std_core_list_take(_x_x4161, _x_x4163, _ctx); /*list<10001>*/
      _b_x318_321 = kk_std_core_string_listchar_fs_string(_x_x4160, _ctx); /*string*/
      return kk_std_core_types__new_Right(kk_string_box(_b_x318_321), _ctx);
    }
    {
      kk_string_t _b_x319_322;
      kk_string_t _x_x4164;
      kk_define_string_literal(static, _s_x4165, 18, "no valid date in: ", _ctx)
      _x_x4164 = kk_string_dup(_s_x4165, _ctx); /*string*/
      _b_x319_322 = kk_std_core_types__lp__plus__plus__rp_(_x_x4164, s, _ctx); /*string*/
      return kk_std_core_types__new_Left(kk_string_box(_b_x319_322), _ctx);
    }
  }
  {
    kk_string_t _b_x320_323;
    kk_string_t _x_x4166;
    kk_define_string_literal(static, _s_x4167, 18, "no valid date in: ", _ctx)
    _x_x4166 = kk_string_dup(_s_x4167, _ctx); /*string*/
    _b_x320_323 = kk_std_core_types__lp__plus__plus__rp_(_x_x4166, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x320_323), _ctx);
  }
}

kk_string_t kk_examples_basic_hc__strip__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> string */ 
  bool _match_x2735;
  kk_string_t _x_x4168 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x4169;
  kk_define_string_literal(static, _s_x4170, 1, "Z", _ctx)
  _x_x4169 = kk_string_dup(_s_x4170, _ctx); /*string*/
  _match_x2735 = kk_string_contains(_x_x4168,_x_x4169,kk_context()); /*bool*/
  if (_match_x2735) {
    kk_std_core_types__maybe _match_x2746;
    kk_string_t _x_x4171 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4172;
    kk_define_string_literal(static, _s_x4173, 1, "Z", _ctx)
    _x_x4172 = kk_string_dup(_s_x4173, _ctx); /*string*/
    _match_x2746 = kk_std_core_sslice_find(_x_x4171, _x_x4172, _ctx); /*maybe<sslice/sslice>*/
    if (kk_std_core_types__is_Just(_match_x2746, _ctx)) {
      kk_box_t _box_x324 = _match_x2746._cons.Just.value;
      kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x324, KK_BORROWED, _ctx);
      kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
      kk_std_core_types__maybe_drop(_match_x2746, _ctx);
      kk_integer_t i;
      kk_std_core_sslice__sslice _x_x4174;
      {
        kk_string_t s = hc____ss.str;
        kk_integer_t start = hc____ss.start;
        kk_string_dup(s, _ctx);
        kk_integer_dup(start, _ctx);
        kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
        _x_x4174 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
      }
      i = kk_std_core_sslice_count(_x_x4174, _ctx); /*int*/
      kk_std_core_types__list _x_x4175;
      kk_std_core_types__list _x_x4176;
      kk_std_core_types__list _x_x4177 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x4176 = kk_std_core_list_drop(_x_x4177, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4178 = kk_integer_add_small_const(i, 0, _ctx); /*int*/
      _x_x4175 = kk_std_core_list_take(_x_x4176, _x_x4178, _ctx); /*list<10001>*/
      return kk_std_core_string_listchar_fs_string(_x_x4175, _ctx);
    }
    {
      kk_std_core_types__maybe _match_x2747 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
      if (kk_std_core_types__is_Just(_match_x2747, _ctx)) {
        kk_box_t _box_x325 = _match_x2747._cons.Just.value;
        kk_integer_t i_0 = kk_integer_unbox(_box_x325, _ctx);
        kk_integer_dup(i_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2747, _ctx);
        kk_std_core_types__list _x_x4179;
        kk_std_core_types__list _x_x4180;
        kk_std_core_types__list _x_x4181 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4180 = kk_std_core_list_drop(_x_x4181, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4182 = kk_integer_add_small_const(i_0, 0, _ctx); /*int*/
        _x_x4179 = kk_std_core_list_take(_x_x4180, _x_x4182, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4179, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2748;
        kk_string_t _x_x4183 = kk_string_dup(rest, _ctx); /*string*/
        kk_string_t _x_x4184;
        kk_define_string_literal(static, _s_x4185, 1, "z", _ctx)
        _x_x4184 = kk_string_dup(_s_x4185, _ctx); /*string*/
        _match_x2748 = kk_std_core_sslice_find(_x_x4183, _x_x4184, _ctx); /*maybe<sslice/sslice>*/
        if (kk_std_core_types__is_Just(_match_x2748, _ctx)) {
          kk_box_t _box_x326 = _match_x2748._cons.Just.value;
          kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x326, KK_BORROWED, _ctx);
          kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2748, _ctx);
          kk_integer_t i_0_0;
          kk_std_core_sslice__sslice _x_x4186;
          {
            kk_string_t s_0 = hc____ss_0.str;
            kk_integer_t start_0 = hc____ss_0.start;
            kk_string_dup(s_0, _ctx);
            kk_integer_dup(start_0, _ctx);
            kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
            _x_x4186 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
          }
          i_0_0 = kk_std_core_sslice_count(_x_x4186, _ctx); /*int*/
          kk_std_core_types__list _x_x4187;
          kk_std_core_types__list _x_x4188;
          kk_std_core_types__list _x_x4189 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4188 = kk_std_core_list_drop(_x_x4189, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4190 = kk_integer_add_small_const(i_0_0, 0, _ctx); /*int*/
          _x_x4187 = kk_std_core_list_take(_x_x4188, _x_x4190, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4187, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2749 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
          if (kk_std_core_types__is_Just(_match_x2749, _ctx)) {
            kk_box_t _box_x327 = _match_x2749._cons.Just.value;
            kk_integer_t i_0_1 = kk_integer_unbox(_box_x327, _ctx);
            kk_integer_dup(i_0_1, _ctx);
            kk_std_core_types__maybe_drop(_match_x2749, _ctx);
            kk_std_core_types__list _x_x4191;
            kk_std_core_types__list _x_x4192;
            kk_std_core_types__list _x_x4193 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4192 = kk_std_core_list_drop(_x_x4193, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4194 = kk_integer_add_small_const(i_0_1, 0, _ctx); /*int*/
            _x_x4191 = kk_std_core_list_take(_x_x4192, _x_x4194, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4191, _ctx);
          }
          {
            return rest;
          }
        }
      }
    }
  }
  {
    bool _match_x2736;
    kk_string_t _x_x4195 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4196;
    kk_define_string_literal(static, _s_x4197, 1, "z", _ctx)
    _x_x4196 = kk_string_dup(_s_x4197, _ctx); /*string*/
    _match_x2736 = kk_string_contains(_x_x4195,_x_x4196,kk_context()); /*bool*/
    if (_match_x2736) {
      kk_std_core_types__maybe _match_x2742;
      kk_string_t _x_x4198 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x4199;
      kk_define_string_literal(static, _s_x4200, 1, "Z", _ctx)
      _x_x4199 = kk_string_dup(_s_x4200, _ctx); /*string*/
      _match_x2742 = kk_std_core_sslice_find(_x_x4198, _x_x4199, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2742, _ctx)) {
        kk_box_t _box_x328 = _match_x2742._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_1 = kk_std_core_sslice__sslice_unbox(_box_x328, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_1, _ctx);
        kk_std_core_types__maybe_drop(_match_x2742, _ctx);
        kk_integer_t i_1;
        kk_std_core_sslice__sslice _x_x4201;
        {
          kk_string_t s_1 = hc____ss_1.str;
          kk_integer_t start_1 = hc____ss_1.start;
          kk_string_dup(s_1, _ctx);
          kk_integer_dup(start_1, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_1, _ctx);
          _x_x4201 = kk_std_core_sslice__new_Sslice(s_1, kk_integer_from_small(0), start_1, _ctx); /*sslice/sslice*/
        }
        i_1 = kk_std_core_sslice_count(_x_x4201, _ctx); /*int*/
        kk_std_core_types__list _x_x4202;
        kk_std_core_types__list _x_x4203;
        kk_std_core_types__list _x_x4204 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4203 = kk_std_core_list_drop(_x_x4204, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4205 = kk_integer_add_small_const(i_1, 0, _ctx); /*int*/
        _x_x4202 = kk_std_core_list_take(_x_x4203, _x_x4205, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4202, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2743 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2743, _ctx)) {
          kk_box_t _box_x329 = _match_x2743._cons.Just.value;
          kk_integer_t i_2 = kk_integer_unbox(_box_x329, _ctx);
          kk_integer_dup(i_2, _ctx);
          kk_std_core_types__maybe_drop(_match_x2743, _ctx);
          kk_std_core_types__list _x_x4206;
          kk_std_core_types__list _x_x4207;
          kk_std_core_types__list _x_x4208 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4207 = kk_std_core_list_drop(_x_x4208, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4209 = kk_integer_add_small_const(i_2, 0, _ctx); /*int*/
          _x_x4206 = kk_std_core_list_take(_x_x4207, _x_x4209, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4206, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2744;
          kk_string_t _x_x4210 = kk_string_dup(rest, _ctx); /*string*/
          kk_string_t _x_x4211;
          kk_define_string_literal(static, _s_x4212, 1, "z", _ctx)
          _x_x4211 = kk_string_dup(_s_x4212, _ctx); /*string*/
          _match_x2744 = kk_std_core_sslice_find(_x_x4210, _x_x4211, _ctx); /*maybe<sslice/sslice>*/
          if (kk_std_core_types__is_Just(_match_x2744, _ctx)) {
            kk_box_t _box_x330 = _match_x2744._cons.Just.value;
            kk_std_core_sslice__sslice hc____ss_0_0 = kk_std_core_sslice__sslice_unbox(_box_x330, KK_BORROWED, _ctx);
            kk_std_core_sslice__sslice_dup(hc____ss_0_0, _ctx);
            kk_std_core_types__maybe_drop(_match_x2744, _ctx);
            kk_integer_t i_0_2;
            kk_std_core_sslice__sslice _x_x4213;
            {
              kk_string_t s_2 = hc____ss_0_0.str;
              kk_integer_t start_2 = hc____ss_0_0.start;
              kk_string_dup(s_2, _ctx);
              kk_integer_dup(start_2, _ctx);
              kk_std_core_sslice__sslice_drop(hc____ss_0_0, _ctx);
              _x_x4213 = kk_std_core_sslice__new_Sslice(s_2, kk_integer_from_small(0), start_2, _ctx); /*sslice/sslice*/
            }
            i_0_2 = kk_std_core_sslice_count(_x_x4213, _ctx); /*int*/
            kk_std_core_types__list _x_x4214;
            kk_std_core_types__list _x_x4215;
            kk_std_core_types__list _x_x4216 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4215 = kk_std_core_list_drop(_x_x4216, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4217 = kk_integer_add_small_const(i_0_2, 0, _ctx); /*int*/
            _x_x4214 = kk_std_core_list_take(_x_x4215, _x_x4217, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4214, _ctx);
          }
          {
            kk_std_core_types__maybe _match_x2745 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
            if (kk_std_core_types__is_Just(_match_x2745, _ctx)) {
              kk_box_t _box_x331 = _match_x2745._cons.Just.value;
              kk_integer_t i_0_3 = kk_integer_unbox(_box_x331, _ctx);
              kk_integer_dup(i_0_3, _ctx);
              kk_std_core_types__maybe_drop(_match_x2745, _ctx);
              kk_std_core_types__list _x_x4218;
              kk_std_core_types__list _x_x4219;
              kk_std_core_types__list _x_x4220 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
              _x_x4219 = kk_std_core_list_drop(_x_x4220, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x4221 = kk_integer_add_small_const(i_0_3, 0, _ctx); /*int*/
              _x_x4218 = kk_std_core_list_take(_x_x4219, _x_x4221, _ctx); /*list<10001>*/
              return kk_std_core_string_listchar_fs_string(_x_x4218, _ctx);
            }
            {
              return rest;
            }
          }
        }
      }
    }
    {
      bool _match_x2737;
      kk_integer_t _brw_x2740;
      kk_string_t _x_x4222 = kk_string_dup(rest, _ctx); /*string*/
      _brw_x2740 = kk_std_core_string_chars_fs_count(_x_x4222, _ctx); /*int*/
      bool _brw_x2741 = kk_integer_gte_borrow(_brw_x2740,(kk_integer_from_small(11)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2740, _ctx);
      _match_x2737 = _brw_x2741; /*bool*/
      if (_match_x2737) {
        kk_integer_t x_9_10361;
        kk_string_t _x_x4223 = kk_string_dup(rest, _ctx); /*string*/
        x_9_10361 = kk_std_core_string_chars_fs_count(_x_x4223, _ctx); /*int*/
        kk_integer_t x_8_10359 = kk_integer_add_small_const(x_9_10361, -5, _ctx); /*int*/;
        kk_integer_t x_10_10363;
        kk_string_t _x_x4224 = kk_string_dup(rest, _ctx); /*string*/
        x_10_10363 = kk_std_core_string_chars_fs_count(_x_x4224, _ctx); /*int*/
        kk_integer_t y_8_10360 = kk_integer_add_small_const(x_10_10363, -6, _ctx); /*int*/;
        kk_integer_t x_7_10357;
        kk_string_t _x_x4225 = kk_string_dup(rest, _ctx); /*string*/
        x_7_10357 = kk_std_core_string_chars_fs_count(_x_x4225, _ctx); /*int*/
        bool _match_x2738;
        kk_string_t _x_x4226;
        kk_std_core_types__list _x_x4227;
        kk_std_core_types__list _x_x4228;
        kk_std_core_types__list _x_x4229;
        kk_string_t _x_x4230 = kk_string_dup(rest, _ctx); /*string*/
        _x_x4229 = kk_std_core_string_list(_x_x4230, _ctx); /*list<char>*/
        kk_integer_t _x_x4231 = kk_integer_add_small_const(x_7_10357, -6, _ctx); /*int*/
        _x_x4228 = kk_std_core_list_drop(_x_x4229, _x_x4231, _ctx); /*list<10001>*/
        kk_integer_t _x_x4232 = kk_integer_sub(x_8_10359,y_8_10360,kk_context()); /*int*/
        _x_x4227 = kk_std_core_list_take(_x_x4228, _x_x4232, _ctx); /*list<10001>*/
        _x_x4226 = kk_std_core_string_listchar_fs_string(_x_x4227, _ctx); /*string*/
        kk_string_t _x_x4233;
        kk_define_string_literal(static, _s_x4234, 1, "+", _ctx)
        _x_x4233 = kk_string_dup(_s_x4234, _ctx); /*string*/
        _match_x2738 = kk_string_is_eq(_x_x4226,_x_x4233,kk_context()); /*bool*/
        if (_match_x2738) {
          kk_integer_t x_12_10367;
          kk_string_t _x_x4235 = kk_string_dup(rest, _ctx); /*string*/
          x_12_10367 = kk_std_core_string_chars_fs_count(_x_x4235, _ctx); /*int*/
          kk_integer_t x_11_10365 = kk_integer_add_small_const(x_12_10367, -6, _ctx); /*int*/;
          kk_std_core_types__list _x_x4236;
          kk_std_core_types__list _x_x4237;
          kk_std_core_types__list _x_x4238 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4237 = kk_std_core_list_drop(_x_x4238, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4239 = kk_integer_add_small_const(x_11_10365, 0, _ctx); /*int*/
          _x_x4236 = kk_std_core_list_take(_x_x4237, _x_x4239, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4236, _ctx);
        }
        {
          kk_integer_t x_15_10373;
          kk_string_t _x_x4240 = kk_string_dup(rest, _ctx); /*string*/
          x_15_10373 = kk_std_core_string_chars_fs_count(_x_x4240, _ctx); /*int*/
          kk_integer_t x_14_10371 = kk_integer_add_small_const(x_15_10373, -5, _ctx); /*int*/;
          kk_integer_t x_16_10375;
          kk_string_t _x_x4241 = kk_string_dup(rest, _ctx); /*string*/
          x_16_10375 = kk_std_core_string_chars_fs_count(_x_x4241, _ctx); /*int*/
          kk_integer_t y_14_10372 = kk_integer_add_small_const(x_16_10375, -6, _ctx); /*int*/;
          kk_integer_t x_13_10369;
          kk_string_t _x_x4242 = kk_string_dup(rest, _ctx); /*string*/
          x_13_10369 = kk_std_core_string_chars_fs_count(_x_x4242, _ctx); /*int*/
          bool _match_x2739;
          kk_string_t _x_x4243;
          kk_std_core_types__list _x_x4244;
          kk_std_core_types__list _x_x4245;
          kk_std_core_types__list _x_x4246;
          kk_string_t _x_x4247 = kk_string_dup(rest, _ctx); /*string*/
          _x_x4246 = kk_std_core_string_list(_x_x4247, _ctx); /*list<char>*/
          kk_integer_t _x_x4248 = kk_integer_add_small_const(x_13_10369, -6, _ctx); /*int*/
          _x_x4245 = kk_std_core_list_drop(_x_x4246, _x_x4248, _ctx); /*list<10001>*/
          kk_integer_t _x_x4249 = kk_integer_sub(x_14_10371,y_14_10372,kk_context()); /*int*/
          _x_x4244 = kk_std_core_list_take(_x_x4245, _x_x4249, _ctx); /*list<10001>*/
          _x_x4243 = kk_std_core_string_listchar_fs_string(_x_x4244, _ctx); /*string*/
          kk_string_t _x_x4250;
          kk_define_string_literal(static, _s_x4251, 1, "-", _ctx)
          _x_x4250 = kk_string_dup(_s_x4251, _ctx); /*string*/
          _match_x2739 = kk_string_is_eq(_x_x4243,_x_x4250,kk_context()); /*bool*/
          if (_match_x2739) {
            kk_integer_t x_18_10379;
            kk_string_t _x_x4252 = kk_string_dup(rest, _ctx); /*string*/
            x_18_10379 = kk_std_core_string_chars_fs_count(_x_x4252, _ctx); /*int*/
            kk_integer_t x_17_10377 = kk_integer_add_small_const(x_18_10379, -6, _ctx); /*int*/;
            kk_std_core_types__list _x_x4253;
            kk_std_core_types__list _x_x4254;
            kk_std_core_types__list _x_x4255 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4254 = kk_std_core_list_drop(_x_x4255, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4256 = kk_integer_add_small_const(x_17_10377, 0, _ctx); /*int*/
            _x_x4253 = kk_std_core_list_take(_x_x4254, _x_x4256, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4253, _ctx);
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

kk_std_core_types__either kk_examples_basic_hc__datetime__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2726;
  kk_integer_t _brw_x2733;
  kk_string_t _x_x4257 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2733 = kk_std_core_string_chars_fs_count(_x_x4257, _ctx); /*int*/
  bool _brw_x2734 = kk_integer_lt_borrow(_brw_x2733,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2733, _ctx);
  _match_x2726 = _brw_x2734; /*bool*/
  if (_match_x2726) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4258;
    kk_string_t _x_x4259;
    kk_define_string_literal(static, _s_x4260, 29, "string too short for datetime", _ctx)
    _x_x4259 = kk_string_dup(_s_x4260, _ctx); /*string*/
    _x_x4258 = kk_string_box(_x_x4259); /*10014*/
    return kk_std_core_types__new_Left(_x_x4258, _ctx);
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4261;
    kk_std_core_types__list _x_x4262;
    kk_std_core_types__list _x_x4263;
    kk_string_t _x_x4264 = kk_string_dup(s, _ctx); /*string*/
    _x_x4263 = kk_std_core_string_list(_x_x4264, _ctx); /*list<char>*/
    _x_x4262 = kk_std_core_list_drop(_x_x4263, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4265 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4261 = kk_std_core_list_take(_x_x4262, _x_x4265, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4261, _ctx); /*string*/
    bool _match_x2727;
    kk_string_t _x_x4266 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4267;
    kk_define_string_literal(static, _s_x4268, 1, "T", _ctx)
    _x_x4267 = kk_string_dup(_s_x4268, _ctx); /*string*/
    _match_x2727 = kk_string_is_neq(_x_x4266,_x_x4267,kk_context()); /*bool*/
    if (_match_x2727) {
      bool _match_x2729;
      kk_string_t _x_x4269 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4270;
      kk_define_string_literal(static, _s_x4271, 1, "t", _ctx)
      _x_x4270 = kk_string_dup(_s_x4271, _ctx); /*string*/
      _match_x2729 = kk_string_is_neq(_x_x4269,_x_x4270,kk_context()); /*bool*/
      if (_match_x2729) {
        bool _match_x2731;
        kk_string_t _x_x4272;
        kk_define_string_literal(static, _s_x4273, 1, " ", _ctx)
        _x_x4272 = kk_string_dup(_s_x4273, _ctx); /*string*/
        _match_x2731 = kk_string_is_neq(sep,_x_x4272,kk_context()); /*bool*/
        if (_match_x2731) {
          kk_string_drop(s, _ctx);
          kk_box_t _x_x4274;
          kk_string_t _x_x4275;
          kk_define_string_literal(static, _s_x4276, 27, "no datetime separator found", _ctx)
          _x_x4275 = kk_string_dup(_s_x4276, _ctx); /*string*/
          _x_x4274 = kk_string_box(_x_x4275); /*10014*/
          return kk_std_core_types__new_Left(_x_x4274, _ctx);
        }
        {
          kk_string_t time__part;
          kk_string_t _x_x4277;
          kk_std_core_types__list _x_x4278;
          kk_std_core_types__list _x_x4279 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4278 = kk_std_core_list_drop(_x_x4279, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4277 = kk_std_core_string_listchar_fs_string(_x_x4278, _ctx); /*string*/
          time__part = kk_examples_basic_hc__strip__offset(_x_x4277, _ctx); /*string*/
          bool _match_x2732;
          kk_string_t _x_x4280 = kk_string_dup(time__part, _ctx); /*string*/
          _match_x2732 = kk_examples_basic_hc__is__valid__time(_x_x4280, _ctx); /*bool*/
          if (_match_x2732) {
            return kk_std_core_types__new_Right(kk_string_box(time__part), _ctx);
          }
          {
            kk_string_drop(time__part, _ctx);
            kk_box_t _x_x4281;
            kk_string_t _x_x4282;
            kk_define_string_literal(static, _s_x4283, 20, "invalid time portion", _ctx)
            _x_x4282 = kk_string_dup(_s_x4283, _ctx); /*string*/
            _x_x4281 = kk_string_box(_x_x4282); /*10014*/
            return kk_std_core_types__new_Left(_x_x4281, _ctx);
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        kk_string_t time__part_0;
        kk_string_t _x_x4284;
        kk_std_core_types__list _x_x4285;
        kk_std_core_types__list _x_x4286 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4285 = kk_std_core_list_drop(_x_x4286, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4284 = kk_std_core_string_listchar_fs_string(_x_x4285, _ctx); /*string*/
        time__part_0 = kk_examples_basic_hc__strip__offset(_x_x4284, _ctx); /*string*/
        bool _match_x2730;
        kk_string_t _x_x4287 = kk_string_dup(time__part_0, _ctx); /*string*/
        _match_x2730 = kk_examples_basic_hc__is__valid__time(_x_x4287, _ctx); /*bool*/
        if (_match_x2730) {
          return kk_std_core_types__new_Right(kk_string_box(time__part_0), _ctx);
        }
        {
          kk_string_drop(time__part_0, _ctx);
          kk_box_t _x_x4288;
          kk_string_t _x_x4289;
          kk_define_string_literal(static, _s_x4290, 20, "invalid time portion", _ctx)
          _x_x4289 = kk_string_dup(_s_x4290, _ctx); /*string*/
          _x_x4288 = kk_string_box(_x_x4289); /*10014*/
          return kk_std_core_types__new_Left(_x_x4288, _ctx);
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      kk_string_t time__part_1;
      kk_string_t _x_x4291;
      kk_std_core_types__list _x_x4292;
      kk_std_core_types__list _x_x4293 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4292 = kk_std_core_list_drop(_x_x4293, kk_integer_from_small(11), _ctx); /*list<10001>*/
      _x_x4291 = kk_std_core_string_listchar_fs_string(_x_x4292, _ctx); /*string*/
      time__part_1 = kk_examples_basic_hc__strip__offset(_x_x4291, _ctx); /*string*/
      bool _match_x2728;
      kk_string_t _x_x4294 = kk_string_dup(time__part_1, _ctx); /*string*/
      _match_x2728 = kk_examples_basic_hc__is__valid__time(_x_x4294, _ctx); /*bool*/
      if (_match_x2728) {
        return kk_std_core_types__new_Right(kk_string_box(time__part_1), _ctx);
      }
      {
        kk_string_drop(time__part_1, _ctx);
        kk_box_t _x_x4295;
        kk_string_t _x_x4296;
        kk_define_string_literal(static, _s_x4297, 20, "invalid time portion", _ctx)
        _x_x4296 = kk_string_dup(_s_x4297, _ctx); /*string*/
        _x_x4295 = kk_string_box(_x_x4296); /*10014*/
        return kk_std_core_types__new_Left(_x_x4295, _ctx);
      }
    }
  }
}

kk_std_core_types__maybe kk_examples_basic_hc__datetime__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> maybe<string> */ 
  bool _match_x2717;
  kk_string_t _x_x4298 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4299;
  kk_define_string_literal(static, _s_x4300, 1, "Z", _ctx)
  _x_x4299 = kk_string_dup(_s_x4300, _ctx); /*string*/
  _match_x2717 = kk_string_contains(_x_x4298,_x_x4299,kk_context()); /*bool*/
  if (_match_x2717) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4301;
    kk_string_t _x_x4302;
    kk_define_string_literal(static, _s_x4303, 1, "Z", _ctx)
    _x_x4302 = kk_string_dup(_s_x4303, _ctx); /*string*/
    _x_x4301 = kk_string_box(_x_x4302); /*10024*/
    return kk_std_core_types__new_Just(_x_x4301, _ctx);
  }
  {
    bool _match_x2718;
    kk_string_t _x_x4304 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4305;
    kk_define_string_literal(static, _s_x4306, 1, "z", _ctx)
    _x_x4305 = kk_string_dup(_s_x4306, _ctx); /*string*/
    _match_x2718 = kk_string_contains(_x_x4304,_x_x4305,kk_context()); /*bool*/
    if (_match_x2718) {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4307;
      kk_string_t _x_x4308;
      kk_define_string_literal(static, _s_x4309, 1, "Z", _ctx)
      _x_x4308 = kk_string_dup(_s_x4309, _ctx); /*string*/
      _x_x4307 = kk_string_box(_x_x4308); /*10024*/
      return kk_std_core_types__new_Just(_x_x4307, _ctx);
    }
    {
      bool _match_x2719;
      kk_integer_t _brw_x2724;
      kk_string_t _x_x4310 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2724 = kk_std_core_string_chars_fs_count(_x_x4310, _ctx); /*int*/
      bool _brw_x2725 = kk_integer_gte_borrow(_brw_x2724,(kk_integer_from_small(22)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2724, _ctx);
      _match_x2719 = _brw_x2725; /*bool*/
      if (_match_x2719) {
        kk_integer_t x_1_10387;
        kk_string_t _x_x4311 = kk_string_dup(s, _ctx); /*string*/
        x_1_10387 = kk_std_core_string_chars_fs_count(_x_x4311, _ctx); /*int*/
        kk_integer_t x_0_10385 = kk_integer_add_small_const(x_1_10387, -5, _ctx); /*int*/;
        kk_integer_t x_2_10389;
        kk_string_t _x_x4312 = kk_string_dup(s, _ctx); /*string*/
        x_2_10389 = kk_std_core_string_chars_fs_count(_x_x4312, _ctx); /*int*/
        kk_integer_t y_0_10386 = kk_integer_add_small_const(x_2_10389, -6, _ctx); /*int*/;
        kk_integer_t x_10383;
        kk_string_t _x_x4313 = kk_string_dup(s, _ctx); /*string*/
        x_10383 = kk_std_core_string_chars_fs_count(_x_x4313, _ctx); /*int*/
        bool _match_x2720;
        kk_string_t _x_x4314;
        kk_std_core_types__list _x_x4315;
        kk_std_core_types__list _x_x4316;
        kk_std_core_types__list _x_x4317;
        kk_string_t _x_x4318 = kk_string_dup(s, _ctx); /*string*/
        _x_x4317 = kk_std_core_string_list(_x_x4318, _ctx); /*list<char>*/
        kk_integer_t _x_x4319 = kk_integer_add_small_const(x_10383, -6, _ctx); /*int*/
        _x_x4316 = kk_std_core_list_drop(_x_x4317, _x_x4319, _ctx); /*list<10001>*/
        kk_integer_t _x_x4320 = kk_integer_sub(x_0_10385,y_0_10386,kk_context()); /*int*/
        _x_x4315 = kk_std_core_list_take(_x_x4316, _x_x4320, _ctx); /*list<10001>*/
        _x_x4314 = kk_std_core_string_listchar_fs_string(_x_x4315, _ctx); /*string*/
        kk_string_t _x_x4321;
        kk_define_string_literal(static, _s_x4322, 1, "+", _ctx)
        _x_x4321 = kk_string_dup(_s_x4322, _ctx); /*string*/
        _match_x2720 = kk_string_is_eq(_x_x4314,_x_x4321,kk_context()); /*bool*/
        if (_match_x2720) {
          kk_integer_t x_3_10391;
          kk_string_t _x_x4323 = kk_string_dup(s, _ctx); /*string*/
          x_3_10391 = kk_std_core_string_chars_fs_count(_x_x4323, _ctx); /*int*/
          kk_string_t o;
          kk_std_core_types__list _x_x4324;
          kk_std_core_types__list _x_x4325 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          kk_integer_t _x_x4326 = kk_integer_add_small_const(x_3_10391, -6, _ctx); /*int*/
          _x_x4324 = kk_std_core_list_drop(_x_x4325, _x_x4326, _ctx); /*list<10001>*/
          o = kk_std_core_string_listchar_fs_string(_x_x4324, _ctx); /*string*/
          bool _match_x2723;
          kk_string_t _x_x4327 = kk_string_dup(o, _ctx); /*string*/
          _match_x2723 = kk_examples_basic_hc__is__valid__offset(_x_x4327, _ctx); /*bool*/
          if (_match_x2723) {
            return kk_std_core_types__new_Just(kk_string_box(o), _ctx);
          }
          {
            kk_string_drop(o, _ctx);
            return kk_std_core_types__new_Nothing(_ctx);
          }
        }
        {
          kk_integer_t x_6_10397;
          kk_string_t _x_x4328 = kk_string_dup(s, _ctx); /*string*/
          x_6_10397 = kk_std_core_string_chars_fs_count(_x_x4328, _ctx); /*int*/
          kk_integer_t x_5_10395 = kk_integer_add_small_const(x_6_10397, -5, _ctx); /*int*/;
          kk_integer_t x_7_10399;
          kk_string_t _x_x4329 = kk_string_dup(s, _ctx); /*string*/
          x_7_10399 = kk_std_core_string_chars_fs_count(_x_x4329, _ctx); /*int*/
          kk_integer_t y_5_10396 = kk_integer_add_small_const(x_7_10399, -6, _ctx); /*int*/;
          kk_integer_t x_4_10393;
          kk_string_t _x_x4330 = kk_string_dup(s, _ctx); /*string*/
          x_4_10393 = kk_std_core_string_chars_fs_count(_x_x4330, _ctx); /*int*/
          bool _match_x2721;
          kk_string_t _x_x4331;
          kk_std_core_types__list _x_x4332;
          kk_std_core_types__list _x_x4333;
          kk_std_core_types__list _x_x4334;
          kk_string_t _x_x4335 = kk_string_dup(s, _ctx); /*string*/
          _x_x4334 = kk_std_core_string_list(_x_x4335, _ctx); /*list<char>*/
          kk_integer_t _x_x4336 = kk_integer_add_small_const(x_4_10393, -6, _ctx); /*int*/
          _x_x4333 = kk_std_core_list_drop(_x_x4334, _x_x4336, _ctx); /*list<10001>*/
          kk_integer_t _x_x4337 = kk_integer_sub(x_5_10395,y_5_10396,kk_context()); /*int*/
          _x_x4332 = kk_std_core_list_take(_x_x4333, _x_x4337, _ctx); /*list<10001>*/
          _x_x4331 = kk_std_core_string_listchar_fs_string(_x_x4332, _ctx); /*string*/
          kk_string_t _x_x4338;
          kk_define_string_literal(static, _s_x4339, 1, "-", _ctx)
          _x_x4338 = kk_string_dup(_s_x4339, _ctx); /*string*/
          _match_x2721 = kk_string_is_eq(_x_x4331,_x_x4338,kk_context()); /*bool*/
          if (_match_x2721) {
            kk_integer_t x_8_10401;
            kk_string_t _x_x4340 = kk_string_dup(s, _ctx); /*string*/
            x_8_10401 = kk_std_core_string_chars_fs_count(_x_x4340, _ctx); /*int*/
            kk_string_t o_0;
            kk_std_core_types__list _x_x4341;
            kk_std_core_types__list _x_x4342 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            kk_integer_t _x_x4343 = kk_integer_add_small_const(x_8_10401, -6, _ctx); /*int*/
            _x_x4341 = kk_std_core_list_drop(_x_x4342, _x_x4343, _ctx); /*list<10001>*/
            o_0 = kk_std_core_string_listchar_fs_string(_x_x4341, _ctx); /*string*/
            bool _match_x2722;
            kk_string_t _x_x4344 = kk_string_dup(o_0, _ctx); /*string*/
            _match_x2722 = kk_examples_basic_hc__is__valid__offset(_x_x4344, _ctx); /*bool*/
            if (_match_x2722) {
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

kk_string_t kk_examples_basic_hc__datetime__kind(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2708;
  kk_string_t _x_x4345 = kk_string_dup(s, _ctx); /*string*/
  _match_x2708 = kk_examples_basic_hc__is__valid__time(_x_x4345, _ctx); /*bool*/
  if (_match_x2708) {
    kk_string_drop(s, _ctx);
    kk_define_string_literal(static, _s_x4346, 10, "local-time", _ctx)
    return kk_string_dup(_s_x4346, _ctx);
  }
  {
    bool _match_x2709;
    kk_string_t _x_x4347 = kk_string_dup(s, _ctx); /*string*/
    _match_x2709 = kk_examples_basic_hc__is__valid__date(_x_x4347, _ctx); /*bool*/
    if (_match_x2709) {
      bool _match_x2712;
      kk_integer_t _brw_x2715;
      kk_string_t _x_x4348 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2715 = kk_std_core_string_chars_fs_count(_x_x4348, _ctx); /*int*/
      bool _brw_x2716 = kk_integer_eq_borrow(_brw_x2715,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2715, _ctx);
      _match_x2712 = _brw_x2716; /*bool*/
      if (_match_x2712) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4349, 10, "local-date", _ctx)
        return kk_string_dup(_s_x4349, _ctx);
      }
      {
        bool _match_x2713;
        kk_string_t _x_x4350 = kk_string_dup(s, _ctx); /*string*/
        _match_x2713 = kk_examples_basic_hc__is__iso__datetime(_x_x4350, _ctx); /*bool*/
        if (_match_x2713) {
          kk_string_drop(s, _ctx);
          kk_define_string_literal(static, _s_x4351, 15, "offset-datetime", _ctx)
          return kk_string_dup(_s_x4351, _ctx);
        }
        {
          bool _match_x2714 = kk_examples_basic_hc__is__local__datetime(s, _ctx); /*bool*/;
          if (_match_x2714) {
            kk_define_string_literal(static, _s_x4352, 14, "local-datetime", _ctx)
            return kk_string_dup(_s_x4352, _ctx);
          }
          {
            kk_define_string_literal(static, _s_x4353, 7, "invalid", _ctx)
            return kk_string_dup(_s_x4353, _ctx);
          }
        }
      }
    }
    {
      bool _match_x2710;
      kk_string_t _x_x4354 = kk_string_dup(s, _ctx); /*string*/
      _match_x2710 = kk_examples_basic_hc__is__iso__datetime(_x_x4354, _ctx); /*bool*/
      if (_match_x2710) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4355, 15, "offset-datetime", _ctx)
        return kk_string_dup(_s_x4355, _ctx);
      }
      {
        bool _match_x2711 = kk_examples_basic_hc__is__local__datetime(s, _ctx); /*bool*/;
        if (_match_x2711) {
          kk_define_string_literal(static, _s_x4356, 14, "local-datetime", _ctx)
          return kk_string_dup(_s_x4356, _ctx);
        }
        {
          kk_define_string_literal(static, _s_x4357, 7, "invalid", _ctx)
          return kk_string_dup(_s_x4357, _ctx);
        }
      }
    }
  }
}

kk_integer_t kk_examples_basic_hc__date__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10405;
  kk_string_t _x_x4358 = kk_string_dup(d1, _ctx); /*string*/
  b_10405 = kk_examples_basic_hc__is__valid__date(_x_x4358, _ctx); /*bool*/
  if (b_10405) {
    bool b_0_10406;
    kk_string_t _x_x4359 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10406 = kk_examples_basic_hc__is__valid__date(_x_x4359, _ctx); /*bool*/
    if (b_0_10406) {
      bool _match_x2705;
      kk_std_core_types__order _x_x4360 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2705 = kk_std_core_order__lp__eq__eq__rp_(_x_x4360, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2705) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2706;
        kk_std_core_types__order _x_x4361;
        kk_std_core_types__order _brw_x2707 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4361 = _brw_x2707; /*order*/
        _match_x2706 = kk_std_core_order__lp__eq__eq__rp_(_x_x4361, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2706) {
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

kk_integer_t kk_examples_basic_hc__time__cmp(kk_string_t t1, kk_string_t t2, kk_context_t* _ctx) { /* (t1 : string, t2 : string) -> int */ 
  bool b_10413;
  kk_string_t _x_x4362 = kk_string_dup(t1, _ctx); /*string*/
  b_10413 = kk_examples_basic_hc__is__valid__time(_x_x4362, _ctx); /*bool*/
  if (b_10413) {
    bool b_0_10414;
    kk_string_t _x_x4363 = kk_string_dup(t2, _ctx); /*string*/
    b_0_10414 = kk_examples_basic_hc__is__valid__time(_x_x4363, _ctx); /*bool*/
    if (b_0_10414) {
      bool _match_x2702;
      kk_std_core_types__order _x_x4364 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/
      _match_x2702 = kk_std_core_order__lp__eq__eq__rp_(_x_x4364, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2702) {
        kk_string_drop(t2, _ctx);
        kk_string_drop(t1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2703;
        kk_std_core_types__order _x_x4365;
        kk_std_core_types__order _brw_x2704 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/;
        kk_string_drop(t1, _ctx);
        kk_string_drop(t2, _ctx);
        _x_x4365 = _brw_x2704; /*order*/
        _match_x2703 = kk_std_core_order__lp__eq__eq__rp_(_x_x4365, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2703) {
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

kk_integer_t kk_examples_basic_hc__datetime__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10421;
  kk_string_t _x_x4366 = kk_string_dup(d1, _ctx); /*string*/
  b_10421 = kk_examples_basic_hc__is__local__datetime(_x_x4366, _ctx); /*bool*/
  if (b_10421) {
    bool b_0_10422;
    kk_string_t _x_x4367 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10422 = kk_examples_basic_hc__is__local__datetime(_x_x4367, _ctx); /*bool*/
    if (b_0_10422) {
      bool _match_x2699;
      kk_std_core_types__order _x_x4368 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2699 = kk_std_core_order__lp__eq__eq__rp_(_x_x4368, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2699) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2700;
        kk_std_core_types__order _x_x4369;
        kk_std_core_types__order _brw_x2701 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4369 = _brw_x2701; /*order*/
        _match_x2700 = kk_std_core_order__lp__eq__eq__rp_(_x_x4369, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2700) {
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

bool kk_examples_basic_hc__is__before(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> bool */ 
  bool _match_x2678;
  kk_string_t _x_x4370 = kk_string_dup(d1, _ctx); /*string*/
  _match_x2678 = kk_examples_basic_hc__is__valid__date(_x_x4370, _ctx); /*bool*/
  if (_match_x2678) {
    bool _match_x2688;
    kk_string_t _x_x4371 = kk_string_dup(d2, _ctx); /*string*/
    _match_x2688 = kk_examples_basic_hc__is__valid__date(_x_x4371, _ctx); /*bool*/
    if (_match_x2688) {
      kk_std_core_types__order _x_x4372;
      kk_std_core_types__order _brw_x2698 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
      kk_string_drop(d1, _ctx);
      kk_string_drop(d2, _ctx);
      _x_x4372 = _brw_x2698; /*order*/
      return kk_std_core_order__lp__eq__eq__rp_(_x_x4372, kk_std_core_types__new_Lt(_ctx), _ctx);
    }
    {
      bool _match_x2689;
      kk_string_t _x_x4373 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2689 = kk_examples_basic_hc__is__local__datetime(_x_x4373, _ctx); /*bool*/
      if (_match_x2689) {
        bool _match_x2693;
        kk_string_t _x_x4374 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2693 = kk_examples_basic_hc__is__local__datetime(_x_x4374, _ctx); /*bool*/
        if (_match_x2693) {
          kk_std_core_types__order _x_x4375;
          kk_std_core_types__order _brw_x2697 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4375 = _brw_x2697; /*order*/
          return kk_std_core_order__lp__eq__eq__rp_(_x_x4375, kk_std_core_types__new_Lt(_ctx), _ctx);
        }
        {
          bool _match_x2694;
          kk_string_t _x_x4376 = kk_string_dup(d1, _ctx); /*string*/
          _match_x2694 = kk_examples_basic_hc__is__valid__time(_x_x4376, _ctx); /*bool*/
          if (_match_x2694) {
            bool _match_x2695;
            kk_string_t _x_x4377 = kk_string_dup(d2, _ctx); /*string*/
            _match_x2695 = kk_examples_basic_hc__is__valid__time(_x_x4377, _ctx); /*bool*/
            if (_match_x2695) {
              kk_std_core_types__order _x_x4378;
              kk_std_core_types__order _brw_x2696 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
              kk_string_drop(d1, _ctx);
              kk_string_drop(d2, _ctx);
              _x_x4378 = _brw_x2696; /*order*/
              return kk_std_core_order__lp__eq__eq__rp_(_x_x4378, kk_std_core_types__new_Lt(_ctx), _ctx);
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
        bool _match_x2690;
        kk_string_t _x_x4379 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2690 = kk_examples_basic_hc__is__valid__time(_x_x4379, _ctx); /*bool*/
        if (_match_x2690) {
          bool _match_x2691;
          kk_string_t _x_x4380 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2691 = kk_examples_basic_hc__is__valid__time(_x_x4380, _ctx); /*bool*/
          if (_match_x2691) {
            kk_std_core_types__order _x_x4381;
            kk_std_core_types__order _brw_x2692 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4381 = _brw_x2692; /*order*/
            return kk_std_core_order__lp__eq__eq__rp_(_x_x4381, kk_std_core_types__new_Lt(_ctx), _ctx);
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
    bool _match_x2679;
    kk_string_t _x_x4382 = kk_string_dup(d1, _ctx); /*string*/
    _match_x2679 = kk_examples_basic_hc__is__local__datetime(_x_x4382, _ctx); /*bool*/
    if (_match_x2679) {
      bool _match_x2683;
      kk_string_t _x_x4383 = kk_string_dup(d2, _ctx); /*string*/
      _match_x2683 = kk_examples_basic_hc__is__local__datetime(_x_x4383, _ctx); /*bool*/
      if (_match_x2683) {
        kk_std_core_types__order _x_x4384;
        kk_std_core_types__order _brw_x2687 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4384 = _brw_x2687; /*order*/
        return kk_std_core_order__lp__eq__eq__rp_(_x_x4384, kk_std_core_types__new_Lt(_ctx), _ctx);
      }
      {
        bool _match_x2684;
        kk_string_t _x_x4385 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2684 = kk_examples_basic_hc__is__valid__time(_x_x4385, _ctx); /*bool*/
        if (_match_x2684) {
          bool _match_x2685;
          kk_string_t _x_x4386 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2685 = kk_examples_basic_hc__is__valid__time(_x_x4386, _ctx); /*bool*/
          if (_match_x2685) {
            kk_std_core_types__order _x_x4387;
            kk_std_core_types__order _brw_x2686 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4387 = _brw_x2686; /*order*/
            return kk_std_core_order__lp__eq__eq__rp_(_x_x4387, kk_std_core_types__new_Lt(_ctx), _ctx);
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
      bool _match_x2680;
      kk_string_t _x_x4388 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2680 = kk_examples_basic_hc__is__valid__time(_x_x4388, _ctx); /*bool*/
      if (_match_x2680) {
        bool _match_x2681;
        kk_string_t _x_x4389 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2681 = kk_examples_basic_hc__is__valid__time(_x_x4389, _ctx); /*bool*/
        if (_match_x2681) {
          kk_std_core_types__order _x_x4390;
          kk_std_core_types__order _brw_x2682 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4390 = _brw_x2682; /*order*/
          return kk_std_core_order__lp__eq__eq__rp_(_x_x4390, kk_std_core_types__new_Lt(_ctx), _ctx);
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

kk_std_core_types__either kk_examples_basic_hc__offset__to__minutes(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,int> */ 
  bool _match_x2671;
  kk_string_t _x_x4391 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4392;
  kk_define_string_literal(static, _s_x4393, 1, "Z", _ctx)
  _x_x4392 = kk_string_dup(_s_x4393, _ctx); /*string*/
  _match_x2671 = kk_string_is_eq(_x_x4391,_x_x4392,kk_context()); /*bool*/
  if (_match_x2671) {
    kk_string_drop(s, _ctx);
    return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
  }
  {
    bool _match_x2672;
    kk_string_t _x_x4394 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4395;
    kk_define_string_literal(static, _s_x4396, 1, "z", _ctx)
    _x_x4395 = kk_string_dup(_s_x4396, _ctx); /*string*/
    _match_x2672 = kk_string_is_eq(_x_x4394,_x_x4395,kk_context()); /*bool*/
    if (_match_x2672) {
      kk_string_drop(s, _ctx);
      return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
    }
    {
      bool b_10443;
      kk_string_t _x_x4397 = kk_string_dup(s, _ctx); /*string*/
      b_10443 = kk_examples_basic_hc__is__valid__offset(_x_x4397, _ctx); /*bool*/
      if (b_10443) {
        kk_integer_t hc__sign_0;
        bool _match_x2677;
        kk_string_t _x_x4398;
        kk_std_core_types__list _x_x4399;
        kk_std_core_types__list _x_x4400;
        kk_std_core_types__list _x_x4401;
        kk_string_t _x_x4402 = kk_string_dup(s, _ctx); /*string*/
        _x_x4401 = kk_std_core_string_list(_x_x4402, _ctx); /*list<char>*/
        _x_x4400 = kk_std_core_list_drop(_x_x4401, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4403 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x4399 = kk_std_core_list_take(_x_x4400, _x_x4403, _ctx); /*list<10001>*/
        _x_x4398 = kk_std_core_string_listchar_fs_string(_x_x4399, _ctx); /*string*/
        kk_string_t _x_x4404;
        kk_define_string_literal(static, _s_x4405, 1, "-", _ctx)
        _x_x4404 = kk_string_dup(_s_x4405, _ctx); /*string*/
        _match_x2677 = kk_string_is_eq(_x_x4398,_x_x4404,kk_context()); /*bool*/
        if (_match_x2677) {
          hc__sign_0 = kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx); /*int*/
        }
        else {
          hc__sign_0 = kk_integer_from_small(1); /*int*/
        }
        kk_string_t s_0_10448;
        kk_std_core_types__list _x_x4406;
        kk_std_core_types__list _x_x4407;
        kk_std_core_types__list _x_x4408;
        kk_string_t _x_x4409 = kk_string_dup(s, _ctx); /*string*/
        _x_x4408 = kk_std_core_string_list(_x_x4409, _ctx); /*list<char>*/
        _x_x4407 = kk_std_core_list_drop(_x_x4408, kk_integer_from_small(1), _ctx); /*list<10001>*/
        kk_integer_t _x_x4410 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
        _x_x4406 = kk_std_core_list_take(_x_x4407, _x_x4410, _ctx); /*list<10001>*/
        s_0_10448 = kk_std_core_string_listchar_fs_string(_x_x4406, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2673;
        bool _x_x4411;
        kk_std_core_types__optional _match_x2676 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2676, _ctx)) {
          kk_box_t _box_x358 = _match_x2676._cons._Optional.value;
          bool _uniq_hex_581 = kk_bool_unbox(_box_x358);
          kk_std_core_types__optional_drop(_match_x2676, _ctx);
          _x_x4411 = _uniq_hex_581; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2676, _ctx);
          _x_x4411 = false; /*bool*/
        }
        _match_x2673 = kk_std_core_int_xparse(s_0_10448, _x_x4411, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2673, _ctx)) {
          kk_box_t _box_x359 = _match_x2673._cons.Just.value;
          kk_integer_t h = kk_integer_unbox(_box_x359, _ctx);
          kk_integer_dup(h, _ctx);
          kk_std_core_types__maybe_drop(_match_x2673, _ctx);
          kk_string_t s_1_10452;
          kk_std_core_types__list _x_x4412;
          kk_std_core_types__list _x_x4413;
          kk_std_core_types__list _x_x4414 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4413 = kk_std_core_list_drop(_x_x4414, kk_integer_from_small(4), _ctx); /*list<10001>*/
          kk_integer_t _x_x4415 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
          _x_x4412 = kk_std_core_list_take(_x_x4413, _x_x4415, _ctx); /*list<10001>*/
          s_1_10452 = kk_std_core_string_listchar_fs_string(_x_x4412, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2674;
          bool _x_x4416;
          kk_std_core_types__optional _match_x2675 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2675, _ctx)) {
            kk_box_t _box_x360 = _match_x2675._cons._Optional.value;
            bool _uniq_hex_581_0 = kk_bool_unbox(_box_x360);
            kk_std_core_types__optional_drop(_match_x2675, _ctx);
            _x_x4416 = _uniq_hex_581_0; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2675, _ctx);
            _x_x4416 = false; /*bool*/
          }
          _match_x2674 = kk_std_core_int_xparse(s_1_10452, _x_x4416, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2674, _ctx)) {
            kk_box_t _box_x361 = _match_x2674._cons.Just.value;
            kk_integer_t m = kk_integer_unbox(_box_x361, _ctx);
            kk_integer_dup(m, _ctx);
            kk_std_core_types__maybe_drop(_match_x2674, _ctx);
            kk_integer_t x_3_10456 = kk_integer_mul(h,(kk_integer_from_small(60)),kk_context()); /*int*/;
            kk_integer_t _b_x362_368;
            kk_integer_t _x_x4417 = kk_integer_add(x_3_10456,m,kk_context()); /*int*/
            _b_x362_368 = kk_integer_mul(hc__sign_0,_x_x4417,kk_context()); /*int*/
            return kk_std_core_types__new_Right(kk_integer_box(_b_x362_368, _ctx), _ctx);
          }
          {
            kk_integer_drop(hc__sign_0, _ctx);
            kk_integer_drop(h, _ctx);
            kk_box_t _x_x4418;
            kk_string_t _x_x4419;
            kk_define_string_literal(static, _s_x4420, 22, "invalid offset minutes", _ctx)
            _x_x4419 = kk_string_dup(_s_x4420, _ctx); /*string*/
            _x_x4418 = kk_string_box(_x_x4419); /*10014*/
            return kk_std_core_types__new_Left(_x_x4418, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(hc__sign_0, _ctx);
          kk_box_t _x_x4421;
          kk_string_t _x_x4422;
          kk_define_string_literal(static, _s_x4423, 20, "invalid offset hours", _ctx)
          _x_x4422 = kk_string_dup(_s_x4423, _ctx); /*string*/
          _x_x4421 = kk_string_box(_x_x4422); /*10014*/
          return kk_std_core_types__new_Left(_x_x4421, _ctx);
        }
      }
      {
        kk_string_t _b_x365_371;
        kk_string_t _x_x4424;
        kk_define_string_literal(static, _s_x4425, 16, "invalid offset: ", _ctx)
        _x_x4424 = kk_string_dup(_s_x4425, _ctx); /*string*/
        _b_x365_371 = kk_std_core_types__lp__plus__plus__rp_(_x_x4424, s, _ctx); /*string*/
        return kk_std_core_types__new_Left(kk_string_box(_b_x365_371), _ctx);
      }
    }
  }
}

kk_integer_t kk_examples_basic_hc__list__int__nth(kk_std_core_types__list xs, kk_integer_t i, kk_context_t* _ctx) { /* (xs : list<int>, i : int) -> div int */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(i, _ctx);
    return kk_integer_from_small(0);
  }
  {
    struct kk_std_core_types_Cons* _con_x4426 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x372 = _con_x4426->head;
    kk_std_core_types__list rest = _con_x4426->tail;
    kk_integer_t x = kk_integer_unbox(_box_x372, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_integer_dup(x, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool _match_x2670 = kk_integer_eq_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2670) {
      kk_std_core_types__list_drop(rest, _ctx);
      kk_integer_drop(i, _ctx);
      return x;
    }
    {
      kk_integer_drop(x, _ctx);
      { // tailcall
        kk_integer_t _x_x4427 = kk_integer_add_small_const(i, -1, _ctx); /*int*/
        xs = rest;
        i = _x_x4427;
        goto kk__tailcall;
      }
    }
  }
}

kk_std_core_types__either kk_examples_basic_hc__day__of__week(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> div either<string,string> */ 
  bool b_10460;
  kk_string_t _x_x4428 = kk_string_dup(s, _ctx); /*string*/
  b_10460 = kk_examples_basic_hc__is__valid__date(_x_x4428, _ctx); /*bool*/
  if (b_10460) {
    kk_std_core_types__either _match_x2666 = kk_examples_basic_hc__date__parts(s, _ctx); /*either<string,(int, int, int)>*/;
    if (kk_std_core_types__is_Left(_match_x2666, _ctx)) {
      kk_box_t _box_x373 = _match_x2666._cons.Left.left;
      kk_string_t e = kk_string_unbox(_box_x373);
      kk_string_dup(e, _ctx);
      kk_std_core_types__either_drop(_match_x2666, _ctx);
      return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
    }
    {
      kk_box_t _box_x375 = _match_x2666._cons.Right.right;
      kk_std_core_types__tuple3 parts = kk_std_core_types__tuple3_unbox(_box_x375, KK_BORROWED, _ctx);
      kk_std_core_types__tuple3_dup(parts, _ctx);
      kk_std_core_types__either_drop(_match_x2666, _ctx);
      kk_integer_t y_0;
      bool _match_x2667;
      kk_integer_t _brw_x2668;
      {
        kk_box_t _box_x376 = parts.fst;
        kk_box_t _box_x377 = parts.snd;
        kk_box_t _box_x378 = parts.thd;
        kk_integer_t _x = kk_integer_unbox(_box_x377, _ctx);
        kk_integer_dup(_x, _ctx);
        _brw_x2668 = _x; /*int*/
      }
      bool _brw_x2669 = kk_integer_lt_borrow(_brw_x2668,(kk_integer_from_small(3)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2668, _ctx);
      _match_x2667 = _brw_x2669; /*bool*/
      if (_match_x2667) {
        kk_integer_t _x_x4429;
        {
          kk_box_t _box_x379 = parts.fst;
          kk_box_t _box_x380 = parts.snd;
          kk_box_t _box_x381 = parts.thd;
          kk_integer_t _x_0 = kk_integer_unbox(_box_x379, _ctx);
          kk_integer_dup(_x_0, _ctx);
          _x_x4429 = _x_0; /*int*/
        }
        y_0 = kk_integer_add_small_const(_x_x4429, -1, _ctx); /*int*/
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
      kk_integer_t _x_x4430 = kk_integer_dup(y_0, _ctx); /*int*/
      y_5_10475 = kk_integer_div(_x_x4430,(kk_integer_from_small(4)),kk_context()); /*int*/
      kk_integer_t x_3_10472;
      kk_integer_t _x_x4431 = kk_integer_dup(y_0, _ctx); /*int*/
      x_3_10472 = kk_integer_add(_x_x4431,y_5_10475,kk_context()); /*int*/
      kk_integer_t y_4_10473;
      kk_integer_t _x_x4432 = kk_integer_dup(y_0, _ctx); /*int*/
      y_4_10473 = kk_integer_div(_x_x4432,(kk_integer_from_small(100)),kk_context()); /*int*/
      kk_integer_t x_2_10470 = kk_integer_sub(x_3_10472,y_4_10473,kk_context()); /*int*/;
      kk_integer_t y_3_10471 = kk_integer_div(y_0,(kk_integer_from_small(400)),kk_context()); /*int*/;
      kk_integer_t x_1_10468 = kk_integer_add(x_2_10470,y_3_10471,kk_context()); /*int*/;
      kk_integer_t y_2_10469;
      kk_std_core_types__list _x_x4433;
      kk_std_core_types__list _x_x4434;
      kk_std_core_types__list _x_x4435;
      kk_std_core_types__list _x_x4436;
      kk_std_core_types__list _x_x4437;
      kk_std_core_types__list _x_x4438;
      kk_std_core_types__list _x_x4439;
      kk_std_core_types__list _x_x4440;
      kk_std_core_types__list _x_x4441;
      kk_std_core_types__list _x_x4442;
      kk_std_core_types__list _x_x4443;
      kk_std_core_types__list _x_x4444 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      _x_x4443 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4444, _ctx); /*list<10021>*/
      _x_x4442 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(6), _ctx), _x_x4443, _ctx); /*list<10021>*/
      _x_x4441 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), _x_x4442, _ctx); /*list<10021>*/
      _x_x4440 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(1), _ctx), _x_x4441, _ctx); /*list<10021>*/
      _x_x4439 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4440, _ctx); /*list<10021>*/
      _x_x4438 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4439, _ctx); /*list<10021>*/
      _x_x4437 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4438, _ctx); /*list<10021>*/
      _x_x4436 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4437, _ctx); /*list<10021>*/
      _x_x4435 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4436, _ctx); /*list<10021>*/
      _x_x4434 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4435, _ctx); /*list<10021>*/
      _x_x4433 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4434, _ctx); /*list<10021>*/
      kk_integer_t _x_x4445;
      kk_integer_t _x_x4446;
      {
        kk_box_t _box_x409 = parts.fst;
        kk_box_t _box_x410 = parts.snd;
        kk_box_t _box_x411 = parts.thd;
        kk_integer_t _x_2 = kk_integer_unbox(_box_x410, _ctx);
        kk_integer_dup(_x_2, _ctx);
        _x_x4446 = _x_2; /*int*/
      }
      _x_x4445 = kk_integer_add_small_const(_x_x4446, -1, _ctx); /*int*/
      y_2_10469 = kk_examples_basic_hc__list__int__nth(_x_x4433, _x_x4445, _ctx); /*int*/
      kk_integer_t x_0_10466 = kk_integer_add(x_1_10468,y_2_10469,kk_context()); /*int*/;
      kk_integer_t idx;
      kk_integer_t _x_x4447;
      kk_integer_t _x_x4448;
      {
        kk_box_t _box_x436 = parts.fst;
        kk_box_t _box_x437 = parts.snd;
        kk_box_t _box_x438 = parts.thd;
        kk_integer_t _x_3 = kk_integer_unbox(_box_x438, _ctx);
        kk_integer_dup(_x_3, _ctx);
        kk_std_core_types__tuple3_drop(parts, _ctx);
        _x_x4448 = _x_3; /*int*/
      }
      _x_x4447 = kk_integer_add(x_0_10466,_x_x4448,kk_context()); /*int*/
      idx = kk_integer_mod(_x_x4447,(kk_integer_from_small(7)),kk_context()); /*int*/
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(0), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4449;
        kk_string_t _x_x4450;
        kk_define_string_literal(static, _s_x4451, 6, "sunday", _ctx)
        _x_x4450 = kk_string_dup(_s_x4451, _ctx); /*string*/
        _x_x4449 = kk_string_box(_x_x4450); /*10015*/
        return kk_std_core_types__new_Right(_x_x4449, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(1), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4452;
        kk_string_t _x_x4453;
        kk_define_string_literal(static, _s_x4454, 6, "monday", _ctx)
        _x_x4453 = kk_string_dup(_s_x4454, _ctx); /*string*/
        _x_x4452 = kk_string_box(_x_x4453); /*10015*/
        return kk_std_core_types__new_Right(_x_x4452, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(2), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4455;
        kk_string_t _x_x4456;
        kk_define_string_literal(static, _s_x4457, 7, "tuesday", _ctx)
        _x_x4456 = kk_string_dup(_s_x4457, _ctx); /*string*/
        _x_x4455 = kk_string_box(_x_x4456); /*10015*/
        return kk_std_core_types__new_Right(_x_x4455, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(3), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4458;
        kk_string_t _x_x4459;
        kk_define_string_literal(static, _s_x4460, 9, "wednesday", _ctx)
        _x_x4459 = kk_string_dup(_s_x4460, _ctx); /*string*/
        _x_x4458 = kk_string_box(_x_x4459); /*10015*/
        return kk_std_core_types__new_Right(_x_x4458, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(4), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4461;
        kk_string_t _x_x4462;
        kk_define_string_literal(static, _s_x4463, 8, "thursday", _ctx)
        _x_x4462 = kk_string_dup(_s_x4463, _ctx); /*string*/
        _x_x4461 = kk_string_box(_x_x4462); /*10015*/
        return kk_std_core_types__new_Right(_x_x4461, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(5), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4464;
        kk_string_t _x_x4465;
        kk_define_string_literal(static, _s_x4466, 6, "friday", _ctx)
        _x_x4465 = kk_string_dup(_s_x4466, _ctx); /*string*/
        _x_x4464 = kk_string_box(_x_x4465); /*10015*/
        return kk_std_core_types__new_Right(_x_x4464, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(6), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4467;
        kk_string_t _x_x4468;
        kk_define_string_literal(static, _s_x4469, 8, "saturday", _ctx)
        _x_x4468 = kk_string_dup(_s_x4469, _ctx); /*string*/
        _x_x4467 = kk_string_box(_x_x4468); /*10015*/
        return kk_std_core_types__new_Right(_x_x4467, _ctx);
      }
      {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4470;
        kk_string_t _x_x4471;
        kk_define_string_literal(static, _s_x4472, 11, "unreachable", _ctx)
        _x_x4471 = kk_string_dup(_s_x4472, _ctx); /*string*/
        _x_x4470 = kk_string_box(_x_x4471); /*10014*/
        return kk_std_core_types__new_Left(_x_x4470, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x447_457;
    kk_string_t _x_x4473;
    kk_define_string_literal(static, _s_x4474, 14, "invalid date: ", _ctx)
    _x_x4473 = kk_string_dup(_s_x4474, _ctx); /*string*/
    _b_x447_457 = kk_std_core_types__lp__plus__plus__rp_(_x_x4473, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x447_457), _ctx);
  }
}

kk_examples_basic__clispec kk_examples_basic_hc__with__flags(kk_examples_basic__clispec spec, kk_std_core_types__list flags, kk_context_t* _ctx) { /* (spec : clispec, flags : list<cliflag>) -> clispec */ 
  kk_string_t _x_x4475;
  {
    struct kk_examples_basic_Clispec* _con_x4476 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4476->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4475 = _x; /*string*/
  }
  kk_string_t _x_x4477;
  {
    struct kk_examples_basic_Clispec* _con_x4478 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4478->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4477 = _x_0; /*string*/
  }
  kk_string_t _x_x4479;
  {
    struct kk_examples_basic_Clispec* _con_x4480 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4480->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4479 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4481;
  {
    struct kk_examples_basic_Clispec* _con_x4482 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4482->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4481 = _x_2; /*list<examples/basic/clioption>*/
  }
  kk_std_core_types__list _x_x4483;
  {
    struct kk_examples_basic_Clispec* _con_x4484 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4484->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4483 = _x_3; /*list<examples/basic/cliarg>*/
  }
  kk_std_core_types__list _x_x4485;
  {
    struct kk_examples_basic_Clispec* _con_x4486 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4486->app__name;
    kk_string_t _pat_1_4 = _con_x4486->app__version;
    kk_string_t _pat_2_4 = _con_x4486->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4486->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4486->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4486->app__args;
    kk_std_core_types__list _x_4 = _con_x4486->app__commands;
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
    _x_x4485 = _x_4; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x4475, _x_x4477, _x_x4479, flags, _x_x4481, _x_x4483, _x_x4485, _ctx);
}

kk_examples_basic__clispec kk_examples_basic_hc__with__options(kk_examples_basic__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<clioption>) -> clispec */ 
  kk_string_t _x_x4487;
  {
    struct kk_examples_basic_Clispec* _con_x4488 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4488->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4487 = _x; /*string*/
  }
  kk_string_t _x_x4489;
  {
    struct kk_examples_basic_Clispec* _con_x4490 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4490->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4489 = _x_0; /*string*/
  }
  kk_string_t _x_x4491;
  {
    struct kk_examples_basic_Clispec* _con_x4492 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4492->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4491 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4493;
  {
    struct kk_examples_basic_Clispec* _con_x4494 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4494->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4493 = _x_2; /*list<examples/basic/cliflag>*/
  }
  kk_std_core_types__list _x_x4495;
  {
    struct kk_examples_basic_Clispec* _con_x4496 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4496->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4495 = _x_3; /*list<examples/basic/cliarg>*/
  }
  kk_std_core_types__list _x_x4497;
  {
    struct kk_examples_basic_Clispec* _con_x4498 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4498->app__name;
    kk_string_t _pat_1_4 = _con_x4498->app__version;
    kk_string_t _pat_2_4 = _con_x4498->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4498->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4498->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4498->app__args;
    kk_std_core_types__list _x_4 = _con_x4498->app__commands;
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
    _x_x4497 = _x_4; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x4487, _x_x4489, _x_x4491, _x_x4493, options, _x_x4495, _x_x4497, _ctx);
}

kk_examples_basic__clispec kk_examples_basic_hc__with__args(kk_examples_basic__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<cliarg>) -> clispec */ 
  kk_string_t _x_x4499;
  {
    struct kk_examples_basic_Clispec* _con_x4500 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4500->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4499 = _x; /*string*/
  }
  kk_string_t _x_x4501;
  {
    struct kk_examples_basic_Clispec* _con_x4502 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4502->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4501 = _x_0; /*string*/
  }
  kk_string_t _x_x4503;
  {
    struct kk_examples_basic_Clispec* _con_x4504 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4504->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4503 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4505;
  {
    struct kk_examples_basic_Clispec* _con_x4506 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4506->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4505 = _x_2; /*list<examples/basic/cliflag>*/
  }
  kk_std_core_types__list _x_x4507;
  {
    struct kk_examples_basic_Clispec* _con_x4508 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4508->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4507 = _x_3; /*list<examples/basic/clioption>*/
  }
  kk_std_core_types__list _x_x4509;
  {
    struct kk_examples_basic_Clispec* _con_x4510 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4510->app__name;
    kk_string_t _pat_1_4 = _con_x4510->app__version;
    kk_string_t _pat_2_4 = _con_x4510->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4510->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4510->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4510->app__args;
    kk_std_core_types__list _x_4 = _con_x4510->app__commands;
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
    _x_x4509 = _x_4; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x4499, _x_x4501, _x_x4503, _x_x4505, _x_x4507, args, _x_x4509, _ctx);
}

kk_examples_basic__clispec kk_examples_basic_hc__with__commands(kk_examples_basic__clispec spec, kk_std_core_types__list commands, kk_context_t* _ctx) { /* (spec : clispec, commands : list<(string, clispec)>) -> clispec */ 
  kk_string_t _x_x4511;
  {
    struct kk_examples_basic_Clispec* _con_x4512 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4512->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4511 = _x; /*string*/
  }
  kk_string_t _x_x4513;
  {
    struct kk_examples_basic_Clispec* _con_x4514 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4514->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4513 = _x_0; /*string*/
  }
  kk_string_t _x_x4515;
  {
    struct kk_examples_basic_Clispec* _con_x4516 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4516->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4515 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4517;
  {
    struct kk_examples_basic_Clispec* _con_x4518 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4518->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4517 = _x_2; /*list<examples/basic/cliflag>*/
  }
  kk_std_core_types__list _x_x4519;
  {
    struct kk_examples_basic_Clispec* _con_x4520 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4520->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4519 = _x_3; /*list<examples/basic/clioption>*/
  }
  kk_std_core_types__list _x_x4521;
  {
    struct kk_examples_basic_Clispec* _con_x4522 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4522->app__name;
    kk_string_t _pat_1_4 = _con_x4522->app__version;
    kk_string_t _pat_2_4 = _con_x4522->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4522->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4522->app__options;
    kk_std_core_types__list _x_4 = _con_x4522->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4522->app__commands;
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
    _x_x4521 = _x_4; /*list<examples/basic/cliarg>*/
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x4511, _x_x4513, _x_x4515, _x_x4517, _x_x4519, _x_x4521, commands, _ctx);
}

kk_examples_basic__clispec kk_examples_basic_hc__flag(kk_examples_basic__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list flags_10505;
  kk_std_core_types__list _x_x4523;
  {
    struct kk_examples_basic_Clispec* _con_x4524 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4524->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4523 = _x_5; /*list<examples/basic/cliflag>*/
  }
  kk_std_core_types__list _x_x4525;
  kk_box_t _x_x4526;
  kk_examples_basic__cliflag _x_x4527 = kk_examples_basic__new_Cliflag(kk_reuse_null, 0, name, kkloc_short, help__text, _ctx); /*examples/basic/cliflag*/
  _x_x4526 = kk_examples_basic__cliflag_box(_x_x4527, _ctx); /*10021*/
  _x_x4525 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4526, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  flags_10505 = kk_std_core_list_append(_x_x4523, _x_x4525, _ctx); /*list<examples/basic/cliflag>*/
  kk_string_t _x_x4528;
  {
    struct kk_examples_basic_Clispec* _con_x4529 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4529->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4528 = _x; /*string*/
  }
  kk_string_t _x_x4530;
  {
    struct kk_examples_basic_Clispec* _con_x4531 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4531->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4530 = _x_0; /*string*/
  }
  kk_string_t _x_x4532;
  {
    struct kk_examples_basic_Clispec* _con_x4533 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4533->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4532 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4534;
  {
    struct kk_examples_basic_Clispec* _con_x4535 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4535->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4534 = _x_2; /*list<examples/basic/clioption>*/
  }
  kk_std_core_types__list _x_x4536;
  {
    struct kk_examples_basic_Clispec* _con_x4537 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4537->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4536 = _x_3; /*list<examples/basic/cliarg>*/
  }
  kk_std_core_types__list _x_x4538;
  {
    struct kk_examples_basic_Clispec* _con_x4539 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4539->app__name;
    kk_string_t _pat_1_4 = _con_x4539->app__version;
    kk_string_t _pat_2_4 = _con_x4539->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4539->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4539->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4539->app__args;
    kk_std_core_types__list _x_4 = _con_x4539->app__commands;
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
    _x_x4538 = _x_4; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x4528, _x_x4530, _x_x4532, flags_10505, _x_x4534, _x_x4536, _x_x4538, _ctx);
}

kk_examples_basic__clispec kk_examples_basic_hc__option(kk_examples_basic__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list options_10516;
  kk_std_core_types__list _x_x4540;
  {
    struct kk_examples_basic_Clispec* _con_x4541 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4541->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4540 = _x_5; /*list<examples/basic/clioption>*/
  }
  kk_std_core_types__list _x_x4542;
  kk_box_t _x_x4543;
  kk_examples_basic__clioption _x_x4544;
  kk_string_t _x_x4545 = kk_string_empty(); /*string*/
  _x_x4544 = kk_examples_basic__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, _x_x4545, _ctx); /*examples/basic/clioption*/
  _x_x4543 = kk_examples_basic__clioption_box(_x_x4544, _ctx); /*10021*/
  _x_x4542 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4543, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10516 = kk_std_core_list_append(_x_x4540, _x_x4542, _ctx); /*list<examples/basic/clioption>*/
  kk_string_t _x_x4547;
  {
    struct kk_examples_basic_Clispec* _con_x4548 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4548->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4547 = _x; /*string*/
  }
  kk_string_t _x_x4549;
  {
    struct kk_examples_basic_Clispec* _con_x4550 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4550->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4549 = _x_0; /*string*/
  }
  kk_string_t _x_x4551;
  {
    struct kk_examples_basic_Clispec* _con_x4552 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4552->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4551 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4553;
  {
    struct kk_examples_basic_Clispec* _con_x4554 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4554->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4553 = _x_2; /*list<examples/basic/cliflag>*/
  }
  kk_std_core_types__list _x_x4555;
  {
    struct kk_examples_basic_Clispec* _con_x4556 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4556->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4555 = _x_3; /*list<examples/basic/cliarg>*/
  }
  kk_std_core_types__list _x_x4557;
  {
    struct kk_examples_basic_Clispec* _con_x4558 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4558->app__name;
    kk_string_t _pat_1_4 = _con_x4558->app__version;
    kk_string_t _pat_2_4 = _con_x4558->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4558->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4558->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4558->app__args;
    kk_std_core_types__list _x_4 = _con_x4558->app__commands;
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
    _x_x4557 = _x_4; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x4547, _x_x4549, _x_x4551, _x_x4553, options_10516, _x_x4555, _x_x4557, _ctx);
}

kk_examples_basic__clispec kk_examples_basic_hc__option__default(kk_examples_basic__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string, default : string) -> clispec */ 
  kk_std_core_types__list options_10527;
  kk_std_core_types__list _x_x4559;
  {
    struct kk_examples_basic_Clispec* _con_x4560 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4560->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4559 = _x_5; /*list<examples/basic/clioption>*/
  }
  kk_std_core_types__list _x_x4561;
  kk_box_t _x_x4562;
  kk_examples_basic__clioption _x_x4563 = kk_examples_basic__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, kkloc_default, _ctx); /*examples/basic/clioption*/
  _x_x4562 = kk_examples_basic__clioption_box(_x_x4563, _ctx); /*10021*/
  _x_x4561 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4562, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10527 = kk_std_core_list_append(_x_x4559, _x_x4561, _ctx); /*list<examples/basic/clioption>*/
  kk_string_t _x_x4564;
  {
    struct kk_examples_basic_Clispec* _con_x4565 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4565->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4564 = _x; /*string*/
  }
  kk_string_t _x_x4566;
  {
    struct kk_examples_basic_Clispec* _con_x4567 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4567->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4566 = _x_0; /*string*/
  }
  kk_string_t _x_x4568;
  {
    struct kk_examples_basic_Clispec* _con_x4569 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4569->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4568 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4570;
  {
    struct kk_examples_basic_Clispec* _con_x4571 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4571->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4570 = _x_2; /*list<examples/basic/cliflag>*/
  }
  kk_std_core_types__list _x_x4572;
  {
    struct kk_examples_basic_Clispec* _con_x4573 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4573->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4572 = _x_3; /*list<examples/basic/cliarg>*/
  }
  kk_std_core_types__list _x_x4574;
  {
    struct kk_examples_basic_Clispec* _con_x4575 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4575->app__name;
    kk_string_t _pat_1_4 = _con_x4575->app__version;
    kk_string_t _pat_2_4 = _con_x4575->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4575->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4575->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4575->app__args;
    kk_std_core_types__list _x_4 = _con_x4575->app__commands;
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
    _x_x4574 = _x_4; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x4564, _x_x4566, _x_x4568, _x_x4570, options_10527, _x_x4572, _x_x4574, _ctx);
}

kk_examples_basic__clispec kk_examples_basic_hc__arg(kk_examples_basic__clispec spec, kk_string_t name, kk_string_t help__text, bool required, kk_context_t* _ctx) { /* (spec : clispec, name : string, help_text : string, required : bool) -> clispec */ 
  kk_std_core_types__list args_10538;
  kk_std_core_types__list _x_x4576;
  {
    struct kk_examples_basic_Clispec* _con_x4577 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4577->app__args;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4576 = _x_5; /*list<examples/basic/cliarg>*/
  }
  kk_std_core_types__list _x_x4578;
  kk_box_t _x_x4579;
  kk_examples_basic__cliarg _x_x4580 = kk_examples_basic__new_Cliarg(kk_reuse_null, 0, name, help__text, required, _ctx); /*examples/basic/cliarg*/
  _x_x4579 = kk_examples_basic__cliarg_box(_x_x4580, _ctx); /*10021*/
  _x_x4578 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4579, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  args_10538 = kk_std_core_list_append(_x_x4576, _x_x4578, _ctx); /*list<examples/basic/cliarg>*/
  kk_string_t _x_x4581;
  {
    struct kk_examples_basic_Clispec* _con_x4582 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4582->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4581 = _x; /*string*/
  }
  kk_string_t _x_x4583;
  {
    struct kk_examples_basic_Clispec* _con_x4584 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4584->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4583 = _x_0; /*string*/
  }
  kk_string_t _x_x4585;
  {
    struct kk_examples_basic_Clispec* _con_x4586 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4586->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4585 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4587;
  {
    struct kk_examples_basic_Clispec* _con_x4588 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4588->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4587 = _x_2; /*list<examples/basic/cliflag>*/
  }
  kk_std_core_types__list _x_x4589;
  {
    struct kk_examples_basic_Clispec* _con_x4590 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4590->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4589 = _x_3; /*list<examples/basic/clioption>*/
  }
  kk_std_core_types__list _x_x4591;
  {
    struct kk_examples_basic_Clispec* _con_x4592 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4592->app__name;
    kk_string_t _pat_1_4 = _con_x4592->app__version;
    kk_string_t _pat_2_4 = _con_x4592->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4592->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4592->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4592->app__args;
    kk_std_core_types__list _x_4 = _con_x4592->app__commands;
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
    _x_x4591 = _x_4; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x4581, _x_x4583, _x_x4585, _x_x4587, _x_x4589, args_10538, _x_x4591, _ctx);
}

kk_examples_basic__clispec kk_examples_basic_hc__command(kk_examples_basic__clispec spec, kk_string_t name, kk_examples_basic__clispec hc__sub_0, kk_context_t* _ctx) { /* (spec : clispec, name : string, hc_sub : clispec) -> clispec */ 
  kk_std_core_types__list commands_10549;
  kk_std_core_types__list _x_x4593;
  {
    struct kk_examples_basic_Clispec* _con_x4594 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4594->app__commands;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4593 = _x_5; /*list<(string, examples/basic/clispec)>*/
  }
  kk_std_core_types__list _x_x4595;
  kk_box_t _x_x4596;
  kk_std_core_types__tuple2 _x_x4597 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_examples_basic__clispec_box(hc__sub_0, _ctx), _ctx); /*(10037, 10038)*/
  _x_x4596 = kk_std_core_types__tuple2_box(_x_x4597, _ctx); /*10021*/
  _x_x4595 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4596, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  commands_10549 = kk_std_core_list_append(_x_x4593, _x_x4595, _ctx); /*list<(string, examples/basic/clispec)>*/
  kk_string_t _x_x4598;
  {
    struct kk_examples_basic_Clispec* _con_x4599 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4599->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4598 = _x; /*string*/
  }
  kk_string_t _x_x4600;
  {
    struct kk_examples_basic_Clispec* _con_x4601 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4601->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4600 = _x_0; /*string*/
  }
  kk_string_t _x_x4602;
  {
    struct kk_examples_basic_Clispec* _con_x4603 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4603->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4602 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4604;
  {
    struct kk_examples_basic_Clispec* _con_x4605 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4605->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4604 = _x_2; /*list<examples/basic/cliflag>*/
  }
  kk_std_core_types__list _x_x4606;
  {
    struct kk_examples_basic_Clispec* _con_x4607 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4607->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4606 = _x_3; /*list<examples/basic/clioption>*/
  }
  kk_std_core_types__list _x_x4608;
  {
    struct kk_examples_basic_Clispec* _con_x4609 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4609->app__name;
    kk_string_t _pat_1_4 = _con_x4609->app__version;
    kk_string_t _pat_2_4 = _con_x4609->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4609->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4609->app__options;
    kk_std_core_types__list _x_4 = _con_x4609->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4609->app__commands;
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
    _x_x4608 = _x_4; /*list<examples/basic/cliarg>*/
  }
  return kk_examples_basic__new_Clispec(kk_reuse_null, 0, _x_x4598, _x_x4600, _x_x4602, _x_x4604, _x_x4606, _x_x4608, commands_10549, _ctx);
}

kk_string_t kk_examples_basic_hc__format__flag__usage(kk_examples_basic__cliflag f, kk_context_t* _ctx) { /* (f : cliflag) -> div string */ 
  bool _match_x2661;
  kk_integer_t _brw_x2664;
  kk_string_t _x_x4610;
  {
    struct kk_examples_basic_Cliflag* _con_x4611 = kk_examples_basic__as_Cliflag(f, _ctx);
    kk_string_t _x = _con_x4611->flag__short;
    kk_string_dup(_x, _ctx);
    _x_x4610 = _x; /*string*/
  }
  _brw_x2664 = kk_std_core_string_chars_fs_count(_x_x4610, _ctx); /*int*/
  bool _brw_x2665 = kk_integer_eq_borrow(_brw_x2664,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2664, _ctx);
  _match_x2661 = _brw_x2665; /*bool*/
  if (_match_x2661) {
    kk_string_t s_0_10561;
    kk_string_t _x_x4612;
    kk_define_string_literal(static, _s_x4613, 6, "    --", _ctx)
    _x_x4612 = kk_string_dup(_s_x4613, _ctx); /*string*/
    kk_string_t _x_x4614;
    {
      struct kk_examples_basic_Cliflag* _con_x4615 = kk_examples_basic__as_Cliflag(f, _ctx);
      kk_string_t _x_0 = _con_x4615->flag__name;
      kk_string_dup(_x_0, _ctx);
      _x_x4614 = _x_0; /*string*/
    }
    s_0_10561 = kk_std_core_types__lp__plus__plus__rp_(_x_x4612, _x_x4614, _ctx); /*string*/
    kk_integer_t y_10568;
    kk_string_t _x_x4616 = kk_string_dup(s_0_10561, _ctx); /*string*/
    y_10568 = kk_std_core_string_chars_fs_count(_x_x4616, _ctx); /*int*/
    kk_integer_t b_10566 = kk_integer_sub((kk_integer_from_small(24)),y_10568,kk_context()); /*int*/;
    kk_string_t _x_x4617;
    kk_string_t _x_x4618;
    kk_string_t _x_x4619;
    kk_define_string_literal(static, _s_x4620, 1, " ", _ctx)
    _x_x4619 = kk_string_dup(_s_x4620, _ctx); /*string*/
    kk_integer_t _x_x4621;
    bool _match_x2663 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10566,kk_context()); /*bool*/;
    if (_match_x2663) {
      kk_integer_drop(b_10566, _ctx);
      _x_x4621 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4621 = b_10566; /*int*/
    }
    _x_x4618 = kk_examples_basic_hc__repeat__str(_x_x4619, _x_x4621, _ctx); /*string*/
    _x_x4617 = kk_std_core_types__lp__plus__plus__rp_(s_0_10561, _x_x4618, _ctx); /*string*/
    kk_string_t _x_x4622;
    {
      struct kk_examples_basic_Cliflag* _con_x4623 = kk_examples_basic__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_2 = _con_x4623->flag__name;
      kk_string_t _pat_1_1 = _con_x4623->flag__short;
      kk_string_t _x_1 = _con_x4623->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_1, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4622 = _x_1; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4617, _x_x4622, _ctx);
  }
  {
    kk_string_t s_1_10570;
    kk_string_t _x_x4624;
    kk_define_string_literal(static, _s_x4625, 3, "  -", _ctx)
    _x_x4624 = kk_string_dup(_s_x4625, _ctx); /*string*/
    kk_string_t _x_x4626;
    kk_string_t _x_x4627;
    {
      struct kk_examples_basic_Cliflag* _con_x4628 = kk_examples_basic__as_Cliflag(f, _ctx);
      kk_string_t _x_2 = _con_x4628->flag__short;
      kk_string_dup(_x_2, _ctx);
      _x_x4627 = _x_2; /*string*/
    }
    kk_string_t _x_x4629;
    kk_string_t _x_x4630;
    kk_define_string_literal(static, _s_x4631, 4, ", --", _ctx)
    _x_x4630 = kk_string_dup(_s_x4631, _ctx); /*string*/
    kk_string_t _x_x4632;
    {
      struct kk_examples_basic_Cliflag* _con_x4633 = kk_examples_basic__as_Cliflag(f, _ctx);
      kk_string_t _x_3 = _con_x4633->flag__name;
      kk_string_dup(_x_3, _ctx);
      _x_x4632 = _x_3; /*string*/
    }
    _x_x4629 = kk_std_core_types__lp__plus__plus__rp_(_x_x4630, _x_x4632, _ctx); /*string*/
    _x_x4626 = kk_std_core_types__lp__plus__plus__rp_(_x_x4627, _x_x4629, _ctx); /*string*/
    s_1_10570 = kk_std_core_types__lp__plus__plus__rp_(_x_x4624, _x_x4626, _ctx); /*string*/
    kk_integer_t y_0_10578;
    kk_string_t _x_x4634 = kk_string_dup(s_1_10570, _ctx); /*string*/
    y_0_10578 = kk_std_core_string_chars_fs_count(_x_x4634, _ctx); /*int*/
    kk_integer_t b_0_10576 = kk_integer_sub((kk_integer_from_small(24)),y_0_10578,kk_context()); /*int*/;
    kk_string_t _x_x4635;
    kk_string_t _x_x4636;
    kk_string_t _x_x4637;
    kk_define_string_literal(static, _s_x4638, 1, " ", _ctx)
    _x_x4637 = kk_string_dup(_s_x4638, _ctx); /*string*/
    kk_integer_t _x_x4639;
    bool _match_x2662 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10576,kk_context()); /*bool*/;
    if (_match_x2662) {
      kk_integer_drop(b_0_10576, _ctx);
      _x_x4639 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4639 = b_0_10576; /*int*/
    }
    _x_x4636 = kk_examples_basic_hc__repeat__str(_x_x4637, _x_x4639, _ctx); /*string*/
    _x_x4635 = kk_std_core_types__lp__plus__plus__rp_(s_1_10570, _x_x4636, _ctx); /*string*/
    kk_string_t _x_x4640;
    {
      struct kk_examples_basic_Cliflag* _con_x4641 = kk_examples_basic__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_7 = _con_x4641->flag__name;
      kk_string_t _pat_1_4 = _con_x4641->flag__short;
      kk_string_t _x_4 = _con_x4641->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_4, _ctx);
        kk_string_drop(_pat_0_7, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_4, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4640 = _x_4; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4635, _x_x4640, _ctx);
  }
}

kk_string_t kk_examples_basic_hc__format__option__usage(kk_examples_basic__clioption o, kk_context_t* _ctx) { /* (o : clioption) -> div string */ 
  kk_string_t suffix;
  bool _match_x2658;
  kk_integer_t _brw_x2659;
  kk_string_t _x_x4642;
  {
    struct kk_examples_basic_Clioption* _con_x4643 = kk_examples_basic__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x4643->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x4642 = _x; /*string*/
  }
  _brw_x2659 = kk_std_core_string_chars_fs_count(_x_x4642, _ctx); /*int*/
  bool _brw_x2660 = kk_integer_eq_borrow(_brw_x2659,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2659, _ctx);
  _match_x2658 = _brw_x2660; /*bool*/
  if (_match_x2658) {
    suffix = kk_string_empty(); /*string*/
  }
  else {
    kk_string_t _x_x4645;
    kk_define_string_literal(static, _s_x4646, 11, " [default: ", _ctx)
    _x_x4645 = kk_string_dup(_s_x4646, _ctx); /*string*/
    kk_string_t _x_x4647;
    kk_string_t _x_x4648;
    {
      struct kk_examples_basic_Clioption* _con_x4649 = kk_examples_basic__as_Clioption(o, _ctx);
      kk_string_t _x_0 = _con_x4649->opt__default;
      kk_string_dup(_x_0, _ctx);
      _x_x4648 = _x_0; /*string*/
    }
    kk_string_t _x_x4650;
    kk_define_string_literal(static, _s_x4651, 1, "]", _ctx)
    _x_x4650 = kk_string_dup(_s_x4651, _ctx); /*string*/
    _x_x4647 = kk_std_core_types__lp__plus__plus__rp_(_x_x4648, _x_x4650, _ctx); /*string*/
    suffix = kk_std_core_types__lp__plus__plus__rp_(_x_x4645, _x_x4647, _ctx); /*string*/
  }
  bool _match_x2653;
  kk_integer_t _brw_x2656;
  kk_string_t _x_x4652;
  {
    struct kk_examples_basic_Clioption* _con_x4653 = kk_examples_basic__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x4653->opt__short;
    kk_string_dup(_x_1, _ctx);
    _x_x4652 = _x_1; /*string*/
  }
  _brw_x2656 = kk_std_core_string_chars_fs_count(_x_x4652, _ctx); /*int*/
  bool _brw_x2657 = kk_integer_eq_borrow(_brw_x2656,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2656, _ctx);
  _match_x2653 = _brw_x2657; /*bool*/
  if (_match_x2653) {
    kk_string_t s_1_10585;
    kk_string_t _x_x4654;
    kk_define_string_literal(static, _s_x4655, 6, "    --", _ctx)
    _x_x4654 = kk_string_dup(_s_x4655, _ctx); /*string*/
    kk_string_t _x_x4656;
    kk_string_t _x_x4657;
    {
      struct kk_examples_basic_Clioption* _con_x4658 = kk_examples_basic__as_Clioption(o, _ctx);
      kk_string_t _x_2 = _con_x4658->opt__name;
      kk_string_dup(_x_2, _ctx);
      _x_x4657 = _x_2; /*string*/
    }
    kk_string_t _x_x4659;
    kk_define_string_literal(static, _s_x4660, 6, " VALUE", _ctx)
    _x_x4659 = kk_string_dup(_s_x4660, _ctx); /*string*/
    _x_x4656 = kk_std_core_types__lp__plus__plus__rp_(_x_x4657, _x_x4659, _ctx); /*string*/
    s_1_10585 = kk_std_core_types__lp__plus__plus__rp_(_x_x4654, _x_x4656, _ctx); /*string*/
    kk_integer_t y_10592;
    kk_string_t _x_x4661 = kk_string_dup(s_1_10585, _ctx); /*string*/
    y_10592 = kk_std_core_string_chars_fs_count(_x_x4661, _ctx); /*int*/
    kk_integer_t b_10590 = kk_integer_sub((kk_integer_from_small(24)),y_10592,kk_context()); /*int*/;
    kk_string_t _x_x4662;
    kk_string_t _x_x4663;
    kk_string_t _x_x4664;
    kk_string_t _x_x4665;
    kk_define_string_literal(static, _s_x4666, 1, " ", _ctx)
    _x_x4665 = kk_string_dup(_s_x4666, _ctx); /*string*/
    kk_integer_t _x_x4667;
    bool _match_x2655 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10590,kk_context()); /*bool*/;
    if (_match_x2655) {
      kk_integer_drop(b_10590, _ctx);
      _x_x4667 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4667 = b_10590; /*int*/
    }
    _x_x4664 = kk_examples_basic_hc__repeat__str(_x_x4665, _x_x4667, _ctx); /*string*/
    _x_x4663 = kk_std_core_types__lp__plus__plus__rp_(s_1_10585, _x_x4664, _ctx); /*string*/
    kk_string_t _x_x4668;
    {
      struct kk_examples_basic_Clioption* _con_x4669 = kk_examples_basic__as_Clioption(o, _ctx);
      kk_string_t _pat_0_5 = _con_x4669->opt__name;
      kk_string_t _pat_1_4 = _con_x4669->opt__short;
      kk_string_t _x_3 = _con_x4669->opt__help;
      kk_string_t _pat_2_3 = _con_x4669->opt__default;
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
      _x_x4668 = _x_3; /*string*/
    }
    _x_x4662 = kk_std_core_types__lp__plus__plus__rp_(_x_x4663, _x_x4668, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4662, suffix, _ctx);
  }
  {
    kk_string_t s_2_10594;
    kk_string_t _x_x4670;
    kk_define_string_literal(static, _s_x4671, 3, "  -", _ctx)
    _x_x4670 = kk_string_dup(_s_x4671, _ctx); /*string*/
    kk_string_t _x_x4672;
    kk_string_t _x_x4673;
    {
      struct kk_examples_basic_Clioption* _con_x4674 = kk_examples_basic__as_Clioption(o, _ctx);
      kk_string_t _x_4 = _con_x4674->opt__short;
      kk_string_dup(_x_4, _ctx);
      _x_x4673 = _x_4; /*string*/
    }
    kk_string_t _x_x4675;
    kk_string_t _x_x4676;
    kk_define_string_literal(static, _s_x4677, 4, ", --", _ctx)
    _x_x4676 = kk_string_dup(_s_x4677, _ctx); /*string*/
    kk_string_t _x_x4678;
    kk_string_t _x_x4679;
    {
      struct kk_examples_basic_Clioption* _con_x4680 = kk_examples_basic__as_Clioption(o, _ctx);
      kk_string_t _x_5 = _con_x4680->opt__name;
      kk_string_dup(_x_5, _ctx);
      _x_x4679 = _x_5; /*string*/
    }
    kk_string_t _x_x4681;
    kk_define_string_literal(static, _s_x4682, 6, " VALUE", _ctx)
    _x_x4681 = kk_string_dup(_s_x4682, _ctx); /*string*/
    _x_x4678 = kk_std_core_types__lp__plus__plus__rp_(_x_x4679, _x_x4681, _ctx); /*string*/
    _x_x4675 = kk_std_core_types__lp__plus__plus__rp_(_x_x4676, _x_x4678, _ctx); /*string*/
    _x_x4672 = kk_std_core_types__lp__plus__plus__rp_(_x_x4673, _x_x4675, _ctx); /*string*/
    s_2_10594 = kk_std_core_types__lp__plus__plus__rp_(_x_x4670, _x_x4672, _ctx); /*string*/
    kk_integer_t y_0_10602;
    kk_string_t _x_x4683 = kk_string_dup(s_2_10594, _ctx); /*string*/
    y_0_10602 = kk_std_core_string_chars_fs_count(_x_x4683, _ctx); /*int*/
    kk_integer_t b_0_10600 = kk_integer_sub((kk_integer_from_small(24)),y_0_10602,kk_context()); /*int*/;
    kk_string_t _x_x4684;
    kk_string_t _x_x4685;
    kk_string_t _x_x4686;
    kk_string_t _x_x4687;
    kk_define_string_literal(static, _s_x4688, 1, " ", _ctx)
    _x_x4687 = kk_string_dup(_s_x4688, _ctx); /*string*/
    kk_integer_t _x_x4689;
    bool _match_x2654 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10600,kk_context()); /*bool*/;
    if (_match_x2654) {
      kk_integer_drop(b_0_10600, _ctx);
      _x_x4689 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4689 = b_0_10600; /*int*/
    }
    _x_x4686 = kk_examples_basic_hc__repeat__str(_x_x4687, _x_x4689, _ctx); /*string*/
    _x_x4685 = kk_std_core_types__lp__plus__plus__rp_(s_2_10594, _x_x4686, _ctx); /*string*/
    kk_string_t _x_x4690;
    {
      struct kk_examples_basic_Clioption* _con_x4691 = kk_examples_basic__as_Clioption(o, _ctx);
      kk_string_t _pat_0_9 = _con_x4691->opt__name;
      kk_string_t _pat_1_7 = _con_x4691->opt__short;
      kk_string_t _x_6 = _con_x4691->opt__help;
      kk_string_t _pat_2_7 = _con_x4691->opt__default;
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
      _x_x4690 = _x_6; /*string*/
    }
    _x_x4684 = kk_std_core_types__lp__plus__plus__rp_(_x_x4685, _x_x4690, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4684, suffix, _ctx);
  }
}

kk_string_t kk_examples_basic_hc__format__arg__usage(kk_examples_basic__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> div string */ 
  kk_string_t s_10604;
  kk_string_t _x_x4692;
  kk_define_string_literal(static, _s_x4693, 3, "  <", _ctx)
  _x_x4692 = kk_string_dup(_s_x4693, _ctx); /*string*/
  kk_string_t _x_x4694;
  kk_string_t _x_x4695;
  {
    struct kk_examples_basic_Cliarg* _con_x4696 = kk_examples_basic__as_Cliarg(a, _ctx);
    kk_string_t _x_0 = _con_x4696->arg__name;
    kk_string_dup(_x_0, _ctx);
    _x_x4695 = _x_0; /*string*/
  }
  kk_string_t _x_x4697;
  kk_define_string_literal(static, _s_x4698, 1, ">", _ctx)
  _x_x4697 = kk_string_dup(_s_x4698, _ctx); /*string*/
  _x_x4694 = kk_std_core_types__lp__plus__plus__rp_(_x_x4695, _x_x4697, _ctx); /*string*/
  s_10604 = kk_std_core_types__lp__plus__plus__rp_(_x_x4692, _x_x4694, _ctx); /*string*/
  kk_integer_t y_10611;
  kk_string_t _x_x4699 = kk_string_dup(s_10604, _ctx); /*string*/
  y_10611 = kk_std_core_string_chars_fs_count(_x_x4699, _ctx); /*int*/
  kk_integer_t b_10609 = kk_integer_sub((kk_integer_from_small(24)),y_10611,kk_context()); /*int*/;
  kk_string_t _x_x4700;
  kk_string_t _x_x4701;
  kk_string_t _x_x4702;
  kk_string_t _x_x4703;
  kk_define_string_literal(static, _s_x4704, 1, " ", _ctx)
  _x_x4703 = kk_string_dup(_s_x4704, _ctx); /*string*/
  kk_integer_t _x_x4705;
  bool _match_x2652 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10609,kk_context()); /*bool*/;
  if (_match_x2652) {
    kk_integer_drop(b_10609, _ctx);
    _x_x4705 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4705 = b_10609; /*int*/
  }
  _x_x4702 = kk_examples_basic_hc__repeat__str(_x_x4703, _x_x4705, _ctx); /*string*/
  _x_x4701 = kk_std_core_types__lp__plus__plus__rp_(s_10604, _x_x4702, _ctx); /*string*/
  kk_string_t _x_x4706;
  {
    struct kk_examples_basic_Cliarg* _con_x4707 = kk_examples_basic__as_Cliarg(a, _ctx);
    kk_string_t _x_1 = _con_x4707->arg__help;
    kk_string_dup(_x_1, _ctx);
    _x_x4706 = _x_1; /*string*/
  }
  _x_x4700 = kk_std_core_types__lp__plus__plus__rp_(_x_x4701, _x_x4706, _ctx); /*string*/
  kk_string_t _x_x4708;
  {
    struct kk_examples_basic_Cliarg* _con_x4709 = kk_examples_basic__as_Cliarg(a, _ctx);
    kk_string_t _pat_0 = _con_x4709->arg__name;
    kk_string_t _pat_1 = _con_x4709->arg__help;
    bool _x = _con_x4709->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_datatype_ptr_decref(a, _ctx);
    }
    if (_x) {
      kk_define_string_literal(static, _s_x4710, 11, " (required)", _ctx)
      _x_x4708 = kk_string_dup(_s_x4710, _ctx); /*string*/
    }
    else {
      _x_x4708 = kk_string_empty(); /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4700, _x_x4708, _ctx);
}

kk_string_t kk_examples_basic_hc__format__arg__label(kk_examples_basic__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> string */ 
  {
    struct kk_examples_basic_Cliarg* _con_x4712 = kk_examples_basic__as_Cliarg(a, _ctx);
    bool _x = _con_x4712->arg__required;
    if (_x) {
      kk_string_t _x_x4713;
      kk_define_string_literal(static, _s_x4714, 2, " <", _ctx)
      _x_x4713 = kk_string_dup(_s_x4714, _ctx); /*string*/
      kk_string_t _x_x4715;
      kk_string_t _x_x4716;
      {
        struct kk_examples_basic_Cliarg* _con_x4717 = kk_examples_basic__as_Cliarg(a, _ctx);
        kk_string_t _x_0 = _con_x4717->arg__name;
        kk_string_t _pat_0_0 = _con_x4717->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_0, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4716 = _x_0; /*string*/
      }
      kk_string_t _x_x4718;
      kk_define_string_literal(static, _s_x4719, 1, ">", _ctx)
      _x_x4718 = kk_string_dup(_s_x4719, _ctx); /*string*/
      _x_x4715 = kk_std_core_types__lp__plus__plus__rp_(_x_x4716, _x_x4718, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4713, _x_x4715, _ctx);
    }
    {
      kk_string_t _x_x4720;
      kk_define_string_literal(static, _s_x4721, 2, " [", _ctx)
      _x_x4720 = kk_string_dup(_s_x4721, _ctx); /*string*/
      kk_string_t _x_x4722;
      kk_string_t _x_x4723;
      {
        struct kk_examples_basic_Cliarg* _con_x4724 = kk_examples_basic__as_Cliarg(a, _ctx);
        kk_string_t _x_1 = _con_x4724->arg__name;
        kk_string_t _pat_0_2 = _con_x4724->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_1, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4723 = _x_1; /*string*/
      }
      kk_string_t _x_x4725;
      kk_define_string_literal(static, _s_x4726, 1, "]", _ctx)
      _x_x4725 = kk_string_dup(_s_x4726, _ctx); /*string*/
      _x_x4722 = kk_std_core_types__lp__plus__plus__rp_(_x_x4723, _x_x4725, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4720, _x_x4722, _ctx);
    }
  }
}

kk_string_t kk_examples_basic_hc__format__cmd__usage(kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (pair : (string, clispec)) -> div string */ 
  kk_string_t s_10617;
  kk_string_t _x_x4727;
  kk_define_string_literal(static, _s_x4728, 2, "  ", _ctx)
  _x_x4727 = kk_string_dup(_s_x4728, _ctx); /*string*/
  kk_string_t _x_x4729;
  {
    kk_box_t _box_x482 = pair.fst;
    kk_box_t _box_x483 = pair.snd;
    kk_string_t _x = kk_string_unbox(_box_x482);
    kk_string_dup(_x, _ctx);
    _x_x4729 = _x; /*string*/
  }
  s_10617 = kk_std_core_types__lp__plus__plus__rp_(_x_x4727, _x_x4729, _ctx); /*string*/
  kk_integer_t y_10624;
  kk_string_t _x_x4730 = kk_string_dup(s_10617, _ctx); /*string*/
  y_10624 = kk_std_core_string_chars_fs_count(_x_x4730, _ctx); /*int*/
  kk_integer_t b_10622 = kk_integer_sub((kk_integer_from_small(24)),y_10624,kk_context()); /*int*/;
  kk_string_t _x_x4731;
  kk_string_t _x_x4732;
  kk_string_t _x_x4733;
  kk_define_string_literal(static, _s_x4734, 1, " ", _ctx)
  _x_x4733 = kk_string_dup(_s_x4734, _ctx); /*string*/
  kk_integer_t _x_x4735;
  bool _match_x2651 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10622,kk_context()); /*bool*/;
  if (_match_x2651) {
    kk_integer_drop(b_10622, _ctx);
    _x_x4735 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4735 = b_10622; /*int*/
  }
  _x_x4732 = kk_examples_basic_hc__repeat__str(_x_x4733, _x_x4735, _ctx); /*string*/
  _x_x4731 = kk_std_core_types__lp__plus__plus__rp_(s_10617, _x_x4732, _ctx); /*string*/
  kk_string_t _x_x4736;
  {
    kk_box_t _box_x484 = pair.fst;
    kk_box_t _box_x485 = pair.snd;
    kk_examples_basic__clispec _x_1 = kk_examples_basic__clispec_unbox(_box_x485, KK_BORROWED, _ctx);
    kk_examples_basic__clispec_dup(_x_1, _ctx);
    kk_std_core_types__tuple2_drop(pair, _ctx);
    {
      struct kk_examples_basic_Clispec* _con_x4737 = kk_examples_basic__as_Clispec(_x_1, _ctx);
      kk_string_t _pat_0_1 = _con_x4737->app__name;
      kk_string_t _pat_1_0 = _con_x4737->app__version;
      kk_string_t _x_0 = _con_x4737->app__about;
      kk_std_core_types__list _pat_2_0 = _con_x4737->app__flags;
      kk_std_core_types__list _pat_3 = _con_x4737->app__options;
      kk_std_core_types__list _pat_4 = _con_x4737->app__args;
      kk_std_core_types__list _pat_5 = _con_x4737->app__commands;
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
      _x_x4736 = _x_0; /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4731, _x_x4736, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__help_fun4751__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__help_fun4751(kk_function_t _fself, kk_box_t _b_x488, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__help_fun4751(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__help_fun4751, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__help_fun4751(kk_function_t _fself, kk_box_t _b_x488, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4752;
  kk_examples_basic__cliarg _x_x4753 = kk_examples_basic__cliarg_unbox(_b_x488, KK_OWNED, _ctx); /*examples/basic/cliarg*/
  _x_x4752 = kk_examples_basic_hc__format__arg__label(_x_x4753, _ctx); /*string*/
  return kk_string_box(_x_x4752);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__help_fun4771__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__help_fun4771(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__help_fun4771(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__help_fun4771, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__help_fun4771(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4772;
  kk_examples_basic__cliflag _x_x4773 = kk_examples_basic__cliflag_unbox(_b_x493, KK_OWNED, _ctx); /*examples/basic/cliflag*/
  _x_x4772 = kk_examples_basic_hc__format__flag__usage(_x_x4773, _ctx); /*string*/
  return kk_string_box(_x_x4772);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__help_fun4776__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__help_fun4776(kk_function_t _fself, kk_box_t _b_x498, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__help_fun4776(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__help_fun4776, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__help_fun4776(kk_function_t _fself, kk_box_t _b_x498, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4777;
  kk_examples_basic__clioption _x_x4778 = kk_examples_basic__clioption_unbox(_b_x498, KK_OWNED, _ctx); /*examples/basic/clioption*/
  _x_x4777 = kk_examples_basic_hc__format__option__usage(_x_x4778, _ctx); /*string*/
  return kk_string_box(_x_x4777);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__help_fun4817__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__help_fun4817(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__help_fun4817(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__help_fun4817, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__help_fun4817(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4818;
  kk_examples_basic__cliarg _x_x4819 = kk_examples_basic__cliarg_unbox(_b_x513, KK_OWNED, _ctx); /*examples/basic/cliarg*/
  _x_x4818 = kk_examples_basic_hc__format__arg__usage(_x_x4819, _ctx); /*string*/
  return kk_string_box(_x_x4818);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__help_fun4833__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__help_fun4833(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__help_fun4833(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__help_fun4833, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__help_fun4833(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4834;
  kk_std_core_types__tuple2 _x_x4835 = kk_std_core_types__tuple2_unbox(_b_x526, KK_OWNED, _ctx); /*(string, examples/basic/clispec)*/
  _x_x4834 = kk_examples_basic_hc__format__cmd__usage(_x_x4835, _ctx); /*string*/
  return kk_string_box(_x_x4834);
}

kk_string_t kk_examples_basic_hc__cli__help(kk_examples_basic__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> div string */ 
  kk_string_t header;
  kk_string_t _x_x4738;
  {
    struct kk_examples_basic_Clispec* _con_x4739 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4739->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4738 = _x; /*string*/
  }
  kk_string_t _x_x4740;
  kk_string_t _x_x4741;
  kk_define_string_literal(static, _s_x4742, 1, " ", _ctx)
  _x_x4741 = kk_string_dup(_s_x4742, _ctx); /*string*/
  kk_string_t _x_x4743;
  kk_string_t _x_x4744;
  {
    struct kk_examples_basic_Clispec* _con_x4745 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4745->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4744 = _x_0; /*string*/
  }
  kk_string_t _x_x4746;
  kk_string_t _x_x4747;
  kk_define_string_literal(static, _s_x4748, 5, " " "\xE2\x80\x94" " ", _ctx)
  _x_x4747 = kk_string_dup(_s_x4748, _ctx); /*string*/
  kk_string_t _x_x4749;
  {
    struct kk_examples_basic_Clispec* _con_x4750 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4750->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4749 = _x_1; /*string*/
  }
  _x_x4746 = kk_std_core_types__lp__plus__plus__rp_(_x_x4747, _x_x4749, _ctx); /*string*/
  _x_x4743 = kk_std_core_types__lp__plus__plus__rp_(_x_x4744, _x_x4746, _ctx); /*string*/
  _x_x4740 = kk_std_core_types__lp__plus__plus__rp_(_x_x4741, _x_x4743, _ctx); /*string*/
  header = kk_std_core_types__lp__plus__plus__rp_(_x_x4738, _x_x4740, _ctx); /*string*/
  kk_std_core_types__list arg__labels;
  kk_function_t _brw_x2649 = kk_examples_basic_new_hc__cli__help_fun4751(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2650;
  kk_std_core_types__list _x_x4754;
  {
    struct kk_examples_basic_Clispec* _con_x4755 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4755->app__args;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4754 = _x_2; /*list<examples/basic/cliarg>*/
  }
  _brw_x2650 = kk_std_core_list_map(_x_x4754, _brw_x2649, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2649, _ctx);
  arg__labels = _brw_x2650; /*list<string>*/
  kk_string_t args__str;
  kk_string_t _x_x4756 = kk_string_empty(); /*string*/
  args__str = kk_std_core_list_joinsep(arg__labels, _x_x4756, _ctx); /*string*/
  kk_string_t cmds__str;
  bool _match_x2646;
  kk_integer_t _brw_x2647;
  kk_std_core_types__list _x_x4758;
  {
    struct kk_examples_basic_Clispec* _con_x4759 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4759->app__commands;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4758 = _x_3; /*list<(string, examples/basic/clispec)>*/
  }
  _brw_x2647 = kk_std_core_list__lift_length_6003(_x_x4758, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2648 = kk_integer_gt_borrow(_brw_x2647,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2647, _ctx);
  _match_x2646 = _brw_x2648; /*bool*/
  if (_match_x2646) {
    kk_define_string_literal(static, _s_x4760, 10, " <COMMAND>", _ctx)
    cmds__str = kk_string_dup(_s_x4760, _ctx); /*string*/
  }
  else {
    cmds__str = kk_string_empty(); /*string*/
  }
  kk_string_t usage__line;
  kk_string_t _x_x4762;
  kk_define_string_literal(static, _s_x4763, 7, "USAGE: ", _ctx)
  _x_x4762 = kk_string_dup(_s_x4763, _ctx); /*string*/
  kk_string_t _x_x4764;
  kk_string_t _x_x4765;
  {
    struct kk_examples_basic_Clispec* _con_x4766 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x_4 = _con_x4766->app__name;
    kk_string_dup(_x_4, _ctx);
    _x_x4765 = _x_4; /*string*/
  }
  kk_string_t _x_x4767;
  kk_string_t _x_x4768;
  kk_define_string_literal(static, _s_x4769, 10, " [OPTIONS]", _ctx)
  _x_x4768 = kk_string_dup(_s_x4769, _ctx); /*string*/
  kk_string_t _x_x4770 = kk_std_core_types__lp__plus__plus__rp_(args__str, cmds__str, _ctx); /*string*/
  _x_x4767 = kk_std_core_types__lp__plus__plus__rp_(_x_x4768, _x_x4770, _ctx); /*string*/
  _x_x4764 = kk_std_core_types__lp__plus__plus__rp_(_x_x4765, _x_x4767, _ctx); /*string*/
  usage__line = kk_std_core_types__lp__plus__plus__rp_(_x_x4762, _x_x4764, _ctx); /*string*/
  kk_std_core_types__list flag__lines;
  kk_function_t _brw_x2644 = kk_examples_basic_new_hc__cli__help_fun4771(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2645;
  kk_std_core_types__list _x_x4774;
  {
    struct kk_examples_basic_Clispec* _con_x4775 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4775->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4774 = _x_5; /*list<examples/basic/cliflag>*/
  }
  _brw_x2645 = kk_std_core_list_map(_x_x4774, _brw_x2644, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2644, _ctx);
  flag__lines = _brw_x2645; /*list<string>*/
  kk_std_core_types__list opt__lines;
  kk_function_t _brw_x2642 = kk_examples_basic_new_hc__cli__help_fun4776(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2643;
  kk_std_core_types__list _x_x4779;
  {
    struct kk_examples_basic_Clispec* _con_x4780 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_6 = _con_x4780->app__options;
    kk_std_core_types__list_dup(_x_6, _ctx);
    _x_x4779 = _x_6; /*list<examples/basic/clioption>*/
  }
  _brw_x2643 = kk_std_core_list_map(_x_x4779, _brw_x2642, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2642, _ctx);
  opt__lines = _brw_x2643; /*list<string>*/
  kk_integer_t y_10645;
  kk_string_t _x_x4781;
  kk_define_string_literal(static, _s_x4782, 12, "  -h, --help", _ctx)
  _x_x4781 = kk_string_dup(_s_x4782, _ctx); /*string*/
  y_10645 = kk_std_core_string_chars_fs_count(_x_x4781, _ctx); /*int*/
  kk_integer_t b_10643 = kk_integer_sub((kk_integer_from_small(24)),y_10645,kk_context()); /*int*/;
  kk_integer_t y_0_10652;
  kk_string_t _x_x4783;
  kk_define_string_literal(static, _s_x4784, 15, "      --version", _ctx)
  _x_x4783 = kk_string_dup(_s_x4784, _ctx); /*string*/
  y_0_10652 = kk_std_core_string_chars_fs_count(_x_x4783, _ctx); /*int*/
  kk_integer_t b_0_10650 = kk_integer_sub((kk_integer_from_small(24)),y_0_10652,kk_context()); /*int*/;
  kk_string_t _b_x503_505;
  kk_string_t _x_x4785;
  kk_string_t _x_x4786;
  kk_define_string_literal(static, _s_x4787, 12, "  -h, --help", _ctx)
  _x_x4786 = kk_string_dup(_s_x4787, _ctx); /*string*/
  kk_string_t _x_x4788;
  kk_string_t _x_x4789;
  kk_define_string_literal(static, _s_x4790, 1, " ", _ctx)
  _x_x4789 = kk_string_dup(_s_x4790, _ctx); /*string*/
  kk_integer_t _x_x4791;
  bool _match_x2641 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10643,kk_context()); /*bool*/;
  if (_match_x2641) {
    kk_integer_drop(b_10643, _ctx);
    _x_x4791 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4791 = b_10643; /*int*/
  }
  _x_x4788 = kk_examples_basic_hc__repeat__str(_x_x4789, _x_x4791, _ctx); /*string*/
  _x_x4785 = kk_std_core_types__lp__plus__plus__rp_(_x_x4786, _x_x4788, _ctx); /*string*/
  kk_string_t _x_x4792;
  kk_define_string_literal(static, _s_x4793, 14, "Show this help", _ctx)
  _x_x4792 = kk_string_dup(_s_x4793, _ctx); /*string*/
  _b_x503_505 = kk_std_core_types__lp__plus__plus__rp_(_x_x4785, _x_x4792, _ctx); /*string*/
  kk_string_t _b_x501_507;
  kk_string_t _x_x4794;
  kk_string_t _x_x4795;
  kk_define_string_literal(static, _s_x4796, 15, "      --version", _ctx)
  _x_x4795 = kk_string_dup(_s_x4796, _ctx); /*string*/
  kk_string_t _x_x4797;
  kk_string_t _x_x4798;
  kk_define_string_literal(static, _s_x4799, 1, " ", _ctx)
  _x_x4798 = kk_string_dup(_s_x4799, _ctx); /*string*/
  kk_integer_t _x_x4800;
  bool _match_x2640 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10650,kk_context()); /*bool*/;
  if (_match_x2640) {
    kk_integer_drop(b_0_10650, _ctx);
    _x_x4800 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4800 = b_0_10650; /*int*/
  }
  _x_x4797 = kk_examples_basic_hc__repeat__str(_x_x4798, _x_x4800, _ctx); /*string*/
  _x_x4794 = kk_std_core_types__lp__plus__plus__rp_(_x_x4795, _x_x4797, _ctx); /*string*/
  kk_string_t _x_x4801;
  kk_define_string_literal(static, _s_x4802, 12, "Show version", _ctx)
  _x_x4801 = kk_string_dup(_s_x4802, _ctx); /*string*/
  _b_x501_507 = kk_std_core_types__lp__plus__plus__rp_(_x_x4794, _x_x4801, _ctx); /*string*/
  kk_std_core_types__list xs_1_10653 = kk_std_core_list_append(flag__lines, opt__lines, _ctx); /*list<string>*/;
  kk_std_core_types__list all__opts;
  kk_std_core_types__list _x_x4803;
  kk_std_core_types__list _x_x4804 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x501_507), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _x_x4803 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x503_505), _x_x4804, _ctx); /*list<10021>*/
  all__opts = kk_std_core_list_append(xs_1_10653, _x_x4803, _ctx); /*list<string>*/
  kk_string_t init_11206;
  kk_string_t _x_x4805;
  kk_string_t _x_x4806;
  kk_define_string_literal(static, _s_x4807, 2, "\n\n", _ctx)
  _x_x4806 = kk_string_dup(_s_x4807, _ctx); /*string*/
  kk_string_t _x_x4808;
  kk_string_t _x_x4809;
  kk_string_t _x_x4810;
  kk_define_string_literal(static, _s_x4811, 11, "\n\nOPTIONS:\n", _ctx)
  _x_x4810 = kk_string_dup(_s_x4811, _ctx); /*string*/
  kk_string_t _x_x4812;
  kk_string_t _x_x4813;
  kk_define_string_literal(static, _s_x4814, 1, "\n", _ctx)
  _x_x4813 = kk_string_dup(_s_x4814, _ctx); /*string*/
  _x_x4812 = kk_std_core_list_joinsep(all__opts, _x_x4813, _ctx); /*string*/
  _x_x4809 = kk_std_core_types__lp__plus__plus__rp_(_x_x4810, _x_x4812, _ctx); /*string*/
  _x_x4808 = kk_std_core_types__lp__plus__plus__rp_(usage__line, _x_x4809, _ctx); /*string*/
  _x_x4805 = kk_std_core_types__lp__plus__plus__rp_(_x_x4806, _x_x4808, _ctx); /*string*/
  init_11206 = kk_std_core_types__lp__plus__plus__rp_(header, _x_x4805, _ctx); /*string*/
  kk_ref_t loc = kk_ref_alloc((kk_string_box(init_11206)),kk_context()); /*local-var<19156,string>*/;
  kk_unit_t __ = kk_Unit;
  bool _match_x2635;
  kk_integer_t _brw_x2638;
  kk_std_core_types__list _x_x4815;
  {
    struct kk_examples_basic_Clispec* _con_x4816 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_7 = _con_x4816->app__args;
    kk_std_core_types__list_dup(_x_7, _ctx);
    _x_x4815 = _x_7; /*list<examples/basic/cliarg>*/
  }
  _brw_x2638 = kk_std_core_list__lift_length_6003(_x_x4815, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2639 = kk_integer_gt_borrow(_brw_x2638,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2638, _ctx);
  _match_x2635 = _brw_x2639; /*bool*/
  if (_match_x2635) {
    kk_std_core_types__list arg__lines;
    kk_function_t _brw_x2636 = kk_examples_basic_new_hc__cli__help_fun4817(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2637;
    kk_std_core_types__list _x_x4820;
    {
      struct kk_examples_basic_Clispec* _con_x4821 = kk_examples_basic__as_Clispec(spec, _ctx);
      kk_std_core_types__list _x_8 = _con_x4821->app__args;
      kk_std_core_types__list_dup(_x_8, _ctx);
      _x_x4820 = _x_8; /*list<examples/basic/cliarg>*/
    }
    _brw_x2637 = kk_std_core_list_map(_x_x4820, _brw_x2636, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2636, _ctx);
    arg__lines = _brw_x2637; /*list<string>*/
    kk_string_t _b_x519_521;
    kk_string_t _x_x4822;
    kk_box_t _x_x4823;
    kk_ref_t _x_x4824 = kk_ref_dup(loc, _ctx); /*local-var<19156,string>*/
    _x_x4823 = kk_ref_get(_x_x4824,kk_context()); /*10000*/
    _x_x4822 = kk_string_unbox(_x_x4823); /*string*/
    kk_string_t _x_x4825;
    kk_string_t _x_x4826;
    kk_define_string_literal(static, _s_x4827, 8, "\n\nARGS:\n", _ctx)
    _x_x4826 = kk_string_dup(_s_x4827, _ctx); /*string*/
    kk_string_t _x_x4828;
    kk_string_t _x_x4829;
    kk_define_string_literal(static, _s_x4830, 1, "\n", _ctx)
    _x_x4829 = kk_string_dup(_s_x4830, _ctx); /*string*/
    _x_x4828 = kk_std_core_list_joinsep(arg__lines, _x_x4829, _ctx); /*string*/
    _x_x4825 = kk_std_core_types__lp__plus__plus__rp_(_x_x4826, _x_x4828, _ctx); /*string*/
    _b_x519_521 = kk_std_core_types__lp__plus__plus__rp_(_x_x4822, _x_x4825, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x519_521)),kk_context());
  }
  else {
    
  }
  kk_unit_t ___0 = kk_Unit;
  bool _match_x2630;
  kk_integer_t _brw_x2633;
  kk_std_core_types__list _x_x4831;
  {
    struct kk_examples_basic_Clispec* _con_x4832 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_9 = _con_x4832->app__commands;
    kk_std_core_types__list_dup(_x_9, _ctx);
    _x_x4831 = _x_9; /*list<(string, examples/basic/clispec)>*/
  }
  _brw_x2633 = kk_std_core_list__lift_length_6003(_x_x4831, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2634 = kk_integer_gt_borrow(_brw_x2633,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2633, _ctx);
  _match_x2630 = _brw_x2634; /*bool*/
  if (_match_x2630) {
    kk_std_core_types__list cmd__lines;
    kk_function_t _brw_x2631 = kk_examples_basic_new_hc__cli__help_fun4833(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2632;
    kk_std_core_types__list _x_x4836;
    {
      struct kk_examples_basic_Clispec* _con_x4837 = kk_examples_basic__as_Clispec(spec, _ctx);
      kk_string_t _pat_0_13 = _con_x4837->app__name;
      kk_string_t _pat_1_11 = _con_x4837->app__version;
      kk_string_t _pat_2_11 = _con_x4837->app__about;
      kk_std_core_types__list _pat_3_11 = _con_x4837->app__flags;
      kk_std_core_types__list _pat_4_10 = _con_x4837->app__options;
      kk_std_core_types__list _pat_5_10 = _con_x4837->app__args;
      kk_std_core_types__list _x_10 = _con_x4837->app__commands;
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
      _x_x4836 = _x_10; /*list<(string, examples/basic/clispec)>*/
    }
    _brw_x2632 = kk_std_core_list_map(_x_x4836, _brw_x2631, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2631, _ctx);
    cmd__lines = _brw_x2632; /*list<string>*/
    kk_string_t _b_x532_534;
    kk_string_t _x_x4838;
    kk_box_t _x_x4839;
    kk_ref_t _x_x4840 = kk_ref_dup(loc, _ctx); /*local-var<19156,string>*/
    _x_x4839 = kk_ref_get(_x_x4840,kk_context()); /*10000*/
    _x_x4838 = kk_string_unbox(_x_x4839); /*string*/
    kk_string_t _x_x4841;
    kk_string_t _x_x4842;
    kk_define_string_literal(static, _s_x4843, 12, "\n\nCOMMANDS:\n", _ctx)
    _x_x4842 = kk_string_dup(_s_x4843, _ctx); /*string*/
    kk_string_t _x_x4844;
    kk_string_t _x_x4845;
    kk_define_string_literal(static, _s_x4846, 1, "\n", _ctx)
    _x_x4845 = kk_string_dup(_s_x4846, _ctx); /*string*/
    _x_x4844 = kk_std_core_list_joinsep(cmd__lines, _x_x4845, _ctx); /*string*/
    _x_x4841 = kk_std_core_types__lp__plus__plus__rp_(_x_x4842, _x_x4844, _ctx); /*string*/
    _b_x532_534 = kk_std_core_types__lp__plus__plus__rp_(_x_x4838, _x_x4841, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x532_534)),kk_context());
  }
  else {
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
  }
  kk_string_t res;
  kk_box_t _x_x4847;
  kk_ref_t _x_x4848 = kk_ref_dup(loc, _ctx); /*local-var<19156,string>*/
  _x_x4847 = kk_ref_get(_x_x4848,kk_context()); /*10000*/
  res = kk_string_unbox(_x_x4847); /*string*/
  kk_box_t _x_x4849 = kk_std_core_hnd_prompt_local_var(loc, kk_string_box(res), _ctx); /*10001*/
  return kk_string_unbox(_x_x4849);
}

kk_string_t kk_examples_basic_hc__cli__version__str(kk_examples_basic__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> string */ 
  kk_string_t _x_x4850;
  {
    struct kk_examples_basic_Clispec* _con_x4851 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4851->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4850 = _x; /*string*/
  }
  kk_string_t _x_x4852;
  kk_string_t _x_x4853;
  kk_define_string_literal(static, _s_x4854, 1, " ", _ctx)
  _x_x4853 = kk_string_dup(_s_x4854, _ctx); /*string*/
  kk_string_t _x_x4855;
  {
    struct kk_examples_basic_Clispec* _con_x4856 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_0 = _con_x4856->app__name;
    kk_string_t _x_0 = _con_x4856->app__version;
    kk_string_t _pat_1_0 = _con_x4856->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x4856->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x4856->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x4856->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x4856->app__commands;
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
    _x_x4855 = _x_0; /*string*/
  }
  _x_x4852 = kk_std_core_types__lp__plus__plus__rp_(_x_x4853, _x_x4855, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4850, _x_x4852, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__has__flag_fun4861__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_examples_basic_hc__has__flag_fun4861(kk_function_t _fself, kk_box_t _b_x547, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__has__flag_fun4861(kk_string_t name, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__has__flag_fun4861__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__has__flag_fun4861__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__has__flag_fun4861, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__has__flag_fun4861(kk_function_t _fself, kk_box_t _b_x547, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__has__flag_fun4861__t* _self = kk_function_as(struct kk_examples_basic_hc__has__flag_fun4861__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4862 = kk_string_unbox(_b_x547); /*string*/
  return kk_string_is_eq(_x_x4862,name,kk_context());
}

bool kk_examples_basic_hc__has__flag(kk_examples_basic__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> bool */ 
  kk_std_core_types__list _x_x4859;
  {
    struct kk_examples_basic_Cliresult* _con_x4860 = kk_examples_basic__as_Cliresult(r, _ctx);
    kk_std_core_types__list _x = _con_x4860->cli__flags;
    kk_std_core_types__list _pat_0 = _con_x4860->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4860->cli__positionals;
    kk_string_t _pat_2 = _con_x4860->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4860->cli__sub;
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
    _x_x4859 = _x; /*list<string>*/
  }
  return kk_std_core_list_any(_x_x4859, kk_examples_basic_new_hc__has__flag_fun4861(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__get__opt_fun4865__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_examples_basic_hc__get__opt_fun4865(kk_function_t _fself, kk_box_t _b_x555, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__get__opt_fun4865(kk_string_t name, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__get__opt_fun4865__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__get__opt_fun4865__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__get__opt_fun4865, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__get__opt_fun4865(kk_function_t _fself, kk_box_t _b_x555, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__get__opt_fun4865__t* _self = kk_function_as(struct kk_examples_basic_hc__get__opt_fun4865__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_563 = kk_std_core_types__tuple2_unbox(_b_x555, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4866;
  {
    kk_box_t _box_x551 = pair_563.fst;
    kk_box_t _box_x552 = pair_563.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x551);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_563, _ctx);
    _x_x4866 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4866,name,kk_context());
}

kk_std_core_types__maybe kk_examples_basic_hc__get__opt(kk_examples_basic__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> maybe<string> */ 
  kk_std_core_types__maybe _match_x2629;
  kk_std_core_types__list _x_x4863;
  {
    struct kk_examples_basic_Cliresult* _con_x4864 = kk_examples_basic__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4864->cli__flags;
    kk_std_core_types__list _x = _con_x4864->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4864->cli__positionals;
    kk_string_t _pat_2 = _con_x4864->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4864->cli__sub;
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
    _x_x4863 = _x; /*list<(string, string)>*/
  }
  _match_x2629 = kk_std_core_list_find(_x_x4863, kk_examples_basic_new_hc__get__opt_fun4865(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2629, _ctx)) {
    kk_box_t _box_x556 = _match_x2629._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x556, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2629, _ctx);
    kk_box_t _x_x4867;
    kk_string_t _x_x4868;
    {
      kk_box_t _box_x557 = pair_0.fst;
      kk_box_t _box_x558 = pair_0.snd;
      kk_string_t _x_1 = kk_string_unbox(_box_x558);
      kk_string_dup(_x_1, _ctx);
      kk_std_core_types__tuple2_drop(pair_0, _ctx);
      _x_x4868 = _x_1; /*string*/
    }
    _x_x4867 = kk_string_box(_x_x4868); /*10024*/
    return kk_std_core_types__new_Just(_x_x4867, _ctx);
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__get__opt__or_fun4871__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_examples_basic_hc__get__opt__or_fun4871(kk_function_t _fself, kk_box_t _b_x568, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__get__opt__or_fun4871(kk_string_t name, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__get__opt__or_fun4871__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__get__opt__or_fun4871__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__get__opt__or_fun4871, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__get__opt__or_fun4871(kk_function_t _fself, kk_box_t _b_x568, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__get__opt__or_fun4871__t* _self = kk_function_as(struct kk_examples_basic_hc__get__opt__or_fun4871__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_575 = kk_std_core_types__tuple2_unbox(_b_x568, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4872;
  {
    kk_box_t _box_x564 = pair_575.fst;
    kk_box_t _box_x565 = pair_575.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x564);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_575, _ctx);
    _x_x4872 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4872,name,kk_context());
}

kk_string_t kk_examples_basic_hc__get__opt__or(kk_examples_basic__cliresult r, kk_string_t name, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (r : cliresult, name : string, default : string) -> string */ 
  kk_std_core_types__maybe _match_x2627;
  kk_std_core_types__list _x_x4869;
  {
    struct kk_examples_basic_Cliresult* _con_x4870 = kk_examples_basic__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4870->cli__flags;
    kk_std_core_types__list _x = _con_x4870->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4870->cli__positionals;
    kk_string_t _pat_2 = _con_x4870->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4870->cli__sub;
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
    _x_x4869 = _x; /*list<(string, string)>*/
  }
  _match_x2627 = kk_std_core_list_find(_x_x4869, kk_examples_basic_new_hc__get__opt__or_fun4871(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2627, _ctx)) {
    kk_box_t _box_x569 = _match_x2627._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x569, KK_BORROWED, _ctx);
    kk_string_drop(kkloc_default, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2627, _ctx);
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
    kk_std_core_types__maybe _match_x2628 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2628, _ctx)) {
      kk_box_t _box_x572 = _match_x2628._cons.Just.value;
      kk_string_t v = kk_string_unbox(_box_x572);
      kk_string_drop(kkloc_default, _ctx);
      kk_string_dup(v, _ctx);
      kk_std_core_types__maybe_drop(_match_x2628, _ctx);
      return v;
    }
    {
      return kkloc_default;
    }
  }
}

kk_std_core_types__list kk_examples_basic_hc__get__positionals(kk_examples_basic__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> list<string> */ 
  {
    struct kk_examples_basic_Cliresult* _con_x4873 = kk_examples_basic__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4873->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4873->cli__options;
    kk_std_core_types__list _x = _con_x4873->cli__positionals;
    kk_string_t _pat_2 = _con_x4873->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4873->cli__sub;
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

kk_string_t kk_examples_basic_hc__get__command(kk_examples_basic__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> string */ 
  {
    struct kk_examples_basic_Cliresult* _con_x4874 = kk_examples_basic__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4874->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4874->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4874->cli__positionals;
    kk_string_t _x = _con_x4874->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4874->cli__sub;
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

kk_std_core_types__maybe kk_examples_basic_hc__get__sub(kk_examples_basic__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> maybe<cliresult> */ 
  {
    struct kk_examples_basic_Cliresult* _con_x4875 = kk_examples_basic__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4875->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4875->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4875->cli__positionals;
    kk_string_t _pat_3 = _con_x4875->cli__command;
    kk_std_core_types__maybe _x = _con_x4875->cli__sub;
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
struct kk_examples_basic_hc__find__flag__long_fun4876__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_examples_basic_hc__find__flag__long_fun4876(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__find__flag__long_fun4876(kk_string_t name, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__find__flag__long_fun4876__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__find__flag__long_fun4876__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__find__flag__long_fun4876, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__find__flag__long_fun4876(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__find__flag__long_fun4876__t* _self = kk_function_as(struct kk_examples_basic_hc__find__flag__long_fun4876__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4877;
  kk_examples_basic__cliflag _match_x2626 = kk_examples_basic__cliflag_unbox(_b_x578, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x4878 = kk_examples_basic__as_Cliflag(_match_x2626, _ctx);
    kk_string_t _x = _con_x4878->flag__name;
    kk_string_t _pat_0 = _con_x4878->flag__short;
    kk_string_t _pat_1 = _con_x4878->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2626, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2626, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2626, _ctx);
    }
    _x_x4877 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4877,name,kk_context());
}

kk_std_core_types__maybe kk_examples_basic_hc__find__flag__long(kk_std_core_types__list flags, kk_string_t name, kk_context_t* _ctx) { /* (flags : list<cliflag>, name : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_examples_basic_new_hc__find__flag__long_fun4876(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__find__flag__short_fun4879__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_examples_basic_hc__find__flag__short_fun4879(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__find__flag__short_fun4879(kk_string_t s, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__find__flag__short_fun4879__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__find__flag__short_fun4879__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__find__flag__short_fun4879, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__find__flag__short_fun4879(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__find__flag__short_fun4879__t* _self = kk_function_as(struct kk_examples_basic_hc__find__flag__short_fun4879__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4880;
  kk_examples_basic__cliflag _match_x2625 = kk_examples_basic__cliflag_unbox(_b_x584, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x4881 = kk_examples_basic__as_Cliflag(_match_x2625, _ctx);
    kk_string_t _pat_0 = _con_x4881->flag__name;
    kk_string_t _x = _con_x4881->flag__short;
    kk_string_t _pat_1 = _con_x4881->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2625, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2625, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2625, _ctx);
    }
    _x_x4880 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4880,s,kk_context());
}

kk_std_core_types__maybe kk_examples_basic_hc__find__flag__short(kk_std_core_types__list flags, kk_string_t s, kk_context_t* _ctx) { /* (flags : list<cliflag>, s : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_examples_basic_new_hc__find__flag__short_fun4879(s, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__find__opt__long_fun4882__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_examples_basic_hc__find__opt__long_fun4882(kk_function_t _fself, kk_box_t _b_x590, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__find__opt__long_fun4882(kk_string_t name, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__find__opt__long_fun4882__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__find__opt__long_fun4882__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__find__opt__long_fun4882, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__find__opt__long_fun4882(kk_function_t _fself, kk_box_t _b_x590, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__find__opt__long_fun4882__t* _self = kk_function_as(struct kk_examples_basic_hc__find__opt__long_fun4882__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4883;
  kk_examples_basic__clioption _match_x2624 = kk_examples_basic__clioption_unbox(_b_x590, KK_OWNED, _ctx); /*examples/basic/clioption*/;
  {
    struct kk_examples_basic_Clioption* _con_x4884 = kk_examples_basic__as_Clioption(_match_x2624, _ctx);
    kk_string_t _x = _con_x4884->opt__name;
    kk_string_t _pat_0 = _con_x4884->opt__short;
    kk_string_t _pat_1 = _con_x4884->opt__help;
    kk_string_t _pat_2 = _con_x4884->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2624, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2624, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2624, _ctx);
    }
    _x_x4883 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4883,name,kk_context());
}

kk_std_core_types__maybe kk_examples_basic_hc__find__opt__long(kk_std_core_types__list options, kk_string_t name, kk_context_t* _ctx) { /* (options : list<clioption>, name : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_examples_basic_new_hc__find__opt__long_fun4882(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__find__opt__short_fun4885__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_examples_basic_hc__find__opt__short_fun4885(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__find__opt__short_fun4885(kk_string_t s, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__find__opt__short_fun4885__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__find__opt__short_fun4885__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__find__opt__short_fun4885, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__find__opt__short_fun4885(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__find__opt__short_fun4885__t* _self = kk_function_as(struct kk_examples_basic_hc__find__opt__short_fun4885__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4886;
  kk_examples_basic__clioption _match_x2623 = kk_examples_basic__clioption_unbox(_b_x596, KK_OWNED, _ctx); /*examples/basic/clioption*/;
  {
    struct kk_examples_basic_Clioption* _con_x4887 = kk_examples_basic__as_Clioption(_match_x2623, _ctx);
    kk_string_t _pat_0 = _con_x4887->opt__name;
    kk_string_t _x = _con_x4887->opt__short;
    kk_string_t _pat_1 = _con_x4887->opt__help;
    kk_string_t _pat_2 = _con_x4887->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2623, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2623, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2623, _ctx);
    }
    _x_x4886 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4886,s,kk_context());
}

kk_std_core_types__maybe kk_examples_basic_hc__find__opt__short(kk_std_core_types__list options, kk_string_t s, kk_context_t* _ctx) { /* (options : list<clioption>, s : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_examples_basic_new_hc__find__opt__short_fun4885(s, _ctx), _ctx);
}
extern bool kk_examples_basic_hc__find__command_fun4888(kk_function_t _fself, kk_box_t _b_x604, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__find__command_fun4888__t* _self = kk_function_as(struct kk_examples_basic_hc__find__command_fun4888__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4889;
  kk_std_core_types__tuple2 _match_x2622 = kk_std_core_types__tuple2_unbox(_b_x604, KK_OWNED, _ctx); /*(string, examples/basic/clispec)*/;
  {
    kk_box_t _box_x600 = _match_x2622.fst;
    kk_box_t _box_x601 = _match_x2622.snd;
    kk_string_t _x = kk_string_unbox(_box_x600);
    kk_string_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2622, _ctx);
    _x_x4889 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4889,name,kk_context());
}


// lift anonymous function
struct kk_examples_basic_hc__add__default_fun4894__t {
  struct kk_function_s _base;
  kk_examples_basic__clioption o;
};
static bool kk_examples_basic_hc__add__default_fun4894(kk_function_t _fself, kk_box_t _b_x612, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__add__default_fun4894(kk_examples_basic__clioption o, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__add__default_fun4894__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__add__default_fun4894__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__add__default_fun4894, kk_context());
  _self->o = o;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__add__default_fun4894(kk_function_t _fself, kk_box_t _b_x612, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__add__default_fun4894__t* _self = kk_function_as(struct kk_examples_basic_hc__add__default_fun4894__t*, _fself, _ctx);
  kk_examples_basic__clioption o = _self->o; /* examples/basic/clioption */
  kk_drop_match(_self, {kk_examples_basic__clioption_dup(o, _ctx);}, {}, _ctx)
  kk_string_t _x_x4895;
  kk_std_core_types__tuple2 _match_x2619 = kk_std_core_types__tuple2_unbox(_b_x612, KK_OWNED, _ctx); /*(string, string)*/;
  {
    kk_box_t _box_x608 = _match_x2619.fst;
    kk_box_t _box_x609 = _match_x2619.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x608);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2619, _ctx);
    _x_x4895 = _x_0; /*string*/
  }
  kk_string_t _x_x4896;
  {
    struct kk_examples_basic_Clioption* _con_x4897 = kk_examples_basic__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x4897->opt__name;
    kk_string_t _pat_0_3 = _con_x4897->opt__short;
    kk_string_t _pat_1_1 = _con_x4897->opt__help;
    kk_string_t _pat_2_0 = _con_x4897->opt__default;
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
    _x_x4896 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x4895,_x_x4896,kk_context());
}

kk_std_core_types__list kk_examples_basic_hc__add__default(kk_std_core_types__list acc, kk_examples_basic__clioption o, kk_context_t* _ctx) { /* (acc : list<(string, string)>, o : clioption) -> list<(string, string)> */ 
  bool b_10683;
  kk_integer_t _brw_x2620;
  kk_string_t _x_x4890;
  {
    struct kk_examples_basic_Clioption* _con_x4891 = kk_examples_basic__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x4891->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x4890 = _x; /*string*/
  }
  _brw_x2620 = kk_std_core_string_chars_fs_count(_x_x4890, _ctx); /*int*/
  bool _brw_x2621 = kk_integer_eq_borrow(_brw_x2620,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2620, _ctx);
  b_10683 = _brw_x2621; /*bool*/
  if (b_10683) {
    kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
    return acc;
  }
  {
    bool b_0_10686;
    kk_std_core_types__list _x_x4892 = kk_std_core_types__list_dup(acc, _ctx); /*list<(string, string)>*/
    kk_function_t _x_x4893;
    kk_examples_basic__clioption_dup(o, _ctx);
    _x_x4893 = kk_examples_basic_new_hc__add__default_fun4894(o, _ctx); /*(10001) -> 10002 bool*/
    b_0_10686 = kk_std_core_list_any(_x_x4892, _x_x4893, _ctx); /*bool*/
    if (b_0_10686) {
      kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
      return acc;
    }
    {
      kk_std_core_types__list _x_x4898;
      kk_box_t _x_x4899;
      kk_std_core_types__tuple2 _x_x4900;
      kk_box_t _x_x4901;
      kk_string_t _x_x4902;
      {
        struct kk_examples_basic_Clioption* _con_x4903 = kk_examples_basic__as_Clioption(o, _ctx);
        kk_string_t _x_2 = _con_x4903->opt__name;
        kk_string_dup(_x_2, _ctx);
        _x_x4902 = _x_2; /*string*/
      }
      _x_x4901 = kk_string_box(_x_x4902); /*10037*/
      kk_box_t _x_x4904;
      kk_string_t _x_x4905;
      {
        struct kk_examples_basic_Clioption* _con_x4906 = kk_examples_basic__as_Clioption(o, _ctx);
        kk_string_t _pat_0_5 = _con_x4906->opt__name;
        kk_string_t _pat_1_4 = _con_x4906->opt__short;
        kk_string_t _pat_2_2 = _con_x4906->opt__help;
        kk_string_t _x_3 = _con_x4906->opt__default;
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
        _x_x4905 = _x_3; /*string*/
      }
      _x_x4904 = kk_string_box(_x_x4905); /*10038*/
      _x_x4900 = kk_std_core_types__new_Tuple2(_x_x4901, _x_x4904, _ctx); /*(10037, 10038)*/
      _x_x4899 = kk_std_core_types__tuple2_box(_x_x4900, _ctx); /*10021*/
      _x_x4898 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4899, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      return kk_std_core_list_append(acc, _x_x4898, _ctx);
    }
  }
}


// lift anonymous function
struct kk_examples_basic_hc__apply__defaults_fun4910__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__apply__defaults_fun4910(kk_function_t _fself, kk_box_t _b_x627, kk_box_t _b_x628, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__apply__defaults_fun4910(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__apply__defaults_fun4910, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__apply__defaults_fun4910(kk_function_t _fself, kk_box_t _b_x627, kk_box_t _b_x628, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x4911;
  kk_std_core_types__list _x_x4912 = kk_std_core_types__list_unbox(_b_x627, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_examples_basic__clioption _x_x4913 = kk_examples_basic__clioption_unbox(_b_x628, KK_OWNED, _ctx); /*examples/basic/clioption*/
  _x_x4911 = kk_examples_basic_hc__add__default(_x_x4912, _x_x4913, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x4911, _ctx);
}

kk_std_core_types__list kk_examples_basic_hc__apply__defaults(kk_examples_basic__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<(string, string)>) -> list<(string, string)> */ 
  kk_box_t _x_x4907;
  kk_std_core_types__list _x_x4908;
  {
    struct kk_examples_basic_Clispec* _con_x4909 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x4909->app__name;
    kk_string_t _pat_1 = _con_x4909->app__version;
    kk_string_t _pat_2 = _con_x4909->app__about;
    kk_std_core_types__list _pat_3 = _con_x4909->app__flags;
    kk_std_core_types__list _x = _con_x4909->app__options;
    kk_std_core_types__list _pat_4 = _con_x4909->app__args;
    kk_std_core_types__list _pat_5 = _con_x4909->app__commands;
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
    _x_x4908 = _x; /*list<examples/basic/clioption>*/
  }
  _x_x4907 = kk_std_core_list_foldl(_x_x4908, kk_std_core_types__list_box(options, _ctx), kk_examples_basic_new_hc__apply__defaults_fun4910(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x4907, KK_OWNED, _ctx);
}

kk_string_t kk_examples_basic_hc__check__one__arg(kk_std_core_types__list positionals, kk_string_t err, kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (positionals : list<string>, err : string, pair : (int, cliarg)) -> string */ 
  bool b_10694;
  kk_integer_t _brw_x2617;
  kk_string_t _x_x4914 = kk_string_dup(err, _ctx); /*string*/
  _brw_x2617 = kk_std_core_string_chars_fs_count(_x_x4914, _ctx); /*int*/
  bool _brw_x2618 = kk_integer_eq_borrow(_brw_x2617,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2617, _ctx);
  b_10694 = _brw_x2618; /*bool*/
  if (b_10694) {
    kk_string_drop(err, _ctx);
    {
      kk_box_t _box_x632 = pair.fst;
      kk_box_t _box_x633 = pair.snd;
      kk_examples_basic__cliarg _x_0 = kk_examples_basic__cliarg_unbox(_box_x633, KK_BORROWED, _ctx);
      kk_examples_basic__cliarg_dup(_x_0, _ctx);
      {
        struct kk_examples_basic_Cliarg* _con_x4915 = kk_examples_basic__as_Cliarg(_x_0, _ctx);
        kk_string_t _pat_0_1 = _con_x4915->arg__name;
        kk_string_t _pat_1_0 = _con_x4915->arg__help;
        bool _x = _con_x4915->arg__required;
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_string_drop(_pat_1_0, _ctx);
          kk_string_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        if (_x) {
          bool _match_x2613;
          kk_integer_t _brw_x2615;
          {
            kk_box_t _box_x634 = pair.fst;
            kk_box_t _box_x635 = pair.snd;
            kk_integer_t _x_1 = kk_integer_unbox(_box_x634, _ctx);
            kk_integer_dup(_x_1, _ctx);
            _brw_x2615 = _x_1; /*int*/
          }
          kk_integer_t _brw_x2614 = kk_std_core_list__lift_length_6003(positionals, kk_integer_from_small(0), _ctx); /*int*/;
          bool _brw_x2616 = kk_integer_gte_borrow(_brw_x2615,_brw_x2614,kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2615, _ctx);
          kk_integer_drop(_brw_x2614, _ctx);
          _match_x2613 = _brw_x2616; /*bool*/
          if (_match_x2613) {
            kk_string_t _x_x4916;
            kk_define_string_literal(static, _s_x4917, 28, "missing required argument: <", _ctx)
            _x_x4916 = kk_string_dup(_s_x4917, _ctx); /*string*/
            kk_string_t _x_x4918;
            kk_string_t _x_x4919;
            {
              kk_box_t _box_x636 = pair.fst;
              kk_box_t _box_x637 = pair.snd;
              kk_examples_basic__cliarg _x_3 = kk_examples_basic__cliarg_unbox(_box_x637, KK_BORROWED, _ctx);
              kk_examples_basic__cliarg_dup(_x_3, _ctx);
              kk_std_core_types__tuple2_drop(pair, _ctx);
              {
                struct kk_examples_basic_Cliarg* _con_x4920 = kk_examples_basic__as_Cliarg(_x_3, _ctx);
                kk_string_t _x_2 = _con_x4920->arg__name;
                kk_string_t _pat_0_4 = _con_x4920->arg__help;
                if kk_likely(kk_datatype_ptr_is_unique(_x_3, _ctx)) {
                  kk_string_drop(_pat_0_4, _ctx);
                  kk_datatype_ptr_free(_x_3, _ctx);
                }
                else {
                  kk_string_dup(_x_2, _ctx);
                  kk_datatype_ptr_decref(_x_3, _ctx);
                }
                _x_x4919 = _x_2; /*string*/
              }
            }
            kk_string_t _x_x4921;
            kk_define_string_literal(static, _s_x4922, 1, ">", _ctx)
            _x_x4921 = kk_string_dup(_s_x4922, _ctx); /*string*/
            _x_x4918 = kk_std_core_types__lp__plus__plus__rp_(_x_x4919, _x_x4921, _ctx); /*string*/
            return kk_std_core_types__lp__plus__plus__rp_(_x_x4916, _x_x4918, _ctx);
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
struct kk_examples_basic_hc__check__required__args_fun4927__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__check__required__args_fun4927(kk_function_t _fself, kk_integer_t _b_x642, kk_box_t _b_x643, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__check__required__args_fun4927(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__check__required__args_fun4927, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__check__required__args_fun4927(kk_function_t _fself, kk_integer_t _b_x642, kk_box_t _b_x643, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t hc____i_656 = _b_x642; /*int*/;
  kk_examples_basic__cliarg hc____x_657 = kk_examples_basic__cliarg_unbox(_b_x643, KK_OWNED, _ctx); /*examples/basic/cliarg*/;
  kk_integer_t _b_x638_654 = hc____i_656; /*int*/;
  kk_examples_basic__cliarg _b_x639_655 = hc____x_657; /*examples/basic/cliarg*/;
  kk_std_core_types__tuple2 _x_x4928 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x638_654, _ctx), kk_examples_basic__cliarg_box(_b_x639_655, _ctx), _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x4928, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__check__required__args_fun4933__t {
  struct kk_function_s _base;
  kk_std_core_types__list positionals;
};
static kk_box_t kk_examples_basic_hc__check__required__args_fun4933(kk_function_t _fself, kk_box_t _b_x647, kk_box_t _b_x648, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__check__required__args_fun4933(kk_std_core_types__list positionals, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__check__required__args_fun4933__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__check__required__args_fun4933__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__check__required__args_fun4933, kk_context());
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__check__required__args_fun4933(kk_function_t _fself, kk_box_t _b_x647, kk_box_t _b_x648, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__check__required__args_fun4933__t* _self = kk_function_as(struct kk_examples_basic_hc__check__required__args_fun4933__t*, _fself, _ctx);
  kk_std_core_types__list positionals = _self->positionals; /* list<string> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(positionals, _ctx);}, {}, _ctx)
  kk_string_t err_658 = kk_string_unbox(_b_x647); /*string*/;
  kk_std_core_types__tuple2 pair_659 = kk_std_core_types__tuple2_unbox(_b_x648, KK_OWNED, _ctx); /*(int, examples/basic/cliarg)*/;
  kk_string_t _x_x4934 = kk_examples_basic_hc__check__one__arg(positionals, err_658, pair_659, _ctx); /*string*/
  return kk_string_box(_x_x4934);
}

kk_string_t kk_examples_basic_hc__check__required__args(kk_examples_basic__clispec spec, kk_std_core_types__list positionals, kk_context_t* _ctx) { /* (spec : clispec, positionals : list<string>) -> string */ 
  kk_std_core_types__list _b_x644_649;
  kk_std_core_types__list _x_x4925;
  {
    struct kk_examples_basic_Clispec* _con_x4926 = kk_examples_basic__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x4926->app__name;
    kk_string_t _pat_1 = _con_x4926->app__version;
    kk_string_t _pat_2 = _con_x4926->app__about;
    kk_std_core_types__list _pat_3 = _con_x4926->app__flags;
    kk_std_core_types__list _pat_4 = _con_x4926->app__options;
    kk_std_core_types__list _x = _con_x4926->app__args;
    kk_std_core_types__list _pat_5 = _con_x4926->app__commands;
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
    _x_x4925 = _x; /*list<examples/basic/cliarg>*/
  }
  _b_x644_649 = kk_std_core_list_map_indexed(_x_x4925, kk_examples_basic_new_hc__check__required__args_fun4927(_ctx), _ctx); /*list<(int, examples/basic/cliarg)>*/
  kk_box_t _x_x4929;
  kk_box_t _x_x4930;
  kk_string_t _x_x4931 = kk_string_empty(); /*string*/
  _x_x4930 = kk_string_box(_x_x4931); /*10002*/
  _x_x4929 = kk_std_core_list_foldl(_b_x644_649, _x_x4930, kk_examples_basic_new_hc__check__required__args_fun4933(positionals, _ctx), _ctx); /*10002*/
  return kk_string_unbox(_x_x4929);
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11133_fun4937__t {
  struct kk_function_s _base;
  kk_string_t _y_x10884;
  kk_std_core_types__list _y_x10885;
  kk_std_core_types__list _y_x10886;
  kk_std_core_types__list _y_x10887;
  kk_string_t _y_x10888;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11133_fun4937(kk_function_t _fself, kk_box_t _b_x665, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11133_fun4937(kk_string_t _y_x10884, kk_std_core_types__list _y_x10885, kk_std_core_types__list _y_x10886, kk_std_core_types__list _y_x10887, kk_string_t _y_x10888, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11133_fun4937__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11133_fun4937__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11133_fun4937, kk_context());
  _self->_y_x10884 = _y_x10884;
  _self->_y_x10885 = _y_x10885;
  _self->_y_x10886 = _y_x10886;
  _self->_y_x10887 = _y_x10887;
  _self->_y_x10888 = _y_x10888;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11133_fun4937(kk_function_t _fself, kk_box_t _b_x665, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11133_fun4937__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11133_fun4937__t*, _fself, _ctx);
  kk_string_t _y_x10884 = _self->_y_x10884; /* string */
  kk_std_core_types__list _y_x10885 = _self->_y_x10885; /* list<string> */
  kk_std_core_types__list _y_x10886 = _self->_y_x10886; /* list<(string, string)> */
  kk_std_core_types__list _y_x10887 = _self->_y_x10887; /* list<string> */
  kk_string_t _y_x10888 = _self->_y_x10888; /* string */
  kk_drop_match(_self, {kk_string_dup(_y_x10884, _ctx);kk_std_core_types__list_dup(_y_x10885, _ctx);kk_std_core_types__list_dup(_y_x10886, _ctx);kk_std_core_types__list_dup(_y_x10887, _ctx);kk_string_dup(_y_x10888, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10889_667 = kk_std_core_types__list_unbox(_b_x665, KK_OWNED, _ctx); /*list<string>*/;
  kk_examples_basic__parseraw _x_x4938 = kk_examples_basic__new_Parseraw(kk_reuse_null, 0, _y_x10884, _y_x10885, _y_x10886, _y_x10887, _y_x10888, _y_x10889_667, _ctx); /*examples/basic/parseraw*/
  return kk_examples_basic__parseraw_box(_x_x4938, _ctx);
}

kk_examples_basic__parseraw kk_examples_basic__mlift_hc__parse__loop_11133(kk_string_t _y_x10884, kk_std_core_types__list _y_x10885, kk_std_core_types__list _y_x10886, kk_std_core_types__list _y_x10887, kk_ref_t sub__args, kk_string_t _y_x10888, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, list<string>, sub_args : local-var<h,list<string>>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11208;
  kk_box_t _x_x4935 = kk_ref_get(sub__args,kk_context()); /*10000*/
  x_11208 = kk_std_core_types__list_unbox(_x_x4935, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11208, _ctx);
    kk_box_t _x_x4936 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11133_fun4937(_y_x10884, _y_x10885, _y_x10886, _y_x10887, _y_x10888, _ctx), _ctx); /*10001*/
    return kk_examples_basic__parseraw_unbox(_x_x4936, KK_OWNED, _ctx);
  }
  {
    return kk_examples_basic__new_Parseraw(kk_reuse_null, 0, _y_x10884, _y_x10885, _y_x10886, _y_x10887, _y_x10888, x_11208, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11134_fun4941__t {
  struct kk_function_s _base;
  kk_string_t _y_x10884;
  kk_std_core_types__list _y_x10885;
  kk_std_core_types__list _y_x10886;
  kk_std_core_types__list _y_x10887;
  kk_ref_t sub__args;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11134_fun4941(kk_function_t _fself, kk_box_t _b_x673, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11134_fun4941(kk_string_t _y_x10884, kk_std_core_types__list _y_x10885, kk_std_core_types__list _y_x10886, kk_std_core_types__list _y_x10887, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11134_fun4941__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11134_fun4941__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11134_fun4941, kk_context());
  _self->_y_x10884 = _y_x10884;
  _self->_y_x10885 = _y_x10885;
  _self->_y_x10886 = _y_x10886;
  _self->_y_x10887 = _y_x10887;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11134_fun4941(kk_function_t _fself, kk_box_t _b_x673, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11134_fun4941__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11134_fun4941__t*, _fself, _ctx);
  kk_string_t _y_x10884 = _self->_y_x10884; /* string */
  kk_std_core_types__list _y_x10885 = _self->_y_x10885; /* list<string> */
  kk_std_core_types__list _y_x10886 = _self->_y_x10886; /* list<(string, string)> */
  kk_std_core_types__list _y_x10887 = _self->_y_x10887; /* list<string> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(_y_x10884, _ctx);kk_std_core_types__list_dup(_y_x10885, _ctx);kk_std_core_types__list_dup(_y_x10886, _ctx);kk_std_core_types__list_dup(_y_x10887, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_string_t _y_x10888_675 = kk_string_unbox(_b_x673); /*string*/;
  kk_examples_basic__parseraw _x_x4942 = kk_examples_basic__mlift_hc__parse__loop_11133(_y_x10884, _y_x10885, _y_x10886, _y_x10887, sub__args, _y_x10888_675, _ctx); /*examples/basic/parseraw*/
  return kk_examples_basic__parseraw_box(_x_x4942, _ctx);
}

kk_examples_basic__parseraw kk_examples_basic__mlift_hc__parse__loop_11134(kk_string_t _y_x10884, kk_std_core_types__list _y_x10885, kk_std_core_types__list _y_x10886, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10887, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_string_t x_11216;
  kk_box_t _x_x4939 = kk_ref_get(subcmd,kk_context()); /*10000*/
  x_11216 = kk_string_unbox(_x_x4939); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11216, _ctx);
    kk_box_t _x_x4940 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11134_fun4941(_y_x10884, _y_x10885, _y_x10886, _y_x10887, sub__args, _ctx), _ctx); /*10001*/
    return kk_examples_basic__parseraw_unbox(_x_x4940, KK_OWNED, _ctx);
  }
  {
    return kk_examples_basic__mlift_hc__parse__loop_11133(_y_x10884, _y_x10885, _y_x10886, _y_x10887, sub__args, x_11216, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11135_fun4945__t {
  struct kk_function_s _base;
  kk_string_t _y_x10884;
  kk_std_core_types__list _y_x10885;
  kk_std_core_types__list _y_x10886;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11135_fun4945(kk_function_t _fself, kk_box_t _b_x681, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11135_fun4945(kk_string_t _y_x10884, kk_std_core_types__list _y_x10885, kk_std_core_types__list _y_x10886, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11135_fun4945__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11135_fun4945__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11135_fun4945, kk_context());
  _self->_y_x10884 = _y_x10884;
  _self->_y_x10885 = _y_x10885;
  _self->_y_x10886 = _y_x10886;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11135_fun4945(kk_function_t _fself, kk_box_t _b_x681, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11135_fun4945__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11135_fun4945__t*, _fself, _ctx);
  kk_string_t _y_x10884 = _self->_y_x10884; /* string */
  kk_std_core_types__list _y_x10885 = _self->_y_x10885; /* list<string> */
  kk_std_core_types__list _y_x10886 = _self->_y_x10886; /* list<(string, string)> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10884, _ctx);kk_std_core_types__list_dup(_y_x10885, _ctx);kk_std_core_types__list_dup(_y_x10886, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10887_683 = kk_std_core_types__list_unbox(_b_x681, KK_OWNED, _ctx); /*list<string>*/;
  kk_examples_basic__parseraw _x_x4946 = kk_examples_basic__mlift_hc__parse__loop_11134(_y_x10884, _y_x10885, _y_x10886, sub__args, subcmd, _y_x10887_683, _ctx); /*examples/basic/parseraw*/
  return kk_examples_basic__parseraw_box(_x_x4946, _ctx);
}

kk_examples_basic__parseraw kk_examples_basic__mlift_hc__parse__loop_11135(kk_string_t _y_x10884, kk_std_core_types__list _y_x10885, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10886, kk_context_t* _ctx) { /* forall<h> (string, list<string>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<(string, string)>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11218;
  kk_box_t _x_x4943 = kk_ref_get(positionals,kk_context()); /*10000*/
  x_11218 = kk_std_core_types__list_unbox(_x_x4943, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11218, _ctx);
    kk_box_t _x_x4944 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11135_fun4945(_y_x10884, _y_x10885, _y_x10886, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_examples_basic__parseraw_unbox(_x_x4944, KK_OWNED, _ctx);
  }
  {
    return kk_examples_basic__mlift_hc__parse__loop_11134(_y_x10884, _y_x10885, _y_x10886, sub__args, subcmd, x_11218, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11136_fun4949__t {
  struct kk_function_s _base;
  kk_string_t _y_x10884;
  kk_std_core_types__list _y_x10885;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11136_fun4949(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11136_fun4949(kk_string_t _y_x10884, kk_std_core_types__list _y_x10885, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11136_fun4949__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11136_fun4949__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11136_fun4949, kk_context());
  _self->_y_x10884 = _y_x10884;
  _self->_y_x10885 = _y_x10885;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11136_fun4949(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11136_fun4949__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11136_fun4949__t*, _fself, _ctx);
  kk_string_t _y_x10884 = _self->_y_x10884; /* string */
  kk_std_core_types__list _y_x10885 = _self->_y_x10885; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10884, _ctx);kk_std_core_types__list_dup(_y_x10885, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10886_691 = kk_std_core_types__list_unbox(_b_x689, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_examples_basic__parseraw _x_x4950 = kk_examples_basic__mlift_hc__parse__loop_11135(_y_x10884, _y_x10885, positionals, sub__args, subcmd, _y_x10886_691, _ctx); /*examples/basic/parseraw*/
  return kk_examples_basic__parseraw_box(_x_x4950, _ctx);
}

kk_examples_basic__parseraw kk_examples_basic__mlift_hc__parse__loop_11136(kk_string_t _y_x10884, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10885, kk_context_t* _ctx) { /* forall<h> (string, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11220;
  kk_box_t _x_x4947 = kk_ref_get(options,kk_context()); /*10000*/
  x_11220 = kk_std_core_types__list_unbox(_x_x4947, KK_OWNED, _ctx); /*list<(string, string)>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11220, _ctx);
    kk_box_t _x_x4948 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11136_fun4949(_y_x10884, _y_x10885, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_examples_basic__parseraw_unbox(_x_x4948, KK_OWNED, _ctx);
  }
  {
    return kk_examples_basic__mlift_hc__parse__loop_11135(_y_x10884, _y_x10885, positionals, sub__args, subcmd, x_11220, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11137_fun4953__t {
  struct kk_function_s _base;
  kk_string_t _y_x10884;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11137_fun4953(kk_function_t _fself, kk_box_t _b_x697, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11137_fun4953(kk_string_t _y_x10884, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11137_fun4953__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11137_fun4953__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11137_fun4953, kk_context());
  _self->_y_x10884 = _y_x10884;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11137_fun4953(kk_function_t _fself, kk_box_t _b_x697, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11137_fun4953__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11137_fun4953__t*, _fself, _ctx);
  kk_string_t _y_x10884 = _self->_y_x10884; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10884, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10885_699 = kk_std_core_types__list_unbox(_b_x697, KK_OWNED, _ctx); /*list<string>*/;
  kk_examples_basic__parseraw _x_x4954 = kk_examples_basic__mlift_hc__parse__loop_11136(_y_x10884, options, positionals, sub__args, subcmd, _y_x10885_699, _ctx); /*examples/basic/parseraw*/
  return kk_examples_basic__parseraw_box(_x_x4954, _ctx);
}

kk_examples_basic__parseraw kk_examples_basic__mlift_hc__parse__loop_11137(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t _y_x10884, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11222;
  kk_box_t _x_x4951 = kk_ref_get(flags,kk_context()); /*10000*/
  x_11222 = kk_std_core_types__list_unbox(_x_x4951, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11222, _ctx);
    kk_box_t _x_x4952 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11137_fun4953(_y_x10884, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_examples_basic__parseraw_unbox(_x_x4952, KK_OWNED, _ctx);
  }
  {
    return kk_examples_basic__mlift_hc__parse__loop_11136(_y_x10884, options, positionals, sub__args, subcmd, x_11222, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11139_fun4957__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11139_fun4957(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11139_fun4957(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11139_fun4957, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11139_fun4957(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x4958;
  kk_std_core_types__list _y_x10761_707 = kk_std_core_types__list_unbox(_b_x705, KK_OWNED, _ctx); /*list<string>*/;
  kk_integer_t _brw_x2602 = kk_std_core_list__lift_length_6003(_y_x10761_707, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2603 = kk_integer_gt_borrow(_brw_x2602,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2602, _ctx);
  _x_x4958 = _brw_x2603; /*bool*/
  return kk_bool_box(_x_x4958);
}

bool kk_examples_basic__mlift_hc__parse__loop_11139(kk_ref_t remaining, kk_string_t _y_x10760, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, string) -> <local<h>,div,exn,hica-brk> bool */ 
  bool _match_x2598;
  kk_integer_t _brw_x2604 = kk_std_core_string_chars_fs_count(_y_x10760, _ctx); /*int*/;
  bool _brw_x2605 = kk_integer_eq_borrow(_brw_x2604,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2604, _ctx);
  _match_x2598 = _brw_x2605; /*bool*/
  if (_match_x2598) {
    kk_std_core_types__list x_11224;
    kk_box_t _x_x4955 = kk_ref_get(remaining,kk_context()); /*10000*/
    x_11224 = kk_std_core_types__list_unbox(_x_x4955, KK_OWNED, _ctx); /*list<string>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11224, _ctx);
      kk_box_t _x_x4956 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11139_fun4957(_ctx), _ctx); /*10001*/
      return kk_bool_unbox(_x_x4956);
    }
    {
      kk_std_core_types__list _y_x10761_708 = x_11224; /*list<string>*/;
      kk_integer_t _brw_x2600 = kk_std_core_list__lift_length_6003(_y_x10761_708, kk_integer_from_small(0), _ctx); /*int*/;
      bool _brw_x2601 = kk_integer_gt_borrow(_brw_x2600,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2600, _ctx);
      return _brw_x2601;
    }
  }
  {
    kk_ref_drop(remaining, _ctx);
    return false;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11140_fun4960__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11140_fun4960(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11140_fun4960(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11140_fun4960, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11140_fun4960(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11227 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<examples/basic/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4961 = kk_std_core_hnd__as_Ev(ev_11227, _ctx);
    kk_box_t _box_x709 = _con_x4961->hnd;
    int32_t m = _con_x4961->marker;
    kk_examples_basic__hica_brk h = kk_examples_basic__hica_brk_unbox(_box_x709, KK_BORROWED, _ctx);
    kk_examples_basic__hica_brk_dup(h, _ctx);
    {
      struct kk_examples_basic__Hnd_hica_brk* _con_x4962 = kk_examples_basic__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4962->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4962->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x712, (_fun_unbox_x712, m, ev_11227, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11140(kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<h> (wild_@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x715_717 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4959 = kk_std_core_hnd__open_at0(_b_x715_717, kk_examples_basic__new_mlift_hc__parse__loop_11140_fun4960(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4959); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11141_fun4964__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11141_fun4964(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11141_fun4964(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11141_fun4964, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11141_fun4964(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11229 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<examples/basic/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4965 = kk_std_core_hnd__as_Ev(ev_11229, _ctx);
    kk_box_t _box_x719 = _con_x4965->hnd;
    int32_t m = _con_x4965->marker;
    kk_examples_basic__hica_brk h = kk_examples_basic__hica_brk_unbox(_box_x719, KK_BORROWED, _ctx);
    kk_examples_basic__hica_brk_dup(h, _ctx);
    {
      struct kk_examples_basic__Hnd_hica_brk* _con_x4966 = kk_examples_basic__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4966->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4966->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x722, (_fun_unbox_x722, m, ev_11229, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11141(kk_unit_t wild___0_0, kk_context_t* _ctx) { /* forall<h> (wild_@0@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x725_727 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4963 = kk_std_core_hnd__open_at0(_b_x725_727, kk_examples_basic__new_mlift_hc__parse__loop_11141_fun4964(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4963); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11142_fun4968__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11142_fun4968(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11142_fun4968(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11142_fun4968, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11142_fun4968(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11231 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<examples/basic/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4969 = kk_std_core_hnd__as_Ev(ev_11231, _ctx);
    kk_box_t _box_x729 = _con_x4969->hnd;
    int32_t m = _con_x4969->marker;
    kk_examples_basic__hica_brk h = kk_examples_basic__hica_brk_unbox(_box_x729, KK_BORROWED, _ctx);
    kk_examples_basic__hica_brk_dup(h, _ctx);
    {
      struct kk_examples_basic__Hnd_hica_brk* _con_x4970 = kk_examples_basic__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4970->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4970->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x732, (_fun_unbox_x732, m, ev_11231, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11142(kk_unit_t wild___1, kk_context_t* _ctx) { /* forall<h> (wild_@1 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x735_737 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4967 = kk_std_core_hnd__open_at0(_b_x735_737, kk_examples_basic__new_mlift_hc__parse__loop_11142_fun4968(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4967); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11143_fun4972__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11143_fun4972(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11143_fun4972(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11143_fun4972, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11143_fun4972(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11233 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<examples/basic/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4973 = kk_std_core_hnd__as_Ev(ev_11233, _ctx);
    kk_box_t _box_x739 = _con_x4973->hnd;
    int32_t m = _con_x4973->marker;
    kk_examples_basic__hica_brk h = kk_examples_basic__hica_brk_unbox(_box_x739, KK_BORROWED, _ctx);
    kk_examples_basic__hica_brk_dup(h, _ctx);
    {
      struct kk_examples_basic__Hnd_hica_brk* _con_x4974 = kk_examples_basic__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4974->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4974->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x742, (_fun_unbox_x742, m, ev_11233, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11143(kk_unit_t wild___2, kk_context_t* _ctx) { /* forall<h> (wild_@2 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x745_747 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4971 = kk_std_core_hnd__open_at0(_b_x745_747, kk_examples_basic__new_mlift_hc__parse__loop_11143_fun4972(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4971); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11144_fun4976__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11144_fun4976(kk_function_t _fself, kk_box_t _b_x754, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11144_fun4976(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11144_fun4976, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11144_fun4976(kk_function_t _fself, kk_box_t _b_x754, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___2_756 = kk_Unit;
  kk_unit_unbox(_b_x754);
  kk_unit_t _x_x4977 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11143(wild___2_756, _ctx);
  return kk_unit_box(_x_x4977);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11144(kk_std_core_types__list _y_x10778, kk_ref_t positionals, kk_std_core_types__list _y_x10779, kk_context_t* _ctx) { /* forall<h> (list<string>, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x750_752 = kk_std_core_list_append(_y_x10778, _y_x10779, _ctx); /*list<string>*/;
  kk_unit_t x_11235 = kk_Unit;
  kk_unit_t _brw_x2597 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x750_752, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2597;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x4975 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11144_fun4976(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x4975); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11143(x_11235, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11145_fun4980__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10778;
  kk_ref_t positionals;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11145_fun4980(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11145_fun4980(kk_std_core_types__list _y_x10778, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11145_fun4980__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11145_fun4980__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11145_fun4980, kk_context());
  _self->_y_x10778 = _y_x10778;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11145_fun4980(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11145_fun4980__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11145_fun4980__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10778 = _self->_y_x10778; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10778, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10779_764 = kk_std_core_types__list_unbox(_b_x762, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x4981 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11144(_y_x10778, positionals, _y_x10779_764, _ctx);
  return kk_unit_box(_x_x4981);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11145(kk_ref_t positionals, kk_ref_t remaining, kk_std_core_types__list _y_x10778, kk_context_t* _ctx) { /* forall<h> (positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11237;
  kk_box_t _x_x4978 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11237 = kk_std_core_types__list_unbox(_x_x4978, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11237, _ctx);
    kk_box_t _x_x4979 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11145_fun4980(_y_x10778, positionals, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x4979); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11144(_y_x10778, positionals, x_11237, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11146(kk_string_t name, kk_ref_t options, kk_string_t v, kk_std_core_types__list _y_x10788, kk_context_t* _ctx) { /* forall<h> (name : string, options : local-var<h,list<(string, string)>>, v : string, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x770_772;
  kk_std_core_types__list _x_x4982;
  kk_box_t _x_x4983;
  kk_std_core_types__tuple2 _x_x4984 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x4983 = kk_std_core_types__tuple2_box(_x_x4984, _ctx); /*10021*/
  _x_x4982 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4983, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x770_772 = kk_std_core_list_append(_y_x10788, _x_x4982, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2594 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x770_772, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2594; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11147_fun4989__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11147_fun4989(kk_function_t _fself, kk_box_t _b_x779, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11147_fun4989(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11147_fun4989, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11147_fun4989(kk_function_t _fself, kk_box_t _b_x779, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x4990;
  kk_examples_basic__clispec _match_x2593 = kk_examples_basic__clispec_unbox(_b_x779, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x4991 = kk_examples_basic__as_Clispec(_match_x2593, _ctx);
    kk_string_t _pat_0_6 = _con_x4991->app__name;
    kk_string_t _pat_1_4 = _con_x4991->app__version;
    kk_string_t _pat_2_1 = _con_x4991->app__about;
    kk_std_core_types__list _pat_3_0 = _con_x4991->app__flags;
    kk_std_core_types__list _x_0 = _con_x4991->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x4991->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x4991->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2593, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_string_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_6, _ctx);
      kk_datatype_ptr_free(_match_x2593, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2593, _ctx);
    }
    _x_x4990 = _x_0; /*list<examples/basic/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x4990, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11147_fun4993__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11147_fun4993(kk_function_t _fself, kk_box_t _b_x789, kk_box_t _b_x790, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11147_fun4993(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11147_fun4993, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11147_fun4995__t {
  struct kk_function_s _base;
  kk_string_t name_0_822;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11147_fun4995(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11147_fun4995(kk_string_t name_0_822, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11147_fun4995__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11147_fun4995__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11147_fun4995, kk_context());
  _self->name_0_822 = name_0_822;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11147_fun4995(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11147_fun4995__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11147_fun4995__t*, _fself, _ctx);
  kk_string_t name_0_822 = _self->name_0_822; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_822, _ctx);}, {}, _ctx)
  kk_string_t _x_x4996;
  kk_examples_basic__clioption _match_x2592 = kk_examples_basic__clioption_unbox(_b_x785, KK_OWNED, _ctx); /*examples/basic/clioption*/;
  {
    struct kk_examples_basic_Clioption* _con_x4997 = kk_examples_basic__as_Clioption(_match_x2592, _ctx);
    kk_string_t _x = _con_x4997->opt__name;
    kk_string_t _pat_0_5 = _con_x4997->opt__short;
    kk_string_t _pat_1_3 = _con_x4997->opt__help;
    kk_string_t _pat_2_0 = _con_x4997->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2592, _ctx)) {
      kk_string_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_5, _ctx);
      kk_datatype_ptr_free(_match_x2592, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2592, _ctx);
    }
    _x_x4996 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4996,name_0_822,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11147_fun4993(kk_function_t _fself, kk_box_t _b_x789, kk_box_t _b_x790, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x4994;
  kk_std_core_types__list options_0_821 = kk_std_core_types__list_unbox(_b_x789, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/;
  kk_string_t name_0_822 = kk_string_unbox(_b_x790); /*string*/;
  _x_x4994 = kk_std_core_list_find(options_0_821, kk_examples_basic__new_mlift_hc__parse__loop_11147_fun4995(name_0_822, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x4994, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5003__t {
  struct kk_function_s _base;
  kk_string_t name;
  kk_ref_t options;
  kk_string_t v;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11147_fun5003(kk_function_t _fself, kk_std_core_types__list _y_x10788, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11147_fun5003(kk_string_t name, kk_ref_t options, kk_string_t v, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5003__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5003__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11147_fun5003, kk_context());
  _self->name = name;
  _self->options = options;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11147_fun5003(kk_function_t _fself, kk_std_core_types__list _y_x10788, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5003__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5003__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_string_t v = _self->v; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);kk_ref_dup(options, _ctx);kk_string_dup(v, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x801_803;
  kk_std_core_types__list _x_x5004;
  kk_box_t _x_x5005;
  kk_std_core_types__tuple2 _x_x5006 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x5005 = kk_std_core_types__tuple2_box(_x_x5006, _ctx); /*10021*/
  _x_x5004 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5005, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x801_803 = kk_std_core_list_append(_y_x10788, _x_x5004, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2591 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x801_803, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2591; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5008__t {
  struct kk_function_s _base;
  kk_function_t next_11240;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11147_fun5008(kk_function_t _fself, kk_box_t _b_x809, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11147_fun5008(kk_function_t next_11240, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5008__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5008__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11147_fun5008, kk_context());
  _self->next_11240 = next_11240;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11147_fun5008(kk_function_t _fself, kk_box_t _b_x809, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5008__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11147_fun5008__t*, _fself, _ctx);
  kk_function_t next_11240 = _self->next_11240; /* (list<(string, string)>) -> <local<23359>,exn,examples/basic/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11240, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5009 = kk_Unit;
  kk_std_core_types__list _x_x5010 = kk_std_core_types__list_unbox(_b_x809, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11240, (next_11240, _x_x5010, _ctx), _ctx);
  return kk_unit_box(_x_x5009);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11147(kk_std_core_types__list _c_x10784, kk_ref_t error, kk_ref_t options, kk_examples_basic__clispec spec, kk_string_t name, kk_context_t* _ctx) { /* forall<h> (list<string>, error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, name : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t v;
  kk_std_core_types__list _x_x4985 = kk_std_core_list_drop(_c_x10784, kk_integer_from_small(1), _ctx); /*list<10001>*/
  kk_string_t _x_x4986;
  kk_define_string_literal(static, _s_x4987, 1, "=", _ctx)
  _x_x4986 = kk_string_dup(_s_x4987, _ctx); /*string*/
  v = kk_std_core_list_joinsep(_x_x4985, _x_x4986, _ctx); /*string*/
  kk_std_core_types__list _x_x1_4_11049;
  kk_box_t _x_x4988 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11147_fun4989(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
  _x_x1_4_11049 = kk_std_core_types__list_unbox(_x_x4988, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/
  kk_std_core_types__maybe _match_x2588;
  kk_box_t _x_x4992;
  kk_box_t _x_x4998;
  kk_string_t _x_x4999 = kk_string_dup(name, _ctx); /*string*/
  _x_x4998 = kk_string_box(_x_x4999); /*10001*/
  _x_x4992 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11147_fun4993(_ctx), kk_std_core_types__list_box(_x_x1_4_11049, _ctx), _x_x4998, _ctx); /*10002*/
  _match_x2588 = kk_std_core_types__maybe_unbox(_x_x4992, KK_OWNED, _ctx); /*maybe<examples/basic/clioption>*/
  if (kk_std_core_types__is_Just(_match_x2588, _ctx)) {
    kk_box_t _box_x791 = _match_x2588._cons.Just.value;
    kk_examples_basic__clioption _pat_15_0 = kk_examples_basic__clioption_unbox(_box_x791, KK_BORROWED, _ctx);
    struct kk_examples_basic_Clioption* _con_x5000 = kk_examples_basic__as_Clioption(_pat_15_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__maybe_drop(_match_x2588, _ctx);
    kk_std_core_types__list x_11239;
    kk_box_t _x_x5001;
    kk_ref_t _x_x5002 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x5001 = kk_ref_get(_x_x5002,kk_context()); /*10000*/
    x_11239 = kk_std_core_types__list_unbox(_x_x5001, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_function_t next_11240 = kk_examples_basic__new_mlift_hc__parse__loop_11147_fun5003(name, options, v, _ctx); /*(list<(string, string)>) -> <local<23359>,exn,examples/basic/hica-brk,div> ()*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11239, _ctx);
      kk_box_t _x_x5007 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11147_fun5008(next_11240, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5007); return kk_Unit;
    }
    {
      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11240, (next_11240, x_11239, _ctx), _ctx); return kk_Unit;
    }
  }
  {
    kk_string_drop(v, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x811_819;
    kk_string_t _x_x5011;
    kk_define_string_literal(static, _s_x5012, 18, "unknown option: --", _ctx)
    _x_x5011 = kk_string_dup(_s_x5012, _ctx); /*string*/
    _b_x811_819 = kk_std_core_types__lp__plus__plus__rp_(_x_x5011, name, _ctx); /*string*/
    kk_unit_t _brw_x2589 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x811_819)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2589; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11148_fun5024__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11148_fun5024(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11148_fun5024(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11148_fun5024, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11148_fun5024(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5025;
  kk_std_core_types__maybe _match_x2587 = kk_std_core_types__maybe_unbox(_b_x830, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2587, _ctx)) {
    kk_box_t _box_x823 = _match_x2587._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x823);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2587, _ctx);
    kk_box_drop(_b_x831, _ctx);
    _x_x5025 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x824_836;
    kk_string_t _x_x5026;
    kk_define_string_literal(static, _s_x5027, 22, "unexpected Nothing in ", _ctx)
    _x_x5026 = kk_string_dup(_s_x5027, _ctx); /*string*/
    kk_string_t _x_x5028 = kk_string_unbox(_b_x831); /*string*/
    _b_x824_836 = kk_std_core_types__lp__plus__plus__rp_(_x_x5026, _x_x5028, _ctx); /*string*/
    kk_box_t _x_x5029 = kk_std_core_exn_throw(_b_x824_836, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5025 = kk_string_unbox(_x_x5029); /*string*/
  }
  return kk_string_box(_x_x5025);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11148_fun5031__t {
  struct kk_function_s _base;
  kk_std_core_types__list _c_x10784;
  kk_ref_t error;
  kk_ref_t options;
  kk_examples_basic__clispec spec;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11148_fun5031(kk_function_t _fself, kk_box_t _b_x841, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11148_fun5031(kk_std_core_types__list _c_x10784, kk_ref_t error, kk_ref_t options, kk_examples_basic__clispec spec, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11148_fun5031__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11148_fun5031__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11148_fun5031, kk_context());
  _self->_c_x10784 = _c_x10784;
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11148_fun5031(kk_function_t _fself, kk_box_t _b_x841, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11148_fun5031__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11148_fun5031__t*, _fself, _ctx);
  kk_std_core_types__list _c_x10784 = _self->_c_x10784; /* list<string> */
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_examples_basic__clispec spec = _self->spec; /* examples/basic/clispec */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_c_x10784, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_examples_basic__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_string_t name_843 = kk_string_unbox(_b_x841); /*string*/;
  kk_unit_t _x_x5032 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11147(_c_x10784, error, options, spec, name_843, _ctx);
  return kk_unit_box(_x_x5032);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11148(kk_ref_t error, kk_ref_t options, kk_examples_basic__clispec spec, kk_std_core_types__list _c_x10784, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, list<string>) -> () */ 
  kk_std_core_types__maybe _x_x1_3_11047;
  kk_std_core_types__list _x_x5013 = kk_std_core_types__list_dup(_c_x10784, _ctx); /*list<string>*/
  _x_x1_3_11047 = kk_std_core_list__index(_x_x5013, kk_integer_from_small(0), _ctx); /*maybe<string>*/
  kk_string_t _x_x2_2_11048;
  kk_string_t _x_x5014;
  kk_define_string_literal(static, _s_x5015, 17, "examples/basic.kk", _ctx)
  _x_x5014 = kk_string_dup(_s_x5015, _ctx); /*string*/
  kk_string_t _x_x5016;
  kk_string_t _x_x5017;
  kk_define_string_literal(static, _s_x5018, 1, "(", _ctx)
  _x_x5017 = kk_string_dup(_s_x5018, _ctx); /*string*/
  kk_string_t _x_x5019;
  kk_string_t _x_x5020 = kk_std_core_int_show(kk_integer_from_small(760), _ctx); /*string*/
  kk_string_t _x_x5021;
  kk_define_string_literal(static, _s_x5022, 1, ")", _ctx)
  _x_x5021 = kk_string_dup(_s_x5022, _ctx); /*string*/
  _x_x5019 = kk_std_core_types__lp__plus__plus__rp_(_x_x5020, _x_x5021, _ctx); /*string*/
  _x_x5016 = kk_std_core_types__lp__plus__plus__rp_(_x_x5017, _x_x5019, _ctx); /*string*/
  _x_x2_2_11048 = kk_std_core_types__lp__plus__plus__rp_(_x_x5014, _x_x5016, _ctx); /*string*/
  kk_ssize_t _b_x826_832 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11245;
  kk_box_t _x_x5023 = kk_std_core_hnd__open_at2(_b_x826_832, kk_examples_basic__new_mlift_hc__parse__loop_11148_fun5024(_ctx), kk_std_core_types__maybe_box(_x_x1_3_11047, _ctx), kk_string_box(_x_x2_2_11048), _ctx); /*10002*/
  x_11245 = kk_string_unbox(_x_x5023); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11245, _ctx);
    kk_box_t _x_x5030 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11148_fun5031(_c_x10784, error, options, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5030); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11147(_c_x10784, error, options, spec, x_11245, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11149(kk_ref_t flags, kk_string_t name_0_0, kk_std_core_types__list _y_x10792, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x847_849;
  kk_std_core_types__list _x_x5033 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x847_849 = kk_std_core_list_append(_y_x10792, _x_x5033, _ctx); /*list<string>*/
  kk_unit_t _brw_x2585 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x847_849, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2585; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5036__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11151_fun5036(kk_function_t _fself, kk_std_core_types__list _y_x10802, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11151_fun5036(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5036__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5036__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11151_fun5036, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11151_fun5036(kk_function_t _fself, kk_std_core_types__list _y_x10802, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5036__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5036__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x861_863 = kk_std_core_list_drop(_y_x10802, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2583 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x861_863, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2583; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5038__t {
  struct kk_function_s _base;
  kk_function_t next_11248;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11151_fun5038(kk_function_t _fself, kk_box_t _b_x865, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11151_fun5038(kk_function_t next_11248, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5038__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5038__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11151_fun5038, kk_context());
  _self->next_11248 = next_11248;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11151_fun5038(kk_function_t _fself, kk_box_t _b_x865, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5038__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11151_fun5038__t*, _fself, _ctx);
  kk_function_t next_11248 = _self->next_11248; /* (list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11248, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5039 = kk_Unit;
  kk_std_core_types__list _x_x5040 = kk_std_core_types__list_unbox(_b_x865, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11248, (next_11248, _x_x5040, _ctx), _ctx);
  return kk_unit_box(_x_x5039);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11151(kk_ref_t remaining, kk_unit_t wild___3, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11247;
  kk_box_t _x_x5034;
  kk_ref_t _x_x5035 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5034 = kk_ref_get(_x_x5035,kk_context()); /*10000*/
  x_11247 = kk_std_core_types__list_unbox(_x_x5034, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11248 = kk_examples_basic__new_mlift_hc__parse__loop_11151_fun5036(remaining, _ctx); /*(list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11247, _ctx);
    kk_box_t _x_x5037 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11151_fun5038(next_11248, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5037); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11248, (next_11248, x_11247, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11152_fun5045__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11152_fun5045(kk_function_t _fself, kk_box_t _b_x880, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11152_fun5045(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11152_fun5045__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11152_fun5045__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11152_fun5045, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11152_fun5045(kk_function_t _fself, kk_box_t _b_x880, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11152_fun5045__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11152_fun5045__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_882 = kk_Unit;
  kk_unit_unbox(_b_x880);
  kk_unit_t _x_x5046 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11151(remaining, wild___3_882, _ctx);
  return kk_unit_box(_x_x5046);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11152(kk_std_core_types__list _y_x10796, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10800, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x872_874;
  kk_std_core_types__list _x_x5041;
  kk_box_t _x_x5042;
  kk_std_core_types__tuple2 _x_x5043 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0), kk_string_box(_y_x10800), _ctx); /*(10037, 10038)*/
  _x_x5042 = kk_std_core_types__tuple2_box(_x_x5043, _ctx); /*10021*/
  _x_x5041 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5042, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x872_874 = kk_std_core_list_append(_y_x10796, _x_x5041, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11251 = kk_Unit;
  kk_unit_t _brw_x2581 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x872_874, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2581;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5044 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11152_fun5045(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5044); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11151(remaining, x_11251, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11153_fun5057__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11153_fun5057(kk_function_t _fself, kk_box_t _b_x890, kk_box_t _b_x891, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11153_fun5057(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11153_fun5057, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11153_fun5057(kk_function_t _fself, kk_box_t _b_x890, kk_box_t _b_x891, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5058;
  kk_std_core_types__maybe _match_x2579 = kk_std_core_types__maybe_unbox(_b_x890, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2579, _ctx)) {
    kk_box_t _box_x883 = _match_x2579._cons.Just.value;
    kk_string_t x_1 = kk_string_unbox(_box_x883);
    kk_string_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_match_x2579, _ctx);
    kk_box_drop(_b_x891, _ctx);
    _x_x5058 = x_1; /*string*/
  }
  else {
    kk_string_t _b_x884_896;
    kk_string_t _x_x5059;
    kk_define_string_literal(static, _s_x5060, 22, "unexpected Nothing in ", _ctx)
    _x_x5059 = kk_string_dup(_s_x5060, _ctx); /*string*/
    kk_string_t _x_x5061 = kk_string_unbox(_b_x891); /*string*/
    _b_x884_896 = kk_std_core_types__lp__plus__plus__rp_(_x_x5059, _x_x5061, _ctx); /*string*/
    kk_box_t _x_x5062 = kk_std_core_exn_throw(_b_x884_896, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5058 = kk_string_unbox(_x_x5062); /*string*/
  }
  return kk_string_box(_x_x5058);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11153_fun5064__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10796;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11153_fun5064(kk_function_t _fself, kk_box_t _b_x901, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11153_fun5064(kk_std_core_types__list _y_x10796, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11153_fun5064__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11153_fun5064__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11153_fun5064, kk_context());
  _self->_y_x10796 = _y_x10796;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11153_fun5064(kk_function_t _fself, kk_box_t _b_x901, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11153_fun5064__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11153_fun5064__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10796 = _self->_y_x10796; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10796, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10800_903 = kk_string_unbox(_b_x901); /*string*/;
  kk_unit_t _x_x5065 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11152(_y_x10796, name_0_0, options, remaining, _y_x10800_903, _ctx);
  return kk_unit_box(_x_x5065);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11153(kk_std_core_types__list _y_x10796, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10799, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_12_11061 = kk_std_core_list__index(_y_x10799, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_7_11062;
  kk_string_t _x_x5047;
  kk_define_string_literal(static, _s_x5048, 17, "examples/basic.kk", _ctx)
  _x_x5047 = kk_string_dup(_s_x5048, _ctx); /*string*/
  kk_string_t _x_x5049;
  kk_string_t _x_x5050;
  kk_define_string_literal(static, _s_x5051, 1, "(", _ctx)
  _x_x5050 = kk_string_dup(_s_x5051, _ctx); /*string*/
  kk_string_t _x_x5052;
  kk_string_t _x_x5053 = kk_std_core_int_show(kk_integer_from_small(778), _ctx); /*string*/
  kk_string_t _x_x5054;
  kk_define_string_literal(static, _s_x5055, 1, ")", _ctx)
  _x_x5054 = kk_string_dup(_s_x5055, _ctx); /*string*/
  _x_x5052 = kk_std_core_types__lp__plus__plus__rp_(_x_x5053, _x_x5054, _ctx); /*string*/
  _x_x5049 = kk_std_core_types__lp__plus__plus__rp_(_x_x5050, _x_x5052, _ctx); /*string*/
  _x_x2_7_11062 = kk_std_core_types__lp__plus__plus__rp_(_x_x5047, _x_x5049, _ctx); /*string*/
  kk_ssize_t _b_x886_892 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11253;
  kk_box_t _x_x5056 = kk_std_core_hnd__open_at2(_b_x886_892, kk_examples_basic__new_mlift_hc__parse__loop_11153_fun5057(_ctx), kk_std_core_types__maybe_box(_x_x1_12_11061, _ctx), kk_string_box(_x_x2_7_11062), _ctx); /*10002*/
  x_11253 = kk_string_unbox(_x_x5056); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11253, _ctx);
    kk_box_t _x_x5063 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11153_fun5064(_y_x10796, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5063); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11152(_y_x10796, name_0_0, options, remaining, x_11253, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11154_fun5069__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10796;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11154_fun5069(kk_function_t _fself, kk_box_t _b_x909, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11154_fun5069(kk_std_core_types__list _y_x10796, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11154_fun5069__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11154_fun5069__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11154_fun5069, kk_context());
  _self->_y_x10796 = _y_x10796;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11154_fun5069(kk_function_t _fself, kk_box_t _b_x909, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11154_fun5069__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11154_fun5069__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10796 = _self->_y_x10796; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10796, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10799_911 = kk_std_core_types__list_unbox(_b_x909, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5070 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11153(_y_x10796, name_0_0, options, remaining, _y_x10799_911, _ctx);
  return kk_unit_box(_x_x5070);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11154(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10796, kk_context_t* _ctx) { /* forall<h> (name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11255;
  kk_box_t _x_x5066;
  kk_ref_t _x_x5067 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5066 = kk_ref_get(_x_x5067,kk_context()); /*10000*/
  x_11255 = kk_std_core_types__list_unbox(_x_x5066, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11255, _ctx);
    kk_box_t _x_x5068 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11154_fun5069(_y_x10796, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5068); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11153(_y_x10796, name_0_0, options, remaining, x_11255, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11155_fun5079__t {
  struct kk_function_s _base;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11155_fun5079(kk_function_t _fself, kk_box_t _b_x919, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11155_fun5079(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11155_fun5079__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11155_fun5079__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11155_fun5079, kk_context());
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11155_fun5079(kk_function_t _fself, kk_box_t _b_x919, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11155_fun5079__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11155_fun5079__t*, _fself, _ctx);
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10796_923 = kk_std_core_types__list_unbox(_b_x919, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5080 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11154(name_0_0, options, remaining, _y_x10796_923, _ctx);
  return kk_unit_box(_x_x5080);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11155(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10794, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2572;
  kk_integer_t _brw_x2575 = kk_std_core_list__lift_length_6003(_y_x10794, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2576 = kk_integer_eq_borrow(_brw_x2575,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2575, _ctx);
  _match_x2572 = _brw_x2576; /*bool*/
  if (_match_x2572) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x913_921;
    kk_string_t _x_x5071;
    kk_define_string_literal(static, _s_x5072, 9, "option --", _ctx)
    _x_x5071 = kk_string_dup(_s_x5072, _ctx); /*string*/
    kk_string_t _x_x5073;
    kk_string_t _x_x5074;
    kk_define_string_literal(static, _s_x5075, 17, " requires a value", _ctx)
    _x_x5074 = kk_string_dup(_s_x5075, _ctx); /*string*/
    _x_x5073 = kk_std_core_types__lp__plus__plus__rp_(name_0_0, _x_x5074, _ctx); /*string*/
    _b_x913_921 = kk_std_core_types__lp__plus__plus__rp_(_x_x5071, _x_x5073, _ctx); /*string*/
    kk_unit_t _brw_x2574 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x913_921)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2574; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11257;
    kk_box_t _x_x5076;
    kk_ref_t _x_x5077 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x5076 = kk_ref_get(_x_x5077,kk_context()); /*10000*/
    x_11257 = kk_std_core_types__list_unbox(_x_x5076, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11257, _ctx);
      kk_box_t _x_x5078 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11155_fun5079(name_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5078); return kk_Unit;
    }
    {
      kk_examples_basic__mlift_hc__parse__loop_11154(name_0_0, options, remaining, x_11257, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11156_fun5082__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11156_fun5082(kk_function_t _fself, kk_box_t _b_x926, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11156_fun5082(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11156_fun5082, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11156_fun5082(kk_function_t _fself, kk_box_t _b_x926, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5083;
  kk_examples_basic__cliflag _match_x2571 = kk_examples_basic__cliflag_unbox(_b_x926, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x5084 = kk_examples_basic__as_Cliflag(_match_x2571, _ctx);
    kk_string_t _x_7 = _con_x5084->flag__name;
    kk_string_t _pat_0_20 = _con_x5084->flag__short;
    kk_string_t _pat_1_15 = _con_x5084->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2571, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2571, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2571, _ctx);
    }
    _x_x5083 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5083);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11156(kk_examples_basic__cliflag f_1, kk_ref_t flags, kk_std_core_types__list _y_x10808, kk_context_t* _ctx) { /* forall<h> (f@1 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x927_929;
  kk_box_t _x_x5081 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11156_fun5082(_ctx), kk_examples_basic__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x927_929 = kk_string_unbox(_x_x5081); /*string*/
  kk_std_core_types__list _b_x935_937;
  kk_std_core_types__list _x_x5085 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x927_929), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x935_937 = kk_std_core_list_append(_y_x10808, _x_x5085, _ctx); /*list<string>*/
  kk_unit_t _brw_x2570 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x935_937, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2570; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5088__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11158_fun5088(kk_function_t _fself, kk_std_core_types__list _y_x10818, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11158_fun5088(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5088__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5088__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11158_fun5088, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11158_fun5088(kk_function_t _fself, kk_std_core_types__list _y_x10818, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5088__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5088__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x947_949 = kk_std_core_list_drop(_y_x10818, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2568 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x947_949, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2568; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5090__t {
  struct kk_function_s _base;
  kk_function_t next_11260;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11158_fun5090(kk_function_t _fself, kk_box_t _b_x951, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11158_fun5090(kk_function_t next_11260, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5090__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5090__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11158_fun5090, kk_context());
  _self->next_11260 = next_11260;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11158_fun5090(kk_function_t _fself, kk_box_t _b_x951, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5090__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11158_fun5090__t*, _fself, _ctx);
  kk_function_t next_11260 = _self->next_11260; /* (list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11260, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5091 = kk_Unit;
  kk_std_core_types__list _x_x5092 = kk_std_core_types__list_unbox(_b_x951, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11260, (next_11260, _x_x5092, _ctx), _ctx);
  return kk_unit_box(_x_x5091);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11158(kk_ref_t remaining, kk_unit_t wild___4, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11259;
  kk_box_t _x_x5086;
  kk_ref_t _x_x5087 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5086 = kk_ref_get(_x_x5087,kk_context()); /*10000*/
  x_11259 = kk_std_core_types__list_unbox(_x_x5086, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11260 = kk_examples_basic__new_mlift_hc__parse__loop_11158_fun5088(remaining, _ctx); /*(list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11259, _ctx);
    kk_box_t _x_x5089 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11158_fun5090(next_11260, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5089); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11260, (next_11260, x_11259, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11159_fun5094__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11159_fun5094(kk_function_t _fself, kk_box_t _b_x955, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11159_fun5094(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11159_fun5094, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11159_fun5094(kk_function_t _fself, kk_box_t _b_x955, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5095;
  kk_examples_basic__clioption _match_x2566 = kk_examples_basic__clioption_unbox(_b_x955, KK_OWNED, _ctx); /*examples/basic/clioption*/;
  {
    struct kk_examples_basic_Clioption* _con_x5096 = kk_examples_basic__as_Clioption(_match_x2566, _ctx);
    kk_string_t _x_10 = _con_x5096->opt__name;
    kk_string_t _pat_0_23 = _con_x5096->opt__short;
    kk_string_t _pat_1_18 = _con_x5096->opt__help;
    kk_string_t _pat_2_8 = _con_x5096->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2566, _ctx)) {
      kk_string_drop(_pat_2_8, _ctx);
      kk_string_drop(_pat_1_18, _ctx);
      kk_string_drop(_pat_0_23, _ctx);
      kk_datatype_ptr_free(_match_x2566, _ctx);
    }
    else {
      kk_string_dup(_x_10, _ctx);
      kk_datatype_ptr_decref(_match_x2566, _ctx);
    }
    _x_x5095 = _x_10; /*string*/
  }
  return kk_string_box(_x_x5095);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11159_fun5101__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11159_fun5101(kk_function_t _fself, kk_box_t _b_x972, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11159_fun5101(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11159_fun5101__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11159_fun5101__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11159_fun5101, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11159_fun5101(kk_function_t _fself, kk_box_t _b_x972, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11159_fun5101__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11159_fun5101__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_974 = kk_Unit;
  kk_unit_unbox(_b_x972);
  kk_unit_t _x_x5102 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11158(remaining, wild___4_974, _ctx);
  return kk_unit_box(_x_x5102);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11159(kk_std_core_types__list _y_x10812, kk_examples_basic__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10816, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x956_962;
  kk_box_t _x_x5093 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11159_fun5094(_ctx), kk_examples_basic__clioption_box(o_2, _ctx), _ctx); /*10001*/
  _b_x956_962 = kk_string_unbox(_x_x5093); /*string*/
  kk_std_core_types__list _b_x968_970;
  kk_std_core_types__list _x_x5097;
  kk_box_t _x_x5098;
  kk_std_core_types__tuple2 _x_x5099 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x956_962), kk_string_box(_y_x10816), _ctx); /*(10037, 10038)*/
  _x_x5098 = kk_std_core_types__tuple2_box(_x_x5099, _ctx); /*10021*/
  _x_x5097 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5098, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x968_970 = kk_std_core_list_append(_y_x10812, _x_x5097, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11263 = kk_Unit;
  kk_unit_t _brw_x2565 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x968_970, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2565;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5100 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11159_fun5101(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5100); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11158(remaining, x_11263, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11160_fun5113__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11160_fun5113(kk_function_t _fself, kk_box_t _b_x982, kk_box_t _b_x983, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11160_fun5113(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11160_fun5113, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11160_fun5113(kk_function_t _fself, kk_box_t _b_x982, kk_box_t _b_x983, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5114;
  kk_std_core_types__maybe _match_x2563 = kk_std_core_types__maybe_unbox(_b_x982, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2563, _ctx)) {
    kk_box_t _box_x975 = _match_x2563._cons.Just.value;
    kk_string_t x_2 = kk_string_unbox(_box_x975);
    kk_string_dup(x_2, _ctx);
    kk_std_core_types__maybe_drop(_match_x2563, _ctx);
    kk_box_drop(_b_x983, _ctx);
    _x_x5114 = x_2; /*string*/
  }
  else {
    kk_string_t _b_x976_988;
    kk_string_t _x_x5115;
    kk_define_string_literal(static, _s_x5116, 22, "unexpected Nothing in ", _ctx)
    _x_x5115 = kk_string_dup(_s_x5116, _ctx); /*string*/
    kk_string_t _x_x5117 = kk_string_unbox(_b_x983); /*string*/
    _b_x976_988 = kk_std_core_types__lp__plus__plus__rp_(_x_x5115, _x_x5117, _ctx); /*string*/
    kk_box_t _x_x5118 = kk_std_core_exn_throw(_b_x976_988, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5114 = kk_string_unbox(_x_x5118); /*string*/
  }
  return kk_string_box(_x_x5114);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11160_fun5120__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10812;
  kk_examples_basic__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11160_fun5120(kk_function_t _fself, kk_box_t _b_x993, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11160_fun5120(kk_std_core_types__list _y_x10812, kk_examples_basic__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11160_fun5120__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11160_fun5120__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11160_fun5120, kk_context());
  _self->_y_x10812 = _y_x10812;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11160_fun5120(kk_function_t _fself, kk_box_t _b_x993, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11160_fun5120__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11160_fun5120__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10812 = _self->_y_x10812; /* list<(string, string)> */
  kk_examples_basic__clioption o_2 = _self->o_2; /* examples/basic/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10812, _ctx);kk_examples_basic__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10816_995 = kk_string_unbox(_b_x993); /*string*/;
  kk_unit_t _x_x5121 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11159(_y_x10812, o_2, options, remaining, _y_x10816_995, _ctx);
  return kk_unit_box(_x_x5121);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11160(kk_std_core_types__list _y_x10812, kk_examples_basic__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10815, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_20_11073 = kk_std_core_list__index(_y_x10815, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11_11074;
  kk_string_t _x_x5103;
  kk_define_string_literal(static, _s_x5104, 17, "examples/basic.kk", _ctx)
  _x_x5103 = kk_string_dup(_s_x5104, _ctx); /*string*/
  kk_string_t _x_x5105;
  kk_string_t _x_x5106;
  kk_define_string_literal(static, _s_x5107, 1, "(", _ctx)
  _x_x5106 = kk_string_dup(_s_x5107, _ctx); /*string*/
  kk_string_t _x_x5108;
  kk_string_t _x_x5109 = kk_std_core_int_show(kk_integer_from_small(793), _ctx); /*string*/
  kk_string_t _x_x5110;
  kk_define_string_literal(static, _s_x5111, 1, ")", _ctx)
  _x_x5110 = kk_string_dup(_s_x5111, _ctx); /*string*/
  _x_x5108 = kk_std_core_types__lp__plus__plus__rp_(_x_x5109, _x_x5110, _ctx); /*string*/
  _x_x5105 = kk_std_core_types__lp__plus__plus__rp_(_x_x5106, _x_x5108, _ctx); /*string*/
  _x_x2_11_11074 = kk_std_core_types__lp__plus__plus__rp_(_x_x5103, _x_x5105, _ctx); /*string*/
  kk_ssize_t _b_x978_984 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11265;
  kk_box_t _x_x5112 = kk_std_core_hnd__open_at2(_b_x978_984, kk_examples_basic__new_mlift_hc__parse__loop_11160_fun5113(_ctx), kk_std_core_types__maybe_box(_x_x1_20_11073, _ctx), kk_string_box(_x_x2_11_11074), _ctx); /*10002*/
  x_11265 = kk_string_unbox(_x_x5112); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11265, _ctx);
    kk_box_t _x_x5119 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11160_fun5120(_y_x10812, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5119); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11159(_y_x10812, o_2, options, remaining, x_11265, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11161_fun5125__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10812;
  kk_examples_basic__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11161_fun5125(kk_function_t _fself, kk_box_t _b_x1001, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11161_fun5125(kk_std_core_types__list _y_x10812, kk_examples_basic__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11161_fun5125__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11161_fun5125__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11161_fun5125, kk_context());
  _self->_y_x10812 = _y_x10812;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11161_fun5125(kk_function_t _fself, kk_box_t _b_x1001, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11161_fun5125__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11161_fun5125__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10812 = _self->_y_x10812; /* list<(string, string)> */
  kk_examples_basic__clioption o_2 = _self->o_2; /* examples/basic/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10812, _ctx);kk_examples_basic__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10815_1003 = kk_std_core_types__list_unbox(_b_x1001, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5126 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11160(_y_x10812, o_2, options, remaining, _y_x10815_1003, _ctx);
  return kk_unit_box(_x_x5126);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11161(kk_examples_basic__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10812, kk_context_t* _ctx) { /* forall<h> (o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11267;
  kk_box_t _x_x5122;
  kk_ref_t _x_x5123 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5122 = kk_ref_get(_x_x5123,kk_context()); /*10000*/
  x_11267 = kk_std_core_types__list_unbox(_x_x5122, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11267, _ctx);
    kk_box_t _x_x5124 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11161_fun5125(_y_x10812, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5124); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11160(_y_x10812, o_2, options, remaining, x_11267, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11162_fun5135__t {
  struct kk_function_s _base;
  kk_examples_basic__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11162_fun5135(kk_function_t _fself, kk_box_t _b_x1011, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11162_fun5135(kk_examples_basic__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11162_fun5135__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11162_fun5135__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11162_fun5135, kk_context());
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11162_fun5135(kk_function_t _fself, kk_box_t _b_x1011, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11162_fun5135__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11162_fun5135__t*, _fself, _ctx);
  kk_examples_basic__clioption o_2 = _self->o_2; /* examples/basic/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_examples_basic__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10812_1015 = kk_std_core_types__list_unbox(_b_x1011, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5136 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11161(o_2, options, remaining, _y_x10812_1015, _ctx);
  return kk_unit_box(_x_x5136);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11162(kk_ref_t error, kk_examples_basic__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_std_core_types__list _y_x10810, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@5 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2556;
  kk_integer_t _brw_x2559 = kk_std_core_list__lift_length_6003(_y_x10810, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2560 = kk_integer_eq_borrow(_brw_x2559,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2559, _ctx);
  _match_x2556 = _brw_x2560; /*bool*/
  if (_match_x2556) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_2, (KK_I32(4)), _ctx);
    kk_string_t _b_x1005_1013;
    kk_string_t _x_x5127;
    kk_define_string_literal(static, _s_x5128, 8, "option -", _ctx)
    _x_x5127 = kk_string_dup(_s_x5128, _ctx); /*string*/
    kk_string_t _x_x5129;
    kk_string_t _x_x5130;
    kk_define_string_literal(static, _s_x5131, 17, " requires a value", _ctx)
    _x_x5130 = kk_string_dup(_s_x5131, _ctx); /*string*/
    _x_x5129 = kk_std_core_types__lp__plus__plus__rp_(s_5, _x_x5130, _ctx); /*string*/
    _b_x1005_1013 = kk_std_core_types__lp__plus__plus__rp_(_x_x5127, _x_x5129, _ctx); /*string*/
    kk_unit_t _brw_x2558 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1005_1013)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2558; return kk_Unit;
  }
  {
    kk_string_drop(s_5, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11269;
    kk_box_t _x_x5132;
    kk_ref_t _x_x5133 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x5132 = kk_ref_get(_x_x5133,kk_context()); /*10000*/
    x_11269 = kk_std_core_types__list_unbox(_x_x5132, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11269, _ctx);
      kk_box_t _x_x5134 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11162_fun5135(o_2, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5134); return kk_Unit;
    }
    {
      kk_examples_basic__mlift_hc__parse__loop_11161(o_2, options, remaining, x_11269, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11163_fun5138__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11163_fun5138(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11163_fun5138(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11163_fun5138, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11163_fun5138(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11271 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<examples/basic/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5139 = kk_std_core_hnd__as_Ev(ev_11271, _ctx);
    kk_box_t _box_x1016 = _con_x5139->hnd;
    int32_t m = _con_x5139->marker;
    kk_examples_basic__hica_brk h = kk_examples_basic__hica_brk_unbox(_box_x1016, KK_BORROWED, _ctx);
    kk_examples_basic__hica_brk_dup(h, _ctx);
    {
      struct kk_examples_basic__Hnd_hica_brk* _con_x5140 = kk_examples_basic__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5140->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5140->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1019, (_fun_unbox_x1019, m, ev_11271, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11163(kk_unit_t wild___6, kk_context_t* _ctx) { /* forall<h> (wild_@6 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1022_1024 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5137 = kk_std_core_hnd__open_at0(_b_x1022_1024, kk_examples_basic__new_mlift_hc__parse__loop_11163_fun5138(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5137); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11164_fun5142__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11164_fun5142(kk_function_t _fself, kk_box_t _b_x1031, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11164_fun5142(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11164_fun5142, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11164_fun5142(kk_function_t _fself, kk_box_t _b_x1031, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_1033 = kk_Unit;
  kk_unit_unbox(_b_x1031);
  kk_unit_t _x_x5143 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11163(wild___6_1033, _ctx);
  return kk_unit_box(_x_x5143);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11164(kk_ref_t sub__args, kk_std_core_types__list _y_x10825, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11273 = kk_Unit;
  kk_unit_t _brw_x2555 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10825, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2555;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5141 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11164_fun5142(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5141); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11163(x_11273, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11165_fun5146__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11165_fun5146(kk_function_t _fself, kk_box_t _b_x1039, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11165_fun5146(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11165_fun5146__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11165_fun5146__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11165_fun5146, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11165_fun5146(kk_function_t _fself, kk_box_t _b_x1039, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11165_fun5146__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11165_fun5146__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10825_1041 = kk_std_core_types__list_unbox(_b_x1039, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5147 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11164(sub__args, _y_x10825_1041, _ctx);
  return kk_unit_box(_x_x5147);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11165(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11275;
  kk_box_t _x_x5144 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11275 = kk_std_core_types__list_unbox(_x_x5144, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11275, _ctx);
    kk_box_t _x_x5145 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11165_fun5146(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5145); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11164(sub__args, x_11275, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11166(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10829, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1045_1047;
  kk_std_core_types__list _x_x5148 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1045_1047 = kk_std_core_list_append(_y_x10829, _x_x5148, _ctx); /*list<string>*/
  kk_unit_t _brw_x2552 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1045_1047, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2552; return kk_Unit;
}
 
// monadic lift

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11167(kk_ref_t flags, kk_string_t name_0_0_0, kk_std_core_types__list _y_x10835, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1053_1055;
  kk_std_core_types__list _x_x5149 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1053_1055 = kk_std_core_list_append(_y_x10835, _x_x5149, _ctx); /*list<string>*/
  kk_unit_t _brw_x2551 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1053_1055, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2551; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5152__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11169_fun5152(kk_function_t _fself, kk_std_core_types__list _y_x10845, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11169_fun5152(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5152__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5152__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11169_fun5152, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11169_fun5152(kk_function_t _fself, kk_std_core_types__list _y_x10845, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5152__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5152__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1067_1069 = kk_std_core_list_drop(_y_x10845, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2549 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1067_1069, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2549; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5154__t {
  struct kk_function_s _base;
  kk_function_t next_11278;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11169_fun5154(kk_function_t _fself, kk_box_t _b_x1071, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11169_fun5154(kk_function_t next_11278, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5154__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5154__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11169_fun5154, kk_context());
  _self->next_11278 = next_11278;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11169_fun5154(kk_function_t _fself, kk_box_t _b_x1071, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5154__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11169_fun5154__t*, _fself, _ctx);
  kk_function_t next_11278 = _self->next_11278; /* (list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11278, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5155 = kk_Unit;
  kk_std_core_types__list _x_x5156 = kk_std_core_types__list_unbox(_b_x1071, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11278, (next_11278, _x_x5156, _ctx), _ctx);
  return kk_unit_box(_x_x5155);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11169(kk_ref_t remaining, kk_unit_t wild___3_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11277;
  kk_box_t _x_x5150;
  kk_ref_t _x_x5151 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5150 = kk_ref_get(_x_x5151,kk_context()); /*10000*/
  x_11277 = kk_std_core_types__list_unbox(_x_x5150, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11278 = kk_examples_basic__new_mlift_hc__parse__loop_11169_fun5152(remaining, _ctx); /*(list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11277, _ctx);
    kk_box_t _x_x5153 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11169_fun5154(next_11278, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5153); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11278, (next_11278, x_11277, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11170_fun5161__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11170_fun5161(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11170_fun5161(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11170_fun5161__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11170_fun5161__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11170_fun5161, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11170_fun5161(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11170_fun5161__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11170_fun5161__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_0_1088 = kk_Unit;
  kk_unit_unbox(_b_x1086);
  kk_unit_t _x_x5162 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11169(remaining, wild___3_0_1088, _ctx);
  return kk_unit_box(_x_x5162);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11170(kk_std_core_types__list _y_x10839, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10843, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1078_1080;
  kk_std_core_types__list _x_x5157;
  kk_box_t _x_x5158;
  kk_std_core_types__tuple2 _x_x5159 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0_0), kk_string_box(_y_x10843), _ctx); /*(10037, 10038)*/
  _x_x5158 = kk_std_core_types__tuple2_box(_x_x5159, _ctx); /*10021*/
  _x_x5157 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5158, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1078_1080 = kk_std_core_list_append(_y_x10839, _x_x5157, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11281 = kk_Unit;
  kk_unit_t _brw_x2547 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1078_1080, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2547;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5160 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11170_fun5161(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5160); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11169(remaining, x_11281, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11171_fun5173__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11171_fun5173(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11171_fun5173(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11171_fun5173, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11171_fun5173(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5174;
  kk_std_core_types__maybe _match_x2545 = kk_std_core_types__maybe_unbox(_b_x1096, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2545, _ctx)) {
    kk_box_t _box_x1089 = _match_x2545._cons.Just.value;
    kk_string_t x_3 = kk_string_unbox(_box_x1089);
    kk_string_dup(x_3, _ctx);
    kk_std_core_types__maybe_drop(_match_x2545, _ctx);
    kk_box_drop(_b_x1097, _ctx);
    _x_x5174 = x_3; /*string*/
  }
  else {
    kk_string_t _b_x1090_1102;
    kk_string_t _x_x5175;
    kk_define_string_literal(static, _s_x5176, 22, "unexpected Nothing in ", _ctx)
    _x_x5175 = kk_string_dup(_s_x5176, _ctx); /*string*/
    kk_string_t _x_x5177 = kk_string_unbox(_b_x1097); /*string*/
    _b_x1090_1102 = kk_std_core_types__lp__plus__plus__rp_(_x_x5175, _x_x5177, _ctx); /*string*/
    kk_box_t _x_x5178 = kk_std_core_exn_throw(_b_x1090_1102, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5174 = kk_string_unbox(_x_x5178); /*string*/
  }
  return kk_string_box(_x_x5174);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11171_fun5180__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10839;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11171_fun5180(kk_function_t _fself, kk_box_t _b_x1107, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11171_fun5180(kk_std_core_types__list _y_x10839, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11171_fun5180__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11171_fun5180__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11171_fun5180, kk_context());
  _self->_y_x10839 = _y_x10839;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11171_fun5180(kk_function_t _fself, kk_box_t _b_x1107, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11171_fun5180__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11171_fun5180__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10839 = _self->_y_x10839; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10839, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10843_1109 = kk_string_unbox(_b_x1107); /*string*/;
  kk_unit_t _x_x5181 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11170(_y_x10839, name_0_0_0, options, remaining, _y_x10843_1109, _ctx);
  return kk_unit_box(_x_x5181);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11171(kk_std_core_types__list _y_x10839, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10842, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_30_11088 = kk_std_core_list__index(_y_x10842, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_16_11089;
  kk_string_t _x_x5163;
  kk_define_string_literal(static, _s_x5164, 17, "examples/basic.kk", _ctx)
  _x_x5163 = kk_string_dup(_s_x5164, _ctx); /*string*/
  kk_string_t _x_x5165;
  kk_string_t _x_x5166;
  kk_define_string_literal(static, _s_x5167, 1, "(", _ctx)
  _x_x5166 = kk_string_dup(_s_x5167, _ctx); /*string*/
  kk_string_t _x_x5168;
  kk_string_t _x_x5169 = kk_std_core_int_show(kk_integer_from_small(778), _ctx); /*string*/
  kk_string_t _x_x5170;
  kk_define_string_literal(static, _s_x5171, 1, ")", _ctx)
  _x_x5170 = kk_string_dup(_s_x5171, _ctx); /*string*/
  _x_x5168 = kk_std_core_types__lp__plus__plus__rp_(_x_x5169, _x_x5170, _ctx); /*string*/
  _x_x5165 = kk_std_core_types__lp__plus__plus__rp_(_x_x5166, _x_x5168, _ctx); /*string*/
  _x_x2_16_11089 = kk_std_core_types__lp__plus__plus__rp_(_x_x5163, _x_x5165, _ctx); /*string*/
  kk_ssize_t _b_x1092_1098 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11283;
  kk_box_t _x_x5172 = kk_std_core_hnd__open_at2(_b_x1092_1098, kk_examples_basic__new_mlift_hc__parse__loop_11171_fun5173(_ctx), kk_std_core_types__maybe_box(_x_x1_30_11088, _ctx), kk_string_box(_x_x2_16_11089), _ctx); /*10002*/
  x_11283 = kk_string_unbox(_x_x5172); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11283, _ctx);
    kk_box_t _x_x5179 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11171_fun5180(_y_x10839, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5179); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11170(_y_x10839, name_0_0_0, options, remaining, x_11283, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11172_fun5185__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10839;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11172_fun5185(kk_function_t _fself, kk_box_t _b_x1115, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11172_fun5185(kk_std_core_types__list _y_x10839, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11172_fun5185__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11172_fun5185__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11172_fun5185, kk_context());
  _self->_y_x10839 = _y_x10839;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11172_fun5185(kk_function_t _fself, kk_box_t _b_x1115, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11172_fun5185__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11172_fun5185__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10839 = _self->_y_x10839; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10839, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10842_1117 = kk_std_core_types__list_unbox(_b_x1115, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5186 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11171(_y_x10839, name_0_0_0, options, remaining, _y_x10842_1117, _ctx);
  return kk_unit_box(_x_x5186);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11172(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10839, kk_context_t* _ctx) { /* forall<h> (name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11285;
  kk_box_t _x_x5182;
  kk_ref_t _x_x5183 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5182 = kk_ref_get(_x_x5183,kk_context()); /*10000*/
  x_11285 = kk_std_core_types__list_unbox(_x_x5182, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11285, _ctx);
    kk_box_t _x_x5184 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11172_fun5185(_y_x10839, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5184); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11171(_y_x10839, name_0_0_0, options, remaining, x_11285, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11173_fun5195__t {
  struct kk_function_s _base;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11173_fun5195(kk_function_t _fself, kk_box_t _b_x1125, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11173_fun5195(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11173_fun5195__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11173_fun5195__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11173_fun5195, kk_context());
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11173_fun5195(kk_function_t _fself, kk_box_t _b_x1125, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11173_fun5195__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11173_fun5195__t*, _fself, _ctx);
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10839_1129 = kk_std_core_types__list_unbox(_b_x1125, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5196 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11172(name_0_0_0, options, remaining, _y_x10839_1129, _ctx);
  return kk_unit_box(_x_x5196);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11173(kk_ref_t error, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10837, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2538;
  kk_integer_t _brw_x2541 = kk_std_core_list__lift_length_6003(_y_x10837, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2542 = kk_integer_eq_borrow(_brw_x2541,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2541, _ctx);
  _match_x2538 = _brw_x2542; /*bool*/
  if (_match_x2538) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x1119_1127;
    kk_string_t _x_x5187;
    kk_define_string_literal(static, _s_x5188, 9, "option --", _ctx)
    _x_x5187 = kk_string_dup(_s_x5188, _ctx); /*string*/
    kk_string_t _x_x5189;
    kk_string_t _x_x5190;
    kk_define_string_literal(static, _s_x5191, 17, " requires a value", _ctx)
    _x_x5190 = kk_string_dup(_s_x5191, _ctx); /*string*/
    _x_x5189 = kk_std_core_types__lp__plus__plus__rp_(name_0_0_0, _x_x5190, _ctx); /*string*/
    _b_x1119_1127 = kk_std_core_types__lp__plus__plus__rp_(_x_x5187, _x_x5189, _ctx); /*string*/
    kk_unit_t _brw_x2540 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1119_1127)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2540; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11287;
    kk_box_t _x_x5192;
    kk_ref_t _x_x5193 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x5192 = kk_ref_get(_x_x5193,kk_context()); /*10000*/
    x_11287 = kk_std_core_types__list_unbox(_x_x5192, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11287, _ctx);
      kk_box_t _x_x5194 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11173_fun5195(name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5194); return kk_Unit;
    }
    {
      kk_examples_basic__mlift_hc__parse__loop_11172(name_0_0_0, options, remaining, x_11287, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11174_fun5198__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11174_fun5198(kk_function_t _fself, kk_box_t _b_x1132, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11174_fun5198(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11174_fun5198, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11174_fun5198(kk_function_t _fself, kk_box_t _b_x1132, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5199;
  kk_examples_basic__cliflag _match_x2537 = kk_examples_basic__cliflag_unbox(_b_x1132, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x5200 = kk_examples_basic__as_Cliflag(_match_x2537, _ctx);
    kk_string_t _x_19 = _con_x5200->flag__name;
    kk_string_t _pat_0_40 = _con_x5200->flag__short;
    kk_string_t _pat_1_30 = _con_x5200->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2537, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2537, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2537, _ctx);
    }
    _x_x5199 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5199);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11174(kk_examples_basic__cliflag f_0_0, kk_ref_t flags, kk_std_core_types__list _y_x10851, kk_context_t* _ctx) { /* forall<h> (f@0@0 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x1133_1135;
  kk_box_t _x_x5197 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11174_fun5198(_ctx), kk_examples_basic__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1133_1135 = kk_string_unbox(_x_x5197); /*string*/
  kk_std_core_types__list _b_x1141_1143;
  kk_std_core_types__list _x_x5201 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1133_1135), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1141_1143 = kk_std_core_list_append(_y_x10851, _x_x5201, _ctx); /*list<string>*/
  kk_unit_t _brw_x2536 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1141_1143, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2536; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5204__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11176_fun5204(kk_function_t _fself, kk_std_core_types__list _y_x10861, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11176_fun5204(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5204__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5204__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11176_fun5204, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11176_fun5204(kk_function_t _fself, kk_std_core_types__list _y_x10861, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5204__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5204__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1153_1155 = kk_std_core_list_drop(_y_x10861, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2534 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1153_1155, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2534; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5206__t {
  struct kk_function_s _base;
  kk_function_t next_11290;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11176_fun5206(kk_function_t _fself, kk_box_t _b_x1157, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11176_fun5206(kk_function_t next_11290, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5206__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5206__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11176_fun5206, kk_context());
  _self->next_11290 = next_11290;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11176_fun5206(kk_function_t _fself, kk_box_t _b_x1157, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5206__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11176_fun5206__t*, _fself, _ctx);
  kk_function_t next_11290 = _self->next_11290; /* (list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11290, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5207 = kk_Unit;
  kk_std_core_types__list _x_x5208 = kk_std_core_types__list_unbox(_b_x1157, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11290, (next_11290, _x_x5208, _ctx), _ctx);
  return kk_unit_box(_x_x5207);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11176(kk_ref_t remaining, kk_unit_t wild___4_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11289;
  kk_box_t _x_x5202;
  kk_ref_t _x_x5203 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5202 = kk_ref_get(_x_x5203,kk_context()); /*10000*/
  x_11289 = kk_std_core_types__list_unbox(_x_x5202, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11290 = kk_examples_basic__new_mlift_hc__parse__loop_11176_fun5204(remaining, _ctx); /*(list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11289, _ctx);
    kk_box_t _x_x5205 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11176_fun5206(next_11290, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5205); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11290, (next_11290, x_11289, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11177_fun5210__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11177_fun5210(kk_function_t _fself, kk_box_t _b_x1161, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11177_fun5210(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11177_fun5210, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11177_fun5210(kk_function_t _fself, kk_box_t _b_x1161, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5211;
  kk_examples_basic__clioption _match_x2532 = kk_examples_basic__clioption_unbox(_b_x1161, KK_OWNED, _ctx); /*examples/basic/clioption*/;
  {
    struct kk_examples_basic_Clioption* _con_x5212 = kk_examples_basic__as_Clioption(_match_x2532, _ctx);
    kk_string_t _x_22 = _con_x5212->opt__name;
    kk_string_t _pat_0_43 = _con_x5212->opt__short;
    kk_string_t _pat_1_33 = _con_x5212->opt__help;
    kk_string_t _pat_2_16 = _con_x5212->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2532, _ctx)) {
      kk_string_drop(_pat_2_16, _ctx);
      kk_string_drop(_pat_1_33, _ctx);
      kk_string_drop(_pat_0_43, _ctx);
      kk_datatype_ptr_free(_match_x2532, _ctx);
    }
    else {
      kk_string_dup(_x_22, _ctx);
      kk_datatype_ptr_decref(_match_x2532, _ctx);
    }
    _x_x5211 = _x_22; /*string*/
  }
  return kk_string_box(_x_x5211);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11177_fun5217__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11177_fun5217(kk_function_t _fself, kk_box_t _b_x1178, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11177_fun5217(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11177_fun5217__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11177_fun5217__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11177_fun5217, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11177_fun5217(kk_function_t _fself, kk_box_t _b_x1178, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11177_fun5217__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11177_fun5217__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_0_1180 = kk_Unit;
  kk_unit_unbox(_b_x1178);
  kk_unit_t _x_x5218 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11176(remaining, wild___4_0_1180, _ctx);
  return kk_unit_box(_x_x5218);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11177(kk_std_core_types__list _y_x10855, kk_examples_basic__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10859, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x1162_1168;
  kk_box_t _x_x5209 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11177_fun5210(_ctx), kk_examples_basic__clioption_box(o_0_0, _ctx), _ctx); /*10001*/
  _b_x1162_1168 = kk_string_unbox(_x_x5209); /*string*/
  kk_std_core_types__list _b_x1174_1176;
  kk_std_core_types__list _x_x5213;
  kk_box_t _x_x5214;
  kk_std_core_types__tuple2 _x_x5215 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x1162_1168), kk_string_box(_y_x10859), _ctx); /*(10037, 10038)*/
  _x_x5214 = kk_std_core_types__tuple2_box(_x_x5215, _ctx); /*10021*/
  _x_x5213 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5214, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1174_1176 = kk_std_core_list_append(_y_x10855, _x_x5213, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11293 = kk_Unit;
  kk_unit_t _brw_x2531 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1174_1176, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2531;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5216 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11177_fun5217(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5216); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11176(remaining, x_11293, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11178_fun5229__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11178_fun5229(kk_function_t _fself, kk_box_t _b_x1188, kk_box_t _b_x1189, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11178_fun5229(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11178_fun5229, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11178_fun5229(kk_function_t _fself, kk_box_t _b_x1188, kk_box_t _b_x1189, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5230;
  kk_std_core_types__maybe _match_x2529 = kk_std_core_types__maybe_unbox(_b_x1188, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2529, _ctx)) {
    kk_box_t _box_x1181 = _match_x2529._cons.Just.value;
    kk_string_t x_4 = kk_string_unbox(_box_x1181);
    kk_string_dup(x_4, _ctx);
    kk_std_core_types__maybe_drop(_match_x2529, _ctx);
    kk_box_drop(_b_x1189, _ctx);
    _x_x5230 = x_4; /*string*/
  }
  else {
    kk_string_t _b_x1182_1194;
    kk_string_t _x_x5231;
    kk_define_string_literal(static, _s_x5232, 22, "unexpected Nothing in ", _ctx)
    _x_x5231 = kk_string_dup(_s_x5232, _ctx); /*string*/
    kk_string_t _x_x5233 = kk_string_unbox(_b_x1189); /*string*/
    _b_x1182_1194 = kk_std_core_types__lp__plus__plus__rp_(_x_x5231, _x_x5233, _ctx); /*string*/
    kk_box_t _x_x5234 = kk_std_core_exn_throw(_b_x1182_1194, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5230 = kk_string_unbox(_x_x5234); /*string*/
  }
  return kk_string_box(_x_x5230);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11178_fun5236__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10855;
  kk_examples_basic__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11178_fun5236(kk_function_t _fself, kk_box_t _b_x1199, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11178_fun5236(kk_std_core_types__list _y_x10855, kk_examples_basic__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11178_fun5236__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11178_fun5236__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11178_fun5236, kk_context());
  _self->_y_x10855 = _y_x10855;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11178_fun5236(kk_function_t _fself, kk_box_t _b_x1199, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11178_fun5236__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11178_fun5236__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10855 = _self->_y_x10855; /* list<(string, string)> */
  kk_examples_basic__clioption o_0_0 = _self->o_0_0; /* examples/basic/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10855, _ctx);kk_examples_basic__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10859_1201 = kk_string_unbox(_b_x1199); /*string*/;
  kk_unit_t _x_x5237 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11177(_y_x10855, o_0_0, options, remaining, _y_x10859_1201, _ctx);
  return kk_unit_box(_x_x5237);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11178(kk_std_core_types__list _y_x10855, kk_examples_basic__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10858, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_38_11100 = kk_std_core_list__index(_y_x10858, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_20_11101;
  kk_string_t _x_x5219;
  kk_define_string_literal(static, _s_x5220, 17, "examples/basic.kk", _ctx)
  _x_x5219 = kk_string_dup(_s_x5220, _ctx); /*string*/
  kk_string_t _x_x5221;
  kk_string_t _x_x5222;
  kk_define_string_literal(static, _s_x5223, 1, "(", _ctx)
  _x_x5222 = kk_string_dup(_s_x5223, _ctx); /*string*/
  kk_string_t _x_x5224;
  kk_string_t _x_x5225 = kk_std_core_int_show(kk_integer_from_small(793), _ctx); /*string*/
  kk_string_t _x_x5226;
  kk_define_string_literal(static, _s_x5227, 1, ")", _ctx)
  _x_x5226 = kk_string_dup(_s_x5227, _ctx); /*string*/
  _x_x5224 = kk_std_core_types__lp__plus__plus__rp_(_x_x5225, _x_x5226, _ctx); /*string*/
  _x_x5221 = kk_std_core_types__lp__plus__plus__rp_(_x_x5222, _x_x5224, _ctx); /*string*/
  _x_x2_20_11101 = kk_std_core_types__lp__plus__plus__rp_(_x_x5219, _x_x5221, _ctx); /*string*/
  kk_ssize_t _b_x1184_1190 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11295;
  kk_box_t _x_x5228 = kk_std_core_hnd__open_at2(_b_x1184_1190, kk_examples_basic__new_mlift_hc__parse__loop_11178_fun5229(_ctx), kk_std_core_types__maybe_box(_x_x1_38_11100, _ctx), kk_string_box(_x_x2_20_11101), _ctx); /*10002*/
  x_11295 = kk_string_unbox(_x_x5228); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11295, _ctx);
    kk_box_t _x_x5235 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11178_fun5236(_y_x10855, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5235); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11177(_y_x10855, o_0_0, options, remaining, x_11295, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11179_fun5241__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10855;
  kk_examples_basic__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11179_fun5241(kk_function_t _fself, kk_box_t _b_x1207, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11179_fun5241(kk_std_core_types__list _y_x10855, kk_examples_basic__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11179_fun5241__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11179_fun5241__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11179_fun5241, kk_context());
  _self->_y_x10855 = _y_x10855;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11179_fun5241(kk_function_t _fself, kk_box_t _b_x1207, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11179_fun5241__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11179_fun5241__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10855 = _self->_y_x10855; /* list<(string, string)> */
  kk_examples_basic__clioption o_0_0 = _self->o_0_0; /* examples/basic/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10855, _ctx);kk_examples_basic__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10858_1209 = kk_std_core_types__list_unbox(_b_x1207, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5242 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11178(_y_x10855, o_0_0, options, remaining, _y_x10858_1209, _ctx);
  return kk_unit_box(_x_x5242);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11179(kk_examples_basic__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10855, kk_context_t* _ctx) { /* forall<h> (o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11297;
  kk_box_t _x_x5238;
  kk_ref_t _x_x5239 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5238 = kk_ref_get(_x_x5239,kk_context()); /*10000*/
  x_11297 = kk_std_core_types__list_unbox(_x_x5238, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11297, _ctx);
    kk_box_t _x_x5240 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11179_fun5241(_y_x10855, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5240); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11178(_y_x10855, o_0_0, options, remaining, x_11297, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11180_fun5251__t {
  struct kk_function_s _base;
  kk_examples_basic__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11180_fun5251(kk_function_t _fself, kk_box_t _b_x1217, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11180_fun5251(kk_examples_basic__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11180_fun5251__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11180_fun5251__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11180_fun5251, kk_context());
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11180_fun5251(kk_function_t _fself, kk_box_t _b_x1217, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11180_fun5251__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11180_fun5251__t*, _fself, _ctx);
  kk_examples_basic__clioption o_0_0 = _self->o_0_0; /* examples/basic/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_examples_basic__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10855_1221 = kk_std_core_types__list_unbox(_b_x1217, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5252 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11179(o_0_0, options, remaining, _y_x10855_1221, _ctx);
  return kk_unit_box(_x_x5252);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11180(kk_ref_t error, kk_examples_basic__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_std_core_types__list _y_x10853, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2522;
  kk_integer_t _brw_x2525 = kk_std_core_list__lift_length_6003(_y_x10853, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2526 = kk_integer_eq_borrow(_brw_x2525,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2525, _ctx);
  _match_x2522 = _brw_x2526; /*bool*/
  if (_match_x2522) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_0_0, (KK_I32(4)), _ctx);
    kk_string_t _b_x1211_1219;
    kk_string_t _x_x5243;
    kk_define_string_literal(static, _s_x5244, 8, "option -", _ctx)
    _x_x5243 = kk_string_dup(_s_x5244, _ctx); /*string*/
    kk_string_t _x_x5245;
    kk_string_t _x_x5246;
    kk_define_string_literal(static, _s_x5247, 17, " requires a value", _ctx)
    _x_x5246 = kk_string_dup(_s_x5247, _ctx); /*string*/
    _x_x5245 = kk_std_core_types__lp__plus__plus__rp_(s_0_0, _x_x5246, _ctx); /*string*/
    _b_x1211_1219 = kk_std_core_types__lp__plus__plus__rp_(_x_x5243, _x_x5245, _ctx); /*string*/
    kk_unit_t _brw_x2524 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1211_1219)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2524; return kk_Unit;
  }
  {
    kk_string_drop(s_0_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11299;
    kk_box_t _x_x5248;
    kk_ref_t _x_x5249 = kk_ref_dup(options, _ctx); /*local-var<23359,list<(string, string)>>*/
    _x_x5248 = kk_ref_get(_x_x5249,kk_context()); /*10000*/
    x_11299 = kk_std_core_types__list_unbox(_x_x5248, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11299, _ctx);
      kk_box_t _x_x5250 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11180_fun5251(o_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5250); return kk_Unit;
    }
    {
      kk_examples_basic__mlift_hc__parse__loop_11179(o_0_0, options, remaining, x_11299, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11181_fun5254__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11181_fun5254(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11181_fun5254(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11181_fun5254, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11181_fun5254(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11301 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<examples/basic/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5255 = kk_std_core_hnd__as_Ev(ev_11301, _ctx);
    kk_box_t _box_x1222 = _con_x5255->hnd;
    int32_t m = _con_x5255->marker;
    kk_examples_basic__hica_brk h = kk_examples_basic__hica_brk_unbox(_box_x1222, KK_BORROWED, _ctx);
    kk_examples_basic__hica_brk_dup(h, _ctx);
    {
      struct kk_examples_basic__Hnd_hica_brk* _con_x5256 = kk_examples_basic__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5256->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5256->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1225, (_fun_unbox_x1225, m, ev_11301, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11181(kk_unit_t wild___6_0, kk_context_t* _ctx) { /* forall<h> (wild_@6@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1228_1230 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5253 = kk_std_core_hnd__open_at0(_b_x1228_1230, kk_examples_basic__new_mlift_hc__parse__loop_11181_fun5254(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5253); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11182_fun5258__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11182_fun5258(kk_function_t _fself, kk_box_t _b_x1237, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11182_fun5258(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11182_fun5258, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11182_fun5258(kk_function_t _fself, kk_box_t _b_x1237, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_0_1239 = kk_Unit;
  kk_unit_unbox(_b_x1237);
  kk_unit_t _x_x5259 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11181(wild___6_0_1239, _ctx);
  return kk_unit_box(_x_x5259);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11182(kk_ref_t sub__args, kk_std_core_types__list _y_x10868, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11303 = kk_Unit;
  kk_unit_t _brw_x2521 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10868, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2521;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5257 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11182_fun5258(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5257); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11181(x_11303, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11183_fun5262__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11183_fun5262(kk_function_t _fself, kk_box_t _b_x1245, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11183_fun5262(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11183_fun5262__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11183_fun5262__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11183_fun5262, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11183_fun5262(kk_function_t _fself, kk_box_t _b_x1245, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11183_fun5262__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11183_fun5262__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10868_1247 = kk_std_core_types__list_unbox(_b_x1245, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5263 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11182(sub__args, _y_x10868_1247, _ctx);
  return kk_unit_box(_x_x5263);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11183(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11305;
  kk_box_t _x_x5260 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11305 = kk_std_core_types__list_unbox(_x_x5260, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11305, _ctx);
    kk_box_t _x_x5261 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11183_fun5262(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5261); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11182(sub__args, x_11305, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11184(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10872, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1251_1253;
  kk_std_core_types__list _x_x5264 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1251_1253 = kk_std_core_list_append(_y_x10872, _x_x5264, _ctx); /*list<string>*/
  kk_unit_t _brw_x2518 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1251_1253, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2518; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5272__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5272(kk_function_t _fself, kk_box_t _b_x1261, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5272(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5272, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5272(kk_function_t _fself, kk_box_t _b_x1261, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_1751 = kk_Unit;
  kk_unit_unbox(_b_x1261);
  kk_unit_t _x_x5273 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11140(wild___0_1751, _ctx);
  return kk_unit_box(_x_x5273);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5281__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5281(kk_function_t _fself, kk_box_t _b_x1267, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5281(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5281, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5281(kk_function_t _fself, kk_box_t _b_x1267, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_0_1752 = kk_Unit;
  kk_unit_unbox(_b_x1267);
  kk_unit_t _x_x5282 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11141(wild___0_0_1752, _ctx);
  return kk_unit_box(_x_x5282);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5290__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5290(kk_function_t _fself, kk_box_t _b_x1273, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5290(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5290, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5290(kk_function_t _fself, kk_box_t _b_x1273, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___1_1753 = kk_Unit;
  kk_unit_unbox(_b_x1273);
  kk_unit_t _x_x5291 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11142(wild___1_1753, _ctx);
  return kk_unit_box(_x_x5291);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5298__t {
  struct kk_function_s _base;
  kk_ref_t positionals;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5298(kk_function_t _fself, kk_box_t _b_x1279, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5298(kk_ref_t positionals, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5298__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5298__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5298, kk_context());
  _self->positionals = positionals;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5298(kk_function_t _fself, kk_box_t _b_x1279, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5298__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5298__t*, _fself, _ctx);
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10778_1754 = kk_std_core_types__list_unbox(_b_x1279, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5299 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11145(positionals, remaining, _y_x10778_1754, _ctx);
  return kk_unit_box(_x_x5299);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5304__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5304(kk_function_t _fself, kk_box_t _b_x1283, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5304(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5304, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5304(kk_function_t _fself, kk_box_t _b_x1283, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5305;
  kk_std_core_types__maybe maybe_1772 = kk_std_core_types__maybe_unbox(_b_x1283, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1772, _ctx)) {
    kk_box_t _box_x1280 = maybe_1772._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1772, _ctx);
    _x_x5305 = true; /*bool*/
  }
  else {
    _x_x5305 = false; /*bool*/
  }
  return kk_bool_box(_x_x5305);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5310__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5310(kk_function_t _fself, kk_box_t _b_x1288, kk_box_t _b_x1289, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5310(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5310, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5310(kk_function_t _fself, kk_box_t _b_x1288, kk_box_t _b_x1289, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_0_10704;
  kk_string_t _x_x5311;
  kk_box_t _x_x5312 = kk_box_dup(_b_x1288, _ctx); /*10000*/
  _x_x5311 = kk_string_unbox(_x_x5312); /*string*/
  kk_string_t _x_x5313;
  kk_box_t _x_x5314 = kk_box_dup(_b_x1289, _ctx); /*10001*/
  _x_x5313 = kk_string_unbox(_x_x5314); /*string*/
  maybe_0_10704 = kk_std_core_sslice_starts_with(_x_x5311, _x_x5313, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5315;
  if (kk_std_core_types__is_Just(maybe_0_10704, _ctx)) {
    kk_box_t _box_x1284 = maybe_0_10704._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_0_10704, _ctx);
    kk_std_core_types__list _x_x5316;
    kk_std_core_types__list _x_x5317;
    kk_string_t _x_x5318 = kk_string_unbox(_b_x1288); /*string*/
    _x_x5317 = kk_std_core_string_list(_x_x5318, _ctx); /*list<char>*/
    kk_integer_t _x_x5319;
    kk_string_t _x_x5320 = kk_string_unbox(_b_x1289); /*string*/
    _x_x5319 = kk_std_core_string_chars_fs_count(_x_x5320, _ctx); /*int*/
    _x_x5316 = kk_std_core_list_drop(_x_x5317, _x_x5319, _ctx); /*list<10001>*/
    _x_x5315 = kk_std_core_string_listchar_fs_string(_x_x5316, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1289, _ctx);
    _x_x5315 = kk_string_unbox(_b_x1288); /*string*/
  }
  return kk_string_box(_x_x5315);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5328__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5328(kk_function_t _fself, kk_box_t _b_x1297, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5328(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5328, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5328(kk_function_t _fself, kk_box_t _b_x1297, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5329;
  kk_char_t _x_x5330 = kk_char_unbox(_b_x1297, KK_OWNED, _ctx); /*char*/
  _x_x5329 = kk_std_core_string_char_fs_string(_x_x5330, _ctx); /*string*/
  return kk_string_box(_x_x5329);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5332__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5332(kk_function_t _fself, kk_box_t _b_x1301, kk_box_t _b_x1302, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5332(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5332, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5332(kk_function_t _fself, kk_box_t _b_x1301, kk_box_t _b_x1302, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011;
  kk_string_t _x_x5333 = kk_string_unbox(_b_x1301); /*string*/
  kk_string_t _x_x5334 = kk_string_unbox(_b_x1302); /*string*/
  v_10011 = kk_string_splitv(_x_x5333,_x_x5334,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x5335 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x5335, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5340__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t options;
  kk_examples_basic__clispec spec;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5340(kk_function_t _fself, kk_box_t _b_x1311, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5340(kk_ref_t error, kk_ref_t options, kk_examples_basic__clispec spec, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5340__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5340__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5340, kk_context());
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5340(kk_function_t _fself, kk_box_t _b_x1311, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5340__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5340__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_examples_basic__clispec spec = _self->spec; /* examples/basic/clispec */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_examples_basic__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list _c_x10784_1755 = kk_std_core_types__list_unbox(_b_x1311, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5341 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11148(error, options, spec, _c_x10784_1755, _ctx);
  return kk_unit_box(_x_x5341);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5346__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5346(kk_function_t _fself, kk_box_t _b_x1315, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5346(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5346, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5346(kk_function_t _fself, kk_box_t _b_x1315, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5347;
  kk_std_core_types__maybe maybe_1_1773 = kk_std_core_types__maybe_unbox(_b_x1315, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1_1773, _ctx)) {
    kk_box_t _box_x1312 = maybe_1_1773._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1_1773, _ctx);
    _x_x5347 = true; /*bool*/
  }
  else {
    _x_x5347 = false; /*bool*/
  }
  return kk_bool_box(_x_x5347);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5349__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5349(kk_function_t _fself, kk_box_t _b_x1320, kk_box_t _b_x1321, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5349(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5349, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5349(kk_function_t _fself, kk_box_t _b_x1320, kk_box_t _b_x1321, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_2_10706;
  kk_string_t _x_x5350;
  kk_box_t _x_x5351 = kk_box_dup(_b_x1320, _ctx); /*10000*/
  _x_x5350 = kk_string_unbox(_x_x5351); /*string*/
  kk_string_t _x_x5352;
  kk_box_t _x_x5353 = kk_box_dup(_b_x1321, _ctx); /*10001*/
  _x_x5352 = kk_string_unbox(_x_x5353); /*string*/
  maybe_2_10706 = kk_std_core_sslice_starts_with(_x_x5350, _x_x5352, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5354;
  if (kk_std_core_types__is_Just(maybe_2_10706, _ctx)) {
    kk_box_t _box_x1316 = maybe_2_10706._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_2_10706, _ctx);
    kk_std_core_types__list _x_x5355;
    kk_std_core_types__list _x_x5356;
    kk_string_t _x_x5357 = kk_string_unbox(_b_x1320); /*string*/
    _x_x5356 = kk_std_core_string_list(_x_x5357, _ctx); /*list<char>*/
    kk_integer_t _x_x5358;
    kk_string_t _x_x5359 = kk_string_unbox(_b_x1321); /*string*/
    _x_x5358 = kk_std_core_string_chars_fs_count(_x_x5359, _ctx); /*int*/
    _x_x5355 = kk_std_core_list_drop(_x_x5356, _x_x5358, _ctx); /*list<10001>*/
    _x_x5354 = kk_std_core_string_listchar_fs_string(_x_x5355, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1321, _ctx);
    _x_x5354 = kk_string_unbox(_b_x1320); /*string*/
  }
  return kk_string_box(_x_x5354);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5364__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5364(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5364(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5364, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5364(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5365;
  kk_examples_basic__clispec _match_x2506 = kk_examples_basic__clispec_unbox(_b_x1329, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5366 = kk_examples_basic__as_Clispec(_match_x2506, _ctx);
    kk_string_t _pat_0_11 = _con_x5366->app__name;
    kk_string_t _pat_1_8 = _con_x5366->app__version;
    kk_string_t _pat_2_2 = _con_x5366->app__about;
    kk_std_core_types__list _x_2 = _con_x5366->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x5366->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x5366->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5366->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2506, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_string_drop(_pat_2_2, _ctx);
      kk_string_drop(_pat_1_8, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2506, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2506, _ctx);
    }
    _x_x5365 = _x_2; /*list<examples/basic/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5365, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5370__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5370(kk_function_t _fself, kk_box_t _b_x1339, kk_box_t _b_x1340, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5370(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5370, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5372__t {
  struct kk_function_s _base;
  kk_string_t name_1_1775;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5372(kk_function_t _fself, kk_box_t _b_x1335, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5372(kk_string_t name_1_1775, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5372__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5372__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5372, kk_context());
  _self->name_1_1775 = name_1_1775;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5372(kk_function_t _fself, kk_box_t _b_x1335, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5372__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5372__t*, _fself, _ctx);
  kk_string_t name_1_1775 = _self->name_1_1775; /* string */
  kk_drop_match(_self, {kk_string_dup(name_1_1775, _ctx);}, {}, _ctx)
  kk_string_t _x_x5373;
  kk_examples_basic__cliflag _match_x2505 = kk_examples_basic__cliflag_unbox(_b_x1335, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x5374 = kk_examples_basic__as_Cliflag(_match_x2505, _ctx);
    kk_string_t _x_1 = _con_x5374->flag__name;
    kk_string_t _pat_0_10 = _con_x5374->flag__short;
    kk_string_t _pat_1_7 = _con_x5374->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2505, _ctx)) {
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_10, _ctx);
      kk_datatype_ptr_free(_match_x2505, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2505, _ctx);
    }
    _x_x5373 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x5373,name_1_1775,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5370(kk_function_t _fself, kk_box_t _b_x1339, kk_box_t _b_x1340, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5371;
  kk_std_core_types__list flags_0_1774 = kk_std_core_types__list_unbox(_b_x1339, KK_OWNED, _ctx); /*list<examples/basic/cliflag>*/;
  kk_string_t name_1_1775 = kk_string_unbox(_b_x1340); /*string*/;
  _x_x5371 = kk_std_core_list_find(flags_0_1774, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5372(name_1_1775, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5371, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5380__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5380(kk_function_t _fself, kk_std_core_types__list _y_x10792, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5380(kk_ref_t flags, kk_string_t name_0_0, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5380__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5380__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5380, kk_context());
  _self->flags = flags;
  _self->name_0_0 = name_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5380(kk_function_t _fself, kk_std_core_types__list _y_x10792, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5380__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5380__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1349_1351;
  kk_std_core_types__list _x_x5381 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1349_1351 = kk_std_core_list_append(_y_x10792, _x_x5381, _ctx); /*list<string>*/
  kk_unit_t _brw_x2504 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1349_1351, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2504; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5383__t {
  struct kk_function_s _base;
  kk_function_t next_4_11318;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5383(kk_function_t _fself, kk_box_t _b_x1355, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5383(kk_function_t next_4_11318, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5383__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5383__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5383, kk_context());
  _self->next_4_11318 = next_4_11318;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5383(kk_function_t _fself, kk_box_t _b_x1355, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5383__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5383__t*, _fself, _ctx);
  kk_function_t next_4_11318 = _self->next_4_11318; /* (list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_4_11318, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5384 = kk_Unit;
  kk_std_core_types__list _x_x5385 = kk_std_core_types__list_unbox(_b_x1355, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11318, (next_4_11318, _x_x5385, _ctx), _ctx);
  return kk_unit_box(_x_x5384);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5387__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5387(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5387(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5387, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5387(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5388;
  kk_examples_basic__clispec _match_x2502 = kk_examples_basic__clispec_unbox(_b_x1358, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5389 = kk_examples_basic__as_Clispec(_match_x2502, _ctx);
    kk_string_t _pat_0_13 = _con_x5389->app__name;
    kk_string_t _pat_1_10 = _con_x5389->app__version;
    kk_string_t _pat_2_4 = _con_x5389->app__about;
    kk_std_core_types__list _pat_3_2 = _con_x5389->app__flags;
    kk_std_core_types__list _x_4 = _con_x5389->app__options;
    kk_std_core_types__list _pat_4_2 = _con_x5389->app__args;
    kk_std_core_types__list _pat_5_2 = _con_x5389->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2502, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_std_core_types__list_drop(_pat_3_2, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_10, _ctx);
      kk_string_drop(_pat_0_13, _ctx);
      kk_datatype_ptr_free(_match_x2502, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2502, _ctx);
    }
    _x_x5388 = _x_4; /*list<examples/basic/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5388, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5391__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5391(kk_function_t _fself, kk_box_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5391(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5391, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5393__t {
  struct kk_function_s _base;
  kk_string_t name_2_1777;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5393(kk_function_t _fself, kk_box_t _b_x1364, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5393(kk_string_t name_2_1777, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5393__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5393__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5393, kk_context());
  _self->name_2_1777 = name_2_1777;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5393(kk_function_t _fself, kk_box_t _b_x1364, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5393__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5393__t*, _fself, _ctx);
  kk_string_t name_2_1777 = _self->name_2_1777; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2_1777, _ctx);}, {}, _ctx)
  kk_string_t _x_x5394;
  kk_examples_basic__clioption _match_x2501 = kk_examples_basic__clioption_unbox(_b_x1364, KK_OWNED, _ctx); /*examples/basic/clioption*/;
  {
    struct kk_examples_basic_Clioption* _con_x5395 = kk_examples_basic__as_Clioption(_match_x2501, _ctx);
    kk_string_t _x_3 = _con_x5395->opt__name;
    kk_string_t _pat_0_12 = _con_x5395->opt__short;
    kk_string_t _pat_1_9 = _con_x5395->opt__help;
    kk_string_t _pat_2_3 = _con_x5395->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2501, _ctx)) {
      kk_string_drop(_pat_2_3, _ctx);
      kk_string_drop(_pat_1_9, _ctx);
      kk_string_drop(_pat_0_12, _ctx);
      kk_datatype_ptr_free(_match_x2501, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2501, _ctx);
    }
    _x_x5394 = _x_3; /*string*/
  }
  return kk_string_is_eq(_x_x5394,name_2_1777,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5391(kk_function_t _fself, kk_box_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5392;
  kk_std_core_types__list options_1_1776 = kk_std_core_types__list_unbox(_b_x1368, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/;
  kk_string_t name_2_1777 = kk_string_unbox(_b_x1369); /*string*/;
  _x_x5392 = kk_std_core_list_find(options_1_1776, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5393(name_2_1777, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5392, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5402__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5402(kk_function_t _fself, kk_box_t _b_x1376, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5402(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5402__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5402__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5402, kk_context());
  _self->error = error;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5402(kk_function_t _fself, kk_box_t _b_x1376, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5402__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5402__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10794_1758 = kk_std_core_types__list_unbox(_b_x1376, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5403 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11155(error, name_0_0, options, remaining, _y_x10794_1758, _ctx);
  return kk_unit_box(_x_x5403);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5410__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5410(kk_function_t _fself, kk_box_t _b_x1382, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5410(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5410, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5410(kk_function_t _fself, kk_box_t _b_x1382, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5411;
  kk_std_core_types__maybe maybe_3_1778 = kk_std_core_types__maybe_unbox(_b_x1382, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_3_1778, _ctx)) {
    kk_box_t _box_x1379 = maybe_3_1778._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_3_1778, _ctx);
    _x_x5411 = true; /*bool*/
  }
  else {
    _x_x5411 = false; /*bool*/
  }
  return kk_bool_box(_x_x5411);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5413__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5413(kk_function_t _fself, kk_box_t _b_x1387, kk_box_t _b_x1388, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5413(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5413, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5413(kk_function_t _fself, kk_box_t _b_x1387, kk_box_t _b_x1388, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_4_10709;
  kk_string_t _x_x5414;
  kk_box_t _x_x5415 = kk_box_dup(_b_x1387, _ctx); /*10000*/
  _x_x5414 = kk_string_unbox(_x_x5415); /*string*/
  kk_string_t _x_x5416;
  kk_box_t _x_x5417 = kk_box_dup(_b_x1388, _ctx); /*10001*/
  _x_x5416 = kk_string_unbox(_x_x5417); /*string*/
  maybe_4_10709 = kk_std_core_sslice_starts_with(_x_x5414, _x_x5416, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5418;
  if (kk_std_core_types__is_Just(maybe_4_10709, _ctx)) {
    kk_box_t _box_x1383 = maybe_4_10709._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_4_10709, _ctx);
    kk_std_core_types__list _x_x5419;
    kk_std_core_types__list _x_x5420;
    kk_string_t _x_x5421 = kk_string_unbox(_b_x1387); /*string*/
    _x_x5420 = kk_std_core_string_list(_x_x5421, _ctx); /*list<char>*/
    kk_integer_t _x_x5422;
    kk_string_t _x_x5423 = kk_string_unbox(_b_x1388); /*string*/
    _x_x5422 = kk_std_core_string_chars_fs_count(_x_x5423, _ctx); /*int*/
    _x_x5419 = kk_std_core_list_drop(_x_x5420, _x_x5422, _ctx); /*list<10001>*/
    _x_x5418 = kk_std_core_string_listchar_fs_string(_x_x5419, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1388, _ctx);
    _x_x5418 = kk_string_unbox(_b_x1387); /*string*/
  }
  return kk_string_box(_x_x5418);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5428__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5428(kk_function_t _fself, kk_box_t _b_x1396, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5428(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5428, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5428(kk_function_t _fself, kk_box_t _b_x1396, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5429;
  kk_examples_basic__clispec _match_x2496 = kk_examples_basic__clispec_unbox(_b_x1396, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5430 = kk_examples_basic__as_Clispec(_match_x2496, _ctx);
    kk_string_t _pat_0_19 = _con_x5430->app__name;
    kk_string_t _pat_1_14 = _con_x5430->app__version;
    kk_string_t _pat_2_5 = _con_x5430->app__about;
    kk_std_core_types__list _x_6 = _con_x5430->app__flags;
    kk_std_core_types__list _pat_3_3 = _con_x5430->app__options;
    kk_std_core_types__list _pat_4_3 = _con_x5430->app__args;
    kk_std_core_types__list _pat_5_3 = _con_x5430->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2496, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_3, _ctx);
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_string_drop(_pat_2_5, _ctx);
      kk_string_drop(_pat_1_14, _ctx);
      kk_string_drop(_pat_0_19, _ctx);
      kk_datatype_ptr_free(_match_x2496, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2496, _ctx);
    }
    _x_x5429 = _x_6; /*list<examples/basic/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5429, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5434__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5434(kk_function_t _fself, kk_box_t _b_x1406, kk_box_t _b_x1407, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5434(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5434, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5436__t {
  struct kk_function_s _base;
  kk_string_t s_6_1780;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5436(kk_function_t _fself, kk_box_t _b_x1402, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5436(kk_string_t s_6_1780, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5436__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5436__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5436, kk_context());
  _self->s_6_1780 = s_6_1780;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5436(kk_function_t _fself, kk_box_t _b_x1402, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5436__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5436__t*, _fself, _ctx);
  kk_string_t s_6_1780 = _self->s_6_1780; /* string */
  kk_drop_match(_self, {kk_string_dup(s_6_1780, _ctx);}, {}, _ctx)
  kk_string_t _x_x5437;
  kk_examples_basic__cliflag _match_x2495 = kk_examples_basic__cliflag_unbox(_b_x1402, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x5438 = kk_examples_basic__as_Cliflag(_match_x2495, _ctx);
    kk_string_t _pat_0_18 = _con_x5438->flag__name;
    kk_string_t _x_5 = _con_x5438->flag__short;
    kk_string_t _pat_1_13 = _con_x5438->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2495, _ctx)) {
      kk_string_drop(_pat_1_13, _ctx);
      kk_string_drop(_pat_0_18, _ctx);
      kk_datatype_ptr_free(_match_x2495, _ctx);
    }
    else {
      kk_string_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2495, _ctx);
    }
    _x_x5437 = _x_5; /*string*/
  }
  return kk_string_is_eq(_x_x5437,s_6_1780,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5434(kk_function_t _fself, kk_box_t _b_x1406, kk_box_t _b_x1407, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5435;
  kk_std_core_types__list flags_1_0_1779 = kk_std_core_types__list_unbox(_b_x1406, KK_OWNED, _ctx); /*list<examples/basic/cliflag>*/;
  kk_string_t s_6_1780 = kk_string_unbox(_b_x1407); /*string*/;
  _x_x5435 = kk_std_core_list_find(flags_1_0_1779, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5436(s_6_1780, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5435, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5444__t {
  struct kk_function_s _base;
  kk_examples_basic__cliflag f_1;
  kk_ref_t flags;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5444(kk_function_t _fself, kk_std_core_types__list _y_x10808, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5444(kk_examples_basic__cliflag f_1, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5444__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5444__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5444, kk_context());
  _self->f_1 = f_1;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5446__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5446(kk_function_t _fself, kk_box_t _b_x1415, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5446(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5446, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5446(kk_function_t _fself, kk_box_t _b_x1415, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5447;
  kk_examples_basic__cliflag _match_x2494 = kk_examples_basic__cliflag_unbox(_b_x1415, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x5448 = kk_examples_basic__as_Cliflag(_match_x2494, _ctx);
    kk_string_t _x_7 = _con_x5448->flag__name;
    kk_string_t _pat_0_20 = _con_x5448->flag__short;
    kk_string_t _pat_1_15 = _con_x5448->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2494, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2494, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2494, _ctx);
    }
    _x_x5447 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5447);
}
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5444(kk_function_t _fself, kk_std_core_types__list _y_x10808, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5444__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5444__t*, _fself, _ctx);
  kk_examples_basic__cliflag f_1 = _self->f_1; /* examples/basic/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_examples_basic__cliflag_dup(f_1, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1416_1418;
  kk_box_t _x_x5445 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5446(_ctx), kk_examples_basic__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x1416_1418 = kk_string_unbox(_x_x5445); /*string*/
  kk_std_core_types__list _b_x1424_1426;
  kk_std_core_types__list _x_x5449 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1416_1418), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1424_1426 = kk_std_core_list_append(_y_x10808, _x_x5449, _ctx); /*list<string>*/
  kk_unit_t _brw_x2493 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1424_1426, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2493; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5451__t {
  struct kk_function_s _base;
  kk_function_t next_6_11325;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5451(kk_function_t _fself, kk_box_t _b_x1428, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5451(kk_function_t next_6_11325, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5451__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5451__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5451, kk_context());
  _self->next_6_11325 = next_6_11325;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5451(kk_function_t _fself, kk_box_t _b_x1428, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5451__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5451__t*, _fself, _ctx);
  kk_function_t next_6_11325 = _self->next_6_11325; /* (list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_6_11325, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5452 = kk_Unit;
  kk_std_core_types__list _x_x5453 = kk_std_core_types__list_unbox(_b_x1428, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11325, (next_6_11325, _x_x5453, _ctx), _ctx);
  return kk_unit_box(_x_x5452);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5455__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5455(kk_function_t _fself, kk_box_t _b_x1431, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5455(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5455, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5455(kk_function_t _fself, kk_box_t _b_x1431, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5456;
  kk_examples_basic__clispec _match_x2491 = kk_examples_basic__clispec_unbox(_b_x1431, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5457 = kk_examples_basic__as_Clispec(_match_x2491, _ctx);
    kk_string_t _pat_0_22 = _con_x5457->app__name;
    kk_string_t _pat_1_17 = _con_x5457->app__version;
    kk_string_t _pat_2_7 = _con_x5457->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x5457->app__flags;
    kk_std_core_types__list _x_9 = _con_x5457->app__options;
    kk_std_core_types__list _pat_4_4 = _con_x5457->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x5457->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2491, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_17, _ctx);
      kk_string_drop(_pat_0_22, _ctx);
      kk_datatype_ptr_free(_match_x2491, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2491, _ctx);
    }
    _x_x5456 = _x_9; /*list<examples/basic/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5456, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5459__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5459(kk_function_t _fself, kk_box_t _b_x1441, kk_box_t _b_x1442, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5459(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5459, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5461__t {
  struct kk_function_s _base;
  kk_string_t s_7_1782;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5461(kk_function_t _fself, kk_box_t _b_x1437, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5461(kk_string_t s_7_1782, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5461__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5461__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5461, kk_context());
  _self->s_7_1782 = s_7_1782;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5461(kk_function_t _fself, kk_box_t _b_x1437, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5461__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5461__t*, _fself, _ctx);
  kk_string_t s_7_1782 = _self->s_7_1782; /* string */
  kk_drop_match(_self, {kk_string_dup(s_7_1782, _ctx);}, {}, _ctx)
  kk_string_t _x_x5462;
  kk_examples_basic__clioption _match_x2490 = kk_examples_basic__clioption_unbox(_b_x1437, KK_OWNED, _ctx); /*examples/basic/clioption*/;
  {
    struct kk_examples_basic_Clioption* _con_x5463 = kk_examples_basic__as_Clioption(_match_x2490, _ctx);
    kk_string_t _pat_0_21 = _con_x5463->opt__name;
    kk_string_t _x_8 = _con_x5463->opt__short;
    kk_string_t _pat_1_16 = _con_x5463->opt__help;
    kk_string_t _pat_2_6 = _con_x5463->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2490, _ctx)) {
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_16, _ctx);
      kk_string_drop(_pat_0_21, _ctx);
      kk_datatype_ptr_free(_match_x2490, _ctx);
    }
    else {
      kk_string_dup(_x_8, _ctx);
      kk_datatype_ptr_decref(_match_x2490, _ctx);
    }
    _x_x5462 = _x_8; /*string*/
  }
  return kk_string_is_eq(_x_x5462,s_7_1782,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5459(kk_function_t _fself, kk_box_t _b_x1441, kk_box_t _b_x1442, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5460;
  kk_std_core_types__list options_2_1781 = kk_std_core_types__list_unbox(_b_x1441, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/;
  kk_string_t s_7_1782 = kk_string_unbox(_b_x1442); /*string*/;
  _x_x5460 = kk_std_core_list_find(options_2_1781, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5461(s_7_1782, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5460, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5470__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_examples_basic__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_5;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5470(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5470(kk_ref_t error, kk_examples_basic__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5470__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5470__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5470, kk_context());
  _self->error = error;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_5 = s_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5470(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5470__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5470__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_examples_basic__clioption o_2 = _self->o_2; /* examples/basic/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_string_t s_5 = _self->s_5; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_examples_basic__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_5, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10810_1761 = kk_std_core_types__list_unbox(_b_x1449, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5471 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11162(error, o_2, options, remaining, s_5, _y_x10810_1761, _ctx);
  return kk_unit_box(_x_x5471);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5475__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5475(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5475(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5475, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5475(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5476;
  kk_examples_basic__clispec _match_x2485 = kk_examples_basic__clispec_unbox(_b_x1454, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5477 = kk_examples_basic__as_Clispec(_match_x2485, _ctx);
    kk_string_t _pat_0_26 = _con_x5477->app__name;
    kk_string_t _pat_1_19 = _con_x5477->app__version;
    kk_string_t _pat_2_9 = _con_x5477->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x5477->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x5477->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x5477->app__args;
    kk_std_core_types__list _x_12 = _con_x5477->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2485, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_5, _ctx);
      kk_std_core_types__list_drop(_pat_4_5, _ctx);
      kk_std_core_types__list_drop(_pat_3_5, _ctx);
      kk_string_drop(_pat_2_9, _ctx);
      kk_string_drop(_pat_1_19, _ctx);
      kk_string_drop(_pat_0_26, _ctx);
      kk_datatype_ptr_free(_match_x2485, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_12, _ctx);
      kk_datatype_ptr_decref(_match_x2485, _ctx);
    }
    _x_x5476 = _x_12; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5476, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5479__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5479(kk_function_t _fself, kk_box_t _b_x1466, kk_box_t _b_x1467, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5479(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5479, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5481__t {
  struct kk_function_s _base;
  kk_string_t name_3_1784;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5481(kk_function_t _fself, kk_box_t _b_x1462, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5481(kk_string_t name_3_1784, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5481__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5481__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5481, kk_context());
  _self->name_3_1784 = name_3_1784;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5481(kk_function_t _fself, kk_box_t _b_x1462, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5481__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5481__t*, _fself, _ctx);
  kk_string_t name_3_1784 = _self->name_3_1784; /* string */
  kk_drop_match(_self, {kk_string_dup(name_3_1784, _ctx);}, {}, _ctx)
  kk_string_t _x_x5482;
  kk_std_core_types__tuple2 _match_x2484 = kk_std_core_types__tuple2_unbox(_b_x1462, KK_OWNED, _ctx); /*(string, examples/basic/clispec)*/;
  {
    kk_box_t _box_x1458 = _match_x2484.fst;
    kk_box_t _box_x1459 = _match_x2484.snd;
    kk_string_t _x_11 = kk_string_unbox(_box_x1458);
    kk_string_dup(_x_11, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2484, _ctx);
    _x_x5482 = _x_11; /*string*/
  }
  return kk_string_is_eq(_x_x5482,name_3_1784,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5479(kk_function_t _fself, kk_box_t _b_x1466, kk_box_t _b_x1467, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5480;
  kk_std_core_types__list commands_1783 = kk_std_core_types__list_unbox(_b_x1466, KK_OWNED, _ctx); /*list<(string, examples/basic/clispec)>*/;
  kk_string_t name_3_1784 = kk_string_unbox(_b_x1467); /*string*/;
  _x_x5480 = kk_std_core_list_find(commands_1783, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5481(name_3_1784, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5480, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5486__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5486(kk_function_t _fself, kk_box_t _b_x1474, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5486(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5486__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5486__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5486, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5486(kk_function_t _fself, kk_box_t _b_x1474, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5486__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5486__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_1763 = kk_Unit;
  kk_unit_unbox(_b_x1474);
  kk_unit_t _x_x5487 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11165(remaining, sub__args, wild___5_1763, _ctx);
  return kk_unit_box(_x_x5487);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5490__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5490(kk_function_t _fself, kk_std_core_types__list _y_x10829, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5490(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5490__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5490__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5490, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5490(kk_function_t _fself, kk_std_core_types__list _y_x10829, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5490__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5490__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1482_1484;
  kk_std_core_types__list _x_x5491 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1482_1484 = kk_std_core_list_append(_y_x10829, _x_x5491, _ctx); /*list<string>*/
  kk_unit_t _brw_x2481 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1482_1484, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2481; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5493__t {
  struct kk_function_s _base;
  kk_function_t next_9_11334;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5493(kk_function_t _fself, kk_box_t _b_x1488, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5493(kk_function_t next_9_11334, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5493__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5493__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5493, kk_context());
  _self->next_9_11334 = next_9_11334;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5493(kk_function_t _fself, kk_box_t _b_x1488, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5493__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5493__t*, _fself, _ctx);
  kk_function_t next_9_11334 = _self->next_9_11334; /* (list<string>) -> <local<23359>,examples/basic/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_9_11334, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5494 = kk_Unit;
  kk_std_core_types__list _x_x5495 = kk_std_core_types__list_unbox(_b_x1488, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11334, (next_9_11334, _x_x5495, _ctx), _ctx);
  return kk_unit_box(_x_x5494);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5500__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5500(kk_function_t _fself, kk_box_t _b_x1492, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5500(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5500, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5500(kk_function_t _fself, kk_box_t _b_x1492, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5501;
  kk_std_core_types__maybe maybe_5_1785 = kk_std_core_types__maybe_unbox(_b_x1492, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_5_1785, _ctx)) {
    kk_box_t _box_x1489 = maybe_5_1785._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_5_1785, _ctx);
    _x_x5501 = true; /*bool*/
  }
  else {
    _x_x5501 = false; /*bool*/
  }
  return kk_bool_box(_x_x5501);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5503__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5503(kk_function_t _fself, kk_box_t _b_x1497, kk_box_t _b_x1498, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5503(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5503, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5503(kk_function_t _fself, kk_box_t _b_x1497, kk_box_t _b_x1498, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_6_10713;
  kk_string_t _x_x5504;
  kk_box_t _x_x5505 = kk_box_dup(_b_x1497, _ctx); /*10000*/
  _x_x5504 = kk_string_unbox(_x_x5505); /*string*/
  kk_string_t _x_x5506;
  kk_box_t _x_x5507 = kk_box_dup(_b_x1498, _ctx); /*10001*/
  _x_x5506 = kk_string_unbox(_x_x5507); /*string*/
  maybe_6_10713 = kk_std_core_sslice_starts_with(_x_x5504, _x_x5506, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5508;
  if (kk_std_core_types__is_Just(maybe_6_10713, _ctx)) {
    kk_box_t _box_x1493 = maybe_6_10713._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_6_10713, _ctx);
    kk_std_core_types__list _x_x5509;
    kk_std_core_types__list _x_x5510;
    kk_string_t _x_x5511 = kk_string_unbox(_b_x1497); /*string*/
    _x_x5510 = kk_std_core_string_list(_x_x5511, _ctx); /*list<char>*/
    kk_integer_t _x_x5512;
    kk_string_t _x_x5513 = kk_string_unbox(_b_x1498); /*string*/
    _x_x5512 = kk_std_core_string_chars_fs_count(_x_x5513, _ctx); /*int*/
    _x_x5509 = kk_std_core_list_drop(_x_x5510, _x_x5512, _ctx); /*list<10001>*/
    _x_x5508 = kk_std_core_string_listchar_fs_string(_x_x5509, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1498, _ctx);
    _x_x5508 = kk_string_unbox(_b_x1497); /*string*/
  }
  return kk_string_box(_x_x5508);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5518__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5518(kk_function_t _fself, kk_box_t _b_x1506, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5518(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5518, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5518(kk_function_t _fself, kk_box_t _b_x1506, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5519;
  kk_examples_basic__clispec _match_x2475 = kk_examples_basic__clispec_unbox(_b_x1506, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5520 = kk_examples_basic__as_Clispec(_match_x2475, _ctx);
    kk_string_t _pat_0_31 = _con_x5520->app__name;
    kk_string_t _pat_1_23 = _con_x5520->app__version;
    kk_string_t _pat_2_10 = _con_x5520->app__about;
    kk_std_core_types__list _x_14 = _con_x5520->app__flags;
    kk_std_core_types__list _pat_3_6 = _con_x5520->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5520->app__args;
    kk_std_core_types__list _pat_5_6 = _con_x5520->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2475, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_6, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_10, _ctx);
      kk_string_drop(_pat_1_23, _ctx);
      kk_string_drop(_pat_0_31, _ctx);
      kk_datatype_ptr_free(_match_x2475, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_14, _ctx);
      kk_datatype_ptr_decref(_match_x2475, _ctx);
    }
    _x_x5519 = _x_14; /*list<examples/basic/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5519, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5524__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5524(kk_function_t _fself, kk_box_t _b_x1516, kk_box_t _b_x1517, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5524(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5524, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5526__t {
  struct kk_function_s _base;
  kk_string_t name_4_1787;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5526(kk_function_t _fself, kk_box_t _b_x1512, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5526(kk_string_t name_4_1787, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5526__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5526__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5526, kk_context());
  _self->name_4_1787 = name_4_1787;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5526(kk_function_t _fself, kk_box_t _b_x1512, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5526__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5526__t*, _fself, _ctx);
  kk_string_t name_4_1787 = _self->name_4_1787; /* string */
  kk_drop_match(_self, {kk_string_dup(name_4_1787, _ctx);}, {}, _ctx)
  kk_string_t _x_x5527;
  kk_examples_basic__cliflag _match_x2474 = kk_examples_basic__cliflag_unbox(_b_x1512, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x5528 = kk_examples_basic__as_Cliflag(_match_x2474, _ctx);
    kk_string_t _x_13 = _con_x5528->flag__name;
    kk_string_t _pat_0_30 = _con_x5528->flag__short;
    kk_string_t _pat_1_22 = _con_x5528->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2474, _ctx)) {
      kk_string_drop(_pat_1_22, _ctx);
      kk_string_drop(_pat_0_30, _ctx);
      kk_datatype_ptr_free(_match_x2474, _ctx);
    }
    else {
      kk_string_dup(_x_13, _ctx);
      kk_datatype_ptr_decref(_match_x2474, _ctx);
    }
    _x_x5527 = _x_13; /*string*/
  }
  return kk_string_is_eq(_x_x5527,name_4_1787,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5524(kk_function_t _fself, kk_box_t _b_x1516, kk_box_t _b_x1517, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5525;
  kk_std_core_types__list flags_2_0_1786 = kk_std_core_types__list_unbox(_b_x1516, KK_OWNED, _ctx); /*list<examples/basic/cliflag>*/;
  kk_string_t name_4_1787 = kk_string_unbox(_b_x1517); /*string*/;
  _x_x5525 = kk_std_core_list_find(flags_2_0_1786, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5526(name_4_1787, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5525, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5534__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0_0_0;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5534(kk_function_t _fself, kk_std_core_types__list _y_x10835, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5534(kk_ref_t flags, kk_string_t name_0_0_0_0, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5534__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5534__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5534, kk_context());
  _self->flags = flags;
  _self->name_0_0_0_0 = name_0_0_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5534(kk_function_t _fself, kk_std_core_types__list _y_x10835, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5534__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5534__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1526_1528;
  kk_std_core_types__list _x_x5535 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1526_1528 = kk_std_core_list_append(_y_x10835, _x_x5535, _ctx); /*list<string>*/
  kk_unit_t _brw_x2473 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1526_1528, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2473; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5537__t {
  struct kk_function_s _base;
  kk_function_t next_10_11339;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5537(kk_function_t _fself, kk_box_t _b_x1532, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5537(kk_function_t next_10_11339, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5537__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5537__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5537, kk_context());
  _self->next_10_11339 = next_10_11339;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5537(kk_function_t _fself, kk_box_t _b_x1532, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5537__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5537__t*, _fself, _ctx);
  kk_function_t next_10_11339 = _self->next_10_11339; /* (list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_10_11339, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5538 = kk_Unit;
  kk_std_core_types__list _x_x5539 = kk_std_core_types__list_unbox(_b_x1532, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11339, (next_10_11339, _x_x5539, _ctx), _ctx);
  return kk_unit_box(_x_x5538);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5541__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5541(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5541(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5541, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5541(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5542;
  kk_examples_basic__clispec _match_x2471 = kk_examples_basic__clispec_unbox(_b_x1535, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5543 = kk_examples_basic__as_Clispec(_match_x2471, _ctx);
    kk_string_t _pat_0_33 = _con_x5543->app__name;
    kk_string_t _pat_1_25 = _con_x5543->app__version;
    kk_string_t _pat_2_12 = _con_x5543->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5543->app__flags;
    kk_std_core_types__list _x_16 = _con_x5543->app__options;
    kk_std_core_types__list _pat_4_7 = _con_x5543->app__args;
    kk_std_core_types__list _pat_5_7 = _con_x5543->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2471, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_7, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_12, _ctx);
      kk_string_drop(_pat_1_25, _ctx);
      kk_string_drop(_pat_0_33, _ctx);
      kk_datatype_ptr_free(_match_x2471, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_16, _ctx);
      kk_datatype_ptr_decref(_match_x2471, _ctx);
    }
    _x_x5542 = _x_16; /*list<examples/basic/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5542, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5545__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5545(kk_function_t _fself, kk_box_t _b_x1545, kk_box_t _b_x1546, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5545(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5545, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5547__t {
  struct kk_function_s _base;
  kk_string_t name_5_1789;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5547(kk_function_t _fself, kk_box_t _b_x1541, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5547(kk_string_t name_5_1789, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5547__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5547__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5547, kk_context());
  _self->name_5_1789 = name_5_1789;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5547(kk_function_t _fself, kk_box_t _b_x1541, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5547__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5547__t*, _fself, _ctx);
  kk_string_t name_5_1789 = _self->name_5_1789; /* string */
  kk_drop_match(_self, {kk_string_dup(name_5_1789, _ctx);}, {}, _ctx)
  kk_string_t _x_x5548;
  kk_examples_basic__clioption _match_x2470 = kk_examples_basic__clioption_unbox(_b_x1541, KK_OWNED, _ctx); /*examples/basic/clioption*/;
  {
    struct kk_examples_basic_Clioption* _con_x5549 = kk_examples_basic__as_Clioption(_match_x2470, _ctx);
    kk_string_t _x_15 = _con_x5549->opt__name;
    kk_string_t _pat_0_32 = _con_x5549->opt__short;
    kk_string_t _pat_1_24 = _con_x5549->opt__help;
    kk_string_t _pat_2_11 = _con_x5549->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2470, _ctx)) {
      kk_string_drop(_pat_2_11, _ctx);
      kk_string_drop(_pat_1_24, _ctx);
      kk_string_drop(_pat_0_32, _ctx);
      kk_datatype_ptr_free(_match_x2470, _ctx);
    }
    else {
      kk_string_dup(_x_15, _ctx);
      kk_datatype_ptr_decref(_match_x2470, _ctx);
    }
    _x_x5548 = _x_15; /*string*/
  }
  return kk_string_is_eq(_x_x5548,name_5_1789,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5545(kk_function_t _fself, kk_box_t _b_x1545, kk_box_t _b_x1546, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5546;
  kk_std_core_types__list options_3_1788 = kk_std_core_types__list_unbox(_b_x1545, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/;
  kk_string_t name_5_1789 = kk_string_unbox(_b_x1546); /*string*/;
  _x_x5546 = kk_std_core_list_find(options_3_1788, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5547(name_5_1789, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5546, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5556__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5556(kk_function_t _fself, kk_box_t _b_x1553, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5556(kk_ref_t error, kk_string_t name_0_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5556__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5556__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5556, kk_context());
  _self->error = error;
  _self->name_0_0_0_0 = name_0_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5556(kk_function_t _fself, kk_box_t _b_x1553, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5556__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5556__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10837_1766 = kk_std_core_types__list_unbox(_b_x1553, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5557 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11173(error, name_0_0_0_0, options, remaining, _y_x10837_1766, _ctx);
  return kk_unit_box(_x_x5557);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5564__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5564(kk_function_t _fself, kk_box_t _b_x1559, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5564(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5564, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5564(kk_function_t _fself, kk_box_t _b_x1559, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5565;
  kk_std_core_types__maybe maybe_7_1790 = kk_std_core_types__maybe_unbox(_b_x1559, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_7_1790, _ctx)) {
    kk_box_t _box_x1556 = maybe_7_1790._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_7_1790, _ctx);
    _x_x5565 = true; /*bool*/
  }
  else {
    _x_x5565 = false; /*bool*/
  }
  return kk_bool_box(_x_x5565);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5567__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5567(kk_function_t _fself, kk_box_t _b_x1564, kk_box_t _b_x1565, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5567(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5567, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5567(kk_function_t _fself, kk_box_t _b_x1564, kk_box_t _b_x1565, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_8_10716;
  kk_string_t _x_x5568;
  kk_box_t _x_x5569 = kk_box_dup(_b_x1564, _ctx); /*10000*/
  _x_x5568 = kk_string_unbox(_x_x5569); /*string*/
  kk_string_t _x_x5570;
  kk_box_t _x_x5571 = kk_box_dup(_b_x1565, _ctx); /*10001*/
  _x_x5570 = kk_string_unbox(_x_x5571); /*string*/
  maybe_8_10716 = kk_std_core_sslice_starts_with(_x_x5568, _x_x5570, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5572;
  if (kk_std_core_types__is_Just(maybe_8_10716, _ctx)) {
    kk_box_t _box_x1560 = maybe_8_10716._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_8_10716, _ctx);
    kk_std_core_types__list _x_x5573;
    kk_std_core_types__list _x_x5574;
    kk_string_t _x_x5575 = kk_string_unbox(_b_x1564); /*string*/
    _x_x5574 = kk_std_core_string_list(_x_x5575, _ctx); /*list<char>*/
    kk_integer_t _x_x5576;
    kk_string_t _x_x5577 = kk_string_unbox(_b_x1565); /*string*/
    _x_x5576 = kk_std_core_string_chars_fs_count(_x_x5577, _ctx); /*int*/
    _x_x5573 = kk_std_core_list_drop(_x_x5574, _x_x5576, _ctx); /*list<10001>*/
    _x_x5572 = kk_std_core_string_listchar_fs_string(_x_x5573, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1565, _ctx);
    _x_x5572 = kk_string_unbox(_b_x1564); /*string*/
  }
  return kk_string_box(_x_x5572);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5582__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5582(kk_function_t _fself, kk_box_t _b_x1573, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5582(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5582, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5582(kk_function_t _fself, kk_box_t _b_x1573, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5583;
  kk_examples_basic__clispec _match_x2465 = kk_examples_basic__clispec_unbox(_b_x1573, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5584 = kk_examples_basic__as_Clispec(_match_x2465, _ctx);
    kk_string_t _pat_0_39 = _con_x5584->app__name;
    kk_string_t _pat_1_29 = _con_x5584->app__version;
    kk_string_t _pat_2_13 = _con_x5584->app__about;
    kk_std_core_types__list _x_18 = _con_x5584->app__flags;
    kk_std_core_types__list _pat_3_8 = _con_x5584->app__options;
    kk_std_core_types__list _pat_4_8 = _con_x5584->app__args;
    kk_std_core_types__list _pat_5_8 = _con_x5584->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2465, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_8, _ctx);
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_std_core_types__list_drop(_pat_3_8, _ctx);
      kk_string_drop(_pat_2_13, _ctx);
      kk_string_drop(_pat_1_29, _ctx);
      kk_string_drop(_pat_0_39, _ctx);
      kk_datatype_ptr_free(_match_x2465, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_18, _ctx);
      kk_datatype_ptr_decref(_match_x2465, _ctx);
    }
    _x_x5583 = _x_18; /*list<examples/basic/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5583, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5588__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5588(kk_function_t _fself, kk_box_t _b_x1583, kk_box_t _b_x1584, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5588(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5588, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5590__t {
  struct kk_function_s _base;
  kk_string_t s_10_1792;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5590(kk_function_t _fself, kk_box_t _b_x1579, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5590(kk_string_t s_10_1792, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5590__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5590__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5590, kk_context());
  _self->s_10_1792 = s_10_1792;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5590(kk_function_t _fself, kk_box_t _b_x1579, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5590__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5590__t*, _fself, _ctx);
  kk_string_t s_10_1792 = _self->s_10_1792; /* string */
  kk_drop_match(_self, {kk_string_dup(s_10_1792, _ctx);}, {}, _ctx)
  kk_string_t _x_x5591;
  kk_examples_basic__cliflag _match_x2464 = kk_examples_basic__cliflag_unbox(_b_x1579, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x5592 = kk_examples_basic__as_Cliflag(_match_x2464, _ctx);
    kk_string_t _pat_0_38 = _con_x5592->flag__name;
    kk_string_t _x_17 = _con_x5592->flag__short;
    kk_string_t _pat_1_28 = _con_x5592->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2464, _ctx)) {
      kk_string_drop(_pat_1_28, _ctx);
      kk_string_drop(_pat_0_38, _ctx);
      kk_datatype_ptr_free(_match_x2464, _ctx);
    }
    else {
      kk_string_dup(_x_17, _ctx);
      kk_datatype_ptr_decref(_match_x2464, _ctx);
    }
    _x_x5591 = _x_17; /*string*/
  }
  return kk_string_is_eq(_x_x5591,s_10_1792,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5588(kk_function_t _fself, kk_box_t _b_x1583, kk_box_t _b_x1584, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5589;
  kk_std_core_types__list flags_3_0_1791 = kk_std_core_types__list_unbox(_b_x1583, KK_OWNED, _ctx); /*list<examples/basic/cliflag>*/;
  kk_string_t s_10_1792 = kk_string_unbox(_b_x1584); /*string*/;
  _x_x5589 = kk_std_core_list_find(flags_3_0_1791, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5590(s_10_1792, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5589, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5598__t {
  struct kk_function_s _base;
  kk_examples_basic__cliflag f_0_0;
  kk_ref_t flags;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5598(kk_function_t _fself, kk_std_core_types__list _y_x10851, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5598(kk_examples_basic__cliflag f_0_0, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5598__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5598__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5598, kk_context());
  _self->f_0_0 = f_0_0;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5600__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5600(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5600(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5600, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5600(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5601;
  kk_examples_basic__cliflag _match_x2463 = kk_examples_basic__cliflag_unbox(_b_x1592, KK_OWNED, _ctx); /*examples/basic/cliflag*/;
  {
    struct kk_examples_basic_Cliflag* _con_x5602 = kk_examples_basic__as_Cliflag(_match_x2463, _ctx);
    kk_string_t _x_19 = _con_x5602->flag__name;
    kk_string_t _pat_0_40 = _con_x5602->flag__short;
    kk_string_t _pat_1_30 = _con_x5602->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2463, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2463, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2463, _ctx);
    }
    _x_x5601 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5601);
}
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5598(kk_function_t _fself, kk_std_core_types__list _y_x10851, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5598__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5598__t*, _fself, _ctx);
  kk_examples_basic__cliflag f_0_0 = _self->f_0_0; /* examples/basic/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_examples_basic__cliflag_dup(f_0_0, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1593_1595;
  kk_box_t _x_x5599 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5600(_ctx), kk_examples_basic__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1593_1595 = kk_string_unbox(_x_x5599); /*string*/
  kk_std_core_types__list _b_x1601_1603;
  kk_std_core_types__list _x_x5603 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1593_1595), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1601_1603 = kk_std_core_list_append(_y_x10851, _x_x5603, _ctx); /*list<string>*/
  kk_unit_t _brw_x2462 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1601_1603, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2462; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5605__t {
  struct kk_function_s _base;
  kk_function_t next_12_11346;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5605(kk_function_t _fself, kk_box_t _b_x1605, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5605(kk_function_t next_12_11346, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5605__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5605__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5605, kk_context());
  _self->next_12_11346 = next_12_11346;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5605(kk_function_t _fself, kk_box_t _b_x1605, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5605__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5605__t*, _fself, _ctx);
  kk_function_t next_12_11346 = _self->next_12_11346; /* (list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_12_11346, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5606 = kk_Unit;
  kk_std_core_types__list _x_x5607 = kk_std_core_types__list_unbox(_b_x1605, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11346, (next_12_11346, _x_x5607, _ctx), _ctx);
  return kk_unit_box(_x_x5606);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5609__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5609(kk_function_t _fself, kk_box_t _b_x1608, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5609(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5609, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5609(kk_function_t _fself, kk_box_t _b_x1608, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5610;
  kk_examples_basic__clispec _match_x2460 = kk_examples_basic__clispec_unbox(_b_x1608, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5611 = kk_examples_basic__as_Clispec(_match_x2460, _ctx);
    kk_string_t _pat_0_42 = _con_x5611->app__name;
    kk_string_t _pat_1_32 = _con_x5611->app__version;
    kk_string_t _pat_2_15 = _con_x5611->app__about;
    kk_std_core_types__list _pat_3_9 = _con_x5611->app__flags;
    kk_std_core_types__list _x_21 = _con_x5611->app__options;
    kk_std_core_types__list _pat_4_9 = _con_x5611->app__args;
    kk_std_core_types__list _pat_5_9 = _con_x5611->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2460, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_9, _ctx);
      kk_std_core_types__list_drop(_pat_4_9, _ctx);
      kk_std_core_types__list_drop(_pat_3_9, _ctx);
      kk_string_drop(_pat_2_15, _ctx);
      kk_string_drop(_pat_1_32, _ctx);
      kk_string_drop(_pat_0_42, _ctx);
      kk_datatype_ptr_free(_match_x2460, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_21, _ctx);
      kk_datatype_ptr_decref(_match_x2460, _ctx);
    }
    _x_x5610 = _x_21; /*list<examples/basic/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5610, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5613__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5613(kk_function_t _fself, kk_box_t _b_x1618, kk_box_t _b_x1619, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5613(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5613, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5615__t {
  struct kk_function_s _base;
  kk_string_t s_11_1794;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5615(kk_function_t _fself, kk_box_t _b_x1614, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5615(kk_string_t s_11_1794, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5615__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5615__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5615, kk_context());
  _self->s_11_1794 = s_11_1794;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5615(kk_function_t _fself, kk_box_t _b_x1614, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5615__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5615__t*, _fself, _ctx);
  kk_string_t s_11_1794 = _self->s_11_1794; /* string */
  kk_drop_match(_self, {kk_string_dup(s_11_1794, _ctx);}, {}, _ctx)
  kk_string_t _x_x5616;
  kk_examples_basic__clioption _match_x2459 = kk_examples_basic__clioption_unbox(_b_x1614, KK_OWNED, _ctx); /*examples/basic/clioption*/;
  {
    struct kk_examples_basic_Clioption* _con_x5617 = kk_examples_basic__as_Clioption(_match_x2459, _ctx);
    kk_string_t _pat_0_41 = _con_x5617->opt__name;
    kk_string_t _x_20 = _con_x5617->opt__short;
    kk_string_t _pat_1_31 = _con_x5617->opt__help;
    kk_string_t _pat_2_14 = _con_x5617->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2459, _ctx)) {
      kk_string_drop(_pat_2_14, _ctx);
      kk_string_drop(_pat_1_31, _ctx);
      kk_string_drop(_pat_0_41, _ctx);
      kk_datatype_ptr_free(_match_x2459, _ctx);
    }
    else {
      kk_string_dup(_x_20, _ctx);
      kk_datatype_ptr_decref(_match_x2459, _ctx);
    }
    _x_x5616 = _x_20; /*string*/
  }
  return kk_string_is_eq(_x_x5616,s_11_1794,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5613(kk_function_t _fself, kk_box_t _b_x1618, kk_box_t _b_x1619, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5614;
  kk_std_core_types__list options_4_1793 = kk_std_core_types__list_unbox(_b_x1618, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/;
  kk_string_t s_11_1794 = kk_string_unbox(_b_x1619); /*string*/;
  _x_x5614 = kk_std_core_list_find(options_4_1793, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5615(s_11_1794, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5614, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5624__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_examples_basic__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_0_0;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5624(kk_function_t _fself, kk_box_t _b_x1626, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5624(kk_ref_t error, kk_examples_basic__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5624__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5624__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5624, kk_context());
  _self->error = error;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_0_0 = s_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5624(kk_function_t _fself, kk_box_t _b_x1626, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5624__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5624__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_examples_basic__clioption o_0_0 = _self->o_0_0; /* examples/basic/clioption */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_string_t s_0_0 = _self->s_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_examples_basic__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10853_1769 = kk_std_core_types__list_unbox(_b_x1626, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5625 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11180(error, o_0_0, options, remaining, s_0_0, _y_x10853_1769, _ctx);
  return kk_unit_box(_x_x5625);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5629__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5629(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5629(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5629, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5629(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5630;
  kk_examples_basic__clispec _match_x2454 = kk_examples_basic__clispec_unbox(_b_x1631, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5631 = kk_examples_basic__as_Clispec(_match_x2454, _ctx);
    kk_string_t _pat_0_46 = _con_x5631->app__name;
    kk_string_t _pat_1_34 = _con_x5631->app__version;
    kk_string_t _pat_2_17 = _con_x5631->app__about;
    kk_std_core_types__list _pat_3_10 = _con_x5631->app__flags;
    kk_std_core_types__list _pat_4_10 = _con_x5631->app__options;
    kk_std_core_types__list _pat_5_10 = _con_x5631->app__args;
    kk_std_core_types__list _x_24 = _con_x5631->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2454, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_10, _ctx);
      kk_std_core_types__list_drop(_pat_4_10, _ctx);
      kk_std_core_types__list_drop(_pat_3_10, _ctx);
      kk_string_drop(_pat_2_17, _ctx);
      kk_string_drop(_pat_1_34, _ctx);
      kk_string_drop(_pat_0_46, _ctx);
      kk_datatype_ptr_free(_match_x2454, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_24, _ctx);
      kk_datatype_ptr_decref(_match_x2454, _ctx);
    }
    _x_x5630 = _x_24; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5630, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5633__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5633(kk_function_t _fself, kk_box_t _b_x1643, kk_box_t _b_x1644, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5633(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11185_fun5633, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5635__t {
  struct kk_function_s _base;
  kk_string_t name_6_1796;
};
static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5635(kk_function_t _fself, kk_box_t _b_x1639, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5635(kk_string_t name_6_1796, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5635__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5635__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5635, kk_context());
  _self->name_6_1796 = name_6_1796;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__parse__loop_11185_fun5635(kk_function_t _fself, kk_box_t _b_x1639, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5635__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5635__t*, _fself, _ctx);
  kk_string_t name_6_1796 = _self->name_6_1796; /* string */
  kk_drop_match(_self, {kk_string_dup(name_6_1796, _ctx);}, {}, _ctx)
  kk_string_t _x_x5636;
  kk_std_core_types__tuple2 _match_x2453 = kk_std_core_types__tuple2_unbox(_b_x1639, KK_OWNED, _ctx); /*(string, examples/basic/clispec)*/;
  {
    kk_box_t _box_x1635 = _match_x2453.fst;
    kk_box_t _box_x1636 = _match_x2453.snd;
    kk_string_t _x_23 = kk_string_unbox(_box_x1635);
    kk_string_dup(_x_23, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2453, _ctx);
    _x_x5636 = _x_23; /*string*/
  }
  return kk_string_is_eq(_x_x5636,name_6_1796,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5633(kk_function_t _fself, kk_box_t _b_x1643, kk_box_t _b_x1644, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5634;
  kk_std_core_types__list commands_0_1795 = kk_std_core_types__list_unbox(_b_x1643, KK_OWNED, _ctx); /*list<(string, examples/basic/clispec)>*/;
  kk_string_t name_6_1796 = kk_string_unbox(_b_x1644); /*string*/;
  _x_x5634 = kk_std_core_list_find(commands_0_1795, kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5635(name_6_1796, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5634, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5640__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5640(kk_function_t _fself, kk_box_t _b_x1651, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5640(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5640__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5640__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5640, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5640(kk_function_t _fself, kk_box_t _b_x1651, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5640__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5640__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_0_1771 = kk_Unit;
  kk_unit_unbox(_b_x1651);
  kk_unit_t _x_x5641 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11183(remaining, sub__args, wild___5_0_1771, _ctx);
  return kk_unit_box(_x_x5641);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5644__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5644(kk_function_t _fself, kk_std_core_types__list _y_x10872, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5644(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5644__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5644__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5644, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5644(kk_function_t _fself, kk_std_core_types__list _y_x10872, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5644__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5644__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1659_1661;
  kk_std_core_types__list _x_x5645 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1659_1661 = kk_std_core_list_append(_y_x10872, _x_x5645, _ctx); /*list<string>*/
  kk_unit_t _brw_x2450 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1659_1661, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2450; return kk_Unit;
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5647__t {
  struct kk_function_s _base;
  kk_function_t next_15_11355;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5647(kk_function_t _fself, kk_box_t _b_x1665, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5647(kk_function_t next_15_11355, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5647__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5647__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11185_fun5647, kk_context());
  _self->next_15_11355 = next_15_11355;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11185_fun5647(kk_function_t _fself, kk_box_t _b_x1665, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5647__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11185_fun5647__t*, _fself, _ctx);
  kk_function_t next_15_11355 = _self->next_15_11355; /* (list<string>) -> <local<23359>,examples/basic/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_15_11355, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5648 = kk_Unit;
  kk_std_core_types__list _x_x5649 = kk_std_core_types__list_unbox(_b_x1665, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11355, (next_15_11355, _x_x5649, _ctx), _ctx);
  return kk_unit_box(_x_x5648);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11185(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_examples_basic__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, wild_ : ()) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2441;
  kk_string_t _x_x5265 = kk_string_dup(a, _ctx); /*string*/
  kk_string_t _x_x5266;
  kk_define_string_literal(static, _s_x5267, 6, "--help", _ctx)
  _x_x5266 = kk_string_dup(_s_x5267, _ctx); /*string*/
  _match_x2441 = kk_string_is_eq(_x_x5265,_x_x5266,kk_context()); /*bool*/
  if (_match_x2441) {
    kk_ref_drop(subcmd, _ctx);
    kk_ref_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(positionals, _ctx);
    kk_ref_drop(options, _ctx);
    kk_ref_drop(flags, _ctx);
    kk_string_drop(a, _ctx);
    kk_unit_t x_11307 = kk_Unit;
    kk_unit_t _brw_x2517 = kk_Unit;
    kk_box_t _x_x5268;
    kk_string_t _x_x5269;
    kk_define_string_literal(static, _s_x5270, 8, "__help__", _ctx)
    _x_x5269 = kk_string_dup(_s_x5270, _ctx); /*string*/
    _x_x5268 = kk_string_box(_x_x5269); /*10000*/
    kk_ref_set_borrow(error,_x_x5268,kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2517;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x5271 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5272(_ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5271); return kk_Unit;
    }
    {
      kk_examples_basic__mlift_hc__parse__loop_11140(x_11307, _ctx); return kk_Unit;
    }
  }
  {
    bool _match_x2442;
    kk_string_t _x_x5274 = kk_string_dup(a, _ctx); /*string*/
    kk_string_t _x_x5275;
    kk_define_string_literal(static, _s_x5276, 2, "-h", _ctx)
    _x_x5275 = kk_string_dup(_s_x5276, _ctx); /*string*/
    _match_x2442 = kk_string_is_eq(_x_x5274,_x_x5275,kk_context()); /*bool*/
    if (_match_x2442) {
      kk_ref_drop(subcmd, _ctx);
      kk_ref_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_ref_drop(remaining, _ctx);
      kk_ref_drop(positionals, _ctx);
      kk_ref_drop(options, _ctx);
      kk_ref_drop(flags, _ctx);
      kk_string_drop(a, _ctx);
      kk_unit_t x_0_11309 = kk_Unit;
      kk_unit_t _brw_x2515 = kk_Unit;
      kk_box_t _x_x5277;
      kk_string_t _x_x5278;
      kk_define_string_literal(static, _s_x5279, 8, "__help__", _ctx)
      _x_x5278 = kk_string_dup(_s_x5279, _ctx); /*string*/
      _x_x5277 = kk_string_box(_x_x5278); /*10000*/
      kk_ref_set_borrow(error,_x_x5277,kk_context());
      kk_ref_drop(error, _ctx);
      _brw_x2515;
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x5280 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5281(_ctx), _ctx); /*10001*/
        kk_unit_unbox(_x_x5280); return kk_Unit;
      }
      {
        kk_examples_basic__mlift_hc__parse__loop_11141(x_0_11309, _ctx); return kk_Unit;
      }
    }
    {
      bool _match_x2443;
      kk_string_t _x_x5283 = kk_string_dup(a, _ctx); /*string*/
      kk_string_t _x_x5284;
      kk_define_string_literal(static, _s_x5285, 9, "--version", _ctx)
      _x_x5284 = kk_string_dup(_s_x5285, _ctx); /*string*/
      _match_x2443 = kk_string_is_eq(_x_x5283,_x_x5284,kk_context()); /*bool*/
      if (_match_x2443) {
        kk_ref_drop(subcmd, _ctx);
        kk_ref_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_ref_drop(remaining, _ctx);
        kk_ref_drop(positionals, _ctx);
        kk_ref_drop(options, _ctx);
        kk_ref_drop(flags, _ctx);
        kk_string_drop(a, _ctx);
        kk_unit_t x_1_11311 = kk_Unit;
        kk_unit_t _brw_x2513 = kk_Unit;
        kk_box_t _x_x5286;
        kk_string_t _x_x5287;
        kk_define_string_literal(static, _s_x5288, 11, "__version__", _ctx)
        _x_x5287 = kk_string_dup(_s_x5288, _ctx); /*string*/
        _x_x5286 = kk_string_box(_x_x5287); /*10000*/
        kk_ref_set_borrow(error,_x_x5286,kk_context());
        kk_ref_drop(error, _ctx);
        _brw_x2513;
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x5289 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5290(_ctx), _ctx); /*10001*/
          kk_unit_unbox(_x_x5289); return kk_Unit;
        }
        {
          kk_examples_basic__mlift_hc__parse__loop_11142(x_1_11311, _ctx); return kk_Unit;
        }
      }
      {
        bool _match_x2444;
        kk_string_t _x_x5292 = kk_string_dup(a, _ctx); /*string*/
        kk_string_t _x_x5293;
        kk_define_string_literal(static, _s_x5294, 2, "--", _ctx)
        _x_x5293 = kk_string_dup(_s_x5294, _ctx); /*string*/
        _match_x2444 = kk_string_is_eq(_x_x5292,_x_x5293,kk_context()); /*bool*/
        if (_match_x2444) {
          kk_ref_drop(subcmd, _ctx);
          kk_ref_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_ref_drop(options, _ctx);
          kk_ref_drop(flags, _ctx);
          kk_ref_drop(error, _ctx);
          kk_string_drop(a, _ctx);
          kk_std_core_types__list x_2_11313;
          kk_box_t _x_x5295;
          kk_ref_t _x_x5296 = kk_ref_dup(positionals, _ctx); /*local-var<23359,list<string>>*/
          _x_x5295 = kk_ref_get(_x_x5296,kk_context()); /*10000*/
          x_2_11313 = kk_std_core_types__list_unbox(_x_x5295, KK_OWNED, _ctx); /*list<string>*/
          if (kk_yielding(kk_context())) {
            kk_std_core_types__list_drop(x_2_11313, _ctx);
            kk_box_t _x_x5297 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5298(positionals, remaining, _ctx), _ctx); /*10001*/
            kk_unit_unbox(_x_x5297); return kk_Unit;
          }
          {
            kk_examples_basic__mlift_hc__parse__loop_11145(positionals, remaining, x_2_11313, _ctx); return kk_Unit;
          }
        }
        {
          kk_std_core_types__maybe _x_x1_0_11042;
          kk_string_t _x_x5300 = kk_string_dup(a, _ctx); /*string*/
          kk_string_t _x_x5301;
          kk_define_string_literal(static, _s_x5302, 2, "--", _ctx)
          _x_x5301 = kk_string_dup(_s_x5302, _ctx); /*string*/
          _x_x1_0_11042 = kk_std_core_sslice_starts_with(_x_x5300, _x_x5301, _ctx); /*maybe<sslice/sslice>*/
          bool _match_x2445;
          kk_box_t _x_x5303 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5304(_ctx), kk_std_core_types__maybe_box(_x_x1_0_11042, _ctx), _ctx); /*10001*/
          _match_x2445 = kk_bool_unbox(_x_x5303); /*bool*/
          if (_match_x2445) {
            bool _match_x2476;
            kk_string_t _x_x5306 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5307;
            kk_define_string_literal(static, _s_x5308, 1, "=", _ctx)
            _x_x5307 = kk_string_dup(_s_x5308, _ctx); /*string*/
            _match_x2476 = kk_string_contains(_x_x5306,_x_x5307,kk_context()); /*bool*/
            if (_match_x2476) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(remaining, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_ref_drop(flags, _ctx);
              kk_string_t clean;
              kk_box_t _x_x5309;
              kk_box_t _x_x5321;
              kk_string_t _x_x5322;
              kk_define_string_literal(static, _s_x5323, 2, "--", _ctx)
              _x_x5322 = kk_string_dup(_s_x5323, _ctx); /*string*/
              _x_x5321 = kk_string_box(_x_x5322); /*10001*/
              _x_x5309 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5310(_ctx), kk_string_box(a), _x_x5321, _ctx); /*10002*/
              clean = kk_string_unbox(_x_x5309); /*string*/
              kk_std_core_types__list x_3_11315;
              bool _match_x2508;
              kk_string_t _x_x5324;
              kk_define_string_literal(static, _s_x5325, 1, "=", _ctx)
              _x_x5324 = kk_string_dup(_s_x5325, _ctx); /*string*/
              kk_string_t _x_x5326 = kk_string_empty(); /*string*/
              _match_x2508 = kk_string_is_eq(_x_x5324,_x_x5326,kk_context()); /*bool*/
              if (_match_x2508) {
                kk_std_core_types__list _b_x1295_1303 = kk_std_core_string_list(clean, _ctx); /*list<char>*/;
                kk_function_t _brw_x2509 = kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5328(_ctx); /*(10001) -> 10003 10002*/;
                kk_std_core_types__list _brw_x2510 = kk_std_core_list_map(_b_x1295_1303, _brw_x2509, _ctx); /*list<10002>*/;
                kk_function_drop(_brw_x2509, _ctx);
                x_3_11315 = _brw_x2510; /*list<string>*/
              }
              else {
                kk_box_t _x_x5331;
                kk_box_t _x_x5336;
                kk_string_t _x_x5337;
                kk_define_string_literal(static, _s_x5338, 1, "=", _ctx)
                _x_x5337 = kk_string_dup(_s_x5338, _ctx); /*string*/
                _x_x5336 = kk_string_box(_x_x5337); /*10001*/
                _x_x5331 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5332(_ctx), kk_string_box(clean), _x_x5336, _ctx); /*10002*/
                x_3_11315 = kk_std_core_types__list_unbox(_x_x5331, KK_OWNED, _ctx); /*list<string>*/
              }
              if (kk_yielding(kk_context())) {
                kk_std_core_types__list_drop(x_3_11315, _ctx);
                kk_box_t _x_x5339 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5340(error, options, spec, _ctx), _ctx); /*10001*/
                kk_unit_unbox(_x_x5339); return kk_Unit;
              }
              {
                kk_examples_basic__mlift_hc__parse__loop_11148(error, options, spec, x_3_11315, _ctx); return kk_Unit;
              }
            }
            {
              kk_std_core_types__maybe _x_x1_6_11052;
              kk_string_t _x_x5342 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5343;
              kk_define_string_literal(static, _s_x5344, 2, "--", _ctx)
              _x_x5343 = kk_string_dup(_s_x5344, _ctx); /*string*/
              _x_x1_6_11052 = kk_std_core_sslice_starts_with(_x_x5342, _x_x5343, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2477;
              kk_box_t _x_x5345 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5346(_ctx), kk_std_core_types__maybe_box(_x_x1_6_11052, _ctx), _ctx); /*10001*/
              _match_x2477 = kk_bool_unbox(_x_x5345); /*bool*/
              if (_match_x2477) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t name_0_0;
                kk_box_t _x_x5348;
                kk_box_t _x_x5360;
                kk_string_t _x_x5361;
                kk_define_string_literal(static, _s_x5362, 2, "--", _ctx)
                _x_x5361 = kk_string_dup(_s_x5362, _ctx); /*string*/
                _x_x5360 = kk_string_box(_x_x5361); /*10001*/
                _x_x5348 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5349(_ctx), kk_string_box(a), _x_x5360, _ctx); /*10002*/
                name_0_0 = kk_string_unbox(_x_x5348); /*string*/
                kk_std_core_types__list _x_x1_8_11055;
                kk_box_t _x_x5363;
                kk_box_t _x_x5367;
                kk_examples_basic__clispec _x_x5368 = kk_examples_basic__clispec_dup(spec, _ctx); /*examples/basic/clispec*/
                _x_x5367 = kk_examples_basic__clispec_box(_x_x5368, _ctx); /*10000*/
                _x_x5363 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5364(_ctx), _x_x5367, _ctx); /*10001*/
                _x_x1_8_11055 = kk_std_core_types__list_unbox(_x_x5363, KK_OWNED, _ctx); /*list<examples/basic/cliflag>*/
                kk_std_core_types__maybe _match_x2497;
                kk_box_t _x_x5369;
                kk_box_t _x_x5375;
                kk_string_t _x_x5376 = kk_string_dup(name_0_0, _ctx); /*string*/
                _x_x5375 = kk_string_box(_x_x5376); /*10001*/
                _x_x5369 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5370(_ctx), kk_std_core_types__list_box(_x_x1_8_11055, _ctx), _x_x5375, _ctx); /*10002*/
                _match_x2497 = kk_std_core_types__maybe_unbox(_x_x5369, KK_OWNED, _ctx); /*maybe<examples/basic/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2497, _ctx)) {
                  kk_box_t _box_x1341 = _match_x2497._cons.Just.value;
                  kk_examples_basic__cliflag _pat_24_0 = kk_examples_basic__cliflag_unbox(_box_x1341, KK_BORROWED, _ctx);
                  struct kk_examples_basic_Cliflag* _con_x5377 = kk_examples_basic__as_Cliflag(_pat_24_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2497, _ctx);
                  kk_std_core_types__list x_4_11317;
                  kk_box_t _x_x5378;
                  kk_ref_t _x_x5379 = kk_ref_dup(flags, _ctx); /*local-var<23359,list<string>>*/
                  _x_x5378 = kk_ref_get(_x_x5379,kk_context()); /*10000*/
                  x_4_11317 = kk_std_core_types__list_unbox(_x_x5378, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_4_11318 = kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5380(flags, name_0_0, _ctx); /*(list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_4_11317, _ctx);
                    kk_box_t _x_x5382 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5383(next_4_11318, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5382); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11318, (next_4_11318, x_4_11317, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_10_11058;
                  kk_box_t _x_x5386 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5387(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_10_11058 = kk_std_core_types__list_unbox(_x_x5386, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/
                  kk_std_core_types__maybe _match_x2498;
                  kk_box_t _x_x5390;
                  kk_box_t _x_x5396;
                  kk_string_t _x_x5397 = kk_string_dup(name_0_0, _ctx); /*string*/
                  _x_x5396 = kk_string_box(_x_x5397); /*10001*/
                  _x_x5390 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5391(_ctx), kk_std_core_types__list_box(_x_x1_10_11058, _ctx), _x_x5396, _ctx); /*10002*/
                  _match_x2498 = kk_std_core_types__maybe_unbox(_x_x5390, KK_OWNED, _ctx); /*maybe<examples/basic/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2498, _ctx)) {
                    kk_box_t _box_x1370 = _match_x2498._cons.Just.value;
                    kk_examples_basic__clioption _pat_30_0 = kk_examples_basic__clioption_unbox(_box_x1370, KK_BORROWED, _ctx);
                    struct kk_examples_basic_Clioption* _con_x5398 = kk_examples_basic__as_Clioption(_pat_30_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2498, _ctx);
                    kk_std_core_types__list x_5_11322;
                    kk_box_t _x_x5399;
                    kk_ref_t _x_x5400 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
                    _x_x5399 = kk_ref_get(_x_x5400,kk_context()); /*10000*/
                    x_5_11322 = kk_std_core_types__list_unbox(_x_x5399, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_5_11322, _ctx);
                      kk_box_t _x_x5401 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5402(error, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5401); return kk_Unit;
                    }
                    {
                      kk_examples_basic__mlift_hc__parse__loop_11155(error, name_0_0, options, remaining, x_5_11322, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1378_1688;
                    kk_string_t _x_x5404;
                    kk_define_string_literal(static, _s_x5405, 18, "unknown option: --", _ctx)
                    _x_x5404 = kk_string_dup(_s_x5405, _ctx); /*string*/
                    _b_x1378_1688 = kk_std_core_types__lp__plus__plus__rp_(_x_x5404, name_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2499 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1378_1688)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2499; return kk_Unit;
                  }
                }
              }
              {
                kk_std_core_types__maybe _x_x1_13_11063;
                kk_string_t _x_x5406 = kk_string_dup(a, _ctx); /*string*/
                kk_string_t _x_x5407;
                kk_define_string_literal(static, _s_x5408, 1, "-", _ctx)
                _x_x5407 = kk_string_dup(_s_x5408, _ctx); /*string*/
                _x_x1_13_11063 = kk_std_core_sslice_starts_with(_x_x5406, _x_x5407, _ctx); /*maybe<sslice/sslice>*/
                bool _match_x2478;
                kk_box_t _x_x5409 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5410(_ctx), kk_std_core_types__maybe_box(_x_x1_13_11063, _ctx), _ctx); /*10001*/
                _match_x2478 = kk_bool_unbox(_x_x5409); /*bool*/
                if (_match_x2478) {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(positionals, _ctx);
                  kk_string_t s_5;
                  kk_box_t _x_x5412;
                  kk_box_t _x_x5424;
                  kk_string_t _x_x5425;
                  kk_define_string_literal(static, _s_x5426, 1, "-", _ctx)
                  _x_x5425 = kk_string_dup(_s_x5426, _ctx); /*string*/
                  _x_x5424 = kk_string_box(_x_x5425); /*10001*/
                  _x_x5412 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5413(_ctx), kk_string_box(a), _x_x5424, _ctx); /*10002*/
                  s_5 = kk_string_unbox(_x_x5412); /*string*/
                  kk_std_core_types__list _x_x1_15_11066;
                  kk_box_t _x_x5427;
                  kk_box_t _x_x5431;
                  kk_examples_basic__clispec _x_x5432 = kk_examples_basic__clispec_dup(spec, _ctx); /*examples/basic/clispec*/
                  _x_x5431 = kk_examples_basic__clispec_box(_x_x5432, _ctx); /*10000*/
                  _x_x5427 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5428(_ctx), _x_x5431, _ctx); /*10001*/
                  _x_x1_15_11066 = kk_std_core_types__list_unbox(_x_x5427, KK_OWNED, _ctx); /*list<examples/basic/cliflag>*/
                  kk_std_core_types__maybe _match_x2486;
                  kk_box_t _x_x5433;
                  kk_box_t _x_x5439;
                  kk_string_t _x_x5440 = kk_string_dup(s_5, _ctx); /*string*/
                  _x_x5439 = kk_string_box(_x_x5440); /*10001*/
                  _x_x5433 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5434(_ctx), kk_std_core_types__list_box(_x_x1_15_11066, _ctx), _x_x5439, _ctx); /*10002*/
                  _match_x2486 = kk_std_core_types__maybe_unbox(_x_x5433, KK_OWNED, _ctx); /*maybe<examples/basic/cliflag>*/
                  if (kk_std_core_types__is_Just(_match_x2486, _ctx)) {
                    kk_box_t _box_x1408 = _match_x2486._cons.Just.value;
                    kk_examples_basic__cliflag f_1 = kk_examples_basic__cliflag_unbox(_box_x1408, KK_BORROWED, _ctx);
                    struct kk_examples_basic_Cliflag* _con_x5441 = kk_examples_basic__as_Cliflag(f_1, _ctx);
                    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                    kk_string_drop(s_5, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_ref_drop(error, _ctx);
                    kk_examples_basic__cliflag_dup(f_1, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2486, _ctx);
                    kk_std_core_types__list x_6_11324;
                    kk_box_t _x_x5442;
                    kk_ref_t _x_x5443 = kk_ref_dup(flags, _ctx); /*local-var<23359,list<string>>*/
                    _x_x5442 = kk_ref_get(_x_x5443,kk_context()); /*10000*/
                    x_6_11324 = kk_std_core_types__list_unbox(_x_x5442, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_6_11325 = kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5444(f_1, flags, _ctx); /*(list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_6_11324, _ctx);
                      kk_box_t _x_x5450 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5451(next_6_11325, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5450); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11325, (next_6_11325, x_6_11324, _ctx), _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(flags, _ctx);
                    kk_std_core_types__list _x_x1_18_11070;
                    kk_box_t _x_x5454 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5455(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
                    _x_x1_18_11070 = kk_std_core_types__list_unbox(_x_x5454, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/
                    kk_std_core_types__maybe _match_x2487;
                    kk_box_t _x_x5458;
                    kk_box_t _x_x5464;
                    kk_string_t _x_x5465 = kk_string_dup(s_5, _ctx); /*string*/
                    _x_x5464 = kk_string_box(_x_x5465); /*10001*/
                    _x_x5458 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5459(_ctx), kk_std_core_types__list_box(_x_x1_18_11070, _ctx), _x_x5464, _ctx); /*10002*/
                    _match_x2487 = kk_std_core_types__maybe_unbox(_x_x5458, KK_OWNED, _ctx); /*maybe<examples/basic/clioption>*/
                    if (kk_std_core_types__is_Just(_match_x2487, _ctx)) {
                      kk_box_t _box_x1443 = _match_x2487._cons.Just.value;
                      kk_examples_basic__clioption o_2 = kk_examples_basic__clioption_unbox(_box_x1443, KK_BORROWED, _ctx);
                      struct kk_examples_basic_Clioption* _con_x5466 = kk_examples_basic__as_Clioption(o_2, _ctx);
                      kk_examples_basic__clioption_dup(o_2, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2487, _ctx);
                      kk_std_core_types__list x_7_11329;
                      kk_box_t _x_x5467;
                      kk_ref_t _x_x5468 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
                      _x_x5467 = kk_ref_get(_x_x5468,kk_context()); /*10000*/
                      x_7_11329 = kk_std_core_types__list_unbox(_x_x5467, KK_OWNED, _ctx); /*list<string>*/
                      if (kk_yielding(kk_context())) {
                        kk_std_core_types__list_drop(x_7_11329, _ctx);
                        kk_box_t _x_x5469 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5470(error, o_2, options, remaining, s_5, _ctx), _ctx); /*10001*/
                        kk_unit_unbox(_x_x5469); return kk_Unit;
                      }
                      {
                        kk_examples_basic__mlift_hc__parse__loop_11162(error, o_2, options, remaining, s_5, x_7_11329, _ctx); return kk_Unit;
                      }
                    }
                    {
                      kk_ref_drop(remaining, _ctx);
                      kk_ref_drop(options, _ctx);
                      kk_string_t _b_x1451_1704;
                      kk_string_t _x_x5472;
                      kk_define_string_literal(static, _s_x5473, 17, "unknown option: -", _ctx)
                      _x_x5472 = kk_string_dup(_s_x5473, _ctx); /*string*/
                      _b_x1451_1704 = kk_std_core_types__lp__plus__plus__rp_(_x_x5472, s_5, _ctx); /*string*/
                      kk_unit_t _brw_x2488 = kk_Unit;
                      kk_ref_set_borrow(error,(kk_string_box(_b_x1451_1704)),kk_context());
                      kk_ref_drop(error, _ctx);
                      _brw_x2488; return kk_Unit;
                    }
                  }
                }
                {
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(flags, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__list _x_x1_22_11076;
                  kk_box_t _x_x5474 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5475(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_22_11076 = kk_std_core_types__list_unbox(_x_x5474, KK_OWNED, _ctx); /*list<(string, examples/basic/clispec)>*/
                  kk_std_core_types__maybe _match_x2479;
                  kk_box_t _x_x5478;
                  kk_box_t _x_x5483;
                  kk_string_t _x_x5484 = kk_string_dup(a, _ctx); /*string*/
                  _x_x5483 = kk_string_box(_x_x5484); /*10001*/
                  _x_x5478 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5479(_ctx), kk_std_core_types__list_box(_x_x1_22_11076, _ctx), _x_x5483, _ctx); /*10002*/
                  _match_x2479 = kk_std_core_types__maybe_unbox(_x_x5478, KK_OWNED, _ctx); /*maybe<(string, examples/basic/clispec)>*/
                  if (kk_std_core_types__is_Just(_match_x2479, _ctx)) {
                    kk_box_t _box_x1468 = _match_x2479._cons.Just.value;
                    kk_ref_drop(positionals, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2479, _ctx);
                    kk_unit_t x_8_11331 = kk_Unit;
                    kk_unit_t _brw_x2483 = kk_Unit;
                    kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                    kk_ref_drop(subcmd, _ctx);
                    _brw_x2483;
                    if (kk_yielding(kk_context())) {
                      kk_box_t _x_x5485 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5486(remaining, sub__args, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5485); return kk_Unit;
                    }
                    {
                      kk_examples_basic__mlift_hc__parse__loop_11165(remaining, sub__args, x_8_11331, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(subcmd, _ctx);
                    kk_ref_drop(sub__args, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_std_core_types__list x_9_11333;
                    kk_box_t _x_x5488;
                    kk_ref_t _x_x5489 = kk_ref_dup(positionals, _ctx); /*local-var<23359,list<string>>*/
                    _x_x5488 = kk_ref_get(_x_x5489,kk_context()); /*10000*/
                    x_9_11333 = kk_std_core_types__list_unbox(_x_x5488, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_9_11334 = kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5490(a, positionals, _ctx); /*(list<string>) -> <local<23359>,examples/basic/hica-brk,exn,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_9_11333, _ctx);
                      kk_box_t _x_x5492 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5493(next_9_11334, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5492); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11334, (next_9_11334, x_9_11333, _ctx), _ctx); return kk_Unit;
                    }
                  }
                }
              }
            }
          }
          {
            kk_std_core_types__maybe _x_x1_24_11079;
            kk_string_t _x_x5496 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5497;
            kk_define_string_literal(static, _s_x5498, 2, "--", _ctx)
            _x_x5497 = kk_string_dup(_s_x5498, _ctx); /*string*/
            _x_x1_24_11079 = kk_std_core_sslice_starts_with(_x_x5496, _x_x5497, _ctx); /*maybe<sslice/sslice>*/
            bool _match_x2446;
            kk_box_t _x_x5499 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5500(_ctx), kk_std_core_types__maybe_box(_x_x1_24_11079, _ctx), _ctx); /*10001*/
            _match_x2446 = kk_bool_unbox(_x_x5499); /*bool*/
            if (_match_x2446) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_string_t name_0_0_0_0;
              kk_box_t _x_x5502;
              kk_box_t _x_x5514;
              kk_string_t _x_x5515;
              kk_define_string_literal(static, _s_x5516, 2, "--", _ctx)
              _x_x5515 = kk_string_dup(_s_x5516, _ctx); /*string*/
              _x_x5514 = kk_string_box(_x_x5515); /*10001*/
              _x_x5502 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5503(_ctx), kk_string_box(a), _x_x5514, _ctx); /*10002*/
              name_0_0_0_0 = kk_string_unbox(_x_x5502); /*string*/
              kk_std_core_types__list _x_x1_26_11082;
              kk_box_t _x_x5517;
              kk_box_t _x_x5521;
              kk_examples_basic__clispec _x_x5522 = kk_examples_basic__clispec_dup(spec, _ctx); /*examples/basic/clispec*/
              _x_x5521 = kk_examples_basic__clispec_box(_x_x5522, _ctx); /*10000*/
              _x_x5517 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5518(_ctx), _x_x5521, _ctx); /*10001*/
              _x_x1_26_11082 = kk_std_core_types__list_unbox(_x_x5517, KK_OWNED, _ctx); /*list<examples/basic/cliflag>*/
              kk_std_core_types__maybe _match_x2466;
              kk_box_t _x_x5523;
              kk_box_t _x_x5529;
              kk_string_t _x_x5530 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
              _x_x5529 = kk_string_box(_x_x5530); /*10001*/
              _x_x5523 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5524(_ctx), kk_std_core_types__list_box(_x_x1_26_11082, _ctx), _x_x5529, _ctx); /*10002*/
              _match_x2466 = kk_std_core_types__maybe_unbox(_x_x5523, KK_OWNED, _ctx); /*maybe<examples/basic/cliflag>*/
              if (kk_std_core_types__is_Just(_match_x2466, _ctx)) {
                kk_box_t _box_x1518 = _match_x2466._cons.Just.value;
                kk_examples_basic__cliflag _pat_24_0_0 = kk_examples_basic__cliflag_unbox(_box_x1518, KK_BORROWED, _ctx);
                struct kk_examples_basic_Cliflag* _con_x5531 = kk_examples_basic__as_Cliflag(_pat_24_0_0, _ctx);
                kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                kk_ref_drop(remaining, _ctx);
                kk_ref_drop(options, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__maybe_drop(_match_x2466, _ctx);
                kk_std_core_types__list x_10_11338;
                kk_box_t _x_x5532;
                kk_ref_t _x_x5533 = kk_ref_dup(flags, _ctx); /*local-var<23359,list<string>>*/
                _x_x5532 = kk_ref_get(_x_x5533,kk_context()); /*10000*/
                x_10_11338 = kk_std_core_types__list_unbox(_x_x5532, KK_OWNED, _ctx); /*list<string>*/
                kk_function_t next_10_11339 = kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5534(flags, name_0_0_0_0, _ctx); /*(list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> ()*/;
                if (kk_yielding(kk_context())) {
                  kk_std_core_types__list_drop(x_10_11338, _ctx);
                  kk_box_t _x_x5536 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5537(next_10_11339, _ctx), _ctx); /*10001*/
                  kk_unit_unbox(_x_x5536); return kk_Unit;
                }
                {
                  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11339, (next_10_11339, x_10_11338, _ctx), _ctx); return kk_Unit;
                }
              }
              {
                kk_ref_drop(flags, _ctx);
                kk_std_core_types__list _x_x1_28_11085;
                kk_box_t _x_x5540 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5541(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_28_11085 = kk_std_core_types__list_unbox(_x_x5540, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/
                kk_std_core_types__maybe _match_x2467;
                kk_box_t _x_x5544;
                kk_box_t _x_x5550;
                kk_string_t _x_x5551 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
                _x_x5550 = kk_string_box(_x_x5551); /*10001*/
                _x_x5544 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5545(_ctx), kk_std_core_types__list_box(_x_x1_28_11085, _ctx), _x_x5550, _ctx); /*10002*/
                _match_x2467 = kk_std_core_types__maybe_unbox(_x_x5544, KK_OWNED, _ctx); /*maybe<examples/basic/clioption>*/
                if (kk_std_core_types__is_Just(_match_x2467, _ctx)) {
                  kk_box_t _box_x1547 = _match_x2467._cons.Just.value;
                  kk_examples_basic__clioption _pat_30_0_0 = kk_examples_basic__clioption_unbox(_box_x1547, KK_BORROWED, _ctx);
                  struct kk_examples_basic_Clioption* _con_x5552 = kk_examples_basic__as_Clioption(_pat_30_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2467, _ctx);
                  kk_std_core_types__list x_11_11343;
                  kk_box_t _x_x5553;
                  kk_ref_t _x_x5554 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
                  _x_x5553 = kk_ref_get(_x_x5554,kk_context()); /*10000*/
                  x_11_11343 = kk_std_core_types__list_unbox(_x_x5553, KK_OWNED, _ctx); /*list<string>*/
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_11_11343, _ctx);
                    kk_box_t _x_x5555 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5556(error, name_0_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5555); return kk_Unit;
                  }
                  {
                    kk_examples_basic__mlift_hc__parse__loop_11173(error, name_0_0_0_0, options, remaining, x_11_11343, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_string_t _b_x1555_1727;
                  kk_string_t _x_x5558;
                  kk_define_string_literal(static, _s_x5559, 18, "unknown option: --", _ctx)
                  _x_x5558 = kk_string_dup(_s_x5559, _ctx); /*string*/
                  _b_x1555_1727 = kk_std_core_types__lp__plus__plus__rp_(_x_x5558, name_0_0_0_0, _ctx); /*string*/
                  kk_unit_t _brw_x2468 = kk_Unit;
                  kk_ref_set_borrow(error,(kk_string_box(_b_x1555_1727)),kk_context());
                  kk_ref_drop(error, _ctx);
                  _brw_x2468; return kk_Unit;
                }
              }
            }
            {
              kk_std_core_types__maybe _x_x1_31_11090;
              kk_string_t _x_x5560 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5561;
              kk_define_string_literal(static, _s_x5562, 1, "-", _ctx)
              _x_x5561 = kk_string_dup(_s_x5562, _ctx); /*string*/
              _x_x1_31_11090 = kk_std_core_sslice_starts_with(_x_x5560, _x_x5561, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2447;
              kk_box_t _x_x5563 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5564(_ctx), kk_std_core_types__maybe_box(_x_x1_31_11090, _ctx), _ctx); /*10001*/
              _match_x2447 = kk_bool_unbox(_x_x5563); /*bool*/
              if (_match_x2447) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t s_0_0;
                kk_box_t _x_x5566;
                kk_box_t _x_x5578;
                kk_string_t _x_x5579;
                kk_define_string_literal(static, _s_x5580, 1, "-", _ctx)
                _x_x5579 = kk_string_dup(_s_x5580, _ctx); /*string*/
                _x_x5578 = kk_string_box(_x_x5579); /*10001*/
                _x_x5566 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5567(_ctx), kk_string_box(a), _x_x5578, _ctx); /*10002*/
                s_0_0 = kk_string_unbox(_x_x5566); /*string*/
                kk_std_core_types__list _x_x1_33_11093;
                kk_box_t _x_x5581;
                kk_box_t _x_x5585;
                kk_examples_basic__clispec _x_x5586 = kk_examples_basic__clispec_dup(spec, _ctx); /*examples/basic/clispec*/
                _x_x5585 = kk_examples_basic__clispec_box(_x_x5586, _ctx); /*10000*/
                _x_x5581 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5582(_ctx), _x_x5585, _ctx); /*10001*/
                _x_x1_33_11093 = kk_std_core_types__list_unbox(_x_x5581, KK_OWNED, _ctx); /*list<examples/basic/cliflag>*/
                kk_std_core_types__maybe _match_x2455;
                kk_box_t _x_x5587;
                kk_box_t _x_x5593;
                kk_string_t _x_x5594 = kk_string_dup(s_0_0, _ctx); /*string*/
                _x_x5593 = kk_string_box(_x_x5594); /*10001*/
                _x_x5587 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5588(_ctx), kk_std_core_types__list_box(_x_x1_33_11093, _ctx), _x_x5593, _ctx); /*10002*/
                _match_x2455 = kk_std_core_types__maybe_unbox(_x_x5587, KK_OWNED, _ctx); /*maybe<examples/basic/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2455, _ctx)) {
                  kk_box_t _box_x1585 = _match_x2455._cons.Just.value;
                  kk_examples_basic__cliflag f_0_0 = kk_examples_basic__cliflag_unbox(_box_x1585, KK_BORROWED, _ctx);
                  struct kk_examples_basic_Cliflag* _con_x5595 = kk_examples_basic__as_Cliflag(f_0_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_string_drop(s_0_0, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_examples_basic__cliflag_dup(f_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2455, _ctx);
                  kk_std_core_types__list x_12_11345;
                  kk_box_t _x_x5596;
                  kk_ref_t _x_x5597 = kk_ref_dup(flags, _ctx); /*local-var<23359,list<string>>*/
                  _x_x5596 = kk_ref_get(_x_x5597,kk_context()); /*10000*/
                  x_12_11345 = kk_std_core_types__list_unbox(_x_x5596, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_12_11346 = kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5598(f_0_0, flags, _ctx); /*(list<string>) -> <local<23359>,exn,examples/basic/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_12_11345, _ctx);
                    kk_box_t _x_x5604 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5605(next_12_11346, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5604); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11346, (next_12_11346, x_12_11345, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_36_11097;
                  kk_box_t _x_x5608 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5609(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_36_11097 = kk_std_core_types__list_unbox(_x_x5608, KK_OWNED, _ctx); /*list<examples/basic/clioption>*/
                  kk_std_core_types__maybe _match_x2456;
                  kk_box_t _x_x5612;
                  kk_box_t _x_x5618;
                  kk_string_t _x_x5619 = kk_string_dup(s_0_0, _ctx); /*string*/
                  _x_x5618 = kk_string_box(_x_x5619); /*10001*/
                  _x_x5612 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5613(_ctx), kk_std_core_types__list_box(_x_x1_36_11097, _ctx), _x_x5618, _ctx); /*10002*/
                  _match_x2456 = kk_std_core_types__maybe_unbox(_x_x5612, KK_OWNED, _ctx); /*maybe<examples/basic/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2456, _ctx)) {
                    kk_box_t _box_x1620 = _match_x2456._cons.Just.value;
                    kk_examples_basic__clioption o_0_0 = kk_examples_basic__clioption_unbox(_box_x1620, KK_BORROWED, _ctx);
                    struct kk_examples_basic_Clioption* _con_x5620 = kk_examples_basic__as_Clioption(o_0_0, _ctx);
                    kk_examples_basic__clioption_dup(o_0_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2456, _ctx);
                    kk_std_core_types__list x_13_11350;
                    kk_box_t _x_x5621;
                    kk_ref_t _x_x5622 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
                    _x_x5621 = kk_ref_get(_x_x5622,kk_context()); /*10000*/
                    x_13_11350 = kk_std_core_types__list_unbox(_x_x5621, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_13_11350, _ctx);
                      kk_box_t _x_x5623 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5624(error, o_0_0, options, remaining, s_0_0, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5623); return kk_Unit;
                    }
                    {
                      kk_examples_basic__mlift_hc__parse__loop_11180(error, o_0_0, options, remaining, s_0_0, x_13_11350, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1628_1743;
                    kk_string_t _x_x5626;
                    kk_define_string_literal(static, _s_x5627, 17, "unknown option: -", _ctx)
                    _x_x5626 = kk_string_dup(_s_x5627, _ctx); /*string*/
                    _b_x1628_1743 = kk_std_core_types__lp__plus__plus__rp_(_x_x5626, s_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2457 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1628_1743)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2457; return kk_Unit;
                  }
                }
              }
              {
                kk_ref_drop(options, _ctx);
                kk_ref_drop(flags, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__list _x_x1_40_11103;
                kk_box_t _x_x5628 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5629(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_40_11103 = kk_std_core_types__list_unbox(_x_x5628, KK_OWNED, _ctx); /*list<(string, examples/basic/clispec)>*/
                kk_std_core_types__maybe _match_x2448;
                kk_box_t _x_x5632;
                kk_box_t _x_x5637;
                kk_string_t _x_x5638 = kk_string_dup(a, _ctx); /*string*/
                _x_x5637 = kk_string_box(_x_x5638); /*10001*/
                _x_x5632 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5633(_ctx), kk_std_core_types__list_box(_x_x1_40_11103, _ctx), _x_x5637, _ctx); /*10002*/
                _match_x2448 = kk_std_core_types__maybe_unbox(_x_x5632, KK_OWNED, _ctx); /*maybe<(string, examples/basic/clispec)>*/
                if (kk_std_core_types__is_Just(_match_x2448, _ctx)) {
                  kk_box_t _box_x1645 = _match_x2448._cons.Just.value;
                  kk_ref_drop(positionals, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2448, _ctx);
                  kk_unit_t x_14_11352 = kk_Unit;
                  kk_unit_t _brw_x2452 = kk_Unit;
                  kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                  kk_ref_drop(subcmd, _ctx);
                  _brw_x2452;
                  if (kk_yielding(kk_context())) {
                    kk_box_t _x_x5639 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5640(remaining, sub__args, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5639); return kk_Unit;
                  }
                  {
                    kk_examples_basic__mlift_hc__parse__loop_11183(remaining, sub__args, x_14_11352, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_std_core_types__list x_15_11354;
                  kk_box_t _x_x5642;
                  kk_ref_t _x_x5643 = kk_ref_dup(positionals, _ctx); /*local-var<23359,list<string>>*/
                  _x_x5642 = kk_ref_get(_x_x5643,kk_context()); /*10000*/
                  x_15_11354 = kk_std_core_types__list_unbox(_x_x5642, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_15_11355 = kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5644(a, positionals, _ctx); /*(list<string>) -> <local<23359>,examples/basic/hica-brk,exn,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_15_11354, _ctx);
                    kk_box_t _x_x5646 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11185_fun5647(next_15_11355, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5646); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11355, (next_15_11355, x_15_11354, _ctx), _ctx); return kk_Unit;
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
struct kk_examples_basic__mlift_hc__parse__loop_11186_fun5651__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_examples_basic__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11186_fun5651(kk_function_t _fself, kk_box_t _b_x1802, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11186_fun5651(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_examples_basic__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11186_fun5651__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11186_fun5651__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11186_fun5651, kk_context());
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

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11186_fun5651(kk_function_t _fself, kk_box_t _b_x1802, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11186_fun5651__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11186_fun5651__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_examples_basic__clispec spec = _self->spec; /* examples/basic/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_examples_basic__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_unit_t wild___1804 = kk_Unit;
  kk_unit_unbox(_b_x1802);
  kk_unit_t _x_x5652 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11185(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, wild___1804, _ctx);
  return kk_unit_box(_x_x5652);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11186(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_examples_basic__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10767, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1798_1800 = kk_std_core_list_drop(_y_x10767, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t x_11359 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1798_1800, _ctx)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5650 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11186_fun5651(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5650); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11185(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11359, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11187_fun5656__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_examples_basic__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11187_fun5656(kk_function_t _fself, kk_box_t _b_x1810, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11187_fun5656(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_examples_basic__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11187_fun5656__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11187_fun5656__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11187_fun5656, kk_context());
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

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11187_fun5656(kk_function_t _fself, kk_box_t _b_x1810, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11187_fun5656__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11187_fun5656__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_examples_basic__clispec spec = _self->spec; /* examples/basic/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_examples_basic__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10767_1812 = kk_std_core_types__list_unbox(_b_x1810, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5657 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11186(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _y_x10767_1812, _ctx);
  return kk_unit_box(_x_x5657);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11187(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_examples_basic__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t a, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, a : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list x_11361;
  kk_box_t _x_x5653;
  kk_ref_t _x_x5654 = kk_ref_dup(remaining, _ctx); /*local-var<23359,list<string>>*/
  _x_x5653 = kk_ref_get(_x_x5654,kk_context()); /*10000*/
  x_11361 = kk_std_core_types__list_unbox(_x_x5653, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11361, _ctx);
    kk_box_t _x_x5655 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11187_fun5656(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5655); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11186(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11361, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11188_fun5668__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11188_fun5668(kk_function_t _fself, kk_box_t _b_x1820, kk_box_t _b_x1821, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11188_fun5668(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__parse__loop_11188_fun5668, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11188_fun5668(kk_function_t _fself, kk_box_t _b_x1820, kk_box_t _b_x1821, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5669;
  kk_std_core_types__maybe _match_x2438 = kk_std_core_types__maybe_unbox(_b_x1820, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2438, _ctx)) {
    kk_box_t _box_x1813 = _match_x2438._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x1813);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2438, _ctx);
    kk_box_drop(_b_x1821, _ctx);
    _x_x5669 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x1814_1826;
    kk_string_t _x_x5670;
    kk_define_string_literal(static, _s_x5671, 22, "unexpected Nothing in ", _ctx)
    _x_x5670 = kk_string_dup(_s_x5671, _ctx); /*string*/
    kk_string_t _x_x5672 = kk_string_unbox(_b_x1821); /*string*/
    _b_x1814_1826 = kk_std_core_types__lp__plus__plus__rp_(_x_x5670, _x_x5672, _ctx); /*string*/
    kk_box_t _x_x5673 = kk_std_core_exn_throw(_b_x1814_1826, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5669 = kk_string_unbox(_x_x5673); /*string*/
  }
  return kk_string_box(_x_x5669);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11188_fun5675__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_examples_basic__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11188_fun5675(kk_function_t _fself, kk_box_t _b_x1831, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11188_fun5675(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_examples_basic__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11188_fun5675__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11188_fun5675__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11188_fun5675, kk_context());
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

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11188_fun5675(kk_function_t _fself, kk_box_t _b_x1831, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11188_fun5675__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11188_fun5675__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23359,string> */
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23359,list<string>> */
  kk_examples_basic__clispec spec = _self->spec; /* examples/basic/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_examples_basic__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t a_1833 = kk_string_unbox(_b_x1831); /*string*/;
  kk_unit_t _x_x5676 = kk_Unit;
  kk_examples_basic__mlift_hc__parse__loop_11187(error, flags, options, positionals, remaining, spec, sub__args, subcmd, a_1833, _ctx);
  return kk_unit_box(_x_x5676);
}

kk_unit_t kk_examples_basic__mlift_hc__parse__loop_11188(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_examples_basic__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10765, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_11040 = kk_std_core_list__index(_y_x10765, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11041;
  kk_string_t _x_x5658;
  kk_define_string_literal(static, _s_x5659, 17, "examples/basic.kk", _ctx)
  _x_x5658 = kk_string_dup(_s_x5659, _ctx); /*string*/
  kk_string_t _x_x5660;
  kk_string_t _x_x5661;
  kk_define_string_literal(static, _s_x5662, 1, "(", _ctx)
  _x_x5661 = kk_string_dup(_s_x5662, _ctx); /*string*/
  kk_string_t _x_x5663;
  kk_string_t _x_x5664 = kk_std_core_int_show(kk_integer_from_small(746), _ctx); /*string*/
  kk_string_t _x_x5665;
  kk_define_string_literal(static, _s_x5666, 1, ")", _ctx)
  _x_x5665 = kk_string_dup(_s_x5666, _ctx); /*string*/
  _x_x5663 = kk_std_core_types__lp__plus__plus__rp_(_x_x5664, _x_x5665, _ctx); /*string*/
  _x_x5660 = kk_std_core_types__lp__plus__plus__rp_(_x_x5661, _x_x5663, _ctx); /*string*/
  _x_x2_11041 = kk_std_core_types__lp__plus__plus__rp_(_x_x5658, _x_x5660, _ctx); /*string*/
  kk_ssize_t _b_x1816_1822 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11363;
  kk_box_t _x_x5667 = kk_std_core_hnd__open_at2(_b_x1816_1822, kk_examples_basic__new_mlift_hc__parse__loop_11188_fun5668(_ctx), kk_std_core_types__maybe_box(_x_x1_11040, _ctx), kk_string_box(_x_x2_11041), _ctx); /*10002*/
  x_11363 = kk_string_unbox(_x_x5667); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11363, _ctx);
    kk_box_t _x_x5674 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11188_fun5675(error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5674); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11187(error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11363, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__parse__loop_11189_fun5679__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11189_fun5679(kk_function_t _fself, kk_box_t _b_x1839, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__parse__loop_11189_fun5679(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11189_fun5679__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__parse__loop_11189_fun5679__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__parse__loop_11189_fun5679, kk_context());
  _self->flags = flags;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__parse__loop_11189_fun5679(kk_function_t _fself, kk_box_t _b_x1839, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__parse__loop_11189_fun5679__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__parse__loop_11189_fun5679__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23359,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23359,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23359,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23359,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t _y_x10884_1841 = kk_string_unbox(_b_x1839); /*string*/;
  kk_examples_basic__parseraw _x_x5680 = kk_examples_basic__mlift_hc__parse__loop_11137(flags, options, positionals, sub__args, subcmd, _y_x10884_1841, _ctx); /*examples/basic/parseraw*/
  return kk_examples_basic__parseraw_box(_x_x5680, _ctx);
}

kk_examples_basic__parseraw kk_examples_basic__mlift_hc__parse__loop_11189(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t _y_x10883, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, ()) -> <div,exn,local<h>> parseraw */ 
  {
    kk_string_t x_11365;
    kk_box_t _x_x5677 = kk_ref_get(error,kk_context()); /*10000*/
    x_11365 = kk_string_unbox(_x_x5677); /*string*/
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_11365, _ctx);
      kk_box_t _x_x5678 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__parse__loop_11189_fun5679(flags, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
      return kk_examples_basic__parseraw_unbox(_x_x5678, KK_OWNED, _ctx);
    }
    {
      return kk_examples_basic__mlift_hc__parse__loop_11137(flags, options, positionals, sub__args, subcmd, x_11365, _ctx);
    }
  }
}


// lift anonymous function
struct kk_examples_basic_hc__parse__loop_fun5690__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__parse__loop_fun5690(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5690(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__parse__loop_fun5690, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_hc__parse__loop_fun5691__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__parse__loop_fun5691(kk_function_t _fself, kk_function_t _b_x1865, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5691(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__parse__loop_fun5691, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_hc__parse__loop_fun5692__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__parse__loop_fun5692(kk_function_t _fself, kk_box_t _b_x1859, kk_function_t _b_x1860, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5692(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__parse__loop_fun5692, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__parse__loop_fun5692(kk_function_t _fself, kk_box_t _b_x1859, kk_function_t _b_x1860, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_drop(_b_x1859, _ctx);
  kk_function_drop(_b_x1860, _ctx);
  return kk_unit_box(kk_Unit);
}
static kk_box_t kk_examples_basic_hc__parse__loop_fun5691(kk_function_t _fself, kk_function_t _b_x1865, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_hnd_protect(kk_unit_box(kk_Unit), kk_examples_basic_new_hc__parse__loop_fun5692(_ctx), _b_x1865, _ctx);
}
static kk_box_t kk_examples_basic_hc__parse__loop_fun5690(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_datatype_ptr_dropn(___wildcard_x688__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to(m, kk_examples_basic_new_hc__parse__loop_fun5691(_ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__parse__loop_fun5693__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__parse__loop_fun5693(kk_function_t _fself, kk_box_t _b_x1882, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5693(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__parse__loop_fun5693, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__parse__loop_fun5693(kk_function_t _fself, kk_box_t _b_x1882, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return _b_x1882;
}


// lift anonymous function
struct kk_examples_basic_hc__parse__loop_fun5695__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_examples_basic__clispec spec;
};
static kk_box_t kk_examples_basic_hc__parse__loop_fun5695(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5695(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_examples_basic__clispec spec, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5695__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__parse__loop_fun5695__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__parse__loop_fun5695, kk_context());
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
struct kk_examples_basic_hc__parse__loop_fun5698__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
};
static bool kk_examples_basic_hc__parse__loop_fun5698(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5698(kk_ref_t loc_4, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5698__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__parse__loop_fun5698__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__parse__loop_fun5698, kk_context());
  _self->loc_4 = loc_4;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_examples_basic_hc__parse__loop_fun5701__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
};
static kk_box_t kk_examples_basic_hc__parse__loop_fun5701(kk_function_t _fself, kk_box_t _b_x1872, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5701(kk_ref_t loc_4, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5701__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__parse__loop_fun5701__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__parse__loop_fun5701, kk_context());
  _self->loc_4 = loc_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__parse__loop_fun5701(kk_function_t _fself, kk_box_t _b_x1872, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5701__t* _self = kk_function_as(struct kk_examples_basic_hc__parse__loop_fun5701__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);}, {}, _ctx)
  bool _x_x5702;
  kk_string_t _x_x5703 = kk_string_unbox(_b_x1872); /*string*/
  _x_x5702 = kk_examples_basic__mlift_hc__parse__loop_11139(loc_4, _x_x5703, _ctx); /*bool*/
  return kk_bool_box(_x_x5702);
}
static bool kk_examples_basic_hc__parse__loop_fun5698(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5698__t* _self = kk_function_as(struct kk_examples_basic_hc__parse__loop_fun5698__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_string_t x_0_11384;
  kk_box_t _x_x5699 = kk_ref_get(loc_5,kk_context()); /*10000*/
  x_0_11384 = kk_string_unbox(_x_x5699); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_0_11384, _ctx);
    kk_box_t _x_x5700 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__parse__loop_fun5701(loc_4, _ctx), _ctx); /*10001*/
    return kk_bool_unbox(_x_x5700);
  }
  {
    return kk_examples_basic__mlift_hc__parse__loop_11139(loc_4, x_0_11384, _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__parse__loop_fun5704__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_examples_basic__clispec spec;
};
static kk_unit_t kk_examples_basic_hc__parse__loop_fun5704(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5704(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_examples_basic__clispec spec, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5704__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__parse__loop_fun5704__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__parse__loop_fun5704, kk_context());
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
struct kk_examples_basic_hc__parse__loop_fun5708__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_examples_basic__clispec spec;
};
static kk_box_t kk_examples_basic_hc__parse__loop_fun5708(kk_function_t _fself, kk_box_t _b_x1878, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5708(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_examples_basic__clispec spec, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5708__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__parse__loop_fun5708__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__parse__loop_fun5708, kk_context());
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

static kk_box_t kk_examples_basic_hc__parse__loop_fun5708(kk_function_t _fself, kk_box_t _b_x1878, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5708__t* _self = kk_function_as(struct kk_examples_basic_hc__parse__loop_fun5708__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23359,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23359,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23359,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23359,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23359,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_examples_basic__clispec spec = _self->spec; /* examples/basic/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_examples_basic__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5709 = kk_Unit;
  kk_std_core_types__list _x_x5710 = kk_std_core_types__list_unbox(_b_x1878, KK_OWNED, _ctx); /*list<string>*/
  kk_examples_basic__mlift_hc__parse__loop_11188(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, _x_x5710, _ctx);
  return kk_unit_box(_x_x5709);
}
static kk_unit_t kk_examples_basic_hc__parse__loop_fun5704(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5704__t* _self = kk_function_as(struct kk_examples_basic_hc__parse__loop_fun5704__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23359,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23359,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23359,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23359,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23359,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_examples_basic__clispec spec = _self->spec; /* examples/basic/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_examples_basic__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list x_1_11386;
  kk_box_t _x_x5705;
  kk_ref_t _x_x5706 = kk_ref_dup(loc_4, _ctx); /*local-var<23359,list<string>>*/
  _x_x5705 = kk_ref_get(_x_x5706,kk_context()); /*10000*/
  x_1_11386 = kk_std_core_types__list_unbox(_x_x5705, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_1_11386, _ctx);
    kk_box_t _x_x5707 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__parse__loop_fun5708(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5707); return kk_Unit;
  }
  {
    kk_examples_basic__mlift_hc__parse__loop_11188(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, x_1_11386, _ctx); return kk_Unit;
  }
}
static kk_box_t kk_examples_basic_hc__parse__loop_fun5695(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5695__t* _self = kk_function_as(struct kk_examples_basic_hc__parse__loop_fun5695__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23359,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23359,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23359,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23359,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23359,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_examples_basic__clispec spec = _self->spec; /* examples/basic/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_examples_basic__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5696 = kk_Unit;
  kk_function_t _x_x5697;
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5697 = kk_examples_basic_new_hc__parse__loop_fun5698(loc_4, loc_5, _ctx); /*() -> <div,local<23359>,exn,examples/basic/hica-brk> bool*/
  kk_std_core_while(_x_x5697, kk_examples_basic_new_hc__parse__loop_fun5704(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx);
  return kk_unit_box(_x_x5696);
}


// lift anonymous function
struct kk_examples_basic_hc__parse__loop_fun5713__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_5;
};
static kk_box_t kk_examples_basic_hc__parse__loop_fun5713(kk_function_t _fself, kk_box_t _b_x1898, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__parse__loop_fun5713(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5713__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__parse__loop_fun5713__t, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__parse__loop_fun5713, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  _self->loc_1 = loc_1;
  _self->loc_2 = loc_2;
  _self->loc_3 = loc_3;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__parse__loop_fun5713(kk_function_t _fself, kk_box_t _b_x1898, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__parse__loop_fun5713__t* _self = kk_function_as(struct kk_examples_basic_hc__parse__loop_fun5713__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23359,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23359,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23359,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23359,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23359,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23359,string> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_examples_basic__parseraw _x_x5714;
  kk_unit_t _x_x5715 = kk_Unit;
  kk_unit_unbox(_b_x1898);
  _x_x5714 = kk_examples_basic__mlift_hc__parse__loop_11189(loc_5, loc, loc_0, loc_1, loc_3, loc_2, _x_x5715, _ctx); /*examples/basic/parseraw*/
  return kk_examples_basic__parseraw_box(_x_x5714, _ctx);
}

kk_examples_basic__parseraw kk_examples_basic_hc__parse__loop(kk_examples_basic__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure parseraw */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23359,list<string>>*/;
  kk_ref_t loc_0 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23359,list<(string, string)>>*/;
  kk_ref_t loc_1 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23359,list<string>>*/;
  kk_ref_t loc_2;
  kk_box_t _x_x5681;
  kk_string_t _x_x5682 = kk_string_empty(); /*string*/
  _x_x5681 = kk_string_box(_x_x5682); /*10000*/
  loc_2 = kk_ref_alloc(_x_x5681,kk_context()); /*local-var<23359,string>*/
  kk_ref_t loc_3 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23359,list<string>>*/;
  kk_ref_t loc_4 = kk_ref_alloc((kk_std_core_types__list_box(args, _ctx)),kk_context()); /*local-var<23359,list<string>>*/;
  kk_ref_t loc_5;
  kk_box_t _x_x5684;
  kk_string_t _x_x5685 = kk_string_empty(); /*string*/
  _x_x5684 = kk_string_box(_x_x5685); /*10000*/
  loc_5 = kk_ref_alloc(_x_x5684,kk_context()); /*local-var<23359,string>*/
  kk_unit_t x_11381 = kk_Unit;
  kk_box_t _x_x5687;
  kk_examples_basic__hica_brk _x_x5688;
  kk_std_core_hnd__clause0 _x_x5689 = kk_std_core_hnd__new_Clause0(kk_examples_basic_new_hc__parse__loop_fun5690(_ctx), _ctx); /*hnd/clause0<10010,10011,10012,10013>*/
  _x_x5688 = kk_examples_basic__new_Hnd_hica_brk(kk_reuse_null, 0, kk_integer_from_small(3), _x_x5689, _ctx); /*examples/basic/hica-brk<30,31>*/
  kk_function_t _x_x5694;
  kk_ref_dup(loc, _ctx);
  kk_ref_dup(loc_0, _ctx);
  kk_ref_dup(loc_1, _ctx);
  kk_ref_dup(loc_2, _ctx);
  kk_ref_dup(loc_3, _ctx);
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5694 = kk_examples_basic_new_hc__parse__loop_fun5695(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx); /*() -> <examples/basic/hica-brk|658> 657*/
  _x_x5687 = kk_examples_basic_hica_brk_fs__handle(_x_x5688, kk_examples_basic_new_hc__parse__loop_fun5693(_ctx), _x_x5694, _ctx); /*659*/
  kk_unit_unbox(_x_x5687);
  kk_examples_basic__parseraw res_5;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5711;
    kk_function_t _x_x5712;
    kk_ref_dup(loc, _ctx);
    kk_ref_dup(loc_0, _ctx);
    kk_ref_dup(loc_1, _ctx);
    kk_ref_dup(loc_2, _ctx);
    kk_ref_dup(loc_3, _ctx);
    kk_ref_dup(loc_5, _ctx);
    _x_x5712 = kk_examples_basic_new_hc__parse__loop_fun5713(loc, loc_0, loc_1, loc_2, loc_3, loc_5, _ctx); /*(10000) -> 10002 10001*/
    _x_x5711 = kk_std_core_hnd_yield_extend(_x_x5712, _ctx); /*10001*/
    res_5 = kk_examples_basic__parseraw_unbox(_x_x5711, KK_OWNED, _ctx); /*examples/basic/parseraw*/
  }
  else {
    kk_ref_t _x_x5716 = kk_ref_dup(loc_5, _ctx); /*local-var<23359,string>*/
    kk_ref_t _x_x5717 = kk_ref_dup(loc, _ctx); /*local-var<23359,list<string>>*/
    kk_ref_t _x_x5718 = kk_ref_dup(loc_0, _ctx); /*local-var<23359,list<(string, string)>>*/
    kk_ref_t _x_x5719 = kk_ref_dup(loc_1, _ctx); /*local-var<23359,list<string>>*/
    kk_ref_t _x_x5720 = kk_ref_dup(loc_3, _ctx); /*local-var<23359,list<string>>*/
    kk_ref_t _x_x5721 = kk_ref_dup(loc_2, _ctx); /*local-var<23359,string>*/
    res_5 = kk_examples_basic__mlift_hc__parse__loop_11189(_x_x5716, _x_x5717, _x_x5718, _x_x5719, _x_x5720, _x_x5721, x_11381, _ctx); /*examples/basic/parseraw*/
  }
  kk_examples_basic__parseraw res_4;
  kk_box_t _x_x5722 = kk_std_core_hnd_prompt_local_var(loc_5, kk_examples_basic__parseraw_box(res_5, _ctx), _ctx); /*10001*/
  res_4 = kk_examples_basic__parseraw_unbox(_x_x5722, KK_OWNED, _ctx); /*examples/basic/parseraw*/
  kk_examples_basic__parseraw res_3;
  kk_box_t _x_x5723 = kk_std_core_hnd_prompt_local_var(loc_4, kk_examples_basic__parseraw_box(res_4, _ctx), _ctx); /*10001*/
  res_3 = kk_examples_basic__parseraw_unbox(_x_x5723, KK_OWNED, _ctx); /*examples/basic/parseraw*/
  kk_examples_basic__parseraw res_2;
  kk_box_t _x_x5724 = kk_std_core_hnd_prompt_local_var(loc_3, kk_examples_basic__parseraw_box(res_3, _ctx), _ctx); /*10001*/
  res_2 = kk_examples_basic__parseraw_unbox(_x_x5724, KK_OWNED, _ctx); /*examples/basic/parseraw*/
  kk_examples_basic__parseraw res_1;
  kk_box_t _x_x5725 = kk_std_core_hnd_prompt_local_var(loc_2, kk_examples_basic__parseraw_box(res_2, _ctx), _ctx); /*10001*/
  res_1 = kk_examples_basic__parseraw_unbox(_x_x5725, KK_OWNED, _ctx); /*examples/basic/parseraw*/
  kk_examples_basic__parseraw res_0;
  kk_box_t _x_x5726 = kk_std_core_hnd_prompt_local_var(loc_1, kk_examples_basic__parseraw_box(res_1, _ctx), _ctx); /*10001*/
  res_0 = kk_examples_basic__parseraw_unbox(_x_x5726, KK_OWNED, _ctx); /*examples/basic/parseraw*/
  kk_examples_basic__parseraw res;
  kk_box_t _x_x5727 = kk_std_core_hnd_prompt_local_var(loc_0, kk_examples_basic__parseraw_box(res_0, _ctx), _ctx); /*10001*/
  res = kk_examples_basic__parseraw_unbox(_x_x5727, KK_OWNED, _ctx); /*examples/basic/parseraw*/
  kk_box_t _x_x5728 = kk_std_core_hnd_prompt_local_var(loc, kk_examples_basic__parseraw_box(res, _ctx), _ctx); /*10001*/
  return kk_examples_basic__parseraw_unbox(_x_x5728, KK_OWNED, _ctx);
}
 
// monadic lift

kk_examples_basic__clioutcome kk_examples_basic__mlift_hc__cli__parse__args_11190(kk_std_core_types__list final__options, kk_std_core_types__list flags, kk_std_core_types__list positionals, kk_string_t subcmd, kk_examples_basic__clioutcome _y_x10900, kk_context_t* _ctx) { /* (final_options : list<(string, string)>, flags : list<string>, positionals : list<string>, subcmd : string, clioutcome) -> pure clioutcome */ 
  if (kk_examples_basic__is_Parsed(_y_x10900, _ctx)) {
    struct kk_examples_basic_Parsed* _con_x5729 = kk_examples_basic__as_Parsed(_y_x10900, _ctx);
    kk_examples_basic__cliresult hc__sub_0 = _con_x5729->cli__result;
    struct kk_examples_basic_Cliresult* _con_x5730 = kk_examples_basic__as_Cliresult(hc__sub_0, _ctx);
    kk_reuse_t _ru_x3079 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10900, _ctx)) {
      _ru_x3079 = (kk_datatype_ptr_reuse(_y_x10900, _ctx));
    }
    else {
      kk_examples_basic__cliresult_dup(hc__sub_0, _ctx);
      kk_datatype_ptr_decref(_y_x10900, _ctx);
    }
    kk_examples_basic__cliresult _b_x1932_1933 = hc__sub_0; /*examples/basic/cliresult*/;
    if kk_likely(_ru_x3079!=NULL) {
      kk_std_core_types__maybe _x_x5732 = kk_std_core_types__new_Just(kk_examples_basic__cliresult_box(_b_x1932_1933, _ctx), _ctx); /*maybe<10024>*/
      struct kk_examples_basic_Parsed* _con_x5731 = (struct kk_examples_basic_Parsed*)_ru_x3079;
      _con_x5731->cli__result = kk_examples_basic__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5732, _ctx);
      return kk_examples_basic__base_Parsed(_con_x5731, _ctx);
    }
    {
      kk_examples_basic__cliresult _x_x5733;
      kk_std_core_types__maybe _x_x5734 = kk_std_core_types__new_Just(kk_examples_basic__cliresult_box(_b_x1932_1933, _ctx), _ctx); /*maybe<10024>*/
      _x_x5733 = kk_examples_basic__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5734, _ctx); /*examples/basic/cliresult*/
      return kk_examples_basic__new_Parsed(kk_reuse_null, 0, _x_x5733, _ctx);
    }
  }
  {
    kk_string_drop(subcmd, _ctx);
    kk_std_core_types__list_drop(positionals, _ctx);
    kk_std_core_types__list_drop(flags, _ctx);
    kk_std_core_types__list_drop(final__options, _ctx);
    return _y_x10900;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5736__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5736(kk_function_t _fself, kk_box_t _b_x1936, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5736(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5736, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5736(kk_function_t _fself, kk_box_t _b_x1936, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5737;
  kk_examples_basic__parseraw _match_x2432 = kk_examples_basic__parseraw_unbox(_b_x1936, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5738 = kk_examples_basic__as_Parseraw(_match_x2432, _ctx);
    kk_string_t _x = _con_x5738->raw__error;
    kk_std_core_types__list _pat_0 = _con_x5738->raw__flags;
    kk_std_core_types__list _pat_1 = _con_x5738->raw__options;
    kk_std_core_types__list _pat_2 = _con_x5738->raw__positionals;
    kk_string_t _pat_3 = _con_x5738->raw__subcmd;
    kk_std_core_types__list _pat_4 = _con_x5738->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2432, _ctx)) {
      kk_std_core_types__list_drop(_pat_4, _ctx);
      kk_string_drop(_pat_3, _ctx);
      kk_std_core_types__list_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2432, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2432, _ctx);
    }
    _x_x5737 = _x; /*string*/
  }
  return kk_string_box(_x_x5737);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5742__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5742(kk_function_t _fself, kk_box_t _b_x1942, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5742(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5742, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5742(kk_function_t _fself, kk_box_t _b_x1942, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5743;
  kk_examples_basic__parseraw _match_x2431 = kk_examples_basic__parseraw_unbox(_b_x1942, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5744 = kk_examples_basic__as_Parseraw(_match_x2431, _ctx);
    kk_string_t _pat_0_0 = _con_x5744->raw__error;
    kk_std_core_types__list _x_0 = _con_x5744->raw__flags;
    kk_std_core_types__list _pat_1_0 = _con_x5744->raw__options;
    kk_std_core_types__list _pat_2_0 = _con_x5744->raw__positionals;
    kk_string_t _pat_3_0 = _con_x5744->raw__subcmd;
    kk_std_core_types__list _pat_4_0 = _con_x5744->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2431, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_string_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2431, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2431, _ctx);
    }
    _x_x5743 = _x_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5743, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5748__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5748(kk_function_t _fself, kk_box_t _b_x1948, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5748(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5748, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5748(kk_function_t _fself, kk_box_t _b_x1948, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5749;
  kk_examples_basic__parseraw _match_x2430 = kk_examples_basic__parseraw_unbox(_b_x1948, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5750 = kk_examples_basic__as_Parseraw(_match_x2430, _ctx);
    kk_string_t _pat_0_1 = _con_x5750->raw__error;
    kk_std_core_types__list _pat_1_1 = _con_x5750->raw__flags;
    kk_std_core_types__list _x_1 = _con_x5750->raw__options;
    kk_std_core_types__list _pat_2_1 = _con_x5750->raw__positionals;
    kk_string_t _pat_3_1 = _con_x5750->raw__subcmd;
    kk_std_core_types__list _pat_4_1 = _con_x5750->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2430, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_string_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_std_core_types__list_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2430, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2430, _ctx);
    }
    _x_x5749 = _x_1; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5749, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5754__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5754(kk_function_t _fself, kk_box_t _b_x1954, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5754(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5754, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5754(kk_function_t _fself, kk_box_t _b_x1954, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5755;
  kk_examples_basic__parseraw _match_x2429 = kk_examples_basic__parseraw_unbox(_b_x1954, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5756 = kk_examples_basic__as_Parseraw(_match_x2429, _ctx);
    kk_string_t _pat_0_2 = _con_x5756->raw__error;
    kk_std_core_types__list _pat_1_2 = _con_x5756->raw__flags;
    kk_std_core_types__list _pat_2_2 = _con_x5756->raw__options;
    kk_std_core_types__list _x_2 = _con_x5756->raw__positionals;
    kk_string_t _pat_3_2 = _con_x5756->raw__subcmd;
    kk_std_core_types__list _pat_4_2 = _con_x5756->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2429, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_string_drop(_pat_3_2, _ctx);
      kk_std_core_types__list_drop(_pat_2_2, _ctx);
      kk_std_core_types__list_drop(_pat_1_2, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(_match_x2429, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2429, _ctx);
    }
    _x_x5755 = _x_2; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5755, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5760__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5760(kk_function_t _fself, kk_box_t _b_x1960, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5760(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5760, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5760(kk_function_t _fself, kk_box_t _b_x1960, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5761;
  kk_examples_basic__parseraw _match_x2428 = kk_examples_basic__parseraw_unbox(_b_x1960, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5762 = kk_examples_basic__as_Parseraw(_match_x2428, _ctx);
    kk_string_t _pat_0_3 = _con_x5762->raw__error;
    kk_std_core_types__list _pat_1_3 = _con_x5762->raw__flags;
    kk_std_core_types__list _pat_2_3 = _con_x5762->raw__options;
    kk_std_core_types__list _pat_3_3 = _con_x5762->raw__positionals;
    kk_string_t _x_3 = _con_x5762->raw__subcmd;
    kk_std_core_types__list _pat_4_3 = _con_x5762->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2428, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_std_core_types__list_drop(_pat_2_3, _ctx);
      kk_std_core_types__list_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(_match_x2428, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2428, _ctx);
    }
    _x_x5761 = _x_3; /*string*/
  }
  return kk_string_box(_x_x5761);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5766__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5766(kk_function_t _fself, kk_box_t _b_x1966, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5766(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5766, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5766(kk_function_t _fself, kk_box_t _b_x1966, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5767;
  kk_examples_basic__parseraw _match_x2427 = kk_examples_basic__parseraw_unbox(_b_x1966, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5768 = kk_examples_basic__as_Parseraw(_match_x2427, _ctx);
    kk_string_t _pat_0_4 = _con_x5768->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x5768->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x5768->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x5768->raw__positionals;
    kk_string_t _pat_4_4 = _con_x5768->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x5768->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2427, _ctx)) {
      kk_string_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_std_core_types__list_drop(_pat_2_4, _ctx);
      kk_std_core_types__list_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(_match_x2427, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2427, _ctx);
    }
    _x_x5767 = _x_4; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5767, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5777__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5777(kk_function_t _fself, kk_box_t _b_x1972, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5777(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5777, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5777(kk_function_t _fself, kk_box_t _b_x1972, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5778;
  bool b_2070 = kk_bool_unbox(_b_x1972); /*bool*/;
  if (b_2070) {
    _x_x5778 = false; /*bool*/
  }
  else {
    _x_x5778 = true; /*bool*/
  }
  return kk_bool_box(_x_x5778);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5780__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5780(kk_function_t _fself, kk_box_t _b_x1981, kk_box_t _b_x1982, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5780(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5780, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5783__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5783(kk_function_t _fself, kk_box_t _b_x1976, kk_box_t _b_x1977, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5783(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5783, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5783(kk_function_t _fself, kk_box_t _b_x1976, kk_box_t _b_x1977, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5784;
  kk_std_core_types__list _x_x5785 = kk_std_core_types__list_unbox(_b_x1976, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_examples_basic__clioption _x_x5786 = kk_examples_basic__clioption_unbox(_b_x1977, KK_OWNED, _ctx); /*examples/basic/clioption*/
  _x_x5784 = kk_examples_basic_hc__add__default(_x_x5785, _x_x5786, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5784, _ctx);
}
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5780(kk_function_t _fself, kk_box_t _b_x1981, kk_box_t _b_x1982, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5781;
  kk_examples_basic__clispec _match_x2424 = kk_examples_basic__clispec_unbox(_b_x1981, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5782 = kk_examples_basic__as_Clispec(_match_x2424, _ctx);
    kk_string_t _pat_0_7 = _con_x5782->app__name;
    kk_string_t _pat_1_6 = _con_x5782->app__version;
    kk_string_t _pat_2_6 = _con_x5782->app__about;
    kk_std_core_types__list _pat_3_6 = _con_x5782->app__flags;
    kk_std_core_types__list _x_5 = _con_x5782->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5782->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5782->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2424, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_6, _ctx);
      kk_string_drop(_pat_0_7, _ctx);
      kk_datatype_ptr_free(_match_x2424, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2424, _ctx);
    }
    _x_x5781 = _x_5; /*list<examples/basic/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x5781, _b_x1982, kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5783(_ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5790__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5790(kk_function_t _fself, kk_box_t _b_x2005, kk_box_t _b_x2006, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5790(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5790, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5793__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5793(kk_function_t _fself, kk_integer_t _b_x1995, kk_box_t _b_x1996, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5793(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5793, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5793(kk_function_t _fself, kk_integer_t _b_x1995, kk_box_t _b_x1996, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x5794 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x1995, _ctx), _b_x1996, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5794, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5798__t {
  struct kk_function_s _base;
  kk_box_t _b_x2006;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5798(kk_function_t _fself, kk_box_t _b_x2000, kk_box_t _b_x2001, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5798(kk_box_t _b_x2006, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5798__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5798__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5798, kk_context());
  _self->_b_x2006 = _b_x2006;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5798(kk_function_t _fself, kk_box_t _b_x2000, kk_box_t _b_x2001, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5798__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5798__t*, _fself, _ctx);
  kk_box_t _b_x2006 = _self->_b_x2006; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2006, _ctx);}, {}, _ctx)
  kk_string_t _x_x5799;
  kk_std_core_types__list _x_x5800 = kk_std_core_types__list_unbox(_b_x2006, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x5801 = kk_string_unbox(_b_x2000); /*string*/
  kk_std_core_types__tuple2 _x_x5802 = kk_std_core_types__tuple2_unbox(_b_x2001, KK_OWNED, _ctx); /*(int, examples/basic/cliarg)*/
  _x_x5799 = kk_examples_basic_hc__check__one__arg(_x_x5800, _x_x5801, _x_x5802, _ctx); /*string*/
  return kk_string_box(_x_x5799);
}
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5790(kk_function_t _fself, kk_box_t _b_x2005, kk_box_t _b_x2006, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x1997_2010;
  kk_std_core_types__list _x_x5791;
  kk_examples_basic__clispec _match_x2423 = kk_examples_basic__clispec_unbox(_b_x2005, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5792 = kk_examples_basic__as_Clispec(_match_x2423, _ctx);
    kk_string_t _pat_0_8 = _con_x5792->app__name;
    kk_string_t _pat_1_7 = _con_x5792->app__version;
    kk_string_t _pat_2_7 = _con_x5792->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5792->app__flags;
    kk_std_core_types__list _pat_4_7 = _con_x5792->app__options;
    kk_std_core_types__list _x_6 = _con_x5792->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5792->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2423, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_8, _ctx);
      kk_datatype_ptr_free(_match_x2423, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2423, _ctx);
    }
    _x_x5791 = _x_6; /*list<examples/basic/cliarg>*/
  }
  _b_x1997_2010 = kk_std_core_list_map_indexed(_x_x5791, kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5793(_ctx), _ctx); /*list<(int, examples/basic/cliarg)>*/
  kk_box_t _x_x5795;
  kk_string_t _x_x5796 = kk_string_empty(); /*string*/
  _x_x5795 = kk_string_box(_x_x5796); /*10002*/
  return kk_std_core_list_foldl(_b_x1997_2010, _x_x5795, kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5798(_b_x2006, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5809__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5809(kk_function_t _fself, kk_box_t _b_x2023, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5809(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5809, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5809(kk_function_t _fself, kk_box_t _b_x2023, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5810;
  bool b_0_2071 = kk_bool_unbox(_b_x2023); /*bool*/;
  if (b_0_2071) {
    _x_x5810 = false; /*bool*/
  }
  else {
    _x_x5810 = true; /*bool*/
  }
  return kk_bool_box(_x_x5810);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5813__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5813(kk_function_t _fself, kk_box_t _b_x2026, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5813(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5813, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5813(kk_function_t _fself, kk_box_t _b_x2026, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5814;
  bool b_1_2072 = kk_bool_unbox(_b_x2026); /*bool*/;
  if (b_1_2072) {
    _x_x5814 = false; /*bool*/
  }
  else {
    _x_x5814 = true; /*bool*/
  }
  return kk_bool_box(_x_x5814);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5816__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5816(kk_function_t _fself, kk_box_t _b_x2029, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5816(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5816, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5816(kk_function_t _fself, kk_box_t _b_x2029, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5817;
  kk_examples_basic__clispec _match_x2418 = kk_examples_basic__clispec_unbox(_b_x2029, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5818 = kk_examples_basic__as_Clispec(_match_x2418, _ctx);
    kk_string_t _pat_0_11 = _con_x5818->app__name;
    kk_string_t _pat_1_7_0 = _con_x5818->app__version;
    kk_string_t _pat_2_7_0 = _con_x5818->app__about;
    kk_std_core_types__list _pat_3_7_0 = _con_x5818->app__flags;
    kk_std_core_types__list _pat_4_7_0 = _con_x5818->app__options;
    kk_std_core_types__list _pat_5_2 = _con_x5818->app__args;
    kk_std_core_types__list _x_7 = _con_x5818->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2418, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0, _ctx);
      kk_string_drop(_pat_2_7_0, _ctx);
      kk_string_drop(_pat_1_7_0, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2418, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2418, _ctx);
    }
    _x_x5817 = _x_7; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5817, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5820__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5820(kk_function_t _fself, kk_box_t _b_x2041, kk_box_t _b_x2042, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5820(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5820, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5822__t {
  struct kk_function_s _base;
  kk_string_t name_2074;
};
static bool kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5822(kk_function_t _fself, kk_box_t _b_x2037, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5822(kk_string_t name_2074, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5822__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5822__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5822, kk_context());
  _self->name_2074 = name_2074;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5822(kk_function_t _fself, kk_box_t _b_x2037, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5822__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5822__t*, _fself, _ctx);
  kk_string_t name_2074 = _self->name_2074; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2074, _ctx);}, {}, _ctx)
  kk_string_t _x_x5823;
  kk_std_core_types__tuple2 _match_x2417 = kk_std_core_types__tuple2_unbox(_b_x2037, KK_OWNED, _ctx); /*(string, examples/basic/clispec)*/;
  {
    kk_box_t _box_x2033 = _match_x2417.fst;
    kk_box_t _box_x2034 = _match_x2417.snd;
    kk_string_t _x_6_0 = kk_string_unbox(_box_x2033);
    kk_string_dup(_x_6_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2417, _ctx);
    _x_x5823 = _x_6_0; /*string*/
  }
  return kk_string_is_eq(_x_x5823,name_2074,kk_context());
}
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5820(kk_function_t _fself, kk_box_t _b_x2041, kk_box_t _b_x2042, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5821;
  kk_std_core_types__list commands_2073 = kk_std_core_types__list_unbox(_b_x2041, KK_OWNED, _ctx); /*list<(string, examples/basic/clispec)>*/;
  kk_string_t name_2074 = kk_string_unbox(_b_x2042); /*string*/;
  _x_x5821 = kk_std_core_list_find(commands_2073, kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5822(name_2074, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5821, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5828__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5828(kk_function_t _fself, kk_box_t _b_x2048, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5828(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5828, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5828(kk_function_t _fself, kk_box_t _b_x2048, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_examples_basic__clispec _x_x5829;
  kk_std_core_types__tuple2 _match_x2416 = kk_std_core_types__tuple2_unbox(_b_x2048, KK_OWNED, _ctx); /*(string, examples/basic/clispec)*/;
  {
    kk_box_t _box_x2044 = _match_x2416.fst;
    kk_box_t _box_x2045 = _match_x2416.snd;
    kk_examples_basic__clispec _x_8 = kk_examples_basic__clispec_unbox(_box_x2045, KK_BORROWED, _ctx);
    kk_examples_basic__clispec_dup(_x_8, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2416, _ctx);
    _x_x5829 = _x_8; /*examples/basic/clispec*/
  }
  return kk_examples_basic__clispec_box(_x_x5829, _ctx);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5831__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_0;
  kk_std_core_types__list flags_0;
  kk_std_core_types__list positionals_0;
  kk_string_t subcmd_0;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5831(kk_function_t _fself, kk_box_t _b_x2053, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5831(kk_std_core_types__list final__options_0, kk_std_core_types__list flags_0, kk_std_core_types__list positionals_0, kk_string_t subcmd_0, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5831__t* _self = kk_function_alloc_as(struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5831__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5831, kk_context());
  _self->final__options_0 = final__options_0;
  _self->flags_0 = flags_0;
  _self->positionals_0 = positionals_0;
  _self->subcmd_0 = subcmd_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5831(kk_function_t _fself, kk_box_t _b_x2053, kk_context_t* _ctx) {
  struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5831__t* _self = kk_function_as(struct kk_examples_basic__mlift_hc__cli__parse__args_11191_fun5831__t*, _fself, _ctx);
  kk_std_core_types__list final__options_0 = _self->final__options_0; /* list<(string, string)> */
  kk_std_core_types__list flags_0 = _self->flags_0; /* list<string> */
  kk_std_core_types__list positionals_0 = _self->positionals_0; /* list<string> */
  kk_string_t subcmd_0 = _self->subcmd_0; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_0, _ctx);kk_std_core_types__list_dup(flags_0, _ctx);kk_std_core_types__list_dup(positionals_0, _ctx);kk_string_dup(subcmd_0, _ctx);}, {}, _ctx)
  kk_examples_basic__clioutcome _y_x10900_0_2069 = kk_examples_basic__clioutcome_unbox(_b_x2053, KK_OWNED, _ctx); /*examples/basic/clioutcome*/;
  kk_examples_basic__clioutcome _x_x5832 = kk_examples_basic__mlift_hc__cli__parse__args_11190(final__options_0, flags_0, positionals_0, subcmd_0, _y_x10900_0_2069, _ctx); /*examples/basic/clioutcome*/
  return kk_examples_basic__clioutcome_box(_x_x5832, _ctx);
}

kk_examples_basic__clioutcome kk_examples_basic__mlift_hc__cli__parse__args_11191(kk_examples_basic__clispec spec, kk_examples_basic__parseraw hc__raw, kk_context_t* _ctx) { /* (spec : clispec, hc_raw : parseraw) -> pure clioutcome */ 
  kk_string_t error;
  kk_box_t _x_x5735;
  kk_box_t _x_x5739;
  kk_examples_basic__parseraw _x_x5740 = kk_examples_basic__parseraw_dup(hc__raw, _ctx); /*examples/basic/parseraw*/
  _x_x5739 = kk_examples_basic__parseraw_box(_x_x5740, _ctx); /*10000*/
  _x_x5735 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5736(_ctx), _x_x5739, _ctx); /*10001*/
  error = kk_string_unbox(_x_x5735); /*string*/
  kk_std_core_types__list flags_0;
  kk_box_t _x_x5741;
  kk_box_t _x_x5745;
  kk_examples_basic__parseraw _x_x5746 = kk_examples_basic__parseraw_dup(hc__raw, _ctx); /*examples/basic/parseraw*/
  _x_x5745 = kk_examples_basic__parseraw_box(_x_x5746, _ctx); /*10000*/
  _x_x5741 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5742(_ctx), _x_x5745, _ctx); /*10001*/
  flags_0 = kk_std_core_types__list_unbox(_x_x5741, KK_OWNED, _ctx); /*list<string>*/
  kk_std_core_types__list options;
  kk_box_t _x_x5747;
  kk_box_t _x_x5751;
  kk_examples_basic__parseraw _x_x5752 = kk_examples_basic__parseraw_dup(hc__raw, _ctx); /*examples/basic/parseraw*/
  _x_x5751 = kk_examples_basic__parseraw_box(_x_x5752, _ctx); /*10000*/
  _x_x5747 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5748(_ctx), _x_x5751, _ctx); /*10001*/
  options = kk_std_core_types__list_unbox(_x_x5747, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_std_core_types__list positionals_0;
  kk_box_t _x_x5753;
  kk_box_t _x_x5757;
  kk_examples_basic__parseraw _x_x5758 = kk_examples_basic__parseraw_dup(hc__raw, _ctx); /*examples/basic/parseraw*/
  _x_x5757 = kk_examples_basic__parseraw_box(_x_x5758, _ctx); /*10000*/
  _x_x5753 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5754(_ctx), _x_x5757, _ctx); /*10001*/
  positionals_0 = kk_std_core_types__list_unbox(_x_x5753, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t subcmd_0;
  kk_box_t _x_x5759;
  kk_box_t _x_x5763;
  kk_examples_basic__parseraw _x_x5764 = kk_examples_basic__parseraw_dup(hc__raw, _ctx); /*examples/basic/parseraw*/
  _x_x5763 = kk_examples_basic__parseraw_box(_x_x5764, _ctx); /*10000*/
  _x_x5759 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5760(_ctx), _x_x5763, _ctx); /*10001*/
  subcmd_0 = kk_string_unbox(_x_x5759); /*string*/
  kk_std_core_types__list sub__args;
  kk_box_t _x_x5765 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5766(_ctx), kk_examples_basic__parseraw_box(hc__raw, _ctx), _ctx); /*10001*/
  sub__args = kk_std_core_types__list_unbox(_x_x5765, KK_OWNED, _ctx); /*list<string>*/
  bool _match_x2409;
  kk_string_t _x_x5769 = kk_string_dup(error, _ctx); /*string*/
  kk_string_t _x_x5770;
  kk_define_string_literal(static, _s_x5771, 8, "__help__", _ctx)
  _x_x5770 = kk_string_dup(_s_x5771, _ctx); /*string*/
  _match_x2409 = kk_string_is_eq(_x_x5769,_x_x5770,kk_context()); /*bool*/
  if (_match_x2409) {
    kk_string_drop(subcmd_0, _ctx);
    kk_std_core_types__list_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_std_core_types__list_drop(positionals_0, _ctx);
    kk_std_core_types__list_drop(options, _ctx);
    kk_std_core_types__list_drop(flags_0, _ctx);
    kk_string_drop(error, _ctx);
    return kk_examples_basic__new_Help(_ctx);
  }
  {
    bool _match_x2410;
    kk_string_t _x_x5772 = kk_string_dup(error, _ctx); /*string*/
    kk_string_t _x_x5773;
    kk_define_string_literal(static, _s_x5774, 11, "__version__", _ctx)
    _x_x5773 = kk_string_dup(_s_x5774, _ctx); /*string*/
    _match_x2410 = kk_string_is_eq(_x_x5772,_x_x5773,kk_context()); /*bool*/
    if (_match_x2410) {
      kk_string_drop(subcmd_0, _ctx);
      kk_std_core_types__list_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_0, _ctx);
      kk_std_core_types__list_drop(options, _ctx);
      kk_std_core_types__list_drop(flags_0, _ctx);
      kk_string_drop(error, _ctx);
      return kk_examples_basic__new_Version(_ctx);
    }
    {
      bool _x_x1_5_11112;
      kk_integer_t _brw_x2425;
      kk_string_t _x_x5775 = kk_string_dup(error, _ctx); /*string*/
      _brw_x2425 = kk_std_core_string_chars_fs_count(_x_x5775, _ctx); /*int*/
      bool _brw_x2426 = kk_integer_eq_borrow(_brw_x2425,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2425, _ctx);
      _x_x1_5_11112 = _brw_x2426; /*bool*/
      bool _match_x2411;
      kk_box_t _x_x5776 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5777(_ctx), kk_bool_box(_x_x1_5_11112), _ctx); /*10001*/
      _match_x2411 = kk_bool_unbox(_x_x5776); /*bool*/
      if (_match_x2411) {
        kk_string_drop(subcmd_0, _ctx);
        kk_std_core_types__list_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_0, _ctx);
        kk_std_core_types__list_drop(options, _ctx);
        kk_std_core_types__list_drop(flags_0, _ctx);
        return kk_examples_basic__new_CliError(kk_reuse_null, 0, error, _ctx);
      }
      {
        kk_string_drop(error, _ctx);
        kk_std_core_types__list final__options_0;
        kk_box_t _x_x5779;
        kk_box_t _x_x5787;
        kk_examples_basic__clispec _x_x5788 = kk_examples_basic__clispec_dup(spec, _ctx); /*examples/basic/clispec*/
        _x_x5787 = kk_examples_basic__clispec_box(_x_x5788, _ctx); /*10000*/
        _x_x5779 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5780(_ctx), _x_x5787, kk_std_core_types__list_box(options, _ctx), _ctx); /*10002*/
        final__options_0 = kk_std_core_types__list_unbox(_x_x5779, KK_OWNED, _ctx); /*list<(string, string)>*/
        kk_string_t req__err;
        kk_box_t _x_x5789;
        kk_box_t _x_x5803;
        kk_examples_basic__clispec _x_x5804 = kk_examples_basic__clispec_dup(spec, _ctx); /*examples/basic/clispec*/
        _x_x5803 = kk_examples_basic__clispec_box(_x_x5804, _ctx); /*10000*/
        kk_box_t _x_x5805;
        kk_std_core_types__list _x_x5806 = kk_std_core_types__list_dup(positionals_0, _ctx); /*list<string>*/
        _x_x5805 = kk_std_core_types__list_box(_x_x5806, _ctx); /*10001*/
        _x_x5789 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5790(_ctx), _x_x5803, _x_x5805, _ctx); /*10002*/
        req__err = kk_string_unbox(_x_x5789); /*string*/
        bool _x_x1_8_11117;
        kk_integer_t _brw_x2421;
        kk_string_t _x_x5807 = kk_string_dup(req__err, _ctx); /*string*/
        _brw_x2421 = kk_std_core_string_chars_fs_count(_x_x5807, _ctx); /*int*/
        bool _brw_x2422 = kk_integer_eq_borrow(_brw_x2421,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2421, _ctx);
        _x_x1_8_11117 = _brw_x2422; /*bool*/
        bool _match_x2412;
        kk_box_t _x_x5808 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5809(_ctx), kk_bool_box(_x_x1_8_11117), _ctx); /*10001*/
        _match_x2412 = kk_bool_unbox(_x_x5808); /*bool*/
        if (_match_x2412) {
          kk_string_drop(subcmd_0, _ctx);
          kk_std_core_types__list_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_0, _ctx);
          kk_std_core_types__list_drop(flags_0, _ctx);
          kk_std_core_types__list_drop(final__options_0, _ctx);
          return kk_examples_basic__new_CliError(kk_reuse_null, 0, req__err, _ctx);
        }
        {
          kk_string_drop(req__err, _ctx);
          bool _x_x1_9_11118;
          kk_integer_t _brw_x2419;
          kk_string_t _x_x5811 = kk_string_dup(subcmd_0, _ctx); /*string*/
          _brw_x2419 = kk_std_core_string_chars_fs_count(_x_x5811, _ctx); /*int*/
          bool _brw_x2420 = kk_integer_eq_borrow(_brw_x2419,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2419, _ctx);
          _x_x1_9_11118 = _brw_x2420; /*bool*/
          bool _match_x2413;
          kk_box_t _x_x5812 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5813(_ctx), kk_bool_box(_x_x1_9_11118), _ctx); /*10001*/
          _match_x2413 = kk_bool_unbox(_x_x5812); /*bool*/
          if (_match_x2413) {
            kk_std_core_types__list _x_x1_10_11119;
            kk_box_t _x_x5815 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5816(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
            _x_x1_10_11119 = kk_std_core_types__list_unbox(_x_x5815, KK_OWNED, _ctx); /*list<(string, examples/basic/clispec)>*/
            kk_std_core_types__maybe _match_x2414;
            kk_box_t _x_x5819;
            kk_box_t _x_x5824;
            kk_string_t _x_x5825 = kk_string_dup(subcmd_0, _ctx); /*string*/
            _x_x5824 = kk_string_box(_x_x5825); /*10001*/
            _x_x5819 = kk_std_core_hnd__open_none2(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5820(_ctx), kk_std_core_types__list_box(_x_x1_10_11119, _ctx), _x_x5824, _ctx); /*10002*/
            _match_x2414 = kk_std_core_types__maybe_unbox(_x_x5819, KK_OWNED, _ctx); /*maybe<(string, examples/basic/clispec)>*/
            if (kk_std_core_types__is_Just(_match_x2414, _ctx)) {
              kk_box_t _box_x2043 = _match_x2414._cons.Just.value;
              kk_std_core_types__tuple2 pair_0_0 = kk_std_core_types__tuple2_unbox(_box_x2043, KK_BORROWED, _ctx);
              kk_std_core_types__tuple2_dup(pair_0_0, _ctx);
              kk_std_core_types__maybe_drop(_match_x2414, _ctx);
              kk_examples_basic__clioutcome x_11388;
              kk_examples_basic__clispec _x_x5826;
              kk_box_t _x_x5827 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5828(_ctx), kk_std_core_types__tuple2_box(pair_0_0, _ctx), _ctx); /*10001*/
              _x_x5826 = kk_examples_basic__clispec_unbox(_x_x5827, KK_OWNED, _ctx); /*examples/basic/clispec*/
              x_11388 = kk_examples_basic_hc__cli__parse__args(_x_x5826, sub__args, _ctx); /*examples/basic/clioutcome*/
              if (kk_yielding(kk_context())) {
                kk_examples_basic__clioutcome_drop(x_11388, _ctx);
                kk_box_t _x_x5830 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__cli__parse__args_11191_fun5831(final__options_0, flags_0, positionals_0, subcmd_0, _ctx), _ctx); /*10001*/
                return kk_examples_basic__clioutcome_unbox(_x_x5830, KK_OWNED, _ctx);
              }
              {
                return kk_examples_basic__mlift_hc__cli__parse__args_11190(final__options_0, flags_0, positionals_0, subcmd_0, x_11388, _ctx);
              }
            }
            {
              kk_std_core_types__list_drop(sub__args, _ctx);
              kk_std_core_types__list_drop(positionals_0, _ctx);
              kk_std_core_types__list_drop(flags_0, _ctx);
              kk_std_core_types__list_drop(final__options_0, _ctx);
              kk_string_t _x_x5833;
              kk_string_t _x_x5834;
              kk_define_string_literal(static, _s_x5835, 17, "unknown command: ", _ctx)
              _x_x5834 = kk_string_dup(_s_x5835, _ctx); /*string*/
              _x_x5833 = kk_std_core_types__lp__plus__plus__rp_(_x_x5834, subcmd_0, _ctx); /*string*/
              return kk_examples_basic__new_CliError(kk_reuse_null, 0, _x_x5833, _ctx);
            }
          }
          {
            kk_string_drop(subcmd_0, _ctx);
            kk_std_core_types__list_drop(sub__args, _ctx);
            kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
            kk_examples_basic__cliresult _x_x5836;
            kk_string_t _x_x5837 = kk_string_empty(); /*string*/
            _x_x5836 = kk_examples_basic__new_Cliresult(kk_reuse_null, 0, flags_0, final__options_0, positionals_0, _x_x5837, kk_std_core_types__new_Nothing(_ctx), _ctx); /*examples/basic/cliresult*/
            return kk_examples_basic__new_Parsed(kk_reuse_null, 0, _x_x5836, _ctx);
          }
        }
      }
    }
  }
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5841__t {
  struct kk_function_s _base;
  kk_examples_basic__clispec spec_2;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5841(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5841(kk_examples_basic__clispec spec_2, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__args_fun5841__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__cli__parse__args_fun5841__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__cli__parse__args_fun5841, kk_context());
  _self->spec_2 = spec_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5841(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__args_fun5841__t* _self = kk_function_as(struct kk_examples_basic_hc__cli__parse__args_fun5841__t*, _fself, _ctx);
  kk_examples_basic__clispec spec_2 = _self->spec_2; /* examples/basic/clispec */
  kk_drop_match(_self, {kk_examples_basic__clispec_dup(spec_2, _ctx);}, {}, _ctx)
  kk_examples_basic__parseraw hc__raw_0_2214 = kk_examples_basic__parseraw_unbox(_b_x2076, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  kk_examples_basic__clioutcome _x_x5842 = kk_examples_basic__mlift_hc__cli__parse__args_11191(spec_2, hc__raw_0_2214, _ctx); /*examples/basic/clioutcome*/
  return kk_examples_basic__clioutcome_box(_x_x5842, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5844__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5844(kk_function_t _fself, kk_box_t _b_x2079, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5844(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5844, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5844(kk_function_t _fself, kk_box_t _b_x2079, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5845;
  kk_examples_basic__parseraw _match_x2408 = kk_examples_basic__parseraw_unbox(_b_x2079, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5846 = kk_examples_basic__as_Parseraw(_match_x2408, _ctx);
    kk_string_t _x_9 = _con_x5846->raw__error;
    kk_std_core_types__list _pat_0_14 = _con_x5846->raw__flags;
    kk_std_core_types__list _pat_1_8 = _con_x5846->raw__options;
    kk_std_core_types__list _pat_2_8 = _con_x5846->raw__positionals;
    kk_string_t _pat_3_8 = _con_x5846->raw__subcmd;
    kk_std_core_types__list _pat_4_8 = _con_x5846->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2408, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_string_drop(_pat_3_8, _ctx);
      kk_std_core_types__list_drop(_pat_2_8, _ctx);
      kk_std_core_types__list_drop(_pat_1_8, _ctx);
      kk_std_core_types__list_drop(_pat_0_14, _ctx);
      kk_datatype_ptr_free(_match_x2408, _ctx);
    }
    else {
      kk_string_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2408, _ctx);
    }
    _x_x5845 = _x_9; /*string*/
  }
  return kk_string_box(_x_x5845);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5850__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5850(kk_function_t _fself, kk_box_t _b_x2085, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5850(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5850, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5850(kk_function_t _fself, kk_box_t _b_x2085, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5851;
  kk_examples_basic__parseraw _match_x2407 = kk_examples_basic__parseraw_unbox(_b_x2085, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5852 = kk_examples_basic__as_Parseraw(_match_x2407, _ctx);
    kk_string_t _pat_0_0_0 = _con_x5852->raw__error;
    kk_std_core_types__list _x_0_0 = _con_x5852->raw__flags;
    kk_std_core_types__list _pat_1_0_0 = _con_x5852->raw__options;
    kk_std_core_types__list _pat_2_0_0 = _con_x5852->raw__positionals;
    kk_string_t _pat_3_0_0 = _con_x5852->raw__subcmd;
    kk_std_core_types__list _pat_4_0_0 = _con_x5852->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2407, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0_0, _ctx);
      kk_string_drop(_pat_3_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2407, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0_0, _ctx);
      kk_datatype_ptr_decref(_match_x2407, _ctx);
    }
    _x_x5851 = _x_0_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5851, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5856__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5856(kk_function_t _fself, kk_box_t _b_x2091, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5856(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5856, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5856(kk_function_t _fself, kk_box_t _b_x2091, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5857;
  kk_examples_basic__parseraw _match_x2406 = kk_examples_basic__parseraw_unbox(_b_x2091, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5858 = kk_examples_basic__as_Parseraw(_match_x2406, _ctx);
    kk_string_t _pat_0_1_0 = _con_x5858->raw__error;
    kk_std_core_types__list _pat_1_1_0 = _con_x5858->raw__flags;
    kk_std_core_types__list _x_1_0 = _con_x5858->raw__options;
    kk_std_core_types__list _pat_2_1_0 = _con_x5858->raw__positionals;
    kk_string_t _pat_3_1_0 = _con_x5858->raw__subcmd;
    kk_std_core_types__list _pat_4_1_0 = _con_x5858->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2406, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1_0, _ctx);
      kk_string_drop(_pat_3_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_1_0, _ctx);
      kk_string_drop(_pat_0_1_0, _ctx);
      kk_datatype_ptr_free(_match_x2406, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1_0, _ctx);
      kk_datatype_ptr_decref(_match_x2406, _ctx);
    }
    _x_x5857 = _x_1_0; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5857, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5862__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5862(kk_function_t _fself, kk_box_t _b_x2097, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5862(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5862, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5862(kk_function_t _fself, kk_box_t _b_x2097, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5863;
  kk_examples_basic__parseraw _match_x2405 = kk_examples_basic__parseraw_unbox(_b_x2097, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5864 = kk_examples_basic__as_Parseraw(_match_x2405, _ctx);
    kk_string_t _pat_0_2_0 = _con_x5864->raw__error;
    kk_std_core_types__list _pat_1_2_0 = _con_x5864->raw__flags;
    kk_std_core_types__list _pat_2_2_0 = _con_x5864->raw__options;
    kk_std_core_types__list _x_2_0 = _con_x5864->raw__positionals;
    kk_string_t _pat_3_2_0 = _con_x5864->raw__subcmd;
    kk_std_core_types__list _pat_4_2_0 = _con_x5864->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2405, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2_0, _ctx);
      kk_string_drop(_pat_3_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_2_0, _ctx);
      kk_string_drop(_pat_0_2_0, _ctx);
      kk_datatype_ptr_free(_match_x2405, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2_0, _ctx);
      kk_datatype_ptr_decref(_match_x2405, _ctx);
    }
    _x_x5863 = _x_2_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5863, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5868__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5868(kk_function_t _fself, kk_box_t _b_x2103, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5868(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5868, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5868(kk_function_t _fself, kk_box_t _b_x2103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5869;
  kk_examples_basic__parseraw _match_x2404 = kk_examples_basic__parseraw_unbox(_b_x2103, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5870 = kk_examples_basic__as_Parseraw(_match_x2404, _ctx);
    kk_string_t _pat_0_3_0 = _con_x5870->raw__error;
    kk_std_core_types__list _pat_1_3_0 = _con_x5870->raw__flags;
    kk_std_core_types__list _pat_2_3_0 = _con_x5870->raw__options;
    kk_std_core_types__list _pat_3_3_0 = _con_x5870->raw__positionals;
    kk_string_t _x_3_0 = _con_x5870->raw__subcmd;
    kk_std_core_types__list _pat_4_3_0 = _con_x5870->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2404, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_3_0, _ctx);
      kk_string_drop(_pat_0_3_0, _ctx);
      kk_datatype_ptr_free(_match_x2404, _ctx);
    }
    else {
      kk_string_dup(_x_3_0, _ctx);
      kk_datatype_ptr_decref(_match_x2404, _ctx);
    }
    _x_x5869 = _x_3_0; /*string*/
  }
  return kk_string_box(_x_x5869);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5874__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5874(kk_function_t _fself, kk_box_t _b_x2109, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5874(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5874, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5874(kk_function_t _fself, kk_box_t _b_x2109, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5875;
  kk_examples_basic__parseraw _match_x2403 = kk_examples_basic__parseraw_unbox(_b_x2109, KK_OWNED, _ctx); /*examples/basic/parseraw*/;
  {
    struct kk_examples_basic_Parseraw* _con_x5876 = kk_examples_basic__as_Parseraw(_match_x2403, _ctx);
    kk_string_t _pat_0_4_0 = _con_x5876->raw__error;
    kk_std_core_types__list _pat_1_4_0 = _con_x5876->raw__flags;
    kk_std_core_types__list _pat_2_4_0 = _con_x5876->raw__options;
    kk_std_core_types__list _pat_3_4_0 = _con_x5876->raw__positionals;
    kk_string_t _pat_4_4_0 = _con_x5876->raw__subcmd;
    kk_std_core_types__list _x_4_0 = _con_x5876->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2403, _ctx)) {
      kk_string_drop(_pat_4_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_4_0, _ctx);
      kk_string_drop(_pat_0_4_0, _ctx);
      kk_datatype_ptr_free(_match_x2403, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4_0, _ctx);
      kk_datatype_ptr_decref(_match_x2403, _ctx);
    }
    _x_x5875 = _x_4_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5875, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5885__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5885(kk_function_t _fself, kk_box_t _b_x2115, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5885(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5885, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5885(kk_function_t _fself, kk_box_t _b_x2115, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5886;
  bool b_2_2217 = kk_bool_unbox(_b_x2115); /*bool*/;
  if (b_2_2217) {
    _x_x5886 = false; /*bool*/
  }
  else {
    _x_x5886 = true; /*bool*/
  }
  return kk_bool_box(_x_x5886);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5888__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5888(kk_function_t _fself, kk_box_t _b_x2124, kk_box_t _b_x2125, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5888(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5888, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5891__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5891(kk_function_t _fself, kk_box_t _b_x2119, kk_box_t _b_x2120, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5891(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5891, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5891(kk_function_t _fself, kk_box_t _b_x2119, kk_box_t _b_x2120, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5892;
  kk_std_core_types__list _x_x5893 = kk_std_core_types__list_unbox(_b_x2119, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_examples_basic__clioption _x_x5894 = kk_examples_basic__clioption_unbox(_b_x2120, KK_OWNED, _ctx); /*examples/basic/clioption*/
  _x_x5892 = kk_examples_basic_hc__add__default(_x_x5893, _x_x5894, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5892, _ctx);
}
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5888(kk_function_t _fself, kk_box_t _b_x2124, kk_box_t _b_x2125, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5889;
  kk_examples_basic__clispec _match_x2400 = kk_examples_basic__clispec_unbox(_b_x2124, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5890 = kk_examples_basic__as_Clispec(_match_x2400, _ctx);
    kk_string_t _pat_0_7_0 = _con_x5890->app__name;
    kk_string_t _pat_1_6_0 = _con_x5890->app__version;
    kk_string_t _pat_2_6_0 = _con_x5890->app__about;
    kk_std_core_types__list _pat_3_6_0 = _con_x5890->app__flags;
    kk_std_core_types__list _x_5_0 = _con_x5890->app__options;
    kk_std_core_types__list _pat_4_6_0 = _con_x5890->app__args;
    kk_std_core_types__list _pat_5_0_0 = _con_x5890->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2400, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_6_0, _ctx);
      kk_string_drop(_pat_2_6_0, _ctx);
      kk_string_drop(_pat_1_6_0, _ctx);
      kk_string_drop(_pat_0_7_0, _ctx);
      kk_datatype_ptr_free(_match_x2400, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5_0, _ctx);
      kk_datatype_ptr_decref(_match_x2400, _ctx);
    }
    _x_x5889 = _x_5_0; /*list<examples/basic/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x5889, _b_x2125, kk_examples_basic_new_hc__cli__parse__args_fun5891(_ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5898__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5898(kk_function_t _fself, kk_box_t _b_x2148, kk_box_t _b_x2149, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5898(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5898, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5901__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5901(kk_function_t _fself, kk_integer_t _b_x2138, kk_box_t _b_x2139, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5901(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5901, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5901(kk_function_t _fself, kk_integer_t _b_x2138, kk_box_t _b_x2139, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x5902 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x2138, _ctx), _b_x2139, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5902, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5906__t {
  struct kk_function_s _base;
  kk_box_t _b_x2149;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5906(kk_function_t _fself, kk_box_t _b_x2143, kk_box_t _b_x2144, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5906(kk_box_t _b_x2149, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__args_fun5906__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__cli__parse__args_fun5906__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__cli__parse__args_fun5906, kk_context());
  _self->_b_x2149 = _b_x2149;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5906(kk_function_t _fself, kk_box_t _b_x2143, kk_box_t _b_x2144, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__args_fun5906__t* _self = kk_function_as(struct kk_examples_basic_hc__cli__parse__args_fun5906__t*, _fself, _ctx);
  kk_box_t _b_x2149 = _self->_b_x2149; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2149, _ctx);}, {}, _ctx)
  kk_string_t _x_x5907;
  kk_std_core_types__list _x_x5908 = kk_std_core_types__list_unbox(_b_x2149, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x5909 = kk_string_unbox(_b_x2143); /*string*/
  kk_std_core_types__tuple2 _x_x5910 = kk_std_core_types__tuple2_unbox(_b_x2144, KK_OWNED, _ctx); /*(int, examples/basic/cliarg)*/
  _x_x5907 = kk_examples_basic_hc__check__one__arg(_x_x5908, _x_x5909, _x_x5910, _ctx); /*string*/
  return kk_string_box(_x_x5907);
}
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5898(kk_function_t _fself, kk_box_t _b_x2148, kk_box_t _b_x2149, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x2140_2153;
  kk_std_core_types__list _x_x5899;
  kk_examples_basic__clispec _match_x2399 = kk_examples_basic__clispec_unbox(_b_x2148, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5900 = kk_examples_basic__as_Clispec(_match_x2399, _ctx);
    kk_string_t _pat_0_8_1 = _con_x5900->app__name;
    kk_string_t _pat_1_7_1 = _con_x5900->app__version;
    kk_string_t _pat_2_7_1 = _con_x5900->app__about;
    kk_std_core_types__list _pat_3_7_1 = _con_x5900->app__flags;
    kk_std_core_types__list _pat_4_7_1 = _con_x5900->app__options;
    kk_std_core_types__list _x_6_1 = _con_x5900->app__args;
    kk_std_core_types__list _pat_5_1_1 = _con_x5900->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2399, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_1, _ctx);
      kk_string_drop(_pat_2_7_1, _ctx);
      kk_string_drop(_pat_1_7_1, _ctx);
      kk_string_drop(_pat_0_8_1, _ctx);
      kk_datatype_ptr_free(_match_x2399, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6_1, _ctx);
      kk_datatype_ptr_decref(_match_x2399, _ctx);
    }
    _x_x5899 = _x_6_1; /*list<examples/basic/cliarg>*/
  }
  _b_x2140_2153 = kk_std_core_list_map_indexed(_x_x5899, kk_examples_basic_new_hc__cli__parse__args_fun5901(_ctx), _ctx); /*list<(int, examples/basic/cliarg)>*/
  kk_box_t _x_x5903;
  kk_string_t _x_x5904 = kk_string_empty(); /*string*/
  _x_x5903 = kk_string_box(_x_x5904); /*10002*/
  return kk_std_core_list_foldl(_b_x2140_2153, _x_x5903, kk_examples_basic_new_hc__cli__parse__args_fun5906(_b_x2149, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5917__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5917(kk_function_t _fself, kk_box_t _b_x2166, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5917(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5917, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5917(kk_function_t _fself, kk_box_t _b_x2166, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5918;
  bool b_0_0_2218 = kk_bool_unbox(_b_x2166); /*bool*/;
  if (b_0_0_2218) {
    _x_x5918 = false; /*bool*/
  }
  else {
    _x_x5918 = true; /*bool*/
  }
  return kk_bool_box(_x_x5918);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5921__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5921(kk_function_t _fself, kk_box_t _b_x2169, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5921(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5921, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5921(kk_function_t _fself, kk_box_t _b_x2169, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5922;
  bool b_1_0_2219 = kk_bool_unbox(_b_x2169); /*bool*/;
  if (b_1_0_2219) {
    _x_x5922 = false; /*bool*/
  }
  else {
    _x_x5922 = true; /*bool*/
  }
  return kk_bool_box(_x_x5922);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5924__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5924(kk_function_t _fself, kk_box_t _b_x2172, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5924(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5924, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5924(kk_function_t _fself, kk_box_t _b_x2172, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5925;
  kk_examples_basic__clispec _match_x2394 = kk_examples_basic__clispec_unbox(_b_x2172, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5926 = kk_examples_basic__as_Clispec(_match_x2394, _ctx);
    kk_string_t _pat_0_11_0 = _con_x5926->app__name;
    kk_string_t _pat_1_7_0_0 = _con_x5926->app__version;
    kk_string_t _pat_2_7_0_0 = _con_x5926->app__about;
    kk_std_core_types__list _pat_3_7_0_0 = _con_x5926->app__flags;
    kk_std_core_types__list _pat_4_7_0_0 = _con_x5926->app__options;
    kk_std_core_types__list _pat_5_2_0 = _con_x5926->app__args;
    kk_std_core_types__list _x_7_0 = _con_x5926->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2394, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0_0, _ctx);
      kk_string_drop(_pat_2_7_0_0, _ctx);
      kk_string_drop(_pat_1_7_0_0, _ctx);
      kk_string_drop(_pat_0_11_0, _ctx);
      kk_datatype_ptr_free(_match_x2394, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7_0, _ctx);
      kk_datatype_ptr_decref(_match_x2394, _ctx);
    }
    _x_x5925 = _x_7_0; /*list<(string, examples/basic/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5925, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5928__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5928(kk_function_t _fself, kk_box_t _b_x2184, kk_box_t _b_x2185, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5928(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5928, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5930__t {
  struct kk_function_s _base;
  kk_string_t name_0_2221;
};
static bool kk_examples_basic_hc__cli__parse__args_fun5930(kk_function_t _fself, kk_box_t _b_x2180, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5930(kk_string_t name_0_2221, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__args_fun5930__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__cli__parse__args_fun5930__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__cli__parse__args_fun5930, kk_context());
  _self->name_0_2221 = name_0_2221;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_examples_basic_hc__cli__parse__args_fun5930(kk_function_t _fself, kk_box_t _b_x2180, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__args_fun5930__t* _self = kk_function_as(struct kk_examples_basic_hc__cli__parse__args_fun5930__t*, _fself, _ctx);
  kk_string_t name_0_2221 = _self->name_0_2221; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_2221, _ctx);}, {}, _ctx)
  kk_string_t _x_x5931;
  kk_std_core_types__tuple2 _match_x2393 = kk_std_core_types__tuple2_unbox(_b_x2180, KK_OWNED, _ctx); /*(string, examples/basic/clispec)*/;
  {
    kk_box_t _box_x2176 = _match_x2393.fst;
    kk_box_t _box_x2177 = _match_x2393.snd;
    kk_string_t _x_6_0_0 = kk_string_unbox(_box_x2176);
    kk_string_dup(_x_6_0_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2393, _ctx);
    _x_x5931 = _x_6_0_0; /*string*/
  }
  return kk_string_is_eq(_x_x5931,name_0_2221,kk_context());
}
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5928(kk_function_t _fself, kk_box_t _b_x2184, kk_box_t _b_x2185, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5929;
  kk_std_core_types__list commands_0_2220 = kk_std_core_types__list_unbox(_b_x2184, KK_OWNED, _ctx); /*list<(string, examples/basic/clispec)>*/;
  kk_string_t name_0_2221 = kk_string_unbox(_b_x2185); /*string*/;
  _x_x5929 = kk_std_core_list_find(commands_0_2220, kk_examples_basic_new_hc__cli__parse__args_fun5930(name_0_2221, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5929, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5936__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5936(kk_function_t _fself, kk_box_t _b_x2191, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5936(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__args_fun5936, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5936(kk_function_t _fself, kk_box_t _b_x2191, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_examples_basic__clispec _x_x5937;
  kk_std_core_types__tuple2 _match_x2392 = kk_std_core_types__tuple2_unbox(_b_x2191, KK_OWNED, _ctx); /*(string, examples/basic/clispec)*/;
  {
    kk_box_t _box_x2187 = _match_x2392.fst;
    kk_box_t _box_x2188 = _match_x2392.snd;
    kk_examples_basic__clispec _x_8_0 = kk_examples_basic__clispec_unbox(_box_x2188, KK_BORROWED, _ctx);
    kk_examples_basic__clispec_dup(_x_8_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2392, _ctx);
    _x_x5937 = _x_8_0; /*examples/basic/clispec*/
  }
  return kk_examples_basic__clispec_box(_x_x5937, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__args_fun5939__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_1;
  kk_std_core_types__list flags_1;
  kk_std_core_types__list positionals_1;
  kk_string_t subcmd_1;
};
static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5939(kk_function_t _fself, kk_box_t _b_x2196, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__args_fun5939(kk_std_core_types__list final__options_1, kk_std_core_types__list flags_1, kk_std_core_types__list positionals_1, kk_string_t subcmd_1, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__args_fun5939__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__cli__parse__args_fun5939__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__cli__parse__args_fun5939, kk_context());
  _self->final__options_1 = final__options_1;
  _self->flags_1 = flags_1;
  _self->positionals_1 = positionals_1;
  _self->subcmd_1 = subcmd_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__args_fun5939(kk_function_t _fself, kk_box_t _b_x2196, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__args_fun5939__t* _self = kk_function_as(struct kk_examples_basic_hc__cli__parse__args_fun5939__t*, _fself, _ctx);
  kk_std_core_types__list final__options_1 = _self->final__options_1; /* list<(string, string)> */
  kk_std_core_types__list flags_1 = _self->flags_1; /* list<string> */
  kk_std_core_types__list positionals_1 = _self->positionals_1; /* list<string> */
  kk_string_t subcmd_1 = _self->subcmd_1; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_1, _ctx);kk_std_core_types__list_dup(flags_1, _ctx);kk_std_core_types__list_dup(positionals_1, _ctx);kk_string_dup(subcmd_1, _ctx);}, {}, _ctx)
  kk_examples_basic__clioutcome _y_x10900_1_2216 = kk_examples_basic__clioutcome_unbox(_b_x2196, KK_OWNED, _ctx); /*examples/basic/clioutcome*/;
  kk_examples_basic__clioutcome _x_x5940 = kk_examples_basic__mlift_hc__cli__parse__args_11190(final__options_1, flags_1, positionals_1, subcmd_1, _y_x10900_1_2216, _ctx); /*examples/basic/clioutcome*/
  return kk_examples_basic__clioutcome_box(_x_x5940, _ctx);
}

kk_examples_basic__clioutcome kk_examples_basic_hc__cli__parse__args(kk_examples_basic__clispec spec_2, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure clioutcome */ 
  kk_examples_basic__parseraw x_0_11390;
  kk_examples_basic__clispec _x_x5839 = kk_examples_basic__clispec_dup(spec_2, _ctx); /*examples/basic/clispec*/
  x_0_11390 = kk_examples_basic_hc__parse__loop(_x_x5839, args, _ctx); /*examples/basic/parseraw*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_11390, (KK_I32(6)), _ctx);
    kk_box_t _x_x5840 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__cli__parse__args_fun5841(spec_2, _ctx), _ctx); /*10001*/
    return kk_examples_basic__clioutcome_unbox(_x_x5840, KK_OWNED, _ctx);
  }
  {
    kk_string_t error_0;
    kk_box_t _x_x5843;
    kk_box_t _x_x5847;
    kk_examples_basic__parseraw _x_x5848 = kk_examples_basic__parseraw_dup(x_0_11390, _ctx); /*examples/basic/parseraw*/
    _x_x5847 = kk_examples_basic__parseraw_box(_x_x5848, _ctx); /*10000*/
    _x_x5843 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5844(_ctx), _x_x5847, _ctx); /*10001*/
    error_0 = kk_string_unbox(_x_x5843); /*string*/
    kk_std_core_types__list flags_1;
    kk_box_t _x_x5849;
    kk_box_t _x_x5853;
    kk_examples_basic__parseraw _x_x5854 = kk_examples_basic__parseraw_dup(x_0_11390, _ctx); /*examples/basic/parseraw*/
    _x_x5853 = kk_examples_basic__parseraw_box(_x_x5854, _ctx); /*10000*/
    _x_x5849 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5850(_ctx), _x_x5853, _ctx); /*10001*/
    flags_1 = kk_std_core_types__list_unbox(_x_x5849, KK_OWNED, _ctx); /*list<string>*/
    kk_std_core_types__list options_1;
    kk_box_t _x_x5855;
    kk_box_t _x_x5859;
    kk_examples_basic__parseraw _x_x5860 = kk_examples_basic__parseraw_dup(x_0_11390, _ctx); /*examples/basic/parseraw*/
    _x_x5859 = kk_examples_basic__parseraw_box(_x_x5860, _ctx); /*10000*/
    _x_x5855 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5856(_ctx), _x_x5859, _ctx); /*10001*/
    options_1 = kk_std_core_types__list_unbox(_x_x5855, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_std_core_types__list positionals_1;
    kk_box_t _x_x5861;
    kk_box_t _x_x5865;
    kk_examples_basic__parseraw _x_x5866 = kk_examples_basic__parseraw_dup(x_0_11390, _ctx); /*examples/basic/parseraw*/
    _x_x5865 = kk_examples_basic__parseraw_box(_x_x5866, _ctx); /*10000*/
    _x_x5861 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5862(_ctx), _x_x5865, _ctx); /*10001*/
    positionals_1 = kk_std_core_types__list_unbox(_x_x5861, KK_OWNED, _ctx); /*list<string>*/
    kk_string_t subcmd_1;
    kk_box_t _x_x5867;
    kk_box_t _x_x5871;
    kk_examples_basic__parseraw _x_x5872 = kk_examples_basic__parseraw_dup(x_0_11390, _ctx); /*examples/basic/parseraw*/
    _x_x5871 = kk_examples_basic__parseraw_box(_x_x5872, _ctx); /*10000*/
    _x_x5867 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5868(_ctx), _x_x5871, _ctx); /*10001*/
    subcmd_1 = kk_string_unbox(_x_x5867); /*string*/
    kk_std_core_types__list sub__args_0;
    kk_box_t _x_x5873 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5874(_ctx), kk_examples_basic__parseraw_box(x_0_11390, _ctx), _ctx); /*10001*/
    sub__args_0 = kk_std_core_types__list_unbox(_x_x5873, KK_OWNED, _ctx); /*list<string>*/
    bool _match_x2385;
    kk_string_t _x_x5877 = kk_string_dup(error_0, _ctx); /*string*/
    kk_string_t _x_x5878;
    kk_define_string_literal(static, _s_x5879, 8, "__help__", _ctx)
    _x_x5878 = kk_string_dup(_s_x5879, _ctx); /*string*/
    _match_x2385 = kk_string_is_eq(_x_x5877,_x_x5878,kk_context()); /*bool*/
    if (_match_x2385) {
      kk_string_drop(subcmd_1, _ctx);
      kk_std_core_types__list_drop(sub__args_0, _ctx);
      kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_1, _ctx);
      kk_std_core_types__list_drop(options_1, _ctx);
      kk_std_core_types__list_drop(flags_1, _ctx);
      kk_string_drop(error_0, _ctx);
      return kk_examples_basic__new_Help(_ctx);
    }
    {
      bool _match_x2386;
      kk_string_t _x_x5880 = kk_string_dup(error_0, _ctx); /*string*/
      kk_string_t _x_x5881;
      kk_define_string_literal(static, _s_x5882, 11, "__version__", _ctx)
      _x_x5881 = kk_string_dup(_s_x5882, _ctx); /*string*/
      _match_x2386 = kk_string_is_eq(_x_x5880,_x_x5881,kk_context()); /*bool*/
      if (_match_x2386) {
        kk_string_drop(subcmd_1, _ctx);
        kk_std_core_types__list_drop(sub__args_0, _ctx);
        kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_1, _ctx);
        kk_std_core_types__list_drop(options_1, _ctx);
        kk_std_core_types__list_drop(flags_1, _ctx);
        kk_string_drop(error_0, _ctx);
        return kk_examples_basic__new_Version(_ctx);
      }
      {
        bool _x_x1_5_11112_0;
        kk_integer_t _brw_x2401;
        kk_string_t _x_x5883 = kk_string_dup(error_0, _ctx); /*string*/
        _brw_x2401 = kk_std_core_string_chars_fs_count(_x_x5883, _ctx); /*int*/
        bool _brw_x2402 = kk_integer_eq_borrow(_brw_x2401,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2401, _ctx);
        _x_x1_5_11112_0 = _brw_x2402; /*bool*/
        bool _match_x2387;
        kk_box_t _x_x5884 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5885(_ctx), kk_bool_box(_x_x1_5_11112_0), _ctx); /*10001*/
        _match_x2387 = kk_bool_unbox(_x_x5884); /*bool*/
        if (_match_x2387) {
          kk_string_drop(subcmd_1, _ctx);
          kk_std_core_types__list_drop(sub__args_0, _ctx);
          kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_1, _ctx);
          kk_std_core_types__list_drop(options_1, _ctx);
          kk_std_core_types__list_drop(flags_1, _ctx);
          return kk_examples_basic__new_CliError(kk_reuse_null, 0, error_0, _ctx);
        }
        {
          kk_string_drop(error_0, _ctx);
          kk_std_core_types__list final__options_1;
          kk_box_t _x_x5887;
          kk_box_t _x_x5895;
          kk_examples_basic__clispec _x_x5896 = kk_examples_basic__clispec_dup(spec_2, _ctx); /*examples/basic/clispec*/
          _x_x5895 = kk_examples_basic__clispec_box(_x_x5896, _ctx); /*10000*/
          _x_x5887 = kk_std_core_hnd__open_none2(kk_examples_basic_new_hc__cli__parse__args_fun5888(_ctx), _x_x5895, kk_std_core_types__list_box(options_1, _ctx), _ctx); /*10002*/
          final__options_1 = kk_std_core_types__list_unbox(_x_x5887, KK_OWNED, _ctx); /*list<(string, string)>*/
          kk_string_t req__err_0;
          kk_box_t _x_x5897;
          kk_box_t _x_x5911;
          kk_examples_basic__clispec _x_x5912 = kk_examples_basic__clispec_dup(spec_2, _ctx); /*examples/basic/clispec*/
          _x_x5911 = kk_examples_basic__clispec_box(_x_x5912, _ctx); /*10000*/
          kk_box_t _x_x5913;
          kk_std_core_types__list _x_x5914 = kk_std_core_types__list_dup(positionals_1, _ctx); /*list<string>*/
          _x_x5913 = kk_std_core_types__list_box(_x_x5914, _ctx); /*10001*/
          _x_x5897 = kk_std_core_hnd__open_none2(kk_examples_basic_new_hc__cli__parse__args_fun5898(_ctx), _x_x5911, _x_x5913, _ctx); /*10002*/
          req__err_0 = kk_string_unbox(_x_x5897); /*string*/
          bool _x_x1_8_11117_0;
          kk_integer_t _brw_x2397;
          kk_string_t _x_x5915 = kk_string_dup(req__err_0, _ctx); /*string*/
          _brw_x2397 = kk_std_core_string_chars_fs_count(_x_x5915, _ctx); /*int*/
          bool _brw_x2398 = kk_integer_eq_borrow(_brw_x2397,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2397, _ctx);
          _x_x1_8_11117_0 = _brw_x2398; /*bool*/
          bool _match_x2388;
          kk_box_t _x_x5916 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5917(_ctx), kk_bool_box(_x_x1_8_11117_0), _ctx); /*10001*/
          _match_x2388 = kk_bool_unbox(_x_x5916); /*bool*/
          if (_match_x2388) {
            kk_string_drop(subcmd_1, _ctx);
            kk_std_core_types__list_drop(sub__args_0, _ctx);
            kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
            kk_std_core_types__list_drop(positionals_1, _ctx);
            kk_std_core_types__list_drop(flags_1, _ctx);
            kk_std_core_types__list_drop(final__options_1, _ctx);
            return kk_examples_basic__new_CliError(kk_reuse_null, 0, req__err_0, _ctx);
          }
          {
            kk_string_drop(req__err_0, _ctx);
            bool _x_x1_9_11118_0;
            kk_integer_t _brw_x2395;
            kk_string_t _x_x5919 = kk_string_dup(subcmd_1, _ctx); /*string*/
            _brw_x2395 = kk_std_core_string_chars_fs_count(_x_x5919, _ctx); /*int*/
            bool _brw_x2396 = kk_integer_eq_borrow(_brw_x2395,(kk_integer_from_small(0)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2395, _ctx);
            _x_x1_9_11118_0 = _brw_x2396; /*bool*/
            bool _match_x2389;
            kk_box_t _x_x5920 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5921(_ctx), kk_bool_box(_x_x1_9_11118_0), _ctx); /*10001*/
            _match_x2389 = kk_bool_unbox(_x_x5920); /*bool*/
            if (_match_x2389) {
              kk_std_core_types__list _x_x1_10_11119_0;
              kk_box_t _x_x5923 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5924(_ctx), kk_examples_basic__clispec_box(spec_2, _ctx), _ctx); /*10001*/
              _x_x1_10_11119_0 = kk_std_core_types__list_unbox(_x_x5923, KK_OWNED, _ctx); /*list<(string, examples/basic/clispec)>*/
              kk_std_core_types__maybe _match_x2390;
              kk_box_t _x_x5927;
              kk_box_t _x_x5932;
              kk_string_t _x_x5933 = kk_string_dup(subcmd_1, _ctx); /*string*/
              _x_x5932 = kk_string_box(_x_x5933); /*10001*/
              _x_x5927 = kk_std_core_hnd__open_none2(kk_examples_basic_new_hc__cli__parse__args_fun5928(_ctx), kk_std_core_types__list_box(_x_x1_10_11119_0, _ctx), _x_x5932, _ctx); /*10002*/
              _match_x2390 = kk_std_core_types__maybe_unbox(_x_x5927, KK_OWNED, _ctx); /*maybe<(string, examples/basic/clispec)>*/
              if (kk_std_core_types__is_Just(_match_x2390, _ctx)) {
                kk_box_t _box_x2186 = _match_x2390._cons.Just.value;
                kk_std_core_types__tuple2 pair_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x2186, KK_BORROWED, _ctx);
                kk_std_core_types__tuple2_dup(pair_0_0_0, _ctx);
                kk_std_core_types__maybe_drop(_match_x2390, _ctx);
                kk_examples_basic__clioutcome x_1_11393;
                kk_examples_basic__clispec _x_x5934;
                kk_box_t _x_x5935 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__args_fun5936(_ctx), kk_std_core_types__tuple2_box(pair_0_0_0, _ctx), _ctx); /*10001*/
                _x_x5934 = kk_examples_basic__clispec_unbox(_x_x5935, KK_OWNED, _ctx); /*examples/basic/clispec*/
                x_1_11393 = kk_examples_basic_hc__cli__parse__args(_x_x5934, sub__args_0, _ctx); /*examples/basic/clioutcome*/
                if (kk_yielding(kk_context())) {
                  kk_examples_basic__clioutcome_drop(x_1_11393, _ctx);
                  kk_box_t _x_x5938 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__cli__parse__args_fun5939(final__options_1, flags_1, positionals_1, subcmd_1, _ctx), _ctx); /*10001*/
                  return kk_examples_basic__clioutcome_unbox(_x_x5938, KK_OWNED, _ctx);
                }
                if (kk_examples_basic__is_Parsed(x_1_11393, _ctx)) {
                  struct kk_examples_basic_Parsed* _con_x5941 = kk_examples_basic__as_Parsed(x_1_11393, _ctx);
                  kk_examples_basic__cliresult hc__sub_0_0 = _con_x5941->cli__result;
                  struct kk_examples_basic_Cliresult* _con_x5942 = kk_examples_basic__as_Cliresult(hc__sub_0_0, _ctx);
                  kk_reuse_t _ru_x3107 = kk_reuse_null; /*@reuse*/;
                  if kk_likely(kk_datatype_ptr_is_unique(x_1_11393, _ctx)) {
                    _ru_x3107 = (kk_datatype_ptr_reuse(x_1_11393, _ctx));
                  }
                  else {
                    kk_examples_basic__cliresult_dup(hc__sub_0_0, _ctx);
                    kk_datatype_ptr_decref(x_1_11393, _ctx);
                  }
                  kk_examples_basic__cliresult _b_x2197_2213 = hc__sub_0_0; /*examples/basic/cliresult*/;
                  if kk_likely(_ru_x3107!=NULL) {
                    kk_std_core_types__maybe _x_x5944 = kk_std_core_types__new_Just(kk_examples_basic__cliresult_box(_b_x2197_2213, _ctx), _ctx); /*maybe<10024>*/
                    struct kk_examples_basic_Parsed* _con_x5943 = (struct kk_examples_basic_Parsed*)_ru_x3107;
                    _con_x5943->cli__result = kk_examples_basic__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x5944, _ctx);
                    return kk_examples_basic__base_Parsed(_con_x5943, _ctx);
                  }
                  {
                    kk_examples_basic__cliresult _x_x5945;
                    kk_std_core_types__maybe _x_x5946 = kk_std_core_types__new_Just(kk_examples_basic__cliresult_box(_b_x2197_2213, _ctx), _ctx); /*maybe<10024>*/
                    _x_x5945 = kk_examples_basic__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x5946, _ctx); /*examples/basic/cliresult*/
                    return kk_examples_basic__new_Parsed(kk_reuse_null, 0, _x_x5945, _ctx);
                  }
                }
                {
                  kk_string_drop(subcmd_1, _ctx);
                  kk_std_core_types__list_drop(positionals_1, _ctx);
                  kk_std_core_types__list_drop(flags_1, _ctx);
                  kk_std_core_types__list_drop(final__options_1, _ctx);
                  return x_1_11393;
                }
              }
              {
                kk_std_core_types__list_drop(sub__args_0, _ctx);
                kk_std_core_types__list_drop(positionals_1, _ctx);
                kk_std_core_types__list_drop(flags_1, _ctx);
                kk_std_core_types__list_drop(final__options_1, _ctx);
                kk_string_t _x_x5947;
                kk_string_t _x_x5948;
                kk_define_string_literal(static, _s_x5949, 17, "unknown command: ", _ctx)
                _x_x5948 = kk_string_dup(_s_x5949, _ctx); /*string*/
                _x_x5947 = kk_std_core_types__lp__plus__plus__rp_(_x_x5948, subcmd_1, _ctx); /*string*/
                return kk_examples_basic__new_CliError(kk_reuse_null, 0, _x_x5947, _ctx);
              }
            }
            {
              kk_string_drop(subcmd_1, _ctx);
              kk_std_core_types__list_drop(sub__args_0, _ctx);
              kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
              kk_examples_basic__cliresult _x_x5950;
              kk_string_t _x_x5951 = kk_string_empty(); /*string*/
              _x_x5950 = kk_examples_basic__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, _x_x5951, kk_std_core_types__new_Nothing(_ctx), _ctx); /*examples/basic/cliresult*/
              return kk_examples_basic__new_Parsed(kk_reuse_null, 0, _x_x5950, _ctx);
            }
          }
        }
      }
    }
  }
}
extern kk_box_t kk_examples_basic_hc__cli__parse_fun5955(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5956 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x5956, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__or__exit_11192_fun5961__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__or__exit_11192_fun5961(kk_function_t _fself, kk_box_t _b_x2226, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__or__exit_11192_fun5961(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__or__exit_11192_fun5961, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__or__exit_11192_fun5961(kk_function_t _fself, kk_box_t _b_x2226, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5962;
  kk_examples_basic__clispec _x_x5963 = kk_examples_basic__clispec_unbox(_b_x2226, KK_OWNED, _ctx); /*examples/basic/clispec*/
  _x_x5962 = kk_examples_basic_hc__cli__help(_x_x5963, _ctx); /*string*/
  return kk_string_box(_x_x5962);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__cli__parse__or__exit_11192_fun5968__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__cli__parse__or__exit_11192_fun5968(kk_function_t _fself, kk_box_t _b_x2231, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__cli__parse__or__exit_11192_fun5968(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__cli__parse__or__exit_11192_fun5968, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__cli__parse__or__exit_11192_fun5968(kk_function_t _fself, kk_box_t _b_x2231, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5969;
  kk_string_t _x_x5970;
  kk_examples_basic__clispec _match_x2383;
  kk_box_t _x_x5971 = kk_box_dup(_b_x2231, _ctx); /*10000*/
  _match_x2383 = kk_examples_basic__clispec_unbox(_x_x5971, KK_OWNED, _ctx); /*examples/basic/clispec*/
  {
    struct kk_examples_basic_Clispec* _con_x5972 = kk_examples_basic__as_Clispec(_match_x2383, _ctx);
    kk_string_t _x = _con_x5972->app__name;
    kk_string_t _pat_0_0 = _con_x5972->app__version;
    kk_string_t _pat_1_0 = _con_x5972->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x5972->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x5972->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x5972->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5972->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2383, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2383, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2383, _ctx);
    }
    _x_x5970 = _x; /*string*/
  }
  kk_string_t _x_x5973;
  kk_string_t _x_x5974;
  kk_define_string_literal(static, _s_x5975, 1, " ", _ctx)
  _x_x5974 = kk_string_dup(_s_x5975, _ctx); /*string*/
  kk_string_t _x_x5976;
  kk_examples_basic__clispec _match_x2382 = kk_examples_basic__clispec_unbox(_b_x2231, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x5977 = kk_examples_basic__as_Clispec(_match_x2382, _ctx);
    kk_string_t _pat_0_1 = _con_x5977->app__name;
    kk_string_t _x_0 = _con_x5977->app__version;
    kk_string_t _pat_1_1 = _con_x5977->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x5977->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x5977->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x5977->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5977->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2382, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2382, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2382, _ctx);
    }
    _x_x5976 = _x_0; /*string*/
  }
  _x_x5973 = kk_std_core_types__lp__plus__plus__rp_(_x_x5974, _x_x5976, _ctx); /*string*/
  _x_x5969 = kk_std_core_types__lp__plus__plus__rp_(_x_x5970, _x_x5973, _ctx); /*string*/
  return kk_string_box(_x_x5969);
}

kk_examples_basic__cliresult kk_examples_basic__mlift_hc__cli__parse__or__exit_11192(kk_examples_basic__clispec spec, kk_examples_basic__clioutcome _y_x10908, kk_context_t* _ctx) { /* (spec : clispec, clioutcome) -> pure cliresult */ 
  if (kk_examples_basic__is_Parsed(_y_x10908, _ctx)) {
    struct kk_examples_basic_Parsed* _con_x5957 = kk_examples_basic__as_Parsed(_y_x10908, _ctx);
    kk_examples_basic__cliresult r = _con_x5957->cli__result;
    struct kk_examples_basic_Cliresult* _con_x5958 = kk_examples_basic__as_Cliresult(r, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10908, _ctx)) {
      kk_datatype_ptr_free(_y_x10908, _ctx);
    }
    else {
      kk_examples_basic__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(_y_x10908, _ctx);
    }
    return r;
  }
  if (kk_examples_basic__is_Help(_y_x10908, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x5959;
    kk_box_t _x_x5960 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__or__exit_11192_fun5961(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5959 = kk_string_unbox(_x_x5960); /*string*/
    kk_std_core_console_printsln(_x_x5959, _ctx);
    kk_string_t _x_x5964 = kk_string_empty(); /*string*/
    return kk_examples_basic__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5964, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_examples_basic__is_Version(_y_x10908, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x5966;
    kk_box_t _x_x5967 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__cli__parse__or__exit_11192_fun5968(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5966 = kk_string_unbox(_x_x5967); /*string*/
    kk_std_core_console_printsln(_x_x5966, _ctx);
    kk_string_t _x_x5978 = kk_string_empty(); /*string*/
    return kk_examples_basic__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5978, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_examples_basic_CliError* _con_x5980 = kk_examples_basic__as_CliError(_y_x10908, _ctx);
    kk_string_t msg = _con_x5980->cli__error__msg;
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10908, _ctx)) {
      kk_datatype_ptr_free(_y_x10908, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(_y_x10908, _ctx);
    }
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x5981;
    kk_string_t _x_x5982;
    kk_define_string_literal(static, _s_x5983, 7, "error: ", _ctx)
    _x_x5982 = kk_string_dup(_s_x5983, _ctx); /*string*/
    _x_x5981 = kk_std_core_types__lp__plus__plus__rp_(_x_x5982, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x5981, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x5984;
    kk_define_string_literal(static, _s_x5985, 20, "try --help for usage", _ctx)
    _x_x5984 = kk_string_dup(_s_x5985, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x5984, _ctx);
    kk_string_t _x_x5986 = kk_string_empty(); /*string*/
    return kk_examples_basic__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5986, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__or__exit_fun5991__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__or__exit_fun5991(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__or__exit_fun5991(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__or__exit_fun5991, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__or__exit_fun5991(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5992 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x5992, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__or__exit_fun5994__t {
  struct kk_function_s _base;
  kk_examples_basic__clispec spec;
};
static kk_box_t kk_examples_basic_hc__cli__parse__or__exit_fun5994(kk_function_t _fself, kk_box_t _b_x2238, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__or__exit_fun5994(kk_examples_basic__clispec spec, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__or__exit_fun5994__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__cli__parse__or__exit_fun5994__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__cli__parse__or__exit_fun5994, kk_context());
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__or__exit_fun5994(kk_function_t _fself, kk_box_t _b_x2238, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__cli__parse__or__exit_fun5994__t* _self = kk_function_as(struct kk_examples_basic_hc__cli__parse__or__exit_fun5994__t*, _fself, _ctx);
  kk_examples_basic__clispec spec = _self->spec; /* examples/basic/clispec */
  kk_drop_match(_self, {kk_examples_basic__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_examples_basic__clioutcome _y_x10908_2251 = kk_examples_basic__clioutcome_unbox(_b_x2238, KK_OWNED, _ctx); /*examples/basic/clioutcome*/;
  kk_examples_basic__cliresult _x_x5995 = kk_examples_basic__mlift_hc__cli__parse__or__exit_11192(spec, _y_x10908_2251, _ctx); /*examples/basic/cliresult*/
  return kk_examples_basic__cliresult_box(_x_x5995, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__or__exit_fun6000__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__or__exit_fun6000(kk_function_t _fself, kk_box_t _b_x2241, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__or__exit_fun6000(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__or__exit_fun6000, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__or__exit_fun6000(kk_function_t _fself, kk_box_t _b_x2241, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6001;
  kk_examples_basic__clispec _x_x6002 = kk_examples_basic__clispec_unbox(_b_x2241, KK_OWNED, _ctx); /*examples/basic/clispec*/
  _x_x6001 = kk_examples_basic_hc__cli__help(_x_x6002, _ctx); /*string*/
  return kk_string_box(_x_x6001);
}


// lift anonymous function
struct kk_examples_basic_hc__cli__parse__or__exit_fun6007__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__cli__parse__or__exit_fun6007(kk_function_t _fself, kk_box_t _b_x2246, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__cli__parse__or__exit_fun6007(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__cli__parse__or__exit_fun6007, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__cli__parse__or__exit_fun6007(kk_function_t _fself, kk_box_t _b_x2246, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6008;
  kk_string_t _x_x6009;
  kk_examples_basic__clispec _match_x2381;
  kk_box_t _x_x6010 = kk_box_dup(_b_x2246, _ctx); /*10000*/
  _match_x2381 = kk_examples_basic__clispec_unbox(_x_x6010, KK_OWNED, _ctx); /*examples/basic/clispec*/
  {
    struct kk_examples_basic_Clispec* _con_x6011 = kk_examples_basic__as_Clispec(_match_x2381, _ctx);
    kk_string_t _x = _con_x6011->app__name;
    kk_string_t _pat_0_0_0 = _con_x6011->app__version;
    kk_string_t _pat_1_0_0 = _con_x6011->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x6011->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x6011->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x6011->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x6011->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2381, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2381, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2381, _ctx);
    }
    _x_x6009 = _x; /*string*/
  }
  kk_string_t _x_x6012;
  kk_string_t _x_x6013;
  kk_define_string_literal(static, _s_x6014, 1, " ", _ctx)
  _x_x6013 = kk_string_dup(_s_x6014, _ctx); /*string*/
  kk_string_t _x_x6015;
  kk_examples_basic__clispec _match_x2380 = kk_examples_basic__clispec_unbox(_b_x2246, KK_OWNED, _ctx); /*examples/basic/clispec*/;
  {
    struct kk_examples_basic_Clispec* _con_x6016 = kk_examples_basic__as_Clispec(_match_x2380, _ctx);
    kk_string_t _pat_0_1 = _con_x6016->app__name;
    kk_string_t _x_0 = _con_x6016->app__version;
    kk_string_t _pat_1_1 = _con_x6016->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x6016->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x6016->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x6016->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x6016->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2380, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2380, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2380, _ctx);
    }
    _x_x6015 = _x_0; /*string*/
  }
  _x_x6012 = kk_std_core_types__lp__plus__plus__rp_(_x_x6013, _x_x6015, _ctx); /*string*/
  _x_x6008 = kk_std_core_types__lp__plus__plus__rp_(_x_x6009, _x_x6012, _ctx); /*string*/
  return kk_string_box(_x_x6008);
}

kk_examples_basic__cliresult kk_examples_basic_hc__cli__parse__or__exit(kk_examples_basic__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> <pure,console/console,ndet> cliresult */ 
  kk_examples_basic__clioutcome x_11396;
  kk_examples_basic__clispec _x_x5988 = kk_examples_basic__clispec_dup(spec, _ctx); /*examples/basic/clispec*/
  kk_std_core_types__list _x_x5989;
  kk_box_t _x_x5990 = kk_std_core_hnd__open_none0(kk_examples_basic_new_hc__cli__parse__or__exit_fun5991(_ctx), _ctx); /*10000*/
  _x_x5989 = kk_std_core_types__list_unbox(_x_x5990, KK_OWNED, _ctx); /*list<string>*/
  x_11396 = kk_examples_basic_hc__cli__parse__args(_x_x5988, _x_x5989, _ctx); /*examples/basic/clioutcome*/
  if (kk_yielding(kk_context())) {
    kk_examples_basic__clioutcome_drop(x_11396, _ctx);
    kk_box_t _x_x5993 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__cli__parse__or__exit_fun5994(spec, _ctx), _ctx); /*10001*/
    return kk_examples_basic__cliresult_unbox(_x_x5993, KK_OWNED, _ctx);
  }
  if (kk_examples_basic__is_Parsed(x_11396, _ctx)) {
    struct kk_examples_basic_Parsed* _con_x5996 = kk_examples_basic__as_Parsed(x_11396, _ctx);
    kk_examples_basic__cliresult r = _con_x5996->cli__result;
    struct kk_examples_basic_Cliresult* _con_x5997 = kk_examples_basic__as_Cliresult(r, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(x_11396, _ctx)) {
      kk_datatype_ptr_free(x_11396, _ctx);
    }
    else {
      kk_examples_basic__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(x_11396, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    return r;
  }
  if (kk_examples_basic__is_Help(x_11396, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x5998;
    kk_box_t _x_x5999 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__or__exit_fun6000(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5998 = kk_string_unbox(_x_x5999); /*string*/
    kk_std_core_console_printsln(_x_x5998, _ctx);
    kk_string_t _x_x6003 = kk_string_empty(); /*string*/
    return kk_examples_basic__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6003, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_examples_basic__is_Version(x_11396, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x6005;
    kk_box_t _x_x6006 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__cli__parse__or__exit_fun6007(_ctx), kk_examples_basic__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x6005 = kk_string_unbox(_x_x6006); /*string*/
    kk_std_core_console_printsln(_x_x6005, _ctx);
    kk_string_t _x_x6017 = kk_string_empty(); /*string*/
    return kk_examples_basic__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6017, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_examples_basic_CliError* _con_x6019 = kk_examples_basic__as_CliError(x_11396, _ctx);
    kk_string_t msg = _con_x6019->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(x_11396, _ctx)) {
      kk_datatype_ptr_free(x_11396, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(x_11396, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x6020;
    kk_string_t _x_x6021;
    kk_define_string_literal(static, _s_x6022, 7, "error: ", _ctx)
    _x_x6021 = kk_string_dup(_s_x6022, _ctx); /*string*/
    _x_x6020 = kk_std_core_types__lp__plus__plus__rp_(_x_x6021, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6020, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x6023;
    kk_define_string_literal(static, _s_x6024, 20, "try --help for usage", _ctx)
    _x_x6023 = kk_string_dup(_s_x6024, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6023, _ctx);
    kk_string_t _x_x6025 = kk_string_empty(); /*string*/
    return kk_examples_basic__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6025, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__read__lines_11193_fun6028__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__read__lines_11193_fun6028(kk_function_t _fself, kk_box_t _b_x2257, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__read__lines_11193_fun6028(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__read__lines_11193_fun6028, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic__mlift_hc__read__lines_11193_fun6034__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__read__lines_11193_fun6034(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__read__lines_11193_fun6034(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__read__lines_11193_fun6034, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__read__lines_11193_fun6034(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6035;
  kk_char_t _x_x6036 = kk_char_unbox(_b_x2254, KK_OWNED, _ctx); /*char*/
  _x_x6035 = kk_std_core_string_char_fs_string(_x_x6036, _ctx); /*string*/
  return kk_string_box(_x_x6035);
}
static kk_box_t kk_examples_basic__mlift_hc__read__lines_11193_fun6028(kk_function_t _fself, kk_box_t _b_x2257, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2262 = kk_string_unbox(_b_x2257); /*string*/;
  kk_std_core_types__list _x_x6029;
  bool _match_x2376;
  kk_string_t _x_x6030;
  kk_define_string_literal(static, _s_x6031, 1, "\n", _ctx)
  _x_x6030 = kk_string_dup(_s_x6031, _ctx); /*string*/
  kk_string_t _x_x6032 = kk_string_empty(); /*string*/
  _match_x2376 = kk_string_is_eq(_x_x6030,_x_x6032,kk_context()); /*bool*/
  if (_match_x2376) {
    kk_std_core_types__list _b_x2252_2260 = kk_std_core_string_list(s_2262, _ctx); /*list<char>*/;
    kk_function_t _brw_x2377 = kk_examples_basic__new_mlift_hc__read__lines_11193_fun6034(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2378 = kk_std_core_list_map(_b_x2252_2260, _brw_x2377, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2377, _ctx);
    _x_x6029 = _brw_x2378; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x6037;
    kk_define_string_literal(static, _s_x6038, 1, "\n", _ctx)
    _x_x6037 = kk_string_dup(_s_x6038, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2262,_x_x6037,kk_context()); /*vector<string>*/
    _x_x6029 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x6029, _ctx);
}

kk_std_core_types__list kk_examples_basic__mlift_hc__read__lines_11193(kk_string_t _c_x10913, kk_context_t* _ctx) { /* (string) -> list<string> */ 
  kk_box_t _x_x6027 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__read__lines_11193_fun6028(_ctx), kk_string_box(_c_x10913), _ctx); /*10001*/
  return kk_std_core_types__list_unbox(_x_x6027, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_examples_basic__mlift_hc__read__lines_11194_fun6040__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__read__lines_11194_fun6040(kk_function_t _fself, kk_box_t _b_x2266, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__read__lines_11194_fun6040(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__read__lines_11194_fun6040, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__read__lines_11194_fun6040(kk_function_t _fself, kk_box_t _b_x2266, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6041;
  kk_std_core_exn__exception _match_x2375 = kk_std_core_exn__exception_unbox(_b_x2266, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2375.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2375, _ctx);
    _x_x6041 = _x; /*string*/
  }
  return kk_string_box(_x_x6041);
}


// lift anonymous function
struct kk_examples_basic__mlift_hc__read__lines_11194_fun6047__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic__mlift_hc__read__lines_11194_fun6047(kk_function_t _fself, kk_box_t _b_x2275, kk_context_t* _ctx);
static kk_function_t kk_examples_basic__new_mlift_hc__read__lines_11194_fun6047(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic__mlift_hc__read__lines_11194_fun6047, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic__mlift_hc__read__lines_11194_fun6047(kk_function_t _fself, kk_box_t _b_x2275, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6048;
  kk_string_t _x_x6049 = kk_string_unbox(_b_x2275); /*string*/
  _x_x6048 = kk_examples_basic__mlift_hc__read__lines_11193(_x_x6049, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6048, _ctx);
}

kk_std_core_types__list kk_examples_basic__mlift_hc__read__lines_11194(kk_std_core_exn__error _y_x10911, kk_context_t* _ctx) { /* (error<string>) -> <fsys,exn> list<string> */ 
  kk_string_t x_11399;
  if (kk_std_core_exn__is_Ok(_y_x10911, _ctx)) {
    kk_box_t _box_x2263 = _y_x10911._cons.Ok.result;
    kk_string_t hc____c = kk_string_unbox(_box_x2263);
    kk_string_dup(hc____c, _ctx);
    kk_std_core_exn__error_drop(_y_x10911, _ctx);
    x_11399 = hc____c; /*string*/
  }
  else {
    kk_std_core_exn__exception hc____e = _y_x10911._cons.Error.exception;
    kk_std_core_exn__exception_dup(hc____e, _ctx);
    kk_std_core_exn__error_drop(_y_x10911, _ctx);
    kk_string_t hc____e_0;
    kk_box_t _x_x6039 = kk_std_core_hnd__open_none1(kk_examples_basic__new_mlift_hc__read__lines_11194_fun6040(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
    hc____e_0 = kk_string_unbox(_x_x6039); /*string*/
    kk_string_t _b_x2270_2272;
    kk_string_t _x_x6042;
    kk_define_string_literal(static, _s_x6043, 8, "unwrap: ", _ctx)
    _x_x6042 = kk_string_dup(_s_x6043, _ctx); /*string*/
    kk_string_t _x_x6044 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
    _b_x2270_2272 = kk_std_core_types__lp__plus__plus__rp_(_x_x6042, _x_x6044, _ctx); /*string*/
    kk_box_t _x_x6045 = kk_std_core_exn_throw(_b_x2270_2272, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    x_11399 = kk_string_unbox(_x_x6045); /*string*/
  }
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11399, _ctx);
    kk_box_t _x_x6046 = kk_std_core_hnd_yield_extend(kk_examples_basic__new_mlift_hc__read__lines_11194_fun6047(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x6046, KK_OWNED, _ctx);
  }
  {
    return kk_examples_basic__mlift_hc__read__lines_11193(x_11399, _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__read__lines_fun6050__t {
  struct kk_function_s _base;
  kk_string_t file__path;
};
static kk_box_t kk_examples_basic_hc__read__lines_fun6050(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__read__lines_fun6050(kk_string_t file__path, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__read__lines_fun6050__t* _self = kk_function_alloc_as(struct kk_examples_basic_hc__read__lines_fun6050__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_examples_basic_hc__read__lines_fun6050, kk_context());
  _self->file__path = file__path;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_examples_basic_hc__read__lines_fun6052__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__read__lines_fun6052(kk_function_t _fself, kk_box_t _b_x2279, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__read__lines_fun6052(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__read__lines_fun6052, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__read__lines_fun6052(kk_function_t _fself, kk_box_t _b_x2279, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6053;
  kk_string_t _x_x6054 = kk_string_unbox(_b_x2279); /*string*/
  _x_x6053 = kk_std_os_path_path(_x_x6054, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6053, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__read__lines_fun6055__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__read__lines_fun6055(kk_function_t _fself, kk_box_t _b_x2285, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__read__lines_fun6055(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__read__lines_fun6055, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__read__lines_fun6055(kk_function_t _fself, kk_box_t _b_x2285, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6056;
  kk_std_os_path__path _x_x6057 = kk_std_os_path__path_unbox(_b_x2285, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x6056 = kk_std_os_file_read_text_file(_x_x6057, _ctx); /*string*/
  return kk_string_box(_x_x6056);
}
static kk_box_t kk_examples_basic_hc__read__lines_fun6050(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_examples_basic_hc__read__lines_fun6050__t* _self = kk_function_as(struct kk_examples_basic_hc__read__lines_fun6050__t*, _fself, _ctx);
  kk_string_t file__path = _self->file__path; /* string */
  kk_drop_match(_self, {kk_string_dup(file__path, _ctx);}, {}, _ctx)
  kk_std_os_path__path _x_x1_11125;
  kk_box_t _x_x6051 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__read__lines_fun6052(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x1_11125 = kk_std_os_path__path_unbox(_x_x6051, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_ssize_t _b_x2282_2288 = (KK_IZ(0)); /*hnd/ev-index*/;
  return kk_std_core_hnd__open_at1(_b_x2282_2288, kk_examples_basic_new_hc__read__lines_fun6055(_ctx), kk_std_os_path__path_box(_x_x1_11125, _ctx), _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__read__lines_fun6059__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__read__lines_fun6059(kk_function_t _fself, kk_box_t _b_x2292, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__read__lines_fun6059(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__read__lines_fun6059, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__read__lines_fun6059(kk_function_t _fself, kk_box_t _b_x2292, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6060;
  kk_std_core_exn__error _x_x6061 = kk_std_core_exn__error_unbox(_b_x2292, KK_OWNED, _ctx); /*error<string>*/
  _x_x6060 = kk_examples_basic__mlift_hc__read__lines_11194(_x_x6061, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6060, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__read__lines_fun6063__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__read__lines_fun6063(kk_function_t _fself, kk_box_t _b_x2296, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__read__lines_fun6063(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__read__lines_fun6063, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__read__lines_fun6063(kk_function_t _fself, kk_box_t _b_x2296, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6064;
  kk_std_core_exn__exception _match_x2373 = kk_std_core_exn__exception_unbox(_b_x2296, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2373.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2373, _ctx);
    _x_x6064 = _x; /*string*/
  }
  return kk_string_box(_x_x6064);
}


// lift anonymous function
struct kk_examples_basic_hc__read__lines_fun6070__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__read__lines_fun6070(kk_function_t _fself, kk_box_t _b_x2305, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__read__lines_fun6070(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__read__lines_fun6070, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__read__lines_fun6070(kk_function_t _fself, kk_box_t _b_x2305, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6071;
  kk_string_t _x_x6072 = kk_string_unbox(_b_x2305); /*string*/
  _x_x6071 = kk_examples_basic__mlift_hc__read__lines_11193(_x_x6072, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6071, _ctx);
}


// lift anonymous function
struct kk_examples_basic_hc__read__lines_fun6073__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__read__lines_fun6073(kk_function_t _fself, kk_box_t _b_x2311, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__read__lines_fun6073(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__read__lines_fun6073, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_examples_basic_hc__read__lines_fun6079__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__read__lines_fun6079(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__read__lines_fun6079(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__read__lines_fun6079, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__read__lines_fun6079(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6080;
  kk_char_t _x_x6081 = kk_char_unbox(_b_x2308, KK_OWNED, _ctx); /*char*/
  _x_x6080 = kk_std_core_string_char_fs_string(_x_x6081, _ctx); /*string*/
  return kk_string_box(_x_x6080);
}
static kk_box_t kk_examples_basic_hc__read__lines_fun6073(kk_function_t _fself, kk_box_t _b_x2311, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2318 = kk_string_unbox(_b_x2311); /*string*/;
  kk_std_core_types__list _x_x6074;
  bool _match_x2370;
  kk_string_t _x_x6075;
  kk_define_string_literal(static, _s_x6076, 1, "\n", _ctx)
  _x_x6075 = kk_string_dup(_s_x6076, _ctx); /*string*/
  kk_string_t _x_x6077 = kk_string_empty(); /*string*/
  _match_x2370 = kk_string_is_eq(_x_x6075,_x_x6077,kk_context()); /*bool*/
  if (_match_x2370) {
    kk_std_core_types__list _b_x2306_2316 = kk_std_core_string_list(s_2318, _ctx); /*list<char>*/;
    kk_function_t _brw_x2371 = kk_examples_basic_new_hc__read__lines_fun6079(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2372 = kk_std_core_list_map(_b_x2306_2316, _brw_x2371, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2371, _ctx);
    _x_x6074 = _brw_x2372; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x6082;
    kk_define_string_literal(static, _s_x6083, 1, "\n", _ctx)
    _x_x6082 = kk_string_dup(_s_x6083, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2318,_x_x6082,kk_context()); /*vector<string>*/
    _x_x6074 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x6074, _ctx);
}

kk_std_core_types__list kk_examples_basic_hc__read__lines(kk_string_t file__path, kk_context_t* _ctx) { /* (file_path : string) -> <exn,fsys> list<string> */ 
  kk_std_core_exn__error x_11401 = kk_std_core_exn_error_fs_try(kk_examples_basic_new_hc__read__lines_fun6050(file__path, _ctx), _ctx); /*error<string>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_exn__error_drop(x_11401, _ctx);
    kk_box_t _x_x6058 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__read__lines_fun6059(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x6058, KK_OWNED, _ctx);
  }
  {
    kk_string_t x_0_11404;
    if (kk_std_core_exn__is_Ok(x_11401, _ctx)) {
      kk_box_t _box_x2293 = x_11401._cons.Ok.result;
      kk_string_t hc____c = kk_string_unbox(_box_x2293);
      kk_string_dup(hc____c, _ctx);
      kk_std_core_exn__error_drop(x_11401, _ctx);
      x_0_11404 = hc____c; /*string*/
    }
    else {
      kk_std_core_exn__exception hc____e = x_11401._cons.Error.exception;
      kk_std_core_exn__exception_dup(hc____e, _ctx);
      kk_std_core_exn__error_drop(x_11401, _ctx);
      kk_string_t hc____e_0;
      kk_box_t _x_x6062 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__read__lines_fun6063(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
      hc____e_0 = kk_string_unbox(_x_x6062); /*string*/
      kk_string_t _b_x2300_2302;
      kk_string_t _x_x6065;
      kk_define_string_literal(static, _s_x6066, 8, "unwrap: ", _ctx)
      _x_x6065 = kk_string_dup(_s_x6066, _ctx); /*string*/
      kk_string_t _x_x6067 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
      _b_x2300_2302 = kk_std_core_types__lp__plus__plus__rp_(_x_x6065, _x_x6067, _ctx); /*string*/
      kk_box_t _x_x6068 = kk_std_core_exn_throw(_b_x2300_2302, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
      x_0_11404 = kk_string_unbox(_x_x6068); /*string*/
    }
    kk_box_t _x_x6069;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_11404, _ctx);
      _x_x6069 = kk_std_core_hnd_yield_extend(kk_examples_basic_new_hc__read__lines_fun6070(_ctx), _ctx); /*10001*/
    }
    else {
      _x_x6069 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__read__lines_fun6073(_ctx), kk_string_box(x_0_11404), _ctx); /*10001*/
    }
    return kk_std_core_types__list_unbox(_x_x6069, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_examples_basic_hc__write__lines_fun6086__t {
  struct kk_function_s _base;
};
static kk_box_t kk_examples_basic_hc__write__lines_fun6086(kk_function_t _fself, kk_box_t _b_x2321, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_hc__write__lines_fun6086(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_hc__write__lines_fun6086, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_examples_basic_hc__write__lines_fun6086(kk_function_t _fself, kk_box_t _b_x2321, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6087;
  kk_string_t _x_x6088 = kk_string_unbox(_b_x2321); /*string*/
  _x_x6087 = kk_std_os_path_path(_x_x6088, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6087, _ctx);
}

kk_unit_t kk_examples_basic_hc__write__lines(kk_string_t file__path, kk_std_core_types__list xs, kk_context_t* _ctx) { /* (file_path : string, xs : list<string>) -> <exn,fsys> () */ 
  kk_std_os_path__path _x_x6084;
  kk_box_t _x_x6085 = kk_std_core_hnd__open_none1(kk_examples_basic_new_hc__write__lines_fun6086(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x6084 = kk_std_os_path__path_unbox(_x_x6085, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_string_t _x_x6089;
  kk_string_t _x_x6090;
  kk_define_string_literal(static, _s_x6091, 1, "\n", _ctx)
  _x_x6090 = kk_string_dup(_s_x6091, _ctx); /*string*/
  _x_x6089 = kk_std_core_list_joinsep(xs, _x_x6090, _ctx); /*string*/
  kk_std_os_file_write_text_file(_x_x6084, _x_x6089, kk_std_core_types__new_None(_ctx), _ctx); return kk_Unit;
}
 
// .hc:2


// lift anonymous function
struct kk_examples_basic_main_fun6107__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_main_fun6107(kk_function_t _fself, kk_box_t _b_x2328, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_main_fun6107(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_main_fun6107, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_main_fun6107(kk_function_t _fself, kk_box_t _b_x2328, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_hml__types__hml _x_x6108 = kk_hml__types__hml_unbox(_b_x2328, KK_OWNED, _ctx); /*hml_types/hml*/
  return kk_hml__types_hml_fs_show(_x_x6108, _ctx);
}


// lift anonymous function
struct kk_examples_basic_main_fun6118__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_main_fun6118(kk_function_t _fself, kk_box_t _b_x2335, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_main_fun6118(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_main_fun6118, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_main_fun6118(kk_function_t _fself, kk_box_t _b_x2335, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6119 = kk_string_unbox(_b_x2335); /*string*/
  return kk_std_core_show_string_fs_show(_x_x6119, _ctx);
}


// lift anonymous function
struct kk_examples_basic_main_fun6127__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_main_fun6127(kk_function_t _fself, kk_box_t _b_x2343, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_main_fun6127(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_main_fun6127, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_main_fun6127(kk_function_t _fself, kk_box_t _b_x2343, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6128 = kk_string_unbox(_b_x2343); /*string*/
  return kk_std_core_show_string_fs_show(_x_x6128, _ctx);
}


// lift anonymous function
struct kk_examples_basic_main_fun6137__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_main_fun6137(kk_function_t _fself, kk_box_t _b_x2352, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_main_fun6137(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_main_fun6137, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_main_fun6137(kk_function_t _fself, kk_box_t _b_x2352, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6138 = kk_string_unbox(_b_x2352); /*string*/
  return kk_std_core_show_string_fs_show(_x_x6138, _ctx);
}


// lift anonymous function
struct kk_examples_basic_main_fun6146__t {
  struct kk_function_s _base;
};
static kk_string_t kk_examples_basic_main_fun6146(kk_function_t _fself, kk_box_t _b_x2360, kk_context_t* _ctx);
static kk_function_t kk_examples_basic_new_main_fun6146(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_examples_basic_main_fun6146, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_examples_basic_main_fun6146(kk_function_t _fself, kk_box_t _b_x2360, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6147 = kk_string_unbox(_b_x2360); /*string*/
  return kk_std_core_show_string_fs_show(_x_x6147, _ctx);
}

kk_unit_t kk_examples_basic_main(kk_context_t* _ctx) { /* () -> <console/console,div> () */ 
  kk_std_core_types__either _match_x2365;
  kk_string_t _x_x6092;
  kk_define_string_literal(static, _s_x6093, 86, "@server(port: 8080, public) {\n    host: \"localhost\"\n    name: \"api\"\n    timeout: 30s\n}", _ctx)
  _x_x6092 = kk_string_dup(_s_x6093, _ctx); /*string*/
  _match_x2365 = kk_parser_hc__parse__document(_x_x6092, kk_integer_from_small(0), kk_std_core_types__new_Nil(_ctx), _ctx); /*either<string,list<hml_types/hmlnode>>*/
  if (kk_std_core_types__is_Right(_match_x2365, _ctx)) {
    kk_box_t _box_x2324 = _match_x2365._cons.Right.right;
    kk_std_core_types__list nodes = kk_std_core_types__list_unbox(_box_x2324, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(nodes, _ctx);
    kk_std_core_types__either_drop(_match_x2365, _ctx);
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x6094;
    kk_define_string_literal(static, _s_x6095, 10, "Parsed OK:", _ctx)
    _x_x6094 = kk_string_dup(_s_x6095, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x6094, _ctx);
    kk_string_t s_0_10732;
    kk_std_core_types__list _x_x6096 = kk_std_core_types__list_dup(nodes, _ctx); /*list<hml_types/hmlnode>*/
    s_0_10732 = kk_display_hc__hml__pretty(_x_x6096, kk_integer_from_small(0), _ctx); /*string*/
    kk_unit_t ___0 = kk_Unit;
    kk_std_core_console_printsln(s_0_10732, _ctx);
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x6097 = kk_string_empty(); /*string*/
    kk_std_core_console_printsln(_x_x6097, _ctx);
    kk_std_core_types__maybe _match_x2366;
    kk_string_t _x_x6099;
    kk_define_string_literal(static, _s_x6100, 6, "server", _ctx)
    _x_x6099 = kk_string_dup(_s_x6100, _ctx); /*string*/
    _match_x2366 = kk_api_hc__hml__elem(nodes, _x_x6099, _ctx); /*maybe<hml_types/hml>*/
    if (kk_std_core_types__is_Just(_match_x2366, _ctx)) {
      kk_box_t _box_x2325 = _match_x2366._cons.Just.value;
      kk_hml__types__hml srv = kk_hml__types__hml_unbox(_box_x2325, KK_BORROWED, _ctx);
      kk_hml__types__hml_dup(srv, _ctx);
      kk_std_core_types__maybe_drop(_match_x2366, _ctx);
      kk_std_core_types__maybe _b_x2326_2329;
      if (kk_hml__types__is_HElement(srv, _ctx)) {
        struct kk_hml__types_HElement* _con_x6101 = kk_hml__types__as_HElement(srv, _ctx);
        kk_std_core_types__list attrs = _con_x6101->attrs;
        kk_std_core_types__list_dup(attrs, _ctx);
        kk_string_t _x_x6102;
        kk_define_string_literal(static, _s_x6103, 4, "port", _ctx)
        _x_x6102 = kk_string_dup(_s_x6103, _ctx); /*string*/
        _b_x2326_2329 = kk_api_hc__find__attr(attrs, _x_x6102, _ctx); /*maybe<hml_types/hml>*/
      }
      else {
        _b_x2326_2329 = kk_std_core_types__new_Nothing(_ctx); /*maybe<hml_types/hml>*/
      }
      kk_string_t s_2_10734;
      kk_string_t _x_x6104;
      kk_define_string_literal(static, _s_x6105, 11, "port attr: ", _ctx)
      _x_x6104 = kk_string_dup(_s_x6105, _ctx); /*string*/
      kk_string_t _x_x6106 = kk_std_core_maybe_show(_b_x2326_2329, kk_examples_basic_new_main_fun6107(_ctx), _ctx); /*string*/
      s_2_10734 = kk_std_core_types__lp__plus__plus__rp_(_x_x6104, _x_x6106, _ctx); /*string*/
      kk_unit_t ___2 = kk_Unit;
      kk_std_core_console_printsln(s_2_10734, _ctx);
      if (kk_hml__types__is_HElement(srv, _ctx)) {
        struct kk_hml__types_HElement* _con_x6109 = kk_hml__types__as_HElement(srv, _ctx);
        kk_string_t _pat_0_1 = _con_x6109->name;
        kk_std_core_types__list _pat_1_1 = _con_x6109->attrs;
        kk_std_core_types__list body = _con_x6109->body;
        if kk_likely(kk_datatype_ptr_is_unique(srv, _ctx)) {
          kk_std_core_types__list_drop(_pat_1_1, _ctx);
          kk_string_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(srv, _ctx);
        }
        else {
          kk_std_core_types__list_dup(body, _ctx);
          kk_datatype_ptr_decref(srv, _ctx);
        }
        kk_std_core_types__maybe v_1_10739;
        kk_std_core_types__list _x_x6110 = kk_std_core_types__list_dup(body, _ctx); /*list<hml_types/hmlnode>*/
        kk_string_t _x_x6111;
        kk_define_string_literal(static, _s_x6112, 4, "host", _ctx)
        _x_x6111 = kk_string_dup(_s_x6112, _ctx); /*string*/
        v_1_10739 = kk_api_hc__hml__get(_x_x6110, _x_x6111, _ctx); /*maybe<hml_types/hml>*/
        kk_string_t s_3_10738;
        kk_string_t _x_x6113;
        kk_define_string_literal(static, _s_x6114, 6, "host: ", _ctx)
        _x_x6113 = kk_string_dup(_s_x6114, _ctx); /*string*/
        kk_string_t _x_x6115;
        kk_std_core_types__maybe _x_x6116;
        if (kk_std_core_types__is_Just(v_1_10739, _ctx)) {
          kk_box_t _box_x2331 = v_1_10739._cons.Just.value;
          kk_hml__types__hml h = kk_hml__types__hml_unbox(_box_x2331, KK_BORROWED, _ctx);
          kk_hml__types__hml_dup(h, _ctx);
          kk_std_core_types__maybe_drop(v_1_10739, _ctx);
          if (kk_hml__types__is_HStr(h, _ctx)) {
            struct kk_hml__types_HStr* _con_x6117 = kk_hml__types__as_HStr(h, _ctx);
            kk_string_t s_4 = _con_x6117->value;
            if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
              kk_datatype_ptr_free(h, _ctx);
            }
            else {
              kk_string_dup(s_4, _ctx);
              kk_datatype_ptr_decref(h, _ctx);
            }
            _x_x6116 = kk_std_core_types__new_Just(kk_string_box(s_4), _ctx); /*maybe<10024>*/
          }
          else {
            kk_hml__types__hml_drop(h, _ctx);
            _x_x6116 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
          }
        }
        else {
          _x_x6116 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
        }
        _x_x6115 = kk_std_core_maybe_show(_x_x6116, kk_examples_basic_new_main_fun6118(_ctx), _ctx); /*string*/
        s_3_10738 = kk_std_core_types__lp__plus__plus__rp_(_x_x6113, _x_x6115, _ctx); /*string*/
        kk_unit_t ___3 = kk_Unit;
        kk_std_core_console_printsln(s_3_10738, _ctx);
        kk_std_core_types__maybe v_2_10743;
        kk_string_t _x_x6120;
        kk_define_string_literal(static, _s_x6121, 4, "name", _ctx)
        _x_x6120 = kk_string_dup(_s_x6121, _ctx); /*string*/
        v_2_10743 = kk_api_hc__hml__get(body, _x_x6120, _ctx); /*maybe<hml_types/hml>*/
        kk_string_t s_5_10742;
        kk_string_t _x_x6122;
        kk_define_string_literal(static, _s_x6123, 6, "name: ", _ctx)
        _x_x6122 = kk_string_dup(_s_x6123, _ctx); /*string*/
        kk_string_t _x_x6124;
        kk_std_core_types__maybe _x_x6125;
        if (kk_std_core_types__is_Just(v_2_10743, _ctx)) {
          kk_box_t _box_x2339 = v_2_10743._cons.Just.value;
          kk_hml__types__hml h_0 = kk_hml__types__hml_unbox(_box_x2339, KK_BORROWED, _ctx);
          kk_hml__types__hml_dup(h_0, _ctx);
          kk_std_core_types__maybe_drop(v_2_10743, _ctx);
          if (kk_hml__types__is_HStr(h_0, _ctx)) {
            struct kk_hml__types_HStr* _con_x6126 = kk_hml__types__as_HStr(h_0, _ctx);
            kk_string_t s_6 = _con_x6126->value;
            if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
              kk_datatype_ptr_free(h_0, _ctx);
            }
            else {
              kk_string_dup(s_6, _ctx);
              kk_datatype_ptr_decref(h_0, _ctx);
            }
            _x_x6125 = kk_std_core_types__new_Just(kk_string_box(s_6), _ctx); /*maybe<10024>*/
          }
          else {
            kk_hml__types__hml_drop(h_0, _ctx);
            _x_x6125 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
          }
        }
        else {
          _x_x6125 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
        }
        _x_x6124 = kk_std_core_maybe_show(_x_x6125, kk_examples_basic_new_main_fun6127(_ctx), _ctx); /*string*/
        s_5_10742 = kk_std_core_types__lp__plus__plus__rp_(_x_x6122, _x_x6124, _ctx); /*string*/
        kk_std_core_console_printsln(s_5_10742, _ctx); return kk_Unit;
      }
      {
        kk_hml__types__hml_drop(srv, _ctx);
        kk_std_core_types__maybe _match_x2367 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2367, _ctx)) {
          kk_box_t _box_x2347 = _match_x2367._cons.Just.value;
          kk_std_core_types__list body_0 = kk_std_core_types__list_unbox(_box_x2347, KK_BORROWED, _ctx);
          kk_std_core_types__list_dup(body_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2367, _ctx);
          kk_std_core_types__maybe v_1_10739_0;
          kk_std_core_types__list _x_x6129 = kk_std_core_types__list_dup(body_0, _ctx); /*list<hml_types/hmlnode>*/
          kk_string_t _x_x6130;
          kk_define_string_literal(static, _s_x6131, 4, "host", _ctx)
          _x_x6130 = kk_string_dup(_s_x6131, _ctx); /*string*/
          v_1_10739_0 = kk_api_hc__hml__get(_x_x6129, _x_x6130, _ctx); /*maybe<hml_types/hml>*/
          kk_string_t s_3_10738_0;
          kk_string_t _x_x6132;
          kk_define_string_literal(static, _s_x6133, 6, "host: ", _ctx)
          _x_x6132 = kk_string_dup(_s_x6133, _ctx); /*string*/
          kk_string_t _x_x6134;
          kk_std_core_types__maybe _x_x6135;
          if (kk_std_core_types__is_Just(v_1_10739_0, _ctx)) {
            kk_box_t _box_x2348 = v_1_10739_0._cons.Just.value;
            kk_hml__types__hml h_1 = kk_hml__types__hml_unbox(_box_x2348, KK_BORROWED, _ctx);
            kk_hml__types__hml_dup(h_1, _ctx);
            kk_std_core_types__maybe_drop(v_1_10739_0, _ctx);
            if (kk_hml__types__is_HStr(h_1, _ctx)) {
              struct kk_hml__types_HStr* _con_x6136 = kk_hml__types__as_HStr(h_1, _ctx);
              kk_string_t s_4_0 = _con_x6136->value;
              if kk_likely(kk_datatype_ptr_is_unique(h_1, _ctx)) {
                kk_datatype_ptr_free(h_1, _ctx);
              }
              else {
                kk_string_dup(s_4_0, _ctx);
                kk_datatype_ptr_decref(h_1, _ctx);
              }
              _x_x6135 = kk_std_core_types__new_Just(kk_string_box(s_4_0), _ctx); /*maybe<10024>*/
            }
            else {
              kk_hml__types__hml_drop(h_1, _ctx);
              _x_x6135 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
            }
          }
          else {
            _x_x6135 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
          }
          _x_x6134 = kk_std_core_maybe_show(_x_x6135, kk_examples_basic_new_main_fun6137(_ctx), _ctx); /*string*/
          s_3_10738_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x6132, _x_x6134, _ctx); /*string*/
          kk_unit_t ___3_0 = kk_Unit;
          kk_std_core_console_printsln(s_3_10738_0, _ctx);
          kk_std_core_types__maybe v_2_10743_0;
          kk_string_t _x_x6139;
          kk_define_string_literal(static, _s_x6140, 4, "name", _ctx)
          _x_x6139 = kk_string_dup(_s_x6140, _ctx); /*string*/
          v_2_10743_0 = kk_api_hc__hml__get(body_0, _x_x6139, _ctx); /*maybe<hml_types/hml>*/
          kk_string_t s_5_10742_0;
          kk_string_t _x_x6141;
          kk_define_string_literal(static, _s_x6142, 6, "name: ", _ctx)
          _x_x6141 = kk_string_dup(_s_x6142, _ctx); /*string*/
          kk_string_t _x_x6143;
          kk_std_core_types__maybe _x_x6144;
          if (kk_std_core_types__is_Just(v_2_10743_0, _ctx)) {
            kk_box_t _box_x2356 = v_2_10743_0._cons.Just.value;
            kk_hml__types__hml h_0_0 = kk_hml__types__hml_unbox(_box_x2356, KK_BORROWED, _ctx);
            kk_hml__types__hml_dup(h_0_0, _ctx);
            kk_std_core_types__maybe_drop(v_2_10743_0, _ctx);
            if (kk_hml__types__is_HStr(h_0_0, _ctx)) {
              struct kk_hml__types_HStr* _con_x6145 = kk_hml__types__as_HStr(h_0_0, _ctx);
              kk_string_t s_6_0 = _con_x6145->value;
              if kk_likely(kk_datatype_ptr_is_unique(h_0_0, _ctx)) {
                kk_datatype_ptr_free(h_0_0, _ctx);
              }
              else {
                kk_string_dup(s_6_0, _ctx);
                kk_datatype_ptr_decref(h_0_0, _ctx);
              }
              _x_x6144 = kk_std_core_types__new_Just(kk_string_box(s_6_0), _ctx); /*maybe<10024>*/
            }
            else {
              kk_hml__types__hml_drop(h_0_0, _ctx);
              _x_x6144 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
            }
          }
          else {
            _x_x6144 = kk_std_core_types__new_Nothing(_ctx); /*maybe<10024>*/
          }
          _x_x6143 = kk_std_core_maybe_show(_x_x6144, kk_examples_basic_new_main_fun6146(_ctx), _ctx); /*string*/
          s_5_10742_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x6141, _x_x6143, _ctx); /*string*/
          kk_std_core_console_printsln(s_5_10742_0, _ctx); return kk_Unit;
        }
        {
          kk_string_t _x_x6148;
          kk_define_string_literal(static, _s_x6149, 7, "no body", _ctx)
          _x_x6148 = kk_string_dup(_s_x6149, _ctx); /*string*/
          kk_std_core_console_printsln(_x_x6148, _ctx); return kk_Unit;
        }
      }
    }
    {
      kk_string_t _x_x6150;
      kk_define_string_literal(static, _s_x6151, 17, "no server element", _ctx)
      _x_x6150 = kk_string_dup(_s_x6151, _ctx); /*string*/
      kk_std_core_console_printsln(_x_x6150, _ctx); return kk_Unit;
    }
  }
  {
    kk_box_t _box_x2364 = _match_x2365._cons.Left.left;
    kk_string_t e = kk_string_unbox(_box_x2364);
    kk_string_dup(e, _ctx);
    kk_std_core_types__either_drop(_match_x2365, _ctx);
    kk_string_t s_9_10748;
    kk_string_t _x_x6152;
    kk_define_string_literal(static, _s_x6153, 13, "Parse error: ", _ctx)
    _x_x6152 = kk_string_dup(_s_x6153, _ctx); /*string*/
    s_9_10748 = kk_std_core_types__lp__plus__plus__rp_(_x_x6152, e, _ctx); /*string*/
    kk_std_core_console_printsln(s_9_10748, _ctx); return kk_Unit;
  }
}

// initialization
void kk_examples_basic__init(kk_context_t* _ctx){
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
  kk_hml__types__init(_ctx);
  kk_parser__init(_ctx);
  kk_api__init(_ctx);
  kk_display__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_os_env__init(_ctx);
  kk_std_os_file__init(_ctx);
  kk_std_os_path__init(_ctx);
  kk_hml__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x3127;
    kk_define_string_literal(static, _s_x3128, 14, "hica-brk@basic", _ctx)
    _x_x3127 = kk_string_dup(_s_x3128, _ctx); /*string*/
    kk_examples_basic_hica_brk_fs__tag = kk_std_core_hnd__new_Htag(_x_x3127, _ctx); /*hnd/htag<examples/basic/hica-brk>*/
  }
}

// termination
void kk_examples_basic__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_examples_basic_hica_brk_fs__tag, _ctx);
  kk_hml__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_os_file__done(_ctx);
  kk_std_os_env__done(_ctx);
  kk_std_core__done(_ctx);
  kk_display__done(_ctx);
  kk_api__done(_ctx);
  kk_parser__done(_ctx);
  kk_hml__types__done(_ctx);
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
