#include QMK_KEYBOARD_H

enum kb_layers { _BASE, _SYMBOLS, _NUMBER, _FUNCTIONAL };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        /* ROW 0 */ KC_Q,    KC_W,    KC_E,                   KC_R,                 KC_T,                    /* || */ KC_Y,                 KC_U,                  KC_I,    KC_O,   KC_P,
        /* ROW 1 */ KC_A,    KC_S,    KC_D,                   KC_F,                 KC_G,                    /* || */ KC_H,                 KC_J,                  KC_K,    KC_L,   KC_SCLN,
        /* ROW 2 */ KC_Z,    KC_X,    KC_C,                   KC_V,                 KC_B,                    /* || */ KC_N,                 KC_M,                  KC_COMM, KC_DOT, KC_SLSH,
        /* ROW 3 */ KC_RSFT, KC_TILD, LT(_FUNCTIONAL, KC_TAB), MT(MOD_LCTL, KC_ESC), LT(_NUMBER, KC_SPC), /* || */ LT(_SYMBOLS, KC_ENT), MT(MOD_LGUI, KC_BSPC), KC_RALT, KC_DEL, KC_RSFT
        ),
    [_SYMBOLS] = LAYOUT(
        /* ROW 0 */ KC_LT,   KC_GT,   KC_BSLS, KC_LBRC, KC_RBRC, /* || */ KC_PLUS,  KC_AT,    KC_AMPR,  KC_CIRC, _______,
        /* ROW 1 */ KC_EQL,  KC_QUOT, KC_DQT,  KC_LPRN, KC_RPRN, /* || */ KC_MINUS, KC_DLR,   KC_ASTR,  KC_PERC, _______,
        /* ROW 2 */ _______, KC_QUES, _______, KC_LCBR, KC_RCBR, /* || */ KC_EXLM,  KC_HASH,  KC_GRV,   KC_UNDS, _______,
        /* ROW 3 */ _______, _______, _______, _______, _______, /* || */ _______,  _______,  _______,  _______, _______
        ),
    [_NUMBER] = LAYOUT(
        /* ROW 0 */ _______, _______, _______, _______,  _______, /* || */ KC_7, KC_8,     KC_9,     _______, _______,
        /* ROW 1 */ KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, _______, /* || */ KC_4, KC_5,     KC_6,     _______, _______,
        /* ROW 2 */ _______, _______, _______, _______,  _______, /* || */ KC_1, KC_2,     KC_3,     _______, _______,
        /* ROW 3 */ _______, _______, _______, _______,  _______, /* || */ KC_0, _______,  _______,  _______, _______
        ),
    [_NUMBER] = LAYOUT(
        /* ROW 0 */ KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   /* || */ KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        /* ROW 1 */ _______, _______, _______, _______, _______, /* || */ _______, _______, _______, _______, _______,
        /* ROW 2 */ _______, _______, _______, _______, _______, /* || */ _______, _______, _______, _______, _______,
        /* ROW 3 */ _______, KC_F1,   _______, _______, _______, /* || */ _______, _______, _______, KC_F12,  _______
        )

};
