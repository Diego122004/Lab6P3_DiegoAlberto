#pragma once
#include <iostream>
#include <string>
using namespace std;
class Persona {

protected:
	string nombre;
	int edad;
	string sex;
	string id;
public:
	Persona();
	Persona(string _nombre, int _edad, string _sex, string _id);
	~Persona();

};