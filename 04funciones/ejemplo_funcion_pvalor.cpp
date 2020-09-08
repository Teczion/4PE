#include <iostream>
#include <stdio.h>
using namespace std;

//Declaracion de la funcion
int suma(int, int);

int main() {
 int opcion;
 do{
   cout<<"Bienvenido al programa"<<endl;
   cout<<"Opcion 1 Suma"<<endl;
   cout<<"Opcion 2"<<endl;
   cout<<"4 para salir"<<endl;
   cout<<"Selccione una opcion: ";
   cin>> opcion;
   switch(opcion){
    case 1: 
      int x, z;
      cout<<"Ingrese dos valores: ";
      cin>>x>>z;
      cout<<"Valores originales: "<<x<<","<<z<<endl;
      cout<<"El resultado es: "<<suma(x,z)<<endl;
      system("pause");
      break;
    case 2: break;
    case 4: break;
    default:break;
   }
 } while(opcion!=4);
}

//Definicion de la funcion
int suma(int a, int b){
  return a+b;
}

