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
  char* getPublisher();
  float* getRating();
 private:
  char publisher[30];
  float rating;
};
#endif
