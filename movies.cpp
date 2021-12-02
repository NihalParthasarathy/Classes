#include <iostream>
#include <cstring>
#include <vector>
#include "movies.h"

using namespace std;

void Movies::getDirector() {
  cin >> director;
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
