#include <stdio.h>


int votar(int idade) 
{
   	 if((idade >=16 && idade <18) || idade > 70)
    {
    printf("Voto facultativo!!");
    }
    else if (idade < 16)
    {
    printf("Não pode votar!");
    }
    else
    {
    printf("Voto obrigatório!");
    }
 
}

int main()
{

    printf("Informe a sua idade\n");
    int idade;
    scanf("%d", &idade);
    
   votar(idade);
    
    return 0;
}