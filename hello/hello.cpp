#include <iostream>

using namespace std;

int main(void){
    string nome, sobrenome;

    cout << "Qual o seu nome e sobrenome? ";
    cin >> nome >> sobrenome;

    cout << "Olá, " << nome << " " << sobrenome << "!\n";

    return 0;
}