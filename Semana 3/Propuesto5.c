#include <stdlib.h>
#include <stdio.h>

int convertir(int n)
{
	int pd = n/10000; // pd = primer digito
	
	if (pd%2 == 0)
		return n*2;
		
	else if (pd%3 == 0)
		return n*3;
		
	else
		return pd;
}

int main()
{
	int n,aux;
	printf("Ingrese un numero de 5 digitos: ");
	scanf("%i",&n);
	
	aux = convertir(n);
	
	printf("El numero original es: %i , El numero convertido es: %i",n,aux);
	
	return 0;
}
