#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;

    cin >> N;

    int com[N], qc = 0;
    int sem[N], qs = 0;
    int P;

    for(int i = 1; i <= N; i++){
        cin >> P;

        if(P == 0){
            sem[qs] = i;
            qs++;
        } else {
            com[qc] = i;
            qc++;
        }
    }

    cout << qs << "\n";

    for(int i = 0; i < qs; i++){
        cout << sem[i];
        if(i == qs - 1){
            cout << "\n";
        }else{
            cout << " ";
        }
    }

    cout << qc << "\n";

    for(int i = 0; i < qc; i++){
        cout << com[i];

        if(i == qc - 1){
            cout << "\n";
        }else{
            cout << " ";
        }
    }

    return 0;
}