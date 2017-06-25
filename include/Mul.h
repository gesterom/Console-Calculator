#ifndef MUL_H
#define MUL_H

#include <I_Stratagy.h>


class Mul : public I_Stratagy
{
    public:
        Mul();
        virtual double run(double, double);
        virtual char representation();
        virtual ~Mul();

    protected:

    private:
};

#endif // MUL_H
