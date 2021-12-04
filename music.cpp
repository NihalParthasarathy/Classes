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

void Music::printMusic() {
  cout << "Title of the song is " << titleArray << endl;
  cout << "The year it was published is " << date << endl;
  cout << "The artist is " << artist << endl;
  cout << "The song is " << duration << " seconds" << endl;
  cout << "The publisher is " << publisher << endl;
  cout << " " << endl;

}
