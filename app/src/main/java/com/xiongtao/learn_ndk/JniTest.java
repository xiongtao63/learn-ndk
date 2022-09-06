package com.xiongtao.learn_ndk;

public class JniTest {
    static {
        System.loadLibrary("aaa");
    }
    public static native String sayHello();
}