#include "DactylLeft5x6.h"
#include QMK_KEYBOARD_H

enum layer_names {
    _MAC,
    _VAL,
	_LAY1,
	_LAY2,
	_SWAP
};

enum custom_keycodes {
    KEKW,
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

		case KEKW:
			if (record->event.pressed) {
				SEND_STRING(":KEKW:");
			} else {
				// when keycode KEKW is released
			}
			break;

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

	[_MAC] = KEYMAP(
		LCAG(KC_LEFT)	, LCMD(LOPT(KC_LEFT))	, LCAG(KC_SPACE)	, LCMD(LOPT(KC_RIGHT))	, LCAG(KC_RIGHT)		, KC_ESC				, 
		LOPT(KC_SPACE)	, LCTL(KC_LEFT)			, LCTL(KC_UP)		, LCTL(KC_RIGHT)		, LCMD(LOPT(KC_UP))		, LT(_SWAP, KC_DELETE)	, 
		PEPEL			, LCMD(KC_C)			, LCMD(KC_V)		, KC_ENTER				, LCMD(LOPT(KC_DOWN))	,
					  	  LULW					, KEKW				, KC_LSHIFT				, KC_LCMD				,
					  	  SGUI(KC_M)			, SGUI(KC_4)		, KC_C					, KC_C					),

	[_VAL] = KEYMAP(
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_ESC			, 
		KC_M		, KC_W		, KC_E		, KC_R		, KC_T		, LT(_SWAP, KC_B)	, 
		KC_LSHIFT	, KC_S		, KC_D		, KC_F		, KC_TRNS	, 
				 	  KC_Z		, KC_X		, KC_G		, KC_SPACE	,
				 	  KC_1		, KC_2		, KC_3		, KC_4 		),
				

	[_LAY1] = KEYMAP(
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
				 	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
				 	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	),
	
	[_LAY2] = KEYMAP(
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
				 	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
				 	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	),

	[_SWAP] = KEYMAP(
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
		KC_TRNS		, KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
				 	  KC_TRNS	, KC_TRNS	, KC_TRNS	, KC_TRNS	, 
				 	  DF(_MAC)	, DF(_VAL)	, KC_TRNS	, KC_TRNS	),

};


