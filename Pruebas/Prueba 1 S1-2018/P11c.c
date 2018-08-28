#include <stdio.h>
#include <stdlib.h>

// Prueba 1 Introduccion a ingenieria S1-2018
// Parte 1 Selección multiple 8-9-10.

// 8. El programa principal imprime:
int proceso1(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int proceso2(int x, int y)
{
	if (x % 2 == 0)
		return proceso1(X,Y);
	else
		return proceso1(Y,X);
}
/* Alternativas:  a. 23
				  b. 54
				  c. 77
				  d. Ninguna de las anteriores

				  Alternativa correcta : b */

// 9. El programa principal imprime:
int calculo(int T)
{
	if (T <= 100)
		return 500;
	else
	{
		if (T > 101 && T <= 200)
			return 800;
		else
		{
			if (T > 201 && T <= 300)
				return 1000;
			else
				return 1500;
		}
	}
}
/* Alternativas:  a. 500
				  b. 800
				  c. 133
				  d. Ninguna de las anteriores

				  Alternativa correcta : a */

// 10. El programa pincipal imprime: 
int retorna(int num)
{
	int aux = num % 1000;
	return aux;
}
/* Alternativas:  a. 971
				  b. 234
				  c. 78
				  d. Ninguna de las anteriores

				  Alternativa correcta : a */


// Programa principal //

int main()
{
	// Ejercicio 8 // 
	int R = proceso2(23,54);
	printf("%d\n",R);

	// Ejercicio 9 //
	int Valor = calculo(233)-calculo(100);
	printf("%d\n",Valor);

	// Ejercicio 10 //
	int A = retorna(1234);
	int B = retorna(678);
	int C = retorna(59);
	printf("%d",A+B+C);

	return 0;
}