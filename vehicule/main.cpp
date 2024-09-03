#include "Camion.h"
#include <ios>
#include <iostream>
#include <limits>
using namespace std;
int main(){

    Camion monCamion;
    int choice_1,choice_2;
    do{
        cout<<"Menu"<<endl;
        cout<<"1.Camion"<<endl;
        cout<<"2.Auto"<<endl;
        cout<<"3.Véhicule"<<endl;
        cout<<"4.Quitter"<<endl;

        cin >>choice_1;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (choice_1) {
                case 1:
                do{
                    cout<<"1.Set Proprieties"<<endl;
                    cout<<"2.Set Types"<<endl;
                    cout<<"3.Set Max Charge"<<endl;
                    cout<<"4.Get Types"<<endl;
                    cout<<"5.Get Proprieties"<<endl;
                    cout<<"6.Get Max Charge"<<endl;
                    cout<<"7.Get Owner Name"<<endl;
                    cout<<"8.Exit"<<endl;
                    cin >>choice_2;

                        switch (choice_2) {
                            case 1:
                            monCamion.setProprieties(0,0,"White","Red");
                            break;
                            case 2:
                            monCamion.setCamion_type("Double pont");
                            break;
                            case 3:
                            monCamion.setCapacite_charge(89);
                            break;
                            case 4:
                            cout<<monCamion.getCamion_type();
                            break;
                            case 5:
                            cout<<monCamion.getMax_speed();
                            cout<<monCamion.getColor();
                            cout<<monCamion.getMarque();
                            break;
                            case 6:
                            cout<<monCamion.getCapacite_charge();
                            break;
                            case 7:
                            cout<<monCamion.getOwnerName();
                            break;
                            case 8:
                            break;
                            default:
                            cout<<"Choisit bien"<<endl;

                        }
                }while(choice_2!=8);
                break;
                case 2:
                break;
                case 3:
                break;
                case 4:
                break;
                default:
                cout<<"Veuillez choisir entre ces option s'il vous plait!"<<endl;

            }
    }
    while(choice_1!=4);


}
