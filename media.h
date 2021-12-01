#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Media {
public:
  virtual void title();
  virtual void year();
protected:
  char titleArray[100];
  int date;
  
  
};
#endif
