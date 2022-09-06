#include <jni.h>

// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("learn_ndk");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("learn_ndk")
//      }
//    }
extern "C"
JNIEXPORT jstring JNICALL
Java_com_xiongtao_learn_1ndk_JniTest_sayHello(JNIEnv *env, jclass clazz) {
    return (*env).NewStringUTF("hello jni");
}