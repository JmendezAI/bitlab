#include <stdio.h>
int main () {
       
    int opcion;

    printf("Bienvenido a Bitlab \n");
        do {
                printf("\n n=== BitLab ===n \n");
                printf("1. Decimal a Binario \n");
                printf("2. Decimal a Hexadecimal \n");
                printf("3. Binario a Decimal \n");
                printf("4. Operaciones bit a bit \n");
                printf("0. Salir \n");

    printf("Escoge una opcion: ");
    scanf ("%d", &opcion);

        




  switch (opcion) {

        case 0: 
        printf("Saliendo de Bitlab. Hasta luego. \n");
        break;

        case 1:
        printf("Opcion 1: Decimal a Binario - proximamente \n");
        break;

        case 2:
        printf("Opcion 2: Decimal a Hexadecimal - proximamente \n");
        break;
        

        case 3:
        printf("Opcion 3: Binario a Decimal - proximamente \n");
        break;
        

        case 4:
        printf("Opcion 4: Operaciones Bit a Bit - proximamente \n");
        break; 
  

        default:
        printf("Opcion invalida. Verifique el numero que ingreso.");
        break;
  }

} while (opcion != 0);






return 0;
}