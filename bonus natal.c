include <stdio.h>

int main()
{
    float bonus, horasExtras, horasFaltas, coeficiente;
   
    printf("Informe as horas extras");
    scanf("%f", &horasExtras);
   
    printf("Informe as horas faltantes");
    scanf("%f", &horasFaltas);
   
   
    coeficiente = horasExtras - ((2/3) * horasFaltas);
   
    if (coeficiente < 600 )
       bonus = 100.00;
    else if(coeficiente <= 1200)
       bonus =  200.00;
    else if(coeficiente <= 1800)
       bonus = 300.00;
    else if(coeficiente <= 2400)
       bonus = 400.00;
    else
       bonus = 500.00;
       
    printf("A gratificação é %f", bonus);
}