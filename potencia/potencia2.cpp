#include <iostream>

using namespace std;

int main(void){
    long long res = 1;
    char letra;

    do{
        cout << "res = " << res << "\n";
        cin >> letra; 

        res *= 2;
    }while(letra == 'y' || letra == 'Y');

    return 0;
}