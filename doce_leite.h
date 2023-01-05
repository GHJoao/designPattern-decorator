#ifndef DOCE_LEITE_H_INCLUDED
#define DOCE_LEITE_H_INCLUDED

#include <iostream>
#include "pizza.h"
#include "ingredientes.h"

class doce_leite: public ingredientes{

    public:
        doce_leite(pizza *p_pizza);

        float get_preco(void);
        int get_kcal(void);
};

#endif
