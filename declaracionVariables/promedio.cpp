/*
Mis facturas de electricidad para los �ltimos 
tres meses han sido $23, $32 y $64. 
�Cu�l es la factura de electricidad mensual promedio 
durante el per�odo de tres meses? 
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
