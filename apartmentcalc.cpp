#include "apartmentcalc.h"


//class CalcFactory;
class Estate;

apartmentcalc::apartmentcalc()
{

}
int apartmentcalc::getcost(Estate *value){

   int cost= value->getresidents()-1;
    return  cost;

}
