#include <stdio.h>
#include <stdlib.h>

int cuenta(int saldo,int transaccion, int monto)
{
    if (transaccion == 1)
       saldo = saldo + monto;
    else if (transaccion == 2)
         saldo = saldo - monto;
    else
        printf("Transaccion no valida");
    return saldo;
}

int main()
{
    int opc = 1, monto = 0, saldo = 0;
    printf("Ingrese un saldo inicial: ");
    scanf("%i",&saldo);
    while (opc > 0 && opc<3){
          printf("Seleccione un tipo de transaccion");
          printf("1- Deposito");
          printf("2- Giro");
          printf("3- Salir");
          scanf("%i",&opc);
          if (opc == 1){
                  printf("Ingrese monto a depositar: ");
                  scanf("%i",&monto);
                  saldo = cuenta(saldo,opc,monto);}
          else if (opc == 2){
               printf("Ingrese monto a depositar: ");
               scanf("%i",&monto);
               saldo = cuenta(saldo,opc,monto);}
          else if (opc == 3){
               printf("Usted está saliendo");
               printf("Muchas gracias por utilizar cajero utem");}
          else{
               printf("Ingrese una opcion valida");
               opc = 1;}
               } 
          printf("Su nuevo saldo es de: $%i",saldo);
    system("pause");
    return 0;
} 
