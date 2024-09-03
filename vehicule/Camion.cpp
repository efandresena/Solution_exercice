#include"Camion.h"
#include<iostream>
#include <string>
using namespace std;
Camion::Camion(){}
void Camion::setCapacite_charge(int capacite){
    cout<<"Entrer la capacité de charge du camion:"<<endl;
    cin>>capacite;
    Capacite=capacite;
}
void Camion::setCamion_type(string type){
    cout<<"Entrer le type du camion:"<<endl;
    getline(cin,type);
    Type=type;
}
int Camion::getCapacite_charge(){
    return Capacite;
}
string Camion::getCamion_type(){
    return Type;
}
