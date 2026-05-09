#include <bits/stdc++.h>

using namespace std;

const int N_MAX = 500;

char M[N_MAX][N_MAX];

int N, F;

void explorar(int i, int j);

int main(void){
    cin >> N >> F;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> M[i][j];
        }
    }

    if((M[0][0] - '0') <= F){
        M[0][0] = '*';
        explorar(0, 0);
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << M[i][j];
        }
        cout << "\n";
    }

    return 0;
}

void explorar(int i, int j){
    
    if(i != 0 && M[i-1][j] != '*' && (M[i-1][j] - '0') <= F){
        M[i-1][j] = '*';
        explorar(i-1, j);
    }

    if(j != 0 && M[i][j-1] != '*' && (M[i][j-1] - '0') <= F){
        M[i][j-1] = '*';
        explorar(i, j-1);
    }

    if(i != (N-1) && M[i+1][j] != '*' && (M[i+1][j] - '0') <= F){
        M[i+1][j] = '*';
        explorar(i+1, j);
    }

    if(j != (N-1) && M[i][j+1] != '*' && (M[i][j+1] - '0') <= F){
        M[i][j+1] = '*';
        explorar(i, j+1);
    }

    return;
}