#include <iostream>

using namespace std;

int main(void){
    int a, b, res;

    cout << "Escreva dois números: ";
    cin >> a >> b;

    res = a % b;

    cout << "O resto da divisão dos números é " <<  res << "\n";

    return 0;
}