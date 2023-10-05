#include <stdio.h>
int main(){
    float n1, n2, n3;

    printf("Ingrese nota 1: ");
    scanf("%f", &n1);
    if (n1 < 1 || n1 > 7) {
        printf("La nota ingresada no es valida.\n");
        return 1; 
    }

    printf("Ingrese nota 2: ");
    scanf("%f", &n2);
    if (n2 < 1 || n2 > 7) {
        printf("La nota ingresada no es valida\n");
        return 1; 
    }

    printf("Ingrese nota 3: ");
    scanf("%f", &n3);
    if (n3 < 1 || n3 > 7) {
        printf("La nota ingresada no es valida\n");
        return 1; 
    }

    float promedio = (n1 * 0.4 + n2 * 0.3 + n3 * 0.3);


    printf("El promedio ponderado de las notas es: %.2f\n", promedio);
        if (promedio < 3.95)
        {
            printf ("El estudiante a reprobado la asignatura");
        }
        else if (promedio >= 3.95 && promedio <= 4.94)
        {
            printf ("El estudiante va a examen");
        }
        else {
            printf ("El estudiante se exime la asignatura");
        }
    return 0;
}