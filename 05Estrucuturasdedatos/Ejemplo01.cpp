// Introducción a C++, Nacho Cabanes
// Ejemplo 05.01:
// Primer ejemplo de tablas
 
#include <iostream>
using namespace std;
 
int main()
{
    int numero[5];    // Un array de 5 numeros enteros
    int suma;         // Un entero que guardará la suma
 
    numero[0] = 200;      // Les damos valores
    numero[1] = 150;
    numero[2] = 100;
    numero[3] = -50;
    numero[4] = 300;
    suma = numero[0] +    // Y hallamos la suma
        numero[1] + numero[2] + numero[3] + numero[4];
    cout << "Su suma es " << suma;
    /* Nota: esta es la forma más ineficiente e incómoda...
    Ya lo iremos mejorando */
 
    return 0;
}
