#include <iostream>

using namespace std;

int main(void){
    int N, X, soma = 0;

    cin >> N;

    int num[N], j = 0;

    for(int i = 0; i < N; i++){
        cin >> X;

        if(X != 0){
            num[j] = X;
            j++;
        }else{
            j--;
        }
    }

    for(int i = 0; i < j; i++){
        soma += num[i];
    }

    cout << soma << "\n";

    return 0;
}