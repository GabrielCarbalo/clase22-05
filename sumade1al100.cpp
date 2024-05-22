#include <iostream>
using namespace std;
int main()
{
    int numeros [100];

    for (int i = 0; i <  100; i++)
    {
        numeros[i] = i + 1;
    }

    int sum = 0;
    for (int j = 0; j < 100; j++)
    {
        sum = sum + numeros[j];
    }
    
    cout << "Los numeros del 1 al 100 sumados es: " << sum;
   return 0; 
}