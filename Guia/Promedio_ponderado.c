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
    printf("El promedio ponderado de las notas es: %.2f\n", promedio);

    if (promedio > 1){
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
    }
    else{
        printf ("El promedio no es valido");
    }
    return 0;
}