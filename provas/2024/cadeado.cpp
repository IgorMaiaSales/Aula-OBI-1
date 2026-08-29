#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, total = 0, dist;

    cin >> N;

    int C[N], S[N];

    for(int i = 0; i < N; i++){
        cin >> C[i] >> S[i];
        dist = abs(C[i] - S[i]);
        total += min(dist, 10 -dist);
    }

    cout << total << "\n";

    return 0;
}