/*
Usuario ingrese las dimensiones de un arreglo bidimensional (matriz),
el programa llene la matriz con números aleatorios entre 0 y 100.
 Luego, calcule la matriz transpuesta. El programa debe imprimir la matriz original y la matriz transpuesta.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    // Tamaño de la matriz
     int fila = 0, columna = 0;
    printf("Ingrese las dimensiones para su matriz. \n");
    printf("Ingrese el numero de fila: \n");
    scanf("%d", &fila);
    printf("Ingrese la dimension de su columna: \n");
    scanf("%d", &columna);

    // Matriz llena numeros aletorios
    int Matriz[fila][columna];
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            // A cada elemento de la matriz se asigna el cero
            Matriz[i][j] = rand() %101 ; // Si le sumamos 1 iniciaria desde 1 y no es lo que se requiere
            // Aprovechar el bucle para la impresión
            printf("%4d |", Matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    // Matriz transpuesta - definida
    int MatrizTranspuesta[columna][fila]; 
    for (int i = 0; i < columna; i++)
    {
        for (int j = 0; j < fila; j++)
        {
            MatrizTranspuesta[i][j] = Matriz[j][i];
               // Bucle impresión
            printf("%4d |", MatrizTranspuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
