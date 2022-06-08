#include "Car.h"


Car::Car() {
	brand = "no brand";
	model = "no model";
	price = 10000;
	colour = "red";
	release = 2010;
}

Car::Car(string brand, string model, double price, string colour, int release) {
	this->brand = brand;
	this->model = model;
	this->price = price;
	this->colour = colour;
	this->release = release;
}

Car::~Car() {

}

string Car::getBrand() {
	return brand;
}

void Car::setBrand(string brand) {
	this->brand = brand;
}

string Car::getModel() {
	return model;
}

void Car::setModel(string model) {
	this->model = model;

}


double Car::getPrice() {
	return price;
}

void Car::setPrice(double price) {
	if (price >= MIN_PRICE && price <= MAX_PRICE) {
		this->price = price;

	}
}


string Car::getColour() {
	return colour;
}

void Car::setColour(string colour) {
	this->colour = colour;

}

int Car::getRelease() {
	return release;
}

void Car::setRelease(int release) {
	if (release >= MIN_YEAR_RELEASE && release <= MAX_YEAR_RELEASE) {
		this->release = release;
	}
}


string Car::getInfo() {
	return brand + ": model = " + model
		+ ": price = " + to_string(price)
		+ "; colour = " + colour
		+ "; release = " + to_string(release);
}