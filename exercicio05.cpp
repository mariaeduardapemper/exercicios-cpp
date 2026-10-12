#include <iostream>

using namespace std;

int main () {

    int cpu;

    cout << "Digite a porcentagem de utilização da CPU: ";
    cin >> cpu;

    if (cpu < 50) {
        cout << "Uso normal";
    }

    else if (cpu >= 50 && cpu <= 80) {
        cout << "Atenção";
    }
    
    else {
        cout << "Uso crítico";
    }


    return 0;
}