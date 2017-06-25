#ifndef ADD_H
#define ADD_H

#include <I_Stratagy.h>


class Add : public I_Stratagy
{
    public:
        Add();
        virtual double run(double,double);
        virtual char representation();
        virtual ~Add();

    protected:

    private:
};

#endif // ADD_H
