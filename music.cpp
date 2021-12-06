#include <iostream>
#include <cstring>
#include <vector>
#include "music.h"

char* Music::getArtist() {//Returns artist name
  return artist;
}
int Music::getDuration() {//Returns duration
  return duration;
}
char* Music::getPublisher() {//Returns publisher
  return publisher;
}

void Music::print() {//Prints out the media and its contents
  cout << "Title of the song is " << titleArray << endl;
  cout << "The year it was published is " << date << endl;
  cout << "The artist is " << artist << endl;
  cout << "The song is " << duration << " seconds" << endl;
  cout << "The publisher is " << publisher << endl;
  cout << " " << endl;

}

Music::~Music() {//Destructor

}
