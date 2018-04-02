#ifndef ABSTRACT_H
#define ABSTRACT_H
#include "estate.h"


class Estate;

class abstract
{
public:
//    abstract();
    virtual int getcost(Estate *value)=0;
//    ~abstract();
};

#endif // ABSTRACT_H
