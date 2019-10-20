#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2

enum custom_keycodes {
    SLEEP = SAFE_RANGE,
    TM_LEFT,
    TM_DOWN,
    TM_UP,
    TM_RIGHT,
    TM_EXIT,
    TM_NEW,
    TM_NEXT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_LAYER0] = LAYOUT_60_ansi( /* Base */
        KC_GESC,         KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,      KC_MINS,  KC_EQL,  KC_BSPC,   \
        KC_TAB,          KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,      KC_LBRC,  KC_RBRC, KC_BSLASH, \
        CTL_T(KC_CAPS),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,   KC_QUOT,           KC_ENT,    \
        KC_LSFT,                   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,           KC_RSFT,   \
        KC_LCTL,         KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,   MO(1),    MO(2),   KC_RCTL),
    [_LAYER1] = LAYOUT_60_ansi( /* FN */
        KC_GRAVE,        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,   KC_F12,  KC_DEL,    \
        KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_INS,   KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS, RESET,     \
        KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_HOME,   KC_PGUP,           KC_TRNS,   \
        KC_TRNS,                   KC_VOLD,  KC_VOLU,  KC_MUTE,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_END,    KC_PGDOWN,         KC_TRNS,   \
        KC_TRNS,         KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS),
    [_LAYER2] = LAYOUT_60_ansi( /* FN2 */
        KC_TRNS,         KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,   KC_F12,  SLEEP,     \
        KC_TRNS,         RGB_TOG,  KC_TRNS,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  RGB_MOD,  RGB_SPI,   RGB_SPD,  KC_TRNS, RESET,     \
        KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TM_LEFT,  TM_DOWN,  TM_UP,    TM_RIGHT, KC_TRNS,   KC_TRNS,           KC_TRNS,   \
        KC_TRNS,                   KC_TRNS,  TM_EXIT,  TM_NEW,   KC_TRNS,  KC_TRNS,  TM_NEXT,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,           KC_TRNS,   \
        KC_TRNS,         KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SLEEP:
            if (record -> event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL) SS_DOWN(X_LSHIFT) SS_DOWN(X_POWER) SS_UP(X_POWER) SS_UP(X_LSHIFT) SS_UP(X_LCTRL));
            } else {
            }
	    break;
        case TM_LEFT:
            if (record -> event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL) SS_TAP(X_A) SS_UP(X_LCTRL) SS_TAP(X_H));
            } else {
            }
	    break;
        case TM_DOWN:
            if (record -> event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL) SS_TAP(X_A) SS_UP(X_LCTRL) SS_TAP(X_J));
            } else {
            }
	    break;
        case TM_UP:
            if (record -> event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL) SS_TAP(X_A) SS_UP(X_LCTRL) SS_TAP(X_K));
            } else {
            }
	    break;
        case TM_RIGHT:
            if (record -> event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL) SS_TAP(X_A) SS_UP(X_LCTRL) SS_TAP(X_L));
            } else {
            }
	    break;
        case TM_EXIT:
            if (record -> event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL) SS_TAP(X_A) SS_UP(X_LCTRL) SS_TAP(X_X));
            } else {
            }
	    break;
        case TM_NEW:
            if (record -> event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL) SS_TAP(X_A) SS_UP(X_LCTRL) SS_TAP(X_C));
            } else {
            }
	    break;
        case TM_NEXT:
            if (record -> event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL) SS_TAP(X_A) SS_UP(X_LCTRL) SS_TAP(X_N));
            } else {
            }
	    break;
    }
    return true;
}

void rgb_matrix_indicators_user(void) {
    uint8_t this_led = host_keyboard_leds();
    if (this_led & (1<<USB_LED_CAPS_LOCK)) {
        rgb_matrix_set_color(40, 0xFF, 0xFF, 0xFF);
    }
}

void matrix_init_user(void) {
    //user initialization
}

void matrix_scan_user(void) {
    //user matrix
}
