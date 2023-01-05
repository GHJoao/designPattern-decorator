#ifndef CHOCOLATE_H_INCLUDED
#define CHOCOLATE_H_INCLUDED

#include <iostream>
#include "pizza.h"
#include "ingredientes.h"

class chocolate: public ingredientes{

    public:
        chocolate(pizza *p_pizza);

        float get_preco(void);
        int get_kcal(void);
};

#endif
