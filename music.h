#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"

using namespace std;

class Music : public Media {
public:
  virtual void getArtist();
  virtual void getDuration();
  virtual void getPublisher();
};
