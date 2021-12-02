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
  int date = 0;
  char publisher[20];
  int rating = 0;
  char artist[20];
  int duration;
  char director[20];
};
#endif
