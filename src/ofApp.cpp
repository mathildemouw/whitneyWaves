#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    // experiments
//    ofFill();
//    ofSetColor(99, 199, 200);
//    // slowly growing and shrinking teal circle
//    ofDrawCircle(ofGetScreenWidth()/4, ofGetScreenHeight()/2, 900 * sin(ofGetElapsedTimef()/10));

    // The Good Place green
    ofSetColor(89, 189, 100);

    // green dots moving in a pattern
//    float i;
//    for (i=10; i < 800; i+= 20) {
//        float x = ofMap(sin(ofGetElapsedTimef()* (i * 0.01)), -1, 1, 30, ofGetScreenWidth()/2);
//        ofDrawCircle(x, i, 10);
//    }
    // concentric pink circles
//    ofSetColor(300, 199, 200);
//    ofNoFill();
//    ofSetLineWidth(3);
//    for (i=10; i < 21; i++){
//        ofDrawCircle(ofGetScreenWidth()/4, ofGetScreenHeight()/2, 50 * i * 0.3);
//    }
//
    //whitney
//    float x1 = (sin(ofGetElapsedTimef()* 0.1) * 10);
//    float y1 = (sin(ofGetElapsedTimef()* 0.2) * 125);
//    float x2 = (sin(ofGetElapsedTimef()* 0.3) * 240);
//    float y2 = (sin(ofGetElapsedTimef()* 0.4) * 900);
    float stillTime = 5;
    float x1 = (sin(stillTime* 0.1) * 10);
    float y1 = (sin(stillTime* 0.2) * 125);
    float x2 = (sin(stillTime* 0.3) * 240);
    float y2 = (sin(stillTime* 0.4) * 900);
    float i;

    float theta = sin(ofGetElapsedTimef() * 4/20);
    // 31 yellow lines
//    for(i=20;i<52;i++){
//        float bleta = (2 * theta) / i-1;

//        ofSetColor(100, 199, 200);
//        ofSetLineWidth(3);
////        ofDrawLine(x1* i, y1, x2, y2*i);
//        float x11;
//        x11 = (cos((3.14 * 2) - theta + (i * bleta)));
//        float y11;
//       y11 = (sin((3.14  * 2) - theta + (i * bleta)));
//        ofDrawLine(x11, y11, x2, y2*i);
////        (20 * cos((3.14 * 2) - theta + (20 * bleta)), 20 * sin((3.14  * 2) − theta+ (20 * bleta));
//    }

    float j;
//        for(j=3; j<50; j++){

//            ofSetColor(100, 199, 80);

//            float circlex = sin(ofGetElapsedTimef()  *  0.5);
//            float circley = cos(ofGetElapsedTimef());
//            ofDrawLine((cos(j * ofGetElapsedTimef()*  0.07) *10)+ 200,
//                       (cos(j * ofGetElapsedTimef() * 0.08))* j +100,
//                       ((400 * ofGetElapsedTimef())/2) + (sin(j * ofGetElapsedTimef()*  0.005) * 10),
//                       400 -  (sin(j) * 10));
            
            // points around a circle, lines
            
            // x = xori + r * cos(angle)
            // x = 400 + 100 * cos(j);
            // y = yori + r * sin(angle)
            // y = 400 + 100 * sin(j);
//            ofSetColor(300, 199, 200);
//
//            ofDrawLine(400 + 100 * cos(j),
//                       400 + 100 * sin(j),
//                       500 + 100 * cos(j),
//                       500 + 100 * sin(j));
            
        // points around a circle, fanning, lines
//            float r1 = 100;
//            float r2 = 300;
//            ofSetColor(300, 199, 200);
//
//            ofDrawLine(400 + r1 * cos(j),
//                       400 + r1 * sin(j),
//                       500 + r2 * cos(j),
//                       500 + r2 * sin(j));
            //funky fan
//            float r1 = 100;
//            float r2 = 300;
//            ofSetColor(300, 199, 200);
//
//            ofDrawLine(400 + r1 * cos(j),
//                       400 + r1 * sin(j),
//                       500 + r2 * sin(j),
//                       500 + r2 * sin(j));
            
            // spike to cone
//            float r1 = 100;
//            float r2 = 300;
//            ofSetColor(300, 199, 200);
//
//            ofDrawLine(400 + r1 * cos(j),
//                       400 + r1 * sin(j),
//                       400 + r2 * sin(j * (1/ofGetElapsedTimef())),
//                       400 + r2 * sin(j * (1/ofGetElapsedTimef())));
            
            //waving spike
//            float r1 = 100;
//            float r2 = 300;
//
//            ofSetColor(300, 199, 200);
//
//            ofDrawLine(400 + r1 * cos(j),
//                       400 + r1 * sin(j),
//                       400 + r2 * sin(j * (ofGetElapsedTimef() * 0.05)),
//                       400 + r2 * sin(j * (ofGetElapsedTimef() * 0.05)));

            //properly spinning disco line-ball
//            float r1 = 100;
//            float r2 = 300;

//            ofSetColor(300, 199, 200);
//
//            ofDrawLine(400 + r1 * cos(j),
//                       400 + r1 * sin(j),
//                       400 + r2 * cos(j * (ofGetElapsedTimef() * 0.05)),
//                       400 + r2 * sin(j * (ofGetElapsedTimef() * 0.05)));

    // only draw on half the circle - thanks Natalie!

    // pink
        ofSetColor(300, 199, 200);
    ofSetLineWidth(3);
        for(j=3.14/3; j<3.14; j+= 0.1){

            float r1 = 100;
            float r2 = 300;

            if (ofGetElapsedTimef() < 5){
                x1 = cos(ofGetElapsedTimef()) * 100 + 300 + r1 * cos(j);
                y1 = sin(ofGetElapsedTimef()) * 100 + 300 + r1 * sin(j);
            }
            else{
                x1 = 400 + r1 * cos(j);
                y1 = 400 + r1 * sin(j);
            }
            ofDrawLine(x1,
                       y1,
                       300 + r2 * cos(j * (ofGetElapsedTimef() * 0.3)),
                       300 + r2 * sin(j * (ofGetElapsedTimef() * 0.5)));
        }

    //periwinkle
//     ofSetColor(100, 100, 210);
    // funky purple
//      ofSetColor(100, 10, 110);

     ofSetColor(200, 200, 110);

    for(j=3.14/3; j<3.14; j+= 0.1){

        float r1 = 100;
        float r2 = 300;
        
                if (ofGetElapsedTimef() < 5){
                    x1 = sin(ofGetElapsedTimef()) * 100 + 300 + r1 * cos(j+3);
                    y1 = cos(ofGetElapsedTimef()) * 100 + 300 + r1 * sin(j+3);
                }
                else{
                    x1 = 400 + r1 * cos(j+3);
                    y1 = 400 + r1 * sin(j+3);
                }

        ofDrawLine(x1,
                   y1,
                   300 - r2 * cos(j * (ofGetElapsedTimef() * 0.3)),
                   300 - r2 * sin(j * (ofGetElapsedTimef() * 0.5)));
    }
    cout << ofGetElapsedTimef() << endl;
    //funky flowing moving dots
//            for(j=300; j<1002; j++){
//                float x12;
//                x12 = j * theta;
//
//                ofSetColor(40, 199, 200);
//
//                float circlex = sin(j * ofGetElapsedTimef() * 0.001);
//                float circley = cos(j);
//                ofDrawCircle((j * (circlex * 0.2))+400, j * (circley * 0.2) + 400, 5);
//                ofSetColor(300, 199, 200);
//                ofDrawCircle(400, 400, 20);
//    //            cout << x12 << endl;
//            }

//    ofSetColor(100, 199, 200);
//    ofSetLineWidth(3);
//    ofDrawLine(x1, y1, x2, y2);
//    cout << "x1" << endl;
//    cout << x1 << endl;
//    cout << "y1" << endl;
//    cout << y1 << endl;

    // 29 red lines
//    ofSetColor(200, 60, 20);
//    ofDrawLine(theta, y1, x2, y2);

    // equation for x,y along a circle axis
//    (20cos((3.14 * 2) − theta + (20 * bleta), 20sin((3.14  * 2) − theta+ (20 * bleta));

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
