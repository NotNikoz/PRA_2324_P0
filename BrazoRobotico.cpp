#include <iostream>
#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico (double x, double y, double z,bool Sujetando) : x{x} , y{y} ,z{z} {
	estaSujetando = Sujetando;
};

double BrazoRobotico::getCoordenates_X () {
	return x;
};
double BrazoRobotico::getCoordenates_Y () {
	return y;
};

double BrazoRobotico::getCoordenates_Z () {
	return z;
};

bool BrazoRobotico::get_estaSujetando () {
	return estaSujetando;
};

void BrazoRobotico::coger () {
	estaSujetando = true;
};

void BrazoRobotico::soltar () {
	estaSujetando = false;
};
void BrazoRobotico::mover (double x1, double y1, double z1) {
	x = x1;
	y = y1;
	z = z1;
};
