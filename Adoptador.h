#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
#include "Animal.h"
#include <vector>
using namespace std;
class Adoptador : public Persona {
	vector<Animal*> animales;
public:
	
	Adoptador();
	Adoptador(string _nombre, int _edad, string _sex, string _id, vector<Animal*>& _animales);
	~Adoptador();

	void mostrarAnimales(vector<Animal*>& _animales);
	

};