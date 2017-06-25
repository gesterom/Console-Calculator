#ifndef OPERATOR_PARSER_H
#define OPERATOR_PARSER_H

#include <I_Stratagy.h>

struct Oper{
    int priority;
    I_Stratagy* str;
};

class Operator_Parser
{
    public:
        Operator_Parser();
        Oper* operat(char);
        virtual ~Operator_Parser();

    protected:

    private:
        int add_priority;
};

#endif // OPERATOR_PARSER_H
