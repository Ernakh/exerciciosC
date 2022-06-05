/******************************************************************************

 (Adaptado de LOPES; GARCIA, 2002) Escreva um Programa em C que leia dois
vetores de 25 posições cada um. A seguir, criar um terceiro vetor, intercalando
os dados dos dois vetores. Este terceiro vetor deve ser impresso no final.


*******************************************************************************/

#include <stdio.h>

#define tamanho 25

int main()
{
	//declarado os vetores, o terceiro precisa contemplar os 2 primeiros
	//logo, dobra-se o tamanho dele
    int vetor1[tamanho], vetor2[tamanho], vetor3[tamanho*2];
	
	//preenche o primeiro vetor
    for (int i = 0; i < tamanho; i++) {
        printf("VETOR 1: Insira um valor para a posição %d de %d:", i, tamanho);
        scanf("%d", &vetor1[i]);
    }
	
	//preenche o segundo vetor
    for (int i = 0; i < tamanho; i++) {
        printf("VETOR 2: Insira um valor para a posição %d de %d:", i, tamanho);
        scanf("%d", &vetor2[i]);
    }
    
	//preenche o terceiro vetor com os valores do primeiro, multiplicando por 2 a posição para fazer a intercalaçao
    for (int i = 0; i < tamanho; i++) {
        vetor3[i*2] = vetor1[i];
    }
	//preenche o terceiro vetor com os valores do segundo, multiplicando por 2 a posição somada a 1 para fazer a intercalaçao
    for (int i = 0; i < tamanho; i++) {
        vetor3[i*2+1] = vetor2[i];
    }

	//mostra o vetor resultante
    for (int i = 0; i < tamanho*2; i++) {
        printf("vetor[%d] = %d\n", i, vetor3[i]);
    }

    return 0;
}
