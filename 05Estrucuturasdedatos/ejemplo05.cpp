// Introducción a C++, Nacho Cabanes
// Ejemplo 05.05:
// Array de dos dimensiones
 
#include <iostream>
using namespace std;
 
int main() 
{      
    int notas[2][10] = 
        { 
            { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
        };
 
    cout << "La nota del tercer alumno del grupo 1 es "
        << notas[0][2];
 
    return 0;
}
