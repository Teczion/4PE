//Ejercicio 3 suma
/*
 * Esribi un programa que solocite al usuario 
 * ingresar un numero con decimales y almacenalo 
 * en una variable.
 * A continuacion, el programa debe solicitar
 * al usuario que ingrese un numero entero y 
 * guardarlo en otra variable. En una tercera
 * variable se debera guardar el resultado de
 * la suma de los dos numeros ingresados por 
 * el usuario. Por ulitmo, se debe mostar en 
 * pantalla el texto "El resultado de la suma
 * es [suma]", donde "[suma]" se remplazara por
 * el resultado de la operacion
 */
 #include <iostream>
 using namespace std;
 
 main(){
 	float numero1, resultado;
 	int numero2;
 	
 	cout<<"\nIngrese primer numero: ";
	cin>>numero1;
 	cout<<"\nIngrese segundo numero: ";
	cin>>numero2;
 	resultado = numero1 + numero2;
 	cout<<"\nEl resultado de la suma es "<<resultado;
 	
 }
