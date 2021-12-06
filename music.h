#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"

using namespace std;

class Music : public Media {//Music class with inheritance from media
public:
  //Functions for music
  char* getArtist();
  int getDuration();
  char* getPublisher();
  
  void print();//Print function for music

  ~Music();//Destructor
};
