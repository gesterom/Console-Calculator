#ifndef POW_H
#define POW_H

#include <I_Stratagy.h>


class Pow : public I_Stratagy
{
    public:
        Pow();
        virtual double run(double, double);
        virtual char representation();
        virtual ~Pow();

    protected:

    private:
};

#endif // POW_H
