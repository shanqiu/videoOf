#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(255,255,255);
	ofSetVerticalSync(true);
	frameByframe = false;
	fingerMovie.loadMovie("movies/fingers.mov");
    smileMovie.loadMovie("movies/smile.mov");
    angryMovie.loadMovie("movies/angry.mov");
    nothingMovie.loadMovie("movies/nothing.mov");
	
    smileMovie.play();
    angryMovie.play();
    nothingMovie.play();
    
    
    
    
    //fingerMovie.play();
    switchBool=false;
    count=0;
}

//--------------------------------------------------------------
void testApp::update(){
    //fingerMovie.update();
    smileMovie.update();
    angryMovie.update();
    nothingMovie.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    if(count==0){
    smileMovie.draw(80,60);
    }
    if (count==1) {
    angryMovie.draw(80,60);
    }
    if (count==2) {
    nothingMovie.draw(80,60);
    }
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	count=count+1;
    if(count>2){
        count=0;
        
    }
}


//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	//if(!frameByframe){
     //   fingerMovie.setPaused(false);
	//}
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
