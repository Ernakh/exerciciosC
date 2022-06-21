//Faça um programa em C que contenha uma função que leia um número não determinado de valores inteiros e positivos e retorna a média aritmética dos mesmos.

#include <stdio.h>

float calcula()
{
     float soma = 0, numero = 1, media = 0, i = 0;//declaração e atribuição

    
     while(numero != 0)//um laço que executa enquantos os valores digitados são válidos
     {
         printf("Informe um valor positivo: ");//mostra mensagem
         scanf("%f", &numero);//lê valor e armazena em 'numero'

         soma += numero;//agrega o valor digitado na 'soma'
        
         i++;//incrementa o contador
     }
    
     media = soma/(i-1);//calcula a média dividindo pelo somatorio e pela quantidade de iterações
    
     return media;//retorna a média para a MAIN
}


int main()
{
    float resultado;

     resultado = calcula(); //chama a função 'calcula' e armazena o retorno em 'resultado'
    
     printf("A media aritmetica é: %f",resultado);//mostra o resultado

    return 0;
}
