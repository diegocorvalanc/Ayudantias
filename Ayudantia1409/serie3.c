#include <stdlib.h>
#include <stdio.h>

/* Imprimir la siguiente serie: 
	2	-3	4	-6	6	-9	8	-12 ... */

int main(){
	int positivo = 2, negativo = -3, contador = 1, n;
	printf("Ingrese la cantidad de numeros de la serie que desea visualizar: ");
	scanf("%d",&n);
	while(c <= n)
	{
		if (c % 2 != 0)
		{
			printf("%d ",positivo);
			positivo = positivo + 2;
		}
		else
		{
			printf("%d ",negativo);
			negativo = negativo - 3;
		}
		c++;
	}
	return 0;
}	