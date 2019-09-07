#include <iostream>

using namespace std;

int multiplicacion(int num1, int num2){
    if(num2 == 1){
        return num1;
    }
    else{
        return num1+multiplicacion(num1, num2-1);
    }
}

int main(void) {
    int num1 = 0,num2 = 0;
    cout << "MULTIPLICACION" << endl;
    cout << "digite num1: ";cin >> num1;
    cout << "digite num2: ";cin >> num2;
    multiplicacion(num1, num2);
    cout << "resultado: " << multiplicacion(num1, num2) << endl;
    return 0;
}
