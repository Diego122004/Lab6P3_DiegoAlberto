#pragma once
#include"Animal.h"
using namespace std;

Animal::Animal() {};
Animal::Animal(string _nombre, int _edad, string _sex, int _alimentacion, int _felicidad) {

	this->nombre = _nombre;
	this->edad = _edad;
	this->sex = _sex;
	this->alimentacion = _alimentacion;
	this->felicidad = _felicidad;
};
Animal::~Animal() {};
