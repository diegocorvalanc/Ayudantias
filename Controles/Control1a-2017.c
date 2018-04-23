#include <stdlib.h>
#include <stdio.h>

int concepto(int imc)
{
    if (imc < 18.5)
    {
        printf("Infrapeso");
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("Normal");
    }
    else if (imc >= 25 && imc <= 29.99)
    {
        printf("Sobrepeso");
    }
    else
    {
        printf("Obesidad");
    }

    return 0;
}

int main()
{
    int imc;
    printf("Ingrese su imc: ");
    scanf("%i",&imc);
    printf("El rango de su imc es: ");
    printf(concepto(imc));

    return 0;
}
