#include "pimentao.h"

pimentao::pimentao(pizza *p_pizza): ingredientes(p_pizza){

    set_preco(2.00);
    set_kcal(10);
}

float pimentao::get_preco(void){

    return preco + p_pizza->get_preco();
}

int pimentao::get_kcal(void){

    return kcal + p_pizza->get_kcal();
}
