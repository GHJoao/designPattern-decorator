#ifndef BASE_DOCE_H_INCLUDED
#define BASE_DOCE_H_INCLUDED

#include <iostream>
#include "pizza.h"

class base_doce: public pizza{

    public:
        base_doce();

        float get_preco(void);
        int get_kcal(void);
};


#endif
