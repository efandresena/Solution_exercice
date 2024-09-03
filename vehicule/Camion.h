#ifndef CAMION_H
#define CAMION_H
#include "Auto.h"
class Camion:public Auto{
    public:
        Camion();
        //~Camion();
        void setCapacite_charge(int capacite);
        void setCamion_type(string type);
        int getCapacite_charge();
        string getCamion_type();
    protected:
        int Capacite;
        string Type;
};
#endif
