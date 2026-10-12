#include <iostream>

using namespace std;

int main () {

    string cliente;
    string nomeProjeto;
    int projeto;
    double preco;
    char urgencia;



    cout << "Digite o nome do cliente: ";
    getline(cin, cliente);

    cout << "Digite opção de projeto (1, 2 ou 3): ";
    cin >> projeto;

    switch (projeto) {

        case 1: 
            nomeProjeto = "Site institucional";
            preco = 2000;
            break;
        
        case 2: 
            nomeProjeto = "Aplicativo mobile";
            preco = 5000;
            break;
        
        case 3: 
            nomeProjeto = "Sistema Web";
            preco = 8000;
            break;

        default:
            cout << "Opção de projeto inválida" << endl;
            return 1;
    }

    cout << "Projeto: " << nomeProjeto << endl;

    cout << "Deseja urgencia? (S/N): "<< endl;
    cin >> urgencia;


    if (urgencia == 'S') {

        preco = preco + (preco * 0.20);

    }


    cout << "Cliente: " << cliente << endl;
    cout << "Preço final: R$ " << preco << endl;




    return 0;
}