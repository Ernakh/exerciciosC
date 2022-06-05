/******************************************************************************

Escreva um Programa em C que leia um vetor de números inteiros e ordene-o
em ordem crescente. Exiba o vetor lido e o vetor resultante.


*******************************************************************************/

#include <stdio.h>

int main()
{
	//declaração do vetor e da variavel auxiliar
    int vetor[10], aux = 0;
	
	//preenchimento do vetor
    for (int i = 0; i < 5; i++) {
        printf("Insira um valor para a posição %d de 5:", i);
        scanf("%d", &vetor[i]);
	}
        
	//o vetor é percorrido com o uso de um laço auxiliar para a ordenação
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//verifica se a valor atual é menor que o próximo valor
			if(vetor[j] < vetor[j+1])
			{
				//inverte-se o valor caso a condição acima seja verdadeira
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
	
	//mostra o vetor ordenado
	 for (int i = 4; i >= 0; i--) {
		printf("vetor[%d] = %d :", i, vetor[i]);
	}

    return 0;
}
