#include "cercle.h"
const double pi = 3.14;
Cercle ::Cercle(){
    rayon=0;
}
double Cercle::Surface(){
    return rayon*rayon*pi;
}
double Cercle::surconference(){
    return 2*pi*rayon;
}
