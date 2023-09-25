#include <stdio.h>
#include <string.h>

void cadenaInvertida(char str[]){
    int longitud = strlen(str);
    for (int i = 0; i < longitud / 2; i++){
        char temp = str[i];
        str [i] = str[longitud - i - 1];
        str [longitud - i - 1] = temp;
    }
    
}

int main(){
    char palabra[] = "Hola";
    printf ("Cadena original: %s\n", palabra);
    cadenaInvertida(palabra);
    printf("Cadena Invertida: %s\n", palabra);
    return 0;
}