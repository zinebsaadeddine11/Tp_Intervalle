#pragma once
#include<iostream>
using namespace std;
class Tableau
{
protected:
	int taille;
	float* data;
public:
	Tableau(int);
	Tableau(const Tableau&);
	void afficher() const;
	Tableau& operator=(Tableau const&);
	float& operator[](int index);
	~Tableau();

};

