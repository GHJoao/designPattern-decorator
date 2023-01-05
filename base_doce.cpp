#include "base_doce.h"

base_doce::base_doce(){

    set_preco(20.00);
    set_kcal(150);

}

float base_doce::get_preco(void){

    return preco;
}

int base_doce::get_kcal(void){

    return kcal;
}
