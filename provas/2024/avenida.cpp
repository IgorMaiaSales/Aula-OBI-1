#include <bits/stdc++.h>

using namespace std;

int main(void){
    int D, Dist;

    cin >> D;

    Dist = D/400;
    Dist = Dist*400;

    int DistA, DistP;

    DistA = D - Dist;
    DistP = 400 - DistA;

    int Min;

    Min = min(DistA, DistP);

    cout << Min;

    return 0;
}