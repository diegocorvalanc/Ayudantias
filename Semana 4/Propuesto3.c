#include <stdlib.h>
#include <stdio.h>

int perfecto(int n) // Pudo haber sido una funcion void tambien
{
    int aux = 1, suma = 0; // Lo mismo que el ejercicio propuesto 1
    while(aux < n)
    {
        if(n % aux == 0)
        {
            suma = suma + aux;
        }
        aux++; // Si no se cumple la condicion, esto pudo haber ido dentro de un else
    }
    if(suma == n)
    {
        printf("%d es un numero perfecto",n);
    }
    else
    {
        printf("%d no es un numero perfecto",n);
    }
    return 0;
}

int main()
{
    int n = 0;
    printf("Ingresar numero: ");
    scanf("%d",&n);
    perfecto(n); // Llamado de la funcion, no se utiliza printf porque la funcion ya los contiene dentro de ella

    return 0;
}