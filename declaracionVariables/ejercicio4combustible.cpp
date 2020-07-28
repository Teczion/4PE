// Consumo combustible
/*
 * Escribi un programa que solocite al usuario 
 * ingresar la cantidad de kilometros recorridos
 * por motociclera y la cantidad de litros de
 * combustible que consumio durante ese recorrido.
 * Mostrar el consumo de cobustible por kilometro
 */
 #include<iostream>
 using namespace std;
 
 main(){
 	float km_recorridos, lt_gastados, consumo;
 	cout<<"Kilometros recorridos: "; 
 	cin>> km_recorridos;
 	cout<<"\nLitros de combustible gastados: ";
 	cin>> lt_gastados;
 	
 	consumo = km_recorridos / lt_gastados;
 	cout<<"\nEl consumo por kilometro es de "<<consumo;
 }
