#include <iostream>
#include <cstring>
#include <vector>
#include "videoGames.h"
#include "movies.h"
#include "music.h"
using namespace std;

void addMedia(vector <Media*> &newv);

int main() {
  Music* musicptr = new Music();
  Movies* movieptr = new Movies();
  VideoGames* gameptr = new VideoGames();
  vector <Media*> vec; 
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

  }

}

void addMedia(vector <Media*> &newv) {
  Music* musicptr = new Music();
  Movies* movieptr = new Movies();
  VideoGames* gameptr = new VideoGames();
  cout << "Do you want to add videogames, music or movies" << endl;
  char input[11];
  cin >> input;
  if (strcmp(input, "videogames") == 0) {
    Media* media;
    media = gameptr;
    cout<< "Add title" << endl;
    media->title();
    cout << "Add year it was published" << endl;
    media->year();
    cout << "Add publisher" << endl;
    //media->publisher();
    cout << "Add rating" << endl;
    //media->rating();
  }
  else if (strcmp(input, "music") == 0) {
    
  }
  else if (strcmp(input, "movies") == 0) {

  }

}

void addGames() {
  cout << "Add title" << endl;

  cout << "Add year" << endl;

  cout << "Add publisher" << endl;

  cout << "Add rating" << endl;
}

void addMusic() {
  cout << "Add title" << endl;

  cout << "Add year" << endl;

  
  
}

void addMovies() {

}
