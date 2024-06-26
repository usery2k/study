/*
 Cree un programa que cree un número aleatorio entero entre 0 y 100. Su
 programa le pedirá al usuario que adivine el número secreto (el número
 aleatorio). Respondiendo:
 a. “¡Ha acertado!”: Cuando el número ingresado por el usuario sea el
 mismo que el número secreto.
 b. “¡Fallo! El número secreto es menor.”: Cuando el número ingresado
 por el usuario sea mayor al número secreto.
c. “¡Fallo! El número secreto es mayor.”: Cuando el número ingresado
 por el usuario sea menor al número secreto.
*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main() {
    int inum;
    int xran;
    srand(time(NULL));
    xran = (rand()%101);    

    printf("adivina el numero secreto\n");
    scanf("%d", &inum);

    while (inum != xran)
    {
        if (inum>xran)
        {
            printf("te pasaste brou, tira otro num:\n");
            scanf("%d", &inum);
        } else if (inum<xran)
        {
            printf("muy bajo brou, tira otro num:\n");
            scanf("%d", &inum);
        }
        
    }
    printf("acertaste el numero :)\n");
    
    return 0;
 }
