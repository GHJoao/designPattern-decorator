#include "confeitos.h"

confeitos::confeitos(pizza *p_pizza): ingredientes(p_pizza){

    set_preco(2.00);
    set_kcal(20);
}

float confeitos::get_preco(void){

    return preco + p_pizza->get_preco();
}

int confeitos::get_kcal(void){

    return kcal + p_pizza->get_kcal();
}
