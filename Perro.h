#pragma once
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;
class Perro : public Animal {
	string raza;
	int ladrido;
public:
	Perro();
	Perro(string _nombre, int _edad, string _sex, int _alimentacion, int _felicidad, string _raza, int _ladrido);
	~Perro();
};
