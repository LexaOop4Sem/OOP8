#include "calculationfacade.h"
#include "fabrica.h"
#include "abstract.h"


//class abstract
CalculationFacade::CalculationFacade(QObject *parent) : QObject(parent)
{

}

int CalculationFacade::getCost(Estate *value) {
    int cost=0;

fabrica *ptr = new fabrica();

 cost=ptr->getcalc(value)->getcost(value);



    return cost;
}
