#include <iostream>
#include <cstring>
#include "media.h"
#include "movie.h"

using namespace std;

Movie::Movie() {

}

char* Movie::getDirector() {
	return directorMovie; //Returns Director from "movie.h" class
}

int* Movie::getDuration() {
	return &durationMovie; //Returns Duration from "movie.h" class
}

float* Movie::getRating() {
	return &ratingMovie; //Returns Rating from "movie.h" class
}

int Movie::getType() {
	return 2;
}
