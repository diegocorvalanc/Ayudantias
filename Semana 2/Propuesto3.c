#include <stdlib.h>
#include <stdio.h>

int main()
{  
    int a,b,c;
    printf("Escribir un programa, que permita leer tres n�meros enteros que representan las longitudes de los lados de un tri�ngulo. Indique si es posible formar un tri�ngulo (a=1, b=2y c=500000)";
    printf("Ingresar valor de lado a: "); 
    scanf("%i",&a);
    printf("Ingresar valor de lado b: ");
    scanf("%i",&b);
    printf("Ingresar valor de lado c: ");
    scanf("%i",&c);
    if(c<(a+b) && a<(c+b) && b<(c+a)) // Comparacion de los lados
    { 
        printf("Es posible generar un triangulo");
    }
    else // Si no se cumple la condicion del if, ocurre lo siguiente... 
    {
        printf("No es posible generar un triangulo");
    }
    return 0;
}