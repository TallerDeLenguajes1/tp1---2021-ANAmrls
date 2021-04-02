#include <stdio.h>

int main () {
    int num = 27;
    int *p_num = &num;

    printf("Contenido del puntero: %p\n", p_num); //Apartado a
    printf("Direccion de memoria almacenada por el puntero: %p\n", &(*p_num)); //Apartado b
    printf("Direccion de memoria de la variable: %p\n", &num); //Apartado c
    printf("Direccion de memoria del puntero: %p\n", &p_num); //Apartado d
    printf("Extension de la memoria utilizada por num: %p\n", sizeof(num)); //Apartado e

    getchar(); 

    return 0;
}