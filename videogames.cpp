#include <iostream>
#include <cstring>
#include "media.h"
#include "videogames.h"

using namespace std;

Videogames::Videogames() {

}

char* Videogames::getPublisher() {
  return publisher;
}

float* Videogames::getRating() {
  return rating;
}

int Videogames::getType() {
  return 1;
}
