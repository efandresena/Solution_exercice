#include "Vehicule.h"
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
Vehicule::Vehicule(){}
Vehicule::~Vehicule(){}
void Vehicule::setProprieties(int nbr_pneu,int max_speed,string color,string marque){
    cout<<"Entrer la marque puis la couleur du vehicule."<<endl;
    getline(cin,marque);
    getline(cin,color);
    cout<<"Maintenant veuillez entrer les nombres des pneus et puis la vitesse maximaledu voiture."<<endl;
    cin>>nbr_pneu;
    cin>>max_speed;
    Marque=marque;
    Color=color;
    Nbr_pneu=nbr_pneu;
    Max_speed=max_speed;
}
void Vehicule::setOwnerName(string name){
    cout<<"Nom du propriétaire:"<<endl;
    getline(cin,name);
    Owner=name;
}
string Vehicule::getOwnerName(){
    return Owner;
}
string Vehicule::getColor(){
    return Color;
}
string Vehicule::getMarque(){
    return Marque;
}
int Vehicule::getNbr_pneu(){
    return Nbr_pneu;
}
int Vehicule::getMax_speed(){
    return Max_speed;
}
