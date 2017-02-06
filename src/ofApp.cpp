#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    size(800,800);
      p= new Particle(width/2, height);
    ofNoStroke ();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
    spawnRate = (int) ofRandom(1,5);
    
    if (frameCount % spawnRate ==0) {
        Particle p= new Particle(width/2, height/2);
        smoke.add(p);
    }
    
    for( int i= smoke.size()-1; i>=0; i--) {
        Particle temp= smoke.get(i);
        temp.update ();
        temp.display ();
        
        if (temp.lifetime <0 ) {
            smoke.remove (i);
        }
    }
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
