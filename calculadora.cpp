#include <iostream>

using namespace std;

int main(){
    float primero, segundo, resultado;
    char operador, continuar;

    do{

    continuar = ' ';
    cout << "Introduce el primer número de la operación" << endl;
    cin >> primero;
    cout << "Introduce el operador (+,-,*,/)" << endl;
    cin >> operador;
    cout << "Introduce el segundo número de la operación" << endl;
    cin >> segundo;

    switch(operador){
        case '+':
            resultado = primero + segundo;
        break;
        case '-':
            resultado = primero - segundo;
        break;
        case '*':
            resultado = primero * segundo;
        break;
        case '/':
            resultado = primero / segundo;
        break;
    }

    cout << "La respuesta es:  " << resultado << endl;
    cout << "¿Quieres realizar otra operación? (s/n)" << endl;
    cin >> continuar;

    }while(continuar == 's');

    return 0;
}