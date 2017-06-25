#include "Argumnet.h"

Argumnet::Argumnet(double value)
{
    //ctor
    this->value_of_node = value;
}

Argumnet::~Argumnet()
{
    //dtor
}
void Argumnet::Accept(I_Visitor* v){
    v->Visit(this);
;}
double Argumnet::get(){
    return value_of_node;
}
