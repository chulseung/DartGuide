package com.maxted.DartGuide;

import java.util.Hashtable;

import android.net.Uri;
import android.view.View;
import android.widget.LinearLayout;
import android.widget.MediaController;
import android.widget.VideoView;
import flashbox.ANDROID.MANAGER;
import flashbox.ANDROID.PROTO;
import flashbox.ANDROID.XAdapter;


public class XVideoViewAdapter extends XAdapter {
	
	// VideoView는 ANDROID 3.1(허니콤) 이상부터 HTTP 프로토콜 지원
	// http://stackoverflow.com/questions/9733455/mediaplayer-error-4-4
	
	LinearLayout flayout;
	VideoView vv; 

	final static String SrcPath = "http://cctvsec.ktict.co.kr/4198/vqJ3aiys0RqqiStovQHpWsf1whSmwyMblBUdSk/cPrC4QXoAcRkLgjIgK4zM/xlh";
	
	@Override
	public Object initWithDict(Hashtable dict, PROTO target) {
		// TODO Auto-generated method stub
		parameter = dict;
		this.context=target.act;
		parent = target;

		MANAGER.log("hashtable: "+dict);
		
		// 데이터 읽는 부분
		Hashtable extra = new Hashtable();
		extra = (Hashtable)parameter.get("extra");
		Hashtable data = new Hashtable();
		data = (Hashtable)extra.get("parameter");
		
		if(vv==null){
			flayout = new LinearLayout(this.context);
			flayout.setOrientation(LinearLayout.HORIZONTAL);
			//flayout.setLayoutParams(new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.MATCH_PARENT));
			
			vv = new VideoView(this.context);
			flayout.addView(vv);
		}
		
		return super.initWithDict(dict, target);
	}

	@Override
	public View getView() {
		// TODO Auto-generated method stub
		return flayout;
	}

	@Override
	public Object getData(Object[] commands) {
		// TODO Auto-generated method stub
		
		String uri = (String)commands[0];
		MANAGER.log("uri: "+uri);
		
		try {
			changeVideo(uri);
			MANAGER.log("play http video");
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
		
		return super.getData(commands);
	}

	private void changeVideo(String uriString) {
		vv.setVideoURI(Uri.parse(SrcPath));
		//vv.setMediaController(new MediaController(this.context));
		vv.requestFocus();
		vv.start();
	}
	
	
	@Override
	public void freeData() {
		// TODO Auto-generated method stub
		vv = null;
		
		super.freeData();
	}


}


