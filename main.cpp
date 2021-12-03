#include <iostream>
#include <cstring>
#include <vector>
#include "videoGames.h"
#include "movies.h"
#include "music.h"
using namespace std;

void addMedia(vector <Media*> &newv);
void searchMedia(vector <Media*> &newv);

int main() {
  bool stillGoing = true;
  vector <Media*> vec;
  while (stillGoing == true) { 
    char str[10];
    cout << "Enter in ADD to add a media, SEARCH to search for something and then print it, DELETE to a peice of media and QUIT to quit" << endl;
    cin >> str;
    cout << str << endl;
    if (strcmp(str, "ADD") == 0) {
      addMedia(vec);
    }
    else if (strcmp(str, "SEARCH") == 0) {
      searchMedia(vec);
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
  cin.ignore();
  if (strcmp(input, "videogames") == 0) {
    media = gameptr;
    cout<< "Add title" << endl;
    media->title();
    cout << "Add year it was published" << endl;
    media->year();
    cin.ignore();
    cout << "Add publisher" << endl;
    gameptr->getPublisher();
    cout << "Add rating out of 10 stars" << endl;
    gameptr->getRating();
    cin.ignore();
  }
  else if (strcmp(input, "music") == 0) {
    media = musicptr;
    cout<< "Add title" << endl;
    media->title();
    cout << "Add year it was published" << endl;
    media->year();
    cin.ignore();
    cout << "Add artist" << endl;
    musicptr->getArtist();
    cout << "Add the amount of seconds it was" << endl;
    musicptr->getDuration();
    cin.ignore();
    cout << "Add publisher" << endl;
    musicptr->getPublisher();
  }
  else if (strcmp(input, "movies") == 0) {
    media = movieptr;
    cout<< "Add title" << endl;
    media->title();
    cout << "Add year it was published" << endl;
    media->year();
    cin.ignore();
    cout << "Add director" << endl;
    movieptr->getDirector();
    cout << "Add the duration in minutes" << endl;
    movieptr->getDuration();
    cout << "Add rating out of 10 stars" << endl;
    movieptr->getRating();
    cin.ignore();

  }

}

void searchMedia(vector <Media*> &newv) {
  char str[10];
  Music* musicptr = new Music();
  Movies* movieptr = new Movies();
  VideoGames* gameptr = new VideoGames();
  Media* media;
  cout << "If you want to search by title say TITLE and if you want to search by the year say YEAR" << endl;
  cin >> str;
  if (strcmp(str, "TITLE") == 0) {
    char input[50];
    cout << "Enter in title" << endl;
    cin >> input;
    
  }
  else if (strcmp(str, "YEAR") == 0) {
    char input2[50];
    cout << "Enter in year" << endl;
    cin >> input2;
  }
  else {

  }

}


