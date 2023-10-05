#include <stdio.h>
#include <string.h>

// Se crea el objeto producto
struct Producto {
    int codigo;
    char descripcion[100];
    char peso[50];
    float precio;
};
// Definimos los parametros de los productos
int main() {
    struct Producto producto1;
    struct Producto producto2;
    
    producto1.codigo = 101;
    strcpy(producto1.descripcion, "Bebida");
    strcpy(producto1.peso,"3L");
    producto1.precio = 2000;
    
    producto2.codigo = 102;
    strcpy(producto2.descripcion, "Papas Fritas");
    strcpy(producto2.peso,"250gr");
    producto2.precio = 1500;

    struct Producto Precio_Mayor;
// Buscamos entre los productos cual es el precio mayor    
    if (producto1.precio > producto2.precio) {
        Precio_Mayor = producto1;
    } else {
        Precio_Mayor = producto2;
    }
    
    printf("El producto con mayor precio es: %s %s\n", Precio_Mayor.descripcion,Precio_Mayor.peso);
    
    return 0;
}
