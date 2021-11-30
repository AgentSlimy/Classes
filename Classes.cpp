#include <iostream>
#include <vector>
#include <cstring>

#include "media.h"
#include "videogames.h"
#include "music.h"
#include "movie.h"

using namespace std;

void ADD(vector<Media*>* media);

int main() {
  bool running = true;
  char input[7];
  char title[30];
  int year;
  vector<Media*> mediaList;
  cout << "Welcome to Classes." << endl;
  while(running == true) {
    cout << "Four commands: ADD, SEARCH, DELETE, and QUIT" << endl;
    cin.get(input, 7);
    cin.clear();
    cin.ignore(10000, '\n');
    if(strcmp(input, "add") == 0 || strcmp(input, "ADD") == 0 || strcmp(input, "Add") == 0) {
      ADD(&mediaList);
    }
    else if(strcmp(input, "delete") == 0 || strcmp(input, "DELETE") == 0 || strcmp(input, "Delete") == 0) {
      //Insert code here
    }
    else if(strcmp(input, "search") == 0 || strcmp(input, "SEARCH") == 0 || strcmp(input, "Search") == 0) {
      //Insert code here
    }
    else if(strcmp(input, "quit") == 0 || strcmp(input, "QUIT") == 0 || strcmp(input, "Quit") == 0) {
      cout << "Quitting program" << endl;
      running = false;
    }
    else {
      cout << "Invalid input" << endl;
      running = true;
    }
  }
  return 0;
}

void ADD(vector<Media*>* media) {
  char input[15];
  cout << "What kind of media would you like to add? Movie, Music, or Videogames: " << endl;
  cin.get(input, 15);
  cin.clear();
}
  
