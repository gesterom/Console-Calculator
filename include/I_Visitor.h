#ifndef I_VISITOR_H
#define I_VISITOR_H

class Argumnet;
class Operator;

class I_Visitor
{
    public:
        I_Visitor();
        virtual void Visit(Argumnet*)=0;
        virtual void Visit(Operator*)=0;
        virtual ~I_Visitor();

    protected:

    private:
};

#endif // I_VISITOR_H
