#include "apartmentcalc.h"



apartmentcalc::apartmentcalc()
{

}
int apartmentcalc::getCost(Estate *value){

   int cost= value->getresidents()-1;
    return  cost;

}
