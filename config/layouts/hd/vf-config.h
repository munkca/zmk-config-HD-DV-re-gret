/*
 * Vf-config.h
 *
 * SPDX-License-Identifier: MIT
 *
 * See handsdown/handsdown.h for HD variation codes
 *
 */
#pragma once

#define HD_LAYOUT vf        // HD variation 2 letter code from handsdown.h
#include "handsdown.h"      // load header now for HD common defs

#define _______  &trans

/*      Base (alpha) Layer Hands Down Vibranium-vf
                    34 keys (core)
 ╭─────────────────────╮ ╭──────────────────────╮
 │  '   W   M   G   X  │ │  #$  .:  ?!  /*      │
 │  S   C   N   T   K  | |  ,;   A   E   I   H  │
 │  F   P   L   D   J  │ │  -+   U   O   Y   B  │
 ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/

#define HD_Layer_label "HD-Vf"
#define HD_LT &kp SQT         &ak_W           &ak_M           &ak_G           &ak_X
#define HD_LM &mt_S LGUI S    &mt_C LALT C    &mt_N LSHFT N   &mt_T LCTRL T   &ak_K
#define HD_LB &ak_F           &ak_P           &ak_L           &ak_D           &ak_J
#define HD_LH                                              &lt_BSPC l_sym BSPC   &lt_R l_nav R

#define HD_RT &HashDllr       &DotColn        &QuesExcl       &SlshStar       &none
#define HD_RM &CommaMagic     &mt_A RCTRL A   &mt_E RSHFT E   &mt_I RALT I    &mt_H RGUI H
#define HD_RB &MinusPlus      &ak_U           &ak_O           &ak_Y           &ak_B
#define HD_RH &kp SPACE       &lt l_num RETURN

/*               Base (dvorak) Layer
                    34 keys (core)
 ╭─────────────────────╮ ╭──────────────────────╮
 │  '   ,   .   P   Y  │ │  F   G   C   R   L   │
 │  A   O   E   U   I  | |  D   H   T   N   S   │
 │  ;   Q   J   K   X  │ │  B   M   W   V   Z   │
 ╰──────────╮ BSP &mo  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/


// dvorak "mode" (no adaptives)
#define DV_Layer_label "DV"
#define DV_LT &kp SQT         &kp COMMA       &kp DOT         &ak_P           &ak_Y
#define DV_LM &mt_Ad LGUI A   &mt_Od LALT O   &mt_Ed LSHFT E  &mt_Ud LCTRL U  &ak_I
#define DV_LB &kp SEMI        &ak_Q           &ak_J           &ak_K           &ak_X
#define DV_LH                                                 &lt_BSPC l_sym BSPC    &mo l_nav

#define DV_RT &ak_F           &ak_G           &ak_C           &ak_R           &ak_L
#define DV_RM &ak_D           &mt_Hd RCTRL H  &mt_Td RSHFT T  &mt_Nd RALT N   &mt_Sd RGUI S
#define DV_RB &ak_B           &ak_M           &ak_W           &ak_V           &ak_Z
#define DV_RH &kp SPACE       &lt l_num RETURN


#define l_akDOT_label "l_akDOT" // adaptive grabbag sticky layer.
#define DOT_LT &kp T          &kp L           &kp L           &kp L           _______
#define DOT_LM _______        _______         _______         _______         _______
#define DOT_LB _______        _______         _______         _______         _______
#define DOT_LH                                                _______         _______

#define DOT_RT &kp DLLR       &kp DOT         _______         _______         _______
#define DOT_RM &caps_word     _______         _______         _______         _______
#define DOT_RB _______        _______         _______         _______         _______
#define DOT_RH _______        _______


