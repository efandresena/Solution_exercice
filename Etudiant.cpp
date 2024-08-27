#include"Etudiant.h"
#include <string>
Etudiant::Etudiant(){}
Etudiant::~Etudiant(){}
void Etudiant::setParcours(Parcours parcours){
    p=parcours;
}
Parcours Etudiant::getParcours(){
    return p;
}
void Etudiant::setNomEtudiant(string nom){
    NomEtudiant=nom;
}
string Etudiant::getNomEtudiant(){
    return NomEtudiant;
}
