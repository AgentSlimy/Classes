#include <iostream>
#include <vector>
#include <cstring>

#include "media.h"
#include "movie.h"
#include "videogames.h"
#include "music.h"

using namespace std;

//functions
void ADD(vector<Media*>* media);
void SEARCH(char* title, vector<Media*>* media);
void DELETE(char* title, vector<Media*>* media);
void SEARCH(int year, vector<Media*>* media);
void DELETE(int year, vector<Media*>* media);

int main() {
    bool running = true;
    char input[7];
    char title[30];
    int year;
    vector<Media*> mediaList;
    cout << "Welcome to Classes." << endl;
    while (running == true) {
        cout << "Four commands: ADD, SEARCH, DELETE, and QUIT" << endl;
        cin.get(input, 7);
        cin.clear();
        cin.ignore(10000, '\n');
        if (strcmp(input, "add") == 0 || strcmp(input, "ADD") == 0 || strcmp(input, "Add") == 0) {
            ADD(&mediaList);
        }
        else if (strcmp(input, "delete") == 0 || strcmp(input, "DELETE") == 0 || strcmp(input, "Delete") == 0) {
            cout << "Delete by title or year?" << endl;
            cin.get(input, 6);
            cin.clear();
            cin.ignore(10000, '\n');
            if (strcmp(input, "Title") == 0 || strcmp(input, "title") == 0) {
                cout << "Input title: " << endl;
                cin.get(title, 30);
                cin.clear();
                cin.ignore(10000, '\n');
                DELETE(title, &mediaList);
            }
            else if (strcmp(input, "Year") == 0 || strcmp(input, "year") == 0) {
                cout << "Input title: " << endl;
                cin >> year;
                cin.clear();
                cin.ignore(10000, '\n');
                DELETE(year, &mediaList);
            }
        }
        else if (strcmp(input, "search") == 0 || strcmp(input, "SEARCH") == 0 || strcmp(input, "Search") == 0) {
            //Insert code here
        }
        else if (strcmp(input, "quit") == 0 || strcmp(input, "QUIT") == 0 || strcmp(input, "Quit") == 0) {
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
    if (strcmp(mediaType, "movies") == 0 || strcmp(mediaType, "Movies") == 0) {
        Movie* mov = new Movie();
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Adding Movie" << endl << "Title: " << endl;
        cin.get(mov->getTitle(), 30);
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Year: " << endl;
        cin >> *mov->getYear();
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Director: " << endl;
        cin.get(mov->getDirector(), 30);
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Duration in minutes: " << endl;
        cin >> *mov->getDuration();
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Rating out of 5 stars: " << endl;
        cin >> *mov->getRating();
        cin.clear();
        cin.ignore(10000, '\n');
        media->push_back(mov);
        cout << "Movie added" << endl;
    }
    else if (strcmp(mediaType, "music") == 0 || strcmp(mediaType, "Music") == 0) {
        Music* mus = new Music();
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Adding Music" << endl << "Title: " << endl;
        cin.get(mus->getTitle(), 30);
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Artist: " << endl;
        cin.get(mus->getArtist(), 30);
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Publisher: " << endl;
        cin.get(mus->getPublisher(), 30);
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Year: " << endl;
        cin >> *mus->getYear();
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Duration in seconds: " << endl;
        cin >> *mus->getDuration();
        cin.clear();
        cin.ignore(10000, '\n');
        media->push_back(mus);
        cout << "Music added" << endl;
    }
    else if (strcmp(mediaType, "videogames") == 0 || strcmp(mediaType, "Videogames") == 0) {
        Videogames* vg = new Videogames();
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Adding Videogame" << endl << "Title: " << endl;
        cin.get(vg->getTitle(), 30);
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Year: " << endl;
        cin >> *vg->getYear();
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Publisher: " << endl;
        cin.get(vg->getPublisher(), 30);
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Rating out of 5 stars: " << endl;
        cin >> *vg->getRating();
        cin.clear();
        cin.ignore(10000, '\n');
        media->push_back(vg);
        cout << "Videogame added" << endl;
    }
    else {
        cout << "Invalid media type, try again" << endl;
    }
}

void DELETE(char* Title, vector<Media*>* media) {
    char input[5];
    vector<Media*>::iterator iterDelTtl;
    for (iterDelTtl = media->begin(); iterDelTtl != media->end(); ++iterDelTtl) {
        if (strcmp(Title, (*iterDelTtl)->getTitle()) == 0) {
            cout << (*iterDelTtl)->getTitle() << ", ";
            cout << *(*iterDelTtl)->getYear() << endl;

            if ((*iterDelTtl)->getType() == 0) {
                cout << "  Published by " << dynamic_cast<Videogames*>(*iterDelTtl)->getPublisher() << endl;
                cout << "  Rating of " << *dynamic_cast<Videogames*>(*iterDelTtl)->getRating() << " stars out of 5" << endl;
            }
            else if ((*iterDelTtl)->getType() == 1) {

            }
        }
    }
}
