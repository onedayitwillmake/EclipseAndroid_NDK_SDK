#include "com_myproject_MyActivity.h"

JNIEXPORT jstring JNICALL Java_com_myproject_MyActivity_getMyData
  (JNIEnv *pEnv, jobject pThis) {
	return (*pEnv)->NewStringUTF(pEnv, "My native project talks C++");
}
