#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x15(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS, KC_EQL, KC_GRV, KC_6, KC_7, KC_8, KC_9, KC_0, KC_INS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_LBRC, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_QUOT, KC_UP, KC_NUHS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RSFT, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LEFT, KC_DOWN, KC_RGHT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_ENT, KC_LCTL, MO(1), KC_LGUI, KC_LALT, KC_NO, KC_BSPC, KC_DEL, KC_SPC, KC_NO, KC_RALT, KC_APP, KC_RCTL, KC_RGUI, KC_ENT),
    [1] = LAYOUT_ortho_5x15(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NUM, KC_SLSH, KC_ASTR, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_MSEL, KC_CALC, KC_MYCM, KC_MAIL, RGB_HUD, RGB_HUI, KC_P7, KC_P8, KC_P9, KC_MINS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SCRL, KC_PAUS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, RGB_SAD, RGB_SAI, KC_P4, KC_P5, KC_P6, KC_PLUS, KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_APP, RGB_VAD, RGB_VAI, KC_P1, KC_P2, KC_P3, KC_PENT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, MO(0), RGB_RMOD, KC_TRNS, KC_P0, KC_TRNS, KC_PDOT, KC_PENT, KC_PENT, MO(1), KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



