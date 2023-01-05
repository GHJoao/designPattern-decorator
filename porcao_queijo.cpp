#include "porcao_queijo.h"

porcao_queijo::porcao_queijo(pizza *p_pizza): ingredientes(p_pizza){

    set_preco(5.00);
    set_kcal(100);
}

float porcao_queijo::get_preco(void){

    return preco + p_pizza->get_preco();
}

int porcao_queijo::get_kcal(void){

    return kcal + p_pizza->get_kcal();
}
