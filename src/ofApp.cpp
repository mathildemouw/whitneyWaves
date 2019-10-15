#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofFill();
    ofSetColor(99, 199, 200);
    // slowly growing and shrinking teal circle
    ofDrawCircle(ofGetScreenWidth()/4, ofGetScreenHeight()/2, 900 * sin(ofGetElapsedTimef()/10));

    // The Good Place green
    ofSetColor(89, 189, 100);

    // green dots moving in a pattern
    float i;
    for (i=10; i < 800; i+= 20) {
        float x = ofMap(sin(ofGetElapsedTimef()* (i * 0.01)), -1, 1, 30, ofGetScreenWidth()/2);
        ofDrawCircle(x, i, 10);
    }

    ofSetColor(300, 199, 200);
    ofNoFill();
    ofSetLineWidth(3);
    for (i=10; i < 21; i++){
        ofDrawCircle(ofGetScreenWidth()/4, ofGetScreenHeight()/2, 50 * i * 0.3);
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
