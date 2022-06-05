/******************************************************************************

Escreva um Programa em C que leia uma matriz quadrada de dimensão 4 e
encontre e imprima:
 a) A matriz lida
 b) O menor valor
 c) O maior valor
 

*******************************************************************************/

#include <stdio.h>

#define tamanho 2

int main()
{
	//declara-se a matriz e as variaves para receber o menor e maior valor
    int matriz[tamanho][tamanho], menor, maior;
    
	//preenche a matriz
    for (int i = 0; i < tamanho; i++) {
         for (int j = 0; j < tamanho; j++) {
        printf("Insira um valor para a posição %d, %d:", i, j);
        scanf("%d", &matriz[i][j]);
         }
    }
    
	//assume-se que o primeiro valor da matriz são o menor e o maior, para depois comparar com o resto da matriz
    menor = matriz[0][0];
    maior = matriz[0][0];

	//percorre a matriz para comparar valor a valor com as variaveis maior e menor
    for (int i = 0; i < tamanho; i++) {
         for (int j = 0; j < tamanho; j++) {
            //troca o valor da variavel menor caso a posição contenha um valor menor que o atual
			if(menor > matriz[i][j])
            {
                menor = matriz[i][j];
            }
            
			//troca o valor da variavel maior caso a posição contenha um valor maior que o atual
            if(maior < matriz[i][j])
            {
                maior = matriz[i][j];
            }
         }
    }

	//mostra a matriz resultante
     for (int i = 0; i < tamanho; i++) {
         for (int j = 0; j < tamanho; j++) {
			printf("[%d, %d]: %d", i, j, matriz[i][j]);
         }
		 
         printf("\n");
    }
    
	//mostra o maior e o menor valor
    printf("O maior valor é %d\n", maior);
    printf("O menor valor é %d\n", menor);

    return 0;
}
