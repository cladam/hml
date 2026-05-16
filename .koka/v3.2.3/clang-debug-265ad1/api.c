// Koka generated module: api, koka version: 3.2.3, platform: 64-bit
#include "api.h"
 
// runtime tag for the effect `:hica-brk`

kk_std_core_hnd__htag kk_api_hica_brk_fs__tag;
 
// handler for the effect `:hica-brk`

kk_box_t kk_api_hica_brk_fs__handle(kk_api__hica_brk hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : hica-brk<e,b>, ret : (res : a) -> e b, action : () -> <hica-brk|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x3160 = kk_std_core_hnd__htag_dup(kk_api_hica_brk_fs__tag, _ctx); /*hnd/htag<api/hica-brk>*/
  return kk_std_core_hnd__hhandle(_x_x3160, kk_api__hica_brk_box(hnd, _ctx), ret, action, _ctx);
}


// lift anonymous function
struct kk_api_hc_assert_fun3166__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc_assert_fun3166(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc_assert_fun3166(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc_assert_fun3166, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc_assert_fun3166(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x3167;
  bool b_0_18 = kk_bool_unbox(_b_x11); /*bool*/;
  if (b_0_18) {
    _x_x3167 = false; /*bool*/
  }
  else {
    _x_x3167 = true; /*bool*/
  }
  return kk_bool_box(_x_x3167);
}

kk_unit_t kk_api_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x2984;
  kk_box_t _x_x3165 = kk_std_core_hnd__open_none1(kk_api_new_hc_assert_fun3166(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x2984 = kk_bool_unbox(_x_x3165); /*bool*/
  if (_match_x2984) {
    kk_box_t _x_x3168;
    kk_string_t _x_x3169;
    kk_define_string_literal(static, _s_x3170, 16, "assertion failed", _ctx)
    _x_x3169 = kk_string_dup(_s_x3170, _ctx); /*string*/
    _x_x3168 = kk_std_core_exn_throw(_x_x3169, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x3168); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}

kk_api__cliflag kk_api_cliflag_fs__copy(kk_api__cliflag _this, kk_std_core_types__optional flag__name, kk_std_core_types__optional flag__short, kk_std_core_types__optional flag__help, kk_context_t* _ctx) { /* (cliflag, flag_name : ? string, flag_short : ? string, flag_help : ? string) -> cliflag */ 
  kk_string_t _x_x3177;
  if (kk_std_core_types__is_Optional(flag__name, _ctx)) {
    kk_box_t _box_x19 = flag__name._cons._Optional.value;
    kk_string_t _uniq_flag__name_973 = kk_string_unbox(_box_x19);
    kk_string_dup(_uniq_flag__name_973, _ctx);
    kk_std_core_types__optional_drop(flag__name, _ctx);
    _x_x3177 = _uniq_flag__name_973; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__name, _ctx);
    {
      struct kk_api_Cliflag* _con_x3178 = kk_api__as_Cliflag(_this, _ctx);
      kk_string_t _x = _con_x3178->flag__name;
      kk_string_dup(_x, _ctx);
      _x_x3177 = _x; /*string*/
    }
  }
  kk_string_t _x_x3179;
  if (kk_std_core_types__is_Optional(flag__short, _ctx)) {
    kk_box_t _box_x20 = flag__short._cons._Optional.value;
    kk_string_t _uniq_flag__short_981 = kk_string_unbox(_box_x20);
    kk_string_dup(_uniq_flag__short_981, _ctx);
    kk_std_core_types__optional_drop(flag__short, _ctx);
    _x_x3179 = _uniq_flag__short_981; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__short, _ctx);
    {
      struct kk_api_Cliflag* _con_x3180 = kk_api__as_Cliflag(_this, _ctx);
      kk_string_t _x_0 = _con_x3180->flag__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3179 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3181;
  if (kk_std_core_types__is_Optional(flag__help, _ctx)) {
    kk_box_t _box_x21 = flag__help._cons._Optional.value;
    kk_string_t _uniq_flag__help_989 = kk_string_unbox(_box_x21);
    kk_string_dup(_uniq_flag__help_989, _ctx);
    kk_std_core_types__optional_drop(flag__help, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x3181 = _uniq_flag__help_989; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__help, _ctx);
    {
      struct kk_api_Cliflag* _con_x3182 = kk_api__as_Cliflag(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3182->flag__name;
      kk_string_t _pat_1_3 = _con_x3182->flag__short;
      kk_string_t _x_1 = _con_x3182->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3181 = _x_1; /*string*/
    }
  }
  return kk_api__new_Cliflag(kk_reuse_null, 0, _x_x3177, _x_x3179, _x_x3181, _ctx);
}

kk_string_t kk_api_cliflag_fs_show(kk_api__cliflag p, kk_context_t* _ctx) { /* (p : cliflag) -> string */ 
  kk_string_t _x_x3183;
  kk_define_string_literal(static, _s_x3184, 8, "CliFlag(", _ctx)
  _x_x3183 = kk_string_dup(_s_x3184, _ctx); /*string*/
  kk_string_t _x_x3185;
  kk_string_t _x_x3186;
  kk_define_string_literal(static, _s_x3187, 11, "flag_name: ", _ctx)
  _x_x3186 = kk_string_dup(_s_x3187, _ctx); /*string*/
  kk_string_t _x_x3188;
  kk_string_t _x_x3189;
  {
    struct kk_api_Cliflag* _con_x3190 = kk_api__as_Cliflag(p, _ctx);
    kk_string_t _x = _con_x3190->flag__name;
    kk_string_dup(_x, _ctx);
    _x_x3189 = _x; /*string*/
  }
  kk_string_t _x_x3191;
  kk_string_t _x_x3192;
  kk_define_string_literal(static, _s_x3193, 2, ", ", _ctx)
  _x_x3192 = kk_string_dup(_s_x3193, _ctx); /*string*/
  kk_string_t _x_x3194;
  kk_string_t _x_x3195;
  kk_define_string_literal(static, _s_x3196, 12, "flag_short: ", _ctx)
  _x_x3195 = kk_string_dup(_s_x3196, _ctx); /*string*/
  kk_string_t _x_x3197;
  kk_string_t _x_x3198;
  {
    struct kk_api_Cliflag* _con_x3199 = kk_api__as_Cliflag(p, _ctx);
    kk_string_t _x_0 = _con_x3199->flag__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3198 = _x_0; /*string*/
  }
  kk_string_t _x_x3200;
  kk_string_t _x_x3201;
  kk_define_string_literal(static, _s_x3202, 2, ", ", _ctx)
  _x_x3201 = kk_string_dup(_s_x3202, _ctx); /*string*/
  kk_string_t _x_x3203;
  kk_string_t _x_x3204;
  kk_define_string_literal(static, _s_x3205, 11, "flag_help: ", _ctx)
  _x_x3204 = kk_string_dup(_s_x3205, _ctx); /*string*/
  kk_string_t _x_x3206;
  kk_string_t _x_x3207;
  {
    struct kk_api_Cliflag* _con_x3208 = kk_api__as_Cliflag(p, _ctx);
    kk_string_t _pat_0_1 = _con_x3208->flag__name;
    kk_string_t _pat_1_1 = _con_x3208->flag__short;
    kk_string_t _x_1 = _con_x3208->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _x_x3207 = _x_1; /*string*/
  }
  kk_string_t _x_x3209;
  kk_define_string_literal(static, _s_x3210, 1, ")", _ctx)
  _x_x3209 = kk_string_dup(_s_x3210, _ctx); /*string*/
  _x_x3206 = kk_std_core_types__lp__plus__plus__rp_(_x_x3207, _x_x3209, _ctx); /*string*/
  _x_x3203 = kk_std_core_types__lp__plus__plus__rp_(_x_x3204, _x_x3206, _ctx); /*string*/
  _x_x3200 = kk_std_core_types__lp__plus__plus__rp_(_x_x3201, _x_x3203, _ctx); /*string*/
  _x_x3197 = kk_std_core_types__lp__plus__plus__rp_(_x_x3198, _x_x3200, _ctx); /*string*/
  _x_x3194 = kk_std_core_types__lp__plus__plus__rp_(_x_x3195, _x_x3197, _ctx); /*string*/
  _x_x3191 = kk_std_core_types__lp__plus__plus__rp_(_x_x3192, _x_x3194, _ctx); /*string*/
  _x_x3188 = kk_std_core_types__lp__plus__plus__rp_(_x_x3189, _x_x3191, _ctx); /*string*/
  _x_x3185 = kk_std_core_types__lp__plus__plus__rp_(_x_x3186, _x_x3188, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3183, _x_x3185, _ctx);
}

kk_api__clioption kk_api_clioption_fs__copy(kk_api__clioption _this, kk_std_core_types__optional opt__name, kk_std_core_types__optional opt__short, kk_std_core_types__optional opt__help, kk_std_core_types__optional opt__default, kk_context_t* _ctx) { /* (clioption, opt_name : ? string, opt_short : ? string, opt_help : ? string, opt_default : ? string) -> clioption */ 
  kk_string_t _x_x3215;
  if (kk_std_core_types__is_Optional(opt__name, _ctx)) {
    kk_box_t _box_x22 = opt__name._cons._Optional.value;
    kk_string_t _uniq_opt__name_1136 = kk_string_unbox(_box_x22);
    kk_string_dup(_uniq_opt__name_1136, _ctx);
    kk_std_core_types__optional_drop(opt__name, _ctx);
    _x_x3215 = _uniq_opt__name_1136; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__name, _ctx);
    {
      struct kk_api_Clioption* _con_x3216 = kk_api__as_Clioption(_this, _ctx);
      kk_string_t _x = _con_x3216->opt__name;
      kk_string_dup(_x, _ctx);
      _x_x3215 = _x; /*string*/
    }
  }
  kk_string_t _x_x3217;
  if (kk_std_core_types__is_Optional(opt__short, _ctx)) {
    kk_box_t _box_x23 = opt__short._cons._Optional.value;
    kk_string_t _uniq_opt__short_1144 = kk_string_unbox(_box_x23);
    kk_string_dup(_uniq_opt__short_1144, _ctx);
    kk_std_core_types__optional_drop(opt__short, _ctx);
    _x_x3217 = _uniq_opt__short_1144; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__short, _ctx);
    {
      struct kk_api_Clioption* _con_x3218 = kk_api__as_Clioption(_this, _ctx);
      kk_string_t _x_0 = _con_x3218->opt__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3217 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3219;
  if (kk_std_core_types__is_Optional(opt__help, _ctx)) {
    kk_box_t _box_x24 = opt__help._cons._Optional.value;
    kk_string_t _uniq_opt__help_1152 = kk_string_unbox(_box_x24);
    kk_string_dup(_uniq_opt__help_1152, _ctx);
    kk_std_core_types__optional_drop(opt__help, _ctx);
    _x_x3219 = _uniq_opt__help_1152; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__help, _ctx);
    {
      struct kk_api_Clioption* _con_x3220 = kk_api__as_Clioption(_this, _ctx);
      kk_string_t _x_1 = _con_x3220->opt__help;
      kk_string_dup(_x_1, _ctx);
      _x_x3219 = _x_1; /*string*/
    }
  }
  kk_string_t _x_x3221;
  if (kk_std_core_types__is_Optional(opt__default, _ctx)) {
    kk_box_t _box_x25 = opt__default._cons._Optional.value;
    kk_string_t _uniq_opt__default_1160 = kk_string_unbox(_box_x25);
    kk_string_dup(_uniq_opt__default_1160, _ctx);
    kk_std_core_types__optional_drop(opt__default, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(4)), _ctx);
    _x_x3221 = _uniq_opt__default_1160; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__default, _ctx);
    {
      struct kk_api_Clioption* _con_x3222 = kk_api__as_Clioption(_this, _ctx);
      kk_string_t _pat_0_3 = _con_x3222->opt__name;
      kk_string_t _pat_1_4 = _con_x3222->opt__short;
      kk_string_t _pat_2_3 = _con_x3222->opt__help;
      kk_string_t _x_2 = _con_x3222->opt__default;
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
      _x_x3221 = _x_2; /*string*/
    }
  }
  return kk_api__new_Clioption(kk_reuse_null, 0, _x_x3215, _x_x3217, _x_x3219, _x_x3221, _ctx);
}

kk_string_t kk_api_clioption_fs_show(kk_api__clioption p, kk_context_t* _ctx) { /* (p : clioption) -> string */ 
  kk_string_t _x_x3223;
  kk_define_string_literal(static, _s_x3224, 10, "CliOption(", _ctx)
  _x_x3223 = kk_string_dup(_s_x3224, _ctx); /*string*/
  kk_string_t _x_x3225;
  kk_string_t _x_x3226;
  kk_define_string_literal(static, _s_x3227, 10, "opt_name: ", _ctx)
  _x_x3226 = kk_string_dup(_s_x3227, _ctx); /*string*/
  kk_string_t _x_x3228;
  kk_string_t _x_x3229;
  {
    struct kk_api_Clioption* _con_x3230 = kk_api__as_Clioption(p, _ctx);
    kk_string_t _x = _con_x3230->opt__name;
    kk_string_dup(_x, _ctx);
    _x_x3229 = _x; /*string*/
  }
  kk_string_t _x_x3231;
  kk_string_t _x_x3232;
  kk_define_string_literal(static, _s_x3233, 2, ", ", _ctx)
  _x_x3232 = kk_string_dup(_s_x3233, _ctx); /*string*/
  kk_string_t _x_x3234;
  kk_string_t _x_x3235;
  kk_define_string_literal(static, _s_x3236, 11, "opt_short: ", _ctx)
  _x_x3235 = kk_string_dup(_s_x3236, _ctx); /*string*/
  kk_string_t _x_x3237;
  kk_string_t _x_x3238;
  {
    struct kk_api_Clioption* _con_x3239 = kk_api__as_Clioption(p, _ctx);
    kk_string_t _x_0 = _con_x3239->opt__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3238 = _x_0; /*string*/
  }
  kk_string_t _x_x3240;
  kk_string_t _x_x3241;
  kk_define_string_literal(static, _s_x3242, 2, ", ", _ctx)
  _x_x3241 = kk_string_dup(_s_x3242, _ctx); /*string*/
  kk_string_t _x_x3243;
  kk_string_t _x_x3244;
  kk_define_string_literal(static, _s_x3245, 10, "opt_help: ", _ctx)
  _x_x3244 = kk_string_dup(_s_x3245, _ctx); /*string*/
  kk_string_t _x_x3246;
  kk_string_t _x_x3247;
  {
    struct kk_api_Clioption* _con_x3248 = kk_api__as_Clioption(p, _ctx);
    kk_string_t _x_1 = _con_x3248->opt__help;
    kk_string_dup(_x_1, _ctx);
    _x_x3247 = _x_1; /*string*/
  }
  kk_string_t _x_x3249;
  kk_string_t _x_x3250;
  kk_define_string_literal(static, _s_x3251, 2, ", ", _ctx)
  _x_x3250 = kk_string_dup(_s_x3251, _ctx); /*string*/
  kk_string_t _x_x3252;
  kk_string_t _x_x3253;
  kk_define_string_literal(static, _s_x3254, 13, "opt_default: ", _ctx)
  _x_x3253 = kk_string_dup(_s_x3254, _ctx); /*string*/
  kk_string_t _x_x3255;
  kk_string_t _x_x3256;
  {
    struct kk_api_Clioption* _con_x3257 = kk_api__as_Clioption(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3257->opt__name;
    kk_string_t _pat_1_2 = _con_x3257->opt__short;
    kk_string_t _pat_2_2 = _con_x3257->opt__help;
    kk_string_t _x_2 = _con_x3257->opt__default;
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
    _x_x3256 = _x_2; /*string*/
  }
  kk_string_t _x_x3258;
  kk_define_string_literal(static, _s_x3259, 1, ")", _ctx)
  _x_x3258 = kk_string_dup(_s_x3259, _ctx); /*string*/
  _x_x3255 = kk_std_core_types__lp__plus__plus__rp_(_x_x3256, _x_x3258, _ctx); /*string*/
  _x_x3252 = kk_std_core_types__lp__plus__plus__rp_(_x_x3253, _x_x3255, _ctx); /*string*/
  _x_x3249 = kk_std_core_types__lp__plus__plus__rp_(_x_x3250, _x_x3252, _ctx); /*string*/
  _x_x3246 = kk_std_core_types__lp__plus__plus__rp_(_x_x3247, _x_x3249, _ctx); /*string*/
  _x_x3243 = kk_std_core_types__lp__plus__plus__rp_(_x_x3244, _x_x3246, _ctx); /*string*/
  _x_x3240 = kk_std_core_types__lp__plus__plus__rp_(_x_x3241, _x_x3243, _ctx); /*string*/
  _x_x3237 = kk_std_core_types__lp__plus__plus__rp_(_x_x3238, _x_x3240, _ctx); /*string*/
  _x_x3234 = kk_std_core_types__lp__plus__plus__rp_(_x_x3235, _x_x3237, _ctx); /*string*/
  _x_x3231 = kk_std_core_types__lp__plus__plus__rp_(_x_x3232, _x_x3234, _ctx); /*string*/
  _x_x3228 = kk_std_core_types__lp__plus__plus__rp_(_x_x3229, _x_x3231, _ctx); /*string*/
  _x_x3225 = kk_std_core_types__lp__plus__plus__rp_(_x_x3226, _x_x3228, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3223, _x_x3225, _ctx);
}

kk_api__cliarg kk_api_cliarg_fs__copy(kk_api__cliarg _this, kk_std_core_types__optional arg__name, kk_std_core_types__optional arg__help, kk_std_core_types__optional arg__required, kk_context_t* _ctx) { /* (cliarg, arg_name : ? string, arg_help : ? string, arg_required : ? bool) -> cliarg */ 
  kk_string_t _x_x3263;
  if (kk_std_core_types__is_Optional(arg__name, _ctx)) {
    kk_box_t _box_x26 = arg__name._cons._Optional.value;
    kk_string_t _uniq_arg__name_1331 = kk_string_unbox(_box_x26);
    kk_string_dup(_uniq_arg__name_1331, _ctx);
    kk_std_core_types__optional_drop(arg__name, _ctx);
    _x_x3263 = _uniq_arg__name_1331; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__name, _ctx);
    {
      struct kk_api_Cliarg* _con_x3264 = kk_api__as_Cliarg(_this, _ctx);
      kk_string_t _x = _con_x3264->arg__name;
      kk_string_dup(_x, _ctx);
      _x_x3263 = _x; /*string*/
    }
  }
  kk_string_t _x_x3265;
  if (kk_std_core_types__is_Optional(arg__help, _ctx)) {
    kk_box_t _box_x27 = arg__help._cons._Optional.value;
    kk_string_t _uniq_arg__help_1339 = kk_string_unbox(_box_x27);
    kk_string_dup(_uniq_arg__help_1339, _ctx);
    kk_std_core_types__optional_drop(arg__help, _ctx);
    _x_x3265 = _uniq_arg__help_1339; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__help, _ctx);
    {
      struct kk_api_Cliarg* _con_x3266 = kk_api__as_Cliarg(_this, _ctx);
      kk_string_t _x_0 = _con_x3266->arg__help;
      kk_string_dup(_x_0, _ctx);
      _x_x3265 = _x_0; /*string*/
    }
  }
  bool _x_x3267;
  if (kk_std_core_types__is_Optional(arg__required, _ctx)) {
    kk_box_t _box_x28 = arg__required._cons._Optional.value;
    bool _uniq_arg__required_1347 = kk_bool_unbox(_box_x28);
    kk_std_core_types__optional_drop(arg__required, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x3267 = _uniq_arg__required_1347; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(arg__required, _ctx);
    {
      struct kk_api_Cliarg* _con_x3268 = kk_api__as_Cliarg(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3268->arg__name;
      kk_string_t _pat_1_3 = _con_x3268->arg__help;
      bool _x_1 = _con_x3268->arg__required;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3267 = _x_1; /*bool*/
    }
  }
  return kk_api__new_Cliarg(kk_reuse_null, 0, _x_x3263, _x_x3265, _x_x3267, _ctx);
}

kk_api__clispec kk_api_clispec_fs__copy(kk_api__clispec _this, kk_std_core_types__optional app__name, kk_std_core_types__optional app__version, kk_std_core_types__optional app__about, kk_std_core_types__optional app__flags, kk_std_core_types__optional app__options, kk_std_core_types__optional app__args, kk_std_core_types__optional app__commands, kk_context_t* _ctx) { /* (clispec, app_name : ? string, app_version : ? string, app_about : ? string, app_flags : ? (list<cliflag>), app_options : ? (list<clioption>), app_args : ? (list<cliarg>), app_commands : ? (list<(string, clispec)>)) -> clispec */ 
  kk_string_t _x_x3276;
  if (kk_std_core_types__is_Optional(app__name, _ctx)) {
    kk_box_t _box_x29 = app__name._cons._Optional.value;
    kk_string_t _uniq_app__name_1421 = kk_string_unbox(_box_x29);
    kk_string_dup(_uniq_app__name_1421, _ctx);
    kk_std_core_types__optional_drop(app__name, _ctx);
    _x_x3276 = _uniq_app__name_1421; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__name, _ctx);
    {
      struct kk_api_Clispec* _con_x3277 = kk_api__as_Clispec(_this, _ctx);
      kk_string_t _x = _con_x3277->app__name;
      kk_string_dup(_x, _ctx);
      _x_x3276 = _x; /*string*/
    }
  }
  kk_string_t _x_x3278;
  if (kk_std_core_types__is_Optional(app__version, _ctx)) {
    kk_box_t _box_x30 = app__version._cons._Optional.value;
    kk_string_t _uniq_app__version_1429 = kk_string_unbox(_box_x30);
    kk_string_dup(_uniq_app__version_1429, _ctx);
    kk_std_core_types__optional_drop(app__version, _ctx);
    _x_x3278 = _uniq_app__version_1429; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__version, _ctx);
    {
      struct kk_api_Clispec* _con_x3279 = kk_api__as_Clispec(_this, _ctx);
      kk_string_t _x_0 = _con_x3279->app__version;
      kk_string_dup(_x_0, _ctx);
      _x_x3278 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3280;
  if (kk_std_core_types__is_Optional(app__about, _ctx)) {
    kk_box_t _box_x31 = app__about._cons._Optional.value;
    kk_string_t _uniq_app__about_1437 = kk_string_unbox(_box_x31);
    kk_string_dup(_uniq_app__about_1437, _ctx);
    kk_std_core_types__optional_drop(app__about, _ctx);
    _x_x3280 = _uniq_app__about_1437; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__about, _ctx);
    {
      struct kk_api_Clispec* _con_x3281 = kk_api__as_Clispec(_this, _ctx);
      kk_string_t _x_1 = _con_x3281->app__about;
      kk_string_dup(_x_1, _ctx);
      _x_x3280 = _x_1; /*string*/
    }
  }
  kk_std_core_types__list _x_x3282;
  if (kk_std_core_types__is_Optional(app__flags, _ctx)) {
    kk_box_t _box_x32 = app__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_app__flags_1445 = kk_std_core_types__list_unbox(_box_x32, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__flags_1445, _ctx);
    kk_std_core_types__optional_drop(app__flags, _ctx);
    _x_x3282 = _uniq_app__flags_1445; /*list<api/cliflag>*/
  }
  else {
    kk_std_core_types__optional_drop(app__flags, _ctx);
    {
      struct kk_api_Clispec* _con_x3283 = kk_api__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3283->app__flags;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3282 = _x_2; /*list<api/cliflag>*/
    }
  }
  kk_std_core_types__list _x_x3284;
  if (kk_std_core_types__is_Optional(app__options, _ctx)) {
    kk_box_t _box_x33 = app__options._cons._Optional.value;
    kk_std_core_types__list _uniq_app__options_1453 = kk_std_core_types__list_unbox(_box_x33, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__options_1453, _ctx);
    kk_std_core_types__optional_drop(app__options, _ctx);
    _x_x3284 = _uniq_app__options_1453; /*list<api/clioption>*/
  }
  else {
    kk_std_core_types__optional_drop(app__options, _ctx);
    {
      struct kk_api_Clispec* _con_x3285 = kk_api__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_3 = _con_x3285->app__options;
      kk_std_core_types__list_dup(_x_3, _ctx);
      _x_x3284 = _x_3; /*list<api/clioption>*/
    }
  }
  kk_std_core_types__list _x_x3286;
  if (kk_std_core_types__is_Optional(app__args, _ctx)) {
    kk_box_t _box_x34 = app__args._cons._Optional.value;
    kk_std_core_types__list _uniq_app__args_1461 = kk_std_core_types__list_unbox(_box_x34, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__args_1461, _ctx);
    kk_std_core_types__optional_drop(app__args, _ctx);
    _x_x3286 = _uniq_app__args_1461; /*list<api/cliarg>*/
  }
  else {
    kk_std_core_types__optional_drop(app__args, _ctx);
    {
      struct kk_api_Clispec* _con_x3287 = kk_api__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_4 = _con_x3287->app__args;
      kk_std_core_types__list_dup(_x_4, _ctx);
      _x_x3286 = _x_4; /*list<api/cliarg>*/
    }
  }
  kk_std_core_types__list _x_x3288;
  if (kk_std_core_types__is_Optional(app__commands, _ctx)) {
    kk_box_t _box_x35 = app__commands._cons._Optional.value;
    kk_std_core_types__list _uniq_app__commands_1469 = kk_std_core_types__list_unbox(_box_x35, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__commands_1469, _ctx);
    kk_std_core_types__optional_drop(app__commands, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(7)), _ctx);
    _x_x3288 = _uniq_app__commands_1469; /*list<(string, api/clispec)>*/
  }
  else {
    kk_std_core_types__optional_drop(app__commands, _ctx);
    {
      struct kk_api_Clispec* _con_x3289 = kk_api__as_Clispec(_this, _ctx);
      kk_string_t _pat_0_6 = _con_x3289->app__name;
      kk_string_t _pat_1_7 = _con_x3289->app__version;
      kk_string_t _pat_2_6 = _con_x3289->app__about;
      kk_std_core_types__list _pat_3_6 = _con_x3289->app__flags;
      kk_std_core_types__list _pat_4_6 = _con_x3289->app__options;
      kk_std_core_types__list _pat_5_6 = _con_x3289->app__args;
      kk_std_core_types__list _x_5 = _con_x3289->app__commands;
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
      _x_x3288 = _x_5; /*list<(string, api/clispec)>*/
    }
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x3276, _x_x3278, _x_x3280, _x_x3282, _x_x3284, _x_x3286, _x_x3288, _ctx);
}

kk_api__cliresult kk_api_cliresult_fs__copy(kk_api__cliresult _this, kk_std_core_types__optional cli__flags, kk_std_core_types__optional cli__options, kk_std_core_types__optional cli__positionals, kk_std_core_types__optional cli__command, kk_std_core_types__optional cli__sub, kk_context_t* _ctx) { /* (cliresult, cli_flags : ? (list<string>), cli_options : ? (list<(string, string)>), cli_positionals : ? (list<string>), cli_command : ? string, cli_sub : ? (maybe<cliresult>)) -> cliresult */ 
  kk_std_core_types__list _x_x3295;
  if (kk_std_core_types__is_Optional(cli__flags, _ctx)) {
    kk_box_t _box_x36 = cli__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__flags_1531 = kk_std_core_types__list_unbox(_box_x36, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__flags_1531, _ctx);
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    _x_x3295 = _uniq_cli__flags_1531; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    {
      struct kk_api_Cliresult* _con_x3296 = kk_api__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x = _con_x3296->cli__flags;
      kk_std_core_types__list_dup(_x, _ctx);
      _x_x3295 = _x; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3297;
  if (kk_std_core_types__is_Optional(cli__options, _ctx)) {
    kk_box_t _box_x37 = cli__options._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__options_1539 = kk_std_core_types__list_unbox(_box_x37, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__options_1539, _ctx);
    kk_std_core_types__optional_drop(cli__options, _ctx);
    _x_x3297 = _uniq_cli__options_1539; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__options, _ctx);
    {
      struct kk_api_Cliresult* _con_x3298 = kk_api__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3298->cli__options;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3297 = _x_0; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3299;
  if (kk_std_core_types__is_Optional(cli__positionals, _ctx)) {
    kk_box_t _box_x38 = cli__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__positionals_1547 = kk_std_core_types__list_unbox(_box_x38, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__positionals_1547, _ctx);
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    _x_x3299 = _uniq_cli__positionals_1547; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    {
      struct kk_api_Cliresult* _con_x3300 = kk_api__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3300->cli__positionals;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3299 = _x_1; /*list<string>*/
    }
  }
  kk_string_t _x_x3301;
  if (kk_std_core_types__is_Optional(cli__command, _ctx)) {
    kk_box_t _box_x39 = cli__command._cons._Optional.value;
    kk_string_t _uniq_cli__command_1555 = kk_string_unbox(_box_x39);
    kk_string_dup(_uniq_cli__command_1555, _ctx);
    kk_std_core_types__optional_drop(cli__command, _ctx);
    _x_x3301 = _uniq_cli__command_1555; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(cli__command, _ctx);
    {
      struct kk_api_Cliresult* _con_x3302 = kk_api__as_Cliresult(_this, _ctx);
      kk_string_t _x_2 = _con_x3302->cli__command;
      kk_string_dup(_x_2, _ctx);
      _x_x3301 = _x_2; /*string*/
    }
  }
  kk_std_core_types__maybe _x_x3303;
  if (kk_std_core_types__is_Optional(cli__sub, _ctx)) {
    kk_box_t _box_x40 = cli__sub._cons._Optional.value;
    kk_std_core_types__maybe _uniq_cli__sub_1563 = kk_std_core_types__maybe_unbox(_box_x40, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_dup(_uniq_cli__sub_1563, _ctx);
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3303 = _uniq_cli__sub_1563; /*maybe<api/cliresult>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    {
      struct kk_api_Cliresult* _con_x3304 = kk_api__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _pat_0_4 = _con_x3304->cli__flags;
      kk_std_core_types__list _pat_1_5 = _con_x3304->cli__options;
      kk_std_core_types__list _pat_2_4 = _con_x3304->cli__positionals;
      kk_string_t _pat_3_4 = _con_x3304->cli__command;
      kk_std_core_types__maybe _x_3 = _con_x3304->cli__sub;
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
      _x_x3303 = _x_3; /*maybe<api/cliresult>*/
    }
  }
  return kk_api__new_Cliresult(kk_reuse_null, 0, _x_x3295, _x_x3297, _x_x3299, _x_x3301, _x_x3303, _ctx);
}

kk_string_t kk_api_cliarg_fs_show(kk_api__cliarg p, kk_context_t* _ctx) { /* (p : cliarg) -> string */ 
  kk_string_t _x_x3311;
  kk_define_string_literal(static, _s_x3312, 7, "CliArg(", _ctx)
  _x_x3311 = kk_string_dup(_s_x3312, _ctx); /*string*/
  kk_string_t _x_x3313;
  kk_string_t _x_x3314;
  kk_define_string_literal(static, _s_x3315, 10, "arg_name: ", _ctx)
  _x_x3314 = kk_string_dup(_s_x3315, _ctx); /*string*/
  kk_string_t _x_x3316;
  kk_string_t _x_x3317;
  {
    struct kk_api_Cliarg* _con_x3318 = kk_api__as_Cliarg(p, _ctx);
    kk_string_t _x = _con_x3318->arg__name;
    kk_string_dup(_x, _ctx);
    _x_x3317 = _x; /*string*/
  }
  kk_string_t _x_x3319;
  kk_string_t _x_x3320;
  kk_define_string_literal(static, _s_x3321, 2, ", ", _ctx)
  _x_x3320 = kk_string_dup(_s_x3321, _ctx); /*string*/
  kk_string_t _x_x3322;
  kk_string_t _x_x3323;
  kk_define_string_literal(static, _s_x3324, 10, "arg_help: ", _ctx)
  _x_x3323 = kk_string_dup(_s_x3324, _ctx); /*string*/
  kk_string_t _x_x3325;
  kk_string_t _x_x3326;
  {
    struct kk_api_Cliarg* _con_x3327 = kk_api__as_Cliarg(p, _ctx);
    kk_string_t _x_0 = _con_x3327->arg__help;
    kk_string_dup(_x_0, _ctx);
    _x_x3326 = _x_0; /*string*/
  }
  kk_string_t _x_x3328;
  kk_string_t _x_x3329;
  kk_define_string_literal(static, _s_x3330, 2, ", ", _ctx)
  _x_x3329 = kk_string_dup(_s_x3330, _ctx); /*string*/
  kk_string_t _x_x3331;
  kk_string_t _x_x3332;
  kk_define_string_literal(static, _s_x3333, 14, "arg_required: ", _ctx)
  _x_x3332 = kk_string_dup(_s_x3333, _ctx); /*string*/
  kk_string_t _x_x3334;
  kk_string_t _x_x3335;
  {
    struct kk_api_Cliarg* _con_x3336 = kk_api__as_Cliarg(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3336->arg__name;
    kk_string_t _pat_1_1 = _con_x3336->arg__help;
    bool _x_1 = _con_x3336->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_datatype_ptr_decref(p, _ctx);
    }
    if (_x_1) {
      kk_define_string_literal(static, _s_x3337, 4, "True", _ctx)
      _x_x3335 = kk_string_dup(_s_x3337, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(static, _s_x3338, 5, "False", _ctx)
      _x_x3335 = kk_string_dup(_s_x3338, _ctx); /*string*/
    }
  }
  kk_string_t _x_x3339;
  kk_define_string_literal(static, _s_x3340, 1, ")", _ctx)
  _x_x3339 = kk_string_dup(_s_x3340, _ctx); /*string*/
  _x_x3334 = kk_std_core_types__lp__plus__plus__rp_(_x_x3335, _x_x3339, _ctx); /*string*/
  _x_x3331 = kk_std_core_types__lp__plus__plus__rp_(_x_x3332, _x_x3334, _ctx); /*string*/
  _x_x3328 = kk_std_core_types__lp__plus__plus__rp_(_x_x3329, _x_x3331, _ctx); /*string*/
  _x_x3325 = kk_std_core_types__lp__plus__plus__rp_(_x_x3326, _x_x3328, _ctx); /*string*/
  _x_x3322 = kk_std_core_types__lp__plus__plus__rp_(_x_x3323, _x_x3325, _ctx); /*string*/
  _x_x3319 = kk_std_core_types__lp__plus__plus__rp_(_x_x3320, _x_x3322, _ctx); /*string*/
  _x_x3316 = kk_std_core_types__lp__plus__plus__rp_(_x_x3317, _x_x3319, _ctx); /*string*/
  _x_x3313 = kk_std_core_types__lp__plus__plus__rp_(_x_x3314, _x_x3316, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3311, _x_x3313, _ctx);
}


// lift anonymous function
struct kk_api_cliresult_fs_show_fun3346__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_cliresult_fs_show_fun3346(kk_function_t _fself, kk_string_t _x1_x3345, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3346(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_cliresult_fs_show_fun3346, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_cliresult_fs_show_fun3346(kk_function_t _fself, kk_string_t _x1_x3345, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3345, _ctx);
}


// lift anonymous function
struct kk_api_cliresult_fs_show_fun3351__t {
  struct kk_function_s _base;
  kk_function_t _b_x42_59;
};
static kk_string_t kk_api_cliresult_fs_show_fun3351(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3351(kk_function_t _b_x42_59, kk_context_t* _ctx) {
  struct kk_api_cliresult_fs_show_fun3351__t* _self = kk_function_alloc_as(struct kk_api_cliresult_fs_show_fun3351__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_cliresult_fs_show_fun3351, kk_context());
  _self->_b_x42_59 = _b_x42_59;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_cliresult_fs_show_fun3351(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx) {
  struct kk_api_cliresult_fs_show_fun3351__t* _self = kk_function_as(struct kk_api_cliresult_fs_show_fun3351__t*, _fself, _ctx);
  kk_function_t _b_x42_59 = _self->_b_x42_59; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x42_59, _ctx);}, {}, _ctx)
  kk_string_t _x_x3352 = kk_string_unbox(_b_x43); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x42_59, (_b_x42_59, _x_x3352, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_cliresult_fs_show_fun3358__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_cliresult_fs_show_fun3358(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3358(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_cliresult_fs_show_fun3358, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_cliresult_fs_show_fun3359__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_cliresult_fs_show_fun3359(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3359(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_cliresult_fs_show_fun3359, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_cliresult_fs_show_fun3359(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3360 = kk_string_unbox(_b_x47); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3360, _ctx);
}


// lift anonymous function
struct kk_api_cliresult_fs_show_fun3361__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_cliresult_fs_show_fun3361(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3361(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_cliresult_fs_show_fun3361, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_cliresult_fs_show_fun3361(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3362 = kk_string_unbox(_b_x48); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3362, _ctx);
}
static kk_string_t kk_api_cliresult_fs_show_fun3358(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_api_cliresult_fs_new_show_fun3359(_ctx), kk_api_cliresult_fs_new_show_fun3361(_ctx), _ctx);
}


// lift anonymous function
struct kk_api_cliresult_fs_show_fun3367__t {
  struct kk_function_s _base;
  kk_function_t _b_x50_61;
};
static kk_string_t kk_api_cliresult_fs_show_fun3367(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3367(kk_function_t _b_x50_61, kk_context_t* _ctx) {
  struct kk_api_cliresult_fs_show_fun3367__t* _self = kk_function_alloc_as(struct kk_api_cliresult_fs_show_fun3367__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_cliresult_fs_show_fun3367, kk_context());
  _self->_b_x50_61 = _b_x50_61;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_cliresult_fs_show_fun3367(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  struct kk_api_cliresult_fs_show_fun3367__t* _self = kk_function_as(struct kk_api_cliresult_fs_show_fun3367__t*, _fself, _ctx);
  kk_function_t _b_x50_61 = _self->_b_x50_61; /* ((string, string)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x50_61, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3368 = kk_std_core_types__tuple2_unbox(_b_x51, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x50_61, (_b_x50_61, _x_x3368, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_cliresult_fs_show_fun3375__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_cliresult_fs_show_fun3375(kk_function_t _fself, kk_string_t _x1_x3374, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3375(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_cliresult_fs_show_fun3375, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_cliresult_fs_show_fun3375(kk_function_t _fself, kk_string_t _x1_x3374, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3374, _ctx);
}


// lift anonymous function
struct kk_api_cliresult_fs_show_fun3380__t {
  struct kk_function_s _base;
  kk_function_t _b_x53_66;
};
static kk_string_t kk_api_cliresult_fs_show_fun3380(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3380(kk_function_t _b_x53_66, kk_context_t* _ctx) {
  struct kk_api_cliresult_fs_show_fun3380__t* _self = kk_function_alloc_as(struct kk_api_cliresult_fs_show_fun3380__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_cliresult_fs_show_fun3380, kk_context());
  _self->_b_x53_66 = _b_x53_66;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_cliresult_fs_show_fun3380(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_api_cliresult_fs_show_fun3380__t* _self = kk_function_as(struct kk_api_cliresult_fs_show_fun3380__t*, _fself, _ctx);
  kk_function_t _b_x53_66 = _self->_b_x53_66; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x53_66, _ctx);}, {}, _ctx)
  kk_string_t _x_x3381 = kk_string_unbox(_b_x54); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x53_66, (_b_x53_66, _x_x3381, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_cliresult_fs_show_fun3397__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_cliresult_fs_show_fun3397(kk_function_t _fself, kk_api__cliresult _x1_x3396, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3397(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_cliresult_fs_show_fun3397, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_cliresult_fs_show_fun3397(kk_function_t _fself, kk_api__cliresult _x1_x3396, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_api_cliresult_fs_show(_x1_x3396, _ctx);
}


// lift anonymous function
struct kk_api_cliresult_fs_show_fun3402__t {
  struct kk_function_s _base;
  kk_function_t _b_x56_68;
};
static kk_string_t kk_api_cliresult_fs_show_fun3402(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_api_cliresult_fs_new_show_fun3402(kk_function_t _b_x56_68, kk_context_t* _ctx) {
  struct kk_api_cliresult_fs_show_fun3402__t* _self = kk_function_alloc_as(struct kk_api_cliresult_fs_show_fun3402__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_cliresult_fs_show_fun3402, kk_context());
  _self->_b_x56_68 = _b_x56_68;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_cliresult_fs_show_fun3402(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_api_cliresult_fs_show_fun3402__t* _self = kk_function_as(struct kk_api_cliresult_fs_show_fun3402__t*, _fself, _ctx);
  kk_function_t _b_x56_68 = _self->_b_x56_68; /* (p : api/cliresult) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x56_68, _ctx);}, {}, _ctx)
  kk_api__cliresult _x_x3403 = kk_api__cliresult_unbox(_b_x57, KK_OWNED, _ctx); /*api/cliresult*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_api__cliresult, kk_context_t*), _b_x56_68, (_b_x56_68, _x_x3403, _ctx), _ctx);
}

kk_string_t kk_api_cliresult_fs_show(kk_api__cliresult p, kk_context_t* _ctx) { /* (p : cliresult) -> div string */ 
  kk_string_t _x_x3341;
  kk_define_string_literal(static, _s_x3342, 10, "CliResult(", _ctx)
  _x_x3341 = kk_string_dup(_s_x3342, _ctx); /*string*/
  kk_string_t _x_x3343;
  kk_std_core_types__list _b_x41_58;
  {
    struct kk_api_Cliresult* _con_x3344 = kk_api__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x = _con_x3344->cli__flags;
    kk_std_core_types__list_dup(_x, _ctx);
    _b_x41_58 = _x; /*list<string>*/
  }
  kk_function_t _b_x42_59 = kk_api_cliresult_fs_new_show_fun3346(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3347;
  kk_define_string_literal(static, _s_x3348, 11, "cli_flags: ", _ctx)
  _x_x3347 = kk_string_dup(_s_x3348, _ctx); /*string*/
  kk_string_t _x_x3349;
  kk_string_t _x_x3350 = kk_std_core_list_show(_b_x41_58, kk_api_cliresult_fs_new_show_fun3351(_b_x42_59, _ctx), _ctx); /*string*/
  kk_string_t _x_x3353;
  kk_string_t _x_x3354;
  kk_define_string_literal(static, _s_x3355, 2, ", ", _ctx)
  _x_x3354 = kk_string_dup(_s_x3355, _ctx); /*string*/
  kk_string_t _x_x3356;
  kk_std_core_types__list _b_x49_60;
  {
    struct kk_api_Cliresult* _con_x3357 = kk_api__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3357->cli__options;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x49_60 = _x_0; /*list<(string, string)>*/
  }
  kk_function_t _b_x50_61 = kk_api_cliresult_fs_new_show_fun3358(_ctx); /*((string, string)) -> div string*/;
  kk_string_t _x_x3363;
  kk_define_string_literal(static, _s_x3364, 13, "cli_options: ", _ctx)
  _x_x3363 = kk_string_dup(_s_x3364, _ctx); /*string*/
  kk_string_t _x_x3365;
  kk_string_t _x_x3366 = kk_std_core_list_show(_b_x49_60, kk_api_cliresult_fs_new_show_fun3367(_b_x50_61, _ctx), _ctx); /*string*/
  kk_string_t _x_x3369;
  kk_string_t _x_x3370;
  kk_define_string_literal(static, _s_x3371, 2, ", ", _ctx)
  _x_x3370 = kk_string_dup(_s_x3371, _ctx); /*string*/
  kk_string_t _x_x3372;
  kk_std_core_types__list _b_x52_65;
  {
    struct kk_api_Cliresult* _con_x3373 = kk_api__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3373->cli__positionals;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x52_65 = _x_1; /*list<string>*/
  }
  kk_function_t _b_x53_66 = kk_api_cliresult_fs_new_show_fun3375(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3376;
  kk_define_string_literal(static, _s_x3377, 17, "cli_positionals: ", _ctx)
  _x_x3376 = kk_string_dup(_s_x3377, _ctx); /*string*/
  kk_string_t _x_x3378;
  kk_string_t _x_x3379 = kk_std_core_list_show(_b_x52_65, kk_api_cliresult_fs_new_show_fun3380(_b_x53_66, _ctx), _ctx); /*string*/
  kk_string_t _x_x3382;
  kk_string_t _x_x3383;
  kk_define_string_literal(static, _s_x3384, 2, ", ", _ctx)
  _x_x3383 = kk_string_dup(_s_x3384, _ctx); /*string*/
  kk_string_t _x_x3385;
  kk_string_t _x_x3386;
  kk_define_string_literal(static, _s_x3387, 13, "cli_command: ", _ctx)
  _x_x3386 = kk_string_dup(_s_x3387, _ctx); /*string*/
  kk_string_t _x_x3388;
  kk_string_t _x_x3389;
  {
    struct kk_api_Cliresult* _con_x3390 = kk_api__as_Cliresult(p, _ctx);
    kk_string_t _x_2 = _con_x3390->cli__command;
    kk_string_dup(_x_2, _ctx);
    _x_x3389 = _x_2; /*string*/
  }
  kk_string_t _x_x3391;
  kk_string_t _x_x3392;
  kk_define_string_literal(static, _s_x3393, 2, ", ", _ctx)
  _x_x3392 = kk_string_dup(_s_x3393, _ctx); /*string*/
  kk_string_t _x_x3394;
  kk_std_core_types__maybe _b_x55_67;
  {
    struct kk_api_Cliresult* _con_x3395 = kk_api__as_Cliresult(p, _ctx);
    kk_std_core_types__list _pat_0_3 = _con_x3395->cli__flags;
    kk_std_core_types__list _pat_1_3 = _con_x3395->cli__options;
    kk_std_core_types__list _pat_2_3 = _con_x3395->cli__positionals;
    kk_string_t _pat_3_3 = _con_x3395->cli__command;
    kk_std_core_types__maybe _x_3 = _con_x3395->cli__sub;
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
    _b_x55_67 = _x_3; /*maybe<api/cliresult>*/
  }
  kk_function_t _b_x56_68 = kk_api_cliresult_fs_new_show_fun3397(_ctx); /*(p : api/cliresult) -> div string*/;
  kk_string_t _x_x3398;
  kk_define_string_literal(static, _s_x3399, 9, "cli_sub: ", _ctx)
  _x_x3398 = kk_string_dup(_s_x3399, _ctx); /*string*/
  kk_string_t _x_x3400;
  kk_string_t _x_x3401 = kk_std_core_maybe_show(_b_x55_67, kk_api_cliresult_fs_new_show_fun3402(_b_x56_68, _ctx), _ctx); /*string*/
  kk_string_t _x_x3404;
  kk_define_string_literal(static, _s_x3405, 1, ")", _ctx)
  _x_x3404 = kk_string_dup(_s_x3405, _ctx); /*string*/
  _x_x3400 = kk_std_core_types__lp__plus__plus__rp_(_x_x3401, _x_x3404, _ctx); /*string*/
  _x_x3394 = kk_std_core_types__lp__plus__plus__rp_(_x_x3398, _x_x3400, _ctx); /*string*/
  _x_x3391 = kk_std_core_types__lp__plus__plus__rp_(_x_x3392, _x_x3394, _ctx); /*string*/
  _x_x3388 = kk_std_core_types__lp__plus__plus__rp_(_x_x3389, _x_x3391, _ctx); /*string*/
  _x_x3385 = kk_std_core_types__lp__plus__plus__rp_(_x_x3386, _x_x3388, _ctx); /*string*/
  _x_x3382 = kk_std_core_types__lp__plus__plus__rp_(_x_x3383, _x_x3385, _ctx); /*string*/
  _x_x3378 = kk_std_core_types__lp__plus__plus__rp_(_x_x3379, _x_x3382, _ctx); /*string*/
  _x_x3372 = kk_std_core_types__lp__plus__plus__rp_(_x_x3376, _x_x3378, _ctx); /*string*/
  _x_x3369 = kk_std_core_types__lp__plus__plus__rp_(_x_x3370, _x_x3372, _ctx); /*string*/
  _x_x3365 = kk_std_core_types__lp__plus__plus__rp_(_x_x3366, _x_x3369, _ctx); /*string*/
  _x_x3356 = kk_std_core_types__lp__plus__plus__rp_(_x_x3363, _x_x3365, _ctx); /*string*/
  _x_x3353 = kk_std_core_types__lp__plus__plus__rp_(_x_x3354, _x_x3356, _ctx); /*string*/
  _x_x3349 = kk_std_core_types__lp__plus__plus__rp_(_x_x3350, _x_x3353, _ctx); /*string*/
  _x_x3343 = kk_std_core_types__lp__plus__plus__rp_(_x_x3347, _x_x3349, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3341, _x_x3343, _ctx);
}

kk_string_t kk_api_clioutcome_fs_show(kk_api__clioutcome v, kk_context_t* _ctx) { /* (v : clioutcome) -> div string */ 
  if (kk_api__is_Help(v, _ctx)) {
    kk_define_string_literal(static, _s_x3406, 4, "Help", _ctx)
    return kk_string_dup(_s_x3406, _ctx);
  }
  if (kk_api__is_Version(v, _ctx)) {
    kk_define_string_literal(static, _s_x3407, 7, "Version", _ctx)
    return kk_string_dup(_s_x3407, _ctx);
  }
  if (kk_api__is_CliError(v, _ctx)) {
    struct kk_api_CliError* _con_x3408 = kk_api__as_CliError(v, _ctx);
    kk_string_t cli__error__msg = _con_x3408->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(cli__error__msg, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3409;
    kk_define_string_literal(static, _s_x3410, 9, "CliError(", _ctx)
    _x_x3409 = kk_string_dup(_s_x3410, _ctx); /*string*/
    kk_string_t _x_x3411;
    kk_string_t _x_x3412;
    kk_define_string_literal(static, _s_x3413, 1, ")", _ctx)
    _x_x3412 = kk_string_dup(_s_x3413, _ctx); /*string*/
    _x_x3411 = kk_std_core_types__lp__plus__plus__rp_(cli__error__msg, _x_x3412, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3409, _x_x3411, _ctx);
  }
  {
    struct kk_api_Parsed* _con_x3414 = kk_api__as_Parsed(v, _ctx);
    kk_api__cliresult cli__result = _con_x3414->cli__result;
    struct kk_api_Cliresult* _con_x3415 = kk_api__as_Cliresult(cli__result, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_api__cliresult_dup(cli__result, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3416;
    kk_define_string_literal(static, _s_x3417, 7, "Parsed(", _ctx)
    _x_x3416 = kk_string_dup(_s_x3417, _ctx); /*string*/
    kk_string_t _x_x3418;
    kk_string_t _x_x3419 = kk_api_cliresult_fs_show(cli__result, _ctx); /*string*/
    kk_string_t _x_x3420;
    kk_define_string_literal(static, _s_x3421, 1, ")", _ctx)
    _x_x3420 = kk_string_dup(_s_x3421, _ctx); /*string*/
    _x_x3418 = kk_std_core_types__lp__plus__plus__rp_(_x_x3419, _x_x3420, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3416, _x_x3418, _ctx);
  }
}


// lift anonymous function
struct kk_api_clispec_fs_show_fun3454__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_clispec_fs_show_fun3454(kk_function_t _fself, kk_api__cliflag _x1_x3453, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3454(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_clispec_fs_show_fun3454, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_clispec_fs_show_fun3454(kk_function_t _fself, kk_api__cliflag _x1_x3453, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_api_cliflag_fs_show(_x1_x3453, _ctx);
}


// lift anonymous function
struct kk_api_clispec_fs_show_fun3459__t {
  struct kk_function_s _base;
  kk_function_t _b_x70_87;
};
static kk_string_t kk_api_clispec_fs_show_fun3459(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3459(kk_function_t _b_x70_87, kk_context_t* _ctx) {
  struct kk_api_clispec_fs_show_fun3459__t* _self = kk_function_alloc_as(struct kk_api_clispec_fs_show_fun3459__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_clispec_fs_show_fun3459, kk_context());
  _self->_b_x70_87 = _b_x70_87;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_clispec_fs_show_fun3459(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx) {
  struct kk_api_clispec_fs_show_fun3459__t* _self = kk_function_as(struct kk_api_clispec_fs_show_fun3459__t*, _fself, _ctx);
  kk_function_t _b_x70_87 = _self->_b_x70_87; /* (p : api/cliflag) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x70_87, _ctx);}, {}, _ctx)
  kk_api__cliflag _x_x3460 = kk_api__cliflag_unbox(_b_x71, KK_OWNED, _ctx); /*api/cliflag*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_api__cliflag, kk_context_t*), _b_x70_87, (_b_x70_87, _x_x3460, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_clispec_fs_show_fun3467__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_clispec_fs_show_fun3467(kk_function_t _fself, kk_api__clioption _x1_x3466, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3467(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_clispec_fs_show_fun3467, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_clispec_fs_show_fun3467(kk_function_t _fself, kk_api__clioption _x1_x3466, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_api_clioption_fs_show(_x1_x3466, _ctx);
}


// lift anonymous function
struct kk_api_clispec_fs_show_fun3472__t {
  struct kk_function_s _base;
  kk_function_t _b_x73_89;
};
static kk_string_t kk_api_clispec_fs_show_fun3472(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3472(kk_function_t _b_x73_89, kk_context_t* _ctx) {
  struct kk_api_clispec_fs_show_fun3472__t* _self = kk_function_alloc_as(struct kk_api_clispec_fs_show_fun3472__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_clispec_fs_show_fun3472, kk_context());
  _self->_b_x73_89 = _b_x73_89;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_clispec_fs_show_fun3472(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx) {
  struct kk_api_clispec_fs_show_fun3472__t* _self = kk_function_as(struct kk_api_clispec_fs_show_fun3472__t*, _fself, _ctx);
  kk_function_t _b_x73_89 = _self->_b_x73_89; /* (p : api/clioption) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x73_89, _ctx);}, {}, _ctx)
  kk_api__clioption _x_x3473 = kk_api__clioption_unbox(_b_x74, KK_OWNED, _ctx); /*api/clioption*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_api__clioption, kk_context_t*), _b_x73_89, (_b_x73_89, _x_x3473, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_clispec_fs_show_fun3480__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_clispec_fs_show_fun3480(kk_function_t _fself, kk_api__cliarg _x1_x3479, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3480(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_clispec_fs_show_fun3480, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_clispec_fs_show_fun3480(kk_function_t _fself, kk_api__cliarg _x1_x3479, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_api_cliarg_fs_show(_x1_x3479, _ctx);
}


// lift anonymous function
struct kk_api_clispec_fs_show_fun3485__t {
  struct kk_function_s _base;
  kk_function_t _b_x76_91;
};
static kk_string_t kk_api_clispec_fs_show_fun3485(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3485(kk_function_t _b_x76_91, kk_context_t* _ctx) {
  struct kk_api_clispec_fs_show_fun3485__t* _self = kk_function_alloc_as(struct kk_api_clispec_fs_show_fun3485__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_clispec_fs_show_fun3485, kk_context());
  _self->_b_x76_91 = _b_x76_91;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_clispec_fs_show_fun3485(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx) {
  struct kk_api_clispec_fs_show_fun3485__t* _self = kk_function_as(struct kk_api_clispec_fs_show_fun3485__t*, _fself, _ctx);
  kk_function_t _b_x76_91 = _self->_b_x76_91; /* (p : api/cliarg) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x76_91, _ctx);}, {}, _ctx)
  kk_api__cliarg _x_x3486 = kk_api__cliarg_unbox(_b_x77, KK_OWNED, _ctx); /*api/cliarg*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_api__cliarg, kk_context_t*), _b_x76_91, (_b_x76_91, _x_x3486, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_clispec_fs_show_fun3492__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_clispec_fs_show_fun3492(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3492(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_clispec_fs_show_fun3492, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_clispec_fs_show_fun3493__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_clispec_fs_show_fun3493(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3493(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_clispec_fs_show_fun3493, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_clispec_fs_show_fun3493(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3494 = kk_string_unbox(_b_x81); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3494, _ctx);
}


// lift anonymous function
struct kk_api_clispec_fs_show_fun3495__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_clispec_fs_show_fun3495(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3495(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_clispec_fs_show_fun3495, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_clispec_fs_show_fun3495(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_api__clispec _x_x3496 = kk_api__clispec_unbox(_b_x82, KK_OWNED, _ctx); /*api/clispec*/
  return kk_api_clispec_fs_show(_x_x3496, _ctx);
}
static kk_string_t kk_api_clispec_fs_show_fun3492(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_api_clispec_fs_new_show_fun3493(_ctx), kk_api_clispec_fs_new_show_fun3495(_ctx), _ctx);
}


// lift anonymous function
struct kk_api_clispec_fs_show_fun3501__t {
  struct kk_function_s _base;
  kk_function_t _b_x84_93;
};
static kk_string_t kk_api_clispec_fs_show_fun3501(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx);
static kk_function_t kk_api_clispec_fs_new_show_fun3501(kk_function_t _b_x84_93, kk_context_t* _ctx) {
  struct kk_api_clispec_fs_show_fun3501__t* _self = kk_function_alloc_as(struct kk_api_clispec_fs_show_fun3501__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_clispec_fs_show_fun3501, kk_context());
  _self->_b_x84_93 = _b_x84_93;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_clispec_fs_show_fun3501(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx) {
  struct kk_api_clispec_fs_show_fun3501__t* _self = kk_function_as(struct kk_api_clispec_fs_show_fun3501__t*, _fself, _ctx);
  kk_function_t _b_x84_93 = _self->_b_x84_93; /* ((string, api/clispec)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x84_93, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3502 = kk_std_core_types__tuple2_unbox(_b_x85, KK_OWNED, _ctx); /*(string, api/clispec)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x84_93, (_b_x84_93, _x_x3502, _ctx), _ctx);
}

kk_string_t kk_api_clispec_fs_show(kk_api__clispec p, kk_context_t* _ctx) { /* (p : clispec) -> div string */ 
  kk_string_t _x_x3422;
  kk_define_string_literal(static, _s_x3423, 8, "CliSpec(", _ctx)
  _x_x3422 = kk_string_dup(_s_x3423, _ctx); /*string*/
  kk_string_t _x_x3424;
  kk_string_t _x_x3425;
  kk_define_string_literal(static, _s_x3426, 10, "app_name: ", _ctx)
  _x_x3425 = kk_string_dup(_s_x3426, _ctx); /*string*/
  kk_string_t _x_x3427;
  kk_string_t _x_x3428;
  {
    struct kk_api_Clispec* _con_x3429 = kk_api__as_Clispec(p, _ctx);
    kk_string_t _x = _con_x3429->app__name;
    kk_string_dup(_x, _ctx);
    _x_x3428 = _x; /*string*/
  }
  kk_string_t _x_x3430;
  kk_string_t _x_x3431;
  kk_define_string_literal(static, _s_x3432, 2, ", ", _ctx)
  _x_x3431 = kk_string_dup(_s_x3432, _ctx); /*string*/
  kk_string_t _x_x3433;
  kk_string_t _x_x3434;
  kk_define_string_literal(static, _s_x3435, 13, "app_version: ", _ctx)
  _x_x3434 = kk_string_dup(_s_x3435, _ctx); /*string*/
  kk_string_t _x_x3436;
  kk_string_t _x_x3437;
  {
    struct kk_api_Clispec* _con_x3438 = kk_api__as_Clispec(p, _ctx);
    kk_string_t _x_0 = _con_x3438->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x3437 = _x_0; /*string*/
  }
  kk_string_t _x_x3439;
  kk_string_t _x_x3440;
  kk_define_string_literal(static, _s_x3441, 2, ", ", _ctx)
  _x_x3440 = kk_string_dup(_s_x3441, _ctx); /*string*/
  kk_string_t _x_x3442;
  kk_string_t _x_x3443;
  kk_define_string_literal(static, _s_x3444, 11, "app_about: ", _ctx)
  _x_x3443 = kk_string_dup(_s_x3444, _ctx); /*string*/
  kk_string_t _x_x3445;
  kk_string_t _x_x3446;
  {
    struct kk_api_Clispec* _con_x3447 = kk_api__as_Clispec(p, _ctx);
    kk_string_t _x_1 = _con_x3447->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x3446 = _x_1; /*string*/
  }
  kk_string_t _x_x3448;
  kk_string_t _x_x3449;
  kk_define_string_literal(static, _s_x3450, 2, ", ", _ctx)
  _x_x3449 = kk_string_dup(_s_x3450, _ctx); /*string*/
  kk_string_t _x_x3451;
  kk_std_core_types__list _b_x69_86;
  {
    struct kk_api_Clispec* _con_x3452 = kk_api__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3452->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x69_86 = _x_2; /*list<api/cliflag>*/
  }
  kk_function_t _b_x70_87 = kk_api_clispec_fs_new_show_fun3454(_ctx); /*(p : api/cliflag) -> string*/;
  kk_string_t _x_x3455;
  kk_define_string_literal(static, _s_x3456, 11, "app_flags: ", _ctx)
  _x_x3455 = kk_string_dup(_s_x3456, _ctx); /*string*/
  kk_string_t _x_x3457;
  kk_string_t _x_x3458 = kk_std_core_list_show(_b_x69_86, kk_api_clispec_fs_new_show_fun3459(_b_x70_87, _ctx), _ctx); /*string*/
  kk_string_t _x_x3461;
  kk_string_t _x_x3462;
  kk_define_string_literal(static, _s_x3463, 2, ", ", _ctx)
  _x_x3462 = kk_string_dup(_s_x3463, _ctx); /*string*/
  kk_string_t _x_x3464;
  kk_std_core_types__list _b_x72_88;
  {
    struct kk_api_Clispec* _con_x3465 = kk_api__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_3 = _con_x3465->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _b_x72_88 = _x_3; /*list<api/clioption>*/
  }
  kk_function_t _b_x73_89 = kk_api_clispec_fs_new_show_fun3467(_ctx); /*(p : api/clioption) -> string*/;
  kk_string_t _x_x3468;
  kk_define_string_literal(static, _s_x3469, 13, "app_options: ", _ctx)
  _x_x3468 = kk_string_dup(_s_x3469, _ctx); /*string*/
  kk_string_t _x_x3470;
  kk_string_t _x_x3471 = kk_std_core_list_show(_b_x72_88, kk_api_clispec_fs_new_show_fun3472(_b_x73_89, _ctx), _ctx); /*string*/
  kk_string_t _x_x3474;
  kk_string_t _x_x3475;
  kk_define_string_literal(static, _s_x3476, 2, ", ", _ctx)
  _x_x3475 = kk_string_dup(_s_x3476, _ctx); /*string*/
  kk_string_t _x_x3477;
  kk_std_core_types__list _b_x75_90;
  {
    struct kk_api_Clispec* _con_x3478 = kk_api__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_4 = _con_x3478->app__args;
    kk_std_core_types__list_dup(_x_4, _ctx);
    _b_x75_90 = _x_4; /*list<api/cliarg>*/
  }
  kk_function_t _b_x76_91 = kk_api_clispec_fs_new_show_fun3480(_ctx); /*(p : api/cliarg) -> string*/;
  kk_string_t _x_x3481;
  kk_define_string_literal(static, _s_x3482, 10, "app_args: ", _ctx)
  _x_x3481 = kk_string_dup(_s_x3482, _ctx); /*string*/
  kk_string_t _x_x3483;
  kk_string_t _x_x3484 = kk_std_core_list_show(_b_x75_90, kk_api_clispec_fs_new_show_fun3485(_b_x76_91, _ctx), _ctx); /*string*/
  kk_string_t _x_x3487;
  kk_string_t _x_x3488;
  kk_define_string_literal(static, _s_x3489, 2, ", ", _ctx)
  _x_x3488 = kk_string_dup(_s_x3489, _ctx); /*string*/
  kk_string_t _x_x3490;
  kk_std_core_types__list _b_x83_92;
  {
    struct kk_api_Clispec* _con_x3491 = kk_api__as_Clispec(p, _ctx);
    kk_string_t _pat_0_5 = _con_x3491->app__name;
    kk_string_t _pat_1_5 = _con_x3491->app__version;
    kk_string_t _pat_2_5 = _con_x3491->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x3491->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x3491->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x3491->app__args;
    kk_std_core_types__list _x_5 = _con_x3491->app__commands;
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
    _b_x83_92 = _x_5; /*list<(string, api/clispec)>*/
  }
  kk_function_t _b_x84_93 = kk_api_clispec_fs_new_show_fun3492(_ctx); /*((string, api/clispec)) -> div string*/;
  kk_string_t _x_x3497;
  kk_define_string_literal(static, _s_x3498, 14, "app_commands: ", _ctx)
  _x_x3497 = kk_string_dup(_s_x3498, _ctx); /*string*/
  kk_string_t _x_x3499;
  kk_string_t _x_x3500 = kk_std_core_list_show(_b_x83_92, kk_api_clispec_fs_new_show_fun3501(_b_x84_93, _ctx), _ctx); /*string*/
  kk_string_t _x_x3503;
  kk_define_string_literal(static, _s_x3504, 1, ")", _ctx)
  _x_x3503 = kk_string_dup(_s_x3504, _ctx); /*string*/
  _x_x3499 = kk_std_core_types__lp__plus__plus__rp_(_x_x3500, _x_x3503, _ctx); /*string*/
  _x_x3490 = kk_std_core_types__lp__plus__plus__rp_(_x_x3497, _x_x3499, _ctx); /*string*/
  _x_x3487 = kk_std_core_types__lp__plus__plus__rp_(_x_x3488, _x_x3490, _ctx); /*string*/
  _x_x3483 = kk_std_core_types__lp__plus__plus__rp_(_x_x3484, _x_x3487, _ctx); /*string*/
  _x_x3477 = kk_std_core_types__lp__plus__plus__rp_(_x_x3481, _x_x3483, _ctx); /*string*/
  _x_x3474 = kk_std_core_types__lp__plus__plus__rp_(_x_x3475, _x_x3477, _ctx); /*string*/
  _x_x3470 = kk_std_core_types__lp__plus__plus__rp_(_x_x3471, _x_x3474, _ctx); /*string*/
  _x_x3464 = kk_std_core_types__lp__plus__plus__rp_(_x_x3468, _x_x3470, _ctx); /*string*/
  _x_x3461 = kk_std_core_types__lp__plus__plus__rp_(_x_x3462, _x_x3464, _ctx); /*string*/
  _x_x3457 = kk_std_core_types__lp__plus__plus__rp_(_x_x3458, _x_x3461, _ctx); /*string*/
  _x_x3451 = kk_std_core_types__lp__plus__plus__rp_(_x_x3455, _x_x3457, _ctx); /*string*/
  _x_x3448 = kk_std_core_types__lp__plus__plus__rp_(_x_x3449, _x_x3451, _ctx); /*string*/
  _x_x3445 = kk_std_core_types__lp__plus__plus__rp_(_x_x3446, _x_x3448, _ctx); /*string*/
  _x_x3442 = kk_std_core_types__lp__plus__plus__rp_(_x_x3443, _x_x3445, _ctx); /*string*/
  _x_x3439 = kk_std_core_types__lp__plus__plus__rp_(_x_x3440, _x_x3442, _ctx); /*string*/
  _x_x3436 = kk_std_core_types__lp__plus__plus__rp_(_x_x3437, _x_x3439, _ctx); /*string*/
  _x_x3433 = kk_std_core_types__lp__plus__plus__rp_(_x_x3434, _x_x3436, _ctx); /*string*/
  _x_x3430 = kk_std_core_types__lp__plus__plus__rp_(_x_x3431, _x_x3433, _ctx); /*string*/
  _x_x3427 = kk_std_core_types__lp__plus__plus__rp_(_x_x3428, _x_x3430, _ctx); /*string*/
  _x_x3424 = kk_std_core_types__lp__plus__plus__rp_(_x_x3425, _x_x3427, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3422, _x_x3424, _ctx);
}


// lift anonymous function
struct kk_api_parseraw_fs_show_fun3519__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_parseraw_fs_show_fun3519(kk_function_t _fself, kk_string_t _x1_x3518, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3519(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_parseraw_fs_show_fun3519, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_parseraw_fs_show_fun3519(kk_function_t _fself, kk_string_t _x1_x3518, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3518, _ctx);
}


// lift anonymous function
struct kk_api_parseraw_fs_show_fun3524__t {
  struct kk_function_s _base;
  kk_function_t _b_x98_115;
};
static kk_string_t kk_api_parseraw_fs_show_fun3524(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3524(kk_function_t _b_x98_115, kk_context_t* _ctx) {
  struct kk_api_parseraw_fs_show_fun3524__t* _self = kk_function_alloc_as(struct kk_api_parseraw_fs_show_fun3524__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_parseraw_fs_show_fun3524, kk_context());
  _self->_b_x98_115 = _b_x98_115;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_parseraw_fs_show_fun3524(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_api_parseraw_fs_show_fun3524__t* _self = kk_function_as(struct kk_api_parseraw_fs_show_fun3524__t*, _fself, _ctx);
  kk_function_t _b_x98_115 = _self->_b_x98_115; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x98_115, _ctx);}, {}, _ctx)
  kk_string_t _x_x3525 = kk_string_unbox(_b_x99); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x98_115, (_b_x98_115, _x_x3525, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_parseraw_fs_show_fun3531__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_parseraw_fs_show_fun3531(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3531(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_parseraw_fs_show_fun3531, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_parseraw_fs_show_fun3532__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_parseraw_fs_show_fun3532(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3532(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_parseraw_fs_show_fun3532, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_parseraw_fs_show_fun3532(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3533 = kk_string_unbox(_b_x103); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3533, _ctx);
}


// lift anonymous function
struct kk_api_parseraw_fs_show_fun3534__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_parseraw_fs_show_fun3534(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3534(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_parseraw_fs_show_fun3534, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_parseraw_fs_show_fun3534(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3535 = kk_string_unbox(_b_x104); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3535, _ctx);
}
static kk_string_t kk_api_parseraw_fs_show_fun3531(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_api_parseraw_fs_new_show_fun3532(_ctx), kk_api_parseraw_fs_new_show_fun3534(_ctx), _ctx);
}


// lift anonymous function
struct kk_api_parseraw_fs_show_fun3540__t {
  struct kk_function_s _base;
  kk_function_t _b_x106_117;
};
static kk_string_t kk_api_parseraw_fs_show_fun3540(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3540(kk_function_t _b_x106_117, kk_context_t* _ctx) {
  struct kk_api_parseraw_fs_show_fun3540__t* _self = kk_function_alloc_as(struct kk_api_parseraw_fs_show_fun3540__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_parseraw_fs_show_fun3540, kk_context());
  _self->_b_x106_117 = _b_x106_117;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_parseraw_fs_show_fun3540(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx) {
  struct kk_api_parseraw_fs_show_fun3540__t* _self = kk_function_as(struct kk_api_parseraw_fs_show_fun3540__t*, _fself, _ctx);
  kk_function_t _b_x106_117 = _self->_b_x106_117; /* ((string, string)) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x106_117, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3541 = kk_std_core_types__tuple2_unbox(_b_x107, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x106_117, (_b_x106_117, _x_x3541, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_parseraw_fs_show_fun3548__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_parseraw_fs_show_fun3548(kk_function_t _fself, kk_string_t _x1_x3547, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3548(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_parseraw_fs_show_fun3548, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_parseraw_fs_show_fun3548(kk_function_t _fself, kk_string_t _x1_x3547, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3547, _ctx);
}


// lift anonymous function
struct kk_api_parseraw_fs_show_fun3553__t {
  struct kk_function_s _base;
  kk_function_t _b_x109_122;
};
static kk_string_t kk_api_parseraw_fs_show_fun3553(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3553(kk_function_t _b_x109_122, kk_context_t* _ctx) {
  struct kk_api_parseraw_fs_show_fun3553__t* _self = kk_function_alloc_as(struct kk_api_parseraw_fs_show_fun3553__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_parseraw_fs_show_fun3553, kk_context());
  _self->_b_x109_122 = _b_x109_122;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_parseraw_fs_show_fun3553(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_api_parseraw_fs_show_fun3553__t* _self = kk_function_as(struct kk_api_parseraw_fs_show_fun3553__t*, _fself, _ctx);
  kk_function_t _b_x109_122 = _self->_b_x109_122; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x109_122, _ctx);}, {}, _ctx)
  kk_string_t _x_x3554 = kk_string_unbox(_b_x110); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x109_122, (_b_x109_122, _x_x3554, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_parseraw_fs_show_fun3570__t {
  struct kk_function_s _base;
};
static kk_string_t kk_api_parseraw_fs_show_fun3570(kk_function_t _fself, kk_string_t _x1_x3569, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3570(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_parseraw_fs_show_fun3570, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_api_parseraw_fs_show_fun3570(kk_function_t _fself, kk_string_t _x1_x3569, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3569, _ctx);
}


// lift anonymous function
struct kk_api_parseraw_fs_show_fun3575__t {
  struct kk_function_s _base;
  kk_function_t _b_x112_124;
};
static kk_string_t kk_api_parseraw_fs_show_fun3575(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx);
static kk_function_t kk_api_parseraw_fs_new_show_fun3575(kk_function_t _b_x112_124, kk_context_t* _ctx) {
  struct kk_api_parseraw_fs_show_fun3575__t* _self = kk_function_alloc_as(struct kk_api_parseraw_fs_show_fun3575__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_parseraw_fs_show_fun3575, kk_context());
  _self->_b_x112_124 = _b_x112_124;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_api_parseraw_fs_show_fun3575(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx) {
  struct kk_api_parseraw_fs_show_fun3575__t* _self = kk_function_as(struct kk_api_parseraw_fs_show_fun3575__t*, _fself, _ctx);
  kk_function_t _b_x112_124 = _self->_b_x112_124; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x112_124, _ctx);}, {}, _ctx)
  kk_string_t _x_x3576 = kk_string_unbox(_b_x113); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x112_124, (_b_x112_124, _x_x3576, _ctx), _ctx);
}

kk_string_t kk_api_parseraw_fs_show(kk_api__parseraw p, kk_context_t* _ctx) { /* (p : parseraw) -> string */ 
  kk_string_t _x_x3505;
  kk_define_string_literal(static, _s_x3506, 9, "ParseRaw(", _ctx)
  _x_x3505 = kk_string_dup(_s_x3506, _ctx); /*string*/
  kk_string_t _x_x3507;
  kk_string_t _x_x3508;
  kk_define_string_literal(static, _s_x3509, 11, "raw_error: ", _ctx)
  _x_x3508 = kk_string_dup(_s_x3509, _ctx); /*string*/
  kk_string_t _x_x3510;
  kk_string_t _x_x3511;
  {
    struct kk_api_Parseraw* _con_x3512 = kk_api__as_Parseraw(p, _ctx);
    kk_string_t _x = _con_x3512->raw__error;
    kk_string_dup(_x, _ctx);
    _x_x3511 = _x; /*string*/
  }
  kk_string_t _x_x3513;
  kk_string_t _x_x3514;
  kk_define_string_literal(static, _s_x3515, 2, ", ", _ctx)
  _x_x3514 = kk_string_dup(_s_x3515, _ctx); /*string*/
  kk_string_t _x_x3516;
  kk_std_core_types__list _b_x97_114;
  {
    struct kk_api_Parseraw* _con_x3517 = kk_api__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3517->raw__flags;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x97_114 = _x_0; /*list<string>*/
  }
  kk_function_t _b_x98_115 = kk_api_parseraw_fs_new_show_fun3519(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3520;
  kk_define_string_literal(static, _s_x3521, 11, "raw_flags: ", _ctx)
  _x_x3520 = kk_string_dup(_s_x3521, _ctx); /*string*/
  kk_string_t _x_x3522;
  kk_string_t _x_x3523 = kk_std_core_list_show(_b_x97_114, kk_api_parseraw_fs_new_show_fun3524(_b_x98_115, _ctx), _ctx); /*string*/
  kk_string_t _x_x3526;
  kk_string_t _x_x3527;
  kk_define_string_literal(static, _s_x3528, 2, ", ", _ctx)
  _x_x3527 = kk_string_dup(_s_x3528, _ctx); /*string*/
  kk_string_t _x_x3529;
  kk_std_core_types__list _b_x105_116;
  {
    struct kk_api_Parseraw* _con_x3530 = kk_api__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3530->raw__options;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x105_116 = _x_1; /*list<(string, string)>*/
  }
  kk_function_t _b_x106_117 = kk_api_parseraw_fs_new_show_fun3531(_ctx); /*((string, string)) -> string*/;
  kk_string_t _x_x3536;
  kk_define_string_literal(static, _s_x3537, 13, "raw_options: ", _ctx)
  _x_x3536 = kk_string_dup(_s_x3537, _ctx); /*string*/
  kk_string_t _x_x3538;
  kk_string_t _x_x3539 = kk_std_core_list_show(_b_x105_116, kk_api_parseraw_fs_new_show_fun3540(_b_x106_117, _ctx), _ctx); /*string*/
  kk_string_t _x_x3542;
  kk_string_t _x_x3543;
  kk_define_string_literal(static, _s_x3544, 2, ", ", _ctx)
  _x_x3543 = kk_string_dup(_s_x3544, _ctx); /*string*/
  kk_string_t _x_x3545;
  kk_std_core_types__list _b_x108_121;
  {
    struct kk_api_Parseraw* _con_x3546 = kk_api__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3546->raw__positionals;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x108_121 = _x_2; /*list<string>*/
  }
  kk_function_t _b_x109_122 = kk_api_parseraw_fs_new_show_fun3548(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3549;
  kk_define_string_literal(static, _s_x3550, 17, "raw_positionals: ", _ctx)
  _x_x3549 = kk_string_dup(_s_x3550, _ctx); /*string*/
  kk_string_t _x_x3551;
  kk_string_t _x_x3552 = kk_std_core_list_show(_b_x108_121, kk_api_parseraw_fs_new_show_fun3553(_b_x109_122, _ctx), _ctx); /*string*/
  kk_string_t _x_x3555;
  kk_string_t _x_x3556;
  kk_define_string_literal(static, _s_x3557, 2, ", ", _ctx)
  _x_x3556 = kk_string_dup(_s_x3557, _ctx); /*string*/
  kk_string_t _x_x3558;
  kk_string_t _x_x3559;
  kk_define_string_literal(static, _s_x3560, 12, "raw_subcmd: ", _ctx)
  _x_x3559 = kk_string_dup(_s_x3560, _ctx); /*string*/
  kk_string_t _x_x3561;
  kk_string_t _x_x3562;
  {
    struct kk_api_Parseraw* _con_x3563 = kk_api__as_Parseraw(p, _ctx);
    kk_string_t _x_3 = _con_x3563->raw__subcmd;
    kk_string_dup(_x_3, _ctx);
    _x_x3562 = _x_3; /*string*/
  }
  kk_string_t _x_x3564;
  kk_string_t _x_x3565;
  kk_define_string_literal(static, _s_x3566, 2, ", ", _ctx)
  _x_x3565 = kk_string_dup(_s_x3566, _ctx); /*string*/
  kk_string_t _x_x3567;
  kk_std_core_types__list _b_x111_123;
  {
    struct kk_api_Parseraw* _con_x3568 = kk_api__as_Parseraw(p, _ctx);
    kk_string_t _pat_0_4 = _con_x3568->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x3568->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x3568->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x3568->raw__positionals;
    kk_string_t _pat_4_4 = _con_x3568->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x3568->raw__sub__args;
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
  kk_function_t _b_x112_124 = kk_api_parseraw_fs_new_show_fun3570(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3571;
  kk_define_string_literal(static, _s_x3572, 14, "raw_sub_args: ", _ctx)
  _x_x3571 = kk_string_dup(_s_x3572, _ctx); /*string*/
  kk_string_t _x_x3573;
  kk_string_t _x_x3574 = kk_std_core_list_show(_b_x111_123, kk_api_parseraw_fs_new_show_fun3575(_b_x112_124, _ctx), _ctx); /*string*/
  kk_string_t _x_x3577;
  kk_define_string_literal(static, _s_x3578, 1, ")", _ctx)
  _x_x3577 = kk_string_dup(_s_x3578, _ctx); /*string*/
  _x_x3573 = kk_std_core_types__lp__plus__plus__rp_(_x_x3574, _x_x3577, _ctx); /*string*/
  _x_x3567 = kk_std_core_types__lp__plus__plus__rp_(_x_x3571, _x_x3573, _ctx); /*string*/
  _x_x3564 = kk_std_core_types__lp__plus__plus__rp_(_x_x3565, _x_x3567, _ctx); /*string*/
  _x_x3561 = kk_std_core_types__lp__plus__plus__rp_(_x_x3562, _x_x3564, _ctx); /*string*/
  _x_x3558 = kk_std_core_types__lp__plus__plus__rp_(_x_x3559, _x_x3561, _ctx); /*string*/
  _x_x3555 = kk_std_core_types__lp__plus__plus__rp_(_x_x3556, _x_x3558, _ctx); /*string*/
  _x_x3551 = kk_std_core_types__lp__plus__plus__rp_(_x_x3552, _x_x3555, _ctx); /*string*/
  _x_x3545 = kk_std_core_types__lp__plus__plus__rp_(_x_x3549, _x_x3551, _ctx); /*string*/
  _x_x3542 = kk_std_core_types__lp__plus__plus__rp_(_x_x3543, _x_x3545, _ctx); /*string*/
  _x_x3538 = kk_std_core_types__lp__plus__plus__rp_(_x_x3539, _x_x3542, _ctx); /*string*/
  _x_x3529 = kk_std_core_types__lp__plus__plus__rp_(_x_x3536, _x_x3538, _ctx); /*string*/
  _x_x3526 = kk_std_core_types__lp__plus__plus__rp_(_x_x3527, _x_x3529, _ctx); /*string*/
  _x_x3522 = kk_std_core_types__lp__plus__plus__rp_(_x_x3523, _x_x3526, _ctx); /*string*/
  _x_x3516 = kk_std_core_types__lp__plus__plus__rp_(_x_x3520, _x_x3522, _ctx); /*string*/
  _x_x3513 = kk_std_core_types__lp__plus__plus__rp_(_x_x3514, _x_x3516, _ctx); /*string*/
  _x_x3510 = kk_std_core_types__lp__plus__plus__rp_(_x_x3511, _x_x3513, _ctx); /*string*/
  _x_x3507 = kk_std_core_types__lp__plus__plus__rp_(_x_x3508, _x_x3510, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3505, _x_x3507, _ctx);
}

kk_api__parseraw kk_api_parseraw_fs__copy(kk_api__parseraw _this, kk_std_core_types__optional raw__error, kk_std_core_types__optional raw__flags, kk_std_core_types__optional raw__options, kk_std_core_types__optional raw__positionals, kk_std_core_types__optional raw__subcmd, kk_std_core_types__optional raw__sub__args, kk_context_t* _ctx) { /* (parseraw, raw_error : ? string, raw_flags : ? (list<string>), raw_options : ? (list<(string, string)>), raw_positionals : ? (list<string>), raw_subcmd : ? string, raw_sub_args : ? (list<string>)) -> parseraw */ 
  kk_string_t _x_x3579;
  if (kk_std_core_types__is_Optional(raw__error, _ctx)) {
    kk_box_t _box_x125 = raw__error._cons._Optional.value;
    kk_string_t _uniq_raw__error_3793 = kk_string_unbox(_box_x125);
    kk_string_dup(_uniq_raw__error_3793, _ctx);
    kk_std_core_types__optional_drop(raw__error, _ctx);
    _x_x3579 = _uniq_raw__error_3793; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__error, _ctx);
    {
      struct kk_api_Parseraw* _con_x3580 = kk_api__as_Parseraw(_this, _ctx);
      kk_string_t _x = _con_x3580->raw__error;
      kk_string_dup(_x, _ctx);
      _x_x3579 = _x; /*string*/
    }
  }
  kk_std_core_types__list _x_x3581;
  if (kk_std_core_types__is_Optional(raw__flags, _ctx)) {
    kk_box_t _box_x126 = raw__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__flags_3801 = kk_std_core_types__list_unbox(_box_x126, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__flags_3801, _ctx);
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    _x_x3581 = _uniq_raw__flags_3801; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    {
      struct kk_api_Parseraw* _con_x3582 = kk_api__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3582->raw__flags;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3581 = _x_0; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3583;
  if (kk_std_core_types__is_Optional(raw__options, _ctx)) {
    kk_box_t _box_x127 = raw__options._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__options_3809 = kk_std_core_types__list_unbox(_box_x127, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__options_3809, _ctx);
    kk_std_core_types__optional_drop(raw__options, _ctx);
    _x_x3583 = _uniq_raw__options_3809; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__options, _ctx);
    {
      struct kk_api_Parseraw* _con_x3584 = kk_api__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3584->raw__options;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3583 = _x_1; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3585;
  if (kk_std_core_types__is_Optional(raw__positionals, _ctx)) {
    kk_box_t _box_x128 = raw__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__positionals_3817 = kk_std_core_types__list_unbox(_box_x128, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__positionals_3817, _ctx);
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    _x_x3585 = _uniq_raw__positionals_3817; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    {
      struct kk_api_Parseraw* _con_x3586 = kk_api__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3586->raw__positionals;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3585 = _x_2; /*list<string>*/
    }
  }
  kk_string_t _x_x3587;
  if (kk_std_core_types__is_Optional(raw__subcmd, _ctx)) {
    kk_box_t _box_x129 = raw__subcmd._cons._Optional.value;
    kk_string_t _uniq_raw__subcmd_3825 = kk_string_unbox(_box_x129);
    kk_string_dup(_uniq_raw__subcmd_3825, _ctx);
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    _x_x3587 = _uniq_raw__subcmd_3825; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    {
      struct kk_api_Parseraw* _con_x3588 = kk_api__as_Parseraw(_this, _ctx);
      kk_string_t _x_3 = _con_x3588->raw__subcmd;
      kk_string_dup(_x_3, _ctx);
      _x_x3587 = _x_3; /*string*/
    }
  }
  kk_std_core_types__list _x_x3589;
  if (kk_std_core_types__is_Optional(raw__sub__args, _ctx)) {
    kk_box_t _box_x130 = raw__sub__args._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__sub__args_3833 = kk_std_core_types__list_unbox(_box_x130, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__sub__args_3833, _ctx);
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3589 = _uniq_raw__sub__args_3833; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    {
      struct kk_api_Parseraw* _con_x3590 = kk_api__as_Parseraw(_this, _ctx);
      kk_string_t _pat_0_5 = _con_x3590->raw__error;
      kk_std_core_types__list _pat_1_6 = _con_x3590->raw__flags;
      kk_std_core_types__list _pat_2_5 = _con_x3590->raw__options;
      kk_std_core_types__list _pat_3_5 = _con_x3590->raw__positionals;
      kk_string_t _pat_4_5 = _con_x3590->raw__subcmd;
      kk_std_core_types__list _x_4 = _con_x3590->raw__sub__args;
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
      _x_x3589 = _x_4; /*list<string>*/
    }
  }
  return kk_api__new_Parseraw(kk_reuse_null, 0, _x_x3579, _x_x3581, _x_x3583, _x_x3585, _x_x3587, _x_x3589, _ctx);
}

kk_integer_t kk_api_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10059;
  bool _match_x2980 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x2980) {
    kk_integer_drop(lo, _ctx);
    a_10059 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10059 = lo; /*int*/
  }
  bool _match_x2979 = kk_integer_lt_borrow(a_10059,hi,kk_context()); /*bool*/;
  if (_match_x2979) {
    kk_integer_drop(hi, _ctx);
    return a_10059;
  }
  {
    kk_integer_drop(a_10059, _ctx);
    return hi;
  }
}

kk_integer_t kk_api_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x2978 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2978) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x3591 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x3592 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x3591;
    b = _x_x3592;
    goto kk__tailcall;
  }
}

kk_integer_t kk_api_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x2975 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2975) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x2976 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2976) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10063;
      kk_integer_t _x_x3593 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x3594 = kk_integer_dup(b, _ctx); /*int*/
      n_10063 = kk_integer_mul(_x_x3593,_x_x3594,kk_context()); /*int*/
      kk_integer_t _x_x3595;
      bool _match_x2977 = kk_integer_lt_borrow(n_10063,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2977) {
        _x_x3595 = kk_integer_sub((kk_integer_from_small(0)),n_10063,kk_context()); /*int*/
      }
      else {
        _x_x3595 = n_10063; /*int*/
      }
      kk_integer_t _x_x3596 = kk_api_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x3595,_x_x3596,kk_context());
    }
  }
}

kk_integer_t kk_api_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x2974 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2974) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x3597 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x3598;
    kk_integer_t _x_x3599 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x3598 = kk_api_hc__pow(base, _x_x3599, _ctx); /*int*/
    return kk_integer_mul(_x_x3597,_x_x3598,kk_context());
  }
}

kk_integer_t kk_api_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x2971 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2971) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x2972;
    bool _brw_x2973 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x2972 = _brw_x2973; /*bool*/
    if (_match_x2972) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_api_hc__intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_box_drop(sep, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3600 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_std_core_types__list _pat_1 = _con_x3600->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_box_t x = _con_x3600->head;
      kk_reuse_t _ru_x3006 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        _ru_x3006 = (kk_datatype_ptr_reuse(xs, _ctx));
      }
      else {
        kk_box_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_box_drop(sep, _ctx);
      return kk_std_core_types__new_Cons(_ru_x3006, 0, x, kk_std_core_types__new_Nil(_ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x3601 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3601->head;
    kk_std_core_types__list rest = _con_x3601->tail;
    kk_reuse_t _ru_x3007 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x3007 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__list ys_10078;
    kk_box_t _x_x3602 = kk_box_dup(sep, _ctx); /*5338*/
    ys_10078 = kk_api_hc__intersperse(rest, _x_x3602, _ctx); /*list<5338>*/
    kk_std_core_types__list _x_x3603;
    kk_std_core_types__list _x_x3604 = kk_std_core_types__new_Cons(_ru_x3007, 0, sep, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3603 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_0, _x_x3604, _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3603, ys_10078, _ctx);
  }
}


// lift anonymous function
struct kk_api_hc__sum_fun3606__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__sum_fun3606(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__sum_fun3606(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__sum_fun3606, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__sum_fun3606(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x3607;
  kk_integer_t _x_x3608 = kk_integer_unbox(_b_x134, _ctx); /*int*/
  kk_integer_t _x_x3609 = kk_integer_unbox(_b_x135, _ctx); /*int*/
  _x_x3607 = kk_std_core_int__lp__plus__rp_(_x_x3608, _x_x3609, _ctx); /*int*/
  return kk_integer_box(_x_x3607, _ctx);
}

kk_integer_t kk_api_hc__sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3605 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(0), _ctx), kk_api_new_hc__sum_fun3606(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3605, _ctx);
}


// lift anonymous function
struct kk_api_hc__product_fun3611__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__product_fun3611(kk_function_t _fself, kk_box_t _b_x142, kk_box_t _b_x143, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__product_fun3611(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__product_fun3611, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__product_fun3611(kk_function_t _fself, kk_box_t _b_x142, kk_box_t _b_x143, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t a_147 = kk_integer_unbox(_b_x142, _ctx); /*int*/;
  kk_integer_t b_148 = kk_integer_unbox(_b_x143, _ctx); /*int*/;
  kk_integer_t _x_x3612 = kk_integer_mul(a_147,b_148,kk_context()); /*int*/
  return kk_integer_box(_x_x3612, _ctx);
}

kk_integer_t kk_api_hc__product(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3610 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(1), _ctx), kk_api_new_hc__product_fun3611(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3610, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_api__mlift_hc__scan_11116(kk_box_t init, kk_std_core_types__list _y_x10742, kk_context_t* _ctx) { /* forall<a,e> (init : a, list<a>) -> e list<a> */ 
  kk_std_core_types__list _x_x3613 = kk_std_core_types__new_Cons(kk_reuse_null, 0, init, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  return kk_std_core_list_append(_x_x3613, _y_x10742, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__scan_11117_fun3615__t {
  struct kk_function_s _base;
  kk_box_t init_0;
};
static kk_box_t kk_api__mlift_hc__scan_11117_fun3615(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__scan_11117_fun3615(kk_box_t init_0, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__scan_11117_fun3615__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__scan_11117_fun3615__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__scan_11117_fun3615, kk_context());
  _self->init_0 = init_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__scan_11117_fun3615(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__scan_11117_fun3615__t* _self = kk_function_as(struct kk_api__mlift_hc__scan_11117_fun3615__t*, _fself, _ctx);
  kk_box_t init_0 = _self->init_0; /* 5455 */
  kk_drop_match(_self, {kk_box_dup(init_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10742_0_152 = kk_std_core_types__list_unbox(_b_x150, KK_OWNED, _ctx); /*list<5455>*/;
  kk_std_core_types__list _x_x3616 = kk_api__mlift_hc__scan_11116(init_0, _y_x10742_0_152, _ctx); /*list<5455>*/
  return kk_std_core_types__list_box(_x_x3616, _ctx);
}

kk_std_core_types__list kk_api__mlift_hc__scan_11117(kk_function_t f, kk_box_t init_0, kk_std_core_types__list rest, kk_box_t _y_x10741, kk_context_t* _ctx) { /* forall<a,b,e> (f : (b, a) -> e b, init : b, rest : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list x_11184 = kk_api_hc__scan(rest, _y_x10741, f, _ctx); /*list<5455>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11184, _ctx);
    kk_box_t _x_x3614 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__scan_11117_fun3615(init_0, _ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x3614, KK_OWNED, _ctx);
  }
  {
    return kk_api__mlift_hc__scan_11116(init_0, x_11184, _ctx);
  }
}


// lift anonymous function
struct kk_api_hc__scan_fun3621__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  kk_box_t init_1;
  kk_std_core_types__list rest_0;
};
static kk_box_t kk_api_hc__scan_fun3621(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__scan_fun3621(kk_function_t f_0, kk_box_t init_1, kk_std_core_types__list rest_0, kk_context_t* _ctx) {
  struct kk_api_hc__scan_fun3621__t* _self = kk_function_alloc_as(struct kk_api_hc__scan_fun3621__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__scan_fun3621, kk_context());
  _self->f_0 = f_0;
  _self->init_1 = init_1;
  _self->rest_0 = rest_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__scan_fun3621(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx) {
  struct kk_api_hc__scan_fun3621__t* _self = kk_function_as(struct kk_api_hc__scan_fun3621__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (5455, 5454) -> 5456 5455 */
  kk_box_t init_1 = _self->init_1; /* 5455 */
  kk_std_core_types__list rest_0 = _self->rest_0; /* list<5454> */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_box_dup(init_1, _ctx);kk_std_core_types__list_dup(rest_0, _ctx);}, {}, _ctx)
  kk_box_t _y_x10741_0_159 = _b_x154; /*5455*/;
  kk_std_core_types__list _x_x3622 = kk_api__mlift_hc__scan_11117(f_0, init_1, rest_0, _y_x10741_0_159, _ctx); /*list<5455>*/
  return kk_std_core_types__list_box(_x_x3622, _ctx);
}


// lift anonymous function
struct kk_api_hc__scan_fun3624__t {
  struct kk_function_s _base;
  kk_box_t init_1;
};
static kk_box_t kk_api_hc__scan_fun3624(kk_function_t _fself, kk_box_t _b_x156, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__scan_fun3624(kk_box_t init_1, kk_context_t* _ctx) {
  struct kk_api_hc__scan_fun3624__t* _self = kk_function_alloc_as(struct kk_api_hc__scan_fun3624__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__scan_fun3624, kk_context());
  _self->init_1 = init_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__scan_fun3624(kk_function_t _fself, kk_box_t _b_x156, kk_context_t* _ctx) {
  struct kk_api_hc__scan_fun3624__t* _self = kk_function_as(struct kk_api_hc__scan_fun3624__t*, _fself, _ctx);
  kk_box_t init_1 = _self->init_1; /* 5455 */
  kk_drop_match(_self, {kk_box_dup(init_1, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10742_1_160 = kk_std_core_types__list_unbox(_b_x156, KK_OWNED, _ctx); /*list<5455>*/;
  kk_std_core_types__list _x_x3625 = kk_api__mlift_hc__scan_11116(init_1, _y_x10742_1_160, _ctx); /*list<5455>*/
  return kk_std_core_types__list_box(_x_x3625, _ctx);
}

kk_std_core_types__list kk_api_hc__scan(kk_std_core_types__list xs, kk_box_t init_1, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, init : b, f : (b, a) -> e b) -> e list<b> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(f_0, _ctx);
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3617 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3617->head;
    kk_std_core_types__list rest_0 = _con_x3617->tail;
    kk_reuse_t _ru_x3008 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x3008 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_1_11186;
    kk_function_t _x_x3619 = kk_function_dup(f_0, _ctx); /*(5455, 5454) -> 5456 5455*/
    kk_box_t _x_x3618 = kk_box_dup(init_1, _ctx); /*5455*/
    x_1_11186 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x3619, (_x_x3619, _x_x3618, x_0, _ctx), _ctx); /*5455*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x3008,kk_context());
      kk_box_drop(x_1_11186, _ctx);
      kk_box_t _x_x3620 = kk_std_core_hnd_yield_extend(kk_api_new_hc__scan_fun3621(f_0, init_1, rest_0, _ctx), _ctx); /*10001*/
      return kk_std_core_types__list_unbox(_x_x3620, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list x_2_11189 = kk_api_hc__scan(rest_0, x_1_11186, f_0, _ctx); /*list<5455>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x3008,kk_context());
        kk_std_core_types__list_drop(x_2_11189, _ctx);
        kk_box_t _x_x3623 = kk_std_core_hnd_yield_extend(kk_api_new_hc__scan_fun3624(init_1, _ctx), _ctx); /*10001*/
        return kk_std_core_types__list_unbox(_x_x3623, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list _x_x3626 = kk_std_core_types__new_Cons(_ru_x3008, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        return kk_std_core_list_append(_x_x3626, x_2_11189, _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_api_hc__zip__with_fun3627__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_api_hc__zip__with_fun3627(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__zip__with_fun3627(kk_function_t f, kk_context_t* _ctx) {
  struct kk_api_hc__zip__with_fun3627__t* _self = kk_function_alloc_as(struct kk_api_hc__zip__with_fun3627__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__zip__with_fun3627, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__zip__with_fun3627(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx) {
  struct kk_api_hc__zip__with_fun3627__t* _self = kk_function_as(struct kk_api_hc__zip__with_fun3627__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (5665, 5666) -> 5668 5667 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_box_t _x_x3628;
  kk_std_core_types__tuple2 _match_x2954;
  kk_box_t _x_x3629 = kk_box_dup(_b_x163, _ctx); /*10001*/
  _match_x2954 = kk_std_core_types__tuple2_unbox(_x_x3629, KK_OWNED, _ctx); /*(5665, 5666)*/
  {
    kk_box_t _x = _match_x2954.fst;
    kk_box_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2954, _ctx);
    _x_x3628 = _x; /*5665*/
  }
  kk_box_t _x_x3630;
  kk_std_core_types__tuple2 _match_x2953 = kk_std_core_types__tuple2_unbox(_b_x163, KK_OWNED, _ctx); /*(5665, 5666)*/;
  {
    kk_box_t _x_0 = _match_x2953.snd;
    kk_box_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2953, _ctx);
    _x_x3630 = _x_0; /*5666*/
  }
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, _x_x3628, _x_x3630, _ctx), _ctx);
}

kk_std_core_types__list kk_api_hc__zip__with(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 
  kk_std_core_types__list _b_x161_164 = kk_std_core_list_zip(xs, ys, _ctx); /*list<(5665, 5666)>*/;
  kk_function_t _brw_x2955 = kk_api_new_hc__zip__with_fun3627(f, _ctx); /*(10001) -> 10003 5667*/;
  kk_std_core_types__list _brw_x2956 = kk_std_core_list_map(_b_x161_164, _brw_x2955, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2955, _ctx);
  return _brw_x2956;
}


// lift anonymous function
struct kk_api_hc__unique_fun3632__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__unique_fun3632(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__unique_fun3632(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__unique_fun3632, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_hc__unique_fun3633__t {
  struct kk_function_s _base;
  kk_integer_t x_185;
};
static bool kk_api_hc__unique_fun3633(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__unique_fun3633(kk_integer_t x_185, kk_context_t* _ctx) {
  struct kk_api_hc__unique_fun3633__t* _self = kk_function_alloc_as(struct kk_api_hc__unique_fun3633__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__unique_fun3633, kk_context());
  _self->x_185 = x_185;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__unique_fun3633(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx) {
  struct kk_api_hc__unique_fun3633__t* _self = kk_function_as(struct kk_api_hc__unique_fun3633__t*, _fself, _ctx);
  kk_integer_t x_185 = _self->x_185; /* int */
  kk_drop_match(_self, {kk_integer_dup(x_185, _ctx);}, {}, _ctx)
  bool _brw_x2952 = kk_integer_eq_borrow(hc____el,x_185,kk_context()); /*bool*/;
  kk_integer_drop(hc____el, _ctx);
  kk_integer_drop(x_185, _ctx);
  return _brw_x2952;
}


// lift anonymous function
struct kk_api_hc__unique_fun3635__t {
  struct kk_function_s _base;
  kk_function_t _b_x168_181;
};
static bool kk_api_hc__unique_fun3635(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__unique_fun3635(kk_function_t _b_x168_181, kk_context_t* _ctx) {
  struct kk_api_hc__unique_fun3635__t* _self = kk_function_alloc_as(struct kk_api_hc__unique_fun3635__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__unique_fun3635, kk_context());
  _self->_b_x168_181 = _b_x168_181;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__unique_fun3635(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx) {
  struct kk_api_hc__unique_fun3635__t* _self = kk_function_as(struct kk_api_hc__unique_fun3635__t*, _fself, _ctx);
  kk_function_t _b_x168_181 = _self->_b_x168_181; /* (hc__el : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x168_181, _ctx);}, {}, _ctx)
  kk_integer_t _x_x3636 = kk_integer_unbox(_b_x169, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_context_t*), _b_x168_181, (_b_x168_181, _x_x3636, _ctx), _ctx);
}
static kk_box_t kk_api_hc__unique_fun3632(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list acc_184 = kk_std_core_types__list_unbox(_b_x175, KK_OWNED, _ctx); /*list<int>*/;
  kk_integer_t x_185 = kk_integer_unbox(_b_x176, _ctx); /*int*/;
  kk_std_core_types__list _b_x167_180 = kk_std_core_types__list_dup(acc_184, _ctx); /*list<int>*/;
  kk_function_t _b_x168_181;
  kk_integer_dup(x_185, _ctx);
  _b_x168_181 = kk_api_new_hc__unique_fun3633(x_185, _ctx); /*(hc__el : int) -> bool*/
  kk_std_core_types__list _x_x3634;
  bool _match_x2951 = kk_std_core_list_any(_b_x167_180, kk_api_new_hc__unique_fun3635(_b_x168_181, _ctx), _ctx); /*bool*/;
  if (_match_x2951) {
    kk_integer_drop(x_185, _ctx);
    _x_x3634 = acc_184; /*list<int>*/
  }
  else {
    kk_std_core_types__list _x_x3637 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(x_185, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3634 = kk_std_core_list_append(acc_184, _x_x3637, _ctx); /*list<int>*/
  }
  return kk_std_core_types__list_box(_x_x3634, _ctx);
}

kk_std_core_types__list kk_api_hc__unique(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> list<int> */ 
  kk_box_t _x_x3631 = kk_std_core_list_foldl(xs, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_api_new_hc__unique_fun3632(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x3631, KK_OWNED, _ctx);
}

kk_std_core_types__list kk_api_hc__chunks(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> div list<list<a>> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(n, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list _b_x186_188;
    kk_std_core_types__list _x_x3638 = kk_std_core_types__list_dup(xs, _ctx); /*list<5928>*/
    kk_integer_t _x_x3639 = kk_integer_dup(n, _ctx); /*int*/
    _b_x186_188 = kk_std_core_list_take(_x_x3638, _x_x3639, _ctx); /*list<5928>*/
    kk_std_core_types__list ys_10082;
    kk_std_core_types__list _x_x3640;
    kk_integer_t _x_x3641 = kk_integer_dup(n, _ctx); /*int*/
    _x_x3640 = kk_std_core_list_drop(xs, _x_x3641, _ctx); /*list<10001>*/
    ys_10082 = kk_api_hc__chunks(_x_x3640, n, _ctx); /*list<list<5928>>*/
    kk_std_core_types__list _x_x3642 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__list_box(_b_x186_188, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3642, ys_10082, _ctx);
  }
}


// lift anonymous function
struct kk_api_hc__words_fun3648__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__words_fun3648(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__words_fun3648(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__words_fun3648, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__words_fun3648(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3649;
  kk_char_t _x_x3650 = kk_char_unbox(_b_x192, KK_OWNED, _ctx); /*char*/
  _x_x3649 = kk_std_core_string_char_fs_string(_x_x3650, _ctx); /*string*/
  return kk_string_box(_x_x3649);
}


// lift anonymous function
struct kk_api_hc__words_fun3653__t {
  struct kk_function_s _base;
};
static bool kk_api_hc__words_fun3653(kk_function_t _fself, kk_box_t _b_x195, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__words_fun3653(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__words_fun3653, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_api_hc__words_fun3653(kk_function_t _fself, kk_box_t _b_x195, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10088;
  kk_integer_t _brw_x2942;
  kk_string_t _x_x3654 = kk_string_unbox(_b_x195); /*string*/
  _brw_x2942 = kk_std_core_string_chars_fs_count(_x_x3654, _ctx); /*int*/
  bool _brw_x2943 = kk_integer_eq_borrow(_brw_x2942,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2942, _ctx);
  b_10088 = _brw_x2943; /*bool*/
  if (b_10088) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_api_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x193_196;
  bool _match_x2944;
  kk_string_t _x_x3644;
  kk_define_string_literal(static, _s_x3645, 1, " ", _ctx)
  _x_x3644 = kk_string_dup(_s_x3645, _ctx); /*string*/
  kk_string_t _x_x3646 = kk_string_empty(); /*string*/
  _match_x2944 = kk_string_is_eq(_x_x3644,_x_x3646,kk_context()); /*bool*/
  if (_match_x2944) {
    kk_std_core_types__list _b_x190_198 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2945 = kk_api_new_hc__words_fun3648(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2946 = kk_std_core_list_map(_b_x190_198, _brw_x2945, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2945, _ctx);
    _b_x193_196 = _brw_x2946; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x3651;
    kk_define_string_literal(static, _s_x3652, 1, " ", _ctx)
    _x_x3651 = kk_string_dup(_s_x3652, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3651,kk_context()); /*vector<string>*/
    _b_x193_196 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x193_196, kk_api_new_hc__words_fun3653(_ctx), _ctx);
}


// lift anonymous function
struct kk_api_hc__lines_fun3659__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__lines_fun3659(kk_function_t _fself, kk_box_t _b_x203, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__lines_fun3659(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__lines_fun3659, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__lines_fun3659(kk_function_t _fself, kk_box_t _b_x203, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3660;
  kk_char_t _x_x3661 = kk_char_unbox(_b_x203, KK_OWNED, _ctx); /*char*/
  _x_x3660 = kk_std_core_string_char_fs_string(_x_x3661, _ctx); /*string*/
  return kk_string_box(_x_x3660);
}

kk_std_core_types__list kk_api_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x2939;
  kk_string_t _x_x3655;
  kk_define_string_literal(static, _s_x3656, 1, "\n", _ctx)
  _x_x3655 = kk_string_dup(_s_x3656, _ctx); /*string*/
  kk_string_t _x_x3657 = kk_string_empty(); /*string*/
  _match_x2939 = kk_string_is_eq(_x_x3655,_x_x3657,kk_context()); /*bool*/
  if (_match_x2939) {
    kk_std_core_types__list _b_x201_204 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2940 = kk_api_new_hc__lines_fun3659(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2941 = kk_std_core_list_map(_b_x201_204, _brw_x2940, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2940, _ctx);
    return _brw_x2941;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x3662;
    kk_define_string_literal(static, _s_x3663, 1, "\n", _ctx)
    _x_x3662 = kk_string_dup(_s_x3663, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3662,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_api_hc__count__substr_fun3671__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__count__substr_fun3671(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__count__substr_fun3671(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__count__substr_fun3671, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__count__substr_fun3671(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3672;
  kk_char_t _x_x3673 = kk_char_unbox(_b_x208, KK_OWNED, _ctx); /*char*/
  _x_x3672 = kk_std_core_string_char_fs_string(_x_x3673, _ctx); /*string*/
  return kk_string_box(_x_x3672);
}

kk_integer_t kk_api_hc__count__substr(kk_string_t s, kk_string_t hc__sub_0, kk_context_t* _ctx) { /* (s : string, hc_sub : string) -> int */ 
  kk_std_core_types__list xs_10100;
  bool _match_x2936;
  kk_string_t _x_x3668 = kk_string_dup(hc__sub_0, _ctx); /*string*/
  kk_string_t _x_x3669 = kk_string_empty(); /*string*/
  _match_x2936 = kk_string_is_eq(_x_x3668,_x_x3669,kk_context()); /*bool*/
  if (_match_x2936) {
    kk_string_drop(hc__sub_0, _ctx);
    kk_std_core_types__list _b_x206_209 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2937 = kk_api_new_hc__count__substr_fun3671(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2938 = kk_std_core_list_map(_b_x206_209, _brw_x2937, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2937, _ctx);
    xs_10100 = _brw_x2938; /*list<string>*/
  }
  else {
    kk_vector_t v_10011 = kk_string_splitv(s,hc__sub_0,kk_context()); /*vector<string>*/;
    xs_10100 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_integer_t x_10098 = kk_std_core_list__lift_length_6003(xs_10100, kk_integer_from_small(0), _ctx); /*int*/;
  return kk_integer_add_small_const(x_10098, -1, _ctx);
}

kk_string_t kk_api_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x2935 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2935) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3675 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3676;
    kk_integer_t _x_x3677 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x3676 = kk_api_hc__repeat__str(s, _x_x3677, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3675, _x_x3676, _ctx);
  }
}

kk_string_t kk_api_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10109;
  kk_string_t _x_x3678 = kk_string_dup(s, _ctx); /*string*/
  y_10109 = kk_std_core_string_chars_fs_count(_x_x3678, _ctx); /*int*/
  kk_integer_t b_10107 = kk_integer_sub(width,y_10109,kk_context()); /*int*/;
  kk_string_t _x_x3679;
  kk_integer_t _x_x3680;
  bool _match_x2934 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10107,kk_context()); /*bool*/;
  if (_match_x2934) {
    kk_integer_drop(b_10107, _ctx);
    _x_x3680 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3680 = b_10107; /*int*/
  }
  _x_x3679 = kk_api_hc__repeat__str(ch, _x_x3680, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3679, s, _ctx);
}

kk_string_t kk_api_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10113;
  kk_string_t _x_x3681 = kk_string_dup(s, _ctx); /*string*/
  y_10113 = kk_std_core_string_chars_fs_count(_x_x3681, _ctx); /*int*/
  kk_integer_t b_10111 = kk_integer_sub(width,y_10113,kk_context()); /*int*/;
  kk_string_t _x_x3682;
  kk_integer_t _x_x3683;
  bool _match_x2933 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10111,kk_context()); /*bool*/;
  if (_match_x2933) {
    kk_integer_drop(b_10111, _ctx);
    _x_x3683 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3683 = b_10111; /*int*/
  }
  _x_x3682 = kk_api_hc__repeat__str(ch, _x_x3683, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x3682, _ctx);
}

kk_string_t kk_api_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10117;
  kk_string_t _x_x3684 = kk_string_dup(s, _ctx); /*string*/
  y_10117 = kk_std_core_string_chars_fs_count(_x_x3684, _ctx); /*int*/
  kk_integer_t b_10115 = kk_integer_sub(width,y_10117,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x2932 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10115,kk_context()); /*bool*/;
  if (_match_x2932) {
    kk_integer_drop(b_10115, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10115; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x3685 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x3685,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x3686 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x3686,kk_context()); /*int*/
  kk_string_t _x_x3687;
  kk_string_t _x_x3688;
  kk_string_t _x_x3689 = kk_string_dup(ch, _ctx); /*string*/
  _x_x3688 = kk_api_hc__repeat__str(_x_x3689, left, _ctx); /*string*/
  _x_x3687 = kk_std_core_types__lp__plus__plus__rp_(_x_x3688, s, _ctx); /*string*/
  kk_string_t _x_x3690 = kk_api_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3687, _x_x3690, _ctx);
}

kk_string_t kk_api_hc__capitalise(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2929;
  kk_integer_t _brw_x2930;
  kk_string_t _x_x3693 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2930 = kk_std_core_string_chars_fs_count(_x_x3693, _ctx); /*int*/
  bool _brw_x2931 = kk_integer_eq_borrow(_brw_x2930,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2930, _ctx);
  _match_x2929 = _brw_x2931; /*bool*/
  if (_match_x2929) {
    kk_string_drop(s, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3695;
    kk_string_t _x_x3696;
    kk_std_core_types__list _x_x3697;
    kk_std_core_types__list _x_x3698;
    kk_string_t _x_x3699 = kk_string_dup(s, _ctx); /*string*/
    _x_x3698 = kk_std_core_string_list(_x_x3699, _ctx); /*list<char>*/
    _x_x3697 = kk_std_core_list_take(_x_x3698, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3696 = kk_std_core_string_listchar_fs_string(_x_x3697, _ctx); /*string*/
    _x_x3695 = kk_std_core_string_to_upper(_x_x3696, _ctx); /*string*/
    kk_string_t _x_x3700;
    kk_string_t _x_x3701;
    kk_std_core_types__list _x_x3702;
    kk_std_core_types__list _x_x3703 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3702 = kk_std_core_list_drop(_x_x3703, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3701 = kk_std_core_string_listchar_fs_string(_x_x3702, _ctx); /*string*/
    _x_x3700 = kk_std_core_string_to_lower(_x_x3701, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3695, _x_x3700, _ctx);
  }
}


// lift anonymous function
struct kk_api_hc__capwords_fun3704__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__capwords_fun3704(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__capwords_fun3704(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__capwords_fun3704, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__capwords_fun3704(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3705;
  kk_string_t _x_x3706 = kk_string_unbox(_b_x213); /*string*/
  _x_x3705 = kk_api_hc__capitalise(_x_x3706, _ctx); /*string*/
  return kk_string_box(_x_x3705);
}

kk_string_t kk_api_hc__capwords(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  kk_std_core_types__list _b_x211_214 = kk_api_hc__words(s, _ctx); /*list<string>*/;
  kk_std_core_types__list xs_10120;
  kk_function_t _brw_x2927 = kk_api_new_hc__capwords_fun3704(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2928 = kk_std_core_list_map(_b_x211_214, _brw_x2927, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2927, _ctx);
  xs_10120 = _brw_x2928; /*list<string>*/
  kk_string_t _x_x3707;
  kk_define_string_literal(static, _s_x3708, 1, " ", _ctx)
  _x_x3707 = kk_string_dup(_s_x3708, _ctx); /*string*/
  return kk_std_core_list_joinsep(xs_10120, _x_x3707, _ctx);
}

kk_string_t kk_api_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10122;
  kk_string_t _x_x3712 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3713 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10122 = kk_std_core_sslice_starts_with(_x_x3712, _x_x3713, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10122, _ctx)) {
    kk_box_t _box_x216 = maybe_10122._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10122, _ctx);
    kk_std_core_types__list _x_x3714;
    kk_std_core_types__list _x_x3715 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3716 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x3714 = kk_std_core_list_drop(_x_x3715, _x_x3716, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3714, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}

kk_string_t kk_api_hc__removesuffix(kk_string_t s, kk_string_t suf, kk_context_t* _ctx) { /* (s : string, suf : string) -> string */ 
  kk_std_core_types__maybe maybe_10123;
  kk_string_t _x_x3717 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3718 = kk_string_dup(suf, _ctx); /*string*/
  maybe_10123 = kk_std_core_sslice_ends_with(_x_x3717, _x_x3718, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10123, _ctx)) {
    kk_box_t _box_x217 = maybe_10123._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10123, _ctx);
    kk_integer_t x_10124;
    kk_string_t _x_x3719 = kk_string_dup(s, _ctx); /*string*/
    x_10124 = kk_std_core_string_chars_fs_count(_x_x3719, _ctx); /*int*/
    kk_integer_t y_10125 = kk_std_core_string_chars_fs_count(suf, _ctx); /*int*/;
    kk_std_core_types__list _x_x3720;
    kk_std_core_types__list _x_x3721 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3722 = kk_integer_sub(x_10124,y_10125,kk_context()); /*int*/
    _x_x3720 = kk_std_core_list_take(_x_x3721, _x_x3722, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3720, _ctx);
  }
  {
    kk_string_drop(suf, _ctx);
    return s;
  }
}


// lift anonymous function
struct kk_api_hc__all__digits_fun3728__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__all__digits_fun3728(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__all__digits_fun3728(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__all__digits_fun3728, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__all__digits_fun3728(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3729;
  kk_char_t _x_x3730 = kk_char_unbox(_b_x220, KK_OWNED, _ctx); /*char*/
  _x_x3729 = kk_std_core_string_char_fs_string(_x_x3730, _ctx); /*string*/
  return kk_string_box(_x_x3729);
}


// lift anonymous function
struct kk_api_hc__all__digits_fun3733__t {
  struct kk_function_s _base;
};
static bool kk_api_hc__all__digits_fun3733(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__all__digits_fun3733(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__all__digits_fun3733, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_api_hc__all__digits_fun3733(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _match_x2915;
  kk_std_core_types__order _x_x3734;
  kk_string_t _brw_x2920;
  kk_box_t _x_x3735 = kk_box_dup(_b_x225, _ctx); /*10001*/
  _brw_x2920 = kk_string_unbox(_x_x3735); /*string*/
  kk_string_t _brw_x2919;
  kk_define_string_literal(static, _s_x3736, 1, "0", _ctx)
  _brw_x2919 = kk_string_dup(_s_x3736, _ctx); /*string*/
  kk_std_core_types__order _brw_x2921 = kk_std_core_string_cmp(_brw_x2920, _brw_x2919, _ctx); /*order*/;
  kk_string_drop(_brw_x2920, _ctx);
  kk_string_drop(_brw_x2919, _ctx);
  _x_x3734 = _brw_x2921; /*order*/
  _match_x2915 = kk_std_core_order__lp__gt__rp_(_x_x3734, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x2915) {
    kk_std_core_types__order _x_x3737;
    kk_string_t _brw_x2917 = kk_string_unbox(_b_x225); /*string*/;
    kk_string_t _brw_x2916;
    kk_define_string_literal(static, _s_x3738, 1, "9", _ctx)
    _brw_x2916 = kk_string_dup(_s_x3738, _ctx); /*string*/
    kk_std_core_types__order _brw_x2918 = kk_std_core_string_cmp(_brw_x2917, _brw_x2916, _ctx); /*order*/;
    kk_string_drop(_brw_x2917, _ctx);
    kk_string_drop(_brw_x2916, _ctx);
    _x_x3737 = _brw_x2918; /*order*/
    return kk_std_core_order__lp__lt__rp_(_x_x3737, kk_std_core_types__new_Gt(_ctx), _ctx);
  }
  {
    kk_box_drop(_b_x225, _ctx);
    return false;
  }
}

bool kk_api_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2914;
  kk_integer_t _brw_x2925;
  kk_string_t _x_x3723 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2925 = kk_std_core_string_chars_fs_count(_x_x3723, _ctx); /*int*/
  bool _brw_x2926 = kk_integer_eq_borrow(_brw_x2925,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2925, _ctx);
  _match_x2914 = _brw_x2926; /*bool*/
  if (_match_x2914) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list chars;
    bool _match_x2922;
    kk_string_t _x_x3724 = kk_string_empty(); /*string*/
    kk_string_t _x_x3726 = kk_string_empty(); /*string*/
    _match_x2922 = kk_string_is_eq(_x_x3724,_x_x3726,kk_context()); /*bool*/
    if (_match_x2922) {
      kk_std_core_types__list _b_x218_221 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
      kk_function_t _brw_x2923 = kk_api_new_hc__all__digits_fun3728(_ctx); /*(10001) -> 10003 10002*/;
      kk_std_core_types__list _brw_x2924 = kk_std_core_list_map(_b_x218_221, _brw_x2923, _ctx); /*list<10002>*/;
      kk_function_drop(_brw_x2923, _ctx);
      chars = _brw_x2924; /*list<string>*/
    }
    else {
      kk_vector_t v_10011;
      kk_string_t _x_x3731 = kk_string_empty(); /*string*/
      v_10011 = kk_string_splitv(s,_x_x3731,kk_context()); /*vector<string>*/
      chars = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
    }
    return kk_std_core_list_all(chars, kk_api_new_hc__all__digits_fun3733(_ctx), _ctx);
  }
}

kk_std_core_types__maybe kk_api_hc__parse__part(kk_string_t s, kk_integer_t start, kk_integer_t len, kk_context_t* _ctx) { /* (s : string, start : int, len : int) -> maybe<int> */ 
  kk_integer_t x_10135;
  kk_integer_t _x_x3739 = kk_integer_dup(start, _ctx); /*int*/
  x_10135 = kk_integer_add(_x_x3739,len,kk_context()); /*int*/
  kk_string_t s_0_10133;
  kk_std_core_types__list _x_x3740;
  kk_std_core_types__list _x_x3741;
  kk_std_core_types__list _x_x3742 = kk_std_core_string_list(s, _ctx); /*list<char>*/
  kk_integer_t _x_x3743 = kk_integer_dup(start, _ctx); /*int*/
  _x_x3741 = kk_std_core_list_drop(_x_x3742, _x_x3743, _ctx); /*list<10001>*/
  kk_integer_t _x_x3744 = kk_integer_sub(x_10135,start,kk_context()); /*int*/
  _x_x3740 = kk_std_core_list_take(_x_x3741, _x_x3744, _ctx); /*list<10001>*/
  s_0_10133 = kk_std_core_string_listchar_fs_string(_x_x3740, _ctx); /*string*/
  bool _x_x3745;
  kk_std_core_types__optional _match_x2913 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2913, _ctx)) {
    kk_box_t _box_x229 = _match_x2913._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x229);
    kk_std_core_types__optional_drop(_match_x2913, _ctx);
    _x_x3745 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2913, _ctx);
    _x_x3745 = false; /*bool*/
  }
  return kk_std_core_int_xparse(s_0_10133, _x_x3745, _ctx);
}

bool kk_api_hc__in__range(kk_integer_t n, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (n : int, lo : int, hi : int) -> bool */ 
  bool _match_x2910;
  bool _brw_x2912 = kk_integer_gte_borrow(n,lo,kk_context()); /*bool*/;
  kk_integer_drop(lo, _ctx);
  _match_x2910 = _brw_x2912; /*bool*/
  if (_match_x2910) {
    bool _brw_x2911 = kk_integer_lte_borrow(n,hi,kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return _brw_x2911;
  }
  {
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return false;
  }
}

kk_integer_t kk_api_hc__days__in__month(kk_integer_t year, kk_integer_t month, kk_context_t* _ctx) { /* (year : int, month : int) -> int */ 
  if (kk_integer_eq_borrow(month, kk_integer_from_small(1), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(2), _ctx)) {
    kk_integer_drop(month, _ctx);
    bool _match_x2898;
    kk_integer_t _brw_x2908;
    kk_integer_t _x_x3746 = kk_integer_dup(year, _ctx); /*int*/
    _brw_x2908 = kk_integer_mod(_x_x3746,(kk_integer_from_small(4)),kk_context()); /*int*/
    bool _brw_x2909 = kk_integer_eq_borrow(_brw_x2908,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2908, _ctx);
    _match_x2898 = _brw_x2909; /*bool*/
    if (_match_x2898) {
      bool _match_x2902;
      kk_integer_t _brw_x2906;
      kk_integer_t _x_x3747 = kk_integer_dup(year, _ctx); /*int*/
      _brw_x2906 = kk_integer_mod(_x_x3747,(kk_integer_from_small(100)),kk_context()); /*int*/
      bool _brw_x2907 = kk_integer_neq_borrow(_brw_x2906,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2906, _ctx);
      _match_x2902 = _brw_x2907; /*bool*/
      if (_match_x2902) {
        kk_integer_drop(year, _ctx);
        return kk_integer_from_small(29);
      }
      {
        bool _match_x2903;
        kk_integer_t _brw_x2904 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
        bool _brw_x2905 = kk_integer_eq_borrow(_brw_x2904,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2904, _ctx);
        _match_x2903 = _brw_x2905; /*bool*/
        if (_match_x2903) {
          return kk_integer_from_small(29);
        }
        {
          return kk_integer_from_small(28);
        }
      }
    }
    {
      bool _match_x2899;
      kk_integer_t _brw_x2900 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
      bool _brw_x2901 = kk_integer_eq_borrow(_brw_x2900,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2900, _ctx);
      _match_x2899 = _brw_x2901; /*bool*/
      if (_match_x2899) {
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

bool kk_api_hc__is__valid__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2883;
  kk_integer_t _brw_x2896;
  kk_string_t _x_x3748 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2896 = kk_std_core_string_chars_fs_count(_x_x3748, _ctx); /*int*/
  bool _brw_x2897 = kk_integer_neq_borrow(_brw_x2896,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2896, _ctx);
  _match_x2883 = _brw_x2897; /*bool*/
  if (_match_x2883) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2884;
    kk_string_t _x_x3749;
    kk_std_core_types__list _x_x3750;
    kk_std_core_types__list _x_x3751;
    kk_std_core_types__list _x_x3752;
    kk_string_t _x_x3753 = kk_string_dup(s, _ctx); /*string*/
    _x_x3752 = kk_std_core_string_list(_x_x3753, _ctx); /*list<char>*/
    _x_x3751 = kk_std_core_list_drop(_x_x3752, kk_integer_from_small(4), _ctx); /*list<10001>*/
    kk_integer_t _x_x3754 = kk_integer_add_small_const(kk_integer_from_small(5), -4, _ctx); /*int*/
    _x_x3750 = kk_std_core_list_take(_x_x3751, _x_x3754, _ctx); /*list<10001>*/
    _x_x3749 = kk_std_core_string_listchar_fs_string(_x_x3750, _ctx); /*string*/
    kk_string_t _x_x3755;
    kk_define_string_literal(static, _s_x3756, 1, "-", _ctx)
    _x_x3755 = kk_string_dup(_s_x3756, _ctx); /*string*/
    _match_x2884 = kk_string_is_neq(_x_x3749,_x_x3755,kk_context()); /*bool*/
    if (_match_x2884) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool _match_x2885;
      kk_string_t _x_x3757;
      kk_std_core_types__list _x_x3758;
      kk_std_core_types__list _x_x3759;
      kk_std_core_types__list _x_x3760;
      kk_string_t _x_x3761 = kk_string_dup(s, _ctx); /*string*/
      _x_x3760 = kk_std_core_string_list(_x_x3761, _ctx); /*list<char>*/
      _x_x3759 = kk_std_core_list_drop(_x_x3760, kk_integer_from_small(7), _ctx); /*list<10001>*/
      kk_integer_t _x_x3762 = kk_integer_add_small_const(kk_integer_from_small(8), -7, _ctx); /*int*/
      _x_x3758 = kk_std_core_list_take(_x_x3759, _x_x3762, _ctx); /*list<10001>*/
      _x_x3757 = kk_std_core_string_listchar_fs_string(_x_x3758, _ctx); /*string*/
      kk_string_t _x_x3763;
      kk_define_string_literal(static, _s_x3764, 1, "-", _ctx)
      _x_x3763 = kk_string_dup(_s_x3764, _ctx); /*string*/
      _match_x2885 = kk_string_is_neq(_x_x3757,_x_x3763,kk_context()); /*bool*/
      if (_match_x2885) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        bool b_10143;
        kk_string_t _x_x3765;
        kk_std_core_types__list _x_x3766;
        kk_std_core_types__list _x_x3767;
        kk_std_core_types__list _x_x3768;
        kk_string_t _x_x3769 = kk_string_dup(s, _ctx); /*string*/
        _x_x3768 = kk_std_core_string_list(_x_x3769, _ctx); /*list<char>*/
        _x_x3767 = kk_std_core_list_drop(_x_x3768, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3770 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
        _x_x3766 = kk_std_core_list_take(_x_x3767, _x_x3770, _ctx); /*list<10001>*/
        _x_x3765 = kk_std_core_string_listchar_fs_string(_x_x3766, _ctx); /*string*/
        b_10143 = kk_api_hc__all__digits(_x_x3765, _ctx); /*bool*/
        if (b_10143) {
          bool b_0_10146;
          kk_string_t _x_x3771;
          kk_std_core_types__list _x_x3772;
          kk_std_core_types__list _x_x3773;
          kk_std_core_types__list _x_x3774;
          kk_string_t _x_x3775 = kk_string_dup(s, _ctx); /*string*/
          _x_x3774 = kk_std_core_string_list(_x_x3775, _ctx); /*list<char>*/
          _x_x3773 = kk_std_core_list_drop(_x_x3774, kk_integer_from_small(5), _ctx); /*list<10001>*/
          kk_integer_t _x_x3776 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
          _x_x3772 = kk_std_core_list_take(_x_x3773, _x_x3776, _ctx); /*list<10001>*/
          _x_x3771 = kk_std_core_string_listchar_fs_string(_x_x3772, _ctx); /*string*/
          b_0_10146 = kk_api_hc__all__digits(_x_x3771, _ctx); /*bool*/
          if (b_0_10146) {
            bool b_1_10149;
            kk_string_t _x_x3777;
            kk_std_core_types__list _x_x3778;
            kk_std_core_types__list _x_x3779;
            kk_std_core_types__list _x_x3780;
            kk_string_t _x_x3781 = kk_string_dup(s, _ctx); /*string*/
            _x_x3780 = kk_std_core_string_list(_x_x3781, _ctx); /*list<char>*/
            _x_x3779 = kk_std_core_list_drop(_x_x3780, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3782 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
            _x_x3778 = kk_std_core_list_take(_x_x3779, _x_x3782, _ctx); /*list<10001>*/
            _x_x3777 = kk_std_core_string_listchar_fs_string(_x_x3778, _ctx); /*string*/
            b_1_10149 = kk_api_hc__all__digits(_x_x3777, _ctx); /*bool*/
            if (b_1_10149) {
              kk_string_t s_0_10152;
              kk_std_core_types__list _x_x3783;
              kk_std_core_types__list _x_x3784;
              kk_std_core_types__list _x_x3785;
              kk_string_t _x_x3786 = kk_string_dup(s, _ctx); /*string*/
              _x_x3785 = kk_std_core_string_list(_x_x3786, _ctx); /*list<char>*/
              _x_x3784 = kk_std_core_list_drop(_x_x3785, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x3787 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
              _x_x3783 = kk_std_core_list_take(_x_x3784, _x_x3787, _ctx); /*list<10001>*/
              s_0_10152 = kk_std_core_string_listchar_fs_string(_x_x3783, _ctx); /*string*/
              kk_std_core_types__maybe _match_x2886;
              bool _x_x3788;
              kk_std_core_types__optional _match_x2895 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
              if (kk_std_core_types__is_Optional(_match_x2895, _ctx)) {
                kk_box_t _box_x230 = _match_x2895._cons._Optional.value;
                bool _uniq_hex_581 = kk_bool_unbox(_box_x230);
                kk_std_core_types__optional_drop(_match_x2895, _ctx);
                _x_x3788 = _uniq_hex_581; /*bool*/
              }
              else {
                kk_std_core_types__optional_drop(_match_x2895, _ctx);
                _x_x3788 = false; /*bool*/
              }
              _match_x2886 = kk_std_core_int_xparse(s_0_10152, _x_x3788, _ctx); /*maybe<int>*/
              if (kk_std_core_types__is_Just(_match_x2886, _ctx)) {
                kk_box_t _box_x231 = _match_x2886._cons.Just.value;
                kk_integer_t y_5 = kk_integer_unbox(_box_x231, _ctx);
                kk_integer_dup(y_5, _ctx);
                kk_std_core_types__maybe_drop(_match_x2886, _ctx);
                kk_string_t s_1_10156;
                kk_std_core_types__list _x_x3789;
                kk_std_core_types__list _x_x3790;
                kk_std_core_types__list _x_x3791;
                kk_string_t _x_x3792 = kk_string_dup(s, _ctx); /*string*/
                _x_x3791 = kk_std_core_string_list(_x_x3792, _ctx); /*list<char>*/
                _x_x3790 = kk_std_core_list_drop(_x_x3791, kk_integer_from_small(5), _ctx); /*list<10001>*/
                kk_integer_t _x_x3793 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
                _x_x3789 = kk_std_core_list_take(_x_x3790, _x_x3793, _ctx); /*list<10001>*/
                s_1_10156 = kk_std_core_string_listchar_fs_string(_x_x3789, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2887;
                bool _x_x3794;
                kk_std_core_types__optional _match_x2894 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2894, _ctx)) {
                  kk_box_t _box_x232 = _match_x2894._cons._Optional.value;
                  bool _uniq_hex_581_0 = kk_bool_unbox(_box_x232);
                  kk_std_core_types__optional_drop(_match_x2894, _ctx);
                  _x_x3794 = _uniq_hex_581_0; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2894, _ctx);
                  _x_x3794 = false; /*bool*/
                }
                _match_x2887 = kk_std_core_int_xparse(s_1_10156, _x_x3794, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2887, _ctx)) {
                  kk_box_t _box_x233 = _match_x2887._cons.Just.value;
                  kk_integer_t m = kk_integer_unbox(_box_x233, _ctx);
                  kk_integer_dup(m, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2887, _ctx);
                  kk_string_t s_2_10160;
                  kk_std_core_types__list _x_x3795;
                  kk_std_core_types__list _x_x3796;
                  kk_std_core_types__list _x_x3797 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x3796 = kk_std_core_list_drop(_x_x3797, kk_integer_from_small(8), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3798 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
                  _x_x3795 = kk_std_core_list_take(_x_x3796, _x_x3798, _ctx); /*list<10001>*/
                  s_2_10160 = kk_std_core_string_listchar_fs_string(_x_x3795, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2888;
                  bool _x_x3799;
                  kk_std_core_types__optional _match_x2893 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2893, _ctx)) {
                    kk_box_t _box_x234 = _match_x2893._cons._Optional.value;
                    bool _uniq_hex_581_1 = kk_bool_unbox(_box_x234);
                    kk_std_core_types__optional_drop(_match_x2893, _ctx);
                    _x_x3799 = _uniq_hex_581_1; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2893, _ctx);
                    _x_x3799 = false; /*bool*/
                  }
                  _match_x2888 = kk_std_core_int_xparse(s_2_10160, _x_x3799, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2888, _ctx)) {
                    kk_box_t _box_x235 = _match_x2888._cons.Just.value;
                    kk_integer_t d = kk_integer_unbox(_box_x235, _ctx);
                    kk_integer_dup(d, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2888, _ctx);
                    bool _match_x2889 = kk_integer_gte_borrow(m,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                    if (_match_x2889) {
                      bool _match_x2890 = kk_integer_lte_borrow(m,(kk_integer_from_small(12)),kk_context()); /*bool*/;
                      if (_match_x2890) {
                        kk_integer_t hi_0_10169 = kk_api_hc__days__in__month(y_5, m, _ctx); /*int*/;
                        bool _match_x2891 = kk_integer_gte_borrow(d,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                        if (_match_x2891) {
                          bool _brw_x2892 = kk_integer_lte_borrow(d,hi_0_10169,kk_context()); /*bool*/;
                          kk_integer_drop(d, _ctx);
                          kk_integer_drop(hi_0_10169, _ctx);
                          return _brw_x2892;
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

bool kk_api_hc__is__valid__time__short(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10170;
  kk_std_core_types__list _x_x3800;
  kk_std_core_types__list _x_x3801;
  kk_std_core_types__list _x_x3802;
  kk_string_t _x_x3803 = kk_string_dup(s, _ctx); /*string*/
  _x_x3802 = kk_std_core_string_list(_x_x3803, _ctx); /*list<char>*/
  _x_x3801 = kk_std_core_list_drop(_x_x3802, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x3804 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
  _x_x3800 = kk_std_core_list_take(_x_x3801, _x_x3804, _ctx); /*list<10001>*/
  s_0_10170 = kk_std_core_string_listchar_fs_string(_x_x3800, _ctx); /*string*/
  kk_std_core_types__maybe _match_x2874;
  bool _x_x3805;
  kk_std_core_types__optional _match_x2882 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2882, _ctx)) {
    kk_box_t _box_x236 = _match_x2882._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x236);
    kk_std_core_types__optional_drop(_match_x2882, _ctx);
    _x_x3805 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2882, _ctx);
    _x_x3805 = false; /*bool*/
  }
  _match_x2874 = kk_std_core_int_xparse(s_0_10170, _x_x3805, _ctx); /*maybe<int>*/
  if (kk_std_core_types__is_Just(_match_x2874, _ctx)) {
    kk_box_t _box_x237 = _match_x2874._cons.Just.value;
    kk_integer_t h = kk_integer_unbox(_box_x237, _ctx);
    kk_integer_dup(h, _ctx);
    kk_std_core_types__maybe_drop(_match_x2874, _ctx);
    kk_string_t s_1_10174;
    kk_std_core_types__list _x_x3806;
    kk_std_core_types__list _x_x3807;
    kk_std_core_types__list _x_x3808 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3807 = kk_std_core_list_drop(_x_x3808, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3809 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3806 = kk_std_core_list_take(_x_x3807, _x_x3809, _ctx); /*list<10001>*/
    s_1_10174 = kk_std_core_string_listchar_fs_string(_x_x3806, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2875;
    bool _x_x3810;
    kk_std_core_types__optional _match_x2881 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2881, _ctx)) {
      kk_box_t _box_x238 = _match_x2881._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x238);
      kk_std_core_types__optional_drop(_match_x2881, _ctx);
      _x_x3810 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2881, _ctx);
      _x_x3810 = false; /*bool*/
    }
    _match_x2875 = kk_std_core_int_xparse(s_1_10174, _x_x3810, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2875, _ctx)) {
      kk_box_t _box_x239 = _match_x2875._cons.Just.value;
      kk_integer_t m = kk_integer_unbox(_box_x239, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__maybe_drop(_match_x2875, _ctx);
      bool _match_x2876 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2876) {
        bool _match_x2877;
        bool _brw_x2880 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
        kk_integer_drop(h, _ctx);
        _match_x2877 = _brw_x2880; /*bool*/
        if (_match_x2877) {
          bool _match_x2878 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2878) {
            bool _brw_x2879 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
            kk_integer_drop(m, _ctx);
            return _brw_x2879;
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

bool kk_api_hc__is__valid__time__full(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool b_10184;
  kk_string_t _x_x3811;
  kk_std_core_types__list _x_x3812;
  kk_std_core_types__list _x_x3813;
  kk_std_core_types__list _x_x3814;
  kk_string_t _x_x3815 = kk_string_dup(s, _ctx); /*string*/
  _x_x3814 = kk_std_core_string_list(_x_x3815, _ctx); /*list<char>*/
  _x_x3813 = kk_std_core_list_drop(_x_x3814, kk_integer_from_small(6), _ctx); /*list<10001>*/
  kk_integer_t _x_x3816 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
  _x_x3812 = kk_std_core_list_take(_x_x3813, _x_x3816, _ctx); /*list<10001>*/
  _x_x3811 = kk_std_core_string_listchar_fs_string(_x_x3812, _ctx); /*string*/
  b_10184 = kk_api_hc__all__digits(_x_x3811, _ctx); /*bool*/
  if (b_10184) {
    kk_string_t s_0_10187;
    kk_std_core_types__list _x_x3817;
    kk_std_core_types__list _x_x3818;
    kk_std_core_types__list _x_x3819;
    kk_string_t _x_x3820 = kk_string_dup(s, _ctx); /*string*/
    _x_x3819 = kk_std_core_string_list(_x_x3820, _ctx); /*list<char>*/
    _x_x3818 = kk_std_core_list_drop(_x_x3819, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x3821 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
    _x_x3817 = kk_std_core_list_take(_x_x3818, _x_x3821, _ctx); /*list<10001>*/
    s_0_10187 = kk_std_core_string_listchar_fs_string(_x_x3817, _ctx); /*string*/
    kk_std_core_types__maybe hh;
    bool _x_x3822;
    kk_std_core_types__optional _match_x2873 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2873, _ctx)) {
      kk_box_t _box_x240 = _match_x2873._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x240);
      kk_std_core_types__optional_drop(_match_x2873, _ctx);
      _x_x3822 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2873, _ctx);
      _x_x3822 = false; /*bool*/
    }
    hh = kk_std_core_int_xparse(s_0_10187, _x_x3822, _ctx); /*maybe<int>*/
    kk_string_t s_1_10191;
    kk_std_core_types__list _x_x3823;
    kk_std_core_types__list _x_x3824;
    kk_std_core_types__list _x_x3825;
    kk_string_t _x_x3826 = kk_string_dup(s, _ctx); /*string*/
    _x_x3825 = kk_std_core_string_list(_x_x3826, _ctx); /*list<char>*/
    _x_x3824 = kk_std_core_list_drop(_x_x3825, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3827 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3823 = kk_std_core_list_take(_x_x3824, _x_x3827, _ctx); /*list<10001>*/
    s_1_10191 = kk_std_core_string_listchar_fs_string(_x_x3823, _ctx); /*string*/
    kk_std_core_types__maybe mm;
    bool _x_x3828;
    kk_std_core_types__optional _match_x2872 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2872, _ctx)) {
      kk_box_t _box_x241 = _match_x2872._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x241);
      kk_std_core_types__optional_drop(_match_x2872, _ctx);
      _x_x3828 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2872, _ctx);
      _x_x3828 = false; /*bool*/
    }
    mm = kk_std_core_int_xparse(s_1_10191, _x_x3828, _ctx); /*maybe<int>*/
    kk_string_t s_2_10195;
    kk_std_core_types__list _x_x3829;
    kk_std_core_types__list _x_x3830;
    kk_std_core_types__list _x_x3831;
    kk_string_t _x_x3832 = kk_string_dup(s, _ctx); /*string*/
    _x_x3831 = kk_std_core_string_list(_x_x3832, _ctx); /*list<char>*/
    _x_x3830 = kk_std_core_list_drop(_x_x3831, kk_integer_from_small(6), _ctx); /*list<10001>*/
    kk_integer_t _x_x3833 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
    _x_x3829 = kk_std_core_list_take(_x_x3830, _x_x3833, _ctx); /*list<10001>*/
    s_2_10195 = kk_std_core_string_listchar_fs_string(_x_x3829, _ctx); /*string*/
    kk_std_core_types__maybe ss;
    bool _x_x3834;
    kk_std_core_types__optional _match_x2871 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2871, _ctx)) {
      kk_box_t _box_x242 = _match_x2871._cons._Optional.value;
      bool _uniq_hex_581_1 = kk_bool_unbox(_box_x242);
      kk_std_core_types__optional_drop(_match_x2871, _ctx);
      _x_x3834 = _uniq_hex_581_1; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2871, _ctx);
      _x_x3834 = false; /*bool*/
    }
    ss = kk_std_core_int_xparse(s_2_10195, _x_x3834, _ctx); /*maybe<int>*/
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
          bool _match_x2863 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2863) {
            bool _match_x2864;
            bool _brw_x2870 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
            kk_integer_drop(h, _ctx);
            _match_x2864 = _brw_x2870; /*bool*/
            if (_match_x2864) {
              bool _match_x2865 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
              if (_match_x2865) {
                bool _match_x2866;
                bool _brw_x2869 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                kk_integer_drop(m, _ctx);
                _match_x2866 = _brw_x2869; /*bool*/
                if (_match_x2866) {
                  bool _match_x2867 = kk_integer_gte_borrow(sec,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                  if (_match_x2867) {
                    bool _brw_x2868 = kk_integer_lte_borrow(sec,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                    kk_integer_drop(sec, _ctx);
                    base__ok = _brw_x2868; /*bool*/
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
          bool _match_x2856;
          kk_integer_t _brw_x2861;
          kk_string_t _x_x3835 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2861 = kk_std_core_string_chars_fs_count(_x_x3835, _ctx); /*int*/
          bool _brw_x2862 = kk_integer_eq_borrow(_brw_x2861,(kk_integer_from_small(8)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2861, _ctx);
          _match_x2856 = _brw_x2862; /*bool*/
          if (_match_x2856) {
            kk_string_drop(s, _ctx);
            return base__ok;
          }
          {
            bool _match_x2857;
            kk_string_t _x_x3836;
            kk_std_core_types__list _x_x3837;
            kk_std_core_types__list _x_x3838;
            kk_std_core_types__list _x_x3839;
            kk_string_t _x_x3840 = kk_string_dup(s, _ctx); /*string*/
            _x_x3839 = kk_std_core_string_list(_x_x3840, _ctx); /*list<char>*/
            _x_x3838 = kk_std_core_list_drop(_x_x3839, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3841 = kk_integer_add_small_const(kk_integer_from_small(9), -8, _ctx); /*int*/
            _x_x3837 = kk_std_core_list_take(_x_x3838, _x_x3841, _ctx); /*list<10001>*/
            _x_x3836 = kk_std_core_string_listchar_fs_string(_x_x3837, _ctx); /*string*/
            kk_string_t _x_x3842;
            kk_define_string_literal(static, _s_x3843, 1, ".", _ctx)
            _x_x3842 = kk_string_dup(_s_x3843, _ctx); /*string*/
            _match_x2857 = kk_string_is_eq(_x_x3836,_x_x3842,kk_context()); /*bool*/
            if (_match_x2857) {
              kk_string_t frac;
              kk_std_core_types__list _x_x3844;
              kk_std_core_types__list _x_x3845 = kk_std_core_string_list(s, _ctx); /*list<char>*/
              _x_x3844 = kk_std_core_list_drop(_x_x3845, kk_integer_from_small(9), _ctx); /*list<10001>*/
              frac = kk_std_core_string_listchar_fs_string(_x_x3844, _ctx); /*string*/
              if (base__ok) {
                bool _match_x2858;
                kk_integer_t _brw_x2859;
                kk_string_t _x_x3846 = kk_string_dup(frac, _ctx); /*string*/
                _brw_x2859 = kk_std_core_string_chars_fs_count(_x_x3846, _ctx); /*int*/
                bool _brw_x2860 = kk_integer_gt_borrow(_brw_x2859,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                kk_integer_drop(_brw_x2859, _ctx);
                _match_x2858 = _brw_x2860; /*bool*/
                if (_match_x2858) {
                  return kk_api_hc__all__digits(frac, _ctx);
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

bool kk_api_hc__is__valid__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2845;
  kk_integer_t _brw_x2854;
  kk_string_t _x_x3847 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2854 = kk_std_core_string_chars_fs_count(_x_x3847, _ctx); /*int*/
  bool _brw_x2855 = kk_integer_lt_borrow(_brw_x2854,(kk_integer_from_small(5)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2854, _ctx);
  _match_x2845 = _brw_x2855; /*bool*/
  if (_match_x2845) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2846;
    kk_string_t _x_x3848;
    kk_std_core_types__list _x_x3849;
    kk_std_core_types__list _x_x3850;
    kk_std_core_types__list _x_x3851;
    kk_string_t _x_x3852 = kk_string_dup(s, _ctx); /*string*/
    _x_x3851 = kk_std_core_string_list(_x_x3852, _ctx); /*list<char>*/
    _x_x3850 = kk_std_core_list_drop(_x_x3851, kk_integer_from_small(2), _ctx); /*list<10001>*/
    kk_integer_t _x_x3853 = kk_integer_add_small_const(kk_integer_from_small(3), -2, _ctx); /*int*/
    _x_x3849 = kk_std_core_list_take(_x_x3850, _x_x3853, _ctx); /*list<10001>*/
    _x_x3848 = kk_std_core_string_listchar_fs_string(_x_x3849, _ctx); /*string*/
    kk_string_t _x_x3854;
    kk_define_string_literal(static, _s_x3855, 1, ":", _ctx)
    _x_x3854 = kk_string_dup(_s_x3855, _ctx); /*string*/
    _match_x2846 = kk_string_is_neq(_x_x3848,_x_x3854,kk_context()); /*bool*/
    if (_match_x2846) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool b_10212;
      kk_string_t _x_x3856;
      kk_std_core_types__list _x_x3857;
      kk_std_core_types__list _x_x3858;
      kk_std_core_types__list _x_x3859;
      kk_string_t _x_x3860 = kk_string_dup(s, _ctx); /*string*/
      _x_x3859 = kk_std_core_string_list(_x_x3860, _ctx); /*list<char>*/
      _x_x3858 = kk_std_core_list_drop(_x_x3859, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x3861 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x3857 = kk_std_core_list_take(_x_x3858, _x_x3861, _ctx); /*list<10001>*/
      _x_x3856 = kk_std_core_string_listchar_fs_string(_x_x3857, _ctx); /*string*/
      b_10212 = kk_api_hc__all__digits(_x_x3856, _ctx); /*bool*/
      if (b_10212) {
        bool b_0_10215;
        kk_string_t _x_x3862;
        kk_std_core_types__list _x_x3863;
        kk_std_core_types__list _x_x3864;
        kk_std_core_types__list _x_x3865;
        kk_string_t _x_x3866 = kk_string_dup(s, _ctx); /*string*/
        _x_x3865 = kk_std_core_string_list(_x_x3866, _ctx); /*list<char>*/
        _x_x3864 = kk_std_core_list_drop(_x_x3865, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x3867 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x3863 = kk_std_core_list_take(_x_x3864, _x_x3867, _ctx); /*list<10001>*/
        _x_x3862 = kk_std_core_string_listchar_fs_string(_x_x3863, _ctx); /*string*/
        b_0_10215 = kk_api_hc__all__digits(_x_x3862, _ctx); /*bool*/
        if (b_0_10215) {
          bool _match_x2847;
          kk_integer_t _brw_x2852;
          kk_string_t _x_x3868 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2852 = kk_std_core_string_chars_fs_count(_x_x3868, _ctx); /*int*/
          bool _brw_x2853 = kk_integer_eq_borrow(_brw_x2852,(kk_integer_from_small(5)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2852, _ctx);
          _match_x2847 = _brw_x2853; /*bool*/
          if (_match_x2847) {
            return kk_api_hc__is__valid__time__short(s, _ctx);
          }
          {
            bool _match_x2848;
            kk_integer_t _brw_x2850;
            kk_string_t _x_x3869 = kk_string_dup(s, _ctx); /*string*/
            _brw_x2850 = kk_std_core_string_chars_fs_count(_x_x3869, _ctx); /*int*/
            bool _brw_x2851 = kk_integer_gte_borrow(_brw_x2850,(kk_integer_from_small(8)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2850, _ctx);
            _match_x2848 = _brw_x2851; /*bool*/
            if (_match_x2848) {
              bool _match_x2849;
              kk_string_t _x_x3870;
              kk_std_core_types__list _x_x3871;
              kk_std_core_types__list _x_x3872;
              kk_std_core_types__list _x_x3873;
              kk_string_t _x_x3874 = kk_string_dup(s, _ctx); /*string*/
              _x_x3873 = kk_std_core_string_list(_x_x3874, _ctx); /*list<char>*/
              _x_x3872 = kk_std_core_list_drop(_x_x3873, kk_integer_from_small(5), _ctx); /*list<10001>*/
              kk_integer_t _x_x3875 = kk_integer_add_small_const(kk_integer_from_small(6), -5, _ctx); /*int*/
              _x_x3871 = kk_std_core_list_take(_x_x3872, _x_x3875, _ctx); /*list<10001>*/
              _x_x3870 = kk_std_core_string_listchar_fs_string(_x_x3871, _ctx); /*string*/
              kk_string_t _x_x3876;
              kk_define_string_literal(static, _s_x3877, 1, ":", _ctx)
              _x_x3876 = kk_string_dup(_s_x3877, _ctx); /*string*/
              _match_x2849 = kk_string_is_eq(_x_x3870,_x_x3876,kk_context()); /*bool*/
              if (_match_x2849) {
                return kk_api_hc__is__valid__time__full(s, _ctx);
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

bool kk_api_hc__is__valid__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2818;
  kk_string_t _x_x3878 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3879;
  kk_define_string_literal(static, _s_x3880, 1, "Z", _ctx)
  _x_x3879 = kk_string_dup(_s_x3880, _ctx); /*string*/
  _match_x2818 = kk_string_is_eq(_x_x3878,_x_x3879,kk_context()); /*bool*/
  if (_match_x2818) {
    kk_string_drop(s, _ctx);
    return true;
  }
  {
    bool _match_x2819;
    kk_string_t _x_x3881 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3882;
    kk_define_string_literal(static, _s_x3883, 1, "z", _ctx)
    _x_x3882 = kk_string_dup(_s_x3883, _ctx); /*string*/
    _match_x2819 = kk_string_is_eq(_x_x3881,_x_x3882,kk_context()); /*bool*/
    if (_match_x2819) {
      kk_string_drop(s, _ctx);
      return true;
    }
    {
      bool _match_x2820;
      kk_integer_t _brw_x2843;
      kk_string_t _x_x3884 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2843 = kk_std_core_string_chars_fs_count(_x_x3884, _ctx); /*int*/
      bool _brw_x2844 = kk_integer_neq_borrow(_brw_x2843,(kk_integer_from_small(6)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2843, _ctx);
      _match_x2820 = _brw_x2844; /*bool*/
      if (_match_x2820) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        kk_string_t hc__sign_0;
        kk_std_core_types__list _x_x3885;
        kk_std_core_types__list _x_x3886;
        kk_std_core_types__list _x_x3887;
        kk_string_t _x_x3888 = kk_string_dup(s, _ctx); /*string*/
        _x_x3887 = kk_std_core_string_list(_x_x3888, _ctx); /*list<char>*/
        _x_x3886 = kk_std_core_list_drop(_x_x3887, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3889 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x3885 = kk_std_core_list_take(_x_x3886, _x_x3889, _ctx); /*list<10001>*/
        hc__sign_0 = kk_std_core_string_listchar_fs_string(_x_x3885, _ctx); /*string*/
        bool _match_x2821;
        kk_string_t _x_x3890 = kk_string_dup(hc__sign_0, _ctx); /*string*/
        kk_string_t _x_x3891;
        kk_define_string_literal(static, _s_x3892, 1, "+", _ctx)
        _x_x3891 = kk_string_dup(_s_x3892, _ctx); /*string*/
        _match_x2821 = kk_string_is_neq(_x_x3890,_x_x3891,kk_context()); /*bool*/
        if (_match_x2821) {
          bool _match_x2832;
          kk_string_t _x_x3893;
          kk_define_string_literal(static, _s_x3894, 1, "-", _ctx)
          _x_x3893 = kk_string_dup(_s_x3894, _ctx); /*string*/
          _match_x2832 = kk_string_is_neq(hc__sign_0,_x_x3893,kk_context()); /*bool*/
          if (_match_x2832) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool _match_x2833;
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
            _match_x2833 = kk_string_is_neq(_x_x3895,_x_x3901,kk_context()); /*bool*/
            if (_match_x2833) {
              kk_string_drop(s, _ctx);
              return false;
            }
            {
              bool b_10224;
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
              b_10224 = kk_api_hc__all__digits(_x_x3903, _ctx); /*bool*/
              if (b_10224) {
                bool b_0_10227;
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
                b_0_10227 = kk_api_hc__all__digits(_x_x3909, _ctx); /*bool*/
                if (b_0_10227) {
                  kk_string_t s_0_10230;
                  kk_std_core_types__list _x_x3915;
                  kk_std_core_types__list _x_x3916;
                  kk_std_core_types__list _x_x3917;
                  kk_string_t _x_x3918 = kk_string_dup(s, _ctx); /*string*/
                  _x_x3917 = kk_std_core_string_list(_x_x3918, _ctx); /*list<char>*/
                  _x_x3916 = kk_std_core_list_drop(_x_x3917, kk_integer_from_small(1), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3919 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                  _x_x3915 = kk_std_core_list_take(_x_x3916, _x_x3919, _ctx); /*list<10001>*/
                  s_0_10230 = kk_std_core_string_listchar_fs_string(_x_x3915, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2834;
                  bool _x_x3920;
                  kk_std_core_types__optional _match_x2842 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2842, _ctx)) {
                    kk_box_t _box_x246 = _match_x2842._cons._Optional.value;
                    bool _uniq_hex_581 = kk_bool_unbox(_box_x246);
                    kk_std_core_types__optional_drop(_match_x2842, _ctx);
                    _x_x3920 = _uniq_hex_581; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2842, _ctx);
                    _x_x3920 = false; /*bool*/
                  }
                  _match_x2834 = kk_std_core_int_xparse(s_0_10230, _x_x3920, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2834, _ctx)) {
                    kk_box_t _box_x247 = _match_x2834._cons.Just.value;
                    kk_integer_t h = kk_integer_unbox(_box_x247, _ctx);
                    kk_integer_dup(h, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2834, _ctx);
                    kk_string_t s_1_10234;
                    kk_std_core_types__list _x_x3921;
                    kk_std_core_types__list _x_x3922;
                    kk_std_core_types__list _x_x3923 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                    _x_x3922 = kk_std_core_list_drop(_x_x3923, kk_integer_from_small(4), _ctx); /*list<10001>*/
                    kk_integer_t _x_x3924 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                    _x_x3921 = kk_std_core_list_take(_x_x3922, _x_x3924, _ctx); /*list<10001>*/
                    s_1_10234 = kk_std_core_string_listchar_fs_string(_x_x3921, _ctx); /*string*/
                    kk_std_core_types__maybe _match_x2835;
                    bool _x_x3925;
                    kk_std_core_types__optional _match_x2841 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                    if (kk_std_core_types__is_Optional(_match_x2841, _ctx)) {
                      kk_box_t _box_x248 = _match_x2841._cons._Optional.value;
                      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x248);
                      kk_std_core_types__optional_drop(_match_x2841, _ctx);
                      _x_x3925 = _uniq_hex_581_0; /*bool*/
                    }
                    else {
                      kk_std_core_types__optional_drop(_match_x2841, _ctx);
                      _x_x3925 = false; /*bool*/
                    }
                    _match_x2835 = kk_std_core_int_xparse(s_1_10234, _x_x3925, _ctx); /*maybe<int>*/
                    if (kk_std_core_types__is_Just(_match_x2835, _ctx)) {
                      kk_box_t _box_x249 = _match_x2835._cons.Just.value;
                      kk_integer_t m = kk_integer_unbox(_box_x249, _ctx);
                      kk_integer_dup(m, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2835, _ctx);
                      bool _match_x2836 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                      if (_match_x2836) {
                        bool _match_x2837;
                        bool _brw_x2840 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                        kk_integer_drop(h, _ctx);
                        _match_x2837 = _brw_x2840; /*bool*/
                        if (_match_x2837) {
                          bool _match_x2838 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                          if (_match_x2838) {
                            bool _brw_x2839 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                            kk_integer_drop(m, _ctx);
                            return _brw_x2839;
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
          bool _match_x2822;
          kk_string_t _x_x3926;
          kk_std_core_types__list _x_x3927;
          kk_std_core_types__list _x_x3928;
          kk_std_core_types__list _x_x3929;
          kk_string_t _x_x3930 = kk_string_dup(s, _ctx); /*string*/
          _x_x3929 = kk_std_core_string_list(_x_x3930, _ctx); /*list<char>*/
          _x_x3928 = kk_std_core_list_drop(_x_x3929, kk_integer_from_small(3), _ctx); /*list<10001>*/
          kk_integer_t _x_x3931 = kk_integer_add_small_const(kk_integer_from_small(4), -3, _ctx); /*int*/
          _x_x3927 = kk_std_core_list_take(_x_x3928, _x_x3931, _ctx); /*list<10001>*/
          _x_x3926 = kk_std_core_string_listchar_fs_string(_x_x3927, _ctx); /*string*/
          kk_string_t _x_x3932;
          kk_define_string_literal(static, _s_x3933, 1, ":", _ctx)
          _x_x3932 = kk_string_dup(_s_x3933, _ctx); /*string*/
          _match_x2822 = kk_string_is_neq(_x_x3926,_x_x3932,kk_context()); /*bool*/
          if (_match_x2822) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool b_1_10246;
            kk_string_t _x_x3934;
            kk_std_core_types__list _x_x3935;
            kk_std_core_types__list _x_x3936;
            kk_std_core_types__list _x_x3937;
            kk_string_t _x_x3938 = kk_string_dup(s, _ctx); /*string*/
            _x_x3937 = kk_std_core_string_list(_x_x3938, _ctx); /*list<char>*/
            _x_x3936 = kk_std_core_list_drop(_x_x3937, kk_integer_from_small(1), _ctx); /*list<10001>*/
            kk_integer_t _x_x3939 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
            _x_x3935 = kk_std_core_list_take(_x_x3936, _x_x3939, _ctx); /*list<10001>*/
            _x_x3934 = kk_std_core_string_listchar_fs_string(_x_x3935, _ctx); /*string*/
            b_1_10246 = kk_api_hc__all__digits(_x_x3934, _ctx); /*bool*/
            if (b_1_10246) {
              bool b_2_10249;
              kk_string_t _x_x3940;
              kk_std_core_types__list _x_x3941;
              kk_std_core_types__list _x_x3942;
              kk_std_core_types__list _x_x3943;
              kk_string_t _x_x3944 = kk_string_dup(s, _ctx); /*string*/
              _x_x3943 = kk_std_core_string_list(_x_x3944, _ctx); /*list<char>*/
              _x_x3942 = kk_std_core_list_drop(_x_x3943, kk_integer_from_small(4), _ctx); /*list<10001>*/
              kk_integer_t _x_x3945 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
              _x_x3941 = kk_std_core_list_take(_x_x3942, _x_x3945, _ctx); /*list<10001>*/
              _x_x3940 = kk_std_core_string_listchar_fs_string(_x_x3941, _ctx); /*string*/
              b_2_10249 = kk_api_hc__all__digits(_x_x3940, _ctx); /*bool*/
              if (b_2_10249) {
                kk_string_t s_2_10252;
                kk_std_core_types__list _x_x3946;
                kk_std_core_types__list _x_x3947;
                kk_std_core_types__list _x_x3948;
                kk_string_t _x_x3949 = kk_string_dup(s, _ctx); /*string*/
                _x_x3948 = kk_std_core_string_list(_x_x3949, _ctx); /*list<char>*/
                _x_x3947 = kk_std_core_list_drop(_x_x3948, kk_integer_from_small(1), _ctx); /*list<10001>*/
                kk_integer_t _x_x3950 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                _x_x3946 = kk_std_core_list_take(_x_x3947, _x_x3950, _ctx); /*list<10001>*/
                s_2_10252 = kk_std_core_string_listchar_fs_string(_x_x3946, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2823;
                bool _x_x3951;
                kk_std_core_types__optional _match_x2831 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2831, _ctx)) {
                  kk_box_t _box_x250 = _match_x2831._cons._Optional.value;
                  bool _uniq_hex_581_1 = kk_bool_unbox(_box_x250);
                  kk_std_core_types__optional_drop(_match_x2831, _ctx);
                  _x_x3951 = _uniq_hex_581_1; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2831, _ctx);
                  _x_x3951 = false; /*bool*/
                }
                _match_x2823 = kk_std_core_int_xparse(s_2_10252, _x_x3951, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2823, _ctx)) {
                  kk_box_t _box_x251 = _match_x2823._cons.Just.value;
                  kk_integer_t h_0 = kk_integer_unbox(_box_x251, _ctx);
                  kk_integer_dup(h_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2823, _ctx);
                  kk_string_t s_3_10256;
                  kk_std_core_types__list _x_x3952;
                  kk_std_core_types__list _x_x3953;
                  kk_std_core_types__list _x_x3954 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x3953 = kk_std_core_list_drop(_x_x3954, kk_integer_from_small(4), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3955 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                  _x_x3952 = kk_std_core_list_take(_x_x3953, _x_x3955, _ctx); /*list<10001>*/
                  s_3_10256 = kk_std_core_string_listchar_fs_string(_x_x3952, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2824;
                  bool _x_x3956;
                  kk_std_core_types__optional _match_x2830 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2830, _ctx)) {
                    kk_box_t _box_x252 = _match_x2830._cons._Optional.value;
                    bool _uniq_hex_581_2 = kk_bool_unbox(_box_x252);
                    kk_std_core_types__optional_drop(_match_x2830, _ctx);
                    _x_x3956 = _uniq_hex_581_2; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2830, _ctx);
                    _x_x3956 = false; /*bool*/
                  }
                  _match_x2824 = kk_std_core_int_xparse(s_3_10256, _x_x3956, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2824, _ctx)) {
                    kk_box_t _box_x253 = _match_x2824._cons.Just.value;
                    kk_integer_t m_0 = kk_integer_unbox(_box_x253, _ctx);
                    kk_integer_dup(m_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2824, _ctx);
                    bool _match_x2825 = kk_integer_gte_borrow(h_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                    if (_match_x2825) {
                      bool _match_x2826;
                      bool _brw_x2829 = kk_integer_lte_borrow(h_0,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                      kk_integer_drop(h_0, _ctx);
                      _match_x2826 = _brw_x2829; /*bool*/
                      if (_match_x2826) {
                        bool _match_x2827 = kk_integer_gte_borrow(m_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                        if (_match_x2827) {
                          bool _brw_x2828 = kk_integer_lte_borrow(m_0,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                          kk_integer_drop(m_0, _ctx);
                          return _brw_x2828;
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

bool kk_api_hc__check__z__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  kk_integer_t zi;
  kk_std_core_types__maybe _match_x2814;
  kk_string_t _x_x3957 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x3958;
  kk_define_string_literal(static, _s_x3959, 1, "Z", _ctx)
  _x_x3958 = kk_string_dup(_s_x3959, _ctx); /*string*/
  _match_x2814 = kk_std_core_sslice_find(_x_x3957, _x_x3958, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x2814, _ctx)) {
    kk_box_t _box_x254 = _match_x2814._cons.Just.value;
    kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x254, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
    kk_std_core_types__maybe_drop(_match_x2814, _ctx);
    kk_std_core_sslice__sslice _x_x3960;
    {
      kk_string_t s = hc____ss.str;
      kk_integer_t start = hc____ss.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
      _x_x3960 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    zi = kk_std_core_sslice_count(_x_x3960, _ctx); /*int*/
  }
  else {
    kk_std_core_types__maybe _match_x2815 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2815, _ctx)) {
      kk_box_t _box_x255 = _match_x2815._cons.Just.value;
      kk_integer_t i = kk_integer_unbox(_box_x255, _ctx);
      kk_integer_dup(i, _ctx);
      kk_std_core_types__maybe_drop(_match_x2815, _ctx);
      zi = i; /*int*/
    }
    else {
      kk_std_core_types__maybe _match_x2816;
      kk_string_t _x_x3961 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x3962;
      kk_define_string_literal(static, _s_x3963, 1, "z", _ctx)
      _x_x3962 = kk_string_dup(_s_x3963, _ctx); /*string*/
      _match_x2816 = kk_std_core_sslice_find(_x_x3961, _x_x3962, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2816, _ctx)) {
        kk_box_t _box_x256 = _match_x2816._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x256, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2816, _ctx);
        kk_std_core_sslice__sslice _x_x3964;
        {
          kk_string_t s_0 = hc____ss_0.str;
          kk_integer_t start_0 = hc____ss_0.start;
          kk_string_dup(s_0, _ctx);
          kk_integer_dup(start_0, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
          _x_x3964 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
        }
        zi = kk_std_core_sslice_count(_x_x3964, _ctx); /*int*/
      }
      else {
        kk_std_core_types__maybe _match_x2817 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2817, _ctx)) {
          kk_box_t _box_x257 = _match_x2817._cons.Just.value;
          kk_integer_t i_0 = kk_integer_unbox(_box_x257, _ctx);
          kk_integer_dup(i_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2817, _ctx);
          zi = i_0; /*int*/
        }
        else {
          zi = kk_integer_from_small(0); /*int*/
        }
      }
    }
  }
  kk_string_t t;
  kk_std_core_types__list _x_x3965;
  kk_std_core_types__list _x_x3966;
  kk_std_core_types__list _x_x3967;
  kk_string_t _x_x3968 = kk_string_dup(rest, _ctx); /*string*/
  _x_x3967 = kk_std_core_string_list(_x_x3968, _ctx); /*list<char>*/
  _x_x3966 = kk_std_core_list_drop(_x_x3967, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x3969;
  kk_integer_t _x_x3970 = kk_integer_dup(zi, _ctx); /*int*/
  _x_x3969 = kk_integer_add_small_const(_x_x3970, 0, _ctx); /*int*/
  _x_x3965 = kk_std_core_list_take(_x_x3966, _x_x3969, _ctx); /*list<10001>*/
  t = kk_std_core_string_listchar_fs_string(_x_x3965, _ctx); /*string*/
  bool _match_x2813 = kk_api_hc__is__valid__time(t, _ctx); /*bool*/;
  if (_match_x2813) {
    kk_string_t _x_x3971;
    kk_std_core_types__list _x_x3972;
    kk_std_core_types__list _x_x3973 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
    _x_x3972 = kk_std_core_list_drop(_x_x3973, zi, _ctx); /*list<10001>*/
    _x_x3971 = kk_std_core_string_listchar_fs_string(_x_x3972, _ctx); /*string*/
    return kk_api_hc__is__valid__offset(_x_x3971, _ctx);
  }
  {
    kk_integer_drop(zi, _ctx);
    kk_string_drop(rest, _ctx);
    return false;
  }
}

bool kk_api_hc__check__numeric__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  bool _match_x2806;
  kk_integer_t _brw_x2811;
  kk_string_t _x_x3974 = kk_string_dup(rest, _ctx); /*string*/
  _brw_x2811 = kk_std_core_string_chars_fs_count(_x_x3974, _ctx); /*int*/
  bool _brw_x2812 = kk_integer_lt_borrow(_brw_x2811,(kk_integer_from_small(11)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2811, _ctx);
  _match_x2806 = _brw_x2812; /*bool*/
  if (_match_x2806) {
    kk_string_drop(rest, _ctx);
    return false;
  }
  {
    kk_integer_t x_10270;
    kk_string_t _x_x3975 = kk_string_dup(rest, _ctx); /*string*/
    x_10270 = kk_std_core_string_chars_fs_count(_x_x3975, _ctx); /*int*/
    kk_integer_t sign__pos = kk_integer_add_small_const(x_10270, -6, _ctx); /*int*/;
    kk_integer_t x_0_10272;
    kk_integer_t _x_x3976 = kk_integer_dup(sign__pos, _ctx); /*int*/
    x_0_10272 = kk_integer_add_small_const(_x_x3976, 1, _ctx); /*int*/
    kk_string_t sign__char;
    kk_std_core_types__list _x_x3977;
    kk_std_core_types__list _x_x3978;
    kk_std_core_types__list _x_x3979;
    kk_string_t _x_x3980 = kk_string_dup(rest, _ctx); /*string*/
    _x_x3979 = kk_std_core_string_list(_x_x3980, _ctx); /*list<char>*/
    kk_integer_t _x_x3981 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x3978 = kk_std_core_list_drop(_x_x3979, _x_x3981, _ctx); /*list<10001>*/
    kk_integer_t _x_x3982;
    kk_integer_t _x_x3983 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x3982 = kk_integer_sub(x_0_10272,_x_x3983,kk_context()); /*int*/
    _x_x3977 = kk_std_core_list_take(_x_x3978, _x_x3982, _ctx); /*list<10001>*/
    sign__char = kk_std_core_string_listchar_fs_string(_x_x3977, _ctx); /*string*/
    bool _match_x2807;
    kk_string_t _x_x3984 = kk_string_dup(sign__char, _ctx); /*string*/
    kk_string_t _x_x3985;
    kk_define_string_literal(static, _s_x3986, 1, "+", _ctx)
    _x_x3985 = kk_string_dup(_s_x3986, _ctx); /*string*/
    _match_x2807 = kk_string_is_neq(_x_x3984,_x_x3985,kk_context()); /*bool*/
    if (_match_x2807) {
      bool _match_x2809;
      kk_string_t _x_x3987;
      kk_define_string_literal(static, _s_x3988, 1, "-", _ctx)
      _x_x3987 = kk_string_dup(_s_x3988, _ctx); /*string*/
      _match_x2809 = kk_string_is_neq(sign__char,_x_x3987,kk_context()); /*bool*/
      if (_match_x2809) {
        kk_integer_drop(sign__pos, _ctx);
        kk_string_drop(rest, _ctx);
        return false;
      }
      {
        kk_string_t t;
        kk_std_core_types__list _x_x3989;
        kk_std_core_types__list _x_x3990;
        kk_std_core_types__list _x_x3991;
        kk_string_t _x_x3992 = kk_string_dup(rest, _ctx); /*string*/
        _x_x3991 = kk_std_core_string_list(_x_x3992, _ctx); /*list<char>*/
        _x_x3990 = kk_std_core_list_drop(_x_x3991, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3993;
        kk_integer_t _x_x3994 = kk_integer_dup(sign__pos, _ctx); /*int*/
        _x_x3993 = kk_integer_add_small_const(_x_x3994, 0, _ctx); /*int*/
        _x_x3989 = kk_std_core_list_take(_x_x3990, _x_x3993, _ctx); /*list<10001>*/
        t = kk_std_core_string_listchar_fs_string(_x_x3989, _ctx); /*string*/
        kk_string_t o;
        kk_std_core_types__list _x_x3995;
        kk_std_core_types__list _x_x3996 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x3995 = kk_std_core_list_drop(_x_x3996, sign__pos, _ctx); /*list<10001>*/
        o = kk_std_core_string_listchar_fs_string(_x_x3995, _ctx); /*string*/
        bool _match_x2810 = kk_api_hc__is__valid__time(t, _ctx); /*bool*/;
        if (_match_x2810) {
          return kk_api_hc__is__valid__offset(o, _ctx);
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
      kk_std_core_types__list _x_x3997;
      kk_std_core_types__list _x_x3998;
      kk_std_core_types__list _x_x3999;
      kk_string_t _x_x4000 = kk_string_dup(rest, _ctx); /*string*/
      _x_x3999 = kk_std_core_string_list(_x_x4000, _ctx); /*list<char>*/
      _x_x3998 = kk_std_core_list_drop(_x_x3999, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4001;
      kk_integer_t _x_x4002 = kk_integer_dup(sign__pos, _ctx); /*int*/
      _x_x4001 = kk_integer_add_small_const(_x_x4002, 0, _ctx); /*int*/
      _x_x3997 = kk_std_core_list_take(_x_x3998, _x_x4001, _ctx); /*list<10001>*/
      t_0 = kk_std_core_string_listchar_fs_string(_x_x3997, _ctx); /*string*/
      kk_string_t o_0;
      kk_std_core_types__list _x_x4003;
      kk_std_core_types__list _x_x4004 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x4003 = kk_std_core_list_drop(_x_x4004, sign__pos, _ctx); /*list<10001>*/
      o_0 = kk_std_core_string_listchar_fs_string(_x_x4003, _ctx); /*string*/
      bool _match_x2808 = kk_api_hc__is__valid__time(t_0, _ctx); /*bool*/;
      if (_match_x2808) {
        return kk_api_hc__is__valid__offset(o_0, _ctx);
      }
      {
        kk_string_drop(o_0, _ctx);
        return false;
      }
    }
  }
}

bool kk_api_hc__is__iso__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2794;
  kk_integer_t _brw_x2804;
  kk_string_t _x_x4005 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2804 = kk_std_core_string_chars_fs_count(_x_x4005, _ctx); /*int*/
  bool _brw_x2805 = kk_integer_lt_borrow(_brw_x2804,(kk_integer_from_small(17)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2804, _ctx);
  _match_x2794 = _brw_x2805; /*bool*/
  if (_match_x2794) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4006;
    kk_std_core_types__list _x_x4007;
    kk_std_core_types__list _x_x4008;
    kk_string_t _x_x4009 = kk_string_dup(s, _ctx); /*string*/
    _x_x4008 = kk_std_core_string_list(_x_x4009, _ctx); /*list<char>*/
    _x_x4007 = kk_std_core_list_drop(_x_x4008, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4010 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4006 = kk_std_core_list_take(_x_x4007, _x_x4010, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4006, _ctx); /*string*/
    bool _match_x2795;
    kk_string_t _x_x4011 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4012;
    kk_define_string_literal(static, _s_x4013, 1, "T", _ctx)
    _x_x4012 = kk_string_dup(_s_x4013, _ctx); /*string*/
    _match_x2795 = kk_string_is_neq(_x_x4011,_x_x4012,kk_context()); /*bool*/
    if (_match_x2795) {
      bool _match_x2798;
      kk_string_t _x_x4014 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4015;
      kk_define_string_literal(static, _s_x4016, 1, "t", _ctx)
      _x_x4015 = kk_string_dup(_s_x4016, _ctx); /*string*/
      _match_x2798 = kk_string_is_neq(_x_x4014,_x_x4015,kk_context()); /*bool*/
      if (_match_x2798) {
        bool _match_x2801;
        kk_string_t _x_x4017;
        kk_define_string_literal(static, _s_x4018, 1, " ", _ctx)
        _x_x4017 = kk_string_dup(_s_x4018, _ctx); /*string*/
        _match_x2801 = kk_string_is_neq(sep,_x_x4017,kk_context()); /*bool*/
        if (_match_x2801) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool b_10282;
          kk_string_t _x_x4019;
          kk_std_core_types__list _x_x4020;
          kk_std_core_types__list _x_x4021;
          kk_std_core_types__list _x_x4022;
          kk_string_t _x_x4023 = kk_string_dup(s, _ctx); /*string*/
          _x_x4022 = kk_std_core_string_list(_x_x4023, _ctx); /*list<char>*/
          _x_x4021 = kk_std_core_list_drop(_x_x4022, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4024 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
          _x_x4020 = kk_std_core_list_take(_x_x4021, _x_x4024, _ctx); /*list<10001>*/
          _x_x4019 = kk_std_core_string_listchar_fs_string(_x_x4020, _ctx); /*string*/
          b_10282 = kk_api_hc__is__valid__date(_x_x4019, _ctx); /*bool*/
          if (b_10282) {
            kk_string_t rest;
            kk_std_core_types__list _x_x4025;
            kk_std_core_types__list _x_x4026 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x4025 = kk_std_core_list_drop(_x_x4026, kk_integer_from_small(11), _ctx); /*list<10001>*/
            rest = kk_std_core_string_listchar_fs_string(_x_x4025, _ctx); /*string*/
            bool _match_x2802;
            kk_string_t _x_x4027 = kk_string_dup(rest, _ctx); /*string*/
            kk_string_t _x_x4028;
            kk_define_string_literal(static, _s_x4029, 1, "Z", _ctx)
            _x_x4028 = kk_string_dup(_s_x4029, _ctx); /*string*/
            _match_x2802 = kk_string_contains(_x_x4027,_x_x4028,kk_context()); /*bool*/
            if (_match_x2802) {
              return kk_api_hc__check__z__offset(rest, _ctx);
            }
            {
              bool _match_x2803;
              kk_string_t _x_x4030 = kk_string_dup(rest, _ctx); /*string*/
              kk_string_t _x_x4031;
              kk_define_string_literal(static, _s_x4032, 1, "z", _ctx)
              _x_x4031 = kk_string_dup(_s_x4032, _ctx); /*string*/
              _match_x2803 = kk_string_contains(_x_x4030,_x_x4031,kk_context()); /*bool*/
              if (_match_x2803) {
                return kk_api_hc__check__z__offset(rest, _ctx);
              }
              {
                return kk_api_hc__check__numeric__offset(rest, _ctx);
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
        kk_string_t _x_x4033;
        kk_std_core_types__list _x_x4034;
        kk_std_core_types__list _x_x4035;
        kk_std_core_types__list _x_x4036;
        kk_string_t _x_x4037 = kk_string_dup(s, _ctx); /*string*/
        _x_x4036 = kk_std_core_string_list(_x_x4037, _ctx); /*list<char>*/
        _x_x4035 = kk_std_core_list_drop(_x_x4036, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4038 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x4034 = kk_std_core_list_take(_x_x4035, _x_x4038, _ctx); /*list<10001>*/
        _x_x4033 = kk_std_core_string_listchar_fs_string(_x_x4034, _ctx); /*string*/
        b_0_10285 = kk_api_hc__is__valid__date(_x_x4033, _ctx); /*bool*/
        if (b_0_10285) {
          kk_string_t rest_0;
          kk_std_core_types__list _x_x4039;
          kk_std_core_types__list _x_x4040 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4039 = kk_std_core_list_drop(_x_x4040, kk_integer_from_small(11), _ctx); /*list<10001>*/
          rest_0 = kk_std_core_string_listchar_fs_string(_x_x4039, _ctx); /*string*/
          bool _match_x2799;
          kk_string_t _x_x4041 = kk_string_dup(rest_0, _ctx); /*string*/
          kk_string_t _x_x4042;
          kk_define_string_literal(static, _s_x4043, 1, "Z", _ctx)
          _x_x4042 = kk_string_dup(_s_x4043, _ctx); /*string*/
          _match_x2799 = kk_string_contains(_x_x4041,_x_x4042,kk_context()); /*bool*/
          if (_match_x2799) {
            return kk_api_hc__check__z__offset(rest_0, _ctx);
          }
          {
            bool _match_x2800;
            kk_string_t _x_x4044 = kk_string_dup(rest_0, _ctx); /*string*/
            kk_string_t _x_x4045;
            kk_define_string_literal(static, _s_x4046, 1, "z", _ctx)
            _x_x4045 = kk_string_dup(_s_x4046, _ctx); /*string*/
            _match_x2800 = kk_string_contains(_x_x4044,_x_x4045,kk_context()); /*bool*/
            if (_match_x2800) {
              return kk_api_hc__check__z__offset(rest_0, _ctx);
            }
            {
              return kk_api_hc__check__numeric__offset(rest_0, _ctx);
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
      kk_string_t _x_x4047;
      kk_std_core_types__list _x_x4048;
      kk_std_core_types__list _x_x4049;
      kk_std_core_types__list _x_x4050;
      kk_string_t _x_x4051 = kk_string_dup(s, _ctx); /*string*/
      _x_x4050 = kk_std_core_string_list(_x_x4051, _ctx); /*list<char>*/
      _x_x4049 = kk_std_core_list_drop(_x_x4050, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4052 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4048 = kk_std_core_list_take(_x_x4049, _x_x4052, _ctx); /*list<10001>*/
      _x_x4047 = kk_std_core_string_listchar_fs_string(_x_x4048, _ctx); /*string*/
      b_1_10288 = kk_api_hc__is__valid__date(_x_x4047, _ctx); /*bool*/
      if (b_1_10288) {
        kk_string_t rest_1;
        kk_std_core_types__list _x_x4053;
        kk_std_core_types__list _x_x4054 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4053 = kk_std_core_list_drop(_x_x4054, kk_integer_from_small(11), _ctx); /*list<10001>*/
        rest_1 = kk_std_core_string_listchar_fs_string(_x_x4053, _ctx); /*string*/
        bool _match_x2796;
        kk_string_t _x_x4055 = kk_string_dup(rest_1, _ctx); /*string*/
        kk_string_t _x_x4056;
        kk_define_string_literal(static, _s_x4057, 1, "Z", _ctx)
        _x_x4056 = kk_string_dup(_s_x4057, _ctx); /*string*/
        _match_x2796 = kk_string_contains(_x_x4055,_x_x4056,kk_context()); /*bool*/
        if (_match_x2796) {
          return kk_api_hc__check__z__offset(rest_1, _ctx);
        }
        {
          bool _match_x2797;
          kk_string_t _x_x4058 = kk_string_dup(rest_1, _ctx); /*string*/
          kk_string_t _x_x4059;
          kk_define_string_literal(static, _s_x4060, 1, "z", _ctx)
          _x_x4059 = kk_string_dup(_s_x4060, _ctx); /*string*/
          _match_x2797 = kk_string_contains(_x_x4058,_x_x4059,kk_context()); /*bool*/
          if (_match_x2797) {
            return kk_api_hc__check__z__offset(rest_1, _ctx);
          }
          {
            return kk_api_hc__check__numeric__offset(rest_1, _ctx);
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

bool kk_api_hc__is__local__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2785;
  kk_integer_t _brw_x2792;
  kk_string_t _x_x4061 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2792 = kk_std_core_string_chars_fs_count(_x_x4061, _ctx); /*int*/
  bool _brw_x2793 = kk_integer_lt_borrow(_brw_x2792,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2792, _ctx);
  _match_x2785 = _brw_x2793; /*bool*/
  if (_match_x2785) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4062;
    kk_std_core_types__list _x_x4063;
    kk_std_core_types__list _x_x4064;
    kk_string_t _x_x4065 = kk_string_dup(s, _ctx); /*string*/
    _x_x4064 = kk_std_core_string_list(_x_x4065, _ctx); /*list<char>*/
    _x_x4063 = kk_std_core_list_drop(_x_x4064, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4066 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4062 = kk_std_core_list_take(_x_x4063, _x_x4066, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4062, _ctx); /*string*/
    bool _match_x2786;
    kk_string_t _x_x4067 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4068;
    kk_define_string_literal(static, _s_x4069, 1, "T", _ctx)
    _x_x4068 = kk_string_dup(_s_x4069, _ctx); /*string*/
    _match_x2786 = kk_string_is_neq(_x_x4067,_x_x4068,kk_context()); /*bool*/
    if (_match_x2786) {
      bool _match_x2788;
      kk_string_t _x_x4070 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4071;
      kk_define_string_literal(static, _s_x4072, 1, "t", _ctx)
      _x_x4071 = kk_string_dup(_s_x4072, _ctx); /*string*/
      _match_x2788 = kk_string_is_neq(_x_x4070,_x_x4071,kk_context()); /*bool*/
      if (_match_x2788) {
        bool _match_x2790;
        kk_string_t _x_x4073;
        kk_define_string_literal(static, _s_x4074, 1, " ", _ctx)
        _x_x4073 = kk_string_dup(_s_x4074, _ctx); /*string*/
        _match_x2790 = kk_string_is_neq(sep,_x_x4073,kk_context()); /*bool*/
        if (_match_x2790) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool _match_x2791;
          kk_string_t _x_x4075;
          kk_std_core_types__list _x_x4076;
          kk_std_core_types__list _x_x4077;
          kk_std_core_types__list _x_x4078;
          kk_string_t _x_x4079 = kk_string_dup(s, _ctx); /*string*/
          _x_x4078 = kk_std_core_string_list(_x_x4079, _ctx); /*list<char>*/
          _x_x4077 = kk_std_core_list_drop(_x_x4078, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4080 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
          _x_x4076 = kk_std_core_list_take(_x_x4077, _x_x4080, _ctx); /*list<10001>*/
          _x_x4075 = kk_std_core_string_listchar_fs_string(_x_x4076, _ctx); /*string*/
          _match_x2791 = kk_api_hc__is__valid__date(_x_x4075, _ctx); /*bool*/
          if (_match_x2791) {
            kk_string_t _x_x4081;
            kk_std_core_types__list _x_x4082;
            kk_std_core_types__list _x_x4083 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x4082 = kk_std_core_list_drop(_x_x4083, kk_integer_from_small(11), _ctx); /*list<10001>*/
            _x_x4081 = kk_std_core_string_listchar_fs_string(_x_x4082, _ctx); /*string*/
            return kk_api_hc__is__valid__time(_x_x4081, _ctx);
          }
          {
            kk_string_drop(s, _ctx);
            return false;
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        bool _match_x2789;
        kk_string_t _x_x4084;
        kk_std_core_types__list _x_x4085;
        kk_std_core_types__list _x_x4086;
        kk_std_core_types__list _x_x4087;
        kk_string_t _x_x4088 = kk_string_dup(s, _ctx); /*string*/
        _x_x4087 = kk_std_core_string_list(_x_x4088, _ctx); /*list<char>*/
        _x_x4086 = kk_std_core_list_drop(_x_x4087, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4089 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x4085 = kk_std_core_list_take(_x_x4086, _x_x4089, _ctx); /*list<10001>*/
        _x_x4084 = kk_std_core_string_listchar_fs_string(_x_x4085, _ctx); /*string*/
        _match_x2789 = kk_api_hc__is__valid__date(_x_x4084, _ctx); /*bool*/
        if (_match_x2789) {
          kk_string_t _x_x4090;
          kk_std_core_types__list _x_x4091;
          kk_std_core_types__list _x_x4092 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4091 = kk_std_core_list_drop(_x_x4092, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4090 = kk_std_core_string_listchar_fs_string(_x_x4091, _ctx); /*string*/
          return kk_api_hc__is__valid__time(_x_x4090, _ctx);
        }
        {
          kk_string_drop(s, _ctx);
          return false;
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      bool _match_x2787;
      kk_string_t _x_x4093;
      kk_std_core_types__list _x_x4094;
      kk_std_core_types__list _x_x4095;
      kk_std_core_types__list _x_x4096;
      kk_string_t _x_x4097 = kk_string_dup(s, _ctx); /*string*/
      _x_x4096 = kk_std_core_string_list(_x_x4097, _ctx); /*list<char>*/
      _x_x4095 = kk_std_core_list_drop(_x_x4096, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4098 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4094 = kk_std_core_list_take(_x_x4095, _x_x4098, _ctx); /*list<10001>*/
      _x_x4093 = kk_std_core_string_listchar_fs_string(_x_x4094, _ctx); /*string*/
      _match_x2787 = kk_api_hc__is__valid__date(_x_x4093, _ctx); /*bool*/
      if (_match_x2787) {
        kk_string_t _x_x4099;
        kk_std_core_types__list _x_x4100;
        kk_std_core_types__list _x_x4101 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4100 = kk_std_core_list_drop(_x_x4101, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4099 = kk_std_core_string_listchar_fs_string(_x_x4100, _ctx); /*string*/
        return kk_api_hc__is__valid__time(_x_x4099, _ctx);
      }
      {
        kk_string_drop(s, _ctx);
        return false;
      }
    }
  }
}

kk_std_core_types__either kk_api_hc__date__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10299;
  kk_string_t _x_x4102 = kk_string_dup(s, _ctx); /*string*/
  b_10299 = kk_api_hc__is__valid__date(_x_x4102, _ctx); /*bool*/
  if (b_10299) {
    kk_string_t s_0_10300;
    kk_std_core_types__list _x_x4103;
    kk_std_core_types__list _x_x4104;
    kk_std_core_types__list _x_x4105;
    kk_string_t _x_x4106 = kk_string_dup(s, _ctx); /*string*/
    _x_x4105 = kk_std_core_string_list(_x_x4106, _ctx); /*list<char>*/
    _x_x4104 = kk_std_core_list_drop(_x_x4105, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4107 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
    _x_x4103 = kk_std_core_list_take(_x_x4104, _x_x4107, _ctx); /*list<10001>*/
    s_0_10300 = kk_std_core_string_listchar_fs_string(_x_x4103, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2779;
    bool _x_x4108;
    kk_std_core_types__optional _match_x2784 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2784, _ctx)) {
      kk_box_t _box_x258 = _match_x2784._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x258);
      kk_std_core_types__optional_drop(_match_x2784, _ctx);
      _x_x4108 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2784, _ctx);
      _x_x4108 = false; /*bool*/
    }
    _match_x2779 = kk_std_core_int_xparse(s_0_10300, _x_x4108, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2779, _ctx)) {
      kk_box_t _box_x259 = _match_x2779._cons.Just.value;
      kk_integer_t y_0 = kk_integer_unbox(_box_x259, _ctx);
      kk_integer_dup(y_0, _ctx);
      kk_std_core_types__maybe_drop(_match_x2779, _ctx);
      kk_string_t s_1_10304;
      kk_std_core_types__list _x_x4109;
      kk_std_core_types__list _x_x4110;
      kk_std_core_types__list _x_x4111;
      kk_string_t _x_x4112 = kk_string_dup(s, _ctx); /*string*/
      _x_x4111 = kk_std_core_string_list(_x_x4112, _ctx); /*list<char>*/
      _x_x4110 = kk_std_core_list_drop(_x_x4111, kk_integer_from_small(5), _ctx); /*list<10001>*/
      kk_integer_t _x_x4113 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
      _x_x4109 = kk_std_core_list_take(_x_x4110, _x_x4113, _ctx); /*list<10001>*/
      s_1_10304 = kk_std_core_string_listchar_fs_string(_x_x4109, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2780;
      bool _x_x4114;
      kk_std_core_types__optional _match_x2783 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2783, _ctx)) {
        kk_box_t _box_x260 = _match_x2783._cons._Optional.value;
        bool _uniq_hex_581_0 = kk_bool_unbox(_box_x260);
        kk_std_core_types__optional_drop(_match_x2783, _ctx);
        _x_x4114 = _uniq_hex_581_0; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2783, _ctx);
        _x_x4114 = false; /*bool*/
      }
      _match_x2780 = kk_std_core_int_xparse(s_1_10304, _x_x4114, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2780, _ctx)) {
        kk_box_t _box_x261 = _match_x2780._cons.Just.value;
        kk_integer_t m = kk_integer_unbox(_box_x261, _ctx);
        kk_integer_dup(m, _ctx);
        kk_std_core_types__maybe_drop(_match_x2780, _ctx);
        kk_string_t s_2_10308;
        kk_std_core_types__list _x_x4115;
        kk_std_core_types__list _x_x4116;
        kk_std_core_types__list _x_x4117 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4116 = kk_std_core_list_drop(_x_x4117, kk_integer_from_small(8), _ctx); /*list<10001>*/
        kk_integer_t _x_x4118 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
        _x_x4115 = kk_std_core_list_take(_x_x4116, _x_x4118, _ctx); /*list<10001>*/
        s_2_10308 = kk_std_core_string_listchar_fs_string(_x_x4115, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2781;
        bool _x_x4119;
        kk_std_core_types__optional _match_x2782 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2782, _ctx)) {
          kk_box_t _box_x262 = _match_x2782._cons._Optional.value;
          bool _uniq_hex_581_1 = kk_bool_unbox(_box_x262);
          kk_std_core_types__optional_drop(_match_x2782, _ctx);
          _x_x4119 = _uniq_hex_581_1; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2782, _ctx);
          _x_x4119 = false; /*bool*/
        }
        _match_x2781 = kk_std_core_int_xparse(s_2_10308, _x_x4119, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2781, _ctx)) {
          kk_box_t _box_x263 = _match_x2781._cons.Just.value;
          kk_integer_t d = kk_integer_unbox(_box_x263, _ctx);
          kk_integer_dup(d, _ctx);
          kk_std_core_types__maybe_drop(_match_x2781, _ctx);
          kk_box_t _x_x4120;
          kk_std_core_types__tuple3 _x_x4121 = kk_std_core_types__new_Tuple3(kk_integer_box(y_0, _ctx), kk_integer_box(m, _ctx), kk_integer_box(d, _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4120 = kk_std_core_types__tuple3_box(_x_x4121, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4120, _ctx);
        }
        {
          kk_integer_drop(y_0, _ctx);
          kk_integer_drop(m, _ctx);
          kk_box_t _x_x4122;
          kk_string_t _x_x4123;
          kk_define_string_literal(static, _s_x4124, 11, "invalid day", _ctx)
          _x_x4123 = kk_string_dup(_s_x4124, _ctx); /*string*/
          _x_x4122 = kk_string_box(_x_x4123); /*10014*/
          return kk_std_core_types__new_Left(_x_x4122, _ctx);
        }
      }
      {
        kk_integer_drop(y_0, _ctx);
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4125;
        kk_string_t _x_x4126;
        kk_define_string_literal(static, _s_x4127, 13, "invalid month", _ctx)
        _x_x4126 = kk_string_dup(_s_x4127, _ctx); /*string*/
        _x_x4125 = kk_string_box(_x_x4126); /*10014*/
        return kk_std_core_types__new_Left(_x_x4125, _ctx);
      }
    }
    {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4128;
      kk_string_t _x_x4129;
      kk_define_string_literal(static, _s_x4130, 12, "invalid year", _ctx)
      _x_x4129 = kk_string_dup(_s_x4130, _ctx); /*string*/
      _x_x4128 = kk_string_box(_x_x4129); /*10014*/
      return kk_std_core_types__new_Left(_x_x4128, _ctx);
    }
  }
  {
    kk_string_t _b_x271_279;
    kk_string_t _x_x4131;
    kk_define_string_literal(static, _s_x4132, 14, "invalid date: ", _ctx)
    _x_x4131 = kk_string_dup(_s_x4132, _ctx); /*string*/
    _b_x271_279 = kk_std_core_types__lp__plus__plus__rp_(_x_x4131, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x271_279), _ctx);
  }
}

kk_std_core_types__either kk_api_hc__time__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10312;
  kk_string_t _x_x4133 = kk_string_dup(s, _ctx); /*string*/
  b_10312 = kk_api_hc__is__valid__time(_x_x4133, _ctx); /*bool*/
  if (b_10312) {
    bool _match_x2766;
    kk_integer_t _brw_x2777;
    kk_string_t _x_x4134 = kk_string_dup(s, _ctx); /*string*/
    _brw_x2777 = kk_std_core_string_chars_fs_count(_x_x4134, _ctx); /*int*/
    bool _brw_x2778 = kk_integer_eq_borrow(_brw_x2777,(kk_integer_from_small(5)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2777, _ctx);
    _match_x2766 = _brw_x2778; /*bool*/
    if (_match_x2766) {
      kk_string_t s_0_10313;
      kk_std_core_types__list _x_x4135;
      kk_std_core_types__list _x_x4136;
      kk_std_core_types__list _x_x4137;
      kk_string_t _x_x4138 = kk_string_dup(s, _ctx); /*string*/
      _x_x4137 = kk_std_core_string_list(_x_x4138, _ctx); /*list<char>*/
      _x_x4136 = kk_std_core_list_drop(_x_x4137, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4139 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4135 = kk_std_core_list_take(_x_x4136, _x_x4139, _ctx); /*list<10001>*/
      s_0_10313 = kk_std_core_string_listchar_fs_string(_x_x4135, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2773;
      bool _x_x4140;
      kk_std_core_types__optional _match_x2776 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2776, _ctx)) {
        kk_box_t _box_x280 = _match_x2776._cons._Optional.value;
        bool _uniq_hex_581 = kk_bool_unbox(_box_x280);
        kk_std_core_types__optional_drop(_match_x2776, _ctx);
        _x_x4140 = _uniq_hex_581; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2776, _ctx);
        _x_x4140 = false; /*bool*/
      }
      _match_x2773 = kk_std_core_int_xparse(s_0_10313, _x_x4140, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2773, _ctx)) {
        kk_box_t _box_x281 = _match_x2773._cons.Just.value;
        kk_integer_t h = kk_integer_unbox(_box_x281, _ctx);
        kk_integer_dup(h, _ctx);
        kk_std_core_types__maybe_drop(_match_x2773, _ctx);
        kk_string_t s_1_10317;
        kk_std_core_types__list _x_x4141;
        kk_std_core_types__list _x_x4142;
        kk_std_core_types__list _x_x4143 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4142 = kk_std_core_list_drop(_x_x4143, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4144 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4141 = kk_std_core_list_take(_x_x4142, _x_x4144, _ctx); /*list<10001>*/
        s_1_10317 = kk_std_core_string_listchar_fs_string(_x_x4141, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2774;
        bool _x_x4145;
        kk_std_core_types__optional _match_x2775 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2775, _ctx)) {
          kk_box_t _box_x282 = _match_x2775._cons._Optional.value;
          bool _uniq_hex_581_0 = kk_bool_unbox(_box_x282);
          kk_std_core_types__optional_drop(_match_x2775, _ctx);
          _x_x4145 = _uniq_hex_581_0; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2775, _ctx);
          _x_x4145 = false; /*bool*/
        }
        _match_x2774 = kk_std_core_int_xparse(s_1_10317, _x_x4145, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2774, _ctx)) {
          kk_box_t _box_x283 = _match_x2774._cons.Just.value;
          kk_integer_t m = kk_integer_unbox(_box_x283, _ctx);
          kk_integer_dup(m, _ctx);
          kk_std_core_types__maybe_drop(_match_x2774, _ctx);
          kk_box_t _x_x4146;
          kk_std_core_types__tuple3 _x_x4147 = kk_std_core_types__new_Tuple3(kk_integer_box(h, _ctx), kk_integer_box(m, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4146 = kk_std_core_types__tuple3_box(_x_x4147, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4146, _ctx);
        }
        {
          kk_integer_drop(h, _ctx);
          kk_box_t _x_x4148;
          kk_string_t _x_x4149;
          kk_define_string_literal(static, _s_x4150, 14, "invalid minute", _ctx)
          _x_x4149 = kk_string_dup(_s_x4150, _ctx); /*string*/
          _x_x4148 = kk_string_box(_x_x4149); /*10014*/
          return kk_std_core_types__new_Left(_x_x4148, _ctx);
        }
      }
      {
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4151;
        kk_string_t _x_x4152;
        kk_define_string_literal(static, _s_x4153, 12, "invalid hour", _ctx)
        _x_x4152 = kk_string_dup(_s_x4153, _ctx); /*string*/
        _x_x4151 = kk_string_box(_x_x4152); /*10014*/
        return kk_std_core_types__new_Left(_x_x4151, _ctx);
      }
    }
    {
      kk_string_t s_2_10321;
      kk_std_core_types__list _x_x4154;
      kk_std_core_types__list _x_x4155;
      kk_std_core_types__list _x_x4156;
      kk_string_t _x_x4157 = kk_string_dup(s, _ctx); /*string*/
      _x_x4156 = kk_std_core_string_list(_x_x4157, _ctx); /*list<char>*/
      _x_x4155 = kk_std_core_list_drop(_x_x4156, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4158 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4154 = kk_std_core_list_take(_x_x4155, _x_x4158, _ctx); /*list<10001>*/
      s_2_10321 = kk_std_core_string_listchar_fs_string(_x_x4154, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2767;
      bool _x_x4159;
      kk_std_core_types__optional _match_x2772 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2772, _ctx)) {
        kk_box_t _box_x290 = _match_x2772._cons._Optional.value;
        bool _uniq_hex_581_1 = kk_bool_unbox(_box_x290);
        kk_std_core_types__optional_drop(_match_x2772, _ctx);
        _x_x4159 = _uniq_hex_581_1; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2772, _ctx);
        _x_x4159 = false; /*bool*/
      }
      _match_x2767 = kk_std_core_int_xparse(s_2_10321, _x_x4159, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2767, _ctx)) {
        kk_box_t _box_x291 = _match_x2767._cons.Just.value;
        kk_integer_t h_0 = kk_integer_unbox(_box_x291, _ctx);
        kk_integer_dup(h_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2767, _ctx);
        kk_string_t s_3_10325;
        kk_std_core_types__list _x_x4160;
        kk_std_core_types__list _x_x4161;
        kk_std_core_types__list _x_x4162;
        kk_string_t _x_x4163 = kk_string_dup(s, _ctx); /*string*/
        _x_x4162 = kk_std_core_string_list(_x_x4163, _ctx); /*list<char>*/
        _x_x4161 = kk_std_core_list_drop(_x_x4162, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4164 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4160 = kk_std_core_list_take(_x_x4161, _x_x4164, _ctx); /*list<10001>*/
        s_3_10325 = kk_std_core_string_listchar_fs_string(_x_x4160, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2768;
        bool _x_x4165;
        kk_std_core_types__optional _match_x2771 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2771, _ctx)) {
          kk_box_t _box_x292 = _match_x2771._cons._Optional.value;
          bool _uniq_hex_581_2 = kk_bool_unbox(_box_x292);
          kk_std_core_types__optional_drop(_match_x2771, _ctx);
          _x_x4165 = _uniq_hex_581_2; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2771, _ctx);
          _x_x4165 = false; /*bool*/
        }
        _match_x2768 = kk_std_core_int_xparse(s_3_10325, _x_x4165, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2768, _ctx)) {
          kk_box_t _box_x293 = _match_x2768._cons.Just.value;
          kk_integer_t m_0 = kk_integer_unbox(_box_x293, _ctx);
          kk_integer_dup(m_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2768, _ctx);
          kk_string_t s_4_10329;
          kk_std_core_types__list _x_x4166;
          kk_std_core_types__list _x_x4167;
          kk_std_core_types__list _x_x4168 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4167 = kk_std_core_list_drop(_x_x4168, kk_integer_from_small(6), _ctx); /*list<10001>*/
          kk_integer_t _x_x4169 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
          _x_x4166 = kk_std_core_list_take(_x_x4167, _x_x4169, _ctx); /*list<10001>*/
          s_4_10329 = kk_std_core_string_listchar_fs_string(_x_x4166, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2769;
          bool _x_x4170;
          kk_std_core_types__optional _match_x2770 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2770, _ctx)) {
            kk_box_t _box_x294 = _match_x2770._cons._Optional.value;
            bool _uniq_hex_581_3 = kk_bool_unbox(_box_x294);
            kk_std_core_types__optional_drop(_match_x2770, _ctx);
            _x_x4170 = _uniq_hex_581_3; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2770, _ctx);
            _x_x4170 = false; /*bool*/
          }
          _match_x2769 = kk_std_core_int_xparse(s_4_10329, _x_x4170, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2769, _ctx)) {
            kk_box_t _box_x295 = _match_x2769._cons.Just.value;
            kk_integer_t sec = kk_integer_unbox(_box_x295, _ctx);
            kk_integer_dup(sec, _ctx);
            kk_std_core_types__maybe_drop(_match_x2769, _ctx);
            kk_box_t _x_x4171;
            kk_std_core_types__tuple3 _x_x4172 = kk_std_core_types__new_Tuple3(kk_integer_box(h_0, _ctx), kk_integer_box(m_0, _ctx), kk_integer_box(sec, _ctx), _ctx); /*(10041, 10042, 10043)*/
            _x_x4171 = kk_std_core_types__tuple3_box(_x_x4172, _ctx); /*10015*/
            return kk_std_core_types__new_Right(_x_x4171, _ctx);
          }
          {
            kk_integer_drop(m_0, _ctx);
            kk_integer_drop(h_0, _ctx);
            kk_box_t _x_x4173;
            kk_string_t _x_x4174;
            kk_define_string_literal(static, _s_x4175, 14, "invalid second", _ctx)
            _x_x4174 = kk_string_dup(_s_x4175, _ctx); /*string*/
            _x_x4173 = kk_string_box(_x_x4174); /*10014*/
            return kk_std_core_types__new_Left(_x_x4173, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(h_0, _ctx);
          kk_box_t _x_x4176;
          kk_string_t _x_x4177;
          kk_define_string_literal(static, _s_x4178, 14, "invalid minute", _ctx)
          _x_x4177 = kk_string_dup(_s_x4178, _ctx); /*string*/
          _x_x4176 = kk_string_box(_x_x4177); /*10014*/
          return kk_std_core_types__new_Left(_x_x4176, _ctx);
        }
      }
      {
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4179;
        kk_string_t _x_x4180;
        kk_define_string_literal(static, _s_x4181, 12, "invalid hour", _ctx)
        _x_x4180 = kk_string_dup(_s_x4181, _ctx); /*string*/
        _x_x4179 = kk_string_box(_x_x4180); /*10014*/
        return kk_std_core_types__new_Left(_x_x4179, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x303_317;
    kk_string_t _x_x4182;
    kk_define_string_literal(static, _s_x4183, 14, "invalid time: ", _ctx)
    _x_x4182 = kk_string_dup(_s_x4183, _ctx); /*string*/
    _b_x303_317 = kk_std_core_types__lp__plus__plus__rp_(_x_x4182, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x303_317), _ctx);
  }
}

kk_std_core_types__either kk_api_hc__datetime__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2762;
  kk_integer_t _brw_x2764;
  kk_string_t _x_x4184 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2764 = kk_std_core_string_chars_fs_count(_x_x4184, _ctx); /*int*/
  bool _brw_x2765 = kk_integer_gte_borrow(_brw_x2764,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2764, _ctx);
  _match_x2762 = _brw_x2765; /*bool*/
  if (_match_x2762) {
    bool _match_x2763;
    kk_string_t _x_x4185;
    kk_std_core_types__list _x_x4186;
    kk_std_core_types__list _x_x4187;
    kk_std_core_types__list _x_x4188;
    kk_string_t _x_x4189 = kk_string_dup(s, _ctx); /*string*/
    _x_x4188 = kk_std_core_string_list(_x_x4189, _ctx); /*list<char>*/
    _x_x4187 = kk_std_core_list_drop(_x_x4188, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4190 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
    _x_x4186 = kk_std_core_list_take(_x_x4187, _x_x4190, _ctx); /*list<10001>*/
    _x_x4185 = kk_std_core_string_listchar_fs_string(_x_x4186, _ctx); /*string*/
    _match_x2763 = kk_api_hc__is__valid__date(_x_x4185, _ctx); /*bool*/
    if (_match_x2763) {
      kk_string_t _b_x318_321;
      kk_std_core_types__list _x_x4191;
      kk_std_core_types__list _x_x4192;
      kk_std_core_types__list _x_x4193 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4192 = kk_std_core_list_drop(_x_x4193, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4194 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4191 = kk_std_core_list_take(_x_x4192, _x_x4194, _ctx); /*list<10001>*/
      _b_x318_321 = kk_std_core_string_listchar_fs_string(_x_x4191, _ctx); /*string*/
      return kk_std_core_types__new_Right(kk_string_box(_b_x318_321), _ctx);
    }
    {
      kk_string_t _b_x319_322;
      kk_string_t _x_x4195;
      kk_define_string_literal(static, _s_x4196, 18, "no valid date in: ", _ctx)
      _x_x4195 = kk_string_dup(_s_x4196, _ctx); /*string*/
      _b_x319_322 = kk_std_core_types__lp__plus__plus__rp_(_x_x4195, s, _ctx); /*string*/
      return kk_std_core_types__new_Left(kk_string_box(_b_x319_322), _ctx);
    }
  }
  {
    kk_string_t _b_x320_323;
    kk_string_t _x_x4197;
    kk_define_string_literal(static, _s_x4198, 18, "no valid date in: ", _ctx)
    _x_x4197 = kk_string_dup(_s_x4198, _ctx); /*string*/
    _b_x320_323 = kk_std_core_types__lp__plus__plus__rp_(_x_x4197, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x320_323), _ctx);
  }
}

kk_string_t kk_api_hc__strip__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> string */ 
  bool _match_x2747;
  kk_string_t _x_x4199 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x4200;
  kk_define_string_literal(static, _s_x4201, 1, "Z", _ctx)
  _x_x4200 = kk_string_dup(_s_x4201, _ctx); /*string*/
  _match_x2747 = kk_string_contains(_x_x4199,_x_x4200,kk_context()); /*bool*/
  if (_match_x2747) {
    kk_std_core_types__maybe _match_x2758;
    kk_string_t _x_x4202 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4203;
    kk_define_string_literal(static, _s_x4204, 1, "Z", _ctx)
    _x_x4203 = kk_string_dup(_s_x4204, _ctx); /*string*/
    _match_x2758 = kk_std_core_sslice_find(_x_x4202, _x_x4203, _ctx); /*maybe<sslice/sslice>*/
    if (kk_std_core_types__is_Just(_match_x2758, _ctx)) {
      kk_box_t _box_x324 = _match_x2758._cons.Just.value;
      kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x324, KK_BORROWED, _ctx);
      kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
      kk_std_core_types__maybe_drop(_match_x2758, _ctx);
      kk_integer_t i;
      kk_std_core_sslice__sslice _x_x4205;
      {
        kk_string_t s = hc____ss.str;
        kk_integer_t start = hc____ss.start;
        kk_string_dup(s, _ctx);
        kk_integer_dup(start, _ctx);
        kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
        _x_x4205 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
      }
      i = kk_std_core_sslice_count(_x_x4205, _ctx); /*int*/
      kk_std_core_types__list _x_x4206;
      kk_std_core_types__list _x_x4207;
      kk_std_core_types__list _x_x4208 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x4207 = kk_std_core_list_drop(_x_x4208, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4209 = kk_integer_add_small_const(i, 0, _ctx); /*int*/
      _x_x4206 = kk_std_core_list_take(_x_x4207, _x_x4209, _ctx); /*list<10001>*/
      return kk_std_core_string_listchar_fs_string(_x_x4206, _ctx);
    }
    {
      kk_std_core_types__maybe _match_x2759 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
      if (kk_std_core_types__is_Just(_match_x2759, _ctx)) {
        kk_box_t _box_x325 = _match_x2759._cons.Just.value;
        kk_integer_t i_0 = kk_integer_unbox(_box_x325, _ctx);
        kk_integer_dup(i_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2759, _ctx);
        kk_std_core_types__list _x_x4210;
        kk_std_core_types__list _x_x4211;
        kk_std_core_types__list _x_x4212 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4211 = kk_std_core_list_drop(_x_x4212, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4213 = kk_integer_add_small_const(i_0, 0, _ctx); /*int*/
        _x_x4210 = kk_std_core_list_take(_x_x4211, _x_x4213, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4210, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2760;
        kk_string_t _x_x4214 = kk_string_dup(rest, _ctx); /*string*/
        kk_string_t _x_x4215;
        kk_define_string_literal(static, _s_x4216, 1, "z", _ctx)
        _x_x4215 = kk_string_dup(_s_x4216, _ctx); /*string*/
        _match_x2760 = kk_std_core_sslice_find(_x_x4214, _x_x4215, _ctx); /*maybe<sslice/sslice>*/
        if (kk_std_core_types__is_Just(_match_x2760, _ctx)) {
          kk_box_t _box_x326 = _match_x2760._cons.Just.value;
          kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x326, KK_BORROWED, _ctx);
          kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2760, _ctx);
          kk_integer_t i_0_0;
          kk_std_core_sslice__sslice _x_x4217;
          {
            kk_string_t s_0 = hc____ss_0.str;
            kk_integer_t start_0 = hc____ss_0.start;
            kk_string_dup(s_0, _ctx);
            kk_integer_dup(start_0, _ctx);
            kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
            _x_x4217 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
          }
          i_0_0 = kk_std_core_sslice_count(_x_x4217, _ctx); /*int*/
          kk_std_core_types__list _x_x4218;
          kk_std_core_types__list _x_x4219;
          kk_std_core_types__list _x_x4220 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4219 = kk_std_core_list_drop(_x_x4220, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4221 = kk_integer_add_small_const(i_0_0, 0, _ctx); /*int*/
          _x_x4218 = kk_std_core_list_take(_x_x4219, _x_x4221, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4218, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2761 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
          if (kk_std_core_types__is_Just(_match_x2761, _ctx)) {
            kk_box_t _box_x327 = _match_x2761._cons.Just.value;
            kk_integer_t i_0_1 = kk_integer_unbox(_box_x327, _ctx);
            kk_integer_dup(i_0_1, _ctx);
            kk_std_core_types__maybe_drop(_match_x2761, _ctx);
            kk_std_core_types__list _x_x4222;
            kk_std_core_types__list _x_x4223;
            kk_std_core_types__list _x_x4224 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4223 = kk_std_core_list_drop(_x_x4224, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4225 = kk_integer_add_small_const(i_0_1, 0, _ctx); /*int*/
            _x_x4222 = kk_std_core_list_take(_x_x4223, _x_x4225, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4222, _ctx);
          }
          {
            return rest;
          }
        }
      }
    }
  }
  {
    bool _match_x2748;
    kk_string_t _x_x4226 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4227;
    kk_define_string_literal(static, _s_x4228, 1, "z", _ctx)
    _x_x4227 = kk_string_dup(_s_x4228, _ctx); /*string*/
    _match_x2748 = kk_string_contains(_x_x4226,_x_x4227,kk_context()); /*bool*/
    if (_match_x2748) {
      kk_std_core_types__maybe _match_x2754;
      kk_string_t _x_x4229 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x4230;
      kk_define_string_literal(static, _s_x4231, 1, "Z", _ctx)
      _x_x4230 = kk_string_dup(_s_x4231, _ctx); /*string*/
      _match_x2754 = kk_std_core_sslice_find(_x_x4229, _x_x4230, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2754, _ctx)) {
        kk_box_t _box_x328 = _match_x2754._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_1 = kk_std_core_sslice__sslice_unbox(_box_x328, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_1, _ctx);
        kk_std_core_types__maybe_drop(_match_x2754, _ctx);
        kk_integer_t i_1;
        kk_std_core_sslice__sslice _x_x4232;
        {
          kk_string_t s_1 = hc____ss_1.str;
          kk_integer_t start_1 = hc____ss_1.start;
          kk_string_dup(s_1, _ctx);
          kk_integer_dup(start_1, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_1, _ctx);
          _x_x4232 = kk_std_core_sslice__new_Sslice(s_1, kk_integer_from_small(0), start_1, _ctx); /*sslice/sslice*/
        }
        i_1 = kk_std_core_sslice_count(_x_x4232, _ctx); /*int*/
        kk_std_core_types__list _x_x4233;
        kk_std_core_types__list _x_x4234;
        kk_std_core_types__list _x_x4235 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4234 = kk_std_core_list_drop(_x_x4235, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4236 = kk_integer_add_small_const(i_1, 0, _ctx); /*int*/
        _x_x4233 = kk_std_core_list_take(_x_x4234, _x_x4236, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4233, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2755 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2755, _ctx)) {
          kk_box_t _box_x329 = _match_x2755._cons.Just.value;
          kk_integer_t i_2 = kk_integer_unbox(_box_x329, _ctx);
          kk_integer_dup(i_2, _ctx);
          kk_std_core_types__maybe_drop(_match_x2755, _ctx);
          kk_std_core_types__list _x_x4237;
          kk_std_core_types__list _x_x4238;
          kk_std_core_types__list _x_x4239 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4238 = kk_std_core_list_drop(_x_x4239, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4240 = kk_integer_add_small_const(i_2, 0, _ctx); /*int*/
          _x_x4237 = kk_std_core_list_take(_x_x4238, _x_x4240, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4237, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2756;
          kk_string_t _x_x4241 = kk_string_dup(rest, _ctx); /*string*/
          kk_string_t _x_x4242;
          kk_define_string_literal(static, _s_x4243, 1, "z", _ctx)
          _x_x4242 = kk_string_dup(_s_x4243, _ctx); /*string*/
          _match_x2756 = kk_std_core_sslice_find(_x_x4241, _x_x4242, _ctx); /*maybe<sslice/sslice>*/
          if (kk_std_core_types__is_Just(_match_x2756, _ctx)) {
            kk_box_t _box_x330 = _match_x2756._cons.Just.value;
            kk_std_core_sslice__sslice hc____ss_0_0 = kk_std_core_sslice__sslice_unbox(_box_x330, KK_BORROWED, _ctx);
            kk_std_core_sslice__sslice_dup(hc____ss_0_0, _ctx);
            kk_std_core_types__maybe_drop(_match_x2756, _ctx);
            kk_integer_t i_0_2;
            kk_std_core_sslice__sslice _x_x4244;
            {
              kk_string_t s_2 = hc____ss_0_0.str;
              kk_integer_t start_2 = hc____ss_0_0.start;
              kk_string_dup(s_2, _ctx);
              kk_integer_dup(start_2, _ctx);
              kk_std_core_sslice__sslice_drop(hc____ss_0_0, _ctx);
              _x_x4244 = kk_std_core_sslice__new_Sslice(s_2, kk_integer_from_small(0), start_2, _ctx); /*sslice/sslice*/
            }
            i_0_2 = kk_std_core_sslice_count(_x_x4244, _ctx); /*int*/
            kk_std_core_types__list _x_x4245;
            kk_std_core_types__list _x_x4246;
            kk_std_core_types__list _x_x4247 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4246 = kk_std_core_list_drop(_x_x4247, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4248 = kk_integer_add_small_const(i_0_2, 0, _ctx); /*int*/
            _x_x4245 = kk_std_core_list_take(_x_x4246, _x_x4248, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4245, _ctx);
          }
          {
            kk_std_core_types__maybe _match_x2757 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
            if (kk_std_core_types__is_Just(_match_x2757, _ctx)) {
              kk_box_t _box_x331 = _match_x2757._cons.Just.value;
              kk_integer_t i_0_3 = kk_integer_unbox(_box_x331, _ctx);
              kk_integer_dup(i_0_3, _ctx);
              kk_std_core_types__maybe_drop(_match_x2757, _ctx);
              kk_std_core_types__list _x_x4249;
              kk_std_core_types__list _x_x4250;
              kk_std_core_types__list _x_x4251 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
              _x_x4250 = kk_std_core_list_drop(_x_x4251, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x4252 = kk_integer_add_small_const(i_0_3, 0, _ctx); /*int*/
              _x_x4249 = kk_std_core_list_take(_x_x4250, _x_x4252, _ctx); /*list<10001>*/
              return kk_std_core_string_listchar_fs_string(_x_x4249, _ctx);
            }
            {
              return rest;
            }
          }
        }
      }
    }
    {
      bool _match_x2749;
      kk_integer_t _brw_x2752;
      kk_string_t _x_x4253 = kk_string_dup(rest, _ctx); /*string*/
      _brw_x2752 = kk_std_core_string_chars_fs_count(_x_x4253, _ctx); /*int*/
      bool _brw_x2753 = kk_integer_gte_borrow(_brw_x2752,(kk_integer_from_small(11)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2752, _ctx);
      _match_x2749 = _brw_x2753; /*bool*/
      if (_match_x2749) {
        kk_integer_t x_9_10361;
        kk_string_t _x_x4254 = kk_string_dup(rest, _ctx); /*string*/
        x_9_10361 = kk_std_core_string_chars_fs_count(_x_x4254, _ctx); /*int*/
        kk_integer_t x_8_10359 = kk_integer_add_small_const(x_9_10361, -5, _ctx); /*int*/;
        kk_integer_t x_10_10363;
        kk_string_t _x_x4255 = kk_string_dup(rest, _ctx); /*string*/
        x_10_10363 = kk_std_core_string_chars_fs_count(_x_x4255, _ctx); /*int*/
        kk_integer_t y_8_10360 = kk_integer_add_small_const(x_10_10363, -6, _ctx); /*int*/;
        kk_integer_t x_7_10357;
        kk_string_t _x_x4256 = kk_string_dup(rest, _ctx); /*string*/
        x_7_10357 = kk_std_core_string_chars_fs_count(_x_x4256, _ctx); /*int*/
        bool _match_x2750;
        kk_string_t _x_x4257;
        kk_std_core_types__list _x_x4258;
        kk_std_core_types__list _x_x4259;
        kk_std_core_types__list _x_x4260;
        kk_string_t _x_x4261 = kk_string_dup(rest, _ctx); /*string*/
        _x_x4260 = kk_std_core_string_list(_x_x4261, _ctx); /*list<char>*/
        kk_integer_t _x_x4262 = kk_integer_add_small_const(x_7_10357, -6, _ctx); /*int*/
        _x_x4259 = kk_std_core_list_drop(_x_x4260, _x_x4262, _ctx); /*list<10001>*/
        kk_integer_t _x_x4263 = kk_integer_sub(x_8_10359,y_8_10360,kk_context()); /*int*/
        _x_x4258 = kk_std_core_list_take(_x_x4259, _x_x4263, _ctx); /*list<10001>*/
        _x_x4257 = kk_std_core_string_listchar_fs_string(_x_x4258, _ctx); /*string*/
        kk_string_t _x_x4264;
        kk_define_string_literal(static, _s_x4265, 1, "+", _ctx)
        _x_x4264 = kk_string_dup(_s_x4265, _ctx); /*string*/
        _match_x2750 = kk_string_is_eq(_x_x4257,_x_x4264,kk_context()); /*bool*/
        if (_match_x2750) {
          kk_integer_t x_12_10367;
          kk_string_t _x_x4266 = kk_string_dup(rest, _ctx); /*string*/
          x_12_10367 = kk_std_core_string_chars_fs_count(_x_x4266, _ctx); /*int*/
          kk_integer_t x_11_10365 = kk_integer_add_small_const(x_12_10367, -6, _ctx); /*int*/;
          kk_std_core_types__list _x_x4267;
          kk_std_core_types__list _x_x4268;
          kk_std_core_types__list _x_x4269 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4268 = kk_std_core_list_drop(_x_x4269, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4270 = kk_integer_add_small_const(x_11_10365, 0, _ctx); /*int*/
          _x_x4267 = kk_std_core_list_take(_x_x4268, _x_x4270, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4267, _ctx);
        }
        {
          kk_integer_t x_15_10373;
          kk_string_t _x_x4271 = kk_string_dup(rest, _ctx); /*string*/
          x_15_10373 = kk_std_core_string_chars_fs_count(_x_x4271, _ctx); /*int*/
          kk_integer_t x_14_10371 = kk_integer_add_small_const(x_15_10373, -5, _ctx); /*int*/;
          kk_integer_t x_16_10375;
          kk_string_t _x_x4272 = kk_string_dup(rest, _ctx); /*string*/
          x_16_10375 = kk_std_core_string_chars_fs_count(_x_x4272, _ctx); /*int*/
          kk_integer_t y_14_10372 = kk_integer_add_small_const(x_16_10375, -6, _ctx); /*int*/;
          kk_integer_t x_13_10369;
          kk_string_t _x_x4273 = kk_string_dup(rest, _ctx); /*string*/
          x_13_10369 = kk_std_core_string_chars_fs_count(_x_x4273, _ctx); /*int*/
          bool _match_x2751;
          kk_string_t _x_x4274;
          kk_std_core_types__list _x_x4275;
          kk_std_core_types__list _x_x4276;
          kk_std_core_types__list _x_x4277;
          kk_string_t _x_x4278 = kk_string_dup(rest, _ctx); /*string*/
          _x_x4277 = kk_std_core_string_list(_x_x4278, _ctx); /*list<char>*/
          kk_integer_t _x_x4279 = kk_integer_add_small_const(x_13_10369, -6, _ctx); /*int*/
          _x_x4276 = kk_std_core_list_drop(_x_x4277, _x_x4279, _ctx); /*list<10001>*/
          kk_integer_t _x_x4280 = kk_integer_sub(x_14_10371,y_14_10372,kk_context()); /*int*/
          _x_x4275 = kk_std_core_list_take(_x_x4276, _x_x4280, _ctx); /*list<10001>*/
          _x_x4274 = kk_std_core_string_listchar_fs_string(_x_x4275, _ctx); /*string*/
          kk_string_t _x_x4281;
          kk_define_string_literal(static, _s_x4282, 1, "-", _ctx)
          _x_x4281 = kk_string_dup(_s_x4282, _ctx); /*string*/
          _match_x2751 = kk_string_is_eq(_x_x4274,_x_x4281,kk_context()); /*bool*/
          if (_match_x2751) {
            kk_integer_t x_18_10379;
            kk_string_t _x_x4283 = kk_string_dup(rest, _ctx); /*string*/
            x_18_10379 = kk_std_core_string_chars_fs_count(_x_x4283, _ctx); /*int*/
            kk_integer_t x_17_10377 = kk_integer_add_small_const(x_18_10379, -6, _ctx); /*int*/;
            kk_std_core_types__list _x_x4284;
            kk_std_core_types__list _x_x4285;
            kk_std_core_types__list _x_x4286 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4285 = kk_std_core_list_drop(_x_x4286, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4287 = kk_integer_add_small_const(x_17_10377, 0, _ctx); /*int*/
            _x_x4284 = kk_std_core_list_take(_x_x4285, _x_x4287, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4284, _ctx);
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

kk_std_core_types__either kk_api_hc__datetime__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2738;
  kk_integer_t _brw_x2745;
  kk_string_t _x_x4288 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2745 = kk_std_core_string_chars_fs_count(_x_x4288, _ctx); /*int*/
  bool _brw_x2746 = kk_integer_lt_borrow(_brw_x2745,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2745, _ctx);
  _match_x2738 = _brw_x2746; /*bool*/
  if (_match_x2738) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4289;
    kk_string_t _x_x4290;
    kk_define_string_literal(static, _s_x4291, 29, "string too short for datetime", _ctx)
    _x_x4290 = kk_string_dup(_s_x4291, _ctx); /*string*/
    _x_x4289 = kk_string_box(_x_x4290); /*10014*/
    return kk_std_core_types__new_Left(_x_x4289, _ctx);
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4292;
    kk_std_core_types__list _x_x4293;
    kk_std_core_types__list _x_x4294;
    kk_string_t _x_x4295 = kk_string_dup(s, _ctx); /*string*/
    _x_x4294 = kk_std_core_string_list(_x_x4295, _ctx); /*list<char>*/
    _x_x4293 = kk_std_core_list_drop(_x_x4294, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4296 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4292 = kk_std_core_list_take(_x_x4293, _x_x4296, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4292, _ctx); /*string*/
    bool _match_x2739;
    kk_string_t _x_x4297 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4298;
    kk_define_string_literal(static, _s_x4299, 1, "T", _ctx)
    _x_x4298 = kk_string_dup(_s_x4299, _ctx); /*string*/
    _match_x2739 = kk_string_is_neq(_x_x4297,_x_x4298,kk_context()); /*bool*/
    if (_match_x2739) {
      bool _match_x2741;
      kk_string_t _x_x4300 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4301;
      kk_define_string_literal(static, _s_x4302, 1, "t", _ctx)
      _x_x4301 = kk_string_dup(_s_x4302, _ctx); /*string*/
      _match_x2741 = kk_string_is_neq(_x_x4300,_x_x4301,kk_context()); /*bool*/
      if (_match_x2741) {
        bool _match_x2743;
        kk_string_t _x_x4303;
        kk_define_string_literal(static, _s_x4304, 1, " ", _ctx)
        _x_x4303 = kk_string_dup(_s_x4304, _ctx); /*string*/
        _match_x2743 = kk_string_is_neq(sep,_x_x4303,kk_context()); /*bool*/
        if (_match_x2743) {
          kk_string_drop(s, _ctx);
          kk_box_t _x_x4305;
          kk_string_t _x_x4306;
          kk_define_string_literal(static, _s_x4307, 27, "no datetime separator found", _ctx)
          _x_x4306 = kk_string_dup(_s_x4307, _ctx); /*string*/
          _x_x4305 = kk_string_box(_x_x4306); /*10014*/
          return kk_std_core_types__new_Left(_x_x4305, _ctx);
        }
        {
          kk_string_t time__part;
          kk_string_t _x_x4308;
          kk_std_core_types__list _x_x4309;
          kk_std_core_types__list _x_x4310 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4309 = kk_std_core_list_drop(_x_x4310, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4308 = kk_std_core_string_listchar_fs_string(_x_x4309, _ctx); /*string*/
          time__part = kk_api_hc__strip__offset(_x_x4308, _ctx); /*string*/
          bool _match_x2744;
          kk_string_t _x_x4311 = kk_string_dup(time__part, _ctx); /*string*/
          _match_x2744 = kk_api_hc__is__valid__time(_x_x4311, _ctx); /*bool*/
          if (_match_x2744) {
            return kk_std_core_types__new_Right(kk_string_box(time__part), _ctx);
          }
          {
            kk_string_drop(time__part, _ctx);
            kk_box_t _x_x4312;
            kk_string_t _x_x4313;
            kk_define_string_literal(static, _s_x4314, 20, "invalid time portion", _ctx)
            _x_x4313 = kk_string_dup(_s_x4314, _ctx); /*string*/
            _x_x4312 = kk_string_box(_x_x4313); /*10014*/
            return kk_std_core_types__new_Left(_x_x4312, _ctx);
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        kk_string_t time__part_0;
        kk_string_t _x_x4315;
        kk_std_core_types__list _x_x4316;
        kk_std_core_types__list _x_x4317 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4316 = kk_std_core_list_drop(_x_x4317, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4315 = kk_std_core_string_listchar_fs_string(_x_x4316, _ctx); /*string*/
        time__part_0 = kk_api_hc__strip__offset(_x_x4315, _ctx); /*string*/
        bool _match_x2742;
        kk_string_t _x_x4318 = kk_string_dup(time__part_0, _ctx); /*string*/
        _match_x2742 = kk_api_hc__is__valid__time(_x_x4318, _ctx); /*bool*/
        if (_match_x2742) {
          return kk_std_core_types__new_Right(kk_string_box(time__part_0), _ctx);
        }
        {
          kk_string_drop(time__part_0, _ctx);
          kk_box_t _x_x4319;
          kk_string_t _x_x4320;
          kk_define_string_literal(static, _s_x4321, 20, "invalid time portion", _ctx)
          _x_x4320 = kk_string_dup(_s_x4321, _ctx); /*string*/
          _x_x4319 = kk_string_box(_x_x4320); /*10014*/
          return kk_std_core_types__new_Left(_x_x4319, _ctx);
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      kk_string_t time__part_1;
      kk_string_t _x_x4322;
      kk_std_core_types__list _x_x4323;
      kk_std_core_types__list _x_x4324 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4323 = kk_std_core_list_drop(_x_x4324, kk_integer_from_small(11), _ctx); /*list<10001>*/
      _x_x4322 = kk_std_core_string_listchar_fs_string(_x_x4323, _ctx); /*string*/
      time__part_1 = kk_api_hc__strip__offset(_x_x4322, _ctx); /*string*/
      bool _match_x2740;
      kk_string_t _x_x4325 = kk_string_dup(time__part_1, _ctx); /*string*/
      _match_x2740 = kk_api_hc__is__valid__time(_x_x4325, _ctx); /*bool*/
      if (_match_x2740) {
        return kk_std_core_types__new_Right(kk_string_box(time__part_1), _ctx);
      }
      {
        kk_string_drop(time__part_1, _ctx);
        kk_box_t _x_x4326;
        kk_string_t _x_x4327;
        kk_define_string_literal(static, _s_x4328, 20, "invalid time portion", _ctx)
        _x_x4327 = kk_string_dup(_s_x4328, _ctx); /*string*/
        _x_x4326 = kk_string_box(_x_x4327); /*10014*/
        return kk_std_core_types__new_Left(_x_x4326, _ctx);
      }
    }
  }
}

kk_std_core_types__maybe kk_api_hc__datetime__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> maybe<string> */ 
  bool _match_x2729;
  kk_string_t _x_x4329 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4330;
  kk_define_string_literal(static, _s_x4331, 1, "Z", _ctx)
  _x_x4330 = kk_string_dup(_s_x4331, _ctx); /*string*/
  _match_x2729 = kk_string_contains(_x_x4329,_x_x4330,kk_context()); /*bool*/
  if (_match_x2729) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4332;
    kk_string_t _x_x4333;
    kk_define_string_literal(static, _s_x4334, 1, "Z", _ctx)
    _x_x4333 = kk_string_dup(_s_x4334, _ctx); /*string*/
    _x_x4332 = kk_string_box(_x_x4333); /*10024*/
    return kk_std_core_types__new_Just(_x_x4332, _ctx);
  }
  {
    bool _match_x2730;
    kk_string_t _x_x4335 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4336;
    kk_define_string_literal(static, _s_x4337, 1, "z", _ctx)
    _x_x4336 = kk_string_dup(_s_x4337, _ctx); /*string*/
    _match_x2730 = kk_string_contains(_x_x4335,_x_x4336,kk_context()); /*bool*/
    if (_match_x2730) {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4338;
      kk_string_t _x_x4339;
      kk_define_string_literal(static, _s_x4340, 1, "Z", _ctx)
      _x_x4339 = kk_string_dup(_s_x4340, _ctx); /*string*/
      _x_x4338 = kk_string_box(_x_x4339); /*10024*/
      return kk_std_core_types__new_Just(_x_x4338, _ctx);
    }
    {
      bool _match_x2731;
      kk_integer_t _brw_x2736;
      kk_string_t _x_x4341 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2736 = kk_std_core_string_chars_fs_count(_x_x4341, _ctx); /*int*/
      bool _brw_x2737 = kk_integer_gte_borrow(_brw_x2736,(kk_integer_from_small(22)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2736, _ctx);
      _match_x2731 = _brw_x2737; /*bool*/
      if (_match_x2731) {
        kk_integer_t x_1_10387;
        kk_string_t _x_x4342 = kk_string_dup(s, _ctx); /*string*/
        x_1_10387 = kk_std_core_string_chars_fs_count(_x_x4342, _ctx); /*int*/
        kk_integer_t x_0_10385 = kk_integer_add_small_const(x_1_10387, -5, _ctx); /*int*/;
        kk_integer_t x_2_10389;
        kk_string_t _x_x4343 = kk_string_dup(s, _ctx); /*string*/
        x_2_10389 = kk_std_core_string_chars_fs_count(_x_x4343, _ctx); /*int*/
        kk_integer_t y_0_10386 = kk_integer_add_small_const(x_2_10389, -6, _ctx); /*int*/;
        kk_integer_t x_10383;
        kk_string_t _x_x4344 = kk_string_dup(s, _ctx); /*string*/
        x_10383 = kk_std_core_string_chars_fs_count(_x_x4344, _ctx); /*int*/
        bool _match_x2732;
        kk_string_t _x_x4345;
        kk_std_core_types__list _x_x4346;
        kk_std_core_types__list _x_x4347;
        kk_std_core_types__list _x_x4348;
        kk_string_t _x_x4349 = kk_string_dup(s, _ctx); /*string*/
        _x_x4348 = kk_std_core_string_list(_x_x4349, _ctx); /*list<char>*/
        kk_integer_t _x_x4350 = kk_integer_add_small_const(x_10383, -6, _ctx); /*int*/
        _x_x4347 = kk_std_core_list_drop(_x_x4348, _x_x4350, _ctx); /*list<10001>*/
        kk_integer_t _x_x4351 = kk_integer_sub(x_0_10385,y_0_10386,kk_context()); /*int*/
        _x_x4346 = kk_std_core_list_take(_x_x4347, _x_x4351, _ctx); /*list<10001>*/
        _x_x4345 = kk_std_core_string_listchar_fs_string(_x_x4346, _ctx); /*string*/
        kk_string_t _x_x4352;
        kk_define_string_literal(static, _s_x4353, 1, "+", _ctx)
        _x_x4352 = kk_string_dup(_s_x4353, _ctx); /*string*/
        _match_x2732 = kk_string_is_eq(_x_x4345,_x_x4352,kk_context()); /*bool*/
        if (_match_x2732) {
          kk_integer_t x_3_10391;
          kk_string_t _x_x4354 = kk_string_dup(s, _ctx); /*string*/
          x_3_10391 = kk_std_core_string_chars_fs_count(_x_x4354, _ctx); /*int*/
          kk_string_t o;
          kk_std_core_types__list _x_x4355;
          kk_std_core_types__list _x_x4356 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          kk_integer_t _x_x4357 = kk_integer_add_small_const(x_3_10391, -6, _ctx); /*int*/
          _x_x4355 = kk_std_core_list_drop(_x_x4356, _x_x4357, _ctx); /*list<10001>*/
          o = kk_std_core_string_listchar_fs_string(_x_x4355, _ctx); /*string*/
          bool _match_x2735;
          kk_string_t _x_x4358 = kk_string_dup(o, _ctx); /*string*/
          _match_x2735 = kk_api_hc__is__valid__offset(_x_x4358, _ctx); /*bool*/
          if (_match_x2735) {
            return kk_std_core_types__new_Just(kk_string_box(o), _ctx);
          }
          {
            kk_string_drop(o, _ctx);
            return kk_std_core_types__new_Nothing(_ctx);
          }
        }
        {
          kk_integer_t x_6_10397;
          kk_string_t _x_x4359 = kk_string_dup(s, _ctx); /*string*/
          x_6_10397 = kk_std_core_string_chars_fs_count(_x_x4359, _ctx); /*int*/
          kk_integer_t x_5_10395 = kk_integer_add_small_const(x_6_10397, -5, _ctx); /*int*/;
          kk_integer_t x_7_10399;
          kk_string_t _x_x4360 = kk_string_dup(s, _ctx); /*string*/
          x_7_10399 = kk_std_core_string_chars_fs_count(_x_x4360, _ctx); /*int*/
          kk_integer_t y_5_10396 = kk_integer_add_small_const(x_7_10399, -6, _ctx); /*int*/;
          kk_integer_t x_4_10393;
          kk_string_t _x_x4361 = kk_string_dup(s, _ctx); /*string*/
          x_4_10393 = kk_std_core_string_chars_fs_count(_x_x4361, _ctx); /*int*/
          bool _match_x2733;
          kk_string_t _x_x4362;
          kk_std_core_types__list _x_x4363;
          kk_std_core_types__list _x_x4364;
          kk_std_core_types__list _x_x4365;
          kk_string_t _x_x4366 = kk_string_dup(s, _ctx); /*string*/
          _x_x4365 = kk_std_core_string_list(_x_x4366, _ctx); /*list<char>*/
          kk_integer_t _x_x4367 = kk_integer_add_small_const(x_4_10393, -6, _ctx); /*int*/
          _x_x4364 = kk_std_core_list_drop(_x_x4365, _x_x4367, _ctx); /*list<10001>*/
          kk_integer_t _x_x4368 = kk_integer_sub(x_5_10395,y_5_10396,kk_context()); /*int*/
          _x_x4363 = kk_std_core_list_take(_x_x4364, _x_x4368, _ctx); /*list<10001>*/
          _x_x4362 = kk_std_core_string_listchar_fs_string(_x_x4363, _ctx); /*string*/
          kk_string_t _x_x4369;
          kk_define_string_literal(static, _s_x4370, 1, "-", _ctx)
          _x_x4369 = kk_string_dup(_s_x4370, _ctx); /*string*/
          _match_x2733 = kk_string_is_eq(_x_x4362,_x_x4369,kk_context()); /*bool*/
          if (_match_x2733) {
            kk_integer_t x_8_10401;
            kk_string_t _x_x4371 = kk_string_dup(s, _ctx); /*string*/
            x_8_10401 = kk_std_core_string_chars_fs_count(_x_x4371, _ctx); /*int*/
            kk_string_t o_0;
            kk_std_core_types__list _x_x4372;
            kk_std_core_types__list _x_x4373 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            kk_integer_t _x_x4374 = kk_integer_add_small_const(x_8_10401, -6, _ctx); /*int*/
            _x_x4372 = kk_std_core_list_drop(_x_x4373, _x_x4374, _ctx); /*list<10001>*/
            o_0 = kk_std_core_string_listchar_fs_string(_x_x4372, _ctx); /*string*/
            bool _match_x2734;
            kk_string_t _x_x4375 = kk_string_dup(o_0, _ctx); /*string*/
            _match_x2734 = kk_api_hc__is__valid__offset(_x_x4375, _ctx); /*bool*/
            if (_match_x2734) {
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

kk_string_t kk_api_hc__datetime__kind(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2720;
  kk_string_t _x_x4376 = kk_string_dup(s, _ctx); /*string*/
  _match_x2720 = kk_api_hc__is__valid__time(_x_x4376, _ctx); /*bool*/
  if (_match_x2720) {
    kk_string_drop(s, _ctx);
    kk_define_string_literal(static, _s_x4377, 10, "local-time", _ctx)
    return kk_string_dup(_s_x4377, _ctx);
  }
  {
    bool _match_x2721;
    kk_string_t _x_x4378 = kk_string_dup(s, _ctx); /*string*/
    _match_x2721 = kk_api_hc__is__valid__date(_x_x4378, _ctx); /*bool*/
    if (_match_x2721) {
      bool _match_x2724;
      kk_integer_t _brw_x2727;
      kk_string_t _x_x4379 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2727 = kk_std_core_string_chars_fs_count(_x_x4379, _ctx); /*int*/
      bool _brw_x2728 = kk_integer_eq_borrow(_brw_x2727,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2727, _ctx);
      _match_x2724 = _brw_x2728; /*bool*/
      if (_match_x2724) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4380, 10, "local-date", _ctx)
        return kk_string_dup(_s_x4380, _ctx);
      }
      {
        bool _match_x2725;
        kk_string_t _x_x4381 = kk_string_dup(s, _ctx); /*string*/
        _match_x2725 = kk_api_hc__is__iso__datetime(_x_x4381, _ctx); /*bool*/
        if (_match_x2725) {
          kk_string_drop(s, _ctx);
          kk_define_string_literal(static, _s_x4382, 15, "offset-datetime", _ctx)
          return kk_string_dup(_s_x4382, _ctx);
        }
        {
          bool _match_x2726 = kk_api_hc__is__local__datetime(s, _ctx); /*bool*/;
          if (_match_x2726) {
            kk_define_string_literal(static, _s_x4383, 14, "local-datetime", _ctx)
            return kk_string_dup(_s_x4383, _ctx);
          }
          {
            kk_define_string_literal(static, _s_x4384, 7, "invalid", _ctx)
            return kk_string_dup(_s_x4384, _ctx);
          }
        }
      }
    }
    {
      bool _match_x2722;
      kk_string_t _x_x4385 = kk_string_dup(s, _ctx); /*string*/
      _match_x2722 = kk_api_hc__is__iso__datetime(_x_x4385, _ctx); /*bool*/
      if (_match_x2722) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4386, 15, "offset-datetime", _ctx)
        return kk_string_dup(_s_x4386, _ctx);
      }
      {
        bool _match_x2723 = kk_api_hc__is__local__datetime(s, _ctx); /*bool*/;
        if (_match_x2723) {
          kk_define_string_literal(static, _s_x4387, 14, "local-datetime", _ctx)
          return kk_string_dup(_s_x4387, _ctx);
        }
        {
          kk_define_string_literal(static, _s_x4388, 7, "invalid", _ctx)
          return kk_string_dup(_s_x4388, _ctx);
        }
      }
    }
  }
}

kk_integer_t kk_api_hc__date__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10405;
  kk_string_t _x_x4389 = kk_string_dup(d1, _ctx); /*string*/
  b_10405 = kk_api_hc__is__valid__date(_x_x4389, _ctx); /*bool*/
  if (b_10405) {
    bool b_0_10406;
    kk_string_t _x_x4390 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10406 = kk_api_hc__is__valid__date(_x_x4390, _ctx); /*bool*/
    if (b_0_10406) {
      bool _match_x2717;
      kk_std_core_types__order _x_x4391 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2717 = kk_std_core_order__lp__eq__eq__rp_(_x_x4391, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2717) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2718;
        kk_std_core_types__order _x_x4392;
        kk_std_core_types__order _brw_x2719 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4392 = _brw_x2719; /*order*/
        _match_x2718 = kk_std_core_order__lp__eq__eq__rp_(_x_x4392, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2718) {
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

kk_integer_t kk_api_hc__time__cmp(kk_string_t t1, kk_string_t t2, kk_context_t* _ctx) { /* (t1 : string, t2 : string) -> int */ 
  bool b_10413;
  kk_string_t _x_x4393 = kk_string_dup(t1, _ctx); /*string*/
  b_10413 = kk_api_hc__is__valid__time(_x_x4393, _ctx); /*bool*/
  if (b_10413) {
    bool b_0_10414;
    kk_string_t _x_x4394 = kk_string_dup(t2, _ctx); /*string*/
    b_0_10414 = kk_api_hc__is__valid__time(_x_x4394, _ctx); /*bool*/
    if (b_0_10414) {
      bool _match_x2714;
      kk_std_core_types__order _x_x4395 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/
      _match_x2714 = kk_std_core_order__lp__eq__eq__rp_(_x_x4395, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2714) {
        kk_string_drop(t2, _ctx);
        kk_string_drop(t1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2715;
        kk_std_core_types__order _x_x4396;
        kk_std_core_types__order _brw_x2716 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/;
        kk_string_drop(t1, _ctx);
        kk_string_drop(t2, _ctx);
        _x_x4396 = _brw_x2716; /*order*/
        _match_x2715 = kk_std_core_order__lp__eq__eq__rp_(_x_x4396, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2715) {
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

kk_integer_t kk_api_hc__datetime__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10421;
  kk_string_t _x_x4397 = kk_string_dup(d1, _ctx); /*string*/
  b_10421 = kk_api_hc__is__local__datetime(_x_x4397, _ctx); /*bool*/
  if (b_10421) {
    bool b_0_10422;
    kk_string_t _x_x4398 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10422 = kk_api_hc__is__local__datetime(_x_x4398, _ctx); /*bool*/
    if (b_0_10422) {
      bool _match_x2711;
      kk_std_core_types__order _x_x4399 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2711 = kk_std_core_order__lp__eq__eq__rp_(_x_x4399, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2711) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2712;
        kk_std_core_types__order _x_x4400;
        kk_std_core_types__order _brw_x2713 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4400 = _brw_x2713; /*order*/
        _match_x2712 = kk_std_core_order__lp__eq__eq__rp_(_x_x4400, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2712) {
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

bool kk_api_hc__is__before(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> bool */ 
  bool _match_x2690;
  kk_string_t _x_x4401 = kk_string_dup(d1, _ctx); /*string*/
  _match_x2690 = kk_api_hc__is__valid__date(_x_x4401, _ctx); /*bool*/
  if (_match_x2690) {
    bool _match_x2700;
    kk_string_t _x_x4402 = kk_string_dup(d2, _ctx); /*string*/
    _match_x2700 = kk_api_hc__is__valid__date(_x_x4402, _ctx); /*bool*/
    if (_match_x2700) {
      kk_std_core_types__order _x_x4403;
      kk_std_core_types__order _brw_x2710 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
      kk_string_drop(d1, _ctx);
      kk_string_drop(d2, _ctx);
      _x_x4403 = _brw_x2710; /*order*/
      return kk_std_core_order__lp__eq__eq__rp_(_x_x4403, kk_std_core_types__new_Lt(_ctx), _ctx);
    }
    {
      bool _match_x2701;
      kk_string_t _x_x4404 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2701 = kk_api_hc__is__local__datetime(_x_x4404, _ctx); /*bool*/
      if (_match_x2701) {
        bool _match_x2705;
        kk_string_t _x_x4405 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2705 = kk_api_hc__is__local__datetime(_x_x4405, _ctx); /*bool*/
        if (_match_x2705) {
          kk_std_core_types__order _x_x4406;
          kk_std_core_types__order _brw_x2709 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4406 = _brw_x2709; /*order*/
          return kk_std_core_order__lp__eq__eq__rp_(_x_x4406, kk_std_core_types__new_Lt(_ctx), _ctx);
        }
        {
          bool _match_x2706;
          kk_string_t _x_x4407 = kk_string_dup(d1, _ctx); /*string*/
          _match_x2706 = kk_api_hc__is__valid__time(_x_x4407, _ctx); /*bool*/
          if (_match_x2706) {
            bool _match_x2707;
            kk_string_t _x_x4408 = kk_string_dup(d2, _ctx); /*string*/
            _match_x2707 = kk_api_hc__is__valid__time(_x_x4408, _ctx); /*bool*/
            if (_match_x2707) {
              kk_std_core_types__order _x_x4409;
              kk_std_core_types__order _brw_x2708 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
              kk_string_drop(d1, _ctx);
              kk_string_drop(d2, _ctx);
              _x_x4409 = _brw_x2708; /*order*/
              return kk_std_core_order__lp__eq__eq__rp_(_x_x4409, kk_std_core_types__new_Lt(_ctx), _ctx);
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
        bool _match_x2702;
        kk_string_t _x_x4410 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2702 = kk_api_hc__is__valid__time(_x_x4410, _ctx); /*bool*/
        if (_match_x2702) {
          bool _match_x2703;
          kk_string_t _x_x4411 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2703 = kk_api_hc__is__valid__time(_x_x4411, _ctx); /*bool*/
          if (_match_x2703) {
            kk_std_core_types__order _x_x4412;
            kk_std_core_types__order _brw_x2704 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4412 = _brw_x2704; /*order*/
            return kk_std_core_order__lp__eq__eq__rp_(_x_x4412, kk_std_core_types__new_Lt(_ctx), _ctx);
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
    bool _match_x2691;
    kk_string_t _x_x4413 = kk_string_dup(d1, _ctx); /*string*/
    _match_x2691 = kk_api_hc__is__local__datetime(_x_x4413, _ctx); /*bool*/
    if (_match_x2691) {
      bool _match_x2695;
      kk_string_t _x_x4414 = kk_string_dup(d2, _ctx); /*string*/
      _match_x2695 = kk_api_hc__is__local__datetime(_x_x4414, _ctx); /*bool*/
      if (_match_x2695) {
        kk_std_core_types__order _x_x4415;
        kk_std_core_types__order _brw_x2699 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4415 = _brw_x2699; /*order*/
        return kk_std_core_order__lp__eq__eq__rp_(_x_x4415, kk_std_core_types__new_Lt(_ctx), _ctx);
      }
      {
        bool _match_x2696;
        kk_string_t _x_x4416 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2696 = kk_api_hc__is__valid__time(_x_x4416, _ctx); /*bool*/
        if (_match_x2696) {
          bool _match_x2697;
          kk_string_t _x_x4417 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2697 = kk_api_hc__is__valid__time(_x_x4417, _ctx); /*bool*/
          if (_match_x2697) {
            kk_std_core_types__order _x_x4418;
            kk_std_core_types__order _brw_x2698 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4418 = _brw_x2698; /*order*/
            return kk_std_core_order__lp__eq__eq__rp_(_x_x4418, kk_std_core_types__new_Lt(_ctx), _ctx);
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
      bool _match_x2692;
      kk_string_t _x_x4419 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2692 = kk_api_hc__is__valid__time(_x_x4419, _ctx); /*bool*/
      if (_match_x2692) {
        bool _match_x2693;
        kk_string_t _x_x4420 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2693 = kk_api_hc__is__valid__time(_x_x4420, _ctx); /*bool*/
        if (_match_x2693) {
          kk_std_core_types__order _x_x4421;
          kk_std_core_types__order _brw_x2694 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4421 = _brw_x2694; /*order*/
          return kk_std_core_order__lp__eq__eq__rp_(_x_x4421, kk_std_core_types__new_Lt(_ctx), _ctx);
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

kk_std_core_types__either kk_api_hc__offset__to__minutes(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,int> */ 
  bool _match_x2683;
  kk_string_t _x_x4422 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4423;
  kk_define_string_literal(static, _s_x4424, 1, "Z", _ctx)
  _x_x4423 = kk_string_dup(_s_x4424, _ctx); /*string*/
  _match_x2683 = kk_string_is_eq(_x_x4422,_x_x4423,kk_context()); /*bool*/
  if (_match_x2683) {
    kk_string_drop(s, _ctx);
    return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
  }
  {
    bool _match_x2684;
    kk_string_t _x_x4425 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4426;
    kk_define_string_literal(static, _s_x4427, 1, "z", _ctx)
    _x_x4426 = kk_string_dup(_s_x4427, _ctx); /*string*/
    _match_x2684 = kk_string_is_eq(_x_x4425,_x_x4426,kk_context()); /*bool*/
    if (_match_x2684) {
      kk_string_drop(s, _ctx);
      return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
    }
    {
      bool b_10443;
      kk_string_t _x_x4428 = kk_string_dup(s, _ctx); /*string*/
      b_10443 = kk_api_hc__is__valid__offset(_x_x4428, _ctx); /*bool*/
      if (b_10443) {
        kk_integer_t hc__sign_0;
        bool _match_x2689;
        kk_string_t _x_x4429;
        kk_std_core_types__list _x_x4430;
        kk_std_core_types__list _x_x4431;
        kk_std_core_types__list _x_x4432;
        kk_string_t _x_x4433 = kk_string_dup(s, _ctx); /*string*/
        _x_x4432 = kk_std_core_string_list(_x_x4433, _ctx); /*list<char>*/
        _x_x4431 = kk_std_core_list_drop(_x_x4432, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4434 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x4430 = kk_std_core_list_take(_x_x4431, _x_x4434, _ctx); /*list<10001>*/
        _x_x4429 = kk_std_core_string_listchar_fs_string(_x_x4430, _ctx); /*string*/
        kk_string_t _x_x4435;
        kk_define_string_literal(static, _s_x4436, 1, "-", _ctx)
        _x_x4435 = kk_string_dup(_s_x4436, _ctx); /*string*/
        _match_x2689 = kk_string_is_eq(_x_x4429,_x_x4435,kk_context()); /*bool*/
        if (_match_x2689) {
          hc__sign_0 = kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx); /*int*/
        }
        else {
          hc__sign_0 = kk_integer_from_small(1); /*int*/
        }
        kk_string_t s_0_10448;
        kk_std_core_types__list _x_x4437;
        kk_std_core_types__list _x_x4438;
        kk_std_core_types__list _x_x4439;
        kk_string_t _x_x4440 = kk_string_dup(s, _ctx); /*string*/
        _x_x4439 = kk_std_core_string_list(_x_x4440, _ctx); /*list<char>*/
        _x_x4438 = kk_std_core_list_drop(_x_x4439, kk_integer_from_small(1), _ctx); /*list<10001>*/
        kk_integer_t _x_x4441 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
        _x_x4437 = kk_std_core_list_take(_x_x4438, _x_x4441, _ctx); /*list<10001>*/
        s_0_10448 = kk_std_core_string_listchar_fs_string(_x_x4437, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2685;
        bool _x_x4442;
        kk_std_core_types__optional _match_x2688 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2688, _ctx)) {
          kk_box_t _box_x358 = _match_x2688._cons._Optional.value;
          bool _uniq_hex_581 = kk_bool_unbox(_box_x358);
          kk_std_core_types__optional_drop(_match_x2688, _ctx);
          _x_x4442 = _uniq_hex_581; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2688, _ctx);
          _x_x4442 = false; /*bool*/
        }
        _match_x2685 = kk_std_core_int_xparse(s_0_10448, _x_x4442, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2685, _ctx)) {
          kk_box_t _box_x359 = _match_x2685._cons.Just.value;
          kk_integer_t h = kk_integer_unbox(_box_x359, _ctx);
          kk_integer_dup(h, _ctx);
          kk_std_core_types__maybe_drop(_match_x2685, _ctx);
          kk_string_t s_1_10452;
          kk_std_core_types__list _x_x4443;
          kk_std_core_types__list _x_x4444;
          kk_std_core_types__list _x_x4445 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4444 = kk_std_core_list_drop(_x_x4445, kk_integer_from_small(4), _ctx); /*list<10001>*/
          kk_integer_t _x_x4446 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
          _x_x4443 = kk_std_core_list_take(_x_x4444, _x_x4446, _ctx); /*list<10001>*/
          s_1_10452 = kk_std_core_string_listchar_fs_string(_x_x4443, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2686;
          bool _x_x4447;
          kk_std_core_types__optional _match_x2687 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2687, _ctx)) {
            kk_box_t _box_x360 = _match_x2687._cons._Optional.value;
            bool _uniq_hex_581_0 = kk_bool_unbox(_box_x360);
            kk_std_core_types__optional_drop(_match_x2687, _ctx);
            _x_x4447 = _uniq_hex_581_0; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2687, _ctx);
            _x_x4447 = false; /*bool*/
          }
          _match_x2686 = kk_std_core_int_xparse(s_1_10452, _x_x4447, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2686, _ctx)) {
            kk_box_t _box_x361 = _match_x2686._cons.Just.value;
            kk_integer_t m = kk_integer_unbox(_box_x361, _ctx);
            kk_integer_dup(m, _ctx);
            kk_std_core_types__maybe_drop(_match_x2686, _ctx);
            kk_integer_t x_3_10456 = kk_integer_mul(h,(kk_integer_from_small(60)),kk_context()); /*int*/;
            kk_integer_t _b_x362_368;
            kk_integer_t _x_x4448 = kk_integer_add(x_3_10456,m,kk_context()); /*int*/
            _b_x362_368 = kk_integer_mul(hc__sign_0,_x_x4448,kk_context()); /*int*/
            return kk_std_core_types__new_Right(kk_integer_box(_b_x362_368, _ctx), _ctx);
          }
          {
            kk_integer_drop(hc__sign_0, _ctx);
            kk_integer_drop(h, _ctx);
            kk_box_t _x_x4449;
            kk_string_t _x_x4450;
            kk_define_string_literal(static, _s_x4451, 22, "invalid offset minutes", _ctx)
            _x_x4450 = kk_string_dup(_s_x4451, _ctx); /*string*/
            _x_x4449 = kk_string_box(_x_x4450); /*10014*/
            return kk_std_core_types__new_Left(_x_x4449, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(hc__sign_0, _ctx);
          kk_box_t _x_x4452;
          kk_string_t _x_x4453;
          kk_define_string_literal(static, _s_x4454, 20, "invalid offset hours", _ctx)
          _x_x4453 = kk_string_dup(_s_x4454, _ctx); /*string*/
          _x_x4452 = kk_string_box(_x_x4453); /*10014*/
          return kk_std_core_types__new_Left(_x_x4452, _ctx);
        }
      }
      {
        kk_string_t _b_x365_371;
        kk_string_t _x_x4455;
        kk_define_string_literal(static, _s_x4456, 16, "invalid offset: ", _ctx)
        _x_x4455 = kk_string_dup(_s_x4456, _ctx); /*string*/
        _b_x365_371 = kk_std_core_types__lp__plus__plus__rp_(_x_x4455, s, _ctx); /*string*/
        return kk_std_core_types__new_Left(kk_string_box(_b_x365_371), _ctx);
      }
    }
  }
}

kk_integer_t kk_api_hc__list__int__nth(kk_std_core_types__list xs, kk_integer_t i, kk_context_t* _ctx) { /* (xs : list<int>, i : int) -> div int */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(i, _ctx);
    return kk_integer_from_small(0);
  }
  {
    struct kk_std_core_types_Cons* _con_x4457 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x372 = _con_x4457->head;
    kk_std_core_types__list rest = _con_x4457->tail;
    kk_integer_t x = kk_integer_unbox(_box_x372, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_integer_dup(x, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool _match_x2682 = kk_integer_eq_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2682) {
      kk_std_core_types__list_drop(rest, _ctx);
      kk_integer_drop(i, _ctx);
      return x;
    }
    {
      kk_integer_drop(x, _ctx);
      { // tailcall
        kk_integer_t _x_x4458 = kk_integer_add_small_const(i, -1, _ctx); /*int*/
        xs = rest;
        i = _x_x4458;
        goto kk__tailcall;
      }
    }
  }
}

kk_std_core_types__either kk_api_hc__day__of__week(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> div either<string,string> */ 
  bool b_10460;
  kk_string_t _x_x4459 = kk_string_dup(s, _ctx); /*string*/
  b_10460 = kk_api_hc__is__valid__date(_x_x4459, _ctx); /*bool*/
  if (b_10460) {
    kk_std_core_types__either _match_x2678 = kk_api_hc__date__parts(s, _ctx); /*either<string,(int, int, int)>*/;
    if (kk_std_core_types__is_Left(_match_x2678, _ctx)) {
      kk_box_t _box_x373 = _match_x2678._cons.Left.left;
      kk_string_t e = kk_string_unbox(_box_x373);
      kk_string_dup(e, _ctx);
      kk_std_core_types__either_drop(_match_x2678, _ctx);
      return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
    }
    {
      kk_box_t _box_x375 = _match_x2678._cons.Right.right;
      kk_std_core_types__tuple3 parts = kk_std_core_types__tuple3_unbox(_box_x375, KK_BORROWED, _ctx);
      kk_std_core_types__tuple3_dup(parts, _ctx);
      kk_std_core_types__either_drop(_match_x2678, _ctx);
      kk_integer_t y_0;
      bool _match_x2679;
      kk_integer_t _brw_x2680;
      {
        kk_box_t _box_x376 = parts.fst;
        kk_box_t _box_x377 = parts.snd;
        kk_box_t _box_x378 = parts.thd;
        kk_integer_t _x = kk_integer_unbox(_box_x377, _ctx);
        kk_integer_dup(_x, _ctx);
        _brw_x2680 = _x; /*int*/
      }
      bool _brw_x2681 = kk_integer_lt_borrow(_brw_x2680,(kk_integer_from_small(3)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2680, _ctx);
      _match_x2679 = _brw_x2681; /*bool*/
      if (_match_x2679) {
        kk_integer_t _x_x4460;
        {
          kk_box_t _box_x379 = parts.fst;
          kk_box_t _box_x380 = parts.snd;
          kk_box_t _box_x381 = parts.thd;
          kk_integer_t _x_0 = kk_integer_unbox(_box_x379, _ctx);
          kk_integer_dup(_x_0, _ctx);
          _x_x4460 = _x_0; /*int*/
        }
        y_0 = kk_integer_add_small_const(_x_x4460, -1, _ctx); /*int*/
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
      kk_integer_t _x_x4461 = kk_integer_dup(y_0, _ctx); /*int*/
      y_5_10475 = kk_integer_div(_x_x4461,(kk_integer_from_small(4)),kk_context()); /*int*/
      kk_integer_t x_3_10472;
      kk_integer_t _x_x4462 = kk_integer_dup(y_0, _ctx); /*int*/
      x_3_10472 = kk_integer_add(_x_x4462,y_5_10475,kk_context()); /*int*/
      kk_integer_t y_4_10473;
      kk_integer_t _x_x4463 = kk_integer_dup(y_0, _ctx); /*int*/
      y_4_10473 = kk_integer_div(_x_x4463,(kk_integer_from_small(100)),kk_context()); /*int*/
      kk_integer_t x_2_10470 = kk_integer_sub(x_3_10472,y_4_10473,kk_context()); /*int*/;
      kk_integer_t y_3_10471 = kk_integer_div(y_0,(kk_integer_from_small(400)),kk_context()); /*int*/;
      kk_integer_t x_1_10468 = kk_integer_add(x_2_10470,y_3_10471,kk_context()); /*int*/;
      kk_integer_t y_2_10469;
      kk_std_core_types__list _x_x4464;
      kk_std_core_types__list _x_x4465;
      kk_std_core_types__list _x_x4466;
      kk_std_core_types__list _x_x4467;
      kk_std_core_types__list _x_x4468;
      kk_std_core_types__list _x_x4469;
      kk_std_core_types__list _x_x4470;
      kk_std_core_types__list _x_x4471;
      kk_std_core_types__list _x_x4472;
      kk_std_core_types__list _x_x4473;
      kk_std_core_types__list _x_x4474;
      kk_std_core_types__list _x_x4475 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      _x_x4474 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4475, _ctx); /*list<10021>*/
      _x_x4473 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(6), _ctx), _x_x4474, _ctx); /*list<10021>*/
      _x_x4472 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), _x_x4473, _ctx); /*list<10021>*/
      _x_x4471 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(1), _ctx), _x_x4472, _ctx); /*list<10021>*/
      _x_x4470 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4471, _ctx); /*list<10021>*/
      _x_x4469 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4470, _ctx); /*list<10021>*/
      _x_x4468 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4469, _ctx); /*list<10021>*/
      _x_x4467 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4468, _ctx); /*list<10021>*/
      _x_x4466 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4467, _ctx); /*list<10021>*/
      _x_x4465 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4466, _ctx); /*list<10021>*/
      _x_x4464 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4465, _ctx); /*list<10021>*/
      kk_integer_t _x_x4476;
      kk_integer_t _x_x4477;
      {
        kk_box_t _box_x409 = parts.fst;
        kk_box_t _box_x410 = parts.snd;
        kk_box_t _box_x411 = parts.thd;
        kk_integer_t _x_2 = kk_integer_unbox(_box_x410, _ctx);
        kk_integer_dup(_x_2, _ctx);
        _x_x4477 = _x_2; /*int*/
      }
      _x_x4476 = kk_integer_add_small_const(_x_x4477, -1, _ctx); /*int*/
      y_2_10469 = kk_api_hc__list__int__nth(_x_x4464, _x_x4476, _ctx); /*int*/
      kk_integer_t x_0_10466 = kk_integer_add(x_1_10468,y_2_10469,kk_context()); /*int*/;
      kk_integer_t idx;
      kk_integer_t _x_x4478;
      kk_integer_t _x_x4479;
      {
        kk_box_t _box_x436 = parts.fst;
        kk_box_t _box_x437 = parts.snd;
        kk_box_t _box_x438 = parts.thd;
        kk_integer_t _x_3 = kk_integer_unbox(_box_x438, _ctx);
        kk_integer_dup(_x_3, _ctx);
        kk_std_core_types__tuple3_drop(parts, _ctx);
        _x_x4479 = _x_3; /*int*/
      }
      _x_x4478 = kk_integer_add(x_0_10466,_x_x4479,kk_context()); /*int*/
      idx = kk_integer_mod(_x_x4478,(kk_integer_from_small(7)),kk_context()); /*int*/
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(0), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4480;
        kk_string_t _x_x4481;
        kk_define_string_literal(static, _s_x4482, 6, "sunday", _ctx)
        _x_x4481 = kk_string_dup(_s_x4482, _ctx); /*string*/
        _x_x4480 = kk_string_box(_x_x4481); /*10015*/
        return kk_std_core_types__new_Right(_x_x4480, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(1), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4483;
        kk_string_t _x_x4484;
        kk_define_string_literal(static, _s_x4485, 6, "monday", _ctx)
        _x_x4484 = kk_string_dup(_s_x4485, _ctx); /*string*/
        _x_x4483 = kk_string_box(_x_x4484); /*10015*/
        return kk_std_core_types__new_Right(_x_x4483, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(2), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4486;
        kk_string_t _x_x4487;
        kk_define_string_literal(static, _s_x4488, 7, "tuesday", _ctx)
        _x_x4487 = kk_string_dup(_s_x4488, _ctx); /*string*/
        _x_x4486 = kk_string_box(_x_x4487); /*10015*/
        return kk_std_core_types__new_Right(_x_x4486, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(3), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4489;
        kk_string_t _x_x4490;
        kk_define_string_literal(static, _s_x4491, 9, "wednesday", _ctx)
        _x_x4490 = kk_string_dup(_s_x4491, _ctx); /*string*/
        _x_x4489 = kk_string_box(_x_x4490); /*10015*/
        return kk_std_core_types__new_Right(_x_x4489, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(4), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4492;
        kk_string_t _x_x4493;
        kk_define_string_literal(static, _s_x4494, 8, "thursday", _ctx)
        _x_x4493 = kk_string_dup(_s_x4494, _ctx); /*string*/
        _x_x4492 = kk_string_box(_x_x4493); /*10015*/
        return kk_std_core_types__new_Right(_x_x4492, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(5), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4495;
        kk_string_t _x_x4496;
        kk_define_string_literal(static, _s_x4497, 6, "friday", _ctx)
        _x_x4496 = kk_string_dup(_s_x4497, _ctx); /*string*/
        _x_x4495 = kk_string_box(_x_x4496); /*10015*/
        return kk_std_core_types__new_Right(_x_x4495, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(6), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4498;
        kk_string_t _x_x4499;
        kk_define_string_literal(static, _s_x4500, 8, "saturday", _ctx)
        _x_x4499 = kk_string_dup(_s_x4500, _ctx); /*string*/
        _x_x4498 = kk_string_box(_x_x4499); /*10015*/
        return kk_std_core_types__new_Right(_x_x4498, _ctx);
      }
      {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4501;
        kk_string_t _x_x4502;
        kk_define_string_literal(static, _s_x4503, 11, "unreachable", _ctx)
        _x_x4502 = kk_string_dup(_s_x4503, _ctx); /*string*/
        _x_x4501 = kk_string_box(_x_x4502); /*10014*/
        return kk_std_core_types__new_Left(_x_x4501, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x447_457;
    kk_string_t _x_x4504;
    kk_define_string_literal(static, _s_x4505, 14, "invalid date: ", _ctx)
    _x_x4504 = kk_string_dup(_s_x4505, _ctx); /*string*/
    _b_x447_457 = kk_std_core_types__lp__plus__plus__rp_(_x_x4504, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x447_457), _ctx);
  }
}

kk_api__clispec kk_api_hc__with__flags(kk_api__clispec spec, kk_std_core_types__list flags, kk_context_t* _ctx) { /* (spec : clispec, flags : list<cliflag>) -> clispec */ 
  kk_string_t _x_x4506;
  {
    struct kk_api_Clispec* _con_x4507 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4507->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4506 = _x; /*string*/
  }
  kk_string_t _x_x4508;
  {
    struct kk_api_Clispec* _con_x4509 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4509->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4508 = _x_0; /*string*/
  }
  kk_string_t _x_x4510;
  {
    struct kk_api_Clispec* _con_x4511 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4511->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4510 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4512;
  {
    struct kk_api_Clispec* _con_x4513 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4513->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4512 = _x_2; /*list<api/clioption>*/
  }
  kk_std_core_types__list _x_x4514;
  {
    struct kk_api_Clispec* _con_x4515 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4515->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4514 = _x_3; /*list<api/cliarg>*/
  }
  kk_std_core_types__list _x_x4516;
  {
    struct kk_api_Clispec* _con_x4517 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4517->app__name;
    kk_string_t _pat_1_4 = _con_x4517->app__version;
    kk_string_t _pat_2_4 = _con_x4517->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4517->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4517->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4517->app__args;
    kk_std_core_types__list _x_4 = _con_x4517->app__commands;
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
    _x_x4516 = _x_4; /*list<(string, api/clispec)>*/
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x4506, _x_x4508, _x_x4510, flags, _x_x4512, _x_x4514, _x_x4516, _ctx);
}

kk_api__clispec kk_api_hc__with__options(kk_api__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<clioption>) -> clispec */ 
  kk_string_t _x_x4518;
  {
    struct kk_api_Clispec* _con_x4519 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4519->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4518 = _x; /*string*/
  }
  kk_string_t _x_x4520;
  {
    struct kk_api_Clispec* _con_x4521 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4521->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4520 = _x_0; /*string*/
  }
  kk_string_t _x_x4522;
  {
    struct kk_api_Clispec* _con_x4523 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4523->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4522 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4524;
  {
    struct kk_api_Clispec* _con_x4525 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4525->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4524 = _x_2; /*list<api/cliflag>*/
  }
  kk_std_core_types__list _x_x4526;
  {
    struct kk_api_Clispec* _con_x4527 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4527->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4526 = _x_3; /*list<api/cliarg>*/
  }
  kk_std_core_types__list _x_x4528;
  {
    struct kk_api_Clispec* _con_x4529 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4529->app__name;
    kk_string_t _pat_1_4 = _con_x4529->app__version;
    kk_string_t _pat_2_4 = _con_x4529->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4529->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4529->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4529->app__args;
    kk_std_core_types__list _x_4 = _con_x4529->app__commands;
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
    _x_x4528 = _x_4; /*list<(string, api/clispec)>*/
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x4518, _x_x4520, _x_x4522, _x_x4524, options, _x_x4526, _x_x4528, _ctx);
}

kk_api__clispec kk_api_hc__with__args(kk_api__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<cliarg>) -> clispec */ 
  kk_string_t _x_x4530;
  {
    struct kk_api_Clispec* _con_x4531 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4531->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4530 = _x; /*string*/
  }
  kk_string_t _x_x4532;
  {
    struct kk_api_Clispec* _con_x4533 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4533->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4532 = _x_0; /*string*/
  }
  kk_string_t _x_x4534;
  {
    struct kk_api_Clispec* _con_x4535 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4535->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4534 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4536;
  {
    struct kk_api_Clispec* _con_x4537 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4537->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4536 = _x_2; /*list<api/cliflag>*/
  }
  kk_std_core_types__list _x_x4538;
  {
    struct kk_api_Clispec* _con_x4539 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4539->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4538 = _x_3; /*list<api/clioption>*/
  }
  kk_std_core_types__list _x_x4540;
  {
    struct kk_api_Clispec* _con_x4541 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4541->app__name;
    kk_string_t _pat_1_4 = _con_x4541->app__version;
    kk_string_t _pat_2_4 = _con_x4541->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4541->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4541->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4541->app__args;
    kk_std_core_types__list _x_4 = _con_x4541->app__commands;
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
    _x_x4540 = _x_4; /*list<(string, api/clispec)>*/
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x4530, _x_x4532, _x_x4534, _x_x4536, _x_x4538, args, _x_x4540, _ctx);
}

kk_api__clispec kk_api_hc__with__commands(kk_api__clispec spec, kk_std_core_types__list commands, kk_context_t* _ctx) { /* (spec : clispec, commands : list<(string, clispec)>) -> clispec */ 
  kk_string_t _x_x4542;
  {
    struct kk_api_Clispec* _con_x4543 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4543->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4542 = _x; /*string*/
  }
  kk_string_t _x_x4544;
  {
    struct kk_api_Clispec* _con_x4545 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4545->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4544 = _x_0; /*string*/
  }
  kk_string_t _x_x4546;
  {
    struct kk_api_Clispec* _con_x4547 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4547->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4546 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4548;
  {
    struct kk_api_Clispec* _con_x4549 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4549->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4548 = _x_2; /*list<api/cliflag>*/
  }
  kk_std_core_types__list _x_x4550;
  {
    struct kk_api_Clispec* _con_x4551 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4551->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4550 = _x_3; /*list<api/clioption>*/
  }
  kk_std_core_types__list _x_x4552;
  {
    struct kk_api_Clispec* _con_x4553 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4553->app__name;
    kk_string_t _pat_1_4 = _con_x4553->app__version;
    kk_string_t _pat_2_4 = _con_x4553->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4553->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4553->app__options;
    kk_std_core_types__list _x_4 = _con_x4553->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4553->app__commands;
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
    _x_x4552 = _x_4; /*list<api/cliarg>*/
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x4542, _x_x4544, _x_x4546, _x_x4548, _x_x4550, _x_x4552, commands, _ctx);
}

kk_api__clispec kk_api_hc__flag(kk_api__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list flags_10505;
  kk_std_core_types__list _x_x4554;
  {
    struct kk_api_Clispec* _con_x4555 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4555->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4554 = _x_5; /*list<api/cliflag>*/
  }
  kk_std_core_types__list _x_x4556;
  kk_box_t _x_x4557;
  kk_api__cliflag _x_x4558 = kk_api__new_Cliflag(kk_reuse_null, 0, name, kkloc_short, help__text, _ctx); /*api/cliflag*/
  _x_x4557 = kk_api__cliflag_box(_x_x4558, _ctx); /*10021*/
  _x_x4556 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4557, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  flags_10505 = kk_std_core_list_append(_x_x4554, _x_x4556, _ctx); /*list<api/cliflag>*/
  kk_string_t _x_x4559;
  {
    struct kk_api_Clispec* _con_x4560 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4560->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4559 = _x; /*string*/
  }
  kk_string_t _x_x4561;
  {
    struct kk_api_Clispec* _con_x4562 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4562->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4561 = _x_0; /*string*/
  }
  kk_string_t _x_x4563;
  {
    struct kk_api_Clispec* _con_x4564 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4564->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4563 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4565;
  {
    struct kk_api_Clispec* _con_x4566 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4566->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4565 = _x_2; /*list<api/clioption>*/
  }
  kk_std_core_types__list _x_x4567;
  {
    struct kk_api_Clispec* _con_x4568 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4568->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4567 = _x_3; /*list<api/cliarg>*/
  }
  kk_std_core_types__list _x_x4569;
  {
    struct kk_api_Clispec* _con_x4570 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4570->app__name;
    kk_string_t _pat_1_4 = _con_x4570->app__version;
    kk_string_t _pat_2_4 = _con_x4570->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4570->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4570->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4570->app__args;
    kk_std_core_types__list _x_4 = _con_x4570->app__commands;
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
    _x_x4569 = _x_4; /*list<(string, api/clispec)>*/
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x4559, _x_x4561, _x_x4563, flags_10505, _x_x4565, _x_x4567, _x_x4569, _ctx);
}

kk_api__clispec kk_api_hc__option(kk_api__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list options_10516;
  kk_std_core_types__list _x_x4571;
  {
    struct kk_api_Clispec* _con_x4572 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4572->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4571 = _x_5; /*list<api/clioption>*/
  }
  kk_std_core_types__list _x_x4573;
  kk_box_t _x_x4574;
  kk_api__clioption _x_x4575;
  kk_string_t _x_x4576 = kk_string_empty(); /*string*/
  _x_x4575 = kk_api__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, _x_x4576, _ctx); /*api/clioption*/
  _x_x4574 = kk_api__clioption_box(_x_x4575, _ctx); /*10021*/
  _x_x4573 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4574, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10516 = kk_std_core_list_append(_x_x4571, _x_x4573, _ctx); /*list<api/clioption>*/
  kk_string_t _x_x4578;
  {
    struct kk_api_Clispec* _con_x4579 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4579->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4578 = _x; /*string*/
  }
  kk_string_t _x_x4580;
  {
    struct kk_api_Clispec* _con_x4581 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4581->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4580 = _x_0; /*string*/
  }
  kk_string_t _x_x4582;
  {
    struct kk_api_Clispec* _con_x4583 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4583->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4582 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4584;
  {
    struct kk_api_Clispec* _con_x4585 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4585->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4584 = _x_2; /*list<api/cliflag>*/
  }
  kk_std_core_types__list _x_x4586;
  {
    struct kk_api_Clispec* _con_x4587 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4587->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4586 = _x_3; /*list<api/cliarg>*/
  }
  kk_std_core_types__list _x_x4588;
  {
    struct kk_api_Clispec* _con_x4589 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4589->app__name;
    kk_string_t _pat_1_4 = _con_x4589->app__version;
    kk_string_t _pat_2_4 = _con_x4589->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4589->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4589->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4589->app__args;
    kk_std_core_types__list _x_4 = _con_x4589->app__commands;
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
    _x_x4588 = _x_4; /*list<(string, api/clispec)>*/
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x4578, _x_x4580, _x_x4582, _x_x4584, options_10516, _x_x4586, _x_x4588, _ctx);
}

kk_api__clispec kk_api_hc__option__default(kk_api__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string, default : string) -> clispec */ 
  kk_std_core_types__list options_10527;
  kk_std_core_types__list _x_x4590;
  {
    struct kk_api_Clispec* _con_x4591 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4591->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4590 = _x_5; /*list<api/clioption>*/
  }
  kk_std_core_types__list _x_x4592;
  kk_box_t _x_x4593;
  kk_api__clioption _x_x4594 = kk_api__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, kkloc_default, _ctx); /*api/clioption*/
  _x_x4593 = kk_api__clioption_box(_x_x4594, _ctx); /*10021*/
  _x_x4592 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4593, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10527 = kk_std_core_list_append(_x_x4590, _x_x4592, _ctx); /*list<api/clioption>*/
  kk_string_t _x_x4595;
  {
    struct kk_api_Clispec* _con_x4596 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4596->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4595 = _x; /*string*/
  }
  kk_string_t _x_x4597;
  {
    struct kk_api_Clispec* _con_x4598 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4598->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4597 = _x_0; /*string*/
  }
  kk_string_t _x_x4599;
  {
    struct kk_api_Clispec* _con_x4600 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4600->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4599 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4601;
  {
    struct kk_api_Clispec* _con_x4602 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4602->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4601 = _x_2; /*list<api/cliflag>*/
  }
  kk_std_core_types__list _x_x4603;
  {
    struct kk_api_Clispec* _con_x4604 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4604->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4603 = _x_3; /*list<api/cliarg>*/
  }
  kk_std_core_types__list _x_x4605;
  {
    struct kk_api_Clispec* _con_x4606 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4606->app__name;
    kk_string_t _pat_1_4 = _con_x4606->app__version;
    kk_string_t _pat_2_4 = _con_x4606->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4606->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4606->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4606->app__args;
    kk_std_core_types__list _x_4 = _con_x4606->app__commands;
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
    _x_x4605 = _x_4; /*list<(string, api/clispec)>*/
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x4595, _x_x4597, _x_x4599, _x_x4601, options_10527, _x_x4603, _x_x4605, _ctx);
}

kk_api__clispec kk_api_hc__arg(kk_api__clispec spec, kk_string_t name, kk_string_t help__text, bool required, kk_context_t* _ctx) { /* (spec : clispec, name : string, help_text : string, required : bool) -> clispec */ 
  kk_std_core_types__list args_10538;
  kk_std_core_types__list _x_x4607;
  {
    struct kk_api_Clispec* _con_x4608 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4608->app__args;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4607 = _x_5; /*list<api/cliarg>*/
  }
  kk_std_core_types__list _x_x4609;
  kk_box_t _x_x4610;
  kk_api__cliarg _x_x4611 = kk_api__new_Cliarg(kk_reuse_null, 0, name, help__text, required, _ctx); /*api/cliarg*/
  _x_x4610 = kk_api__cliarg_box(_x_x4611, _ctx); /*10021*/
  _x_x4609 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4610, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  args_10538 = kk_std_core_list_append(_x_x4607, _x_x4609, _ctx); /*list<api/cliarg>*/
  kk_string_t _x_x4612;
  {
    struct kk_api_Clispec* _con_x4613 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4613->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4612 = _x; /*string*/
  }
  kk_string_t _x_x4614;
  {
    struct kk_api_Clispec* _con_x4615 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4615->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4614 = _x_0; /*string*/
  }
  kk_string_t _x_x4616;
  {
    struct kk_api_Clispec* _con_x4617 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4617->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4616 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4618;
  {
    struct kk_api_Clispec* _con_x4619 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4619->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4618 = _x_2; /*list<api/cliflag>*/
  }
  kk_std_core_types__list _x_x4620;
  {
    struct kk_api_Clispec* _con_x4621 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4621->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4620 = _x_3; /*list<api/clioption>*/
  }
  kk_std_core_types__list _x_x4622;
  {
    struct kk_api_Clispec* _con_x4623 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4623->app__name;
    kk_string_t _pat_1_4 = _con_x4623->app__version;
    kk_string_t _pat_2_4 = _con_x4623->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4623->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4623->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4623->app__args;
    kk_std_core_types__list _x_4 = _con_x4623->app__commands;
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
    _x_x4622 = _x_4; /*list<(string, api/clispec)>*/
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x4612, _x_x4614, _x_x4616, _x_x4618, _x_x4620, args_10538, _x_x4622, _ctx);
}

kk_api__clispec kk_api_hc__command(kk_api__clispec spec, kk_string_t name, kk_api__clispec hc__sub_0, kk_context_t* _ctx) { /* (spec : clispec, name : string, hc_sub : clispec) -> clispec */ 
  kk_std_core_types__list commands_10549;
  kk_std_core_types__list _x_x4624;
  {
    struct kk_api_Clispec* _con_x4625 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4625->app__commands;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4624 = _x_5; /*list<(string, api/clispec)>*/
  }
  kk_std_core_types__list _x_x4626;
  kk_box_t _x_x4627;
  kk_std_core_types__tuple2 _x_x4628 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_api__clispec_box(hc__sub_0, _ctx), _ctx); /*(10037, 10038)*/
  _x_x4627 = kk_std_core_types__tuple2_box(_x_x4628, _ctx); /*10021*/
  _x_x4626 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4627, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  commands_10549 = kk_std_core_list_append(_x_x4624, _x_x4626, _ctx); /*list<(string, api/clispec)>*/
  kk_string_t _x_x4629;
  {
    struct kk_api_Clispec* _con_x4630 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4630->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4629 = _x; /*string*/
  }
  kk_string_t _x_x4631;
  {
    struct kk_api_Clispec* _con_x4632 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4632->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4631 = _x_0; /*string*/
  }
  kk_string_t _x_x4633;
  {
    struct kk_api_Clispec* _con_x4634 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4634->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4633 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4635;
  {
    struct kk_api_Clispec* _con_x4636 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4636->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4635 = _x_2; /*list<api/cliflag>*/
  }
  kk_std_core_types__list _x_x4637;
  {
    struct kk_api_Clispec* _con_x4638 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4638->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4637 = _x_3; /*list<api/clioption>*/
  }
  kk_std_core_types__list _x_x4639;
  {
    struct kk_api_Clispec* _con_x4640 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4640->app__name;
    kk_string_t _pat_1_4 = _con_x4640->app__version;
    kk_string_t _pat_2_4 = _con_x4640->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4640->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4640->app__options;
    kk_std_core_types__list _x_4 = _con_x4640->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4640->app__commands;
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
    _x_x4639 = _x_4; /*list<api/cliarg>*/
  }
  return kk_api__new_Clispec(kk_reuse_null, 0, _x_x4629, _x_x4631, _x_x4633, _x_x4635, _x_x4637, _x_x4639, commands_10549, _ctx);
}

kk_string_t kk_api_hc__format__flag__usage(kk_api__cliflag f, kk_context_t* _ctx) { /* (f : cliflag) -> div string */ 
  bool _match_x2673;
  kk_integer_t _brw_x2676;
  kk_string_t _x_x4641;
  {
    struct kk_api_Cliflag* _con_x4642 = kk_api__as_Cliflag(f, _ctx);
    kk_string_t _x = _con_x4642->flag__short;
    kk_string_dup(_x, _ctx);
    _x_x4641 = _x; /*string*/
  }
  _brw_x2676 = kk_std_core_string_chars_fs_count(_x_x4641, _ctx); /*int*/
  bool _brw_x2677 = kk_integer_eq_borrow(_brw_x2676,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2676, _ctx);
  _match_x2673 = _brw_x2677; /*bool*/
  if (_match_x2673) {
    kk_string_t s_0_10561;
    kk_string_t _x_x4643;
    kk_define_string_literal(static, _s_x4644, 6, "    --", _ctx)
    _x_x4643 = kk_string_dup(_s_x4644, _ctx); /*string*/
    kk_string_t _x_x4645;
    {
      struct kk_api_Cliflag* _con_x4646 = kk_api__as_Cliflag(f, _ctx);
      kk_string_t _x_0 = _con_x4646->flag__name;
      kk_string_dup(_x_0, _ctx);
      _x_x4645 = _x_0; /*string*/
    }
    s_0_10561 = kk_std_core_types__lp__plus__plus__rp_(_x_x4643, _x_x4645, _ctx); /*string*/
    kk_integer_t y_10568;
    kk_string_t _x_x4647 = kk_string_dup(s_0_10561, _ctx); /*string*/
    y_10568 = kk_std_core_string_chars_fs_count(_x_x4647, _ctx); /*int*/
    kk_integer_t b_10566 = kk_integer_sub((kk_integer_from_small(24)),y_10568,kk_context()); /*int*/;
    kk_string_t _x_x4648;
    kk_string_t _x_x4649;
    kk_string_t _x_x4650;
    kk_define_string_literal(static, _s_x4651, 1, " ", _ctx)
    _x_x4650 = kk_string_dup(_s_x4651, _ctx); /*string*/
    kk_integer_t _x_x4652;
    bool _match_x2675 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10566,kk_context()); /*bool*/;
    if (_match_x2675) {
      kk_integer_drop(b_10566, _ctx);
      _x_x4652 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4652 = b_10566; /*int*/
    }
    _x_x4649 = kk_api_hc__repeat__str(_x_x4650, _x_x4652, _ctx); /*string*/
    _x_x4648 = kk_std_core_types__lp__plus__plus__rp_(s_0_10561, _x_x4649, _ctx); /*string*/
    kk_string_t _x_x4653;
    {
      struct kk_api_Cliflag* _con_x4654 = kk_api__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_2 = _con_x4654->flag__name;
      kk_string_t _pat_1_1 = _con_x4654->flag__short;
      kk_string_t _x_1 = _con_x4654->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_1, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4653 = _x_1; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4648, _x_x4653, _ctx);
  }
  {
    kk_string_t s_1_10570;
    kk_string_t _x_x4655;
    kk_define_string_literal(static, _s_x4656, 3, "  -", _ctx)
    _x_x4655 = kk_string_dup(_s_x4656, _ctx); /*string*/
    kk_string_t _x_x4657;
    kk_string_t _x_x4658;
    {
      struct kk_api_Cliflag* _con_x4659 = kk_api__as_Cliflag(f, _ctx);
      kk_string_t _x_2 = _con_x4659->flag__short;
      kk_string_dup(_x_2, _ctx);
      _x_x4658 = _x_2; /*string*/
    }
    kk_string_t _x_x4660;
    kk_string_t _x_x4661;
    kk_define_string_literal(static, _s_x4662, 4, ", --", _ctx)
    _x_x4661 = kk_string_dup(_s_x4662, _ctx); /*string*/
    kk_string_t _x_x4663;
    {
      struct kk_api_Cliflag* _con_x4664 = kk_api__as_Cliflag(f, _ctx);
      kk_string_t _x_3 = _con_x4664->flag__name;
      kk_string_dup(_x_3, _ctx);
      _x_x4663 = _x_3; /*string*/
    }
    _x_x4660 = kk_std_core_types__lp__plus__plus__rp_(_x_x4661, _x_x4663, _ctx); /*string*/
    _x_x4657 = kk_std_core_types__lp__plus__plus__rp_(_x_x4658, _x_x4660, _ctx); /*string*/
    s_1_10570 = kk_std_core_types__lp__plus__plus__rp_(_x_x4655, _x_x4657, _ctx); /*string*/
    kk_integer_t y_0_10578;
    kk_string_t _x_x4665 = kk_string_dup(s_1_10570, _ctx); /*string*/
    y_0_10578 = kk_std_core_string_chars_fs_count(_x_x4665, _ctx); /*int*/
    kk_integer_t b_0_10576 = kk_integer_sub((kk_integer_from_small(24)),y_0_10578,kk_context()); /*int*/;
    kk_string_t _x_x4666;
    kk_string_t _x_x4667;
    kk_string_t _x_x4668;
    kk_define_string_literal(static, _s_x4669, 1, " ", _ctx)
    _x_x4668 = kk_string_dup(_s_x4669, _ctx); /*string*/
    kk_integer_t _x_x4670;
    bool _match_x2674 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10576,kk_context()); /*bool*/;
    if (_match_x2674) {
      kk_integer_drop(b_0_10576, _ctx);
      _x_x4670 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4670 = b_0_10576; /*int*/
    }
    _x_x4667 = kk_api_hc__repeat__str(_x_x4668, _x_x4670, _ctx); /*string*/
    _x_x4666 = kk_std_core_types__lp__plus__plus__rp_(s_1_10570, _x_x4667, _ctx); /*string*/
    kk_string_t _x_x4671;
    {
      struct kk_api_Cliflag* _con_x4672 = kk_api__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_7 = _con_x4672->flag__name;
      kk_string_t _pat_1_4 = _con_x4672->flag__short;
      kk_string_t _x_4 = _con_x4672->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_4, _ctx);
        kk_string_drop(_pat_0_7, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_4, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4671 = _x_4; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4666, _x_x4671, _ctx);
  }
}

kk_string_t kk_api_hc__format__option__usage(kk_api__clioption o, kk_context_t* _ctx) { /* (o : clioption) -> div string */ 
  kk_string_t suffix;
  bool _match_x2670;
  kk_integer_t _brw_x2671;
  kk_string_t _x_x4673;
  {
    struct kk_api_Clioption* _con_x4674 = kk_api__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x4674->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x4673 = _x; /*string*/
  }
  _brw_x2671 = kk_std_core_string_chars_fs_count(_x_x4673, _ctx); /*int*/
  bool _brw_x2672 = kk_integer_eq_borrow(_brw_x2671,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2671, _ctx);
  _match_x2670 = _brw_x2672; /*bool*/
  if (_match_x2670) {
    suffix = kk_string_empty(); /*string*/
  }
  else {
    kk_string_t _x_x4676;
    kk_define_string_literal(static, _s_x4677, 11, " [default: ", _ctx)
    _x_x4676 = kk_string_dup(_s_x4677, _ctx); /*string*/
    kk_string_t _x_x4678;
    kk_string_t _x_x4679;
    {
      struct kk_api_Clioption* _con_x4680 = kk_api__as_Clioption(o, _ctx);
      kk_string_t _x_0 = _con_x4680->opt__default;
      kk_string_dup(_x_0, _ctx);
      _x_x4679 = _x_0; /*string*/
    }
    kk_string_t _x_x4681;
    kk_define_string_literal(static, _s_x4682, 1, "]", _ctx)
    _x_x4681 = kk_string_dup(_s_x4682, _ctx); /*string*/
    _x_x4678 = kk_std_core_types__lp__plus__plus__rp_(_x_x4679, _x_x4681, _ctx); /*string*/
    suffix = kk_std_core_types__lp__plus__plus__rp_(_x_x4676, _x_x4678, _ctx); /*string*/
  }
  bool _match_x2665;
  kk_integer_t _brw_x2668;
  kk_string_t _x_x4683;
  {
    struct kk_api_Clioption* _con_x4684 = kk_api__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x4684->opt__short;
    kk_string_dup(_x_1, _ctx);
    _x_x4683 = _x_1; /*string*/
  }
  _brw_x2668 = kk_std_core_string_chars_fs_count(_x_x4683, _ctx); /*int*/
  bool _brw_x2669 = kk_integer_eq_borrow(_brw_x2668,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2668, _ctx);
  _match_x2665 = _brw_x2669; /*bool*/
  if (_match_x2665) {
    kk_string_t s_1_10585;
    kk_string_t _x_x4685;
    kk_define_string_literal(static, _s_x4686, 6, "    --", _ctx)
    _x_x4685 = kk_string_dup(_s_x4686, _ctx); /*string*/
    kk_string_t _x_x4687;
    kk_string_t _x_x4688;
    {
      struct kk_api_Clioption* _con_x4689 = kk_api__as_Clioption(o, _ctx);
      kk_string_t _x_2 = _con_x4689->opt__name;
      kk_string_dup(_x_2, _ctx);
      _x_x4688 = _x_2; /*string*/
    }
    kk_string_t _x_x4690;
    kk_define_string_literal(static, _s_x4691, 6, " VALUE", _ctx)
    _x_x4690 = kk_string_dup(_s_x4691, _ctx); /*string*/
    _x_x4687 = kk_std_core_types__lp__plus__plus__rp_(_x_x4688, _x_x4690, _ctx); /*string*/
    s_1_10585 = kk_std_core_types__lp__plus__plus__rp_(_x_x4685, _x_x4687, _ctx); /*string*/
    kk_integer_t y_10592;
    kk_string_t _x_x4692 = kk_string_dup(s_1_10585, _ctx); /*string*/
    y_10592 = kk_std_core_string_chars_fs_count(_x_x4692, _ctx); /*int*/
    kk_integer_t b_10590 = kk_integer_sub((kk_integer_from_small(24)),y_10592,kk_context()); /*int*/;
    kk_string_t _x_x4693;
    kk_string_t _x_x4694;
    kk_string_t _x_x4695;
    kk_string_t _x_x4696;
    kk_define_string_literal(static, _s_x4697, 1, " ", _ctx)
    _x_x4696 = kk_string_dup(_s_x4697, _ctx); /*string*/
    kk_integer_t _x_x4698;
    bool _match_x2667 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10590,kk_context()); /*bool*/;
    if (_match_x2667) {
      kk_integer_drop(b_10590, _ctx);
      _x_x4698 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4698 = b_10590; /*int*/
    }
    _x_x4695 = kk_api_hc__repeat__str(_x_x4696, _x_x4698, _ctx); /*string*/
    _x_x4694 = kk_std_core_types__lp__plus__plus__rp_(s_1_10585, _x_x4695, _ctx); /*string*/
    kk_string_t _x_x4699;
    {
      struct kk_api_Clioption* _con_x4700 = kk_api__as_Clioption(o, _ctx);
      kk_string_t _pat_0_5 = _con_x4700->opt__name;
      kk_string_t _pat_1_4 = _con_x4700->opt__short;
      kk_string_t _x_3 = _con_x4700->opt__help;
      kk_string_t _pat_2_3 = _con_x4700->opt__default;
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
      _x_x4699 = _x_3; /*string*/
    }
    _x_x4693 = kk_std_core_types__lp__plus__plus__rp_(_x_x4694, _x_x4699, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4693, suffix, _ctx);
  }
  {
    kk_string_t s_2_10594;
    kk_string_t _x_x4701;
    kk_define_string_literal(static, _s_x4702, 3, "  -", _ctx)
    _x_x4701 = kk_string_dup(_s_x4702, _ctx); /*string*/
    kk_string_t _x_x4703;
    kk_string_t _x_x4704;
    {
      struct kk_api_Clioption* _con_x4705 = kk_api__as_Clioption(o, _ctx);
      kk_string_t _x_4 = _con_x4705->opt__short;
      kk_string_dup(_x_4, _ctx);
      _x_x4704 = _x_4; /*string*/
    }
    kk_string_t _x_x4706;
    kk_string_t _x_x4707;
    kk_define_string_literal(static, _s_x4708, 4, ", --", _ctx)
    _x_x4707 = kk_string_dup(_s_x4708, _ctx); /*string*/
    kk_string_t _x_x4709;
    kk_string_t _x_x4710;
    {
      struct kk_api_Clioption* _con_x4711 = kk_api__as_Clioption(o, _ctx);
      kk_string_t _x_5 = _con_x4711->opt__name;
      kk_string_dup(_x_5, _ctx);
      _x_x4710 = _x_5; /*string*/
    }
    kk_string_t _x_x4712;
    kk_define_string_literal(static, _s_x4713, 6, " VALUE", _ctx)
    _x_x4712 = kk_string_dup(_s_x4713, _ctx); /*string*/
    _x_x4709 = kk_std_core_types__lp__plus__plus__rp_(_x_x4710, _x_x4712, _ctx); /*string*/
    _x_x4706 = kk_std_core_types__lp__plus__plus__rp_(_x_x4707, _x_x4709, _ctx); /*string*/
    _x_x4703 = kk_std_core_types__lp__plus__plus__rp_(_x_x4704, _x_x4706, _ctx); /*string*/
    s_2_10594 = kk_std_core_types__lp__plus__plus__rp_(_x_x4701, _x_x4703, _ctx); /*string*/
    kk_integer_t y_0_10602;
    kk_string_t _x_x4714 = kk_string_dup(s_2_10594, _ctx); /*string*/
    y_0_10602 = kk_std_core_string_chars_fs_count(_x_x4714, _ctx); /*int*/
    kk_integer_t b_0_10600 = kk_integer_sub((kk_integer_from_small(24)),y_0_10602,kk_context()); /*int*/;
    kk_string_t _x_x4715;
    kk_string_t _x_x4716;
    kk_string_t _x_x4717;
    kk_string_t _x_x4718;
    kk_define_string_literal(static, _s_x4719, 1, " ", _ctx)
    _x_x4718 = kk_string_dup(_s_x4719, _ctx); /*string*/
    kk_integer_t _x_x4720;
    bool _match_x2666 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10600,kk_context()); /*bool*/;
    if (_match_x2666) {
      kk_integer_drop(b_0_10600, _ctx);
      _x_x4720 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4720 = b_0_10600; /*int*/
    }
    _x_x4717 = kk_api_hc__repeat__str(_x_x4718, _x_x4720, _ctx); /*string*/
    _x_x4716 = kk_std_core_types__lp__plus__plus__rp_(s_2_10594, _x_x4717, _ctx); /*string*/
    kk_string_t _x_x4721;
    {
      struct kk_api_Clioption* _con_x4722 = kk_api__as_Clioption(o, _ctx);
      kk_string_t _pat_0_9 = _con_x4722->opt__name;
      kk_string_t _pat_1_7 = _con_x4722->opt__short;
      kk_string_t _x_6 = _con_x4722->opt__help;
      kk_string_t _pat_2_7 = _con_x4722->opt__default;
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
      _x_x4721 = _x_6; /*string*/
    }
    _x_x4715 = kk_std_core_types__lp__plus__plus__rp_(_x_x4716, _x_x4721, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4715, suffix, _ctx);
  }
}

kk_string_t kk_api_hc__format__arg__usage(kk_api__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> div string */ 
  kk_string_t s_10604;
  kk_string_t _x_x4723;
  kk_define_string_literal(static, _s_x4724, 3, "  <", _ctx)
  _x_x4723 = kk_string_dup(_s_x4724, _ctx); /*string*/
  kk_string_t _x_x4725;
  kk_string_t _x_x4726;
  {
    struct kk_api_Cliarg* _con_x4727 = kk_api__as_Cliarg(a, _ctx);
    kk_string_t _x_0 = _con_x4727->arg__name;
    kk_string_dup(_x_0, _ctx);
    _x_x4726 = _x_0; /*string*/
  }
  kk_string_t _x_x4728;
  kk_define_string_literal(static, _s_x4729, 1, ">", _ctx)
  _x_x4728 = kk_string_dup(_s_x4729, _ctx); /*string*/
  _x_x4725 = kk_std_core_types__lp__plus__plus__rp_(_x_x4726, _x_x4728, _ctx); /*string*/
  s_10604 = kk_std_core_types__lp__plus__plus__rp_(_x_x4723, _x_x4725, _ctx); /*string*/
  kk_integer_t y_10611;
  kk_string_t _x_x4730 = kk_string_dup(s_10604, _ctx); /*string*/
  y_10611 = kk_std_core_string_chars_fs_count(_x_x4730, _ctx); /*int*/
  kk_integer_t b_10609 = kk_integer_sub((kk_integer_from_small(24)),y_10611,kk_context()); /*int*/;
  kk_string_t _x_x4731;
  kk_string_t _x_x4732;
  kk_string_t _x_x4733;
  kk_string_t _x_x4734;
  kk_define_string_literal(static, _s_x4735, 1, " ", _ctx)
  _x_x4734 = kk_string_dup(_s_x4735, _ctx); /*string*/
  kk_integer_t _x_x4736;
  bool _match_x2664 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10609,kk_context()); /*bool*/;
  if (_match_x2664) {
    kk_integer_drop(b_10609, _ctx);
    _x_x4736 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4736 = b_10609; /*int*/
  }
  _x_x4733 = kk_api_hc__repeat__str(_x_x4734, _x_x4736, _ctx); /*string*/
  _x_x4732 = kk_std_core_types__lp__plus__plus__rp_(s_10604, _x_x4733, _ctx); /*string*/
  kk_string_t _x_x4737;
  {
    struct kk_api_Cliarg* _con_x4738 = kk_api__as_Cliarg(a, _ctx);
    kk_string_t _x_1 = _con_x4738->arg__help;
    kk_string_dup(_x_1, _ctx);
    _x_x4737 = _x_1; /*string*/
  }
  _x_x4731 = kk_std_core_types__lp__plus__plus__rp_(_x_x4732, _x_x4737, _ctx); /*string*/
  kk_string_t _x_x4739;
  {
    struct kk_api_Cliarg* _con_x4740 = kk_api__as_Cliarg(a, _ctx);
    kk_string_t _pat_0 = _con_x4740->arg__name;
    kk_string_t _pat_1 = _con_x4740->arg__help;
    bool _x = _con_x4740->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_datatype_ptr_decref(a, _ctx);
    }
    if (_x) {
      kk_define_string_literal(static, _s_x4741, 11, " (required)", _ctx)
      _x_x4739 = kk_string_dup(_s_x4741, _ctx); /*string*/
    }
    else {
      _x_x4739 = kk_string_empty(); /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4731, _x_x4739, _ctx);
}

kk_string_t kk_api_hc__format__arg__label(kk_api__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> string */ 
  {
    struct kk_api_Cliarg* _con_x4743 = kk_api__as_Cliarg(a, _ctx);
    bool _x = _con_x4743->arg__required;
    if (_x) {
      kk_string_t _x_x4744;
      kk_define_string_literal(static, _s_x4745, 2, " <", _ctx)
      _x_x4744 = kk_string_dup(_s_x4745, _ctx); /*string*/
      kk_string_t _x_x4746;
      kk_string_t _x_x4747;
      {
        struct kk_api_Cliarg* _con_x4748 = kk_api__as_Cliarg(a, _ctx);
        kk_string_t _x_0 = _con_x4748->arg__name;
        kk_string_t _pat_0_0 = _con_x4748->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_0, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4747 = _x_0; /*string*/
      }
      kk_string_t _x_x4749;
      kk_define_string_literal(static, _s_x4750, 1, ">", _ctx)
      _x_x4749 = kk_string_dup(_s_x4750, _ctx); /*string*/
      _x_x4746 = kk_std_core_types__lp__plus__plus__rp_(_x_x4747, _x_x4749, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4744, _x_x4746, _ctx);
    }
    {
      kk_string_t _x_x4751;
      kk_define_string_literal(static, _s_x4752, 2, " [", _ctx)
      _x_x4751 = kk_string_dup(_s_x4752, _ctx); /*string*/
      kk_string_t _x_x4753;
      kk_string_t _x_x4754;
      {
        struct kk_api_Cliarg* _con_x4755 = kk_api__as_Cliarg(a, _ctx);
        kk_string_t _x_1 = _con_x4755->arg__name;
        kk_string_t _pat_0_2 = _con_x4755->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_1, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4754 = _x_1; /*string*/
      }
      kk_string_t _x_x4756;
      kk_define_string_literal(static, _s_x4757, 1, "]", _ctx)
      _x_x4756 = kk_string_dup(_s_x4757, _ctx); /*string*/
      _x_x4753 = kk_std_core_types__lp__plus__plus__rp_(_x_x4754, _x_x4756, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4751, _x_x4753, _ctx);
    }
  }
}

kk_string_t kk_api_hc__format__cmd__usage(kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (pair : (string, clispec)) -> div string */ 
  kk_string_t s_10617;
  kk_string_t _x_x4758;
  kk_define_string_literal(static, _s_x4759, 2, "  ", _ctx)
  _x_x4758 = kk_string_dup(_s_x4759, _ctx); /*string*/
  kk_string_t _x_x4760;
  {
    kk_box_t _box_x482 = pair.fst;
    kk_box_t _box_x483 = pair.snd;
    kk_string_t _x = kk_string_unbox(_box_x482);
    kk_string_dup(_x, _ctx);
    _x_x4760 = _x; /*string*/
  }
  s_10617 = kk_std_core_types__lp__plus__plus__rp_(_x_x4758, _x_x4760, _ctx); /*string*/
  kk_integer_t y_10624;
  kk_string_t _x_x4761 = kk_string_dup(s_10617, _ctx); /*string*/
  y_10624 = kk_std_core_string_chars_fs_count(_x_x4761, _ctx); /*int*/
  kk_integer_t b_10622 = kk_integer_sub((kk_integer_from_small(24)),y_10624,kk_context()); /*int*/;
  kk_string_t _x_x4762;
  kk_string_t _x_x4763;
  kk_string_t _x_x4764;
  kk_define_string_literal(static, _s_x4765, 1, " ", _ctx)
  _x_x4764 = kk_string_dup(_s_x4765, _ctx); /*string*/
  kk_integer_t _x_x4766;
  bool _match_x2663 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10622,kk_context()); /*bool*/;
  if (_match_x2663) {
    kk_integer_drop(b_10622, _ctx);
    _x_x4766 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4766 = b_10622; /*int*/
  }
  _x_x4763 = kk_api_hc__repeat__str(_x_x4764, _x_x4766, _ctx); /*string*/
  _x_x4762 = kk_std_core_types__lp__plus__plus__rp_(s_10617, _x_x4763, _ctx); /*string*/
  kk_string_t _x_x4767;
  {
    kk_box_t _box_x484 = pair.fst;
    kk_box_t _box_x485 = pair.snd;
    kk_api__clispec _x_1 = kk_api__clispec_unbox(_box_x485, KK_BORROWED, _ctx);
    kk_api__clispec_dup(_x_1, _ctx);
    kk_std_core_types__tuple2_drop(pair, _ctx);
    {
      struct kk_api_Clispec* _con_x4768 = kk_api__as_Clispec(_x_1, _ctx);
      kk_string_t _pat_0_1 = _con_x4768->app__name;
      kk_string_t _pat_1_0 = _con_x4768->app__version;
      kk_string_t _x_0 = _con_x4768->app__about;
      kk_std_core_types__list _pat_2_0 = _con_x4768->app__flags;
      kk_std_core_types__list _pat_3 = _con_x4768->app__options;
      kk_std_core_types__list _pat_4 = _con_x4768->app__args;
      kk_std_core_types__list _pat_5 = _con_x4768->app__commands;
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
      _x_x4767 = _x_0; /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4762, _x_x4767, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__help_fun4782__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__help_fun4782(kk_function_t _fself, kk_box_t _b_x488, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__help_fun4782(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__help_fun4782, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__help_fun4782(kk_function_t _fself, kk_box_t _b_x488, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4783;
  kk_api__cliarg _x_x4784 = kk_api__cliarg_unbox(_b_x488, KK_OWNED, _ctx); /*api/cliarg*/
  _x_x4783 = kk_api_hc__format__arg__label(_x_x4784, _ctx); /*string*/
  return kk_string_box(_x_x4783);
}


// lift anonymous function
struct kk_api_hc__cli__help_fun4802__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__help_fun4802(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__help_fun4802(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__help_fun4802, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__help_fun4802(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4803;
  kk_api__cliflag _x_x4804 = kk_api__cliflag_unbox(_b_x493, KK_OWNED, _ctx); /*api/cliflag*/
  _x_x4803 = kk_api_hc__format__flag__usage(_x_x4804, _ctx); /*string*/
  return kk_string_box(_x_x4803);
}


// lift anonymous function
struct kk_api_hc__cli__help_fun4807__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__help_fun4807(kk_function_t _fself, kk_box_t _b_x498, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__help_fun4807(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__help_fun4807, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__help_fun4807(kk_function_t _fself, kk_box_t _b_x498, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4808;
  kk_api__clioption _x_x4809 = kk_api__clioption_unbox(_b_x498, KK_OWNED, _ctx); /*api/clioption*/
  _x_x4808 = kk_api_hc__format__option__usage(_x_x4809, _ctx); /*string*/
  return kk_string_box(_x_x4808);
}


// lift anonymous function
struct kk_api_hc__cli__help_fun4848__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__help_fun4848(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__help_fun4848(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__help_fun4848, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__help_fun4848(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4849;
  kk_api__cliarg _x_x4850 = kk_api__cliarg_unbox(_b_x513, KK_OWNED, _ctx); /*api/cliarg*/
  _x_x4849 = kk_api_hc__format__arg__usage(_x_x4850, _ctx); /*string*/
  return kk_string_box(_x_x4849);
}


// lift anonymous function
struct kk_api_hc__cli__help_fun4864__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__help_fun4864(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__help_fun4864(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__help_fun4864, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__help_fun4864(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4865;
  kk_std_core_types__tuple2 _x_x4866 = kk_std_core_types__tuple2_unbox(_b_x526, KK_OWNED, _ctx); /*(string, api/clispec)*/
  _x_x4865 = kk_api_hc__format__cmd__usage(_x_x4866, _ctx); /*string*/
  return kk_string_box(_x_x4865);
}

kk_string_t kk_api_hc__cli__help(kk_api__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> div string */ 
  kk_string_t header;
  kk_string_t _x_x4769;
  {
    struct kk_api_Clispec* _con_x4770 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4770->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4769 = _x; /*string*/
  }
  kk_string_t _x_x4771;
  kk_string_t _x_x4772;
  kk_define_string_literal(static, _s_x4773, 1, " ", _ctx)
  _x_x4772 = kk_string_dup(_s_x4773, _ctx); /*string*/
  kk_string_t _x_x4774;
  kk_string_t _x_x4775;
  {
    struct kk_api_Clispec* _con_x4776 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4776->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4775 = _x_0; /*string*/
  }
  kk_string_t _x_x4777;
  kk_string_t _x_x4778;
  kk_define_string_literal(static, _s_x4779, 5, " " "\xE2\x80\x94" " ", _ctx)
  _x_x4778 = kk_string_dup(_s_x4779, _ctx); /*string*/
  kk_string_t _x_x4780;
  {
    struct kk_api_Clispec* _con_x4781 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4781->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4780 = _x_1; /*string*/
  }
  _x_x4777 = kk_std_core_types__lp__plus__plus__rp_(_x_x4778, _x_x4780, _ctx); /*string*/
  _x_x4774 = kk_std_core_types__lp__plus__plus__rp_(_x_x4775, _x_x4777, _ctx); /*string*/
  _x_x4771 = kk_std_core_types__lp__plus__plus__rp_(_x_x4772, _x_x4774, _ctx); /*string*/
  header = kk_std_core_types__lp__plus__plus__rp_(_x_x4769, _x_x4771, _ctx); /*string*/
  kk_std_core_types__list arg__labels;
  kk_function_t _brw_x2661 = kk_api_new_hc__cli__help_fun4782(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2662;
  kk_std_core_types__list _x_x4785;
  {
    struct kk_api_Clispec* _con_x4786 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4786->app__args;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4785 = _x_2; /*list<api/cliarg>*/
  }
  _brw_x2662 = kk_std_core_list_map(_x_x4785, _brw_x2661, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2661, _ctx);
  arg__labels = _brw_x2662; /*list<string>*/
  kk_string_t args__str;
  kk_string_t _x_x4787 = kk_string_empty(); /*string*/
  args__str = kk_std_core_list_joinsep(arg__labels, _x_x4787, _ctx); /*string*/
  kk_string_t cmds__str;
  bool _match_x2658;
  kk_integer_t _brw_x2659;
  kk_std_core_types__list _x_x4789;
  {
    struct kk_api_Clispec* _con_x4790 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4790->app__commands;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4789 = _x_3; /*list<(string, api/clispec)>*/
  }
  _brw_x2659 = kk_std_core_list__lift_length_6003(_x_x4789, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2660 = kk_integer_gt_borrow(_brw_x2659,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2659, _ctx);
  _match_x2658 = _brw_x2660; /*bool*/
  if (_match_x2658) {
    kk_define_string_literal(static, _s_x4791, 10, " <COMMAND>", _ctx)
    cmds__str = kk_string_dup(_s_x4791, _ctx); /*string*/
  }
  else {
    cmds__str = kk_string_empty(); /*string*/
  }
  kk_string_t usage__line;
  kk_string_t _x_x4793;
  kk_define_string_literal(static, _s_x4794, 7, "USAGE: ", _ctx)
  _x_x4793 = kk_string_dup(_s_x4794, _ctx); /*string*/
  kk_string_t _x_x4795;
  kk_string_t _x_x4796;
  {
    struct kk_api_Clispec* _con_x4797 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x_4 = _con_x4797->app__name;
    kk_string_dup(_x_4, _ctx);
    _x_x4796 = _x_4; /*string*/
  }
  kk_string_t _x_x4798;
  kk_string_t _x_x4799;
  kk_define_string_literal(static, _s_x4800, 10, " [OPTIONS]", _ctx)
  _x_x4799 = kk_string_dup(_s_x4800, _ctx); /*string*/
  kk_string_t _x_x4801 = kk_std_core_types__lp__plus__plus__rp_(args__str, cmds__str, _ctx); /*string*/
  _x_x4798 = kk_std_core_types__lp__plus__plus__rp_(_x_x4799, _x_x4801, _ctx); /*string*/
  _x_x4795 = kk_std_core_types__lp__plus__plus__rp_(_x_x4796, _x_x4798, _ctx); /*string*/
  usage__line = kk_std_core_types__lp__plus__plus__rp_(_x_x4793, _x_x4795, _ctx); /*string*/
  kk_std_core_types__list flag__lines;
  kk_function_t _brw_x2656 = kk_api_new_hc__cli__help_fun4802(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2657;
  kk_std_core_types__list _x_x4805;
  {
    struct kk_api_Clispec* _con_x4806 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4806->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4805 = _x_5; /*list<api/cliflag>*/
  }
  _brw_x2657 = kk_std_core_list_map(_x_x4805, _brw_x2656, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2656, _ctx);
  flag__lines = _brw_x2657; /*list<string>*/
  kk_std_core_types__list opt__lines;
  kk_function_t _brw_x2654 = kk_api_new_hc__cli__help_fun4807(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2655;
  kk_std_core_types__list _x_x4810;
  {
    struct kk_api_Clispec* _con_x4811 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_6 = _con_x4811->app__options;
    kk_std_core_types__list_dup(_x_6, _ctx);
    _x_x4810 = _x_6; /*list<api/clioption>*/
  }
  _brw_x2655 = kk_std_core_list_map(_x_x4810, _brw_x2654, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2654, _ctx);
  opt__lines = _brw_x2655; /*list<string>*/
  kk_integer_t y_10645;
  kk_string_t _x_x4812;
  kk_define_string_literal(static, _s_x4813, 12, "  -h, --help", _ctx)
  _x_x4812 = kk_string_dup(_s_x4813, _ctx); /*string*/
  y_10645 = kk_std_core_string_chars_fs_count(_x_x4812, _ctx); /*int*/
  kk_integer_t b_10643 = kk_integer_sub((kk_integer_from_small(24)),y_10645,kk_context()); /*int*/;
  kk_integer_t y_0_10652;
  kk_string_t _x_x4814;
  kk_define_string_literal(static, _s_x4815, 15, "      --version", _ctx)
  _x_x4814 = kk_string_dup(_s_x4815, _ctx); /*string*/
  y_0_10652 = kk_std_core_string_chars_fs_count(_x_x4814, _ctx); /*int*/
  kk_integer_t b_0_10650 = kk_integer_sub((kk_integer_from_small(24)),y_0_10652,kk_context()); /*int*/;
  kk_string_t _b_x503_505;
  kk_string_t _x_x4816;
  kk_string_t _x_x4817;
  kk_define_string_literal(static, _s_x4818, 12, "  -h, --help", _ctx)
  _x_x4817 = kk_string_dup(_s_x4818, _ctx); /*string*/
  kk_string_t _x_x4819;
  kk_string_t _x_x4820;
  kk_define_string_literal(static, _s_x4821, 1, " ", _ctx)
  _x_x4820 = kk_string_dup(_s_x4821, _ctx); /*string*/
  kk_integer_t _x_x4822;
  bool _match_x2653 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10643,kk_context()); /*bool*/;
  if (_match_x2653) {
    kk_integer_drop(b_10643, _ctx);
    _x_x4822 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4822 = b_10643; /*int*/
  }
  _x_x4819 = kk_api_hc__repeat__str(_x_x4820, _x_x4822, _ctx); /*string*/
  _x_x4816 = kk_std_core_types__lp__plus__plus__rp_(_x_x4817, _x_x4819, _ctx); /*string*/
  kk_string_t _x_x4823;
  kk_define_string_literal(static, _s_x4824, 14, "Show this help", _ctx)
  _x_x4823 = kk_string_dup(_s_x4824, _ctx); /*string*/
  _b_x503_505 = kk_std_core_types__lp__plus__plus__rp_(_x_x4816, _x_x4823, _ctx); /*string*/
  kk_string_t _b_x501_507;
  kk_string_t _x_x4825;
  kk_string_t _x_x4826;
  kk_define_string_literal(static, _s_x4827, 15, "      --version", _ctx)
  _x_x4826 = kk_string_dup(_s_x4827, _ctx); /*string*/
  kk_string_t _x_x4828;
  kk_string_t _x_x4829;
  kk_define_string_literal(static, _s_x4830, 1, " ", _ctx)
  _x_x4829 = kk_string_dup(_s_x4830, _ctx); /*string*/
  kk_integer_t _x_x4831;
  bool _match_x2652 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10650,kk_context()); /*bool*/;
  if (_match_x2652) {
    kk_integer_drop(b_0_10650, _ctx);
    _x_x4831 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4831 = b_0_10650; /*int*/
  }
  _x_x4828 = kk_api_hc__repeat__str(_x_x4829, _x_x4831, _ctx); /*string*/
  _x_x4825 = kk_std_core_types__lp__plus__plus__rp_(_x_x4826, _x_x4828, _ctx); /*string*/
  kk_string_t _x_x4832;
  kk_define_string_literal(static, _s_x4833, 12, "Show version", _ctx)
  _x_x4832 = kk_string_dup(_s_x4833, _ctx); /*string*/
  _b_x501_507 = kk_std_core_types__lp__plus__plus__rp_(_x_x4825, _x_x4832, _ctx); /*string*/
  kk_std_core_types__list xs_1_10653 = kk_std_core_list_append(flag__lines, opt__lines, _ctx); /*list<string>*/;
  kk_std_core_types__list all__opts;
  kk_std_core_types__list _x_x4834;
  kk_std_core_types__list _x_x4835 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x501_507), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _x_x4834 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x503_505), _x_x4835, _ctx); /*list<10021>*/
  all__opts = kk_std_core_list_append(xs_1_10653, _x_x4834, _ctx); /*list<string>*/
  kk_string_t init_11192;
  kk_string_t _x_x4836;
  kk_string_t _x_x4837;
  kk_define_string_literal(static, _s_x4838, 2, "\n\n", _ctx)
  _x_x4837 = kk_string_dup(_s_x4838, _ctx); /*string*/
  kk_string_t _x_x4839;
  kk_string_t _x_x4840;
  kk_string_t _x_x4841;
  kk_define_string_literal(static, _s_x4842, 11, "\n\nOPTIONS:\n", _ctx)
  _x_x4841 = kk_string_dup(_s_x4842, _ctx); /*string*/
  kk_string_t _x_x4843;
  kk_string_t _x_x4844;
  kk_define_string_literal(static, _s_x4845, 1, "\n", _ctx)
  _x_x4844 = kk_string_dup(_s_x4845, _ctx); /*string*/
  _x_x4843 = kk_std_core_list_joinsep(all__opts, _x_x4844, _ctx); /*string*/
  _x_x4840 = kk_std_core_types__lp__plus__plus__rp_(_x_x4841, _x_x4843, _ctx); /*string*/
  _x_x4839 = kk_std_core_types__lp__plus__plus__rp_(usage__line, _x_x4840, _ctx); /*string*/
  _x_x4836 = kk_std_core_types__lp__plus__plus__rp_(_x_x4837, _x_x4839, _ctx); /*string*/
  init_11192 = kk_std_core_types__lp__plus__plus__rp_(header, _x_x4836, _ctx); /*string*/
  kk_ref_t loc = kk_ref_alloc((kk_string_box(init_11192)),kk_context()); /*local-var<19235,string>*/;
  kk_unit_t __ = kk_Unit;
  bool _match_x2647;
  kk_integer_t _brw_x2650;
  kk_std_core_types__list _x_x4846;
  {
    struct kk_api_Clispec* _con_x4847 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_7 = _con_x4847->app__args;
    kk_std_core_types__list_dup(_x_7, _ctx);
    _x_x4846 = _x_7; /*list<api/cliarg>*/
  }
  _brw_x2650 = kk_std_core_list__lift_length_6003(_x_x4846, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2651 = kk_integer_gt_borrow(_brw_x2650,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2650, _ctx);
  _match_x2647 = _brw_x2651; /*bool*/
  if (_match_x2647) {
    kk_std_core_types__list arg__lines;
    kk_function_t _brw_x2648 = kk_api_new_hc__cli__help_fun4848(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2649;
    kk_std_core_types__list _x_x4851;
    {
      struct kk_api_Clispec* _con_x4852 = kk_api__as_Clispec(spec, _ctx);
      kk_std_core_types__list _x_8 = _con_x4852->app__args;
      kk_std_core_types__list_dup(_x_8, _ctx);
      _x_x4851 = _x_8; /*list<api/cliarg>*/
    }
    _brw_x2649 = kk_std_core_list_map(_x_x4851, _brw_x2648, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2648, _ctx);
    arg__lines = _brw_x2649; /*list<string>*/
    kk_string_t _b_x519_521;
    kk_string_t _x_x4853;
    kk_box_t _x_x4854;
    kk_ref_t _x_x4855 = kk_ref_dup(loc, _ctx); /*local-var<19235,string>*/
    _x_x4854 = kk_ref_get(_x_x4855,kk_context()); /*10000*/
    _x_x4853 = kk_string_unbox(_x_x4854); /*string*/
    kk_string_t _x_x4856;
    kk_string_t _x_x4857;
    kk_define_string_literal(static, _s_x4858, 8, "\n\nARGS:\n", _ctx)
    _x_x4857 = kk_string_dup(_s_x4858, _ctx); /*string*/
    kk_string_t _x_x4859;
    kk_string_t _x_x4860;
    kk_define_string_literal(static, _s_x4861, 1, "\n", _ctx)
    _x_x4860 = kk_string_dup(_s_x4861, _ctx); /*string*/
    _x_x4859 = kk_std_core_list_joinsep(arg__lines, _x_x4860, _ctx); /*string*/
    _x_x4856 = kk_std_core_types__lp__plus__plus__rp_(_x_x4857, _x_x4859, _ctx); /*string*/
    _b_x519_521 = kk_std_core_types__lp__plus__plus__rp_(_x_x4853, _x_x4856, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x519_521)),kk_context());
  }
  else {
    
  }
  kk_unit_t ___0 = kk_Unit;
  bool _match_x2642;
  kk_integer_t _brw_x2645;
  kk_std_core_types__list _x_x4862;
  {
    struct kk_api_Clispec* _con_x4863 = kk_api__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_9 = _con_x4863->app__commands;
    kk_std_core_types__list_dup(_x_9, _ctx);
    _x_x4862 = _x_9; /*list<(string, api/clispec)>*/
  }
  _brw_x2645 = kk_std_core_list__lift_length_6003(_x_x4862, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2646 = kk_integer_gt_borrow(_brw_x2645,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2645, _ctx);
  _match_x2642 = _brw_x2646; /*bool*/
  if (_match_x2642) {
    kk_std_core_types__list cmd__lines;
    kk_function_t _brw_x2643 = kk_api_new_hc__cli__help_fun4864(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2644;
    kk_std_core_types__list _x_x4867;
    {
      struct kk_api_Clispec* _con_x4868 = kk_api__as_Clispec(spec, _ctx);
      kk_string_t _pat_0_13 = _con_x4868->app__name;
      kk_string_t _pat_1_11 = _con_x4868->app__version;
      kk_string_t _pat_2_11 = _con_x4868->app__about;
      kk_std_core_types__list _pat_3_11 = _con_x4868->app__flags;
      kk_std_core_types__list _pat_4_10 = _con_x4868->app__options;
      kk_std_core_types__list _pat_5_10 = _con_x4868->app__args;
      kk_std_core_types__list _x_10 = _con_x4868->app__commands;
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
      _x_x4867 = _x_10; /*list<(string, api/clispec)>*/
    }
    _brw_x2644 = kk_std_core_list_map(_x_x4867, _brw_x2643, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2643, _ctx);
    cmd__lines = _brw_x2644; /*list<string>*/
    kk_string_t _b_x532_534;
    kk_string_t _x_x4869;
    kk_box_t _x_x4870;
    kk_ref_t _x_x4871 = kk_ref_dup(loc, _ctx); /*local-var<19235,string>*/
    _x_x4870 = kk_ref_get(_x_x4871,kk_context()); /*10000*/
    _x_x4869 = kk_string_unbox(_x_x4870); /*string*/
    kk_string_t _x_x4872;
    kk_string_t _x_x4873;
    kk_define_string_literal(static, _s_x4874, 12, "\n\nCOMMANDS:\n", _ctx)
    _x_x4873 = kk_string_dup(_s_x4874, _ctx); /*string*/
    kk_string_t _x_x4875;
    kk_string_t _x_x4876;
    kk_define_string_literal(static, _s_x4877, 1, "\n", _ctx)
    _x_x4876 = kk_string_dup(_s_x4877, _ctx); /*string*/
    _x_x4875 = kk_std_core_list_joinsep(cmd__lines, _x_x4876, _ctx); /*string*/
    _x_x4872 = kk_std_core_types__lp__plus__plus__rp_(_x_x4873, _x_x4875, _ctx); /*string*/
    _b_x532_534 = kk_std_core_types__lp__plus__plus__rp_(_x_x4869, _x_x4872, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x532_534)),kk_context());
  }
  else {
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
  }
  kk_string_t res;
  kk_box_t _x_x4878;
  kk_ref_t _x_x4879 = kk_ref_dup(loc, _ctx); /*local-var<19235,string>*/
  _x_x4878 = kk_ref_get(_x_x4879,kk_context()); /*10000*/
  res = kk_string_unbox(_x_x4878); /*string*/
  kk_box_t _x_x4880 = kk_std_core_hnd_prompt_local_var(loc, kk_string_box(res), _ctx); /*10001*/
  return kk_string_unbox(_x_x4880);
}

kk_string_t kk_api_hc__cli__version__str(kk_api__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> string */ 
  kk_string_t _x_x4881;
  {
    struct kk_api_Clispec* _con_x4882 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4882->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4881 = _x; /*string*/
  }
  kk_string_t _x_x4883;
  kk_string_t _x_x4884;
  kk_define_string_literal(static, _s_x4885, 1, " ", _ctx)
  _x_x4884 = kk_string_dup(_s_x4885, _ctx); /*string*/
  kk_string_t _x_x4886;
  {
    struct kk_api_Clispec* _con_x4887 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_0 = _con_x4887->app__name;
    kk_string_t _x_0 = _con_x4887->app__version;
    kk_string_t _pat_1_0 = _con_x4887->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x4887->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x4887->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x4887->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x4887->app__commands;
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
    _x_x4886 = _x_0; /*string*/
  }
  _x_x4883 = kk_std_core_types__lp__plus__plus__rp_(_x_x4884, _x_x4886, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4881, _x_x4883, _ctx);
}


// lift anonymous function
struct kk_api_hc__has__flag_fun4892__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_api_hc__has__flag_fun4892(kk_function_t _fself, kk_box_t _b_x547, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__has__flag_fun4892(kk_string_t name, kk_context_t* _ctx) {
  struct kk_api_hc__has__flag_fun4892__t* _self = kk_function_alloc_as(struct kk_api_hc__has__flag_fun4892__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__has__flag_fun4892, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__has__flag_fun4892(kk_function_t _fself, kk_box_t _b_x547, kk_context_t* _ctx) {
  struct kk_api_hc__has__flag_fun4892__t* _self = kk_function_as(struct kk_api_hc__has__flag_fun4892__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4893 = kk_string_unbox(_b_x547); /*string*/
  return kk_string_is_eq(_x_x4893,name,kk_context());
}

bool kk_api_hc__has__flag(kk_api__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> bool */ 
  kk_std_core_types__list _x_x4890;
  {
    struct kk_api_Cliresult* _con_x4891 = kk_api__as_Cliresult(r, _ctx);
    kk_std_core_types__list _x = _con_x4891->cli__flags;
    kk_std_core_types__list _pat_0 = _con_x4891->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4891->cli__positionals;
    kk_string_t _pat_2 = _con_x4891->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4891->cli__sub;
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
    _x_x4890 = _x; /*list<string>*/
  }
  return kk_std_core_list_any(_x_x4890, kk_api_new_hc__has__flag_fun4892(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_hc__get__opt_fun4896__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_api_hc__get__opt_fun4896(kk_function_t _fself, kk_box_t _b_x555, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__get__opt_fun4896(kk_string_t name, kk_context_t* _ctx) {
  struct kk_api_hc__get__opt_fun4896__t* _self = kk_function_alloc_as(struct kk_api_hc__get__opt_fun4896__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__get__opt_fun4896, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__get__opt_fun4896(kk_function_t _fself, kk_box_t _b_x555, kk_context_t* _ctx) {
  struct kk_api_hc__get__opt_fun4896__t* _self = kk_function_as(struct kk_api_hc__get__opt_fun4896__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_563 = kk_std_core_types__tuple2_unbox(_b_x555, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4897;
  {
    kk_box_t _box_x551 = pair_563.fst;
    kk_box_t _box_x552 = pair_563.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x551);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_563, _ctx);
    _x_x4897 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4897,name,kk_context());
}

kk_std_core_types__maybe kk_api_hc__get__opt(kk_api__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> maybe<string> */ 
  kk_std_core_types__maybe _match_x2641;
  kk_std_core_types__list _x_x4894;
  {
    struct kk_api_Cliresult* _con_x4895 = kk_api__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4895->cli__flags;
    kk_std_core_types__list _x = _con_x4895->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4895->cli__positionals;
    kk_string_t _pat_2 = _con_x4895->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4895->cli__sub;
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
    _x_x4894 = _x; /*list<(string, string)>*/
  }
  _match_x2641 = kk_std_core_list_find(_x_x4894, kk_api_new_hc__get__opt_fun4896(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2641, _ctx)) {
    kk_box_t _box_x556 = _match_x2641._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x556, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2641, _ctx);
    kk_box_t _x_x4898;
    kk_string_t _x_x4899;
    {
      kk_box_t _box_x557 = pair_0.fst;
      kk_box_t _box_x558 = pair_0.snd;
      kk_string_t _x_1 = kk_string_unbox(_box_x558);
      kk_string_dup(_x_1, _ctx);
      kk_std_core_types__tuple2_drop(pair_0, _ctx);
      _x_x4899 = _x_1; /*string*/
    }
    _x_x4898 = kk_string_box(_x_x4899); /*10024*/
    return kk_std_core_types__new_Just(_x_x4898, _ctx);
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_api_hc__get__opt__or_fun4902__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_api_hc__get__opt__or_fun4902(kk_function_t _fself, kk_box_t _b_x568, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__get__opt__or_fun4902(kk_string_t name, kk_context_t* _ctx) {
  struct kk_api_hc__get__opt__or_fun4902__t* _self = kk_function_alloc_as(struct kk_api_hc__get__opt__or_fun4902__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__get__opt__or_fun4902, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__get__opt__or_fun4902(kk_function_t _fself, kk_box_t _b_x568, kk_context_t* _ctx) {
  struct kk_api_hc__get__opt__or_fun4902__t* _self = kk_function_as(struct kk_api_hc__get__opt__or_fun4902__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_575 = kk_std_core_types__tuple2_unbox(_b_x568, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4903;
  {
    kk_box_t _box_x564 = pair_575.fst;
    kk_box_t _box_x565 = pair_575.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x564);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_575, _ctx);
    _x_x4903 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4903,name,kk_context());
}

kk_string_t kk_api_hc__get__opt__or(kk_api__cliresult r, kk_string_t name, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (r : cliresult, name : string, default : string) -> string */ 
  kk_std_core_types__maybe _match_x2639;
  kk_std_core_types__list _x_x4900;
  {
    struct kk_api_Cliresult* _con_x4901 = kk_api__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4901->cli__flags;
    kk_std_core_types__list _x = _con_x4901->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4901->cli__positionals;
    kk_string_t _pat_2 = _con_x4901->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4901->cli__sub;
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
    _x_x4900 = _x; /*list<(string, string)>*/
  }
  _match_x2639 = kk_std_core_list_find(_x_x4900, kk_api_new_hc__get__opt__or_fun4902(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2639, _ctx)) {
    kk_box_t _box_x569 = _match_x2639._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x569, KK_BORROWED, _ctx);
    kk_string_drop(kkloc_default, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2639, _ctx);
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
    kk_std_core_types__maybe _match_x2640 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2640, _ctx)) {
      kk_box_t _box_x572 = _match_x2640._cons.Just.value;
      kk_string_t v = kk_string_unbox(_box_x572);
      kk_string_drop(kkloc_default, _ctx);
      kk_string_dup(v, _ctx);
      kk_std_core_types__maybe_drop(_match_x2640, _ctx);
      return v;
    }
    {
      return kkloc_default;
    }
  }
}

kk_std_core_types__list kk_api_hc__get__positionals(kk_api__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> list<string> */ 
  {
    struct kk_api_Cliresult* _con_x4904 = kk_api__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4904->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4904->cli__options;
    kk_std_core_types__list _x = _con_x4904->cli__positionals;
    kk_string_t _pat_2 = _con_x4904->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4904->cli__sub;
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

kk_string_t kk_api_hc__get__command(kk_api__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> string */ 
  {
    struct kk_api_Cliresult* _con_x4905 = kk_api__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4905->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4905->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4905->cli__positionals;
    kk_string_t _x = _con_x4905->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4905->cli__sub;
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

kk_std_core_types__maybe kk_api_hc__get__sub(kk_api__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> maybe<cliresult> */ 
  {
    struct kk_api_Cliresult* _con_x4906 = kk_api__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4906->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4906->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4906->cli__positionals;
    kk_string_t _pat_3 = _con_x4906->cli__command;
    kk_std_core_types__maybe _x = _con_x4906->cli__sub;
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
struct kk_api_hc__find__flag__long_fun4907__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_api_hc__find__flag__long_fun4907(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__find__flag__long_fun4907(kk_string_t name, kk_context_t* _ctx) {
  struct kk_api_hc__find__flag__long_fun4907__t* _self = kk_function_alloc_as(struct kk_api_hc__find__flag__long_fun4907__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__find__flag__long_fun4907, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__find__flag__long_fun4907(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx) {
  struct kk_api_hc__find__flag__long_fun4907__t* _self = kk_function_as(struct kk_api_hc__find__flag__long_fun4907__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4908;
  kk_api__cliflag _match_x2638 = kk_api__cliflag_unbox(_b_x578, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x4909 = kk_api__as_Cliflag(_match_x2638, _ctx);
    kk_string_t _x = _con_x4909->flag__name;
    kk_string_t _pat_0 = _con_x4909->flag__short;
    kk_string_t _pat_1 = _con_x4909->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2638, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2638, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2638, _ctx);
    }
    _x_x4908 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4908,name,kk_context());
}

kk_std_core_types__maybe kk_api_hc__find__flag__long(kk_std_core_types__list flags, kk_string_t name, kk_context_t* _ctx) { /* (flags : list<cliflag>, name : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_api_new_hc__find__flag__long_fun4907(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_hc__find__flag__short_fun4910__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_api_hc__find__flag__short_fun4910(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__find__flag__short_fun4910(kk_string_t s, kk_context_t* _ctx) {
  struct kk_api_hc__find__flag__short_fun4910__t* _self = kk_function_alloc_as(struct kk_api_hc__find__flag__short_fun4910__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__find__flag__short_fun4910, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__find__flag__short_fun4910(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx) {
  struct kk_api_hc__find__flag__short_fun4910__t* _self = kk_function_as(struct kk_api_hc__find__flag__short_fun4910__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4911;
  kk_api__cliflag _match_x2637 = kk_api__cliflag_unbox(_b_x584, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x4912 = kk_api__as_Cliflag(_match_x2637, _ctx);
    kk_string_t _pat_0 = _con_x4912->flag__name;
    kk_string_t _x = _con_x4912->flag__short;
    kk_string_t _pat_1 = _con_x4912->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2637, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2637, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2637, _ctx);
    }
    _x_x4911 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4911,s,kk_context());
}

kk_std_core_types__maybe kk_api_hc__find__flag__short(kk_std_core_types__list flags, kk_string_t s, kk_context_t* _ctx) { /* (flags : list<cliflag>, s : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_api_new_hc__find__flag__short_fun4910(s, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_hc__find__opt__long_fun4913__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_api_hc__find__opt__long_fun4913(kk_function_t _fself, kk_box_t _b_x590, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__find__opt__long_fun4913(kk_string_t name, kk_context_t* _ctx) {
  struct kk_api_hc__find__opt__long_fun4913__t* _self = kk_function_alloc_as(struct kk_api_hc__find__opt__long_fun4913__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__find__opt__long_fun4913, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__find__opt__long_fun4913(kk_function_t _fself, kk_box_t _b_x590, kk_context_t* _ctx) {
  struct kk_api_hc__find__opt__long_fun4913__t* _self = kk_function_as(struct kk_api_hc__find__opt__long_fun4913__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4914;
  kk_api__clioption _match_x2636 = kk_api__clioption_unbox(_b_x590, KK_OWNED, _ctx); /*api/clioption*/;
  {
    struct kk_api_Clioption* _con_x4915 = kk_api__as_Clioption(_match_x2636, _ctx);
    kk_string_t _x = _con_x4915->opt__name;
    kk_string_t _pat_0 = _con_x4915->opt__short;
    kk_string_t _pat_1 = _con_x4915->opt__help;
    kk_string_t _pat_2 = _con_x4915->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2636, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2636, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2636, _ctx);
    }
    _x_x4914 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4914,name,kk_context());
}

kk_std_core_types__maybe kk_api_hc__find__opt__long(kk_std_core_types__list options, kk_string_t name, kk_context_t* _ctx) { /* (options : list<clioption>, name : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_api_new_hc__find__opt__long_fun4913(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_hc__find__opt__short_fun4916__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_api_hc__find__opt__short_fun4916(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__find__opt__short_fun4916(kk_string_t s, kk_context_t* _ctx) {
  struct kk_api_hc__find__opt__short_fun4916__t* _self = kk_function_alloc_as(struct kk_api_hc__find__opt__short_fun4916__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__find__opt__short_fun4916, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__find__opt__short_fun4916(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx) {
  struct kk_api_hc__find__opt__short_fun4916__t* _self = kk_function_as(struct kk_api_hc__find__opt__short_fun4916__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4917;
  kk_api__clioption _match_x2635 = kk_api__clioption_unbox(_b_x596, KK_OWNED, _ctx); /*api/clioption*/;
  {
    struct kk_api_Clioption* _con_x4918 = kk_api__as_Clioption(_match_x2635, _ctx);
    kk_string_t _pat_0 = _con_x4918->opt__name;
    kk_string_t _x = _con_x4918->opt__short;
    kk_string_t _pat_1 = _con_x4918->opt__help;
    kk_string_t _pat_2 = _con_x4918->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2635, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2635, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2635, _ctx);
    }
    _x_x4917 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4917,s,kk_context());
}

kk_std_core_types__maybe kk_api_hc__find__opt__short(kk_std_core_types__list options, kk_string_t s, kk_context_t* _ctx) { /* (options : list<clioption>, s : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_api_new_hc__find__opt__short_fun4916(s, _ctx), _ctx);
}
extern bool kk_api_hc__find__command_fun4919(kk_function_t _fself, kk_box_t _b_x604, kk_context_t* _ctx) {
  struct kk_api_hc__find__command_fun4919__t* _self = kk_function_as(struct kk_api_hc__find__command_fun4919__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4920;
  kk_std_core_types__tuple2 _match_x2634 = kk_std_core_types__tuple2_unbox(_b_x604, KK_OWNED, _ctx); /*(string, api/clispec)*/;
  {
    kk_box_t _box_x600 = _match_x2634.fst;
    kk_box_t _box_x601 = _match_x2634.snd;
    kk_string_t _x = kk_string_unbox(_box_x600);
    kk_string_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2634, _ctx);
    _x_x4920 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4920,name,kk_context());
}


// lift anonymous function
struct kk_api_hc__add__default_fun4925__t {
  struct kk_function_s _base;
  kk_api__clioption o;
};
static bool kk_api_hc__add__default_fun4925(kk_function_t _fself, kk_box_t _b_x612, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__add__default_fun4925(kk_api__clioption o, kk_context_t* _ctx) {
  struct kk_api_hc__add__default_fun4925__t* _self = kk_function_alloc_as(struct kk_api_hc__add__default_fun4925__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__add__default_fun4925, kk_context());
  _self->o = o;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__add__default_fun4925(kk_function_t _fself, kk_box_t _b_x612, kk_context_t* _ctx) {
  struct kk_api_hc__add__default_fun4925__t* _self = kk_function_as(struct kk_api_hc__add__default_fun4925__t*, _fself, _ctx);
  kk_api__clioption o = _self->o; /* api/clioption */
  kk_drop_match(_self, {kk_api__clioption_dup(o, _ctx);}, {}, _ctx)
  kk_string_t _x_x4926;
  kk_std_core_types__tuple2 _match_x2631 = kk_std_core_types__tuple2_unbox(_b_x612, KK_OWNED, _ctx); /*(string, string)*/;
  {
    kk_box_t _box_x608 = _match_x2631.fst;
    kk_box_t _box_x609 = _match_x2631.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x608);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2631, _ctx);
    _x_x4926 = _x_0; /*string*/
  }
  kk_string_t _x_x4927;
  {
    struct kk_api_Clioption* _con_x4928 = kk_api__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x4928->opt__name;
    kk_string_t _pat_0_3 = _con_x4928->opt__short;
    kk_string_t _pat_1_1 = _con_x4928->opt__help;
    kk_string_t _pat_2_0 = _con_x4928->opt__default;
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
    _x_x4927 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x4926,_x_x4927,kk_context());
}

kk_std_core_types__list kk_api_hc__add__default(kk_std_core_types__list acc, kk_api__clioption o, kk_context_t* _ctx) { /* (acc : list<(string, string)>, o : clioption) -> list<(string, string)> */ 
  bool b_10683;
  kk_integer_t _brw_x2632;
  kk_string_t _x_x4921;
  {
    struct kk_api_Clioption* _con_x4922 = kk_api__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x4922->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x4921 = _x; /*string*/
  }
  _brw_x2632 = kk_std_core_string_chars_fs_count(_x_x4921, _ctx); /*int*/
  bool _brw_x2633 = kk_integer_eq_borrow(_brw_x2632,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2632, _ctx);
  b_10683 = _brw_x2633; /*bool*/
  if (b_10683) {
    kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
    return acc;
  }
  {
    bool b_0_10686;
    kk_std_core_types__list _x_x4923 = kk_std_core_types__list_dup(acc, _ctx); /*list<(string, string)>*/
    kk_function_t _x_x4924;
    kk_api__clioption_dup(o, _ctx);
    _x_x4924 = kk_api_new_hc__add__default_fun4925(o, _ctx); /*(10001) -> 10002 bool*/
    b_0_10686 = kk_std_core_list_any(_x_x4923, _x_x4924, _ctx); /*bool*/
    if (b_0_10686) {
      kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
      return acc;
    }
    {
      kk_std_core_types__list _x_x4929;
      kk_box_t _x_x4930;
      kk_std_core_types__tuple2 _x_x4931;
      kk_box_t _x_x4932;
      kk_string_t _x_x4933;
      {
        struct kk_api_Clioption* _con_x4934 = kk_api__as_Clioption(o, _ctx);
        kk_string_t _x_2 = _con_x4934->opt__name;
        kk_string_dup(_x_2, _ctx);
        _x_x4933 = _x_2; /*string*/
      }
      _x_x4932 = kk_string_box(_x_x4933); /*10037*/
      kk_box_t _x_x4935;
      kk_string_t _x_x4936;
      {
        struct kk_api_Clioption* _con_x4937 = kk_api__as_Clioption(o, _ctx);
        kk_string_t _pat_0_5 = _con_x4937->opt__name;
        kk_string_t _pat_1_4 = _con_x4937->opt__short;
        kk_string_t _pat_2_2 = _con_x4937->opt__help;
        kk_string_t _x_3 = _con_x4937->opt__default;
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
        _x_x4936 = _x_3; /*string*/
      }
      _x_x4935 = kk_string_box(_x_x4936); /*10038*/
      _x_x4931 = kk_std_core_types__new_Tuple2(_x_x4932, _x_x4935, _ctx); /*(10037, 10038)*/
      _x_x4930 = kk_std_core_types__tuple2_box(_x_x4931, _ctx); /*10021*/
      _x_x4929 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4930, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      return kk_std_core_list_append(acc, _x_x4929, _ctx);
    }
  }
}


// lift anonymous function
struct kk_api_hc__apply__defaults_fun4941__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__apply__defaults_fun4941(kk_function_t _fself, kk_box_t _b_x627, kk_box_t _b_x628, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__apply__defaults_fun4941(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__apply__defaults_fun4941, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__apply__defaults_fun4941(kk_function_t _fself, kk_box_t _b_x627, kk_box_t _b_x628, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x4942;
  kk_std_core_types__list _x_x4943 = kk_std_core_types__list_unbox(_b_x627, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_api__clioption _x_x4944 = kk_api__clioption_unbox(_b_x628, KK_OWNED, _ctx); /*api/clioption*/
  _x_x4942 = kk_api_hc__add__default(_x_x4943, _x_x4944, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x4942, _ctx);
}

kk_std_core_types__list kk_api_hc__apply__defaults(kk_api__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<(string, string)>) -> list<(string, string)> */ 
  kk_box_t _x_x4938;
  kk_std_core_types__list _x_x4939;
  {
    struct kk_api_Clispec* _con_x4940 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x4940->app__name;
    kk_string_t _pat_1 = _con_x4940->app__version;
    kk_string_t _pat_2 = _con_x4940->app__about;
    kk_std_core_types__list _pat_3 = _con_x4940->app__flags;
    kk_std_core_types__list _x = _con_x4940->app__options;
    kk_std_core_types__list _pat_4 = _con_x4940->app__args;
    kk_std_core_types__list _pat_5 = _con_x4940->app__commands;
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
    _x_x4939 = _x; /*list<api/clioption>*/
  }
  _x_x4938 = kk_std_core_list_foldl(_x_x4939, kk_std_core_types__list_box(options, _ctx), kk_api_new_hc__apply__defaults_fun4941(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x4938, KK_OWNED, _ctx);
}

kk_string_t kk_api_hc__check__one__arg(kk_std_core_types__list positionals, kk_string_t err, kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (positionals : list<string>, err : string, pair : (int, cliarg)) -> string */ 
  bool b_10694;
  kk_integer_t _brw_x2629;
  kk_string_t _x_x4945 = kk_string_dup(err, _ctx); /*string*/
  _brw_x2629 = kk_std_core_string_chars_fs_count(_x_x4945, _ctx); /*int*/
  bool _brw_x2630 = kk_integer_eq_borrow(_brw_x2629,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2629, _ctx);
  b_10694 = _brw_x2630; /*bool*/
  if (b_10694) {
    kk_string_drop(err, _ctx);
    {
      kk_box_t _box_x632 = pair.fst;
      kk_box_t _box_x633 = pair.snd;
      kk_api__cliarg _x_0 = kk_api__cliarg_unbox(_box_x633, KK_BORROWED, _ctx);
      kk_api__cliarg_dup(_x_0, _ctx);
      {
        struct kk_api_Cliarg* _con_x4946 = kk_api__as_Cliarg(_x_0, _ctx);
        kk_string_t _pat_0_1 = _con_x4946->arg__name;
        kk_string_t _pat_1_0 = _con_x4946->arg__help;
        bool _x = _con_x4946->arg__required;
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_string_drop(_pat_1_0, _ctx);
          kk_string_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        if (_x) {
          bool _match_x2625;
          kk_integer_t _brw_x2627;
          {
            kk_box_t _box_x634 = pair.fst;
            kk_box_t _box_x635 = pair.snd;
            kk_integer_t _x_1 = kk_integer_unbox(_box_x634, _ctx);
            kk_integer_dup(_x_1, _ctx);
            _brw_x2627 = _x_1; /*int*/
          }
          kk_integer_t _brw_x2626 = kk_std_core_list__lift_length_6003(positionals, kk_integer_from_small(0), _ctx); /*int*/;
          bool _brw_x2628 = kk_integer_gte_borrow(_brw_x2627,_brw_x2626,kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2627, _ctx);
          kk_integer_drop(_brw_x2626, _ctx);
          _match_x2625 = _brw_x2628; /*bool*/
          if (_match_x2625) {
            kk_string_t _x_x4947;
            kk_define_string_literal(static, _s_x4948, 28, "missing required argument: <", _ctx)
            _x_x4947 = kk_string_dup(_s_x4948, _ctx); /*string*/
            kk_string_t _x_x4949;
            kk_string_t _x_x4950;
            {
              kk_box_t _box_x636 = pair.fst;
              kk_box_t _box_x637 = pair.snd;
              kk_api__cliarg _x_3 = kk_api__cliarg_unbox(_box_x637, KK_BORROWED, _ctx);
              kk_api__cliarg_dup(_x_3, _ctx);
              kk_std_core_types__tuple2_drop(pair, _ctx);
              {
                struct kk_api_Cliarg* _con_x4951 = kk_api__as_Cliarg(_x_3, _ctx);
                kk_string_t _x_2 = _con_x4951->arg__name;
                kk_string_t _pat_0_4 = _con_x4951->arg__help;
                if kk_likely(kk_datatype_ptr_is_unique(_x_3, _ctx)) {
                  kk_string_drop(_pat_0_4, _ctx);
                  kk_datatype_ptr_free(_x_3, _ctx);
                }
                else {
                  kk_string_dup(_x_2, _ctx);
                  kk_datatype_ptr_decref(_x_3, _ctx);
                }
                _x_x4950 = _x_2; /*string*/
              }
            }
            kk_string_t _x_x4952;
            kk_define_string_literal(static, _s_x4953, 1, ">", _ctx)
            _x_x4952 = kk_string_dup(_s_x4953, _ctx); /*string*/
            _x_x4949 = kk_std_core_types__lp__plus__plus__rp_(_x_x4950, _x_x4952, _ctx); /*string*/
            return kk_std_core_types__lp__plus__plus__rp_(_x_x4947, _x_x4949, _ctx);
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
struct kk_api_hc__check__required__args_fun4958__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__check__required__args_fun4958(kk_function_t _fself, kk_integer_t _b_x642, kk_box_t _b_x643, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__check__required__args_fun4958(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__check__required__args_fun4958, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__check__required__args_fun4958(kk_function_t _fself, kk_integer_t _b_x642, kk_box_t _b_x643, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t hc____i_656 = _b_x642; /*int*/;
  kk_api__cliarg hc____x_657 = kk_api__cliarg_unbox(_b_x643, KK_OWNED, _ctx); /*api/cliarg*/;
  kk_integer_t _b_x638_654 = hc____i_656; /*int*/;
  kk_api__cliarg _b_x639_655 = hc____x_657; /*api/cliarg*/;
  kk_std_core_types__tuple2 _x_x4959 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x638_654, _ctx), kk_api__cliarg_box(_b_x639_655, _ctx), _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x4959, _ctx);
}


// lift anonymous function
struct kk_api_hc__check__required__args_fun4964__t {
  struct kk_function_s _base;
  kk_std_core_types__list positionals;
};
static kk_box_t kk_api_hc__check__required__args_fun4964(kk_function_t _fself, kk_box_t _b_x647, kk_box_t _b_x648, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__check__required__args_fun4964(kk_std_core_types__list positionals, kk_context_t* _ctx) {
  struct kk_api_hc__check__required__args_fun4964__t* _self = kk_function_alloc_as(struct kk_api_hc__check__required__args_fun4964__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__check__required__args_fun4964, kk_context());
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__check__required__args_fun4964(kk_function_t _fself, kk_box_t _b_x647, kk_box_t _b_x648, kk_context_t* _ctx) {
  struct kk_api_hc__check__required__args_fun4964__t* _self = kk_function_as(struct kk_api_hc__check__required__args_fun4964__t*, _fself, _ctx);
  kk_std_core_types__list positionals = _self->positionals; /* list<string> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(positionals, _ctx);}, {}, _ctx)
  kk_string_t err_658 = kk_string_unbox(_b_x647); /*string*/;
  kk_std_core_types__tuple2 pair_659 = kk_std_core_types__tuple2_unbox(_b_x648, KK_OWNED, _ctx); /*(int, api/cliarg)*/;
  kk_string_t _x_x4965 = kk_api_hc__check__one__arg(positionals, err_658, pair_659, _ctx); /*string*/
  return kk_string_box(_x_x4965);
}

kk_string_t kk_api_hc__check__required__args(kk_api__clispec spec, kk_std_core_types__list positionals, kk_context_t* _ctx) { /* (spec : clispec, positionals : list<string>) -> string */ 
  kk_std_core_types__list _b_x644_649;
  kk_std_core_types__list _x_x4956;
  {
    struct kk_api_Clispec* _con_x4957 = kk_api__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x4957->app__name;
    kk_string_t _pat_1 = _con_x4957->app__version;
    kk_string_t _pat_2 = _con_x4957->app__about;
    kk_std_core_types__list _pat_3 = _con_x4957->app__flags;
    kk_std_core_types__list _pat_4 = _con_x4957->app__options;
    kk_std_core_types__list _x = _con_x4957->app__args;
    kk_std_core_types__list _pat_5 = _con_x4957->app__commands;
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
    _x_x4956 = _x; /*list<api/cliarg>*/
  }
  _b_x644_649 = kk_std_core_list_map_indexed(_x_x4956, kk_api_new_hc__check__required__args_fun4958(_ctx), _ctx); /*list<(int, api/cliarg)>*/
  kk_box_t _x_x4960;
  kk_box_t _x_x4961;
  kk_string_t _x_x4962 = kk_string_empty(); /*string*/
  _x_x4961 = kk_string_box(_x_x4962); /*10002*/
  _x_x4960 = kk_std_core_list_foldl(_b_x644_649, _x_x4961, kk_api_new_hc__check__required__args_fun4964(positionals, _ctx), _ctx); /*10002*/
  return kk_string_unbox(_x_x4960);
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11119_fun4968__t {
  struct kk_function_s _base;
  kk_string_t _y_x10870;
  kk_std_core_types__list _y_x10871;
  kk_std_core_types__list _y_x10872;
  kk_std_core_types__list _y_x10873;
  kk_string_t _y_x10874;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11119_fun4968(kk_function_t _fself, kk_box_t _b_x665, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11119_fun4968(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_std_core_types__list _y_x10872, kk_std_core_types__list _y_x10873, kk_string_t _y_x10874, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11119_fun4968__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11119_fun4968__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11119_fun4968, kk_context());
  _self->_y_x10870 = _y_x10870;
  _self->_y_x10871 = _y_x10871;
  _self->_y_x10872 = _y_x10872;
  _self->_y_x10873 = _y_x10873;
  _self->_y_x10874 = _y_x10874;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11119_fun4968(kk_function_t _fself, kk_box_t _b_x665, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11119_fun4968__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11119_fun4968__t*, _fself, _ctx);
  kk_string_t _y_x10870 = _self->_y_x10870; /* string */
  kk_std_core_types__list _y_x10871 = _self->_y_x10871; /* list<string> */
  kk_std_core_types__list _y_x10872 = _self->_y_x10872; /* list<(string, string)> */
  kk_std_core_types__list _y_x10873 = _self->_y_x10873; /* list<string> */
  kk_string_t _y_x10874 = _self->_y_x10874; /* string */
  kk_drop_match(_self, {kk_string_dup(_y_x10870, _ctx);kk_std_core_types__list_dup(_y_x10871, _ctx);kk_std_core_types__list_dup(_y_x10872, _ctx);kk_std_core_types__list_dup(_y_x10873, _ctx);kk_string_dup(_y_x10874, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10875_667 = kk_std_core_types__list_unbox(_b_x665, KK_OWNED, _ctx); /*list<string>*/;
  kk_api__parseraw _x_x4969 = kk_api__new_Parseraw(kk_reuse_null, 0, _y_x10870, _y_x10871, _y_x10872, _y_x10873, _y_x10874, _y_x10875_667, _ctx); /*api/parseraw*/
  return kk_api__parseraw_box(_x_x4969, _ctx);
}

kk_api__parseraw kk_api__mlift_hc__parse__loop_11119(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_std_core_types__list _y_x10872, kk_std_core_types__list _y_x10873, kk_ref_t sub__args, kk_string_t _y_x10874, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, list<string>, sub_args : local-var<h,list<string>>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11194;
  kk_box_t _x_x4966 = kk_ref_get(sub__args,kk_context()); /*10000*/
  x_11194 = kk_std_core_types__list_unbox(_x_x4966, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11194, _ctx);
    kk_box_t _x_x4967 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11119_fun4968(_y_x10870, _y_x10871, _y_x10872, _y_x10873, _y_x10874, _ctx), _ctx); /*10001*/
    return kk_api__parseraw_unbox(_x_x4967, KK_OWNED, _ctx);
  }
  {
    return kk_api__new_Parseraw(kk_reuse_null, 0, _y_x10870, _y_x10871, _y_x10872, _y_x10873, _y_x10874, x_11194, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11120_fun4972__t {
  struct kk_function_s _base;
  kk_string_t _y_x10870;
  kk_std_core_types__list _y_x10871;
  kk_std_core_types__list _y_x10872;
  kk_std_core_types__list _y_x10873;
  kk_ref_t sub__args;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11120_fun4972(kk_function_t _fself, kk_box_t _b_x673, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11120_fun4972(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_std_core_types__list _y_x10872, kk_std_core_types__list _y_x10873, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11120_fun4972__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11120_fun4972__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11120_fun4972, kk_context());
  _self->_y_x10870 = _y_x10870;
  _self->_y_x10871 = _y_x10871;
  _self->_y_x10872 = _y_x10872;
  _self->_y_x10873 = _y_x10873;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11120_fun4972(kk_function_t _fself, kk_box_t _b_x673, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11120_fun4972__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11120_fun4972__t*, _fself, _ctx);
  kk_string_t _y_x10870 = _self->_y_x10870; /* string */
  kk_std_core_types__list _y_x10871 = _self->_y_x10871; /* list<string> */
  kk_std_core_types__list _y_x10872 = _self->_y_x10872; /* list<(string, string)> */
  kk_std_core_types__list _y_x10873 = _self->_y_x10873; /* list<string> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_string_dup(_y_x10870, _ctx);kk_std_core_types__list_dup(_y_x10871, _ctx);kk_std_core_types__list_dup(_y_x10872, _ctx);kk_std_core_types__list_dup(_y_x10873, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_string_t _y_x10874_675 = kk_string_unbox(_b_x673); /*string*/;
  kk_api__parseraw _x_x4973 = kk_api__mlift_hc__parse__loop_11119(_y_x10870, _y_x10871, _y_x10872, _y_x10873, sub__args, _y_x10874_675, _ctx); /*api/parseraw*/
  return kk_api__parseraw_box(_x_x4973, _ctx);
}

kk_api__parseraw kk_api__mlift_hc__parse__loop_11120(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_std_core_types__list _y_x10872, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10873, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_string_t x_11202;
  kk_box_t _x_x4970 = kk_ref_get(subcmd,kk_context()); /*10000*/
  x_11202 = kk_string_unbox(_x_x4970); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11202, _ctx);
    kk_box_t _x_x4971 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11120_fun4972(_y_x10870, _y_x10871, _y_x10872, _y_x10873, sub__args, _ctx), _ctx); /*10001*/
    return kk_api__parseraw_unbox(_x_x4971, KK_OWNED, _ctx);
  }
  {
    return kk_api__mlift_hc__parse__loop_11119(_y_x10870, _y_x10871, _y_x10872, _y_x10873, sub__args, x_11202, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11121_fun4976__t {
  struct kk_function_s _base;
  kk_string_t _y_x10870;
  kk_std_core_types__list _y_x10871;
  kk_std_core_types__list _y_x10872;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11121_fun4976(kk_function_t _fself, kk_box_t _b_x681, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11121_fun4976(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_std_core_types__list _y_x10872, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11121_fun4976__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11121_fun4976__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11121_fun4976, kk_context());
  _self->_y_x10870 = _y_x10870;
  _self->_y_x10871 = _y_x10871;
  _self->_y_x10872 = _y_x10872;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11121_fun4976(kk_function_t _fself, kk_box_t _b_x681, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11121_fun4976__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11121_fun4976__t*, _fself, _ctx);
  kk_string_t _y_x10870 = _self->_y_x10870; /* string */
  kk_std_core_types__list _y_x10871 = _self->_y_x10871; /* list<string> */
  kk_std_core_types__list _y_x10872 = _self->_y_x10872; /* list<(string, string)> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23438,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10870, _ctx);kk_std_core_types__list_dup(_y_x10871, _ctx);kk_std_core_types__list_dup(_y_x10872, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10873_683 = kk_std_core_types__list_unbox(_b_x681, KK_OWNED, _ctx); /*list<string>*/;
  kk_api__parseraw _x_x4977 = kk_api__mlift_hc__parse__loop_11120(_y_x10870, _y_x10871, _y_x10872, sub__args, subcmd, _y_x10873_683, _ctx); /*api/parseraw*/
  return kk_api__parseraw_box(_x_x4977, _ctx);
}

kk_api__parseraw kk_api__mlift_hc__parse__loop_11121(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10872, kk_context_t* _ctx) { /* forall<h> (string, list<string>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<(string, string)>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11204;
  kk_box_t _x_x4974 = kk_ref_get(positionals,kk_context()); /*10000*/
  x_11204 = kk_std_core_types__list_unbox(_x_x4974, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11204, _ctx);
    kk_box_t _x_x4975 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11121_fun4976(_y_x10870, _y_x10871, _y_x10872, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_api__parseraw_unbox(_x_x4975, KK_OWNED, _ctx);
  }
  {
    return kk_api__mlift_hc__parse__loop_11120(_y_x10870, _y_x10871, _y_x10872, sub__args, subcmd, x_11204, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11122_fun4980__t {
  struct kk_function_s _base;
  kk_string_t _y_x10870;
  kk_std_core_types__list _y_x10871;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11122_fun4980(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11122_fun4980(kk_string_t _y_x10870, kk_std_core_types__list _y_x10871, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11122_fun4980__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11122_fun4980__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11122_fun4980, kk_context());
  _self->_y_x10870 = _y_x10870;
  _self->_y_x10871 = _y_x10871;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11122_fun4980(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11122_fun4980__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11122_fun4980__t*, _fself, _ctx);
  kk_string_t _y_x10870 = _self->_y_x10870; /* string */
  kk_std_core_types__list _y_x10871 = _self->_y_x10871; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23438,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10870, _ctx);kk_std_core_types__list_dup(_y_x10871, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10872_691 = kk_std_core_types__list_unbox(_b_x689, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_api__parseraw _x_x4981 = kk_api__mlift_hc__parse__loop_11121(_y_x10870, _y_x10871, positionals, sub__args, subcmd, _y_x10872_691, _ctx); /*api/parseraw*/
  return kk_api__parseraw_box(_x_x4981, _ctx);
}

kk_api__parseraw kk_api__mlift_hc__parse__loop_11122(kk_string_t _y_x10870, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10871, kk_context_t* _ctx) { /* forall<h> (string, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11206;
  kk_box_t _x_x4978 = kk_ref_get(options,kk_context()); /*10000*/
  x_11206 = kk_std_core_types__list_unbox(_x_x4978, KK_OWNED, _ctx); /*list<(string, string)>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11206, _ctx);
    kk_box_t _x_x4979 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11122_fun4980(_y_x10870, _y_x10871, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_api__parseraw_unbox(_x_x4979, KK_OWNED, _ctx);
  }
  {
    return kk_api__mlift_hc__parse__loop_11121(_y_x10870, _y_x10871, positionals, sub__args, subcmd, x_11206, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11123_fun4984__t {
  struct kk_function_s _base;
  kk_string_t _y_x10870;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11123_fun4984(kk_function_t _fself, kk_box_t _b_x697, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11123_fun4984(kk_string_t _y_x10870, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11123_fun4984__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11123_fun4984__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11123_fun4984, kk_context());
  _self->_y_x10870 = _y_x10870;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11123_fun4984(kk_function_t _fself, kk_box_t _b_x697, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11123_fun4984__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11123_fun4984__t*, _fself, _ctx);
  kk_string_t _y_x10870 = _self->_y_x10870; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23438,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10870, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10871_699 = kk_std_core_types__list_unbox(_b_x697, KK_OWNED, _ctx); /*list<string>*/;
  kk_api__parseraw _x_x4985 = kk_api__mlift_hc__parse__loop_11122(_y_x10870, options, positionals, sub__args, subcmd, _y_x10871_699, _ctx); /*api/parseraw*/
  return kk_api__parseraw_box(_x_x4985, _ctx);
}

kk_api__parseraw kk_api__mlift_hc__parse__loop_11123(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t _y_x10870, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11208;
  kk_box_t _x_x4982 = kk_ref_get(flags,kk_context()); /*10000*/
  x_11208 = kk_std_core_types__list_unbox(_x_x4982, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11208, _ctx);
    kk_box_t _x_x4983 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11123_fun4984(_y_x10870, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_api__parseraw_unbox(_x_x4983, KK_OWNED, _ctx);
  }
  {
    return kk_api__mlift_hc__parse__loop_11122(_y_x10870, options, positionals, sub__args, subcmd, x_11208, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11125_fun4988__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11125_fun4988(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11125_fun4988(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11125_fun4988, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11125_fun4988(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x4989;
  kk_std_core_types__list _y_x10747_707 = kk_std_core_types__list_unbox(_b_x705, KK_OWNED, _ctx); /*list<string>*/;
  kk_integer_t _brw_x2614 = kk_std_core_list__lift_length_6003(_y_x10747_707, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2615 = kk_integer_gt_borrow(_brw_x2614,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2614, _ctx);
  _x_x4989 = _brw_x2615; /*bool*/
  return kk_bool_box(_x_x4989);
}

bool kk_api__mlift_hc__parse__loop_11125(kk_ref_t remaining, kk_string_t _y_x10746, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, string) -> <local<h>,div,exn,hica-brk> bool */ 
  bool _match_x2610;
  kk_integer_t _brw_x2616 = kk_std_core_string_chars_fs_count(_y_x10746, _ctx); /*int*/;
  bool _brw_x2617 = kk_integer_eq_borrow(_brw_x2616,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2616, _ctx);
  _match_x2610 = _brw_x2617; /*bool*/
  if (_match_x2610) {
    kk_std_core_types__list x_11210;
    kk_box_t _x_x4986 = kk_ref_get(remaining,kk_context()); /*10000*/
    x_11210 = kk_std_core_types__list_unbox(_x_x4986, KK_OWNED, _ctx); /*list<string>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11210, _ctx);
      kk_box_t _x_x4987 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11125_fun4988(_ctx), _ctx); /*10001*/
      return kk_bool_unbox(_x_x4987);
    }
    {
      kk_std_core_types__list _y_x10747_708 = x_11210; /*list<string>*/;
      kk_integer_t _brw_x2612 = kk_std_core_list__lift_length_6003(_y_x10747_708, kk_integer_from_small(0), _ctx); /*int*/;
      bool _brw_x2613 = kk_integer_gt_borrow(_brw_x2612,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2612, _ctx);
      return _brw_x2613;
    }
  }
  {
    kk_ref_drop(remaining, _ctx);
    return false;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11126_fun4991__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11126_fun4991(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11126_fun4991(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11126_fun4991, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11126_fun4991(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11213 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<api/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4992 = kk_std_core_hnd__as_Ev(ev_11213, _ctx);
    kk_box_t _box_x709 = _con_x4992->hnd;
    int32_t m = _con_x4992->marker;
    kk_api__hica_brk h = kk_api__hica_brk_unbox(_box_x709, KK_BORROWED, _ctx);
    kk_api__hica_brk_dup(h, _ctx);
    {
      struct kk_api__Hnd_hica_brk* _con_x4993 = kk_api__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4993->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4993->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x712, (_fun_unbox_x712, m, ev_11213, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_api__mlift_hc__parse__loop_11126(kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<h> (wild_@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x715_717 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4990 = kk_std_core_hnd__open_at0(_b_x715_717, kk_api__new_mlift_hc__parse__loop_11126_fun4991(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4990); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11127_fun4995__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11127_fun4995(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11127_fun4995(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11127_fun4995, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11127_fun4995(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11215 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<api/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4996 = kk_std_core_hnd__as_Ev(ev_11215, _ctx);
    kk_box_t _box_x719 = _con_x4996->hnd;
    int32_t m = _con_x4996->marker;
    kk_api__hica_brk h = kk_api__hica_brk_unbox(_box_x719, KK_BORROWED, _ctx);
    kk_api__hica_brk_dup(h, _ctx);
    {
      struct kk_api__Hnd_hica_brk* _con_x4997 = kk_api__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4997->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4997->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x722, (_fun_unbox_x722, m, ev_11215, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_api__mlift_hc__parse__loop_11127(kk_unit_t wild___0_0, kk_context_t* _ctx) { /* forall<h> (wild_@0@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x725_727 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4994 = kk_std_core_hnd__open_at0(_b_x725_727, kk_api__new_mlift_hc__parse__loop_11127_fun4995(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4994); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11128_fun4999__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11128_fun4999(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11128_fun4999(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11128_fun4999, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11128_fun4999(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11217 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<api/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5000 = kk_std_core_hnd__as_Ev(ev_11217, _ctx);
    kk_box_t _box_x729 = _con_x5000->hnd;
    int32_t m = _con_x5000->marker;
    kk_api__hica_brk h = kk_api__hica_brk_unbox(_box_x729, KK_BORROWED, _ctx);
    kk_api__hica_brk_dup(h, _ctx);
    {
      struct kk_api__Hnd_hica_brk* _con_x5001 = kk_api__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5001->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5001->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x732, (_fun_unbox_x732, m, ev_11217, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_api__mlift_hc__parse__loop_11128(kk_unit_t wild___1, kk_context_t* _ctx) { /* forall<h> (wild_@1 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x735_737 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4998 = kk_std_core_hnd__open_at0(_b_x735_737, kk_api__new_mlift_hc__parse__loop_11128_fun4999(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4998); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11129_fun5003__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11129_fun5003(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11129_fun5003(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11129_fun5003, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11129_fun5003(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11219 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<api/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5004 = kk_std_core_hnd__as_Ev(ev_11219, _ctx);
    kk_box_t _box_x739 = _con_x5004->hnd;
    int32_t m = _con_x5004->marker;
    kk_api__hica_brk h = kk_api__hica_brk_unbox(_box_x739, KK_BORROWED, _ctx);
    kk_api__hica_brk_dup(h, _ctx);
    {
      struct kk_api__Hnd_hica_brk* _con_x5005 = kk_api__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5005->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5005->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x742, (_fun_unbox_x742, m, ev_11219, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_api__mlift_hc__parse__loop_11129(kk_unit_t wild___2, kk_context_t* _ctx) { /* forall<h> (wild_@2 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x745_747 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5002 = kk_std_core_hnd__open_at0(_b_x745_747, kk_api__new_mlift_hc__parse__loop_11129_fun5003(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5002); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11130_fun5007__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11130_fun5007(kk_function_t _fself, kk_box_t _b_x754, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11130_fun5007(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11130_fun5007, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11130_fun5007(kk_function_t _fself, kk_box_t _b_x754, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___2_756 = kk_Unit;
  kk_unit_unbox(_b_x754);
  kk_unit_t _x_x5008 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11129(wild___2_756, _ctx);
  return kk_unit_box(_x_x5008);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11130(kk_std_core_types__list _y_x10764, kk_ref_t positionals, kk_std_core_types__list _y_x10765, kk_context_t* _ctx) { /* forall<h> (list<string>, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x750_752 = kk_std_core_list_append(_y_x10764, _y_x10765, _ctx); /*list<string>*/;
  kk_unit_t x_11221 = kk_Unit;
  kk_unit_t _brw_x2609 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x750_752, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2609;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5006 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11130_fun5007(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5006); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11129(x_11221, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11131_fun5011__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10764;
  kk_ref_t positionals;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11131_fun5011(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11131_fun5011(kk_std_core_types__list _y_x10764, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11131_fun5011__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11131_fun5011__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11131_fun5011, kk_context());
  _self->_y_x10764 = _y_x10764;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11131_fun5011(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11131_fun5011__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11131_fun5011__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10764 = _self->_y_x10764; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10764, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10765_764 = kk_std_core_types__list_unbox(_b_x762, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5012 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11130(_y_x10764, positionals, _y_x10765_764, _ctx);
  return kk_unit_box(_x_x5012);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11131(kk_ref_t positionals, kk_ref_t remaining, kk_std_core_types__list _y_x10764, kk_context_t* _ctx) { /* forall<h> (positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11223;
  kk_box_t _x_x5009 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11223 = kk_std_core_types__list_unbox(_x_x5009, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11223, _ctx);
    kk_box_t _x_x5010 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11131_fun5011(_y_x10764, positionals, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5010); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11130(_y_x10764, positionals, x_11223, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_api__mlift_hc__parse__loop_11132(kk_string_t name, kk_ref_t options, kk_string_t v, kk_std_core_types__list _y_x10774, kk_context_t* _ctx) { /* forall<h> (name : string, options : local-var<h,list<(string, string)>>, v : string, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x770_772;
  kk_std_core_types__list _x_x5013;
  kk_box_t _x_x5014;
  kk_std_core_types__tuple2 _x_x5015 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x5014 = kk_std_core_types__tuple2_box(_x_x5015, _ctx); /*10021*/
  _x_x5013 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5014, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x770_772 = kk_std_core_list_append(_y_x10774, _x_x5013, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2606 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x770_772, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2606; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11133_fun5020__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11133_fun5020(kk_function_t _fself, kk_box_t _b_x779, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11133_fun5020(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11133_fun5020, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11133_fun5020(kk_function_t _fself, kk_box_t _b_x779, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5021;
  kk_api__clispec _match_x2605 = kk_api__clispec_unbox(_b_x779, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5022 = kk_api__as_Clispec(_match_x2605, _ctx);
    kk_string_t _pat_0_6 = _con_x5022->app__name;
    kk_string_t _pat_1_4 = _con_x5022->app__version;
    kk_string_t _pat_2_1 = _con_x5022->app__about;
    kk_std_core_types__list _pat_3_0 = _con_x5022->app__flags;
    kk_std_core_types__list _x_0 = _con_x5022->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x5022->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5022->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2605, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_string_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_6, _ctx);
      kk_datatype_ptr_free(_match_x2605, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2605, _ctx);
    }
    _x_x5021 = _x_0; /*list<api/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5021, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11133_fun5024__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11133_fun5024(kk_function_t _fself, kk_box_t _b_x789, kk_box_t _b_x790, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11133_fun5024(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11133_fun5024, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11133_fun5026__t {
  struct kk_function_s _base;
  kk_string_t name_0_822;
};
static bool kk_api__mlift_hc__parse__loop_11133_fun5026(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11133_fun5026(kk_string_t name_0_822, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11133_fun5026__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11133_fun5026__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11133_fun5026, kk_context());
  _self->name_0_822 = name_0_822;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11133_fun5026(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11133_fun5026__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11133_fun5026__t*, _fself, _ctx);
  kk_string_t name_0_822 = _self->name_0_822; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_822, _ctx);}, {}, _ctx)
  kk_string_t _x_x5027;
  kk_api__clioption _match_x2604 = kk_api__clioption_unbox(_b_x785, KK_OWNED, _ctx); /*api/clioption*/;
  {
    struct kk_api_Clioption* _con_x5028 = kk_api__as_Clioption(_match_x2604, _ctx);
    kk_string_t _x = _con_x5028->opt__name;
    kk_string_t _pat_0_5 = _con_x5028->opt__short;
    kk_string_t _pat_1_3 = _con_x5028->opt__help;
    kk_string_t _pat_2_0 = _con_x5028->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2604, _ctx)) {
      kk_string_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_5, _ctx);
      kk_datatype_ptr_free(_match_x2604, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2604, _ctx);
    }
    _x_x5027 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x5027,name_0_822,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11133_fun5024(kk_function_t _fself, kk_box_t _b_x789, kk_box_t _b_x790, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5025;
  kk_std_core_types__list options_0_821 = kk_std_core_types__list_unbox(_b_x789, KK_OWNED, _ctx); /*list<api/clioption>*/;
  kk_string_t name_0_822 = kk_string_unbox(_b_x790); /*string*/;
  _x_x5025 = kk_std_core_list_find(options_0_821, kk_api__new_mlift_hc__parse__loop_11133_fun5026(name_0_822, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5025, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11133_fun5034__t {
  struct kk_function_s _base;
  kk_string_t name;
  kk_ref_t options;
  kk_string_t v;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11133_fun5034(kk_function_t _fself, kk_std_core_types__list _y_x10774, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11133_fun5034(kk_string_t name, kk_ref_t options, kk_string_t v, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11133_fun5034__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11133_fun5034__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11133_fun5034, kk_context());
  _self->name = name;
  _self->options = options;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_api__mlift_hc__parse__loop_11133_fun5034(kk_function_t _fself, kk_std_core_types__list _y_x10774, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11133_fun5034__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11133_fun5034__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_string_t v = _self->v; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);kk_ref_dup(options, _ctx);kk_string_dup(v, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x801_803;
  kk_std_core_types__list _x_x5035;
  kk_box_t _x_x5036;
  kk_std_core_types__tuple2 _x_x5037 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x5036 = kk_std_core_types__tuple2_box(_x_x5037, _ctx); /*10021*/
  _x_x5035 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5036, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x801_803 = kk_std_core_list_append(_y_x10774, _x_x5035, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2603 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x801_803, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2603; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11133_fun5039__t {
  struct kk_function_s _base;
  kk_function_t next_11226;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11133_fun5039(kk_function_t _fself, kk_box_t _b_x809, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11133_fun5039(kk_function_t next_11226, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11133_fun5039__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11133_fun5039__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11133_fun5039, kk_context());
  _self->next_11226 = next_11226;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11133_fun5039(kk_function_t _fself, kk_box_t _b_x809, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11133_fun5039__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11133_fun5039__t*, _fself, _ctx);
  kk_function_t next_11226 = _self->next_11226; /* (list<(string, string)>) -> <local<23438>,exn,api/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11226, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5040 = kk_Unit;
  kk_std_core_types__list _x_x5041 = kk_std_core_types__list_unbox(_b_x809, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11226, (next_11226, _x_x5041, _ctx), _ctx);
  return kk_unit_box(_x_x5040);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11133(kk_std_core_types__list _c_x10770, kk_ref_t error, kk_ref_t options, kk_api__clispec spec, kk_string_t name, kk_context_t* _ctx) { /* forall<h> (list<string>, error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, name : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t v;
  kk_std_core_types__list _x_x5016 = kk_std_core_list_drop(_c_x10770, kk_integer_from_small(1), _ctx); /*list<10001>*/
  kk_string_t _x_x5017;
  kk_define_string_literal(static, _s_x5018, 1, "=", _ctx)
  _x_x5017 = kk_string_dup(_s_x5018, _ctx); /*string*/
  v = kk_std_core_list_joinsep(_x_x5016, _x_x5017, _ctx); /*string*/
  kk_std_core_types__list _x_x1_4_11035;
  kk_box_t _x_x5019 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11133_fun5020(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
  _x_x1_4_11035 = kk_std_core_types__list_unbox(_x_x5019, KK_OWNED, _ctx); /*list<api/clioption>*/
  kk_std_core_types__maybe _match_x2600;
  kk_box_t _x_x5023;
  kk_box_t _x_x5029;
  kk_string_t _x_x5030 = kk_string_dup(name, _ctx); /*string*/
  _x_x5029 = kk_string_box(_x_x5030); /*10001*/
  _x_x5023 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11133_fun5024(_ctx), kk_std_core_types__list_box(_x_x1_4_11035, _ctx), _x_x5029, _ctx); /*10002*/
  _match_x2600 = kk_std_core_types__maybe_unbox(_x_x5023, KK_OWNED, _ctx); /*maybe<api/clioption>*/
  if (kk_std_core_types__is_Just(_match_x2600, _ctx)) {
    kk_box_t _box_x791 = _match_x2600._cons.Just.value;
    kk_api__clioption _pat_15_0 = kk_api__clioption_unbox(_box_x791, KK_BORROWED, _ctx);
    struct kk_api_Clioption* _con_x5031 = kk_api__as_Clioption(_pat_15_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__maybe_drop(_match_x2600, _ctx);
    kk_std_core_types__list x_11225;
    kk_box_t _x_x5032;
    kk_ref_t _x_x5033 = kk_ref_dup(options, _ctx); /*local-var<23438,list<(string, string)>>*/
    _x_x5032 = kk_ref_get(_x_x5033,kk_context()); /*10000*/
    x_11225 = kk_std_core_types__list_unbox(_x_x5032, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_function_t next_11226 = kk_api__new_mlift_hc__parse__loop_11133_fun5034(name, options, v, _ctx); /*(list<(string, string)>) -> <local<23438>,exn,api/hica-brk,div> ()*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11225, _ctx);
      kk_box_t _x_x5038 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11133_fun5039(next_11226, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5038); return kk_Unit;
    }
    {
      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11226, (next_11226, x_11225, _ctx), _ctx); return kk_Unit;
    }
  }
  {
    kk_string_drop(v, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x811_819;
    kk_string_t _x_x5042;
    kk_define_string_literal(static, _s_x5043, 18, "unknown option: --", _ctx)
    _x_x5042 = kk_string_dup(_s_x5043, _ctx); /*string*/
    _b_x811_819 = kk_std_core_types__lp__plus__plus__rp_(_x_x5042, name, _ctx); /*string*/
    kk_unit_t _brw_x2601 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x811_819)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2601; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11134_fun5055__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11134_fun5055(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11134_fun5055(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11134_fun5055, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11134_fun5055(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5056;
  kk_std_core_types__maybe _match_x2599 = kk_std_core_types__maybe_unbox(_b_x830, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2599, _ctx)) {
    kk_box_t _box_x823 = _match_x2599._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x823);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2599, _ctx);
    kk_box_drop(_b_x831, _ctx);
    _x_x5056 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x824_836;
    kk_string_t _x_x5057;
    kk_define_string_literal(static, _s_x5058, 22, "unexpected Nothing in ", _ctx)
    _x_x5057 = kk_string_dup(_s_x5058, _ctx); /*string*/
    kk_string_t _x_x5059 = kk_string_unbox(_b_x831); /*string*/
    _b_x824_836 = kk_std_core_types__lp__plus__plus__rp_(_x_x5057, _x_x5059, _ctx); /*string*/
    kk_box_t _x_x5060 = kk_std_core_exn_throw(_b_x824_836, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5056 = kk_string_unbox(_x_x5060); /*string*/
  }
  return kk_string_box(_x_x5056);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11134_fun5062__t {
  struct kk_function_s _base;
  kk_std_core_types__list _c_x10770;
  kk_ref_t error;
  kk_ref_t options;
  kk_api__clispec spec;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11134_fun5062(kk_function_t _fself, kk_box_t _b_x841, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11134_fun5062(kk_std_core_types__list _c_x10770, kk_ref_t error, kk_ref_t options, kk_api__clispec spec, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11134_fun5062__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11134_fun5062__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11134_fun5062, kk_context());
  _self->_c_x10770 = _c_x10770;
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11134_fun5062(kk_function_t _fself, kk_box_t _b_x841, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11134_fun5062__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11134_fun5062__t*, _fself, _ctx);
  kk_std_core_types__list _c_x10770 = _self->_c_x10770; /* list<string> */
  kk_ref_t error = _self->error; /* local-var<23438,string> */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_api__clispec spec = _self->spec; /* api/clispec */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_c_x10770, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_api__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_string_t name_843 = kk_string_unbox(_b_x841); /*string*/;
  kk_unit_t _x_x5063 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11133(_c_x10770, error, options, spec, name_843, _ctx);
  return kk_unit_box(_x_x5063);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11134(kk_ref_t error, kk_ref_t options, kk_api__clispec spec, kk_std_core_types__list _c_x10770, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, list<string>) -> () */ 
  kk_std_core_types__maybe _x_x1_3_11033;
  kk_std_core_types__list _x_x5044 = kk_std_core_types__list_dup(_c_x10770, _ctx); /*list<string>*/
  _x_x1_3_11033 = kk_std_core_list__index(_x_x5044, kk_integer_from_small(0), _ctx); /*maybe<string>*/
  kk_string_t _x_x2_2_11034;
  kk_string_t _x_x5045;
  kk_define_string_literal(static, _s_x5046, 6, "api.kk", _ctx)
  _x_x5045 = kk_string_dup(_s_x5046, _ctx); /*string*/
  kk_string_t _x_x5047;
  kk_string_t _x_x5048;
  kk_define_string_literal(static, _s_x5049, 1, "(", _ctx)
  _x_x5048 = kk_string_dup(_s_x5049, _ctx); /*string*/
  kk_string_t _x_x5050;
  kk_string_t _x_x5051 = kk_std_core_int_show(kk_integer_from_small(762), _ctx); /*string*/
  kk_string_t _x_x5052;
  kk_define_string_literal(static, _s_x5053, 1, ")", _ctx)
  _x_x5052 = kk_string_dup(_s_x5053, _ctx); /*string*/
  _x_x5050 = kk_std_core_types__lp__plus__plus__rp_(_x_x5051, _x_x5052, _ctx); /*string*/
  _x_x5047 = kk_std_core_types__lp__plus__plus__rp_(_x_x5048, _x_x5050, _ctx); /*string*/
  _x_x2_2_11034 = kk_std_core_types__lp__plus__plus__rp_(_x_x5045, _x_x5047, _ctx); /*string*/
  kk_ssize_t _b_x826_832 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11231;
  kk_box_t _x_x5054 = kk_std_core_hnd__open_at2(_b_x826_832, kk_api__new_mlift_hc__parse__loop_11134_fun5055(_ctx), kk_std_core_types__maybe_box(_x_x1_3_11033, _ctx), kk_string_box(_x_x2_2_11034), _ctx); /*10002*/
  x_11231 = kk_string_unbox(_x_x5054); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11231, _ctx);
    kk_box_t _x_x5061 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11134_fun5062(_c_x10770, error, options, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5061); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11133(_c_x10770, error, options, spec, x_11231, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_api__mlift_hc__parse__loop_11135(kk_ref_t flags, kk_string_t name_0_0, kk_std_core_types__list _y_x10778, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x847_849;
  kk_std_core_types__list _x_x5064 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x847_849 = kk_std_core_list_append(_y_x10778, _x_x5064, _ctx); /*list<string>*/
  kk_unit_t _brw_x2597 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x847_849, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2597; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11137_fun5067__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11137_fun5067(kk_function_t _fself, kk_std_core_types__list _y_x10788, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11137_fun5067(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11137_fun5067__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11137_fun5067__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11137_fun5067, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_api__mlift_hc__parse__loop_11137_fun5067(kk_function_t _fself, kk_std_core_types__list _y_x10788, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11137_fun5067__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11137_fun5067__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x861_863 = kk_std_core_list_drop(_y_x10788, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2595 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x861_863, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2595; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11137_fun5069__t {
  struct kk_function_s _base;
  kk_function_t next_11234;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11137_fun5069(kk_function_t _fself, kk_box_t _b_x865, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11137_fun5069(kk_function_t next_11234, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11137_fun5069__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11137_fun5069__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11137_fun5069, kk_context());
  _self->next_11234 = next_11234;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11137_fun5069(kk_function_t _fself, kk_box_t _b_x865, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11137_fun5069__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11137_fun5069__t*, _fself, _ctx);
  kk_function_t next_11234 = _self->next_11234; /* (list<string>) -> <local<23438>,exn,api/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11234, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5070 = kk_Unit;
  kk_std_core_types__list _x_x5071 = kk_std_core_types__list_unbox(_b_x865, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11234, (next_11234, _x_x5071, _ctx), _ctx);
  return kk_unit_box(_x_x5070);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11137(kk_ref_t remaining, kk_unit_t wild___3, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11233;
  kk_box_t _x_x5065;
  kk_ref_t _x_x5066 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
  _x_x5065 = kk_ref_get(_x_x5066,kk_context()); /*10000*/
  x_11233 = kk_std_core_types__list_unbox(_x_x5065, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11234 = kk_api__new_mlift_hc__parse__loop_11137_fun5067(remaining, _ctx); /*(list<string>) -> <local<23438>,exn,api/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11233, _ctx);
    kk_box_t _x_x5068 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11137_fun5069(next_11234, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5068); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11234, (next_11234, x_11233, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11138_fun5076__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11138_fun5076(kk_function_t _fself, kk_box_t _b_x880, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11138_fun5076(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11138_fun5076__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11138_fun5076__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11138_fun5076, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11138_fun5076(kk_function_t _fself, kk_box_t _b_x880, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11138_fun5076__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11138_fun5076__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_882 = kk_Unit;
  kk_unit_unbox(_b_x880);
  kk_unit_t _x_x5077 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11137(remaining, wild___3_882, _ctx);
  return kk_unit_box(_x_x5077);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11138(kk_std_core_types__list _y_x10782, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10786, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x872_874;
  kk_std_core_types__list _x_x5072;
  kk_box_t _x_x5073;
  kk_std_core_types__tuple2 _x_x5074 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0), kk_string_box(_y_x10786), _ctx); /*(10037, 10038)*/
  _x_x5073 = kk_std_core_types__tuple2_box(_x_x5074, _ctx); /*10021*/
  _x_x5072 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5073, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x872_874 = kk_std_core_list_append(_y_x10782, _x_x5072, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11237 = kk_Unit;
  kk_unit_t _brw_x2593 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x872_874, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2593;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5075 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11138_fun5076(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5075); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11137(remaining, x_11237, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11139_fun5088__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11139_fun5088(kk_function_t _fself, kk_box_t _b_x890, kk_box_t _b_x891, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11139_fun5088(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11139_fun5088, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11139_fun5088(kk_function_t _fself, kk_box_t _b_x890, kk_box_t _b_x891, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5089;
  kk_std_core_types__maybe _match_x2591 = kk_std_core_types__maybe_unbox(_b_x890, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2591, _ctx)) {
    kk_box_t _box_x883 = _match_x2591._cons.Just.value;
    kk_string_t x_1 = kk_string_unbox(_box_x883);
    kk_string_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_match_x2591, _ctx);
    kk_box_drop(_b_x891, _ctx);
    _x_x5089 = x_1; /*string*/
  }
  else {
    kk_string_t _b_x884_896;
    kk_string_t _x_x5090;
    kk_define_string_literal(static, _s_x5091, 22, "unexpected Nothing in ", _ctx)
    _x_x5090 = kk_string_dup(_s_x5091, _ctx); /*string*/
    kk_string_t _x_x5092 = kk_string_unbox(_b_x891); /*string*/
    _b_x884_896 = kk_std_core_types__lp__plus__plus__rp_(_x_x5090, _x_x5092, _ctx); /*string*/
    kk_box_t _x_x5093 = kk_std_core_exn_throw(_b_x884_896, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5089 = kk_string_unbox(_x_x5093); /*string*/
  }
  return kk_string_box(_x_x5089);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11139_fun5095__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10782;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11139_fun5095(kk_function_t _fself, kk_box_t _b_x901, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11139_fun5095(kk_std_core_types__list _y_x10782, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11139_fun5095__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11139_fun5095__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11139_fun5095, kk_context());
  _self->_y_x10782 = _y_x10782;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11139_fun5095(kk_function_t _fself, kk_box_t _b_x901, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11139_fun5095__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11139_fun5095__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10782 = _self->_y_x10782; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10782, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10786_903 = kk_string_unbox(_b_x901); /*string*/;
  kk_unit_t _x_x5096 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11138(_y_x10782, name_0_0, options, remaining, _y_x10786_903, _ctx);
  return kk_unit_box(_x_x5096);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11139(kk_std_core_types__list _y_x10782, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10785, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_12_11047 = kk_std_core_list__index(_y_x10785, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_7_11048;
  kk_string_t _x_x5078;
  kk_define_string_literal(static, _s_x5079, 6, "api.kk", _ctx)
  _x_x5078 = kk_string_dup(_s_x5079, _ctx); /*string*/
  kk_string_t _x_x5080;
  kk_string_t _x_x5081;
  kk_define_string_literal(static, _s_x5082, 1, "(", _ctx)
  _x_x5081 = kk_string_dup(_s_x5082, _ctx); /*string*/
  kk_string_t _x_x5083;
  kk_string_t _x_x5084 = kk_std_core_int_show(kk_integer_from_small(780), _ctx); /*string*/
  kk_string_t _x_x5085;
  kk_define_string_literal(static, _s_x5086, 1, ")", _ctx)
  _x_x5085 = kk_string_dup(_s_x5086, _ctx); /*string*/
  _x_x5083 = kk_std_core_types__lp__plus__plus__rp_(_x_x5084, _x_x5085, _ctx); /*string*/
  _x_x5080 = kk_std_core_types__lp__plus__plus__rp_(_x_x5081, _x_x5083, _ctx); /*string*/
  _x_x2_7_11048 = kk_std_core_types__lp__plus__plus__rp_(_x_x5078, _x_x5080, _ctx); /*string*/
  kk_ssize_t _b_x886_892 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11239;
  kk_box_t _x_x5087 = kk_std_core_hnd__open_at2(_b_x886_892, kk_api__new_mlift_hc__parse__loop_11139_fun5088(_ctx), kk_std_core_types__maybe_box(_x_x1_12_11047, _ctx), kk_string_box(_x_x2_7_11048), _ctx); /*10002*/
  x_11239 = kk_string_unbox(_x_x5087); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11239, _ctx);
    kk_box_t _x_x5094 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11139_fun5095(_y_x10782, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5094); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11138(_y_x10782, name_0_0, options, remaining, x_11239, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11140_fun5100__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10782;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11140_fun5100(kk_function_t _fself, kk_box_t _b_x909, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11140_fun5100(kk_std_core_types__list _y_x10782, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11140_fun5100__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11140_fun5100__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11140_fun5100, kk_context());
  _self->_y_x10782 = _y_x10782;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11140_fun5100(kk_function_t _fself, kk_box_t _b_x909, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11140_fun5100__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11140_fun5100__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10782 = _self->_y_x10782; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10782, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10785_911 = kk_std_core_types__list_unbox(_b_x909, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5101 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11139(_y_x10782, name_0_0, options, remaining, _y_x10785_911, _ctx);
  return kk_unit_box(_x_x5101);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11140(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10782, kk_context_t* _ctx) { /* forall<h> (name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11241;
  kk_box_t _x_x5097;
  kk_ref_t _x_x5098 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
  _x_x5097 = kk_ref_get(_x_x5098,kk_context()); /*10000*/
  x_11241 = kk_std_core_types__list_unbox(_x_x5097, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11241, _ctx);
    kk_box_t _x_x5099 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11140_fun5100(_y_x10782, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5099); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11139(_y_x10782, name_0_0, options, remaining, x_11241, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11141_fun5110__t {
  struct kk_function_s _base;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11141_fun5110(kk_function_t _fself, kk_box_t _b_x919, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11141_fun5110(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11141_fun5110__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11141_fun5110__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11141_fun5110, kk_context());
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11141_fun5110(kk_function_t _fself, kk_box_t _b_x919, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11141_fun5110__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11141_fun5110__t*, _fself, _ctx);
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10782_923 = kk_std_core_types__list_unbox(_b_x919, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5111 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11140(name_0_0, options, remaining, _y_x10782_923, _ctx);
  return kk_unit_box(_x_x5111);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11141(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10780, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2584;
  kk_integer_t _brw_x2587 = kk_std_core_list__lift_length_6003(_y_x10780, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2588 = kk_integer_eq_borrow(_brw_x2587,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2587, _ctx);
  _match_x2584 = _brw_x2588; /*bool*/
  if (_match_x2584) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x913_921;
    kk_string_t _x_x5102;
    kk_define_string_literal(static, _s_x5103, 9, "option --", _ctx)
    _x_x5102 = kk_string_dup(_s_x5103, _ctx); /*string*/
    kk_string_t _x_x5104;
    kk_string_t _x_x5105;
    kk_define_string_literal(static, _s_x5106, 17, " requires a value", _ctx)
    _x_x5105 = kk_string_dup(_s_x5106, _ctx); /*string*/
    _x_x5104 = kk_std_core_types__lp__plus__plus__rp_(name_0_0, _x_x5105, _ctx); /*string*/
    _b_x913_921 = kk_std_core_types__lp__plus__plus__rp_(_x_x5102, _x_x5104, _ctx); /*string*/
    kk_unit_t _brw_x2586 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x913_921)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2586; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11243;
    kk_box_t _x_x5107;
    kk_ref_t _x_x5108 = kk_ref_dup(options, _ctx); /*local-var<23438,list<(string, string)>>*/
    _x_x5107 = kk_ref_get(_x_x5108,kk_context()); /*10000*/
    x_11243 = kk_std_core_types__list_unbox(_x_x5107, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11243, _ctx);
      kk_box_t _x_x5109 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11141_fun5110(name_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5109); return kk_Unit;
    }
    {
      kk_api__mlift_hc__parse__loop_11140(name_0_0, options, remaining, x_11243, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11142_fun5113__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11142_fun5113(kk_function_t _fself, kk_box_t _b_x926, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11142_fun5113(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11142_fun5113, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11142_fun5113(kk_function_t _fself, kk_box_t _b_x926, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5114;
  kk_api__cliflag _match_x2583 = kk_api__cliflag_unbox(_b_x926, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x5115 = kk_api__as_Cliflag(_match_x2583, _ctx);
    kk_string_t _x_7 = _con_x5115->flag__name;
    kk_string_t _pat_0_20 = _con_x5115->flag__short;
    kk_string_t _pat_1_15 = _con_x5115->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2583, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2583, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2583, _ctx);
    }
    _x_x5114 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5114);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11142(kk_api__cliflag f_1, kk_ref_t flags, kk_std_core_types__list _y_x10794, kk_context_t* _ctx) { /* forall<h> (f@1 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x927_929;
  kk_box_t _x_x5112 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11142_fun5113(_ctx), kk_api__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x927_929 = kk_string_unbox(_x_x5112); /*string*/
  kk_std_core_types__list _b_x935_937;
  kk_std_core_types__list _x_x5116 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x927_929), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x935_937 = kk_std_core_list_append(_y_x10794, _x_x5116, _ctx); /*list<string>*/
  kk_unit_t _brw_x2582 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x935_937, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2582; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11144_fun5119__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11144_fun5119(kk_function_t _fself, kk_std_core_types__list _y_x10804, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11144_fun5119(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11144_fun5119__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11144_fun5119__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11144_fun5119, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_api__mlift_hc__parse__loop_11144_fun5119(kk_function_t _fself, kk_std_core_types__list _y_x10804, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11144_fun5119__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11144_fun5119__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x947_949 = kk_std_core_list_drop(_y_x10804, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2580 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x947_949, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2580; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11144_fun5121__t {
  struct kk_function_s _base;
  kk_function_t next_11246;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11144_fun5121(kk_function_t _fself, kk_box_t _b_x951, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11144_fun5121(kk_function_t next_11246, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11144_fun5121__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11144_fun5121__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11144_fun5121, kk_context());
  _self->next_11246 = next_11246;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11144_fun5121(kk_function_t _fself, kk_box_t _b_x951, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11144_fun5121__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11144_fun5121__t*, _fself, _ctx);
  kk_function_t next_11246 = _self->next_11246; /* (list<string>) -> <local<23438>,exn,api/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11246, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5122 = kk_Unit;
  kk_std_core_types__list _x_x5123 = kk_std_core_types__list_unbox(_b_x951, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11246, (next_11246, _x_x5123, _ctx), _ctx);
  return kk_unit_box(_x_x5122);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11144(kk_ref_t remaining, kk_unit_t wild___4, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11245;
  kk_box_t _x_x5117;
  kk_ref_t _x_x5118 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
  _x_x5117 = kk_ref_get(_x_x5118,kk_context()); /*10000*/
  x_11245 = kk_std_core_types__list_unbox(_x_x5117, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11246 = kk_api__new_mlift_hc__parse__loop_11144_fun5119(remaining, _ctx); /*(list<string>) -> <local<23438>,exn,api/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11245, _ctx);
    kk_box_t _x_x5120 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11144_fun5121(next_11246, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5120); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11246, (next_11246, x_11245, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11145_fun5125__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11145_fun5125(kk_function_t _fself, kk_box_t _b_x955, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11145_fun5125(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11145_fun5125, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11145_fun5125(kk_function_t _fself, kk_box_t _b_x955, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5126;
  kk_api__clioption _match_x2578 = kk_api__clioption_unbox(_b_x955, KK_OWNED, _ctx); /*api/clioption*/;
  {
    struct kk_api_Clioption* _con_x5127 = kk_api__as_Clioption(_match_x2578, _ctx);
    kk_string_t _x_10 = _con_x5127->opt__name;
    kk_string_t _pat_0_23 = _con_x5127->opt__short;
    kk_string_t _pat_1_18 = _con_x5127->opt__help;
    kk_string_t _pat_2_8 = _con_x5127->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2578, _ctx)) {
      kk_string_drop(_pat_2_8, _ctx);
      kk_string_drop(_pat_1_18, _ctx);
      kk_string_drop(_pat_0_23, _ctx);
      kk_datatype_ptr_free(_match_x2578, _ctx);
    }
    else {
      kk_string_dup(_x_10, _ctx);
      kk_datatype_ptr_decref(_match_x2578, _ctx);
    }
    _x_x5126 = _x_10; /*string*/
  }
  return kk_string_box(_x_x5126);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11145_fun5132__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11145_fun5132(kk_function_t _fself, kk_box_t _b_x972, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11145_fun5132(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11145_fun5132__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11145_fun5132__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11145_fun5132, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11145_fun5132(kk_function_t _fself, kk_box_t _b_x972, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11145_fun5132__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11145_fun5132__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_974 = kk_Unit;
  kk_unit_unbox(_b_x972);
  kk_unit_t _x_x5133 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11144(remaining, wild___4_974, _ctx);
  return kk_unit_box(_x_x5133);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11145(kk_std_core_types__list _y_x10798, kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10802, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x956_962;
  kk_box_t _x_x5124 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11145_fun5125(_ctx), kk_api__clioption_box(o_2, _ctx), _ctx); /*10001*/
  _b_x956_962 = kk_string_unbox(_x_x5124); /*string*/
  kk_std_core_types__list _b_x968_970;
  kk_std_core_types__list _x_x5128;
  kk_box_t _x_x5129;
  kk_std_core_types__tuple2 _x_x5130 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x956_962), kk_string_box(_y_x10802), _ctx); /*(10037, 10038)*/
  _x_x5129 = kk_std_core_types__tuple2_box(_x_x5130, _ctx); /*10021*/
  _x_x5128 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5129, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x968_970 = kk_std_core_list_append(_y_x10798, _x_x5128, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11249 = kk_Unit;
  kk_unit_t _brw_x2577 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x968_970, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2577;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5131 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11145_fun5132(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5131); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11144(remaining, x_11249, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11146_fun5144__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11146_fun5144(kk_function_t _fself, kk_box_t _b_x982, kk_box_t _b_x983, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11146_fun5144(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11146_fun5144, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11146_fun5144(kk_function_t _fself, kk_box_t _b_x982, kk_box_t _b_x983, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5145;
  kk_std_core_types__maybe _match_x2575 = kk_std_core_types__maybe_unbox(_b_x982, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2575, _ctx)) {
    kk_box_t _box_x975 = _match_x2575._cons.Just.value;
    kk_string_t x_2 = kk_string_unbox(_box_x975);
    kk_string_dup(x_2, _ctx);
    kk_std_core_types__maybe_drop(_match_x2575, _ctx);
    kk_box_drop(_b_x983, _ctx);
    _x_x5145 = x_2; /*string*/
  }
  else {
    kk_string_t _b_x976_988;
    kk_string_t _x_x5146;
    kk_define_string_literal(static, _s_x5147, 22, "unexpected Nothing in ", _ctx)
    _x_x5146 = kk_string_dup(_s_x5147, _ctx); /*string*/
    kk_string_t _x_x5148 = kk_string_unbox(_b_x983); /*string*/
    _b_x976_988 = kk_std_core_types__lp__plus__plus__rp_(_x_x5146, _x_x5148, _ctx); /*string*/
    kk_box_t _x_x5149 = kk_std_core_exn_throw(_b_x976_988, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5145 = kk_string_unbox(_x_x5149); /*string*/
  }
  return kk_string_box(_x_x5145);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11146_fun5151__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10798;
  kk_api__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11146_fun5151(kk_function_t _fself, kk_box_t _b_x993, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11146_fun5151(kk_std_core_types__list _y_x10798, kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11146_fun5151__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11146_fun5151__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11146_fun5151, kk_context());
  _self->_y_x10798 = _y_x10798;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11146_fun5151(kk_function_t _fself, kk_box_t _b_x993, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11146_fun5151__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11146_fun5151__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10798 = _self->_y_x10798; /* list<(string, string)> */
  kk_api__clioption o_2 = _self->o_2; /* api/clioption */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10798, _ctx);kk_api__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10802_995 = kk_string_unbox(_b_x993); /*string*/;
  kk_unit_t _x_x5152 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11145(_y_x10798, o_2, options, remaining, _y_x10802_995, _ctx);
  return kk_unit_box(_x_x5152);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11146(kk_std_core_types__list _y_x10798, kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10801, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_20_11059 = kk_std_core_list__index(_y_x10801, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11_11060;
  kk_string_t _x_x5134;
  kk_define_string_literal(static, _s_x5135, 6, "api.kk", _ctx)
  _x_x5134 = kk_string_dup(_s_x5135, _ctx); /*string*/
  kk_string_t _x_x5136;
  kk_string_t _x_x5137;
  kk_define_string_literal(static, _s_x5138, 1, "(", _ctx)
  _x_x5137 = kk_string_dup(_s_x5138, _ctx); /*string*/
  kk_string_t _x_x5139;
  kk_string_t _x_x5140 = kk_std_core_int_show(kk_integer_from_small(795), _ctx); /*string*/
  kk_string_t _x_x5141;
  kk_define_string_literal(static, _s_x5142, 1, ")", _ctx)
  _x_x5141 = kk_string_dup(_s_x5142, _ctx); /*string*/
  _x_x5139 = kk_std_core_types__lp__plus__plus__rp_(_x_x5140, _x_x5141, _ctx); /*string*/
  _x_x5136 = kk_std_core_types__lp__plus__plus__rp_(_x_x5137, _x_x5139, _ctx); /*string*/
  _x_x2_11_11060 = kk_std_core_types__lp__plus__plus__rp_(_x_x5134, _x_x5136, _ctx); /*string*/
  kk_ssize_t _b_x978_984 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11251;
  kk_box_t _x_x5143 = kk_std_core_hnd__open_at2(_b_x978_984, kk_api__new_mlift_hc__parse__loop_11146_fun5144(_ctx), kk_std_core_types__maybe_box(_x_x1_20_11059, _ctx), kk_string_box(_x_x2_11_11060), _ctx); /*10002*/
  x_11251 = kk_string_unbox(_x_x5143); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11251, _ctx);
    kk_box_t _x_x5150 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11146_fun5151(_y_x10798, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5150); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11145(_y_x10798, o_2, options, remaining, x_11251, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11147_fun5156__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10798;
  kk_api__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11147_fun5156(kk_function_t _fself, kk_box_t _b_x1001, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11147_fun5156(kk_std_core_types__list _y_x10798, kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11147_fun5156__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11147_fun5156__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11147_fun5156, kk_context());
  _self->_y_x10798 = _y_x10798;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11147_fun5156(kk_function_t _fself, kk_box_t _b_x1001, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11147_fun5156__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11147_fun5156__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10798 = _self->_y_x10798; /* list<(string, string)> */
  kk_api__clioption o_2 = _self->o_2; /* api/clioption */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10798, _ctx);kk_api__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10801_1003 = kk_std_core_types__list_unbox(_b_x1001, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5157 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11146(_y_x10798, o_2, options, remaining, _y_x10801_1003, _ctx);
  return kk_unit_box(_x_x5157);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11147(kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10798, kk_context_t* _ctx) { /* forall<h> (o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11253;
  kk_box_t _x_x5153;
  kk_ref_t _x_x5154 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
  _x_x5153 = kk_ref_get(_x_x5154,kk_context()); /*10000*/
  x_11253 = kk_std_core_types__list_unbox(_x_x5153, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11253, _ctx);
    kk_box_t _x_x5155 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11147_fun5156(_y_x10798, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5155); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11146(_y_x10798, o_2, options, remaining, x_11253, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11148_fun5166__t {
  struct kk_function_s _base;
  kk_api__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11148_fun5166(kk_function_t _fself, kk_box_t _b_x1011, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11148_fun5166(kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11148_fun5166__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11148_fun5166__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11148_fun5166, kk_context());
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11148_fun5166(kk_function_t _fself, kk_box_t _b_x1011, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11148_fun5166__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11148_fun5166__t*, _fself, _ctx);
  kk_api__clioption o_2 = _self->o_2; /* api/clioption */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_api__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10798_1015 = kk_std_core_types__list_unbox(_b_x1011, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5167 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11147(o_2, options, remaining, _y_x10798_1015, _ctx);
  return kk_unit_box(_x_x5167);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11148(kk_ref_t error, kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_std_core_types__list _y_x10796, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@5 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2568;
  kk_integer_t _brw_x2571 = kk_std_core_list__lift_length_6003(_y_x10796, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2572 = kk_integer_eq_borrow(_brw_x2571,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2571, _ctx);
  _match_x2568 = _brw_x2572; /*bool*/
  if (_match_x2568) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_2, (KK_I32(4)), _ctx);
    kk_string_t _b_x1005_1013;
    kk_string_t _x_x5158;
    kk_define_string_literal(static, _s_x5159, 8, "option -", _ctx)
    _x_x5158 = kk_string_dup(_s_x5159, _ctx); /*string*/
    kk_string_t _x_x5160;
    kk_string_t _x_x5161;
    kk_define_string_literal(static, _s_x5162, 17, " requires a value", _ctx)
    _x_x5161 = kk_string_dup(_s_x5162, _ctx); /*string*/
    _x_x5160 = kk_std_core_types__lp__plus__plus__rp_(s_5, _x_x5161, _ctx); /*string*/
    _b_x1005_1013 = kk_std_core_types__lp__plus__plus__rp_(_x_x5158, _x_x5160, _ctx); /*string*/
    kk_unit_t _brw_x2570 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1005_1013)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2570; return kk_Unit;
  }
  {
    kk_string_drop(s_5, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11255;
    kk_box_t _x_x5163;
    kk_ref_t _x_x5164 = kk_ref_dup(options, _ctx); /*local-var<23438,list<(string, string)>>*/
    _x_x5163 = kk_ref_get(_x_x5164,kk_context()); /*10000*/
    x_11255 = kk_std_core_types__list_unbox(_x_x5163, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11255, _ctx);
      kk_box_t _x_x5165 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11148_fun5166(o_2, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5165); return kk_Unit;
    }
    {
      kk_api__mlift_hc__parse__loop_11147(o_2, options, remaining, x_11255, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11149_fun5169__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11149_fun5169(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11149_fun5169(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11149_fun5169, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11149_fun5169(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11257 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<api/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5170 = kk_std_core_hnd__as_Ev(ev_11257, _ctx);
    kk_box_t _box_x1016 = _con_x5170->hnd;
    int32_t m = _con_x5170->marker;
    kk_api__hica_brk h = kk_api__hica_brk_unbox(_box_x1016, KK_BORROWED, _ctx);
    kk_api__hica_brk_dup(h, _ctx);
    {
      struct kk_api__Hnd_hica_brk* _con_x5171 = kk_api__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5171->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5171->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1019, (_fun_unbox_x1019, m, ev_11257, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_api__mlift_hc__parse__loop_11149(kk_unit_t wild___6, kk_context_t* _ctx) { /* forall<h> (wild_@6 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1022_1024 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5168 = kk_std_core_hnd__open_at0(_b_x1022_1024, kk_api__new_mlift_hc__parse__loop_11149_fun5169(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5168); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11150_fun5173__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11150_fun5173(kk_function_t _fself, kk_box_t _b_x1031, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11150_fun5173(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11150_fun5173, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11150_fun5173(kk_function_t _fself, kk_box_t _b_x1031, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_1033 = kk_Unit;
  kk_unit_unbox(_b_x1031);
  kk_unit_t _x_x5174 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11149(wild___6_1033, _ctx);
  return kk_unit_box(_x_x5174);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11150(kk_ref_t sub__args, kk_std_core_types__list _y_x10811, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11259 = kk_Unit;
  kk_unit_t _brw_x2567 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10811, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2567;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5172 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11150_fun5173(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5172); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11149(x_11259, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11151_fun5177__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11151_fun5177(kk_function_t _fself, kk_box_t _b_x1039, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11151_fun5177(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11151_fun5177__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11151_fun5177__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11151_fun5177, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11151_fun5177(kk_function_t _fself, kk_box_t _b_x1039, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11151_fun5177__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11151_fun5177__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10811_1041 = kk_std_core_types__list_unbox(_b_x1039, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5178 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11150(sub__args, _y_x10811_1041, _ctx);
  return kk_unit_box(_x_x5178);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11151(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11261;
  kk_box_t _x_x5175 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11261 = kk_std_core_types__list_unbox(_x_x5175, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11261, _ctx);
    kk_box_t _x_x5176 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11151_fun5177(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5176); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11150(sub__args, x_11261, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_api__mlift_hc__parse__loop_11152(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10815, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1045_1047;
  kk_std_core_types__list _x_x5179 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1045_1047 = kk_std_core_list_append(_y_x10815, _x_x5179, _ctx); /*list<string>*/
  kk_unit_t _brw_x2564 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1045_1047, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2564; return kk_Unit;
}
 
// monadic lift

kk_unit_t kk_api__mlift_hc__parse__loop_11153(kk_ref_t flags, kk_string_t name_0_0_0, kk_std_core_types__list _y_x10821, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1053_1055;
  kk_std_core_types__list _x_x5180 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1053_1055 = kk_std_core_list_append(_y_x10821, _x_x5180, _ctx); /*list<string>*/
  kk_unit_t _brw_x2563 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1053_1055, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2563; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11155_fun5183__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11155_fun5183(kk_function_t _fself, kk_std_core_types__list _y_x10831, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11155_fun5183(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11155_fun5183__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11155_fun5183__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11155_fun5183, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_api__mlift_hc__parse__loop_11155_fun5183(kk_function_t _fself, kk_std_core_types__list _y_x10831, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11155_fun5183__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11155_fun5183__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1067_1069 = kk_std_core_list_drop(_y_x10831, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2561 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1067_1069, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2561; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11155_fun5185__t {
  struct kk_function_s _base;
  kk_function_t next_11264;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11155_fun5185(kk_function_t _fself, kk_box_t _b_x1071, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11155_fun5185(kk_function_t next_11264, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11155_fun5185__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11155_fun5185__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11155_fun5185, kk_context());
  _self->next_11264 = next_11264;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11155_fun5185(kk_function_t _fself, kk_box_t _b_x1071, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11155_fun5185__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11155_fun5185__t*, _fself, _ctx);
  kk_function_t next_11264 = _self->next_11264; /* (list<string>) -> <local<23438>,exn,api/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11264, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5186 = kk_Unit;
  kk_std_core_types__list _x_x5187 = kk_std_core_types__list_unbox(_b_x1071, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11264, (next_11264, _x_x5187, _ctx), _ctx);
  return kk_unit_box(_x_x5186);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11155(kk_ref_t remaining, kk_unit_t wild___3_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11263;
  kk_box_t _x_x5181;
  kk_ref_t _x_x5182 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
  _x_x5181 = kk_ref_get(_x_x5182,kk_context()); /*10000*/
  x_11263 = kk_std_core_types__list_unbox(_x_x5181, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11264 = kk_api__new_mlift_hc__parse__loop_11155_fun5183(remaining, _ctx); /*(list<string>) -> <local<23438>,exn,api/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11263, _ctx);
    kk_box_t _x_x5184 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11155_fun5185(next_11264, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5184); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11264, (next_11264, x_11263, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11156_fun5192__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11156_fun5192(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11156_fun5192(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11156_fun5192__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11156_fun5192__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11156_fun5192, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11156_fun5192(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11156_fun5192__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11156_fun5192__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_0_1088 = kk_Unit;
  kk_unit_unbox(_b_x1086);
  kk_unit_t _x_x5193 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11155(remaining, wild___3_0_1088, _ctx);
  return kk_unit_box(_x_x5193);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11156(kk_std_core_types__list _y_x10825, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10829, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1078_1080;
  kk_std_core_types__list _x_x5188;
  kk_box_t _x_x5189;
  kk_std_core_types__tuple2 _x_x5190 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0_0), kk_string_box(_y_x10829), _ctx); /*(10037, 10038)*/
  _x_x5189 = kk_std_core_types__tuple2_box(_x_x5190, _ctx); /*10021*/
  _x_x5188 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5189, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1078_1080 = kk_std_core_list_append(_y_x10825, _x_x5188, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11267 = kk_Unit;
  kk_unit_t _brw_x2559 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1078_1080, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2559;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5191 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11156_fun5192(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5191); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11155(remaining, x_11267, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11157_fun5204__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11157_fun5204(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11157_fun5204(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11157_fun5204, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11157_fun5204(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5205;
  kk_std_core_types__maybe _match_x2557 = kk_std_core_types__maybe_unbox(_b_x1096, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2557, _ctx)) {
    kk_box_t _box_x1089 = _match_x2557._cons.Just.value;
    kk_string_t x_3 = kk_string_unbox(_box_x1089);
    kk_string_dup(x_3, _ctx);
    kk_std_core_types__maybe_drop(_match_x2557, _ctx);
    kk_box_drop(_b_x1097, _ctx);
    _x_x5205 = x_3; /*string*/
  }
  else {
    kk_string_t _b_x1090_1102;
    kk_string_t _x_x5206;
    kk_define_string_literal(static, _s_x5207, 22, "unexpected Nothing in ", _ctx)
    _x_x5206 = kk_string_dup(_s_x5207, _ctx); /*string*/
    kk_string_t _x_x5208 = kk_string_unbox(_b_x1097); /*string*/
    _b_x1090_1102 = kk_std_core_types__lp__plus__plus__rp_(_x_x5206, _x_x5208, _ctx); /*string*/
    kk_box_t _x_x5209 = kk_std_core_exn_throw(_b_x1090_1102, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5205 = kk_string_unbox(_x_x5209); /*string*/
  }
  return kk_string_box(_x_x5205);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11157_fun5211__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10825;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11157_fun5211(kk_function_t _fself, kk_box_t _b_x1107, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11157_fun5211(kk_std_core_types__list _y_x10825, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11157_fun5211__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11157_fun5211__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11157_fun5211, kk_context());
  _self->_y_x10825 = _y_x10825;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11157_fun5211(kk_function_t _fself, kk_box_t _b_x1107, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11157_fun5211__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11157_fun5211__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10825 = _self->_y_x10825; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10825, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10829_1109 = kk_string_unbox(_b_x1107); /*string*/;
  kk_unit_t _x_x5212 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11156(_y_x10825, name_0_0_0, options, remaining, _y_x10829_1109, _ctx);
  return kk_unit_box(_x_x5212);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11157(kk_std_core_types__list _y_x10825, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10828, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_30_11074 = kk_std_core_list__index(_y_x10828, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_16_11075;
  kk_string_t _x_x5194;
  kk_define_string_literal(static, _s_x5195, 6, "api.kk", _ctx)
  _x_x5194 = kk_string_dup(_s_x5195, _ctx); /*string*/
  kk_string_t _x_x5196;
  kk_string_t _x_x5197;
  kk_define_string_literal(static, _s_x5198, 1, "(", _ctx)
  _x_x5197 = kk_string_dup(_s_x5198, _ctx); /*string*/
  kk_string_t _x_x5199;
  kk_string_t _x_x5200 = kk_std_core_int_show(kk_integer_from_small(780), _ctx); /*string*/
  kk_string_t _x_x5201;
  kk_define_string_literal(static, _s_x5202, 1, ")", _ctx)
  _x_x5201 = kk_string_dup(_s_x5202, _ctx); /*string*/
  _x_x5199 = kk_std_core_types__lp__plus__plus__rp_(_x_x5200, _x_x5201, _ctx); /*string*/
  _x_x5196 = kk_std_core_types__lp__plus__plus__rp_(_x_x5197, _x_x5199, _ctx); /*string*/
  _x_x2_16_11075 = kk_std_core_types__lp__plus__plus__rp_(_x_x5194, _x_x5196, _ctx); /*string*/
  kk_ssize_t _b_x1092_1098 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11269;
  kk_box_t _x_x5203 = kk_std_core_hnd__open_at2(_b_x1092_1098, kk_api__new_mlift_hc__parse__loop_11157_fun5204(_ctx), kk_std_core_types__maybe_box(_x_x1_30_11074, _ctx), kk_string_box(_x_x2_16_11075), _ctx); /*10002*/
  x_11269 = kk_string_unbox(_x_x5203); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11269, _ctx);
    kk_box_t _x_x5210 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11157_fun5211(_y_x10825, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5210); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11156(_y_x10825, name_0_0_0, options, remaining, x_11269, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11158_fun5216__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10825;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11158_fun5216(kk_function_t _fself, kk_box_t _b_x1115, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11158_fun5216(kk_std_core_types__list _y_x10825, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11158_fun5216__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11158_fun5216__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11158_fun5216, kk_context());
  _self->_y_x10825 = _y_x10825;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11158_fun5216(kk_function_t _fself, kk_box_t _b_x1115, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11158_fun5216__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11158_fun5216__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10825 = _self->_y_x10825; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10825, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10828_1117 = kk_std_core_types__list_unbox(_b_x1115, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5217 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11157(_y_x10825, name_0_0_0, options, remaining, _y_x10828_1117, _ctx);
  return kk_unit_box(_x_x5217);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11158(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10825, kk_context_t* _ctx) { /* forall<h> (name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11271;
  kk_box_t _x_x5213;
  kk_ref_t _x_x5214 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
  _x_x5213 = kk_ref_get(_x_x5214,kk_context()); /*10000*/
  x_11271 = kk_std_core_types__list_unbox(_x_x5213, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11271, _ctx);
    kk_box_t _x_x5215 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11158_fun5216(_y_x10825, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5215); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11157(_y_x10825, name_0_0_0, options, remaining, x_11271, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11159_fun5226__t {
  struct kk_function_s _base;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11159_fun5226(kk_function_t _fself, kk_box_t _b_x1125, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11159_fun5226(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11159_fun5226__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11159_fun5226__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11159_fun5226, kk_context());
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11159_fun5226(kk_function_t _fself, kk_box_t _b_x1125, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11159_fun5226__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11159_fun5226__t*, _fself, _ctx);
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10825_1129 = kk_std_core_types__list_unbox(_b_x1125, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5227 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11158(name_0_0_0, options, remaining, _y_x10825_1129, _ctx);
  return kk_unit_box(_x_x5227);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11159(kk_ref_t error, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10823, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2550;
  kk_integer_t _brw_x2553 = kk_std_core_list__lift_length_6003(_y_x10823, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2554 = kk_integer_eq_borrow(_brw_x2553,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2553, _ctx);
  _match_x2550 = _brw_x2554; /*bool*/
  if (_match_x2550) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x1119_1127;
    kk_string_t _x_x5218;
    kk_define_string_literal(static, _s_x5219, 9, "option --", _ctx)
    _x_x5218 = kk_string_dup(_s_x5219, _ctx); /*string*/
    kk_string_t _x_x5220;
    kk_string_t _x_x5221;
    kk_define_string_literal(static, _s_x5222, 17, " requires a value", _ctx)
    _x_x5221 = kk_string_dup(_s_x5222, _ctx); /*string*/
    _x_x5220 = kk_std_core_types__lp__plus__plus__rp_(name_0_0_0, _x_x5221, _ctx); /*string*/
    _b_x1119_1127 = kk_std_core_types__lp__plus__plus__rp_(_x_x5218, _x_x5220, _ctx); /*string*/
    kk_unit_t _brw_x2552 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1119_1127)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2552; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11273;
    kk_box_t _x_x5223;
    kk_ref_t _x_x5224 = kk_ref_dup(options, _ctx); /*local-var<23438,list<(string, string)>>*/
    _x_x5223 = kk_ref_get(_x_x5224,kk_context()); /*10000*/
    x_11273 = kk_std_core_types__list_unbox(_x_x5223, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11273, _ctx);
      kk_box_t _x_x5225 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11159_fun5226(name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5225); return kk_Unit;
    }
    {
      kk_api__mlift_hc__parse__loop_11158(name_0_0_0, options, remaining, x_11273, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11160_fun5229__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11160_fun5229(kk_function_t _fself, kk_box_t _b_x1132, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11160_fun5229(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11160_fun5229, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11160_fun5229(kk_function_t _fself, kk_box_t _b_x1132, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5230;
  kk_api__cliflag _match_x2549 = kk_api__cliflag_unbox(_b_x1132, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x5231 = kk_api__as_Cliflag(_match_x2549, _ctx);
    kk_string_t _x_19 = _con_x5231->flag__name;
    kk_string_t _pat_0_40 = _con_x5231->flag__short;
    kk_string_t _pat_1_30 = _con_x5231->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2549, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2549, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2549, _ctx);
    }
    _x_x5230 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5230);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11160(kk_api__cliflag f_0_0, kk_ref_t flags, kk_std_core_types__list _y_x10837, kk_context_t* _ctx) { /* forall<h> (f@0@0 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x1133_1135;
  kk_box_t _x_x5228 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11160_fun5229(_ctx), kk_api__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1133_1135 = kk_string_unbox(_x_x5228); /*string*/
  kk_std_core_types__list _b_x1141_1143;
  kk_std_core_types__list _x_x5232 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1133_1135), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1141_1143 = kk_std_core_list_append(_y_x10837, _x_x5232, _ctx); /*list<string>*/
  kk_unit_t _brw_x2548 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1141_1143, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2548; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11162_fun5235__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11162_fun5235(kk_function_t _fself, kk_std_core_types__list _y_x10847, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11162_fun5235(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11162_fun5235__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11162_fun5235__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11162_fun5235, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_api__mlift_hc__parse__loop_11162_fun5235(kk_function_t _fself, kk_std_core_types__list _y_x10847, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11162_fun5235__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11162_fun5235__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1153_1155 = kk_std_core_list_drop(_y_x10847, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2546 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1153_1155, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2546; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11162_fun5237__t {
  struct kk_function_s _base;
  kk_function_t next_11276;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11162_fun5237(kk_function_t _fself, kk_box_t _b_x1157, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11162_fun5237(kk_function_t next_11276, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11162_fun5237__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11162_fun5237__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11162_fun5237, kk_context());
  _self->next_11276 = next_11276;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11162_fun5237(kk_function_t _fself, kk_box_t _b_x1157, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11162_fun5237__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11162_fun5237__t*, _fself, _ctx);
  kk_function_t next_11276 = _self->next_11276; /* (list<string>) -> <local<23438>,exn,api/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11276, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5238 = kk_Unit;
  kk_std_core_types__list _x_x5239 = kk_std_core_types__list_unbox(_b_x1157, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11276, (next_11276, _x_x5239, _ctx), _ctx);
  return kk_unit_box(_x_x5238);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11162(kk_ref_t remaining, kk_unit_t wild___4_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11275;
  kk_box_t _x_x5233;
  kk_ref_t _x_x5234 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
  _x_x5233 = kk_ref_get(_x_x5234,kk_context()); /*10000*/
  x_11275 = kk_std_core_types__list_unbox(_x_x5233, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11276 = kk_api__new_mlift_hc__parse__loop_11162_fun5235(remaining, _ctx); /*(list<string>) -> <local<23438>,exn,api/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11275, _ctx);
    kk_box_t _x_x5236 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11162_fun5237(next_11276, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5236); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11276, (next_11276, x_11275, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11163_fun5241__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11163_fun5241(kk_function_t _fself, kk_box_t _b_x1161, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11163_fun5241(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11163_fun5241, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11163_fun5241(kk_function_t _fself, kk_box_t _b_x1161, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5242;
  kk_api__clioption _match_x2544 = kk_api__clioption_unbox(_b_x1161, KK_OWNED, _ctx); /*api/clioption*/;
  {
    struct kk_api_Clioption* _con_x5243 = kk_api__as_Clioption(_match_x2544, _ctx);
    kk_string_t _x_22 = _con_x5243->opt__name;
    kk_string_t _pat_0_43 = _con_x5243->opt__short;
    kk_string_t _pat_1_33 = _con_x5243->opt__help;
    kk_string_t _pat_2_16 = _con_x5243->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2544, _ctx)) {
      kk_string_drop(_pat_2_16, _ctx);
      kk_string_drop(_pat_1_33, _ctx);
      kk_string_drop(_pat_0_43, _ctx);
      kk_datatype_ptr_free(_match_x2544, _ctx);
    }
    else {
      kk_string_dup(_x_22, _ctx);
      kk_datatype_ptr_decref(_match_x2544, _ctx);
    }
    _x_x5242 = _x_22; /*string*/
  }
  return kk_string_box(_x_x5242);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11163_fun5248__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11163_fun5248(kk_function_t _fself, kk_box_t _b_x1178, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11163_fun5248(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11163_fun5248__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11163_fun5248__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11163_fun5248, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11163_fun5248(kk_function_t _fself, kk_box_t _b_x1178, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11163_fun5248__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11163_fun5248__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_0_1180 = kk_Unit;
  kk_unit_unbox(_b_x1178);
  kk_unit_t _x_x5249 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11162(remaining, wild___4_0_1180, _ctx);
  return kk_unit_box(_x_x5249);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11163(kk_std_core_types__list _y_x10841, kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10845, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x1162_1168;
  kk_box_t _x_x5240 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11163_fun5241(_ctx), kk_api__clioption_box(o_0_0, _ctx), _ctx); /*10001*/
  _b_x1162_1168 = kk_string_unbox(_x_x5240); /*string*/
  kk_std_core_types__list _b_x1174_1176;
  kk_std_core_types__list _x_x5244;
  kk_box_t _x_x5245;
  kk_std_core_types__tuple2 _x_x5246 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x1162_1168), kk_string_box(_y_x10845), _ctx); /*(10037, 10038)*/
  _x_x5245 = kk_std_core_types__tuple2_box(_x_x5246, _ctx); /*10021*/
  _x_x5244 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5245, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1174_1176 = kk_std_core_list_append(_y_x10841, _x_x5244, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11279 = kk_Unit;
  kk_unit_t _brw_x2543 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1174_1176, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2543;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5247 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11163_fun5248(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5247); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11162(remaining, x_11279, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11164_fun5260__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11164_fun5260(kk_function_t _fself, kk_box_t _b_x1188, kk_box_t _b_x1189, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11164_fun5260(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11164_fun5260, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11164_fun5260(kk_function_t _fself, kk_box_t _b_x1188, kk_box_t _b_x1189, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5261;
  kk_std_core_types__maybe _match_x2541 = kk_std_core_types__maybe_unbox(_b_x1188, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2541, _ctx)) {
    kk_box_t _box_x1181 = _match_x2541._cons.Just.value;
    kk_string_t x_4 = kk_string_unbox(_box_x1181);
    kk_string_dup(x_4, _ctx);
    kk_std_core_types__maybe_drop(_match_x2541, _ctx);
    kk_box_drop(_b_x1189, _ctx);
    _x_x5261 = x_4; /*string*/
  }
  else {
    kk_string_t _b_x1182_1194;
    kk_string_t _x_x5262;
    kk_define_string_literal(static, _s_x5263, 22, "unexpected Nothing in ", _ctx)
    _x_x5262 = kk_string_dup(_s_x5263, _ctx); /*string*/
    kk_string_t _x_x5264 = kk_string_unbox(_b_x1189); /*string*/
    _b_x1182_1194 = kk_std_core_types__lp__plus__plus__rp_(_x_x5262, _x_x5264, _ctx); /*string*/
    kk_box_t _x_x5265 = kk_std_core_exn_throw(_b_x1182_1194, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5261 = kk_string_unbox(_x_x5265); /*string*/
  }
  return kk_string_box(_x_x5261);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11164_fun5267__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10841;
  kk_api__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11164_fun5267(kk_function_t _fself, kk_box_t _b_x1199, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11164_fun5267(kk_std_core_types__list _y_x10841, kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11164_fun5267__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11164_fun5267__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11164_fun5267, kk_context());
  _self->_y_x10841 = _y_x10841;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11164_fun5267(kk_function_t _fself, kk_box_t _b_x1199, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11164_fun5267__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11164_fun5267__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10841 = _self->_y_x10841; /* list<(string, string)> */
  kk_api__clioption o_0_0 = _self->o_0_0; /* api/clioption */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10841, _ctx);kk_api__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10845_1201 = kk_string_unbox(_b_x1199); /*string*/;
  kk_unit_t _x_x5268 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11163(_y_x10841, o_0_0, options, remaining, _y_x10845_1201, _ctx);
  return kk_unit_box(_x_x5268);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11164(kk_std_core_types__list _y_x10841, kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10844, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_38_11086 = kk_std_core_list__index(_y_x10844, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_20_11087;
  kk_string_t _x_x5250;
  kk_define_string_literal(static, _s_x5251, 6, "api.kk", _ctx)
  _x_x5250 = kk_string_dup(_s_x5251, _ctx); /*string*/
  kk_string_t _x_x5252;
  kk_string_t _x_x5253;
  kk_define_string_literal(static, _s_x5254, 1, "(", _ctx)
  _x_x5253 = kk_string_dup(_s_x5254, _ctx); /*string*/
  kk_string_t _x_x5255;
  kk_string_t _x_x5256 = kk_std_core_int_show(kk_integer_from_small(795), _ctx); /*string*/
  kk_string_t _x_x5257;
  kk_define_string_literal(static, _s_x5258, 1, ")", _ctx)
  _x_x5257 = kk_string_dup(_s_x5258, _ctx); /*string*/
  _x_x5255 = kk_std_core_types__lp__plus__plus__rp_(_x_x5256, _x_x5257, _ctx); /*string*/
  _x_x5252 = kk_std_core_types__lp__plus__plus__rp_(_x_x5253, _x_x5255, _ctx); /*string*/
  _x_x2_20_11087 = kk_std_core_types__lp__plus__plus__rp_(_x_x5250, _x_x5252, _ctx); /*string*/
  kk_ssize_t _b_x1184_1190 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11281;
  kk_box_t _x_x5259 = kk_std_core_hnd__open_at2(_b_x1184_1190, kk_api__new_mlift_hc__parse__loop_11164_fun5260(_ctx), kk_std_core_types__maybe_box(_x_x1_38_11086, _ctx), kk_string_box(_x_x2_20_11087), _ctx); /*10002*/
  x_11281 = kk_string_unbox(_x_x5259); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11281, _ctx);
    kk_box_t _x_x5266 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11164_fun5267(_y_x10841, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5266); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11163(_y_x10841, o_0_0, options, remaining, x_11281, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11165_fun5272__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10841;
  kk_api__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11165_fun5272(kk_function_t _fself, kk_box_t _b_x1207, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11165_fun5272(kk_std_core_types__list _y_x10841, kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11165_fun5272__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11165_fun5272__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11165_fun5272, kk_context());
  _self->_y_x10841 = _y_x10841;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11165_fun5272(kk_function_t _fself, kk_box_t _b_x1207, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11165_fun5272__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11165_fun5272__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10841 = _self->_y_x10841; /* list<(string, string)> */
  kk_api__clioption o_0_0 = _self->o_0_0; /* api/clioption */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10841, _ctx);kk_api__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10844_1209 = kk_std_core_types__list_unbox(_b_x1207, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5273 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11164(_y_x10841, o_0_0, options, remaining, _y_x10844_1209, _ctx);
  return kk_unit_box(_x_x5273);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11165(kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10841, kk_context_t* _ctx) { /* forall<h> (o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11283;
  kk_box_t _x_x5269;
  kk_ref_t _x_x5270 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
  _x_x5269 = kk_ref_get(_x_x5270,kk_context()); /*10000*/
  x_11283 = kk_std_core_types__list_unbox(_x_x5269, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11283, _ctx);
    kk_box_t _x_x5271 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11165_fun5272(_y_x10841, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5271); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11164(_y_x10841, o_0_0, options, remaining, x_11283, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11166_fun5282__t {
  struct kk_function_s _base;
  kk_api__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11166_fun5282(kk_function_t _fself, kk_box_t _b_x1217, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11166_fun5282(kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11166_fun5282__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11166_fun5282__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11166_fun5282, kk_context());
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11166_fun5282(kk_function_t _fself, kk_box_t _b_x1217, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11166_fun5282__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11166_fun5282__t*, _fself, _ctx);
  kk_api__clioption o_0_0 = _self->o_0_0; /* api/clioption */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_api__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10841_1221 = kk_std_core_types__list_unbox(_b_x1217, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5283 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11165(o_0_0, options, remaining, _y_x10841_1221, _ctx);
  return kk_unit_box(_x_x5283);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11166(kk_ref_t error, kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_std_core_types__list _y_x10839, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2534;
  kk_integer_t _brw_x2537 = kk_std_core_list__lift_length_6003(_y_x10839, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2538 = kk_integer_eq_borrow(_brw_x2537,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2537, _ctx);
  _match_x2534 = _brw_x2538; /*bool*/
  if (_match_x2534) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_0_0, (KK_I32(4)), _ctx);
    kk_string_t _b_x1211_1219;
    kk_string_t _x_x5274;
    kk_define_string_literal(static, _s_x5275, 8, "option -", _ctx)
    _x_x5274 = kk_string_dup(_s_x5275, _ctx); /*string*/
    kk_string_t _x_x5276;
    kk_string_t _x_x5277;
    kk_define_string_literal(static, _s_x5278, 17, " requires a value", _ctx)
    _x_x5277 = kk_string_dup(_s_x5278, _ctx); /*string*/
    _x_x5276 = kk_std_core_types__lp__plus__plus__rp_(s_0_0, _x_x5277, _ctx); /*string*/
    _b_x1211_1219 = kk_std_core_types__lp__plus__plus__rp_(_x_x5274, _x_x5276, _ctx); /*string*/
    kk_unit_t _brw_x2536 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1211_1219)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2536; return kk_Unit;
  }
  {
    kk_string_drop(s_0_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11285;
    kk_box_t _x_x5279;
    kk_ref_t _x_x5280 = kk_ref_dup(options, _ctx); /*local-var<23438,list<(string, string)>>*/
    _x_x5279 = kk_ref_get(_x_x5280,kk_context()); /*10000*/
    x_11285 = kk_std_core_types__list_unbox(_x_x5279, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11285, _ctx);
      kk_box_t _x_x5281 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11166_fun5282(o_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5281); return kk_Unit;
    }
    {
      kk_api__mlift_hc__parse__loop_11165(o_0_0, options, remaining, x_11285, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11167_fun5285__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11167_fun5285(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11167_fun5285(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11167_fun5285, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11167_fun5285(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11287 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<api/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5286 = kk_std_core_hnd__as_Ev(ev_11287, _ctx);
    kk_box_t _box_x1222 = _con_x5286->hnd;
    int32_t m = _con_x5286->marker;
    kk_api__hica_brk h = kk_api__hica_brk_unbox(_box_x1222, KK_BORROWED, _ctx);
    kk_api__hica_brk_dup(h, _ctx);
    {
      struct kk_api__Hnd_hica_brk* _con_x5287 = kk_api__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5287->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5287->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1225, (_fun_unbox_x1225, m, ev_11287, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_api__mlift_hc__parse__loop_11167(kk_unit_t wild___6_0, kk_context_t* _ctx) { /* forall<h> (wild_@6@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1228_1230 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5284 = kk_std_core_hnd__open_at0(_b_x1228_1230, kk_api__new_mlift_hc__parse__loop_11167_fun5285(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5284); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11168_fun5289__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11168_fun5289(kk_function_t _fself, kk_box_t _b_x1237, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11168_fun5289(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11168_fun5289, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11168_fun5289(kk_function_t _fself, kk_box_t _b_x1237, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_0_1239 = kk_Unit;
  kk_unit_unbox(_b_x1237);
  kk_unit_t _x_x5290 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11167(wild___6_0_1239, _ctx);
  return kk_unit_box(_x_x5290);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11168(kk_ref_t sub__args, kk_std_core_types__list _y_x10854, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11289 = kk_Unit;
  kk_unit_t _brw_x2533 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10854, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2533;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5288 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11168_fun5289(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5288); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11167(x_11289, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11169_fun5293__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11169_fun5293(kk_function_t _fself, kk_box_t _b_x1245, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11169_fun5293(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11169_fun5293__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11169_fun5293__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11169_fun5293, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11169_fun5293(kk_function_t _fself, kk_box_t _b_x1245, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11169_fun5293__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11169_fun5293__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10854_1247 = kk_std_core_types__list_unbox(_b_x1245, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5294 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11168(sub__args, _y_x10854_1247, _ctx);
  return kk_unit_box(_x_x5294);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11169(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11291;
  kk_box_t _x_x5291 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11291 = kk_std_core_types__list_unbox(_x_x5291, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11291, _ctx);
    kk_box_t _x_x5292 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11169_fun5293(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5292); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11168(sub__args, x_11291, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_api__mlift_hc__parse__loop_11170(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10858, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1251_1253;
  kk_std_core_types__list _x_x5295 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1251_1253 = kk_std_core_list_append(_y_x10858, _x_x5295, _ctx); /*list<string>*/
  kk_unit_t _brw_x2530 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1251_1253, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2530; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5303__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5303(kk_function_t _fself, kk_box_t _b_x1261, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5303(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5303, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5303(kk_function_t _fself, kk_box_t _b_x1261, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_1751 = kk_Unit;
  kk_unit_unbox(_b_x1261);
  kk_unit_t _x_x5304 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11126(wild___0_1751, _ctx);
  return kk_unit_box(_x_x5304);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5312__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5312(kk_function_t _fself, kk_box_t _b_x1267, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5312(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5312, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5312(kk_function_t _fself, kk_box_t _b_x1267, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_0_1752 = kk_Unit;
  kk_unit_unbox(_b_x1267);
  kk_unit_t _x_x5313 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11127(wild___0_0_1752, _ctx);
  return kk_unit_box(_x_x5313);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5321__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5321(kk_function_t _fself, kk_box_t _b_x1273, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5321(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5321, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5321(kk_function_t _fself, kk_box_t _b_x1273, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___1_1753 = kk_Unit;
  kk_unit_unbox(_b_x1273);
  kk_unit_t _x_x5322 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11128(wild___1_1753, _ctx);
  return kk_unit_box(_x_x5322);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5329__t {
  struct kk_function_s _base;
  kk_ref_t positionals;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5329(kk_function_t _fself, kk_box_t _b_x1279, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5329(kk_ref_t positionals, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5329__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5329__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5329, kk_context());
  _self->positionals = positionals;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5329(kk_function_t _fself, kk_box_t _b_x1279, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5329__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5329__t*, _fself, _ctx);
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10764_1754 = kk_std_core_types__list_unbox(_b_x1279, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5330 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11131(positionals, remaining, _y_x10764_1754, _ctx);
  return kk_unit_box(_x_x5330);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5335__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5335(kk_function_t _fself, kk_box_t _b_x1283, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5335(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5335, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5335(kk_function_t _fself, kk_box_t _b_x1283, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5336;
  kk_std_core_types__maybe maybe_1772 = kk_std_core_types__maybe_unbox(_b_x1283, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1772, _ctx)) {
    kk_box_t _box_x1280 = maybe_1772._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1772, _ctx);
    _x_x5336 = true; /*bool*/
  }
  else {
    _x_x5336 = false; /*bool*/
  }
  return kk_bool_box(_x_x5336);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5341__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5341(kk_function_t _fself, kk_box_t _b_x1288, kk_box_t _b_x1289, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5341(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5341, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5341(kk_function_t _fself, kk_box_t _b_x1288, kk_box_t _b_x1289, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_0_10704;
  kk_string_t _x_x5342;
  kk_box_t _x_x5343 = kk_box_dup(_b_x1288, _ctx); /*10000*/
  _x_x5342 = kk_string_unbox(_x_x5343); /*string*/
  kk_string_t _x_x5344;
  kk_box_t _x_x5345 = kk_box_dup(_b_x1289, _ctx); /*10001*/
  _x_x5344 = kk_string_unbox(_x_x5345); /*string*/
  maybe_0_10704 = kk_std_core_sslice_starts_with(_x_x5342, _x_x5344, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5346;
  if (kk_std_core_types__is_Just(maybe_0_10704, _ctx)) {
    kk_box_t _box_x1284 = maybe_0_10704._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_0_10704, _ctx);
    kk_std_core_types__list _x_x5347;
    kk_std_core_types__list _x_x5348;
    kk_string_t _x_x5349 = kk_string_unbox(_b_x1288); /*string*/
    _x_x5348 = kk_std_core_string_list(_x_x5349, _ctx); /*list<char>*/
    kk_integer_t _x_x5350;
    kk_string_t _x_x5351 = kk_string_unbox(_b_x1289); /*string*/
    _x_x5350 = kk_std_core_string_chars_fs_count(_x_x5351, _ctx); /*int*/
    _x_x5347 = kk_std_core_list_drop(_x_x5348, _x_x5350, _ctx); /*list<10001>*/
    _x_x5346 = kk_std_core_string_listchar_fs_string(_x_x5347, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1289, _ctx);
    _x_x5346 = kk_string_unbox(_b_x1288); /*string*/
  }
  return kk_string_box(_x_x5346);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5359__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5359(kk_function_t _fself, kk_box_t _b_x1297, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5359(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5359, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5359(kk_function_t _fself, kk_box_t _b_x1297, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5360;
  kk_char_t _x_x5361 = kk_char_unbox(_b_x1297, KK_OWNED, _ctx); /*char*/
  _x_x5360 = kk_std_core_string_char_fs_string(_x_x5361, _ctx); /*string*/
  return kk_string_box(_x_x5360);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5363__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5363(kk_function_t _fself, kk_box_t _b_x1301, kk_box_t _b_x1302, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5363(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5363, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5363(kk_function_t _fself, kk_box_t _b_x1301, kk_box_t _b_x1302, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011;
  kk_string_t _x_x5364 = kk_string_unbox(_b_x1301); /*string*/
  kk_string_t _x_x5365 = kk_string_unbox(_b_x1302); /*string*/
  v_10011 = kk_string_splitv(_x_x5364,_x_x5365,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x5366 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x5366, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5371__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t options;
  kk_api__clispec spec;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5371(kk_function_t _fself, kk_box_t _b_x1311, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5371(kk_ref_t error, kk_ref_t options, kk_api__clispec spec, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5371__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5371__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5371, kk_context());
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5371(kk_function_t _fself, kk_box_t _b_x1311, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5371__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5371__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23438,string> */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_api__clispec spec = _self->spec; /* api/clispec */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_api__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list _c_x10770_1755 = kk_std_core_types__list_unbox(_b_x1311, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5372 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11134(error, options, spec, _c_x10770_1755, _ctx);
  return kk_unit_box(_x_x5372);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5377__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5377(kk_function_t _fself, kk_box_t _b_x1315, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5377(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5377, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5377(kk_function_t _fself, kk_box_t _b_x1315, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5378;
  kk_std_core_types__maybe maybe_1_1773 = kk_std_core_types__maybe_unbox(_b_x1315, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1_1773, _ctx)) {
    kk_box_t _box_x1312 = maybe_1_1773._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1_1773, _ctx);
    _x_x5378 = true; /*bool*/
  }
  else {
    _x_x5378 = false; /*bool*/
  }
  return kk_bool_box(_x_x5378);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5380__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5380(kk_function_t _fself, kk_box_t _b_x1320, kk_box_t _b_x1321, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5380(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5380, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5380(kk_function_t _fself, kk_box_t _b_x1320, kk_box_t _b_x1321, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_2_10706;
  kk_string_t _x_x5381;
  kk_box_t _x_x5382 = kk_box_dup(_b_x1320, _ctx); /*10000*/
  _x_x5381 = kk_string_unbox(_x_x5382); /*string*/
  kk_string_t _x_x5383;
  kk_box_t _x_x5384 = kk_box_dup(_b_x1321, _ctx); /*10001*/
  _x_x5383 = kk_string_unbox(_x_x5384); /*string*/
  maybe_2_10706 = kk_std_core_sslice_starts_with(_x_x5381, _x_x5383, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5385;
  if (kk_std_core_types__is_Just(maybe_2_10706, _ctx)) {
    kk_box_t _box_x1316 = maybe_2_10706._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_2_10706, _ctx);
    kk_std_core_types__list _x_x5386;
    kk_std_core_types__list _x_x5387;
    kk_string_t _x_x5388 = kk_string_unbox(_b_x1320); /*string*/
    _x_x5387 = kk_std_core_string_list(_x_x5388, _ctx); /*list<char>*/
    kk_integer_t _x_x5389;
    kk_string_t _x_x5390 = kk_string_unbox(_b_x1321); /*string*/
    _x_x5389 = kk_std_core_string_chars_fs_count(_x_x5390, _ctx); /*int*/
    _x_x5386 = kk_std_core_list_drop(_x_x5387, _x_x5389, _ctx); /*list<10001>*/
    _x_x5385 = kk_std_core_string_listchar_fs_string(_x_x5386, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1321, _ctx);
    _x_x5385 = kk_string_unbox(_b_x1320); /*string*/
  }
  return kk_string_box(_x_x5385);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5395__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5395(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5395(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5395, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5395(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5396;
  kk_api__clispec _match_x2518 = kk_api__clispec_unbox(_b_x1329, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5397 = kk_api__as_Clispec(_match_x2518, _ctx);
    kk_string_t _pat_0_11 = _con_x5397->app__name;
    kk_string_t _pat_1_8 = _con_x5397->app__version;
    kk_string_t _pat_2_2 = _con_x5397->app__about;
    kk_std_core_types__list _x_2 = _con_x5397->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x5397->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x5397->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5397->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2518, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_string_drop(_pat_2_2, _ctx);
      kk_string_drop(_pat_1_8, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2518, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2518, _ctx);
    }
    _x_x5396 = _x_2; /*list<api/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5396, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5401__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5401(kk_function_t _fself, kk_box_t _b_x1339, kk_box_t _b_x1340, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5401(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5401, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5403__t {
  struct kk_function_s _base;
  kk_string_t name_1_1775;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5403(kk_function_t _fself, kk_box_t _b_x1335, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5403(kk_string_t name_1_1775, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5403__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5403__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5403, kk_context());
  _self->name_1_1775 = name_1_1775;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5403(kk_function_t _fself, kk_box_t _b_x1335, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5403__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5403__t*, _fself, _ctx);
  kk_string_t name_1_1775 = _self->name_1_1775; /* string */
  kk_drop_match(_self, {kk_string_dup(name_1_1775, _ctx);}, {}, _ctx)
  kk_string_t _x_x5404;
  kk_api__cliflag _match_x2517 = kk_api__cliflag_unbox(_b_x1335, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x5405 = kk_api__as_Cliflag(_match_x2517, _ctx);
    kk_string_t _x_1 = _con_x5405->flag__name;
    kk_string_t _pat_0_10 = _con_x5405->flag__short;
    kk_string_t _pat_1_7 = _con_x5405->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2517, _ctx)) {
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_10, _ctx);
      kk_datatype_ptr_free(_match_x2517, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2517, _ctx);
    }
    _x_x5404 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x5404,name_1_1775,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5401(kk_function_t _fself, kk_box_t _b_x1339, kk_box_t _b_x1340, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5402;
  kk_std_core_types__list flags_0_1774 = kk_std_core_types__list_unbox(_b_x1339, KK_OWNED, _ctx); /*list<api/cliflag>*/;
  kk_string_t name_1_1775 = kk_string_unbox(_b_x1340); /*string*/;
  _x_x5402 = kk_std_core_list_find(flags_0_1774, kk_api__new_mlift_hc__parse__loop_11171_fun5403(name_1_1775, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5402, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5411__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5411(kk_function_t _fself, kk_std_core_types__list _y_x10778, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5411(kk_ref_t flags, kk_string_t name_0_0, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5411__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5411__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5411, kk_context());
  _self->flags = flags;
  _self->name_0_0 = name_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5411(kk_function_t _fself, kk_std_core_types__list _y_x10778, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5411__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5411__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23438,list<string>> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1349_1351;
  kk_std_core_types__list _x_x5412 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1349_1351 = kk_std_core_list_append(_y_x10778, _x_x5412, _ctx); /*list<string>*/
  kk_unit_t _brw_x2516 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1349_1351, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2516; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5414__t {
  struct kk_function_s _base;
  kk_function_t next_4_11304;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5414(kk_function_t _fself, kk_box_t _b_x1355, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5414(kk_function_t next_4_11304, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5414__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5414__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5414, kk_context());
  _self->next_4_11304 = next_4_11304;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5414(kk_function_t _fself, kk_box_t _b_x1355, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5414__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5414__t*, _fself, _ctx);
  kk_function_t next_4_11304 = _self->next_4_11304; /* (list<string>) -> <local<23438>,exn,api/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_4_11304, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5415 = kk_Unit;
  kk_std_core_types__list _x_x5416 = kk_std_core_types__list_unbox(_b_x1355, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11304, (next_4_11304, _x_x5416, _ctx), _ctx);
  return kk_unit_box(_x_x5415);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5418__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5418(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5418(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5418, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5418(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5419;
  kk_api__clispec _match_x2514 = kk_api__clispec_unbox(_b_x1358, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5420 = kk_api__as_Clispec(_match_x2514, _ctx);
    kk_string_t _pat_0_13 = _con_x5420->app__name;
    kk_string_t _pat_1_10 = _con_x5420->app__version;
    kk_string_t _pat_2_4 = _con_x5420->app__about;
    kk_std_core_types__list _pat_3_2 = _con_x5420->app__flags;
    kk_std_core_types__list _x_4 = _con_x5420->app__options;
    kk_std_core_types__list _pat_4_2 = _con_x5420->app__args;
    kk_std_core_types__list _pat_5_2 = _con_x5420->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2514, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_std_core_types__list_drop(_pat_3_2, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_10, _ctx);
      kk_string_drop(_pat_0_13, _ctx);
      kk_datatype_ptr_free(_match_x2514, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2514, _ctx);
    }
    _x_x5419 = _x_4; /*list<api/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5419, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5422__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5422(kk_function_t _fself, kk_box_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5422(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5422, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5424__t {
  struct kk_function_s _base;
  kk_string_t name_2_1777;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5424(kk_function_t _fself, kk_box_t _b_x1364, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5424(kk_string_t name_2_1777, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5424__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5424__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5424, kk_context());
  _self->name_2_1777 = name_2_1777;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5424(kk_function_t _fself, kk_box_t _b_x1364, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5424__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5424__t*, _fself, _ctx);
  kk_string_t name_2_1777 = _self->name_2_1777; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2_1777, _ctx);}, {}, _ctx)
  kk_string_t _x_x5425;
  kk_api__clioption _match_x2513 = kk_api__clioption_unbox(_b_x1364, KK_OWNED, _ctx); /*api/clioption*/;
  {
    struct kk_api_Clioption* _con_x5426 = kk_api__as_Clioption(_match_x2513, _ctx);
    kk_string_t _x_3 = _con_x5426->opt__name;
    kk_string_t _pat_0_12 = _con_x5426->opt__short;
    kk_string_t _pat_1_9 = _con_x5426->opt__help;
    kk_string_t _pat_2_3 = _con_x5426->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2513, _ctx)) {
      kk_string_drop(_pat_2_3, _ctx);
      kk_string_drop(_pat_1_9, _ctx);
      kk_string_drop(_pat_0_12, _ctx);
      kk_datatype_ptr_free(_match_x2513, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2513, _ctx);
    }
    _x_x5425 = _x_3; /*string*/
  }
  return kk_string_is_eq(_x_x5425,name_2_1777,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5422(kk_function_t _fself, kk_box_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5423;
  kk_std_core_types__list options_1_1776 = kk_std_core_types__list_unbox(_b_x1368, KK_OWNED, _ctx); /*list<api/clioption>*/;
  kk_string_t name_2_1777 = kk_string_unbox(_b_x1369); /*string*/;
  _x_x5423 = kk_std_core_list_find(options_1_1776, kk_api__new_mlift_hc__parse__loop_11171_fun5424(name_2_1777, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5423, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5433__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5433(kk_function_t _fself, kk_box_t _b_x1376, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5433(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5433__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5433__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5433, kk_context());
  _self->error = error;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5433(kk_function_t _fself, kk_box_t _b_x1376, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5433__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5433__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23438,string> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10780_1758 = kk_std_core_types__list_unbox(_b_x1376, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5434 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11141(error, name_0_0, options, remaining, _y_x10780_1758, _ctx);
  return kk_unit_box(_x_x5434);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5441__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5441(kk_function_t _fself, kk_box_t _b_x1382, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5441(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5441, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5441(kk_function_t _fself, kk_box_t _b_x1382, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5442;
  kk_std_core_types__maybe maybe_3_1778 = kk_std_core_types__maybe_unbox(_b_x1382, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_3_1778, _ctx)) {
    kk_box_t _box_x1379 = maybe_3_1778._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_3_1778, _ctx);
    _x_x5442 = true; /*bool*/
  }
  else {
    _x_x5442 = false; /*bool*/
  }
  return kk_bool_box(_x_x5442);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5444__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5444(kk_function_t _fself, kk_box_t _b_x1387, kk_box_t _b_x1388, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5444(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5444, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5444(kk_function_t _fself, kk_box_t _b_x1387, kk_box_t _b_x1388, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_4_10709;
  kk_string_t _x_x5445;
  kk_box_t _x_x5446 = kk_box_dup(_b_x1387, _ctx); /*10000*/
  _x_x5445 = kk_string_unbox(_x_x5446); /*string*/
  kk_string_t _x_x5447;
  kk_box_t _x_x5448 = kk_box_dup(_b_x1388, _ctx); /*10001*/
  _x_x5447 = kk_string_unbox(_x_x5448); /*string*/
  maybe_4_10709 = kk_std_core_sslice_starts_with(_x_x5445, _x_x5447, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5449;
  if (kk_std_core_types__is_Just(maybe_4_10709, _ctx)) {
    kk_box_t _box_x1383 = maybe_4_10709._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_4_10709, _ctx);
    kk_std_core_types__list _x_x5450;
    kk_std_core_types__list _x_x5451;
    kk_string_t _x_x5452 = kk_string_unbox(_b_x1387); /*string*/
    _x_x5451 = kk_std_core_string_list(_x_x5452, _ctx); /*list<char>*/
    kk_integer_t _x_x5453;
    kk_string_t _x_x5454 = kk_string_unbox(_b_x1388); /*string*/
    _x_x5453 = kk_std_core_string_chars_fs_count(_x_x5454, _ctx); /*int*/
    _x_x5450 = kk_std_core_list_drop(_x_x5451, _x_x5453, _ctx); /*list<10001>*/
    _x_x5449 = kk_std_core_string_listchar_fs_string(_x_x5450, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1388, _ctx);
    _x_x5449 = kk_string_unbox(_b_x1387); /*string*/
  }
  return kk_string_box(_x_x5449);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5459__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5459(kk_function_t _fself, kk_box_t _b_x1396, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5459(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5459, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5459(kk_function_t _fself, kk_box_t _b_x1396, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5460;
  kk_api__clispec _match_x2508 = kk_api__clispec_unbox(_b_x1396, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5461 = kk_api__as_Clispec(_match_x2508, _ctx);
    kk_string_t _pat_0_19 = _con_x5461->app__name;
    kk_string_t _pat_1_14 = _con_x5461->app__version;
    kk_string_t _pat_2_5 = _con_x5461->app__about;
    kk_std_core_types__list _x_6 = _con_x5461->app__flags;
    kk_std_core_types__list _pat_3_3 = _con_x5461->app__options;
    kk_std_core_types__list _pat_4_3 = _con_x5461->app__args;
    kk_std_core_types__list _pat_5_3 = _con_x5461->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2508, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_3, _ctx);
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_string_drop(_pat_2_5, _ctx);
      kk_string_drop(_pat_1_14, _ctx);
      kk_string_drop(_pat_0_19, _ctx);
      kk_datatype_ptr_free(_match_x2508, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2508, _ctx);
    }
    _x_x5460 = _x_6; /*list<api/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5460, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5465__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5465(kk_function_t _fself, kk_box_t _b_x1406, kk_box_t _b_x1407, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5465(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5465, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5467__t {
  struct kk_function_s _base;
  kk_string_t s_6_1780;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5467(kk_function_t _fself, kk_box_t _b_x1402, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5467(kk_string_t s_6_1780, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5467__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5467__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5467, kk_context());
  _self->s_6_1780 = s_6_1780;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5467(kk_function_t _fself, kk_box_t _b_x1402, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5467__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5467__t*, _fself, _ctx);
  kk_string_t s_6_1780 = _self->s_6_1780; /* string */
  kk_drop_match(_self, {kk_string_dup(s_6_1780, _ctx);}, {}, _ctx)
  kk_string_t _x_x5468;
  kk_api__cliflag _match_x2507 = kk_api__cliflag_unbox(_b_x1402, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x5469 = kk_api__as_Cliflag(_match_x2507, _ctx);
    kk_string_t _pat_0_18 = _con_x5469->flag__name;
    kk_string_t _x_5 = _con_x5469->flag__short;
    kk_string_t _pat_1_13 = _con_x5469->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2507, _ctx)) {
      kk_string_drop(_pat_1_13, _ctx);
      kk_string_drop(_pat_0_18, _ctx);
      kk_datatype_ptr_free(_match_x2507, _ctx);
    }
    else {
      kk_string_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2507, _ctx);
    }
    _x_x5468 = _x_5; /*string*/
  }
  return kk_string_is_eq(_x_x5468,s_6_1780,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5465(kk_function_t _fself, kk_box_t _b_x1406, kk_box_t _b_x1407, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5466;
  kk_std_core_types__list flags_1_0_1779 = kk_std_core_types__list_unbox(_b_x1406, KK_OWNED, _ctx); /*list<api/cliflag>*/;
  kk_string_t s_6_1780 = kk_string_unbox(_b_x1407); /*string*/;
  _x_x5466 = kk_std_core_list_find(flags_1_0_1779, kk_api__new_mlift_hc__parse__loop_11171_fun5467(s_6_1780, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5466, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5475__t {
  struct kk_function_s _base;
  kk_api__cliflag f_1;
  kk_ref_t flags;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5475(kk_function_t _fself, kk_std_core_types__list _y_x10794, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5475(kk_api__cliflag f_1, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5475__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5475__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5475, kk_context());
  _self->f_1 = f_1;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5477__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5477(kk_function_t _fself, kk_box_t _b_x1415, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5477(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5477, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5477(kk_function_t _fself, kk_box_t _b_x1415, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5478;
  kk_api__cliflag _match_x2506 = kk_api__cliflag_unbox(_b_x1415, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x5479 = kk_api__as_Cliflag(_match_x2506, _ctx);
    kk_string_t _x_7 = _con_x5479->flag__name;
    kk_string_t _pat_0_20 = _con_x5479->flag__short;
    kk_string_t _pat_1_15 = _con_x5479->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2506, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2506, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2506, _ctx);
    }
    _x_x5478 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5478);
}
static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5475(kk_function_t _fself, kk_std_core_types__list _y_x10794, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5475__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5475__t*, _fself, _ctx);
  kk_api__cliflag f_1 = _self->f_1; /* api/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_api__cliflag_dup(f_1, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1416_1418;
  kk_box_t _x_x5476 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5477(_ctx), kk_api__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x1416_1418 = kk_string_unbox(_x_x5476); /*string*/
  kk_std_core_types__list _b_x1424_1426;
  kk_std_core_types__list _x_x5480 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1416_1418), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1424_1426 = kk_std_core_list_append(_y_x10794, _x_x5480, _ctx); /*list<string>*/
  kk_unit_t _brw_x2505 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1424_1426, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2505; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5482__t {
  struct kk_function_s _base;
  kk_function_t next_6_11311;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5482(kk_function_t _fself, kk_box_t _b_x1428, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5482(kk_function_t next_6_11311, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5482__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5482__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5482, kk_context());
  _self->next_6_11311 = next_6_11311;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5482(kk_function_t _fself, kk_box_t _b_x1428, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5482__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5482__t*, _fself, _ctx);
  kk_function_t next_6_11311 = _self->next_6_11311; /* (list<string>) -> <local<23438>,exn,api/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_6_11311, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5483 = kk_Unit;
  kk_std_core_types__list _x_x5484 = kk_std_core_types__list_unbox(_b_x1428, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11311, (next_6_11311, _x_x5484, _ctx), _ctx);
  return kk_unit_box(_x_x5483);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5486__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5486(kk_function_t _fself, kk_box_t _b_x1431, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5486(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5486, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5486(kk_function_t _fself, kk_box_t _b_x1431, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5487;
  kk_api__clispec _match_x2503 = kk_api__clispec_unbox(_b_x1431, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5488 = kk_api__as_Clispec(_match_x2503, _ctx);
    kk_string_t _pat_0_22 = _con_x5488->app__name;
    kk_string_t _pat_1_17 = _con_x5488->app__version;
    kk_string_t _pat_2_7 = _con_x5488->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x5488->app__flags;
    kk_std_core_types__list _x_9 = _con_x5488->app__options;
    kk_std_core_types__list _pat_4_4 = _con_x5488->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x5488->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2503, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_17, _ctx);
      kk_string_drop(_pat_0_22, _ctx);
      kk_datatype_ptr_free(_match_x2503, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2503, _ctx);
    }
    _x_x5487 = _x_9; /*list<api/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5487, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5490__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5490(kk_function_t _fself, kk_box_t _b_x1441, kk_box_t _b_x1442, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5490(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5490, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5492__t {
  struct kk_function_s _base;
  kk_string_t s_7_1782;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5492(kk_function_t _fself, kk_box_t _b_x1437, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5492(kk_string_t s_7_1782, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5492__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5492__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5492, kk_context());
  _self->s_7_1782 = s_7_1782;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5492(kk_function_t _fself, kk_box_t _b_x1437, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5492__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5492__t*, _fself, _ctx);
  kk_string_t s_7_1782 = _self->s_7_1782; /* string */
  kk_drop_match(_self, {kk_string_dup(s_7_1782, _ctx);}, {}, _ctx)
  kk_string_t _x_x5493;
  kk_api__clioption _match_x2502 = kk_api__clioption_unbox(_b_x1437, KK_OWNED, _ctx); /*api/clioption*/;
  {
    struct kk_api_Clioption* _con_x5494 = kk_api__as_Clioption(_match_x2502, _ctx);
    kk_string_t _pat_0_21 = _con_x5494->opt__name;
    kk_string_t _x_8 = _con_x5494->opt__short;
    kk_string_t _pat_1_16 = _con_x5494->opt__help;
    kk_string_t _pat_2_6 = _con_x5494->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2502, _ctx)) {
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_16, _ctx);
      kk_string_drop(_pat_0_21, _ctx);
      kk_datatype_ptr_free(_match_x2502, _ctx);
    }
    else {
      kk_string_dup(_x_8, _ctx);
      kk_datatype_ptr_decref(_match_x2502, _ctx);
    }
    _x_x5493 = _x_8; /*string*/
  }
  return kk_string_is_eq(_x_x5493,s_7_1782,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5490(kk_function_t _fself, kk_box_t _b_x1441, kk_box_t _b_x1442, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5491;
  kk_std_core_types__list options_2_1781 = kk_std_core_types__list_unbox(_b_x1441, KK_OWNED, _ctx); /*list<api/clioption>*/;
  kk_string_t s_7_1782 = kk_string_unbox(_b_x1442); /*string*/;
  _x_x5491 = kk_std_core_list_find(options_2_1781, kk_api__new_mlift_hc__parse__loop_11171_fun5492(s_7_1782, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5491, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5501__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_api__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_5;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5501(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5501(kk_ref_t error, kk_api__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5501__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5501__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5501, kk_context());
  _self->error = error;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_5 = s_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5501(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5501__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5501__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23438,string> */
  kk_api__clioption o_2 = _self->o_2; /* api/clioption */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_string_t s_5 = _self->s_5; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_api__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_5, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10796_1761 = kk_std_core_types__list_unbox(_b_x1449, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5502 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11148(error, o_2, options, remaining, s_5, _y_x10796_1761, _ctx);
  return kk_unit_box(_x_x5502);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5506__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5506(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5506(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5506, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5506(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5507;
  kk_api__clispec _match_x2497 = kk_api__clispec_unbox(_b_x1454, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5508 = kk_api__as_Clispec(_match_x2497, _ctx);
    kk_string_t _pat_0_26 = _con_x5508->app__name;
    kk_string_t _pat_1_19 = _con_x5508->app__version;
    kk_string_t _pat_2_9 = _con_x5508->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x5508->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x5508->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x5508->app__args;
    kk_std_core_types__list _x_12 = _con_x5508->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2497, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_5, _ctx);
      kk_std_core_types__list_drop(_pat_4_5, _ctx);
      kk_std_core_types__list_drop(_pat_3_5, _ctx);
      kk_string_drop(_pat_2_9, _ctx);
      kk_string_drop(_pat_1_19, _ctx);
      kk_string_drop(_pat_0_26, _ctx);
      kk_datatype_ptr_free(_match_x2497, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_12, _ctx);
      kk_datatype_ptr_decref(_match_x2497, _ctx);
    }
    _x_x5507 = _x_12; /*list<(string, api/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5507, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5510__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5510(kk_function_t _fself, kk_box_t _b_x1466, kk_box_t _b_x1467, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5510(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5510, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5512__t {
  struct kk_function_s _base;
  kk_string_t name_3_1784;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5512(kk_function_t _fself, kk_box_t _b_x1462, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5512(kk_string_t name_3_1784, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5512__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5512__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5512, kk_context());
  _self->name_3_1784 = name_3_1784;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5512(kk_function_t _fself, kk_box_t _b_x1462, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5512__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5512__t*, _fself, _ctx);
  kk_string_t name_3_1784 = _self->name_3_1784; /* string */
  kk_drop_match(_self, {kk_string_dup(name_3_1784, _ctx);}, {}, _ctx)
  kk_string_t _x_x5513;
  kk_std_core_types__tuple2 _match_x2496 = kk_std_core_types__tuple2_unbox(_b_x1462, KK_OWNED, _ctx); /*(string, api/clispec)*/;
  {
    kk_box_t _box_x1458 = _match_x2496.fst;
    kk_box_t _box_x1459 = _match_x2496.snd;
    kk_string_t _x_11 = kk_string_unbox(_box_x1458);
    kk_string_dup(_x_11, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2496, _ctx);
    _x_x5513 = _x_11; /*string*/
  }
  return kk_string_is_eq(_x_x5513,name_3_1784,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5510(kk_function_t _fself, kk_box_t _b_x1466, kk_box_t _b_x1467, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5511;
  kk_std_core_types__list commands_1783 = kk_std_core_types__list_unbox(_b_x1466, KK_OWNED, _ctx); /*list<(string, api/clispec)>*/;
  kk_string_t name_3_1784 = kk_string_unbox(_b_x1467); /*string*/;
  _x_x5511 = kk_std_core_list_find(commands_1783, kk_api__new_mlift_hc__parse__loop_11171_fun5512(name_3_1784, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5511, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5517__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5517(kk_function_t _fself, kk_box_t _b_x1474, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5517(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5517__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5517__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5517, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5517(kk_function_t _fself, kk_box_t _b_x1474, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5517__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5517__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_1763 = kk_Unit;
  kk_unit_unbox(_b_x1474);
  kk_unit_t _x_x5518 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11151(remaining, sub__args, wild___5_1763, _ctx);
  return kk_unit_box(_x_x5518);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5521__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5521(kk_function_t _fself, kk_std_core_types__list _y_x10815, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5521(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5521__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5521__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5521, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5521(kk_function_t _fself, kk_std_core_types__list _y_x10815, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5521__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5521__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1482_1484;
  kk_std_core_types__list _x_x5522 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1482_1484 = kk_std_core_list_append(_y_x10815, _x_x5522, _ctx); /*list<string>*/
  kk_unit_t _brw_x2493 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1482_1484, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2493; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5524__t {
  struct kk_function_s _base;
  kk_function_t next_9_11320;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5524(kk_function_t _fself, kk_box_t _b_x1488, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5524(kk_function_t next_9_11320, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5524__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5524__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5524, kk_context());
  _self->next_9_11320 = next_9_11320;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5524(kk_function_t _fself, kk_box_t _b_x1488, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5524__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5524__t*, _fself, _ctx);
  kk_function_t next_9_11320 = _self->next_9_11320; /* (list<string>) -> <local<23438>,api/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_9_11320, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5525 = kk_Unit;
  kk_std_core_types__list _x_x5526 = kk_std_core_types__list_unbox(_b_x1488, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11320, (next_9_11320, _x_x5526, _ctx), _ctx);
  return kk_unit_box(_x_x5525);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5531__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5531(kk_function_t _fself, kk_box_t _b_x1492, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5531(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5531, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5531(kk_function_t _fself, kk_box_t _b_x1492, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5532;
  kk_std_core_types__maybe maybe_5_1785 = kk_std_core_types__maybe_unbox(_b_x1492, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_5_1785, _ctx)) {
    kk_box_t _box_x1489 = maybe_5_1785._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_5_1785, _ctx);
    _x_x5532 = true; /*bool*/
  }
  else {
    _x_x5532 = false; /*bool*/
  }
  return kk_bool_box(_x_x5532);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5534__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5534(kk_function_t _fself, kk_box_t _b_x1497, kk_box_t _b_x1498, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5534(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5534, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5534(kk_function_t _fself, kk_box_t _b_x1497, kk_box_t _b_x1498, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_6_10713;
  kk_string_t _x_x5535;
  kk_box_t _x_x5536 = kk_box_dup(_b_x1497, _ctx); /*10000*/
  _x_x5535 = kk_string_unbox(_x_x5536); /*string*/
  kk_string_t _x_x5537;
  kk_box_t _x_x5538 = kk_box_dup(_b_x1498, _ctx); /*10001*/
  _x_x5537 = kk_string_unbox(_x_x5538); /*string*/
  maybe_6_10713 = kk_std_core_sslice_starts_with(_x_x5535, _x_x5537, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5539;
  if (kk_std_core_types__is_Just(maybe_6_10713, _ctx)) {
    kk_box_t _box_x1493 = maybe_6_10713._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_6_10713, _ctx);
    kk_std_core_types__list _x_x5540;
    kk_std_core_types__list _x_x5541;
    kk_string_t _x_x5542 = kk_string_unbox(_b_x1497); /*string*/
    _x_x5541 = kk_std_core_string_list(_x_x5542, _ctx); /*list<char>*/
    kk_integer_t _x_x5543;
    kk_string_t _x_x5544 = kk_string_unbox(_b_x1498); /*string*/
    _x_x5543 = kk_std_core_string_chars_fs_count(_x_x5544, _ctx); /*int*/
    _x_x5540 = kk_std_core_list_drop(_x_x5541, _x_x5543, _ctx); /*list<10001>*/
    _x_x5539 = kk_std_core_string_listchar_fs_string(_x_x5540, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1498, _ctx);
    _x_x5539 = kk_string_unbox(_b_x1497); /*string*/
  }
  return kk_string_box(_x_x5539);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5549__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5549(kk_function_t _fself, kk_box_t _b_x1506, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5549(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5549, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5549(kk_function_t _fself, kk_box_t _b_x1506, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5550;
  kk_api__clispec _match_x2487 = kk_api__clispec_unbox(_b_x1506, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5551 = kk_api__as_Clispec(_match_x2487, _ctx);
    kk_string_t _pat_0_31 = _con_x5551->app__name;
    kk_string_t _pat_1_23 = _con_x5551->app__version;
    kk_string_t _pat_2_10 = _con_x5551->app__about;
    kk_std_core_types__list _x_14 = _con_x5551->app__flags;
    kk_std_core_types__list _pat_3_6 = _con_x5551->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5551->app__args;
    kk_std_core_types__list _pat_5_6 = _con_x5551->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2487, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_6, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_10, _ctx);
      kk_string_drop(_pat_1_23, _ctx);
      kk_string_drop(_pat_0_31, _ctx);
      kk_datatype_ptr_free(_match_x2487, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_14, _ctx);
      kk_datatype_ptr_decref(_match_x2487, _ctx);
    }
    _x_x5550 = _x_14; /*list<api/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5550, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5555__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5555(kk_function_t _fself, kk_box_t _b_x1516, kk_box_t _b_x1517, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5555(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5555, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5557__t {
  struct kk_function_s _base;
  kk_string_t name_4_1787;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5557(kk_function_t _fself, kk_box_t _b_x1512, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5557(kk_string_t name_4_1787, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5557__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5557__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5557, kk_context());
  _self->name_4_1787 = name_4_1787;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5557(kk_function_t _fself, kk_box_t _b_x1512, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5557__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5557__t*, _fself, _ctx);
  kk_string_t name_4_1787 = _self->name_4_1787; /* string */
  kk_drop_match(_self, {kk_string_dup(name_4_1787, _ctx);}, {}, _ctx)
  kk_string_t _x_x5558;
  kk_api__cliflag _match_x2486 = kk_api__cliflag_unbox(_b_x1512, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x5559 = kk_api__as_Cliflag(_match_x2486, _ctx);
    kk_string_t _x_13 = _con_x5559->flag__name;
    kk_string_t _pat_0_30 = _con_x5559->flag__short;
    kk_string_t _pat_1_22 = _con_x5559->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2486, _ctx)) {
      kk_string_drop(_pat_1_22, _ctx);
      kk_string_drop(_pat_0_30, _ctx);
      kk_datatype_ptr_free(_match_x2486, _ctx);
    }
    else {
      kk_string_dup(_x_13, _ctx);
      kk_datatype_ptr_decref(_match_x2486, _ctx);
    }
    _x_x5558 = _x_13; /*string*/
  }
  return kk_string_is_eq(_x_x5558,name_4_1787,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5555(kk_function_t _fself, kk_box_t _b_x1516, kk_box_t _b_x1517, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5556;
  kk_std_core_types__list flags_2_0_1786 = kk_std_core_types__list_unbox(_b_x1516, KK_OWNED, _ctx); /*list<api/cliflag>*/;
  kk_string_t name_4_1787 = kk_string_unbox(_b_x1517); /*string*/;
  _x_x5556 = kk_std_core_list_find(flags_2_0_1786, kk_api__new_mlift_hc__parse__loop_11171_fun5557(name_4_1787, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5556, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5565__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0_0_0;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5565(kk_function_t _fself, kk_std_core_types__list _y_x10821, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5565(kk_ref_t flags, kk_string_t name_0_0_0_0, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5565__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5565__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5565, kk_context());
  _self->flags = flags;
  _self->name_0_0_0_0 = name_0_0_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5565(kk_function_t _fself, kk_std_core_types__list _y_x10821, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5565__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5565__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23438,list<string>> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1526_1528;
  kk_std_core_types__list _x_x5566 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1526_1528 = kk_std_core_list_append(_y_x10821, _x_x5566, _ctx); /*list<string>*/
  kk_unit_t _brw_x2485 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1526_1528, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2485; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5568__t {
  struct kk_function_s _base;
  kk_function_t next_10_11325;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5568(kk_function_t _fself, kk_box_t _b_x1532, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5568(kk_function_t next_10_11325, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5568__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5568__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5568, kk_context());
  _self->next_10_11325 = next_10_11325;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5568(kk_function_t _fself, kk_box_t _b_x1532, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5568__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5568__t*, _fself, _ctx);
  kk_function_t next_10_11325 = _self->next_10_11325; /* (list<string>) -> <local<23438>,exn,api/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_10_11325, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5569 = kk_Unit;
  kk_std_core_types__list _x_x5570 = kk_std_core_types__list_unbox(_b_x1532, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11325, (next_10_11325, _x_x5570, _ctx), _ctx);
  return kk_unit_box(_x_x5569);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5572__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5572(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5572(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5572, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5572(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5573;
  kk_api__clispec _match_x2483 = kk_api__clispec_unbox(_b_x1535, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5574 = kk_api__as_Clispec(_match_x2483, _ctx);
    kk_string_t _pat_0_33 = _con_x5574->app__name;
    kk_string_t _pat_1_25 = _con_x5574->app__version;
    kk_string_t _pat_2_12 = _con_x5574->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5574->app__flags;
    kk_std_core_types__list _x_16 = _con_x5574->app__options;
    kk_std_core_types__list _pat_4_7 = _con_x5574->app__args;
    kk_std_core_types__list _pat_5_7 = _con_x5574->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2483, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_7, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_12, _ctx);
      kk_string_drop(_pat_1_25, _ctx);
      kk_string_drop(_pat_0_33, _ctx);
      kk_datatype_ptr_free(_match_x2483, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_16, _ctx);
      kk_datatype_ptr_decref(_match_x2483, _ctx);
    }
    _x_x5573 = _x_16; /*list<api/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5573, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5576__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5576(kk_function_t _fself, kk_box_t _b_x1545, kk_box_t _b_x1546, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5576(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5576, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5578__t {
  struct kk_function_s _base;
  kk_string_t name_5_1789;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5578(kk_function_t _fself, kk_box_t _b_x1541, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5578(kk_string_t name_5_1789, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5578__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5578__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5578, kk_context());
  _self->name_5_1789 = name_5_1789;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5578(kk_function_t _fself, kk_box_t _b_x1541, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5578__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5578__t*, _fself, _ctx);
  kk_string_t name_5_1789 = _self->name_5_1789; /* string */
  kk_drop_match(_self, {kk_string_dup(name_5_1789, _ctx);}, {}, _ctx)
  kk_string_t _x_x5579;
  kk_api__clioption _match_x2482 = kk_api__clioption_unbox(_b_x1541, KK_OWNED, _ctx); /*api/clioption*/;
  {
    struct kk_api_Clioption* _con_x5580 = kk_api__as_Clioption(_match_x2482, _ctx);
    kk_string_t _x_15 = _con_x5580->opt__name;
    kk_string_t _pat_0_32 = _con_x5580->opt__short;
    kk_string_t _pat_1_24 = _con_x5580->opt__help;
    kk_string_t _pat_2_11 = _con_x5580->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2482, _ctx)) {
      kk_string_drop(_pat_2_11, _ctx);
      kk_string_drop(_pat_1_24, _ctx);
      kk_string_drop(_pat_0_32, _ctx);
      kk_datatype_ptr_free(_match_x2482, _ctx);
    }
    else {
      kk_string_dup(_x_15, _ctx);
      kk_datatype_ptr_decref(_match_x2482, _ctx);
    }
    _x_x5579 = _x_15; /*string*/
  }
  return kk_string_is_eq(_x_x5579,name_5_1789,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5576(kk_function_t _fself, kk_box_t _b_x1545, kk_box_t _b_x1546, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5577;
  kk_std_core_types__list options_3_1788 = kk_std_core_types__list_unbox(_b_x1545, KK_OWNED, _ctx); /*list<api/clioption>*/;
  kk_string_t name_5_1789 = kk_string_unbox(_b_x1546); /*string*/;
  _x_x5577 = kk_std_core_list_find(options_3_1788, kk_api__new_mlift_hc__parse__loop_11171_fun5578(name_5_1789, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5577, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5587__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5587(kk_function_t _fself, kk_box_t _b_x1553, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5587(kk_ref_t error, kk_string_t name_0_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5587__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5587__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5587, kk_context());
  _self->error = error;
  _self->name_0_0_0_0 = name_0_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5587(kk_function_t _fself, kk_box_t _b_x1553, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5587__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5587__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23438,string> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10823_1766 = kk_std_core_types__list_unbox(_b_x1553, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5588 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11159(error, name_0_0_0_0, options, remaining, _y_x10823_1766, _ctx);
  return kk_unit_box(_x_x5588);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5595__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5595(kk_function_t _fself, kk_box_t _b_x1559, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5595(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5595, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5595(kk_function_t _fself, kk_box_t _b_x1559, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5596;
  kk_std_core_types__maybe maybe_7_1790 = kk_std_core_types__maybe_unbox(_b_x1559, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_7_1790, _ctx)) {
    kk_box_t _box_x1556 = maybe_7_1790._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_7_1790, _ctx);
    _x_x5596 = true; /*bool*/
  }
  else {
    _x_x5596 = false; /*bool*/
  }
  return kk_bool_box(_x_x5596);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5598__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5598(kk_function_t _fself, kk_box_t _b_x1564, kk_box_t _b_x1565, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5598(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5598, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5598(kk_function_t _fself, kk_box_t _b_x1564, kk_box_t _b_x1565, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_8_10716;
  kk_string_t _x_x5599;
  kk_box_t _x_x5600 = kk_box_dup(_b_x1564, _ctx); /*10000*/
  _x_x5599 = kk_string_unbox(_x_x5600); /*string*/
  kk_string_t _x_x5601;
  kk_box_t _x_x5602 = kk_box_dup(_b_x1565, _ctx); /*10001*/
  _x_x5601 = kk_string_unbox(_x_x5602); /*string*/
  maybe_8_10716 = kk_std_core_sslice_starts_with(_x_x5599, _x_x5601, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5603;
  if (kk_std_core_types__is_Just(maybe_8_10716, _ctx)) {
    kk_box_t _box_x1560 = maybe_8_10716._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_8_10716, _ctx);
    kk_std_core_types__list _x_x5604;
    kk_std_core_types__list _x_x5605;
    kk_string_t _x_x5606 = kk_string_unbox(_b_x1564); /*string*/
    _x_x5605 = kk_std_core_string_list(_x_x5606, _ctx); /*list<char>*/
    kk_integer_t _x_x5607;
    kk_string_t _x_x5608 = kk_string_unbox(_b_x1565); /*string*/
    _x_x5607 = kk_std_core_string_chars_fs_count(_x_x5608, _ctx); /*int*/
    _x_x5604 = kk_std_core_list_drop(_x_x5605, _x_x5607, _ctx); /*list<10001>*/
    _x_x5603 = kk_std_core_string_listchar_fs_string(_x_x5604, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1565, _ctx);
    _x_x5603 = kk_string_unbox(_b_x1564); /*string*/
  }
  return kk_string_box(_x_x5603);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5613__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5613(kk_function_t _fself, kk_box_t _b_x1573, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5613(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5613, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5613(kk_function_t _fself, kk_box_t _b_x1573, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5614;
  kk_api__clispec _match_x2477 = kk_api__clispec_unbox(_b_x1573, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5615 = kk_api__as_Clispec(_match_x2477, _ctx);
    kk_string_t _pat_0_39 = _con_x5615->app__name;
    kk_string_t _pat_1_29 = _con_x5615->app__version;
    kk_string_t _pat_2_13 = _con_x5615->app__about;
    kk_std_core_types__list _x_18 = _con_x5615->app__flags;
    kk_std_core_types__list _pat_3_8 = _con_x5615->app__options;
    kk_std_core_types__list _pat_4_8 = _con_x5615->app__args;
    kk_std_core_types__list _pat_5_8 = _con_x5615->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2477, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_8, _ctx);
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_std_core_types__list_drop(_pat_3_8, _ctx);
      kk_string_drop(_pat_2_13, _ctx);
      kk_string_drop(_pat_1_29, _ctx);
      kk_string_drop(_pat_0_39, _ctx);
      kk_datatype_ptr_free(_match_x2477, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_18, _ctx);
      kk_datatype_ptr_decref(_match_x2477, _ctx);
    }
    _x_x5614 = _x_18; /*list<api/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5614, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5619__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5619(kk_function_t _fself, kk_box_t _b_x1583, kk_box_t _b_x1584, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5619(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5619, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5621__t {
  struct kk_function_s _base;
  kk_string_t s_10_1792;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5621(kk_function_t _fself, kk_box_t _b_x1579, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5621(kk_string_t s_10_1792, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5621__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5621__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5621, kk_context());
  _self->s_10_1792 = s_10_1792;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5621(kk_function_t _fself, kk_box_t _b_x1579, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5621__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5621__t*, _fself, _ctx);
  kk_string_t s_10_1792 = _self->s_10_1792; /* string */
  kk_drop_match(_self, {kk_string_dup(s_10_1792, _ctx);}, {}, _ctx)
  kk_string_t _x_x5622;
  kk_api__cliflag _match_x2476 = kk_api__cliflag_unbox(_b_x1579, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x5623 = kk_api__as_Cliflag(_match_x2476, _ctx);
    kk_string_t _pat_0_38 = _con_x5623->flag__name;
    kk_string_t _x_17 = _con_x5623->flag__short;
    kk_string_t _pat_1_28 = _con_x5623->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2476, _ctx)) {
      kk_string_drop(_pat_1_28, _ctx);
      kk_string_drop(_pat_0_38, _ctx);
      kk_datatype_ptr_free(_match_x2476, _ctx);
    }
    else {
      kk_string_dup(_x_17, _ctx);
      kk_datatype_ptr_decref(_match_x2476, _ctx);
    }
    _x_x5622 = _x_17; /*string*/
  }
  return kk_string_is_eq(_x_x5622,s_10_1792,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5619(kk_function_t _fself, kk_box_t _b_x1583, kk_box_t _b_x1584, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5620;
  kk_std_core_types__list flags_3_0_1791 = kk_std_core_types__list_unbox(_b_x1583, KK_OWNED, _ctx); /*list<api/cliflag>*/;
  kk_string_t s_10_1792 = kk_string_unbox(_b_x1584); /*string*/;
  _x_x5620 = kk_std_core_list_find(flags_3_0_1791, kk_api__new_mlift_hc__parse__loop_11171_fun5621(s_10_1792, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5620, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5629__t {
  struct kk_function_s _base;
  kk_api__cliflag f_0_0;
  kk_ref_t flags;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5629(kk_function_t _fself, kk_std_core_types__list _y_x10837, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5629(kk_api__cliflag f_0_0, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5629__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5629__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5629, kk_context());
  _self->f_0_0 = f_0_0;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5631__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5631(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5631(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5631, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5631(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5632;
  kk_api__cliflag _match_x2475 = kk_api__cliflag_unbox(_b_x1592, KK_OWNED, _ctx); /*api/cliflag*/;
  {
    struct kk_api_Cliflag* _con_x5633 = kk_api__as_Cliflag(_match_x2475, _ctx);
    kk_string_t _x_19 = _con_x5633->flag__name;
    kk_string_t _pat_0_40 = _con_x5633->flag__short;
    kk_string_t _pat_1_30 = _con_x5633->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2475, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2475, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2475, _ctx);
    }
    _x_x5632 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5632);
}
static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5629(kk_function_t _fself, kk_std_core_types__list _y_x10837, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5629__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5629__t*, _fself, _ctx);
  kk_api__cliflag f_0_0 = _self->f_0_0; /* api/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_api__cliflag_dup(f_0_0, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1593_1595;
  kk_box_t _x_x5630 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5631(_ctx), kk_api__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1593_1595 = kk_string_unbox(_x_x5630); /*string*/
  kk_std_core_types__list _b_x1601_1603;
  kk_std_core_types__list _x_x5634 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1593_1595), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1601_1603 = kk_std_core_list_append(_y_x10837, _x_x5634, _ctx); /*list<string>*/
  kk_unit_t _brw_x2474 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1601_1603, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2474; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5636__t {
  struct kk_function_s _base;
  kk_function_t next_12_11332;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5636(kk_function_t _fself, kk_box_t _b_x1605, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5636(kk_function_t next_12_11332, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5636__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5636__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5636, kk_context());
  _self->next_12_11332 = next_12_11332;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5636(kk_function_t _fself, kk_box_t _b_x1605, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5636__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5636__t*, _fself, _ctx);
  kk_function_t next_12_11332 = _self->next_12_11332; /* (list<string>) -> <local<23438>,exn,api/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_12_11332, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5637 = kk_Unit;
  kk_std_core_types__list _x_x5638 = kk_std_core_types__list_unbox(_b_x1605, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11332, (next_12_11332, _x_x5638, _ctx), _ctx);
  return kk_unit_box(_x_x5637);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5640__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5640(kk_function_t _fself, kk_box_t _b_x1608, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5640(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5640, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5640(kk_function_t _fself, kk_box_t _b_x1608, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5641;
  kk_api__clispec _match_x2472 = kk_api__clispec_unbox(_b_x1608, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5642 = kk_api__as_Clispec(_match_x2472, _ctx);
    kk_string_t _pat_0_42 = _con_x5642->app__name;
    kk_string_t _pat_1_32 = _con_x5642->app__version;
    kk_string_t _pat_2_15 = _con_x5642->app__about;
    kk_std_core_types__list _pat_3_9 = _con_x5642->app__flags;
    kk_std_core_types__list _x_21 = _con_x5642->app__options;
    kk_std_core_types__list _pat_4_9 = _con_x5642->app__args;
    kk_std_core_types__list _pat_5_9 = _con_x5642->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2472, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_9, _ctx);
      kk_std_core_types__list_drop(_pat_4_9, _ctx);
      kk_std_core_types__list_drop(_pat_3_9, _ctx);
      kk_string_drop(_pat_2_15, _ctx);
      kk_string_drop(_pat_1_32, _ctx);
      kk_string_drop(_pat_0_42, _ctx);
      kk_datatype_ptr_free(_match_x2472, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_21, _ctx);
      kk_datatype_ptr_decref(_match_x2472, _ctx);
    }
    _x_x5641 = _x_21; /*list<api/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5641, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5644__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5644(kk_function_t _fself, kk_box_t _b_x1618, kk_box_t _b_x1619, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5644(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5644, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5646__t {
  struct kk_function_s _base;
  kk_string_t s_11_1794;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5646(kk_function_t _fself, kk_box_t _b_x1614, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5646(kk_string_t s_11_1794, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5646__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5646__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5646, kk_context());
  _self->s_11_1794 = s_11_1794;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5646(kk_function_t _fself, kk_box_t _b_x1614, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5646__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5646__t*, _fself, _ctx);
  kk_string_t s_11_1794 = _self->s_11_1794; /* string */
  kk_drop_match(_self, {kk_string_dup(s_11_1794, _ctx);}, {}, _ctx)
  kk_string_t _x_x5647;
  kk_api__clioption _match_x2471 = kk_api__clioption_unbox(_b_x1614, KK_OWNED, _ctx); /*api/clioption*/;
  {
    struct kk_api_Clioption* _con_x5648 = kk_api__as_Clioption(_match_x2471, _ctx);
    kk_string_t _pat_0_41 = _con_x5648->opt__name;
    kk_string_t _x_20 = _con_x5648->opt__short;
    kk_string_t _pat_1_31 = _con_x5648->opt__help;
    kk_string_t _pat_2_14 = _con_x5648->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2471, _ctx)) {
      kk_string_drop(_pat_2_14, _ctx);
      kk_string_drop(_pat_1_31, _ctx);
      kk_string_drop(_pat_0_41, _ctx);
      kk_datatype_ptr_free(_match_x2471, _ctx);
    }
    else {
      kk_string_dup(_x_20, _ctx);
      kk_datatype_ptr_decref(_match_x2471, _ctx);
    }
    _x_x5647 = _x_20; /*string*/
  }
  return kk_string_is_eq(_x_x5647,s_11_1794,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5644(kk_function_t _fself, kk_box_t _b_x1618, kk_box_t _b_x1619, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5645;
  kk_std_core_types__list options_4_1793 = kk_std_core_types__list_unbox(_b_x1618, KK_OWNED, _ctx); /*list<api/clioption>*/;
  kk_string_t s_11_1794 = kk_string_unbox(_b_x1619); /*string*/;
  _x_x5645 = kk_std_core_list_find(options_4_1793, kk_api__new_mlift_hc__parse__loop_11171_fun5646(s_11_1794, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5645, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5655__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_api__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_0_0;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5655(kk_function_t _fself, kk_box_t _b_x1626, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5655(kk_ref_t error, kk_api__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5655__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5655__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5655, kk_context());
  _self->error = error;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_0_0 = s_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5655(kk_function_t _fself, kk_box_t _b_x1626, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5655__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5655__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23438,string> */
  kk_api__clioption o_0_0 = _self->o_0_0; /* api/clioption */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_string_t s_0_0 = _self->s_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_api__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10839_1769 = kk_std_core_types__list_unbox(_b_x1626, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5656 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11166(error, o_0_0, options, remaining, s_0_0, _y_x10839_1769, _ctx);
  return kk_unit_box(_x_x5656);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5660__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5660(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5660(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5660, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5660(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5661;
  kk_api__clispec _match_x2466 = kk_api__clispec_unbox(_b_x1631, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5662 = kk_api__as_Clispec(_match_x2466, _ctx);
    kk_string_t _pat_0_46 = _con_x5662->app__name;
    kk_string_t _pat_1_34 = _con_x5662->app__version;
    kk_string_t _pat_2_17 = _con_x5662->app__about;
    kk_std_core_types__list _pat_3_10 = _con_x5662->app__flags;
    kk_std_core_types__list _pat_4_10 = _con_x5662->app__options;
    kk_std_core_types__list _pat_5_10 = _con_x5662->app__args;
    kk_std_core_types__list _x_24 = _con_x5662->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2466, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_10, _ctx);
      kk_std_core_types__list_drop(_pat_4_10, _ctx);
      kk_std_core_types__list_drop(_pat_3_10, _ctx);
      kk_string_drop(_pat_2_17, _ctx);
      kk_string_drop(_pat_1_34, _ctx);
      kk_string_drop(_pat_0_46, _ctx);
      kk_datatype_ptr_free(_match_x2466, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_24, _ctx);
      kk_datatype_ptr_decref(_match_x2466, _ctx);
    }
    _x_x5661 = _x_24; /*list<(string, api/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5661, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5664__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5664(kk_function_t _fself, kk_box_t _b_x1643, kk_box_t _b_x1644, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5664(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11171_fun5664, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5666__t {
  struct kk_function_s _base;
  kk_string_t name_6_1796;
};
static bool kk_api__mlift_hc__parse__loop_11171_fun5666(kk_function_t _fself, kk_box_t _b_x1639, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5666(kk_string_t name_6_1796, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5666__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5666__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5666, kk_context());
  _self->name_6_1796 = name_6_1796;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__parse__loop_11171_fun5666(kk_function_t _fself, kk_box_t _b_x1639, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5666__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5666__t*, _fself, _ctx);
  kk_string_t name_6_1796 = _self->name_6_1796; /* string */
  kk_drop_match(_self, {kk_string_dup(name_6_1796, _ctx);}, {}, _ctx)
  kk_string_t _x_x5667;
  kk_std_core_types__tuple2 _match_x2465 = kk_std_core_types__tuple2_unbox(_b_x1639, KK_OWNED, _ctx); /*(string, api/clispec)*/;
  {
    kk_box_t _box_x1635 = _match_x2465.fst;
    kk_box_t _box_x1636 = _match_x2465.snd;
    kk_string_t _x_23 = kk_string_unbox(_box_x1635);
    kk_string_dup(_x_23, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2465, _ctx);
    _x_x5667 = _x_23; /*string*/
  }
  return kk_string_is_eq(_x_x5667,name_6_1796,kk_context());
}
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5664(kk_function_t _fself, kk_box_t _b_x1643, kk_box_t _b_x1644, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5665;
  kk_std_core_types__list commands_0_1795 = kk_std_core_types__list_unbox(_b_x1643, KK_OWNED, _ctx); /*list<(string, api/clispec)>*/;
  kk_string_t name_6_1796 = kk_string_unbox(_b_x1644); /*string*/;
  _x_x5665 = kk_std_core_list_find(commands_0_1795, kk_api__new_mlift_hc__parse__loop_11171_fun5666(name_6_1796, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5665, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5671__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5671(kk_function_t _fself, kk_box_t _b_x1651, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5671(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5671__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5671__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5671, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5671(kk_function_t _fself, kk_box_t _b_x1651, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5671__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5671__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_0_1771 = kk_Unit;
  kk_unit_unbox(_b_x1651);
  kk_unit_t _x_x5672 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11169(remaining, sub__args, wild___5_0_1771, _ctx);
  return kk_unit_box(_x_x5672);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5675__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5675(kk_function_t _fself, kk_std_core_types__list _y_x10858, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5675(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5675__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5675__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5675, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_api__mlift_hc__parse__loop_11171_fun5675(kk_function_t _fself, kk_std_core_types__list _y_x10858, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5675__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5675__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1659_1661;
  kk_std_core_types__list _x_x5676 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1659_1661 = kk_std_core_list_append(_y_x10858, _x_x5676, _ctx); /*list<string>*/
  kk_unit_t _brw_x2462 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1659_1661, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2462; return kk_Unit;
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11171_fun5678__t {
  struct kk_function_s _base;
  kk_function_t next_15_11341;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5678(kk_function_t _fself, kk_box_t _b_x1665, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11171_fun5678(kk_function_t next_15_11341, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5678__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11171_fun5678__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11171_fun5678, kk_context());
  _self->next_15_11341 = next_15_11341;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11171_fun5678(kk_function_t _fself, kk_box_t _b_x1665, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11171_fun5678__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11171_fun5678__t*, _fself, _ctx);
  kk_function_t next_15_11341 = _self->next_15_11341; /* (list<string>) -> <local<23438>,api/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_15_11341, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5679 = kk_Unit;
  kk_std_core_types__list _x_x5680 = kk_std_core_types__list_unbox(_b_x1665, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11341, (next_15_11341, _x_x5680, _ctx), _ctx);
  return kk_unit_box(_x_x5679);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11171(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, wild_ : ()) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2453;
  kk_string_t _x_x5296 = kk_string_dup(a, _ctx); /*string*/
  kk_string_t _x_x5297;
  kk_define_string_literal(static, _s_x5298, 6, "--help", _ctx)
  _x_x5297 = kk_string_dup(_s_x5298, _ctx); /*string*/
  _match_x2453 = kk_string_is_eq(_x_x5296,_x_x5297,kk_context()); /*bool*/
  if (_match_x2453) {
    kk_ref_drop(subcmd, _ctx);
    kk_ref_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(positionals, _ctx);
    kk_ref_drop(options, _ctx);
    kk_ref_drop(flags, _ctx);
    kk_string_drop(a, _ctx);
    kk_unit_t x_11293 = kk_Unit;
    kk_unit_t _brw_x2529 = kk_Unit;
    kk_box_t _x_x5299;
    kk_string_t _x_x5300;
    kk_define_string_literal(static, _s_x5301, 8, "__help__", _ctx)
    _x_x5300 = kk_string_dup(_s_x5301, _ctx); /*string*/
    _x_x5299 = kk_string_box(_x_x5300); /*10000*/
    kk_ref_set_borrow(error,_x_x5299,kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2529;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x5302 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5303(_ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5302); return kk_Unit;
    }
    {
      kk_api__mlift_hc__parse__loop_11126(x_11293, _ctx); return kk_Unit;
    }
  }
  {
    bool _match_x2454;
    kk_string_t _x_x5305 = kk_string_dup(a, _ctx); /*string*/
    kk_string_t _x_x5306;
    kk_define_string_literal(static, _s_x5307, 2, "-h", _ctx)
    _x_x5306 = kk_string_dup(_s_x5307, _ctx); /*string*/
    _match_x2454 = kk_string_is_eq(_x_x5305,_x_x5306,kk_context()); /*bool*/
    if (_match_x2454) {
      kk_ref_drop(subcmd, _ctx);
      kk_ref_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_ref_drop(remaining, _ctx);
      kk_ref_drop(positionals, _ctx);
      kk_ref_drop(options, _ctx);
      kk_ref_drop(flags, _ctx);
      kk_string_drop(a, _ctx);
      kk_unit_t x_0_11295 = kk_Unit;
      kk_unit_t _brw_x2527 = kk_Unit;
      kk_box_t _x_x5308;
      kk_string_t _x_x5309;
      kk_define_string_literal(static, _s_x5310, 8, "__help__", _ctx)
      _x_x5309 = kk_string_dup(_s_x5310, _ctx); /*string*/
      _x_x5308 = kk_string_box(_x_x5309); /*10000*/
      kk_ref_set_borrow(error,_x_x5308,kk_context());
      kk_ref_drop(error, _ctx);
      _brw_x2527;
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x5311 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5312(_ctx), _ctx); /*10001*/
        kk_unit_unbox(_x_x5311); return kk_Unit;
      }
      {
        kk_api__mlift_hc__parse__loop_11127(x_0_11295, _ctx); return kk_Unit;
      }
    }
    {
      bool _match_x2455;
      kk_string_t _x_x5314 = kk_string_dup(a, _ctx); /*string*/
      kk_string_t _x_x5315;
      kk_define_string_literal(static, _s_x5316, 9, "--version", _ctx)
      _x_x5315 = kk_string_dup(_s_x5316, _ctx); /*string*/
      _match_x2455 = kk_string_is_eq(_x_x5314,_x_x5315,kk_context()); /*bool*/
      if (_match_x2455) {
        kk_ref_drop(subcmd, _ctx);
        kk_ref_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_ref_drop(remaining, _ctx);
        kk_ref_drop(positionals, _ctx);
        kk_ref_drop(options, _ctx);
        kk_ref_drop(flags, _ctx);
        kk_string_drop(a, _ctx);
        kk_unit_t x_1_11297 = kk_Unit;
        kk_unit_t _brw_x2525 = kk_Unit;
        kk_box_t _x_x5317;
        kk_string_t _x_x5318;
        kk_define_string_literal(static, _s_x5319, 11, "__version__", _ctx)
        _x_x5318 = kk_string_dup(_s_x5319, _ctx); /*string*/
        _x_x5317 = kk_string_box(_x_x5318); /*10000*/
        kk_ref_set_borrow(error,_x_x5317,kk_context());
        kk_ref_drop(error, _ctx);
        _brw_x2525;
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x5320 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5321(_ctx), _ctx); /*10001*/
          kk_unit_unbox(_x_x5320); return kk_Unit;
        }
        {
          kk_api__mlift_hc__parse__loop_11128(x_1_11297, _ctx); return kk_Unit;
        }
      }
      {
        bool _match_x2456;
        kk_string_t _x_x5323 = kk_string_dup(a, _ctx); /*string*/
        kk_string_t _x_x5324;
        kk_define_string_literal(static, _s_x5325, 2, "--", _ctx)
        _x_x5324 = kk_string_dup(_s_x5325, _ctx); /*string*/
        _match_x2456 = kk_string_is_eq(_x_x5323,_x_x5324,kk_context()); /*bool*/
        if (_match_x2456) {
          kk_ref_drop(subcmd, _ctx);
          kk_ref_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_ref_drop(options, _ctx);
          kk_ref_drop(flags, _ctx);
          kk_ref_drop(error, _ctx);
          kk_string_drop(a, _ctx);
          kk_std_core_types__list x_2_11299;
          kk_box_t _x_x5326;
          kk_ref_t _x_x5327 = kk_ref_dup(positionals, _ctx); /*local-var<23438,list<string>>*/
          _x_x5326 = kk_ref_get(_x_x5327,kk_context()); /*10000*/
          x_2_11299 = kk_std_core_types__list_unbox(_x_x5326, KK_OWNED, _ctx); /*list<string>*/
          if (kk_yielding(kk_context())) {
            kk_std_core_types__list_drop(x_2_11299, _ctx);
            kk_box_t _x_x5328 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5329(positionals, remaining, _ctx), _ctx); /*10001*/
            kk_unit_unbox(_x_x5328); return kk_Unit;
          }
          {
            kk_api__mlift_hc__parse__loop_11131(positionals, remaining, x_2_11299, _ctx); return kk_Unit;
          }
        }
        {
          kk_std_core_types__maybe _x_x1_0_11028;
          kk_string_t _x_x5331 = kk_string_dup(a, _ctx); /*string*/
          kk_string_t _x_x5332;
          kk_define_string_literal(static, _s_x5333, 2, "--", _ctx)
          _x_x5332 = kk_string_dup(_s_x5333, _ctx); /*string*/
          _x_x1_0_11028 = kk_std_core_sslice_starts_with(_x_x5331, _x_x5332, _ctx); /*maybe<sslice/sslice>*/
          bool _match_x2457;
          kk_box_t _x_x5334 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5335(_ctx), kk_std_core_types__maybe_box(_x_x1_0_11028, _ctx), _ctx); /*10001*/
          _match_x2457 = kk_bool_unbox(_x_x5334); /*bool*/
          if (_match_x2457) {
            bool _match_x2488;
            kk_string_t _x_x5337 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5338;
            kk_define_string_literal(static, _s_x5339, 1, "=", _ctx)
            _x_x5338 = kk_string_dup(_s_x5339, _ctx); /*string*/
            _match_x2488 = kk_string_contains(_x_x5337,_x_x5338,kk_context()); /*bool*/
            if (_match_x2488) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(remaining, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_ref_drop(flags, _ctx);
              kk_string_t clean;
              kk_box_t _x_x5340;
              kk_box_t _x_x5352;
              kk_string_t _x_x5353;
              kk_define_string_literal(static, _s_x5354, 2, "--", _ctx)
              _x_x5353 = kk_string_dup(_s_x5354, _ctx); /*string*/
              _x_x5352 = kk_string_box(_x_x5353); /*10001*/
              _x_x5340 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5341(_ctx), kk_string_box(a), _x_x5352, _ctx); /*10002*/
              clean = kk_string_unbox(_x_x5340); /*string*/
              kk_std_core_types__list x_3_11301;
              bool _match_x2520;
              kk_string_t _x_x5355;
              kk_define_string_literal(static, _s_x5356, 1, "=", _ctx)
              _x_x5355 = kk_string_dup(_s_x5356, _ctx); /*string*/
              kk_string_t _x_x5357 = kk_string_empty(); /*string*/
              _match_x2520 = kk_string_is_eq(_x_x5355,_x_x5357,kk_context()); /*bool*/
              if (_match_x2520) {
                kk_std_core_types__list _b_x1295_1303 = kk_std_core_string_list(clean, _ctx); /*list<char>*/;
                kk_function_t _brw_x2521 = kk_api__new_mlift_hc__parse__loop_11171_fun5359(_ctx); /*(10001) -> 10003 10002*/;
                kk_std_core_types__list _brw_x2522 = kk_std_core_list_map(_b_x1295_1303, _brw_x2521, _ctx); /*list<10002>*/;
                kk_function_drop(_brw_x2521, _ctx);
                x_3_11301 = _brw_x2522; /*list<string>*/
              }
              else {
                kk_box_t _x_x5362;
                kk_box_t _x_x5367;
                kk_string_t _x_x5368;
                kk_define_string_literal(static, _s_x5369, 1, "=", _ctx)
                _x_x5368 = kk_string_dup(_s_x5369, _ctx); /*string*/
                _x_x5367 = kk_string_box(_x_x5368); /*10001*/
                _x_x5362 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5363(_ctx), kk_string_box(clean), _x_x5367, _ctx); /*10002*/
                x_3_11301 = kk_std_core_types__list_unbox(_x_x5362, KK_OWNED, _ctx); /*list<string>*/
              }
              if (kk_yielding(kk_context())) {
                kk_std_core_types__list_drop(x_3_11301, _ctx);
                kk_box_t _x_x5370 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5371(error, options, spec, _ctx), _ctx); /*10001*/
                kk_unit_unbox(_x_x5370); return kk_Unit;
              }
              {
                kk_api__mlift_hc__parse__loop_11134(error, options, spec, x_3_11301, _ctx); return kk_Unit;
              }
            }
            {
              kk_std_core_types__maybe _x_x1_6_11038;
              kk_string_t _x_x5373 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5374;
              kk_define_string_literal(static, _s_x5375, 2, "--", _ctx)
              _x_x5374 = kk_string_dup(_s_x5375, _ctx); /*string*/
              _x_x1_6_11038 = kk_std_core_sslice_starts_with(_x_x5373, _x_x5374, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2489;
              kk_box_t _x_x5376 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5377(_ctx), kk_std_core_types__maybe_box(_x_x1_6_11038, _ctx), _ctx); /*10001*/
              _match_x2489 = kk_bool_unbox(_x_x5376); /*bool*/
              if (_match_x2489) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t name_0_0;
                kk_box_t _x_x5379;
                kk_box_t _x_x5391;
                kk_string_t _x_x5392;
                kk_define_string_literal(static, _s_x5393, 2, "--", _ctx)
                _x_x5392 = kk_string_dup(_s_x5393, _ctx); /*string*/
                _x_x5391 = kk_string_box(_x_x5392); /*10001*/
                _x_x5379 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5380(_ctx), kk_string_box(a), _x_x5391, _ctx); /*10002*/
                name_0_0 = kk_string_unbox(_x_x5379); /*string*/
                kk_std_core_types__list _x_x1_8_11041;
                kk_box_t _x_x5394;
                kk_box_t _x_x5398;
                kk_api__clispec _x_x5399 = kk_api__clispec_dup(spec, _ctx); /*api/clispec*/
                _x_x5398 = kk_api__clispec_box(_x_x5399, _ctx); /*10000*/
                _x_x5394 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5395(_ctx), _x_x5398, _ctx); /*10001*/
                _x_x1_8_11041 = kk_std_core_types__list_unbox(_x_x5394, KK_OWNED, _ctx); /*list<api/cliflag>*/
                kk_std_core_types__maybe _match_x2509;
                kk_box_t _x_x5400;
                kk_box_t _x_x5406;
                kk_string_t _x_x5407 = kk_string_dup(name_0_0, _ctx); /*string*/
                _x_x5406 = kk_string_box(_x_x5407); /*10001*/
                _x_x5400 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5401(_ctx), kk_std_core_types__list_box(_x_x1_8_11041, _ctx), _x_x5406, _ctx); /*10002*/
                _match_x2509 = kk_std_core_types__maybe_unbox(_x_x5400, KK_OWNED, _ctx); /*maybe<api/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2509, _ctx)) {
                  kk_box_t _box_x1341 = _match_x2509._cons.Just.value;
                  kk_api__cliflag _pat_24_0 = kk_api__cliflag_unbox(_box_x1341, KK_BORROWED, _ctx);
                  struct kk_api_Cliflag* _con_x5408 = kk_api__as_Cliflag(_pat_24_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2509, _ctx);
                  kk_std_core_types__list x_4_11303;
                  kk_box_t _x_x5409;
                  kk_ref_t _x_x5410 = kk_ref_dup(flags, _ctx); /*local-var<23438,list<string>>*/
                  _x_x5409 = kk_ref_get(_x_x5410,kk_context()); /*10000*/
                  x_4_11303 = kk_std_core_types__list_unbox(_x_x5409, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_4_11304 = kk_api__new_mlift_hc__parse__loop_11171_fun5411(flags, name_0_0, _ctx); /*(list<string>) -> <local<23438>,exn,api/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_4_11303, _ctx);
                    kk_box_t _x_x5413 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5414(next_4_11304, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5413); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11304, (next_4_11304, x_4_11303, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_10_11044;
                  kk_box_t _x_x5417 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5418(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_10_11044 = kk_std_core_types__list_unbox(_x_x5417, KK_OWNED, _ctx); /*list<api/clioption>*/
                  kk_std_core_types__maybe _match_x2510;
                  kk_box_t _x_x5421;
                  kk_box_t _x_x5427;
                  kk_string_t _x_x5428 = kk_string_dup(name_0_0, _ctx); /*string*/
                  _x_x5427 = kk_string_box(_x_x5428); /*10001*/
                  _x_x5421 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5422(_ctx), kk_std_core_types__list_box(_x_x1_10_11044, _ctx), _x_x5427, _ctx); /*10002*/
                  _match_x2510 = kk_std_core_types__maybe_unbox(_x_x5421, KK_OWNED, _ctx); /*maybe<api/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2510, _ctx)) {
                    kk_box_t _box_x1370 = _match_x2510._cons.Just.value;
                    kk_api__clioption _pat_30_0 = kk_api__clioption_unbox(_box_x1370, KK_BORROWED, _ctx);
                    struct kk_api_Clioption* _con_x5429 = kk_api__as_Clioption(_pat_30_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2510, _ctx);
                    kk_std_core_types__list x_5_11308;
                    kk_box_t _x_x5430;
                    kk_ref_t _x_x5431 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
                    _x_x5430 = kk_ref_get(_x_x5431,kk_context()); /*10000*/
                    x_5_11308 = kk_std_core_types__list_unbox(_x_x5430, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_5_11308, _ctx);
                      kk_box_t _x_x5432 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5433(error, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5432); return kk_Unit;
                    }
                    {
                      kk_api__mlift_hc__parse__loop_11141(error, name_0_0, options, remaining, x_5_11308, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1378_1688;
                    kk_string_t _x_x5435;
                    kk_define_string_literal(static, _s_x5436, 18, "unknown option: --", _ctx)
                    _x_x5435 = kk_string_dup(_s_x5436, _ctx); /*string*/
                    _b_x1378_1688 = kk_std_core_types__lp__plus__plus__rp_(_x_x5435, name_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2511 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1378_1688)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2511; return kk_Unit;
                  }
                }
              }
              {
                kk_std_core_types__maybe _x_x1_13_11049;
                kk_string_t _x_x5437 = kk_string_dup(a, _ctx); /*string*/
                kk_string_t _x_x5438;
                kk_define_string_literal(static, _s_x5439, 1, "-", _ctx)
                _x_x5438 = kk_string_dup(_s_x5439, _ctx); /*string*/
                _x_x1_13_11049 = kk_std_core_sslice_starts_with(_x_x5437, _x_x5438, _ctx); /*maybe<sslice/sslice>*/
                bool _match_x2490;
                kk_box_t _x_x5440 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5441(_ctx), kk_std_core_types__maybe_box(_x_x1_13_11049, _ctx), _ctx); /*10001*/
                _match_x2490 = kk_bool_unbox(_x_x5440); /*bool*/
                if (_match_x2490) {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(positionals, _ctx);
                  kk_string_t s_5;
                  kk_box_t _x_x5443;
                  kk_box_t _x_x5455;
                  kk_string_t _x_x5456;
                  kk_define_string_literal(static, _s_x5457, 1, "-", _ctx)
                  _x_x5456 = kk_string_dup(_s_x5457, _ctx); /*string*/
                  _x_x5455 = kk_string_box(_x_x5456); /*10001*/
                  _x_x5443 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5444(_ctx), kk_string_box(a), _x_x5455, _ctx); /*10002*/
                  s_5 = kk_string_unbox(_x_x5443); /*string*/
                  kk_std_core_types__list _x_x1_15_11052;
                  kk_box_t _x_x5458;
                  kk_box_t _x_x5462;
                  kk_api__clispec _x_x5463 = kk_api__clispec_dup(spec, _ctx); /*api/clispec*/
                  _x_x5462 = kk_api__clispec_box(_x_x5463, _ctx); /*10000*/
                  _x_x5458 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5459(_ctx), _x_x5462, _ctx); /*10001*/
                  _x_x1_15_11052 = kk_std_core_types__list_unbox(_x_x5458, KK_OWNED, _ctx); /*list<api/cliflag>*/
                  kk_std_core_types__maybe _match_x2498;
                  kk_box_t _x_x5464;
                  kk_box_t _x_x5470;
                  kk_string_t _x_x5471 = kk_string_dup(s_5, _ctx); /*string*/
                  _x_x5470 = kk_string_box(_x_x5471); /*10001*/
                  _x_x5464 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5465(_ctx), kk_std_core_types__list_box(_x_x1_15_11052, _ctx), _x_x5470, _ctx); /*10002*/
                  _match_x2498 = kk_std_core_types__maybe_unbox(_x_x5464, KK_OWNED, _ctx); /*maybe<api/cliflag>*/
                  if (kk_std_core_types__is_Just(_match_x2498, _ctx)) {
                    kk_box_t _box_x1408 = _match_x2498._cons.Just.value;
                    kk_api__cliflag f_1 = kk_api__cliflag_unbox(_box_x1408, KK_BORROWED, _ctx);
                    struct kk_api_Cliflag* _con_x5472 = kk_api__as_Cliflag(f_1, _ctx);
                    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                    kk_string_drop(s_5, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_ref_drop(error, _ctx);
                    kk_api__cliflag_dup(f_1, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2498, _ctx);
                    kk_std_core_types__list x_6_11310;
                    kk_box_t _x_x5473;
                    kk_ref_t _x_x5474 = kk_ref_dup(flags, _ctx); /*local-var<23438,list<string>>*/
                    _x_x5473 = kk_ref_get(_x_x5474,kk_context()); /*10000*/
                    x_6_11310 = kk_std_core_types__list_unbox(_x_x5473, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_6_11311 = kk_api__new_mlift_hc__parse__loop_11171_fun5475(f_1, flags, _ctx); /*(list<string>) -> <local<23438>,exn,api/hica-brk,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_6_11310, _ctx);
                      kk_box_t _x_x5481 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5482(next_6_11311, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5481); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11311, (next_6_11311, x_6_11310, _ctx), _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(flags, _ctx);
                    kk_std_core_types__list _x_x1_18_11056;
                    kk_box_t _x_x5485 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5486(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
                    _x_x1_18_11056 = kk_std_core_types__list_unbox(_x_x5485, KK_OWNED, _ctx); /*list<api/clioption>*/
                    kk_std_core_types__maybe _match_x2499;
                    kk_box_t _x_x5489;
                    kk_box_t _x_x5495;
                    kk_string_t _x_x5496 = kk_string_dup(s_5, _ctx); /*string*/
                    _x_x5495 = kk_string_box(_x_x5496); /*10001*/
                    _x_x5489 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5490(_ctx), kk_std_core_types__list_box(_x_x1_18_11056, _ctx), _x_x5495, _ctx); /*10002*/
                    _match_x2499 = kk_std_core_types__maybe_unbox(_x_x5489, KK_OWNED, _ctx); /*maybe<api/clioption>*/
                    if (kk_std_core_types__is_Just(_match_x2499, _ctx)) {
                      kk_box_t _box_x1443 = _match_x2499._cons.Just.value;
                      kk_api__clioption o_2 = kk_api__clioption_unbox(_box_x1443, KK_BORROWED, _ctx);
                      struct kk_api_Clioption* _con_x5497 = kk_api__as_Clioption(o_2, _ctx);
                      kk_api__clioption_dup(o_2, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2499, _ctx);
                      kk_std_core_types__list x_7_11315;
                      kk_box_t _x_x5498;
                      kk_ref_t _x_x5499 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
                      _x_x5498 = kk_ref_get(_x_x5499,kk_context()); /*10000*/
                      x_7_11315 = kk_std_core_types__list_unbox(_x_x5498, KK_OWNED, _ctx); /*list<string>*/
                      if (kk_yielding(kk_context())) {
                        kk_std_core_types__list_drop(x_7_11315, _ctx);
                        kk_box_t _x_x5500 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5501(error, o_2, options, remaining, s_5, _ctx), _ctx); /*10001*/
                        kk_unit_unbox(_x_x5500); return kk_Unit;
                      }
                      {
                        kk_api__mlift_hc__parse__loop_11148(error, o_2, options, remaining, s_5, x_7_11315, _ctx); return kk_Unit;
                      }
                    }
                    {
                      kk_ref_drop(remaining, _ctx);
                      kk_ref_drop(options, _ctx);
                      kk_string_t _b_x1451_1704;
                      kk_string_t _x_x5503;
                      kk_define_string_literal(static, _s_x5504, 17, "unknown option: -", _ctx)
                      _x_x5503 = kk_string_dup(_s_x5504, _ctx); /*string*/
                      _b_x1451_1704 = kk_std_core_types__lp__plus__plus__rp_(_x_x5503, s_5, _ctx); /*string*/
                      kk_unit_t _brw_x2500 = kk_Unit;
                      kk_ref_set_borrow(error,(kk_string_box(_b_x1451_1704)),kk_context());
                      kk_ref_drop(error, _ctx);
                      _brw_x2500; return kk_Unit;
                    }
                  }
                }
                {
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(flags, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__list _x_x1_22_11062;
                  kk_box_t _x_x5505 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5506(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_22_11062 = kk_std_core_types__list_unbox(_x_x5505, KK_OWNED, _ctx); /*list<(string, api/clispec)>*/
                  kk_std_core_types__maybe _match_x2491;
                  kk_box_t _x_x5509;
                  kk_box_t _x_x5514;
                  kk_string_t _x_x5515 = kk_string_dup(a, _ctx); /*string*/
                  _x_x5514 = kk_string_box(_x_x5515); /*10001*/
                  _x_x5509 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5510(_ctx), kk_std_core_types__list_box(_x_x1_22_11062, _ctx), _x_x5514, _ctx); /*10002*/
                  _match_x2491 = kk_std_core_types__maybe_unbox(_x_x5509, KK_OWNED, _ctx); /*maybe<(string, api/clispec)>*/
                  if (kk_std_core_types__is_Just(_match_x2491, _ctx)) {
                    kk_box_t _box_x1468 = _match_x2491._cons.Just.value;
                    kk_ref_drop(positionals, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2491, _ctx);
                    kk_unit_t x_8_11317 = kk_Unit;
                    kk_unit_t _brw_x2495 = kk_Unit;
                    kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                    kk_ref_drop(subcmd, _ctx);
                    _brw_x2495;
                    if (kk_yielding(kk_context())) {
                      kk_box_t _x_x5516 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5517(remaining, sub__args, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5516); return kk_Unit;
                    }
                    {
                      kk_api__mlift_hc__parse__loop_11151(remaining, sub__args, x_8_11317, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(subcmd, _ctx);
                    kk_ref_drop(sub__args, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_std_core_types__list x_9_11319;
                    kk_box_t _x_x5519;
                    kk_ref_t _x_x5520 = kk_ref_dup(positionals, _ctx); /*local-var<23438,list<string>>*/
                    _x_x5519 = kk_ref_get(_x_x5520,kk_context()); /*10000*/
                    x_9_11319 = kk_std_core_types__list_unbox(_x_x5519, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_9_11320 = kk_api__new_mlift_hc__parse__loop_11171_fun5521(a, positionals, _ctx); /*(list<string>) -> <local<23438>,api/hica-brk,exn,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_9_11319, _ctx);
                      kk_box_t _x_x5523 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5524(next_9_11320, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5523); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11320, (next_9_11320, x_9_11319, _ctx), _ctx); return kk_Unit;
                    }
                  }
                }
              }
            }
          }
          {
            kk_std_core_types__maybe _x_x1_24_11065;
            kk_string_t _x_x5527 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5528;
            kk_define_string_literal(static, _s_x5529, 2, "--", _ctx)
            _x_x5528 = kk_string_dup(_s_x5529, _ctx); /*string*/
            _x_x1_24_11065 = kk_std_core_sslice_starts_with(_x_x5527, _x_x5528, _ctx); /*maybe<sslice/sslice>*/
            bool _match_x2458;
            kk_box_t _x_x5530 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5531(_ctx), kk_std_core_types__maybe_box(_x_x1_24_11065, _ctx), _ctx); /*10001*/
            _match_x2458 = kk_bool_unbox(_x_x5530); /*bool*/
            if (_match_x2458) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_string_t name_0_0_0_0;
              kk_box_t _x_x5533;
              kk_box_t _x_x5545;
              kk_string_t _x_x5546;
              kk_define_string_literal(static, _s_x5547, 2, "--", _ctx)
              _x_x5546 = kk_string_dup(_s_x5547, _ctx); /*string*/
              _x_x5545 = kk_string_box(_x_x5546); /*10001*/
              _x_x5533 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5534(_ctx), kk_string_box(a), _x_x5545, _ctx); /*10002*/
              name_0_0_0_0 = kk_string_unbox(_x_x5533); /*string*/
              kk_std_core_types__list _x_x1_26_11068;
              kk_box_t _x_x5548;
              kk_box_t _x_x5552;
              kk_api__clispec _x_x5553 = kk_api__clispec_dup(spec, _ctx); /*api/clispec*/
              _x_x5552 = kk_api__clispec_box(_x_x5553, _ctx); /*10000*/
              _x_x5548 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5549(_ctx), _x_x5552, _ctx); /*10001*/
              _x_x1_26_11068 = kk_std_core_types__list_unbox(_x_x5548, KK_OWNED, _ctx); /*list<api/cliflag>*/
              kk_std_core_types__maybe _match_x2478;
              kk_box_t _x_x5554;
              kk_box_t _x_x5560;
              kk_string_t _x_x5561 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
              _x_x5560 = kk_string_box(_x_x5561); /*10001*/
              _x_x5554 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5555(_ctx), kk_std_core_types__list_box(_x_x1_26_11068, _ctx), _x_x5560, _ctx); /*10002*/
              _match_x2478 = kk_std_core_types__maybe_unbox(_x_x5554, KK_OWNED, _ctx); /*maybe<api/cliflag>*/
              if (kk_std_core_types__is_Just(_match_x2478, _ctx)) {
                kk_box_t _box_x1518 = _match_x2478._cons.Just.value;
                kk_api__cliflag _pat_24_0_0 = kk_api__cliflag_unbox(_box_x1518, KK_BORROWED, _ctx);
                struct kk_api_Cliflag* _con_x5562 = kk_api__as_Cliflag(_pat_24_0_0, _ctx);
                kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                kk_ref_drop(remaining, _ctx);
                kk_ref_drop(options, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__maybe_drop(_match_x2478, _ctx);
                kk_std_core_types__list x_10_11324;
                kk_box_t _x_x5563;
                kk_ref_t _x_x5564 = kk_ref_dup(flags, _ctx); /*local-var<23438,list<string>>*/
                _x_x5563 = kk_ref_get(_x_x5564,kk_context()); /*10000*/
                x_10_11324 = kk_std_core_types__list_unbox(_x_x5563, KK_OWNED, _ctx); /*list<string>*/
                kk_function_t next_10_11325 = kk_api__new_mlift_hc__parse__loop_11171_fun5565(flags, name_0_0_0_0, _ctx); /*(list<string>) -> <local<23438>,exn,api/hica-brk,div> ()*/;
                if (kk_yielding(kk_context())) {
                  kk_std_core_types__list_drop(x_10_11324, _ctx);
                  kk_box_t _x_x5567 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5568(next_10_11325, _ctx), _ctx); /*10001*/
                  kk_unit_unbox(_x_x5567); return kk_Unit;
                }
                {
                  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11325, (next_10_11325, x_10_11324, _ctx), _ctx); return kk_Unit;
                }
              }
              {
                kk_ref_drop(flags, _ctx);
                kk_std_core_types__list _x_x1_28_11071;
                kk_box_t _x_x5571 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5572(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_28_11071 = kk_std_core_types__list_unbox(_x_x5571, KK_OWNED, _ctx); /*list<api/clioption>*/
                kk_std_core_types__maybe _match_x2479;
                kk_box_t _x_x5575;
                kk_box_t _x_x5581;
                kk_string_t _x_x5582 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
                _x_x5581 = kk_string_box(_x_x5582); /*10001*/
                _x_x5575 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5576(_ctx), kk_std_core_types__list_box(_x_x1_28_11071, _ctx), _x_x5581, _ctx); /*10002*/
                _match_x2479 = kk_std_core_types__maybe_unbox(_x_x5575, KK_OWNED, _ctx); /*maybe<api/clioption>*/
                if (kk_std_core_types__is_Just(_match_x2479, _ctx)) {
                  kk_box_t _box_x1547 = _match_x2479._cons.Just.value;
                  kk_api__clioption _pat_30_0_0 = kk_api__clioption_unbox(_box_x1547, KK_BORROWED, _ctx);
                  struct kk_api_Clioption* _con_x5583 = kk_api__as_Clioption(_pat_30_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2479, _ctx);
                  kk_std_core_types__list x_11_11329;
                  kk_box_t _x_x5584;
                  kk_ref_t _x_x5585 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
                  _x_x5584 = kk_ref_get(_x_x5585,kk_context()); /*10000*/
                  x_11_11329 = kk_std_core_types__list_unbox(_x_x5584, KK_OWNED, _ctx); /*list<string>*/
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_11_11329, _ctx);
                    kk_box_t _x_x5586 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5587(error, name_0_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5586); return kk_Unit;
                  }
                  {
                    kk_api__mlift_hc__parse__loop_11159(error, name_0_0_0_0, options, remaining, x_11_11329, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_string_t _b_x1555_1727;
                  kk_string_t _x_x5589;
                  kk_define_string_literal(static, _s_x5590, 18, "unknown option: --", _ctx)
                  _x_x5589 = kk_string_dup(_s_x5590, _ctx); /*string*/
                  _b_x1555_1727 = kk_std_core_types__lp__plus__plus__rp_(_x_x5589, name_0_0_0_0, _ctx); /*string*/
                  kk_unit_t _brw_x2480 = kk_Unit;
                  kk_ref_set_borrow(error,(kk_string_box(_b_x1555_1727)),kk_context());
                  kk_ref_drop(error, _ctx);
                  _brw_x2480; return kk_Unit;
                }
              }
            }
            {
              kk_std_core_types__maybe _x_x1_31_11076;
              kk_string_t _x_x5591 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5592;
              kk_define_string_literal(static, _s_x5593, 1, "-", _ctx)
              _x_x5592 = kk_string_dup(_s_x5593, _ctx); /*string*/
              _x_x1_31_11076 = kk_std_core_sslice_starts_with(_x_x5591, _x_x5592, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2459;
              kk_box_t _x_x5594 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5595(_ctx), kk_std_core_types__maybe_box(_x_x1_31_11076, _ctx), _ctx); /*10001*/
              _match_x2459 = kk_bool_unbox(_x_x5594); /*bool*/
              if (_match_x2459) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t s_0_0;
                kk_box_t _x_x5597;
                kk_box_t _x_x5609;
                kk_string_t _x_x5610;
                kk_define_string_literal(static, _s_x5611, 1, "-", _ctx)
                _x_x5610 = kk_string_dup(_s_x5611, _ctx); /*string*/
                _x_x5609 = kk_string_box(_x_x5610); /*10001*/
                _x_x5597 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5598(_ctx), kk_string_box(a), _x_x5609, _ctx); /*10002*/
                s_0_0 = kk_string_unbox(_x_x5597); /*string*/
                kk_std_core_types__list _x_x1_33_11079;
                kk_box_t _x_x5612;
                kk_box_t _x_x5616;
                kk_api__clispec _x_x5617 = kk_api__clispec_dup(spec, _ctx); /*api/clispec*/
                _x_x5616 = kk_api__clispec_box(_x_x5617, _ctx); /*10000*/
                _x_x5612 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5613(_ctx), _x_x5616, _ctx); /*10001*/
                _x_x1_33_11079 = kk_std_core_types__list_unbox(_x_x5612, KK_OWNED, _ctx); /*list<api/cliflag>*/
                kk_std_core_types__maybe _match_x2467;
                kk_box_t _x_x5618;
                kk_box_t _x_x5624;
                kk_string_t _x_x5625 = kk_string_dup(s_0_0, _ctx); /*string*/
                _x_x5624 = kk_string_box(_x_x5625); /*10001*/
                _x_x5618 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5619(_ctx), kk_std_core_types__list_box(_x_x1_33_11079, _ctx), _x_x5624, _ctx); /*10002*/
                _match_x2467 = kk_std_core_types__maybe_unbox(_x_x5618, KK_OWNED, _ctx); /*maybe<api/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2467, _ctx)) {
                  kk_box_t _box_x1585 = _match_x2467._cons.Just.value;
                  kk_api__cliflag f_0_0 = kk_api__cliflag_unbox(_box_x1585, KK_BORROWED, _ctx);
                  struct kk_api_Cliflag* _con_x5626 = kk_api__as_Cliflag(f_0_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_string_drop(s_0_0, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_api__cliflag_dup(f_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2467, _ctx);
                  kk_std_core_types__list x_12_11331;
                  kk_box_t _x_x5627;
                  kk_ref_t _x_x5628 = kk_ref_dup(flags, _ctx); /*local-var<23438,list<string>>*/
                  _x_x5627 = kk_ref_get(_x_x5628,kk_context()); /*10000*/
                  x_12_11331 = kk_std_core_types__list_unbox(_x_x5627, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_12_11332 = kk_api__new_mlift_hc__parse__loop_11171_fun5629(f_0_0, flags, _ctx); /*(list<string>) -> <local<23438>,exn,api/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_12_11331, _ctx);
                    kk_box_t _x_x5635 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5636(next_12_11332, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5635); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11332, (next_12_11332, x_12_11331, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_36_11083;
                  kk_box_t _x_x5639 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5640(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_36_11083 = kk_std_core_types__list_unbox(_x_x5639, KK_OWNED, _ctx); /*list<api/clioption>*/
                  kk_std_core_types__maybe _match_x2468;
                  kk_box_t _x_x5643;
                  kk_box_t _x_x5649;
                  kk_string_t _x_x5650 = kk_string_dup(s_0_0, _ctx); /*string*/
                  _x_x5649 = kk_string_box(_x_x5650); /*10001*/
                  _x_x5643 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5644(_ctx), kk_std_core_types__list_box(_x_x1_36_11083, _ctx), _x_x5649, _ctx); /*10002*/
                  _match_x2468 = kk_std_core_types__maybe_unbox(_x_x5643, KK_OWNED, _ctx); /*maybe<api/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2468, _ctx)) {
                    kk_box_t _box_x1620 = _match_x2468._cons.Just.value;
                    kk_api__clioption o_0_0 = kk_api__clioption_unbox(_box_x1620, KK_BORROWED, _ctx);
                    struct kk_api_Clioption* _con_x5651 = kk_api__as_Clioption(o_0_0, _ctx);
                    kk_api__clioption_dup(o_0_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2468, _ctx);
                    kk_std_core_types__list x_13_11336;
                    kk_box_t _x_x5652;
                    kk_ref_t _x_x5653 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
                    _x_x5652 = kk_ref_get(_x_x5653,kk_context()); /*10000*/
                    x_13_11336 = kk_std_core_types__list_unbox(_x_x5652, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_13_11336, _ctx);
                      kk_box_t _x_x5654 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5655(error, o_0_0, options, remaining, s_0_0, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5654); return kk_Unit;
                    }
                    {
                      kk_api__mlift_hc__parse__loop_11166(error, o_0_0, options, remaining, s_0_0, x_13_11336, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1628_1743;
                    kk_string_t _x_x5657;
                    kk_define_string_literal(static, _s_x5658, 17, "unknown option: -", _ctx)
                    _x_x5657 = kk_string_dup(_s_x5658, _ctx); /*string*/
                    _b_x1628_1743 = kk_std_core_types__lp__plus__plus__rp_(_x_x5657, s_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2469 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1628_1743)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2469; return kk_Unit;
                  }
                }
              }
              {
                kk_ref_drop(options, _ctx);
                kk_ref_drop(flags, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__list _x_x1_40_11089;
                kk_box_t _x_x5659 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__parse__loop_11171_fun5660(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_40_11089 = kk_std_core_types__list_unbox(_x_x5659, KK_OWNED, _ctx); /*list<(string, api/clispec)>*/
                kk_std_core_types__maybe _match_x2460;
                kk_box_t _x_x5663;
                kk_box_t _x_x5668;
                kk_string_t _x_x5669 = kk_string_dup(a, _ctx); /*string*/
                _x_x5668 = kk_string_box(_x_x5669); /*10001*/
                _x_x5663 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__parse__loop_11171_fun5664(_ctx), kk_std_core_types__list_box(_x_x1_40_11089, _ctx), _x_x5668, _ctx); /*10002*/
                _match_x2460 = kk_std_core_types__maybe_unbox(_x_x5663, KK_OWNED, _ctx); /*maybe<(string, api/clispec)>*/
                if (kk_std_core_types__is_Just(_match_x2460, _ctx)) {
                  kk_box_t _box_x1645 = _match_x2460._cons.Just.value;
                  kk_ref_drop(positionals, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2460, _ctx);
                  kk_unit_t x_14_11338 = kk_Unit;
                  kk_unit_t _brw_x2464 = kk_Unit;
                  kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                  kk_ref_drop(subcmd, _ctx);
                  _brw_x2464;
                  if (kk_yielding(kk_context())) {
                    kk_box_t _x_x5670 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5671(remaining, sub__args, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5670); return kk_Unit;
                  }
                  {
                    kk_api__mlift_hc__parse__loop_11169(remaining, sub__args, x_14_11338, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_std_core_types__list x_15_11340;
                  kk_box_t _x_x5673;
                  kk_ref_t _x_x5674 = kk_ref_dup(positionals, _ctx); /*local-var<23438,list<string>>*/
                  _x_x5673 = kk_ref_get(_x_x5674,kk_context()); /*10000*/
                  x_15_11340 = kk_std_core_types__list_unbox(_x_x5673, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_15_11341 = kk_api__new_mlift_hc__parse__loop_11171_fun5675(a, positionals, _ctx); /*(list<string>) -> <local<23438>,api/hica-brk,exn,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_15_11340, _ctx);
                    kk_box_t _x_x5677 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11171_fun5678(next_15_11341, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5677); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11341, (next_15_11341, x_15_11340, _ctx), _ctx); return kk_Unit;
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
struct kk_api__mlift_hc__parse__loop_11172_fun5682__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_api__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11172_fun5682(kk_function_t _fself, kk_box_t _b_x1802, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11172_fun5682(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11172_fun5682__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11172_fun5682__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11172_fun5682, kk_context());
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

static kk_box_t kk_api__mlift_hc__parse__loop_11172_fun5682(kk_function_t _fself, kk_box_t _b_x1802, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11172_fun5682__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11172_fun5682__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<23438,string> */
  kk_ref_t flags = _self->flags; /* local-var<23438,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_api__clispec spec = _self->spec; /* api/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23438,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_api__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_unit_t wild___1804 = kk_Unit;
  kk_unit_unbox(_b_x1802);
  kk_unit_t _x_x5683 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11171(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, wild___1804, _ctx);
  return kk_unit_box(_x_x5683);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11172(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10753, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1798_1800 = kk_std_core_list_drop(_y_x10753, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t x_11345 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1798_1800, _ctx)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5681 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11172_fun5682(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5681); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11171(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11345, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11173_fun5687__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_api__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11173_fun5687(kk_function_t _fself, kk_box_t _b_x1810, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11173_fun5687(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11173_fun5687__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11173_fun5687__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11173_fun5687, kk_context());
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

static kk_box_t kk_api__mlift_hc__parse__loop_11173_fun5687(kk_function_t _fself, kk_box_t _b_x1810, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11173_fun5687__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11173_fun5687__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<23438,string> */
  kk_ref_t flags = _self->flags; /* local-var<23438,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_api__clispec spec = _self->spec; /* api/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23438,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_api__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10753_1812 = kk_std_core_types__list_unbox(_b_x1810, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5688 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11172(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _y_x10753_1812, _ctx);
  return kk_unit_box(_x_x5688);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11173(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t a, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, a : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list x_11347;
  kk_box_t _x_x5684;
  kk_ref_t _x_x5685 = kk_ref_dup(remaining, _ctx); /*local-var<23438,list<string>>*/
  _x_x5684 = kk_ref_get(_x_x5685,kk_context()); /*10000*/
  x_11347 = kk_std_core_types__list_unbox(_x_x5684, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11347, _ctx);
    kk_box_t _x_x5686 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11173_fun5687(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5686); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11172(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11347, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11174_fun5699__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11174_fun5699(kk_function_t _fself, kk_box_t _b_x1820, kk_box_t _b_x1821, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11174_fun5699(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__parse__loop_11174_fun5699, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11174_fun5699(kk_function_t _fself, kk_box_t _b_x1820, kk_box_t _b_x1821, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5700;
  kk_std_core_types__maybe _match_x2450 = kk_std_core_types__maybe_unbox(_b_x1820, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2450, _ctx)) {
    kk_box_t _box_x1813 = _match_x2450._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x1813);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2450, _ctx);
    kk_box_drop(_b_x1821, _ctx);
    _x_x5700 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x1814_1826;
    kk_string_t _x_x5701;
    kk_define_string_literal(static, _s_x5702, 22, "unexpected Nothing in ", _ctx)
    _x_x5701 = kk_string_dup(_s_x5702, _ctx); /*string*/
    kk_string_t _x_x5703 = kk_string_unbox(_b_x1821); /*string*/
    _b_x1814_1826 = kk_std_core_types__lp__plus__plus__rp_(_x_x5701, _x_x5703, _ctx); /*string*/
    kk_box_t _x_x5704 = kk_std_core_exn_throw(_b_x1814_1826, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5700 = kk_string_unbox(_x_x5704); /*string*/
  }
  return kk_string_box(_x_x5700);
}


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11174_fun5706__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_api__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11174_fun5706(kk_function_t _fself, kk_box_t _b_x1831, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11174_fun5706(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11174_fun5706__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11174_fun5706__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11174_fun5706, kk_context());
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

static kk_box_t kk_api__mlift_hc__parse__loop_11174_fun5706(kk_function_t _fself, kk_box_t _b_x1831, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11174_fun5706__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11174_fun5706__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23438,string> */
  kk_ref_t flags = _self->flags; /* local-var<23438,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23438,list<string>> */
  kk_api__clispec spec = _self->spec; /* api/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23438,string> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_api__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t a_1833 = kk_string_unbox(_b_x1831); /*string*/;
  kk_unit_t _x_x5707 = kk_Unit;
  kk_api__mlift_hc__parse__loop_11173(error, flags, options, positionals, remaining, spec, sub__args, subcmd, a_1833, _ctx);
  return kk_unit_box(_x_x5707);
}

kk_unit_t kk_api__mlift_hc__parse__loop_11174(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_api__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10751, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_11026 = kk_std_core_list__index(_y_x10751, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11027;
  kk_string_t _x_x5689;
  kk_define_string_literal(static, _s_x5690, 6, "api.kk", _ctx)
  _x_x5689 = kk_string_dup(_s_x5690, _ctx); /*string*/
  kk_string_t _x_x5691;
  kk_string_t _x_x5692;
  kk_define_string_literal(static, _s_x5693, 1, "(", _ctx)
  _x_x5692 = kk_string_dup(_s_x5693, _ctx); /*string*/
  kk_string_t _x_x5694;
  kk_string_t _x_x5695 = kk_std_core_int_show(kk_integer_from_small(748), _ctx); /*string*/
  kk_string_t _x_x5696;
  kk_define_string_literal(static, _s_x5697, 1, ")", _ctx)
  _x_x5696 = kk_string_dup(_s_x5697, _ctx); /*string*/
  _x_x5694 = kk_std_core_types__lp__plus__plus__rp_(_x_x5695, _x_x5696, _ctx); /*string*/
  _x_x5691 = kk_std_core_types__lp__plus__plus__rp_(_x_x5692, _x_x5694, _ctx); /*string*/
  _x_x2_11027 = kk_std_core_types__lp__plus__plus__rp_(_x_x5689, _x_x5691, _ctx); /*string*/
  kk_ssize_t _b_x1816_1822 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11349;
  kk_box_t _x_x5698 = kk_std_core_hnd__open_at2(_b_x1816_1822, kk_api__new_mlift_hc__parse__loop_11174_fun5699(_ctx), kk_std_core_types__maybe_box(_x_x1_11026, _ctx), kk_string_box(_x_x2_11027), _ctx); /*10002*/
  x_11349 = kk_string_unbox(_x_x5698); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11349, _ctx);
    kk_box_t _x_x5705 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11174_fun5706(error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5705); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11173(error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11349, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__parse__loop_11175_fun5710__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_api__mlift_hc__parse__loop_11175_fun5710(kk_function_t _fself, kk_box_t _b_x1839, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__parse__loop_11175_fun5710(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11175_fun5710__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__parse__loop_11175_fun5710__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__parse__loop_11175_fun5710, kk_context());
  _self->flags = flags;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__parse__loop_11175_fun5710(kk_function_t _fself, kk_box_t _b_x1839, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__parse__loop_11175_fun5710__t* _self = kk_function_as(struct kk_api__mlift_hc__parse__loop_11175_fun5710__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23438,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23438,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23438,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23438,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23438,string> */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t _y_x10870_1841 = kk_string_unbox(_b_x1839); /*string*/;
  kk_api__parseraw _x_x5711 = kk_api__mlift_hc__parse__loop_11123(flags, options, positionals, sub__args, subcmd, _y_x10870_1841, _ctx); /*api/parseraw*/
  return kk_api__parseraw_box(_x_x5711, _ctx);
}

kk_api__parseraw kk_api__mlift_hc__parse__loop_11175(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t _y_x10869, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, ()) -> <div,exn,local<h>> parseraw */ 
  {
    kk_string_t x_11351;
    kk_box_t _x_x5708 = kk_ref_get(error,kk_context()); /*10000*/
    x_11351 = kk_string_unbox(_x_x5708); /*string*/
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_11351, _ctx);
      kk_box_t _x_x5709 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__parse__loop_11175_fun5710(flags, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
      return kk_api__parseraw_unbox(_x_x5709, KK_OWNED, _ctx);
    }
    {
      return kk_api__mlift_hc__parse__loop_11123(flags, options, positionals, sub__args, subcmd, x_11351, _ctx);
    }
  }
}


// lift anonymous function
struct kk_api_hc__parse__loop_fun5721__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__parse__loop_fun5721(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5721(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__parse__loop_fun5721, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_hc__parse__loop_fun5722__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__parse__loop_fun5722(kk_function_t _fself, kk_function_t _b_x1865, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5722(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__parse__loop_fun5722, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_hc__parse__loop_fun5723__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__parse__loop_fun5723(kk_function_t _fself, kk_box_t _b_x1859, kk_function_t _b_x1860, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5723(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__parse__loop_fun5723, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__parse__loop_fun5723(kk_function_t _fself, kk_box_t _b_x1859, kk_function_t _b_x1860, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_drop(_b_x1859, _ctx);
  kk_function_drop(_b_x1860, _ctx);
  return kk_unit_box(kk_Unit);
}
static kk_box_t kk_api_hc__parse__loop_fun5722(kk_function_t _fself, kk_function_t _b_x1865, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_hnd_protect(kk_unit_box(kk_Unit), kk_api_new_hc__parse__loop_fun5723(_ctx), _b_x1865, _ctx);
}
static kk_box_t kk_api_hc__parse__loop_fun5721(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_datatype_ptr_dropn(___wildcard_x688__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to(m, kk_api_new_hc__parse__loop_fun5722(_ctx), _ctx);
}


// lift anonymous function
struct kk_api_hc__parse__loop_fun5724__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__parse__loop_fun5724(kk_function_t _fself, kk_box_t _b_x1882, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5724(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__parse__loop_fun5724, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__parse__loop_fun5724(kk_function_t _fself, kk_box_t _b_x1882, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return _b_x1882;
}


// lift anonymous function
struct kk_api_hc__parse__loop_fun5726__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_api__clispec spec;
};
static kk_box_t kk_api_hc__parse__loop_fun5726(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5726(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_api__clispec spec, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5726__t* _self = kk_function_alloc_as(struct kk_api_hc__parse__loop_fun5726__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__parse__loop_fun5726, kk_context());
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
struct kk_api_hc__parse__loop_fun5729__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
};
static bool kk_api_hc__parse__loop_fun5729(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5729(kk_ref_t loc_4, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5729__t* _self = kk_function_alloc_as(struct kk_api_hc__parse__loop_fun5729__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__parse__loop_fun5729, kk_context());
  _self->loc_4 = loc_4;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_api_hc__parse__loop_fun5732__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
};
static kk_box_t kk_api_hc__parse__loop_fun5732(kk_function_t _fself, kk_box_t _b_x1872, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5732(kk_ref_t loc_4, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5732__t* _self = kk_function_alloc_as(struct kk_api_hc__parse__loop_fun5732__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__parse__loop_fun5732, kk_context());
  _self->loc_4 = loc_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__parse__loop_fun5732(kk_function_t _fself, kk_box_t _b_x1872, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5732__t* _self = kk_function_as(struct kk_api_hc__parse__loop_fun5732__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23438,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);}, {}, _ctx)
  bool _x_x5733;
  kk_string_t _x_x5734 = kk_string_unbox(_b_x1872); /*string*/
  _x_x5733 = kk_api__mlift_hc__parse__loop_11125(loc_4, _x_x5734, _ctx); /*bool*/
  return kk_bool_box(_x_x5733);
}
static bool kk_api_hc__parse__loop_fun5729(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5729__t* _self = kk_function_as(struct kk_api_hc__parse__loop_fun5729__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23438,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23438,string> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_string_t x_0_11370;
  kk_box_t _x_x5730 = kk_ref_get(loc_5,kk_context()); /*10000*/
  x_0_11370 = kk_string_unbox(_x_x5730); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_0_11370, _ctx);
    kk_box_t _x_x5731 = kk_std_core_hnd_yield_extend(kk_api_new_hc__parse__loop_fun5732(loc_4, _ctx), _ctx); /*10001*/
    return kk_bool_unbox(_x_x5731);
  }
  {
    return kk_api__mlift_hc__parse__loop_11125(loc_4, x_0_11370, _ctx);
  }
}


// lift anonymous function
struct kk_api_hc__parse__loop_fun5735__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_api__clispec spec;
};
static kk_unit_t kk_api_hc__parse__loop_fun5735(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5735(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_api__clispec spec, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5735__t* _self = kk_function_alloc_as(struct kk_api_hc__parse__loop_fun5735__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__parse__loop_fun5735, kk_context());
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
struct kk_api_hc__parse__loop_fun5739__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_api__clispec spec;
};
static kk_box_t kk_api_hc__parse__loop_fun5739(kk_function_t _fself, kk_box_t _b_x1878, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5739(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_api__clispec spec, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5739__t* _self = kk_function_alloc_as(struct kk_api_hc__parse__loop_fun5739__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__parse__loop_fun5739, kk_context());
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

static kk_box_t kk_api_hc__parse__loop_fun5739(kk_function_t _fself, kk_box_t _b_x1878, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5739__t* _self = kk_function_as(struct kk_api_hc__parse__loop_fun5739__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23438,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23438,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23438,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23438,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23438,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23438,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23438,string> */
  kk_api__clispec spec = _self->spec; /* api/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_api__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5740 = kk_Unit;
  kk_std_core_types__list _x_x5741 = kk_std_core_types__list_unbox(_b_x1878, KK_OWNED, _ctx); /*list<string>*/
  kk_api__mlift_hc__parse__loop_11174(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, _x_x5741, _ctx);
  return kk_unit_box(_x_x5740);
}
static kk_unit_t kk_api_hc__parse__loop_fun5735(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5735__t* _self = kk_function_as(struct kk_api_hc__parse__loop_fun5735__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23438,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23438,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23438,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23438,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23438,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23438,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23438,string> */
  kk_api__clispec spec = _self->spec; /* api/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_api__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list x_1_11372;
  kk_box_t _x_x5736;
  kk_ref_t _x_x5737 = kk_ref_dup(loc_4, _ctx); /*local-var<23438,list<string>>*/
  _x_x5736 = kk_ref_get(_x_x5737,kk_context()); /*10000*/
  x_1_11372 = kk_std_core_types__list_unbox(_x_x5736, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_1_11372, _ctx);
    kk_box_t _x_x5738 = kk_std_core_hnd_yield_extend(kk_api_new_hc__parse__loop_fun5739(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5738); return kk_Unit;
  }
  {
    kk_api__mlift_hc__parse__loop_11174(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, x_1_11372, _ctx); return kk_Unit;
  }
}
static kk_box_t kk_api_hc__parse__loop_fun5726(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5726__t* _self = kk_function_as(struct kk_api_hc__parse__loop_fun5726__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23438,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23438,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23438,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23438,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23438,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23438,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23438,string> */
  kk_api__clispec spec = _self->spec; /* api/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_api__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5727 = kk_Unit;
  kk_function_t _x_x5728;
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5728 = kk_api_new_hc__parse__loop_fun5729(loc_4, loc_5, _ctx); /*() -> <div,local<23438>,exn,api/hica-brk> bool*/
  kk_std_core_while(_x_x5728, kk_api_new_hc__parse__loop_fun5735(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx);
  return kk_unit_box(_x_x5727);
}


// lift anonymous function
struct kk_api_hc__parse__loop_fun5744__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_5;
};
static kk_box_t kk_api_hc__parse__loop_fun5744(kk_function_t _fself, kk_box_t _b_x1898, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__parse__loop_fun5744(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5744__t* _self = kk_function_alloc_as(struct kk_api_hc__parse__loop_fun5744__t, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__parse__loop_fun5744, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  _self->loc_1 = loc_1;
  _self->loc_2 = loc_2;
  _self->loc_3 = loc_3;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__parse__loop_fun5744(kk_function_t _fself, kk_box_t _b_x1898, kk_context_t* _ctx) {
  struct kk_api_hc__parse__loop_fun5744__t* _self = kk_function_as(struct kk_api_hc__parse__loop_fun5744__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23438,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23438,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23438,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23438,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23438,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23438,string> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_api__parseraw _x_x5745;
  kk_unit_t _x_x5746 = kk_Unit;
  kk_unit_unbox(_b_x1898);
  _x_x5745 = kk_api__mlift_hc__parse__loop_11175(loc_5, loc, loc_0, loc_1, loc_3, loc_2, _x_x5746, _ctx); /*api/parseraw*/
  return kk_api__parseraw_box(_x_x5745, _ctx);
}

kk_api__parseraw kk_api_hc__parse__loop(kk_api__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure parseraw */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23438,list<string>>*/;
  kk_ref_t loc_0 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23438,list<(string, string)>>*/;
  kk_ref_t loc_1 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23438,list<string>>*/;
  kk_ref_t loc_2;
  kk_box_t _x_x5712;
  kk_string_t _x_x5713 = kk_string_empty(); /*string*/
  _x_x5712 = kk_string_box(_x_x5713); /*10000*/
  loc_2 = kk_ref_alloc(_x_x5712,kk_context()); /*local-var<23438,string>*/
  kk_ref_t loc_3 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23438,list<string>>*/;
  kk_ref_t loc_4 = kk_ref_alloc((kk_std_core_types__list_box(args, _ctx)),kk_context()); /*local-var<23438,list<string>>*/;
  kk_ref_t loc_5;
  kk_box_t _x_x5715;
  kk_string_t _x_x5716 = kk_string_empty(); /*string*/
  _x_x5715 = kk_string_box(_x_x5716); /*10000*/
  loc_5 = kk_ref_alloc(_x_x5715,kk_context()); /*local-var<23438,string>*/
  kk_unit_t x_11367 = kk_Unit;
  kk_box_t _x_x5718;
  kk_api__hica_brk _x_x5719;
  kk_std_core_hnd__clause0 _x_x5720 = kk_std_core_hnd__new_Clause0(kk_api_new_hc__parse__loop_fun5721(_ctx), _ctx); /*hnd/clause0<10010,10011,10012,10013>*/
  _x_x5719 = kk_api__new_Hnd_hica_brk(kk_reuse_null, 0, kk_integer_from_small(3), _x_x5720, _ctx); /*api/hica-brk<30,31>*/
  kk_function_t _x_x5725;
  kk_ref_dup(loc, _ctx);
  kk_ref_dup(loc_0, _ctx);
  kk_ref_dup(loc_1, _ctx);
  kk_ref_dup(loc_2, _ctx);
  kk_ref_dup(loc_3, _ctx);
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5725 = kk_api_new_hc__parse__loop_fun5726(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx); /*() -> <api/hica-brk|718> 717*/
  _x_x5718 = kk_api_hica_brk_fs__handle(_x_x5719, kk_api_new_hc__parse__loop_fun5724(_ctx), _x_x5725, _ctx); /*719*/
  kk_unit_unbox(_x_x5718);
  kk_api__parseraw res_5;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5742;
    kk_function_t _x_x5743;
    kk_ref_dup(loc, _ctx);
    kk_ref_dup(loc_0, _ctx);
    kk_ref_dup(loc_1, _ctx);
    kk_ref_dup(loc_2, _ctx);
    kk_ref_dup(loc_3, _ctx);
    kk_ref_dup(loc_5, _ctx);
    _x_x5743 = kk_api_new_hc__parse__loop_fun5744(loc, loc_0, loc_1, loc_2, loc_3, loc_5, _ctx); /*(10000) -> 10002 10001*/
    _x_x5742 = kk_std_core_hnd_yield_extend(_x_x5743, _ctx); /*10001*/
    res_5 = kk_api__parseraw_unbox(_x_x5742, KK_OWNED, _ctx); /*api/parseraw*/
  }
  else {
    kk_ref_t _x_x5747 = kk_ref_dup(loc_5, _ctx); /*local-var<23438,string>*/
    kk_ref_t _x_x5748 = kk_ref_dup(loc, _ctx); /*local-var<23438,list<string>>*/
    kk_ref_t _x_x5749 = kk_ref_dup(loc_0, _ctx); /*local-var<23438,list<(string, string)>>*/
    kk_ref_t _x_x5750 = kk_ref_dup(loc_1, _ctx); /*local-var<23438,list<string>>*/
    kk_ref_t _x_x5751 = kk_ref_dup(loc_3, _ctx); /*local-var<23438,list<string>>*/
    kk_ref_t _x_x5752 = kk_ref_dup(loc_2, _ctx); /*local-var<23438,string>*/
    res_5 = kk_api__mlift_hc__parse__loop_11175(_x_x5747, _x_x5748, _x_x5749, _x_x5750, _x_x5751, _x_x5752, x_11367, _ctx); /*api/parseraw*/
  }
  kk_api__parseraw res_4;
  kk_box_t _x_x5753 = kk_std_core_hnd_prompt_local_var(loc_5, kk_api__parseraw_box(res_5, _ctx), _ctx); /*10001*/
  res_4 = kk_api__parseraw_unbox(_x_x5753, KK_OWNED, _ctx); /*api/parseraw*/
  kk_api__parseraw res_3;
  kk_box_t _x_x5754 = kk_std_core_hnd_prompt_local_var(loc_4, kk_api__parseraw_box(res_4, _ctx), _ctx); /*10001*/
  res_3 = kk_api__parseraw_unbox(_x_x5754, KK_OWNED, _ctx); /*api/parseraw*/
  kk_api__parseraw res_2;
  kk_box_t _x_x5755 = kk_std_core_hnd_prompt_local_var(loc_3, kk_api__parseraw_box(res_3, _ctx), _ctx); /*10001*/
  res_2 = kk_api__parseraw_unbox(_x_x5755, KK_OWNED, _ctx); /*api/parseraw*/
  kk_api__parseraw res_1;
  kk_box_t _x_x5756 = kk_std_core_hnd_prompt_local_var(loc_2, kk_api__parseraw_box(res_2, _ctx), _ctx); /*10001*/
  res_1 = kk_api__parseraw_unbox(_x_x5756, KK_OWNED, _ctx); /*api/parseraw*/
  kk_api__parseraw res_0;
  kk_box_t _x_x5757 = kk_std_core_hnd_prompt_local_var(loc_1, kk_api__parseraw_box(res_1, _ctx), _ctx); /*10001*/
  res_0 = kk_api__parseraw_unbox(_x_x5757, KK_OWNED, _ctx); /*api/parseraw*/
  kk_api__parseraw res;
  kk_box_t _x_x5758 = kk_std_core_hnd_prompt_local_var(loc_0, kk_api__parseraw_box(res_0, _ctx), _ctx); /*10001*/
  res = kk_api__parseraw_unbox(_x_x5758, KK_OWNED, _ctx); /*api/parseraw*/
  kk_box_t _x_x5759 = kk_std_core_hnd_prompt_local_var(loc, kk_api__parseraw_box(res, _ctx), _ctx); /*10001*/
  return kk_api__parseraw_unbox(_x_x5759, KK_OWNED, _ctx);
}
 
// monadic lift

kk_api__clioutcome kk_api__mlift_hc__cli__parse__args_11176(kk_std_core_types__list final__options, kk_std_core_types__list flags, kk_std_core_types__list positionals, kk_string_t subcmd, kk_api__clioutcome _y_x10886, kk_context_t* _ctx) { /* (final_options : list<(string, string)>, flags : list<string>, positionals : list<string>, subcmd : string, clioutcome) -> pure clioutcome */ 
  if (kk_api__is_Parsed(_y_x10886, _ctx)) {
    struct kk_api_Parsed* _con_x5760 = kk_api__as_Parsed(_y_x10886, _ctx);
    kk_api__cliresult hc__sub_0 = _con_x5760->cli__result;
    struct kk_api_Cliresult* _con_x5761 = kk_api__as_Cliresult(hc__sub_0, _ctx);
    kk_reuse_t _ru_x3091 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10886, _ctx)) {
      _ru_x3091 = (kk_datatype_ptr_reuse(_y_x10886, _ctx));
    }
    else {
      kk_api__cliresult_dup(hc__sub_0, _ctx);
      kk_datatype_ptr_decref(_y_x10886, _ctx);
    }
    kk_api__cliresult _b_x1932_1933 = hc__sub_0; /*api/cliresult*/;
    if kk_likely(_ru_x3091!=NULL) {
      kk_std_core_types__maybe _x_x5763 = kk_std_core_types__new_Just(kk_api__cliresult_box(_b_x1932_1933, _ctx), _ctx); /*maybe<10024>*/
      struct kk_api_Parsed* _con_x5762 = (struct kk_api_Parsed*)_ru_x3091;
      _con_x5762->cli__result = kk_api__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5763, _ctx);
      return kk_api__base_Parsed(_con_x5762, _ctx);
    }
    {
      kk_api__cliresult _x_x5764;
      kk_std_core_types__maybe _x_x5765 = kk_std_core_types__new_Just(kk_api__cliresult_box(_b_x1932_1933, _ctx), _ctx); /*maybe<10024>*/
      _x_x5764 = kk_api__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5765, _ctx); /*api/cliresult*/
      return kk_api__new_Parsed(kk_reuse_null, 0, _x_x5764, _ctx);
    }
  }
  {
    kk_string_drop(subcmd, _ctx);
    kk_std_core_types__list_drop(positionals, _ctx);
    kk_std_core_types__list_drop(flags, _ctx);
    kk_std_core_types__list_drop(final__options, _ctx);
    return _y_x10886;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5767__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5767(kk_function_t _fself, kk_box_t _b_x1936, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5767(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5767, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5767(kk_function_t _fself, kk_box_t _b_x1936, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5768;
  kk_api__parseraw _match_x2444 = kk_api__parseraw_unbox(_b_x1936, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5769 = kk_api__as_Parseraw(_match_x2444, _ctx);
    kk_string_t _x = _con_x5769->raw__error;
    kk_std_core_types__list _pat_0 = _con_x5769->raw__flags;
    kk_std_core_types__list _pat_1 = _con_x5769->raw__options;
    kk_std_core_types__list _pat_2 = _con_x5769->raw__positionals;
    kk_string_t _pat_3 = _con_x5769->raw__subcmd;
    kk_std_core_types__list _pat_4 = _con_x5769->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2444, _ctx)) {
      kk_std_core_types__list_drop(_pat_4, _ctx);
      kk_string_drop(_pat_3, _ctx);
      kk_std_core_types__list_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2444, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2444, _ctx);
    }
    _x_x5768 = _x; /*string*/
  }
  return kk_string_box(_x_x5768);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5773__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5773(kk_function_t _fself, kk_box_t _b_x1942, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5773(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5773, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5773(kk_function_t _fself, kk_box_t _b_x1942, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5774;
  kk_api__parseraw _match_x2443 = kk_api__parseraw_unbox(_b_x1942, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5775 = kk_api__as_Parseraw(_match_x2443, _ctx);
    kk_string_t _pat_0_0 = _con_x5775->raw__error;
    kk_std_core_types__list _x_0 = _con_x5775->raw__flags;
    kk_std_core_types__list _pat_1_0 = _con_x5775->raw__options;
    kk_std_core_types__list _pat_2_0 = _con_x5775->raw__positionals;
    kk_string_t _pat_3_0 = _con_x5775->raw__subcmd;
    kk_std_core_types__list _pat_4_0 = _con_x5775->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2443, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_string_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2443, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2443, _ctx);
    }
    _x_x5774 = _x_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5774, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5779__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5779(kk_function_t _fself, kk_box_t _b_x1948, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5779(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5779, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5779(kk_function_t _fself, kk_box_t _b_x1948, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5780;
  kk_api__parseraw _match_x2442 = kk_api__parseraw_unbox(_b_x1948, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5781 = kk_api__as_Parseraw(_match_x2442, _ctx);
    kk_string_t _pat_0_1 = _con_x5781->raw__error;
    kk_std_core_types__list _pat_1_1 = _con_x5781->raw__flags;
    kk_std_core_types__list _x_1 = _con_x5781->raw__options;
    kk_std_core_types__list _pat_2_1 = _con_x5781->raw__positionals;
    kk_string_t _pat_3_1 = _con_x5781->raw__subcmd;
    kk_std_core_types__list _pat_4_1 = _con_x5781->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2442, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_string_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_std_core_types__list_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2442, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2442, _ctx);
    }
    _x_x5780 = _x_1; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5780, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5785__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5785(kk_function_t _fself, kk_box_t _b_x1954, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5785(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5785, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5785(kk_function_t _fself, kk_box_t _b_x1954, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5786;
  kk_api__parseraw _match_x2441 = kk_api__parseraw_unbox(_b_x1954, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5787 = kk_api__as_Parseraw(_match_x2441, _ctx);
    kk_string_t _pat_0_2 = _con_x5787->raw__error;
    kk_std_core_types__list _pat_1_2 = _con_x5787->raw__flags;
    kk_std_core_types__list _pat_2_2 = _con_x5787->raw__options;
    kk_std_core_types__list _x_2 = _con_x5787->raw__positionals;
    kk_string_t _pat_3_2 = _con_x5787->raw__subcmd;
    kk_std_core_types__list _pat_4_2 = _con_x5787->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2441, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_string_drop(_pat_3_2, _ctx);
      kk_std_core_types__list_drop(_pat_2_2, _ctx);
      kk_std_core_types__list_drop(_pat_1_2, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(_match_x2441, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2441, _ctx);
    }
    _x_x5786 = _x_2; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5786, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5791__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5791(kk_function_t _fself, kk_box_t _b_x1960, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5791(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5791, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5791(kk_function_t _fself, kk_box_t _b_x1960, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5792;
  kk_api__parseraw _match_x2440 = kk_api__parseraw_unbox(_b_x1960, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5793 = kk_api__as_Parseraw(_match_x2440, _ctx);
    kk_string_t _pat_0_3 = _con_x5793->raw__error;
    kk_std_core_types__list _pat_1_3 = _con_x5793->raw__flags;
    kk_std_core_types__list _pat_2_3 = _con_x5793->raw__options;
    kk_std_core_types__list _pat_3_3 = _con_x5793->raw__positionals;
    kk_string_t _x_3 = _con_x5793->raw__subcmd;
    kk_std_core_types__list _pat_4_3 = _con_x5793->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2440, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_std_core_types__list_drop(_pat_2_3, _ctx);
      kk_std_core_types__list_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(_match_x2440, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2440, _ctx);
    }
    _x_x5792 = _x_3; /*string*/
  }
  return kk_string_box(_x_x5792);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5797__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5797(kk_function_t _fself, kk_box_t _b_x1966, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5797(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5797, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5797(kk_function_t _fself, kk_box_t _b_x1966, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5798;
  kk_api__parseraw _match_x2439 = kk_api__parseraw_unbox(_b_x1966, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5799 = kk_api__as_Parseraw(_match_x2439, _ctx);
    kk_string_t _pat_0_4 = _con_x5799->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x5799->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x5799->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x5799->raw__positionals;
    kk_string_t _pat_4_4 = _con_x5799->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x5799->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2439, _ctx)) {
      kk_string_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_std_core_types__list_drop(_pat_2_4, _ctx);
      kk_std_core_types__list_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(_match_x2439, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2439, _ctx);
    }
    _x_x5798 = _x_4; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5798, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5808__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5808(kk_function_t _fself, kk_box_t _b_x1972, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5808(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5808, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5808(kk_function_t _fself, kk_box_t _b_x1972, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5809;
  bool b_2070 = kk_bool_unbox(_b_x1972); /*bool*/;
  if (b_2070) {
    _x_x5809 = false; /*bool*/
  }
  else {
    _x_x5809 = true; /*bool*/
  }
  return kk_bool_box(_x_x5809);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5811__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5811(kk_function_t _fself, kk_box_t _b_x1981, kk_box_t _b_x1982, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5811(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5811, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5814__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5814(kk_function_t _fself, kk_box_t _b_x1976, kk_box_t _b_x1977, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5814(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5814, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5814(kk_function_t _fself, kk_box_t _b_x1976, kk_box_t _b_x1977, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5815;
  kk_std_core_types__list _x_x5816 = kk_std_core_types__list_unbox(_b_x1976, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_api__clioption _x_x5817 = kk_api__clioption_unbox(_b_x1977, KK_OWNED, _ctx); /*api/clioption*/
  _x_x5815 = kk_api_hc__add__default(_x_x5816, _x_x5817, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5815, _ctx);
}
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5811(kk_function_t _fself, kk_box_t _b_x1981, kk_box_t _b_x1982, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5812;
  kk_api__clispec _match_x2436 = kk_api__clispec_unbox(_b_x1981, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5813 = kk_api__as_Clispec(_match_x2436, _ctx);
    kk_string_t _pat_0_7 = _con_x5813->app__name;
    kk_string_t _pat_1_6 = _con_x5813->app__version;
    kk_string_t _pat_2_6 = _con_x5813->app__about;
    kk_std_core_types__list _pat_3_6 = _con_x5813->app__flags;
    kk_std_core_types__list _x_5 = _con_x5813->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5813->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5813->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2436, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_6, _ctx);
      kk_string_drop(_pat_0_7, _ctx);
      kk_datatype_ptr_free(_match_x2436, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2436, _ctx);
    }
    _x_x5812 = _x_5; /*list<api/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x5812, _b_x1982, kk_api__new_mlift_hc__cli__parse__args_11177_fun5814(_ctx), _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5821__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5821(kk_function_t _fself, kk_box_t _b_x2005, kk_box_t _b_x2006, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5821(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5821, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5824__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5824(kk_function_t _fself, kk_integer_t _b_x1995, kk_box_t _b_x1996, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5824(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5824, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5824(kk_function_t _fself, kk_integer_t _b_x1995, kk_box_t _b_x1996, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x5825 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x1995, _ctx), _b_x1996, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5825, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5829__t {
  struct kk_function_s _base;
  kk_box_t _b_x2006;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5829(kk_function_t _fself, kk_box_t _b_x2000, kk_box_t _b_x2001, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5829(kk_box_t _b_x2006, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__cli__parse__args_11177_fun5829__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__cli__parse__args_11177_fun5829__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__cli__parse__args_11177_fun5829, kk_context());
  _self->_b_x2006 = _b_x2006;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5829(kk_function_t _fself, kk_box_t _b_x2000, kk_box_t _b_x2001, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__cli__parse__args_11177_fun5829__t* _self = kk_function_as(struct kk_api__mlift_hc__cli__parse__args_11177_fun5829__t*, _fself, _ctx);
  kk_box_t _b_x2006 = _self->_b_x2006; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2006, _ctx);}, {}, _ctx)
  kk_string_t _x_x5830;
  kk_std_core_types__list _x_x5831 = kk_std_core_types__list_unbox(_b_x2006, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x5832 = kk_string_unbox(_b_x2000); /*string*/
  kk_std_core_types__tuple2 _x_x5833 = kk_std_core_types__tuple2_unbox(_b_x2001, KK_OWNED, _ctx); /*(int, api/cliarg)*/
  _x_x5830 = kk_api_hc__check__one__arg(_x_x5831, _x_x5832, _x_x5833, _ctx); /*string*/
  return kk_string_box(_x_x5830);
}
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5821(kk_function_t _fself, kk_box_t _b_x2005, kk_box_t _b_x2006, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x1997_2010;
  kk_std_core_types__list _x_x5822;
  kk_api__clispec _match_x2435 = kk_api__clispec_unbox(_b_x2005, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5823 = kk_api__as_Clispec(_match_x2435, _ctx);
    kk_string_t _pat_0_8 = _con_x5823->app__name;
    kk_string_t _pat_1_7 = _con_x5823->app__version;
    kk_string_t _pat_2_7 = _con_x5823->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5823->app__flags;
    kk_std_core_types__list _pat_4_7 = _con_x5823->app__options;
    kk_std_core_types__list _x_6 = _con_x5823->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5823->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2435, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_8, _ctx);
      kk_datatype_ptr_free(_match_x2435, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2435, _ctx);
    }
    _x_x5822 = _x_6; /*list<api/cliarg>*/
  }
  _b_x1997_2010 = kk_std_core_list_map_indexed(_x_x5822, kk_api__new_mlift_hc__cli__parse__args_11177_fun5824(_ctx), _ctx); /*list<(int, api/cliarg)>*/
  kk_box_t _x_x5826;
  kk_string_t _x_x5827 = kk_string_empty(); /*string*/
  _x_x5826 = kk_string_box(_x_x5827); /*10002*/
  return kk_std_core_list_foldl(_b_x1997_2010, _x_x5826, kk_api__new_mlift_hc__cli__parse__args_11177_fun5829(_b_x2006, _ctx), _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5840__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5840(kk_function_t _fself, kk_box_t _b_x2023, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5840(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5840, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5840(kk_function_t _fself, kk_box_t _b_x2023, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5841;
  bool b_0_2071 = kk_bool_unbox(_b_x2023); /*bool*/;
  if (b_0_2071) {
    _x_x5841 = false; /*bool*/
  }
  else {
    _x_x5841 = true; /*bool*/
  }
  return kk_bool_box(_x_x5841);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5844__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5844(kk_function_t _fself, kk_box_t _b_x2026, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5844(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5844, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5844(kk_function_t _fself, kk_box_t _b_x2026, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5845;
  bool b_1_2072 = kk_bool_unbox(_b_x2026); /*bool*/;
  if (b_1_2072) {
    _x_x5845 = false; /*bool*/
  }
  else {
    _x_x5845 = true; /*bool*/
  }
  return kk_bool_box(_x_x5845);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5847__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5847(kk_function_t _fself, kk_box_t _b_x2029, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5847(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5847, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5847(kk_function_t _fself, kk_box_t _b_x2029, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5848;
  kk_api__clispec _match_x2430 = kk_api__clispec_unbox(_b_x2029, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5849 = kk_api__as_Clispec(_match_x2430, _ctx);
    kk_string_t _pat_0_11 = _con_x5849->app__name;
    kk_string_t _pat_1_7_0 = _con_x5849->app__version;
    kk_string_t _pat_2_7_0 = _con_x5849->app__about;
    kk_std_core_types__list _pat_3_7_0 = _con_x5849->app__flags;
    kk_std_core_types__list _pat_4_7_0 = _con_x5849->app__options;
    kk_std_core_types__list _pat_5_2 = _con_x5849->app__args;
    kk_std_core_types__list _x_7 = _con_x5849->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2430, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0, _ctx);
      kk_string_drop(_pat_2_7_0, _ctx);
      kk_string_drop(_pat_1_7_0, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2430, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2430, _ctx);
    }
    _x_x5848 = _x_7; /*list<(string, api/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5848, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5851__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5851(kk_function_t _fself, kk_box_t _b_x2041, kk_box_t _b_x2042, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5851(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5851, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5853__t {
  struct kk_function_s _base;
  kk_string_t name_2074;
};
static bool kk_api__mlift_hc__cli__parse__args_11177_fun5853(kk_function_t _fself, kk_box_t _b_x2037, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5853(kk_string_t name_2074, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__cli__parse__args_11177_fun5853__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__cli__parse__args_11177_fun5853__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__cli__parse__args_11177_fun5853, kk_context());
  _self->name_2074 = name_2074;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api__mlift_hc__cli__parse__args_11177_fun5853(kk_function_t _fself, kk_box_t _b_x2037, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__cli__parse__args_11177_fun5853__t* _self = kk_function_as(struct kk_api__mlift_hc__cli__parse__args_11177_fun5853__t*, _fself, _ctx);
  kk_string_t name_2074 = _self->name_2074; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2074, _ctx);}, {}, _ctx)
  kk_string_t _x_x5854;
  kk_std_core_types__tuple2 _match_x2429 = kk_std_core_types__tuple2_unbox(_b_x2037, KK_OWNED, _ctx); /*(string, api/clispec)*/;
  {
    kk_box_t _box_x2033 = _match_x2429.fst;
    kk_box_t _box_x2034 = _match_x2429.snd;
    kk_string_t _x_6_0 = kk_string_unbox(_box_x2033);
    kk_string_dup(_x_6_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2429, _ctx);
    _x_x5854 = _x_6_0; /*string*/
  }
  return kk_string_is_eq(_x_x5854,name_2074,kk_context());
}
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5851(kk_function_t _fself, kk_box_t _b_x2041, kk_box_t _b_x2042, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5852;
  kk_std_core_types__list commands_2073 = kk_std_core_types__list_unbox(_b_x2041, KK_OWNED, _ctx); /*list<(string, api/clispec)>*/;
  kk_string_t name_2074 = kk_string_unbox(_b_x2042); /*string*/;
  _x_x5852 = kk_std_core_list_find(commands_2073, kk_api__new_mlift_hc__cli__parse__args_11177_fun5853(name_2074, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5852, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5859__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5859(kk_function_t _fself, kk_box_t _b_x2048, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5859(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__args_11177_fun5859, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5859(kk_function_t _fself, kk_box_t _b_x2048, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_api__clispec _x_x5860;
  kk_std_core_types__tuple2 _match_x2428 = kk_std_core_types__tuple2_unbox(_b_x2048, KK_OWNED, _ctx); /*(string, api/clispec)*/;
  {
    kk_box_t _box_x2044 = _match_x2428.fst;
    kk_box_t _box_x2045 = _match_x2428.snd;
    kk_api__clispec _x_8 = kk_api__clispec_unbox(_box_x2045, KK_BORROWED, _ctx);
    kk_api__clispec_dup(_x_8, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2428, _ctx);
    _x_x5860 = _x_8; /*api/clispec*/
  }
  return kk_api__clispec_box(_x_x5860, _ctx);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__args_11177_fun5862__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_0;
  kk_std_core_types__list flags_0;
  kk_std_core_types__list positionals_0;
  kk_string_t subcmd_0;
};
static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5862(kk_function_t _fself, kk_box_t _b_x2053, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__args_11177_fun5862(kk_std_core_types__list final__options_0, kk_std_core_types__list flags_0, kk_std_core_types__list positionals_0, kk_string_t subcmd_0, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__cli__parse__args_11177_fun5862__t* _self = kk_function_alloc_as(struct kk_api__mlift_hc__cli__parse__args_11177_fun5862__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api__mlift_hc__cli__parse__args_11177_fun5862, kk_context());
  _self->final__options_0 = final__options_0;
  _self->flags_0 = flags_0;
  _self->positionals_0 = positionals_0;
  _self->subcmd_0 = subcmd_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__args_11177_fun5862(kk_function_t _fself, kk_box_t _b_x2053, kk_context_t* _ctx) {
  struct kk_api__mlift_hc__cli__parse__args_11177_fun5862__t* _self = kk_function_as(struct kk_api__mlift_hc__cli__parse__args_11177_fun5862__t*, _fself, _ctx);
  kk_std_core_types__list final__options_0 = _self->final__options_0; /* list<(string, string)> */
  kk_std_core_types__list flags_0 = _self->flags_0; /* list<string> */
  kk_std_core_types__list positionals_0 = _self->positionals_0; /* list<string> */
  kk_string_t subcmd_0 = _self->subcmd_0; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_0, _ctx);kk_std_core_types__list_dup(flags_0, _ctx);kk_std_core_types__list_dup(positionals_0, _ctx);kk_string_dup(subcmd_0, _ctx);}, {}, _ctx)
  kk_api__clioutcome _y_x10886_0_2069 = kk_api__clioutcome_unbox(_b_x2053, KK_OWNED, _ctx); /*api/clioutcome*/;
  kk_api__clioutcome _x_x5863 = kk_api__mlift_hc__cli__parse__args_11176(final__options_0, flags_0, positionals_0, subcmd_0, _y_x10886_0_2069, _ctx); /*api/clioutcome*/
  return kk_api__clioutcome_box(_x_x5863, _ctx);
}

kk_api__clioutcome kk_api__mlift_hc__cli__parse__args_11177(kk_api__clispec spec, kk_api__parseraw hc__raw, kk_context_t* _ctx) { /* (spec : clispec, hc_raw : parseraw) -> pure clioutcome */ 
  kk_string_t error;
  kk_box_t _x_x5766;
  kk_box_t _x_x5770;
  kk_api__parseraw _x_x5771 = kk_api__parseraw_dup(hc__raw, _ctx); /*api/parseraw*/
  _x_x5770 = kk_api__parseraw_box(_x_x5771, _ctx); /*10000*/
  _x_x5766 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5767(_ctx), _x_x5770, _ctx); /*10001*/
  error = kk_string_unbox(_x_x5766); /*string*/
  kk_std_core_types__list flags_0;
  kk_box_t _x_x5772;
  kk_box_t _x_x5776;
  kk_api__parseraw _x_x5777 = kk_api__parseraw_dup(hc__raw, _ctx); /*api/parseraw*/
  _x_x5776 = kk_api__parseraw_box(_x_x5777, _ctx); /*10000*/
  _x_x5772 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5773(_ctx), _x_x5776, _ctx); /*10001*/
  flags_0 = kk_std_core_types__list_unbox(_x_x5772, KK_OWNED, _ctx); /*list<string>*/
  kk_std_core_types__list options;
  kk_box_t _x_x5778;
  kk_box_t _x_x5782;
  kk_api__parseraw _x_x5783 = kk_api__parseraw_dup(hc__raw, _ctx); /*api/parseraw*/
  _x_x5782 = kk_api__parseraw_box(_x_x5783, _ctx); /*10000*/
  _x_x5778 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5779(_ctx), _x_x5782, _ctx); /*10001*/
  options = kk_std_core_types__list_unbox(_x_x5778, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_std_core_types__list positionals_0;
  kk_box_t _x_x5784;
  kk_box_t _x_x5788;
  kk_api__parseraw _x_x5789 = kk_api__parseraw_dup(hc__raw, _ctx); /*api/parseraw*/
  _x_x5788 = kk_api__parseraw_box(_x_x5789, _ctx); /*10000*/
  _x_x5784 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5785(_ctx), _x_x5788, _ctx); /*10001*/
  positionals_0 = kk_std_core_types__list_unbox(_x_x5784, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t subcmd_0;
  kk_box_t _x_x5790;
  kk_box_t _x_x5794;
  kk_api__parseraw _x_x5795 = kk_api__parseraw_dup(hc__raw, _ctx); /*api/parseraw*/
  _x_x5794 = kk_api__parseraw_box(_x_x5795, _ctx); /*10000*/
  _x_x5790 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5791(_ctx), _x_x5794, _ctx); /*10001*/
  subcmd_0 = kk_string_unbox(_x_x5790); /*string*/
  kk_std_core_types__list sub__args;
  kk_box_t _x_x5796 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5797(_ctx), kk_api__parseraw_box(hc__raw, _ctx), _ctx); /*10001*/
  sub__args = kk_std_core_types__list_unbox(_x_x5796, KK_OWNED, _ctx); /*list<string>*/
  bool _match_x2421;
  kk_string_t _x_x5800 = kk_string_dup(error, _ctx); /*string*/
  kk_string_t _x_x5801;
  kk_define_string_literal(static, _s_x5802, 8, "__help__", _ctx)
  _x_x5801 = kk_string_dup(_s_x5802, _ctx); /*string*/
  _match_x2421 = kk_string_is_eq(_x_x5800,_x_x5801,kk_context()); /*bool*/
  if (_match_x2421) {
    kk_string_drop(subcmd_0, _ctx);
    kk_std_core_types__list_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_std_core_types__list_drop(positionals_0, _ctx);
    kk_std_core_types__list_drop(options, _ctx);
    kk_std_core_types__list_drop(flags_0, _ctx);
    kk_string_drop(error, _ctx);
    return kk_api__new_Help(_ctx);
  }
  {
    bool _match_x2422;
    kk_string_t _x_x5803 = kk_string_dup(error, _ctx); /*string*/
    kk_string_t _x_x5804;
    kk_define_string_literal(static, _s_x5805, 11, "__version__", _ctx)
    _x_x5804 = kk_string_dup(_s_x5805, _ctx); /*string*/
    _match_x2422 = kk_string_is_eq(_x_x5803,_x_x5804,kk_context()); /*bool*/
    if (_match_x2422) {
      kk_string_drop(subcmd_0, _ctx);
      kk_std_core_types__list_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_0, _ctx);
      kk_std_core_types__list_drop(options, _ctx);
      kk_std_core_types__list_drop(flags_0, _ctx);
      kk_string_drop(error, _ctx);
      return kk_api__new_Version(_ctx);
    }
    {
      bool _x_x1_5_11098;
      kk_integer_t _brw_x2437;
      kk_string_t _x_x5806 = kk_string_dup(error, _ctx); /*string*/
      _brw_x2437 = kk_std_core_string_chars_fs_count(_x_x5806, _ctx); /*int*/
      bool _brw_x2438 = kk_integer_eq_borrow(_brw_x2437,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2437, _ctx);
      _x_x1_5_11098 = _brw_x2438; /*bool*/
      bool _match_x2423;
      kk_box_t _x_x5807 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5808(_ctx), kk_bool_box(_x_x1_5_11098), _ctx); /*10001*/
      _match_x2423 = kk_bool_unbox(_x_x5807); /*bool*/
      if (_match_x2423) {
        kk_string_drop(subcmd_0, _ctx);
        kk_std_core_types__list_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_0, _ctx);
        kk_std_core_types__list_drop(options, _ctx);
        kk_std_core_types__list_drop(flags_0, _ctx);
        return kk_api__new_CliError(kk_reuse_null, 0, error, _ctx);
      }
      {
        kk_string_drop(error, _ctx);
        kk_std_core_types__list final__options_0;
        kk_box_t _x_x5810;
        kk_box_t _x_x5818;
        kk_api__clispec _x_x5819 = kk_api__clispec_dup(spec, _ctx); /*api/clispec*/
        _x_x5818 = kk_api__clispec_box(_x_x5819, _ctx); /*10000*/
        _x_x5810 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__cli__parse__args_11177_fun5811(_ctx), _x_x5818, kk_std_core_types__list_box(options, _ctx), _ctx); /*10002*/
        final__options_0 = kk_std_core_types__list_unbox(_x_x5810, KK_OWNED, _ctx); /*list<(string, string)>*/
        kk_string_t req__err;
        kk_box_t _x_x5820;
        kk_box_t _x_x5834;
        kk_api__clispec _x_x5835 = kk_api__clispec_dup(spec, _ctx); /*api/clispec*/
        _x_x5834 = kk_api__clispec_box(_x_x5835, _ctx); /*10000*/
        kk_box_t _x_x5836;
        kk_std_core_types__list _x_x5837 = kk_std_core_types__list_dup(positionals_0, _ctx); /*list<string>*/
        _x_x5836 = kk_std_core_types__list_box(_x_x5837, _ctx); /*10001*/
        _x_x5820 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__cli__parse__args_11177_fun5821(_ctx), _x_x5834, _x_x5836, _ctx); /*10002*/
        req__err = kk_string_unbox(_x_x5820); /*string*/
        bool _x_x1_8_11103;
        kk_integer_t _brw_x2433;
        kk_string_t _x_x5838 = kk_string_dup(req__err, _ctx); /*string*/
        _brw_x2433 = kk_std_core_string_chars_fs_count(_x_x5838, _ctx); /*int*/
        bool _brw_x2434 = kk_integer_eq_borrow(_brw_x2433,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2433, _ctx);
        _x_x1_8_11103 = _brw_x2434; /*bool*/
        bool _match_x2424;
        kk_box_t _x_x5839 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5840(_ctx), kk_bool_box(_x_x1_8_11103), _ctx); /*10001*/
        _match_x2424 = kk_bool_unbox(_x_x5839); /*bool*/
        if (_match_x2424) {
          kk_string_drop(subcmd_0, _ctx);
          kk_std_core_types__list_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_0, _ctx);
          kk_std_core_types__list_drop(flags_0, _ctx);
          kk_std_core_types__list_drop(final__options_0, _ctx);
          return kk_api__new_CliError(kk_reuse_null, 0, req__err, _ctx);
        }
        {
          kk_string_drop(req__err, _ctx);
          bool _x_x1_9_11104;
          kk_integer_t _brw_x2431;
          kk_string_t _x_x5842 = kk_string_dup(subcmd_0, _ctx); /*string*/
          _brw_x2431 = kk_std_core_string_chars_fs_count(_x_x5842, _ctx); /*int*/
          bool _brw_x2432 = kk_integer_eq_borrow(_brw_x2431,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2431, _ctx);
          _x_x1_9_11104 = _brw_x2432; /*bool*/
          bool _match_x2425;
          kk_box_t _x_x5843 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5844(_ctx), kk_bool_box(_x_x1_9_11104), _ctx); /*10001*/
          _match_x2425 = kk_bool_unbox(_x_x5843); /*bool*/
          if (_match_x2425) {
            kk_std_core_types__list _x_x1_10_11105;
            kk_box_t _x_x5846 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5847(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
            _x_x1_10_11105 = kk_std_core_types__list_unbox(_x_x5846, KK_OWNED, _ctx); /*list<(string, api/clispec)>*/
            kk_std_core_types__maybe _match_x2426;
            kk_box_t _x_x5850;
            kk_box_t _x_x5855;
            kk_string_t _x_x5856 = kk_string_dup(subcmd_0, _ctx); /*string*/
            _x_x5855 = kk_string_box(_x_x5856); /*10001*/
            _x_x5850 = kk_std_core_hnd__open_none2(kk_api__new_mlift_hc__cli__parse__args_11177_fun5851(_ctx), kk_std_core_types__list_box(_x_x1_10_11105, _ctx), _x_x5855, _ctx); /*10002*/
            _match_x2426 = kk_std_core_types__maybe_unbox(_x_x5850, KK_OWNED, _ctx); /*maybe<(string, api/clispec)>*/
            if (kk_std_core_types__is_Just(_match_x2426, _ctx)) {
              kk_box_t _box_x2043 = _match_x2426._cons.Just.value;
              kk_std_core_types__tuple2 pair_0_0 = kk_std_core_types__tuple2_unbox(_box_x2043, KK_BORROWED, _ctx);
              kk_std_core_types__tuple2_dup(pair_0_0, _ctx);
              kk_std_core_types__maybe_drop(_match_x2426, _ctx);
              kk_api__clioutcome x_11374;
              kk_api__clispec _x_x5857;
              kk_box_t _x_x5858 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__args_11177_fun5859(_ctx), kk_std_core_types__tuple2_box(pair_0_0, _ctx), _ctx); /*10001*/
              _x_x5857 = kk_api__clispec_unbox(_x_x5858, KK_OWNED, _ctx); /*api/clispec*/
              x_11374 = kk_api_hc__cli__parse__args(_x_x5857, sub__args, _ctx); /*api/clioutcome*/
              if (kk_yielding(kk_context())) {
                kk_api__clioutcome_drop(x_11374, _ctx);
                kk_box_t _x_x5861 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__cli__parse__args_11177_fun5862(final__options_0, flags_0, positionals_0, subcmd_0, _ctx), _ctx); /*10001*/
                return kk_api__clioutcome_unbox(_x_x5861, KK_OWNED, _ctx);
              }
              {
                return kk_api__mlift_hc__cli__parse__args_11176(final__options_0, flags_0, positionals_0, subcmd_0, x_11374, _ctx);
              }
            }
            {
              kk_std_core_types__list_drop(sub__args, _ctx);
              kk_std_core_types__list_drop(positionals_0, _ctx);
              kk_std_core_types__list_drop(flags_0, _ctx);
              kk_std_core_types__list_drop(final__options_0, _ctx);
              kk_string_t _x_x5864;
              kk_string_t _x_x5865;
              kk_define_string_literal(static, _s_x5866, 17, "unknown command: ", _ctx)
              _x_x5865 = kk_string_dup(_s_x5866, _ctx); /*string*/
              _x_x5864 = kk_std_core_types__lp__plus__plus__rp_(_x_x5865, subcmd_0, _ctx); /*string*/
              return kk_api__new_CliError(kk_reuse_null, 0, _x_x5864, _ctx);
            }
          }
          {
            kk_string_drop(subcmd_0, _ctx);
            kk_std_core_types__list_drop(sub__args, _ctx);
            kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
            kk_api__cliresult _x_x5867;
            kk_string_t _x_x5868 = kk_string_empty(); /*string*/
            _x_x5867 = kk_api__new_Cliresult(kk_reuse_null, 0, flags_0, final__options_0, positionals_0, _x_x5868, kk_std_core_types__new_Nothing(_ctx), _ctx); /*api/cliresult*/
            return kk_api__new_Parsed(kk_reuse_null, 0, _x_x5867, _ctx);
          }
        }
      }
    }
  }
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5872__t {
  struct kk_function_s _base;
  kk_api__clispec spec_2;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5872(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5872(kk_api__clispec spec_2, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__args_fun5872__t* _self = kk_function_alloc_as(struct kk_api_hc__cli__parse__args_fun5872__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__cli__parse__args_fun5872, kk_context());
  _self->spec_2 = spec_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5872(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__args_fun5872__t* _self = kk_function_as(struct kk_api_hc__cli__parse__args_fun5872__t*, _fself, _ctx);
  kk_api__clispec spec_2 = _self->spec_2; /* api/clispec */
  kk_drop_match(_self, {kk_api__clispec_dup(spec_2, _ctx);}, {}, _ctx)
  kk_api__parseraw hc__raw_0_2214 = kk_api__parseraw_unbox(_b_x2076, KK_OWNED, _ctx); /*api/parseraw*/;
  kk_api__clioutcome _x_x5873 = kk_api__mlift_hc__cli__parse__args_11177(spec_2, hc__raw_0_2214, _ctx); /*api/clioutcome*/
  return kk_api__clioutcome_box(_x_x5873, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5875__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5875(kk_function_t _fself, kk_box_t _b_x2079, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5875(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5875, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5875(kk_function_t _fself, kk_box_t _b_x2079, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5876;
  kk_api__parseraw _match_x2420 = kk_api__parseraw_unbox(_b_x2079, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5877 = kk_api__as_Parseraw(_match_x2420, _ctx);
    kk_string_t _x_9 = _con_x5877->raw__error;
    kk_std_core_types__list _pat_0_14 = _con_x5877->raw__flags;
    kk_std_core_types__list _pat_1_8 = _con_x5877->raw__options;
    kk_std_core_types__list _pat_2_8 = _con_x5877->raw__positionals;
    kk_string_t _pat_3_8 = _con_x5877->raw__subcmd;
    kk_std_core_types__list _pat_4_8 = _con_x5877->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2420, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_string_drop(_pat_3_8, _ctx);
      kk_std_core_types__list_drop(_pat_2_8, _ctx);
      kk_std_core_types__list_drop(_pat_1_8, _ctx);
      kk_std_core_types__list_drop(_pat_0_14, _ctx);
      kk_datatype_ptr_free(_match_x2420, _ctx);
    }
    else {
      kk_string_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2420, _ctx);
    }
    _x_x5876 = _x_9; /*string*/
  }
  return kk_string_box(_x_x5876);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5881__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5881(kk_function_t _fself, kk_box_t _b_x2085, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5881(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5881, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5881(kk_function_t _fself, kk_box_t _b_x2085, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5882;
  kk_api__parseraw _match_x2419 = kk_api__parseraw_unbox(_b_x2085, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5883 = kk_api__as_Parseraw(_match_x2419, _ctx);
    kk_string_t _pat_0_0_0 = _con_x5883->raw__error;
    kk_std_core_types__list _x_0_0 = _con_x5883->raw__flags;
    kk_std_core_types__list _pat_1_0_0 = _con_x5883->raw__options;
    kk_std_core_types__list _pat_2_0_0 = _con_x5883->raw__positionals;
    kk_string_t _pat_3_0_0 = _con_x5883->raw__subcmd;
    kk_std_core_types__list _pat_4_0_0 = _con_x5883->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2419, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0_0, _ctx);
      kk_string_drop(_pat_3_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2419, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0_0, _ctx);
      kk_datatype_ptr_decref(_match_x2419, _ctx);
    }
    _x_x5882 = _x_0_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5882, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5887__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5887(kk_function_t _fself, kk_box_t _b_x2091, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5887(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5887, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5887(kk_function_t _fself, kk_box_t _b_x2091, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5888;
  kk_api__parseraw _match_x2418 = kk_api__parseraw_unbox(_b_x2091, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5889 = kk_api__as_Parseraw(_match_x2418, _ctx);
    kk_string_t _pat_0_1_0 = _con_x5889->raw__error;
    kk_std_core_types__list _pat_1_1_0 = _con_x5889->raw__flags;
    kk_std_core_types__list _x_1_0 = _con_x5889->raw__options;
    kk_std_core_types__list _pat_2_1_0 = _con_x5889->raw__positionals;
    kk_string_t _pat_3_1_0 = _con_x5889->raw__subcmd;
    kk_std_core_types__list _pat_4_1_0 = _con_x5889->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2418, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1_0, _ctx);
      kk_string_drop(_pat_3_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_1_0, _ctx);
      kk_string_drop(_pat_0_1_0, _ctx);
      kk_datatype_ptr_free(_match_x2418, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1_0, _ctx);
      kk_datatype_ptr_decref(_match_x2418, _ctx);
    }
    _x_x5888 = _x_1_0; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5888, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5893__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5893(kk_function_t _fself, kk_box_t _b_x2097, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5893(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5893, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5893(kk_function_t _fself, kk_box_t _b_x2097, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5894;
  kk_api__parseraw _match_x2417 = kk_api__parseraw_unbox(_b_x2097, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5895 = kk_api__as_Parseraw(_match_x2417, _ctx);
    kk_string_t _pat_0_2_0 = _con_x5895->raw__error;
    kk_std_core_types__list _pat_1_2_0 = _con_x5895->raw__flags;
    kk_std_core_types__list _pat_2_2_0 = _con_x5895->raw__options;
    kk_std_core_types__list _x_2_0 = _con_x5895->raw__positionals;
    kk_string_t _pat_3_2_0 = _con_x5895->raw__subcmd;
    kk_std_core_types__list _pat_4_2_0 = _con_x5895->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2417, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2_0, _ctx);
      kk_string_drop(_pat_3_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_2_0, _ctx);
      kk_string_drop(_pat_0_2_0, _ctx);
      kk_datatype_ptr_free(_match_x2417, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2_0, _ctx);
      kk_datatype_ptr_decref(_match_x2417, _ctx);
    }
    _x_x5894 = _x_2_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5894, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5899__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5899(kk_function_t _fself, kk_box_t _b_x2103, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5899(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5899, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5899(kk_function_t _fself, kk_box_t _b_x2103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5900;
  kk_api__parseraw _match_x2416 = kk_api__parseraw_unbox(_b_x2103, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5901 = kk_api__as_Parseraw(_match_x2416, _ctx);
    kk_string_t _pat_0_3_0 = _con_x5901->raw__error;
    kk_std_core_types__list _pat_1_3_0 = _con_x5901->raw__flags;
    kk_std_core_types__list _pat_2_3_0 = _con_x5901->raw__options;
    kk_std_core_types__list _pat_3_3_0 = _con_x5901->raw__positionals;
    kk_string_t _x_3_0 = _con_x5901->raw__subcmd;
    kk_std_core_types__list _pat_4_3_0 = _con_x5901->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2416, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_3_0, _ctx);
      kk_string_drop(_pat_0_3_0, _ctx);
      kk_datatype_ptr_free(_match_x2416, _ctx);
    }
    else {
      kk_string_dup(_x_3_0, _ctx);
      kk_datatype_ptr_decref(_match_x2416, _ctx);
    }
    _x_x5900 = _x_3_0; /*string*/
  }
  return kk_string_box(_x_x5900);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5905__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5905(kk_function_t _fself, kk_box_t _b_x2109, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5905(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5905, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5905(kk_function_t _fself, kk_box_t _b_x2109, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5906;
  kk_api__parseraw _match_x2415 = kk_api__parseraw_unbox(_b_x2109, KK_OWNED, _ctx); /*api/parseraw*/;
  {
    struct kk_api_Parseraw* _con_x5907 = kk_api__as_Parseraw(_match_x2415, _ctx);
    kk_string_t _pat_0_4_0 = _con_x5907->raw__error;
    kk_std_core_types__list _pat_1_4_0 = _con_x5907->raw__flags;
    kk_std_core_types__list _pat_2_4_0 = _con_x5907->raw__options;
    kk_std_core_types__list _pat_3_4_0 = _con_x5907->raw__positionals;
    kk_string_t _pat_4_4_0 = _con_x5907->raw__subcmd;
    kk_std_core_types__list _x_4_0 = _con_x5907->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2415, _ctx)) {
      kk_string_drop(_pat_4_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_4_0, _ctx);
      kk_string_drop(_pat_0_4_0, _ctx);
      kk_datatype_ptr_free(_match_x2415, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4_0, _ctx);
      kk_datatype_ptr_decref(_match_x2415, _ctx);
    }
    _x_x5906 = _x_4_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5906, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5916__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5916(kk_function_t _fself, kk_box_t _b_x2115, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5916(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5916, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5916(kk_function_t _fself, kk_box_t _b_x2115, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5917;
  bool b_2_2217 = kk_bool_unbox(_b_x2115); /*bool*/;
  if (b_2_2217) {
    _x_x5917 = false; /*bool*/
  }
  else {
    _x_x5917 = true; /*bool*/
  }
  return kk_bool_box(_x_x5917);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5919__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5919(kk_function_t _fself, kk_box_t _b_x2124, kk_box_t _b_x2125, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5919(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5919, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5922__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5922(kk_function_t _fself, kk_box_t _b_x2119, kk_box_t _b_x2120, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5922(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5922, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5922(kk_function_t _fself, kk_box_t _b_x2119, kk_box_t _b_x2120, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5923;
  kk_std_core_types__list _x_x5924 = kk_std_core_types__list_unbox(_b_x2119, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_api__clioption _x_x5925 = kk_api__clioption_unbox(_b_x2120, KK_OWNED, _ctx); /*api/clioption*/
  _x_x5923 = kk_api_hc__add__default(_x_x5924, _x_x5925, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5923, _ctx);
}
static kk_box_t kk_api_hc__cli__parse__args_fun5919(kk_function_t _fself, kk_box_t _b_x2124, kk_box_t _b_x2125, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5920;
  kk_api__clispec _match_x2412 = kk_api__clispec_unbox(_b_x2124, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5921 = kk_api__as_Clispec(_match_x2412, _ctx);
    kk_string_t _pat_0_7_0 = _con_x5921->app__name;
    kk_string_t _pat_1_6_0 = _con_x5921->app__version;
    kk_string_t _pat_2_6_0 = _con_x5921->app__about;
    kk_std_core_types__list _pat_3_6_0 = _con_x5921->app__flags;
    kk_std_core_types__list _x_5_0 = _con_x5921->app__options;
    kk_std_core_types__list _pat_4_6_0 = _con_x5921->app__args;
    kk_std_core_types__list _pat_5_0_0 = _con_x5921->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2412, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_6_0, _ctx);
      kk_string_drop(_pat_2_6_0, _ctx);
      kk_string_drop(_pat_1_6_0, _ctx);
      kk_string_drop(_pat_0_7_0, _ctx);
      kk_datatype_ptr_free(_match_x2412, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5_0, _ctx);
      kk_datatype_ptr_decref(_match_x2412, _ctx);
    }
    _x_x5920 = _x_5_0; /*list<api/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x5920, _b_x2125, kk_api_new_hc__cli__parse__args_fun5922(_ctx), _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5929__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5929(kk_function_t _fself, kk_box_t _b_x2148, kk_box_t _b_x2149, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5929(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5929, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5932__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5932(kk_function_t _fself, kk_integer_t _b_x2138, kk_box_t _b_x2139, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5932(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5932, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5932(kk_function_t _fself, kk_integer_t _b_x2138, kk_box_t _b_x2139, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x5933 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x2138, _ctx), _b_x2139, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5933, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5937__t {
  struct kk_function_s _base;
  kk_box_t _b_x2149;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5937(kk_function_t _fself, kk_box_t _b_x2143, kk_box_t _b_x2144, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5937(kk_box_t _b_x2149, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__args_fun5937__t* _self = kk_function_alloc_as(struct kk_api_hc__cli__parse__args_fun5937__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__cli__parse__args_fun5937, kk_context());
  _self->_b_x2149 = _b_x2149;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5937(kk_function_t _fself, kk_box_t _b_x2143, kk_box_t _b_x2144, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__args_fun5937__t* _self = kk_function_as(struct kk_api_hc__cli__parse__args_fun5937__t*, _fself, _ctx);
  kk_box_t _b_x2149 = _self->_b_x2149; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2149, _ctx);}, {}, _ctx)
  kk_string_t _x_x5938;
  kk_std_core_types__list _x_x5939 = kk_std_core_types__list_unbox(_b_x2149, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x5940 = kk_string_unbox(_b_x2143); /*string*/
  kk_std_core_types__tuple2 _x_x5941 = kk_std_core_types__tuple2_unbox(_b_x2144, KK_OWNED, _ctx); /*(int, api/cliarg)*/
  _x_x5938 = kk_api_hc__check__one__arg(_x_x5939, _x_x5940, _x_x5941, _ctx); /*string*/
  return kk_string_box(_x_x5938);
}
static kk_box_t kk_api_hc__cli__parse__args_fun5929(kk_function_t _fself, kk_box_t _b_x2148, kk_box_t _b_x2149, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x2140_2153;
  kk_std_core_types__list _x_x5930;
  kk_api__clispec _match_x2411 = kk_api__clispec_unbox(_b_x2148, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5931 = kk_api__as_Clispec(_match_x2411, _ctx);
    kk_string_t _pat_0_8_1 = _con_x5931->app__name;
    kk_string_t _pat_1_7_1 = _con_x5931->app__version;
    kk_string_t _pat_2_7_1 = _con_x5931->app__about;
    kk_std_core_types__list _pat_3_7_1 = _con_x5931->app__flags;
    kk_std_core_types__list _pat_4_7_1 = _con_x5931->app__options;
    kk_std_core_types__list _x_6_1 = _con_x5931->app__args;
    kk_std_core_types__list _pat_5_1_1 = _con_x5931->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2411, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_1, _ctx);
      kk_string_drop(_pat_2_7_1, _ctx);
      kk_string_drop(_pat_1_7_1, _ctx);
      kk_string_drop(_pat_0_8_1, _ctx);
      kk_datatype_ptr_free(_match_x2411, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6_1, _ctx);
      kk_datatype_ptr_decref(_match_x2411, _ctx);
    }
    _x_x5930 = _x_6_1; /*list<api/cliarg>*/
  }
  _b_x2140_2153 = kk_std_core_list_map_indexed(_x_x5930, kk_api_new_hc__cli__parse__args_fun5932(_ctx), _ctx); /*list<(int, api/cliarg)>*/
  kk_box_t _x_x5934;
  kk_string_t _x_x5935 = kk_string_empty(); /*string*/
  _x_x5934 = kk_string_box(_x_x5935); /*10002*/
  return kk_std_core_list_foldl(_b_x2140_2153, _x_x5934, kk_api_new_hc__cli__parse__args_fun5937(_b_x2149, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5948__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5948(kk_function_t _fself, kk_box_t _b_x2166, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5948(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5948, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5948(kk_function_t _fself, kk_box_t _b_x2166, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5949;
  bool b_0_0_2218 = kk_bool_unbox(_b_x2166); /*bool*/;
  if (b_0_0_2218) {
    _x_x5949 = false; /*bool*/
  }
  else {
    _x_x5949 = true; /*bool*/
  }
  return kk_bool_box(_x_x5949);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5952__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5952(kk_function_t _fself, kk_box_t _b_x2169, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5952(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5952, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5952(kk_function_t _fself, kk_box_t _b_x2169, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5953;
  bool b_1_0_2219 = kk_bool_unbox(_b_x2169); /*bool*/;
  if (b_1_0_2219) {
    _x_x5953 = false; /*bool*/
  }
  else {
    _x_x5953 = true; /*bool*/
  }
  return kk_bool_box(_x_x5953);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5955__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5955(kk_function_t _fself, kk_box_t _b_x2172, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5955(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5955, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5955(kk_function_t _fself, kk_box_t _b_x2172, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5956;
  kk_api__clispec _match_x2406 = kk_api__clispec_unbox(_b_x2172, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x5957 = kk_api__as_Clispec(_match_x2406, _ctx);
    kk_string_t _pat_0_11_0 = _con_x5957->app__name;
    kk_string_t _pat_1_7_0_0 = _con_x5957->app__version;
    kk_string_t _pat_2_7_0_0 = _con_x5957->app__about;
    kk_std_core_types__list _pat_3_7_0_0 = _con_x5957->app__flags;
    kk_std_core_types__list _pat_4_7_0_0 = _con_x5957->app__options;
    kk_std_core_types__list _pat_5_2_0 = _con_x5957->app__args;
    kk_std_core_types__list _x_7_0 = _con_x5957->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2406, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0_0, _ctx);
      kk_string_drop(_pat_2_7_0_0, _ctx);
      kk_string_drop(_pat_1_7_0_0, _ctx);
      kk_string_drop(_pat_0_11_0, _ctx);
      kk_datatype_ptr_free(_match_x2406, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7_0, _ctx);
      kk_datatype_ptr_decref(_match_x2406, _ctx);
    }
    _x_x5956 = _x_7_0; /*list<(string, api/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5956, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5959__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5959(kk_function_t _fself, kk_box_t _b_x2184, kk_box_t _b_x2185, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5959(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5959, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5961__t {
  struct kk_function_s _base;
  kk_string_t name_0_2221;
};
static bool kk_api_hc__cli__parse__args_fun5961(kk_function_t _fself, kk_box_t _b_x2180, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5961(kk_string_t name_0_2221, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__args_fun5961__t* _self = kk_function_alloc_as(struct kk_api_hc__cli__parse__args_fun5961__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__cli__parse__args_fun5961, kk_context());
  _self->name_0_2221 = name_0_2221;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_api_hc__cli__parse__args_fun5961(kk_function_t _fself, kk_box_t _b_x2180, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__args_fun5961__t* _self = kk_function_as(struct kk_api_hc__cli__parse__args_fun5961__t*, _fself, _ctx);
  kk_string_t name_0_2221 = _self->name_0_2221; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_2221, _ctx);}, {}, _ctx)
  kk_string_t _x_x5962;
  kk_std_core_types__tuple2 _match_x2405 = kk_std_core_types__tuple2_unbox(_b_x2180, KK_OWNED, _ctx); /*(string, api/clispec)*/;
  {
    kk_box_t _box_x2176 = _match_x2405.fst;
    kk_box_t _box_x2177 = _match_x2405.snd;
    kk_string_t _x_6_0_0 = kk_string_unbox(_box_x2176);
    kk_string_dup(_x_6_0_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2405, _ctx);
    _x_x5962 = _x_6_0_0; /*string*/
  }
  return kk_string_is_eq(_x_x5962,name_0_2221,kk_context());
}
static kk_box_t kk_api_hc__cli__parse__args_fun5959(kk_function_t _fself, kk_box_t _b_x2184, kk_box_t _b_x2185, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5960;
  kk_std_core_types__list commands_0_2220 = kk_std_core_types__list_unbox(_b_x2184, KK_OWNED, _ctx); /*list<(string, api/clispec)>*/;
  kk_string_t name_0_2221 = kk_string_unbox(_b_x2185); /*string*/;
  _x_x5960 = kk_std_core_list_find(commands_0_2220, kk_api_new_hc__cli__parse__args_fun5961(name_0_2221, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5960, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5967__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5967(kk_function_t _fself, kk_box_t _b_x2191, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5967(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__args_fun5967, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5967(kk_function_t _fself, kk_box_t _b_x2191, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_api__clispec _x_x5968;
  kk_std_core_types__tuple2 _match_x2404 = kk_std_core_types__tuple2_unbox(_b_x2191, KK_OWNED, _ctx); /*(string, api/clispec)*/;
  {
    kk_box_t _box_x2187 = _match_x2404.fst;
    kk_box_t _box_x2188 = _match_x2404.snd;
    kk_api__clispec _x_8_0 = kk_api__clispec_unbox(_box_x2188, KK_BORROWED, _ctx);
    kk_api__clispec_dup(_x_8_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2404, _ctx);
    _x_x5968 = _x_8_0; /*api/clispec*/
  }
  return kk_api__clispec_box(_x_x5968, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__args_fun5970__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_1;
  kk_std_core_types__list flags_1;
  kk_std_core_types__list positionals_1;
  kk_string_t subcmd_1;
};
static kk_box_t kk_api_hc__cli__parse__args_fun5970(kk_function_t _fself, kk_box_t _b_x2196, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__args_fun5970(kk_std_core_types__list final__options_1, kk_std_core_types__list flags_1, kk_std_core_types__list positionals_1, kk_string_t subcmd_1, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__args_fun5970__t* _self = kk_function_alloc_as(struct kk_api_hc__cli__parse__args_fun5970__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__cli__parse__args_fun5970, kk_context());
  _self->final__options_1 = final__options_1;
  _self->flags_1 = flags_1;
  _self->positionals_1 = positionals_1;
  _self->subcmd_1 = subcmd_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__cli__parse__args_fun5970(kk_function_t _fself, kk_box_t _b_x2196, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__args_fun5970__t* _self = kk_function_as(struct kk_api_hc__cli__parse__args_fun5970__t*, _fself, _ctx);
  kk_std_core_types__list final__options_1 = _self->final__options_1; /* list<(string, string)> */
  kk_std_core_types__list flags_1 = _self->flags_1; /* list<string> */
  kk_std_core_types__list positionals_1 = _self->positionals_1; /* list<string> */
  kk_string_t subcmd_1 = _self->subcmd_1; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_1, _ctx);kk_std_core_types__list_dup(flags_1, _ctx);kk_std_core_types__list_dup(positionals_1, _ctx);kk_string_dup(subcmd_1, _ctx);}, {}, _ctx)
  kk_api__clioutcome _y_x10886_1_2216 = kk_api__clioutcome_unbox(_b_x2196, KK_OWNED, _ctx); /*api/clioutcome*/;
  kk_api__clioutcome _x_x5971 = kk_api__mlift_hc__cli__parse__args_11176(final__options_1, flags_1, positionals_1, subcmd_1, _y_x10886_1_2216, _ctx); /*api/clioutcome*/
  return kk_api__clioutcome_box(_x_x5971, _ctx);
}

kk_api__clioutcome kk_api_hc__cli__parse__args(kk_api__clispec spec_2, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure clioutcome */ 
  kk_api__parseraw x_0_11376;
  kk_api__clispec _x_x5870 = kk_api__clispec_dup(spec_2, _ctx); /*api/clispec*/
  x_0_11376 = kk_api_hc__parse__loop(_x_x5870, args, _ctx); /*api/parseraw*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_11376, (KK_I32(6)), _ctx);
    kk_box_t _x_x5871 = kk_std_core_hnd_yield_extend(kk_api_new_hc__cli__parse__args_fun5872(spec_2, _ctx), _ctx); /*10001*/
    return kk_api__clioutcome_unbox(_x_x5871, KK_OWNED, _ctx);
  }
  {
    kk_string_t error_0;
    kk_box_t _x_x5874;
    kk_box_t _x_x5878;
    kk_api__parseraw _x_x5879 = kk_api__parseraw_dup(x_0_11376, _ctx); /*api/parseraw*/
    _x_x5878 = kk_api__parseraw_box(_x_x5879, _ctx); /*10000*/
    _x_x5874 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5875(_ctx), _x_x5878, _ctx); /*10001*/
    error_0 = kk_string_unbox(_x_x5874); /*string*/
    kk_std_core_types__list flags_1;
    kk_box_t _x_x5880;
    kk_box_t _x_x5884;
    kk_api__parseraw _x_x5885 = kk_api__parseraw_dup(x_0_11376, _ctx); /*api/parseraw*/
    _x_x5884 = kk_api__parseraw_box(_x_x5885, _ctx); /*10000*/
    _x_x5880 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5881(_ctx), _x_x5884, _ctx); /*10001*/
    flags_1 = kk_std_core_types__list_unbox(_x_x5880, KK_OWNED, _ctx); /*list<string>*/
    kk_std_core_types__list options_1;
    kk_box_t _x_x5886;
    kk_box_t _x_x5890;
    kk_api__parseraw _x_x5891 = kk_api__parseraw_dup(x_0_11376, _ctx); /*api/parseraw*/
    _x_x5890 = kk_api__parseraw_box(_x_x5891, _ctx); /*10000*/
    _x_x5886 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5887(_ctx), _x_x5890, _ctx); /*10001*/
    options_1 = kk_std_core_types__list_unbox(_x_x5886, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_std_core_types__list positionals_1;
    kk_box_t _x_x5892;
    kk_box_t _x_x5896;
    kk_api__parseraw _x_x5897 = kk_api__parseraw_dup(x_0_11376, _ctx); /*api/parseraw*/
    _x_x5896 = kk_api__parseraw_box(_x_x5897, _ctx); /*10000*/
    _x_x5892 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5893(_ctx), _x_x5896, _ctx); /*10001*/
    positionals_1 = kk_std_core_types__list_unbox(_x_x5892, KK_OWNED, _ctx); /*list<string>*/
    kk_string_t subcmd_1;
    kk_box_t _x_x5898;
    kk_box_t _x_x5902;
    kk_api__parseraw _x_x5903 = kk_api__parseraw_dup(x_0_11376, _ctx); /*api/parseraw*/
    _x_x5902 = kk_api__parseraw_box(_x_x5903, _ctx); /*10000*/
    _x_x5898 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5899(_ctx), _x_x5902, _ctx); /*10001*/
    subcmd_1 = kk_string_unbox(_x_x5898); /*string*/
    kk_std_core_types__list sub__args_0;
    kk_box_t _x_x5904 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5905(_ctx), kk_api__parseraw_box(x_0_11376, _ctx), _ctx); /*10001*/
    sub__args_0 = kk_std_core_types__list_unbox(_x_x5904, KK_OWNED, _ctx); /*list<string>*/
    bool _match_x2397;
    kk_string_t _x_x5908 = kk_string_dup(error_0, _ctx); /*string*/
    kk_string_t _x_x5909;
    kk_define_string_literal(static, _s_x5910, 8, "__help__", _ctx)
    _x_x5909 = kk_string_dup(_s_x5910, _ctx); /*string*/
    _match_x2397 = kk_string_is_eq(_x_x5908,_x_x5909,kk_context()); /*bool*/
    if (_match_x2397) {
      kk_string_drop(subcmd_1, _ctx);
      kk_std_core_types__list_drop(sub__args_0, _ctx);
      kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_1, _ctx);
      kk_std_core_types__list_drop(options_1, _ctx);
      kk_std_core_types__list_drop(flags_1, _ctx);
      kk_string_drop(error_0, _ctx);
      return kk_api__new_Help(_ctx);
    }
    {
      bool _match_x2398;
      kk_string_t _x_x5911 = kk_string_dup(error_0, _ctx); /*string*/
      kk_string_t _x_x5912;
      kk_define_string_literal(static, _s_x5913, 11, "__version__", _ctx)
      _x_x5912 = kk_string_dup(_s_x5913, _ctx); /*string*/
      _match_x2398 = kk_string_is_eq(_x_x5911,_x_x5912,kk_context()); /*bool*/
      if (_match_x2398) {
        kk_string_drop(subcmd_1, _ctx);
        kk_std_core_types__list_drop(sub__args_0, _ctx);
        kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_1, _ctx);
        kk_std_core_types__list_drop(options_1, _ctx);
        kk_std_core_types__list_drop(flags_1, _ctx);
        kk_string_drop(error_0, _ctx);
        return kk_api__new_Version(_ctx);
      }
      {
        bool _x_x1_5_11098_0;
        kk_integer_t _brw_x2413;
        kk_string_t _x_x5914 = kk_string_dup(error_0, _ctx); /*string*/
        _brw_x2413 = kk_std_core_string_chars_fs_count(_x_x5914, _ctx); /*int*/
        bool _brw_x2414 = kk_integer_eq_borrow(_brw_x2413,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2413, _ctx);
        _x_x1_5_11098_0 = _brw_x2414; /*bool*/
        bool _match_x2399;
        kk_box_t _x_x5915 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5916(_ctx), kk_bool_box(_x_x1_5_11098_0), _ctx); /*10001*/
        _match_x2399 = kk_bool_unbox(_x_x5915); /*bool*/
        if (_match_x2399) {
          kk_string_drop(subcmd_1, _ctx);
          kk_std_core_types__list_drop(sub__args_0, _ctx);
          kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_1, _ctx);
          kk_std_core_types__list_drop(options_1, _ctx);
          kk_std_core_types__list_drop(flags_1, _ctx);
          return kk_api__new_CliError(kk_reuse_null, 0, error_0, _ctx);
        }
        {
          kk_string_drop(error_0, _ctx);
          kk_std_core_types__list final__options_1;
          kk_box_t _x_x5918;
          kk_box_t _x_x5926;
          kk_api__clispec _x_x5927 = kk_api__clispec_dup(spec_2, _ctx); /*api/clispec*/
          _x_x5926 = kk_api__clispec_box(_x_x5927, _ctx); /*10000*/
          _x_x5918 = kk_std_core_hnd__open_none2(kk_api_new_hc__cli__parse__args_fun5919(_ctx), _x_x5926, kk_std_core_types__list_box(options_1, _ctx), _ctx); /*10002*/
          final__options_1 = kk_std_core_types__list_unbox(_x_x5918, KK_OWNED, _ctx); /*list<(string, string)>*/
          kk_string_t req__err_0;
          kk_box_t _x_x5928;
          kk_box_t _x_x5942;
          kk_api__clispec _x_x5943 = kk_api__clispec_dup(spec_2, _ctx); /*api/clispec*/
          _x_x5942 = kk_api__clispec_box(_x_x5943, _ctx); /*10000*/
          kk_box_t _x_x5944;
          kk_std_core_types__list _x_x5945 = kk_std_core_types__list_dup(positionals_1, _ctx); /*list<string>*/
          _x_x5944 = kk_std_core_types__list_box(_x_x5945, _ctx); /*10001*/
          _x_x5928 = kk_std_core_hnd__open_none2(kk_api_new_hc__cli__parse__args_fun5929(_ctx), _x_x5942, _x_x5944, _ctx); /*10002*/
          req__err_0 = kk_string_unbox(_x_x5928); /*string*/
          bool _x_x1_8_11103_0;
          kk_integer_t _brw_x2409;
          kk_string_t _x_x5946 = kk_string_dup(req__err_0, _ctx); /*string*/
          _brw_x2409 = kk_std_core_string_chars_fs_count(_x_x5946, _ctx); /*int*/
          bool _brw_x2410 = kk_integer_eq_borrow(_brw_x2409,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2409, _ctx);
          _x_x1_8_11103_0 = _brw_x2410; /*bool*/
          bool _match_x2400;
          kk_box_t _x_x5947 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5948(_ctx), kk_bool_box(_x_x1_8_11103_0), _ctx); /*10001*/
          _match_x2400 = kk_bool_unbox(_x_x5947); /*bool*/
          if (_match_x2400) {
            kk_string_drop(subcmd_1, _ctx);
            kk_std_core_types__list_drop(sub__args_0, _ctx);
            kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
            kk_std_core_types__list_drop(positionals_1, _ctx);
            kk_std_core_types__list_drop(flags_1, _ctx);
            kk_std_core_types__list_drop(final__options_1, _ctx);
            return kk_api__new_CliError(kk_reuse_null, 0, req__err_0, _ctx);
          }
          {
            kk_string_drop(req__err_0, _ctx);
            bool _x_x1_9_11104_0;
            kk_integer_t _brw_x2407;
            kk_string_t _x_x5950 = kk_string_dup(subcmd_1, _ctx); /*string*/
            _brw_x2407 = kk_std_core_string_chars_fs_count(_x_x5950, _ctx); /*int*/
            bool _brw_x2408 = kk_integer_eq_borrow(_brw_x2407,(kk_integer_from_small(0)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2407, _ctx);
            _x_x1_9_11104_0 = _brw_x2408; /*bool*/
            bool _match_x2401;
            kk_box_t _x_x5951 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5952(_ctx), kk_bool_box(_x_x1_9_11104_0), _ctx); /*10001*/
            _match_x2401 = kk_bool_unbox(_x_x5951); /*bool*/
            if (_match_x2401) {
              kk_std_core_types__list _x_x1_10_11105_0;
              kk_box_t _x_x5954 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5955(_ctx), kk_api__clispec_box(spec_2, _ctx), _ctx); /*10001*/
              _x_x1_10_11105_0 = kk_std_core_types__list_unbox(_x_x5954, KK_OWNED, _ctx); /*list<(string, api/clispec)>*/
              kk_std_core_types__maybe _match_x2402;
              kk_box_t _x_x5958;
              kk_box_t _x_x5963;
              kk_string_t _x_x5964 = kk_string_dup(subcmd_1, _ctx); /*string*/
              _x_x5963 = kk_string_box(_x_x5964); /*10001*/
              _x_x5958 = kk_std_core_hnd__open_none2(kk_api_new_hc__cli__parse__args_fun5959(_ctx), kk_std_core_types__list_box(_x_x1_10_11105_0, _ctx), _x_x5963, _ctx); /*10002*/
              _match_x2402 = kk_std_core_types__maybe_unbox(_x_x5958, KK_OWNED, _ctx); /*maybe<(string, api/clispec)>*/
              if (kk_std_core_types__is_Just(_match_x2402, _ctx)) {
                kk_box_t _box_x2186 = _match_x2402._cons.Just.value;
                kk_std_core_types__tuple2 pair_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x2186, KK_BORROWED, _ctx);
                kk_std_core_types__tuple2_dup(pair_0_0_0, _ctx);
                kk_std_core_types__maybe_drop(_match_x2402, _ctx);
                kk_api__clioutcome x_1_11379;
                kk_api__clispec _x_x5965;
                kk_box_t _x_x5966 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__args_fun5967(_ctx), kk_std_core_types__tuple2_box(pair_0_0_0, _ctx), _ctx); /*10001*/
                _x_x5965 = kk_api__clispec_unbox(_x_x5966, KK_OWNED, _ctx); /*api/clispec*/
                x_1_11379 = kk_api_hc__cli__parse__args(_x_x5965, sub__args_0, _ctx); /*api/clioutcome*/
                if (kk_yielding(kk_context())) {
                  kk_api__clioutcome_drop(x_1_11379, _ctx);
                  kk_box_t _x_x5969 = kk_std_core_hnd_yield_extend(kk_api_new_hc__cli__parse__args_fun5970(final__options_1, flags_1, positionals_1, subcmd_1, _ctx), _ctx); /*10001*/
                  return kk_api__clioutcome_unbox(_x_x5969, KK_OWNED, _ctx);
                }
                if (kk_api__is_Parsed(x_1_11379, _ctx)) {
                  struct kk_api_Parsed* _con_x5972 = kk_api__as_Parsed(x_1_11379, _ctx);
                  kk_api__cliresult hc__sub_0_0 = _con_x5972->cli__result;
                  struct kk_api_Cliresult* _con_x5973 = kk_api__as_Cliresult(hc__sub_0_0, _ctx);
                  kk_reuse_t _ru_x3119 = kk_reuse_null; /*@reuse*/;
                  if kk_likely(kk_datatype_ptr_is_unique(x_1_11379, _ctx)) {
                    _ru_x3119 = (kk_datatype_ptr_reuse(x_1_11379, _ctx));
                  }
                  else {
                    kk_api__cliresult_dup(hc__sub_0_0, _ctx);
                    kk_datatype_ptr_decref(x_1_11379, _ctx);
                  }
                  kk_api__cliresult _b_x2197_2213 = hc__sub_0_0; /*api/cliresult*/;
                  if kk_likely(_ru_x3119!=NULL) {
                    kk_std_core_types__maybe _x_x5975 = kk_std_core_types__new_Just(kk_api__cliresult_box(_b_x2197_2213, _ctx), _ctx); /*maybe<10024>*/
                    struct kk_api_Parsed* _con_x5974 = (struct kk_api_Parsed*)_ru_x3119;
                    _con_x5974->cli__result = kk_api__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x5975, _ctx);
                    return kk_api__base_Parsed(_con_x5974, _ctx);
                  }
                  {
                    kk_api__cliresult _x_x5976;
                    kk_std_core_types__maybe _x_x5977 = kk_std_core_types__new_Just(kk_api__cliresult_box(_b_x2197_2213, _ctx), _ctx); /*maybe<10024>*/
                    _x_x5976 = kk_api__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x5977, _ctx); /*api/cliresult*/
                    return kk_api__new_Parsed(kk_reuse_null, 0, _x_x5976, _ctx);
                  }
                }
                {
                  kk_string_drop(subcmd_1, _ctx);
                  kk_std_core_types__list_drop(positionals_1, _ctx);
                  kk_std_core_types__list_drop(flags_1, _ctx);
                  kk_std_core_types__list_drop(final__options_1, _ctx);
                  return x_1_11379;
                }
              }
              {
                kk_std_core_types__list_drop(sub__args_0, _ctx);
                kk_std_core_types__list_drop(positionals_1, _ctx);
                kk_std_core_types__list_drop(flags_1, _ctx);
                kk_std_core_types__list_drop(final__options_1, _ctx);
                kk_string_t _x_x5978;
                kk_string_t _x_x5979;
                kk_define_string_literal(static, _s_x5980, 17, "unknown command: ", _ctx)
                _x_x5979 = kk_string_dup(_s_x5980, _ctx); /*string*/
                _x_x5978 = kk_std_core_types__lp__plus__plus__rp_(_x_x5979, subcmd_1, _ctx); /*string*/
                return kk_api__new_CliError(kk_reuse_null, 0, _x_x5978, _ctx);
              }
            }
            {
              kk_string_drop(subcmd_1, _ctx);
              kk_std_core_types__list_drop(sub__args_0, _ctx);
              kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
              kk_api__cliresult _x_x5981;
              kk_string_t _x_x5982 = kk_string_empty(); /*string*/
              _x_x5981 = kk_api__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, _x_x5982, kk_std_core_types__new_Nothing(_ctx), _ctx); /*api/cliresult*/
              return kk_api__new_Parsed(kk_reuse_null, 0, _x_x5981, _ctx);
            }
          }
        }
      }
    }
  }
}
extern kk_box_t kk_api_hc__cli__parse_fun5986(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5987 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x5987, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__or__exit_11178_fun5992__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__or__exit_11178_fun5992(kk_function_t _fself, kk_box_t _b_x2226, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__or__exit_11178_fun5992(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__or__exit_11178_fun5992, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__or__exit_11178_fun5992(kk_function_t _fself, kk_box_t _b_x2226, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5993;
  kk_api__clispec _x_x5994 = kk_api__clispec_unbox(_b_x2226, KK_OWNED, _ctx); /*api/clispec*/
  _x_x5993 = kk_api_hc__cli__help(_x_x5994, _ctx); /*string*/
  return kk_string_box(_x_x5993);
}


// lift anonymous function
struct kk_api__mlift_hc__cli__parse__or__exit_11178_fun5999__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__cli__parse__or__exit_11178_fun5999(kk_function_t _fself, kk_box_t _b_x2231, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__cli__parse__or__exit_11178_fun5999(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__cli__parse__or__exit_11178_fun5999, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__cli__parse__or__exit_11178_fun5999(kk_function_t _fself, kk_box_t _b_x2231, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6000;
  kk_string_t _x_x6001;
  kk_api__clispec _match_x2395;
  kk_box_t _x_x6002 = kk_box_dup(_b_x2231, _ctx); /*10000*/
  _match_x2395 = kk_api__clispec_unbox(_x_x6002, KK_OWNED, _ctx); /*api/clispec*/
  {
    struct kk_api_Clispec* _con_x6003 = kk_api__as_Clispec(_match_x2395, _ctx);
    kk_string_t _x = _con_x6003->app__name;
    kk_string_t _pat_0_0 = _con_x6003->app__version;
    kk_string_t _pat_1_0 = _con_x6003->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x6003->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x6003->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x6003->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x6003->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2395, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2395, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2395, _ctx);
    }
    _x_x6001 = _x; /*string*/
  }
  kk_string_t _x_x6004;
  kk_string_t _x_x6005;
  kk_define_string_literal(static, _s_x6006, 1, " ", _ctx)
  _x_x6005 = kk_string_dup(_s_x6006, _ctx); /*string*/
  kk_string_t _x_x6007;
  kk_api__clispec _match_x2394 = kk_api__clispec_unbox(_b_x2231, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x6008 = kk_api__as_Clispec(_match_x2394, _ctx);
    kk_string_t _pat_0_1 = _con_x6008->app__name;
    kk_string_t _x_0 = _con_x6008->app__version;
    kk_string_t _pat_1_1 = _con_x6008->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x6008->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x6008->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x6008->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x6008->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2394, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2394, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2394, _ctx);
    }
    _x_x6007 = _x_0; /*string*/
  }
  _x_x6004 = kk_std_core_types__lp__plus__plus__rp_(_x_x6005, _x_x6007, _ctx); /*string*/
  _x_x6000 = kk_std_core_types__lp__plus__plus__rp_(_x_x6001, _x_x6004, _ctx); /*string*/
  return kk_string_box(_x_x6000);
}

kk_api__cliresult kk_api__mlift_hc__cli__parse__or__exit_11178(kk_api__clispec spec, kk_api__clioutcome _y_x10894, kk_context_t* _ctx) { /* (spec : clispec, clioutcome) -> pure cliresult */ 
  if (kk_api__is_Parsed(_y_x10894, _ctx)) {
    struct kk_api_Parsed* _con_x5988 = kk_api__as_Parsed(_y_x10894, _ctx);
    kk_api__cliresult r = _con_x5988->cli__result;
    struct kk_api_Cliresult* _con_x5989 = kk_api__as_Cliresult(r, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10894, _ctx)) {
      kk_datatype_ptr_free(_y_x10894, _ctx);
    }
    else {
      kk_api__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(_y_x10894, _ctx);
    }
    return r;
  }
  if (kk_api__is_Help(_y_x10894, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x5990;
    kk_box_t _x_x5991 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__or__exit_11178_fun5992(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5990 = kk_string_unbox(_x_x5991); /*string*/
    kk_std_core_console_printsln(_x_x5990, _ctx);
    kk_string_t _x_x5995 = kk_string_empty(); /*string*/
    return kk_api__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5995, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_api__is_Version(_y_x10894, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x5997;
    kk_box_t _x_x5998 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__cli__parse__or__exit_11178_fun5999(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5997 = kk_string_unbox(_x_x5998); /*string*/
    kk_std_core_console_printsln(_x_x5997, _ctx);
    kk_string_t _x_x6009 = kk_string_empty(); /*string*/
    return kk_api__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6009, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_api_CliError* _con_x6011 = kk_api__as_CliError(_y_x10894, _ctx);
    kk_string_t msg = _con_x6011->cli__error__msg;
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10894, _ctx)) {
      kk_datatype_ptr_free(_y_x10894, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(_y_x10894, _ctx);
    }
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x6012;
    kk_string_t _x_x6013;
    kk_define_string_literal(static, _s_x6014, 7, "error: ", _ctx)
    _x_x6013 = kk_string_dup(_s_x6014, _ctx); /*string*/
    _x_x6012 = kk_std_core_types__lp__plus__plus__rp_(_x_x6013, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6012, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x6015;
    kk_define_string_literal(static, _s_x6016, 20, "try --help for usage", _ctx)
    _x_x6015 = kk_string_dup(_s_x6016, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6015, _ctx);
    kk_string_t _x_x6017 = kk_string_empty(); /*string*/
    return kk_api__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6017, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_api_hc__cli__parse__or__exit_fun6022__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__or__exit_fun6022(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__or__exit_fun6022(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__or__exit_fun6022, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__or__exit_fun6022(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6023 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6023, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__or__exit_fun6025__t {
  struct kk_function_s _base;
  kk_api__clispec spec;
};
static kk_box_t kk_api_hc__cli__parse__or__exit_fun6025(kk_function_t _fself, kk_box_t _b_x2238, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__or__exit_fun6025(kk_api__clispec spec, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__or__exit_fun6025__t* _self = kk_function_alloc_as(struct kk_api_hc__cli__parse__or__exit_fun6025__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__cli__parse__or__exit_fun6025, kk_context());
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_api_hc__cli__parse__or__exit_fun6025(kk_function_t _fself, kk_box_t _b_x2238, kk_context_t* _ctx) {
  struct kk_api_hc__cli__parse__or__exit_fun6025__t* _self = kk_function_as(struct kk_api_hc__cli__parse__or__exit_fun6025__t*, _fself, _ctx);
  kk_api__clispec spec = _self->spec; /* api/clispec */
  kk_drop_match(_self, {kk_api__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_api__clioutcome _y_x10894_2251 = kk_api__clioutcome_unbox(_b_x2238, KK_OWNED, _ctx); /*api/clioutcome*/;
  kk_api__cliresult _x_x6026 = kk_api__mlift_hc__cli__parse__or__exit_11178(spec, _y_x10894_2251, _ctx); /*api/cliresult*/
  return kk_api__cliresult_box(_x_x6026, _ctx);
}


// lift anonymous function
struct kk_api_hc__cli__parse__or__exit_fun6031__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__or__exit_fun6031(kk_function_t _fself, kk_box_t _b_x2241, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__or__exit_fun6031(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__or__exit_fun6031, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__or__exit_fun6031(kk_function_t _fself, kk_box_t _b_x2241, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6032;
  kk_api__clispec _x_x6033 = kk_api__clispec_unbox(_b_x2241, KK_OWNED, _ctx); /*api/clispec*/
  _x_x6032 = kk_api_hc__cli__help(_x_x6033, _ctx); /*string*/
  return kk_string_box(_x_x6032);
}


// lift anonymous function
struct kk_api_hc__cli__parse__or__exit_fun6038__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__cli__parse__or__exit_fun6038(kk_function_t _fself, kk_box_t _b_x2246, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__cli__parse__or__exit_fun6038(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__cli__parse__or__exit_fun6038, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__cli__parse__or__exit_fun6038(kk_function_t _fself, kk_box_t _b_x2246, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6039;
  kk_string_t _x_x6040;
  kk_api__clispec _match_x2393;
  kk_box_t _x_x6041 = kk_box_dup(_b_x2246, _ctx); /*10000*/
  _match_x2393 = kk_api__clispec_unbox(_x_x6041, KK_OWNED, _ctx); /*api/clispec*/
  {
    struct kk_api_Clispec* _con_x6042 = kk_api__as_Clispec(_match_x2393, _ctx);
    kk_string_t _x = _con_x6042->app__name;
    kk_string_t _pat_0_0_0 = _con_x6042->app__version;
    kk_string_t _pat_1_0_0 = _con_x6042->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x6042->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x6042->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x6042->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x6042->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2393, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2393, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2393, _ctx);
    }
    _x_x6040 = _x; /*string*/
  }
  kk_string_t _x_x6043;
  kk_string_t _x_x6044;
  kk_define_string_literal(static, _s_x6045, 1, " ", _ctx)
  _x_x6044 = kk_string_dup(_s_x6045, _ctx); /*string*/
  kk_string_t _x_x6046;
  kk_api__clispec _match_x2392 = kk_api__clispec_unbox(_b_x2246, KK_OWNED, _ctx); /*api/clispec*/;
  {
    struct kk_api_Clispec* _con_x6047 = kk_api__as_Clispec(_match_x2392, _ctx);
    kk_string_t _pat_0_1 = _con_x6047->app__name;
    kk_string_t _x_0 = _con_x6047->app__version;
    kk_string_t _pat_1_1 = _con_x6047->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x6047->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x6047->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x6047->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x6047->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2392, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2392, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2392, _ctx);
    }
    _x_x6046 = _x_0; /*string*/
  }
  _x_x6043 = kk_std_core_types__lp__plus__plus__rp_(_x_x6044, _x_x6046, _ctx); /*string*/
  _x_x6039 = kk_std_core_types__lp__plus__plus__rp_(_x_x6040, _x_x6043, _ctx); /*string*/
  return kk_string_box(_x_x6039);
}

kk_api__cliresult kk_api_hc__cli__parse__or__exit(kk_api__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> <pure,console/console,ndet> cliresult */ 
  kk_api__clioutcome x_11382;
  kk_api__clispec _x_x6019 = kk_api__clispec_dup(spec, _ctx); /*api/clispec*/
  kk_std_core_types__list _x_x6020;
  kk_box_t _x_x6021 = kk_std_core_hnd__open_none0(kk_api_new_hc__cli__parse__or__exit_fun6022(_ctx), _ctx); /*10000*/
  _x_x6020 = kk_std_core_types__list_unbox(_x_x6021, KK_OWNED, _ctx); /*list<string>*/
  x_11382 = kk_api_hc__cli__parse__args(_x_x6019, _x_x6020, _ctx); /*api/clioutcome*/
  if (kk_yielding(kk_context())) {
    kk_api__clioutcome_drop(x_11382, _ctx);
    kk_box_t _x_x6024 = kk_std_core_hnd_yield_extend(kk_api_new_hc__cli__parse__or__exit_fun6025(spec, _ctx), _ctx); /*10001*/
    return kk_api__cliresult_unbox(_x_x6024, KK_OWNED, _ctx);
  }
  if (kk_api__is_Parsed(x_11382, _ctx)) {
    struct kk_api_Parsed* _con_x6027 = kk_api__as_Parsed(x_11382, _ctx);
    kk_api__cliresult r = _con_x6027->cli__result;
    struct kk_api_Cliresult* _con_x6028 = kk_api__as_Cliresult(r, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(x_11382, _ctx)) {
      kk_datatype_ptr_free(x_11382, _ctx);
    }
    else {
      kk_api__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(x_11382, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    return r;
  }
  if (kk_api__is_Help(x_11382, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x6029;
    kk_box_t _x_x6030 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__or__exit_fun6031(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x6029 = kk_string_unbox(_x_x6030); /*string*/
    kk_std_core_console_printsln(_x_x6029, _ctx);
    kk_string_t _x_x6034 = kk_string_empty(); /*string*/
    return kk_api__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6034, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_api__is_Version(x_11382, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x6036;
    kk_box_t _x_x6037 = kk_std_core_hnd__open_none1(kk_api_new_hc__cli__parse__or__exit_fun6038(_ctx), kk_api__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x6036 = kk_string_unbox(_x_x6037); /*string*/
    kk_std_core_console_printsln(_x_x6036, _ctx);
    kk_string_t _x_x6048 = kk_string_empty(); /*string*/
    return kk_api__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6048, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_api_CliError* _con_x6050 = kk_api__as_CliError(x_11382, _ctx);
    kk_string_t msg = _con_x6050->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(x_11382, _ctx)) {
      kk_datatype_ptr_free(x_11382, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(x_11382, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x6051;
    kk_string_t _x_x6052;
    kk_define_string_literal(static, _s_x6053, 7, "error: ", _ctx)
    _x_x6052 = kk_string_dup(_s_x6053, _ctx); /*string*/
    _x_x6051 = kk_std_core_types__lp__plus__plus__rp_(_x_x6052, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6051, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x6054;
    kk_define_string_literal(static, _s_x6055, 20, "try --help for usage", _ctx)
    _x_x6054 = kk_string_dup(_s_x6055, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6054, _ctx);
    kk_string_t _x_x6056 = kk_string_empty(); /*string*/
    return kk_api__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6056, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__read__lines_11179_fun6059__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__read__lines_11179_fun6059(kk_function_t _fself, kk_box_t _b_x2257, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__read__lines_11179_fun6059(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__read__lines_11179_fun6059, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api__mlift_hc__read__lines_11179_fun6065__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__read__lines_11179_fun6065(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__read__lines_11179_fun6065(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__read__lines_11179_fun6065, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__read__lines_11179_fun6065(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6066;
  kk_char_t _x_x6067 = kk_char_unbox(_b_x2254, KK_OWNED, _ctx); /*char*/
  _x_x6066 = kk_std_core_string_char_fs_string(_x_x6067, _ctx); /*string*/
  return kk_string_box(_x_x6066);
}
static kk_box_t kk_api__mlift_hc__read__lines_11179_fun6059(kk_function_t _fself, kk_box_t _b_x2257, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2262 = kk_string_unbox(_b_x2257); /*string*/;
  kk_std_core_types__list _x_x6060;
  bool _match_x2388;
  kk_string_t _x_x6061;
  kk_define_string_literal(static, _s_x6062, 1, "\n", _ctx)
  _x_x6061 = kk_string_dup(_s_x6062, _ctx); /*string*/
  kk_string_t _x_x6063 = kk_string_empty(); /*string*/
  _match_x2388 = kk_string_is_eq(_x_x6061,_x_x6063,kk_context()); /*bool*/
  if (_match_x2388) {
    kk_std_core_types__list _b_x2252_2260 = kk_std_core_string_list(s_2262, _ctx); /*list<char>*/;
    kk_function_t _brw_x2389 = kk_api__new_mlift_hc__read__lines_11179_fun6065(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2390 = kk_std_core_list_map(_b_x2252_2260, _brw_x2389, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2389, _ctx);
    _x_x6060 = _brw_x2390; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x6068;
    kk_define_string_literal(static, _s_x6069, 1, "\n", _ctx)
    _x_x6068 = kk_string_dup(_s_x6069, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2262,_x_x6068,kk_context()); /*vector<string>*/
    _x_x6060 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x6060, _ctx);
}

kk_std_core_types__list kk_api__mlift_hc__read__lines_11179(kk_string_t _c_x10899, kk_context_t* _ctx) { /* (string) -> list<string> */ 
  kk_box_t _x_x6058 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__read__lines_11179_fun6059(_ctx), kk_string_box(_c_x10899), _ctx); /*10001*/
  return kk_std_core_types__list_unbox(_x_x6058, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_api__mlift_hc__read__lines_11180_fun6071__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__read__lines_11180_fun6071(kk_function_t _fself, kk_box_t _b_x2266, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__read__lines_11180_fun6071(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__read__lines_11180_fun6071, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__read__lines_11180_fun6071(kk_function_t _fself, kk_box_t _b_x2266, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6072;
  kk_std_core_exn__exception _match_x2387 = kk_std_core_exn__exception_unbox(_b_x2266, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2387.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2387, _ctx);
    _x_x6072 = _x; /*string*/
  }
  return kk_string_box(_x_x6072);
}


// lift anonymous function
struct kk_api__mlift_hc__read__lines_11180_fun6078__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api__mlift_hc__read__lines_11180_fun6078(kk_function_t _fself, kk_box_t _b_x2275, kk_context_t* _ctx);
static kk_function_t kk_api__new_mlift_hc__read__lines_11180_fun6078(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api__mlift_hc__read__lines_11180_fun6078, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api__mlift_hc__read__lines_11180_fun6078(kk_function_t _fself, kk_box_t _b_x2275, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6079;
  kk_string_t _x_x6080 = kk_string_unbox(_b_x2275); /*string*/
  _x_x6079 = kk_api__mlift_hc__read__lines_11179(_x_x6080, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6079, _ctx);
}

kk_std_core_types__list kk_api__mlift_hc__read__lines_11180(kk_std_core_exn__error _y_x10897, kk_context_t* _ctx) { /* (error<string>) -> <fsys,exn> list<string> */ 
  kk_string_t x_11385;
  if (kk_std_core_exn__is_Ok(_y_x10897, _ctx)) {
    kk_box_t _box_x2263 = _y_x10897._cons.Ok.result;
    kk_string_t hc____c = kk_string_unbox(_box_x2263);
    kk_string_dup(hc____c, _ctx);
    kk_std_core_exn__error_drop(_y_x10897, _ctx);
    x_11385 = hc____c; /*string*/
  }
  else {
    kk_std_core_exn__exception hc____e = _y_x10897._cons.Error.exception;
    kk_std_core_exn__exception_dup(hc____e, _ctx);
    kk_std_core_exn__error_drop(_y_x10897, _ctx);
    kk_string_t hc____e_0;
    kk_box_t _x_x6070 = kk_std_core_hnd__open_none1(kk_api__new_mlift_hc__read__lines_11180_fun6071(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
    hc____e_0 = kk_string_unbox(_x_x6070); /*string*/
    kk_string_t _b_x2270_2272;
    kk_string_t _x_x6073;
    kk_define_string_literal(static, _s_x6074, 8, "unwrap: ", _ctx)
    _x_x6073 = kk_string_dup(_s_x6074, _ctx); /*string*/
    kk_string_t _x_x6075 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
    _b_x2270_2272 = kk_std_core_types__lp__plus__plus__rp_(_x_x6073, _x_x6075, _ctx); /*string*/
    kk_box_t _x_x6076 = kk_std_core_exn_throw(_b_x2270_2272, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    x_11385 = kk_string_unbox(_x_x6076); /*string*/
  }
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11385, _ctx);
    kk_box_t _x_x6077 = kk_std_core_hnd_yield_extend(kk_api__new_mlift_hc__read__lines_11180_fun6078(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x6077, KK_OWNED, _ctx);
  }
  {
    return kk_api__mlift_hc__read__lines_11179(x_11385, _ctx);
  }
}


// lift anonymous function
struct kk_api_hc__read__lines_fun6081__t {
  struct kk_function_s _base;
  kk_string_t file__path;
};
static kk_box_t kk_api_hc__read__lines_fun6081(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__read__lines_fun6081(kk_string_t file__path, kk_context_t* _ctx) {
  struct kk_api_hc__read__lines_fun6081__t* _self = kk_function_alloc_as(struct kk_api_hc__read__lines_fun6081__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_api_hc__read__lines_fun6081, kk_context());
  _self->file__path = file__path;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_api_hc__read__lines_fun6083__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__read__lines_fun6083(kk_function_t _fself, kk_box_t _b_x2279, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__read__lines_fun6083(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__read__lines_fun6083, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__read__lines_fun6083(kk_function_t _fself, kk_box_t _b_x2279, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6084;
  kk_string_t _x_x6085 = kk_string_unbox(_b_x2279); /*string*/
  _x_x6084 = kk_std_os_path_path(_x_x6085, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6084, _ctx);
}


// lift anonymous function
struct kk_api_hc__read__lines_fun6086__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__read__lines_fun6086(kk_function_t _fself, kk_box_t _b_x2285, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__read__lines_fun6086(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__read__lines_fun6086, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__read__lines_fun6086(kk_function_t _fself, kk_box_t _b_x2285, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6087;
  kk_std_os_path__path _x_x6088 = kk_std_os_path__path_unbox(_b_x2285, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x6087 = kk_std_os_file_read_text_file(_x_x6088, _ctx); /*string*/
  return kk_string_box(_x_x6087);
}
static kk_box_t kk_api_hc__read__lines_fun6081(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_api_hc__read__lines_fun6081__t* _self = kk_function_as(struct kk_api_hc__read__lines_fun6081__t*, _fself, _ctx);
  kk_string_t file__path = _self->file__path; /* string */
  kk_drop_match(_self, {kk_string_dup(file__path, _ctx);}, {}, _ctx)
  kk_std_os_path__path _x_x1_11111;
  kk_box_t _x_x6082 = kk_std_core_hnd__open_none1(kk_api_new_hc__read__lines_fun6083(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x1_11111 = kk_std_os_path__path_unbox(_x_x6082, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_ssize_t _b_x2282_2288 = (KK_IZ(0)); /*hnd/ev-index*/;
  return kk_std_core_hnd__open_at1(_b_x2282_2288, kk_api_new_hc__read__lines_fun6086(_ctx), kk_std_os_path__path_box(_x_x1_11111, _ctx), _ctx);
}


// lift anonymous function
struct kk_api_hc__read__lines_fun6090__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__read__lines_fun6090(kk_function_t _fself, kk_box_t _b_x2292, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__read__lines_fun6090(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__read__lines_fun6090, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__read__lines_fun6090(kk_function_t _fself, kk_box_t _b_x2292, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6091;
  kk_std_core_exn__error _x_x6092 = kk_std_core_exn__error_unbox(_b_x2292, KK_OWNED, _ctx); /*error<string>*/
  _x_x6091 = kk_api__mlift_hc__read__lines_11180(_x_x6092, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6091, _ctx);
}


// lift anonymous function
struct kk_api_hc__read__lines_fun6094__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__read__lines_fun6094(kk_function_t _fself, kk_box_t _b_x2296, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__read__lines_fun6094(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__read__lines_fun6094, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__read__lines_fun6094(kk_function_t _fself, kk_box_t _b_x2296, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6095;
  kk_std_core_exn__exception _match_x2385 = kk_std_core_exn__exception_unbox(_b_x2296, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2385.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2385, _ctx);
    _x_x6095 = _x; /*string*/
  }
  return kk_string_box(_x_x6095);
}


// lift anonymous function
struct kk_api_hc__read__lines_fun6101__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__read__lines_fun6101(kk_function_t _fself, kk_box_t _b_x2305, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__read__lines_fun6101(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__read__lines_fun6101, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__read__lines_fun6101(kk_function_t _fself, kk_box_t _b_x2305, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6102;
  kk_string_t _x_x6103 = kk_string_unbox(_b_x2305); /*string*/
  _x_x6102 = kk_api__mlift_hc__read__lines_11179(_x_x6103, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6102, _ctx);
}


// lift anonymous function
struct kk_api_hc__read__lines_fun6104__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__read__lines_fun6104(kk_function_t _fself, kk_box_t _b_x2311, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__read__lines_fun6104(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__read__lines_fun6104, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_api_hc__read__lines_fun6110__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__read__lines_fun6110(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__read__lines_fun6110(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__read__lines_fun6110, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__read__lines_fun6110(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6111;
  kk_char_t _x_x6112 = kk_char_unbox(_b_x2308, KK_OWNED, _ctx); /*char*/
  _x_x6111 = kk_std_core_string_char_fs_string(_x_x6112, _ctx); /*string*/
  return kk_string_box(_x_x6111);
}
static kk_box_t kk_api_hc__read__lines_fun6104(kk_function_t _fself, kk_box_t _b_x2311, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2318 = kk_string_unbox(_b_x2311); /*string*/;
  kk_std_core_types__list _x_x6105;
  bool _match_x2382;
  kk_string_t _x_x6106;
  kk_define_string_literal(static, _s_x6107, 1, "\n", _ctx)
  _x_x6106 = kk_string_dup(_s_x6107, _ctx); /*string*/
  kk_string_t _x_x6108 = kk_string_empty(); /*string*/
  _match_x2382 = kk_string_is_eq(_x_x6106,_x_x6108,kk_context()); /*bool*/
  if (_match_x2382) {
    kk_std_core_types__list _b_x2306_2316 = kk_std_core_string_list(s_2318, _ctx); /*list<char>*/;
    kk_function_t _brw_x2383 = kk_api_new_hc__read__lines_fun6110(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2384 = kk_std_core_list_map(_b_x2306_2316, _brw_x2383, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2383, _ctx);
    _x_x6105 = _brw_x2384; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x6113;
    kk_define_string_literal(static, _s_x6114, 1, "\n", _ctx)
    _x_x6113 = kk_string_dup(_s_x6114, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2318,_x_x6113,kk_context()); /*vector<string>*/
    _x_x6105 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x6105, _ctx);
}

kk_std_core_types__list kk_api_hc__read__lines(kk_string_t file__path, kk_context_t* _ctx) { /* (file_path : string) -> <exn,fsys> list<string> */ 
  kk_std_core_exn__error x_11387 = kk_std_core_exn_error_fs_try(kk_api_new_hc__read__lines_fun6081(file__path, _ctx), _ctx); /*error<string>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_exn__error_drop(x_11387, _ctx);
    kk_box_t _x_x6089 = kk_std_core_hnd_yield_extend(kk_api_new_hc__read__lines_fun6090(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x6089, KK_OWNED, _ctx);
  }
  {
    kk_string_t x_0_11390;
    if (kk_std_core_exn__is_Ok(x_11387, _ctx)) {
      kk_box_t _box_x2293 = x_11387._cons.Ok.result;
      kk_string_t hc____c = kk_string_unbox(_box_x2293);
      kk_string_dup(hc____c, _ctx);
      kk_std_core_exn__error_drop(x_11387, _ctx);
      x_0_11390 = hc____c; /*string*/
    }
    else {
      kk_std_core_exn__exception hc____e = x_11387._cons.Error.exception;
      kk_std_core_exn__exception_dup(hc____e, _ctx);
      kk_std_core_exn__error_drop(x_11387, _ctx);
      kk_string_t hc____e_0;
      kk_box_t _x_x6093 = kk_std_core_hnd__open_none1(kk_api_new_hc__read__lines_fun6094(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
      hc____e_0 = kk_string_unbox(_x_x6093); /*string*/
      kk_string_t _b_x2300_2302;
      kk_string_t _x_x6096;
      kk_define_string_literal(static, _s_x6097, 8, "unwrap: ", _ctx)
      _x_x6096 = kk_string_dup(_s_x6097, _ctx); /*string*/
      kk_string_t _x_x6098 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
      _b_x2300_2302 = kk_std_core_types__lp__plus__plus__rp_(_x_x6096, _x_x6098, _ctx); /*string*/
      kk_box_t _x_x6099 = kk_std_core_exn_throw(_b_x2300_2302, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
      x_0_11390 = kk_string_unbox(_x_x6099); /*string*/
    }
    kk_box_t _x_x6100;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_11390, _ctx);
      _x_x6100 = kk_std_core_hnd_yield_extend(kk_api_new_hc__read__lines_fun6101(_ctx), _ctx); /*10001*/
    }
    else {
      _x_x6100 = kk_std_core_hnd__open_none1(kk_api_new_hc__read__lines_fun6104(_ctx), kk_string_box(x_0_11390), _ctx); /*10001*/
    }
    return kk_std_core_types__list_unbox(_x_x6100, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_api_hc__write__lines_fun6117__t {
  struct kk_function_s _base;
};
static kk_box_t kk_api_hc__write__lines_fun6117(kk_function_t _fself, kk_box_t _b_x2321, kk_context_t* _ctx);
static kk_function_t kk_api_new_hc__write__lines_fun6117(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_api_hc__write__lines_fun6117, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_api_hc__write__lines_fun6117(kk_function_t _fself, kk_box_t _b_x2321, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6118;
  kk_string_t _x_x6119 = kk_string_unbox(_b_x2321); /*string*/
  _x_x6118 = kk_std_os_path_path(_x_x6119, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6118, _ctx);
}

kk_unit_t kk_api_hc__write__lines(kk_string_t file__path, kk_std_core_types__list xs, kk_context_t* _ctx) { /* (file_path : string, xs : list<string>) -> <exn,fsys> () */ 
  kk_std_os_path__path _x_x6115;
  kk_box_t _x_x6116 = kk_std_core_hnd__open_none1(kk_api_new_hc__write__lines_fun6117(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x6115 = kk_std_os_path__path_unbox(_x_x6116, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_string_t _x_x6120;
  kk_string_t _x_x6121;
  kk_define_string_literal(static, _s_x6122, 1, "\n", _ctx)
  _x_x6121 = kk_string_dup(_s_x6122, _ctx); /*string*/
  _x_x6120 = kk_std_core_list_joinsep(xs, _x_x6121, _ctx); /*string*/
  kk_std_os_file_write_text_file(_x_x6115, _x_x6120, kk_std_core_types__new_None(_ctx), _ctx); return kk_Unit;
}
 
// .hc:6

kk_std_core_types__maybe kk_api_hc__hml__get(kk_std_core_types__list nodes, kk_string_t key, kk_context_t* _ctx) { /* (nodes : list<hml_types/hmlnode>, key : string) -> div maybe<hml_types/hml> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(nodes, _ctx)) {
    kk_string_drop(key, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x6123 = kk_std_core_types__as_Cons(nodes, _ctx);
    kk_box_t _box_x2324 = _con_x6123->head;
    kk_hml__types__hmlnode _pat_1 = kk_hml__types__hmlnode_unbox(_box_x2324, KK_BORROWED, _ctx);
    if (kk_hml__types__is_NProp(_pat_1, _ctx)) {
      struct kk_hml__types_NProp* _con_x6124 = kk_hml__types__as_NProp(_pat_1, _ctx);
      kk_std_core_types__list rest = _con_x6123->tail;
      kk_string_t k = _con_x6124->key;
      kk_hml__types__hml v = _con_x6124->value;
      if kk_likely(kk_datatype_ptr_is_unique(nodes, _ctx)) {
        if kk_likely(kk_datatype_ptr_is_unique(_pat_1, _ctx)) {
          kk_datatype_ptr_free(_pat_1, _ctx);
        }
        else {
          kk_string_dup(k, _ctx);
          kk_hml__types__hml_dup(v, _ctx);
          kk_datatype_ptr_decref(_pat_1, _ctx);
        }
        kk_datatype_ptr_free(nodes, _ctx);
      }
      else {
        kk_string_dup(k, _ctx);
        kk_std_core_types__list_dup(rest, _ctx);
        kk_hml__types__hml_dup(v, _ctx);
        kk_datatype_ptr_decref(nodes, _ctx);
      }
      bool _match_x2379;
      kk_string_t _x_x6125 = kk_string_dup(key, _ctx); /*string*/
      _match_x2379 = kk_string_is_eq(k,_x_x6125,kk_context()); /*bool*/
      if (_match_x2379) {
        kk_std_core_types__list_drop(rest, _ctx);
        kk_string_drop(key, _ctx);
        return kk_std_core_types__new_Just(kk_hml__types__hml_box(v, _ctx), _ctx);
      }
      {
        kk_hml__types__hml_drop(v, _ctx);
        { // tailcall
          nodes = rest;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x6126 = kk_std_core_types__as_Cons(nodes, _ctx);
    kk_box_t _box_x2326 = _con_x6126->head;
    kk_std_core_types__list rest_0 = _con_x6126->tail;
    kk_hml__types__hmlnode _pat_5 = kk_hml__types__hmlnode_unbox(_box_x2326, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(nodes, _ctx)) {
      kk_hml__types__hmlnode_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(nodes, _ctx);
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_datatype_ptr_decref(nodes, _ctx);
    }
    { // tailcall
      nodes = rest_0;
      goto kk__tailcall;
    }
  }
}
 
// .hc:13

kk_std_core_types__maybe kk_api_hc__hml__elem(kk_std_core_types__list nodes, kk_string_t name, kk_context_t* _ctx) { /* (nodes : list<hml_types/hmlnode>, name : string) -> div maybe<hml_types/hml> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(nodes, _ctx)) {
    kk_string_drop(name, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x6127 = kk_std_core_types__as_Cons(nodes, _ctx);
    kk_box_t _box_x2328 = _con_x6127->head;
    kk_hml__types__hmlnode _pat_1 = kk_hml__types__hmlnode_unbox(_box_x2328, KK_BORROWED, _ctx);
    if (kk_hml__types__is_NElem(_pat_1, _ctx)) {
      struct kk_hml__types_NElem* _con_x6128 = kk_hml__types__as_NElem(_pat_1, _ctx);
      kk_hml__types__hml _pat_2 = _con_x6128->element;
      if (kk_hml__types__is_HElement(_pat_2, _ctx)) {
        struct kk_hml__types_HElement* _con_x6129 = kk_hml__types__as_HElement(_pat_2, _ctx);
        kk_std_core_types__list rest = _con_x6127->tail;
        kk_string_t n = _con_x6129->name;
        kk_std_core_types__list attrs = _con_x6129->attrs;
        kk_std_core_types__list body = _con_x6129->body;
        kk_reuse_t _ru_x3136 = kk_reuse_null; /*@reuse*/;
        if kk_likely(kk_datatype_ptr_is_unique(nodes, _ctx)) {
          if kk_likely(kk_datatype_ptr_is_unique(_pat_1, _ctx)) {
            if kk_likely(kk_datatype_ptr_is_unique(_pat_2, _ctx)) {
              _ru_x3136 = (kk_datatype_ptr_reuse(_pat_2, _ctx));
            }
            else {
              kk_std_core_types__list_dup(attrs, _ctx);
              kk_std_core_types__list_dup(body, _ctx);
              kk_string_dup(n, _ctx);
              kk_datatype_ptr_decref(_pat_2, _ctx);
            }
            kk_datatype_ptr_free(_pat_1, _ctx);
          }
          else {
            kk_std_core_types__list_dup(attrs, _ctx);
            kk_std_core_types__list_dup(body, _ctx);
            kk_string_dup(n, _ctx);
            kk_datatype_ptr_decref(_pat_1, _ctx);
          }
          kk_datatype_ptr_free(nodes, _ctx);
        }
        else {
          kk_std_core_types__list_dup(attrs, _ctx);
          kk_std_core_types__list_dup(body, _ctx);
          kk_string_dup(n, _ctx);
          kk_std_core_types__list_dup(rest, _ctx);
          kk_datatype_ptr_decref(nodes, _ctx);
        }
        bool _match_x2378;
        kk_string_t _x_x6130 = kk_string_dup(n, _ctx); /*string*/
        kk_string_t _x_x6131 = kk_string_dup(name, _ctx); /*string*/
        _match_x2378 = kk_string_is_eq(_x_x6130,_x_x6131,kk_context()); /*bool*/
        if (_match_x2378) {
          kk_std_core_types__list_drop(rest, _ctx);
          kk_string_drop(name, _ctx);
          kk_box_t _x_x6132;
          kk_hml__types__hml _x_x6133;
          if kk_likely(_ru_x3136!=NULL) {
            struct kk_hml__types_HElement* _con_x6134 = (struct kk_hml__types_HElement*)_ru_x3136;
            _x_x6133 = kk_hml__types__base_HElement(_con_x6134, _ctx); /*hml_types/hml*/
          }
          else {
            _x_x6133 = kk_hml__types__new_HElement(kk_reuse_null, 0, n, attrs, body, _ctx); /*hml_types/hml*/
          }
          _x_x6132 = kk_hml__types__hml_box(_x_x6133, _ctx); /*10024*/
          return kk_std_core_types__new_Just(_x_x6132, _ctx);
        }
        {
          kk_reuse_drop(_ru_x3136,kk_context());
          kk_string_drop(n, _ctx);
          kk_std_core_types__list_drop(body, _ctx);
          kk_std_core_types__list_drop(attrs, _ctx);
          { // tailcall
            nodes = rest;
            goto kk__tailcall;
          }
        }
      }
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x6135 = kk_std_core_types__as_Cons(nodes, _ctx);
    kk_box_t _box_x2330 = _con_x6135->head;
    kk_std_core_types__list rest_0 = _con_x6135->tail;
    kk_hml__types__hmlnode _pat_6 = kk_hml__types__hmlnode_unbox(_box_x2330, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(nodes, _ctx)) {
      kk_hml__types__hmlnode_drop(_pat_6, _ctx);
      kk_datatype_ptr_free(nodes, _ctx);
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_datatype_ptr_decref(nodes, _ctx);
    }
    { // tailcall
      nodes = rest_0;
      goto kk__tailcall;
    }
  }
}
 
// .hc:21

kk_std_core_types__list kk_api_hc__hml__elems(kk_std_core_types__list nodes, kk_string_t name, kk_context_t* _ctx) { /* (nodes : list<hml_types/hmlnode>, name : string) -> div list<hml_types/hml> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(nodes, _ctx)) {
    kk_string_drop(name, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x6136 = kk_std_core_types__as_Cons(nodes, _ctx);
    kk_box_t _box_x2332 = _con_x6136->head;
    kk_hml__types__hmlnode _pat_1 = kk_hml__types__hmlnode_unbox(_box_x2332, KK_BORROWED, _ctx);
    if (kk_hml__types__is_NElem(_pat_1, _ctx)) {
      struct kk_hml__types_NElem* _con_x6137 = kk_hml__types__as_NElem(_pat_1, _ctx);
      kk_hml__types__hml _pat_2 = _con_x6137->element;
      if (kk_hml__types__is_HElement(_pat_2, _ctx)) {
        struct kk_hml__types_HElement* _con_x6138 = kk_hml__types__as_HElement(_pat_2, _ctx);
        kk_std_core_types__list rest = _con_x6136->tail;
        kk_string_t n = _con_x6138->name;
        kk_std_core_types__list attrs = _con_x6138->attrs;
        kk_std_core_types__list body = _con_x6138->body;
        kk_reuse_t _ru_x3142 = kk_reuse_null; /*@reuse*/;
        kk_reuse_t _ru_x3140 = kk_reuse_null; /*@reuse*/;
        if kk_likely(kk_datatype_ptr_is_unique(nodes, _ctx)) {
          if kk_likely(kk_datatype_ptr_is_unique(_pat_1, _ctx)) {
            if kk_likely(kk_datatype_ptr_is_unique(_pat_2, _ctx)) {
              _ru_x3140 = (kk_datatype_ptr_reuse(_pat_2, _ctx));
            }
            else {
              kk_std_core_types__list_dup(attrs, _ctx);
              kk_std_core_types__list_dup(body, _ctx);
              kk_string_dup(n, _ctx);
              kk_datatype_ptr_decref(_pat_2, _ctx);
            }
            kk_datatype_ptr_free(_pat_1, _ctx);
          }
          else {
            kk_std_core_types__list_dup(attrs, _ctx);
            kk_std_core_types__list_dup(body, _ctx);
            kk_string_dup(n, _ctx);
            kk_datatype_ptr_decref(_pat_1, _ctx);
          }
          _ru_x3142 = (kk_datatype_ptr_reuse(nodes, _ctx));
        }
        else {
          kk_std_core_types__list_dup(attrs, _ctx);
          kk_std_core_types__list_dup(body, _ctx);
          kk_string_dup(n, _ctx);
          kk_std_core_types__list_dup(rest, _ctx);
          kk_datatype_ptr_decref(nodes, _ctx);
        }
        bool _match_x2377;
        kk_string_t _x_x6139 = kk_string_dup(n, _ctx); /*string*/
        kk_string_t _x_x6140 = kk_string_dup(name, _ctx); /*string*/
        _match_x2377 = kk_string_is_eq(_x_x6139,_x_x6140,kk_context()); /*bool*/
        if (_match_x2377) {
          kk_std_core_types__list ys_10731 = kk_api_hc__hml__elems(rest, name, _ctx); /*list<hml_types/hml>*/;
          kk_std_core_types__list _x_x6141;
          kk_box_t _x_x6142;
          kk_hml__types__hml _x_x6143;
          if kk_likely(_ru_x3140!=NULL) {
            struct kk_hml__types_HElement* _con_x6144 = (struct kk_hml__types_HElement*)_ru_x3140;
            _x_x6143 = kk_hml__types__base_HElement(_con_x6144, _ctx); /*hml_types/hml*/
          }
          else {
            _x_x6143 = kk_hml__types__new_HElement(kk_reuse_null, 0, n, attrs, body, _ctx); /*hml_types/hml*/
          }
          _x_x6142 = kk_hml__types__hml_box(_x_x6143, _ctx); /*10021*/
          _x_x6141 = kk_std_core_types__new_Cons(_ru_x3142, 0, _x_x6142, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
          return kk_std_core_list_append(_x_x6141, ys_10731, _ctx);
        }
        {
          kk_reuse_drop(_ru_x3140,kk_context());
          kk_reuse_drop(_ru_x3142,kk_context());
          kk_string_drop(n, _ctx);
          kk_std_core_types__list_drop(body, _ctx);
          kk_std_core_types__list_drop(attrs, _ctx);
          { // tailcall
            nodes = rest;
            goto kk__tailcall;
          }
        }
      }
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x6145 = kk_std_core_types__as_Cons(nodes, _ctx);
    kk_box_t _box_x2335 = _con_x6145->head;
    kk_std_core_types__list rest_0 = _con_x6145->tail;
    kk_hml__types__hmlnode _pat_6 = kk_hml__types__hmlnode_unbox(_box_x2335, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(nodes, _ctx)) {
      kk_hml__types__hmlnode_drop(_pat_6, _ctx);
      kk_datatype_ptr_free(nodes, _ctx);
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_datatype_ptr_decref(nodes, _ctx);
    }
    { // tailcall
      nodes = rest_0;
      goto kk__tailcall;
    }
  }
}
 
// .hc:37

kk_std_core_types__maybe kk_api_hc__hml__str(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml_types/hml) -> maybe<string> */ 
  if (kk_hml__types__is_HStr(v, _ctx)) {
    struct kk_hml__types_HStr* _con_x6146 = kk_hml__types__as_HStr(v, _ctx);
    kk_string_t s = _con_x6146->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(s, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_core_types__new_Just(kk_string_box(s), _ctx);
  }
  {
    kk_hml__types__hml_drop(v, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:41

kk_std_core_types__maybe kk_api_hc__hml__int(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml_types/hml) -> maybe<int> */ 
  if (kk_hml__types__is_HInt(v, _ctx)) {
    struct kk_hml__types_HInt* _con_x6147 = kk_hml__types__as_HInt(v, _ctx);
    kk_integer_t n = _con_x6147->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_integer_dup(n, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_core_types__new_Just(kk_integer_box(n, _ctx), _ctx);
  }
  {
    kk_hml__types__hml_drop(v, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:46

kk_std_core_types__maybe kk_api_hc__hml__float(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml_types/hml) -> maybe<float64> */ 
  if (kk_hml__types__is_HFloat(v, _ctx)) {
    struct kk_hml__types_HFloat* _con_x6148 = kk_hml__types__as_HFloat(v, _ctx);
    double f = _con_x6148->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_core_types__new_Just(kk_double_box(f, _ctx), _ctx);
  }
  {
    kk_hml__types__hml_drop(v, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:51

kk_std_core_types__maybe kk_api_hc__hml__bool(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml_types/hml) -> maybe<bool> */ 
  if (kk_hml__types__is_HBool(v, _ctx)) {
    struct kk_hml__types_HBool* _con_x6149 = kk_hml__types__as_HBool(v, _ctx);
    bool b = _con_x6149->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_core_types__new_Just(kk_bool_box(b), _ctx);
  }
  {
    kk_hml__types__hml_drop(v, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:56

kk_std_core_types__maybe kk_api_hc__hml__duration(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml_types/hml) -> maybe<(int, string)> */ 
  if (kk_hml__types__is_HDuration(v, _ctx)) {
    struct kk_hml__types_HDuration* _con_x6150 = kk_hml__types__as_HDuration(v, _ctx);
    kk_integer_t amount = _con_x6150->amount;
    kk_string_t unit = _con_x6150->unit;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_integer_dup(amount, _ctx);
      kk_string_dup(unit, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_box_t _x_x6151;
    kk_std_core_types__tuple2 _x_x6152 = kk_std_core_types__new_Tuple2(kk_integer_box(amount, _ctx), kk_string_box(unit), _ctx); /*(10037, 10038)*/
    _x_x6151 = kk_std_core_types__tuple2_box(_x_x6152, _ctx); /*10024*/
    return kk_std_core_types__new_Just(_x_x6151, _ctx);
  }
  {
    kk_hml__types__hml_drop(v, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:61

kk_std_core_types__maybe kk_api_hc__hml__list(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml_types/hml) -> maybe<list<hml_types/hml>> */ 
  if (kk_hml__types__is_HArray(v, _ctx)) {
    struct kk_hml__types_HArray* _con_x6153 = kk_hml__types__as_HArray(v, _ctx);
    kk_std_core_types__list items = _con_x6153->items;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_std_core_types__list_dup(items, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_core_types__new_Just(kk_std_core_types__list_box(items, _ctx), _ctx);
  }
  {
    kk_hml__types__hml_drop(v, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:66

kk_std_core_types__maybe kk_api_hc__hml__body(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml_types/hml) -> maybe<list<hml_types/hmlnode>> */ 
  if (kk_hml__types__is_HElement(v, _ctx)) {
    struct kk_hml__types_HElement* _con_x6154 = kk_hml__types__as_HElement(v, _ctx);
    kk_string_t _pat_0 = _con_x6154->name;
    kk_std_core_types__list _pat_1 = _con_x6154->attrs;
    kk_std_core_types__list body = _con_x6154->body;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_std_core_types__list_dup(body, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_core_types__new_Just(kk_std_core_types__list_box(body, _ctx), _ctx);
  }
  {
    kk_hml__types__hml_drop(v, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:71

kk_std_core_types__maybe kk_api_hc__hml__attrs(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml_types/hml) -> maybe<list<(string, hml_types/hml)>> */ 
  if (kk_hml__types__is_HElement(v, _ctx)) {
    struct kk_hml__types_HElement* _con_x6155 = kk_hml__types__as_HElement(v, _ctx);
    kk_string_t _pat_0 = _con_x6155->name;
    kk_std_core_types__list attrs = _con_x6155->attrs;
    kk_std_core_types__list _pat_1 = _con_x6155->body;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_std_core_types__list_dup(attrs, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_core_types__new_Just(kk_std_core_types__list_box(attrs, _ctx), _ctx);
  }
  {
    kk_hml__types__hml_drop(v, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:81

kk_std_core_types__maybe kk_api_hc__find__attr(kk_std_core_types__list attrs, kk_string_t key, kk_context_t* _ctx) { /* (attrs : list<(string, hml_types/hml)>, key : string) -> div maybe<hml_types/hml> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(attrs, _ctx)) {
    kk_string_drop(key, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x6156 = kk_std_core_types__as_Cons(attrs, _ctx);
    kk_box_t _box_x2358 = _con_x6156->head;
    kk_std_core_types__tuple2 _pat_1 = kk_std_core_types__tuple2_unbox(_box_x2358, KK_BORROWED, _ctx);
    kk_box_t _box_x2359 = _pat_1.fst;
    kk_box_t _box_x2360 = _pat_1.snd;
    kk_std_core_types__list rest = _con_x6156->tail;
    kk_string_t k = kk_string_unbox(_box_x2359);
    kk_hml__types__hml v = kk_hml__types__hml_unbox(_box_x2360, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(attrs, _ctx)) {
      kk_string_dup(k, _ctx);
      kk_hml__types__hml_dup(v, _ctx);
      kk_box_drop(_box_x2358, _ctx);
      kk_datatype_ptr_free(attrs, _ctx);
    }
    else {
      kk_string_dup(k, _ctx);
      kk_std_core_types__list_dup(rest, _ctx);
      kk_hml__types__hml_dup(v, _ctx);
      kk_datatype_ptr_decref(attrs, _ctx);
    }
    bool _match_x2376;
    kk_string_t _x_x6157 = kk_string_dup(key, _ctx); /*string*/
    _match_x2376 = kk_string_is_eq(k,_x_x6157,kk_context()); /*bool*/
    if (_match_x2376) {
      kk_std_core_types__list_drop(rest, _ctx);
      kk_string_drop(key, _ctx);
      return kk_std_core_types__new_Just(kk_hml__types__hml_box(v, _ctx), _ctx);
    }
    {
      kk_hml__types__hml_drop(v, _ctx);
      { // tailcall
        attrs = rest;
        goto kk__tailcall;
      }
    }
  }
}
 
// .hc:76

kk_std_core_types__maybe kk_api_hc__hml__attr(kk_hml__types__hml v, kk_string_t key, kk_context_t* _ctx) { /* (v : hml_types/hml, key : string) -> div maybe<hml_types/hml> */ 
  if (kk_hml__types__is_HElement(v, _ctx)) {
    struct kk_hml__types_HElement* _con_x6158 = kk_hml__types__as_HElement(v, _ctx);
    kk_string_t _pat_0 = _con_x6158->name;
    kk_std_core_types__list attrs = _con_x6158->attrs;
    kk_std_core_types__list _pat_1 = _con_x6158->body;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_std_core_types__list_dup(attrs, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_api_hc__find__attr(attrs, key, _ctx);
  }
  {
    kk_hml__types__hml_drop(v, _ctx);
    kk_string_drop(key, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:93

kk_std_core_types__maybe kk_api_hc__hml__ok(kk_std_core_types__either r, kk_context_t* _ctx) { /* (r : either<string,list<hml_types/hmlnode>>) -> maybe<list<hml_types/hmlnode>> */ 
  if (kk_std_core_types__is_Right(r, _ctx)) {
    kk_box_t _box_x2363 = r._cons.Right.right;
    kk_std_core_types__list nodes = kk_std_core_types__list_unbox(_box_x2363, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(nodes, _ctx);
    kk_std_core_types__either_drop(r, _ctx);
    return kk_std_core_types__new_Just(kk_std_core_types__list_box(nodes, _ctx), _ctx);
  }
  {
    kk_box_t _box_x2365 = r._cons.Left.left;
    kk_std_core_types__either_drop(r, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:104

kk_std_core_types__maybe kk_api_hc__as__str(kk_std_core_types__maybe v, kk_context_t* _ctx) { /* (v : maybe<hml_types/hml>) -> maybe<string> */ 
  if (kk_std_core_types__is_Just(v, _ctx)) {
    kk_box_t _box_x2367 = v._cons.Just.value;
    kk_hml__types__hml h = kk_hml__types__hml_unbox(_box_x2367, KK_BORROWED, _ctx);
    kk_hml__types__hml_dup(h, _ctx);
    kk_std_core_types__maybe_drop(v, _ctx);
    if (kk_hml__types__is_HStr(h, _ctx)) {
      struct kk_hml__types_HStr* _con_x6159 = kk_hml__types__as_HStr(h, _ctx);
      kk_string_t s = _con_x6159->value;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_string_dup(s, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      return kk_std_core_types__new_Just(kk_string_box(s), _ctx);
    }
    {
      kk_hml__types__hml_drop(h, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:108

kk_std_core_types__maybe kk_api_hc__as__int(kk_std_core_types__maybe v, kk_context_t* _ctx) { /* (v : maybe<hml_types/hml>) -> maybe<int> */ 
  if (kk_std_core_types__is_Just(v, _ctx)) {
    kk_box_t _box_x2370 = v._cons.Just.value;
    kk_hml__types__hml h = kk_hml__types__hml_unbox(_box_x2370, KK_BORROWED, _ctx);
    kk_hml__types__hml_dup(h, _ctx);
    kk_std_core_types__maybe_drop(v, _ctx);
    if (kk_hml__types__is_HInt(h, _ctx)) {
      struct kk_hml__types_HInt* _con_x6160 = kk_hml__types__as_HInt(h, _ctx);
      kk_integer_t n = _con_x6160->value;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_integer_dup(n, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      return kk_std_core_types__new_Just(kk_integer_box(n, _ctx), _ctx);
    }
    {
      kk_hml__types__hml_drop(h, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// .hc:113

kk_std_core_types__maybe kk_api_hc__as__bool(kk_std_core_types__maybe v, kk_context_t* _ctx) { /* (v : maybe<hml_types/hml>) -> maybe<bool> */ 
  if (kk_std_core_types__is_Just(v, _ctx)) {
    kk_box_t _box_x2373 = v._cons.Just.value;
    kk_hml__types__hml h = kk_hml__types__hml_unbox(_box_x2373, KK_BORROWED, _ctx);
    kk_hml__types__hml_dup(h, _ctx);
    kk_std_core_types__maybe_drop(v, _ctx);
    if (kk_hml__types__is_HBool(h, _ctx)) {
      struct kk_hml__types_HBool* _con_x6161 = kk_hml__types__as_HBool(h, _ctx);
      bool b = _con_x6161->value;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_datatype_ptr_decref(h, _ctx);
      }
      return kk_std_core_types__new_Just(kk_bool_box(b), _ctx);
    }
    {
      kk_hml__types__hml_drop(h, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

// initialization
void kk_api__init(kk_context_t* _ctx){
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
  kk_std_num_float64__init(_ctx);
  kk_std_os_env__init(_ctx);
  kk_std_os_file__init(_ctx);
  kk_std_os_path__init(_ctx);
  kk_hml__types__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x3158;
    kk_define_string_literal(static, _s_x3159, 12, "hica-brk@api", _ctx)
    _x_x3158 = kk_string_dup(_s_x3159, _ctx); /*string*/
    kk_api_hica_brk_fs__tag = kk_std_core_hnd__new_Htag(_x_x3158, _ctx); /*hnd/htag<api/hica-brk>*/
  }
}

// termination
void kk_api__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_api_hica_brk_fs__tag, _ctx);
  kk_hml__types__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_os_file__done(_ctx);
  kk_std_os_env__done(_ctx);
  kk_std_num_float64__done(_ctx);
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
