#include "Tableau.h"

Tableau::Tableau(int taille)
{
    cout << "Call for Tableau Consructor" << endl;
    this->taille = taille;
    this->data = new float[this->taille];
    for (int i = 0; i < this->taille; i++)
    {
        this->data[i] = 0;
    }
}

Tableau::Tableau(const Tableau& autre)
{
    this->taille = autre.taille;
    this->data = new float[this->taille];
    for (int i = 0; i < this->taille; i++)
    {
        this->data[i] = autre.data[i];
    }
}

void Tableau::afficher() const
{
    cout << "Contenu du Tableau :" << endl;
    for (int i = 0; i < this->taille; i++)
    {
       cout<<"T["<<i<<"]= "<< this->data[i]<<endl;
    }
}

Tableau& Tableau::operator=(Tableau const& tab)
{
    if (this != &tab)
    {
        for (int i = 0; i < this->taille; i++)
        {
            this->data[i] = tab.data[i];
        }
    }
        return (*this);
}

float& Tableau::operator[](int index)
{
    return this->data[index];
}

Tableau::~Tableau()
{
    cout << "Call for Tableau Desructor" << endl;
    delete [] this->data;
}
