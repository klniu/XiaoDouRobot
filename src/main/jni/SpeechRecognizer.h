/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_klniu_xiaoyi_XFJNI_SpeechRecognizer */

#ifndef _Included_com_klniu_xiaoyi_XFJNI_SpeechRecognizer
#define _Included_com_klniu_xiaoyi_XFJNI_SpeechRecognizer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_klniu_xiaoyi_XFJNI_SpeechRecognizer
 * Method:    init
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_klniu_xiaoyi_XFJNI_SpeechRecognizer_init
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_klniu_xiaoyi_XFJNI_SpeechRecognizer
 * Method:    startListening
 * Signature: (Lcom/klniu/xiaoyi/XFJNI/RecognizerListener;)V
 */
JNIEXPORT void JNICALL Java_com_klniu_xiaoyi_XFJNI_SpeechRecognizer_startListening
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_klniu_xiaoyi_XFJNI_SpeechRecognizer
 * Method:    stopListening
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_klniu_xiaoyi_XFJNI_SpeechRecognizer_stopListening
  (JNIEnv *, jobject);

/*
 * Class:     com_klniu_xiaoyi_XFJNI_SpeechRecognizer
 * Method:    isListening
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_klniu_xiaoyi_XFJNI_SpeechRecognizer_isListening
  (JNIEnv *, jobject);

/*
 * Class:     com_klniu_xiaoyi_XFJNI_SpeechRecognizer
 * Method:    destroy
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_klniu_xiaoyi_XFJNI_SpeechRecognizer_destroy
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
