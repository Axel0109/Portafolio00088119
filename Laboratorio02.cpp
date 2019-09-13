#include <iostream>

using namespace std;

/*int conteo(int n);
int main(void) {
    int n = 0;
    cout << "digite el numero: ";
    cin >> n;

    int r = conteo(n);

    cout << "tiene " << r << " digitos" << endl;
    return 0;

}

int conteo(int n){
    return n < 10 ? 1 : 1 + conteo(n/10);

}*/
int Euclides(int mayor, int menor, int mcd);
int main(void){
    int mayor = 0, menor = 0;
    cout << "ingrese numero mayor: ";cin >> mayor;
    cout << "ingrese numero menor: ";cin >> menor;
        while(mayor <= menor) {
            mayor = 0, menor = 0;
            cout << "ingrese mayor: ";
            cin >> mayor;
            cout << "ingrese menor: ";
            cin >> menor;
        }
    int mcd = mayor % menor;
    cout << "el MCD es: " << Euclides(mayor, menor, mcd);

}

int Euclides(int mayor, int menor, int mcd){
    if (mcd == 0)
        return menor;
    else{
        mayor = menor;
        menor = mcd;
        mcd = mayor%menor;
        return Euclides(mayor, menor, mcd);

    }
}