#include <stdio.h>
#include <stdlib.h>

/*Prueba 1 Introduccion a ingenieria S1-2018
  Parte 2-2:
  Escribir un programa principal que lea dos números enteros y muestre:
  	-	La suma, si ambos números son pares
  	-	La multiplicacion, si ambos números son impares
  	-	El mayor, en otro caso */

int main()
{
	int a = 0, b = 0;
	printf("Ingrese un numero: ");
	scanf("%i",&a);
	printf("\nIngrese un numero: ");
	scanf("%i",&b);
	
	if (a % 2 == 0 && b % 2 == 0)
		printf("%i",a+b); // suma
	else if (a % 2 != 0 && b % 2 != 0)
		printf("%i",a*b); // multiplicacion
	else
	{
		if (a>b) // mayor , menor
			printf("%i",a);
		else
			printf("%i",b);
	}
	
	return 0; 
}