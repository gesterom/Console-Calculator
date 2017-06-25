#include "Operator_Parser.h"
#include <cstdlib>
#include <Add.h>
#include <Mul.h>
#include <Sub.h>
#include <Div.h>
#include <Pow.h>

Operator_Parser::Operator_Parser()
{
    //ctor
    add_priority=0;
}

Operator_Parser::~Operator_Parser()
{
    //dtor
}
Oper* Operator_Parser::operat(char input){

    Oper* temp = new Oper;
    switch(input){
        case '+':
            temp->priority=add_priority+1;
            temp->str = new Add();
            return temp;
        case '-':
            temp->priority=add_priority+1;
            temp->str = new Sub();
            return temp;
        case '*':
            temp->priority=add_priority+2;
            temp->str = new Mul();
            return temp;
        case '/':
            temp->priority=add_priority+2;
            temp->str = new Div();
            return temp;
         case '^':
            temp->priority=add_priority+3;
            temp->str = new Pow();
            return temp;
        case '(':
            add_priority+=10;
            return NULL;
        case ')':
            add_priority-=10;
            return NULL;

        default:
            return NULL;
    }
}
