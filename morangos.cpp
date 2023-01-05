#include "morangos.h"

morangos::morangos(pizza *p_pizza): ingredientes(p_pizza){

    set_preco(5.00);
    set_kcal(30);
}

float morangos::get_preco(void){

    return preco + p_pizza->get_preco();
}

int morangos::get_kcal(void){

    return kcal + p_pizza->get_kcal();
}
