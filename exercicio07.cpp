#include <iostream>

using namespace std;

int main () {

    int prioridade;

    cout << "Digite nível de prioridade: ";
    cin >> prioridade;

    switch (prioridade) {

        case 1:
            cout << "Prioridade baixa" << endl;
            break;

        case 2: 
            cout << "Prioridade média" << endl;
            break;

        case 3: 
            cout << "Prioridade alta" << endl;
            break;
        
        case 4:
            cout << "Prioridade crítica" << endl;
            break;

        default: 
            cout << "Prioridade inválida" << endl;      
    }


    return 0;
}