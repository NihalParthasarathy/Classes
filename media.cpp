#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"

using namespace std;

char* Media::title() {//Returns the title name
  return titleArray;
  
}
int Media::year() {//Returns the date
  return date;
}

void Media::print() {//Emptey print function which is changed by child class

}
Media::~Media() {//Destructer
}



