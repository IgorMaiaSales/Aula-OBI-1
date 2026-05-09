#include <iostream>

using namespace std;

int main(void){
    int N, K, V;

    cin >> N >> K;

    int A[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int j = 0; j < N-1; j++){
        for(int i = 0; i < N-4 2
1 2 3 4j-1; i++){
            if(A[i] > A[i+1]){
                V = A[i];
                A[i] = A[i+1];
                A[i+1] = V;
            }
        }
    }

    for(int i = 0; i < N; i++){
        cout << A[i] << " ";
    }

    cout << "\n\n";

    int X = N-K;

    cout << A[X] << "\n";

    return 0;
}