#include <iostream>

using namespace std;

int main () {

    string tarefa;
    int horas;

    cout << "Digite o nome da tarefa: " << endl;
    getline(cin, tarefa);

    cout << "Digite a estimativa de horas: " << endl;
    cin >> horas;

    if (horas <= 4) {
        cout << "Tarefa simples" << endl;
    }

    else if (horas > 4 && horas <= 12) {
        cout << "Tarefa média" << endl;
    }

    else if (horas > 12 && horas <= 24) {
        cout << "Tarefa complexa" << endl;
    }

    else {
        cout << "Tarefa muito complexa" << endl;
    }


    cout << "Tarefa: " << tarefa << endl;

    return 0;
}