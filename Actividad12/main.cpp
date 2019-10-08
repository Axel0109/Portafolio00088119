#include <iostream>
#include <vector>
using namespace std;

struct orden{
    int revueltas;
    int frijolConQueso;
    int queso;
    string arroz;
};

orden solicitarOrden(){
    orden p;
    cout << "revueltas: "; cin >> p.revueltas;
    cout << "frijol con queso: ";   cin >> p.frijolConQueso;
    cout << "queso: "; cin >> p.queso;
    cout << "arroz?(si o no) "; cin >> p.arroz;

    return p;
}

void mostrarOrden(orden p){
    cout << "revueltas: " << p.revueltas << endl;
    cout << "frijol con queso: " << p.frijolConQueso << endl;
    cout << "queso: " << p.queso << endl;
    cout << "arroz: " << p.arroz << endl;
    cout << endl;
}

vector<orden> lista;

void agregarOrden(){
    orden p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
             << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
                break;
            case 2: lista.push_back(p);
                continuar = false;
                break;
            default: cout << "Opcion erronea!" << endl;
                break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++)
        mostrarOrden(lista[i]);
}

int main(){

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver Ordenes"
             << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
                break;
            case 2: cout << "Mostrando..." << endl;
                mostrarLista();
                break;
            case 3: continuar = false;
                break;
            default: cout << "Opcion erronea!" << endl;
                break;
        }
    }while(continuar);

    return 0;
}