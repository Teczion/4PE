// Introducción a C++, Nacho Cabanes
// Ejemplo 05.03:
// Tercer ejemplo de tablas (for)
 
#include <iostream>
using namespace std;
 
int main()
{
    int numero[5] =       // Un array de 5 números enteros
        {200, 150, 100, -50, 300};
    int suma;             // Un entero que guardará la suma
    int i;                // Para recorrer el array
 
    suma = 0;             // Valor inicial 
    for (i=0; i<=4; i++)  // Y hallamos la suma
        suma += numero[i];
 
    cout << "Su suma es " << suma;            
    return 0;
}
