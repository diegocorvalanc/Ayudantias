#include <stdlib.h>
#include <stdio.h>

int suma_impares(int n)
{
    int suma = 0, aux; // Se inicializa la variable suma, la cual sumara los impares, Aux servira para trabajar digito a digito
    while(n>0)
    {
        aux = n % 10; // Se saca el primer digito de la derecha y se almacena
        if(aux % 2 != 0) // Se comprueba si ese digito es impar
            suma = suma + aux; // Si lo es, se suma 
        n = n/10; // Se decrementa el numero en 1 digito de derecha a izquierda

    }
    return suma;

}

int main()
{
    int valor;
    printf("Ingrese un numero de mas de 2 digitos: ");
    scanf("%i",&valor); 
    printf("La suma de los digitos impares de %d es de %d",valor,suma_impares(valor));
    
    return 0;
}