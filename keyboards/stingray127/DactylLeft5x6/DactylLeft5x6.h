#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03, K04, K05, \
	K10, K11, K12, K13, K14, K15, \
	K20, K21, K22, K23, K24,      \
	     K31, K32, K33, K34,      \
	     K41, K42, K43, K44  \
) { \
	{ K00,   K01,   K02,   K03,   K04,   K05 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15 }, \
	{ K20,   K21,   K22,   K23,   K24,   KC_NO }, \
	{ KC_NO, K31,   K32,   K33,   K34,   KC_NO }, \
	{ KC_NO, K41,   K42,   K43,   K44,   KC_NO }  \
}

#endif