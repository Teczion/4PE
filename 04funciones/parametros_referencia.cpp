 #include <iostream>
using namespace std;
void intercambio(int *, int *);
int main( )
{
    int a, b;
    cout << "Introduce primer numero: ";
    cin >> a;
    cout << "Introduce segundo numero: ";
    cin >> b;
    cout << endl;
    cout << "valor de a: " << a << " valor de b: " << b << endl;
    intercambio(&a, &b); 
    cout << endl << "Despues del intercambio: " << endl << endl;
    cout << "valor de a: " << a << " valor de b: " << b << endl;
    system("pause");
}
void intercambio(int *x, int *y)
{
    int z;                      
    z = *x;
    *x = *y;
    *y = z;
}
