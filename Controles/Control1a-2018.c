#include <stdlib.h>
#include <stdio.h>

//Escribir la funcion SumaEspecial(num), que recibe un numero entero de 6 digitos y retorna la suma entre los dos primeros digitos y el ultimo digito
//Ejemplo, si num = 123456 debe retornar (12+6)

int sumaespecial(int num)
{
	return (num/10000 + num % 10);
}

int main()
{
	int n;
	printf("Ingrese un numero de 6 digitos: \n");
	scanf("%d",&n);
	printf("Su numero original es: %i y su suma especial es %i ",n,sumaespecial(n));
	
	return 0;
}
