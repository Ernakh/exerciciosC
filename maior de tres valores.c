#include <stdio.h>

int main()
{
    int a, b, c, maior;
   
    printf("Insira um valor para A\n");
    scanf("%d", &a);
    b = a;

    while(a == b)
    {
        printf("Insira um valor para B\n");
        scanf("%d", &b);
    }
   
    c = a;
   
    while(c==a || c==b)
    {
        printf("Insira um valor para C\n");
        scanf("%d", &c);
    }
   
    if(c>a && c>b)
    {
        maior = c;
    } else if(b>a && b>c)
    {
        maior = b;
    }
    else
    {
        maior = a;
    }
   
        printf("%d é o maior valor", maior);

    return 0;
}