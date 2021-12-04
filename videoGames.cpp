#include <iostream>
#include <cstring>
#include <vector>
#include "videoGames.h"

char* VideoGames::getPublisher() {
  //cin.getline(publisher, 30);
  return publisher;
}
int VideoGames::getRating() {
  //cin >> rating;
  //cout << rating << endl;
  return rating;
}

void VideoGames::printGames() {
  cout << "Title of the game is " << titleArray << endl;
  cout << "The year it was published is " << date << endl;
  cout << "The publisher is " << publisher << endl;
  cout << "The rating is " << rating << " out of 10 stars" << endl;
  cout << " " << endl;
}
