#ifndef MOLHO_TOMATE_H_INCLUDED
#define MOLHO_TOMATE_H_INCLUDED

#include <iostream>
#include "pizza.h"
#include "ingredientes.h"

class molho_tomate: public ingredientes{

    public:
        molho_tomate(pizza *p_pizza);

        float get_preco(void);
        int get_kcal(void);
};

#endif
