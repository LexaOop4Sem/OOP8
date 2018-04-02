#ifndef COTTAGECALC_H
#define COTTAGECALC_H
#include "estate.h"

#include "abstract.h"

class cottagecalc: public abstract
{
public:
    cottagecalc();
    int getcost(Estate *value);
};

#endif // COTTAGECALC_H
