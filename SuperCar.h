#pragma once
#include "Car.h"
class SuperCar : public Car
{
private:
	string ability;

public:
	SuperCar();
	SuperCar(string brand, string model, double price, string colour, int release, string ability);
	~SuperCar();

	/*string getSubject();
	void setSubject(string subject);

	string getAbility();
	void setAbility(string ability);*/

	string getInfo();
};

