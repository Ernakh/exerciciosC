#include <stdio.h>
#include <stdlib.h>

int main() {
 int n; // Número de entrada
 int r; // Resultado do deslocamento
 int i; // Contador

 printf("Digite o numero: ");
 scanf("%d", &n);

 // Utiliza um número de 32 bits como base para a conversão.
 for(i = 7; i >= 0; i--) {
    // Executa a operação shift right até a última posição da direita para cada bit.
    r = n >> i;
     if(r & 1) {
        printf("1");
     } else {
        printf("0");
     }
 }

 printf("\n");

}