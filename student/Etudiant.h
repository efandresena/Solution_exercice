#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
#include "Parcours.h"
using namespace std;
class Etudiant
{
public:
Etudiant();
~Etudiant();
void setParcours(Parcours parcours);
Parcours getParcours();
void setNomEtudiant(string nom);
string  getNomEtudiant();
private:
string NomEtudiant;
Parcours p;
};
#endif
