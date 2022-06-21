/******************************************************************************

Escrever um Programa em C que calcule a divisão de dois números. Deverá haver tratamento para a divisão por zero.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valor1, valor2;//declara as 2 variaveis
          
    printf("Digite o primeiro valor: ");//solicita ao usuario para inforamr o primeiro valor
    scanf("%f",&valor1);//le e armazena o primeiro valor
    
    do //solicito ao usuario informar um valor e repito o procedimento enquanto ele informar zero
    {
        printf("Digite o segundo valor: ");//solicita ao usuario para inforamr o segundo valor
        scanf("%f",&valor2);//le e armazena o segundo valor
    
    }while(valor2 == 0);//condicional do laço, enquanto o valor dois for zero, segue executando
 

    printf("A divisão resulta em: %f",(valor1/valor2));//mostra o resultado

    
    return 0;
}
