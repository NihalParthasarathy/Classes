

#include "media.h"

#include <iostream>
#include <cstring>
#include <vector>


using namespace std;

class Movies : public Media {
public:
  virtual void getDirector();
  virtual void getDuration();
  virtual void getRating();

};
