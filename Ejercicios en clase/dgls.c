#include <stdio.h>
#include <stdlib.h>

// Pasar esto a funcion 
// No copiar ?_?

int main()

{
	int billetes=0,veinte=0,diez=0,cinco=0,dos=0,uno=0,saldo=0,ini=0; // Inicializacion de variables
	saldo = 7000; // Saldo que probaremos
	ini = saldo; // Variable que guardara el saldo inicial
	if (saldo/20000 != 0) 
	{
		veinte = saldo / 20000; // Se guarda la cantidad entera de billetes de 20mil que soporta
		saldo = saldo - (veinte*20000); // Se elimina el saldo ya desglozado
	}
	if (saldo/10000 != 0)
	{
		diez = saldo / 10000; // Se guarda la cantidad entera de billetes de 10mil que soporta
		saldo = saldo -(diez*10000); // Se elimina el saldo ya desglozado
	}
	if (saldo/5000 != 0)
	{
		cinco = saldo / 5000; // Se guarda la cantidad entera de billetes de 5mil que soporta
		saldo = saldo - (cinco*5000); // // Se elimina el saldo ya desglozado
	}
	if (saldo/2000 != 0)
	{
		dos = saldo / 2000; // Se guarda la cantidad entera de billetes d 2mil que soporta
		saldo = saldo - (dos*2000); // Se elimina el saldo ya desglozado
	}
	if (saldo/1000 != 0)
	{
		uno =saldo / 1000;// Se guarda la cantidad entera de billetes de mil que soporta
		saldo = saldo - (uno*1000);// Se elimina el saldo ya desglozado
	} 
	
	// Muestra de resultados
	printf("Saldo inicial: $%i\n\nBilletes de:\nVeinte: %i\nDiez: %i\nCinco: %i\nDos: %i\nUno: %i\nSaldo Restante: $%i\n",ini,veinte,diez,cinco,dos,uno,saldo);
	

	return 0;
}
