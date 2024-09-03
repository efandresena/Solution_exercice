#ifndef AUTO_H
#define AUTO_H
#include "Vehicule.h"
class Auto:public Vehicule{
    public:
        Auto();
        void setNbr_Portes(int nbr_portes);
        void setDate_Creation(string date);
        int getNbr_Portes();
        string getDate_creation();
    protected:
        int Nbr_Portes;
        string Date_Creation;
};
#endif
