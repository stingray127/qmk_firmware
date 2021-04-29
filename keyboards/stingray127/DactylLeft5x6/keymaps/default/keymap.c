#include "Dactyl-Left5x6.h"
#include QMK_KEYBOARD_H

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

enum layer_names {
    _MAC,
    _VAL,
	_SWAP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_MAC] = KEYMAP(
		KC_1		, KC_2		, KC_3		, KC_4		, KC_5		, KC_6, 
		KC_Q		, KC_W		, KC_E		, KC_R		, KC_T		, KC_Y, 
		KC_A		, KC_S		, KC_D		, KC_F		, KC_G		,
					  KC_COMM	, KC_DOT	, KC_ENT	, KC_SPC	,
					  KC_Z		, KC_X		, KC_C		, KC_V		),

	[_VAL] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
				 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
				 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[_SWAP] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
				 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
				 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

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