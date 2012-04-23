#include "com_myproject_MyActivity.h"

#include "game/AppDelegate.h"
#include "cocos2d.h"
#include "platform/android/jni/JniHelper.h"
#include "game/util/OnedayLogger.h"

/*
 * Class:     com_myproject_MyActivity
 * Method:    onSimpleKeyPressed
 * Signature: (Ljava/lang/String;)V
 *
 * NOTE: CONVERT jstring to char
 * http://stackoverflow.com/questions/4181934/jni-converting-jstring-to-char
 */
static AppDelegate* app;
JNIEXPORT void JNICALL Java_com_myproject_MyActivity_onSimpleKeyPressed
  (JNIEnv * env, jobject that, jint keyCode) {
//	const char *nativeString = env->GetStringUTFChars(keyAsString, 0);
		if( app ) {
			app->onSimpleKeyPress( keyCode );
		}
//	env->ReleaseStringUTFChars( keyAsString, nativeString );
}

/************************************
 * Begin COCOS2D specific setup/init functions taken from HelloWorld example
 ************************************/
jint JNI_OnLoad(JavaVM *vm, void *reserved) {
	cocos2d::JniHelper::setJavaVM(vm);
	return JNI_VERSION_1_4;
}

extern "C" {
	/**
	 * This would normally go in cocos2dx_main.cpp
	 * However we need the static reference
	 */
	void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit(JNIEnv*  env, jobject thiz, jint w, jint h) {
		if ( !cocos2d::CCDirector::sharedDirector()->getOpenGLView() ) {
			cocos2d::CCEGLView *view = &cocos2d::CCEGLView::sharedOpenGLView();
			view->setFrameWidthAndHeight(w, h);
			// if you want to run in WVGA with HVGA resource, set it
			// view->create(480, 320);  Please change it to (320, 480) if you're in portrait mode.
			cocos2d::CCDirector::sharedDirector()->setOpenGLView(view);

			app = new AppDelegate();
			cocos2d::CCApplication::sharedApplication().run();
		} else {
			cocos2d::CCTextureCache::reloadAllTextures();
			cocos2d::CCDirector::sharedDirector()->setGLDefaultValues();
		}
	}
}
