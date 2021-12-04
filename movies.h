

#include "media.h"

#include <iostream>
#include <cstring>
#include <vector>


using namespace std;

class Movies : public Media {
public:
  void getDirector();
  void getDuration();
  void getRating();
  void printMovies();

};
