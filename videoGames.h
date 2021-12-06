#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"

using namespace std;

class VideoGames : public Media {
public:
  //Functions for videogames
  char* getPublisher();
  int getRating();
  
  void print();//Print function

  ~VideoGames();//Destructor
};
