#include "calculationfacade.h"
#include "factory.h"
#include "abstract.h"



class AbstractCalc;
CalculationFacade::CalculationFacade(QObject *parent) : QObject(parent)
{

}

int CalculationFacade::getc(Estate *value) {
    int cost=0;
int aa=1;
int b=100;
factory *ptr = new factory();

 cost=ptr->getabs(aa)->getcost(b);



    return cost;
}
