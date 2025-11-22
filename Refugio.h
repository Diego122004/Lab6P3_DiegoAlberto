#pragma once
#include <iostream>
#include <string>
#include "Animal.h"
#include <vector>
using namespace std;
class Refugio {
	vector <Animal*> animales;
public:
	Refugio();
	Refugio(vector<Animal*> _animales);
	~Refugio();
	void setRefugio();


};