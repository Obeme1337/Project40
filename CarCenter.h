#pragma once
#include "Car.h"

class CarCenter
{
	friend class CenterDirector;

private:
	int size;
	string name;
	Car* list;

public:
	CarCenter();
	CarCenter(string name);
	CarCenter(string name, Car* list, int size);
	~CarCenter();

	void add(Car car);

	Car get(int index);
	int getSize();
	string getName();

	void setName(string name);

	string getInfo();
};

