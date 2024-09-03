#ifndef VEHICULE_H
#define VEHICULE_H
#include<string>
using namespace std;
class Vehicule
{
    public:
        Vehicule();
        ~Vehicule();
        void setProprieties(int nbr_pneu,int max_speed,string color,string marque);
        void setOwnerName(string name);
        string getOwnerName();
        int getNbr_pneu(),getMax_speed();
        string getColor(),getMarque();
    private:
    protected:
        int Nbr_pneu,Max_speed;
        string Color,Marque;
        string Owner;
};
#endif
