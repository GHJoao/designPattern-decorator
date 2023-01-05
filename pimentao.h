#ifndef PIMENTAO_H_INCLUDED
#define PIMENTAO_H_INCLUDED

#include <iostream>
#include "pizza.h"
#include "ingredientes.h"

class pimentao: public ingredientes{

    public:
        pimentao(pizza *p_pizza);

        float get_preco(void);
        int get_kcal(void);
};

#endif
