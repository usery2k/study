/*
 Escriba un código que reciba un número entero n y muestre por consola
 una pirámide utilizando asteriscos:
 Entrada: n = 4
 Salida:
 *
 **
 ***
 ****
 ***
 **
 *
*/

#include <stdio.h>

int main(){
    int inum;
    printf("ingrese un numero: ");
    scanf("%d", &inum);

        for (int i = 1; i <= inum; i++){
             for (int j = 1; j <= i; j++){
                 printf("*");
             }
             printf("\n");
        }
         for (int i =inum - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
         }

    return 0;
}
