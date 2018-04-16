#include <stdlib.h>
#include <stdio.h>

int main()
{  
    int a,b,c;
    printf("Ingrese valor de Lado a: "); 
    scanf("%d",&a);
    printf("Ingrese valor de Lado b: ");
    scanf("%d",&b);
    printf("Ingrese valor de Lado c: ");
    scanf("%d",&c);
    if(c<(a+b) && a<(c+b) && b<(c+a)) // Comparacion de los lados
    { 
        printf("Es posible generar un triangulo con estas medidas");
    }
    else // Si no se cumple la condicion del if, ocurre lo siguiente... 
    {
        printf("Medidas invalidas");
    }
    return 0;
}