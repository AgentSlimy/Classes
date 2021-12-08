#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Videogames : public Media {
public:
	Videogames();
	virtual int getType();
	char* getPublisher(); //Get game publisher char pointer
	float* getRating(); //Get game rating float pointer
private:
	char publisherGame[30]; //Publisher input array
	float rating; //Float for game rating out of 5
};
#endif
