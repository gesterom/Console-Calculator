#include "Print.h"
#include <iostream>


Print::Print()
{
    //ctor
}

Print::~Print()
{
    //dtor
}
void Print::Visit(Argumnet* node){
    std::cout<<node->get()<<" ";
}
void Print::Visit(Operator* node){
    std::cout<<node->get()->representation()<<" ";
}
