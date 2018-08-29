#include <stdlib.h>
#include <stdio.h>

int primer_digito(int n)
{
    int aux; // Inicializamos una variable que guardara digito a digito
    while (n > 0)
    {
    	aux = n % 10; // Guardamos el primero digito de derecha a izquierda
    	n = n/ 10; // Quitamos el primer digito de derecha a izquierda, pero no se pierde el guardado en aux
    }
    return aux; // Retornamos el ultimo digito guardado antes de que n se haga 0

}

int main()
{
	int valor;
    printf("Ingrese un numero de mas de 2 digitos: ");
    scanf("%i",&valor);  
    printf("El primer digito de %d es: %d",valor,primer_digito(valor));

    return 0;
}