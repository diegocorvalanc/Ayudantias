#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
int main()
{    
    int hora,min,seg;

    printf("Ingrese hora: ");
    scanf("%d",&hora);
    printf("Ingrese minutos: ");
    scanf("%d",&min);
    printf("Ingrese segundos: ");
    scanf("%d",&seg);
    printf("La hora es %d : %d : %d\n",hora,min,seg);
    seg++;
    if (seg>59)
    {
    	seg = 0;
    	min++;
    	
    	if (min>59)
    	{
    		min = 0;
    		hora++;
    		
    		if(hora>23)
    		{
    			hora = 0;
			}
		}
	}
	printf("La hora es %d : %d : %d",hora,min,seg);
    return 0;
}
