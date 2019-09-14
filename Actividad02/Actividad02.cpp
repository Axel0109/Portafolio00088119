#include <iostream>
using namespace std;

int main(void){
    int i = 0, n = 0;
    float datoMediana, numeros[n];

    cout << "digite el tamanio del arreglo: ";cin >> n;

    for(i = 0; i < n; i++){
        cout << "digite los numeros: "; cin >> numeros[i];
    }

    for(i = 0; i < n; i++){
        cout << "los numeros son: " << numeros[i] << endl;
    }
    if(i%2 == 0){
        i = i/2;
        datoMediana = (numeros[i] + numeros[i-1])/2;
        cout << "la mediana es: " << datoMediana;
    }
    else{
        i = i/2;
        datoMediana = numeros[i];

        cout << "la mediana es: " << datoMediana;
    }

    return 0;
}