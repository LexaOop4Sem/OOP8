#include "townhousecalc.h"

townhousecalc::townhousecalc()
{

}
int townhousecalc::getcost(Estate *value){

   int cost= value->getresidents()-10;
    return  cost;

}
