#include <iostream>
#include <cstring>
#include <vector>
#include "movies.h"

using namespace std;

char* Movies::getDirector() {//Returns the direcotr name
  return director;
}
int Movies::getDuration() {//Returns the duration of the movie
  return duration;
}
int Movies::getRating() {//Returns the rating
  return rating;
}

void Movies::print() {//Prints the movie media out with all of you contents
  cout << "Title of the movie is " << titleArray << endl;
  cout << "The year it was released is " << date << endl;
  cout << "The director is " << director << endl;
  cout << "The movies is " << duration << " minutes" << endl;
  cout << "The rating is " << rating << " out of 10 stars" << endl;

}

Movies::~Movies() {//Destructor

}
