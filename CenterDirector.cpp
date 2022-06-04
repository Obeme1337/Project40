#include "CenterDirector.h"



void CenterDirector::sortByPriceAsc(CarCenter carcenter) {
	for (int i = 1; i < carcenter.size; i++) {
		int pr = carcenter.list[i].getPrice();
		int j = i - 1;
		while (j >= 0 && carcenter.list[j].getPrice() > pr) {
			carcenter.list[j + 1].getPrice() == carcenter.list[j].getPrice();
			j--;
		}
		carcenter.list[j + 1].getPrice() == pr;
	}
}
void CenterDirector::sortByPriceDesc(CarCenter carcenter) {
	for (int i = 1; i < carcenter.size; i++) {
		int pr = carcenter.list[i].getPrice();
		int j = i - 1;
		while (j >= 0 && carcenter.list[j].getPrice() < pr) {
			carcenter.list[j + 1].getPrice() == carcenter.list[j].getPrice();
			j--;
		}
		carcenter.list[j + 1].getPrice() == pr;
	}
}
void CenterDirector::sortByReleaseAsc(CarCenter carcenter) {
	for (int i = 1; i < carcenter.size; i++) {
		int rel = carcenter.list[i].getRelease();
		int j = i - 1;
		while (j >= 0 && carcenter.list[j].getRelease() > rel) {
			carcenter.list[j + 1].getRelease() == carcenter.list[j].getRelease();
			j--;
		}
		carcenter.list[j + 1].getRelease() == rel;
	}
}
void CenterDirector::sortByReleaseDesc(CarCenter carcenter) {
	for (int i = 1; i < carcenter.size; i++) {
		int rel = carcenter.list[i].getRelease();
		int j = i - 1;
		while (j >= 0 && carcenter.list[j].getRelease() < rel) {
			carcenter.list[j + 1].getRelease() == carcenter.list[j].getRelease();
			j--;
		}
		carcenter.list[j + 1].getRelease() == rel;
	}
}

double CenterDirector::calculateAvgPrice(CarCenter& carcenter) {
	double avg = 0;

	for (int i = 0; i < carcenter.size; i++)
	{
		avg += carcenter.list[i].getPrice();
	}

	return avg / carcenter.size;
}