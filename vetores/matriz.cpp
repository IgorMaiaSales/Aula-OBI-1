#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int N, M, total = 0, res = 0;

    cin >> N >> M;
    
    int D[N][3];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            cin >> D[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            if(j == 1){
                total += D[i][j]*9;
            }else{
                total += D[i][j]*4;
            }
        }
    }

    res = M - total;

    cout << res << "\n";

    return 0;
}