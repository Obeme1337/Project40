#include "CarCenter.h"



CarCenter::CarCenter() {
	size = 0;
	name = "no CarCenter name";
	list = NULL;
}
CarCenter::CarCenter(string name) {
	size = 0;
	this->name = name;
	list = NULL;
}
CarCenter::CarCenter(string name, Car* list, int size) {
	this->name = name;
	this->list = list;
	this->size = size;
}
CarCenter::~CarCenter() {
	if (list != NULL) {
		delete[] list;
	}
}


Car CarCenter::get(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return Car("", "", 0, "", 0);
	}
	else {
		return list[index];
	}
}
int CarCenter::getSize() {
	return size;
}
string CarCenter::getName() {
	return name;
}

void CarCenter::setName(string name) {
	this->name = name;
}

string CarCenter::getInfo() {
	if (list == NULL || size == 0) {
		return "CarCenter " + name + "it's empty.";
	}
	string msg = "Car of CarCenter" + name + ":\n";

	for (int i = 0; i < size; i++)
	{
		msg += list[i].getInfo() + "\n";
	}

	return msg;
}

void CarCenter::add(Car car) {
	if (list == NULL) {
		list = new Car[1];
		list[0] = car;
		size = 1;
	}
	else {
		Car* temp = new Car[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = car;
		size++;
		delete[] list;
		list = temp;
	}

}