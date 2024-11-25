#include <stdio.h>

#define SIZE 6

int main() {
    int matriz[SIZE][SIZE];
    int contador = 0;

   
    printf("Preencha a matriz 6x6:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

   
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

 
    printf("\nA matriz possui %d valores maiores que 10.\n", contador);

    return 0;
}