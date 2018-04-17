#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n; // Declaramos la variable n

    printf("Ingresar valor del numero: ");
    scanf("%i",&n); // Le asignamos un valor a la variable n 

    printf("El doble y triple de %i, es %i y %i respectivamente",n,n*2,n*3);
    return 0;
}
