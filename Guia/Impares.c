#include <stdio.h>
int main (){
    int n = 1;
    int suma = 0;
    int aux = 0;
    while (aux < 100){
        suma += n;
        n += 2; 
        aux++;

    } 
    printf ("La suma de los primeros 100 numeros impares es %d\n",suma);
    return 0;
}
