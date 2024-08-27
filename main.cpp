#include <iostream>
#include "Etudiant.h"
#include "Parcours.h"
#include "Rectangle.h"
#include "cercle.h"
using namespace std;
int main()
{
    Rectangle first;
    Cercle  sur;
    first.Longueur = 10;
    first.Largeur = 40;
    cout<<"Perimetre et surface du rectangle = "<<first.perimetre()<<"et"<<first.surface()<<endl;
    cout<<"Surface et Surconférence du cercle  = "<<sur.Surface()<<"et"<<sur.surconference()<<endl;

        Etudiant etudiant1;
        Parcours parcours1;
        etudiant1.setNomEtudiant("Rado");
        parcours1.setNomParcours("Physique");
        etudiant1.setParcours(parcours1);
        cout<<"Nom de l'étudiant:"<<etudiant1.getNomEtudiant()<<endl;
        cout<<"Parcours de l'étudiant:"<<etudiant1.getParcours().getNomParcours()<<endl;
    return 0;
}
