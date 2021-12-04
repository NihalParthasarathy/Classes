#include <iostream>
#include <cstring>
#include <vector>
#include "movies.h"

using namespace std;

void Movies::getDirector() {
  cin.getline(director, 20);
  cout << director << endl;
}
void Movies::getDuration() {
  cin >> duration;
  cout << duration << endl;
}
void Movies::getRating() {
  cin >> rating;
  cout << rating << endl;
}

void Movies::printMovies() {
  cout << "Title of the movie is " << titleArray << endl;
  cout << "The year it was released is " << date << endl;
  cout << "The director is " << director << endl;
  cout << "The movies is " << duration << " minutes" << endl;
  cout << "The rating is " << rating << " out of 10 stars" << endl;


}
