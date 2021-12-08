#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

Media::Media() {

}

char* Media::getTitle() {
	return title; //Returns Title from "media.h" class
}

int* Media::getYear() {
	return &year; //Returns Year from "media.h" class
}

int Media::getType() {
	return 0;
}
