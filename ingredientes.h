#ifndef INGREDIENTES_H_INCLUDED
#define INGREDIENTES_H_INCLUDED

#include <iostream>
#include "pizza.h"

class ingredientes: public pizza{

    protected:
        pizza *p_pizza;

    public:
        ingredientes(pizza *p_pizza);
};

#endif
