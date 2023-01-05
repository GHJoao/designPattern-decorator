#ifndef CALABRESA_H_INCLUDED
#define CALABRESA_H_INCLUDED

#include <iostream>
#include "pizza.h"
#include "ingredientes.h"

class calabresa: public ingredientes{

    public:
        calabresa(pizza *p_pizza);

        float get_preco(void);
        int get_kcal(void);
};

#endif
