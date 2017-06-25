#include "Calculate.h"
#include <Stack.h>
#include <iostream>

Calculate::Calculate(int size) :s(size)
{
    //ctor
}

Calculate::~Calculate()
{
    //dtor
}
void Calculate::Visit(Argumnet* node){
    s.push(node->get());
}
void Calculate::Visit(Operator* node){
    double a = s.pop();
    double b = s.pop();
    std::cout<<b<<node->get()->representation()<<a<<std::endl;
    s.push(node->get()->run(b,a));
}
double Calculate::get(){
    return s.pop();
}
