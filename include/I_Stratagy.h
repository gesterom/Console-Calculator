#ifndef I_STRATAGY_H
#define I_STRATAGY_H


class I_Stratagy
{
    public:
        I_Stratagy();
        virtual double run(double, double)=0;
        virtual char representation()=0;
        virtual ~I_Stratagy();

    protected:

    private:
};

#endif // I_STRATAGY_H
