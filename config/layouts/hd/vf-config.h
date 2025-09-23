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
 │  X   W   M   G   J  │ │  #$  .:  /*  "<  '>  │
 │  S   C   N   T   K  | |  ,;   A   E   I   H  │
 │  F   P   L   D   V  │ │  -+   U   O   Y   B  │
 ╰──────────╮  BSP  R  │ │  SPC RET  ╭──────────╯
            ╰──────────╯ ╰───────────╯
*/

#define HD_Layer_label "HD-Vf"
#define HD_LT &ak_X           &ak_W           &ak_M           &ak_G           &ak_J
#define HD_LM &mt_S LCTRL S   &mt_C LALT C    &mt_N LGUI N    &mt_T LSHFT T   &ak_K
#define HD_LB &ak_F           &ak_P           &ak_L           &ak_D           &ak_V
#define HD_LH                                                 &lt_BSPC l_fun BSPC   &lt_R l_nav R

#define HD_RT &HashDllr       &DotColn        &SlshStar       &DqtLT          &SqtGT
#define HD_RM &CommaMagic     &mt_A RSHFT A   &mt_E RGUI E    &mt_I RALT I    &mt_H RCTRL H
#define HD_RB &MinusPlus      &ak_U           &ak_O           &ak_Y           &ak_B
#define HD_RH &lt l_sym SPACE &lt l_nav RETURN

// dvorak "mode" (no adaptives)
#define DV_Layer_label "DV"
#define DV_LT &kp SQT.        &kp COMMA       &kp DOT         &ak_P           &ak_Y
#define DV_LM &mt_Ad LGUI A   &mt_Od LALT O   &mt_Ed LSHFT E  &mt_Ud LCTRL T  &ak_I
#define DV_LB &kp SEMI        &ak_Q           &ak_J           &ak_K           &ak_X
#define DV_LH                                                 &lt_BSPC l_fun BSP    &mo l_nav

#define DV_RT _______         &DotColnJ       &SlshStarJ      &lk_LRbkt       &kp RBKT
#define DV_RM _______         &hmr LSHFT A    &hmr LGUI E     &hmr LALT I     &hmr LCTRL H
#define DV_RB _______         &kp U           &kp O           &kp Y           &kp B
#define DV_RH _______         _______


#define l_akDOT_label "l_akDOT" // adaptive grabbag sticky layer.
#define DOT_LT &kp T          &kp L           &kp L           &kp L           _______
#define DOT_LM _______        _______         _______         _______         _______
#define DOT_LB _______        _______         _______         &b_wd           _______
#define DOT_LH                                                _______         _______

#define DOT_RT &kp DLLR       &kp DOT         &t_dotcom       &t_dotedu       &t_dotorg
#define DOT_RM &caps_word     _______         _______         _______         _______
#define DOT_RB _______        _______         _______         _______         _______
#define DOT_RH _______        _______


