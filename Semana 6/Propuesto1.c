#include <stdlib.h>
#include <stdio.h>

void Fibonacci(int n)
{
    int res, aux = 2, previo= 1;
    if(n > 0)
    {
        printf("1 ");
    }
    if(n > 1)
    {
        printf("1 ");
    }
    if(n > 2)
    {
        printf("2 ");
    }
    while(n > 3)
    {
        res = aux + previo; // 2 + 1
        printf("%d ",res); // Se imprime 3
        previo = aux; // previo (1) = aux (2) // Intercambio de valores
        aux = res; // aux(2) = res (3) // Intercambio de valores
        n--; // Se decrementa la cantidad de terminos
        /* OJO, TODOS LOS COMENTARIOS SON PARA LA SIGUIENTE SUCESION DE N > 3, LUEGO DE ESO, LOS VALORES CAMBIAN, PERO 
        SIEMPRE SE CUMPLE QUE EL SIGUIENTE VALOR ES LA SUMA DEL RESTO (res) + EL NUMERO PREVIO (previo) */
    }
}

int main()
{    
    int n;
    printf("Ingresar cantidad de terminos de la serie que desea visualizar: ");
    scanf("%d",&n);
    Fibonacci(n); // No se utiliza printf, ya que al ser una funcion void, esta los trae incorporados

    return 0;
}