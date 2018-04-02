#ifndef FABRICA_H
#define FABRICA_H
#include "abstract.h"
#include "estate.h"
#include "apartmentcalc.h"
#include "cottagecalc.h"
#include "luxuriousapartmentcalc.h"
#include "townhousecalc.h"
class abstract;
class fabrica
{
public:
   // fabrica();
   static abstract* getcalc(Estate *value);
   virtual ~fabrica();
};

#endif // FABRICA_H
