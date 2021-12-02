#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Music : public Media {
 public:
  music();
  virtual int getType();
  char* getArtist();
  char* getPublisher();
  int* getDuration();
 private:
  char artistMusic[30];
  char publisherMusic[30];
  int durationMusic;
};
#endif
