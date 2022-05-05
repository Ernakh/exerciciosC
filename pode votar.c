/******************************************************************************

Escrever um Programa em C que leia a idade de um eleitor e verifi que se ele pode
ou não votar. Se ele puder votar, informe se o seu voto é facultativo. Sabe-se que
a partir dos 16 até os 18 anos o voto é facultativo, assim como para os maiores de
70 anos..

*******************************************************************************/

#include
int main()
{

printf("Informe a sua idade\n");
int idade;
scanf("%d", &idade);

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

return 0;
}