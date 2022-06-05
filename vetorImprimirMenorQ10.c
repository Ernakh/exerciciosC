/******************************************************************************

Escreva um Programa em C que leia um vetor de 10 posições e imprime todos
os valores menores que 10, e suas respectivas posições no vetor.


*******************************************************************************/

#include <stdio.h>

int main()
{
	//declara o vetor de tamanho 10
    int vetor[10];
	
	//preenche o vetor
    for (int i = 0; i < 10; i++) {
		printf("Insira um valor para a posição %d de 10:", i);
		scanf("%d", &vetor[i]);
	}

	//percorre o vetor analisando o valor de cada posição
	for (int i = 0; i < 10; i++) {
		//verifica se o valor da posição i é menor que 10 e mostra o valor e a posição
		if(vetor[i] < 10)
			printf("vetor[%d] = %d é menor que 10\n", i, vetor[i]);
	}

    return 0;
}
