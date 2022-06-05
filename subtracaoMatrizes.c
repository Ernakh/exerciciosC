/******************************************************************************

Escreva um Programa em C que leia duas matrizes de dimensão 3 x 3, calcule e
imprima a subtração das matrizes


*******************************************************************************/

#include <stdio.h>

#define tamanho 3

int main()
{
	//declaração das 3 matrizes
    int matriz1[tamanho][tamanho], matriz2[tamanho][tamanho], matriz3[tamanho][tamanho];
    
	//preenchimento da primeira matriz
    for (int i = 0; i < tamanho; i++) {
         for (int j = 0; j < tamanho; j++) {
        printf("MATRIZ 1: Insira um valor para a posição %d, %d:", i, j);
        scanf("%d", &matriz1[i][j]);
         }
    }
    
	//preencimento da segunda matriz
    for (int i = 0; i < tamanho; i++) {
         for (int j = 0; j < tamanho; j++) {
        printf("MATRIZ 2: Insira um valor para a posição %d, %d:", i, j);
        scanf("%d", &matriz2[i][j]);
         }
    }
    
	//percorre-se as matrizes para fazer a subtração, posição por posição
     for (int i = 0; i < tamanho; i++) {
         for (int j = 0; j < tamanho; j++) {
            matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
         }
    }

	//mostra a terceira matriz (resultado)
    for (int i = 0; i < tamanho; i++) {
         for (int j = 0; j < tamanho; j++) {
        printf("MATRIZ 3[%d, %d]: %d\n", i, j, matriz3[i][j]);
         }
    }

    return 0;
}
