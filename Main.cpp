#include "Car.h"
#include "CarCenter.h"
#include "CenterDirector.h" 
#include "SuperCar.h"


//double calculateAvgPrice(CarCenter& carcenter);

void calculateAvgPrice(Car** list, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << list[i]->getInfo() << endl;
	}
}

void changePrice(Car& cr) {
	srand(time(0));
	int price = rand() % 1000000;
	cr.setPrice(price);
}


int main() {

	/*Car car1("Ferrari", "V8", 100000, "red", 2020);

	cout << car1.getInfo() << endl;*/

	/*CarCenter CarCenter1(" Sausage");*/
	/*CarCenter CarCenter2("Banana");*/


	/*Car c1("Ferrari", "V8", 100000, "red", 2020);
	Car c2("BMW", "X5", 50000, "blue", 2021);
	Car c3("Mercedes", "E-class", 50000, "grey", 2022);*/

	//Car c4("Lamborghini", "Huracan", 100000, "yellow", 2019);
	//Car c5("Mercedes", "C-class", 50000, "white", 2021);
	//Car c6("Tesla", "Model X", 30000, "grey", 2022);


	/*CarCenter1.add(c1);
	CarCenter1.add(c2);
	CarCenter1.add(c3);

	cout << CarCenter1.getInfo() << endl;*/

	/*calculateAvgPrice(CarCenter1);*/


	/*CarCenter2.add(c4);
	CarCenter2.add(c5);
	CarCenter2.add(c6);

	
	cout << CarCenter2.getInfo() << endl;*/

	/*Car car1("Ferrari", "V8", 100000, "red", 2020);

	changePrice(car1);
	cout << car1.getInfo() << endl;*/

	/*Car** car = new Car * [3];

	car[0] = new Car("Ferrari", "V8", 100000, "red", 2020);
	car[1] = new Car("Lamborghini", "Huracan", 100000, "yellow", 2019);
	car[2] = new SuperCar("Amphibious vehicle", "1", 100000, "black", 2021, "Swim");

	calculateAvgPrice(car, 3);*/

	return 0;
}