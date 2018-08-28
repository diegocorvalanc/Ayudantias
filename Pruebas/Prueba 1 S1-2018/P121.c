#include <stdio.h>
#include <stdlib.h>

/*Prueba 1 Introduccion a ingenieria S1-2018
  Parte 2-1:
  Escriba una función en C que permita calcular el valor de una factura de ENEL S.A. si el tarifado
  se define de la siguiente manera:
  	-	Consumo menor de 90KW tienen un costo de $100 por KW
  	-	Consumo sobre o igual a 90 KW y menor a 181 KW tienen un costo de $500 por KW
  	-	Consumo a partir de los 181 KW tienen un costo de $880 por KW
  La función recibe por parametro los datos de lectura del medidor del mes actual y del mes anterior en KW.
  La función debe retornar el valor de la factura.

  Ejemplo: 
  	MesActual = 198 KW			MesAnterior = 100 KW			Consumo = 98 KW entonces el costo = 98*500 */

int Consumo(int MesActual, int MesAnterior)
{
	int Consumo = MesActual - MesAnterior;
	if (Consumo < 90)
		return Consumo*100;
	else if (Consumo >= 90 && Consumo < 181)
		return Consumo*500;
	else
		return Consumo*880;
}

// Lo siguiente es para corroborar el resultado, no es parte de la prueba // 

int main()
{
	int MesActual = 0, MesAnterior = 0, ConsumoTotal = 0;
	printf("Ingrese el consumo de KW de este mes: ");
	scanf("%d", &MesActual);
	printf("Ingrese el consumo de KW del mes anterior: ");
	scanf("%d", &MesAnterior);

	ConsumoTotal = Consumo(MesActual,MesAnterior);

	printf("\nSu consumo es de $%d",ConsumoTotal);

	return 0;
}