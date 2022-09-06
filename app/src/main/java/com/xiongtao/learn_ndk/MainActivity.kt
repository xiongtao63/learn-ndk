package com.xiongtao.learn_ndk

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

class MainActivity : AppCompatActivity() {


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val sayHello = JniTest.sayHello()

        System.out.println("==========${sayHello}");
    }


}