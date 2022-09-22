#include "Box.h"

// Implement setters and getters
void Box::setDetails(int h, int l, int w) {
      length = l;
      width = w;
      height = h;
    }

int Box::getHeight(){
    return height;
}
int Box::getWidth(){
    return width;
}
int Box::getLength(){
    return length;
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
    return = length * width* height;

}
