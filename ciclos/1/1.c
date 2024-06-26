/* 
Crear un programa que pida al usuario ingresar un numero entero positivo.
el programa debera pedir al usuario que vuelva 
a ingresar el numero, tantas veces como sea necesario,
si es que no se ingresa un numero positivo. 
*/

#include <stdio.h>
int main(){
   int num;
   printf("ingrese un numero entero positivo:\n");
   scanf("%d", &num);
    while (num <=0){
        printf("el numero ingresado no es valido, intente nuevamente:\n");
        scanf("%d", &num);
    }
    printf("felicidades");
   
}