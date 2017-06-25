#include "Pow.h"
#include <cmath>

Pow::Pow()
{
    //ctor
}

Pow::~Pow()
{
    //dtor
}
double Pow::run(double a, double b){
    return pow(a,b);
}
char Pow::representation(){return '^';}
