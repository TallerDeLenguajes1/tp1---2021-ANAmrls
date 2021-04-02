#include <stdio.h>

//Declaración de funciones

int calcularCuadrado(int num);
void calcularCuadrado2(int num, int *aux);
void mostrar(int *num);
void invertir(int *a, int *b);
void orden(int *c, int *d);

int main () {
    int num1, num2, resultado, num3, a, b, c, d;

    puts("\n ------------------ Apartado a ------------------\n");

    puts("Ingrese un numero para calcular su cuadrado:");
    scanf("%d", &num1);
    printf("%d elevado al cuadrado = %d\n", num1, calcularCuadrado(num1));

    puts("\n ------------------ Apartado b ------------------\n");

    puts("Ingrese un numero para calcular su cuadrado:");
    scanf("%d", &num2);
    calcularCuadrado2(num2, &resultado);
    printf("%d elevado al cuadrado = %d\n", num2, resultado);

    puts("\n ------------------ Apartado c ------------------\n");

    puts("Ingrese un numero entero:");
    scanf("%d", &num3);
    mostrar(&num3);

    puts("\n ------------------ Apartado d ------------------\n");

    puts("Ingrese dos numeros enteros");
    scanf("%d%d", &a, &b);
    puts("\nVariable a:");
    mostrar(&a);
    puts("\nVariable b:");
    mostrar(&b);
    invertir(&a, &b);
    puts("\nVariable a:");
    mostrar(&a);
    puts("\nVariable b:");
    mostrar(&b);
    
    puts("\n ------------------ Apartado e ------------------\n");

    puts("Ingrese dos numeros enteros diferentes");
    scanf("%d%d", &c, &d);
    puts("\nVariable c:");
    mostrar(&c);
    puts("\nVariable d:");
    mostrar(&d);
    orden(&c, &d);
    puts("\nEl menor es:");
    mostrar(&c);
    puts("\nEl mayor es:");
    mostrar(&d);

    return 0;
}

//Función para calcular el cuadrado de un número

int calcularCuadrado(int num) {
    return num*num;
}

//Función de tipo void para calcular el cuadrado de un número

void calcularCuadrado2(int num, int *aux) {
    *aux = num * num;
}

//Función para mostrar por pantalla la dirección y el contenido de una variable

void mostrar(int *num) {
    printf("Direccion de la variable: %p\n", num);
    printf("Contenido de la variable: %d\n", *num);
}

//Función para invertir los valores entre 2 variables

void invertir(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

//Función para ordenar 2 parámetros

void orden(int *c, int *d) {
    int aux;

    if (*d < *c)
    {
        aux = *c;
        *c = *d;
        *d = aux;
    } //if end    
}