#include "Car.h"
#include "CarCenter.h"
#include "CenterDirector.h" 
#include "SuperCar.h"

void changePrice(Car& cr) {
	srand(time(0));
	int price = rand() % 1000000;
	cr.setPrice(price);
}


int main() {

	/*Car car1("Ferrari", "V8", 100000, "red", 2020);

	cout << car1.getInfo() << endl;*/

	/*CarCenter CarCenter1("Sausage");
	CarCenter CarCenter2("Banana");


	Car c1("Ferrari", "V8", 100000, "red", 2020);
	Car c2("BMW", "X5", 50000, "blue", 2021);
	Car c3("Mercedes", "E-class", 50000, "grey", 2022);

	Car c4("Lamborghini", "Huracan", 100000, "yellow", 2019);
	Car c5("Mercedes", "C-class", 50000, "white", 2021);
	Car c6("Tesla", "Model X", 30000, "grey", 2022);


	CarCenter1.add(c1);
	CarCenter1.add(c2);
	CarCenter1.add(c3);

	CarCenter2.add(c4);
	CarCenter2.add(c5);
	CarCenter2.add(c6);

	cout << CarCenter1.getInfo() << endl;
	cout << CarCenter2.getInfo() << endl;*/

	/*Car car1("Ferrari", "V8", 100000, "red", 2020);

	changePrice(car1);
	cout << car1.getInfo() << endl;*/

	return 0;
}