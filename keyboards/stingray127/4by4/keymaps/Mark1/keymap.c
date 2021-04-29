#include "4by4.h"
#include QMK_KEYBOARD_H

joystick_config_t joystick_axes[JOYSTICK_AXES_COUNT] = {
	[0] = JOYSTICK_AXIS_IN(F6, 919, 511, 101),
	[1] = JOYSTICK_AXIS_IN(F7, 919, 512, 101)
};

/* Custom Keys
Screen Left 		= LCTL(KC_LEFT)
Mission Control 	= LCTL(KC_UP)
Screen Right 		= LCTL(KC_RIGHT)
Launchpad			= LCTL(KC_DOWN)
Throw Left			= LCAG(KC_LEFT)
Top Half 			= LCMD(LOPT(KC_UP))
Throw Right			= LCAG(KC_RIGHT)
Fullscreen 			= LCAG(KC_SPACE)
Left Half			= LCMD(LOPT(KC_LEFT))
Bottom Half			= LCMD(LOPT(KC_DOWN))
Right Half			= LCMD(LOPT(KC_RIGHT))
Voice Input			= LCAG(KC_V)
Layershift + Delete = LT(_SWAP, KC_DELETE)
Copy 				= LCMD(KC_C)
Paste				= LCMD(KC_V)
Enter				= KC_ENTER
Shift				= KC_SHIFT
Screenshot			= SGUI(KC_4)
*/

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
		LCAG(KC_LEFT),LCMD(LOPT(KC_LEFT)),LCMD(LOPT(KC_RIGHT)),LCAG(KC_RIGHT),
		LCTL(KC_LEFT),LCTL(KC_UP),LCTL(KC_RIGHT),LCMD(LOPT(KC_UP)),
		LCMD(KC_C),LCMD(KC_V),KC_ENTER,LCMD(LOPT(KC_DOWN)),
		LT(_SWAP, KC_DELETE),KC_LSHIFT,SGUI(KC_4),LCAG(KC_SPACE)),

	[_VAL] = KEYMAP(
		KC_ESC			, KC_M	, KC_V		, KC_4		, 
		KC_W			, KC_E	, KC_R		, KC_T		, 
		KC_S			, KC_D	, KC_F		, KC_G		,
		LT(_SWAP, KC_Z)	, KC_B	, KC_SPACE	, KC_LSHIFT),

	[_SWAP] = KEYMAP(
		DF(_MAC), KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, DF(_VAL))

};