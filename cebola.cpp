#include "cebola.h"

cebola::cebola(pizza *p_pizza): ingredientes(p_pizza){

    set_preco(1.00);
    set_kcal(5);
}

float cebola::get_preco(void){

    return preco + p_pizza->get_preco();
}

int cebola::get_kcal(void){

    return kcal + p_pizza->get_kcal();
}
