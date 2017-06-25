#ifndef I_NODE_H
#define I_NODE_H

class I_Visitor;

class I_Node
{
    public:
        I_Node();
        virtual void Accept(I_Visitor*)=0;
        virtual ~I_Node();

    protected:

    private:
};

#endif // I_NODE_H
