#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL, KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, DF(1), MO(5), KC_QUES, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SLSH, KC_LGUI, KC_LALT, KC_LCTL, KC_SPC, TT(3), TT(4), KC_ENT, KC_BSPC, KC_RALT, MO(6)),
	[1] = LAYOUT(KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_EQL, KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_TILD, DF(0), MO(5), KC_GRV, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_SLSH, KC_LGUI, KC_LALT, KC_LCTL, KC_SPC, TT(3), TT(4), KC_ENT, KC_BSPC, KC_RALT, MO(6)),
	[2] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, RCTL_T(KC_QUOT), KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_LBRC, KC_CAPS, MO(5), KC_RBRC, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LGUI, KC_LALT, KC_ENT, KC_SPC, MO(3), MO(4), KC_ENT, KC_SPC, KC_RGUI, MO(6)),
	[3] = LAYOUT(LALT(KC_H), LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), KC_PGUP, KC_HOME, KC_UP, KC_END, KC_VOLU, KC_DEL, LALT(KC_L), LALT(KC_6), LALT(KC_7), LALT(KC_8), LALT(KC_9), LALT(KC_0), KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD, KC_INS, LALT(KC_J), LALT(KC_Y), LALT(KC_U), LALT(KC_I), LALT(KC_O), LALT(KC_E), KC_TRNS, KC_SCRL, KC_TRNS, KC_TRNS, KC_PAUS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_PSCR, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_TRNS, KC_LSFT, LSA(KC_ENT), LALT(KC_ENT), KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_PIPE, KC_DQUO, KC_LT, KC_GT, KC_EQL, KC_PLUS, KC_DOT, KC_TRNS, KC_TRNS, KC_DOT, KC_BSLS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS, KC_CAPS, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT(KC_TRNS, BL_TOGG, KC_NO, BL_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, BL_ON, BL_STEP, BL_UP, RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD, RGB_SPI, KC_NO, KC_TRNS, KC_TRNS, BL_OFF, BL_BRTG, BL_DOWN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAD, RGB_HUD, RGB_VAD, RGB_RMOD, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





