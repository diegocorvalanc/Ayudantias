#include <stdio.h>
#include <stdlib.h>

// Prueba 1 Introduccion a ingenieria S1-2018
// Parte 1 Selección multiple 1-2-3.

int main()
{
	// Parte 1

	// 1. Indique qué Imprime:	
	int A = 345;
	int B = 783;
	int C = A + B * 2;
	printf("%d",C);

	/* Alternativas:  a. 1128
					  b. 1911
					  c. 2256
					  d. Ninguna de las anteriores

					  Alternativa correcta : b */

	// 2. Cual es el valor de R:
	int N = 2345;
	int M = 123;
	int R = N/M + N%M;
	printf("%d",R);
	/* Alternativas:  a. 19
					  b. 8
					  c. 27
					  d. Ninguna de las anteriores

					  Alternativa correcta : c */

	// 3. Al realizar la operación, se imprime:
	int Resultado = (23456/100)%100;
	printf("%d",Resultado);
	/* Alternativas:  a. 34
					  b. 23
					  c. 45
					  d. Ninguna de las anteriores

					  Alternativa correcta : a */

	return 0;
}