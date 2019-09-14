#include <iostream>

using namespace std;

int array[]{ 1,3,4,5,17,18,31,33 };

int algor(int x,int m, int n)
{
    if (m > n)
        return -1;
    int r = (m + n) / 2;
    if (x == array[r])
        return (r);
    else if (x < array[r])
        algor(x, m, r - 1);
    else
        algor(x, r + 1, n);
}

int main()
{
    int low = 0, high = 7,x=0;
    cout << "ingrese un numero entero positivo: " << endl;
    cin >> x;
    int i = algor(x, low, high);
    if (i == -1)
        cout << "El numero ingresado no existe" << endl;
    else
        cout << "El numero " << x << " se encuentra en la casilla: " << i << endl;
}
