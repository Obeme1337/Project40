#include "CarCenter.h"


CarCenter::CarCenter() {
	brand = "no brand";
	price = 10000;
	colour = "red";
	release = 2010;
}

CarCenter::CarCenter(string brand, double price, string colour, int release) {
	this->brand = brand;
	this->price = price;
	this->colour = colour;
	this->release = release;
}


string CarCenter::getBrand() {
	return brand;
}

void CarCenter::setBrand(string brand) {
	this->brand = brand;
}

double CarCenter::getPrice() {
	return price;
}

void CarCenter::setPrice(double price) {
	if (price >= MIN_PRICE && price <= MAX_PRICE) {
		this->price = price;

	}
}


string CarCenter::getColour() {
	return colour;
}

void CarCenter::setColour(string colour) {
	this->colour = colour;

}

int CarCenter::getRelease() {
	return release;
}

void CarCenter::setRelease(int release) {
	if (release >= MIN_YEAR_RELEASE && release <= MAX_YEAR_RELEASE) {
		this->release = release;
	}
}


string CarCenter::getInfo() {
	return brand + ": price = " + to_string(price)
		+ "; colour = " + colour
		+ "; release = " + to_string(release);
}