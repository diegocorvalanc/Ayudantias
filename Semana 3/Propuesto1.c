#include <stdlib.h>
#include <stdio.h>

int suma(int a, int b, int c, int d, int e)
{
	int suma;
	if (a%2 != 0)
		suma = suma + a;
	if (b%2 != 0)
		suma = suma + b;
	if (c%2 != 0)
		suma = suma + c;
	if (d%2 != 0)
		suma = suma + d;
	if (e%2 != 0)
		suma = suma + e;
	
	return suma;
}

int main()
{
	int a,b,c,d,e,aux;
	printf("Ingrese un numero a: ");
	scanf("%i",&a);
	printf("Ingrese un numero b: ");
	scanf("%i",&b);
	printf("Ingrese un numero c: ");
	scanf("%i",&c);
	printf("Ingrese un numero d: ");
	scanf("%i",&d);
	printf("Ingrese un numero e: ");
	scanf("%i",&e);
	
	aux = suma(a,b,c,d,e);
	printf("La Suma de los numeros impares es: %i",aux);
	
	return 0;
}
