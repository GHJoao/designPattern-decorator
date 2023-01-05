#ifndef CEBOLA_H_INCLUDED
#define CEBOLA_H_INCLUDED

#include <iostream>
#include "pizza.h"
#include "ingredientes.h"

class cebola: public ingredientes{

    public:
        cebola(pizza *p_pizza);

        float get_preco(void);
        int get_kcal(void);
};

#endif
