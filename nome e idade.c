/******************************************************************************

Faça um programa em C que leia o nome e o ano de nascimento. 
Deverá ser mostrado o nome a data de nascimento e a idade.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char nome[75]; //declarado a variavel para receber o nome
    int ano;
          
    printf("Digite seu nome: ");//solicita ao usuario para inforamr o nome
    scanf("%s",nome);//le e armazena o nome
    
    printf("Digite seu ano de nascimento: ");//solicita ao usuario para inforamr o ano de nascimento
    scanf("%d",&ano);//le e armazena o ano
    
    printf("Nome: %s \nIdade:%d", nome, (2022-ano));//mostra o nome e a idade (data de nascimento não é possivel com os dados solicitados)

    return 0;
}
