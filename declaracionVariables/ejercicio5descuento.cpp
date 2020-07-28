// Descuento
/*
 * Escribi ub programa que solicite al usuario 
 * un numero y le reste 15%, almacenando todo 
 * en una unica variable. A continuacion, 
 * mostrar resultado final en pantalla.
 */
 #include<iostream>
 using namespace std;
 
 main(){
 	double numero;
 	cout<<"Ingresa un numero: ";
 	cin>>numero;
 	cout<<"Descontando el 15% queda: "<< numero - numero * 0.15;
 }
