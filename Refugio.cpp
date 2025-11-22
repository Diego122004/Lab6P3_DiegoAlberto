#pragma once
#include "Refugio.h"
#include <vector>
using namespace std;
Refugio::Refugio() {};

Refugio::Refugio(vector <Animal*> _animales) {
	this->animales = _animales;
};
Refugio::~Refugio() {};
void Refugio::setRefugio() {

};