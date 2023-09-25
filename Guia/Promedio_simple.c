#include <stdio.h>
int main(){
    float n1, n2, n3, n4;
    printf("Ingrese nota 1: ");
    scanf("%f", &n1);

    printf("Ingrese nota 2: ");
    scanf("%f", &n2);

    printf("Ingrese nota 3: ");
    scanf("%f", &n3);

     printf("Ingrese nota 4: ");
    scanf("%f", &n4);

    float promedio = (n1 + n2 + n3 + n4)/4;
    printf("El promedio ponderado de las notas es: %.2f\n", promedio);
    return 0;
}