#include "doce_leite.h"

doce_leite::doce_leite(pizza *p_pizza): ingredientes(p_pizza){

    set_preco(8.00);
    set_kcal(190);
}

float doce_leite::get_preco(void){

    return preco + p_pizza->get_preco();
}

int doce_leite::get_kcal(void){

    return kcal + p_pizza->get_kcal();
}
