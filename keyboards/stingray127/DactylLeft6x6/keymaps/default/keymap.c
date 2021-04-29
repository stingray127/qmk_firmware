#include "DactylLeft6x6.h"
#include QMK_KEYBOARD_H

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

enum layer_names {
    _MAC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_MAC] = KEYMAP(
	KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, 
	KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, 
	KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, 
	KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, 
	KC_A, KC_A, KC_A, KC_A, KC_A, KC_A, 
		 	    KC_A, KC_A, KC_A, KC_A),

};

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
// 	keyevent_t event = record->event;

// 	switch (id) {
// 		case 0:
// 			if (record->event.pressed) {
// 				return MACRO( T(L), T(M), T(F), T(A), T(O), END );
// 			}
// 			break;
// 	}
// 	return MACRO_NONE;
// }