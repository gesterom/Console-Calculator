#ifndef PRINT_H
#define PRINT_H

#include <I_Visitor.h>

#include <I_Node.h>
#include <Argumnet.h>
#include <Operator.h>


class Print : public I_Visitor
{
    public:
        Print();
        virtual void Visit(Argumnet*);
        virtual void Visit(Operator*);
        virtual ~Print();

    protected:

    private:
};

#endif // PRINT_H
