#include <bits/stdc++.h>

using namespace std;

void explorar(char* lava, int i, int j, int N, int F);

int main(void){
    int N, F;

    cin >> N >> F;

    char M[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> M[i][j];
        }
    }

    if((M[0][0] - '0') <= F){
        M[0][0] = '*';
        explorar(&M[0][0], 0, 0, N, F);
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << M[i][j];
        }
        cout << "\n";
    }

    return 0;
}

void explorar(char* lava, int i, int j, int N, int F){
    
    if(i != 0 && lava[-N] != '*' && (lava[-N] - '0') <= F){
        lava[-N] = '*';
        explorar(&lava[-N], i-1, j, N, F);
    }

    if(j != 0 && lava[-1] != '*' && (lava[-1] - '0') <= F){
        lava[-1] = '*';
        explorar(&lava[-1], i, j-1, N, F);
    }

    if(i != (N-1) && lava[N] != '*' && (lava[N] - '0') <= F){
        lava[N] = '*';
        explorar(&lava[N], i+1, j, N, F);
    }

    if(j != (N-1) && lava[1] != '*' && (lava[1] - '0') <= F){
        lava[1] = '*';
        explorar(&lava[1], i, j+1, N, F);
    }

    return;
}