#include <stdlib.h>
#include <stdio.h>

int extremo_izquierdo(int n)
{
	int ei;
    ei = n/1000; // E i = Extremo izquierdo
    return ei;
}

int main()
{    
    int n,aux;
    printf("Ingrese numero de 4 digitos: ");
    scanf("%i",&n);
    
    aux = extremo_izquierdo(n);
    printf("El digito del extremo izquierdo del numero %i es: %i",n,aux);

    return 0;
}
