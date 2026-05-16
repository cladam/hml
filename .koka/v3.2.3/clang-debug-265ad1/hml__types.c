// Koka generated module: hml_types, koka version: 3.2.3, platform: 64-bit
#include "hml__types.h"
 
// runtime tag for the effect `:hica-brk`

kk_std_core_hnd__htag kk_hml__types_hica_brk_fs__tag;
 
// handler for the effect `:hica-brk`

kk_box_t kk_hml__types_hica_brk_fs__handle(kk_hml__types__hica_brk hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : hica-brk<e,b>, ret : (res : a) -> e b, action : () -> <hica-brk|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x3115 = kk_std_core_hnd__htag_dup(kk_hml__types_hica_brk_fs__tag, _ctx); /*hnd/htag<hml_types/hica-brk>*/
  return kk_std_core_hnd__hhandle(_x_x3115, kk_hml__types__hica_brk_box(hnd, _ctx), ret, action, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc_assert_fun3121__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc_assert_fun3121(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc_assert_fun3121(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc_assert_fun3121, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc_assert_fun3121(kk_function_t _fself, kk_box_t _b_x11, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x3122;
  bool b_0_18 = kk_bool_unbox(_b_x11); /*bool*/;
  if (b_0_18) {
    _x_x3122 = false; /*bool*/
  }
  else {
    _x_x3122 = true; /*bool*/
  }
  return kk_bool_box(_x_x3122);
}

kk_unit_t kk_hml__types_hc_assert(bool b, kk_context_t* _ctx) { /* (b : bool) -> exn () */ 
  bool _match_x2951;
  kk_box_t _x_x3120 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc_assert_fun3121(_ctx), kk_bool_box(b), _ctx); /*10001*/
  _match_x2951 = kk_bool_unbox(_x_x3120); /*bool*/
  if (_match_x2951) {
    kk_box_t _x_x3123;
    kk_string_t _x_x3124;
    kk_define_string_literal(static, _s_x3125, 16, "assertion failed", _ctx)
    _x_x3124 = kk_string_dup(_s_x3125, _ctx); /*string*/
    _x_x3123 = kk_std_core_exn_throw(_x_x3124, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    kk_unit_unbox(_x_x3123); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}

kk_hml__types__cliflag kk_hml__types_cliflag_fs__copy(kk_hml__types__cliflag _this, kk_std_core_types__optional flag__name, kk_std_core_types__optional flag__short, kk_std_core_types__optional flag__help, kk_context_t* _ctx) { /* (cliflag, flag_name : ? string, flag_short : ? string, flag_help : ? string) -> cliflag */ 
  kk_string_t _x_x3132;
  if (kk_std_core_types__is_Optional(flag__name, _ctx)) {
    kk_box_t _box_x19 = flag__name._cons._Optional.value;
    kk_string_t _uniq_flag__name_924 = kk_string_unbox(_box_x19);
    kk_string_dup(_uniq_flag__name_924, _ctx);
    kk_std_core_types__optional_drop(flag__name, _ctx);
    _x_x3132 = _uniq_flag__name_924; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__name, _ctx);
    {
      struct kk_hml__types_Cliflag* _con_x3133 = kk_hml__types__as_Cliflag(_this, _ctx);
      kk_string_t _x = _con_x3133->flag__name;
      kk_string_dup(_x, _ctx);
      _x_x3132 = _x; /*string*/
    }
  }
  kk_string_t _x_x3134;
  if (kk_std_core_types__is_Optional(flag__short, _ctx)) {
    kk_box_t _box_x20 = flag__short._cons._Optional.value;
    kk_string_t _uniq_flag__short_932 = kk_string_unbox(_box_x20);
    kk_string_dup(_uniq_flag__short_932, _ctx);
    kk_std_core_types__optional_drop(flag__short, _ctx);
    _x_x3134 = _uniq_flag__short_932; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__short, _ctx);
    {
      struct kk_hml__types_Cliflag* _con_x3135 = kk_hml__types__as_Cliflag(_this, _ctx);
      kk_string_t _x_0 = _con_x3135->flag__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3134 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3136;
  if (kk_std_core_types__is_Optional(flag__help, _ctx)) {
    kk_box_t _box_x21 = flag__help._cons._Optional.value;
    kk_string_t _uniq_flag__help_940 = kk_string_unbox(_box_x21);
    kk_string_dup(_uniq_flag__help_940, _ctx);
    kk_std_core_types__optional_drop(flag__help, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x3136 = _uniq_flag__help_940; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(flag__help, _ctx);
    {
      struct kk_hml__types_Cliflag* _con_x3137 = kk_hml__types__as_Cliflag(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3137->flag__name;
      kk_string_t _pat_1_3 = _con_x3137->flag__short;
      kk_string_t _x_1 = _con_x3137->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3136 = _x_1; /*string*/
    }
  }
  return kk_hml__types__new_Cliflag(kk_reuse_null, 0, _x_x3132, _x_x3134, _x_x3136, _ctx);
}

kk_string_t kk_hml__types_cliflag_fs_show(kk_hml__types__cliflag p, kk_context_t* _ctx) { /* (p : cliflag) -> string */ 
  kk_string_t _x_x3138;
  kk_define_string_literal(static, _s_x3139, 8, "CliFlag(", _ctx)
  _x_x3138 = kk_string_dup(_s_x3139, _ctx); /*string*/
  kk_string_t _x_x3140;
  kk_string_t _x_x3141;
  kk_define_string_literal(static, _s_x3142, 11, "flag_name: ", _ctx)
  _x_x3141 = kk_string_dup(_s_x3142, _ctx); /*string*/
  kk_string_t _x_x3143;
  kk_string_t _x_x3144;
  {
    struct kk_hml__types_Cliflag* _con_x3145 = kk_hml__types__as_Cliflag(p, _ctx);
    kk_string_t _x = _con_x3145->flag__name;
    kk_string_dup(_x, _ctx);
    _x_x3144 = _x; /*string*/
  }
  kk_string_t _x_x3146;
  kk_string_t _x_x3147;
  kk_define_string_literal(static, _s_x3148, 2, ", ", _ctx)
  _x_x3147 = kk_string_dup(_s_x3148, _ctx); /*string*/
  kk_string_t _x_x3149;
  kk_string_t _x_x3150;
  kk_define_string_literal(static, _s_x3151, 12, "flag_short: ", _ctx)
  _x_x3150 = kk_string_dup(_s_x3151, _ctx); /*string*/
  kk_string_t _x_x3152;
  kk_string_t _x_x3153;
  {
    struct kk_hml__types_Cliflag* _con_x3154 = kk_hml__types__as_Cliflag(p, _ctx);
    kk_string_t _x_0 = _con_x3154->flag__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3153 = _x_0; /*string*/
  }
  kk_string_t _x_x3155;
  kk_string_t _x_x3156;
  kk_define_string_literal(static, _s_x3157, 2, ", ", _ctx)
  _x_x3156 = kk_string_dup(_s_x3157, _ctx); /*string*/
  kk_string_t _x_x3158;
  kk_string_t _x_x3159;
  kk_define_string_literal(static, _s_x3160, 11, "flag_help: ", _ctx)
  _x_x3159 = kk_string_dup(_s_x3160, _ctx); /*string*/
  kk_string_t _x_x3161;
  kk_string_t _x_x3162;
  {
    struct kk_hml__types_Cliflag* _con_x3163 = kk_hml__types__as_Cliflag(p, _ctx);
    kk_string_t _pat_0_1 = _con_x3163->flag__name;
    kk_string_t _pat_1_1 = _con_x3163->flag__short;
    kk_string_t _x_1 = _con_x3163->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(p, _ctx);
    }
    _x_x3162 = _x_1; /*string*/
  }
  kk_string_t _x_x3164;
  kk_define_string_literal(static, _s_x3165, 1, ")", _ctx)
  _x_x3164 = kk_string_dup(_s_x3165, _ctx); /*string*/
  _x_x3161 = kk_std_core_types__lp__plus__plus__rp_(_x_x3162, _x_x3164, _ctx); /*string*/
  _x_x3158 = kk_std_core_types__lp__plus__plus__rp_(_x_x3159, _x_x3161, _ctx); /*string*/
  _x_x3155 = kk_std_core_types__lp__plus__plus__rp_(_x_x3156, _x_x3158, _ctx); /*string*/
  _x_x3152 = kk_std_core_types__lp__plus__plus__rp_(_x_x3153, _x_x3155, _ctx); /*string*/
  _x_x3149 = kk_std_core_types__lp__plus__plus__rp_(_x_x3150, _x_x3152, _ctx); /*string*/
  _x_x3146 = kk_std_core_types__lp__plus__plus__rp_(_x_x3147, _x_x3149, _ctx); /*string*/
  _x_x3143 = kk_std_core_types__lp__plus__plus__rp_(_x_x3144, _x_x3146, _ctx); /*string*/
  _x_x3140 = kk_std_core_types__lp__plus__plus__rp_(_x_x3141, _x_x3143, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3138, _x_x3140, _ctx);
}

kk_hml__types__clioption kk_hml__types_clioption_fs__copy(kk_hml__types__clioption _this, kk_std_core_types__optional opt__name, kk_std_core_types__optional opt__short, kk_std_core_types__optional opt__help, kk_std_core_types__optional opt__default, kk_context_t* _ctx) { /* (clioption, opt_name : ? string, opt_short : ? string, opt_help : ? string, opt_default : ? string) -> clioption */ 
  kk_string_t _x_x3170;
  if (kk_std_core_types__is_Optional(opt__name, _ctx)) {
    kk_box_t _box_x22 = opt__name._cons._Optional.value;
    kk_string_t _uniq_opt__name_1087 = kk_string_unbox(_box_x22);
    kk_string_dup(_uniq_opt__name_1087, _ctx);
    kk_std_core_types__optional_drop(opt__name, _ctx);
    _x_x3170 = _uniq_opt__name_1087; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__name, _ctx);
    {
      struct kk_hml__types_Clioption* _con_x3171 = kk_hml__types__as_Clioption(_this, _ctx);
      kk_string_t _x = _con_x3171->opt__name;
      kk_string_dup(_x, _ctx);
      _x_x3170 = _x; /*string*/
    }
  }
  kk_string_t _x_x3172;
  if (kk_std_core_types__is_Optional(opt__short, _ctx)) {
    kk_box_t _box_x23 = opt__short._cons._Optional.value;
    kk_string_t _uniq_opt__short_1095 = kk_string_unbox(_box_x23);
    kk_string_dup(_uniq_opt__short_1095, _ctx);
    kk_std_core_types__optional_drop(opt__short, _ctx);
    _x_x3172 = _uniq_opt__short_1095; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__short, _ctx);
    {
      struct kk_hml__types_Clioption* _con_x3173 = kk_hml__types__as_Clioption(_this, _ctx);
      kk_string_t _x_0 = _con_x3173->opt__short;
      kk_string_dup(_x_0, _ctx);
      _x_x3172 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3174;
  if (kk_std_core_types__is_Optional(opt__help, _ctx)) {
    kk_box_t _box_x24 = opt__help._cons._Optional.value;
    kk_string_t _uniq_opt__help_1103 = kk_string_unbox(_box_x24);
    kk_string_dup(_uniq_opt__help_1103, _ctx);
    kk_std_core_types__optional_drop(opt__help, _ctx);
    _x_x3174 = _uniq_opt__help_1103; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__help, _ctx);
    {
      struct kk_hml__types_Clioption* _con_x3175 = kk_hml__types__as_Clioption(_this, _ctx);
      kk_string_t _x_1 = _con_x3175->opt__help;
      kk_string_dup(_x_1, _ctx);
      _x_x3174 = _x_1; /*string*/
    }
  }
  kk_string_t _x_x3176;
  if (kk_std_core_types__is_Optional(opt__default, _ctx)) {
    kk_box_t _box_x25 = opt__default._cons._Optional.value;
    kk_string_t _uniq_opt__default_1111 = kk_string_unbox(_box_x25);
    kk_string_dup(_uniq_opt__default_1111, _ctx);
    kk_std_core_types__optional_drop(opt__default, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(4)), _ctx);
    _x_x3176 = _uniq_opt__default_1111; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(opt__default, _ctx);
    {
      struct kk_hml__types_Clioption* _con_x3177 = kk_hml__types__as_Clioption(_this, _ctx);
      kk_string_t _pat_0_3 = _con_x3177->opt__name;
      kk_string_t _pat_1_4 = _con_x3177->opt__short;
      kk_string_t _pat_2_3 = _con_x3177->opt__help;
      kk_string_t _x_2 = _con_x3177->opt__default;
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
      _x_x3176 = _x_2; /*string*/
    }
  }
  return kk_hml__types__new_Clioption(kk_reuse_null, 0, _x_x3170, _x_x3172, _x_x3174, _x_x3176, _ctx);
}

kk_string_t kk_hml__types_clioption_fs_show(kk_hml__types__clioption p, kk_context_t* _ctx) { /* (p : clioption) -> string */ 
  kk_string_t _x_x3178;
  kk_define_string_literal(static, _s_x3179, 10, "CliOption(", _ctx)
  _x_x3178 = kk_string_dup(_s_x3179, _ctx); /*string*/
  kk_string_t _x_x3180;
  kk_string_t _x_x3181;
  kk_define_string_literal(static, _s_x3182, 10, "opt_name: ", _ctx)
  _x_x3181 = kk_string_dup(_s_x3182, _ctx); /*string*/
  kk_string_t _x_x3183;
  kk_string_t _x_x3184;
  {
    struct kk_hml__types_Clioption* _con_x3185 = kk_hml__types__as_Clioption(p, _ctx);
    kk_string_t _x = _con_x3185->opt__name;
    kk_string_dup(_x, _ctx);
    _x_x3184 = _x; /*string*/
  }
  kk_string_t _x_x3186;
  kk_string_t _x_x3187;
  kk_define_string_literal(static, _s_x3188, 2, ", ", _ctx)
  _x_x3187 = kk_string_dup(_s_x3188, _ctx); /*string*/
  kk_string_t _x_x3189;
  kk_string_t _x_x3190;
  kk_define_string_literal(static, _s_x3191, 11, "opt_short: ", _ctx)
  _x_x3190 = kk_string_dup(_s_x3191, _ctx); /*string*/
  kk_string_t _x_x3192;
  kk_string_t _x_x3193;
  {
    struct kk_hml__types_Clioption* _con_x3194 = kk_hml__types__as_Clioption(p, _ctx);
    kk_string_t _x_0 = _con_x3194->opt__short;
    kk_string_dup(_x_0, _ctx);
    _x_x3193 = _x_0; /*string*/
  }
  kk_string_t _x_x3195;
  kk_string_t _x_x3196;
  kk_define_string_literal(static, _s_x3197, 2, ", ", _ctx)
  _x_x3196 = kk_string_dup(_s_x3197, _ctx); /*string*/
  kk_string_t _x_x3198;
  kk_string_t _x_x3199;
  kk_define_string_literal(static, _s_x3200, 10, "opt_help: ", _ctx)
  _x_x3199 = kk_string_dup(_s_x3200, _ctx); /*string*/
  kk_string_t _x_x3201;
  kk_string_t _x_x3202;
  {
    struct kk_hml__types_Clioption* _con_x3203 = kk_hml__types__as_Clioption(p, _ctx);
    kk_string_t _x_1 = _con_x3203->opt__help;
    kk_string_dup(_x_1, _ctx);
    _x_x3202 = _x_1; /*string*/
  }
  kk_string_t _x_x3204;
  kk_string_t _x_x3205;
  kk_define_string_literal(static, _s_x3206, 2, ", ", _ctx)
  _x_x3205 = kk_string_dup(_s_x3206, _ctx); /*string*/
  kk_string_t _x_x3207;
  kk_string_t _x_x3208;
  kk_define_string_literal(static, _s_x3209, 13, "opt_default: ", _ctx)
  _x_x3208 = kk_string_dup(_s_x3209, _ctx); /*string*/
  kk_string_t _x_x3210;
  kk_string_t _x_x3211;
  {
    struct kk_hml__types_Clioption* _con_x3212 = kk_hml__types__as_Clioption(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3212->opt__name;
    kk_string_t _pat_1_2 = _con_x3212->opt__short;
    kk_string_t _pat_2_2 = _con_x3212->opt__help;
    kk_string_t _x_2 = _con_x3212->opt__default;
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
    _x_x3211 = _x_2; /*string*/
  }
  kk_string_t _x_x3213;
  kk_define_string_literal(static, _s_x3214, 1, ")", _ctx)
  _x_x3213 = kk_string_dup(_s_x3214, _ctx); /*string*/
  _x_x3210 = kk_std_core_types__lp__plus__plus__rp_(_x_x3211, _x_x3213, _ctx); /*string*/
  _x_x3207 = kk_std_core_types__lp__plus__plus__rp_(_x_x3208, _x_x3210, _ctx); /*string*/
  _x_x3204 = kk_std_core_types__lp__plus__plus__rp_(_x_x3205, _x_x3207, _ctx); /*string*/
  _x_x3201 = kk_std_core_types__lp__plus__plus__rp_(_x_x3202, _x_x3204, _ctx); /*string*/
  _x_x3198 = kk_std_core_types__lp__plus__plus__rp_(_x_x3199, _x_x3201, _ctx); /*string*/
  _x_x3195 = kk_std_core_types__lp__plus__plus__rp_(_x_x3196, _x_x3198, _ctx); /*string*/
  _x_x3192 = kk_std_core_types__lp__plus__plus__rp_(_x_x3193, _x_x3195, _ctx); /*string*/
  _x_x3189 = kk_std_core_types__lp__plus__plus__rp_(_x_x3190, _x_x3192, _ctx); /*string*/
  _x_x3186 = kk_std_core_types__lp__plus__plus__rp_(_x_x3187, _x_x3189, _ctx); /*string*/
  _x_x3183 = kk_std_core_types__lp__plus__plus__rp_(_x_x3184, _x_x3186, _ctx); /*string*/
  _x_x3180 = kk_std_core_types__lp__plus__plus__rp_(_x_x3181, _x_x3183, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3178, _x_x3180, _ctx);
}

kk_hml__types__cliarg kk_hml__types_cliarg_fs__copy(kk_hml__types__cliarg _this, kk_std_core_types__optional arg__name, kk_std_core_types__optional arg__help, kk_std_core_types__optional arg__required, kk_context_t* _ctx) { /* (cliarg, arg_name : ? string, arg_help : ? string, arg_required : ? bool) -> cliarg */ 
  kk_string_t _x_x3218;
  if (kk_std_core_types__is_Optional(arg__name, _ctx)) {
    kk_box_t _box_x26 = arg__name._cons._Optional.value;
    kk_string_t _uniq_arg__name_1282 = kk_string_unbox(_box_x26);
    kk_string_dup(_uniq_arg__name_1282, _ctx);
    kk_std_core_types__optional_drop(arg__name, _ctx);
    _x_x3218 = _uniq_arg__name_1282; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__name, _ctx);
    {
      struct kk_hml__types_Cliarg* _con_x3219 = kk_hml__types__as_Cliarg(_this, _ctx);
      kk_string_t _x = _con_x3219->arg__name;
      kk_string_dup(_x, _ctx);
      _x_x3218 = _x; /*string*/
    }
  }
  kk_string_t _x_x3220;
  if (kk_std_core_types__is_Optional(arg__help, _ctx)) {
    kk_box_t _box_x27 = arg__help._cons._Optional.value;
    kk_string_t _uniq_arg__help_1290 = kk_string_unbox(_box_x27);
    kk_string_dup(_uniq_arg__help_1290, _ctx);
    kk_std_core_types__optional_drop(arg__help, _ctx);
    _x_x3220 = _uniq_arg__help_1290; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(arg__help, _ctx);
    {
      struct kk_hml__types_Cliarg* _con_x3221 = kk_hml__types__as_Cliarg(_this, _ctx);
      kk_string_t _x_0 = _con_x3221->arg__help;
      kk_string_dup(_x_0, _ctx);
      _x_x3220 = _x_0; /*string*/
    }
  }
  bool _x_x3222;
  if (kk_std_core_types__is_Optional(arg__required, _ctx)) {
    kk_box_t _box_x28 = arg__required._cons._Optional.value;
    bool _uniq_arg__required_1298 = kk_bool_unbox(_box_x28);
    kk_std_core_types__optional_drop(arg__required, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(2)), _ctx);
    _x_x3222 = _uniq_arg__required_1298; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(arg__required, _ctx);
    {
      struct kk_hml__types_Cliarg* _con_x3223 = kk_hml__types__as_Cliarg(_this, _ctx);
      kk_string_t _pat_0_2 = _con_x3223->arg__name;
      kk_string_t _pat_1_3 = _con_x3223->arg__help;
      bool _x_1 = _con_x3223->arg__required;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_string_drop(_pat_1_3, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x3222 = _x_1; /*bool*/
    }
  }
  return kk_hml__types__new_Cliarg(kk_reuse_null, 0, _x_x3218, _x_x3220, _x_x3222, _ctx);
}

kk_hml__types__clispec kk_hml__types_clispec_fs__copy(kk_hml__types__clispec _this, kk_std_core_types__optional app__name, kk_std_core_types__optional app__version, kk_std_core_types__optional app__about, kk_std_core_types__optional app__flags, kk_std_core_types__optional app__options, kk_std_core_types__optional app__args, kk_std_core_types__optional app__commands, kk_context_t* _ctx) { /* (clispec, app_name : ? string, app_version : ? string, app_about : ? string, app_flags : ? (list<cliflag>), app_options : ? (list<clioption>), app_args : ? (list<cliarg>), app_commands : ? (list<(string, clispec)>)) -> clispec */ 
  kk_string_t _x_x3231;
  if (kk_std_core_types__is_Optional(app__name, _ctx)) {
    kk_box_t _box_x29 = app__name._cons._Optional.value;
    kk_string_t _uniq_app__name_1372 = kk_string_unbox(_box_x29);
    kk_string_dup(_uniq_app__name_1372, _ctx);
    kk_std_core_types__optional_drop(app__name, _ctx);
    _x_x3231 = _uniq_app__name_1372; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__name, _ctx);
    {
      struct kk_hml__types_Clispec* _con_x3232 = kk_hml__types__as_Clispec(_this, _ctx);
      kk_string_t _x = _con_x3232->app__name;
      kk_string_dup(_x, _ctx);
      _x_x3231 = _x; /*string*/
    }
  }
  kk_string_t _x_x3233;
  if (kk_std_core_types__is_Optional(app__version, _ctx)) {
    kk_box_t _box_x30 = app__version._cons._Optional.value;
    kk_string_t _uniq_app__version_1380 = kk_string_unbox(_box_x30);
    kk_string_dup(_uniq_app__version_1380, _ctx);
    kk_std_core_types__optional_drop(app__version, _ctx);
    _x_x3233 = _uniq_app__version_1380; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__version, _ctx);
    {
      struct kk_hml__types_Clispec* _con_x3234 = kk_hml__types__as_Clispec(_this, _ctx);
      kk_string_t _x_0 = _con_x3234->app__version;
      kk_string_dup(_x_0, _ctx);
      _x_x3233 = _x_0; /*string*/
    }
  }
  kk_string_t _x_x3235;
  if (kk_std_core_types__is_Optional(app__about, _ctx)) {
    kk_box_t _box_x31 = app__about._cons._Optional.value;
    kk_string_t _uniq_app__about_1388 = kk_string_unbox(_box_x31);
    kk_string_dup(_uniq_app__about_1388, _ctx);
    kk_std_core_types__optional_drop(app__about, _ctx);
    _x_x3235 = _uniq_app__about_1388; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(app__about, _ctx);
    {
      struct kk_hml__types_Clispec* _con_x3236 = kk_hml__types__as_Clispec(_this, _ctx);
      kk_string_t _x_1 = _con_x3236->app__about;
      kk_string_dup(_x_1, _ctx);
      _x_x3235 = _x_1; /*string*/
    }
  }
  kk_std_core_types__list _x_x3237;
  if (kk_std_core_types__is_Optional(app__flags, _ctx)) {
    kk_box_t _box_x32 = app__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_app__flags_1396 = kk_std_core_types__list_unbox(_box_x32, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__flags_1396, _ctx);
    kk_std_core_types__optional_drop(app__flags, _ctx);
    _x_x3237 = _uniq_app__flags_1396; /*list<hml_types/cliflag>*/
  }
  else {
    kk_std_core_types__optional_drop(app__flags, _ctx);
    {
      struct kk_hml__types_Clispec* _con_x3238 = kk_hml__types__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3238->app__flags;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3237 = _x_2; /*list<hml_types/cliflag>*/
    }
  }
  kk_std_core_types__list _x_x3239;
  if (kk_std_core_types__is_Optional(app__options, _ctx)) {
    kk_box_t _box_x33 = app__options._cons._Optional.value;
    kk_std_core_types__list _uniq_app__options_1404 = kk_std_core_types__list_unbox(_box_x33, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__options_1404, _ctx);
    kk_std_core_types__optional_drop(app__options, _ctx);
    _x_x3239 = _uniq_app__options_1404; /*list<hml_types/clioption>*/
  }
  else {
    kk_std_core_types__optional_drop(app__options, _ctx);
    {
      struct kk_hml__types_Clispec* _con_x3240 = kk_hml__types__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_3 = _con_x3240->app__options;
      kk_std_core_types__list_dup(_x_3, _ctx);
      _x_x3239 = _x_3; /*list<hml_types/clioption>*/
    }
  }
  kk_std_core_types__list _x_x3241;
  if (kk_std_core_types__is_Optional(app__args, _ctx)) {
    kk_box_t _box_x34 = app__args._cons._Optional.value;
    kk_std_core_types__list _uniq_app__args_1412 = kk_std_core_types__list_unbox(_box_x34, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__args_1412, _ctx);
    kk_std_core_types__optional_drop(app__args, _ctx);
    _x_x3241 = _uniq_app__args_1412; /*list<hml_types/cliarg>*/
  }
  else {
    kk_std_core_types__optional_drop(app__args, _ctx);
    {
      struct kk_hml__types_Clispec* _con_x3242 = kk_hml__types__as_Clispec(_this, _ctx);
      kk_std_core_types__list _x_4 = _con_x3242->app__args;
      kk_std_core_types__list_dup(_x_4, _ctx);
      _x_x3241 = _x_4; /*list<hml_types/cliarg>*/
    }
  }
  kk_std_core_types__list _x_x3243;
  if (kk_std_core_types__is_Optional(app__commands, _ctx)) {
    kk_box_t _box_x35 = app__commands._cons._Optional.value;
    kk_std_core_types__list _uniq_app__commands_1420 = kk_std_core_types__list_unbox(_box_x35, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_app__commands_1420, _ctx);
    kk_std_core_types__optional_drop(app__commands, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(7)), _ctx);
    _x_x3243 = _uniq_app__commands_1420; /*list<(string, hml_types/clispec)>*/
  }
  else {
    kk_std_core_types__optional_drop(app__commands, _ctx);
    {
      struct kk_hml__types_Clispec* _con_x3244 = kk_hml__types__as_Clispec(_this, _ctx);
      kk_string_t _pat_0_6 = _con_x3244->app__name;
      kk_string_t _pat_1_7 = _con_x3244->app__version;
      kk_string_t _pat_2_6 = _con_x3244->app__about;
      kk_std_core_types__list _pat_3_6 = _con_x3244->app__flags;
      kk_std_core_types__list _pat_4_6 = _con_x3244->app__options;
      kk_std_core_types__list _pat_5_6 = _con_x3244->app__args;
      kk_std_core_types__list _x_5 = _con_x3244->app__commands;
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
      _x_x3243 = _x_5; /*list<(string, hml_types/clispec)>*/
    }
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x3231, _x_x3233, _x_x3235, _x_x3237, _x_x3239, _x_x3241, _x_x3243, _ctx);
}

kk_hml__types__cliresult kk_hml__types_cliresult_fs__copy(kk_hml__types__cliresult _this, kk_std_core_types__optional cli__flags, kk_std_core_types__optional cli__options, kk_std_core_types__optional cli__positionals, kk_std_core_types__optional cli__command, kk_std_core_types__optional cli__sub, kk_context_t* _ctx) { /* (cliresult, cli_flags : ? (list<string>), cli_options : ? (list<(string, string)>), cli_positionals : ? (list<string>), cli_command : ? string, cli_sub : ? (maybe<cliresult>)) -> cliresult */ 
  kk_std_core_types__list _x_x3250;
  if (kk_std_core_types__is_Optional(cli__flags, _ctx)) {
    kk_box_t _box_x36 = cli__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__flags_1482 = kk_std_core_types__list_unbox(_box_x36, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__flags_1482, _ctx);
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    _x_x3250 = _uniq_cli__flags_1482; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__flags, _ctx);
    {
      struct kk_hml__types_Cliresult* _con_x3251 = kk_hml__types__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x = _con_x3251->cli__flags;
      kk_std_core_types__list_dup(_x, _ctx);
      _x_x3250 = _x; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3252;
  if (kk_std_core_types__is_Optional(cli__options, _ctx)) {
    kk_box_t _box_x37 = cli__options._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__options_1490 = kk_std_core_types__list_unbox(_box_x37, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__options_1490, _ctx);
    kk_std_core_types__optional_drop(cli__options, _ctx);
    _x_x3252 = _uniq_cli__options_1490; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__options, _ctx);
    {
      struct kk_hml__types_Cliresult* _con_x3253 = kk_hml__types__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3253->cli__options;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3252 = _x_0; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3254;
  if (kk_std_core_types__is_Optional(cli__positionals, _ctx)) {
    kk_box_t _box_x38 = cli__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_cli__positionals_1498 = kk_std_core_types__list_unbox(_box_x38, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_cli__positionals_1498, _ctx);
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    _x_x3254 = _uniq_cli__positionals_1498; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__positionals, _ctx);
    {
      struct kk_hml__types_Cliresult* _con_x3255 = kk_hml__types__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3255->cli__positionals;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3254 = _x_1; /*list<string>*/
    }
  }
  kk_string_t _x_x3256;
  if (kk_std_core_types__is_Optional(cli__command, _ctx)) {
    kk_box_t _box_x39 = cli__command._cons._Optional.value;
    kk_string_t _uniq_cli__command_1506 = kk_string_unbox(_box_x39);
    kk_string_dup(_uniq_cli__command_1506, _ctx);
    kk_std_core_types__optional_drop(cli__command, _ctx);
    _x_x3256 = _uniq_cli__command_1506; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(cli__command, _ctx);
    {
      struct kk_hml__types_Cliresult* _con_x3257 = kk_hml__types__as_Cliresult(_this, _ctx);
      kk_string_t _x_2 = _con_x3257->cli__command;
      kk_string_dup(_x_2, _ctx);
      _x_x3256 = _x_2; /*string*/
    }
  }
  kk_std_core_types__maybe _x_x3258;
  if (kk_std_core_types__is_Optional(cli__sub, _ctx)) {
    kk_box_t _box_x40 = cli__sub._cons._Optional.value;
    kk_std_core_types__maybe _uniq_cli__sub_1514 = kk_std_core_types__maybe_unbox(_box_x40, KK_BORROWED, _ctx);
    kk_std_core_types__maybe_dup(_uniq_cli__sub_1514, _ctx);
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3258 = _uniq_cli__sub_1514; /*maybe<hml_types/cliresult>*/
  }
  else {
    kk_std_core_types__optional_drop(cli__sub, _ctx);
    {
      struct kk_hml__types_Cliresult* _con_x3259 = kk_hml__types__as_Cliresult(_this, _ctx);
      kk_std_core_types__list _pat_0_4 = _con_x3259->cli__flags;
      kk_std_core_types__list _pat_1_5 = _con_x3259->cli__options;
      kk_std_core_types__list _pat_2_4 = _con_x3259->cli__positionals;
      kk_string_t _pat_3_4 = _con_x3259->cli__command;
      kk_std_core_types__maybe _x_3 = _con_x3259->cli__sub;
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
      _x_x3258 = _x_3; /*maybe<hml_types/cliresult>*/
    }
  }
  return kk_hml__types__new_Cliresult(kk_reuse_null, 0, _x_x3250, _x_x3252, _x_x3254, _x_x3256, _x_x3258, _ctx);
}

kk_string_t kk_hml__types_cliarg_fs_show(kk_hml__types__cliarg p, kk_context_t* _ctx) { /* (p : cliarg) -> string */ 
  kk_string_t _x_x3266;
  kk_define_string_literal(static, _s_x3267, 7, "CliArg(", _ctx)
  _x_x3266 = kk_string_dup(_s_x3267, _ctx); /*string*/
  kk_string_t _x_x3268;
  kk_string_t _x_x3269;
  kk_define_string_literal(static, _s_x3270, 10, "arg_name: ", _ctx)
  _x_x3269 = kk_string_dup(_s_x3270, _ctx); /*string*/
  kk_string_t _x_x3271;
  kk_string_t _x_x3272;
  {
    struct kk_hml__types_Cliarg* _con_x3273 = kk_hml__types__as_Cliarg(p, _ctx);
    kk_string_t _x = _con_x3273->arg__name;
    kk_string_dup(_x, _ctx);
    _x_x3272 = _x; /*string*/
  }
  kk_string_t _x_x3274;
  kk_string_t _x_x3275;
  kk_define_string_literal(static, _s_x3276, 2, ", ", _ctx)
  _x_x3275 = kk_string_dup(_s_x3276, _ctx); /*string*/
  kk_string_t _x_x3277;
  kk_string_t _x_x3278;
  kk_define_string_literal(static, _s_x3279, 10, "arg_help: ", _ctx)
  _x_x3278 = kk_string_dup(_s_x3279, _ctx); /*string*/
  kk_string_t _x_x3280;
  kk_string_t _x_x3281;
  {
    struct kk_hml__types_Cliarg* _con_x3282 = kk_hml__types__as_Cliarg(p, _ctx);
    kk_string_t _x_0 = _con_x3282->arg__help;
    kk_string_dup(_x_0, _ctx);
    _x_x3281 = _x_0; /*string*/
  }
  kk_string_t _x_x3283;
  kk_string_t _x_x3284;
  kk_define_string_literal(static, _s_x3285, 2, ", ", _ctx)
  _x_x3284 = kk_string_dup(_s_x3285, _ctx); /*string*/
  kk_string_t _x_x3286;
  kk_string_t _x_x3287;
  kk_define_string_literal(static, _s_x3288, 14, "arg_required: ", _ctx)
  _x_x3287 = kk_string_dup(_s_x3288, _ctx); /*string*/
  kk_string_t _x_x3289;
  kk_string_t _x_x3290;
  {
    struct kk_hml__types_Cliarg* _con_x3291 = kk_hml__types__as_Cliarg(p, _ctx);
    kk_string_t _pat_0_2 = _con_x3291->arg__name;
    kk_string_t _pat_1_1 = _con_x3291->arg__help;
    bool _x_1 = _con_x3291->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(p, _ctx)) {
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(p, _ctx);
    }
    else {
      kk_datatype_ptr_decref(p, _ctx);
    }
    if (_x_1) {
      kk_define_string_literal(static, _s_x3292, 4, "True", _ctx)
      _x_x3290 = kk_string_dup(_s_x3292, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(static, _s_x3293, 5, "False", _ctx)
      _x_x3290 = kk_string_dup(_s_x3293, _ctx); /*string*/
    }
  }
  kk_string_t _x_x3294;
  kk_define_string_literal(static, _s_x3295, 1, ")", _ctx)
  _x_x3294 = kk_string_dup(_s_x3295, _ctx); /*string*/
  _x_x3289 = kk_std_core_types__lp__plus__plus__rp_(_x_x3290, _x_x3294, _ctx); /*string*/
  _x_x3286 = kk_std_core_types__lp__plus__plus__rp_(_x_x3287, _x_x3289, _ctx); /*string*/
  _x_x3283 = kk_std_core_types__lp__plus__plus__rp_(_x_x3284, _x_x3286, _ctx); /*string*/
  _x_x3280 = kk_std_core_types__lp__plus__plus__rp_(_x_x3281, _x_x3283, _ctx); /*string*/
  _x_x3277 = kk_std_core_types__lp__plus__plus__rp_(_x_x3278, _x_x3280, _ctx); /*string*/
  _x_x3274 = kk_std_core_types__lp__plus__plus__rp_(_x_x3275, _x_x3277, _ctx); /*string*/
  _x_x3271 = kk_std_core_types__lp__plus__plus__rp_(_x_x3272, _x_x3274, _ctx); /*string*/
  _x_x3268 = kk_std_core_types__lp__plus__plus__rp_(_x_x3269, _x_x3271, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3266, _x_x3268, _ctx);
}


// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3301__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3301(kk_function_t _fself, kk_string_t _x1_x3300, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3301(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_cliresult_fs_show_fun3301, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_cliresult_fs_show_fun3301(kk_function_t _fself, kk_string_t _x1_x3300, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3300, _ctx);
}


// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3306__t {
  struct kk_function_s _base;
  kk_function_t _b_x42_59;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3306(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3306(kk_function_t _b_x42_59, kk_context_t* _ctx) {
  struct kk_hml__types_cliresult_fs_show_fun3306__t* _self = kk_function_alloc_as(struct kk_hml__types_cliresult_fs_show_fun3306__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_cliresult_fs_show_fun3306, kk_context());
  _self->_b_x42_59 = _b_x42_59;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_cliresult_fs_show_fun3306(kk_function_t _fself, kk_box_t _b_x43, kk_context_t* _ctx) {
  struct kk_hml__types_cliresult_fs_show_fun3306__t* _self = kk_function_as(struct kk_hml__types_cliresult_fs_show_fun3306__t*, _fself, _ctx);
  kk_function_t _b_x42_59 = _self->_b_x42_59; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x42_59, _ctx);}, {}, _ctx)
  kk_string_t _x_x3307 = kk_string_unbox(_b_x43); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x42_59, (_b_x42_59, _x_x3307, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3313__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3313(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3313(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_cliresult_fs_show_fun3313, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3314__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3314(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3314(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_cliresult_fs_show_fun3314, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_cliresult_fs_show_fun3314(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3315 = kk_string_unbox(_b_x47); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3315, _ctx);
}


// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3316__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3316(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3316(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_cliresult_fs_show_fun3316, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_cliresult_fs_show_fun3316(kk_function_t _fself, kk_box_t _b_x48, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3317 = kk_string_unbox(_b_x48); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3317, _ctx);
}
static kk_string_t kk_hml__types_cliresult_fs_show_fun3313(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_hml__types_cliresult_fs_new_show_fun3314(_ctx), kk_hml__types_cliresult_fs_new_show_fun3316(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3322__t {
  struct kk_function_s _base;
  kk_function_t _b_x50_61;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3322(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3322(kk_function_t _b_x50_61, kk_context_t* _ctx) {
  struct kk_hml__types_cliresult_fs_show_fun3322__t* _self = kk_function_alloc_as(struct kk_hml__types_cliresult_fs_show_fun3322__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_cliresult_fs_show_fun3322, kk_context());
  _self->_b_x50_61 = _b_x50_61;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_cliresult_fs_show_fun3322(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  struct kk_hml__types_cliresult_fs_show_fun3322__t* _self = kk_function_as(struct kk_hml__types_cliresult_fs_show_fun3322__t*, _fself, _ctx);
  kk_function_t _b_x50_61 = _self->_b_x50_61; /* ((string, string)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x50_61, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3323 = kk_std_core_types__tuple2_unbox(_b_x51, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x50_61, (_b_x50_61, _x_x3323, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3330__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3330(kk_function_t _fself, kk_string_t _x1_x3329, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3330(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_cliresult_fs_show_fun3330, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_cliresult_fs_show_fun3330(kk_function_t _fself, kk_string_t _x1_x3329, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3329, _ctx);
}


// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3335__t {
  struct kk_function_s _base;
  kk_function_t _b_x53_66;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3335(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3335(kk_function_t _b_x53_66, kk_context_t* _ctx) {
  struct kk_hml__types_cliresult_fs_show_fun3335__t* _self = kk_function_alloc_as(struct kk_hml__types_cliresult_fs_show_fun3335__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_cliresult_fs_show_fun3335, kk_context());
  _self->_b_x53_66 = _b_x53_66;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_cliresult_fs_show_fun3335(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_hml__types_cliresult_fs_show_fun3335__t* _self = kk_function_as(struct kk_hml__types_cliresult_fs_show_fun3335__t*, _fself, _ctx);
  kk_function_t _b_x53_66 = _self->_b_x53_66; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x53_66, _ctx);}, {}, _ctx)
  kk_string_t _x_x3336 = kk_string_unbox(_b_x54); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x53_66, (_b_x53_66, _x_x3336, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3352__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3352(kk_function_t _fself, kk_hml__types__cliresult _x1_x3351, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3352(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_cliresult_fs_show_fun3352, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_cliresult_fs_show_fun3352(kk_function_t _fself, kk_hml__types__cliresult _x1_x3351, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml__types_cliresult_fs_show(_x1_x3351, _ctx);
}


// lift anonymous function
struct kk_hml__types_cliresult_fs_show_fun3357__t {
  struct kk_function_s _base;
  kk_function_t _b_x56_68;
};
static kk_string_t kk_hml__types_cliresult_fs_show_fun3357(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx);
static kk_function_t kk_hml__types_cliresult_fs_new_show_fun3357(kk_function_t _b_x56_68, kk_context_t* _ctx) {
  struct kk_hml__types_cliresult_fs_show_fun3357__t* _self = kk_function_alloc_as(struct kk_hml__types_cliresult_fs_show_fun3357__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_cliresult_fs_show_fun3357, kk_context());
  _self->_b_x56_68 = _b_x56_68;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_cliresult_fs_show_fun3357(kk_function_t _fself, kk_box_t _b_x57, kk_context_t* _ctx) {
  struct kk_hml__types_cliresult_fs_show_fun3357__t* _self = kk_function_as(struct kk_hml__types_cliresult_fs_show_fun3357__t*, _fself, _ctx);
  kk_function_t _b_x56_68 = _self->_b_x56_68; /* (p : hml_types/cliresult) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x56_68, _ctx);}, {}, _ctx)
  kk_hml__types__cliresult _x_x3358 = kk_hml__types__cliresult_unbox(_b_x57, KK_OWNED, _ctx); /*hml_types/cliresult*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__types__cliresult, kk_context_t*), _b_x56_68, (_b_x56_68, _x_x3358, _ctx), _ctx);
}

kk_string_t kk_hml__types_cliresult_fs_show(kk_hml__types__cliresult p, kk_context_t* _ctx) { /* (p : cliresult) -> div string */ 
  kk_string_t _x_x3296;
  kk_define_string_literal(static, _s_x3297, 10, "CliResult(", _ctx)
  _x_x3296 = kk_string_dup(_s_x3297, _ctx); /*string*/
  kk_string_t _x_x3298;
  kk_std_core_types__list _b_x41_58;
  {
    struct kk_hml__types_Cliresult* _con_x3299 = kk_hml__types__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x = _con_x3299->cli__flags;
    kk_std_core_types__list_dup(_x, _ctx);
    _b_x41_58 = _x; /*list<string>*/
  }
  kk_function_t _b_x42_59 = kk_hml__types_cliresult_fs_new_show_fun3301(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3302;
  kk_define_string_literal(static, _s_x3303, 11, "cli_flags: ", _ctx)
  _x_x3302 = kk_string_dup(_s_x3303, _ctx); /*string*/
  kk_string_t _x_x3304;
  kk_string_t _x_x3305 = kk_std_core_list_show(_b_x41_58, kk_hml__types_cliresult_fs_new_show_fun3306(_b_x42_59, _ctx), _ctx); /*string*/
  kk_string_t _x_x3308;
  kk_string_t _x_x3309;
  kk_define_string_literal(static, _s_x3310, 2, ", ", _ctx)
  _x_x3309 = kk_string_dup(_s_x3310, _ctx); /*string*/
  kk_string_t _x_x3311;
  kk_std_core_types__list _b_x49_60;
  {
    struct kk_hml__types_Cliresult* _con_x3312 = kk_hml__types__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3312->cli__options;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x49_60 = _x_0; /*list<(string, string)>*/
  }
  kk_function_t _b_x50_61 = kk_hml__types_cliresult_fs_new_show_fun3313(_ctx); /*((string, string)) -> div string*/;
  kk_string_t _x_x3318;
  kk_define_string_literal(static, _s_x3319, 13, "cli_options: ", _ctx)
  _x_x3318 = kk_string_dup(_s_x3319, _ctx); /*string*/
  kk_string_t _x_x3320;
  kk_string_t _x_x3321 = kk_std_core_list_show(_b_x49_60, kk_hml__types_cliresult_fs_new_show_fun3322(_b_x50_61, _ctx), _ctx); /*string*/
  kk_string_t _x_x3324;
  kk_string_t _x_x3325;
  kk_define_string_literal(static, _s_x3326, 2, ", ", _ctx)
  _x_x3325 = kk_string_dup(_s_x3326, _ctx); /*string*/
  kk_string_t _x_x3327;
  kk_std_core_types__list _b_x52_65;
  {
    struct kk_hml__types_Cliresult* _con_x3328 = kk_hml__types__as_Cliresult(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3328->cli__positionals;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x52_65 = _x_1; /*list<string>*/
  }
  kk_function_t _b_x53_66 = kk_hml__types_cliresult_fs_new_show_fun3330(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3331;
  kk_define_string_literal(static, _s_x3332, 17, "cli_positionals: ", _ctx)
  _x_x3331 = kk_string_dup(_s_x3332, _ctx); /*string*/
  kk_string_t _x_x3333;
  kk_string_t _x_x3334 = kk_std_core_list_show(_b_x52_65, kk_hml__types_cliresult_fs_new_show_fun3335(_b_x53_66, _ctx), _ctx); /*string*/
  kk_string_t _x_x3337;
  kk_string_t _x_x3338;
  kk_define_string_literal(static, _s_x3339, 2, ", ", _ctx)
  _x_x3338 = kk_string_dup(_s_x3339, _ctx); /*string*/
  kk_string_t _x_x3340;
  kk_string_t _x_x3341;
  kk_define_string_literal(static, _s_x3342, 13, "cli_command: ", _ctx)
  _x_x3341 = kk_string_dup(_s_x3342, _ctx); /*string*/
  kk_string_t _x_x3343;
  kk_string_t _x_x3344;
  {
    struct kk_hml__types_Cliresult* _con_x3345 = kk_hml__types__as_Cliresult(p, _ctx);
    kk_string_t _x_2 = _con_x3345->cli__command;
    kk_string_dup(_x_2, _ctx);
    _x_x3344 = _x_2; /*string*/
  }
  kk_string_t _x_x3346;
  kk_string_t _x_x3347;
  kk_define_string_literal(static, _s_x3348, 2, ", ", _ctx)
  _x_x3347 = kk_string_dup(_s_x3348, _ctx); /*string*/
  kk_string_t _x_x3349;
  kk_std_core_types__maybe _b_x55_67;
  {
    struct kk_hml__types_Cliresult* _con_x3350 = kk_hml__types__as_Cliresult(p, _ctx);
    kk_std_core_types__list _pat_0_3 = _con_x3350->cli__flags;
    kk_std_core_types__list _pat_1_3 = _con_x3350->cli__options;
    kk_std_core_types__list _pat_2_3 = _con_x3350->cli__positionals;
    kk_string_t _pat_3_3 = _con_x3350->cli__command;
    kk_std_core_types__maybe _x_3 = _con_x3350->cli__sub;
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
    _b_x55_67 = _x_3; /*maybe<hml_types/cliresult>*/
  }
  kk_function_t _b_x56_68 = kk_hml__types_cliresult_fs_new_show_fun3352(_ctx); /*(p : hml_types/cliresult) -> div string*/;
  kk_string_t _x_x3353;
  kk_define_string_literal(static, _s_x3354, 9, "cli_sub: ", _ctx)
  _x_x3353 = kk_string_dup(_s_x3354, _ctx); /*string*/
  kk_string_t _x_x3355;
  kk_string_t _x_x3356 = kk_std_core_maybe_show(_b_x55_67, kk_hml__types_cliresult_fs_new_show_fun3357(_b_x56_68, _ctx), _ctx); /*string*/
  kk_string_t _x_x3359;
  kk_define_string_literal(static, _s_x3360, 1, ")", _ctx)
  _x_x3359 = kk_string_dup(_s_x3360, _ctx); /*string*/
  _x_x3355 = kk_std_core_types__lp__plus__plus__rp_(_x_x3356, _x_x3359, _ctx); /*string*/
  _x_x3349 = kk_std_core_types__lp__plus__plus__rp_(_x_x3353, _x_x3355, _ctx); /*string*/
  _x_x3346 = kk_std_core_types__lp__plus__plus__rp_(_x_x3347, _x_x3349, _ctx); /*string*/
  _x_x3343 = kk_std_core_types__lp__plus__plus__rp_(_x_x3344, _x_x3346, _ctx); /*string*/
  _x_x3340 = kk_std_core_types__lp__plus__plus__rp_(_x_x3341, _x_x3343, _ctx); /*string*/
  _x_x3337 = kk_std_core_types__lp__plus__plus__rp_(_x_x3338, _x_x3340, _ctx); /*string*/
  _x_x3333 = kk_std_core_types__lp__plus__plus__rp_(_x_x3334, _x_x3337, _ctx); /*string*/
  _x_x3327 = kk_std_core_types__lp__plus__plus__rp_(_x_x3331, _x_x3333, _ctx); /*string*/
  _x_x3324 = kk_std_core_types__lp__plus__plus__rp_(_x_x3325, _x_x3327, _ctx); /*string*/
  _x_x3320 = kk_std_core_types__lp__plus__plus__rp_(_x_x3321, _x_x3324, _ctx); /*string*/
  _x_x3311 = kk_std_core_types__lp__plus__plus__rp_(_x_x3318, _x_x3320, _ctx); /*string*/
  _x_x3308 = kk_std_core_types__lp__plus__plus__rp_(_x_x3309, _x_x3311, _ctx); /*string*/
  _x_x3304 = kk_std_core_types__lp__plus__plus__rp_(_x_x3305, _x_x3308, _ctx); /*string*/
  _x_x3298 = kk_std_core_types__lp__plus__plus__rp_(_x_x3302, _x_x3304, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3296, _x_x3298, _ctx);
}

kk_string_t kk_hml__types_clioutcome_fs_show(kk_hml__types__clioutcome v, kk_context_t* _ctx) { /* (v : clioutcome) -> div string */ 
  if (kk_hml__types__is_Help(v, _ctx)) {
    kk_define_string_literal(static, _s_x3361, 4, "Help", _ctx)
    return kk_string_dup(_s_x3361, _ctx);
  }
  if (kk_hml__types__is_Version(v, _ctx)) {
    kk_define_string_literal(static, _s_x3362, 7, "Version", _ctx)
    return kk_string_dup(_s_x3362, _ctx);
  }
  if (kk_hml__types__is_CliError(v, _ctx)) {
    struct kk_hml__types_CliError* _con_x3363 = kk_hml__types__as_CliError(v, _ctx);
    kk_string_t cli__error__msg = _con_x3363->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(cli__error__msg, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3364;
    kk_define_string_literal(static, _s_x3365, 9, "CliError(", _ctx)
    _x_x3364 = kk_string_dup(_s_x3365, _ctx); /*string*/
    kk_string_t _x_x3366;
    kk_string_t _x_x3367;
    kk_define_string_literal(static, _s_x3368, 1, ")", _ctx)
    _x_x3367 = kk_string_dup(_s_x3368, _ctx); /*string*/
    _x_x3366 = kk_std_core_types__lp__plus__plus__rp_(cli__error__msg, _x_x3367, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3364, _x_x3366, _ctx);
  }
  {
    struct kk_hml__types_Parsed* _con_x3369 = kk_hml__types__as_Parsed(v, _ctx);
    kk_hml__types__cliresult cli__result = _con_x3369->cli__result;
    struct kk_hml__types_Cliresult* _con_x3370 = kk_hml__types__as_Cliresult(cli__result, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_hml__types__cliresult_dup(cli__result, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3371;
    kk_define_string_literal(static, _s_x3372, 7, "Parsed(", _ctx)
    _x_x3371 = kk_string_dup(_s_x3372, _ctx); /*string*/
    kk_string_t _x_x3373;
    kk_string_t _x_x3374 = kk_hml__types_cliresult_fs_show(cli__result, _ctx); /*string*/
    kk_string_t _x_x3375;
    kk_define_string_literal(static, _s_x3376, 1, ")", _ctx)
    _x_x3375 = kk_string_dup(_s_x3376, _ctx); /*string*/
    _x_x3373 = kk_std_core_types__lp__plus__plus__rp_(_x_x3374, _x_x3375, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3371, _x_x3373, _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3409__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3409(kk_function_t _fself, kk_hml__types__cliflag _x1_x3408, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3409(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_clispec_fs_show_fun3409, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_clispec_fs_show_fun3409(kk_function_t _fself, kk_hml__types__cliflag _x1_x3408, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml__types_cliflag_fs_show(_x1_x3408, _ctx);
}


// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3414__t {
  struct kk_function_s _base;
  kk_function_t _b_x70_87;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3414(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3414(kk_function_t _b_x70_87, kk_context_t* _ctx) {
  struct kk_hml__types_clispec_fs_show_fun3414__t* _self = kk_function_alloc_as(struct kk_hml__types_clispec_fs_show_fun3414__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_clispec_fs_show_fun3414, kk_context());
  _self->_b_x70_87 = _b_x70_87;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_clispec_fs_show_fun3414(kk_function_t _fself, kk_box_t _b_x71, kk_context_t* _ctx) {
  struct kk_hml__types_clispec_fs_show_fun3414__t* _self = kk_function_as(struct kk_hml__types_clispec_fs_show_fun3414__t*, _fself, _ctx);
  kk_function_t _b_x70_87 = _self->_b_x70_87; /* (p : hml_types/cliflag) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x70_87, _ctx);}, {}, _ctx)
  kk_hml__types__cliflag _x_x3415 = kk_hml__types__cliflag_unbox(_b_x71, KK_OWNED, _ctx); /*hml_types/cliflag*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__types__cliflag, kk_context_t*), _b_x70_87, (_b_x70_87, _x_x3415, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3422__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3422(kk_function_t _fself, kk_hml__types__clioption _x1_x3421, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3422(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_clispec_fs_show_fun3422, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_clispec_fs_show_fun3422(kk_function_t _fself, kk_hml__types__clioption _x1_x3421, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml__types_clioption_fs_show(_x1_x3421, _ctx);
}


// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3427__t {
  struct kk_function_s _base;
  kk_function_t _b_x73_89;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3427(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3427(kk_function_t _b_x73_89, kk_context_t* _ctx) {
  struct kk_hml__types_clispec_fs_show_fun3427__t* _self = kk_function_alloc_as(struct kk_hml__types_clispec_fs_show_fun3427__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_clispec_fs_show_fun3427, kk_context());
  _self->_b_x73_89 = _b_x73_89;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_clispec_fs_show_fun3427(kk_function_t _fself, kk_box_t _b_x74, kk_context_t* _ctx) {
  struct kk_hml__types_clispec_fs_show_fun3427__t* _self = kk_function_as(struct kk_hml__types_clispec_fs_show_fun3427__t*, _fself, _ctx);
  kk_function_t _b_x73_89 = _self->_b_x73_89; /* (p : hml_types/clioption) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x73_89, _ctx);}, {}, _ctx)
  kk_hml__types__clioption _x_x3428 = kk_hml__types__clioption_unbox(_b_x74, KK_OWNED, _ctx); /*hml_types/clioption*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__types__clioption, kk_context_t*), _b_x73_89, (_b_x73_89, _x_x3428, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3435__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3435(kk_function_t _fself, kk_hml__types__cliarg _x1_x3434, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3435(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_clispec_fs_show_fun3435, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_clispec_fs_show_fun3435(kk_function_t _fself, kk_hml__types__cliarg _x1_x3434, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml__types_cliarg_fs_show(_x1_x3434, _ctx);
}


// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3440__t {
  struct kk_function_s _base;
  kk_function_t _b_x76_91;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3440(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3440(kk_function_t _b_x76_91, kk_context_t* _ctx) {
  struct kk_hml__types_clispec_fs_show_fun3440__t* _self = kk_function_alloc_as(struct kk_hml__types_clispec_fs_show_fun3440__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_clispec_fs_show_fun3440, kk_context());
  _self->_b_x76_91 = _b_x76_91;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_clispec_fs_show_fun3440(kk_function_t _fself, kk_box_t _b_x77, kk_context_t* _ctx) {
  struct kk_hml__types_clispec_fs_show_fun3440__t* _self = kk_function_as(struct kk_hml__types_clispec_fs_show_fun3440__t*, _fself, _ctx);
  kk_function_t _b_x76_91 = _self->_b_x76_91; /* (p : hml_types/cliarg) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x76_91, _ctx);}, {}, _ctx)
  kk_hml__types__cliarg _x_x3441 = kk_hml__types__cliarg_unbox(_b_x77, KK_OWNED, _ctx); /*hml_types/cliarg*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__types__cliarg, kk_context_t*), _b_x76_91, (_b_x76_91, _x_x3441, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3447__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3447(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3447(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_clispec_fs_show_fun3447, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3448__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3448(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3448(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_clispec_fs_show_fun3448, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_clispec_fs_show_fun3448(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3449 = kk_string_unbox(_b_x81); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3449, _ctx);
}


// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3450__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3450(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3450(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_clispec_fs_show_fun3450, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_clispec_fs_show_fun3450(kk_function_t _fself, kk_box_t _b_x82, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_hml__types__clispec _x_x3451 = kk_hml__types__clispec_unbox(_b_x82, KK_OWNED, _ctx); /*hml_types/clispec*/
  return kk_hml__types_clispec_fs_show(_x_x3451, _ctx);
}
static kk_string_t kk_hml__types_clispec_fs_show_fun3447(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_hml__types_clispec_fs_new_show_fun3448(_ctx), kk_hml__types_clispec_fs_new_show_fun3450(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_clispec_fs_show_fun3456__t {
  struct kk_function_s _base;
  kk_function_t _b_x84_93;
};
static kk_string_t kk_hml__types_clispec_fs_show_fun3456(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx);
static kk_function_t kk_hml__types_clispec_fs_new_show_fun3456(kk_function_t _b_x84_93, kk_context_t* _ctx) {
  struct kk_hml__types_clispec_fs_show_fun3456__t* _self = kk_function_alloc_as(struct kk_hml__types_clispec_fs_show_fun3456__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_clispec_fs_show_fun3456, kk_context());
  _self->_b_x84_93 = _b_x84_93;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_clispec_fs_show_fun3456(kk_function_t _fself, kk_box_t _b_x85, kk_context_t* _ctx) {
  struct kk_hml__types_clispec_fs_show_fun3456__t* _self = kk_function_as(struct kk_hml__types_clispec_fs_show_fun3456__t*, _fself, _ctx);
  kk_function_t _b_x84_93 = _self->_b_x84_93; /* ((string, hml_types/clispec)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x84_93, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3457 = kk_std_core_types__tuple2_unbox(_b_x85, KK_OWNED, _ctx); /*(string, hml_types/clispec)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x84_93, (_b_x84_93, _x_x3457, _ctx), _ctx);
}

kk_string_t kk_hml__types_clispec_fs_show(kk_hml__types__clispec p, kk_context_t* _ctx) { /* (p : clispec) -> div string */ 
  kk_string_t _x_x3377;
  kk_define_string_literal(static, _s_x3378, 8, "CliSpec(", _ctx)
  _x_x3377 = kk_string_dup(_s_x3378, _ctx); /*string*/
  kk_string_t _x_x3379;
  kk_string_t _x_x3380;
  kk_define_string_literal(static, _s_x3381, 10, "app_name: ", _ctx)
  _x_x3380 = kk_string_dup(_s_x3381, _ctx); /*string*/
  kk_string_t _x_x3382;
  kk_string_t _x_x3383;
  {
    struct kk_hml__types_Clispec* _con_x3384 = kk_hml__types__as_Clispec(p, _ctx);
    kk_string_t _x = _con_x3384->app__name;
    kk_string_dup(_x, _ctx);
    _x_x3383 = _x; /*string*/
  }
  kk_string_t _x_x3385;
  kk_string_t _x_x3386;
  kk_define_string_literal(static, _s_x3387, 2, ", ", _ctx)
  _x_x3386 = kk_string_dup(_s_x3387, _ctx); /*string*/
  kk_string_t _x_x3388;
  kk_string_t _x_x3389;
  kk_define_string_literal(static, _s_x3390, 13, "app_version: ", _ctx)
  _x_x3389 = kk_string_dup(_s_x3390, _ctx); /*string*/
  kk_string_t _x_x3391;
  kk_string_t _x_x3392;
  {
    struct kk_hml__types_Clispec* _con_x3393 = kk_hml__types__as_Clispec(p, _ctx);
    kk_string_t _x_0 = _con_x3393->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x3392 = _x_0; /*string*/
  }
  kk_string_t _x_x3394;
  kk_string_t _x_x3395;
  kk_define_string_literal(static, _s_x3396, 2, ", ", _ctx)
  _x_x3395 = kk_string_dup(_s_x3396, _ctx); /*string*/
  kk_string_t _x_x3397;
  kk_string_t _x_x3398;
  kk_define_string_literal(static, _s_x3399, 11, "app_about: ", _ctx)
  _x_x3398 = kk_string_dup(_s_x3399, _ctx); /*string*/
  kk_string_t _x_x3400;
  kk_string_t _x_x3401;
  {
    struct kk_hml__types_Clispec* _con_x3402 = kk_hml__types__as_Clispec(p, _ctx);
    kk_string_t _x_1 = _con_x3402->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x3401 = _x_1; /*string*/
  }
  kk_string_t _x_x3403;
  kk_string_t _x_x3404;
  kk_define_string_literal(static, _s_x3405, 2, ", ", _ctx)
  _x_x3404 = kk_string_dup(_s_x3405, _ctx); /*string*/
  kk_string_t _x_x3406;
  kk_std_core_types__list _b_x69_86;
  {
    struct kk_hml__types_Clispec* _con_x3407 = kk_hml__types__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3407->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x69_86 = _x_2; /*list<hml_types/cliflag>*/
  }
  kk_function_t _b_x70_87 = kk_hml__types_clispec_fs_new_show_fun3409(_ctx); /*(p : hml_types/cliflag) -> string*/;
  kk_string_t _x_x3410;
  kk_define_string_literal(static, _s_x3411, 11, "app_flags: ", _ctx)
  _x_x3410 = kk_string_dup(_s_x3411, _ctx); /*string*/
  kk_string_t _x_x3412;
  kk_string_t _x_x3413 = kk_std_core_list_show(_b_x69_86, kk_hml__types_clispec_fs_new_show_fun3414(_b_x70_87, _ctx), _ctx); /*string*/
  kk_string_t _x_x3416;
  kk_string_t _x_x3417;
  kk_define_string_literal(static, _s_x3418, 2, ", ", _ctx)
  _x_x3417 = kk_string_dup(_s_x3418, _ctx); /*string*/
  kk_string_t _x_x3419;
  kk_std_core_types__list _b_x72_88;
  {
    struct kk_hml__types_Clispec* _con_x3420 = kk_hml__types__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_3 = _con_x3420->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _b_x72_88 = _x_3; /*list<hml_types/clioption>*/
  }
  kk_function_t _b_x73_89 = kk_hml__types_clispec_fs_new_show_fun3422(_ctx); /*(p : hml_types/clioption) -> string*/;
  kk_string_t _x_x3423;
  kk_define_string_literal(static, _s_x3424, 13, "app_options: ", _ctx)
  _x_x3423 = kk_string_dup(_s_x3424, _ctx); /*string*/
  kk_string_t _x_x3425;
  kk_string_t _x_x3426 = kk_std_core_list_show(_b_x72_88, kk_hml__types_clispec_fs_new_show_fun3427(_b_x73_89, _ctx), _ctx); /*string*/
  kk_string_t _x_x3429;
  kk_string_t _x_x3430;
  kk_define_string_literal(static, _s_x3431, 2, ", ", _ctx)
  _x_x3430 = kk_string_dup(_s_x3431, _ctx); /*string*/
  kk_string_t _x_x3432;
  kk_std_core_types__list _b_x75_90;
  {
    struct kk_hml__types_Clispec* _con_x3433 = kk_hml__types__as_Clispec(p, _ctx);
    kk_std_core_types__list _x_4 = _con_x3433->app__args;
    kk_std_core_types__list_dup(_x_4, _ctx);
    _b_x75_90 = _x_4; /*list<hml_types/cliarg>*/
  }
  kk_function_t _b_x76_91 = kk_hml__types_clispec_fs_new_show_fun3435(_ctx); /*(p : hml_types/cliarg) -> string*/;
  kk_string_t _x_x3436;
  kk_define_string_literal(static, _s_x3437, 10, "app_args: ", _ctx)
  _x_x3436 = kk_string_dup(_s_x3437, _ctx); /*string*/
  kk_string_t _x_x3438;
  kk_string_t _x_x3439 = kk_std_core_list_show(_b_x75_90, kk_hml__types_clispec_fs_new_show_fun3440(_b_x76_91, _ctx), _ctx); /*string*/
  kk_string_t _x_x3442;
  kk_string_t _x_x3443;
  kk_define_string_literal(static, _s_x3444, 2, ", ", _ctx)
  _x_x3443 = kk_string_dup(_s_x3444, _ctx); /*string*/
  kk_string_t _x_x3445;
  kk_std_core_types__list _b_x83_92;
  {
    struct kk_hml__types_Clispec* _con_x3446 = kk_hml__types__as_Clispec(p, _ctx);
    kk_string_t _pat_0_5 = _con_x3446->app__name;
    kk_string_t _pat_1_5 = _con_x3446->app__version;
    kk_string_t _pat_2_5 = _con_x3446->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x3446->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x3446->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x3446->app__args;
    kk_std_core_types__list _x_5 = _con_x3446->app__commands;
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
    _b_x83_92 = _x_5; /*list<(string, hml_types/clispec)>*/
  }
  kk_function_t _b_x84_93 = kk_hml__types_clispec_fs_new_show_fun3447(_ctx); /*((string, hml_types/clispec)) -> div string*/;
  kk_string_t _x_x3452;
  kk_define_string_literal(static, _s_x3453, 14, "app_commands: ", _ctx)
  _x_x3452 = kk_string_dup(_s_x3453, _ctx); /*string*/
  kk_string_t _x_x3454;
  kk_string_t _x_x3455 = kk_std_core_list_show(_b_x83_92, kk_hml__types_clispec_fs_new_show_fun3456(_b_x84_93, _ctx), _ctx); /*string*/
  kk_string_t _x_x3458;
  kk_define_string_literal(static, _s_x3459, 1, ")", _ctx)
  _x_x3458 = kk_string_dup(_s_x3459, _ctx); /*string*/
  _x_x3454 = kk_std_core_types__lp__plus__plus__rp_(_x_x3455, _x_x3458, _ctx); /*string*/
  _x_x3445 = kk_std_core_types__lp__plus__plus__rp_(_x_x3452, _x_x3454, _ctx); /*string*/
  _x_x3442 = kk_std_core_types__lp__plus__plus__rp_(_x_x3443, _x_x3445, _ctx); /*string*/
  _x_x3438 = kk_std_core_types__lp__plus__plus__rp_(_x_x3439, _x_x3442, _ctx); /*string*/
  _x_x3432 = kk_std_core_types__lp__plus__plus__rp_(_x_x3436, _x_x3438, _ctx); /*string*/
  _x_x3429 = kk_std_core_types__lp__plus__plus__rp_(_x_x3430, _x_x3432, _ctx); /*string*/
  _x_x3425 = kk_std_core_types__lp__plus__plus__rp_(_x_x3426, _x_x3429, _ctx); /*string*/
  _x_x3419 = kk_std_core_types__lp__plus__plus__rp_(_x_x3423, _x_x3425, _ctx); /*string*/
  _x_x3416 = kk_std_core_types__lp__plus__plus__rp_(_x_x3417, _x_x3419, _ctx); /*string*/
  _x_x3412 = kk_std_core_types__lp__plus__plus__rp_(_x_x3413, _x_x3416, _ctx); /*string*/
  _x_x3406 = kk_std_core_types__lp__plus__plus__rp_(_x_x3410, _x_x3412, _ctx); /*string*/
  _x_x3403 = kk_std_core_types__lp__plus__plus__rp_(_x_x3404, _x_x3406, _ctx); /*string*/
  _x_x3400 = kk_std_core_types__lp__plus__plus__rp_(_x_x3401, _x_x3403, _ctx); /*string*/
  _x_x3397 = kk_std_core_types__lp__plus__plus__rp_(_x_x3398, _x_x3400, _ctx); /*string*/
  _x_x3394 = kk_std_core_types__lp__plus__plus__rp_(_x_x3395, _x_x3397, _ctx); /*string*/
  _x_x3391 = kk_std_core_types__lp__plus__plus__rp_(_x_x3392, _x_x3394, _ctx); /*string*/
  _x_x3388 = kk_std_core_types__lp__plus__plus__rp_(_x_x3389, _x_x3391, _ctx); /*string*/
  _x_x3385 = kk_std_core_types__lp__plus__plus__rp_(_x_x3386, _x_x3388, _ctx); /*string*/
  _x_x3382 = kk_std_core_types__lp__plus__plus__rp_(_x_x3383, _x_x3385, _ctx); /*string*/
  _x_x3379 = kk_std_core_types__lp__plus__plus__rp_(_x_x3380, _x_x3382, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3377, _x_x3379, _ctx);
}


// lift anonymous function
struct kk_hml__types_hml_fs_show_fun3509__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_hml_fs_show_fun3509(kk_function_t _fself, kk_hml__types__hml _x1_x3508, kk_context_t* _ctx);
static kk_function_t kk_hml__types_hml_fs_new_show_fun3509(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hml_fs_show_fun3509, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_hml_fs_show_fun3509(kk_function_t _fself, kk_hml__types__hml _x1_x3508, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml__types_hml_fs_show(_x1_x3508, _ctx);
}


// lift anonymous function
struct kk_hml__types_hml_fs_show_fun3514__t {
  struct kk_function_s _base;
  kk_function_t _b_x98_112;
};
static kk_string_t kk_hml__types_hml_fs_show_fun3514(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx);
static kk_function_t kk_hml__types_hml_fs_new_show_fun3514(kk_function_t _b_x98_112, kk_context_t* _ctx) {
  struct kk_hml__types_hml_fs_show_fun3514__t* _self = kk_function_alloc_as(struct kk_hml__types_hml_fs_show_fun3514__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hml_fs_show_fun3514, kk_context());
  _self->_b_x98_112 = _b_x98_112;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_hml_fs_show_fun3514(kk_function_t _fself, kk_box_t _b_x99, kk_context_t* _ctx) {
  struct kk_hml__types_hml_fs_show_fun3514__t* _self = kk_function_as(struct kk_hml__types_hml_fs_show_fun3514__t*, _fself, _ctx);
  kk_function_t _b_x98_112 = _self->_b_x98_112; /* (v : hml_types/hml) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x98_112, _ctx);}, {}, _ctx)
  kk_hml__types__hml _x_x3515 = kk_hml__types__hml_unbox(_b_x99, KK_OWNED, _ctx); /*hml_types/hml*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__types__hml, kk_context_t*), _b_x98_112, (_b_x98_112, _x_x3515, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hml_fs_show_fun3523__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_hml_fs_show_fun3523(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_hml__types_hml_fs_new_show_fun3523(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hml_fs_show_fun3523, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_hml_fs_show_fun3524__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_hml_fs_show_fun3524(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx);
static kk_function_t kk_hml__types_hml_fs_new_show_fun3524(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hml_fs_show_fun3524, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_hml_fs_show_fun3524(kk_function_t _fself, kk_box_t _b_x103, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3525 = kk_string_unbox(_b_x103); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3525, _ctx);
}


// lift anonymous function
struct kk_hml__types_hml_fs_show_fun3526__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_hml_fs_show_fun3526(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx);
static kk_function_t kk_hml__types_hml_fs_new_show_fun3526(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hml_fs_show_fun3526, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_hml_fs_show_fun3526(kk_function_t _fself, kk_box_t _b_x104, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_hml__types__hml _x_x3527 = kk_hml__types__hml_unbox(_b_x104, KK_OWNED, _ctx); /*hml_types/hml*/
  return kk_hml__types_hml_fs_show(_x_x3527, _ctx);
}
static kk_string_t kk_hml__types_hml_fs_show_fun3523(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_hml__types_hml_fs_new_show_fun3524(_ctx), kk_hml__types_hml_fs_new_show_fun3526(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hml_fs_show_fun3532__t {
  struct kk_function_s _base;
  kk_function_t _b_x106_114;
};
static kk_string_t kk_hml__types_hml_fs_show_fun3532(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx);
static kk_function_t kk_hml__types_hml_fs_new_show_fun3532(kk_function_t _b_x106_114, kk_context_t* _ctx) {
  struct kk_hml__types_hml_fs_show_fun3532__t* _self = kk_function_alloc_as(struct kk_hml__types_hml_fs_show_fun3532__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hml_fs_show_fun3532, kk_context());
  _self->_b_x106_114 = _b_x106_114;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_hml_fs_show_fun3532(kk_function_t _fself, kk_box_t _b_x107, kk_context_t* _ctx) {
  struct kk_hml__types_hml_fs_show_fun3532__t* _self = kk_function_as(struct kk_hml__types_hml_fs_show_fun3532__t*, _fself, _ctx);
  kk_function_t _b_x106_114 = _self->_b_x106_114; /* ((string, hml_types/hml)) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x106_114, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3533 = kk_std_core_types__tuple2_unbox(_b_x107, KK_OWNED, _ctx); /*(string, hml_types/hml)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x106_114, (_b_x106_114, _x_x3533, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hml_fs_show_fun3536__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_hml_fs_show_fun3536(kk_function_t _fself, kk_hml__types__hmlnode _x1_x3535, kk_context_t* _ctx);
static kk_function_t kk_hml__types_hml_fs_new_show_fun3536(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hml_fs_show_fun3536, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_hml_fs_show_fun3536(kk_function_t _fself, kk_hml__types__hmlnode _x1_x3535, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_hml__types_hmlnode_fs_show(_x1_x3535, _ctx);
}


// lift anonymous function
struct kk_hml__types_hml_fs_show_fun3541__t {
  struct kk_function_s _base;
  kk_function_t _b_x109_119;
};
static kk_string_t kk_hml__types_hml_fs_show_fun3541(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_hml__types_hml_fs_new_show_fun3541(kk_function_t _b_x109_119, kk_context_t* _ctx) {
  struct kk_hml__types_hml_fs_show_fun3541__t* _self = kk_function_alloc_as(struct kk_hml__types_hml_fs_show_fun3541__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hml_fs_show_fun3541, kk_context());
  _self->_b_x109_119 = _b_x109_119;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_hml_fs_show_fun3541(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_hml__types_hml_fs_show_fun3541__t* _self = kk_function_as(struct kk_hml__types_hml_fs_show_fun3541__t*, _fself, _ctx);
  kk_function_t _b_x109_119 = _self->_b_x109_119; /* (v : hml_types/hmlnode) -> div string */
  kk_drop_match(_self, {kk_function_dup(_b_x109_119, _ctx);}, {}, _ctx)
  kk_hml__types__hmlnode _x_x3542 = kk_hml__types__hmlnode_unbox(_b_x110, KK_OWNED, _ctx); /*hml_types/hmlnode*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_hml__types__hmlnode, kk_context_t*), _b_x109_119, (_b_x109_119, _x_x3542, _ctx), _ctx);
}

kk_string_t kk_hml__types_hml_fs_show(kk_hml__types__hml v, kk_context_t* _ctx) { /* (v : hml) -> div string */ 
  if (kk_hml__types__is_HStr(v, _ctx)) {
    struct kk_hml__types_HStr* _con_x3460 = kk_hml__types__as_HStr(v, _ctx);
    kk_string_t value = _con_x3460->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(value, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3461;
    kk_define_string_literal(static, _s_x3462, 5, "HStr(", _ctx)
    _x_x3461 = kk_string_dup(_s_x3462, _ctx); /*string*/
    kk_string_t _x_x3463;
    kk_string_t _x_x3464;
    kk_define_string_literal(static, _s_x3465, 1, ")", _ctx)
    _x_x3464 = kk_string_dup(_s_x3465, _ctx); /*string*/
    _x_x3463 = kk_std_core_types__lp__plus__plus__rp_(value, _x_x3464, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3461, _x_x3463, _ctx);
  }
  if (kk_hml__types__is_HInt(v, _ctx)) {
    struct kk_hml__types_HInt* _con_x3466 = kk_hml__types__as_HInt(v, _ctx);
    kk_integer_t value_0 = _con_x3466->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_integer_dup(value_0, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3467;
    kk_define_string_literal(static, _s_x3468, 5, "HInt(", _ctx)
    _x_x3467 = kk_string_dup(_s_x3468, _ctx); /*string*/
    kk_string_t _x_x3469;
    kk_string_t _x_x3470 = kk_std_core_int_show(value_0, _ctx); /*string*/
    kk_string_t _x_x3471;
    kk_define_string_literal(static, _s_x3472, 1, ")", _ctx)
    _x_x3471 = kk_string_dup(_s_x3472, _ctx); /*string*/
    _x_x3469 = kk_std_core_types__lp__plus__plus__rp_(_x_x3470, _x_x3471, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3467, _x_x3469, _ctx);
  }
  if (kk_hml__types__is_HFloat(v, _ctx)) {
    struct kk_hml__types_HFloat* _con_x3473 = kk_hml__types__as_HFloat(v, _ctx);
    double value_1 = _con_x3473->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3474;
    kk_define_string_literal(static, _s_x3475, 7, "HFloat(", _ctx)
    _x_x3474 = kk_string_dup(_s_x3475, _ctx); /*string*/
    kk_string_t _x_x3476;
    kk_string_t _x_x3477 = kk_std_num_float64_show(value_1, kk_std_core_types__new_None(_ctx), _ctx); /*string*/
    kk_string_t _x_x3478;
    kk_define_string_literal(static, _s_x3479, 1, ")", _ctx)
    _x_x3478 = kk_string_dup(_s_x3479, _ctx); /*string*/
    _x_x3476 = kk_std_core_types__lp__plus__plus__rp_(_x_x3477, _x_x3478, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3474, _x_x3476, _ctx);
  }
  if (kk_hml__types__is_HBool(v, _ctx)) {
    struct kk_hml__types_HBool* _con_x3480 = kk_hml__types__as_HBool(v, _ctx);
    bool value_2 = _con_x3480->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3481;
    kk_define_string_literal(static, _s_x3482, 6, "HBool(", _ctx)
    _x_x3481 = kk_string_dup(_s_x3482, _ctx); /*string*/
    kk_string_t _x_x3483;
    kk_string_t _x_x3484;
    if (value_2) {
      kk_define_string_literal(static, _s_x3485, 4, "True", _ctx)
      _x_x3484 = kk_string_dup(_s_x3485, _ctx); /*string*/
    }
    else {
      kk_define_string_literal(static, _s_x3486, 5, "False", _ctx)
      _x_x3484 = kk_string_dup(_s_x3486, _ctx); /*string*/
    }
    kk_string_t _x_x3487;
    kk_define_string_literal(static, _s_x3488, 1, ")", _ctx)
    _x_x3487 = kk_string_dup(_s_x3488, _ctx); /*string*/
    _x_x3483 = kk_std_core_types__lp__plus__plus__rp_(_x_x3484, _x_x3487, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3481, _x_x3483, _ctx);
  }
  if (kk_hml__types__is_HDuration(v, _ctx)) {
    struct kk_hml__types_HDuration* _con_x3489 = kk_hml__types__as_HDuration(v, _ctx);
    kk_integer_t amount = _con_x3489->amount;
    kk_string_t unit = _con_x3489->unit;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_integer_dup(amount, _ctx);
      kk_string_dup(unit, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3490;
    kk_define_string_literal(static, _s_x3491, 10, "HDuration(", _ctx)
    _x_x3490 = kk_string_dup(_s_x3491, _ctx); /*string*/
    kk_string_t _x_x3492;
    kk_string_t _x_x3493 = kk_std_core_int_show(amount, _ctx); /*string*/
    kk_string_t _x_x3494;
    kk_string_t _x_x3495;
    kk_define_string_literal(static, _s_x3496, 2, ", ", _ctx)
    _x_x3495 = kk_string_dup(_s_x3496, _ctx); /*string*/
    kk_string_t _x_x3497;
    kk_string_t _x_x3498;
    kk_define_string_literal(static, _s_x3499, 1, ")", _ctx)
    _x_x3498 = kk_string_dup(_s_x3499, _ctx); /*string*/
    _x_x3497 = kk_std_core_types__lp__plus__plus__rp_(unit, _x_x3498, _ctx); /*string*/
    _x_x3494 = kk_std_core_types__lp__plus__plus__rp_(_x_x3495, _x_x3497, _ctx); /*string*/
    _x_x3492 = kk_std_core_types__lp__plus__plus__rp_(_x_x3493, _x_x3494, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3490, _x_x3492, _ctx);
  }
  if (kk_hml__types__is_HDatetime(v, _ctx)) {
    struct kk_hml__types_HDatetime* _con_x3500 = kk_hml__types__as_HDatetime(v, _ctx);
    kk_string_t value_3 = _con_x3500->value;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_string_dup(value_3, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3501;
    kk_define_string_literal(static, _s_x3502, 10, "HDatetime(", _ctx)
    _x_x3501 = kk_string_dup(_s_x3502, _ctx); /*string*/
    kk_string_t _x_x3503;
    kk_string_t _x_x3504;
    kk_define_string_literal(static, _s_x3505, 1, ")", _ctx)
    _x_x3504 = kk_string_dup(_s_x3505, _ctx); /*string*/
    _x_x3503 = kk_std_core_types__lp__plus__plus__rp_(value_3, _x_x3504, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3501, _x_x3503, _ctx);
  }
  if (kk_hml__types__is_HNull(v, _ctx)) {
    kk_define_string_literal(static, _s_x3506, 5, "HNull", _ctx)
    return kk_string_dup(_s_x3506, _ctx);
  }
  if (kk_hml__types__is_HArray(v, _ctx)) {
    struct kk_hml__types_HArray* _con_x3507 = kk_hml__types__as_HArray(v, _ctx);
    kk_std_core_types__list items = _con_x3507->items;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_std_core_types__list_dup(items, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_std_core_types__list _b_x97_111 = items; /*list<hml_types/hml>*/;
    kk_function_t _b_x98_112 = kk_hml__types_hml_fs_new_show_fun3509(_ctx); /*(v : hml_types/hml) -> div string*/;
    kk_string_t _x_x3510;
    kk_define_string_literal(static, _s_x3511, 7, "HArray(", _ctx)
    _x_x3510 = kk_string_dup(_s_x3511, _ctx); /*string*/
    kk_string_t _x_x3512;
    kk_string_t _x_x3513 = kk_std_core_list_show(_b_x97_111, kk_hml__types_hml_fs_new_show_fun3514(_b_x98_112, _ctx), _ctx); /*string*/
    kk_string_t _x_x3516;
    kk_define_string_literal(static, _s_x3517, 1, ")", _ctx)
    _x_x3516 = kk_string_dup(_s_x3517, _ctx); /*string*/
    _x_x3512 = kk_std_core_types__lp__plus__plus__rp_(_x_x3513, _x_x3516, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3510, _x_x3512, _ctx);
  }
  {
    struct kk_hml__types_HElement* _con_x3518 = kk_hml__types__as_HElement(v, _ctx);
    kk_string_t name = _con_x3518->name;
    kk_std_core_types__list attrs = _con_x3518->attrs;
    kk_std_core_types__list body = _con_x3518->body;
    if kk_likely(kk_datatype_ptr_is_unique(v, _ctx)) {
      kk_datatype_ptr_free(v, _ctx);
    }
    else {
      kk_std_core_types__list_dup(attrs, _ctx);
      kk_std_core_types__list_dup(body, _ctx);
      kk_string_dup(name, _ctx);
      kk_datatype_ptr_decref(v, _ctx);
    }
    kk_string_t _x_x3519;
    kk_define_string_literal(static, _s_x3520, 9, "HElement(", _ctx)
    _x_x3519 = kk_string_dup(_s_x3520, _ctx); /*string*/
    kk_string_t _x_x3521;
    kk_string_t _x_x3522;
    kk_std_core_types__list _b_x105_113 = attrs; /*list<(string, hml_types/hml)>*/;
    kk_function_t _b_x106_114 = kk_hml__types_hml_fs_new_show_fun3523(_ctx); /*((string, hml_types/hml)) -> div string*/;
    kk_string_t _x_x3528;
    kk_define_string_literal(static, _s_x3529, 2, ", ", _ctx)
    _x_x3528 = kk_string_dup(_s_x3529, _ctx); /*string*/
    kk_string_t _x_x3530;
    kk_string_t _x_x3531 = kk_std_core_list_show(_b_x105_113, kk_hml__types_hml_fs_new_show_fun3532(_b_x106_114, _ctx), _ctx); /*string*/
    kk_string_t _x_x3534;
    kk_std_core_types__list _b_x108_118 = body; /*list<hml_types/hmlnode>*/;
    kk_function_t _b_x109_119 = kk_hml__types_hml_fs_new_show_fun3536(_ctx); /*(v : hml_types/hmlnode) -> div string*/;
    kk_string_t _x_x3537;
    kk_define_string_literal(static, _s_x3538, 2, ", ", _ctx)
    _x_x3537 = kk_string_dup(_s_x3538, _ctx); /*string*/
    kk_string_t _x_x3539;
    kk_string_t _x_x3540 = kk_std_core_list_show(_b_x108_118, kk_hml__types_hml_fs_new_show_fun3541(_b_x109_119, _ctx), _ctx); /*string*/
    kk_string_t _x_x3543;
    kk_define_string_literal(static, _s_x3544, 1, ")", _ctx)
    _x_x3543 = kk_string_dup(_s_x3544, _ctx); /*string*/
    _x_x3539 = kk_std_core_types__lp__plus__plus__rp_(_x_x3540, _x_x3543, _ctx); /*string*/
    _x_x3534 = kk_std_core_types__lp__plus__plus__rp_(_x_x3537, _x_x3539, _ctx); /*string*/
    _x_x3530 = kk_std_core_types__lp__plus__plus__rp_(_x_x3531, _x_x3534, _ctx); /*string*/
    _x_x3522 = kk_std_core_types__lp__plus__plus__rp_(_x_x3528, _x_x3530, _ctx); /*string*/
    _x_x3521 = kk_std_core_types__lp__plus__plus__rp_(name, _x_x3522, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3519, _x_x3521, _ctx);
  }
}

kk_string_t kk_hml__types_hmlnode_fs_show(kk_hml__types__hmlnode v_0, kk_context_t* _ctx) { /* (v : hmlnode) -> div string */ 
  if (kk_hml__types__is_NProp(v_0, _ctx)) {
    struct kk_hml__types_NProp* _con_x3545 = kk_hml__types__as_NProp(v_0, _ctx);
    kk_string_t key = _con_x3545->key;
    kk_hml__types__hml value_4 = _con_x3545->value;
    if kk_likely(kk_datatype_ptr_is_unique(v_0, _ctx)) {
      kk_datatype_ptr_free(v_0, _ctx);
    }
    else {
      kk_string_dup(key, _ctx);
      kk_hml__types__hml_dup(value_4, _ctx);
      kk_datatype_ptr_decref(v_0, _ctx);
    }
    kk_string_t _x_x3546;
    kk_define_string_literal(static, _s_x3547, 6, "NProp(", _ctx)
    _x_x3546 = kk_string_dup(_s_x3547, _ctx); /*string*/
    kk_string_t _x_x3548;
    kk_string_t _x_x3549;
    kk_string_t _x_x3550;
    kk_define_string_literal(static, _s_x3551, 2, ", ", _ctx)
    _x_x3550 = kk_string_dup(_s_x3551, _ctx); /*string*/
    kk_string_t _x_x3552;
    kk_string_t _x_x3553 = kk_hml__types_hml_fs_show(value_4, _ctx); /*string*/
    kk_string_t _x_x3554;
    kk_define_string_literal(static, _s_x3555, 1, ")", _ctx)
    _x_x3554 = kk_string_dup(_s_x3555, _ctx); /*string*/
    _x_x3552 = kk_std_core_types__lp__plus__plus__rp_(_x_x3553, _x_x3554, _ctx); /*string*/
    _x_x3549 = kk_std_core_types__lp__plus__plus__rp_(_x_x3550, _x_x3552, _ctx); /*string*/
    _x_x3548 = kk_std_core_types__lp__plus__plus__rp_(key, _x_x3549, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3546, _x_x3548, _ctx);
  }
  if (kk_hml__types__is_NElem(v_0, _ctx)) {
    struct kk_hml__types_NElem* _con_x3556 = kk_hml__types__as_NElem(v_0, _ctx);
    kk_hml__types__hml element = _con_x3556->element;
    if kk_likely(kk_datatype_ptr_is_unique(v_0, _ctx)) {
      kk_datatype_ptr_free(v_0, _ctx);
    }
    else {
      kk_hml__types__hml_dup(element, _ctx);
      kk_datatype_ptr_decref(v_0, _ctx);
    }
    kk_string_t _x_x3557;
    kk_define_string_literal(static, _s_x3558, 6, "NElem(", _ctx)
    _x_x3557 = kk_string_dup(_s_x3558, _ctx); /*string*/
    kk_string_t _x_x3559;
    kk_string_t _x_x3560 = kk_hml__types_hml_fs_show(element, _ctx); /*string*/
    kk_string_t _x_x3561;
    kk_define_string_literal(static, _s_x3562, 1, ")", _ctx)
    _x_x3561 = kk_string_dup(_s_x3562, _ctx); /*string*/
    _x_x3559 = kk_std_core_types__lp__plus__plus__rp_(_x_x3560, _x_x3561, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3557, _x_x3559, _ctx);
  }
  if (kk_hml__types__is_NText(v_0, _ctx)) {
    struct kk_hml__types_NText* _con_x3563 = kk_hml__types__as_NText(v_0, _ctx);
    kk_string_t content = _con_x3563->content;
    if kk_likely(kk_datatype_ptr_is_unique(v_0, _ctx)) {
      kk_datatype_ptr_free(v_0, _ctx);
    }
    else {
      kk_string_dup(content, _ctx);
      kk_datatype_ptr_decref(v_0, _ctx);
    }
    kk_string_t _x_x3564;
    kk_define_string_literal(static, _s_x3565, 6, "NText(", _ctx)
    _x_x3564 = kk_string_dup(_s_x3565, _ctx); /*string*/
    kk_string_t _x_x3566;
    kk_string_t _x_x3567;
    kk_define_string_literal(static, _s_x3568, 1, ")", _ctx)
    _x_x3567 = kk_string_dup(_s_x3568, _ctx); /*string*/
    _x_x3566 = kk_std_core_types__lp__plus__plus__rp_(content, _x_x3567, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3564, _x_x3566, _ctx);
  }
  {
    struct kk_hml__types_NComment* _con_x3569 = kk_hml__types__as_NComment(v_0, _ctx);
    kk_string_t text = _con_x3569->text;
    if kk_likely(kk_datatype_ptr_is_unique(v_0, _ctx)) {
      kk_datatype_ptr_free(v_0, _ctx);
    }
    else {
      kk_string_dup(text, _ctx);
      kk_datatype_ptr_decref(v_0, _ctx);
    }
    kk_string_t _x_x3570;
    kk_define_string_literal(static, _s_x3571, 9, "NComment(", _ctx)
    _x_x3570 = kk_string_dup(_s_x3571, _ctx); /*string*/
    kk_string_t _x_x3572;
    kk_string_t _x_x3573;
    kk_define_string_literal(static, _s_x3574, 1, ")", _ctx)
    _x_x3573 = kk_string_dup(_s_x3574, _ctx); /*string*/
    _x_x3572 = kk_std_core_types__lp__plus__plus__rp_(text, _x_x3573, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3570, _x_x3572, _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3589__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3589(kk_function_t _fself, kk_string_t _x1_x3588, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3589(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_parseraw_fs_show_fun3589, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_parseraw_fs_show_fun3589(kk_function_t _fself, kk_string_t _x1_x3588, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3588, _ctx);
}


// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3594__t {
  struct kk_function_s _base;
  kk_function_t _b_x121_138;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3594(kk_function_t _fself, kk_box_t _b_x122, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3594(kk_function_t _b_x121_138, kk_context_t* _ctx) {
  struct kk_hml__types_parseraw_fs_show_fun3594__t* _self = kk_function_alloc_as(struct kk_hml__types_parseraw_fs_show_fun3594__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_parseraw_fs_show_fun3594, kk_context());
  _self->_b_x121_138 = _b_x121_138;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_parseraw_fs_show_fun3594(kk_function_t _fself, kk_box_t _b_x122, kk_context_t* _ctx) {
  struct kk_hml__types_parseraw_fs_show_fun3594__t* _self = kk_function_as(struct kk_hml__types_parseraw_fs_show_fun3594__t*, _fself, _ctx);
  kk_function_t _b_x121_138 = _self->_b_x121_138; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x121_138, _ctx);}, {}, _ctx)
  kk_string_t _x_x3595 = kk_string_unbox(_b_x122); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x121_138, (_b_x121_138, _x_x3595, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3601__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3601(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3601(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_parseraw_fs_show_fun3601, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3602__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3602(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3602(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_parseraw_fs_show_fun3602, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_parseraw_fs_show_fun3602(kk_function_t _fself, kk_box_t _b_x126, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3603 = kk_string_unbox(_b_x126); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3603, _ctx);
}


// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3604__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3604(kk_function_t _fself, kk_box_t _b_x127, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3604(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_parseraw_fs_show_fun3604, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_parseraw_fs_show_fun3604(kk_function_t _fself, kk_box_t _b_x127, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3605 = kk_string_unbox(_b_x127); /*string*/
  return kk_std_core_show_string_fs_show(_x_x3605, _ctx);
}
static kk_string_t kk_hml__types_parseraw_fs_show_fun3601(kk_function_t _fself, kk_std_core_types__tuple2 _arg_x1, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_tuple_tuple2_fs_show(_arg_x1, kk_hml__types_parseraw_fs_new_show_fun3602(_ctx), kk_hml__types_parseraw_fs_new_show_fun3604(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3610__t {
  struct kk_function_s _base;
  kk_function_t _b_x129_140;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3610(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3610(kk_function_t _b_x129_140, kk_context_t* _ctx) {
  struct kk_hml__types_parseraw_fs_show_fun3610__t* _self = kk_function_alloc_as(struct kk_hml__types_parseraw_fs_show_fun3610__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_parseraw_fs_show_fun3610, kk_context());
  _self->_b_x129_140 = _b_x129_140;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_parseraw_fs_show_fun3610(kk_function_t _fself, kk_box_t _b_x130, kk_context_t* _ctx) {
  struct kk_hml__types_parseraw_fs_show_fun3610__t* _self = kk_function_as(struct kk_hml__types_parseraw_fs_show_fun3610__t*, _fself, _ctx);
  kk_function_t _b_x129_140 = _self->_b_x129_140; /* ((string, string)) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x129_140, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _x_x3611 = kk_std_core_types__tuple2_unbox(_b_x130, KK_OWNED, _ctx); /*(string, string)*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_std_core_types__tuple2, kk_context_t*), _b_x129_140, (_b_x129_140, _x_x3611, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3618__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3618(kk_function_t _fself, kk_string_t _x1_x3617, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3618(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_parseraw_fs_show_fun3618, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_parseraw_fs_show_fun3618(kk_function_t _fself, kk_string_t _x1_x3617, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3617, _ctx);
}


// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3623__t {
  struct kk_function_s _base;
  kk_function_t _b_x132_145;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3623(kk_function_t _fself, kk_box_t _b_x133, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3623(kk_function_t _b_x132_145, kk_context_t* _ctx) {
  struct kk_hml__types_parseraw_fs_show_fun3623__t* _self = kk_function_alloc_as(struct kk_hml__types_parseraw_fs_show_fun3623__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_parseraw_fs_show_fun3623, kk_context());
  _self->_b_x132_145 = _b_x132_145;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_parseraw_fs_show_fun3623(kk_function_t _fself, kk_box_t _b_x133, kk_context_t* _ctx) {
  struct kk_hml__types_parseraw_fs_show_fun3623__t* _self = kk_function_as(struct kk_hml__types_parseraw_fs_show_fun3623__t*, _fself, _ctx);
  kk_function_t _b_x132_145 = _self->_b_x132_145; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x132_145, _ctx);}, {}, _ctx)
  kk_string_t _x_x3624 = kk_string_unbox(_b_x133); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x132_145, (_b_x132_145, _x_x3624, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3640__t {
  struct kk_function_s _base;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3640(kk_function_t _fself, kk_string_t _x1_x3639, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3640(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_parseraw_fs_show_fun3640, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_string_t kk_hml__types_parseraw_fs_show_fun3640(kk_function_t _fself, kk_string_t _x1_x3639, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_show_string_fs_show(_x1_x3639, _ctx);
}


// lift anonymous function
struct kk_hml__types_parseraw_fs_show_fun3645__t {
  struct kk_function_s _base;
  kk_function_t _b_x135_147;
};
static kk_string_t kk_hml__types_parseraw_fs_show_fun3645(kk_function_t _fself, kk_box_t _b_x136, kk_context_t* _ctx);
static kk_function_t kk_hml__types_parseraw_fs_new_show_fun3645(kk_function_t _b_x135_147, kk_context_t* _ctx) {
  struct kk_hml__types_parseraw_fs_show_fun3645__t* _self = kk_function_alloc_as(struct kk_hml__types_parseraw_fs_show_fun3645__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_parseraw_fs_show_fun3645, kk_context());
  _self->_b_x135_147 = _b_x135_147;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_string_t kk_hml__types_parseraw_fs_show_fun3645(kk_function_t _fself, kk_box_t _b_x136, kk_context_t* _ctx) {
  struct kk_hml__types_parseraw_fs_show_fun3645__t* _self = kk_function_as(struct kk_hml__types_parseraw_fs_show_fun3645__t*, _fself, _ctx);
  kk_function_t _b_x135_147 = _self->_b_x135_147; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x135_147, _ctx);}, {}, _ctx)
  kk_string_t _x_x3646 = kk_string_unbox(_b_x136); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_x135_147, (_b_x135_147, _x_x3646, _ctx), _ctx);
}

kk_string_t kk_hml__types_parseraw_fs_show(kk_hml__types__parseraw p, kk_context_t* _ctx) { /* (p : parseraw) -> string */ 
  kk_string_t _x_x3575;
  kk_define_string_literal(static, _s_x3576, 9, "ParseRaw(", _ctx)
  _x_x3575 = kk_string_dup(_s_x3576, _ctx); /*string*/
  kk_string_t _x_x3577;
  kk_string_t _x_x3578;
  kk_define_string_literal(static, _s_x3579, 11, "raw_error: ", _ctx)
  _x_x3578 = kk_string_dup(_s_x3579, _ctx); /*string*/
  kk_string_t _x_x3580;
  kk_string_t _x_x3581;
  {
    struct kk_hml__types_Parseraw* _con_x3582 = kk_hml__types__as_Parseraw(p, _ctx);
    kk_string_t _x = _con_x3582->raw__error;
    kk_string_dup(_x, _ctx);
    _x_x3581 = _x; /*string*/
  }
  kk_string_t _x_x3583;
  kk_string_t _x_x3584;
  kk_define_string_literal(static, _s_x3585, 2, ", ", _ctx)
  _x_x3584 = kk_string_dup(_s_x3585, _ctx); /*string*/
  kk_string_t _x_x3586;
  kk_std_core_types__list _b_x120_137;
  {
    struct kk_hml__types_Parseraw* _con_x3587 = kk_hml__types__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_0 = _con_x3587->raw__flags;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _b_x120_137 = _x_0; /*list<string>*/
  }
  kk_function_t _b_x121_138 = kk_hml__types_parseraw_fs_new_show_fun3589(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3590;
  kk_define_string_literal(static, _s_x3591, 11, "raw_flags: ", _ctx)
  _x_x3590 = kk_string_dup(_s_x3591, _ctx); /*string*/
  kk_string_t _x_x3592;
  kk_string_t _x_x3593 = kk_std_core_list_show(_b_x120_137, kk_hml__types_parseraw_fs_new_show_fun3594(_b_x121_138, _ctx), _ctx); /*string*/
  kk_string_t _x_x3596;
  kk_string_t _x_x3597;
  kk_define_string_literal(static, _s_x3598, 2, ", ", _ctx)
  _x_x3597 = kk_string_dup(_s_x3598, _ctx); /*string*/
  kk_string_t _x_x3599;
  kk_std_core_types__list _b_x128_139;
  {
    struct kk_hml__types_Parseraw* _con_x3600 = kk_hml__types__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_1 = _con_x3600->raw__options;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _b_x128_139 = _x_1; /*list<(string, string)>*/
  }
  kk_function_t _b_x129_140 = kk_hml__types_parseraw_fs_new_show_fun3601(_ctx); /*((string, string)) -> string*/;
  kk_string_t _x_x3606;
  kk_define_string_literal(static, _s_x3607, 13, "raw_options: ", _ctx)
  _x_x3606 = kk_string_dup(_s_x3607, _ctx); /*string*/
  kk_string_t _x_x3608;
  kk_string_t _x_x3609 = kk_std_core_list_show(_b_x128_139, kk_hml__types_parseraw_fs_new_show_fun3610(_b_x129_140, _ctx), _ctx); /*string*/
  kk_string_t _x_x3612;
  kk_string_t _x_x3613;
  kk_define_string_literal(static, _s_x3614, 2, ", ", _ctx)
  _x_x3613 = kk_string_dup(_s_x3614, _ctx); /*string*/
  kk_string_t _x_x3615;
  kk_std_core_types__list _b_x131_144;
  {
    struct kk_hml__types_Parseraw* _con_x3616 = kk_hml__types__as_Parseraw(p, _ctx);
    kk_std_core_types__list _x_2 = _con_x3616->raw__positionals;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _b_x131_144 = _x_2; /*list<string>*/
  }
  kk_function_t _b_x132_145 = kk_hml__types_parseraw_fs_new_show_fun3618(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3619;
  kk_define_string_literal(static, _s_x3620, 17, "raw_positionals: ", _ctx)
  _x_x3619 = kk_string_dup(_s_x3620, _ctx); /*string*/
  kk_string_t _x_x3621;
  kk_string_t _x_x3622 = kk_std_core_list_show(_b_x131_144, kk_hml__types_parseraw_fs_new_show_fun3623(_b_x132_145, _ctx), _ctx); /*string*/
  kk_string_t _x_x3625;
  kk_string_t _x_x3626;
  kk_define_string_literal(static, _s_x3627, 2, ", ", _ctx)
  _x_x3626 = kk_string_dup(_s_x3627, _ctx); /*string*/
  kk_string_t _x_x3628;
  kk_string_t _x_x3629;
  kk_define_string_literal(static, _s_x3630, 12, "raw_subcmd: ", _ctx)
  _x_x3629 = kk_string_dup(_s_x3630, _ctx); /*string*/
  kk_string_t _x_x3631;
  kk_string_t _x_x3632;
  {
    struct kk_hml__types_Parseraw* _con_x3633 = kk_hml__types__as_Parseraw(p, _ctx);
    kk_string_t _x_3 = _con_x3633->raw__subcmd;
    kk_string_dup(_x_3, _ctx);
    _x_x3632 = _x_3; /*string*/
  }
  kk_string_t _x_x3634;
  kk_string_t _x_x3635;
  kk_define_string_literal(static, _s_x3636, 2, ", ", _ctx)
  _x_x3635 = kk_string_dup(_s_x3636, _ctx); /*string*/
  kk_string_t _x_x3637;
  kk_std_core_types__list _b_x134_146;
  {
    struct kk_hml__types_Parseraw* _con_x3638 = kk_hml__types__as_Parseraw(p, _ctx);
    kk_string_t _pat_0_4 = _con_x3638->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x3638->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x3638->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x3638->raw__positionals;
    kk_string_t _pat_4_4 = _con_x3638->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x3638->raw__sub__args;
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
    _b_x134_146 = _x_4; /*list<string>*/
  }
  kk_function_t _b_x135_147 = kk_hml__types_parseraw_fs_new_show_fun3640(_ctx); /*(s : string) -> string*/;
  kk_string_t _x_x3641;
  kk_define_string_literal(static, _s_x3642, 14, "raw_sub_args: ", _ctx)
  _x_x3641 = kk_string_dup(_s_x3642, _ctx); /*string*/
  kk_string_t _x_x3643;
  kk_string_t _x_x3644 = kk_std_core_list_show(_b_x134_146, kk_hml__types_parseraw_fs_new_show_fun3645(_b_x135_147, _ctx), _ctx); /*string*/
  kk_string_t _x_x3647;
  kk_define_string_literal(static, _s_x3648, 1, ")", _ctx)
  _x_x3647 = kk_string_dup(_s_x3648, _ctx); /*string*/
  _x_x3643 = kk_std_core_types__lp__plus__plus__rp_(_x_x3644, _x_x3647, _ctx); /*string*/
  _x_x3637 = kk_std_core_types__lp__plus__plus__rp_(_x_x3641, _x_x3643, _ctx); /*string*/
  _x_x3634 = kk_std_core_types__lp__plus__plus__rp_(_x_x3635, _x_x3637, _ctx); /*string*/
  _x_x3631 = kk_std_core_types__lp__plus__plus__rp_(_x_x3632, _x_x3634, _ctx); /*string*/
  _x_x3628 = kk_std_core_types__lp__plus__plus__rp_(_x_x3629, _x_x3631, _ctx); /*string*/
  _x_x3625 = kk_std_core_types__lp__plus__plus__rp_(_x_x3626, _x_x3628, _ctx); /*string*/
  _x_x3621 = kk_std_core_types__lp__plus__plus__rp_(_x_x3622, _x_x3625, _ctx); /*string*/
  _x_x3615 = kk_std_core_types__lp__plus__plus__rp_(_x_x3619, _x_x3621, _ctx); /*string*/
  _x_x3612 = kk_std_core_types__lp__plus__plus__rp_(_x_x3613, _x_x3615, _ctx); /*string*/
  _x_x3608 = kk_std_core_types__lp__plus__plus__rp_(_x_x3609, _x_x3612, _ctx); /*string*/
  _x_x3599 = kk_std_core_types__lp__plus__plus__rp_(_x_x3606, _x_x3608, _ctx); /*string*/
  _x_x3596 = kk_std_core_types__lp__plus__plus__rp_(_x_x3597, _x_x3599, _ctx); /*string*/
  _x_x3592 = kk_std_core_types__lp__plus__plus__rp_(_x_x3593, _x_x3596, _ctx); /*string*/
  _x_x3586 = kk_std_core_types__lp__plus__plus__rp_(_x_x3590, _x_x3592, _ctx); /*string*/
  _x_x3583 = kk_std_core_types__lp__plus__plus__rp_(_x_x3584, _x_x3586, _ctx); /*string*/
  _x_x3580 = kk_std_core_types__lp__plus__plus__rp_(_x_x3581, _x_x3583, _ctx); /*string*/
  _x_x3577 = kk_std_core_types__lp__plus__plus__rp_(_x_x3578, _x_x3580, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3575, _x_x3577, _ctx);
}

kk_hml__types__parseraw kk_hml__types_parseraw_fs__copy(kk_hml__types__parseraw _this, kk_std_core_types__optional raw__error, kk_std_core_types__optional raw__flags, kk_std_core_types__optional raw__options, kk_std_core_types__optional raw__positionals, kk_std_core_types__optional raw__subcmd, kk_std_core_types__optional raw__sub__args, kk_context_t* _ctx) { /* (parseraw, raw_error : ? string, raw_flags : ? (list<string>), raw_options : ? (list<(string, string)>), raw_positionals : ? (list<string>), raw_subcmd : ? string, raw_sub_args : ? (list<string>)) -> parseraw */ 
  kk_string_t _x_x3661;
  if (kk_std_core_types__is_Optional(raw__error, _ctx)) {
    kk_box_t _box_x148 = raw__error._cons._Optional.value;
    kk_string_t _uniq_raw__error_4802 = kk_string_unbox(_box_x148);
    kk_string_dup(_uniq_raw__error_4802, _ctx);
    kk_std_core_types__optional_drop(raw__error, _ctx);
    _x_x3661 = _uniq_raw__error_4802; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__error, _ctx);
    {
      struct kk_hml__types_Parseraw* _con_x3662 = kk_hml__types__as_Parseraw(_this, _ctx);
      kk_string_t _x = _con_x3662->raw__error;
      kk_string_dup(_x, _ctx);
      _x_x3661 = _x; /*string*/
    }
  }
  kk_std_core_types__list _x_x3663;
  if (kk_std_core_types__is_Optional(raw__flags, _ctx)) {
    kk_box_t _box_x149 = raw__flags._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__flags_4810 = kk_std_core_types__list_unbox(_box_x149, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__flags_4810, _ctx);
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    _x_x3663 = _uniq_raw__flags_4810; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__flags, _ctx);
    {
      struct kk_hml__types_Parseraw* _con_x3664 = kk_hml__types__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_0 = _con_x3664->raw__flags;
      kk_std_core_types__list_dup(_x_0, _ctx);
      _x_x3663 = _x_0; /*list<string>*/
    }
  }
  kk_std_core_types__list _x_x3665;
  if (kk_std_core_types__is_Optional(raw__options, _ctx)) {
    kk_box_t _box_x150 = raw__options._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__options_4818 = kk_std_core_types__list_unbox(_box_x150, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__options_4818, _ctx);
    kk_std_core_types__optional_drop(raw__options, _ctx);
    _x_x3665 = _uniq_raw__options_4818; /*list<(string, string)>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__options, _ctx);
    {
      struct kk_hml__types_Parseraw* _con_x3666 = kk_hml__types__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_1 = _con_x3666->raw__options;
      kk_std_core_types__list_dup(_x_1, _ctx);
      _x_x3665 = _x_1; /*list<(string, string)>*/
    }
  }
  kk_std_core_types__list _x_x3667;
  if (kk_std_core_types__is_Optional(raw__positionals, _ctx)) {
    kk_box_t _box_x151 = raw__positionals._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__positionals_4826 = kk_std_core_types__list_unbox(_box_x151, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__positionals_4826, _ctx);
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    _x_x3667 = _uniq_raw__positionals_4826; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__positionals, _ctx);
    {
      struct kk_hml__types_Parseraw* _con_x3668 = kk_hml__types__as_Parseraw(_this, _ctx);
      kk_std_core_types__list _x_2 = _con_x3668->raw__positionals;
      kk_std_core_types__list_dup(_x_2, _ctx);
      _x_x3667 = _x_2; /*list<string>*/
    }
  }
  kk_string_t _x_x3669;
  if (kk_std_core_types__is_Optional(raw__subcmd, _ctx)) {
    kk_box_t _box_x152 = raw__subcmd._cons._Optional.value;
    kk_string_t _uniq_raw__subcmd_4834 = kk_string_unbox(_box_x152);
    kk_string_dup(_uniq_raw__subcmd_4834, _ctx);
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    _x_x3669 = _uniq_raw__subcmd_4834; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(raw__subcmd, _ctx);
    {
      struct kk_hml__types_Parseraw* _con_x3670 = kk_hml__types__as_Parseraw(_this, _ctx);
      kk_string_t _x_3 = _con_x3670->raw__subcmd;
      kk_string_dup(_x_3, _ctx);
      _x_x3669 = _x_3; /*string*/
    }
  }
  kk_std_core_types__list _x_x3671;
  if (kk_std_core_types__is_Optional(raw__sub__args, _ctx)) {
    kk_box_t _box_x153 = raw__sub__args._cons._Optional.value;
    kk_std_core_types__list _uniq_raw__sub__args_4842 = kk_std_core_types__list_unbox(_box_x153, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_raw__sub__args_4842, _ctx);
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(6)), _ctx);
    _x_x3671 = _uniq_raw__sub__args_4842; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(raw__sub__args, _ctx);
    {
      struct kk_hml__types_Parseraw* _con_x3672 = kk_hml__types__as_Parseraw(_this, _ctx);
      kk_string_t _pat_0_5 = _con_x3672->raw__error;
      kk_std_core_types__list _pat_1_6 = _con_x3672->raw__flags;
      kk_std_core_types__list _pat_2_5 = _con_x3672->raw__options;
      kk_std_core_types__list _pat_3_5 = _con_x3672->raw__positionals;
      kk_string_t _pat_4_5 = _con_x3672->raw__subcmd;
      kk_std_core_types__list _x_4 = _con_x3672->raw__sub__args;
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
      _x_x3671 = _x_4; /*list<string>*/
    }
  }
  return kk_hml__types__new_Parseraw(kk_reuse_null, 0, _x_x3661, _x_x3663, _x_x3665, _x_x3667, _x_x3669, _x_x3671, _ctx);
}

kk_integer_t kk_hml__types_hc__clamp(kk_integer_t v, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (v : int, lo : int, hi : int) -> int */ 
  kk_integer_t a_10060;
  bool _match_x2947 = kk_integer_gt_borrow(v,lo,kk_context()); /*bool*/;
  if (_match_x2947) {
    kk_integer_drop(lo, _ctx);
    a_10060 = v; /*int*/
  }
  else {
    kk_integer_drop(v, _ctx);
    a_10060 = lo; /*int*/
  }
  bool _match_x2946 = kk_integer_lt_borrow(a_10060,hi,kk_context()); /*bool*/;
  if (_match_x2946) {
    kk_integer_drop(hi, _ctx);
    return a_10060;
  }
  {
    kk_integer_drop(a_10060, _ctx);
    return hi;
  }
}

kk_integer_t kk_hml__types_hc__gcd(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  kk__tailcall: ;
  bool _match_x2945 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2945) {
    kk_integer_drop(b, _ctx);
    return a;
  }
  { // tailcall
    kk_integer_t _x_x3673 = kk_integer_dup(b, _ctx); /*int*/
    kk_integer_t _x_x3674 = kk_integer_mod(a,b,kk_context()); /*int*/
    a = _x_x3673;
    b = _x_x3674;
    goto kk__tailcall;
  }
}

kk_integer_t kk_hml__types_hc__lcm(kk_integer_t a, kk_integer_t b, kk_context_t* _ctx) { /* (a : int, b : int) -> div int */ 
  bool _match_x2942 = kk_integer_eq_borrow(a,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2942) {
    kk_integer_drop(b, _ctx);
    kk_integer_drop(a, _ctx);
    return kk_integer_from_small(0);
  }
  {
    bool _match_x2943 = kk_integer_eq_borrow(b,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2943) {
      kk_integer_drop(b, _ctx);
      kk_integer_drop(a, _ctx);
      return kk_integer_from_small(0);
    }
    {
      kk_integer_t n_10064;
      kk_integer_t _x_x3675 = kk_integer_dup(a, _ctx); /*int*/
      kk_integer_t _x_x3676 = kk_integer_dup(b, _ctx); /*int*/
      n_10064 = kk_integer_mul(_x_x3675,_x_x3676,kk_context()); /*int*/
      kk_integer_t _x_x3677;
      bool _match_x2944 = kk_integer_lt_borrow(n_10064,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2944) {
        _x_x3677 = kk_integer_sub((kk_integer_from_small(0)),n_10064,kk_context()); /*int*/
      }
      else {
        _x_x3677 = n_10064; /*int*/
      }
      kk_integer_t _x_x3678 = kk_hml__types_hc__gcd(a, b, _ctx); /*int*/
      return kk_integer_div(_x_x3677,_x_x3678,kk_context());
    }
  }
}

kk_integer_t kk_hml__types_hc__pow(kk_integer_t base, kk_integer_t exp, kk_context_t* _ctx) { /* (base : int, exp : int) -> div int */ 
  bool _match_x2941 = kk_integer_lte_borrow(exp,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2941) {
    kk_integer_drop(exp, _ctx);
    kk_integer_drop(base, _ctx);
    return kk_integer_from_small(1);
  }
  {
    kk_integer_t _x_x3679 = kk_integer_dup(base, _ctx); /*int*/
    kk_integer_t _x_x3680;
    kk_integer_t _x_x3681 = kk_integer_add_small_const(exp, -1, _ctx); /*int*/
    _x_x3680 = kk_hml__types_hc__pow(base, _x_x3681, _ctx); /*int*/
    return kk_integer_mul(_x_x3679,_x_x3680,kk_context());
  }
}

kk_integer_t kk_hml__types_hc__sign(kk_integer_t n, kk_context_t* _ctx) { /* (n : int) -> int */ 
  bool _match_x2938 = kk_integer_gt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2938) {
    kk_integer_drop(n, _ctx);
    return kk_integer_from_small(1);
  }
  {
    bool _match_x2939;
    bool _brw_x2940 = kk_integer_lt_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    _match_x2939 = _brw_x2940; /*bool*/
    if (_match_x2939) {
      return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
    }
    {
      return kk_integer_from_small(0);
    }
  }
}

kk_std_core_types__list kk_hml__types_hc__intersperse(kk_std_core_types__list xs, kk_box_t sep, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, sep : a) -> list<a> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_box_drop(sep, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3682 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_std_core_types__list _pat_1 = _con_x3682->tail;
    if (kk_std_core_types__is_Nil(_pat_1, _ctx)) {
      kk_box_t x = _con_x3682->head;
      kk_reuse_t _ru_x2985 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
        _ru_x2985 = (kk_datatype_ptr_reuse(xs, _ctx));
      }
      else {
        kk_box_dup(x, _ctx);
        kk_datatype_ptr_decref(xs, _ctx);
      }
      kk_box_drop(sep, _ctx);
      return kk_std_core_types__new_Cons(_ru_x2985, 0, x, kk_std_core_types__new_Nil(_ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x3683 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3683->head;
    kk_std_core_types__list rest = _con_x3683->tail;
    kk_reuse_t _ru_x2986 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x2986 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_std_core_types__list ys_10079;
    kk_box_t _x_x3684 = kk_box_dup(sep, _ctx); /*6347*/
    ys_10079 = kk_hml__types_hc__intersperse(rest, _x_x3684, _ctx); /*list<6347>*/
    kk_std_core_types__list _x_x3685;
    kk_std_core_types__list _x_x3686 = kk_std_core_types__new_Cons(_ru_x2986, 0, sep, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3685 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_0, _x_x3686, _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3685, ys_10079, _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__sum_fun3688__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__sum_fun3688(kk_function_t _fself, kk_box_t _b_x157, kk_box_t _b_x158, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__sum_fun3688(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__sum_fun3688, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__sum_fun3688(kk_function_t _fself, kk_box_t _b_x157, kk_box_t _b_x158, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t _x_x3689;
  kk_integer_t _x_x3690 = kk_integer_unbox(_b_x157, _ctx); /*int*/
  kk_integer_t _x_x3691 = kk_integer_unbox(_b_x158, _ctx); /*int*/
  _x_x3689 = kk_std_core_int__lp__plus__rp_(_x_x3690, _x_x3691, _ctx); /*int*/
  return kk_integer_box(_x_x3689, _ctx);
}

kk_integer_t kk_hml__types_hc__sum(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3687 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(0), _ctx), kk_hml__types_new_hc__sum_fun3688(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3687, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__product_fun3693__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__product_fun3693(kk_function_t _fself, kk_box_t _b_x165, kk_box_t _b_x166, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__product_fun3693(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__product_fun3693, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__product_fun3693(kk_function_t _fself, kk_box_t _b_x165, kk_box_t _b_x166, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t a_170 = kk_integer_unbox(_b_x165, _ctx); /*int*/;
  kk_integer_t b_171 = kk_integer_unbox(_b_x166, _ctx); /*int*/;
  kk_integer_t _x_x3694 = kk_integer_mul(a_170,b_171,kk_context()); /*int*/
  return kk_integer_box(_x_x3694, _ctx);
}

kk_integer_t kk_hml__types_hc__product(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> int */ 
  kk_box_t _x_x3692 = kk_std_core_list_foldl(xs, kk_integer_box(kk_integer_from_small(1), _ctx), kk_hml__types_new_hc__product_fun3693(_ctx), _ctx); /*10002*/
  return kk_integer_unbox(_x_x3692, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_hml__types__mlift_hc__scan_11112(kk_box_t init, kk_std_core_types__list _y_x10738, kk_context_t* _ctx) { /* forall<a,e> (init : a, list<a>) -> e list<a> */ 
  kk_std_core_types__list _x_x3695 = kk_std_core_types__new_Cons(kk_reuse_null, 0, init, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  return kk_std_core_list_append(_x_x3695, _y_x10738, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__scan_11113_fun3697__t {
  struct kk_function_s _base;
  kk_box_t init_0;
};
static kk_box_t kk_hml__types__mlift_hc__scan_11113_fun3697(kk_function_t _fself, kk_box_t _b_x173, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__scan_11113_fun3697(kk_box_t init_0, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__scan_11113_fun3697__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__scan_11113_fun3697__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__scan_11113_fun3697, kk_context());
  _self->init_0 = init_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__scan_11113_fun3697(kk_function_t _fself, kk_box_t _b_x173, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__scan_11113_fun3697__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__scan_11113_fun3697__t*, _fself, _ctx);
  kk_box_t init_0 = _self->init_0; /* 6464 */
  kk_drop_match(_self, {kk_box_dup(init_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10738_0_175 = kk_std_core_types__list_unbox(_b_x173, KK_OWNED, _ctx); /*list<6464>*/;
  kk_std_core_types__list _x_x3698 = kk_hml__types__mlift_hc__scan_11112(init_0, _y_x10738_0_175, _ctx); /*list<6464>*/
  return kk_std_core_types__list_box(_x_x3698, _ctx);
}

kk_std_core_types__list kk_hml__types__mlift_hc__scan_11113(kk_function_t f, kk_box_t init_0, kk_std_core_types__list rest, kk_box_t _y_x10737, kk_context_t* _ctx) { /* forall<a,b,e> (f : (b, a) -> e b, init : b, rest : list<a>, b) -> e list<b> */ 
  kk_std_core_types__list x_11180 = kk_hml__types_hc__scan(rest, _y_x10737, f, _ctx); /*list<6464>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11180, _ctx);
    kk_box_t _x_x3696 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__scan_11113_fun3697(init_0, _ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x3696, KK_OWNED, _ctx);
  }
  {
    return kk_hml__types__mlift_hc__scan_11112(init_0, x_11180, _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__scan_fun3703__t {
  struct kk_function_s _base;
  kk_function_t f_0;
  kk_box_t init_1;
  kk_std_core_types__list rest_0;
};
static kk_box_t kk_hml__types_hc__scan_fun3703(kk_function_t _fself, kk_box_t _b_x177, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__scan_fun3703(kk_function_t f_0, kk_box_t init_1, kk_std_core_types__list rest_0, kk_context_t* _ctx) {
  struct kk_hml__types_hc__scan_fun3703__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__scan_fun3703__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__scan_fun3703, kk_context());
  _self->f_0 = f_0;
  _self->init_1 = init_1;
  _self->rest_0 = rest_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__scan_fun3703(kk_function_t _fself, kk_box_t _b_x177, kk_context_t* _ctx) {
  struct kk_hml__types_hc__scan_fun3703__t* _self = kk_function_as(struct kk_hml__types_hc__scan_fun3703__t*, _fself, _ctx);
  kk_function_t f_0 = _self->f_0; /* (6464, 6463) -> 6465 6464 */
  kk_box_t init_1 = _self->init_1; /* 6464 */
  kk_std_core_types__list rest_0 = _self->rest_0; /* list<6463> */
  kk_drop_match(_self, {kk_function_dup(f_0, _ctx);kk_box_dup(init_1, _ctx);kk_std_core_types__list_dup(rest_0, _ctx);}, {}, _ctx)
  kk_box_t _y_x10737_0_182 = _b_x177; /*6464*/;
  kk_std_core_types__list _x_x3704 = kk_hml__types__mlift_hc__scan_11113(f_0, init_1, rest_0, _y_x10737_0_182, _ctx); /*list<6464>*/
  return kk_std_core_types__list_box(_x_x3704, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__scan_fun3706__t {
  struct kk_function_s _base;
  kk_box_t init_1;
};
static kk_box_t kk_hml__types_hc__scan_fun3706(kk_function_t _fself, kk_box_t _b_x179, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__scan_fun3706(kk_box_t init_1, kk_context_t* _ctx) {
  struct kk_hml__types_hc__scan_fun3706__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__scan_fun3706__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__scan_fun3706, kk_context());
  _self->init_1 = init_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__scan_fun3706(kk_function_t _fself, kk_box_t _b_x179, kk_context_t* _ctx) {
  struct kk_hml__types_hc__scan_fun3706__t* _self = kk_function_as(struct kk_hml__types_hc__scan_fun3706__t*, _fself, _ctx);
  kk_box_t init_1 = _self->init_1; /* 6464 */
  kk_drop_match(_self, {kk_box_dup(init_1, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10738_1_183 = kk_std_core_types__list_unbox(_b_x179, KK_OWNED, _ctx); /*list<6464>*/;
  kk_std_core_types__list _x_x3707 = kk_hml__types__mlift_hc__scan_11112(init_1, _y_x10738_1_183, _ctx); /*list<6464>*/
  return kk_std_core_types__list_box(_x_x3707, _ctx);
}

kk_std_core_types__list kk_hml__types_hc__scan(kk_std_core_types__list xs, kk_box_t init_1, kk_function_t f_0, kk_context_t* _ctx) { /* forall<a,b,e> (xs : list<a>, init : b, f : (b, a) -> e b) -> e list<b> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_function_drop(f_0, _ctx);
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x3699 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t x_0 = _con_x3699->head;
    kk_std_core_types__list rest_0 = _con_x3699->tail;
    kk_reuse_t _ru_x2987 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      _ru_x2987 = (kk_datatype_ptr_reuse(xs, _ctx));
    }
    else {
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    kk_box_t x_1_11182;
    kk_function_t _x_x3701 = kk_function_dup(f_0, _ctx); /*(6464, 6463) -> 6465 6464*/
    kk_box_t _x_x3700 = kk_box_dup(init_1, _ctx); /*6464*/
    x_1_11182 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x3701, (_x_x3701, _x_x3700, x_0, _ctx), _ctx); /*6464*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_x2987,kk_context());
      kk_box_drop(x_1_11182, _ctx);
      kk_box_t _x_x3702 = kk_std_core_hnd_yield_extend(kk_hml__types_new_hc__scan_fun3703(f_0, init_1, rest_0, _ctx), _ctx); /*10001*/
      return kk_std_core_types__list_unbox(_x_x3702, KK_OWNED, _ctx);
    }
    {
      kk_std_core_types__list x_2_11185 = kk_hml__types_hc__scan(rest_0, x_1_11182, f_0, _ctx); /*list<6464>*/;
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_x2987,kk_context());
        kk_std_core_types__list_drop(x_2_11185, _ctx);
        kk_box_t _x_x3705 = kk_std_core_hnd_yield_extend(kk_hml__types_new_hc__scan_fun3706(init_1, _ctx), _ctx); /*10001*/
        return kk_std_core_types__list_unbox(_x_x3705, KK_OWNED, _ctx);
      }
      {
        kk_std_core_types__list _x_x3708 = kk_std_core_types__new_Cons(_ru_x2987, 0, init_1, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
        return kk_std_core_list_append(_x_x3708, x_2_11185, _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_hml__types_hc__zip__with_fun3709__t {
  struct kk_function_s _base;
  kk_function_t f;
};
static kk_box_t kk_hml__types_hc__zip__with_fun3709(kk_function_t _fself, kk_box_t _b_x186, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__zip__with_fun3709(kk_function_t f, kk_context_t* _ctx) {
  struct kk_hml__types_hc__zip__with_fun3709__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__zip__with_fun3709__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__zip__with_fun3709, kk_context());
  _self->f = f;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__zip__with_fun3709(kk_function_t _fself, kk_box_t _b_x186, kk_context_t* _ctx) {
  struct kk_hml__types_hc__zip__with_fun3709__t* _self = kk_function_as(struct kk_hml__types_hc__zip__with_fun3709__t*, _fself, _ctx);
  kk_function_t f = _self->f; /* (6674, 6675) -> 6677 6676 */
  kk_drop_match(_self, {kk_function_dup(f, _ctx);}, {}, _ctx)
  kk_box_t _x_x3710;
  kk_std_core_types__tuple2 _match_x2921;
  kk_box_t _x_x3711 = kk_box_dup(_b_x186, _ctx); /*10001*/
  _match_x2921 = kk_std_core_types__tuple2_unbox(_x_x3711, KK_OWNED, _ctx); /*(6674, 6675)*/
  {
    kk_box_t _x = _match_x2921.fst;
    kk_box_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2921, _ctx);
    _x_x3710 = _x; /*6674*/
  }
  kk_box_t _x_x3712;
  kk_std_core_types__tuple2 _match_x2920 = kk_std_core_types__tuple2_unbox(_b_x186, KK_OWNED, _ctx); /*(6674, 6675)*/;
  {
    kk_box_t _x_0 = _match_x2920.snd;
    kk_box_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2920, _ctx);
    _x_x3712 = _x_0; /*6675*/
  }
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, _x_x3710, _x_x3712, _ctx), _ctx);
}

kk_std_core_types__list kk_hml__types_hc__zip__with(kk_std_core_types__list xs, kk_std_core_types__list ys, kk_function_t f, kk_context_t* _ctx) { /* forall<a,b,c,e> (xs : list<a>, ys : list<b>, f : (a, b) -> e c) -> e list<c> */ 
  kk_std_core_types__list _b_x184_187 = kk_std_core_list_zip(xs, ys, _ctx); /*list<(6674, 6675)>*/;
  kk_function_t _brw_x2922 = kk_hml__types_new_hc__zip__with_fun3709(f, _ctx); /*(10001) -> 10003 6676*/;
  kk_std_core_types__list _brw_x2923 = kk_std_core_list_map(_b_x184_187, _brw_x2922, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2922, _ctx);
  return _brw_x2923;
}


// lift anonymous function
struct kk_hml__types_hc__unique_fun3714__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__unique_fun3714(kk_function_t _fself, kk_box_t _b_x198, kk_box_t _b_x199, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__unique_fun3714(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__unique_fun3714, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_hc__unique_fun3715__t {
  struct kk_function_s _base;
  kk_integer_t x_208;
};
static bool kk_hml__types_hc__unique_fun3715(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__unique_fun3715(kk_integer_t x_208, kk_context_t* _ctx) {
  struct kk_hml__types_hc__unique_fun3715__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__unique_fun3715__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__unique_fun3715, kk_context());
  _self->x_208 = x_208;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__unique_fun3715(kk_function_t _fself, kk_integer_t hc____el, kk_context_t* _ctx) {
  struct kk_hml__types_hc__unique_fun3715__t* _self = kk_function_as(struct kk_hml__types_hc__unique_fun3715__t*, _fself, _ctx);
  kk_integer_t x_208 = _self->x_208; /* int */
  kk_drop_match(_self, {kk_integer_dup(x_208, _ctx);}, {}, _ctx)
  bool _brw_x2919 = kk_integer_eq_borrow(hc____el,x_208,kk_context()); /*bool*/;
  kk_integer_drop(hc____el, _ctx);
  kk_integer_drop(x_208, _ctx);
  return _brw_x2919;
}


// lift anonymous function
struct kk_hml__types_hc__unique_fun3717__t {
  struct kk_function_s _base;
  kk_function_t _b_x191_204;
};
static bool kk_hml__types_hc__unique_fun3717(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__unique_fun3717(kk_function_t _b_x191_204, kk_context_t* _ctx) {
  struct kk_hml__types_hc__unique_fun3717__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__unique_fun3717__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__unique_fun3717, kk_context());
  _self->_b_x191_204 = _b_x191_204;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__unique_fun3717(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  struct kk_hml__types_hc__unique_fun3717__t* _self = kk_function_as(struct kk_hml__types_hc__unique_fun3717__t*, _fself, _ctx);
  kk_function_t _b_x191_204 = _self->_b_x191_204; /* (hc__el : int) -> bool */
  kk_drop_match(_self, {kk_function_dup(_b_x191_204, _ctx);}, {}, _ctx)
  kk_integer_t _x_x3718 = kk_integer_unbox(_b_x192, _ctx); /*int*/
  return kk_function_call(bool, (kk_function_t, kk_integer_t, kk_context_t*), _b_x191_204, (_b_x191_204, _x_x3718, _ctx), _ctx);
}
static kk_box_t kk_hml__types_hc__unique_fun3714(kk_function_t _fself, kk_box_t _b_x198, kk_box_t _b_x199, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list acc_207 = kk_std_core_types__list_unbox(_b_x198, KK_OWNED, _ctx); /*list<int>*/;
  kk_integer_t x_208 = kk_integer_unbox(_b_x199, _ctx); /*int*/;
  kk_std_core_types__list _b_x190_203 = kk_std_core_types__list_dup(acc_207, _ctx); /*list<int>*/;
  kk_function_t _b_x191_204;
  kk_integer_dup(x_208, _ctx);
  _b_x191_204 = kk_hml__types_new_hc__unique_fun3715(x_208, _ctx); /*(hc__el : int) -> bool*/
  kk_std_core_types__list _x_x3716;
  bool _match_x2918 = kk_std_core_list_any(_b_x190_203, kk_hml__types_new_hc__unique_fun3717(_b_x191_204, _ctx), _ctx); /*bool*/;
  if (_match_x2918) {
    kk_integer_drop(x_208, _ctx);
    _x_x3716 = acc_207; /*list<int>*/
  }
  else {
    kk_std_core_types__list _x_x3719 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(x_208, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    _x_x3716 = kk_std_core_list_append(acc_207, _x_x3719, _ctx); /*list<int>*/
  }
  return kk_std_core_types__list_box(_x_x3716, _ctx);
}

kk_std_core_types__list kk_hml__types_hc__unique(kk_std_core_types__list xs, kk_context_t* _ctx) { /* (xs : list<int>) -> list<int> */ 
  kk_box_t _x_x3713 = kk_std_core_list_foldl(xs, kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx), kk_hml__types_new_hc__unique_fun3714(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x3713, KK_OWNED, _ctx);
}

kk_std_core_types__list kk_hml__types_hc__chunks(kk_std_core_types__list xs, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (xs : list<a>, n : int) -> div list<list<a>> */ 
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(n, _ctx);
    return kk_std_core_types__new_Nil(_ctx);
  }
  {
    kk_std_core_types__list _b_x209_211;
    kk_std_core_types__list _x_x3720 = kk_std_core_types__list_dup(xs, _ctx); /*list<6937>*/
    kk_integer_t _x_x3721 = kk_integer_dup(n, _ctx); /*int*/
    _b_x209_211 = kk_std_core_list_take(_x_x3720, _x_x3721, _ctx); /*list<6937>*/
    kk_std_core_types__list ys_10083;
    kk_std_core_types__list _x_x3722;
    kk_integer_t _x_x3723 = kk_integer_dup(n, _ctx); /*int*/
    _x_x3722 = kk_std_core_list_drop(xs, _x_x3723, _ctx); /*list<10001>*/
    ys_10083 = kk_hml__types_hc__chunks(_x_x3722, n, _ctx); /*list<list<6937>>*/
    kk_std_core_types__list _x_x3724 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_std_core_types__list_box(_b_x209_211, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
    return kk_std_core_list_append(_x_x3724, ys_10083, _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__words_fun3730__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__words_fun3730(kk_function_t _fself, kk_box_t _b_x215, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__words_fun3730(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__words_fun3730, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__words_fun3730(kk_function_t _fself, kk_box_t _b_x215, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3731;
  kk_char_t _x_x3732 = kk_char_unbox(_b_x215, KK_OWNED, _ctx); /*char*/
  _x_x3731 = kk_std_core_string_char_fs_string(_x_x3732, _ctx); /*string*/
  return kk_string_box(_x_x3731);
}


// lift anonymous function
struct kk_hml__types_hc__words_fun3735__t {
  struct kk_function_s _base;
};
static bool kk_hml__types_hc__words_fun3735(kk_function_t _fself, kk_box_t _b_x218, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__words_fun3735(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__words_fun3735, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_hml__types_hc__words_fun3735(kk_function_t _fself, kk_box_t _b_x218, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool b_10089;
  kk_integer_t _brw_x2909;
  kk_string_t _x_x3736 = kk_string_unbox(_b_x218); /*string*/
  _brw_x2909 = kk_std_core_string_chars_fs_count(_x_x3736, _ctx); /*int*/
  bool _brw_x2910 = kk_integer_eq_borrow(_brw_x2909,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2909, _ctx);
  b_10089 = _brw_x2910; /*bool*/
  if (b_10089) {
    return false;
  }
  {
    return true;
  }
}

kk_std_core_types__list kk_hml__types_hc__words(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  kk_std_core_types__list _b_x216_219;
  bool _match_x2911;
  kk_string_t _x_x3726;
  kk_define_string_literal(static, _s_x3727, 1, " ", _ctx)
  _x_x3726 = kk_string_dup(_s_x3727, _ctx); /*string*/
  kk_string_t _x_x3728 = kk_string_empty(); /*string*/
  _match_x2911 = kk_string_is_eq(_x_x3726,_x_x3728,kk_context()); /*bool*/
  if (_match_x2911) {
    kk_std_core_types__list _b_x213_221 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2912 = kk_hml__types_new_hc__words_fun3730(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2913 = kk_std_core_list_map(_b_x213_221, _brw_x2912, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2912, _ctx);
    _b_x216_219 = _brw_x2913; /*list<string>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x3733;
    kk_define_string_literal(static, _s_x3734, 1, " ", _ctx)
    _x_x3733 = kk_string_dup(_s_x3734, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3733,kk_context()); /*vector<string>*/
    _b_x216_219 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  return kk_std_core_list_filter(_b_x216_219, kk_hml__types_new_hc__words_fun3735(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__lines_fun3741__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__lines_fun3741(kk_function_t _fself, kk_box_t _b_x226, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__lines_fun3741(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__lines_fun3741, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__lines_fun3741(kk_function_t _fself, kk_box_t _b_x226, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3742;
  kk_char_t _x_x3743 = kk_char_unbox(_b_x226, KK_OWNED, _ctx); /*char*/
  _x_x3742 = kk_std_core_string_char_fs_string(_x_x3743, _ctx); /*string*/
  return kk_string_box(_x_x3742);
}

kk_std_core_types__list kk_hml__types_hc__lines(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> list<string> */ 
  bool _match_x2906;
  kk_string_t _x_x3737;
  kk_define_string_literal(static, _s_x3738, 1, "\n", _ctx)
  _x_x3737 = kk_string_dup(_s_x3738, _ctx); /*string*/
  kk_string_t _x_x3739 = kk_string_empty(); /*string*/
  _match_x2906 = kk_string_is_eq(_x_x3737,_x_x3739,kk_context()); /*bool*/
  if (_match_x2906) {
    kk_std_core_types__list _b_x224_227 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2907 = kk_hml__types_new_hc__lines_fun3741(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2908 = kk_std_core_list_map(_b_x224_227, _brw_x2907, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2907, _ctx);
    return _brw_x2908;
  }
  {
    kk_vector_t v_10011;
    kk_string_t _x_x3744;
    kk_define_string_literal(static, _s_x3745, 1, "\n", _ctx)
    _x_x3744 = kk_string_dup(_s_x3745, _ctx); /*string*/
    v_10011 = kk_string_splitv(s,_x_x3744,kk_context()); /*vector<string>*/
    return kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__count__substr_fun3753__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__count__substr_fun3753(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__count__substr_fun3753(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__count__substr_fun3753, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__count__substr_fun3753(kk_function_t _fself, kk_box_t _b_x231, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3754;
  kk_char_t _x_x3755 = kk_char_unbox(_b_x231, KK_OWNED, _ctx); /*char*/
  _x_x3754 = kk_std_core_string_char_fs_string(_x_x3755, _ctx); /*string*/
  return kk_string_box(_x_x3754);
}

kk_integer_t kk_hml__types_hc__count__substr(kk_string_t s, kk_string_t hc__sub_0, kk_context_t* _ctx) { /* (s : string, hc_sub : string) -> int */ 
  kk_std_core_types__list xs_10101;
  bool _match_x2903;
  kk_string_t _x_x3750 = kk_string_dup(hc__sub_0, _ctx); /*string*/
  kk_string_t _x_x3751 = kk_string_empty(); /*string*/
  _match_x2903 = kk_string_is_eq(_x_x3750,_x_x3751,kk_context()); /*bool*/
  if (_match_x2903) {
    kk_string_drop(hc__sub_0, _ctx);
    kk_std_core_types__list _b_x229_232 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
    kk_function_t _brw_x2904 = kk_hml__types_new_hc__count__substr_fun3753(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2905 = kk_std_core_list_map(_b_x229_232, _brw_x2904, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2904, _ctx);
    xs_10101 = _brw_x2905; /*list<string>*/
  }
  else {
    kk_vector_t v_10011 = kk_string_splitv(s,hc__sub_0,kk_context()); /*vector<string>*/;
    xs_10101 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
  }
  kk_integer_t x_10099 = kk_std_core_list__lift_length_6003(xs_10101, kk_integer_from_small(0), _ctx); /*int*/;
  return kk_integer_add_small_const(x_10099, -1, _ctx);
}

kk_string_t kk_hml__types_hc__repeat__str(kk_string_t s, kk_integer_t n, kk_context_t* _ctx) { /* (s : string, n : int) -> div string */ 
  bool _match_x2902 = kk_integer_lte_borrow(n,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x2902) {
    kk_string_drop(s, _ctx);
    kk_integer_drop(n, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3757 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3758;
    kk_integer_t _x_x3759 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    _x_x3758 = kk_hml__types_hc__repeat__str(s, _x_x3759, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3757, _x_x3758, _ctx);
  }
}

kk_string_t kk_hml__types_hc__pad__left(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10110;
  kk_string_t _x_x3760 = kk_string_dup(s, _ctx); /*string*/
  y_10110 = kk_std_core_string_chars_fs_count(_x_x3760, _ctx); /*int*/
  kk_integer_t b_10108 = kk_integer_sub(width,y_10110,kk_context()); /*int*/;
  kk_string_t _x_x3761;
  kk_integer_t _x_x3762;
  bool _match_x2901 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10108,kk_context()); /*bool*/;
  if (_match_x2901) {
    kk_integer_drop(b_10108, _ctx);
    _x_x3762 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3762 = b_10108; /*int*/
  }
  _x_x3761 = kk_hml__types_hc__repeat__str(ch, _x_x3762, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3761, s, _ctx);
}

kk_string_t kk_hml__types_hc__pad__right(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10114;
  kk_string_t _x_x3763 = kk_string_dup(s, _ctx); /*string*/
  y_10114 = kk_std_core_string_chars_fs_count(_x_x3763, _ctx); /*int*/
  kk_integer_t b_10112 = kk_integer_sub(width,y_10114,kk_context()); /*int*/;
  kk_string_t _x_x3764;
  kk_integer_t _x_x3765;
  bool _match_x2900 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10112,kk_context()); /*bool*/;
  if (_match_x2900) {
    kk_integer_drop(b_10112, _ctx);
    _x_x3765 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x3765 = b_10112; /*int*/
  }
  _x_x3764 = kk_hml__types_hc__repeat__str(ch, _x_x3765, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(s, _x_x3764, _ctx);
}

kk_string_t kk_hml__types_hc__center(kk_string_t s, kk_integer_t width, kk_string_t ch, kk_context_t* _ctx) { /* (s : string, width : int, ch : string) -> div string */ 
  kk_integer_t y_10118;
  kk_string_t _x_x3766 = kk_string_dup(s, _ctx); /*string*/
  y_10118 = kk_std_core_string_chars_fs_count(_x_x3766, _ctx); /*int*/
  kk_integer_t b_10116 = kk_integer_sub(width,y_10118,kk_context()); /*int*/;
  kk_integer_t total;
  bool _match_x2899 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10116,kk_context()); /*bool*/;
  if (_match_x2899) {
    kk_integer_drop(b_10116, _ctx);
    total = kk_integer_from_small(0); /*int*/
  }
  else {
    total = b_10116; /*int*/
  }
  kk_integer_t left;
  kk_integer_t _x_x3767 = kk_integer_dup(total, _ctx); /*int*/
  left = kk_integer_div(_x_x3767,(kk_integer_from_small(2)),kk_context()); /*int*/
  kk_integer_t right;
  kk_integer_t _x_x3768 = kk_integer_dup(left, _ctx); /*int*/
  right = kk_integer_sub(total,_x_x3768,kk_context()); /*int*/
  kk_string_t _x_x3769;
  kk_string_t _x_x3770;
  kk_string_t _x_x3771 = kk_string_dup(ch, _ctx); /*string*/
  _x_x3770 = kk_hml__types_hc__repeat__str(_x_x3771, left, _ctx); /*string*/
  _x_x3769 = kk_std_core_types__lp__plus__plus__rp_(_x_x3770, s, _ctx); /*string*/
  kk_string_t _x_x3772 = kk_hml__types_hc__repeat__str(ch, right, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x3769, _x_x3772, _ctx);
}

kk_string_t kk_hml__types_hc__capitalise(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2896;
  kk_integer_t _brw_x2897;
  kk_string_t _x_x3775 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2897 = kk_std_core_string_chars_fs_count(_x_x3775, _ctx); /*int*/
  bool _brw_x2898 = kk_integer_eq_borrow(_brw_x2897,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2897, _ctx);
  _match_x2896 = _brw_x2898; /*bool*/
  if (_match_x2896) {
    kk_string_drop(s, _ctx);
    return kk_string_empty();
  }
  {
    kk_string_t _x_x3777;
    kk_string_t _x_x3778;
    kk_std_core_types__list _x_x3779;
    kk_std_core_types__list _x_x3780;
    kk_string_t _x_x3781 = kk_string_dup(s, _ctx); /*string*/
    _x_x3780 = kk_std_core_string_list(_x_x3781, _ctx); /*list<char>*/
    _x_x3779 = kk_std_core_list_take(_x_x3780, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3778 = kk_std_core_string_listchar_fs_string(_x_x3779, _ctx); /*string*/
    _x_x3777 = kk_std_core_string_to_upper(_x_x3778, _ctx); /*string*/
    kk_string_t _x_x3782;
    kk_string_t _x_x3783;
    kk_std_core_types__list _x_x3784;
    kk_std_core_types__list _x_x3785 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3784 = kk_std_core_list_drop(_x_x3785, kk_integer_from_small(1), _ctx); /*list<10001>*/
    _x_x3783 = kk_std_core_string_listchar_fs_string(_x_x3784, _ctx); /*string*/
    _x_x3782 = kk_std_core_string_to_lower(_x_x3783, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x3777, _x_x3782, _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__capwords_fun3786__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__capwords_fun3786(kk_function_t _fself, kk_box_t _b_x236, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__capwords_fun3786(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__capwords_fun3786, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__capwords_fun3786(kk_function_t _fself, kk_box_t _b_x236, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3787;
  kk_string_t _x_x3788 = kk_string_unbox(_b_x236); /*string*/
  _x_x3787 = kk_hml__types_hc__capitalise(_x_x3788, _ctx); /*string*/
  return kk_string_box(_x_x3787);
}

kk_string_t kk_hml__types_hc__capwords(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  kk_std_core_types__list _b_x234_237 = kk_hml__types_hc__words(s, _ctx); /*list<string>*/;
  kk_std_core_types__list xs_10121;
  kk_function_t _brw_x2894 = kk_hml__types_new_hc__capwords_fun3786(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2895 = kk_std_core_list_map(_b_x234_237, _brw_x2894, _ctx); /*list<10002>*/;
  kk_function_drop(_brw_x2894, _ctx);
  xs_10121 = _brw_x2895; /*list<string>*/
  kk_string_t _x_x3789;
  kk_define_string_literal(static, _s_x3790, 1, " ", _ctx)
  _x_x3789 = kk_string_dup(_s_x3790, _ctx); /*string*/
  return kk_std_core_list_joinsep(xs_10121, _x_x3789, _ctx);
}

kk_string_t kk_hml__types_hc__removeprefix(kk_string_t s, kk_string_t pre, kk_context_t* _ctx) { /* (s : string, pre : string) -> string */ 
  kk_std_core_types__maybe maybe_10123;
  kk_string_t _x_x3794 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3795 = kk_string_dup(pre, _ctx); /*string*/
  maybe_10123 = kk_std_core_sslice_starts_with(_x_x3794, _x_x3795, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10123, _ctx)) {
    kk_box_t _box_x239 = maybe_10123._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10123, _ctx);
    kk_std_core_types__list _x_x3796;
    kk_std_core_types__list _x_x3797 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3798 = kk_std_core_string_chars_fs_count(pre, _ctx); /*int*/
    _x_x3796 = kk_std_core_list_drop(_x_x3797, _x_x3798, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3796, _ctx);
  }
  {
    kk_string_drop(pre, _ctx);
    return s;
  }
}

kk_string_t kk_hml__types_hc__removesuffix(kk_string_t s, kk_string_t suf, kk_context_t* _ctx) { /* (s : string, suf : string) -> string */ 
  kk_std_core_types__maybe maybe_10124;
  kk_string_t _x_x3799 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3800 = kk_string_dup(suf, _ctx); /*string*/
  maybe_10124 = kk_std_core_sslice_ends_with(_x_x3799, _x_x3800, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(maybe_10124, _ctx)) {
    kk_box_t _box_x240 = maybe_10124._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_10124, _ctx);
    kk_integer_t x_10125;
    kk_string_t _x_x3801 = kk_string_dup(s, _ctx); /*string*/
    x_10125 = kk_std_core_string_chars_fs_count(_x_x3801, _ctx); /*int*/
    kk_integer_t y_10126 = kk_std_core_string_chars_fs_count(suf, _ctx); /*int*/;
    kk_std_core_types__list _x_x3802;
    kk_std_core_types__list _x_x3803 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    kk_integer_t _x_x3804 = kk_integer_sub(x_10125,y_10126,kk_context()); /*int*/
    _x_x3802 = kk_std_core_list_take(_x_x3803, _x_x3804, _ctx); /*list<10001>*/
    return kk_std_core_string_listchar_fs_string(_x_x3802, _ctx);
  }
  {
    kk_string_drop(suf, _ctx);
    return s;
  }
}


// lift anonymous function
struct kk_hml__types_hc__all__digits_fun3810__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__all__digits_fun3810(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__all__digits_fun3810(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__all__digits_fun3810, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__all__digits_fun3810(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x3811;
  kk_char_t _x_x3812 = kk_char_unbox(_b_x243, KK_OWNED, _ctx); /*char*/
  _x_x3811 = kk_std_core_string_char_fs_string(_x_x3812, _ctx); /*string*/
  return kk_string_box(_x_x3811);
}


// lift anonymous function
struct kk_hml__types_hc__all__digits_fun3815__t {
  struct kk_function_s _base;
};
static bool kk_hml__types_hc__all__digits_fun3815(kk_function_t _fself, kk_box_t _b_x248, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__all__digits_fun3815(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__all__digits_fun3815, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static bool kk_hml__types_hc__all__digits_fun3815(kk_function_t _fself, kk_box_t _b_x248, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _match_x2882;
  kk_std_core_types__order _x_x3816;
  kk_string_t _brw_x2887;
  kk_box_t _x_x3817 = kk_box_dup(_b_x248, _ctx); /*10001*/
  _brw_x2887 = kk_string_unbox(_x_x3817); /*string*/
  kk_string_t _brw_x2886;
  kk_define_string_literal(static, _s_x3818, 1, "0", _ctx)
  _brw_x2886 = kk_string_dup(_s_x3818, _ctx); /*string*/
  kk_std_core_types__order _brw_x2888 = kk_std_core_string_cmp(_brw_x2887, _brw_x2886, _ctx); /*order*/;
  kk_string_drop(_brw_x2887, _ctx);
  kk_string_drop(_brw_x2886, _ctx);
  _x_x3816 = _brw_x2888; /*order*/
  _match_x2882 = kk_std_core_order__lp__gt__rp_(_x_x3816, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
  if (_match_x2882) {
    kk_std_core_types__order _x_x3819;
    kk_string_t _brw_x2884 = kk_string_unbox(_b_x248); /*string*/;
    kk_string_t _brw_x2883;
    kk_define_string_literal(static, _s_x3820, 1, "9", _ctx)
    _brw_x2883 = kk_string_dup(_s_x3820, _ctx); /*string*/
    kk_std_core_types__order _brw_x2885 = kk_std_core_string_cmp(_brw_x2884, _brw_x2883, _ctx); /*order*/;
    kk_string_drop(_brw_x2884, _ctx);
    kk_string_drop(_brw_x2883, _ctx);
    _x_x3819 = _brw_x2885; /*order*/
    return kk_std_core_order__lp__lt__rp_(_x_x3819, kk_std_core_types__new_Gt(_ctx), _ctx);
  }
  {
    kk_box_drop(_b_x248, _ctx);
    return false;
  }
}

bool kk_hml__types_hc__all__digits(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2881;
  kk_integer_t _brw_x2892;
  kk_string_t _x_x3805 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2892 = kk_std_core_string_chars_fs_count(_x_x3805, _ctx); /*int*/
  bool _brw_x2893 = kk_integer_eq_borrow(_brw_x2892,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2892, _ctx);
  _match_x2881 = _brw_x2893; /*bool*/
  if (_match_x2881) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_std_core_types__list chars;
    bool _match_x2889;
    kk_string_t _x_x3806 = kk_string_empty(); /*string*/
    kk_string_t _x_x3808 = kk_string_empty(); /*string*/
    _match_x2889 = kk_string_is_eq(_x_x3806,_x_x3808,kk_context()); /*bool*/
    if (_match_x2889) {
      kk_std_core_types__list _b_x241_244 = kk_std_core_string_list(s, _ctx); /*list<char>*/;
      kk_function_t _brw_x2890 = kk_hml__types_new_hc__all__digits_fun3810(_ctx); /*(10001) -> 10003 10002*/;
      kk_std_core_types__list _brw_x2891 = kk_std_core_list_map(_b_x241_244, _brw_x2890, _ctx); /*list<10002>*/;
      kk_function_drop(_brw_x2890, _ctx);
      chars = _brw_x2891; /*list<string>*/
    }
    else {
      kk_vector_t v_10011;
      kk_string_t _x_x3813 = kk_string_empty(); /*string*/
      v_10011 = kk_string_splitv(s,_x_x3813,kk_context()); /*vector<string>*/
      chars = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<string>*/
    }
    return kk_std_core_list_all(chars, kk_hml__types_new_hc__all__digits_fun3815(_ctx), _ctx);
  }
}

kk_std_core_types__maybe kk_hml__types_hc__parse__part(kk_string_t s, kk_integer_t start, kk_integer_t len, kk_context_t* _ctx) { /* (s : string, start : int, len : int) -> maybe<int> */ 
  kk_integer_t x_10136;
  kk_integer_t _x_x3821 = kk_integer_dup(start, _ctx); /*int*/
  x_10136 = kk_integer_add(_x_x3821,len,kk_context()); /*int*/
  kk_string_t s_0_10134;
  kk_std_core_types__list _x_x3822;
  kk_std_core_types__list _x_x3823;
  kk_std_core_types__list _x_x3824 = kk_std_core_string_list(s, _ctx); /*list<char>*/
  kk_integer_t _x_x3825 = kk_integer_dup(start, _ctx); /*int*/
  _x_x3823 = kk_std_core_list_drop(_x_x3824, _x_x3825, _ctx); /*list<10001>*/
  kk_integer_t _x_x3826 = kk_integer_sub(x_10136,start,kk_context()); /*int*/
  _x_x3822 = kk_std_core_list_take(_x_x3823, _x_x3826, _ctx); /*list<10001>*/
  s_0_10134 = kk_std_core_string_listchar_fs_string(_x_x3822, _ctx); /*string*/
  bool _x_x3827;
  kk_std_core_types__optional _match_x2880 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2880, _ctx)) {
    kk_box_t _box_x252 = _match_x2880._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x252);
    kk_std_core_types__optional_drop(_match_x2880, _ctx);
    _x_x3827 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2880, _ctx);
    _x_x3827 = false; /*bool*/
  }
  return kk_std_core_int_xparse(s_0_10134, _x_x3827, _ctx);
}

bool kk_hml__types_hc__in__range(kk_integer_t n, kk_integer_t lo, kk_integer_t hi, kk_context_t* _ctx) { /* (n : int, lo : int, hi : int) -> bool */ 
  bool _match_x2877;
  bool _brw_x2879 = kk_integer_gte_borrow(n,lo,kk_context()); /*bool*/;
  kk_integer_drop(lo, _ctx);
  _match_x2877 = _brw_x2879; /*bool*/
  if (_match_x2877) {
    bool _brw_x2878 = kk_integer_lte_borrow(n,hi,kk_context()); /*bool*/;
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return _brw_x2878;
  }
  {
    kk_integer_drop(n, _ctx);
    kk_integer_drop(hi, _ctx);
    return false;
  }
}

kk_integer_t kk_hml__types_hc__days__in__month(kk_integer_t year, kk_integer_t month, kk_context_t* _ctx) { /* (year : int, month : int) -> int */ 
  if (kk_integer_eq_borrow(month, kk_integer_from_small(1), _ctx)) {
    kk_integer_drop(year, _ctx);
    kk_integer_drop(month, _ctx);
    return kk_integer_from_small(31);
  }
  if (kk_integer_eq_borrow(month, kk_integer_from_small(2), _ctx)) {
    kk_integer_drop(month, _ctx);
    bool _match_x2865;
    kk_integer_t _brw_x2875;
    kk_integer_t _x_x3828 = kk_integer_dup(year, _ctx); /*int*/
    _brw_x2875 = kk_integer_mod(_x_x3828,(kk_integer_from_small(4)),kk_context()); /*int*/
    bool _brw_x2876 = kk_integer_eq_borrow(_brw_x2875,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2875, _ctx);
    _match_x2865 = _brw_x2876; /*bool*/
    if (_match_x2865) {
      bool _match_x2869;
      kk_integer_t _brw_x2873;
      kk_integer_t _x_x3829 = kk_integer_dup(year, _ctx); /*int*/
      _brw_x2873 = kk_integer_mod(_x_x3829,(kk_integer_from_small(100)),kk_context()); /*int*/
      bool _brw_x2874 = kk_integer_neq_borrow(_brw_x2873,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2873, _ctx);
      _match_x2869 = _brw_x2874; /*bool*/
      if (_match_x2869) {
        kk_integer_drop(year, _ctx);
        return kk_integer_from_small(29);
      }
      {
        bool _match_x2870;
        kk_integer_t _brw_x2871 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
        bool _brw_x2872 = kk_integer_eq_borrow(_brw_x2871,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2871, _ctx);
        _match_x2870 = _brw_x2872; /*bool*/
        if (_match_x2870) {
          return kk_integer_from_small(29);
        }
        {
          return kk_integer_from_small(28);
        }
      }
    }
    {
      bool _match_x2866;
      kk_integer_t _brw_x2867 = kk_integer_mod(year,(kk_integer_from_small(400)),kk_context()); /*int*/;
      bool _brw_x2868 = kk_integer_eq_borrow(_brw_x2867,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2867, _ctx);
      _match_x2866 = _brw_x2868; /*bool*/
      if (_match_x2866) {
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

bool kk_hml__types_hc__is__valid__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2850;
  kk_integer_t _brw_x2863;
  kk_string_t _x_x3830 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2863 = kk_std_core_string_chars_fs_count(_x_x3830, _ctx); /*int*/
  bool _brw_x2864 = kk_integer_neq_borrow(_brw_x2863,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2863, _ctx);
  _match_x2850 = _brw_x2864; /*bool*/
  if (_match_x2850) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2851;
    kk_string_t _x_x3831;
    kk_std_core_types__list _x_x3832;
    kk_std_core_types__list _x_x3833;
    kk_std_core_types__list _x_x3834;
    kk_string_t _x_x3835 = kk_string_dup(s, _ctx); /*string*/
    _x_x3834 = kk_std_core_string_list(_x_x3835, _ctx); /*list<char>*/
    _x_x3833 = kk_std_core_list_drop(_x_x3834, kk_integer_from_small(4), _ctx); /*list<10001>*/
    kk_integer_t _x_x3836 = kk_integer_add_small_const(kk_integer_from_small(5), -4, _ctx); /*int*/
    _x_x3832 = kk_std_core_list_take(_x_x3833, _x_x3836, _ctx); /*list<10001>*/
    _x_x3831 = kk_std_core_string_listchar_fs_string(_x_x3832, _ctx); /*string*/
    kk_string_t _x_x3837;
    kk_define_string_literal(static, _s_x3838, 1, "-", _ctx)
    _x_x3837 = kk_string_dup(_s_x3838, _ctx); /*string*/
    _match_x2851 = kk_string_is_neq(_x_x3831,_x_x3837,kk_context()); /*bool*/
    if (_match_x2851) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool _match_x2852;
      kk_string_t _x_x3839;
      kk_std_core_types__list _x_x3840;
      kk_std_core_types__list _x_x3841;
      kk_std_core_types__list _x_x3842;
      kk_string_t _x_x3843 = kk_string_dup(s, _ctx); /*string*/
      _x_x3842 = kk_std_core_string_list(_x_x3843, _ctx); /*list<char>*/
      _x_x3841 = kk_std_core_list_drop(_x_x3842, kk_integer_from_small(7), _ctx); /*list<10001>*/
      kk_integer_t _x_x3844 = kk_integer_add_small_const(kk_integer_from_small(8), -7, _ctx); /*int*/
      _x_x3840 = kk_std_core_list_take(_x_x3841, _x_x3844, _ctx); /*list<10001>*/
      _x_x3839 = kk_std_core_string_listchar_fs_string(_x_x3840, _ctx); /*string*/
      kk_string_t _x_x3845;
      kk_define_string_literal(static, _s_x3846, 1, "-", _ctx)
      _x_x3845 = kk_string_dup(_s_x3846, _ctx); /*string*/
      _match_x2852 = kk_string_is_neq(_x_x3839,_x_x3845,kk_context()); /*bool*/
      if (_match_x2852) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        bool b_10144;
        kk_string_t _x_x3847;
        kk_std_core_types__list _x_x3848;
        kk_std_core_types__list _x_x3849;
        kk_std_core_types__list _x_x3850;
        kk_string_t _x_x3851 = kk_string_dup(s, _ctx); /*string*/
        _x_x3850 = kk_std_core_string_list(_x_x3851, _ctx); /*list<char>*/
        _x_x3849 = kk_std_core_list_drop(_x_x3850, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3852 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
        _x_x3848 = kk_std_core_list_take(_x_x3849, _x_x3852, _ctx); /*list<10001>*/
        _x_x3847 = kk_std_core_string_listchar_fs_string(_x_x3848, _ctx); /*string*/
        b_10144 = kk_hml__types_hc__all__digits(_x_x3847, _ctx); /*bool*/
        if (b_10144) {
          bool b_0_10147;
          kk_string_t _x_x3853;
          kk_std_core_types__list _x_x3854;
          kk_std_core_types__list _x_x3855;
          kk_std_core_types__list _x_x3856;
          kk_string_t _x_x3857 = kk_string_dup(s, _ctx); /*string*/
          _x_x3856 = kk_std_core_string_list(_x_x3857, _ctx); /*list<char>*/
          _x_x3855 = kk_std_core_list_drop(_x_x3856, kk_integer_from_small(5), _ctx); /*list<10001>*/
          kk_integer_t _x_x3858 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
          _x_x3854 = kk_std_core_list_take(_x_x3855, _x_x3858, _ctx); /*list<10001>*/
          _x_x3853 = kk_std_core_string_listchar_fs_string(_x_x3854, _ctx); /*string*/
          b_0_10147 = kk_hml__types_hc__all__digits(_x_x3853, _ctx); /*bool*/
          if (b_0_10147) {
            bool b_1_10150;
            kk_string_t _x_x3859;
            kk_std_core_types__list _x_x3860;
            kk_std_core_types__list _x_x3861;
            kk_std_core_types__list _x_x3862;
            kk_string_t _x_x3863 = kk_string_dup(s, _ctx); /*string*/
            _x_x3862 = kk_std_core_string_list(_x_x3863, _ctx); /*list<char>*/
            _x_x3861 = kk_std_core_list_drop(_x_x3862, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3864 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
            _x_x3860 = kk_std_core_list_take(_x_x3861, _x_x3864, _ctx); /*list<10001>*/
            _x_x3859 = kk_std_core_string_listchar_fs_string(_x_x3860, _ctx); /*string*/
            b_1_10150 = kk_hml__types_hc__all__digits(_x_x3859, _ctx); /*bool*/
            if (b_1_10150) {
              kk_string_t s_0_10153;
              kk_std_core_types__list _x_x3865;
              kk_std_core_types__list _x_x3866;
              kk_std_core_types__list _x_x3867;
              kk_string_t _x_x3868 = kk_string_dup(s, _ctx); /*string*/
              _x_x3867 = kk_std_core_string_list(_x_x3868, _ctx); /*list<char>*/
              _x_x3866 = kk_std_core_list_drop(_x_x3867, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x3869 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
              _x_x3865 = kk_std_core_list_take(_x_x3866, _x_x3869, _ctx); /*list<10001>*/
              s_0_10153 = kk_std_core_string_listchar_fs_string(_x_x3865, _ctx); /*string*/
              kk_std_core_types__maybe _match_x2853;
              bool _x_x3870;
              kk_std_core_types__optional _match_x2862 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
              if (kk_std_core_types__is_Optional(_match_x2862, _ctx)) {
                kk_box_t _box_x253 = _match_x2862._cons._Optional.value;
                bool _uniq_hex_581 = kk_bool_unbox(_box_x253);
                kk_std_core_types__optional_drop(_match_x2862, _ctx);
                _x_x3870 = _uniq_hex_581; /*bool*/
              }
              else {
                kk_std_core_types__optional_drop(_match_x2862, _ctx);
                _x_x3870 = false; /*bool*/
              }
              _match_x2853 = kk_std_core_int_xparse(s_0_10153, _x_x3870, _ctx); /*maybe<int>*/
              if (kk_std_core_types__is_Just(_match_x2853, _ctx)) {
                kk_box_t _box_x254 = _match_x2853._cons.Just.value;
                kk_integer_t y_5 = kk_integer_unbox(_box_x254, _ctx);
                kk_integer_dup(y_5, _ctx);
                kk_std_core_types__maybe_drop(_match_x2853, _ctx);
                kk_string_t s_1_10157;
                kk_std_core_types__list _x_x3871;
                kk_std_core_types__list _x_x3872;
                kk_std_core_types__list _x_x3873;
                kk_string_t _x_x3874 = kk_string_dup(s, _ctx); /*string*/
                _x_x3873 = kk_std_core_string_list(_x_x3874, _ctx); /*list<char>*/
                _x_x3872 = kk_std_core_list_drop(_x_x3873, kk_integer_from_small(5), _ctx); /*list<10001>*/
                kk_integer_t _x_x3875 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
                _x_x3871 = kk_std_core_list_take(_x_x3872, _x_x3875, _ctx); /*list<10001>*/
                s_1_10157 = kk_std_core_string_listchar_fs_string(_x_x3871, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2854;
                bool _x_x3876;
                kk_std_core_types__optional _match_x2861 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2861, _ctx)) {
                  kk_box_t _box_x255 = _match_x2861._cons._Optional.value;
                  bool _uniq_hex_581_0 = kk_bool_unbox(_box_x255);
                  kk_std_core_types__optional_drop(_match_x2861, _ctx);
                  _x_x3876 = _uniq_hex_581_0; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2861, _ctx);
                  _x_x3876 = false; /*bool*/
                }
                _match_x2854 = kk_std_core_int_xparse(s_1_10157, _x_x3876, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2854, _ctx)) {
                  kk_box_t _box_x256 = _match_x2854._cons.Just.value;
                  kk_integer_t m = kk_integer_unbox(_box_x256, _ctx);
                  kk_integer_dup(m, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2854, _ctx);
                  kk_string_t s_2_10161;
                  kk_std_core_types__list _x_x3877;
                  kk_std_core_types__list _x_x3878;
                  kk_std_core_types__list _x_x3879 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x3878 = kk_std_core_list_drop(_x_x3879, kk_integer_from_small(8), _ctx); /*list<10001>*/
                  kk_integer_t _x_x3880 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
                  _x_x3877 = kk_std_core_list_take(_x_x3878, _x_x3880, _ctx); /*list<10001>*/
                  s_2_10161 = kk_std_core_string_listchar_fs_string(_x_x3877, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2855;
                  bool _x_x3881;
                  kk_std_core_types__optional _match_x2860 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2860, _ctx)) {
                    kk_box_t _box_x257 = _match_x2860._cons._Optional.value;
                    bool _uniq_hex_581_1 = kk_bool_unbox(_box_x257);
                    kk_std_core_types__optional_drop(_match_x2860, _ctx);
                    _x_x3881 = _uniq_hex_581_1; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2860, _ctx);
                    _x_x3881 = false; /*bool*/
                  }
                  _match_x2855 = kk_std_core_int_xparse(s_2_10161, _x_x3881, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2855, _ctx)) {
                    kk_box_t _box_x258 = _match_x2855._cons.Just.value;
                    kk_integer_t d = kk_integer_unbox(_box_x258, _ctx);
                    kk_integer_dup(d, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2855, _ctx);
                    bool _match_x2856 = kk_integer_gte_borrow(m,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                    if (_match_x2856) {
                      bool _match_x2857 = kk_integer_lte_borrow(m,(kk_integer_from_small(12)),kk_context()); /*bool*/;
                      if (_match_x2857) {
                        kk_integer_t hi_0_10170 = kk_hml__types_hc__days__in__month(y_5, m, _ctx); /*int*/;
                        bool _match_x2858 = kk_integer_gte_borrow(d,(kk_integer_from_small(1)),kk_context()); /*bool*/;
                        if (_match_x2858) {
                          bool _brw_x2859 = kk_integer_lte_borrow(d,hi_0_10170,kk_context()); /*bool*/;
                          kk_integer_drop(d, _ctx);
                          kk_integer_drop(hi_0_10170, _ctx);
                          return _brw_x2859;
                        }
                        {
                          kk_integer_drop(hi_0_10170, _ctx);
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

bool kk_hml__types_hc__is__valid__time__short(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  kk_string_t s_0_10171;
  kk_std_core_types__list _x_x3882;
  kk_std_core_types__list _x_x3883;
  kk_std_core_types__list _x_x3884;
  kk_string_t _x_x3885 = kk_string_dup(s, _ctx); /*string*/
  _x_x3884 = kk_std_core_string_list(_x_x3885, _ctx); /*list<char>*/
  _x_x3883 = kk_std_core_list_drop(_x_x3884, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x3886 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
  _x_x3882 = kk_std_core_list_take(_x_x3883, _x_x3886, _ctx); /*list<10001>*/
  s_0_10171 = kk_std_core_string_listchar_fs_string(_x_x3882, _ctx); /*string*/
  kk_std_core_types__maybe _match_x2841;
  bool _x_x3887;
  kk_std_core_types__optional _match_x2849 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x2849, _ctx)) {
    kk_box_t _box_x259 = _match_x2849._cons._Optional.value;
    bool _uniq_hex_581 = kk_bool_unbox(_box_x259);
    kk_std_core_types__optional_drop(_match_x2849, _ctx);
    _x_x3887 = _uniq_hex_581; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x2849, _ctx);
    _x_x3887 = false; /*bool*/
  }
  _match_x2841 = kk_std_core_int_xparse(s_0_10171, _x_x3887, _ctx); /*maybe<int>*/
  if (kk_std_core_types__is_Just(_match_x2841, _ctx)) {
    kk_box_t _box_x260 = _match_x2841._cons.Just.value;
    kk_integer_t h = kk_integer_unbox(_box_x260, _ctx);
    kk_integer_dup(h, _ctx);
    kk_std_core_types__maybe_drop(_match_x2841, _ctx);
    kk_string_t s_1_10175;
    kk_std_core_types__list _x_x3888;
    kk_std_core_types__list _x_x3889;
    kk_std_core_types__list _x_x3890 = kk_std_core_string_list(s, _ctx); /*list<char>*/
    _x_x3889 = kk_std_core_list_drop(_x_x3890, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3891 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3888 = kk_std_core_list_take(_x_x3889, _x_x3891, _ctx); /*list<10001>*/
    s_1_10175 = kk_std_core_string_listchar_fs_string(_x_x3888, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2842;
    bool _x_x3892;
    kk_std_core_types__optional _match_x2848 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2848, _ctx)) {
      kk_box_t _box_x261 = _match_x2848._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x261);
      kk_std_core_types__optional_drop(_match_x2848, _ctx);
      _x_x3892 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2848, _ctx);
      _x_x3892 = false; /*bool*/
    }
    _match_x2842 = kk_std_core_int_xparse(s_1_10175, _x_x3892, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2842, _ctx)) {
      kk_box_t _box_x262 = _match_x2842._cons.Just.value;
      kk_integer_t m = kk_integer_unbox(_box_x262, _ctx);
      kk_integer_dup(m, _ctx);
      kk_std_core_types__maybe_drop(_match_x2842, _ctx);
      bool _match_x2843 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      if (_match_x2843) {
        bool _match_x2844;
        bool _brw_x2847 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
        kk_integer_drop(h, _ctx);
        _match_x2844 = _brw_x2847; /*bool*/
        if (_match_x2844) {
          bool _match_x2845 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2845) {
            bool _brw_x2846 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
            kk_integer_drop(m, _ctx);
            return _brw_x2846;
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

bool kk_hml__types_hc__is__valid__time__full(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool b_10185;
  kk_string_t _x_x3893;
  kk_std_core_types__list _x_x3894;
  kk_std_core_types__list _x_x3895;
  kk_std_core_types__list _x_x3896;
  kk_string_t _x_x3897 = kk_string_dup(s, _ctx); /*string*/
  _x_x3896 = kk_std_core_string_list(_x_x3897, _ctx); /*list<char>*/
  _x_x3895 = kk_std_core_list_drop(_x_x3896, kk_integer_from_small(6), _ctx); /*list<10001>*/
  kk_integer_t _x_x3898 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
  _x_x3894 = kk_std_core_list_take(_x_x3895, _x_x3898, _ctx); /*list<10001>*/
  _x_x3893 = kk_std_core_string_listchar_fs_string(_x_x3894, _ctx); /*string*/
  b_10185 = kk_hml__types_hc__all__digits(_x_x3893, _ctx); /*bool*/
  if (b_10185) {
    kk_string_t s_0_10188;
    kk_std_core_types__list _x_x3899;
    kk_std_core_types__list _x_x3900;
    kk_std_core_types__list _x_x3901;
    kk_string_t _x_x3902 = kk_string_dup(s, _ctx); /*string*/
    _x_x3901 = kk_std_core_string_list(_x_x3902, _ctx); /*list<char>*/
    _x_x3900 = kk_std_core_list_drop(_x_x3901, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x3903 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
    _x_x3899 = kk_std_core_list_take(_x_x3900, _x_x3903, _ctx); /*list<10001>*/
    s_0_10188 = kk_std_core_string_listchar_fs_string(_x_x3899, _ctx); /*string*/
    kk_std_core_types__maybe hh;
    bool _x_x3904;
    kk_std_core_types__optional _match_x2840 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2840, _ctx)) {
      kk_box_t _box_x263 = _match_x2840._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x263);
      kk_std_core_types__optional_drop(_match_x2840, _ctx);
      _x_x3904 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2840, _ctx);
      _x_x3904 = false; /*bool*/
    }
    hh = kk_std_core_int_xparse(s_0_10188, _x_x3904, _ctx); /*maybe<int>*/
    kk_string_t s_1_10192;
    kk_std_core_types__list _x_x3905;
    kk_std_core_types__list _x_x3906;
    kk_std_core_types__list _x_x3907;
    kk_string_t _x_x3908 = kk_string_dup(s, _ctx); /*string*/
    _x_x3907 = kk_std_core_string_list(_x_x3908, _ctx); /*list<char>*/
    _x_x3906 = kk_std_core_list_drop(_x_x3907, kk_integer_from_small(3), _ctx); /*list<10001>*/
    kk_integer_t _x_x3909 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
    _x_x3905 = kk_std_core_list_take(_x_x3906, _x_x3909, _ctx); /*list<10001>*/
    s_1_10192 = kk_std_core_string_listchar_fs_string(_x_x3905, _ctx); /*string*/
    kk_std_core_types__maybe mm;
    bool _x_x3910;
    kk_std_core_types__optional _match_x2839 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2839, _ctx)) {
      kk_box_t _box_x264 = _match_x2839._cons._Optional.value;
      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x264);
      kk_std_core_types__optional_drop(_match_x2839, _ctx);
      _x_x3910 = _uniq_hex_581_0; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2839, _ctx);
      _x_x3910 = false; /*bool*/
    }
    mm = kk_std_core_int_xparse(s_1_10192, _x_x3910, _ctx); /*maybe<int>*/
    kk_string_t s_2_10196;
    kk_std_core_types__list _x_x3911;
    kk_std_core_types__list _x_x3912;
    kk_std_core_types__list _x_x3913;
    kk_string_t _x_x3914 = kk_string_dup(s, _ctx); /*string*/
    _x_x3913 = kk_std_core_string_list(_x_x3914, _ctx); /*list<char>*/
    _x_x3912 = kk_std_core_list_drop(_x_x3913, kk_integer_from_small(6), _ctx); /*list<10001>*/
    kk_integer_t _x_x3915 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
    _x_x3911 = kk_std_core_list_take(_x_x3912, _x_x3915, _ctx); /*list<10001>*/
    s_2_10196 = kk_std_core_string_listchar_fs_string(_x_x3911, _ctx); /*string*/
    kk_std_core_types__maybe ss;
    bool _x_x3916;
    kk_std_core_types__optional _match_x2838 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2838, _ctx)) {
      kk_box_t _box_x265 = _match_x2838._cons._Optional.value;
      bool _uniq_hex_581_1 = kk_bool_unbox(_box_x265);
      kk_std_core_types__optional_drop(_match_x2838, _ctx);
      _x_x3916 = _uniq_hex_581_1; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2838, _ctx);
      _x_x3916 = false; /*bool*/
    }
    ss = kk_std_core_int_xparse(s_2_10196, _x_x3916, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(hh, _ctx)) {
      kk_box_t _box_x266 = hh._cons.Just.value;
      kk_integer_t h = kk_integer_unbox(_box_x266, _ctx);
      kk_integer_dup(h, _ctx);
      kk_std_core_types__maybe_drop(hh, _ctx);
      if (kk_std_core_types__is_Just(mm, _ctx)) {
        kk_box_t _box_x267 = mm._cons.Just.value;
        kk_integer_t m = kk_integer_unbox(_box_x267, _ctx);
        kk_integer_dup(m, _ctx);
        kk_std_core_types__maybe_drop(mm, _ctx);
        if (kk_std_core_types__is_Just(ss, _ctx)) {
          kk_box_t _box_x268 = ss._cons.Just.value;
          kk_integer_t sec = kk_integer_unbox(_box_x268, _ctx);
          kk_integer_dup(sec, _ctx);
          kk_std_core_types__maybe_drop(ss, _ctx);
          bool base__ok;
          bool _match_x2830 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          if (_match_x2830) {
            bool _match_x2831;
            bool _brw_x2837 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
            kk_integer_drop(h, _ctx);
            _match_x2831 = _brw_x2837; /*bool*/
            if (_match_x2831) {
              bool _match_x2832 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
              if (_match_x2832) {
                bool _match_x2833;
                bool _brw_x2836 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                kk_integer_drop(m, _ctx);
                _match_x2833 = _brw_x2836; /*bool*/
                if (_match_x2833) {
                  bool _match_x2834 = kk_integer_gte_borrow(sec,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                  if (_match_x2834) {
                    bool _brw_x2835 = kk_integer_lte_borrow(sec,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                    kk_integer_drop(sec, _ctx);
                    base__ok = _brw_x2835; /*bool*/
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
          bool _match_x2823;
          kk_integer_t _brw_x2828;
          kk_string_t _x_x3917 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2828 = kk_std_core_string_chars_fs_count(_x_x3917, _ctx); /*int*/
          bool _brw_x2829 = kk_integer_eq_borrow(_brw_x2828,(kk_integer_from_small(8)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2828, _ctx);
          _match_x2823 = _brw_x2829; /*bool*/
          if (_match_x2823) {
            kk_string_drop(s, _ctx);
            return base__ok;
          }
          {
            bool _match_x2824;
            kk_string_t _x_x3918;
            kk_std_core_types__list _x_x3919;
            kk_std_core_types__list _x_x3920;
            kk_std_core_types__list _x_x3921;
            kk_string_t _x_x3922 = kk_string_dup(s, _ctx); /*string*/
            _x_x3921 = kk_std_core_string_list(_x_x3922, _ctx); /*list<char>*/
            _x_x3920 = kk_std_core_list_drop(_x_x3921, kk_integer_from_small(8), _ctx); /*list<10001>*/
            kk_integer_t _x_x3923 = kk_integer_add_small_const(kk_integer_from_small(9), -8, _ctx); /*int*/
            _x_x3919 = kk_std_core_list_take(_x_x3920, _x_x3923, _ctx); /*list<10001>*/
            _x_x3918 = kk_std_core_string_listchar_fs_string(_x_x3919, _ctx); /*string*/
            kk_string_t _x_x3924;
            kk_define_string_literal(static, _s_x3925, 1, ".", _ctx)
            _x_x3924 = kk_string_dup(_s_x3925, _ctx); /*string*/
            _match_x2824 = kk_string_is_eq(_x_x3918,_x_x3924,kk_context()); /*bool*/
            if (_match_x2824) {
              kk_string_t frac;
              kk_std_core_types__list _x_x3926;
              kk_std_core_types__list _x_x3927 = kk_std_core_string_list(s, _ctx); /*list<char>*/
              _x_x3926 = kk_std_core_list_drop(_x_x3927, kk_integer_from_small(9), _ctx); /*list<10001>*/
              frac = kk_std_core_string_listchar_fs_string(_x_x3926, _ctx); /*string*/
              if (base__ok) {
                bool _match_x2825;
                kk_integer_t _brw_x2826;
                kk_string_t _x_x3928 = kk_string_dup(frac, _ctx); /*string*/
                _brw_x2826 = kk_std_core_string_chars_fs_count(_x_x3928, _ctx); /*int*/
                bool _brw_x2827 = kk_integer_gt_borrow(_brw_x2826,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                kk_integer_drop(_brw_x2826, _ctx);
                _match_x2825 = _brw_x2827; /*bool*/
                if (_match_x2825) {
                  return kk_hml__types_hc__all__digits(frac, _ctx);
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

bool kk_hml__types_hc__is__valid__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2812;
  kk_integer_t _brw_x2821;
  kk_string_t _x_x3929 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2821 = kk_std_core_string_chars_fs_count(_x_x3929, _ctx); /*int*/
  bool _brw_x2822 = kk_integer_lt_borrow(_brw_x2821,(kk_integer_from_small(5)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2821, _ctx);
  _match_x2812 = _brw_x2822; /*bool*/
  if (_match_x2812) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    bool _match_x2813;
    kk_string_t _x_x3930;
    kk_std_core_types__list _x_x3931;
    kk_std_core_types__list _x_x3932;
    kk_std_core_types__list _x_x3933;
    kk_string_t _x_x3934 = kk_string_dup(s, _ctx); /*string*/
    _x_x3933 = kk_std_core_string_list(_x_x3934, _ctx); /*list<char>*/
    _x_x3932 = kk_std_core_list_drop(_x_x3933, kk_integer_from_small(2), _ctx); /*list<10001>*/
    kk_integer_t _x_x3935 = kk_integer_add_small_const(kk_integer_from_small(3), -2, _ctx); /*int*/
    _x_x3931 = kk_std_core_list_take(_x_x3932, _x_x3935, _ctx); /*list<10001>*/
    _x_x3930 = kk_std_core_string_listchar_fs_string(_x_x3931, _ctx); /*string*/
    kk_string_t _x_x3936;
    kk_define_string_literal(static, _s_x3937, 1, ":", _ctx)
    _x_x3936 = kk_string_dup(_s_x3937, _ctx); /*string*/
    _match_x2813 = kk_string_is_neq(_x_x3930,_x_x3936,kk_context()); /*bool*/
    if (_match_x2813) {
      kk_string_drop(s, _ctx);
      return false;
    }
    {
      bool b_10213;
      kk_string_t _x_x3938;
      kk_std_core_types__list _x_x3939;
      kk_std_core_types__list _x_x3940;
      kk_std_core_types__list _x_x3941;
      kk_string_t _x_x3942 = kk_string_dup(s, _ctx); /*string*/
      _x_x3941 = kk_std_core_string_list(_x_x3942, _ctx); /*list<char>*/
      _x_x3940 = kk_std_core_list_drop(_x_x3941, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x3943 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x3939 = kk_std_core_list_take(_x_x3940, _x_x3943, _ctx); /*list<10001>*/
      _x_x3938 = kk_std_core_string_listchar_fs_string(_x_x3939, _ctx); /*string*/
      b_10213 = kk_hml__types_hc__all__digits(_x_x3938, _ctx); /*bool*/
      if (b_10213) {
        bool b_0_10216;
        kk_string_t _x_x3944;
        kk_std_core_types__list _x_x3945;
        kk_std_core_types__list _x_x3946;
        kk_std_core_types__list _x_x3947;
        kk_string_t _x_x3948 = kk_string_dup(s, _ctx); /*string*/
        _x_x3947 = kk_std_core_string_list(_x_x3948, _ctx); /*list<char>*/
        _x_x3946 = kk_std_core_list_drop(_x_x3947, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x3949 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x3945 = kk_std_core_list_take(_x_x3946, _x_x3949, _ctx); /*list<10001>*/
        _x_x3944 = kk_std_core_string_listchar_fs_string(_x_x3945, _ctx); /*string*/
        b_0_10216 = kk_hml__types_hc__all__digits(_x_x3944, _ctx); /*bool*/
        if (b_0_10216) {
          bool _match_x2814;
          kk_integer_t _brw_x2819;
          kk_string_t _x_x3950 = kk_string_dup(s, _ctx); /*string*/
          _brw_x2819 = kk_std_core_string_chars_fs_count(_x_x3950, _ctx); /*int*/
          bool _brw_x2820 = kk_integer_eq_borrow(_brw_x2819,(kk_integer_from_small(5)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2819, _ctx);
          _match_x2814 = _brw_x2820; /*bool*/
          if (_match_x2814) {
            return kk_hml__types_hc__is__valid__time__short(s, _ctx);
          }
          {
            bool _match_x2815;
            kk_integer_t _brw_x2817;
            kk_string_t _x_x3951 = kk_string_dup(s, _ctx); /*string*/
            _brw_x2817 = kk_std_core_string_chars_fs_count(_x_x3951, _ctx); /*int*/
            bool _brw_x2818 = kk_integer_gte_borrow(_brw_x2817,(kk_integer_from_small(8)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2817, _ctx);
            _match_x2815 = _brw_x2818; /*bool*/
            if (_match_x2815) {
              bool _match_x2816;
              kk_string_t _x_x3952;
              kk_std_core_types__list _x_x3953;
              kk_std_core_types__list _x_x3954;
              kk_std_core_types__list _x_x3955;
              kk_string_t _x_x3956 = kk_string_dup(s, _ctx); /*string*/
              _x_x3955 = kk_std_core_string_list(_x_x3956, _ctx); /*list<char>*/
              _x_x3954 = kk_std_core_list_drop(_x_x3955, kk_integer_from_small(5), _ctx); /*list<10001>*/
              kk_integer_t _x_x3957 = kk_integer_add_small_const(kk_integer_from_small(6), -5, _ctx); /*int*/
              _x_x3953 = kk_std_core_list_take(_x_x3954, _x_x3957, _ctx); /*list<10001>*/
              _x_x3952 = kk_std_core_string_listchar_fs_string(_x_x3953, _ctx); /*string*/
              kk_string_t _x_x3958;
              kk_define_string_literal(static, _s_x3959, 1, ":", _ctx)
              _x_x3958 = kk_string_dup(_s_x3959, _ctx); /*string*/
              _match_x2816 = kk_string_is_eq(_x_x3952,_x_x3958,kk_context()); /*bool*/
              if (_match_x2816) {
                return kk_hml__types_hc__is__valid__time__full(s, _ctx);
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

bool kk_hml__types_hc__is__valid__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2785;
  kk_string_t _x_x3960 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x3961;
  kk_define_string_literal(static, _s_x3962, 1, "Z", _ctx)
  _x_x3961 = kk_string_dup(_s_x3962, _ctx); /*string*/
  _match_x2785 = kk_string_is_eq(_x_x3960,_x_x3961,kk_context()); /*bool*/
  if (_match_x2785) {
    kk_string_drop(s, _ctx);
    return true;
  }
  {
    bool _match_x2786;
    kk_string_t _x_x3963 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x3964;
    kk_define_string_literal(static, _s_x3965, 1, "z", _ctx)
    _x_x3964 = kk_string_dup(_s_x3965, _ctx); /*string*/
    _match_x2786 = kk_string_is_eq(_x_x3963,_x_x3964,kk_context()); /*bool*/
    if (_match_x2786) {
      kk_string_drop(s, _ctx);
      return true;
    }
    {
      bool _match_x2787;
      kk_integer_t _brw_x2810;
      kk_string_t _x_x3966 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2810 = kk_std_core_string_chars_fs_count(_x_x3966, _ctx); /*int*/
      bool _brw_x2811 = kk_integer_neq_borrow(_brw_x2810,(kk_integer_from_small(6)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2810, _ctx);
      _match_x2787 = _brw_x2811; /*bool*/
      if (_match_x2787) {
        kk_string_drop(s, _ctx);
        return false;
      }
      {
        kk_string_t hc__sign_0;
        kk_std_core_types__list _x_x3967;
        kk_std_core_types__list _x_x3968;
        kk_std_core_types__list _x_x3969;
        kk_string_t _x_x3970 = kk_string_dup(s, _ctx); /*string*/
        _x_x3969 = kk_std_core_string_list(_x_x3970, _ctx); /*list<char>*/
        _x_x3968 = kk_std_core_list_drop(_x_x3969, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x3971 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x3967 = kk_std_core_list_take(_x_x3968, _x_x3971, _ctx); /*list<10001>*/
        hc__sign_0 = kk_std_core_string_listchar_fs_string(_x_x3967, _ctx); /*string*/
        bool _match_x2788;
        kk_string_t _x_x3972 = kk_string_dup(hc__sign_0, _ctx); /*string*/
        kk_string_t _x_x3973;
        kk_define_string_literal(static, _s_x3974, 1, "+", _ctx)
        _x_x3973 = kk_string_dup(_s_x3974, _ctx); /*string*/
        _match_x2788 = kk_string_is_neq(_x_x3972,_x_x3973,kk_context()); /*bool*/
        if (_match_x2788) {
          bool _match_x2799;
          kk_string_t _x_x3975;
          kk_define_string_literal(static, _s_x3976, 1, "-", _ctx)
          _x_x3975 = kk_string_dup(_s_x3976, _ctx); /*string*/
          _match_x2799 = kk_string_is_neq(hc__sign_0,_x_x3975,kk_context()); /*bool*/
          if (_match_x2799) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool _match_x2800;
            kk_string_t _x_x3977;
            kk_std_core_types__list _x_x3978;
            kk_std_core_types__list _x_x3979;
            kk_std_core_types__list _x_x3980;
            kk_string_t _x_x3981 = kk_string_dup(s, _ctx); /*string*/
            _x_x3980 = kk_std_core_string_list(_x_x3981, _ctx); /*list<char>*/
            _x_x3979 = kk_std_core_list_drop(_x_x3980, kk_integer_from_small(3), _ctx); /*list<10001>*/
            kk_integer_t _x_x3982 = kk_integer_add_small_const(kk_integer_from_small(4), -3, _ctx); /*int*/
            _x_x3978 = kk_std_core_list_take(_x_x3979, _x_x3982, _ctx); /*list<10001>*/
            _x_x3977 = kk_std_core_string_listchar_fs_string(_x_x3978, _ctx); /*string*/
            kk_string_t _x_x3983;
            kk_define_string_literal(static, _s_x3984, 1, ":", _ctx)
            _x_x3983 = kk_string_dup(_s_x3984, _ctx); /*string*/
            _match_x2800 = kk_string_is_neq(_x_x3977,_x_x3983,kk_context()); /*bool*/
            if (_match_x2800) {
              kk_string_drop(s, _ctx);
              return false;
            }
            {
              bool b_10225;
              kk_string_t _x_x3985;
              kk_std_core_types__list _x_x3986;
              kk_std_core_types__list _x_x3987;
              kk_std_core_types__list _x_x3988;
              kk_string_t _x_x3989 = kk_string_dup(s, _ctx); /*string*/
              _x_x3988 = kk_std_core_string_list(_x_x3989, _ctx); /*list<char>*/
              _x_x3987 = kk_std_core_list_drop(_x_x3988, kk_integer_from_small(1), _ctx); /*list<10001>*/
              kk_integer_t _x_x3990 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
              _x_x3986 = kk_std_core_list_take(_x_x3987, _x_x3990, _ctx); /*list<10001>*/
              _x_x3985 = kk_std_core_string_listchar_fs_string(_x_x3986, _ctx); /*string*/
              b_10225 = kk_hml__types_hc__all__digits(_x_x3985, _ctx); /*bool*/
              if (b_10225) {
                bool b_0_10228;
                kk_string_t _x_x3991;
                kk_std_core_types__list _x_x3992;
                kk_std_core_types__list _x_x3993;
                kk_std_core_types__list _x_x3994;
                kk_string_t _x_x3995 = kk_string_dup(s, _ctx); /*string*/
                _x_x3994 = kk_std_core_string_list(_x_x3995, _ctx); /*list<char>*/
                _x_x3993 = kk_std_core_list_drop(_x_x3994, kk_integer_from_small(4), _ctx); /*list<10001>*/
                kk_integer_t _x_x3996 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                _x_x3992 = kk_std_core_list_take(_x_x3993, _x_x3996, _ctx); /*list<10001>*/
                _x_x3991 = kk_std_core_string_listchar_fs_string(_x_x3992, _ctx); /*string*/
                b_0_10228 = kk_hml__types_hc__all__digits(_x_x3991, _ctx); /*bool*/
                if (b_0_10228) {
                  kk_string_t s_0_10231;
                  kk_std_core_types__list _x_x3997;
                  kk_std_core_types__list _x_x3998;
                  kk_std_core_types__list _x_x3999;
                  kk_string_t _x_x4000 = kk_string_dup(s, _ctx); /*string*/
                  _x_x3999 = kk_std_core_string_list(_x_x4000, _ctx); /*list<char>*/
                  _x_x3998 = kk_std_core_list_drop(_x_x3999, kk_integer_from_small(1), _ctx); /*list<10001>*/
                  kk_integer_t _x_x4001 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                  _x_x3997 = kk_std_core_list_take(_x_x3998, _x_x4001, _ctx); /*list<10001>*/
                  s_0_10231 = kk_std_core_string_listchar_fs_string(_x_x3997, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2801;
                  bool _x_x4002;
                  kk_std_core_types__optional _match_x2809 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2809, _ctx)) {
                    kk_box_t _box_x269 = _match_x2809._cons._Optional.value;
                    bool _uniq_hex_581 = kk_bool_unbox(_box_x269);
                    kk_std_core_types__optional_drop(_match_x2809, _ctx);
                    _x_x4002 = _uniq_hex_581; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2809, _ctx);
                    _x_x4002 = false; /*bool*/
                  }
                  _match_x2801 = kk_std_core_int_xparse(s_0_10231, _x_x4002, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2801, _ctx)) {
                    kk_box_t _box_x270 = _match_x2801._cons.Just.value;
                    kk_integer_t h = kk_integer_unbox(_box_x270, _ctx);
                    kk_integer_dup(h, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2801, _ctx);
                    kk_string_t s_1_10235;
                    kk_std_core_types__list _x_x4003;
                    kk_std_core_types__list _x_x4004;
                    kk_std_core_types__list _x_x4005 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                    _x_x4004 = kk_std_core_list_drop(_x_x4005, kk_integer_from_small(4), _ctx); /*list<10001>*/
                    kk_integer_t _x_x4006 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                    _x_x4003 = kk_std_core_list_take(_x_x4004, _x_x4006, _ctx); /*list<10001>*/
                    s_1_10235 = kk_std_core_string_listchar_fs_string(_x_x4003, _ctx); /*string*/
                    kk_std_core_types__maybe _match_x2802;
                    bool _x_x4007;
                    kk_std_core_types__optional _match_x2808 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                    if (kk_std_core_types__is_Optional(_match_x2808, _ctx)) {
                      kk_box_t _box_x271 = _match_x2808._cons._Optional.value;
                      bool _uniq_hex_581_0 = kk_bool_unbox(_box_x271);
                      kk_std_core_types__optional_drop(_match_x2808, _ctx);
                      _x_x4007 = _uniq_hex_581_0; /*bool*/
                    }
                    else {
                      kk_std_core_types__optional_drop(_match_x2808, _ctx);
                      _x_x4007 = false; /*bool*/
                    }
                    _match_x2802 = kk_std_core_int_xparse(s_1_10235, _x_x4007, _ctx); /*maybe<int>*/
                    if (kk_std_core_types__is_Just(_match_x2802, _ctx)) {
                      kk_box_t _box_x272 = _match_x2802._cons.Just.value;
                      kk_integer_t m = kk_integer_unbox(_box_x272, _ctx);
                      kk_integer_dup(m, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2802, _ctx);
                      bool _match_x2803 = kk_integer_gte_borrow(h,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                      if (_match_x2803) {
                        bool _match_x2804;
                        bool _brw_x2807 = kk_integer_lte_borrow(h,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                        kk_integer_drop(h, _ctx);
                        _match_x2804 = _brw_x2807; /*bool*/
                        if (_match_x2804) {
                          bool _match_x2805 = kk_integer_gte_borrow(m,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                          if (_match_x2805) {
                            bool _brw_x2806 = kk_integer_lte_borrow(m,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                            kk_integer_drop(m, _ctx);
                            return _brw_x2806;
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
          bool _match_x2789;
          kk_string_t _x_x4008;
          kk_std_core_types__list _x_x4009;
          kk_std_core_types__list _x_x4010;
          kk_std_core_types__list _x_x4011;
          kk_string_t _x_x4012 = kk_string_dup(s, _ctx); /*string*/
          _x_x4011 = kk_std_core_string_list(_x_x4012, _ctx); /*list<char>*/
          _x_x4010 = kk_std_core_list_drop(_x_x4011, kk_integer_from_small(3), _ctx); /*list<10001>*/
          kk_integer_t _x_x4013 = kk_integer_add_small_const(kk_integer_from_small(4), -3, _ctx); /*int*/
          _x_x4009 = kk_std_core_list_take(_x_x4010, _x_x4013, _ctx); /*list<10001>*/
          _x_x4008 = kk_std_core_string_listchar_fs_string(_x_x4009, _ctx); /*string*/
          kk_string_t _x_x4014;
          kk_define_string_literal(static, _s_x4015, 1, ":", _ctx)
          _x_x4014 = kk_string_dup(_s_x4015, _ctx); /*string*/
          _match_x2789 = kk_string_is_neq(_x_x4008,_x_x4014,kk_context()); /*bool*/
          if (_match_x2789) {
            kk_string_drop(s, _ctx);
            return false;
          }
          {
            bool b_1_10247;
            kk_string_t _x_x4016;
            kk_std_core_types__list _x_x4017;
            kk_std_core_types__list _x_x4018;
            kk_std_core_types__list _x_x4019;
            kk_string_t _x_x4020 = kk_string_dup(s, _ctx); /*string*/
            _x_x4019 = kk_std_core_string_list(_x_x4020, _ctx); /*list<char>*/
            _x_x4018 = kk_std_core_list_drop(_x_x4019, kk_integer_from_small(1), _ctx); /*list<10001>*/
            kk_integer_t _x_x4021 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
            _x_x4017 = kk_std_core_list_take(_x_x4018, _x_x4021, _ctx); /*list<10001>*/
            _x_x4016 = kk_std_core_string_listchar_fs_string(_x_x4017, _ctx); /*string*/
            b_1_10247 = kk_hml__types_hc__all__digits(_x_x4016, _ctx); /*bool*/
            if (b_1_10247) {
              bool b_2_10250;
              kk_string_t _x_x4022;
              kk_std_core_types__list _x_x4023;
              kk_std_core_types__list _x_x4024;
              kk_std_core_types__list _x_x4025;
              kk_string_t _x_x4026 = kk_string_dup(s, _ctx); /*string*/
              _x_x4025 = kk_std_core_string_list(_x_x4026, _ctx); /*list<char>*/
              _x_x4024 = kk_std_core_list_drop(_x_x4025, kk_integer_from_small(4), _ctx); /*list<10001>*/
              kk_integer_t _x_x4027 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
              _x_x4023 = kk_std_core_list_take(_x_x4024, _x_x4027, _ctx); /*list<10001>*/
              _x_x4022 = kk_std_core_string_listchar_fs_string(_x_x4023, _ctx); /*string*/
              b_2_10250 = kk_hml__types_hc__all__digits(_x_x4022, _ctx); /*bool*/
              if (b_2_10250) {
                kk_string_t s_2_10253;
                kk_std_core_types__list _x_x4028;
                kk_std_core_types__list _x_x4029;
                kk_std_core_types__list _x_x4030;
                kk_string_t _x_x4031 = kk_string_dup(s, _ctx); /*string*/
                _x_x4030 = kk_std_core_string_list(_x_x4031, _ctx); /*list<char>*/
                _x_x4029 = kk_std_core_list_drop(_x_x4030, kk_integer_from_small(1), _ctx); /*list<10001>*/
                kk_integer_t _x_x4032 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
                _x_x4028 = kk_std_core_list_take(_x_x4029, _x_x4032, _ctx); /*list<10001>*/
                s_2_10253 = kk_std_core_string_listchar_fs_string(_x_x4028, _ctx); /*string*/
                kk_std_core_types__maybe _match_x2790;
                bool _x_x4033;
                kk_std_core_types__optional _match_x2798 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                if (kk_std_core_types__is_Optional(_match_x2798, _ctx)) {
                  kk_box_t _box_x273 = _match_x2798._cons._Optional.value;
                  bool _uniq_hex_581_1 = kk_bool_unbox(_box_x273);
                  kk_std_core_types__optional_drop(_match_x2798, _ctx);
                  _x_x4033 = _uniq_hex_581_1; /*bool*/
                }
                else {
                  kk_std_core_types__optional_drop(_match_x2798, _ctx);
                  _x_x4033 = false; /*bool*/
                }
                _match_x2790 = kk_std_core_int_xparse(s_2_10253, _x_x4033, _ctx); /*maybe<int>*/
                if (kk_std_core_types__is_Just(_match_x2790, _ctx)) {
                  kk_box_t _box_x274 = _match_x2790._cons.Just.value;
                  kk_integer_t h_0 = kk_integer_unbox(_box_x274, _ctx);
                  kk_integer_dup(h_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2790, _ctx);
                  kk_string_t s_3_10257;
                  kk_std_core_types__list _x_x4034;
                  kk_std_core_types__list _x_x4035;
                  kk_std_core_types__list _x_x4036 = kk_std_core_string_list(s, _ctx); /*list<char>*/
                  _x_x4035 = kk_std_core_list_drop(_x_x4036, kk_integer_from_small(4), _ctx); /*list<10001>*/
                  kk_integer_t _x_x4037 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
                  _x_x4034 = kk_std_core_list_take(_x_x4035, _x_x4037, _ctx); /*list<10001>*/
                  s_3_10257 = kk_std_core_string_listchar_fs_string(_x_x4034, _ctx); /*string*/
                  kk_std_core_types__maybe _match_x2791;
                  bool _x_x4038;
                  kk_std_core_types__optional _match_x2797 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
                  if (kk_std_core_types__is_Optional(_match_x2797, _ctx)) {
                    kk_box_t _box_x275 = _match_x2797._cons._Optional.value;
                    bool _uniq_hex_581_2 = kk_bool_unbox(_box_x275);
                    kk_std_core_types__optional_drop(_match_x2797, _ctx);
                    _x_x4038 = _uniq_hex_581_2; /*bool*/
                  }
                  else {
                    kk_std_core_types__optional_drop(_match_x2797, _ctx);
                    _x_x4038 = false; /*bool*/
                  }
                  _match_x2791 = kk_std_core_int_xparse(s_3_10257, _x_x4038, _ctx); /*maybe<int>*/
                  if (kk_std_core_types__is_Just(_match_x2791, _ctx)) {
                    kk_box_t _box_x276 = _match_x2791._cons.Just.value;
                    kk_integer_t m_0 = kk_integer_unbox(_box_x276, _ctx);
                    kk_integer_dup(m_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2791, _ctx);
                    bool _match_x2792 = kk_integer_gte_borrow(h_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                    if (_match_x2792) {
                      bool _match_x2793;
                      bool _brw_x2796 = kk_integer_lte_borrow(h_0,(kk_integer_from_small(23)),kk_context()); /*bool*/;
                      kk_integer_drop(h_0, _ctx);
                      _match_x2793 = _brw_x2796; /*bool*/
                      if (_match_x2793) {
                        bool _match_x2794 = kk_integer_gte_borrow(m_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
                        if (_match_x2794) {
                          bool _brw_x2795 = kk_integer_lte_borrow(m_0,(kk_integer_from_small(59)),kk_context()); /*bool*/;
                          kk_integer_drop(m_0, _ctx);
                          return _brw_x2795;
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

bool kk_hml__types_hc__check__z__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  kk_integer_t zi;
  kk_std_core_types__maybe _match_x2781;
  kk_string_t _x_x4039 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x4040;
  kk_define_string_literal(static, _s_x4041, 1, "Z", _ctx)
  _x_x4040 = kk_string_dup(_s_x4041, _ctx); /*string*/
  _match_x2781 = kk_std_core_sslice_find(_x_x4039, _x_x4040, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x2781, _ctx)) {
    kk_box_t _box_x277 = _match_x2781._cons.Just.value;
    kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x277, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
    kk_std_core_types__maybe_drop(_match_x2781, _ctx);
    kk_std_core_sslice__sslice _x_x4042;
    {
      kk_string_t s = hc____ss.str;
      kk_integer_t start = hc____ss.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
      _x_x4042 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    zi = kk_std_core_sslice_count(_x_x4042, _ctx); /*int*/
  }
  else {
    kk_std_core_types__maybe _match_x2782 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2782, _ctx)) {
      kk_box_t _box_x278 = _match_x2782._cons.Just.value;
      kk_integer_t i = kk_integer_unbox(_box_x278, _ctx);
      kk_integer_dup(i, _ctx);
      kk_std_core_types__maybe_drop(_match_x2782, _ctx);
      zi = i; /*int*/
    }
    else {
      kk_std_core_types__maybe _match_x2783;
      kk_string_t _x_x4043 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x4044;
      kk_define_string_literal(static, _s_x4045, 1, "z", _ctx)
      _x_x4044 = kk_string_dup(_s_x4045, _ctx); /*string*/
      _match_x2783 = kk_std_core_sslice_find(_x_x4043, _x_x4044, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2783, _ctx)) {
        kk_box_t _box_x279 = _match_x2783._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x279, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2783, _ctx);
        kk_std_core_sslice__sslice _x_x4046;
        {
          kk_string_t s_0 = hc____ss_0.str;
          kk_integer_t start_0 = hc____ss_0.start;
          kk_string_dup(s_0, _ctx);
          kk_integer_dup(start_0, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
          _x_x4046 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
        }
        zi = kk_std_core_sslice_count(_x_x4046, _ctx); /*int*/
      }
      else {
        kk_std_core_types__maybe _match_x2784 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2784, _ctx)) {
          kk_box_t _box_x280 = _match_x2784._cons.Just.value;
          kk_integer_t i_0 = kk_integer_unbox(_box_x280, _ctx);
          kk_integer_dup(i_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2784, _ctx);
          zi = i_0; /*int*/
        }
        else {
          zi = kk_integer_from_small(0); /*int*/
        }
      }
    }
  }
  kk_string_t t;
  kk_std_core_types__list _x_x4047;
  kk_std_core_types__list _x_x4048;
  kk_std_core_types__list _x_x4049;
  kk_string_t _x_x4050 = kk_string_dup(rest, _ctx); /*string*/
  _x_x4049 = kk_std_core_string_list(_x_x4050, _ctx); /*list<char>*/
  _x_x4048 = kk_std_core_list_drop(_x_x4049, kk_integer_from_small(0), _ctx); /*list<10001>*/
  kk_integer_t _x_x4051;
  kk_integer_t _x_x4052 = kk_integer_dup(zi, _ctx); /*int*/
  _x_x4051 = kk_integer_add_small_const(_x_x4052, 0, _ctx); /*int*/
  _x_x4047 = kk_std_core_list_take(_x_x4048, _x_x4051, _ctx); /*list<10001>*/
  t = kk_std_core_string_listchar_fs_string(_x_x4047, _ctx); /*string*/
  bool _match_x2780 = kk_hml__types_hc__is__valid__time(t, _ctx); /*bool*/;
  if (_match_x2780) {
    kk_string_t _x_x4053;
    kk_std_core_types__list _x_x4054;
    kk_std_core_types__list _x_x4055 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
    _x_x4054 = kk_std_core_list_drop(_x_x4055, zi, _ctx); /*list<10001>*/
    _x_x4053 = kk_std_core_string_listchar_fs_string(_x_x4054, _ctx); /*string*/
    return kk_hml__types_hc__is__valid__offset(_x_x4053, _ctx);
  }
  {
    kk_integer_drop(zi, _ctx);
    kk_string_drop(rest, _ctx);
    return false;
  }
}

bool kk_hml__types_hc__check__numeric__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> bool */ 
  bool _match_x2773;
  kk_integer_t _brw_x2778;
  kk_string_t _x_x4056 = kk_string_dup(rest, _ctx); /*string*/
  _brw_x2778 = kk_std_core_string_chars_fs_count(_x_x4056, _ctx); /*int*/
  bool _brw_x2779 = kk_integer_lt_borrow(_brw_x2778,(kk_integer_from_small(11)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2778, _ctx);
  _match_x2773 = _brw_x2779; /*bool*/
  if (_match_x2773) {
    kk_string_drop(rest, _ctx);
    return false;
  }
  {
    kk_integer_t x_10271;
    kk_string_t _x_x4057 = kk_string_dup(rest, _ctx); /*string*/
    x_10271 = kk_std_core_string_chars_fs_count(_x_x4057, _ctx); /*int*/
    kk_integer_t sign__pos = kk_integer_add_small_const(x_10271, -6, _ctx); /*int*/;
    kk_integer_t x_0_10273;
    kk_integer_t _x_x4058 = kk_integer_dup(sign__pos, _ctx); /*int*/
    x_0_10273 = kk_integer_add_small_const(_x_x4058, 1, _ctx); /*int*/
    kk_string_t sign__char;
    kk_std_core_types__list _x_x4059;
    kk_std_core_types__list _x_x4060;
    kk_std_core_types__list _x_x4061;
    kk_string_t _x_x4062 = kk_string_dup(rest, _ctx); /*string*/
    _x_x4061 = kk_std_core_string_list(_x_x4062, _ctx); /*list<char>*/
    kk_integer_t _x_x4063 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x4060 = kk_std_core_list_drop(_x_x4061, _x_x4063, _ctx); /*list<10001>*/
    kk_integer_t _x_x4064;
    kk_integer_t _x_x4065 = kk_integer_dup(sign__pos, _ctx); /*int*/
    _x_x4064 = kk_integer_sub(x_0_10273,_x_x4065,kk_context()); /*int*/
    _x_x4059 = kk_std_core_list_take(_x_x4060, _x_x4064, _ctx); /*list<10001>*/
    sign__char = kk_std_core_string_listchar_fs_string(_x_x4059, _ctx); /*string*/
    bool _match_x2774;
    kk_string_t _x_x4066 = kk_string_dup(sign__char, _ctx); /*string*/
    kk_string_t _x_x4067;
    kk_define_string_literal(static, _s_x4068, 1, "+", _ctx)
    _x_x4067 = kk_string_dup(_s_x4068, _ctx); /*string*/
    _match_x2774 = kk_string_is_neq(_x_x4066,_x_x4067,kk_context()); /*bool*/
    if (_match_x2774) {
      bool _match_x2776;
      kk_string_t _x_x4069;
      kk_define_string_literal(static, _s_x4070, 1, "-", _ctx)
      _x_x4069 = kk_string_dup(_s_x4070, _ctx); /*string*/
      _match_x2776 = kk_string_is_neq(sign__char,_x_x4069,kk_context()); /*bool*/
      if (_match_x2776) {
        kk_integer_drop(sign__pos, _ctx);
        kk_string_drop(rest, _ctx);
        return false;
      }
      {
        kk_string_t t;
        kk_std_core_types__list _x_x4071;
        kk_std_core_types__list _x_x4072;
        kk_std_core_types__list _x_x4073;
        kk_string_t _x_x4074 = kk_string_dup(rest, _ctx); /*string*/
        _x_x4073 = kk_std_core_string_list(_x_x4074, _ctx); /*list<char>*/
        _x_x4072 = kk_std_core_list_drop(_x_x4073, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4075;
        kk_integer_t _x_x4076 = kk_integer_dup(sign__pos, _ctx); /*int*/
        _x_x4075 = kk_integer_add_small_const(_x_x4076, 0, _ctx); /*int*/
        _x_x4071 = kk_std_core_list_take(_x_x4072, _x_x4075, _ctx); /*list<10001>*/
        t = kk_std_core_string_listchar_fs_string(_x_x4071, _ctx); /*string*/
        kk_string_t o;
        kk_std_core_types__list _x_x4077;
        kk_std_core_types__list _x_x4078 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4077 = kk_std_core_list_drop(_x_x4078, sign__pos, _ctx); /*list<10001>*/
        o = kk_std_core_string_listchar_fs_string(_x_x4077, _ctx); /*string*/
        bool _match_x2777 = kk_hml__types_hc__is__valid__time(t, _ctx); /*bool*/;
        if (_match_x2777) {
          return kk_hml__types_hc__is__valid__offset(o, _ctx);
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
      kk_std_core_types__list _x_x4079;
      kk_std_core_types__list _x_x4080;
      kk_std_core_types__list _x_x4081;
      kk_string_t _x_x4082 = kk_string_dup(rest, _ctx); /*string*/
      _x_x4081 = kk_std_core_string_list(_x_x4082, _ctx); /*list<char>*/
      _x_x4080 = kk_std_core_list_drop(_x_x4081, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4083;
      kk_integer_t _x_x4084 = kk_integer_dup(sign__pos, _ctx); /*int*/
      _x_x4083 = kk_integer_add_small_const(_x_x4084, 0, _ctx); /*int*/
      _x_x4079 = kk_std_core_list_take(_x_x4080, _x_x4083, _ctx); /*list<10001>*/
      t_0 = kk_std_core_string_listchar_fs_string(_x_x4079, _ctx); /*string*/
      kk_string_t o_0;
      kk_std_core_types__list _x_x4085;
      kk_std_core_types__list _x_x4086 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x4085 = kk_std_core_list_drop(_x_x4086, sign__pos, _ctx); /*list<10001>*/
      o_0 = kk_std_core_string_listchar_fs_string(_x_x4085, _ctx); /*string*/
      bool _match_x2775 = kk_hml__types_hc__is__valid__time(t_0, _ctx); /*bool*/;
      if (_match_x2775) {
        return kk_hml__types_hc__is__valid__offset(o_0, _ctx);
      }
      {
        kk_string_drop(o_0, _ctx);
        return false;
      }
    }
  }
}

bool kk_hml__types_hc__is__iso__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2761;
  kk_integer_t _brw_x2771;
  kk_string_t _x_x4087 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2771 = kk_std_core_string_chars_fs_count(_x_x4087, _ctx); /*int*/
  bool _brw_x2772 = kk_integer_lt_borrow(_brw_x2771,(kk_integer_from_small(17)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2771, _ctx);
  _match_x2761 = _brw_x2772; /*bool*/
  if (_match_x2761) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4088;
    kk_std_core_types__list _x_x4089;
    kk_std_core_types__list _x_x4090;
    kk_string_t _x_x4091 = kk_string_dup(s, _ctx); /*string*/
    _x_x4090 = kk_std_core_string_list(_x_x4091, _ctx); /*list<char>*/
    _x_x4089 = kk_std_core_list_drop(_x_x4090, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4092 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4088 = kk_std_core_list_take(_x_x4089, _x_x4092, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4088, _ctx); /*string*/
    bool _match_x2762;
    kk_string_t _x_x4093 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4094;
    kk_define_string_literal(static, _s_x4095, 1, "T", _ctx)
    _x_x4094 = kk_string_dup(_s_x4095, _ctx); /*string*/
    _match_x2762 = kk_string_is_neq(_x_x4093,_x_x4094,kk_context()); /*bool*/
    if (_match_x2762) {
      bool _match_x2765;
      kk_string_t _x_x4096 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4097;
      kk_define_string_literal(static, _s_x4098, 1, "t", _ctx)
      _x_x4097 = kk_string_dup(_s_x4098, _ctx); /*string*/
      _match_x2765 = kk_string_is_neq(_x_x4096,_x_x4097,kk_context()); /*bool*/
      if (_match_x2765) {
        bool _match_x2768;
        kk_string_t _x_x4099;
        kk_define_string_literal(static, _s_x4100, 1, " ", _ctx)
        _x_x4099 = kk_string_dup(_s_x4100, _ctx); /*string*/
        _match_x2768 = kk_string_is_neq(sep,_x_x4099,kk_context()); /*bool*/
        if (_match_x2768) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool b_10283;
          kk_string_t _x_x4101;
          kk_std_core_types__list _x_x4102;
          kk_std_core_types__list _x_x4103;
          kk_std_core_types__list _x_x4104;
          kk_string_t _x_x4105 = kk_string_dup(s, _ctx); /*string*/
          _x_x4104 = kk_std_core_string_list(_x_x4105, _ctx); /*list<char>*/
          _x_x4103 = kk_std_core_list_drop(_x_x4104, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4106 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
          _x_x4102 = kk_std_core_list_take(_x_x4103, _x_x4106, _ctx); /*list<10001>*/
          _x_x4101 = kk_std_core_string_listchar_fs_string(_x_x4102, _ctx); /*string*/
          b_10283 = kk_hml__types_hc__is__valid__date(_x_x4101, _ctx); /*bool*/
          if (b_10283) {
            kk_string_t rest;
            kk_std_core_types__list _x_x4107;
            kk_std_core_types__list _x_x4108 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x4107 = kk_std_core_list_drop(_x_x4108, kk_integer_from_small(11), _ctx); /*list<10001>*/
            rest = kk_std_core_string_listchar_fs_string(_x_x4107, _ctx); /*string*/
            bool _match_x2769;
            kk_string_t _x_x4109 = kk_string_dup(rest, _ctx); /*string*/
            kk_string_t _x_x4110;
            kk_define_string_literal(static, _s_x4111, 1, "Z", _ctx)
            _x_x4110 = kk_string_dup(_s_x4111, _ctx); /*string*/
            _match_x2769 = kk_string_contains(_x_x4109,_x_x4110,kk_context()); /*bool*/
            if (_match_x2769) {
              return kk_hml__types_hc__check__z__offset(rest, _ctx);
            }
            {
              bool _match_x2770;
              kk_string_t _x_x4112 = kk_string_dup(rest, _ctx); /*string*/
              kk_string_t _x_x4113;
              kk_define_string_literal(static, _s_x4114, 1, "z", _ctx)
              _x_x4113 = kk_string_dup(_s_x4114, _ctx); /*string*/
              _match_x2770 = kk_string_contains(_x_x4112,_x_x4113,kk_context()); /*bool*/
              if (_match_x2770) {
                return kk_hml__types_hc__check__z__offset(rest, _ctx);
              }
              {
                return kk_hml__types_hc__check__numeric__offset(rest, _ctx);
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
        bool b_0_10286;
        kk_string_t _x_x4115;
        kk_std_core_types__list _x_x4116;
        kk_std_core_types__list _x_x4117;
        kk_std_core_types__list _x_x4118;
        kk_string_t _x_x4119 = kk_string_dup(s, _ctx); /*string*/
        _x_x4118 = kk_std_core_string_list(_x_x4119, _ctx); /*list<char>*/
        _x_x4117 = kk_std_core_list_drop(_x_x4118, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4120 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x4116 = kk_std_core_list_take(_x_x4117, _x_x4120, _ctx); /*list<10001>*/
        _x_x4115 = kk_std_core_string_listchar_fs_string(_x_x4116, _ctx); /*string*/
        b_0_10286 = kk_hml__types_hc__is__valid__date(_x_x4115, _ctx); /*bool*/
        if (b_0_10286) {
          kk_string_t rest_0;
          kk_std_core_types__list _x_x4121;
          kk_std_core_types__list _x_x4122 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4121 = kk_std_core_list_drop(_x_x4122, kk_integer_from_small(11), _ctx); /*list<10001>*/
          rest_0 = kk_std_core_string_listchar_fs_string(_x_x4121, _ctx); /*string*/
          bool _match_x2766;
          kk_string_t _x_x4123 = kk_string_dup(rest_0, _ctx); /*string*/
          kk_string_t _x_x4124;
          kk_define_string_literal(static, _s_x4125, 1, "Z", _ctx)
          _x_x4124 = kk_string_dup(_s_x4125, _ctx); /*string*/
          _match_x2766 = kk_string_contains(_x_x4123,_x_x4124,kk_context()); /*bool*/
          if (_match_x2766) {
            return kk_hml__types_hc__check__z__offset(rest_0, _ctx);
          }
          {
            bool _match_x2767;
            kk_string_t _x_x4126 = kk_string_dup(rest_0, _ctx); /*string*/
            kk_string_t _x_x4127;
            kk_define_string_literal(static, _s_x4128, 1, "z", _ctx)
            _x_x4127 = kk_string_dup(_s_x4128, _ctx); /*string*/
            _match_x2767 = kk_string_contains(_x_x4126,_x_x4127,kk_context()); /*bool*/
            if (_match_x2767) {
              return kk_hml__types_hc__check__z__offset(rest_0, _ctx);
            }
            {
              return kk_hml__types_hc__check__numeric__offset(rest_0, _ctx);
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
      bool b_1_10289;
      kk_string_t _x_x4129;
      kk_std_core_types__list _x_x4130;
      kk_std_core_types__list _x_x4131;
      kk_std_core_types__list _x_x4132;
      kk_string_t _x_x4133 = kk_string_dup(s, _ctx); /*string*/
      _x_x4132 = kk_std_core_string_list(_x_x4133, _ctx); /*list<char>*/
      _x_x4131 = kk_std_core_list_drop(_x_x4132, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4134 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4130 = kk_std_core_list_take(_x_x4131, _x_x4134, _ctx); /*list<10001>*/
      _x_x4129 = kk_std_core_string_listchar_fs_string(_x_x4130, _ctx); /*string*/
      b_1_10289 = kk_hml__types_hc__is__valid__date(_x_x4129, _ctx); /*bool*/
      if (b_1_10289) {
        kk_string_t rest_1;
        kk_std_core_types__list _x_x4135;
        kk_std_core_types__list _x_x4136 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4135 = kk_std_core_list_drop(_x_x4136, kk_integer_from_small(11), _ctx); /*list<10001>*/
        rest_1 = kk_std_core_string_listchar_fs_string(_x_x4135, _ctx); /*string*/
        bool _match_x2763;
        kk_string_t _x_x4137 = kk_string_dup(rest_1, _ctx); /*string*/
        kk_string_t _x_x4138;
        kk_define_string_literal(static, _s_x4139, 1, "Z", _ctx)
        _x_x4138 = kk_string_dup(_s_x4139, _ctx); /*string*/
        _match_x2763 = kk_string_contains(_x_x4137,_x_x4138,kk_context()); /*bool*/
        if (_match_x2763) {
          return kk_hml__types_hc__check__z__offset(rest_1, _ctx);
        }
        {
          bool _match_x2764;
          kk_string_t _x_x4140 = kk_string_dup(rest_1, _ctx); /*string*/
          kk_string_t _x_x4141;
          kk_define_string_literal(static, _s_x4142, 1, "z", _ctx)
          _x_x4141 = kk_string_dup(_s_x4142, _ctx); /*string*/
          _match_x2764 = kk_string_contains(_x_x4140,_x_x4141,kk_context()); /*bool*/
          if (_match_x2764) {
            return kk_hml__types_hc__check__z__offset(rest_1, _ctx);
          }
          {
            return kk_hml__types_hc__check__numeric__offset(rest_1, _ctx);
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

bool kk_hml__types_hc__is__local__datetime(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> bool */ 
  bool _match_x2752;
  kk_integer_t _brw_x2759;
  kk_string_t _x_x4143 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2759 = kk_std_core_string_chars_fs_count(_x_x4143, _ctx); /*int*/
  bool _brw_x2760 = kk_integer_lt_borrow(_brw_x2759,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2759, _ctx);
  _match_x2752 = _brw_x2760; /*bool*/
  if (_match_x2752) {
    kk_string_drop(s, _ctx);
    return false;
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4144;
    kk_std_core_types__list _x_x4145;
    kk_std_core_types__list _x_x4146;
    kk_string_t _x_x4147 = kk_string_dup(s, _ctx); /*string*/
    _x_x4146 = kk_std_core_string_list(_x_x4147, _ctx); /*list<char>*/
    _x_x4145 = kk_std_core_list_drop(_x_x4146, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4148 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4144 = kk_std_core_list_take(_x_x4145, _x_x4148, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4144, _ctx); /*string*/
    bool _match_x2753;
    kk_string_t _x_x4149 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4150;
    kk_define_string_literal(static, _s_x4151, 1, "T", _ctx)
    _x_x4150 = kk_string_dup(_s_x4151, _ctx); /*string*/
    _match_x2753 = kk_string_is_neq(_x_x4149,_x_x4150,kk_context()); /*bool*/
    if (_match_x2753) {
      bool _match_x2755;
      kk_string_t _x_x4152 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4153;
      kk_define_string_literal(static, _s_x4154, 1, "t", _ctx)
      _x_x4153 = kk_string_dup(_s_x4154, _ctx); /*string*/
      _match_x2755 = kk_string_is_neq(_x_x4152,_x_x4153,kk_context()); /*bool*/
      if (_match_x2755) {
        bool _match_x2757;
        kk_string_t _x_x4155;
        kk_define_string_literal(static, _s_x4156, 1, " ", _ctx)
        _x_x4155 = kk_string_dup(_s_x4156, _ctx); /*string*/
        _match_x2757 = kk_string_is_neq(sep,_x_x4155,kk_context()); /*bool*/
        if (_match_x2757) {
          kk_string_drop(s, _ctx);
          return false;
        }
        {
          bool _match_x2758;
          kk_string_t _x_x4157;
          kk_std_core_types__list _x_x4158;
          kk_std_core_types__list _x_x4159;
          kk_std_core_types__list _x_x4160;
          kk_string_t _x_x4161 = kk_string_dup(s, _ctx); /*string*/
          _x_x4160 = kk_std_core_string_list(_x_x4161, _ctx); /*list<char>*/
          _x_x4159 = kk_std_core_list_drop(_x_x4160, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4162 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
          _x_x4158 = kk_std_core_list_take(_x_x4159, _x_x4162, _ctx); /*list<10001>*/
          _x_x4157 = kk_std_core_string_listchar_fs_string(_x_x4158, _ctx); /*string*/
          _match_x2758 = kk_hml__types_hc__is__valid__date(_x_x4157, _ctx); /*bool*/
          if (_match_x2758) {
            kk_string_t _x_x4163;
            kk_std_core_types__list _x_x4164;
            kk_std_core_types__list _x_x4165 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            _x_x4164 = kk_std_core_list_drop(_x_x4165, kk_integer_from_small(11), _ctx); /*list<10001>*/
            _x_x4163 = kk_std_core_string_listchar_fs_string(_x_x4164, _ctx); /*string*/
            return kk_hml__types_hc__is__valid__time(_x_x4163, _ctx);
          }
          {
            kk_string_drop(s, _ctx);
            return false;
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        bool _match_x2756;
        kk_string_t _x_x4166;
        kk_std_core_types__list _x_x4167;
        kk_std_core_types__list _x_x4168;
        kk_std_core_types__list _x_x4169;
        kk_string_t _x_x4170 = kk_string_dup(s, _ctx); /*string*/
        _x_x4169 = kk_std_core_string_list(_x_x4170, _ctx); /*list<char>*/
        _x_x4168 = kk_std_core_list_drop(_x_x4169, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4171 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
        _x_x4167 = kk_std_core_list_take(_x_x4168, _x_x4171, _ctx); /*list<10001>*/
        _x_x4166 = kk_std_core_string_listchar_fs_string(_x_x4167, _ctx); /*string*/
        _match_x2756 = kk_hml__types_hc__is__valid__date(_x_x4166, _ctx); /*bool*/
        if (_match_x2756) {
          kk_string_t _x_x4172;
          kk_std_core_types__list _x_x4173;
          kk_std_core_types__list _x_x4174 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4173 = kk_std_core_list_drop(_x_x4174, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4172 = kk_std_core_string_listchar_fs_string(_x_x4173, _ctx); /*string*/
          return kk_hml__types_hc__is__valid__time(_x_x4172, _ctx);
        }
        {
          kk_string_drop(s, _ctx);
          return false;
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      bool _match_x2754;
      kk_string_t _x_x4175;
      kk_std_core_types__list _x_x4176;
      kk_std_core_types__list _x_x4177;
      kk_std_core_types__list _x_x4178;
      kk_string_t _x_x4179 = kk_string_dup(s, _ctx); /*string*/
      _x_x4178 = kk_std_core_string_list(_x_x4179, _ctx); /*list<char>*/
      _x_x4177 = kk_std_core_list_drop(_x_x4178, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4180 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4176 = kk_std_core_list_take(_x_x4177, _x_x4180, _ctx); /*list<10001>*/
      _x_x4175 = kk_std_core_string_listchar_fs_string(_x_x4176, _ctx); /*string*/
      _match_x2754 = kk_hml__types_hc__is__valid__date(_x_x4175, _ctx); /*bool*/
      if (_match_x2754) {
        kk_string_t _x_x4181;
        kk_std_core_types__list _x_x4182;
        kk_std_core_types__list _x_x4183 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4182 = kk_std_core_list_drop(_x_x4183, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4181 = kk_std_core_string_listchar_fs_string(_x_x4182, _ctx); /*string*/
        return kk_hml__types_hc__is__valid__time(_x_x4181, _ctx);
      }
      {
        kk_string_drop(s, _ctx);
        return false;
      }
    }
  }
}

kk_std_core_types__either kk_hml__types_hc__date__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10300;
  kk_string_t _x_x4184 = kk_string_dup(s, _ctx); /*string*/
  b_10300 = kk_hml__types_hc__is__valid__date(_x_x4184, _ctx); /*bool*/
  if (b_10300) {
    kk_string_t s_0_10301;
    kk_std_core_types__list _x_x4185;
    kk_std_core_types__list _x_x4186;
    kk_std_core_types__list _x_x4187;
    kk_string_t _x_x4188 = kk_string_dup(s, _ctx); /*string*/
    _x_x4187 = kk_std_core_string_list(_x_x4188, _ctx); /*list<char>*/
    _x_x4186 = kk_std_core_list_drop(_x_x4187, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4189 = kk_integer_add_small_const(kk_integer_from_small(4), 0, _ctx); /*int*/
    _x_x4185 = kk_std_core_list_take(_x_x4186, _x_x4189, _ctx); /*list<10001>*/
    s_0_10301 = kk_std_core_string_listchar_fs_string(_x_x4185, _ctx); /*string*/
    kk_std_core_types__maybe _match_x2746;
    bool _x_x4190;
    kk_std_core_types__optional _match_x2751 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x2751, _ctx)) {
      kk_box_t _box_x281 = _match_x2751._cons._Optional.value;
      bool _uniq_hex_581 = kk_bool_unbox(_box_x281);
      kk_std_core_types__optional_drop(_match_x2751, _ctx);
      _x_x4190 = _uniq_hex_581; /*bool*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x2751, _ctx);
      _x_x4190 = false; /*bool*/
    }
    _match_x2746 = kk_std_core_int_xparse(s_0_10301, _x_x4190, _ctx); /*maybe<int>*/
    if (kk_std_core_types__is_Just(_match_x2746, _ctx)) {
      kk_box_t _box_x282 = _match_x2746._cons.Just.value;
      kk_integer_t y_0 = kk_integer_unbox(_box_x282, _ctx);
      kk_integer_dup(y_0, _ctx);
      kk_std_core_types__maybe_drop(_match_x2746, _ctx);
      kk_string_t s_1_10305;
      kk_std_core_types__list _x_x4191;
      kk_std_core_types__list _x_x4192;
      kk_std_core_types__list _x_x4193;
      kk_string_t _x_x4194 = kk_string_dup(s, _ctx); /*string*/
      _x_x4193 = kk_std_core_string_list(_x_x4194, _ctx); /*list<char>*/
      _x_x4192 = kk_std_core_list_drop(_x_x4193, kk_integer_from_small(5), _ctx); /*list<10001>*/
      kk_integer_t _x_x4195 = kk_integer_add_small_const(kk_integer_from_small(7), -5, _ctx); /*int*/
      _x_x4191 = kk_std_core_list_take(_x_x4192, _x_x4195, _ctx); /*list<10001>*/
      s_1_10305 = kk_std_core_string_listchar_fs_string(_x_x4191, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2747;
      bool _x_x4196;
      kk_std_core_types__optional _match_x2750 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2750, _ctx)) {
        kk_box_t _box_x283 = _match_x2750._cons._Optional.value;
        bool _uniq_hex_581_0 = kk_bool_unbox(_box_x283);
        kk_std_core_types__optional_drop(_match_x2750, _ctx);
        _x_x4196 = _uniq_hex_581_0; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2750, _ctx);
        _x_x4196 = false; /*bool*/
      }
      _match_x2747 = kk_std_core_int_xparse(s_1_10305, _x_x4196, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2747, _ctx)) {
        kk_box_t _box_x284 = _match_x2747._cons.Just.value;
        kk_integer_t m = kk_integer_unbox(_box_x284, _ctx);
        kk_integer_dup(m, _ctx);
        kk_std_core_types__maybe_drop(_match_x2747, _ctx);
        kk_string_t s_2_10309;
        kk_std_core_types__list _x_x4197;
        kk_std_core_types__list _x_x4198;
        kk_std_core_types__list _x_x4199 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4198 = kk_std_core_list_drop(_x_x4199, kk_integer_from_small(8), _ctx); /*list<10001>*/
        kk_integer_t _x_x4200 = kk_integer_add_small_const(kk_integer_from_small(10), -8, _ctx); /*int*/
        _x_x4197 = kk_std_core_list_take(_x_x4198, _x_x4200, _ctx); /*list<10001>*/
        s_2_10309 = kk_std_core_string_listchar_fs_string(_x_x4197, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2748;
        bool _x_x4201;
        kk_std_core_types__optional _match_x2749 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2749, _ctx)) {
          kk_box_t _box_x285 = _match_x2749._cons._Optional.value;
          bool _uniq_hex_581_1 = kk_bool_unbox(_box_x285);
          kk_std_core_types__optional_drop(_match_x2749, _ctx);
          _x_x4201 = _uniq_hex_581_1; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2749, _ctx);
          _x_x4201 = false; /*bool*/
        }
        _match_x2748 = kk_std_core_int_xparse(s_2_10309, _x_x4201, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2748, _ctx)) {
          kk_box_t _box_x286 = _match_x2748._cons.Just.value;
          kk_integer_t d = kk_integer_unbox(_box_x286, _ctx);
          kk_integer_dup(d, _ctx);
          kk_std_core_types__maybe_drop(_match_x2748, _ctx);
          kk_box_t _x_x4202;
          kk_std_core_types__tuple3 _x_x4203 = kk_std_core_types__new_Tuple3(kk_integer_box(y_0, _ctx), kk_integer_box(m, _ctx), kk_integer_box(d, _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4202 = kk_std_core_types__tuple3_box(_x_x4203, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4202, _ctx);
        }
        {
          kk_integer_drop(y_0, _ctx);
          kk_integer_drop(m, _ctx);
          kk_box_t _x_x4204;
          kk_string_t _x_x4205;
          kk_define_string_literal(static, _s_x4206, 11, "invalid day", _ctx)
          _x_x4205 = kk_string_dup(_s_x4206, _ctx); /*string*/
          _x_x4204 = kk_string_box(_x_x4205); /*10014*/
          return kk_std_core_types__new_Left(_x_x4204, _ctx);
        }
      }
      {
        kk_integer_drop(y_0, _ctx);
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4207;
        kk_string_t _x_x4208;
        kk_define_string_literal(static, _s_x4209, 13, "invalid month", _ctx)
        _x_x4208 = kk_string_dup(_s_x4209, _ctx); /*string*/
        _x_x4207 = kk_string_box(_x_x4208); /*10014*/
        return kk_std_core_types__new_Left(_x_x4207, _ctx);
      }
    }
    {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4210;
      kk_string_t _x_x4211;
      kk_define_string_literal(static, _s_x4212, 12, "invalid year", _ctx)
      _x_x4211 = kk_string_dup(_s_x4212, _ctx); /*string*/
      _x_x4210 = kk_string_box(_x_x4211); /*10014*/
      return kk_std_core_types__new_Left(_x_x4210, _ctx);
    }
  }
  {
    kk_string_t _b_x294_302;
    kk_string_t _x_x4213;
    kk_define_string_literal(static, _s_x4214, 14, "invalid date: ", _ctx)
    _x_x4213 = kk_string_dup(_s_x4214, _ctx); /*string*/
    _b_x294_302 = kk_std_core_types__lp__plus__plus__rp_(_x_x4213, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x294_302), _ctx);
  }
}

kk_std_core_types__either kk_hml__types_hc__time__parts(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,(int, int, int)> */ 
  bool b_10313;
  kk_string_t _x_x4215 = kk_string_dup(s, _ctx); /*string*/
  b_10313 = kk_hml__types_hc__is__valid__time(_x_x4215, _ctx); /*bool*/
  if (b_10313) {
    bool _match_x2733;
    kk_integer_t _brw_x2744;
    kk_string_t _x_x4216 = kk_string_dup(s, _ctx); /*string*/
    _brw_x2744 = kk_std_core_string_chars_fs_count(_x_x4216, _ctx); /*int*/
    bool _brw_x2745 = kk_integer_eq_borrow(_brw_x2744,(kk_integer_from_small(5)),kk_context()); /*bool*/;
    kk_integer_drop(_brw_x2744, _ctx);
    _match_x2733 = _brw_x2745; /*bool*/
    if (_match_x2733) {
      kk_string_t s_0_10314;
      kk_std_core_types__list _x_x4217;
      kk_std_core_types__list _x_x4218;
      kk_std_core_types__list _x_x4219;
      kk_string_t _x_x4220 = kk_string_dup(s, _ctx); /*string*/
      _x_x4219 = kk_std_core_string_list(_x_x4220, _ctx); /*list<char>*/
      _x_x4218 = kk_std_core_list_drop(_x_x4219, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4221 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4217 = kk_std_core_list_take(_x_x4218, _x_x4221, _ctx); /*list<10001>*/
      s_0_10314 = kk_std_core_string_listchar_fs_string(_x_x4217, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2740;
      bool _x_x4222;
      kk_std_core_types__optional _match_x2743 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2743, _ctx)) {
        kk_box_t _box_x303 = _match_x2743._cons._Optional.value;
        bool _uniq_hex_581 = kk_bool_unbox(_box_x303);
        kk_std_core_types__optional_drop(_match_x2743, _ctx);
        _x_x4222 = _uniq_hex_581; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2743, _ctx);
        _x_x4222 = false; /*bool*/
      }
      _match_x2740 = kk_std_core_int_xparse(s_0_10314, _x_x4222, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2740, _ctx)) {
        kk_box_t _box_x304 = _match_x2740._cons.Just.value;
        kk_integer_t h = kk_integer_unbox(_box_x304, _ctx);
        kk_integer_dup(h, _ctx);
        kk_std_core_types__maybe_drop(_match_x2740, _ctx);
        kk_string_t s_1_10318;
        kk_std_core_types__list _x_x4223;
        kk_std_core_types__list _x_x4224;
        kk_std_core_types__list _x_x4225 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4224 = kk_std_core_list_drop(_x_x4225, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4226 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4223 = kk_std_core_list_take(_x_x4224, _x_x4226, _ctx); /*list<10001>*/
        s_1_10318 = kk_std_core_string_listchar_fs_string(_x_x4223, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2741;
        bool _x_x4227;
        kk_std_core_types__optional _match_x2742 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2742, _ctx)) {
          kk_box_t _box_x305 = _match_x2742._cons._Optional.value;
          bool _uniq_hex_581_0 = kk_bool_unbox(_box_x305);
          kk_std_core_types__optional_drop(_match_x2742, _ctx);
          _x_x4227 = _uniq_hex_581_0; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2742, _ctx);
          _x_x4227 = false; /*bool*/
        }
        _match_x2741 = kk_std_core_int_xparse(s_1_10318, _x_x4227, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2741, _ctx)) {
          kk_box_t _box_x306 = _match_x2741._cons.Just.value;
          kk_integer_t m = kk_integer_unbox(_box_x306, _ctx);
          kk_integer_dup(m, _ctx);
          kk_std_core_types__maybe_drop(_match_x2741, _ctx);
          kk_box_t _x_x4228;
          kk_std_core_types__tuple3 _x_x4229 = kk_std_core_types__new_Tuple3(kk_integer_box(h, _ctx), kk_integer_box(m, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*(10041, 10042, 10043)*/
          _x_x4228 = kk_std_core_types__tuple3_box(_x_x4229, _ctx); /*10015*/
          return kk_std_core_types__new_Right(_x_x4228, _ctx);
        }
        {
          kk_integer_drop(h, _ctx);
          kk_box_t _x_x4230;
          kk_string_t _x_x4231;
          kk_define_string_literal(static, _s_x4232, 14, "invalid minute", _ctx)
          _x_x4231 = kk_string_dup(_s_x4232, _ctx); /*string*/
          _x_x4230 = kk_string_box(_x_x4231); /*10014*/
          return kk_std_core_types__new_Left(_x_x4230, _ctx);
        }
      }
      {
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4233;
        kk_string_t _x_x4234;
        kk_define_string_literal(static, _s_x4235, 12, "invalid hour", _ctx)
        _x_x4234 = kk_string_dup(_s_x4235, _ctx); /*string*/
        _x_x4233 = kk_string_box(_x_x4234); /*10014*/
        return kk_std_core_types__new_Left(_x_x4233, _ctx);
      }
    }
    {
      kk_string_t s_2_10322;
      kk_std_core_types__list _x_x4236;
      kk_std_core_types__list _x_x4237;
      kk_std_core_types__list _x_x4238;
      kk_string_t _x_x4239 = kk_string_dup(s, _ctx); /*string*/
      _x_x4238 = kk_std_core_string_list(_x_x4239, _ctx); /*list<char>*/
      _x_x4237 = kk_std_core_list_drop(_x_x4238, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4240 = kk_integer_add_small_const(kk_integer_from_small(2), 0, _ctx); /*int*/
      _x_x4236 = kk_std_core_list_take(_x_x4237, _x_x4240, _ctx); /*list<10001>*/
      s_2_10322 = kk_std_core_string_listchar_fs_string(_x_x4236, _ctx); /*string*/
      kk_std_core_types__maybe _match_x2734;
      bool _x_x4241;
      kk_std_core_types__optional _match_x2739 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x2739, _ctx)) {
        kk_box_t _box_x313 = _match_x2739._cons._Optional.value;
        bool _uniq_hex_581_1 = kk_bool_unbox(_box_x313);
        kk_std_core_types__optional_drop(_match_x2739, _ctx);
        _x_x4241 = _uniq_hex_581_1; /*bool*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x2739, _ctx);
        _x_x4241 = false; /*bool*/
      }
      _match_x2734 = kk_std_core_int_xparse(s_2_10322, _x_x4241, _ctx); /*maybe<int>*/
      if (kk_std_core_types__is_Just(_match_x2734, _ctx)) {
        kk_box_t _box_x314 = _match_x2734._cons.Just.value;
        kk_integer_t h_0 = kk_integer_unbox(_box_x314, _ctx);
        kk_integer_dup(h_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2734, _ctx);
        kk_string_t s_3_10326;
        kk_std_core_types__list _x_x4242;
        kk_std_core_types__list _x_x4243;
        kk_std_core_types__list _x_x4244;
        kk_string_t _x_x4245 = kk_string_dup(s, _ctx); /*string*/
        _x_x4244 = kk_std_core_string_list(_x_x4245, _ctx); /*list<char>*/
        _x_x4243 = kk_std_core_list_drop(_x_x4244, kk_integer_from_small(3), _ctx); /*list<10001>*/
        kk_integer_t _x_x4246 = kk_integer_add_small_const(kk_integer_from_small(5), -3, _ctx); /*int*/
        _x_x4242 = kk_std_core_list_take(_x_x4243, _x_x4246, _ctx); /*list<10001>*/
        s_3_10326 = kk_std_core_string_listchar_fs_string(_x_x4242, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2735;
        bool _x_x4247;
        kk_std_core_types__optional _match_x2738 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2738, _ctx)) {
          kk_box_t _box_x315 = _match_x2738._cons._Optional.value;
          bool _uniq_hex_581_2 = kk_bool_unbox(_box_x315);
          kk_std_core_types__optional_drop(_match_x2738, _ctx);
          _x_x4247 = _uniq_hex_581_2; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2738, _ctx);
          _x_x4247 = false; /*bool*/
        }
        _match_x2735 = kk_std_core_int_xparse(s_3_10326, _x_x4247, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2735, _ctx)) {
          kk_box_t _box_x316 = _match_x2735._cons.Just.value;
          kk_integer_t m_0 = kk_integer_unbox(_box_x316, _ctx);
          kk_integer_dup(m_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2735, _ctx);
          kk_string_t s_4_10330;
          kk_std_core_types__list _x_x4248;
          kk_std_core_types__list _x_x4249;
          kk_std_core_types__list _x_x4250 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4249 = kk_std_core_list_drop(_x_x4250, kk_integer_from_small(6), _ctx); /*list<10001>*/
          kk_integer_t _x_x4251 = kk_integer_add_small_const(kk_integer_from_small(8), -6, _ctx); /*int*/
          _x_x4248 = kk_std_core_list_take(_x_x4249, _x_x4251, _ctx); /*list<10001>*/
          s_4_10330 = kk_std_core_string_listchar_fs_string(_x_x4248, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2736;
          bool _x_x4252;
          kk_std_core_types__optional _match_x2737 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2737, _ctx)) {
            kk_box_t _box_x317 = _match_x2737._cons._Optional.value;
            bool _uniq_hex_581_3 = kk_bool_unbox(_box_x317);
            kk_std_core_types__optional_drop(_match_x2737, _ctx);
            _x_x4252 = _uniq_hex_581_3; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2737, _ctx);
            _x_x4252 = false; /*bool*/
          }
          _match_x2736 = kk_std_core_int_xparse(s_4_10330, _x_x4252, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2736, _ctx)) {
            kk_box_t _box_x318 = _match_x2736._cons.Just.value;
            kk_integer_t sec = kk_integer_unbox(_box_x318, _ctx);
            kk_integer_dup(sec, _ctx);
            kk_std_core_types__maybe_drop(_match_x2736, _ctx);
            kk_box_t _x_x4253;
            kk_std_core_types__tuple3 _x_x4254 = kk_std_core_types__new_Tuple3(kk_integer_box(h_0, _ctx), kk_integer_box(m_0, _ctx), kk_integer_box(sec, _ctx), _ctx); /*(10041, 10042, 10043)*/
            _x_x4253 = kk_std_core_types__tuple3_box(_x_x4254, _ctx); /*10015*/
            return kk_std_core_types__new_Right(_x_x4253, _ctx);
          }
          {
            kk_integer_drop(m_0, _ctx);
            kk_integer_drop(h_0, _ctx);
            kk_box_t _x_x4255;
            kk_string_t _x_x4256;
            kk_define_string_literal(static, _s_x4257, 14, "invalid second", _ctx)
            _x_x4256 = kk_string_dup(_s_x4257, _ctx); /*string*/
            _x_x4255 = kk_string_box(_x_x4256); /*10014*/
            return kk_std_core_types__new_Left(_x_x4255, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(h_0, _ctx);
          kk_box_t _x_x4258;
          kk_string_t _x_x4259;
          kk_define_string_literal(static, _s_x4260, 14, "invalid minute", _ctx)
          _x_x4259 = kk_string_dup(_s_x4260, _ctx); /*string*/
          _x_x4258 = kk_string_box(_x_x4259); /*10014*/
          return kk_std_core_types__new_Left(_x_x4258, _ctx);
        }
      }
      {
        kk_string_drop(s, _ctx);
        kk_box_t _x_x4261;
        kk_string_t _x_x4262;
        kk_define_string_literal(static, _s_x4263, 12, "invalid hour", _ctx)
        _x_x4262 = kk_string_dup(_s_x4263, _ctx); /*string*/
        _x_x4261 = kk_string_box(_x_x4262); /*10014*/
        return kk_std_core_types__new_Left(_x_x4261, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x326_340;
    kk_string_t _x_x4264;
    kk_define_string_literal(static, _s_x4265, 14, "invalid time: ", _ctx)
    _x_x4264 = kk_string_dup(_s_x4265, _ctx); /*string*/
    _b_x326_340 = kk_std_core_types__lp__plus__plus__rp_(_x_x4264, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x326_340), _ctx);
  }
}

kk_std_core_types__either kk_hml__types_hc__datetime__date(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2729;
  kk_integer_t _brw_x2731;
  kk_string_t _x_x4266 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2731 = kk_std_core_string_chars_fs_count(_x_x4266, _ctx); /*int*/
  bool _brw_x2732 = kk_integer_gte_borrow(_brw_x2731,(kk_integer_from_small(10)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2731, _ctx);
  _match_x2729 = _brw_x2732; /*bool*/
  if (_match_x2729) {
    bool _match_x2730;
    kk_string_t _x_x4267;
    kk_std_core_types__list _x_x4268;
    kk_std_core_types__list _x_x4269;
    kk_std_core_types__list _x_x4270;
    kk_string_t _x_x4271 = kk_string_dup(s, _ctx); /*string*/
    _x_x4270 = kk_std_core_string_list(_x_x4271, _ctx); /*list<char>*/
    _x_x4269 = kk_std_core_list_drop(_x_x4270, kk_integer_from_small(0), _ctx); /*list<10001>*/
    kk_integer_t _x_x4272 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
    _x_x4268 = kk_std_core_list_take(_x_x4269, _x_x4272, _ctx); /*list<10001>*/
    _x_x4267 = kk_std_core_string_listchar_fs_string(_x_x4268, _ctx); /*string*/
    _match_x2730 = kk_hml__types_hc__is__valid__date(_x_x4267, _ctx); /*bool*/
    if (_match_x2730) {
      kk_string_t _b_x341_344;
      kk_std_core_types__list _x_x4273;
      kk_std_core_types__list _x_x4274;
      kk_std_core_types__list _x_x4275 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4274 = kk_std_core_list_drop(_x_x4275, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4276 = kk_integer_add_small_const(kk_integer_from_small(10), 0, _ctx); /*int*/
      _x_x4273 = kk_std_core_list_take(_x_x4274, _x_x4276, _ctx); /*list<10001>*/
      _b_x341_344 = kk_std_core_string_listchar_fs_string(_x_x4273, _ctx); /*string*/
      return kk_std_core_types__new_Right(kk_string_box(_b_x341_344), _ctx);
    }
    {
      kk_string_t _b_x342_345;
      kk_string_t _x_x4277;
      kk_define_string_literal(static, _s_x4278, 18, "no valid date in: ", _ctx)
      _x_x4277 = kk_string_dup(_s_x4278, _ctx); /*string*/
      _b_x342_345 = kk_std_core_types__lp__plus__plus__rp_(_x_x4277, s, _ctx); /*string*/
      return kk_std_core_types__new_Left(kk_string_box(_b_x342_345), _ctx);
    }
  }
  {
    kk_string_t _b_x343_346;
    kk_string_t _x_x4279;
    kk_define_string_literal(static, _s_x4280, 18, "no valid date in: ", _ctx)
    _x_x4279 = kk_string_dup(_s_x4280, _ctx); /*string*/
    _b_x343_346 = kk_std_core_types__lp__plus__plus__rp_(_x_x4279, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x343_346), _ctx);
  }
}

kk_string_t kk_hml__types_hc__strip__offset(kk_string_t rest, kk_context_t* _ctx) { /* (rest : string) -> string */ 
  bool _match_x2714;
  kk_string_t _x_x4281 = kk_string_dup(rest, _ctx); /*string*/
  kk_string_t _x_x4282;
  kk_define_string_literal(static, _s_x4283, 1, "Z", _ctx)
  _x_x4282 = kk_string_dup(_s_x4283, _ctx); /*string*/
  _match_x2714 = kk_string_contains(_x_x4281,_x_x4282,kk_context()); /*bool*/
  if (_match_x2714) {
    kk_std_core_types__maybe _match_x2725;
    kk_string_t _x_x4284 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4285;
    kk_define_string_literal(static, _s_x4286, 1, "Z", _ctx)
    _x_x4285 = kk_string_dup(_s_x4286, _ctx); /*string*/
    _match_x2725 = kk_std_core_sslice_find(_x_x4284, _x_x4285, _ctx); /*maybe<sslice/sslice>*/
    if (kk_std_core_types__is_Just(_match_x2725, _ctx)) {
      kk_box_t _box_x347 = _match_x2725._cons.Just.value;
      kk_std_core_sslice__sslice hc____ss = kk_std_core_sslice__sslice_unbox(_box_x347, KK_BORROWED, _ctx);
      kk_std_core_sslice__sslice_dup(hc____ss, _ctx);
      kk_std_core_types__maybe_drop(_match_x2725, _ctx);
      kk_integer_t i;
      kk_std_core_sslice__sslice _x_x4287;
      {
        kk_string_t s = hc____ss.str;
        kk_integer_t start = hc____ss.start;
        kk_string_dup(s, _ctx);
        kk_integer_dup(start, _ctx);
        kk_std_core_sslice__sslice_drop(hc____ss, _ctx);
        _x_x4287 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
      }
      i = kk_std_core_sslice_count(_x_x4287, _ctx); /*int*/
      kk_std_core_types__list _x_x4288;
      kk_std_core_types__list _x_x4289;
      kk_std_core_types__list _x_x4290 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
      _x_x4289 = kk_std_core_list_drop(_x_x4290, kk_integer_from_small(0), _ctx); /*list<10001>*/
      kk_integer_t _x_x4291 = kk_integer_add_small_const(i, 0, _ctx); /*int*/
      _x_x4288 = kk_std_core_list_take(_x_x4289, _x_x4291, _ctx); /*list<10001>*/
      return kk_std_core_string_listchar_fs_string(_x_x4288, _ctx);
    }
    {
      kk_std_core_types__maybe _match_x2726 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
      if (kk_std_core_types__is_Just(_match_x2726, _ctx)) {
        kk_box_t _box_x348 = _match_x2726._cons.Just.value;
        kk_integer_t i_0 = kk_integer_unbox(_box_x348, _ctx);
        kk_integer_dup(i_0, _ctx);
        kk_std_core_types__maybe_drop(_match_x2726, _ctx);
        kk_std_core_types__list _x_x4292;
        kk_std_core_types__list _x_x4293;
        kk_std_core_types__list _x_x4294 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4293 = kk_std_core_list_drop(_x_x4294, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4295 = kk_integer_add_small_const(i_0, 0, _ctx); /*int*/
        _x_x4292 = kk_std_core_list_take(_x_x4293, _x_x4295, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4292, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2727;
        kk_string_t _x_x4296 = kk_string_dup(rest, _ctx); /*string*/
        kk_string_t _x_x4297;
        kk_define_string_literal(static, _s_x4298, 1, "z", _ctx)
        _x_x4297 = kk_string_dup(_s_x4298, _ctx); /*string*/
        _match_x2727 = kk_std_core_sslice_find(_x_x4296, _x_x4297, _ctx); /*maybe<sslice/sslice>*/
        if (kk_std_core_types__is_Just(_match_x2727, _ctx)) {
          kk_box_t _box_x349 = _match_x2727._cons.Just.value;
          kk_std_core_sslice__sslice hc____ss_0 = kk_std_core_sslice__sslice_unbox(_box_x349, KK_BORROWED, _ctx);
          kk_std_core_sslice__sslice_dup(hc____ss_0, _ctx);
          kk_std_core_types__maybe_drop(_match_x2727, _ctx);
          kk_integer_t i_0_0;
          kk_std_core_sslice__sslice _x_x4299;
          {
            kk_string_t s_0 = hc____ss_0.str;
            kk_integer_t start_0 = hc____ss_0.start;
            kk_string_dup(s_0, _ctx);
            kk_integer_dup(start_0, _ctx);
            kk_std_core_sslice__sslice_drop(hc____ss_0, _ctx);
            _x_x4299 = kk_std_core_sslice__new_Sslice(s_0, kk_integer_from_small(0), start_0, _ctx); /*sslice/sslice*/
          }
          i_0_0 = kk_std_core_sslice_count(_x_x4299, _ctx); /*int*/
          kk_std_core_types__list _x_x4300;
          kk_std_core_types__list _x_x4301;
          kk_std_core_types__list _x_x4302 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4301 = kk_std_core_list_drop(_x_x4302, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4303 = kk_integer_add_small_const(i_0_0, 0, _ctx); /*int*/
          _x_x4300 = kk_std_core_list_take(_x_x4301, _x_x4303, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4300, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2728 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
          if (kk_std_core_types__is_Just(_match_x2728, _ctx)) {
            kk_box_t _box_x350 = _match_x2728._cons.Just.value;
            kk_integer_t i_0_1 = kk_integer_unbox(_box_x350, _ctx);
            kk_integer_dup(i_0_1, _ctx);
            kk_std_core_types__maybe_drop(_match_x2728, _ctx);
            kk_std_core_types__list _x_x4304;
            kk_std_core_types__list _x_x4305;
            kk_std_core_types__list _x_x4306 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4305 = kk_std_core_list_drop(_x_x4306, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4307 = kk_integer_add_small_const(i_0_1, 0, _ctx); /*int*/
            _x_x4304 = kk_std_core_list_take(_x_x4305, _x_x4307, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4304, _ctx);
          }
          {
            return rest;
          }
        }
      }
    }
  }
  {
    bool _match_x2715;
    kk_string_t _x_x4308 = kk_string_dup(rest, _ctx); /*string*/
    kk_string_t _x_x4309;
    kk_define_string_literal(static, _s_x4310, 1, "z", _ctx)
    _x_x4309 = kk_string_dup(_s_x4310, _ctx); /*string*/
    _match_x2715 = kk_string_contains(_x_x4308,_x_x4309,kk_context()); /*bool*/
    if (_match_x2715) {
      kk_std_core_types__maybe _match_x2721;
      kk_string_t _x_x4311 = kk_string_dup(rest, _ctx); /*string*/
      kk_string_t _x_x4312;
      kk_define_string_literal(static, _s_x4313, 1, "Z", _ctx)
      _x_x4312 = kk_string_dup(_s_x4313, _ctx); /*string*/
      _match_x2721 = kk_std_core_sslice_find(_x_x4311, _x_x4312, _ctx); /*maybe<sslice/sslice>*/
      if (kk_std_core_types__is_Just(_match_x2721, _ctx)) {
        kk_box_t _box_x351 = _match_x2721._cons.Just.value;
        kk_std_core_sslice__sslice hc____ss_1 = kk_std_core_sslice__sslice_unbox(_box_x351, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(hc____ss_1, _ctx);
        kk_std_core_types__maybe_drop(_match_x2721, _ctx);
        kk_integer_t i_1;
        kk_std_core_sslice__sslice _x_x4314;
        {
          kk_string_t s_1 = hc____ss_1.str;
          kk_integer_t start_1 = hc____ss_1.start;
          kk_string_dup(s_1, _ctx);
          kk_integer_dup(start_1, _ctx);
          kk_std_core_sslice__sslice_drop(hc____ss_1, _ctx);
          _x_x4314 = kk_std_core_sslice__new_Sslice(s_1, kk_integer_from_small(0), start_1, _ctx); /*sslice/sslice*/
        }
        i_1 = kk_std_core_sslice_count(_x_x4314, _ctx); /*int*/
        kk_std_core_types__list _x_x4315;
        kk_std_core_types__list _x_x4316;
        kk_std_core_types__list _x_x4317 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
        _x_x4316 = kk_std_core_list_drop(_x_x4317, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4318 = kk_integer_add_small_const(i_1, 0, _ctx); /*int*/
        _x_x4315 = kk_std_core_list_take(_x_x4316, _x_x4318, _ctx); /*list<10001>*/
        return kk_std_core_string_listchar_fs_string(_x_x4315, _ctx);
      }
      {
        kk_std_core_types__maybe _match_x2722 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
        if (kk_std_core_types__is_Just(_match_x2722, _ctx)) {
          kk_box_t _box_x352 = _match_x2722._cons.Just.value;
          kk_integer_t i_2 = kk_integer_unbox(_box_x352, _ctx);
          kk_integer_dup(i_2, _ctx);
          kk_std_core_types__maybe_drop(_match_x2722, _ctx);
          kk_std_core_types__list _x_x4319;
          kk_std_core_types__list _x_x4320;
          kk_std_core_types__list _x_x4321 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4320 = kk_std_core_list_drop(_x_x4321, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4322 = kk_integer_add_small_const(i_2, 0, _ctx); /*int*/
          _x_x4319 = kk_std_core_list_take(_x_x4320, _x_x4322, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4319, _ctx);
        }
        {
          kk_std_core_types__maybe _match_x2723;
          kk_string_t _x_x4323 = kk_string_dup(rest, _ctx); /*string*/
          kk_string_t _x_x4324;
          kk_define_string_literal(static, _s_x4325, 1, "z", _ctx)
          _x_x4324 = kk_string_dup(_s_x4325, _ctx); /*string*/
          _match_x2723 = kk_std_core_sslice_find(_x_x4323, _x_x4324, _ctx); /*maybe<sslice/sslice>*/
          if (kk_std_core_types__is_Just(_match_x2723, _ctx)) {
            kk_box_t _box_x353 = _match_x2723._cons.Just.value;
            kk_std_core_sslice__sslice hc____ss_0_0 = kk_std_core_sslice__sslice_unbox(_box_x353, KK_BORROWED, _ctx);
            kk_std_core_sslice__sslice_dup(hc____ss_0_0, _ctx);
            kk_std_core_types__maybe_drop(_match_x2723, _ctx);
            kk_integer_t i_0_2;
            kk_std_core_sslice__sslice _x_x4326;
            {
              kk_string_t s_2 = hc____ss_0_0.str;
              kk_integer_t start_2 = hc____ss_0_0.start;
              kk_string_dup(s_2, _ctx);
              kk_integer_dup(start_2, _ctx);
              kk_std_core_sslice__sslice_drop(hc____ss_0_0, _ctx);
              _x_x4326 = kk_std_core_sslice__new_Sslice(s_2, kk_integer_from_small(0), start_2, _ctx); /*sslice/sslice*/
            }
            i_0_2 = kk_std_core_sslice_count(_x_x4326, _ctx); /*int*/
            kk_std_core_types__list _x_x4327;
            kk_std_core_types__list _x_x4328;
            kk_std_core_types__list _x_x4329 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4328 = kk_std_core_list_drop(_x_x4329, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4330 = kk_integer_add_small_const(i_0_2, 0, _ctx); /*int*/
            _x_x4327 = kk_std_core_list_take(_x_x4328, _x_x4330, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4327, _ctx);
          }
          {
            kk_std_core_types__maybe _match_x2724 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
            if (kk_std_core_types__is_Just(_match_x2724, _ctx)) {
              kk_box_t _box_x354 = _match_x2724._cons.Just.value;
              kk_integer_t i_0_3 = kk_integer_unbox(_box_x354, _ctx);
              kk_integer_dup(i_0_3, _ctx);
              kk_std_core_types__maybe_drop(_match_x2724, _ctx);
              kk_std_core_types__list _x_x4331;
              kk_std_core_types__list _x_x4332;
              kk_std_core_types__list _x_x4333 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
              _x_x4332 = kk_std_core_list_drop(_x_x4333, kk_integer_from_small(0), _ctx); /*list<10001>*/
              kk_integer_t _x_x4334 = kk_integer_add_small_const(i_0_3, 0, _ctx); /*int*/
              _x_x4331 = kk_std_core_list_take(_x_x4332, _x_x4334, _ctx); /*list<10001>*/
              return kk_std_core_string_listchar_fs_string(_x_x4331, _ctx);
            }
            {
              return rest;
            }
          }
        }
      }
    }
    {
      bool _match_x2716;
      kk_integer_t _brw_x2719;
      kk_string_t _x_x4335 = kk_string_dup(rest, _ctx); /*string*/
      _brw_x2719 = kk_std_core_string_chars_fs_count(_x_x4335, _ctx); /*int*/
      bool _brw_x2720 = kk_integer_gte_borrow(_brw_x2719,(kk_integer_from_small(11)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2719, _ctx);
      _match_x2716 = _brw_x2720; /*bool*/
      if (_match_x2716) {
        kk_integer_t x_9_10362;
        kk_string_t _x_x4336 = kk_string_dup(rest, _ctx); /*string*/
        x_9_10362 = kk_std_core_string_chars_fs_count(_x_x4336, _ctx); /*int*/
        kk_integer_t x_8_10360 = kk_integer_add_small_const(x_9_10362, -5, _ctx); /*int*/;
        kk_integer_t x_10_10364;
        kk_string_t _x_x4337 = kk_string_dup(rest, _ctx); /*string*/
        x_10_10364 = kk_std_core_string_chars_fs_count(_x_x4337, _ctx); /*int*/
        kk_integer_t y_8_10361 = kk_integer_add_small_const(x_10_10364, -6, _ctx); /*int*/;
        kk_integer_t x_7_10358;
        kk_string_t _x_x4338 = kk_string_dup(rest, _ctx); /*string*/
        x_7_10358 = kk_std_core_string_chars_fs_count(_x_x4338, _ctx); /*int*/
        bool _match_x2717;
        kk_string_t _x_x4339;
        kk_std_core_types__list _x_x4340;
        kk_std_core_types__list _x_x4341;
        kk_std_core_types__list _x_x4342;
        kk_string_t _x_x4343 = kk_string_dup(rest, _ctx); /*string*/
        _x_x4342 = kk_std_core_string_list(_x_x4343, _ctx); /*list<char>*/
        kk_integer_t _x_x4344 = kk_integer_add_small_const(x_7_10358, -6, _ctx); /*int*/
        _x_x4341 = kk_std_core_list_drop(_x_x4342, _x_x4344, _ctx); /*list<10001>*/
        kk_integer_t _x_x4345 = kk_integer_sub(x_8_10360,y_8_10361,kk_context()); /*int*/
        _x_x4340 = kk_std_core_list_take(_x_x4341, _x_x4345, _ctx); /*list<10001>*/
        _x_x4339 = kk_std_core_string_listchar_fs_string(_x_x4340, _ctx); /*string*/
        kk_string_t _x_x4346;
        kk_define_string_literal(static, _s_x4347, 1, "+", _ctx)
        _x_x4346 = kk_string_dup(_s_x4347, _ctx); /*string*/
        _match_x2717 = kk_string_is_eq(_x_x4339,_x_x4346,kk_context()); /*bool*/
        if (_match_x2717) {
          kk_integer_t x_12_10368;
          kk_string_t _x_x4348 = kk_string_dup(rest, _ctx); /*string*/
          x_12_10368 = kk_std_core_string_chars_fs_count(_x_x4348, _ctx); /*int*/
          kk_integer_t x_11_10366 = kk_integer_add_small_const(x_12_10368, -6, _ctx); /*int*/;
          kk_std_core_types__list _x_x4349;
          kk_std_core_types__list _x_x4350;
          kk_std_core_types__list _x_x4351 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
          _x_x4350 = kk_std_core_list_drop(_x_x4351, kk_integer_from_small(0), _ctx); /*list<10001>*/
          kk_integer_t _x_x4352 = kk_integer_add_small_const(x_11_10366, 0, _ctx); /*int*/
          _x_x4349 = kk_std_core_list_take(_x_x4350, _x_x4352, _ctx); /*list<10001>*/
          return kk_std_core_string_listchar_fs_string(_x_x4349, _ctx);
        }
        {
          kk_integer_t x_15_10374;
          kk_string_t _x_x4353 = kk_string_dup(rest, _ctx); /*string*/
          x_15_10374 = kk_std_core_string_chars_fs_count(_x_x4353, _ctx); /*int*/
          kk_integer_t x_14_10372 = kk_integer_add_small_const(x_15_10374, -5, _ctx); /*int*/;
          kk_integer_t x_16_10376;
          kk_string_t _x_x4354 = kk_string_dup(rest, _ctx); /*string*/
          x_16_10376 = kk_std_core_string_chars_fs_count(_x_x4354, _ctx); /*int*/
          kk_integer_t y_14_10373 = kk_integer_add_small_const(x_16_10376, -6, _ctx); /*int*/;
          kk_integer_t x_13_10370;
          kk_string_t _x_x4355 = kk_string_dup(rest, _ctx); /*string*/
          x_13_10370 = kk_std_core_string_chars_fs_count(_x_x4355, _ctx); /*int*/
          bool _match_x2718;
          kk_string_t _x_x4356;
          kk_std_core_types__list _x_x4357;
          kk_std_core_types__list _x_x4358;
          kk_std_core_types__list _x_x4359;
          kk_string_t _x_x4360 = kk_string_dup(rest, _ctx); /*string*/
          _x_x4359 = kk_std_core_string_list(_x_x4360, _ctx); /*list<char>*/
          kk_integer_t _x_x4361 = kk_integer_add_small_const(x_13_10370, -6, _ctx); /*int*/
          _x_x4358 = kk_std_core_list_drop(_x_x4359, _x_x4361, _ctx); /*list<10001>*/
          kk_integer_t _x_x4362 = kk_integer_sub(x_14_10372,y_14_10373,kk_context()); /*int*/
          _x_x4357 = kk_std_core_list_take(_x_x4358, _x_x4362, _ctx); /*list<10001>*/
          _x_x4356 = kk_std_core_string_listchar_fs_string(_x_x4357, _ctx); /*string*/
          kk_string_t _x_x4363;
          kk_define_string_literal(static, _s_x4364, 1, "-", _ctx)
          _x_x4363 = kk_string_dup(_s_x4364, _ctx); /*string*/
          _match_x2718 = kk_string_is_eq(_x_x4356,_x_x4363,kk_context()); /*bool*/
          if (_match_x2718) {
            kk_integer_t x_18_10380;
            kk_string_t _x_x4365 = kk_string_dup(rest, _ctx); /*string*/
            x_18_10380 = kk_std_core_string_chars_fs_count(_x_x4365, _ctx); /*int*/
            kk_integer_t x_17_10378 = kk_integer_add_small_const(x_18_10380, -6, _ctx); /*int*/;
            kk_std_core_types__list _x_x4366;
            kk_std_core_types__list _x_x4367;
            kk_std_core_types__list _x_x4368 = kk_std_core_string_list(rest, _ctx); /*list<char>*/
            _x_x4367 = kk_std_core_list_drop(_x_x4368, kk_integer_from_small(0), _ctx); /*list<10001>*/
            kk_integer_t _x_x4369 = kk_integer_add_small_const(x_17_10378, 0, _ctx); /*int*/
            _x_x4366 = kk_std_core_list_take(_x_x4367, _x_x4369, _ctx); /*list<10001>*/
            return kk_std_core_string_listchar_fs_string(_x_x4366, _ctx);
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

kk_std_core_types__either kk_hml__types_hc__datetime__time(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,string> */ 
  bool _match_x2705;
  kk_integer_t _brw_x2712;
  kk_string_t _x_x4370 = kk_string_dup(s, _ctx); /*string*/
  _brw_x2712 = kk_std_core_string_chars_fs_count(_x_x4370, _ctx); /*int*/
  bool _brw_x2713 = kk_integer_lt_borrow(_brw_x2712,(kk_integer_from_small(16)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2712, _ctx);
  _match_x2705 = _brw_x2713; /*bool*/
  if (_match_x2705) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4371;
    kk_string_t _x_x4372;
    kk_define_string_literal(static, _s_x4373, 29, "string too short for datetime", _ctx)
    _x_x4372 = kk_string_dup(_s_x4373, _ctx); /*string*/
    _x_x4371 = kk_string_box(_x_x4372); /*10014*/
    return kk_std_core_types__new_Left(_x_x4371, _ctx);
  }
  {
    kk_string_t sep;
    kk_std_core_types__list _x_x4374;
    kk_std_core_types__list _x_x4375;
    kk_std_core_types__list _x_x4376;
    kk_string_t _x_x4377 = kk_string_dup(s, _ctx); /*string*/
    _x_x4376 = kk_std_core_string_list(_x_x4377, _ctx); /*list<char>*/
    _x_x4375 = kk_std_core_list_drop(_x_x4376, kk_integer_from_small(10), _ctx); /*list<10001>*/
    kk_integer_t _x_x4378 = kk_integer_add_small_const(kk_integer_from_small(11), -10, _ctx); /*int*/
    _x_x4374 = kk_std_core_list_take(_x_x4375, _x_x4378, _ctx); /*list<10001>*/
    sep = kk_std_core_string_listchar_fs_string(_x_x4374, _ctx); /*string*/
    bool _match_x2706;
    kk_string_t _x_x4379 = kk_string_dup(sep, _ctx); /*string*/
    kk_string_t _x_x4380;
    kk_define_string_literal(static, _s_x4381, 1, "T", _ctx)
    _x_x4380 = kk_string_dup(_s_x4381, _ctx); /*string*/
    _match_x2706 = kk_string_is_neq(_x_x4379,_x_x4380,kk_context()); /*bool*/
    if (_match_x2706) {
      bool _match_x2708;
      kk_string_t _x_x4382 = kk_string_dup(sep, _ctx); /*string*/
      kk_string_t _x_x4383;
      kk_define_string_literal(static, _s_x4384, 1, "t", _ctx)
      _x_x4383 = kk_string_dup(_s_x4384, _ctx); /*string*/
      _match_x2708 = kk_string_is_neq(_x_x4382,_x_x4383,kk_context()); /*bool*/
      if (_match_x2708) {
        bool _match_x2710;
        kk_string_t _x_x4385;
        kk_define_string_literal(static, _s_x4386, 1, " ", _ctx)
        _x_x4385 = kk_string_dup(_s_x4386, _ctx); /*string*/
        _match_x2710 = kk_string_is_neq(sep,_x_x4385,kk_context()); /*bool*/
        if (_match_x2710) {
          kk_string_drop(s, _ctx);
          kk_box_t _x_x4387;
          kk_string_t _x_x4388;
          kk_define_string_literal(static, _s_x4389, 27, "no datetime separator found", _ctx)
          _x_x4388 = kk_string_dup(_s_x4389, _ctx); /*string*/
          _x_x4387 = kk_string_box(_x_x4388); /*10014*/
          return kk_std_core_types__new_Left(_x_x4387, _ctx);
        }
        {
          kk_string_t time__part;
          kk_string_t _x_x4390;
          kk_std_core_types__list _x_x4391;
          kk_std_core_types__list _x_x4392 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4391 = kk_std_core_list_drop(_x_x4392, kk_integer_from_small(11), _ctx); /*list<10001>*/
          _x_x4390 = kk_std_core_string_listchar_fs_string(_x_x4391, _ctx); /*string*/
          time__part = kk_hml__types_hc__strip__offset(_x_x4390, _ctx); /*string*/
          bool _match_x2711;
          kk_string_t _x_x4393 = kk_string_dup(time__part, _ctx); /*string*/
          _match_x2711 = kk_hml__types_hc__is__valid__time(_x_x4393, _ctx); /*bool*/
          if (_match_x2711) {
            return kk_std_core_types__new_Right(kk_string_box(time__part), _ctx);
          }
          {
            kk_string_drop(time__part, _ctx);
            kk_box_t _x_x4394;
            kk_string_t _x_x4395;
            kk_define_string_literal(static, _s_x4396, 20, "invalid time portion", _ctx)
            _x_x4395 = kk_string_dup(_s_x4396, _ctx); /*string*/
            _x_x4394 = kk_string_box(_x_x4395); /*10014*/
            return kk_std_core_types__new_Left(_x_x4394, _ctx);
          }
        }
      }
      {
        kk_string_drop(sep, _ctx);
        kk_string_t time__part_0;
        kk_string_t _x_x4397;
        kk_std_core_types__list _x_x4398;
        kk_std_core_types__list _x_x4399 = kk_std_core_string_list(s, _ctx); /*list<char>*/
        _x_x4398 = kk_std_core_list_drop(_x_x4399, kk_integer_from_small(11), _ctx); /*list<10001>*/
        _x_x4397 = kk_std_core_string_listchar_fs_string(_x_x4398, _ctx); /*string*/
        time__part_0 = kk_hml__types_hc__strip__offset(_x_x4397, _ctx); /*string*/
        bool _match_x2709;
        kk_string_t _x_x4400 = kk_string_dup(time__part_0, _ctx); /*string*/
        _match_x2709 = kk_hml__types_hc__is__valid__time(_x_x4400, _ctx); /*bool*/
        if (_match_x2709) {
          return kk_std_core_types__new_Right(kk_string_box(time__part_0), _ctx);
        }
        {
          kk_string_drop(time__part_0, _ctx);
          kk_box_t _x_x4401;
          kk_string_t _x_x4402;
          kk_define_string_literal(static, _s_x4403, 20, "invalid time portion", _ctx)
          _x_x4402 = kk_string_dup(_s_x4403, _ctx); /*string*/
          _x_x4401 = kk_string_box(_x_x4402); /*10014*/
          return kk_std_core_types__new_Left(_x_x4401, _ctx);
        }
      }
    }
    {
      kk_string_drop(sep, _ctx);
      kk_string_t time__part_1;
      kk_string_t _x_x4404;
      kk_std_core_types__list _x_x4405;
      kk_std_core_types__list _x_x4406 = kk_std_core_string_list(s, _ctx); /*list<char>*/
      _x_x4405 = kk_std_core_list_drop(_x_x4406, kk_integer_from_small(11), _ctx); /*list<10001>*/
      _x_x4404 = kk_std_core_string_listchar_fs_string(_x_x4405, _ctx); /*string*/
      time__part_1 = kk_hml__types_hc__strip__offset(_x_x4404, _ctx); /*string*/
      bool _match_x2707;
      kk_string_t _x_x4407 = kk_string_dup(time__part_1, _ctx); /*string*/
      _match_x2707 = kk_hml__types_hc__is__valid__time(_x_x4407, _ctx); /*bool*/
      if (_match_x2707) {
        return kk_std_core_types__new_Right(kk_string_box(time__part_1), _ctx);
      }
      {
        kk_string_drop(time__part_1, _ctx);
        kk_box_t _x_x4408;
        kk_string_t _x_x4409;
        kk_define_string_literal(static, _s_x4410, 20, "invalid time portion", _ctx)
        _x_x4409 = kk_string_dup(_s_x4410, _ctx); /*string*/
        _x_x4408 = kk_string_box(_x_x4409); /*10014*/
        return kk_std_core_types__new_Left(_x_x4408, _ctx);
      }
    }
  }
}

kk_std_core_types__maybe kk_hml__types_hc__datetime__offset(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> maybe<string> */ 
  bool _match_x2696;
  kk_string_t _x_x4411 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4412;
  kk_define_string_literal(static, _s_x4413, 1, "Z", _ctx)
  _x_x4412 = kk_string_dup(_s_x4413, _ctx); /*string*/
  _match_x2696 = kk_string_contains(_x_x4411,_x_x4412,kk_context()); /*bool*/
  if (_match_x2696) {
    kk_string_drop(s, _ctx);
    kk_box_t _x_x4414;
    kk_string_t _x_x4415;
    kk_define_string_literal(static, _s_x4416, 1, "Z", _ctx)
    _x_x4415 = kk_string_dup(_s_x4416, _ctx); /*string*/
    _x_x4414 = kk_string_box(_x_x4415); /*10024*/
    return kk_std_core_types__new_Just(_x_x4414, _ctx);
  }
  {
    bool _match_x2697;
    kk_string_t _x_x4417 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4418;
    kk_define_string_literal(static, _s_x4419, 1, "z", _ctx)
    _x_x4418 = kk_string_dup(_s_x4419, _ctx); /*string*/
    _match_x2697 = kk_string_contains(_x_x4417,_x_x4418,kk_context()); /*bool*/
    if (_match_x2697) {
      kk_string_drop(s, _ctx);
      kk_box_t _x_x4420;
      kk_string_t _x_x4421;
      kk_define_string_literal(static, _s_x4422, 1, "Z", _ctx)
      _x_x4421 = kk_string_dup(_s_x4422, _ctx); /*string*/
      _x_x4420 = kk_string_box(_x_x4421); /*10024*/
      return kk_std_core_types__new_Just(_x_x4420, _ctx);
    }
    {
      bool _match_x2698;
      kk_integer_t _brw_x2703;
      kk_string_t _x_x4423 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2703 = kk_std_core_string_chars_fs_count(_x_x4423, _ctx); /*int*/
      bool _brw_x2704 = kk_integer_gte_borrow(_brw_x2703,(kk_integer_from_small(22)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2703, _ctx);
      _match_x2698 = _brw_x2704; /*bool*/
      if (_match_x2698) {
        kk_integer_t x_1_10388;
        kk_string_t _x_x4424 = kk_string_dup(s, _ctx); /*string*/
        x_1_10388 = kk_std_core_string_chars_fs_count(_x_x4424, _ctx); /*int*/
        kk_integer_t x_0_10386 = kk_integer_add_small_const(x_1_10388, -5, _ctx); /*int*/;
        kk_integer_t x_2_10390;
        kk_string_t _x_x4425 = kk_string_dup(s, _ctx); /*string*/
        x_2_10390 = kk_std_core_string_chars_fs_count(_x_x4425, _ctx); /*int*/
        kk_integer_t y_0_10387 = kk_integer_add_small_const(x_2_10390, -6, _ctx); /*int*/;
        kk_integer_t x_10384;
        kk_string_t _x_x4426 = kk_string_dup(s, _ctx); /*string*/
        x_10384 = kk_std_core_string_chars_fs_count(_x_x4426, _ctx); /*int*/
        bool _match_x2699;
        kk_string_t _x_x4427;
        kk_std_core_types__list _x_x4428;
        kk_std_core_types__list _x_x4429;
        kk_std_core_types__list _x_x4430;
        kk_string_t _x_x4431 = kk_string_dup(s, _ctx); /*string*/
        _x_x4430 = kk_std_core_string_list(_x_x4431, _ctx); /*list<char>*/
        kk_integer_t _x_x4432 = kk_integer_add_small_const(x_10384, -6, _ctx); /*int*/
        _x_x4429 = kk_std_core_list_drop(_x_x4430, _x_x4432, _ctx); /*list<10001>*/
        kk_integer_t _x_x4433 = kk_integer_sub(x_0_10386,y_0_10387,kk_context()); /*int*/
        _x_x4428 = kk_std_core_list_take(_x_x4429, _x_x4433, _ctx); /*list<10001>*/
        _x_x4427 = kk_std_core_string_listchar_fs_string(_x_x4428, _ctx); /*string*/
        kk_string_t _x_x4434;
        kk_define_string_literal(static, _s_x4435, 1, "+", _ctx)
        _x_x4434 = kk_string_dup(_s_x4435, _ctx); /*string*/
        _match_x2699 = kk_string_is_eq(_x_x4427,_x_x4434,kk_context()); /*bool*/
        if (_match_x2699) {
          kk_integer_t x_3_10392;
          kk_string_t _x_x4436 = kk_string_dup(s, _ctx); /*string*/
          x_3_10392 = kk_std_core_string_chars_fs_count(_x_x4436, _ctx); /*int*/
          kk_string_t o;
          kk_std_core_types__list _x_x4437;
          kk_std_core_types__list _x_x4438 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          kk_integer_t _x_x4439 = kk_integer_add_small_const(x_3_10392, -6, _ctx); /*int*/
          _x_x4437 = kk_std_core_list_drop(_x_x4438, _x_x4439, _ctx); /*list<10001>*/
          o = kk_std_core_string_listchar_fs_string(_x_x4437, _ctx); /*string*/
          bool _match_x2702;
          kk_string_t _x_x4440 = kk_string_dup(o, _ctx); /*string*/
          _match_x2702 = kk_hml__types_hc__is__valid__offset(_x_x4440, _ctx); /*bool*/
          if (_match_x2702) {
            return kk_std_core_types__new_Just(kk_string_box(o), _ctx);
          }
          {
            kk_string_drop(o, _ctx);
            return kk_std_core_types__new_Nothing(_ctx);
          }
        }
        {
          kk_integer_t x_6_10398;
          kk_string_t _x_x4441 = kk_string_dup(s, _ctx); /*string*/
          x_6_10398 = kk_std_core_string_chars_fs_count(_x_x4441, _ctx); /*int*/
          kk_integer_t x_5_10396 = kk_integer_add_small_const(x_6_10398, -5, _ctx); /*int*/;
          kk_integer_t x_7_10400;
          kk_string_t _x_x4442 = kk_string_dup(s, _ctx); /*string*/
          x_7_10400 = kk_std_core_string_chars_fs_count(_x_x4442, _ctx); /*int*/
          kk_integer_t y_5_10397 = kk_integer_add_small_const(x_7_10400, -6, _ctx); /*int*/;
          kk_integer_t x_4_10394;
          kk_string_t _x_x4443 = kk_string_dup(s, _ctx); /*string*/
          x_4_10394 = kk_std_core_string_chars_fs_count(_x_x4443, _ctx); /*int*/
          bool _match_x2700;
          kk_string_t _x_x4444;
          kk_std_core_types__list _x_x4445;
          kk_std_core_types__list _x_x4446;
          kk_std_core_types__list _x_x4447;
          kk_string_t _x_x4448 = kk_string_dup(s, _ctx); /*string*/
          _x_x4447 = kk_std_core_string_list(_x_x4448, _ctx); /*list<char>*/
          kk_integer_t _x_x4449 = kk_integer_add_small_const(x_4_10394, -6, _ctx); /*int*/
          _x_x4446 = kk_std_core_list_drop(_x_x4447, _x_x4449, _ctx); /*list<10001>*/
          kk_integer_t _x_x4450 = kk_integer_sub(x_5_10396,y_5_10397,kk_context()); /*int*/
          _x_x4445 = kk_std_core_list_take(_x_x4446, _x_x4450, _ctx); /*list<10001>*/
          _x_x4444 = kk_std_core_string_listchar_fs_string(_x_x4445, _ctx); /*string*/
          kk_string_t _x_x4451;
          kk_define_string_literal(static, _s_x4452, 1, "-", _ctx)
          _x_x4451 = kk_string_dup(_s_x4452, _ctx); /*string*/
          _match_x2700 = kk_string_is_eq(_x_x4444,_x_x4451,kk_context()); /*bool*/
          if (_match_x2700) {
            kk_integer_t x_8_10402;
            kk_string_t _x_x4453 = kk_string_dup(s, _ctx); /*string*/
            x_8_10402 = kk_std_core_string_chars_fs_count(_x_x4453, _ctx); /*int*/
            kk_string_t o_0;
            kk_std_core_types__list _x_x4454;
            kk_std_core_types__list _x_x4455 = kk_std_core_string_list(s, _ctx); /*list<char>*/
            kk_integer_t _x_x4456 = kk_integer_add_small_const(x_8_10402, -6, _ctx); /*int*/
            _x_x4454 = kk_std_core_list_drop(_x_x4455, _x_x4456, _ctx); /*list<10001>*/
            o_0 = kk_std_core_string_listchar_fs_string(_x_x4454, _ctx); /*string*/
            bool _match_x2701;
            kk_string_t _x_x4457 = kk_string_dup(o_0, _ctx); /*string*/
            _match_x2701 = kk_hml__types_hc__is__valid__offset(_x_x4457, _ctx); /*bool*/
            if (_match_x2701) {
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

kk_string_t kk_hml__types_hc__datetime__kind(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> string */ 
  bool _match_x2687;
  kk_string_t _x_x4458 = kk_string_dup(s, _ctx); /*string*/
  _match_x2687 = kk_hml__types_hc__is__valid__time(_x_x4458, _ctx); /*bool*/
  if (_match_x2687) {
    kk_string_drop(s, _ctx);
    kk_define_string_literal(static, _s_x4459, 10, "local-time", _ctx)
    return kk_string_dup(_s_x4459, _ctx);
  }
  {
    bool _match_x2688;
    kk_string_t _x_x4460 = kk_string_dup(s, _ctx); /*string*/
    _match_x2688 = kk_hml__types_hc__is__valid__date(_x_x4460, _ctx); /*bool*/
    if (_match_x2688) {
      bool _match_x2691;
      kk_integer_t _brw_x2694;
      kk_string_t _x_x4461 = kk_string_dup(s, _ctx); /*string*/
      _brw_x2694 = kk_std_core_string_chars_fs_count(_x_x4461, _ctx); /*int*/
      bool _brw_x2695 = kk_integer_eq_borrow(_brw_x2694,(kk_integer_from_small(10)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2694, _ctx);
      _match_x2691 = _brw_x2695; /*bool*/
      if (_match_x2691) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4462, 10, "local-date", _ctx)
        return kk_string_dup(_s_x4462, _ctx);
      }
      {
        bool _match_x2692;
        kk_string_t _x_x4463 = kk_string_dup(s, _ctx); /*string*/
        _match_x2692 = kk_hml__types_hc__is__iso__datetime(_x_x4463, _ctx); /*bool*/
        if (_match_x2692) {
          kk_string_drop(s, _ctx);
          kk_define_string_literal(static, _s_x4464, 15, "offset-datetime", _ctx)
          return kk_string_dup(_s_x4464, _ctx);
        }
        {
          bool _match_x2693 = kk_hml__types_hc__is__local__datetime(s, _ctx); /*bool*/;
          if (_match_x2693) {
            kk_define_string_literal(static, _s_x4465, 14, "local-datetime", _ctx)
            return kk_string_dup(_s_x4465, _ctx);
          }
          {
            kk_define_string_literal(static, _s_x4466, 7, "invalid", _ctx)
            return kk_string_dup(_s_x4466, _ctx);
          }
        }
      }
    }
    {
      bool _match_x2689;
      kk_string_t _x_x4467 = kk_string_dup(s, _ctx); /*string*/
      _match_x2689 = kk_hml__types_hc__is__iso__datetime(_x_x4467, _ctx); /*bool*/
      if (_match_x2689) {
        kk_string_drop(s, _ctx);
        kk_define_string_literal(static, _s_x4468, 15, "offset-datetime", _ctx)
        return kk_string_dup(_s_x4468, _ctx);
      }
      {
        bool _match_x2690 = kk_hml__types_hc__is__local__datetime(s, _ctx); /*bool*/;
        if (_match_x2690) {
          kk_define_string_literal(static, _s_x4469, 14, "local-datetime", _ctx)
          return kk_string_dup(_s_x4469, _ctx);
        }
        {
          kk_define_string_literal(static, _s_x4470, 7, "invalid", _ctx)
          return kk_string_dup(_s_x4470, _ctx);
        }
      }
    }
  }
}

kk_integer_t kk_hml__types_hc__date__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10406;
  kk_string_t _x_x4471 = kk_string_dup(d1, _ctx); /*string*/
  b_10406 = kk_hml__types_hc__is__valid__date(_x_x4471, _ctx); /*bool*/
  if (b_10406) {
    bool b_0_10407;
    kk_string_t _x_x4472 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10407 = kk_hml__types_hc__is__valid__date(_x_x4472, _ctx); /*bool*/
    if (b_0_10407) {
      bool _match_x2684;
      kk_std_core_types__order _x_x4473 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2684 = kk_std_core_order__lp__eq__eq__rp_(_x_x4473, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2684) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2685;
        kk_std_core_types__order _x_x4474;
        kk_std_core_types__order _brw_x2686 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4474 = _brw_x2686; /*order*/
        _match_x2685 = kk_std_core_order__lp__eq__eq__rp_(_x_x4474, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2685) {
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

kk_integer_t kk_hml__types_hc__time__cmp(kk_string_t t1, kk_string_t t2, kk_context_t* _ctx) { /* (t1 : string, t2 : string) -> int */ 
  bool b_10414;
  kk_string_t _x_x4475 = kk_string_dup(t1, _ctx); /*string*/
  b_10414 = kk_hml__types_hc__is__valid__time(_x_x4475, _ctx); /*bool*/
  if (b_10414) {
    bool b_0_10415;
    kk_string_t _x_x4476 = kk_string_dup(t2, _ctx); /*string*/
    b_0_10415 = kk_hml__types_hc__is__valid__time(_x_x4476, _ctx); /*bool*/
    if (b_0_10415) {
      bool _match_x2681;
      kk_std_core_types__order _x_x4477 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/
      _match_x2681 = kk_std_core_order__lp__eq__eq__rp_(_x_x4477, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2681) {
        kk_string_drop(t2, _ctx);
        kk_string_drop(t1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2682;
        kk_std_core_types__order _x_x4478;
        kk_std_core_types__order _brw_x2683 = kk_std_core_string_cmp(t1, t2, _ctx); /*order*/;
        kk_string_drop(t1, _ctx);
        kk_string_drop(t2, _ctx);
        _x_x4478 = _brw_x2683; /*order*/
        _match_x2682 = kk_std_core_order__lp__eq__eq__rp_(_x_x4478, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2682) {
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

kk_integer_t kk_hml__types_hc__datetime__cmp(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> int */ 
  bool b_10422;
  kk_string_t _x_x4479 = kk_string_dup(d1, _ctx); /*string*/
  b_10422 = kk_hml__types_hc__is__local__datetime(_x_x4479, _ctx); /*bool*/
  if (b_10422) {
    bool b_0_10423;
    kk_string_t _x_x4480 = kk_string_dup(d2, _ctx); /*string*/
    b_0_10423 = kk_hml__types_hc__is__local__datetime(_x_x4480, _ctx); /*bool*/
    if (b_0_10423) {
      bool _match_x2678;
      kk_std_core_types__order _x_x4481 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/
      _match_x2678 = kk_std_core_order__lp__eq__eq__rp_(_x_x4481, kk_std_core_types__new_Lt(_ctx), _ctx); /*bool*/
      if (_match_x2678) {
        kk_string_drop(d2, _ctx);
        kk_string_drop(d1, _ctx);
        return kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx);
      }
      {
        bool _match_x2679;
        kk_std_core_types__order _x_x4482;
        kk_std_core_types__order _brw_x2680 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4482 = _brw_x2680; /*order*/
        _match_x2679 = kk_std_core_order__lp__eq__eq__rp_(_x_x4482, kk_std_core_types__new_Gt(_ctx), _ctx); /*bool*/
        if (_match_x2679) {
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

bool kk_hml__types_hc__is__before(kk_string_t d1, kk_string_t d2, kk_context_t* _ctx) { /* (d1 : string, d2 : string) -> bool */ 
  bool _match_x2657;
  kk_string_t _x_x4483 = kk_string_dup(d1, _ctx); /*string*/
  _match_x2657 = kk_hml__types_hc__is__valid__date(_x_x4483, _ctx); /*bool*/
  if (_match_x2657) {
    bool _match_x2667;
    kk_string_t _x_x4484 = kk_string_dup(d2, _ctx); /*string*/
    _match_x2667 = kk_hml__types_hc__is__valid__date(_x_x4484, _ctx); /*bool*/
    if (_match_x2667) {
      kk_std_core_types__order _x_x4485;
      kk_std_core_types__order _brw_x2677 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
      kk_string_drop(d1, _ctx);
      kk_string_drop(d2, _ctx);
      _x_x4485 = _brw_x2677; /*order*/
      return kk_std_core_order__lp__eq__eq__rp_(_x_x4485, kk_std_core_types__new_Lt(_ctx), _ctx);
    }
    {
      bool _match_x2668;
      kk_string_t _x_x4486 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2668 = kk_hml__types_hc__is__local__datetime(_x_x4486, _ctx); /*bool*/
      if (_match_x2668) {
        bool _match_x2672;
        kk_string_t _x_x4487 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2672 = kk_hml__types_hc__is__local__datetime(_x_x4487, _ctx); /*bool*/
        if (_match_x2672) {
          kk_std_core_types__order _x_x4488;
          kk_std_core_types__order _brw_x2676 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4488 = _brw_x2676; /*order*/
          return kk_std_core_order__lp__eq__eq__rp_(_x_x4488, kk_std_core_types__new_Lt(_ctx), _ctx);
        }
        {
          bool _match_x2673;
          kk_string_t _x_x4489 = kk_string_dup(d1, _ctx); /*string*/
          _match_x2673 = kk_hml__types_hc__is__valid__time(_x_x4489, _ctx); /*bool*/
          if (_match_x2673) {
            bool _match_x2674;
            kk_string_t _x_x4490 = kk_string_dup(d2, _ctx); /*string*/
            _match_x2674 = kk_hml__types_hc__is__valid__time(_x_x4490, _ctx); /*bool*/
            if (_match_x2674) {
              kk_std_core_types__order _x_x4491;
              kk_std_core_types__order _brw_x2675 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
              kk_string_drop(d1, _ctx);
              kk_string_drop(d2, _ctx);
              _x_x4491 = _brw_x2675; /*order*/
              return kk_std_core_order__lp__eq__eq__rp_(_x_x4491, kk_std_core_types__new_Lt(_ctx), _ctx);
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
        bool _match_x2669;
        kk_string_t _x_x4492 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2669 = kk_hml__types_hc__is__valid__time(_x_x4492, _ctx); /*bool*/
        if (_match_x2669) {
          bool _match_x2670;
          kk_string_t _x_x4493 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2670 = kk_hml__types_hc__is__valid__time(_x_x4493, _ctx); /*bool*/
          if (_match_x2670) {
            kk_std_core_types__order _x_x4494;
            kk_std_core_types__order _brw_x2671 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4494 = _brw_x2671; /*order*/
            return kk_std_core_order__lp__eq__eq__rp_(_x_x4494, kk_std_core_types__new_Lt(_ctx), _ctx);
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
    bool _match_x2658;
    kk_string_t _x_x4495 = kk_string_dup(d1, _ctx); /*string*/
    _match_x2658 = kk_hml__types_hc__is__local__datetime(_x_x4495, _ctx); /*bool*/
    if (_match_x2658) {
      bool _match_x2662;
      kk_string_t _x_x4496 = kk_string_dup(d2, _ctx); /*string*/
      _match_x2662 = kk_hml__types_hc__is__local__datetime(_x_x4496, _ctx); /*bool*/
      if (_match_x2662) {
        kk_std_core_types__order _x_x4497;
        kk_std_core_types__order _brw_x2666 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
        kk_string_drop(d1, _ctx);
        kk_string_drop(d2, _ctx);
        _x_x4497 = _brw_x2666; /*order*/
        return kk_std_core_order__lp__eq__eq__rp_(_x_x4497, kk_std_core_types__new_Lt(_ctx), _ctx);
      }
      {
        bool _match_x2663;
        kk_string_t _x_x4498 = kk_string_dup(d1, _ctx); /*string*/
        _match_x2663 = kk_hml__types_hc__is__valid__time(_x_x4498, _ctx); /*bool*/
        if (_match_x2663) {
          bool _match_x2664;
          kk_string_t _x_x4499 = kk_string_dup(d2, _ctx); /*string*/
          _match_x2664 = kk_hml__types_hc__is__valid__time(_x_x4499, _ctx); /*bool*/
          if (_match_x2664) {
            kk_std_core_types__order _x_x4500;
            kk_std_core_types__order _brw_x2665 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
            kk_string_drop(d1, _ctx);
            kk_string_drop(d2, _ctx);
            _x_x4500 = _brw_x2665; /*order*/
            return kk_std_core_order__lp__eq__eq__rp_(_x_x4500, kk_std_core_types__new_Lt(_ctx), _ctx);
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
      bool _match_x2659;
      kk_string_t _x_x4501 = kk_string_dup(d1, _ctx); /*string*/
      _match_x2659 = kk_hml__types_hc__is__valid__time(_x_x4501, _ctx); /*bool*/
      if (_match_x2659) {
        bool _match_x2660;
        kk_string_t _x_x4502 = kk_string_dup(d2, _ctx); /*string*/
        _match_x2660 = kk_hml__types_hc__is__valid__time(_x_x4502, _ctx); /*bool*/
        if (_match_x2660) {
          kk_std_core_types__order _x_x4503;
          kk_std_core_types__order _brw_x2661 = kk_std_core_string_cmp(d1, d2, _ctx); /*order*/;
          kk_string_drop(d1, _ctx);
          kk_string_drop(d2, _ctx);
          _x_x4503 = _brw_x2661; /*order*/
          return kk_std_core_order__lp__eq__eq__rp_(_x_x4503, kk_std_core_types__new_Lt(_ctx), _ctx);
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

kk_std_core_types__either kk_hml__types_hc__offset__to__minutes(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> either<string,int> */ 
  bool _match_x2650;
  kk_string_t _x_x4504 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x4505;
  kk_define_string_literal(static, _s_x4506, 1, "Z", _ctx)
  _x_x4505 = kk_string_dup(_s_x4506, _ctx); /*string*/
  _match_x2650 = kk_string_is_eq(_x_x4504,_x_x4505,kk_context()); /*bool*/
  if (_match_x2650) {
    kk_string_drop(s, _ctx);
    return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
  }
  {
    bool _match_x2651;
    kk_string_t _x_x4507 = kk_string_dup(s, _ctx); /*string*/
    kk_string_t _x_x4508;
    kk_define_string_literal(static, _s_x4509, 1, "z", _ctx)
    _x_x4508 = kk_string_dup(_s_x4509, _ctx); /*string*/
    _match_x2651 = kk_string_is_eq(_x_x4507,_x_x4508,kk_context()); /*bool*/
    if (_match_x2651) {
      kk_string_drop(s, _ctx);
      return kk_std_core_types__new_Right(kk_integer_box(kk_integer_from_small(0), _ctx), _ctx);
    }
    {
      bool b_10444;
      kk_string_t _x_x4510 = kk_string_dup(s, _ctx); /*string*/
      b_10444 = kk_hml__types_hc__is__valid__offset(_x_x4510, _ctx); /*bool*/
      if (b_10444) {
        kk_integer_t hc__sign_0;
        bool _match_x2656;
        kk_string_t _x_x4511;
        kk_std_core_types__list _x_x4512;
        kk_std_core_types__list _x_x4513;
        kk_std_core_types__list _x_x4514;
        kk_string_t _x_x4515 = kk_string_dup(s, _ctx); /*string*/
        _x_x4514 = kk_std_core_string_list(_x_x4515, _ctx); /*list<char>*/
        _x_x4513 = kk_std_core_list_drop(_x_x4514, kk_integer_from_small(0), _ctx); /*list<10001>*/
        kk_integer_t _x_x4516 = kk_integer_add_small_const(kk_integer_from_small(1), 0, _ctx); /*int*/
        _x_x4512 = kk_std_core_list_take(_x_x4513, _x_x4516, _ctx); /*list<10001>*/
        _x_x4511 = kk_std_core_string_listchar_fs_string(_x_x4512, _ctx); /*string*/
        kk_string_t _x_x4517;
        kk_define_string_literal(static, _s_x4518, 1, "-", _ctx)
        _x_x4517 = kk_string_dup(_s_x4518, _ctx); /*string*/
        _match_x2656 = kk_string_is_eq(_x_x4511,_x_x4517,kk_context()); /*bool*/
        if (_match_x2656) {
          hc__sign_0 = kk_integer_add_small_const(kk_integer_from_small(0), -1, _ctx); /*int*/
        }
        else {
          hc__sign_0 = kk_integer_from_small(1); /*int*/
        }
        kk_string_t s_0_10449;
        kk_std_core_types__list _x_x4519;
        kk_std_core_types__list _x_x4520;
        kk_std_core_types__list _x_x4521;
        kk_string_t _x_x4522 = kk_string_dup(s, _ctx); /*string*/
        _x_x4521 = kk_std_core_string_list(_x_x4522, _ctx); /*list<char>*/
        _x_x4520 = kk_std_core_list_drop(_x_x4521, kk_integer_from_small(1), _ctx); /*list<10001>*/
        kk_integer_t _x_x4523 = kk_integer_add_small_const(kk_integer_from_small(3), -1, _ctx); /*int*/
        _x_x4519 = kk_std_core_list_take(_x_x4520, _x_x4523, _ctx); /*list<10001>*/
        s_0_10449 = kk_std_core_string_listchar_fs_string(_x_x4519, _ctx); /*string*/
        kk_std_core_types__maybe _match_x2652;
        bool _x_x4524;
        kk_std_core_types__optional _match_x2655 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
        if (kk_std_core_types__is_Optional(_match_x2655, _ctx)) {
          kk_box_t _box_x381 = _match_x2655._cons._Optional.value;
          bool _uniq_hex_581 = kk_bool_unbox(_box_x381);
          kk_std_core_types__optional_drop(_match_x2655, _ctx);
          _x_x4524 = _uniq_hex_581; /*bool*/
        }
        else {
          kk_std_core_types__optional_drop(_match_x2655, _ctx);
          _x_x4524 = false; /*bool*/
        }
        _match_x2652 = kk_std_core_int_xparse(s_0_10449, _x_x4524, _ctx); /*maybe<int>*/
        if (kk_std_core_types__is_Just(_match_x2652, _ctx)) {
          kk_box_t _box_x382 = _match_x2652._cons.Just.value;
          kk_integer_t h = kk_integer_unbox(_box_x382, _ctx);
          kk_integer_dup(h, _ctx);
          kk_std_core_types__maybe_drop(_match_x2652, _ctx);
          kk_string_t s_1_10453;
          kk_std_core_types__list _x_x4525;
          kk_std_core_types__list _x_x4526;
          kk_std_core_types__list _x_x4527 = kk_std_core_string_list(s, _ctx); /*list<char>*/
          _x_x4526 = kk_std_core_list_drop(_x_x4527, kk_integer_from_small(4), _ctx); /*list<10001>*/
          kk_integer_t _x_x4528 = kk_integer_add_small_const(kk_integer_from_small(6), -4, _ctx); /*int*/
          _x_x4525 = kk_std_core_list_take(_x_x4526, _x_x4528, _ctx); /*list<10001>*/
          s_1_10453 = kk_std_core_string_listchar_fs_string(_x_x4525, _ctx); /*string*/
          kk_std_core_types__maybe _match_x2653;
          bool _x_x4529;
          kk_std_core_types__optional _match_x2654 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
          if (kk_std_core_types__is_Optional(_match_x2654, _ctx)) {
            kk_box_t _box_x383 = _match_x2654._cons._Optional.value;
            bool _uniq_hex_581_0 = kk_bool_unbox(_box_x383);
            kk_std_core_types__optional_drop(_match_x2654, _ctx);
            _x_x4529 = _uniq_hex_581_0; /*bool*/
          }
          else {
            kk_std_core_types__optional_drop(_match_x2654, _ctx);
            _x_x4529 = false; /*bool*/
          }
          _match_x2653 = kk_std_core_int_xparse(s_1_10453, _x_x4529, _ctx); /*maybe<int>*/
          if (kk_std_core_types__is_Just(_match_x2653, _ctx)) {
            kk_box_t _box_x384 = _match_x2653._cons.Just.value;
            kk_integer_t m = kk_integer_unbox(_box_x384, _ctx);
            kk_integer_dup(m, _ctx);
            kk_std_core_types__maybe_drop(_match_x2653, _ctx);
            kk_integer_t x_3_10457 = kk_integer_mul(h,(kk_integer_from_small(60)),kk_context()); /*int*/;
            kk_integer_t _b_x385_391;
            kk_integer_t _x_x4530 = kk_integer_add(x_3_10457,m,kk_context()); /*int*/
            _b_x385_391 = kk_integer_mul(hc__sign_0,_x_x4530,kk_context()); /*int*/
            return kk_std_core_types__new_Right(kk_integer_box(_b_x385_391, _ctx), _ctx);
          }
          {
            kk_integer_drop(hc__sign_0, _ctx);
            kk_integer_drop(h, _ctx);
            kk_box_t _x_x4531;
            kk_string_t _x_x4532;
            kk_define_string_literal(static, _s_x4533, 22, "invalid offset minutes", _ctx)
            _x_x4532 = kk_string_dup(_s_x4533, _ctx); /*string*/
            _x_x4531 = kk_string_box(_x_x4532); /*10014*/
            return kk_std_core_types__new_Left(_x_x4531, _ctx);
          }
        }
        {
          kk_string_drop(s, _ctx);
          kk_integer_drop(hc__sign_0, _ctx);
          kk_box_t _x_x4534;
          kk_string_t _x_x4535;
          kk_define_string_literal(static, _s_x4536, 20, "invalid offset hours", _ctx)
          _x_x4535 = kk_string_dup(_s_x4536, _ctx); /*string*/
          _x_x4534 = kk_string_box(_x_x4535); /*10014*/
          return kk_std_core_types__new_Left(_x_x4534, _ctx);
        }
      }
      {
        kk_string_t _b_x388_394;
        kk_string_t _x_x4537;
        kk_define_string_literal(static, _s_x4538, 16, "invalid offset: ", _ctx)
        _x_x4537 = kk_string_dup(_s_x4538, _ctx); /*string*/
        _b_x388_394 = kk_std_core_types__lp__plus__plus__rp_(_x_x4537, s, _ctx); /*string*/
        return kk_std_core_types__new_Left(kk_string_box(_b_x388_394), _ctx);
      }
    }
  }
}

kk_integer_t kk_hml__types_hc__list__int__nth(kk_std_core_types__list xs, kk_integer_t i, kk_context_t* _ctx) { /* (xs : list<int>, i : int) -> div int */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(xs, _ctx)) {
    kk_integer_drop(i, _ctx);
    return kk_integer_from_small(0);
  }
  {
    struct kk_std_core_types_Cons* _con_x4539 = kk_std_core_types__as_Cons(xs, _ctx);
    kk_box_t _box_x395 = _con_x4539->head;
    kk_std_core_types__list rest = _con_x4539->tail;
    kk_integer_t x = kk_integer_unbox(_box_x395, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(xs, _ctx)) {
      kk_datatype_ptr_free(xs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(rest, _ctx);
      kk_integer_dup(x, _ctx);
      kk_datatype_ptr_decref(xs, _ctx);
    }
    bool _match_x2649 = kk_integer_eq_borrow(i,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_x2649) {
      kk_std_core_types__list_drop(rest, _ctx);
      kk_integer_drop(i, _ctx);
      return x;
    }
    {
      kk_integer_drop(x, _ctx);
      { // tailcall
        kk_integer_t _x_x4540 = kk_integer_add_small_const(i, -1, _ctx); /*int*/
        xs = rest;
        i = _x_x4540;
        goto kk__tailcall;
      }
    }
  }
}

kk_std_core_types__either kk_hml__types_hc__day__of__week(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> div either<string,string> */ 
  bool b_10461;
  kk_string_t _x_x4541 = kk_string_dup(s, _ctx); /*string*/
  b_10461 = kk_hml__types_hc__is__valid__date(_x_x4541, _ctx); /*bool*/
  if (b_10461) {
    kk_std_core_types__either _match_x2645 = kk_hml__types_hc__date__parts(s, _ctx); /*either<string,(int, int, int)>*/;
    if (kk_std_core_types__is_Left(_match_x2645, _ctx)) {
      kk_box_t _box_x396 = _match_x2645._cons.Left.left;
      kk_string_t e = kk_string_unbox(_box_x396);
      kk_string_dup(e, _ctx);
      kk_std_core_types__either_drop(_match_x2645, _ctx);
      return kk_std_core_types__new_Left(kk_string_box(e), _ctx);
    }
    {
      kk_box_t _box_x398 = _match_x2645._cons.Right.right;
      kk_std_core_types__tuple3 parts = kk_std_core_types__tuple3_unbox(_box_x398, KK_BORROWED, _ctx);
      kk_std_core_types__tuple3_dup(parts, _ctx);
      kk_std_core_types__either_drop(_match_x2645, _ctx);
      kk_integer_t y_0;
      bool _match_x2646;
      kk_integer_t _brw_x2647;
      {
        kk_box_t _box_x399 = parts.fst;
        kk_box_t _box_x400 = parts.snd;
        kk_box_t _box_x401 = parts.thd;
        kk_integer_t _x = kk_integer_unbox(_box_x400, _ctx);
        kk_integer_dup(_x, _ctx);
        _brw_x2647 = _x; /*int*/
      }
      bool _brw_x2648 = kk_integer_lt_borrow(_brw_x2647,(kk_integer_from_small(3)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2647, _ctx);
      _match_x2646 = _brw_x2648; /*bool*/
      if (_match_x2646) {
        kk_integer_t _x_x4542;
        {
          kk_box_t _box_x402 = parts.fst;
          kk_box_t _box_x403 = parts.snd;
          kk_box_t _box_x404 = parts.thd;
          kk_integer_t _x_0 = kk_integer_unbox(_box_x402, _ctx);
          kk_integer_dup(_x_0, _ctx);
          _x_x4542 = _x_0; /*int*/
        }
        y_0 = kk_integer_add_small_const(_x_x4542, -1, _ctx); /*int*/
      }
      else {
        kk_box_t _box_x405 = parts.fst;
        kk_box_t _box_x406 = parts.snd;
        kk_box_t _box_x407 = parts.thd;
        kk_integer_t _x_1 = kk_integer_unbox(_box_x405, _ctx);
        kk_integer_dup(_x_1, _ctx);
        y_0 = _x_1; /*int*/
      }
      kk_integer_t y_5_10476;
      kk_integer_t _x_x4543 = kk_integer_dup(y_0, _ctx); /*int*/
      y_5_10476 = kk_integer_div(_x_x4543,(kk_integer_from_small(4)),kk_context()); /*int*/
      kk_integer_t x_3_10473;
      kk_integer_t _x_x4544 = kk_integer_dup(y_0, _ctx); /*int*/
      x_3_10473 = kk_integer_add(_x_x4544,y_5_10476,kk_context()); /*int*/
      kk_integer_t y_4_10474;
      kk_integer_t _x_x4545 = kk_integer_dup(y_0, _ctx); /*int*/
      y_4_10474 = kk_integer_div(_x_x4545,(kk_integer_from_small(100)),kk_context()); /*int*/
      kk_integer_t x_2_10471 = kk_integer_sub(x_3_10473,y_4_10474,kk_context()); /*int*/;
      kk_integer_t y_3_10472 = kk_integer_div(y_0,(kk_integer_from_small(400)),kk_context()); /*int*/;
      kk_integer_t x_1_10469 = kk_integer_add(x_2_10471,y_3_10472,kk_context()); /*int*/;
      kk_integer_t y_2_10470;
      kk_std_core_types__list _x_x4546;
      kk_std_core_types__list _x_x4547;
      kk_std_core_types__list _x_x4548;
      kk_std_core_types__list _x_x4549;
      kk_std_core_types__list _x_x4550;
      kk_std_core_types__list _x_x4551;
      kk_std_core_types__list _x_x4552;
      kk_std_core_types__list _x_x4553;
      kk_std_core_types__list _x_x4554;
      kk_std_core_types__list _x_x4555;
      kk_std_core_types__list _x_x4556;
      kk_std_core_types__list _x_x4557 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      _x_x4556 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4557, _ctx); /*list<10021>*/
      _x_x4555 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(6), _ctx), _x_x4556, _ctx); /*list<10021>*/
      _x_x4554 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(4), _ctx), _x_x4555, _ctx); /*list<10021>*/
      _x_x4553 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(1), _ctx), _x_x4554, _ctx); /*list<10021>*/
      _x_x4552 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4553, _ctx); /*list<10021>*/
      _x_x4551 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4552, _ctx); /*list<10021>*/
      _x_x4550 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4551, _ctx); /*list<10021>*/
      _x_x4549 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(5), _ctx), _x_x4550, _ctx); /*list<10021>*/
      _x_x4548 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(2), _ctx), _x_x4549, _ctx); /*list<10021>*/
      _x_x4547 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(3), _ctx), _x_x4548, _ctx); /*list<10021>*/
      _x_x4546 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_integer_box(kk_integer_from_small(0), _ctx), _x_x4547, _ctx); /*list<10021>*/
      kk_integer_t _x_x4558;
      kk_integer_t _x_x4559;
      {
        kk_box_t _box_x432 = parts.fst;
        kk_box_t _box_x433 = parts.snd;
        kk_box_t _box_x434 = parts.thd;
        kk_integer_t _x_2 = kk_integer_unbox(_box_x433, _ctx);
        kk_integer_dup(_x_2, _ctx);
        _x_x4559 = _x_2; /*int*/
      }
      _x_x4558 = kk_integer_add_small_const(_x_x4559, -1, _ctx); /*int*/
      y_2_10470 = kk_hml__types_hc__list__int__nth(_x_x4546, _x_x4558, _ctx); /*int*/
      kk_integer_t x_0_10467 = kk_integer_add(x_1_10469,y_2_10470,kk_context()); /*int*/;
      kk_integer_t idx;
      kk_integer_t _x_x4560;
      kk_integer_t _x_x4561;
      {
        kk_box_t _box_x459 = parts.fst;
        kk_box_t _box_x460 = parts.snd;
        kk_box_t _box_x461 = parts.thd;
        kk_integer_t _x_3 = kk_integer_unbox(_box_x461, _ctx);
        kk_integer_dup(_x_3, _ctx);
        kk_std_core_types__tuple3_drop(parts, _ctx);
        _x_x4561 = _x_3; /*int*/
      }
      _x_x4560 = kk_integer_add(x_0_10467,_x_x4561,kk_context()); /*int*/
      idx = kk_integer_mod(_x_x4560,(kk_integer_from_small(7)),kk_context()); /*int*/
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(0), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4562;
        kk_string_t _x_x4563;
        kk_define_string_literal(static, _s_x4564, 6, "sunday", _ctx)
        _x_x4563 = kk_string_dup(_s_x4564, _ctx); /*string*/
        _x_x4562 = kk_string_box(_x_x4563); /*10015*/
        return kk_std_core_types__new_Right(_x_x4562, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(1), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4565;
        kk_string_t _x_x4566;
        kk_define_string_literal(static, _s_x4567, 6, "monday", _ctx)
        _x_x4566 = kk_string_dup(_s_x4567, _ctx); /*string*/
        _x_x4565 = kk_string_box(_x_x4566); /*10015*/
        return kk_std_core_types__new_Right(_x_x4565, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(2), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4568;
        kk_string_t _x_x4569;
        kk_define_string_literal(static, _s_x4570, 7, "tuesday", _ctx)
        _x_x4569 = kk_string_dup(_s_x4570, _ctx); /*string*/
        _x_x4568 = kk_string_box(_x_x4569); /*10015*/
        return kk_std_core_types__new_Right(_x_x4568, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(3), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4571;
        kk_string_t _x_x4572;
        kk_define_string_literal(static, _s_x4573, 9, "wednesday", _ctx)
        _x_x4572 = kk_string_dup(_s_x4573, _ctx); /*string*/
        _x_x4571 = kk_string_box(_x_x4572); /*10015*/
        return kk_std_core_types__new_Right(_x_x4571, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(4), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4574;
        kk_string_t _x_x4575;
        kk_define_string_literal(static, _s_x4576, 8, "thursday", _ctx)
        _x_x4575 = kk_string_dup(_s_x4576, _ctx); /*string*/
        _x_x4574 = kk_string_box(_x_x4575); /*10015*/
        return kk_std_core_types__new_Right(_x_x4574, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(5), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4577;
        kk_string_t _x_x4578;
        kk_define_string_literal(static, _s_x4579, 6, "friday", _ctx)
        _x_x4578 = kk_string_dup(_s_x4579, _ctx); /*string*/
        _x_x4577 = kk_string_box(_x_x4578); /*10015*/
        return kk_std_core_types__new_Right(_x_x4577, _ctx);
      }
      if (kk_integer_eq_borrow(idx, kk_integer_from_small(6), _ctx)) {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4580;
        kk_string_t _x_x4581;
        kk_define_string_literal(static, _s_x4582, 8, "saturday", _ctx)
        _x_x4581 = kk_string_dup(_s_x4582, _ctx); /*string*/
        _x_x4580 = kk_string_box(_x_x4581); /*10015*/
        return kk_std_core_types__new_Right(_x_x4580, _ctx);
      }
      {
        kk_integer_drop(idx, _ctx);
        kk_box_t _x_x4583;
        kk_string_t _x_x4584;
        kk_define_string_literal(static, _s_x4585, 11, "unreachable", _ctx)
        _x_x4584 = kk_string_dup(_s_x4585, _ctx); /*string*/
        _x_x4583 = kk_string_box(_x_x4584); /*10014*/
        return kk_std_core_types__new_Left(_x_x4583, _ctx);
      }
    }
  }
  {
    kk_string_t _b_x470_480;
    kk_string_t _x_x4586;
    kk_define_string_literal(static, _s_x4587, 14, "invalid date: ", _ctx)
    _x_x4586 = kk_string_dup(_s_x4587, _ctx); /*string*/
    _b_x470_480 = kk_std_core_types__lp__plus__plus__rp_(_x_x4586, s, _ctx); /*string*/
    return kk_std_core_types__new_Left(kk_string_box(_b_x470_480), _ctx);
  }
}

kk_hml__types__clispec kk_hml__types_hc__with__flags(kk_hml__types__clispec spec, kk_std_core_types__list flags, kk_context_t* _ctx) { /* (spec : clispec, flags : list<cliflag>) -> clispec */ 
  kk_string_t _x_x4588;
  {
    struct kk_hml__types_Clispec* _con_x4589 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4589->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4588 = _x; /*string*/
  }
  kk_string_t _x_x4590;
  {
    struct kk_hml__types_Clispec* _con_x4591 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4591->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4590 = _x_0; /*string*/
  }
  kk_string_t _x_x4592;
  {
    struct kk_hml__types_Clispec* _con_x4593 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4593->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4592 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4594;
  {
    struct kk_hml__types_Clispec* _con_x4595 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4595->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4594 = _x_2; /*list<hml_types/clioption>*/
  }
  kk_std_core_types__list _x_x4596;
  {
    struct kk_hml__types_Clispec* _con_x4597 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4597->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4596 = _x_3; /*list<hml_types/cliarg>*/
  }
  kk_std_core_types__list _x_x4598;
  {
    struct kk_hml__types_Clispec* _con_x4599 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4599->app__name;
    kk_string_t _pat_1_4 = _con_x4599->app__version;
    kk_string_t _pat_2_4 = _con_x4599->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4599->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4599->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4599->app__args;
    kk_std_core_types__list _x_4 = _con_x4599->app__commands;
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
    _x_x4598 = _x_4; /*list<(string, hml_types/clispec)>*/
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x4588, _x_x4590, _x_x4592, flags, _x_x4594, _x_x4596, _x_x4598, _ctx);
}

kk_hml__types__clispec kk_hml__types_hc__with__options(kk_hml__types__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<clioption>) -> clispec */ 
  kk_string_t _x_x4600;
  {
    struct kk_hml__types_Clispec* _con_x4601 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4601->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4600 = _x; /*string*/
  }
  kk_string_t _x_x4602;
  {
    struct kk_hml__types_Clispec* _con_x4603 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4603->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4602 = _x_0; /*string*/
  }
  kk_string_t _x_x4604;
  {
    struct kk_hml__types_Clispec* _con_x4605 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4605->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4604 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4606;
  {
    struct kk_hml__types_Clispec* _con_x4607 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4607->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4606 = _x_2; /*list<hml_types/cliflag>*/
  }
  kk_std_core_types__list _x_x4608;
  {
    struct kk_hml__types_Clispec* _con_x4609 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4609->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4608 = _x_3; /*list<hml_types/cliarg>*/
  }
  kk_std_core_types__list _x_x4610;
  {
    struct kk_hml__types_Clispec* _con_x4611 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4611->app__name;
    kk_string_t _pat_1_4 = _con_x4611->app__version;
    kk_string_t _pat_2_4 = _con_x4611->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4611->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4611->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4611->app__args;
    kk_std_core_types__list _x_4 = _con_x4611->app__commands;
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
    _x_x4610 = _x_4; /*list<(string, hml_types/clispec)>*/
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x4600, _x_x4602, _x_x4604, _x_x4606, options, _x_x4608, _x_x4610, _ctx);
}

kk_hml__types__clispec kk_hml__types_hc__with__args(kk_hml__types__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<cliarg>) -> clispec */ 
  kk_string_t _x_x4612;
  {
    struct kk_hml__types_Clispec* _con_x4613 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4613->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4612 = _x; /*string*/
  }
  kk_string_t _x_x4614;
  {
    struct kk_hml__types_Clispec* _con_x4615 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4615->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4614 = _x_0; /*string*/
  }
  kk_string_t _x_x4616;
  {
    struct kk_hml__types_Clispec* _con_x4617 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4617->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4616 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4618;
  {
    struct kk_hml__types_Clispec* _con_x4619 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4619->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4618 = _x_2; /*list<hml_types/cliflag>*/
  }
  kk_std_core_types__list _x_x4620;
  {
    struct kk_hml__types_Clispec* _con_x4621 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4621->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4620 = _x_3; /*list<hml_types/clioption>*/
  }
  kk_std_core_types__list _x_x4622;
  {
    struct kk_hml__types_Clispec* _con_x4623 = kk_hml__types__as_Clispec(spec, _ctx);
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
    _x_x4622 = _x_4; /*list<(string, hml_types/clispec)>*/
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x4612, _x_x4614, _x_x4616, _x_x4618, _x_x4620, args, _x_x4622, _ctx);
}

kk_hml__types__clispec kk_hml__types_hc__with__commands(kk_hml__types__clispec spec, kk_std_core_types__list commands, kk_context_t* _ctx) { /* (spec : clispec, commands : list<(string, clispec)>) -> clispec */ 
  kk_string_t _x_x4624;
  {
    struct kk_hml__types_Clispec* _con_x4625 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4625->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4624 = _x; /*string*/
  }
  kk_string_t _x_x4626;
  {
    struct kk_hml__types_Clispec* _con_x4627 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4627->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4626 = _x_0; /*string*/
  }
  kk_string_t _x_x4628;
  {
    struct kk_hml__types_Clispec* _con_x4629 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4629->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4628 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4630;
  {
    struct kk_hml__types_Clispec* _con_x4631 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4631->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4630 = _x_2; /*list<hml_types/cliflag>*/
  }
  kk_std_core_types__list _x_x4632;
  {
    struct kk_hml__types_Clispec* _con_x4633 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4633->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4632 = _x_3; /*list<hml_types/clioption>*/
  }
  kk_std_core_types__list _x_x4634;
  {
    struct kk_hml__types_Clispec* _con_x4635 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4635->app__name;
    kk_string_t _pat_1_4 = _con_x4635->app__version;
    kk_string_t _pat_2_4 = _con_x4635->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4635->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4635->app__options;
    kk_std_core_types__list _x_4 = _con_x4635->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4635->app__commands;
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
    _x_x4634 = _x_4; /*list<hml_types/cliarg>*/
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x4624, _x_x4626, _x_x4628, _x_x4630, _x_x4632, _x_x4634, commands, _ctx);
}

kk_hml__types__clispec kk_hml__types_hc__flag(kk_hml__types__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list flags_10506;
  kk_std_core_types__list _x_x4636;
  {
    struct kk_hml__types_Clispec* _con_x4637 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4637->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4636 = _x_5; /*list<hml_types/cliflag>*/
  }
  kk_std_core_types__list _x_x4638;
  kk_box_t _x_x4639;
  kk_hml__types__cliflag _x_x4640 = kk_hml__types__new_Cliflag(kk_reuse_null, 0, name, kkloc_short, help__text, _ctx); /*hml_types/cliflag*/
  _x_x4639 = kk_hml__types__cliflag_box(_x_x4640, _ctx); /*10021*/
  _x_x4638 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4639, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  flags_10506 = kk_std_core_list_append(_x_x4636, _x_x4638, _ctx); /*list<hml_types/cliflag>*/
  kk_string_t _x_x4641;
  {
    struct kk_hml__types_Clispec* _con_x4642 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4642->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4641 = _x; /*string*/
  }
  kk_string_t _x_x4643;
  {
    struct kk_hml__types_Clispec* _con_x4644 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4644->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4643 = _x_0; /*string*/
  }
  kk_string_t _x_x4645;
  {
    struct kk_hml__types_Clispec* _con_x4646 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4646->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4645 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4647;
  {
    struct kk_hml__types_Clispec* _con_x4648 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4648->app__options;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4647 = _x_2; /*list<hml_types/clioption>*/
  }
  kk_std_core_types__list _x_x4649;
  {
    struct kk_hml__types_Clispec* _con_x4650 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4650->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4649 = _x_3; /*list<hml_types/cliarg>*/
  }
  kk_std_core_types__list _x_x4651;
  {
    struct kk_hml__types_Clispec* _con_x4652 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4652->app__name;
    kk_string_t _pat_1_4 = _con_x4652->app__version;
    kk_string_t _pat_2_4 = _con_x4652->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4652->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4652->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4652->app__args;
    kk_std_core_types__list _x_4 = _con_x4652->app__commands;
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
    _x_x4651 = _x_4; /*list<(string, hml_types/clispec)>*/
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x4641, _x_x4643, _x_x4645, flags_10506, _x_x4647, _x_x4649, _x_x4651, _ctx);
}

kk_hml__types__clispec kk_hml__types_hc__option(kk_hml__types__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string) -> clispec */ 
  kk_std_core_types__list options_10517;
  kk_std_core_types__list _x_x4653;
  {
    struct kk_hml__types_Clispec* _con_x4654 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4654->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4653 = _x_5; /*list<hml_types/clioption>*/
  }
  kk_std_core_types__list _x_x4655;
  kk_box_t _x_x4656;
  kk_hml__types__clioption _x_x4657;
  kk_string_t _x_x4658 = kk_string_empty(); /*string*/
  _x_x4657 = kk_hml__types__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, _x_x4658, _ctx); /*hml_types/clioption*/
  _x_x4656 = kk_hml__types__clioption_box(_x_x4657, _ctx); /*10021*/
  _x_x4655 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4656, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10517 = kk_std_core_list_append(_x_x4653, _x_x4655, _ctx); /*list<hml_types/clioption>*/
  kk_string_t _x_x4660;
  {
    struct kk_hml__types_Clispec* _con_x4661 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4661->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4660 = _x; /*string*/
  }
  kk_string_t _x_x4662;
  {
    struct kk_hml__types_Clispec* _con_x4663 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4663->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4662 = _x_0; /*string*/
  }
  kk_string_t _x_x4664;
  {
    struct kk_hml__types_Clispec* _con_x4665 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4665->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4664 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4666;
  {
    struct kk_hml__types_Clispec* _con_x4667 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4667->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4666 = _x_2; /*list<hml_types/cliflag>*/
  }
  kk_std_core_types__list _x_x4668;
  {
    struct kk_hml__types_Clispec* _con_x4669 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4669->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4668 = _x_3; /*list<hml_types/cliarg>*/
  }
  kk_std_core_types__list _x_x4670;
  {
    struct kk_hml__types_Clispec* _con_x4671 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4671->app__name;
    kk_string_t _pat_1_4 = _con_x4671->app__version;
    kk_string_t _pat_2_4 = _con_x4671->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4671->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4671->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4671->app__args;
    kk_std_core_types__list _x_4 = _con_x4671->app__commands;
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
    _x_x4670 = _x_4; /*list<(string, hml_types/clispec)>*/
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x4660, _x_x4662, _x_x4664, _x_x4666, options_10517, _x_x4668, _x_x4670, _ctx);
}

kk_hml__types__clispec kk_hml__types_hc__option__default(kk_hml__types__clispec spec, kk_string_t name, kk_string_t kkloc_short, kk_string_t help__text, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (spec : clispec, name : string, short : string, help_text : string, default : string) -> clispec */ 
  kk_std_core_types__list options_10528;
  kk_std_core_types__list _x_x4672;
  {
    struct kk_hml__types_Clispec* _con_x4673 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4673->app__options;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4672 = _x_5; /*list<hml_types/clioption>*/
  }
  kk_std_core_types__list _x_x4674;
  kk_box_t _x_x4675;
  kk_hml__types__clioption _x_x4676 = kk_hml__types__new_Clioption(kk_reuse_null, 0, name, kkloc_short, help__text, kkloc_default, _ctx); /*hml_types/clioption*/
  _x_x4675 = kk_hml__types__clioption_box(_x_x4676, _ctx); /*10021*/
  _x_x4674 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4675, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  options_10528 = kk_std_core_list_append(_x_x4672, _x_x4674, _ctx); /*list<hml_types/clioption>*/
  kk_string_t _x_x4677;
  {
    struct kk_hml__types_Clispec* _con_x4678 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4678->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4677 = _x; /*string*/
  }
  kk_string_t _x_x4679;
  {
    struct kk_hml__types_Clispec* _con_x4680 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4680->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4679 = _x_0; /*string*/
  }
  kk_string_t _x_x4681;
  {
    struct kk_hml__types_Clispec* _con_x4682 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4682->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4681 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4683;
  {
    struct kk_hml__types_Clispec* _con_x4684 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4684->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4683 = _x_2; /*list<hml_types/cliflag>*/
  }
  kk_std_core_types__list _x_x4685;
  {
    struct kk_hml__types_Clispec* _con_x4686 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4686->app__args;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4685 = _x_3; /*list<hml_types/cliarg>*/
  }
  kk_std_core_types__list _x_x4687;
  {
    struct kk_hml__types_Clispec* _con_x4688 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4688->app__name;
    kk_string_t _pat_1_4 = _con_x4688->app__version;
    kk_string_t _pat_2_4 = _con_x4688->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4688->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4688->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4688->app__args;
    kk_std_core_types__list _x_4 = _con_x4688->app__commands;
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
    _x_x4687 = _x_4; /*list<(string, hml_types/clispec)>*/
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x4677, _x_x4679, _x_x4681, _x_x4683, options_10528, _x_x4685, _x_x4687, _ctx);
}

kk_hml__types__clispec kk_hml__types_hc__arg(kk_hml__types__clispec spec, kk_string_t name, kk_string_t help__text, bool required, kk_context_t* _ctx) { /* (spec : clispec, name : string, help_text : string, required : bool) -> clispec */ 
  kk_std_core_types__list args_10539;
  kk_std_core_types__list _x_x4689;
  {
    struct kk_hml__types_Clispec* _con_x4690 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4690->app__args;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4689 = _x_5; /*list<hml_types/cliarg>*/
  }
  kk_std_core_types__list _x_x4691;
  kk_box_t _x_x4692;
  kk_hml__types__cliarg _x_x4693 = kk_hml__types__new_Cliarg(kk_reuse_null, 0, name, help__text, required, _ctx); /*hml_types/cliarg*/
  _x_x4692 = kk_hml__types__cliarg_box(_x_x4693, _ctx); /*10021*/
  _x_x4691 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4692, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  args_10539 = kk_std_core_list_append(_x_x4689, _x_x4691, _ctx); /*list<hml_types/cliarg>*/
  kk_string_t _x_x4694;
  {
    struct kk_hml__types_Clispec* _con_x4695 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4695->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4694 = _x; /*string*/
  }
  kk_string_t _x_x4696;
  {
    struct kk_hml__types_Clispec* _con_x4697 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4697->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4696 = _x_0; /*string*/
  }
  kk_string_t _x_x4698;
  {
    struct kk_hml__types_Clispec* _con_x4699 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4699->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4698 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4700;
  {
    struct kk_hml__types_Clispec* _con_x4701 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4701->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4700 = _x_2; /*list<hml_types/cliflag>*/
  }
  kk_std_core_types__list _x_x4702;
  {
    struct kk_hml__types_Clispec* _con_x4703 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4703->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4702 = _x_3; /*list<hml_types/clioption>*/
  }
  kk_std_core_types__list _x_x4704;
  {
    struct kk_hml__types_Clispec* _con_x4705 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4705->app__name;
    kk_string_t _pat_1_4 = _con_x4705->app__version;
    kk_string_t _pat_2_4 = _con_x4705->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4705->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4705->app__options;
    kk_std_core_types__list _pat_5_4 = _con_x4705->app__args;
    kk_std_core_types__list _x_4 = _con_x4705->app__commands;
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
    _x_x4704 = _x_4; /*list<(string, hml_types/clispec)>*/
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x4694, _x_x4696, _x_x4698, _x_x4700, _x_x4702, args_10539, _x_x4704, _ctx);
}

kk_hml__types__clispec kk_hml__types_hc__command(kk_hml__types__clispec spec, kk_string_t name, kk_hml__types__clispec hc__sub_0, kk_context_t* _ctx) { /* (spec : clispec, name : string, hc_sub : clispec) -> clispec */ 
  kk_std_core_types__list commands_10550;
  kk_std_core_types__list _x_x4706;
  {
    struct kk_hml__types_Clispec* _con_x4707 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4707->app__commands;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4706 = _x_5; /*list<(string, hml_types/clispec)>*/
  }
  kk_std_core_types__list _x_x4708;
  kk_box_t _x_x4709;
  kk_std_core_types__tuple2 _x_x4710 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_hml__types__clispec_box(hc__sub_0, _ctx), _ctx); /*(10037, 10038)*/
  _x_x4709 = kk_std_core_types__tuple2_box(_x_x4710, _ctx); /*10021*/
  _x_x4708 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x4709, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  commands_10550 = kk_std_core_list_append(_x_x4706, _x_x4708, _ctx); /*list<(string, hml_types/clispec)>*/
  kk_string_t _x_x4711;
  {
    struct kk_hml__types_Clispec* _con_x4712 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4712->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4711 = _x; /*string*/
  }
  kk_string_t _x_x4713;
  {
    struct kk_hml__types_Clispec* _con_x4714 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4714->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4713 = _x_0; /*string*/
  }
  kk_string_t _x_x4715;
  {
    struct kk_hml__types_Clispec* _con_x4716 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4716->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4715 = _x_1; /*string*/
  }
  kk_std_core_types__list _x_x4717;
  {
    struct kk_hml__types_Clispec* _con_x4718 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4718->app__flags;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4717 = _x_2; /*list<hml_types/cliflag>*/
  }
  kk_std_core_types__list _x_x4719;
  {
    struct kk_hml__types_Clispec* _con_x4720 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4720->app__options;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4719 = _x_3; /*list<hml_types/clioption>*/
  }
  kk_std_core_types__list _x_x4721;
  {
    struct kk_hml__types_Clispec* _con_x4722 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_4 = _con_x4722->app__name;
    kk_string_t _pat_1_4 = _con_x4722->app__version;
    kk_string_t _pat_2_4 = _con_x4722->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x4722->app__flags;
    kk_std_core_types__list _pat_4_4 = _con_x4722->app__options;
    kk_std_core_types__list _x_4 = _con_x4722->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x4722->app__commands;
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
    _x_x4721 = _x_4; /*list<hml_types/cliarg>*/
  }
  return kk_hml__types__new_Clispec(kk_reuse_null, 0, _x_x4711, _x_x4713, _x_x4715, _x_x4717, _x_x4719, _x_x4721, commands_10550, _ctx);
}

kk_string_t kk_hml__types_hc__format__flag__usage(kk_hml__types__cliflag f, kk_context_t* _ctx) { /* (f : cliflag) -> div string */ 
  bool _match_x2640;
  kk_integer_t _brw_x2643;
  kk_string_t _x_x4723;
  {
    struct kk_hml__types_Cliflag* _con_x4724 = kk_hml__types__as_Cliflag(f, _ctx);
    kk_string_t _x = _con_x4724->flag__short;
    kk_string_dup(_x, _ctx);
    _x_x4723 = _x; /*string*/
  }
  _brw_x2643 = kk_std_core_string_chars_fs_count(_x_x4723, _ctx); /*int*/
  bool _brw_x2644 = kk_integer_eq_borrow(_brw_x2643,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2643, _ctx);
  _match_x2640 = _brw_x2644; /*bool*/
  if (_match_x2640) {
    kk_string_t s_0_10562;
    kk_string_t _x_x4725;
    kk_define_string_literal(static, _s_x4726, 6, "    --", _ctx)
    _x_x4725 = kk_string_dup(_s_x4726, _ctx); /*string*/
    kk_string_t _x_x4727;
    {
      struct kk_hml__types_Cliflag* _con_x4728 = kk_hml__types__as_Cliflag(f, _ctx);
      kk_string_t _x_0 = _con_x4728->flag__name;
      kk_string_dup(_x_0, _ctx);
      _x_x4727 = _x_0; /*string*/
    }
    s_0_10562 = kk_std_core_types__lp__plus__plus__rp_(_x_x4725, _x_x4727, _ctx); /*string*/
    kk_integer_t y_10569;
    kk_string_t _x_x4729 = kk_string_dup(s_0_10562, _ctx); /*string*/
    y_10569 = kk_std_core_string_chars_fs_count(_x_x4729, _ctx); /*int*/
    kk_integer_t b_10567 = kk_integer_sub((kk_integer_from_small(24)),y_10569,kk_context()); /*int*/;
    kk_string_t _x_x4730;
    kk_string_t _x_x4731;
    kk_string_t _x_x4732;
    kk_define_string_literal(static, _s_x4733, 1, " ", _ctx)
    _x_x4732 = kk_string_dup(_s_x4733, _ctx); /*string*/
    kk_integer_t _x_x4734;
    bool _match_x2642 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10567,kk_context()); /*bool*/;
    if (_match_x2642) {
      kk_integer_drop(b_10567, _ctx);
      _x_x4734 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4734 = b_10567; /*int*/
    }
    _x_x4731 = kk_hml__types_hc__repeat__str(_x_x4732, _x_x4734, _ctx); /*string*/
    _x_x4730 = kk_std_core_types__lp__plus__plus__rp_(s_0_10562, _x_x4731, _ctx); /*string*/
    kk_string_t _x_x4735;
    {
      struct kk_hml__types_Cliflag* _con_x4736 = kk_hml__types__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_2 = _con_x4736->flag__name;
      kk_string_t _pat_1_1 = _con_x4736->flag__short;
      kk_string_t _x_1 = _con_x4736->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_1, _ctx);
        kk_string_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4735 = _x_1; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4730, _x_x4735, _ctx);
  }
  {
    kk_string_t s_1_10571;
    kk_string_t _x_x4737;
    kk_define_string_literal(static, _s_x4738, 3, "  -", _ctx)
    _x_x4737 = kk_string_dup(_s_x4738, _ctx); /*string*/
    kk_string_t _x_x4739;
    kk_string_t _x_x4740;
    {
      struct kk_hml__types_Cliflag* _con_x4741 = kk_hml__types__as_Cliflag(f, _ctx);
      kk_string_t _x_2 = _con_x4741->flag__short;
      kk_string_dup(_x_2, _ctx);
      _x_x4740 = _x_2; /*string*/
    }
    kk_string_t _x_x4742;
    kk_string_t _x_x4743;
    kk_define_string_literal(static, _s_x4744, 4, ", --", _ctx)
    _x_x4743 = kk_string_dup(_s_x4744, _ctx); /*string*/
    kk_string_t _x_x4745;
    {
      struct kk_hml__types_Cliflag* _con_x4746 = kk_hml__types__as_Cliflag(f, _ctx);
      kk_string_t _x_3 = _con_x4746->flag__name;
      kk_string_dup(_x_3, _ctx);
      _x_x4745 = _x_3; /*string*/
    }
    _x_x4742 = kk_std_core_types__lp__plus__plus__rp_(_x_x4743, _x_x4745, _ctx); /*string*/
    _x_x4739 = kk_std_core_types__lp__plus__plus__rp_(_x_x4740, _x_x4742, _ctx); /*string*/
    s_1_10571 = kk_std_core_types__lp__plus__plus__rp_(_x_x4737, _x_x4739, _ctx); /*string*/
    kk_integer_t y_0_10579;
    kk_string_t _x_x4747 = kk_string_dup(s_1_10571, _ctx); /*string*/
    y_0_10579 = kk_std_core_string_chars_fs_count(_x_x4747, _ctx); /*int*/
    kk_integer_t b_0_10577 = kk_integer_sub((kk_integer_from_small(24)),y_0_10579,kk_context()); /*int*/;
    kk_string_t _x_x4748;
    kk_string_t _x_x4749;
    kk_string_t _x_x4750;
    kk_define_string_literal(static, _s_x4751, 1, " ", _ctx)
    _x_x4750 = kk_string_dup(_s_x4751, _ctx); /*string*/
    kk_integer_t _x_x4752;
    bool _match_x2641 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10577,kk_context()); /*bool*/;
    if (_match_x2641) {
      kk_integer_drop(b_0_10577, _ctx);
      _x_x4752 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4752 = b_0_10577; /*int*/
    }
    _x_x4749 = kk_hml__types_hc__repeat__str(_x_x4750, _x_x4752, _ctx); /*string*/
    _x_x4748 = kk_std_core_types__lp__plus__plus__rp_(s_1_10571, _x_x4749, _ctx); /*string*/
    kk_string_t _x_x4753;
    {
      struct kk_hml__types_Cliflag* _con_x4754 = kk_hml__types__as_Cliflag(f, _ctx);
      kk_string_t _pat_0_7 = _con_x4754->flag__name;
      kk_string_t _pat_1_4 = _con_x4754->flag__short;
      kk_string_t _x_4 = _con_x4754->flag__help;
      if kk_likely(kk_datatype_ptr_is_unique(f, _ctx)) {
        kk_string_drop(_pat_1_4, _ctx);
        kk_string_drop(_pat_0_7, _ctx);
        kk_datatype_ptr_free(f, _ctx);
      }
      else {
        kk_string_dup(_x_4, _ctx);
        kk_datatype_ptr_decref(f, _ctx);
      }
      _x_x4753 = _x_4; /*string*/
    }
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4748, _x_x4753, _ctx);
  }
}

kk_string_t kk_hml__types_hc__format__option__usage(kk_hml__types__clioption o, kk_context_t* _ctx) { /* (o : clioption) -> div string */ 
  kk_string_t suffix;
  bool _match_x2637;
  kk_integer_t _brw_x2638;
  kk_string_t _x_x4755;
  {
    struct kk_hml__types_Clioption* _con_x4756 = kk_hml__types__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x4756->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x4755 = _x; /*string*/
  }
  _brw_x2638 = kk_std_core_string_chars_fs_count(_x_x4755, _ctx); /*int*/
  bool _brw_x2639 = kk_integer_eq_borrow(_brw_x2638,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2638, _ctx);
  _match_x2637 = _brw_x2639; /*bool*/
  if (_match_x2637) {
    suffix = kk_string_empty(); /*string*/
  }
  else {
    kk_string_t _x_x4758;
    kk_define_string_literal(static, _s_x4759, 11, " [default: ", _ctx)
    _x_x4758 = kk_string_dup(_s_x4759, _ctx); /*string*/
    kk_string_t _x_x4760;
    kk_string_t _x_x4761;
    {
      struct kk_hml__types_Clioption* _con_x4762 = kk_hml__types__as_Clioption(o, _ctx);
      kk_string_t _x_0 = _con_x4762->opt__default;
      kk_string_dup(_x_0, _ctx);
      _x_x4761 = _x_0; /*string*/
    }
    kk_string_t _x_x4763;
    kk_define_string_literal(static, _s_x4764, 1, "]", _ctx)
    _x_x4763 = kk_string_dup(_s_x4764, _ctx); /*string*/
    _x_x4760 = kk_std_core_types__lp__plus__plus__rp_(_x_x4761, _x_x4763, _ctx); /*string*/
    suffix = kk_std_core_types__lp__plus__plus__rp_(_x_x4758, _x_x4760, _ctx); /*string*/
  }
  bool _match_x2632;
  kk_integer_t _brw_x2635;
  kk_string_t _x_x4765;
  {
    struct kk_hml__types_Clioption* _con_x4766 = kk_hml__types__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x4766->opt__short;
    kk_string_dup(_x_1, _ctx);
    _x_x4765 = _x_1; /*string*/
  }
  _brw_x2635 = kk_std_core_string_chars_fs_count(_x_x4765, _ctx); /*int*/
  bool _brw_x2636 = kk_integer_eq_borrow(_brw_x2635,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2635, _ctx);
  _match_x2632 = _brw_x2636; /*bool*/
  if (_match_x2632) {
    kk_string_t s_1_10586;
    kk_string_t _x_x4767;
    kk_define_string_literal(static, _s_x4768, 6, "    --", _ctx)
    _x_x4767 = kk_string_dup(_s_x4768, _ctx); /*string*/
    kk_string_t _x_x4769;
    kk_string_t _x_x4770;
    {
      struct kk_hml__types_Clioption* _con_x4771 = kk_hml__types__as_Clioption(o, _ctx);
      kk_string_t _x_2 = _con_x4771->opt__name;
      kk_string_dup(_x_2, _ctx);
      _x_x4770 = _x_2; /*string*/
    }
    kk_string_t _x_x4772;
    kk_define_string_literal(static, _s_x4773, 6, " VALUE", _ctx)
    _x_x4772 = kk_string_dup(_s_x4773, _ctx); /*string*/
    _x_x4769 = kk_std_core_types__lp__plus__plus__rp_(_x_x4770, _x_x4772, _ctx); /*string*/
    s_1_10586 = kk_std_core_types__lp__plus__plus__rp_(_x_x4767, _x_x4769, _ctx); /*string*/
    kk_integer_t y_10593;
    kk_string_t _x_x4774 = kk_string_dup(s_1_10586, _ctx); /*string*/
    y_10593 = kk_std_core_string_chars_fs_count(_x_x4774, _ctx); /*int*/
    kk_integer_t b_10591 = kk_integer_sub((kk_integer_from_small(24)),y_10593,kk_context()); /*int*/;
    kk_string_t _x_x4775;
    kk_string_t _x_x4776;
    kk_string_t _x_x4777;
    kk_string_t _x_x4778;
    kk_define_string_literal(static, _s_x4779, 1, " ", _ctx)
    _x_x4778 = kk_string_dup(_s_x4779, _ctx); /*string*/
    kk_integer_t _x_x4780;
    bool _match_x2634 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10591,kk_context()); /*bool*/;
    if (_match_x2634) {
      kk_integer_drop(b_10591, _ctx);
      _x_x4780 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4780 = b_10591; /*int*/
    }
    _x_x4777 = kk_hml__types_hc__repeat__str(_x_x4778, _x_x4780, _ctx); /*string*/
    _x_x4776 = kk_std_core_types__lp__plus__plus__rp_(s_1_10586, _x_x4777, _ctx); /*string*/
    kk_string_t _x_x4781;
    {
      struct kk_hml__types_Clioption* _con_x4782 = kk_hml__types__as_Clioption(o, _ctx);
      kk_string_t _pat_0_5 = _con_x4782->opt__name;
      kk_string_t _pat_1_4 = _con_x4782->opt__short;
      kk_string_t _x_3 = _con_x4782->opt__help;
      kk_string_t _pat_2_3 = _con_x4782->opt__default;
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
      _x_x4781 = _x_3; /*string*/
    }
    _x_x4775 = kk_std_core_types__lp__plus__plus__rp_(_x_x4776, _x_x4781, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4775, suffix, _ctx);
  }
  {
    kk_string_t s_2_10595;
    kk_string_t _x_x4783;
    kk_define_string_literal(static, _s_x4784, 3, "  -", _ctx)
    _x_x4783 = kk_string_dup(_s_x4784, _ctx); /*string*/
    kk_string_t _x_x4785;
    kk_string_t _x_x4786;
    {
      struct kk_hml__types_Clioption* _con_x4787 = kk_hml__types__as_Clioption(o, _ctx);
      kk_string_t _x_4 = _con_x4787->opt__short;
      kk_string_dup(_x_4, _ctx);
      _x_x4786 = _x_4; /*string*/
    }
    kk_string_t _x_x4788;
    kk_string_t _x_x4789;
    kk_define_string_literal(static, _s_x4790, 4, ", --", _ctx)
    _x_x4789 = kk_string_dup(_s_x4790, _ctx); /*string*/
    kk_string_t _x_x4791;
    kk_string_t _x_x4792;
    {
      struct kk_hml__types_Clioption* _con_x4793 = kk_hml__types__as_Clioption(o, _ctx);
      kk_string_t _x_5 = _con_x4793->opt__name;
      kk_string_dup(_x_5, _ctx);
      _x_x4792 = _x_5; /*string*/
    }
    kk_string_t _x_x4794;
    kk_define_string_literal(static, _s_x4795, 6, " VALUE", _ctx)
    _x_x4794 = kk_string_dup(_s_x4795, _ctx); /*string*/
    _x_x4791 = kk_std_core_types__lp__plus__plus__rp_(_x_x4792, _x_x4794, _ctx); /*string*/
    _x_x4788 = kk_std_core_types__lp__plus__plus__rp_(_x_x4789, _x_x4791, _ctx); /*string*/
    _x_x4785 = kk_std_core_types__lp__plus__plus__rp_(_x_x4786, _x_x4788, _ctx); /*string*/
    s_2_10595 = kk_std_core_types__lp__plus__plus__rp_(_x_x4783, _x_x4785, _ctx); /*string*/
    kk_integer_t y_0_10603;
    kk_string_t _x_x4796 = kk_string_dup(s_2_10595, _ctx); /*string*/
    y_0_10603 = kk_std_core_string_chars_fs_count(_x_x4796, _ctx); /*int*/
    kk_integer_t b_0_10601 = kk_integer_sub((kk_integer_from_small(24)),y_0_10603,kk_context()); /*int*/;
    kk_string_t _x_x4797;
    kk_string_t _x_x4798;
    kk_string_t _x_x4799;
    kk_string_t _x_x4800;
    kk_define_string_literal(static, _s_x4801, 1, " ", _ctx)
    _x_x4800 = kk_string_dup(_s_x4801, _ctx); /*string*/
    kk_integer_t _x_x4802;
    bool _match_x2633 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10601,kk_context()); /*bool*/;
    if (_match_x2633) {
      kk_integer_drop(b_0_10601, _ctx);
      _x_x4802 = kk_integer_from_small(0); /*int*/
    }
    else {
      _x_x4802 = b_0_10601; /*int*/
    }
    _x_x4799 = kk_hml__types_hc__repeat__str(_x_x4800, _x_x4802, _ctx); /*string*/
    _x_x4798 = kk_std_core_types__lp__plus__plus__rp_(s_2_10595, _x_x4799, _ctx); /*string*/
    kk_string_t _x_x4803;
    {
      struct kk_hml__types_Clioption* _con_x4804 = kk_hml__types__as_Clioption(o, _ctx);
      kk_string_t _pat_0_9 = _con_x4804->opt__name;
      kk_string_t _pat_1_7 = _con_x4804->opt__short;
      kk_string_t _x_6 = _con_x4804->opt__help;
      kk_string_t _pat_2_7 = _con_x4804->opt__default;
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
      _x_x4803 = _x_6; /*string*/
    }
    _x_x4797 = kk_std_core_types__lp__plus__plus__rp_(_x_x4798, _x_x4803, _ctx); /*string*/
    return kk_std_core_types__lp__plus__plus__rp_(_x_x4797, suffix, _ctx);
  }
}

kk_string_t kk_hml__types_hc__format__arg__usage(kk_hml__types__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> div string */ 
  kk_string_t s_10605;
  kk_string_t _x_x4805;
  kk_define_string_literal(static, _s_x4806, 3, "  <", _ctx)
  _x_x4805 = kk_string_dup(_s_x4806, _ctx); /*string*/
  kk_string_t _x_x4807;
  kk_string_t _x_x4808;
  {
    struct kk_hml__types_Cliarg* _con_x4809 = kk_hml__types__as_Cliarg(a, _ctx);
    kk_string_t _x_0 = _con_x4809->arg__name;
    kk_string_dup(_x_0, _ctx);
    _x_x4808 = _x_0; /*string*/
  }
  kk_string_t _x_x4810;
  kk_define_string_literal(static, _s_x4811, 1, ">", _ctx)
  _x_x4810 = kk_string_dup(_s_x4811, _ctx); /*string*/
  _x_x4807 = kk_std_core_types__lp__plus__plus__rp_(_x_x4808, _x_x4810, _ctx); /*string*/
  s_10605 = kk_std_core_types__lp__plus__plus__rp_(_x_x4805, _x_x4807, _ctx); /*string*/
  kk_integer_t y_10612;
  kk_string_t _x_x4812 = kk_string_dup(s_10605, _ctx); /*string*/
  y_10612 = kk_std_core_string_chars_fs_count(_x_x4812, _ctx); /*int*/
  kk_integer_t b_10610 = kk_integer_sub((kk_integer_from_small(24)),y_10612,kk_context()); /*int*/;
  kk_string_t _x_x4813;
  kk_string_t _x_x4814;
  kk_string_t _x_x4815;
  kk_string_t _x_x4816;
  kk_define_string_literal(static, _s_x4817, 1, " ", _ctx)
  _x_x4816 = kk_string_dup(_s_x4817, _ctx); /*string*/
  kk_integer_t _x_x4818;
  bool _match_x2631 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10610,kk_context()); /*bool*/;
  if (_match_x2631) {
    kk_integer_drop(b_10610, _ctx);
    _x_x4818 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4818 = b_10610; /*int*/
  }
  _x_x4815 = kk_hml__types_hc__repeat__str(_x_x4816, _x_x4818, _ctx); /*string*/
  _x_x4814 = kk_std_core_types__lp__plus__plus__rp_(s_10605, _x_x4815, _ctx); /*string*/
  kk_string_t _x_x4819;
  {
    struct kk_hml__types_Cliarg* _con_x4820 = kk_hml__types__as_Cliarg(a, _ctx);
    kk_string_t _x_1 = _con_x4820->arg__help;
    kk_string_dup(_x_1, _ctx);
    _x_x4819 = _x_1; /*string*/
  }
  _x_x4813 = kk_std_core_types__lp__plus__plus__rp_(_x_x4814, _x_x4819, _ctx); /*string*/
  kk_string_t _x_x4821;
  {
    struct kk_hml__types_Cliarg* _con_x4822 = kk_hml__types__as_Cliarg(a, _ctx);
    kk_string_t _pat_0 = _con_x4822->arg__name;
    kk_string_t _pat_1 = _con_x4822->arg__help;
    bool _x = _con_x4822->arg__required;
    if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(a, _ctx);
    }
    else {
      kk_datatype_ptr_decref(a, _ctx);
    }
    if (_x) {
      kk_define_string_literal(static, _s_x4823, 11, " (required)", _ctx)
      _x_x4821 = kk_string_dup(_s_x4823, _ctx); /*string*/
    }
    else {
      _x_x4821 = kk_string_empty(); /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4813, _x_x4821, _ctx);
}

kk_string_t kk_hml__types_hc__format__arg__label(kk_hml__types__cliarg a, kk_context_t* _ctx) { /* (a : cliarg) -> string */ 
  {
    struct kk_hml__types_Cliarg* _con_x4825 = kk_hml__types__as_Cliarg(a, _ctx);
    bool _x = _con_x4825->arg__required;
    if (_x) {
      kk_string_t _x_x4826;
      kk_define_string_literal(static, _s_x4827, 2, " <", _ctx)
      _x_x4826 = kk_string_dup(_s_x4827, _ctx); /*string*/
      kk_string_t _x_x4828;
      kk_string_t _x_x4829;
      {
        struct kk_hml__types_Cliarg* _con_x4830 = kk_hml__types__as_Cliarg(a, _ctx);
        kk_string_t _x_0 = _con_x4830->arg__name;
        kk_string_t _pat_0_0 = _con_x4830->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_0, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4829 = _x_0; /*string*/
      }
      kk_string_t _x_x4831;
      kk_define_string_literal(static, _s_x4832, 1, ">", _ctx)
      _x_x4831 = kk_string_dup(_s_x4832, _ctx); /*string*/
      _x_x4828 = kk_std_core_types__lp__plus__plus__rp_(_x_x4829, _x_x4831, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4826, _x_x4828, _ctx);
    }
    {
      kk_string_t _x_x4833;
      kk_define_string_literal(static, _s_x4834, 2, " [", _ctx)
      _x_x4833 = kk_string_dup(_s_x4834, _ctx); /*string*/
      kk_string_t _x_x4835;
      kk_string_t _x_x4836;
      {
        struct kk_hml__types_Cliarg* _con_x4837 = kk_hml__types__as_Cliarg(a, _ctx);
        kk_string_t _x_1 = _con_x4837->arg__name;
        kk_string_t _pat_0_2 = _con_x4837->arg__help;
        if kk_likely(kk_datatype_ptr_is_unique(a, _ctx)) {
          kk_string_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(a, _ctx);
        }
        else {
          kk_string_dup(_x_1, _ctx);
          kk_datatype_ptr_decref(a, _ctx);
        }
        _x_x4836 = _x_1; /*string*/
      }
      kk_string_t _x_x4838;
      kk_define_string_literal(static, _s_x4839, 1, "]", _ctx)
      _x_x4838 = kk_string_dup(_s_x4839, _ctx); /*string*/
      _x_x4835 = kk_std_core_types__lp__plus__plus__rp_(_x_x4836, _x_x4838, _ctx); /*string*/
      return kk_std_core_types__lp__plus__plus__rp_(_x_x4833, _x_x4835, _ctx);
    }
  }
}

kk_string_t kk_hml__types_hc__format__cmd__usage(kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (pair : (string, clispec)) -> div string */ 
  kk_string_t s_10618;
  kk_string_t _x_x4840;
  kk_define_string_literal(static, _s_x4841, 2, "  ", _ctx)
  _x_x4840 = kk_string_dup(_s_x4841, _ctx); /*string*/
  kk_string_t _x_x4842;
  {
    kk_box_t _box_x505 = pair.fst;
    kk_box_t _box_x506 = pair.snd;
    kk_string_t _x = kk_string_unbox(_box_x505);
    kk_string_dup(_x, _ctx);
    _x_x4842 = _x; /*string*/
  }
  s_10618 = kk_std_core_types__lp__plus__plus__rp_(_x_x4840, _x_x4842, _ctx); /*string*/
  kk_integer_t y_10625;
  kk_string_t _x_x4843 = kk_string_dup(s_10618, _ctx); /*string*/
  y_10625 = kk_std_core_string_chars_fs_count(_x_x4843, _ctx); /*int*/
  kk_integer_t b_10623 = kk_integer_sub((kk_integer_from_small(24)),y_10625,kk_context()); /*int*/;
  kk_string_t _x_x4844;
  kk_string_t _x_x4845;
  kk_string_t _x_x4846;
  kk_define_string_literal(static, _s_x4847, 1, " ", _ctx)
  _x_x4846 = kk_string_dup(_s_x4847, _ctx); /*string*/
  kk_integer_t _x_x4848;
  bool _match_x2630 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10623,kk_context()); /*bool*/;
  if (_match_x2630) {
    kk_integer_drop(b_10623, _ctx);
    _x_x4848 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4848 = b_10623; /*int*/
  }
  _x_x4845 = kk_hml__types_hc__repeat__str(_x_x4846, _x_x4848, _ctx); /*string*/
  _x_x4844 = kk_std_core_types__lp__plus__plus__rp_(s_10618, _x_x4845, _ctx); /*string*/
  kk_string_t _x_x4849;
  {
    kk_box_t _box_x507 = pair.fst;
    kk_box_t _box_x508 = pair.snd;
    kk_hml__types__clispec _x_1 = kk_hml__types__clispec_unbox(_box_x508, KK_BORROWED, _ctx);
    kk_hml__types__clispec_dup(_x_1, _ctx);
    kk_std_core_types__tuple2_drop(pair, _ctx);
    {
      struct kk_hml__types_Clispec* _con_x4850 = kk_hml__types__as_Clispec(_x_1, _ctx);
      kk_string_t _pat_0_1 = _con_x4850->app__name;
      kk_string_t _pat_1_0 = _con_x4850->app__version;
      kk_string_t _x_0 = _con_x4850->app__about;
      kk_std_core_types__list _pat_2_0 = _con_x4850->app__flags;
      kk_std_core_types__list _pat_3 = _con_x4850->app__options;
      kk_std_core_types__list _pat_4 = _con_x4850->app__args;
      kk_std_core_types__list _pat_5 = _con_x4850->app__commands;
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
      _x_x4849 = _x_0; /*string*/
    }
  }
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4844, _x_x4849, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__help_fun4864__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__help_fun4864(kk_function_t _fself, kk_box_t _b_x511, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__help_fun4864(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__help_fun4864, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__help_fun4864(kk_function_t _fself, kk_box_t _b_x511, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4865;
  kk_hml__types__cliarg _x_x4866 = kk_hml__types__cliarg_unbox(_b_x511, KK_OWNED, _ctx); /*hml_types/cliarg*/
  _x_x4865 = kk_hml__types_hc__format__arg__label(_x_x4866, _ctx); /*string*/
  return kk_string_box(_x_x4865);
}


// lift anonymous function
struct kk_hml__types_hc__cli__help_fun4884__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__help_fun4884(kk_function_t _fself, kk_box_t _b_x516, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__help_fun4884(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__help_fun4884, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__help_fun4884(kk_function_t _fself, kk_box_t _b_x516, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4885;
  kk_hml__types__cliflag _x_x4886 = kk_hml__types__cliflag_unbox(_b_x516, KK_OWNED, _ctx); /*hml_types/cliflag*/
  _x_x4885 = kk_hml__types_hc__format__flag__usage(_x_x4886, _ctx); /*string*/
  return kk_string_box(_x_x4885);
}


// lift anonymous function
struct kk_hml__types_hc__cli__help_fun4889__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__help_fun4889(kk_function_t _fself, kk_box_t _b_x521, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__help_fun4889(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__help_fun4889, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__help_fun4889(kk_function_t _fself, kk_box_t _b_x521, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4890;
  kk_hml__types__clioption _x_x4891 = kk_hml__types__clioption_unbox(_b_x521, KK_OWNED, _ctx); /*hml_types/clioption*/
  _x_x4890 = kk_hml__types_hc__format__option__usage(_x_x4891, _ctx); /*string*/
  return kk_string_box(_x_x4890);
}


// lift anonymous function
struct kk_hml__types_hc__cli__help_fun4930__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__help_fun4930(kk_function_t _fself, kk_box_t _b_x536, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__help_fun4930(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__help_fun4930, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__help_fun4930(kk_function_t _fself, kk_box_t _b_x536, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4931;
  kk_hml__types__cliarg _x_x4932 = kk_hml__types__cliarg_unbox(_b_x536, KK_OWNED, _ctx); /*hml_types/cliarg*/
  _x_x4931 = kk_hml__types_hc__format__arg__usage(_x_x4932, _ctx); /*string*/
  return kk_string_box(_x_x4931);
}


// lift anonymous function
struct kk_hml__types_hc__cli__help_fun4946__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__help_fun4946(kk_function_t _fself, kk_box_t _b_x549, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__help_fun4946(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__help_fun4946, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__help_fun4946(kk_function_t _fself, kk_box_t _b_x549, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x4947;
  kk_std_core_types__tuple2 _x_x4948 = kk_std_core_types__tuple2_unbox(_b_x549, KK_OWNED, _ctx); /*(string, hml_types/clispec)*/
  _x_x4947 = kk_hml__types_hc__format__cmd__usage(_x_x4948, _ctx); /*string*/
  return kk_string_box(_x_x4947);
}

kk_string_t kk_hml__types_hc__cli__help(kk_hml__types__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> div string */ 
  kk_string_t header;
  kk_string_t _x_x4851;
  {
    struct kk_hml__types_Clispec* _con_x4852 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4852->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4851 = _x; /*string*/
  }
  kk_string_t _x_x4853;
  kk_string_t _x_x4854;
  kk_define_string_literal(static, _s_x4855, 1, " ", _ctx)
  _x_x4854 = kk_string_dup(_s_x4855, _ctx); /*string*/
  kk_string_t _x_x4856;
  kk_string_t _x_x4857;
  {
    struct kk_hml__types_Clispec* _con_x4858 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_0 = _con_x4858->app__version;
    kk_string_dup(_x_0, _ctx);
    _x_x4857 = _x_0; /*string*/
  }
  kk_string_t _x_x4859;
  kk_string_t _x_x4860;
  kk_define_string_literal(static, _s_x4861, 5, " " "\xE2\x80\x94" " ", _ctx)
  _x_x4860 = kk_string_dup(_s_x4861, _ctx); /*string*/
  kk_string_t _x_x4862;
  {
    struct kk_hml__types_Clispec* _con_x4863 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_1 = _con_x4863->app__about;
    kk_string_dup(_x_1, _ctx);
    _x_x4862 = _x_1; /*string*/
  }
  _x_x4859 = kk_std_core_types__lp__plus__plus__rp_(_x_x4860, _x_x4862, _ctx); /*string*/
  _x_x4856 = kk_std_core_types__lp__plus__plus__rp_(_x_x4857, _x_x4859, _ctx); /*string*/
  _x_x4853 = kk_std_core_types__lp__plus__plus__rp_(_x_x4854, _x_x4856, _ctx); /*string*/
  header = kk_std_core_types__lp__plus__plus__rp_(_x_x4851, _x_x4853, _ctx); /*string*/
  kk_std_core_types__list arg__labels;
  kk_function_t _brw_x2628 = kk_hml__types_new_hc__cli__help_fun4864(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2629;
  kk_std_core_types__list _x_x4867;
  {
    struct kk_hml__types_Clispec* _con_x4868 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_2 = _con_x4868->app__args;
    kk_std_core_types__list_dup(_x_2, _ctx);
    _x_x4867 = _x_2; /*list<hml_types/cliarg>*/
  }
  _brw_x2629 = kk_std_core_list_map(_x_x4867, _brw_x2628, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2628, _ctx);
  arg__labels = _brw_x2629; /*list<string>*/
  kk_string_t args__str;
  kk_string_t _x_x4869 = kk_string_empty(); /*string*/
  args__str = kk_std_core_list_joinsep(arg__labels, _x_x4869, _ctx); /*string*/
  kk_string_t cmds__str;
  bool _match_x2625;
  kk_integer_t _brw_x2626;
  kk_std_core_types__list _x_x4871;
  {
    struct kk_hml__types_Clispec* _con_x4872 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_3 = _con_x4872->app__commands;
    kk_std_core_types__list_dup(_x_3, _ctx);
    _x_x4871 = _x_3; /*list<(string, hml_types/clispec)>*/
  }
  _brw_x2626 = kk_std_core_list__lift_length_6003(_x_x4871, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2627 = kk_integer_gt_borrow(_brw_x2626,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2626, _ctx);
  _match_x2625 = _brw_x2627; /*bool*/
  if (_match_x2625) {
    kk_define_string_literal(static, _s_x4873, 10, " <COMMAND>", _ctx)
    cmds__str = kk_string_dup(_s_x4873, _ctx); /*string*/
  }
  else {
    cmds__str = kk_string_empty(); /*string*/
  }
  kk_string_t usage__line;
  kk_string_t _x_x4875;
  kk_define_string_literal(static, _s_x4876, 7, "USAGE: ", _ctx)
  _x_x4875 = kk_string_dup(_s_x4876, _ctx); /*string*/
  kk_string_t _x_x4877;
  kk_string_t _x_x4878;
  {
    struct kk_hml__types_Clispec* _con_x4879 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x_4 = _con_x4879->app__name;
    kk_string_dup(_x_4, _ctx);
    _x_x4878 = _x_4; /*string*/
  }
  kk_string_t _x_x4880;
  kk_string_t _x_x4881;
  kk_define_string_literal(static, _s_x4882, 10, " [OPTIONS]", _ctx)
  _x_x4881 = kk_string_dup(_s_x4882, _ctx); /*string*/
  kk_string_t _x_x4883 = kk_std_core_types__lp__plus__plus__rp_(args__str, cmds__str, _ctx); /*string*/
  _x_x4880 = kk_std_core_types__lp__plus__plus__rp_(_x_x4881, _x_x4883, _ctx); /*string*/
  _x_x4877 = kk_std_core_types__lp__plus__plus__rp_(_x_x4878, _x_x4880, _ctx); /*string*/
  usage__line = kk_std_core_types__lp__plus__plus__rp_(_x_x4875, _x_x4877, _ctx); /*string*/
  kk_std_core_types__list flag__lines;
  kk_function_t _brw_x2623 = kk_hml__types_new_hc__cli__help_fun4884(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2624;
  kk_std_core_types__list _x_x4887;
  {
    struct kk_hml__types_Clispec* _con_x4888 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_5 = _con_x4888->app__flags;
    kk_std_core_types__list_dup(_x_5, _ctx);
    _x_x4887 = _x_5; /*list<hml_types/cliflag>*/
  }
  _brw_x2624 = kk_std_core_list_map(_x_x4887, _brw_x2623, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2623, _ctx);
  flag__lines = _brw_x2624; /*list<string>*/
  kk_std_core_types__list opt__lines;
  kk_function_t _brw_x2621 = kk_hml__types_new_hc__cli__help_fun4889(_ctx); /*(10001) -> 10003 10002*/;
  kk_std_core_types__list _brw_x2622;
  kk_std_core_types__list _x_x4892;
  {
    struct kk_hml__types_Clispec* _con_x4893 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_6 = _con_x4893->app__options;
    kk_std_core_types__list_dup(_x_6, _ctx);
    _x_x4892 = _x_6; /*list<hml_types/clioption>*/
  }
  _brw_x2622 = kk_std_core_list_map(_x_x4892, _brw_x2621, _ctx); /*list<10002>*/
  kk_function_drop(_brw_x2621, _ctx);
  opt__lines = _brw_x2622; /*list<string>*/
  kk_integer_t y_10646;
  kk_string_t _x_x4894;
  kk_define_string_literal(static, _s_x4895, 12, "  -h, --help", _ctx)
  _x_x4894 = kk_string_dup(_s_x4895, _ctx); /*string*/
  y_10646 = kk_std_core_string_chars_fs_count(_x_x4894, _ctx); /*int*/
  kk_integer_t b_10644 = kk_integer_sub((kk_integer_from_small(24)),y_10646,kk_context()); /*int*/;
  kk_integer_t y_0_10653;
  kk_string_t _x_x4896;
  kk_define_string_literal(static, _s_x4897, 15, "      --version", _ctx)
  _x_x4896 = kk_string_dup(_s_x4897, _ctx); /*string*/
  y_0_10653 = kk_std_core_string_chars_fs_count(_x_x4896, _ctx); /*int*/
  kk_integer_t b_0_10651 = kk_integer_sub((kk_integer_from_small(24)),y_0_10653,kk_context()); /*int*/;
  kk_string_t _b_x526_528;
  kk_string_t _x_x4898;
  kk_string_t _x_x4899;
  kk_define_string_literal(static, _s_x4900, 12, "  -h, --help", _ctx)
  _x_x4899 = kk_string_dup(_s_x4900, _ctx); /*string*/
  kk_string_t _x_x4901;
  kk_string_t _x_x4902;
  kk_define_string_literal(static, _s_x4903, 1, " ", _ctx)
  _x_x4902 = kk_string_dup(_s_x4903, _ctx); /*string*/
  kk_integer_t _x_x4904;
  bool _match_x2620 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_10644,kk_context()); /*bool*/;
  if (_match_x2620) {
    kk_integer_drop(b_10644, _ctx);
    _x_x4904 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4904 = b_10644; /*int*/
  }
  _x_x4901 = kk_hml__types_hc__repeat__str(_x_x4902, _x_x4904, _ctx); /*string*/
  _x_x4898 = kk_std_core_types__lp__plus__plus__rp_(_x_x4899, _x_x4901, _ctx); /*string*/
  kk_string_t _x_x4905;
  kk_define_string_literal(static, _s_x4906, 14, "Show this help", _ctx)
  _x_x4905 = kk_string_dup(_s_x4906, _ctx); /*string*/
  _b_x526_528 = kk_std_core_types__lp__plus__plus__rp_(_x_x4898, _x_x4905, _ctx); /*string*/
  kk_string_t _b_x524_530;
  kk_string_t _x_x4907;
  kk_string_t _x_x4908;
  kk_define_string_literal(static, _s_x4909, 15, "      --version", _ctx)
  _x_x4908 = kk_string_dup(_s_x4909, _ctx); /*string*/
  kk_string_t _x_x4910;
  kk_string_t _x_x4911;
  kk_define_string_literal(static, _s_x4912, 1, " ", _ctx)
  _x_x4911 = kk_string_dup(_s_x4912, _ctx); /*string*/
  kk_integer_t _x_x4913;
  bool _match_x2619 = kk_integer_gt_borrow((kk_integer_from_small(0)),b_0_10651,kk_context()); /*bool*/;
  if (_match_x2619) {
    kk_integer_drop(b_0_10651, _ctx);
    _x_x4913 = kk_integer_from_small(0); /*int*/
  }
  else {
    _x_x4913 = b_0_10651; /*int*/
  }
  _x_x4910 = kk_hml__types_hc__repeat__str(_x_x4911, _x_x4913, _ctx); /*string*/
  _x_x4907 = kk_std_core_types__lp__plus__plus__rp_(_x_x4908, _x_x4910, _ctx); /*string*/
  kk_string_t _x_x4914;
  kk_define_string_literal(static, _s_x4915, 12, "Show version", _ctx)
  _x_x4914 = kk_string_dup(_s_x4915, _ctx); /*string*/
  _b_x524_530 = kk_std_core_types__lp__plus__plus__rp_(_x_x4907, _x_x4914, _ctx); /*string*/
  kk_std_core_types__list xs_1_10654 = kk_std_core_list_append(flag__lines, opt__lines, _ctx); /*list<string>*/;
  kk_std_core_types__list all__opts;
  kk_std_core_types__list _x_x4916;
  kk_std_core_types__list _x_x4917 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x524_530), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _x_x4916 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x526_528), _x_x4917, _ctx); /*list<10021>*/
  all__opts = kk_std_core_list_append(xs_1_10654, _x_x4916, _ctx); /*list<string>*/
  kk_string_t init_11188;
  kk_string_t _x_x4918;
  kk_string_t _x_x4919;
  kk_define_string_literal(static, _s_x4920, 2, "\n\n", _ctx)
  _x_x4919 = kk_string_dup(_s_x4920, _ctx); /*string*/
  kk_string_t _x_x4921;
  kk_string_t _x_x4922;
  kk_string_t _x_x4923;
  kk_define_string_literal(static, _s_x4924, 11, "\n\nOPTIONS:\n", _ctx)
  _x_x4923 = kk_string_dup(_s_x4924, _ctx); /*string*/
  kk_string_t _x_x4925;
  kk_string_t _x_x4926;
  kk_define_string_literal(static, _s_x4927, 1, "\n", _ctx)
  _x_x4926 = kk_string_dup(_s_x4927, _ctx); /*string*/
  _x_x4925 = kk_std_core_list_joinsep(all__opts, _x_x4926, _ctx); /*string*/
  _x_x4922 = kk_std_core_types__lp__plus__plus__rp_(_x_x4923, _x_x4925, _ctx); /*string*/
  _x_x4921 = kk_std_core_types__lp__plus__plus__rp_(usage__line, _x_x4922, _ctx); /*string*/
  _x_x4918 = kk_std_core_types__lp__plus__plus__rp_(_x_x4919, _x_x4921, _ctx); /*string*/
  init_11188 = kk_std_core_types__lp__plus__plus__rp_(header, _x_x4918, _ctx); /*string*/
  kk_ref_t loc = kk_ref_alloc((kk_string_box(init_11188)),kk_context()); /*local-var<20240,string>*/;
  kk_unit_t __ = kk_Unit;
  bool _match_x2614;
  kk_integer_t _brw_x2617;
  kk_std_core_types__list _x_x4928;
  {
    struct kk_hml__types_Clispec* _con_x4929 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_7 = _con_x4929->app__args;
    kk_std_core_types__list_dup(_x_7, _ctx);
    _x_x4928 = _x_7; /*list<hml_types/cliarg>*/
  }
  _brw_x2617 = kk_std_core_list__lift_length_6003(_x_x4928, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2618 = kk_integer_gt_borrow(_brw_x2617,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2617, _ctx);
  _match_x2614 = _brw_x2618; /*bool*/
  if (_match_x2614) {
    kk_std_core_types__list arg__lines;
    kk_function_t _brw_x2615 = kk_hml__types_new_hc__cli__help_fun4930(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2616;
    kk_std_core_types__list _x_x4933;
    {
      struct kk_hml__types_Clispec* _con_x4934 = kk_hml__types__as_Clispec(spec, _ctx);
      kk_std_core_types__list _x_8 = _con_x4934->app__args;
      kk_std_core_types__list_dup(_x_8, _ctx);
      _x_x4933 = _x_8; /*list<hml_types/cliarg>*/
    }
    _brw_x2616 = kk_std_core_list_map(_x_x4933, _brw_x2615, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2615, _ctx);
    arg__lines = _brw_x2616; /*list<string>*/
    kk_string_t _b_x542_544;
    kk_string_t _x_x4935;
    kk_box_t _x_x4936;
    kk_ref_t _x_x4937 = kk_ref_dup(loc, _ctx); /*local-var<20240,string>*/
    _x_x4936 = kk_ref_get(_x_x4937,kk_context()); /*10000*/
    _x_x4935 = kk_string_unbox(_x_x4936); /*string*/
    kk_string_t _x_x4938;
    kk_string_t _x_x4939;
    kk_define_string_literal(static, _s_x4940, 8, "\n\nARGS:\n", _ctx)
    _x_x4939 = kk_string_dup(_s_x4940, _ctx); /*string*/
    kk_string_t _x_x4941;
    kk_string_t _x_x4942;
    kk_define_string_literal(static, _s_x4943, 1, "\n", _ctx)
    _x_x4942 = kk_string_dup(_s_x4943, _ctx); /*string*/
    _x_x4941 = kk_std_core_list_joinsep(arg__lines, _x_x4942, _ctx); /*string*/
    _x_x4938 = kk_std_core_types__lp__plus__plus__rp_(_x_x4939, _x_x4941, _ctx); /*string*/
    _b_x542_544 = kk_std_core_types__lp__plus__plus__rp_(_x_x4935, _x_x4938, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x542_544)),kk_context());
  }
  else {
    
  }
  kk_unit_t ___0 = kk_Unit;
  bool _match_x2609;
  kk_integer_t _brw_x2612;
  kk_std_core_types__list _x_x4944;
  {
    struct kk_hml__types_Clispec* _con_x4945 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_std_core_types__list _x_9 = _con_x4945->app__commands;
    kk_std_core_types__list_dup(_x_9, _ctx);
    _x_x4944 = _x_9; /*list<(string, hml_types/clispec)>*/
  }
  _brw_x2612 = kk_std_core_list__lift_length_6003(_x_x4944, kk_integer_from_small(0), _ctx); /*int*/
  bool _brw_x2613 = kk_integer_gt_borrow(_brw_x2612,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2612, _ctx);
  _match_x2609 = _brw_x2613; /*bool*/
  if (_match_x2609) {
    kk_std_core_types__list cmd__lines;
    kk_function_t _brw_x2610 = kk_hml__types_new_hc__cli__help_fun4946(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2611;
    kk_std_core_types__list _x_x4949;
    {
      struct kk_hml__types_Clispec* _con_x4950 = kk_hml__types__as_Clispec(spec, _ctx);
      kk_string_t _pat_0_13 = _con_x4950->app__name;
      kk_string_t _pat_1_11 = _con_x4950->app__version;
      kk_string_t _pat_2_11 = _con_x4950->app__about;
      kk_std_core_types__list _pat_3_11 = _con_x4950->app__flags;
      kk_std_core_types__list _pat_4_10 = _con_x4950->app__options;
      kk_std_core_types__list _pat_5_10 = _con_x4950->app__args;
      kk_std_core_types__list _x_10 = _con_x4950->app__commands;
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
      _x_x4949 = _x_10; /*list<(string, hml_types/clispec)>*/
    }
    _brw_x2611 = kk_std_core_list_map(_x_x4949, _brw_x2610, _ctx); /*list<10002>*/
    kk_function_drop(_brw_x2610, _ctx);
    cmd__lines = _brw_x2611; /*list<string>*/
    kk_string_t _b_x555_557;
    kk_string_t _x_x4951;
    kk_box_t _x_x4952;
    kk_ref_t _x_x4953 = kk_ref_dup(loc, _ctx); /*local-var<20240,string>*/
    _x_x4952 = kk_ref_get(_x_x4953,kk_context()); /*10000*/
    _x_x4951 = kk_string_unbox(_x_x4952); /*string*/
    kk_string_t _x_x4954;
    kk_string_t _x_x4955;
    kk_define_string_literal(static, _s_x4956, 12, "\n\nCOMMANDS:\n", _ctx)
    _x_x4955 = kk_string_dup(_s_x4956, _ctx); /*string*/
    kk_string_t _x_x4957;
    kk_string_t _x_x4958;
    kk_define_string_literal(static, _s_x4959, 1, "\n", _ctx)
    _x_x4958 = kk_string_dup(_s_x4959, _ctx); /*string*/
    _x_x4957 = kk_std_core_list_joinsep(cmd__lines, _x_x4958, _ctx); /*string*/
    _x_x4954 = kk_std_core_types__lp__plus__plus__rp_(_x_x4955, _x_x4957, _ctx); /*string*/
    _b_x555_557 = kk_std_core_types__lp__plus__plus__rp_(_x_x4951, _x_x4954, _ctx); /*string*/
    kk_ref_set_borrow(loc,(kk_string_box(_b_x555_557)),kk_context());
  }
  else {
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
  }
  kk_string_t res;
  kk_box_t _x_x4960;
  kk_ref_t _x_x4961 = kk_ref_dup(loc, _ctx); /*local-var<20240,string>*/
  _x_x4960 = kk_ref_get(_x_x4961,kk_context()); /*10000*/
  res = kk_string_unbox(_x_x4960); /*string*/
  kk_box_t _x_x4962 = kk_std_core_hnd_prompt_local_var(loc, kk_string_box(res), _ctx); /*10001*/
  return kk_string_unbox(_x_x4962);
}

kk_string_t kk_hml__types_hc__cli__version__str(kk_hml__types__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> string */ 
  kk_string_t _x_x4963;
  {
    struct kk_hml__types_Clispec* _con_x4964 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _x = _con_x4964->app__name;
    kk_string_dup(_x, _ctx);
    _x_x4963 = _x; /*string*/
  }
  kk_string_t _x_x4965;
  kk_string_t _x_x4966;
  kk_define_string_literal(static, _s_x4967, 1, " ", _ctx)
  _x_x4966 = kk_string_dup(_s_x4967, _ctx); /*string*/
  kk_string_t _x_x4968;
  {
    struct kk_hml__types_Clispec* _con_x4969 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0_0 = _con_x4969->app__name;
    kk_string_t _x_0 = _con_x4969->app__version;
    kk_string_t _pat_1_0 = _con_x4969->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x4969->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x4969->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x4969->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x4969->app__commands;
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
    _x_x4968 = _x_0; /*string*/
  }
  _x_x4965 = kk_std_core_types__lp__plus__plus__rp_(_x_x4966, _x_x4968, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x4963, _x_x4965, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__has__flag_fun4974__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml__types_hc__has__flag_fun4974(kk_function_t _fself, kk_box_t _b_x570, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__has__flag_fun4974(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml__types_hc__has__flag_fun4974__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__has__flag_fun4974__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__has__flag_fun4974, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__has__flag_fun4974(kk_function_t _fself, kk_box_t _b_x570, kk_context_t* _ctx) {
  struct kk_hml__types_hc__has__flag_fun4974__t* _self = kk_function_as(struct kk_hml__types_hc__has__flag_fun4974__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4975 = kk_string_unbox(_b_x570); /*string*/
  return kk_string_is_eq(_x_x4975,name,kk_context());
}

bool kk_hml__types_hc__has__flag(kk_hml__types__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> bool */ 
  kk_std_core_types__list _x_x4972;
  {
    struct kk_hml__types_Cliresult* _con_x4973 = kk_hml__types__as_Cliresult(r, _ctx);
    kk_std_core_types__list _x = _con_x4973->cli__flags;
    kk_std_core_types__list _pat_0 = _con_x4973->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4973->cli__positionals;
    kk_string_t _pat_2 = _con_x4973->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4973->cli__sub;
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
    _x_x4972 = _x; /*list<string>*/
  }
  return kk_std_core_list_any(_x_x4972, kk_hml__types_new_hc__has__flag_fun4974(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__get__opt_fun4978__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml__types_hc__get__opt_fun4978(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__get__opt_fun4978(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml__types_hc__get__opt_fun4978__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__get__opt_fun4978__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__get__opt_fun4978, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__get__opt_fun4978(kk_function_t _fself, kk_box_t _b_x578, kk_context_t* _ctx) {
  struct kk_hml__types_hc__get__opt_fun4978__t* _self = kk_function_as(struct kk_hml__types_hc__get__opt_fun4978__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_586 = kk_std_core_types__tuple2_unbox(_b_x578, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4979;
  {
    kk_box_t _box_x574 = pair_586.fst;
    kk_box_t _box_x575 = pair_586.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x574);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_586, _ctx);
    _x_x4979 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4979,name,kk_context());
}

kk_std_core_types__maybe kk_hml__types_hc__get__opt(kk_hml__types__cliresult r, kk_string_t name, kk_context_t* _ctx) { /* (r : cliresult, name : string) -> maybe<string> */ 
  kk_std_core_types__maybe _match_x2608;
  kk_std_core_types__list _x_x4976;
  {
    struct kk_hml__types_Cliresult* _con_x4977 = kk_hml__types__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4977->cli__flags;
    kk_std_core_types__list _x = _con_x4977->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4977->cli__positionals;
    kk_string_t _pat_2 = _con_x4977->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4977->cli__sub;
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
    _x_x4976 = _x; /*list<(string, string)>*/
  }
  _match_x2608 = kk_std_core_list_find(_x_x4976, kk_hml__types_new_hc__get__opt_fun4978(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2608, _ctx)) {
    kk_box_t _box_x579 = _match_x2608._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x579, KK_BORROWED, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2608, _ctx);
    kk_box_t _x_x4980;
    kk_string_t _x_x4981;
    {
      kk_box_t _box_x580 = pair_0.fst;
      kk_box_t _box_x581 = pair_0.snd;
      kk_string_t _x_1 = kk_string_unbox(_box_x581);
      kk_string_dup(_x_1, _ctx);
      kk_std_core_types__tuple2_drop(pair_0, _ctx);
      _x_x4981 = _x_1; /*string*/
    }
    _x_x4980 = kk_string_box(_x_x4981); /*10024*/
    return kk_std_core_types__new_Just(_x_x4980, _ctx);
  }
  {
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__get__opt__or_fun4984__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml__types_hc__get__opt__or_fun4984(kk_function_t _fself, kk_box_t _b_x591, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__get__opt__or_fun4984(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml__types_hc__get__opt__or_fun4984__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__get__opt__or_fun4984__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__get__opt__or_fun4984, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__get__opt__or_fun4984(kk_function_t _fself, kk_box_t _b_x591, kk_context_t* _ctx) {
  struct kk_hml__types_hc__get__opt__or_fun4984__t* _self = kk_function_as(struct kk_hml__types_hc__get__opt__or_fun4984__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 pair_598 = kk_std_core_types__tuple2_unbox(_b_x591, KK_OWNED, _ctx); /*(string, string)*/;
  kk_string_t _x_x4985;
  {
    kk_box_t _box_x587 = pair_598.fst;
    kk_box_t _box_x588 = pair_598.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x587);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(pair_598, _ctx);
    _x_x4985 = _x_0; /*string*/
  }
  return kk_string_is_eq(_x_x4985,name,kk_context());
}

kk_string_t kk_hml__types_hc__get__opt__or(kk_hml__types__cliresult r, kk_string_t name, kk_string_t kkloc_default, kk_context_t* _ctx) { /* (r : cliresult, name : string, default : string) -> string */ 
  kk_std_core_types__maybe _match_x2606;
  kk_std_core_types__list _x_x4982;
  {
    struct kk_hml__types_Cliresult* _con_x4983 = kk_hml__types__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4983->cli__flags;
    kk_std_core_types__list _x = _con_x4983->cli__options;
    kk_std_core_types__list _pat_1 = _con_x4983->cli__positionals;
    kk_string_t _pat_2 = _con_x4983->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4983->cli__sub;
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
    _x_x4982 = _x; /*list<(string, string)>*/
  }
  _match_x2606 = kk_std_core_list_find(_x_x4982, kk_hml__types_new_hc__get__opt__or_fun4984(name, _ctx), _ctx); /*maybe<10001>*/
  if (kk_std_core_types__is_Just(_match_x2606, _ctx)) {
    kk_box_t _box_x592 = _match_x2606._cons.Just.value;
    kk_std_core_types__tuple2 pair_0 = kk_std_core_types__tuple2_unbox(_box_x592, KK_BORROWED, _ctx);
    kk_string_drop(kkloc_default, _ctx);
    kk_std_core_types__tuple2_dup(pair_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2606, _ctx);
    {
      kk_box_t _box_x593 = pair_0.fst;
      kk_box_t _box_x594 = pair_0.snd;
      kk_string_t _x_1 = kk_string_unbox(_box_x594);
      kk_string_dup(_x_1, _ctx);
      kk_std_core_types__tuple2_drop(pair_0, _ctx);
      return _x_1;
    }
  }
  {
    kk_std_core_types__maybe _match_x2607 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/;
    if (kk_std_core_types__is_Just(_match_x2607, _ctx)) {
      kk_box_t _box_x595 = _match_x2607._cons.Just.value;
      kk_string_t v = kk_string_unbox(_box_x595);
      kk_string_drop(kkloc_default, _ctx);
      kk_string_dup(v, _ctx);
      kk_std_core_types__maybe_drop(_match_x2607, _ctx);
      return v;
    }
    {
      return kkloc_default;
    }
  }
}

kk_std_core_types__list kk_hml__types_hc__get__positionals(kk_hml__types__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> list<string> */ 
  {
    struct kk_hml__types_Cliresult* _con_x4986 = kk_hml__types__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4986->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4986->cli__options;
    kk_std_core_types__list _x = _con_x4986->cli__positionals;
    kk_string_t _pat_2 = _con_x4986->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4986->cli__sub;
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

kk_string_t kk_hml__types_hc__get__command(kk_hml__types__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> string */ 
  {
    struct kk_hml__types_Cliresult* _con_x4987 = kk_hml__types__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4987->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4987->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4987->cli__positionals;
    kk_string_t _x = _con_x4987->cli__command;
    kk_std_core_types__maybe _pat_3 = _con_x4987->cli__sub;
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

kk_std_core_types__maybe kk_hml__types_hc__get__sub(kk_hml__types__cliresult r, kk_context_t* _ctx) { /* (r : cliresult) -> maybe<cliresult> */ 
  {
    struct kk_hml__types_Cliresult* _con_x4988 = kk_hml__types__as_Cliresult(r, _ctx);
    kk_std_core_types__list _pat_0 = _con_x4988->cli__flags;
    kk_std_core_types__list _pat_1 = _con_x4988->cli__options;
    kk_std_core_types__list _pat_2 = _con_x4988->cli__positionals;
    kk_string_t _pat_3 = _con_x4988->cli__command;
    kk_std_core_types__maybe _x = _con_x4988->cli__sub;
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
struct kk_hml__types_hc__find__flag__long_fun4989__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml__types_hc__find__flag__long_fun4989(kk_function_t _fself, kk_box_t _b_x601, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__find__flag__long_fun4989(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml__types_hc__find__flag__long_fun4989__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__find__flag__long_fun4989__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__find__flag__long_fun4989, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__find__flag__long_fun4989(kk_function_t _fself, kk_box_t _b_x601, kk_context_t* _ctx) {
  struct kk_hml__types_hc__find__flag__long_fun4989__t* _self = kk_function_as(struct kk_hml__types_hc__find__flag__long_fun4989__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4990;
  kk_hml__types__cliflag _match_x2605 = kk_hml__types__cliflag_unbox(_b_x601, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x4991 = kk_hml__types__as_Cliflag(_match_x2605, _ctx);
    kk_string_t _x = _con_x4991->flag__name;
    kk_string_t _pat_0 = _con_x4991->flag__short;
    kk_string_t _pat_1 = _con_x4991->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2605, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2605, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2605, _ctx);
    }
    _x_x4990 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4990,name,kk_context());
}

kk_std_core_types__maybe kk_hml__types_hc__find__flag__long(kk_std_core_types__list flags, kk_string_t name, kk_context_t* _ctx) { /* (flags : list<cliflag>, name : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_hml__types_new_hc__find__flag__long_fun4989(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__find__flag__short_fun4992__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_hml__types_hc__find__flag__short_fun4992(kk_function_t _fself, kk_box_t _b_x607, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__find__flag__short_fun4992(kk_string_t s, kk_context_t* _ctx) {
  struct kk_hml__types_hc__find__flag__short_fun4992__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__find__flag__short_fun4992__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__find__flag__short_fun4992, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__find__flag__short_fun4992(kk_function_t _fself, kk_box_t _b_x607, kk_context_t* _ctx) {
  struct kk_hml__types_hc__find__flag__short_fun4992__t* _self = kk_function_as(struct kk_hml__types_hc__find__flag__short_fun4992__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4993;
  kk_hml__types__cliflag _match_x2604 = kk_hml__types__cliflag_unbox(_b_x607, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x4994 = kk_hml__types__as_Cliflag(_match_x2604, _ctx);
    kk_string_t _pat_0 = _con_x4994->flag__name;
    kk_string_t _x = _con_x4994->flag__short;
    kk_string_t _pat_1 = _con_x4994->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2604, _ctx)) {
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2604, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2604, _ctx);
    }
    _x_x4993 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4993,s,kk_context());
}

kk_std_core_types__maybe kk_hml__types_hc__find__flag__short(kk_std_core_types__list flags, kk_string_t s, kk_context_t* _ctx) { /* (flags : list<cliflag>, s : string) -> maybe<cliflag> */ 
  return kk_std_core_list_find(flags, kk_hml__types_new_hc__find__flag__short_fun4992(s, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__find__opt__long_fun4995__t {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_hml__types_hc__find__opt__long_fun4995(kk_function_t _fself, kk_box_t _b_x613, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__find__opt__long_fun4995(kk_string_t name, kk_context_t* _ctx) {
  struct kk_hml__types_hc__find__opt__long_fun4995__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__find__opt__long_fun4995__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__find__opt__long_fun4995, kk_context());
  _self->name = name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__find__opt__long_fun4995(kk_function_t _fself, kk_box_t _b_x613, kk_context_t* _ctx) {
  struct kk_hml__types_hc__find__opt__long_fun4995__t* _self = kk_function_as(struct kk_hml__types_hc__find__opt__long_fun4995__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x4996;
  kk_hml__types__clioption _match_x2603 = kk_hml__types__clioption_unbox(_b_x613, KK_OWNED, _ctx); /*hml_types/clioption*/;
  {
    struct kk_hml__types_Clioption* _con_x4997 = kk_hml__types__as_Clioption(_match_x2603, _ctx);
    kk_string_t _x = _con_x4997->opt__name;
    kk_string_t _pat_0 = _con_x4997->opt__short;
    kk_string_t _pat_1 = _con_x4997->opt__help;
    kk_string_t _pat_2 = _con_x4997->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2603, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2603, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2603, _ctx);
    }
    _x_x4996 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4996,name,kk_context());
}

kk_std_core_types__maybe kk_hml__types_hc__find__opt__long(kk_std_core_types__list options, kk_string_t name, kk_context_t* _ctx) { /* (options : list<clioption>, name : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_hml__types_new_hc__find__opt__long_fun4995(name, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__find__opt__short_fun4998__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static bool kk_hml__types_hc__find__opt__short_fun4998(kk_function_t _fself, kk_box_t _b_x619, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__find__opt__short_fun4998(kk_string_t s, kk_context_t* _ctx) {
  struct kk_hml__types_hc__find__opt__short_fun4998__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__find__opt__short_fun4998__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__find__opt__short_fun4998, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__find__opt__short_fun4998(kk_function_t _fself, kk_box_t _b_x619, kk_context_t* _ctx) {
  struct kk_hml__types_hc__find__opt__short_fun4998__t* _self = kk_function_as(struct kk_hml__types_hc__find__opt__short_fun4998__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_string_t _x_x4999;
  kk_hml__types__clioption _match_x2602 = kk_hml__types__clioption_unbox(_b_x619, KK_OWNED, _ctx); /*hml_types/clioption*/;
  {
    struct kk_hml__types_Clioption* _con_x5000 = kk_hml__types__as_Clioption(_match_x2602, _ctx);
    kk_string_t _pat_0 = _con_x5000->opt__name;
    kk_string_t _x = _con_x5000->opt__short;
    kk_string_t _pat_1 = _con_x5000->opt__help;
    kk_string_t _pat_2 = _con_x5000->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2602, _ctx)) {
      kk_string_drop(_pat_2, _ctx);
      kk_string_drop(_pat_1, _ctx);
      kk_string_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2602, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2602, _ctx);
    }
    _x_x4999 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x4999,s,kk_context());
}

kk_std_core_types__maybe kk_hml__types_hc__find__opt__short(kk_std_core_types__list options, kk_string_t s, kk_context_t* _ctx) { /* (options : list<clioption>, s : string) -> maybe<clioption> */ 
  return kk_std_core_list_find(options, kk_hml__types_new_hc__find__opt__short_fun4998(s, _ctx), _ctx);
}
extern bool kk_hml__types_hc__find__command_fun5001(kk_function_t _fself, kk_box_t _b_x627, kk_context_t* _ctx) {
  struct kk_hml__types_hc__find__command_fun5001__t* _self = kk_function_as(struct kk_hml__types_hc__find__command_fun5001__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);}, {}, _ctx)
  kk_string_t _x_x5002;
  kk_std_core_types__tuple2 _match_x2601 = kk_std_core_types__tuple2_unbox(_b_x627, KK_OWNED, _ctx); /*(string, hml_types/clispec)*/;
  {
    kk_box_t _box_x623 = _match_x2601.fst;
    kk_box_t _box_x624 = _match_x2601.snd;
    kk_string_t _x = kk_string_unbox(_box_x623);
    kk_string_dup(_x, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2601, _ctx);
    _x_x5002 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x5002,name,kk_context());
}


// lift anonymous function
struct kk_hml__types_hc__add__default_fun5007__t {
  struct kk_function_s _base;
  kk_hml__types__clioption o;
};
static bool kk_hml__types_hc__add__default_fun5007(kk_function_t _fself, kk_box_t _b_x635, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__add__default_fun5007(kk_hml__types__clioption o, kk_context_t* _ctx) {
  struct kk_hml__types_hc__add__default_fun5007__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__add__default_fun5007__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__add__default_fun5007, kk_context());
  _self->o = o;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__add__default_fun5007(kk_function_t _fself, kk_box_t _b_x635, kk_context_t* _ctx) {
  struct kk_hml__types_hc__add__default_fun5007__t* _self = kk_function_as(struct kk_hml__types_hc__add__default_fun5007__t*, _fself, _ctx);
  kk_hml__types__clioption o = _self->o; /* hml_types/clioption */
  kk_drop_match(_self, {kk_hml__types__clioption_dup(o, _ctx);}, {}, _ctx)
  kk_string_t _x_x5008;
  kk_std_core_types__tuple2 _match_x2598 = kk_std_core_types__tuple2_unbox(_b_x635, KK_OWNED, _ctx); /*(string, string)*/;
  {
    kk_box_t _box_x631 = _match_x2598.fst;
    kk_box_t _box_x632 = _match_x2598.snd;
    kk_string_t _x_0 = kk_string_unbox(_box_x631);
    kk_string_dup(_x_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2598, _ctx);
    _x_x5008 = _x_0; /*string*/
  }
  kk_string_t _x_x5009;
  {
    struct kk_hml__types_Clioption* _con_x5010 = kk_hml__types__as_Clioption(o, _ctx);
    kk_string_t _x_1 = _con_x5010->opt__name;
    kk_string_t _pat_0_3 = _con_x5010->opt__short;
    kk_string_t _pat_1_1 = _con_x5010->opt__help;
    kk_string_t _pat_2_0 = _con_x5010->opt__default;
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
    _x_x5009 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x5008,_x_x5009,kk_context());
}

kk_std_core_types__list kk_hml__types_hc__add__default(kk_std_core_types__list acc, kk_hml__types__clioption o, kk_context_t* _ctx) { /* (acc : list<(string, string)>, o : clioption) -> list<(string, string)> */ 
  bool b_10684;
  kk_integer_t _brw_x2599;
  kk_string_t _x_x5003;
  {
    struct kk_hml__types_Clioption* _con_x5004 = kk_hml__types__as_Clioption(o, _ctx);
    kk_string_t _x = _con_x5004->opt__default;
    kk_string_dup(_x, _ctx);
    _x_x5003 = _x; /*string*/
  }
  _brw_x2599 = kk_std_core_string_chars_fs_count(_x_x5003, _ctx); /*int*/
  bool _brw_x2600 = kk_integer_eq_borrow(_brw_x2599,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2599, _ctx);
  b_10684 = _brw_x2600; /*bool*/
  if (b_10684) {
    kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
    return acc;
  }
  {
    bool b_0_10687;
    kk_std_core_types__list _x_x5005 = kk_std_core_types__list_dup(acc, _ctx); /*list<(string, string)>*/
    kk_function_t _x_x5006;
    kk_hml__types__clioption_dup(o, _ctx);
    _x_x5006 = kk_hml__types_new_hc__add__default_fun5007(o, _ctx); /*(10001) -> 10002 bool*/
    b_0_10687 = kk_std_core_list_any(_x_x5005, _x_x5006, _ctx); /*bool*/
    if (b_0_10687) {
      kk_datatype_ptr_dropn(o, (KK_I32(4)), _ctx);
      return acc;
    }
    {
      kk_std_core_types__list _x_x5011;
      kk_box_t _x_x5012;
      kk_std_core_types__tuple2 _x_x5013;
      kk_box_t _x_x5014;
      kk_string_t _x_x5015;
      {
        struct kk_hml__types_Clioption* _con_x5016 = kk_hml__types__as_Clioption(o, _ctx);
        kk_string_t _x_2 = _con_x5016->opt__name;
        kk_string_dup(_x_2, _ctx);
        _x_x5015 = _x_2; /*string*/
      }
      _x_x5014 = kk_string_box(_x_x5015); /*10037*/
      kk_box_t _x_x5017;
      kk_string_t _x_x5018;
      {
        struct kk_hml__types_Clioption* _con_x5019 = kk_hml__types__as_Clioption(o, _ctx);
        kk_string_t _pat_0_5 = _con_x5019->opt__name;
        kk_string_t _pat_1_4 = _con_x5019->opt__short;
        kk_string_t _pat_2_2 = _con_x5019->opt__help;
        kk_string_t _x_3 = _con_x5019->opt__default;
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
        _x_x5018 = _x_3; /*string*/
      }
      _x_x5017 = kk_string_box(_x_x5018); /*10038*/
      _x_x5013 = kk_std_core_types__new_Tuple2(_x_x5014, _x_x5017, _ctx); /*(10037, 10038)*/
      _x_x5012 = kk_std_core_types__tuple2_box(_x_x5013, _ctx); /*10021*/
      _x_x5011 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5012, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
      return kk_std_core_list_append(acc, _x_x5011, _ctx);
    }
  }
}


// lift anonymous function
struct kk_hml__types_hc__apply__defaults_fun5023__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__apply__defaults_fun5023(kk_function_t _fself, kk_box_t _b_x650, kk_box_t _b_x651, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__apply__defaults_fun5023(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__apply__defaults_fun5023, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__apply__defaults_fun5023(kk_function_t _fself, kk_box_t _b_x650, kk_box_t _b_x651, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5024;
  kk_std_core_types__list _x_x5025 = kk_std_core_types__list_unbox(_b_x650, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_hml__types__clioption _x_x5026 = kk_hml__types__clioption_unbox(_b_x651, KK_OWNED, _ctx); /*hml_types/clioption*/
  _x_x5024 = kk_hml__types_hc__add__default(_x_x5025, _x_x5026, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5024, _ctx);
}

kk_std_core_types__list kk_hml__types_hc__apply__defaults(kk_hml__types__clispec spec, kk_std_core_types__list options, kk_context_t* _ctx) { /* (spec : clispec, options : list<(string, string)>) -> list<(string, string)> */ 
  kk_box_t _x_x5020;
  kk_std_core_types__list _x_x5021;
  {
    struct kk_hml__types_Clispec* _con_x5022 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x5022->app__name;
    kk_string_t _pat_1 = _con_x5022->app__version;
    kk_string_t _pat_2 = _con_x5022->app__about;
    kk_std_core_types__list _pat_3 = _con_x5022->app__flags;
    kk_std_core_types__list _x = _con_x5022->app__options;
    kk_std_core_types__list _pat_4 = _con_x5022->app__args;
    kk_std_core_types__list _pat_5 = _con_x5022->app__commands;
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
    _x_x5021 = _x; /*list<hml_types/clioption>*/
  }
  _x_x5020 = kk_std_core_list_foldl(_x_x5021, kk_std_core_types__list_box(options, _ctx), kk_hml__types_new_hc__apply__defaults_fun5023(_ctx), _ctx); /*10002*/
  return kk_std_core_types__list_unbox(_x_x5020, KK_OWNED, _ctx);
}

kk_string_t kk_hml__types_hc__check__one__arg(kk_std_core_types__list positionals, kk_string_t err, kk_std_core_types__tuple2 pair, kk_context_t* _ctx) { /* (positionals : list<string>, err : string, pair : (int, cliarg)) -> string */ 
  bool b_10695;
  kk_integer_t _brw_x2596;
  kk_string_t _x_x5027 = kk_string_dup(err, _ctx); /*string*/
  _brw_x2596 = kk_std_core_string_chars_fs_count(_x_x5027, _ctx); /*int*/
  bool _brw_x2597 = kk_integer_eq_borrow(_brw_x2596,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2596, _ctx);
  b_10695 = _brw_x2597; /*bool*/
  if (b_10695) {
    kk_string_drop(err, _ctx);
    {
      kk_box_t _box_x655 = pair.fst;
      kk_box_t _box_x656 = pair.snd;
      kk_hml__types__cliarg _x_0 = kk_hml__types__cliarg_unbox(_box_x656, KK_BORROWED, _ctx);
      kk_hml__types__cliarg_dup(_x_0, _ctx);
      {
        struct kk_hml__types_Cliarg* _con_x5028 = kk_hml__types__as_Cliarg(_x_0, _ctx);
        kk_string_t _pat_0_1 = _con_x5028->arg__name;
        kk_string_t _pat_1_0 = _con_x5028->arg__help;
        bool _x = _con_x5028->arg__required;
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_string_drop(_pat_1_0, _ctx);
          kk_string_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        if (_x) {
          bool _match_x2592;
          kk_integer_t _brw_x2594;
          {
            kk_box_t _box_x657 = pair.fst;
            kk_box_t _box_x658 = pair.snd;
            kk_integer_t _x_1 = kk_integer_unbox(_box_x657, _ctx);
            kk_integer_dup(_x_1, _ctx);
            _brw_x2594 = _x_1; /*int*/
          }
          kk_integer_t _brw_x2593 = kk_std_core_list__lift_length_6003(positionals, kk_integer_from_small(0), _ctx); /*int*/;
          bool _brw_x2595 = kk_integer_gte_borrow(_brw_x2594,_brw_x2593,kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2594, _ctx);
          kk_integer_drop(_brw_x2593, _ctx);
          _match_x2592 = _brw_x2595; /*bool*/
          if (_match_x2592) {
            kk_string_t _x_x5029;
            kk_define_string_literal(static, _s_x5030, 28, "missing required argument: <", _ctx)
            _x_x5029 = kk_string_dup(_s_x5030, _ctx); /*string*/
            kk_string_t _x_x5031;
            kk_string_t _x_x5032;
            {
              kk_box_t _box_x659 = pair.fst;
              kk_box_t _box_x660 = pair.snd;
              kk_hml__types__cliarg _x_3 = kk_hml__types__cliarg_unbox(_box_x660, KK_BORROWED, _ctx);
              kk_hml__types__cliarg_dup(_x_3, _ctx);
              kk_std_core_types__tuple2_drop(pair, _ctx);
              {
                struct kk_hml__types_Cliarg* _con_x5033 = kk_hml__types__as_Cliarg(_x_3, _ctx);
                kk_string_t _x_2 = _con_x5033->arg__name;
                kk_string_t _pat_0_4 = _con_x5033->arg__help;
                if kk_likely(kk_datatype_ptr_is_unique(_x_3, _ctx)) {
                  kk_string_drop(_pat_0_4, _ctx);
                  kk_datatype_ptr_free(_x_3, _ctx);
                }
                else {
                  kk_string_dup(_x_2, _ctx);
                  kk_datatype_ptr_decref(_x_3, _ctx);
                }
                _x_x5032 = _x_2; /*string*/
              }
            }
            kk_string_t _x_x5034;
            kk_define_string_literal(static, _s_x5035, 1, ">", _ctx)
            _x_x5034 = kk_string_dup(_s_x5035, _ctx); /*string*/
            _x_x5031 = kk_std_core_types__lp__plus__plus__rp_(_x_x5032, _x_x5034, _ctx); /*string*/
            return kk_std_core_types__lp__plus__plus__rp_(_x_x5029, _x_x5031, _ctx);
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
struct kk_hml__types_hc__check__required__args_fun5040__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__check__required__args_fun5040(kk_function_t _fself, kk_integer_t _b_x665, kk_box_t _b_x666, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__check__required__args_fun5040(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__check__required__args_fun5040, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__check__required__args_fun5040(kk_function_t _fself, kk_integer_t _b_x665, kk_box_t _b_x666, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_integer_t hc____i_679 = _b_x665; /*int*/;
  kk_hml__types__cliarg hc____x_680 = kk_hml__types__cliarg_unbox(_b_x666, KK_OWNED, _ctx); /*hml_types/cliarg*/;
  kk_integer_t _b_x661_677 = hc____i_679; /*int*/;
  kk_hml__types__cliarg _b_x662_678 = hc____x_680; /*hml_types/cliarg*/;
  kk_std_core_types__tuple2 _x_x5041 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x661_677, _ctx), kk_hml__types__cliarg_box(_b_x662_678, _ctx), _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5041, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__check__required__args_fun5046__t {
  struct kk_function_s _base;
  kk_std_core_types__list positionals;
};
static kk_box_t kk_hml__types_hc__check__required__args_fun5046(kk_function_t _fself, kk_box_t _b_x670, kk_box_t _b_x671, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__check__required__args_fun5046(kk_std_core_types__list positionals, kk_context_t* _ctx) {
  struct kk_hml__types_hc__check__required__args_fun5046__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__check__required__args_fun5046__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__check__required__args_fun5046, kk_context());
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__check__required__args_fun5046(kk_function_t _fself, kk_box_t _b_x670, kk_box_t _b_x671, kk_context_t* _ctx) {
  struct kk_hml__types_hc__check__required__args_fun5046__t* _self = kk_function_as(struct kk_hml__types_hc__check__required__args_fun5046__t*, _fself, _ctx);
  kk_std_core_types__list positionals = _self->positionals; /* list<string> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(positionals, _ctx);}, {}, _ctx)
  kk_string_t err_681 = kk_string_unbox(_b_x670); /*string*/;
  kk_std_core_types__tuple2 pair_682 = kk_std_core_types__tuple2_unbox(_b_x671, KK_OWNED, _ctx); /*(int, hml_types/cliarg)*/;
  kk_string_t _x_x5047 = kk_hml__types_hc__check__one__arg(positionals, err_681, pair_682, _ctx); /*string*/
  return kk_string_box(_x_x5047);
}

kk_string_t kk_hml__types_hc__check__required__args(kk_hml__types__clispec spec, kk_std_core_types__list positionals, kk_context_t* _ctx) { /* (spec : clispec, positionals : list<string>) -> string */ 
  kk_std_core_types__list _b_x667_672;
  kk_std_core_types__list _x_x5038;
  {
    struct kk_hml__types_Clispec* _con_x5039 = kk_hml__types__as_Clispec(spec, _ctx);
    kk_string_t _pat_0 = _con_x5039->app__name;
    kk_string_t _pat_1 = _con_x5039->app__version;
    kk_string_t _pat_2 = _con_x5039->app__about;
    kk_std_core_types__list _pat_3 = _con_x5039->app__flags;
    kk_std_core_types__list _pat_4 = _con_x5039->app__options;
    kk_std_core_types__list _x = _con_x5039->app__args;
    kk_std_core_types__list _pat_5 = _con_x5039->app__commands;
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
    _x_x5038 = _x; /*list<hml_types/cliarg>*/
  }
  _b_x667_672 = kk_std_core_list_map_indexed(_x_x5038, kk_hml__types_new_hc__check__required__args_fun5040(_ctx), _ctx); /*list<(int, hml_types/cliarg)>*/
  kk_box_t _x_x5042;
  kk_box_t _x_x5043;
  kk_string_t _x_x5044 = kk_string_empty(); /*string*/
  _x_x5043 = kk_string_box(_x_x5044); /*10002*/
  _x_x5042 = kk_std_core_list_foldl(_b_x667_672, _x_x5043, kk_hml__types_new_hc__check__required__args_fun5046(positionals, _ctx), _ctx); /*10002*/
  return kk_string_unbox(_x_x5042);
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11115_fun5050__t {
  struct kk_function_s _base;
  kk_string_t _y_x10866;
  kk_std_core_types__list _y_x10867;
  kk_std_core_types__list _y_x10868;
  kk_std_core_types__list _y_x10869;
  kk_string_t _y_x10870;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11115_fun5050(kk_function_t _fself, kk_box_t _b_x688, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11115_fun5050(kk_string_t _y_x10866, kk_std_core_types__list _y_x10867, kk_std_core_types__list _y_x10868, kk_std_core_types__list _y_x10869, kk_string_t _y_x10870, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11115_fun5050__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11115_fun5050__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11115_fun5050, kk_context());
  _self->_y_x10866 = _y_x10866;
  _self->_y_x10867 = _y_x10867;
  _self->_y_x10868 = _y_x10868;
  _self->_y_x10869 = _y_x10869;
  _self->_y_x10870 = _y_x10870;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11115_fun5050(kk_function_t _fself, kk_box_t _b_x688, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11115_fun5050__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11115_fun5050__t*, _fself, _ctx);
  kk_string_t _y_x10866 = _self->_y_x10866; /* string */
  kk_std_core_types__list _y_x10867 = _self->_y_x10867; /* list<string> */
  kk_std_core_types__list _y_x10868 = _self->_y_x10868; /* list<(string, string)> */
  kk_std_core_types__list _y_x10869 = _self->_y_x10869; /* list<string> */
  kk_string_t _y_x10870 = _self->_y_x10870; /* string */
  kk_drop_match(_self, {kk_string_dup(_y_x10866, _ctx);kk_std_core_types__list_dup(_y_x10867, _ctx);kk_std_core_types__list_dup(_y_x10868, _ctx);kk_std_core_types__list_dup(_y_x10869, _ctx);kk_string_dup(_y_x10870, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10871_690 = kk_std_core_types__list_unbox(_b_x688, KK_OWNED, _ctx); /*list<string>*/;
  kk_hml__types__parseraw _x_x5051 = kk_hml__types__new_Parseraw(kk_reuse_null, 0, _y_x10866, _y_x10867, _y_x10868, _y_x10869, _y_x10870, _y_x10871_690, _ctx); /*hml_types/parseraw*/
  return kk_hml__types__parseraw_box(_x_x5051, _ctx);
}

kk_hml__types__parseraw kk_hml__types__mlift_hc__parse__loop_11115(kk_string_t _y_x10866, kk_std_core_types__list _y_x10867, kk_std_core_types__list _y_x10868, kk_std_core_types__list _y_x10869, kk_ref_t sub__args, kk_string_t _y_x10870, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, list<string>, sub_args : local-var<h,list<string>>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11190;
  kk_box_t _x_x5048 = kk_ref_get(sub__args,kk_context()); /*10000*/
  x_11190 = kk_std_core_types__list_unbox(_x_x5048, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11190, _ctx);
    kk_box_t _x_x5049 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11115_fun5050(_y_x10866, _y_x10867, _y_x10868, _y_x10869, _y_x10870, _ctx), _ctx); /*10001*/
    return kk_hml__types__parseraw_unbox(_x_x5049, KK_OWNED, _ctx);
  }
  {
    return kk_hml__types__new_Parseraw(kk_reuse_null, 0, _y_x10866, _y_x10867, _y_x10868, _y_x10869, _y_x10870, x_11190, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11116_fun5054__t {
  struct kk_function_s _base;
  kk_string_t _y_x10866;
  kk_std_core_types__list _y_x10867;
  kk_std_core_types__list _y_x10868;
  kk_std_core_types__list _y_x10869;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11116_fun5054(kk_function_t _fself, kk_box_t _b_x696, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11116_fun5054(kk_string_t _y_x10866, kk_std_core_types__list _y_x10867, kk_std_core_types__list _y_x10868, kk_std_core_types__list _y_x10869, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11116_fun5054__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11116_fun5054__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11116_fun5054, kk_context());
  _self->_y_x10866 = _y_x10866;
  _self->_y_x10867 = _y_x10867;
  _self->_y_x10868 = _y_x10868;
  _self->_y_x10869 = _y_x10869;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11116_fun5054(kk_function_t _fself, kk_box_t _b_x696, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11116_fun5054__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11116_fun5054__t*, _fself, _ctx);
  kk_string_t _y_x10866 = _self->_y_x10866; /* string */
  kk_std_core_types__list _y_x10867 = _self->_y_x10867; /* list<string> */
  kk_std_core_types__list _y_x10868 = _self->_y_x10868; /* list<(string, string)> */
  kk_std_core_types__list _y_x10869 = _self->_y_x10869; /* list<string> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_string_dup(_y_x10866, _ctx);kk_std_core_types__list_dup(_y_x10867, _ctx);kk_std_core_types__list_dup(_y_x10868, _ctx);kk_std_core_types__list_dup(_y_x10869, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_string_t _y_x10870_698 = kk_string_unbox(_b_x696); /*string*/;
  kk_hml__types__parseraw _x_x5055 = kk_hml__types__mlift_hc__parse__loop_11115(_y_x10866, _y_x10867, _y_x10868, _y_x10869, sub__args, _y_x10870_698, _ctx); /*hml_types/parseraw*/
  return kk_hml__types__parseraw_box(_x_x5055, _ctx);
}

kk_hml__types__parseraw kk_hml__types__mlift_hc__parse__loop_11116(kk_string_t _y_x10866, kk_std_core_types__list _y_x10867, kk_std_core_types__list _y_x10868, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10869, kk_context_t* _ctx) { /* forall<h> (string, list<string>, list<(string, string)>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_string_t x_11198;
  kk_box_t _x_x5052 = kk_ref_get(subcmd,kk_context()); /*10000*/
  x_11198 = kk_string_unbox(_x_x5052); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11198, _ctx);
    kk_box_t _x_x5053 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11116_fun5054(_y_x10866, _y_x10867, _y_x10868, _y_x10869, sub__args, _ctx), _ctx); /*10001*/
    return kk_hml__types__parseraw_unbox(_x_x5053, KK_OWNED, _ctx);
  }
  {
    return kk_hml__types__mlift_hc__parse__loop_11115(_y_x10866, _y_x10867, _y_x10868, _y_x10869, sub__args, x_11198, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11117_fun5058__t {
  struct kk_function_s _base;
  kk_string_t _y_x10866;
  kk_std_core_types__list _y_x10867;
  kk_std_core_types__list _y_x10868;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11117_fun5058(kk_function_t _fself, kk_box_t _b_x704, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11117_fun5058(kk_string_t _y_x10866, kk_std_core_types__list _y_x10867, kk_std_core_types__list _y_x10868, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11117_fun5058__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11117_fun5058__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11117_fun5058, kk_context());
  _self->_y_x10866 = _y_x10866;
  _self->_y_x10867 = _y_x10867;
  _self->_y_x10868 = _y_x10868;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11117_fun5058(kk_function_t _fself, kk_box_t _b_x704, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11117_fun5058__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11117_fun5058__t*, _fself, _ctx);
  kk_string_t _y_x10866 = _self->_y_x10866; /* string */
  kk_std_core_types__list _y_x10867 = _self->_y_x10867; /* list<string> */
  kk_std_core_types__list _y_x10868 = _self->_y_x10868; /* list<(string, string)> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<24443,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10866, _ctx);kk_std_core_types__list_dup(_y_x10867, _ctx);kk_std_core_types__list_dup(_y_x10868, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10869_706 = kk_std_core_types__list_unbox(_b_x704, KK_OWNED, _ctx); /*list<string>*/;
  kk_hml__types__parseraw _x_x5059 = kk_hml__types__mlift_hc__parse__loop_11116(_y_x10866, _y_x10867, _y_x10868, sub__args, subcmd, _y_x10869_706, _ctx); /*hml_types/parseraw*/
  return kk_hml__types__parseraw_box(_x_x5059, _ctx);
}

kk_hml__types__parseraw kk_hml__types__mlift_hc__parse__loop_11117(kk_string_t _y_x10866, kk_std_core_types__list _y_x10867, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10868, kk_context_t* _ctx) { /* forall<h> (string, list<string>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<(string, string)>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11200;
  kk_box_t _x_x5056 = kk_ref_get(positionals,kk_context()); /*10000*/
  x_11200 = kk_std_core_types__list_unbox(_x_x5056, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11200, _ctx);
    kk_box_t _x_x5057 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11117_fun5058(_y_x10866, _y_x10867, _y_x10868, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_hml__types__parseraw_unbox(_x_x5057, KK_OWNED, _ctx);
  }
  {
    return kk_hml__types__mlift_hc__parse__loop_11116(_y_x10866, _y_x10867, _y_x10868, sub__args, subcmd, x_11200, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11118_fun5062__t {
  struct kk_function_s _base;
  kk_string_t _y_x10866;
  kk_std_core_types__list _y_x10867;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11118_fun5062(kk_function_t _fself, kk_box_t _b_x712, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11118_fun5062(kk_string_t _y_x10866, kk_std_core_types__list _y_x10867, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11118_fun5062__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11118_fun5062__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11118_fun5062, kk_context());
  _self->_y_x10866 = _y_x10866;
  _self->_y_x10867 = _y_x10867;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11118_fun5062(kk_function_t _fself, kk_box_t _b_x712, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11118_fun5062__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11118_fun5062__t*, _fself, _ctx);
  kk_string_t _y_x10866 = _self->_y_x10866; /* string */
  kk_std_core_types__list _y_x10867 = _self->_y_x10867; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<24443,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10866, _ctx);kk_std_core_types__list_dup(_y_x10867, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10868_714 = kk_std_core_types__list_unbox(_b_x712, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_hml__types__parseraw _x_x5063 = kk_hml__types__mlift_hc__parse__loop_11117(_y_x10866, _y_x10867, positionals, sub__args, subcmd, _y_x10868_714, _ctx); /*hml_types/parseraw*/
  return kk_hml__types__parseraw_box(_x_x5063, _ctx);
}

kk_hml__types__parseraw kk_hml__types__mlift_hc__parse__loop_11118(kk_string_t _y_x10866, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10867, kk_context_t* _ctx) { /* forall<h> (string, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11202;
  kk_box_t _x_x5060 = kk_ref_get(options,kk_context()); /*10000*/
  x_11202 = kk_std_core_types__list_unbox(_x_x5060, KK_OWNED, _ctx); /*list<(string, string)>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11202, _ctx);
    kk_box_t _x_x5061 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11118_fun5062(_y_x10866, _y_x10867, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_hml__types__parseraw_unbox(_x_x5061, KK_OWNED, _ctx);
  }
  {
    return kk_hml__types__mlift_hc__parse__loop_11117(_y_x10866, _y_x10867, positionals, sub__args, subcmd, x_11202, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11119_fun5066__t {
  struct kk_function_s _base;
  kk_string_t _y_x10866;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11119_fun5066(kk_function_t _fself, kk_box_t _b_x720, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11119_fun5066(kk_string_t _y_x10866, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11119_fun5066__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11119_fun5066__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11119_fun5066, kk_context());
  _self->_y_x10866 = _y_x10866;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11119_fun5066(kk_function_t _fself, kk_box_t _b_x720, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11119_fun5066__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11119_fun5066__t*, _fself, _ctx);
  kk_string_t _y_x10866 = _self->_y_x10866; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<24443,string> */
  kk_drop_match(_self, {kk_string_dup(_y_x10866, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10867_722 = kk_std_core_types__list_unbox(_b_x720, KK_OWNED, _ctx); /*list<string>*/;
  kk_hml__types__parseraw _x_x5067 = kk_hml__types__mlift_hc__parse__loop_11118(_y_x10866, options, positionals, sub__args, subcmd, _y_x10867_722, _ctx); /*hml_types/parseraw*/
  return kk_hml__types__parseraw_box(_x_x5067, _ctx);
}

kk_hml__types__parseraw kk_hml__types__mlift_hc__parse__loop_11119(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t _y_x10866, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, string) -> <local<h>,div,exn> parseraw */ 
  kk_std_core_types__list x_11204;
  kk_box_t _x_x5064 = kk_ref_get(flags,kk_context()); /*10000*/
  x_11204 = kk_std_core_types__list_unbox(_x_x5064, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11204, _ctx);
    kk_box_t _x_x5065 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11119_fun5066(_y_x10866, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
    return kk_hml__types__parseraw_unbox(_x_x5065, KK_OWNED, _ctx);
  }
  {
    return kk_hml__types__mlift_hc__parse__loop_11118(_y_x10866, options, positionals, sub__args, subcmd, x_11204, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11121_fun5070__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11121_fun5070(kk_function_t _fself, kk_box_t _b_x728, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11121_fun5070(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11121_fun5070, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11121_fun5070(kk_function_t _fself, kk_box_t _b_x728, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5071;
  kk_std_core_types__list _y_x10743_730 = kk_std_core_types__list_unbox(_b_x728, KK_OWNED, _ctx); /*list<string>*/;
  kk_integer_t _brw_x2581 = kk_std_core_list__lift_length_6003(_y_x10743_730, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2582 = kk_integer_gt_borrow(_brw_x2581,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2581, _ctx);
  _x_x5071 = _brw_x2582; /*bool*/
  return kk_bool_box(_x_x5071);
}

bool kk_hml__types__mlift_hc__parse__loop_11121(kk_ref_t remaining, kk_string_t _y_x10742, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, string) -> <local<h>,div,exn,hica-brk> bool */ 
  bool _match_x2577;
  kk_integer_t _brw_x2583 = kk_std_core_string_chars_fs_count(_y_x10742, _ctx); /*int*/;
  bool _brw_x2584 = kk_integer_eq_borrow(_brw_x2583,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2583, _ctx);
  _match_x2577 = _brw_x2584; /*bool*/
  if (_match_x2577) {
    kk_std_core_types__list x_11206;
    kk_box_t _x_x5068 = kk_ref_get(remaining,kk_context()); /*10000*/
    x_11206 = kk_std_core_types__list_unbox(_x_x5068, KK_OWNED, _ctx); /*list<string>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11206, _ctx);
      kk_box_t _x_x5069 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11121_fun5070(_ctx), _ctx); /*10001*/
      return kk_bool_unbox(_x_x5069);
    }
    {
      kk_std_core_types__list _y_x10743_731 = x_11206; /*list<string>*/;
      kk_integer_t _brw_x2579 = kk_std_core_list__lift_length_6003(_y_x10743_731, kk_integer_from_small(0), _ctx); /*int*/;
      bool _brw_x2580 = kk_integer_gt_borrow(_brw_x2579,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2579, _ctx);
      return _brw_x2580;
    }
  }
  {
    kk_ref_drop(remaining, _ctx);
    return false;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11122_fun5073__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11122_fun5073(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11122_fun5073(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11122_fun5073, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11122_fun5073(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11209 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml_types/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5074 = kk_std_core_hnd__as_Ev(ev_11209, _ctx);
    kk_box_t _box_x732 = _con_x5074->hnd;
    int32_t m = _con_x5074->marker;
    kk_hml__types__hica_brk h = kk_hml__types__hica_brk_unbox(_box_x732, KK_BORROWED, _ctx);
    kk_hml__types__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__types__Hnd_hica_brk* _con_x5075 = kk_hml__types__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5075->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5075->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x735 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x735, (_fun_unbox_x735, m, ev_11209, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11122(kk_unit_t wild___0, kk_context_t* _ctx) { /* forall<h> (wild_@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x738_740 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5072 = kk_std_core_hnd__open_at0(_b_x738_740, kk_hml__types__new_mlift_hc__parse__loop_11122_fun5073(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5072); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11123_fun5077__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11123_fun5077(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11123_fun5077(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11123_fun5077, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11123_fun5077(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11211 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml_types/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5078 = kk_std_core_hnd__as_Ev(ev_11211, _ctx);
    kk_box_t _box_x742 = _con_x5078->hnd;
    int32_t m = _con_x5078->marker;
    kk_hml__types__hica_brk h = kk_hml__types__hica_brk_unbox(_box_x742, KK_BORROWED, _ctx);
    kk_hml__types__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__types__Hnd_hica_brk* _con_x5079 = kk_hml__types__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5079->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5079->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x745 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x745, (_fun_unbox_x745, m, ev_11211, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11123(kk_unit_t wild___0_0, kk_context_t* _ctx) { /* forall<h> (wild_@0@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x748_750 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5076 = kk_std_core_hnd__open_at0(_b_x748_750, kk_hml__types__new_mlift_hc__parse__loop_11123_fun5077(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5076); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11124_fun5081__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11124_fun5081(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11124_fun5081(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11124_fun5081, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11124_fun5081(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11213 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml_types/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5082 = kk_std_core_hnd__as_Ev(ev_11213, _ctx);
    kk_box_t _box_x752 = _con_x5082->hnd;
    int32_t m = _con_x5082->marker;
    kk_hml__types__hica_brk h = kk_hml__types__hica_brk_unbox(_box_x752, KK_BORROWED, _ctx);
    kk_hml__types__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__types__Hnd_hica_brk* _con_x5083 = kk_hml__types__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5083->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5083->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x755 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x755, (_fun_unbox_x755, m, ev_11213, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11124(kk_unit_t wild___1, kk_context_t* _ctx) { /* forall<h> (wild_@1 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x758_760 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5080 = kk_std_core_hnd__open_at0(_b_x758_760, kk_hml__types__new_mlift_hc__parse__loop_11124_fun5081(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5080); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11125_fun5085__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11125_fun5085(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11125_fun5085(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11125_fun5085, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11125_fun5085(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11215 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml_types/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5086 = kk_std_core_hnd__as_Ev(ev_11215, _ctx);
    kk_box_t _box_x762 = _con_x5086->hnd;
    int32_t m = _con_x5086->marker;
    kk_hml__types__hica_brk h = kk_hml__types__hica_brk_unbox(_box_x762, KK_BORROWED, _ctx);
    kk_hml__types__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__types__Hnd_hica_brk* _con_x5087 = kk_hml__types__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5087->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5087->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x765 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x765, (_fun_unbox_x765, m, ev_11215, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11125(kk_unit_t wild___2, kk_context_t* _ctx) { /* forall<h> (wild_@2 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x768_770 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5084 = kk_std_core_hnd__open_at0(_b_x768_770, kk_hml__types__new_mlift_hc__parse__loop_11125_fun5085(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5084); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11126_fun5089__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11126_fun5089(kk_function_t _fself, kk_box_t _b_x777, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11126_fun5089(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11126_fun5089, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11126_fun5089(kk_function_t _fself, kk_box_t _b_x777, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___2_779 = kk_Unit;
  kk_unit_unbox(_b_x777);
  kk_unit_t _x_x5090 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11125(wild___2_779, _ctx);
  return kk_unit_box(_x_x5090);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11126(kk_std_core_types__list _y_x10760, kk_ref_t positionals, kk_std_core_types__list _y_x10761, kk_context_t* _ctx) { /* forall<h> (list<string>, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x773_775 = kk_std_core_list_append(_y_x10760, _y_x10761, _ctx); /*list<string>*/;
  kk_unit_t x_11217 = kk_Unit;
  kk_unit_t _brw_x2576 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x773_775, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2576;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5088 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11126_fun5089(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5088); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11125(x_11217, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11127_fun5093__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10760;
  kk_ref_t positionals;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11127_fun5093(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11127_fun5093(kk_std_core_types__list _y_x10760, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11127_fun5093__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11127_fun5093__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11127_fun5093, kk_context());
  _self->_y_x10760 = _y_x10760;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11127_fun5093(kk_function_t _fself, kk_box_t _b_x785, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11127_fun5093__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11127_fun5093__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10760 = _self->_y_x10760; /* list<string> */
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10760, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10761_787 = kk_std_core_types__list_unbox(_b_x785, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5094 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11126(_y_x10760, positionals, _y_x10761_787, _ctx);
  return kk_unit_box(_x_x5094);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11127(kk_ref_t positionals, kk_ref_t remaining, kk_std_core_types__list _y_x10760, kk_context_t* _ctx) { /* forall<h> (positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11219;
  kk_box_t _x_x5091 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11219 = kk_std_core_types__list_unbox(_x_x5091, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11219, _ctx);
    kk_box_t _x_x5092 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11127_fun5093(_y_x10760, positionals, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5092); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11126(_y_x10760, positionals, x_11219, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11128(kk_string_t name, kk_ref_t options, kk_string_t v, kk_std_core_types__list _y_x10770, kk_context_t* _ctx) { /* forall<h> (name : string, options : local-var<h,list<(string, string)>>, v : string, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x793_795;
  kk_std_core_types__list _x_x5095;
  kk_box_t _x_x5096;
  kk_std_core_types__tuple2 _x_x5097 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x5096 = kk_std_core_types__tuple2_box(_x_x5097, _ctx); /*10021*/
  _x_x5095 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5096, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x793_795 = kk_std_core_list_append(_y_x10770, _x_x5095, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2573 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x793_795, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2573; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11129_fun5102__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11129_fun5102(kk_function_t _fself, kk_box_t _b_x802, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11129_fun5102(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11129_fun5102, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11129_fun5102(kk_function_t _fself, kk_box_t _b_x802, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5103;
  kk_hml__types__clispec _match_x2572 = kk_hml__types__clispec_unbox(_b_x802, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5104 = kk_hml__types__as_Clispec(_match_x2572, _ctx);
    kk_string_t _pat_0_6 = _con_x5104->app__name;
    kk_string_t _pat_1_4 = _con_x5104->app__version;
    kk_string_t _pat_2_1 = _con_x5104->app__about;
    kk_std_core_types__list _pat_3_0 = _con_x5104->app__flags;
    kk_std_core_types__list _x_0 = _con_x5104->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x5104->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5104->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2572, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_string_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_6, _ctx);
      kk_datatype_ptr_free(_match_x2572, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2572, _ctx);
    }
    _x_x5103 = _x_0; /*list<hml_types/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5103, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11129_fun5106__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11129_fun5106(kk_function_t _fself, kk_box_t _b_x812, kk_box_t _b_x813, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11129_fun5106(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11129_fun5106, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11129_fun5108__t {
  struct kk_function_s _base;
  kk_string_t name_0_845;
};
static bool kk_hml__types__mlift_hc__parse__loop_11129_fun5108(kk_function_t _fself, kk_box_t _b_x808, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11129_fun5108(kk_string_t name_0_845, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11129_fun5108__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11129_fun5108__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11129_fun5108, kk_context());
  _self->name_0_845 = name_0_845;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11129_fun5108(kk_function_t _fself, kk_box_t _b_x808, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11129_fun5108__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11129_fun5108__t*, _fself, _ctx);
  kk_string_t name_0_845 = _self->name_0_845; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_845, _ctx);}, {}, _ctx)
  kk_string_t _x_x5109;
  kk_hml__types__clioption _match_x2571 = kk_hml__types__clioption_unbox(_b_x808, KK_OWNED, _ctx); /*hml_types/clioption*/;
  {
    struct kk_hml__types_Clioption* _con_x5110 = kk_hml__types__as_Clioption(_match_x2571, _ctx);
    kk_string_t _x = _con_x5110->opt__name;
    kk_string_t _pat_0_5 = _con_x5110->opt__short;
    kk_string_t _pat_1_3 = _con_x5110->opt__help;
    kk_string_t _pat_2_0 = _con_x5110->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2571, _ctx)) {
      kk_string_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_5, _ctx);
      kk_datatype_ptr_free(_match_x2571, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2571, _ctx);
    }
    _x_x5109 = _x; /*string*/
  }
  return kk_string_is_eq(_x_x5109,name_0_845,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11129_fun5106(kk_function_t _fself, kk_box_t _b_x812, kk_box_t _b_x813, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5107;
  kk_std_core_types__list options_0_844 = kk_std_core_types__list_unbox(_b_x812, KK_OWNED, _ctx); /*list<hml_types/clioption>*/;
  kk_string_t name_0_845 = kk_string_unbox(_b_x813); /*string*/;
  _x_x5107 = kk_std_core_list_find(options_0_844, kk_hml__types__new_mlift_hc__parse__loop_11129_fun5108(name_0_845, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5107, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11129_fun5116__t {
  struct kk_function_s _base;
  kk_string_t name;
  kk_ref_t options;
  kk_string_t v;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11129_fun5116(kk_function_t _fself, kk_std_core_types__list _y_x10770, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11129_fun5116(kk_string_t name, kk_ref_t options, kk_string_t v, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11129_fun5116__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11129_fun5116__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11129_fun5116, kk_context());
  _self->name = name;
  _self->options = options;
  _self->v = v;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11129_fun5116(kk_function_t _fself, kk_std_core_types__list _y_x10770, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11129_fun5116__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11129_fun5116__t*, _fself, _ctx);
  kk_string_t name = _self->name; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_string_t v = _self->v; /* string */
  kk_drop_match(_self, {kk_string_dup(name, _ctx);kk_ref_dup(options, _ctx);kk_string_dup(v, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x824_826;
  kk_std_core_types__list _x_x5117;
  kk_box_t _x_x5118;
  kk_std_core_types__tuple2 _x_x5119 = kk_std_core_types__new_Tuple2(kk_string_box(name), kk_string_box(v), _ctx); /*(10037, 10038)*/
  _x_x5118 = kk_std_core_types__tuple2_box(_x_x5119, _ctx); /*10021*/
  _x_x5117 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5118, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x824_826 = kk_std_core_list_append(_y_x10770, _x_x5117, _ctx); /*list<(string, string)>*/
  kk_unit_t _brw_x2570 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x824_826, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2570; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11129_fun5121__t {
  struct kk_function_s _base;
  kk_function_t next_11222;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11129_fun5121(kk_function_t _fself, kk_box_t _b_x832, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11129_fun5121(kk_function_t next_11222, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11129_fun5121__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11129_fun5121__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11129_fun5121, kk_context());
  _self->next_11222 = next_11222;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11129_fun5121(kk_function_t _fself, kk_box_t _b_x832, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11129_fun5121__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11129_fun5121__t*, _fself, _ctx);
  kk_function_t next_11222 = _self->next_11222; /* (list<(string, string)>) -> <local<24443>,exn,hml_types/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11222, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5122 = kk_Unit;
  kk_std_core_types__list _x_x5123 = kk_std_core_types__list_unbox(_b_x832, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11222, (next_11222, _x_x5123, _ctx), _ctx);
  return kk_unit_box(_x_x5122);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11129(kk_std_core_types__list _c_x10766, kk_ref_t error, kk_ref_t options, kk_hml__types__clispec spec, kk_string_t name, kk_context_t* _ctx) { /* forall<h> (list<string>, error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, name : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t v;
  kk_std_core_types__list _x_x5098 = kk_std_core_list_drop(_c_x10766, kk_integer_from_small(1), _ctx); /*list<10001>*/
  kk_string_t _x_x5099;
  kk_define_string_literal(static, _s_x5100, 1, "=", _ctx)
  _x_x5099 = kk_string_dup(_s_x5100, _ctx); /*string*/
  v = kk_std_core_list_joinsep(_x_x5098, _x_x5099, _ctx); /*string*/
  kk_std_core_types__list _x_x1_4_11031;
  kk_box_t _x_x5101 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11129_fun5102(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
  _x_x1_4_11031 = kk_std_core_types__list_unbox(_x_x5101, KK_OWNED, _ctx); /*list<hml_types/clioption>*/
  kk_std_core_types__maybe _match_x2567;
  kk_box_t _x_x5105;
  kk_box_t _x_x5111;
  kk_string_t _x_x5112 = kk_string_dup(name, _ctx); /*string*/
  _x_x5111 = kk_string_box(_x_x5112); /*10001*/
  _x_x5105 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11129_fun5106(_ctx), kk_std_core_types__list_box(_x_x1_4_11031, _ctx), _x_x5111, _ctx); /*10002*/
  _match_x2567 = kk_std_core_types__maybe_unbox(_x_x5105, KK_OWNED, _ctx); /*maybe<hml_types/clioption>*/
  if (kk_std_core_types__is_Just(_match_x2567, _ctx)) {
    kk_box_t _box_x814 = _match_x2567._cons.Just.value;
    kk_hml__types__clioption _pat_15_0 = kk_hml__types__clioption_unbox(_box_x814, KK_BORROWED, _ctx);
    struct kk_hml__types_Clioption* _con_x5113 = kk_hml__types__as_Clioption(_pat_15_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__maybe_drop(_match_x2567, _ctx);
    kk_std_core_types__list x_11221;
    kk_box_t _x_x5114;
    kk_ref_t _x_x5115 = kk_ref_dup(options, _ctx); /*local-var<24443,list<(string, string)>>*/
    _x_x5114 = kk_ref_get(_x_x5115,kk_context()); /*10000*/
    x_11221 = kk_std_core_types__list_unbox(_x_x5114, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_function_t next_11222 = kk_hml__types__new_mlift_hc__parse__loop_11129_fun5116(name, options, v, _ctx); /*(list<(string, string)>) -> <local<24443>,exn,hml_types/hica-brk,div> ()*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11221, _ctx);
      kk_box_t _x_x5120 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11129_fun5121(next_11222, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5120); return kk_Unit;
    }
    {
      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11222, (next_11222, x_11221, _ctx), _ctx); return kk_Unit;
    }
  }
  {
    kk_string_drop(v, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x834_842;
    kk_string_t _x_x5124;
    kk_define_string_literal(static, _s_x5125, 18, "unknown option: --", _ctx)
    _x_x5124 = kk_string_dup(_s_x5125, _ctx); /*string*/
    _b_x834_842 = kk_std_core_types__lp__plus__plus__rp_(_x_x5124, name, _ctx); /*string*/
    kk_unit_t _brw_x2568 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x834_842)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2568; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11130_fun5137__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11130_fun5137(kk_function_t _fself, kk_box_t _b_x853, kk_box_t _b_x854, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11130_fun5137(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11130_fun5137, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11130_fun5137(kk_function_t _fself, kk_box_t _b_x853, kk_box_t _b_x854, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5138;
  kk_std_core_types__maybe _match_x2566 = kk_std_core_types__maybe_unbox(_b_x853, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2566, _ctx)) {
    kk_box_t _box_x846 = _match_x2566._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x846);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2566, _ctx);
    kk_box_drop(_b_x854, _ctx);
    _x_x5138 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x847_859;
    kk_string_t _x_x5139;
    kk_define_string_literal(static, _s_x5140, 22, "unexpected Nothing in ", _ctx)
    _x_x5139 = kk_string_dup(_s_x5140, _ctx); /*string*/
    kk_string_t _x_x5141 = kk_string_unbox(_b_x854); /*string*/
    _b_x847_859 = kk_std_core_types__lp__plus__plus__rp_(_x_x5139, _x_x5141, _ctx); /*string*/
    kk_box_t _x_x5142 = kk_std_core_exn_throw(_b_x847_859, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5138 = kk_string_unbox(_x_x5142); /*string*/
  }
  return kk_string_box(_x_x5138);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11130_fun5144__t {
  struct kk_function_s _base;
  kk_std_core_types__list _c_x10766;
  kk_ref_t error;
  kk_ref_t options;
  kk_hml__types__clispec spec;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11130_fun5144(kk_function_t _fself, kk_box_t _b_x864, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11130_fun5144(kk_std_core_types__list _c_x10766, kk_ref_t error, kk_ref_t options, kk_hml__types__clispec spec, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11130_fun5144__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11130_fun5144__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11130_fun5144, kk_context());
  _self->_c_x10766 = _c_x10766;
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11130_fun5144(kk_function_t _fself, kk_box_t _b_x864, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11130_fun5144__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11130_fun5144__t*, _fself, _ctx);
  kk_std_core_types__list _c_x10766 = _self->_c_x10766; /* list<string> */
  kk_ref_t error = _self->error; /* local-var<24443,string> */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_hml__types__clispec spec = _self->spec; /* hml_types/clispec */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_c_x10766, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_hml__types__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_string_t name_866 = kk_string_unbox(_b_x864); /*string*/;
  kk_unit_t _x_x5145 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11129(_c_x10766, error, options, spec, name_866, _ctx);
  return kk_unit_box(_x_x5145);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11130(kk_ref_t error, kk_ref_t options, kk_hml__types__clispec spec, kk_std_core_types__list _c_x10766, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, options : local-var<h,list<(string, string)>>, spec : clispec, list<string>) -> () */ 
  kk_std_core_types__maybe _x_x1_3_11029;
  kk_std_core_types__list _x_x5126 = kk_std_core_types__list_dup(_c_x10766, _ctx); /*list<string>*/
  _x_x1_3_11029 = kk_std_core_list__index(_x_x5126, kk_integer_from_small(0), _ctx); /*maybe<string>*/
  kk_string_t _x_x2_2_11030;
  kk_string_t _x_x5127;
  kk_define_string_literal(static, _s_x5128, 12, "hml_types.kk", _ctx)
  _x_x5127 = kk_string_dup(_s_x5128, _ctx); /*string*/
  kk_string_t _x_x5129;
  kk_string_t _x_x5130;
  kk_define_string_literal(static, _s_x5131, 1, "(", _ctx)
  _x_x5130 = kk_string_dup(_s_x5131, _ctx); /*string*/
  kk_string_t _x_x5132;
  kk_string_t _x_x5133 = kk_std_core_int_show(kk_integer_from_small(796), _ctx); /*string*/
  kk_string_t _x_x5134;
  kk_define_string_literal(static, _s_x5135, 1, ")", _ctx)
  _x_x5134 = kk_string_dup(_s_x5135, _ctx); /*string*/
  _x_x5132 = kk_std_core_types__lp__plus__plus__rp_(_x_x5133, _x_x5134, _ctx); /*string*/
  _x_x5129 = kk_std_core_types__lp__plus__plus__rp_(_x_x5130, _x_x5132, _ctx); /*string*/
  _x_x2_2_11030 = kk_std_core_types__lp__plus__plus__rp_(_x_x5127, _x_x5129, _ctx); /*string*/
  kk_ssize_t _b_x849_855 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11227;
  kk_box_t _x_x5136 = kk_std_core_hnd__open_at2(_b_x849_855, kk_hml__types__new_mlift_hc__parse__loop_11130_fun5137(_ctx), kk_std_core_types__maybe_box(_x_x1_3_11029, _ctx), kk_string_box(_x_x2_2_11030), _ctx); /*10002*/
  x_11227 = kk_string_unbox(_x_x5136); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11227, _ctx);
    kk_box_t _x_x5143 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11130_fun5144(_c_x10766, error, options, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5143); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11129(_c_x10766, error, options, spec, x_11227, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11131(kk_ref_t flags, kk_string_t name_0_0, kk_std_core_types__list _y_x10774, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x870_872;
  kk_std_core_types__list _x_x5146 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x870_872 = kk_std_core_list_append(_y_x10774, _x_x5146, _ctx); /*list<string>*/
  kk_unit_t _brw_x2564 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x870_872, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2564; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11133_fun5149__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11133_fun5149(kk_function_t _fself, kk_std_core_types__list _y_x10784, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11133_fun5149(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11133_fun5149__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11133_fun5149__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11133_fun5149, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11133_fun5149(kk_function_t _fself, kk_std_core_types__list _y_x10784, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11133_fun5149__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11133_fun5149__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x884_886 = kk_std_core_list_drop(_y_x10784, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2562 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x884_886, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2562; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11133_fun5151__t {
  struct kk_function_s _base;
  kk_function_t next_11230;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11133_fun5151(kk_function_t _fself, kk_box_t _b_x888, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11133_fun5151(kk_function_t next_11230, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11133_fun5151__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11133_fun5151__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11133_fun5151, kk_context());
  _self->next_11230 = next_11230;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11133_fun5151(kk_function_t _fself, kk_box_t _b_x888, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11133_fun5151__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11133_fun5151__t*, _fself, _ctx);
  kk_function_t next_11230 = _self->next_11230; /* (list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11230, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5152 = kk_Unit;
  kk_std_core_types__list _x_x5153 = kk_std_core_types__list_unbox(_b_x888, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11230, (next_11230, _x_x5153, _ctx), _ctx);
  return kk_unit_box(_x_x5152);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11133(kk_ref_t remaining, kk_unit_t wild___3, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11229;
  kk_box_t _x_x5147;
  kk_ref_t _x_x5148 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
  _x_x5147 = kk_ref_get(_x_x5148,kk_context()); /*10000*/
  x_11229 = kk_std_core_types__list_unbox(_x_x5147, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11230 = kk_hml__types__new_mlift_hc__parse__loop_11133_fun5149(remaining, _ctx); /*(list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11229, _ctx);
    kk_box_t _x_x5150 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11133_fun5151(next_11230, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5150); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11230, (next_11230, x_11229, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11134_fun5158__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11134_fun5158(kk_function_t _fself, kk_box_t _b_x903, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11134_fun5158(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11134_fun5158__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11134_fun5158__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11134_fun5158, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11134_fun5158(kk_function_t _fself, kk_box_t _b_x903, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11134_fun5158__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11134_fun5158__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_905 = kk_Unit;
  kk_unit_unbox(_b_x903);
  kk_unit_t _x_x5159 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11133(remaining, wild___3_905, _ctx);
  return kk_unit_box(_x_x5159);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11134(kk_std_core_types__list _y_x10778, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10782, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x895_897;
  kk_std_core_types__list _x_x5154;
  kk_box_t _x_x5155;
  kk_std_core_types__tuple2 _x_x5156 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0), kk_string_box(_y_x10782), _ctx); /*(10037, 10038)*/
  _x_x5155 = kk_std_core_types__tuple2_box(_x_x5156, _ctx); /*10021*/
  _x_x5154 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5155, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x895_897 = kk_std_core_list_append(_y_x10778, _x_x5154, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11233 = kk_Unit;
  kk_unit_t _brw_x2560 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x895_897, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2560;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5157 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11134_fun5158(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5157); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11133(remaining, x_11233, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11135_fun5170__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11135_fun5170(kk_function_t _fself, kk_box_t _b_x913, kk_box_t _b_x914, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11135_fun5170(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11135_fun5170, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11135_fun5170(kk_function_t _fself, kk_box_t _b_x913, kk_box_t _b_x914, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5171;
  kk_std_core_types__maybe _match_x2558 = kk_std_core_types__maybe_unbox(_b_x913, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2558, _ctx)) {
    kk_box_t _box_x906 = _match_x2558._cons.Just.value;
    kk_string_t x_1 = kk_string_unbox(_box_x906);
    kk_string_dup(x_1, _ctx);
    kk_std_core_types__maybe_drop(_match_x2558, _ctx);
    kk_box_drop(_b_x914, _ctx);
    _x_x5171 = x_1; /*string*/
  }
  else {
    kk_string_t _b_x907_919;
    kk_string_t _x_x5172;
    kk_define_string_literal(static, _s_x5173, 22, "unexpected Nothing in ", _ctx)
    _x_x5172 = kk_string_dup(_s_x5173, _ctx); /*string*/
    kk_string_t _x_x5174 = kk_string_unbox(_b_x914); /*string*/
    _b_x907_919 = kk_std_core_types__lp__plus__plus__rp_(_x_x5172, _x_x5174, _ctx); /*string*/
    kk_box_t _x_x5175 = kk_std_core_exn_throw(_b_x907_919, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5171 = kk_string_unbox(_x_x5175); /*string*/
  }
  return kk_string_box(_x_x5171);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11135_fun5177__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10778;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11135_fun5177(kk_function_t _fself, kk_box_t _b_x924, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11135_fun5177(kk_std_core_types__list _y_x10778, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11135_fun5177__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11135_fun5177__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11135_fun5177, kk_context());
  _self->_y_x10778 = _y_x10778;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11135_fun5177(kk_function_t _fself, kk_box_t _b_x924, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11135_fun5177__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11135_fun5177__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10778 = _self->_y_x10778; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10778, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10782_926 = kk_string_unbox(_b_x924); /*string*/;
  kk_unit_t _x_x5178 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11134(_y_x10778, name_0_0, options, remaining, _y_x10782_926, _ctx);
  return kk_unit_box(_x_x5178);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11135(kk_std_core_types__list _y_x10778, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10781, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_12_11043 = kk_std_core_list__index(_y_x10781, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_7_11044;
  kk_string_t _x_x5160;
  kk_define_string_literal(static, _s_x5161, 12, "hml_types.kk", _ctx)
  _x_x5160 = kk_string_dup(_s_x5161, _ctx); /*string*/
  kk_string_t _x_x5162;
  kk_string_t _x_x5163;
  kk_define_string_literal(static, _s_x5164, 1, "(", _ctx)
  _x_x5163 = kk_string_dup(_s_x5164, _ctx); /*string*/
  kk_string_t _x_x5165;
  kk_string_t _x_x5166 = kk_std_core_int_show(kk_integer_from_small(814), _ctx); /*string*/
  kk_string_t _x_x5167;
  kk_define_string_literal(static, _s_x5168, 1, ")", _ctx)
  _x_x5167 = kk_string_dup(_s_x5168, _ctx); /*string*/
  _x_x5165 = kk_std_core_types__lp__plus__plus__rp_(_x_x5166, _x_x5167, _ctx); /*string*/
  _x_x5162 = kk_std_core_types__lp__plus__plus__rp_(_x_x5163, _x_x5165, _ctx); /*string*/
  _x_x2_7_11044 = kk_std_core_types__lp__plus__plus__rp_(_x_x5160, _x_x5162, _ctx); /*string*/
  kk_ssize_t _b_x909_915 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11235;
  kk_box_t _x_x5169 = kk_std_core_hnd__open_at2(_b_x909_915, kk_hml__types__new_mlift_hc__parse__loop_11135_fun5170(_ctx), kk_std_core_types__maybe_box(_x_x1_12_11043, _ctx), kk_string_box(_x_x2_7_11044), _ctx); /*10002*/
  x_11235 = kk_string_unbox(_x_x5169); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11235, _ctx);
    kk_box_t _x_x5176 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11135_fun5177(_y_x10778, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5176); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11134(_y_x10778, name_0_0, options, remaining, x_11235, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11136_fun5182__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10778;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11136_fun5182(kk_function_t _fself, kk_box_t _b_x932, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11136_fun5182(kk_std_core_types__list _y_x10778, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11136_fun5182__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11136_fun5182__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11136_fun5182, kk_context());
  _self->_y_x10778 = _y_x10778;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11136_fun5182(kk_function_t _fself, kk_box_t _b_x932, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11136_fun5182__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11136_fun5182__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10778 = _self->_y_x10778; /* list<(string, string)> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10778, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10781_934 = kk_std_core_types__list_unbox(_b_x932, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5183 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11135(_y_x10778, name_0_0, options, remaining, _y_x10781_934, _ctx);
  return kk_unit_box(_x_x5183);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11136(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10778, kk_context_t* _ctx) { /* forall<h> (name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11237;
  kk_box_t _x_x5179;
  kk_ref_t _x_x5180 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
  _x_x5179 = kk_ref_get(_x_x5180,kk_context()); /*10000*/
  x_11237 = kk_std_core_types__list_unbox(_x_x5179, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11237, _ctx);
    kk_box_t _x_x5181 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11136_fun5182(_y_x10778, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5181); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11135(_y_x10778, name_0_0, options, remaining, x_11237, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11137_fun5192__t {
  struct kk_function_s _base;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11137_fun5192(kk_function_t _fself, kk_box_t _b_x942, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11137_fun5192(kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11137_fun5192__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11137_fun5192__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11137_fun5192, kk_context());
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11137_fun5192(kk_function_t _fself, kk_box_t _b_x942, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11137_fun5192__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11137_fun5192__t*, _fself, _ctx);
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10778_946 = kk_std_core_types__list_unbox(_b_x942, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5193 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11136(name_0_0, options, remaining, _y_x10778_946, _ctx);
  return kk_unit_box(_x_x5193);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11137(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10776, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2551;
  kk_integer_t _brw_x2554 = kk_std_core_list__lift_length_6003(_y_x10776, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2555 = kk_integer_eq_borrow(_brw_x2554,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2554, _ctx);
  _match_x2551 = _brw_x2555; /*bool*/
  if (_match_x2551) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x936_944;
    kk_string_t _x_x5184;
    kk_define_string_literal(static, _s_x5185, 9, "option --", _ctx)
    _x_x5184 = kk_string_dup(_s_x5185, _ctx); /*string*/
    kk_string_t _x_x5186;
    kk_string_t _x_x5187;
    kk_define_string_literal(static, _s_x5188, 17, " requires a value", _ctx)
    _x_x5187 = kk_string_dup(_s_x5188, _ctx); /*string*/
    _x_x5186 = kk_std_core_types__lp__plus__plus__rp_(name_0_0, _x_x5187, _ctx); /*string*/
    _b_x936_944 = kk_std_core_types__lp__plus__plus__rp_(_x_x5184, _x_x5186, _ctx); /*string*/
    kk_unit_t _brw_x2553 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x936_944)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2553; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11239;
    kk_box_t _x_x5189;
    kk_ref_t _x_x5190 = kk_ref_dup(options, _ctx); /*local-var<24443,list<(string, string)>>*/
    _x_x5189 = kk_ref_get(_x_x5190,kk_context()); /*10000*/
    x_11239 = kk_std_core_types__list_unbox(_x_x5189, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11239, _ctx);
      kk_box_t _x_x5191 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11137_fun5192(name_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5191); return kk_Unit;
    }
    {
      kk_hml__types__mlift_hc__parse__loop_11136(name_0_0, options, remaining, x_11239, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11138_fun5195__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11138_fun5195(kk_function_t _fself, kk_box_t _b_x949, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11138_fun5195(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11138_fun5195, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11138_fun5195(kk_function_t _fself, kk_box_t _b_x949, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5196;
  kk_hml__types__cliflag _match_x2550 = kk_hml__types__cliflag_unbox(_b_x949, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x5197 = kk_hml__types__as_Cliflag(_match_x2550, _ctx);
    kk_string_t _x_7 = _con_x5197->flag__name;
    kk_string_t _pat_0_20 = _con_x5197->flag__short;
    kk_string_t _pat_1_15 = _con_x5197->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2550, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2550, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2550, _ctx);
    }
    _x_x5196 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5196);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11138(kk_hml__types__cliflag f_1, kk_ref_t flags, kk_std_core_types__list _y_x10790, kk_context_t* _ctx) { /* forall<h> (f@1 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x950_952;
  kk_box_t _x_x5194 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11138_fun5195(_ctx), kk_hml__types__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x950_952 = kk_string_unbox(_x_x5194); /*string*/
  kk_std_core_types__list _b_x958_960;
  kk_std_core_types__list _x_x5198 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x950_952), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x958_960 = kk_std_core_list_append(_y_x10790, _x_x5198, _ctx); /*list<string>*/
  kk_unit_t _brw_x2549 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x958_960, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2549; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11140_fun5201__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11140_fun5201(kk_function_t _fself, kk_std_core_types__list _y_x10800, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11140_fun5201(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11140_fun5201__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11140_fun5201__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11140_fun5201, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11140_fun5201(kk_function_t _fself, kk_std_core_types__list _y_x10800, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11140_fun5201__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11140_fun5201__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x970_972 = kk_std_core_list_drop(_y_x10800, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2547 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x970_972, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2547; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11140_fun5203__t {
  struct kk_function_s _base;
  kk_function_t next_11242;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11140_fun5203(kk_function_t _fself, kk_box_t _b_x974, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11140_fun5203(kk_function_t next_11242, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11140_fun5203__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11140_fun5203__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11140_fun5203, kk_context());
  _self->next_11242 = next_11242;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11140_fun5203(kk_function_t _fself, kk_box_t _b_x974, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11140_fun5203__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11140_fun5203__t*, _fself, _ctx);
  kk_function_t next_11242 = _self->next_11242; /* (list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11242, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5204 = kk_Unit;
  kk_std_core_types__list _x_x5205 = kk_std_core_types__list_unbox(_b_x974, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11242, (next_11242, _x_x5205, _ctx), _ctx);
  return kk_unit_box(_x_x5204);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11140(kk_ref_t remaining, kk_unit_t wild___4, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11241;
  kk_box_t _x_x5199;
  kk_ref_t _x_x5200 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
  _x_x5199 = kk_ref_get(_x_x5200,kk_context()); /*10000*/
  x_11241 = kk_std_core_types__list_unbox(_x_x5199, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11242 = kk_hml__types__new_mlift_hc__parse__loop_11140_fun5201(remaining, _ctx); /*(list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11241, _ctx);
    kk_box_t _x_x5202 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11140_fun5203(next_11242, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5202); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11242, (next_11242, x_11241, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11141_fun5207__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11141_fun5207(kk_function_t _fself, kk_box_t _b_x978, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11141_fun5207(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11141_fun5207, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11141_fun5207(kk_function_t _fself, kk_box_t _b_x978, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5208;
  kk_hml__types__clioption _match_x2545 = kk_hml__types__clioption_unbox(_b_x978, KK_OWNED, _ctx); /*hml_types/clioption*/;
  {
    struct kk_hml__types_Clioption* _con_x5209 = kk_hml__types__as_Clioption(_match_x2545, _ctx);
    kk_string_t _x_10 = _con_x5209->opt__name;
    kk_string_t _pat_0_23 = _con_x5209->opt__short;
    kk_string_t _pat_1_18 = _con_x5209->opt__help;
    kk_string_t _pat_2_8 = _con_x5209->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2545, _ctx)) {
      kk_string_drop(_pat_2_8, _ctx);
      kk_string_drop(_pat_1_18, _ctx);
      kk_string_drop(_pat_0_23, _ctx);
      kk_datatype_ptr_free(_match_x2545, _ctx);
    }
    else {
      kk_string_dup(_x_10, _ctx);
      kk_datatype_ptr_decref(_match_x2545, _ctx);
    }
    _x_x5208 = _x_10; /*string*/
  }
  return kk_string_box(_x_x5208);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11141_fun5214__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11141_fun5214(kk_function_t _fself, kk_box_t _b_x995, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11141_fun5214(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11141_fun5214__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11141_fun5214__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11141_fun5214, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11141_fun5214(kk_function_t _fself, kk_box_t _b_x995, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11141_fun5214__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11141_fun5214__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_997 = kk_Unit;
  kk_unit_unbox(_b_x995);
  kk_unit_t _x_x5215 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11140(remaining, wild___4_997, _ctx);
  return kk_unit_box(_x_x5215);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11141(kk_std_core_types__list _y_x10794, kk_hml__types__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10798, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x979_985;
  kk_box_t _x_x5206 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11141_fun5207(_ctx), kk_hml__types__clioption_box(o_2, _ctx), _ctx); /*10001*/
  _b_x979_985 = kk_string_unbox(_x_x5206); /*string*/
  kk_std_core_types__list _b_x991_993;
  kk_std_core_types__list _x_x5210;
  kk_box_t _x_x5211;
  kk_std_core_types__tuple2 _x_x5212 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x979_985), kk_string_box(_y_x10798), _ctx); /*(10037, 10038)*/
  _x_x5211 = kk_std_core_types__tuple2_box(_x_x5212, _ctx); /*10021*/
  _x_x5210 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5211, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x991_993 = kk_std_core_list_append(_y_x10794, _x_x5210, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11245 = kk_Unit;
  kk_unit_t _brw_x2544 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x991_993, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2544;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5213 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11141_fun5214(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5213); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11140(remaining, x_11245, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11142_fun5226__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11142_fun5226(kk_function_t _fself, kk_box_t _b_x1005, kk_box_t _b_x1006, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11142_fun5226(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11142_fun5226, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11142_fun5226(kk_function_t _fself, kk_box_t _b_x1005, kk_box_t _b_x1006, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5227;
  kk_std_core_types__maybe _match_x2542 = kk_std_core_types__maybe_unbox(_b_x1005, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2542, _ctx)) {
    kk_box_t _box_x998 = _match_x2542._cons.Just.value;
    kk_string_t x_2 = kk_string_unbox(_box_x998);
    kk_string_dup(x_2, _ctx);
    kk_std_core_types__maybe_drop(_match_x2542, _ctx);
    kk_box_drop(_b_x1006, _ctx);
    _x_x5227 = x_2; /*string*/
  }
  else {
    kk_string_t _b_x999_1011;
    kk_string_t _x_x5228;
    kk_define_string_literal(static, _s_x5229, 22, "unexpected Nothing in ", _ctx)
    _x_x5228 = kk_string_dup(_s_x5229, _ctx); /*string*/
    kk_string_t _x_x5230 = kk_string_unbox(_b_x1006); /*string*/
    _b_x999_1011 = kk_std_core_types__lp__plus__plus__rp_(_x_x5228, _x_x5230, _ctx); /*string*/
    kk_box_t _x_x5231 = kk_std_core_exn_throw(_b_x999_1011, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5227 = kk_string_unbox(_x_x5231); /*string*/
  }
  return kk_string_box(_x_x5227);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11142_fun5233__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10794;
  kk_hml__types__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11142_fun5233(kk_function_t _fself, kk_box_t _b_x1016, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11142_fun5233(kk_std_core_types__list _y_x10794, kk_hml__types__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11142_fun5233__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11142_fun5233__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11142_fun5233, kk_context());
  _self->_y_x10794 = _y_x10794;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11142_fun5233(kk_function_t _fself, kk_box_t _b_x1016, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11142_fun5233__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11142_fun5233__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10794 = _self->_y_x10794; /* list<(string, string)> */
  kk_hml__types__clioption o_2 = _self->o_2; /* hml_types/clioption */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10794, _ctx);kk_hml__types__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10798_1018 = kk_string_unbox(_b_x1016); /*string*/;
  kk_unit_t _x_x5234 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11141(_y_x10794, o_2, options, remaining, _y_x10798_1018, _ctx);
  return kk_unit_box(_x_x5234);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11142(kk_std_core_types__list _y_x10794, kk_hml__types__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10797, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_20_11055 = kk_std_core_list__index(_y_x10797, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11_11056;
  kk_string_t _x_x5216;
  kk_define_string_literal(static, _s_x5217, 12, "hml_types.kk", _ctx)
  _x_x5216 = kk_string_dup(_s_x5217, _ctx); /*string*/
  kk_string_t _x_x5218;
  kk_string_t _x_x5219;
  kk_define_string_literal(static, _s_x5220, 1, "(", _ctx)
  _x_x5219 = kk_string_dup(_s_x5220, _ctx); /*string*/
  kk_string_t _x_x5221;
  kk_string_t _x_x5222 = kk_std_core_int_show(kk_integer_from_small(829), _ctx); /*string*/
  kk_string_t _x_x5223;
  kk_define_string_literal(static, _s_x5224, 1, ")", _ctx)
  _x_x5223 = kk_string_dup(_s_x5224, _ctx); /*string*/
  _x_x5221 = kk_std_core_types__lp__plus__plus__rp_(_x_x5222, _x_x5223, _ctx); /*string*/
  _x_x5218 = kk_std_core_types__lp__plus__plus__rp_(_x_x5219, _x_x5221, _ctx); /*string*/
  _x_x2_11_11056 = kk_std_core_types__lp__plus__plus__rp_(_x_x5216, _x_x5218, _ctx); /*string*/
  kk_ssize_t _b_x1001_1007 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11247;
  kk_box_t _x_x5225 = kk_std_core_hnd__open_at2(_b_x1001_1007, kk_hml__types__new_mlift_hc__parse__loop_11142_fun5226(_ctx), kk_std_core_types__maybe_box(_x_x1_20_11055, _ctx), kk_string_box(_x_x2_11_11056), _ctx); /*10002*/
  x_11247 = kk_string_unbox(_x_x5225); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11247, _ctx);
    kk_box_t _x_x5232 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11142_fun5233(_y_x10794, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5232); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11141(_y_x10794, o_2, options, remaining, x_11247, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11143_fun5238__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10794;
  kk_hml__types__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11143_fun5238(kk_function_t _fself, kk_box_t _b_x1024, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11143_fun5238(kk_std_core_types__list _y_x10794, kk_hml__types__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11143_fun5238__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11143_fun5238__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11143_fun5238, kk_context());
  _self->_y_x10794 = _y_x10794;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11143_fun5238(kk_function_t _fself, kk_box_t _b_x1024, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11143_fun5238__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11143_fun5238__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10794 = _self->_y_x10794; /* list<(string, string)> */
  kk_hml__types__clioption o_2 = _self->o_2; /* hml_types/clioption */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10794, _ctx);kk_hml__types__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10797_1026 = kk_std_core_types__list_unbox(_b_x1024, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5239 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11142(_y_x10794, o_2, options, remaining, _y_x10797_1026, _ctx);
  return kk_unit_box(_x_x5239);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11143(kk_hml__types__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10794, kk_context_t* _ctx) { /* forall<h> (o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11249;
  kk_box_t _x_x5235;
  kk_ref_t _x_x5236 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
  _x_x5235 = kk_ref_get(_x_x5236,kk_context()); /*10000*/
  x_11249 = kk_std_core_types__list_unbox(_x_x5235, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11249, _ctx);
    kk_box_t _x_x5237 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11143_fun5238(_y_x10794, o_2, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5237); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11142(_y_x10794, o_2, options, remaining, x_11249, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11144_fun5248__t {
  struct kk_function_s _base;
  kk_hml__types__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11144_fun5248(kk_function_t _fself, kk_box_t _b_x1034, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11144_fun5248(kk_hml__types__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11144_fun5248__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11144_fun5248__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11144_fun5248, kk_context());
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11144_fun5248(kk_function_t _fself, kk_box_t _b_x1034, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11144_fun5248__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11144_fun5248__t*, _fself, _ctx);
  kk_hml__types__clioption o_2 = _self->o_2; /* hml_types/clioption */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_hml__types__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10794_1038 = kk_std_core_types__list_unbox(_b_x1034, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5249 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11143(o_2, options, remaining, _y_x10794_1038, _ctx);
  return kk_unit_box(_x_x5249);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11144(kk_ref_t error, kk_hml__types__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_std_core_types__list _y_x10792, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@2 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@5 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2535;
  kk_integer_t _brw_x2538 = kk_std_core_list__lift_length_6003(_y_x10792, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2539 = kk_integer_eq_borrow(_brw_x2538,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2538, _ctx);
  _match_x2535 = _brw_x2539; /*bool*/
  if (_match_x2535) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_2, (KK_I32(4)), _ctx);
    kk_string_t _b_x1028_1036;
    kk_string_t _x_x5240;
    kk_define_string_literal(static, _s_x5241, 8, "option -", _ctx)
    _x_x5240 = kk_string_dup(_s_x5241, _ctx); /*string*/
    kk_string_t _x_x5242;
    kk_string_t _x_x5243;
    kk_define_string_literal(static, _s_x5244, 17, " requires a value", _ctx)
    _x_x5243 = kk_string_dup(_s_x5244, _ctx); /*string*/
    _x_x5242 = kk_std_core_types__lp__plus__plus__rp_(s_5, _x_x5243, _ctx); /*string*/
    _b_x1028_1036 = kk_std_core_types__lp__plus__plus__rp_(_x_x5240, _x_x5242, _ctx); /*string*/
    kk_unit_t _brw_x2537 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1028_1036)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2537; return kk_Unit;
  }
  {
    kk_string_drop(s_5, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11251;
    kk_box_t _x_x5245;
    kk_ref_t _x_x5246 = kk_ref_dup(options, _ctx); /*local-var<24443,list<(string, string)>>*/
    _x_x5245 = kk_ref_get(_x_x5246,kk_context()); /*10000*/
    x_11251 = kk_std_core_types__list_unbox(_x_x5245, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11251, _ctx);
      kk_box_t _x_x5247 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11144_fun5248(o_2, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5247); return kk_Unit;
    }
    {
      kk_hml__types__mlift_hc__parse__loop_11143(o_2, options, remaining, x_11251, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11145_fun5251__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11145_fun5251(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11145_fun5251(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11145_fun5251, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11145_fun5251(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11253 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml_types/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5252 = kk_std_core_hnd__as_Ev(ev_11253, _ctx);
    kk_box_t _box_x1039 = _con_x5252->hnd;
    int32_t m = _con_x5252->marker;
    kk_hml__types__hica_brk h = kk_hml__types__hica_brk_unbox(_box_x1039, KK_BORROWED, _ctx);
    kk_hml__types__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__types__Hnd_hica_brk* _con_x5253 = kk_hml__types__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5253->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5253->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1042 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1042, (_fun_unbox_x1042, m, ev_11253, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11145(kk_unit_t wild___6, kk_context_t* _ctx) { /* forall<h> (wild_@6 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1045_1047 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5250 = kk_std_core_hnd__open_at0(_b_x1045_1047, kk_hml__types__new_mlift_hc__parse__loop_11145_fun5251(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5250); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11146_fun5255__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11146_fun5255(kk_function_t _fself, kk_box_t _b_x1054, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11146_fun5255(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11146_fun5255, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11146_fun5255(kk_function_t _fself, kk_box_t _b_x1054, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_1056 = kk_Unit;
  kk_unit_unbox(_b_x1054);
  kk_unit_t _x_x5256 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11145(wild___6_1056, _ctx);
  return kk_unit_box(_x_x5256);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11146(kk_ref_t sub__args, kk_std_core_types__list _y_x10807, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11255 = kk_Unit;
  kk_unit_t _brw_x2534 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10807, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2534;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5254 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11146_fun5255(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5254); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11145(x_11255, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11147_fun5259__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11147_fun5259(kk_function_t _fself, kk_box_t _b_x1062, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11147_fun5259(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11147_fun5259__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11147_fun5259__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11147_fun5259, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11147_fun5259(kk_function_t _fself, kk_box_t _b_x1062, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11147_fun5259__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11147_fun5259__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10807_1064 = kk_std_core_types__list_unbox(_b_x1062, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5260 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11146(sub__args, _y_x10807_1064, _ctx);
  return kk_unit_box(_x_x5260);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11147(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11257;
  kk_box_t _x_x5257 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11257 = kk_std_core_types__list_unbox(_x_x5257, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11257, _ctx);
    kk_box_t _x_x5258 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11147_fun5259(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5258); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11146(sub__args, x_11257, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11148(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10811, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1068_1070;
  kk_std_core_types__list _x_x5261 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1068_1070 = kk_std_core_list_append(_y_x10811, _x_x5261, _ctx); /*list<string>*/
  kk_unit_t _brw_x2531 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1068_1070, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2531; return kk_Unit;
}
 
// monadic lift

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11149(kk_ref_t flags, kk_string_t name_0_0_0, kk_std_core_types__list _y_x10817, kk_context_t* _ctx) { /* forall<h> (flags : local-var<h,list<string>>, name@0@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1076_1078;
  kk_std_core_types__list _x_x5262 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1076_1078 = kk_std_core_list_append(_y_x10817, _x_x5262, _ctx); /*list<string>*/
  kk_unit_t _brw_x2530 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1076_1078, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2530; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11151_fun5265__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11151_fun5265(kk_function_t _fself, kk_std_core_types__list _y_x10827, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11151_fun5265(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11151_fun5265__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11151_fun5265__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11151_fun5265, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11151_fun5265(kk_function_t _fself, kk_std_core_types__list _y_x10827, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11151_fun5265__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11151_fun5265__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1090_1092 = kk_std_core_list_drop(_y_x10827, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2528 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1090_1092, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2528; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11151_fun5267__t {
  struct kk_function_s _base;
  kk_function_t next_11260;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11151_fun5267(kk_function_t _fself, kk_box_t _b_x1094, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11151_fun5267(kk_function_t next_11260, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11151_fun5267__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11151_fun5267__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11151_fun5267, kk_context());
  _self->next_11260 = next_11260;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11151_fun5267(kk_function_t _fself, kk_box_t _b_x1094, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11151_fun5267__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11151_fun5267__t*, _fself, _ctx);
  kk_function_t next_11260 = _self->next_11260; /* (list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11260, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5268 = kk_Unit;
  kk_std_core_types__list _x_x5269 = kk_std_core_types__list_unbox(_b_x1094, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11260, (next_11260, _x_x5269, _ctx), _ctx);
  return kk_unit_box(_x_x5268);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11151(kk_ref_t remaining, kk_unit_t wild___3_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@3@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11259;
  kk_box_t _x_x5263;
  kk_ref_t _x_x5264 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
  _x_x5263 = kk_ref_get(_x_x5264,kk_context()); /*10000*/
  x_11259 = kk_std_core_types__list_unbox(_x_x5263, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11260 = kk_hml__types__new_mlift_hc__parse__loop_11151_fun5265(remaining, _ctx); /*(list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11259, _ctx);
    kk_box_t _x_x5266 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11151_fun5267(next_11260, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5266); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11260, (next_11260, x_11259, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11152_fun5274__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11152_fun5274(kk_function_t _fself, kk_box_t _b_x1109, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11152_fun5274(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11152_fun5274__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11152_fun5274__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11152_fun5274, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11152_fun5274(kk_function_t _fself, kk_box_t _b_x1109, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11152_fun5274__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11152_fun5274__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___3_0_1111 = kk_Unit;
  kk_unit_unbox(_b_x1109);
  kk_unit_t _x_x5275 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11151(remaining, wild___3_0_1111, _ctx);
  return kk_unit_box(_x_x5275);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11152(kk_std_core_types__list _y_x10821, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10825, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1101_1103;
  kk_std_core_types__list _x_x5270;
  kk_box_t _x_x5271;
  kk_std_core_types__tuple2 _x_x5272 = kk_std_core_types__new_Tuple2(kk_string_box(name_0_0_0), kk_string_box(_y_x10825), _ctx); /*(10037, 10038)*/
  _x_x5271 = kk_std_core_types__tuple2_box(_x_x5272, _ctx); /*10021*/
  _x_x5270 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5271, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1101_1103 = kk_std_core_list_append(_y_x10821, _x_x5270, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11263 = kk_Unit;
  kk_unit_t _brw_x2526 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1101_1103, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2526;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5273 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11152_fun5274(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5273); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11151(remaining, x_11263, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11153_fun5286__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11153_fun5286(kk_function_t _fself, kk_box_t _b_x1119, kk_box_t _b_x1120, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11153_fun5286(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11153_fun5286, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11153_fun5286(kk_function_t _fself, kk_box_t _b_x1119, kk_box_t _b_x1120, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5287;
  kk_std_core_types__maybe _match_x2524 = kk_std_core_types__maybe_unbox(_b_x1119, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2524, _ctx)) {
    kk_box_t _box_x1112 = _match_x2524._cons.Just.value;
    kk_string_t x_3 = kk_string_unbox(_box_x1112);
    kk_string_dup(x_3, _ctx);
    kk_std_core_types__maybe_drop(_match_x2524, _ctx);
    kk_box_drop(_b_x1120, _ctx);
    _x_x5287 = x_3; /*string*/
  }
  else {
    kk_string_t _b_x1113_1125;
    kk_string_t _x_x5288;
    kk_define_string_literal(static, _s_x5289, 22, "unexpected Nothing in ", _ctx)
    _x_x5288 = kk_string_dup(_s_x5289, _ctx); /*string*/
    kk_string_t _x_x5290 = kk_string_unbox(_b_x1120); /*string*/
    _b_x1113_1125 = kk_std_core_types__lp__plus__plus__rp_(_x_x5288, _x_x5290, _ctx); /*string*/
    kk_box_t _x_x5291 = kk_std_core_exn_throw(_b_x1113_1125, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5287 = kk_string_unbox(_x_x5291); /*string*/
  }
  return kk_string_box(_x_x5287);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11153_fun5293__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10821;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11153_fun5293(kk_function_t _fself, kk_box_t _b_x1130, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11153_fun5293(kk_std_core_types__list _y_x10821, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11153_fun5293__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11153_fun5293__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11153_fun5293, kk_context());
  _self->_y_x10821 = _y_x10821;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11153_fun5293(kk_function_t _fself, kk_box_t _b_x1130, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11153_fun5293__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11153_fun5293__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10821 = _self->_y_x10821; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10821, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10825_1132 = kk_string_unbox(_b_x1130); /*string*/;
  kk_unit_t _x_x5294 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11152(_y_x10821, name_0_0_0, options, remaining, _y_x10825_1132, _ctx);
  return kk_unit_box(_x_x5294);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11153(kk_std_core_types__list _y_x10821, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10824, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_30_11070 = kk_std_core_list__index(_y_x10824, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_16_11071;
  kk_string_t _x_x5276;
  kk_define_string_literal(static, _s_x5277, 12, "hml_types.kk", _ctx)
  _x_x5276 = kk_string_dup(_s_x5277, _ctx); /*string*/
  kk_string_t _x_x5278;
  kk_string_t _x_x5279;
  kk_define_string_literal(static, _s_x5280, 1, "(", _ctx)
  _x_x5279 = kk_string_dup(_s_x5280, _ctx); /*string*/
  kk_string_t _x_x5281;
  kk_string_t _x_x5282 = kk_std_core_int_show(kk_integer_from_small(814), _ctx); /*string*/
  kk_string_t _x_x5283;
  kk_define_string_literal(static, _s_x5284, 1, ")", _ctx)
  _x_x5283 = kk_string_dup(_s_x5284, _ctx); /*string*/
  _x_x5281 = kk_std_core_types__lp__plus__plus__rp_(_x_x5282, _x_x5283, _ctx); /*string*/
  _x_x5278 = kk_std_core_types__lp__plus__plus__rp_(_x_x5279, _x_x5281, _ctx); /*string*/
  _x_x2_16_11071 = kk_std_core_types__lp__plus__plus__rp_(_x_x5276, _x_x5278, _ctx); /*string*/
  kk_ssize_t _b_x1115_1121 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11265;
  kk_box_t _x_x5285 = kk_std_core_hnd__open_at2(_b_x1115_1121, kk_hml__types__new_mlift_hc__parse__loop_11153_fun5286(_ctx), kk_std_core_types__maybe_box(_x_x1_30_11070, _ctx), kk_string_box(_x_x2_16_11071), _ctx); /*10002*/
  x_11265 = kk_string_unbox(_x_x5285); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11265, _ctx);
    kk_box_t _x_x5292 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11153_fun5293(_y_x10821, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5292); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11152(_y_x10821, name_0_0_0, options, remaining, x_11265, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11154_fun5298__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10821;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11154_fun5298(kk_function_t _fself, kk_box_t _b_x1138, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11154_fun5298(kk_std_core_types__list _y_x10821, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11154_fun5298__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11154_fun5298__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11154_fun5298, kk_context());
  _self->_y_x10821 = _y_x10821;
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11154_fun5298(kk_function_t _fself, kk_box_t _b_x1138, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11154_fun5298__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11154_fun5298__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10821 = _self->_y_x10821; /* list<(string, string)> */
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10821, _ctx);kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10824_1140 = kk_std_core_types__list_unbox(_b_x1138, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5299 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11153(_y_x10821, name_0_0_0, options, remaining, _y_x10824_1140, _ctx);
  return kk_unit_box(_x_x5299);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11154(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10821, kk_context_t* _ctx) { /* forall<h> (name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11267;
  kk_box_t _x_x5295;
  kk_ref_t _x_x5296 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
  _x_x5295 = kk_ref_get(_x_x5296,kk_context()); /*10000*/
  x_11267 = kk_std_core_types__list_unbox(_x_x5295, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11267, _ctx);
    kk_box_t _x_x5297 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11154_fun5298(_y_x10821, name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5297); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11153(_y_x10821, name_0_0_0, options, remaining, x_11267, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11155_fun5308__t {
  struct kk_function_s _base;
  kk_string_t name_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11155_fun5308(kk_function_t _fself, kk_box_t _b_x1148, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11155_fun5308(kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11155_fun5308__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11155_fun5308__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11155_fun5308, kk_context());
  _self->name_0_0_0 = name_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11155_fun5308(kk_function_t _fself, kk_box_t _b_x1148, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11155_fun5308__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11155_fun5308__t*, _fself, _ctx);
  kk_string_t name_0_0_0 = _self->name_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_string_dup(name_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10821_1152 = kk_std_core_types__list_unbox(_b_x1148, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5309 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11154(name_0_0_0, options, remaining, _y_x10821_1152, _ctx);
  return kk_unit_box(_x_x5309);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11155(kk_ref_t error, kk_string_t name_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10819, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, name@0@0@0 : string, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2517;
  kk_integer_t _brw_x2520 = kk_std_core_list__lift_length_6003(_y_x10819, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2521 = kk_integer_eq_borrow(_brw_x2520,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2520, _ctx);
  _match_x2517 = _brw_x2521; /*bool*/
  if (_match_x2517) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_string_t _b_x1142_1150;
    kk_string_t _x_x5300;
    kk_define_string_literal(static, _s_x5301, 9, "option --", _ctx)
    _x_x5300 = kk_string_dup(_s_x5301, _ctx); /*string*/
    kk_string_t _x_x5302;
    kk_string_t _x_x5303;
    kk_define_string_literal(static, _s_x5304, 17, " requires a value", _ctx)
    _x_x5303 = kk_string_dup(_s_x5304, _ctx); /*string*/
    _x_x5302 = kk_std_core_types__lp__plus__plus__rp_(name_0_0_0, _x_x5303, _ctx); /*string*/
    _b_x1142_1150 = kk_std_core_types__lp__plus__plus__rp_(_x_x5300, _x_x5302, _ctx); /*string*/
    kk_unit_t _brw_x2519 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1142_1150)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2519; return kk_Unit;
  }
  {
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11269;
    kk_box_t _x_x5305;
    kk_ref_t _x_x5306 = kk_ref_dup(options, _ctx); /*local-var<24443,list<(string, string)>>*/
    _x_x5305 = kk_ref_get(_x_x5306,kk_context()); /*10000*/
    x_11269 = kk_std_core_types__list_unbox(_x_x5305, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11269, _ctx);
      kk_box_t _x_x5307 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11155_fun5308(name_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5307); return kk_Unit;
    }
    {
      kk_hml__types__mlift_hc__parse__loop_11154(name_0_0_0, options, remaining, x_11269, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11156_fun5311__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11156_fun5311(kk_function_t _fself, kk_box_t _b_x1155, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11156_fun5311(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11156_fun5311, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11156_fun5311(kk_function_t _fself, kk_box_t _b_x1155, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5312;
  kk_hml__types__cliflag _match_x2516 = kk_hml__types__cliflag_unbox(_b_x1155, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x5313 = kk_hml__types__as_Cliflag(_match_x2516, _ctx);
    kk_string_t _x_19 = _con_x5313->flag__name;
    kk_string_t _pat_0_40 = _con_x5313->flag__short;
    kk_string_t _pat_1_30 = _con_x5313->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2516, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2516, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2516, _ctx);
    }
    _x_x5312 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5312);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11156(kk_hml__types__cliflag f_0_0, kk_ref_t flags, kk_std_core_types__list _y_x10833, kk_context_t* _ctx) { /* forall<h> (f@0@0 : cliflag, flags : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_string_t _b_x1156_1158;
  kk_box_t _x_x5310 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11156_fun5311(_ctx), kk_hml__types__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1156_1158 = kk_string_unbox(_x_x5310); /*string*/
  kk_std_core_types__list _b_x1164_1166;
  kk_std_core_types__list _x_x5314 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1156_1158), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1164_1166 = kk_std_core_list_append(_y_x10833, _x_x5314, _ctx); /*list<string>*/
  kk_unit_t _brw_x2515 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1164_1166, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2515; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11158_fun5317__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11158_fun5317(kk_function_t _fself, kk_std_core_types__list _y_x10843, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11158_fun5317(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11158_fun5317__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11158_fun5317__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11158_fun5317, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11158_fun5317(kk_function_t _fself, kk_std_core_types__list _y_x10843, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11158_fun5317__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11158_fun5317__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1176_1178 = kk_std_core_list_drop(_y_x10843, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t _brw_x2513 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1176_1178, _ctx)),kk_context());
  kk_ref_drop(remaining, _ctx);
  _brw_x2513; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11158_fun5319__t {
  struct kk_function_s _base;
  kk_function_t next_11272;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11158_fun5319(kk_function_t _fself, kk_box_t _b_x1180, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11158_fun5319(kk_function_t next_11272, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11158_fun5319__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11158_fun5319__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11158_fun5319, kk_context());
  _self->next_11272 = next_11272;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11158_fun5319(kk_function_t _fself, kk_box_t _b_x1180, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11158_fun5319__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11158_fun5319__t*, _fself, _ctx);
  kk_function_t next_11272 = _self->next_11272; /* (list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_11272, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5320 = kk_Unit;
  kk_std_core_types__list _x_x5321 = kk_std_core_types__list_unbox(_b_x1180, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11272, (next_11272, _x_x5321, _ctx), _ctx);
  return kk_unit_box(_x_x5320);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11158(kk_ref_t remaining, kk_unit_t wild___4_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, wild_@4@0 : ()) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11271;
  kk_box_t _x_x5315;
  kk_ref_t _x_x5316 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
  _x_x5315 = kk_ref_get(_x_x5316,kk_context()); /*10000*/
  x_11271 = kk_std_core_types__list_unbox(_x_x5315, KK_OWNED, _ctx); /*list<string>*/
  kk_function_t next_11272 = kk_hml__types__new_mlift_hc__parse__loop_11158_fun5317(remaining, _ctx); /*(list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> ()*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11271, _ctx);
    kk_box_t _x_x5318 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11158_fun5319(next_11272, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5318); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_11272, (next_11272, x_11271, _ctx), _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11159_fun5323__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11159_fun5323(kk_function_t _fself, kk_box_t _b_x1184, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11159_fun5323(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11159_fun5323, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11159_fun5323(kk_function_t _fself, kk_box_t _b_x1184, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5324;
  kk_hml__types__clioption _match_x2511 = kk_hml__types__clioption_unbox(_b_x1184, KK_OWNED, _ctx); /*hml_types/clioption*/;
  {
    struct kk_hml__types_Clioption* _con_x5325 = kk_hml__types__as_Clioption(_match_x2511, _ctx);
    kk_string_t _x_22 = _con_x5325->opt__name;
    kk_string_t _pat_0_43 = _con_x5325->opt__short;
    kk_string_t _pat_1_33 = _con_x5325->opt__help;
    kk_string_t _pat_2_16 = _con_x5325->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2511, _ctx)) {
      kk_string_drop(_pat_2_16, _ctx);
      kk_string_drop(_pat_1_33, _ctx);
      kk_string_drop(_pat_0_43, _ctx);
      kk_datatype_ptr_free(_match_x2511, _ctx);
    }
    else {
      kk_string_dup(_x_22, _ctx);
      kk_datatype_ptr_decref(_match_x2511, _ctx);
    }
    _x_x5324 = _x_22; /*string*/
  }
  return kk_string_box(_x_x5324);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11159_fun5330__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11159_fun5330(kk_function_t _fself, kk_box_t _b_x1201, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11159_fun5330(kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11159_fun5330__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11159_fun5330__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11159_fun5330, kk_context());
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11159_fun5330(kk_function_t _fself, kk_box_t _b_x1201, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11159_fun5330__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11159_fun5330__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_unit_t wild___4_0_1203 = kk_Unit;
  kk_unit_unbox(_b_x1201);
  kk_unit_t _x_x5331 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11158(remaining, wild___4_0_1203, _ctx);
  return kk_unit_box(_x_x5331);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11159(kk_std_core_types__list _y_x10837, kk_hml__types__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t _y_x10841, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_string_t _b_x1185_1191;
  kk_box_t _x_x5322 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11159_fun5323(_ctx), kk_hml__types__clioption_box(o_0_0, _ctx), _ctx); /*10001*/
  _b_x1185_1191 = kk_string_unbox(_x_x5322); /*string*/
  kk_std_core_types__list _b_x1197_1199;
  kk_std_core_types__list _x_x5326;
  kk_box_t _x_x5327;
  kk_std_core_types__tuple2 _x_x5328 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x1185_1191), kk_string_box(_y_x10841), _ctx); /*(10037, 10038)*/
  _x_x5327 = kk_std_core_types__tuple2_box(_x_x5328, _ctx); /*10021*/
  _x_x5326 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x5327, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1197_1199 = kk_std_core_list_append(_y_x10837, _x_x5326, _ctx); /*list<(string, string)>*/
  kk_unit_t x_11275 = kk_Unit;
  kk_unit_t _brw_x2510 = kk_Unit;
  kk_ref_set_borrow(options,(kk_std_core_types__list_box(_b_x1197_1199, _ctx)),kk_context());
  kk_ref_drop(options, _ctx);
  _brw_x2510;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5329 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11159_fun5330(remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5329); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11158(remaining, x_11275, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11160_fun5342__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11160_fun5342(kk_function_t _fself, kk_box_t _b_x1211, kk_box_t _b_x1212, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11160_fun5342(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11160_fun5342, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11160_fun5342(kk_function_t _fself, kk_box_t _b_x1211, kk_box_t _b_x1212, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5343;
  kk_std_core_types__maybe _match_x2508 = kk_std_core_types__maybe_unbox(_b_x1211, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2508, _ctx)) {
    kk_box_t _box_x1204 = _match_x2508._cons.Just.value;
    kk_string_t x_4 = kk_string_unbox(_box_x1204);
    kk_string_dup(x_4, _ctx);
    kk_std_core_types__maybe_drop(_match_x2508, _ctx);
    kk_box_drop(_b_x1212, _ctx);
    _x_x5343 = x_4; /*string*/
  }
  else {
    kk_string_t _b_x1205_1217;
    kk_string_t _x_x5344;
    kk_define_string_literal(static, _s_x5345, 22, "unexpected Nothing in ", _ctx)
    _x_x5344 = kk_string_dup(_s_x5345, _ctx); /*string*/
    kk_string_t _x_x5346 = kk_string_unbox(_b_x1212); /*string*/
    _b_x1205_1217 = kk_std_core_types__lp__plus__plus__rp_(_x_x5344, _x_x5346, _ctx); /*string*/
    kk_box_t _x_x5347 = kk_std_core_exn_throw(_b_x1205_1217, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5343 = kk_string_unbox(_x_x5347); /*string*/
  }
  return kk_string_box(_x_x5343);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11160_fun5349__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10837;
  kk_hml__types__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11160_fun5349(kk_function_t _fself, kk_box_t _b_x1222, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11160_fun5349(kk_std_core_types__list _y_x10837, kk_hml__types__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11160_fun5349__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11160_fun5349__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11160_fun5349, kk_context());
  _self->_y_x10837 = _y_x10837;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11160_fun5349(kk_function_t _fself, kk_box_t _b_x1222, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11160_fun5349__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11160_fun5349__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10837 = _self->_y_x10837; /* list<(string, string)> */
  kk_hml__types__clioption o_0_0 = _self->o_0_0; /* hml_types/clioption */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10837, _ctx);kk_hml__types__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_string_t _y_x10841_1224 = kk_string_unbox(_b_x1222); /*string*/;
  kk_unit_t _x_x5350 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11159(_y_x10837, o_0_0, options, remaining, _y_x10841_1224, _ctx);
  return kk_unit_box(_x_x5350);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11160(kk_std_core_types__list _y_x10837, kk_hml__types__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10840, kk_context_t* _ctx) { /* forall<h> (list<(string, string)>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_38_11082 = kk_std_core_list__index(_y_x10840, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_20_11083;
  kk_string_t _x_x5332;
  kk_define_string_literal(static, _s_x5333, 12, "hml_types.kk", _ctx)
  _x_x5332 = kk_string_dup(_s_x5333, _ctx); /*string*/
  kk_string_t _x_x5334;
  kk_string_t _x_x5335;
  kk_define_string_literal(static, _s_x5336, 1, "(", _ctx)
  _x_x5335 = kk_string_dup(_s_x5336, _ctx); /*string*/
  kk_string_t _x_x5337;
  kk_string_t _x_x5338 = kk_std_core_int_show(kk_integer_from_small(829), _ctx); /*string*/
  kk_string_t _x_x5339;
  kk_define_string_literal(static, _s_x5340, 1, ")", _ctx)
  _x_x5339 = kk_string_dup(_s_x5340, _ctx); /*string*/
  _x_x5337 = kk_std_core_types__lp__plus__plus__rp_(_x_x5338, _x_x5339, _ctx); /*string*/
  _x_x5334 = kk_std_core_types__lp__plus__plus__rp_(_x_x5335, _x_x5337, _ctx); /*string*/
  _x_x2_20_11083 = kk_std_core_types__lp__plus__plus__rp_(_x_x5332, _x_x5334, _ctx); /*string*/
  kk_ssize_t _b_x1207_1213 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11277;
  kk_box_t _x_x5341 = kk_std_core_hnd__open_at2(_b_x1207_1213, kk_hml__types__new_mlift_hc__parse__loop_11160_fun5342(_ctx), kk_std_core_types__maybe_box(_x_x1_38_11082, _ctx), kk_string_box(_x_x2_20_11083), _ctx); /*10002*/
  x_11277 = kk_string_unbox(_x_x5341); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11277, _ctx);
    kk_box_t _x_x5348 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11160_fun5349(_y_x10837, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5348); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11159(_y_x10837, o_0_0, options, remaining, x_11277, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11161_fun5354__t {
  struct kk_function_s _base;
  kk_std_core_types__list _y_x10837;
  kk_hml__types__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11161_fun5354(kk_function_t _fself, kk_box_t _b_x1230, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11161_fun5354(kk_std_core_types__list _y_x10837, kk_hml__types__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11161_fun5354__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11161_fun5354__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11161_fun5354, kk_context());
  _self->_y_x10837 = _y_x10837;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11161_fun5354(kk_function_t _fself, kk_box_t _b_x1230, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11161_fun5354__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11161_fun5354__t*, _fself, _ctx);
  kk_std_core_types__list _y_x10837 = _self->_y_x10837; /* list<(string, string)> */
  kk_hml__types__clioption o_0_0 = _self->o_0_0; /* hml_types/clioption */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(_y_x10837, _ctx);kk_hml__types__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10840_1232 = kk_std_core_types__list_unbox(_b_x1230, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5355 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11160(_y_x10837, o_0_0, options, remaining, _y_x10840_1232, _ctx);
  return kk_unit_box(_x_x5355);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11161(kk_hml__types__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_std_core_types__list _y_x10837, kk_context_t* _ctx) { /* forall<h> (o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, list<(string, string)>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list x_11279;
  kk_box_t _x_x5351;
  kk_ref_t _x_x5352 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
  _x_x5351 = kk_ref_get(_x_x5352,kk_context()); /*10000*/
  x_11279 = kk_std_core_types__list_unbox(_x_x5351, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11279, _ctx);
    kk_box_t _x_x5353 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11161_fun5354(_y_x10837, o_0_0, options, remaining, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5353); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11160(_y_x10837, o_0_0, options, remaining, x_11279, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11162_fun5364__t {
  struct kk_function_s _base;
  kk_hml__types__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11162_fun5364(kk_function_t _fself, kk_box_t _b_x1240, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11162_fun5364(kk_hml__types__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11162_fun5364__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11162_fun5364__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11162_fun5364, kk_context());
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11162_fun5364(kk_function_t _fself, kk_box_t _b_x1240, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11162_fun5364__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11162_fun5364__t*, _fself, _ctx);
  kk_hml__types__clioption o_0_0 = _self->o_0_0; /* hml_types/clioption */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_hml__types__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10837_1244 = kk_std_core_types__list_unbox(_b_x1240, KK_OWNED, _ctx); /*list<(string, string)>*/;
  kk_unit_t _x_x5365 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11161(o_0_0, options, remaining, _y_x10837_1244, _ctx);
  return kk_unit_box(_x_x5365);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11162(kk_ref_t error, kk_hml__types__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_std_core_types__list _y_x10835, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, o@0@0 : clioption, options : local-var<h,list<(string, string)>>, remaining : local-var<h,list<string>>, s@0@0 : string, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2501;
  kk_integer_t _brw_x2504 = kk_std_core_list__lift_length_6003(_y_x10835, kk_integer_from_small(0), _ctx); /*int*/;
  bool _brw_x2505 = kk_integer_eq_borrow(_brw_x2504,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x2504, _ctx);
  _match_x2501 = _brw_x2505; /*bool*/
  if (_match_x2501) {
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(options, _ctx);
    kk_datatype_ptr_dropn(o_0_0, (KK_I32(4)), _ctx);
    kk_string_t _b_x1234_1242;
    kk_string_t _x_x5356;
    kk_define_string_literal(static, _s_x5357, 8, "option -", _ctx)
    _x_x5356 = kk_string_dup(_s_x5357, _ctx); /*string*/
    kk_string_t _x_x5358;
    kk_string_t _x_x5359;
    kk_define_string_literal(static, _s_x5360, 17, " requires a value", _ctx)
    _x_x5359 = kk_string_dup(_s_x5360, _ctx); /*string*/
    _x_x5358 = kk_std_core_types__lp__plus__plus__rp_(s_0_0, _x_x5359, _ctx); /*string*/
    _b_x1234_1242 = kk_std_core_types__lp__plus__plus__rp_(_x_x5356, _x_x5358, _ctx); /*string*/
    kk_unit_t _brw_x2503 = kk_Unit;
    kk_ref_set_borrow(error,(kk_string_box(_b_x1234_1242)),kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2503; return kk_Unit;
  }
  {
    kk_string_drop(s_0_0, _ctx);
    kk_ref_drop(error, _ctx);
    kk_std_core_types__list x_11281;
    kk_box_t _x_x5361;
    kk_ref_t _x_x5362 = kk_ref_dup(options, _ctx); /*local-var<24443,list<(string, string)>>*/
    _x_x5361 = kk_ref_get(_x_x5362,kk_context()); /*10000*/
    x_11281 = kk_std_core_types__list_unbox(_x_x5361, KK_OWNED, _ctx); /*list<(string, string)>*/
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_11281, _ctx);
      kk_box_t _x_x5363 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11162_fun5364(o_0_0, options, remaining, _ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5363); return kk_Unit;
    }
    {
      kk_hml__types__mlift_hc__parse__loop_11161(o_0_0, options, remaining, x_11281, _ctx); return kk_Unit;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11163_fun5367__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11163_fun5367(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11163_fun5367(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11163_fun5367, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11163_fun5367(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_hnd__ev ev_11283 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<hml_types/hica-brk>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x5368 = kk_std_core_hnd__as_Ev(ev_11283, _ctx);
    kk_box_t _box_x1245 = _con_x5368->hnd;
    int32_t m = _con_x5368->marker;
    kk_hml__types__hica_brk h = kk_hml__types__hica_brk_unbox(_box_x1245, KK_BORROWED, _ctx);
    kk_hml__types__hica_brk_dup(h, _ctx);
    {
      struct kk_hml__types__Hnd_hica_brk* _con_x5369 = kk_hml__types__as_Hnd_hica_brk(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x5369->_cfc;
      kk_std_core_hnd__clause0 _ctl_hica_break = _con_x5369->_ctl_hica_break;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_hica_break, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x1248 = _ctl_hica_break.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x1248, (_fun_unbox_x1248, m, ev_11283, _ctx), _ctx);
      }
    }
  }
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11163(kk_unit_t wild___6_0, kk_context_t* _ctx) { /* forall<h> (wild_@6@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_ssize_t _b_x1251_1253 = (KK_IZ(1)); /*hnd/ev-index*/;
  kk_box_t _x_x5366 = kk_std_core_hnd__open_at0(_b_x1251_1253, kk_hml__types__new_mlift_hc__parse__loop_11163_fun5367(_ctx), _ctx); /*10000*/
  kk_unit_unbox(_x_x5366); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11164_fun5371__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11164_fun5371(kk_function_t _fself, kk_box_t _b_x1260, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11164_fun5371(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11164_fun5371, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11164_fun5371(kk_function_t _fself, kk_box_t _b_x1260, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___6_0_1262 = kk_Unit;
  kk_unit_unbox(_b_x1260);
  kk_unit_t _x_x5372 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11163(wild___6_0_1262, _ctx);
  return kk_unit_box(_x_x5372);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11164(kk_ref_t sub__args, kk_std_core_types__list _y_x10850, kk_context_t* _ctx) { /* forall<h> (sub_args : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_unit_t x_11285 = kk_Unit;
  kk_unit_t _brw_x2500 = kk_Unit;
  kk_ref_set_borrow(sub__args,(kk_std_core_types__list_box(_y_x10850, _ctx)),kk_context());
  kk_ref_drop(sub__args, _ctx);
  _brw_x2500;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5370 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11164_fun5371(_ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5370); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11163(x_11285, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11165_fun5375__t {
  struct kk_function_s _base;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11165_fun5375(kk_function_t _fself, kk_box_t _b_x1268, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11165_fun5375(kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11165_fun5375__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11165_fun5375__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11165_fun5375, kk_context());
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11165_fun5375(kk_function_t _fself, kk_box_t _b_x1268, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11165_fun5375__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11165_fun5375__t*, _fself, _ctx);
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10850_1270 = kk_std_core_types__list_unbox(_b_x1268, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5376 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11164(sub__args, _y_x10850_1270, _ctx);
  return kk_unit_box(_x_x5376);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11165(kk_ref_t remaining, kk_ref_t sub__args, kk_unit_t wild___5_0, kk_context_t* _ctx) { /* forall<h> (remaining : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, wild_@5@0 : ()) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list x_11287;
  kk_box_t _x_x5373 = kk_ref_get(remaining,kk_context()); /*10000*/
  x_11287 = kk_std_core_types__list_unbox(_x_x5373, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11287, _ctx);
    kk_box_t _x_x5374 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11165_fun5375(sub__args, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5374); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11164(sub__args, x_11287, _ctx); return kk_Unit;
  }
}
 
// monadic lift

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11166(kk_string_t a, kk_ref_t positionals, kk_std_core_types__list _y_x10854, kk_context_t* _ctx) { /* forall<h> (a : string, positionals : local-var<h,list<string>>, list<string>) -> <local<h>,hica-brk,exn,div> () */ 
  kk_std_core_types__list _b_x1274_1276;
  kk_std_core_types__list _x_x5377 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1274_1276 = kk_std_core_list_append(_y_x10854, _x_x5377, _ctx); /*list<string>*/
  kk_unit_t _brw_x2497 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1274_1276, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2497; return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5385__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5385(kk_function_t _fself, kk_box_t _b_x1284, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5385(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5385, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5385(kk_function_t _fself, kk_box_t _b_x1284, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_1774 = kk_Unit;
  kk_unit_unbox(_b_x1284);
  kk_unit_t _x_x5386 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11122(wild___0_1774, _ctx);
  return kk_unit_box(_x_x5386);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5394__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5394(kk_function_t _fself, kk_box_t _b_x1290, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5394(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5394, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5394(kk_function_t _fself, kk_box_t _b_x1290, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___0_0_1775 = kk_Unit;
  kk_unit_unbox(_b_x1290);
  kk_unit_t _x_x5395 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11123(wild___0_0_1775, _ctx);
  return kk_unit_box(_x_x5395);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5403__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5403(kk_function_t _fself, kk_box_t _b_x1296, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5403(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5403, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5403(kk_function_t _fself, kk_box_t _b_x1296, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_unit_t wild___1_1776 = kk_Unit;
  kk_unit_unbox(_b_x1296);
  kk_unit_t _x_x5404 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11124(wild___1_1776, _ctx);
  return kk_unit_box(_x_x5404);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5411__t {
  struct kk_function_s _base;
  kk_ref_t positionals;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5411(kk_function_t _fself, kk_box_t _b_x1302, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5411(kk_ref_t positionals, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5411__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5411__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5411, kk_context());
  _self->positionals = positionals;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5411(kk_function_t _fself, kk_box_t _b_x1302, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5411__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5411__t*, _fself, _ctx);
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10760_1777 = kk_std_core_types__list_unbox(_b_x1302, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5412 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11127(positionals, remaining, _y_x10760_1777, _ctx);
  return kk_unit_box(_x_x5412);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5417__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5417(kk_function_t _fself, kk_box_t _b_x1306, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5417(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5417, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5417(kk_function_t _fself, kk_box_t _b_x1306, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5418;
  kk_std_core_types__maybe maybe_1795 = kk_std_core_types__maybe_unbox(_b_x1306, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1795, _ctx)) {
    kk_box_t _box_x1303 = maybe_1795._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1795, _ctx);
    _x_x5418 = true; /*bool*/
  }
  else {
    _x_x5418 = false; /*bool*/
  }
  return kk_bool_box(_x_x5418);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5423__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5423(kk_function_t _fself, kk_box_t _b_x1311, kk_box_t _b_x1312, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5423(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5423, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5423(kk_function_t _fself, kk_box_t _b_x1311, kk_box_t _b_x1312, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_0_10705;
  kk_string_t _x_x5424;
  kk_box_t _x_x5425 = kk_box_dup(_b_x1311, _ctx); /*10000*/
  _x_x5424 = kk_string_unbox(_x_x5425); /*string*/
  kk_string_t _x_x5426;
  kk_box_t _x_x5427 = kk_box_dup(_b_x1312, _ctx); /*10001*/
  _x_x5426 = kk_string_unbox(_x_x5427); /*string*/
  maybe_0_10705 = kk_std_core_sslice_starts_with(_x_x5424, _x_x5426, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5428;
  if (kk_std_core_types__is_Just(maybe_0_10705, _ctx)) {
    kk_box_t _box_x1307 = maybe_0_10705._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_0_10705, _ctx);
    kk_std_core_types__list _x_x5429;
    kk_std_core_types__list _x_x5430;
    kk_string_t _x_x5431 = kk_string_unbox(_b_x1311); /*string*/
    _x_x5430 = kk_std_core_string_list(_x_x5431, _ctx); /*list<char>*/
    kk_integer_t _x_x5432;
    kk_string_t _x_x5433 = kk_string_unbox(_b_x1312); /*string*/
    _x_x5432 = kk_std_core_string_chars_fs_count(_x_x5433, _ctx); /*int*/
    _x_x5429 = kk_std_core_list_drop(_x_x5430, _x_x5432, _ctx); /*list<10001>*/
    _x_x5428 = kk_std_core_string_listchar_fs_string(_x_x5429, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1312, _ctx);
    _x_x5428 = kk_string_unbox(_b_x1311); /*string*/
  }
  return kk_string_box(_x_x5428);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5441__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5441(kk_function_t _fself, kk_box_t _b_x1320, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5441(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5441, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5441(kk_function_t _fself, kk_box_t _b_x1320, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5442;
  kk_char_t _x_x5443 = kk_char_unbox(_b_x1320, KK_OWNED, _ctx); /*char*/
  _x_x5442 = kk_std_core_string_char_fs_string(_x_x5443, _ctx); /*string*/
  return kk_string_box(_x_x5442);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5445__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5445(kk_function_t _fself, kk_box_t _b_x1324, kk_box_t _b_x1325, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5445(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5445, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5445(kk_function_t _fself, kk_box_t _b_x1324, kk_box_t _b_x1325, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_vector_t v_10011;
  kk_string_t _x_x5446 = kk_string_unbox(_b_x1324); /*string*/
  kk_string_t _x_x5447 = kk_string_unbox(_b_x1325); /*string*/
  v_10011 = kk_string_splitv(_x_x5446,_x_x5447,kk_context()); /*vector<string>*/
  kk_std_core_types__list _x_x5448 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10000>*/
  return kk_std_core_types__list_box(_x_x5448, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5453__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t options;
  kk_hml__types__clispec spec;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5453(kk_function_t _fself, kk_box_t _b_x1334, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5453(kk_ref_t error, kk_ref_t options, kk_hml__types__clispec spec, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5453__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5453__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5453, kk_context());
  _self->error = error;
  _self->options = options;
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5453(kk_function_t _fself, kk_box_t _b_x1334, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5453__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5453__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<24443,string> */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_hml__types__clispec spec = _self->spec; /* hml_types/clispec */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(options, _ctx);kk_hml__types__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list _c_x10766_1778 = kk_std_core_types__list_unbox(_b_x1334, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5454 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11130(error, options, spec, _c_x10766_1778, _ctx);
  return kk_unit_box(_x_x5454);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5459__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5459(kk_function_t _fself, kk_box_t _b_x1338, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5459(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5459, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5459(kk_function_t _fself, kk_box_t _b_x1338, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5460;
  kk_std_core_types__maybe maybe_1_1796 = kk_std_core_types__maybe_unbox(_b_x1338, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_1_1796, _ctx)) {
    kk_box_t _box_x1335 = maybe_1_1796._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_1_1796, _ctx);
    _x_x5460 = true; /*bool*/
  }
  else {
    _x_x5460 = false; /*bool*/
  }
  return kk_bool_box(_x_x5460);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5462__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5462(kk_function_t _fself, kk_box_t _b_x1343, kk_box_t _b_x1344, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5462(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5462, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5462(kk_function_t _fself, kk_box_t _b_x1343, kk_box_t _b_x1344, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_2_10707;
  kk_string_t _x_x5463;
  kk_box_t _x_x5464 = kk_box_dup(_b_x1343, _ctx); /*10000*/
  _x_x5463 = kk_string_unbox(_x_x5464); /*string*/
  kk_string_t _x_x5465;
  kk_box_t _x_x5466 = kk_box_dup(_b_x1344, _ctx); /*10001*/
  _x_x5465 = kk_string_unbox(_x_x5466); /*string*/
  maybe_2_10707 = kk_std_core_sslice_starts_with(_x_x5463, _x_x5465, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5467;
  if (kk_std_core_types__is_Just(maybe_2_10707, _ctx)) {
    kk_box_t _box_x1339 = maybe_2_10707._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_2_10707, _ctx);
    kk_std_core_types__list _x_x5468;
    kk_std_core_types__list _x_x5469;
    kk_string_t _x_x5470 = kk_string_unbox(_b_x1343); /*string*/
    _x_x5469 = kk_std_core_string_list(_x_x5470, _ctx); /*list<char>*/
    kk_integer_t _x_x5471;
    kk_string_t _x_x5472 = kk_string_unbox(_b_x1344); /*string*/
    _x_x5471 = kk_std_core_string_chars_fs_count(_x_x5472, _ctx); /*int*/
    _x_x5468 = kk_std_core_list_drop(_x_x5469, _x_x5471, _ctx); /*list<10001>*/
    _x_x5467 = kk_std_core_string_listchar_fs_string(_x_x5468, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1344, _ctx);
    _x_x5467 = kk_string_unbox(_b_x1343); /*string*/
  }
  return kk_string_box(_x_x5467);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5477__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5477(kk_function_t _fself, kk_box_t _b_x1352, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5477(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5477, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5477(kk_function_t _fself, kk_box_t _b_x1352, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5478;
  kk_hml__types__clispec _match_x2485 = kk_hml__types__clispec_unbox(_b_x1352, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5479 = kk_hml__types__as_Clispec(_match_x2485, _ctx);
    kk_string_t _pat_0_11 = _con_x5479->app__name;
    kk_string_t _pat_1_8 = _con_x5479->app__version;
    kk_string_t _pat_2_2 = _con_x5479->app__about;
    kk_std_core_types__list _x_2 = _con_x5479->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x5479->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x5479->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5479->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2485, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_string_drop(_pat_2_2, _ctx);
      kk_string_drop(_pat_1_8, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2485, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2485, _ctx);
    }
    _x_x5478 = _x_2; /*list<hml_types/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5478, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5483__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5483(kk_function_t _fself, kk_box_t _b_x1362, kk_box_t _b_x1363, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5483(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5483, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5485__t {
  struct kk_function_s _base;
  kk_string_t name_1_1798;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5485(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5485(kk_string_t name_1_1798, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5485__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5485__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5485, kk_context());
  _self->name_1_1798 = name_1_1798;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5485(kk_function_t _fself, kk_box_t _b_x1358, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5485__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5485__t*, _fself, _ctx);
  kk_string_t name_1_1798 = _self->name_1_1798; /* string */
  kk_drop_match(_self, {kk_string_dup(name_1_1798, _ctx);}, {}, _ctx)
  kk_string_t _x_x5486;
  kk_hml__types__cliflag _match_x2484 = kk_hml__types__cliflag_unbox(_b_x1358, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x5487 = kk_hml__types__as_Cliflag(_match_x2484, _ctx);
    kk_string_t _x_1 = _con_x5487->flag__name;
    kk_string_t _pat_0_10 = _con_x5487->flag__short;
    kk_string_t _pat_1_7 = _con_x5487->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2484, _ctx)) {
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_10, _ctx);
      kk_datatype_ptr_free(_match_x2484, _ctx);
    }
    else {
      kk_string_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2484, _ctx);
    }
    _x_x5486 = _x_1; /*string*/
  }
  return kk_string_is_eq(_x_x5486,name_1_1798,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5483(kk_function_t _fself, kk_box_t _b_x1362, kk_box_t _b_x1363, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5484;
  kk_std_core_types__list flags_0_1797 = kk_std_core_types__list_unbox(_b_x1362, KK_OWNED, _ctx); /*list<hml_types/cliflag>*/;
  kk_string_t name_1_1798 = kk_string_unbox(_b_x1363); /*string*/;
  _x_x5484 = kk_std_core_list_find(flags_0_1797, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5485(name_1_1798, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5484, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5493__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5493(kk_function_t _fself, kk_std_core_types__list _y_x10774, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5493(kk_ref_t flags, kk_string_t name_0_0, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5493__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5493__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5493, kk_context());
  _self->flags = flags;
  _self->name_0_0 = name_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5493(kk_function_t _fself, kk_std_core_types__list _y_x10774, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5493__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5493__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<24443,list<string>> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1372_1374;
  kk_std_core_types__list _x_x5494 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1372_1374 = kk_std_core_list_append(_y_x10774, _x_x5494, _ctx); /*list<string>*/
  kk_unit_t _brw_x2483 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1372_1374, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2483; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5496__t {
  struct kk_function_s _base;
  kk_function_t next_4_11300;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5496(kk_function_t _fself, kk_box_t _b_x1378, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5496(kk_function_t next_4_11300, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5496__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5496__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5496, kk_context());
  _self->next_4_11300 = next_4_11300;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5496(kk_function_t _fself, kk_box_t _b_x1378, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5496__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5496__t*, _fself, _ctx);
  kk_function_t next_4_11300 = _self->next_4_11300; /* (list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_4_11300, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5497 = kk_Unit;
  kk_std_core_types__list _x_x5498 = kk_std_core_types__list_unbox(_b_x1378, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11300, (next_4_11300, _x_x5498, _ctx), _ctx);
  return kk_unit_box(_x_x5497);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5500__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5500(kk_function_t _fself, kk_box_t _b_x1381, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5500(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5500, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5500(kk_function_t _fself, kk_box_t _b_x1381, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5501;
  kk_hml__types__clispec _match_x2481 = kk_hml__types__clispec_unbox(_b_x1381, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5502 = kk_hml__types__as_Clispec(_match_x2481, _ctx);
    kk_string_t _pat_0_13 = _con_x5502->app__name;
    kk_string_t _pat_1_10 = _con_x5502->app__version;
    kk_string_t _pat_2_4 = _con_x5502->app__about;
    kk_std_core_types__list _pat_3_2 = _con_x5502->app__flags;
    kk_std_core_types__list _x_4 = _con_x5502->app__options;
    kk_std_core_types__list _pat_4_2 = _con_x5502->app__args;
    kk_std_core_types__list _pat_5_2 = _con_x5502->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2481, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_std_core_types__list_drop(_pat_3_2, _ctx);
      kk_string_drop(_pat_2_4, _ctx);
      kk_string_drop(_pat_1_10, _ctx);
      kk_string_drop(_pat_0_13, _ctx);
      kk_datatype_ptr_free(_match_x2481, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2481, _ctx);
    }
    _x_x5501 = _x_4; /*list<hml_types/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5501, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5504__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5504(kk_function_t _fself, kk_box_t _b_x1391, kk_box_t _b_x1392, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5504(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5504, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5506__t {
  struct kk_function_s _base;
  kk_string_t name_2_1800;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5506(kk_function_t _fself, kk_box_t _b_x1387, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5506(kk_string_t name_2_1800, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5506__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5506__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5506, kk_context());
  _self->name_2_1800 = name_2_1800;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5506(kk_function_t _fself, kk_box_t _b_x1387, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5506__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5506__t*, _fself, _ctx);
  kk_string_t name_2_1800 = _self->name_2_1800; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2_1800, _ctx);}, {}, _ctx)
  kk_string_t _x_x5507;
  kk_hml__types__clioption _match_x2480 = kk_hml__types__clioption_unbox(_b_x1387, KK_OWNED, _ctx); /*hml_types/clioption*/;
  {
    struct kk_hml__types_Clioption* _con_x5508 = kk_hml__types__as_Clioption(_match_x2480, _ctx);
    kk_string_t _x_3 = _con_x5508->opt__name;
    kk_string_t _pat_0_12 = _con_x5508->opt__short;
    kk_string_t _pat_1_9 = _con_x5508->opt__help;
    kk_string_t _pat_2_3 = _con_x5508->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2480, _ctx)) {
      kk_string_drop(_pat_2_3, _ctx);
      kk_string_drop(_pat_1_9, _ctx);
      kk_string_drop(_pat_0_12, _ctx);
      kk_datatype_ptr_free(_match_x2480, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2480, _ctx);
    }
    _x_x5507 = _x_3; /*string*/
  }
  return kk_string_is_eq(_x_x5507,name_2_1800,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5504(kk_function_t _fself, kk_box_t _b_x1391, kk_box_t _b_x1392, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5505;
  kk_std_core_types__list options_1_1799 = kk_std_core_types__list_unbox(_b_x1391, KK_OWNED, _ctx); /*list<hml_types/clioption>*/;
  kk_string_t name_2_1800 = kk_string_unbox(_b_x1392); /*string*/;
  _x_x5505 = kk_std_core_list_find(options_1_1799, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5506(name_2_1800, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5505, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5515__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5515(kk_function_t _fself, kk_box_t _b_x1399, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5515(kk_ref_t error, kk_string_t name_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5515__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5515__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5515, kk_context());
  _self->error = error;
  _self->name_0_0 = name_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5515(kk_function_t _fself, kk_box_t _b_x1399, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5515__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5515__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<24443,string> */
  kk_string_t name_0_0 = _self->name_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10776_1781 = kk_std_core_types__list_unbox(_b_x1399, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5516 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11137(error, name_0_0, options, remaining, _y_x10776_1781, _ctx);
  return kk_unit_box(_x_x5516);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5523__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5523(kk_function_t _fself, kk_box_t _b_x1405, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5523(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5523, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5523(kk_function_t _fself, kk_box_t _b_x1405, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5524;
  kk_std_core_types__maybe maybe_3_1801 = kk_std_core_types__maybe_unbox(_b_x1405, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_3_1801, _ctx)) {
    kk_box_t _box_x1402 = maybe_3_1801._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_3_1801, _ctx);
    _x_x5524 = true; /*bool*/
  }
  else {
    _x_x5524 = false; /*bool*/
  }
  return kk_bool_box(_x_x5524);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5526__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5526(kk_function_t _fself, kk_box_t _b_x1410, kk_box_t _b_x1411, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5526(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5526, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5526(kk_function_t _fself, kk_box_t _b_x1410, kk_box_t _b_x1411, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_4_10710;
  kk_string_t _x_x5527;
  kk_box_t _x_x5528 = kk_box_dup(_b_x1410, _ctx); /*10000*/
  _x_x5527 = kk_string_unbox(_x_x5528); /*string*/
  kk_string_t _x_x5529;
  kk_box_t _x_x5530 = kk_box_dup(_b_x1411, _ctx); /*10001*/
  _x_x5529 = kk_string_unbox(_x_x5530); /*string*/
  maybe_4_10710 = kk_std_core_sslice_starts_with(_x_x5527, _x_x5529, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5531;
  if (kk_std_core_types__is_Just(maybe_4_10710, _ctx)) {
    kk_box_t _box_x1406 = maybe_4_10710._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_4_10710, _ctx);
    kk_std_core_types__list _x_x5532;
    kk_std_core_types__list _x_x5533;
    kk_string_t _x_x5534 = kk_string_unbox(_b_x1410); /*string*/
    _x_x5533 = kk_std_core_string_list(_x_x5534, _ctx); /*list<char>*/
    kk_integer_t _x_x5535;
    kk_string_t _x_x5536 = kk_string_unbox(_b_x1411); /*string*/
    _x_x5535 = kk_std_core_string_chars_fs_count(_x_x5536, _ctx); /*int*/
    _x_x5532 = kk_std_core_list_drop(_x_x5533, _x_x5535, _ctx); /*list<10001>*/
    _x_x5531 = kk_std_core_string_listchar_fs_string(_x_x5532, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1411, _ctx);
    _x_x5531 = kk_string_unbox(_b_x1410); /*string*/
  }
  return kk_string_box(_x_x5531);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5541__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5541(kk_function_t _fself, kk_box_t _b_x1419, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5541(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5541, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5541(kk_function_t _fself, kk_box_t _b_x1419, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5542;
  kk_hml__types__clispec _match_x2475 = kk_hml__types__clispec_unbox(_b_x1419, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5543 = kk_hml__types__as_Clispec(_match_x2475, _ctx);
    kk_string_t _pat_0_19 = _con_x5543->app__name;
    kk_string_t _pat_1_14 = _con_x5543->app__version;
    kk_string_t _pat_2_5 = _con_x5543->app__about;
    kk_std_core_types__list _x_6 = _con_x5543->app__flags;
    kk_std_core_types__list _pat_3_3 = _con_x5543->app__options;
    kk_std_core_types__list _pat_4_3 = _con_x5543->app__args;
    kk_std_core_types__list _pat_5_3 = _con_x5543->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2475, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_3, _ctx);
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_string_drop(_pat_2_5, _ctx);
      kk_string_drop(_pat_1_14, _ctx);
      kk_string_drop(_pat_0_19, _ctx);
      kk_datatype_ptr_free(_match_x2475, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2475, _ctx);
    }
    _x_x5542 = _x_6; /*list<hml_types/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5542, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5547__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5547(kk_function_t _fself, kk_box_t _b_x1429, kk_box_t _b_x1430, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5547(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5547, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5549__t {
  struct kk_function_s _base;
  kk_string_t s_6_1803;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5549(kk_function_t _fself, kk_box_t _b_x1425, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5549(kk_string_t s_6_1803, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5549__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5549__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5549, kk_context());
  _self->s_6_1803 = s_6_1803;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5549(kk_function_t _fself, kk_box_t _b_x1425, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5549__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5549__t*, _fself, _ctx);
  kk_string_t s_6_1803 = _self->s_6_1803; /* string */
  kk_drop_match(_self, {kk_string_dup(s_6_1803, _ctx);}, {}, _ctx)
  kk_string_t _x_x5550;
  kk_hml__types__cliflag _match_x2474 = kk_hml__types__cliflag_unbox(_b_x1425, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x5551 = kk_hml__types__as_Cliflag(_match_x2474, _ctx);
    kk_string_t _pat_0_18 = _con_x5551->flag__name;
    kk_string_t _x_5 = _con_x5551->flag__short;
    kk_string_t _pat_1_13 = _con_x5551->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2474, _ctx)) {
      kk_string_drop(_pat_1_13, _ctx);
      kk_string_drop(_pat_0_18, _ctx);
      kk_datatype_ptr_free(_match_x2474, _ctx);
    }
    else {
      kk_string_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2474, _ctx);
    }
    _x_x5550 = _x_5; /*string*/
  }
  return kk_string_is_eq(_x_x5550,s_6_1803,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5547(kk_function_t _fself, kk_box_t _b_x1429, kk_box_t _b_x1430, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5548;
  kk_std_core_types__list flags_1_0_1802 = kk_std_core_types__list_unbox(_b_x1429, KK_OWNED, _ctx); /*list<hml_types/cliflag>*/;
  kk_string_t s_6_1803 = kk_string_unbox(_b_x1430); /*string*/;
  _x_x5548 = kk_std_core_list_find(flags_1_0_1802, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5549(s_6_1803, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5548, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5557__t {
  struct kk_function_s _base;
  kk_hml__types__cliflag f_1;
  kk_ref_t flags;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5557(kk_function_t _fself, kk_std_core_types__list _y_x10790, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5557(kk_hml__types__cliflag f_1, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5557__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5557__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5557, kk_context());
  _self->f_1 = f_1;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5559__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5559(kk_function_t _fself, kk_box_t _b_x1438, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5559(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5559, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5559(kk_function_t _fself, kk_box_t _b_x1438, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5560;
  kk_hml__types__cliflag _match_x2473 = kk_hml__types__cliflag_unbox(_b_x1438, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x5561 = kk_hml__types__as_Cliflag(_match_x2473, _ctx);
    kk_string_t _x_7 = _con_x5561->flag__name;
    kk_string_t _pat_0_20 = _con_x5561->flag__short;
    kk_string_t _pat_1_15 = _con_x5561->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2473, _ctx)) {
      kk_string_drop(_pat_1_15, _ctx);
      kk_string_drop(_pat_0_20, _ctx);
      kk_datatype_ptr_free(_match_x2473, _ctx);
    }
    else {
      kk_string_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2473, _ctx);
    }
    _x_x5560 = _x_7; /*string*/
  }
  return kk_string_box(_x_x5560);
}
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5557(kk_function_t _fself, kk_std_core_types__list _y_x10790, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5557__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5557__t*, _fself, _ctx);
  kk_hml__types__cliflag f_1 = _self->f_1; /* hml_types/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_hml__types__cliflag_dup(f_1, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1439_1441;
  kk_box_t _x_x5558 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5559(_ctx), kk_hml__types__cliflag_box(f_1, _ctx), _ctx); /*10001*/
  _b_x1439_1441 = kk_string_unbox(_x_x5558); /*string*/
  kk_std_core_types__list _b_x1447_1449;
  kk_std_core_types__list _x_x5562 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1439_1441), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1447_1449 = kk_std_core_list_append(_y_x10790, _x_x5562, _ctx); /*list<string>*/
  kk_unit_t _brw_x2472 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1447_1449, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2472; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5564__t {
  struct kk_function_s _base;
  kk_function_t next_6_11307;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5564(kk_function_t _fself, kk_box_t _b_x1451, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5564(kk_function_t next_6_11307, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5564__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5564__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5564, kk_context());
  _self->next_6_11307 = next_6_11307;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5564(kk_function_t _fself, kk_box_t _b_x1451, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5564__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5564__t*, _fself, _ctx);
  kk_function_t next_6_11307 = _self->next_6_11307; /* (list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_6_11307, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5565 = kk_Unit;
  kk_std_core_types__list _x_x5566 = kk_std_core_types__list_unbox(_b_x1451, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11307, (next_6_11307, _x_x5566, _ctx), _ctx);
  return kk_unit_box(_x_x5565);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5568__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5568(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5568(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5568, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5568(kk_function_t _fself, kk_box_t _b_x1454, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5569;
  kk_hml__types__clispec _match_x2470 = kk_hml__types__clispec_unbox(_b_x1454, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5570 = kk_hml__types__as_Clispec(_match_x2470, _ctx);
    kk_string_t _pat_0_22 = _con_x5570->app__name;
    kk_string_t _pat_1_17 = _con_x5570->app__version;
    kk_string_t _pat_2_7 = _con_x5570->app__about;
    kk_std_core_types__list _pat_3_4 = _con_x5570->app__flags;
    kk_std_core_types__list _x_9 = _con_x5570->app__options;
    kk_std_core_types__list _pat_4_4 = _con_x5570->app__args;
    kk_std_core_types__list _pat_5_4 = _con_x5570->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2470, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_4, _ctx);
      kk_std_core_types__list_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_17, _ctx);
      kk_string_drop(_pat_0_22, _ctx);
      kk_datatype_ptr_free(_match_x2470, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2470, _ctx);
    }
    _x_x5569 = _x_9; /*list<hml_types/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5569, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5572__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5572(kk_function_t _fself, kk_box_t _b_x1464, kk_box_t _b_x1465, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5572(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5572, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5574__t {
  struct kk_function_s _base;
  kk_string_t s_7_1805;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5574(kk_function_t _fself, kk_box_t _b_x1460, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5574(kk_string_t s_7_1805, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5574__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5574__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5574, kk_context());
  _self->s_7_1805 = s_7_1805;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5574(kk_function_t _fself, kk_box_t _b_x1460, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5574__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5574__t*, _fself, _ctx);
  kk_string_t s_7_1805 = _self->s_7_1805; /* string */
  kk_drop_match(_self, {kk_string_dup(s_7_1805, _ctx);}, {}, _ctx)
  kk_string_t _x_x5575;
  kk_hml__types__clioption _match_x2469 = kk_hml__types__clioption_unbox(_b_x1460, KK_OWNED, _ctx); /*hml_types/clioption*/;
  {
    struct kk_hml__types_Clioption* _con_x5576 = kk_hml__types__as_Clioption(_match_x2469, _ctx);
    kk_string_t _pat_0_21 = _con_x5576->opt__name;
    kk_string_t _x_8 = _con_x5576->opt__short;
    kk_string_t _pat_1_16 = _con_x5576->opt__help;
    kk_string_t _pat_2_6 = _con_x5576->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2469, _ctx)) {
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_16, _ctx);
      kk_string_drop(_pat_0_21, _ctx);
      kk_datatype_ptr_free(_match_x2469, _ctx);
    }
    else {
      kk_string_dup(_x_8, _ctx);
      kk_datatype_ptr_decref(_match_x2469, _ctx);
    }
    _x_x5575 = _x_8; /*string*/
  }
  return kk_string_is_eq(_x_x5575,s_7_1805,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5572(kk_function_t _fself, kk_box_t _b_x1464, kk_box_t _b_x1465, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5573;
  kk_std_core_types__list options_2_1804 = kk_std_core_types__list_unbox(_b_x1464, KK_OWNED, _ctx); /*list<hml_types/clioption>*/;
  kk_string_t s_7_1805 = kk_string_unbox(_b_x1465); /*string*/;
  _x_x5573 = kk_std_core_list_find(options_2_1804, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5574(s_7_1805, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5573, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5583__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_hml__types__clioption o_2;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_5;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5583(kk_function_t _fself, kk_box_t _b_x1472, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5583(kk_ref_t error, kk_hml__types__clioption o_2, kk_ref_t options, kk_ref_t remaining, kk_string_t s_5, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5583__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5583__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5583, kk_context());
  _self->error = error;
  _self->o_2 = o_2;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_5 = s_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5583(kk_function_t _fself, kk_box_t _b_x1472, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5583__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5583__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<24443,string> */
  kk_hml__types__clioption o_2 = _self->o_2; /* hml_types/clioption */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_string_t s_5 = _self->s_5; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_hml__types__clioption_dup(o_2, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_5, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10792_1784 = kk_std_core_types__list_unbox(_b_x1472, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5584 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11144(error, o_2, options, remaining, s_5, _y_x10792_1784, _ctx);
  return kk_unit_box(_x_x5584);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5588__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5588(kk_function_t _fself, kk_box_t _b_x1477, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5588(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5588, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5588(kk_function_t _fself, kk_box_t _b_x1477, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5589;
  kk_hml__types__clispec _match_x2464 = kk_hml__types__clispec_unbox(_b_x1477, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5590 = kk_hml__types__as_Clispec(_match_x2464, _ctx);
    kk_string_t _pat_0_26 = _con_x5590->app__name;
    kk_string_t _pat_1_19 = _con_x5590->app__version;
    kk_string_t _pat_2_9 = _con_x5590->app__about;
    kk_std_core_types__list _pat_3_5 = _con_x5590->app__flags;
    kk_std_core_types__list _pat_4_5 = _con_x5590->app__options;
    kk_std_core_types__list _pat_5_5 = _con_x5590->app__args;
    kk_std_core_types__list _x_12 = _con_x5590->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2464, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_5, _ctx);
      kk_std_core_types__list_drop(_pat_4_5, _ctx);
      kk_std_core_types__list_drop(_pat_3_5, _ctx);
      kk_string_drop(_pat_2_9, _ctx);
      kk_string_drop(_pat_1_19, _ctx);
      kk_string_drop(_pat_0_26, _ctx);
      kk_datatype_ptr_free(_match_x2464, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_12, _ctx);
      kk_datatype_ptr_decref(_match_x2464, _ctx);
    }
    _x_x5589 = _x_12; /*list<(string, hml_types/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5589, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5592__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5592(kk_function_t _fself, kk_box_t _b_x1489, kk_box_t _b_x1490, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5592(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5592, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5594__t {
  struct kk_function_s _base;
  kk_string_t name_3_1807;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5594(kk_function_t _fself, kk_box_t _b_x1485, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5594(kk_string_t name_3_1807, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5594__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5594__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5594, kk_context());
  _self->name_3_1807 = name_3_1807;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5594(kk_function_t _fself, kk_box_t _b_x1485, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5594__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5594__t*, _fself, _ctx);
  kk_string_t name_3_1807 = _self->name_3_1807; /* string */
  kk_drop_match(_self, {kk_string_dup(name_3_1807, _ctx);}, {}, _ctx)
  kk_string_t _x_x5595;
  kk_std_core_types__tuple2 _match_x2463 = kk_std_core_types__tuple2_unbox(_b_x1485, KK_OWNED, _ctx); /*(string, hml_types/clispec)*/;
  {
    kk_box_t _box_x1481 = _match_x2463.fst;
    kk_box_t _box_x1482 = _match_x2463.snd;
    kk_string_t _x_11 = kk_string_unbox(_box_x1481);
    kk_string_dup(_x_11, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2463, _ctx);
    _x_x5595 = _x_11; /*string*/
  }
  return kk_string_is_eq(_x_x5595,name_3_1807,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5592(kk_function_t _fself, kk_box_t _b_x1489, kk_box_t _b_x1490, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5593;
  kk_std_core_types__list commands_1806 = kk_std_core_types__list_unbox(_b_x1489, KK_OWNED, _ctx); /*list<(string, hml_types/clispec)>*/;
  kk_string_t name_3_1807 = kk_string_unbox(_b_x1490); /*string*/;
  _x_x5593 = kk_std_core_list_find(commands_1806, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5594(name_3_1807, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5593, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5599__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5599(kk_function_t _fself, kk_box_t _b_x1497, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5599(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5599__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5599__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5599, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5599(kk_function_t _fself, kk_box_t _b_x1497, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5599__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5599__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_1786 = kk_Unit;
  kk_unit_unbox(_b_x1497);
  kk_unit_t _x_x5600 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11147(remaining, sub__args, wild___5_1786, _ctx);
  return kk_unit_box(_x_x5600);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5603__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5603(kk_function_t _fself, kk_std_core_types__list _y_x10811, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5603(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5603__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5603__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5603, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5603(kk_function_t _fself, kk_std_core_types__list _y_x10811, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5603__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5603__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1505_1507;
  kk_std_core_types__list _x_x5604 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1505_1507 = kk_std_core_list_append(_y_x10811, _x_x5604, _ctx); /*list<string>*/
  kk_unit_t _brw_x2460 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1505_1507, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2460; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5606__t {
  struct kk_function_s _base;
  kk_function_t next_9_11316;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5606(kk_function_t _fself, kk_box_t _b_x1511, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5606(kk_function_t next_9_11316, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5606__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5606__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5606, kk_context());
  _self->next_9_11316 = next_9_11316;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5606(kk_function_t _fself, kk_box_t _b_x1511, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5606__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5606__t*, _fself, _ctx);
  kk_function_t next_9_11316 = _self->next_9_11316; /* (list<string>) -> <local<24443>,hml_types/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_9_11316, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5607 = kk_Unit;
  kk_std_core_types__list _x_x5608 = kk_std_core_types__list_unbox(_b_x1511, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11316, (next_9_11316, _x_x5608, _ctx), _ctx);
  return kk_unit_box(_x_x5607);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5613__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5613(kk_function_t _fself, kk_box_t _b_x1515, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5613(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5613, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5613(kk_function_t _fself, kk_box_t _b_x1515, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5614;
  kk_std_core_types__maybe maybe_5_1808 = kk_std_core_types__maybe_unbox(_b_x1515, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_5_1808, _ctx)) {
    kk_box_t _box_x1512 = maybe_5_1808._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_5_1808, _ctx);
    _x_x5614 = true; /*bool*/
  }
  else {
    _x_x5614 = false; /*bool*/
  }
  return kk_bool_box(_x_x5614);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5616__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5616(kk_function_t _fself, kk_box_t _b_x1520, kk_box_t _b_x1521, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5616(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5616, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5616(kk_function_t _fself, kk_box_t _b_x1520, kk_box_t _b_x1521, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_6_10714;
  kk_string_t _x_x5617;
  kk_box_t _x_x5618 = kk_box_dup(_b_x1520, _ctx); /*10000*/
  _x_x5617 = kk_string_unbox(_x_x5618); /*string*/
  kk_string_t _x_x5619;
  kk_box_t _x_x5620 = kk_box_dup(_b_x1521, _ctx); /*10001*/
  _x_x5619 = kk_string_unbox(_x_x5620); /*string*/
  maybe_6_10714 = kk_std_core_sslice_starts_with(_x_x5617, _x_x5619, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5621;
  if (kk_std_core_types__is_Just(maybe_6_10714, _ctx)) {
    kk_box_t _box_x1516 = maybe_6_10714._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_6_10714, _ctx);
    kk_std_core_types__list _x_x5622;
    kk_std_core_types__list _x_x5623;
    kk_string_t _x_x5624 = kk_string_unbox(_b_x1520); /*string*/
    _x_x5623 = kk_std_core_string_list(_x_x5624, _ctx); /*list<char>*/
    kk_integer_t _x_x5625;
    kk_string_t _x_x5626 = kk_string_unbox(_b_x1521); /*string*/
    _x_x5625 = kk_std_core_string_chars_fs_count(_x_x5626, _ctx); /*int*/
    _x_x5622 = kk_std_core_list_drop(_x_x5623, _x_x5625, _ctx); /*list<10001>*/
    _x_x5621 = kk_std_core_string_listchar_fs_string(_x_x5622, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1521, _ctx);
    _x_x5621 = kk_string_unbox(_b_x1520); /*string*/
  }
  return kk_string_box(_x_x5621);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5631__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5631(kk_function_t _fself, kk_box_t _b_x1529, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5631(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5631, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5631(kk_function_t _fself, kk_box_t _b_x1529, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5632;
  kk_hml__types__clispec _match_x2454 = kk_hml__types__clispec_unbox(_b_x1529, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5633 = kk_hml__types__as_Clispec(_match_x2454, _ctx);
    kk_string_t _pat_0_31 = _con_x5633->app__name;
    kk_string_t _pat_1_23 = _con_x5633->app__version;
    kk_string_t _pat_2_10 = _con_x5633->app__about;
    kk_std_core_types__list _x_14 = _con_x5633->app__flags;
    kk_std_core_types__list _pat_3_6 = _con_x5633->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5633->app__args;
    kk_std_core_types__list _pat_5_6 = _con_x5633->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2454, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_6, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_10, _ctx);
      kk_string_drop(_pat_1_23, _ctx);
      kk_string_drop(_pat_0_31, _ctx);
      kk_datatype_ptr_free(_match_x2454, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_14, _ctx);
      kk_datatype_ptr_decref(_match_x2454, _ctx);
    }
    _x_x5632 = _x_14; /*list<hml_types/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5632, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5637__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5637(kk_function_t _fself, kk_box_t _b_x1539, kk_box_t _b_x1540, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5637(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5637, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5639__t {
  struct kk_function_s _base;
  kk_string_t name_4_1810;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5639(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5639(kk_string_t name_4_1810, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5639__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5639__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5639, kk_context());
  _self->name_4_1810 = name_4_1810;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5639(kk_function_t _fself, kk_box_t _b_x1535, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5639__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5639__t*, _fself, _ctx);
  kk_string_t name_4_1810 = _self->name_4_1810; /* string */
  kk_drop_match(_self, {kk_string_dup(name_4_1810, _ctx);}, {}, _ctx)
  kk_string_t _x_x5640;
  kk_hml__types__cliflag _match_x2453 = kk_hml__types__cliflag_unbox(_b_x1535, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x5641 = kk_hml__types__as_Cliflag(_match_x2453, _ctx);
    kk_string_t _x_13 = _con_x5641->flag__name;
    kk_string_t _pat_0_30 = _con_x5641->flag__short;
    kk_string_t _pat_1_22 = _con_x5641->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2453, _ctx)) {
      kk_string_drop(_pat_1_22, _ctx);
      kk_string_drop(_pat_0_30, _ctx);
      kk_datatype_ptr_free(_match_x2453, _ctx);
    }
    else {
      kk_string_dup(_x_13, _ctx);
      kk_datatype_ptr_decref(_match_x2453, _ctx);
    }
    _x_x5640 = _x_13; /*string*/
  }
  return kk_string_is_eq(_x_x5640,name_4_1810,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5637(kk_function_t _fself, kk_box_t _b_x1539, kk_box_t _b_x1540, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5638;
  kk_std_core_types__list flags_2_0_1809 = kk_std_core_types__list_unbox(_b_x1539, KK_OWNED, _ctx); /*list<hml_types/cliflag>*/;
  kk_string_t name_4_1810 = kk_string_unbox(_b_x1540); /*string*/;
  _x_x5638 = kk_std_core_list_find(flags_2_0_1809, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5639(name_4_1810, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5638, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5647__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_string_t name_0_0_0_0;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5647(kk_function_t _fself, kk_std_core_types__list _y_x10817, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5647(kk_ref_t flags, kk_string_t name_0_0_0_0, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5647__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5647__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5647, kk_context());
  _self->flags = flags;
  _self->name_0_0_0_0 = name_0_0_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5647(kk_function_t _fself, kk_std_core_types__list _y_x10817, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5647__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5647__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<24443,list<string>> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_string_dup(name_0_0_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1549_1551;
  kk_std_core_types__list _x_x5648 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(name_0_0_0_0), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1549_1551 = kk_std_core_list_append(_y_x10817, _x_x5648, _ctx); /*list<string>*/
  kk_unit_t _brw_x2452 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1549_1551, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2452; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5650__t {
  struct kk_function_s _base;
  kk_function_t next_10_11321;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5650(kk_function_t _fself, kk_box_t _b_x1555, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5650(kk_function_t next_10_11321, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5650__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5650__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5650, kk_context());
  _self->next_10_11321 = next_10_11321;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5650(kk_function_t _fself, kk_box_t _b_x1555, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5650__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5650__t*, _fself, _ctx);
  kk_function_t next_10_11321 = _self->next_10_11321; /* (list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_10_11321, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5651 = kk_Unit;
  kk_std_core_types__list _x_x5652 = kk_std_core_types__list_unbox(_b_x1555, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11321, (next_10_11321, _x_x5652, _ctx), _ctx);
  return kk_unit_box(_x_x5651);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5654__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5654(kk_function_t _fself, kk_box_t _b_x1558, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5654(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5654, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5654(kk_function_t _fself, kk_box_t _b_x1558, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5655;
  kk_hml__types__clispec _match_x2450 = kk_hml__types__clispec_unbox(_b_x1558, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5656 = kk_hml__types__as_Clispec(_match_x2450, _ctx);
    kk_string_t _pat_0_33 = _con_x5656->app__name;
    kk_string_t _pat_1_25 = _con_x5656->app__version;
    kk_string_t _pat_2_12 = _con_x5656->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5656->app__flags;
    kk_std_core_types__list _x_16 = _con_x5656->app__options;
    kk_std_core_types__list _pat_4_7 = _con_x5656->app__args;
    kk_std_core_types__list _pat_5_7 = _con_x5656->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2450, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_7, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_12, _ctx);
      kk_string_drop(_pat_1_25, _ctx);
      kk_string_drop(_pat_0_33, _ctx);
      kk_datatype_ptr_free(_match_x2450, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_16, _ctx);
      kk_datatype_ptr_decref(_match_x2450, _ctx);
    }
    _x_x5655 = _x_16; /*list<hml_types/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5655, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5658__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5658(kk_function_t _fself, kk_box_t _b_x1568, kk_box_t _b_x1569, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5658(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5658, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5660__t {
  struct kk_function_s _base;
  kk_string_t name_5_1812;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5660(kk_function_t _fself, kk_box_t _b_x1564, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5660(kk_string_t name_5_1812, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5660__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5660__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5660, kk_context());
  _self->name_5_1812 = name_5_1812;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5660(kk_function_t _fself, kk_box_t _b_x1564, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5660__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5660__t*, _fself, _ctx);
  kk_string_t name_5_1812 = _self->name_5_1812; /* string */
  kk_drop_match(_self, {kk_string_dup(name_5_1812, _ctx);}, {}, _ctx)
  kk_string_t _x_x5661;
  kk_hml__types__clioption _match_x2449 = kk_hml__types__clioption_unbox(_b_x1564, KK_OWNED, _ctx); /*hml_types/clioption*/;
  {
    struct kk_hml__types_Clioption* _con_x5662 = kk_hml__types__as_Clioption(_match_x2449, _ctx);
    kk_string_t _x_15 = _con_x5662->opt__name;
    kk_string_t _pat_0_32 = _con_x5662->opt__short;
    kk_string_t _pat_1_24 = _con_x5662->opt__help;
    kk_string_t _pat_2_11 = _con_x5662->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2449, _ctx)) {
      kk_string_drop(_pat_2_11, _ctx);
      kk_string_drop(_pat_1_24, _ctx);
      kk_string_drop(_pat_0_32, _ctx);
      kk_datatype_ptr_free(_match_x2449, _ctx);
    }
    else {
      kk_string_dup(_x_15, _ctx);
      kk_datatype_ptr_decref(_match_x2449, _ctx);
    }
    _x_x5661 = _x_15; /*string*/
  }
  return kk_string_is_eq(_x_x5661,name_5_1812,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5658(kk_function_t _fself, kk_box_t _b_x1568, kk_box_t _b_x1569, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5659;
  kk_std_core_types__list options_3_1811 = kk_std_core_types__list_unbox(_b_x1568, KK_OWNED, _ctx); /*list<hml_types/clioption>*/;
  kk_string_t name_5_1812 = kk_string_unbox(_b_x1569); /*string*/;
  _x_x5659 = kk_std_core_list_find(options_3_1811, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5660(name_5_1812, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5659, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5669__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_string_t name_0_0_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5669(kk_function_t _fself, kk_box_t _b_x1576, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5669(kk_ref_t error, kk_string_t name_0_0_0_0, kk_ref_t options, kk_ref_t remaining, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5669__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5669__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5669, kk_context());
  _self->error = error;
  _self->name_0_0_0_0 = name_0_0_0_0;
  _self->options = options;
  _self->remaining = remaining;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5669(kk_function_t _fself, kk_box_t _b_x1576, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5669__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5669__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<24443,string> */
  kk_string_t name_0_0_0_0 = _self->name_0_0_0_0; /* string */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_string_dup(name_0_0_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10819_1789 = kk_std_core_types__list_unbox(_b_x1576, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5670 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11155(error, name_0_0_0_0, options, remaining, _y_x10819_1789, _ctx);
  return kk_unit_box(_x_x5670);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5677__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5677(kk_function_t _fself, kk_box_t _b_x1582, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5677(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5677, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5677(kk_function_t _fself, kk_box_t _b_x1582, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5678;
  kk_std_core_types__maybe maybe_7_1813 = kk_std_core_types__maybe_unbox(_b_x1582, KK_OWNED, _ctx); /*maybe<sslice/sslice>*/;
  if (kk_std_core_types__is_Just(maybe_7_1813, _ctx)) {
    kk_box_t _box_x1579 = maybe_7_1813._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_7_1813, _ctx);
    _x_x5678 = true; /*bool*/
  }
  else {
    _x_x5678 = false; /*bool*/
  }
  return kk_bool_box(_x_x5678);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5680__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5680(kk_function_t _fself, kk_box_t _b_x1587, kk_box_t _b_x1588, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5680(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5680, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5680(kk_function_t _fself, kk_box_t _b_x1587, kk_box_t _b_x1588, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe maybe_8_10717;
  kk_string_t _x_x5681;
  kk_box_t _x_x5682 = kk_box_dup(_b_x1587, _ctx); /*10000*/
  _x_x5681 = kk_string_unbox(_x_x5682); /*string*/
  kk_string_t _x_x5683;
  kk_box_t _x_x5684 = kk_box_dup(_b_x1588, _ctx); /*10001*/
  _x_x5683 = kk_string_unbox(_x_x5684); /*string*/
  maybe_8_10717 = kk_std_core_sslice_starts_with(_x_x5681, _x_x5683, _ctx); /*maybe<sslice/sslice>*/
  kk_string_t _x_x5685;
  if (kk_std_core_types__is_Just(maybe_8_10717, _ctx)) {
    kk_box_t _box_x1583 = maybe_8_10717._cons.Just.value;
    kk_std_core_types__maybe_drop(maybe_8_10717, _ctx);
    kk_std_core_types__list _x_x5686;
    kk_std_core_types__list _x_x5687;
    kk_string_t _x_x5688 = kk_string_unbox(_b_x1587); /*string*/
    _x_x5687 = kk_std_core_string_list(_x_x5688, _ctx); /*list<char>*/
    kk_integer_t _x_x5689;
    kk_string_t _x_x5690 = kk_string_unbox(_b_x1588); /*string*/
    _x_x5689 = kk_std_core_string_chars_fs_count(_x_x5690, _ctx); /*int*/
    _x_x5686 = kk_std_core_list_drop(_x_x5687, _x_x5689, _ctx); /*list<10001>*/
    _x_x5685 = kk_std_core_string_listchar_fs_string(_x_x5686, _ctx); /*string*/
  }
  else {
    kk_box_drop(_b_x1588, _ctx);
    _x_x5685 = kk_string_unbox(_b_x1587); /*string*/
  }
  return kk_string_box(_x_x5685);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5695__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5695(kk_function_t _fself, kk_box_t _b_x1596, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5695(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5695, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5695(kk_function_t _fself, kk_box_t _b_x1596, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5696;
  kk_hml__types__clispec _match_x2444 = kk_hml__types__clispec_unbox(_b_x1596, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5697 = kk_hml__types__as_Clispec(_match_x2444, _ctx);
    kk_string_t _pat_0_39 = _con_x5697->app__name;
    kk_string_t _pat_1_29 = _con_x5697->app__version;
    kk_string_t _pat_2_13 = _con_x5697->app__about;
    kk_std_core_types__list _x_18 = _con_x5697->app__flags;
    kk_std_core_types__list _pat_3_8 = _con_x5697->app__options;
    kk_std_core_types__list _pat_4_8 = _con_x5697->app__args;
    kk_std_core_types__list _pat_5_8 = _con_x5697->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2444, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_8, _ctx);
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_std_core_types__list_drop(_pat_3_8, _ctx);
      kk_string_drop(_pat_2_13, _ctx);
      kk_string_drop(_pat_1_29, _ctx);
      kk_string_drop(_pat_0_39, _ctx);
      kk_datatype_ptr_free(_match_x2444, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_18, _ctx);
      kk_datatype_ptr_decref(_match_x2444, _ctx);
    }
    _x_x5696 = _x_18; /*list<hml_types/cliflag>*/
  }
  return kk_std_core_types__list_box(_x_x5696, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5701__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5701(kk_function_t _fself, kk_box_t _b_x1606, kk_box_t _b_x1607, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5701(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5701, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5703__t {
  struct kk_function_s _base;
  kk_string_t s_10_1815;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5703(kk_function_t _fself, kk_box_t _b_x1602, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5703(kk_string_t s_10_1815, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5703__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5703__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5703, kk_context());
  _self->s_10_1815 = s_10_1815;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5703(kk_function_t _fself, kk_box_t _b_x1602, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5703__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5703__t*, _fself, _ctx);
  kk_string_t s_10_1815 = _self->s_10_1815; /* string */
  kk_drop_match(_self, {kk_string_dup(s_10_1815, _ctx);}, {}, _ctx)
  kk_string_t _x_x5704;
  kk_hml__types__cliflag _match_x2443 = kk_hml__types__cliflag_unbox(_b_x1602, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x5705 = kk_hml__types__as_Cliflag(_match_x2443, _ctx);
    kk_string_t _pat_0_38 = _con_x5705->flag__name;
    kk_string_t _x_17 = _con_x5705->flag__short;
    kk_string_t _pat_1_28 = _con_x5705->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2443, _ctx)) {
      kk_string_drop(_pat_1_28, _ctx);
      kk_string_drop(_pat_0_38, _ctx);
      kk_datatype_ptr_free(_match_x2443, _ctx);
    }
    else {
      kk_string_dup(_x_17, _ctx);
      kk_datatype_ptr_decref(_match_x2443, _ctx);
    }
    _x_x5704 = _x_17; /*string*/
  }
  return kk_string_is_eq(_x_x5704,s_10_1815,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5701(kk_function_t _fself, kk_box_t _b_x1606, kk_box_t _b_x1607, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5702;
  kk_std_core_types__list flags_3_0_1814 = kk_std_core_types__list_unbox(_b_x1606, KK_OWNED, _ctx); /*list<hml_types/cliflag>*/;
  kk_string_t s_10_1815 = kk_string_unbox(_b_x1607); /*string*/;
  _x_x5702 = kk_std_core_list_find(flags_3_0_1814, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5703(s_10_1815, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5702, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5711__t {
  struct kk_function_s _base;
  kk_hml__types__cliflag f_0_0;
  kk_ref_t flags;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5711(kk_function_t _fself, kk_std_core_types__list _y_x10833, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5711(kk_hml__types__cliflag f_0_0, kk_ref_t flags, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5711__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5711__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5711, kk_context());
  _self->f_0_0 = f_0_0;
  _self->flags = flags;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5713__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5713(kk_function_t _fself, kk_box_t _b_x1615, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5713(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5713, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5713(kk_function_t _fself, kk_box_t _b_x1615, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5714;
  kk_hml__types__cliflag _match_x2442 = kk_hml__types__cliflag_unbox(_b_x1615, KK_OWNED, _ctx); /*hml_types/cliflag*/;
  {
    struct kk_hml__types_Cliflag* _con_x5715 = kk_hml__types__as_Cliflag(_match_x2442, _ctx);
    kk_string_t _x_19 = _con_x5715->flag__name;
    kk_string_t _pat_0_40 = _con_x5715->flag__short;
    kk_string_t _pat_1_30 = _con_x5715->flag__help;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2442, _ctx)) {
      kk_string_drop(_pat_1_30, _ctx);
      kk_string_drop(_pat_0_40, _ctx);
      kk_datatype_ptr_free(_match_x2442, _ctx);
    }
    else {
      kk_string_dup(_x_19, _ctx);
      kk_datatype_ptr_decref(_match_x2442, _ctx);
    }
    _x_x5714 = _x_19; /*string*/
  }
  return kk_string_box(_x_x5714);
}
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5711(kk_function_t _fself, kk_std_core_types__list _y_x10833, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5711__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5711__t*, _fself, _ctx);
  kk_hml__types__cliflag f_0_0 = _self->f_0_0; /* hml_types/cliflag */
  kk_ref_t flags = _self->flags; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_hml__types__cliflag_dup(f_0_0, _ctx);kk_ref_dup(flags, _ctx);}, {}, _ctx)
  kk_string_t _b_x1616_1618;
  kk_box_t _x_x5712 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5713(_ctx), kk_hml__types__cliflag_box(f_0_0, _ctx), _ctx); /*10001*/
  _b_x1616_1618 = kk_string_unbox(_x_x5712); /*string*/
  kk_std_core_types__list _b_x1624_1626;
  kk_std_core_types__list _x_x5716 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(_b_x1616_1618), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1624_1626 = kk_std_core_list_append(_y_x10833, _x_x5716, _ctx); /*list<string>*/
  kk_unit_t _brw_x2441 = kk_Unit;
  kk_ref_set_borrow(flags,(kk_std_core_types__list_box(_b_x1624_1626, _ctx)),kk_context());
  kk_ref_drop(flags, _ctx);
  _brw_x2441; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5718__t {
  struct kk_function_s _base;
  kk_function_t next_12_11328;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5718(kk_function_t _fself, kk_box_t _b_x1628, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5718(kk_function_t next_12_11328, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5718__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5718__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5718, kk_context());
  _self->next_12_11328 = next_12_11328;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5718(kk_function_t _fself, kk_box_t _b_x1628, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5718__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5718__t*, _fself, _ctx);
  kk_function_t next_12_11328 = _self->next_12_11328; /* (list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> () */
  kk_drop_match(_self, {kk_function_dup(next_12_11328, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5719 = kk_Unit;
  kk_std_core_types__list _x_x5720 = kk_std_core_types__list_unbox(_b_x1628, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11328, (next_12_11328, _x_x5720, _ctx), _ctx);
  return kk_unit_box(_x_x5719);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5722__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5722(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5722(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5722, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5722(kk_function_t _fself, kk_box_t _b_x1631, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5723;
  kk_hml__types__clispec _match_x2439 = kk_hml__types__clispec_unbox(_b_x1631, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5724 = kk_hml__types__as_Clispec(_match_x2439, _ctx);
    kk_string_t _pat_0_42 = _con_x5724->app__name;
    kk_string_t _pat_1_32 = _con_x5724->app__version;
    kk_string_t _pat_2_15 = _con_x5724->app__about;
    kk_std_core_types__list _pat_3_9 = _con_x5724->app__flags;
    kk_std_core_types__list _x_21 = _con_x5724->app__options;
    kk_std_core_types__list _pat_4_9 = _con_x5724->app__args;
    kk_std_core_types__list _pat_5_9 = _con_x5724->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2439, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_9, _ctx);
      kk_std_core_types__list_drop(_pat_4_9, _ctx);
      kk_std_core_types__list_drop(_pat_3_9, _ctx);
      kk_string_drop(_pat_2_15, _ctx);
      kk_string_drop(_pat_1_32, _ctx);
      kk_string_drop(_pat_0_42, _ctx);
      kk_datatype_ptr_free(_match_x2439, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_21, _ctx);
      kk_datatype_ptr_decref(_match_x2439, _ctx);
    }
    _x_x5723 = _x_21; /*list<hml_types/clioption>*/
  }
  return kk_std_core_types__list_box(_x_x5723, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5726__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5726(kk_function_t _fself, kk_box_t _b_x1641, kk_box_t _b_x1642, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5726(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5726, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5728__t {
  struct kk_function_s _base;
  kk_string_t s_11_1817;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5728(kk_function_t _fself, kk_box_t _b_x1637, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5728(kk_string_t s_11_1817, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5728__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5728__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5728, kk_context());
  _self->s_11_1817 = s_11_1817;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5728(kk_function_t _fself, kk_box_t _b_x1637, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5728__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5728__t*, _fself, _ctx);
  kk_string_t s_11_1817 = _self->s_11_1817; /* string */
  kk_drop_match(_self, {kk_string_dup(s_11_1817, _ctx);}, {}, _ctx)
  kk_string_t _x_x5729;
  kk_hml__types__clioption _match_x2438 = kk_hml__types__clioption_unbox(_b_x1637, KK_OWNED, _ctx); /*hml_types/clioption*/;
  {
    struct kk_hml__types_Clioption* _con_x5730 = kk_hml__types__as_Clioption(_match_x2438, _ctx);
    kk_string_t _pat_0_41 = _con_x5730->opt__name;
    kk_string_t _x_20 = _con_x5730->opt__short;
    kk_string_t _pat_1_31 = _con_x5730->opt__help;
    kk_string_t _pat_2_14 = _con_x5730->opt__default;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2438, _ctx)) {
      kk_string_drop(_pat_2_14, _ctx);
      kk_string_drop(_pat_1_31, _ctx);
      kk_string_drop(_pat_0_41, _ctx);
      kk_datatype_ptr_free(_match_x2438, _ctx);
    }
    else {
      kk_string_dup(_x_20, _ctx);
      kk_datatype_ptr_decref(_match_x2438, _ctx);
    }
    _x_x5729 = _x_20; /*string*/
  }
  return kk_string_is_eq(_x_x5729,s_11_1817,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5726(kk_function_t _fself, kk_box_t _b_x1641, kk_box_t _b_x1642, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5727;
  kk_std_core_types__list options_4_1816 = kk_std_core_types__list_unbox(_b_x1641, KK_OWNED, _ctx); /*list<hml_types/clioption>*/;
  kk_string_t s_11_1817 = kk_string_unbox(_b_x1642); /*string*/;
  _x_x5727 = kk_std_core_list_find(options_4_1816, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5728(s_11_1817, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5727, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5737__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_hml__types__clioption o_0_0;
  kk_ref_t options;
  kk_ref_t remaining;
  kk_string_t s_0_0;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5737(kk_function_t _fself, kk_box_t _b_x1649, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5737(kk_ref_t error, kk_hml__types__clioption o_0_0, kk_ref_t options, kk_ref_t remaining, kk_string_t s_0_0, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5737__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5737__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5737, kk_context());
  _self->error = error;
  _self->o_0_0 = o_0_0;
  _self->options = options;
  _self->remaining = remaining;
  _self->s_0_0 = s_0_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5737(kk_function_t _fself, kk_box_t _b_x1649, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5737__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5737__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<24443,string> */
  kk_hml__types__clioption o_0_0 = _self->o_0_0; /* hml_types/clioption */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_string_t s_0_0 = _self->s_0_0; /* string */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_hml__types__clioption_dup(o_0_0, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(remaining, _ctx);kk_string_dup(s_0_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10835_1792 = kk_std_core_types__list_unbox(_b_x1649, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5738 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11162(error, o_0_0, options, remaining, s_0_0, _y_x10835_1792, _ctx);
  return kk_unit_box(_x_x5738);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5742__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5742(kk_function_t _fself, kk_box_t _b_x1654, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5742(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5742, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5742(kk_function_t _fself, kk_box_t _b_x1654, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5743;
  kk_hml__types__clispec _match_x2433 = kk_hml__types__clispec_unbox(_b_x1654, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5744 = kk_hml__types__as_Clispec(_match_x2433, _ctx);
    kk_string_t _pat_0_46 = _con_x5744->app__name;
    kk_string_t _pat_1_34 = _con_x5744->app__version;
    kk_string_t _pat_2_17 = _con_x5744->app__about;
    kk_std_core_types__list _pat_3_10 = _con_x5744->app__flags;
    kk_std_core_types__list _pat_4_10 = _con_x5744->app__options;
    kk_std_core_types__list _pat_5_10 = _con_x5744->app__args;
    kk_std_core_types__list _x_24 = _con_x5744->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2433, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_10, _ctx);
      kk_std_core_types__list_drop(_pat_4_10, _ctx);
      kk_std_core_types__list_drop(_pat_3_10, _ctx);
      kk_string_drop(_pat_2_17, _ctx);
      kk_string_drop(_pat_1_34, _ctx);
      kk_string_drop(_pat_0_46, _ctx);
      kk_datatype_ptr_free(_match_x2433, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_24, _ctx);
      kk_datatype_ptr_decref(_match_x2433, _ctx);
    }
    _x_x5743 = _x_24; /*list<(string, hml_types/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5743, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5746__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5746(kk_function_t _fself, kk_box_t _b_x1666, kk_box_t _b_x1667, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5746(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11167_fun5746, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5748__t {
  struct kk_function_s _base;
  kk_string_t name_6_1819;
};
static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5748(kk_function_t _fself, kk_box_t _b_x1662, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5748(kk_string_t name_6_1819, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5748__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5748__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5748, kk_context());
  _self->name_6_1819 = name_6_1819;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__parse__loop_11167_fun5748(kk_function_t _fself, kk_box_t _b_x1662, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5748__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5748__t*, _fself, _ctx);
  kk_string_t name_6_1819 = _self->name_6_1819; /* string */
  kk_drop_match(_self, {kk_string_dup(name_6_1819, _ctx);}, {}, _ctx)
  kk_string_t _x_x5749;
  kk_std_core_types__tuple2 _match_x2432 = kk_std_core_types__tuple2_unbox(_b_x1662, KK_OWNED, _ctx); /*(string, hml_types/clispec)*/;
  {
    kk_box_t _box_x1658 = _match_x2432.fst;
    kk_box_t _box_x1659 = _match_x2432.snd;
    kk_string_t _x_23 = kk_string_unbox(_box_x1658);
    kk_string_dup(_x_23, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2432, _ctx);
    _x_x5749 = _x_23; /*string*/
  }
  return kk_string_is_eq(_x_x5749,name_6_1819,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5746(kk_function_t _fself, kk_box_t _b_x1666, kk_box_t _b_x1667, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5747;
  kk_std_core_types__list commands_0_1818 = kk_std_core_types__list_unbox(_b_x1666, KK_OWNED, _ctx); /*list<(string, hml_types/clispec)>*/;
  kk_string_t name_6_1819 = kk_string_unbox(_b_x1667); /*string*/;
  _x_x5747 = kk_std_core_list_find(commands_0_1818, kk_hml__types__new_mlift_hc__parse__loop_11167_fun5748(name_6_1819, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5747, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5753__t {
  struct kk_function_s _base;
  kk_ref_t remaining;
  kk_ref_t sub__args;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5753(kk_function_t _fself, kk_box_t _b_x1674, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5753(kk_ref_t remaining, kk_ref_t sub__args, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5753__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5753__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5753, kk_context());
  _self->remaining = remaining;
  _self->sub__args = sub__args;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5753(kk_function_t _fself, kk_box_t _b_x1674, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5753__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5753__t*, _fself, _ctx);
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(remaining, _ctx);kk_ref_dup(sub__args, _ctx);}, {}, _ctx)
  kk_unit_t wild___5_0_1794 = kk_Unit;
  kk_unit_unbox(_b_x1674);
  kk_unit_t _x_x5754 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11165(remaining, sub__args, wild___5_0_1794, _ctx);
  return kk_unit_box(_x_x5754);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5757__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t positionals;
};
static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5757(kk_function_t _fself, kk_std_core_types__list _y_x10854, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5757(kk_string_t a, kk_ref_t positionals, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5757__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5757__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5757, kk_context());
  _self->a = a;
  _self->positionals = positionals;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167_fun5757(kk_function_t _fself, kk_std_core_types__list _y_x10854, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5757__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5757__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(positionals, _ctx);}, {}, _ctx)
  kk_std_core_types__list _b_x1682_1684;
  kk_std_core_types__list _x_x5758 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(a), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<10021>*/
  _b_x1682_1684 = kk_std_core_list_append(_y_x10854, _x_x5758, _ctx); /*list<string>*/
  kk_unit_t _brw_x2429 = kk_Unit;
  kk_ref_set_borrow(positionals,(kk_std_core_types__list_box(_b_x1682_1684, _ctx)),kk_context());
  kk_ref_drop(positionals, _ctx);
  _brw_x2429; return kk_Unit;
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11167_fun5760__t {
  struct kk_function_s _base;
  kk_function_t next_15_11337;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5760(kk_function_t _fself, kk_box_t _b_x1688, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11167_fun5760(kk_function_t next_15_11337, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5760__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5760__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11167_fun5760, kk_context());
  _self->next_15_11337 = next_15_11337;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11167_fun5760(kk_function_t _fself, kk_box_t _b_x1688, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11167_fun5760__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11167_fun5760__t*, _fself, _ctx);
  kk_function_t next_15_11337 = _self->next_15_11337; /* (list<string>) -> <local<24443>,hml_types/hica-brk,exn,div> () */
  kk_drop_match(_self, {kk_function_dup(next_15_11337, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5761 = kk_Unit;
  kk_std_core_types__list _x_x5762 = kk_std_core_types__list_unbox(_b_x1688, KK_OWNED, _ctx); /*list<string>*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11337, (next_15_11337, _x_x5762, _ctx), _ctx);
  return kk_unit_box(_x_x5761);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11167(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__types__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, wild_ : ()) -> <local<h>,exn,hica-brk,div> () */ 
  bool _match_x2420;
  kk_string_t _x_x5378 = kk_string_dup(a, _ctx); /*string*/
  kk_string_t _x_x5379;
  kk_define_string_literal(static, _s_x5380, 6, "--help", _ctx)
  _x_x5379 = kk_string_dup(_s_x5380, _ctx); /*string*/
  _match_x2420 = kk_string_is_eq(_x_x5378,_x_x5379,kk_context()); /*bool*/
  if (_match_x2420) {
    kk_ref_drop(subcmd, _ctx);
    kk_ref_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_ref_drop(remaining, _ctx);
    kk_ref_drop(positionals, _ctx);
    kk_ref_drop(options, _ctx);
    kk_ref_drop(flags, _ctx);
    kk_string_drop(a, _ctx);
    kk_unit_t x_11289 = kk_Unit;
    kk_unit_t _brw_x2496 = kk_Unit;
    kk_box_t _x_x5381;
    kk_string_t _x_x5382;
    kk_define_string_literal(static, _s_x5383, 8, "__help__", _ctx)
    _x_x5382 = kk_string_dup(_s_x5383, _ctx); /*string*/
    _x_x5381 = kk_string_box(_x_x5382); /*10000*/
    kk_ref_set_borrow(error,_x_x5381,kk_context());
    kk_ref_drop(error, _ctx);
    _brw_x2496;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x5384 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5385(_ctx), _ctx); /*10001*/
      kk_unit_unbox(_x_x5384); return kk_Unit;
    }
    {
      kk_hml__types__mlift_hc__parse__loop_11122(x_11289, _ctx); return kk_Unit;
    }
  }
  {
    bool _match_x2421;
    kk_string_t _x_x5387 = kk_string_dup(a, _ctx); /*string*/
    kk_string_t _x_x5388;
    kk_define_string_literal(static, _s_x5389, 2, "-h", _ctx)
    _x_x5388 = kk_string_dup(_s_x5389, _ctx); /*string*/
    _match_x2421 = kk_string_is_eq(_x_x5387,_x_x5388,kk_context()); /*bool*/
    if (_match_x2421) {
      kk_ref_drop(subcmd, _ctx);
      kk_ref_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_ref_drop(remaining, _ctx);
      kk_ref_drop(positionals, _ctx);
      kk_ref_drop(options, _ctx);
      kk_ref_drop(flags, _ctx);
      kk_string_drop(a, _ctx);
      kk_unit_t x_0_11291 = kk_Unit;
      kk_unit_t _brw_x2494 = kk_Unit;
      kk_box_t _x_x5390;
      kk_string_t _x_x5391;
      kk_define_string_literal(static, _s_x5392, 8, "__help__", _ctx)
      _x_x5391 = kk_string_dup(_s_x5392, _ctx); /*string*/
      _x_x5390 = kk_string_box(_x_x5391); /*10000*/
      kk_ref_set_borrow(error,_x_x5390,kk_context());
      kk_ref_drop(error, _ctx);
      _brw_x2494;
      if (kk_yielding(kk_context())) {
        kk_box_t _x_x5393 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5394(_ctx), _ctx); /*10001*/
        kk_unit_unbox(_x_x5393); return kk_Unit;
      }
      {
        kk_hml__types__mlift_hc__parse__loop_11123(x_0_11291, _ctx); return kk_Unit;
      }
    }
    {
      bool _match_x2422;
      kk_string_t _x_x5396 = kk_string_dup(a, _ctx); /*string*/
      kk_string_t _x_x5397;
      kk_define_string_literal(static, _s_x5398, 9, "--version", _ctx)
      _x_x5397 = kk_string_dup(_s_x5398, _ctx); /*string*/
      _match_x2422 = kk_string_is_eq(_x_x5396,_x_x5397,kk_context()); /*bool*/
      if (_match_x2422) {
        kk_ref_drop(subcmd, _ctx);
        kk_ref_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_ref_drop(remaining, _ctx);
        kk_ref_drop(positionals, _ctx);
        kk_ref_drop(options, _ctx);
        kk_ref_drop(flags, _ctx);
        kk_string_drop(a, _ctx);
        kk_unit_t x_1_11293 = kk_Unit;
        kk_unit_t _brw_x2492 = kk_Unit;
        kk_box_t _x_x5399;
        kk_string_t _x_x5400;
        kk_define_string_literal(static, _s_x5401, 11, "__version__", _ctx)
        _x_x5400 = kk_string_dup(_s_x5401, _ctx); /*string*/
        _x_x5399 = kk_string_box(_x_x5400); /*10000*/
        kk_ref_set_borrow(error,_x_x5399,kk_context());
        kk_ref_drop(error, _ctx);
        _brw_x2492;
        if (kk_yielding(kk_context())) {
          kk_box_t _x_x5402 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5403(_ctx), _ctx); /*10001*/
          kk_unit_unbox(_x_x5402); return kk_Unit;
        }
        {
          kk_hml__types__mlift_hc__parse__loop_11124(x_1_11293, _ctx); return kk_Unit;
        }
      }
      {
        bool _match_x2423;
        kk_string_t _x_x5405 = kk_string_dup(a, _ctx); /*string*/
        kk_string_t _x_x5406;
        kk_define_string_literal(static, _s_x5407, 2, "--", _ctx)
        _x_x5406 = kk_string_dup(_s_x5407, _ctx); /*string*/
        _match_x2423 = kk_string_is_eq(_x_x5405,_x_x5406,kk_context()); /*bool*/
        if (_match_x2423) {
          kk_ref_drop(subcmd, _ctx);
          kk_ref_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_ref_drop(options, _ctx);
          kk_ref_drop(flags, _ctx);
          kk_ref_drop(error, _ctx);
          kk_string_drop(a, _ctx);
          kk_std_core_types__list x_2_11295;
          kk_box_t _x_x5408;
          kk_ref_t _x_x5409 = kk_ref_dup(positionals, _ctx); /*local-var<24443,list<string>>*/
          _x_x5408 = kk_ref_get(_x_x5409,kk_context()); /*10000*/
          x_2_11295 = kk_std_core_types__list_unbox(_x_x5408, KK_OWNED, _ctx); /*list<string>*/
          if (kk_yielding(kk_context())) {
            kk_std_core_types__list_drop(x_2_11295, _ctx);
            kk_box_t _x_x5410 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5411(positionals, remaining, _ctx), _ctx); /*10001*/
            kk_unit_unbox(_x_x5410); return kk_Unit;
          }
          {
            kk_hml__types__mlift_hc__parse__loop_11127(positionals, remaining, x_2_11295, _ctx); return kk_Unit;
          }
        }
        {
          kk_std_core_types__maybe _x_x1_0_11024;
          kk_string_t _x_x5413 = kk_string_dup(a, _ctx); /*string*/
          kk_string_t _x_x5414;
          kk_define_string_literal(static, _s_x5415, 2, "--", _ctx)
          _x_x5414 = kk_string_dup(_s_x5415, _ctx); /*string*/
          _x_x1_0_11024 = kk_std_core_sslice_starts_with(_x_x5413, _x_x5414, _ctx); /*maybe<sslice/sslice>*/
          bool _match_x2424;
          kk_box_t _x_x5416 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5417(_ctx), kk_std_core_types__maybe_box(_x_x1_0_11024, _ctx), _ctx); /*10001*/
          _match_x2424 = kk_bool_unbox(_x_x5416); /*bool*/
          if (_match_x2424) {
            bool _match_x2455;
            kk_string_t _x_x5419 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5420;
            kk_define_string_literal(static, _s_x5421, 1, "=", _ctx)
            _x_x5420 = kk_string_dup(_s_x5421, _ctx); /*string*/
            _match_x2455 = kk_string_contains(_x_x5419,_x_x5420,kk_context()); /*bool*/
            if (_match_x2455) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(remaining, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_ref_drop(flags, _ctx);
              kk_string_t clean;
              kk_box_t _x_x5422;
              kk_box_t _x_x5434;
              kk_string_t _x_x5435;
              kk_define_string_literal(static, _s_x5436, 2, "--", _ctx)
              _x_x5435 = kk_string_dup(_s_x5436, _ctx); /*string*/
              _x_x5434 = kk_string_box(_x_x5435); /*10001*/
              _x_x5422 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5423(_ctx), kk_string_box(a), _x_x5434, _ctx); /*10002*/
              clean = kk_string_unbox(_x_x5422); /*string*/
              kk_std_core_types__list x_3_11297;
              bool _match_x2487;
              kk_string_t _x_x5437;
              kk_define_string_literal(static, _s_x5438, 1, "=", _ctx)
              _x_x5437 = kk_string_dup(_s_x5438, _ctx); /*string*/
              kk_string_t _x_x5439 = kk_string_empty(); /*string*/
              _match_x2487 = kk_string_is_eq(_x_x5437,_x_x5439,kk_context()); /*bool*/
              if (_match_x2487) {
                kk_std_core_types__list _b_x1318_1326 = kk_std_core_string_list(clean, _ctx); /*list<char>*/;
                kk_function_t _brw_x2488 = kk_hml__types__new_mlift_hc__parse__loop_11167_fun5441(_ctx); /*(10001) -> 10003 10002*/;
                kk_std_core_types__list _brw_x2489 = kk_std_core_list_map(_b_x1318_1326, _brw_x2488, _ctx); /*list<10002>*/;
                kk_function_drop(_brw_x2488, _ctx);
                x_3_11297 = _brw_x2489; /*list<string>*/
              }
              else {
                kk_box_t _x_x5444;
                kk_box_t _x_x5449;
                kk_string_t _x_x5450;
                kk_define_string_literal(static, _s_x5451, 1, "=", _ctx)
                _x_x5450 = kk_string_dup(_s_x5451, _ctx); /*string*/
                _x_x5449 = kk_string_box(_x_x5450); /*10001*/
                _x_x5444 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5445(_ctx), kk_string_box(clean), _x_x5449, _ctx); /*10002*/
                x_3_11297 = kk_std_core_types__list_unbox(_x_x5444, KK_OWNED, _ctx); /*list<string>*/
              }
              if (kk_yielding(kk_context())) {
                kk_std_core_types__list_drop(x_3_11297, _ctx);
                kk_box_t _x_x5452 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5453(error, options, spec, _ctx), _ctx); /*10001*/
                kk_unit_unbox(_x_x5452); return kk_Unit;
              }
              {
                kk_hml__types__mlift_hc__parse__loop_11130(error, options, spec, x_3_11297, _ctx); return kk_Unit;
              }
            }
            {
              kk_std_core_types__maybe _x_x1_6_11034;
              kk_string_t _x_x5455 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5456;
              kk_define_string_literal(static, _s_x5457, 2, "--", _ctx)
              _x_x5456 = kk_string_dup(_s_x5457, _ctx); /*string*/
              _x_x1_6_11034 = kk_std_core_sslice_starts_with(_x_x5455, _x_x5456, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2456;
              kk_box_t _x_x5458 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5459(_ctx), kk_std_core_types__maybe_box(_x_x1_6_11034, _ctx), _ctx); /*10001*/
              _match_x2456 = kk_bool_unbox(_x_x5458); /*bool*/
              if (_match_x2456) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t name_0_0;
                kk_box_t _x_x5461;
                kk_box_t _x_x5473;
                kk_string_t _x_x5474;
                kk_define_string_literal(static, _s_x5475, 2, "--", _ctx)
                _x_x5474 = kk_string_dup(_s_x5475, _ctx); /*string*/
                _x_x5473 = kk_string_box(_x_x5474); /*10001*/
                _x_x5461 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5462(_ctx), kk_string_box(a), _x_x5473, _ctx); /*10002*/
                name_0_0 = kk_string_unbox(_x_x5461); /*string*/
                kk_std_core_types__list _x_x1_8_11037;
                kk_box_t _x_x5476;
                kk_box_t _x_x5480;
                kk_hml__types__clispec _x_x5481 = kk_hml__types__clispec_dup(spec, _ctx); /*hml_types/clispec*/
                _x_x5480 = kk_hml__types__clispec_box(_x_x5481, _ctx); /*10000*/
                _x_x5476 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5477(_ctx), _x_x5480, _ctx); /*10001*/
                _x_x1_8_11037 = kk_std_core_types__list_unbox(_x_x5476, KK_OWNED, _ctx); /*list<hml_types/cliflag>*/
                kk_std_core_types__maybe _match_x2476;
                kk_box_t _x_x5482;
                kk_box_t _x_x5488;
                kk_string_t _x_x5489 = kk_string_dup(name_0_0, _ctx); /*string*/
                _x_x5488 = kk_string_box(_x_x5489); /*10001*/
                _x_x5482 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5483(_ctx), kk_std_core_types__list_box(_x_x1_8_11037, _ctx), _x_x5488, _ctx); /*10002*/
                _match_x2476 = kk_std_core_types__maybe_unbox(_x_x5482, KK_OWNED, _ctx); /*maybe<hml_types/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2476, _ctx)) {
                  kk_box_t _box_x1364 = _match_x2476._cons.Just.value;
                  kk_hml__types__cliflag _pat_24_0 = kk_hml__types__cliflag_unbox(_box_x1364, KK_BORROWED, _ctx);
                  struct kk_hml__types_Cliflag* _con_x5490 = kk_hml__types__as_Cliflag(_pat_24_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2476, _ctx);
                  kk_std_core_types__list x_4_11299;
                  kk_box_t _x_x5491;
                  kk_ref_t _x_x5492 = kk_ref_dup(flags, _ctx); /*local-var<24443,list<string>>*/
                  _x_x5491 = kk_ref_get(_x_x5492,kk_context()); /*10000*/
                  x_4_11299 = kk_std_core_types__list_unbox(_x_x5491, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_4_11300 = kk_hml__types__new_mlift_hc__parse__loop_11167_fun5493(flags, name_0_0, _ctx); /*(list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_4_11299, _ctx);
                    kk_box_t _x_x5495 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5496(next_4_11300, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5495); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_4_11300, (next_4_11300, x_4_11299, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_10_11040;
                  kk_box_t _x_x5499 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5500(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_10_11040 = kk_std_core_types__list_unbox(_x_x5499, KK_OWNED, _ctx); /*list<hml_types/clioption>*/
                  kk_std_core_types__maybe _match_x2477;
                  kk_box_t _x_x5503;
                  kk_box_t _x_x5509;
                  kk_string_t _x_x5510 = kk_string_dup(name_0_0, _ctx); /*string*/
                  _x_x5509 = kk_string_box(_x_x5510); /*10001*/
                  _x_x5503 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5504(_ctx), kk_std_core_types__list_box(_x_x1_10_11040, _ctx), _x_x5509, _ctx); /*10002*/
                  _match_x2477 = kk_std_core_types__maybe_unbox(_x_x5503, KK_OWNED, _ctx); /*maybe<hml_types/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2477, _ctx)) {
                    kk_box_t _box_x1393 = _match_x2477._cons.Just.value;
                    kk_hml__types__clioption _pat_30_0 = kk_hml__types__clioption_unbox(_box_x1393, KK_BORROWED, _ctx);
                    struct kk_hml__types_Clioption* _con_x5511 = kk_hml__types__as_Clioption(_pat_30_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2477, _ctx);
                    kk_std_core_types__list x_5_11304;
                    kk_box_t _x_x5512;
                    kk_ref_t _x_x5513 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
                    _x_x5512 = kk_ref_get(_x_x5513,kk_context()); /*10000*/
                    x_5_11304 = kk_std_core_types__list_unbox(_x_x5512, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_5_11304, _ctx);
                      kk_box_t _x_x5514 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5515(error, name_0_0, options, remaining, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5514); return kk_Unit;
                    }
                    {
                      kk_hml__types__mlift_hc__parse__loop_11137(error, name_0_0, options, remaining, x_5_11304, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1401_1711;
                    kk_string_t _x_x5517;
                    kk_define_string_literal(static, _s_x5518, 18, "unknown option: --", _ctx)
                    _x_x5517 = kk_string_dup(_s_x5518, _ctx); /*string*/
                    _b_x1401_1711 = kk_std_core_types__lp__plus__plus__rp_(_x_x5517, name_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2478 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1401_1711)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2478; return kk_Unit;
                  }
                }
              }
              {
                kk_std_core_types__maybe _x_x1_13_11045;
                kk_string_t _x_x5519 = kk_string_dup(a, _ctx); /*string*/
                kk_string_t _x_x5520;
                kk_define_string_literal(static, _s_x5521, 1, "-", _ctx)
                _x_x5520 = kk_string_dup(_s_x5521, _ctx); /*string*/
                _x_x1_13_11045 = kk_std_core_sslice_starts_with(_x_x5519, _x_x5520, _ctx); /*maybe<sslice/sslice>*/
                bool _match_x2457;
                kk_box_t _x_x5522 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5523(_ctx), kk_std_core_types__maybe_box(_x_x1_13_11045, _ctx), _ctx); /*10001*/
                _match_x2457 = kk_bool_unbox(_x_x5522); /*bool*/
                if (_match_x2457) {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(positionals, _ctx);
                  kk_string_t s_5;
                  kk_box_t _x_x5525;
                  kk_box_t _x_x5537;
                  kk_string_t _x_x5538;
                  kk_define_string_literal(static, _s_x5539, 1, "-", _ctx)
                  _x_x5538 = kk_string_dup(_s_x5539, _ctx); /*string*/
                  _x_x5537 = kk_string_box(_x_x5538); /*10001*/
                  _x_x5525 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5526(_ctx), kk_string_box(a), _x_x5537, _ctx); /*10002*/
                  s_5 = kk_string_unbox(_x_x5525); /*string*/
                  kk_std_core_types__list _x_x1_15_11048;
                  kk_box_t _x_x5540;
                  kk_box_t _x_x5544;
                  kk_hml__types__clispec _x_x5545 = kk_hml__types__clispec_dup(spec, _ctx); /*hml_types/clispec*/
                  _x_x5544 = kk_hml__types__clispec_box(_x_x5545, _ctx); /*10000*/
                  _x_x5540 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5541(_ctx), _x_x5544, _ctx); /*10001*/
                  _x_x1_15_11048 = kk_std_core_types__list_unbox(_x_x5540, KK_OWNED, _ctx); /*list<hml_types/cliflag>*/
                  kk_std_core_types__maybe _match_x2465;
                  kk_box_t _x_x5546;
                  kk_box_t _x_x5552;
                  kk_string_t _x_x5553 = kk_string_dup(s_5, _ctx); /*string*/
                  _x_x5552 = kk_string_box(_x_x5553); /*10001*/
                  _x_x5546 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5547(_ctx), kk_std_core_types__list_box(_x_x1_15_11048, _ctx), _x_x5552, _ctx); /*10002*/
                  _match_x2465 = kk_std_core_types__maybe_unbox(_x_x5546, KK_OWNED, _ctx); /*maybe<hml_types/cliflag>*/
                  if (kk_std_core_types__is_Just(_match_x2465, _ctx)) {
                    kk_box_t _box_x1431 = _match_x2465._cons.Just.value;
                    kk_hml__types__cliflag f_1 = kk_hml__types__cliflag_unbox(_box_x1431, KK_BORROWED, _ctx);
                    struct kk_hml__types_Cliflag* _con_x5554 = kk_hml__types__as_Cliflag(f_1, _ctx);
                    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                    kk_string_drop(s_5, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_ref_drop(error, _ctx);
                    kk_hml__types__cliflag_dup(f_1, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2465, _ctx);
                    kk_std_core_types__list x_6_11306;
                    kk_box_t _x_x5555;
                    kk_ref_t _x_x5556 = kk_ref_dup(flags, _ctx); /*local-var<24443,list<string>>*/
                    _x_x5555 = kk_ref_get(_x_x5556,kk_context()); /*10000*/
                    x_6_11306 = kk_std_core_types__list_unbox(_x_x5555, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_6_11307 = kk_hml__types__new_mlift_hc__parse__loop_11167_fun5557(f_1, flags, _ctx); /*(list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_6_11306, _ctx);
                      kk_box_t _x_x5563 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5564(next_6_11307, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5563); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_6_11307, (next_6_11307, x_6_11306, _ctx), _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(flags, _ctx);
                    kk_std_core_types__list _x_x1_18_11052;
                    kk_box_t _x_x5567 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5568(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
                    _x_x1_18_11052 = kk_std_core_types__list_unbox(_x_x5567, KK_OWNED, _ctx); /*list<hml_types/clioption>*/
                    kk_std_core_types__maybe _match_x2466;
                    kk_box_t _x_x5571;
                    kk_box_t _x_x5577;
                    kk_string_t _x_x5578 = kk_string_dup(s_5, _ctx); /*string*/
                    _x_x5577 = kk_string_box(_x_x5578); /*10001*/
                    _x_x5571 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5572(_ctx), kk_std_core_types__list_box(_x_x1_18_11052, _ctx), _x_x5577, _ctx); /*10002*/
                    _match_x2466 = kk_std_core_types__maybe_unbox(_x_x5571, KK_OWNED, _ctx); /*maybe<hml_types/clioption>*/
                    if (kk_std_core_types__is_Just(_match_x2466, _ctx)) {
                      kk_box_t _box_x1466 = _match_x2466._cons.Just.value;
                      kk_hml__types__clioption o_2 = kk_hml__types__clioption_unbox(_box_x1466, KK_BORROWED, _ctx);
                      struct kk_hml__types_Clioption* _con_x5579 = kk_hml__types__as_Clioption(o_2, _ctx);
                      kk_hml__types__clioption_dup(o_2, _ctx);
                      kk_std_core_types__maybe_drop(_match_x2466, _ctx);
                      kk_std_core_types__list x_7_11311;
                      kk_box_t _x_x5580;
                      kk_ref_t _x_x5581 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
                      _x_x5580 = kk_ref_get(_x_x5581,kk_context()); /*10000*/
                      x_7_11311 = kk_std_core_types__list_unbox(_x_x5580, KK_OWNED, _ctx); /*list<string>*/
                      if (kk_yielding(kk_context())) {
                        kk_std_core_types__list_drop(x_7_11311, _ctx);
                        kk_box_t _x_x5582 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5583(error, o_2, options, remaining, s_5, _ctx), _ctx); /*10001*/
                        kk_unit_unbox(_x_x5582); return kk_Unit;
                      }
                      {
                        kk_hml__types__mlift_hc__parse__loop_11144(error, o_2, options, remaining, s_5, x_7_11311, _ctx); return kk_Unit;
                      }
                    }
                    {
                      kk_ref_drop(remaining, _ctx);
                      kk_ref_drop(options, _ctx);
                      kk_string_t _b_x1474_1727;
                      kk_string_t _x_x5585;
                      kk_define_string_literal(static, _s_x5586, 17, "unknown option: -", _ctx)
                      _x_x5585 = kk_string_dup(_s_x5586, _ctx); /*string*/
                      _b_x1474_1727 = kk_std_core_types__lp__plus__plus__rp_(_x_x5585, s_5, _ctx); /*string*/
                      kk_unit_t _brw_x2467 = kk_Unit;
                      kk_ref_set_borrow(error,(kk_string_box(_b_x1474_1727)),kk_context());
                      kk_ref_drop(error, _ctx);
                      _brw_x2467; return kk_Unit;
                    }
                  }
                }
                {
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(flags, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_std_core_types__list _x_x1_22_11058;
                  kk_box_t _x_x5587 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5588(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_22_11058 = kk_std_core_types__list_unbox(_x_x5587, KK_OWNED, _ctx); /*list<(string, hml_types/clispec)>*/
                  kk_std_core_types__maybe _match_x2458;
                  kk_box_t _x_x5591;
                  kk_box_t _x_x5596;
                  kk_string_t _x_x5597 = kk_string_dup(a, _ctx); /*string*/
                  _x_x5596 = kk_string_box(_x_x5597); /*10001*/
                  _x_x5591 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5592(_ctx), kk_std_core_types__list_box(_x_x1_22_11058, _ctx), _x_x5596, _ctx); /*10002*/
                  _match_x2458 = kk_std_core_types__maybe_unbox(_x_x5591, KK_OWNED, _ctx); /*maybe<(string, hml_types/clispec)>*/
                  if (kk_std_core_types__is_Just(_match_x2458, _ctx)) {
                    kk_box_t _box_x1491 = _match_x2458._cons.Just.value;
                    kk_ref_drop(positionals, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2458, _ctx);
                    kk_unit_t x_8_11313 = kk_Unit;
                    kk_unit_t _brw_x2462 = kk_Unit;
                    kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                    kk_ref_drop(subcmd, _ctx);
                    _brw_x2462;
                    if (kk_yielding(kk_context())) {
                      kk_box_t _x_x5598 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5599(remaining, sub__args, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5598); return kk_Unit;
                    }
                    {
                      kk_hml__types__mlift_hc__parse__loop_11147(remaining, sub__args, x_8_11313, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(subcmd, _ctx);
                    kk_ref_drop(sub__args, _ctx);
                    kk_ref_drop(remaining, _ctx);
                    kk_std_core_types__list x_9_11315;
                    kk_box_t _x_x5601;
                    kk_ref_t _x_x5602 = kk_ref_dup(positionals, _ctx); /*local-var<24443,list<string>>*/
                    _x_x5601 = kk_ref_get(_x_x5602,kk_context()); /*10000*/
                    x_9_11315 = kk_std_core_types__list_unbox(_x_x5601, KK_OWNED, _ctx); /*list<string>*/
                    kk_function_t next_9_11316 = kk_hml__types__new_mlift_hc__parse__loop_11167_fun5603(a, positionals, _ctx); /*(list<string>) -> <local<24443>,hml_types/hica-brk,exn,div> ()*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_9_11315, _ctx);
                      kk_box_t _x_x5605 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5606(next_9_11316, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5605); return kk_Unit;
                    }
                    {
                      kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_9_11316, (next_9_11316, x_9_11315, _ctx), _ctx); return kk_Unit;
                    }
                  }
                }
              }
            }
          }
          {
            kk_std_core_types__maybe _x_x1_24_11061;
            kk_string_t _x_x5609 = kk_string_dup(a, _ctx); /*string*/
            kk_string_t _x_x5610;
            kk_define_string_literal(static, _s_x5611, 2, "--", _ctx)
            _x_x5610 = kk_string_dup(_s_x5611, _ctx); /*string*/
            _x_x1_24_11061 = kk_std_core_sslice_starts_with(_x_x5609, _x_x5610, _ctx); /*maybe<sslice/sslice>*/
            bool _match_x2425;
            kk_box_t _x_x5612 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5613(_ctx), kk_std_core_types__maybe_box(_x_x1_24_11061, _ctx), _ctx); /*10001*/
            _match_x2425 = kk_bool_unbox(_x_x5612); /*bool*/
            if (_match_x2425) {
              kk_ref_drop(subcmd, _ctx);
              kk_ref_drop(sub__args, _ctx);
              kk_ref_drop(positionals, _ctx);
              kk_string_t name_0_0_0_0;
              kk_box_t _x_x5615;
              kk_box_t _x_x5627;
              kk_string_t _x_x5628;
              kk_define_string_literal(static, _s_x5629, 2, "--", _ctx)
              _x_x5628 = kk_string_dup(_s_x5629, _ctx); /*string*/
              _x_x5627 = kk_string_box(_x_x5628); /*10001*/
              _x_x5615 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5616(_ctx), kk_string_box(a), _x_x5627, _ctx); /*10002*/
              name_0_0_0_0 = kk_string_unbox(_x_x5615); /*string*/
              kk_std_core_types__list _x_x1_26_11064;
              kk_box_t _x_x5630;
              kk_box_t _x_x5634;
              kk_hml__types__clispec _x_x5635 = kk_hml__types__clispec_dup(spec, _ctx); /*hml_types/clispec*/
              _x_x5634 = kk_hml__types__clispec_box(_x_x5635, _ctx); /*10000*/
              _x_x5630 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5631(_ctx), _x_x5634, _ctx); /*10001*/
              _x_x1_26_11064 = kk_std_core_types__list_unbox(_x_x5630, KK_OWNED, _ctx); /*list<hml_types/cliflag>*/
              kk_std_core_types__maybe _match_x2445;
              kk_box_t _x_x5636;
              kk_box_t _x_x5642;
              kk_string_t _x_x5643 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
              _x_x5642 = kk_string_box(_x_x5643); /*10001*/
              _x_x5636 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5637(_ctx), kk_std_core_types__list_box(_x_x1_26_11064, _ctx), _x_x5642, _ctx); /*10002*/
              _match_x2445 = kk_std_core_types__maybe_unbox(_x_x5636, KK_OWNED, _ctx); /*maybe<hml_types/cliflag>*/
              if (kk_std_core_types__is_Just(_match_x2445, _ctx)) {
                kk_box_t _box_x1541 = _match_x2445._cons.Just.value;
                kk_hml__types__cliflag _pat_24_0_0 = kk_hml__types__cliflag_unbox(_box_x1541, KK_BORROWED, _ctx);
                struct kk_hml__types_Cliflag* _con_x5644 = kk_hml__types__as_Cliflag(_pat_24_0_0, _ctx);
                kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                kk_ref_drop(remaining, _ctx);
                kk_ref_drop(options, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__maybe_drop(_match_x2445, _ctx);
                kk_std_core_types__list x_10_11320;
                kk_box_t _x_x5645;
                kk_ref_t _x_x5646 = kk_ref_dup(flags, _ctx); /*local-var<24443,list<string>>*/
                _x_x5645 = kk_ref_get(_x_x5646,kk_context()); /*10000*/
                x_10_11320 = kk_std_core_types__list_unbox(_x_x5645, KK_OWNED, _ctx); /*list<string>*/
                kk_function_t next_10_11321 = kk_hml__types__new_mlift_hc__parse__loop_11167_fun5647(flags, name_0_0_0_0, _ctx); /*(list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> ()*/;
                if (kk_yielding(kk_context())) {
                  kk_std_core_types__list_drop(x_10_11320, _ctx);
                  kk_box_t _x_x5649 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5650(next_10_11321, _ctx), _ctx); /*10001*/
                  kk_unit_unbox(_x_x5649); return kk_Unit;
                }
                {
                  kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_10_11321, (next_10_11321, x_10_11320, _ctx), _ctx); return kk_Unit;
                }
              }
              {
                kk_ref_drop(flags, _ctx);
                kk_std_core_types__list _x_x1_28_11067;
                kk_box_t _x_x5653 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5654(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_28_11067 = kk_std_core_types__list_unbox(_x_x5653, KK_OWNED, _ctx); /*list<hml_types/clioption>*/
                kk_std_core_types__maybe _match_x2446;
                kk_box_t _x_x5657;
                kk_box_t _x_x5663;
                kk_string_t _x_x5664 = kk_string_dup(name_0_0_0_0, _ctx); /*string*/
                _x_x5663 = kk_string_box(_x_x5664); /*10001*/
                _x_x5657 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5658(_ctx), kk_std_core_types__list_box(_x_x1_28_11067, _ctx), _x_x5663, _ctx); /*10002*/
                _match_x2446 = kk_std_core_types__maybe_unbox(_x_x5657, KK_OWNED, _ctx); /*maybe<hml_types/clioption>*/
                if (kk_std_core_types__is_Just(_match_x2446, _ctx)) {
                  kk_box_t _box_x1570 = _match_x2446._cons.Just.value;
                  kk_hml__types__clioption _pat_30_0_0 = kk_hml__types__clioption_unbox(_box_x1570, KK_BORROWED, _ctx);
                  struct kk_hml__types_Clioption* _con_x5665 = kk_hml__types__as_Clioption(_pat_30_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2446, _ctx);
                  kk_std_core_types__list x_11_11325;
                  kk_box_t _x_x5666;
                  kk_ref_t _x_x5667 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
                  _x_x5666 = kk_ref_get(_x_x5667,kk_context()); /*10000*/
                  x_11_11325 = kk_std_core_types__list_unbox(_x_x5666, KK_OWNED, _ctx); /*list<string>*/
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_11_11325, _ctx);
                    kk_box_t _x_x5668 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5669(error, name_0_0_0_0, options, remaining, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5668); return kk_Unit;
                  }
                  {
                    kk_hml__types__mlift_hc__parse__loop_11155(error, name_0_0_0_0, options, remaining, x_11_11325, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_string_t _b_x1578_1750;
                  kk_string_t _x_x5671;
                  kk_define_string_literal(static, _s_x5672, 18, "unknown option: --", _ctx)
                  _x_x5671 = kk_string_dup(_s_x5672, _ctx); /*string*/
                  _b_x1578_1750 = kk_std_core_types__lp__plus__plus__rp_(_x_x5671, name_0_0_0_0, _ctx); /*string*/
                  kk_unit_t _brw_x2447 = kk_Unit;
                  kk_ref_set_borrow(error,(kk_string_box(_b_x1578_1750)),kk_context());
                  kk_ref_drop(error, _ctx);
                  _brw_x2447; return kk_Unit;
                }
              }
            }
            {
              kk_std_core_types__maybe _x_x1_31_11072;
              kk_string_t _x_x5673 = kk_string_dup(a, _ctx); /*string*/
              kk_string_t _x_x5674;
              kk_define_string_literal(static, _s_x5675, 1, "-", _ctx)
              _x_x5674 = kk_string_dup(_s_x5675, _ctx); /*string*/
              _x_x1_31_11072 = kk_std_core_sslice_starts_with(_x_x5673, _x_x5674, _ctx); /*maybe<sslice/sslice>*/
              bool _match_x2426;
              kk_box_t _x_x5676 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5677(_ctx), kk_std_core_types__maybe_box(_x_x1_31_11072, _ctx), _ctx); /*10001*/
              _match_x2426 = kk_bool_unbox(_x_x5676); /*bool*/
              if (_match_x2426) {
                kk_ref_drop(subcmd, _ctx);
                kk_ref_drop(sub__args, _ctx);
                kk_ref_drop(positionals, _ctx);
                kk_string_t s_0_0;
                kk_box_t _x_x5679;
                kk_box_t _x_x5691;
                kk_string_t _x_x5692;
                kk_define_string_literal(static, _s_x5693, 1, "-", _ctx)
                _x_x5692 = kk_string_dup(_s_x5693, _ctx); /*string*/
                _x_x5691 = kk_string_box(_x_x5692); /*10001*/
                _x_x5679 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5680(_ctx), kk_string_box(a), _x_x5691, _ctx); /*10002*/
                s_0_0 = kk_string_unbox(_x_x5679); /*string*/
                kk_std_core_types__list _x_x1_33_11075;
                kk_box_t _x_x5694;
                kk_box_t _x_x5698;
                kk_hml__types__clispec _x_x5699 = kk_hml__types__clispec_dup(spec, _ctx); /*hml_types/clispec*/
                _x_x5698 = kk_hml__types__clispec_box(_x_x5699, _ctx); /*10000*/
                _x_x5694 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5695(_ctx), _x_x5698, _ctx); /*10001*/
                _x_x1_33_11075 = kk_std_core_types__list_unbox(_x_x5694, KK_OWNED, _ctx); /*list<hml_types/cliflag>*/
                kk_std_core_types__maybe _match_x2434;
                kk_box_t _x_x5700;
                kk_box_t _x_x5706;
                kk_string_t _x_x5707 = kk_string_dup(s_0_0, _ctx); /*string*/
                _x_x5706 = kk_string_box(_x_x5707); /*10001*/
                _x_x5700 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5701(_ctx), kk_std_core_types__list_box(_x_x1_33_11075, _ctx), _x_x5706, _ctx); /*10002*/
                _match_x2434 = kk_std_core_types__maybe_unbox(_x_x5700, KK_OWNED, _ctx); /*maybe<hml_types/cliflag>*/
                if (kk_std_core_types__is_Just(_match_x2434, _ctx)) {
                  kk_box_t _box_x1608 = _match_x2434._cons.Just.value;
                  kk_hml__types__cliflag f_0_0 = kk_hml__types__cliflag_unbox(_box_x1608, KK_BORROWED, _ctx);
                  struct kk_hml__types_Cliflag* _con_x5708 = kk_hml__types__as_Cliflag(f_0_0, _ctx);
                  kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
                  kk_string_drop(s_0_0, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_ref_drop(options, _ctx);
                  kk_ref_drop(error, _ctx);
                  kk_hml__types__cliflag_dup(f_0_0, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2434, _ctx);
                  kk_std_core_types__list x_12_11327;
                  kk_box_t _x_x5709;
                  kk_ref_t _x_x5710 = kk_ref_dup(flags, _ctx); /*local-var<24443,list<string>>*/
                  _x_x5709 = kk_ref_get(_x_x5710,kk_context()); /*10000*/
                  x_12_11327 = kk_std_core_types__list_unbox(_x_x5709, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_12_11328 = kk_hml__types__new_mlift_hc__parse__loop_11167_fun5711(f_0_0, flags, _ctx); /*(list<string>) -> <local<24443>,exn,hml_types/hica-brk,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_12_11327, _ctx);
                    kk_box_t _x_x5717 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5718(next_12_11328, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5717); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_12_11328, (next_12_11328, x_12_11327, _ctx), _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(flags, _ctx);
                  kk_std_core_types__list _x_x1_36_11079;
                  kk_box_t _x_x5721 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5722(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
                  _x_x1_36_11079 = kk_std_core_types__list_unbox(_x_x5721, KK_OWNED, _ctx); /*list<hml_types/clioption>*/
                  kk_std_core_types__maybe _match_x2435;
                  kk_box_t _x_x5725;
                  kk_box_t _x_x5731;
                  kk_string_t _x_x5732 = kk_string_dup(s_0_0, _ctx); /*string*/
                  _x_x5731 = kk_string_box(_x_x5732); /*10001*/
                  _x_x5725 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5726(_ctx), kk_std_core_types__list_box(_x_x1_36_11079, _ctx), _x_x5731, _ctx); /*10002*/
                  _match_x2435 = kk_std_core_types__maybe_unbox(_x_x5725, KK_OWNED, _ctx); /*maybe<hml_types/clioption>*/
                  if (kk_std_core_types__is_Just(_match_x2435, _ctx)) {
                    kk_box_t _box_x1643 = _match_x2435._cons.Just.value;
                    kk_hml__types__clioption o_0_0 = kk_hml__types__clioption_unbox(_box_x1643, KK_BORROWED, _ctx);
                    struct kk_hml__types_Clioption* _con_x5733 = kk_hml__types__as_Clioption(o_0_0, _ctx);
                    kk_hml__types__clioption_dup(o_0_0, _ctx);
                    kk_std_core_types__maybe_drop(_match_x2435, _ctx);
                    kk_std_core_types__list x_13_11332;
                    kk_box_t _x_x5734;
                    kk_ref_t _x_x5735 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
                    _x_x5734 = kk_ref_get(_x_x5735,kk_context()); /*10000*/
                    x_13_11332 = kk_std_core_types__list_unbox(_x_x5734, KK_OWNED, _ctx); /*list<string>*/
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__list_drop(x_13_11332, _ctx);
                      kk_box_t _x_x5736 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5737(error, o_0_0, options, remaining, s_0_0, _ctx), _ctx); /*10001*/
                      kk_unit_unbox(_x_x5736); return kk_Unit;
                    }
                    {
                      kk_hml__types__mlift_hc__parse__loop_11162(error, o_0_0, options, remaining, s_0_0, x_13_11332, _ctx); return kk_Unit;
                    }
                  }
                  {
                    kk_ref_drop(remaining, _ctx);
                    kk_ref_drop(options, _ctx);
                    kk_string_t _b_x1651_1766;
                    kk_string_t _x_x5739;
                    kk_define_string_literal(static, _s_x5740, 17, "unknown option: -", _ctx)
                    _x_x5739 = kk_string_dup(_s_x5740, _ctx); /*string*/
                    _b_x1651_1766 = kk_std_core_types__lp__plus__plus__rp_(_x_x5739, s_0_0, _ctx); /*string*/
                    kk_unit_t _brw_x2436 = kk_Unit;
                    kk_ref_set_borrow(error,(kk_string_box(_b_x1651_1766)),kk_context());
                    kk_ref_drop(error, _ctx);
                    _brw_x2436; return kk_Unit;
                  }
                }
              }
              {
                kk_ref_drop(options, _ctx);
                kk_ref_drop(flags, _ctx);
                kk_ref_drop(error, _ctx);
                kk_std_core_types__list _x_x1_40_11085;
                kk_box_t _x_x5741 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5742(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
                _x_x1_40_11085 = kk_std_core_types__list_unbox(_x_x5741, KK_OWNED, _ctx); /*list<(string, hml_types/clispec)>*/
                kk_std_core_types__maybe _match_x2427;
                kk_box_t _x_x5745;
                kk_box_t _x_x5750;
                kk_string_t _x_x5751 = kk_string_dup(a, _ctx); /*string*/
                _x_x5750 = kk_string_box(_x_x5751); /*10001*/
                _x_x5745 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5746(_ctx), kk_std_core_types__list_box(_x_x1_40_11085, _ctx), _x_x5750, _ctx); /*10002*/
                _match_x2427 = kk_std_core_types__maybe_unbox(_x_x5745, KK_OWNED, _ctx); /*maybe<(string, hml_types/clispec)>*/
                if (kk_std_core_types__is_Just(_match_x2427, _ctx)) {
                  kk_box_t _box_x1668 = _match_x2427._cons.Just.value;
                  kk_ref_drop(positionals, _ctx);
                  kk_std_core_types__maybe_drop(_match_x2427, _ctx);
                  kk_unit_t x_14_11334 = kk_Unit;
                  kk_unit_t _brw_x2431 = kk_Unit;
                  kk_ref_set_borrow(subcmd,(kk_string_box(a)),kk_context());
                  kk_ref_drop(subcmd, _ctx);
                  _brw_x2431;
                  if (kk_yielding(kk_context())) {
                    kk_box_t _x_x5752 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5753(remaining, sub__args, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5752); return kk_Unit;
                  }
                  {
                    kk_hml__types__mlift_hc__parse__loop_11165(remaining, sub__args, x_14_11334, _ctx); return kk_Unit;
                  }
                }
                {
                  kk_ref_drop(subcmd, _ctx);
                  kk_ref_drop(sub__args, _ctx);
                  kk_ref_drop(remaining, _ctx);
                  kk_std_core_types__list x_15_11336;
                  kk_box_t _x_x5755;
                  kk_ref_t _x_x5756 = kk_ref_dup(positionals, _ctx); /*local-var<24443,list<string>>*/
                  _x_x5755 = kk_ref_get(_x_x5756,kk_context()); /*10000*/
                  x_15_11336 = kk_std_core_types__list_unbox(_x_x5755, KK_OWNED, _ctx); /*list<string>*/
                  kk_function_t next_15_11337 = kk_hml__types__new_mlift_hc__parse__loop_11167_fun5757(a, positionals, _ctx); /*(list<string>) -> <local<24443>,hml_types/hica-brk,exn,div> ()*/;
                  if (kk_yielding(kk_context())) {
                    kk_std_core_types__list_drop(x_15_11336, _ctx);
                    kk_box_t _x_x5759 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11167_fun5760(next_15_11337, _ctx), _ctx); /*10001*/
                    kk_unit_unbox(_x_x5759); return kk_Unit;
                  }
                  {
                    kk_function_call(kk_unit_t, (kk_function_t, kk_std_core_types__list, kk_context_t*), next_15_11337, (next_15_11337, x_15_11336, _ctx), _ctx); return kk_Unit;
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
struct kk_hml__types__mlift_hc__parse__loop_11168_fun5764__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_hml__types__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11168_fun5764(kk_function_t _fself, kk_box_t _b_x1825, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11168_fun5764(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__types__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11168_fun5764__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11168_fun5764__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11168_fun5764, kk_context());
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

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11168_fun5764(kk_function_t _fself, kk_box_t _b_x1825, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11168_fun5764__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11168_fun5764__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<24443,string> */
  kk_ref_t flags = _self->flags; /* local-var<24443,list<string>> */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_hml__types__clispec spec = _self->spec; /* hml_types/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<24443,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_hml__types__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_unit_t wild___1827 = kk_Unit;
  kk_unit_unbox(_b_x1825);
  kk_unit_t _x_x5765 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11167(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, wild___1827, _ctx);
  return kk_unit_box(_x_x5765);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11168(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__types__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10749, kk_context_t* _ctx) { /* forall<h> (a : string, error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__list _b_x1821_1823 = kk_std_core_list_drop(_y_x10749, kk_integer_from_small(1), _ctx); /*list<string>*/;
  kk_unit_t x_11341 = kk_Unit;
  kk_ref_set_borrow(remaining,(kk_std_core_types__list_box(_b_x1821_1823, _ctx)),kk_context());
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5763 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11168_fun5764(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5763); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11167(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11341, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11169_fun5769__t {
  struct kk_function_s _base;
  kk_string_t a;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_hml__types__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11169_fun5769(kk_function_t _fself, kk_box_t _b_x1833, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11169_fun5769(kk_string_t a, kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__types__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11169_fun5769__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11169_fun5769__t, 10, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11169_fun5769, kk_context());
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

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11169_fun5769(kk_function_t _fself, kk_box_t _b_x1833, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11169_fun5769__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11169_fun5769__t*, _fself, _ctx);
  kk_string_t a = _self->a; /* string */
  kk_ref_t error = _self->error; /* local-var<24443,string> */
  kk_ref_t flags = _self->flags; /* local-var<24443,list<string>> */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_hml__types__clispec spec = _self->spec; /* hml_types/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<24443,string> */
  kk_drop_match(_self, {kk_string_dup(a, _ctx);kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_hml__types__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10749_1835 = kk_std_core_types__list_unbox(_b_x1833, KK_OWNED, _ctx); /*list<string>*/;
  kk_unit_t _x_x5770 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11168(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _y_x10749_1835, _ctx);
  return kk_unit_box(_x_x5770);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11169(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__types__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_string_t a, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, a : string) -> <exn,local<h>,hica-brk,div> () */ 
  kk_std_core_types__list x_11343;
  kk_box_t _x_x5766;
  kk_ref_t _x_x5767 = kk_ref_dup(remaining, _ctx); /*local-var<24443,list<string>>*/
  _x_x5766 = kk_ref_get(_x_x5767,kk_context()); /*10000*/
  x_11343 = kk_std_core_types__list_unbox(_x_x5766, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_11343, _ctx);
    kk_box_t _x_x5768 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11169_fun5769(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5768); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11168(a, error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11343, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11170_fun5781__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11170_fun5781(kk_function_t _fself, kk_box_t _b_x1843, kk_box_t _b_x1844, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11170_fun5781(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__parse__loop_11170_fun5781, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11170_fun5781(kk_function_t _fself, kk_box_t _b_x1843, kk_box_t _b_x1844, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5782;
  kk_std_core_types__maybe _match_x2417 = kk_std_core_types__maybe_unbox(_b_x1843, KK_OWNED, _ctx); /*maybe<string>*/;
  if (kk_std_core_types__is_Just(_match_x2417, _ctx)) {
    kk_box_t _box_x1836 = _match_x2417._cons.Just.value;
    kk_string_t x_0 = kk_string_unbox(_box_x1836);
    kk_string_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(_match_x2417, _ctx);
    kk_box_drop(_b_x1844, _ctx);
    _x_x5782 = x_0; /*string*/
  }
  else {
    kk_string_t _b_x1837_1849;
    kk_string_t _x_x5783;
    kk_define_string_literal(static, _s_x5784, 22, "unexpected Nothing in ", _ctx)
    _x_x5783 = kk_string_dup(_s_x5784, _ctx); /*string*/
    kk_string_t _x_x5785 = kk_string_unbox(_b_x1844); /*string*/
    _b_x1837_1849 = kk_std_core_types__lp__plus__plus__rp_(_x_x5783, _x_x5785, _ctx); /*string*/
    kk_box_t _x_x5786 = kk_std_core_exn_throw(_b_x1837_1849, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    _x_x5782 = kk_string_unbox(_x_x5786); /*string*/
  }
  return kk_string_box(_x_x5782);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11170_fun5788__t {
  struct kk_function_s _base;
  kk_ref_t error;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t remaining;
  kk_hml__types__clispec spec;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11170_fun5788(kk_function_t _fself, kk_box_t _b_x1854, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11170_fun5788(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__types__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11170_fun5788__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11170_fun5788__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11170_fun5788, kk_context());
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

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11170_fun5788(kk_function_t _fself, kk_box_t _b_x1854, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11170_fun5788__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11170_fun5788__t*, _fself, _ctx);
  kk_ref_t error = _self->error; /* local-var<24443,string> */
  kk_ref_t flags = _self->flags; /* local-var<24443,list<string>> */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_ref_t remaining = _self->remaining; /* local-var<24443,list<string>> */
  kk_hml__types__clispec spec = _self->spec; /* hml_types/clispec */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<24443,string> */
  kk_drop_match(_self, {kk_ref_dup(error, _ctx);kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(remaining, _ctx);kk_hml__types__clispec_dup(spec, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t a_1856 = kk_string_unbox(_b_x1854); /*string*/;
  kk_unit_t _x_x5789 = kk_Unit;
  kk_hml__types__mlift_hc__parse__loop_11169(error, flags, options, positionals, remaining, spec, sub__args, subcmd, a_1856, _ctx);
  return kk_unit_box(_x_x5789);
}

kk_unit_t kk_hml__types__mlift_hc__parse__loop_11170(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t remaining, kk_hml__types__clispec spec, kk_ref_t sub__args, kk_ref_t subcmd, kk_std_core_types__list _y_x10747, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, remaining : local-var<h,list<string>>, spec : clispec, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, list<string>) -> <local<h>,exn,hica-brk,div> () */ 
  kk_std_core_types__maybe _x_x1_11022 = kk_std_core_list__index(_y_x10747, kk_integer_from_small(0), _ctx); /*maybe<string>*/;
  kk_string_t _x_x2_11023;
  kk_string_t _x_x5771;
  kk_define_string_literal(static, _s_x5772, 12, "hml_types.kk", _ctx)
  _x_x5771 = kk_string_dup(_s_x5772, _ctx); /*string*/
  kk_string_t _x_x5773;
  kk_string_t _x_x5774;
  kk_define_string_literal(static, _s_x5775, 1, "(", _ctx)
  _x_x5774 = kk_string_dup(_s_x5775, _ctx); /*string*/
  kk_string_t _x_x5776;
  kk_string_t _x_x5777 = kk_std_core_int_show(kk_integer_from_small(782), _ctx); /*string*/
  kk_string_t _x_x5778;
  kk_define_string_literal(static, _s_x5779, 1, ")", _ctx)
  _x_x5778 = kk_string_dup(_s_x5779, _ctx); /*string*/
  _x_x5776 = kk_std_core_types__lp__plus__plus__rp_(_x_x5777, _x_x5778, _ctx); /*string*/
  _x_x5773 = kk_std_core_types__lp__plus__plus__rp_(_x_x5774, _x_x5776, _ctx); /*string*/
  _x_x2_11023 = kk_std_core_types__lp__plus__plus__rp_(_x_x5771, _x_x5773, _ctx); /*string*/
  kk_ssize_t _b_x1839_1845 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_string_t x_11345;
  kk_box_t _x_x5780 = kk_std_core_hnd__open_at2(_b_x1839_1845, kk_hml__types__new_mlift_hc__parse__loop_11170_fun5781(_ctx), kk_std_core_types__maybe_box(_x_x1_11022, _ctx), kk_string_box(_x_x2_11023), _ctx); /*10002*/
  x_11345 = kk_string_unbox(_x_x5780); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11345, _ctx);
    kk_box_t _x_x5787 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11170_fun5788(error, flags, options, positionals, remaining, spec, sub__args, subcmd, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5787); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11169(error, flags, options, positionals, remaining, spec, sub__args, subcmd, x_11345, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__parse__loop_11171_fun5792__t {
  struct kk_function_s _base;
  kk_ref_t flags;
  kk_ref_t options;
  kk_ref_t positionals;
  kk_ref_t sub__args;
  kk_ref_t subcmd;
};
static kk_box_t kk_hml__types__mlift_hc__parse__loop_11171_fun5792(kk_function_t _fself, kk_box_t _b_x1862, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__parse__loop_11171_fun5792(kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11171_fun5792__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__parse__loop_11171_fun5792__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__parse__loop_11171_fun5792, kk_context());
  _self->flags = flags;
  _self->options = options;
  _self->positionals = positionals;
  _self->sub__args = sub__args;
  _self->subcmd = subcmd;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__parse__loop_11171_fun5792(kk_function_t _fself, kk_box_t _b_x1862, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__parse__loop_11171_fun5792__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__parse__loop_11171_fun5792__t*, _fself, _ctx);
  kk_ref_t flags = _self->flags; /* local-var<24443,list<string>> */
  kk_ref_t options = _self->options; /* local-var<24443,list<(string, string)>> */
  kk_ref_t positionals = _self->positionals; /* local-var<24443,list<string>> */
  kk_ref_t sub__args = _self->sub__args; /* local-var<24443,list<string>> */
  kk_ref_t subcmd = _self->subcmd; /* local-var<24443,string> */
  kk_drop_match(_self, {kk_ref_dup(flags, _ctx);kk_ref_dup(options, _ctx);kk_ref_dup(positionals, _ctx);kk_ref_dup(sub__args, _ctx);kk_ref_dup(subcmd, _ctx);}, {}, _ctx)
  kk_string_t _y_x10866_1864 = kk_string_unbox(_b_x1862); /*string*/;
  kk_hml__types__parseraw _x_x5793 = kk_hml__types__mlift_hc__parse__loop_11119(flags, options, positionals, sub__args, subcmd, _y_x10866_1864, _ctx); /*hml_types/parseraw*/
  return kk_hml__types__parseraw_box(_x_x5793, _ctx);
}

kk_hml__types__parseraw kk_hml__types__mlift_hc__parse__loop_11171(kk_ref_t error, kk_ref_t flags, kk_ref_t options, kk_ref_t positionals, kk_ref_t sub__args, kk_ref_t subcmd, kk_unit_t _y_x10865, kk_context_t* _ctx) { /* forall<h> (error : local-var<h,string>, flags : local-var<h,list<string>>, options : local-var<h,list<(string, string)>>, positionals : local-var<h,list<string>>, sub_args : local-var<h,list<string>>, subcmd : local-var<h,string>, ()) -> <div,exn,local<h>> parseraw */ 
  {
    kk_string_t x_11347;
    kk_box_t _x_x5790 = kk_ref_get(error,kk_context()); /*10000*/
    x_11347 = kk_string_unbox(_x_x5790); /*string*/
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_11347, _ctx);
      kk_box_t _x_x5791 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__parse__loop_11171_fun5792(flags, options, positionals, sub__args, subcmd, _ctx), _ctx); /*10001*/
      return kk_hml__types__parseraw_unbox(_x_x5791, KK_OWNED, _ctx);
    }
    {
      return kk_hml__types__mlift_hc__parse__loop_11119(flags, options, positionals, sub__args, subcmd, x_11347, _ctx);
    }
  }
}


// lift anonymous function
struct kk_hml__types_hc__parse__loop_fun5803__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__parse__loop_fun5803(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5803(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__parse__loop_fun5803, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_hc__parse__loop_fun5804__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__parse__loop_fun5804(kk_function_t _fself, kk_function_t _b_x1888, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5804(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__parse__loop_fun5804, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_hc__parse__loop_fun5805__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__parse__loop_fun5805(kk_function_t _fself, kk_box_t _b_x1882, kk_function_t _b_x1883, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5805(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__parse__loop_fun5805, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__parse__loop_fun5805(kk_function_t _fself, kk_box_t _b_x1882, kk_function_t _b_x1883, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_box_drop(_b_x1882, _ctx);
  kk_function_drop(_b_x1883, _ctx);
  return kk_unit_box(kk_Unit);
}
static kk_box_t kk_hml__types_hc__parse__loop_fun5804(kk_function_t _fself, kk_function_t _b_x1888, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return kk_std_core_hnd_protect(kk_unit_box(kk_Unit), kk_hml__types_new_hc__parse__loop_fun5805(_ctx), _b_x1888, _ctx);
}
static kk_box_t kk_hml__types_hc__parse__loop_fun5803(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ___wildcard_x688__16, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_datatype_ptr_dropn(___wildcard_x688__16, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to(m, kk_hml__types_new_hc__parse__loop_fun5804(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__parse__loop_fun5806__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__parse__loop_fun5806(kk_function_t _fself, kk_box_t _b_x1905, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5806(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__parse__loop_fun5806, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__parse__loop_fun5806(kk_function_t _fself, kk_box_t _b_x1905, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  return _b_x1905;
}


// lift anonymous function
struct kk_hml__types_hc__parse__loop_fun5808__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_hml__types__clispec spec;
};
static kk_box_t kk_hml__types_hc__parse__loop_fun5808(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5808(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_hml__types__clispec spec, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5808__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__parse__loop_fun5808__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__parse__loop_fun5808, kk_context());
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
struct kk_hml__types_hc__parse__loop_fun5811__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
};
static bool kk_hml__types_hc__parse__loop_fun5811(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5811(kk_ref_t loc_4, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5811__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__parse__loop_fun5811__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__parse__loop_fun5811, kk_context());
  _self->loc_4 = loc_4;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml__types_hc__parse__loop_fun5814__t {
  struct kk_function_s _base;
  kk_ref_t loc_4;
};
static kk_box_t kk_hml__types_hc__parse__loop_fun5814(kk_function_t _fself, kk_box_t _b_x1895, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5814(kk_ref_t loc_4, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5814__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__parse__loop_fun5814__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__parse__loop_fun5814, kk_context());
  _self->loc_4 = loc_4;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__parse__loop_fun5814(kk_function_t _fself, kk_box_t _b_x1895, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5814__t* _self = kk_function_as(struct kk_hml__types_hc__parse__loop_fun5814__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<24443,list<string>> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);}, {}, _ctx)
  bool _x_x5815;
  kk_string_t _x_x5816 = kk_string_unbox(_b_x1895); /*string*/
  _x_x5815 = kk_hml__types__mlift_hc__parse__loop_11121(loc_4, _x_x5816, _ctx); /*bool*/
  return kk_bool_box(_x_x5815);
}
static bool kk_hml__types_hc__parse__loop_fun5811(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5811__t* _self = kk_function_as(struct kk_hml__types_hc__parse__loop_fun5811__t*, _fself, _ctx);
  kk_ref_t loc_4 = _self->loc_4; /* local-var<24443,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<24443,string> */
  kk_drop_match(_self, {kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_string_t x_0_11366;
  kk_box_t _x_x5812 = kk_ref_get(loc_5,kk_context()); /*10000*/
  x_0_11366 = kk_string_unbox(_x_x5812); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_0_11366, _ctx);
    kk_box_t _x_x5813 = kk_std_core_hnd_yield_extend(kk_hml__types_new_hc__parse__loop_fun5814(loc_4, _ctx), _ctx); /*10001*/
    return kk_bool_unbox(_x_x5813);
  }
  {
    return kk_hml__types__mlift_hc__parse__loop_11121(loc_4, x_0_11366, _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__parse__loop_fun5817__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_hml__types__clispec spec;
};
static kk_unit_t kk_hml__types_hc__parse__loop_fun5817(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5817(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_hml__types__clispec spec, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5817__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__parse__loop_fun5817__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__parse__loop_fun5817, kk_context());
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
struct kk_hml__types_hc__parse__loop_fun5821__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_4;
  kk_ref_t loc_5;
  kk_hml__types__clispec spec;
};
static kk_box_t kk_hml__types_hc__parse__loop_fun5821(kk_function_t _fself, kk_box_t _b_x1901, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5821(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_4, kk_ref_t loc_5, kk_hml__types__clispec spec, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5821__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__parse__loop_fun5821__t, 9, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__parse__loop_fun5821, kk_context());
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

static kk_box_t kk_hml__types_hc__parse__loop_fun5821(kk_function_t _fself, kk_box_t _b_x1901, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5821__t* _self = kk_function_as(struct kk_hml__types_hc__parse__loop_fun5821__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<24443,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<24443,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<24443,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<24443,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<24443,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<24443,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<24443,string> */
  kk_hml__types__clispec spec = _self->spec; /* hml_types/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_hml__types__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5822 = kk_Unit;
  kk_std_core_types__list _x_x5823 = kk_std_core_types__list_unbox(_b_x1901, KK_OWNED, _ctx); /*list<string>*/
  kk_hml__types__mlift_hc__parse__loop_11170(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, _x_x5823, _ctx);
  return kk_unit_box(_x_x5822);
}
static kk_unit_t kk_hml__types_hc__parse__loop_fun5817(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5817__t* _self = kk_function_as(struct kk_hml__types_hc__parse__loop_fun5817__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<24443,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<24443,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<24443,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<24443,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<24443,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<24443,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<24443,string> */
  kk_hml__types__clispec spec = _self->spec; /* hml_types/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_hml__types__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_std_core_types__list x_1_11368;
  kk_box_t _x_x5818;
  kk_ref_t _x_x5819 = kk_ref_dup(loc_4, _ctx); /*local-var<24443,list<string>>*/
  _x_x5818 = kk_ref_get(_x_x5819,kk_context()); /*10000*/
  x_1_11368 = kk_std_core_types__list_unbox(_x_x5818, KK_OWNED, _ctx); /*list<string>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_1_11368, _ctx);
    kk_box_t _x_x5820 = kk_std_core_hnd_yield_extend(kk_hml__types_new_hc__parse__loop_fun5821(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx); /*10001*/
    kk_unit_unbox(_x_x5820); return kk_Unit;
  }
  {
    kk_hml__types__mlift_hc__parse__loop_11170(loc_5, loc, loc_0, loc_1, loc_4, spec, loc_3, loc_2, x_1_11368, _ctx); return kk_Unit;
  }
}
static kk_box_t kk_hml__types_hc__parse__loop_fun5808(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5808__t* _self = kk_function_as(struct kk_hml__types_hc__parse__loop_fun5808__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<24443,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<24443,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<24443,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<24443,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<24443,list<string>> */
  kk_ref_t loc_4 = _self->loc_4; /* local-var<24443,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<24443,string> */
  kk_hml__types__clispec spec = _self->spec; /* hml_types/clispec */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_4, _ctx);kk_ref_dup(loc_5, _ctx);kk_hml__types__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_unit_t _x_x5809 = kk_Unit;
  kk_function_t _x_x5810;
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5810 = kk_hml__types_new_hc__parse__loop_fun5811(loc_4, loc_5, _ctx); /*() -> <div,local<24443>,exn,hml_types/hica-brk> bool*/
  kk_std_core_while(_x_x5810, kk_hml__types_new_hc__parse__loop_fun5817(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx), _ctx);
  return kk_unit_box(_x_x5809);
}


// lift anonymous function
struct kk_hml__types_hc__parse__loop_fun5826__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_ref_t loc_0;
  kk_ref_t loc_1;
  kk_ref_t loc_2;
  kk_ref_t loc_3;
  kk_ref_t loc_5;
};
static kk_box_t kk_hml__types_hc__parse__loop_fun5826(kk_function_t _fself, kk_box_t _b_x1921, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__parse__loop_fun5826(kk_ref_t loc, kk_ref_t loc_0, kk_ref_t loc_1, kk_ref_t loc_2, kk_ref_t loc_3, kk_ref_t loc_5, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5826__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__parse__loop_fun5826__t, 7, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__parse__loop_fun5826, kk_context());
  _self->loc = loc;
  _self->loc_0 = loc_0;
  _self->loc_1 = loc_1;
  _self->loc_2 = loc_2;
  _self->loc_3 = loc_3;
  _self->loc_5 = loc_5;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__parse__loop_fun5826(kk_function_t _fself, kk_box_t _b_x1921, kk_context_t* _ctx) {
  struct kk_hml__types_hc__parse__loop_fun5826__t* _self = kk_function_as(struct kk_hml__types_hc__parse__loop_fun5826__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<24443,list<string>> */
  kk_ref_t loc_0 = _self->loc_0; /* local-var<24443,list<(string, string)>> */
  kk_ref_t loc_1 = _self->loc_1; /* local-var<24443,list<string>> */
  kk_ref_t loc_2 = _self->loc_2; /* local-var<24443,string> */
  kk_ref_t loc_3 = _self->loc_3; /* local-var<24443,list<string>> */
  kk_ref_t loc_5 = _self->loc_5; /* local-var<24443,string> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_ref_dup(loc_0, _ctx);kk_ref_dup(loc_1, _ctx);kk_ref_dup(loc_2, _ctx);kk_ref_dup(loc_3, _ctx);kk_ref_dup(loc_5, _ctx);}, {}, _ctx)
  kk_hml__types__parseraw _x_x5827;
  kk_unit_t _x_x5828 = kk_Unit;
  kk_unit_unbox(_b_x1921);
  _x_x5827 = kk_hml__types__mlift_hc__parse__loop_11171(loc_5, loc, loc_0, loc_1, loc_3, loc_2, _x_x5828, _ctx); /*hml_types/parseraw*/
  return kk_hml__types__parseraw_box(_x_x5827, _ctx);
}

kk_hml__types__parseraw kk_hml__types_hc__parse__loop(kk_hml__types__clispec spec, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure parseraw */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<24443,list<string>>*/;
  kk_ref_t loc_0 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<24443,list<(string, string)>>*/;
  kk_ref_t loc_1 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<24443,list<string>>*/;
  kk_ref_t loc_2;
  kk_box_t _x_x5794;
  kk_string_t _x_x5795 = kk_string_empty(); /*string*/
  _x_x5794 = kk_string_box(_x_x5795); /*10000*/
  loc_2 = kk_ref_alloc(_x_x5794,kk_context()); /*local-var<24443,string>*/
  kk_ref_t loc_3 = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<24443,list<string>>*/;
  kk_ref_t loc_4 = kk_ref_alloc((kk_std_core_types__list_box(args, _ctx)),kk_context()); /*local-var<24443,list<string>>*/;
  kk_ref_t loc_5;
  kk_box_t _x_x5797;
  kk_string_t _x_x5798 = kk_string_empty(); /*string*/
  _x_x5797 = kk_string_box(_x_x5798); /*10000*/
  loc_5 = kk_ref_alloc(_x_x5797,kk_context()); /*local-var<24443,string>*/
  kk_unit_t x_11363 = kk_Unit;
  kk_box_t _x_x5800;
  kk_hml__types__hica_brk _x_x5801;
  kk_std_core_hnd__clause0 _x_x5802 = kk_std_core_hnd__new_Clause0(kk_hml__types_new_hc__parse__loop_fun5803(_ctx), _ctx); /*hnd/clause0<10010,10011,10012,10013>*/
  _x_x5801 = kk_hml__types__new_Hnd_hica_brk(kk_reuse_null, 0, kk_integer_from_small(3), _x_x5802, _ctx); /*hml_types/hica-brk<30,31>*/
  kk_function_t _x_x5807;
  kk_ref_dup(loc, _ctx);
  kk_ref_dup(loc_0, _ctx);
  kk_ref_dup(loc_1, _ctx);
  kk_ref_dup(loc_2, _ctx);
  kk_ref_dup(loc_3, _ctx);
  kk_ref_dup(loc_4, _ctx);
  kk_ref_dup(loc_5, _ctx);
  _x_x5807 = kk_hml__types_new_hc__parse__loop_fun5808(loc, loc_0, loc_1, loc_2, loc_3, loc_4, loc_5, spec, _ctx); /*() -> <hml_types/hica-brk|669> 668*/
  _x_x5800 = kk_hml__types_hica_brk_fs__handle(_x_x5801, kk_hml__types_new_hc__parse__loop_fun5806(_ctx), _x_x5807, _ctx); /*670*/
  kk_unit_unbox(_x_x5800);
  kk_hml__types__parseraw res_5;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x5824;
    kk_function_t _x_x5825;
    kk_ref_dup(loc, _ctx);
    kk_ref_dup(loc_0, _ctx);
    kk_ref_dup(loc_1, _ctx);
    kk_ref_dup(loc_2, _ctx);
    kk_ref_dup(loc_3, _ctx);
    kk_ref_dup(loc_5, _ctx);
    _x_x5825 = kk_hml__types_new_hc__parse__loop_fun5826(loc, loc_0, loc_1, loc_2, loc_3, loc_5, _ctx); /*(10000) -> 10002 10001*/
    _x_x5824 = kk_std_core_hnd_yield_extend(_x_x5825, _ctx); /*10001*/
    res_5 = kk_hml__types__parseraw_unbox(_x_x5824, KK_OWNED, _ctx); /*hml_types/parseraw*/
  }
  else {
    kk_ref_t _x_x5829 = kk_ref_dup(loc_5, _ctx); /*local-var<24443,string>*/
    kk_ref_t _x_x5830 = kk_ref_dup(loc, _ctx); /*local-var<24443,list<string>>*/
    kk_ref_t _x_x5831 = kk_ref_dup(loc_0, _ctx); /*local-var<24443,list<(string, string)>>*/
    kk_ref_t _x_x5832 = kk_ref_dup(loc_1, _ctx); /*local-var<24443,list<string>>*/
    kk_ref_t _x_x5833 = kk_ref_dup(loc_3, _ctx); /*local-var<24443,list<string>>*/
    kk_ref_t _x_x5834 = kk_ref_dup(loc_2, _ctx); /*local-var<24443,string>*/
    res_5 = kk_hml__types__mlift_hc__parse__loop_11171(_x_x5829, _x_x5830, _x_x5831, _x_x5832, _x_x5833, _x_x5834, x_11363, _ctx); /*hml_types/parseraw*/
  }
  kk_hml__types__parseraw res_4;
  kk_box_t _x_x5835 = kk_std_core_hnd_prompt_local_var(loc_5, kk_hml__types__parseraw_box(res_5, _ctx), _ctx); /*10001*/
  res_4 = kk_hml__types__parseraw_unbox(_x_x5835, KK_OWNED, _ctx); /*hml_types/parseraw*/
  kk_hml__types__parseraw res_3;
  kk_box_t _x_x5836 = kk_std_core_hnd_prompt_local_var(loc_4, kk_hml__types__parseraw_box(res_4, _ctx), _ctx); /*10001*/
  res_3 = kk_hml__types__parseraw_unbox(_x_x5836, KK_OWNED, _ctx); /*hml_types/parseraw*/
  kk_hml__types__parseraw res_2;
  kk_box_t _x_x5837 = kk_std_core_hnd_prompt_local_var(loc_3, kk_hml__types__parseraw_box(res_3, _ctx), _ctx); /*10001*/
  res_2 = kk_hml__types__parseraw_unbox(_x_x5837, KK_OWNED, _ctx); /*hml_types/parseraw*/
  kk_hml__types__parseraw res_1;
  kk_box_t _x_x5838 = kk_std_core_hnd_prompt_local_var(loc_2, kk_hml__types__parseraw_box(res_2, _ctx), _ctx); /*10001*/
  res_1 = kk_hml__types__parseraw_unbox(_x_x5838, KK_OWNED, _ctx); /*hml_types/parseraw*/
  kk_hml__types__parseraw res_0;
  kk_box_t _x_x5839 = kk_std_core_hnd_prompt_local_var(loc_1, kk_hml__types__parseraw_box(res_1, _ctx), _ctx); /*10001*/
  res_0 = kk_hml__types__parseraw_unbox(_x_x5839, KK_OWNED, _ctx); /*hml_types/parseraw*/
  kk_hml__types__parseraw res;
  kk_box_t _x_x5840 = kk_std_core_hnd_prompt_local_var(loc_0, kk_hml__types__parseraw_box(res_0, _ctx), _ctx); /*10001*/
  res = kk_hml__types__parseraw_unbox(_x_x5840, KK_OWNED, _ctx); /*hml_types/parseraw*/
  kk_box_t _x_x5841 = kk_std_core_hnd_prompt_local_var(loc, kk_hml__types__parseraw_box(res, _ctx), _ctx); /*10001*/
  return kk_hml__types__parseraw_unbox(_x_x5841, KK_OWNED, _ctx);
}
 
// monadic lift

kk_hml__types__clioutcome kk_hml__types__mlift_hc__cli__parse__args_11172(kk_std_core_types__list final__options, kk_std_core_types__list flags, kk_std_core_types__list positionals, kk_string_t subcmd, kk_hml__types__clioutcome _y_x10882, kk_context_t* _ctx) { /* (final_options : list<(string, string)>, flags : list<string>, positionals : list<string>, subcmd : string, clioutcome) -> pure clioutcome */ 
  if (kk_hml__types__is_Parsed(_y_x10882, _ctx)) {
    struct kk_hml__types_Parsed* _con_x5842 = kk_hml__types__as_Parsed(_y_x10882, _ctx);
    kk_hml__types__cliresult hc__sub_0 = _con_x5842->cli__result;
    struct kk_hml__types_Cliresult* _con_x5843 = kk_hml__types__as_Cliresult(hc__sub_0, _ctx);
    kk_reuse_t _ru_x3070 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10882, _ctx)) {
      _ru_x3070 = (kk_datatype_ptr_reuse(_y_x10882, _ctx));
    }
    else {
      kk_hml__types__cliresult_dup(hc__sub_0, _ctx);
      kk_datatype_ptr_decref(_y_x10882, _ctx);
    }
    kk_hml__types__cliresult _b_x1955_1956 = hc__sub_0; /*hml_types/cliresult*/;
    if kk_likely(_ru_x3070!=NULL) {
      kk_std_core_types__maybe _x_x5845 = kk_std_core_types__new_Just(kk_hml__types__cliresult_box(_b_x1955_1956, _ctx), _ctx); /*maybe<10024>*/
      struct kk_hml__types_Parsed* _con_x5844 = (struct kk_hml__types_Parsed*)_ru_x3070;
      _con_x5844->cli__result = kk_hml__types__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5845, _ctx);
      return kk_hml__types__base_Parsed(_con_x5844, _ctx);
    }
    {
      kk_hml__types__cliresult _x_x5846;
      kk_std_core_types__maybe _x_x5847 = kk_std_core_types__new_Just(kk_hml__types__cliresult_box(_b_x1955_1956, _ctx), _ctx); /*maybe<10024>*/
      _x_x5846 = kk_hml__types__new_Cliresult(kk_reuse_null, 0, flags, final__options, positionals, subcmd, _x_x5847, _ctx); /*hml_types/cliresult*/
      return kk_hml__types__new_Parsed(kk_reuse_null, 0, _x_x5846, _ctx);
    }
  }
  {
    kk_string_drop(subcmd, _ctx);
    kk_std_core_types__list_drop(positionals, _ctx);
    kk_std_core_types__list_drop(flags, _ctx);
    kk_std_core_types__list_drop(final__options, _ctx);
    return _y_x10882;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5849__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5849(kk_function_t _fself, kk_box_t _b_x1959, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5849(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5849, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5849(kk_function_t _fself, kk_box_t _b_x1959, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5850;
  kk_hml__types__parseraw _match_x2411 = kk_hml__types__parseraw_unbox(_b_x1959, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5851 = kk_hml__types__as_Parseraw(_match_x2411, _ctx);
    kk_string_t _x = _con_x5851->raw__error;
    kk_std_core_types__list _pat_0 = _con_x5851->raw__flags;
    kk_std_core_types__list _pat_1 = _con_x5851->raw__options;
    kk_std_core_types__list _pat_2 = _con_x5851->raw__positionals;
    kk_string_t _pat_3 = _con_x5851->raw__subcmd;
    kk_std_core_types__list _pat_4 = _con_x5851->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2411, _ctx)) {
      kk_std_core_types__list_drop(_pat_4, _ctx);
      kk_string_drop(_pat_3, _ctx);
      kk_std_core_types__list_drop(_pat_2, _ctx);
      kk_std_core_types__list_drop(_pat_1, _ctx);
      kk_std_core_types__list_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(_match_x2411, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2411, _ctx);
    }
    _x_x5850 = _x; /*string*/
  }
  return kk_string_box(_x_x5850);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5855__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5855(kk_function_t _fself, kk_box_t _b_x1965, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5855(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5855, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5855(kk_function_t _fself, kk_box_t _b_x1965, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5856;
  kk_hml__types__parseraw _match_x2410 = kk_hml__types__parseraw_unbox(_b_x1965, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5857 = kk_hml__types__as_Parseraw(_match_x2410, _ctx);
    kk_string_t _pat_0_0 = _con_x5857->raw__error;
    kk_std_core_types__list _x_0 = _con_x5857->raw__flags;
    kk_std_core_types__list _pat_1_0 = _con_x5857->raw__options;
    kk_std_core_types__list _pat_2_0 = _con_x5857->raw__positionals;
    kk_string_t _pat_3_0 = _con_x5857->raw__subcmd;
    kk_std_core_types__list _pat_4_0 = _con_x5857->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2410, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_string_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2410, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2410, _ctx);
    }
    _x_x5856 = _x_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5856, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5861__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5861(kk_function_t _fself, kk_box_t _b_x1971, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5861(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5861, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5861(kk_function_t _fself, kk_box_t _b_x1971, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5862;
  kk_hml__types__parseraw _match_x2409 = kk_hml__types__parseraw_unbox(_b_x1971, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5863 = kk_hml__types__as_Parseraw(_match_x2409, _ctx);
    kk_string_t _pat_0_1 = _con_x5863->raw__error;
    kk_std_core_types__list _pat_1_1 = _con_x5863->raw__flags;
    kk_std_core_types__list _x_1 = _con_x5863->raw__options;
    kk_std_core_types__list _pat_2_1 = _con_x5863->raw__positionals;
    kk_string_t _pat_3_1 = _con_x5863->raw__subcmd;
    kk_std_core_types__list _pat_4_1 = _con_x5863->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2409, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_string_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_std_core_types__list_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2409, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1, _ctx);
      kk_datatype_ptr_decref(_match_x2409, _ctx);
    }
    _x_x5862 = _x_1; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5862, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5867__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5867(kk_function_t _fself, kk_box_t _b_x1977, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5867(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5867, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5867(kk_function_t _fself, kk_box_t _b_x1977, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5868;
  kk_hml__types__parseraw _match_x2408 = kk_hml__types__parseraw_unbox(_b_x1977, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5869 = kk_hml__types__as_Parseraw(_match_x2408, _ctx);
    kk_string_t _pat_0_2 = _con_x5869->raw__error;
    kk_std_core_types__list _pat_1_2 = _con_x5869->raw__flags;
    kk_std_core_types__list _pat_2_2 = _con_x5869->raw__options;
    kk_std_core_types__list _x_2 = _con_x5869->raw__positionals;
    kk_string_t _pat_3_2 = _con_x5869->raw__subcmd;
    kk_std_core_types__list _pat_4_2 = _con_x5869->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2408, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2, _ctx);
      kk_string_drop(_pat_3_2, _ctx);
      kk_std_core_types__list_drop(_pat_2_2, _ctx);
      kk_std_core_types__list_drop(_pat_1_2, _ctx);
      kk_string_drop(_pat_0_2, _ctx);
      kk_datatype_ptr_free(_match_x2408, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2, _ctx);
      kk_datatype_ptr_decref(_match_x2408, _ctx);
    }
    _x_x5868 = _x_2; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5868, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5873__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5873(kk_function_t _fself, kk_box_t _b_x1983, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5873(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5873, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5873(kk_function_t _fself, kk_box_t _b_x1983, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5874;
  kk_hml__types__parseraw _match_x2407 = kk_hml__types__parseraw_unbox(_b_x1983, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5875 = kk_hml__types__as_Parseraw(_match_x2407, _ctx);
    kk_string_t _pat_0_3 = _con_x5875->raw__error;
    kk_std_core_types__list _pat_1_3 = _con_x5875->raw__flags;
    kk_std_core_types__list _pat_2_3 = _con_x5875->raw__options;
    kk_std_core_types__list _pat_3_3 = _con_x5875->raw__positionals;
    kk_string_t _x_3 = _con_x5875->raw__subcmd;
    kk_std_core_types__list _pat_4_3 = _con_x5875->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2407, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3, _ctx);
      kk_std_core_types__list_drop(_pat_3_3, _ctx);
      kk_std_core_types__list_drop(_pat_2_3, _ctx);
      kk_std_core_types__list_drop(_pat_1_3, _ctx);
      kk_string_drop(_pat_0_3, _ctx);
      kk_datatype_ptr_free(_match_x2407, _ctx);
    }
    else {
      kk_string_dup(_x_3, _ctx);
      kk_datatype_ptr_decref(_match_x2407, _ctx);
    }
    _x_x5874 = _x_3; /*string*/
  }
  return kk_string_box(_x_x5874);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5879__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5879(kk_function_t _fself, kk_box_t _b_x1989, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5879(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5879, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5879(kk_function_t _fself, kk_box_t _b_x1989, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5880;
  kk_hml__types__parseraw _match_x2406 = kk_hml__types__parseraw_unbox(_b_x1989, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5881 = kk_hml__types__as_Parseraw(_match_x2406, _ctx);
    kk_string_t _pat_0_4 = _con_x5881->raw__error;
    kk_std_core_types__list _pat_1_4 = _con_x5881->raw__flags;
    kk_std_core_types__list _pat_2_4 = _con_x5881->raw__options;
    kk_std_core_types__list _pat_3_4 = _con_x5881->raw__positionals;
    kk_string_t _pat_4_4 = _con_x5881->raw__subcmd;
    kk_std_core_types__list _x_4 = _con_x5881->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2406, _ctx)) {
      kk_string_drop(_pat_4_4, _ctx);
      kk_std_core_types__list_drop(_pat_3_4, _ctx);
      kk_std_core_types__list_drop(_pat_2_4, _ctx);
      kk_std_core_types__list_drop(_pat_1_4, _ctx);
      kk_string_drop(_pat_0_4, _ctx);
      kk_datatype_ptr_free(_match_x2406, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4, _ctx);
      kk_datatype_ptr_decref(_match_x2406, _ctx);
    }
    _x_x5880 = _x_4; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5880, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5890__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5890(kk_function_t _fself, kk_box_t _b_x1995, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5890(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5890, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5890(kk_function_t _fself, kk_box_t _b_x1995, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5891;
  bool b_2093 = kk_bool_unbox(_b_x1995); /*bool*/;
  if (b_2093) {
    _x_x5891 = false; /*bool*/
  }
  else {
    _x_x5891 = true; /*bool*/
  }
  return kk_bool_box(_x_x5891);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5893__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5893(kk_function_t _fself, kk_box_t _b_x2004, kk_box_t _b_x2005, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5893(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5893, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5896__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5896(kk_function_t _fself, kk_box_t _b_x1999, kk_box_t _b_x2000, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5896(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5896, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5896(kk_function_t _fself, kk_box_t _b_x1999, kk_box_t _b_x2000, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5897;
  kk_std_core_types__list _x_x5898 = kk_std_core_types__list_unbox(_b_x1999, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_hml__types__clioption _x_x5899 = kk_hml__types__clioption_unbox(_b_x2000, KK_OWNED, _ctx); /*hml_types/clioption*/
  _x_x5897 = kk_hml__types_hc__add__default(_x_x5898, _x_x5899, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x5897, _ctx);
}
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5893(kk_function_t _fself, kk_box_t _b_x2004, kk_box_t _b_x2005, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5894;
  kk_hml__types__clispec _match_x2403 = kk_hml__types__clispec_unbox(_b_x2004, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5895 = kk_hml__types__as_Clispec(_match_x2403, _ctx);
    kk_string_t _pat_0_7 = _con_x5895->app__name;
    kk_string_t _pat_1_6 = _con_x5895->app__version;
    kk_string_t _pat_2_6 = _con_x5895->app__about;
    kk_std_core_types__list _pat_3_6 = _con_x5895->app__flags;
    kk_std_core_types__list _x_5 = _con_x5895->app__options;
    kk_std_core_types__list _pat_4_6 = _con_x5895->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x5895->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2403, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6, _ctx);
      kk_std_core_types__list_drop(_pat_3_6, _ctx);
      kk_string_drop(_pat_2_6, _ctx);
      kk_string_drop(_pat_1_6, _ctx);
      kk_string_drop(_pat_0_7, _ctx);
      kk_datatype_ptr_free(_match_x2403, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5, _ctx);
      kk_datatype_ptr_decref(_match_x2403, _ctx);
    }
    _x_x5894 = _x_5; /*list<hml_types/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x5894, _b_x2005, kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5896(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5903__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5903(kk_function_t _fself, kk_box_t _b_x2028, kk_box_t _b_x2029, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5903(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5903, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5906__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5906(kk_function_t _fself, kk_integer_t _b_x2018, kk_box_t _b_x2019, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5906(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5906, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5906(kk_function_t _fself, kk_integer_t _b_x2018, kk_box_t _b_x2019, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x5907 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x2018, _ctx), _b_x2019, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x5907, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5911__t {
  struct kk_function_s _base;
  kk_box_t _b_x2029;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5911(kk_function_t _fself, kk_box_t _b_x2023, kk_box_t _b_x2024, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5911(kk_box_t _b_x2029, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5911__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5911__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__cli__parse__args_11173_fun5911, kk_context());
  _self->_b_x2029 = _b_x2029;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5911(kk_function_t _fself, kk_box_t _b_x2023, kk_box_t _b_x2024, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5911__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5911__t*, _fself, _ctx);
  kk_box_t _b_x2029 = _self->_b_x2029; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2029, _ctx);}, {}, _ctx)
  kk_string_t _x_x5912;
  kk_std_core_types__list _x_x5913 = kk_std_core_types__list_unbox(_b_x2029, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x5914 = kk_string_unbox(_b_x2023); /*string*/
  kk_std_core_types__tuple2 _x_x5915 = kk_std_core_types__tuple2_unbox(_b_x2024, KK_OWNED, _ctx); /*(int, hml_types/cliarg)*/
  _x_x5912 = kk_hml__types_hc__check__one__arg(_x_x5913, _x_x5914, _x_x5915, _ctx); /*string*/
  return kk_string_box(_x_x5912);
}
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5903(kk_function_t _fself, kk_box_t _b_x2028, kk_box_t _b_x2029, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x2020_2033;
  kk_std_core_types__list _x_x5904;
  kk_hml__types__clispec _match_x2402 = kk_hml__types__clispec_unbox(_b_x2028, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5905 = kk_hml__types__as_Clispec(_match_x2402, _ctx);
    kk_string_t _pat_0_8 = _con_x5905->app__name;
    kk_string_t _pat_1_7 = _con_x5905->app__version;
    kk_string_t _pat_2_7 = _con_x5905->app__about;
    kk_std_core_types__list _pat_3_7 = _con_x5905->app__flags;
    kk_std_core_types__list _pat_4_7 = _con_x5905->app__options;
    kk_std_core_types__list _x_6 = _con_x5905->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x5905->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2402, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7, _ctx);
      kk_std_core_types__list_drop(_pat_3_7, _ctx);
      kk_string_drop(_pat_2_7, _ctx);
      kk_string_drop(_pat_1_7, _ctx);
      kk_string_drop(_pat_0_8, _ctx);
      kk_datatype_ptr_free(_match_x2402, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6, _ctx);
      kk_datatype_ptr_decref(_match_x2402, _ctx);
    }
    _x_x5904 = _x_6; /*list<hml_types/cliarg>*/
  }
  _b_x2020_2033 = kk_std_core_list_map_indexed(_x_x5904, kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5906(_ctx), _ctx); /*list<(int, hml_types/cliarg)>*/
  kk_box_t _x_x5908;
  kk_string_t _x_x5909 = kk_string_empty(); /*string*/
  _x_x5908 = kk_string_box(_x_x5909); /*10002*/
  return kk_std_core_list_foldl(_b_x2020_2033, _x_x5908, kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5911(_b_x2029, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5922__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5922(kk_function_t _fself, kk_box_t _b_x2046, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5922(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5922, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5922(kk_function_t _fself, kk_box_t _b_x2046, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5923;
  bool b_0_2094 = kk_bool_unbox(_b_x2046); /*bool*/;
  if (b_0_2094) {
    _x_x5923 = false; /*bool*/
  }
  else {
    _x_x5923 = true; /*bool*/
  }
  return kk_bool_box(_x_x5923);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5926__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5926(kk_function_t _fself, kk_box_t _b_x2049, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5926(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5926, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5926(kk_function_t _fself, kk_box_t _b_x2049, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5927;
  bool b_1_2095 = kk_bool_unbox(_b_x2049); /*bool*/;
  if (b_1_2095) {
    _x_x5927 = false; /*bool*/
  }
  else {
    _x_x5927 = true; /*bool*/
  }
  return kk_bool_box(_x_x5927);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5929__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5929(kk_function_t _fself, kk_box_t _b_x2052, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5929(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5929, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5929(kk_function_t _fself, kk_box_t _b_x2052, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5930;
  kk_hml__types__clispec _match_x2397 = kk_hml__types__clispec_unbox(_b_x2052, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x5931 = kk_hml__types__as_Clispec(_match_x2397, _ctx);
    kk_string_t _pat_0_11 = _con_x5931->app__name;
    kk_string_t _pat_1_7_0 = _con_x5931->app__version;
    kk_string_t _pat_2_7_0 = _con_x5931->app__about;
    kk_std_core_types__list _pat_3_7_0 = _con_x5931->app__flags;
    kk_std_core_types__list _pat_4_7_0 = _con_x5931->app__options;
    kk_std_core_types__list _pat_5_2 = _con_x5931->app__args;
    kk_std_core_types__list _x_7 = _con_x5931->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2397, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0, _ctx);
      kk_string_drop(_pat_2_7_0, _ctx);
      kk_string_drop(_pat_1_7_0, _ctx);
      kk_string_drop(_pat_0_11, _ctx);
      kk_datatype_ptr_free(_match_x2397, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7, _ctx);
      kk_datatype_ptr_decref(_match_x2397, _ctx);
    }
    _x_x5930 = _x_7; /*list<(string, hml_types/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x5930, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5933__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5933(kk_function_t _fself, kk_box_t _b_x2064, kk_box_t _b_x2065, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5933(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5933, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5935__t {
  struct kk_function_s _base;
  kk_string_t name_2097;
};
static bool kk_hml__types__mlift_hc__cli__parse__args_11173_fun5935(kk_function_t _fself, kk_box_t _b_x2060, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5935(kk_string_t name_2097, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5935__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5935__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__cli__parse__args_11173_fun5935, kk_context());
  _self->name_2097 = name_2097;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types__mlift_hc__cli__parse__args_11173_fun5935(kk_function_t _fself, kk_box_t _b_x2060, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5935__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5935__t*, _fself, _ctx);
  kk_string_t name_2097 = _self->name_2097; /* string */
  kk_drop_match(_self, {kk_string_dup(name_2097, _ctx);}, {}, _ctx)
  kk_string_t _x_x5936;
  kk_std_core_types__tuple2 _match_x2396 = kk_std_core_types__tuple2_unbox(_b_x2060, KK_OWNED, _ctx); /*(string, hml_types/clispec)*/;
  {
    kk_box_t _box_x2056 = _match_x2396.fst;
    kk_box_t _box_x2057 = _match_x2396.snd;
    kk_string_t _x_6_0 = kk_string_unbox(_box_x2056);
    kk_string_dup(_x_6_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2396, _ctx);
    _x_x5936 = _x_6_0; /*string*/
  }
  return kk_string_is_eq(_x_x5936,name_2097,kk_context());
}
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5933(kk_function_t _fself, kk_box_t _b_x2064, kk_box_t _b_x2065, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x5934;
  kk_std_core_types__list commands_2096 = kk_std_core_types__list_unbox(_b_x2064, KK_OWNED, _ctx); /*list<(string, hml_types/clispec)>*/;
  kk_string_t name_2097 = kk_string_unbox(_b_x2065); /*string*/;
  _x_x5934 = kk_std_core_list_find(commands_2096, kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5935(name_2097, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x5934, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5941__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5941(kk_function_t _fself, kk_box_t _b_x2071, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5941(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__args_11173_fun5941, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5941(kk_function_t _fself, kk_box_t _b_x2071, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_hml__types__clispec _x_x5942;
  kk_std_core_types__tuple2 _match_x2395 = kk_std_core_types__tuple2_unbox(_b_x2071, KK_OWNED, _ctx); /*(string, hml_types/clispec)*/;
  {
    kk_box_t _box_x2067 = _match_x2395.fst;
    kk_box_t _box_x2068 = _match_x2395.snd;
    kk_hml__types__clispec _x_8 = kk_hml__types__clispec_unbox(_box_x2068, KK_BORROWED, _ctx);
    kk_hml__types__clispec_dup(_x_8, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2395, _ctx);
    _x_x5942 = _x_8; /*hml_types/clispec*/
  }
  return kk_hml__types__clispec_box(_x_x5942, _ctx);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5944__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_0;
  kk_std_core_types__list flags_0;
  kk_std_core_types__list positionals_0;
  kk_string_t subcmd_0;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5944(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5944(kk_std_core_types__list final__options_0, kk_std_core_types__list flags_0, kk_std_core_types__list positionals_0, kk_string_t subcmd_0, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5944__t* _self = kk_function_alloc_as(struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5944__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types__mlift_hc__cli__parse__args_11173_fun5944, kk_context());
  _self->final__options_0 = final__options_0;
  _self->flags_0 = flags_0;
  _self->positionals_0 = positionals_0;
  _self->subcmd_0 = subcmd_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__args_11173_fun5944(kk_function_t _fself, kk_box_t _b_x2076, kk_context_t* _ctx) {
  struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5944__t* _self = kk_function_as(struct kk_hml__types__mlift_hc__cli__parse__args_11173_fun5944__t*, _fself, _ctx);
  kk_std_core_types__list final__options_0 = _self->final__options_0; /* list<(string, string)> */
  kk_std_core_types__list flags_0 = _self->flags_0; /* list<string> */
  kk_std_core_types__list positionals_0 = _self->positionals_0; /* list<string> */
  kk_string_t subcmd_0 = _self->subcmd_0; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_0, _ctx);kk_std_core_types__list_dup(flags_0, _ctx);kk_std_core_types__list_dup(positionals_0, _ctx);kk_string_dup(subcmd_0, _ctx);}, {}, _ctx)
  kk_hml__types__clioutcome _y_x10882_0_2092 = kk_hml__types__clioutcome_unbox(_b_x2076, KK_OWNED, _ctx); /*hml_types/clioutcome*/;
  kk_hml__types__clioutcome _x_x5945 = kk_hml__types__mlift_hc__cli__parse__args_11172(final__options_0, flags_0, positionals_0, subcmd_0, _y_x10882_0_2092, _ctx); /*hml_types/clioutcome*/
  return kk_hml__types__clioutcome_box(_x_x5945, _ctx);
}

kk_hml__types__clioutcome kk_hml__types__mlift_hc__cli__parse__args_11173(kk_hml__types__clispec spec, kk_hml__types__parseraw hc__raw, kk_context_t* _ctx) { /* (spec : clispec, hc_raw : parseraw) -> pure clioutcome */ 
  kk_string_t error;
  kk_box_t _x_x5848;
  kk_box_t _x_x5852;
  kk_hml__types__parseraw _x_x5853 = kk_hml__types__parseraw_dup(hc__raw, _ctx); /*hml_types/parseraw*/
  _x_x5852 = kk_hml__types__parseraw_box(_x_x5853, _ctx); /*10000*/
  _x_x5848 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5849(_ctx), _x_x5852, _ctx); /*10001*/
  error = kk_string_unbox(_x_x5848); /*string*/
  kk_std_core_types__list flags_0;
  kk_box_t _x_x5854;
  kk_box_t _x_x5858;
  kk_hml__types__parseraw _x_x5859 = kk_hml__types__parseraw_dup(hc__raw, _ctx); /*hml_types/parseraw*/
  _x_x5858 = kk_hml__types__parseraw_box(_x_x5859, _ctx); /*10000*/
  _x_x5854 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5855(_ctx), _x_x5858, _ctx); /*10001*/
  flags_0 = kk_std_core_types__list_unbox(_x_x5854, KK_OWNED, _ctx); /*list<string>*/
  kk_std_core_types__list options;
  kk_box_t _x_x5860;
  kk_box_t _x_x5864;
  kk_hml__types__parseraw _x_x5865 = kk_hml__types__parseraw_dup(hc__raw, _ctx); /*hml_types/parseraw*/
  _x_x5864 = kk_hml__types__parseraw_box(_x_x5865, _ctx); /*10000*/
  _x_x5860 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5861(_ctx), _x_x5864, _ctx); /*10001*/
  options = kk_std_core_types__list_unbox(_x_x5860, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_std_core_types__list positionals_0;
  kk_box_t _x_x5866;
  kk_box_t _x_x5870;
  kk_hml__types__parseraw _x_x5871 = kk_hml__types__parseraw_dup(hc__raw, _ctx); /*hml_types/parseraw*/
  _x_x5870 = kk_hml__types__parseraw_box(_x_x5871, _ctx); /*10000*/
  _x_x5866 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5867(_ctx), _x_x5870, _ctx); /*10001*/
  positionals_0 = kk_std_core_types__list_unbox(_x_x5866, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t subcmd_0;
  kk_box_t _x_x5872;
  kk_box_t _x_x5876;
  kk_hml__types__parseraw _x_x5877 = kk_hml__types__parseraw_dup(hc__raw, _ctx); /*hml_types/parseraw*/
  _x_x5876 = kk_hml__types__parseraw_box(_x_x5877, _ctx); /*10000*/
  _x_x5872 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5873(_ctx), _x_x5876, _ctx); /*10001*/
  subcmd_0 = kk_string_unbox(_x_x5872); /*string*/
  kk_std_core_types__list sub__args;
  kk_box_t _x_x5878 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5879(_ctx), kk_hml__types__parseraw_box(hc__raw, _ctx), _ctx); /*10001*/
  sub__args = kk_std_core_types__list_unbox(_x_x5878, KK_OWNED, _ctx); /*list<string>*/
  bool _match_x2388;
  kk_string_t _x_x5882 = kk_string_dup(error, _ctx); /*string*/
  kk_string_t _x_x5883;
  kk_define_string_literal(static, _s_x5884, 8, "__help__", _ctx)
  _x_x5883 = kk_string_dup(_s_x5884, _ctx); /*string*/
  _match_x2388 = kk_string_is_eq(_x_x5882,_x_x5883,kk_context()); /*bool*/
  if (_match_x2388) {
    kk_string_drop(subcmd_0, _ctx);
    kk_std_core_types__list_drop(sub__args, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_std_core_types__list_drop(positionals_0, _ctx);
    kk_std_core_types__list_drop(options, _ctx);
    kk_std_core_types__list_drop(flags_0, _ctx);
    kk_string_drop(error, _ctx);
    return kk_hml__types__new_Help(_ctx);
  }
  {
    bool _match_x2389;
    kk_string_t _x_x5885 = kk_string_dup(error, _ctx); /*string*/
    kk_string_t _x_x5886;
    kk_define_string_literal(static, _s_x5887, 11, "__version__", _ctx)
    _x_x5886 = kk_string_dup(_s_x5887, _ctx); /*string*/
    _match_x2389 = kk_string_is_eq(_x_x5885,_x_x5886,kk_context()); /*bool*/
    if (_match_x2389) {
      kk_string_drop(subcmd_0, _ctx);
      kk_std_core_types__list_drop(sub__args, _ctx);
      kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_0, _ctx);
      kk_std_core_types__list_drop(options, _ctx);
      kk_std_core_types__list_drop(flags_0, _ctx);
      kk_string_drop(error, _ctx);
      return kk_hml__types__new_Version(_ctx);
    }
    {
      bool _x_x1_5_11094;
      kk_integer_t _brw_x2404;
      kk_string_t _x_x5888 = kk_string_dup(error, _ctx); /*string*/
      _brw_x2404 = kk_std_core_string_chars_fs_count(_x_x5888, _ctx); /*int*/
      bool _brw_x2405 = kk_integer_eq_borrow(_brw_x2404,(kk_integer_from_small(0)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x2404, _ctx);
      _x_x1_5_11094 = _brw_x2405; /*bool*/
      bool _match_x2390;
      kk_box_t _x_x5889 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5890(_ctx), kk_bool_box(_x_x1_5_11094), _ctx); /*10001*/
      _match_x2390 = kk_bool_unbox(_x_x5889); /*bool*/
      if (_match_x2390) {
        kk_string_drop(subcmd_0, _ctx);
        kk_std_core_types__list_drop(sub__args, _ctx);
        kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_0, _ctx);
        kk_std_core_types__list_drop(options, _ctx);
        kk_std_core_types__list_drop(flags_0, _ctx);
        return kk_hml__types__new_CliError(kk_reuse_null, 0, error, _ctx);
      }
      {
        kk_string_drop(error, _ctx);
        kk_std_core_types__list final__options_0;
        kk_box_t _x_x5892;
        kk_box_t _x_x5900;
        kk_hml__types__clispec _x_x5901 = kk_hml__types__clispec_dup(spec, _ctx); /*hml_types/clispec*/
        _x_x5900 = kk_hml__types__clispec_box(_x_x5901, _ctx); /*10000*/
        _x_x5892 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5893(_ctx), _x_x5900, kk_std_core_types__list_box(options, _ctx), _ctx); /*10002*/
        final__options_0 = kk_std_core_types__list_unbox(_x_x5892, KK_OWNED, _ctx); /*list<(string, string)>*/
        kk_string_t req__err;
        kk_box_t _x_x5902;
        kk_box_t _x_x5916;
        kk_hml__types__clispec _x_x5917 = kk_hml__types__clispec_dup(spec, _ctx); /*hml_types/clispec*/
        _x_x5916 = kk_hml__types__clispec_box(_x_x5917, _ctx); /*10000*/
        kk_box_t _x_x5918;
        kk_std_core_types__list _x_x5919 = kk_std_core_types__list_dup(positionals_0, _ctx); /*list<string>*/
        _x_x5918 = kk_std_core_types__list_box(_x_x5919, _ctx); /*10001*/
        _x_x5902 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5903(_ctx), _x_x5916, _x_x5918, _ctx); /*10002*/
        req__err = kk_string_unbox(_x_x5902); /*string*/
        bool _x_x1_8_11099;
        kk_integer_t _brw_x2400;
        kk_string_t _x_x5920 = kk_string_dup(req__err, _ctx); /*string*/
        _brw_x2400 = kk_std_core_string_chars_fs_count(_x_x5920, _ctx); /*int*/
        bool _brw_x2401 = kk_integer_eq_borrow(_brw_x2400,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2400, _ctx);
        _x_x1_8_11099 = _brw_x2401; /*bool*/
        bool _match_x2391;
        kk_box_t _x_x5921 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5922(_ctx), kk_bool_box(_x_x1_8_11099), _ctx); /*10001*/
        _match_x2391 = kk_bool_unbox(_x_x5921); /*bool*/
        if (_match_x2391) {
          kk_string_drop(subcmd_0, _ctx);
          kk_std_core_types__list_drop(sub__args, _ctx);
          kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_0, _ctx);
          kk_std_core_types__list_drop(flags_0, _ctx);
          kk_std_core_types__list_drop(final__options_0, _ctx);
          return kk_hml__types__new_CliError(kk_reuse_null, 0, req__err, _ctx);
        }
        {
          kk_string_drop(req__err, _ctx);
          bool _x_x1_9_11100;
          kk_integer_t _brw_x2398;
          kk_string_t _x_x5924 = kk_string_dup(subcmd_0, _ctx); /*string*/
          _brw_x2398 = kk_std_core_string_chars_fs_count(_x_x5924, _ctx); /*int*/
          bool _brw_x2399 = kk_integer_eq_borrow(_brw_x2398,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2398, _ctx);
          _x_x1_9_11100 = _brw_x2399; /*bool*/
          bool _match_x2392;
          kk_box_t _x_x5925 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5926(_ctx), kk_bool_box(_x_x1_9_11100), _ctx); /*10001*/
          _match_x2392 = kk_bool_unbox(_x_x5925); /*bool*/
          if (_match_x2392) {
            kk_std_core_types__list _x_x1_10_11101;
            kk_box_t _x_x5928 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5929(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
            _x_x1_10_11101 = kk_std_core_types__list_unbox(_x_x5928, KK_OWNED, _ctx); /*list<(string, hml_types/clispec)>*/
            kk_std_core_types__maybe _match_x2393;
            kk_box_t _x_x5932;
            kk_box_t _x_x5937;
            kk_string_t _x_x5938 = kk_string_dup(subcmd_0, _ctx); /*string*/
            _x_x5937 = kk_string_box(_x_x5938); /*10001*/
            _x_x5932 = kk_std_core_hnd__open_none2(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5933(_ctx), kk_std_core_types__list_box(_x_x1_10_11101, _ctx), _x_x5937, _ctx); /*10002*/
            _match_x2393 = kk_std_core_types__maybe_unbox(_x_x5932, KK_OWNED, _ctx); /*maybe<(string, hml_types/clispec)>*/
            if (kk_std_core_types__is_Just(_match_x2393, _ctx)) {
              kk_box_t _box_x2066 = _match_x2393._cons.Just.value;
              kk_std_core_types__tuple2 pair_0_0 = kk_std_core_types__tuple2_unbox(_box_x2066, KK_BORROWED, _ctx);
              kk_std_core_types__tuple2_dup(pair_0_0, _ctx);
              kk_std_core_types__maybe_drop(_match_x2393, _ctx);
              kk_hml__types__clioutcome x_11370;
              kk_hml__types__clispec _x_x5939;
              kk_box_t _x_x5940 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5941(_ctx), kk_std_core_types__tuple2_box(pair_0_0, _ctx), _ctx); /*10001*/
              _x_x5939 = kk_hml__types__clispec_unbox(_x_x5940, KK_OWNED, _ctx); /*hml_types/clispec*/
              x_11370 = kk_hml__types_hc__cli__parse__args(_x_x5939, sub__args, _ctx); /*hml_types/clioutcome*/
              if (kk_yielding(kk_context())) {
                kk_hml__types__clioutcome_drop(x_11370, _ctx);
                kk_box_t _x_x5943 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__cli__parse__args_11173_fun5944(final__options_0, flags_0, positionals_0, subcmd_0, _ctx), _ctx); /*10001*/
                return kk_hml__types__clioutcome_unbox(_x_x5943, KK_OWNED, _ctx);
              }
              {
                return kk_hml__types__mlift_hc__cli__parse__args_11172(final__options_0, flags_0, positionals_0, subcmd_0, x_11370, _ctx);
              }
            }
            {
              kk_std_core_types__list_drop(sub__args, _ctx);
              kk_std_core_types__list_drop(positionals_0, _ctx);
              kk_std_core_types__list_drop(flags_0, _ctx);
              kk_std_core_types__list_drop(final__options_0, _ctx);
              kk_string_t _x_x5946;
              kk_string_t _x_x5947;
              kk_define_string_literal(static, _s_x5948, 17, "unknown command: ", _ctx)
              _x_x5947 = kk_string_dup(_s_x5948, _ctx); /*string*/
              _x_x5946 = kk_std_core_types__lp__plus__plus__rp_(_x_x5947, subcmd_0, _ctx); /*string*/
              return kk_hml__types__new_CliError(kk_reuse_null, 0, _x_x5946, _ctx);
            }
          }
          {
            kk_string_drop(subcmd_0, _ctx);
            kk_std_core_types__list_drop(sub__args, _ctx);
            kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
            kk_hml__types__cliresult _x_x5949;
            kk_string_t _x_x5950 = kk_string_empty(); /*string*/
            _x_x5949 = kk_hml__types__new_Cliresult(kk_reuse_null, 0, flags_0, final__options_0, positionals_0, _x_x5950, kk_std_core_types__new_Nothing(_ctx), _ctx); /*hml_types/cliresult*/
            return kk_hml__types__new_Parsed(kk_reuse_null, 0, _x_x5949, _ctx);
          }
        }
      }
    }
  }
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun5954__t {
  struct kk_function_s _base;
  kk_hml__types__clispec spec_2;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun5954(kk_function_t _fself, kk_box_t _b_x2099, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun5954(kk_hml__types__clispec spec_2, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__args_fun5954__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__cli__parse__args_fun5954__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__cli__parse__args_fun5954, kk_context());
  _self->spec_2 = spec_2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun5954(kk_function_t _fself, kk_box_t _b_x2099, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__args_fun5954__t* _self = kk_function_as(struct kk_hml__types_hc__cli__parse__args_fun5954__t*, _fself, _ctx);
  kk_hml__types__clispec spec_2 = _self->spec_2; /* hml_types/clispec */
  kk_drop_match(_self, {kk_hml__types__clispec_dup(spec_2, _ctx);}, {}, _ctx)
  kk_hml__types__parseraw hc__raw_0_2237 = kk_hml__types__parseraw_unbox(_b_x2099, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  kk_hml__types__clioutcome _x_x5955 = kk_hml__types__mlift_hc__cli__parse__args_11173(spec_2, hc__raw_0_2237, _ctx); /*hml_types/clioutcome*/
  return kk_hml__types__clioutcome_box(_x_x5955, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun5957__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun5957(kk_function_t _fself, kk_box_t _b_x2102, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun5957(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun5957, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun5957(kk_function_t _fself, kk_box_t _b_x2102, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5958;
  kk_hml__types__parseraw _match_x2387 = kk_hml__types__parseraw_unbox(_b_x2102, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5959 = kk_hml__types__as_Parseraw(_match_x2387, _ctx);
    kk_string_t _x_9 = _con_x5959->raw__error;
    kk_std_core_types__list _pat_0_14 = _con_x5959->raw__flags;
    kk_std_core_types__list _pat_1_8 = _con_x5959->raw__options;
    kk_std_core_types__list _pat_2_8 = _con_x5959->raw__positionals;
    kk_string_t _pat_3_8 = _con_x5959->raw__subcmd;
    kk_std_core_types__list _pat_4_8 = _con_x5959->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2387, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_8, _ctx);
      kk_string_drop(_pat_3_8, _ctx);
      kk_std_core_types__list_drop(_pat_2_8, _ctx);
      kk_std_core_types__list_drop(_pat_1_8, _ctx);
      kk_std_core_types__list_drop(_pat_0_14, _ctx);
      kk_datatype_ptr_free(_match_x2387, _ctx);
    }
    else {
      kk_string_dup(_x_9, _ctx);
      kk_datatype_ptr_decref(_match_x2387, _ctx);
    }
    _x_x5958 = _x_9; /*string*/
  }
  return kk_string_box(_x_x5958);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun5963__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun5963(kk_function_t _fself, kk_box_t _b_x2108, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun5963(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun5963, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun5963(kk_function_t _fself, kk_box_t _b_x2108, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5964;
  kk_hml__types__parseraw _match_x2386 = kk_hml__types__parseraw_unbox(_b_x2108, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5965 = kk_hml__types__as_Parseraw(_match_x2386, _ctx);
    kk_string_t _pat_0_0_0 = _con_x5965->raw__error;
    kk_std_core_types__list _x_0_0 = _con_x5965->raw__flags;
    kk_std_core_types__list _pat_1_0_0 = _con_x5965->raw__options;
    kk_std_core_types__list _pat_2_0_0 = _con_x5965->raw__positionals;
    kk_string_t _pat_3_0_0 = _con_x5965->raw__subcmd;
    kk_std_core_types__list _pat_4_0_0 = _con_x5965->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2386, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_0_0, _ctx);
      kk_string_drop(_pat_3_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2386, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_0_0, _ctx);
      kk_datatype_ptr_decref(_match_x2386, _ctx);
    }
    _x_x5964 = _x_0_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5964, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun5969__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun5969(kk_function_t _fself, kk_box_t _b_x2114, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun5969(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun5969, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun5969(kk_function_t _fself, kk_box_t _b_x2114, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5970;
  kk_hml__types__parseraw _match_x2385 = kk_hml__types__parseraw_unbox(_b_x2114, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5971 = kk_hml__types__as_Parseraw(_match_x2385, _ctx);
    kk_string_t _pat_0_1_0 = _con_x5971->raw__error;
    kk_std_core_types__list _pat_1_1_0 = _con_x5971->raw__flags;
    kk_std_core_types__list _x_1_0 = _con_x5971->raw__options;
    kk_std_core_types__list _pat_2_1_0 = _con_x5971->raw__positionals;
    kk_string_t _pat_3_1_0 = _con_x5971->raw__subcmd;
    kk_std_core_types__list _pat_4_1_0 = _con_x5971->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2385, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_1_0, _ctx);
      kk_string_drop(_pat_3_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_1_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_1_0, _ctx);
      kk_string_drop(_pat_0_1_0, _ctx);
      kk_datatype_ptr_free(_match_x2385, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_1_0, _ctx);
      kk_datatype_ptr_decref(_match_x2385, _ctx);
    }
    _x_x5970 = _x_1_0; /*list<(string, string)>*/
  }
  return kk_std_core_types__list_box(_x_x5970, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun5975__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun5975(kk_function_t _fself, kk_box_t _b_x2120, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun5975(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun5975, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun5975(kk_function_t _fself, kk_box_t _b_x2120, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5976;
  kk_hml__types__parseraw _match_x2384 = kk_hml__types__parseraw_unbox(_b_x2120, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5977 = kk_hml__types__as_Parseraw(_match_x2384, _ctx);
    kk_string_t _pat_0_2_0 = _con_x5977->raw__error;
    kk_std_core_types__list _pat_1_2_0 = _con_x5977->raw__flags;
    kk_std_core_types__list _pat_2_2_0 = _con_x5977->raw__options;
    kk_std_core_types__list _x_2_0 = _con_x5977->raw__positionals;
    kk_string_t _pat_3_2_0 = _con_x5977->raw__subcmd;
    kk_std_core_types__list _pat_4_2_0 = _con_x5977->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2384, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_2_0, _ctx);
      kk_string_drop(_pat_3_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_2_0, _ctx);
      kk_string_drop(_pat_0_2_0, _ctx);
      kk_datatype_ptr_free(_match_x2384, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_2_0, _ctx);
      kk_datatype_ptr_decref(_match_x2384, _ctx);
    }
    _x_x5976 = _x_2_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5976, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun5981__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun5981(kk_function_t _fself, kk_box_t _b_x2126, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun5981(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun5981, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun5981(kk_function_t _fself, kk_box_t _b_x2126, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x5982;
  kk_hml__types__parseraw _match_x2383 = kk_hml__types__parseraw_unbox(_b_x2126, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5983 = kk_hml__types__as_Parseraw(_match_x2383, _ctx);
    kk_string_t _pat_0_3_0 = _con_x5983->raw__error;
    kk_std_core_types__list _pat_1_3_0 = _con_x5983->raw__flags;
    kk_std_core_types__list _pat_2_3_0 = _con_x5983->raw__options;
    kk_std_core_types__list _pat_3_3_0 = _con_x5983->raw__positionals;
    kk_string_t _x_3_0 = _con_x5983->raw__subcmd;
    kk_std_core_types__list _pat_4_3_0 = _con_x5983->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2383, _ctx)) {
      kk_std_core_types__list_drop(_pat_4_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_3_0, _ctx);
      kk_string_drop(_pat_0_3_0, _ctx);
      kk_datatype_ptr_free(_match_x2383, _ctx);
    }
    else {
      kk_string_dup(_x_3_0, _ctx);
      kk_datatype_ptr_decref(_match_x2383, _ctx);
    }
    _x_x5982 = _x_3_0; /*string*/
  }
  return kk_string_box(_x_x5982);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun5987__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun5987(kk_function_t _fself, kk_box_t _b_x2132, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun5987(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun5987, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun5987(kk_function_t _fself, kk_box_t _b_x2132, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x5988;
  kk_hml__types__parseraw _match_x2382 = kk_hml__types__parseraw_unbox(_b_x2132, KK_OWNED, _ctx); /*hml_types/parseraw*/;
  {
    struct kk_hml__types_Parseraw* _con_x5989 = kk_hml__types__as_Parseraw(_match_x2382, _ctx);
    kk_string_t _pat_0_4_0 = _con_x5989->raw__error;
    kk_std_core_types__list _pat_1_4_0 = _con_x5989->raw__flags;
    kk_std_core_types__list _pat_2_4_0 = _con_x5989->raw__options;
    kk_std_core_types__list _pat_3_4_0 = _con_x5989->raw__positionals;
    kk_string_t _pat_4_4_0 = _con_x5989->raw__subcmd;
    kk_std_core_types__list _x_4_0 = _con_x5989->raw__sub__args;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2382, _ctx)) {
      kk_string_drop(_pat_4_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_1_4_0, _ctx);
      kk_string_drop(_pat_0_4_0, _ctx);
      kk_datatype_ptr_free(_match_x2382, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_4_0, _ctx);
      kk_datatype_ptr_decref(_match_x2382, _ctx);
    }
    _x_x5988 = _x_4_0; /*list<string>*/
  }
  return kk_std_core_types__list_box(_x_x5988, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun5998__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun5998(kk_function_t _fself, kk_box_t _b_x2138, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun5998(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun5998, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun5998(kk_function_t _fself, kk_box_t _b_x2138, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x5999;
  bool b_2_2240 = kk_bool_unbox(_b_x2138); /*bool*/;
  if (b_2_2240) {
    _x_x5999 = false; /*bool*/
  }
  else {
    _x_x5999 = true; /*bool*/
  }
  return kk_bool_box(_x_x5999);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6001__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6001(kk_function_t _fself, kk_box_t _b_x2147, kk_box_t _b_x2148, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6001(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun6001, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6004__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6004(kk_function_t _fself, kk_box_t _b_x2142, kk_box_t _b_x2143, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6004(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun6004, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun6004(kk_function_t _fself, kk_box_t _b_x2142, kk_box_t _b_x2143, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6005;
  kk_std_core_types__list _x_x6006 = kk_std_core_types__list_unbox(_b_x2142, KK_OWNED, _ctx); /*list<(string, string)>*/
  kk_hml__types__clioption _x_x6007 = kk_hml__types__clioption_unbox(_b_x2143, KK_OWNED, _ctx); /*hml_types/clioption*/
  _x_x6005 = kk_hml__types_hc__add__default(_x_x6006, _x_x6007, _ctx); /*list<(string, string)>*/
  return kk_std_core_types__list_box(_x_x6005, _ctx);
}
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6001(kk_function_t _fself, kk_box_t _b_x2147, kk_box_t _b_x2148, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6002;
  kk_hml__types__clispec _match_x2379 = kk_hml__types__clispec_unbox(_b_x2147, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x6003 = kk_hml__types__as_Clispec(_match_x2379, _ctx);
    kk_string_t _pat_0_7_0 = _con_x6003->app__name;
    kk_string_t _pat_1_6_0 = _con_x6003->app__version;
    kk_string_t _pat_2_6_0 = _con_x6003->app__about;
    kk_std_core_types__list _pat_3_6_0 = _con_x6003->app__flags;
    kk_std_core_types__list _x_5_0 = _con_x6003->app__options;
    kk_std_core_types__list _pat_4_6_0 = _con_x6003->app__args;
    kk_std_core_types__list _pat_5_0_0 = _con_x6003->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2379, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_6_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_6_0, _ctx);
      kk_string_drop(_pat_2_6_0, _ctx);
      kk_string_drop(_pat_1_6_0, _ctx);
      kk_string_drop(_pat_0_7_0, _ctx);
      kk_datatype_ptr_free(_match_x2379, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_5_0, _ctx);
      kk_datatype_ptr_decref(_match_x2379, _ctx);
    }
    _x_x6002 = _x_5_0; /*list<hml_types/clioption>*/
  }
  return kk_std_core_list_foldl(_x_x6002, _b_x2148, kk_hml__types_new_hc__cli__parse__args_fun6004(_ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6011__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6011(kk_function_t _fself, kk_box_t _b_x2171, kk_box_t _b_x2172, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6011(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun6011, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6014__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6014(kk_function_t _fself, kk_integer_t _b_x2161, kk_box_t _b_x2162, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6014(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun6014, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun6014(kk_function_t _fself, kk_integer_t _b_x2161, kk_box_t _b_x2162, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__tuple2 _x_x6015 = kk_std_core_types__new_Tuple2(kk_integer_box(_b_x2161, _ctx), _b_x2162, _ctx); /*(10037, 10038)*/
  return kk_std_core_types__tuple2_box(_x_x6015, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6019__t {
  struct kk_function_s _base;
  kk_box_t _b_x2172;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6019(kk_function_t _fself, kk_box_t _b_x2166, kk_box_t _b_x2167, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6019(kk_box_t _b_x2172, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__args_fun6019__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__cli__parse__args_fun6019__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__cli__parse__args_fun6019, kk_context());
  _self->_b_x2172 = _b_x2172;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun6019(kk_function_t _fself, kk_box_t _b_x2166, kk_box_t _b_x2167, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__args_fun6019__t* _self = kk_function_as(struct kk_hml__types_hc__cli__parse__args_fun6019__t*, _fself, _ctx);
  kk_box_t _b_x2172 = _self->_b_x2172; /* 10001 */
  kk_drop_match(_self, {kk_box_dup(_b_x2172, _ctx);}, {}, _ctx)
  kk_string_t _x_x6020;
  kk_std_core_types__list _x_x6021 = kk_std_core_types__list_unbox(_b_x2172, KK_OWNED, _ctx); /*list<string>*/
  kk_string_t _x_x6022 = kk_string_unbox(_b_x2166); /*string*/
  kk_std_core_types__tuple2 _x_x6023 = kk_std_core_types__tuple2_unbox(_b_x2167, KK_OWNED, _ctx); /*(int, hml_types/cliarg)*/
  _x_x6020 = kk_hml__types_hc__check__one__arg(_x_x6021, _x_x6022, _x_x6023, _ctx); /*string*/
  return kk_string_box(_x_x6020);
}
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6011(kk_function_t _fself, kk_box_t _b_x2171, kk_box_t _b_x2172, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _b_x2163_2176;
  kk_std_core_types__list _x_x6012;
  kk_hml__types__clispec _match_x2378 = kk_hml__types__clispec_unbox(_b_x2171, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x6013 = kk_hml__types__as_Clispec(_match_x2378, _ctx);
    kk_string_t _pat_0_8_1 = _con_x6013->app__name;
    kk_string_t _pat_1_7_1 = _con_x6013->app__version;
    kk_string_t _pat_2_7_1 = _con_x6013->app__about;
    kk_std_core_types__list _pat_3_7_1 = _con_x6013->app__flags;
    kk_std_core_types__list _pat_4_7_1 = _con_x6013->app__options;
    kk_std_core_types__list _x_6_1 = _con_x6013->app__args;
    kk_std_core_types__list _pat_5_1_1 = _con_x6013->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2378, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_1, _ctx);
      kk_string_drop(_pat_2_7_1, _ctx);
      kk_string_drop(_pat_1_7_1, _ctx);
      kk_string_drop(_pat_0_8_1, _ctx);
      kk_datatype_ptr_free(_match_x2378, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_6_1, _ctx);
      kk_datatype_ptr_decref(_match_x2378, _ctx);
    }
    _x_x6012 = _x_6_1; /*list<hml_types/cliarg>*/
  }
  _b_x2163_2176 = kk_std_core_list_map_indexed(_x_x6012, kk_hml__types_new_hc__cli__parse__args_fun6014(_ctx), _ctx); /*list<(int, hml_types/cliarg)>*/
  kk_box_t _x_x6016;
  kk_string_t _x_x6017 = kk_string_empty(); /*string*/
  _x_x6016 = kk_string_box(_x_x6017); /*10002*/
  return kk_std_core_list_foldl(_b_x2163_2176, _x_x6016, kk_hml__types_new_hc__cli__parse__args_fun6019(_b_x2172, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6030__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6030(kk_function_t _fself, kk_box_t _b_x2189, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6030(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun6030, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun6030(kk_function_t _fself, kk_box_t _b_x2189, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x6031;
  bool b_0_0_2241 = kk_bool_unbox(_b_x2189); /*bool*/;
  if (b_0_0_2241) {
    _x_x6031 = false; /*bool*/
  }
  else {
    _x_x6031 = true; /*bool*/
  }
  return kk_bool_box(_x_x6031);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6034__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6034(kk_function_t _fself, kk_box_t _b_x2192, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6034(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun6034, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun6034(kk_function_t _fself, kk_box_t _b_x2192, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  bool _x_x6035;
  bool b_1_0_2242 = kk_bool_unbox(_b_x2192); /*bool*/;
  if (b_1_0_2242) {
    _x_x6035 = false; /*bool*/
  }
  else {
    _x_x6035 = true; /*bool*/
  }
  return kk_bool_box(_x_x6035);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6037__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6037(kk_function_t _fself, kk_box_t _b_x2195, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6037(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun6037, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun6037(kk_function_t _fself, kk_box_t _b_x2195, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6038;
  kk_hml__types__clispec _match_x2373 = kk_hml__types__clispec_unbox(_b_x2195, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x6039 = kk_hml__types__as_Clispec(_match_x2373, _ctx);
    kk_string_t _pat_0_11_0 = _con_x6039->app__name;
    kk_string_t _pat_1_7_0_0 = _con_x6039->app__version;
    kk_string_t _pat_2_7_0_0 = _con_x6039->app__about;
    kk_std_core_types__list _pat_3_7_0_0 = _con_x6039->app__flags;
    kk_std_core_types__list _pat_4_7_0_0 = _con_x6039->app__options;
    kk_std_core_types__list _pat_5_2_0 = _con_x6039->app__args;
    kk_std_core_types__list _x_7_0 = _con_x6039->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2373, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_2_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_7_0_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_7_0_0, _ctx);
      kk_string_drop(_pat_2_7_0_0, _ctx);
      kk_string_drop(_pat_1_7_0_0, _ctx);
      kk_string_drop(_pat_0_11_0, _ctx);
      kk_datatype_ptr_free(_match_x2373, _ctx);
    }
    else {
      kk_std_core_types__list_dup(_x_7_0, _ctx);
      kk_datatype_ptr_decref(_match_x2373, _ctx);
    }
    _x_x6038 = _x_7_0; /*list<(string, hml_types/clispec)>*/
  }
  return kk_std_core_types__list_box(_x_x6038, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6041__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6041(kk_function_t _fself, kk_box_t _b_x2207, kk_box_t _b_x2208, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6041(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun6041, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6043__t {
  struct kk_function_s _base;
  kk_string_t name_0_2244;
};
static bool kk_hml__types_hc__cli__parse__args_fun6043(kk_function_t _fself, kk_box_t _b_x2203, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6043(kk_string_t name_0_2244, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__args_fun6043__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__cli__parse__args_fun6043__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__cli__parse__args_fun6043, kk_context());
  _self->name_0_2244 = name_0_2244;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_hml__types_hc__cli__parse__args_fun6043(kk_function_t _fself, kk_box_t _b_x2203, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__args_fun6043__t* _self = kk_function_as(struct kk_hml__types_hc__cli__parse__args_fun6043__t*, _fself, _ctx);
  kk_string_t name_0_2244 = _self->name_0_2244; /* string */
  kk_drop_match(_self, {kk_string_dup(name_0_2244, _ctx);}, {}, _ctx)
  kk_string_t _x_x6044;
  kk_std_core_types__tuple2 _match_x2372 = kk_std_core_types__tuple2_unbox(_b_x2203, KK_OWNED, _ctx); /*(string, hml_types/clispec)*/;
  {
    kk_box_t _box_x2199 = _match_x2372.fst;
    kk_box_t _box_x2200 = _match_x2372.snd;
    kk_string_t _x_6_0_0 = kk_string_unbox(_box_x2199);
    kk_string_dup(_x_6_0_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2372, _ctx);
    _x_x6044 = _x_6_0_0; /*string*/
  }
  return kk_string_is_eq(_x_x6044,name_0_2244,kk_context());
}
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6041(kk_function_t _fself, kk_box_t _b_x2207, kk_box_t _b_x2208, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__maybe _x_x6042;
  kk_std_core_types__list commands_0_2243 = kk_std_core_types__list_unbox(_b_x2207, KK_OWNED, _ctx); /*list<(string, hml_types/clispec)>*/;
  kk_string_t name_0_2244 = kk_string_unbox(_b_x2208); /*string*/;
  _x_x6042 = kk_std_core_list_find(commands_0_2243, kk_hml__types_new_hc__cli__parse__args_fun6043(name_0_2244, _ctx), _ctx); /*maybe<10001>*/
  return kk_std_core_types__maybe_box(_x_x6042, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6049__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6049(kk_function_t _fself, kk_box_t _b_x2214, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6049(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__args_fun6049, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun6049(kk_function_t _fself, kk_box_t _b_x2214, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_hml__types__clispec _x_x6050;
  kk_std_core_types__tuple2 _match_x2371 = kk_std_core_types__tuple2_unbox(_b_x2214, KK_OWNED, _ctx); /*(string, hml_types/clispec)*/;
  {
    kk_box_t _box_x2210 = _match_x2371.fst;
    kk_box_t _box_x2211 = _match_x2371.snd;
    kk_hml__types__clispec _x_8_0 = kk_hml__types__clispec_unbox(_box_x2211, KK_BORROWED, _ctx);
    kk_hml__types__clispec_dup(_x_8_0, _ctx);
    kk_std_core_types__tuple2_drop(_match_x2371, _ctx);
    _x_x6050 = _x_8_0; /*hml_types/clispec*/
  }
  return kk_hml__types__clispec_box(_x_x6050, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__args_fun6052__t {
  struct kk_function_s _base;
  kk_std_core_types__list final__options_1;
  kk_std_core_types__list flags_1;
  kk_std_core_types__list positionals_1;
  kk_string_t subcmd_1;
};
static kk_box_t kk_hml__types_hc__cli__parse__args_fun6052(kk_function_t _fself, kk_box_t _b_x2219, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__args_fun6052(kk_std_core_types__list final__options_1, kk_std_core_types__list flags_1, kk_std_core_types__list positionals_1, kk_string_t subcmd_1, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__args_fun6052__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__cli__parse__args_fun6052__t, 5, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__cli__parse__args_fun6052, kk_context());
  _self->final__options_1 = final__options_1;
  _self->flags_1 = flags_1;
  _self->positionals_1 = positionals_1;
  _self->subcmd_1 = subcmd_1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__args_fun6052(kk_function_t _fself, kk_box_t _b_x2219, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__args_fun6052__t* _self = kk_function_as(struct kk_hml__types_hc__cli__parse__args_fun6052__t*, _fself, _ctx);
  kk_std_core_types__list final__options_1 = _self->final__options_1; /* list<(string, string)> */
  kk_std_core_types__list flags_1 = _self->flags_1; /* list<string> */
  kk_std_core_types__list positionals_1 = _self->positionals_1; /* list<string> */
  kk_string_t subcmd_1 = _self->subcmd_1; /* string */
  kk_drop_match(_self, {kk_std_core_types__list_dup(final__options_1, _ctx);kk_std_core_types__list_dup(flags_1, _ctx);kk_std_core_types__list_dup(positionals_1, _ctx);kk_string_dup(subcmd_1, _ctx);}, {}, _ctx)
  kk_hml__types__clioutcome _y_x10882_1_2239 = kk_hml__types__clioutcome_unbox(_b_x2219, KK_OWNED, _ctx); /*hml_types/clioutcome*/;
  kk_hml__types__clioutcome _x_x6053 = kk_hml__types__mlift_hc__cli__parse__args_11172(final__options_1, flags_1, positionals_1, subcmd_1, _y_x10882_1_2239, _ctx); /*hml_types/clioutcome*/
  return kk_hml__types__clioutcome_box(_x_x6053, _ctx);
}

kk_hml__types__clioutcome kk_hml__types_hc__cli__parse__args(kk_hml__types__clispec spec_2, kk_std_core_types__list args, kk_context_t* _ctx) { /* (spec : clispec, args : list<string>) -> pure clioutcome */ 
  kk_hml__types__parseraw x_0_11372;
  kk_hml__types__clispec _x_x5952 = kk_hml__types__clispec_dup(spec_2, _ctx); /*hml_types/clispec*/
  x_0_11372 = kk_hml__types_hc__parse__loop(_x_x5952, args, _ctx); /*hml_types/parseraw*/
  if (kk_yielding(kk_context())) {
    kk_datatype_ptr_dropn(x_0_11372, (KK_I32(6)), _ctx);
    kk_box_t _x_x5953 = kk_std_core_hnd_yield_extend(kk_hml__types_new_hc__cli__parse__args_fun5954(spec_2, _ctx), _ctx); /*10001*/
    return kk_hml__types__clioutcome_unbox(_x_x5953, KK_OWNED, _ctx);
  }
  {
    kk_string_t error_0;
    kk_box_t _x_x5956;
    kk_box_t _x_x5960;
    kk_hml__types__parseraw _x_x5961 = kk_hml__types__parseraw_dup(x_0_11372, _ctx); /*hml_types/parseraw*/
    _x_x5960 = kk_hml__types__parseraw_box(_x_x5961, _ctx); /*10000*/
    _x_x5956 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun5957(_ctx), _x_x5960, _ctx); /*10001*/
    error_0 = kk_string_unbox(_x_x5956); /*string*/
    kk_std_core_types__list flags_1;
    kk_box_t _x_x5962;
    kk_box_t _x_x5966;
    kk_hml__types__parseraw _x_x5967 = kk_hml__types__parseraw_dup(x_0_11372, _ctx); /*hml_types/parseraw*/
    _x_x5966 = kk_hml__types__parseraw_box(_x_x5967, _ctx); /*10000*/
    _x_x5962 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun5963(_ctx), _x_x5966, _ctx); /*10001*/
    flags_1 = kk_std_core_types__list_unbox(_x_x5962, KK_OWNED, _ctx); /*list<string>*/
    kk_std_core_types__list options_1;
    kk_box_t _x_x5968;
    kk_box_t _x_x5972;
    kk_hml__types__parseraw _x_x5973 = kk_hml__types__parseraw_dup(x_0_11372, _ctx); /*hml_types/parseraw*/
    _x_x5972 = kk_hml__types__parseraw_box(_x_x5973, _ctx); /*10000*/
    _x_x5968 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun5969(_ctx), _x_x5972, _ctx); /*10001*/
    options_1 = kk_std_core_types__list_unbox(_x_x5968, KK_OWNED, _ctx); /*list<(string, string)>*/
    kk_std_core_types__list positionals_1;
    kk_box_t _x_x5974;
    kk_box_t _x_x5978;
    kk_hml__types__parseraw _x_x5979 = kk_hml__types__parseraw_dup(x_0_11372, _ctx); /*hml_types/parseraw*/
    _x_x5978 = kk_hml__types__parseraw_box(_x_x5979, _ctx); /*10000*/
    _x_x5974 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun5975(_ctx), _x_x5978, _ctx); /*10001*/
    positionals_1 = kk_std_core_types__list_unbox(_x_x5974, KK_OWNED, _ctx); /*list<string>*/
    kk_string_t subcmd_1;
    kk_box_t _x_x5980;
    kk_box_t _x_x5984;
    kk_hml__types__parseraw _x_x5985 = kk_hml__types__parseraw_dup(x_0_11372, _ctx); /*hml_types/parseraw*/
    _x_x5984 = kk_hml__types__parseraw_box(_x_x5985, _ctx); /*10000*/
    _x_x5980 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun5981(_ctx), _x_x5984, _ctx); /*10001*/
    subcmd_1 = kk_string_unbox(_x_x5980); /*string*/
    kk_std_core_types__list sub__args_0;
    kk_box_t _x_x5986 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun5987(_ctx), kk_hml__types__parseraw_box(x_0_11372, _ctx), _ctx); /*10001*/
    sub__args_0 = kk_std_core_types__list_unbox(_x_x5986, KK_OWNED, _ctx); /*list<string>*/
    bool _match_x2364;
    kk_string_t _x_x5990 = kk_string_dup(error_0, _ctx); /*string*/
    kk_string_t _x_x5991;
    kk_define_string_literal(static, _s_x5992, 8, "__help__", _ctx)
    _x_x5991 = kk_string_dup(_s_x5992, _ctx); /*string*/
    _match_x2364 = kk_string_is_eq(_x_x5990,_x_x5991,kk_context()); /*bool*/
    if (_match_x2364) {
      kk_string_drop(subcmd_1, _ctx);
      kk_std_core_types__list_drop(sub__args_0, _ctx);
      kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
      kk_std_core_types__list_drop(positionals_1, _ctx);
      kk_std_core_types__list_drop(options_1, _ctx);
      kk_std_core_types__list_drop(flags_1, _ctx);
      kk_string_drop(error_0, _ctx);
      return kk_hml__types__new_Help(_ctx);
    }
    {
      bool _match_x2365;
      kk_string_t _x_x5993 = kk_string_dup(error_0, _ctx); /*string*/
      kk_string_t _x_x5994;
      kk_define_string_literal(static, _s_x5995, 11, "__version__", _ctx)
      _x_x5994 = kk_string_dup(_s_x5995, _ctx); /*string*/
      _match_x2365 = kk_string_is_eq(_x_x5993,_x_x5994,kk_context()); /*bool*/
      if (_match_x2365) {
        kk_string_drop(subcmd_1, _ctx);
        kk_std_core_types__list_drop(sub__args_0, _ctx);
        kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
        kk_std_core_types__list_drop(positionals_1, _ctx);
        kk_std_core_types__list_drop(options_1, _ctx);
        kk_std_core_types__list_drop(flags_1, _ctx);
        kk_string_drop(error_0, _ctx);
        return kk_hml__types__new_Version(_ctx);
      }
      {
        bool _x_x1_5_11094_0;
        kk_integer_t _brw_x2380;
        kk_string_t _x_x5996 = kk_string_dup(error_0, _ctx); /*string*/
        _brw_x2380 = kk_std_core_string_chars_fs_count(_x_x5996, _ctx); /*int*/
        bool _brw_x2381 = kk_integer_eq_borrow(_brw_x2380,(kk_integer_from_small(0)),kk_context()); /*bool*/;
        kk_integer_drop(_brw_x2380, _ctx);
        _x_x1_5_11094_0 = _brw_x2381; /*bool*/
        bool _match_x2366;
        kk_box_t _x_x5997 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun5998(_ctx), kk_bool_box(_x_x1_5_11094_0), _ctx); /*10001*/
        _match_x2366 = kk_bool_unbox(_x_x5997); /*bool*/
        if (_match_x2366) {
          kk_string_drop(subcmd_1, _ctx);
          kk_std_core_types__list_drop(sub__args_0, _ctx);
          kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
          kk_std_core_types__list_drop(positionals_1, _ctx);
          kk_std_core_types__list_drop(options_1, _ctx);
          kk_std_core_types__list_drop(flags_1, _ctx);
          return kk_hml__types__new_CliError(kk_reuse_null, 0, error_0, _ctx);
        }
        {
          kk_string_drop(error_0, _ctx);
          kk_std_core_types__list final__options_1;
          kk_box_t _x_x6000;
          kk_box_t _x_x6008;
          kk_hml__types__clispec _x_x6009 = kk_hml__types__clispec_dup(spec_2, _ctx); /*hml_types/clispec*/
          _x_x6008 = kk_hml__types__clispec_box(_x_x6009, _ctx); /*10000*/
          _x_x6000 = kk_std_core_hnd__open_none2(kk_hml__types_new_hc__cli__parse__args_fun6001(_ctx), _x_x6008, kk_std_core_types__list_box(options_1, _ctx), _ctx); /*10002*/
          final__options_1 = kk_std_core_types__list_unbox(_x_x6000, KK_OWNED, _ctx); /*list<(string, string)>*/
          kk_string_t req__err_0;
          kk_box_t _x_x6010;
          kk_box_t _x_x6024;
          kk_hml__types__clispec _x_x6025 = kk_hml__types__clispec_dup(spec_2, _ctx); /*hml_types/clispec*/
          _x_x6024 = kk_hml__types__clispec_box(_x_x6025, _ctx); /*10000*/
          kk_box_t _x_x6026;
          kk_std_core_types__list _x_x6027 = kk_std_core_types__list_dup(positionals_1, _ctx); /*list<string>*/
          _x_x6026 = kk_std_core_types__list_box(_x_x6027, _ctx); /*10001*/
          _x_x6010 = kk_std_core_hnd__open_none2(kk_hml__types_new_hc__cli__parse__args_fun6011(_ctx), _x_x6024, _x_x6026, _ctx); /*10002*/
          req__err_0 = kk_string_unbox(_x_x6010); /*string*/
          bool _x_x1_8_11099_0;
          kk_integer_t _brw_x2376;
          kk_string_t _x_x6028 = kk_string_dup(req__err_0, _ctx); /*string*/
          _brw_x2376 = kk_std_core_string_chars_fs_count(_x_x6028, _ctx); /*int*/
          bool _brw_x2377 = kk_integer_eq_borrow(_brw_x2376,(kk_integer_from_small(0)),kk_context()); /*bool*/;
          kk_integer_drop(_brw_x2376, _ctx);
          _x_x1_8_11099_0 = _brw_x2377; /*bool*/
          bool _match_x2367;
          kk_box_t _x_x6029 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun6030(_ctx), kk_bool_box(_x_x1_8_11099_0), _ctx); /*10001*/
          _match_x2367 = kk_bool_unbox(_x_x6029); /*bool*/
          if (_match_x2367) {
            kk_string_drop(subcmd_1, _ctx);
            kk_std_core_types__list_drop(sub__args_0, _ctx);
            kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
            kk_std_core_types__list_drop(positionals_1, _ctx);
            kk_std_core_types__list_drop(flags_1, _ctx);
            kk_std_core_types__list_drop(final__options_1, _ctx);
            return kk_hml__types__new_CliError(kk_reuse_null, 0, req__err_0, _ctx);
          }
          {
            kk_string_drop(req__err_0, _ctx);
            bool _x_x1_9_11100_0;
            kk_integer_t _brw_x2374;
            kk_string_t _x_x6032 = kk_string_dup(subcmd_1, _ctx); /*string*/
            _brw_x2374 = kk_std_core_string_chars_fs_count(_x_x6032, _ctx); /*int*/
            bool _brw_x2375 = kk_integer_eq_borrow(_brw_x2374,(kk_integer_from_small(0)),kk_context()); /*bool*/;
            kk_integer_drop(_brw_x2374, _ctx);
            _x_x1_9_11100_0 = _brw_x2375; /*bool*/
            bool _match_x2368;
            kk_box_t _x_x6033 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun6034(_ctx), kk_bool_box(_x_x1_9_11100_0), _ctx); /*10001*/
            _match_x2368 = kk_bool_unbox(_x_x6033); /*bool*/
            if (_match_x2368) {
              kk_std_core_types__list _x_x1_10_11101_0;
              kk_box_t _x_x6036 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun6037(_ctx), kk_hml__types__clispec_box(spec_2, _ctx), _ctx); /*10001*/
              _x_x1_10_11101_0 = kk_std_core_types__list_unbox(_x_x6036, KK_OWNED, _ctx); /*list<(string, hml_types/clispec)>*/
              kk_std_core_types__maybe _match_x2369;
              kk_box_t _x_x6040;
              kk_box_t _x_x6045;
              kk_string_t _x_x6046 = kk_string_dup(subcmd_1, _ctx); /*string*/
              _x_x6045 = kk_string_box(_x_x6046); /*10001*/
              _x_x6040 = kk_std_core_hnd__open_none2(kk_hml__types_new_hc__cli__parse__args_fun6041(_ctx), kk_std_core_types__list_box(_x_x1_10_11101_0, _ctx), _x_x6045, _ctx); /*10002*/
              _match_x2369 = kk_std_core_types__maybe_unbox(_x_x6040, KK_OWNED, _ctx); /*maybe<(string, hml_types/clispec)>*/
              if (kk_std_core_types__is_Just(_match_x2369, _ctx)) {
                kk_box_t _box_x2209 = _match_x2369._cons.Just.value;
                kk_std_core_types__tuple2 pair_0_0_0 = kk_std_core_types__tuple2_unbox(_box_x2209, KK_BORROWED, _ctx);
                kk_std_core_types__tuple2_dup(pair_0_0_0, _ctx);
                kk_std_core_types__maybe_drop(_match_x2369, _ctx);
                kk_hml__types__clioutcome x_1_11375;
                kk_hml__types__clispec _x_x6047;
                kk_box_t _x_x6048 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__args_fun6049(_ctx), kk_std_core_types__tuple2_box(pair_0_0_0, _ctx), _ctx); /*10001*/
                _x_x6047 = kk_hml__types__clispec_unbox(_x_x6048, KK_OWNED, _ctx); /*hml_types/clispec*/
                x_1_11375 = kk_hml__types_hc__cli__parse__args(_x_x6047, sub__args_0, _ctx); /*hml_types/clioutcome*/
                if (kk_yielding(kk_context())) {
                  kk_hml__types__clioutcome_drop(x_1_11375, _ctx);
                  kk_box_t _x_x6051 = kk_std_core_hnd_yield_extend(kk_hml__types_new_hc__cli__parse__args_fun6052(final__options_1, flags_1, positionals_1, subcmd_1, _ctx), _ctx); /*10001*/
                  return kk_hml__types__clioutcome_unbox(_x_x6051, KK_OWNED, _ctx);
                }
                if (kk_hml__types__is_Parsed(x_1_11375, _ctx)) {
                  struct kk_hml__types_Parsed* _con_x6054 = kk_hml__types__as_Parsed(x_1_11375, _ctx);
                  kk_hml__types__cliresult hc__sub_0_0 = _con_x6054->cli__result;
                  struct kk_hml__types_Cliresult* _con_x6055 = kk_hml__types__as_Cliresult(hc__sub_0_0, _ctx);
                  kk_reuse_t _ru_x3098 = kk_reuse_null; /*@reuse*/;
                  if kk_likely(kk_datatype_ptr_is_unique(x_1_11375, _ctx)) {
                    _ru_x3098 = (kk_datatype_ptr_reuse(x_1_11375, _ctx));
                  }
                  else {
                    kk_hml__types__cliresult_dup(hc__sub_0_0, _ctx);
                    kk_datatype_ptr_decref(x_1_11375, _ctx);
                  }
                  kk_hml__types__cliresult _b_x2220_2236 = hc__sub_0_0; /*hml_types/cliresult*/;
                  if kk_likely(_ru_x3098!=NULL) {
                    kk_std_core_types__maybe _x_x6057 = kk_std_core_types__new_Just(kk_hml__types__cliresult_box(_b_x2220_2236, _ctx), _ctx); /*maybe<10024>*/
                    struct kk_hml__types_Parsed* _con_x6056 = (struct kk_hml__types_Parsed*)_ru_x3098;
                    _con_x6056->cli__result = kk_hml__types__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x6057, _ctx);
                    return kk_hml__types__base_Parsed(_con_x6056, _ctx);
                  }
                  {
                    kk_hml__types__cliresult _x_x6058;
                    kk_std_core_types__maybe _x_x6059 = kk_std_core_types__new_Just(kk_hml__types__cliresult_box(_b_x2220_2236, _ctx), _ctx); /*maybe<10024>*/
                    _x_x6058 = kk_hml__types__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, subcmd_1, _x_x6059, _ctx); /*hml_types/cliresult*/
                    return kk_hml__types__new_Parsed(kk_reuse_null, 0, _x_x6058, _ctx);
                  }
                }
                {
                  kk_string_drop(subcmd_1, _ctx);
                  kk_std_core_types__list_drop(positionals_1, _ctx);
                  kk_std_core_types__list_drop(flags_1, _ctx);
                  kk_std_core_types__list_drop(final__options_1, _ctx);
                  return x_1_11375;
                }
              }
              {
                kk_std_core_types__list_drop(sub__args_0, _ctx);
                kk_std_core_types__list_drop(positionals_1, _ctx);
                kk_std_core_types__list_drop(flags_1, _ctx);
                kk_std_core_types__list_drop(final__options_1, _ctx);
                kk_string_t _x_x6060;
                kk_string_t _x_x6061;
                kk_define_string_literal(static, _s_x6062, 17, "unknown command: ", _ctx)
                _x_x6061 = kk_string_dup(_s_x6062, _ctx); /*string*/
                _x_x6060 = kk_std_core_types__lp__plus__plus__rp_(_x_x6061, subcmd_1, _ctx); /*string*/
                return kk_hml__types__new_CliError(kk_reuse_null, 0, _x_x6060, _ctx);
              }
            }
            {
              kk_string_drop(subcmd_1, _ctx);
              kk_std_core_types__list_drop(sub__args_0, _ctx);
              kk_datatype_ptr_dropn(spec_2, (KK_I32(7)), _ctx);
              kk_hml__types__cliresult _x_x6063;
              kk_string_t _x_x6064 = kk_string_empty(); /*string*/
              _x_x6063 = kk_hml__types__new_Cliresult(kk_reuse_null, 0, flags_1, final__options_1, positionals_1, _x_x6064, kk_std_core_types__new_Nothing(_ctx), _ctx); /*hml_types/cliresult*/
              return kk_hml__types__new_Parsed(kk_reuse_null, 0, _x_x6063, _ctx);
            }
          }
        }
      }
    }
  }
}
extern kk_box_t kk_hml__types_hc__cli__parse_fun6068(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6069 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6069, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__or__exit_11174_fun6074__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__or__exit_11174_fun6074(kk_function_t _fself, kk_box_t _b_x2249, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__or__exit_11174_fun6074(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__or__exit_11174_fun6074, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__or__exit_11174_fun6074(kk_function_t _fself, kk_box_t _b_x2249, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6075;
  kk_hml__types__clispec _x_x6076 = kk_hml__types__clispec_unbox(_b_x2249, KK_OWNED, _ctx); /*hml_types/clispec*/
  _x_x6075 = kk_hml__types_hc__cli__help(_x_x6076, _ctx); /*string*/
  return kk_string_box(_x_x6075);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__cli__parse__or__exit_11174_fun6081__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__cli__parse__or__exit_11174_fun6081(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__cli__parse__or__exit_11174_fun6081(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__cli__parse__or__exit_11174_fun6081, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__cli__parse__or__exit_11174_fun6081(kk_function_t _fself, kk_box_t _b_x2254, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6082;
  kk_string_t _x_x6083;
  kk_hml__types__clispec _match_x2362;
  kk_box_t _x_x6084 = kk_box_dup(_b_x2254, _ctx); /*10000*/
  _match_x2362 = kk_hml__types__clispec_unbox(_x_x6084, KK_OWNED, _ctx); /*hml_types/clispec*/
  {
    struct kk_hml__types_Clispec* _con_x6085 = kk_hml__types__as_Clispec(_match_x2362, _ctx);
    kk_string_t _x = _con_x6085->app__name;
    kk_string_t _pat_0_0 = _con_x6085->app__version;
    kk_string_t _pat_1_0 = _con_x6085->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x6085->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x6085->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x6085->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x6085->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2362, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0, _ctx);
      kk_string_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2362, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2362, _ctx);
    }
    _x_x6083 = _x; /*string*/
  }
  kk_string_t _x_x6086;
  kk_string_t _x_x6087;
  kk_define_string_literal(static, _s_x6088, 1, " ", _ctx)
  _x_x6087 = kk_string_dup(_s_x6088, _ctx); /*string*/
  kk_string_t _x_x6089;
  kk_hml__types__clispec _match_x2361 = kk_hml__types__clispec_unbox(_b_x2254, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x6090 = kk_hml__types__as_Clispec(_match_x2361, _ctx);
    kk_string_t _pat_0_1 = _con_x6090->app__name;
    kk_string_t _x_0 = _con_x6090->app__version;
    kk_string_t _pat_1_1 = _con_x6090->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x6090->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x6090->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x6090->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x6090->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2361, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2361, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2361, _ctx);
    }
    _x_x6089 = _x_0; /*string*/
  }
  _x_x6086 = kk_std_core_types__lp__plus__plus__rp_(_x_x6087, _x_x6089, _ctx); /*string*/
  _x_x6082 = kk_std_core_types__lp__plus__plus__rp_(_x_x6083, _x_x6086, _ctx); /*string*/
  return kk_string_box(_x_x6082);
}

kk_hml__types__cliresult kk_hml__types__mlift_hc__cli__parse__or__exit_11174(kk_hml__types__clispec spec, kk_hml__types__clioutcome _y_x10890, kk_context_t* _ctx) { /* (spec : clispec, clioutcome) -> pure cliresult */ 
  if (kk_hml__types__is_Parsed(_y_x10890, _ctx)) {
    struct kk_hml__types_Parsed* _con_x6070 = kk_hml__types__as_Parsed(_y_x10890, _ctx);
    kk_hml__types__cliresult r = _con_x6070->cli__result;
    struct kk_hml__types_Cliresult* _con_x6071 = kk_hml__types__as_Cliresult(r, _ctx);
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10890, _ctx)) {
      kk_datatype_ptr_free(_y_x10890, _ctx);
    }
    else {
      kk_hml__types__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(_y_x10890, _ctx);
    }
    return r;
  }
  if (kk_hml__types__is_Help(_y_x10890, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x6072;
    kk_box_t _x_x6073 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__or__exit_11174_fun6074(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x6072 = kk_string_unbox(_x_x6073); /*string*/
    kk_std_core_console_printsln(_x_x6072, _ctx);
    kk_string_t _x_x6077 = kk_string_empty(); /*string*/
    return kk_hml__types__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6077, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_hml__types__is_Version(_y_x10890, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x6079;
    kk_box_t _x_x6080 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__cli__parse__or__exit_11174_fun6081(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x6079 = kk_string_unbox(_x_x6080); /*string*/
    kk_std_core_console_printsln(_x_x6079, _ctx);
    kk_string_t _x_x6091 = kk_string_empty(); /*string*/
    return kk_hml__types__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6091, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_hml__types_CliError* _con_x6093 = kk_hml__types__as_CliError(_y_x10890, _ctx);
    kk_string_t msg = _con_x6093->cli__error__msg;
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10890, _ctx)) {
      kk_datatype_ptr_free(_y_x10890, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(_y_x10890, _ctx);
    }
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x6094;
    kk_string_t _x_x6095;
    kk_define_string_literal(static, _s_x6096, 7, "error: ", _ctx)
    _x_x6095 = kk_string_dup(_s_x6096, _ctx); /*string*/
    _x_x6094 = kk_std_core_types__lp__plus__plus__rp_(_x_x6095, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6094, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x6097;
    kk_define_string_literal(static, _s_x6098, 20, "try --help for usage", _ctx)
    _x_x6097 = kk_string_dup(_s_x6098, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6097, _ctx);
    kk_string_t _x_x6099 = kk_string_empty(); /*string*/
    return kk_hml__types__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6099, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__or__exit_fun6104__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__or__exit_fun6104(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__or__exit_fun6104(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__or__exit_fun6104, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__or__exit_fun6104(kk_function_t _fself, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6105 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6105, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__or__exit_fun6107__t {
  struct kk_function_s _base;
  kk_hml__types__clispec spec;
};
static kk_box_t kk_hml__types_hc__cli__parse__or__exit_fun6107(kk_function_t _fself, kk_box_t _b_x2261, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__or__exit_fun6107(kk_hml__types__clispec spec, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__or__exit_fun6107__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__cli__parse__or__exit_fun6107__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__cli__parse__or__exit_fun6107, kk_context());
  _self->spec = spec;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__or__exit_fun6107(kk_function_t _fself, kk_box_t _b_x2261, kk_context_t* _ctx) {
  struct kk_hml__types_hc__cli__parse__or__exit_fun6107__t* _self = kk_function_as(struct kk_hml__types_hc__cli__parse__or__exit_fun6107__t*, _fself, _ctx);
  kk_hml__types__clispec spec = _self->spec; /* hml_types/clispec */
  kk_drop_match(_self, {kk_hml__types__clispec_dup(spec, _ctx);}, {}, _ctx)
  kk_hml__types__clioutcome _y_x10890_2274 = kk_hml__types__clioutcome_unbox(_b_x2261, KK_OWNED, _ctx); /*hml_types/clioutcome*/;
  kk_hml__types__cliresult _x_x6108 = kk_hml__types__mlift_hc__cli__parse__or__exit_11174(spec, _y_x10890_2274, _ctx); /*hml_types/cliresult*/
  return kk_hml__types__cliresult_box(_x_x6108, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__or__exit_fun6113__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__or__exit_fun6113(kk_function_t _fself, kk_box_t _b_x2264, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__or__exit_fun6113(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__or__exit_fun6113, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__or__exit_fun6113(kk_function_t _fself, kk_box_t _b_x2264, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6114;
  kk_hml__types__clispec _x_x6115 = kk_hml__types__clispec_unbox(_b_x2264, KK_OWNED, _ctx); /*hml_types/clispec*/
  _x_x6114 = kk_hml__types_hc__cli__help(_x_x6115, _ctx); /*string*/
  return kk_string_box(_x_x6114);
}


// lift anonymous function
struct kk_hml__types_hc__cli__parse__or__exit_fun6120__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__cli__parse__or__exit_fun6120(kk_function_t _fself, kk_box_t _b_x2269, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__cli__parse__or__exit_fun6120(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__cli__parse__or__exit_fun6120, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__cli__parse__or__exit_fun6120(kk_function_t _fself, kk_box_t _b_x2269, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6121;
  kk_string_t _x_x6122;
  kk_hml__types__clispec _match_x2360;
  kk_box_t _x_x6123 = kk_box_dup(_b_x2269, _ctx); /*10000*/
  _match_x2360 = kk_hml__types__clispec_unbox(_x_x6123, KK_OWNED, _ctx); /*hml_types/clispec*/
  {
    struct kk_hml__types_Clispec* _con_x6124 = kk_hml__types__as_Clispec(_match_x2360, _ctx);
    kk_string_t _x = _con_x6124->app__name;
    kk_string_t _pat_0_0_0 = _con_x6124->app__version;
    kk_string_t _pat_1_0_0 = _con_x6124->app__about;
    kk_std_core_types__list _pat_2_0 = _con_x6124->app__flags;
    kk_std_core_types__list _pat_3_0 = _con_x6124->app__options;
    kk_std_core_types__list _pat_4_0 = _con_x6124->app__args;
    kk_std_core_types__list _pat_5_0 = _con_x6124->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2360, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_0, _ctx);
      kk_std_core_types__list_drop(_pat_4_0, _ctx);
      kk_std_core_types__list_drop(_pat_3_0, _ctx);
      kk_std_core_types__list_drop(_pat_2_0, _ctx);
      kk_string_drop(_pat_1_0_0, _ctx);
      kk_string_drop(_pat_0_0_0, _ctx);
      kk_datatype_ptr_free(_match_x2360, _ctx);
    }
    else {
      kk_string_dup(_x, _ctx);
      kk_datatype_ptr_decref(_match_x2360, _ctx);
    }
    _x_x6122 = _x; /*string*/
  }
  kk_string_t _x_x6125;
  kk_string_t _x_x6126;
  kk_define_string_literal(static, _s_x6127, 1, " ", _ctx)
  _x_x6126 = kk_string_dup(_s_x6127, _ctx); /*string*/
  kk_string_t _x_x6128;
  kk_hml__types__clispec _match_x2359 = kk_hml__types__clispec_unbox(_b_x2269, KK_OWNED, _ctx); /*hml_types/clispec*/;
  {
    struct kk_hml__types_Clispec* _con_x6129 = kk_hml__types__as_Clispec(_match_x2359, _ctx);
    kk_string_t _pat_0_1 = _con_x6129->app__name;
    kk_string_t _x_0 = _con_x6129->app__version;
    kk_string_t _pat_1_1 = _con_x6129->app__about;
    kk_std_core_types__list _pat_2_1 = _con_x6129->app__flags;
    kk_std_core_types__list _pat_3_1 = _con_x6129->app__options;
    kk_std_core_types__list _pat_4_1 = _con_x6129->app__args;
    kk_std_core_types__list _pat_5_1 = _con_x6129->app__commands;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x2359, _ctx)) {
      kk_std_core_types__list_drop(_pat_5_1, _ctx);
      kk_std_core_types__list_drop(_pat_4_1, _ctx);
      kk_std_core_types__list_drop(_pat_3_1, _ctx);
      kk_std_core_types__list_drop(_pat_2_1, _ctx);
      kk_string_drop(_pat_1_1, _ctx);
      kk_string_drop(_pat_0_1, _ctx);
      kk_datatype_ptr_free(_match_x2359, _ctx);
    }
    else {
      kk_string_dup(_x_0, _ctx);
      kk_datatype_ptr_decref(_match_x2359, _ctx);
    }
    _x_x6128 = _x_0; /*string*/
  }
  _x_x6125 = kk_std_core_types__lp__plus__plus__rp_(_x_x6126, _x_x6128, _ctx); /*string*/
  _x_x6121 = kk_std_core_types__lp__plus__plus__rp_(_x_x6122, _x_x6125, _ctx); /*string*/
  return kk_string_box(_x_x6121);
}

kk_hml__types__cliresult kk_hml__types_hc__cli__parse__or__exit(kk_hml__types__clispec spec, kk_context_t* _ctx) { /* (spec : clispec) -> <pure,console/console,ndet> cliresult */ 
  kk_hml__types__clioutcome x_11378;
  kk_hml__types__clispec _x_x6101 = kk_hml__types__clispec_dup(spec, _ctx); /*hml_types/clispec*/
  kk_std_core_types__list _x_x6102;
  kk_box_t _x_x6103 = kk_std_core_hnd__open_none0(kk_hml__types_new_hc__cli__parse__or__exit_fun6104(_ctx), _ctx); /*10000*/
  _x_x6102 = kk_std_core_types__list_unbox(_x_x6103, KK_OWNED, _ctx); /*list<string>*/
  x_11378 = kk_hml__types_hc__cli__parse__args(_x_x6101, _x_x6102, _ctx); /*hml_types/clioutcome*/
  if (kk_yielding(kk_context())) {
    kk_hml__types__clioutcome_drop(x_11378, _ctx);
    kk_box_t _x_x6106 = kk_std_core_hnd_yield_extend(kk_hml__types_new_hc__cli__parse__or__exit_fun6107(spec, _ctx), _ctx); /*10001*/
    return kk_hml__types__cliresult_unbox(_x_x6106, KK_OWNED, _ctx);
  }
  if (kk_hml__types__is_Parsed(x_11378, _ctx)) {
    struct kk_hml__types_Parsed* _con_x6109 = kk_hml__types__as_Parsed(x_11378, _ctx);
    kk_hml__types__cliresult r = _con_x6109->cli__result;
    struct kk_hml__types_Cliresult* _con_x6110 = kk_hml__types__as_Cliresult(r, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(x_11378, _ctx)) {
      kk_datatype_ptr_free(x_11378, _ctx);
    }
    else {
      kk_hml__types__cliresult_dup(r, _ctx);
      kk_datatype_ptr_decref(x_11378, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    return r;
  }
  if (kk_hml__types__is_Help(x_11378, _ctx)) {
    kk_unit_t __ = kk_Unit;
    kk_string_t _x_x6111;
    kk_box_t _x_x6112 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__or__exit_fun6113(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x6111 = kk_string_unbox(_x_x6112); /*string*/
    kk_std_core_console_printsln(_x_x6111, _ctx);
    kk_string_t _x_x6116 = kk_string_empty(); /*string*/
    return kk_hml__types__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6116, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  if (kk_hml__types__is_Version(x_11378, _ctx)) {
    kk_unit_t ___0 = kk_Unit;
    kk_string_t _x_x6118;
    kk_box_t _x_x6119 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__cli__parse__or__exit_fun6120(_ctx), kk_hml__types__clispec_box(spec, _ctx), _ctx); /*10001*/
    _x_x6118 = kk_string_unbox(_x_x6119); /*string*/
    kk_std_core_console_printsln(_x_x6118, _ctx);
    kk_string_t _x_x6130 = kk_string_empty(); /*string*/
    return kk_hml__types__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6130, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
  {
    struct kk_hml__types_CliError* _con_x6132 = kk_hml__types__as_CliError(x_11378, _ctx);
    kk_string_t msg = _con_x6132->cli__error__msg;
    if kk_likely(kk_datatype_ptr_is_unique(x_11378, _ctx)) {
      kk_datatype_ptr_free(x_11378, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(x_11378, _ctx);
    }
    kk_datatype_ptr_dropn(spec, (KK_I32(7)), _ctx);
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x6133;
    kk_string_t _x_x6134;
    kk_define_string_literal(static, _s_x6135, 7, "error: ", _ctx)
    _x_x6134 = kk_string_dup(_s_x6135, _ctx); /*string*/
    _x_x6133 = kk_std_core_types__lp__plus__plus__rp_(_x_x6134, msg, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6133, _ctx);
    kk_unit_t ___2 = kk_Unit;
    kk_string_t _x_x6136;
    kk_define_string_literal(static, _s_x6137, 20, "try --help for usage", _ctx)
    _x_x6136 = kk_string_dup(_s_x6137, _ctx); /*string*/
    kk_std_core_debug_trace(_x_x6136, _ctx);
    kk_string_t _x_x6138 = kk_string_empty(); /*string*/
    return kk_hml__types__new_Cliresult(kk_reuse_null, 0, kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), kk_std_core_types__new_Nil(_ctx), _x_x6138, kk_std_core_types__new_Nothing(_ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__read__lines_11175_fun6141__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__read__lines_11175_fun6141(kk_function_t _fself, kk_box_t _b_x2280, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__read__lines_11175_fun6141(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__read__lines_11175_fun6141, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types__mlift_hc__read__lines_11175_fun6147__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__read__lines_11175_fun6147(kk_function_t _fself, kk_box_t _b_x2277, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__read__lines_11175_fun6147(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__read__lines_11175_fun6147, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__read__lines_11175_fun6147(kk_function_t _fself, kk_box_t _b_x2277, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6148;
  kk_char_t _x_x6149 = kk_char_unbox(_b_x2277, KK_OWNED, _ctx); /*char*/
  _x_x6148 = kk_std_core_string_char_fs_string(_x_x6149, _ctx); /*string*/
  return kk_string_box(_x_x6148);
}
static kk_box_t kk_hml__types__mlift_hc__read__lines_11175_fun6141(kk_function_t _fself, kk_box_t _b_x2280, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2285 = kk_string_unbox(_b_x2280); /*string*/;
  kk_std_core_types__list _x_x6142;
  bool _match_x2355;
  kk_string_t _x_x6143;
  kk_define_string_literal(static, _s_x6144, 1, "\n", _ctx)
  _x_x6143 = kk_string_dup(_s_x6144, _ctx); /*string*/
  kk_string_t _x_x6145 = kk_string_empty(); /*string*/
  _match_x2355 = kk_string_is_eq(_x_x6143,_x_x6145,kk_context()); /*bool*/
  if (_match_x2355) {
    kk_std_core_types__list _b_x2275_2283 = kk_std_core_string_list(s_2285, _ctx); /*list<char>*/;
    kk_function_t _brw_x2356 = kk_hml__types__new_mlift_hc__read__lines_11175_fun6147(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2357 = kk_std_core_list_map(_b_x2275_2283, _brw_x2356, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2356, _ctx);
    _x_x6142 = _brw_x2357; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x6150;
    kk_define_string_literal(static, _s_x6151, 1, "\n", _ctx)
    _x_x6150 = kk_string_dup(_s_x6151, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2285,_x_x6150,kk_context()); /*vector<string>*/
    _x_x6142 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x6142, _ctx);
}

kk_std_core_types__list kk_hml__types__mlift_hc__read__lines_11175(kk_string_t _c_x10895, kk_context_t* _ctx) { /* (string) -> list<string> */ 
  kk_box_t _x_x6140 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__read__lines_11175_fun6141(_ctx), kk_string_box(_c_x10895), _ctx); /*10001*/
  return kk_std_core_types__list_unbox(_x_x6140, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_hml__types__mlift_hc__read__lines_11176_fun6153__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__read__lines_11176_fun6153(kk_function_t _fself, kk_box_t _b_x2289, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__read__lines_11176_fun6153(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__read__lines_11176_fun6153, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__read__lines_11176_fun6153(kk_function_t _fself, kk_box_t _b_x2289, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6154;
  kk_std_core_exn__exception _match_x2354 = kk_std_core_exn__exception_unbox(_b_x2289, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2354.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2354, _ctx);
    _x_x6154 = _x; /*string*/
  }
  return kk_string_box(_x_x6154);
}


// lift anonymous function
struct kk_hml__types__mlift_hc__read__lines_11176_fun6160__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types__mlift_hc__read__lines_11176_fun6160(kk_function_t _fself, kk_box_t _b_x2298, kk_context_t* _ctx);
static kk_function_t kk_hml__types__new_mlift_hc__read__lines_11176_fun6160(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types__mlift_hc__read__lines_11176_fun6160, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types__mlift_hc__read__lines_11176_fun6160(kk_function_t _fself, kk_box_t _b_x2298, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6161;
  kk_string_t _x_x6162 = kk_string_unbox(_b_x2298); /*string*/
  _x_x6161 = kk_hml__types__mlift_hc__read__lines_11175(_x_x6162, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6161, _ctx);
}

kk_std_core_types__list kk_hml__types__mlift_hc__read__lines_11176(kk_std_core_exn__error _y_x10893, kk_context_t* _ctx) { /* (error<string>) -> <fsys,exn> list<string> */ 
  kk_string_t x_11381;
  if (kk_std_core_exn__is_Ok(_y_x10893, _ctx)) {
    kk_box_t _box_x2286 = _y_x10893._cons.Ok.result;
    kk_string_t hc____c = kk_string_unbox(_box_x2286);
    kk_string_dup(hc____c, _ctx);
    kk_std_core_exn__error_drop(_y_x10893, _ctx);
    x_11381 = hc____c; /*string*/
  }
  else {
    kk_std_core_exn__exception hc____e = _y_x10893._cons.Error.exception;
    kk_std_core_exn__exception_dup(hc____e, _ctx);
    kk_std_core_exn__error_drop(_y_x10893, _ctx);
    kk_string_t hc____e_0;
    kk_box_t _x_x6152 = kk_std_core_hnd__open_none1(kk_hml__types__new_mlift_hc__read__lines_11176_fun6153(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
    hc____e_0 = kk_string_unbox(_x_x6152); /*string*/
    kk_string_t _b_x2293_2295;
    kk_string_t _x_x6155;
    kk_define_string_literal(static, _s_x6156, 8, "unwrap: ", _ctx)
    _x_x6155 = kk_string_dup(_s_x6156, _ctx); /*string*/
    kk_string_t _x_x6157 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
    _b_x2293_2295 = kk_std_core_types__lp__plus__plus__rp_(_x_x6155, _x_x6157, _ctx); /*string*/
    kk_box_t _x_x6158 = kk_std_core_exn_throw(_b_x2293_2295, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
    x_11381 = kk_string_unbox(_x_x6158); /*string*/
  }
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_11381, _ctx);
    kk_box_t _x_x6159 = kk_std_core_hnd_yield_extend(kk_hml__types__new_mlift_hc__read__lines_11176_fun6160(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x6159, KK_OWNED, _ctx);
  }
  {
    return kk_hml__types__mlift_hc__read__lines_11175(x_11381, _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__read__lines_fun6163__t {
  struct kk_function_s _base;
  kk_string_t file__path;
};
static kk_box_t kk_hml__types_hc__read__lines_fun6163(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__read__lines_fun6163(kk_string_t file__path, kk_context_t* _ctx) {
  struct kk_hml__types_hc__read__lines_fun6163__t* _self = kk_function_alloc_as(struct kk_hml__types_hc__read__lines_fun6163__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_hml__types_hc__read__lines_fun6163, kk_context());
  _self->file__path = file__path;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_hml__types_hc__read__lines_fun6165__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__read__lines_fun6165(kk_function_t _fself, kk_box_t _b_x2302, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__read__lines_fun6165(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__read__lines_fun6165, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__read__lines_fun6165(kk_function_t _fself, kk_box_t _b_x2302, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6166;
  kk_string_t _x_x6167 = kk_string_unbox(_b_x2302); /*string*/
  _x_x6166 = kk_std_os_path_path(_x_x6167, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6166, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__read__lines_fun6168__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__read__lines_fun6168(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__read__lines_fun6168(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__read__lines_fun6168, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__read__lines_fun6168(kk_function_t _fself, kk_box_t _b_x2308, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6169;
  kk_std_os_path__path _x_x6170 = kk_std_os_path__path_unbox(_b_x2308, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x6169 = kk_std_os_file_read_text_file(_x_x6170, _ctx); /*string*/
  return kk_string_box(_x_x6169);
}
static kk_box_t kk_hml__types_hc__read__lines_fun6163(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_hml__types_hc__read__lines_fun6163__t* _self = kk_function_as(struct kk_hml__types_hc__read__lines_fun6163__t*, _fself, _ctx);
  kk_string_t file__path = _self->file__path; /* string */
  kk_drop_match(_self, {kk_string_dup(file__path, _ctx);}, {}, _ctx)
  kk_std_os_path__path _x_x1_11107;
  kk_box_t _x_x6164 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__read__lines_fun6165(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x1_11107 = kk_std_os_path__path_unbox(_x_x6164, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_ssize_t _b_x2305_2311 = (KK_IZ(0)); /*hnd/ev-index*/;
  return kk_std_core_hnd__open_at1(_b_x2305_2311, kk_hml__types_new_hc__read__lines_fun6168(_ctx), kk_std_os_path__path_box(_x_x1_11107, _ctx), _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__read__lines_fun6172__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__read__lines_fun6172(kk_function_t _fself, kk_box_t _b_x2315, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__read__lines_fun6172(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__read__lines_fun6172, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__read__lines_fun6172(kk_function_t _fself, kk_box_t _b_x2315, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6173;
  kk_std_core_exn__error _x_x6174 = kk_std_core_exn__error_unbox(_b_x2315, KK_OWNED, _ctx); /*error<string>*/
  _x_x6173 = kk_hml__types__mlift_hc__read__lines_11176(_x_x6174, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6173, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__read__lines_fun6176__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__read__lines_fun6176(kk_function_t _fself, kk_box_t _b_x2319, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__read__lines_fun6176(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__read__lines_fun6176, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__read__lines_fun6176(kk_function_t _fself, kk_box_t _b_x2319, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6177;
  kk_std_core_exn__exception _match_x2352 = kk_std_core_exn__exception_unbox(_b_x2319, KK_OWNED, _ctx); /*exception*/;
  {
    kk_string_t _x = _match_x2352.message;
    kk_string_dup(_x, _ctx);
    kk_std_core_exn__exception_drop(_match_x2352, _ctx);
    _x_x6177 = _x; /*string*/
  }
  return kk_string_box(_x_x6177);
}


// lift anonymous function
struct kk_hml__types_hc__read__lines_fun6183__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__read__lines_fun6183(kk_function_t _fself, kk_box_t _b_x2328, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__read__lines_fun6183(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__read__lines_fun6183, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__read__lines_fun6183(kk_function_t _fself, kk_box_t _b_x2328, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_core_types__list _x_x6184;
  kk_string_t _x_x6185 = kk_string_unbox(_b_x2328); /*string*/
  _x_x6184 = kk_hml__types__mlift_hc__read__lines_11175(_x_x6185, _ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x6184, _ctx);
}


// lift anonymous function
struct kk_hml__types_hc__read__lines_fun6186__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__read__lines_fun6186(kk_function_t _fself, kk_box_t _b_x2334, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__read__lines_fun6186(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__read__lines_fun6186, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_hml__types_hc__read__lines_fun6192__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__read__lines_fun6192(kk_function_t _fself, kk_box_t _b_x2331, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__read__lines_fun6192(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__read__lines_fun6192, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__read__lines_fun6192(kk_function_t _fself, kk_box_t _b_x2331, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t _x_x6193;
  kk_char_t _x_x6194 = kk_char_unbox(_b_x2331, KK_OWNED, _ctx); /*char*/
  _x_x6193 = kk_std_core_string_char_fs_string(_x_x6194, _ctx); /*string*/
  return kk_string_box(_x_x6193);
}
static kk_box_t kk_hml__types_hc__read__lines_fun6186(kk_function_t _fself, kk_box_t _b_x2334, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_string_t s_2341 = kk_string_unbox(_b_x2334); /*string*/;
  kk_std_core_types__list _x_x6187;
  bool _match_x2349;
  kk_string_t _x_x6188;
  kk_define_string_literal(static, _s_x6189, 1, "\n", _ctx)
  _x_x6188 = kk_string_dup(_s_x6189, _ctx); /*string*/
  kk_string_t _x_x6190 = kk_string_empty(); /*string*/
  _match_x2349 = kk_string_is_eq(_x_x6188,_x_x6190,kk_context()); /*bool*/
  if (_match_x2349) {
    kk_std_core_types__list _b_x2329_2339 = kk_std_core_string_list(s_2341, _ctx); /*list<char>*/;
    kk_function_t _brw_x2350 = kk_hml__types_new_hc__read__lines_fun6192(_ctx); /*(10001) -> 10003 10002*/;
    kk_std_core_types__list _brw_x2351 = kk_std_core_list_map(_b_x2329_2339, _brw_x2350, _ctx); /*list<10002>*/;
    kk_function_drop(_brw_x2350, _ctx);
    _x_x6187 = _brw_x2351; /*list<10002>*/
  }
  else {
    kk_vector_t v_10011;
    kk_string_t _x_x6195;
    kk_define_string_literal(static, _s_x6196, 1, "\n", _ctx)
    _x_x6195 = kk_string_dup(_s_x6196, _ctx); /*string*/
    v_10011 = kk_string_splitv(s_2341,_x_x6195,kk_context()); /*vector<string>*/
    _x_x6187 = kk_std_core_vector_vlist(v_10011, kk_std_core_types__new_None(_ctx), _ctx); /*list<10002>*/
  }
  return kk_std_core_types__list_box(_x_x6187, _ctx);
}

kk_std_core_types__list kk_hml__types_hc__read__lines(kk_string_t file__path, kk_context_t* _ctx) { /* (file_path : string) -> <exn,fsys> list<string> */ 
  kk_std_core_exn__error x_11383 = kk_std_core_exn_error_fs_try(kk_hml__types_new_hc__read__lines_fun6163(file__path, _ctx), _ctx); /*error<string>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_exn__error_drop(x_11383, _ctx);
    kk_box_t _x_x6171 = kk_std_core_hnd_yield_extend(kk_hml__types_new_hc__read__lines_fun6172(_ctx), _ctx); /*10001*/
    return kk_std_core_types__list_unbox(_x_x6171, KK_OWNED, _ctx);
  }
  {
    kk_string_t x_0_11386;
    if (kk_std_core_exn__is_Ok(x_11383, _ctx)) {
      kk_box_t _box_x2316 = x_11383._cons.Ok.result;
      kk_string_t hc____c = kk_string_unbox(_box_x2316);
      kk_string_dup(hc____c, _ctx);
      kk_std_core_exn__error_drop(x_11383, _ctx);
      x_0_11386 = hc____c; /*string*/
    }
    else {
      kk_std_core_exn__exception hc____e = x_11383._cons.Error.exception;
      kk_std_core_exn__exception_dup(hc____e, _ctx);
      kk_std_core_exn__error_drop(x_11383, _ctx);
      kk_string_t hc____e_0;
      kk_box_t _x_x6175 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__read__lines_fun6176(_ctx), kk_std_core_exn__exception_box(hc____e, _ctx), _ctx); /*10001*/
      hc____e_0 = kk_string_unbox(_x_x6175); /*string*/
      kk_string_t _b_x2323_2325;
      kk_string_t _x_x6178;
      kk_define_string_literal(static, _s_x6179, 8, "unwrap: ", _ctx)
      _x_x6178 = kk_string_dup(_s_x6179, _ctx); /*string*/
      kk_string_t _x_x6180 = kk_std_core_show_string_fs_show(hc____e_0, _ctx); /*string*/
      _b_x2323_2325 = kk_std_core_types__lp__plus__plus__rp_(_x_x6178, _x_x6180, _ctx); /*string*/
      kk_box_t _x_x6181 = kk_std_core_exn_throw(_b_x2323_2325, kk_std_core_types__new_None(_ctx), _ctx); /*10000*/
      x_0_11386 = kk_string_unbox(_x_x6181); /*string*/
    }
    kk_box_t _x_x6182;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x_0_11386, _ctx);
      _x_x6182 = kk_std_core_hnd_yield_extend(kk_hml__types_new_hc__read__lines_fun6183(_ctx), _ctx); /*10001*/
    }
    else {
      _x_x6182 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__read__lines_fun6186(_ctx), kk_string_box(x_0_11386), _ctx); /*10001*/
    }
    return kk_std_core_types__list_unbox(_x_x6182, KK_OWNED, _ctx);
  }
}


// lift anonymous function
struct kk_hml__types_hc__write__lines_fun6199__t {
  struct kk_function_s _base;
};
static kk_box_t kk_hml__types_hc__write__lines_fun6199(kk_function_t _fself, kk_box_t _b_x2344, kk_context_t* _ctx);
static kk_function_t kk_hml__types_new_hc__write__lines_fun6199(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_hml__types_hc__write__lines_fun6199, _ctx)
  return kk_function_static_dup(_fself,kk_context());
}

static kk_box_t kk_hml__types_hc__write__lines_fun6199(kk_function_t _fself, kk_box_t _b_x2344, kk_context_t* _ctx) {
  kk_function_static_drop(_fself,kk_context());
  kk_std_os_path__path _x_x6200;
  kk_string_t _x_x6201 = kk_string_unbox(_b_x2344); /*string*/
  _x_x6200 = kk_std_os_path_path(_x_x6201, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x6200, _ctx);
}

kk_unit_t kk_hml__types_hc__write__lines(kk_string_t file__path, kk_std_core_types__list xs, kk_context_t* _ctx) { /* (file_path : string, xs : list<string>) -> <exn,fsys> () */ 
  kk_std_os_path__path _x_x6197;
  kk_box_t _x_x6198 = kk_std_core_hnd__open_none1(kk_hml__types_new_hc__write__lines_fun6199(_ctx), kk_string_box(file__path), _ctx); /*10001*/
  _x_x6197 = kk_std_os_path__path_unbox(_x_x6198, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_string_t _x_x6202;
  kk_string_t _x_x6203;
  kk_define_string_literal(static, _s_x6204, 1, "\n", _ctx)
  _x_x6203 = kk_string_dup(_s_x6204, _ctx); /*string*/
  _x_x6202 = kk_std_core_list_joinsep(xs, _x_x6203, _ctx); /*string*/
  kk_std_os_file_write_text_file(_x_x6197, _x_x6202, kk_std_core_types__new_None(_ctx), _ctx); return kk_Unit;
}

// initialization
void kk_hml__types__init(kk_context_t* _ctx){
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
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x3113;
    kk_define_string_literal(static, _s_x3114, 18, "hica-brk@hml_types", _ctx)
    _x_x3113 = kk_string_dup(_s_x3114, _ctx); /*string*/
    kk_hml__types_hica_brk_fs__tag = kk_std_core_hnd__new_Htag(_x_x3113, _ctx); /*hnd/htag<hml_types/hica-brk>*/
  }
}

// termination
void kk_hml__types__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_hml__types_hica_brk_fs__tag, _ctx);
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
