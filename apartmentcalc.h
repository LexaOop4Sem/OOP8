#ifndef APARTMENTCALC_H
#define APARTMENTCALC_H

#include "abstract.h"


class apartmentcalc: public abstract

{
public:
    apartmentcalc();
    int getcost (Estate *value);
    ~apartmentcalc();
};

#endif // APARTMENTCALC_H
