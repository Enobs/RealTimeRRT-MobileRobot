#pragma once

#include "ofMain.h"
#include "Enviroment.h"
#define _CRT_SECURE_NO_WARNINGS
//#include "Robot.h"

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
	private:
		ofTrueTypeFont myfont;
		bool updateFlag = true;
		Enviroment *map;
		Robot *car;
		std::list<obstacles*> obst;
		movingObst *OBST;
		maze *wall;

		double updateTime = 0, drawTime = 0;
};
