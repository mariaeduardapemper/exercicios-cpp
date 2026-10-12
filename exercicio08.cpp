#include <iostream>

using namespace std;

int main () {

    int idade;
    int acesso;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    cout << "Digite código de acesso: ";
    cin >> acesso;

    if (idade >= 18 && acesso == 1234) {
        cout << "Acesso autorizado" << endl;
    }

    else {
        cout << "Acesso negado" << endl; 
    }





    return 0;
}