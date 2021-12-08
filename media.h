#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <cstring>

using namespace std;

class Media {
public:
	Media();
	char* getTitle(); //Get title char pointer, applies to all other ".h" files
	int* getYear(); //Get year int pointer, applies to all other ".h" files
	virtual int getType();
private:
	char title[30]; //Title array
	int year; //Int year
};
#endif
