#include <stdio.h>
#include <stdlib.h>

int suma(int n)
{
	int sum = 24 , c = 3, p = 13, ip = 17; // sum = (-6 + 13 + 17) 
	while (c <= n)	
	{
		if (c % 2 == 0)
		{
			sum = sum + (p*c);
		}
		else if (c % 2 != 0)
		{
			sum = sum + (ip*(c-3));
		}
		c = c + 1;
	}
	return sum;
}

int main()
{
	int c = 1 , p = 13, ip = 17, n, aux1, aux2;
	printf("Ingrese los n digitos de la serie que desea visualizar: ");
	scanf("%d", &n);
	while(c <= n)
	{
		if (c == 1)
		{
			printf("-6 "); // Variable independiente 1 
		}
		else if (c == 2)
		{
			printf("13 "); // Variable independiente en indice par (p)
		}
		else if (c == 3)
		{
			printf("17 "); // Variable independiente indice impar (ip)
			
		}
		else if (c % 2 == 0)
		{
			aux1 = p*c; // 13 * c
			printf("%d ",aux1);
			
		}
		else if (c % 2 != 0)
		{
			aux2= ip*(c-3); // 17 * (c - 3) , donde (c - 3) es igual a todos los multiplos de 2 [5,infinito +)
			printf("%d ",aux2);
		}
		c = c + 1; 
	}
	printf("\nLa suma de los %d digitos de la serie es %d",n,suma(n));

	return 0;
}