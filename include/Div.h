#ifndef DIV_H
#define DIV_H

#include <I_Stratagy.h>


class Div : public I_Stratagy
{
    public:
        Div();
        virtual double run(double, double);
        virtual char representation();
        virtual ~Div();

    protected:

    private:
};

#endif // DIV_H
