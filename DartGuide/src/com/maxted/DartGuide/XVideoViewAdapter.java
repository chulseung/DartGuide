package com.maxted.DartGuide;

import java.util.Hashtable;

import android.net.Uri;
import android.os.Bundle;
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
	VideoView vv=null;
	boolean isPause = false;

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
		
		String url = data.get("url").toString();
		MANAGER.log("URL:+++++++++++++"+url);
		
		if(vv==null){
			flayout = new LinearLayout(this.context);
			flayout.setOrientation(LinearLayout.HORIZONTAL);
			//flayout.setLayoutParams(new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.MATCH_PARENT));
			
			vv = new VideoView(this.context);
			MediaController mediaController= new MediaController(this.context);
		    mediaController.setAnchorView(vv);        
		   
		    Uri uri=Uri.parse(url);        
		    vv.setMediaController(mediaController);
		    vv.setVideoURI(uri);        
		    vv.requestFocus();
		    
		    int pos = 0;
//		    if (MANAGER.savedInstanceState != null) {
//		        pos = savedInstanceState.getInt("pos");
//		    }
		    
		    playVideo(pos);			
			
			flayout.addView(vv);
		}
		
		return super.initWithDict(dict, target);
	}

	public void playVideo(int position) {
		
		vv.seekTo(position);
		vv.start();
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
			MANAGER.log("play http video");
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
		}
		
		return super.getData(commands);
	}

	
	
	@Override
	public void freeData() {
		// TODO Auto-generated method stub
		
		if (vv != null) {
			vv = null;
			flayout = null;
		}
		
		super.freeData();
	}


}


