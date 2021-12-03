#include <iostream>
#include <cstring>
#include <vector>
#include "music.h"

void Music::getArtist() {
  cin.getline(artist, 20);
  cout << artist << endl;
}
void Music::getDuration() {
  cin >> duration;
  cout << duration << endl;
}
void Music::getPublisher() {
  cin.getline(publisher, 50);
  cout << publisher << endl;
}
