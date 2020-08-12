// Menu con do-while

#include<iostream>
using namespace std;

main(){
	int selection;l
	do
	{
	cout<<"\n Menu (1,2 or 3, otra opcion para salir)"<<"\n";
	cout<<"\n 0tros: Salir";
	cout<<"\n 1: Opcion";
	cout<<"\n 2: Opcion";
	cout<<"\n 3: Opcion";
	cout<<"\n\n Ingrese seleccion: ";

	cin>>selection;

	}while((selection > 0) && (selection < 4));

// verdadero para 1, 2 y 3 SOLAMENTE, luego repita
// falso para otros números incluyendo el 0, entonces para.
// El bucle "do" se repite si la expresión "while" es verdadera.

 
}
