#include <stdlib.h>
#include <stdio.h>/* 

Control 2 2018-1 
1.- Escribir la funcion SumaEspecial(num), que recibe un número entero y retorna la suma entre sus digitos pares. No conoce
la cantidad de digitos del numero */ 

int SumaEspecial(int num)
{
	int suma = 0,digito;
	while (num > 0)
	{
		digito = num % 10;
		if (digito % 2 == 0)
			suma = suma + digito;
		num = num / 10;
	}
	return suma;
}/*

2.- Escribir la función SumaSerie(N), que retorna la suma de los N primeros términos de la serie: */

int SumaSerie(int n)
{
	int p = -7 ,pr = 10 ,suma = 0,c = 1;
	while (c <= n)
	{
		if (c == 1)
			suma = suma + p;
		else if (c == 2)
			suma = suma + pr;
		else if (c > 2 && c % 2 != 0)
			suma = suma + (c*-1);
		else if (c > 2 && c & 2 == 0)
			suma = suma + c;
		c = c + 1;
	}
	return suma;
}
