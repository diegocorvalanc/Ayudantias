#include <stdio.h>
#include <stdlib.h>
//Ejercicio 1 

// Funciones 
int cuenta(saldo,transaccion,monto)
{
	if (transaccion == 1)
		saldo = saldo + monto;
	if (transaccion == 2)
		saldo = saldo - monto;
	return saldo;
}

// Principal
int main()
{
	int saldo = 0, monto = 0, transaccion = 1;
	printf("Ingrese el saldo inicial de la cuenta: ");
	scanf("%d", &saldo);
	while (transaccion != 3)
	{
		printf("Bienvenido a cajero automatico Utem \n");
		printf("1. Deposito \n");
		printf("2. Giro \n");
		printf("3. Salir \n");
		printf("Seleccione el tipo de transaccion: ");
		scanf("%i",&transaccion);
		if (transaccion == 1)
		{
			printf("Ingrese el monto que desea depositar: ");
			scanf("%i", &monto);
			saldo = cuenta(saldo,transaccion,monto);
			printf("El nuevo saldo es de $%i \n",saldo);
		}
		if (transaccion == 2)
		{
			printf ("Ingrese el saldo que desea girar: ");
			scanf("%i", &monto);
			saldo = cuenta(saldo,transaccion,monto);
			printf ("Giro realizado con exito \n");
			printf ("Su saldo es de $%i \n",saldo);
		}
		if (transaccion == 3)
			printf("Gracias por utilizar cajero automatico utem \n");
	}
}


