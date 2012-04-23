/**
 * A simple logging wrapper to create string streams and pass it to __android_log_print
 * @author Mario Gonzalez - mario.gonzalez@ogilvy.com
 */

#ifndef __ONEDAY_MACRO_H_
#define __ONEDAY_MACRO_H_

#define DEBUG_RUN_ONCE	static bool debugHasRunOnce = false; \
						if( debugHasRunOnce ) return; \
						debugHasRunOnce = true;

#endif
