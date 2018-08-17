#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Nota: El programa no funcionara si lo ejecutan, esto es solo para que vean la sintaxis en C.

// Valor de R :

int n = 404;
int m = 602;
int r = (m%n)&10;
printf("%i",r); // Imprime 8 


// Que imprime: 

int x = 23;
int y = 56;
int z = 81;
if (x > y && z < y)
	printf("%i",y);
else if (y%x < z)
	printf("%i",x);
else
	printf("%i",z); // Imprime 23


// Valor de C:

int a = 7+3*2;
int b = push(2,3)+1; // Esto solo puede ser utilizado si esta incluida la libreria math.h
int c = a/b;
printf("%i",c); // Imprime 1


// Valor de S:

int j = 1; // 1 2 3 4 5 
int s = 3; // 3 4 8 17 33
while (j<5)
{
	s = s + push(j,2);
	j = j + 1;
}
printf("%i",s); // Imprime 33


// Imprime? :
int j = 1; // 1 2
int k = 0; // 2 3 3 
while (j < 3)
{
	k = j + 1;
	while (k<4)
	{
		printf("%i",k);
		k = k + 1 ;
	}
	j = j + 1;
}
printf("Fin"); // Imprime 2 3 3 Fin