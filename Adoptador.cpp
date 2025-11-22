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

Adoptador::~Adoptador() {};
int Adoptador::acariciar(int i) {
	if (this->animales.at(i)->getAlim() < 100){
		this->animales.at(i)->alimentacion += 30;
		return this->animales.at(i)->alimentacion;
	};
	
};
int Adoptador::alimentar(int i) {
	if (this->animales.at(i)->getFel() < 100) {
		this->animales.at(i) += 40;
		return this->animales.at(i)->alimentacion += 40;
	};

};
void Adoptador::setAnim() {


}
;

