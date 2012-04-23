LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

#NDK_ROOT_LOCAL := ../ANDROID_NDK
#COCOS2DX_ROOT_LOCAL := ../COCOS2DX
#GAME_ROOT=..
#GAME_ANDROID_ROOT=..
#RESOURCE_ROOT=$(GAME_ANDROID_ROOT)/res
	
LOCAL_MODULE := game_shared
LOCAL_MODULE_FILENAME := libgame


LOCAL_C_INCLUDES := $(LOCAL_PATH)/jni $(COCOS2DX_ROOT)/cocos2dx/include                   
LOCAL_SRC_FILES :=	com_myproject_MyActivity.cpp \
					game/AppDelegate.cpp \
					game/HelloCocos2dx.cpp \
					
all:
	@echo $(LOCAL_PATH)
        
LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static cocosdenshion_static

include $(BUILD_SHARED_LIBRARY)

$(call import-module,cocos2dx)




