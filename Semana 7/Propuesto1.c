#include <stdio.h>
#include <stdlib.h>

void hora(int segundos)
{
	int hora, minutos; // Inicializamos la variable que guardara hora y minutos
	while (segundos > 0) // Mientras la cantidad de segundos sea mayor a 0, el bucle continuará
	{
		if (segundos >= 60)
		{
			minutos = segundos / 60; // Conversion de segundos a minutos
			if (minutos >= 60)
			{
				hora = minutos / 60; // Conversion de minutos a horas
				segundos = segundos - (minutos*60); // Resta de la cantidad de segundos utilizados
				minutos = minutos - (hora*60); // Resta de la cantidad de minutos utilizados
			}
		}
		else // Si la cantidad de segundos es < a 60, simplemente imprimirá los valores 
		{
			printf("// hora:minutos:segundos // %i : %i : %i // ",hora,minutos,segundos);
			segundos = 0; // Para finalizar el programa
		}
	}
}

int main()
{
	hora(3600); // 3600 s equivalen a 1 hora exacta, pueden variar el numero

	return 0;
}
