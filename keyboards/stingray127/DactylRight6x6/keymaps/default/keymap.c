#include "DactylRight6x6.h"
#include QMK_KEYBOARD_H

enum custom_keycodes {
    // KEKW,
    LULW,
	PEPEL,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
		case LULW:
			if (record->event.pressed) {
				SEND_STRING(":LULW:");
			} else {
				// when keycode LULW is released
			}
			break;

		// case KEKW:
		// 	if (record->event.pressed) {
		// 		SEND_STRING(":KEKW:");
		// 	} else {
		// 		// when keycode KEKW is released
		// 	}
		// 	break;

		case PEPEL:
			if (record->event.pressed) {
				SEND_STRING(":PepeLaugh:");
			} else {
				// when keycode KEKW is released
			}
			break;
	}
    return true;
};


enum layer_names {
	_TYPE,
    _MACRO,
	_SWAP
};

/* Standard Macropad Functions
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
Discord Mute		= SGUI(KC_M)
Terminal Focus 		= LOPT(KC_SPACE)
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_TYPE] = KEYMAP(
		KC_6					, KC_7		, KC_8		, KC_9		, KC_0		, KC_EQUAL	, 
		KC_Y					, KC_U		, KC_I		, KC_O		, KC_P		, KC_RBRC	, 
		KC_H					, KC_J		, KC_K		, KC_L		, KC_SCLN	, KC_QUOTE	, 
		KC_N					, KC_M		, KC_COMM	, KC_DOT	, KC_SLSH	, KC_ENTER	, 
		LT(_MACRO, KC_SPACE)	, KC_RSFT	, KC_BSLS	, KC_RCMD	, KC_RALT	, KC_RCTL	, 
		KC_A					, KC_B		, SGUI(KC_4), LOPT(KC_SPACE)					),

	[_MACRO] = KEYMAP(
		KC_TRNS		, KC_TRNS		, KC_TRNS		, KC_TRNS		, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS		, KC_UP			, KC_TRNS		, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_LEFT		, KC_DOWN		, KC_RIGHT		, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS		, KC_TRNS		, KC_TRNS		, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS		, KC_TRNS		, KC_TRNS		, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS		, KC_TRNS		, KC_TRNS		),

	[_SWAP] = KEYMAP(
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	)

// KC_END, KC_HOME

};
