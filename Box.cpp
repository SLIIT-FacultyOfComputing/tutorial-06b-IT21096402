#include "Box.h"
#include <iostream>
using namespace std;

// Implement setters and getters
       void Box::setlength(double l){
         length = l;

       }
       void Box::setwidth(double w){
         width = w;

       }
       void Box::setheight(double h){
         height = h;

       }

       double Box::getLength(){
         return length;

       }
       double Box::getWidth(){
         return width;

       }
       double Box::getHeight(){
         return height;

       }

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
