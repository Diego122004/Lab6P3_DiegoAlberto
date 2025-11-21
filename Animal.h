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
	int alimentacion;
	int felicidad;
public:
	Animal();
	Animal(string _nombre, int _edad, string _sex, int _alimentacion, int _felicidad);
	~Animal();
	friend class Adoptador;
};