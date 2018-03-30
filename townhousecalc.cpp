#include "townhousecalc.h"

townhousecalc::townhousecalc()
{

}
int townhousecalc::getCost(Estate *value){

   int cost= value->getresidents()-10;
    return  cost;

}
