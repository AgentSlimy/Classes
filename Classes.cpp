//Author: Nathan Zou
//Date: 12/5/21
//This program is Classes, a program that can categorizes different forms of media, such as video games, movies, and music.
//Destructors: https://www.geeksforgeeks.org/destructors-c/
//Dynamic Cast: https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/
//Vector Commands (Again): https://www.geeksforgeeks.org/vector-in-cpp-stl/

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
void SEARCH(char* Title, vector<Media*>* media);
void DELETE(char* Title, vector<Media*>* media);
void SEARCH(int Year, vector<Media*>* media);
void DELETE(int Year, vector<Media*>* media);

int main() {
    bool running = true;
    char input[7]; //for "home" commands
    char title[30]; //for title input at search and delete
    int year; //for year input at search and delete
    vector<Media*> mediaList;
    cout << "Welcome to Classes." << endl;
    while (running == true) {
        cout << "Four commands: ADD, SEARCH, DELETE, and QUIT" << endl;
        cin.get(input, 7);
        cin.clear();
        cin.ignore(10000, '\n');
        if (strcmp(input, "add") == 0 || strcmp(input, "ADD") == 0 || strcmp(input, "Add") == 0) { //Add command
            ADD(&mediaList); //Runs add
        }
        else if (strcmp(input, "delete") == 0 || strcmp(input, "DELETE") == 0 || strcmp(input, "Delete") == 0) { //Delete command
            cout << "Delete by title or year?" << endl;
            cin.get(input, 6);
            cin.clear();
            cin.ignore(10000, '\n');
            if (strcmp(input, "Title") == 0 || strcmp(input, "title") == 0) { //Runs delete by title
                cout << "Input title: " << endl;
                cin.get(title, 30);
                cin.clear();
                cin.ignore(10000, '\n');
                DELETE(title, &mediaList);
            }
            else if (strcmp(input, "Year") == 0 || strcmp(input, "year") == 0) { //Runs delete by year
                cout << "Input year: " << endl;
                cin >> year;
                cin.clear();
                cin.ignore(10000, '\n');
                DELETE(year, &mediaList);
            }
        }
        else if (strcmp(input, "search") == 0 || strcmp(input, "SEARCH") == 0 || strcmp(input, "Search") == 0) { //Search command, essentially the same as the delete command
            cout << "Search by title or year?" << endl;
            cin.get(input, 6);
            cin.clear();
            cin.ignore(10000, '\n');
            if (strcmp(input, "Title") == 0 || strcmp(input, "title") == 0) { //Runs serach by title
                cout << "Input title: " << endl;
                cin.get(title, 30);
                cin.clear();
                cin.ignore(10000, '\n');
                SEARCH(title, &mediaList);
            }
            else if (strcmp(input, "Year") == 0 || strcmp(input, "year") == 0) { //Runs serach by year
                cout << "Input year: " << endl;
                cin >> year;
                cin.clear();
                cin.ignore(10000, '\n');
                SEARCH(year, &mediaList);
            }
        }
        else if (strcmp(input, "quit") == 0 || strcmp(input, "QUIT") == 0 || strcmp(input, "Quit") == 0) { //Quit command, it quits...
            cout << "Quitting program" << endl;
            running = false;
        }
        else { 
            cout << "Invalid input" << endl; //Error message
            running = true;
        }
    }
    return 0;
}

void ADD(vector<Media*>* media) { //Add
    char mediaType[15];
    cout << "What kind of media would you like to add? Movies, Music, or Videogames: " << endl;
    cin.get(mediaType, 15);
    cin.clear();
    cin.ignore(10000, '\n');
    if (strcmp(mediaType, "movies") == 0 || strcmp(mediaType, "Movies") == 0) { //Adding movies
        Movie* mov = new Movie();
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
    else if (strcmp(mediaType, "music") == 0 || strcmp(mediaType, "Music") == 0) { //Adding music
        Music* mus = new Music();
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
    else if (strcmp(mediaType, "videogames") == 0 || strcmp(mediaType, "Videogames") == 0) { //Adding videogames
        Videogames* vg = new Videogames();
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
        cout << "Invalid media type" << endl; //Error message 2
    }
}

void DELETE(char* Title, vector<Media*>* media) { //Delete by using the title, 
    char input[5];
    vector<Media*>::iterator iterDelTtl;
    for (iterDelTtl = media->begin(); iterDelTtl != media->end(); ++iterDelTtl) { //With help from Stefan Ene for going through vector
        if (strcmp(Title, (*iterDelTtl)->getTitle()) == 0) {
            cout << (*iterDelTtl)->getTitle() << ", ";
            cout << *(*iterDelTtl)->getYear() << endl;
            if ((*iterDelTtl)->getType() == 0) { //For deleting videogames
                cout << "  Videogame: " << endl;
                cout << "  Published by " << dynamic_cast<Videogames*>(*iterDelTtl)->getPublisher() << endl;
                cout << "  Rating of " << *dynamic_cast<Videogames*>(*iterDelTtl)->getRating() << " stars out of 5" << endl;
            }
            else if ((*iterDelTtl)->getType() == 1) { //For deleting music
                cout << "  Music: " << endl;
                cout << "  Music by artist " << dynamic_cast<Music*>(*iterDelTtl)->getArtist() << endl;
                cout << "  Duration of " << *dynamic_cast<Music*>(*iterDelTtl)->getDuration() << " seconds" << endl;
                cout << "  Published by " << dynamic_cast<Music*>(*iterDelTtl)->getPublisher() << endl << endl;
            }
            else if ((*iterDelTtl)->getType() == 2) { //For deleting movies
                cout << "  Movie: " << endl;
                cout << "  Directed by " << dynamic_cast<Movie*>(*iterDelTtl)->getDirector() << endl;
                cout << "  Duration of " << *dynamic_cast<Movie*>(*iterDelTtl)->getDuration() << " minutes" << endl;
                cout << "  Rating at " << *dynamic_cast<Movie*>(*iterDelTtl)->getRating() << " stars out of 5" << endl << endl;
            }
            cout << "Delete this media? 'yes' or 'no'" << endl; //Confirm deletion
            cin.get(input, 5);
            cin.clear();
            cin.ignore(10000, '\n');
            if (strcmp(input, "yes") == 0) {
                //delete
                delete* iterDelTtl;
                iterDelTtl = media->erase(iterDelTtl);
                return;
            }
        }
    }
}

//Same thing as delete using title, except using 'int Year'
void DELETE(int Year, vector<Media*>* media) { //Delete by using the year
    char input[5];
    vector<Media*>::iterator iterDelYr;
    for (iterDelYr = media->begin(); iterDelYr != media->end(); ++iterDelYr) {
        if (Year == *(*iterDelYr)->getYear()) {
            cout << (*iterDelYr)->getTitle() << ", ";
            cout << *(*iterDelYr)->getYear() << endl;
            if ((*iterDelYr)->getType() == 0) { //For deleting videogames
                cout << "  Videogame: " << endl;
                cout << "  Published by " << dynamic_cast<Videogames*>(*iterDelYr)->getPublisher() << endl;
                cout << "  Rating of " << *dynamic_cast<Videogames*>(*iterDelYr)->getRating() << " stars out of 5" << endl;
            }
            else if ((*iterDelYr)->getType() == 1) { //For deleting music
                cout << "  Music: " << endl;
                cout << "  Music by artist " << dynamic_cast<Music*>(*iterDelYr)->getArtist() << endl;
                cout << "  Duration of " << *dynamic_cast<Music*>(*iterDelYr)->getDuration() << " seconds" << endl;
                cout << "  Published by " << dynamic_cast<Music*>(*iterDelYr)->getPublisher() << endl << endl;
            }
            else if ((*iterDelYr)->getType() == 2) { //For deleting movies
                cout << "  Movie: " << endl;
                cout << "  Directed by " << dynamic_cast<Movie*>(*iterDelYr)->getDirector() << endl;
                cout << "  Duration of " << *dynamic_cast<Movie*>(*iterDelYr)->getDuration() << " minutes" << endl;
                cout << "  Rating at " << *dynamic_cast<Movie*>(*iterDelYr)->getRating() << " stars out of 5" << endl << endl;
            }
            cout << "Delete this media? 'yes' or 'no'" << endl; //Confirm deletion
            cin.get(input, 5);
            cin.clear();
            cin.ignore(10000, '\n');
            if (strcmp(input, "yes") == 0) {
                //delete
                delete* iterDelYr;
                iterDelYr = media->erase(iterDelYr);
                return;
            }
        }
    }
}

void SEARCH(char* Title, vector<Media*>* media) { //Search by using title
    vector<Media*>::iterator iterSerTtl;
    for (iterSerTtl = media->begin(); iterSerTtl != media->end(); ++iterSerTtl) {
        if (strcmp(Title, (*iterSerTtl)->getTitle()) == 0) {
            cout << (*iterSerTtl)->getTitle() << ", ";
            cout << *(*iterSerTtl)->getYear() << endl;
            if ((*iterSerTtl)->getType() == 0) { //Search for videogame
                cout << "  Publisheb by " << dynamic_cast<Videogames*>(*iterSerTtl)->getPublisher() << endl;
                cout << "  Rating of " << *dynamic_cast<Videogames*>(*iterSerTtl)->getRating() << " stars out of 5" << endl;
                
            }
            else if ((*iterSerTtl)->getType() == 1) { //Search for music
                cout << "  Music by artist " << dynamic_cast<Music*>(*iterSerTtl)->getArtist() << endl;
                cout << "  Duration of " << *dynamic_cast<Music*>(*iterSerTtl)->getDuration() << " seconds" << endl;
                cout << "  Published by " << dynamic_cast<Music*>(*iterSerTtl)->getPublisher() << endl << endl;
            }
            else if ((*iterSerTtl)->getType() == 2) { //Search for movie
                cout << "  Directed by " << dynamic_cast<Movie*>(*iterSerTtl)->getDirector() << endl;
                cout << "  Duration of " << *dynamic_cast<Movie*>(*iterSerTtl)->getDuration() << " minutes" << endl;
                cout << "  Rating at " << *dynamic_cast<Movie*>(*iterSerTtl)->getRating() << " stars out of 5" << endl << endl;
            }
        }
    }
}

//Same thing as search using title, except using 'int Year'
void SEARCH(int Year, vector<Media*>* media) { //Search by using year
    vector<Media*>::iterator iterSerYr;
    for (iterSerYr = media->begin(); iterSerYr != media->end(); ++iterSerYr) {
        if (Year == *(*iterSerYr)->getYear()) {
            cout << (*iterSerYr)->getTitle() << ", ";
            cout << *(*iterSerYr)->getYear() << endl;
            if ((*iterSerYr)->getType() == 0) { //Search for videogame
                cout << "  Publisheb by " << dynamic_cast<Videogames*>(*iterSerYr)->getPublisher() << endl;
                cout << "  Rating of " << *dynamic_cast<Videogames*>(*iterSerYr)->getRating() << " stars out of 5" << endl;
            }
            else if ((*iterSerYr)->getType() == 1) { //Search for music
                cout << "  Music by artist " << dynamic_cast<Music*>(*iterSerYr)->getArtist() << endl;
                cout << "  Duration of " << *dynamic_cast<Music*>(*iterSerYr)->getDuration() << " seconds" << endl;
                cout << "  Published by " << dynamic_cast<Music*>(*iterSerYr)->getPublisher() << endl << endl;
            }
            else if ((*iterSerYr)->getType() == 2) { //Search for movie
                cout << "  Directed by " << dynamic_cast<Movie*>(*iterSerYr)->getDirector() << endl;
                cout << "  Duration of " << *dynamic_cast<Movie*>(*iterSerYr)->getDuration() << " minutes" << endl;
                cout << "  Rating at " << *dynamic_cast<Movie*>(*iterSerYr)->getRating() << " stars out of 5" << endl << endl;
            }
        }
    }
}
