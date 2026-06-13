#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;

    cin >> N;

    int F[N];

    for(int i = 0; i < N; i++){
        cin >> F[i];
    }

    int t = 0, pos = 0;

    for(int i = 0; i < N; i++){
        if(F[i] >= 60){
            t = max(t, (i - pos));
            pos++;
        }
    }

    cout << t << "\n"

    return 0;
}