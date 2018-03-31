#include "apartmentcalc.h"

class CalcFactory;
class Estate;

apartmentcalc::apartmentcalc()
{

}
int apartmentcalc::getCost(Estate *value){

   int cost= value->getresidents()-1;
    return  cost;

}
