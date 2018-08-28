#include <stdio.h>
#include <stdlib.h>

// Prueba 1 Introduccion a ingenieria S1-2018
// Parte 1 Selección multiple 4-5-6-7.

// 4. Al invocar la función con: incognita(2345), retorna el valor:
int incognita(int valor)
{
	int aux1 = valor / 1000;
	int aux2 = (valor%1000)/10;
	return(valor%10)*1000+aux2*10+aux1;
}
/* Alternativas:  a. 5342
				  b. 3425
				  c. 5432
				  d. Ninguna de las anteriores

				  Alternativa correcta : a */

// 5. Al llamar a la función "proceso" con los valores: 3, -7 y 5 respectivamente, retorna?
int proceso(int a, int b, int c)
{
	int aux;
	if(a<b)
		aux = a;
	else
		aux = b;
	if (c<aux)
		aux = c;
	return aux;
}
/* Alternativas:  a. 3
				  b. 5
				  c. -7
				  d. Ninguna de las anteriores

				  Alternativa correcta : c */

// 6. Al ser llamada la función expresion(x,y), con los valores x = 7.0 e y = 2 retorna el valor:
float expresion(float x,int y)
{
	return x / y + 100;
}
/* Alternativas:  a. 3.5
				  b. 3
				  c. 103.5
				  d. Ninguna de las anteriores

				  Alternativa correcta : c */

// 7. Al invocar la función Revisa(37,34,79) retorna el valor:
int Revisa(int A,int B,int C)
{
	if (A % 2 == 0 && B % 2 == 1)
		return A + B;
	else
		if (C % 2 == 1 && B % 2 == 0)
			return A;
		else 
			return B;
}
/* Alternativas:  a. 37
				  b. 34
				  c. 79
				  d. Ninguna de las anteriores

				  Alternativa correcta : a */

// Lo siguiente es para corroborar el resultado, no es parte de la prueba //

int main()
{
	int valor = 2345;
	int a = 3, b = -7, c = 5;
	float x = 7.0;
	int y = 2;
	int A = 37, B = 34, C = 79;

	printf("%d\n",incognita(valor));
	printf("%d\n",proceso(a,b,c));
	printf("%f\n",expresion(x,y));
	printf("%d",Revisa(A,B,C));


	return 0;
}