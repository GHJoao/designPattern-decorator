#ifndef BASE_SALGADA_H_INCLUDED
#define BASE_SALGADA_H_INCLUDED

#include <iostream>
#include "pizza.h"

class base_salgada: public pizza{

    public:
        base_salgada();

        float get_preco(void);
        int get_kcal(void);
};

#endif
