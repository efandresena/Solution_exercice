#ifndef PARCOURS_H
#define PARCOURS_H
#include<string>
#include"Etudiant.h"
using namespace std;
class Parcours{
    public:
    Parcours();
    ~Parcours();
    void inscription(Etudiant e);
    void setNomParcours(string nom)
};
#endif
