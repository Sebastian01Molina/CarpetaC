#include <stdio.h>

int main() {
    float n1, n2, n3, n4;

    printf("Ingrese nota 1: ");
    scanf("%f", &n1);
    if (n1 < 1 || n1 > 7) {
        printf("La nota ingresada no es valida.\n");
        return 1; 
    }

    printf("Ingrese nota 2: ");
    scanf("%f", &n2);
    if (n2 < 1 || n2 > 7) {
        printf("La nota ingresada no es valida.\n");
        return 1; 
    }

    printf("Ingrese nota 3: ");
    scanf("%f", &n3);
    if (n3 < 1 || n3 > 7) {
        printf("La nota ingresada no es valida.\n");
        return 1;
    }

    printf("Ingrese nota 4: ");
    scanf("%f", &n4);
    if (n4 < 1 || n4 > 7) {
        printf("La nota ingresada no es valida.\n");
        return 1;
    }

    float promedio = (n1 + n2 + n3 + n4) / 4;
    printf("El promedio de las notas es: %.2f\n", promedio);
    return 0;
}
