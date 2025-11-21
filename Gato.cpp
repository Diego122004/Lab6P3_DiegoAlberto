#pragma once
#include "Gato.h"
using namespace std;

Gato::Gato() {};
Gato::Gato(string _nombre, int _edad, string _sex, int _alimentacion, int _felicidad, string _raza, int _Maullido) {


	this->nombre = _nombre;
	this->edad = _edad;
	this->sex = _sex;
	this->alimentacion = _alimentacion;
	this->felicidad = _felicidad;
	this->raza = _raza;
	this->Maullido = _Maullido;
};

