#include "cottagecalc.h"

cottagecalc::cottagecalc()
{

}
int cottagecalc::getcost(Estate *value){

   int cost= value->getresidents()-15;
    return  cost;

}
