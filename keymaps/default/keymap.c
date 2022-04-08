// Copyright 2022 Andy Sawyer (nydasco)
// SPDX-License-Identifier: GPL-2.0-or-later


#include QMK_KEYBOARD_H

#define S_LPRN      LSFT(KC_LPRN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESC,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    
        S_LPRN,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    
        KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    
        KC_BSPC, KC_DEL,  KC_UNDS  
    ),

};
