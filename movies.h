#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Movie : public Media {
 public:
  movie();
  virtual int getType();
  char* getDirector();
  int* getDuration();
  float* getRating();
 private:
  char directorMovie[30];
  int durationMovie;
  float ratingMovie;
};
#endif