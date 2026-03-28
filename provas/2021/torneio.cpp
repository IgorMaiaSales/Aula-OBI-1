#include <iostream>

using namespace std;

int main(void){
    char resp;
    int pont = 0, grupo;

    for(int i = 0; i < 6; i++){
        cin >> resp;

        if(resp == 'V'){
            pont++;
        }
    }

    switch(pont){
        case 6:
            grupo = 1;
            break;
        case 5:
            grupo = 1;
            break;
        case 4:
            grupo = 2;
            break;
        case 3:
            grupo = 2;
            break;
        case 2:
            grupo = 3;
            break;
        case 1:
            grupo = 3;
            break;
        default:
            grupo = -1;
            break;
    }

    cout << grupo << "\n";

    return 0;
}