#include <iostream>

using namespace std;

int main(void){
    int nota, idade;

    cout << "Qual a sua idade? ";
    cin >> idade;

    cout << "Qual a nota da sua prova? ";
    cin >> nota;

    if (nota > 100 || nota < 0 || idade <= 0) {
        cout << "A nota ou idade está em formato inválido!\n";

        return 0;
    }

    if (!(idade <= 18)) {
        cout << "Você pertence à modalidade Programação Sênior!\n";

        return 0;
    }

    if (idade <= 18 && nota >= 80){
        cout << "Você ganhou uma medalha na OBI!\n";

        return 0;
    }

    cout << "Infelizmente você não ganhou uma medalha na OBI. Tente novamente próximo ano!\n";

    return 0;
}