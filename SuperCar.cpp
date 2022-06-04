#include "SuperCar.h"

SuperCar::SuperCar() : Car() {
	ability = "no ability";
}

SuperCar::SuperCar(string brand, string model, double price, string colour, int release, 
	string ability) : Car(brand, model, price, colour, release) {

	this->ability = ability;
}

SuperCar::~SuperCar() {

}

string SuperCar::getInfo() {
	return Car::getInfo()
		+ "; ability = " + ability;
}