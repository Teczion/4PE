// Introducción a C++, Nacho Cabanes
// Ejemplo 05.02:
// Segundo ejemplo de tablas 
 
#include <iostream>
using namespace std;
 
int main()
{
    int numero[5] =       // Un array de 5 números enteros
        {200, 150, 100, -50, 300};
    int suma;             // Un entero que guardará la suma
 
    suma = numero[0] +    // Y hallamos la suma
        numero[1] + numero[2] + numero[3] + numero[4];
    cout << "Su suma es " << suma;
    /* Nota: esta forma es algo menos engorrosa, pero todavía no */
    /* está bien hecho.  Lo seguiremos mejorando */
 
    return 0;
}
