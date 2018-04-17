#include <stdlib.h>
#include <stdio.h>

int main()
{    
    int n1,n2,n3, mayor;

    printf("Ingrese un numero: ");
    scanf("%i",&n1);
    printf("Ingrese un numero: ");
    scanf("%i",&n2);
    printf("Ingrese un numero: ");
    scanf("%i",&n3);
    if(n1<=n2)
	{
        if(n2<=n3)
		{
            mayor = n3;
        }
        else
		{
            mayor = n2;
        }
    }
    else
	{
        if(n1<=n3)
		{
            mayor = n3;
        }
        else
		{
            mayor = n1;
        }
    }
    printf("El numero mas grande es %i",mayor);
    return 0;
}
