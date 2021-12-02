#include <iostream>
#include <vector>
#include <cstring>

#include "media.h"
#include "videogames.h"
#include "music.h"
#include "movies.h"

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
  char mediaType[15];
  cout << "What kind of media would you like to add? Movies, Music, or Videogames: " << endl;
  cin.get(mediaType, 15);
  if(strcmp(mediaType, "movies") == 0 || strcmp(mediaType, "Movies") == 0) {
    Movie* mov = new movie();
    cout << "Adding Movie" << endl << "Title: " << endl;
    cin.get(mov->getTitle(), 30);
    cout << "Year: " << endl;
    cin >> *mov->getYear();
    cout << "Director: " << endl;
    cin.get(mov->getDirector(), 30);
    cout << "Duration in minutes: " << endl;
    cin >> *mov->getDuration();
    cout << "Rating out of 5 stars: " << endl;
    cin >> *mov->getRating();
    media->push_back(movie);
    
  }
  else if(strcmp(mediaType, "music") == 0 || strcmp(mediaType, "Music") == 0) {
    Music* mus = new music();
    cout << "Adding Music" << endl << "Title: " << endl;
    cin.get(mus->getTitle(), 30);
    cout << "Artist: " << endl;
    cin.get(mus->getArtist(), 30);
    cout << "Publisher: " << endl;
    cin.get(mus->getPublisher(), 30);
    cout << "Year: " << endl;
    cin >> *mus->getYear();
    cout << "Duration in seconds: " << endl;
    cin >> *mus->getDuration();
    media->push_back(music);
  }
  else if(strcmp(mediaType, "videogames") == 0 || strcmp(mediaType, "Videogames") == 0) {
    Videogames* vg = new videogames();
    cout << "Adding Videogame" << endl << "Title: " << endl;
    cin.get(vg->getTitle(), 30);
    cout << "Year: " << endl;
    cin >> *vg->getYear();
    cout << "Publisher: " << endl;
    cin.get(vg->getPublisher(), 30);
    cout << "Rating out of 5 stars: " << endl;
    cin >> *vg->getRating();
  }
  else {
    cout << "Invalid media type, try again" << endl;
  }
}
  
