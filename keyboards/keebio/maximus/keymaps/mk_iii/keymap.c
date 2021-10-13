#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    KC_ESC,     KC_PSCR,     KC_SLCK,        KC_F1,     KC_F2,   KC_F3,   KC_F4,          KC_F5,     KC_F6,  KC_F7,  KC_F8, KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_APP,  KC_INS,  KC_DEL, 
    KC_NUMLOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_GRV,    KC_1,    KC_2,    KC_3,           KC_4,      KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS,   KC_EQL,  KC_BSPC, KC_NO, 
    KC_KP_7,    KC_KP_8,     KC_KP_9,        KC_TAB,    KC_Q,    KC_W,    KC_E,           KC_R,      KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_LBRC,   KC_RBRC, KC_BSLS, KC_PAUS, 
    KC_KP_4,    KC_KP_5,     KC_KP_6,        KC_ESC,    KC_A,    KC_S,    KC_D,           KC_F,      KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,   KC_ENT,  KC_NO,   KC_PGUP, 
    KC_KP_1,    KC_KP_2,     KC_KP_3,        KC_LSHIFT, KC_Z,    KC_X,    KC_C,           KC_V,      KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT, KC_NO,   KC_UP,   KC_PGDN, 
    KC_HOME,    KC_P0,       KC_END,         KC_LCTL,   KC_LGUI, KC_LALT, LT(1, KC_UNDS), KC_NO,     KC_SPC, KC_SPC, KC_NO, KC_UNDS, KC_RALT, MO(1),   KC_RCTL,   KC_LEFT, KC_DOWN, KC_RGHT),

    [1] = LAYOUT(
    KC_F22,  KC_F23,  KC_F24,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_F19,  KC_F20,  KC_F21,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_F16,  KC_F17,  KC_F18,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_F13,  KC_F14,  KC_F15,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
    KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};
