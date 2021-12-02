#include <iostream>
#include <cstring>
#include <vector>
#include "videoGames.h"
#include "movies.h"
#include "music.h"
using namespace std;

void addMedia(vector <Media*> &newv);

int main() {
  bool stillGoing = true;
  vector <Media*> vec;
  while (stillGoing == true) { 
    char str[10];
    cout << "Test" << endl;
    cin >> str;
    cout << str << endl;
    if (strcmp(str, "ADD") == 0) {
      addMedia(vec);
    }
    else if (strcmp(str, "SEARCH") == 0) {
      
    }
    else if (strcmp(str, "DELETE") == 0) {
      
    }
    else if (strcmp(str, "QUIT") == 0) {
      stillGoing = false;
    }
  }

}

void addMedia(vector <Media*> &newv) {
  Music* musicptr = new Music();
  Movies* movieptr = new Movies();
  VideoGames* gameptr = new VideoGames();
  Media* media;
  cout << "Do you want to add videogames, music or movies" << endl;
  char input[11];
  cin >> input;
  if (strcmp(input, "videogames") == 0) {
    media = gameptr;
    cout<< "Add title" << endl;
    media->title();
    cout << "Add year it was published" << endl;
    media->year();
    cout << "Add publisher" << endl;
    gameptr->getPublisher();
    cout << "Add rating" << endl;
    gameptr->getRating();
  }
  else if (strcmp(input, "music") == 0) {
    media = musicptr;
    cout<< "Add title" << endl;
    media->title();
    cout << "Add year it was published" << endl;
    media->year();
    cout << "Add artist" << endl;
    musicptr->getArtist();
    cout << "Add duration" << endl;
    musicptr->getDuration();
    cout << "Add publisher" << endl;
    musicptr->getPublisher();
  }
  else if (strcmp(input, "movies") == 0) {
    media = movieptr;
    cout<< "Add title" << endl;
    media->title();
    cout << "Add year it was published" << endl;
    media->year();
    cout << "Add director" << endl;
    movieptr->getDirector();
    cout << "Add duration" << endl;
    movieptr->getDuration();
    cout << "Add rating" << endl;
    movieptr->getRating();

  }

}


