// Ejericio #2 Ingreso de nombre
/*
 * Escribí un programa que solocite al usuario que ingrese su nombre.
 * El nombre debe almacenar en una variable llamada nombre. A continuación
 * Se debe mostrar en pantalla el texto "Ahora estas en la matrix, [usuario]",
 * donde "[usuario]" se remplazara por el nombre que el usuario haya ingresado.
 */
 
#include <iostream>
using namespace std;

main (){
	char nombre[100];
	cout<<"Bienvenido\n Por favor ingresa tu nombre: ";
	cin>> nombre;
	cout<<"Tu nombre: " << nombre << "\n";
	cout<<"Ahora estas en la matrix, "<<nombre;
}
