#include <iostream>

using namespace std;

int main(void){
    int base = 2;
    long long res = 1;
    char r;

    while(true){
        cout << "res = " << res << "\n";
        cin >> r;

        if(r != 'Y' && r != 'y'){
            break;
        }

        res = res * base;
    }

    return 0;
}