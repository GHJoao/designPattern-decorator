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
    //configuro como portugu�s para poder escrever com acento sem usar %c e c�digo ASCII
    setlocale(LC_ALL, "Portuguese");

    //pizza que fica sendo montada e destru�da
    pizza *p = 0;
    //op��o teclada em tela
    char op = '0';

    //base da pizza
    char base = '0';
    //acompanhamentos presentes na pizza
    string acompanhamentos = "";
    //auxiliar para remover acompanhamento ao teclar o c�digo de um acompanhamento j� presente na pizza
    string aux = "";

    //enquanto o usu�rio n�o finalizar
    while(op != 'F')
    {
        //limpa tela sempre
        system("cls");

        //menu do programa
        cout << "BEM-VINDO � MINHA PIZZARIA" << endl << endl;

        cout << "--------------------COMO USAR--------------------" << endl;
        cout << "**Tecle o c�digo da op��o para selecionar a base e os acompanhamentos**" << endl;
        cout << "**Acompanhamentos somente com uma base, ou seja, uma base deve ser selecionada para montagem**" << endl;
        cout << "**� poss�vel trocar uma base pela outra e se for teclada a mesma � reiniciada a montagem**" << endl;
        cout << "**Para adicionar ou remover um acompanhamento basta teclar seu c�digo**" << endl;
        cout << "**Tecle 'F' para finalizar o pedido**" << endl << endl;

        cout << "--BASES--" << endl;
        if(base=='0' || base=='B') cout << "A - Base Salgada [R$20,00 | 120 Kcal]" << endl;
        if(base=='0' || base=='A') cout << "B - Base Doce [R$20,00 | 150 Kcal]" << endl;
        cout << "--ACOMPANHAMENTOS--" << endl;
        if( acompanhamentos.find('1') == string::npos )cout << "1 - Por��o de Queijo [R$5,00 | 100 Kcal]" << endl;
        if( acompanhamentos.find('2') == string::npos )cout << "2 - Molho de Tomate [R$3,00 | 60 Kcal]" << endl;
        if( acompanhamentos.find('3') == string::npos )cout << "3 - Calabresa [R$6,00 | 80 Kcal ]" << endl;
        if( acompanhamentos.find('4') == string::npos )cout << "4 - Cebola [R$1,00 | 5 Kcal]" << endl;
        if( acompanhamentos.find('5') == string::npos )cout << "5 - Piment�o [R$2,00 | 10 Kcal]" << endl;
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
            if( acompanhamentos.find('1') != string::npos )cout << "1 - Por��o de Queijo [R$5,00 | 100 Kcal]" << endl;
            if( acompanhamentos.find('2') != string::npos )cout << "2 - Molho de Tomate [R$3,00 | 60 Kcal]" << endl;
            if( acompanhamentos.find('3') != string::npos )cout << "3 - Calabresa [R$6,00 | 80 Kcal ]" << endl;
            if( acompanhamentos.find('4') != string::npos )cout << "4 - Cebola [R$1,00 | 5 Kcal]" << endl;
            if( acompanhamentos.find('5') != string::npos )cout << "5 - Piment�o [R$2,00 | 10 Kcal]" << endl;
            if( acompanhamentos.find('6') != string::npos )cout << "6 - Doce de Leite [R$8,00 | 190 Kcal]" << endl;
            if( acompanhamentos.find('7') != string::npos )cout << "7 - Morangos [R$5,00 | 30 Kcal]" << endl;
            if( acompanhamentos.find('8') != string::npos )cout << "8 - Chocolate [R$9,00 | 150 Kcal]" << endl;
            if( acompanhamentos.find('9') != string::npos )cout << "9 - Confeitos Coloridos [R$2,00 | 20 Kcal]" << endl;

            cout << "--TOTAIS--" << endl;
            cout << "Valor: R$ " << p->get_preco() << endl;
            cout << "Kcal: " <<  p->get_kcal() << " Kcal" << endl << endl;
        }

        //recebe op��o do usu�rio
        cout << "Op��o: ";
        op = getch();
        if(op=='F') cout << op;

        //se for um acompanhamento e tiver alguma base
        if((op=='1' || op=='2' || op=='3' || op=='4' || op=='5' || op=='6' || op=='7' || op=='8' || op=='9') && base!='0')
        {
            //se o acompanhamento n�o estava selecionado ainda, adiciona
            if( acompanhamentos.find(op) == string::npos ) acompanhamentos += op;
            //se n�o remove
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
        //se o usu�rio selecionou uma base
        if(op=='A' || op=='B')
        {
            //se n�o tinha nada selecionado ou quer trocar de base
            if(op=='A' && (base=='0' || base=='B')) base='A';
            //se teclou a base j� presente limpa base e acompanhamentos
            else if(op=='A' && base=='A'){ base='0'; acompanhamentos = "";}
            //se n�o tinha nada selecionado ou quer trocar de base
            else if(op=='B' && (base=='0' || base=='A')) base='B';
            //se teclou a base j� presente limpa base e acompanhamentos
            else { base='0'; acompanhamentos = "";};
        }

        //se n�o � pra finalizar libera a mem�ria e aponta pro nada, pois no in�cio do loop a pizza � montada de novo
        //se for pra finalizar deixa a pizza criada. A ideia � que fosse feito algo com a pizza finalizada
        if(op != 'F')
        {
            delete p;
            p = 0;
        }

    }

    //como n�o se far� mais nada com a pizza finalizada, libero a mem�ria e aponto pro nada
    delete p;
    p = 0;

    cout << endl;
    //para o programa n�o fechar ao sair do loop direto
    system("pause");
    return 0;
}
