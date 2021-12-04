#include <iostream>
#include <cstring>
#include <vector>
#include "media.h"

using namespace std;

char* Media::title() {
  return titleArray;
  
}
int Media::year() {
  return date;
}

void Media::printGames() {
  cout << "I am fat" << endl;
}
void Media::printMovies() {

}
void Media::printMusic() {

}


