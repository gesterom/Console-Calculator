#ifndef ARGUMNET_H
#define ARGUMNET_H

#include <I_Node.h>
#include <I_Visitor.h>

class Argumnet : public I_Node
{
    public:
        Argumnet(double value);
        virtual void Accept(I_Visitor* v);
        double get();
        virtual ~Argumnet();

    protected:

    private:
        double value_of_node;
};

#endif // ARGUMNET_H
