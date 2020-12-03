#include "Map.h"

Map::Map(void)
{
}

Map::Map(int id)
{
    this->id = id;
}

Map::Map(String^ nom)
{
    this->Nom = nom;
}

Map::Map(int id, String^ nom) {
    this->id = id;
    this->Nom = nom;
}

Map::Map(String^ nom,String^ prenom,String^ ville, String^ date) {
    this->Nom = nom;
    this->Prenom = prenom;
    this->viLLe = ville;
    this->date = date;
}
Map::Map(int id,String^ nom, String^ prenom, String^ ville, String^ date) {
    this->id = id;
    this->Nom = nom;
    this->Prenom = prenom;
    this->viLLe = ville;
    this->date = date;
}

Map::Map(String^ nom, String^ prenom, String^ date)
{
    this->Nom = nom;
    this->Prenom = prenom;
    this->date = date;
}

Map::Map(int id, String^ nom, String^ prenom, String^ date)
{
    this->id = id;
    this->Nom = nom;
    this->Prenom = prenom;
    this->date = date;
}
