#include <iostream>
#include <cstring>
#include "media.h"
#include "movies.h"

using namespace std;

Movie::movie() {

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
