#include "Adoptador.h"
using namespace std;

Adoptador::Adoptador() {};
Adoptador::Adoptador(string _nombre, int _edad, string _sex, string _id, vector<Animal*>& _animales) {

	this->nombre = _nombre;
	this->edad = _edad;
	this->sex = _sex;
	this->id = _id;
	this->animales = _animales;
};
Adoptador::Adoptador() {};
Adoptador::~Adoptador() {};



