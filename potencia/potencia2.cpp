#include <iostream>

using namespace std;

int main(void){
    int base = 2;
    long long res = 1;
    char r;

    do{
        res *= base;

        cout << res << "\n";
        cin >> r;
    }while(r == 'y' || r == 'Y');

    return 0;
}