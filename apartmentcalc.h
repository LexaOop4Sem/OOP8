#ifndef APARTMENTCALC_H
#define APARTMENTCALC_H
#include "abstract.h"

class apartmentcalc: public abstract
{
public:
    apartmentcalc();
    int getcost(int b);
};

#endif // APARTMENTCALC_H
