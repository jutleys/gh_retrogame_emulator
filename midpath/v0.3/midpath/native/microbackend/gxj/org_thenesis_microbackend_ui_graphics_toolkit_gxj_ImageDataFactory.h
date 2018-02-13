/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory */

#ifndef _Included_org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory
#define _Included_org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory
 * Method:    loadPNG
 * Signature: (Lorg/thenesis/microbackend/ui/graphics/toolkit/gxj/ImageData;[BII)Z
 */
JNIEXPORT jboolean JNICALL Java_org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory_loadPNG
  (JNIEnv *, jobject, jobject, jbyteArray, jint, jint);

/*
 * Class:     org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory
 * Method:    loadJPEG
 * Signature: (Lorg/thenesis/microbackend/ui/graphics/toolkit/gxj/ImageData;[BII)V
 */
JNIEXPORT void JNICALL Java_org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory_loadJPEG
  (JNIEnv *, jobject, jobject, jbyteArray, jint, jint);

/*
 * Class:     org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory
 * Method:    loadRomizedImage
 * Signature: (Lorg/thenesis/microbackend/ui/graphics/toolkit/gxj/ImageData;II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory_loadRomizedImage
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory
 * Method:    loadRGB
 * Signature: (Lorg/thenesis/microbackend/ui/graphics/toolkit/gxj/ImageData;[I)V
 */
JNIEXPORT void JNICALL Java_org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory_loadRGB
  (JNIEnv *, jobject, jobject, jintArray);

/*
 * Class:     org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory
 * Method:    loadRAW
 * Signature: (Lorg/thenesis/microbackend/ui/graphics/toolkit/gxj/ImageData;[BII)V
 */
JNIEXPORT void JNICALL Java_org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory_loadRAW
  (JNIEnv *, jobject, jobject, jbyteArray, jint, jint);

/*
 * Class:     org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory
 * Method:    loadRegion
 * Signature: (Lorg/thenesis/microbackend/ui/graphics/toolkit/gxj/ImageData;Lorg/thenesis/microbackend/ui/graphics/toolkit/gxj/ImageData;IIIII)V
 */
JNIEXPORT void JNICALL Java_org_thenesis_microbackend_ui_graphics_toolkit_gxj_ImageDataFactory_loadRegion
  (JNIEnv *, jobject, jobject, jobject, jint, jint, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif