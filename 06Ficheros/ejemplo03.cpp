#include <iostream> //Entrada, salida
#include <fstream> //arhivos
#include <string> //cadenas
#include <stdlib.h> //rand
#include <time.h>

using namespace std;

int main(){
string linea, palabras[20];

//*** leer palabras desde txt *****
ifstream miarchivo("palabras.txt");
if(miarchivo.is_open()){
  int i = 0;
  while(getline(miarchivo, linea)){
    palabras[i] = linea;
    cout<<palabras[i]<<endl;
    i++;
  }
  miarchivo.close();
}

//*** Contar numero de caracteres ***
string ejemplo = "Juanito";
cout<<ejemplo.length();


//**** Elegir una palabra al azar ***
//Inicizando generados de numeros
srand(time(0));

cout<<"Numero a azar entre 1 y 10"<<endl;
for(int i = 0; i<10; i++){
  cout<<(rand() % 10) + 1 <<" ";
}

srand(time(0));
cout<<"\n---------\n";
cout<<(palabras[(rand() % 5) +  1 ]);
}
