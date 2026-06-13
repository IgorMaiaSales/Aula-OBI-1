#include <bits/stdc++.h>

using namespace std;

int main(void){
    int A, B;

    cin >> A >> B;

    int X[A], Y[B];

    for(int i = 0; i < A; i++){
        cin >> X[i];
    }

    for(int i = 0; i < B; i++){
        cin >> Y[i];
    }

    int j = 0;

    for(int i = 0; i < A; i++){
        if(X[i] == Y[j]){
            j++;

            if(j == B){
                break;
            }
        }
    }

    if(j == B){
        cout << "S\n";
    }else{
        cout << "N\n";
    }


    return 0;
}