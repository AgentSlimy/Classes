#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Movie : public Media {
public:
	Movie();
	virtual int getType();
	char* getDirector(); //Get movie director char pointer 
	int* getDuration(); //Get movie duration int pointer
	float* getRating(); //Get movie rating float pointer
private:
	char directorMovie[30]; //Director input array
	int durationMovie; //Int for duration of movie in minutes
	float ratingMovie; //Float for movie rating out of 5
};
#endif
