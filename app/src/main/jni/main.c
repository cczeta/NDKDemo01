/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_ndkdemo01_JniUtils */

#ifndef _Included_com_example_ndkdemo01_JniUtils
#define _Included_com_example_ndkdemo01_JniUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_ndkdemo01_JniUtils
 * Method:    getStringFormC
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_ndkdemo01_JniUtils_getStringFormC
        (JNIEnv * env, jobject jobj){
    return (*env)->NewStringUTF(env,"Hello From JNI!");
}

#ifdef __cplusplus
}
#endif
#endif