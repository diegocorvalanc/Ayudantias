#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km;

    printf("Ingresar kilometros: ");
    scanf("%f",&km);
    printf("%f km = %f millas nauticas",km,km*1.852);
    return 0;
}
