#include <bits/stdc++.h>

using namespace std;

int main(void){
    int H, M, S, T;

    cin >> H >> M >> S >> T;

    int Ht, Mt, St, R;

    Ht = T/3600;
    R = T%3600;

    Mt = R/60;

    St = R%60;

    int Hn, Mn, Sn;

    Sn = S + St;

    if(Sn >= 60){
        Sn -= 60;
        Mt++;
    }

    Mn = M + Mt;

    if(Mn >= 60){
        Mn -= 60;
        Ht++;
    }

    Hn = Ht + H;

    if(Hn >= 24){
        Hn -= 24;
    }

    cout << Hn << "\n";
    cout << Mn << "\n";
    cout << Sn << "\n";

    return 0;
}