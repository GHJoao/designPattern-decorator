#ifndef PORCAO_QUEIJO_H_INCLUDED
#define PORCAO_QUEIJO_H_INCLUDED

#include <iostream>
#include "pizza.h"
#include "ingredientes.h"

class porcao_queijo: public ingredientes{

    public:
        porcao_queijo(pizza *p_pizza);

        float get_preco(void);
        int get_kcal(void);
};

#endif
