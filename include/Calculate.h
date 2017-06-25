#ifndef CALCULATE_H
#define CALCULATE_H

#include <I_Visitor.h>
#include <Stack.h>
#include <Argumnet.h>
#include <Operator.h>

class Calculate : public I_Visitor
{
    public:
        Calculate(int size);
        virtual void Visit(Argumnet*);
        virtual void Visit(Operator*);
        double get();
        virtual ~Calculate();

    protected:

    private:
        Stack<double> s;
};

#endif // CALCULATE_H
