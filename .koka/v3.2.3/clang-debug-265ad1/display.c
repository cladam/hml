// Koka generated module: display, koka version: 3.2.3, platform: 64-bit
#include "display.h"
 
// runtime tag for the effect `:hica-brk`

kk_std_core_hnd__htag kk_display_hica_brk_fs__tag;
 
// handler for the effect `:hica-brk`

kk_box_t kk_display_hica_brk_fs__handle(kk_display__hica_brk hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : hica-brk<e,b>, ret : (res : a) -> e b, action : () -> <hica-brk|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x3157 = kk_std_core_hnd__htag_dup(kk_display_hica_brk_fs__tag, _ctx); /*hnd/htag<display/hica-brk>*/
  return kk_std_core_hnd__hhandle(_x_x3157, kk_display__hica_brk_box(hnd, _ctx), ret, action, _ctx);
}


// lift anonymous function
struct kk_display_hc_assert_fun3163__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc_assert_fun3163(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc_assert_fun3163(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc_assert_fun3163, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc_assert_fun3163(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x3164;
  bool b_0_18 = kk_bool_unbox(_b_x11); /*bool*/;
  if (b_0_18) {
    _x_x3164 = false; /*bool*/
  }
  else {
    _x_x3164 = true; /*bool*/
  }
  return kk_bool_box(_x_x3164);
}

kk_unit_t kk_display_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x2990;
  kk_box_t _x_x3162 = kk_std_core_hnd__open_none1(kk_display_new_hc_assert_fun3163(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x2990 = kk_bool_unbox(_x_x3162); /*bool*/
  if (_match_x2990) {
    kk_box_t _x_x3165;
    kk_string_t _x_x3166;
    kk_define_string_literal(static, _s_x3167, 16, "assertion failed", _ctx)
    _x_x3166 = kk_string_dup(_s_x3167, _ctx); /*string*/
    _x_x3165 = kk_std_core_exn_throw(_x_x3166, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x3165); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}

kk_display__cliflag kk_display_cliflag_fs__copy(kk_display__cliflag _this, kk_std_core_types__optional flag__name, kk_std_core_types__optional flag__short, kk_std_core_types__optional flag__help, kk_context_t* _ctx) { /* (cliflag, flag_name : ? string, flag_short : ? string, flag_help : ? string) -> cliflag */ 
  kk_string_t _x_x3174;
  if (kk_std_core_types__is_Optional(flag__name, _ctx)) {
    kk_box_t _box_x19 = flag__name._cons._Optional.value;
    kk_string_t _uniq_flag__name_926 = kk_string_unbox(_box_x19);
    kk_string_dup(_uniq_flag__name_926, _ctx);
    kk_std_core_types__optional_drop(flag__name, _ctx);
    _x_x3174 = _uniq_flag__name_926; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__name, _ctx);
    {
      struct kk_display_Cliflag* _con_x3175 = kk_display__as_Cliflag(_this, _ctx);
      kk_string_t _x = _con_x3175->flag__name;
      kk_string_dup(_x, _ctx);
      _x_x3174 = _x; /*string*/
    }
  }
  kk_string_t _x_x3176;
  if (kk_std_core_types__is_Optional(flag__short, _ctx)) {
    kk_box_t _box_x20 = flag__short._cons._Optional.value;
    kk_string_t _uniq_flag__short_934 = kk_string_unbox(_box_x20);
    kk_string_dup(_uniq_flag__short_934, _ctx);
    kk_std_core_types__optional_drop(flag__short, _ctx);
    _x_x3176 = _uniq_flag__short_934; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__short, _ctx);
    {
      struct kk_display_Cliflag* _con_x3177 = kk_display__as_Cliflag(_this, _ctx);
      kk_string_t _x_0 = _con_x3177->flag__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3176 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3178;
  if (kk_std_core_types__is_Optional(flag__help, _ctx)) {
    kk_box_t _box_x21 = flag__help._cons._Optional.value;
    kk_string_t _uniq_flag__help_942 = kk_string_unbox(_box_x21);
    kk_string_dup(_uniq_flag__help_942, _ctx);
    kk_std_core_types__optional_drop(flag__help, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x3178 = _uniq_flag__help_942; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__help, _ctx);
    {
      struct kk_display_Cliflag* _con_x3179 = kk_display__as_Cliflag(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3179->flag__name;
      kk_string_t _pat_1_3 = _con_x3179->flag__short;
      kk_string_t _x_1 = _con_x3179->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3178 = _x_1; /*string*/
    }
  }
  return kk_display__new_Cliflag(kk_reuse_null, 0, _x_x3174, _x_x3176, _x_x3178, _ctx);
}

kk_string_t kk_display_cliflag_fs_show(kk_display__cliflag p, kk_context_t* _ctx) { /* (p : cliflag) -> string */ 
  kk_string_t _x_x3180;
  kk_define_string_literal(static, _s_x3181, 8, "CliFlag(", _ctx)
  _x_x3180 = kk_string_dup(_s_x3181, _ctx); /*string*/
  kk_string_t _x_x3182;
  kk_string_t _x_x3183;
  kk_define_string_literal(static, _s_x3184, 11, "flag_name: ", _ctx)
  _x_x3183 = kk_string_dup(_s_x3184, _ctx); /*string*/
  kk_string_t _x_x3185;
  kk_string_t _x_x3186;
  {
    struct kk_display_Cliflag* _con_x3187 = kk_display__as_Cliflag(p, _ctx);
    kk_string_t _x = _con_x3187->flag__name;
    kk_string_dup(_x, _ctx);
    _x_x3186 = _x; /*string*/
  }
  kk_string_t _x_x3188;
  kk_string_t _x_x3189;
  kk_define_string_literal(static, _s_x3190, 2, ", ", _ctx)
  _x_x3189 = kk_string_dup(_s_x3190, _ctx); /*string*/
  kk_string_t _x_x3191;
  kk_string_t _x_x3192;
  kk_define_string_literal(static, _s_x3193, 12, "flag_short: ", _ctx)
  _x_x3192 = kk_string_dup(_s_x3193, _ctx); /*string*/
  kk_string_t _x_x3194;
  kk_string_t _x_x3195;
  {
    struct kk_display_Cliflag* _con_x3196 = kk_display__as_Cliflag(p, _ctx);
    kk_string_t _x_0 = _con_x3196->flag__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3195 = _x_0; /*string*/
  }
  kk_string_t _x_x3197;
  kk_string_t _x_x3198;
  kk_define_string_literal(static, _s_x3199, 2, ", ", _ctx)
  _x_x3198 = kk_string_dup(_s_x3199, _ctx); /*string*/
  kk_string_t _x_x3200;
  kk_string_t _x_x3201;
  kk_define_string_literal(static, _s_x3202, 11, "flag_help: ", _ctx)
  _x_x3201 = kk_string_dup(_s_x3202, _ctx); /*string*/
  kk_string_t _x_x3203;
  kk_string_t _x_x3204;
  {
    struct kk_display_Cliflag* _con_x3205 = kk_display__as_Cliflag(p, _ctx);
    kk_string_t _pat_0_1 = _con_x3205->flag__name;
    kk_string_t _pat_1_1 = _con_x3205->flag__short;
    kk_string_t _x_1 = _con_x3205->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _x_x3204 = _x_1; /*string*/
  }
  kk_string_t _x_x3206;
  kk_define_string_literal(static, _s_x3207, 1, ")", _ctx)
  _x_x3206 = kk_string_dup(_s_x3207, _ctx); /*string*/
  _x_x3203 = kk_std_core_types__lp__plus__plus__rp_(_x_x3204, _x_x3206, _ctx); /*string*/
  _x_x3200 = kk_std_core_types__lp__plus__plus__rp_(_x_x3201, _x_x3203, _ctx); /*string*/
  _x_x3197 = kk_std_core_types__lp__plus__plus__rp_(_x_x3198, _x_x3200, _ctx); /*string*/
  _x_x3194 = kk_std_core_types__lp__plus__plus__rp_(_x_x3195, _x_x3197, _ctx); /*string*/
  _x_x3191 = kk_std_core_types__lp__plus__plus__rp_(_x_x3192, _x_x3194, _ctx); /*string*/
  _x_x3188 = kk_std_core_types__lp__plus__plus__rp_(_x_x3189, _x_x3191, _ctx); /*string*/
  _x_x3185 = kk_std_core_types__lp__plus__plus__rp_(_x_x3186, _x_x3188, _ctx); /*string*/
  _x_x3182 = kk_std_core_types__lp__plus__plus__rp_(_x_x3183, _x_x3185, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3180, _x_x3182, _ctx);
}

kk_display__clioption kk_display_clioption_fs__copy(kk_display__clioption _this, kk_std_core_types__optional opt__name, kk_std_core_types__optional opt__short, kk_std_core_types__optional opt__help, kk_std_core_types__optional opt__default, kk_context_t* _ctx) { /* (clioption, opt_name : ? string, opt_short : ? string, opt_help : ? string, opt_default : ? string) -> clioption */ 
  kk_string_t _x_x3212;
  if (kk_std_core_types__is_Optional(opt__name, _ctx)) {
    kk_box_t _box_x22 = opt__name._cons._Optional.value;
    kk_string_t _uniq_opt__name_1089 = kk_string_unbox(_box_x22);
    kk_string_dup(_uniq_opt__name_1089, _ctx);
    kk_std_core_types__optional_drop(opt__name, _ctx);
    _x_x3212 = _uniq_opt__name_1089; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__name, _ctx);
    {
      struct kk_display_Clioption* _con_x3213 = kk_display__as_Clioption(_this, _ctx);
      kk_string_t _x = _con_x3213->opt__name;
      kk_string_dup(_x, _ctx);
      _x_x3212 = _x; /*string*/
    }
  }
  kk_string_t _x_x3214;
  if (kk_std_core_types__is_Optional(opt__short, _ctx)) {
    kk_box_t _box_x23 = opt__short._cons._Optional.value;
    kk_string_t _uniq_opt__short_1097 = kk_string_unbox(_box_x23);
    kk_string_dup(_uniq_opt__short_1097, _ctx);
    kk_std_core_types__optional_drop(opt__short, _ctx);
    _x_x3214 = _uniq_opt__short_1097; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__short, _ctx);
    {
      struct kk_display_Clioption* _con_x3215 = kk_display__as_Clioption(_this, _ctx);
      kk_string_t _x_0 = _con_x3215->opt__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3214 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3216;
  if (kk_std_core_types__is_Optional(opt__help, _ctx)) {
    kk_box_t _box_x24 = opt__help._cons._Optional.value;
    kk_string_t _uniq_opt__help_1105 = kk_string_unbox(_box_x24);
    kk_string_dup(_uniq_opt__help_1105, _ctx);
    kk_std_core_types__optional_drop(opt__help, _ctx);
    _x_x3216 = _uniq_opt__help_1105; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__help, _ctx);
    {
      struct kk_display_Clioption* _con_x3217 = kk_display__as_Clioption(_this, _ctx);
      kk_string_t _x_1 = _con_x3217->opt__help;
      kk_string_dup(_x_1, _ctx);
      _x_x3216 = _x_1; /*string*/
    }
  }
  kk_string_t _x_x3218;
  if (kk_std_core_types__is_Optional(opt__default, _ctx)) {
    kk_box_t _box_x25 = opt__default._cons._Optional.value;
    kk_string_t _uniq_opt__default_1113 = kk_string_unbox(_box_x25);
    kk_string_dup(_uniq_opt__default_1113, _ctx);
    kk_std_core_types__optional_drop(opt__default, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(4)), _ctx);
    _x_x3218 = _uniq_opt__default_1113; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__default, _ctx);
    {
      struct kk_display_Clioption* _con_x3219 = kk_display__as_Clioption(_this, _ctx);
      kk_string_t _pat_0_3 = _con_x3219->opt__name;
      kk_string_t _pat_1_4 = _con_x3219->opt__short;
      kk_string_t _pat_2_3 = _con_x3219->opt__help;
      kk_string_t _x_2 = _con_x3219->opt__default;
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
      _x_x3218 = _x_2; /*string*/
    }
  }
  return kk_display__new_Clioption(kk_reuse_null, 0, _x_x3212, _x_x3214, _x_x3216, _x_x3218, _ctx);
}

kk_string_t kk_display_clioption_fs_show(kk_display__clioption p, kk_context_t* _ctx) { /* (p : clioption) -> string */ 
  kk_string_t _x_x3220;
  kk_define_string_literal(static, _s_x3221, 10, "CliOption(", _ctx)
  _x_x3220 = kk_string_dup(_s_x3221, _ctx); /*string*/
  kk_string_t _x_x3222;
  kk_string_t _x_x3223;
  kk_define_string_literal(static, _s_x3224, 10, "opt_name: ", _ctx)
  _x_x3223 = kk_string_dup(_s_x3224, _ctx); /*string*/
  kk_string_t _x_x3225;
  kk_string_t _x_x3226;
  {
    struct kk_display_Clioption* _con_x3227 = kk_display__as_Clioption(p, _ctx);
    kk_string_t _x = _con_x3227->opt__name;
    kk_string_dup(_x, _ctx);
    _x_x3226 = _x; /*string*/
  }
  kk_string_t _x_x3228;
  kk_string_t _x_x3229;
  kk_define_string_literal(static, _s_x3230, 2, ", ", _ctx)
  _x_x3229 = kk_string_dup(_s_x3230, _ctx); /*string*/
  kk_string_t _x_x3231;
  kk_string_t _x_x3232;
  kk_define_string_literal(static, _s_x3233, 11, "opt_short: ", _ctx)
  _x_x3232 = kk_string_dup(_s_x3233, _ctx); /*string*/
  kk_string_t _x_x3234;
  kk_string_t _x_x3235;
  {
    struct kk_display_Clioption* _con_x3236 = kk_display__as_Clioption(p, _ctx);
    kk_string_t _x_0 = _con_x3236->opt__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3235 = _x_0; /*string*/
  }
  kk_string_t _x_x3237;
  kk_string_t _x_x3238;
  kk_define_string_literal(static, _s_x3239, 2, ", ", _ctx)
  _x_x3238 = kk_string_dup(_s_x3239, _ctx); /*string*/
  kk_string_t _x_x3240;
  kk_string_t _x_x3241;
  kk_define_string_literal(static, _s_x3242, 10, "opt_help: ", _ctx)
  _x_x3241 = kk_string_dup(_s_x3242, _ctx); /*string*/
  kk_string_t _x_x3243;
  kk_string_t _x_x3244;
  {
    struct kk_display_Clioption* _con_x3245 = kk_display__as_Clioption(p, _ctx);
    kk_string_t _x_1 = _con_x3245->opt__help;
    kk_string_dup(_x_1, _ctx);
    _x_x3244 = _x_1; /*string*/
  }
  kk_string_t _x_x3246;
  kk_string_t _x_x3247;
  kk_define_string_literal(static, _s_x3248, 2, ", ", _ctx)
  _x_x3247 = kk_string_dup(_s_x3248, _ctx); /*string*/
  kk_string_t _x_x3249;
  kk_string_t _x_x3250;
  kk_define_string_literal(static, _s_x3251, 13, "opt_default: ", _ctx)
  _x_x3250 = kk_string_dup(_s_x3251, _ctx); /*string*/
  kk_string_t _x_x3252;
  kk_string_t _x_x3253;
  {
    struct kk_display_Clioption* _con_x3254 = kk_display__as_Clioption(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3254->opt__name;
    kk_string_t _pat_1_2 = _con_x3254->opt__short;
    kk_string_t _pat_2_2 = _con_x3254->opt__help;
    kk_string_t _x_2 = _con_x3254->opt__default;
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
    _x_x3253 = _x_2; /*string*/
  }
  kk_string_t _x_x3255;
  kk_define_string_literal(static, _s_x3256, 1, ")", _ctx)
  _x_x3255 = kk_string_dup(_s_x3256, _ctx); /*string*/
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
  _x_x3222 = kk_std_core_types__lp__plus__plus__rp_(_x_x3223, _x_x3225, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3220, _x_x3222, _ctx);
}

kk_display__cliarg kk_display_cliarg_fs__copy(kk_display__cliarg _this, kk_std_core_types__optional arg__name, kk_std_core_types__optional arg__help, kk_std_core_types__optional arg__required, kk_context_t* _ctx) { /* (cliarg, arg_name : ? string, arg_help : ? string, arg_required : ? bool) -> cliarg */ 
  kk_string_t _x_x3260;
  if (kk_std_core_types__is_Optional(arg__name, _ctx)) {
    kk_box_t _box_x26 = arg__name._cons._Optional.value;
    kk_string_t _uniq_arg__name_1284 = kk_string_unbox(_box_x26);
    kk_string_dup(_uniq_arg__name_1284, _ctx);
    kk_std_core_types__optional_drop(arg__name, _ctx);
    _x_x3260 = _uniq_arg__name_1284; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__name, _ctx);
    {
      struct kk_display_Cliarg* _con_x3261 = kk_display__as_Cliarg(_this, _ctx);
      kk_string_t _x = _con_x3261->arg__name;
      kk_string_dup(_x, _ctx);
      _x_x3260 = _x; /*string*/
    }
  }
  kk_string_t _x_x3262;
  if (kk_std_core_types__is_Optional(arg__help, _ctx)) {
    kk_box_t _box_x27 = arg__help._cons._Optional.value;
    kk_string_t _uniq_arg__help_1292 = kk_string_unbox(_box_x27);
    kk_string_dup(_uniq_arg__help_1292, _ctx);
    kk_std_core_types__optional_drop(arg__help, _ctx);
    _x_x3262 = _uniq_arg__help_1292; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__help, _ctx);
    {
      struct kk_display_Cliarg* _con_x3263 = kk_display__as_Cliarg(_this, _ctx);
      kk_string_t _x_0 = _con_x3263->arg__help;
      kk_string_dup(_x_0, _ctx);
      _x_x3262 = _x_0; /*string*/
    }
  }
  bool _x_x3264;
  if (kk_std_core_types__is_Optional(arg__required, _ctx)) {
    kk_box_t _box_x28 = arg__required._cons._Optional.value;
    bool _uniq_arg__required_1300 = kk_bool_unbox(_box_x28);
    kk_std_core_types__optional_drop(arg__required, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x3264 = _uniq_arg__required_1300; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(arg__required, _ctx);
    {
      struct kk_display_Cliarg* _con_x3265 = kk_display__as_Cliarg(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3265->arg__name;
      kk_string_t _pat_1_3 = _con_x3265->arg__help;
      bool _x_1 = _con_x3265->arg__required;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3264 = _x_1; /*bool*/
    }
  }
  return kk_display__new_Cliarg(kk_reuse_null, 0, _x_x3260, _x_x3262, _x_x3264, _ctx);
}

kk_display__clispec kk_display_clispec_fs__copy(kk_display__clispec _this, kk_std_core_types__optional app__name, kk_std_core_types__optional app__version, kk_std_core_types__optional app__about, kk_std_core_types__optional app__flags, kk_std_core_types__optional app__options, kk_std_core_types__optional app__args, kk_std_core_types__optional app__commands, kk_context_t* _ctx) { /* (clispec, app_name : ? string, app_version : ? string, app_about : ? string, app_flags : ? (list<cliflag>), app_options : ? (list<clioption>), app_args : ? (list<cliarg>), app_commands : ? (list<(string, clispec)>)) -> clispec */ 
  kk_string_t _x_x3273;
  if (kk_std_core_types__is_Optional(app__name, _ctx)) {
    kk_box_t _box_x29 = app__name._cons._Optional.value;
    kk_string_t _uniq_app__name_1374 = kk_string_unbox(_box_x29);
    kk_string_dup(_uniq_app__name_1374, _ctx);
    kk_std_core_types__optional_drop(app__name, _ctx);
    _x_x3273 = _uniq_app__name_1374; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__name, _ctx);
    {
      struct kk_display_Clispec* _con_x3274 = kk_display__as_Clispec(_this, _ctx);
      kk_string_t _x = _con_x3274->app__name;
      kk_string_dup(_x, _ctx);
      _x_x3273 = _x; /*string*/
    }
  }
  kk_string_t _x_x3275;
  if (kk_std_core_types__is_Optional(app__version, _ctx)) {
    kk_box_t _box_x30 = app__version._cons._Optional.value;
    kk_string_t _uniq_app__version_1382 = kk_string_unbox(_box_x30);
    kk_string_dup(_uniq_app__version_1382, _ctx);
    kk_std_core_types__optional_drop(app__version, _ctx);
    _x_x3275 = _uniq_app__version_1382; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__version, _ctx);
    {
      struct kk_display_Clispec* _con_x3276 = kk_display__as_Clispec(_this, _ctx);
      kk_string_t _x_0 = _con_x3276->app__version;
      kk_string_dup(_x_0, _ctx);
      _x_x3275 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3277;
  if (kk_std_core_types__is_Optional(app__about, _ctx)) {
    kk_box_t _box_x31 = app__about._cons._Optional.value;
    kk_string_t _uniq_app__about_1390 = kk_string_unbox(_box_x31);
    kk_string_dup(_uniq_app__about_1390, _ctx);
    kk_std_core_types__optional_drop(app__about, _ctx);
    _x_x3277 = _uniq_app__about_1390; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__about, _ctx);
    {
      struct kk_display_Clispec* _con_x3278 = kk_display__as_Clispec(_this, _ctx);
      kk_string_t _x_1 = _con_x3278->app__about;
      kk_string_dup(_x_1, _ctx);
      _x_x3277 = _x_1; /*string*/
    }
  }
  kk_std_core_types__list _x_x3279;
  if (kk_std_core_types__is_Optional(app__flags, _ctx)) {
    kk_box_t _box_x32 = app__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_app__flags_1398 = kk_std_core_types__list_unbox(_box_x32, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__flags_1398, _ctx);
    kk_std_core_types__optional_drop(app__flags, _ctx);
    _x_x3279 = _uniq_app__flags_1398; /*list<display/cliflag>*/
  }
  else {
    kk_std_core_types__optional_drop(app__flags, _ctx);
    {
      struct kk_display_Clispec* _con_x3280 = kk_display__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3280->app__flags;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3279 = _x_2; /*list<display/cliflag>*/
    }
  }
  kk_std_core_types__list _x_x3281;
  if (kk_std_core_types__is_Optional(app__options, _ctx)) {
    kk_box_t _box_x33 = app__options._cons._Optional.value;
    kk_std_core_types__list _uniq_app__options_1406 = kk_std_core_types__list_unbox(_box_x33, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__options_1406, _ctx);
    kk_std_core_types__optional_drop(app__options, _ctx);
    _x_x3281 = _uniq_app__options_1406; /*list<display/clioption>*/
  }
  else {
    kk_std_core_types__optional_drop(app__options, _ctx);
    {
      struct kk_display_Clispec* _con_x3282 = kk_display__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_3 = _con_x3282->app__options;
      kk_std_core_types__list_dup(_x_3, _ctx);
      _x_x3281 = _x_3; /*list<display/clioption>*/
    }
  }
  kk_std_core_types__list _x_x3283;
  if (kk_std_core_types__is_Optional(app__args, _ctx)) {
    kk_box_t _box_x34 = app__args._cons._Optional.value;
    kk_std_core_types__list _uniq_app__args_1414 = kk_std_core_types__list_unbox(_box_x34, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__args_1414, _ctx);
    kk_std_core_types__optional_drop(app__args, _ctx);
    _x_x3283 = _uniq_app__args_1414; /*list<display/cliarg>*/
  }
  else {
    kk_std_core_types__optional_drop(app__args, _ctx);
    {
      struct kk_display_Clispec* _con_x3284 = kk_display__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_4 = _con_x3284->app__args;
      kk_std_core_types__list_dup(_x_4, _ctx);
      _x_x3283 = _x_4; /*list<display/cliarg>*/
    }
  }
  kk_std_core_types__list _x_x3285;
  if (kk_std_core_types__is_Optional(app__commands, _ctx)) {
    kk_box_t _box_x35 = app__commands._cons._Optional.value;
    kk_std_core_types__list _uniq_app__commands_1422 = kk_std_core_types__list_unbox(_box_x35, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__commands_1422, _ctx);
    kk_std_core_types__optional_drop(app__commands, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(7)), _ctx);
    _x_x3285 = _uniq_app__commands_1422; /*list<(string, display/clispec)>*/
  }
  else {
    kk_std_core_types__optional_drop(app__commands, _ctx);
    {
      struct kk_display_Clispec* _con_x3286 = kk_display__as_Clispec(_this, _ctx);
      kk_string_t _pat_0_6 = _con_x3286->app__name;
      kk_string_t _pat_1_7 = _con_x3286->app__version;
      kk_string_t _pat_2_6 = _con_x3286->app__about;
      kk_std_core_types__list _pat_3_6 = _con_x3286->app__flags;
      kk_std_core_types__list _pat_4_6 = _con_x3286->app__options;
      kk_std_core_types__list _pat_5_6 = _con_x3286->app__args;
      kk_std_core_types__list _x_5 = _con_x3286->app__commands;
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
      _x_x3285 = _x_5; /*list<(string, display/clispec)>*/
    }
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x3273, _x_x3275, _x_x3277, _x_x3279, _x_x3281, _x_x3283, _x_x3285, _ctx);
}

kk_display__cliresult kk_display_cliresult_fs__copy(kk_display__cliresult _this, kk_std_core_types__optional cli__flags, kk_std_core_types__optional cli__options, kk_std_core_types__optional cli__positionals, kk_std_core_types__optional cli__command, kk_std_core_types__optional cli__sub, kk_context_t* _ctx) { /* (cliresult, cli_flags : ? (list<string>), cli_options : ? (list<(string, string)>), cli_positionals : ? (list<string>), cli_command : ? string, cli_sub : ? (maybe<cliresult>)) -> cliresult */ 
  kk_std_core_types__list _x_x3292;
  if (kk_std_core_types__is_Optional(cli__flags, _ctx)) {
    kk_box_t _box_x36 = cli__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__flags_1484 = kk_std_core_types__list_unbox(_box_x36, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__flags_1484, _ctx);
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    _x_x3292 = _uniq_cli__flags_1484; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    {
      struct kk_display_Cliresult* _con_x3293 = kk_display__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x = _con_x3293->cli__flags;
      kk_std_core_types__list_dup(_x, _ctx);
      _x_x3292 = _x; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3294;
  if (kk_std_core_types__is_Optional(cli__options, _ctx)) {
    kk_box_t _box_x37 = cli__options._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__options_1492 = kk_std_core_types__list_unbox(_box_x37, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__options_1492, _ctx);
    kk_std_core_types__optional_drop(cli__options, _ctx);
    _x_x3294 = _uniq_cli__options_1492; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__options, _ctx);
    {
      struct kk_display_Cliresult* _con_x3295 = kk_display__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3295->cli__options;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3294 = _x_0; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3296;
  if (kk_std_core_types__is_Optional(cli__positionals, _ctx)) {
    kk_box_t _box_x38 = cli__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__positionals_1500 = kk_std_core_types__list_unbox(_box_x38, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__positionals_1500, _ctx);
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    _x_x3296 = _uniq_cli__positionals_1500; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    {
      struct kk_display_Cliresult* _con_x3297 = kk_display__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3297->cli__positionals;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3296 = _x_1; /*list<string>*/
    }
  }
  kk_string_t _x_x3298;
  if (kk_std_core_types__is_Optional(cli__command, _ctx)) {
    kk_box_t _box_x39 = cli__command._cons._Optional.value;
    kk_string_t _uniq_cli__command_1508 = kk_string_unbox(_box_x39);
    kk_string_dup(_uniq_cli__command_1508, _ctx);
    kk_std_core_types__optional_drop(cli__command, _ctx);
    _x_x3298 = _uniq_cli__command_1508; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(cli__command, _ctx);
    {
      struct kk_display_Cliresult* _con_x3299 = kk_display__as_Cliresult(_this, _ctx);
      kk_string_t _x_2 = _con_x3299->cli__command;
      kk_string_dup(_x_2, _ctx);
      _x_x3298 = _x_2; /*string*/
    }
  }
  kk_std_core_types__maybe _x_x3300;
  if (kk_std_core_types__is_Optional(cli__sub, _ctx)) {
    kk_box_t _box_x40 = cli__sub._cons._Optional.value;
    kk_std_core_types__maybe _uniq_cli__sub_1516 = kk_std_core_types__maybe_unbox(_box_x40, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_dup(_uniq_cli__sub_1516, _ctx);
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3300 = _uniq_cli__sub_1516; /*maybe<display/cliresult>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    {
      struct kk_display_Cliresult* _con_x3301 = kk_display__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _pat_0_4 = _con_x3301->cli__flags;
      kk_std_core_types__list _pat_1_5 = _con_x3301->cli__options;
      kk_std_core_types__list _pat_2_4 = _con_x3301->cli__positionals;
      kk_string_t _pat_3_4 = _con_x3301->cli__command;
      kk_std_core_types__maybe _x_3 = _con_x3301->cli__sub;
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
      _x_x3300 = _x_3; /*maybe<display/cliresult>*/
    }
  }
  return kk_display__new_Cliresult(kk_reuse_null, 0, _x_x3292, _x_x3294, _x_x3296, _x_x3298, _x_x3300, _ctx);
}

kk_string_t kk_display_cliarg_fs_show(kk_display__cliarg p, kk_context_t* _ctx) { /* (p : cliarg) -> string */ 
  kk_string_t _x_x3308;
  kk_define_string_literal(static, _s_x3309, 7, "CliArg(", _ctx)
  _x_x3308 = kk_string_dup(_s_x3309, _ctx); /*string*/
  kk_string_t _x_x3310;
  kk_string_t _x_x3311;
  kk_define_string_literal(static, _s_x3312, 10, "arg_name: ", _ctx)
  _x_x3311 = kk_string_dup(_s_x3312, _ctx); /*string*/
  kk_string_t _x_x3313;
  kk_string_t _x_x3314;
  {
    struct kk_display_Cliarg* _con_x3315 = kk_display__as_Cliarg(p, _ctx);
    kk_string_t _x = _con_x3315->arg__name;
    kk_string_dup(_x, _ctx);
    _x_x3314 = _x; /*string*/
  }
  kk_string_t _x_x3316;
  kk_string_t _x_x3317;
  kk_define_string_literal(static, _s_x3318, 2, ", ", _ctx)
  _x_x3317 = kk_string_dup(_s_x3318, _ctx); /*string*/
  kk_string_t _x_x3319;
  kk_string_t _x_x3320;
  kk_define_string_literal(static, _s_x3321, 10, "arg_help: ", _ctx)
  _x_x3320 = kk_string_dup(_s_x3321, _ctx); /*string*/
  kk_string_t _x_x3322;
  kk_string_t _x_x3323;
  {
    struct kk_display_Cliarg* _con_x3324 = kk_display__as_Cliarg(p, _ctx);
    kk_string_t _x_0 = _con_x3324->arg__help;
    kk_string_dup(_x_0, _ctx);
    _x_x3323 = _x_0; /*string*/
  }
  kk_string_t _x_x3325;
  kk_string_t _x_x3326;
  kk_define_string_literal(static, _s_x3327, 2, ", ", _ctx)
  _x_x3326 = kk_string_dup(_s_x3327, _ctx); /*string*/
  kk_string_t _x_x3328;
  kk_string_t _x_x3329;
  kk_define_string_literal(static, _s_x3330, 14, "arg_required: ", _ctx)
  _x_x3329 = kk_string_dup(_s_x3330, _ctx); /*string*/
  kk_string_t _x_x3331;
  kk_string_t _x_x3332;
  {
    struct kk_display_Cliarg* _con_x3333 = kk_display__as_Cliarg(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3333->arg__name;
    kk_string_t _pat_1_1 = _con_x3333->arg__help;
    bool _x_1 = _con_x3333->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_datatype_ptr_decref(p, _ctx);
    }
    if (_x_1) {
      kk_define_string_literal(static, _s_x3334, 4, "True", _ctx)
      _x_x3332 = kk_string_dup(_s_x3334, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(static, _s_x3335, 5, "False", _ctx)
      _x_x3332 = kk_string_dup(_s_x3335, _ctx); /*string*/
    }
  }
  kk_string_t _x_x3336;
  kk_define_string_literal(static, _s_x3337, 1, ")", _ctx)
  _x_x3336 = kk_string_dup(_s_x3337, _ctx); /*string*/
  _x_x3331 = kk_std_core_types__lp__plus__plus__rp_(_x_x3332, _x_x3336, _ctx); /*string*/
  _x_x3328 = kk_std_core_types__lp__plus__plus__rp_(_x_x3329, _x_x3331, _ctx); /*string*/
  _x_x3325 = kk_std_core_types__lp__plus__plus__rp_(_x_x3326, _x_x3328, _ctx); /*string*/
  _x_x3322 = kk_std_core_types__lp__plus__plus__rp_(_x_x3323, _x_x3325, _ctx); /*string*/
  _x_x3319 = kk_std_core_types__lp__plus__plus__rp_(_x_x3320, _x_x3322, _ctx); /*string*/
  _x_x3316 = kk_std_core_types__lp__plus__plus__rp_(_x_x3317, _x_x3319, _ctx); /*string*/
  _x_x3313 = kk_std_core_types__lp__plus__plus__rp_(_x_x3314, _x_x3316, _ctx); /*string*/
  _x_x3310 = kk_std_core_types__lp__plus__plus__rp_(_x_x3311, _x_x3313, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3308, _x_x3310, _ctx);
}


// lift anonymous function
struct kk_display_cliresult_fs_show_fun3343__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_cliresult_fs_show_fun3343(kk_function_t _fself, kk_string_t _x1_x3342, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3343(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_cliresult_fs_show_fun3343, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_cliresult_fs_show_fun3343(kk_function_t _fself, kk_string_t _x1_x3342, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3342, _ctx);
}


// lift anonymous function
struct kk_display_cliresult_fs_show_fun3348__t {
  struct kk_function_s _base;
  kk_function_t _b_x42_59;
};
static kk_string_t kk_display_cliresult_fs_show_fun3348(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3348(kk_function_t _b_x42_59, kk_context_t* _ctx) {
  struct kk_display_cliresult_fs_show_fun3348__t* _self = kk_function_alloc_as(struct kk_display_cliresult_fs_show_fun3348__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_cliresult_fs_show_fun3348, kk_context());
  _self->_b_x42_59 = _b_x42_59;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_cliresult_fs_show_fun3348(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx) {
  struct kk_display_cliresult_fs_show_fun3348__t* _self = kk_function_as(struct kk_display_cliresult_fs_show_fun3348__t*, _fself, _ctx);
  kk_function_t _b_x42_59 = _self->_b_x42_59; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x42_59, _ctx);}, {}, _ctx)
  kk_string_t _x_x3349 = kk_string_unbox(_b_x43); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x42_59, (_b_x42_59, _x_x3349, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_cliresult_fs_show_fun3355__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_cliresult_fs_show_fun3355(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3355(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_cliresult_fs_show_fun3355, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_cliresult_fs_show_fun3356__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_cliresult_fs_show_fun3356(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3356(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_cliresult_fs_show_fun3356, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_cliresult_fs_show_fun3356(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3357 = kk_string_unbox(_b_x47); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3357, _ctx);
}


// lift anonymous function
struct kk_display_cliresult_fs_show_fun3358__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_cliresult_fs_show_fun3358(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3358(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_cliresult_fs_show_fun3358, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_cliresult_fs_show_fun3358(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3359 = kk_string_unbox(_b_x48); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3359, _ctx);
}
static kk_string_t kk_display_cliresult_fs_show_fun3355(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_display_cliresult_fs_new_show_fun3356(_ctx), kk_display_cliresult_fs_new_show_fun3358(_ctx), _ctx);
}


// lift anonymous function
struct kk_display_cliresult_fs_show_fun3364__t {
  struct kk_function_s _base;
  kk_function_t _b_x50_61;
};
static kk_string_t kk_display_cliresult_fs_show_fun3364(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3364(kk_function_t _b_x50_61, kk_context_t* _ctx) {
  struct kk_display_cliresult_fs_show_fun3364__t* _self = kk_function_alloc_as(struct kk_display_cliresult_fs_show_fun3364__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_cliresult_fs_show_fun3364, kk_context());
  _self->_b_x50_61 = _b_x50_61;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_cliresult_fs_show_fun3364(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  struct kk_display_cliresult_fs_show_fun3364__t* _self = kk_function_as(struct kk_display_cliresult_fs_show_fun3364__t*, _fself, _ctx);
  kk_function_t _b_x50_61 = _self->_b_x50_61; /* ((string, string)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x50_61, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3365 = kk_std_core_types__tuple2_unbox(_b_x51, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x50_61, (_b_x50_61, _x_x3365, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_cliresult_fs_show_fun3372__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_cliresult_fs_show_fun3372(kk_function_t _fself, kk_string_t _x1_x3371, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3372(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_cliresult_fs_show_fun3372, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_cliresult_fs_show_fun3372(kk_function_t _fself, kk_string_t _x1_x3371, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3371, _ctx);
}


// lift anonymous function
struct kk_display_cliresult_fs_show_fun3377__t {
  struct kk_function_s _base;
  kk_function_t _b_x53_66;
};
static kk_string_t kk_display_cliresult_fs_show_fun3377(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3377(kk_function_t _b_x53_66, kk_context_t* _ctx) {
  struct kk_display_cliresult_fs_show_fun3377__t* _self = kk_function_alloc_as(struct kk_display_cliresult_fs_show_fun3377__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_cliresult_fs_show_fun3377, kk_context());
  _self->_b_x53_66 = _b_x53_66;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_cliresult_fs_show_fun3377(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_display_cliresult_fs_show_fun3377__t* _self = kk_function_as(struct kk_display_cliresult_fs_show_fun3377__t*, _fself, _ctx);
  kk_function_t _b_x53_66 = _self->_b_x53_66; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x53_66, _ctx);}, {}, _ctx)
  kk_string_t _x_x3378 = kk_string_unbox(_b_x54); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x53_66, (_b_x53_66, _x_x3378, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_cliresult_fs_show_fun3394__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_cliresult_fs_show_fun3394(kk_function_t _fself, kk_display__cliresult _x1_x3393, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3394(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_cliresult_fs_show_fun3394, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_cliresult_fs_show_fun3394(kk_function_t _fself, kk_display__cliresult _x1_x3393, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_display_cliresult_fs_show(_x1_x3393, _ctx);
}


// lift anonymous function
struct kk_display_cliresult_fs_show_fun3399__t {
  struct kk_function_s _base;
  kk_function_t _b_x56_68;
};
static kk_string_t kk_display_cliresult_fs_show_fun3399(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_display_cliresult_fs_new_show_fun3399(kk_function_t _b_x56_68, kk_context_t* _ctx) {
  struct kk_display_cliresult_fs_show_fun3399__t* _self = kk_function_alloc_as(struct kk_display_cliresult_fs_show_fun3399__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_cliresult_fs_show_fun3399, kk_context());
  _self->_b_x56_68 = _b_x56_68;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_cliresult_fs_show_fun3399(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_display_cliresult_fs_show_fun3399__t* _self = kk_function_as(struct kk_display_cliresult_fs_show_fun3399__t*, _fself, _ctx);
  kk_function_t _b_x56_68 = _self->_b_x56_68; /* (p : display/cliresult) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x56_68, _ctx);}, {}, _ctx)
  kk_display__cliresult _x_x3400 = kk_display__cliresult_unbox(_b_x57, KK_OWNED, _ctx); /*display/cliresult*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_display__cliresult, kk_context_t*), _b_x56_68, (_b_x56_68, _x_x3400, _ctx), _ctx);
}

kk_string_t kk_display_cliresult_fs_show(kk_display__cliresult p, kk_context_t* _ctx) { /* (p : cliresult) -> div string */ 
  kk_string_t _x_x3338;
  kk_define_string_literal(static, _s_x3339, 10, "CliResult(", _ctx)
  _x_x3338 = kk_string_dup(_s_x3339, _ctx); /*string*/
  kk_string_t _x_x3340;
  kk_std_core_types__list _b_x41_58;
  {
    struct kk_display_Cliresult* _con_x3341 = kk_display__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x = _con_x3341->cli__flags;
    kk_std_core_types__list_dup(_x, _ctx);
    _b_x41_58 = _x; /*list<string>*/
  }
  kk_function_t _b_x42_59 = kk_display_cliresult_fs_new_show_fun3343(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3344;
  kk_define_string_literal(static, _s_x3345, 11, "cli_flags: ", _ctx)
  _x_x3344 = kk_string_dup(_s_x3345, _ctx); /*string*/
  kk_string_t _x_x3346;
  kk_string_t _x_x3347 = kk_std_core_list_show(_b_x41_58, kk_display_cliresult_fs_new_show_fun3348(_b_x42_59, _ctx), _ctx); /*string*/
  kk_string_t _x_x3350;
  kk_string_t _x_x3351;
  kk_define_string_literal(static, _s_x3352, 2, ", ", _ctx)
  _x_x3351 = kk_string_dup(_s_x3352, _ctx); /*string*/
  kk_string_t _x_x3353;
  kk_std_core_types__list _b_x49_60;
  {
    struct kk_display_Cliresult* _con_x3354 = kk_display__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3354->cli__options;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x49_60 = _x_0; /*list<(string, string)>*/
  }
  kk_function_t _b_x50_61 = kk_display_cliresult_fs_new_show_fun3355(_ctx); /*((string, string)) -> div string*/;
  kk_string_t _x_x3360;
  kk_define_string_literal(static, _s_x3361, 13, "cli_options: ", _ctx)
  _x_x3360 = kk_string_dup(_s_x3361, _ctx); /*string*/
  kk_string_t _x_x3362;
  kk_string_t _x_x3363 = kk_std_core_list_show(_b_x49_60, kk_display_cliresult_fs_new_show_fun3364(_b_x50_61, _ctx), _ctx); /*string*/
  kk_string_t _x_x3366;
  kk_string_t _x_x3367;
  kk_define_string_literal(static, _s_x3368, 2, ", ", _ctx)
  _x_x3367 = kk_string_dup(_s_x3368, _ctx); /*string*/
  kk_string_t _x_x3369;
  kk_std_core_types__list _b_x52_65;
  {
    struct kk_display_Cliresult* _con_x3370 = kk_display__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3370->cli__positionals;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x52_65 = _x_1; /*list<string>*/
  }
  kk_function_t _b_x53_66 = kk_display_cliresult_fs_new_show_fun3372(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3373;
  kk_define_string_literal(static, _s_x3374, 17, "cli_positionals: ", _ctx)
  _x_x3373 = kk_string_dup(_s_x3374, _ctx); /*string*/
  kk_string_t _x_x3375;
  kk_string_t _x_x3376 = kk_std_core_list_show(_b_x52_65, kk_display_cliresult_fs_new_show_fun3377(_b_x53_66, _ctx), _ctx); /*string*/
  kk_string_t _x_x3379;
  kk_string_t _x_x3380;
  kk_define_string_literal(static, _s_x3381, 2, ", ", _ctx)
  _x_x3380 = kk_string_dup(_s_x3381, _ctx); /*string*/
  kk_string_t _x_x3382;
  kk_string_t _x_x3383;
  kk_define_string_literal(static, _s_x3384, 13, "cli_command: ", _ctx)
  _x_x3383 = kk_string_dup(_s_x3384, _ctx); /*string*/
  kk_string_t _x_x3385;
  kk_string_t _x_x3386;
  {
    struct kk_display_Cliresult* _con_x3387 = kk_display__as_Cliresult(p, _ctx);
    kk_string_t _x_2 = _con_x3387->cli__command;
    kk_string_dup(_x_2, _ctx);
    _x_x3386 = _x_2; /*string*/
  }
  kk_string_t _x_x3388;
  kk_string_t _x_x3389;
  kk_define_string_literal(static, _s_x3390, 2, ", ", _ctx)
  _x_x3389 = kk_string_dup(_s_x3390, _ctx); /*string*/
  kk_string_t _x_x3391;
  kk_std_core_types__maybe _b_x55_67;
  {
    struct kk_display_Cliresult* _con_x3392 = kk_display__as_Cliresult(p, _ctx);
    kk_std_core_types__list _pat_0_3 = _con_x3392->cli__flags;
    kk_std_core_types__list _pat_1_3 = _con_x3392->cli__options;
    kk_std_core_types__list _pat_2_3 = _con_x3392->cli__positionals;
    kk_string_t _pat_3_3 = _con_x3392->cli__command;
    kk_std_core_types__maybe _x_3 = _con_x3392->cli__sub;
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
    _b_x55_67 = _x_3; /*maybe<display/cliresult>*/
  }
  kk_function_t _b_x56_68 = kk_display_cliresult_fs_new_show_fun3394(_ctx); /*(p : display/cliresult) -> div string*/;
  kk_string_t _x_x3395;
  kk_define_string_literal(static, _s_x3396, 9, "cli_sub: ", _ctx)
  _x_x3395 = kk_string_dup(_s_x3396, _ctx); /*string*/
  kk_string_t _x_x3397;
  kk_string_t _x_x3398 = kk_std_core_maybe_show(_b_x55_67, kk_display_cliresult_fs_new_show_fun3399(_b_x56_68, _ctx), _ctx); /*string*/
  kk_string_t _x_x3401;
  kk_define_string_literal(static, _s_x3402, 1, ")", _ctx)
  _x_x3401 = kk_string_dup(_s_x3402, _ctx); /*string*/
  _x_x3397 = kk_std_core_types__lp__plus__plus__rp_(_x_x3398, _x_x3401, _ctx); /*string*/
  _x_x3391 = kk_std_core_types__lp__plus__plus__rp_(_x_x3395, _x_x3397, _ctx); /*string*/
  _x_x3388 = kk_std_core_types__lp__plus__plus__rp_(_x_x3389, _x_x3391, _ctx); /*string*/
  _x_x3385 = kk_std_core_types__lp__plus__plus__rp_(_x_x3386, _x_x3388, _ctx); /*string*/
  _x_x3382 = kk_std_core_types__lp__plus__plus__rp_(_x_x3383, _x_x3385, _ctx); /*string*/
  _x_x3379 = kk_std_core_types__lp__plus__plus__rp_(_x_x3380, _x_x3382, _ctx); /*string*/
  _x_x3375 = kk_std_core_types__lp__plus__plus__rp_(_x_x3376, _x_x3379, _ctx); /*string*/
  _x_x3369 = kk_std_core_types__lp__plus__plus__rp_(_x_x3373, _x_x3375, _ctx); /*string*/
  _x_x3366 = kk_std_core_types__lp__plus__plus__rp_(_x_x3367, _x_x3369, _ctx); /*string*/
  _x_x3362 = kk_std_core_types__lp__plus__plus__rp_(_x_x3363, _x_x3366, _ctx); /*string*/
  _x_x3353 = kk_std_core_types__lp__plus__plus__rp_(_x_x3360, _x_x3362, _ctx); /*string*/
  _x_x3350 = kk_std_core_types__lp__plus__plus__rp_(_x_x3351, _x_x3353, _ctx); /*string*/
  _x_x3346 = kk_std_core_types__lp__plus__plus__rp_(_x_x3347, _x_x3350, _ctx); /*string*/
  _x_x3340 = kk_std_core_types__lp__plus__plus__rp_(_x_x3344, _x_x3346, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3338, _x_x3340, _ctx);
}

kk_string_t kk_display_clioutcome_fs_show(kk_display__clioutcome v, kk_context_t* _ctx) { /* (v : clioutcome) -> div string */ 
  if (kk_display__is_Help(v, _ctx)) {
    kk_define_string_literal(static, _s_x3403, 4, "Help", _ctx)
    return kk_string_dup(_s_x3403, _ctx);
  }
  if (kk_display__is_Version(v, _ctx)) {
    kk_define_string_literal(static, _s_x3404, 7, "Version", _ctx)
    return kk_string_dup(_s_x3404, _ctx);
  }
  if (kk_display__is_CliError(v, _ctx)) {
    struct kk_display_CliError* _con_x3405 = kk_display__as_CliError(v, _ctx);
    kk_string_t cli__error__msg = _con_x3405->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(cli__error__msg, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3406;
    kk_define_string_literal(static, _s_x3407, 9, "CliError(", _ctx)
    _x_x3406 = kk_string_dup(_s_x3407, _ctx); /*string*/
    kk_string_t _x_x3408;
    kk_string_t _x_x3409;
    kk_define_string_literal(static, _s_x3410, 1, ")", _ctx)
    _x_x3409 = kk_string_dup(_s_x3410, _ctx); /*string*/
    _x_x3408 = kk_std_core_types__lp__plus__plus__rp_(cli__error__msg, _x_x3409, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3406, _x_x3408, _ctx);
  }
  {
    struct kk_display_Parsed* _con_x3411 = kk_display__as_Parsed(v, _ctx);
    kk_display__cliresult cli__result = _con_x3411->cli__result;
    struct kk_display_Cliresult* _con_x3412 = kk_display__as_Cliresult(cli__result, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_display__cliresult_dup(cli__result, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3413;
    kk_define_string_literal(static, _s_x3414, 7, "Parsed(", _ctx)
    _x_x3413 = kk_string_dup(_s_x3414, _ctx); /*string*/
    kk_string_t _x_x3415;
    kk_string_t _x_x3416 = kk_display_cliresult_fs_show(cli__result, _ctx); /*string*/
    kk_string_t _x_x3417;
    kk_define_string_literal(static, _s_x3418, 1, ")", _ctx)
    _x_x3417 = kk_string_dup(_s_x3418, _ctx); /*string*/
    _x_x3415 = kk_std_core_types__lp__plus__plus__rp_(_x_x3416, _x_x3417, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3413, _x_x3415, _ctx);
  }
}


// lift anonymous function
struct kk_display_clispec_fs_show_fun3451__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_clispec_fs_show_fun3451(kk_function_t _fself, kk_display__cliflag _x1_x3450, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3451(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_clispec_fs_show_fun3451, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_clispec_fs_show_fun3451(kk_function_t _fself, kk_display__cliflag _x1_x3450, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_display_cliflag_fs_show(_x1_x3450, _ctx);
}


// lift anonymous function
struct kk_display_clispec_fs_show_fun3456__t {
  struct kk_function_s _base;
  kk_function_t _b_x70_87;
};
static kk_string_t kk_display_clispec_fs_show_fun3456(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3456(kk_function_t _b_x70_87, kk_context_t* _ctx) {
  struct kk_display_clispec_fs_show_fun3456__t* _self = kk_function_alloc_as(struct kk_display_clispec_fs_show_fun3456__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_clispec_fs_show_fun3456, kk_context());
  _self->_b_x70_87 = _b_x70_87;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_clispec_fs_show_fun3456(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx) {
  struct kk_display_clispec_fs_show_fun3456__t* _self = kk_function_as(struct kk_display_clispec_fs_show_fun3456__t*, _fself, _ctx);
  kk_function_t _b_x70_87 = _self->_b_x70_87; /* (p : display/cliflag) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x70_87, _ctx);}, {}, _ctx)
  kk_display__cliflag _x_x3457 = kk_display__cliflag_unbox(_b_x71, KK_OWNED, _ctx); /*display/cliflag*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_display__cliflag, kk_context_t*), _b_x70_87, (_b_x70_87, _x_x3457, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_clispec_fs_show_fun3464__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_clispec_fs_show_fun3464(kk_function_t _fself, kk_display__clioption _x1_x3463, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3464(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_clispec_fs_show_fun3464, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_clispec_fs_show_fun3464(kk_function_t _fself, kk_display__clioption _x1_x3463, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_display_clioption_fs_show(_x1_x3463, _ctx);
}


// lift anonymous function
struct kk_display_clispec_fs_show_fun3469__t {
  struct kk_function_s _base;
  kk_function_t _b_x73_89;
};
static kk_string_t kk_display_clispec_fs_show_fun3469(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3469(kk_function_t _b_x73_89, kk_context_t* _ctx) {
  struct kk_display_clispec_fs_show_fun3469__t* _self = kk_function_alloc_as(struct kk_display_clispec_fs_show_fun3469__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_clispec_fs_show_fun3469, kk_context());
  _self->_b_x73_89 = _b_x73_89;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_clispec_fs_show_fun3469(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx) {
  struct kk_display_clispec_fs_show_fun3469__t* _self = kk_function_as(struct kk_display_clispec_fs_show_fun3469__t*, _fself, _ctx);
  kk_function_t _b_x73_89 = _self->_b_x73_89; /* (p : display/clioption) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x73_89, _ctx);}, {}, _ctx)
  kk_display__clioption _x_x3470 = kk_display__clioption_unbox(_b_x74, KK_OWNED, _ctx); /*display/clioption*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_display__clioption, kk_context_t*), _b_x73_89, (_b_x73_89, _x_x3470, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_clispec_fs_show_fun3477__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_clispec_fs_show_fun3477(kk_function_t _fself, kk_display__cliarg _x1_x3476, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3477(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_clispec_fs_show_fun3477, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_clispec_fs_show_fun3477(kk_function_t _fself, kk_display__cliarg _x1_x3476, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_display_cliarg_fs_show(_x1_x3476, _ctx);
}


// lift anonymous function
struct kk_display_clispec_fs_show_fun3482__t {
  struct kk_function_s _base;
  kk_function_t _b_x76_91;
};
static kk_string_t kk_display_clispec_fs_show_fun3482(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3482(kk_function_t _b_x76_91, kk_context_t* _ctx) {
  struct kk_display_clispec_fs_show_fun3482__t* _self = kk_function_alloc_as(struct kk_display_clispec_fs_show_fun3482__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_clispec_fs_show_fun3482, kk_context());
  _self->_b_x76_91 = _b_x76_91;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_clispec_fs_show_fun3482(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx) {
  struct kk_display_clispec_fs_show_fun3482__t* _self = kk_function_as(struct kk_display_clispec_fs_show_fun3482__t*, _fself, _ctx);
  kk_function_t _b_x76_91 = _self->_b_x76_91; /* (p : display/cliarg) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x76_91, _ctx);}, {}, _ctx)
  kk_display__cliarg _x_x3483 = kk_display__cliarg_unbox(_b_x77, KK_OWNED, _ctx); /*display/cliarg*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_display__cliarg, kk_context_t*), _b_x76_91, (_b_x76_91, _x_x3483, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_clispec_fs_show_fun3489__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_clispec_fs_show_fun3489(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3489(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_clispec_fs_show_fun3489, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_clispec_fs_show_fun3490__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_clispec_fs_show_fun3490(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3490(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_clispec_fs_show_fun3490, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_clispec_fs_show_fun3490(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3491 = kk_string_unbox(_b_x81); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3491, _ctx);
}


// lift anonymous function
struct kk_display_clispec_fs_show_fun3492__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_clispec_fs_show_fun3492(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3492(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_clispec_fs_show_fun3492, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_clispec_fs_show_fun3492(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_display__clispec _x_x3493 = kk_display__clispec_unbox(_b_x82, KK_OWNED, _ctx); /*display/clispec*/
  return kk_display_clispec_fs_show(_x_x3493, _ctx);
}
static kk_string_t kk_display_clispec_fs_show_fun3489(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_display_clispec_fs_new_show_fun3490(_ctx), kk_display_clispec_fs_new_show_fun3492(_ctx), _ctx);
}


// lift anonymous function
struct kk_display_clispec_fs_show_fun3498__t {
  struct kk_function_s _base;
  kk_function_t _b_x84_93;
};
static kk_string_t kk_display_clispec_fs_show_fun3498(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx);
static kk_function_t kk_display_clispec_fs_new_show_fun3498(kk_function_t _b_x84_93, kk_context_t* _ctx) {
  struct kk_display_clispec_fs_show_fun3498__t* _self = kk_function_alloc_as(struct kk_display_clispec_fs_show_fun3498__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_clispec_fs_show_fun3498, kk_context());
  _self->_b_x84_93 = _b_x84_93;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_clispec_fs_show_fun3498(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx) {
  struct kk_display_clispec_fs_show_fun3498__t* _self = kk_function_as(struct kk_display_clispec_fs_show_fun3498__t*, _fself, _ctx);
  kk_function_t _b_x84_93 = _self->_b_x84_93; /* ((string, display/clispec)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x84_93, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3499 = kk_std_core_types__tuple2_unbox(_b_x85, KK_OWNED, _ctx); /*(string, display/clispec)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x84_93, (_b_x84_93, _x_x3499, _ctx), _ctx);
}

kk_string_t kk_display_clispec_fs_show(kk_display__clispec p, kk_context_t* _ctx) { /* (p : clispec) -> div string */ 
  kk_string_t _x_x3419;
  kk_define_string_literal(static, _s_x3420, 8, "CliSpec(", _ctx)
  _x_x3419 = kk_string_dup(_s_x3420, _ctx); /*string*/
  kk_string_t _x_x3421;
  kk_string_t _x_x3422;
  kk_define_string_literal(static, _s_x3423, 10, "app_name: ", _ctx)
  _x_x3422 = kk_string_dup(_s_x3423, _ctx); /*string*/
  kk_string_t _x_x3424;
  kk_string_t _x_x3425;
  {
    struct kk_display_Clispec* _con_x3426 = kk_display__as_Clispec(p, _ctx);
    kk_string_t _x = _con_x3426->app__name;
    kk_string_dup(_x, _ctx);
    _x_x3425 = _x; /*string*/
  }
  kk_string_t _x_x3427;
  kk_string_t _x_x3428;
  kk_define_string_literal(static, _s_x3429, 2, ", ", _ctx)
  _x_x3428 = kk_string_dup(_s_x3429, _ctx); /*string*/
  kk_string_t _x_x3430;
  kk_string_t _x_x3431;
  kk_define_string_literal(static, _s_x3432, 13, "app_version: ", _ctx)
  _x_x3431 = kk_string_dup(_s_x3432, _ctx); /*string*/
  kk_string_t _x_x3433;
  kk_string_t _x_x3434;
  {
    struct kk_display_Clispec* _con_x3435 = kk_display__as_Clispec(p, _ctx);
    kk_string_t _x_0 = _con_x3435->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x3434 = _x_0; /*string*/
  }
  kk_string_t _x_x3436;
  kk_string_t _x_x3437;
  kk_define_string_literal(static, _s_x3438, 2, ", ", _ctx)
  _x_x3437 = kk_string_dup(_s_x3438, _ctx); /*string*/
  kk_string_t _x_x3439;
  kk_string_t _x_x3440;
  kk_define_string_literal(static, _s_x3441, 11, "app_about: ", _ctx)
  _x_x3440 = kk_string_dup(_s_x3441, _ctx); /*string*/
  kk_string_t _x_x3442;
  kk_string_t _x_x3443;
  {
    struct kk_display_Clispec* _con_x3444 = kk_display__as_Clispec(p, _ctx);
    kk_string_t _x_1 = _con_x3444->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x3443 = _x_1; /*string*/
  }
  kk_string_t _x_x3445;
  kk_string_t _x_x3446;
  kk_define_string_literal(static, _s_x3447, 2, ", ", _ctx)
  _x_x3446 = kk_string_dup(_s_x3447, _ctx); /*string*/
  kk_string_t _x_x3448;
  kk_std_core_types__list _b_x69_86;
  {
    struct kk_display_Clispec* _con_x3449 = kk_display__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3449->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x69_86 = _x_2; /*list<display/cliflag>*/
  }
  kk_function_t _b_x70_87 = kk_display_clispec_fs_new_show_fun3451(_ctx); /*(p : display/cliflag) -> string*/;
  kk_string_t _x_x3452;
  kk_define_string_literal(static, _s_x3453, 11, "app_flags: ", _ctx)
  _x_x3452 = kk_string_dup(_s_x3453, _ctx); /*string*/
  kk_string_t _x_x3454;
  kk_string_t _x_x3455 = kk_std_core_list_show(_b_x69_86, kk_display_clispec_fs_new_show_fun3456(_b_x70_87, _ctx), _ctx); /*string*/
  kk_string_t _x_x3458;
  kk_string_t _x_x3459;
  kk_define_string_literal(static, _s_x3460, 2, ", ", _ctx)
  _x_x3459 = kk_string_dup(_s_x3460, _ctx); /*string*/
  kk_string_t _x_x3461;
  kk_std_core_types__list _b_x72_88;
  {
    struct kk_display_Clispec* _con_x3462 = kk_display__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_3 = _con_x3462->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _b_x72_88 = _x_3; /*list<display/clioption>*/
  }
  kk_function_t _b_x73_89 = kk_display_clispec_fs_new_show_fun3464(_ctx); /*(p : display/clioption) -> string*/;
  kk_string_t _x_x3465;
  kk_define_string_literal(static, _s_x3466, 13, "app_options: ", _ctx)
  _x_x3465 = kk_string_dup(_s_x3466, _ctx); /*string*/
  kk_string_t _x_x3467;
  kk_string_t _x_x3468 = kk_std_core_list_show(_b_x72_88, kk_display_clispec_fs_new_show_fun3469(_b_x73_89, _ctx), _ctx); /*string*/
  kk_string_t _x_x3471;
  kk_string_t _x_x3472;
  kk_define_string_literal(static, _s_x3473, 2, ", ", _ctx)
  _x_x3472 = kk_string_dup(_s_x3473, _ctx); /*string*/
  kk_string_t _x_x3474;
  kk_std_core_types__list _b_x75_90;
  {
    struct kk_display_Clispec* _con_x3475 = kk_display__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_4 = _con_x3475->app__args;
    kk_std_core_types__list_dup(_x_4, _ctx);
    _b_x75_90 = _x_4; /*list<display/cliarg>*/
  }
  kk_function_t _b_x76_91 = kk_display_clispec_fs_new_show_fun3477(_ctx); /*(p : display/cliarg) -> string*/;
  kk_string_t _x_x3478;
  kk_define_string_literal(static, _s_x3479, 10, "app_args: ", _ctx)
  _x_x3478 = kk_string_dup(_s_x3479, _ctx); /*string*/
  kk_string_t _x_x3480;
  kk_string_t _x_x3481 = kk_std_core_list_show(_b_x75_90, kk_display_clispec_fs_new_show_fun3482(_b_x76_91, _ctx), _ctx); /*string*/
  kk_string_t _x_x3484;
  kk_string_t _x_x3485;
  kk_define_string_literal(static, _s_x3486, 2, ", ", _ctx)
  _x_x3485 = kk_string_dup(_s_x3486, _ctx); /*string*/
  kk_string_t _x_x3487;
  kk_std_core_types__list _b_x83_92;
  {
    struct kk_display_Clispec* _con_x3488 = kk_display__as_Clispec(p, _ctx);
    kk_string_t _pat_0_5 = _con_x3488->app__name;
    kk_string_t _pat_1_5 = _con_x3488->app__version;
    kk_string_t _pat_2_5 = _con_x3488->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x3488->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x3488->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x3488->app__args;
    kk_std_core_types__list _x_5 = _con_x3488->app__commands;
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
    _b_x83_92 = _x_5; /*list<(string, display/clispec)>*/
  }
  kk_function_t _b_x84_93 = kk_display_clispec_fs_new_show_fun3489(_ctx); /*((string, display/clispec)) -> div string*/;
  kk_string_t _x_x3494;
  kk_define_string_literal(static, _s_x3495, 14, "app_commands: ", _ctx)
  _x_x3494 = kk_string_dup(_s_x3495, _ctx); /*string*/
  kk_string_t _x_x3496;
  kk_string_t _x_x3497 = kk_std_core_list_show(_b_x83_92, kk_display_clispec_fs_new_show_fun3498(_b_x84_93, _ctx), _ctx); /*string*/
  kk_string_t _x_x3500;
  kk_define_string_literal(static, _s_x3501, 1, ")", _ctx)
  _x_x3500 = kk_string_dup(_s_x3501, _ctx); /*string*/
  _x_x3496 = kk_std_core_types__lp__plus__plus__rp_(_x_x3497, _x_x3500, _ctx); /*string*/
  _x_x3487 = kk_std_core_types__lp__plus__plus__rp_(_x_x3494, _x_x3496, _ctx); /*string*/
  _x_x3484 = kk_std_core_types__lp__plus__plus__rp_(_x_x3485, _x_x3487, _ctx); /*string*/
  _x_x3480 = kk_std_core_types__lp__plus__plus__rp_(_x_x3481, _x_x3484, _ctx); /*string*/
  _x_x3474 = kk_std_core_types__lp__plus__plus__rp_(_x_x3478, _x_x3480, _ctx); /*string*/
  _x_x3471 = kk_std_core_types__lp__plus__plus__rp_(_x_x3472, _x_x3474, _ctx); /*string*/
  _x_x3467 = kk_std_core_types__lp__plus__plus__rp_(_x_x3468, _x_x3471, _ctx); /*string*/
  _x_x3461 = kk_std_core_types__lp__plus__plus__rp_(_x_x3465, _x_x3467, _ctx); /*string*/
  _x_x3458 = kk_std_core_types__lp__plus__plus__rp_(_x_x3459, _x_x3461, _ctx); /*string*/
  _x_x3454 = kk_std_core_types__lp__plus__plus__rp_(_x_x3455, _x_x3458, _ctx); /*string*/
  _x_x3448 = kk_std_core_types__lp__plus__plus__rp_(_x_x3452, _x_x3454, _ctx); /*string*/
  _x_x3445 = kk_std_core_types__lp__plus__plus__rp_(_x_x3446, _x_x3448, _ctx); /*string*/
  _x_x3442 = kk_std_core_types__lp__plus__plus__rp_(_x_x3443, _x_x3445, _ctx); /*string*/
  _x_x3439 = kk_std_core_types__lp__plus__plus__rp_(_x_x3440, _x_x3442, _ctx); /*string*/
  _x_x3436 = kk_std_core_types__lp__plus__plus__rp_(_x_x3437, _x_x3439, _ctx); /*string*/
  _x_x3433 = kk_std_core_types__lp__plus__plus__rp_(_x_x3434, _x_x3436, _ctx); /*string*/
  _x_x3430 = kk_std_core_types__lp__plus__plus__rp_(_x_x3431, _x_x3433, _ctx); /*string*/
  _x_x3427 = kk_std_core_types__lp__plus__plus__rp_(_x_x3428, _x_x3430, _ctx); /*string*/
  _x_x3424 = kk_std_core_types__lp__plus__plus__rp_(_x_x3425, _x_x3427, _ctx); /*string*/
  _x_x3421 = kk_std_core_types__lp__plus__plus__rp_(_x_x3422, _x_x3424, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3419, _x_x3421, _ctx);
}


// lift anonymous function
struct kk_display_parseraw_fs_show_fun3516__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_parseraw_fs_show_fun3516(kk_function_t _fself, kk_string_t _x1_x3515, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3516(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_parseraw_fs_show_fun3516, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_parseraw_fs_show_fun3516(kk_function_t _fself, kk_string_t _x1_x3515, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3515, _ctx);
}


// lift anonymous function
struct kk_display_parseraw_fs_show_fun3521__t {
  struct kk_function_s _base;
  kk_function_t _b_x98_115;
};
static kk_string_t kk_display_parseraw_fs_show_fun3521(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3521(kk_function_t _b_x98_115, kk_context_t* _ctx) {
  struct kk_display_parseraw_fs_show_fun3521__t* _self = kk_function_alloc_as(struct kk_display_parseraw_fs_show_fun3521__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_parseraw_fs_show_fun3521, kk_context());
  _self->_b_x98_115 = _b_x98_115;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_parseraw_fs_show_fun3521(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_display_parseraw_fs_show_fun3521__t* _self = kk_function_as(struct kk_display_parseraw_fs_show_fun3521__t*, _fself, _ctx);
  kk_function_t _b_x98_115 = _self->_b_x98_115; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x98_115, _ctx);}, {}, _ctx)
  kk_string_t _x_x3522 = kk_string_unbox(_b_x99); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x98_115, (_b_x98_115, _x_x3522, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_parseraw_fs_show_fun3528__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_parseraw_fs_show_fun3528(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3528(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_parseraw_fs_show_fun3528, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_parseraw_fs_show_fun3529__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_parseraw_fs_show_fun3529(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3529(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_parseraw_fs_show_fun3529, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_parseraw_fs_show_fun3529(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3530 = kk_string_unbox(_b_x103); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3530, _ctx);
}


// lift anonymous function
struct kk_display_parseraw_fs_show_fun3531__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_parseraw_fs_show_fun3531(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3531(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_parseraw_fs_show_fun3531, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_parseraw_fs_show_fun3531(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3532 = kk_string_unbox(_b_x104); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3532, _ctx);
}
static kk_string_t kk_display_parseraw_fs_show_fun3528(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_display_parseraw_fs_new_show_fun3529(_ctx), kk_display_parseraw_fs_new_show_fun3531(_ctx), _ctx);
}


// lift anonymous function
struct kk_display_parseraw_fs_show_fun3537__t {
  struct kk_function_s _base;
  kk_function_t _b_x106_117;
};
static kk_string_t kk_display_parseraw_fs_show_fun3537(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3537(kk_function_t _b_x106_117, kk_context_t* _ctx) {
  struct kk_display_parseraw_fs_show_fun3537__t* _self = kk_function_alloc_as(struct kk_display_parseraw_fs_show_fun3537__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_parseraw_fs_show_fun3537, kk_context());
  _self->_b_x106_117 = _b_x106_117;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_parseraw_fs_show_fun3537(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx) {
  struct kk_display_parseraw_fs_show_fun3537__t* _self = kk_function_as(struct kk_display_parseraw_fs_show_fun3537__t*, _fself, _ctx);
  kk_function_t _b_x106_117 = _self->_b_x106_117; /* ((string, string)) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x106_117, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3538 = kk_std_core_types__tuple2_unbox(_b_x107, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x106_117, (_b_x106_117, _x_x3538, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_parseraw_fs_show_fun3545__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_parseraw_fs_show_fun3545(kk_function_t _fself, kk_string_t _x1_x3544, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3545(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_parseraw_fs_show_fun3545, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_parseraw_fs_show_fun3545(kk_function_t _fself, kk_string_t _x1_x3544, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3544, _ctx);
}


// lift anonymous function
struct kk_display_parseraw_fs_show_fun3550__t {
  struct kk_function_s _base;
  kk_function_t _b_x109_122;
};
static kk_string_t kk_display_parseraw_fs_show_fun3550(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3550(kk_function_t _b_x109_122, kk_context_t* _ctx) {
  struct kk_display_parseraw_fs_show_fun3550__t* _self = kk_function_alloc_as(struct kk_display_parseraw_fs_show_fun3550__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_parseraw_fs_show_fun3550, kk_context());
  _self->_b_x109_122 = _b_x109_122;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_parseraw_fs_show_fun3550(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_display_parseraw_fs_show_fun3550__t* _self = kk_function_as(struct kk_display_parseraw_fs_show_fun3550__t*, _fself, _ctx);
  kk_function_t _b_x109_122 = _self->_b_x109_122; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x109_122, _ctx);}, {}, _ctx)
  kk_string_t _x_x3551 = kk_string_unbox(_b_x110); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x109_122, (_b_x109_122, _x_x3551, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_parseraw_fs_show_fun3567__t {
  struct kk_function_s _base;
};
static kk_string_t kk_display_parseraw_fs_show_fun3567(kk_function_t _fself, kk_string_t _x1_x3566, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3567(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_parseraw_fs_show_fun3567, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_display_parseraw_fs_show_fun3567(kk_function_t _fself, kk_string_t _x1_x3566, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3566, _ctx);
}


// lift anonymous function
struct kk_display_parseraw_fs_show_fun3572__t {
  struct kk_function_s _base;
  kk_function_t _b_x112_124;
};
static kk_string_t kk_display_parseraw_fs_show_fun3572(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx);
static kk_function_t kk_display_parseraw_fs_new_show_fun3572(kk_function_t _b_x112_124, kk_context_t* _ctx) {
  struct kk_display_parseraw_fs_show_fun3572__t* _self = kk_function_alloc_as(struct kk_display_parseraw_fs_show_fun3572__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_parseraw_fs_show_fun3572, kk_context());
  _self->_b_x112_124 = _b_x112_124;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_display_parseraw_fs_show_fun3572(kk_function_t _fself, kk_box_t _b_x113, kk_context_t* _ctx) {
  struct kk_display_parseraw_fs_show_fun3572__t* _self = kk_function_as(struct kk_display_parseraw_fs_show_fun3572__t*, _fself, _ctx);
  kk_function_t _b_x112_124 = _self->_b_x112_124; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x112_124, _ctx);}, {}, _ctx)
  kk_string_t _x_x3573 = kk_string_unbox(_b_x113); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x112_124, (_b_x112_124, _x_x3573, _ctx), _ctx);
}

kk_string_t kk_display_parseraw_fs_show(kk_display__parseraw p, kk_context_t* _ctx) { /* (p : parseraw) -> string */ 
  kk_string_t _x_x3502;
  kk_define_string_literal(static, _s_x3503, 9, "ParseRaw(", _ctx)
  _x_x3502 = kk_string_dup(_s_x3503, _ctx); /*string*/
  kk_string_t _x_x3504;
  kk_string_t _x_x3505;
  kk_define_string_literal(static, _s_x3506, 11, "raw_error: ", _ctx)
  _x_x3505 = kk_string_dup(_s_x3506, _ctx); /*string*/
  kk_string_t _x_x3507;
  kk_string_t _x_x3508;
  {
    struct kk_display_Parseraw* _con_x3509 = kk_display__as_Parseraw(p, _ctx);
    kk_string_t _x = _con_x3509->raw__error;
    kk_string_dup(_x, _ctx);
    _x_x3508 = _x; /*string*/
  }
  kk_string_t _x_x3510;
  kk_string_t _x_x3511;
  kk_define_string_literal(static, _s_x3512, 2, ", ", _ctx)
  _x_x3511 = kk_string_dup(_s_x3512, _ctx); /*string*/
  kk_string_t _x_x3513;
  kk_std_core_types__list _b_x97_114;
  {
    struct kk_display_Parseraw* _con_x3514 = kk_display__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3514->raw__flags;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x97_114 = _x_0; /*list<string>*/
  }
  kk_function_t _b_x98_115 = kk_display_parseraw_fs_new_show_fun3516(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3517;
  kk_define_string_literal(static, _s_x3518, 11, "raw_flags: ", _ctx)
  _x_x3517 = kk_string_dup(_s_x3518, _ctx); /*string*/
  kk_string_t _x_x3519;
  kk_string_t _x_x3520 = kk_std_core_list_show(_b_x97_114, kk_display_parseraw_fs_new_show_fun3521(_b_x98_115, _ctx), _ctx); /*string*/
  kk_string_t _x_x3523;
  kk_string_t _x_x3524;
  kk_define_string_literal(static, _s_x3525, 2, ", ", _ctx)
  _x_x3524 = kk_string_dup(_s_x3525, _ctx); /*string*/
  kk_string_t _x_x3526;
  kk_std_core_types__list _b_x105_116;
  {
    struct kk_display_Parseraw* _con_x3527 = kk_display__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3527->raw__options;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x105_116 = _x_1; /*list<(string, string)>*/
  }
  kk_function_t _b_x106_117 = kk_display_parseraw_fs_new_show_fun3528(_ctx); /*((string, string)) -> string*/;
  kk_string_t _x_x3533;
  kk_define_string_literal(static, _s_x3534, 13, "raw_options: ", _ctx)
  _x_x3533 = kk_string_dup(_s_x3534, _ctx); /*string*/
  kk_string_t _x_x3535;
  kk_string_t _x_x3536 = kk_std_core_list_show(_b_x105_116, kk_display_parseraw_fs_new_show_fun3537(_b_x106_117, _ctx), _ctx); /*string*/
  kk_string_t _x_x3539;
  kk_string_t _x_x3540;
  kk_define_string_literal(static, _s_x3541, 2, ", ", _ctx)
  _x_x3540 = kk_string_dup(_s_x3541, _ctx); /*string*/
  kk_string_t _x_x3542;
  kk_std_core_types__list _b_x108_121;
  {
    struct kk_display_Parseraw* _con_x3543 = kk_display__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3543->raw__positionals;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x108_121 = _x_2; /*list<string>*/
  }
  kk_function_t _b_x109_122 = kk_display_parseraw_fs_new_show_fun3545(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3546;
  kk_define_string_literal(static, _s_x3547, 17, "raw_positionals: ", _ctx)
  _x_x3546 = kk_string_dup(_s_x3547, _ctx); /*string*/
  kk_string_t _x_x3548;
  kk_string_t _x_x3549 = kk_std_core_list_show(_b_x108_121, kk_display_parseraw_fs_new_show_fun3550(_b_x109_122, _ctx), _ctx); /*string*/
  kk_string_t _x_x3552;
  kk_string_t _x_x3553;
  kk_define_string_literal(static, _s_x3554, 2, ", ", _ctx)
  _x_x3553 = kk_string_dup(_s_x3554, _ctx); /*string*/
  kk_string_t _x_x3555;
  kk_string_t _x_x3556;
  kk_define_string_literal(static, _s_x3557, 12, "raw_subcmd: ", _ctx)
  _x_x3556 = kk_string_dup(_s_x3557, _ctx); /*string*/
  kk_string_t _x_x3558;
  kk_string_t _x_x3559;
  {
    struct kk_display_Parseraw* _con_x3560 = kk_display__as_Parseraw(p, _ctx);
    kk_string_t _x_3 = _con_x3560->raw__subcmd;
    kk_string_dup(_x_3, _ctx);
    _x_x3559 = _x_3; /*string*/
  }
  kk_string_t _x_x3561;
  kk_string_t _x_x3562;
  kk_define_string_literal(static, _s_x3563, 2, ", ", _ctx)
  _x_x3562 = kk_string_dup(_s_x3563, _ctx); /*string*/
  kk_string_t _x_x3564;
  kk_std_core_types__list _b_x111_123;
  {
    struct kk_display_Parseraw* _con_x3565 = kk_display__as_Parseraw(p, _ctx);
    kk_string_t _pat_0_4 = _con_x3565->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x3565->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x3565->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x3565->raw__positionals;
    kk_string_t _pat_4_4 = _con_x3565->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x3565->raw__sub__args;
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
  kk_function_t _b_x112_124 = kk_display_parseraw_fs_new_show_fun3567(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3568;
  kk_define_string_literal(static, _s_x3569, 14, "raw_sub_args: ", _ctx)
  _x_x3568 = kk_string_dup(_s_x3569, _ctx); /*string*/
  kk_string_t _x_x3570;
  kk_string_t _x_x3571 = kk_std_core_list_show(_b_x111_123, kk_display_parseraw_fs_new_show_fun3572(_b_x112_124, _ctx), _ctx); /*string*/
  kk_string_t _x_x3574;
  kk_define_string_literal(static, _s_x3575, 1, ")", _ctx)
  _x_x3574 = kk_string_dup(_s_x3575, _ctx); /*string*/
  _x_x3570 = kk_std_core_types__lp__plus__plus__rp_(_x_x3571, _x_x3574, _ctx); /*string*/
  _x_x3564 = kk_std_core_types__lp__plus__plus__rp_(_x_x3568, _x_x3570, _ctx); /*string*/
  _x_x3561 = kk_std_core_types__lp__plus__plus__rp_(_x_x3562, _x_x3564, _ctx); /*string*/
  _x_x3558 = kk_std_core_types__lp__plus__plus__rp_(_x_x3559, _x_x3561, _ctx); /*string*/
  _x_x3555 = kk_std_core_types__lp__plus__plus__rp_(_x_x3556, _x_x3558, _ctx); /*string*/
  _x_x3552 = kk_std_core_types__lp__plus__plus__rp_(_x_x3553, _x_x3555, _ctx); /*string*/
  _x_x3548 = kk_std_core_types__lp__plus__plus__rp_(_x_x3549, _x_x3552, _ctx); /*string*/
  _x_x3542 = kk_std_core_types__lp__plus__plus__rp_(_x_x3546, _x_x3548, _ctx); /*string*/
  _x_x3539 = kk_std_core_types__lp__plus__plus__rp_(_x_x3540, _x_x3542, _ctx); /*string*/
  _x_x3535 = kk_std_core_types__lp__plus__plus__rp_(_x_x3536, _x_x3539, _ctx); /*string*/
  _x_x3526 = kk_std_core_types__lp__plus__plus__rp_(_x_x3533, _x_x3535, _ctx); /*string*/
  _x_x3523 = kk_std_core_types__lp__plus__plus__rp_(_x_x3524, _x_x3526, _ctx); /*string*/
  _x_x3519 = kk_std_core_types__lp__plus__plus__rp_(_x_x3520, _x_x3523, _ctx); /*string*/
  _x_x3513 = kk_std_core_types__lp__plus__plus__rp_(_x_x3517, _x_x3519, _ctx); /*string*/
  _x_x3510 = kk_std_core_types__lp__plus__plus__rp_(_x_x3511, _x_x3513, _ctx); /*string*/
  _x_x3507 = kk_std_core_types__lp__plus__plus__rp_(_x_x3508, _x_x3510, _ctx); /*string*/
  _x_x3504 = kk_std_core_types__lp__plus__plus__rp_(_x_x3505, _x_x3507, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3502, _x_x3504, _ctx);
}

kk_display__parseraw kk_display_parseraw_fs__copy(kk_display__parseraw _this, kk_std_core_types__optional raw__error, kk_std_core_types__optional raw__flags, kk_std_core_types__optional raw__options, kk_std_core_types__optional raw__positionals, kk_std_core_types__optional raw__subcmd, kk_std_core_types__optional raw__sub__args, kk_context_t* _ctx) { /* (parseraw, raw_error : ? string, raw_flags : ? (list<string>), raw_options : ? (list<(string, string)>), raw_positionals : ? (list<string>), raw_subcmd : ? string, raw_sub_args : ? (list<string>)) -> parseraw */ 
  kk_string_t _x_x3576;
  if (kk_std_core_types__is_Optional(raw__error, _ctx)) {
    kk_box_t _box_x125 = raw__error._cons._Optional.value;
    kk_string_t _uniq_raw__error_3746 = kk_string_unbox(_box_x125);
    kk_string_dup(_uniq_raw__error_3746, _ctx);
    kk_std_core_types__optional_drop(raw__error, _ctx);
    _x_x3576 = _uniq_raw__error_3746; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__error, _ctx);
    {
      struct kk_display_Parseraw* _con_x3577 = kk_display__as_Parseraw(_this, _ctx);
      kk_string_t _x = _con_x3577->raw__error;
      kk_string_dup(_x, _ctx);
      _x_x3576 = _x; /*string*/
    }
  }
  kk_std_core_types__list _x_x3578;
  if (kk_std_core_types__is_Optional(raw__flags, _ctx)) {
    kk_box_t _box_x126 = raw__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__flags_3754 = kk_std_core_types__list_unbox(_box_x126, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__flags_3754, _ctx);
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    _x_x3578 = _uniq_raw__flags_3754; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    {
      struct kk_display_Parseraw* _con_x3579 = kk_display__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3579->raw__flags;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3578 = _x_0; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3580;
  if (kk_std_core_types__is_Optional(raw__options, _ctx)) {
    kk_box_t _box_x127 = raw__options._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__options_3762 = kk_std_core_types__list_unbox(_box_x127, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__options_3762, _ctx);
    kk_std_core_types__optional_drop(raw__options, _ctx);
    _x_x3580 = _uniq_raw__options_3762; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__options, _ctx);
    {
      struct kk_display_Parseraw* _con_x3581 = kk_display__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3581->raw__options;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3580 = _x_1; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3582;
  if (kk_std_core_types__is_Optional(raw__positionals, _ctx)) {
    kk_box_t _box_x128 = raw__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__positionals_3770 = kk_std_core_types__list_unbox(_box_x128, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__positionals_3770, _ctx);
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    _x_x3582 = _uniq_raw__positionals_3770; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    {
      struct kk_display_Parseraw* _con_x3583 = kk_display__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3583->raw__positionals;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3582 = _x_2; /*list<string>*/
    }
  }
  kk_string_t _x_x3584;
  if (kk_std_core_types__is_Optional(raw__subcmd, _ctx)) {
    kk_box_t _box_x129 = raw__subcmd._cons._Optional.value;
    kk_string_t _uniq_raw__subcmd_3778 = kk_string_unbox(_box_x129);
    kk_string_dup(_uniq_raw__subcmd_3778, _ctx);
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    _x_x3584 = _uniq_raw__subcmd_3778; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    {
      struct kk_display_Parseraw* _con_x3585 = kk_display__as_Parseraw(_this, _ctx);
      kk_string_t _x_3 = _con_x3585->raw__subcmd;
      kk_string_dup(_x_3, _ctx);
      _x_x3584 = _x_3; /*string*/
    }
  }
  kk_std_core_types__list _x_x3586;
  if (kk_std_core_types__is_Optional(raw__sub__args, _ctx)) {
    kk_box_t _box_x130 = raw__sub__args._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__sub__args_3786 = kk_std_core_types__list_unbox(_box_x130, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__sub__args_3786, _ctx);
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3586 = _uniq_raw__sub__args_3786; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    {
      struct kk_display_Parseraw* _con_x3587 = kk_display__as_Parseraw(_this, _ctx);
      kk_string_t _pat_0_5 = _con_x3587->raw__error;
      kk_std_core_types__list _pat_1_6 = _con_x3587->raw__flags;
      kk_std_core_types__list _pat_2_5 = _con_x3587->raw__options;
      kk_std_core_types__list _pat_3_5 = _con_x3587->raw__positionals;
      kk_string_t _pat_4_5 = _con_x3587->raw__subcmd;
      kk_std_core_types__list _x_4 = _con_x3587->raw__sub__args;
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
      _x_x3586 = _x_4; /*list<string>*/
    }
  }
  return kk_display__new_Parseraw(kk_reuse_null, 0, _x_x3576, _x_x3578, _x_x3580, _x_x3582, _x_x3584, _x_x3586, _ctx);
}

kk_integer_t kk_display_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10059;
  bool _match_x2986 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x2986) {
    kk_integer_drop(lo, _ctx);
    a_10059 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10059 = lo; /*int*/
  }
  bool _match_x2985 = kk_integer_lt_borrow(a_10059,hi,kk_context()); /*bool*/;
  if (_match_x2985) {
    kk_integer_drop(hi, _ctx);
    return a_10059;
  }
  {
    kk_integer_drop(a_10059, _ctx);
    return hi;
  }
}

kk_integer_t kk_display_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x2984 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2984) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x3588 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x3589 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x3588;
    b = _x_x3589;
    goto kk__tailcall;
  }
}

kk_integer_t kk_display_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x2981 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2981) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x2982 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2982) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10063;
      kk_integer_t _x_x3590 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x3591 = kk_integer_dup(b, _ctx); /*int*/
      n_10063 = kk_integer_mul(_x_x3590,_x_x3591,kk_context()); /*int*/
      kk_integer_t _x_x3592;
      bool _match_x2983 = kk_integer_lt_borrow(n_10063,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2983) {
        _x_x3592 = kk_integer_sub((kk_integer_from_small(0)),n_10063,kk_context()); /*int*/
      }
      else {
        _x_x3592 = n_10063; /*int*/
      }
      kk_integer_t _x_x3593 = kk_display_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x3592,_x_x3593,kk_context());
    }
  }
}

kk_integer_t kk_display_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x2980 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2980) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x3594 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x3595;
    kk_integer_t _x_x3596 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x3595 = kk_display_hc__pow(base, _x_x3596, _ctx); /*int*/
    return kk_integer_mul(_x_x3594,_x_x3595,kk_context());
  }
}

kk_integer_t kk_display_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x2977 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2977) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x2978;
    bool _brw_x2979 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x2978 = _brw_x2979; /*bool*/
    if (_match_x2978) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_display_hc__intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_box_drop(sep, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3597 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_std_core_types__list _pat_1 = _con_x3597->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_box_t x = _con_x3597->head;
      kk_reuse_t _ru_x3012 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        _ru_x3012 = (kk_datatype_ptr_reuse(xs, _ctx));
      }
      else {
        kk_box_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_box_drop(sep, _ctx);
      return kk_std_core_types__new_Cons(_ru_x3012, 0, x, kk_std_core_types__new_Nil(_ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x3598 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3598->head;
    kk_std_core_types__list rest = _con_x3598->tail;
    kk_reuse_t _ru_x3013 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x3013 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__list ys_10078;
    kk_box_t _x_x3599 = kk_box_dup(sep, _ctx); /*5291*/
    ys_10078 = kk_display_hc__intersperse(rest, _x_x3599, _ctx); /*list<5291>*/
    kk_std_core_types__list _x_x3600;
    kk_std_core_types__list _x_x3601 = kk_std_core_types__new_Cons(_ru_x3013, 0, sep, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3600 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_0, _x_x3601, _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3600, ys_10078, _ctx);
  }
}


// lift anonymous function
struct kk_display_hc__sum_fun3603__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__sum_fun3603(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__sum_fun3603(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__sum_fun3603, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__sum_fun3603(kk_function_t _fself, kk_box_t _b_x134, kk_box_t _b_x135, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x3604;
  kk_integer_t _x_x3605 = kk_integer_unbox(_b_x134, _ctx); /*int*/
  kk_integer_t _x_x3606 = kk_integer_unbox(_b_x135, _ctx); /*int*/
  _x_x3604 = kk_std_core_int__lp__plus__rp_(_x_x3605, _x_x3606, _ctx); /*int*/
  return kk_integer_box(_x_x3604, _ctx);
}

kk_integer_t kk_display_hc__sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3602 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(0), _ctx), kk_display_new_hc__sum_fun3603(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3602, _ctx);
}


// lift anonymous function
struct kk_display_hc__product_fun3608__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__product_fun3608(kk_function_t _fself, kk_box_t _b_x142, kk_box_t _b_x143, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__product_fun3608(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__product_fun3608, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__product_fun3608(kk_function_t _fself, kk_box_t _b_x142, kk_box_t _b_x143, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t a_147 = kk_integer_unbox(_b_x142, _ctx); /*int*/;
  kk_integer_t b_148 = kk_integer_unbox(_b_x143, _ctx); /*int*/;
  kk_integer_t _x_x3609 = kk_integer_mul(a_147,b_148,kk_context()); /*int*/
  return kk_integer_box(_x_x3609, _ctx);
}

kk_integer_t kk_display_hc__product(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3607 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(1), _ctx), kk_display_new_hc__product_fun3608(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3607, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_display__mlift_hc__scan_11133(kk_box_t init, kk_std_core_types__list _y_x10759, kk_context_t* _ctx) { /* forall<a,e> (init : a, list<a>) -> e list<a> */ 
  kk_std_core_types__list _x_x3610 = kk_std_core_types__new_Cons(kk_reuse_null, 0, init, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  return kk_std_core_list_append(_x_x3610, _y_x10759, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__scan_11134_fun3612__t {
  struct kk_function_s _base;
  kk_box_t init_0;
};
static kk_box_t kk_display__mlift_hc__scan_11134_fun3612(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__scan_11134_fun3612(kk_box_t init_0, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__scan_11134_fun3612__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__scan_11134_fun3612__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__scan_11134_fun3612, kk_context());
  _self->init_0 = init_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__scan_11134_fun3612(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__scan_11134_fun3612__t* _self = kk_function_as(struct kk_display__mlift_hc__scan_11134_fun3612__t*, _fself, _ctx);
  kk_box_t init_0 = _self->init_0; /* 5408 */
  kk_drop_match(_self, {kk_box_dup(init_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10759_0_152 = kk_std_core_types__list_unbox(_b_x150, KK_OWNED, _ctx); /*list<5408>*/;
  kk_std_core_types__list _x_x3613 = kk_display__mlift_hc__scan_11133(init_0, _y_x10759_0_152, _ctx); /*list<5408>*/
  return kk_std_core_types__list_box(_x_x3613, _ctx);
}

kk_std_core_types__list kk_display__mlift_hc__scan_11134(kk_function_t f, kk_box_t init_0, kk_std_core_types__list rest, kk_box_t _y_x10758, kk_context_t* _ctx) { /* forall<a,b,e> (f : (b, a) -> e b, init : b, rest : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list x_11201 = kk_display_hc__scan(rest, _y_x10758, f, _ctx); /*list<5408>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11201, _ctx);
    kk_box_t _x_x3611 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__scan_11134_fun3612(init_0, _ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x3611, KK_OWNED, _ctx);
  }
  {
    return kk_display__mlift_hc__scan_11133(init_0, x_11201, _ctx);
  }
}


// lift anonymous function
struct kk_display_hc__scan_fun3618__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  kk_box_t init_1;
  kk_std_core_types__list rest_0;
};
static kk_box_t kk_display_hc__scan_fun3618(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__scan_fun3618(kk_function_t f_0, kk_box_t init_1, kk_std_core_types__list rest_0, kk_context_t* _ctx) {
  struct kk_display_hc__scan_fun3618__t* _self = kk_function_alloc_as(struct kk_display_hc__scan_fun3618__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__scan_fun3618, kk_context());
  _self->f_0 = f_0;
  _self->init_1 = init_1;
  _self->rest_0 = rest_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__scan_fun3618(kk_function_t _fself, kk_box_t _b_x154, kk_context_t* _ctx) {
  struct kk_display_hc__scan_fun3618__t* _self = kk_function_as(struct kk_display_hc__scan_fun3618__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (5408, 5407) -> 5409 5408 */
  kk_box_t init_1 = _self->init_1; /* 5408 */
  kk_std_core_types__list rest_0 = _self->rest_0; /* list<5407> */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_box_dup(init_1, _ctx);kk_std_core_types__list_dup(rest_0, _ctx);}, {}, _ctx)
  kk_box_t _y_x10758_0_159 = _b_x154; /*5408*/;
  kk_std_core_types__list _x_x3619 = kk_display__mlift_hc__scan_11134(f_0, init_1, rest_0, _y_x10758_0_159, _ctx); /*list<5408>*/
  return kk_std_core_types__list_box(_x_x3619, _ctx);
}


// lift anonymous function
struct kk_display_hc__scan_fun3621__t {
  struct kk_function_s _base;
  kk_box_t init_1;
};
static kk_box_t kk_display_hc__scan_fun3621(kk_function_t _fself, kk_box_t _b_x156, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__scan_fun3621(kk_box_t init_1, kk_context_t* _ctx) {
  struct kk_display_hc__scan_fun3621__t* _self = kk_function_alloc_as(struct kk_display_hc__scan_fun3621__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__scan_fun3621, kk_context());
  _self->init_1 = init_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__scan_fun3621(kk_function_t _fself, kk_box_t _b_x156, kk_context_t* _ctx) {
  struct kk_display_hc__scan_fun3621__t* _self = kk_function_as(struct kk_display_hc__scan_fun3621__t*, _fself, _ctx);
  kk_box_t init_1 = _self->init_1; /* 5408 */
  kk_drop_match(_self, {kk_box_dup(init_1, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10759_1_160 = kk_std_core_types__list_unbox(_b_x156, KK_OWNED, _ctx); /*list<5408>*/;
  kk_std_core_types__list _x_x3622 = kk_display__mlift_hc__scan_11133(init_1, _y_x10759_1_160, _ctx); /*list<5408>*/
  return kk_std_core_types__list_box(_x_x3622, _ctx);
}

kk_std_core_types__list kk_display_hc__scan(kk_std_core_types__list xs, kk_box_t init_1, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, init : b, f : (b, a) -> e b) -> e list<b> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(f_0, _ctx);
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3614 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3614->head;
    kk_std_core_types__list rest_0 = _con_x3614->tail;
    kk_reuse_t _ru_x3014 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x3014 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_1_11203;
    kk_function_t _x_x3616 = kk_function_dup(f_0, _ctx); /*(5408, 5407) -> 5409 5408*/
    kk_box_t _x_x3615 = kk_box_dup(init_1, _ctx); /*5408*/
    x_1_11203 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x3616, (_x_x3616, _x_x3615, x_0, _ctx), _ctx); /*5408*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x3014,kk_context());
      kk_box_drop(x_1_11203, _ctx);
      kk_box_t _x_x3617 = kk_std_core_hnd_yield_extend(kk_display_new_hc__scan_fun3618(f_0, init_1, rest_0, _ctx), _ctx); /*10001*/
      return kk_std_core_types__list_unbox(_x_x3617, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list x_2_11206 = kk_display_hc__scan(rest_0, x_1_11203, f_0, _ctx); /*list<5408>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x3014,kk_context());
        kk_std_core_types__list_drop(x_2_11206, _ctx);
        kk_box_t _x_x3620 = kk_std_core_hnd_yield_extend(kk_display_new_hc__scan_fun3621(init_1, _ctx), _ctx); /*10001*/
        return kk_std_core_types__list_unbox(_x_x3620, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list _x_x3623 = kk_std_core_types__new_Cons(_ru_x3014, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        return kk_std_core_list_append(_x_x3623, x_2_11206, _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_display_hc__zip__with_fun3624__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_display_hc__zip__with_fun3624(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__zip__with_fun3624(kk_function_t f, kk_context_t* _ctx) {
  struct kk_display_hc__zip__with_fun3624__t* _self = kk_function_alloc_as(struct kk_display_hc__zip__with_fun3624__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__zip__with_fun3624, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__zip__with_fun3624(kk_function_t _fself, kk_box_t _b_x163, kk_context_t* _ctx) {
  struct kk_display_hc__zip__with_fun3624__t* _self = kk_function_as(struct kk_display_hc__zip__with_fun3624__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (5618, 5619) -> 5621 5620 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_box_t _x_x3625;
  kk_std_core_types__tuple2 _match_x2960;
  kk_box_t _x_x3626 = kk_box_dup(_b_x163, _ctx); /*10001*/
  _match_x2960 = kk_std_core_types__tuple2_unbox(_x_x3626, KK_OWNED, _ctx); /*(5618, 5619)*/
  {
    kk_box_t _x = _match_x2960.fst;
    kk_box_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2960, _ctx);
    _x_x3625 = _x; /*5618*/
  }
  kk_box_t _x_x3627;
  kk_std_core_types__tuple2 _match_x2959 = kk_std_core_types__tuple2_unbox(_b_x163, KK_OWNED, _ctx); /*(5618, 5619)*/;
  {
    kk_box_t _x_0 = _match_x2959.snd;
    kk_box_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2959, _ctx);
    _x_x3627 = _x_0; /*5619*/
  }
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, _x_x3625, _x_x3627, _ctx), _ctx);
}

kk_std_core_types__list kk_display_hc__zip__with(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 
  kk_std_core_types__list _b_x161_164 = kk_std_core_list_zip(xs, ys, _ctx); /*list<(5618, 5619)>*/;
  kk_function_t _brw_x2961 = kk_display_new_hc__zip__with_fun3624(f, _ctx); /*(10001) -> 10003 5620*/;
  kk_std_core_types__list _brw_x2962 = kk_std_core_list_map(_b_x161_164, _brw_x2961, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2961, _ctx);
  return _brw_x2962;
}


// lift anonymous function
struct kk_display_hc__unique_fun3629__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__unique_fun3629(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__unique_fun3629(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__unique_fun3629, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_hc__unique_fun3630__t {
  struct kk_function_s _base;
  kk_integer_t x_185;
};
static bool kk_display_hc__unique_fun3630(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__unique_fun3630(kk_integer_t x_185, kk_context_t* _ctx) {
  struct kk_display_hc__unique_fun3630__t* _self = kk_function_alloc_as(struct kk_display_hc__unique_fun3630__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__unique_fun3630, kk_context());
  _self->x_185 = x_185;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__unique_fun3630(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx) {
  struct kk_display_hc__unique_fun3630__t* _self = kk_function_as(struct kk_display_hc__unique_fun3630__t*, _fself, _ctx);
  kk_integer_t x_185 = _self->x_185; /* int */
  kk_drop_match(_self, {kk_integer_dup(x_185, _ctx);}, {}, _ctx)
  bool _brw_x2958 = kk_integer_eq_borrow(hc____el,x_185,kk_context()); /*bool*/;
  kk_integer_drop(hc____el, _ctx);
  kk_integer_drop(x_185, _ctx);
  return _brw_x2958;
}


// lift anonymous function
struct kk_display_hc__unique_fun3632__t {
  struct kk_function_s _base;
  kk_function_t _b_x168_181;
};
static bool kk_display_hc__unique_fun3632(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__unique_fun3632(kk_function_t _b_x168_181, kk_context_t* _ctx) {
  struct kk_display_hc__unique_fun3632__t* _self = kk_function_alloc_as(struct kk_display_hc__unique_fun3632__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__unique_fun3632, kk_context());
  _self->_b_x168_181 = _b_x168_181;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__unique_fun3632(kk_function_t _fself, kk_box_t _b_x169, kk_context_t* _ctx) {
  struct kk_display_hc__unique_fun3632__t* _self = kk_function_as(struct kk_display_hc__unique_fun3632__t*, _fself, _ctx);
  kk_function_t _b_x168_181 = _self->_b_x168_181; /* (hc__el : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x168_181, _ctx);}, {}, _ctx)
  kk_integer_t _x_x3633 = kk_integer_unbox(_b_x169, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_context_t*), _b_x168_181, (_b_x168_181, _x_x3633, _ctx), _ctx);
}
static kk_box_t kk_display_hc__unique_fun3629(kk_function_t _fself, kk_box_t _b_x175, kk_box_t _b_x176, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list acc_184 = kk_std_core_types__list_unbox(_b_x175, KK_OWNED, _ctx); /*list<int>*/;
  kk_integer_t x_185 = kk_integer_unbox(_b_x176, _ctx); /*int*/;
  kk_std_core_types__list _b_x167_180 = kk_std_core_types__list_dup(acc_184, _ctx); /*list<int>*/;
  kk_function_t _b_x168_181;
  kk_integer_dup(x_185, _ctx);
  _b_x168_181 = kk_display_new_hc__unique_fun3630(x_185, _ctx); /*(hc__el : int) -> bool*/
  kk_std_core_types__list _x_x3631;
  bool _match_x2957 = kk_std_core_list_any(_b_x167_180, kk_display_new_hc__unique_fun3632(_b_x168_181, _ctx), _ctx); /*bool*/;
  if (_match_x2957) {
    kk_integer_drop(x_185, _ctx);
    _x_x3631 = acc_184; /*list<int>*/
  }
  else {
    kk_std_core_types__list _x_x3634 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(x_185, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3631 = kk_std_core_list_append(acc_184, _x_x3634, _ctx); /*list<int>*/
  }
  return kk_std_core_types__list_box(_x_x3631, _ctx);
}

kk_std_core_types__list kk_display_hc__unique(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> list<int> */ 
  kk_box_t _x_x3628 = kk_std_core_list_foldl(xs, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_display_new_hc__unique_fun3629(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x3628, KK_OWNED, _ctx);
}

kk_std_core_types__list kk_display_hc__chunks(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> div list<list<a>> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(n, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list _b_x186_188;
    kk_std_core_types__list _x_x3635 = kk_std_core_types__list_dup(xs, _ctx); /*list<5881>*/
    kk_integer_t _x_x3636 = kk_integer_dup(n, _ctx); /*int*/
    _b_x186_188 = kk_std_core_list_take(_x_x3635, _x_x3636, _ctx); /*list<5881>*/
    kk_std_core_types__list ys_10082;
    kk_std_core_types__list _x_x3637;
    kk_integer_t _x_x3638 = kk_integer_dup(n, _ctx); /*int*/
    _x_x3637 = kk_std_core_list_drop(xs, _x_x3638, _ctx); /*list<10001>*/
    ys_10082 = kk_display_hc__chunks(_x_x3637, n, _ctx); /*list<list<5881>>*/
    kk_std_core_types__list _x_x3639 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__list_box(_b_x186_188, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3639, ys_10082, _ctx);
  }
}


// lift anonymous function
struct kk_display_hc__words_fun3645__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__words_fun3645(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__words_fun3645(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__words_fun3645, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__words_fun3645(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3646;
  kk_char_t _x_x3647 = kk_char_unbox(_b_x192, KK_OWNED, _ctx); /*char*/
  _x_x3646 = kk_std_core_string_char_fs_string(_x_x3647, _ctx); /*string*/
  return kk_string_box(_x_x3646);
}


// lift anonymous function
struct kk_display_hc__words_fun3650__t {
  struct kk_function_s _base;
};
static bool kk_display_hc__words_fun3650(kk_function_t _fself, kk_box_t _b_x195, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__words_fun3650(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__words_fun3650, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_display_hc__words_fun3650(kk_function_t _fself, kk_box_t _b_x195, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10088;
  kk_integer_t _brw_x2948;
  kk_string_t _x_x3651 = kk_string_unbox(_b_x195); /*string*/
  _brw_x2948 = kk_std_core_string_chars_fs_count(_x_x3651, _ctx); /*int*/
  bool _brw_x2949 = kk_integer_eq_borrow(_brw_x2948,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2948, _ctx);
  b_10088 = _brw_x2949; /*bool*/
  if (b_10088) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_display_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x193_196;
  bool _match_x2950;
  kk_string_t _x_x3641;
  kk_define_string_literal(static, _s_x3642, 1, " ", _ctx)
  _x_x3641 = kk_string_dup(_s_x3642, _ctx); /*string*/
  kk_string_t _x_x3643 = kk_string_empty(); /*string*/
  _match_x2950 = kk_string_is_eq(_x_x3641,_x_x3643,kk_context()); /*bool*/
  if (_match_x2950) {
    kk_std_core_types__list _b_x190_198 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2951 = kk_display_new_hc__words_fun3645(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2952 = kk_std_core_list_map(_b_x190_198, _brw_x2951, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2951, _ctx);
    _b_x193_196 = _brw_x2952; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x3648;
    kk_define_string_literal(static, _s_x3649, 1, " ", _ctx)
    _x_x3648 = kk_string_dup(_s_x3649, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3648,kk_context()); /*vector<string>*/
    _b_x193_196 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x193_196, kk_display_new_hc__words_fun3650(_ctx), _ctx);
}


// lift anonymous function
struct kk_display_hc__lines_fun3656__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__lines_fun3656(kk_function_t _fself, kk_box_t _b_x203, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__lines_fun3656(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__lines_fun3656, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__lines_fun3656(kk_function_t _fself, kk_box_t _b_x203, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3657;
  kk_char_t _x_x3658 = kk_char_unbox(_b_x203, KK_OWNED, _ctx); /*char*/
  _x_x3657 = kk_std_core_string_char_fs_string(_x_x3658, _ctx); /*string*/
  return kk_string_box(_x_x3657);
}

kk_std_core_types__list kk_display_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x2945;
  kk_string_t _x_x3652;
  kk_define_string_literal(static, _s_x3653, 1, "\n", _ctx)
  _x_x3652 = kk_string_dup(_s_x3653, _ctx); /*string*/
  kk_string_t _x_x3654 = kk_string_empty(); /*string*/
  _match_x2945 = kk_string_is_eq(_x_x3652,_x_x3654,kk_context()); /*bool*/
  if (_match_x2945) {
    kk_std_core_types__list _b_x201_204 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2946 = kk_display_new_hc__lines_fun3656(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2947 = kk_std_core_list_map(_b_x201_204, _brw_x2946, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2946, _ctx);
    return _brw_x2947;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x3659;
    kk_define_string_literal(static, _s_x3660, 1, "\n", _ctx)
    _x_x3659 = kk_string_dup(_s_x3660, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3659,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_display_hc__count__substr_fun3668__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__count__substr_fun3668(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__count__substr_fun3668(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__count__substr_fun3668, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__count__substr_fun3668(kk_function_t _fself, kk_box_t _b_x208, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3669;
  kk_char_t _x_x3670 = kk_char_unbox(_b_x208, KK_OWNED, _ctx); /*char*/
  _x_x3669 = kk_std_core_string_char_fs_string(_x_x3670, _ctx); /*string*/
  return kk_string_box(_x_x3669);
}

kk_integer_t kk_display_hc__count__substr(kk_string_t s, kk_string_t hc__sub_0, kk_context_t* _ctx) { /* (s : string, hc_sub : string) -> int */ 
  kk_std_core_types__list xs_10100;
  bool _match_x2942;
  kk_string_t _x_x3665 = kk_string_dup(hc__sub_0, _ctx); /*string*/
  kk_string_t _x_x3666 = kk_string_empty(); /*string*/
  _match_x2942 = kk_string_is_eq(_x_x3665,_x_x3666,kk_context()); /*bool*/
  if (_match_x2942) {
    kk_string_drop(hc__sub_0, _ctx);
    kk_std_core_types__list _b_x206_209 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2943 = kk_display_new_hc__count__substr_fun3668(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2944 = kk_std_core_list_map(_b_x206_209, _brw_x2943, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2943, _ctx);
    xs_10100 = _brw_x2944; /*list<string>*/
  }
  else {
    kk_vector_t v_10011 = kk_string_splitv(s,hc__sub_0,kk_context()); /*vector<string>*/;
    xs_10100 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_integer_t x_10098 = kk_std_core_list__lift_length_6003(xs_10100, kk_integer_from_small(0), _ctx); /*int*/;
  return kk_integer_add_small_const(x_10098, -1, _ctx);
}

kk_string_t kk_display_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x2941 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2941) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3672 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3673;
    kk_integer_t _x_x3674 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x3673 = kk_display_hc__repeat__str(s, _x_x3674, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3672, _x_x3673, _ctx);
  }
}

kk_string_t kk_display_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10109;
  kk_string_t _x_x3675 = kk_string_dup(s, _ctx); /*string*/
  y_10109 = kk_std_core_string_chars_fs_count(_x_x3675, _ctx); /*int*/
  kk_integer_t b_10107 = kk_integer_sub(width,y_10109,kk_context()); /*int*/;
  kk_string_t _x_x3676;
  kk_integer_t _x_x3677;
  bool _match_x2940 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10107,kk_context()); /*bool*/;
  if (_match_x2940) {
    kk_integer_drop(b_10107, _ctx);
    _x_x3677 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3677 = b_10107; /*int*/
  }
  _x_x3676 = kk_display_hc__repeat__str(ch, _x_x3677, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3676, s, _ctx);
}

kk_string_t kk_display_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10113;
  kk_string_t _x_x3678 = kk_string_dup(s, _ctx); /*string*/
  y_10113 = kk_std_core_string_chars_fs_count(_x_x3678, _ctx); /*int*/
  kk_integer_t b_10111 = kk_integer_sub(width,y_10113,kk_context()); /*int*/;
  kk_string_t _x_x3679;
  kk_integer_t _x_x3680;
  bool _match_x2939 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10111,kk_context()); /*bool*/;
  if (_match_x2939) {
    kk_integer_drop(b_10111, _ctx);
    _x_x3680 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3680 = b_10111; /*int*/
  }
  _x_x3679 = kk_display_hc__repeat__str(ch, _x_x3680, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x3679, _ctx);
}

kk_string_t kk_display_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10117;
  kk_string_t _x_x3681 = kk_string_dup(s, _ctx); /*string*/
  y_10117 = kk_std_core_string_chars_fs_count(_x_x3681, _ctx); /*int*/
  kk_integer_t b_10115 = kk_integer_sub(width,y_10117,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x2938 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10115,kk_context()); /*bool*/;
  if (_match_x2938) {
    kk_integer_drop(b_10115, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10115; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x3682 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x3682,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x3683 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x3683,kk_context()); /*int*/
  kk_string_t _x_x3684;
  kk_string_t _x_x3685;
  kk_string_t _x_x3686 = kk_string_dup(ch, _ctx); /*string*/
  _x_x3685 = kk_display_hc__repeat__str(_x_x3686, left, _ctx); /*string*/
  _x_x3684 = kk_std_core_types__lp__plus__plus__rp_(_x_x3685, s, _ctx); /*string*/
  kk_string_t _x_x3687 = kk_display_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3684, _x_x3687, _ctx);
}

kk_string_t kk_display_hc__capitalise(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2935;
  kk_integer_t _brw_x2936;
  kk_string_t _x_x3690 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2936 = kk_std_core_string_chars_fs_count(_x_x3690, _ctx); /*int*/
  bool _brw_x2937 = kk_integer_eq_borrow(_brw_x2936,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2936, _ctx);
  _match_x2935 = _brw_x2937; /*bool*/
  if (_match_x2935) {
    kk_string_drop(s, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3692;
    kk_string_t _x_x3693;
    kk_std_core_types__list _x_x3694;
    kk_std_core_types__list _x_x3695;
    kk_string_t _x_x3696 = kk_string_dup(s, _ctx); /*string*/
    _x_x3695 = kk_std_core_string_list(_x_x3696, _ctx); /*list<char>*/
    _x_x3694 = kk_std_core_list_take(_x_x3695, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3693 = kk_std_core_string_listchar_fs_string(_x_x3694, _ctx); /*string*/
    _x_x3692 = kk_std_core_string_to_upper(_x_x3693, _ctx); /*string*/
    kk_string_t _x_x3697;
    kk_string_t _x_x3698;
    kk_std_core_types__list _x_x3699;
    kk_std_core_types__list _x_x3700 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3699 = kk_std_core_list_drop(_x_x3700, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3698 = kk_std_core_string_listchar_fs_string(_x_x3699, _ctx); /*string*/
    _x_x3697 = kk_std_core_string_to_lower(_x_x3698, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3692, _x_x3697, _ctx);
  }
}


// lift anonymous function
struct kk_display_hc__capwords_fun3701__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__capwords_fun3701(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__capwords_fun3701(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__capwords_fun3701, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__capwords_fun3701(kk_function_t _fself, kk_box_t _b_x213, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3702;
  kk_string_t _x_x3703 = kk_string_unbox(_b_x213); /*string*/
  _x_x3702 = kk_display_hc__capitalise(_x_x3703, _ctx); /*string*/
  return kk_string_box(_x_x3702);
}

kk_string_t kk_display_hc__capwords(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  kk_std_core_types__list _b_x211_214 = kk_display_hc__words(s, _ctx); /*list<string>*/;
  kk_std_core_types__list xs_10120;
  kk_function_t _brw_x2933 = kk_display_new_hc__capwords_fun3701(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2934 = kk_std_core_list_map(_b_x211_214, _brw_x2933, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2933, _ctx);
  xs_10120 = _brw_x2934; /*list<string>*/
  kk_string_t _x_x3704;
  kk_define_string_literal(static, _s_x3705, 1, " ", _ctx)
  _x_x3704 = kk_string_dup(_s_x3705, _ctx); /*string*/
  return kk_std_core_list_joinsep(xs_10120, _x_x3704, _ctx);
}

kk_string_t kk_display_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10122;
  kk_string_t _x_x3709 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3710 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10122 = kk_std_core_sslice_starts_with(_x_x3709, _x_x3710, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10122, _ctx)) {
    kk_box_t _box_x216 = maybe_10122._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10122, _ctx);
    kk_std_core_types__list _x_x3711;
    kk_std_core_types__list _x_x3712 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3713 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x3711 = kk_std_core_list_drop(_x_x3712, _x_x3713, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3711, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}

kk_string_t kk_display_hc__removesuffix(kk_string_t s, kk_string_t suf, kk_context_t* _ctx) { /* (s : string, suf : string) -> string */ 
  kk_std_core_types__maybe maybe_10123;
  kk_string_t _x_x3714 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3715 = kk_string_dup(suf, _ctx); /*string*/
  maybe_10123 = kk_std_core_sslice_ends_with(_x_x3714, _x_x3715, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10123, _ctx)) {
    kk_box_t _box_x217 = maybe_10123._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10123, _ctx);
    kk_integer_t x_10124;
    kk_string_t _x_x3716 = kk_string_dup(s, _ctx); /*string*/
    x_10124 = kk_std_core_string_chars_fs_count(_x_x3716, _ctx); /*int*/
    kk_integer_t y_10125 = kk_std_core_string_chars_fs_count(suf, _ctx); /*int*/;
    kk_std_core_types__list _x_x3717;
    kk_std_core_types__list _x_x3718 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3719 = kk_integer_sub(x_10124,y_10125,kk_context()); /*int*/
    _x_x3717 = kk_std_core_list_take(_x_x3718, _x_x3719, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3717, _ctx);
  }
  {
    kk_string_drop(suf, _ctx);
    return s;
  }
}


// lift anonymous function
struct kk_display_hc__all__digits_fun3725__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__all__digits_fun3725(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__all__digits_fun3725(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__all__digits_fun3725, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__all__digits_fun3725(kk_function_t _fself, kk_box_t _b_x220, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3726;
  kk_char_t _x_x3727 = kk_char_unbox(_b_x220, KK_OWNED, _ctx); /*char*/
  _x_x3726 = kk_std_core_string_char_fs_string(_x_x3727, _ctx); /*string*/
  return kk_string_box(_x_x3726);
}


// lift anonymous function
struct kk_display_hc__all__digits_fun3730__t {
  struct kk_function_s _base;
};
static bool kk_display_hc__all__digits_fun3730(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__all__digits_fun3730(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__all__digits_fun3730, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_display_hc__all__digits_fun3730(kk_function_t _fself, kk_box_t _b_x225, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _match_x2921;
  kk_std_core_types__order _x_x3731;
  kk_string_t _brw_x2926;
  kk_box_t _x_x3732 = kk_box_dup(_b_x225, _ctx); /*10001*/
  _brw_x2926 = kk_string_unbox(_x_x3732); /*string*/
  kk_string_t _brw_x2925;
  kk_define_string_literal(static, _s_x3733, 1, "0", _ctx)
  _brw_x2925 = kk_string_dup(_s_x3733, _ctx); /*string*/
  kk_std_core_types__order _brw_x2927 = kk_std_core_string_cmp(_brw_x2926, _brw_x2925, _ctx); /*order*/;
  kk_string_drop(_brw_x2926, _ctx);
  kk_string_drop(_brw_x2925, _ctx);
  _x_x3731 = _brw_x2927; /*order*/
  _match_x2921 = kk_std_core_order__lp__gt__rp_(_x_x3731, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x2921) {
    kk_std_core_types__order _x_x3734;
    kk_string_t _brw_x2923 = kk_string_unbox(_b_x225); /*string*/;
    kk_string_t _brw_x2922;
    kk_define_string_literal(static, _s_x3735, 1, "9", _ctx)
    _brw_x2922 = kk_string_dup(_s_x3735, _ctx); /*string*/
    kk_std_core_types__order _brw_x2924 = kk_std_core_string_cmp(_brw_x2923, _brw_x2922, _ctx); /*order*/;
    kk_string_drop(_brw_x2923, _ctx);
    kk_string_drop(_brw_x2922, _ctx);
    _x_x3734 = _brw_x2924; /*order*/
    return kk_std_core_order__lp__lt__rp_(_x_x3734, kk_std_core_types__new_Gt(_ctx), _ctx);
  }
  {
    kk_box_drop(_b_x225, _ctx);
    return false;
  }
}

bool kk_display_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2920;
  kk_integer_t _brw_x2931;
  kk_string_t _x_x3720 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2931 = kk_std_core_string_chars_fs_count(_x_x3720, _ctx); /*int*/
  bool _brw_x2932 = kk_integer_eq_borrow(_brw_x2931,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2931, _ctx);
  _match_x2920 = _brw_x2932; /*bool*/
  if (_match_x2920) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list chars;
    bool _match_x2928;
    kk_string_t _x_x3721 = kk_string_empty(); /*string*/
    kk_string_t _x_x3723 = kk_string_empty(); /*string*/
    _match_x2928 = kk_string_is_eq(_x_x3721,_x_x3723,kk_context()); /*bool*/
    if (_match_x2928) {
      kk_std_core_types__list _b_x218_221 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
      kk_function_t _brw_x2929 = kk_display_new_hc__all__digits_fun3725(_ctx); /*(10001) -> 10003 10002*/;
      kk_std_core_types__list _brw_x2930 = kk_std_core_list_map(_b_x218_221, _brw_x2929, _ctx); /*list<10002>*/;
      kk_function_drop(_brw_x2929, _ctx);
      chars = _brw_x2930; /*list<string>*/
    }
    else {
      kk_vector_t v_10011;
      kk_string_t _x_x3728 = kk_string_empty(); /*string*/
      v_10011 = kk_string_splitv(s,_x_x3728,kk_context()); /*vector<string>*/
      chars = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
    }
    return kk_std_core_list_all(chars, kk_display_new_hc__all__digits_fun3730(_ctx), _ctx);
  }
}

kk_std_core_types__maybe kk_display_hc__parse__part(kk_string_t s, kk_integer_t start, kk_integer_t len, kk_context_t* _ctx) { /* (s : string, start : int, len : int) -> maybe<int> */ 
  kk_integer_t x_10135;
  kk_integer_t _x_x3736 = kk_integer_dup(start, _ctx); /*int*/
  x_10135 = kk_integer_add(_x_x3736,len,kk_context()); /*int*/
  kk_string_t s_0_10133;
  kk_std_core_types__list _x_x3737;
  kk_std_core_types__list _x_x3738;
  kk_std_core_types__list _x_x3739 = kk_std_core_string_list(s, _ctx); /*list<char>*/
  kk_integer_t _x_x3740 = kk_integer_dup(start, _ctx); /*int*/
  _x_x3738 = kk_std_core_list_drop(_x_x3739, _x_x3740, _ctx); /*list<10001>*/
  kk_integer_t _x_x3741 = kk_integer_sub(x_10135,start,kk_context()); /*int*/
  _x_x3737 = kk_std_core_list_take(_x_x3738, _x_x3741, _ctx); /*list<10001>*/
  s_0_10133 = kk_std_core_string_listchar_fs_string(_x_x3737, _ctx); /*string*/
  bool _x_x3742;
  kk_std_core_types__optional _match_x2919 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2919, _ctx)) {
    kk_box_t _box_x229 = _match_x2919._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x229);
    kk_std_core_types__optional_drop(_match_x2919, _ctx);
    _x_x3742 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2919, _ctx);
    _x_x3742 = false; /*bool*/
  }
  return kk_std_core_int_xparse(s_0_10133, _x_x3742, _ctx);
}

bool kk_display_hc__in__range(kk_integer_t n, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (n : int, lo : int, hi : int) -> bool */ 
  bool _match_x2916;
  bool _brw_x2918 = kk_integer_gte_borrow(n,lo,kk_context()); /*bool*/;
  kk_integer_drop(lo, _ctx);
  _match_x2916 = _brw_x2918; /*bool*/
  if (_match_x2916) {
    bool _brw_x2917 = kk_integer_lte_borrow(n,hi,kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return _brw_x2917;
  }
  {
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return false;
  }
}

kk_integer_t kk_display_hc__days__in__month(kk_integer_t year, kk_integer_t month, kk_context_t* _ctx) { /* (year : int, month : int) -> int */ 
  if (kk_integer_eq_borrow(month, kk_integer_from_small(1), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(2), _ctx)) {
    kk_integer_drop(month, _ctx);
    bool _match_x2904;
    kk_integer_t _brw_x2914;
    kk_integer_t _x_x3743 = kk_integer_dup(year, _ctx); /*int*/
    _brw_x2914 = kk_integer_mod(_x_x3743,(kk_integer_from_small(4)),kk_context()); /*int*/
    bool _brw_x2915 = kk_integer_eq_borrow(_brw_x2914,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2914, _ctx);
    _match_x2904 = _brw_x2915; /*bool*/
    if (_match_x2904) {
      bool _match_x2908;
      kk_integer_t _brw_x2912;
      kk_integer_t _x_x3744 = kk_integer_dup(year, _ctx); /*int*/
      _brw_x2912 = kk_integer_mod(_x_x3744,(kk_integer_from_small(100)),kk_context()); /*int*/
      bool _brw_x2913 = kk_integer_neq_borrow(_brw_x2912,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2912, _ctx);
      _match_x2908 = _brw_x2913; /*bool*/
      if (_match_x2908) {
        kk_integer_drop(year, _ctx);
        return kk_integer_from_small(29);
      }
      {
        bool _match_x2909;
        kk_integer_t _brw_x2910 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
        bool _brw_x2911 = kk_integer_eq_borrow(_brw_x2910,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2910, _ctx);
        _match_x2909 = _brw_x2911; /*bool*/
        if (_match_x2909) {
          return kk_integer_from_small(29);
        }
        {
          return kk_integer_from_small(28);
        }
      }
    }
    {
      bool _match_x2905;
      kk_integer_t _brw_x2906 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
      bool _brw_x2907 = kk_integer_eq_borrow(_brw_x2906,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2906, _ctx);
      _match_x2905 = _brw_x2907; /*bool*/
      if (_match_x2905) {
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

bool kk_display_hc__is__valid__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2889;
  kk_integer_t _brw_x2902;
  kk_string_t _x_x3745 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2902 = kk_std_core_string_chars_fs_count(_x_x3745, _ctx); /*int*/
  bool _brw_x2903 = kk_integer_neq_borrow(_brw_x2902,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2902, _ctx);
  _match_x2889 = _brw_x2903; /*bool*/
  if (_match_x2889) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2890;
    kk_string_t _x_x3746;
    kk_std_core_types__list _x_x3747;
    kk_std_core_types__list _x_x3748;
    kk_std_core_types__list _x_x3749;
    kk_string_t _x_x3750 = kk_string_dup(s, _ctx); /*string*/
    _x_x3749 = kk_std_core_string_list(_x_x3750, _ctx); /*list<char>*/
    _x_x3748 = kk_std_core_list_drop(_x_x3749, kk_integer_from_small(4), _ctx); /*list<10001>*/
    kk_integer_t _x_x3751 = kk_integer_add_small_const(kk_integer_from_small(5), -4, _ctx); /*int*/
    _x_x3747 = kk_std_core_list_take(_x_x3748, _x_x3751, _ctx); /*list<10001>*/
    _x_x3746 = kk_std_core_string_listchar_fs_string(_x_x3747, _ctx); /*string*/
    kk_string_t _x_x3752;
    kk_define_string_literal(static, _s_x3753, 1, "-", _ctx)
    _x_x3752 = kk_string_dup(_s_x3753, _ctx); /*string*/
    _match_x2890 = kk_string_is_neq(_x_x3746,_x_x3752,kk_context()); /*bool*/
    if (_match_x2890) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool _match_x2891;
      kk_string_t _x_x3754;
      kk_std_core_types__list _x_x3755;
      kk_std_core_types__list _x_x3756;
      kk_std_core_types__list _x_x3757;
      kk_string_t _x_x3758 = kk_string_dup(s, _ctx); /*string*/
      _x_x3757 = kk_std_core_string_list(_x_x3758, _ctx); /*list<char>*/
      _x_x3756 = kk_std_core_list_drop(_x_x3757, kk_integer_from_small(7), _ctx); /*list<10001>*/
      kk_integer_t _x_x3759 = kk_integer_add_small_const(kk_integer_from_small(8), -7, _ctx); /*int*/
      _x_x3755 = kk_std_core_list_take(_x_x3756, _x_x3759, _ctx); /*list<10001>*/
      _x_x3754 = kk_std_core_string_listchar_fs_string(_x_x3755, _ctx); /*string*/
      kk_string_t _x_x3760;
      kk_define_string_literal(static, _s_x3761, 1, "-", _ctx)
      _x_x3760 = kk_string_dup(_s_x3761, _ctx); /*string*/
      _match_x2891 = kk_string_is_neq(_x_x3754,_x_x3760,kk_context()); /*bool*/
      if (_match_x2891) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        bool b_10143;
        kk_string_t _x_x3762;
        kk_std_core_types__list _x_x3763;
        kk_std_core_types__list _x_x3764;
        kk_std_core_types__list _x_x3765;
        kk_string_t _x_x3766 = kk_string_dup(s, _ctx); /*string*/
        _x_x3765 = kk_std_core_string_list(_x_x3766, _ctx); /*list<char>*/
        _x_x3764 = kk_std_core_list_drop(_x_x3765, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3767 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
        _x_x3763 = kk_std_core_list_take(_x_x3764, _x_x3767, _ctx); /*list<10001>*/
        _x_x3762 = kk_std_core_string_listchar_fs_string(_x_x3763, _ctx); /*string*/
        b_10143 = kk_display_hc__all__digits(_x_x3762, _ctx); /*bool*/
        if (b_10143) {
          bool b_0_10146;
          kk_string_t _x_x3768;
          kk_std_core_types__list _x_x3769;
          kk_std_core_types__list _x_x3770;
          kk_std_core_types__list _x_x3771;
          kk_string_t _x_x3772 = kk_string_dup(s, _ctx); /*string*/
          _x_x3771 = kk_std_core_string_list(_x_x3772, _ctx); /*list<char>*/
          _x_x3770 = kk_std_core_list_drop(_x_x3771, kk_integer_from_small(5), _ctx); /*list<10001>*/
          kk_integer_t _x_x3773 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
          _x_x3769 = kk_std_core_list_take(_x_x3770, _x_x3773, _ctx); /*list<10001>*/
          _x_x3768 = kk_std_core_string_listchar_fs_string(_x_x3769, _ctx); /*string*/
          b_0_10146 = kk_display_hc__all__digits(_x_x3768, _ctx); /*bool*/
          if (b_0_10146) {
            bool b_1_10149;
            kk_string_t _x_x3774;
            kk_std_core_types__list _x_x3775;
            kk_std_core_types__list _x_x3776;
            kk_std_core_types__list _x_x3777;
            kk_string_t _x_x3778 = kk_string_dup(s, _ctx); /*string*/
            _x_x3777 = kk_std_core_string_list(_x_x3778, _ctx); /*list<char>*/
            _x_x3776 = kk_std_core_list_drop(_x_x3777, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3779 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
            _x_x3775 = kk_std_core_list_take(_x_x3776, _x_x3779, _ctx); /*list<10001>*/
            _x_x3774 = kk_std_core_string_listchar_fs_string(_x_x3775, _ctx); /*string*/
            b_1_10149 = kk_display_hc__all__digits(_x_x3774, _ctx); /*bool*/
            if (b_1_10149) {
              kk_string_t s_0_10152;
              kk_std_core_types__list _x_x3780;
              kk_std_core_types__list _x_x3781;
              kk_std_core_types__list _x_x3782;
              kk_string_t _x_x3783 = kk_string_dup(s, _ctx); /*string*/
              _x_x3782 = kk_std_core_string_list(_x_x3783, _ctx); /*list<char>*/
              _x_x3781 = kk_std_core_list_drop(_x_x3782, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x3784 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
              _x_x3780 = kk_std_core_list_take(_x_x3781, _x_x3784, _ctx); /*list<10001>*/
              s_0_10152 = kk_std_core_string_listchar_fs_string(_x_x3780, _ctx); /*string*/
              kk_std_core_types__maybe _match_x2892;
              bool _x_x3785;
              kk_std_core_types__optional _match_x2901 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
              if (kk_std_core_types__is_Optional(_match_x2901, _ctx)) {
                kk_box_t _box_x230 = _match_x2901._cons._Optional.value;
                bool _uniq_hex_581 = kk_bool_unbox(_box_x230);
                kk_std_core_types__optional_drop(_match_x2901, _ctx);
                _x_x3785 = _uniq_hex_581; /*bool*/
              }
              else {
                kk_std_core_types__optional_drop(_match_x2901, _ctx);
                _x_x3785 = false; /*bool*/
              }
              _match_x2892 = kk_std_core_int_xparse(s_0_10152, _x_x3785, _ctx); /*maybe<int>*/
              if (kk_std_core_types__is_Just(_match_x2892, _ctx)) {
                kk_box_t _box_x231 = _match_x2892._cons.Just.value;
                kk_integer_t y_5 = kk_integer_unbox(_box_x231, _ctx);
                kk_integer_dup(y_5, _ctx);
                kk_std_core_types__maybe_drop(_match_x2892, _ctx);
                kk_string_t s_1_10156;
                kk_std_core_types__list _x_x3786;
                kk_std_core_types__list _x_x3787;
                kk_std_core_types__list _x_x3788;
                kk_string_t _x_x3789 = kk_string_dup(s, _ctx); /*string*/
                _x_x3788 = kk_std_core_string_list(_x_x3789, _ctx); /*list<char>*/
                _x_x3787 = kk_std_core_list_drop(_x_x3788, kk_integer_from_small(5), _ctx); /*list<10001>*/
                kk_integer_t _x_x3790 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
                _x_x3786 = kk_std_core_list_take(_x_x3787, _x_x3790, _ctx); /*list<10001>*/
                s_1_10156 = kk_std_core_string_listchar_fs_string(_x_x3786, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2893;
                bool _x_x3791;
                kk_std_core_types__optional _match_x2900 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2900, _ctx)) {
                  kk_box_t _box_x232 = _match_x2900._cons._Optional.value;
                  bool _uniq_hex_581_0 = kk_bool_unbox(_box_x232);
                  kk_std_core_types__optional_drop(_match_x2900, _ctx);
                  _x_x3791 = _uniq_hex_581_0; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2900, _ctx);
                  _x_x3791 = false; /*bool*/
                }
                _match_x2893 = kk_std_core_int_xparse(s_1_10156, _x_x3791, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2893, _ctx)) {
                  kk_box_t _box_x233 = _match_x2893._cons.Just.value;
                  kk_integer_t m = kk_integer_unbox(_box_x233, _ctx);
                  kk_integer_dup(m, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2893, _ctx);
                  kk_string_t s_2_10160;
                  kk_std_core_types__list _x_x3792;
                  kk_std_core_types__list _x_x3793;
                  kk_std_core_types__list _x_x3794 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x3793 = kk_std_core_list_drop(_x_x3794, kk_integer_from_small(8), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3795 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
                  _x_x3792 = kk_std_core_list_take(_x_x3793, _x_x3795, _ctx); /*list<10001>*/
                  s_2_10160 = kk_std_core_string_listchar_fs_string(_x_x3792, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2894;
                  bool _x_x3796;
                  kk_std_core_types__optional _match_x2899 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2899, _ctx)) {
                    kk_box_t _box_x234 = _match_x2899._cons._Optional.value;
                    bool _uniq_hex_581_1 = kk_bool_unbox(_box_x234);
                    kk_std_core_types__optional_drop(_match_x2899, _ctx);
                    _x_x3796 = _uniq_hex_581_1; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2899, _ctx);
                    _x_x3796 = false; /*bool*/
                  }
                  _match_x2894 = kk_std_core_int_xparse(s_2_10160, _x_x3796, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2894, _ctx)) {
                    kk_box_t _box_x235 = _match_x2894._cons.Just.value;
                    kk_integer_t d = kk_integer_unbox(_box_x235, _ctx);
                    kk_integer_dup(d, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2894, _ctx);
                    bool _match_x2895 = kk_integer_gte_borrow(m,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                    if (_match_x2895) {
                      bool _match_x2896 = kk_integer_lte_borrow(m,(kk_integer_from_small(12)),kk_context()); /*bool*/;
                      if (_match_x2896) {
                        kk_integer_t hi_0_10169 = kk_display_hc__days__in__month(y_5, m, _ctx); /*int*/;
                        bool _match_x2897 = kk_integer_gte_borrow(d,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                        if (_match_x2897) {
                          bool _brw_x2898 = kk_integer_lte_borrow(d,hi_0_10169,kk_context()); /*bool*/;
                          kk_integer_drop(d, _ctx);
                          kk_integer_drop(hi_0_10169, _ctx);
                          return _brw_x2898;
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

bool kk_display_hc__is__valid__time__short(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10170;
  kk_std_core_types__list _x_x3797;
  kk_std_core_types__list _x_x3798;
  kk_std_core_types__list _x_x3799;
  kk_string_t _x_x3800 = kk_string_dup(s, _ctx); /*string*/
  _x_x3799 = kk_std_core_string_list(_x_x3800, _ctx); /*list<char>*/
  _x_x3798 = kk_std_core_list_drop(_x_x3799, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x3801 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
  _x_x3797 = kk_std_core_list_take(_x_x3798, _x_x3801, _ctx); /*list<10001>*/
  s_0_10170 = kk_std_core_string_listchar_fs_string(_x_x3797, _ctx); /*string*/
  kk_std_core_types__maybe _match_x2880;
  bool _x_x3802;
  kk_std_core_types__optional _match_x2888 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2888, _ctx)) {
    kk_box_t _box_x236 = _match_x2888._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x236);
    kk_std_core_types__optional_drop(_match_x2888, _ctx);
    _x_x3802 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2888, _ctx);
    _x_x3802 = false; /*bool*/
  }
  _match_x2880 = kk_std_core_int_xparse(s_0_10170, _x_x3802, _ctx); /*maybe<int>*/
  if (kk_std_core_types__is_Just(_match_x2880, _ctx)) {
    kk_box_t _box_x237 = _match_x2880._cons.Just.value;
    kk_integer_t h = kk_integer_unbox(_box_x237, _ctx);
    kk_integer_dup(h, _ctx);
    kk_std_core_types__maybe_drop(_match_x2880, _ctx);
    kk_string_t s_1_10174;
    kk_std_core_types__list _x_x3803;
    kk_std_core_types__list _x_x3804;
    kk_std_core_types__list _x_x3805 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3804 = kk_std_core_list_drop(_x_x3805, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3806 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3803 = kk_std_core_list_take(_x_x3804, _x_x3806, _ctx); /*list<10001>*/
    s_1_10174 = kk_std_core_string_listchar_fs_string(_x_x3803, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2881;
    bool _x_x3807;
    kk_std_core_types__optional _match_x2887 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2887, _ctx)) {
      kk_box_t _box_x238 = _match_x2887._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x238);
      kk_std_core_types__optional_drop(_match_x2887, _ctx);
      _x_x3807 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2887, _ctx);
      _x_x3807 = false; /*bool*/
    }
    _match_x2881 = kk_std_core_int_xparse(s_1_10174, _x_x3807, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2881, _ctx)) {
      kk_box_t _box_x239 = _match_x2881._cons.Just.value;
      kk_integer_t m = kk_integer_unbox(_box_x239, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__maybe_drop(_match_x2881, _ctx);
      bool _match_x2882 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2882) {
        bool _match_x2883;
        bool _brw_x2886 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
        kk_integer_drop(h, _ctx);
        _match_x2883 = _brw_x2886; /*bool*/
        if (_match_x2883) {
          bool _match_x2884 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2884) {
            bool _brw_x2885 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
            kk_integer_drop(m, _ctx);
            return _brw_x2885;
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

bool kk_display_hc__is__valid__time__full(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool b_10184;
  kk_string_t _x_x3808;
  kk_std_core_types__list _x_x3809;
  kk_std_core_types__list _x_x3810;
  kk_std_core_types__list _x_x3811;
  kk_string_t _x_x3812 = kk_string_dup(s, _ctx); /*string*/
  _x_x3811 = kk_std_core_string_list(_x_x3812, _ctx); /*list<char>*/
  _x_x3810 = kk_std_core_list_drop(_x_x3811, kk_integer_from_small(6), _ctx); /*list<10001>*/
  kk_integer_t _x_x3813 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
  _x_x3809 = kk_std_core_list_take(_x_x3810, _x_x3813, _ctx); /*list<10001>*/
  _x_x3808 = kk_std_core_string_listchar_fs_string(_x_x3809, _ctx); /*string*/
  b_10184 = kk_display_hc__all__digits(_x_x3808, _ctx); /*bool*/
  if (b_10184) {
    kk_string_t s_0_10187;
    kk_std_core_types__list _x_x3814;
    kk_std_core_types__list _x_x3815;
    kk_std_core_types__list _x_x3816;
    kk_string_t _x_x3817 = kk_string_dup(s, _ctx); /*string*/
    _x_x3816 = kk_std_core_string_list(_x_x3817, _ctx); /*list<char>*/
    _x_x3815 = kk_std_core_list_drop(_x_x3816, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x3818 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
    _x_x3814 = kk_std_core_list_take(_x_x3815, _x_x3818, _ctx); /*list<10001>*/
    s_0_10187 = kk_std_core_string_listchar_fs_string(_x_x3814, _ctx); /*string*/
    kk_std_core_types__maybe hh;
    bool _x_x3819;
    kk_std_core_types__optional _match_x2879 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2879, _ctx)) {
      kk_box_t _box_x240 = _match_x2879._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x240);
      kk_std_core_types__optional_drop(_match_x2879, _ctx);
      _x_x3819 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2879, _ctx);
      _x_x3819 = false; /*bool*/
    }
    hh = kk_std_core_int_xparse(s_0_10187, _x_x3819, _ctx); /*maybe<int>*/
    kk_string_t s_1_10191;
    kk_std_core_types__list _x_x3820;
    kk_std_core_types__list _x_x3821;
    kk_std_core_types__list _x_x3822;
    kk_string_t _x_x3823 = kk_string_dup(s, _ctx); /*string*/
    _x_x3822 = kk_std_core_string_list(_x_x3823, _ctx); /*list<char>*/
    _x_x3821 = kk_std_core_list_drop(_x_x3822, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3824 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3820 = kk_std_core_list_take(_x_x3821, _x_x3824, _ctx); /*list<10001>*/
    s_1_10191 = kk_std_core_string_listchar_fs_string(_x_x3820, _ctx); /*string*/
    kk_std_core_types__maybe mm;
    bool _x_x3825;
    kk_std_core_types__optional _match_x2878 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2878, _ctx)) {
      kk_box_t _box_x241 = _match_x2878._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x241);
      kk_std_core_types__optional_drop(_match_x2878, _ctx);
      _x_x3825 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2878, _ctx);
      _x_x3825 = false; /*bool*/
    }
    mm = kk_std_core_int_xparse(s_1_10191, _x_x3825, _ctx); /*maybe<int>*/
    kk_string_t s_2_10195;
    kk_std_core_types__list _x_x3826;
    kk_std_core_types__list _x_x3827;
    kk_std_core_types__list _x_x3828;
    kk_string_t _x_x3829 = kk_string_dup(s, _ctx); /*string*/
    _x_x3828 = kk_std_core_string_list(_x_x3829, _ctx); /*list<char>*/
    _x_x3827 = kk_std_core_list_drop(_x_x3828, kk_integer_from_small(6), _ctx); /*list<10001>*/
    kk_integer_t _x_x3830 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
    _x_x3826 = kk_std_core_list_take(_x_x3827, _x_x3830, _ctx); /*list<10001>*/
    s_2_10195 = kk_std_core_string_listchar_fs_string(_x_x3826, _ctx); /*string*/
    kk_std_core_types__maybe ss;
    bool _x_x3831;
    kk_std_core_types__optional _match_x2877 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2877, _ctx)) {
      kk_box_t _box_x242 = _match_x2877._cons._Optional.value;
      bool _uniq_hex_581_1 = kk_bool_unbox(_box_x242);
      kk_std_core_types__optional_drop(_match_x2877, _ctx);
      _x_x3831 = _uniq_hex_581_1; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2877, _ctx);
      _x_x3831 = false; /*bool*/
    }
    ss = kk_std_core_int_xparse(s_2_10195, _x_x3831, _ctx); /*maybe<int>*/
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
          bool _match_x2869 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2869) {
            bool _match_x2870;
            bool _brw_x2876 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
            kk_integer_drop(h, _ctx);
            _match_x2870 = _brw_x2876; /*bool*/
            if (_match_x2870) {
              bool _match_x2871 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
              if (_match_x2871) {
                bool _match_x2872;
                bool _brw_x2875 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                kk_integer_drop(m, _ctx);
                _match_x2872 = _brw_x2875; /*bool*/
                if (_match_x2872) {
                  bool _match_x2873 = kk_integer_gte_borrow(sec,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                  if (_match_x2873) {
                    bool _brw_x2874 = kk_integer_lte_borrow(sec,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                    kk_integer_drop(sec, _ctx);
                    base__ok = _brw_x2874; /*bool*/
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
          bool _match_x2862;
          kk_integer_t _brw_x2867;
          kk_string_t _x_x3832 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2867 = kk_std_core_string_chars_fs_count(_x_x3832, _ctx); /*int*/
          bool _brw_x2868 = kk_integer_eq_borrow(_brw_x2867,(kk_integer_from_small(8)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2867, _ctx);
          _match_x2862 = _brw_x2868; /*bool*/
          if (_match_x2862) {
            kk_string_drop(s, _ctx);
            return base__ok;
          }
          {
            bool _match_x2863;
            kk_string_t _x_x3833;
            kk_std_core_types__list _x_x3834;
            kk_std_core_types__list _x_x3835;
            kk_std_core_types__list _x_x3836;
            kk_string_t _x_x3837 = kk_string_dup(s, _ctx); /*string*/
            _x_x3836 = kk_std_core_string_list(_x_x3837, _ctx); /*list<char>*/
            _x_x3835 = kk_std_core_list_drop(_x_x3836, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3838 = kk_integer_add_small_const(kk_integer_from_small(9), -8, _ctx); /*int*/
            _x_x3834 = kk_std_core_list_take(_x_x3835, _x_x3838, _ctx); /*list<10001>*/
            _x_x3833 = kk_std_core_string_listchar_fs_string(_x_x3834, _ctx); /*string*/
            kk_string_t _x_x3839;
            kk_define_string_literal(static, _s_x3840, 1, ".", _ctx)
            _x_x3839 = kk_string_dup(_s_x3840, _ctx); /*string*/
            _match_x2863 = kk_string_is_eq(_x_x3833,_x_x3839,kk_context()); /*bool*/
            if (_match_x2863) {
              kk_string_t frac;
              kk_std_core_types__list _x_x3841;
              kk_std_core_types__list _x_x3842 = kk_std_core_string_list(s, _ctx); /*list<char>*/
              _x_x3841 = kk_std_core_list_drop(_x_x3842, kk_integer_from_small(9), _ctx); /*list<10001>*/
              frac = kk_std_core_string_listchar_fs_string(_x_x3841, _ctx); /*string*/
              if (base__ok) {
                bool _match_x2864;
                kk_integer_t _brw_x2865;
                kk_string_t _x_x3843 = kk_string_dup(frac, _ctx); /*string*/
                _brw_x2865 = kk_std_core_string_chars_fs_count(_x_x3843, _ctx); /*int*/
                bool _brw_x2866 = kk_integer_gt_borrow(_brw_x2865,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                kk_integer_drop(_brw_x2865, _ctx);
                _match_x2864 = _brw_x2866; /*bool*/
                if (_match_x2864) {
                  return kk_display_hc__all__digits(frac, _ctx);
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

bool kk_display_hc__is__valid__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2851;
  kk_integer_t _brw_x2860;
  kk_string_t _x_x3844 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2860 = kk_std_core_string_chars_fs_count(_x_x3844, _ctx); /*int*/
  bool _brw_x2861 = kk_integer_lt_borrow(_brw_x2860,(kk_integer_from_small(5)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2860, _ctx);
  _match_x2851 = _brw_x2861; /*bool*/
  if (_match_x2851) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2852;
    kk_string_t _x_x3845;
    kk_std_core_types__list _x_x3846;
    kk_std_core_types__list _x_x3847;
    kk_std_core_types__list _x_x3848;
    kk_string_t _x_x3849 = kk_string_dup(s, _ctx); /*string*/
    _x_x3848 = kk_std_core_string_list(_x_x3849, _ctx); /*list<char>*/
    _x_x3847 = kk_std_core_list_drop(_x_x3848, kk_integer_from_small(2), _ctx); /*list<10001>*/
    kk_integer_t _x_x3850 = kk_integer_add_small_const(kk_integer_from_small(3), -2, _ctx); /*int*/
    _x_x3846 = kk_std_core_list_take(_x_x3847, _x_x3850, _ctx); /*list<10001>*/
    _x_x3845 = kk_std_core_string_listchar_fs_string(_x_x3846, _ctx); /*string*/
    kk_string_t _x_x3851;
    kk_define_string_literal(static, _s_x3852, 1, ":", _ctx)
    _x_x3851 = kk_string_dup(_s_x3852, _ctx); /*string*/
    _match_x2852 = kk_string_is_neq(_x_x3845,_x_x3851,kk_context()); /*bool*/
    if (_match_x2852) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool b_10212;
      kk_string_t _x_x3853;
      kk_std_core_types__list _x_x3854;
      kk_std_core_types__list _x_x3855;
      kk_std_core_types__list _x_x3856;
      kk_string_t _x_x3857 = kk_string_dup(s, _ctx); /*string*/
      _x_x3856 = kk_std_core_string_list(_x_x3857, _ctx); /*list<char>*/
      _x_x3855 = kk_std_core_list_drop(_x_x3856, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x3858 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x3854 = kk_std_core_list_take(_x_x3855, _x_x3858, _ctx); /*list<10001>*/
      _x_x3853 = kk_std_core_string_listchar_fs_string(_x_x3854, _ctx); /*string*/
      b_10212 = kk_display_hc__all__digits(_x_x3853, _ctx); /*bool*/
      if (b_10212) {
        bool b_0_10215;
        kk_string_t _x_x3859;
        kk_std_core_types__list _x_x3860;
        kk_std_core_types__list _x_x3861;
        kk_std_core_types__list _x_x3862;
        kk_string_t _x_x3863 = kk_string_dup(s, _ctx); /*string*/
        _x_x3862 = kk_std_core_string_list(_x_x3863, _ctx); /*list<char>*/
        _x_x3861 = kk_std_core_list_drop(_x_x3862, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x3864 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x3860 = kk_std_core_list_take(_x_x3861, _x_x3864, _ctx); /*list<10001>*/
        _x_x3859 = kk_std_core_string_listchar_fs_string(_x_x3860, _ctx); /*string*/
        b_0_10215 = kk_display_hc__all__digits(_x_x3859, _ctx); /*bool*/
        if (b_0_10215) {
          bool _match_x2853;
          kk_integer_t _brw_x2858;
          kk_string_t _x_x3865 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2858 = kk_std_core_string_chars_fs_count(_x_x3865, _ctx); /*int*/
          bool _brw_x2859 = kk_integer_eq_borrow(_brw_x2858,(kk_integer_from_small(5)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2858, _ctx);
          _match_x2853 = _brw_x2859; /*bool*/
          if (_match_x2853) {
            return kk_display_hc__is__valid__time__short(s, _ctx);
          }
          {
            bool _match_x2854;
            kk_integer_t _brw_x2856;
            kk_string_t _x_x3866 = kk_string_dup(s, _ctx); /*string*/
            _brw_x2856 = kk_std_core_string_chars_fs_count(_x_x3866, _ctx); /*int*/
            bool _brw_x2857 = kk_integer_gte_borrow(_brw_x2856,(kk_integer_from_small(8)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2856, _ctx);
            _match_x2854 = _brw_x2857; /*bool*/
            if (_match_x2854) {
              bool _match_x2855;
              kk_string_t _x_x3867;
              kk_std_core_types__list _x_x3868;
              kk_std_core_types__list _x_x3869;
              kk_std_core_types__list _x_x3870;
              kk_string_t _x_x3871 = kk_string_dup(s, _ctx); /*string*/
              _x_x3870 = kk_std_core_string_list(_x_x3871, _ctx); /*list<char>*/
              _x_x3869 = kk_std_core_list_drop(_x_x3870, kk_integer_from_small(5), _ctx); /*list<10001>*/
              kk_integer_t _x_x3872 = kk_integer_add_small_const(kk_integer_from_small(6), -5, _ctx); /*int*/
              _x_x3868 = kk_std_core_list_take(_x_x3869, _x_x3872, _ctx); /*list<10001>*/
              _x_x3867 = kk_std_core_string_listchar_fs_string(_x_x3868, _ctx); /*string*/
              kk_string_t _x_x3873;
              kk_define_string_literal(static, _s_x3874, 1, ":", _ctx)
              _x_x3873 = kk_string_dup(_s_x3874, _ctx); /*string*/
              _match_x2855 = kk_string_is_eq(_x_x3867,_x_x3873,kk_context()); /*bool*/
              if (_match_x2855) {
                return kk_display_hc__is__valid__time__full(s, _ctx);
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

bool kk_display_hc__is__valid__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2824;
  kk_string_t _x_x3875 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3876;
  kk_define_string_literal(static, _s_x3877, 1, "Z", _ctx)
  _x_x3876 = kk_string_dup(_s_x3877, _ctx); /*string*/
  _match_x2824 = kk_string_is_eq(_x_x3875,_x_x3876,kk_context()); /*bool*/
  if (_match_x2824) {
    kk_string_drop(s, _ctx);
    return true;
  }
  {
    bool _match_x2825;
    kk_string_t _x_x3878 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3879;
    kk_define_string_literal(static, _s_x3880, 1, "z", _ctx)
    _x_x3879 = kk_string_dup(_s_x3880, _ctx); /*string*/
    _match_x2825 = kk_string_is_eq(_x_x3878,_x_x3879,kk_context()); /*bool*/
    if (_match_x2825) {
      kk_string_drop(s, _ctx);
      return true;
    }
    {
      bool _match_x2826;
      kk_integer_t _brw_x2849;
      kk_string_t _x_x3881 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2849 = kk_std_core_string_chars_fs_count(_x_x3881, _ctx); /*int*/
      bool _brw_x2850 = kk_integer_neq_borrow(_brw_x2849,(kk_integer_from_small(6)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2849, _ctx);
      _match_x2826 = _brw_x2850; /*bool*/
      if (_match_x2826) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        kk_string_t hc__sign_0;
        kk_std_core_types__list _x_x3882;
        kk_std_core_types__list _x_x3883;
        kk_std_core_types__list _x_x3884;
        kk_string_t _x_x3885 = kk_string_dup(s, _ctx); /*string*/
        _x_x3884 = kk_std_core_string_list(_x_x3885, _ctx); /*list<char>*/
        _x_x3883 = kk_std_core_list_drop(_x_x3884, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3886 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x3882 = kk_std_core_list_take(_x_x3883, _x_x3886, _ctx); /*list<10001>*/
        hc__sign_0 = kk_std_core_string_listchar_fs_string(_x_x3882, _ctx); /*string*/
        bool _match_x2827;
        kk_string_t _x_x3887 = kk_string_dup(hc__sign_0, _ctx); /*string*/
        kk_string_t _x_x3888;
        kk_define_string_literal(static, _s_x3889, 1, "+", _ctx)
        _x_x3888 = kk_string_dup(_s_x3889, _ctx); /*string*/
        _match_x2827 = kk_string_is_neq(_x_x3887,_x_x3888,kk_context()); /*bool*/
        if (_match_x2827) {
          bool _match_x2838;
          kk_string_t _x_x3890;
          kk_define_string_literal(static, _s_x3891, 1, "-", _ctx)
          _x_x3890 = kk_string_dup(_s_x3891, _ctx); /*string*/
          _match_x2838 = kk_string_is_neq(hc__sign_0,_x_x3890,kk_context()); /*bool*/
          if (_match_x2838) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool _match_x2839;
            kk_string_t _x_x3892;
            kk_std_core_types__list _x_x3893;
            kk_std_core_types__list _x_x3894;
            kk_std_core_types__list _x_x3895;
            kk_string_t _x_x3896 = kk_string_dup(s, _ctx); /*string*/
            _x_x3895 = kk_std_core_string_list(_x_x3896, _ctx); /*list<char>*/
            _x_x3894 = kk_std_core_list_drop(_x_x3895, kk_integer_from_small(3), _ctx); /*list<10001>*/
            kk_integer_t _x_x3897 = kk_integer_add_small_const(kk_integer_from_small(4), -3, _ctx); /*int*/
            _x_x3893 = kk_std_core_list_take(_x_x3894, _x_x3897, _ctx); /*list<10001>*/
            _x_x3892 = kk_std_core_string_listchar_fs_string(_x_x3893, _ctx); /*string*/
            kk_string_t _x_x3898;
            kk_define_string_literal(static, _s_x3899, 1, ":", _ctx)
            _x_x3898 = kk_string_dup(_s_x3899, _ctx); /*string*/
            _match_x2839 = kk_string_is_neq(_x_x3892,_x_x3898,kk_context()); /*bool*/
            if (_match_x2839) {
              kk_string_drop(s, _ctx);
              return false;
            }
            {
              bool b_10224;
              kk_string_t _x_x3900;
              kk_std_core_types__list _x_x3901;
              kk_std_core_types__list _x_x3902;
              kk_std_core_types__list _x_x3903;
              kk_string_t _x_x3904 = kk_string_dup(s, _ctx); /*string*/
              _x_x3903 = kk_std_core_string_list(_x_x3904, _ctx); /*list<char>*/
              _x_x3902 = kk_std_core_list_drop(_x_x3903, kk_integer_from_small(1), _ctx); /*list<10001>*/
              kk_integer_t _x_x3905 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
              _x_x3901 = kk_std_core_list_take(_x_x3902, _x_x3905, _ctx); /*list<10001>*/
              _x_x3900 = kk_std_core_string_listchar_fs_string(_x_x3901, _ctx); /*string*/
              b_10224 = kk_display_hc__all__digits(_x_x3900, _ctx); /*bool*/
              if (b_10224) {
                bool b_0_10227;
                kk_string_t _x_x3906;
                kk_std_core_types__list _x_x3907;
                kk_std_core_types__list _x_x3908;
                kk_std_core_types__list _x_x3909;
                kk_string_t _x_x3910 = kk_string_dup(s, _ctx); /*string*/
                _x_x3909 = kk_std_core_string_list(_x_x3910, _ctx); /*list<char>*/
                _x_x3908 = kk_std_core_list_drop(_x_x3909, kk_integer_from_small(4), _ctx); /*list<10001>*/
                kk_integer_t _x_x3911 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                _x_x3907 = kk_std_core_list_take(_x_x3908, _x_x3911, _ctx); /*list<10001>*/
                _x_x3906 = kk_std_core_string_listchar_fs_string(_x_x3907, _ctx); /*string*/
                b_0_10227 = kk_display_hc__all__digits(_x_x3906, _ctx); /*bool*/
                if (b_0_10227) {
                  kk_string_t s_0_10230;
                  kk_std_core_types__list _x_x3912;
                  kk_std_core_types__list _x_x3913;
                  kk_std_core_types__list _x_x3914;
                  kk_string_t _x_x3915 = kk_string_dup(s, _ctx); /*string*/
                  _x_x3914 = kk_std_core_string_list(_x_x3915, _ctx); /*list<char>*/
                  _x_x3913 = kk_std_core_list_drop(_x_x3914, kk_integer_from_small(1), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3916 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                  _x_x3912 = kk_std_core_list_take(_x_x3913, _x_x3916, _ctx); /*list<10001>*/
                  s_0_10230 = kk_std_core_string_listchar_fs_string(_x_x3912, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2840;
                  bool _x_x3917;
                  kk_std_core_types__optional _match_x2848 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2848, _ctx)) {
                    kk_box_t _box_x246 = _match_x2848._cons._Optional.value;
                    bool _uniq_hex_581 = kk_bool_unbox(_box_x246);
                    kk_std_core_types__optional_drop(_match_x2848, _ctx);
                    _x_x3917 = _uniq_hex_581; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2848, _ctx);
                    _x_x3917 = false; /*bool*/
                  }
                  _match_x2840 = kk_std_core_int_xparse(s_0_10230, _x_x3917, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2840, _ctx)) {
                    kk_box_t _box_x247 = _match_x2840._cons.Just.value;
                    kk_integer_t h = kk_integer_unbox(_box_x247, _ctx);
                    kk_integer_dup(h, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2840, _ctx);
                    kk_string_t s_1_10234;
                    kk_std_core_types__list _x_x3918;
                    kk_std_core_types__list _x_x3919;
                    kk_std_core_types__list _x_x3920 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                    _x_x3919 = kk_std_core_list_drop(_x_x3920, kk_integer_from_small(4), _ctx); /*list<10001>*/
                    kk_integer_t _x_x3921 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                    _x_x3918 = kk_std_core_list_take(_x_x3919, _x_x3921, _ctx); /*list<10001>*/
                    s_1_10234 = kk_std_core_string_listchar_fs_string(_x_x3918, _ctx); /*string*/
                    kk_std_core_types__maybe _match_x2841;
                    bool _x_x3922;
                    kk_std_core_types__optional _match_x2847 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                    if (kk_std_core_types__is_Optional(_match_x2847, _ctx)) {
                      kk_box_t _box_x248 = _match_x2847._cons._Optional.value;
                      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x248);
                      kk_std_core_types__optional_drop(_match_x2847, _ctx);
                      _x_x3922 = _uniq_hex_581_0; /*bool*/
                    }
                    else {
                      kk_std_core_types__optional_drop(_match_x2847, _ctx);
                      _x_x3922 = false; /*bool*/
                    }
                    _match_x2841 = kk_std_core_int_xparse(s_1_10234, _x_x3922, _ctx); /*maybe<int>*/
                    if (kk_std_core_types__is_Just(_match_x2841, _ctx)) {
                      kk_box_t _box_x249 = _match_x2841._cons.Just.value;
                      kk_integer_t m = kk_integer_unbox(_box_x249, _ctx);
                      kk_integer_dup(m, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2841, _ctx);
                      bool _match_x2842 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                      if (_match_x2842) {
                        bool _match_x2843;
                        bool _brw_x2846 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                        kk_integer_drop(h, _ctx);
                        _match_x2843 = _brw_x2846; /*bool*/
                        if (_match_x2843) {
                          bool _match_x2844 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                          if (_match_x2844) {
                            bool _brw_x2845 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                            kk_integer_drop(m, _ctx);
                            return _brw_x2845;
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
          bool _match_x2828;
          kk_string_t _x_x3923;
          kk_std_core_types__list _x_x3924;
          kk_std_core_types__list _x_x3925;
          kk_std_core_types__list _x_x3926;
          kk_string_t _x_x3927 = kk_string_dup(s, _ctx); /*string*/
          _x_x3926 = kk_std_core_string_list(_x_x3927, _ctx); /*list<char>*/
          _x_x3925 = kk_std_core_list_drop(_x_x3926, kk_integer_from_small(3), _ctx); /*list<10001>*/
          kk_integer_t _x_x3928 = kk_integer_add_small_const(kk_integer_from_small(4), -3, _ctx); /*int*/
          _x_x3924 = kk_std_core_list_take(_x_x3925, _x_x3928, _ctx); /*list<10001>*/
          _x_x3923 = kk_std_core_string_listchar_fs_string(_x_x3924, _ctx); /*string*/
          kk_string_t _x_x3929;
          kk_define_string_literal(static, _s_x3930, 1, ":", _ctx)
          _x_x3929 = kk_string_dup(_s_x3930, _ctx); /*string*/
          _match_x2828 = kk_string_is_neq(_x_x3923,_x_x3929,kk_context()); /*bool*/
          if (_match_x2828) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool b_1_10246;
            kk_string_t _x_x3931;
            kk_std_core_types__list _x_x3932;
            kk_std_core_types__list _x_x3933;
            kk_std_core_types__list _x_x3934;
            kk_string_t _x_x3935 = kk_string_dup(s, _ctx); /*string*/
            _x_x3934 = kk_std_core_string_list(_x_x3935, _ctx); /*list<char>*/
            _x_x3933 = kk_std_core_list_drop(_x_x3934, kk_integer_from_small(1), _ctx); /*list<10001>*/
            kk_integer_t _x_x3936 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
            _x_x3932 = kk_std_core_list_take(_x_x3933, _x_x3936, _ctx); /*list<10001>*/
            _x_x3931 = kk_std_core_string_listchar_fs_string(_x_x3932, _ctx); /*string*/
            b_1_10246 = kk_display_hc__all__digits(_x_x3931, _ctx); /*bool*/
            if (b_1_10246) {
              bool b_2_10249;
              kk_string_t _x_x3937;
              kk_std_core_types__list _x_x3938;
              kk_std_core_types__list _x_x3939;
              kk_std_core_types__list _x_x3940;
              kk_string_t _x_x3941 = kk_string_dup(s, _ctx); /*string*/
              _x_x3940 = kk_std_core_string_list(_x_x3941, _ctx); /*list<char>*/
              _x_x3939 = kk_std_core_list_drop(_x_x3940, kk_integer_from_small(4), _ctx); /*list<10001>*/
              kk_integer_t _x_x3942 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
              _x_x3938 = kk_std_core_list_take(_x_x3939, _x_x3942, _ctx); /*list<10001>*/
              _x_x3937 = kk_std_core_string_listchar_fs_string(_x_x3938, _ctx); /*string*/
              b_2_10249 = kk_display_hc__all__digits(_x_x3937, _ctx); /*bool*/
              if (b_2_10249) {
                kk_string_t s_2_10252;
                kk_std_core_types__list _x_x3943;
                kk_std_core_types__list _x_x3944;
                kk_std_core_types__list _x_x3945;
                kk_string_t _x_x3946 = kk_string_dup(s, _ctx); /*string*/
                _x_x3945 = kk_std_core_string_list(_x_x3946, _ctx); /*list<char>*/
                _x_x3944 = kk_std_core_list_drop(_x_x3945, kk_integer_from_small(1), _ctx); /*list<10001>*/
                kk_integer_t _x_x3947 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                _x_x3943 = kk_std_core_list_take(_x_x3944, _x_x3947, _ctx); /*list<10001>*/
                s_2_10252 = kk_std_core_string_listchar_fs_string(_x_x3943, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2829;
                bool _x_x3948;
                kk_std_core_types__optional _match_x2837 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2837, _ctx)) {
                  kk_box_t _box_x250 = _match_x2837._cons._Optional.value;
                  bool _uniq_hex_581_1 = kk_bool_unbox(_box_x250);
                  kk_std_core_types__optional_drop(_match_x2837, _ctx);
                  _x_x3948 = _uniq_hex_581_1; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2837, _ctx);
                  _x_x3948 = false; /*bool*/
                }
                _match_x2829 = kk_std_core_int_xparse(s_2_10252, _x_x3948, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2829, _ctx)) {
                  kk_box_t _box_x251 = _match_x2829._cons.Just.value;
                  kk_integer_t h_0 = kk_integer_unbox(_box_x251, _ctx);
                  kk_integer_dup(h_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2829, _ctx);
                  kk_string_t s_3_10256;
                  kk_std_core_types__list _x_x3949;
                  kk_std_core_types__list _x_x3950;
                  kk_std_core_types__list _x_x3951 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x3950 = kk_std_core_list_drop(_x_x3951, kk_integer_from_small(4), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3952 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                  _x_x3949 = kk_std_core_list_take(_x_x3950, _x_x3952, _ctx); /*list<10001>*/
                  s_3_10256 = kk_std_core_string_listchar_fs_string(_x_x3949, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2830;
                  bool _x_x3953;
                  kk_std_core_types__optional _match_x2836 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2836, _ctx)) {
                    kk_box_t _box_x252 = _match_x2836._cons._Optional.value;
                    bool _uniq_hex_581_2 = kk_bool_unbox(_box_x252);
                    kk_std_core_types__optional_drop(_match_x2836, _ctx);
                    _x_x3953 = _uniq_hex_581_2; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2836, _ctx);
                    _x_x3953 = false; /*bool*/
                  }
                  _match_x2830 = kk_std_core_int_xparse(s_3_10256, _x_x3953, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2830, _ctx)) {
                    kk_box_t _box_x253 = _match_x2830._cons.Just.value;
                    kk_integer_t m_0 = kk_integer_unbox(_box_x253, _ctx);
                    kk_integer_dup(m_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2830, _ctx);
                    bool _match_x2831 = kk_integer_gte_borrow(h_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                    if (_match_x2831) {
                      bool _match_x2832;
                      bool _brw_x2835 = kk_integer_lte_borrow(h_0,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                      kk_integer_drop(h_0, _ctx);
                      _match_x2832 = _brw_x2835; /*bool*/
                      if (_match_x2832) {
                        bool _match_x2833 = kk_integer_gte_borrow(m_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                        if (_match_x2833) {
                          bool _brw_x2834 = kk_integer_lte_borrow(m_0,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                          kk_integer_drop(m_0, _ctx);
                          return _brw_x2834;
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

bool kk_display_hc__check__z__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  kk_integer_t zi;
  kk_std_core_types__maybe _match_x2820;
  kk_string_t _x_x3954 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x3955;
  kk_define_string_literal(static, _s_x3956, 1, "Z", _ctx)
  _x_x3955 = kk_string_dup(_s_x3956, _ctx); /*string*/
  _match_x2820 = kk_std_core_sslice_find(_x_x3954, _x_x3955, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x2820, _ctx)) {
    kk_box_t _box_x254 = _match_x2820._cons.Just.value;
    kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x254, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
    kk_std_core_types__maybe_drop(_match_x2820, _ctx);
    kk_std_core_sslice__sslice _x_x3957;
    {
      kk_string_t s = hc____ss.str;
      kk_integer_t start = hc____ss.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
      _x_x3957 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    zi = kk_std_core_sslice_count(_x_x3957, _ctx); /*int*/
  }
  else {
    kk_std_core_types__maybe _match_x2821 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2821, _ctx)) {
      kk_box_t _box_x255 = _match_x2821._cons.Just.value;
      kk_integer_t i = kk_integer_unbox(_box_x255, _ctx);
      kk_integer_dup(i, _ctx);
      kk_std_core_types__maybe_drop(_match_x2821, _ctx);
      zi = i; /*int*/
    }
    else {
      kk_std_core_types__maybe _match_x2822;
      kk_string_t _x_x3958 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x3959;
      kk_define_string_literal(static, _s_x3960, 1, "z", _ctx)
      _x_x3959 = kk_string_dup(_s_x3960, _ctx); /*string*/
      _match_x2822 = kk_std_core_sslice_find(_x_x3958, _x_x3959, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2822, _ctx)) {
        kk_box_t _box_x256 = _match_x2822._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x256, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2822, _ctx);
        kk_std_core_sslice__sslice _x_x3961;
        {
          kk_string_t s_0 = hc____ss_0.str;
          kk_integer_t start_0 = hc____ss_0.start;
          kk_string_dup(s_0, _ctx);
          kk_integer_dup(start_0, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
          _x_x3961 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
        }
        zi = kk_std_core_sslice_count(_x_x3961, _ctx); /*int*/
      }
      else {
        kk_std_core_types__maybe _match_x2823 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2823, _ctx)) {
          kk_box_t _box_x257 = _match_x2823._cons.Just.value;
          kk_integer_t i_0 = kk_integer_unbox(_box_x257, _ctx);
          kk_integer_dup(i_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2823, _ctx);
          zi = i_0; /*int*/
        }
        else {
          zi = kk_integer_from_small(0); /*int*/
        }
      }
    }
  }
  kk_string_t t;
  kk_std_core_types__list _x_x3962;
  kk_std_core_types__list _x_x3963;
  kk_std_core_types__list _x_x3964;
  kk_string_t _x_x3965 = kk_string_dup(rest, _ctx); /*string*/
  _x_x3964 = kk_std_core_string_list(_x_x3965, _ctx); /*list<char>*/
  _x_x3963 = kk_std_core_list_drop(_x_x3964, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x3966;
  kk_integer_t _x_x3967 = kk_integer_dup(zi, _ctx); /*int*/
  _x_x3966 = kk_integer_add_small_const(_x_x3967, 0, _ctx); /*int*/
  _x_x3962 = kk_std_core_list_take(_x_x3963, _x_x3966, _ctx); /*list<10001>*/
  t = kk_std_core_string_listchar_fs_string(_x_x3962, _ctx); /*string*/
  bool _match_x2819 = kk_display_hc__is__valid__time(t, _ctx); /*bool*/;
  if (_match_x2819) {
    kk_string_t _x_x3968;
    kk_std_core_types__list _x_x3969;
    kk_std_core_types__list _x_x3970 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
    _x_x3969 = kk_std_core_list_drop(_x_x3970, zi, _ctx); /*list<10001>*/
    _x_x3968 = kk_std_core_string_listchar_fs_string(_x_x3969, _ctx); /*string*/
    return kk_display_hc__is__valid__offset(_x_x3968, _ctx);
  }
  {
    kk_integer_drop(zi, _ctx);
    kk_string_drop(rest, _ctx);
    return false;
  }
}

bool kk_display_hc__check__numeric__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  bool _match_x2812;
  kk_integer_t _brw_x2817;
  kk_string_t _x_x3971 = kk_string_dup(rest, _ctx); /*string*/
  _brw_x2817 = kk_std_core_string_chars_fs_count(_x_x3971, _ctx); /*int*/
  bool _brw_x2818 = kk_integer_lt_borrow(_brw_x2817,(kk_integer_from_small(11)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2817, _ctx);
  _match_x2812 = _brw_x2818; /*bool*/
  if (_match_x2812) {
    kk_string_drop(rest, _ctx);
    return false;
  }
  {
    kk_integer_t x_10270;
    kk_string_t _x_x3972 = kk_string_dup(rest, _ctx); /*string*/
    x_10270 = kk_std_core_string_chars_fs_count(_x_x3972, _ctx); /*int*/
    kk_integer_t sign__pos = kk_integer_add_small_const(x_10270, -6, _ctx); /*int*/;
    kk_integer_t x_0_10272;
    kk_integer_t _x_x3973 = kk_integer_dup(sign__pos, _ctx); /*int*/
    x_0_10272 = kk_integer_add_small_const(_x_x3973, 1, _ctx); /*int*/
    kk_string_t sign__char;
    kk_std_core_types__list _x_x3974;
    kk_std_core_types__list _x_x3975;
    kk_std_core_types__list _x_x3976;
    kk_string_t _x_x3977 = kk_string_dup(rest, _ctx); /*string*/
    _x_x3976 = kk_std_core_string_list(_x_x3977, _ctx); /*list<char>*/
    kk_integer_t _x_x3978 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x3975 = kk_std_core_list_drop(_x_x3976, _x_x3978, _ctx); /*list<10001>*/
    kk_integer_t _x_x3979;
    kk_integer_t _x_x3980 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x3979 = kk_integer_sub(x_0_10272,_x_x3980,kk_context()); /*int*/
    _x_x3974 = kk_std_core_list_take(_x_x3975, _x_x3979, _ctx); /*list<10001>*/
    sign__char = kk_std_core_string_listchar_fs_string(_x_x3974, _ctx); /*string*/
    bool _match_x2813;
    kk_string_t _x_x3981 = kk_string_dup(sign__char, _ctx); /*string*/
    kk_string_t _x_x3982;
    kk_define_string_literal(static, _s_x3983, 1, "+", _ctx)
    _x_x3982 = kk_string_dup(_s_x3983, _ctx); /*string*/
    _match_x2813 = kk_string_is_neq(_x_x3981,_x_x3982,kk_context()); /*bool*/
    if (_match_x2813) {
      bool _match_x2815;
      kk_string_t _x_x3984;
      kk_define_string_literal(static, _s_x3985, 1, "-", _ctx)
      _x_x3984 = kk_string_dup(_s_x3985, _ctx); /*string*/
      _match_x2815 = kk_string_is_neq(sign__char,_x_x3984,kk_context()); /*bool*/
      if (_match_x2815) {
        kk_integer_drop(sign__pos, _ctx);
        kk_string_drop(rest, _ctx);
        return false;
      }
      {
        kk_string_t t;
        kk_std_core_types__list _x_x3986;
        kk_std_core_types__list _x_x3987;
        kk_std_core_types__list _x_x3988;
        kk_string_t _x_x3989 = kk_string_dup(rest, _ctx); /*string*/
        _x_x3988 = kk_std_core_string_list(_x_x3989, _ctx); /*list<char>*/
        _x_x3987 = kk_std_core_list_drop(_x_x3988, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3990;
        kk_integer_t _x_x3991 = kk_integer_dup(sign__pos, _ctx); /*int*/
        _x_x3990 = kk_integer_add_small_const(_x_x3991, 0, _ctx); /*int*/
        _x_x3986 = kk_std_core_list_take(_x_x3987, _x_x3990, _ctx); /*list<10001>*/
        t = kk_std_core_string_listchar_fs_string(_x_x3986, _ctx); /*string*/
        kk_string_t o;
        kk_std_core_types__list _x_x3992;
        kk_std_core_types__list _x_x3993 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x3992 = kk_std_core_list_drop(_x_x3993, sign__pos, _ctx); /*list<10001>*/
        o = kk_std_core_string_listchar_fs_string(_x_x3992, _ctx); /*string*/
        bool _match_x2816 = kk_display_hc__is__valid__time(t, _ctx); /*bool*/;
        if (_match_x2816) {
          return kk_display_hc__is__valid__offset(o, _ctx);
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
      kk_std_core_types__list _x_x3994;
      kk_std_core_types__list _x_x3995;
      kk_std_core_types__list _x_x3996;
      kk_string_t _x_x3997 = kk_string_dup(rest, _ctx); /*string*/
      _x_x3996 = kk_std_core_string_list(_x_x3997, _ctx); /*list<char>*/
      _x_x3995 = kk_std_core_list_drop(_x_x3996, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x3998;
      kk_integer_t _x_x3999 = kk_integer_dup(sign__pos, _ctx); /*int*/
      _x_x3998 = kk_integer_add_small_const(_x_x3999, 0, _ctx); /*int*/
      _x_x3994 = kk_std_core_list_take(_x_x3995, _x_x3998, _ctx); /*list<10001>*/
      t_0 = kk_std_core_string_listchar_fs_string(_x_x3994, _ctx); /*string*/
      kk_string_t o_0;
      kk_std_core_types__list _x_x4000;
      kk_std_core_types__list _x_x4001 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x4000 = kk_std_core_list_drop(_x_x4001, sign__pos, _ctx); /*list<10001>*/
      o_0 = kk_std_core_string_listchar_fs_string(_x_x4000, _ctx); /*string*/
      bool _match_x2814 = kk_display_hc__is__valid__time(t_0, _ctx); /*bool*/;
      if (_match_x2814) {
        return kk_display_hc__is__valid__offset(o_0, _ctx);
      }
      {
        kk_string_drop(o_0, _ctx);
        return false;
      }
    }
  }
}

bool kk_display_hc__is__iso__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2800;
  kk_integer_t _brw_x2810;
  kk_string_t _x_x4002 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2810 = kk_std_core_string_chars_fs_count(_x_x4002, _ctx); /*int*/
  bool _brw_x2811 = kk_integer_lt_borrow(_brw_x2810,(kk_integer_from_small(17)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2810, _ctx);
  _match_x2800 = _brw_x2811; /*bool*/
  if (_match_x2800) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4003;
    kk_std_core_types__list _x_x4004;
    kk_std_core_types__list _x_x4005;
    kk_string_t _x_x4006 = kk_string_dup(s, _ctx); /*string*/
    _x_x4005 = kk_std_core_string_list(_x_x4006, _ctx); /*list<char>*/
    _x_x4004 = kk_std_core_list_drop(_x_x4005, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4007 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4003 = kk_std_core_list_take(_x_x4004, _x_x4007, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4003, _ctx); /*string*/
    bool _match_x2801;
    kk_string_t _x_x4008 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4009;
    kk_define_string_literal(static, _s_x4010, 1, "T", _ctx)
    _x_x4009 = kk_string_dup(_s_x4010, _ctx); /*string*/
    _match_x2801 = kk_string_is_neq(_x_x4008,_x_x4009,kk_context()); /*bool*/
    if (_match_x2801) {
      bool _match_x2804;
      kk_string_t _x_x4011 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4012;
      kk_define_string_literal(static, _s_x4013, 1, "t", _ctx)
      _x_x4012 = kk_string_dup(_s_x4013, _ctx); /*string*/
      _match_x2804 = kk_string_is_neq(_x_x4011,_x_x4012,kk_context()); /*bool*/
      if (_match_x2804) {
        bool _match_x2807;
        kk_string_t _x_x4014;
        kk_define_string_literal(static, _s_x4015, 1, " ", _ctx)
        _x_x4014 = kk_string_dup(_s_x4015, _ctx); /*string*/
        _match_x2807 = kk_string_is_neq(sep,_x_x4014,kk_context()); /*bool*/
        if (_match_x2807) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool b_10282;
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
          b_10282 = kk_display_hc__is__valid__date(_x_x4016, _ctx); /*bool*/
          if (b_10282) {
            kk_string_t rest;
            kk_std_core_types__list _x_x4022;
            kk_std_core_types__list _x_x4023 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x4022 = kk_std_core_list_drop(_x_x4023, kk_integer_from_small(11), _ctx); /*list<10001>*/
            rest = kk_std_core_string_listchar_fs_string(_x_x4022, _ctx); /*string*/
            bool _match_x2808;
            kk_string_t _x_x4024 = kk_string_dup(rest, _ctx); /*string*/
            kk_string_t _x_x4025;
            kk_define_string_literal(static, _s_x4026, 1, "Z", _ctx)
            _x_x4025 = kk_string_dup(_s_x4026, _ctx); /*string*/
            _match_x2808 = kk_string_contains(_x_x4024,_x_x4025,kk_context()); /*bool*/
            if (_match_x2808) {
              return kk_display_hc__check__z__offset(rest, _ctx);
            }
            {
              bool _match_x2809;
              kk_string_t _x_x4027 = kk_string_dup(rest, _ctx); /*string*/
              kk_string_t _x_x4028;
              kk_define_string_literal(static, _s_x4029, 1, "z", _ctx)
              _x_x4028 = kk_string_dup(_s_x4029, _ctx); /*string*/
              _match_x2809 = kk_string_contains(_x_x4027,_x_x4028,kk_context()); /*bool*/
              if (_match_x2809) {
                return kk_display_hc__check__z__offset(rest, _ctx);
              }
              {
                return kk_display_hc__check__numeric__offset(rest, _ctx);
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
        kk_string_t _x_x4030;
        kk_std_core_types__list _x_x4031;
        kk_std_core_types__list _x_x4032;
        kk_std_core_types__list _x_x4033;
        kk_string_t _x_x4034 = kk_string_dup(s, _ctx); /*string*/
        _x_x4033 = kk_std_core_string_list(_x_x4034, _ctx); /*list<char>*/
        _x_x4032 = kk_std_core_list_drop(_x_x4033, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4035 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x4031 = kk_std_core_list_take(_x_x4032, _x_x4035, _ctx); /*list<10001>*/
        _x_x4030 = kk_std_core_string_listchar_fs_string(_x_x4031, _ctx); /*string*/
        b_0_10285 = kk_display_hc__is__valid__date(_x_x4030, _ctx); /*bool*/
        if (b_0_10285) {
          kk_string_t rest_0;
          kk_std_core_types__list _x_x4036;
          kk_std_core_types__list _x_x4037 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4036 = kk_std_core_list_drop(_x_x4037, kk_integer_from_small(11), _ctx); /*list<10001>*/
          rest_0 = kk_std_core_string_listchar_fs_string(_x_x4036, _ctx); /*string*/
          bool _match_x2805;
          kk_string_t _x_x4038 = kk_string_dup(rest_0, _ctx); /*string*/
          kk_string_t _x_x4039;
          kk_define_string_literal(static, _s_x4040, 1, "Z", _ctx)
          _x_x4039 = kk_string_dup(_s_x4040, _ctx); /*string*/
          _match_x2805 = kk_string_contains(_x_x4038,_x_x4039,kk_context()); /*bool*/
          if (_match_x2805) {
            return kk_display_hc__check__z__offset(rest_0, _ctx);
          }
          {
            bool _match_x2806;
            kk_string_t _x_x4041 = kk_string_dup(rest_0, _ctx); /*string*/
            kk_string_t _x_x4042;
            kk_define_string_literal(static, _s_x4043, 1, "z", _ctx)
            _x_x4042 = kk_string_dup(_s_x4043, _ctx); /*string*/
            _match_x2806 = kk_string_contains(_x_x4041,_x_x4042,kk_context()); /*bool*/
            if (_match_x2806) {
              return kk_display_hc__check__z__offset(rest_0, _ctx);
            }
            {
              return kk_display_hc__check__numeric__offset(rest_0, _ctx);
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
      b_1_10288 = kk_display_hc__is__valid__date(_x_x4044, _ctx); /*bool*/
      if (b_1_10288) {
        kk_string_t rest_1;
        kk_std_core_types__list _x_x4050;
        kk_std_core_types__list _x_x4051 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4050 = kk_std_core_list_drop(_x_x4051, kk_integer_from_small(11), _ctx); /*list<10001>*/
        rest_1 = kk_std_core_string_listchar_fs_string(_x_x4050, _ctx); /*string*/
        bool _match_x2802;
        kk_string_t _x_x4052 = kk_string_dup(rest_1, _ctx); /*string*/
        kk_string_t _x_x4053;
        kk_define_string_literal(static, _s_x4054, 1, "Z", _ctx)
        _x_x4053 = kk_string_dup(_s_x4054, _ctx); /*string*/
        _match_x2802 = kk_string_contains(_x_x4052,_x_x4053,kk_context()); /*bool*/
        if (_match_x2802) {
          return kk_display_hc__check__z__offset(rest_1, _ctx);
        }
        {
          bool _match_x2803;
          kk_string_t _x_x4055 = kk_string_dup(rest_1, _ctx); /*string*/
          kk_string_t _x_x4056;
          kk_define_string_literal(static, _s_x4057, 1, "z", _ctx)
          _x_x4056 = kk_string_dup(_s_x4057, _ctx); /*string*/
          _match_x2803 = kk_string_contains(_x_x4055,_x_x4056,kk_context()); /*bool*/
          if (_match_x2803) {
            return kk_display_hc__check__z__offset(rest_1, _ctx);
          }
          {
            return kk_display_hc__check__numeric__offset(rest_1, _ctx);
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

bool kk_display_hc__is__local__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2791;
  kk_integer_t _brw_x2798;
  kk_string_t _x_x4058 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2798 = kk_std_core_string_chars_fs_count(_x_x4058, _ctx); /*int*/
  bool _brw_x2799 = kk_integer_lt_borrow(_brw_x2798,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2798, _ctx);
  _match_x2791 = _brw_x2799; /*bool*/
  if (_match_x2791) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4059;
    kk_std_core_types__list _x_x4060;
    kk_std_core_types__list _x_x4061;
    kk_string_t _x_x4062 = kk_string_dup(s, _ctx); /*string*/
    _x_x4061 = kk_std_core_string_list(_x_x4062, _ctx); /*list<char>*/
    _x_x4060 = kk_std_core_list_drop(_x_x4061, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4063 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4059 = kk_std_core_list_take(_x_x4060, _x_x4063, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4059, _ctx); /*string*/
    bool _match_x2792;
    kk_string_t _x_x4064 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4065;
    kk_define_string_literal(static, _s_x4066, 1, "T", _ctx)
    _x_x4065 = kk_string_dup(_s_x4066, _ctx); /*string*/
    _match_x2792 = kk_string_is_neq(_x_x4064,_x_x4065,kk_context()); /*bool*/
    if (_match_x2792) {
      bool _match_x2794;
      kk_string_t _x_x4067 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4068;
      kk_define_string_literal(static, _s_x4069, 1, "t", _ctx)
      _x_x4068 = kk_string_dup(_s_x4069, _ctx); /*string*/
      _match_x2794 = kk_string_is_neq(_x_x4067,_x_x4068,kk_context()); /*bool*/
      if (_match_x2794) {
        bool _match_x2796;
        kk_string_t _x_x4070;
        kk_define_string_literal(static, _s_x4071, 1, " ", _ctx)
        _x_x4070 = kk_string_dup(_s_x4071, _ctx); /*string*/
        _match_x2796 = kk_string_is_neq(sep,_x_x4070,kk_context()); /*bool*/
        if (_match_x2796) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool _match_x2797;
          kk_string_t _x_x4072;
          kk_std_core_types__list _x_x4073;
          kk_std_core_types__list _x_x4074;
          kk_std_core_types__list _x_x4075;
          kk_string_t _x_x4076 = kk_string_dup(s, _ctx); /*string*/
          _x_x4075 = kk_std_core_string_list(_x_x4076, _ctx); /*list<char>*/
          _x_x4074 = kk_std_core_list_drop(_x_x4075, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4077 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
          _x_x4073 = kk_std_core_list_take(_x_x4074, _x_x4077, _ctx); /*list<10001>*/
          _x_x4072 = kk_std_core_string_listchar_fs_string(_x_x4073, _ctx); /*string*/
          _match_x2797 = kk_display_hc__is__valid__date(_x_x4072, _ctx); /*bool*/
          if (_match_x2797) {
            kk_string_t _x_x4078;
            kk_std_core_types__list _x_x4079;
            kk_std_core_types__list _x_x4080 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x4079 = kk_std_core_list_drop(_x_x4080, kk_integer_from_small(11), _ctx); /*list<10001>*/
            _x_x4078 = kk_std_core_string_listchar_fs_string(_x_x4079, _ctx); /*string*/
            return kk_display_hc__is__valid__time(_x_x4078, _ctx);
          }
          {
            kk_string_drop(s, _ctx);
            return false;
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        bool _match_x2795;
        kk_string_t _x_x4081;
        kk_std_core_types__list _x_x4082;
        kk_std_core_types__list _x_x4083;
        kk_std_core_types__list _x_x4084;
        kk_string_t _x_x4085 = kk_string_dup(s, _ctx); /*string*/
        _x_x4084 = kk_std_core_string_list(_x_x4085, _ctx); /*list<char>*/
        _x_x4083 = kk_std_core_list_drop(_x_x4084, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4086 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x4082 = kk_std_core_list_take(_x_x4083, _x_x4086, _ctx); /*list<10001>*/
        _x_x4081 = kk_std_core_string_listchar_fs_string(_x_x4082, _ctx); /*string*/
        _match_x2795 = kk_display_hc__is__valid__date(_x_x4081, _ctx); /*bool*/
        if (_match_x2795) {
          kk_string_t _x_x4087;
          kk_std_core_types__list _x_x4088;
          kk_std_core_types__list _x_x4089 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4088 = kk_std_core_list_drop(_x_x4089, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4087 = kk_std_core_string_listchar_fs_string(_x_x4088, _ctx); /*string*/
          return kk_display_hc__is__valid__time(_x_x4087, _ctx);
        }
        {
          kk_string_drop(s, _ctx);
          return false;
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      bool _match_x2793;
      kk_string_t _x_x4090;
      kk_std_core_types__list _x_x4091;
      kk_std_core_types__list _x_x4092;
      kk_std_core_types__list _x_x4093;
      kk_string_t _x_x4094 = kk_string_dup(s, _ctx); /*string*/
      _x_x4093 = kk_std_core_string_list(_x_x4094, _ctx); /*list<char>*/
      _x_x4092 = kk_std_core_list_drop(_x_x4093, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4095 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4091 = kk_std_core_list_take(_x_x4092, _x_x4095, _ctx); /*list<10001>*/
      _x_x4090 = kk_std_core_string_listchar_fs_string(_x_x4091, _ctx); /*string*/
      _match_x2793 = kk_display_hc__is__valid__date(_x_x4090, _ctx); /*bool*/
      if (_match_x2793) {
        kk_string_t _x_x4096;
        kk_std_core_types__list _x_x4097;
        kk_std_core_types__list _x_x4098 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4097 = kk_std_core_list_drop(_x_x4098, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4096 = kk_std_core_string_listchar_fs_string(_x_x4097, _ctx); /*string*/
        return kk_display_hc__is__valid__time(_x_x4096, _ctx);
      }
      {
        kk_string_drop(s, _ctx);
        return false;
      }
    }
  }
}

kk_std_core_types__either kk_display_hc__date__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10299;
  kk_string_t _x_x4099 = kk_string_dup(s, _ctx); /*string*/
  b_10299 = kk_display_hc__is__valid__date(_x_x4099, _ctx); /*bool*/
  if (b_10299) {
    kk_string_t s_0_10300;
    kk_std_core_types__list _x_x4100;
    kk_std_core_types__list _x_x4101;
    kk_std_core_types__list _x_x4102;
    kk_string_t _x_x4103 = kk_string_dup(s, _ctx); /*string*/
    _x_x4102 = kk_std_core_string_list(_x_x4103, _ctx); /*list<char>*/
    _x_x4101 = kk_std_core_list_drop(_x_x4102, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4104 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
    _x_x4100 = kk_std_core_list_take(_x_x4101, _x_x4104, _ctx); /*list<10001>*/
    s_0_10300 = kk_std_core_string_listchar_fs_string(_x_x4100, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2785;
    bool _x_x4105;
    kk_std_core_types__optional _match_x2790 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2790, _ctx)) {
      kk_box_t _box_x258 = _match_x2790._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x258);
      kk_std_core_types__optional_drop(_match_x2790, _ctx);
      _x_x4105 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2790, _ctx);
      _x_x4105 = false; /*bool*/
    }
    _match_x2785 = kk_std_core_int_xparse(s_0_10300, _x_x4105, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2785, _ctx)) {
      kk_box_t _box_x259 = _match_x2785._cons.Just.value;
      kk_integer_t y_0 = kk_integer_unbox(_box_x259, _ctx);
      kk_integer_dup(y_0, _ctx);
      kk_std_core_types__maybe_drop(_match_x2785, _ctx);
      kk_string_t s_1_10304;
      kk_std_core_types__list _x_x4106;
      kk_std_core_types__list _x_x4107;
      kk_std_core_types__list _x_x4108;
      kk_string_t _x_x4109 = kk_string_dup(s, _ctx); /*string*/
      _x_x4108 = kk_std_core_string_list(_x_x4109, _ctx); /*list<char>*/
      _x_x4107 = kk_std_core_list_drop(_x_x4108, kk_integer_from_small(5), _ctx); /*list<10001>*/
      kk_integer_t _x_x4110 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
      _x_x4106 = kk_std_core_list_take(_x_x4107, _x_x4110, _ctx); /*list<10001>*/
      s_1_10304 = kk_std_core_string_listchar_fs_string(_x_x4106, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2786;
      bool _x_x4111;
      kk_std_core_types__optional _match_x2789 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2789, _ctx)) {
        kk_box_t _box_x260 = _match_x2789._cons._Optional.value;
        bool _uniq_hex_581_0 = kk_bool_unbox(_box_x260);
        kk_std_core_types__optional_drop(_match_x2789, _ctx);
        _x_x4111 = _uniq_hex_581_0; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2789, _ctx);
        _x_x4111 = false; /*bool*/
      }
      _match_x2786 = kk_std_core_int_xparse(s_1_10304, _x_x4111, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2786, _ctx)) {
        kk_box_t _box_x261 = _match_x2786._cons.Just.value;
        kk_integer_t m = kk_integer_unbox(_box_x261, _ctx);
        kk_integer_dup(m, _ctx);
        kk_std_core_types__maybe_drop(_match_x2786, _ctx);
        kk_string_t s_2_10308;
        kk_std_core_types__list _x_x4112;
        kk_std_core_types__list _x_x4113;
        kk_std_core_types__list _x_x4114 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4113 = kk_std_core_list_drop(_x_x4114, kk_integer_from_small(8), _ctx); /*list<10001>*/
        kk_integer_t _x_x4115 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
        _x_x4112 = kk_std_core_list_take(_x_x4113, _x_x4115, _ctx); /*list<10001>*/
        s_2_10308 = kk_std_core_string_listchar_fs_string(_x_x4112, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2787;
        bool _x_x4116;
        kk_std_core_types__optional _match_x2788 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2788, _ctx)) {
          kk_box_t _box_x262 = _match_x2788._cons._Optional.value;
          bool _uniq_hex_581_1 = kk_bool_unbox(_box_x262);
          kk_std_core_types__optional_drop(_match_x2788, _ctx);
          _x_x4116 = _uniq_hex_581_1; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2788, _ctx);
          _x_x4116 = false; /*bool*/
        }
        _match_x2787 = kk_std_core_int_xparse(s_2_10308, _x_x4116, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2787, _ctx)) {
          kk_box_t _box_x263 = _match_x2787._cons.Just.value;
          kk_integer_t d = kk_integer_unbox(_box_x263, _ctx);
          kk_integer_dup(d, _ctx);
          kk_std_core_types__maybe_drop(_match_x2787, _ctx);
          kk_box_t _x_x4117;
          kk_std_core_types__tuple3 _x_x4118 = kk_std_core_types__new_Tuple3(kk_integer_box(y_0, _ctx), kk_integer_box(m, _ctx), kk_integer_box(d, _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4117 = kk_std_core_types__tuple3_box(_x_x4118, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4117, _ctx);
        }
        {
          kk_integer_drop(y_0, _ctx);
          kk_integer_drop(m, _ctx);
          kk_box_t _x_x4119;
          kk_string_t _x_x4120;
          kk_define_string_literal(static, _s_x4121, 11, "invalid day", _ctx)
          _x_x4120 = kk_string_dup(_s_x4121, _ctx); /*string*/
          _x_x4119 = kk_string_box(_x_x4120); /*10014*/
          return kk_std_core_types__new_Left(_x_x4119, _ctx);
        }
      }
      {
        kk_integer_drop(y_0, _ctx);
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4122;
        kk_string_t _x_x4123;
        kk_define_string_literal(static, _s_x4124, 13, "invalid month", _ctx)
        _x_x4123 = kk_string_dup(_s_x4124, _ctx); /*string*/
        _x_x4122 = kk_string_box(_x_x4123); /*10014*/
        return kk_std_core_types__new_Left(_x_x4122, _ctx);
      }
    }
    {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4125;
      kk_string_t _x_x4126;
      kk_define_string_literal(static, _s_x4127, 12, "invalid year", _ctx)
      _x_x4126 = kk_string_dup(_s_x4127, _ctx); /*string*/
      _x_x4125 = kk_string_box(_x_x4126); /*10014*/
      return kk_std_core_types__new_Left(_x_x4125, _ctx);
    }
  }
  {
    kk_string_t _b_x271_279;
    kk_string_t _x_x4128;
    kk_define_string_literal(static, _s_x4129, 14, "invalid date: ", _ctx)
    _x_x4128 = kk_string_dup(_s_x4129, _ctx); /*string*/
    _b_x271_279 = kk_std_core_types__lp__plus__plus__rp_(_x_x4128, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x271_279), _ctx);
  }
}

kk_std_core_types__either kk_display_hc__time__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10312;
  kk_string_t _x_x4130 = kk_string_dup(s, _ctx); /*string*/
  b_10312 = kk_display_hc__is__valid__time(_x_x4130, _ctx); /*bool*/
  if (b_10312) {
    bool _match_x2772;
    kk_integer_t _brw_x2783;
    kk_string_t _x_x4131 = kk_string_dup(s, _ctx); /*string*/
    _brw_x2783 = kk_std_core_string_chars_fs_count(_x_x4131, _ctx); /*int*/
    bool _brw_x2784 = kk_integer_eq_borrow(_brw_x2783,(kk_integer_from_small(5)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2783, _ctx);
    _match_x2772 = _brw_x2784; /*bool*/
    if (_match_x2772) {
      kk_string_t s_0_10313;
      kk_std_core_types__list _x_x4132;
      kk_std_core_types__list _x_x4133;
      kk_std_core_types__list _x_x4134;
      kk_string_t _x_x4135 = kk_string_dup(s, _ctx); /*string*/
      _x_x4134 = kk_std_core_string_list(_x_x4135, _ctx); /*list<char>*/
      _x_x4133 = kk_std_core_list_drop(_x_x4134, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4136 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4132 = kk_std_core_list_take(_x_x4133, _x_x4136, _ctx); /*list<10001>*/
      s_0_10313 = kk_std_core_string_listchar_fs_string(_x_x4132, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2779;
      bool _x_x4137;
      kk_std_core_types__optional _match_x2782 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2782, _ctx)) {
        kk_box_t _box_x280 = _match_x2782._cons._Optional.value;
        bool _uniq_hex_581 = kk_bool_unbox(_box_x280);
        kk_std_core_types__optional_drop(_match_x2782, _ctx);
        _x_x4137 = _uniq_hex_581; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2782, _ctx);
        _x_x4137 = false; /*bool*/
      }
      _match_x2779 = kk_std_core_int_xparse(s_0_10313, _x_x4137, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2779, _ctx)) {
        kk_box_t _box_x281 = _match_x2779._cons.Just.value;
        kk_integer_t h = kk_integer_unbox(_box_x281, _ctx);
        kk_integer_dup(h, _ctx);
        kk_std_core_types__maybe_drop(_match_x2779, _ctx);
        kk_string_t s_1_10317;
        kk_std_core_types__list _x_x4138;
        kk_std_core_types__list _x_x4139;
        kk_std_core_types__list _x_x4140 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4139 = kk_std_core_list_drop(_x_x4140, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4141 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4138 = kk_std_core_list_take(_x_x4139, _x_x4141, _ctx); /*list<10001>*/
        s_1_10317 = kk_std_core_string_listchar_fs_string(_x_x4138, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2780;
        bool _x_x4142;
        kk_std_core_types__optional _match_x2781 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2781, _ctx)) {
          kk_box_t _box_x282 = _match_x2781._cons._Optional.value;
          bool _uniq_hex_581_0 = kk_bool_unbox(_box_x282);
          kk_std_core_types__optional_drop(_match_x2781, _ctx);
          _x_x4142 = _uniq_hex_581_0; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2781, _ctx);
          _x_x4142 = false; /*bool*/
        }
        _match_x2780 = kk_std_core_int_xparse(s_1_10317, _x_x4142, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2780, _ctx)) {
          kk_box_t _box_x283 = _match_x2780._cons.Just.value;
          kk_integer_t m = kk_integer_unbox(_box_x283, _ctx);
          kk_integer_dup(m, _ctx);
          kk_std_core_types__maybe_drop(_match_x2780, _ctx);
          kk_box_t _x_x4143;
          kk_std_core_types__tuple3 _x_x4144 = kk_std_core_types__new_Tuple3(kk_integer_box(h, _ctx), kk_integer_box(m, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4143 = kk_std_core_types__tuple3_box(_x_x4144, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4143, _ctx);
        }
        {
          kk_integer_drop(h, _ctx);
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
    {
      kk_string_t s_2_10321;
      kk_std_core_types__list _x_x4151;
      kk_std_core_types__list _x_x4152;
      kk_std_core_types__list _x_x4153;
      kk_string_t _x_x4154 = kk_string_dup(s, _ctx); /*string*/
      _x_x4153 = kk_std_core_string_list(_x_x4154, _ctx); /*list<char>*/
      _x_x4152 = kk_std_core_list_drop(_x_x4153, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4155 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4151 = kk_std_core_list_take(_x_x4152, _x_x4155, _ctx); /*list<10001>*/
      s_2_10321 = kk_std_core_string_listchar_fs_string(_x_x4151, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2773;
      bool _x_x4156;
      kk_std_core_types__optional _match_x2778 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2778, _ctx)) {
        kk_box_t _box_x290 = _match_x2778._cons._Optional.value;
        bool _uniq_hex_581_1 = kk_bool_unbox(_box_x290);
        kk_std_core_types__optional_drop(_match_x2778, _ctx);
        _x_x4156 = _uniq_hex_581_1; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2778, _ctx);
        _x_x4156 = false; /*bool*/
      }
      _match_x2773 = kk_std_core_int_xparse(s_2_10321, _x_x4156, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2773, _ctx)) {
        kk_box_t _box_x291 = _match_x2773._cons.Just.value;
        kk_integer_t h_0 = kk_integer_unbox(_box_x291, _ctx);
        kk_integer_dup(h_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2773, _ctx);
        kk_string_t s_3_10325;
        kk_std_core_types__list _x_x4157;
        kk_std_core_types__list _x_x4158;
        kk_std_core_types__list _x_x4159;
        kk_string_t _x_x4160 = kk_string_dup(s, _ctx); /*string*/
        _x_x4159 = kk_std_core_string_list(_x_x4160, _ctx); /*list<char>*/
        _x_x4158 = kk_std_core_list_drop(_x_x4159, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4161 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4157 = kk_std_core_list_take(_x_x4158, _x_x4161, _ctx); /*list<10001>*/
        s_3_10325 = kk_std_core_string_listchar_fs_string(_x_x4157, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2774;
        bool _x_x4162;
        kk_std_core_types__optional _match_x2777 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2777, _ctx)) {
          kk_box_t _box_x292 = _match_x2777._cons._Optional.value;
          bool _uniq_hex_581_2 = kk_bool_unbox(_box_x292);
          kk_std_core_types__optional_drop(_match_x2777, _ctx);
          _x_x4162 = _uniq_hex_581_2; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2777, _ctx);
          _x_x4162 = false; /*bool*/
        }
        _match_x2774 = kk_std_core_int_xparse(s_3_10325, _x_x4162, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2774, _ctx)) {
          kk_box_t _box_x293 = _match_x2774._cons.Just.value;
          kk_integer_t m_0 = kk_integer_unbox(_box_x293, _ctx);
          kk_integer_dup(m_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2774, _ctx);
          kk_string_t s_4_10329;
          kk_std_core_types__list _x_x4163;
          kk_std_core_types__list _x_x4164;
          kk_std_core_types__list _x_x4165 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4164 = kk_std_core_list_drop(_x_x4165, kk_integer_from_small(6), _ctx); /*list<10001>*/
          kk_integer_t _x_x4166 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
          _x_x4163 = kk_std_core_list_take(_x_x4164, _x_x4166, _ctx); /*list<10001>*/
          s_4_10329 = kk_std_core_string_listchar_fs_string(_x_x4163, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2775;
          bool _x_x4167;
          kk_std_core_types__optional _match_x2776 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2776, _ctx)) {
            kk_box_t _box_x294 = _match_x2776._cons._Optional.value;
            bool _uniq_hex_581_3 = kk_bool_unbox(_box_x294);
            kk_std_core_types__optional_drop(_match_x2776, _ctx);
            _x_x4167 = _uniq_hex_581_3; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2776, _ctx);
            _x_x4167 = false; /*bool*/
          }
          _match_x2775 = kk_std_core_int_xparse(s_4_10329, _x_x4167, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2775, _ctx)) {
            kk_box_t _box_x295 = _match_x2775._cons.Just.value;
            kk_integer_t sec = kk_integer_unbox(_box_x295, _ctx);
            kk_integer_dup(sec, _ctx);
            kk_std_core_types__maybe_drop(_match_x2775, _ctx);
            kk_box_t _x_x4168;
            kk_std_core_types__tuple3 _x_x4169 = kk_std_core_types__new_Tuple3(kk_integer_box(h_0, _ctx), kk_integer_box(m_0, _ctx), kk_integer_box(sec, _ctx), _ctx); /*(10041, 10042, 10043)*/
            _x_x4168 = kk_std_core_types__tuple3_box(_x_x4169, _ctx); /*10015*/
            return kk_std_core_types__new_Right(_x_x4168, _ctx);
          }
          {
            kk_integer_drop(m_0, _ctx);
            kk_integer_drop(h_0, _ctx);
            kk_box_t _x_x4170;
            kk_string_t _x_x4171;
            kk_define_string_literal(static, _s_x4172, 14, "invalid second", _ctx)
            _x_x4171 = kk_string_dup(_s_x4172, _ctx); /*string*/
            _x_x4170 = kk_string_box(_x_x4171); /*10014*/
            return kk_std_core_types__new_Left(_x_x4170, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(h_0, _ctx);
          kk_box_t _x_x4173;
          kk_string_t _x_x4174;
          kk_define_string_literal(static, _s_x4175, 14, "invalid minute", _ctx)
          _x_x4174 = kk_string_dup(_s_x4175, _ctx); /*string*/
          _x_x4173 = kk_string_box(_x_x4174); /*10014*/
          return kk_std_core_types__new_Left(_x_x4173, _ctx);
        }
      }
      {
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4176;
        kk_string_t _x_x4177;
        kk_define_string_literal(static, _s_x4178, 12, "invalid hour", _ctx)
        _x_x4177 = kk_string_dup(_s_x4178, _ctx); /*string*/
        _x_x4176 = kk_string_box(_x_x4177); /*10014*/
        return kk_std_core_types__new_Left(_x_x4176, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x303_317;
    kk_string_t _x_x4179;
    kk_define_string_literal(static, _s_x4180, 14, "invalid time: ", _ctx)
    _x_x4179 = kk_string_dup(_s_x4180, _ctx); /*string*/
    _b_x303_317 = kk_std_core_types__lp__plus__plus__rp_(_x_x4179, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x303_317), _ctx);
  }
}

kk_std_core_types__either kk_display_hc__datetime__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2768;
  kk_integer_t _brw_x2770;
  kk_string_t _x_x4181 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2770 = kk_std_core_string_chars_fs_count(_x_x4181, _ctx); /*int*/
  bool _brw_x2771 = kk_integer_gte_borrow(_brw_x2770,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2770, _ctx);
  _match_x2768 = _brw_x2771; /*bool*/
  if (_match_x2768) {
    bool _match_x2769;
    kk_string_t _x_x4182;
    kk_std_core_types__list _x_x4183;
    kk_std_core_types__list _x_x4184;
    kk_std_core_types__list _x_x4185;
    kk_string_t _x_x4186 = kk_string_dup(s, _ctx); /*string*/
    _x_x4185 = kk_std_core_string_list(_x_x4186, _ctx); /*list<char>*/
    _x_x4184 = kk_std_core_list_drop(_x_x4185, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4187 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
    _x_x4183 = kk_std_core_list_take(_x_x4184, _x_x4187, _ctx); /*list<10001>*/
    _x_x4182 = kk_std_core_string_listchar_fs_string(_x_x4183, _ctx); /*string*/
    _match_x2769 = kk_display_hc__is__valid__date(_x_x4182, _ctx); /*bool*/
    if (_match_x2769) {
      kk_string_t _b_x318_321;
      kk_std_core_types__list _x_x4188;
      kk_std_core_types__list _x_x4189;
      kk_std_core_types__list _x_x4190 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4189 = kk_std_core_list_drop(_x_x4190, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4191 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4188 = kk_std_core_list_take(_x_x4189, _x_x4191, _ctx); /*list<10001>*/
      _b_x318_321 = kk_std_core_string_listchar_fs_string(_x_x4188, _ctx); /*string*/
      return kk_std_core_types__new_Right(kk_string_box(_b_x318_321), _ctx);
    }
    {
      kk_string_t _b_x319_322;
      kk_string_t _x_x4192;
      kk_define_string_literal(static, _s_x4193, 18, "no valid date in: ", _ctx)
      _x_x4192 = kk_string_dup(_s_x4193, _ctx); /*string*/
      _b_x319_322 = kk_std_core_types__lp__plus__plus__rp_(_x_x4192, s, _ctx); /*string*/
      return kk_std_core_types__new_Left(kk_string_box(_b_x319_322), _ctx);
    }
  }
  {
    kk_string_t _b_x320_323;
    kk_string_t _x_x4194;
    kk_define_string_literal(static, _s_x4195, 18, "no valid date in: ", _ctx)
    _x_x4194 = kk_string_dup(_s_x4195, _ctx); /*string*/
    _b_x320_323 = kk_std_core_types__lp__plus__plus__rp_(_x_x4194, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x320_323), _ctx);
  }
}

kk_string_t kk_display_hc__strip__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> string */ 
  bool _match_x2753;
  kk_string_t _x_x4196 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x4197;
  kk_define_string_literal(static, _s_x4198, 1, "Z", _ctx)
  _x_x4197 = kk_string_dup(_s_x4198, _ctx); /*string*/
  _match_x2753 = kk_string_contains(_x_x4196,_x_x4197,kk_context()); /*bool*/
  if (_match_x2753) {
    kk_std_core_types__maybe _match_x2764;
    kk_string_t _x_x4199 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4200;
    kk_define_string_literal(static, _s_x4201, 1, "Z", _ctx)
    _x_x4200 = kk_string_dup(_s_x4201, _ctx); /*string*/
    _match_x2764 = kk_std_core_sslice_find(_x_x4199, _x_x4200, _ctx); /*maybe<sslice/sslice>*/
    if (kk_std_core_types__is_Just(_match_x2764, _ctx)) {
      kk_box_t _box_x324 = _match_x2764._cons.Just.value;
      kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x324, KK_BORROWED, _ctx);
      kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
      kk_std_core_types__maybe_drop(_match_x2764, _ctx);
      kk_integer_t i;
      kk_std_core_sslice__sslice _x_x4202;
      {
        kk_string_t s = hc____ss.str;
        kk_integer_t start = hc____ss.start;
        kk_string_dup(s, _ctx);
        kk_integer_dup(start, _ctx);
        kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
        _x_x4202 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
      }
      i = kk_std_core_sslice_count(_x_x4202, _ctx); /*int*/
      kk_std_core_types__list _x_x4203;
      kk_std_core_types__list _x_x4204;
      kk_std_core_types__list _x_x4205 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x4204 = kk_std_core_list_drop(_x_x4205, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4206 = kk_integer_add_small_const(i, 0, _ctx); /*int*/
      _x_x4203 = kk_std_core_list_take(_x_x4204, _x_x4206, _ctx); /*list<10001>*/
      return kk_std_core_string_listchar_fs_string(_x_x4203, _ctx);
    }
    {
      kk_std_core_types__maybe _match_x2765 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
      if (kk_std_core_types__is_Just(_match_x2765, _ctx)) {
        kk_box_t _box_x325 = _match_x2765._cons.Just.value;
        kk_integer_t i_0 = kk_integer_unbox(_box_x325, _ctx);
        kk_integer_dup(i_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2765, _ctx);
        kk_std_core_types__list _x_x4207;
        kk_std_core_types__list _x_x4208;
        kk_std_core_types__list _x_x4209 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4208 = kk_std_core_list_drop(_x_x4209, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4210 = kk_integer_add_small_const(i_0, 0, _ctx); /*int*/
        _x_x4207 = kk_std_core_list_take(_x_x4208, _x_x4210, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4207, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2766;
        kk_string_t _x_x4211 = kk_string_dup(rest, _ctx); /*string*/
        kk_string_t _x_x4212;
        kk_define_string_literal(static, _s_x4213, 1, "z", _ctx)
        _x_x4212 = kk_string_dup(_s_x4213, _ctx); /*string*/
        _match_x2766 = kk_std_core_sslice_find(_x_x4211, _x_x4212, _ctx); /*maybe<sslice/sslice>*/
        if (kk_std_core_types__is_Just(_match_x2766, _ctx)) {
          kk_box_t _box_x326 = _match_x2766._cons.Just.value;
          kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x326, KK_BORROWED, _ctx);
          kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2766, _ctx);
          kk_integer_t i_0_0;
          kk_std_core_sslice__sslice _x_x4214;
          {
            kk_string_t s_0 = hc____ss_0.str;
            kk_integer_t start_0 = hc____ss_0.start;
            kk_string_dup(s_0, _ctx);
            kk_integer_dup(start_0, _ctx);
            kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
            _x_x4214 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
          }
          i_0_0 = kk_std_core_sslice_count(_x_x4214, _ctx); /*int*/
          kk_std_core_types__list _x_x4215;
          kk_std_core_types__list _x_x4216;
          kk_std_core_types__list _x_x4217 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4216 = kk_std_core_list_drop(_x_x4217, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4218 = kk_integer_add_small_const(i_0_0, 0, _ctx); /*int*/
          _x_x4215 = kk_std_core_list_take(_x_x4216, _x_x4218, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4215, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2767 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
          if (kk_std_core_types__is_Just(_match_x2767, _ctx)) {
            kk_box_t _box_x327 = _match_x2767._cons.Just.value;
            kk_integer_t i_0_1 = kk_integer_unbox(_box_x327, _ctx);
            kk_integer_dup(i_0_1, _ctx);
            kk_std_core_types__maybe_drop(_match_x2767, _ctx);
            kk_std_core_types__list _x_x4219;
            kk_std_core_types__list _x_x4220;
            kk_std_core_types__list _x_x4221 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4220 = kk_std_core_list_drop(_x_x4221, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4222 = kk_integer_add_small_const(i_0_1, 0, _ctx); /*int*/
            _x_x4219 = kk_std_core_list_take(_x_x4220, _x_x4222, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4219, _ctx);
          }
          {
            return rest;
          }
        }
      }
    }
  }
  {
    bool _match_x2754;
    kk_string_t _x_x4223 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4224;
    kk_define_string_literal(static, _s_x4225, 1, "z", _ctx)
    _x_x4224 = kk_string_dup(_s_x4225, _ctx); /*string*/
    _match_x2754 = kk_string_contains(_x_x4223,_x_x4224,kk_context()); /*bool*/
    if (_match_x2754) {
      kk_std_core_types__maybe _match_x2760;
      kk_string_t _x_x4226 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x4227;
      kk_define_string_literal(static, _s_x4228, 1, "Z", _ctx)
      _x_x4227 = kk_string_dup(_s_x4228, _ctx); /*string*/
      _match_x2760 = kk_std_core_sslice_find(_x_x4226, _x_x4227, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2760, _ctx)) {
        kk_box_t _box_x328 = _match_x2760._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_1 = kk_std_core_sslice__sslice_unbox(_box_x328, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_1, _ctx);
        kk_std_core_types__maybe_drop(_match_x2760, _ctx);
        kk_integer_t i_1;
        kk_std_core_sslice__sslice _x_x4229;
        {
          kk_string_t s_1 = hc____ss_1.str;
          kk_integer_t start_1 = hc____ss_1.start;
          kk_string_dup(s_1, _ctx);
          kk_integer_dup(start_1, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_1, _ctx);
          _x_x4229 = kk_std_core_sslice__new_Sslice(s_1, kk_integer_from_small(0), start_1, _ctx); /*sslice/sslice*/
        }
        i_1 = kk_std_core_sslice_count(_x_x4229, _ctx); /*int*/
        kk_std_core_types__list _x_x4230;
        kk_std_core_types__list _x_x4231;
        kk_std_core_types__list _x_x4232 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4231 = kk_std_core_list_drop(_x_x4232, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4233 = kk_integer_add_small_const(i_1, 0, _ctx); /*int*/
        _x_x4230 = kk_std_core_list_take(_x_x4231, _x_x4233, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4230, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2761 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2761, _ctx)) {
          kk_box_t _box_x329 = _match_x2761._cons.Just.value;
          kk_integer_t i_2 = kk_integer_unbox(_box_x329, _ctx);
          kk_integer_dup(i_2, _ctx);
          kk_std_core_types__maybe_drop(_match_x2761, _ctx);
          kk_std_core_types__list _x_x4234;
          kk_std_core_types__list _x_x4235;
          kk_std_core_types__list _x_x4236 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4235 = kk_std_core_list_drop(_x_x4236, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4237 = kk_integer_add_small_const(i_2, 0, _ctx); /*int*/
          _x_x4234 = kk_std_core_list_take(_x_x4235, _x_x4237, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4234, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2762;
          kk_string_t _x_x4238 = kk_string_dup(rest, _ctx); /*string*/
          kk_string_t _x_x4239;
          kk_define_string_literal(static, _s_x4240, 1, "z", _ctx)
          _x_x4239 = kk_string_dup(_s_x4240, _ctx); /*string*/
          _match_x2762 = kk_std_core_sslice_find(_x_x4238, _x_x4239, _ctx); /*maybe<sslice/sslice>*/
          if (kk_std_core_types__is_Just(_match_x2762, _ctx)) {
            kk_box_t _box_x330 = _match_x2762._cons.Just.value;
            kk_std_core_sslice__sslice hc____ss_0_0 = kk_std_core_sslice__sslice_unbox(_box_x330, KK_BORROWED, _ctx);
            kk_std_core_sslice__sslice_dup(hc____ss_0_0, _ctx);
            kk_std_core_types__maybe_drop(_match_x2762, _ctx);
            kk_integer_t i_0_2;
            kk_std_core_sslice__sslice _x_x4241;
            {
              kk_string_t s_2 = hc____ss_0_0.str;
              kk_integer_t start_2 = hc____ss_0_0.start;
              kk_string_dup(s_2, _ctx);
              kk_integer_dup(start_2, _ctx);
              kk_std_core_sslice__sslice_drop(hc____ss_0_0, _ctx);
              _x_x4241 = kk_std_core_sslice__new_Sslice(s_2, kk_integer_from_small(0), start_2, _ctx); /*sslice/sslice*/
            }
            i_0_2 = kk_std_core_sslice_count(_x_x4241, _ctx); /*int*/
            kk_std_core_types__list _x_x4242;
            kk_std_core_types__list _x_x4243;
            kk_std_core_types__list _x_x4244 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4243 = kk_std_core_list_drop(_x_x4244, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4245 = kk_integer_add_small_const(i_0_2, 0, _ctx); /*int*/
            _x_x4242 = kk_std_core_list_take(_x_x4243, _x_x4245, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4242, _ctx);
          }
          {
            kk_std_core_types__maybe _match_x2763 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
            if (kk_std_core_types__is_Just(_match_x2763, _ctx)) {
              kk_box_t _box_x331 = _match_x2763._cons.Just.value;
              kk_integer_t i_0_3 = kk_integer_unbox(_box_x331, _ctx);
              kk_integer_dup(i_0_3, _ctx);
              kk_std_core_types__maybe_drop(_match_x2763, _ctx);
              kk_std_core_types__list _x_x4246;
              kk_std_core_types__list _x_x4247;
              kk_std_core_types__list _x_x4248 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
              _x_x4247 = kk_std_core_list_drop(_x_x4248, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x4249 = kk_integer_add_small_const(i_0_3, 0, _ctx); /*int*/
              _x_x4246 = kk_std_core_list_take(_x_x4247, _x_x4249, _ctx); /*list<10001>*/
              return kk_std_core_string_listchar_fs_string(_x_x4246, _ctx);
            }
            {
              return rest;
            }
          }
        }
      }
    }
    {
      bool _match_x2755;
      kk_integer_t _brw_x2758;
      kk_string_t _x_x4250 = kk_string_dup(rest, _ctx); /*string*/
      _brw_x2758 = kk_std_core_string_chars_fs_count(_x_x4250, _ctx); /*int*/
      bool _brw_x2759 = kk_integer_gte_borrow(_brw_x2758,(kk_integer_from_small(11)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2758, _ctx);
      _match_x2755 = _brw_x2759; /*bool*/
      if (_match_x2755) {
        kk_integer_t x_9_10361;
        kk_string_t _x_x4251 = kk_string_dup(rest, _ctx); /*string*/
        x_9_10361 = kk_std_core_string_chars_fs_count(_x_x4251, _ctx); /*int*/
        kk_integer_t x_8_10359 = kk_integer_add_small_const(x_9_10361, -5, _ctx); /*int*/;
        kk_integer_t x_10_10363;
        kk_string_t _x_x4252 = kk_string_dup(rest, _ctx); /*string*/
        x_10_10363 = kk_std_core_string_chars_fs_count(_x_x4252, _ctx); /*int*/
        kk_integer_t y_8_10360 = kk_integer_add_small_const(x_10_10363, -6, _ctx); /*int*/;
        kk_integer_t x_7_10357;
        kk_string_t _x_x4253 = kk_string_dup(rest, _ctx); /*string*/
        x_7_10357 = kk_std_core_string_chars_fs_count(_x_x4253, _ctx); /*int*/
        bool _match_x2756;
        kk_string_t _x_x4254;
        kk_std_core_types__list _x_x4255;
        kk_std_core_types__list _x_x4256;
        kk_std_core_types__list _x_x4257;
        kk_string_t _x_x4258 = kk_string_dup(rest, _ctx); /*string*/
        _x_x4257 = kk_std_core_string_list(_x_x4258, _ctx); /*list<char>*/
        kk_integer_t _x_x4259 = kk_integer_add_small_const(x_7_10357, -6, _ctx); /*int*/
        _x_x4256 = kk_std_core_list_drop(_x_x4257, _x_x4259, _ctx); /*list<10001>*/
        kk_integer_t _x_x4260 = kk_integer_sub(x_8_10359,y_8_10360,kk_context()); /*int*/
        _x_x4255 = kk_std_core_list_take(_x_x4256, _x_x4260, _ctx); /*list<10001>*/
        _x_x4254 = kk_std_core_string_listchar_fs_string(_x_x4255, _ctx); /*string*/
        kk_string_t _x_x4261;
        kk_define_string_literal(static, _s_x4262, 1, "+", _ctx)
        _x_x4261 = kk_string_dup(_s_x4262, _ctx); /*string*/
        _match_x2756 = kk_string_is_eq(_x_x4254,_x_x4261,kk_context()); /*bool*/
        if (_match_x2756) {
          kk_integer_t x_12_10367;
          kk_string_t _x_x4263 = kk_string_dup(rest, _ctx); /*string*/
          x_12_10367 = kk_std_core_string_chars_fs_count(_x_x4263, _ctx); /*int*/
          kk_integer_t x_11_10365 = kk_integer_add_small_const(x_12_10367, -6, _ctx); /*int*/;
          kk_std_core_types__list _x_x4264;
          kk_std_core_types__list _x_x4265;
          kk_std_core_types__list _x_x4266 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4265 = kk_std_core_list_drop(_x_x4266, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4267 = kk_integer_add_small_const(x_11_10365, 0, _ctx); /*int*/
          _x_x4264 = kk_std_core_list_take(_x_x4265, _x_x4267, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4264, _ctx);
        }
        {
          kk_integer_t x_15_10373;
          kk_string_t _x_x4268 = kk_string_dup(rest, _ctx); /*string*/
          x_15_10373 = kk_std_core_string_chars_fs_count(_x_x4268, _ctx); /*int*/
          kk_integer_t x_14_10371 = kk_integer_add_small_const(x_15_10373, -5, _ctx); /*int*/;
          kk_integer_t x_16_10375;
          kk_string_t _x_x4269 = kk_string_dup(rest, _ctx); /*string*/
          x_16_10375 = kk_std_core_string_chars_fs_count(_x_x4269, _ctx); /*int*/
          kk_integer_t y_14_10372 = kk_integer_add_small_const(x_16_10375, -6, _ctx); /*int*/;
          kk_integer_t x_13_10369;
          kk_string_t _x_x4270 = kk_string_dup(rest, _ctx); /*string*/
          x_13_10369 = kk_std_core_string_chars_fs_count(_x_x4270, _ctx); /*int*/
          bool _match_x2757;
          kk_string_t _x_x4271;
          kk_std_core_types__list _x_x4272;
          kk_std_core_types__list _x_x4273;
          kk_std_core_types__list _x_x4274;
          kk_string_t _x_x4275 = kk_string_dup(rest, _ctx); /*string*/
          _x_x4274 = kk_std_core_string_list(_x_x4275, _ctx); /*list<char>*/
          kk_integer_t _x_x4276 = kk_integer_add_small_const(x_13_10369, -6, _ctx); /*int*/
          _x_x4273 = kk_std_core_list_drop(_x_x4274, _x_x4276, _ctx); /*list<10001>*/
          kk_integer_t _x_x4277 = kk_integer_sub(x_14_10371,y_14_10372,kk_context()); /*int*/
          _x_x4272 = kk_std_core_list_take(_x_x4273, _x_x4277, _ctx); /*list<10001>*/
          _x_x4271 = kk_std_core_string_listchar_fs_string(_x_x4272, _ctx); /*string*/
          kk_string_t _x_x4278;
          kk_define_string_literal(static, _s_x4279, 1, "-", _ctx)
          _x_x4278 = kk_string_dup(_s_x4279, _ctx); /*string*/
          _match_x2757 = kk_string_is_eq(_x_x4271,_x_x4278,kk_context()); /*bool*/
          if (_match_x2757) {
            kk_integer_t x_18_10379;
            kk_string_t _x_x4280 = kk_string_dup(rest, _ctx); /*string*/
            x_18_10379 = kk_std_core_string_chars_fs_count(_x_x4280, _ctx); /*int*/
            kk_integer_t x_17_10377 = kk_integer_add_small_const(x_18_10379, -6, _ctx); /*int*/;
            kk_std_core_types__list _x_x4281;
            kk_std_core_types__list _x_x4282;
            kk_std_core_types__list _x_x4283 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4282 = kk_std_core_list_drop(_x_x4283, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4284 = kk_integer_add_small_const(x_17_10377, 0, _ctx); /*int*/
            _x_x4281 = kk_std_core_list_take(_x_x4282, _x_x4284, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4281, _ctx);
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

kk_std_core_types__either kk_display_hc__datetime__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2744;
  kk_integer_t _brw_x2751;
  kk_string_t _x_x4285 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2751 = kk_std_core_string_chars_fs_count(_x_x4285, _ctx); /*int*/
  bool _brw_x2752 = kk_integer_lt_borrow(_brw_x2751,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2751, _ctx);
  _match_x2744 = _brw_x2752; /*bool*/
  if (_match_x2744) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4286;
    kk_string_t _x_x4287;
    kk_define_string_literal(static, _s_x4288, 29, "string too short for datetime", _ctx)
    _x_x4287 = kk_string_dup(_s_x4288, _ctx); /*string*/
    _x_x4286 = kk_string_box(_x_x4287); /*10014*/
    return kk_std_core_types__new_Left(_x_x4286, _ctx);
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4289;
    kk_std_core_types__list _x_x4290;
    kk_std_core_types__list _x_x4291;
    kk_string_t _x_x4292 = kk_string_dup(s, _ctx); /*string*/
    _x_x4291 = kk_std_core_string_list(_x_x4292, _ctx); /*list<char>*/
    _x_x4290 = kk_std_core_list_drop(_x_x4291, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4293 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4289 = kk_std_core_list_take(_x_x4290, _x_x4293, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4289, _ctx); /*string*/
    bool _match_x2745;
    kk_string_t _x_x4294 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4295;
    kk_define_string_literal(static, _s_x4296, 1, "T", _ctx)
    _x_x4295 = kk_string_dup(_s_x4296, _ctx); /*string*/
    _match_x2745 = kk_string_is_neq(_x_x4294,_x_x4295,kk_context()); /*bool*/
    if (_match_x2745) {
      bool _match_x2747;
      kk_string_t _x_x4297 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4298;
      kk_define_string_literal(static, _s_x4299, 1, "t", _ctx)
      _x_x4298 = kk_string_dup(_s_x4299, _ctx); /*string*/
      _match_x2747 = kk_string_is_neq(_x_x4297,_x_x4298,kk_context()); /*bool*/
      if (_match_x2747) {
        bool _match_x2749;
        kk_string_t _x_x4300;
        kk_define_string_literal(static, _s_x4301, 1, " ", _ctx)
        _x_x4300 = kk_string_dup(_s_x4301, _ctx); /*string*/
        _match_x2749 = kk_string_is_neq(sep,_x_x4300,kk_context()); /*bool*/
        if (_match_x2749) {
          kk_string_drop(s, _ctx);
          kk_box_t _x_x4302;
          kk_string_t _x_x4303;
          kk_define_string_literal(static, _s_x4304, 27, "no datetime separator found", _ctx)
          _x_x4303 = kk_string_dup(_s_x4304, _ctx); /*string*/
          _x_x4302 = kk_string_box(_x_x4303); /*10014*/
          return kk_std_core_types__new_Left(_x_x4302, _ctx);
        }
        {
          kk_string_t time__part;
          kk_string_t _x_x4305;
          kk_std_core_types__list _x_x4306;
          kk_std_core_types__list _x_x4307 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4306 = kk_std_core_list_drop(_x_x4307, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4305 = kk_std_core_string_listchar_fs_string(_x_x4306, _ctx); /*string*/
          time__part = kk_display_hc__strip__offset(_x_x4305, _ctx); /*string*/
          bool _match_x2750;
          kk_string_t _x_x4308 = kk_string_dup(time__part, _ctx); /*string*/
          _match_x2750 = kk_display_hc__is__valid__time(_x_x4308, _ctx); /*bool*/
          if (_match_x2750) {
            return kk_std_core_types__new_Right(kk_string_box(time__part), _ctx);
          }
          {
            kk_string_drop(time__part, _ctx);
            kk_box_t _x_x4309;
            kk_string_t _x_x4310;
            kk_define_string_literal(static, _s_x4311, 20, "invalid time portion", _ctx)
            _x_x4310 = kk_string_dup(_s_x4311, _ctx); /*string*/
            _x_x4309 = kk_string_box(_x_x4310); /*10014*/
            return kk_std_core_types__new_Left(_x_x4309, _ctx);
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        kk_string_t time__part_0;
        kk_string_t _x_x4312;
        kk_std_core_types__list _x_x4313;
        kk_std_core_types__list _x_x4314 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4313 = kk_std_core_list_drop(_x_x4314, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4312 = kk_std_core_string_listchar_fs_string(_x_x4313, _ctx); /*string*/
        time__part_0 = kk_display_hc__strip__offset(_x_x4312, _ctx); /*string*/
        bool _match_x2748;
        kk_string_t _x_x4315 = kk_string_dup(time__part_0, _ctx); /*string*/
        _match_x2748 = kk_display_hc__is__valid__time(_x_x4315, _ctx); /*bool*/
        if (_match_x2748) {
          return kk_std_core_types__new_Right(kk_string_box(time__part_0), _ctx);
        }
        {
          kk_string_drop(time__part_0, _ctx);
          kk_box_t _x_x4316;
          kk_string_t _x_x4317;
          kk_define_string_literal(static, _s_x4318, 20, "invalid time portion", _ctx)
          _x_x4317 = kk_string_dup(_s_x4318, _ctx); /*string*/
          _x_x4316 = kk_string_box(_x_x4317); /*10014*/
          return kk_std_core_types__new_Left(_x_x4316, _ctx);
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      kk_string_t time__part_1;
      kk_string_t _x_x4319;
      kk_std_core_types__list _x_x4320;
      kk_std_core_types__list _x_x4321 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4320 = kk_std_core_list_drop(_x_x4321, kk_integer_from_small(11), _ctx); /*list<10001>*/
      _x_x4319 = kk_std_core_string_listchar_fs_string(_x_x4320, _ctx); /*string*/
      time__part_1 = kk_display_hc__strip__offset(_x_x4319, _ctx); /*string*/
      bool _match_x2746;
      kk_string_t _x_x4322 = kk_string_dup(time__part_1, _ctx); /*string*/
      _match_x2746 = kk_display_hc__is__valid__time(_x_x4322, _ctx); /*bool*/
      if (_match_x2746) {
        return kk_std_core_types__new_Right(kk_string_box(time__part_1), _ctx);
      }
      {
        kk_string_drop(time__part_1, _ctx);
        kk_box_t _x_x4323;
        kk_string_t _x_x4324;
        kk_define_string_literal(static, _s_x4325, 20, "invalid time portion", _ctx)
        _x_x4324 = kk_string_dup(_s_x4325, _ctx); /*string*/
        _x_x4323 = kk_string_box(_x_x4324); /*10014*/
        return kk_std_core_types__new_Left(_x_x4323, _ctx);
      }
    }
  }
}

kk_std_core_types__maybe kk_display_hc__datetime__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> maybe<string> */ 
  bool _match_x2735;
  kk_string_t _x_x4326 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4327;
  kk_define_string_literal(static, _s_x4328, 1, "Z", _ctx)
  _x_x4327 = kk_string_dup(_s_x4328, _ctx); /*string*/
  _match_x2735 = kk_string_contains(_x_x4326,_x_x4327,kk_context()); /*bool*/
  if (_match_x2735) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4329;
    kk_string_t _x_x4330;
    kk_define_string_literal(static, _s_x4331, 1, "Z", _ctx)
    _x_x4330 = kk_string_dup(_s_x4331, _ctx); /*string*/
    _x_x4329 = kk_string_box(_x_x4330); /*10024*/
    return kk_std_core_types__new_Just(_x_x4329, _ctx);
  }
  {
    bool _match_x2736;
    kk_string_t _x_x4332 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4333;
    kk_define_string_literal(static, _s_x4334, 1, "z", _ctx)
    _x_x4333 = kk_string_dup(_s_x4334, _ctx); /*string*/
    _match_x2736 = kk_string_contains(_x_x4332,_x_x4333,kk_context()); /*bool*/
    if (_match_x2736) {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4335;
      kk_string_t _x_x4336;
      kk_define_string_literal(static, _s_x4337, 1, "Z", _ctx)
      _x_x4336 = kk_string_dup(_s_x4337, _ctx); /*string*/
      _x_x4335 = kk_string_box(_x_x4336); /*10024*/
      return kk_std_core_types__new_Just(_x_x4335, _ctx);
    }
    {
      bool _match_x2737;
      kk_integer_t _brw_x2742;
      kk_string_t _x_x4338 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2742 = kk_std_core_string_chars_fs_count(_x_x4338, _ctx); /*int*/
      bool _brw_x2743 = kk_integer_gte_borrow(_brw_x2742,(kk_integer_from_small(22)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2742, _ctx);
      _match_x2737 = _brw_x2743; /*bool*/
      if (_match_x2737) {
        kk_integer_t x_1_10387;
        kk_string_t _x_x4339 = kk_string_dup(s, _ctx); /*string*/
        x_1_10387 = kk_std_core_string_chars_fs_count(_x_x4339, _ctx); /*int*/
        kk_integer_t x_0_10385 = kk_integer_add_small_const(x_1_10387, -5, _ctx); /*int*/;
        kk_integer_t x_2_10389;
        kk_string_t _x_x4340 = kk_string_dup(s, _ctx); /*string*/
        x_2_10389 = kk_std_core_string_chars_fs_count(_x_x4340, _ctx); /*int*/
        kk_integer_t y_0_10386 = kk_integer_add_small_const(x_2_10389, -6, _ctx); /*int*/;
        kk_integer_t x_10383;
        kk_string_t _x_x4341 = kk_string_dup(s, _ctx); /*string*/
        x_10383 = kk_std_core_string_chars_fs_count(_x_x4341, _ctx); /*int*/
        bool _match_x2738;
        kk_string_t _x_x4342;
        kk_std_core_types__list _x_x4343;
        kk_std_core_types__list _x_x4344;
        kk_std_core_types__list _x_x4345;
        kk_string_t _x_x4346 = kk_string_dup(s, _ctx); /*string*/
        _x_x4345 = kk_std_core_string_list(_x_x4346, _ctx); /*list<char>*/
        kk_integer_t _x_x4347 = kk_integer_add_small_const(x_10383, -6, _ctx); /*int*/
        _x_x4344 = kk_std_core_list_drop(_x_x4345, _x_x4347, _ctx); /*list<10001>*/
        kk_integer_t _x_x4348 = kk_integer_sub(x_0_10385,y_0_10386,kk_context()); /*int*/
        _x_x4343 = kk_std_core_list_take(_x_x4344, _x_x4348, _ctx); /*list<10001>*/
        _x_x4342 = kk_std_core_string_listchar_fs_string(_x_x4343, _ctx); /*string*/
        kk_string_t _x_x4349;
        kk_define_string_literal(static, _s_x4350, 1, "+", _ctx)
        _x_x4349 = kk_string_dup(_s_x4350, _ctx); /*string*/
        _match_x2738 = kk_string_is_eq(_x_x4342,_x_x4349,kk_context()); /*bool*/
        if (_match_x2738) {
          kk_integer_t x_3_10391;
          kk_string_t _x_x4351 = kk_string_dup(s, _ctx); /*string*/
          x_3_10391 = kk_std_core_string_chars_fs_count(_x_x4351, _ctx); /*int*/
          kk_string_t o;
          kk_std_core_types__list _x_x4352;
          kk_std_core_types__list _x_x4353 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          kk_integer_t _x_x4354 = kk_integer_add_small_const(x_3_10391, -6, _ctx); /*int*/
          _x_x4352 = kk_std_core_list_drop(_x_x4353, _x_x4354, _ctx); /*list<10001>*/
          o = kk_std_core_string_listchar_fs_string(_x_x4352, _ctx); /*string*/
          bool _match_x2741;
          kk_string_t _x_x4355 = kk_string_dup(o, _ctx); /*string*/
          _match_x2741 = kk_display_hc__is__valid__offset(_x_x4355, _ctx); /*bool*/
          if (_match_x2741) {
            return kk_std_core_types__new_Just(kk_string_box(o), _ctx);
          }
          {
            kk_string_drop(o, _ctx);
            return kk_std_core_types__new_Nothing(_ctx);
          }
        }
        {
          kk_integer_t x_6_10397;
          kk_string_t _x_x4356 = kk_string_dup(s, _ctx); /*string*/
          x_6_10397 = kk_std_core_string_chars_fs_count(_x_x4356, _ctx); /*int*/
          kk_integer_t x_5_10395 = kk_integer_add_small_const(x_6_10397, -5, _ctx); /*int*/;
          kk_integer_t x_7_10399;
          kk_string_t _x_x4357 = kk_string_dup(s, _ctx); /*string*/
          x_7_10399 = kk_std_core_string_chars_fs_count(_x_x4357, _ctx); /*int*/
          kk_integer_t y_5_10396 = kk_integer_add_small_const(x_7_10399, -6, _ctx); /*int*/;
          kk_integer_t x_4_10393;
          kk_string_t _x_x4358 = kk_string_dup(s, _ctx); /*string*/
          x_4_10393 = kk_std_core_string_chars_fs_count(_x_x4358, _ctx); /*int*/
          bool _match_x2739;
          kk_string_t _x_x4359;
          kk_std_core_types__list _x_x4360;
          kk_std_core_types__list _x_x4361;
          kk_std_core_types__list _x_x4362;
          kk_string_t _x_x4363 = kk_string_dup(s, _ctx); /*string*/
          _x_x4362 = kk_std_core_string_list(_x_x4363, _ctx); /*list<char>*/
          kk_integer_t _x_x4364 = kk_integer_add_small_const(x_4_10393, -6, _ctx); /*int*/
          _x_x4361 = kk_std_core_list_drop(_x_x4362, _x_x4364, _ctx); /*list<10001>*/
          kk_integer_t _x_x4365 = kk_integer_sub(x_5_10395,y_5_10396,kk_context()); /*int*/
          _x_x4360 = kk_std_core_list_take(_x_x4361, _x_x4365, _ctx); /*list<10001>*/
          _x_x4359 = kk_std_core_string_listchar_fs_string(_x_x4360, _ctx); /*string*/
          kk_string_t _x_x4366;
          kk_define_string_literal(static, _s_x4367, 1, "-", _ctx)
          _x_x4366 = kk_string_dup(_s_x4367, _ctx); /*string*/
          _match_x2739 = kk_string_is_eq(_x_x4359,_x_x4366,kk_context()); /*bool*/
          if (_match_x2739) {
            kk_integer_t x_8_10401;
            kk_string_t _x_x4368 = kk_string_dup(s, _ctx); /*string*/
            x_8_10401 = kk_std_core_string_chars_fs_count(_x_x4368, _ctx); /*int*/
            kk_string_t o_0;
            kk_std_core_types__list _x_x4369;
            kk_std_core_types__list _x_x4370 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            kk_integer_t _x_x4371 = kk_integer_add_small_const(x_8_10401, -6, _ctx); /*int*/
            _x_x4369 = kk_std_core_list_drop(_x_x4370, _x_x4371, _ctx); /*list<10001>*/
            o_0 = kk_std_core_string_listchar_fs_string(_x_x4369, _ctx); /*string*/
            bool _match_x2740;
            kk_string_t _x_x4372 = kk_string_dup(o_0, _ctx); /*string*/
            _match_x2740 = kk_display_hc__is__valid__offset(_x_x4372, _ctx); /*bool*/
            if (_match_x2740) {
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

kk_string_t kk_display_hc__datetime__kind(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2726;
  kk_string_t _x_x4373 = kk_string_dup(s, _ctx); /*string*/
  _match_x2726 = kk_display_hc__is__valid__time(_x_x4373, _ctx); /*bool*/
  if (_match_x2726) {
    kk_string_drop(s, _ctx);
    kk_define_string_literal(static, _s_x4374, 10, "local-time", _ctx)
    return kk_string_dup(_s_x4374, _ctx);
  }
  {
    bool _match_x2727;
    kk_string_t _x_x4375 = kk_string_dup(s, _ctx); /*string*/
    _match_x2727 = kk_display_hc__is__valid__date(_x_x4375, _ctx); /*bool*/
    if (_match_x2727) {
      bool _match_x2730;
      kk_integer_t _brw_x2733;
      kk_string_t _x_x4376 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2733 = kk_std_core_string_chars_fs_count(_x_x4376, _ctx); /*int*/
      bool _brw_x2734 = kk_integer_eq_borrow(_brw_x2733,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2733, _ctx);
      _match_x2730 = _brw_x2734; /*bool*/
      if (_match_x2730) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4377, 10, "local-date", _ctx)
        return kk_string_dup(_s_x4377, _ctx);
      }
      {
        bool _match_x2731;
        kk_string_t _x_x4378 = kk_string_dup(s, _ctx); /*string*/
        _match_x2731 = kk_display_hc__is__iso__datetime(_x_x4378, _ctx); /*bool*/
        if (_match_x2731) {
          kk_string_drop(s, _ctx);
          kk_define_string_literal(static, _s_x4379, 15, "offset-datetime", _ctx)
          return kk_string_dup(_s_x4379, _ctx);
        }
        {
          bool _match_x2732 = kk_display_hc__is__local__datetime(s, _ctx); /*bool*/;
          if (_match_x2732) {
            kk_define_string_literal(static, _s_x4380, 14, "local-datetime", _ctx)
            return kk_string_dup(_s_x4380, _ctx);
          }
          {
            kk_define_string_literal(static, _s_x4381, 7, "invalid", _ctx)
            return kk_string_dup(_s_x4381, _ctx);
          }
        }
      }
    }
    {
      bool _match_x2728;
      kk_string_t _x_x4382 = kk_string_dup(s, _ctx); /*string*/
      _match_x2728 = kk_display_hc__is__iso__datetime(_x_x4382, _ctx); /*bool*/
      if (_match_x2728) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4383, 15, "offset-datetime", _ctx)
        return kk_string_dup(_s_x4383, _ctx);
      }
      {
        bool _match_x2729 = kk_display_hc__is__local__datetime(s, _ctx); /*bool*/;
        if (_match_x2729) {
          kk_define_string_literal(static, _s_x4384, 14, "local-datetime", _ctx)
          return kk_string_dup(_s_x4384, _ctx);
        }
        {
          kk_define_string_literal(static, _s_x4385, 7, "invalid", _ctx)
          return kk_string_dup(_s_x4385, _ctx);
        }
      }
    }
  }
}

kk_integer_t kk_display_hc__date__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10405;
  kk_string_t _x_x4386 = kk_string_dup(d1, _ctx); /*string*/
  b_10405 = kk_display_hc__is__valid__date(_x_x4386, _ctx); /*bool*/
  if (b_10405) {
    bool b_0_10406;
    kk_string_t _x_x4387 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10406 = kk_display_hc__is__valid__date(_x_x4387, _ctx); /*bool*/
    if (b_0_10406) {
      bool _match_x2723;
      kk_std_core_types__order _x_x4388 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2723 = kk_std_core_order__lp__eq__eq__rp_(_x_x4388, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2723) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2724;
        kk_std_core_types__order _x_x4389;
        kk_std_core_types__order _brw_x2725 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4389 = _brw_x2725; /*order*/
        _match_x2724 = kk_std_core_order__lp__eq__eq__rp_(_x_x4389, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2724) {
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

kk_integer_t kk_display_hc__time__cmp(kk_string_t t1, kk_string_t t2, kk_context_t* _ctx) { /* (t1 : string, t2 : string) -> int */ 
  bool b_10413;
  kk_string_t _x_x4390 = kk_string_dup(t1, _ctx); /*string*/
  b_10413 = kk_display_hc__is__valid__time(_x_x4390, _ctx); /*bool*/
  if (b_10413) {
    bool b_0_10414;
    kk_string_t _x_x4391 = kk_string_dup(t2, _ctx); /*string*/
    b_0_10414 = kk_display_hc__is__valid__time(_x_x4391, _ctx); /*bool*/
    if (b_0_10414) {
      bool _match_x2720;
      kk_std_core_types__order _x_x4392 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/
      _match_x2720 = kk_std_core_order__lp__eq__eq__rp_(_x_x4392, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2720) {
        kk_string_drop(t2, _ctx);
        kk_string_drop(t1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2721;
        kk_std_core_types__order _x_x4393;
        kk_std_core_types__order _brw_x2722 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/;
        kk_string_drop(t1, _ctx);
        kk_string_drop(t2, _ctx);
        _x_x4393 = _brw_x2722; /*order*/
        _match_x2721 = kk_std_core_order__lp__eq__eq__rp_(_x_x4393, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2721) {
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

kk_integer_t kk_display_hc__datetime__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10421;
  kk_string_t _x_x4394 = kk_string_dup(d1, _ctx); /*string*/
  b_10421 = kk_display_hc__is__local__datetime(_x_x4394, _ctx); /*bool*/
  if (b_10421) {
    bool b_0_10422;
    kk_string_t _x_x4395 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10422 = kk_display_hc__is__local__datetime(_x_x4395, _ctx); /*bool*/
    if (b_0_10422) {
      bool _match_x2717;
      kk_std_core_types__order _x_x4396 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2717 = kk_std_core_order__lp__eq__eq__rp_(_x_x4396, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2717) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2718;
        kk_std_core_types__order _x_x4397;
        kk_std_core_types__order _brw_x2719 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4397 = _brw_x2719; /*order*/
        _match_x2718 = kk_std_core_order__lp__eq__eq__rp_(_x_x4397, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
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

bool kk_display_hc__is__before(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> bool */ 
  bool _match_x2696;
  kk_string_t _x_x4398 = kk_string_dup(d1, _ctx); /*string*/
  _match_x2696 = kk_display_hc__is__valid__date(_x_x4398, _ctx); /*bool*/
  if (_match_x2696) {
    bool _match_x2706;
    kk_string_t _x_x4399 = kk_string_dup(d2, _ctx); /*string*/
    _match_x2706 = kk_display_hc__is__valid__date(_x_x4399, _ctx); /*bool*/
    if (_match_x2706) {
      kk_std_core_types__order _x_x4400;
      kk_std_core_types__order _brw_x2716 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
      kk_string_drop(d1, _ctx);
      kk_string_drop(d2, _ctx);
      _x_x4400 = _brw_x2716; /*order*/
      return kk_std_core_order__lp__eq__eq__rp_(_x_x4400, kk_std_core_types__new_Lt(_ctx), _ctx);
    }
    {
      bool _match_x2707;
      kk_string_t _x_x4401 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2707 = kk_display_hc__is__local__datetime(_x_x4401, _ctx); /*bool*/
      if (_match_x2707) {
        bool _match_x2711;
        kk_string_t _x_x4402 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2711 = kk_display_hc__is__local__datetime(_x_x4402, _ctx); /*bool*/
        if (_match_x2711) {
          kk_std_core_types__order _x_x4403;
          kk_std_core_types__order _brw_x2715 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4403 = _brw_x2715; /*order*/
          return kk_std_core_order__lp__eq__eq__rp_(_x_x4403, kk_std_core_types__new_Lt(_ctx), _ctx);
        }
        {
          bool _match_x2712;
          kk_string_t _x_x4404 = kk_string_dup(d1, _ctx); /*string*/
          _match_x2712 = kk_display_hc__is__valid__time(_x_x4404, _ctx); /*bool*/
          if (_match_x2712) {
            bool _match_x2713;
            kk_string_t _x_x4405 = kk_string_dup(d2, _ctx); /*string*/
            _match_x2713 = kk_display_hc__is__valid__time(_x_x4405, _ctx); /*bool*/
            if (_match_x2713) {
              kk_std_core_types__order _x_x4406;
              kk_std_core_types__order _brw_x2714 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
              kk_string_drop(d1, _ctx);
              kk_string_drop(d2, _ctx);
              _x_x4406 = _brw_x2714; /*order*/
              return kk_std_core_order__lp__eq__eq__rp_(_x_x4406, kk_std_core_types__new_Lt(_ctx), _ctx);
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
        bool _match_x2708;
        kk_string_t _x_x4407 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2708 = kk_display_hc__is__valid__time(_x_x4407, _ctx); /*bool*/
        if (_match_x2708) {
          bool _match_x2709;
          kk_string_t _x_x4408 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2709 = kk_display_hc__is__valid__time(_x_x4408, _ctx); /*bool*/
          if (_match_x2709) {
            kk_std_core_types__order _x_x4409;
            kk_std_core_types__order _brw_x2710 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4409 = _brw_x2710; /*order*/
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
  }
  {
    bool _match_x2697;
    kk_string_t _x_x4410 = kk_string_dup(d1, _ctx); /*string*/
    _match_x2697 = kk_display_hc__is__local__datetime(_x_x4410, _ctx); /*bool*/
    if (_match_x2697) {
      bool _match_x2701;
      kk_string_t _x_x4411 = kk_string_dup(d2, _ctx); /*string*/
      _match_x2701 = kk_display_hc__is__local__datetime(_x_x4411, _ctx); /*bool*/
      if (_match_x2701) {
        kk_std_core_types__order _x_x4412;
        kk_std_core_types__order _brw_x2705 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4412 = _brw_x2705; /*order*/
        return kk_std_core_order__lp__eq__eq__rp_(_x_x4412, kk_std_core_types__new_Lt(_ctx), _ctx);
      }
      {
        bool _match_x2702;
        kk_string_t _x_x4413 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2702 = kk_display_hc__is__valid__time(_x_x4413, _ctx); /*bool*/
        if (_match_x2702) {
          bool _match_x2703;
          kk_string_t _x_x4414 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2703 = kk_display_hc__is__valid__time(_x_x4414, _ctx); /*bool*/
          if (_match_x2703) {
            kk_std_core_types__order _x_x4415;
            kk_std_core_types__order _brw_x2704 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4415 = _brw_x2704; /*order*/
            return kk_std_core_order__lp__eq__eq__rp_(_x_x4415, kk_std_core_types__new_Lt(_ctx), _ctx);
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
      bool _match_x2698;
      kk_string_t _x_x4416 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2698 = kk_display_hc__is__valid__time(_x_x4416, _ctx); /*bool*/
      if (_match_x2698) {
        bool _match_x2699;
        kk_string_t _x_x4417 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2699 = kk_display_hc__is__valid__time(_x_x4417, _ctx); /*bool*/
        if (_match_x2699) {
          kk_std_core_types__order _x_x4418;
          kk_std_core_types__order _brw_x2700 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4418 = _brw_x2700; /*order*/
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
}

kk_std_core_types__either kk_display_hc__offset__to__minutes(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,int> */ 
  bool _match_x2689;
  kk_string_t _x_x4419 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4420;
  kk_define_string_literal(static, _s_x4421, 1, "Z", _ctx)
  _x_x4420 = kk_string_dup(_s_x4421, _ctx); /*string*/
  _match_x2689 = kk_string_is_eq(_x_x4419,_x_x4420,kk_context()); /*bool*/
  if (_match_x2689) {
    kk_string_drop(s, _ctx);
    return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
  }
  {
    bool _match_x2690;
    kk_string_t _x_x4422 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4423;
    kk_define_string_literal(static, _s_x4424, 1, "z", _ctx)
    _x_x4423 = kk_string_dup(_s_x4424, _ctx); /*string*/
    _match_x2690 = kk_string_is_eq(_x_x4422,_x_x4423,kk_context()); /*bool*/
    if (_match_x2690) {
      kk_string_drop(s, _ctx);
      return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
    }
    {
      bool b_10443;
      kk_string_t _x_x4425 = kk_string_dup(s, _ctx); /*string*/
      b_10443 = kk_display_hc__is__valid__offset(_x_x4425, _ctx); /*bool*/
      if (b_10443) {
        kk_integer_t hc__sign_0;
        bool _match_x2695;
        kk_string_t _x_x4426;
        kk_std_core_types__list _x_x4427;
        kk_std_core_types__list _x_x4428;
        kk_std_core_types__list _x_x4429;
        kk_string_t _x_x4430 = kk_string_dup(s, _ctx); /*string*/
        _x_x4429 = kk_std_core_string_list(_x_x4430, _ctx); /*list<char>*/
        _x_x4428 = kk_std_core_list_drop(_x_x4429, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4431 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x4427 = kk_std_core_list_take(_x_x4428, _x_x4431, _ctx); /*list<10001>*/
        _x_x4426 = kk_std_core_string_listchar_fs_string(_x_x4427, _ctx); /*string*/
        kk_string_t _x_x4432;
        kk_define_string_literal(static, _s_x4433, 1, "-", _ctx)
        _x_x4432 = kk_string_dup(_s_x4433, _ctx); /*string*/
        _match_x2695 = kk_string_is_eq(_x_x4426,_x_x4432,kk_context()); /*bool*/
        if (_match_x2695) {
          hc__sign_0 = kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx); /*int*/
        }
        else {
          hc__sign_0 = kk_integer_from_small(1); /*int*/
        }
        kk_string_t s_0_10448;
        kk_std_core_types__list _x_x4434;
        kk_std_core_types__list _x_x4435;
        kk_std_core_types__list _x_x4436;
        kk_string_t _x_x4437 = kk_string_dup(s, _ctx); /*string*/
        _x_x4436 = kk_std_core_string_list(_x_x4437, _ctx); /*list<char>*/
        _x_x4435 = kk_std_core_list_drop(_x_x4436, kk_integer_from_small(1), _ctx); /*list<10001>*/
        kk_integer_t _x_x4438 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
        _x_x4434 = kk_std_core_list_take(_x_x4435, _x_x4438, _ctx); /*list<10001>*/
        s_0_10448 = kk_std_core_string_listchar_fs_string(_x_x4434, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2691;
        bool _x_x4439;
        kk_std_core_types__optional _match_x2694 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2694, _ctx)) {
          kk_box_t _box_x358 = _match_x2694._cons._Optional.value;
          bool _uniq_hex_581 = kk_bool_unbox(_box_x358);
          kk_std_core_types__optional_drop(_match_x2694, _ctx);
          _x_x4439 = _uniq_hex_581; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2694, _ctx);
          _x_x4439 = false; /*bool*/
        }
        _match_x2691 = kk_std_core_int_xparse(s_0_10448, _x_x4439, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2691, _ctx)) {
          kk_box_t _box_x359 = _match_x2691._cons.Just.value;
          kk_integer_t h = kk_integer_unbox(_box_x359, _ctx);
          kk_integer_dup(h, _ctx);
          kk_std_core_types__maybe_drop(_match_x2691, _ctx);
          kk_string_t s_1_10452;
          kk_std_core_types__list _x_x4440;
          kk_std_core_types__list _x_x4441;
          kk_std_core_types__list _x_x4442 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4441 = kk_std_core_list_drop(_x_x4442, kk_integer_from_small(4), _ctx); /*list<10001>*/
          kk_integer_t _x_x4443 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
          _x_x4440 = kk_std_core_list_take(_x_x4441, _x_x4443, _ctx); /*list<10001>*/
          s_1_10452 = kk_std_core_string_listchar_fs_string(_x_x4440, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2692;
          bool _x_x4444;
          kk_std_core_types__optional _match_x2693 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2693, _ctx)) {
            kk_box_t _box_x360 = _match_x2693._cons._Optional.value;
            bool _uniq_hex_581_0 = kk_bool_unbox(_box_x360);
            kk_std_core_types__optional_drop(_match_x2693, _ctx);
            _x_x4444 = _uniq_hex_581_0; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2693, _ctx);
            _x_x4444 = false; /*bool*/
          }
          _match_x2692 = kk_std_core_int_xparse(s_1_10452, _x_x4444, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2692, _ctx)) {
            kk_box_t _box_x361 = _match_x2692._cons.Just.value;
            kk_integer_t m = kk_integer_unbox(_box_x361, _ctx);
            kk_integer_dup(m, _ctx);
            kk_std_core_types__maybe_drop(_match_x2692, _ctx);
            kk_integer_t x_3_10456 = kk_integer_mul(h,(kk_integer_from_small(60)),kk_context()); /*int*/;
            kk_integer_t _b_x362_368;
            kk_integer_t _x_x4445 = kk_integer_add(x_3_10456,m,kk_context()); /*int*/
            _b_x362_368 = kk_integer_mul(hc__sign_0,_x_x4445,kk_context()); /*int*/
            return kk_std_core_types__new_Right(kk_integer_box(_b_x362_368, _ctx), _ctx);
          }
          {
            kk_integer_drop(hc__sign_0, _ctx);
            kk_integer_drop(h, _ctx);
            kk_box_t _x_x4446;
            kk_string_t _x_x4447;
            kk_define_string_literal(static, _s_x4448, 22, "invalid offset minutes", _ctx)
            _x_x4447 = kk_string_dup(_s_x4448, _ctx); /*string*/
            _x_x4446 = kk_string_box(_x_x4447); /*10014*/
            return kk_std_core_types__new_Left(_x_x4446, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(hc__sign_0, _ctx);
          kk_box_t _x_x4449;
          kk_string_t _x_x4450;
          kk_define_string_literal(static, _s_x4451, 20, "invalid offset hours", _ctx)
          _x_x4450 = kk_string_dup(_s_x4451, _ctx); /*string*/
          _x_x4449 = kk_string_box(_x_x4450); /*10014*/
          return kk_std_core_types__new_Left(_x_x4449, _ctx);
        }
      }
      {
        kk_string_t _b_x365_371;
        kk_string_t _x_x4452;
        kk_define_string_literal(static, _s_x4453, 16, "invalid offset: ", _ctx)
        _x_x4452 = kk_string_dup(_s_x4453, _ctx); /*string*/
        _b_x365_371 = kk_std_core_types__lp__plus__plus__rp_(_x_x4452, s, _ctx); /*string*/
        return kk_std_core_types__new_Left(kk_string_box(_b_x365_371), _ctx);
      }
    }
  }
}

kk_integer_t kk_display_hc__list__int__nth(kk_std_core_types__list xs, kk_integer_t i, kk_context_t* _ctx) { /* (xs : list<int>, i : int) -> div int */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(i, _ctx);
    return kk_integer_from_small(0);
  }
  {
    struct kk_std_core_types_Cons* _con_x4454 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x372 = _con_x4454->head;
    kk_std_core_types__list rest = _con_x4454->tail;
    kk_integer_t x = kk_integer_unbox(_box_x372, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_integer_dup(x, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool _match_x2688 = kk_integer_eq_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2688) {
      kk_std_core_types__list_drop(rest, _ctx);
      kk_integer_drop(i, _ctx);
      return x;
    }
    {
      kk_integer_drop(x, _ctx);
      { // tailcall
        kk_integer_t _x_x4455 = kk_integer_add_small_const(i, -1, _ctx); /*int*/
        xs = rest;
        i = _x_x4455;
        goto kk__tailcall;
      }
    }
  }
}

kk_std_core_types__either kk_display_hc__day__of__week(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> div either<string,string> */ 
  bool b_10460;
  kk_string_t _x_x4456 = kk_string_dup(s, _ctx); /*string*/
  b_10460 = kk_display_hc__is__valid__date(_x_x4456, _ctx); /*bool*/
  if (b_10460) {
    kk_std_core_types__either _match_x2684 = kk_display_hc__date__parts(s, _ctx); /*either<string,(int, int, int)>*/;
    if (kk_std_core_types__is_Left(_match_x2684, _ctx)) {
      kk_box_t _box_x373 = _match_x2684._cons.Left.left;
      kk_string_t e = kk_string_unbox(_box_x373);
      kk_string_dup(e, _ctx);
      kk_std_core_types__either_drop(_match_x2684, _ctx);
      return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
    }
    {
      kk_box_t _box_x375 = _match_x2684._cons.Right.right;
      kk_std_core_types__tuple3 parts = kk_std_core_types__tuple3_unbox(_box_x375, KK_BORROWED, _ctx);
      kk_std_core_types__tuple3_dup(parts, _ctx);
      kk_std_core_types__either_drop(_match_x2684, _ctx);
      kk_integer_t y_0;
      bool _match_x2685;
      kk_integer_t _brw_x2686;
      {
        kk_box_t _box_x376 = parts.fst;
        kk_box_t _box_x377 = parts.snd;
        kk_box_t _box_x378 = parts.thd;
        kk_integer_t _x = kk_integer_unbox(_box_x377, _ctx);
        kk_integer_dup(_x, _ctx);
        _brw_x2686 = _x; /*int*/
      }
      bool _brw_x2687 = kk_integer_lt_borrow(_brw_x2686,(kk_integer_from_small(3)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2686, _ctx);
      _match_x2685 = _brw_x2687; /*bool*/
      if (_match_x2685) {
        kk_integer_t _x_x4457;
        {
          kk_box_t _box_x379 = parts.fst;
          kk_box_t _box_x380 = parts.snd;
          kk_box_t _box_x381 = parts.thd;
          kk_integer_t _x_0 = kk_integer_unbox(_box_x379, _ctx);
          kk_integer_dup(_x_0, _ctx);
          _x_x4457 = _x_0; /*int*/
        }
        y_0 = kk_integer_add_small_const(_x_x4457, -1, _ctx); /*int*/
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
      kk_integer_t _x_x4458 = kk_integer_dup(y_0, _ctx); /*int*/
      y_5_10475 = kk_integer_div(_x_x4458,(kk_integer_from_small(4)),kk_context()); /*int*/
      kk_integer_t x_3_10472;
      kk_integer_t _x_x4459 = kk_integer_dup(y_0, _ctx); /*int*/
      x_3_10472 = kk_integer_add(_x_x4459,y_5_10475,kk_context()); /*int*/
      kk_integer_t y_4_10473;
      kk_integer_t _x_x4460 = kk_integer_dup(y_0, _ctx); /*int*/
      y_4_10473 = kk_integer_div(_x_x4460,(kk_integer_from_small(100)),kk_context()); /*int*/
      kk_integer_t x_2_10470 = kk_integer_sub(x_3_10472,y_4_10473,kk_context()); /*int*/;
      kk_integer_t y_3_10471 = kk_integer_div(y_0,(kk_integer_from_small(400)),kk_context()); /*int*/;
      kk_integer_t x_1_10468 = kk_integer_add(x_2_10470,y_3_10471,kk_context()); /*int*/;
      kk_integer_t y_2_10469;
      kk_std_core_types__list _x_x4461;
      kk_std_core_types__list _x_x4462;
      kk_std_core_types__list _x_x4463;
      kk_std_core_types__list _x_x4464;
      kk_std_core_types__list _x_x4465;
      kk_std_core_types__list _x_x4466;
      kk_std_core_types__list _x_x4467;
      kk_std_core_types__list _x_x4468;
      kk_std_core_types__list _x_x4469;
      kk_std_core_types__list _x_x4470;
      kk_std_core_types__list _x_x4471;
      kk_std_core_types__list _x_x4472 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      _x_x4471 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4472, _ctx); /*list<10021>*/
      _x_x4470 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(6), _ctx), _x_x4471, _ctx); /*list<10021>*/
      _x_x4469 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), _x_x4470, _ctx); /*list<10021>*/
      _x_x4468 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(1), _ctx), _x_x4469, _ctx); /*list<10021>*/
      _x_x4467 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4468, _ctx); /*list<10021>*/
      _x_x4466 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4467, _ctx); /*list<10021>*/
      _x_x4465 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4466, _ctx); /*list<10021>*/
      _x_x4464 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4465, _ctx); /*list<10021>*/
      _x_x4463 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4464, _ctx); /*list<10021>*/
      _x_x4462 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4463, _ctx); /*list<10021>*/
      _x_x4461 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4462, _ctx); /*list<10021>*/
      kk_integer_t _x_x4473;
      kk_integer_t _x_x4474;
      {
        kk_box_t _box_x409 = parts.fst;
        kk_box_t _box_x410 = parts.snd;
        kk_box_t _box_x411 = parts.thd;
        kk_integer_t _x_2 = kk_integer_unbox(_box_x410, _ctx);
        kk_integer_dup(_x_2, _ctx);
        _x_x4474 = _x_2; /*int*/
      }
      _x_x4473 = kk_integer_add_small_const(_x_x4474, -1, _ctx); /*int*/
      y_2_10469 = kk_display_hc__list__int__nth(_x_x4461, _x_x4473, _ctx); /*int*/
      kk_integer_t x_0_10466 = kk_integer_add(x_1_10468,y_2_10469,kk_context()); /*int*/;
      kk_integer_t idx;
      kk_integer_t _x_x4475;
      kk_integer_t _x_x4476;
      {
        kk_box_t _box_x436 = parts.fst;
        kk_box_t _box_x437 = parts.snd;
        kk_box_t _box_x438 = parts.thd;
        kk_integer_t _x_3 = kk_integer_unbox(_box_x438, _ctx);
        kk_integer_dup(_x_3, _ctx);
        kk_std_core_types__tuple3_drop(parts, _ctx);
        _x_x4476 = _x_3; /*int*/
      }
      _x_x4475 = kk_integer_add(x_0_10466,_x_x4476,kk_context()); /*int*/
      idx = kk_integer_mod(_x_x4475,(kk_integer_from_small(7)),kk_context()); /*int*/
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(0), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4477;
        kk_string_t _x_x4478;
        kk_define_string_literal(static, _s_x4479, 6, "sunday", _ctx)
        _x_x4478 = kk_string_dup(_s_x4479, _ctx); /*string*/
        _x_x4477 = kk_string_box(_x_x4478); /*10015*/
        return kk_std_core_types__new_Right(_x_x4477, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(1), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4480;
        kk_string_t _x_x4481;
        kk_define_string_literal(static, _s_x4482, 6, "monday", _ctx)
        _x_x4481 = kk_string_dup(_s_x4482, _ctx); /*string*/
        _x_x4480 = kk_string_box(_x_x4481); /*10015*/
        return kk_std_core_types__new_Right(_x_x4480, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(2), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4483;
        kk_string_t _x_x4484;
        kk_define_string_literal(static, _s_x4485, 7, "tuesday", _ctx)
        _x_x4484 = kk_string_dup(_s_x4485, _ctx); /*string*/
        _x_x4483 = kk_string_box(_x_x4484); /*10015*/
        return kk_std_core_types__new_Right(_x_x4483, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(3), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4486;
        kk_string_t _x_x4487;
        kk_define_string_literal(static, _s_x4488, 9, "wednesday", _ctx)
        _x_x4487 = kk_string_dup(_s_x4488, _ctx); /*string*/
        _x_x4486 = kk_string_box(_x_x4487); /*10015*/
        return kk_std_core_types__new_Right(_x_x4486, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(4), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4489;
        kk_string_t _x_x4490;
        kk_define_string_literal(static, _s_x4491, 8, "thursday", _ctx)
        _x_x4490 = kk_string_dup(_s_x4491, _ctx); /*string*/
        _x_x4489 = kk_string_box(_x_x4490); /*10015*/
        return kk_std_core_types__new_Right(_x_x4489, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(5), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4492;
        kk_string_t _x_x4493;
        kk_define_string_literal(static, _s_x4494, 6, "friday", _ctx)
        _x_x4493 = kk_string_dup(_s_x4494, _ctx); /*string*/
        _x_x4492 = kk_string_box(_x_x4493); /*10015*/
        return kk_std_core_types__new_Right(_x_x4492, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(6), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4495;
        kk_string_t _x_x4496;
        kk_define_string_literal(static, _s_x4497, 8, "saturday", _ctx)
        _x_x4496 = kk_string_dup(_s_x4497, _ctx); /*string*/
        _x_x4495 = kk_string_box(_x_x4496); /*10015*/
        return kk_std_core_types__new_Right(_x_x4495, _ctx);
      }
      {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4498;
        kk_string_t _x_x4499;
        kk_define_string_literal(static, _s_x4500, 11, "unreachable", _ctx)
        _x_x4499 = kk_string_dup(_s_x4500, _ctx); /*string*/
        _x_x4498 = kk_string_box(_x_x4499); /*10014*/
        return kk_std_core_types__new_Left(_x_x4498, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x447_457;
    kk_string_t _x_x4501;
    kk_define_string_literal(static, _s_x4502, 14, "invalid date: ", _ctx)
    _x_x4501 = kk_string_dup(_s_x4502, _ctx); /*string*/
    _b_x447_457 = kk_std_core_types__lp__plus__plus__rp_(_x_x4501, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x447_457), _ctx);
  }
}

kk_display__clispec kk_display_hc__with__flags(kk_display__clispec spec, kk_std_core_types__list flags, kk_context_t* _ctx) { /* (spec : clispec, flags : list<cliflag>) -> clispec */ 
  kk_string_t _x_x4503;
  {
    struct kk_display_Clispec* _con_x4504 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4504->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4503 = _x; /*string*/
  }
  kk_string_t _x_x4505;
  {
    struct kk_display_Clispec* _con_x4506 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4506->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4505 = _x_0; /*string*/
  }
  kk_string_t _x_x4507;
  {
    struct kk_display_Clispec* _con_x4508 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4508->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4507 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4509;
  {
    struct kk_display_Clispec* _con_x4510 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4510->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4509 = _x_2; /*list<display/clioption>*/
  }
  kk_std_core_types__list _x_x4511;
  {
    struct kk_display_Clispec* _con_x4512 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4512->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4511 = _x_3; /*list<display/cliarg>*/
  }
  kk_std_core_types__list _x_x4513;
  {
    struct kk_display_Clispec* _con_x4514 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4514->app__name;
    kk_string_t _pat_1_4 = _con_x4514->app__version;
    kk_string_t _pat_2_4 = _con_x4514->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4514->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4514->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4514->app__args;
    kk_std_core_types__list _x_4 = _con_x4514->app__commands;
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
    _x_x4513 = _x_4; /*list<(string, display/clispec)>*/
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x4503, _x_x4505, _x_x4507, flags, _x_x4509, _x_x4511, _x_x4513, _ctx);
}

kk_display__clispec kk_display_hc__with__options(kk_display__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<clioption>) -> clispec */ 
  kk_string_t _x_x4515;
  {
    struct kk_display_Clispec* _con_x4516 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4516->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4515 = _x; /*string*/
  }
  kk_string_t _x_x4517;
  {
    struct kk_display_Clispec* _con_x4518 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4518->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4517 = _x_0; /*string*/
  }
  kk_string_t _x_x4519;
  {
    struct kk_display_Clispec* _con_x4520 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4520->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4519 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4521;
  {
    struct kk_display_Clispec* _con_x4522 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4522->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4521 = _x_2; /*list<display/cliflag>*/
  }
  kk_std_core_types__list _x_x4523;
  {
    struct kk_display_Clispec* _con_x4524 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4524->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4523 = _x_3; /*list<display/cliarg>*/
  }
  kk_std_core_types__list _x_x4525;
  {
    struct kk_display_Clispec* _con_x4526 = kk_display__as_Clispec(spec, _ctx);
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
    _x_x4525 = _x_4; /*list<(string, display/clispec)>*/
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x4515, _x_x4517, _x_x4519, _x_x4521, options, _x_x4523, _x_x4525, _ctx);
}

kk_display__clispec kk_display_hc__with__args(kk_display__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<cliarg>) -> clispec */ 
  kk_string_t _x_x4527;
  {
    struct kk_display_Clispec* _con_x4528 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4528->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4527 = _x; /*string*/
  }
  kk_string_t _x_x4529;
  {
    struct kk_display_Clispec* _con_x4530 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4530->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4529 = _x_0; /*string*/
  }
  kk_string_t _x_x4531;
  {
    struct kk_display_Clispec* _con_x4532 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4532->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4531 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4533;
  {
    struct kk_display_Clispec* _con_x4534 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4534->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4533 = _x_2; /*list<display/cliflag>*/
  }
  kk_std_core_types__list _x_x4535;
  {
    struct kk_display_Clispec* _con_x4536 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4536->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4535 = _x_3; /*list<display/clioption>*/
  }
  kk_std_core_types__list _x_x4537;
  {
    struct kk_display_Clispec* _con_x4538 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4538->app__name;
    kk_string_t _pat_1_4 = _con_x4538->app__version;
    kk_string_t _pat_2_4 = _con_x4538->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4538->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4538->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4538->app__args;
    kk_std_core_types__list _x_4 = _con_x4538->app__commands;
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
    _x_x4537 = _x_4; /*list<(string, display/clispec)>*/
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x4527, _x_x4529, _x_x4531, _x_x4533, _x_x4535, args, _x_x4537, _ctx);
}

kk_display__clispec kk_display_hc__with__commands(kk_display__clispec spec, kk_std_core_types__list commands, kk_context_t* _ctx) { /* (spec : clispec, commands : list<(string, clispec)>) -> clispec */ 
  kk_string_t _x_x4539;
  {
    struct kk_display_Clispec* _con_x4540 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4540->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4539 = _x; /*string*/
  }
  kk_string_t _x_x4541;
  {
    struct kk_display_Clispec* _con_x4542 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4542->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4541 = _x_0; /*string*/
  }
  kk_string_t _x_x4543;
  {
    struct kk_display_Clispec* _con_x4544 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4544->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4543 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4545;
  {
    struct kk_display_Clispec* _con_x4546 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4546->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4545 = _x_2; /*list<display/cliflag>*/
  }
  kk_std_core_types__list _x_x4547;
  {
    struct kk_display_Clispec* _con_x4548 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4548->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4547 = _x_3; /*list<display/clioption>*/
  }
  kk_std_core_types__list _x_x4549;
  {
    struct kk_display_Clispec* _con_x4550 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4550->app__name;
    kk_string_t _pat_1_4 = _con_x4550->app__version;
    kk_string_t _pat_2_4 = _con_x4550->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4550->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4550->app__options;
    kk_std_core_types__list _x_4 = _con_x4550->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4550->app__commands;
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
    _x_x4549 = _x_4; /*list<display/cliarg>*/
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x4539, _x_x4541, _x_x4543, _x_x4545, _x_x4547, _x_x4549, commands, _ctx);
}

kk_display__clispec kk_display_hc__flag(kk_display__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list flags_10505;
  kk_std_core_types__list _x_x4551;
  {
    struct kk_display_Clispec* _con_x4552 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4552->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4551 = _x_5; /*list<display/cliflag>*/
  }
  kk_std_core_types__list _x_x4553;
  kk_box_t _x_x4554;
  kk_display__cliflag _x_x4555 = kk_display__new_Cliflag(kk_reuse_null, 0, name, kkloc_short, help__text, _ctx); /*display/cliflag*/
  _x_x4554 = kk_display__cliflag_box(_x_x4555, _ctx); /*10021*/
  _x_x4553 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4554, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  flags_10505 = kk_std_core_list_append(_x_x4551, _x_x4553, _ctx); /*list<display/cliflag>*/
  kk_string_t _x_x4556;
  {
    struct kk_display_Clispec* _con_x4557 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4557->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4556 = _x; /*string*/
  }
  kk_string_t _x_x4558;
  {
    struct kk_display_Clispec* _con_x4559 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4559->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4558 = _x_0; /*string*/
  }
  kk_string_t _x_x4560;
  {
    struct kk_display_Clispec* _con_x4561 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4561->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4560 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4562;
  {
    struct kk_display_Clispec* _con_x4563 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4563->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4562 = _x_2; /*list<display/clioption>*/
  }
  kk_std_core_types__list _x_x4564;
  {
    struct kk_display_Clispec* _con_x4565 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4565->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4564 = _x_3; /*list<display/cliarg>*/
  }
  kk_std_core_types__list _x_x4566;
  {
    struct kk_display_Clispec* _con_x4567 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4567->app__name;
    kk_string_t _pat_1_4 = _con_x4567->app__version;
    kk_string_t _pat_2_4 = _con_x4567->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4567->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4567->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4567->app__args;
    kk_std_core_types__list _x_4 = _con_x4567->app__commands;
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
    _x_x4566 = _x_4; /*list<(string, display/clispec)>*/
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x4556, _x_x4558, _x_x4560, flags_10505, _x_x4562, _x_x4564, _x_x4566, _ctx);
}

kk_display__clispec kk_display_hc__option(kk_display__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list options_10516;
  kk_std_core_types__list _x_x4568;
  {
    struct kk_display_Clispec* _con_x4569 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4569->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4568 = _x_5; /*list<display/clioption>*/
  }
  kk_std_core_types__list _x_x4570;
  kk_box_t _x_x4571;
  kk_display__clioption _x_x4572;
  kk_string_t _x_x4573 = kk_string_empty(); /*string*/
  _x_x4572 = kk_display__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, _x_x4573, _ctx); /*display/clioption*/
  _x_x4571 = kk_display__clioption_box(_x_x4572, _ctx); /*10021*/
  _x_x4570 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4571, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10516 = kk_std_core_list_append(_x_x4568, _x_x4570, _ctx); /*list<display/clioption>*/
  kk_string_t _x_x4575;
  {
    struct kk_display_Clispec* _con_x4576 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4576->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4575 = _x; /*string*/
  }
  kk_string_t _x_x4577;
  {
    struct kk_display_Clispec* _con_x4578 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4578->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4577 = _x_0; /*string*/
  }
  kk_string_t _x_x4579;
  {
    struct kk_display_Clispec* _con_x4580 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4580->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4579 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4581;
  {
    struct kk_display_Clispec* _con_x4582 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4582->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4581 = _x_2; /*list<display/cliflag>*/
  }
  kk_std_core_types__list _x_x4583;
  {
    struct kk_display_Clispec* _con_x4584 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4584->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4583 = _x_3; /*list<display/cliarg>*/
  }
  kk_std_core_types__list _x_x4585;
  {
    struct kk_display_Clispec* _con_x4586 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4586->app__name;
    kk_string_t _pat_1_4 = _con_x4586->app__version;
    kk_string_t _pat_2_4 = _con_x4586->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4586->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4586->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4586->app__args;
    kk_std_core_types__list _x_4 = _con_x4586->app__commands;
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
    _x_x4585 = _x_4; /*list<(string, display/clispec)>*/
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x4575, _x_x4577, _x_x4579, _x_x4581, options_10516, _x_x4583, _x_x4585, _ctx);
}

kk_display__clispec kk_display_hc__option__default(kk_display__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string, default : string) -> clispec */ 
  kk_std_core_types__list options_10527;
  kk_std_core_types__list _x_x4587;
  {
    struct kk_display_Clispec* _con_x4588 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4588->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4587 = _x_5; /*list<display/clioption>*/
  }
  kk_std_core_types__list _x_x4589;
  kk_box_t _x_x4590;
  kk_display__clioption _x_x4591 = kk_display__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, kkloc_default, _ctx); /*display/clioption*/
  _x_x4590 = kk_display__clioption_box(_x_x4591, _ctx); /*10021*/
  _x_x4589 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4590, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10527 = kk_std_core_list_append(_x_x4587, _x_x4589, _ctx); /*list<display/clioption>*/
  kk_string_t _x_x4592;
  {
    struct kk_display_Clispec* _con_x4593 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4593->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4592 = _x; /*string*/
  }
  kk_string_t _x_x4594;
  {
    struct kk_display_Clispec* _con_x4595 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4595->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4594 = _x_0; /*string*/
  }
  kk_string_t _x_x4596;
  {
    struct kk_display_Clispec* _con_x4597 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4597->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4596 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4598;
  {
    struct kk_display_Clispec* _con_x4599 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4599->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4598 = _x_2; /*list<display/cliflag>*/
  }
  kk_std_core_types__list _x_x4600;
  {
    struct kk_display_Clispec* _con_x4601 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4601->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4600 = _x_3; /*list<display/cliarg>*/
  }
  kk_std_core_types__list _x_x4602;
  {
    struct kk_display_Clispec* _con_x4603 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4603->app__name;
    kk_string_t _pat_1_4 = _con_x4603->app__version;
    kk_string_t _pat_2_4 = _con_x4603->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4603->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4603->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4603->app__args;
    kk_std_core_types__list _x_4 = _con_x4603->app__commands;
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
    _x_x4602 = _x_4; /*list<(string, display/clispec)>*/
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x4592, _x_x4594, _x_x4596, _x_x4598, options_10527, _x_x4600, _x_x4602, _ctx);
}

kk_display__clispec kk_display_hc__arg(kk_display__clispec spec, kk_string_t name, kk_string_t help__text, bool required, kk_context_t* _ctx) { /* (spec : clispec, name : string, help_text : string, required : bool) -> clispec */ 
  kk_std_core_types__list args_10538;
  kk_std_core_types__list _x_x4604;
  {
    struct kk_display_Clispec* _con_x4605 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4605->app__args;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4604 = _x_5; /*list<display/cliarg>*/
  }
  kk_std_core_types__list _x_x4606;
  kk_box_t _x_x4607;
  kk_display__cliarg _x_x4608 = kk_display__new_Cliarg(kk_reuse_null, 0, name, help__text, required, _ctx); /*display/cliarg*/
  _x_x4607 = kk_display__cliarg_box(_x_x4608, _ctx); /*10021*/
  _x_x4606 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4607, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  args_10538 = kk_std_core_list_append(_x_x4604, _x_x4606, _ctx); /*list<display/cliarg>*/
  kk_string_t _x_x4609;
  {
    struct kk_display_Clispec* _con_x4610 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4610->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4609 = _x; /*string*/
  }
  kk_string_t _x_x4611;
  {
    struct kk_display_Clispec* _con_x4612 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4612->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4611 = _x_0; /*string*/
  }
  kk_string_t _x_x4613;
  {
    struct kk_display_Clispec* _con_x4614 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4614->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4613 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4615;
  {
    struct kk_display_Clispec* _con_x4616 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4616->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4615 = _x_2; /*list<display/cliflag>*/
  }
  kk_std_core_types__list _x_x4617;
  {
    struct kk_display_Clispec* _con_x4618 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4618->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4617 = _x_3; /*list<display/clioption>*/
  }
  kk_std_core_types__list _x_x4619;
  {
    struct kk_display_Clispec* _con_x4620 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4620->app__name;
    kk_string_t _pat_1_4 = _con_x4620->app__version;
    kk_string_t _pat_2_4 = _con_x4620->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4620->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4620->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4620->app__args;
    kk_std_core_types__list _x_4 = _con_x4620->app__commands;
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
    _x_x4619 = _x_4; /*list<(string, display/clispec)>*/
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x4609, _x_x4611, _x_x4613, _x_x4615, _x_x4617, args_10538, _x_x4619, _ctx);
}

kk_display__clispec kk_display_hc__command(kk_display__clispec spec, kk_string_t name, kk_display__clispec hc__sub_0, kk_context_t* _ctx) { /* (spec : clispec, name : string, hc_sub : clispec) -> clispec */ 
  kk_std_core_types__list commands_10549;
  kk_std_core_types__list _x_x4621;
  {
    struct kk_display_Clispec* _con_x4622 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4622->app__commands;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4621 = _x_5; /*list<(string, display/clispec)>*/
  }
  kk_std_core_types__list _x_x4623;
  kk_box_t _x_x4624;
  kk_std_core_types__tuple2 _x_x4625 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_display__clispec_box(hc__sub_0, _ctx), _ctx); /*(10037, 10038)*/
  _x_x4624 = kk_std_core_types__tuple2_box(_x_x4625, _ctx); /*10021*/
  _x_x4623 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4624, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  commands_10549 = kk_std_core_list_append(_x_x4621, _x_x4623, _ctx); /*list<(string, display/clispec)>*/
  kk_string_t _x_x4626;
  {
    struct kk_display_Clispec* _con_x4627 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4627->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4626 = _x; /*string*/
  }
  kk_string_t _x_x4628;
  {
    struct kk_display_Clispec* _con_x4629 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4629->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4628 = _x_0; /*string*/
  }
  kk_string_t _x_x4630;
  {
    struct kk_display_Clispec* _con_x4631 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4631->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4630 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4632;
  {
    struct kk_display_Clispec* _con_x4633 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4633->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4632 = _x_2; /*list<display/cliflag>*/
  }
  kk_std_core_types__list _x_x4634;
  {
    struct kk_display_Clispec* _con_x4635 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4635->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4634 = _x_3; /*list<display/clioption>*/
  }
  kk_std_core_types__list _x_x4636;
  {
    struct kk_display_Clispec* _con_x4637 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4637->app__name;
    kk_string_t _pat_1_4 = _con_x4637->app__version;
    kk_string_t _pat_2_4 = _con_x4637->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4637->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4637->app__options;
    kk_std_core_types__list _x_4 = _con_x4637->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4637->app__commands;
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
    _x_x4636 = _x_4; /*list<display/cliarg>*/
  }
  return kk_display__new_Clispec(kk_reuse_null, 0, _x_x4626, _x_x4628, _x_x4630, _x_x4632, _x_x4634, _x_x4636, commands_10549, _ctx);
}

kk_string_t kk_display_hc__format__flag__usage(kk_display__cliflag f, kk_context_t* _ctx) { /* (f : cliflag) -> div string */ 
  bool _match_x2679;
  kk_integer_t _brw_x2682;
  kk_string_t _x_x4638;
  {
    struct kk_display_Cliflag* _con_x4639 = kk_display__as_Cliflag(f, _ctx);
    kk_string_t _x = _con_x4639->flag__short;
    kk_string_dup(_x, _ctx);
    _x_x4638 = _x; /*string*/
  }
  _brw_x2682 = kk_std_core_string_chars_fs_count(_x_x4638, _ctx); /*int*/
  bool _brw_x2683 = kk_integer_eq_borrow(_brw_x2682,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2682, _ctx);
  _match_x2679 = _brw_x2683; /*bool*/
  if (_match_x2679) {
    kk_string_t s_0_10561;
    kk_string_t _x_x4640;
    kk_define_string_literal(static, _s_x4641, 6, "    --", _ctx)
    _x_x4640 = kk_string_dup(_s_x4641, _ctx); /*string*/
    kk_string_t _x_x4642;
    {
      struct kk_display_Cliflag* _con_x4643 = kk_display__as_Cliflag(f, _ctx);
      kk_string_t _x_0 = _con_x4643->flag__name;
      kk_string_dup(_x_0, _ctx);
      _x_x4642 = _x_0; /*string*/
    }
    s_0_10561 = kk_std_core_types__lp__plus__plus__rp_(_x_x4640, _x_x4642, _ctx); /*string*/
    kk_integer_t y_10568;
    kk_string_t _x_x4644 = kk_string_dup(s_0_10561, _ctx); /*string*/
    y_10568 = kk_std_core_string_chars_fs_count(_x_x4644, _ctx); /*int*/
    kk_integer_t b_10566 = kk_integer_sub((kk_integer_from_small(24)),y_10568,kk_context()); /*int*/;
    kk_string_t _x_x4645;
    kk_string_t _x_x4646;
    kk_string_t _x_x4647;
    kk_define_string_literal(static, _s_x4648, 1, " ", _ctx)
    _x_x4647 = kk_string_dup(_s_x4648, _ctx); /*string*/
    kk_integer_t _x_x4649;
    bool _match_x2681 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10566,kk_context()); /*bool*/;
    if (_match_x2681) {
      kk_integer_drop(b_10566, _ctx);
      _x_x4649 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4649 = b_10566; /*int*/
    }
    _x_x4646 = kk_display_hc__repeat__str(_x_x4647, _x_x4649, _ctx); /*string*/
    _x_x4645 = kk_std_core_types__lp__plus__plus__rp_(s_0_10561, _x_x4646, _ctx); /*string*/
    kk_string_t _x_x4650;
    {
      struct kk_display_Cliflag* _con_x4651 = kk_display__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_2 = _con_x4651->flag__name;
      kk_string_t _pat_1_1 = _con_x4651->flag__short;
      kk_string_t _x_1 = _con_x4651->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_1, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4650 = _x_1; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4645, _x_x4650, _ctx);
  }
  {
    kk_string_t s_1_10570;
    kk_string_t _x_x4652;
    kk_define_string_literal(static, _s_x4653, 3, "  -", _ctx)
    _x_x4652 = kk_string_dup(_s_x4653, _ctx); /*string*/
    kk_string_t _x_x4654;
    kk_string_t _x_x4655;
    {
      struct kk_display_Cliflag* _con_x4656 = kk_display__as_Cliflag(f, _ctx);
      kk_string_t _x_2 = _con_x4656->flag__short;
      kk_string_dup(_x_2, _ctx);
      _x_x4655 = _x_2; /*string*/
    }
    kk_string_t _x_x4657;
    kk_string_t _x_x4658;
    kk_define_string_literal(static, _s_x4659, 4, ", --", _ctx)
    _x_x4658 = kk_string_dup(_s_x4659, _ctx); /*string*/
    kk_string_t _x_x4660;
    {
      struct kk_display_Cliflag* _con_x4661 = kk_display__as_Cliflag(f, _ctx);
      kk_string_t _x_3 = _con_x4661->flag__name;
      kk_string_dup(_x_3, _ctx);
      _x_x4660 = _x_3; /*string*/
    }
    _x_x4657 = kk_std_core_types__lp__plus__plus__rp_(_x_x4658, _x_x4660, _ctx); /*string*/
    _x_x4654 = kk_std_core_types__lp__plus__plus__rp_(_x_x4655, _x_x4657, _ctx); /*string*/
    s_1_10570 = kk_std_core_types__lp__plus__plus__rp_(_x_x4652, _x_x4654, _ctx); /*string*/
    kk_integer_t y_0_10578;
    kk_string_t _x_x4662 = kk_string_dup(s_1_10570, _ctx); /*string*/
    y_0_10578 = kk_std_core_string_chars_fs_count(_x_x4662, _ctx); /*int*/
    kk_integer_t b_0_10576 = kk_integer_sub((kk_integer_from_small(24)),y_0_10578,kk_context()); /*int*/;
    kk_string_t _x_x4663;
    kk_string_t _x_x4664;
    kk_string_t _x_x4665;
    kk_define_string_literal(static, _s_x4666, 1, " ", _ctx)
    _x_x4665 = kk_string_dup(_s_x4666, _ctx); /*string*/
    kk_integer_t _x_x4667;
    bool _match_x2680 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10576,kk_context()); /*bool*/;
    if (_match_x2680) {
      kk_integer_drop(b_0_10576, _ctx);
      _x_x4667 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4667 = b_0_10576; /*int*/
    }
    _x_x4664 = kk_display_hc__repeat__str(_x_x4665, _x_x4667, _ctx); /*string*/
    _x_x4663 = kk_std_core_types__lp__plus__plus__rp_(s_1_10570, _x_x4664, _ctx); /*string*/
    kk_string_t _x_x4668;
    {
      struct kk_display_Cliflag* _con_x4669 = kk_display__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_7 = _con_x4669->flag__name;
      kk_string_t _pat_1_4 = _con_x4669->flag__short;
      kk_string_t _x_4 = _con_x4669->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_4, _ctx);
        kk_string_drop(_pat_0_7, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_4, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4668 = _x_4; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4663, _x_x4668, _ctx);
  }
}

kk_string_t kk_display_hc__format__option__usage(kk_display__clioption o, kk_context_t* _ctx) { /* (o : clioption) -> div string */ 
  kk_string_t suffix;
  bool _match_x2676;
  kk_integer_t _brw_x2677;
  kk_string_t _x_x4670;
  {
    struct kk_display_Clioption* _con_x4671 = kk_display__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x4671->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x4670 = _x; /*string*/
  }
  _brw_x2677 = kk_std_core_string_chars_fs_count(_x_x4670, _ctx); /*int*/
  bool _brw_x2678 = kk_integer_eq_borrow(_brw_x2677,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2677, _ctx);
  _match_x2676 = _brw_x2678; /*bool*/
  if (_match_x2676) {
    suffix = kk_string_empty(); /*string*/
  }
  else {
    kk_string_t _x_x4673;
    kk_define_string_literal(static, _s_x4674, 11, " [default: ", _ctx)
    _x_x4673 = kk_string_dup(_s_x4674, _ctx); /*string*/
    kk_string_t _x_x4675;
    kk_string_t _x_x4676;
    {
      struct kk_display_Clioption* _con_x4677 = kk_display__as_Clioption(o, _ctx);
      kk_string_t _x_0 = _con_x4677->opt__default;
      kk_string_dup(_x_0, _ctx);
      _x_x4676 = _x_0; /*string*/
    }
    kk_string_t _x_x4678;
    kk_define_string_literal(static, _s_x4679, 1, "]", _ctx)
    _x_x4678 = kk_string_dup(_s_x4679, _ctx); /*string*/
    _x_x4675 = kk_std_core_types__lp__plus__plus__rp_(_x_x4676, _x_x4678, _ctx); /*string*/
    suffix = kk_std_core_types__lp__plus__plus__rp_(_x_x4673, _x_x4675, _ctx); /*string*/
  }
  bool _match_x2671;
  kk_integer_t _brw_x2674;
  kk_string_t _x_x4680;
  {
    struct kk_display_Clioption* _con_x4681 = kk_display__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x4681->opt__short;
    kk_string_dup(_x_1, _ctx);
    _x_x4680 = _x_1; /*string*/
  }
  _brw_x2674 = kk_std_core_string_chars_fs_count(_x_x4680, _ctx); /*int*/
  bool _brw_x2675 = kk_integer_eq_borrow(_brw_x2674,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2674, _ctx);
  _match_x2671 = _brw_x2675; /*bool*/
  if (_match_x2671) {
    kk_string_t s_1_10585;
    kk_string_t _x_x4682;
    kk_define_string_literal(static, _s_x4683, 6, "    --", _ctx)
    _x_x4682 = kk_string_dup(_s_x4683, _ctx); /*string*/
    kk_string_t _x_x4684;
    kk_string_t _x_x4685;
    {
      struct kk_display_Clioption* _con_x4686 = kk_display__as_Clioption(o, _ctx);
      kk_string_t _x_2 = _con_x4686->opt__name;
      kk_string_dup(_x_2, _ctx);
      _x_x4685 = _x_2; /*string*/
    }
    kk_string_t _x_x4687;
    kk_define_string_literal(static, _s_x4688, 6, " VALUE", _ctx)
    _x_x4687 = kk_string_dup(_s_x4688, _ctx); /*string*/
    _x_x4684 = kk_std_core_types__lp__plus__plus__rp_(_x_x4685, _x_x4687, _ctx); /*string*/
    s_1_10585 = kk_std_core_types__lp__plus__plus__rp_(_x_x4682, _x_x4684, _ctx); /*string*/
    kk_integer_t y_10592;
    kk_string_t _x_x4689 = kk_string_dup(s_1_10585, _ctx); /*string*/
    y_10592 = kk_std_core_string_chars_fs_count(_x_x4689, _ctx); /*int*/
    kk_integer_t b_10590 = kk_integer_sub((kk_integer_from_small(24)),y_10592,kk_context()); /*int*/;
    kk_string_t _x_x4690;
    kk_string_t _x_x4691;
    kk_string_t _x_x4692;
    kk_string_t _x_x4693;
    kk_define_string_literal(static, _s_x4694, 1, " ", _ctx)
    _x_x4693 = kk_string_dup(_s_x4694, _ctx); /*string*/
    kk_integer_t _x_x4695;
    bool _match_x2673 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10590,kk_context()); /*bool*/;
    if (_match_x2673) {
      kk_integer_drop(b_10590, _ctx);
      _x_x4695 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4695 = b_10590; /*int*/
    }
    _x_x4692 = kk_display_hc__repeat__str(_x_x4693, _x_x4695, _ctx); /*string*/
    _x_x4691 = kk_std_core_types__lp__plus__plus__rp_(s_1_10585, _x_x4692, _ctx); /*string*/
    kk_string_t _x_x4696;
    {
      struct kk_display_Clioption* _con_x4697 = kk_display__as_Clioption(o, _ctx);
      kk_string_t _pat_0_5 = _con_x4697->opt__name;
      kk_string_t _pat_1_4 = _con_x4697->opt__short;
      kk_string_t _x_3 = _con_x4697->opt__help;
      kk_string_t _pat_2_3 = _con_x4697->opt__default;
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
      _x_x4696 = _x_3; /*string*/
    }
    _x_x4690 = kk_std_core_types__lp__plus__plus__rp_(_x_x4691, _x_x4696, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4690, suffix, _ctx);
  }
  {
    kk_string_t s_2_10594;
    kk_string_t _x_x4698;
    kk_define_string_literal(static, _s_x4699, 3, "  -", _ctx)
    _x_x4698 = kk_string_dup(_s_x4699, _ctx); /*string*/
    kk_string_t _x_x4700;
    kk_string_t _x_x4701;
    {
      struct kk_display_Clioption* _con_x4702 = kk_display__as_Clioption(o, _ctx);
      kk_string_t _x_4 = _con_x4702->opt__short;
      kk_string_dup(_x_4, _ctx);
      _x_x4701 = _x_4; /*string*/
    }
    kk_string_t _x_x4703;
    kk_string_t _x_x4704;
    kk_define_string_literal(static, _s_x4705, 4, ", --", _ctx)
    _x_x4704 = kk_string_dup(_s_x4705, _ctx); /*string*/
    kk_string_t _x_x4706;
    kk_string_t _x_x4707;
    {
      struct kk_display_Clioption* _con_x4708 = kk_display__as_Clioption(o, _ctx);
      kk_string_t _x_5 = _con_x4708->opt__name;
      kk_string_dup(_x_5, _ctx);
      _x_x4707 = _x_5; /*string*/
    }
    kk_string_t _x_x4709;
    kk_define_string_literal(static, _s_x4710, 6, " VALUE", _ctx)
    _x_x4709 = kk_string_dup(_s_x4710, _ctx); /*string*/
    _x_x4706 = kk_std_core_types__lp__plus__plus__rp_(_x_x4707, _x_x4709, _ctx); /*string*/
    _x_x4703 = kk_std_core_types__lp__plus__plus__rp_(_x_x4704, _x_x4706, _ctx); /*string*/
    _x_x4700 = kk_std_core_types__lp__plus__plus__rp_(_x_x4701, _x_x4703, _ctx); /*string*/
    s_2_10594 = kk_std_core_types__lp__plus__plus__rp_(_x_x4698, _x_x4700, _ctx); /*string*/
    kk_integer_t y_0_10602;
    kk_string_t _x_x4711 = kk_string_dup(s_2_10594, _ctx); /*string*/
    y_0_10602 = kk_std_core_string_chars_fs_count(_x_x4711, _ctx); /*int*/
    kk_integer_t b_0_10600 = kk_integer_sub((kk_integer_from_small(24)),y_0_10602,kk_context()); /*int*/;
    kk_string_t _x_x4712;
    kk_string_t _x_x4713;
    kk_string_t _x_x4714;
    kk_string_t _x_x4715;
    kk_define_string_literal(static, _s_x4716, 1, " ", _ctx)
    _x_x4715 = kk_string_dup(_s_x4716, _ctx); /*string*/
    kk_integer_t _x_x4717;
    bool _match_x2672 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10600,kk_context()); /*bool*/;
    if (_match_x2672) {
      kk_integer_drop(b_0_10600, _ctx);
      _x_x4717 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4717 = b_0_10600; /*int*/
    }
    _x_x4714 = kk_display_hc__repeat__str(_x_x4715, _x_x4717, _ctx); /*string*/
    _x_x4713 = kk_std_core_types__lp__plus__plus__rp_(s_2_10594, _x_x4714, _ctx); /*string*/
    kk_string_t _x_x4718;
    {
      struct kk_display_Clioption* _con_x4719 = kk_display__as_Clioption(o, _ctx);
      kk_string_t _pat_0_9 = _con_x4719->opt__name;
      kk_string_t _pat_1_7 = _con_x4719->opt__short;
      kk_string_t _x_6 = _con_x4719->opt__help;
      kk_string_t _pat_2_7 = _con_x4719->opt__default;
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
      _x_x4718 = _x_6; /*string*/
    }
    _x_x4712 = kk_std_core_types__lp__plus__plus__rp_(_x_x4713, _x_x4718, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4712, suffix, _ctx);
  }
}

kk_string_t kk_display_hc__format__arg__usage(kk_display__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> div string */ 
  kk_string_t s_10604;
  kk_string_t _x_x4720;
  kk_define_string_literal(static, _s_x4721, 3, "  <", _ctx)
  _x_x4720 = kk_string_dup(_s_x4721, _ctx); /*string*/
  kk_string_t _x_x4722;
  kk_string_t _x_x4723;
  {
    struct kk_display_Cliarg* _con_x4724 = kk_display__as_Cliarg(a, _ctx);
    kk_string_t _x_0 = _con_x4724->arg__name;
    kk_string_dup(_x_0, _ctx);
    _x_x4723 = _x_0; /*string*/
  }
  kk_string_t _x_x4725;
  kk_define_string_literal(static, _s_x4726, 1, ">", _ctx)
  _x_x4725 = kk_string_dup(_s_x4726, _ctx); /*string*/
  _x_x4722 = kk_std_core_types__lp__plus__plus__rp_(_x_x4723, _x_x4725, _ctx); /*string*/
  s_10604 = kk_std_core_types__lp__plus__plus__rp_(_x_x4720, _x_x4722, _ctx); /*string*/
  kk_integer_t y_10611;
  kk_string_t _x_x4727 = kk_string_dup(s_10604, _ctx); /*string*/
  y_10611 = kk_std_core_string_chars_fs_count(_x_x4727, _ctx); /*int*/
  kk_integer_t b_10609 = kk_integer_sub((kk_integer_from_small(24)),y_10611,kk_context()); /*int*/;
  kk_string_t _x_x4728;
  kk_string_t _x_x4729;
  kk_string_t _x_x4730;
  kk_string_t _x_x4731;
  kk_define_string_literal(static, _s_x4732, 1, " ", _ctx)
  _x_x4731 = kk_string_dup(_s_x4732, _ctx); /*string*/
  kk_integer_t _x_x4733;
  bool _match_x2670 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10609,kk_context()); /*bool*/;
  if (_match_x2670) {
    kk_integer_drop(b_10609, _ctx);
    _x_x4733 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4733 = b_10609; /*int*/
  }
  _x_x4730 = kk_display_hc__repeat__str(_x_x4731, _x_x4733, _ctx); /*string*/
  _x_x4729 = kk_std_core_types__lp__plus__plus__rp_(s_10604, _x_x4730, _ctx); /*string*/
  kk_string_t _x_x4734;
  {
    struct kk_display_Cliarg* _con_x4735 = kk_display__as_Cliarg(a, _ctx);
    kk_string_t _x_1 = _con_x4735->arg__help;
    kk_string_dup(_x_1, _ctx);
    _x_x4734 = _x_1; /*string*/
  }
  _x_x4728 = kk_std_core_types__lp__plus__plus__rp_(_x_x4729, _x_x4734, _ctx); /*string*/
  kk_string_t _x_x4736;
  {
    struct kk_display_Cliarg* _con_x4737 = kk_display__as_Cliarg(a, _ctx);
    kk_string_t _pat_0 = _con_x4737->arg__name;
    kk_string_t _pat_1 = _con_x4737->arg__help;
    bool _x = _con_x4737->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_datatype_ptr_decref(a, _ctx);
    }
    if (_x) {
      kk_define_string_literal(static, _s_x4738, 11, " (required)", _ctx)
      _x_x4736 = kk_string_dup(_s_x4738, _ctx); /*string*/
    }
    else {
      _x_x4736 = kk_string_empty(); /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4728, _x_x4736, _ctx);
}

kk_string_t kk_display_hc__format__arg__label(kk_display__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> string */ 
  {
    struct kk_display_Cliarg* _con_x4740 = kk_display__as_Cliarg(a, _ctx);
    bool _x = _con_x4740->arg__required;
    if (_x) {
      kk_string_t _x_x4741;
      kk_define_string_literal(static, _s_x4742, 2, " <", _ctx)
      _x_x4741 = kk_string_dup(_s_x4742, _ctx); /*string*/
      kk_string_t _x_x4743;
      kk_string_t _x_x4744;
      {
        struct kk_display_Cliarg* _con_x4745 = kk_display__as_Cliarg(a, _ctx);
        kk_string_t _x_0 = _con_x4745->arg__name;
        kk_string_t _pat_0_0 = _con_x4745->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_0, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4744 = _x_0; /*string*/
      }
      kk_string_t _x_x4746;
      kk_define_string_literal(static, _s_x4747, 1, ">", _ctx)
      _x_x4746 = kk_string_dup(_s_x4747, _ctx); /*string*/
      _x_x4743 = kk_std_core_types__lp__plus__plus__rp_(_x_x4744, _x_x4746, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4741, _x_x4743, _ctx);
    }
    {
      kk_string_t _x_x4748;
      kk_define_string_literal(static, _s_x4749, 2, " [", _ctx)
      _x_x4748 = kk_string_dup(_s_x4749, _ctx); /*string*/
      kk_string_t _x_x4750;
      kk_string_t _x_x4751;
      {
        struct kk_display_Cliarg* _con_x4752 = kk_display__as_Cliarg(a, _ctx);
        kk_string_t _x_1 = _con_x4752->arg__name;
        kk_string_t _pat_0_2 = _con_x4752->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_1, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4751 = _x_1; /*string*/
      }
      kk_string_t _x_x4753;
      kk_define_string_literal(static, _s_x4754, 1, "]", _ctx)
      _x_x4753 = kk_string_dup(_s_x4754, _ctx); /*string*/
      _x_x4750 = kk_std_core_types__lp__plus__plus__rp_(_x_x4751, _x_x4753, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4748, _x_x4750, _ctx);
    }
  }
}

kk_string_t kk_display_hc__format__cmd__usage(kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (pair : (string, clispec)) -> div string */ 
  kk_string_t s_10617;
  kk_string_t _x_x4755;
  kk_define_string_literal(static, _s_x4756, 2, "  ", _ctx)
  _x_x4755 = kk_string_dup(_s_x4756, _ctx); /*string*/
  kk_string_t _x_x4757;
  {
    kk_box_t _box_x482 = pair.fst;
    kk_box_t _box_x483 = pair.snd;
    kk_string_t _x = kk_string_unbox(_box_x482);
    kk_string_dup(_x, _ctx);
    _x_x4757 = _x; /*string*/
  }
  s_10617 = kk_std_core_types__lp__plus__plus__rp_(_x_x4755, _x_x4757, _ctx); /*string*/
  kk_integer_t y_10624;
  kk_string_t _x_x4758 = kk_string_dup(s_10617, _ctx); /*string*/
  y_10624 = kk_std_core_string_chars_fs_count(_x_x4758, _ctx); /*int*/
  kk_integer_t b_10622 = kk_integer_sub((kk_integer_from_small(24)),y_10624,kk_context()); /*int*/;
  kk_string_t _x_x4759;
  kk_string_t _x_x4760;
  kk_string_t _x_x4761;
  kk_define_string_literal(static, _s_x4762, 1, " ", _ctx)
  _x_x4761 = kk_string_dup(_s_x4762, _ctx); /*string*/
  kk_integer_t _x_x4763;
  bool _match_x2669 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10622,kk_context()); /*bool*/;
  if (_match_x2669) {
    kk_integer_drop(b_10622, _ctx);
    _x_x4763 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4763 = b_10622; /*int*/
  }
  _x_x4760 = kk_display_hc__repeat__str(_x_x4761, _x_x4763, _ctx); /*string*/
  _x_x4759 = kk_std_core_types__lp__plus__plus__rp_(s_10617, _x_x4760, _ctx); /*string*/
  kk_string_t _x_x4764;
  {
    kk_box_t _box_x484 = pair.fst;
    kk_box_t _box_x485 = pair.snd;
    kk_display__clispec _x_1 = kk_display__clispec_unbox(_box_x485, KK_BORROWED, _ctx);
    kk_display__clispec_dup(_x_1, _ctx);
    kk_std_core_types__tuple2_drop(pair, _ctx);
    {
      struct kk_display_Clispec* _con_x4765 = kk_display__as_Clispec(_x_1, _ctx);
      kk_string_t _pat_0_1 = _con_x4765->app__name;
      kk_string_t _pat_1_0 = _con_x4765->app__version;
      kk_string_t _x_0 = _con_x4765->app__about;
      kk_std_core_types__list _pat_2_0 = _con_x4765->app__flags;
      kk_std_core_types__list _pat_3 = _con_x4765->app__options;
      kk_std_core_types__list _pat_4 = _con_x4765->app__args;
      kk_std_core_types__list _pat_5 = _con_x4765->app__commands;
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
      _x_x4764 = _x_0; /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4759, _x_x4764, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__help_fun4779__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__help_fun4779(kk_function_t _fself, kk_box_t _b_x488, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__help_fun4779(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__help_fun4779, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__help_fun4779(kk_function_t _fself, kk_box_t _b_x488, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4780;
  kk_display__cliarg _x_x4781 = kk_display__cliarg_unbox(_b_x488, KK_OWNED, _ctx); /*display/cliarg*/
  _x_x4780 = kk_display_hc__format__arg__label(_x_x4781, _ctx); /*string*/
  return kk_string_box(_x_x4780);
}


// lift anonymous function
struct kk_display_hc__cli__help_fun4799__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__help_fun4799(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__help_fun4799(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__help_fun4799, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__help_fun4799(kk_function_t _fself, kk_box_t _b_x493, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4800;
  kk_display__cliflag _x_x4801 = kk_display__cliflag_unbox(_b_x493, KK_OWNED, _ctx); /*display/cliflag*/
  _x_x4800 = kk_display_hc__format__flag__usage(_x_x4801, _ctx); /*string*/
  return kk_string_box(_x_x4800);
}


// lift anonymous function
struct kk_display_hc__cli__help_fun4804__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__help_fun4804(kk_function_t _fself, kk_box_t _b_x498, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__help_fun4804(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__help_fun4804, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__help_fun4804(kk_function_t _fself, kk_box_t _b_x498, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4805;
  kk_display__clioption _x_x4806 = kk_display__clioption_unbox(_b_x498, KK_OWNED, _ctx); /*display/clioption*/
  _x_x4805 = kk_display_hc__format__option__usage(_x_x4806, _ctx); /*string*/
  return kk_string_box(_x_x4805);
}


// lift anonymous function
struct kk_display_hc__cli__help_fun4845__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__help_fun4845(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__help_fun4845(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__help_fun4845, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__help_fun4845(kk_function_t _fself, kk_box_t _b_x513, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4846;
  kk_display__cliarg _x_x4847 = kk_display__cliarg_unbox(_b_x513, KK_OWNED, _ctx); /*display/cliarg*/
  _x_x4846 = kk_display_hc__format__arg__usage(_x_x4847, _ctx); /*string*/
  return kk_string_box(_x_x4846);
}


// lift anonymous function
struct kk_display_hc__cli__help_fun4861__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__help_fun4861(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__help_fun4861(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__help_fun4861, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__help_fun4861(kk_function_t _fself, kk_box_t _b_x526, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4862;
  kk_std_core_types__tuple2 _x_x4863 = kk_std_core_types__tuple2_unbox(_b_x526, KK_OWNED, _ctx); /*(string, display/clispec)*/
  _x_x4862 = kk_display_hc__format__cmd__usage(_x_x4863, _ctx); /*string*/
  return kk_string_box(_x_x4862);
}

kk_string_t kk_display_hc__cli__help(kk_display__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> div string */ 
  kk_string_t header;
  kk_string_t _x_x4766;
  {
    struct kk_display_Clispec* _con_x4767 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4767->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4766 = _x; /*string*/
  }
  kk_string_t _x_x4768;
  kk_string_t _x_x4769;
  kk_define_string_literal(static, _s_x4770, 1, " ", _ctx)
  _x_x4769 = kk_string_dup(_s_x4770, _ctx); /*string*/
  kk_string_t _x_x4771;
  kk_string_t _x_x4772;
  {
    struct kk_display_Clispec* _con_x4773 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4773->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4772 = _x_0; /*string*/
  }
  kk_string_t _x_x4774;
  kk_string_t _x_x4775;
  kk_define_string_literal(static, _s_x4776, 5, " " "\xE2\x80\x94" " ", _ctx)
  _x_x4775 = kk_string_dup(_s_x4776, _ctx); /*string*/
  kk_string_t _x_x4777;
  {
    struct kk_display_Clispec* _con_x4778 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4778->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4777 = _x_1; /*string*/
  }
  _x_x4774 = kk_std_core_types__lp__plus__plus__rp_(_x_x4775, _x_x4777, _ctx); /*string*/
  _x_x4771 = kk_std_core_types__lp__plus__plus__rp_(_x_x4772, _x_x4774, _ctx); /*string*/
  _x_x4768 = kk_std_core_types__lp__plus__plus__rp_(_x_x4769, _x_x4771, _ctx); /*string*/
  header = kk_std_core_types__lp__plus__plus__rp_(_x_x4766, _x_x4768, _ctx); /*string*/
  kk_std_core_types__list arg__labels;
  kk_function_t _brw_x2667 = kk_display_new_hc__cli__help_fun4779(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2668;
  kk_std_core_types__list _x_x4782;
  {
    struct kk_display_Clispec* _con_x4783 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4783->app__args;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4782 = _x_2; /*list<display/cliarg>*/
  }
  _brw_x2668 = kk_std_core_list_map(_x_x4782, _brw_x2667, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2667, _ctx);
  arg__labels = _brw_x2668; /*list<string>*/
  kk_string_t args__str;
  kk_string_t _x_x4784 = kk_string_empty(); /*string*/
  args__str = kk_std_core_list_joinsep(arg__labels, _x_x4784, _ctx); /*string*/
  kk_string_t cmds__str;
  bool _match_x2664;
  kk_integer_t _brw_x2665;
  kk_std_core_types__list _x_x4786;
  {
    struct kk_display_Clispec* _con_x4787 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4787->app__commands;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4786 = _x_3; /*list<(string, display/clispec)>*/
  }
  _brw_x2665 = kk_std_core_list__lift_length_6003(_x_x4786, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2666 = kk_integer_gt_borrow(_brw_x2665,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2665, _ctx);
  _match_x2664 = _brw_x2666; /*bool*/
  if (_match_x2664) {
    kk_define_string_literal(static, _s_x4788, 10, " <COMMAND>", _ctx)
    cmds__str = kk_string_dup(_s_x4788, _ctx); /*string*/
  }
  else {
    cmds__str = kk_string_empty(); /*string*/
  }
  kk_string_t usage__line;
  kk_string_t _x_x4790;
  kk_define_string_literal(static, _s_x4791, 7, "USAGE: ", _ctx)
  _x_x4790 = kk_string_dup(_s_x4791, _ctx); /*string*/
  kk_string_t _x_x4792;
  kk_string_t _x_x4793;
  {
    struct kk_display_Clispec* _con_x4794 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x_4 = _con_x4794->app__name;
    kk_string_dup(_x_4, _ctx);
    _x_x4793 = _x_4; /*string*/
  }
  kk_string_t _x_x4795;
  kk_string_t _x_x4796;
  kk_define_string_literal(static, _s_x4797, 10, " [OPTIONS]", _ctx)
  _x_x4796 = kk_string_dup(_s_x4797, _ctx); /*string*/
  kk_string_t _x_x4798 = kk_std_core_types__lp__plus__plus__rp_(args__str, cmds__str, _ctx); /*string*/
  _x_x4795 = kk_std_core_types__lp__plus__plus__rp_(_x_x4796, _x_x4798, _ctx); /*string*/
  _x_x4792 = kk_std_core_types__lp__plus__plus__rp_(_x_x4793, _x_x4795, _ctx); /*string*/
  usage__line = kk_std_core_types__lp__plus__plus__rp_(_x_x4790, _x_x4792, _ctx); /*string*/
  kk_std_core_types__list flag__lines;
  kk_function_t _brw_x2662 = kk_display_new_hc__cli__help_fun4799(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2663;
  kk_std_core_types__list _x_x4802;
  {
    struct kk_display_Clispec* _con_x4803 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4803->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4802 = _x_5; /*list<display/cliflag>*/
  }
  _brw_x2663 = kk_std_core_list_map(_x_x4802, _brw_x2662, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2662, _ctx);
  flag__lines = _brw_x2663; /*list<string>*/
  kk_std_core_types__list opt__lines;
  kk_function_t _brw_x2660 = kk_display_new_hc__cli__help_fun4804(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2661;
  kk_std_core_types__list _x_x4807;
  {
    struct kk_display_Clispec* _con_x4808 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_6 = _con_x4808->app__options;
    kk_std_core_types__list_dup(_x_6, _ctx);
    _x_x4807 = _x_6; /*list<display/clioption>*/
  }
  _brw_x2661 = kk_std_core_list_map(_x_x4807, _brw_x2660, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2660, _ctx);
  opt__lines = _brw_x2661; /*list<string>*/
  kk_integer_t y_10645;
  kk_string_t _x_x4809;
  kk_define_string_literal(static, _s_x4810, 12, "  -h, --help", _ctx)
  _x_x4809 = kk_string_dup(_s_x4810, _ctx); /*string*/
  y_10645 = kk_std_core_string_chars_fs_count(_x_x4809, _ctx); /*int*/
  kk_integer_t b_10643 = kk_integer_sub((kk_integer_from_small(24)),y_10645,kk_context()); /*int*/;
  kk_integer_t y_0_10652;
  kk_string_t _x_x4811;
  kk_define_string_literal(static, _s_x4812, 15, "      --version", _ctx)
  _x_x4811 = kk_string_dup(_s_x4812, _ctx); /*string*/
  y_0_10652 = kk_std_core_string_chars_fs_count(_x_x4811, _ctx); /*int*/
  kk_integer_t b_0_10650 = kk_integer_sub((kk_integer_from_small(24)),y_0_10652,kk_context()); /*int*/;
  kk_string_t _b_x503_505;
  kk_string_t _x_x4813;
  kk_string_t _x_x4814;
  kk_define_string_literal(static, _s_x4815, 12, "  -h, --help", _ctx)
  _x_x4814 = kk_string_dup(_s_x4815, _ctx); /*string*/
  kk_string_t _x_x4816;
  kk_string_t _x_x4817;
  kk_define_string_literal(static, _s_x4818, 1, " ", _ctx)
  _x_x4817 = kk_string_dup(_s_x4818, _ctx); /*string*/
  kk_integer_t _x_x4819;
  bool _match_x2659 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10643,kk_context()); /*bool*/;
  if (_match_x2659) {
    kk_integer_drop(b_10643, _ctx);
    _x_x4819 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4819 = b_10643; /*int*/
  }
  _x_x4816 = kk_display_hc__repeat__str(_x_x4817, _x_x4819, _ctx); /*string*/
  _x_x4813 = kk_std_core_types__lp__plus__plus__rp_(_x_x4814, _x_x4816, _ctx); /*string*/
  kk_string_t _x_x4820;
  kk_define_string_literal(static, _s_x4821, 14, "Show this help", _ctx)
  _x_x4820 = kk_string_dup(_s_x4821, _ctx); /*string*/
  _b_x503_505 = kk_std_core_types__lp__plus__plus__rp_(_x_x4813, _x_x4820, _ctx); /*string*/
  kk_string_t _b_x501_507;
  kk_string_t _x_x4822;
  kk_string_t _x_x4823;
  kk_define_string_literal(static, _s_x4824, 15, "      --version", _ctx)
  _x_x4823 = kk_string_dup(_s_x4824, _ctx); /*string*/
  kk_string_t _x_x4825;
  kk_string_t _x_x4826;
  kk_define_string_literal(static, _s_x4827, 1, " ", _ctx)
  _x_x4826 = kk_string_dup(_s_x4827, _ctx); /*string*/
  kk_integer_t _x_x4828;
  bool _match_x2658 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10650,kk_context()); /*bool*/;
  if (_match_x2658) {
    kk_integer_drop(b_0_10650, _ctx);
    _x_x4828 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4828 = b_0_10650; /*int*/
  }
  _x_x4825 = kk_display_hc__repeat__str(_x_x4826, _x_x4828, _ctx); /*string*/
  _x_x4822 = kk_std_core_types__lp__plus__plus__rp_(_x_x4823, _x_x4825, _ctx); /*string*/
  kk_string_t _x_x4829;
  kk_define_string_literal(static, _s_x4830, 12, "Show version", _ctx)
  _x_x4829 = kk_string_dup(_s_x4830, _ctx); /*string*/
  _b_x501_507 = kk_std_core_types__lp__plus__plus__rp_(_x_x4822, _x_x4829, _ctx); /*string*/
  kk_std_core_types__list xs_1_10653 = kk_std_core_list_append(flag__lines, opt__lines, _ctx); /*list<string>*/;
  kk_std_core_types__list all__opts;
  kk_std_core_types__list _x_x4831;
  kk_std_core_types__list _x_x4832 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x501_507), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _x_x4831 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x503_505), _x_x4832, _ctx); /*list<10021>*/
  all__opts = kk_std_core_list_append(xs_1_10653, _x_x4831, _ctx); /*list<string>*/
  kk_string_t init_11209;
  kk_string_t _x_x4833;
  kk_string_t _x_x4834;
  kk_define_string_literal(static, _s_x4835, 2, "\n\n", _ctx)
  _x_x4834 = kk_string_dup(_s_x4835, _ctx); /*string*/
  kk_string_t _x_x4836;
  kk_string_t _x_x4837;
  kk_string_t _x_x4838;
  kk_define_string_literal(static, _s_x4839, 11, "\n\nOPTIONS:\n", _ctx)
  _x_x4838 = kk_string_dup(_s_x4839, _ctx); /*string*/
  kk_string_t _x_x4840;
  kk_string_t _x_x4841;
  kk_define_string_literal(static, _s_x4842, 1, "\n", _ctx)
  _x_x4841 = kk_string_dup(_s_x4842, _ctx); /*string*/
  _x_x4840 = kk_std_core_list_joinsep(all__opts, _x_x4841, _ctx); /*string*/
  _x_x4837 = kk_std_core_types__lp__plus__plus__rp_(_x_x4838, _x_x4840, _ctx); /*string*/
  _x_x4836 = kk_std_core_types__lp__plus__plus__rp_(usage__line, _x_x4837, _ctx); /*string*/
  _x_x4833 = kk_std_core_types__lp__plus__plus__rp_(_x_x4834, _x_x4836, _ctx); /*string*/
  init_11209 = kk_std_core_types__lp__plus__plus__rp_(header, _x_x4833, _ctx); /*string*/
  kk_ref_t loc = kk_ref_alloc((kk_string_box(init_11209)),kk_context()); /*local-var<19183,string>*/;
  kk_unit_t __ = kk_Unit;
  bool _match_x2653;
  kk_integer_t _brw_x2656;
  kk_std_core_types__list _x_x4843;
  {
    struct kk_display_Clispec* _con_x4844 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_7 = _con_x4844->app__args;
    kk_std_core_types__list_dup(_x_7, _ctx);
    _x_x4843 = _x_7; /*list<display/cliarg>*/
  }
  _brw_x2656 = kk_std_core_list__lift_length_6003(_x_x4843, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2657 = kk_integer_gt_borrow(_brw_x2656,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2656, _ctx);
  _match_x2653 = _brw_x2657; /*bool*/
  if (_match_x2653) {
    kk_std_core_types__list arg__lines;
    kk_function_t _brw_x2654 = kk_display_new_hc__cli__help_fun4845(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2655;
    kk_std_core_types__list _x_x4848;
    {
      struct kk_display_Clispec* _con_x4849 = kk_display__as_Clispec(spec, _ctx);
      kk_std_core_types__list _x_8 = _con_x4849->app__args;
      kk_std_core_types__list_dup(_x_8, _ctx);
      _x_x4848 = _x_8; /*list<display/cliarg>*/
    }
    _brw_x2655 = kk_std_core_list_map(_x_x4848, _brw_x2654, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2654, _ctx);
    arg__lines = _brw_x2655; /*list<string>*/
    kk_string_t _b_x519_521;
    kk_string_t _x_x4850;
    kk_box_t _x_x4851;
    kk_ref_t _x_x4852 = kk_ref_dup(loc, _ctx); /*local-var<19183,string>*/
    _x_x4851 = kk_ref_get(_x_x4852,kk_context()); /*10000*/
    _x_x4850 = kk_string_unbox(_x_x4851); /*string*/
    kk_string_t _x_x4853;
    kk_string_t _x_x4854;
    kk_define_string_literal(static, _s_x4855, 8, "\n\nARGS:\n", _ctx)
    _x_x4854 = kk_string_dup(_s_x4855, _ctx); /*string*/
    kk_string_t _x_x4856;
    kk_string_t _x_x4857;
    kk_define_string_literal(static, _s_x4858, 1, "\n", _ctx)
    _x_x4857 = kk_string_dup(_s_x4858, _ctx); /*string*/
    _x_x4856 = kk_std_core_list_joinsep(arg__lines, _x_x4857, _ctx); /*string*/
    _x_x4853 = kk_std_core_types__lp__plus__plus__rp_(_x_x4854, _x_x4856, _ctx); /*string*/
    _b_x519_521 = kk_std_core_types__lp__plus__plus__rp_(_x_x4850, _x_x4853, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x519_521)),kk_context());
  }
  else {
    
  }
  kk_unit_t ___0 = kk_Unit;
  bool _match_x2648;
  kk_integer_t _brw_x2651;
  kk_std_core_types__list _x_x4859;
  {
    struct kk_display_Clispec* _con_x4860 = kk_display__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_9 = _con_x4860->app__commands;
    kk_std_core_types__list_dup(_x_9, _ctx);
    _x_x4859 = _x_9; /*list<(string, display/clispec)>*/
  }
  _brw_x2651 = kk_std_core_list__lift_length_6003(_x_x4859, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2652 = kk_integer_gt_borrow(_brw_x2651,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2651, _ctx);
  _match_x2648 = _brw_x2652; /*bool*/
  if (_match_x2648) {
    kk_std_core_types__list cmd__lines;
    kk_function_t _brw_x2649 = kk_display_new_hc__cli__help_fun4861(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2650;
    kk_std_core_types__list _x_x4864;
    {
      struct kk_display_Clispec* _con_x4865 = kk_display__as_Clispec(spec, _ctx);
      kk_string_t _pat_0_13 = _con_x4865->app__name;
      kk_string_t _pat_1_11 = _con_x4865->app__version;
      kk_string_t _pat_2_11 = _con_x4865->app__about;
      kk_std_core_types__list _pat_3_11 = _con_x4865->app__flags;
      kk_std_core_types__list _pat_4_10 = _con_x4865->app__options;
      kk_std_core_types__list _pat_5_10 = _con_x4865->app__args;
      kk_std_core_types__list _x_10 = _con_x4865->app__commands;
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
      _x_x4864 = _x_10; /*list<(string, display/clispec)>*/
    }
    _brw_x2650 = kk_std_core_list_map(_x_x4864, _brw_x2649, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2649, _ctx);
    cmd__lines = _brw_x2650; /*list<string>*/
    kk_string_t _b_x532_534;
    kk_string_t _x_x4866;
    kk_box_t _x_x4867;
    kk_ref_t _x_x4868 = kk_ref_dup(loc, _ctx); /*local-var<19183,string>*/
    _x_x4867 = kk_ref_get(_x_x4868,kk_context()); /*10000*/
    _x_x4866 = kk_string_unbox(_x_x4867); /*string*/
    kk_string_t _x_x4869;
    kk_string_t _x_x4870;
    kk_define_string_literal(static, _s_x4871, 12, "\n\nCOMMANDS:\n", _ctx)
    _x_x4870 = kk_string_dup(_s_x4871, _ctx); /*string*/
    kk_string_t _x_x4872;
    kk_string_t _x_x4873;
    kk_define_string_literal(static, _s_x4874, 1, "\n", _ctx)
    _x_x4873 = kk_string_dup(_s_x4874, _ctx); /*string*/
    _x_x4872 = kk_std_core_list_joinsep(cmd__lines, _x_x4873, _ctx); /*string*/
    _x_x4869 = kk_std_core_types__lp__plus__plus__rp_(_x_x4870, _x_x4872, _ctx); /*string*/
    _b_x532_534 = kk_std_core_types__lp__plus__plus__rp_(_x_x4866, _x_x4869, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x532_534)),kk_context());
  }
  else {
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
  }
  kk_string_t res;
  kk_box_t _x_x4875;
  kk_ref_t _x_x4876 = kk_ref_dup(loc, _ctx); /*local-var<19183,string>*/
  _x_x4875 = kk_ref_get(_x_x4876,kk_context()); /*10000*/
  res = kk_string_unbox(_x_x4875); /*string*/
  kk_box_t _x_x4877 = kk_std_core_hnd_prompt_local_var(loc, kk_string_box(res), _ctx); /*10001*/
  return kk_string_unbox(_x_x4877);
}

kk_string_t kk_display_hc__cli__version__str(kk_display__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> string */ 
  kk_string_t _x_x4878;
  {
    struct kk_display_Clispec* _con_x4879 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4879->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4878 = _x; /*string*/
  }
  kk_string_t _x_x4880;
  kk_string_t _x_x4881;
  kk_define_string_literal(static, _s_x4882, 1, " ", _ctx)
  _x_x4881 = kk_string_dup(_s_x4882, _ctx); /*string*/
  kk_string_t _x_x4883;
  {
    struct kk_display_Clispec* _con_x4884 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_0 = _con_x4884->app__name;
    kk_string_t _x_0 = _con_x4884->app__version;
    kk_string_t _pat_1_0 = _con_x4884->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x4884->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x4884->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x4884->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x4884->app__commands;
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
    _x_x4883 = _x_0; /*string*/
  }
  _x_x4880 = kk_std_core_types__lp__plus__plus__rp_(_x_x4881, _x_x4883, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4878, _x_x4880, _ctx);
}


// lift anonymous function
struct kk_display_hc__has__flag_fun4889__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_display_hc__has__flag_fun4889(kk_function_t _fself, kk_box_t _b_x547, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__has__flag_fun4889(kk_string_t name, kk_context_t* _ctx) {
  struct kk_display_hc__has__flag_fun4889__t* _self = kk_function_alloc_as(struct kk_display_hc__has__flag_fun4889__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__has__flag_fun4889, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__has__flag_fun4889(kk_function_t _fself, kk_box_t _b_x547, kk_context_t* _ctx) {
  struct kk_display_hc__has__flag_fun4889__t* _self = kk_function_as(struct kk_display_hc__has__flag_fun4889__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4890 = kk_string_unbox(_b_x547); /*string*/
  return kk_string_is_eq(_x_x4890,name,kk_context());
}

bool kk_display_hc__has__flag(kk_display__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> bool */ 
  kk_std_core_types__list _x_x4887;
  {
    struct kk_display_Cliresult* _con_x4888 = kk_display__as_Cliresult(r, _ctx);
    kk_std_core_types__list _x = _con_x4888->cli__flags;
    kk_std_core_types__list _pat_0 = _con_x4888->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4888->cli__positionals;
    kk_string_t _pat_2 = _con_x4888->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4888->cli__sub;
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
    _x_x4887 = _x; /*list<string>*/
  }
  return kk_std_core_list_any(_x_x4887, kk_display_new_hc__has__flag_fun4889(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_hc__get__opt_fun4893__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_display_hc__get__opt_fun4893(kk_function_t _fself, kk_box_t _b_x555, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__get__opt_fun4893(kk_string_t name, kk_context_t* _ctx) {
  struct kk_display_hc__get__opt_fun4893__t* _self = kk_function_alloc_as(struct kk_display_hc__get__opt_fun4893__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__get__opt_fun4893, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__get__opt_fun4893(kk_function_t _fself, kk_box_t _b_x555, kk_context_t* _ctx) {
  struct kk_display_hc__get__opt_fun4893__t* _self = kk_function_as(struct kk_display_hc__get__opt_fun4893__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_563 = kk_std_core_types__tuple2_unbox(_b_x555, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4894;
  {
    kk_box_t _box_x551 = pair_563.fst;
    kk_box_t _box_x552 = pair_563.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x551);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_563, _ctx);
    _x_x4894 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4894,name,kk_context());
}

kk_std_core_types__maybe kk_display_hc__get__opt(kk_display__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> maybe<string> */ 
  kk_std_core_types__maybe _match_x2647;
  kk_std_core_types__list _x_x4891;
  {
    struct kk_display_Cliresult* _con_x4892 = kk_display__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4892->cli__flags;
    kk_std_core_types__list _x = _con_x4892->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4892->cli__positionals;
    kk_string_t _pat_2 = _con_x4892->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4892->cli__sub;
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
    _x_x4891 = _x; /*list<(string, string)>*/
  }
  _match_x2647 = kk_std_core_list_find(_x_x4891, kk_display_new_hc__get__opt_fun4893(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2647, _ctx)) {
    kk_box_t _box_x556 = _match_x2647._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x556, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2647, _ctx);
    kk_box_t _x_x4895;
    kk_string_t _x_x4896;
    {
      kk_box_t _box_x557 = pair_0.fst;
      kk_box_t _box_x558 = pair_0.snd;
      kk_string_t _x_1 = kk_string_unbox(_box_x558);
      kk_string_dup(_x_1, _ctx);
      kk_std_core_types__tuple2_drop(pair_0, _ctx);
      _x_x4896 = _x_1; /*string*/
    }
    _x_x4895 = kk_string_box(_x_x4896); /*10024*/
    return kk_std_core_types__new_Just(_x_x4895, _ctx);
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_display_hc__get__opt__or_fun4899__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_display_hc__get__opt__or_fun4899(kk_function_t _fself, kk_box_t _b_x568, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__get__opt__or_fun4899(kk_string_t name, kk_context_t* _ctx) {
  struct kk_display_hc__get__opt__or_fun4899__t* _self = kk_function_alloc_as(struct kk_display_hc__get__opt__or_fun4899__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__get__opt__or_fun4899, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__get__opt__or_fun4899(kk_function_t _fself, kk_box_t _b_x568, kk_context_t* _ctx) {
  struct kk_display_hc__get__opt__or_fun4899__t* _self = kk_function_as(struct kk_display_hc__get__opt__or_fun4899__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_575 = kk_std_core_types__tuple2_unbox(_b_x568, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4900;
  {
    kk_box_t _box_x564 = pair_575.fst;
    kk_box_t _box_x565 = pair_575.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x564);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_575, _ctx);
    _x_x4900 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4900,name,kk_context());
}

kk_string_t kk_display_hc__get__opt__or(kk_display__cliresult r, kk_string_t name, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (r : cliresult, name : string, default : string) -> string */ 
  kk_std_core_types__maybe _match_x2645;
  kk_std_core_types__list _x_x4897;
  {
    struct kk_display_Cliresult* _con_x4898 = kk_display__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4898->cli__flags;
    kk_std_core_types__list _x = _con_x4898->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4898->cli__positionals;
    kk_string_t _pat_2 = _con_x4898->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4898->cli__sub;
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
    _x_x4897 = _x; /*list<(string, string)>*/
  }
  _match_x2645 = kk_std_core_list_find(_x_x4897, kk_display_new_hc__get__opt__or_fun4899(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2645, _ctx)) {
    kk_box_t _box_x569 = _match_x2645._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x569, KK_BORROWED, _ctx);
    kk_string_drop(kkloc_default, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2645, _ctx);
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
    kk_std_core_types__maybe _match_x2646 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2646, _ctx)) {
      kk_box_t _box_x572 = _match_x2646._cons.Just.value;
      kk_string_t v = kk_string_unbox(_box_x572);
      kk_string_drop(kkloc_default, _ctx);
      kk_string_dup(v, _ctx);
      kk_std_core_types__maybe_drop(_match_x2646, _ctx);
      return v;
    }
    {
      return kkloc_default;
    }
  }
}

kk_std_core_types__list kk_display_hc__get__positionals(kk_display__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> list<string> */ 
  {
    struct kk_display_Cliresult* _con_x4901 = kk_display__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4901->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4901->cli__options;
    kk_std_core_types__list _x = _con_x4901->cli__positionals;
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
    return _x;
  }
}

kk_string_t kk_display_hc__get__command(kk_display__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> string */ 
  {
    struct kk_display_Cliresult* _con_x4902 = kk_display__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4902->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4902->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4902->cli__positionals;
    kk_string_t _x = _con_x4902->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4902->cli__sub;
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

kk_std_core_types__maybe kk_display_hc__get__sub(kk_display__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> maybe<cliresult> */ 
  {
    struct kk_display_Cliresult* _con_x4903 = kk_display__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4903->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4903->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4903->cli__positionals;
    kk_string_t _pat_3 = _con_x4903->cli__command;
    kk_std_core_types__maybe _x = _con_x4903->cli__sub;
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
struct kk_display_hc__find__flag__long_fun4904__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_display_hc__find__flag__long_fun4904(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__find__flag__long_fun4904(kk_string_t name, kk_context_t* _ctx) {
  struct kk_display_hc__find__flag__long_fun4904__t* _self = kk_function_alloc_as(struct kk_display_hc__find__flag__long_fun4904__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__find__flag__long_fun4904, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__find__flag__long_fun4904(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx) {
  struct kk_display_hc__find__flag__long_fun4904__t* _self = kk_function_as(struct kk_display_hc__find__flag__long_fun4904__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4905;
  kk_display__cliflag _match_x2644 = kk_display__cliflag_unbox(_b_x578, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x4906 = kk_display__as_Cliflag(_match_x2644, _ctx);
    kk_string_t _x = _con_x4906->flag__name;
    kk_string_t _pat_0 = _con_x4906->flag__short;
    kk_string_t _pat_1 = _con_x4906->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2644, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2644, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2644, _ctx);
    }
    _x_x4905 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4905,name,kk_context());
}

kk_std_core_types__maybe kk_display_hc__find__flag__long(kk_std_core_types__list flags, kk_string_t name, kk_context_t* _ctx) { /* (flags : list<cliflag>, name : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_display_new_hc__find__flag__long_fun4904(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_hc__find__flag__short_fun4907__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_display_hc__find__flag__short_fun4907(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__find__flag__short_fun4907(kk_string_t s, kk_context_t* _ctx) {
  struct kk_display_hc__find__flag__short_fun4907__t* _self = kk_function_alloc_as(struct kk_display_hc__find__flag__short_fun4907__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__find__flag__short_fun4907, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__find__flag__short_fun4907(kk_function_t _fself, kk_box_t _b_x584, kk_context_t* _ctx) {
  struct kk_display_hc__find__flag__short_fun4907__t* _self = kk_function_as(struct kk_display_hc__find__flag__short_fun4907__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4908;
  kk_display__cliflag _match_x2643 = kk_display__cliflag_unbox(_b_x584, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x4909 = kk_display__as_Cliflag(_match_x2643, _ctx);
    kk_string_t _pat_0 = _con_x4909->flag__name;
    kk_string_t _x = _con_x4909->flag__short;
    kk_string_t _pat_1 = _con_x4909->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2643, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2643, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2643, _ctx);
    }
    _x_x4908 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4908,s,kk_context());
}

kk_std_core_types__maybe kk_display_hc__find__flag__short(kk_std_core_types__list flags, kk_string_t s, kk_context_t* _ctx) { /* (flags : list<cliflag>, s : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_display_new_hc__find__flag__short_fun4907(s, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_hc__find__opt__long_fun4910__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_display_hc__find__opt__long_fun4910(kk_function_t _fself, kk_box_t _b_x590, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__find__opt__long_fun4910(kk_string_t name, kk_context_t* _ctx) {
  struct kk_display_hc__find__opt__long_fun4910__t* _self = kk_function_alloc_as(struct kk_display_hc__find__opt__long_fun4910__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__find__opt__long_fun4910, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__find__opt__long_fun4910(kk_function_t _fself, kk_box_t _b_x590, kk_context_t* _ctx) {
  struct kk_display_hc__find__opt__long_fun4910__t* _self = kk_function_as(struct kk_display_hc__find__opt__long_fun4910__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4911;
  kk_display__clioption _match_x2642 = kk_display__clioption_unbox(_b_x590, KK_OWNED, _ctx); /*display/clioption*/;
  {
    struct kk_display_Clioption* _con_x4912 = kk_display__as_Clioption(_match_x2642, _ctx);
    kk_string_t _x = _con_x4912->opt__name;
    kk_string_t _pat_0 = _con_x4912->opt__short;
    kk_string_t _pat_1 = _con_x4912->opt__help;
    kk_string_t _pat_2 = _con_x4912->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2642, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2642, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2642, _ctx);
    }
    _x_x4911 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4911,name,kk_context());
}

kk_std_core_types__maybe kk_display_hc__find__opt__long(kk_std_core_types__list options, kk_string_t name, kk_context_t* _ctx) { /* (options : list<clioption>, name : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_display_new_hc__find__opt__long_fun4910(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_hc__find__opt__short_fun4913__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_display_hc__find__opt__short_fun4913(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__find__opt__short_fun4913(kk_string_t s, kk_context_t* _ctx) {
  struct kk_display_hc__find__opt__short_fun4913__t* _self = kk_function_alloc_as(struct kk_display_hc__find__opt__short_fun4913__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__find__opt__short_fun4913, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__find__opt__short_fun4913(kk_function_t _fself, kk_box_t _b_x596, kk_context_t* _ctx) {
  struct kk_display_hc__find__opt__short_fun4913__t* _self = kk_function_as(struct kk_display_hc__find__opt__short_fun4913__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4914;
  kk_display__clioption _match_x2641 = kk_display__clioption_unbox(_b_x596, KK_OWNED, _ctx); /*display/clioption*/;
  {
    struct kk_display_Clioption* _con_x4915 = kk_display__as_Clioption(_match_x2641, _ctx);
    kk_string_t _pat_0 = _con_x4915->opt__name;
    kk_string_t _x = _con_x4915->opt__short;
    kk_string_t _pat_1 = _con_x4915->opt__help;
    kk_string_t _pat_2 = _con_x4915->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2641, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2641, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2641, _ctx);
    }
    _x_x4914 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4914,s,kk_context());
}

kk_std_core_types__maybe kk_display_hc__find__opt__short(kk_std_core_types__list options, kk_string_t s, kk_context_t* _ctx) { /* (options : list<clioption>, s : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_display_new_hc__find__opt__short_fun4913(s, _ctx), _ctx);
}
extern bool kk_display_hc__find__command_fun4916(kk_function_t _fself, kk_box_t _b_x604, kk_context_t* _ctx) {
  struct kk_display_hc__find__command_fun4916__t* _self = kk_function_as(struct kk_display_hc__find__command_fun4916__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4917;
  kk_std_core_types__tuple2 _match_x2640 = kk_std_core_types__tuple2_unbox(_b_x604, KK_OWNED, _ctx); /*(string, display/clispec)*/;
  {
    kk_box_t _box_x600 = _match_x2640.fst;
    kk_box_t _box_x601 = _match_x2640.snd;
    kk_string_t _x = kk_string_unbox(_box_x600);
    kk_string_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2640, _ctx);
    _x_x4917 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4917,name,kk_context());
}


// lift anonymous function
struct kk_display_hc__add__default_fun4922__t {
  struct kk_function_s _base;
  kk_display__clioption o;
};
static bool kk_display_hc__add__default_fun4922(kk_function_t _fself, kk_box_t _b_x612, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__add__default_fun4922(kk_display__clioption o, kk_context_t* _ctx) {
  struct kk_display_hc__add__default_fun4922__t* _self = kk_function_alloc_as(struct kk_display_hc__add__default_fun4922__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__add__default_fun4922, kk_context());
  _self->o = o;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__add__default_fun4922(kk_function_t _fself, kk_box_t _b_x612, kk_context_t* _ctx) {
  struct kk_display_hc__add__default_fun4922__t* _self = kk_function_as(struct kk_display_hc__add__default_fun4922__t*, _fself, _ctx);
  kk_display__clioption o = _self->o; /* display/clioption */
  kk_drop_match(_self, {kk_display__clioption_dup(o, _ctx);}, {}, _ctx)
  kk_string_t _x_x4923;
  kk_std_core_types__tuple2 _match_x2637 = kk_std_core_types__tuple2_unbox(_b_x612, KK_OWNED, _ctx); /*(string, string)*/;
  {
    kk_box_t _box_x608 = _match_x2637.fst;
    kk_box_t _box_x609 = _match_x2637.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x608);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2637, _ctx);
    _x_x4923 = _x_0; /*string*/
  }
  kk_string_t _x_x4924;
  {
    struct kk_display_Clioption* _con_x4925 = kk_display__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x4925->opt__name;
    kk_string_t _pat_0_3 = _con_x4925->opt__short;
    kk_string_t _pat_1_1 = _con_x4925->opt__help;
    kk_string_t _pat_2_0 = _con_x4925->opt__default;
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
    _x_x4924 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x4923,_x_x4924,kk_context());
}

kk_std_core_types__list kk_display_hc__add__default(kk_std_core_types__list acc, kk_display__clioption o, kk_context_t* _ctx) { /* (acc : list<(string, string)>, o : clioption) -> list<(string, string)> */ 
  bool b_10683;
  kk_integer_t _brw_x2638;
  kk_string_t _x_x4918;
  {
    struct kk_display_Clioption* _con_x4919 = kk_display__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x4919->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x4918 = _x; /*string*/
  }
  _brw_x2638 = kk_std_core_string_chars_fs_count(_x_x4918, _ctx); /*int*/
  bool _brw_x2639 = kk_integer_eq_borrow(_brw_x2638,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2638, _ctx);
  b_10683 = _brw_x2639; /*bool*/
  if (b_10683) {
    kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
    return acc;
  }
  {
    bool b_0_10686;
    kk_std_core_types__list _x_x4920 = kk_std_core_types__list_dup(acc, _ctx); /*list<(string, string)>*/
    kk_function_t _x_x4921;
    kk_display__clioption_dup(o, _ctx);
    _x_x4921 = kk_display_new_hc__add__default_fun4922(o, _ctx); /*(10001) -> 10002 bool*/
    b_0_10686 = kk_std_core_list_any(_x_x4920, _x_x4921, _ctx); /*bool*/
    if (b_0_10686) {
      kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
      return acc;
    }
    {
      kk_std_core_types__list _x_x4926;
      kk_box_t _x_x4927;
      kk_std_core_types__tuple2 _x_x4928;
      kk_box_t _x_x4929;
      kk_string_t _x_x4930;
      {
        struct kk_display_Clioption* _con_x4931 = kk_display__as_Clioption(o, _ctx);
        kk_string_t _x_2 = _con_x4931->opt__name;
        kk_string_dup(_x_2, _ctx);
        _x_x4930 = _x_2; /*string*/
      }
      _x_x4929 = kk_string_box(_x_x4930); /*10037*/
      kk_box_t _x_x4932;
      kk_string_t _x_x4933;
      {
        struct kk_display_Clioption* _con_x4934 = kk_display__as_Clioption(o, _ctx);
        kk_string_t _pat_0_5 = _con_x4934->opt__name;
        kk_string_t _pat_1_4 = _con_x4934->opt__short;
        kk_string_t _pat_2_2 = _con_x4934->opt__help;
        kk_string_t _x_3 = _con_x4934->opt__default;
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
        _x_x4933 = _x_3; /*string*/
      }
      _x_x4932 = kk_string_box(_x_x4933); /*10038*/
      _x_x4928 = kk_std_core_types__new_Tuple2(_x_x4929, _x_x4932, _ctx); /*(10037, 10038)*/
      _x_x4927 = kk_std_core_types__tuple2_box(_x_x4928, _ctx); /*10021*/
      _x_x4926 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4927, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      return kk_std_core_list_append(acc, _x_x4926, _ctx);
    }
  }
}


// lift anonymous function
struct kk_display_hc__apply__defaults_fun4938__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__apply__defaults_fun4938(kk_function_t _fself, kk_box_t _b_x627, kk_box_t _b_x628, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__apply__defaults_fun4938(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__apply__defaults_fun4938, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__apply__defaults_fun4938(kk_function_t _fself, kk_box_t _b_x627, kk_box_t _b_x628, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x4939;
  kk_std_core_types__list _x_x4940 = kk_std_core_types__list_unbox(_b_x627, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_display__clioption _x_x4941 = kk_display__clioption_unbox(_b_x628, KK_OWNED, _ctx); /*display/clioption*/
  _x_x4939 = kk_display_hc__add__default(_x_x4940, _x_x4941, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x4939, _ctx);
}

kk_std_core_types__list kk_display_hc__apply__defaults(kk_display__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<(string, string)>) -> list<(string, string)> */ 
  kk_box_t _x_x4935;
  kk_std_core_types__list _x_x4936;
  {
    struct kk_display_Clispec* _con_x4937 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x4937->app__name;
    kk_string_t _pat_1 = _con_x4937->app__version;
    kk_string_t _pat_2 = _con_x4937->app__about;
    kk_std_core_types__list _pat_3 = _con_x4937->app__flags;
    kk_std_core_types__list _x = _con_x4937->app__options;
    kk_std_core_types__list _pat_4 = _con_x4937->app__args;
    kk_std_core_types__list _pat_5 = _con_x4937->app__commands;
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
    _x_x4936 = _x; /*list<display/clioption>*/
  }
  _x_x4935 = kk_std_core_list_foldl(_x_x4936, kk_std_core_types__list_box(options, _ctx), kk_display_new_hc__apply__defaults_fun4938(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x4935, KK_OWNED, _ctx);
}

kk_string_t kk_display_hc__check__one__arg(kk_std_core_types__list positionals, kk_string_t err, kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (positionals : list<string>, err : string, pair : (int, cliarg)) -> string */ 
  bool b_10694;
  kk_integer_t _brw_x2635;
  kk_string_t _x_x4942 = kk_string_dup(err, _ctx); /*string*/
  _brw_x2635 = kk_std_core_string_chars_fs_count(_x_x4942, _ctx); /*int*/
  bool _brw_x2636 = kk_integer_eq_borrow(_brw_x2635,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2635, _ctx);
  b_10694 = _brw_x2636; /*bool*/
  if (b_10694) {
    kk_string_drop(err, _ctx);
    {
      kk_box_t _box_x632 = pair.fst;
      kk_box_t _box_x633 = pair.snd;
      kk_display__cliarg _x_0 = kk_display__cliarg_unbox(_box_x633, KK_BORROWED, _ctx);
      kk_display__cliarg_dup(_x_0, _ctx);
      {
        struct kk_display_Cliarg* _con_x4943 = kk_display__as_Cliarg(_x_0, _ctx);
        kk_string_t _pat_0_1 = _con_x4943->arg__name;
        kk_string_t _pat_1_0 = _con_x4943->arg__help;
        bool _x = _con_x4943->arg__required;
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_string_drop(_pat_1_0, _ctx);
          kk_string_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        if (_x) {
          bool _match_x2631;
          kk_integer_t _brw_x2633;
          {
            kk_box_t _box_x634 = pair.fst;
            kk_box_t _box_x635 = pair.snd;
            kk_integer_t _x_1 = kk_integer_unbox(_box_x634, _ctx);
            kk_integer_dup(_x_1, _ctx);
            _brw_x2633 = _x_1; /*int*/
          }
          kk_integer_t _brw_x2632 = kk_std_core_list__lift_length_6003(positionals, kk_integer_from_small(0), _ctx); /*int*/;
          bool _brw_x2634 = kk_integer_gte_borrow(_brw_x2633,_brw_x2632,kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2633, _ctx);
          kk_integer_drop(_brw_x2632, _ctx);
          _match_x2631 = _brw_x2634; /*bool*/
          if (_match_x2631) {
            kk_string_t _x_x4944;
            kk_define_string_literal(static, _s_x4945, 28, "missing required argument: <", _ctx)
            _x_x4944 = kk_string_dup(_s_x4945, _ctx); /*string*/
            kk_string_t _x_x4946;
            kk_string_t _x_x4947;
            {
              kk_box_t _box_x636 = pair.fst;
              kk_box_t _box_x637 = pair.snd;
              kk_display__cliarg _x_3 = kk_display__cliarg_unbox(_box_x637, KK_BORROWED, _ctx);
              kk_display__cliarg_dup(_x_3, _ctx);
              kk_std_core_types__tuple2_drop(pair, _ctx);
              {
                struct kk_display_Cliarg* _con_x4948 = kk_display__as_Cliarg(_x_3, _ctx);
                kk_string_t _x_2 = _con_x4948->arg__name;
                kk_string_t _pat_0_4 = _con_x4948->arg__help;
                if kk_likely(kk_datatype_ptr_is_unique(_x_3, _ctx)) {
                  kk_string_drop(_pat_0_4, _ctx);
                  kk_datatype_ptr_free(_x_3, _ctx);
                }
                else {
                  kk_string_dup(_x_2, _ctx);
                  kk_datatype_ptr_decref(_x_3, _ctx);
                }
                _x_x4947 = _x_2; /*string*/
              }
            }
            kk_string_t _x_x4949;
            kk_define_string_literal(static, _s_x4950, 1, ">", _ctx)
            _x_x4949 = kk_string_dup(_s_x4950, _ctx); /*string*/
            _x_x4946 = kk_std_core_types__lp__plus__plus__rp_(_x_x4947, _x_x4949, _ctx); /*string*/
            return kk_std_core_types__lp__plus__plus__rp_(_x_x4944, _x_x4946, _ctx);
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
struct kk_display_hc__check__required__args_fun4955__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__check__required__args_fun4955(kk_function_t _fself, kk_integer_t _b_x642, kk_box_t _b_x643, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__check__required__args_fun4955(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__check__required__args_fun4955, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__check__required__args_fun4955(kk_function_t _fself, kk_integer_t _b_x642, kk_box_t _b_x643, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t hc____i_656 = _b_x642; /*int*/;
  kk_display__cliarg hc____x_657 = kk_display__cliarg_unbox(_b_x643, KK_OWNED, _ctx); /*display/cliarg*/;
  kk_integer_t _b_x638_654 = hc____i_656; /*int*/;
  kk_display__cliarg _b_x639_655 = hc____x_657; /*display/cliarg*/;
  kk_std_core_types__tuple2 _x_x4956 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x638_654, _ctx), kk_display__cliarg_box(_b_x639_655, _ctx), _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x4956, _ctx);
}


// lift anonymous function
struct kk_display_hc__check__required__args_fun4961__t {
  struct kk_function_s _base;
  kk_std_core_types__list positionals;
};
static kk_box_t kk_display_hc__check__required__args_fun4961(kk_function_t _fself, kk_box_t _b_x647, kk_box_t _b_x648, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__check__required__args_fun4961(kk_std_core_types__list positionals, kk_context_t* _ctx) {
  struct kk_display_hc__check__required__args_fun4961__t* _self = kk_function_alloc_as(struct kk_display_hc__check__required__args_fun4961__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__check__required__args_fun4961, kk_context());
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__check__required__args_fun4961(kk_function_t _fself, kk_box_t _b_x647, kk_box_t _b_x648, kk_context_t* _ctx) {
  struct kk_display_hc__check__required__args_fun4961__t* _self = kk_function_as(struct kk_display_hc__check__required__args_fun4961__t*, _fself, _ctx);
  kk_std_core_types__list positionals = _self->positionals; /* list<string> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(positionals, _ctx);}, {}, _ctx)
  kk_string_t err_658 = kk_string_unbox(_b_x647); /*string*/;
  kk_std_core_types__tuple2 pair_659 = kk_std_core_types__tuple2_unbox(_b_x648, KK_OWNED, _ctx); /*(int, display/cliarg)*/;
  kk_string_t _x_x4962 = kk_display_hc__check__one__arg(positionals, err_658, pair_659, _ctx); /*string*/
  return kk_string_box(_x_x4962);
}

kk_string_t kk_display_hc__check__required__args(kk_display__clispec spec, kk_std_core_types__list positionals, kk_context_t* _ctx) { /* (spec : clispec, positionals : list<string>) -> string */ 
  kk_std_core_types__list _b_x644_649;
  kk_std_core_types__list _x_x4953;
  {
    struct kk_display_Clispec* _con_x4954 = kk_display__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x4954->app__name;
    kk_string_t _pat_1 = _con_x4954->app__version;
    kk_string_t _pat_2 = _con_x4954->app__about;
    kk_std_core_types__list _pat_3 = _con_x4954->app__flags;
    kk_std_core_types__list _pat_4 = _con_x4954->app__options;
    kk_std_core_types__list _x = _con_x4954->app__args;
    kk_std_core_types__list _pat_5 = _con_x4954->app__commands;
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
    _x_x4953 = _x; /*list<display/cliarg>*/
  }
  _b_x644_649 = kk_std_core_list_map_indexed(_x_x4953, kk_display_new_hc__check__required__args_fun4955(_ctx), _ctx); /*list<(int, display/cliarg)>*/
  kk_box_t _x_x4957;
  kk_box_t _x_x4958;
  kk_string_t _x_x4959 = kk_string_empty(); /*string*/
  _x_x4958 = kk_string_box(_x_x4959); /*10002*/
  _x_x4957 = kk_std_core_list_foldl(_b_x644_649, _x_x4958, kk_display_new_hc__check__required__args_fun4961(positionals, _ctx), _ctx); /*10002*/
  return kk_string_unbox(_x_x4957);
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11136_fun4965__t {
  struct kk_function_s _base;
  kk_string_t _y_x10887;
  kk_std_core_types__list _y_x10888;
  kk_std_core_types__list _y_x10889;
  kk_std_core_types__list _y_x10890;
  kk_string_t _y_x10891;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11136_fun4965(kk_function_t _fself, kk_box_t _b_x665, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11136_fun4965(kk_string_t _y_x10887, kk_std_core_types__list _y_x10888, kk_std_core_types__list _y_x10889, kk_std_core_types__list _y_x10890, kk_string_t _y_x10891, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11136_fun4965__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11136_fun4965__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11136_fun4965, kk_context());
  _self->_y_x10887 = _y_x10887;
  _self->_y_x10888 = _y_x10888;
  _self->_y_x10889 = _y_x10889;
  _self->_y_x10890 = _y_x10890;
  _self->_y_x10891 = _y_x10891;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11136_fun4965(kk_function_t _fself, kk_box_t _b_x665, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11136_fun4965__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11136_fun4965__t*, _fself, _ctx);
  kk_string_t _y_x10887 = _self->_y_x10887; /* string */
  kk_std_core_types__list _y_x10888 = _self->_y_x10888; /* list<string> */
  kk_std_core_types__list _y_x10889 = _self->_y_x10889; /* list<(string, string)> */
  kk_std_core_types__list _y_x10890 = _self->_y_x10890; /* list<string> */
  kk_string_t _y_x10891 = _self->_y_x10891; /* string */
  kk_drop_match(_self, {kk_string_dup(_y_x10887, _ctx);kk_std_core_types__list_dup(_y_x10888, _ctx);kk_std_core_types__list_dup(_y_x10889, _ctx);kk_std_core_types__list_dup(_y_x10890, _ctx);kk_string_dup(_y_x10891, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10892_667 = kk_std_core_types__list_unbox(_b_x665, KK_OWNED, _ctx); /*list<string>*/;
  kk_display__parseraw _x_x4966 = kk_display__new_Parseraw(kk_reuse_null, 0, _y_x10887, _y_x10888, _y_x10889, _y_x10890, _y_x10891, _y_x10892_667, _ctx); /*display/parseraw*/
  return kk_display__parseraw_box(_x_x4966, _ctx);
}

kk_display__parseraw kk_display__mlift_hc__parse__loop_11136(kk_string_t _y_x10887, kk_std_core_types__list _y_x10888, kk_std_core_types__list _y_x10889, kk_std_core_types__list _y_x10890, kk_ref_t sub__args, kk_string_t _y_x10891, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, list<string>, sub_args : local-var<h,list<string>>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11211;
  kk_box_t _x_x4963 = kk_ref_get(sub__args,kk_context()); /*10000*/
  x_11211 = kk_std_core_types__list_unbox(_x_x4963, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11211, _ctx);
    kk_box_t _x_x4964 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11136_fun4965(_y_x10887, _y_x10888, _y_x10889, _y_x10890, _y_x10891, _ctx), _ctx); /*10001*/
    return kk_display__parseraw_unbox(_x_x4964, KK_OWNED, _ctx);
  }
  {
    return kk_display__new_Parseraw(kk_reuse_null, 0, _y_x10887, _y_x10888, _y_x10889, _y_x10890, _y_x10891, x_11211, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11137_fun4969__t {
  struct kk_function_s _base;
  kk_string_t _y_x10887;
  kk_std_core_types__list _y_x10888;
  kk_std_core_types__list _y_x10889;
  kk_std_core_types__list _y_x10890;
  kk_ref_t sub__args;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11137_fun4969(kk_function_t _fself, kk_box_t _b_x673, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11137_fun4969(kk_string_t _y_x10887, kk_std_core_types__list _y_x10888, kk_std_core_types__list _y_x10889, kk_std_core_types__list _y_x10890, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11137_fun4969__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11137_fun4969__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11137_fun4969, kk_context());
  _self->_y_x10887 = _y_x10887;
  _self->_y_x10888 = _y_x10888;
  _self->_y_x10889 = _y_x10889;
  _self->_y_x10890 = _y_x10890;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11137_fun4969(kk_function_t _fself, kk_box_t _b_x673, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11137_fun4969__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11137_fun4969__t*, _fself, _ctx);
  kk_string_t _y_x10887 = _self->_y_x10887; /* string */
  kk_std_core_types__list _y_x10888 = _self->_y_x10888; /* list<string> */
  kk_std_core_types__list _y_x10889 = _self->_y_x10889; /* list<(string, string)> */
  kk_std_core_types__list _y_x10890 = _self->_y_x10890; /* list<string> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_string_dup(_y_x10887, _ctx);kk_std_core_types__list_dup(_y_x10888, _ctx);kk_std_core_types__list_dup(_y_x10889, _ctx);kk_std_core_types__list_dup(_y_x10890, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_string_t _y_x10891_675 = kk_string_unbox(_b_x673); /*string*/;
  kk_display__parseraw _x_x4970 = kk_display__mlift_hc__parse__loop_11136(_y_x10887, _y_x10888, _y_x10889, _y_x10890, sub__args, _y_x10891_675, _ctx); /*display/parseraw*/
  return kk_display__parseraw_box(_x_x4970, _ctx);
}

kk_display__parseraw kk_display__mlift_hc__parse__loop_11137(kk_string_t _y_x10887, kk_std_core_types__list _y_x10888, kk_std_core_types__list _y_x10889, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10890, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_string_t x_11219;
  kk_box_t _x_x4967 = kk_ref_get(subcmd,kk_context()); /*10000*/
  x_11219 = kk_string_unbox(_x_x4967); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11219, _ctx);
    kk_box_t _x_x4968 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11137_fun4969(_y_x10887, _y_x10888, _y_x10889, _y_x10890, sub__args, _ctx), _ctx); /*10001*/
    return kk_display__parseraw_unbox(_x_x4968, KK_OWNED, _ctx);
  }
  {
    return kk_display__mlift_hc__parse__loop_11136(_y_x10887, _y_x10888, _y_x10889, _y_x10890, sub__args, x_11219, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11138_fun4973__t {
  struct kk_function_s _base;
  kk_string_t _y_x10887;
  kk_std_core_types__list _y_x10888;
  kk_std_core_types__list _y_x10889;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11138_fun4973(kk_function_t _fself, kk_box_t _b_x681, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11138_fun4973(kk_string_t _y_x10887, kk_std_core_types__list _y_x10888, kk_std_core_types__list _y_x10889, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11138_fun4973__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11138_fun4973__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11138_fun4973, kk_context());
  _self->_y_x10887 = _y_x10887;
  _self->_y_x10888 = _y_x10888;
  _self->_y_x10889 = _y_x10889;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11138_fun4973(kk_function_t _fself, kk_box_t _b_x681, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11138_fun4973__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11138_fun4973__t*, _fself, _ctx);
  kk_string_t _y_x10887 = _self->_y_x10887; /* string */
  kk_std_core_types__list _y_x10888 = _self->_y_x10888; /* list<string> */
  kk_std_core_types__list _y_x10889 = _self->_y_x10889; /* list<(string, string)> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23386,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10887, _ctx);kk_std_core_types__list_dup(_y_x10888, _ctx);kk_std_core_types__list_dup(_y_x10889, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10890_683 = kk_std_core_types__list_unbox(_b_x681, KK_OWNED, _ctx); /*list<string>*/;
  kk_display__parseraw _x_x4974 = kk_display__mlift_hc__parse__loop_11137(_y_x10887, _y_x10888, _y_x10889, sub__args, subcmd, _y_x10890_683, _ctx); /*display/parseraw*/
  return kk_display__parseraw_box(_x_x4974, _ctx);
}

kk_display__parseraw kk_display__mlift_hc__parse__loop_11138(kk_string_t _y_x10887, kk_std_core_types__list _y_x10888, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10889, kk_context_t* _ctx) { /* forall<h> (string, list<string>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<(string, string)>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11221;
  kk_box_t _x_x4971 = kk_ref_get(positionals,kk_context()); /*10000*/
  x_11221 = kk_std_core_types__list_unbox(_x_x4971, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11221, _ctx);
    kk_box_t _x_x4972 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11138_fun4973(_y_x10887, _y_x10888, _y_x10889, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_display__parseraw_unbox(_x_x4972, KK_OWNED, _ctx);
  }
  {
    return kk_display__mlift_hc__parse__loop_11137(_y_x10887, _y_x10888, _y_x10889, sub__args, subcmd, x_11221, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11139_fun4977__t {
  struct kk_function_s _base;
  kk_string_t _y_x10887;
  kk_std_core_types__list _y_x10888;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11139_fun4977(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11139_fun4977(kk_string_t _y_x10887, kk_std_core_types__list _y_x10888, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11139_fun4977__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11139_fun4977__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11139_fun4977, kk_context());
  _self->_y_x10887 = _y_x10887;
  _self->_y_x10888 = _y_x10888;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11139_fun4977(kk_function_t _fself, kk_box_t _b_x689, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11139_fun4977__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11139_fun4977__t*, _fself, _ctx);
  kk_string_t _y_x10887 = _self->_y_x10887; /* string */
  kk_std_core_types__list _y_x10888 = _self->_y_x10888; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23386,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10887, _ctx);kk_std_core_types__list_dup(_y_x10888, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10889_691 = kk_std_core_types__list_unbox(_b_x689, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_display__parseraw _x_x4978 = kk_display__mlift_hc__parse__loop_11138(_y_x10887, _y_x10888, positionals, sub__args, subcmd, _y_x10889_691, _ctx); /*display/parseraw*/
  return kk_display__parseraw_box(_x_x4978, _ctx);
}

kk_display__parseraw kk_display__mlift_hc__parse__loop_11139(kk_string_t _y_x10887, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10888, kk_context_t* _ctx) { /* forall<h> (string, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11223;
  kk_box_t _x_x4975 = kk_ref_get(options,kk_context()); /*10000*/
  x_11223 = kk_std_core_types__list_unbox(_x_x4975, KK_OWNED, _ctx); /*list<(string, string)>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11223, _ctx);
    kk_box_t _x_x4976 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11139_fun4977(_y_x10887, _y_x10888, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_display__parseraw_unbox(_x_x4976, KK_OWNED, _ctx);
  }
  {
    return kk_display__mlift_hc__parse__loop_11138(_y_x10887, _y_x10888, positionals, sub__args, subcmd, x_11223, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11140_fun4981__t {
  struct kk_function_s _base;
  kk_string_t _y_x10887;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11140_fun4981(kk_function_t _fself, kk_box_t _b_x697, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11140_fun4981(kk_string_t _y_x10887, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11140_fun4981__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11140_fun4981__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11140_fun4981, kk_context());
  _self->_y_x10887 = _y_x10887;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11140_fun4981(kk_function_t _fself, kk_box_t _b_x697, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11140_fun4981__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11140_fun4981__t*, _fself, _ctx);
  kk_string_t _y_x10887 = _self->_y_x10887; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23386,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10887, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10888_699 = kk_std_core_types__list_unbox(_b_x697, KK_OWNED, _ctx); /*list<string>*/;
  kk_display__parseraw _x_x4982 = kk_display__mlift_hc__parse__loop_11139(_y_x10887, options, positionals, sub__args, subcmd, _y_x10888_699, _ctx); /*display/parseraw*/
  return kk_display__parseraw_box(_x_x4982, _ctx);
}

kk_display__parseraw kk_display__mlift_hc__parse__loop_11140(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t _y_x10887, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11225;
  kk_box_t _x_x4979 = kk_ref_get(flags,kk_context()); /*10000*/
  x_11225 = kk_std_core_types__list_unbox(_x_x4979, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11225, _ctx);
    kk_box_t _x_x4980 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11140_fun4981(_y_x10887, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_display__parseraw_unbox(_x_x4980, KK_OWNED, _ctx);
  }
  {
    return kk_display__mlift_hc__parse__loop_11139(_y_x10887, options, positionals, sub__args, subcmd, x_11225, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11142_fun4985__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11142_fun4985(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11142_fun4985(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11142_fun4985, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11142_fun4985(kk_function_t _fself, kk_box_t _b_x705, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x4986;
  kk_std_core_types__list _y_x10764_707 = kk_std_core_types__list_unbox(_b_x705, KK_OWNED, _ctx); /*list<string>*/;
  kk_integer_t _brw_x2620 = kk_std_core_list__lift_length_6003(_y_x10764_707, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2621 = kk_integer_gt_borrow(_brw_x2620,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2620, _ctx);
  _x_x4986 = _brw_x2621; /*bool*/
  return kk_bool_box(_x_x4986);
}

bool kk_display__mlift_hc__parse__loop_11142(kk_ref_t remaining, kk_string_t _y_x10763, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, string) -> <local<h>,div,exn,hica-brk> bool */ 
  bool _match_x2616;
  kk_integer_t _brw_x2622 = kk_std_core_string_chars_fs_count(_y_x10763, _ctx); /*int*/;
  bool _brw_x2623 = kk_integer_eq_borrow(_brw_x2622,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2622, _ctx);
  _match_x2616 = _brw_x2623; /*bool*/
  if (_match_x2616) {
    kk_std_core_types__list x_11227;
    kk_box_t _x_x4983 = kk_ref_get(remaining,kk_context()); /*10000*/
    x_11227 = kk_std_core_types__list_unbox(_x_x4983, KK_OWNED, _ctx); /*list<string>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11227, _ctx);
      kk_box_t _x_x4984 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11142_fun4985(_ctx), _ctx); /*10001*/
      return kk_bool_unbox(_x_x4984);
    }
    {
      kk_std_core_types__list _y_x10764_708 = x_11227; /*list<string>*/;
      kk_integer_t _brw_x2618 = kk_std_core_list__lift_length_6003(_y_x10764_708, kk_integer_from_small(0), _ctx); /*int*/;
      bool _brw_x2619 = kk_integer_gt_borrow(_brw_x2618,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2618, _ctx);
      return _brw_x2619;
    }
  }
  {
    kk_ref_drop(remaining, _ctx);
    return false;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11143_fun4988__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11143_fun4988(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11143_fun4988(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11143_fun4988, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11143_fun4988(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11230 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<display/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4989 = kk_std_core_hnd__as_Ev(ev_11230, _ctx);
    kk_box_t _box_x709 = _con_x4989->hnd;
    int32_t m = _con_x4989->marker;
    kk_display__hica_brk h = kk_display__hica_brk_unbox(_box_x709, KK_BORROWED, _ctx);
    kk_display__hica_brk_dup(h, _ctx);
    {
      struct kk_display__Hnd_hica_brk* _con_x4990 = kk_display__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4990->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4990->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x712, (_fun_unbox_x712, m, ev_11230, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_display__mlift_hc__parse__loop_11143(kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<h> (wild_@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x715_717 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4987 = kk_std_core_hnd__open_at0(_b_x715_717, kk_display__new_mlift_hc__parse__loop_11143_fun4988(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4987); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11144_fun4992__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11144_fun4992(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11144_fun4992(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11144_fun4992, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11144_fun4992(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11232 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<display/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4993 = kk_std_core_hnd__as_Ev(ev_11232, _ctx);
    kk_box_t _box_x719 = _con_x4993->hnd;
    int32_t m = _con_x4993->marker;
    kk_display__hica_brk h = kk_display__hica_brk_unbox(_box_x719, KK_BORROWED, _ctx);
    kk_display__hica_brk_dup(h, _ctx);
    {
      struct kk_display__Hnd_hica_brk* _con_x4994 = kk_display__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4994->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4994->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x722, (_fun_unbox_x722, m, ev_11232, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_display__mlift_hc__parse__loop_11144(kk_unit_t wild___0_0, kk_context_t* _ctx) { /* forall<h> (wild_@0@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x725_727 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4991 = kk_std_core_hnd__open_at0(_b_x725_727, kk_display__new_mlift_hc__parse__loop_11144_fun4992(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4991); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11145_fun4996__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11145_fun4996(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11145_fun4996(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11145_fun4996, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11145_fun4996(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11234 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<display/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x4997 = kk_std_core_hnd__as_Ev(ev_11234, _ctx);
    kk_box_t _box_x729 = _con_x4997->hnd;
    int32_t m = _con_x4997->marker;
    kk_display__hica_brk h = kk_display__hica_brk_unbox(_box_x729, KK_BORROWED, _ctx);
    kk_display__hica_brk_dup(h, _ctx);
    {
      struct kk_display__Hnd_hica_brk* _con_x4998 = kk_display__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x4998->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x4998->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x732, (_fun_unbox_x732, m, ev_11234, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_display__mlift_hc__parse__loop_11145(kk_unit_t wild___1, kk_context_t* _ctx) { /* forall<h> (wild_@1 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x735_737 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4995 = kk_std_core_hnd__open_at0(_b_x735_737, kk_display__new_mlift_hc__parse__loop_11145_fun4996(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4995); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11146_fun5000__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11146_fun5000(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11146_fun5000(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11146_fun5000, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11146_fun5000(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11236 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<display/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5001 = kk_std_core_hnd__as_Ev(ev_11236, _ctx);
    kk_box_t _box_x739 = _con_x5001->hnd;
    int32_t m = _con_x5001->marker;
    kk_display__hica_brk h = kk_display__hica_brk_unbox(_box_x739, KK_BORROWED, _ctx);
    kk_display__hica_brk_dup(h, _ctx);
    {
      struct kk_display__Hnd_hica_brk* _con_x5002 = kk_display__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5002->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5002->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x742, (_fun_unbox_x742, m, ev_11236, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_display__mlift_hc__parse__loop_11146(kk_unit_t wild___2, kk_context_t* _ctx) { /* forall<h> (wild_@2 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x745_747 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x4999 = kk_std_core_hnd__open_at0(_b_x745_747, kk_display__new_mlift_hc__parse__loop_11146_fun5000(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x4999); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11147_fun5004__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11147_fun5004(kk_function_t _fself, kk_box_t _b_x754, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11147_fun5004(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11147_fun5004, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11147_fun5004(kk_function_t _fself, kk_box_t _b_x754, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___2_756 = kk_Unit;
  kk_unit_unbox(_b_x754);
  kk_unit_t _x_x5005 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11146(wild___2_756, _ctx);
  return kk_unit_box(_x_x5005);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11147(kk_std_core_types__list _y_x10781, kk_ref_t positionals, kk_std_core_types__list _y_x10782, kk_context_t* _ctx) { /* forall<h> (list<string>, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x750_752 = kk_std_core_list_append(_y_x10781, _y_x10782, _ctx); /*list<string>*/;
  kk_unit_t x_11238 = kk_Unit;
  kk_unit_t _brw_x2615 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x750_752, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2615;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5003 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11147_fun5004(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5003); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11146(x_11238, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11148_fun5008__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10781;
  kk_ref_t positionals;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11148_fun5008(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11148_fun5008(kk_std_core_types__list _y_x10781, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11148_fun5008__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11148_fun5008__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11148_fun5008, kk_context());
  _self->_y_x10781 = _y_x10781;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11148_fun5008(kk_function_t _fself, kk_box_t _b_x762, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11148_fun5008__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11148_fun5008__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10781 = _self->_y_x10781; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10781, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10782_764 = kk_std_core_types__list_unbox(_b_x762, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5009 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11147(_y_x10781, positionals, _y_x10782_764, _ctx);
  return kk_unit_box(_x_x5009);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11148(kk_ref_t positionals, kk_ref_t remaining, kk_std_core_types__list _y_x10781, kk_context_t* _ctx) { /* forall<h> (positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11240;
  kk_box_t _x_x5006 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11240 = kk_std_core_types__list_unbox(_x_x5006, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11240, _ctx);
    kk_box_t _x_x5007 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11148_fun5008(_y_x10781, positionals, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5007); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11147(_y_x10781, positionals, x_11240, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_display__mlift_hc__parse__loop_11149(kk_string_t name, kk_ref_t options, kk_string_t v, kk_std_core_types__list _y_x10791, kk_context_t* _ctx) { /* forall<h> (name : string, options : local-var<h,list<(string, string)>>, v : string, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x770_772;
  kk_std_core_types__list _x_x5010;
  kk_box_t _x_x5011;
  kk_std_core_types__tuple2 _x_x5012 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x5011 = kk_std_core_types__tuple2_box(_x_x5012, _ctx); /*10021*/
  _x_x5010 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5011, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x770_772 = kk_std_core_list_append(_y_x10791, _x_x5010, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2612 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x770_772, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2612; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11150_fun5017__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11150_fun5017(kk_function_t _fself, kk_box_t _b_x779, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11150_fun5017(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11150_fun5017, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11150_fun5017(kk_function_t _fself, kk_box_t _b_x779, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5018;
  kk_display__clispec _match_x2611 = kk_display__clispec_unbox(_b_x779, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5019 = kk_display__as_Clispec(_match_x2611, _ctx);
    kk_string_t _pat_0_6 = _con_x5019->app__name;
    kk_string_t _pat_1_4 = _con_x5019->app__version;
    kk_string_t _pat_2_1 = _con_x5019->app__about;
    kk_std_core_types__list _pat_3_0 = _con_x5019->app__flags;
    kk_std_core_types__list _x_0 = _con_x5019->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x5019->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5019->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2611, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_string_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_6, _ctx);
      kk_datatype_ptr_free(_match_x2611, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2611, _ctx);
    }
    _x_x5018 = _x_0; /*list<display/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5018, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11150_fun5021__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11150_fun5021(kk_function_t _fself, kk_box_t _b_x789, kk_box_t _b_x790, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11150_fun5021(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11150_fun5021, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11150_fun5023__t {
  struct kk_function_s _base;
  kk_string_t name_0_822;
};
static bool kk_display__mlift_hc__parse__loop_11150_fun5023(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11150_fun5023(kk_string_t name_0_822, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11150_fun5023__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11150_fun5023__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11150_fun5023, kk_context());
  _self->name_0_822 = name_0_822;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11150_fun5023(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11150_fun5023__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11150_fun5023__t*, _fself, _ctx);
  kk_string_t name_0_822 = _self->name_0_822; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_822, _ctx);}, {}, _ctx)
  kk_string_t _x_x5024;
  kk_display__clioption _match_x2610 = kk_display__clioption_unbox(_b_x785, KK_OWNED, _ctx); /*display/clioption*/;
  {
    struct kk_display_Clioption* _con_x5025 = kk_display__as_Clioption(_match_x2610, _ctx);
    kk_string_t _x = _con_x5025->opt__name;
    kk_string_t _pat_0_5 = _con_x5025->opt__short;
    kk_string_t _pat_1_3 = _con_x5025->opt__help;
    kk_string_t _pat_2_0 = _con_x5025->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2610, _ctx)) {
      kk_string_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_5, _ctx);
      kk_datatype_ptr_free(_match_x2610, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2610, _ctx);
    }
    _x_x5024 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x5024,name_0_822,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11150_fun5021(kk_function_t _fself, kk_box_t _b_x789, kk_box_t _b_x790, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5022;
  kk_std_core_types__list options_0_821 = kk_std_core_types__list_unbox(_b_x789, KK_OWNED, _ctx); /*list<display/clioption>*/;
  kk_string_t name_0_822 = kk_string_unbox(_b_x790); /*string*/;
  _x_x5022 = kk_std_core_list_find(options_0_821, kk_display__new_mlift_hc__parse__loop_11150_fun5023(name_0_822, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5022, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11150_fun5031__t {
  struct kk_function_s _base;
  kk_string_t name;
  kk_ref_t options;
  kk_string_t v;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11150_fun5031(kk_function_t _fself, kk_std_core_types__list _y_x10791, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11150_fun5031(kk_string_t name, kk_ref_t options, kk_string_t v, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11150_fun5031__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11150_fun5031__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11150_fun5031, kk_context());
  _self->name = name;
  _self->options = options;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_display__mlift_hc__parse__loop_11150_fun5031(kk_function_t _fself, kk_std_core_types__list _y_x10791, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11150_fun5031__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11150_fun5031__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_string_t v = _self->v; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);kk_ref_dup(options, _ctx);kk_string_dup(v, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x801_803;
  kk_std_core_types__list _x_x5032;
  kk_box_t _x_x5033;
  kk_std_core_types__tuple2 _x_x5034 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x5033 = kk_std_core_types__tuple2_box(_x_x5034, _ctx); /*10021*/
  _x_x5032 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5033, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x801_803 = kk_std_core_list_append(_y_x10791, _x_x5032, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2609 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x801_803, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2609; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11150_fun5036__t {
  struct kk_function_s _base;
  kk_function_t next_11243;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11150_fun5036(kk_function_t _fself, kk_box_t _b_x809, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11150_fun5036(kk_function_t next_11243, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11150_fun5036__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11150_fun5036__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11150_fun5036, kk_context());
  _self->next_11243 = next_11243;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11150_fun5036(kk_function_t _fself, kk_box_t _b_x809, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11150_fun5036__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11150_fun5036__t*, _fself, _ctx);
  kk_function_t next_11243 = _self->next_11243; /* (list<(string, string)>) -> <local<23386>,exn,display/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11243, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5037 = kk_Unit;
  kk_std_core_types__list _x_x5038 = kk_std_core_types__list_unbox(_b_x809, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11243, (next_11243, _x_x5038, _ctx), _ctx);
  return kk_unit_box(_x_x5037);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11150(kk_std_core_types__list _c_x10787, kk_ref_t error, kk_ref_t options, kk_display__clispec spec, kk_string_t name, kk_context_t* _ctx) { /* forall<h> (list<string>, error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, name : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t v;
  kk_std_core_types__list _x_x5013 = kk_std_core_list_drop(_c_x10787, kk_integer_from_small(1), _ctx); /*list<10001>*/
  kk_string_t _x_x5014;
  kk_define_string_literal(static, _s_x5015, 1, "=", _ctx)
  _x_x5014 = kk_string_dup(_s_x5015, _ctx); /*string*/
  v = kk_std_core_list_joinsep(_x_x5013, _x_x5014, _ctx); /*string*/
  kk_std_core_types__list _x_x1_4_11052;
  kk_box_t _x_x5016 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11150_fun5017(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
  _x_x1_4_11052 = kk_std_core_types__list_unbox(_x_x5016, KK_OWNED, _ctx); /*list<display/clioption>*/
  kk_std_core_types__maybe _match_x2606;
  kk_box_t _x_x5020;
  kk_box_t _x_x5026;
  kk_string_t _x_x5027 = kk_string_dup(name, _ctx); /*string*/
  _x_x5026 = kk_string_box(_x_x5027); /*10001*/
  _x_x5020 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11150_fun5021(_ctx), kk_std_core_types__list_box(_x_x1_4_11052, _ctx), _x_x5026, _ctx); /*10002*/
  _match_x2606 = kk_std_core_types__maybe_unbox(_x_x5020, KK_OWNED, _ctx); /*maybe<display/clioption>*/
  if (kk_std_core_types__is_Just(_match_x2606, _ctx)) {
    kk_box_t _box_x791 = _match_x2606._cons.Just.value;
    kk_display__clioption _pat_15_0 = kk_display__clioption_unbox(_box_x791, KK_BORROWED, _ctx);
    struct kk_display_Clioption* _con_x5028 = kk_display__as_Clioption(_pat_15_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__maybe_drop(_match_x2606, _ctx);
    kk_std_core_types__list x_11242;
    kk_box_t _x_x5029;
    kk_ref_t _x_x5030 = kk_ref_dup(options, _ctx); /*local-var<23386,list<(string, string)>>*/
    _x_x5029 = kk_ref_get(_x_x5030,kk_context()); /*10000*/
    x_11242 = kk_std_core_types__list_unbox(_x_x5029, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_function_t next_11243 = kk_display__new_mlift_hc__parse__loop_11150_fun5031(name, options, v, _ctx); /*(list<(string, string)>) -> <local<23386>,exn,display/hica-brk,div> ()*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11242, _ctx);
      kk_box_t _x_x5035 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11150_fun5036(next_11243, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5035); return kk_Unit;
    }
    {
      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11243, (next_11243, x_11242, _ctx), _ctx); return kk_Unit;
    }
  }
  {
    kk_string_drop(v, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x811_819;
    kk_string_t _x_x5039;
    kk_define_string_literal(static, _s_x5040, 18, "unknown option: --", _ctx)
    _x_x5039 = kk_string_dup(_s_x5040, _ctx); /*string*/
    _b_x811_819 = kk_std_core_types__lp__plus__plus__rp_(_x_x5039, name, _ctx); /*string*/
    kk_unit_t _brw_x2607 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x811_819)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2607; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11151_fun5052__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11151_fun5052(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11151_fun5052(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11151_fun5052, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11151_fun5052(kk_function_t _fself, kk_box_t _b_x830, kk_box_t _b_x831, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5053;
  kk_std_core_types__maybe _match_x2605 = kk_std_core_types__maybe_unbox(_b_x830, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2605, _ctx)) {
    kk_box_t _box_x823 = _match_x2605._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x823);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2605, _ctx);
    kk_box_drop(_b_x831, _ctx);
    _x_x5053 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x824_836;
    kk_string_t _x_x5054;
    kk_define_string_literal(static, _s_x5055, 22, "unexpected Nothing in ", _ctx)
    _x_x5054 = kk_string_dup(_s_x5055, _ctx); /*string*/
    kk_string_t _x_x5056 = kk_string_unbox(_b_x831); /*string*/
    _b_x824_836 = kk_std_core_types__lp__plus__plus__rp_(_x_x5054, _x_x5056, _ctx); /*string*/
    kk_box_t _x_x5057 = kk_std_core_exn_throw(_b_x824_836, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5053 = kk_string_unbox(_x_x5057); /*string*/
  }
  return kk_string_box(_x_x5053);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11151_fun5059__t {
  struct kk_function_s _base;
  kk_std_core_types__list _c_x10787;
  kk_ref_t error;
  kk_ref_t options;
  kk_display__clispec spec;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11151_fun5059(kk_function_t _fself, kk_box_t _b_x841, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11151_fun5059(kk_std_core_types__list _c_x10787, kk_ref_t error, kk_ref_t options, kk_display__clispec spec, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11151_fun5059__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11151_fun5059__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11151_fun5059, kk_context());
  _self->_c_x10787 = _c_x10787;
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11151_fun5059(kk_function_t _fself, kk_box_t _b_x841, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11151_fun5059__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11151_fun5059__t*, _fself, _ctx);
  kk_std_core_types__list _c_x10787 = _self->_c_x10787; /* list<string> */
  kk_ref_t error = _self->error; /* local-var<23386,string> */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_display__clispec spec = _self->spec; /* display/clispec */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_c_x10787, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_display__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_string_t name_843 = kk_string_unbox(_b_x841); /*string*/;
  kk_unit_t _x_x5060 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11150(_c_x10787, error, options, spec, name_843, _ctx);
  return kk_unit_box(_x_x5060);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11151(kk_ref_t error, kk_ref_t options, kk_display__clispec spec, kk_std_core_types__list _c_x10787, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, list<string>) -> () */ 
  kk_std_core_types__maybe _x_x1_3_11050;
  kk_std_core_types__list _x_x5041 = kk_std_core_types__list_dup(_c_x10787, _ctx); /*list<string>*/
  _x_x1_3_11050 = kk_std_core_list__index(_x_x5041, kk_integer_from_small(0), _ctx); /*maybe<string>*/
  kk_string_t _x_x2_2_11051;
  kk_string_t _x_x5042;
  kk_define_string_literal(static, _s_x5043, 10, "display.kk", _ctx)
  _x_x5042 = kk_string_dup(_s_x5043, _ctx); /*string*/
  kk_string_t _x_x5044;
  kk_string_t _x_x5045;
  kk_define_string_literal(static, _s_x5046, 1, "(", _ctx)
  _x_x5045 = kk_string_dup(_s_x5046, _ctx); /*string*/
  kk_string_t _x_x5047;
  kk_string_t _x_x5048 = kk_std_core_int_show(kk_integer_from_small(762), _ctx); /*string*/
  kk_string_t _x_x5049;
  kk_define_string_literal(static, _s_x5050, 1, ")", _ctx)
  _x_x5049 = kk_string_dup(_s_x5050, _ctx); /*string*/
  _x_x5047 = kk_std_core_types__lp__plus__plus__rp_(_x_x5048, _x_x5049, _ctx); /*string*/
  _x_x5044 = kk_std_core_types__lp__plus__plus__rp_(_x_x5045, _x_x5047, _ctx); /*string*/
  _x_x2_2_11051 = kk_std_core_types__lp__plus__plus__rp_(_x_x5042, _x_x5044, _ctx); /*string*/
  kk_ssize_t _b_x826_832 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11248;
  kk_box_t _x_x5051 = kk_std_core_hnd__open_at2(_b_x826_832, kk_display__new_mlift_hc__parse__loop_11151_fun5052(_ctx), kk_std_core_types__maybe_box(_x_x1_3_11050, _ctx), kk_string_box(_x_x2_2_11051), _ctx); /*10002*/
  x_11248 = kk_string_unbox(_x_x5051); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11248, _ctx);
    kk_box_t _x_x5058 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11151_fun5059(_c_x10787, error, options, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5058); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11150(_c_x10787, error, options, spec, x_11248, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_display__mlift_hc__parse__loop_11152(kk_ref_t flags, kk_string_t name_0_0, kk_std_core_types__list _y_x10795, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x847_849;
  kk_std_core_types__list _x_x5061 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x847_849 = kk_std_core_list_append(_y_x10795, _x_x5061, _ctx); /*list<string>*/
  kk_unit_t _brw_x2603 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x847_849, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2603; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11154_fun5064__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11154_fun5064(kk_function_t _fself, kk_std_core_types__list _y_x10805, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11154_fun5064(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11154_fun5064__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11154_fun5064__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11154_fun5064, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_display__mlift_hc__parse__loop_11154_fun5064(kk_function_t _fself, kk_std_core_types__list _y_x10805, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11154_fun5064__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11154_fun5064__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x861_863 = kk_std_core_list_drop(_y_x10805, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2601 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x861_863, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2601; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11154_fun5066__t {
  struct kk_function_s _base;
  kk_function_t next_11251;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11154_fun5066(kk_function_t _fself, kk_box_t _b_x865, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11154_fun5066(kk_function_t next_11251, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11154_fun5066__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11154_fun5066__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11154_fun5066, kk_context());
  _self->next_11251 = next_11251;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11154_fun5066(kk_function_t _fself, kk_box_t _b_x865, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11154_fun5066__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11154_fun5066__t*, _fself, _ctx);
  kk_function_t next_11251 = _self->next_11251; /* (list<string>) -> <local<23386>,exn,display/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11251, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5067 = kk_Unit;
  kk_std_core_types__list _x_x5068 = kk_std_core_types__list_unbox(_b_x865, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11251, (next_11251, _x_x5068, _ctx), _ctx);
  return kk_unit_box(_x_x5067);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11154(kk_ref_t remaining, kk_unit_t wild___3, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11250;
  kk_box_t _x_x5062;
  kk_ref_t _x_x5063 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
  _x_x5062 = kk_ref_get(_x_x5063,kk_context()); /*10000*/
  x_11250 = kk_std_core_types__list_unbox(_x_x5062, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11251 = kk_display__new_mlift_hc__parse__loop_11154_fun5064(remaining, _ctx); /*(list<string>) -> <local<23386>,exn,display/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11250, _ctx);
    kk_box_t _x_x5065 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11154_fun5066(next_11251, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5065); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11251, (next_11251, x_11250, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11155_fun5073__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11155_fun5073(kk_function_t _fself, kk_box_t _b_x880, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11155_fun5073(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11155_fun5073__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11155_fun5073__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11155_fun5073, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11155_fun5073(kk_function_t _fself, kk_box_t _b_x880, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11155_fun5073__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11155_fun5073__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_882 = kk_Unit;
  kk_unit_unbox(_b_x880);
  kk_unit_t _x_x5074 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11154(remaining, wild___3_882, _ctx);
  return kk_unit_box(_x_x5074);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11155(kk_std_core_types__list _y_x10799, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10803, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x872_874;
  kk_std_core_types__list _x_x5069;
  kk_box_t _x_x5070;
  kk_std_core_types__tuple2 _x_x5071 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0), kk_string_box(_y_x10803), _ctx); /*(10037, 10038)*/
  _x_x5070 = kk_std_core_types__tuple2_box(_x_x5071, _ctx); /*10021*/
  _x_x5069 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5070, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x872_874 = kk_std_core_list_append(_y_x10799, _x_x5069, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11254 = kk_Unit;
  kk_unit_t _brw_x2599 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x872_874, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2599;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5072 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11155_fun5073(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5072); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11154(remaining, x_11254, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11156_fun5085__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11156_fun5085(kk_function_t _fself, kk_box_t _b_x890, kk_box_t _b_x891, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11156_fun5085(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11156_fun5085, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11156_fun5085(kk_function_t _fself, kk_box_t _b_x890, kk_box_t _b_x891, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5086;
  kk_std_core_types__maybe _match_x2597 = kk_std_core_types__maybe_unbox(_b_x890, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2597, _ctx)) {
    kk_box_t _box_x883 = _match_x2597._cons.Just.value;
    kk_string_t x_1 = kk_string_unbox(_box_x883);
    kk_string_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_match_x2597, _ctx);
    kk_box_drop(_b_x891, _ctx);
    _x_x5086 = x_1; /*string*/
  }
  else {
    kk_string_t _b_x884_896;
    kk_string_t _x_x5087;
    kk_define_string_literal(static, _s_x5088, 22, "unexpected Nothing in ", _ctx)
    _x_x5087 = kk_string_dup(_s_x5088, _ctx); /*string*/
    kk_string_t _x_x5089 = kk_string_unbox(_b_x891); /*string*/
    _b_x884_896 = kk_std_core_types__lp__plus__plus__rp_(_x_x5087, _x_x5089, _ctx); /*string*/
    kk_box_t _x_x5090 = kk_std_core_exn_throw(_b_x884_896, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5086 = kk_string_unbox(_x_x5090); /*string*/
  }
  return kk_string_box(_x_x5086);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11156_fun5092__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10799;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11156_fun5092(kk_function_t _fself, kk_box_t _b_x901, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11156_fun5092(kk_std_core_types__list _y_x10799, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11156_fun5092__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11156_fun5092__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11156_fun5092, kk_context());
  _self->_y_x10799 = _y_x10799;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11156_fun5092(kk_function_t _fself, kk_box_t _b_x901, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11156_fun5092__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11156_fun5092__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10799 = _self->_y_x10799; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10799, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10803_903 = kk_string_unbox(_b_x901); /*string*/;
  kk_unit_t _x_x5093 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11155(_y_x10799, name_0_0, options, remaining, _y_x10803_903, _ctx);
  return kk_unit_box(_x_x5093);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11156(kk_std_core_types__list _y_x10799, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10802, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_12_11064 = kk_std_core_list__index(_y_x10802, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_7_11065;
  kk_string_t _x_x5075;
  kk_define_string_literal(static, _s_x5076, 10, "display.kk", _ctx)
  _x_x5075 = kk_string_dup(_s_x5076, _ctx); /*string*/
  kk_string_t _x_x5077;
  kk_string_t _x_x5078;
  kk_define_string_literal(static, _s_x5079, 1, "(", _ctx)
  _x_x5078 = kk_string_dup(_s_x5079, _ctx); /*string*/
  kk_string_t _x_x5080;
  kk_string_t _x_x5081 = kk_std_core_int_show(kk_integer_from_small(780), _ctx); /*string*/
  kk_string_t _x_x5082;
  kk_define_string_literal(static, _s_x5083, 1, ")", _ctx)
  _x_x5082 = kk_string_dup(_s_x5083, _ctx); /*string*/
  _x_x5080 = kk_std_core_types__lp__plus__plus__rp_(_x_x5081, _x_x5082, _ctx); /*string*/
  _x_x5077 = kk_std_core_types__lp__plus__plus__rp_(_x_x5078, _x_x5080, _ctx); /*string*/
  _x_x2_7_11065 = kk_std_core_types__lp__plus__plus__rp_(_x_x5075, _x_x5077, _ctx); /*string*/
  kk_ssize_t _b_x886_892 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11256;
  kk_box_t _x_x5084 = kk_std_core_hnd__open_at2(_b_x886_892, kk_display__new_mlift_hc__parse__loop_11156_fun5085(_ctx), kk_std_core_types__maybe_box(_x_x1_12_11064, _ctx), kk_string_box(_x_x2_7_11065), _ctx); /*10002*/
  x_11256 = kk_string_unbox(_x_x5084); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11256, _ctx);
    kk_box_t _x_x5091 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11156_fun5092(_y_x10799, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5091); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11155(_y_x10799, name_0_0, options, remaining, x_11256, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11157_fun5097__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10799;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11157_fun5097(kk_function_t _fself, kk_box_t _b_x909, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11157_fun5097(kk_std_core_types__list _y_x10799, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11157_fun5097__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11157_fun5097__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11157_fun5097, kk_context());
  _self->_y_x10799 = _y_x10799;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11157_fun5097(kk_function_t _fself, kk_box_t _b_x909, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11157_fun5097__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11157_fun5097__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10799 = _self->_y_x10799; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10799, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10802_911 = kk_std_core_types__list_unbox(_b_x909, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5098 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11156(_y_x10799, name_0_0, options, remaining, _y_x10802_911, _ctx);
  return kk_unit_box(_x_x5098);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11157(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10799, kk_context_t* _ctx) { /* forall<h> (name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11258;
  kk_box_t _x_x5094;
  kk_ref_t _x_x5095 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
  _x_x5094 = kk_ref_get(_x_x5095,kk_context()); /*10000*/
  x_11258 = kk_std_core_types__list_unbox(_x_x5094, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11258, _ctx);
    kk_box_t _x_x5096 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11157_fun5097(_y_x10799, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5096); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11156(_y_x10799, name_0_0, options, remaining, x_11258, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11158_fun5107__t {
  struct kk_function_s _base;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11158_fun5107(kk_function_t _fself, kk_box_t _b_x919, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11158_fun5107(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11158_fun5107__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11158_fun5107__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11158_fun5107, kk_context());
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11158_fun5107(kk_function_t _fself, kk_box_t _b_x919, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11158_fun5107__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11158_fun5107__t*, _fself, _ctx);
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10799_923 = kk_std_core_types__list_unbox(_b_x919, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5108 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11157(name_0_0, options, remaining, _y_x10799_923, _ctx);
  return kk_unit_box(_x_x5108);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11158(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10797, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2590;
  kk_integer_t _brw_x2593 = kk_std_core_list__lift_length_6003(_y_x10797, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2594 = kk_integer_eq_borrow(_brw_x2593,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2593, _ctx);
  _match_x2590 = _brw_x2594; /*bool*/
  if (_match_x2590) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x913_921;
    kk_string_t _x_x5099;
    kk_define_string_literal(static, _s_x5100, 9, "option --", _ctx)
    _x_x5099 = kk_string_dup(_s_x5100, _ctx); /*string*/
    kk_string_t _x_x5101;
    kk_string_t _x_x5102;
    kk_define_string_literal(static, _s_x5103, 17, " requires a value", _ctx)
    _x_x5102 = kk_string_dup(_s_x5103, _ctx); /*string*/
    _x_x5101 = kk_std_core_types__lp__plus__plus__rp_(name_0_0, _x_x5102, _ctx); /*string*/
    _b_x913_921 = kk_std_core_types__lp__plus__plus__rp_(_x_x5099, _x_x5101, _ctx); /*string*/
    kk_unit_t _brw_x2592 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x913_921)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2592; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11260;
    kk_box_t _x_x5104;
    kk_ref_t _x_x5105 = kk_ref_dup(options, _ctx); /*local-var<23386,list<(string, string)>>*/
    _x_x5104 = kk_ref_get(_x_x5105,kk_context()); /*10000*/
    x_11260 = kk_std_core_types__list_unbox(_x_x5104, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11260, _ctx);
      kk_box_t _x_x5106 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11158_fun5107(name_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5106); return kk_Unit;
    }
    {
      kk_display__mlift_hc__parse__loop_11157(name_0_0, options, remaining, x_11260, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11159_fun5110__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11159_fun5110(kk_function_t _fself, kk_box_t _b_x926, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11159_fun5110(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11159_fun5110, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11159_fun5110(kk_function_t _fself, kk_box_t _b_x926, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5111;
  kk_display__cliflag _match_x2589 = kk_display__cliflag_unbox(_b_x926, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x5112 = kk_display__as_Cliflag(_match_x2589, _ctx);
    kk_string_t _x_7 = _con_x5112->flag__name;
    kk_string_t _pat_0_20 = _con_x5112->flag__short;
    kk_string_t _pat_1_15 = _con_x5112->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2589, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2589, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2589, _ctx);
    }
    _x_x5111 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5111);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11159(kk_display__cliflag f_1, kk_ref_t flags, kk_std_core_types__list _y_x10811, kk_context_t* _ctx) { /* forall<h> (f@1 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x927_929;
  kk_box_t _x_x5109 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11159_fun5110(_ctx), kk_display__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x927_929 = kk_string_unbox(_x_x5109); /*string*/
  kk_std_core_types__list _b_x935_937;
  kk_std_core_types__list _x_x5113 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x927_929), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x935_937 = kk_std_core_list_append(_y_x10811, _x_x5113, _ctx); /*list<string>*/
  kk_unit_t _brw_x2588 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x935_937, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2588; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11161_fun5116__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11161_fun5116(kk_function_t _fself, kk_std_core_types__list _y_x10821, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11161_fun5116(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11161_fun5116__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11161_fun5116__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11161_fun5116, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_display__mlift_hc__parse__loop_11161_fun5116(kk_function_t _fself, kk_std_core_types__list _y_x10821, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11161_fun5116__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11161_fun5116__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x947_949 = kk_std_core_list_drop(_y_x10821, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2586 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x947_949, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2586; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11161_fun5118__t {
  struct kk_function_s _base;
  kk_function_t next_11263;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11161_fun5118(kk_function_t _fself, kk_box_t _b_x951, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11161_fun5118(kk_function_t next_11263, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11161_fun5118__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11161_fun5118__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11161_fun5118, kk_context());
  _self->next_11263 = next_11263;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11161_fun5118(kk_function_t _fself, kk_box_t _b_x951, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11161_fun5118__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11161_fun5118__t*, _fself, _ctx);
  kk_function_t next_11263 = _self->next_11263; /* (list<string>) -> <local<23386>,exn,display/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11263, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5119 = kk_Unit;
  kk_std_core_types__list _x_x5120 = kk_std_core_types__list_unbox(_b_x951, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11263, (next_11263, _x_x5120, _ctx), _ctx);
  return kk_unit_box(_x_x5119);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11161(kk_ref_t remaining, kk_unit_t wild___4, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11262;
  kk_box_t _x_x5114;
  kk_ref_t _x_x5115 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
  _x_x5114 = kk_ref_get(_x_x5115,kk_context()); /*10000*/
  x_11262 = kk_std_core_types__list_unbox(_x_x5114, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11263 = kk_display__new_mlift_hc__parse__loop_11161_fun5116(remaining, _ctx); /*(list<string>) -> <local<23386>,exn,display/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11262, _ctx);
    kk_box_t _x_x5117 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11161_fun5118(next_11263, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5117); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11263, (next_11263, x_11262, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11162_fun5122__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11162_fun5122(kk_function_t _fself, kk_box_t _b_x955, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11162_fun5122(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11162_fun5122, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11162_fun5122(kk_function_t _fself, kk_box_t _b_x955, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5123;
  kk_display__clioption _match_x2584 = kk_display__clioption_unbox(_b_x955, KK_OWNED, _ctx); /*display/clioption*/;
  {
    struct kk_display_Clioption* _con_x5124 = kk_display__as_Clioption(_match_x2584, _ctx);
    kk_string_t _x_10 = _con_x5124->opt__name;
    kk_string_t _pat_0_23 = _con_x5124->opt__short;
    kk_string_t _pat_1_18 = _con_x5124->opt__help;
    kk_string_t _pat_2_8 = _con_x5124->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2584, _ctx)) {
      kk_string_drop(_pat_2_8, _ctx);
      kk_string_drop(_pat_1_18, _ctx);
      kk_string_drop(_pat_0_23, _ctx);
      kk_datatype_ptr_free(_match_x2584, _ctx);
    }
    else {
      kk_string_dup(_x_10, _ctx);
      kk_datatype_ptr_decref(_match_x2584, _ctx);
    }
    _x_x5123 = _x_10; /*string*/
  }
  return kk_string_box(_x_x5123);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11162_fun5129__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11162_fun5129(kk_function_t _fself, kk_box_t _b_x972, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11162_fun5129(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11162_fun5129__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11162_fun5129__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11162_fun5129, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11162_fun5129(kk_function_t _fself, kk_box_t _b_x972, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11162_fun5129__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11162_fun5129__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_974 = kk_Unit;
  kk_unit_unbox(_b_x972);
  kk_unit_t _x_x5130 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11161(remaining, wild___4_974, _ctx);
  return kk_unit_box(_x_x5130);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11162(kk_std_core_types__list _y_x10815, kk_display__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10819, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x956_962;
  kk_box_t _x_x5121 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11162_fun5122(_ctx), kk_display__clioption_box(o_2, _ctx), _ctx); /*10001*/
  _b_x956_962 = kk_string_unbox(_x_x5121); /*string*/
  kk_std_core_types__list _b_x968_970;
  kk_std_core_types__list _x_x5125;
  kk_box_t _x_x5126;
  kk_std_core_types__tuple2 _x_x5127 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x956_962), kk_string_box(_y_x10819), _ctx); /*(10037, 10038)*/
  _x_x5126 = kk_std_core_types__tuple2_box(_x_x5127, _ctx); /*10021*/
  _x_x5125 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5126, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x968_970 = kk_std_core_list_append(_y_x10815, _x_x5125, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11266 = kk_Unit;
  kk_unit_t _brw_x2583 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x968_970, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2583;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5128 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11162_fun5129(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5128); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11161(remaining, x_11266, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11163_fun5141__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11163_fun5141(kk_function_t _fself, kk_box_t _b_x982, kk_box_t _b_x983, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11163_fun5141(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11163_fun5141, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11163_fun5141(kk_function_t _fself, kk_box_t _b_x982, kk_box_t _b_x983, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5142;
  kk_std_core_types__maybe _match_x2581 = kk_std_core_types__maybe_unbox(_b_x982, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2581, _ctx)) {
    kk_box_t _box_x975 = _match_x2581._cons.Just.value;
    kk_string_t x_2 = kk_string_unbox(_box_x975);
    kk_string_dup(x_2, _ctx);
    kk_std_core_types__maybe_drop(_match_x2581, _ctx);
    kk_box_drop(_b_x983, _ctx);
    _x_x5142 = x_2; /*string*/
  }
  else {
    kk_string_t _b_x976_988;
    kk_string_t _x_x5143;
    kk_define_string_literal(static, _s_x5144, 22, "unexpected Nothing in ", _ctx)
    _x_x5143 = kk_string_dup(_s_x5144, _ctx); /*string*/
    kk_string_t _x_x5145 = kk_string_unbox(_b_x983); /*string*/
    _b_x976_988 = kk_std_core_types__lp__plus__plus__rp_(_x_x5143, _x_x5145, _ctx); /*string*/
    kk_box_t _x_x5146 = kk_std_core_exn_throw(_b_x976_988, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5142 = kk_string_unbox(_x_x5146); /*string*/
  }
  return kk_string_box(_x_x5142);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11163_fun5148__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10815;
  kk_display__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11163_fun5148(kk_function_t _fself, kk_box_t _b_x993, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11163_fun5148(kk_std_core_types__list _y_x10815, kk_display__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11163_fun5148__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11163_fun5148__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11163_fun5148, kk_context());
  _self->_y_x10815 = _y_x10815;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11163_fun5148(kk_function_t _fself, kk_box_t _b_x993, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11163_fun5148__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11163_fun5148__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10815 = _self->_y_x10815; /* list<(string, string)> */
  kk_display__clioption o_2 = _self->o_2; /* display/clioption */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10815, _ctx);kk_display__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10819_995 = kk_string_unbox(_b_x993); /*string*/;
  kk_unit_t _x_x5149 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11162(_y_x10815, o_2, options, remaining, _y_x10819_995, _ctx);
  return kk_unit_box(_x_x5149);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11163(kk_std_core_types__list _y_x10815, kk_display__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10818, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_20_11076 = kk_std_core_list__index(_y_x10818, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11_11077;
  kk_string_t _x_x5131;
  kk_define_string_literal(static, _s_x5132, 10, "display.kk", _ctx)
  _x_x5131 = kk_string_dup(_s_x5132, _ctx); /*string*/
  kk_string_t _x_x5133;
  kk_string_t _x_x5134;
  kk_define_string_literal(static, _s_x5135, 1, "(", _ctx)
  _x_x5134 = kk_string_dup(_s_x5135, _ctx); /*string*/
  kk_string_t _x_x5136;
  kk_string_t _x_x5137 = kk_std_core_int_show(kk_integer_from_small(795), _ctx); /*string*/
  kk_string_t _x_x5138;
  kk_define_string_literal(static, _s_x5139, 1, ")", _ctx)
  _x_x5138 = kk_string_dup(_s_x5139, _ctx); /*string*/
  _x_x5136 = kk_std_core_types__lp__plus__plus__rp_(_x_x5137, _x_x5138, _ctx); /*string*/
  _x_x5133 = kk_std_core_types__lp__plus__plus__rp_(_x_x5134, _x_x5136, _ctx); /*string*/
  _x_x2_11_11077 = kk_std_core_types__lp__plus__plus__rp_(_x_x5131, _x_x5133, _ctx); /*string*/
  kk_ssize_t _b_x978_984 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11268;
  kk_box_t _x_x5140 = kk_std_core_hnd__open_at2(_b_x978_984, kk_display__new_mlift_hc__parse__loop_11163_fun5141(_ctx), kk_std_core_types__maybe_box(_x_x1_20_11076, _ctx), kk_string_box(_x_x2_11_11077), _ctx); /*10002*/
  x_11268 = kk_string_unbox(_x_x5140); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11268, _ctx);
    kk_box_t _x_x5147 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11163_fun5148(_y_x10815, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5147); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11162(_y_x10815, o_2, options, remaining, x_11268, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11164_fun5153__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10815;
  kk_display__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11164_fun5153(kk_function_t _fself, kk_box_t _b_x1001, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11164_fun5153(kk_std_core_types__list _y_x10815, kk_display__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11164_fun5153__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11164_fun5153__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11164_fun5153, kk_context());
  _self->_y_x10815 = _y_x10815;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11164_fun5153(kk_function_t _fself, kk_box_t _b_x1001, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11164_fun5153__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11164_fun5153__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10815 = _self->_y_x10815; /* list<(string, string)> */
  kk_display__clioption o_2 = _self->o_2; /* display/clioption */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10815, _ctx);kk_display__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10818_1003 = kk_std_core_types__list_unbox(_b_x1001, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5154 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11163(_y_x10815, o_2, options, remaining, _y_x10818_1003, _ctx);
  return kk_unit_box(_x_x5154);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11164(kk_display__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10815, kk_context_t* _ctx) { /* forall<h> (o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11270;
  kk_box_t _x_x5150;
  kk_ref_t _x_x5151 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
  _x_x5150 = kk_ref_get(_x_x5151,kk_context()); /*10000*/
  x_11270 = kk_std_core_types__list_unbox(_x_x5150, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11270, _ctx);
    kk_box_t _x_x5152 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11164_fun5153(_y_x10815, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5152); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11163(_y_x10815, o_2, options, remaining, x_11270, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11165_fun5163__t {
  struct kk_function_s _base;
  kk_display__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11165_fun5163(kk_function_t _fself, kk_box_t _b_x1011, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11165_fun5163(kk_display__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11165_fun5163__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11165_fun5163__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11165_fun5163, kk_context());
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11165_fun5163(kk_function_t _fself, kk_box_t _b_x1011, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11165_fun5163__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11165_fun5163__t*, _fself, _ctx);
  kk_display__clioption o_2 = _self->o_2; /* display/clioption */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_display__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10815_1015 = kk_std_core_types__list_unbox(_b_x1011, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5164 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11164(o_2, options, remaining, _y_x10815_1015, _ctx);
  return kk_unit_box(_x_x5164);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11165(kk_ref_t error, kk_display__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_std_core_types__list _y_x10813, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@5 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2574;
  kk_integer_t _brw_x2577 = kk_std_core_list__lift_length_6003(_y_x10813, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2578 = kk_integer_eq_borrow(_brw_x2577,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2577, _ctx);
  _match_x2574 = _brw_x2578; /*bool*/
  if (_match_x2574) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_2, (KK_I32(4)), _ctx);
    kk_string_t _b_x1005_1013;
    kk_string_t _x_x5155;
    kk_define_string_literal(static, _s_x5156, 8, "option -", _ctx)
    _x_x5155 = kk_string_dup(_s_x5156, _ctx); /*string*/
    kk_string_t _x_x5157;
    kk_string_t _x_x5158;
    kk_define_string_literal(static, _s_x5159, 17, " requires a value", _ctx)
    _x_x5158 = kk_string_dup(_s_x5159, _ctx); /*string*/
    _x_x5157 = kk_std_core_types__lp__plus__plus__rp_(s_5, _x_x5158, _ctx); /*string*/
    _b_x1005_1013 = kk_std_core_types__lp__plus__plus__rp_(_x_x5155, _x_x5157, _ctx); /*string*/
    kk_unit_t _brw_x2576 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1005_1013)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2576; return kk_Unit;
  }
  {
    kk_string_drop(s_5, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11272;
    kk_box_t _x_x5160;
    kk_ref_t _x_x5161 = kk_ref_dup(options, _ctx); /*local-var<23386,list<(string, string)>>*/
    _x_x5160 = kk_ref_get(_x_x5161,kk_context()); /*10000*/
    x_11272 = kk_std_core_types__list_unbox(_x_x5160, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11272, _ctx);
      kk_box_t _x_x5162 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11165_fun5163(o_2, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5162); return kk_Unit;
    }
    {
      kk_display__mlift_hc__parse__loop_11164(o_2, options, remaining, x_11272, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11166_fun5166__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11166_fun5166(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11166_fun5166(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11166_fun5166, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11166_fun5166(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11274 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<display/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5167 = kk_std_core_hnd__as_Ev(ev_11274, _ctx);
    kk_box_t _box_x1016 = _con_x5167->hnd;
    int32_t m = _con_x5167->marker;
    kk_display__hica_brk h = kk_display__hica_brk_unbox(_box_x1016, KK_BORROWED, _ctx);
    kk_display__hica_brk_dup(h, _ctx);
    {
      struct kk_display__Hnd_hica_brk* _con_x5168 = kk_display__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5168->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5168->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1019, (_fun_unbox_x1019, m, ev_11274, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_display__mlift_hc__parse__loop_11166(kk_unit_t wild___6, kk_context_t* _ctx) { /* forall<h> (wild_@6 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1022_1024 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5165 = kk_std_core_hnd__open_at0(_b_x1022_1024, kk_display__new_mlift_hc__parse__loop_11166_fun5166(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5165); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11167_fun5170__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11167_fun5170(kk_function_t _fself, kk_box_t _b_x1031, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11167_fun5170(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11167_fun5170, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11167_fun5170(kk_function_t _fself, kk_box_t _b_x1031, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_1033 = kk_Unit;
  kk_unit_unbox(_b_x1031);
  kk_unit_t _x_x5171 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11166(wild___6_1033, _ctx);
  return kk_unit_box(_x_x5171);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11167(kk_ref_t sub__args, kk_std_core_types__list _y_x10828, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11276 = kk_Unit;
  kk_unit_t _brw_x2573 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10828, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2573;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5169 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11167_fun5170(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5169); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11166(x_11276, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11168_fun5174__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11168_fun5174(kk_function_t _fself, kk_box_t _b_x1039, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11168_fun5174(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11168_fun5174__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11168_fun5174__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11168_fun5174, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11168_fun5174(kk_function_t _fself, kk_box_t _b_x1039, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11168_fun5174__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11168_fun5174__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10828_1041 = kk_std_core_types__list_unbox(_b_x1039, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5175 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11167(sub__args, _y_x10828_1041, _ctx);
  return kk_unit_box(_x_x5175);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11168(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11278;
  kk_box_t _x_x5172 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11278 = kk_std_core_types__list_unbox(_x_x5172, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11278, _ctx);
    kk_box_t _x_x5173 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11168_fun5174(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5173); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11167(sub__args, x_11278, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_display__mlift_hc__parse__loop_11169(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10832, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1045_1047;
  kk_std_core_types__list _x_x5176 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1045_1047 = kk_std_core_list_append(_y_x10832, _x_x5176, _ctx); /*list<string>*/
  kk_unit_t _brw_x2570 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1045_1047, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2570; return kk_Unit;
}
 
// monadic lift

kk_unit_t kk_display__mlift_hc__parse__loop_11170(kk_ref_t flags, kk_string_t name_0_0_0, kk_std_core_types__list _y_x10838, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1053_1055;
  kk_std_core_types__list _x_x5177 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1053_1055 = kk_std_core_list_append(_y_x10838, _x_x5177, _ctx); /*list<string>*/
  kk_unit_t _brw_x2569 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1053_1055, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2569; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11172_fun5180__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11172_fun5180(kk_function_t _fself, kk_std_core_types__list _y_x10848, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11172_fun5180(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11172_fun5180__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11172_fun5180__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11172_fun5180, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_display__mlift_hc__parse__loop_11172_fun5180(kk_function_t _fself, kk_std_core_types__list _y_x10848, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11172_fun5180__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11172_fun5180__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1067_1069 = kk_std_core_list_drop(_y_x10848, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2567 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1067_1069, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2567; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11172_fun5182__t {
  struct kk_function_s _base;
  kk_function_t next_11281;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11172_fun5182(kk_function_t _fself, kk_box_t _b_x1071, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11172_fun5182(kk_function_t next_11281, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11172_fun5182__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11172_fun5182__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11172_fun5182, kk_context());
  _self->next_11281 = next_11281;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11172_fun5182(kk_function_t _fself, kk_box_t _b_x1071, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11172_fun5182__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11172_fun5182__t*, _fself, _ctx);
  kk_function_t next_11281 = _self->next_11281; /* (list<string>) -> <local<23386>,exn,display/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11281, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5183 = kk_Unit;
  kk_std_core_types__list _x_x5184 = kk_std_core_types__list_unbox(_b_x1071, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11281, (next_11281, _x_x5184, _ctx), _ctx);
  return kk_unit_box(_x_x5183);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11172(kk_ref_t remaining, kk_unit_t wild___3_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11280;
  kk_box_t _x_x5178;
  kk_ref_t _x_x5179 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
  _x_x5178 = kk_ref_get(_x_x5179,kk_context()); /*10000*/
  x_11280 = kk_std_core_types__list_unbox(_x_x5178, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11281 = kk_display__new_mlift_hc__parse__loop_11172_fun5180(remaining, _ctx); /*(list<string>) -> <local<23386>,exn,display/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11280, _ctx);
    kk_box_t _x_x5181 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11172_fun5182(next_11281, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5181); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11281, (next_11281, x_11280, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11173_fun5189__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11173_fun5189(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11173_fun5189(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11173_fun5189__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11173_fun5189__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11173_fun5189, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11173_fun5189(kk_function_t _fself, kk_box_t _b_x1086, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11173_fun5189__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11173_fun5189__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_0_1088 = kk_Unit;
  kk_unit_unbox(_b_x1086);
  kk_unit_t _x_x5190 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11172(remaining, wild___3_0_1088, _ctx);
  return kk_unit_box(_x_x5190);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11173(kk_std_core_types__list _y_x10842, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10846, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1078_1080;
  kk_std_core_types__list _x_x5185;
  kk_box_t _x_x5186;
  kk_std_core_types__tuple2 _x_x5187 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0_0), kk_string_box(_y_x10846), _ctx); /*(10037, 10038)*/
  _x_x5186 = kk_std_core_types__tuple2_box(_x_x5187, _ctx); /*10021*/
  _x_x5185 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5186, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1078_1080 = kk_std_core_list_append(_y_x10842, _x_x5185, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11284 = kk_Unit;
  kk_unit_t _brw_x2565 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1078_1080, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2565;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5188 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11173_fun5189(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5188); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11172(remaining, x_11284, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11174_fun5201__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11174_fun5201(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11174_fun5201(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11174_fun5201, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11174_fun5201(kk_function_t _fself, kk_box_t _b_x1096, kk_box_t _b_x1097, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5202;
  kk_std_core_types__maybe _match_x2563 = kk_std_core_types__maybe_unbox(_b_x1096, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2563, _ctx)) {
    kk_box_t _box_x1089 = _match_x2563._cons.Just.value;
    kk_string_t x_3 = kk_string_unbox(_box_x1089);
    kk_string_dup(x_3, _ctx);
    kk_std_core_types__maybe_drop(_match_x2563, _ctx);
    kk_box_drop(_b_x1097, _ctx);
    _x_x5202 = x_3; /*string*/
  }
  else {
    kk_string_t _b_x1090_1102;
    kk_string_t _x_x5203;
    kk_define_string_literal(static, _s_x5204, 22, "unexpected Nothing in ", _ctx)
    _x_x5203 = kk_string_dup(_s_x5204, _ctx); /*string*/
    kk_string_t _x_x5205 = kk_string_unbox(_b_x1097); /*string*/
    _b_x1090_1102 = kk_std_core_types__lp__plus__plus__rp_(_x_x5203, _x_x5205, _ctx); /*string*/
    kk_box_t _x_x5206 = kk_std_core_exn_throw(_b_x1090_1102, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5202 = kk_string_unbox(_x_x5206); /*string*/
  }
  return kk_string_box(_x_x5202);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11174_fun5208__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10842;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11174_fun5208(kk_function_t _fself, kk_box_t _b_x1107, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11174_fun5208(kk_std_core_types__list _y_x10842, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11174_fun5208__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11174_fun5208__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11174_fun5208, kk_context());
  _self->_y_x10842 = _y_x10842;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11174_fun5208(kk_function_t _fself, kk_box_t _b_x1107, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11174_fun5208__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11174_fun5208__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10842 = _self->_y_x10842; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10842, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10846_1109 = kk_string_unbox(_b_x1107); /*string*/;
  kk_unit_t _x_x5209 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11173(_y_x10842, name_0_0_0, options, remaining, _y_x10846_1109, _ctx);
  return kk_unit_box(_x_x5209);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11174(kk_std_core_types__list _y_x10842, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10845, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_30_11091 = kk_std_core_list__index(_y_x10845, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_16_11092;
  kk_string_t _x_x5191;
  kk_define_string_literal(static, _s_x5192, 10, "display.kk", _ctx)
  _x_x5191 = kk_string_dup(_s_x5192, _ctx); /*string*/
  kk_string_t _x_x5193;
  kk_string_t _x_x5194;
  kk_define_string_literal(static, _s_x5195, 1, "(", _ctx)
  _x_x5194 = kk_string_dup(_s_x5195, _ctx); /*string*/
  kk_string_t _x_x5196;
  kk_string_t _x_x5197 = kk_std_core_int_show(kk_integer_from_small(780), _ctx); /*string*/
  kk_string_t _x_x5198;
  kk_define_string_literal(static, _s_x5199, 1, ")", _ctx)
  _x_x5198 = kk_string_dup(_s_x5199, _ctx); /*string*/
  _x_x5196 = kk_std_core_types__lp__plus__plus__rp_(_x_x5197, _x_x5198, _ctx); /*string*/
  _x_x5193 = kk_std_core_types__lp__plus__plus__rp_(_x_x5194, _x_x5196, _ctx); /*string*/
  _x_x2_16_11092 = kk_std_core_types__lp__plus__plus__rp_(_x_x5191, _x_x5193, _ctx); /*string*/
  kk_ssize_t _b_x1092_1098 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11286;
  kk_box_t _x_x5200 = kk_std_core_hnd__open_at2(_b_x1092_1098, kk_display__new_mlift_hc__parse__loop_11174_fun5201(_ctx), kk_std_core_types__maybe_box(_x_x1_30_11091, _ctx), kk_string_box(_x_x2_16_11092), _ctx); /*10002*/
  x_11286 = kk_string_unbox(_x_x5200); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11286, _ctx);
    kk_box_t _x_x5207 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11174_fun5208(_y_x10842, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5207); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11173(_y_x10842, name_0_0_0, options, remaining, x_11286, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11175_fun5213__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10842;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11175_fun5213(kk_function_t _fself, kk_box_t _b_x1115, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11175_fun5213(kk_std_core_types__list _y_x10842, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11175_fun5213__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11175_fun5213__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11175_fun5213, kk_context());
  _self->_y_x10842 = _y_x10842;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11175_fun5213(kk_function_t _fself, kk_box_t _b_x1115, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11175_fun5213__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11175_fun5213__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10842 = _self->_y_x10842; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10842, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10845_1117 = kk_std_core_types__list_unbox(_b_x1115, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5214 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11174(_y_x10842, name_0_0_0, options, remaining, _y_x10845_1117, _ctx);
  return kk_unit_box(_x_x5214);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11175(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10842, kk_context_t* _ctx) { /* forall<h> (name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11288;
  kk_box_t _x_x5210;
  kk_ref_t _x_x5211 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
  _x_x5210 = kk_ref_get(_x_x5211,kk_context()); /*10000*/
  x_11288 = kk_std_core_types__list_unbox(_x_x5210, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11288, _ctx);
    kk_box_t _x_x5212 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11175_fun5213(_y_x10842, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5212); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11174(_y_x10842, name_0_0_0, options, remaining, x_11288, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11176_fun5223__t {
  struct kk_function_s _base;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11176_fun5223(kk_function_t _fself, kk_box_t _b_x1125, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11176_fun5223(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11176_fun5223__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11176_fun5223__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11176_fun5223, kk_context());
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11176_fun5223(kk_function_t _fself, kk_box_t _b_x1125, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11176_fun5223__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11176_fun5223__t*, _fself, _ctx);
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10842_1129 = kk_std_core_types__list_unbox(_b_x1125, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5224 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11175(name_0_0_0, options, remaining, _y_x10842_1129, _ctx);
  return kk_unit_box(_x_x5224);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11176(kk_ref_t error, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10840, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2556;
  kk_integer_t _brw_x2559 = kk_std_core_list__lift_length_6003(_y_x10840, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2560 = kk_integer_eq_borrow(_brw_x2559,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2559, _ctx);
  _match_x2556 = _brw_x2560; /*bool*/
  if (_match_x2556) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x1119_1127;
    kk_string_t _x_x5215;
    kk_define_string_literal(static, _s_x5216, 9, "option --", _ctx)
    _x_x5215 = kk_string_dup(_s_x5216, _ctx); /*string*/
    kk_string_t _x_x5217;
    kk_string_t _x_x5218;
    kk_define_string_literal(static, _s_x5219, 17, " requires a value", _ctx)
    _x_x5218 = kk_string_dup(_s_x5219, _ctx); /*string*/
    _x_x5217 = kk_std_core_types__lp__plus__plus__rp_(name_0_0_0, _x_x5218, _ctx); /*string*/
    _b_x1119_1127 = kk_std_core_types__lp__plus__plus__rp_(_x_x5215, _x_x5217, _ctx); /*string*/
    kk_unit_t _brw_x2558 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1119_1127)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2558; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11290;
    kk_box_t _x_x5220;
    kk_ref_t _x_x5221 = kk_ref_dup(options, _ctx); /*local-var<23386,list<(string, string)>>*/
    _x_x5220 = kk_ref_get(_x_x5221,kk_context()); /*10000*/
    x_11290 = kk_std_core_types__list_unbox(_x_x5220, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11290, _ctx);
      kk_box_t _x_x5222 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11176_fun5223(name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5222); return kk_Unit;
    }
    {
      kk_display__mlift_hc__parse__loop_11175(name_0_0_0, options, remaining, x_11290, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11177_fun5226__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11177_fun5226(kk_function_t _fself, kk_box_t _b_x1132, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11177_fun5226(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11177_fun5226, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11177_fun5226(kk_function_t _fself, kk_box_t _b_x1132, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5227;
  kk_display__cliflag _match_x2555 = kk_display__cliflag_unbox(_b_x1132, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x5228 = kk_display__as_Cliflag(_match_x2555, _ctx);
    kk_string_t _x_19 = _con_x5228->flag__name;
    kk_string_t _pat_0_40 = _con_x5228->flag__short;
    kk_string_t _pat_1_30 = _con_x5228->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2555, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2555, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2555, _ctx);
    }
    _x_x5227 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5227);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11177(kk_display__cliflag f_0_0, kk_ref_t flags, kk_std_core_types__list _y_x10854, kk_context_t* _ctx) { /* forall<h> (f@0@0 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x1133_1135;
  kk_box_t _x_x5225 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11177_fun5226(_ctx), kk_display__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1133_1135 = kk_string_unbox(_x_x5225); /*string*/
  kk_std_core_types__list _b_x1141_1143;
  kk_std_core_types__list _x_x5229 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1133_1135), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1141_1143 = kk_std_core_list_append(_y_x10854, _x_x5229, _ctx); /*list<string>*/
  kk_unit_t _brw_x2554 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1141_1143, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2554; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11179_fun5232__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11179_fun5232(kk_function_t _fself, kk_std_core_types__list _y_x10864, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11179_fun5232(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11179_fun5232__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11179_fun5232__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11179_fun5232, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_display__mlift_hc__parse__loop_11179_fun5232(kk_function_t _fself, kk_std_core_types__list _y_x10864, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11179_fun5232__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11179_fun5232__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1153_1155 = kk_std_core_list_drop(_y_x10864, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2552 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1153_1155, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2552; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11179_fun5234__t {
  struct kk_function_s _base;
  kk_function_t next_11293;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11179_fun5234(kk_function_t _fself, kk_box_t _b_x1157, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11179_fun5234(kk_function_t next_11293, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11179_fun5234__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11179_fun5234__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11179_fun5234, kk_context());
  _self->next_11293 = next_11293;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11179_fun5234(kk_function_t _fself, kk_box_t _b_x1157, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11179_fun5234__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11179_fun5234__t*, _fself, _ctx);
  kk_function_t next_11293 = _self->next_11293; /* (list<string>) -> <local<23386>,exn,display/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11293, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5235 = kk_Unit;
  kk_std_core_types__list _x_x5236 = kk_std_core_types__list_unbox(_b_x1157, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11293, (next_11293, _x_x5236, _ctx), _ctx);
  return kk_unit_box(_x_x5235);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11179(kk_ref_t remaining, kk_unit_t wild___4_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11292;
  kk_box_t _x_x5230;
  kk_ref_t _x_x5231 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
  _x_x5230 = kk_ref_get(_x_x5231,kk_context()); /*10000*/
  x_11292 = kk_std_core_types__list_unbox(_x_x5230, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11293 = kk_display__new_mlift_hc__parse__loop_11179_fun5232(remaining, _ctx); /*(list<string>) -> <local<23386>,exn,display/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11292, _ctx);
    kk_box_t _x_x5233 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11179_fun5234(next_11293, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5233); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11293, (next_11293, x_11292, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11180_fun5238__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11180_fun5238(kk_function_t _fself, kk_box_t _b_x1161, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11180_fun5238(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11180_fun5238, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11180_fun5238(kk_function_t _fself, kk_box_t _b_x1161, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5239;
  kk_display__clioption _match_x2550 = kk_display__clioption_unbox(_b_x1161, KK_OWNED, _ctx); /*display/clioption*/;
  {
    struct kk_display_Clioption* _con_x5240 = kk_display__as_Clioption(_match_x2550, _ctx);
    kk_string_t _x_22 = _con_x5240->opt__name;
    kk_string_t _pat_0_43 = _con_x5240->opt__short;
    kk_string_t _pat_1_33 = _con_x5240->opt__help;
    kk_string_t _pat_2_16 = _con_x5240->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2550, _ctx)) {
      kk_string_drop(_pat_2_16, _ctx);
      kk_string_drop(_pat_1_33, _ctx);
      kk_string_drop(_pat_0_43, _ctx);
      kk_datatype_ptr_free(_match_x2550, _ctx);
    }
    else {
      kk_string_dup(_x_22, _ctx);
      kk_datatype_ptr_decref(_match_x2550, _ctx);
    }
    _x_x5239 = _x_22; /*string*/
  }
  return kk_string_box(_x_x5239);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11180_fun5245__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11180_fun5245(kk_function_t _fself, kk_box_t _b_x1178, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11180_fun5245(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11180_fun5245__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11180_fun5245__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11180_fun5245, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11180_fun5245(kk_function_t _fself, kk_box_t _b_x1178, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11180_fun5245__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11180_fun5245__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_0_1180 = kk_Unit;
  kk_unit_unbox(_b_x1178);
  kk_unit_t _x_x5246 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11179(remaining, wild___4_0_1180, _ctx);
  return kk_unit_box(_x_x5246);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11180(kk_std_core_types__list _y_x10858, kk_display__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10862, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x1162_1168;
  kk_box_t _x_x5237 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11180_fun5238(_ctx), kk_display__clioption_box(o_0_0, _ctx), _ctx); /*10001*/
  _b_x1162_1168 = kk_string_unbox(_x_x5237); /*string*/
  kk_std_core_types__list _b_x1174_1176;
  kk_std_core_types__list _x_x5241;
  kk_box_t _x_x5242;
  kk_std_core_types__tuple2 _x_x5243 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x1162_1168), kk_string_box(_y_x10862), _ctx); /*(10037, 10038)*/
  _x_x5242 = kk_std_core_types__tuple2_box(_x_x5243, _ctx); /*10021*/
  _x_x5241 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5242, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1174_1176 = kk_std_core_list_append(_y_x10858, _x_x5241, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11296 = kk_Unit;
  kk_unit_t _brw_x2549 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1174_1176, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2549;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5244 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11180_fun5245(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5244); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11179(remaining, x_11296, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11181_fun5257__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11181_fun5257(kk_function_t _fself, kk_box_t _b_x1188, kk_box_t _b_x1189, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11181_fun5257(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11181_fun5257, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11181_fun5257(kk_function_t _fself, kk_box_t _b_x1188, kk_box_t _b_x1189, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5258;
  kk_std_core_types__maybe _match_x2547 = kk_std_core_types__maybe_unbox(_b_x1188, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2547, _ctx)) {
    kk_box_t _box_x1181 = _match_x2547._cons.Just.value;
    kk_string_t x_4 = kk_string_unbox(_box_x1181);
    kk_string_dup(x_4, _ctx);
    kk_std_core_types__maybe_drop(_match_x2547, _ctx);
    kk_box_drop(_b_x1189, _ctx);
    _x_x5258 = x_4; /*string*/
  }
  else {
    kk_string_t _b_x1182_1194;
    kk_string_t _x_x5259;
    kk_define_string_literal(static, _s_x5260, 22, "unexpected Nothing in ", _ctx)
    _x_x5259 = kk_string_dup(_s_x5260, _ctx); /*string*/
    kk_string_t _x_x5261 = kk_string_unbox(_b_x1189); /*string*/
    _b_x1182_1194 = kk_std_core_types__lp__plus__plus__rp_(_x_x5259, _x_x5261, _ctx); /*string*/
    kk_box_t _x_x5262 = kk_std_core_exn_throw(_b_x1182_1194, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5258 = kk_string_unbox(_x_x5262); /*string*/
  }
  return kk_string_box(_x_x5258);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11181_fun5264__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10858;
  kk_display__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11181_fun5264(kk_function_t _fself, kk_box_t _b_x1199, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11181_fun5264(kk_std_core_types__list _y_x10858, kk_display__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11181_fun5264__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11181_fun5264__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11181_fun5264, kk_context());
  _self->_y_x10858 = _y_x10858;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11181_fun5264(kk_function_t _fself, kk_box_t _b_x1199, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11181_fun5264__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11181_fun5264__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10858 = _self->_y_x10858; /* list<(string, string)> */
  kk_display__clioption o_0_0 = _self->o_0_0; /* display/clioption */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10858, _ctx);kk_display__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10862_1201 = kk_string_unbox(_b_x1199); /*string*/;
  kk_unit_t _x_x5265 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11180(_y_x10858, o_0_0, options, remaining, _y_x10862_1201, _ctx);
  return kk_unit_box(_x_x5265);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11181(kk_std_core_types__list _y_x10858, kk_display__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10861, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_38_11103 = kk_std_core_list__index(_y_x10861, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_20_11104;
  kk_string_t _x_x5247;
  kk_define_string_literal(static, _s_x5248, 10, "display.kk", _ctx)
  _x_x5247 = kk_string_dup(_s_x5248, _ctx); /*string*/
  kk_string_t _x_x5249;
  kk_string_t _x_x5250;
  kk_define_string_literal(static, _s_x5251, 1, "(", _ctx)
  _x_x5250 = kk_string_dup(_s_x5251, _ctx); /*string*/
  kk_string_t _x_x5252;
  kk_string_t _x_x5253 = kk_std_core_int_show(kk_integer_from_small(795), _ctx); /*string*/
  kk_string_t _x_x5254;
  kk_define_string_literal(static, _s_x5255, 1, ")", _ctx)
  _x_x5254 = kk_string_dup(_s_x5255, _ctx); /*string*/
  _x_x5252 = kk_std_core_types__lp__plus__plus__rp_(_x_x5253, _x_x5254, _ctx); /*string*/
  _x_x5249 = kk_std_core_types__lp__plus__plus__rp_(_x_x5250, _x_x5252, _ctx); /*string*/
  _x_x2_20_11104 = kk_std_core_types__lp__plus__plus__rp_(_x_x5247, _x_x5249, _ctx); /*string*/
  kk_ssize_t _b_x1184_1190 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11298;
  kk_box_t _x_x5256 = kk_std_core_hnd__open_at2(_b_x1184_1190, kk_display__new_mlift_hc__parse__loop_11181_fun5257(_ctx), kk_std_core_types__maybe_box(_x_x1_38_11103, _ctx), kk_string_box(_x_x2_20_11104), _ctx); /*10002*/
  x_11298 = kk_string_unbox(_x_x5256); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11298, _ctx);
    kk_box_t _x_x5263 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11181_fun5264(_y_x10858, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5263); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11180(_y_x10858, o_0_0, options, remaining, x_11298, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11182_fun5269__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10858;
  kk_display__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11182_fun5269(kk_function_t _fself, kk_box_t _b_x1207, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11182_fun5269(kk_std_core_types__list _y_x10858, kk_display__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11182_fun5269__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11182_fun5269__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11182_fun5269, kk_context());
  _self->_y_x10858 = _y_x10858;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11182_fun5269(kk_function_t _fself, kk_box_t _b_x1207, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11182_fun5269__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11182_fun5269__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10858 = _self->_y_x10858; /* list<(string, string)> */
  kk_display__clioption o_0_0 = _self->o_0_0; /* display/clioption */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10858, _ctx);kk_display__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10861_1209 = kk_std_core_types__list_unbox(_b_x1207, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5270 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11181(_y_x10858, o_0_0, options, remaining, _y_x10861_1209, _ctx);
  return kk_unit_box(_x_x5270);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11182(kk_display__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10858, kk_context_t* _ctx) { /* forall<h> (o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11300;
  kk_box_t _x_x5266;
  kk_ref_t _x_x5267 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
  _x_x5266 = kk_ref_get(_x_x5267,kk_context()); /*10000*/
  x_11300 = kk_std_core_types__list_unbox(_x_x5266, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11300, _ctx);
    kk_box_t _x_x5268 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11182_fun5269(_y_x10858, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5268); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11181(_y_x10858, o_0_0, options, remaining, x_11300, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11183_fun5279__t {
  struct kk_function_s _base;
  kk_display__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11183_fun5279(kk_function_t _fself, kk_box_t _b_x1217, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11183_fun5279(kk_display__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11183_fun5279__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11183_fun5279__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11183_fun5279, kk_context());
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11183_fun5279(kk_function_t _fself, kk_box_t _b_x1217, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11183_fun5279__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11183_fun5279__t*, _fself, _ctx);
  kk_display__clioption o_0_0 = _self->o_0_0; /* display/clioption */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_display__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10858_1221 = kk_std_core_types__list_unbox(_b_x1217, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5280 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11182(o_0_0, options, remaining, _y_x10858_1221, _ctx);
  return kk_unit_box(_x_x5280);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11183(kk_ref_t error, kk_display__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_std_core_types__list _y_x10856, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2540;
  kk_integer_t _brw_x2543 = kk_std_core_list__lift_length_6003(_y_x10856, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2544 = kk_integer_eq_borrow(_brw_x2543,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2543, _ctx);
  _match_x2540 = _brw_x2544; /*bool*/
  if (_match_x2540) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_0_0, (KK_I32(4)), _ctx);
    kk_string_t _b_x1211_1219;
    kk_string_t _x_x5271;
    kk_define_string_literal(static, _s_x5272, 8, "option -", _ctx)
    _x_x5271 = kk_string_dup(_s_x5272, _ctx); /*string*/
    kk_string_t _x_x5273;
    kk_string_t _x_x5274;
    kk_define_string_literal(static, _s_x5275, 17, " requires a value", _ctx)
    _x_x5274 = kk_string_dup(_s_x5275, _ctx); /*string*/
    _x_x5273 = kk_std_core_types__lp__plus__plus__rp_(s_0_0, _x_x5274, _ctx); /*string*/
    _b_x1211_1219 = kk_std_core_types__lp__plus__plus__rp_(_x_x5271, _x_x5273, _ctx); /*string*/
    kk_unit_t _brw_x2542 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1211_1219)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2542; return kk_Unit;
  }
  {
    kk_string_drop(s_0_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11302;
    kk_box_t _x_x5276;
    kk_ref_t _x_x5277 = kk_ref_dup(options, _ctx); /*local-var<23386,list<(string, string)>>*/
    _x_x5276 = kk_ref_get(_x_x5277,kk_context()); /*10000*/
    x_11302 = kk_std_core_types__list_unbox(_x_x5276, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11302, _ctx);
      kk_box_t _x_x5278 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11183_fun5279(o_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5278); return kk_Unit;
    }
    {
      kk_display__mlift_hc__parse__loop_11182(o_0_0, options, remaining, x_11302, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11184_fun5282__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11184_fun5282(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11184_fun5282(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11184_fun5282, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11184_fun5282(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11304 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<display/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5283 = kk_std_core_hnd__as_Ev(ev_11304, _ctx);
    kk_box_t _box_x1222 = _con_x5283->hnd;
    int32_t m = _con_x5283->marker;
    kk_display__hica_brk h = kk_display__hica_brk_unbox(_box_x1222, KK_BORROWED, _ctx);
    kk_display__hica_brk_dup(h, _ctx);
    {
      struct kk_display__Hnd_hica_brk* _con_x5284 = kk_display__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5284->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5284->_ctl_hica_break;
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
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1225, (_fun_unbox_x1225, m, ev_11304, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_display__mlift_hc__parse__loop_11184(kk_unit_t wild___6_0, kk_context_t* _ctx) { /* forall<h> (wild_@6@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1228_1230 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5281 = kk_std_core_hnd__open_at0(_b_x1228_1230, kk_display__new_mlift_hc__parse__loop_11184_fun5282(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5281); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11185_fun5286__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11185_fun5286(kk_function_t _fself, kk_box_t _b_x1237, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11185_fun5286(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11185_fun5286, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11185_fun5286(kk_function_t _fself, kk_box_t _b_x1237, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_0_1239 = kk_Unit;
  kk_unit_unbox(_b_x1237);
  kk_unit_t _x_x5287 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11184(wild___6_0_1239, _ctx);
  return kk_unit_box(_x_x5287);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11185(kk_ref_t sub__args, kk_std_core_types__list _y_x10871, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11306 = kk_Unit;
  kk_unit_t _brw_x2539 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10871, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2539;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5285 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11185_fun5286(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5285); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11184(x_11306, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11186_fun5290__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11186_fun5290(kk_function_t _fself, kk_box_t _b_x1245, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11186_fun5290(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11186_fun5290__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11186_fun5290__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11186_fun5290, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11186_fun5290(kk_function_t _fself, kk_box_t _b_x1245, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11186_fun5290__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11186_fun5290__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10871_1247 = kk_std_core_types__list_unbox(_b_x1245, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5291 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11185(sub__args, _y_x10871_1247, _ctx);
  return kk_unit_box(_x_x5291);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11186(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11308;
  kk_box_t _x_x5288 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11308 = kk_std_core_types__list_unbox(_x_x5288, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11308, _ctx);
    kk_box_t _x_x5289 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11186_fun5290(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5289); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11185(sub__args, x_11308, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_display__mlift_hc__parse__loop_11187(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10875, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1251_1253;
  kk_std_core_types__list _x_x5292 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1251_1253 = kk_std_core_list_append(_y_x10875, _x_x5292, _ctx); /*list<string>*/
  kk_unit_t _brw_x2536 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1251_1253, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2536; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5300__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5300(kk_function_t _fself, kk_box_t _b_x1261, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5300(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5300, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5300(kk_function_t _fself, kk_box_t _b_x1261, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_1751 = kk_Unit;
  kk_unit_unbox(_b_x1261);
  kk_unit_t _x_x5301 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11143(wild___0_1751, _ctx);
  return kk_unit_box(_x_x5301);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5309__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5309(kk_function_t _fself, kk_box_t _b_x1267, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5309(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5309, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5309(kk_function_t _fself, kk_box_t _b_x1267, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_0_1752 = kk_Unit;
  kk_unit_unbox(_b_x1267);
  kk_unit_t _x_x5310 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11144(wild___0_0_1752, _ctx);
  return kk_unit_box(_x_x5310);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5318__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5318(kk_function_t _fself, kk_box_t _b_x1273, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5318(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5318, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5318(kk_function_t _fself, kk_box_t _b_x1273, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___1_1753 = kk_Unit;
  kk_unit_unbox(_b_x1273);
  kk_unit_t _x_x5319 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11145(wild___1_1753, _ctx);
  return kk_unit_box(_x_x5319);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5326__t {
  struct kk_function_s _base;
  kk_ref_t positionals;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5326(kk_function_t _fself, kk_box_t _b_x1279, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5326(kk_ref_t positionals, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5326__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5326__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5326, kk_context());
  _self->positionals = positionals;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5326(kk_function_t _fself, kk_box_t _b_x1279, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5326__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5326__t*, _fself, _ctx);
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10781_1754 = kk_std_core_types__list_unbox(_b_x1279, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5327 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11148(positionals, remaining, _y_x10781_1754, _ctx);
  return kk_unit_box(_x_x5327);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5332__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5332(kk_function_t _fself, kk_box_t _b_x1283, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5332(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5332, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5332(kk_function_t _fself, kk_box_t _b_x1283, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5333;
  kk_std_core_types__maybe maybe_1772 = kk_std_core_types__maybe_unbox(_b_x1283, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1772, _ctx)) {
    kk_box_t _box_x1280 = maybe_1772._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1772, _ctx);
    _x_x5333 = true; /*bool*/
  }
  else {
    _x_x5333 = false; /*bool*/
  }
  return kk_bool_box(_x_x5333);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5338__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5338(kk_function_t _fself, kk_box_t _b_x1288, kk_box_t _b_x1289, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5338(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5338, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5338(kk_function_t _fself, kk_box_t _b_x1288, kk_box_t _b_x1289, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_0_10704;
  kk_string_t _x_x5339;
  kk_box_t _x_x5340 = kk_box_dup(_b_x1288, _ctx); /*10000*/
  _x_x5339 = kk_string_unbox(_x_x5340); /*string*/
  kk_string_t _x_x5341;
  kk_box_t _x_x5342 = kk_box_dup(_b_x1289, _ctx); /*10001*/
  _x_x5341 = kk_string_unbox(_x_x5342); /*string*/
  maybe_0_10704 = kk_std_core_sslice_starts_with(_x_x5339, _x_x5341, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5343;
  if (kk_std_core_types__is_Just(maybe_0_10704, _ctx)) {
    kk_box_t _box_x1284 = maybe_0_10704._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_0_10704, _ctx);
    kk_std_core_types__list _x_x5344;
    kk_std_core_types__list _x_x5345;
    kk_string_t _x_x5346 = kk_string_unbox(_b_x1288); /*string*/
    _x_x5345 = kk_std_core_string_list(_x_x5346, _ctx); /*list<char>*/
    kk_integer_t _x_x5347;
    kk_string_t _x_x5348 = kk_string_unbox(_b_x1289); /*string*/
    _x_x5347 = kk_std_core_string_chars_fs_count(_x_x5348, _ctx); /*int*/
    _x_x5344 = kk_std_core_list_drop(_x_x5345, _x_x5347, _ctx); /*list<10001>*/
    _x_x5343 = kk_std_core_string_listchar_fs_string(_x_x5344, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1289, _ctx);
    _x_x5343 = kk_string_unbox(_b_x1288); /*string*/
  }
  return kk_string_box(_x_x5343);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5356__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5356(kk_function_t _fself, kk_box_t _b_x1297, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5356(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5356, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5356(kk_function_t _fself, kk_box_t _b_x1297, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5357;
  kk_char_t _x_x5358 = kk_char_unbox(_b_x1297, KK_OWNED, _ctx); /*char*/
  _x_x5357 = kk_std_core_string_char_fs_string(_x_x5358, _ctx); /*string*/
  return kk_string_box(_x_x5357);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5360__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5360(kk_function_t _fself, kk_box_t _b_x1301, kk_box_t _b_x1302, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5360(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5360, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5360(kk_function_t _fself, kk_box_t _b_x1301, kk_box_t _b_x1302, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011;
  kk_string_t _x_x5361 = kk_string_unbox(_b_x1301); /*string*/
  kk_string_t _x_x5362 = kk_string_unbox(_b_x1302); /*string*/
  v_10011 = kk_string_splitv(_x_x5361,_x_x5362,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x5363 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x5363, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5368__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t options;
  kk_display__clispec spec;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5368(kk_function_t _fself, kk_box_t _b_x1311, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5368(kk_ref_t error, kk_ref_t options, kk_display__clispec spec, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5368__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5368__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5368, kk_context());
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5368(kk_function_t _fself, kk_box_t _b_x1311, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5368__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5368__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23386,string> */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_display__clispec spec = _self->spec; /* display/clispec */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_display__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list _c_x10787_1755 = kk_std_core_types__list_unbox(_b_x1311, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5369 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11151(error, options, spec, _c_x10787_1755, _ctx);
  return kk_unit_box(_x_x5369);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5374__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5374(kk_function_t _fself, kk_box_t _b_x1315, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5374(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5374, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5374(kk_function_t _fself, kk_box_t _b_x1315, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5375;
  kk_std_core_types__maybe maybe_1_1773 = kk_std_core_types__maybe_unbox(_b_x1315, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1_1773, _ctx)) {
    kk_box_t _box_x1312 = maybe_1_1773._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1_1773, _ctx);
    _x_x5375 = true; /*bool*/
  }
  else {
    _x_x5375 = false; /*bool*/
  }
  return kk_bool_box(_x_x5375);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5377__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5377(kk_function_t _fself, kk_box_t _b_x1320, kk_box_t _b_x1321, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5377(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5377, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5377(kk_function_t _fself, kk_box_t _b_x1320, kk_box_t _b_x1321, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_2_10706;
  kk_string_t _x_x5378;
  kk_box_t _x_x5379 = kk_box_dup(_b_x1320, _ctx); /*10000*/
  _x_x5378 = kk_string_unbox(_x_x5379); /*string*/
  kk_string_t _x_x5380;
  kk_box_t _x_x5381 = kk_box_dup(_b_x1321, _ctx); /*10001*/
  _x_x5380 = kk_string_unbox(_x_x5381); /*string*/
  maybe_2_10706 = kk_std_core_sslice_starts_with(_x_x5378, _x_x5380, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5382;
  if (kk_std_core_types__is_Just(maybe_2_10706, _ctx)) {
    kk_box_t _box_x1316 = maybe_2_10706._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_2_10706, _ctx);
    kk_std_core_types__list _x_x5383;
    kk_std_core_types__list _x_x5384;
    kk_string_t _x_x5385 = kk_string_unbox(_b_x1320); /*string*/
    _x_x5384 = kk_std_core_string_list(_x_x5385, _ctx); /*list<char>*/
    kk_integer_t _x_x5386;
    kk_string_t _x_x5387 = kk_string_unbox(_b_x1321); /*string*/
    _x_x5386 = kk_std_core_string_chars_fs_count(_x_x5387, _ctx); /*int*/
    _x_x5383 = kk_std_core_list_drop(_x_x5384, _x_x5386, _ctx); /*list<10001>*/
    _x_x5382 = kk_std_core_string_listchar_fs_string(_x_x5383, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1321, _ctx);
    _x_x5382 = kk_string_unbox(_b_x1320); /*string*/
  }
  return kk_string_box(_x_x5382);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5392__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5392(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5392(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5392, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5392(kk_function_t _fself, kk_box_t _b_x1329, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5393;
  kk_display__clispec _match_x2524 = kk_display__clispec_unbox(_b_x1329, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5394 = kk_display__as_Clispec(_match_x2524, _ctx);
    kk_string_t _pat_0_11 = _con_x5394->app__name;
    kk_string_t _pat_1_8 = _con_x5394->app__version;
    kk_string_t _pat_2_2 = _con_x5394->app__about;
    kk_std_core_types__list _x_2 = _con_x5394->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x5394->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x5394->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5394->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2524, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_string_drop(_pat_2_2, _ctx);
      kk_string_drop(_pat_1_8, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2524, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2524, _ctx);
    }
    _x_x5393 = _x_2; /*list<display/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5393, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5398__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5398(kk_function_t _fself, kk_box_t _b_x1339, kk_box_t _b_x1340, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5398(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5398, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5400__t {
  struct kk_function_s _base;
  kk_string_t name_1_1775;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5400(kk_function_t _fself, kk_box_t _b_x1335, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5400(kk_string_t name_1_1775, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5400__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5400__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5400, kk_context());
  _self->name_1_1775 = name_1_1775;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5400(kk_function_t _fself, kk_box_t _b_x1335, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5400__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5400__t*, _fself, _ctx);
  kk_string_t name_1_1775 = _self->name_1_1775; /* string */
  kk_drop_match(_self, {kk_string_dup(name_1_1775, _ctx);}, {}, _ctx)
  kk_string_t _x_x5401;
  kk_display__cliflag _match_x2523 = kk_display__cliflag_unbox(_b_x1335, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x5402 = kk_display__as_Cliflag(_match_x2523, _ctx);
    kk_string_t _x_1 = _con_x5402->flag__name;
    kk_string_t _pat_0_10 = _con_x5402->flag__short;
    kk_string_t _pat_1_7 = _con_x5402->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2523, _ctx)) {
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_10, _ctx);
      kk_datatype_ptr_free(_match_x2523, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2523, _ctx);
    }
    _x_x5401 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x5401,name_1_1775,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5398(kk_function_t _fself, kk_box_t _b_x1339, kk_box_t _b_x1340, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5399;
  kk_std_core_types__list flags_0_1774 = kk_std_core_types__list_unbox(_b_x1339, KK_OWNED, _ctx); /*list<display/cliflag>*/;
  kk_string_t name_1_1775 = kk_string_unbox(_b_x1340); /*string*/;
  _x_x5399 = kk_std_core_list_find(flags_0_1774, kk_display__new_mlift_hc__parse__loop_11188_fun5400(name_1_1775, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5399, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5408__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5408(kk_function_t _fself, kk_std_core_types__list _y_x10795, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5408(kk_ref_t flags, kk_string_t name_0_0, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5408__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5408__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5408, kk_context());
  _self->flags = flags;
  _self->name_0_0 = name_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5408(kk_function_t _fself, kk_std_core_types__list _y_x10795, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5408__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5408__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23386,list<string>> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1349_1351;
  kk_std_core_types__list _x_x5409 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1349_1351 = kk_std_core_list_append(_y_x10795, _x_x5409, _ctx); /*list<string>*/
  kk_unit_t _brw_x2522 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1349_1351, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2522; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5411__t {
  struct kk_function_s _base;
  kk_function_t next_4_11321;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5411(kk_function_t _fself, kk_box_t _b_x1355, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5411(kk_function_t next_4_11321, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5411__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5411__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5411, kk_context());
  _self->next_4_11321 = next_4_11321;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5411(kk_function_t _fself, kk_box_t _b_x1355, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5411__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5411__t*, _fself, _ctx);
  kk_function_t next_4_11321 = _self->next_4_11321; /* (list<string>) -> <local<23386>,exn,display/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_4_11321, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5412 = kk_Unit;
  kk_std_core_types__list _x_x5413 = kk_std_core_types__list_unbox(_b_x1355, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11321, (next_4_11321, _x_x5413, _ctx), _ctx);
  return kk_unit_box(_x_x5412);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5415__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5415(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5415(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5415, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5415(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5416;
  kk_display__clispec _match_x2520 = kk_display__clispec_unbox(_b_x1358, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5417 = kk_display__as_Clispec(_match_x2520, _ctx);
    kk_string_t _pat_0_13 = _con_x5417->app__name;
    kk_string_t _pat_1_10 = _con_x5417->app__version;
    kk_string_t _pat_2_4 = _con_x5417->app__about;
    kk_std_core_types__list _pat_3_2 = _con_x5417->app__flags;
    kk_std_core_types__list _x_4 = _con_x5417->app__options;
    kk_std_core_types__list _pat_4_2 = _con_x5417->app__args;
    kk_std_core_types__list _pat_5_2 = _con_x5417->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2520, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_std_core_types__list_drop(_pat_3_2, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_10, _ctx);
      kk_string_drop(_pat_0_13, _ctx);
      kk_datatype_ptr_free(_match_x2520, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2520, _ctx);
    }
    _x_x5416 = _x_4; /*list<display/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5416, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5419__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5419(kk_function_t _fself, kk_box_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5419(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5419, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5421__t {
  struct kk_function_s _base;
  kk_string_t name_2_1777;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5421(kk_function_t _fself, kk_box_t _b_x1364, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5421(kk_string_t name_2_1777, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5421__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5421__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5421, kk_context());
  _self->name_2_1777 = name_2_1777;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5421(kk_function_t _fself, kk_box_t _b_x1364, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5421__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5421__t*, _fself, _ctx);
  kk_string_t name_2_1777 = _self->name_2_1777; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2_1777, _ctx);}, {}, _ctx)
  kk_string_t _x_x5422;
  kk_display__clioption _match_x2519 = kk_display__clioption_unbox(_b_x1364, KK_OWNED, _ctx); /*display/clioption*/;
  {
    struct kk_display_Clioption* _con_x5423 = kk_display__as_Clioption(_match_x2519, _ctx);
    kk_string_t _x_3 = _con_x5423->opt__name;
    kk_string_t _pat_0_12 = _con_x5423->opt__short;
    kk_string_t _pat_1_9 = _con_x5423->opt__help;
    kk_string_t _pat_2_3 = _con_x5423->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2519, _ctx)) {
      kk_string_drop(_pat_2_3, _ctx);
      kk_string_drop(_pat_1_9, _ctx);
      kk_string_drop(_pat_0_12, _ctx);
      kk_datatype_ptr_free(_match_x2519, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2519, _ctx);
    }
    _x_x5422 = _x_3; /*string*/
  }
  return kk_string_is_eq(_x_x5422,name_2_1777,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5419(kk_function_t _fself, kk_box_t _b_x1368, kk_box_t _b_x1369, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5420;
  kk_std_core_types__list options_1_1776 = kk_std_core_types__list_unbox(_b_x1368, KK_OWNED, _ctx); /*list<display/clioption>*/;
  kk_string_t name_2_1777 = kk_string_unbox(_b_x1369); /*string*/;
  _x_x5420 = kk_std_core_list_find(options_1_1776, kk_display__new_mlift_hc__parse__loop_11188_fun5421(name_2_1777, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5420, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5430__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5430(kk_function_t _fself, kk_box_t _b_x1376, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5430(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5430__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5430__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5430, kk_context());
  _self->error = error;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5430(kk_function_t _fself, kk_box_t _b_x1376, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5430__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5430__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23386,string> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10797_1758 = kk_std_core_types__list_unbox(_b_x1376, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5431 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11158(error, name_0_0, options, remaining, _y_x10797_1758, _ctx);
  return kk_unit_box(_x_x5431);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5438__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5438(kk_function_t _fself, kk_box_t _b_x1382, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5438(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5438, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5438(kk_function_t _fself, kk_box_t _b_x1382, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5439;
  kk_std_core_types__maybe maybe_3_1778 = kk_std_core_types__maybe_unbox(_b_x1382, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_3_1778, _ctx)) {
    kk_box_t _box_x1379 = maybe_3_1778._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_3_1778, _ctx);
    _x_x5439 = true; /*bool*/
  }
  else {
    _x_x5439 = false; /*bool*/
  }
  return kk_bool_box(_x_x5439);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5441__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5441(kk_function_t _fself, kk_box_t _b_x1387, kk_box_t _b_x1388, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5441(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5441, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5441(kk_function_t _fself, kk_box_t _b_x1387, kk_box_t _b_x1388, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_4_10709;
  kk_string_t _x_x5442;
  kk_box_t _x_x5443 = kk_box_dup(_b_x1387, _ctx); /*10000*/
  _x_x5442 = kk_string_unbox(_x_x5443); /*string*/
  kk_string_t _x_x5444;
  kk_box_t _x_x5445 = kk_box_dup(_b_x1388, _ctx); /*10001*/
  _x_x5444 = kk_string_unbox(_x_x5445); /*string*/
  maybe_4_10709 = kk_std_core_sslice_starts_with(_x_x5442, _x_x5444, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5446;
  if (kk_std_core_types__is_Just(maybe_4_10709, _ctx)) {
    kk_box_t _box_x1383 = maybe_4_10709._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_4_10709, _ctx);
    kk_std_core_types__list _x_x5447;
    kk_std_core_types__list _x_x5448;
    kk_string_t _x_x5449 = kk_string_unbox(_b_x1387); /*string*/
    _x_x5448 = kk_std_core_string_list(_x_x5449, _ctx); /*list<char>*/
    kk_integer_t _x_x5450;
    kk_string_t _x_x5451 = kk_string_unbox(_b_x1388); /*string*/
    _x_x5450 = kk_std_core_string_chars_fs_count(_x_x5451, _ctx); /*int*/
    _x_x5447 = kk_std_core_list_drop(_x_x5448, _x_x5450, _ctx); /*list<10001>*/
    _x_x5446 = kk_std_core_string_listchar_fs_string(_x_x5447, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1388, _ctx);
    _x_x5446 = kk_string_unbox(_b_x1387); /*string*/
  }
  return kk_string_box(_x_x5446);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5456__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5456(kk_function_t _fself, kk_box_t _b_x1396, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5456(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5456, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5456(kk_function_t _fself, kk_box_t _b_x1396, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5457;
  kk_display__clispec _match_x2514 = kk_display__clispec_unbox(_b_x1396, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5458 = kk_display__as_Clispec(_match_x2514, _ctx);
    kk_string_t _pat_0_19 = _con_x5458->app__name;
    kk_string_t _pat_1_14 = _con_x5458->app__version;
    kk_string_t _pat_2_5 = _con_x5458->app__about;
    kk_std_core_types__list _x_6 = _con_x5458->app__flags;
    kk_std_core_types__list _pat_3_3 = _con_x5458->app__options;
    kk_std_core_types__list _pat_4_3 = _con_x5458->app__args;
    kk_std_core_types__list _pat_5_3 = _con_x5458->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2514, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_3, _ctx);
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_string_drop(_pat_2_5, _ctx);
      kk_string_drop(_pat_1_14, _ctx);
      kk_string_drop(_pat_0_19, _ctx);
      kk_datatype_ptr_free(_match_x2514, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2514, _ctx);
    }
    _x_x5457 = _x_6; /*list<display/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5457, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5462__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5462(kk_function_t _fself, kk_box_t _b_x1406, kk_box_t _b_x1407, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5462(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5462, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5464__t {
  struct kk_function_s _base;
  kk_string_t s_6_1780;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5464(kk_function_t _fself, kk_box_t _b_x1402, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5464(kk_string_t s_6_1780, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5464__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5464__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5464, kk_context());
  _self->s_6_1780 = s_6_1780;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5464(kk_function_t _fself, kk_box_t _b_x1402, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5464__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5464__t*, _fself, _ctx);
  kk_string_t s_6_1780 = _self->s_6_1780; /* string */
  kk_drop_match(_self, {kk_string_dup(s_6_1780, _ctx);}, {}, _ctx)
  kk_string_t _x_x5465;
  kk_display__cliflag _match_x2513 = kk_display__cliflag_unbox(_b_x1402, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x5466 = kk_display__as_Cliflag(_match_x2513, _ctx);
    kk_string_t _pat_0_18 = _con_x5466->flag__name;
    kk_string_t _x_5 = _con_x5466->flag__short;
    kk_string_t _pat_1_13 = _con_x5466->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2513, _ctx)) {
      kk_string_drop(_pat_1_13, _ctx);
      kk_string_drop(_pat_0_18, _ctx);
      kk_datatype_ptr_free(_match_x2513, _ctx);
    }
    else {
      kk_string_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2513, _ctx);
    }
    _x_x5465 = _x_5; /*string*/
  }
  return kk_string_is_eq(_x_x5465,s_6_1780,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5462(kk_function_t _fself, kk_box_t _b_x1406, kk_box_t _b_x1407, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5463;
  kk_std_core_types__list flags_1_0_1779 = kk_std_core_types__list_unbox(_b_x1406, KK_OWNED, _ctx); /*list<display/cliflag>*/;
  kk_string_t s_6_1780 = kk_string_unbox(_b_x1407); /*string*/;
  _x_x5463 = kk_std_core_list_find(flags_1_0_1779, kk_display__new_mlift_hc__parse__loop_11188_fun5464(s_6_1780, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5463, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5472__t {
  struct kk_function_s _base;
  kk_display__cliflag f_1;
  kk_ref_t flags;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5472(kk_function_t _fself, kk_std_core_types__list _y_x10811, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5472(kk_display__cliflag f_1, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5472__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5472__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5472, kk_context());
  _self->f_1 = f_1;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5474__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5474(kk_function_t _fself, kk_box_t _b_x1415, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5474(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5474, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5474(kk_function_t _fself, kk_box_t _b_x1415, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5475;
  kk_display__cliflag _match_x2512 = kk_display__cliflag_unbox(_b_x1415, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x5476 = kk_display__as_Cliflag(_match_x2512, _ctx);
    kk_string_t _x_7 = _con_x5476->flag__name;
    kk_string_t _pat_0_20 = _con_x5476->flag__short;
    kk_string_t _pat_1_15 = _con_x5476->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2512, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2512, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2512, _ctx);
    }
    _x_x5475 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5475);
}
static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5472(kk_function_t _fself, kk_std_core_types__list _y_x10811, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5472__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5472__t*, _fself, _ctx);
  kk_display__cliflag f_1 = _self->f_1; /* display/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_display__cliflag_dup(f_1, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1416_1418;
  kk_box_t _x_x5473 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5474(_ctx), kk_display__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x1416_1418 = kk_string_unbox(_x_x5473); /*string*/
  kk_std_core_types__list _b_x1424_1426;
  kk_std_core_types__list _x_x5477 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1416_1418), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1424_1426 = kk_std_core_list_append(_y_x10811, _x_x5477, _ctx); /*list<string>*/
  kk_unit_t _brw_x2511 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1424_1426, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2511; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5479__t {
  struct kk_function_s _base;
  kk_function_t next_6_11328;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5479(kk_function_t _fself, kk_box_t _b_x1428, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5479(kk_function_t next_6_11328, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5479__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5479__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5479, kk_context());
  _self->next_6_11328 = next_6_11328;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5479(kk_function_t _fself, kk_box_t _b_x1428, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5479__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5479__t*, _fself, _ctx);
  kk_function_t next_6_11328 = _self->next_6_11328; /* (list<string>) -> <local<23386>,exn,display/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_6_11328, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5480 = kk_Unit;
  kk_std_core_types__list _x_x5481 = kk_std_core_types__list_unbox(_b_x1428, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11328, (next_6_11328, _x_x5481, _ctx), _ctx);
  return kk_unit_box(_x_x5480);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5483__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5483(kk_function_t _fself, kk_box_t _b_x1431, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5483(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5483, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5483(kk_function_t _fself, kk_box_t _b_x1431, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5484;
  kk_display__clispec _match_x2509 = kk_display__clispec_unbox(_b_x1431, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5485 = kk_display__as_Clispec(_match_x2509, _ctx);
    kk_string_t _pat_0_22 = _con_x5485->app__name;
    kk_string_t _pat_1_17 = _con_x5485->app__version;
    kk_string_t _pat_2_7 = _con_x5485->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x5485->app__flags;
    kk_std_core_types__list _x_9 = _con_x5485->app__options;
    kk_std_core_types__list _pat_4_4 = _con_x5485->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x5485->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2509, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_17, _ctx);
      kk_string_drop(_pat_0_22, _ctx);
      kk_datatype_ptr_free(_match_x2509, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2509, _ctx);
    }
    _x_x5484 = _x_9; /*list<display/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5484, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5487__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5487(kk_function_t _fself, kk_box_t _b_x1441, kk_box_t _b_x1442, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5487(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5487, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5489__t {
  struct kk_function_s _base;
  kk_string_t s_7_1782;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5489(kk_function_t _fself, kk_box_t _b_x1437, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5489(kk_string_t s_7_1782, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5489__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5489__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5489, kk_context());
  _self->s_7_1782 = s_7_1782;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5489(kk_function_t _fself, kk_box_t _b_x1437, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5489__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5489__t*, _fself, _ctx);
  kk_string_t s_7_1782 = _self->s_7_1782; /* string */
  kk_drop_match(_self, {kk_string_dup(s_7_1782, _ctx);}, {}, _ctx)
  kk_string_t _x_x5490;
  kk_display__clioption _match_x2508 = kk_display__clioption_unbox(_b_x1437, KK_OWNED, _ctx); /*display/clioption*/;
  {
    struct kk_display_Clioption* _con_x5491 = kk_display__as_Clioption(_match_x2508, _ctx);
    kk_string_t _pat_0_21 = _con_x5491->opt__name;
    kk_string_t _x_8 = _con_x5491->opt__short;
    kk_string_t _pat_1_16 = _con_x5491->opt__help;
    kk_string_t _pat_2_6 = _con_x5491->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2508, _ctx)) {
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_16, _ctx);
      kk_string_drop(_pat_0_21, _ctx);
      kk_datatype_ptr_free(_match_x2508, _ctx);
    }
    else {
      kk_string_dup(_x_8, _ctx);
      kk_datatype_ptr_decref(_match_x2508, _ctx);
    }
    _x_x5490 = _x_8; /*string*/
  }
  return kk_string_is_eq(_x_x5490,s_7_1782,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5487(kk_function_t _fself, kk_box_t _b_x1441, kk_box_t _b_x1442, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5488;
  kk_std_core_types__list options_2_1781 = kk_std_core_types__list_unbox(_b_x1441, KK_OWNED, _ctx); /*list<display/clioption>*/;
  kk_string_t s_7_1782 = kk_string_unbox(_b_x1442); /*string*/;
  _x_x5488 = kk_std_core_list_find(options_2_1781, kk_display__new_mlift_hc__parse__loop_11188_fun5489(s_7_1782, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5488, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5498__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_display__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_5;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5498(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5498(kk_ref_t error, kk_display__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5498__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5498__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5498, kk_context());
  _self->error = error;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_5 = s_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5498(kk_function_t _fself, kk_box_t _b_x1449, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5498__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5498__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23386,string> */
  kk_display__clioption o_2 = _self->o_2; /* display/clioption */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_string_t s_5 = _self->s_5; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_display__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_5, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10813_1761 = kk_std_core_types__list_unbox(_b_x1449, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5499 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11165(error, o_2, options, remaining, s_5, _y_x10813_1761, _ctx);
  return kk_unit_box(_x_x5499);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5503__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5503(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5503(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5503, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5503(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5504;
  kk_display__clispec _match_x2503 = kk_display__clispec_unbox(_b_x1454, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5505 = kk_display__as_Clispec(_match_x2503, _ctx);
    kk_string_t _pat_0_26 = _con_x5505->app__name;
    kk_string_t _pat_1_19 = _con_x5505->app__version;
    kk_string_t _pat_2_9 = _con_x5505->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x5505->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x5505->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x5505->app__args;
    kk_std_core_types__list _x_12 = _con_x5505->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2503, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_5, _ctx);
      kk_std_core_types__list_drop(_pat_4_5, _ctx);
      kk_std_core_types__list_drop(_pat_3_5, _ctx);
      kk_string_drop(_pat_2_9, _ctx);
      kk_string_drop(_pat_1_19, _ctx);
      kk_string_drop(_pat_0_26, _ctx);
      kk_datatype_ptr_free(_match_x2503, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_12, _ctx);
      kk_datatype_ptr_decref(_match_x2503, _ctx);
    }
    _x_x5504 = _x_12; /*list<(string, display/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5504, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5507__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5507(kk_function_t _fself, kk_box_t _b_x1466, kk_box_t _b_x1467, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5507(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5507, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5509__t {
  struct kk_function_s _base;
  kk_string_t name_3_1784;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5509(kk_function_t _fself, kk_box_t _b_x1462, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5509(kk_string_t name_3_1784, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5509__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5509__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5509, kk_context());
  _self->name_3_1784 = name_3_1784;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5509(kk_function_t _fself, kk_box_t _b_x1462, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5509__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5509__t*, _fself, _ctx);
  kk_string_t name_3_1784 = _self->name_3_1784; /* string */
  kk_drop_match(_self, {kk_string_dup(name_3_1784, _ctx);}, {}, _ctx)
  kk_string_t _x_x5510;
  kk_std_core_types__tuple2 _match_x2502 = kk_std_core_types__tuple2_unbox(_b_x1462, KK_OWNED, _ctx); /*(string, display/clispec)*/;
  {
    kk_box_t _box_x1458 = _match_x2502.fst;
    kk_box_t _box_x1459 = _match_x2502.snd;
    kk_string_t _x_11 = kk_string_unbox(_box_x1458);
    kk_string_dup(_x_11, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2502, _ctx);
    _x_x5510 = _x_11; /*string*/
  }
  return kk_string_is_eq(_x_x5510,name_3_1784,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5507(kk_function_t _fself, kk_box_t _b_x1466, kk_box_t _b_x1467, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5508;
  kk_std_core_types__list commands_1783 = kk_std_core_types__list_unbox(_b_x1466, KK_OWNED, _ctx); /*list<(string, display/clispec)>*/;
  kk_string_t name_3_1784 = kk_string_unbox(_b_x1467); /*string*/;
  _x_x5508 = kk_std_core_list_find(commands_1783, kk_display__new_mlift_hc__parse__loop_11188_fun5509(name_3_1784, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5508, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5514__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5514(kk_function_t _fself, kk_box_t _b_x1474, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5514(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5514__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5514__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5514, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5514(kk_function_t _fself, kk_box_t _b_x1474, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5514__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5514__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_1763 = kk_Unit;
  kk_unit_unbox(_b_x1474);
  kk_unit_t _x_x5515 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11168(remaining, sub__args, wild___5_1763, _ctx);
  return kk_unit_box(_x_x5515);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5518__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5518(kk_function_t _fself, kk_std_core_types__list _y_x10832, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5518(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5518__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5518__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5518, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5518(kk_function_t _fself, kk_std_core_types__list _y_x10832, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5518__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5518__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1482_1484;
  kk_std_core_types__list _x_x5519 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1482_1484 = kk_std_core_list_append(_y_x10832, _x_x5519, _ctx); /*list<string>*/
  kk_unit_t _brw_x2499 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1482_1484, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2499; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5521__t {
  struct kk_function_s _base;
  kk_function_t next_9_11337;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5521(kk_function_t _fself, kk_box_t _b_x1488, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5521(kk_function_t next_9_11337, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5521__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5521__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5521, kk_context());
  _self->next_9_11337 = next_9_11337;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5521(kk_function_t _fself, kk_box_t _b_x1488, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5521__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5521__t*, _fself, _ctx);
  kk_function_t next_9_11337 = _self->next_9_11337; /* (list<string>) -> <local<23386>,display/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_9_11337, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5522 = kk_Unit;
  kk_std_core_types__list _x_x5523 = kk_std_core_types__list_unbox(_b_x1488, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11337, (next_9_11337, _x_x5523, _ctx), _ctx);
  return kk_unit_box(_x_x5522);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5528__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5528(kk_function_t _fself, kk_box_t _b_x1492, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5528(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5528, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5528(kk_function_t _fself, kk_box_t _b_x1492, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5529;
  kk_std_core_types__maybe maybe_5_1785 = kk_std_core_types__maybe_unbox(_b_x1492, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_5_1785, _ctx)) {
    kk_box_t _box_x1489 = maybe_5_1785._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_5_1785, _ctx);
    _x_x5529 = true; /*bool*/
  }
  else {
    _x_x5529 = false; /*bool*/
  }
  return kk_bool_box(_x_x5529);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5531__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5531(kk_function_t _fself, kk_box_t _b_x1497, kk_box_t _b_x1498, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5531(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5531, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5531(kk_function_t _fself, kk_box_t _b_x1497, kk_box_t _b_x1498, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_6_10713;
  kk_string_t _x_x5532;
  kk_box_t _x_x5533 = kk_box_dup(_b_x1497, _ctx); /*10000*/
  _x_x5532 = kk_string_unbox(_x_x5533); /*string*/
  kk_string_t _x_x5534;
  kk_box_t _x_x5535 = kk_box_dup(_b_x1498, _ctx); /*10001*/
  _x_x5534 = kk_string_unbox(_x_x5535); /*string*/
  maybe_6_10713 = kk_std_core_sslice_starts_with(_x_x5532, _x_x5534, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5536;
  if (kk_std_core_types__is_Just(maybe_6_10713, _ctx)) {
    kk_box_t _box_x1493 = maybe_6_10713._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_6_10713, _ctx);
    kk_std_core_types__list _x_x5537;
    kk_std_core_types__list _x_x5538;
    kk_string_t _x_x5539 = kk_string_unbox(_b_x1497); /*string*/
    _x_x5538 = kk_std_core_string_list(_x_x5539, _ctx); /*list<char>*/
    kk_integer_t _x_x5540;
    kk_string_t _x_x5541 = kk_string_unbox(_b_x1498); /*string*/
    _x_x5540 = kk_std_core_string_chars_fs_count(_x_x5541, _ctx); /*int*/
    _x_x5537 = kk_std_core_list_drop(_x_x5538, _x_x5540, _ctx); /*list<10001>*/
    _x_x5536 = kk_std_core_string_listchar_fs_string(_x_x5537, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1498, _ctx);
    _x_x5536 = kk_string_unbox(_b_x1497); /*string*/
  }
  return kk_string_box(_x_x5536);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5546__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5546(kk_function_t _fself, kk_box_t _b_x1506, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5546(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5546, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5546(kk_function_t _fself, kk_box_t _b_x1506, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5547;
  kk_display__clispec _match_x2493 = kk_display__clispec_unbox(_b_x1506, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5548 = kk_display__as_Clispec(_match_x2493, _ctx);
    kk_string_t _pat_0_31 = _con_x5548->app__name;
    kk_string_t _pat_1_23 = _con_x5548->app__version;
    kk_string_t _pat_2_10 = _con_x5548->app__about;
    kk_std_core_types__list _x_14 = _con_x5548->app__flags;
    kk_std_core_types__list _pat_3_6 = _con_x5548->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5548->app__args;
    kk_std_core_types__list _pat_5_6 = _con_x5548->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2493, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_6, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_10, _ctx);
      kk_string_drop(_pat_1_23, _ctx);
      kk_string_drop(_pat_0_31, _ctx);
      kk_datatype_ptr_free(_match_x2493, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_14, _ctx);
      kk_datatype_ptr_decref(_match_x2493, _ctx);
    }
    _x_x5547 = _x_14; /*list<display/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5547, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5552__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5552(kk_function_t _fself, kk_box_t _b_x1516, kk_box_t _b_x1517, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5552(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5552, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5554__t {
  struct kk_function_s _base;
  kk_string_t name_4_1787;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5554(kk_function_t _fself, kk_box_t _b_x1512, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5554(kk_string_t name_4_1787, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5554__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5554__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5554, kk_context());
  _self->name_4_1787 = name_4_1787;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5554(kk_function_t _fself, kk_box_t _b_x1512, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5554__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5554__t*, _fself, _ctx);
  kk_string_t name_4_1787 = _self->name_4_1787; /* string */
  kk_drop_match(_self, {kk_string_dup(name_4_1787, _ctx);}, {}, _ctx)
  kk_string_t _x_x5555;
  kk_display__cliflag _match_x2492 = kk_display__cliflag_unbox(_b_x1512, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x5556 = kk_display__as_Cliflag(_match_x2492, _ctx);
    kk_string_t _x_13 = _con_x5556->flag__name;
    kk_string_t _pat_0_30 = _con_x5556->flag__short;
    kk_string_t _pat_1_22 = _con_x5556->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2492, _ctx)) {
      kk_string_drop(_pat_1_22, _ctx);
      kk_string_drop(_pat_0_30, _ctx);
      kk_datatype_ptr_free(_match_x2492, _ctx);
    }
    else {
      kk_string_dup(_x_13, _ctx);
      kk_datatype_ptr_decref(_match_x2492, _ctx);
    }
    _x_x5555 = _x_13; /*string*/
  }
  return kk_string_is_eq(_x_x5555,name_4_1787,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5552(kk_function_t _fself, kk_box_t _b_x1516, kk_box_t _b_x1517, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5553;
  kk_std_core_types__list flags_2_0_1786 = kk_std_core_types__list_unbox(_b_x1516, KK_OWNED, _ctx); /*list<display/cliflag>*/;
  kk_string_t name_4_1787 = kk_string_unbox(_b_x1517); /*string*/;
  _x_x5553 = kk_std_core_list_find(flags_2_0_1786, kk_display__new_mlift_hc__parse__loop_11188_fun5554(name_4_1787, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5553, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5562__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0_0_0;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5562(kk_function_t _fself, kk_std_core_types__list _y_x10838, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5562(kk_ref_t flags, kk_string_t name_0_0_0_0, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5562__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5562__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5562, kk_context());
  _self->flags = flags;
  _self->name_0_0_0_0 = name_0_0_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5562(kk_function_t _fself, kk_std_core_types__list _y_x10838, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5562__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5562__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23386,list<string>> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1526_1528;
  kk_std_core_types__list _x_x5563 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1526_1528 = kk_std_core_list_append(_y_x10838, _x_x5563, _ctx); /*list<string>*/
  kk_unit_t _brw_x2491 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1526_1528, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2491; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5565__t {
  struct kk_function_s _base;
  kk_function_t next_10_11342;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5565(kk_function_t _fself, kk_box_t _b_x1532, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5565(kk_function_t next_10_11342, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5565__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5565__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5565, kk_context());
  _self->next_10_11342 = next_10_11342;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5565(kk_function_t _fself, kk_box_t _b_x1532, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5565__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5565__t*, _fself, _ctx);
  kk_function_t next_10_11342 = _self->next_10_11342; /* (list<string>) -> <local<23386>,exn,display/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_10_11342, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5566 = kk_Unit;
  kk_std_core_types__list _x_x5567 = kk_std_core_types__list_unbox(_b_x1532, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11342, (next_10_11342, _x_x5567, _ctx), _ctx);
  return kk_unit_box(_x_x5566);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5569__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5569(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5569(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5569, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5569(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5570;
  kk_display__clispec _match_x2489 = kk_display__clispec_unbox(_b_x1535, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5571 = kk_display__as_Clispec(_match_x2489, _ctx);
    kk_string_t _pat_0_33 = _con_x5571->app__name;
    kk_string_t _pat_1_25 = _con_x5571->app__version;
    kk_string_t _pat_2_12 = _con_x5571->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5571->app__flags;
    kk_std_core_types__list _x_16 = _con_x5571->app__options;
    kk_std_core_types__list _pat_4_7 = _con_x5571->app__args;
    kk_std_core_types__list _pat_5_7 = _con_x5571->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2489, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_7, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_12, _ctx);
      kk_string_drop(_pat_1_25, _ctx);
      kk_string_drop(_pat_0_33, _ctx);
      kk_datatype_ptr_free(_match_x2489, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_16, _ctx);
      kk_datatype_ptr_decref(_match_x2489, _ctx);
    }
    _x_x5570 = _x_16; /*list<display/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5570, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5573__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5573(kk_function_t _fself, kk_box_t _b_x1545, kk_box_t _b_x1546, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5573(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5573, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5575__t {
  struct kk_function_s _base;
  kk_string_t name_5_1789;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5575(kk_function_t _fself, kk_box_t _b_x1541, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5575(kk_string_t name_5_1789, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5575__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5575__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5575, kk_context());
  _self->name_5_1789 = name_5_1789;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5575(kk_function_t _fself, kk_box_t _b_x1541, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5575__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5575__t*, _fself, _ctx);
  kk_string_t name_5_1789 = _self->name_5_1789; /* string */
  kk_drop_match(_self, {kk_string_dup(name_5_1789, _ctx);}, {}, _ctx)
  kk_string_t _x_x5576;
  kk_display__clioption _match_x2488 = kk_display__clioption_unbox(_b_x1541, KK_OWNED, _ctx); /*display/clioption*/;
  {
    struct kk_display_Clioption* _con_x5577 = kk_display__as_Clioption(_match_x2488, _ctx);
    kk_string_t _x_15 = _con_x5577->opt__name;
    kk_string_t _pat_0_32 = _con_x5577->opt__short;
    kk_string_t _pat_1_24 = _con_x5577->opt__help;
    kk_string_t _pat_2_11 = _con_x5577->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2488, _ctx)) {
      kk_string_drop(_pat_2_11, _ctx);
      kk_string_drop(_pat_1_24, _ctx);
      kk_string_drop(_pat_0_32, _ctx);
      kk_datatype_ptr_free(_match_x2488, _ctx);
    }
    else {
      kk_string_dup(_x_15, _ctx);
      kk_datatype_ptr_decref(_match_x2488, _ctx);
    }
    _x_x5576 = _x_15; /*string*/
  }
  return kk_string_is_eq(_x_x5576,name_5_1789,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5573(kk_function_t _fself, kk_box_t _b_x1545, kk_box_t _b_x1546, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5574;
  kk_std_core_types__list options_3_1788 = kk_std_core_types__list_unbox(_b_x1545, KK_OWNED, _ctx); /*list<display/clioption>*/;
  kk_string_t name_5_1789 = kk_string_unbox(_b_x1546); /*string*/;
  _x_x5574 = kk_std_core_list_find(options_3_1788, kk_display__new_mlift_hc__parse__loop_11188_fun5575(name_5_1789, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5574, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5584__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5584(kk_function_t _fself, kk_box_t _b_x1553, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5584(kk_ref_t error, kk_string_t name_0_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5584__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5584__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5584, kk_context());
  _self->error = error;
  _self->name_0_0_0_0 = name_0_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5584(kk_function_t _fself, kk_box_t _b_x1553, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5584__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5584__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23386,string> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10840_1766 = kk_std_core_types__list_unbox(_b_x1553, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5585 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11176(error, name_0_0_0_0, options, remaining, _y_x10840_1766, _ctx);
  return kk_unit_box(_x_x5585);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5592__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5592(kk_function_t _fself, kk_box_t _b_x1559, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5592(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5592, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5592(kk_function_t _fself, kk_box_t _b_x1559, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5593;
  kk_std_core_types__maybe maybe_7_1790 = kk_std_core_types__maybe_unbox(_b_x1559, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_7_1790, _ctx)) {
    kk_box_t _box_x1556 = maybe_7_1790._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_7_1790, _ctx);
    _x_x5593 = true; /*bool*/
  }
  else {
    _x_x5593 = false; /*bool*/
  }
  return kk_bool_box(_x_x5593);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5595__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5595(kk_function_t _fself, kk_box_t _b_x1564, kk_box_t _b_x1565, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5595(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5595, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5595(kk_function_t _fself, kk_box_t _b_x1564, kk_box_t _b_x1565, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_8_10716;
  kk_string_t _x_x5596;
  kk_box_t _x_x5597 = kk_box_dup(_b_x1564, _ctx); /*10000*/
  _x_x5596 = kk_string_unbox(_x_x5597); /*string*/
  kk_string_t _x_x5598;
  kk_box_t _x_x5599 = kk_box_dup(_b_x1565, _ctx); /*10001*/
  _x_x5598 = kk_string_unbox(_x_x5599); /*string*/
  maybe_8_10716 = kk_std_core_sslice_starts_with(_x_x5596, _x_x5598, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5600;
  if (kk_std_core_types__is_Just(maybe_8_10716, _ctx)) {
    kk_box_t _box_x1560 = maybe_8_10716._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_8_10716, _ctx);
    kk_std_core_types__list _x_x5601;
    kk_std_core_types__list _x_x5602;
    kk_string_t _x_x5603 = kk_string_unbox(_b_x1564); /*string*/
    _x_x5602 = kk_std_core_string_list(_x_x5603, _ctx); /*list<char>*/
    kk_integer_t _x_x5604;
    kk_string_t _x_x5605 = kk_string_unbox(_b_x1565); /*string*/
    _x_x5604 = kk_std_core_string_chars_fs_count(_x_x5605, _ctx); /*int*/
    _x_x5601 = kk_std_core_list_drop(_x_x5602, _x_x5604, _ctx); /*list<10001>*/
    _x_x5600 = kk_std_core_string_listchar_fs_string(_x_x5601, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1565, _ctx);
    _x_x5600 = kk_string_unbox(_b_x1564); /*string*/
  }
  return kk_string_box(_x_x5600);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5610__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5610(kk_function_t _fself, kk_box_t _b_x1573, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5610(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5610, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5610(kk_function_t _fself, kk_box_t _b_x1573, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5611;
  kk_display__clispec _match_x2483 = kk_display__clispec_unbox(_b_x1573, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5612 = kk_display__as_Clispec(_match_x2483, _ctx);
    kk_string_t _pat_0_39 = _con_x5612->app__name;
    kk_string_t _pat_1_29 = _con_x5612->app__version;
    kk_string_t _pat_2_13 = _con_x5612->app__about;
    kk_std_core_types__list _x_18 = _con_x5612->app__flags;
    kk_std_core_types__list _pat_3_8 = _con_x5612->app__options;
    kk_std_core_types__list _pat_4_8 = _con_x5612->app__args;
    kk_std_core_types__list _pat_5_8 = _con_x5612->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2483, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_8, _ctx);
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_std_core_types__list_drop(_pat_3_8, _ctx);
      kk_string_drop(_pat_2_13, _ctx);
      kk_string_drop(_pat_1_29, _ctx);
      kk_string_drop(_pat_0_39, _ctx);
      kk_datatype_ptr_free(_match_x2483, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_18, _ctx);
      kk_datatype_ptr_decref(_match_x2483, _ctx);
    }
    _x_x5611 = _x_18; /*list<display/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5611, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5616__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5616(kk_function_t _fself, kk_box_t _b_x1583, kk_box_t _b_x1584, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5616(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5616, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5618__t {
  struct kk_function_s _base;
  kk_string_t s_10_1792;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5618(kk_function_t _fself, kk_box_t _b_x1579, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5618(kk_string_t s_10_1792, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5618__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5618__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5618, kk_context());
  _self->s_10_1792 = s_10_1792;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5618(kk_function_t _fself, kk_box_t _b_x1579, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5618__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5618__t*, _fself, _ctx);
  kk_string_t s_10_1792 = _self->s_10_1792; /* string */
  kk_drop_match(_self, {kk_string_dup(s_10_1792, _ctx);}, {}, _ctx)
  kk_string_t _x_x5619;
  kk_display__cliflag _match_x2482 = kk_display__cliflag_unbox(_b_x1579, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x5620 = kk_display__as_Cliflag(_match_x2482, _ctx);
    kk_string_t _pat_0_38 = _con_x5620->flag__name;
    kk_string_t _x_17 = _con_x5620->flag__short;
    kk_string_t _pat_1_28 = _con_x5620->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2482, _ctx)) {
      kk_string_drop(_pat_1_28, _ctx);
      kk_string_drop(_pat_0_38, _ctx);
      kk_datatype_ptr_free(_match_x2482, _ctx);
    }
    else {
      kk_string_dup(_x_17, _ctx);
      kk_datatype_ptr_decref(_match_x2482, _ctx);
    }
    _x_x5619 = _x_17; /*string*/
  }
  return kk_string_is_eq(_x_x5619,s_10_1792,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5616(kk_function_t _fself, kk_box_t _b_x1583, kk_box_t _b_x1584, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5617;
  kk_std_core_types__list flags_3_0_1791 = kk_std_core_types__list_unbox(_b_x1583, KK_OWNED, _ctx); /*list<display/cliflag>*/;
  kk_string_t s_10_1792 = kk_string_unbox(_b_x1584); /*string*/;
  _x_x5617 = kk_std_core_list_find(flags_3_0_1791, kk_display__new_mlift_hc__parse__loop_11188_fun5618(s_10_1792, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5617, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5626__t {
  struct kk_function_s _base;
  kk_display__cliflag f_0_0;
  kk_ref_t flags;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5626(kk_function_t _fself, kk_std_core_types__list _y_x10854, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5626(kk_display__cliflag f_0_0, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5626__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5626__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5626, kk_context());
  _self->f_0_0 = f_0_0;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5628__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5628(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5628(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5628, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5628(kk_function_t _fself, kk_box_t _b_x1592, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5629;
  kk_display__cliflag _match_x2481 = kk_display__cliflag_unbox(_b_x1592, KK_OWNED, _ctx); /*display/cliflag*/;
  {
    struct kk_display_Cliflag* _con_x5630 = kk_display__as_Cliflag(_match_x2481, _ctx);
    kk_string_t _x_19 = _con_x5630->flag__name;
    kk_string_t _pat_0_40 = _con_x5630->flag__short;
    kk_string_t _pat_1_30 = _con_x5630->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2481, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2481, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2481, _ctx);
    }
    _x_x5629 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5629);
}
static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5626(kk_function_t _fself, kk_std_core_types__list _y_x10854, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5626__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5626__t*, _fself, _ctx);
  kk_display__cliflag f_0_0 = _self->f_0_0; /* display/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_display__cliflag_dup(f_0_0, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1593_1595;
  kk_box_t _x_x5627 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5628(_ctx), kk_display__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1593_1595 = kk_string_unbox(_x_x5627); /*string*/
  kk_std_core_types__list _b_x1601_1603;
  kk_std_core_types__list _x_x5631 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1593_1595), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1601_1603 = kk_std_core_list_append(_y_x10854, _x_x5631, _ctx); /*list<string>*/
  kk_unit_t _brw_x2480 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1601_1603, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2480; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5633__t {
  struct kk_function_s _base;
  kk_function_t next_12_11349;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5633(kk_function_t _fself, kk_box_t _b_x1605, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5633(kk_function_t next_12_11349, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5633__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5633__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5633, kk_context());
  _self->next_12_11349 = next_12_11349;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5633(kk_function_t _fself, kk_box_t _b_x1605, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5633__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5633__t*, _fself, _ctx);
  kk_function_t next_12_11349 = _self->next_12_11349; /* (list<string>) -> <local<23386>,exn,display/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_12_11349, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5634 = kk_Unit;
  kk_std_core_types__list _x_x5635 = kk_std_core_types__list_unbox(_b_x1605, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11349, (next_12_11349, _x_x5635, _ctx), _ctx);
  return kk_unit_box(_x_x5634);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5637__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5637(kk_function_t _fself, kk_box_t _b_x1608, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5637(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5637, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5637(kk_function_t _fself, kk_box_t _b_x1608, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5638;
  kk_display__clispec _match_x2478 = kk_display__clispec_unbox(_b_x1608, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5639 = kk_display__as_Clispec(_match_x2478, _ctx);
    kk_string_t _pat_0_42 = _con_x5639->app__name;
    kk_string_t _pat_1_32 = _con_x5639->app__version;
    kk_string_t _pat_2_15 = _con_x5639->app__about;
    kk_std_core_types__list _pat_3_9 = _con_x5639->app__flags;
    kk_std_core_types__list _x_21 = _con_x5639->app__options;
    kk_std_core_types__list _pat_4_9 = _con_x5639->app__args;
    kk_std_core_types__list _pat_5_9 = _con_x5639->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2478, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_9, _ctx);
      kk_std_core_types__list_drop(_pat_4_9, _ctx);
      kk_std_core_types__list_drop(_pat_3_9, _ctx);
      kk_string_drop(_pat_2_15, _ctx);
      kk_string_drop(_pat_1_32, _ctx);
      kk_string_drop(_pat_0_42, _ctx);
      kk_datatype_ptr_free(_match_x2478, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_21, _ctx);
      kk_datatype_ptr_decref(_match_x2478, _ctx);
    }
    _x_x5638 = _x_21; /*list<display/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5638, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5641__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5641(kk_function_t _fself, kk_box_t _b_x1618, kk_box_t _b_x1619, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5641(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5641, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5643__t {
  struct kk_function_s _base;
  kk_string_t s_11_1794;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5643(kk_function_t _fself, kk_box_t _b_x1614, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5643(kk_string_t s_11_1794, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5643__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5643__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5643, kk_context());
  _self->s_11_1794 = s_11_1794;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5643(kk_function_t _fself, kk_box_t _b_x1614, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5643__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5643__t*, _fself, _ctx);
  kk_string_t s_11_1794 = _self->s_11_1794; /* string */
  kk_drop_match(_self, {kk_string_dup(s_11_1794, _ctx);}, {}, _ctx)
  kk_string_t _x_x5644;
  kk_display__clioption _match_x2477 = kk_display__clioption_unbox(_b_x1614, KK_OWNED, _ctx); /*display/clioption*/;
  {
    struct kk_display_Clioption* _con_x5645 = kk_display__as_Clioption(_match_x2477, _ctx);
    kk_string_t _pat_0_41 = _con_x5645->opt__name;
    kk_string_t _x_20 = _con_x5645->opt__short;
    kk_string_t _pat_1_31 = _con_x5645->opt__help;
    kk_string_t _pat_2_14 = _con_x5645->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2477, _ctx)) {
      kk_string_drop(_pat_2_14, _ctx);
      kk_string_drop(_pat_1_31, _ctx);
      kk_string_drop(_pat_0_41, _ctx);
      kk_datatype_ptr_free(_match_x2477, _ctx);
    }
    else {
      kk_string_dup(_x_20, _ctx);
      kk_datatype_ptr_decref(_match_x2477, _ctx);
    }
    _x_x5644 = _x_20; /*string*/
  }
  return kk_string_is_eq(_x_x5644,s_11_1794,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5641(kk_function_t _fself, kk_box_t _b_x1618, kk_box_t _b_x1619, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5642;
  kk_std_core_types__list options_4_1793 = kk_std_core_types__list_unbox(_b_x1618, KK_OWNED, _ctx); /*list<display/clioption>*/;
  kk_string_t s_11_1794 = kk_string_unbox(_b_x1619); /*string*/;
  _x_x5642 = kk_std_core_list_find(options_4_1793, kk_display__new_mlift_hc__parse__loop_11188_fun5643(s_11_1794, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5642, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5652__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_display__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_0_0;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5652(kk_function_t _fself, kk_box_t _b_x1626, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5652(kk_ref_t error, kk_display__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5652__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5652__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5652, kk_context());
  _self->error = error;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_0_0 = s_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5652(kk_function_t _fself, kk_box_t _b_x1626, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5652__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5652__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23386,string> */
  kk_display__clioption o_0_0 = _self->o_0_0; /* display/clioption */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_string_t s_0_0 = _self->s_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_display__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10856_1769 = kk_std_core_types__list_unbox(_b_x1626, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5653 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11183(error, o_0_0, options, remaining, s_0_0, _y_x10856_1769, _ctx);
  return kk_unit_box(_x_x5653);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5657__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5657(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5657(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5657, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5657(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5658;
  kk_display__clispec _match_x2472 = kk_display__clispec_unbox(_b_x1631, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5659 = kk_display__as_Clispec(_match_x2472, _ctx);
    kk_string_t _pat_0_46 = _con_x5659->app__name;
    kk_string_t _pat_1_34 = _con_x5659->app__version;
    kk_string_t _pat_2_17 = _con_x5659->app__about;
    kk_std_core_types__list _pat_3_10 = _con_x5659->app__flags;
    kk_std_core_types__list _pat_4_10 = _con_x5659->app__options;
    kk_std_core_types__list _pat_5_10 = _con_x5659->app__args;
    kk_std_core_types__list _x_24 = _con_x5659->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2472, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_10, _ctx);
      kk_std_core_types__list_drop(_pat_4_10, _ctx);
      kk_std_core_types__list_drop(_pat_3_10, _ctx);
      kk_string_drop(_pat_2_17, _ctx);
      kk_string_drop(_pat_1_34, _ctx);
      kk_string_drop(_pat_0_46, _ctx);
      kk_datatype_ptr_free(_match_x2472, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_24, _ctx);
      kk_datatype_ptr_decref(_match_x2472, _ctx);
    }
    _x_x5658 = _x_24; /*list<(string, display/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5658, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5661__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5661(kk_function_t _fself, kk_box_t _b_x1643, kk_box_t _b_x1644, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5661(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11188_fun5661, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5663__t {
  struct kk_function_s _base;
  kk_string_t name_6_1796;
};
static bool kk_display__mlift_hc__parse__loop_11188_fun5663(kk_function_t _fself, kk_box_t _b_x1639, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5663(kk_string_t name_6_1796, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5663__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5663__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5663, kk_context());
  _self->name_6_1796 = name_6_1796;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__parse__loop_11188_fun5663(kk_function_t _fself, kk_box_t _b_x1639, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5663__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5663__t*, _fself, _ctx);
  kk_string_t name_6_1796 = _self->name_6_1796; /* string */
  kk_drop_match(_self, {kk_string_dup(name_6_1796, _ctx);}, {}, _ctx)
  kk_string_t _x_x5664;
  kk_std_core_types__tuple2 _match_x2471 = kk_std_core_types__tuple2_unbox(_b_x1639, KK_OWNED, _ctx); /*(string, display/clispec)*/;
  {
    kk_box_t _box_x1635 = _match_x2471.fst;
    kk_box_t _box_x1636 = _match_x2471.snd;
    kk_string_t _x_23 = kk_string_unbox(_box_x1635);
    kk_string_dup(_x_23, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2471, _ctx);
    _x_x5664 = _x_23; /*string*/
  }
  return kk_string_is_eq(_x_x5664,name_6_1796,kk_context());
}
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5661(kk_function_t _fself, kk_box_t _b_x1643, kk_box_t _b_x1644, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5662;
  kk_std_core_types__list commands_0_1795 = kk_std_core_types__list_unbox(_b_x1643, KK_OWNED, _ctx); /*list<(string, display/clispec)>*/;
  kk_string_t name_6_1796 = kk_string_unbox(_b_x1644); /*string*/;
  _x_x5662 = kk_std_core_list_find(commands_0_1795, kk_display__new_mlift_hc__parse__loop_11188_fun5663(name_6_1796, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5662, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5668__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5668(kk_function_t _fself, kk_box_t _b_x1651, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5668(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5668__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5668__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5668, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5668(kk_function_t _fself, kk_box_t _b_x1651, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5668__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5668__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_0_1771 = kk_Unit;
  kk_unit_unbox(_b_x1651);
  kk_unit_t _x_x5669 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11186(remaining, sub__args, wild___5_0_1771, _ctx);
  return kk_unit_box(_x_x5669);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5672__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5672(kk_function_t _fself, kk_std_core_types__list _y_x10875, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5672(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5672__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5672__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5672, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_display__mlift_hc__parse__loop_11188_fun5672(kk_function_t _fself, kk_std_core_types__list _y_x10875, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5672__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5672__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1659_1661;
  kk_std_core_types__list _x_x5673 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1659_1661 = kk_std_core_list_append(_y_x10875, _x_x5673, _ctx); /*list<string>*/
  kk_unit_t _brw_x2468 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1659_1661, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2468; return kk_Unit;
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11188_fun5675__t {
  struct kk_function_s _base;
  kk_function_t next_15_11358;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5675(kk_function_t _fself, kk_box_t _b_x1665, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11188_fun5675(kk_function_t next_15_11358, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5675__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11188_fun5675__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11188_fun5675, kk_context());
  _self->next_15_11358 = next_15_11358;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11188_fun5675(kk_function_t _fself, kk_box_t _b_x1665, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11188_fun5675__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11188_fun5675__t*, _fself, _ctx);
  kk_function_t next_15_11358 = _self->next_15_11358; /* (list<string>) -> <local<23386>,display/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_15_11358, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5676 = kk_Unit;
  kk_std_core_types__list _x_x5677 = kk_std_core_types__list_unbox(_b_x1665, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11358, (next_15_11358, _x_x5677, _ctx), _ctx);
  return kk_unit_box(_x_x5676);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11188(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_display__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, wild_ : ()) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2459;
  kk_string_t _x_x5293 = kk_string_dup(a, _ctx); /*string*/
  kk_string_t _x_x5294;
  kk_define_string_literal(static, _s_x5295, 6, "--help", _ctx)
  _x_x5294 = kk_string_dup(_s_x5295, _ctx); /*string*/
  _match_x2459 = kk_string_is_eq(_x_x5293,_x_x5294,kk_context()); /*bool*/
  if (_match_x2459) {
    kk_ref_drop(subcmd, _ctx);
    kk_ref_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(positionals, _ctx);
    kk_ref_drop(options, _ctx);
    kk_ref_drop(flags, _ctx);
    kk_string_drop(a, _ctx);
    kk_unit_t x_11310 = kk_Unit;
    kk_unit_t _brw_x2535 = kk_Unit;
    kk_box_t _x_x5296;
    kk_string_t _x_x5297;
    kk_define_string_literal(static, _s_x5298, 8, "__help__", _ctx)
    _x_x5297 = kk_string_dup(_s_x5298, _ctx); /*string*/
    _x_x5296 = kk_string_box(_x_x5297); /*10000*/
    kk_ref_set_borrow(error,_x_x5296,kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2535;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x5299 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5300(_ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5299); return kk_Unit;
    }
    {
      kk_display__mlift_hc__parse__loop_11143(x_11310, _ctx); return kk_Unit;
    }
  }
  {
    bool _match_x2460;
    kk_string_t _x_x5302 = kk_string_dup(a, _ctx); /*string*/
    kk_string_t _x_x5303;
    kk_define_string_literal(static, _s_x5304, 2, "-h", _ctx)
    _x_x5303 = kk_string_dup(_s_x5304, _ctx); /*string*/
    _match_x2460 = kk_string_is_eq(_x_x5302,_x_x5303,kk_context()); /*bool*/
    if (_match_x2460) {
      kk_ref_drop(subcmd, _ctx);
      kk_ref_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_ref_drop(remaining, _ctx);
      kk_ref_drop(positionals, _ctx);
      kk_ref_drop(options, _ctx);
      kk_ref_drop(flags, _ctx);
      kk_string_drop(a, _ctx);
      kk_unit_t x_0_11312 = kk_Unit;
      kk_unit_t _brw_x2533 = kk_Unit;
      kk_box_t _x_x5305;
      kk_string_t _x_x5306;
      kk_define_string_literal(static, _s_x5307, 8, "__help__", _ctx)
      _x_x5306 = kk_string_dup(_s_x5307, _ctx); /*string*/
      _x_x5305 = kk_string_box(_x_x5306); /*10000*/
      kk_ref_set_borrow(error,_x_x5305,kk_context());
      kk_ref_drop(error, _ctx);
      _brw_x2533;
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x5308 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5309(_ctx), _ctx); /*10001*/
        kk_unit_unbox(_x_x5308); return kk_Unit;
      }
      {
        kk_display__mlift_hc__parse__loop_11144(x_0_11312, _ctx); return kk_Unit;
      }
    }
    {
      bool _match_x2461;
      kk_string_t _x_x5311 = kk_string_dup(a, _ctx); /*string*/
      kk_string_t _x_x5312;
      kk_define_string_literal(static, _s_x5313, 9, "--version", _ctx)
      _x_x5312 = kk_string_dup(_s_x5313, _ctx); /*string*/
      _match_x2461 = kk_string_is_eq(_x_x5311,_x_x5312,kk_context()); /*bool*/
      if (_match_x2461) {
        kk_ref_drop(subcmd, _ctx);
        kk_ref_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_ref_drop(remaining, _ctx);
        kk_ref_drop(positionals, _ctx);
        kk_ref_drop(options, _ctx);
        kk_ref_drop(flags, _ctx);
        kk_string_drop(a, _ctx);
        kk_unit_t x_1_11314 = kk_Unit;
        kk_unit_t _brw_x2531 = kk_Unit;
        kk_box_t _x_x5314;
        kk_string_t _x_x5315;
        kk_define_string_literal(static, _s_x5316, 11, "__version__", _ctx)
        _x_x5315 = kk_string_dup(_s_x5316, _ctx); /*string*/
        _x_x5314 = kk_string_box(_x_x5315); /*10000*/
        kk_ref_set_borrow(error,_x_x5314,kk_context());
        kk_ref_drop(error, _ctx);
        _brw_x2531;
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x5317 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5318(_ctx), _ctx); /*10001*/
          kk_unit_unbox(_x_x5317); return kk_Unit;
        }
        {
          kk_display__mlift_hc__parse__loop_11145(x_1_11314, _ctx); return kk_Unit;
        }
      }
      {
        bool _match_x2462;
        kk_string_t _x_x5320 = kk_string_dup(a, _ctx); /*string*/
        kk_string_t _x_x5321;
        kk_define_string_literal(static, _s_x5322, 2, "--", _ctx)
        _x_x5321 = kk_string_dup(_s_x5322, _ctx); /*string*/
        _match_x2462 = kk_string_is_eq(_x_x5320,_x_x5321,kk_context()); /*bool*/
        if (_match_x2462) {
          kk_ref_drop(subcmd, _ctx);
          kk_ref_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_ref_drop(options, _ctx);
          kk_ref_drop(flags, _ctx);
          kk_ref_drop(error, _ctx);
          kk_string_drop(a, _ctx);
          kk_std_core_types__list x_2_11316;
          kk_box_t _x_x5323;
          kk_ref_t _x_x5324 = kk_ref_dup(positionals, _ctx); /*local-var<23386,list<string>>*/
          _x_x5323 = kk_ref_get(_x_x5324,kk_context()); /*10000*/
          x_2_11316 = kk_std_core_types__list_unbox(_x_x5323, KK_OWNED, _ctx); /*list<string>*/
          if (kk_yielding(kk_context())) {
            kk_std_core_types__list_drop(x_2_11316, _ctx);
            kk_box_t _x_x5325 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5326(positionals, remaining, _ctx), _ctx); /*10001*/
            kk_unit_unbox(_x_x5325); return kk_Unit;
          }
          {
            kk_display__mlift_hc__parse__loop_11148(positionals, remaining, x_2_11316, _ctx); return kk_Unit;
          }
        }
        {
          kk_std_core_types__maybe _x_x1_0_11045;
          kk_string_t _x_x5328 = kk_string_dup(a, _ctx); /*string*/
          kk_string_t _x_x5329;
          kk_define_string_literal(static, _s_x5330, 2, "--", _ctx)
          _x_x5329 = kk_string_dup(_s_x5330, _ctx); /*string*/
          _x_x1_0_11045 = kk_std_core_sslice_starts_with(_x_x5328, _x_x5329, _ctx); /*maybe<sslice/sslice>*/
          bool _match_x2463;
          kk_box_t _x_x5331 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5332(_ctx), kk_std_core_types__maybe_box(_x_x1_0_11045, _ctx), _ctx); /*10001*/
          _match_x2463 = kk_bool_unbox(_x_x5331); /*bool*/
          if (_match_x2463) {
            bool _match_x2494;
            kk_string_t _x_x5334 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5335;
            kk_define_string_literal(static, _s_x5336, 1, "=", _ctx)
            _x_x5335 = kk_string_dup(_s_x5336, _ctx); /*string*/
            _match_x2494 = kk_string_contains(_x_x5334,_x_x5335,kk_context()); /*bool*/
            if (_match_x2494) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(remaining, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_ref_drop(flags, _ctx);
              kk_string_t clean;
              kk_box_t _x_x5337;
              kk_box_t _x_x5349;
              kk_string_t _x_x5350;
              kk_define_string_literal(static, _s_x5351, 2, "--", _ctx)
              _x_x5350 = kk_string_dup(_s_x5351, _ctx); /*string*/
              _x_x5349 = kk_string_box(_x_x5350); /*10001*/
              _x_x5337 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5338(_ctx), kk_string_box(a), _x_x5349, _ctx); /*10002*/
              clean = kk_string_unbox(_x_x5337); /*string*/
              kk_std_core_types__list x_3_11318;
              bool _match_x2526;
              kk_string_t _x_x5352;
              kk_define_string_literal(static, _s_x5353, 1, "=", _ctx)
              _x_x5352 = kk_string_dup(_s_x5353, _ctx); /*string*/
              kk_string_t _x_x5354 = kk_string_empty(); /*string*/
              _match_x2526 = kk_string_is_eq(_x_x5352,_x_x5354,kk_context()); /*bool*/
              if (_match_x2526) {
                kk_std_core_types__list _b_x1295_1303 = kk_std_core_string_list(clean, _ctx); /*list<char>*/;
                kk_function_t _brw_x2527 = kk_display__new_mlift_hc__parse__loop_11188_fun5356(_ctx); /*(10001) -> 10003 10002*/;
                kk_std_core_types__list _brw_x2528 = kk_std_core_list_map(_b_x1295_1303, _brw_x2527, _ctx); /*list<10002>*/;
                kk_function_drop(_brw_x2527, _ctx);
                x_3_11318 = _brw_x2528; /*list<string>*/
              }
              else {
                kk_box_t _x_x5359;
                kk_box_t _x_x5364;
                kk_string_t _x_x5365;
                kk_define_string_literal(static, _s_x5366, 1, "=", _ctx)
                _x_x5365 = kk_string_dup(_s_x5366, _ctx); /*string*/
                _x_x5364 = kk_string_box(_x_x5365); /*10001*/
                _x_x5359 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5360(_ctx), kk_string_box(clean), _x_x5364, _ctx); /*10002*/
                x_3_11318 = kk_std_core_types__list_unbox(_x_x5359, KK_OWNED, _ctx); /*list<string>*/
              }
              if (kk_yielding(kk_context())) {
                kk_std_core_types__list_drop(x_3_11318, _ctx);
                kk_box_t _x_x5367 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5368(error, options, spec, _ctx), _ctx); /*10001*/
                kk_unit_unbox(_x_x5367); return kk_Unit;
              }
              {
                kk_display__mlift_hc__parse__loop_11151(error, options, spec, x_3_11318, _ctx); return kk_Unit;
              }
            }
            {
              kk_std_core_types__maybe _x_x1_6_11055;
              kk_string_t _x_x5370 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5371;
              kk_define_string_literal(static, _s_x5372, 2, "--", _ctx)
              _x_x5371 = kk_string_dup(_s_x5372, _ctx); /*string*/
              _x_x1_6_11055 = kk_std_core_sslice_starts_with(_x_x5370, _x_x5371, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2495;
              kk_box_t _x_x5373 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5374(_ctx), kk_std_core_types__maybe_box(_x_x1_6_11055, _ctx), _ctx); /*10001*/
              _match_x2495 = kk_bool_unbox(_x_x5373); /*bool*/
              if (_match_x2495) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t name_0_0;
                kk_box_t _x_x5376;
                kk_box_t _x_x5388;
                kk_string_t _x_x5389;
                kk_define_string_literal(static, _s_x5390, 2, "--", _ctx)
                _x_x5389 = kk_string_dup(_s_x5390, _ctx); /*string*/
                _x_x5388 = kk_string_box(_x_x5389); /*10001*/
                _x_x5376 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5377(_ctx), kk_string_box(a), _x_x5388, _ctx); /*10002*/
                name_0_0 = kk_string_unbox(_x_x5376); /*string*/
                kk_std_core_types__list _x_x1_8_11058;
                kk_box_t _x_x5391;
                kk_box_t _x_x5395;
                kk_display__clispec _x_x5396 = kk_display__clispec_dup(spec, _ctx); /*display/clispec*/
                _x_x5395 = kk_display__clispec_box(_x_x5396, _ctx); /*10000*/
                _x_x5391 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5392(_ctx), _x_x5395, _ctx); /*10001*/
                _x_x1_8_11058 = kk_std_core_types__list_unbox(_x_x5391, KK_OWNED, _ctx); /*list<display/cliflag>*/
                kk_std_core_types__maybe _match_x2515;
                kk_box_t _x_x5397;
                kk_box_t _x_x5403;
                kk_string_t _x_x5404 = kk_string_dup(name_0_0, _ctx); /*string*/
                _x_x5403 = kk_string_box(_x_x5404); /*10001*/
                _x_x5397 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5398(_ctx), kk_std_core_types__list_box(_x_x1_8_11058, _ctx), _x_x5403, _ctx); /*10002*/
                _match_x2515 = kk_std_core_types__maybe_unbox(_x_x5397, KK_OWNED, _ctx); /*maybe<display/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2515, _ctx)) {
                  kk_box_t _box_x1341 = _match_x2515._cons.Just.value;
                  kk_display__cliflag _pat_24_0 = kk_display__cliflag_unbox(_box_x1341, KK_BORROWED, _ctx);
                  struct kk_display_Cliflag* _con_x5405 = kk_display__as_Cliflag(_pat_24_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2515, _ctx);
                  kk_std_core_types__list x_4_11320;
                  kk_box_t _x_x5406;
                  kk_ref_t _x_x5407 = kk_ref_dup(flags, _ctx); /*local-var<23386,list<string>>*/
                  _x_x5406 = kk_ref_get(_x_x5407,kk_context()); /*10000*/
                  x_4_11320 = kk_std_core_types__list_unbox(_x_x5406, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_4_11321 = kk_display__new_mlift_hc__parse__loop_11188_fun5408(flags, name_0_0, _ctx); /*(list<string>) -> <local<23386>,exn,display/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_4_11320, _ctx);
                    kk_box_t _x_x5410 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5411(next_4_11321, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5410); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11321, (next_4_11321, x_4_11320, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_10_11061;
                  kk_box_t _x_x5414 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5415(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_10_11061 = kk_std_core_types__list_unbox(_x_x5414, KK_OWNED, _ctx); /*list<display/clioption>*/
                  kk_std_core_types__maybe _match_x2516;
                  kk_box_t _x_x5418;
                  kk_box_t _x_x5424;
                  kk_string_t _x_x5425 = kk_string_dup(name_0_0, _ctx); /*string*/
                  _x_x5424 = kk_string_box(_x_x5425); /*10001*/
                  _x_x5418 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5419(_ctx), kk_std_core_types__list_box(_x_x1_10_11061, _ctx), _x_x5424, _ctx); /*10002*/
                  _match_x2516 = kk_std_core_types__maybe_unbox(_x_x5418, KK_OWNED, _ctx); /*maybe<display/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2516, _ctx)) {
                    kk_box_t _box_x1370 = _match_x2516._cons.Just.value;
                    kk_display__clioption _pat_30_0 = kk_display__clioption_unbox(_box_x1370, KK_BORROWED, _ctx);
                    struct kk_display_Clioption* _con_x5426 = kk_display__as_Clioption(_pat_30_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2516, _ctx);
                    kk_std_core_types__list x_5_11325;
                    kk_box_t _x_x5427;
                    kk_ref_t _x_x5428 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
                    _x_x5427 = kk_ref_get(_x_x5428,kk_context()); /*10000*/
                    x_5_11325 = kk_std_core_types__list_unbox(_x_x5427, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_5_11325, _ctx);
                      kk_box_t _x_x5429 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5430(error, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5429); return kk_Unit;
                    }
                    {
                      kk_display__mlift_hc__parse__loop_11158(error, name_0_0, options, remaining, x_5_11325, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1378_1688;
                    kk_string_t _x_x5432;
                    kk_define_string_literal(static, _s_x5433, 18, "unknown option: --", _ctx)
                    _x_x5432 = kk_string_dup(_s_x5433, _ctx); /*string*/
                    _b_x1378_1688 = kk_std_core_types__lp__plus__plus__rp_(_x_x5432, name_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2517 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1378_1688)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2517; return kk_Unit;
                  }
                }
              }
              {
                kk_std_core_types__maybe _x_x1_13_11066;
                kk_string_t _x_x5434 = kk_string_dup(a, _ctx); /*string*/
                kk_string_t _x_x5435;
                kk_define_string_literal(static, _s_x5436, 1, "-", _ctx)
                _x_x5435 = kk_string_dup(_s_x5436, _ctx); /*string*/
                _x_x1_13_11066 = kk_std_core_sslice_starts_with(_x_x5434, _x_x5435, _ctx); /*maybe<sslice/sslice>*/
                bool _match_x2496;
                kk_box_t _x_x5437 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5438(_ctx), kk_std_core_types__maybe_box(_x_x1_13_11066, _ctx), _ctx); /*10001*/
                _match_x2496 = kk_bool_unbox(_x_x5437); /*bool*/
                if (_match_x2496) {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(positionals, _ctx);
                  kk_string_t s_5;
                  kk_box_t _x_x5440;
                  kk_box_t _x_x5452;
                  kk_string_t _x_x5453;
                  kk_define_string_literal(static, _s_x5454, 1, "-", _ctx)
                  _x_x5453 = kk_string_dup(_s_x5454, _ctx); /*string*/
                  _x_x5452 = kk_string_box(_x_x5453); /*10001*/
                  _x_x5440 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5441(_ctx), kk_string_box(a), _x_x5452, _ctx); /*10002*/
                  s_5 = kk_string_unbox(_x_x5440); /*string*/
                  kk_std_core_types__list _x_x1_15_11069;
                  kk_box_t _x_x5455;
                  kk_box_t _x_x5459;
                  kk_display__clispec _x_x5460 = kk_display__clispec_dup(spec, _ctx); /*display/clispec*/
                  _x_x5459 = kk_display__clispec_box(_x_x5460, _ctx); /*10000*/
                  _x_x5455 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5456(_ctx), _x_x5459, _ctx); /*10001*/
                  _x_x1_15_11069 = kk_std_core_types__list_unbox(_x_x5455, KK_OWNED, _ctx); /*list<display/cliflag>*/
                  kk_std_core_types__maybe _match_x2504;
                  kk_box_t _x_x5461;
                  kk_box_t _x_x5467;
                  kk_string_t _x_x5468 = kk_string_dup(s_5, _ctx); /*string*/
                  _x_x5467 = kk_string_box(_x_x5468); /*10001*/
                  _x_x5461 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5462(_ctx), kk_std_core_types__list_box(_x_x1_15_11069, _ctx), _x_x5467, _ctx); /*10002*/
                  _match_x2504 = kk_std_core_types__maybe_unbox(_x_x5461, KK_OWNED, _ctx); /*maybe<display/cliflag>*/
                  if (kk_std_core_types__is_Just(_match_x2504, _ctx)) {
                    kk_box_t _box_x1408 = _match_x2504._cons.Just.value;
                    kk_display__cliflag f_1 = kk_display__cliflag_unbox(_box_x1408, KK_BORROWED, _ctx);
                    struct kk_display_Cliflag* _con_x5469 = kk_display__as_Cliflag(f_1, _ctx);
                    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                    kk_string_drop(s_5, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_ref_drop(error, _ctx);
                    kk_display__cliflag_dup(f_1, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2504, _ctx);
                    kk_std_core_types__list x_6_11327;
                    kk_box_t _x_x5470;
                    kk_ref_t _x_x5471 = kk_ref_dup(flags, _ctx); /*local-var<23386,list<string>>*/
                    _x_x5470 = kk_ref_get(_x_x5471,kk_context()); /*10000*/
                    x_6_11327 = kk_std_core_types__list_unbox(_x_x5470, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_6_11328 = kk_display__new_mlift_hc__parse__loop_11188_fun5472(f_1, flags, _ctx); /*(list<string>) -> <local<23386>,exn,display/hica-brk,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_6_11327, _ctx);
                      kk_box_t _x_x5478 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5479(next_6_11328, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5478); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11328, (next_6_11328, x_6_11327, _ctx), _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(flags, _ctx);
                    kk_std_core_types__list _x_x1_18_11073;
                    kk_box_t _x_x5482 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5483(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
                    _x_x1_18_11073 = kk_std_core_types__list_unbox(_x_x5482, KK_OWNED, _ctx); /*list<display/clioption>*/
                    kk_std_core_types__maybe _match_x2505;
                    kk_box_t _x_x5486;
                    kk_box_t _x_x5492;
                    kk_string_t _x_x5493 = kk_string_dup(s_5, _ctx); /*string*/
                    _x_x5492 = kk_string_box(_x_x5493); /*10001*/
                    _x_x5486 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5487(_ctx), kk_std_core_types__list_box(_x_x1_18_11073, _ctx), _x_x5492, _ctx); /*10002*/
                    _match_x2505 = kk_std_core_types__maybe_unbox(_x_x5486, KK_OWNED, _ctx); /*maybe<display/clioption>*/
                    if (kk_std_core_types__is_Just(_match_x2505, _ctx)) {
                      kk_box_t _box_x1443 = _match_x2505._cons.Just.value;
                      kk_display__clioption o_2 = kk_display__clioption_unbox(_box_x1443, KK_BORROWED, _ctx);
                      struct kk_display_Clioption* _con_x5494 = kk_display__as_Clioption(o_2, _ctx);
                      kk_display__clioption_dup(o_2, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2505, _ctx);
                      kk_std_core_types__list x_7_11332;
                      kk_box_t _x_x5495;
                      kk_ref_t _x_x5496 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
                      _x_x5495 = kk_ref_get(_x_x5496,kk_context()); /*10000*/
                      x_7_11332 = kk_std_core_types__list_unbox(_x_x5495, KK_OWNED, _ctx); /*list<string>*/
                      if (kk_yielding(kk_context())) {
                        kk_std_core_types__list_drop(x_7_11332, _ctx);
                        kk_box_t _x_x5497 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5498(error, o_2, options, remaining, s_5, _ctx), _ctx); /*10001*/
                        kk_unit_unbox(_x_x5497); return kk_Unit;
                      }
                      {
                        kk_display__mlift_hc__parse__loop_11165(error, o_2, options, remaining, s_5, x_7_11332, _ctx); return kk_Unit;
                      }
                    }
                    {
                      kk_ref_drop(remaining, _ctx);
                      kk_ref_drop(options, _ctx);
                      kk_string_t _b_x1451_1704;
                      kk_string_t _x_x5500;
                      kk_define_string_literal(static, _s_x5501, 17, "unknown option: -", _ctx)
                      _x_x5500 = kk_string_dup(_s_x5501, _ctx); /*string*/
                      _b_x1451_1704 = kk_std_core_types__lp__plus__plus__rp_(_x_x5500, s_5, _ctx); /*string*/
                      kk_unit_t _brw_x2506 = kk_Unit;
                      kk_ref_set_borrow(error,(kk_string_box(_b_x1451_1704)),kk_context());
                      kk_ref_drop(error, _ctx);
                      _brw_x2506; return kk_Unit;
                    }
                  }
                }
                {
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(flags, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__list _x_x1_22_11079;
                  kk_box_t _x_x5502 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5503(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_22_11079 = kk_std_core_types__list_unbox(_x_x5502, KK_OWNED, _ctx); /*list<(string, display/clispec)>*/
                  kk_std_core_types__maybe _match_x2497;
                  kk_box_t _x_x5506;
                  kk_box_t _x_x5511;
                  kk_string_t _x_x5512 = kk_string_dup(a, _ctx); /*string*/
                  _x_x5511 = kk_string_box(_x_x5512); /*10001*/
                  _x_x5506 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5507(_ctx), kk_std_core_types__list_box(_x_x1_22_11079, _ctx), _x_x5511, _ctx); /*10002*/
                  _match_x2497 = kk_std_core_types__maybe_unbox(_x_x5506, KK_OWNED, _ctx); /*maybe<(string, display/clispec)>*/
                  if (kk_std_core_types__is_Just(_match_x2497, _ctx)) {
                    kk_box_t _box_x1468 = _match_x2497._cons.Just.value;
                    kk_ref_drop(positionals, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2497, _ctx);
                    kk_unit_t x_8_11334 = kk_Unit;
                    kk_unit_t _brw_x2501 = kk_Unit;
                    kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                    kk_ref_drop(subcmd, _ctx);
                    _brw_x2501;
                    if (kk_yielding(kk_context())) {
                      kk_box_t _x_x5513 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5514(remaining, sub__args, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5513); return kk_Unit;
                    }
                    {
                      kk_display__mlift_hc__parse__loop_11168(remaining, sub__args, x_8_11334, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(subcmd, _ctx);
                    kk_ref_drop(sub__args, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_std_core_types__list x_9_11336;
                    kk_box_t _x_x5516;
                    kk_ref_t _x_x5517 = kk_ref_dup(positionals, _ctx); /*local-var<23386,list<string>>*/
                    _x_x5516 = kk_ref_get(_x_x5517,kk_context()); /*10000*/
                    x_9_11336 = kk_std_core_types__list_unbox(_x_x5516, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_9_11337 = kk_display__new_mlift_hc__parse__loop_11188_fun5518(a, positionals, _ctx); /*(list<string>) -> <local<23386>,display/hica-brk,exn,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_9_11336, _ctx);
                      kk_box_t _x_x5520 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5521(next_9_11337, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5520); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11337, (next_9_11337, x_9_11336, _ctx), _ctx); return kk_Unit;
                    }
                  }
                }
              }
            }
          }
          {
            kk_std_core_types__maybe _x_x1_24_11082;
            kk_string_t _x_x5524 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5525;
            kk_define_string_literal(static, _s_x5526, 2, "--", _ctx)
            _x_x5525 = kk_string_dup(_s_x5526, _ctx); /*string*/
            _x_x1_24_11082 = kk_std_core_sslice_starts_with(_x_x5524, _x_x5525, _ctx); /*maybe<sslice/sslice>*/
            bool _match_x2464;
            kk_box_t _x_x5527 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5528(_ctx), kk_std_core_types__maybe_box(_x_x1_24_11082, _ctx), _ctx); /*10001*/
            _match_x2464 = kk_bool_unbox(_x_x5527); /*bool*/
            if (_match_x2464) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_string_t name_0_0_0_0;
              kk_box_t _x_x5530;
              kk_box_t _x_x5542;
              kk_string_t _x_x5543;
              kk_define_string_literal(static, _s_x5544, 2, "--", _ctx)
              _x_x5543 = kk_string_dup(_s_x5544, _ctx); /*string*/
              _x_x5542 = kk_string_box(_x_x5543); /*10001*/
              _x_x5530 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5531(_ctx), kk_string_box(a), _x_x5542, _ctx); /*10002*/
              name_0_0_0_0 = kk_string_unbox(_x_x5530); /*string*/
              kk_std_core_types__list _x_x1_26_11085;
              kk_box_t _x_x5545;
              kk_box_t _x_x5549;
              kk_display__clispec _x_x5550 = kk_display__clispec_dup(spec, _ctx); /*display/clispec*/
              _x_x5549 = kk_display__clispec_box(_x_x5550, _ctx); /*10000*/
              _x_x5545 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5546(_ctx), _x_x5549, _ctx); /*10001*/
              _x_x1_26_11085 = kk_std_core_types__list_unbox(_x_x5545, KK_OWNED, _ctx); /*list<display/cliflag>*/
              kk_std_core_types__maybe _match_x2484;
              kk_box_t _x_x5551;
              kk_box_t _x_x5557;
              kk_string_t _x_x5558 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
              _x_x5557 = kk_string_box(_x_x5558); /*10001*/
              _x_x5551 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5552(_ctx), kk_std_core_types__list_box(_x_x1_26_11085, _ctx), _x_x5557, _ctx); /*10002*/
              _match_x2484 = kk_std_core_types__maybe_unbox(_x_x5551, KK_OWNED, _ctx); /*maybe<display/cliflag>*/
              if (kk_std_core_types__is_Just(_match_x2484, _ctx)) {
                kk_box_t _box_x1518 = _match_x2484._cons.Just.value;
                kk_display__cliflag _pat_24_0_0 = kk_display__cliflag_unbox(_box_x1518, KK_BORROWED, _ctx);
                struct kk_display_Cliflag* _con_x5559 = kk_display__as_Cliflag(_pat_24_0_0, _ctx);
                kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                kk_ref_drop(remaining, _ctx);
                kk_ref_drop(options, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__maybe_drop(_match_x2484, _ctx);
                kk_std_core_types__list x_10_11341;
                kk_box_t _x_x5560;
                kk_ref_t _x_x5561 = kk_ref_dup(flags, _ctx); /*local-var<23386,list<string>>*/
                _x_x5560 = kk_ref_get(_x_x5561,kk_context()); /*10000*/
                x_10_11341 = kk_std_core_types__list_unbox(_x_x5560, KK_OWNED, _ctx); /*list<string>*/
                kk_function_t next_10_11342 = kk_display__new_mlift_hc__parse__loop_11188_fun5562(flags, name_0_0_0_0, _ctx); /*(list<string>) -> <local<23386>,exn,display/hica-brk,div> ()*/;
                if (kk_yielding(kk_context())) {
                  kk_std_core_types__list_drop(x_10_11341, _ctx);
                  kk_box_t _x_x5564 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5565(next_10_11342, _ctx), _ctx); /*10001*/
                  kk_unit_unbox(_x_x5564); return kk_Unit;
                }
                {
                  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11342, (next_10_11342, x_10_11341, _ctx), _ctx); return kk_Unit;
                }
              }
              {
                kk_ref_drop(flags, _ctx);
                kk_std_core_types__list _x_x1_28_11088;
                kk_box_t _x_x5568 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5569(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_28_11088 = kk_std_core_types__list_unbox(_x_x5568, KK_OWNED, _ctx); /*list<display/clioption>*/
                kk_std_core_types__maybe _match_x2485;
                kk_box_t _x_x5572;
                kk_box_t _x_x5578;
                kk_string_t _x_x5579 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
                _x_x5578 = kk_string_box(_x_x5579); /*10001*/
                _x_x5572 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5573(_ctx), kk_std_core_types__list_box(_x_x1_28_11088, _ctx), _x_x5578, _ctx); /*10002*/
                _match_x2485 = kk_std_core_types__maybe_unbox(_x_x5572, KK_OWNED, _ctx); /*maybe<display/clioption>*/
                if (kk_std_core_types__is_Just(_match_x2485, _ctx)) {
                  kk_box_t _box_x1547 = _match_x2485._cons.Just.value;
                  kk_display__clioption _pat_30_0_0 = kk_display__clioption_unbox(_box_x1547, KK_BORROWED, _ctx);
                  struct kk_display_Clioption* _con_x5580 = kk_display__as_Clioption(_pat_30_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2485, _ctx);
                  kk_std_core_types__list x_11_11346;
                  kk_box_t _x_x5581;
                  kk_ref_t _x_x5582 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
                  _x_x5581 = kk_ref_get(_x_x5582,kk_context()); /*10000*/
                  x_11_11346 = kk_std_core_types__list_unbox(_x_x5581, KK_OWNED, _ctx); /*list<string>*/
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_11_11346, _ctx);
                    kk_box_t _x_x5583 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5584(error, name_0_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5583); return kk_Unit;
                  }
                  {
                    kk_display__mlift_hc__parse__loop_11176(error, name_0_0_0_0, options, remaining, x_11_11346, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_string_t _b_x1555_1727;
                  kk_string_t _x_x5586;
                  kk_define_string_literal(static, _s_x5587, 18, "unknown option: --", _ctx)
                  _x_x5586 = kk_string_dup(_s_x5587, _ctx); /*string*/
                  _b_x1555_1727 = kk_std_core_types__lp__plus__plus__rp_(_x_x5586, name_0_0_0_0, _ctx); /*string*/
                  kk_unit_t _brw_x2486 = kk_Unit;
                  kk_ref_set_borrow(error,(kk_string_box(_b_x1555_1727)),kk_context());
                  kk_ref_drop(error, _ctx);
                  _brw_x2486; return kk_Unit;
                }
              }
            }
            {
              kk_std_core_types__maybe _x_x1_31_11093;
              kk_string_t _x_x5588 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5589;
              kk_define_string_literal(static, _s_x5590, 1, "-", _ctx)
              _x_x5589 = kk_string_dup(_s_x5590, _ctx); /*string*/
              _x_x1_31_11093 = kk_std_core_sslice_starts_with(_x_x5588, _x_x5589, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2465;
              kk_box_t _x_x5591 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5592(_ctx), kk_std_core_types__maybe_box(_x_x1_31_11093, _ctx), _ctx); /*10001*/
              _match_x2465 = kk_bool_unbox(_x_x5591); /*bool*/
              if (_match_x2465) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t s_0_0;
                kk_box_t _x_x5594;
                kk_box_t _x_x5606;
                kk_string_t _x_x5607;
                kk_define_string_literal(static, _s_x5608, 1, "-", _ctx)
                _x_x5607 = kk_string_dup(_s_x5608, _ctx); /*string*/
                _x_x5606 = kk_string_box(_x_x5607); /*10001*/
                _x_x5594 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5595(_ctx), kk_string_box(a), _x_x5606, _ctx); /*10002*/
                s_0_0 = kk_string_unbox(_x_x5594); /*string*/
                kk_std_core_types__list _x_x1_33_11096;
                kk_box_t _x_x5609;
                kk_box_t _x_x5613;
                kk_display__clispec _x_x5614 = kk_display__clispec_dup(spec, _ctx); /*display/clispec*/
                _x_x5613 = kk_display__clispec_box(_x_x5614, _ctx); /*10000*/
                _x_x5609 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5610(_ctx), _x_x5613, _ctx); /*10001*/
                _x_x1_33_11096 = kk_std_core_types__list_unbox(_x_x5609, KK_OWNED, _ctx); /*list<display/cliflag>*/
                kk_std_core_types__maybe _match_x2473;
                kk_box_t _x_x5615;
                kk_box_t _x_x5621;
                kk_string_t _x_x5622 = kk_string_dup(s_0_0, _ctx); /*string*/
                _x_x5621 = kk_string_box(_x_x5622); /*10001*/
                _x_x5615 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5616(_ctx), kk_std_core_types__list_box(_x_x1_33_11096, _ctx), _x_x5621, _ctx); /*10002*/
                _match_x2473 = kk_std_core_types__maybe_unbox(_x_x5615, KK_OWNED, _ctx); /*maybe<display/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2473, _ctx)) {
                  kk_box_t _box_x1585 = _match_x2473._cons.Just.value;
                  kk_display__cliflag f_0_0 = kk_display__cliflag_unbox(_box_x1585, KK_BORROWED, _ctx);
                  struct kk_display_Cliflag* _con_x5623 = kk_display__as_Cliflag(f_0_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_string_drop(s_0_0, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_display__cliflag_dup(f_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2473, _ctx);
                  kk_std_core_types__list x_12_11348;
                  kk_box_t _x_x5624;
                  kk_ref_t _x_x5625 = kk_ref_dup(flags, _ctx); /*local-var<23386,list<string>>*/
                  _x_x5624 = kk_ref_get(_x_x5625,kk_context()); /*10000*/
                  x_12_11348 = kk_std_core_types__list_unbox(_x_x5624, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_12_11349 = kk_display__new_mlift_hc__parse__loop_11188_fun5626(f_0_0, flags, _ctx); /*(list<string>) -> <local<23386>,exn,display/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_12_11348, _ctx);
                    kk_box_t _x_x5632 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5633(next_12_11349, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5632); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11349, (next_12_11349, x_12_11348, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_36_11100;
                  kk_box_t _x_x5636 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5637(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_36_11100 = kk_std_core_types__list_unbox(_x_x5636, KK_OWNED, _ctx); /*list<display/clioption>*/
                  kk_std_core_types__maybe _match_x2474;
                  kk_box_t _x_x5640;
                  kk_box_t _x_x5646;
                  kk_string_t _x_x5647 = kk_string_dup(s_0_0, _ctx); /*string*/
                  _x_x5646 = kk_string_box(_x_x5647); /*10001*/
                  _x_x5640 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5641(_ctx), kk_std_core_types__list_box(_x_x1_36_11100, _ctx), _x_x5646, _ctx); /*10002*/
                  _match_x2474 = kk_std_core_types__maybe_unbox(_x_x5640, KK_OWNED, _ctx); /*maybe<display/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2474, _ctx)) {
                    kk_box_t _box_x1620 = _match_x2474._cons.Just.value;
                    kk_display__clioption o_0_0 = kk_display__clioption_unbox(_box_x1620, KK_BORROWED, _ctx);
                    struct kk_display_Clioption* _con_x5648 = kk_display__as_Clioption(o_0_0, _ctx);
                    kk_display__clioption_dup(o_0_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2474, _ctx);
                    kk_std_core_types__list x_13_11353;
                    kk_box_t _x_x5649;
                    kk_ref_t _x_x5650 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
                    _x_x5649 = kk_ref_get(_x_x5650,kk_context()); /*10000*/
                    x_13_11353 = kk_std_core_types__list_unbox(_x_x5649, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_13_11353, _ctx);
                      kk_box_t _x_x5651 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5652(error, o_0_0, options, remaining, s_0_0, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5651); return kk_Unit;
                    }
                    {
                      kk_display__mlift_hc__parse__loop_11183(error, o_0_0, options, remaining, s_0_0, x_13_11353, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1628_1743;
                    kk_string_t _x_x5654;
                    kk_define_string_literal(static, _s_x5655, 17, "unknown option: -", _ctx)
                    _x_x5654 = kk_string_dup(_s_x5655, _ctx); /*string*/
                    _b_x1628_1743 = kk_std_core_types__lp__plus__plus__rp_(_x_x5654, s_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2475 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1628_1743)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2475; return kk_Unit;
                  }
                }
              }
              {
                kk_ref_drop(options, _ctx);
                kk_ref_drop(flags, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__list _x_x1_40_11106;
                kk_box_t _x_x5656 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__parse__loop_11188_fun5657(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_40_11106 = kk_std_core_types__list_unbox(_x_x5656, KK_OWNED, _ctx); /*list<(string, display/clispec)>*/
                kk_std_core_types__maybe _match_x2466;
                kk_box_t _x_x5660;
                kk_box_t _x_x5665;
                kk_string_t _x_x5666 = kk_string_dup(a, _ctx); /*string*/
                _x_x5665 = kk_string_box(_x_x5666); /*10001*/
                _x_x5660 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__parse__loop_11188_fun5661(_ctx), kk_std_core_types__list_box(_x_x1_40_11106, _ctx), _x_x5665, _ctx); /*10002*/
                _match_x2466 = kk_std_core_types__maybe_unbox(_x_x5660, KK_OWNED, _ctx); /*maybe<(string, display/clispec)>*/
                if (kk_std_core_types__is_Just(_match_x2466, _ctx)) {
                  kk_box_t _box_x1645 = _match_x2466._cons.Just.value;
                  kk_ref_drop(positionals, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2466, _ctx);
                  kk_unit_t x_14_11355 = kk_Unit;
                  kk_unit_t _brw_x2470 = kk_Unit;
                  kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                  kk_ref_drop(subcmd, _ctx);
                  _brw_x2470;
                  if (kk_yielding(kk_context())) {
                    kk_box_t _x_x5667 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5668(remaining, sub__args, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5667); return kk_Unit;
                  }
                  {
                    kk_display__mlift_hc__parse__loop_11186(remaining, sub__args, x_14_11355, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_std_core_types__list x_15_11357;
                  kk_box_t _x_x5670;
                  kk_ref_t _x_x5671 = kk_ref_dup(positionals, _ctx); /*local-var<23386,list<string>>*/
                  _x_x5670 = kk_ref_get(_x_x5671,kk_context()); /*10000*/
                  x_15_11357 = kk_std_core_types__list_unbox(_x_x5670, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_15_11358 = kk_display__new_mlift_hc__parse__loop_11188_fun5672(a, positionals, _ctx); /*(list<string>) -> <local<23386>,display/hica-brk,exn,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_15_11357, _ctx);
                    kk_box_t _x_x5674 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11188_fun5675(next_15_11358, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5674); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11358, (next_15_11358, x_15_11357, _ctx), _ctx); return kk_Unit;
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
struct kk_display__mlift_hc__parse__loop_11189_fun5679__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_display__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11189_fun5679(kk_function_t _fself, kk_box_t _b_x1802, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11189_fun5679(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_display__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11189_fun5679__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11189_fun5679__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11189_fun5679, kk_context());
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

static kk_box_t kk_display__mlift_hc__parse__loop_11189_fun5679(kk_function_t _fself, kk_box_t _b_x1802, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11189_fun5679__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11189_fun5679__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<23386,string> */
  kk_ref_t flags = _self->flags; /* local-var<23386,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_display__clispec spec = _self->spec; /* display/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23386,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_display__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_unit_t wild___1804 = kk_Unit;
  kk_unit_unbox(_b_x1802);
  kk_unit_t _x_x5680 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11188(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, wild___1804, _ctx);
  return kk_unit_box(_x_x5680);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11189(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_display__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10770, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1798_1800 = kk_std_core_list_drop(_y_x10770, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t x_11362 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1798_1800, _ctx)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5678 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11189_fun5679(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5678); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11188(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11362, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11190_fun5684__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_display__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11190_fun5684(kk_function_t _fself, kk_box_t _b_x1810, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11190_fun5684(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_display__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11190_fun5684__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11190_fun5684__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11190_fun5684, kk_context());
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

static kk_box_t kk_display__mlift_hc__parse__loop_11190_fun5684(kk_function_t _fself, kk_box_t _b_x1810, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11190_fun5684__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11190_fun5684__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<23386,string> */
  kk_ref_t flags = _self->flags; /* local-var<23386,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_display__clispec spec = _self->spec; /* display/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23386,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_display__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10770_1812 = kk_std_core_types__list_unbox(_b_x1810, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5685 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11189(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _y_x10770_1812, _ctx);
  return kk_unit_box(_x_x5685);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11190(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_display__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t a, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, a : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list x_11364;
  kk_box_t _x_x5681;
  kk_ref_t _x_x5682 = kk_ref_dup(remaining, _ctx); /*local-var<23386,list<string>>*/
  _x_x5681 = kk_ref_get(_x_x5682,kk_context()); /*10000*/
  x_11364 = kk_std_core_types__list_unbox(_x_x5681, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11364, _ctx);
    kk_box_t _x_x5683 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11190_fun5684(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5683); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11189(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11364, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11191_fun5696__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11191_fun5696(kk_function_t _fself, kk_box_t _b_x1820, kk_box_t _b_x1821, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11191_fun5696(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__parse__loop_11191_fun5696, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11191_fun5696(kk_function_t _fself, kk_box_t _b_x1820, kk_box_t _b_x1821, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5697;
  kk_std_core_types__maybe _match_x2456 = kk_std_core_types__maybe_unbox(_b_x1820, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2456, _ctx)) {
    kk_box_t _box_x1813 = _match_x2456._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x1813);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2456, _ctx);
    kk_box_drop(_b_x1821, _ctx);
    _x_x5697 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x1814_1826;
    kk_string_t _x_x5698;
    kk_define_string_literal(static, _s_x5699, 22, "unexpected Nothing in ", _ctx)
    _x_x5698 = kk_string_dup(_s_x5699, _ctx); /*string*/
    kk_string_t _x_x5700 = kk_string_unbox(_b_x1821); /*string*/
    _b_x1814_1826 = kk_std_core_types__lp__plus__plus__rp_(_x_x5698, _x_x5700, _ctx); /*string*/
    kk_box_t _x_x5701 = kk_std_core_exn_throw(_b_x1814_1826, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5697 = kk_string_unbox(_x_x5701); /*string*/
  }
  return kk_string_box(_x_x5697);
}


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11191_fun5703__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_display__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11191_fun5703(kk_function_t _fself, kk_box_t _b_x1831, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11191_fun5703(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_display__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11191_fun5703__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11191_fun5703__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11191_fun5703, kk_context());
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

static kk_box_t kk_display__mlift_hc__parse__loop_11191_fun5703(kk_function_t _fself, kk_box_t _b_x1831, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11191_fun5703__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11191_fun5703__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<23386,string> */
  kk_ref_t flags = _self->flags; /* local-var<23386,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<23386,list<string>> */
  kk_display__clispec spec = _self->spec; /* display/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23386,string> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_display__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t a_1833 = kk_string_unbox(_b_x1831); /*string*/;
  kk_unit_t _x_x5704 = kk_Unit;
  kk_display__mlift_hc__parse__loop_11190(error, flags, options, positionals, remaining, spec, sub__args, subcmd, a_1833, _ctx);
  return kk_unit_box(_x_x5704);
}

kk_unit_t kk_display__mlift_hc__parse__loop_11191(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_display__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10768, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_11043 = kk_std_core_list__index(_y_x10768, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11044;
  kk_string_t _x_x5686;
  kk_define_string_literal(static, _s_x5687, 10, "display.kk", _ctx)
  _x_x5686 = kk_string_dup(_s_x5687, _ctx); /*string*/
  kk_string_t _x_x5688;
  kk_string_t _x_x5689;
  kk_define_string_literal(static, _s_x5690, 1, "(", _ctx)
  _x_x5689 = kk_string_dup(_s_x5690, _ctx); /*string*/
  kk_string_t _x_x5691;
  kk_string_t _x_x5692 = kk_std_core_int_show(kk_integer_from_small(748), _ctx); /*string*/
  kk_string_t _x_x5693;
  kk_define_string_literal(static, _s_x5694, 1, ")", _ctx)
  _x_x5693 = kk_string_dup(_s_x5694, _ctx); /*string*/
  _x_x5691 = kk_std_core_types__lp__plus__plus__rp_(_x_x5692, _x_x5693, _ctx); /*string*/
  _x_x5688 = kk_std_core_types__lp__plus__plus__rp_(_x_x5689, _x_x5691, _ctx); /*string*/
  _x_x2_11044 = kk_std_core_types__lp__plus__plus__rp_(_x_x5686, _x_x5688, _ctx); /*string*/
  kk_ssize_t _b_x1816_1822 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11366;
  kk_box_t _x_x5695 = kk_std_core_hnd__open_at2(_b_x1816_1822, kk_display__new_mlift_hc__parse__loop_11191_fun5696(_ctx), kk_std_core_types__maybe_box(_x_x1_11043, _ctx), kk_string_box(_x_x2_11044), _ctx); /*10002*/
  x_11366 = kk_string_unbox(_x_x5695); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11366, _ctx);
    kk_box_t _x_x5702 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11191_fun5703(error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5702); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11190(error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11366, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__parse__loop_11192_fun5707__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_display__mlift_hc__parse__loop_11192_fun5707(kk_function_t _fself, kk_box_t _b_x1839, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__parse__loop_11192_fun5707(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11192_fun5707__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__parse__loop_11192_fun5707__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__parse__loop_11192_fun5707, kk_context());
  _self->flags = flags;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__parse__loop_11192_fun5707(kk_function_t _fself, kk_box_t _b_x1839, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__parse__loop_11192_fun5707__t* _self = kk_function_as(struct kk_display__mlift_hc__parse__loop_11192_fun5707__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<23386,list<string>> */
  kk_ref_t options = _self->options; /* local-var<23386,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<23386,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<23386,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<23386,string> */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t _y_x10887_1841 = kk_string_unbox(_b_x1839); /*string*/;
  kk_display__parseraw _x_x5708 = kk_display__mlift_hc__parse__loop_11140(flags, options, positionals, sub__args, subcmd, _y_x10887_1841, _ctx); /*display/parseraw*/
  return kk_display__parseraw_box(_x_x5708, _ctx);
}

kk_display__parseraw kk_display__mlift_hc__parse__loop_11192(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t _y_x10886, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, ()) -> <div,exn,local<h>> parseraw */ 
  {
    kk_string_t x_11368;
    kk_box_t _x_x5705 = kk_ref_get(error,kk_context()); /*10000*/
    x_11368 = kk_string_unbox(_x_x5705); /*string*/
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_11368, _ctx);
      kk_box_t _x_x5706 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__parse__loop_11192_fun5707(flags, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
      return kk_display__parseraw_unbox(_x_x5706, KK_OWNED, _ctx);
    }
    {
      return kk_display__mlift_hc__parse__loop_11140(flags, options, positionals, sub__args, subcmd, x_11368, _ctx);
    }
  }
}


// lift anonymous function
struct kk_display_hc__parse__loop_fun5718__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__parse__loop_fun5718(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5718(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__parse__loop_fun5718, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_hc__parse__loop_fun5719__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__parse__loop_fun5719(kk_function_t _fself, kk_function_t _b_x1865, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5719(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__parse__loop_fun5719, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_hc__parse__loop_fun5720__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__parse__loop_fun5720(kk_function_t _fself, kk_box_t _b_x1859, kk_function_t _b_x1860, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5720(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__parse__loop_fun5720, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__parse__loop_fun5720(kk_function_t _fself, kk_box_t _b_x1859, kk_function_t _b_x1860, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_drop(_b_x1859, _ctx);
  kk_function_drop(_b_x1860, _ctx);
  return kk_unit_box(kk_Unit);
}
static kk_box_t kk_display_hc__parse__loop_fun5719(kk_function_t _fself, kk_function_t _b_x1865, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_hnd_protect(kk_unit_box(kk_Unit), kk_display_new_hc__parse__loop_fun5720(_ctx), _b_x1865, _ctx);
}
static kk_box_t kk_display_hc__parse__loop_fun5718(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_datatype_ptr_dropn(___wildcard_x688__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to(m, kk_display_new_hc__parse__loop_fun5719(_ctx), _ctx);
}


// lift anonymous function
struct kk_display_hc__parse__loop_fun5721__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__parse__loop_fun5721(kk_function_t _fself, kk_box_t _b_x1882, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5721(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__parse__loop_fun5721, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__parse__loop_fun5721(kk_function_t _fself, kk_box_t _b_x1882, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return _b_x1882;
}


// lift anonymous function
struct kk_display_hc__parse__loop_fun5723__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_display__clispec spec;
};
static kk_box_t kk_display_hc__parse__loop_fun5723(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5723(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_display__clispec spec, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5723__t* _self = kk_function_alloc_as(struct kk_display_hc__parse__loop_fun5723__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__parse__loop_fun5723, kk_context());
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
struct kk_display_hc__parse__loop_fun5726__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
};
static bool kk_display_hc__parse__loop_fun5726(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5726(kk_ref_t loc_4, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5726__t* _self = kk_function_alloc_as(struct kk_display_hc__parse__loop_fun5726__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__parse__loop_fun5726, kk_context());
  _self->loc_4 = loc_4;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_display_hc__parse__loop_fun5729__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
};
static kk_box_t kk_display_hc__parse__loop_fun5729(kk_function_t _fself, kk_box_t _b_x1872, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5729(kk_ref_t loc_4, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5729__t* _self = kk_function_alloc_as(struct kk_display_hc__parse__loop_fun5729__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__parse__loop_fun5729, kk_context());
  _self->loc_4 = loc_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__parse__loop_fun5729(kk_function_t _fself, kk_box_t _b_x1872, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5729__t* _self = kk_function_as(struct kk_display_hc__parse__loop_fun5729__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23386,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);}, {}, _ctx)
  bool _x_x5730;
  kk_string_t _x_x5731 = kk_string_unbox(_b_x1872); /*string*/
  _x_x5730 = kk_display__mlift_hc__parse__loop_11142(loc_4, _x_x5731, _ctx); /*bool*/
  return kk_bool_box(_x_x5730);
}
static bool kk_display_hc__parse__loop_fun5726(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5726__t* _self = kk_function_as(struct kk_display_hc__parse__loop_fun5726__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23386,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23386,string> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_string_t x_0_11387;
  kk_box_t _x_x5727 = kk_ref_get(loc_5,kk_context()); /*10000*/
  x_0_11387 = kk_string_unbox(_x_x5727); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_0_11387, _ctx);
    kk_box_t _x_x5728 = kk_std_core_hnd_yield_extend(kk_display_new_hc__parse__loop_fun5729(loc_4, _ctx), _ctx); /*10001*/
    return kk_bool_unbox(_x_x5728);
  }
  {
    return kk_display__mlift_hc__parse__loop_11142(loc_4, x_0_11387, _ctx);
  }
}


// lift anonymous function
struct kk_display_hc__parse__loop_fun5732__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_display__clispec spec;
};
static kk_unit_t kk_display_hc__parse__loop_fun5732(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5732(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_display__clispec spec, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5732__t* _self = kk_function_alloc_as(struct kk_display_hc__parse__loop_fun5732__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__parse__loop_fun5732, kk_context());
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
struct kk_display_hc__parse__loop_fun5736__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_display__clispec spec;
};
static kk_box_t kk_display_hc__parse__loop_fun5736(kk_function_t _fself, kk_box_t _b_x1878, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5736(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_display__clispec spec, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5736__t* _self = kk_function_alloc_as(struct kk_display_hc__parse__loop_fun5736__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__parse__loop_fun5736, kk_context());
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

static kk_box_t kk_display_hc__parse__loop_fun5736(kk_function_t _fself, kk_box_t _b_x1878, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5736__t* _self = kk_function_as(struct kk_display_hc__parse__loop_fun5736__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23386,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23386,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23386,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23386,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23386,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23386,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23386,string> */
  kk_display__clispec spec = _self->spec; /* display/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_display__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5737 = kk_Unit;
  kk_std_core_types__list _x_x5738 = kk_std_core_types__list_unbox(_b_x1878, KK_OWNED, _ctx); /*list<string>*/
  kk_display__mlift_hc__parse__loop_11191(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, _x_x5738, _ctx);
  return kk_unit_box(_x_x5737);
}
static kk_unit_t kk_display_hc__parse__loop_fun5732(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5732__t* _self = kk_function_as(struct kk_display_hc__parse__loop_fun5732__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23386,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23386,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23386,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23386,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23386,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23386,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23386,string> */
  kk_display__clispec spec = _self->spec; /* display/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_display__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list x_1_11389;
  kk_box_t _x_x5733;
  kk_ref_t _x_x5734 = kk_ref_dup(loc_4, _ctx); /*local-var<23386,list<string>>*/
  _x_x5733 = kk_ref_get(_x_x5734,kk_context()); /*10000*/
  x_1_11389 = kk_std_core_types__list_unbox(_x_x5733, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_1_11389, _ctx);
    kk_box_t _x_x5735 = kk_std_core_hnd_yield_extend(kk_display_new_hc__parse__loop_fun5736(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5735); return kk_Unit;
  }
  {
    kk_display__mlift_hc__parse__loop_11191(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, x_1_11389, _ctx); return kk_Unit;
  }
}
static kk_box_t kk_display_hc__parse__loop_fun5723(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5723__t* _self = kk_function_as(struct kk_display_hc__parse__loop_fun5723__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23386,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23386,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23386,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23386,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23386,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<23386,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23386,string> */
  kk_display__clispec spec = _self->spec; /* display/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_display__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5724 = kk_Unit;
  kk_function_t _x_x5725;
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5725 = kk_display_new_hc__parse__loop_fun5726(loc_4, loc_5, _ctx); /*() -> <div,local<23386>,exn,display/hica-brk> bool*/
  kk_std_core_while(_x_x5725, kk_display_new_hc__parse__loop_fun5732(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx);
  return kk_unit_box(_x_x5724);
}


// lift anonymous function
struct kk_display_hc__parse__loop_fun5741__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_5;
};
static kk_box_t kk_display_hc__parse__loop_fun5741(kk_function_t _fself, kk_box_t _b_x1898, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__parse__loop_fun5741(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5741__t* _self = kk_function_alloc_as(struct kk_display_hc__parse__loop_fun5741__t, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__parse__loop_fun5741, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  _self->loc_1 = loc_1;
  _self->loc_2 = loc_2;
  _self->loc_3 = loc_3;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__parse__loop_fun5741(kk_function_t _fself, kk_box_t _b_x1898, kk_context_t* _ctx) {
  struct kk_display_hc__parse__loop_fun5741__t* _self = kk_function_as(struct kk_display_hc__parse__loop_fun5741__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<23386,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<23386,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<23386,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<23386,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<23386,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<23386,string> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_display__parseraw _x_x5742;
  kk_unit_t _x_x5743 = kk_Unit;
  kk_unit_unbox(_b_x1898);
  _x_x5742 = kk_display__mlift_hc__parse__loop_11192(loc_5, loc, loc_0, loc_1, loc_3, loc_2, _x_x5743, _ctx); /*display/parseraw*/
  return kk_display__parseraw_box(_x_x5742, _ctx);
}

kk_display__parseraw kk_display_hc__parse__loop(kk_display__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure parseraw */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23386,list<string>>*/;
  kk_ref_t loc_0 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23386,list<(string, string)>>*/;
  kk_ref_t loc_1 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23386,list<string>>*/;
  kk_ref_t loc_2;
  kk_box_t _x_x5709;
  kk_string_t _x_x5710 = kk_string_empty(); /*string*/
  _x_x5709 = kk_string_box(_x_x5710); /*10000*/
  loc_2 = kk_ref_alloc(_x_x5709,kk_context()); /*local-var<23386,string>*/
  kk_ref_t loc_3 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<23386,list<string>>*/;
  kk_ref_t loc_4 = kk_ref_alloc((kk_std_core_types__list_box(args, _ctx)),kk_context()); /*local-var<23386,list<string>>*/;
  kk_ref_t loc_5;
  kk_box_t _x_x5712;
  kk_string_t _x_x5713 = kk_string_empty(); /*string*/
  _x_x5712 = kk_string_box(_x_x5713); /*10000*/
  loc_5 = kk_ref_alloc(_x_x5712,kk_context()); /*local-var<23386,string>*/
  kk_unit_t x_11384 = kk_Unit;
  kk_box_t _x_x5715;
  kk_display__hica_brk _x_x5716;
  kk_std_core_hnd__clause0 _x_x5717 = kk_std_core_hnd__new_Clause0(kk_display_new_hc__parse__loop_fun5718(_ctx), _ctx); /*hnd/clause0<10010,10011,10012,10013>*/
  _x_x5716 = kk_display__new_Hnd_hica_brk(kk_reuse_null, 0, kk_integer_from_small(3), _x_x5717, _ctx); /*display/hica-brk<30,31>*/
  kk_function_t _x_x5722;
  kk_ref_dup(loc, _ctx);
  kk_ref_dup(loc_0, _ctx);
  kk_ref_dup(loc_1, _ctx);
  kk_ref_dup(loc_2, _ctx);
  kk_ref_dup(loc_3, _ctx);
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5722 = kk_display_new_hc__parse__loop_fun5723(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx); /*() -> <display/hica-brk|671> 670*/
  _x_x5715 = kk_display_hica_brk_fs__handle(_x_x5716, kk_display_new_hc__parse__loop_fun5721(_ctx), _x_x5722, _ctx); /*672*/
  kk_unit_unbox(_x_x5715);
  kk_display__parseraw res_5;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5739;
    kk_function_t _x_x5740;
    kk_ref_dup(loc, _ctx);
    kk_ref_dup(loc_0, _ctx);
    kk_ref_dup(loc_1, _ctx);
    kk_ref_dup(loc_2, _ctx);
    kk_ref_dup(loc_3, _ctx);
    kk_ref_dup(loc_5, _ctx);
    _x_x5740 = kk_display_new_hc__parse__loop_fun5741(loc, loc_0, loc_1, loc_2, loc_3, loc_5, _ctx); /*(10000) -> 10002 10001*/
    _x_x5739 = kk_std_core_hnd_yield_extend(_x_x5740, _ctx); /*10001*/
    res_5 = kk_display__parseraw_unbox(_x_x5739, KK_OWNED, _ctx); /*display/parseraw*/
  }
  else {
    kk_ref_t _x_x5744 = kk_ref_dup(loc_5, _ctx); /*local-var<23386,string>*/
    kk_ref_t _x_x5745 = kk_ref_dup(loc, _ctx); /*local-var<23386,list<string>>*/
    kk_ref_t _x_x5746 = kk_ref_dup(loc_0, _ctx); /*local-var<23386,list<(string, string)>>*/
    kk_ref_t _x_x5747 = kk_ref_dup(loc_1, _ctx); /*local-var<23386,list<string>>*/
    kk_ref_t _x_x5748 = kk_ref_dup(loc_3, _ctx); /*local-var<23386,list<string>>*/
    kk_ref_t _x_x5749 = kk_ref_dup(loc_2, _ctx); /*local-var<23386,string>*/
    res_5 = kk_display__mlift_hc__parse__loop_11192(_x_x5744, _x_x5745, _x_x5746, _x_x5747, _x_x5748, _x_x5749, x_11384, _ctx); /*display/parseraw*/
  }
  kk_display__parseraw res_4;
  kk_box_t _x_x5750 = kk_std_core_hnd_prompt_local_var(loc_5, kk_display__parseraw_box(res_5, _ctx), _ctx); /*10001*/
  res_4 = kk_display__parseraw_unbox(_x_x5750, KK_OWNED, _ctx); /*display/parseraw*/
  kk_display__parseraw res_3;
  kk_box_t _x_x5751 = kk_std_core_hnd_prompt_local_var(loc_4, kk_display__parseraw_box(res_4, _ctx), _ctx); /*10001*/
  res_3 = kk_display__parseraw_unbox(_x_x5751, KK_OWNED, _ctx); /*display/parseraw*/
  kk_display__parseraw res_2;
  kk_box_t _x_x5752 = kk_std_core_hnd_prompt_local_var(loc_3, kk_display__parseraw_box(res_3, _ctx), _ctx); /*10001*/
  res_2 = kk_display__parseraw_unbox(_x_x5752, KK_OWNED, _ctx); /*display/parseraw*/
  kk_display__parseraw res_1;
  kk_box_t _x_x5753 = kk_std_core_hnd_prompt_local_var(loc_2, kk_display__parseraw_box(res_2, _ctx), _ctx); /*10001*/
  res_1 = kk_display__parseraw_unbox(_x_x5753, KK_OWNED, _ctx); /*display/parseraw*/
  kk_display__parseraw res_0;
  kk_box_t _x_x5754 = kk_std_core_hnd_prompt_local_var(loc_1, kk_display__parseraw_box(res_1, _ctx), _ctx); /*10001*/
  res_0 = kk_display__parseraw_unbox(_x_x5754, KK_OWNED, _ctx); /*display/parseraw*/
  kk_display__parseraw res;
  kk_box_t _x_x5755 = kk_std_core_hnd_prompt_local_var(loc_0, kk_display__parseraw_box(res_0, _ctx), _ctx); /*10001*/
  res = kk_display__parseraw_unbox(_x_x5755, KK_OWNED, _ctx); /*display/parseraw*/
  kk_box_t _x_x5756 = kk_std_core_hnd_prompt_local_var(loc, kk_display__parseraw_box(res, _ctx), _ctx); /*10001*/
  return kk_display__parseraw_unbox(_x_x5756, KK_OWNED, _ctx);
}
 
// monadic lift

kk_display__clioutcome kk_display__mlift_hc__cli__parse__args_11193(kk_std_core_types__list final__options, kk_std_core_types__list flags, kk_std_core_types__list positionals, kk_string_t subcmd, kk_display__clioutcome _y_x10903, kk_context_t* _ctx) { /* (final_options : list<(string, string)>, flags : list<string>, positionals : list<string>, subcmd : string, clioutcome) -> pure clioutcome */ 
  if (kk_display__is_Parsed(_y_x10903, _ctx)) {
    struct kk_display_Parsed* _con_x5757 = kk_display__as_Parsed(_y_x10903, _ctx);
    kk_display__cliresult hc__sub_0 = _con_x5757->cli__result;
    struct kk_display_Cliresult* _con_x5758 = kk_display__as_Cliresult(hc__sub_0, _ctx);
    kk_reuse_t _ru_x3097 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10903, _ctx)) {
      _ru_x3097 = (kk_datatype_ptr_reuse(_y_x10903, _ctx));
    }
    else {
      kk_display__cliresult_dup(hc__sub_0, _ctx);
      kk_datatype_ptr_decref(_y_x10903, _ctx);
    }
    kk_display__cliresult _b_x1932_1933 = hc__sub_0; /*display/cliresult*/;
    if kk_likely(_ru_x3097!=NULL) {
      kk_std_core_types__maybe _x_x5760 = kk_std_core_types__new_Just(kk_display__cliresult_box(_b_x1932_1933, _ctx), _ctx); /*maybe<10024>*/
      struct kk_display_Parsed* _con_x5759 = (struct kk_display_Parsed*)_ru_x3097;
      _con_x5759->cli__result = kk_display__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5760, _ctx);
      return kk_display__base_Parsed(_con_x5759, _ctx);
    }
    {
      kk_display__cliresult _x_x5761;
      kk_std_core_types__maybe _x_x5762 = kk_std_core_types__new_Just(kk_display__cliresult_box(_b_x1932_1933, _ctx), _ctx); /*maybe<10024>*/
      _x_x5761 = kk_display__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5762, _ctx); /*display/cliresult*/
      return kk_display__new_Parsed(kk_reuse_null, 0, _x_x5761, _ctx);
    }
  }
  {
    kk_string_drop(subcmd, _ctx);
    kk_std_core_types__list_drop(positionals, _ctx);
    kk_std_core_types__list_drop(flags, _ctx);
    kk_std_core_types__list_drop(final__options, _ctx);
    return _y_x10903;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5764__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5764(kk_function_t _fself, kk_box_t _b_x1936, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5764(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5764, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5764(kk_function_t _fself, kk_box_t _b_x1936, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5765;
  kk_display__parseraw _match_x2450 = kk_display__parseraw_unbox(_b_x1936, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5766 = kk_display__as_Parseraw(_match_x2450, _ctx);
    kk_string_t _x = _con_x5766->raw__error;
    kk_std_core_types__list _pat_0 = _con_x5766->raw__flags;
    kk_std_core_types__list _pat_1 = _con_x5766->raw__options;
    kk_std_core_types__list _pat_2 = _con_x5766->raw__positionals;
    kk_string_t _pat_3 = _con_x5766->raw__subcmd;
    kk_std_core_types__list _pat_4 = _con_x5766->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2450, _ctx)) {
      kk_std_core_types__list_drop(_pat_4, _ctx);
      kk_string_drop(_pat_3, _ctx);
      kk_std_core_types__list_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2450, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2450, _ctx);
    }
    _x_x5765 = _x; /*string*/
  }
  return kk_string_box(_x_x5765);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5770__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5770(kk_function_t _fself, kk_box_t _b_x1942, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5770(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5770, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5770(kk_function_t _fself, kk_box_t _b_x1942, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5771;
  kk_display__parseraw _match_x2449 = kk_display__parseraw_unbox(_b_x1942, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5772 = kk_display__as_Parseraw(_match_x2449, _ctx);
    kk_string_t _pat_0_0 = _con_x5772->raw__error;
    kk_std_core_types__list _x_0 = _con_x5772->raw__flags;
    kk_std_core_types__list _pat_1_0 = _con_x5772->raw__options;
    kk_std_core_types__list _pat_2_0 = _con_x5772->raw__positionals;
    kk_string_t _pat_3_0 = _con_x5772->raw__subcmd;
    kk_std_core_types__list _pat_4_0 = _con_x5772->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2449, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_string_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2449, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2449, _ctx);
    }
    _x_x5771 = _x_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5771, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5776__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5776(kk_function_t _fself, kk_box_t _b_x1948, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5776(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5776, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5776(kk_function_t _fself, kk_box_t _b_x1948, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5777;
  kk_display__parseraw _match_x2448 = kk_display__parseraw_unbox(_b_x1948, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5778 = kk_display__as_Parseraw(_match_x2448, _ctx);
    kk_string_t _pat_0_1 = _con_x5778->raw__error;
    kk_std_core_types__list _pat_1_1 = _con_x5778->raw__flags;
    kk_std_core_types__list _x_1 = _con_x5778->raw__options;
    kk_std_core_types__list _pat_2_1 = _con_x5778->raw__positionals;
    kk_string_t _pat_3_1 = _con_x5778->raw__subcmd;
    kk_std_core_types__list _pat_4_1 = _con_x5778->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2448, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_string_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_std_core_types__list_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2448, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2448, _ctx);
    }
    _x_x5777 = _x_1; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5777, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5782__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5782(kk_function_t _fself, kk_box_t _b_x1954, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5782(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5782, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5782(kk_function_t _fself, kk_box_t _b_x1954, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5783;
  kk_display__parseraw _match_x2447 = kk_display__parseraw_unbox(_b_x1954, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5784 = kk_display__as_Parseraw(_match_x2447, _ctx);
    kk_string_t _pat_0_2 = _con_x5784->raw__error;
    kk_std_core_types__list _pat_1_2 = _con_x5784->raw__flags;
    kk_std_core_types__list _pat_2_2 = _con_x5784->raw__options;
    kk_std_core_types__list _x_2 = _con_x5784->raw__positionals;
    kk_string_t _pat_3_2 = _con_x5784->raw__subcmd;
    kk_std_core_types__list _pat_4_2 = _con_x5784->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2447, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_string_drop(_pat_3_2, _ctx);
      kk_std_core_types__list_drop(_pat_2_2, _ctx);
      kk_std_core_types__list_drop(_pat_1_2, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(_match_x2447, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2447, _ctx);
    }
    _x_x5783 = _x_2; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5783, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5788__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5788(kk_function_t _fself, kk_box_t _b_x1960, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5788(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5788, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5788(kk_function_t _fself, kk_box_t _b_x1960, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5789;
  kk_display__parseraw _match_x2446 = kk_display__parseraw_unbox(_b_x1960, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5790 = kk_display__as_Parseraw(_match_x2446, _ctx);
    kk_string_t _pat_0_3 = _con_x5790->raw__error;
    kk_std_core_types__list _pat_1_3 = _con_x5790->raw__flags;
    kk_std_core_types__list _pat_2_3 = _con_x5790->raw__options;
    kk_std_core_types__list _pat_3_3 = _con_x5790->raw__positionals;
    kk_string_t _x_3 = _con_x5790->raw__subcmd;
    kk_std_core_types__list _pat_4_3 = _con_x5790->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2446, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_std_core_types__list_drop(_pat_2_3, _ctx);
      kk_std_core_types__list_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(_match_x2446, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2446, _ctx);
    }
    _x_x5789 = _x_3; /*string*/
  }
  return kk_string_box(_x_x5789);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5794__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5794(kk_function_t _fself, kk_box_t _b_x1966, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5794(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5794, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5794(kk_function_t _fself, kk_box_t _b_x1966, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5795;
  kk_display__parseraw _match_x2445 = kk_display__parseraw_unbox(_b_x1966, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5796 = kk_display__as_Parseraw(_match_x2445, _ctx);
    kk_string_t _pat_0_4 = _con_x5796->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x5796->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x5796->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x5796->raw__positionals;
    kk_string_t _pat_4_4 = _con_x5796->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x5796->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2445, _ctx)) {
      kk_string_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_std_core_types__list_drop(_pat_2_4, _ctx);
      kk_std_core_types__list_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(_match_x2445, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2445, _ctx);
    }
    _x_x5795 = _x_4; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5795, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5805__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5805(kk_function_t _fself, kk_box_t _b_x1972, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5805(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5805, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5805(kk_function_t _fself, kk_box_t _b_x1972, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5806;
  bool b_2070 = kk_bool_unbox(_b_x1972); /*bool*/;
  if (b_2070) {
    _x_x5806 = false; /*bool*/
  }
  else {
    _x_x5806 = true; /*bool*/
  }
  return kk_bool_box(_x_x5806);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5808__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5808(kk_function_t _fself, kk_box_t _b_x1981, kk_box_t _b_x1982, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5808(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5808, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5811__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5811(kk_function_t _fself, kk_box_t _b_x1976, kk_box_t _b_x1977, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5811(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5811, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5811(kk_function_t _fself, kk_box_t _b_x1976, kk_box_t _b_x1977, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5812;
  kk_std_core_types__list _x_x5813 = kk_std_core_types__list_unbox(_b_x1976, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_display__clioption _x_x5814 = kk_display__clioption_unbox(_b_x1977, KK_OWNED, _ctx); /*display/clioption*/
  _x_x5812 = kk_display_hc__add__default(_x_x5813, _x_x5814, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5812, _ctx);
}
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5808(kk_function_t _fself, kk_box_t _b_x1981, kk_box_t _b_x1982, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5809;
  kk_display__clispec _match_x2442 = kk_display__clispec_unbox(_b_x1981, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5810 = kk_display__as_Clispec(_match_x2442, _ctx);
    kk_string_t _pat_0_7 = _con_x5810->app__name;
    kk_string_t _pat_1_6 = _con_x5810->app__version;
    kk_string_t _pat_2_6 = _con_x5810->app__about;
    kk_std_core_types__list _pat_3_6 = _con_x5810->app__flags;
    kk_std_core_types__list _x_5 = _con_x5810->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5810->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5810->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2442, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_6, _ctx);
      kk_string_drop(_pat_0_7, _ctx);
      kk_datatype_ptr_free(_match_x2442, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2442, _ctx);
    }
    _x_x5809 = _x_5; /*list<display/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x5809, _b_x1982, kk_display__new_mlift_hc__cli__parse__args_11194_fun5811(_ctx), _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5818__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5818(kk_function_t _fself, kk_box_t _b_x2005, kk_box_t _b_x2006, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5818(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5818, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5821__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5821(kk_function_t _fself, kk_integer_t _b_x1995, kk_box_t _b_x1996, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5821(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5821, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5821(kk_function_t _fself, kk_integer_t _b_x1995, kk_box_t _b_x1996, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x5822 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x1995, _ctx), _b_x1996, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5822, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5826__t {
  struct kk_function_s _base;
  kk_box_t _b_x2006;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5826(kk_function_t _fself, kk_box_t _b_x2000, kk_box_t _b_x2001, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5826(kk_box_t _b_x2006, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__cli__parse__args_11194_fun5826__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__cli__parse__args_11194_fun5826__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__cli__parse__args_11194_fun5826, kk_context());
  _self->_b_x2006 = _b_x2006;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5826(kk_function_t _fself, kk_box_t _b_x2000, kk_box_t _b_x2001, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__cli__parse__args_11194_fun5826__t* _self = kk_function_as(struct kk_display__mlift_hc__cli__parse__args_11194_fun5826__t*, _fself, _ctx);
  kk_box_t _b_x2006 = _self->_b_x2006; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2006, _ctx);}, {}, _ctx)
  kk_string_t _x_x5827;
  kk_std_core_types__list _x_x5828 = kk_std_core_types__list_unbox(_b_x2006, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x5829 = kk_string_unbox(_b_x2000); /*string*/
  kk_std_core_types__tuple2 _x_x5830 = kk_std_core_types__tuple2_unbox(_b_x2001, KK_OWNED, _ctx); /*(int, display/cliarg)*/
  _x_x5827 = kk_display_hc__check__one__arg(_x_x5828, _x_x5829, _x_x5830, _ctx); /*string*/
  return kk_string_box(_x_x5827);
}
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5818(kk_function_t _fself, kk_box_t _b_x2005, kk_box_t _b_x2006, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x1997_2010;
  kk_std_core_types__list _x_x5819;
  kk_display__clispec _match_x2441 = kk_display__clispec_unbox(_b_x2005, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5820 = kk_display__as_Clispec(_match_x2441, _ctx);
    kk_string_t _pat_0_8 = _con_x5820->app__name;
    kk_string_t _pat_1_7 = _con_x5820->app__version;
    kk_string_t _pat_2_7 = _con_x5820->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5820->app__flags;
    kk_std_core_types__list _pat_4_7 = _con_x5820->app__options;
    kk_std_core_types__list _x_6 = _con_x5820->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5820->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2441, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_8, _ctx);
      kk_datatype_ptr_free(_match_x2441, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2441, _ctx);
    }
    _x_x5819 = _x_6; /*list<display/cliarg>*/
  }
  _b_x1997_2010 = kk_std_core_list_map_indexed(_x_x5819, kk_display__new_mlift_hc__cli__parse__args_11194_fun5821(_ctx), _ctx); /*list<(int, display/cliarg)>*/
  kk_box_t _x_x5823;
  kk_string_t _x_x5824 = kk_string_empty(); /*string*/
  _x_x5823 = kk_string_box(_x_x5824); /*10002*/
  return kk_std_core_list_foldl(_b_x1997_2010, _x_x5823, kk_display__new_mlift_hc__cli__parse__args_11194_fun5826(_b_x2006, _ctx), _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5837__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5837(kk_function_t _fself, kk_box_t _b_x2023, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5837(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5837, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5837(kk_function_t _fself, kk_box_t _b_x2023, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5838;
  bool b_0_2071 = kk_bool_unbox(_b_x2023); /*bool*/;
  if (b_0_2071) {
    _x_x5838 = false; /*bool*/
  }
  else {
    _x_x5838 = true; /*bool*/
  }
  return kk_bool_box(_x_x5838);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5841__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5841(kk_function_t _fself, kk_box_t _b_x2026, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5841(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5841, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5841(kk_function_t _fself, kk_box_t _b_x2026, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5842;
  bool b_1_2072 = kk_bool_unbox(_b_x2026); /*bool*/;
  if (b_1_2072) {
    _x_x5842 = false; /*bool*/
  }
  else {
    _x_x5842 = true; /*bool*/
  }
  return kk_bool_box(_x_x5842);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5844__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5844(kk_function_t _fself, kk_box_t _b_x2029, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5844(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5844, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5844(kk_function_t _fself, kk_box_t _b_x2029, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5845;
  kk_display__clispec _match_x2436 = kk_display__clispec_unbox(_b_x2029, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5846 = kk_display__as_Clispec(_match_x2436, _ctx);
    kk_string_t _pat_0_11 = _con_x5846->app__name;
    kk_string_t _pat_1_7_0 = _con_x5846->app__version;
    kk_string_t _pat_2_7_0 = _con_x5846->app__about;
    kk_std_core_types__list _pat_3_7_0 = _con_x5846->app__flags;
    kk_std_core_types__list _pat_4_7_0 = _con_x5846->app__options;
    kk_std_core_types__list _pat_5_2 = _con_x5846->app__args;
    kk_std_core_types__list _x_7 = _con_x5846->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2436, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0, _ctx);
      kk_string_drop(_pat_2_7_0, _ctx);
      kk_string_drop(_pat_1_7_0, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2436, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2436, _ctx);
    }
    _x_x5845 = _x_7; /*list<(string, display/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5845, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5848__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5848(kk_function_t _fself, kk_box_t _b_x2041, kk_box_t _b_x2042, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5848(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5848, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5850__t {
  struct kk_function_s _base;
  kk_string_t name_2074;
};
static bool kk_display__mlift_hc__cli__parse__args_11194_fun5850(kk_function_t _fself, kk_box_t _b_x2037, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5850(kk_string_t name_2074, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__cli__parse__args_11194_fun5850__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__cli__parse__args_11194_fun5850__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__cli__parse__args_11194_fun5850, kk_context());
  _self->name_2074 = name_2074;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display__mlift_hc__cli__parse__args_11194_fun5850(kk_function_t _fself, kk_box_t _b_x2037, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__cli__parse__args_11194_fun5850__t* _self = kk_function_as(struct kk_display__mlift_hc__cli__parse__args_11194_fun5850__t*, _fself, _ctx);
  kk_string_t name_2074 = _self->name_2074; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2074, _ctx);}, {}, _ctx)
  kk_string_t _x_x5851;
  kk_std_core_types__tuple2 _match_x2435 = kk_std_core_types__tuple2_unbox(_b_x2037, KK_OWNED, _ctx); /*(string, display/clispec)*/;
  {
    kk_box_t _box_x2033 = _match_x2435.fst;
    kk_box_t _box_x2034 = _match_x2435.snd;
    kk_string_t _x_6_0 = kk_string_unbox(_box_x2033);
    kk_string_dup(_x_6_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2435, _ctx);
    _x_x5851 = _x_6_0; /*string*/
  }
  return kk_string_is_eq(_x_x5851,name_2074,kk_context());
}
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5848(kk_function_t _fself, kk_box_t _b_x2041, kk_box_t _b_x2042, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5849;
  kk_std_core_types__list commands_2073 = kk_std_core_types__list_unbox(_b_x2041, KK_OWNED, _ctx); /*list<(string, display/clispec)>*/;
  kk_string_t name_2074 = kk_string_unbox(_b_x2042); /*string*/;
  _x_x5849 = kk_std_core_list_find(commands_2073, kk_display__new_mlift_hc__cli__parse__args_11194_fun5850(name_2074, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5849, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5856__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5856(kk_function_t _fself, kk_box_t _b_x2048, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5856(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__args_11194_fun5856, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5856(kk_function_t _fself, kk_box_t _b_x2048, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_display__clispec _x_x5857;
  kk_std_core_types__tuple2 _match_x2434 = kk_std_core_types__tuple2_unbox(_b_x2048, KK_OWNED, _ctx); /*(string, display/clispec)*/;
  {
    kk_box_t _box_x2044 = _match_x2434.fst;
    kk_box_t _box_x2045 = _match_x2434.snd;
    kk_display__clispec _x_8 = kk_display__clispec_unbox(_box_x2045, KK_BORROWED, _ctx);
    kk_display__clispec_dup(_x_8, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2434, _ctx);
    _x_x5857 = _x_8; /*display/clispec*/
  }
  return kk_display__clispec_box(_x_x5857, _ctx);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__args_11194_fun5859__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_0;
  kk_std_core_types__list flags_0;
  kk_std_core_types__list positionals_0;
  kk_string_t subcmd_0;
};
static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5859(kk_function_t _fself, kk_box_t _b_x2053, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__args_11194_fun5859(kk_std_core_types__list final__options_0, kk_std_core_types__list flags_0, kk_std_core_types__list positionals_0, kk_string_t subcmd_0, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__cli__parse__args_11194_fun5859__t* _self = kk_function_alloc_as(struct kk_display__mlift_hc__cli__parse__args_11194_fun5859__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display__mlift_hc__cli__parse__args_11194_fun5859, kk_context());
  _self->final__options_0 = final__options_0;
  _self->flags_0 = flags_0;
  _self->positionals_0 = positionals_0;
  _self->subcmd_0 = subcmd_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__args_11194_fun5859(kk_function_t _fself, kk_box_t _b_x2053, kk_context_t* _ctx) {
  struct kk_display__mlift_hc__cli__parse__args_11194_fun5859__t* _self = kk_function_as(struct kk_display__mlift_hc__cli__parse__args_11194_fun5859__t*, _fself, _ctx);
  kk_std_core_types__list final__options_0 = _self->final__options_0; /* list<(string, string)> */
  kk_std_core_types__list flags_0 = _self->flags_0; /* list<string> */
  kk_std_core_types__list positionals_0 = _self->positionals_0; /* list<string> */
  kk_string_t subcmd_0 = _self->subcmd_0; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_0, _ctx);kk_std_core_types__list_dup(flags_0, _ctx);kk_std_core_types__list_dup(positionals_0, _ctx);kk_string_dup(subcmd_0, _ctx);}, {}, _ctx)
  kk_display__clioutcome _y_x10903_0_2069 = kk_display__clioutcome_unbox(_b_x2053, KK_OWNED, _ctx); /*display/clioutcome*/;
  kk_display__clioutcome _x_x5860 = kk_display__mlift_hc__cli__parse__args_11193(final__options_0, flags_0, positionals_0, subcmd_0, _y_x10903_0_2069, _ctx); /*display/clioutcome*/
  return kk_display__clioutcome_box(_x_x5860, _ctx);
}

kk_display__clioutcome kk_display__mlift_hc__cli__parse__args_11194(kk_display__clispec spec, kk_display__parseraw hc__raw, kk_context_t* _ctx) { /* (spec : clispec, hc_raw : parseraw) -> pure clioutcome */ 
  kk_string_t error;
  kk_box_t _x_x5763;
  kk_box_t _x_x5767;
  kk_display__parseraw _x_x5768 = kk_display__parseraw_dup(hc__raw, _ctx); /*display/parseraw*/
  _x_x5767 = kk_display__parseraw_box(_x_x5768, _ctx); /*10000*/
  _x_x5763 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5764(_ctx), _x_x5767, _ctx); /*10001*/
  error = kk_string_unbox(_x_x5763); /*string*/
  kk_std_core_types__list flags_0;
  kk_box_t _x_x5769;
  kk_box_t _x_x5773;
  kk_display__parseraw _x_x5774 = kk_display__parseraw_dup(hc__raw, _ctx); /*display/parseraw*/
  _x_x5773 = kk_display__parseraw_box(_x_x5774, _ctx); /*10000*/
  _x_x5769 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5770(_ctx), _x_x5773, _ctx); /*10001*/
  flags_0 = kk_std_core_types__list_unbox(_x_x5769, KK_OWNED, _ctx); /*list<string>*/
  kk_std_core_types__list options;
  kk_box_t _x_x5775;
  kk_box_t _x_x5779;
  kk_display__parseraw _x_x5780 = kk_display__parseraw_dup(hc__raw, _ctx); /*display/parseraw*/
  _x_x5779 = kk_display__parseraw_box(_x_x5780, _ctx); /*10000*/
  _x_x5775 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5776(_ctx), _x_x5779, _ctx); /*10001*/
  options = kk_std_core_types__list_unbox(_x_x5775, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_std_core_types__list positionals_0;
  kk_box_t _x_x5781;
  kk_box_t _x_x5785;
  kk_display__parseraw _x_x5786 = kk_display__parseraw_dup(hc__raw, _ctx); /*display/parseraw*/
  _x_x5785 = kk_display__parseraw_box(_x_x5786, _ctx); /*10000*/
  _x_x5781 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5782(_ctx), _x_x5785, _ctx); /*10001*/
  positionals_0 = kk_std_core_types__list_unbox(_x_x5781, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t subcmd_0;
  kk_box_t _x_x5787;
  kk_box_t _x_x5791;
  kk_display__parseraw _x_x5792 = kk_display__parseraw_dup(hc__raw, _ctx); /*display/parseraw*/
  _x_x5791 = kk_display__parseraw_box(_x_x5792, _ctx); /*10000*/
  _x_x5787 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5788(_ctx), _x_x5791, _ctx); /*10001*/
  subcmd_0 = kk_string_unbox(_x_x5787); /*string*/
  kk_std_core_types__list sub__args;
  kk_box_t _x_x5793 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5794(_ctx), kk_display__parseraw_box(hc__raw, _ctx), _ctx); /*10001*/
  sub__args = kk_std_core_types__list_unbox(_x_x5793, KK_OWNED, _ctx); /*list<string>*/
  bool _match_x2427;
  kk_string_t _x_x5797 = kk_string_dup(error, _ctx); /*string*/
  kk_string_t _x_x5798;
  kk_define_string_literal(static, _s_x5799, 8, "__help__", _ctx)
  _x_x5798 = kk_string_dup(_s_x5799, _ctx); /*string*/
  _match_x2427 = kk_string_is_eq(_x_x5797,_x_x5798,kk_context()); /*bool*/
  if (_match_x2427) {
    kk_string_drop(subcmd_0, _ctx);
    kk_std_core_types__list_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_std_core_types__list_drop(positionals_0, _ctx);
    kk_std_core_types__list_drop(options, _ctx);
    kk_std_core_types__list_drop(flags_0, _ctx);
    kk_string_drop(error, _ctx);
    return kk_display__new_Help(_ctx);
  }
  {
    bool _match_x2428;
    kk_string_t _x_x5800 = kk_string_dup(error, _ctx); /*string*/
    kk_string_t _x_x5801;
    kk_define_string_literal(static, _s_x5802, 11, "__version__", _ctx)
    _x_x5801 = kk_string_dup(_s_x5802, _ctx); /*string*/
    _match_x2428 = kk_string_is_eq(_x_x5800,_x_x5801,kk_context()); /*bool*/
    if (_match_x2428) {
      kk_string_drop(subcmd_0, _ctx);
      kk_std_core_types__list_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_0, _ctx);
      kk_std_core_types__list_drop(options, _ctx);
      kk_std_core_types__list_drop(flags_0, _ctx);
      kk_string_drop(error, _ctx);
      return kk_display__new_Version(_ctx);
    }
    {
      bool _x_x1_5_11115;
      kk_integer_t _brw_x2443;
      kk_string_t _x_x5803 = kk_string_dup(error, _ctx); /*string*/
      _brw_x2443 = kk_std_core_string_chars_fs_count(_x_x5803, _ctx); /*int*/
      bool _brw_x2444 = kk_integer_eq_borrow(_brw_x2443,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2443, _ctx);
      _x_x1_5_11115 = _brw_x2444; /*bool*/
      bool _match_x2429;
      kk_box_t _x_x5804 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5805(_ctx), kk_bool_box(_x_x1_5_11115), _ctx); /*10001*/
      _match_x2429 = kk_bool_unbox(_x_x5804); /*bool*/
      if (_match_x2429) {
        kk_string_drop(subcmd_0, _ctx);
        kk_std_core_types__list_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_0, _ctx);
        kk_std_core_types__list_drop(options, _ctx);
        kk_std_core_types__list_drop(flags_0, _ctx);
        return kk_display__new_CliError(kk_reuse_null, 0, error, _ctx);
      }
      {
        kk_string_drop(error, _ctx);
        kk_std_core_types__list final__options_0;
        kk_box_t _x_x5807;
        kk_box_t _x_x5815;
        kk_display__clispec _x_x5816 = kk_display__clispec_dup(spec, _ctx); /*display/clispec*/
        _x_x5815 = kk_display__clispec_box(_x_x5816, _ctx); /*10000*/
        _x_x5807 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__cli__parse__args_11194_fun5808(_ctx), _x_x5815, kk_std_core_types__list_box(options, _ctx), _ctx); /*10002*/
        final__options_0 = kk_std_core_types__list_unbox(_x_x5807, KK_OWNED, _ctx); /*list<(string, string)>*/
        kk_string_t req__err;
        kk_box_t _x_x5817;
        kk_box_t _x_x5831;
        kk_display__clispec _x_x5832 = kk_display__clispec_dup(spec, _ctx); /*display/clispec*/
        _x_x5831 = kk_display__clispec_box(_x_x5832, _ctx); /*10000*/
        kk_box_t _x_x5833;
        kk_std_core_types__list _x_x5834 = kk_std_core_types__list_dup(positionals_0, _ctx); /*list<string>*/
        _x_x5833 = kk_std_core_types__list_box(_x_x5834, _ctx); /*10001*/
        _x_x5817 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__cli__parse__args_11194_fun5818(_ctx), _x_x5831, _x_x5833, _ctx); /*10002*/
        req__err = kk_string_unbox(_x_x5817); /*string*/
        bool _x_x1_8_11120;
        kk_integer_t _brw_x2439;
        kk_string_t _x_x5835 = kk_string_dup(req__err, _ctx); /*string*/
        _brw_x2439 = kk_std_core_string_chars_fs_count(_x_x5835, _ctx); /*int*/
        bool _brw_x2440 = kk_integer_eq_borrow(_brw_x2439,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2439, _ctx);
        _x_x1_8_11120 = _brw_x2440; /*bool*/
        bool _match_x2430;
        kk_box_t _x_x5836 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5837(_ctx), kk_bool_box(_x_x1_8_11120), _ctx); /*10001*/
        _match_x2430 = kk_bool_unbox(_x_x5836); /*bool*/
        if (_match_x2430) {
          kk_string_drop(subcmd_0, _ctx);
          kk_std_core_types__list_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_0, _ctx);
          kk_std_core_types__list_drop(flags_0, _ctx);
          kk_std_core_types__list_drop(final__options_0, _ctx);
          return kk_display__new_CliError(kk_reuse_null, 0, req__err, _ctx);
        }
        {
          kk_string_drop(req__err, _ctx);
          bool _x_x1_9_11121;
          kk_integer_t _brw_x2437;
          kk_string_t _x_x5839 = kk_string_dup(subcmd_0, _ctx); /*string*/
          _brw_x2437 = kk_std_core_string_chars_fs_count(_x_x5839, _ctx); /*int*/
          bool _brw_x2438 = kk_integer_eq_borrow(_brw_x2437,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2437, _ctx);
          _x_x1_9_11121 = _brw_x2438; /*bool*/
          bool _match_x2431;
          kk_box_t _x_x5840 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5841(_ctx), kk_bool_box(_x_x1_9_11121), _ctx); /*10001*/
          _match_x2431 = kk_bool_unbox(_x_x5840); /*bool*/
          if (_match_x2431) {
            kk_std_core_types__list _x_x1_10_11122;
            kk_box_t _x_x5843 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5844(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
            _x_x1_10_11122 = kk_std_core_types__list_unbox(_x_x5843, KK_OWNED, _ctx); /*list<(string, display/clispec)>*/
            kk_std_core_types__maybe _match_x2432;
            kk_box_t _x_x5847;
            kk_box_t _x_x5852;
            kk_string_t _x_x5853 = kk_string_dup(subcmd_0, _ctx); /*string*/
            _x_x5852 = kk_string_box(_x_x5853); /*10001*/
            _x_x5847 = kk_std_core_hnd__open_none2(kk_display__new_mlift_hc__cli__parse__args_11194_fun5848(_ctx), kk_std_core_types__list_box(_x_x1_10_11122, _ctx), _x_x5852, _ctx); /*10002*/
            _match_x2432 = kk_std_core_types__maybe_unbox(_x_x5847, KK_OWNED, _ctx); /*maybe<(string, display/clispec)>*/
            if (kk_std_core_types__is_Just(_match_x2432, _ctx)) {
              kk_box_t _box_x2043 = _match_x2432._cons.Just.value;
              kk_std_core_types__tuple2 pair_0_0 = kk_std_core_types__tuple2_unbox(_box_x2043, KK_BORROWED, _ctx);
              kk_std_core_types__tuple2_dup(pair_0_0, _ctx);
              kk_std_core_types__maybe_drop(_match_x2432, _ctx);
              kk_display__clioutcome x_11391;
              kk_display__clispec _x_x5854;
              kk_box_t _x_x5855 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__args_11194_fun5856(_ctx), kk_std_core_types__tuple2_box(pair_0_0, _ctx), _ctx); /*10001*/
              _x_x5854 = kk_display__clispec_unbox(_x_x5855, KK_OWNED, _ctx); /*display/clispec*/
              x_11391 = kk_display_hc__cli__parse__args(_x_x5854, sub__args, _ctx); /*display/clioutcome*/
              if (kk_yielding(kk_context())) {
                kk_display__clioutcome_drop(x_11391, _ctx);
                kk_box_t _x_x5858 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__cli__parse__args_11194_fun5859(final__options_0, flags_0, positionals_0, subcmd_0, _ctx), _ctx); /*10001*/
                return kk_display__clioutcome_unbox(_x_x5858, KK_OWNED, _ctx);
              }
              {
                return kk_display__mlift_hc__cli__parse__args_11193(final__options_0, flags_0, positionals_0, subcmd_0, x_11391, _ctx);
              }
            }
            {
              kk_std_core_types__list_drop(sub__args, _ctx);
              kk_std_core_types__list_drop(positionals_0, _ctx);
              kk_std_core_types__list_drop(flags_0, _ctx);
              kk_std_core_types__list_drop(final__options_0, _ctx);
              kk_string_t _x_x5861;
              kk_string_t _x_x5862;
              kk_define_string_literal(static, _s_x5863, 17, "unknown command: ", _ctx)
              _x_x5862 = kk_string_dup(_s_x5863, _ctx); /*string*/
              _x_x5861 = kk_std_core_types__lp__plus__plus__rp_(_x_x5862, subcmd_0, _ctx); /*string*/
              return kk_display__new_CliError(kk_reuse_null, 0, _x_x5861, _ctx);
            }
          }
          {
            kk_string_drop(subcmd_0, _ctx);
            kk_std_core_types__list_drop(sub__args, _ctx);
            kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
            kk_display__cliresult _x_x5864;
            kk_string_t _x_x5865 = kk_string_empty(); /*string*/
            _x_x5864 = kk_display__new_Cliresult(kk_reuse_null, 0, flags_0, final__options_0, positionals_0, _x_x5865, kk_std_core_types__new_Nothing(_ctx), _ctx); /*display/cliresult*/
            return kk_display__new_Parsed(kk_reuse_null, 0, _x_x5864, _ctx);
          }
        }
      }
    }
  }
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5869__t {
  struct kk_function_s _base;
  kk_display__clispec spec_2;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5869(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5869(kk_display__clispec spec_2, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__args_fun5869__t* _self = kk_function_alloc_as(struct kk_display_hc__cli__parse__args_fun5869__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__cli__parse__args_fun5869, kk_context());
  _self->spec_2 = spec_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5869(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__args_fun5869__t* _self = kk_function_as(struct kk_display_hc__cli__parse__args_fun5869__t*, _fself, _ctx);
  kk_display__clispec spec_2 = _self->spec_2; /* display/clispec */
  kk_drop_match(_self, {kk_display__clispec_dup(spec_2, _ctx);}, {}, _ctx)
  kk_display__parseraw hc__raw_0_2214 = kk_display__parseraw_unbox(_b_x2076, KK_OWNED, _ctx); /*display/parseraw*/;
  kk_display__clioutcome _x_x5870 = kk_display__mlift_hc__cli__parse__args_11194(spec_2, hc__raw_0_2214, _ctx); /*display/clioutcome*/
  return kk_display__clioutcome_box(_x_x5870, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5872__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5872(kk_function_t _fself, kk_box_t _b_x2079, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5872(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5872, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5872(kk_function_t _fself, kk_box_t _b_x2079, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5873;
  kk_display__parseraw _match_x2426 = kk_display__parseraw_unbox(_b_x2079, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5874 = kk_display__as_Parseraw(_match_x2426, _ctx);
    kk_string_t _x_9 = _con_x5874->raw__error;
    kk_std_core_types__list _pat_0_14 = _con_x5874->raw__flags;
    kk_std_core_types__list _pat_1_8 = _con_x5874->raw__options;
    kk_std_core_types__list _pat_2_8 = _con_x5874->raw__positionals;
    kk_string_t _pat_3_8 = _con_x5874->raw__subcmd;
    kk_std_core_types__list _pat_4_8 = _con_x5874->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2426, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_string_drop(_pat_3_8, _ctx);
      kk_std_core_types__list_drop(_pat_2_8, _ctx);
      kk_std_core_types__list_drop(_pat_1_8, _ctx);
      kk_std_core_types__list_drop(_pat_0_14, _ctx);
      kk_datatype_ptr_free(_match_x2426, _ctx);
    }
    else {
      kk_string_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2426, _ctx);
    }
    _x_x5873 = _x_9; /*string*/
  }
  return kk_string_box(_x_x5873);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5878__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5878(kk_function_t _fself, kk_box_t _b_x2085, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5878(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5878, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5878(kk_function_t _fself, kk_box_t _b_x2085, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5879;
  kk_display__parseraw _match_x2425 = kk_display__parseraw_unbox(_b_x2085, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5880 = kk_display__as_Parseraw(_match_x2425, _ctx);
    kk_string_t _pat_0_0_0 = _con_x5880->raw__error;
    kk_std_core_types__list _x_0_0 = _con_x5880->raw__flags;
    kk_std_core_types__list _pat_1_0_0 = _con_x5880->raw__options;
    kk_std_core_types__list _pat_2_0_0 = _con_x5880->raw__positionals;
    kk_string_t _pat_3_0_0 = _con_x5880->raw__subcmd;
    kk_std_core_types__list _pat_4_0_0 = _con_x5880->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2425, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0_0, _ctx);
      kk_string_drop(_pat_3_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2425, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0_0, _ctx);
      kk_datatype_ptr_decref(_match_x2425, _ctx);
    }
    _x_x5879 = _x_0_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5879, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5884__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5884(kk_function_t _fself, kk_box_t _b_x2091, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5884(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5884, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5884(kk_function_t _fself, kk_box_t _b_x2091, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5885;
  kk_display__parseraw _match_x2424 = kk_display__parseraw_unbox(_b_x2091, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5886 = kk_display__as_Parseraw(_match_x2424, _ctx);
    kk_string_t _pat_0_1_0 = _con_x5886->raw__error;
    kk_std_core_types__list _pat_1_1_0 = _con_x5886->raw__flags;
    kk_std_core_types__list _x_1_0 = _con_x5886->raw__options;
    kk_std_core_types__list _pat_2_1_0 = _con_x5886->raw__positionals;
    kk_string_t _pat_3_1_0 = _con_x5886->raw__subcmd;
    kk_std_core_types__list _pat_4_1_0 = _con_x5886->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2424, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1_0, _ctx);
      kk_string_drop(_pat_3_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_1_0, _ctx);
      kk_string_drop(_pat_0_1_0, _ctx);
      kk_datatype_ptr_free(_match_x2424, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1_0, _ctx);
      kk_datatype_ptr_decref(_match_x2424, _ctx);
    }
    _x_x5885 = _x_1_0; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5885, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5890__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5890(kk_function_t _fself, kk_box_t _b_x2097, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5890(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5890, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5890(kk_function_t _fself, kk_box_t _b_x2097, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5891;
  kk_display__parseraw _match_x2423 = kk_display__parseraw_unbox(_b_x2097, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5892 = kk_display__as_Parseraw(_match_x2423, _ctx);
    kk_string_t _pat_0_2_0 = _con_x5892->raw__error;
    kk_std_core_types__list _pat_1_2_0 = _con_x5892->raw__flags;
    kk_std_core_types__list _pat_2_2_0 = _con_x5892->raw__options;
    kk_std_core_types__list _x_2_0 = _con_x5892->raw__positionals;
    kk_string_t _pat_3_2_0 = _con_x5892->raw__subcmd;
    kk_std_core_types__list _pat_4_2_0 = _con_x5892->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2423, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2_0, _ctx);
      kk_string_drop(_pat_3_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_2_0, _ctx);
      kk_string_drop(_pat_0_2_0, _ctx);
      kk_datatype_ptr_free(_match_x2423, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2_0, _ctx);
      kk_datatype_ptr_decref(_match_x2423, _ctx);
    }
    _x_x5891 = _x_2_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5891, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5896__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5896(kk_function_t _fself, kk_box_t _b_x2103, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5896(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5896, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5896(kk_function_t _fself, kk_box_t _b_x2103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5897;
  kk_display__parseraw _match_x2422 = kk_display__parseraw_unbox(_b_x2103, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5898 = kk_display__as_Parseraw(_match_x2422, _ctx);
    kk_string_t _pat_0_3_0 = _con_x5898->raw__error;
    kk_std_core_types__list _pat_1_3_0 = _con_x5898->raw__flags;
    kk_std_core_types__list _pat_2_3_0 = _con_x5898->raw__options;
    kk_std_core_types__list _pat_3_3_0 = _con_x5898->raw__positionals;
    kk_string_t _x_3_0 = _con_x5898->raw__subcmd;
    kk_std_core_types__list _pat_4_3_0 = _con_x5898->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2422, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_3_0, _ctx);
      kk_string_drop(_pat_0_3_0, _ctx);
      kk_datatype_ptr_free(_match_x2422, _ctx);
    }
    else {
      kk_string_dup(_x_3_0, _ctx);
      kk_datatype_ptr_decref(_match_x2422, _ctx);
    }
    _x_x5897 = _x_3_0; /*string*/
  }
  return kk_string_box(_x_x5897);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5902__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5902(kk_function_t _fself, kk_box_t _b_x2109, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5902(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5902, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5902(kk_function_t _fself, kk_box_t _b_x2109, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5903;
  kk_display__parseraw _match_x2421 = kk_display__parseraw_unbox(_b_x2109, KK_OWNED, _ctx); /*display/parseraw*/;
  {
    struct kk_display_Parseraw* _con_x5904 = kk_display__as_Parseraw(_match_x2421, _ctx);
    kk_string_t _pat_0_4_0 = _con_x5904->raw__error;
    kk_std_core_types__list _pat_1_4_0 = _con_x5904->raw__flags;
    kk_std_core_types__list _pat_2_4_0 = _con_x5904->raw__options;
    kk_std_core_types__list _pat_3_4_0 = _con_x5904->raw__positionals;
    kk_string_t _pat_4_4_0 = _con_x5904->raw__subcmd;
    kk_std_core_types__list _x_4_0 = _con_x5904->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2421, _ctx)) {
      kk_string_drop(_pat_4_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_4_0, _ctx);
      kk_string_drop(_pat_0_4_0, _ctx);
      kk_datatype_ptr_free(_match_x2421, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4_0, _ctx);
      kk_datatype_ptr_decref(_match_x2421, _ctx);
    }
    _x_x5903 = _x_4_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5903, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5913__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5913(kk_function_t _fself, kk_box_t _b_x2115, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5913(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5913, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5913(kk_function_t _fself, kk_box_t _b_x2115, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5914;
  bool b_2_2217 = kk_bool_unbox(_b_x2115); /*bool*/;
  if (b_2_2217) {
    _x_x5914 = false; /*bool*/
  }
  else {
    _x_x5914 = true; /*bool*/
  }
  return kk_bool_box(_x_x5914);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5916__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5916(kk_function_t _fself, kk_box_t _b_x2124, kk_box_t _b_x2125, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5916(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5916, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5919__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5919(kk_function_t _fself, kk_box_t _b_x2119, kk_box_t _b_x2120, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5919(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5919, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5919(kk_function_t _fself, kk_box_t _b_x2119, kk_box_t _b_x2120, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5920;
  kk_std_core_types__list _x_x5921 = kk_std_core_types__list_unbox(_b_x2119, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_display__clioption _x_x5922 = kk_display__clioption_unbox(_b_x2120, KK_OWNED, _ctx); /*display/clioption*/
  _x_x5920 = kk_display_hc__add__default(_x_x5921, _x_x5922, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5920, _ctx);
}
static kk_box_t kk_display_hc__cli__parse__args_fun5916(kk_function_t _fself, kk_box_t _b_x2124, kk_box_t _b_x2125, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5917;
  kk_display__clispec _match_x2418 = kk_display__clispec_unbox(_b_x2124, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5918 = kk_display__as_Clispec(_match_x2418, _ctx);
    kk_string_t _pat_0_7_0 = _con_x5918->app__name;
    kk_string_t _pat_1_6_0 = _con_x5918->app__version;
    kk_string_t _pat_2_6_0 = _con_x5918->app__about;
    kk_std_core_types__list _pat_3_6_0 = _con_x5918->app__flags;
    kk_std_core_types__list _x_5_0 = _con_x5918->app__options;
    kk_std_core_types__list _pat_4_6_0 = _con_x5918->app__args;
    kk_std_core_types__list _pat_5_0_0 = _con_x5918->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2418, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_6_0, _ctx);
      kk_string_drop(_pat_2_6_0, _ctx);
      kk_string_drop(_pat_1_6_0, _ctx);
      kk_string_drop(_pat_0_7_0, _ctx);
      kk_datatype_ptr_free(_match_x2418, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5_0, _ctx);
      kk_datatype_ptr_decref(_match_x2418, _ctx);
    }
    _x_x5917 = _x_5_0; /*list<display/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x5917, _b_x2125, kk_display_new_hc__cli__parse__args_fun5919(_ctx), _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5926__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5926(kk_function_t _fself, kk_box_t _b_x2148, kk_box_t _b_x2149, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5926(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5926, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5929__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5929(kk_function_t _fself, kk_integer_t _b_x2138, kk_box_t _b_x2139, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5929(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5929, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5929(kk_function_t _fself, kk_integer_t _b_x2138, kk_box_t _b_x2139, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x5930 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x2138, _ctx), _b_x2139, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5930, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5934__t {
  struct kk_function_s _base;
  kk_box_t _b_x2149;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5934(kk_function_t _fself, kk_box_t _b_x2143, kk_box_t _b_x2144, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5934(kk_box_t _b_x2149, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__args_fun5934__t* _self = kk_function_alloc_as(struct kk_display_hc__cli__parse__args_fun5934__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__cli__parse__args_fun5934, kk_context());
  _self->_b_x2149 = _b_x2149;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5934(kk_function_t _fself, kk_box_t _b_x2143, kk_box_t _b_x2144, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__args_fun5934__t* _self = kk_function_as(struct kk_display_hc__cli__parse__args_fun5934__t*, _fself, _ctx);
  kk_box_t _b_x2149 = _self->_b_x2149; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2149, _ctx);}, {}, _ctx)
  kk_string_t _x_x5935;
  kk_std_core_types__list _x_x5936 = kk_std_core_types__list_unbox(_b_x2149, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x5937 = kk_string_unbox(_b_x2143); /*string*/
  kk_std_core_types__tuple2 _x_x5938 = kk_std_core_types__tuple2_unbox(_b_x2144, KK_OWNED, _ctx); /*(int, display/cliarg)*/
  _x_x5935 = kk_display_hc__check__one__arg(_x_x5936, _x_x5937, _x_x5938, _ctx); /*string*/
  return kk_string_box(_x_x5935);
}
static kk_box_t kk_display_hc__cli__parse__args_fun5926(kk_function_t _fself, kk_box_t _b_x2148, kk_box_t _b_x2149, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x2140_2153;
  kk_std_core_types__list _x_x5927;
  kk_display__clispec _match_x2417 = kk_display__clispec_unbox(_b_x2148, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5928 = kk_display__as_Clispec(_match_x2417, _ctx);
    kk_string_t _pat_0_8_1 = _con_x5928->app__name;
    kk_string_t _pat_1_7_1 = _con_x5928->app__version;
    kk_string_t _pat_2_7_1 = _con_x5928->app__about;
    kk_std_core_types__list _pat_3_7_1 = _con_x5928->app__flags;
    kk_std_core_types__list _pat_4_7_1 = _con_x5928->app__options;
    kk_std_core_types__list _x_6_1 = _con_x5928->app__args;
    kk_std_core_types__list _pat_5_1_1 = _con_x5928->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2417, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_1, _ctx);
      kk_string_drop(_pat_2_7_1, _ctx);
      kk_string_drop(_pat_1_7_1, _ctx);
      kk_string_drop(_pat_0_8_1, _ctx);
      kk_datatype_ptr_free(_match_x2417, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6_1, _ctx);
      kk_datatype_ptr_decref(_match_x2417, _ctx);
    }
    _x_x5927 = _x_6_1; /*list<display/cliarg>*/
  }
  _b_x2140_2153 = kk_std_core_list_map_indexed(_x_x5927, kk_display_new_hc__cli__parse__args_fun5929(_ctx), _ctx); /*list<(int, display/cliarg)>*/
  kk_box_t _x_x5931;
  kk_string_t _x_x5932 = kk_string_empty(); /*string*/
  _x_x5931 = kk_string_box(_x_x5932); /*10002*/
  return kk_std_core_list_foldl(_b_x2140_2153, _x_x5931, kk_display_new_hc__cli__parse__args_fun5934(_b_x2149, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5945__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5945(kk_function_t _fself, kk_box_t _b_x2166, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5945(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5945, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5945(kk_function_t _fself, kk_box_t _b_x2166, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5946;
  bool b_0_0_2218 = kk_bool_unbox(_b_x2166); /*bool*/;
  if (b_0_0_2218) {
    _x_x5946 = false; /*bool*/
  }
  else {
    _x_x5946 = true; /*bool*/
  }
  return kk_bool_box(_x_x5946);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5949__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5949(kk_function_t _fself, kk_box_t _b_x2169, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5949(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5949, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5949(kk_function_t _fself, kk_box_t _b_x2169, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5950;
  bool b_1_0_2219 = kk_bool_unbox(_b_x2169); /*bool*/;
  if (b_1_0_2219) {
    _x_x5950 = false; /*bool*/
  }
  else {
    _x_x5950 = true; /*bool*/
  }
  return kk_bool_box(_x_x5950);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5952__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5952(kk_function_t _fself, kk_box_t _b_x2172, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5952(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5952, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5952(kk_function_t _fself, kk_box_t _b_x2172, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5953;
  kk_display__clispec _match_x2412 = kk_display__clispec_unbox(_b_x2172, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x5954 = kk_display__as_Clispec(_match_x2412, _ctx);
    kk_string_t _pat_0_11_0 = _con_x5954->app__name;
    kk_string_t _pat_1_7_0_0 = _con_x5954->app__version;
    kk_string_t _pat_2_7_0_0 = _con_x5954->app__about;
    kk_std_core_types__list _pat_3_7_0_0 = _con_x5954->app__flags;
    kk_std_core_types__list _pat_4_7_0_0 = _con_x5954->app__options;
    kk_std_core_types__list _pat_5_2_0 = _con_x5954->app__args;
    kk_std_core_types__list _x_7_0 = _con_x5954->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2412, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0_0, _ctx);
      kk_string_drop(_pat_2_7_0_0, _ctx);
      kk_string_drop(_pat_1_7_0_0, _ctx);
      kk_string_drop(_pat_0_11_0, _ctx);
      kk_datatype_ptr_free(_match_x2412, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7_0, _ctx);
      kk_datatype_ptr_decref(_match_x2412, _ctx);
    }
    _x_x5953 = _x_7_0; /*list<(string, display/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5953, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5956__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5956(kk_function_t _fself, kk_box_t _b_x2184, kk_box_t _b_x2185, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5956(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5956, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5958__t {
  struct kk_function_s _base;
  kk_string_t name_0_2221;
};
static bool kk_display_hc__cli__parse__args_fun5958(kk_function_t _fself, kk_box_t _b_x2180, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5958(kk_string_t name_0_2221, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__args_fun5958__t* _self = kk_function_alloc_as(struct kk_display_hc__cli__parse__args_fun5958__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__cli__parse__args_fun5958, kk_context());
  _self->name_0_2221 = name_0_2221;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_display_hc__cli__parse__args_fun5958(kk_function_t _fself, kk_box_t _b_x2180, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__args_fun5958__t* _self = kk_function_as(struct kk_display_hc__cli__parse__args_fun5958__t*, _fself, _ctx);
  kk_string_t name_0_2221 = _self->name_0_2221; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_2221, _ctx);}, {}, _ctx)
  kk_string_t _x_x5959;
  kk_std_core_types__tuple2 _match_x2411 = kk_std_core_types__tuple2_unbox(_b_x2180, KK_OWNED, _ctx); /*(string, display/clispec)*/;
  {
    kk_box_t _box_x2176 = _match_x2411.fst;
    kk_box_t _box_x2177 = _match_x2411.snd;
    kk_string_t _x_6_0_0 = kk_string_unbox(_box_x2176);
    kk_string_dup(_x_6_0_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2411, _ctx);
    _x_x5959 = _x_6_0_0; /*string*/
  }
  return kk_string_is_eq(_x_x5959,name_0_2221,kk_context());
}
static kk_box_t kk_display_hc__cli__parse__args_fun5956(kk_function_t _fself, kk_box_t _b_x2184, kk_box_t _b_x2185, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5957;
  kk_std_core_types__list commands_0_2220 = kk_std_core_types__list_unbox(_b_x2184, KK_OWNED, _ctx); /*list<(string, display/clispec)>*/;
  kk_string_t name_0_2221 = kk_string_unbox(_b_x2185); /*string*/;
  _x_x5957 = kk_std_core_list_find(commands_0_2220, kk_display_new_hc__cli__parse__args_fun5958(name_0_2221, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5957, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5964__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5964(kk_function_t _fself, kk_box_t _b_x2191, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5964(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__args_fun5964, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5964(kk_function_t _fself, kk_box_t _b_x2191, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_display__clispec _x_x5965;
  kk_std_core_types__tuple2 _match_x2410 = kk_std_core_types__tuple2_unbox(_b_x2191, KK_OWNED, _ctx); /*(string, display/clispec)*/;
  {
    kk_box_t _box_x2187 = _match_x2410.fst;
    kk_box_t _box_x2188 = _match_x2410.snd;
    kk_display__clispec _x_8_0 = kk_display__clispec_unbox(_box_x2188, KK_BORROWED, _ctx);
    kk_display__clispec_dup(_x_8_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2410, _ctx);
    _x_x5965 = _x_8_0; /*display/clispec*/
  }
  return kk_display__clispec_box(_x_x5965, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__args_fun5967__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_1;
  kk_std_core_types__list flags_1;
  kk_std_core_types__list positionals_1;
  kk_string_t subcmd_1;
};
static kk_box_t kk_display_hc__cli__parse__args_fun5967(kk_function_t _fself, kk_box_t _b_x2196, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__args_fun5967(kk_std_core_types__list final__options_1, kk_std_core_types__list flags_1, kk_std_core_types__list positionals_1, kk_string_t subcmd_1, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__args_fun5967__t* _self = kk_function_alloc_as(struct kk_display_hc__cli__parse__args_fun5967__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__cli__parse__args_fun5967, kk_context());
  _self->final__options_1 = final__options_1;
  _self->flags_1 = flags_1;
  _self->positionals_1 = positionals_1;
  _self->subcmd_1 = subcmd_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__cli__parse__args_fun5967(kk_function_t _fself, kk_box_t _b_x2196, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__args_fun5967__t* _self = kk_function_as(struct kk_display_hc__cli__parse__args_fun5967__t*, _fself, _ctx);
  kk_std_core_types__list final__options_1 = _self->final__options_1; /* list<(string, string)> */
  kk_std_core_types__list flags_1 = _self->flags_1; /* list<string> */
  kk_std_core_types__list positionals_1 = _self->positionals_1; /* list<string> */
  kk_string_t subcmd_1 = _self->subcmd_1; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_1, _ctx);kk_std_core_types__list_dup(flags_1, _ctx);kk_std_core_types__list_dup(positionals_1, _ctx);kk_string_dup(subcmd_1, _ctx);}, {}, _ctx)
  kk_display__clioutcome _y_x10903_1_2216 = kk_display__clioutcome_unbox(_b_x2196, KK_OWNED, _ctx); /*display/clioutcome*/;
  kk_display__clioutcome _x_x5968 = kk_display__mlift_hc__cli__parse__args_11193(final__options_1, flags_1, positionals_1, subcmd_1, _y_x10903_1_2216, _ctx); /*display/clioutcome*/
  return kk_display__clioutcome_box(_x_x5968, _ctx);
}

kk_display__clioutcome kk_display_hc__cli__parse__args(kk_display__clispec spec_2, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure clioutcome */ 
  kk_display__parseraw x_0_11393;
  kk_display__clispec _x_x5867 = kk_display__clispec_dup(spec_2, _ctx); /*display/clispec*/
  x_0_11393 = kk_display_hc__parse__loop(_x_x5867, args, _ctx); /*display/parseraw*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_11393, (KK_I32(6)), _ctx);
    kk_box_t _x_x5868 = kk_std_core_hnd_yield_extend(kk_display_new_hc__cli__parse__args_fun5869(spec_2, _ctx), _ctx); /*10001*/
    return kk_display__clioutcome_unbox(_x_x5868, KK_OWNED, _ctx);
  }
  {
    kk_string_t error_0;
    kk_box_t _x_x5871;
    kk_box_t _x_x5875;
    kk_display__parseraw _x_x5876 = kk_display__parseraw_dup(x_0_11393, _ctx); /*display/parseraw*/
    _x_x5875 = kk_display__parseraw_box(_x_x5876, _ctx); /*10000*/
    _x_x5871 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5872(_ctx), _x_x5875, _ctx); /*10001*/
    error_0 = kk_string_unbox(_x_x5871); /*string*/
    kk_std_core_types__list flags_1;
    kk_box_t _x_x5877;
    kk_box_t _x_x5881;
    kk_display__parseraw _x_x5882 = kk_display__parseraw_dup(x_0_11393, _ctx); /*display/parseraw*/
    _x_x5881 = kk_display__parseraw_box(_x_x5882, _ctx); /*10000*/
    _x_x5877 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5878(_ctx), _x_x5881, _ctx); /*10001*/
    flags_1 = kk_std_core_types__list_unbox(_x_x5877, KK_OWNED, _ctx); /*list<string>*/
    kk_std_core_types__list options_1;
    kk_box_t _x_x5883;
    kk_box_t _x_x5887;
    kk_display__parseraw _x_x5888 = kk_display__parseraw_dup(x_0_11393, _ctx); /*display/parseraw*/
    _x_x5887 = kk_display__parseraw_box(_x_x5888, _ctx); /*10000*/
    _x_x5883 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5884(_ctx), _x_x5887, _ctx); /*10001*/
    options_1 = kk_std_core_types__list_unbox(_x_x5883, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_std_core_types__list positionals_1;
    kk_box_t _x_x5889;
    kk_box_t _x_x5893;
    kk_display__parseraw _x_x5894 = kk_display__parseraw_dup(x_0_11393, _ctx); /*display/parseraw*/
    _x_x5893 = kk_display__parseraw_box(_x_x5894, _ctx); /*10000*/
    _x_x5889 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5890(_ctx), _x_x5893, _ctx); /*10001*/
    positionals_1 = kk_std_core_types__list_unbox(_x_x5889, KK_OWNED, _ctx); /*list<string>*/
    kk_string_t subcmd_1;
    kk_box_t _x_x5895;
    kk_box_t _x_x5899;
    kk_display__parseraw _x_x5900 = kk_display__parseraw_dup(x_0_11393, _ctx); /*display/parseraw*/
    _x_x5899 = kk_display__parseraw_box(_x_x5900, _ctx); /*10000*/
    _x_x5895 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5896(_ctx), _x_x5899, _ctx); /*10001*/
    subcmd_1 = kk_string_unbox(_x_x5895); /*string*/
    kk_std_core_types__list sub__args_0;
    kk_box_t _x_x5901 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5902(_ctx), kk_display__parseraw_box(x_0_11393, _ctx), _ctx); /*10001*/
    sub__args_0 = kk_std_core_types__list_unbox(_x_x5901, KK_OWNED, _ctx); /*list<string>*/
    bool _match_x2403;
    kk_string_t _x_x5905 = kk_string_dup(error_0, _ctx); /*string*/
    kk_string_t _x_x5906;
    kk_define_string_literal(static, _s_x5907, 8, "__help__", _ctx)
    _x_x5906 = kk_string_dup(_s_x5907, _ctx); /*string*/
    _match_x2403 = kk_string_is_eq(_x_x5905,_x_x5906,kk_context()); /*bool*/
    if (_match_x2403) {
      kk_string_drop(subcmd_1, _ctx);
      kk_std_core_types__list_drop(sub__args_0, _ctx);
      kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_1, _ctx);
      kk_std_core_types__list_drop(options_1, _ctx);
      kk_std_core_types__list_drop(flags_1, _ctx);
      kk_string_drop(error_0, _ctx);
      return kk_display__new_Help(_ctx);
    }
    {
      bool _match_x2404;
      kk_string_t _x_x5908 = kk_string_dup(error_0, _ctx); /*string*/
      kk_string_t _x_x5909;
      kk_define_string_literal(static, _s_x5910, 11, "__version__", _ctx)
      _x_x5909 = kk_string_dup(_s_x5910, _ctx); /*string*/
      _match_x2404 = kk_string_is_eq(_x_x5908,_x_x5909,kk_context()); /*bool*/
      if (_match_x2404) {
        kk_string_drop(subcmd_1, _ctx);
        kk_std_core_types__list_drop(sub__args_0, _ctx);
        kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_1, _ctx);
        kk_std_core_types__list_drop(options_1, _ctx);
        kk_std_core_types__list_drop(flags_1, _ctx);
        kk_string_drop(error_0, _ctx);
        return kk_display__new_Version(_ctx);
      }
      {
        bool _x_x1_5_11115_0;
        kk_integer_t _brw_x2419;
        kk_string_t _x_x5911 = kk_string_dup(error_0, _ctx); /*string*/
        _brw_x2419 = kk_std_core_string_chars_fs_count(_x_x5911, _ctx); /*int*/
        bool _brw_x2420 = kk_integer_eq_borrow(_brw_x2419,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2419, _ctx);
        _x_x1_5_11115_0 = _brw_x2420; /*bool*/
        bool _match_x2405;
        kk_box_t _x_x5912 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5913(_ctx), kk_bool_box(_x_x1_5_11115_0), _ctx); /*10001*/
        _match_x2405 = kk_bool_unbox(_x_x5912); /*bool*/
        if (_match_x2405) {
          kk_string_drop(subcmd_1, _ctx);
          kk_std_core_types__list_drop(sub__args_0, _ctx);
          kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_1, _ctx);
          kk_std_core_types__list_drop(options_1, _ctx);
          kk_std_core_types__list_drop(flags_1, _ctx);
          return kk_display__new_CliError(kk_reuse_null, 0, error_0, _ctx);
        }
        {
          kk_string_drop(error_0, _ctx);
          kk_std_core_types__list final__options_1;
          kk_box_t _x_x5915;
          kk_box_t _x_x5923;
          kk_display__clispec _x_x5924 = kk_display__clispec_dup(spec_2, _ctx); /*display/clispec*/
          _x_x5923 = kk_display__clispec_box(_x_x5924, _ctx); /*10000*/
          _x_x5915 = kk_std_core_hnd__open_none2(kk_display_new_hc__cli__parse__args_fun5916(_ctx), _x_x5923, kk_std_core_types__list_box(options_1, _ctx), _ctx); /*10002*/
          final__options_1 = kk_std_core_types__list_unbox(_x_x5915, KK_OWNED, _ctx); /*list<(string, string)>*/
          kk_string_t req__err_0;
          kk_box_t _x_x5925;
          kk_box_t _x_x5939;
          kk_display__clispec _x_x5940 = kk_display__clispec_dup(spec_2, _ctx); /*display/clispec*/
          _x_x5939 = kk_display__clispec_box(_x_x5940, _ctx); /*10000*/
          kk_box_t _x_x5941;
          kk_std_core_types__list _x_x5942 = kk_std_core_types__list_dup(positionals_1, _ctx); /*list<string>*/
          _x_x5941 = kk_std_core_types__list_box(_x_x5942, _ctx); /*10001*/
          _x_x5925 = kk_std_core_hnd__open_none2(kk_display_new_hc__cli__parse__args_fun5926(_ctx), _x_x5939, _x_x5941, _ctx); /*10002*/
          req__err_0 = kk_string_unbox(_x_x5925); /*string*/
          bool _x_x1_8_11120_0;
          kk_integer_t _brw_x2415;
          kk_string_t _x_x5943 = kk_string_dup(req__err_0, _ctx); /*string*/
          _brw_x2415 = kk_std_core_string_chars_fs_count(_x_x5943, _ctx); /*int*/
          bool _brw_x2416 = kk_integer_eq_borrow(_brw_x2415,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2415, _ctx);
          _x_x1_8_11120_0 = _brw_x2416; /*bool*/
          bool _match_x2406;
          kk_box_t _x_x5944 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5945(_ctx), kk_bool_box(_x_x1_8_11120_0), _ctx); /*10001*/
          _match_x2406 = kk_bool_unbox(_x_x5944); /*bool*/
          if (_match_x2406) {
            kk_string_drop(subcmd_1, _ctx);
            kk_std_core_types__list_drop(sub__args_0, _ctx);
            kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
            kk_std_core_types__list_drop(positionals_1, _ctx);
            kk_std_core_types__list_drop(flags_1, _ctx);
            kk_std_core_types__list_drop(final__options_1, _ctx);
            return kk_display__new_CliError(kk_reuse_null, 0, req__err_0, _ctx);
          }
          {
            kk_string_drop(req__err_0, _ctx);
            bool _x_x1_9_11121_0;
            kk_integer_t _brw_x2413;
            kk_string_t _x_x5947 = kk_string_dup(subcmd_1, _ctx); /*string*/
            _brw_x2413 = kk_std_core_string_chars_fs_count(_x_x5947, _ctx); /*int*/
            bool _brw_x2414 = kk_integer_eq_borrow(_brw_x2413,(kk_integer_from_small(0)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2413, _ctx);
            _x_x1_9_11121_0 = _brw_x2414; /*bool*/
            bool _match_x2407;
            kk_box_t _x_x5948 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5949(_ctx), kk_bool_box(_x_x1_9_11121_0), _ctx); /*10001*/
            _match_x2407 = kk_bool_unbox(_x_x5948); /*bool*/
            if (_match_x2407) {
              kk_std_core_types__list _x_x1_10_11122_0;
              kk_box_t _x_x5951 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5952(_ctx), kk_display__clispec_box(spec_2, _ctx), _ctx); /*10001*/
              _x_x1_10_11122_0 = kk_std_core_types__list_unbox(_x_x5951, KK_OWNED, _ctx); /*list<(string, display/clispec)>*/
              kk_std_core_types__maybe _match_x2408;
              kk_box_t _x_x5955;
              kk_box_t _x_x5960;
              kk_string_t _x_x5961 = kk_string_dup(subcmd_1, _ctx); /*string*/
              _x_x5960 = kk_string_box(_x_x5961); /*10001*/
              _x_x5955 = kk_std_core_hnd__open_none2(kk_display_new_hc__cli__parse__args_fun5956(_ctx), kk_std_core_types__list_box(_x_x1_10_11122_0, _ctx), _x_x5960, _ctx); /*10002*/
              _match_x2408 = kk_std_core_types__maybe_unbox(_x_x5955, KK_OWNED, _ctx); /*maybe<(string, display/clispec)>*/
              if (kk_std_core_types__is_Just(_match_x2408, _ctx)) {
                kk_box_t _box_x2186 = _match_x2408._cons.Just.value;
                kk_std_core_types__tuple2 pair_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x2186, KK_BORROWED, _ctx);
                kk_std_core_types__tuple2_dup(pair_0_0_0, _ctx);
                kk_std_core_types__maybe_drop(_match_x2408, _ctx);
                kk_display__clioutcome x_1_11396;
                kk_display__clispec _x_x5962;
                kk_box_t _x_x5963 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__args_fun5964(_ctx), kk_std_core_types__tuple2_box(pair_0_0_0, _ctx), _ctx); /*10001*/
                _x_x5962 = kk_display__clispec_unbox(_x_x5963, KK_OWNED, _ctx); /*display/clispec*/
                x_1_11396 = kk_display_hc__cli__parse__args(_x_x5962, sub__args_0, _ctx); /*display/clioutcome*/
                if (kk_yielding(kk_context())) {
                  kk_display__clioutcome_drop(x_1_11396, _ctx);
                  kk_box_t _x_x5966 = kk_std_core_hnd_yield_extend(kk_display_new_hc__cli__parse__args_fun5967(final__options_1, flags_1, positionals_1, subcmd_1, _ctx), _ctx); /*10001*/
                  return kk_display__clioutcome_unbox(_x_x5966, KK_OWNED, _ctx);
                }
                if (kk_display__is_Parsed(x_1_11396, _ctx)) {
                  struct kk_display_Parsed* _con_x5969 = kk_display__as_Parsed(x_1_11396, _ctx);
                  kk_display__cliresult hc__sub_0_0 = _con_x5969->cli__result;
                  struct kk_display_Cliresult* _con_x5970 = kk_display__as_Cliresult(hc__sub_0_0, _ctx);
                  kk_reuse_t _ru_x3125 = kk_reuse_null; /*@reuse*/;
                  if kk_likely(kk_datatype_ptr_is_unique(x_1_11396, _ctx)) {
                    _ru_x3125 = (kk_datatype_ptr_reuse(x_1_11396, _ctx));
                  }
                  else {
                    kk_display__cliresult_dup(hc__sub_0_0, _ctx);
                    kk_datatype_ptr_decref(x_1_11396, _ctx);
                  }
                  kk_display__cliresult _b_x2197_2213 = hc__sub_0_0; /*display/cliresult*/;
                  if kk_likely(_ru_x3125!=NULL) {
                    kk_std_core_types__maybe _x_x5972 = kk_std_core_types__new_Just(kk_display__cliresult_box(_b_x2197_2213, _ctx), _ctx); /*maybe<10024>*/
                    struct kk_display_Parsed* _con_x5971 = (struct kk_display_Parsed*)_ru_x3125;
                    _con_x5971->cli__result = kk_display__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x5972, _ctx);
                    return kk_display__base_Parsed(_con_x5971, _ctx);
                  }
                  {
                    kk_display__cliresult _x_x5973;
                    kk_std_core_types__maybe _x_x5974 = kk_std_core_types__new_Just(kk_display__cliresult_box(_b_x2197_2213, _ctx), _ctx); /*maybe<10024>*/
                    _x_x5973 = kk_display__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x5974, _ctx); /*display/cliresult*/
                    return kk_display__new_Parsed(kk_reuse_null, 0, _x_x5973, _ctx);
                  }
                }
                {
                  kk_string_drop(subcmd_1, _ctx);
                  kk_std_core_types__list_drop(positionals_1, _ctx);
                  kk_std_core_types__list_drop(flags_1, _ctx);
                  kk_std_core_types__list_drop(final__options_1, _ctx);
                  return x_1_11396;
                }
              }
              {
                kk_std_core_types__list_drop(sub__args_0, _ctx);
                kk_std_core_types__list_drop(positionals_1, _ctx);
                kk_std_core_types__list_drop(flags_1, _ctx);
                kk_std_core_types__list_drop(final__options_1, _ctx);
                kk_string_t _x_x5975;
                kk_string_t _x_x5976;
                kk_define_string_literal(static, _s_x5977, 17, "unknown command: ", _ctx)
                _x_x5976 = kk_string_dup(_s_x5977, _ctx); /*string*/
                _x_x5975 = kk_std_core_types__lp__plus__plus__rp_(_x_x5976, subcmd_1, _ctx); /*string*/
                return kk_display__new_CliError(kk_reuse_null, 0, _x_x5975, _ctx);
              }
            }
            {
              kk_string_drop(subcmd_1, _ctx);
              kk_std_core_types__list_drop(sub__args_0, _ctx);
              kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
              kk_display__cliresult _x_x5978;
              kk_string_t _x_x5979 = kk_string_empty(); /*string*/
              _x_x5978 = kk_display__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, _x_x5979, kk_std_core_types__new_Nothing(_ctx), _ctx); /*display/cliresult*/
              return kk_display__new_Parsed(kk_reuse_null, 0, _x_x5978, _ctx);
            }
          }
        }
      }
    }
  }
}
extern kk_box_t kk_display_hc__cli__parse_fun5983(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5984 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x5984, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__or__exit_11195_fun5989__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__or__exit_11195_fun5989(kk_function_t _fself, kk_box_t _b_x2226, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__or__exit_11195_fun5989(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__or__exit_11195_fun5989, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__or__exit_11195_fun5989(kk_function_t _fself, kk_box_t _b_x2226, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5990;
  kk_display__clispec _x_x5991 = kk_display__clispec_unbox(_b_x2226, KK_OWNED, _ctx); /*display/clispec*/
  _x_x5990 = kk_display_hc__cli__help(_x_x5991, _ctx); /*string*/
  return kk_string_box(_x_x5990);
}


// lift anonymous function
struct kk_display__mlift_hc__cli__parse__or__exit_11195_fun5996__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__cli__parse__or__exit_11195_fun5996(kk_function_t _fself, kk_box_t _b_x2231, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__cli__parse__or__exit_11195_fun5996(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__cli__parse__or__exit_11195_fun5996, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__cli__parse__or__exit_11195_fun5996(kk_function_t _fself, kk_box_t _b_x2231, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5997;
  kk_string_t _x_x5998;
  kk_display__clispec _match_x2401;
  kk_box_t _x_x5999 = kk_box_dup(_b_x2231, _ctx); /*10000*/
  _match_x2401 = kk_display__clispec_unbox(_x_x5999, KK_OWNED, _ctx); /*display/clispec*/
  {
    struct kk_display_Clispec* _con_x6000 = kk_display__as_Clispec(_match_x2401, _ctx);
    kk_string_t _x = _con_x6000->app__name;
    kk_string_t _pat_0_0 = _con_x6000->app__version;
    kk_string_t _pat_1_0 = _con_x6000->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x6000->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x6000->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x6000->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x6000->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2401, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2401, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2401, _ctx);
    }
    _x_x5998 = _x; /*string*/
  }
  kk_string_t _x_x6001;
  kk_string_t _x_x6002;
  kk_define_string_literal(static, _s_x6003, 1, " ", _ctx)
  _x_x6002 = kk_string_dup(_s_x6003, _ctx); /*string*/
  kk_string_t _x_x6004;
  kk_display__clispec _match_x2400 = kk_display__clispec_unbox(_b_x2231, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x6005 = kk_display__as_Clispec(_match_x2400, _ctx);
    kk_string_t _pat_0_1 = _con_x6005->app__name;
    kk_string_t _x_0 = _con_x6005->app__version;
    kk_string_t _pat_1_1 = _con_x6005->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x6005->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x6005->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x6005->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x6005->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2400, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2400, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2400, _ctx);
    }
    _x_x6004 = _x_0; /*string*/
  }
  _x_x6001 = kk_std_core_types__lp__plus__plus__rp_(_x_x6002, _x_x6004, _ctx); /*string*/
  _x_x5997 = kk_std_core_types__lp__plus__plus__rp_(_x_x5998, _x_x6001, _ctx); /*string*/
  return kk_string_box(_x_x5997);
}

kk_display__cliresult kk_display__mlift_hc__cli__parse__or__exit_11195(kk_display__clispec spec, kk_display__clioutcome _y_x10911, kk_context_t* _ctx) { /* (spec : clispec, clioutcome) -> pure cliresult */ 
  if (kk_display__is_Parsed(_y_x10911, _ctx)) {
    struct kk_display_Parsed* _con_x5985 = kk_display__as_Parsed(_y_x10911, _ctx);
    kk_display__cliresult r = _con_x5985->cli__result;
    struct kk_display_Cliresult* _con_x5986 = kk_display__as_Cliresult(r, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10911, _ctx)) {
      kk_datatype_ptr_free(_y_x10911, _ctx);
    }
    else {
      kk_display__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(_y_x10911, _ctx);
    }
    return r;
  }
  if (kk_display__is_Help(_y_x10911, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x5987;
    kk_box_t _x_x5988 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__or__exit_11195_fun5989(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5987 = kk_string_unbox(_x_x5988); /*string*/
    kk_std_core_console_printsln(_x_x5987, _ctx);
    kk_string_t _x_x5992 = kk_string_empty(); /*string*/
    return kk_display__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x5992, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_display__is_Version(_y_x10911, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x5994;
    kk_box_t _x_x5995 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__cli__parse__or__exit_11195_fun5996(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x5994 = kk_string_unbox(_x_x5995); /*string*/
    kk_std_core_console_printsln(_x_x5994, _ctx);
    kk_string_t _x_x6006 = kk_string_empty(); /*string*/
    return kk_display__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6006, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_display_CliError* _con_x6008 = kk_display__as_CliError(_y_x10911, _ctx);
    kk_string_t msg = _con_x6008->cli__error__msg;
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10911, _ctx)) {
      kk_datatype_ptr_free(_y_x10911, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(_y_x10911, _ctx);
    }
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x6009;
    kk_string_t _x_x6010;
    kk_define_string_literal(static, _s_x6011, 7, "error: ", _ctx)
    _x_x6010 = kk_string_dup(_s_x6011, _ctx); /*string*/
    _x_x6009 = kk_std_core_types__lp__plus__plus__rp_(_x_x6010, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6009, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x6012;
    kk_define_string_literal(static, _s_x6013, 20, "try --help for usage", _ctx)
    _x_x6012 = kk_string_dup(_s_x6013, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6012, _ctx);
    kk_string_t _x_x6014 = kk_string_empty(); /*string*/
    return kk_display__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6014, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_display_hc__cli__parse__or__exit_fun6019__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__or__exit_fun6019(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__or__exit_fun6019(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__or__exit_fun6019, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__or__exit_fun6019(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6020 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6020, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__or__exit_fun6022__t {
  struct kk_function_s _base;
  kk_display__clispec spec;
};
static kk_box_t kk_display_hc__cli__parse__or__exit_fun6022(kk_function_t _fself, kk_box_t _b_x2238, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__or__exit_fun6022(kk_display__clispec spec, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__or__exit_fun6022__t* _self = kk_function_alloc_as(struct kk_display_hc__cli__parse__or__exit_fun6022__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__cli__parse__or__exit_fun6022, kk_context());
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__cli__parse__or__exit_fun6022(kk_function_t _fself, kk_box_t _b_x2238, kk_context_t* _ctx) {
  struct kk_display_hc__cli__parse__or__exit_fun6022__t* _self = kk_function_as(struct kk_display_hc__cli__parse__or__exit_fun6022__t*, _fself, _ctx);
  kk_display__clispec spec = _self->spec; /* display/clispec */
  kk_drop_match(_self, {kk_display__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_display__clioutcome _y_x10911_2251 = kk_display__clioutcome_unbox(_b_x2238, KK_OWNED, _ctx); /*display/clioutcome*/;
  kk_display__cliresult _x_x6023 = kk_display__mlift_hc__cli__parse__or__exit_11195(spec, _y_x10911_2251, _ctx); /*display/cliresult*/
  return kk_display__cliresult_box(_x_x6023, _ctx);
}


// lift anonymous function
struct kk_display_hc__cli__parse__or__exit_fun6028__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__or__exit_fun6028(kk_function_t _fself, kk_box_t _b_x2241, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__or__exit_fun6028(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__or__exit_fun6028, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__or__exit_fun6028(kk_function_t _fself, kk_box_t _b_x2241, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6029;
  kk_display__clispec _x_x6030 = kk_display__clispec_unbox(_b_x2241, KK_OWNED, _ctx); /*display/clispec*/
  _x_x6029 = kk_display_hc__cli__help(_x_x6030, _ctx); /*string*/
  return kk_string_box(_x_x6029);
}


// lift anonymous function
struct kk_display_hc__cli__parse__or__exit_fun6035__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__cli__parse__or__exit_fun6035(kk_function_t _fself, kk_box_t _b_x2246, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__cli__parse__or__exit_fun6035(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__cli__parse__or__exit_fun6035, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__cli__parse__or__exit_fun6035(kk_function_t _fself, kk_box_t _b_x2246, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6036;
  kk_string_t _x_x6037;
  kk_display__clispec _match_x2399;
  kk_box_t _x_x6038 = kk_box_dup(_b_x2246, _ctx); /*10000*/
  _match_x2399 = kk_display__clispec_unbox(_x_x6038, KK_OWNED, _ctx); /*display/clispec*/
  {
    struct kk_display_Clispec* _con_x6039 = kk_display__as_Clispec(_match_x2399, _ctx);
    kk_string_t _x = _con_x6039->app__name;
    kk_string_t _pat_0_0_0 = _con_x6039->app__version;
    kk_string_t _pat_1_0_0 = _con_x6039->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x6039->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x6039->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x6039->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x6039->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2399, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2399, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2399, _ctx);
    }
    _x_x6037 = _x; /*string*/
  }
  kk_string_t _x_x6040;
  kk_string_t _x_x6041;
  kk_define_string_literal(static, _s_x6042, 1, " ", _ctx)
  _x_x6041 = kk_string_dup(_s_x6042, _ctx); /*string*/
  kk_string_t _x_x6043;
  kk_display__clispec _match_x2398 = kk_display__clispec_unbox(_b_x2246, KK_OWNED, _ctx); /*display/clispec*/;
  {
    struct kk_display_Clispec* _con_x6044 = kk_display__as_Clispec(_match_x2398, _ctx);
    kk_string_t _pat_0_1 = _con_x6044->app__name;
    kk_string_t _x_0 = _con_x6044->app__version;
    kk_string_t _pat_1_1 = _con_x6044->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x6044->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x6044->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x6044->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x6044->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2398, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2398, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2398, _ctx);
    }
    _x_x6043 = _x_0; /*string*/
  }
  _x_x6040 = kk_std_core_types__lp__plus__plus__rp_(_x_x6041, _x_x6043, _ctx); /*string*/
  _x_x6036 = kk_std_core_types__lp__plus__plus__rp_(_x_x6037, _x_x6040, _ctx); /*string*/
  return kk_string_box(_x_x6036);
}

kk_display__cliresult kk_display_hc__cli__parse__or__exit(kk_display__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> <pure,console/console,ndet> cliresult */ 
  kk_display__clioutcome x_11399;
  kk_display__clispec _x_x6016 = kk_display__clispec_dup(spec, _ctx); /*display/clispec*/
  kk_std_core_types__list _x_x6017;
  kk_box_t _x_x6018 = kk_std_core_hnd__open_none0(kk_display_new_hc__cli__parse__or__exit_fun6019(_ctx), _ctx); /*10000*/
  _x_x6017 = kk_std_core_types__list_unbox(_x_x6018, KK_OWNED, _ctx); /*list<string>*/
  x_11399 = kk_display_hc__cli__parse__args(_x_x6016, _x_x6017, _ctx); /*display/clioutcome*/
  if (kk_yielding(kk_context())) {
    kk_display__clioutcome_drop(x_11399, _ctx);
    kk_box_t _x_x6021 = kk_std_core_hnd_yield_extend(kk_display_new_hc__cli__parse__or__exit_fun6022(spec, _ctx), _ctx); /*10001*/
    return kk_display__cliresult_unbox(_x_x6021, KK_OWNED, _ctx);
  }
  if (kk_display__is_Parsed(x_11399, _ctx)) {
    struct kk_display_Parsed* _con_x6024 = kk_display__as_Parsed(x_11399, _ctx);
    kk_display__cliresult r = _con_x6024->cli__result;
    struct kk_display_Cliresult* _con_x6025 = kk_display__as_Cliresult(r, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(x_11399, _ctx)) {
      kk_datatype_ptr_free(x_11399, _ctx);
    }
    else {
      kk_display__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(x_11399, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    return r;
  }
  if (kk_display__is_Help(x_11399, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x6026;
    kk_box_t _x_x6027 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__or__exit_fun6028(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x6026 = kk_string_unbox(_x_x6027); /*string*/
    kk_std_core_console_printsln(_x_x6026, _ctx);
    kk_string_t _x_x6031 = kk_string_empty(); /*string*/
    return kk_display__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6031, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_display__is_Version(x_11399, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x6033;
    kk_box_t _x_x6034 = kk_std_core_hnd__open_none1(kk_display_new_hc__cli__parse__or__exit_fun6035(_ctx), kk_display__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x6033 = kk_string_unbox(_x_x6034); /*string*/
    kk_std_core_console_printsln(_x_x6033, _ctx);
    kk_string_t _x_x6045 = kk_string_empty(); /*string*/
    return kk_display__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6045, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_display_CliError* _con_x6047 = kk_display__as_CliError(x_11399, _ctx);
    kk_string_t msg = _con_x6047->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(x_11399, _ctx)) {
      kk_datatype_ptr_free(x_11399, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(x_11399, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x6048;
    kk_string_t _x_x6049;
    kk_define_string_literal(static, _s_x6050, 7, "error: ", _ctx)
    _x_x6049 = kk_string_dup(_s_x6050, _ctx); /*string*/
    _x_x6048 = kk_std_core_types__lp__plus__plus__rp_(_x_x6049, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6048, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x6051;
    kk_define_string_literal(static, _s_x6052, 20, "try --help for usage", _ctx)
    _x_x6051 = kk_string_dup(_s_x6052, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6051, _ctx);
    kk_string_t _x_x6053 = kk_string_empty(); /*string*/
    return kk_display__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6053, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__read__lines_11196_fun6056__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__read__lines_11196_fun6056(kk_function_t _fself, kk_box_t _b_x2257, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__read__lines_11196_fun6056(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__read__lines_11196_fun6056, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display__mlift_hc__read__lines_11196_fun6062__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__read__lines_11196_fun6062(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__read__lines_11196_fun6062(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__read__lines_11196_fun6062, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__read__lines_11196_fun6062(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6063;
  kk_char_t _x_x6064 = kk_char_unbox(_b_x2254, KK_OWNED, _ctx); /*char*/
  _x_x6063 = kk_std_core_string_char_fs_string(_x_x6064, _ctx); /*string*/
  return kk_string_box(_x_x6063);
}
static kk_box_t kk_display__mlift_hc__read__lines_11196_fun6056(kk_function_t _fself, kk_box_t _b_x2257, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2262 = kk_string_unbox(_b_x2257); /*string*/;
  kk_std_core_types__list _x_x6057;
  bool _match_x2394;
  kk_string_t _x_x6058;
  kk_define_string_literal(static, _s_x6059, 1, "\n", _ctx)
  _x_x6058 = kk_string_dup(_s_x6059, _ctx); /*string*/
  kk_string_t _x_x6060 = kk_string_empty(); /*string*/
  _match_x2394 = kk_string_is_eq(_x_x6058,_x_x6060,kk_context()); /*bool*/
  if (_match_x2394) {
    kk_std_core_types__list _b_x2252_2260 = kk_std_core_string_list(s_2262, _ctx); /*list<char>*/;
    kk_function_t _brw_x2395 = kk_display__new_mlift_hc__read__lines_11196_fun6062(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2396 = kk_std_core_list_map(_b_x2252_2260, _brw_x2395, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2395, _ctx);
    _x_x6057 = _brw_x2396; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x6065;
    kk_define_string_literal(static, _s_x6066, 1, "\n", _ctx)
    _x_x6065 = kk_string_dup(_s_x6066, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2262,_x_x6065,kk_context()); /*vector<string>*/
    _x_x6057 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x6057, _ctx);
}

kk_std_core_types__list kk_display__mlift_hc__read__lines_11196(kk_string_t _c_x10916, kk_context_t* _ctx) { /* (string) -> list<string> */ 
  kk_box_t _x_x6055 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__read__lines_11196_fun6056(_ctx), kk_string_box(_c_x10916), _ctx); /*10001*/
  return kk_std_core_types__list_unbox(_x_x6055, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_display__mlift_hc__read__lines_11197_fun6068__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__read__lines_11197_fun6068(kk_function_t _fself, kk_box_t _b_x2266, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__read__lines_11197_fun6068(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__read__lines_11197_fun6068, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__read__lines_11197_fun6068(kk_function_t _fself, kk_box_t _b_x2266, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6069;
  kk_std_core_exn__exception _match_x2393 = kk_std_core_exn__exception_unbox(_b_x2266, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2393.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2393, _ctx);
    _x_x6069 = _x; /*string*/
  }
  return kk_string_box(_x_x6069);
}


// lift anonymous function
struct kk_display__mlift_hc__read__lines_11197_fun6075__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display__mlift_hc__read__lines_11197_fun6075(kk_function_t _fself, kk_box_t _b_x2275, kk_context_t* _ctx);
static kk_function_t kk_display__new_mlift_hc__read__lines_11197_fun6075(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display__mlift_hc__read__lines_11197_fun6075, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display__mlift_hc__read__lines_11197_fun6075(kk_function_t _fself, kk_box_t _b_x2275, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6076;
  kk_string_t _x_x6077 = kk_string_unbox(_b_x2275); /*string*/
  _x_x6076 = kk_display__mlift_hc__read__lines_11196(_x_x6077, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6076, _ctx);
}

kk_std_core_types__list kk_display__mlift_hc__read__lines_11197(kk_std_core_exn__error _y_x10914, kk_context_t* _ctx) { /* (error<string>) -> <fsys,exn> list<string> */ 
  kk_string_t x_11402;
  if (kk_std_core_exn__is_Ok(_y_x10914, _ctx)) {
    kk_box_t _box_x2263 = _y_x10914._cons.Ok.result;
    kk_string_t hc____c = kk_string_unbox(_box_x2263);
    kk_string_dup(hc____c, _ctx);
    kk_std_core_exn__error_drop(_y_x10914, _ctx);
    x_11402 = hc____c; /*string*/
  }
  else {
    kk_std_core_exn__exception hc____e = _y_x10914._cons.Error.exception;
    kk_std_core_exn__exception_dup(hc____e, _ctx);
    kk_std_core_exn__error_drop(_y_x10914, _ctx);
    kk_string_t hc____e_0;
    kk_box_t _x_x6067 = kk_std_core_hnd__open_none1(kk_display__new_mlift_hc__read__lines_11197_fun6068(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
    hc____e_0 = kk_string_unbox(_x_x6067); /*string*/
    kk_string_t _b_x2270_2272;
    kk_string_t _x_x6070;
    kk_define_string_literal(static, _s_x6071, 8, "unwrap: ", _ctx)
    _x_x6070 = kk_string_dup(_s_x6071, _ctx); /*string*/
    kk_string_t _x_x6072 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
    _b_x2270_2272 = kk_std_core_types__lp__plus__plus__rp_(_x_x6070, _x_x6072, _ctx); /*string*/
    kk_box_t _x_x6073 = kk_std_core_exn_throw(_b_x2270_2272, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    x_11402 = kk_string_unbox(_x_x6073); /*string*/
  }
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11402, _ctx);
    kk_box_t _x_x6074 = kk_std_core_hnd_yield_extend(kk_display__new_mlift_hc__read__lines_11197_fun6075(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x6074, KK_OWNED, _ctx);
  }
  {
    return kk_display__mlift_hc__read__lines_11196(x_11402, _ctx);
  }
}


// lift anonymous function
struct kk_display_hc__read__lines_fun6078__t {
  struct kk_function_s _base;
  kk_string_t file__path;
};
static kk_box_t kk_display_hc__read__lines_fun6078(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__read__lines_fun6078(kk_string_t file__path, kk_context_t* _ctx) {
  struct kk_display_hc__read__lines_fun6078__t* _self = kk_function_alloc_as(struct kk_display_hc__read__lines_fun6078__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__read__lines_fun6078, kk_context());
  _self->file__path = file__path;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_display_hc__read__lines_fun6080__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__read__lines_fun6080(kk_function_t _fself, kk_box_t _b_x2279, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__read__lines_fun6080(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__read__lines_fun6080, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__read__lines_fun6080(kk_function_t _fself, kk_box_t _b_x2279, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6081;
  kk_string_t _x_x6082 = kk_string_unbox(_b_x2279); /*string*/
  _x_x6081 = kk_std_os_path_path(_x_x6082, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6081, _ctx);
}


// lift anonymous function
struct kk_display_hc__read__lines_fun6083__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__read__lines_fun6083(kk_function_t _fself, kk_box_t _b_x2285, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__read__lines_fun6083(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__read__lines_fun6083, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__read__lines_fun6083(kk_function_t _fself, kk_box_t _b_x2285, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6084;
  kk_std_os_path__path _x_x6085 = kk_std_os_path__path_unbox(_b_x2285, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x6084 = kk_std_os_file_read_text_file(_x_x6085, _ctx); /*string*/
  return kk_string_box(_x_x6084);
}
static kk_box_t kk_display_hc__read__lines_fun6078(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_display_hc__read__lines_fun6078__t* _self = kk_function_as(struct kk_display_hc__read__lines_fun6078__t*, _fself, _ctx);
  kk_string_t file__path = _self->file__path; /* string */
  kk_drop_match(_self, {kk_string_dup(file__path, _ctx);}, {}, _ctx)
  kk_std_os_path__path _x_x1_11128;
  kk_box_t _x_x6079 = kk_std_core_hnd__open_none1(kk_display_new_hc__read__lines_fun6080(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x1_11128 = kk_std_os_path__path_unbox(_x_x6079, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_ssize_t _b_x2282_2288 = (KK_IZ(0)); /*hnd/ev-index*/;
  return kk_std_core_hnd__open_at1(_b_x2282_2288, kk_display_new_hc__read__lines_fun6083(_ctx), kk_std_os_path__path_box(_x_x1_11128, _ctx), _ctx);
}


// lift anonymous function
struct kk_display_hc__read__lines_fun6087__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__read__lines_fun6087(kk_function_t _fself, kk_box_t _b_x2292, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__read__lines_fun6087(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__read__lines_fun6087, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__read__lines_fun6087(kk_function_t _fself, kk_box_t _b_x2292, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6088;
  kk_std_core_exn__error _x_x6089 = kk_std_core_exn__error_unbox(_b_x2292, KK_OWNED, _ctx); /*error<string>*/
  _x_x6088 = kk_display__mlift_hc__read__lines_11197(_x_x6089, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6088, _ctx);
}


// lift anonymous function
struct kk_display_hc__read__lines_fun6091__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__read__lines_fun6091(kk_function_t _fself, kk_box_t _b_x2296, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__read__lines_fun6091(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__read__lines_fun6091, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__read__lines_fun6091(kk_function_t _fself, kk_box_t _b_x2296, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6092;
  kk_std_core_exn__exception _match_x2391 = kk_std_core_exn__exception_unbox(_b_x2296, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2391.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2391, _ctx);
    _x_x6092 = _x; /*string*/
  }
  return kk_string_box(_x_x6092);
}


// lift anonymous function
struct kk_display_hc__read__lines_fun6098__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__read__lines_fun6098(kk_function_t _fself, kk_box_t _b_x2305, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__read__lines_fun6098(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__read__lines_fun6098, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__read__lines_fun6098(kk_function_t _fself, kk_box_t _b_x2305, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6099;
  kk_string_t _x_x6100 = kk_string_unbox(_b_x2305); /*string*/
  _x_x6099 = kk_display__mlift_hc__read__lines_11196(_x_x6100, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6099, _ctx);
}


// lift anonymous function
struct kk_display_hc__read__lines_fun6101__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__read__lines_fun6101(kk_function_t _fself, kk_box_t _b_x2311, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__read__lines_fun6101(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__read__lines_fun6101, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_display_hc__read__lines_fun6107__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__read__lines_fun6107(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__read__lines_fun6107(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__read__lines_fun6107, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__read__lines_fun6107(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6108;
  kk_char_t _x_x6109 = kk_char_unbox(_b_x2308, KK_OWNED, _ctx); /*char*/
  _x_x6108 = kk_std_core_string_char_fs_string(_x_x6109, _ctx); /*string*/
  return kk_string_box(_x_x6108);
}
static kk_box_t kk_display_hc__read__lines_fun6101(kk_function_t _fself, kk_box_t _b_x2311, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2318 = kk_string_unbox(_b_x2311); /*string*/;
  kk_std_core_types__list _x_x6102;
  bool _match_x2388;
  kk_string_t _x_x6103;
  kk_define_string_literal(static, _s_x6104, 1, "\n", _ctx)
  _x_x6103 = kk_string_dup(_s_x6104, _ctx); /*string*/
  kk_string_t _x_x6105 = kk_string_empty(); /*string*/
  _match_x2388 = kk_string_is_eq(_x_x6103,_x_x6105,kk_context()); /*bool*/
  if (_match_x2388) {
    kk_std_core_types__list _b_x2306_2316 = kk_std_core_string_list(s_2318, _ctx); /*list<char>*/;
    kk_function_t _brw_x2389 = kk_display_new_hc__read__lines_fun6107(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2390 = kk_std_core_list_map(_b_x2306_2316, _brw_x2389, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2389, _ctx);
    _x_x6102 = _brw_x2390; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x6110;
    kk_define_string_literal(static, _s_x6111, 1, "\n", _ctx)
    _x_x6110 = kk_string_dup(_s_x6111, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2318,_x_x6110,kk_context()); /*vector<string>*/
    _x_x6102 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x6102, _ctx);
}

kk_std_core_types__list kk_display_hc__read__lines(kk_string_t file__path, kk_context_t* _ctx) { /* (file_path : string) -> <exn,fsys> list<string> */ 
  kk_std_core_exn__error x_11404 = kk_std_core_exn_error_fs_try(kk_display_new_hc__read__lines_fun6078(file__path, _ctx), _ctx); /*error<string>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_exn__error_drop(x_11404, _ctx);
    kk_box_t _x_x6086 = kk_std_core_hnd_yield_extend(kk_display_new_hc__read__lines_fun6087(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x6086, KK_OWNED, _ctx);
  }
  {
    kk_string_t x_0_11407;
    if (kk_std_core_exn__is_Ok(x_11404, _ctx)) {
      kk_box_t _box_x2293 = x_11404._cons.Ok.result;
      kk_string_t hc____c = kk_string_unbox(_box_x2293);
      kk_string_dup(hc____c, _ctx);
      kk_std_core_exn__error_drop(x_11404, _ctx);
      x_0_11407 = hc____c; /*string*/
    }
    else {
      kk_std_core_exn__exception hc____e = x_11404._cons.Error.exception;
      kk_std_core_exn__exception_dup(hc____e, _ctx);
      kk_std_core_exn__error_drop(x_11404, _ctx);
      kk_string_t hc____e_0;
      kk_box_t _x_x6090 = kk_std_core_hnd__open_none1(kk_display_new_hc__read__lines_fun6091(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
      hc____e_0 = kk_string_unbox(_x_x6090); /*string*/
      kk_string_t _b_x2300_2302;
      kk_string_t _x_x6093;
      kk_define_string_literal(static, _s_x6094, 8, "unwrap: ", _ctx)
      _x_x6093 = kk_string_dup(_s_x6094, _ctx); /*string*/
      kk_string_t _x_x6095 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
      _b_x2300_2302 = kk_std_core_types__lp__plus__plus__rp_(_x_x6093, _x_x6095, _ctx); /*string*/
      kk_box_t _x_x6096 = kk_std_core_exn_throw(_b_x2300_2302, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
      x_0_11407 = kk_string_unbox(_x_x6096); /*string*/
    }
    kk_box_t _x_x6097;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_11407, _ctx);
      _x_x6097 = kk_std_core_hnd_yield_extend(kk_display_new_hc__read__lines_fun6098(_ctx), _ctx); /*10001*/
    }
    else {
      _x_x6097 = kk_std_core_hnd__open_none1(kk_display_new_hc__read__lines_fun6101(_ctx), kk_string_box(x_0_11407), _ctx); /*10001*/
    }
    return kk_std_core_types__list_unbox(_x_x6097, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_display_hc__write__lines_fun6114__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__write__lines_fun6114(kk_function_t _fself, kk_box_t _b_x2321, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__write__lines_fun6114(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__write__lines_fun6114, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__write__lines_fun6114(kk_function_t _fself, kk_box_t _b_x2321, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6115;
  kk_string_t _x_x6116 = kk_string_unbox(_b_x2321); /*string*/
  _x_x6115 = kk_std_os_path_path(_x_x6116, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6115, _ctx);
}

kk_unit_t kk_display_hc__write__lines(kk_string_t file__path, kk_std_core_types__list xs, kk_context_t* _ctx) { /* (file_path : string, xs : list<string>) -> <exn,fsys> () */ 
  kk_std_os_path__path _x_x6112;
  kk_box_t _x_x6113 = kk_std_core_hnd__open_none1(kk_display_new_hc__write__lines_fun6114(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x6112 = kk_std_os_path__path_unbox(_x_x6113, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_string_t _x_x6117;
  kk_string_t _x_x6118;
  kk_define_string_literal(static, _s_x6119, 1, "\n", _ctx)
  _x_x6118 = kk_string_dup(_s_x6119, _ctx); /*string*/
  _x_x6117 = kk_std_core_list_joinsep(xs, _x_x6118, _ctx); /*string*/
  kk_std_os_file_write_text_file(_x_x6112, _x_x6117, kk_std_core_types__new_None(_ctx), _ctx); return kk_Unit;
}
 
// .hc:6


// lift anonymous function
struct kk_display_hc__hml__show_fun6136__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__hml__show_fun6136(kk_function_t _fself, kk_box_t _b_x2326, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__hml__show_fun6136(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__hml__show_fun6136, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__hml__show_fun6136(kk_function_t _fself, kk_box_t _b_x2326, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6137;
  kk_hml__types__hml _x_x6138 = kk_hml__types__hml_unbox(_b_x2326, KK_OWNED, _ctx); /*hml_types/hml*/
  _x_x6137 = kk_display_hc__hml__show(_x_x6138, _ctx); /*string*/
  return kk_string_box(_x_x6137);
}

kk_string_t kk_display_hc__hml__show(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml_types/hml) -> div string */ 
  if (kk_hml__types__is_HStr(v, _ctx)) {
    struct kk_hml__types_HStr* _con_x6120 = kk_hml__types__as_HStr(v, _ctx);
    kk_string_t s = _con_x6120->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(s, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x6121;
    kk_string_t _x_x6122;
    kk_define_string_literal(static, _s_x6123, 1, "\"", _ctx)
    _x_x6122 = kk_string_dup(_s_x6123, _ctx); /*string*/
    _x_x6121 = kk_std_core_types__lp__plus__plus__rp_(_x_x6122, s, _ctx); /*string*/
    kk_string_t _x_x6124;
    kk_define_string_literal(static, _s_x6125, 1, "\"", _ctx)
    _x_x6124 = kk_string_dup(_s_x6125, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x6121, _x_x6124, _ctx);
  }
  if (kk_hml__types__is_HInt(v, _ctx)) {
    struct kk_hml__types_HInt* _con_x6126 = kk_hml__types__as_HInt(v, _ctx);
    kk_integer_t n = _con_x6126->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_integer_dup(n, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_core_int_show(n, _ctx);
  }
  if (kk_hml__types__is_HFloat(v, _ctx)) {
    struct kk_hml__types_HFloat* _con_x6127 = kk_hml__types__as_HFloat(v, _ctx);
    double f = _con_x6127->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_std_num_float64_show(f, kk_std_core_types__new_None(_ctx), _ctx);
  }
  if (kk_hml__types__is_HBool(v, _ctx)) {
    struct kk_hml__types_HBool* _con_x6128 = kk_hml__types__as_HBool(v, _ctx);
    bool b = _con_x6128->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    if (b) {
      kk_define_string_literal(static, _s_x6129, 4, "true", _ctx)
      return kk_string_dup(_s_x6129, _ctx);
    }
    {
      kk_define_string_literal(static, _s_x6130, 5, "false", _ctx)
      return kk_string_dup(_s_x6130, _ctx);
    }
  }
  if (kk_hml__types__is_HDuration(v, _ctx)) {
    struct kk_hml__types_HDuration* _con_x6131 = kk_hml__types__as_HDuration(v, _ctx);
    kk_integer_t amount = _con_x6131->amount;
    kk_string_t unit = _con_x6131->unit;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_integer_dup(amount, _ctx);
      kk_string_dup(unit, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x6132 = kk_std_core_int_show(amount, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x6132, unit, _ctx);
  }
  if (kk_hml__types__is_HDatetime(v, _ctx)) {
    struct kk_hml__types_HDatetime* _con_x6133 = kk_hml__types__as_HDatetime(v, _ctx);
    kk_string_t s_0 = _con_x6133->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(s_0, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return s_0;
  }
  if (kk_hml__types__is_HNull(v, _ctx)) {
    kk_define_string_literal(static, _s_x6134, 4, "null", _ctx)
    return kk_string_dup(_s_x6134, _ctx);
  }
  if (kk_hml__types__is_HArray(v, _ctx)) {
    struct kk_hml__types_HArray* _con_x6135 = kk_hml__types__as_HArray(v, _ctx);
    kk_std_core_types__list items = _con_x6135->items;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_std_core_types__list_dup(items, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_std_core_types__list xs_10730;
    kk_function_t _brw_x2384 = kk_display_new_hc__hml__show_fun6136(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2385 = kk_std_core_list_map(items, _brw_x2384, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2384, _ctx);
    xs_10730 = _brw_x2385; /*list<string>*/
    kk_string_t _x_x6139;
    kk_string_t _x_x6140;
    kk_define_string_literal(static, _s_x6141, 1, "[", _ctx)
    _x_x6140 = kk_string_dup(_s_x6141, _ctx); /*string*/
    kk_string_t _x_x6142;
    kk_string_t _x_x6143;
    kk_define_string_literal(static, _s_x6144, 2, ", ", _ctx)
    _x_x6143 = kk_string_dup(_s_x6144, _ctx); /*string*/
    _x_x6142 = kk_std_core_list_joinsep(xs_10730, _x_x6143, _ctx); /*string*/
    _x_x6139 = kk_std_core_types__lp__plus__plus__rp_(_x_x6140, _x_x6142, _ctx); /*string*/
    kk_string_t _x_x6145;
    kk_define_string_literal(static, _s_x6146, 1, "]", _ctx)
    _x_x6145 = kk_string_dup(_s_x6146, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x6139, _x_x6145, _ctx);
  }
  {
    struct kk_hml__types_HElement* _con_x6147 = kk_hml__types__as_HElement(v, _ctx);
    kk_string_t name = _con_x6147->name;
    kk_std_core_types__list attrs = _con_x6147->attrs;
    kk_std_core_types__list body = _con_x6147->body;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_std_core_types__list_dup(attrs, _ctx);
      kk_std_core_types__list_dup(body, _ctx);
      kk_string_dup(name, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    return kk_display_hc__show__element(name, attrs, body, _ctx);
  }
}
 
// .hc:25

kk_string_t kk_display_hc__show__attr(kk_std_core_types__tuple2 entry, kk_context_t* _ctx) { /* (entry : (string, hml_types/hml)) -> div string */ 
  {
    kk_box_t _box_x2329 = entry.fst;
    kk_box_t _box_x2330 = entry.snd;
    kk_hml__types__hml _x = kk_hml__types__hml_unbox(_box_x2330, KK_BORROWED, _ctx);
    kk_hml__types__hml_dup(_x, _ctx);
    if (kk_hml__types__is_HBool(_x, _ctx)) {
      struct kk_hml__types_HBool* _con_x6148 = kk_hml__types__as_HBool(_x, _ctx);
      bool _pat_0_0_0 = _con_x6148->value;
      if (_pat_0_0_0) {
        if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
          kk_datatype_ptr_free(_x, _ctx);
        }
        else {
          kk_datatype_ptr_decref(_x, _ctx);
        }
        {
          kk_box_t _box_x2331 = entry.fst;
          kk_box_t _box_x2332 = entry.snd;
          kk_string_t _x_0 = kk_string_unbox(_box_x2331);
          kk_string_dup(_x_0, _ctx);
          kk_std_core_types__tuple2_drop(entry, _ctx);
          return _x_0;
        }
      }
    }
    {
      kk_hml__types__hml_drop(_x, _ctx);
      kk_string_t _x_x6149;
      kk_string_t _x_x6150;
      {
        kk_box_t _box_x2333 = entry.fst;
        kk_box_t _box_x2334 = entry.snd;
        kk_string_t _x_1 = kk_string_unbox(_box_x2333);
        kk_string_dup(_x_1, _ctx);
        _x_x6150 = _x_1; /*string*/
      }
      kk_string_t _x_x6151;
      kk_define_string_literal(static, _s_x6152, 2, ": ", _ctx)
      _x_x6151 = kk_string_dup(_s_x6152, _ctx); /*string*/
      _x_x6149 = kk_std_core_types__lp__plus__plus__rp_(_x_x6150, _x_x6151, _ctx); /*string*/
      kk_string_t _x_x6153;
      kk_hml__types__hml _x_x6154;
      {
        kk_box_t _box_x2335 = entry.fst;
        kk_box_t _box_x2336 = entry.snd;
        kk_hml__types__hml _x_2 = kk_hml__types__hml_unbox(_box_x2336, KK_BORROWED, _ctx);
        kk_hml__types__hml_dup(_x_2, _ctx);
        kk_std_core_types__tuple2_drop(entry, _ctx);
        _x_x6154 = _x_2; /*hml_types/hml*/
      }
      _x_x6153 = kk_display_hc__hml__show(_x_x6154, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x6149, _x_x6153, _ctx);
    }
  }
}
 
// .hc:17


// lift anonymous function
struct kk_display_hc__show__element_fun6157__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__show__element_fun6157(kk_function_t _fself, kk_box_t _b_x2339, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__show__element_fun6157(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__show__element_fun6157, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__show__element_fun6157(kk_function_t _fself, kk_box_t _b_x2339, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6158;
  kk_std_core_types__tuple2 _x_x6159 = kk_std_core_types__tuple2_unbox(_b_x2339, KK_OWNED, _ctx); /*(string, hml_types/hml)*/
  _x_x6158 = kk_display_hc__show__attr(_x_x6159, _ctx); /*string*/
  return kk_string_box(_x_x6158);
}

kk_string_t kk_display_hc__show__element(kk_string_t name_0, kk_std_core_types__list attrs_0, kk_std_core_types__list body_0, kk_context_t* _ctx) { /* (name : string, attrs : list<(string, hml_types/hml)>, body : list<hml_types/hmlnode>) -> div string */ 
  kk_string_t attr__str;
  bool _match_x2379;
  kk_integer_t _brw_x2382;
  kk_std_core_types__list _x_x6155 = kk_std_core_types__list_dup(attrs_0, _ctx); /*list<(string, hml_types/hml)>*/
  _brw_x2382 = kk_std_core_list__lift_length_6003(_x_x6155, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2383 = kk_integer_eq_borrow(_brw_x2382,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2382, _ctx);
  _match_x2379 = _brw_x2383; /*bool*/
  if (_match_x2379) {
    kk_std_core_types__list_drop(attrs_0, _ctx);
    attr__str = kk_string_empty(); /*string*/
  }
  else {
    kk_std_core_types__list xs_1_10737;
    kk_function_t _brw_x2380 = kk_display_new_hc__show__element_fun6157(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2381 = kk_std_core_list_map(attrs_0, _brw_x2380, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2380, _ctx);
    xs_1_10737 = _brw_x2381; /*list<string>*/
    kk_string_t _x_x6160;
    kk_string_t _x_x6161;
    kk_define_string_literal(static, _s_x6162, 1, "(", _ctx)
    _x_x6161 = kk_string_dup(_s_x6162, _ctx); /*string*/
    kk_string_t _x_x6163;
    kk_string_t _x_x6164;
    kk_define_string_literal(static, _s_x6165, 2, ", ", _ctx)
    _x_x6164 = kk_string_dup(_s_x6165, _ctx); /*string*/
    _x_x6163 = kk_std_core_list_joinsep(xs_1_10737, _x_x6164, _ctx); /*string*/
    _x_x6160 = kk_std_core_types__lp__plus__plus__rp_(_x_x6161, _x_x6163, _ctx); /*string*/
    kk_string_t _x_x6166;
    kk_define_string_literal(static, _s_x6167, 1, ")", _ctx)
    _x_x6166 = kk_string_dup(_s_x6167, _ctx); /*string*/
    attr__str = kk_std_core_types__lp__plus__plus__rp_(_x_x6160, _x_x6166, _ctx); /*string*/
  }
  kk_string_t body__str;
  bool _match_x2376;
  kk_integer_t _brw_x2377 = kk_std_core_list__lift_length_6003(body_0, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2378 = kk_integer_eq_borrow(_brw_x2377,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2377, _ctx);
  _match_x2376 = _brw_x2378; /*bool*/
  if (_match_x2376) {
    body__str = kk_string_empty(); /*string*/
  }
  else {
    kk_define_string_literal(static, _s_x6169, 8, " { ... }", _ctx)
    body__str = kk_string_dup(_s_x6169, _ctx); /*string*/
  }
  kk_string_t _x_x6170;
  kk_string_t _x_x6171;
  kk_string_t _x_x6172;
  kk_define_string_literal(static, _s_x6173, 1, "@", _ctx)
  _x_x6172 = kk_string_dup(_s_x6173, _ctx); /*string*/
  _x_x6171 = kk_std_core_types__lp__plus__plus__rp_(_x_x6172, name_0, _ctx); /*string*/
  _x_x6170 = kk_std_core_types__lp__plus__plus__rp_(_x_x6171, attr__str, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x6170, body__str, _ctx);
}
 
// .hc:35

kk_string_t kk_display_hc__make__indent(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> div string */ 
  bool _match_x2375 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2375) {
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x6175;
    kk_define_string_literal(static, _s_x6176, 4, "    ", _ctx)
    _x_x6175 = kk_string_dup(_s_x6176, _ctx); /*string*/
    kk_string_t _x_x6177;
    kk_integer_t _x_x6178 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x6177 = kk_display_hc__make__indent(_x_x6178, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x6175, _x_x6177, _ctx);
  }
}
 
// .hc:38


// lift anonymous function
struct kk_display_hc__hml__pretty_fun6179__t {
  struct kk_function_s _base;
  kk_integer_t indent;
};
static kk_box_t kk_display_hc__hml__pretty_fun6179(kk_function_t _fself, kk_box_t _b_x2344, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__hml__pretty_fun6179(kk_integer_t indent, kk_context_t* _ctx) {
  struct kk_display_hc__hml__pretty_fun6179__t* _self = kk_function_alloc_as(struct kk_display_hc__hml__pretty_fun6179__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_display_hc__hml__pretty_fun6179, kk_context());
  _self->indent = indent;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_display_hc__hml__pretty_fun6179(kk_function_t _fself, kk_box_t _b_x2344, kk_context_t* _ctx) {
  struct kk_display_hc__hml__pretty_fun6179__t* _self = kk_function_as(struct kk_display_hc__hml__pretty_fun6179__t*, _fself, _ctx);
  kk_integer_t indent = _self->indent; /* int */
  kk_drop_match(_self, {kk_integer_dup(indent, _ctx);}, {}, _ctx)
  kk_string_t _x_x6180;
  kk_hml__types__hmlnode _x_x6181 = kk_hml__types__hmlnode_unbox(_b_x2344, KK_OWNED, _ctx); /*hml_types/hmlnode*/
  _x_x6180 = kk_display_hc__pretty__node(_x_x6181, indent, _ctx); /*string*/
  return kk_string_box(_x_x6180);
}

kk_string_t kk_display_hc__hml__pretty(kk_std_core_types__list nodes, kk_integer_t indent, kk_context_t* _ctx) { /* (nodes : list<hml_types/hmlnode>, indent : int) -> div string */ 
  kk_std_core_types__list xs_10742;
  kk_function_t _brw_x2373 = kk_display_new_hc__hml__pretty_fun6179(indent, _ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2374 = kk_std_core_list_map(nodes, _brw_x2373, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2373, _ctx);
  xs_10742 = _brw_x2374; /*list<string>*/
  kk_string_t _x_x6182;
  kk_define_string_literal(static, _s_x6183, 1, "\n", _ctx)
  _x_x6182 = kk_string_dup(_s_x6183, _ctx); /*string*/
  return kk_std_core_list_joinsep(xs_10742, _x_x6182, _ctx);
}
 
// .hc:41


// lift anonymous function
struct kk_display_hc__pretty__node_fun6195__t {
  struct kk_function_s _base;
};
static kk_box_t kk_display_hc__pretty__node_fun6195(kk_function_t _fself, kk_box_t _b_x2350, kk_context_t* _ctx);
static kk_function_t kk_display_new_hc__pretty__node_fun6195(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_display_hc__pretty__node_fun6195, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_display_hc__pretty__node_fun6195(kk_function_t _fself, kk_box_t _b_x2350, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6196;
  kk_std_core_types__tuple2 _x_x6197 = kk_std_core_types__tuple2_unbox(_b_x2350, KK_OWNED, _ctx); /*(string, hml_types/hml)*/
  _x_x6196 = kk_display_hc__show__attr(_x_x6197, _ctx); /*string*/
  return kk_string_box(_x_x6196);
}

kk_string_t kk_display_hc__pretty__node(kk_hml__types__hmlnode node_0, kk_integer_t indent_0, kk_context_t* _ctx) { /* (node : hml_types/hmlnode, indent : int) -> div string */ 
  kk_string_t pad;
  kk_integer_t _x_x6184 = kk_integer_dup(indent_0, _ctx); /*int*/
  pad = kk_display_hc__make__indent(_x_x6184, _ctx); /*string*/
  if (kk_hml__types__is_NProp(node_0, _ctx)) {
    struct kk_hml__types_NProp* _con_x6185 = kk_hml__types__as_NProp(node_0, _ctx);
    kk_string_t key = _con_x6185->key;
    kk_hml__types__hml hc__val = _con_x6185->value;
    if kk_likely(kk_datatype_ptr_is_unique(node_0, _ctx)) {
      kk_datatype_ptr_free(node_0, _ctx);
    }
    else {
      kk_hml__types__hml_dup(hc__val, _ctx);
      kk_string_dup(key, _ctx);
      kk_datatype_ptr_decref(node_0, _ctx);
    }
    kk_integer_drop(indent_0, _ctx);
    kk_string_t _x_x6186;
    kk_string_t _x_x6187 = kk_std_core_types__lp__plus__plus__rp_(pad, key, _ctx); /*string*/
    kk_string_t _x_x6188;
    kk_define_string_literal(static, _s_x6189, 2, ": ", _ctx)
    _x_x6188 = kk_string_dup(_s_x6189, _ctx); /*string*/
    _x_x6186 = kk_std_core_types__lp__plus__plus__rp_(_x_x6187, _x_x6188, _ctx); /*string*/
    kk_string_t _x_x6190 = kk_display_hc__hml__show(hc__val, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x6186, _x_x6190, _ctx);
  }
  if (kk_hml__types__is_NElem(node_0, _ctx)) {
    struct kk_hml__types_NElem* _con_x6191 = kk_hml__types__as_NElem(node_0, _ctx);
    kk_hml__types__hml _pat_1 = _con_x6191->element;
    if (kk_hml__types__is_HElement(_pat_1, _ctx)) {
      struct kk_hml__types_HElement* _con_x6192 = kk_hml__types__as_HElement(_pat_1, _ctx);
      kk_string_t name = _con_x6192->name;
      kk_std_core_types__list attrs = _con_x6192->attrs;
      kk_std_core_types__list body = _con_x6192->body;
      if kk_likely(kk_datatype_ptr_is_unique(node_0, _ctx)) {
        if kk_likely(kk_datatype_ptr_is_unique(_pat_1, _ctx)) {
          kk_datatype_ptr_free(_pat_1, _ctx);
        }
        else {
          kk_std_core_types__list_dup(attrs, _ctx);
          kk_std_core_types__list_dup(body, _ctx);
          kk_string_dup(name, _ctx);
          kk_datatype_ptr_decref(_pat_1, _ctx);
        }
        kk_datatype_ptr_free(node_0, _ctx);
      }
      else {
        kk_std_core_types__list_dup(attrs, _ctx);
        kk_std_core_types__list_dup(body, _ctx);
        kk_string_dup(name, _ctx);
        kk_datatype_ptr_decref(node_0, _ctx);
      }
      kk_string_t attr__str;
      bool _match_x2368;
      kk_integer_t _brw_x2371;
      kk_std_core_types__list _x_x6193 = kk_std_core_types__list_dup(attrs, _ctx); /*list<(string, hml_types/hml)>*/
      _brw_x2371 = kk_std_core_list__lift_length_6003(_x_x6193, kk_integer_from_small(0), _ctx); /*int*/
      bool _brw_x2372 = kk_integer_eq_borrow(_brw_x2371,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2371, _ctx);
      _match_x2368 = _brw_x2372; /*bool*/
      if (_match_x2368) {
        kk_std_core_types__list_drop(attrs, _ctx);
        attr__str = kk_string_empty(); /*string*/
      }
      else {
        kk_std_core_types__list xs_1_10745;
        kk_function_t _brw_x2369 = kk_display_new_hc__pretty__node_fun6195(_ctx); /*(10001) -> 10003 10002*/;
        kk_std_core_types__list _brw_x2370 = kk_std_core_list_map(attrs, _brw_x2369, _ctx); /*list<10002>*/;
        kk_function_drop(_brw_x2369, _ctx);
        xs_1_10745 = _brw_x2370; /*list<string>*/
        kk_string_t _x_x6198;
        kk_string_t _x_x6199;
        kk_define_string_literal(static, _s_x6200, 1, "(", _ctx)
        _x_x6199 = kk_string_dup(_s_x6200, _ctx); /*string*/
        kk_string_t _x_x6201;
        kk_string_t _x_x6202;
        kk_define_string_literal(static, _s_x6203, 2, ", ", _ctx)
        _x_x6202 = kk_string_dup(_s_x6203, _ctx); /*string*/
        _x_x6201 = kk_std_core_list_joinsep(xs_1_10745, _x_x6202, _ctx); /*string*/
        _x_x6198 = kk_std_core_types__lp__plus__plus__rp_(_x_x6199, _x_x6201, _ctx); /*string*/
        kk_string_t _x_x6204;
        kk_define_string_literal(static, _s_x6205, 1, ")", _ctx)
        _x_x6204 = kk_string_dup(_s_x6205, _ctx); /*string*/
        attr__str = kk_std_core_types__lp__plus__plus__rp_(_x_x6198, _x_x6204, _ctx); /*string*/
      }
      bool _match_x2365;
      kk_integer_t _brw_x2366;
      kk_std_core_types__list _x_x6206 = kk_std_core_types__list_dup(body, _ctx); /*list<hml_types/hmlnode>*/
      _brw_x2366 = kk_std_core_list__lift_length_6003(_x_x6206, kk_integer_from_small(0), _ctx); /*int*/
      bool _brw_x2367 = kk_integer_eq_borrow(_brw_x2366,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2366, _ctx);
      _match_x2365 = _brw_x2367; /*bool*/
      if (_match_x2365) {
        kk_integer_drop(indent_0, _ctx);
        kk_std_core_types__list_drop(body, _ctx);
        kk_string_t _x_x6207;
        kk_string_t _x_x6208;
        kk_string_t _x_x6209;
        kk_define_string_literal(static, _s_x6210, 1, "@", _ctx)
        _x_x6209 = kk_string_dup(_s_x6210, _ctx); /*string*/
        _x_x6208 = kk_std_core_types__lp__plus__plus__rp_(pad, _x_x6209, _ctx); /*string*/
        _x_x6207 = kk_std_core_types__lp__plus__plus__rp_(_x_x6208, name, _ctx); /*string*/
        return kk_std_core_types__lp__plus__plus__rp_(_x_x6207, attr__str, _ctx);
      }
      {
        kk_string_t header;
        kk_string_t _x_x6211;
        kk_string_t _x_x6212;
        kk_string_t _x_x6213;
        kk_string_t _x_x6214 = kk_string_dup(pad, _ctx); /*string*/
        kk_string_t _x_x6215;
        kk_define_string_literal(static, _s_x6216, 1, "@", _ctx)
        _x_x6215 = kk_string_dup(_s_x6216, _ctx); /*string*/
        _x_x6213 = kk_std_core_types__lp__plus__plus__rp_(_x_x6214, _x_x6215, _ctx); /*string*/
        _x_x6212 = kk_std_core_types__lp__plus__plus__rp_(_x_x6213, name, _ctx); /*string*/
        _x_x6211 = kk_std_core_types__lp__plus__plus__rp_(_x_x6212, attr__str, _ctx); /*string*/
        kk_string_t _x_x6217;
        kk_define_string_literal(static, _s_x6218, 2, " {", _ctx)
        _x_x6217 = kk_string_dup(_s_x6218, _ctx); /*string*/
        header = kk_std_core_types__lp__plus__plus__rp_(_x_x6211, _x_x6217, _ctx); /*string*/
        kk_string_t content;
        kk_integer_t _x_x6219 = kk_integer_add_small_const(indent_0, 1, _ctx); /*int*/
        content = kk_display_hc__hml__pretty(body, _x_x6219, _ctx); /*string*/
        kk_string_t footer;
        kk_string_t _x_x6220;
        kk_define_string_literal(static, _s_x6221, 1, "}", _ctx)
        _x_x6220 = kk_string_dup(_s_x6221, _ctx); /*string*/
        footer = kk_std_core_types__lp__plus__plus__rp_(pad, _x_x6220, _ctx); /*string*/
        kk_std_core_types__list _x_x6222;
        kk_std_core_types__list _x_x6223;
        kk_std_core_types__list _x_x6224 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(footer), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        _x_x6223 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(content), _x_x6224, _ctx); /*list<10021>*/
        _x_x6222 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(header), _x_x6223, _ctx); /*list<10021>*/
        kk_string_t _x_x6225;
        kk_define_string_literal(static, _s_x6226, 1, "\n", _ctx)
        _x_x6225 = kk_string_dup(_s_x6226, _ctx); /*string*/
        return kk_std_core_list_joinsep(_x_x6222, _x_x6225, _ctx);
      }
    }
  }
  if (kk_hml__types__is_NElem(node_0, _ctx)) {
    struct kk_hml__types_NElem* _con_x6227 = kk_hml__types__as_NElem(node_0, _ctx);
    kk_hml__types__hml _pat_7 = _con_x6227->element;
    if kk_likely(kk_datatype_ptr_is_unique(node_0, _ctx)) {
      kk_hml__types__hml_drop(_pat_7, _ctx);
      kk_datatype_ptr_free(node_0, _ctx);
    }
    else {
      kk_datatype_ptr_decref(node_0, _ctx);
    }
    kk_integer_drop(indent_0, _ctx);
    kk_string_t _x_x6228;
    kk_define_string_literal(static, _s_x6229, 18, "// unknown element", _ctx)
    _x_x6228 = kk_string_dup(_s_x6229, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(pad, _x_x6228, _ctx);
  }
  if (kk_hml__types__is_NText(node_0, _ctx)) {
    struct kk_hml__types_NText* _con_x6230 = kk_hml__types__as_NText(node_0, _ctx);
    kk_string_t content_0 = _con_x6230->content;
    if kk_likely(kk_datatype_ptr_is_unique(node_0, _ctx)) {
      kk_datatype_ptr_free(node_0, _ctx);
    }
    else {
      kk_string_dup(content_0, _ctx);
      kk_datatype_ptr_decref(node_0, _ctx);
    }
    kk_integer_drop(indent_0, _ctx);
    return kk_std_core_types__lp__plus__plus__rp_(pad, content_0, _ctx);
  }
  {
    struct kk_hml__types_NComment* _con_x6231 = kk_hml__types__as_NComment(node_0, _ctx);
    kk_string_t text = _con_x6231->text;
    if kk_likely(kk_datatype_ptr_is_unique(node_0, _ctx)) {
      kk_datatype_ptr_free(node_0, _ctx);
    }
    else {
      kk_string_dup(text, _ctx);
      kk_datatype_ptr_decref(node_0, _ctx);
    }
    kk_integer_drop(indent_0, _ctx);
    kk_string_t _x_x6232;
    kk_string_t _x_x6233;
    kk_define_string_literal(static, _s_x6234, 3, "// ", _ctx)
    _x_x6233 = kk_string_dup(_s_x6234, _ctx); /*string*/
    _x_x6232 = kk_std_core_types__lp__plus__plus__rp_(pad, _x_x6233, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x6232, text, _ctx);
  }
}

// initialization
void kk_display__init(kk_context_t* _ctx){
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
    kk_string_t _x_x3155;
    kk_define_string_literal(static, _s_x3156, 16, "hica-brk@display", _ctx)
    _x_x3155 = kk_string_dup(_s_x3156, _ctx); /*string*/
    kk_display_hica_brk_fs__tag = kk_std_core_hnd__new_Htag(_x_x3155, _ctx); /*hnd/htag<display/hica-brk>*/
  }
}

// termination
void kk_display__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_display_hica_brk_fs__tag, _ctx);
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
