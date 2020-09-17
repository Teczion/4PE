//Crear un fichero de salida, abrir un fichero de entrada

/*
* Empezaremos con algo sencillo. 
* Vamos a crear un fichero mediante un objeto de la clase ofstream, 
* y posteriormente lo leeremos mediante un objeto de la clase ifstream:
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
   char cadena[128];
   // Crea un fichero de salida
   ofstream fs("nombre.txt"); 

   // Enviamos una cadena al fichero de salida:
   fs << "Hola, mundo" << endl;
   // Cerrar el fichero, 
   // para luego poder abrirlo para lectura:
   fs.close();

   // Abre un fichero de entrada
   ifstream fe("nombre.txt"); 

   // Leeremos mediante getline, si lo hici�ramos 
   // mediante el operador << s�lo leer�amos 
   // parte de la cadena:
   fe.getline(cadena, 128);

   cout << cadena << endl;

   return 0;
}
