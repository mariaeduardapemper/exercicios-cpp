#include <iostream>

using namespace std;

int main () {

    int qtdTestes;
    int qtdAprovados;
    double percentual;



    cout << "Digite a quantidade de testes executados: ";
    cin >> qtdTestes;

    cout << "Digite a quantidade de testes aprovados: ";
    cin >> qtdAprovados;

    percentual = (qtdAprovados * 100.0) / qtdTestes;

    if (percentual >= 90) {
        cout << "Versão Aprovada" << endl;
    }

    else if (percentual >= 70 && percentual < 90) {
        cout << "Versão requer revisão" << endl;
    }

    else {
        cout << "Versão Reprovada" << endl;
    }


    cout << "Percentual: " << percentual << "%" << endl;

    return 0;
}