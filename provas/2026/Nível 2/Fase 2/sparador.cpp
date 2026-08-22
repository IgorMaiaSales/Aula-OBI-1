#include <bits/stdc++.h>

using namespace std;

const int Fmax 100000;
const int Nmax 100000;

int M[Fmax][Nmax];
int PTotal[Fmax];
int index[Fmax];
int P[Nmax];

int main(void){
    int N, F;

    cin >> N >> F;

    for(int i = 0; i < N; i++){
        cin >> P[i];
    }

    for(int i = 0; i < F; i++){
        M[i][index[i]] = P[i];
        PTotal[i] += P[i];
        index[i]++;
    }

    int i;

    for(int j = F; j < N; j++){
        res = min_element(PTotal.beguin(), PTotal.beguin() + N-1);
        i = distance(PTotal.beguin(), res);
        M[i][index[i]] = P[i];
        PTotal[i] += P[i];
        index[i]++;
    }

    for(int j = 0; j < F; j++){
        k = 0;
        while(M[j][k] < index[j]){
            cout << M[j][k] << ' ';
            k++;
        }
        cout << "\n";
    }

    return 0;
}