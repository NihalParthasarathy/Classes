#include <iostream>
#include <cstring>
#include <vector>
#include "videoGames.h"

char* VideoGames::getPublisher() {//Returns publisher
  return publisher;
}
int VideoGames::getRating() {//returns rating
  return rating;
}

void VideoGames::print() {//Prints the Media and its contents out
  cout << "Title of the game is " << titleArray << endl;
  cout << "The year it was published is " << date << endl;
  cout << "The publisher is " << publisher << endl;
  cout << "The rating is " << rating << " out of 10 stars" << endl;
  cout << " " << endl;
}

VideoGames::~VideoGames() {//Destructor

}
