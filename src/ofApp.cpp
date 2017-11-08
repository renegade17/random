#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	std::random_device rd;
	std::mt19937 eng1(rd());
	std::normal_distribution<float> norm(1000, 15);
	std::normal_distribution<float>norm1(800, 15);
	
	float mean=1000.00f; //average
	float sd = 15.00f; //standard deviation
	
		
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
/*X = {500, 1000, 30, 100, 300, 200, 750, 380 };// set of x-coordinates for jewel
Y = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel*/
for (int n=0; n<20; n++)
{
	X.push_back (norm(eng1));
	Y.push_back (norm1(eng1));
}	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
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
