#include"Auto.h"
#include<iostream>
#include <string>
using namespace std;
Auto::Auto(){}
//Auto::~Auto(){}
void Auto::setNbr_Portes(int nbr_portes){
    cout<<"Entrer les nombres de portes de l'auto:"<<endl;
    cin>>nbr_portes;
    Nbr_Portes=nbr_portes;
}
void Auto::setDate_Creation(string date){
    cout<<"Entrer la date de sortie de votre Auto:"<<endl;
    getline(cin,date);
    Date_Creation=date;
}
int Auto::getNbr_Portes(){
    return Nbr_Portes;
}
string Auto::getDate_creation(){
    return Date_Creation;
}
