#include <iostream>
#include <cstring>
#include <vector>
#include "videoGames.h"

void VideoGames::getPublisher() {
  cin.getline(publisher, 30);
  cout << publisher << endl;
}
void VideoGames::getRating() {
  cin >> rating;
  cout << rating << endl;
}
