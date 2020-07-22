/*
Mis facturas de electricidad para los últimos 
tres meses han sido $23, $32 y $64. 
¿Cuál es la factura de electricidad mensual promedio 
durante el período de tres meses? 
*/
#include <iostream>
using namespace std;

int main(){
	int mes1 = 23;
	int mes2 = 32;
	int mes3 = 64;
	
	float promedio_mensual;
	promedio_mensual = (mes1+mes2+mes3)/3;
	cout<<"El promedio mensual es de: "<<promedio_mensual;
	
	
}
