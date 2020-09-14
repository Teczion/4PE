// Introducción a C++, Nacho Cabanes
// Ejemplo 05.06
// Matrices, primer contacto
 
#include <iostream>
using namespace std;
 
int main() 
{      
    float matriz[2][3][3];
    float matrizSuma[3][3];
    int m, fila, columna;
 
    // Pedimos los datos de las dos matrices
    for (m=0; m<2; m++)
        for (fila=0; fila<3; fila++)
            for (columna=0; columna<3; columna++)
            {
                cout << "En la matriz " << m+1
                    << ", dime el dato de la fila " << fila+1 
                    << " y la columna " << columna+1 << ": ";
                cin >> matriz[m][fila][columna];
            }
 
    // Calculamos la suma
    for (fila=0; fila<3; fila++)
        for (columna=0; columna<3; columna++)
            matrizSuma[fila][columna] = matriz[0][fila][columna]
                + matriz[1][fila][columna];
 
 
    // Y mostramos el resultado (puede salir un poco descolocado)
    cout << "La matriz suma es " << endl;
    for (fila=0; fila<3; fila++)
    {
        for (columna=0; columna<3; columna++)
            cout << matrizSuma[fila][columna] << " "; 
        cout << endl;
    }
 
    return 0;
}
