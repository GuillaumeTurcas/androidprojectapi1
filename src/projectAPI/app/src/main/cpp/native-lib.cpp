#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_touhidapps_MyProject_utils_MyConstants_baseUrlFromJNI(JNIEnv *env, jobject) {
    std::string mUrl = "aHR0cHM6Ly82MDEwMmYxNjZjMjFlMTAwMTcwNTAxMjgubW9ja2FwaS5pby9hY2NvdW50cy8=";
    return env->NewStringUTF(mUrl.c_str());
}
