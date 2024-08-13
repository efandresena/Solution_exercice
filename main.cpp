#include <iostream>
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
    return 0;
}
