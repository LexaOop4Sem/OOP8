#include "cottagecalc.h"

cottagecalc::cottagecalc()
{

}
int cottagecalc::getCost(Estate *value){

   int cost= value->getresidents()-15;
    return  cost;

}
