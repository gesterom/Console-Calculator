#ifndef SUB_H
#define SUB_H

#include <I_Stratagy.h>


class Sub : public I_Stratagy
{
    public:
        Sub();
        virtual double run(double, double);
        virtual char representation();
        virtual ~Sub();

    protected:

    private:
};

#endif // SUB_H
