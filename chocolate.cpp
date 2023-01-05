#include "chocolate.h"

chocolate::chocolate(pizza *p_pizza): ingredientes(p_pizza){

    set_preco(9.00);
    set_kcal(150);
}

float chocolate::get_preco(void){

    return preco + p_pizza->get_preco();
}

int chocolate::get_kcal(void){

    return kcal + p_pizza->get_kcal();
}
