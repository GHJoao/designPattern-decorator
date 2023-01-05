#include "molho_tomate.h"

molho_tomate::molho_tomate(pizza *p_pizza): ingredientes(p_pizza){

    set_preco(3.00);
    set_kcal(60);
}

float molho_tomate::get_preco(void){

    return preco + p_pizza->get_preco();
}

int molho_tomate::get_kcal(void){

    return kcal + p_pizza->get_kcal();
}
