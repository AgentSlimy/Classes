#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Music : public Media {
public:
	Music();
	virtual int getType();
	char* getArtist(); //Get song artist char pointer
	char* getPublisher(); //Get song publisher char pointer
	int* getDuration(); //Get song duration int pointer
private:
	char artistMusic[30]; //Artist input array
	char publisherMusic[30]; //Publisher input array
	int durationMusic; //Int for duration of music in seconds
};
#endif
