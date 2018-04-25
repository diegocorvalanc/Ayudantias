#include <stdlib.h>
#include <stdio.h>
/* Escribir la función Proceso(A,B), que recibe dos números enteros distintos entre sí y retorna:
- El producto de ambos números si ambos son impares
- La resta de ambos números si ambos son pares
- El valor de B en otro caso */ 

int Proceso(int A,int B)
{
	if (A%2 != 0 && B%2 !=0)
		return (A*B);
	else if (A%2 == 0 && B%2 == 0)
		return (A-B);
	else
		return B;
}

int main()
{
	int a,b;
	printf("Ingrese el valor de A: ");
	scanf("%i",&a);
	printf("Ingrese el valor de B: ");
	scanf("%i",&b);
	if (a == b)
	{
		printf("Ingrese dos valores distintos!\n");
		main();
	}
	else
		printf("El valor calculado de los numeros despues de pasar por la funcion Proceso es %i",Proceso(a,b));
		
	return 0;
}
