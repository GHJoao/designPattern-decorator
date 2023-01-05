#include "calabresa.h"

calabresa::calabresa(pizza *p_pizza): ingredientes(p_pizza){

    set_preco(6.00);
    set_kcal(80);
}

float calabresa::get_preco(void){

    return preco + p_pizza->get_preco();
}

int calabresa::get_kcal(void){

    return kcal + p_pizza->get_kcal();
}
