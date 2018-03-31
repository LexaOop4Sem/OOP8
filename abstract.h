#ifndef ABSTRACT_H
#define ABSTRACT_H

#include "estate.h"
class Estate;
class abstract
{
public:
    abstract();
    virtual int getCost(Estate *value);
};

#endif // ABSTRACT_H
