#include "base_salgada.h"

base_salgada::base_salgada(){

    set_preco(20.00);
    set_kcal(120);

}

float base_salgada::get_preco(void){

    return preco;
}

int base_salgada::get_kcal(void){

    return kcal;
}
