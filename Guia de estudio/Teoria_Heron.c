#include <stdio.h>
#include <math.h>
int main(){
      int a, b, c;
    printf("ingrese el primer lado: ");
    scanf("%d", &a);
    printf("ingrese el segundo lado: ");
    scanf("%d", &b);
    printf("ingrese el tercer lado: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a){
        int perimetro = a + b + c;
        float s = perimetro / 2.0;

        float area = sqrt(s * (s-a) * (s-b) * (s-c));
        printf("Perimetro: %d\n", perimetro);
        printf("Semiperimetro: %.2f\n", s);
        printf("Area: %.2f\n", area);
    }
    else{
        printf ("El triangulo ingresado no es valido\n");
    }
    return 0;
}