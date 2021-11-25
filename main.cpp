#include <iostream>
#include <cstring>
#include <vector>
#include "videoGames.h"
#include "movies.h"
#include "music.h"
using namespace std;

void addGames();
void addMusic();
void addMovies();

int main() {
  Music* musicptr = new Music();
  Movies* movieptr = new Movies();
  VideoGames* gameptr = new VideoGames();
  vector <Media*> vec; 
  char str[10];
  cin >> str;
  cout << str << endl;
  if (strcmp(str, "ADD") == 0) {
    cout << "Do you want to add videogames, music or movies" << endl;
    char input[11];
    cin >> input;
    if (strcmp(input, "videogames") == 0) {

    }
    else if (strcmp(input, "music") == 0) {

    }
    else if (strcmp(input, "movies") == 0) {

    }
  }
  else if (strcmp(str, "SEARCH") == 0) {

  }
  else if (strcmp(str, "DELETE") == 0) {

  }
  else if (strcmp(str, "QUIT") == 0) {

  }

}

void addGames() {

}

void addMusic() {

}

void addMovies() {

}
