#include <stdio.h>
int main()
{
    int Deposito = 80000;
    int ano = 2008;
    //rendimento 8%/ano
    while (Deposito < 160000)
    {
        Deposito = Deposito*108/100;
        ano += 1;
    }
    printf("%d", ano);
    return 0;
}