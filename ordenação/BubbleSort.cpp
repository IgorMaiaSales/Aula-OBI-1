#include <iostream>

using namespace std;

int main(void){
    int n = 4;
    int A[n] = {1, 2, 3, 4};
    int V;

    for(int j = 0; j < n-1; j++){
        for(int i = 0; i < n-j-1; i++){
            if(A[i] > A[i+1]){
                V = A[i];
                A[i] = A[i+1];
                A[i+1] = V;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    cout << "\n";

    return 0;
}

