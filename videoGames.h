#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"

using namespace std;

class VideoGames : public Media {
public:
  virtual void getPublisher();
  virtual void getRating();
};
