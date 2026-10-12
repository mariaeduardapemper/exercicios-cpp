#include <iostream>

using namespace std;

int main () {

    int idade;


    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Pode participar do processo seletivo";
    } 

    else {
        cout << "Não pode participar do processo seletivo";
    }


    return 0;
}