#include <iostream>

using namespace std;

int main(void){
    int base, exp, res = 1;

    cout << "Qual a base? ";
    cin >> base;

    cout << "Qual o expoente? ";
    cin >> exp;

    for(int i = 0; i < exp; i++){
        res *= base; // res = res * base
    }

    cout << "A resposta é " << res << "\n";

    return 0;
}