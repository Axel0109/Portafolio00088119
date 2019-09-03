//Axel Javier Alvarez Medina 00088119
//Andrea Alejandra Ayala Deras 00109319
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct continente{
    string conti, nombre[5], capital[5];
    int numeroHabitantes[5],promedioEdad[5];
};
    typedef struct continente cont;
int main() {
    cont pais[5];
    int sumaContinente[5];

    pais[0].conti = "asiatico";
    pais[1].conti = "europeo";
    pais[2].conti = "africano";
    pais[3].conti = "oceanico";
    pais[4].conti = "americano";

    for(int i = 0;i<5;i++){
        cout << "digite los datos de 5 paises del continente " << pais[i].conti << endl;
        for(int j = 0;j < 5;j++) {
            cout << "digite el nombre del pais: ";
            cin >> pais[i].nombre[j];
            cout << "digite la capital: ";
            cin >> pais[i].capital[j];
            cout << "digite el numero de habitantes: ";
            cin >> pais[i].numeroHabitantes[j];
            cout << "digite el promedio de edad: ";
            cin >> pais[i].promedioEdad[j];
        }
    }

    for(int i=0;i<5;i++){
        sumaContinente[i] = 0;
        for(int j=0;j<5;j++) {
            sumaContinente[i] += pais[i].numeroHabitantes[j];
        }
        cout << "el continente " << pais[i].conti << " tiene " << sumaContinente[i] << " habitantes" << endl;
    }

    return 0;
}