/**
 * A simple logging wrapper to create string streams and pass it to __android_log_print
 * @author Mario Gonzalez - mario.gonzalez@ogilvy.com
 */


#ifndef __ONEDAYLOGGER_H_
#define __ONEDAYLOGGER_H_

#include "android/log.h"
#include <sstream>

/**
 * Creates a log with a single argument
 * @usage
 * 	ONEDAY_LOG_0("HelloWorld");
 */
template <typename T>
void ONEDAY_LOG_0( T message ) {
	__android_log_print(ANDROID_LOG_DEBUG,  __FILE__, message);
}

/**
 * Creates a log with a single argument and prefix
 * @usage
 * 	ONEDAY_LOG_1("X=", this->x);
 */
template <typename T0, typename T1 >
void ONEDAY_LOG_1( T0 prefix, T1 A ) {
	 std::stringstream ss;
	 ss << prefix << A;
	 ONEDAY_LOG_0( ss.str().c_str() );
}

/**
 * Creates a log with a 2 arguments, each with a prefix
 * @usage
 * 	ONEDAY_LOG_2("X=", this->x, "Y=", y);
 */
template <typename T0, typename T1, typename T2, typename T3 >
void ONEDAY_LOG_2( T0 prefixA, T1 A, T2 prefixB, T3 B ) {
	 std::stringstream ss;
	 ss << prefixA << A << " | " << prefixB << B;
	 ONEDAY_LOG_0( ss.str().c_str() );
}

#endif
