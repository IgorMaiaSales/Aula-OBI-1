#include <iostream>

using namespace std;

const int X_max = 101;
int amigos[X_max], tempos[X_max];


int main() {
    char evento;
    int X, N, tempo = 0;
    bool flag = false;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> evento >> X;
        
        if(evento == 'T'){
            flag = true;
            tempo += X;
        }else if (flag == true){
            flag = false;
        }else{
            tempo++;
        }

        if(evento == 'R'){
            amigos[X] = tempo;
        }else if(evento == 'E'){
            tempos[X] += tempo - amigos[X];
            amigos[X] = 0;
        }
    }

    for(int i = 1; i < X_max; i++){
        if(tempos[i] != 0 && amigos[i] == 0){
            cout << i << ' ' << tempos[i] << "\n";
        }else if(amigos[i] != 0){
            cout << i << ' ' << "-1" << "\n";
        }
    }

    return 0;
}