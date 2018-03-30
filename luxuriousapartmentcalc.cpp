#include "luxuriousapartmentcalc.h"

luxuriousapartmentcalc::luxuriousapartmentcalc()
{

}
int luxuriousapartmentcalc::getCost(Estate *value){

   int cost= value->getresidents()-5;
    return  cost;

}
