/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int multiplica(int N1, int N2) 
{
  int resultado;
  resultado = N1 * N2;
  return(resultado); 
}


int soma(int N1, int N2)
{
  int resultado;
  resultado = N1 + N2;
  return(resultado);
}

int diminui(int N1, int N2)
{
  int resultado;
  resultado = N1 - N2;
  return(resultado);
}

int divide(int N1, int N2)
{
  int resultado;
  resultado = N1 / N2;
  return(resultado);
}

int main()
{
    int V1, V2, op, resultado = 0;
    printf("Digite o primeiro valor:");
    scanf("%d", &V1);
    printf("Digite o segundo valor:");
    scanf("%d", &V2);
    
    printf("Digite:\n1 para multiplicar\n2 para somar\n3 para subtrair\n4 para dividir\n");
    scanf("%d", &op);
    
    if(op == 1)
        resultado = multiplica(V1,V2);
    else if(op == 2)
        resultado = soma(V1,V2);
    else if(op == 3)
        resultado = diminui(V1,V2);
    else if(op == 4)
        resultado = divide(V1,V2);
    
    printf("Resultado = %d\n", resultado);
}
