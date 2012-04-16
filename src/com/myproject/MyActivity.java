package com.myproject;

import android.app.Activity;
import android.os.Bundle;

public class MyActivity extends Activity {
	
	public native String getMyData();
	static {
		System.loadLibrary("mylib");
	}
	
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        
        setTitle( getMyData() );
    }
}