#include "factory.h"

factory::factory(){

}


abstract* factory::getabs(int aa)
{

    switch (aa) {
        case 1:
            return new apartmentcalc;

        }
}
