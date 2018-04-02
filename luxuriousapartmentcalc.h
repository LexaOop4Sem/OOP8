#ifndef LUXURIOUSAPARTMENTCALC_H
#define LUXURIOUSAPARTMENTCALC_H

//#include "abstract.h"


class luxuriousapartmentcalc: public abstract {
public:
    luxuriousapartmentcalc();

    int getcost(Estate *value);

    ~luxuriousapartmentcalc();
};

#endif // LUXURIOUSAPARTMENTCALC_H


//#ifndef APARTMENTCALC_H
//#define APARTMENTCALC_H

//#include "abstract.h"


//class apartmentcalc: public abstract

//{
//public:
//    apartmentcalc();
//    int getcost (Estate *value);
//    ~apartmentcalc();
//};

//#endif // APARTMENTCALC_H
