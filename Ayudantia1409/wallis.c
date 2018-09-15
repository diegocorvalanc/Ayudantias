#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 3 P1 2017
La Secuencia de wallis se expresa como:
	2/1 2/3 4/3 4/5 6/5	6/7	8/7	8/9 ...
Implementar la funcion (void) verWallis(n) con el proposito de imprimir los primeros n factores de la secuencia wallis. */

void verwallis(int n)
{
	int num = 2, den = 1, c = 0;
	while (c < n)
	{
		printf("%d/%d\t",num,den);
		if (num > den)
		{
			den = den + 2;
		}
		else
		{
			num = num + 2;
		}
		c++;
	}
}

// Comprobar

int main()
{
	int num;
	printf("Ingrese n terminos de la serie wallis: ");
	scanf("%d",&num);
	verwallis(num);
	
	return 0;
}