#pragma once
#include "Header.h"
class Car
{
	friend void changePrice(Car& cr);

private:
	string brand;
	string model;
	double price;
	string colour;
	int release;


public:
	static const int MAX_PRICE = 1000000;
	static const int MIN_PRICE = 10000;

	static const int MIN_YEAR_RELEASE = 2010;
	static const int MAX_YEAR_RELEASE = 2022;



	Car();

	Car(string brand, string model, double price, string colour, int release);

	~Car();

	string getBrand();

	void setBrand(string brand);

	string getModel();

	void setModel(string model);


	double getPrice();

	void setPrice(double price);

	string getColour();

	void setColour(string colour);

	int getRelease();


	void setRelease(int release);


	string getInfo();
};

