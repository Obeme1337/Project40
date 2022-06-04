#pragma once
#include "CarCenter.h"

class CenterDirector
{
public:
	void sortByPriceAsc(CarCenter carcenter);
	void sortByPriceDesc(CarCenter carcenter);
	void sortByReleaseAsc(CarCenter carcenter);
	void sortByReleaseDesc(CarCenter carcenter);

	double calculateAvgPrice(CarCenter& carcenter);
};

