#include "Persona.h"
using namespace std;

Persona::Persona() {};
Persona::Persona(string _nombre, int _edad, string _sex, string _id) {
	this->nombre = _nombre;
	this->edad = _edad;
	this->sex = _sex;
	this->id = _id;
}
Persona::~Persona() {
};