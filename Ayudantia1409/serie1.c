
#include <stdlib.h>
#include <stdio.h>

/* Inprimir la siguiente serie: 
1 12 123 1234 12345 123456 .... */

int main()
{    
    int n, aux = 1, termino = 1;
    printf("Ingresar cantidad de terminos que desea visualizar: ");
    scanf("%d",&n);
    while(n > 0)
    {
        printf(" %d ",termino); // Se muestra el termino de la serie 
        aux++; // Se aumenta auxiliar, el cual ira tomando los valores de 2 3 4 5 6 7 etc
        termino = termino*10 + aux; // Se suma auxiliar para ir dando forma a la serie
        n--; // Se disminute n, que es la cantidad de terminos pedidos para no sobrepasar la cantidad de terminos pedidos
    }

    return 0;
}