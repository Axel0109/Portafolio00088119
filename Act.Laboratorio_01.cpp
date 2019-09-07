#include <iostream>
using namespace std;
//ejercicio 8
/*void imprimir(int num, int x);

int main() {
    int num;
    cout << "ingrese un numero entero positivo: " << endl;
    cin >> num;
    int x;
    x = num;

    imprimir(num, x);

    return 0;
}

void imprimir(int num, int x)
{
    if (num == 1)
        cout << 1 << endl;
    else
    {
        imprimir(num - 1, x);
        cout << num << endl;
    }
    if (num == x)
    {
        for (int i = num-1; i >= 1; i--)
            cout << i << endl;
    }
}*/
//ejercicio 16
/*
int main ()
{
    int a[10],s = 0;
    cout << "Ingrese 10 enteros."<<endl;
    for (int i=0; i<10;i++)
    {
        cout <<"-Elemento "; cin>>a[i];
        s+=a[i];
    }
    cout<<"La sumatoria es: "<<s<<endl;
    cout<<"El promedio es: "<<s/10<<endl;


    return 0;
}
*/

//ejercicio 22
/*int main(void) {
    int matriz[5][5];
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] = 0;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == 0 && j == 0) {
                cout << "digite un numero";
                cin >> matriz[i][j];
                j++;
                cout << "digite un numero";
                cin >> matriz[i][j];
                j-=2;
                i++;
            }
            else{
                cout << "digite un numero";
                cin >> matriz[i][j];
                j++;
                cout << "digite un numero";
                cin >> matriz[i][j];
                j++;
                cout << "digite un numero";
                cin >> matriz[i][j];
                j-=2;
                i++;
            }
        }

    }

    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

return 0;
}
*/

//ejercicio 26

/*
struct numeros{
    int real, imaginario;
};
int main(void) {
    numeros cifra;
    int conjugado=0;
    cout<<"Ingrese la parte real del complejo: "<<endl;
    cin>> cifra.real;
    cout<<"Ingrese la parte imaginaria del complejo: "<<endl;
    cin>>cifra.imaginario;
    if(cifra.imaginario > 0){
        conjugado= cifra.imaginario*(-1);
        cout<<"El complejo original es: "<<cifra.real<<"+"<<cifra.imaginario<<"j"<<endl;
        cout<<"Su conjugada es: "<<cifra.real<<conjugado<<"j"<<endl;
    }
    else{
        conjugado= cifra.imaginario*(-1);
        cout<<"El complejo original es: "<<cifra.real<<cifra.imaginario<<"j"<<endl;
        cout<<"Su conjugada es: "<<cifra.real<<"+"<<conjugado<<"j"<<endl;

    }
    return 0;

}
*/