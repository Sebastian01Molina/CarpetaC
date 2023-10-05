#include <stdio.h>
// Definimos las variables x, y para la creacion del vector, en este caso seria 5 elementos en el vector, por lo que los valores x, y
//serian 1x5.
void Cambio(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Permite ordenar los elementos del menor al mayor, de acuerdo al algoritmo de seleccion ordenada
void Seleccion(int array[], int n) {
    int i, j, minIndex;
    
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        
        Cambio(&array[i], &array[minIndex]);
    }
}
// Se igresa los valores al vector 
int main() {
    int array[5]; 
    int i;
    
    printf("Ingrese 5 numeros enteros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }
    
    Seleccion(array, 5);
// muestra el orden 
    printf("Seleccion Ordenada:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
