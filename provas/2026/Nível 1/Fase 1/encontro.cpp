#include <bits/stdc++.h>

using namespace std;

int main(void){
    int A1, A2, B1, B2, C1, C2;

    cin >> A1 >> A2;
    cin >> B1 >> B2;
    cin >> C1 >> C2;

    int I1, I2; // Intersecção entre A e B

    I1 = max({A1, B1, C1});
    I2 = min({A2, B2, C2});

    if(I2 < I1){
        cout << 0 << "\n";
        return 0;
    }

    int res = I2 - I1 + 1;

    cout << res << "\n";

    return 0;
}