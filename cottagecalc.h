#ifndef COTTAGECALC_H
#define COTTAGECALC_H
#include "estate.h"
class Estate;

class cottagecalc
{
public:
    cottagecalc();
    static  int getCost(Estate *value);
};

#endif // COTTAGECALC_H
