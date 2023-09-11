#include <stdio.h>
int main(){
    float n1, n2, n3;
    printf("Ingrese nota 1: ");
    scanf("%f", &n1);

    printf("Ingrese nota 2: ");
    scanf("%f", &n2);

    printf("Ingrese nota 3: ");
    scanf("%f", &n3);

    float promedio = (n1 * 0.4 + n2 * 0.3 + n3 * 0.3);
    printf("El promedio ponderado de las notas es: %.3f\n", promedio);
    return 0;
}