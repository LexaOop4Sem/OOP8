#include "luxuriousapartmentcalc.h"
class Estate;
luxuriousapartmentcalc::luxuriousapartmentcalc()
{

}
int luxuriousapartmentcalc::getcost(Estate *value){

   int cost= value->getresidents()-5;
    return  cost;

}
