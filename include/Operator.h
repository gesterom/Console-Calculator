#ifndef OPERATOR_H
#define OPERATOR_H

#include <I_Node.h>
#include <I_Stratagy.h>
#include <I_Visitor.h>

class Operator : public I_Node
{
    public:
        Operator(I_Node* left, I_Node* right, I_Stratagy* f);
        virtual void Accept(I_Visitor* v);
        I_Stratagy* get();
        virtual ~Operator();

    protected:

    private:
        I_Node* left_branch;
        I_Node* right_branch;
        I_Stratagy* func;
};

#endif // OPERATOR_H
