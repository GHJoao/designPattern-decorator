#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#include "pizza.h"
#include "base_salgada.h"
#include "base_doce.h"
#include "ingredientes.h"
#include "porcao_queijo.h"
#include "molho_tomate.h"
#include "calabresa.h"
#include "cebola.h"
#include "pimentao.h"
#include "doce_leite.h"
#include "morangos.h"
#include "chocolate.h"
#include "confeitos.h"

using namespace std;


int main()
{
    //configuro como português para poder escrever com acento sem usar %c e código ASCII
    setlocale(LC_ALL, "Portuguese");

    //pizza que fica sendo montada e destruída
    pizza *p = 0;
    //opção teclada em tela
    char op = '0';

    //base da pizza
    char base = '0';
    //acompanhamentos presentes na pizza
    string acompanhamentos = "";
    //auxiliar para remover acompanhamento ao teclar o código de um acompanhamento já presente na pizza
    string aux = "";

    //enquanto o usuário não finalizar
    while(op != 'F')
    {
        //limpa tela sempre
        system("cls");

        //menu do programa
        cout << "BEM-VINDO À MINHA PIZZARIA" << endl << endl;

        cout << "--------------------COMO USAR--------------------" << endl;
        cout << "**Tecle o código da opção para selecionar a base e os acompanhamentos**" << endl;
        cout << "**Acompanhamentos somente com uma base, ou seja, uma base deve ser selecionada para montagem**" << endl;
        cout << "**É possível trocar uma base pela outra e se for teclada a mesma é reiniciada a montagem**" << endl;
        cout << "**Para adicionar ou remover um acompanhamento basta teclar seu código**" << endl;
        cout << "**Tecle 'F' para finalizar o pedido**" << endl << endl;

        cout << "--BASES--" << endl;
        if(base=='0' || base=='B') cout << "A - Base Salgada [R$20,00 | 120 Kcal]" << endl;
        if(base=='0' || base=='A') cout << "B - Base Doce [R$20,00 | 150 Kcal]" << endl;
        cout << "--ACOMPANHAMENTOS--" << endl;
        if( acompanhamentos.find('1') == string::npos )cout << "1 - Porção de Queijo [R$5,00 | 100 Kcal]" << endl;
        if( acompanhamentos.find('2') == string::npos )cout << "2 - Molho de Tomate [R$3,00 | 60 Kcal]" << endl;
        if( acompanhamentos.find('3') == string::npos )cout << "3 - Calabresa [R$6,00 | 80 Kcal ]" << endl;
        if( acompanhamentos.find('4') == string::npos )cout << "4 - Cebola [R$1,00 | 5 Kcal]" << endl;
        if( acompanhamentos.find('5') == string::npos )cout << "5 - Pimentão [R$2,00 | 10 Kcal]" << endl;
        if( acompanhamentos.find('6') == string::npos )cout << "6 - Doce de Leite [R$8,00 | 190 Kcal]" << endl;
        if( acompanhamentos.find('7') == string::npos )cout << "7 - Morangos [R$5,00 | 30 Kcal]" << endl;
        if( acompanhamentos.find('8') == string::npos )cout << "8 - Chocolate [R$9,00 | 150 Kcal]" << endl;
        if( acompanhamentos.find('9') == string::npos )cout << "9 - Confeitos Coloridos [R$2,00 | 20 Kcal]" << endl;

        cout << endl;

        //monta a pizza com a base
        if(base=='A') p = new base_salgada;
        if(base=='B') p = new base_doce;

        if(p != 0)
        {
            //adicionada os acompanhamentos selecionados na pizza
            for(char c : acompanhamentos)
            {
                if(c=='1') p = new porcao_queijo(p);
                if(c=='2') p = new molho_tomate(p);
                if(c=='3') p = new calabresa(p);
                if(c=='4') p = new cebola(p);
                if(c=='5') p = new pimentao(p);
                if(c=='6') p = new doce_leite(p);
                if(c=='7') p = new morangos(p);
                if(c=='8') p = new chocolate(p);
                if(c=='9') p = new confeitos(p);
            }

            //exibe o que se tem no momento
            cout << "--PIZZA MONTADA--" << endl;
            if(base=='A') cout << "A - Base Salgada [R$20,00 | 120 Kcal]" << endl;
            else cout << "B - Base Doce [R$20,00 | 150 Kcal]" << endl;
            if( acompanhamentos.find('1') != string::npos )cout << "1 - Porção de Queijo [R$5,00 | 100 Kcal]" << endl;
            if( acompanhamentos.find('2') != string::npos )cout << "2 - Molho de Tomate [R$3,00 | 60 Kcal]" << endl;
            if( acompanhamentos.find('3') != string::npos )cout << "3 - Calabresa [R$6,00 | 80 Kcal ]" << endl;
            if( acompanhamentos.find('4') != string::npos )cout << "4 - Cebola [R$1,00 | 5 Kcal]" << endl;
            if( acompanhamentos.find('5') != string::npos )cout << "5 - Pimentão [R$2,00 | 10 Kcal]" << endl;
            if( acompanhamentos.find('6') != string::npos )cout << "6 - Doce de Leite [R$8,00 | 190 Kcal]" << endl;
            if( acompanhamentos.find('7') != string::npos )cout << "7 - Morangos [R$5,00 | 30 Kcal]" << endl;
            if( acompanhamentos.find('8') != string::npos )cout << "8 - Chocolate [R$9,00 | 150 Kcal]" << endl;
            if( acompanhamentos.find('9') != string::npos )cout << "9 - Confeitos Coloridos [R$2,00 | 20 Kcal]" << endl;

            cout << "--TOTAIS--" << endl;
            cout << "Valor: R$ " << p->get_preco() << endl;
            cout << "Kcal: " <<  p->get_kcal() << " Kcal" << endl << endl;
        }

        //recebe opção do usuário
        cout << "Opção: ";
        op = getch();
        if(op=='F') cout << op;

        //se for um acompanhamento e tiver alguma base
        if((op=='1' || op=='2' || op=='3' || op=='4' || op=='5' || op=='6' || op=='7' || op=='8' || op=='9') && base!='0')
        {
            //se o acompanhamento não estava selecionado ainda, adiciona
            if( acompanhamentos.find(op) == string::npos ) acompanhamentos += op;
            //se não remove
            else
            {
                for(char c : acompanhamentos)
                {
                    if(c != op) aux += c;
                }
                acompanhamentos = aux;
                aux = "";
            }
        }
        //se o usuário selecionou uma base
        if(op=='A' || op=='B')
        {
            //se não tinha nada selecionado ou quer trocar de base
            if(op=='A' && (base=='0' || base=='B')) base='A';
            //se teclou a base já presente limpa base e acompanhamentos
            else if(op=='A' && base=='A'){ base='0'; acompanhamentos = "";}
            //se não tinha nada selecionado ou quer trocar de base
            else if(op=='B' && (base=='0' || base=='A')) base='B';
            //se teclou a base já presente limpa base e acompanhamentos
            else { base='0'; acompanhamentos = "";};
        }

        //se não é pra finalizar libera a memória e aponta pro nada, pois no início do loop a pizza é montada de novo
        //se for pra finalizar deixa a pizza criada. A ideia é que fosse feito algo com a pizza finalizada
        if(op != 'F')
        {
            delete p;
            p = 0;
        }

    }

    //como não se fará mais nada com a pizza finalizada, libero a memória e aponto pro nada
    delete p;
    p = 0;

    cout << endl;
    //para o programa não fechar ao sair do loop direto
    system("pause");
    return 0;
}
