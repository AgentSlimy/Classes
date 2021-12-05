#include <iostream>
#include <cstring>
#include "media.h"
#include "movie.h"

using namespace std;

Movie::Movie() {

}

char* Movie::getDirector() {
	return directorMovie;
}

int* Movie::getDuration() {
	return &durationMovie;
}

float* Movie::getRating() {
	return &ratingMovie;
}

int Movie::getType() {
	return 2;
}
