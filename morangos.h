#ifndef MORANGOS_H_INCLUDED
#define MORANGOS_H_INCLUDED

#include <iostream>
#include "pizza.h"
#include "ingredientes.h"

class morangos: public ingredientes{

    public:
        morangos(pizza *p_pizza);

        float get_preco(void);
        int get_kcal(void);
};

#endif
