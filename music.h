#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"

using namespace std;

class Music : public Media {
public:
  void getArtist();
  void getDuration();
  void getPublisher();
  void printMusic();
};
