#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;

    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int c = 0, k = N-1;

    for(int i = N-2; i >= 0; i--){
        if(A[i] > A[k]){
            k = i;
        }else{
            c++;
        }
    }

    cout << c << "\n";

    return 0;
}