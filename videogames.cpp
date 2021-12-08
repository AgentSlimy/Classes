#include <iostream>
#include <cstring>
#include "media.h"
#include "videogames.h"

using namespace std;

Videogames::Videogames() {

}

char* Videogames::getPublisher() {
	return publisherGame; //Returns Publisher from "videogames.h" class
}

float* Videogames::getRating() {
	return &rating; //Return Ratinig from "videogames.h" class
}

int Videogames::getType() {
	return 0;
}
