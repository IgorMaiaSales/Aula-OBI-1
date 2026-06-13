#include <bits/stdc++.h>

using namespace std;

int main(void){
    int A, B, C, D, Q;

    cin >> A >> B >> C >> D;

    if(B%2 == 0){
        Q = D + C + B/2;

        if(A - C > 0){
            Q += (A-C+3)/4;
        }
    }else{
        Q = D + C + (B+1)/2;

        if(A-C-2 > 0){
            Q += (A-C+1)/4;
        }
    }

    cout << Q << "\n";

    return 0;
}