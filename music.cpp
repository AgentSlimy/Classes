#include <iostream>
#include <cstring>
#include "media.h"
#include "music.h"

using namespace std;

Music::Music() {

}

char* Music::getArtist() {
	return artistMusic; //Returns Artist from "music.h" class
}

char* Music::getPublisher() {
	return publisherMusic; //Returns Publisher from "music.h" class
}

int* Music::getDuration() {
	return &durationMusic; //Returns Duration from "music.h" class
}

int Music::getType() {
	return 1;
}
