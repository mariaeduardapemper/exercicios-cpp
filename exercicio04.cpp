#include <iostream>

using namespace std;

int main () {

    int senha;

    cout << "Digite a senha: ";
    cin >> senha;

    if (senha == 2026) {
        cout << "Acesso permitido";
    }

    else {
        cout << "Acesso negado";
    }


    return 0;
}