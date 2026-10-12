#include <iostream>

using namespace std;

int main () {

    int f1;
    int f2;
    int soma;
    int total;


    cout << "Digite a hora prevista para a funcionalidade 1: ";
    cin >> f1;

    cout << "Digite a hora prevista para a funcionalidade 2: ";
    cin >> f2;

    soma = f1 + f2;

    total = soma;


    cout << "Horas funcionalidade 1: " << f1 << endl;
    cout << "Horas funcionalidade 2: " << f2 << endl;
    cout << "Total horas: " << total << endl;




    return 0;
}