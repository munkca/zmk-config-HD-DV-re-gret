/*
 *
 *  Core/common layer defs for 3x5_2 (34) keys.
 *
 * extended keycodes found in "hosts" folder
 *
 */

//                                                Symbol & math
//  * left paired symbols are "linger keys" via hold taps. Tap for left, hold for pair with insertion point between
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|        |  APPSW |  APPSW |        |         |                |   |    |    \   |   <≤   |   >≥   |        |
//|  GUI   |   ALT  |  SHFT  |  CTRL  |    ∞    |                |   /    |    ~   |    %   |    ^   |   &    |
//|    '   |    "   | PrtSc  | PrtSc4 |         |                |  ?!    |    `   |    @   |    #   |   $    |
//╰──────────────────────────╮        |         |                |        |        ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_sym_label "l_sym"

#define l_sym_LT &none              &SlApBack           &SlAppy             &none              &none
#define l_sym_RT &kp PIPE           &kp BSLH            &LTLTE              &GTGTE             &none

#define l_sym_LM &kp LGUI           &kp LALT            &kp LSHFT           &kp LCTRL           &kp LA(N5)
#define l_sym_RM &kp FSLH           &mt LCTRL TILDE     &mt RSHFT PRCNT     &mt RALT CARET      &mt RGUI AMPS

#define l_sym_LB &kp SQT            &kp DQT             &kp PSCRN           &kp RG(RS(N4))      &none      
#define l_sym_RB &QuesExcl              &kp GRAVE           &kp AT              &kp HASH            &kp DLLR         

#define l_sym_LH &trans            &trans
#define l_sym_RH &trans            &trans

//                                         Fkey & Mouse
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|    F9   |  F10   |  F11   |  F12   |        |                | scrup  |  scrl  |   mup   | scrr  |        |
//|   G/F5  |  A/F6  |  S/F7  |  C/F8  |        |                | scrdn  |   ml   |   mdn   |  mr   |        |
//|    F1   |   F2   |   F3   |   F4   |        |                |        |  lclk  |  mclk   |  rclk |        |
//╰──────────────────────────╮  BKSP   |   DEL  |                |        |        ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_fun_label "l_fn"

#define l_fun_LT &kp F9             &kp F10             &kp F11             &kp F12             &none
#define l_fun_RT &msc SCRL_UP       &msc SCRL_LEFT      &mmv MOVE_UP        &msc SCRL_RIGHT     &none 

#define l_fun_LM &mt LGUI F5        &mt LALT F6         &mt LSHFT F7        &mt LCTRL F8        &none
#define l_fun_RM &msc SCRL_DOWN     &mmv MOVE_LEFT      &mmv MOVE_DOWN      &mmv MOVE_RIGHT     &none

#define l_fun_LB &kp F1             &kp F2              &kp F3              &kp F4              &none
#define l_fun_RB &none              &mkp LCLK           &mkp MCLK           &mkp RCLK           &none

#define l_fun_LH &trans             &trans         
#define l_fun_RH &trans             &trans


//                                          Numbers & Math
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|         |    7   |    8   |   9   |    +    |                |    *   |   ≈    |  <≤    |   >≥   |        |
//|    =    |    4   |    5   |   6   |    -    |                |    /   |  CTRL  |  SHFT  |  ALT   |   GUI  |
//|    0    |    1   |    2   |   3   |         |                |        |   .    |   °    |  pi    |    ·   |
//╰──────────────────────────╮        |         |                |        |        ╭──────────────────────────╯
//                           ╰──────────────────╯                ╰─────────────────╯
#define l_num_label "l_num"

#define l_num_LT &none              &kp N7              &kp N8              &kp N9           &kp PLUS
#define l_num_RT &kp STAR           &kp LA(X)           &LTLTE              &GTGTE           &none

#define l_num_LM &mt LGUI EQUAL     &mt LALT N4         &mt LSHFT N5        &mt LCTRL N6      &kp MINUS
#define l_num_RM &kp SLASH          &kp LCTRL           &kp RSHFT           &kp RALT          &kp LGUI

#define l_num_LB &kp N0             &kp N1              &kp N2              &kp N3            &none
#define l_num_RB &none              &kp DOT             &kp RA(RS(N8))      &kp RA(P)         &kp RA(RS(N9))

#define l_num_LH &trans     &trans
#define l_num_RH &trans     &trans


//                                           Shorcuts & Navigation
//╭─────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//| undol  |   cutl  | copyl | pstel |  SH-TAB  |                |   ESC   |  HOME  |   UP   |  PG_UP |       |
//|  gui   |   alt   |  shft |  ctrl |    TAB   |                |  Lword  |  LEFT  |  DOWN  |   RGT  | Rword |
//|  undo  |   cut   |  copy |pst-mat|   pste   |                |         |   END  |        |  PG_DN |       |
//╰──────────────────────────╮       |          |                |         |        ╭─────────────────────────╯
//                           ╰──────────────────╯                ╰──────────────────╯
#define l_nav_label "l_nav"

#define l_nav_LT &kp LC(Z)          &kp LC(X)           &kp LC(C)           &kp LC(V)           &kp LS(TAB)
#define l_nav_RT &kp ESC            &kp HOME            &kp UP              &kp PG_UP           &none

#define l_nav_LM &kp LGUI           &kp LALT            &kp LSHFT           &kp LCTRL           &kp TAB
#define l_nav_RM &kp S_WRDL         &kp LEFT            &kp DOWN            &kp RIGHT           &kp S_WRDR

#define l_nav_LB &kp LG(Z)          &kp CUT             &kp S_COPY          &kp S_PSTM          &kp LG(V)
#define l_nav_RB &none              &kp END             &none               &kp PG_DN           &none

#define l_nav_LH &trans        &trans
#define l_nav_RH &trans        &trans


//                                          Keyboard & System Settings
//╭────────────────────────────────────────────╮                ╭────────────────────────────────────────────╮
//|  BOOT  |       |       |         |   USB   │                │  BRI+  |  VOL+  |  NEXT  |        |        |
//│        |       |       |         |    BT   |                |  BRI-  |  VOL-  |   PP   |        │        |
//│  BTC   |  BT0  │  BT1  |  BT2    │   BT3   |                |        |  MUTE  |  PREV  |        │        |
//╰──────────────────────────╮       |         │                │        |        ╭──────────────────────────╯
//                           ╰───────────────-─╯                ╰───────────────-─╯


#define l_cfg_label "l_cfg"

#define l_cfg_LT &rst_btld          &none               &none               &none             &out OUT_USB
#define l_cfg_RT &kp C_BRI_UP       &kp C_VOL_UP        &kp C_NEXT          &none             &none

#define l_cfg_LM &none              &none               &none               &none             &out OUT_BLE
#define l_cfg_RM &kp C_BRI_DN       &kp C_VOL_DN        &kp C_PP            &none             &none

#define l_cfg_LB &bt BT_CLR         &bt BT_SEL 0        &bt BT_SEL 1        &bt BT_SEL 2      &bt BT_SEL 3 
#define l_cfg_RB &none              &kp C_MUTE          &kp C_PREV          &none             &none

#define l_cfg_LH &trans         &trans
#define l_cfg_RH &trans         &trans
