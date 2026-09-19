#include <bits/stdc++.h>

using namespace std;

int troco(int N);

int main(void){

    int N;
    cout << "Qual o valor do troco? ";
    cin >> N;

    int Q = troco(N);

    cout << "A menor quantidade de notas do troco é " << Q << ".\n";

    return 0;
}

int troco(int N){
    int T[N+1], A, B, C;

    T[0] = 0;

    for(int i = 1; i <= N; i++){
        A = T[i-1];

        if(i-4 < 0){
            T[i] = A + 1;
        }else if(i-5 < 0){
            B = T[i-4];
            T[i] = min(A+1, B+1);
        }else{
            B = T[i-4];
            C = T[i-5];
            T[i] = min({A+1, B+1, C+1});
        }
    }

    return T[N];

}