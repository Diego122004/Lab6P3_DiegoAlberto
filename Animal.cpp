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
int Animal::getAlim() {

	return this->alimentacion;
};
int Animal::getFel() {

	return this->felicidad;
};
int Animal::hambre() {
	int ham = 10;
	int alimentacion = this->alimentacion;
	alimentacion - ham;
	this->alimentacion = alimentacion;
	
	return alimentacion;

};
int Animal::tristeza() {
	int tris = 10;
	this->felicidad -= tris;
	return  this->felicidad;
};
