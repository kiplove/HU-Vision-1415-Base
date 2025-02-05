#include "IntensityImageStudent.h"

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
	//int throwError = 0, e = 1 / throwError; //Throws error without the need to include a header
	//TODO: Nothing
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	//int throwError = 0, e = 1 / throwError;
	IntensityImageStudent cpy = other;
	delete[] pixel_map;
	pixel_map = cpy.getPixels();
	//TODO: Create a copy from the other object
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	//int throwError = 0, e = 1 / throwError;
	delete[] pixel_map;
	pixel_map = new Intensity[width * height];
	//TODO: Initialize pixel storage
}

IntensityImageStudent::~IntensityImageStudent() {
	//int throwError = 0, e = 1 / throwError;
	delete[] pixel_map;
	//TODO: delete allocated objects
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	//int throwError = 0, e = 1 / throwError;
	delete[] pixel_map;
	pixel_map = new Intensity[width * height];
	//TODO: resize or create a new pixel storage (Don't forget to delete the old storage)
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	//int throwError = 0, e = 1 / throwError;
	IntensityImageStudent cpy = other;
	pixel_map = cpy.getPixels();
	//TODO: resize or create a new pixel storage and copy the object (Don't forget to delete the old storage)
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	//int throwError = 0, e = 1 / throwError;
	int i = x + (y*this->getWidth());
	setPixel(i, pixel);
	//TODO: no comment needed :)
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	//int throwError = 0, e = 1 / throwError;

	pixel_map[i] = pixel;
	/*
	* TODO: set pixel i in "Row-Major Order"
	*
	*
	* Original 2d image (values):
	* 9 1 2
	* 4 3 5
	* 8 7 8
	*
	* 1d representation (i, value):
	* i		value
	* 0		9
	* 1		1
	* 2		2
	* 3		4
	* 4		3
	* 5		5
	* 6		8
	* 7		7
	* 8		8
	*/
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	//int throwError = 0, e = 1 / throwError;
	int i = x + (y*this->getWidth());

	return getPixel(i);
	//TODO: no comment needed :)
}

Intensity IntensityImageStudent::getPixel(int i) const {
	//int throwError = 0, e = 1 / throwError;
	//TODO: see setPixel(int i, RGB pixel)
	return pixel_map[i];
}

Intensity* IntensityImageStudent::getPixels() {
	return pixel_map;
}