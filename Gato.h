#pragma once
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;
class Gato : public Animal {
	string raza;
	int Maullido;
public:
	Gato();
	Gato(string _nombre, int _edad, string _sex, int _alimentacion, int _felicidad, string _raza, int _Maullido);
	~Gato();
};