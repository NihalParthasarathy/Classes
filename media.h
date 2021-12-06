//Header Gaurd
#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Media {//Parent Class
public:
  //Methods
  char* title();
  int year();

  virtual ~Media();//Destructor
  
  virtual void print();//Print method

  //Varubles
  char titleArray[100];
  int date = 0;
  char publisher[20];
  int rating = 0;
  char artist[20];
  int duration;
  char director[20];
protected:
  
};

#endif
