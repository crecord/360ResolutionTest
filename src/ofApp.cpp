#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    sphere.setRadius(ofGetWidth());
    sphere.setPosition( 0,0,0 );
    //sphere.set
    ofSetSphereResolution(24);
    
    texture.load("bestStitch.png");
    texture.getTexture().setTextureWrap( GL_REPEAT, GL_REPEAT );
    
    material.setShininess(120);
    material.setEmissiveColor(ofColor(255,255,255));
    ofEnableLighting();
    
    gui.setup();
    gui.add(camZoom.setup("Cam Zoom",90,10,180));
    camZoom.addListener(this, &ofApp::camZoomChanged);
}

void ofApp::camZoomChanged(int &camZoom){
    ofLog()<< "zoom called";
    cam.setFov(camZoom);
}

//--------------------------------------------------------------
void ofApp::update(){
    cam.setPosition(0,0,0 );
    sphere.mapTexCoordsFromTexture( texture.getTexture() );
    //sphere.mapTexCoords(0, 0, 1000, 1000);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    material.begin();
    ofBackground(0);
     cam.begin();
        //sphere.draw();
        texture.getTexture().bind();
        sphere.draw();
        sphere.drawWireframe();
        texture.getTexture().unbind();
    cam.end();
    material.end();
    //texture.draw(0,0);
    gui.draw();
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
