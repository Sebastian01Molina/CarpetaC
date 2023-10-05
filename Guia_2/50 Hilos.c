#include <stdio.h>
#include <windows.h>
//Se incluye windows.h para utilizar la libreria en sistemas windows
//Se define 50 hilos para la creacion
#define Hilos 50

//Se define las estructuras de los hilos
typedef struct {
    int thread_id;
} ThreadData;

//Definimos las variables 
DWORD WINAPI ThreadFunction(LPVOID lpParam) {
    ThreadData* data = (ThreadData*)lpParam;
    printf("Hilo %d ejecutado\n", data->thread_id);
    return 0;
}
//Se define el tiempo que se demora al crear un hilo
int main() {
    HANDLE threads[Hilos];
    LARGE_INTEGER Inicio, Termino, frecuencia;
    double Tiempo_Total = 0.0;

    QueryPerformanceFrequency(&frecuencia);
     // Empiezan desde el 1 al 50, en vez de 0
    for (int i = 1; i <= Hilos; i++) {
        QueryPerformanceCounter(&Inicio);

        ThreadData thread_data;
        thread_data.thread_id = i;

        threads[i-1] = CreateThread(NULL, 0, ThreadFunction, &thread_data, 0, NULL);
        if (threads[i-1] == NULL) {
            fprintf(stderr, "Error al crear el hilo %d\n", i);
            return 1;
        }
        //Espera al siguiente hilo hasta que llegue a los 50
        WaitForSingleObject(threads[i-1], INFINITE);

        QueryPerformanceCounter(&Termino);
        double elapsed_time = (double)(Termino.QuadPart - Inicio.QuadPart) / frecuencia.QuadPart;
        Tiempo_Total += elapsed_time;

        CloseHandle(threads[i-1]);
    }
// Muestran el tiempo promedio del hilo creado, y el tiempo total de todos los hilos
    double Tiempo_promedio = Tiempo_Total / Hilos;
    printf("Tiempo total de los hilos: %f segundos\n",Tiempo_Total);
    printf("Tiempo promedio para crear un hilo: %f segundos\n", Tiempo_promedio);

    return 0;
}
