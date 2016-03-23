package com.example.ndkdemo01;

/**
 * Created by Sony on 2016/3/1.
 */
public class JniUtils {
    public static native String getStringFormC();

    static {
        System.loadLibrary("JniTest");
    }
}
