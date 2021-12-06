//Nihal Parthasarathy
//12/5/2021
//This code is a database of media where you can add diffrent media to it and it can print out the contents inside the database and delete them too
//Credit to Ehan and Jayden

#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

//Includes the child files
#include "videoGames.h"
#include "movies.h"
#include "music.h"

using namespace std;

//Function Prototypes
void addMedia(vector <Media*> &newv);
void searchMedia(vector <Media*> &newv);
void deleteMedia(vector <Media*> &newv);


int main() {
  bool stillGoing = true; //boolean to see if the code is still going
  vector <Media*> vec; //main vector

  //Loop
  while (stillGoing == true) {
    //Takes in input to see what the user wanst to do
    char str[10];
    cout << "Enter in ADD to add a media, SEARCH to search for something and then print it, DELETE to a peice of media and QUIT to quit" << endl;
    cin >> str;
    cout << str << endl;
    if (strcmp(str, "ADD") == 0) {//Calls the addMedia function
      addMedia(vec);
    }
    else if (strcmp(str, "SEARCH") == 0) {//Calls the searchMedia function
      searchMedia(vec);
    }
    else if (strcmp(str, "DELETE") == 0) {//Calls the deleteMedia function
      deleteMedia(vec);
    }
    else if (strcmp(str, "QUIT") == 0) {//Stops the code
      stillGoing = false;
    }
  }

}

//Adds media to the main vector
void addMedia(vector <Media*> &newv) {
  
  //Makes the pointers
  Music* musicptr = new Music();
  Movies* movieptr = new Movies();
  VideoGames* gameptr = new VideoGames();
  Media* media;

  //Takes in the input
  cout << "Do you want to add videogames, music or movies" << endl;
  char input[11];
  cin >> input;
  cin.ignore();
  
  if (strcmp(input, "videogames") == 0) {//Asks the user for input and adds the videogames input to the main vector
    media = gameptr;
    cout<< "Add title" << endl;
    cin.getline(gameptr->titleArray, 100);
    cout << "Add year it was published" << endl;
    cin >> gameptr->date;
    cin.ignore();
    cout << "Add publisher" << endl;
    cin.getline(gameptr->publisher, 100);
    cout << "Add rating out of 10 stars" << endl;
    cin >> gameptr->rating;
    cin.ignore();
    
    (newv).push_back(gameptr);//Pushes the videogame input back into the vector
  }
  else if (strcmp(input, "music") == 0) {//Asks the user for input and adds the music input into the main vecotor
    media = musicptr;
    cout<< "Add title" << endl;
    cin.getline(musicptr->titleArray, 100);
    cout << "Add year it was published" << endl;
    cin >> musicptr->date;
    cin.ignore();
    cout << "Add artist" << endl;
    cin.getline(musicptr->artist, 50);
    cout << "Add the amount of seconds it was" << endl;
    cin >> musicptr->duration;
    cin.ignore();
    cout << "Add publisher" << endl;
    cin.getline(musicptr->publisher, 50);
    
    (newv).push_back(musicptr);//Pushes the music input back into the vector
  }
  else if (strcmp(input, "movies") == 0) {//Asks the user for input and adds the movie input into the main vector
    media = movieptr;
    cout<< "Add title" << endl;
    cin.getline(movieptr->titleArray, 100);
    cout << "Add year it was published" << endl;
    cin >> movieptr->date;
    cin.ignore();
    cout << "Add director" << endl;
    cin.getline(movieptr->director, 50);
    cout << "Add the duration in minutes" << endl;
    cin >> movieptr->duration;
    cout << "Add rating out of 10 stars" << endl;
    cin >> movieptr->rating;
    cin.ignore();
    
    (newv).push_back(movieptr);//Pushes the movie input back into the vector
  }

}

//Searches for media my either taking in the title of the media or year and prints it
void searchMedia(vector<Media*> &newv) {
  char str[10];
  Media* media;
  //Takes in the input
  cout << "Do you want to search by title(t) or year(y)" << endl;
  cin >> str;
  cin.ignore();
  if (strcmp(str, "t") == 0) {
    char input[50];
    //Takes in the title input
    cout << "Enter title" << endl;
    cin.getline(input, 50);
    //For loop for printing the specific input out
    for (int i = 0; i < newv.size(); i++) {
      if (strcmp(newv[i]->titleArray, input) == 0) {//Sees if input matches the title of any media in the vector
	newv[i]->print(); //prints the media out
      }
    }
    


  }
  else if (strcmp(str, "y") == 0) {
    int input2;
    cout << "Enter in year" << endl;
    cin >> input2;
    for (int i = 0; i < newv.size(); i++) {//The for loop for printing
      if (newv[i]->date == input2) {//Sees if the input matches the year of any Media
        newv[i]->print();//Prints the media out
      }
    }

  }

}

//Deletes media if you ask for title or year
void deleteMedia(vector<Media*> &newv) {
  char str[10];
  Media* media;
  char sure[2];
  //Asks if wants to delete by title or year
  cout << "Do you want to delete by title(t) or year(y)" << endl;
  cin >> str;
  cin.ignore();
  if (strcmp(str, "t") == 0) {
    char input[50];
    //Asks for input
    cout << "Enter title" << endl;
    cin.getline(input, 50);
    //for loop
    for (int i = 0; i < newv.size(); i++) {
      if (strcmp(newv[i]->titleArray, input) == 0) {//Sees if any media matches the input
	cout << "Are you sure you want to delete this y or n" << endl;
	cin >> sure;
	if (strcmp(sure, "y") == 0) {//Checks to see if you want to delete
	  //Both delete the media from the memory and the pointer
	  delete newv[i];
	  //	  newv.erase(newv.begin() + i);
	  cout << "Media deleted" << endl;
	}
	else {
	  cout << "ok" << endl;
	}
      }
      else {//Error message
	cout << "Media not found" << endl;
      }
    }
    
  }
  else {
    //Asks for input
    int input;
    cout << "Enter in the year the media was published" << endl;
    cin >> input;
    for (int i = 0; i < newv.size(); i++) {//For loop
      if (newv[i]->date == input) {//Checks to see if any date mathces the input
        cout << "Are you sure you want to delete this y or n" << endl;
        cin >> sure;
	if (strcmp(sure, "y") == 0) {//Checks to see if you want to delete
	  //Deletes the media from memory and deletes the pointer
	  delete newv[i];
	  newv.erase(newv.begin() + i);
	  cout << "Media deleted" << endl;
	}
	else {
	  cout << "ok" << endl;
	}
      }
    }
    
  }

}


