#include <stdlib.h>
#include <stdio.h>

int contar_divisores(int n)
{
    int aux = 1, contador = 0;
    while(aux <= n) // La variable aux ira aumentando hasta llegar a ser el mismo numero n
    {
        if(n % aux == 0)
        {
            contador++;
            aux++; // Si se cumple la condicion, aux aumenta
        }
        else
        {
            aux++; // Si no se cumple la condicion, aux aumenta 
        }
    }
    return contador;
}

int main()
{
    
    int n = 0, c = 0;
    printf("Ingresar un numero entero: ");
    scanf("%i", &n);

    c = contar_divisores(n);
    
    printf("El numero %d tiene %d divisores",n,c);

    return 0;
}