#include <iostream>
#include <string>

using namespace std;

int main () {
    

    string nome;
    string linguagem;
    int idade;
    int qtdProjetos;


    cout << "Digite nome: ";
    getline(cin, nome);

    cout << "Digite idade: ";
    cin >> idade;

    cout << "Digite linguagem de programação preferida: ";
    cin >> linguagem;

    cout << "Digite a quantidade de projetos já feito: ";
    cin >> qtdProjetos;


    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Linguagem preferida: " << linguagem << endl;
    cout << "Quantidade de projetos desenvolvidos: " << qtdProjetos << endl;




    return 0;
}