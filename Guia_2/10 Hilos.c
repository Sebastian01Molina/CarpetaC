#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//Como el ejercicio 3 de los 50 hilos, sigue la misma estructura
#define Hilos 10

//Se agrega la variable random_number para que sea aleatorio los numeros y los hilos
typedef struct {
    int thread_id;
    int random_number;
} ThreadData;

////Definimos las variables de los hilos 
DWORD WINAPI ThreadFunction(LPVOID lpParam) {
    ThreadData* data = (ThreadData*)lpParam;

    srand((unsigned)(time(NULL) + GetCurrentThreadId()));

    data->random_number = 1 + (rand() % 20);
    printf("Hilo %d genero el numero %d\n", data->thread_id, data->random_number);
    return 0;
}
//Se define el proceso como el ejercicio 3, pero agregando la suma de los numeros de los hilos
int main() {
    srand((unsigned)time(NULL));

    HANDLE threads[Hilos];
    ThreadData thread_data[Hilos];

//Se empieza desde 1 al 10
    for (int i = 1; i <= Hilos; i++) {
        thread_data[i-1].thread_id = i;
        threads[i-1] = CreateThread(NULL, 0, ThreadFunction, &thread_data[i-1], 0, NULL);
        if (threads[i-1] == NULL) {
            fprintf(stderr, "Error al crear el hilo %d\n", i);
            return 1;
        }
    }

    WaitForMultipleObjects(Hilos, threads, TRUE, INFINITE);

    int suma = 0;
    for (int i = 0; i < Hilos; i++) {
        suma += thread_data[i].random_number;
    }

    printf("La suma de los hilos es de: %d\n", suma);

    for (int i = 0; i < Hilos; i++) {
        CloseHandle(threads[i]);
    }

    return 0;
}
