### About
This repository contains a project that represents a solid foundation for a Android NDK+SDK hybrid project. It can compile both ADT project, and a CDT project within itself, 
contains builder to generate JNI interface, linked header files for syntax highlighting of both Java (SDK) and C++ (NDK)

### Usage
_It is assumed you already have:_

*    Android SDK installed and setup
*    Android NDK installed and setup
     * You should be able to compile and install the sample 'hellojni' application
*    Eclipse for java installed
*    Eclipse ADT plugin for Android SDK development [http://developer.android.com/sdk/eclipse-adt.html](http://developer.android.com/sdk/eclipse-adt.html)
     * You should be able to compile and run, a hello-world project from eclipse 
*    Eclipse C++ plugin "CDT" installed [install new software -> programing languages] 

### How to build
*    Fix symbolic links in project root (ANDROID_SDK/ANDROID_NDK) to point to your own paths
*    The project should build

### Cocos2dx project template
*	There exist a working cocos2dx project as a branch in this repository (the secret real purpose of this project :)
	* [https://github.com/onedayitwillmake/EclipseAndroid_NDK_SDK/tree/cocos2dx](https://github.com/onedayitwillmake/EclipseAndroid_NDK_SDK/tree/cocos2dx)  
	
### Support information
*    Although its made with reproducibility mind, I provide no support for this project :)
    * Mario Gonzalez [(@1dayitwillmake)](http://twitter.com/#!/1dayitwillmake) - [http://onedayitwillmake.com](http://onedayitwillmake.com)