#ifndef TOWNHOUSECALC_H
#define TOWNHOUSECALC_H
#include "estate.h"
class Estate;

class townhousecalc
{
public:
    townhousecalc();
     static  int getCost(Estate *value);
};

#endif // TOWNHOUSECALC_H
