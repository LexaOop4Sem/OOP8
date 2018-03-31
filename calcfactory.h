#ifndef CALCFACTORY_H
#define CALCFACTORY_H

#include <QObject>
#include "estate.h"
//#include "apartmentcalc.h"
#include "luxuriousapartmentcalc.h"
#include "townhousecalc.h"
#include "cottagecalc.h"
class Estate;

class CalcFactory
{
public:
    CalcFactory();
    virtual int getCost(Estate *value)= 0;
};

#endif // CALCFACTORY_H
