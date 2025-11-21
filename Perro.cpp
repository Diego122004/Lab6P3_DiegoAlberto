#pragma once
#include "Perro.h"
using namespace std;

Perro::Perro() {};
Perro::Perro(string _nombre, int _edad, string _sex, int _alimentacion, int _felicidad, string _raza, int _ladrido) {


	this->nombre = _nombre;
	this->edad = _edad;
	this->sex = _sex;
	this->alimentacion = _alimentacion;
	this->felicidad = _felicidad;
	this->raza = _raza;
	this->ladrido = _ladrido;
};


