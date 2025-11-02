#pragma once
#include "Tableau.h"
class TableauBorne : public Tableau
{
private:
	float min;
	float max;
public:
	TableauBorne(int, float, float);
	float operator[](int index) const;
	void afficher() const;
	float& operator()(int index, float val);
	~TableauBorne();
};

