package com.myproject;

import org.cocos2dx.lib.Cocos2dxActivity;
import org.cocos2dx.lib.Cocos2dxEditText;
import org.cocos2dx.lib.Cocos2dxGLSurfaceView;

import android.os.Bundle;
import android.util.Log;
import android.view.KeyEvent;
import android.view.View;
import android.view.View.OnKeyListener;

public class MyActivity extends Cocos2dxActivity implements OnKeyListener {
	private Cocos2dxGLSurfaceView mGLView;
	
	public native void onSimpleKeyPressed( int keyCode );
	
	protected void onCreate(Bundle savedInstanceState){
		super.onCreate(savedInstanceState);
		
		// get the packageName,it's used to set the resource path
		String packageName = getApplication().getPackageName();
		super.setPackageName(packageName);
		
		setContentView( R.layout.game_demo );
        mGLView = (Cocos2dxGLSurfaceView) findViewById(R.id.game_gl_surfaceview);
        mGLView.setOnKeyListener( this );
        
        Cocos2dxEditText textfield = (Cocos2dxEditText)findViewById(R.id.textField);
        mGLView.setTextField( textfield );
	}
	
	/**
	 * There must be a better way to do what im trying to fake below (retrieve simple keypress)
	 */
	@Override
	public boolean onKey(View v, int keyCode, KeyEvent event) {
		char unicodeChar = (char)event.getUnicodeChar();
		
		if(  event.getDownTime() != event.getEventTime() ) {
			Log.d("MyActivity", "Ignoring keypress - too soon" +  Character.toString(unicodeChar)  );
			return false;
		}
		
		onSimpleKeyPressed( keyCode );
		// TODO Auto-generated method stub
		return true;
	}
	
	 @Override
	 protected void onPause() {
	     super.onPause();
	     mGLView.onPause();
	 }

	 @Override
	 protected void onResume() {
	     super.onResume();
	     mGLView.onResume();
	 }
	
     static {
         System.loadLibrary("game");
     }
}
