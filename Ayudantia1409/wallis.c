#include <stdio.h>
#include <stdlib.h>

void verwallis(int n)
{
	int num = 2, den = 1, c = 0;
	while (c < n)
	{
		printf("%d/%d\t",num,den);
		if (num > den)
		{
			den = den + 2;
		}
		else
		{
			num = num + 2;
		}
		c++;
	}
}

// Comprobar

int main()
{
	int num;
	printf("Ingrese n terminos de la serie wallis: ");
	scanf("%d",&num);
	verwallis(num);
	
	return 0;
}