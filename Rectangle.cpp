#include "Rectangle.h"
Rectangle::Rectangle() {
    Largeur=0;
    Longueur=0;
    }
double Rectangle::perimetre() {
    return 2*(Longueur+Largeur);
}
double Rectangle::surface(){
    return Longueur*Largeur;
}
