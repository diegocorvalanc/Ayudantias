#include <stdlib.h>
#include <stdio.h>

// Los numeros primos son numeros que SOLO son divisibles por uno y por si mismo
int primo(int n)
{
    int aux = 1, cont = 0;
    while(aux <= n)
    {
        if(n % aux == 0)
        {
            cont++;
        }
        aux++;
    }
    if(cont > 2) // Si el contador es mayor a 2, es porque el algoritmo detecto otro divisor mas a parte de 1 y n
    {
        return 0;
    }
    else
    {
        return 1; // Si solo es divisible por si mismo, se envia 1 ya que solo necesitamos saber la cantidad de numeros
    }
}

int main()
{
    int a , b , aux , contador = 0;
    printf("Ingresar intervalo x: ");
    scanf("%d",&a);
    printf("Ingresar intervalo y: ");
    scanf("%d",&b);    
    aux = a; // Se guarda el intervalor x en aux para hacer comparaciones
    while(aux < b)
    {
        contador = contador + primo(aux);
        aux++; // Se aumenta aux para cumplir la condicion del while
    }
    printf("En el intervalo [%d,%d] hay %d numeros primos",a,b,contador);

    return 0;
}