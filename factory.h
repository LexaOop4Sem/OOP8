#ifndef FACTORY_H
#define FACTORY_H
#include "abstract.h"
#include "apartmentcalc.h"

class factory
{
public:
    factory();
    static abstract* getabs(int aa);
    //virtual ~factory();
};


#endif // FACTORY_H
