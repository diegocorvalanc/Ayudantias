#include <stdlib.h>
#include <stdio.h>

// Imprima el numero mayor y el menor de tres numeros usando funciones [Clase 18-04]
int mayor (int a, int b, int c) // Funcion que calcula el numero mayor
{
	if (a<=b)
	{
		if (b<=c)
			return c;
		else
			return b;
	}
	else
	{
		if (a<=c)
			return c;
		else
			return a;
	}
}

int menor (int a, int b, int c) // Funcion que calcula el numero menor
{
	if (a>=b)
	{
		if (b>=c)
			return c;
		else
			return b;
	}
	else
	{
		if (a>=c)
			return c;
		else
			return a;
	}
}

int main()
{
	int a,b,c,may,men; // Declaracion de variables
	// Toma de datos
	printf("Ingrese un numero: ");
	scanf("%i",&a);
	printf("Ingrese un numero: ");
	scanf("%i",&b);
	printf("Ingrese un numero: ");
	scanf("%i",&c);
	// Declaracion de funciones
	may = mayor(a,b,c); // Variable que guarda el valor de retorno de la funcion mayor
	men = menor(a,b,c); // Variable que guarda el valor de retorno de la funcion menor
	// Mensaje final
	printf("El numero mayor es %i y el numero menor es %i\n",may,men);
	
	return 0;
}
