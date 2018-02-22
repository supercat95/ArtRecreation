#include "ofApp.h"

float redValue, greenValue, blueValue;

//--------------------------------------------------------------
void ofApp::setup()
{
    ofBackground(218,206,190); // 218- 227, 206- 216, 190-200
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
//    // for slight background variance
//    for (int i{}; i>=0; i++)
//    {
//        redValue = ofRandom(218, 227);
//        greenValue = ofRandom(206, 216);
//        blueValue = ofRandom(190, 200);
//    }
    
//    ofBackground(setColor(redValue),setColor(greenValue),setColor(blueValue));
    
    ofSetCircleResolution(60);
    
    // large black circle
    ofSetColor(0);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 255);
    
    // background-colored circle
    ofSetColor(218,206,190);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 230);
    
    // small red dot at top
    ofSetColor(0); // for black "stroke"
    ofDrawCircle(262, 78, 8);
    ofSetColor(154, 44, 40); // red "fill"
    ofDrawCircle(262, 78, 6);
    
    
    
    
    
    /* these are examples of functions that can be used
    ofFill();
    ofSetColor(0, 255, 0);
    ofSetLineWidth(15.0); // doesn't work for shapes other than lines
    
    ofSetColor(0,0,255);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 100.0);
    
    ofSetColor(0, 255, 0);
    ofDrawRectangle(0.0, 0.0, 30, 70);
    ofDrawLine(150.0, 100.0, 150.0, 250.0);
     */
    
}

//void ofPixels_::setColor(

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
