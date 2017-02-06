#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    class Particle {
        float x, y;
        float s; //size
        float a; //alpha
        float lifetime;
        float xDir;
        float yDir;
        
        Particle(float _x, float _y){
            x= _x;
            y= _y;
            s= ofRandom(10, 50);
            a= 60;
            lifetime = 100;
            xDir= ofRandom(-1,1);
            yDir= ofRandom(1,2);
        }
        
        void update() {
            //count down the life
            lifetime --;
            //smoke rises, move up
            y-= yDir*2;
            x+= xDir*2;
            //reduce alpha
            if (a >0) {
                a-=0.5;
            }
            //increase or decrease the size
            s=ofMap(a,40,0,30,150);
            
        }
        
        void display() {
            ofSetColor(0, 0, 0, a);
            ofDrawRectangle(x, y, s, s);
        };
        
    };;
		
};
