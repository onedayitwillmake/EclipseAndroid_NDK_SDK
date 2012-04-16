LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := mylib
LOCAL_SRC_FILES := com_myproject_MyActivity.c

include $(BUILD_SHARED_LIBRARY)