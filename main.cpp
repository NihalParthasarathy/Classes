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
    cin.getline(media->titleArray, 100);
    cout << "Add year it was published" << endl;
    cin >> media->date;
    cin.ignore();
    cout << "Add publisher" << endl;
    cin.getline(gameptr->publisher, 100);
    cout << "Add rating out of 10 stars" << endl;
    cin >> gameptr->rating;
    cin.ignore();
    (newv).push_back(media);
    (newv).push_back(gameptr);
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
  Media* media;
  vector<Media*>::iterator it;
  cout << "Do you want to search by title(t) or year(y)" << endl;
  cin >> str;
  cin.ignore();
  if (strcmp(str, "t") == 0) {
    char input[50];
    cout << "Enter title" << endl;
    cin.getline(input, 50);
    for (it = newv.begin(); it < newv.end(); ++it) {
      if (strcmp((*it)->titleArray, input) == 0) {
	(*it)->printGames();
	(*it)->printMovies();
	(*it)->printMusic();
      }
    }
    
  }
  else if (strcmp(str, "y") == 0) {
    char input2[50];
    cout << "Enter in year" << endl;
    cin >> input2;
  }
  else {

  }

}


