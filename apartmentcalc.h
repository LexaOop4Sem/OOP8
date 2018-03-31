#ifndef APARTMENTCALC_H
#define APARTMENTCALC_H
#include "estate.h"
#include "calcfactory.h"

class CalcFactory;
class Estate;
class apartmentcalc:public CalcFactory
{
public:
    apartmentcalc();
    virtual int getCost (Estate *value);
};

#endif // APARTMENTCALC_H
