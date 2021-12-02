#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Videogames : public Media {
 public:
  videogames();
  virtual int getType();
  char* getPublisher();
  float* getRating();
 private:
  char publisherGame[30];
  float rating;
};
#endif
