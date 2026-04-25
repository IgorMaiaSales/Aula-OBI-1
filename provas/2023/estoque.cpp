#include <iostream>

using namespace std;

int main(void){
    int M, N, P, I, J, V = 0;

    cin >> M >> N;

    int matrix[M][N];

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> matrix[i][j];
        }
    }

    cin >> P;

    for(int k = 0; k < P; k++){
        cin >> I >> J;

        if(matrix[I-1][J-1] > 0){
            V++;
            matrix[I-1][J-1]--;
        }
    }

    cout << V << "\n";

    return 0;
}