#include "TableauBorne.h"

TableauBorne::TableauBorne(int taille, float min, float max):Tableau(taille)
{
	cout << "Call for TableauBorne Constructor" << endl;
	this->min = min;
	this->max = max;

}
void TableauBorne::afficher() const
{
	cout << "Intervalle : ";
	cout << "[" << this->min << "," << this->max << "]" << endl;
	cout << "Borne min :" << this->min << endl;
	cout << "Borne max :" << this->max << endl;

	cout << "Valeurs dans l'intervalle :" << endl;
	Tableau::afficher();
}
float TableauBorne::operator[](int index) const
{
	return this->data[index];
}

float& TableauBorne::operator()(int index, float val)
{
	if (index>=0 && index < this->taille)
	{
		if (val >= this->min && val <= this->max)
		{
		    this->data[index] = val;
			return this->data[index];
		}
		else
		{
			cout << "Valeur hors intervalle !" << endl;
			return this->data[index]; // retourne quand même la case, mais pas modifiée
		}
	}
	else
	{
		cout << "Index invalide !" << endl;
		return this->data[0]; 
	}
}

TableauBorne::~TableauBorne()
{
	cout << "Call for TableauBorne Destructor" << endl;
}
