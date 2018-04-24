#include <stdlib.h>
#include <stdio.h>

int divisibles(int a,int b,int c)
{
	int contador=0;
	if (a%3==0 && a%5==0)
	{
		contador++;
	}
	if (b%3 == 0 && b%5 == 0)
	{
		contador++;
	}
	if (c%3 == 0 && c%5 == 0)
	{
		contador++;
	}
	
	return contador;
}

int main()
{
	int contador_general=3;
	int a,b,c,aux;
	printf("Ingrese un numero a: ");
	scanf("%i",&a);
	printf("Ingrese un numero b: ");
	scanf("%i",&b);
	printf("Ingrese un numero c: ");
	scanf("%i",&c);
	
	aux = divisibles(a,b,c);
	
	if (aux == contador_general)
	{
		printf("Todos los numeros son divisibles por 3 y 5");
	}
	else
	{
		printf("No todos los numeros son divisibles por 3 y 5");
	}
	
	return 0;
}
