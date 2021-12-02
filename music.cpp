#include <iostream>
#include <cstring>
#include "media.h"
#include "music.h"

using namespace std;

Music::music() {

}

char* Music::getArtist() {
  return artistMusic;
}

char* Music::getPublisher() {
  return publisherMusic;
}

int* Music::getDuration() {
  return &durationMusic;
}

int Music::getType() {
  return 1;
}
