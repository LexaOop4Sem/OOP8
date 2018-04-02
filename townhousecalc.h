#ifndef TOWNHOUSECALC_H
#define TOWNHOUSECALC_H
#include "estate.h"

#include "abstract.h"

class townhousecalc: public abstract
{
public:
    townhousecalc();
     int getcost(Estate *value);
};

#endif // TOWNHOUSECALC_H
