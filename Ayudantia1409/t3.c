#include <stdio.h>
#include <stdlib.h>

/*	Taller 3 Pauta para ayudantia 
Se desea llevar el registro de los "N" productos de una ferreteria. Por cada producto se ingresa código, precio y cantidad (int).
Se pide:
	-	La cantidad de productos cuyo codigo comienza por el digito 7
	-	Promedio de los precios de los productos que tengan cantidad en el rango [300,399]
	-	Total de productos que su precio termina en 3 y poseen cantidad más de 700
	-	Total de dinero recaudado por los N productos
	-	El precio del producto que tenga la menor cantidad	*/

// Headers
int digito7(int codigo);

// Programa principal
int main()
{
	int n, codigo, precio, cantidad; // Variables enunciado
	int can1 = 0; // Variable Punto 1
	float can2 = 0 , pre2 = 0; // Variables Punto 2
	int can3 = 0; // Variable Punto 3
	int sumaprecio = 0; // Variable Punto 4
	int mc = 99999, pmc = 0; // Variable Punto 5
	printf("Bienvenido \nDigite la cantidad de productos que desea ingresar: ");
	scanf("%d",&n);
	while(n > 0) // <---------- Importante
	{
		printf("Ingrese el codigo del producto: ");
		scanf("%d",&codigo);
		can1 = can1 + digito7(codigo); // Punto 1
		printf("Ingrese el precio del producto: ");
		scanf("%d",&precio);
		printf("Ingrese la cantidad del producto: ");
		scanf("%d",&cantidad);
		if (cantidad >= 300 && cantidad <= 399) // Punto 2
		{
			can2++;
			pre2= pre2 + precio;
		}
		if (cantidad > 700 && precio%10 == 3) // Punto 3
			can3++;

		sumaprecio = sumaprecio + precio; // Punto 4

		if (mc > cantidad) // Punto 5
		{
			mc = cantidad;
			pmc = precio;
		}
		printf("--------------------------------------------------------------\n");
		n--; // Condicion while
	}
	printf("La cantidad de productos cuyo codigo comienza por el digito 7 son de %d productos\n",can1); // Punto 1
	if (can2 == 0) // Evitar division de un denominador igual a cero
		printf("El promedio del precio de los productos entre la cantidad [300,399] es: %d\n", 0); // Punto 2
	else // Procedimiento normal
		printf("El promedio del precio de los productos entre la cantidad [300,399] es: %f\n", pre2/can2); // Punto 2
	printf("Total de productos que su precio termina en 3 y poseen cantidad mas de 700: %d\n",can3); // Punto 3
	printf("Total de dinero recaudado por los N productos: %d\n",sumaprecio); // Punto 4
	printf("Precio de producto con la menor cantidad: %d",pmc); // Punto 5

	return 0;
}

// Funciones
int digito7(int codigo)
{
	int resto, contador;
	while(codigo > 0)
	{
		resto = codigo % 10;
		codigo = codigo / 10;
	}
	if (resto == 7)
		return 1;
	return 0;
}