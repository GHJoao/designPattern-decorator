#ifndef CONFEITOS_H_INCLUDED
#define CONFEITOS_H_INCLUDED

#include <iostream>
#include "pizza.h"
#include "ingredientes.h"

class confeitos: public ingredientes{

    public:
        confeitos(pizza *p_pizza);

        float get_preco(void);
        int get_kcal(void);
};


#endif
