#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, K, Q;

    cin >> N >> K >> Q;

    int cenas[N + 1];

    for(int i = 1; i <= N; i++){
        cenas[i] = i;
    }

    for(int i = 1; i <= N; i++){
        cout << cenas[i] << " ";
        if(i == N) cout << "\n";
    }

    int L, R, aux;

    for(int i = 0; i < Q; i++){
        cin >> L >> R;

        while(L < R){
            aux = cenas[L];
            cenas[L] = cenas[R];
            cenas[R] = aux;

            L++;
            R--;
        }

        for(int i = 1; i <= N; i++){
            cout << cenas[i] << " ";
            if(i == N) cout << "\n";
        }
    }

    cout << cenas[K] << "\n";

    return 0;
}