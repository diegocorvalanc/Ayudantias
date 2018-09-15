#include <stdlib.h>
#include <stdio.h>
/* Imprimir la siguiente serie:
5 55 555 5555 55555... */

int main()
{
    /* Si se fijan bien, en el primer ejercicio es muy complicado encontrar una serie de un solo numero que viaje por
    negativos y positivos, por lo que abarcaremos el ejercicio utilizando dos numeros que se imprimen simultaneamente
    donde uno aumenta (+2) y el otro disminuye (-3) */ 
    int aux1 = 2 , aux2 = -3; // Primeros terminos
    int n;
    printf("Ingrese la cantidad de terminos de la serie que desea visualizar: ");
    scanf("%i",&n);
    while (n > 0 ) 
    {
        printf("%d %d ",aux1,aux2); // Le damos un orden, imprimimos primero el positivo, luego el negativo.
        aux1 = aux1 + 2; // Aumenta en (+2) el termino positivo
        aux2 = aux2 + (-3); // Aumenta en (-3) el termino negativo
        n--; // Se disminute n, que es la cantidad de terminos pedidos para no sobrepasar la cantidad de terminos pedidos
    }

    return 0;
}