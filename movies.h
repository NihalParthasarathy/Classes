#include "media.h"

#include <iostream>
#include <cstring>
#include <vector>


using namespace std;

class Movies : public Media {//Movies class with inhertance from Media
public:
  //Movies functions
  char* getDirector();
  int getDuration();
  int getRating();
  
  void print();//Movie print function
  ~Movies();//Destructor
};
