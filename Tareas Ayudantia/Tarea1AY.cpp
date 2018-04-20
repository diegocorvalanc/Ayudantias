#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a,b,c,mayor,menor,suma; // Declaracion de variables
	
	printf("Ingrese un numero: ");
	scanf("%i",&a);
	printf("Ingrese un numero: ");
	scanf("%i",&b);
	printf("Ingrese un numero: ");
	scanf("%i",&c);
	
	suma = a + b + c; // Calculo de la suma de los tres numeros
	// Numeros mayores
	if (a<=b)
	{
		if (b<=c)
			mayor = c;
		else
			mayor = b;
	}
	else 
	{
		if (a<=c)
			mayor = c;
		else
			mayor = a;
	}
	// Numeros menores
	if (a>=b)
	{
		if (b>=c)
			menor = c;
		else
			menor = b;
	}
	else 
	{
		if (a>=c)
			menor = c;
		else
			menor = a;
	}
	// Igualdad
	if (a == b && a == c && b == c)
		printf("Los tres numeros son iguales\n");
	// Mayor par
	if (mayor%2 == 0)
		printf("El numero mayor es par\n"); 
	else
		printf("El numero mayor es impar\n");
	// Mensaje final
	
	printf("El numero mayor es %d, el menor es %d y la suma de los tres numeros es %d",mayor,menor,suma);
	
	return 0;
}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

