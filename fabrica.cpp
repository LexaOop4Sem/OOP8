#include "fabrica.h"


fabrica::fabrica()
{

}
abstract* fabrica::getcalc(Estate *value){

    switch (value->getType()) {

    case Estate::EstateType::ECONOM:

        return new apartmentcalc;


       case Estate::EstateType::LUXURIOUS:


       return new luxuriousapartmentcalc;

       case Estate::EstateType::TOWN_HOUSE:

     return new townhousecalc;

       case Estate::EstateType::COTTAGE:

        return new cottagecalc;


    }
    return nullptr;
}
