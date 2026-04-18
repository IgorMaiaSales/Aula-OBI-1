#include <bits/stdc++.h>

using namespace std;

void invade(char* lava, int i, int j, int N, int F);

int main(void){
    int N, F;

    cin >> N >> F;

    char M[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> M[i][j];
        }
    }

    if((int)M[0][0] <= F){
        M[0][0] = '*';
        invade(&M[0][0], 0, 0, N, F);
    }

}

// tipo_retorno nome_func(tipo argumento1, tipo argumento2, ...)
void invade(char* lava, int i, int j, int N, int F){
    bool n = false, s = false, l = false, o = false;

    // Norte
    if(i != 0){
        if(*lava[-N] != "*" && (int)*lava[-N] < F){
            *lava[-N] = "*";
            n = true;
        }
    }

    // Oeste
    if(j != 0){
        if(*lava[-1] != '*' && (int)*lava[-1] < F){
            *lava[-1] = '*';
            o = true;
        }
    }

    // Sul
    if(i != (N-1)){
        if(*lava[N] != '*' && (int)*lava[N] < F){
            *lava[N] = '*';
            s = true;
        }
    }

    // Leste
    if(j != (N-1)){
        if(*lava[1] != "*" && (int)*lava[1] < F){
            *lava[1] = '*';
            l = true;
        }
    }

    if(n == true){
        invade(&lava[-N], i-1, j, N, F);
    }
    if(o == true){
        invade(&lava[-1], i, j-1, N, F);
    }
    if(s == true){
        invade(&lava[N], i+1, j, N, F);
    }
    if(l == true){
        invade(&lava[1], i, j+1, N, F);
    }
    return;
}