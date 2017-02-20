#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_deity_testjni_MainActivity_getString(JNIEnv *env, jobject instance) {
    // TODO
    return (*env)->NewStringUTF(env, "你好中国");
}