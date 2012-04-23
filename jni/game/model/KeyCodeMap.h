/*
 * KeyCodeMap.h
 * Class to help convert from keycode to strings and vice versa
 *
 * All information comes from the android project's
 * 	frameworks/base/include/ui/KeycodeLabels.h
 * and
 	 frameworks/base/core/java/android/view/KeyEvent.java
 *
 *
 *  Created on: Apr 21, 2012
 *      Author: mariogonzalez
 */

#ifndef KEYCODEMAP_H_
#define KEYCODEMAP_H_

namespace model {
namespace keycodes {
	static int KEYCODE_UNKNOWN         = 0;
	static int KEYCODE_SOFT_LEFT       = 1;
	static int KEYCODE_SOFT_RIGHT      = 2;
	static int KEYCODE_HOME            = 3;
	static int KEYCODE_BACK            = 4;
	static int KEYCODE_CALL            = 5;
	static int KEYCODE_ENDCALL         = 6;
	static int KEYCODE_0               = 7;
	static int KEYCODE_1               = 8;
	static int KEYCODE_2               = 9;
	static int KEYCODE_3               = 10;
	static int KEYCODE_4               = 11;
	static int KEYCODE_5               = 12;
	static int KEYCODE_6               = 13;
	static int KEYCODE_7               = 14;
	static int KEYCODE_8               = 15;
	static int KEYCODE_9               = 16;
	static int KEYCODE_STAR            = 17;
	static int KEYCODE_POUND           = 18;
	static int KEYCODE_DPAD_UP         = 19;
	static int KEYCODE_DPAD_DOWN       = 20;
	static int KEYCODE_DPAD_LEFT       = 21;
	static int KEYCODE_DPAD_RIGHT      = 22;
	static int KEYCODE_DPAD_CENTER     = 23;
	static int KEYCODE_VOLUME_UP       = 24;
	static int KEYCODE_VOLUME_DOWN     = 25;
	static int KEYCODE_POWER           = 26;
	static int KEYCODE_CAMERA          = 27;
	static int KEYCODE_CLEAR           = 28;
	static int KEYCODE_A               = 29;
	static int KEYCODE_B               = 30;
	static int KEYCODE_C               = 31;
	static int KEYCODE_D               = 32;
	static int KEYCODE_E               = 33;
	static int KEYCODE_F               = 34;
	static int KEYCODE_G               = 35;
	static int KEYCODE_H               = 36;
	static int KEYCODE_I               = 37;
	static int KEYCODE_J               = 38;
	static int KEYCODE_K               = 39;
	static int KEYCODE_L               = 40;
	static int KEYCODE_M               = 41;
	static int KEYCODE_N               = 42;
	static int KEYCODE_O               = 43;
	static int KEYCODE_P               = 44;
	static int KEYCODE_Q               = 45;
	static int KEYCODE_R               = 46;
	static int KEYCODE_S               = 47;
	static int KEYCODE_T               = 48;
	static int KEYCODE_U               = 49;
	static int KEYCODE_V               = 50;
	static int KEYCODE_W               = 51;
	static int KEYCODE_X               = 52;
	static int KEYCODE_Y               = 53;
	static int KEYCODE_Z               = 54;
	static int KEYCODE_COMMA           = 55;
	static int KEYCODE_PERIOD          = 56;
	static int KEYCODE_ALT_LEFT        = 57;
	static int KEYCODE_ALT_RIGHT       = 58;
	static int KEYCODE_SHIFT_LEFT      = 59;
	static int KEYCODE_SHIFT_RIGHT     = 60;
	static int KEYCODE_TAB             = 61;
	static int KEYCODE_SPACE           = 62;
	static int KEYCODE_SYM             = 63;
	static int KEYCODE_EXPLORER        = 64;
	static int KEYCODE_ENVELOPE        = 65;
	static int KEYCODE_ENTER           = 66;
	static int KEYCODE_DEL             = 67;
	static int KEYCODE_GRAVE           = 68;
	static int KEYCODE_MINUS           = 69;
	static int KEYCODE_EQUALS          = 70;
	static int KEYCODE_LEFT_BRACKET    = 71;
	static int KEYCODE_RIGHT_BRACKET   = 72;
	static int KEYCODE_BACKSLASH       = 73;
	static int KEYCODE_SEMICOLON       = 74;
	static int KEYCODE_APOSTROPHE      = 75;
	static int KEYCODE_SLASH           = 76;
	static int KEYCODE_AT              = 77;
	static int KEYCODE_NUM             = 78;
	static int KEYCODE_HEADSETHOOK     = 79;
	static int KEYCODE_FOCUS           = 80;   // *Camera* focus
	static int KEYCODE_PLUS            = 81;
	static int KEYCODE_MENU            = 82;
	static int KEYCODE_NOTIFICATION    = 83;
	static int KEYCODE_SEARCH          = 84;
	static int KEYCODE_MEDIA_PLAY_PAUSE= 85;
	static int KEYCODE_MEDIA_STOP      = 86;
	static int KEYCODE_MEDIA_NEXT      = 87;
	static int KEYCODE_MEDIA_PREVIOUS  = 88;
	static int KEYCODE_MEDIA_REWIND    = 89;
	static int KEYCODE_MEDIA_FAST_FORWARD = 90;
	static int KEYCODE_MUTE            = 91;

	static const char* MAP[100] = {
			"KEYCODE_UNKNOWN",
			"KEYCODE_SOFT_LEFT",
			"KEYCODE_SOFT_RIGHT",
			"KEYCODE_HOME",
			"KEYCODE_BACK",
			"KEYCODE_CALL",
			"KEYCODE_ENDCALL",
			"0",
			"1",
			"2",
			"3",
			"4",
			"5",
			"6",
			"7",
			"8",
			"9",
			"KEYCODE_STAR",
			"KEYCODE_POUND",
			"KEYCODE_DPAD_UP",
			"KEYCODE_DPAD_DOWN",
			"KEYCODE_DPAD_LEFT",
			"KEYCODE_DPAD_RIGHT",
			"KEYCODE_DPAD_CENTER",
			"KEYCODE_VOLUME_UP",
			"KEYCODE_VOLUME_DOWN",
			"KEYCODE_POWER",
			"KEYCODE_CAMERA",
			"KEYCODE_CLEAR",
			"A",
			"B",
			"C",
			"D",
			"E",
			"F",
			"G",
			"H",
			"I",
			"J",
			"K",
			"L",
			"M",
			"N",
			"O",
			"P",
			"Q",
			"R",
			"S",
			"T",
			"U",
			"V",
			"W",
			"X",
			"Y",
			"Z",
			"KEYCODE_COMMA",
			"KEYCODE_PERIOD",
			"KEYCODE_ALT_LEFT",
			"KEYCODE_ALT_RIGHT",
			"KEYCODE_SHIFT_LEFT",
			"KEYCODE_SHIFT_RIGHT",
			"KEYCODE_TAB",
			"KEYCODE_SPACE",
			"KEYCODE_SYM",
			"KEYCODE_EXPLORER",
			"KEYCODE_ENVELOPE",
			"KEYCODE_ENTER",
			"KEYCODE_DEL",
			"KEYCODE_GRAVE",
			"KEYCODE_MINUS",
			"KEYCODE_EQUALS",
			"KEYCODE_LEFT_BRACKET",
			"KEYCODE_RIGHT_BRACKET",
			"KEYCODE_BACKSLASH",
			"KEYCODE_SEMICOLON",
			"KEYCODE_APOSTROPHE",
			"KEYCODE_SLASH",
			"KEYCODE_AT",
			"KEYCODE_NUM",
			"KEYCODE_HEADSETHOOK",
			"KEYCODE_FOCUS",
			"KEYCODE_PLUS",
			"KEYCODE_MENU",
			"KEYCODE_NOTIFICATION",
			"KEYCODE_SEARCH",
			"KEYCODE_MEDIA_PLAY_PAUSE",
			"KEYCODE_MEDIA_STOP",
			"KEYCODE_MEDIA_NEXT",
			"KEYCODE_MEDIA_PREVIOUS",
			"KEYCODE_MEDIA_REWIND",
			"KEYCODE_MEDIA_FAST_FORWARD",
			"KEYCODE_MUTE",
		};
}
} /* namespace model */
#endif /* KEYCODEMAP_H_ */
