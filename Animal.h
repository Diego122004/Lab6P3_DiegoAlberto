#pragma once
#include <iostream>
#include <string>
#include "Adoptador.h"
using namespace std;
class Animal {
protected:
	string nombre;
	int edad;
	string sex;
	int alimentacion = 100;
	int felicidad = 100;
public:
	Animal();
	Animal(string _nombre, int _edad, string _sex, int _alimentacion, int _felicidad);
	~Animal();
	int hambre();
	int tristeza();
	int getAlim();
	int getFel();
	

	friend class Adoptador;
};