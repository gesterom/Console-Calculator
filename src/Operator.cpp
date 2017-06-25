#include "Operator.h"

Operator::Operator(I_Node* left, I_Node* right, I_Stratagy* f)
{
    //ctor
    this->left_branch = left;
    this->right_branch = right;
    this->func = f;
}

Operator::~Operator()
{
    //dtor
}
void Operator::Accept(I_Visitor* v){
    if(this->left_branch!=0)
        this->left_branch->Accept(v);

    if(this->right_branch!=0)
        this->right_branch->Accept(v);

     v->Visit(this);
}
I_Stratagy* Operator::get(){
    return this->func;
}
