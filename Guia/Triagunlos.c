#include <stdio.h>
int main(){
    int a, b, c;
    printf("ingrese el primer lado: ");
    scanf("%d", &a);
    printf("ingrese el segundo lado: ");
    scanf("%d", &b);
    printf("ingrese el tercer lado: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c){
            printf("Es un triangulo equilatero\n");
        }
        else if (a == b || a == c || b == c){
            printf("Es un triangulo isosceles\n");
        }
        else{
            printf("Es un triangulo escaleno\n");
        }
    }  
    else{
        printf ("El triangulo ingresado no es valido\n");
    }
    return 0;
}