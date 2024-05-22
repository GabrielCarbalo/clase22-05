#include <iostream>
using namespace std;
int main()
{
    string nombres [5];
    for (int i = 0; i < 5; i++)
    {
        cout << "introduzca un nombre"<<"\n";
        cin >> nombres[i];

    }
    for( int i=0; i<5; i++)
    {
        cout << "nombre "<< i+1 << nombres[i];
    }
    
    return 0;
}